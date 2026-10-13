// ===== 00c2b25c  FUN_00c2b25c =====

undefined4 FUN_00c2b25c(long *param_1,long *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  long lVar9;
  char **local_78;
  char *local_70;
  char *pcStack_68;
  long *local_60 [2];
  code *local_50;
  code *pcStack_48;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  if (((DAT_00dbaee8 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00dbaee8), iVar4 != 0)) {
    DAT_00dbaee0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbaee8);
  }
  local_78 = (char **)0x0;
  pcStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbaee0 != '\0') {
    local_78 = &local_70;
    FUN_0066d348(0x42,DAT_00dbaee0,"BaseChannel::SetRtpTransport",0,0,0,0,0,0);
    local_70 = DAT_00dbaee0;
    pcStack_68 = "BaseChannel::SetRtpTransport";
  }
  plVar5 = (long *)param_1[0x16];
  if (param_2 != plVar5) {
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x70))(plVar5,param_1 + 2);
      FUN_007b5df8(param_1[0x16] + 8,param_1);
      FUN_007b5df8(param_1[0x16] + 0x70,param_1);
      FUN_007b5df8(param_1[0x16] + 0x90,param_1);
      FUN_007b5df8(param_1[0x16] + 0xb0,param_1);
      param_1[0x16] = 0;
      plVar5 = (long *)(**(code **)(*param_1 + 0x28))(param_1);
      (**(code **)(*plVar5 + 0x58))(plVar5,0);
      plVar5 = (long *)(**(code **)(*param_1 + 0x40))(param_1);
      (**(code **)(*plVar5 + 0x40))(plVar5,0);
      plVar5 = (long *)param_1[5];
      if (plVar5 == (long *)param_1[6]) {
        lVar9 = param_1[0x29];
        lVar2 = param_1[0x2a];
        while (lVar9 != lVar2) {
          lVar2 = lVar2 + -0x20;
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          FUN_00668f8c(lVar2);
        }
        param_1[0x2a] = lVar9;
      }
      else {
        lVar9 = param_1[8];
        if (lVar9 != 0) {
          FUN_00d0f740(1,lVar9);
        }
        local_60[0] = (long *)operator_new(0x30);
        *local_60[0] = lVar9;
        local_60[0][4] = (long)FUN_004473ec;
        local_60[0][5] = (long)FUN_00c31f18;
        local_60[0][2] = (long)param_1;
        local_50 = FUN_005db390;
        pcStack_48 = FUN_005db348;
        (**(code **)(*plVar5 + 8))(plVar5,local_60,&uStack_21,&uStack_22);
        (*local_50)(0,local_60,local_60);
      }
    }
    if (param_2 != (long *)0x0) {
      uVar6 = FUN_00c2b0f0(param_1,param_2);
      if ((uVar6 & 1) == 0) {
        uVar7 = 0;
        goto joined_r0x00c2b560;
      }
      plVar5 = (long *)(**(code **)(*param_1 + 0x28))(param_1);
      (**(code **)(*plVar5 + 0x58))(plVar5,param_1 + 1);
      plVar5 = (long *)(**(code **)(*param_1 + 0x40))(param_1);
      (**(code **)(*plVar5 + 0x40))(plVar5,param_1 + 1);
      plVar5 = (long *)(**(code **)(*param_1 + 0x28))(param_1);
      uVar3 = (**(code **)(*(long *)param_1[0x16] + 0x38))((long *)param_1[0x16]);
      (**(code **)(*plVar5 + 0x48))(plVar5,uVar3 & 1);
      FUN_00c2b5f8(param_1);
      puVar1 = (undefined4 *)param_1[0x18];
      for (puVar8 = (undefined4 *)param_1[0x17]; puVar8 != puVar1; puVar8 = puVar8 + 2) {
        (**(code **)(*(long *)param_1[0x16] + 0x20))((long *)param_1[0x16],*puVar8,puVar8[1]);
      }
      uVar6 = (**(code **)(*(long *)param_1[0x16] + 0x30))();
      if ((uVar6 & 1) == 0) {
        puVar1 = (undefined4 *)param_1[0x1b];
        for (puVar8 = (undefined4 *)param_1[0x1a]; puVar8 != puVar1; puVar8 = puVar8 + 2) {
          (**(code **)(*(long *)param_1[0x16] + 0x28))((long *)param_1[0x16],*puVar8,puVar8[1]);
        }
      }
    }
  }
  uVar7 = 1;
joined_r0x00c2b560:
  if ((local_78 != (char **)0x0) && (**local_78 != '\0')) {
    FUN_0066d348(0x45,*local_78,local_78[1],0,0,0,0,0,0);
  }
  return uVar7;
}


// ===== 00c2b5f8  FUN_00c2b5f8 =====

void FUN_00c2b5f8(long param_1)

{
  int iVar1;
  ulong uVar2;
  char **local_48;
  char *local_40;
  char *pcStack_38;
  
  if (((DAT_00dbaf38 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00dbaf38), iVar1 != 0)) {
    DAT_00dbaf30 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbaf38);
  }
  local_48 = (char **)0x0;
  pcStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbaf30 != '\0') {
    local_48 = &local_40;
    FUN_0066d348(0x42,DAT_00dbaf30,"BaseChannel::UpdateWritableState_n",0,0,0,0,0,0);
    local_40 = DAT_00dbaf30;
    pcStack_38 = "BaseChannel::UpdateWritableState_n";
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x40))(*(long **)(param_1 + 0xb0),1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x40))(*(long **)(param_1 + 0xb0),0),
     (uVar2 & 1) == 0)) {
    FUN_00c2c484(param_1);
  }
  else {
    FUN_00c2c1e4(param_1);
  }
  if ((local_48 != (char **)0x0) && (**local_48 != '\0')) {
    FUN_0066d348(0x45,*local_48,local_48[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 00c2b74c  FUN_00c2b74c =====

void FUN_00c2b74c(long param_1,byte param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 uStack_52;
  undefined1 uStack_51;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  param_2 = param_2 & 1;
  if (*(byte *)(param_1 + 0xf1) != param_2) {
    lVar2 = *(long *)(param_1 + 0x40);
    plVar1 = *(long **)(param_1 + 0x28);
    *(byte *)(param_1 + 0xf1) = param_2;
    if (lVar2 != 0) {
      FUN_00d0f740(1,lVar2);
    }
    local_50[0] = (long *)operator_new(0x30);
    *local_50[0] = lVar2;
    local_50[0][4] = (long)FUN_004473ec;
    local_50[0][5] = (long)FUN_00c31f80;
    local_50[0][2] = param_1;
    *(byte *)(local_50[0] + 3) = param_2;
    local_40 = FUN_005db390;
    pcStack_38 = FUN_005db348;
    (**(code **)(*plVar1 + 8))(plVar1,local_50,&uStack_51,&uStack_52);
    (*local_40)(0,local_50,local_50);
  }
  return;
}


// ===== 00c2b81c  FUN_00c2b81c =====

uint FUN_00c2b81c(long *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  char **local_68;
  char *local_60;
  char *pcStack_58;
  
  if (((DAT_00dbaef8 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00dbaef8), iVar2 != 0)) {
    DAT_00dbaef0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbaef8);
  }
  local_68 = (char **)0x0;
  pcStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbaef0 != '\0') {
    local_68 = &local_60;
    FUN_0066d348(0x42,DAT_00dbaef0,"BaseChannel::SetLocalContent",0,0,0,0,0,0);
    local_60 = DAT_00dbaef0;
    pcStack_58 = "BaseChannel::SetLocalContent";
  }
  uVar1 = (**(code **)(*param_1 + 0xe0))(param_1,param_2,param_3,param_4);
  if ((local_68 != (char **)0x0) && (**local_68 != '\0')) {
    FUN_0066d348(0x45,*local_68,local_68[1],0,0,0,0,0,0);
  }
  return uVar1 & 1;
}


// ===== 00c2b964  FUN_00c2b964 =====

uint FUN_00c2b964(long *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  char **local_68;
  char *local_60;
  char *pcStack_58;
  
  if (((DAT_00dbaf08 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00dbaf08), iVar2 != 0)) {
    DAT_00dbaf00 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbaf08);
  }
  local_68 = (char **)0x0;
  pcStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbaf00 != '\0') {
    local_68 = &local_60;
    FUN_0066d348(0x42,DAT_00dbaf00,"BaseChannel::SetRemoteContent",0,0,0,0,0,0);
    local_60 = DAT_00dbaf00;
    pcStack_58 = "BaseChannel::SetRemoteContent";
  }
  uVar1 = (**(code **)(*param_1 + 0xe8))(param_1,param_2,param_3,param_4);
  if ((local_68 != (char **)0x0) && (**local_68 != '\0')) {
    FUN_0066d348(0x45,*local_68,local_68[1],0,0,0,0,0,0);
  }
  return uVar1 & 1;
}


// ===== 00c2baac  FUN_00c2baac =====

uint FUN_00c2baac(undefined8 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  char **local_58;
  char *local_50;
  char *pcStack_48;
  
  if (((DAT_00dbaf18 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00dbaf18), iVar2 != 0)) {
    DAT_00dbaf10 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbaf18);
  }
  local_58 = (char **)0x0;
  pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbaf10 != '\0') {
    local_58 = &local_50;
    FUN_0066d348(0x42,DAT_00dbaf10,"BaseChannel::SetPayloadTypeDemuxingEnabled",0,0,0,0,0,0);
    local_50 = DAT_00dbaf10;
    pcStack_48 = "BaseChannel::SetPayloadTypeDemuxingEnabled";
  }
  uVar1 = FUN_00c2bbd4(param_1,param_2 & 1);
  if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
    FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
  }
  return uVar1 & 1;
}


// ===== 00c2bbd4  FUN_00c2bbd4 =====

byte FUN_00c2bbd4(long *param_1,byte param_2)

{
  byte *pbVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  long *plVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  byte bVar12;
  byte *pbVar13;
  long *local_b0;
  undefined1 auStack_a8 [104];
  byte *local_40;
  undefined1 *puStack_38;
  byte local_14 [3];
  undefined1 uStack_11;
  
  if (*(byte *)((long)param_1 + 0xf2) != (param_2 & 1)) {
    *(byte *)((long)param_1 + 0xf2) = param_2 & 1;
    if ((param_2 & 1) == 0) {
      plVar6 = (long *)(**(code **)(*param_1 + 0x40))(param_1);
      (**(code **)(*plVar6 + 0x38))();
      lVar2 = param_1[0x36];
      lVar5 = param_1[0x37];
      if (lVar2 != lVar5) {
        if (lVar5 - 1U < (ulong)(lVar5 - lVar2)) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        param_1[0x37] = lVar2;
        goto LAB_00c2bce8;
      }
    }
    else {
      pbVar13 = (byte *)param_1[0x26];
      pbVar3 = (byte *)param_1[0x27];
      if (pbVar13 != pbVar3) {
        bVar9 = false;
        do {
          pbVar1 = (byte *)param_1[0x36];
          pbVar4 = (byte *)param_1[0x37];
          while( true ) {
            pbVar8 = pbVar1;
            if (pbVar4 != pbVar1) {
              uVar10 = (long)pbVar4 - (long)pbVar1;
              pbVar7 = pbVar1;
              do {
                uVar11 = uVar10 >> 1;
                pbVar8 = pbVar7 + uVar11 + 1;
                uVar10 = uVar10 + ~uVar11;
                if (*pbVar13 <= pbVar7[uVar11]) {
                  pbVar8 = pbVar7;
                  uVar10 = uVar11;
                }
                pbVar7 = pbVar8;
              } while (uVar10 != 0);
            }
            if ((pbVar4 == pbVar8) || (*pbVar13 < *pbVar8)) break;
            pbVar13 = pbVar13 + 1;
            if (pbVar13 == pbVar3) {
              if (!bVar9) goto LAB_00c2bbfc;
              goto LAB_00c2bce8;
            }
          }
          FUN_00c32194(param_1 + 0x36,pbVar8,pbVar13);
          pbVar13 = pbVar13 + 1;
          bVar9 = true;
        } while (pbVar13 != pbVar3);
LAB_00c2bce8:
        plVar6 = (long *)(**(code **)(*param_1 + 0x40))(param_1);
        (**(code **)(*plVar6 + 0x60))();
        plVar6 = (long *)param_1[6];
        local_b0 = param_1;
        FUN_00c2cd6c(auStack_a8,param_1 + 0x2c);
        local_40 = local_14;
        local_14[0] = 0xaa;
        puStack_38 = (undefined1 *)&local_b0;
        (**(code **)(*plVar6 + 0x60))(plVar6,&local_40,FUN_00c32124,&uStack_11);
        bVar12 = local_14[0];
        FUN_00898e5c(auStack_a8);
        plVar6 = (long *)(**(code **)(*param_1 + 0x40))(param_1);
        (**(code **)(*plVar6 + 0x68))();
        goto LAB_00c2bd74;
      }
    }
  }
LAB_00c2bbfc:
  bVar12 = 1;
LAB_00c2bd74:
  return bVar12 & 1;
}


// ===== 00c2bda4  FUN_00c2bda4 =====

void FUN_00c2bda4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00c2bdb8(param_1,0,param_2,param_3);
  return;
}


// ===== 00c2bdb8  FUN_00c2bdb8 =====

/* WARNING: Removing unreachable block (ram,0x00c2bf8c) */

uint FUN_00c2bdb8(long *param_1,uint param_2,long param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  ulong in_stack_ffffffffffffff20;
  undefined1 local_d0 [16];
  void *local_c0 [2];
  char cStack_a9;
  char *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  char *local_90;
  char **ppcStack_88;
  char **local_80;
  char *local_78;
  char *pcStack_70;
  void **local_68;
  char **ppcStack_60;
  undefined1 uStack_31;
  
  if (((DAT_00dbaf28 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00dbaf28), iVar2 != 0)) {
    DAT_00dbaf20 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbaf28);
  }
  local_80 = (char **)0x0;
  pcStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbaf20 != '\0') {
    in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffffffffffff00;
    FUN_0066d348(0x42,DAT_00dbaf20,"BaseChannel::SendPacket",0,0,0,0,0,in_stack_ffffffffffffff20);
    local_78 = DAT_00dbaf20;
    pcStack_70 = "BaseChannel::SendPacket";
    local_80 = &local_78;
  }
  plVar3 = (long *)param_1[0x16];
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x40))(plVar3,param_2 & 1);
    if ((uVar4 & 1) != 0) {
      uVar4 = FUN_00b1d07c(param_2 & 1,*(undefined8 *)(param_3 + 0x10));
      if ((uVar4 & 1) == 0) {
        uVar4 = FUN_004249b0();
        if ((uVar4 & 1) == 0) {
          local_a8 = "../../pc/channel.cc";
          local_a0 = 0xf33;
          local_98 = &uStack_31;
          ppcStack_88 = &local_a8;
          local_90 = "Dropping outgoing ";
          plVar5 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
          plVar3 = (long *)*plVar5;
          if (-1 < *(char *)((long)plVar5 + 0x17)) {
            plVar3 = plVar5;
          }
          (**(code **)(*(long *)param_1[3] + 0x20))((long *)param_1[3]);
          FUN_00667e40(&local_68);
          FUN_008490e4(local_c0,"{mid: %s, media_type: %s}",plVar3,&local_68);
          ppcStack_60 = &local_90;
          local_68 = local_c0;
          local_d0 = FUN_00b1d0a0(param_2 & 1);
          in_stack_ffffffffffffff20 = *(ulong *)(param_3 + 0x10);
          FUN_00623bb0(&DAT_002591fa,*(undefined8 *)ppcStack_60[1],
                       *(undefined4 *)(ppcStack_60[1] + 8),*ppcStack_60,local_68,&DAT_001d5e07,
                       local_d0," packet: wrong size=",in_stack_ffffffffffffff20);
          if (cStack_a9 < '\0') {
            operator_delete(local_c0[0]);
          }
        }
      }
      else if ((((long *)param_1[0x16] != (long *)0x0) &&
               (uVar4 = (**(code **)(*(long *)param_1[0x16] + 0x60))(), (uVar4 & 1) != 0)) ||
              ((*(byte *)((long)param_1 + 0xeb) & 1) == 0)) {
        if (((code *)param_1[0x11] != (code *)0x0) && ((*(byte *)(param_4 + 0x42) & 1) != 0)) {
          (*(code *)param_1[0x11])(param_1 + 0xe);
          (*(code *)param_1[0x10])(0,param_1 + 0xe,param_1 + 0xe);
          param_1[0x10] = (long)FUN_00433984;
          param_1[0x11] = 0;
        }
        lVar6 = *(long *)param_1[0x16];
        if ((param_2 & 1) == 0) {
          pcVar7 = *(code **)(lVar6 + 0x48);
        }
        else {
          pcVar7 = *(code **)(lVar6 + 0x50);
        }
        uVar1 = (*pcVar7)((long *)param_1[0x16],param_3,param_4,1);
        goto joined_r0x00c2c008;
      }
    }
  }
  uVar1 = 0;
joined_r0x00c2c008:
  if ((local_80 != (char **)0x0) && (**local_80 != '\0')) {
    FUN_0066d348(0x45,*local_80,local_80[1],0,0,0,0,0,in_stack_ffffffffffffff20 & 0xffffffffffffff00
                );
  }
  return uVar1 & 1;
}


// ===== 00c2c0b4  FUN_00c2c0b4 =====

void FUN_00c2c0b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00c2bdb8(param_1 + -8,0,param_2,param_3);
  return;
}


// ===== 00c2c0cc  FUN_00c2c0cc =====

void FUN_00c2c0cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00c2bdb8(param_1,1,param_2,param_3);
  return;
}


// ===== 00c2c0e0  FUN_00c2c0e0 =====

void FUN_00c2c0e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00c2bdb8(param_1 + -8,1,param_2,param_3);
  return;
}


// ===== 00c2c0f8  FUN_00c2c0f8 =====

undefined8 FUN_00c2c0f8(long param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = param_3;
  uStack_14 = param_4;
  if (param_2 == 1) {
    puVar1 = *(undefined8 **)(param_1 + 0xd8);
    if (puVar1 < *(undefined8 **)(param_1 + 0xe0)) {
      if (puVar1 == (undefined8 *)0x0) goto LAB_00c2c1a4;
      puVar3 = puVar1 + 1;
      *puVar1 = CONCAT44(param_4,param_3);
    }
    else {
      puVar3 = (undefined8 *)FUN_00c314fc(param_1 + 0xd0,&local_18);
    }
    lVar4 = 0x28;
    *(undefined8 **)(param_1 + 0xd8) = puVar3;
  }
  else {
    if (param_2 != 0) {
      return 0xffffffff;
    }
    puVar1 = *(undefined8 **)(param_1 + 0xc0);
    if (puVar1 < *(undefined8 **)(param_1 + 200)) {
      if (puVar1 == (undefined8 *)0x0) {
LAB_00c2c1a4:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar3 = puVar1 + 1;
      *puVar1 = CONCAT44(param_4,param_3);
    }
    else {
      puVar3 = (undefined8 *)FUN_00c314fc(param_1 + 0xb8,&local_18);
    }
    *(undefined8 **)(param_1 + 0xc0) = puVar3;
    lVar4 = 0x20;
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0xb0) + lVar4))
                    (*(long **)(param_1 + 0xb0),param_3,param_4);
  return uVar2;
}


// ===== 00c2c1d8  FUN_00c2c1d8 =====

void FUN_00c2c1d8(long param_1)

{
  FUN_00c2c0f8(param_1 + -8);
  return;
}


// ===== 00c2c1e4  FUN_00c2c1e4 =====

/* WARNING: Removing unreachable block (ram,0x00c2c300) */

void FUN_00c2c1e4(long *param_1)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined1 uStack_81;
  void *local_80 [2];
  char cStack_69;
  char **local_68;
  char *local_60;
  char *pcStack_58;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  if (((DAT_00dbaf48 & 1) == 0) && (iVar3 = FUN_0054fdd4(&DAT_00dbaf48), iVar3 != 0)) {
    DAT_00dbaf40 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbaf48);
  }
  local_68 = (char **)0x0;
  pcStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbaf40 == '\0') {
    bVar2 = *(byte *)(param_1 + 0x1d);
  }
  else {
    FUN_0066d348(0x42,DAT_00dbaf40,"BaseChannel::ChannelWritable_n",0,0,0,0,0,0);
    local_60 = DAT_00dbaf40;
    pcStack_58 = "BaseChannel::ChannelWritable_n";
    bVar2 = *(byte *)(param_1 + 0x1d);
    local_68 = &local_60;
  }
  if ((bVar2 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x1d) = 1;
    uVar4 = FUN_00417e08();
    if ((uVar4 & 1) == 0) {
      plVar5 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
      plVar6 = (long *)*plVar5;
      if (-1 < *(char *)((long)plVar5 + 0x17)) {
        plVar6 = plVar5;
      }
      (**(code **)(*(long *)param_1[3] + 0x20))((long *)param_1[3]);
      FUN_00667e40(local_50);
      FUN_008490e4(local_80,"{mid: %s, media_type: %s}",plVar6,local_50);
      pcVar1 = "";
      if (*(char *)((long)param_1 + 0xe9) == '\0') {
        pcVar1 = " for the first time";
      }
      FUN_00623bb0("\r\t\n\t\t","../../pc/channel.cc",0x14a9,"Channel writable (",local_80,
                   &DAT_001ca519,pcVar1);
      if (cStack_69 < '\0') {
        operator_delete(local_80[0]);
      }
    }
    if ((*(byte *)((long)param_1 + 0xe9) & 1) == 0) {
      lVar7 = param_1[8];
      plVar6 = (long *)param_1[5];
      if (lVar7 != 0) {
        FUN_00d0f740(1,lVar7);
      }
      local_50[0] = (long *)operator_new(0x30);
      *local_50[0] = lVar7;
      local_50[0][4] = (long)FUN_004473ec;
      local_50[0][5] = (long)FUN_00c32178;
      local_50[0][2] = (long)param_1;
      local_40 = FUN_005db390;
      pcStack_38 = FUN_005db348;
      (**(code **)(*plVar6 + 8))(plVar6,local_50,local_80,&uStack_81);
      (*local_40)(0,local_50,local_50);
    }
    *(undefined1 *)((long)param_1 + 0xe9) = 1;
  }
  if ((local_68 != (char **)0x0) && (**local_68 != '\0')) {
    FUN_0066d348(0x45,*local_68,local_68[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 00c2c484  FUN_00c2c484 =====

/* WARNING: Removing unreachable block (ram,0x00c2c598) */

void FUN_00c2c484(long *param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  void *local_78 [2];
  char cStack_61;
  char **local_60;
  char *local_58;
  char *pcStack_50;
  undefined1 local_48 [24];
  
  if (((DAT_00dbaf58 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00dbaf58), iVar2 != 0)) {
    DAT_00dbaf50 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbaf58);
  }
  local_60 = (char **)0x0;
  pcStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbaf50 != '\0') {
    FUN_0066d348(0x42,DAT_00dbaf50,"BaseChannel::ChannelNotWritable_n",0,0,0,0,0,0);
    local_58 = DAT_00dbaf50;
    pcStack_50 = "BaseChannel::ChannelNotWritable_n";
    local_60 = &local_58;
  }
  if ((char)param_1[0x1d] == '\x01') {
    *(undefined1 *)(param_1 + 0x1d) = 0;
    uVar3 = FUN_00417e08();
    if ((uVar3 & 1) == 0) {
      plVar4 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
      plVar1 = (long *)*plVar4;
      if (-1 < *(char *)((long)plVar4 + 0x17)) {
        plVar1 = plVar4;
      }
      (**(code **)(*(long *)param_1[3] + 0x20))((long *)param_1[3]);
      FUN_00667e40(local_48);
      FUN_008490e4(local_78,"{mid: %s, media_type: %s}",plVar1,local_48);
      FUN_00623bb0(&DAT_001f4eff,"../../pc/channel.cc",0x1549,"Channel not writable (",local_78,
                   &DAT_001ca519);
      if (cStack_61 < '\0') {
        operator_delete(local_78[0]);
      }
    }
  }
  if ((local_60 != (char **)0x0) && (**local_60 != '\0')) {
    FUN_0066d348(0x45,*local_60,local_60[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 00c2c66c  FUN_00c2c66c =====

/* WARNING: Removing unreachable block (ram,0x00c2c73c) */

void FUN_00c2c66c(long *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined1 local_48 [24];
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    plVar3 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
    plVar4 = (long *)*plVar3;
    if (-1 < *(char *)((long)plVar3 + 0x17)) {
      plVar4 = plVar3;
    }
    (**(code **)(*(long *)param_1[3] + 0x20))((long *)param_1[3]);
    FUN_00667e40(&local_70);
    puVar1 = (undefined4 *)CONCAT44(uStack_6c,local_70);
    if (-1 < uStack_5c) {
      puVar1 = &local_70;
    }
    FUN_008490e4(local_48,"{mid: %s, media_type: %s}",plVar4,puVar1);
    if (uStack_5c._3_1_ < '\0') {
      operator_delete((void *)CONCAT44(uStack_6c,local_70));
    }
    FUN_00623bb0(&DAT_001f4e90,"../../pc/channel.cc",0xd11,"Network route changed for ",local_48);
  }
  local_70 = 0xaaaaaa00;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0xaaaaaa00;
  local_60 = 0;
  uStack_5c = 0;
  local_58 = 0xaaaaaa00;
  local_54 = 0xffffffff;
  uStack_50 = 0;
  if (*(char *)((long)param_2 + 0x24) == '\x01') {
    uStack_50 = *(undefined4 *)(param_2 + 4);
    uStack_68 = (undefined4)param_2[1];
    uStack_64 = (undefined4)((ulong)param_2[1] >> 0x20);
    local_70 = (undefined4)*param_2;
    uStack_6c = (undefined4)((ulong)*param_2 >> 0x20);
    local_58 = (undefined4)param_2[3];
    local_54 = (undefined4)((ulong)param_2[3] >> 0x20);
    local_60 = (undefined4)param_2[2];
    uStack_5c = (int)((ulong)param_2[2] >> 0x20);
  }
  plVar4 = (long *)(**(code **)(*param_1 + 0x28))(param_1);
  auVar5 = (**(code **)(*param_1 + 0x58))(param_1);
  (**(code **)(*plVar4 + 0x50))(plVar4,auVar5._0_8_,auVar5._8_8_,&local_70);
  return;
}


// ===== 00c2c7f0  FUN_00c2c7f0 =====

void FUN_00c2c7f0(long param_1,long param_2)

{
  (**(code **)(param_1 + 0x60))(0,param_1 + 0x50,param_1 + 0x50);
  *(code **)(param_1 + 0x60) = FUN_00433984;
  *(undefined8 *)(param_1 + 0x68) = 0;
  (**(code **)(param_2 + 0x10))(1,param_2,param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x18);
  *(code **)(param_2 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}


// ===== 00c2c868  FUN_00c2c868 =====

void FUN_00c2c868(long param_1,long param_2)

{
  (**(code **)(param_1 + 0x80))(0,param_1 + 0x70,param_1 + 0x70);
  *(code **)(param_1 + 0x80) = FUN_00433984;
  *(undefined8 *)(param_1 + 0x88) = 0;
  (**(code **)(param_2 + 0x10))(1,param_2,param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x18);
  *(code **)(param_2 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}


// ===== 00c2c8e0  FUN_00c2c8e0 =====

void FUN_00c2c8e0(long param_1,long param_2)

{
  (**(code **)(param_1 + 0xa0))(0,param_1 + 0x90,param_1 + 0x90);
  *(code **)(param_1 + 0xa0) = FUN_00433984;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  (**(code **)(param_2 + 0x10))(1,param_2,param_1 + 0x90);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0x18);
  *(code **)(param_2 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}


// ===== 00c2c958  FUN_00c2c958 =====

void FUN_00c2c958(long *param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  void *local_50 [2];
  char cStack_39;
  undefined8 **local_38 [2];
  char cStack_21;
  
  if ((code *)param_1[0xd] != (code *)0x0) {
    (*(code *)param_1[0xd])(param_1 + 10);
    (*(code *)param_1[0xc])(0,param_1 + 10,param_1 + 10);
    param_1[0xc] = (long)FUN_00433984;
    param_1[0xd] = 0;
  }
  if ((((long *)param_1[0x16] == (long *)0x0) ||
      (uVar2 = (**(code **)(*(long *)param_1[0x16] + 0x60))(), (uVar2 & 1) == 0)) &&
     (*(char *)((long)param_1 + 0xeb) == '\x01')) {
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) == 0) {
      plVar3 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
      plVar4 = (long *)*plVar3;
      if (-1 < *(char *)((long)plVar3 + 0x17)) {
        plVar4 = plVar3;
      }
      (**(code **)(*(long *)param_1[3] + 0x20))((long *)param_1[3]);
      FUN_00667e40(local_38);
      pppuVar1 = (undefined8 ***)local_38[0];
      if (-1 < cStack_21) {
        pppuVar1 = local_38;
      }
      FUN_008490e4(local_50,"{mid: %s, media_type: %s}",plVar4,pppuVar1);
      if (cStack_21 < '\0') {
        operator_delete(local_38[0]);
      }
      FUN_00623bb0(&DAT_001f4e90,"../../pc/channel.cc",0x10da,
                   "Can\'t process incoming RTP packet when SRTP is inactive and crypto is required "
                   ,local_50);
      if (cStack_39 < '\0') {
        operator_delete(local_50[0]);
      }
    }
    return;
  }
  if ((code *)param_1[0x15] != (code *)0x0) {
    (*(code *)param_1[0x15])(param_1 + 0x12);
  }
  plVar4 = (long *)(**(code **)(*param_1 + 0x40))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00c2cad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x48))(plVar4,param_2);
  return;
}


// ===== 00c2cadc  FUN_00c2cadc =====

void FUN_00c2cadc(long param_1)

{
  FUN_00c2c958(param_1 + -0x10);
  return;
}


// ===== 00c2cae8  FUN_00c2cae8 =====

undefined1 FUN_00c2cae8(long *param_1,byte param_2,long *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t __n;
  size_t sVar3;
  undefined8 *__s1;
  long lVar4;
  void *pvVar5;
  long lVar6;
  byte bVar7;
  byte bVar8;
  undefined1 uVar9;
  int iVar10;
  void *pvVar11;
  long *plVar12;
  void *pvVar13;
  long lVar14;
  undefined1 uStack_a1;
  long *local_a0;
  long *plStack_98;
  byte *local_90;
  undefined8 uStack_88;
  byte local_7c [4];
  undefined1 *local_78;
  long **pplStack_70;
  undefined1 local_64 [4];
  
  local_7c[0] = param_2;
  if ((char)param_3[3] == '\x01') {
    lVar4 = param_1[0x29];
    lVar6 = param_1[0x2a];
    pvVar5 = (void *)*param_3;
    pvVar13 = (void *)param_3[1];
    if (lVar6 - lVar4 == (long)pvVar13 - (long)pvVar5) {
      if (lVar4 != lVar6) {
        lVar14 = 0;
        do {
          puVar1 = (undefined8 *)(lVar4 + lVar14);
          puVar2 = (undefined8 *)((long)pvVar5 + lVar14);
          bVar7 = *(byte *)((long)puVar1 + 0x17);
          bVar8 = *(byte *)((long)puVar2 + 0x17);
          __n = puVar1[1];
          if (-1 < (char)bVar7) {
            __n = (ulong)bVar7;
          }
          sVar3 = puVar2[1];
          if (-1 < (char)bVar8) {
            sVar3 = (ulong)bVar8;
          }
          if (__n != sVar3) goto LAB_00c2cc0c;
          __s1 = (undefined8 *)*puVar1;
          if (-1 < (char)bVar7) {
            __s1 = puVar1;
          }
          puVar1 = (undefined8 *)*puVar2;
          if (-1 < (char)bVar8) {
            puVar1 = puVar2;
          }
          iVar10 = memcmp(__s1,puVar1,__n);
          if (((iVar10 != 0) ||
              (*(int *)(lVar4 + lVar14 + 0x18) != *(int *)((long)pvVar5 + lVar14 + 0x18))) ||
             (*(char *)(lVar4 + lVar14 + 0x1c) != *(char *)((long)pvVar5 + lVar14 + 0x1c)))
          goto LAB_00c2cc0c;
          lVar14 = lVar14 + 0x20;
        } while (lVar4 + lVar14 != lVar6);
      }
      if (pvVar5 != (void *)0x0) {
        pvVar11 = pvVar5;
        if (pvVar5 != pvVar13) {
          do {
            pvVar13 = (void *)((long)pvVar13 + -0x20);
            if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            FUN_00668f8c(pvVar13);
          } while (pvVar13 != pvVar5);
          pvVar11 = (void *)*param_3;
        }
        param_3[1] = (long)pvVar5;
        operator_delete(pvVar11);
      }
      *(undefined1 *)(param_3 + 3) = 0;
    }
    else {
LAB_00c2cc0c:
      if (param_1 + 0x29 != param_3) {
        FUN_005e2544(param_1 + 0x29,pvVar5,pvVar13,(long)pvVar13 - (long)pvVar5 >> 5);
      }
    }
  }
  if ((param_2 & 1) == 0) {
    if ((*(byte *)(param_3 + 3) & 1) == 0) {
      return 1;
    }
  }
  else {
    plVar12 = (long *)(**(code **)(*param_1 + 0x40))(param_1);
    (**(code **)(*plVar12 + 0x60))();
  }
  local_90 = local_7c;
  pplStack_70 = &local_a0;
  local_78 = local_64;
  local_64[0] = 0xaa;
  local_a0 = param_1;
  plStack_98 = param_3;
  uStack_88 = param_4;
  (**(code **)(*(long *)param_1[6] + 0x60))((long *)param_1[6],&local_78,FUN_00c31f9c,&uStack_a1);
  uVar9 = local_64[0];
  if (local_7c[0] == 1) {
    plVar12 = (long *)(**(code **)(*param_1 + 0x40))(param_1);
    (**(code **)(*plVar12 + 0x68))();
  }
  return uVar9;
}


// ===== 00c2cd24  FUN_00c2cd24 =====

long * FUN_00c2cd24(long *param_1,long *param_2)

{
  if (param_1 != param_2) {
    FUN_005e2544(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 5);
  }
  return param_1;
}


// ===== 00c2cd6c  FUN_00c2cd6c =====

void FUN_00c2cd6c(undefined1 *param_1,undefined1 *param_2)

{
  void *pvVar1;
  char cVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  if ((char)param_2[0x1f] < '\0') {
    FUN_005478d8(param_1 + 8,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    cVar2 = param_2[0x37];
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = uVar6;
    *(undefined8 *)(param_1 + 8) = uVar5;
    cVar2 = param_2[0x37];
  }
  if (cVar2 < '\0') {
    FUN_005478d8(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    *(undefined8 *)(param_1 + 0x20) = uVar5;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  pvVar1 = *(void **)(param_2 + 0x38);
  uVar3 = *(long *)(param_2 + 0x40) - (long)pvVar1;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005da79c();
    }
    pvVar4 = operator_new(uVar3);
    *(void **)(param_1 + 0x38) = pvVar4;
    *(void **)(param_1 + 0x40) = pvVar4;
    *(ulong *)(param_1 + 0x48) = (long)pvVar4 + uVar3;
    memcpy(pvVar4,pvVar1,uVar3);
    *(ulong *)(param_1 + 0x40) = (long)pvVar4 + uVar3;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  pvVar1 = *(void **)(param_2 + 0x50);
  uVar3 = *(long *)(param_2 + 0x58) - (long)pvVar1;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d34c0();
    }
    pvVar4 = operator_new(uVar3);
    *(void **)(param_1 + 0x50) = pvVar4;
    *(void **)(param_1 + 0x58) = pvVar4;
    *(ulong *)(param_1 + 0x60) = (long)pvVar4 + uVar3;
    memcpy(pvVar4,pvVar1,uVar3);
    *(ulong *)(param_1 + 0x58) = (long)pvVar4 + uVar3;
  }
  return;
}


// ===== 00c2ce7c  FUN_00c2ce7c =====

void FUN_00c2ce7c(long *param_1)

{
  long *plVar1;
  undefined8 ***pppuVar2;
  ulong uVar3;
  long *plVar4;
  void *local_60 [2];
  char cStack_49;
  undefined8 **local_48 [2];
  char cStack_31;
  
  if ((*(byte *)(param_1 + 0x1e) & 1) == 0) {
    uVar3 = FUN_00417e08();
    if ((uVar3 & 1) == 0) {
      plVar4 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
      plVar1 = (long *)*plVar4;
      if (-1 < *(char *)((long)plVar4 + 0x17)) {
        plVar1 = plVar4;
      }
      (**(code **)(*(long *)param_1[3] + 0x20))((long *)param_1[3]);
      FUN_00667e40(local_48);
      pppuVar2 = (undefined8 ***)local_48[0];
      if (-1 < cStack_31) {
        pppuVar2 = local_48;
      }
      FUN_008490e4(local_60,"{mid: %s, media_type: %s}",plVar1,pppuVar2);
      if (cStack_31 < '\0') {
        operator_delete(local_48[0]);
      }
      FUN_00623bb0(&DAT_001f4e90,"../../pc/channel.cc",0x13b9,"Channel enabled: ",local_60);
      if (cStack_49 < '\0') {
        operator_delete(local_60[0]);
      }
    }
    *(undefined1 *)(param_1 + 0x1e) = 1;
    (**(code **)(*param_1 + 0xd8))(param_1);
  }
  return;
}


// ===== 00c2cf94  FUN_00c2cf94 =====

void FUN_00c2cf94(long *param_1)

{
  long *plVar1;
  undefined8 ***pppuVar2;
  ulong uVar3;
  long *plVar4;
  void *local_60 [2];
  char cStack_49;
  undefined8 **local_48 [2];
  char cStack_31;
  
  if ((char)param_1[0x1e] == '\x01') {
    uVar3 = FUN_00417e08();
    if ((uVar3 & 1) == 0) {
      plVar4 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
      plVar1 = (long *)*plVar4;
      if (-1 < *(char *)((long)plVar4 + 0x17)) {
        plVar1 = plVar4;
      }
      (**(code **)(*(long *)param_1[3] + 0x20))((long *)param_1[3]);
      FUN_00667e40(local_48);
      pppuVar2 = (undefined8 ***)local_48[0];
      if (-1 < cStack_31) {
        pppuVar2 = local_48;
      }
      FUN_008490e4(local_60,"{mid: %s, media_type: %s}",plVar1,pppuVar2);
      if (cStack_31 < '\0') {
        operator_delete(local_48[0]);
      }
      FUN_00623bb0(&DAT_001f4e90,"../../pc/channel.cc",0x1401,"Channel disabled: ",local_60);
      if (cStack_49 < '\0') {
        operator_delete(local_60[0]);
      }
    }
    *(undefined1 *)(param_1 + 0x1e) = 0;
    (**(code **)(*param_1 + 0xd8))(param_1);
  }
  return;
}


// ===== 00c2d0ac  FUN_00c2d0ac =====

/* WARNING: Removing unreachable block (ram,0x00c2d41c) */

undefined4 FUN_00c2d0ac(long *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  void *pvVar7;
  undefined4 uVar8;
  void **ppvVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  long lVar13;
  void *local_d8 [2];
  char cStack_c1;
  undefined1 uStack_b9;
  char *local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  char *local_a0;
  char **ppcStack_98;
  void *local_90;
  void *local_88;
  void *local_80;
  void *local_78;
  long lStack_70;
  long local_68;
  
  ppvVar9 = (void **)(param_1 + 0x1f);
  pvVar2 = (void *)param_1[0x20];
  uVar12 = 1;
  for (pvVar1 = *ppvVar9; pvVar1 != pvVar2; pvVar1 = (void *)((long)pvVar1 + 0x90)) {
    if (*(long *)((long)pvVar1 + 0x18) != *(long *)((long)pvVar1 + 0x20)) {
      lVar11 = *param_2;
      lVar13 = param_2[1];
      lVar10 = lVar11;
      local_78 = pvVar1;
      if (lVar11 != lVar13) {
        do {
          uVar3 = FUN_00c32520(&local_78,lVar10);
          lVar11 = lVar10;
          if ((uVar3 & 1) != 0) break;
          lVar10 = lVar10 + 0x90;
          lVar11 = lVar13;
        } while (lVar10 != lVar13);
        lVar13 = param_2[1];
      }
      if ((lVar11 == lVar13) || (lVar11 == 0)) {
        plVar4 = (long *)(**(code **)(*param_1 + 0x28))(param_1);
        if (*(undefined4 **)((long)pvVar1 + 0x18) == *(undefined4 **)((long)pvVar1 + 0x20)) {
          uVar8 = 0;
        }
        else {
          uVar8 = **(undefined4 **)((long)pvVar1 + 0x18);
        }
        uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4,uVar8);
        if ((uVar3 & 1) == 0) {
          if (*(undefined4 **)((long)pvVar1 + 0x18) == *(undefined4 **)((long)pvVar1 + 0x20)) {
            uVar12 = 0;
          }
          else {
            uVar12 = **(undefined4 **)((long)pvVar1 + 0x18);
          }
          plVar5 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
          plVar4 = (long *)*plVar5;
          if (-1 < *(char *)((long)plVar5 + 0x17)) {
            plVar4 = plVar5;
          }
          FUN_008490e4(&local_78,
                       "Failed to remove send stream with ssrc %u from m-section with mid=\'%s\'.",
                       uVar12,plVar4);
          if (*(char *)((long)param_4 + 0x17) < '\0') {
            operator_delete((void *)*param_4);
          }
          uVar12 = 0;
          param_4[1] = lStack_70;
          *param_4 = (long)local_78;
          param_4[2] = local_68;
        }
      }
    }
  }
  pvVar1 = (void *)*param_2;
  pvVar2 = (void *)param_2[1];
  local_90 = (void *)0x0;
  local_88 = (void *)0x0;
  local_80 = (void *)0x0;
  do {
    if (pvVar1 == pvVar2) {
      if (ppvVar9 != &local_90) {
        FUN_00c31608(ppvVar9,local_90,local_88,
                     ((long)local_88 - (long)local_90 >> 4) * -0x71c71c71c71c71c7);
      }
      pvVar2 = local_90;
      pvVar1 = local_88;
      if (local_90 != (void *)0x0) {
        while (pvVar2 != pvVar1) {
          pvVar1 = (void *)((long)pvVar1 + -0x90);
          if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          FUN_0088d578(pvVar1);
        }
        local_88 = pvVar2;
        operator_delete(local_90);
      }
      return uVar12;
    }
    lVar11 = param_1[0x1f];
    lVar13 = param_1[0x20];
    lVar10 = lVar11;
    local_78 = pvVar1;
    if (lVar11 != lVar13) {
      do {
        uVar3 = FUN_00c32520(&local_78,lVar10);
        lVar11 = lVar10;
        if ((uVar3 & 1) != 0) break;
        lVar10 = lVar10 + 0x90;
        lVar11 = lVar13;
      } while (lVar10 != lVar13);
      lVar13 = param_1[0x20];
    }
    pvVar7 = local_88;
    if ((lVar11 == lVar13) || (lVar11 == 0)) {
      if (local_88 < local_80) {
        if (local_88 == (void *)0x0) goto LAB_00c2d5b8;
        FUN_0088d2d8(local_88,pvVar1);
        pvVar7 = (void *)((long)pvVar7 + 0x90);
      }
      else {
        pvVar7 = (void *)FUN_00b16610(&local_90,pvVar1);
      }
      local_88 = pvVar7;
      if (local_90 == pvVar7) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
                  );
      }
      lVar10 = *(long *)((long)pvVar7 + -0x18);
      lVar11 = *(long *)((long)pvVar7 + -0x10);
      if (*(undefined4 **)((long)pvVar7 + -0x78) == *(undefined4 **)((long)pvVar7 + -0x70)) {
        if (lVar10 != lVar11) {
          FUN_0088de20((long)pvVar7 + -0x90,(int)((ulong)(lVar11 - lVar10) >> 4) * -0x33333333,1,0,
                       param_1[0x39]);
          goto LAB_00c2d34c;
        }
      }
      else {
        if (lVar10 == lVar11) {
LAB_00c2d34c:
          plVar4 = (long *)(**(code **)(*param_1 + 0x28))(param_1);
          uVar3 = (**(code **)(*plVar4 + 0x30))(plVar4,(long)pvVar7 + -0x90);
          if ((uVar3 & 1) != 0) {
            uVar3 = FUN_00417e08();
            if ((uVar3 & 1) == 0) {
              local_b8 = "../../pc/channel.cc";
              local_b0 = 0x18b1;
              local_a8 = &uStack_b9;
              ppcStack_98 = &local_b8;
              local_a0 = "Add send stream ssrc: ";
              if (*(undefined4 **)((long)pvVar7 + -0x70) == *(undefined4 **)((long)pvVar7 + -0x78))
              {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                          );
              }
              uVar8 = **(undefined4 **)((long)pvVar7 + -0x78);
              plVar5 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
              plVar4 = (long *)*plVar5;
              if (-1 < *(char *)((long)plVar5 + 0x17)) {
                plVar4 = plVar5;
              }
              (**(code **)(*(long *)param_1[3] + 0x20))((long *)param_1[3]);
              FUN_00667e40(&local_78);
              FUN_008490e4(local_d8,"{mid: %s, media_type: %s}",plVar4,&local_78);
              FUN_00623bb0(&DAT_0021f945,*ppcStack_98,*(undefined4 *)(ppcStack_98 + 1),local_a0,
                           uVar8," into ",local_d8);
              if (cStack_c1 < '\0') {
                operator_delete(local_d8[0]);
              }
            }
            goto LAB_00c2d230;
          }
          if (*(undefined4 **)((long)pvVar7 + -0x78) == *(undefined4 **)((long)pvVar7 + -0x70)) {
            uVar12 = 0;
          }
          else {
            uVar12 = **(undefined4 **)((long)pvVar7 + -0x78);
          }
          plVar5 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
          plVar4 = (long *)*plVar5;
          if (-1 < *(char *)((long)plVar5 + 0x17)) {
            plVar4 = plVar5;
          }
          pcVar6 = "Failed to add send stream ssrc: %u into m-section with mid=\'%s\'";
        }
        else {
          uVar12 = **(undefined4 **)((long)pvVar7 + -0x78);
          plVar5 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
          plVar4 = (long *)*plVar5;
          if (-1 < *(char *)((long)plVar5 + 0x17)) {
            plVar4 = plVar5;
          }
          pcVar6 = 
          "Failed to add send stream: %u into m-section with mid=\'%s\'. Stream has both SSRCs and RIDs."
          ;
        }
        FUN_008490e4(&local_78,pcVar6,uVar12,plVar4);
        if (*(char *)((long)param_4 + 0x17) < '\0') {
          operator_delete((void *)*param_4);
        }
        uVar12 = 0;
        param_4[1] = lStack_70;
        *param_4 = (long)local_78;
        param_4[2] = local_68;
      }
    }
    else if (local_88 < local_80) {
      if (local_88 == (void *)0x0) {
LAB_00c2d5b8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_0088d2d8(local_88,lVar11);
      local_88 = (void *)((long)pvVar7 + 0x90);
    }
    else {
      local_88 = (void *)FUN_00b16610(&local_90,lVar11);
    }
LAB_00c2d230:
    pvVar1 = (void *)((long)pvVar1 + 0x90);
  } while( true );
}


// ===== 00c2d608  FUN_00c2d608 =====

/* WARNING: Removing unreachable block (ram,0x00c2d87c) */
/* WARNING: Removing unreachable block (ram,0x00c2d9a4) */
/* WARNING: Removing unreachable block (ram,0x00c2dd3c) */
/* WARNING: Removing unreachable block (ram,0x00c2de4c) */
/* WARNING: Removing unreachable block (ram,0x00c2dba8) */
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00c2d608(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  bool bVar1;
  bool bVar2;
  char *******pppppppcVar3;
  bool bVar4;
  wchar_t *pwVar5;
  void *__s1;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  wchar_t *pwVar9;
  long *plVar10;
  long *plVar11;
  char *******pppppppcVar12;
  long lVar13;
  char *pcVar14;
  ulong uVar15;
  byte bVar16;
  long lVar17;
  void *pvVar18;
  undefined4 uVar19;
  long lVar20;
  long lVar21;
  wchar_t wVar22;
  long lVar23;
  char *__s2;
  char *******local_160;
  char *local_150;
  char **ppcStack_148;
  char cStack_139;
  char *******local_138;
  char **local_130;
  char cStack_121;
  undefined1 uStack_119;
  char ******local_118;
  char *******pppppppcStack_110;
  char *******local_108;
  long **local_100;
  undefined1 *local_f8;
  char *local_f0;
  char *pcStack_e8;
  char *******local_e0;
  long *local_d8;
  long lStack_d0;
  undefined7 local_c8;
  undefined1 uStack_c1;
  
  uVar8 = FUN_00bde288(*(undefined4 *)(param_2 + 0x74));
  if ((uVar8 & 1) == 0) {
    lVar13 = param_1[0x36];
    lVar20 = param_1[0x37];
    if (lVar20 - 1U < (ulong)(lVar20 - lVar13)) goto LAB_00c2e14c;
    param_1[0x37] = lVar13;
    if (param_1[0x27] - 1U < (ulong)(param_1[0x27] - param_1[0x26])) goto LAB_00c2e14c;
    param_1[0x27] = param_1[0x26];
    if (lVar13 == lVar20) goto LAB_00c2d688;
    bVar16 = *(byte *)((long)param_1 + 0xf2);
  }
  else {
LAB_00c2d688:
    bVar16 = 0;
  }
  lVar20 = *(long *)(param_2 + 0x58);
  lVar17 = *(long *)(param_2 + 0x60);
  lVar13 = lVar20;
  if (lVar20 == lVar17) {
LAB_00c2d6cc:
    bVar1 = lVar13 != lVar17 && lVar13 != 0;
  }
  else {
    do {
      if (*(long *)(lVar13 + 0x18) == *(long *)(lVar13 + 0x20)) goto LAB_00c2d6cc;
      lVar13 = lVar13 + 0x90;
    } while (lVar13 != lVar17);
    bVar1 = false;
  }
  lVar21 = param_1[0x22];
  lVar23 = param_1[0x23];
  lVar13 = lVar21;
  if (lVar21 == lVar23) {
LAB_00c2d718:
    bVar2 = lVar13 != lVar23 && lVar13 != 0;
  }
  else {
    do {
      if (*(long *)(lVar13 + 0x18) == *(long *)(lVar13 + 0x20)) goto LAB_00c2d718;
      lVar13 = lVar13 + 0x90;
    } while (lVar13 != lVar23);
    bVar2 = false;
  }
  if (lVar21 != lVar23) {
    do {
      pwVar5 = *(wchar_t **)(lVar21 + 0x18);
      bVar6 = pwVar5 != *(wchar_t **)(lVar21 + 0x20);
      bVar4 = bVar1;
      if (bVar6) {
        bVar4 = true;
      }
      if (bVar4) {
        if (bVar6) {
          lVar13 = *(long *)(param_2 + 0x58);
          lVar20 = *(long *)(param_2 + 0x60);
          if (lVar13 != lVar20) {
            wVar22 = *pwVar5;
            lVar17 = lVar13;
            do {
              pwVar5 = *(wchar_t **)(lVar17 + 0x20);
              pwVar9 = wmemchr(*(wchar_t **)(lVar17 + 0x18),wVar22,
                               (long)pwVar5 - (long)*(wchar_t **)(lVar17 + 0x18) >> 2);
              lVar13 = lVar17;
              if (pwVar9 != (wchar_t *)0x0 && pwVar9 != pwVar5) break;
              lVar17 = lVar17 + 0x90;
              lVar13 = lVar20;
            } while (lVar17 != lVar20);
            lVar20 = *(long *)(param_2 + 0x60);
          }
          if ((lVar13 == lVar20) || (lVar13 == 0)) {
            plVar10 = (long *)(**(code **)(*param_1 + 0x40))(param_1);
            if (*(undefined4 **)(lVar21 + 0x18) == *(undefined4 **)(lVar21 + 0x20)) {
              uVar19 = 0;
            }
            else {
              uVar19 = **(undefined4 **)(lVar21 + 0x18);
            }
            uVar8 = (**(code **)(*plVar10 + 0x30))(plVar10,uVar19);
            if ((uVar8 & 1) == 0) {
              if (*(undefined4 **)(lVar21 + 0x18) == *(undefined4 **)(lVar21 + 0x20)) {
                uVar19 = 0;
              }
              else {
                uVar19 = **(undefined4 **)(lVar21 + 0x18);
              }
              plVar11 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
              plVar10 = (long *)*plVar11;
              if (-1 < *(char *)((long)plVar11 + 0x17)) {
                plVar10 = plVar11;
              }
              FUN_008490e4(&local_d8,
                           "Failed to remove remote stream with ssrc %u from m-section with mid=\'%s\'."
                           ,uVar19,plVar10);
              if (*(char *)((long)param_4 + 0x17) < '\0') {
                operator_delete((void *)*param_4);
              }
              param_4[1] = lStack_d0;
              *param_4 = (long)local_d8;
              param_4[2] = CONCAT17(uStack_c1,local_c8);
              return 0;
            }
            uVar8 = FUN_00417e08();
            if ((uVar8 & 1) == 0) {
              local_f0 = "../../pc/channel.cc";
              pcStack_e8 = (char *)0x1a01;
              local_e0 = &local_118;
              ppcStack_148 = &local_f0;
              local_150 = "Remove remote ssrc: ";
              if (*(uint **)(lVar21 + 0x18) == *(uint **)(lVar21 + 0x20)) {
                uVar8 = 0;
              }
              else {
                uVar8 = (ulong)**(uint **)(lVar21 + 0x18);
              }
              local_160 = (char *******)(uVar8 | (ulong)local_160 & 0xffffffff00000000);
              local_130 = &local_150;
              local_138 = local_160;
              plVar11 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
              plVar10 = (long *)*plVar11;
              if (-1 < *(char *)((long)plVar11 + 0x17)) {
                plVar10 = plVar11;
              }
              (**(code **)(*(long *)param_1[3] + 0x20))((long *)param_1[3]);
              FUN_00667e40(&local_d8);
              FUN_008490e4(&local_108,"{mid: %s, media_type: %s}",plVar10,&local_d8);
              FUN_00623bb0(&DAT_001f6130,*(undefined8 *)local_130[1],
                           *(undefined4 *)(local_130[1] + 8),*local_130,
                           (ulong)local_138 & 0xffffffff," from ",&local_108,&DAT_001ea377);
              goto joined_r0x00c2d8b8;
            }
          }
        }
      }
      else {
        plVar10 = (long *)(**(code **)(*param_1 + 0x40))(param_1);
        (**(code **)(*plVar10 + 0x38))();
        uVar8 = FUN_00417e08();
        if ((uVar8 & 1) == 0) {
          local_f0 = "../../pc/channel.cc";
          pcStack_e8 = (char *)0x19d9;
          local_e0 = (char *******)&local_138;
          plVar11 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
          plVar10 = (long *)*plVar11;
          if (-1 < *(char *)((long)plVar11 + 0x17)) {
            plVar10 = plVar11;
          }
          (**(code **)(*(long *)param_1[3] + 0x20))((long *)param_1[3]);
          FUN_00667e40(&local_d8);
          FUN_008490e4(&local_108,"{mid: %s, media_type: %s}",plVar10,&local_d8);
          FUN_00623bb0(&DAT_001f4eff,local_f0,(ulong)pcStack_e8 & 0xffffffff,
                       "Reset unsignaled remote stream for ",&local_108,&DAT_001ea377);
joined_r0x00c2d8b8:
          if ((long)local_f8 < 0) {
            operator_delete(local_108);
          }
        }
      }
      lVar21 = lVar21 + 0x90;
    } while (lVar21 != lVar23);
    lVar20 = *(long *)(param_2 + 0x58);
    lVar17 = *(long *)(param_2 + 0x60);
  }
  local_e0 = (char *******)0x0;
  pcStack_e8 = (char *)0x0;
  local_f0 = (char *)0x0;
  pcVar14 = pcStack_e8;
  __s2 = local_f0;
  for (; local_f0 = __s2, pcStack_e8 = pcVar14, lVar20 != lVar17; lVar20 = lVar20 + 0x90) {
    pwVar5 = *(wchar_t **)(lVar20 + 0x18);
    if ((bool)(pwVar5 == *(wchar_t **)(lVar20 + 0x20) & (bVar2 ^ 1U))) {
LAB_00c2dabc:
      plVar10 = (long *)(**(code **)(*param_1 + 0x40))(param_1);
      uVar8 = (**(code **)(*plVar10 + 0x28))(plVar10,lVar20);
      if ((uVar8 & 1) == 0) {
        if (*(undefined4 **)(lVar20 + 0x18) == *(undefined4 **)(lVar20 + 0x20)) {
          plVar11 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
          plVar10 = (long *)*plVar11;
          if (-1 < *(char *)((long)plVar11 + 0x17)) {
            plVar10 = plVar11;
          }
          (**(code **)(*(long *)param_1[3] + 0x20))((long *)param_1[3]);
          FUN_00667e40(&local_d8);
          FUN_008490e4(&local_138,"{mid: %s, media_type: %s}",plVar10,&local_d8);
          pppppppcVar12 = local_138;
          if (-1 < cStack_121) {
            pppppppcVar12 = (char *******)&local_138;
          }
          FUN_008490e4(&local_d8,"Failed to add remote stream ssrc: %s to %s","unsignaled",
                       pppppppcVar12);
          if (*(char *)((long)param_4 + 0x17) < '\0') {
            operator_delete((void *)*param_4);
          }
          lVar13 = CONCAT17(uStack_c1,local_c8);
          uStack_c1 = 0;
          param_4[1] = lStack_d0;
          *param_4 = (long)local_d8;
          param_4[2] = lVar13;
          local_d8 = (long *)((ulong)local_d8 & 0xffffffffffffff00);
          pppppppcVar12 = local_138;
          if (cStack_121 < '\0') goto LAB_00c2dec8;
        }
        else {
          FUN_0054923c(&local_108,**(undefined4 **)(lVar20 + 0x18));
          pppppppcVar12 = local_108;
          if (-1 < (long)local_f8) {
            pppppppcVar12 = (char *******)&local_108;
          }
          plVar11 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
          plVar10 = (long *)*plVar11;
          if (-1 < *(char *)((long)plVar11 + 0x17)) {
            plVar10 = plVar11;
          }
          (**(code **)(*(long *)param_1[3] + 0x20))((long *)param_1[3]);
          FUN_00667e40(&local_d8);
          FUN_008490e4(&local_138,"{mid: %s, media_type: %s}",plVar10,&local_d8);
          pppppppcVar3 = local_138;
          if (-1 < cStack_121) {
            pppppppcVar3 = (char *******)&local_138;
          }
          FUN_008490e4(&local_d8,"Failed to add remote stream ssrc: %s to %s",pppppppcVar12,
                       pppppppcVar3);
          if (*(char *)((long)param_4 + 0x17) < '\0') {
            operator_delete((void *)*param_4);
          }
          lVar13 = CONCAT17(uStack_c1,local_c8);
          uStack_c1 = 0;
          param_4[1] = lStack_d0;
          *param_4 = (long)local_d8;
          param_4[2] = lVar13;
          local_d8 = (long *)((ulong)local_d8 & 0xffffffffffffff00);
          if (cStack_121 < '\0') {
            operator_delete(local_138);
          }
          pppppppcVar12 = local_108;
          if ((long)local_f8 < 0) {
LAB_00c2dec8:
            operator_delete(pppppppcVar12);
          }
        }
        uVar19 = 0;
        if (local_f0 == (char *)0x0) {
          return 0;
        }
        goto LAB_00c2e0e8;
      }
      uVar8 = FUN_00417e08();
      if ((uVar8 & 1) == 0) {
        local_108 = (char *******)0x1c9fbd;
        local_100 = (long **)0x1aa9;
        local_f8 = &uStack_119;
        pppppppcStack_110 = (char *******)&local_108;
        local_118 = (char ******)0x1c4489;
        if (*(undefined4 **)(lVar20 + 0x18) == *(undefined4 **)(lVar20 + 0x20)) {
          FUN_005d3510(&local_138,"unsignaled");
        }
        else {
          FUN_0054923c(&local_138,**(undefined4 **)(lVar20 + 0x18));
        }
        plVar11 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
        plVar10 = (long *)*plVar11;
        if (-1 < *(char *)((long)plVar11 + 0x17)) {
          plVar10 = plVar11;
        }
        (**(code **)(*(long *)param_1[3] + 0x20))((long *)param_1[3]);
        FUN_00667e40(&local_d8);
        FUN_008490e4(&local_150,"{mid: %s, media_type: %s}",plVar10,&local_d8);
        FUN_00623bb0("\r\t\n\t\n",*pppppppcStack_110,*(undefined4 *)(pppppppcStack_110 + 1),
                     local_118,&local_138,&DAT_0019fec4,&local_150);
        if (cStack_139 < '\0') {
          operator_delete(local_150);
        }
        if (cStack_121 < '\0') {
          operator_delete(local_138);
        }
      }
    }
    else {
      if (pwVar5 == *(wchar_t **)(lVar20 + 0x20)) {
        wVar22 = L'\0';
      }
      else {
        wVar22 = *pwVar5;
      }
      lVar21 = param_1[0x22];
      lVar23 = param_1[0x23];
      lVar13 = lVar21;
      if (lVar21 != lVar23) {
        do {
          pwVar5 = *(wchar_t **)(lVar13 + 0x20);
          pwVar9 = wmemchr(*(wchar_t **)(lVar13 + 0x18),wVar22,
                           (long)pwVar5 - (long)*(wchar_t **)(lVar13 + 0x18) >> 2);
          lVar21 = lVar13;
          if (pwVar9 != (wchar_t *)0x0 && pwVar9 != pwVar5) break;
          lVar13 = lVar13 + 0x90;
          lVar21 = lVar23;
        } while (lVar13 != lVar23);
        lVar23 = param_1[0x23];
      }
      if ((lVar21 == lVar23) || (lVar21 == 0)) goto LAB_00c2dabc;
    }
    FUN_00c2e198(&local_f0,*(undefined8 *)(lVar20 + 0x18),*(undefined8 *)(lVar20 + 0x20));
    pcVar14 = pcStack_e8;
    __s2 = local_f0;
  }
  __s1 = (void *)param_1[0x33];
  pvVar18 = (void *)param_1[0x34];
  if (((long)pvVar18 - (long)__s1 == (long)pcVar14 - (long)__s2) &&
     (iVar7 = memcmp(__s1,__s2,(long)pvVar18 - (long)__s1), iVar7 == 0)) {
    if ((bVar16 & 1) != 0) goto LAB_00c2df90;
LAB_00c2e020:
    if (param_1 + 0x22 != (long *)(param_2 + 0x58)) {
      FUN_00c31608(param_1 + 0x22,*(long *)(param_2 + 0x58),*(long *)(param_2 + 0x60),
                   (*(long *)(param_2 + 0x60) - *(long *)(param_2 + 0x58) >> 4) *
                   -0x71c71c71c71c71c7);
    }
    *(undefined4 *)((long)param_1 + 300) = *(undefined4 *)(param_2 + 0x74);
    (**(code **)(*param_1 + 0xd8))(param_1);
    uVar19 = 1;
  }
  else {
    if (__s1 != (void *)0x0) {
      uVar15 = (ulong)((long)pvVar18 + (-4 - ((long)pvVar18 << 0x3e))) >> 2;
      uVar8 = (ulong)(((long)__s1 - (long)pvVar18 << 0x3e) - ((long)__s1 - (long)pvVar18)) >> 2;
      if (uVar15 <= uVar8) {
        uVar8 = uVar15;
      }
      if ((1 < uVar8) && ((((int)__s1 - (int)pvVar18 | -(int)pvVar18) & 3U) == 0)) {
        uVar8 = uVar8 & 0x3ffffffffffffffe;
        pvVar18 = (void *)((long)pvVar18 + uVar8 * -4);
        do {
          uVar8 = uVar8 - 2;
        } while (uVar8 != 0);
      }
      do {
        if (pvVar18 == __s1) {
          param_1[0x34] = (long)__s1;
          operator_delete(__s1);
          __s2 = local_f0;
          pcVar14 = pcStack_e8;
          goto LAB_00c2df78;
        }
        pvVar18 = (void *)((long)pvVar18 + -4);
      } while (pvVar18 != (void *)0x0);
      goto LAB_00c2e14c;
    }
LAB_00c2df78:
    pppppppcVar12 = local_e0;
    pcStack_e8 = (char *)0x0;
    local_e0 = (char *******)0x0;
    param_1[0x34] = (long)pcVar14;
    param_1[0x33] = (long)__s2;
    param_1[0x35] = (long)pppppppcVar12;
    local_f0 = (char *)0x0;
LAB_00c2df90:
    plVar10 = (long *)(**(code **)(*param_1 + 0x40))(param_1);
    (**(code **)(*plVar10 + 0x60))();
    plVar10 = (long *)param_1[6];
    local_d8 = param_1;
    FUN_00c2cd6c(&lStack_d0,param_1 + 0x2c);
    local_108 = (char *******)&local_138;
    local_138 = (char *******)CONCAT71(local_138._1_7_,0xaa);
    local_100 = &local_d8;
    (**(code **)(*plVar10 + 0x60))(plVar10,&local_108,FUN_00c32124,&local_150);
    pppppppcVar12 = local_138;
    FUN_00898e5c(&lStack_d0);
    plVar10 = (long *)(**(code **)(*param_1 + 0x40))(param_1);
    (**(code **)(*plVar10 + 0x68))();
    if (((ulong)pppppppcVar12 & 1) != 0) goto LAB_00c2e020;
    plVar11 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
    plVar10 = (long *)*plVar11;
    if (-1 < *(char *)((long)plVar11 + 0x17)) {
      plVar10 = plVar11;
    }
    FUN_008490e4(&local_d8,"Failed to set up audio demuxing for mid=\'%s\'.",plVar10);
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      operator_delete((void *)*param_4);
    }
    uVar19 = 0;
    param_4[1] = lStack_d0;
    *param_4 = (long)local_d8;
    param_4[2] = CONCAT17(uStack_c1,local_c8);
  }
  if (local_f0 == (char *)0x0) {
    return uVar19;
  }
LAB_00c2e0e8:
  uVar8 = (ulong)(((long)local_f0 - (long)pcStack_e8 << 0x3e) - ((long)local_f0 - (long)pcStack_e8))
          >> 2;
  if ((ulong)(pcStack_e8 + (-4 - ((long)pcStack_e8 << 0x3e))) >> 2 <= uVar8) {
    uVar8 = (ulong)(pcStack_e8 + (-4 - ((long)pcStack_e8 << 0x3e))) >> 2;
  }
  pcVar14 = pcStack_e8;
  if ((1 < uVar8) && ((((int)local_f0 - (int)pcStack_e8 | -(int)pcStack_e8) & 3U) == 0)) {
    uVar8 = uVar8 & 0x3ffffffffffffffe;
    pcVar14 = pcStack_e8 + uVar8 * -4;
    do {
      uVar8 = uVar8 - 2;
    } while (uVar8 != 0);
  }
  do {
    if (pcVar14 == local_f0) {
      pcStack_e8 = local_f0;
      operator_delete(local_f0);
      return uVar19;
    }
    pcVar14 = pcVar14 + -4;
  } while (pcVar14 != (char *)0x0);
LAB_00c2e14c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c2e198  FUN_00c2e198 =====

void FUN_00c2e198(long *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  undefined1 local_64 [4];
  
  if (param_2 != param_3) {
    puVar7 = (uint *)param_1[1];
    if (param_2 + 1 == param_3) {
      FUN_00c32794(param_1,puVar7,param_2,param_2);
      return;
    }
    puVar10 = (uint *)*param_1;
    lVar8 = (long)puVar7 - (long)puVar10;
    puVar3 = puVar7;
    uVar9 = lVar8 >> 2;
    puVar11 = puVar10;
    do {
      puVar12 = (uint *)((long)puVar11 + lVar8);
      if (puVar7 == puVar10) {
LAB_00c2e2b8:
        if (puVar3 < (uint *)param_1[2]) {
          if (puVar3 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar2 = puVar3 + 1;
          *puVar3 = *param_2;
        }
        else {
          puVar2 = (uint *)FUN_00852528(param_1,param_2);
        }
        lVar4 = (long)puVar12 - (long)puVar11;
        puVar11 = (uint *)*param_1;
        param_1[1] = (long)puVar2;
        uVar5 = lVar4 >> 2;
        if ((long)uVar9 <= (long)uVar5) {
          uVar5 = uVar9;
        }
      }
      else {
        puVar2 = puVar11;
        uVar5 = lVar8 >> 2;
        do {
          uVar6 = uVar5 >> 1;
          puVar1 = puVar2 + uVar6 + 1;
          uVar5 = uVar5 + ~uVar6;
          if (*param_2 <= puVar2[uVar6]) {
            puVar1 = puVar2;
            uVar5 = uVar6;
          }
          puVar2 = puVar1;
        } while (uVar5 != 0);
        if ((puVar1 == puVar12) ||
           (puVar2 = puVar3, uVar5 = uVar9, puVar12 = puVar1, *param_2 < *puVar1))
        goto LAB_00c2e2b8;
      }
      param_2 = param_2 + 1;
      puVar3 = puVar2;
      uVar9 = uVar5;
    } while (param_2 != param_3);
    FUN_00c32628(param_1,(long)puVar11 + lVar8);
    local_64[0] = 0;
    FUN_00c33994(*param_1 + uVar5 * 4,*param_1 + lVar8,param_1[1],local_64);
  }
  return;
}


// ===== 00c2e330  FUN_00c2e330 =====

undefined4 FUN_00c2e330(long param_1,byte param_2)

{
  byte *pbVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  undefined4 uVar5;
  byte local_18 [4];
  byte local_14 [4];
  
  if ((*(byte *)(param_1 + 0xf2) & 1) == 0) {
    uVar5 = 0;
  }
  else {
    pbVar3 = *(byte **)(param_1 + 0x1b0);
    uVar2 = (long)*(byte **)(param_1 + 0x1b8) - (long)*(byte **)(param_1 + 0x1b0);
    while (pbVar1 = pbVar3, uVar2 != 0) {
      uVar4 = uVar2 >> 1;
      pbVar3 = pbVar1 + uVar4 + 1;
      uVar2 = uVar2 + ~uVar4;
      if (param_2 <= pbVar1[uVar4]) {
        pbVar3 = pbVar1;
        uVar2 = uVar4;
      }
    }
    local_14[0] = param_2;
    if ((*(byte **)(param_1 + 0x1b8) == pbVar1) || (param_2 < *pbVar1)) {
      FUN_00c33a90(param_1 + 0x1b0,pbVar1,local_14);
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
  }
  pbVar3 = *(byte **)(param_1 + 0x130);
  uVar2 = (long)*(byte **)(param_1 + 0x138) - (long)*(byte **)(param_1 + 0x130);
  while (pbVar1 = pbVar3, uVar2 != 0) {
    uVar4 = uVar2 >> 1;
    pbVar3 = pbVar1 + uVar4 + 1;
    uVar2 = uVar2 + ~uVar4;
    if (param_2 <= pbVar1[uVar4]) {
      pbVar3 = pbVar1;
      uVar2 = uVar4;
    }
  }
  if ((*(byte **)(param_1 + 0x138) == pbVar1) || (param_2 < *pbVar1)) {
    local_18[0] = param_2;
    FUN_00c33a90(param_1 + 0x130,pbVar1,local_18);
  }
  return uVar5;
}


// ===== 00c2e430  FUN_00c2e430 =====

void FUN_00c2e430(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 byte param_9,long param_10,undefined8 param_11)

{
  void *__src;
  byte bVar1;
  void *__dest;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  
  __src = *(void **)(param_10 + 8);
  bVar1 = *(byte *)(param_10 + 3);
  uVar2 = *(long *)(param_10 + 0x10) - (long)__src;
  if (uVar2 == 0) {
    __dest = (void *)0x0;
    pvVar3 = (void *)0x0;
  }
  else {
    if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d4754();
    }
    __dest = operator_new(uVar2);
    pvVar3 = (void *)((long)__dest + uVar2);
    memcpy(__dest,__src,uVar2);
  }
  param_1[4] = param_6;
  param_1[5] = param_2;
  *param_1 = &PTR_FUN_00d4cbe0;
  param_1[1] = &PTR_FUN_00d4cce0;
  param_1[2] = &PTR_FUN_00d4cd18;
  param_1[3] = param_5;
  param_1[6] = param_3;
  param_1[7] = param_4;
  FUN_007ebca0(param_1 + 8);
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0xc] = FUN_00433984;
  param_1[0xd] = 0;
  param_1[0x10] = FUN_00433984;
  param_1[0x11] = 0;
  param_1[0x14] = FUN_00433984;
  *(byte *)((long)param_1 + 0xeb) = param_9 & 1;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)((long)param_1 + 0xe7) = 0;
  *(uint *)((long)param_1 + 0xec) = (uint)bVar1;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)((long)param_1 + 0xf2) = 1;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0x300000003;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  FUN_00898cd8(param_1 + 0x2c,param_7,param_8,0,0);
  param_1[0x39] = param_11;
  if (__dest != (void *)0x0) {
    uVar4 = (ulong)((long)pvVar3 + ((long)pvVar3 << 0x3f) + -2) >> 1;
    uVar2 = (ulong)(((long)__dest - (long)pvVar3 << 0x3f) - ((long)__dest - (long)pvVar3)) >> 1;
    if (uVar4 <= uVar2) {
      uVar2 = uVar4;
    }
    if ((1 < uVar2) && ((((int)__dest - (uint)pvVar3 | (uint)pvVar3) & 1) == 0)) {
      uVar2 = uVar2 & 0x7ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar2 * -2);
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    while (pvVar3 != __dest) {
      pvVar3 = (void *)((long)pvVar3 + -2);
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    operator_delete(__dest);
  }
  *param_1 = &PTR_FUN_00d4cd40;
  param_1[1] = &PTR_FUN_00d4ce40;
  param_1[2] = &PTR_FUN_00d4ce78;
  FUN_0088b6f8(param_1 + 0x3a);
  *(undefined1 *)((long)param_1 + 0x2dc) = 0;
  *(undefined2 *)(param_1 + 0x5c) = 1;
  *(undefined1 *)((long)param_1 + 0x2e2) = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  *(undefined8 *)((long)param_1 + 0x2d1) = 0;
  *(undefined8 *)((long)param_1 + 0x2c9) = 0;
  param_1[0x51] = &PTR_FUN_00d4d000;
  return;
}


// ===== 00c2e660  FUN_00c2e660 =====

void FUN_00c2e660(undefined8 *param_1)

{
  int iVar1;
  char **local_48;
  char *local_40;
  char *pcStack_38;
  
  *param_1 = &PTR_FUN_00d4cd40;
  param_1[1] = &PTR_FUN_00d4ce40;
  param_1[2] = &PTR_FUN_00d4ce78;
  if (((DAT_00dbaf68 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00dbaf68), iVar1 != 0)) {
    DAT_00dbaf60 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbaf68);
  }
  local_48 = (char **)0x0;
  pcStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbaf60 != '\0') {
    local_48 = &local_40;
    FUN_0066d348(0x42,DAT_00dbaf60,"VoiceChannel::~VoiceChannel",0,0,0,0,0,0);
    local_40 = DAT_00dbaf60;
    pcStack_38 = "VoiceChannel::~VoiceChannel";
  }
  FUN_00c2cf94(param_1);
  if ((local_48 != (char **)0x0) && (**local_48 != '\0')) {
    FUN_0066d348(0x45,*local_48,local_48[1],0,0,0,0,0,0);
  }
  FUN_0088c128(param_1 + 0x51);
  FUN_0088b744(param_1 + 0x3a);
  FUN_00c2acf4(param_1);
  return;
}


// ===== 00c2e7a0  FUN_00c2e7a0 =====

void FUN_00c2e7a0(long param_1)

{
  FUN_00c2e660(param_1 + -8);
  return;
}


// ===== 00c2e7ac  FUN_00c2e7ac =====

void FUN_00c2e7ac(long param_1)

{
  FUN_00c2e660(param_1 + -0x10);
  return;
}


// ===== 00c2e7b8  FUN_00c2e7b8 =====

void FUN_00c2e7b8(void *param_1)

{
  FUN_00c2e660();
  operator_delete(param_1);
  return;
}


// ===== 00c2e7e8  FUN_00c2e7e8 =====

void FUN_00c2e7e8(long param_1)

{
  FUN_00c2e660((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 00c2e81c  FUN_00c2e81c =====

void FUN_00c2e81c(long param_1)

{
  FUN_00c2e660((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}


// ===== 00c2e850  FUN_00c2e850 =====

/* WARNING: Removing unreachable block (ram,0x00c2e9b8) */

void FUN_00c2e850(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  byte bVar6;
  void *local_a8 [2];
  char cStack_91;
  char *local_90;
  undefined8 local_88;
  undefined1 *local_80;
  char *local_78;
  char **ppcStack_70;
  ulong local_68;
  char **local_60;
  char *local_58;
  ulong *puStack_50;
  undefined1 local_48 [24];
  undefined1 uStack_11;
  
  if ((char)param_1[0x1e] == '\x01') {
    uVar2 = FUN_00bde298((int)param_1[0x25]);
    uVar2 = uVar2 & 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  plVar3 = (long *)(**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,(uint)uVar2 & 1);
  if ((((char)param_1[0x1e] == '\x01') &&
      (uVar4 = FUN_00bde298(*(undefined4 *)((long)param_1 + 300)), (uVar4 & 1) != 0)) &&
     (uVar4 = FUN_00bde288((int)param_1[0x25]), (uVar4 & 1) != 0)) {
    bVar6 = *(byte *)((long)param_1 + 0xea);
  }
  else {
    bVar6 = 0;
  }
  plVar3 = (long *)(**(code **)(*param_1 + 0x28))(param_1);
  (**(code **)(*plVar3 + 0xb8))(plVar3,bVar6 & 1);
  uVar4 = FUN_00417e08();
  if ((uVar4 & 1) == 0) {
    local_90 = "../../pc/channel.cc";
    local_88 = 0x1e31;
    local_80 = &uStack_11;
    ppcStack_70 = &local_90;
    local_78 = "Changing voice state, recv=";
    local_68 = uVar2 & 1;
    local_60 = &local_78;
    puStack_50 = &local_68;
    local_58 = " send=";
    plVar5 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
    plVar3 = (long *)*plVar5;
    if (-1 < *(char *)((long)plVar5 + 0x17)) {
      plVar3 = plVar5;
    }
    (**(code **)(*(long *)param_1[3] + 0x20))((long *)param_1[3]);
    FUN_00667e40(local_48);
    FUN_008490e4(local_a8,"{mid: %s, media_type: %s}",plVar3,local_48);
    puVar1 = (undefined8 *)((undefined8 *)puStack_50[1])[1];
    FUN_00623bb0(&DAT_00214ec4,*puVar1,*(undefined4 *)(puVar1 + 1),*(undefined8 *)puStack_50[1],
                 (int)*puStack_50,local_58,bVar6 & 1," for ",local_a8);
    if (cStack_91 < '\0') {
      operator_delete(local_a8[0]);
    }
  }
  return;
}


// ===== 00c2ea2c  FUN_00c2ea2c =====

/* WARNING: Removing unreachable block (ram,0x00c2ec10) */
/* WARNING: Removing unreachable block (ram,0x00c2ec1c) */
/* WARNING: Removing unreachable block (ram,0x00c2ec20) */

uint FUN_00c2ea2c(long *param_1,long param_2,int param_3,long *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined1 *local_200;
  undefined1 *puStack_1f8;
  undefined1 *local_1f0;
  char local_1e8;
  long local_1d8;
  long lStack_1d0;
  long local_1c8;
  undefined *local_1c0;
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
  undefined1 *local_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  undefined1 *local_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined1 *local_110;
  undefined1 *local_100;
  long *plStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined4 local_b0;
  undefined1 uStack_ac;
  undefined2 uStack_ab;
  undefined1 uStack_a9;
  byte bStack_a8;
  undefined2 uStack_a7;
  undefined5 uStack_a5;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  char **local_88;
  char *local_80;
  char *pcStack_78;
  
  if (((DAT_00dbaf78 & 1) == 0) && (iVar5 = FUN_0054fdd4(&DAT_00dbaf78), iVar5 != 0)) {
    DAT_00dbaf70 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbaf78);
  }
  local_88 = (char **)0x0;
  pcStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbaf70 != '\0') {
    FUN_0066d348(0x42,DAT_00dbaf70,"VoiceChannel::SetLocalContent_w",0,0,0,0,0,0);
    local_80 = DAT_00dbaf70;
    pcStack_78 = "VoiceChannel::SetLocalContent_w";
    local_88 = &local_80;
  }
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0066a108(&local_a0,param_2 + 0x40,*(undefined4 *)((long)param_1 + 0xec));
  plVar6 = (long *)(**(code **)(*param_1 + 0x28))(param_1);
  (**(code **)(*plVar6 + 0x68))(plVar6,*(int *)(param_2 + 0xc0) != 0);
  plStack_f8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  bStack_a8 = 0xaa;
  uStack_a7 = 0xaaaa;
  uStack_a5 = 0xaaaaaaaaaa;
  local_b0 = 0xaaaaaaaa;
  uStack_ac = 0xaa;
  uStack_ab = 0xaaaa;
  uStack_a9 = 0xaa;
  FUN_00c2f0d4(&local_100,param_1 + 0x51);
  bStack_a8 = FUN_00bde298(*(undefined4 *)(param_2 + 0x74));
  bStack_a8 = bStack_a8 & 1;
  if (&local_e0 != (undefined1 **)(param_2 + 0x110)) {
    FUN_0088fd38(&local_e0,*(long *)(param_2 + 0x110),*(long *)(param_2 + 0x118),
                 (*(long *)(param_2 + 0x118) - *(long *)(param_2 + 0x110) >> 3) *
                 -0x7b425ed097b425ed);
  }
  uVar9 = 0x100000005;
  FUN_005e2544(&local_c8,local_a0,puStack_98,(long)puStack_98 - (long)local_a0 >> 5);
  uStack_a7 = *(undefined2 *)(param_2 + 0x21);
  if ((*(byte *)(param_2 + 0x23) & 1) == 0) {
    uVar7 = FUN_00bf4974(param_2);
    if ((uVar7 & 1) == 0) {
      uVar9 = 0;
    }
  }
  else {
    uVar9 = 0x100000006;
  }
  local_b0 = (undefined4)uVar9;
  uStack_ac = (undefined1)((ulong)uVar9 >> 0x20);
  plVar6 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
  plVar10 = (long *)((ulong)&local_100 | 8);
  if (plVar10 != plVar6) {
    if (*(char *)((long)plVar6 + 0x17) < '\0') {
      FUN_00547fc0((ulong)&local_100 | 8,*plVar6,plVar6[1]);
    }
    else {
      lVar11 = plVar6[1];
      lVar8 = *plVar6;
      plVar10[2] = plVar6[2];
      plVar10[1] = lVar11;
      *plVar10 = lVar8;
    }
  }
  plVar6 = (long *)(**(code **)(*param_1 + 0x40))(param_1);
  uVar7 = (**(code **)(*plVar6 + 0x90))(plVar6,&local_100);
  if ((uVar7 & 1) == 0) {
    plVar10 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
    plVar6 = (long *)*plVar10;
    if (-1 < *(char *)((long)plVar10 + 0x17)) {
      plVar6 = plVar10;
    }
    FUN_008490e4(&local_1c0,
                 "Failed to set local audio description recv parameters for m-section with mid=\'%s\'."
                 ,plVar6);
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      operator_delete((void *)*param_4);
    }
    uVar4 = 0;
    param_4[1] = (long)puStack_1b8;
    *param_4 = (long)local_1c0;
    param_4[2] = (long)local_1b0;
    goto LAB_00c2efe4;
  }
  uVar7 = FUN_00bde298(*(undefined4 *)(param_2 + 0x74));
  if ((uVar7 & 1) == 0) {
LAB_00c2ecfc:
    uVar4 = 0;
  }
  else {
    lVar8 = *(long *)(param_2 + 0x110);
    lVar11 = *(long *)(param_2 + 0x118);
    if (lVar8 == lVar11) goto LAB_00c2ecfc;
    uVar4 = 0;
    do {
      uVar3 = FUN_00c2e330(param_1,*(undefined4 *)(lVar8 + 0xc));
      lVar8 = lVar8 + 0xd8;
      uVar4 = uVar3 | uVar4;
    } while (lVar8 != lVar11);
  }
  if ((undefined1 **)(param_1 + 0x51) != &local_100) {
    if (*(char *)((long)param_1 + 0x2a7) < '\0') {
      puVar2 = puStack_f0;
      plVar6 = plStack_f8;
      if (-1 < (long)puStack_e8) {
        puVar2 = (undefined1 *)((ulong)puStack_e8 >> 0x38);
        plVar6 = plVar10;
      }
      FUN_00547f08(param_1 + 0x52,plVar6,puVar2);
    }
    else if ((long)puStack_e8 < 0) {
      FUN_00547fc0(param_1 + 0x52,plStack_f8,puStack_f0);
    }
    else {
      lVar11 = *plVar10;
      lVar8 = plVar10[2];
      param_1[0x53] = plVar10[1];
      param_1[0x52] = lVar11;
      param_1[0x54] = lVar8;
    }
    FUN_0088fd38(param_1 + 0x55,local_e0,puStack_d8,
                 ((long)puStack_d8 - (long)local_e0 >> 3) * -0x7b425ed097b425ed);
    FUN_005e2544(param_1 + 0x58,local_c8,local_c0,(long)local_c0 - (long)local_c8 >> 5);
  }
  param_1[0x5b] = CONCAT17(uStack_a9,CONCAT25(uStack_ab,CONCAT14(uStack_ac,local_b0)));
  *(uint *)((long)param_1 + 0x2df) = CONCAT22(uStack_a7,CONCAT11(bStack_a8,uStack_a9));
  if (param_3 - 1U < 2) {
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
    local_160 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
    local_150 = &DAT_aaaaaaaaaaaaaaaa;
    local_138 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_140 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
    local_130 = &DAT_aaaaaaaaaaaaaaaa;
    local_118 = &DAT_aaaaaaaaaaaaaaaa;
    local_120 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_1c0 = &DAT_aaaaaaaaaaaaaaaa;
    local_110 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00c318a0(&local_1c0,param_1 + 0x3a);
    local_150 = (undefined1 *)param_1[0x48];
    puStack_158 = (undefined1 *)param_1[0x47];
    puStack_140 = (undefined1 *)param_1[0x4a];
    puStack_148 = (undefined1 *)param_1[0x49];
    local_130 = (undefined1 *)((ulong)local_130 & 0xffffffffffffff00);
    local_1c0 = PTR_DAT_00d52d80 + 0x10;
    local_118 = (undefined1 *)((ulong)local_118 & 0xffffffffffffff00);
    local_138 = (undefined1 *)CONCAT62(local_138._2_6_,(short)param_1[0x4b]);
    if ((char)param_1[0x4f] == '\x01') {
      if (*(char *)((long)param_1 + 0x277) < '\0') {
        FUN_005478d8(&local_130,param_1[0x4c],param_1[0x4d]);
      }
      else {
        puStack_128 = (undefined1 *)param_1[0x4d];
        local_130 = (undefined1 *)param_1[0x4c];
        local_120 = (undefined1 *)param_1[0x4e];
      }
      local_118 = (undefined1 *)CONCAT71(local_118._1_7_,1);
    }
    local_110 = (undefined1 *)CONCAT62(local_110._2_6_,(short)param_1[0x50]);
    FUN_005e2544(&puStack_188,local_a0,puStack_98,(long)puStack_98 - (long)local_a0 >> 5);
    local_160 = (undefined1 *)CONCAT71(local_160._1_7_,*(int *)(param_2 + 0xc0) != 0);
    plVar6 = (long *)(**(code **)(*param_1 + 0x28))(param_1);
    uVar7 = (**(code **)(*plVar6 + 0xb0))(plVar6,&local_1c0);
    if ((uVar7 & 1) != 0) {
      FUN_00c2f2bc(param_1 + 0x3a,&local_1c0);
      FUN_0088b744(&local_1c0);
      goto LAB_00c2eec8;
    }
    plVar10 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
    plVar6 = (long *)*plVar10;
    if (-1 < *(char *)((long)plVar10 + 0x17)) {
      plVar6 = plVar10;
    }
    FUN_008490e4(&local_1d8,"Failed to set send parameters for m-section with mid=\'%s\'.",plVar6);
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      operator_delete((void *)*param_4);
    }
    param_4[1] = lStack_1d0;
    *param_4 = local_1d8;
    param_4[2] = local_1c8;
    FUN_0088b744(&local_1c0);
  }
  else {
LAB_00c2eec8:
    uVar7 = FUN_00c2d0ac(param_1,param_2 + 0x58);
    if ((uVar7 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x74);
      (**(code **)(*param_1 + 0xd8))(param_1);
      puStack_1f8 = puStack_98;
      local_1f0 = local_90;
      puStack_98 = (undefined1 *)0x0;
      local_90 = (undefined1 *)0x0;
      local_200 = local_a0;
      local_a0 = (undefined1 *)0x0;
      local_1e8 = '\x01';
      uVar4 = FUN_00c2cae8(param_1,uVar4 & 1,&local_200,param_4);
      puVar2 = local_200;
      if ((local_1e8 == '\x01') && (puVar1 = puStack_1f8, local_200 != (undefined1 *)0x0)) {
        while (puVar2 != puVar1) {
          puVar1 = puVar1 + -0x20;
          if (puVar1 == (undefined1 *)0x0) goto LAB_00c2f090;
          FUN_00668f8c(puVar1);
        }
        puStack_1f8 = puVar2;
        operator_delete(local_200);
      }
      goto LAB_00c2efe4;
    }
  }
  uVar4 = 0;
LAB_00c2efe4:
  FUN_0088c128(&local_100);
  puVar1 = local_a0;
  puVar2 = puStack_98;
  if (local_a0 != (undefined1 *)0x0) {
    while (puVar1 != puVar2) {
      puVar2 = puVar2 + -0x20;
      if (puVar2 == (undefined1 *)0x0) {
LAB_00c2f090:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_00668f8c(puVar2);
    }
    puStack_98 = puVar1;
    operator_delete(local_a0);
  }
  if ((local_88 != (char **)0x0) && (**local_88 != '\0')) {
    FUN_0066d348(0x45,*local_88,local_88[1],0,0,0,0,0,0);
  }
  return uVar4 & 1;
}


// ===== 00c2f0d4  FUN_00c2f0d4 =====

void FUN_00c2f0d4(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_FUN_00d3b168;
  if (*(char *)(param_2 + 0x1f) < '\0') {
    FUN_005478d8(param_1 + 1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    uVar4 = *(undefined8 *)(param_2 + 8);
    param_1[3] = *(undefined8 *)(param_2 + 0x18);
    param_1[2] = uVar6;
    param_1[1] = uVar4;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  lVar5 = *(long *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x28);
  uVar2 = lVar1 - lVar5;
  if (uVar2 != 0) {
    if (0x12f684bda12f684 < (ulong)(((long)uVar2 >> 3) * -0x7b425ed097b425ed)) {
                    /* WARNING: Subroutine does not return */
      FUN_0088fd20();
    }
    pvVar3 = operator_new(uVar2);
    param_1[4] = pvVar3;
    param_1[5] = pvVar3;
    param_1[6] = (long)pvVar3 + uVar2;
    do {
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00890830(pvVar3,lVar5);
      lVar5 = lVar5 + 0xd8;
      pvVar3 = (void *)((long)pvVar3 + 0xd8);
    } while (lVar5 != lVar1);
    param_1[5] = pvVar3;
  }
  FUN_0066974c(param_1 + 7,param_2 + 0x38);
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)((long)param_1 + 0x57) = *(undefined4 *)(param_2 + 0x57);
  param_1[10] = uVar4;
  *param_1 = &PTR_FUN_00d4d000;
  return;
}


// ===== 00c2f1fc  FUN_00c2f1fc =====

void FUN_00c2f1fc(long param_1,undefined8 param_2,undefined1 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_4 + 0x58) = param_3;
  if (param_4 + 0x20 != param_1 + 0x110) {
    FUN_0088fd38(param_4 + 0x20,*(long *)(param_1 + 0x110),*(long *)(param_1 + 0x118),
                 (*(long *)(param_1 + 0x118) - *(long *)(param_1 + 0x110) >> 3) *
                 -0x7b425ed097b425ed);
  }
  uVar2 = 0x100000005;
  FUN_00c2cd24(param_4 + 0x38,param_2);
  *(undefined1 *)(param_4 + 0x59) = *(undefined1 *)(param_1 + 0x21);
  *(undefined1 *)(param_4 + 0x5a) = *(undefined1 *)(param_1 + 0x22);
  if ((*(byte *)(param_1 + 0x23) & 1) == 0) {
    uVar1 = FUN_00bf4974(param_1);
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0x100000006;
  }
  *(int *)(param_4 + 0x50) = (int)uVar2;
  *(char *)(param_4 + 0x54) = (char)((ulong)uVar2 >> 0x20);
  return;
}


// ===== 00c2f2bc  FUN_00c2f2bc =====

long FUN_00c2f2bc(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1 != param_2) {
    bVar3 = *(byte *)(param_2 + 0x1f);
    if (*(char *)(param_1 + 0x1f) < '\0') {
      uVar1 = *(ulong *)(param_2 + 0x10);
      puVar4 = *(undefined8 **)(param_2 + 8);
      if (-1 < (char)bVar3) {
        uVar1 = (ulong)bVar3;
        puVar4 = (undefined8 *)(param_2 + 8);
      }
      FUN_00547f08(param_1 + 8,puVar4,uVar1);
    }
    else if ((char)bVar3 < '\0') {
      FUN_00547fc0(param_1 + 8,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    }
    else {
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      uVar5 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x10) = uVar6;
      *(undefined8 *)(param_1 + 8) = uVar5;
    }
    FUN_0088fd38(param_1 + 0x20,*(long *)(param_2 + 0x20),*(long *)(param_2 + 0x28),
                 (*(long *)(param_2 + 0x28) - *(long *)(param_2 + 0x20) >> 3) * -0x7b425ed097b425ed)
    ;
    FUN_005e2544(param_1 + 0x38,*(long *)(param_2 + 0x38),*(long *)(param_2 + 0x40),
                 *(long *)(param_2 + 0x40) - *(long *)(param_2 + 0x38) >> 5);
  }
  uVar5 = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x57) = *(undefined4 *)(param_2 + 0x57);
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  uVar2 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  uVar6 = *(undefined8 *)(param_2 + 0x80);
  uVar5 = *(undefined8 *)(param_2 + 0x78);
  uVar8 = *(undefined8 *)(param_2 + 0x70);
  uVar7 = *(undefined8 *)(param_2 + 0x68);
  *(undefined2 *)(param_1 + 0x88) = *(undefined2 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = uVar6;
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  *(undefined8 *)(param_1 + 0x70) = uVar8;
  *(undefined8 *)(param_1 + 0x68) = uVar7;
  FUN_005e7520(param_1 + 0x90,param_2 + 0x90);
  *(undefined2 *)(param_1 + 0xb0) = *(undefined2 *)(param_2 + 0xb0);
  return param_1;
}


// ===== 00c2f3cc  FUN_00c2f3cc =====

uint FUN_00c2f3cc(long *param_1,long param_2,int param_3,undefined8 *param_4)

{
  undefined8 ***pppuVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined4 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined1 *local_190;
  long *plStack_188;
  undefined1 *local_180;
  undefined1 *puStack_178;
  undefined1 *local_170;
  undefined1 *puStack_168;
  undefined1 *puStack_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined7 local_140;
  undefined4 uStack_139;
  undefined5 uStack_135;
  undefined8 **local_130;
  undefined1 *puStack_128;
  undefined8 local_120;
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
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  char **local_78;
  char *local_70;
  char *pcStack_68;
  
  if (((DAT_00dbaf88 & 1) == 0) && (iVar6 = FUN_0054fdd4(&DAT_00dbaf88), iVar6 != 0)) {
    DAT_00dbaf80 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbaf88);
  }
  local_78 = (char **)0x0;
  pcStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbaf80 != '\0') {
    FUN_0066d348(0x42,DAT_00dbaf80,"VoiceChannel::SetRemoteContent_w",0,0,0,0,0,0);
    local_70 = DAT_00dbaf80;
    pcStack_68 = "VoiceChannel::SetRemoteContent_w";
    local_78 = &local_70;
  }
  uVar7 = FUN_00417e08();
  if ((uVar7 & 1) == 0) {
    plVar8 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
    plVar11 = (long *)*plVar8;
    if (-1 < *(char *)((long)plVar8 + 0x17)) {
      plVar11 = plVar8;
    }
    (**(code **)(*(long *)param_1[3] + 0x20))((long *)param_1[3]);
    FUN_00667e40(&local_130);
    pppuVar1 = (undefined8 ***)local_130;
    if (-1 < (long)local_120) {
      pppuVar1 = &local_130;
    }
    FUN_008490e4(&local_190,"{mid: %s, media_type: %s}",plVar11,pppuVar1);
    if (local_120._7_1_ < '\0') {
      operator_delete(local_130);
    }
    FUN_00623bb0(&DAT_001f4e90,"../../pc/channel.cc",0x20d1,"Setting remote voice description for ",
                 &local_190);
    if ((long)local_180 < 0) {
      operator_delete(local_190);
    }
  }
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
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  local_130 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c318a0(&local_130,param_1 + 0x3a);
  local_c0 = (undefined1 *)param_1[0x48];
  puStack_c8 = (undefined1 *)param_1[0x47];
  puStack_b0 = (undefined1 *)param_1[0x4a];
  puStack_b8 = (undefined1 *)param_1[0x49];
  local_a0 = (undefined1 *)((ulong)local_a0 & 0xffffffffffffff00);
  local_130 = (undefined8 **)(PTR_DAT_00d52d80 + 0x10);
  local_88 = (undefined1 *)((ulong)local_88 & 0xffffffffffffff00);
  local_a8 = (undefined1 *)CONCAT62(local_a8._2_6_,(short)param_1[0x4b]);
  if ((char)param_1[0x4f] == '\x01') {
    if (*(char *)((long)param_1 + 0x277) < '\0') {
      FUN_005478d8(&local_a0,param_1[0x4c],param_1[0x4d]);
    }
    else {
      puStack_98 = (undefined1 *)param_1[0x4d];
      local_a0 = (undefined1 *)param_1[0x4c];
      local_90 = (undefined1 *)param_1[0x4e];
    }
    local_88 = (undefined1 *)CONCAT71(local_88._1_7_,1);
  }
  local_80 = (undefined1 *)CONCAT62(local_80._2_6_,(short)param_1[0x50]);
  FUN_00c2f9cc(param_2,*(undefined4 *)((long)param_1 + 0xec),&local_130);
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x60))(param_1);
  puVar10 = (undefined8 *)((ulong)&local_130 | 8);
  if (puVar10 != puVar9) {
    bVar3 = *(byte *)((long)puVar9 + 0x17);
    if ((long)puStack_118 < 0) {
      uVar7 = puVar9[1];
      puVar4 = (undefined8 *)*puVar9;
      if (-1 < (char)bVar3) {
        uVar7 = (ulong)bVar3;
        puVar4 = puVar9;
      }
      FUN_00547f08(puVar10,puVar4,uVar7);
    }
    else if ((char)bVar3 < '\0') {
      FUN_00547fc0(puVar10,*puVar9,puVar9[1]);
    }
    else {
      uVar16 = puVar9[1];
      uVar14 = *puVar9;
      puVar10[2] = puVar9[2];
      puVar10[1] = uVar16;
      *puVar10 = uVar14;
    }
  }
  plVar11 = (long *)(**(code **)(*param_1 + 0x28))(param_1);
  uVar7 = (**(code **)(*plVar11 + 0xb0))(plVar11,&local_130);
  if ((uVar7 & 1) == 0) {
    plVar8 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
    plVar11 = (long *)*plVar8;
    if (-1 < *(char *)((long)plVar8 + 0x17)) {
      plVar11 = plVar8;
    }
    FUN_008490e4(&local_190,
                 "Failed to set remote audio description send parameters for m-section with mid=\'%s\'."
                 ,plVar11);
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      operator_delete((void *)*param_4);
    }
    uVar5 = 0;
    param_4[1] = plStack_188;
    *param_4 = local_190;
    param_4[2] = local_180;
  }
  else {
    if (param_3 - 1U < 2) {
      plStack_188 = (long *)&DAT_aaaaaaaaaaaaaaaa;
      local_190 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
      local_180 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
      local_170 = &DAT_aaaaaaaaaaaaaaaa;
      local_158 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_160 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
      local_150 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_135 = 0xaaaaaaaaaa;
      local_140 = 0xaaaaaaaaaaaaaa;
      uStack_139 = 0xaaaaaaaa;
      FUN_00c2f0d4(&local_190,param_1 + 0x51);
      FUN_005e2544(&local_158,puStack_f8,puStack_f0,(long)puStack_f0 - (long)puStack_f8 >> 5);
      plVar11 = (long *)(**(code **)(*param_1 + 0x40))(param_1);
      uVar7 = (**(code **)(*plVar11 + 0x90))(plVar11,&local_190);
      if ((uVar7 & 1) == 0) {
        plVar8 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
        plVar11 = (long *)*plVar8;
        if (-1 < *(char *)((long)plVar8 + 0x17)) {
          plVar11 = plVar8;
        }
        FUN_008490e4(&local_1a8,"Failed to set recv parameters for m-section with mid=\'%s\'.",
                     plVar11);
        if (*(char *)((long)param_4 + 0x17) < '\0') {
          operator_delete((void *)*param_4);
        }
        param_4[1] = uStack_1a0;
        *param_4 = local_1a8;
        param_4[2] = local_198;
        FUN_0088c128(&local_190);
        uVar5 = 0;
        goto LAB_00c2f934;
      }
      if ((undefined1 **)(param_1 + 0x51) != &local_190) {
        plVar11 = (long *)((ulong)&local_190 | 8);
        if (*(char *)((long)param_1 + 0x2a7) < '\0') {
          puVar2 = local_180;
          plVar8 = plStack_188;
          if (-1 < (long)puStack_178) {
            puVar2 = (undefined1 *)((ulong)puStack_178 >> 0x38);
            plVar8 = plVar11;
          }
          FUN_00547f08(param_1 + 0x52,plVar8,puVar2);
        }
        else if ((long)puStack_178 < 0) {
          FUN_00547fc0(param_1 + 0x52,plStack_188,local_180);
        }
        else {
          lVar15 = *plVar11;
          lVar13 = plVar11[2];
          param_1[0x53] = plVar11[1];
          param_1[0x52] = lVar15;
          param_1[0x54] = lVar13;
        }
        FUN_0088fd38(param_1 + 0x55,local_170,puStack_168,
                     ((long)puStack_168 - (long)local_170 >> 3) * -0x7b425ed097b425ed);
        FUN_005e2544(param_1 + 0x58,local_158,local_150,(long)local_150 - (long)local_158 >> 5);
      }
      param_1[0x5b] = CONCAT17((undefined1)uStack_139,local_140);
      *(undefined4 *)((long)param_1 + 0x2df) = uStack_139;
      FUN_0088c128(&local_190);
    }
    plVar11 = (long *)(**(code **)(*param_1 + 0x40))(param_1);
    uVar12 = 1;
    if (*(char *)(param_2 + 0x21) != '\0') {
      uVar12 = 2;
    }
    (**(code **)(*plVar11 + 0xe8))(plVar11,uVar12);
    plVar11 = (long *)(**(code **)(*param_1 + 0x40))(param_1);
    plVar8 = (long *)(**(code **)(*param_1 + 0x28))(param_1);
    uVar5 = (**(code **)(*plVar8 + 0xe0))();
    (**(code **)(*plVar11 + 0xf0))(plVar11,uVar5 & 1);
    plVar11 = (long *)(**(code **)(*param_1 + 0x40))(param_1);
    plVar8 = (long *)(**(code **)(*param_1 + 0x28))(param_1);
    uVar5 = (**(code **)(*plVar8 + 0xe8))();
    (**(code **)(*plVar11 + 0xf8))(plVar11,uVar5 & 1);
    FUN_00c2f2bc(param_1 + 0x3a,&local_130);
    uVar5 = FUN_00c2d608(param_1,param_2);
  }
LAB_00c2f934:
  FUN_0088b744(&local_130);
  if ((local_78 != (char **)0x0) && (**local_78 != '\0')) {
    FUN_0066d348(0x45,*local_78,local_78[1],0,0,0,0,0,0);
  }
  return uVar5 & 1;
}


// ===== 00c2f9cc  FUN_00c2f9cc =====

void FUN_00c2f9cc(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0066a108(&local_40,param_1 + 0x40);
  uVar3 = FUN_00bde298(*(undefined4 *)(param_1 + 0x74));
  FUN_00c2f1fc(param_1,&local_40,uVar3 & 1,param_3);
  puVar2 = local_40;
  *(undefined4 *)(param_3 + 0x5c) = *(undefined4 *)(param_1 + 0x24);
  *(bool *)(param_3 + 0x60) = *(int *)(param_1 + 0xc0) != 0;
  puVar1 = puStack_38;
  if (local_40 != (undefined1 *)0x0) {
    while (puVar2 != puVar1) {
      puVar1 = puVar1 + -0x20;
      if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_00668f8c(puVar1);
    }
    puStack_38 = puVar2;
    operator_delete(local_40);
  }
  return;
}


// ===== 00c2faa0  FUN_00c2faa0 =====

void FUN_00c2faa0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 byte param_9,long param_10,undefined8 param_11)

{
  void *__src;
  byte bVar1;
  void *__dest;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  
  __src = *(void **)(param_10 + 8);
  bVar1 = *(byte *)(param_10 + 3);
  uVar2 = *(long *)(param_10 + 0x10) - (long)__src;
  if (uVar2 == 0) {
    __dest = (void *)0x0;
    pvVar3 = (void *)0x0;
  }
  else {
    if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d4754();
    }
    __dest = operator_new(uVar2);
    pvVar3 = (void *)((long)__dest + uVar2);
    memcpy(__dest,__src,uVar2);
  }
  param_1[4] = param_6;
  param_1[5] = param_2;
  *param_1 = &PTR_FUN_00d4cbe0;
  param_1[1] = &PTR_FUN_00d4cce0;
  param_1[2] = &PTR_FUN_00d4cd18;
  param_1[3] = param_5;
  param_1[6] = param_3;
  param_1[7] = param_4;
  FUN_007ebca0(param_1 + 8);
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0xc] = FUN_00433984;
  param_1[0xd] = 0;
  param_1[0x10] = FUN_00433984;
  param_1[0x11] = 0;
  param_1[0x14] = FUN_00433984;
  *(byte *)((long)param_1 + 0xeb) = param_9 & 1;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)((long)param_1 + 0xe7) = 0;
  *(uint *)((long)param_1 + 0xec) = (uint)bVar1;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)((long)param_1 + 0xf2) = 1;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0x300000003;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  FUN_00898cd8(param_1 + 0x2c,param_7,param_8,0,0);
  param_1[0x39] = param_11;
  if (__dest != (void *)0x0) {
    uVar4 = (ulong)((long)pvVar3 + ((long)pvVar3 << 0x3f) + -2) >> 1;
    uVar2 = (ulong)(((long)__dest - (long)pvVar3 << 0x3f) - ((long)__dest - (long)pvVar3)) >> 1;
    if (uVar4 <= uVar2) {
      uVar2 = uVar4;
    }
    if ((1 < uVar2) && ((((int)__dest - (uint)pvVar3 | (uint)pvVar3) & 1) == 0)) {
      uVar2 = uVar2 & 0x7ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar2 * -2);
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    while (pvVar3 != __dest) {
      pvVar3 = (void *)((long)pvVar3 + -2);
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    operator_delete(__dest);
  }
  *param_1 = &PTR_FUN_00d4cea0;
  param_1[1] = &PTR_FUN_00d4cfa0;
  param_1[2] = &PTR_FUN_00d4cfd8;
  FUN_0088bb54(param_1 + 0x3a);
  *(undefined1 *)((long)param_1 + 0x28c) = 0;
  *(undefined2 *)(param_1 + 0x52) = 1;
  *(undefined1 *)((long)param_1 + 0x292) = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  *(undefined8 *)((long)param_1 + 0x281) = 0;
  *(undefined8 *)((long)param_1 + 0x279) = 0;
  param_1[0x47] = &PTR_FUN_00d46630;
  return;
}


// ===== 00c2fcd0  FUN_00c2fcd0 =====

void FUN_00c2fcd0(undefined8 *param_1)

{
  int iVar1;
  char **local_48;
  char *local_40;
  char *pcStack_38;
  
  *param_1 = &PTR_FUN_00d4cea0;
  param_1[1] = &PTR_FUN_00d4cfa0;
  param_1[2] = &PTR_FUN_00d4cfd8;
  if (((DAT_00dbaf98 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00dbaf98), iVar1 != 0)) {
    DAT_00dbaf90 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbaf98);
  }
  local_48 = (char **)0x0;
  pcStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbaf90 != '\0') {
    local_48 = &local_40;
    FUN_0066d348(0x42,DAT_00dbaf90,"VideoChannel::~VideoChannel",0,0,0,0,0,0);
    local_40 = DAT_00dbaf90;
    pcStack_38 = "VideoChannel::~VideoChannel";
  }
  FUN_00c2cf94(param_1);
  if ((local_48 != (char **)0x0) && (**local_48 != '\0')) {
    FUN_0066d348(0x45,*local_48,local_48[1],0,0,0,0,0,0);
  }
  FUN_0088c128(param_1 + 0x47);
  thunk_FUN_0088c128(param_1 + 0x3a);
  FUN_00c2acf4(param_1);
  return;
}


// ===== 00c2fe10  FUN_00c2fe10 =====

void FUN_00c2fe10(long param_1)

{
  FUN_00c2fcd0(param_1 + -8);
  return;
}


// ===== 00c2fe1c  FUN_00c2fe1c =====

void FUN_00c2fe1c(long param_1)

{
  FUN_00c2fcd0(param_1 + -0x10);
  return;
}


// ===== 00c2fe28  FUN_00c2fe28 =====

void FUN_00c2fe28(void *param_1)

{
  FUN_00c2fcd0();
  operator_delete(param_1);
  return;
}


// ===== 00c2fe58  FUN_00c2fe58 =====

void FUN_00c2fe58(long param_1)

{
  FUN_00c2fcd0((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 00c2fe8c  FUN_00c2fe8c =====

void FUN_00c2fe8c(long param_1)

{
  FUN_00c2fcd0((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}


// ===== 00c2fec0  FUN_00c2fec0 =====

/* WARNING: Removing unreachable block (ram,0x00c30028) */

void FUN_00c2fec0(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  byte bVar6;
  void *local_a8 [2];
  char cStack_91;
  char *local_90;
  undefined8 local_88;
  undefined1 *local_80;
  char *local_78;
  char **ppcStack_70;
  ulong local_68;
  char **local_60;
  char *local_58;
  ulong *puStack_50;
  undefined1 local_48 [24];
  undefined1 uStack_11;
  
  if ((char)param_1[0x1e] == '\x01') {
    uVar2 = FUN_00bde298((int)param_1[0x25]);
    uVar2 = uVar2 & 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  plVar3 = (long *)(**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*plVar3 + 0xa0))(plVar3,(uint)uVar2 & 1);
  if ((((char)param_1[0x1e] == '\x01') &&
      (uVar4 = FUN_00bde298(*(undefined4 *)((long)param_1 + 300)), (uVar4 & 1) != 0)) &&
     (uVar4 = FUN_00bde288((int)param_1[0x25]), (uVar4 & 1) != 0)) {
    bVar6 = *(byte *)((long)param_1 + 0xea);
  }
  else {
    bVar6 = 0;
  }
  plVar3 = (long *)(**(code **)(*param_1 + 0x28))(param_1);
  (**(code **)(*plVar3 + 0xb8))(plVar3,bVar6 & 1);
  uVar4 = FUN_00417e08();
  if ((uVar4 & 1) == 0) {
    local_90 = "../../pc/channel.cc";
    local_88 = 0x2359;
    local_80 = &uStack_11;
    ppcStack_70 = &local_90;
    local_78 = "Changing video state, recv=";
    local_68 = uVar2 & 1;
    local_60 = &local_78;
    puStack_50 = &local_68;
    local_58 = " send=";
    plVar5 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
    plVar3 = (long *)*plVar5;
    if (-1 < *(char *)((long)plVar5 + 0x17)) {
      plVar3 = plVar5;
    }
    (**(code **)(*(long *)param_1[3] + 0x20))((long *)param_1[3]);
    FUN_00667e40(local_48);
    FUN_008490e4(local_a8,"{mid: %s, media_type: %s}",plVar3,local_48);
    puVar1 = (undefined8 *)((undefined8 *)puStack_50[1])[1];
    FUN_00623bb0(&DAT_00214ec4,*puVar1,*(undefined4 *)(puVar1 + 1),*(undefined8 *)puStack_50[1],
                 (int)*puStack_50,local_58,bVar6 & 1," for ",local_a8);
    if (cStack_91 < '\0') {
      operator_delete(local_a8[0]);
    }
  }
  return;
}


// ===== 00c3009c  FUN_00c3009c =====

uint FUN_00c3009c(long *param_1,long param_2,int param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 *local_1c0;
  undefined1 *puStack_1b8;
  undefined1 *local_1b0;
  char local_1a8;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  undefined1 *local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined1 *local_170;
  long *plStack_168;
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  undefined1 *local_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined7 local_120;
  undefined4 uStack_119;
  undefined1 uStack_115;
  undefined4 local_114;
  undefined8 local_110;
  undefined1 *local_100;
  long *plStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined4 local_b0;
  undefined1 uStack_ac;
  undefined2 uStack_ab;
  undefined1 uStack_a9;
  byte bStack_a8;
  undefined2 uStack_a7;
  undefined5 uStack_a5;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  char **local_88;
  char *local_80;
  char *pcStack_78;
  
  if (((DAT_00dbafa8 & 1) == 0) && (iVar5 = FUN_0054fdd4(&DAT_00dbafa8), iVar5 != 0)) {
    DAT_00dbafa0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbafa8);
  }
  local_88 = (char **)0x0;
  pcStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbafa0 != '\0') {
    FUN_0066d348(0x42,DAT_00dbafa0,"VideoChannel::SetLocalContent_w",0,0,0,0,0,0);
    local_80 = DAT_00dbafa0;
    pcStack_78 = "VideoChannel::SetLocalContent_w";
    local_88 = &local_80;
  }
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0066a108(&local_a0,param_2 + 0x40,*(undefined4 *)((long)param_1 + 0xec));
  plVar6 = (long *)(**(code **)(*param_1 + 0x28))(param_1);
  (**(code **)(*plVar6 + 0x68))(plVar6,*(int *)(param_2 + 0xc0) != 0);
  plStack_f8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  bStack_a8 = 0xaa;
  uStack_a7 = 0xaaaa;
  uStack_a5 = 0xaaaaaaaaaa;
  local_b0 = 0xaaaaaaaa;
  uStack_ac = 0xaa;
  uStack_ab = 0xaaaa;
  uStack_a9 = 0xaa;
  FUN_00c30780(&local_100,param_1 + 0x47);
  bStack_a8 = FUN_00bde298(*(undefined4 *)(param_2 + 0x74));
  bStack_a8 = bStack_a8 & 1;
  if (&local_e0 != (undefined1 **)(param_2 + 0x110)) {
    FUN_0088fd38(&local_e0,*(long *)(param_2 + 0x110),*(long *)(param_2 + 0x118),
                 (*(long *)(param_2 + 0x118) - *(long *)(param_2 + 0x110) >> 3) *
                 -0x7b425ed097b425ed);
  }
  uVar11 = 0x100000005;
  FUN_005e2544(&local_c8,local_a0,puStack_98,(long)puStack_98 - (long)local_a0 >> 5);
  uStack_a7 = *(undefined2 *)(param_2 + 0x21);
  if ((*(byte *)(param_2 + 0x23) & 1) == 0) {
    uVar8 = FUN_00bf4974(param_2);
    if ((uVar8 & 1) == 0) {
      uVar11 = 0;
    }
  }
  else {
    uVar11 = 0x100000006;
  }
  local_b0 = (undefined4)uVar11;
  uStack_ac = (undefined1)((ulong)uVar11 >> 0x20);
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  plStack_168 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_170 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_160 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  local_150 = &DAT_aaaaaaaaaaaaaaaa;
  local_138 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_140 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  local_130 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_115 = 0xaa;
  local_114 = 0xaaaaaaaa;
  local_120 = 0xaaaaaaaaaaaaaa;
  uStack_119 = 0xaaaaaaaa;
  FUN_00c318a0(&local_170,param_1 + 0x3a);
  local_170 = PTR_DAT_00d52d88 + 0x10;
  local_110._0_2_ = CONCAT11(*(undefined1 *)((long)param_1 + 0x231),(undefined1)local_110);
  FUN_005e2544(&local_138,local_a0,puStack_98,(long)puStack_98 - (long)local_a0 >> 5);
  local_110 = (undefined1 *)CONCAT71(local_110._1_7_,*(int *)(param_2 + 0xc0) != 0);
  if (param_3 - 1U < 2) {
    puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
    local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
    local_188 = &DAT_aaaaaaaaaaaaaaaa;
    local_190 = &DAT_aaaaaaaaaaaaaaaa;
    local_180 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00c308a8(&local_1a0,&local_100,&local_170);
    if ((int)local_1a0 == 0) {
      if ((long)local_188 < 0) {
        operator_delete(puStack_198);
      }
      goto LAB_00c30320;
    }
    lVar7 = FUN_005ecd5c(&local_1a0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string:3022: libc++ Hardening assertion __s != nullptr failed: string::assign received nullptr\n"
                );
    }
    FUN_00547bf8(param_4,lVar7);
    if ((long)local_188 < 0) {
      operator_delete(puStack_198);
    }
  }
  else {
LAB_00c30320:
    plVar6 = (long *)(**(code **)(*param_1 + 0x40))(param_1);
    uVar8 = (**(code **)(*plVar6 + 0x90))(plVar6,&local_100);
    if ((uVar8 & 1) == 0) {
      plVar10 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
      plVar6 = (long *)*plVar10;
      if (-1 < *(char *)((long)plVar10 + 0x17)) {
        plVar6 = plVar10;
      }
      pcVar9 = 
      "Failed to set local video description recv parameters for m-section with mid=\'%s\'.";
LAB_00c303a8:
      FUN_008490e4(&local_1a0,pcVar9,plVar6);
      if (*(char *)((long)param_4 + 0x17) < '\0') {
        operator_delete((void *)*param_4);
      }
      uVar4 = 0;
      param_4[1] = puStack_198;
      *param_4 = local_1a0;
      param_4[2] = local_190;
      goto LAB_00c30674;
    }
    uVar8 = FUN_00bde298(*(undefined4 *)(param_2 + 0x74));
    if ((uVar8 & 1) == 0) {
LAB_00c303e0:
      uVar4 = 0;
    }
    else {
      lVar7 = *(long *)(param_2 + 0x110);
      lVar12 = *(long *)(param_2 + 0x118);
      if (lVar7 == lVar12) goto LAB_00c303e0;
      uVar4 = 0;
      do {
        uVar3 = FUN_00c2e330(param_1,*(undefined4 *)(lVar7 + 0xc));
        lVar7 = lVar7 + 0xd8;
        uVar4 = uVar3 | uVar4;
      } while (lVar7 != lVar12);
    }
    if ((undefined1 **)(param_1 + 0x47) != &local_100) {
      plVar6 = (long *)((ulong)&local_100 | 8);
      if (*(char *)((long)param_1 + 599) < '\0') {
        puVar2 = puStack_f0;
        plVar10 = plStack_f8;
        if (-1 < (long)puStack_e8) {
          puVar2 = (undefined1 *)((ulong)puStack_e8 >> 0x38);
          plVar10 = plVar6;
        }
        FUN_00547f08(param_1 + 0x48,plVar10,puVar2);
      }
      else if ((long)puStack_e8 < 0) {
        FUN_00547fc0(param_1 + 0x48,plStack_f8,puStack_f0);
      }
      else {
        lVar12 = *plVar6;
        lVar7 = plVar6[2];
        param_1[0x49] = plVar6[1];
        param_1[0x48] = lVar12;
        param_1[0x4a] = lVar7;
      }
      FUN_0088fd38(param_1 + 0x4b,local_e0,puStack_d8,
                   ((long)puStack_d8 - (long)local_e0 >> 3) * -0x7b425ed097b425ed);
      FUN_005e2544(param_1 + 0x4e,local_c8,local_c0,(long)local_c0 - (long)local_c8 >> 5);
    }
    param_1[0x51] = CONCAT17(uStack_a9,CONCAT25(uStack_ab,CONCAT14(uStack_ac,local_b0)));
    *(uint *)((long)param_1 + 0x28f) = CONCAT22(uStack_a7,CONCAT11(bStack_a8,uStack_a9));
    if (param_3 - 1U < 2) {
      plVar6 = (long *)(**(code **)(*param_1 + 0x28))(param_1);
      uVar8 = (**(code **)(*plVar6 + 0xb0))(plVar6,&local_170);
      if ((uVar8 & 1) == 0) {
        plVar10 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
        plVar6 = (long *)*plVar10;
        if (-1 < *(char *)((long)plVar10 + 0x17)) {
          plVar6 = plVar10;
        }
        pcVar9 = "Failed to set send parameters for m-section with mid=\'%s\'.";
        goto LAB_00c303a8;
      }
      if ((undefined1 **)(param_1 + 0x3a) != &local_170) {
        plVar6 = (long *)((ulong)&local_170 | 8);
        if (*(char *)((long)param_1 + 0x1ef) < '\0') {
          puVar2 = puStack_160;
          plVar10 = plStack_168;
          if (-1 < (long)puStack_158) {
            puVar2 = (undefined1 *)((ulong)puStack_158 >> 0x38);
            plVar10 = plVar6;
          }
          FUN_00547f08(param_1 + 0x3b,plVar10,puVar2);
        }
        else if ((long)puStack_158 < 0) {
          FUN_00547fc0(param_1 + 0x3b,plStack_168,puStack_160);
        }
        else {
          lVar12 = *plVar6;
          lVar7 = plVar6[2];
          param_1[0x3c] = plVar6[1];
          param_1[0x3b] = lVar12;
          param_1[0x3d] = lVar7;
        }
        FUN_0088fd38(param_1 + 0x3e,local_150,puStack_148,
                     ((long)puStack_148 - (long)local_150 >> 3) * -0x7b425ed097b425ed);
        FUN_005e2544(param_1 + 0x41,local_138,local_130,(long)local_130 - (long)local_138 >> 5);
      }
      param_1[0x44] = CONCAT17((undefined1)uStack_119,local_120);
      *(undefined4 *)((long)param_1 + 0x227) = uStack_119;
      *(undefined4 *)((long)param_1 + 0x22c) = local_114;
      *(undefined2 *)(param_1 + 0x46) = (undefined2)local_110;
    }
    uVar8 = FUN_00c2d0ac(param_1,param_2 + 0x58);
    if ((uVar8 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x74);
      (**(code **)(*param_1 + 0xd8))(param_1);
      puStack_1b8 = puStack_98;
      local_1b0 = local_90;
      puStack_98 = (undefined1 *)0x0;
      local_90 = (undefined1 *)0x0;
      local_1c0 = local_a0;
      local_a0 = (undefined1 *)0x0;
      local_1a8 = '\x01';
      uVar4 = FUN_00c2cae8(param_1,uVar4 & 1,&local_1c0,param_4);
      puVar2 = local_1c0;
      if ((local_1a8 == '\x01') && (puVar1 = puStack_1b8, local_1c0 != (undefined1 *)0x0)) {
        while (puVar2 != puVar1) {
          puVar1 = puVar1 + -0x20;
          if (puVar1 == (undefined1 *)0x0) goto LAB_00c30728;
          FUN_00668f8c(puVar1);
        }
        puStack_1b8 = puVar2;
        operator_delete(local_1c0);
      }
      goto LAB_00c30674;
    }
  }
  uVar4 = 0;
LAB_00c30674:
  thunk_FUN_0088c128(&local_170);
  FUN_0088c128(&local_100);
  puVar1 = local_a0;
  puVar2 = puStack_98;
  if (local_a0 != (undefined1 *)0x0) {
    while (puVar1 != puVar2) {
      puVar2 = puVar2 + -0x20;
      if (puVar2 == (undefined1 *)0x0) {
LAB_00c30728:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_00668f8c(puVar2);
    }
    puStack_98 = puVar1;
    operator_delete(local_a0);
  }
  if ((local_88 != (char **)0x0) && (**local_88 != '\0')) {
    FUN_0066d348(0x45,*local_88,local_88[1],0,0,0,0,0,0);
  }
  return uVar4 & 1;
}


// ===== 00c30780  FUN_00c30780 =====

void FUN_00c30780(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_FUN_00d3b168;
  if (*(char *)(param_2 + 0x1f) < '\0') {
    FUN_005478d8(param_1 + 1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    uVar4 = *(undefined8 *)(param_2 + 8);
    param_1[3] = *(undefined8 *)(param_2 + 0x18);
    param_1[2] = uVar6;
    param_1[1] = uVar4;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  lVar5 = *(long *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x28);
  uVar2 = lVar1 - lVar5;
  if (uVar2 != 0) {
    if (0x12f684bda12f684 < (ulong)(((long)uVar2 >> 3) * -0x7b425ed097b425ed)) {
                    /* WARNING: Subroutine does not return */
      FUN_0088fd20();
    }
    pvVar3 = operator_new(uVar2);
    param_1[4] = pvVar3;
    param_1[5] = pvVar3;
    param_1[6] = (long)pvVar3 + uVar2;
    do {
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00890830(pvVar3,lVar5);
      lVar5 = lVar5 + 0xd8;
      pvVar3 = (void *)((long)pvVar3 + 0xd8);
    } while (lVar5 != lVar1);
    param_1[5] = pvVar3;
  }
  FUN_0066974c(param_1 + 7,param_2 + 0x38);
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)((long)param_1 + 0x57) = *(undefined4 *)(param_2 + 0x57);
  param_1[10] = uVar4;
  *param_1 = &PTR_FUN_00d46630;
  return;
}


// ===== 00c308a8  FUN_00c308a8 =====

void FUN_00c308a8(undefined8 param_1,long param_2,long param_3)

{
  size_t __n;
  size_t sVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined1 **ppuVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  long *local_90;
  long *plStack_88;
  undefined1 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  
  puVar3 = *(undefined1 **)(param_3 + 0x20);
  puVar4 = *(undefined1 **)(param_3 + 0x28);
  local_78 = (undefined8 *)0x0;
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  puVar14 = local_70;
joined_r0x00c308e0:
  puVar13 = local_78;
  local_70 = puVar14;
  if (puVar3 != puVar4) {
    do {
      if (puVar13 == puVar14) {
        plStack_88 = (long *)&DAT_aaaaaaaaaaaaaaaa;
        local_90 = (long *)&DAT_aaaaaaaaaaaaaaaa;
        local_80 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_00892ec0(&local_90,param_2 + 0x20,puVar3);
        plVar16 = plStack_88;
        if (local_90 != plStack_88) {
          bVar5 = puVar3[0x50];
          bVar9 = false;
          plVar18 = local_90;
          goto LAB_00c30970;
        }
        iVar11 = 3;
        goto joined_r0x00c30a44;
      }
      uVar12 = thunk_FUN_00894770(puVar3,*puVar13);
      puVar13 = puVar13 + 1;
    } while ((uVar12 & 1) == 0);
    goto LAB_00c308f4;
  }
  FUN_005ecd48(param_1);
LAB_00c30b78:
  if (local_78 != (undefined8 *)0x0) {
    uVar17 = (ulong)((long)local_70 + (-8 - ((long)local_70 << 0x3d))) >> 3;
    uVar12 = (ulong)(((long)local_78 - (long)local_70 << 0x3d) - ((long)local_78 - (long)local_70))
             >> 3;
    if (uVar17 <= uVar12) {
      uVar12 = uVar17;
    }
    puVar14 = local_70;
    if ((1 < uVar12) && ((((int)local_78 - (int)local_70 | -(int)local_70) & 7U) == 0)) {
      uVar12 = uVar12 & 0x1ffffffffffffffe;
      puVar14 = local_70 + -uVar12;
      do {
        uVar12 = uVar12 - 2;
      } while (uVar12 != 0);
    }
    while (puVar14 != local_78) {
      puVar14 = puVar14 + -1;
      if (puVar14 == (undefined8 *)0x0) {
LAB_00c30be4:
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
  return;
LAB_00c30970:
  do {
    lVar15 = *plVar18;
    if ((*(byte *)(lVar15 + 0x50) & 1) == 0) {
      if ((bVar5 & 1) == 0) goto LAB_00c30a84;
      bVar9 = true;
    }
    else if (bVar5 != 0) {
      bVar6 = *(byte *)(lVar15 + 0x4f);
      bVar7 = puVar3[0x4f];
      __n = *(size_t *)(lVar15 + 0x40);
      if (-1 < (char)bVar6) {
        __n = (ulong)bVar6;
      }
      sVar1 = *(size_t *)(puVar3 + 0x40);
      if (-1 < (char)bVar7) {
        sVar1 = (ulong)bVar7;
      }
      if (__n == sVar1) {
        puVar14 = (undefined8 *)*(void **)(lVar15 + 0x38);
        if (-1 < (char)bVar6) {
          puVar14 = (undefined8 *)(lVar15 + 0x38);
        }
        puVar13 = *(undefined8 **)(puVar3 + 0x38);
        if (-1 < (char)bVar7) {
          puVar13 = (undefined8 *)(puVar3 + 0x38);
        }
        iVar11 = memcmp(puVar14,puVar13,__n);
        if (iVar11 == 0) {
          bVar10 = false;
          goto joined_r0x00c309d4;
        }
      }
    }
    plVar18 = plVar18 + 1;
  } while (plVar18 != plVar16);
  bVar10 = true;
joined_r0x00c309d4:
  if (bVar9) {
    if (bVar5 != 0) {
      if ((char)puVar3[0x4f] < '\0') {
        operator_delete(*(void **)(puVar3 + 0x38));
      }
      puVar3[0x50] = 0;
    }
    if (!bVar10) goto LAB_00c30a84;
  }
  else {
    if (bVar10) {
      puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_b0 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_008490e4(&local_b0,
                   "Failed to set local answer due to incompatible codec packetization for pt=\'%d\' specified."
                   ,*(undefined4 *)(puVar3 + 0xc));
      puVar2 = puStack_a8;
      ppuVar8 = (undefined1 **)local_b0;
      if (-1 < (long)local_a0) {
        puVar2 = (undefined1 *)((ulong)local_a0 >> 0x38);
        ppuVar8 = &local_b0;
      }
      FUN_00b0092c(param_1,10,ppuVar8,puVar2);
      if ((long)local_a0 < 0) {
        operator_delete(local_b0);
      }
      iVar11 = 1;
      goto joined_r0x00c30a44;
    }
LAB_00c30a84:
    puVar14 = local_78;
    if ((long)local_70 - (long)local_78 != 0) {
      uVar12 = (long)local_70 - (long)local_78 >> 3;
      puVar13 = local_78;
      do {
        uVar17 = uVar12 >> 1;
        puVar14 = puVar13 + uVar17 + 1;
        uVar12 = uVar12 + ~uVar17;
        if (puVar3 <= (undefined1 *)puVar13[uVar17]) {
          puVar14 = puVar13;
          uVar12 = uVar17;
        }
        puVar13 = puVar14;
      } while (uVar12 != 0);
    }
    local_b0 = puVar3;
    if ((puVar14 == local_70) || (puVar3 < (undefined1 *)*puVar14)) {
      FUN_00c31a08(&local_78,puVar14,&local_b0);
    }
  }
  iVar11 = 0;
joined_r0x00c30a44:
  if (local_90 != (long *)0x0) {
    uVar17 = (ulong)((long)plStack_88 + (-8 - ((long)plStack_88 << 0x3d))) >> 3;
    uVar12 = (ulong)(((long)local_90 - (long)plStack_88 << 0x3d) -
                    ((long)local_90 - (long)plStack_88)) >> 3;
    if (uVar17 <= uVar12) {
      uVar12 = uVar17;
    }
    plVar16 = plStack_88;
    if ((1 < uVar12) && ((((int)local_90 - (int)plStack_88 | -(int)plStack_88) & 7U) == 0)) {
      uVar12 = uVar12 & 0x1ffffffffffffffe;
      plVar16 = plStack_88 + -uVar12;
      do {
        uVar12 = uVar12 - 2;
      } while (uVar12 != 0);
    }
    while (plVar16 != local_90) {
      plVar16 = plVar16 + -1;
      if (plVar16 == (long *)0x0) goto LAB_00c30be4;
    }
    plStack_88 = local_90;
    operator_delete(local_90);
  }
  if ((iVar11 != 3) && (iVar11 != 0)) goto LAB_00c30b78;
LAB_00c308f4:
  puVar3 = puVar3 + 0xd8;
  puVar14 = local_70;
  goto joined_r0x00c308e0;
}


// ===== 00c30c2c  FUN_00c30c2c =====

/* WARNING: Removing unreachable block (ram,0x00c30d44) */
/* WARNING: Removing unreachable block (ram,0x00c30e20) */
/* WARNING: Removing unreachable block (ram,0x00c30e2c) */
/* WARNING: Removing unreachable block (ram,0x00c30e30) */

uint FUN_00c30c2c(long *param_1,long param_2,int param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  char *pcVar9;
  long lVar10;
  undefined1 *local_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *local_140;
  long *plStack_138;
  undefined8 local_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  undefined1 *local_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined7 local_f0;
  undefined1 uStack_e9;
  undefined1 uStack_e8;
  undefined1 uStack_e7;
  undefined1 uStack_e6;
  undefined5 uStack_e5;
  undefined1 *local_e0;
  long *plStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined7 local_90;
  undefined1 uStack_89;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined4 local_84;
  undefined8 local_80;
  char **local_78;
  char *local_70;
  char *pcStack_68;
  
  if (((DAT_00dbafb8 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00dbafb8), iVar4 != 0)) {
    DAT_00dbafb0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbafb8);
  }
  local_78 = (char **)0x0;
  pcStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbafb0 != '\0') {
    FUN_0066d348(0x42,DAT_00dbafb0,"VideoChannel::SetRemoteContent_w",0,0,0,0,0,0);
    local_70 = DAT_00dbafb0;
    pcStack_68 = "VideoChannel::SetRemoteContent_w";
    local_78 = &local_70;
  }
  uVar5 = FUN_00417e08();
  if ((uVar5 & 1) == 0) {
    plVar6 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
    plVar7 = (long *)*plVar6;
    if (-1 < *(char *)((long)plVar6 + 0x17)) {
      plVar7 = plVar6;
    }
    (**(code **)(*(long *)param_1[3] + 0x20))((long *)param_1[3]);
    FUN_00667e40(&local_e0);
    FUN_008490e4(&local_140,"{mid: %s, media_type: %s}",plVar7,&local_e0);
    FUN_00623bb0(&DAT_001f4e90,"../../pc/channel.cc",0x2649,"Setting remote video description for ",
                 &local_140);
    if (local_130._7_1_ < '\0') {
      operator_delete(local_140);
    }
  }
  plStack_d8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_88 = 0xaa;
  uStack_87 = 0xaa;
  uStack_86 = 0xaa;
  uStack_85 = 0xaa;
  local_84 = 0xaaaaaaaa;
  local_90 = 0xaaaaaaaaaaaaaa;
  uStack_89 = 0xaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c318a0(&local_e0,param_1 + 0x3a);
  local_e0 = PTR_DAT_00d52d88 + 0x10;
  local_80._0_2_ = CONCAT11(*(undefined1 *)((long)param_1 + 0x231),(undefined1)local_80);
  FUN_00c2f9cc(param_2,*(undefined4 *)((long)param_1 + 0xec),&local_e0);
  plVar7 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
  plVar6 = (long *)((ulong)&local_e0 | 8);
  if (plVar6 != plVar7) {
    if (*(char *)((long)plVar7 + 0x17) < '\0') {
      FUN_00547fc0(plVar6,*plVar7,plVar7[1]);
    }
    else {
      lVar10 = plVar7[1];
      lVar8 = *plVar7;
      plVar6[2] = plVar7[2];
      plVar6[1] = lVar10;
      *plVar6 = lVar8;
    }
  }
  local_80._0_2_ = CONCAT11(*(undefined1 *)(param_2 + 0x70),(undefined1)local_80);
  plStack_138 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_140 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  local_130 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  local_108 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_e8 = 0xaa;
  uStack_e7 = 0xaa;
  uStack_e6 = 0xaa;
  uStack_e5 = 0xaaaaaaaaaa;
  local_f0 = 0xaaaaaaaaaaaaaa;
  uStack_e9 = 0xaa;
  FUN_00c30780(&local_140,param_1 + 0x47);
  if (param_3 - 1U < 2) {
    puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
    local_170 = &DAT_aaaaaaaaaaaaaaaa;
    local_158 = &DAT_aaaaaaaaaaaaaaaa;
    local_160 = &DAT_aaaaaaaaaaaaaaaa;
    local_150 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00c308a8(&local_170,&local_e0,&local_140);
    if ((int)local_170 != 0) {
      lVar8 = FUN_005ecd5c(&local_170);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string:3022: libc++ Hardening assertion __s != nullptr failed: string::assign received nullptr\n"
                  );
      }
      FUN_00547bf8(param_4,lVar8);
      if ((long)local_158 < 0) {
        operator_delete(puStack_168);
      }
      uVar3 = 0;
      goto LAB_00c31174;
    }
    if ((long)local_158 < 0) {
      operator_delete(puStack_168);
    }
  }
  plVar7 = (long *)(**(code **)(*param_1 + 0x28))(param_1);
  uVar5 = (**(code **)(*plVar7 + 0xb0))(plVar7,&local_e0);
  if ((uVar5 & 1) == 0) {
    plVar6 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
    plVar7 = (long *)*plVar6;
    if (-1 < *(char *)((long)plVar6 + 0x17)) {
      plVar7 = plVar6;
    }
    pcVar9 = "Failed to set remote video description send parameters for m-section with mid=\'%s\'."
    ;
LAB_00c30fc0:
    FUN_008490e4(&local_170,pcVar9,plVar7);
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      operator_delete((void *)*param_4);
    }
    uVar3 = 0;
    param_4[1] = puStack_168;
    *param_4 = local_170;
    param_4[2] = local_160;
  }
  else {
    if (param_3 - 1U < 2) {
      FUN_005e2544(&local_108,local_a8,local_a0,(long)local_a0 - (long)local_a8 >> 5);
      uStack_e7 = uStack_87;
      plVar7 = (long *)(**(code **)(*param_1 + 0x40))(param_1);
      uVar5 = (**(code **)(*plVar7 + 0x90))(plVar7,&local_140);
      if ((uVar5 & 1) == 0) {
        plVar6 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
        plVar7 = (long *)*plVar6;
        if (-1 < *(char *)((long)plVar6 + 0x17)) {
          plVar7 = plVar6;
        }
        pcVar9 = "Failed to set recv parameters for m-section with mid=\'%s\'.";
        goto LAB_00c30fc0;
      }
      if ((undefined1 **)(param_1 + 0x47) != &local_140) {
        plVar7 = (long *)((ulong)&local_140 | 8);
        if (*(char *)((long)param_1 + 599) < '\0') {
          puVar1 = local_130;
          plVar2 = plStack_138;
          if (-1 < (long)puStack_128) {
            puVar1 = (undefined1 *)((ulong)puStack_128 >> 0x38);
            plVar2 = plVar7;
          }
          FUN_00547f08(param_1 + 0x48,plVar2,puVar1);
        }
        else if ((long)puStack_128 < 0) {
          FUN_00547fc0(param_1 + 0x48,plStack_138,local_130);
        }
        else {
          lVar10 = *plVar7;
          lVar8 = plVar7[2];
          param_1[0x49] = plVar7[1];
          param_1[0x48] = lVar10;
          param_1[0x4a] = lVar8;
        }
        FUN_0088fd38(param_1 + 0x4b,local_120,puStack_118,
                     ((long)puStack_118 - (long)local_120 >> 3) * -0x7b425ed097b425ed);
        FUN_005e2544(param_1 + 0x4e,local_108,local_100,(long)local_100 - (long)local_108 >> 5);
      }
      param_1[0x51] = CONCAT17(uStack_e9,local_f0);
      *(uint *)((long)param_1 + 0x28f) =
           CONCAT13(uStack_e6,CONCAT12(uStack_e7,CONCAT11(uStack_e8,uStack_e9)));
    }
    if ((undefined1 **)(param_1 + 0x3a) != &local_e0) {
      if (*(char *)((long)param_1 + 0x1ef) < '\0') {
        puVar1 = local_d0;
        plVar7 = plStack_d8;
        if (-1 < (long)puStack_c8) {
          puVar1 = (undefined1 *)((ulong)puStack_c8 >> 0x38);
          plVar7 = plVar6;
        }
        FUN_00547f08(param_1 + 0x3b,plVar7,puVar1);
      }
      else if ((long)puStack_c8 < 0) {
        FUN_00547fc0(param_1 + 0x3b,plStack_d8,local_d0);
      }
      else {
        lVar10 = *plVar6;
        lVar8 = plVar6[2];
        param_1[0x3c] = plVar6[1];
        param_1[0x3b] = lVar10;
        param_1[0x3d] = lVar8;
      }
      FUN_0088fd38(param_1 + 0x3e,local_c0,puStack_b8,
                   ((long)puStack_b8 - (long)local_c0 >> 3) * -0x7b425ed097b425ed);
      FUN_005e2544(param_1 + 0x41,local_a8,local_a0,(long)local_a0 - (long)local_a8 >> 5);
    }
    param_1[0x44] = CONCAT17(uStack_89,local_90);
    *(uint *)((long)param_1 + 0x227) =
         CONCAT13(uStack_86,CONCAT12(uStack_87,CONCAT11(uStack_88,uStack_89)));
    *(undefined4 *)((long)param_1 + 0x22c) = local_84;
    *(undefined2 *)(param_1 + 0x46) = (undefined2)local_80;
    uVar3 = FUN_00c2d608(param_1,param_2);
  }
LAB_00c31174:
  FUN_0088c128(&local_140);
  thunk_FUN_0088c128(&local_e0);
  if ((local_78 != (char **)0x0) && (**local_78 != '\0')) {
    FUN_0066d348(0x45,*local_78,local_78[1],0,0,0,0,0,0);
  }
  return uVar3 & 1;
}


// ===== 00c31228  FUN_00c31228 =====

void FUN_00c31228(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../pc/channel.h",0xa9,"false",&DAT_001fbee0,
               "Attempt to fetch video channel from non-video");
}


// ===== 00c3125c  FUN_00c3125c =====

void FUN_00c3125c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../pc/channel.h",0xad,"false",&DAT_001fbee0,
               "Attempt to fetch voice channel from non-voice");
}


// ===== 00c31290  FUN_00c31290 =====

void FUN_00c31290(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../pc/channel.h",0xb1,"false",&DAT_001fbee0,
               "Attempt to fetch video channel from non-video");
}


// ===== 00c312c4  FUN_00c312c4 =====

void FUN_00c312c4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../pc/channel.h",0xb5,"false",&DAT_001fbee0,
               "Attempt to fetch voice channel from non-voice");
}


// ===== 00c312f8  FUN_00c312f8 =====

undefined1  [16] FUN_00c312f8(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  
  if (*(long **)(param_1 + 0xb0) == (long *)0x0) {
    return ZEXT816(0x1b3348);
  }
  puVar3 = (undefined8 *)(**(code **)(**(long **)(param_1 + 0xb0) + 0x18))();
  uVar1 = puVar3[1];
  puVar2 = (undefined8 *)*puVar3;
  if (-1 < (char)*(byte *)((long)puVar3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)puVar3 + 0x17);
    puVar2 = puVar3;
  }
  auVar4._8_8_ = uVar1;
  auVar4._0_8_ = puVar2;
  return auVar4;
}


// ===== 00c31350  FUN_00c31350 =====

long FUN_00c31350(long param_1)

{
  return param_1 + 0x168;
}


// ===== 00c3135c  FUN_00c3135c =====

long FUN_00c3135c(long param_1)

{
  return param_1 + 0xf8;
}


// ===== 00c31368  FUN_00c31368 =====

long FUN_00c31368(long param_1)

{
  return param_1 + 0x110;
}


// ===== 00c31374  FUN_00c31374 =====

undefined8 FUN_00c31374(void)

{
  return 0;
}


// ===== 00c31380  FUN_00c31380 =====

void FUN_00c31380(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 00c31390  FUN_00c31390 =====

void FUN_00c31390(void)

{
  return;
}


// ===== 00c31398  FUN_00c31398 =====

void FUN_00c31398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c313a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  return;
}


// ===== 00c313ac  FUN_00c313ac =====

void FUN_00c313ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c313bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  return;
}


// ===== 00c313c0  FUN_00c313c0 =====

void FUN_00c313c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c313d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
  return;
}


// ===== 00c313d4  FUN_00c313d4 =====

void FUN_00c313d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c313e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
  return;
}


// ===== 00c313e8  FUN_00c313e8 =====

undefined8 FUN_00c313e8(void)

{
  return 1;
}


// ===== 00c313f4  FUN_00c313f4 =====

void FUN_00c313f4(void)

{
  return;
}


// ===== 00c313fc  FUN_00c313fc =====

void FUN_00c313fc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 00c3140c  FUN_00c3140c =====

void FUN_00c3140c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c3141c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}


// ===== 00c31420  FUN_00c31420 =====

void FUN_00c31420(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c31430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}


// ===== 00c31434  FUN_00c31434 =====

void FUN_00c31434(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c31444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
  return;
}


// ===== 00c31448  FUN_00c31448 =====

void FUN_00c31448(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c31458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
  return;
}


// ===== 00c3145c  FUN_00c3145c =====

void FUN_00c3145c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c31468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 00c3146c  FUN_00c3146c =====

void FUN_00c3146c(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x10))(0,pvVar1,pvVar1);
  operator_delete(pvVar1);
  return;
}


// ===== 00c314ac  FUN_00c314ac =====

void FUN_00c314ac(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c314b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 00c314bc  FUN_00c314bc =====

void FUN_00c314bc(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x10))(0,pvVar1,pvVar1);
  operator_delete(pvVar1);
  return;
}


// ===== 00c314fc  FUN_00c314fc =====

undefined8 * FUN_00c314fc(long *param_1,undefined8 *param_2)

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
    FUN_00c315f0();
LAB_00c315ec:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00c315ec;
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


// ===== 00c315f0  FUN_00c315f0 =====

void FUN_00c315f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c31608  FUN_00c31608 =====

void FUN_00c31608(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  void *pvVar6;
  
  lVar3 = param_1[2];
  pvVar5 = (void *)*param_1;
  if (param_4 <= (ulong)((lVar3 - (long)pvVar5 >> 4) * -0x71c71c71c71c71c7)) {
    pvVar6 = (void *)param_1[1];
    lVar3 = (long)pvVar6 - (long)pvVar5;
    if ((ulong)((lVar3 >> 4) * -0x71c71c71c71c71c7) < param_4) {
      lVar1 = param_2;
      pvVar2 = pvVar6;
      if (pvVar6 != pvVar5) {
        lVar1 = param_2 + lVar3;
        do {
          FUN_0088cc4c(pvVar5,param_2);
          lVar3 = lVar3 + -0x90;
          param_2 = param_2 + 0x90;
          pvVar5 = (void *)((long)pvVar5 + 0x90);
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
        FUN_0088d2d8(pvVar6,lVar1);
        pvVar6 = (void *)((long)pvVar6 + 0x90);
        lVar1 = lVar1 + 0x90;
        pvVar2 = (void *)((long)pvVar2 + 0x90);
      }
LAB_00c31844:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    if (param_2 != param_3) {
      do {
        FUN_0088cc4c(pvVar5,param_2);
        param_2 = param_2 + 0x90;
        pvVar5 = (void *)((long)pvVar5 + 0x90);
      } while (param_2 != param_3);
      pvVar6 = (void *)param_1[1];
    }
    while (pvVar5 != pvVar6) {
      pvVar6 = (void *)((long)pvVar6 + -0x90);
      if (pvVar6 == (void *)0x0) goto LAB_00c31858;
      FUN_0088d578(pvVar6);
    }
LAB_00c31824:
    param_1[1] = pvVar5;
    return;
  }
  if (pvVar5 != (void *)0x0) {
    pvVar6 = (void *)param_1[1];
    pvVar2 = pvVar5;
    if (pvVar5 != pvVar6) {
      do {
        pvVar6 = (void *)((long)pvVar6 + -0x90);
        if (pvVar6 == (void *)0x0) {
LAB_00c31858:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_0088d578(pvVar6);
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
  if (param_4 < 0x1c71c71c71c71c8) {
    uVar4 = (lVar3 >> 4) * 0x1c71c71c71c71c72;
    if (uVar4 < param_4 || uVar4 - param_4 == 0) {
      uVar4 = param_4;
    }
    if (0xe38e38e38e38e2 < (ulong)((lVar3 >> 4) * -0x71c71c71c71c71c7)) {
      uVar4 = 0x1c71c71c71c71c7;
    }
    if (uVar4 < 0x1c71c71c71c71c8) {
      pvVar5 = operator_new(uVar4 * 0x90);
      *param_1 = pvVar5;
      param_1[1] = pvVar5;
      param_1[2] = (void *)((long)pvVar5 + uVar4 * 0x90);
      if (param_2 != param_3) {
        do {
          if (pvVar5 == (void *)0x0) goto LAB_00c31844;
          FUN_0088d2d8(pvVar5,param_2);
          param_2 = param_2 + 0x90;
          pvVar5 = (void *)((long)pvVar5 + 0x90);
        } while (param_2 != param_3);
      }
      goto LAB_00c31824;
    }
  }
  pvVar5 = (void *)FUN_00b0e8c0();
  FUN_0088c128();
  operator_delete(pvVar5);
  return;
}


// ===== 00c31870  FUN_00c31870 =====

void FUN_00c31870(void *param_1)

{
  FUN_0088c128();
  operator_delete(param_1);
  return;
}


// ===== 00c318a0  FUN_00c318a0 =====

void FUN_00c318a0(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  *param_1 = &PTR_FUN_00d3b168;
  if (*(char *)(param_2 + 0x1f) < '\0') {
    FUN_005478d8(param_1 + 1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    param_1[3] = *(undefined8 *)(param_2 + 0x18);
    param_1[2] = uVar7;
    param_1[1] = uVar5;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  lVar6 = *(long *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x28);
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
  FUN_0066974c(param_1 + 7,param_2 + 0x38);
  uVar5 = *(undefined8 *)(param_2 + 0x50);
  uVar2 = *(undefined4 *)(param_2 + 0x57);
  *param_1 = &PTR_FUN_00d4d028;
  *(undefined4 *)((long)param_1 + 0x57) = uVar2;
  param_1[10] = uVar5;
  uVar2 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0x60);
  *(undefined4 *)((long)param_1 + 0x5c) = uVar2;
  return;
}


// ===== 00c319d8  FUN_00c319d8 =====

void FUN_00c319d8(void *param_1)

{
  FUN_0088c128();
  operator_delete(param_1);
  return;
}


// ===== 00c31a08  FUN_00c31a08 =====

undefined8 * FUN_00c31a08(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  size_t sVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  void *__dest;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  void *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  void *pvStack_48;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar8 = param_2;
    if (param_2 == puVar2) {
      if (param_2 == (undefined8 *)0x0) {
LAB_00c31ba4:
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
      uVar9 = *param_3;
      puVar3 = puVar2;
      for (puVar6 = puVar2 + -1; puVar6 < puVar2; puVar6 = puVar6 + 1) {
        if (puVar3 == (undefined8 *)0x0) goto LAB_00c31ba4;
        *puVar3 = *puVar6;
        puVar3 = puVar3 + 1;
      }
      param_1[1] = (long)puVar3;
      sVar4 = (long)puVar2 + (-8 - (long)param_2);
      memmove((void *)((long)puVar2 - sVar4),param_2,sVar4);
      *param_2 = uVar9;
    }
  }
  else {
    lVar10 = *param_1;
    uVar1 = ((long)puVar2 - lVar10 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_008941a8();
LAB_00c31bbc:
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    uVar5 = param_1[2] - lVar10;
    local_60 = (void *)0x0;
    uVar7 = (long)uVar5 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 != 0) {
      if (uVar7 >> 0x3d != 0) goto LAB_00c31bbc;
      local_60 = operator_new(uVar7 << 3);
    }
    pvStack_48 = (void *)((long)local_60 + uVar7 * 8);
    local_58 = (undefined8 *)((long)local_60 + ((long)param_2 - lVar10));
    local_50 = local_58;
    FUN_00c31bc0(&local_60,param_3);
    puVar8 = local_58;
    memcpy(local_50,param_2,param_1[1] - (long)param_2);
    lVar10 = param_1[1];
    param_1[1] = (long)param_2;
    sVar4 = (long)param_2 - *param_1;
    __dest = (void *)((long)local_58 - sVar4);
    local_50 = (undefined8 *)((long)local_50 + (lVar10 - (long)param_2));
    memcpy(__dest,(void *)*param_1,sVar4);
    local_60 = (void *)*param_1;
    lVar10 = param_1[2];
    *param_1 = (long)__dest;
    param_1[2] = (long)pvStack_48;
    param_1[1] = (long)local_50;
    if (local_60 != (void *)0x0) {
      local_58 = (undefined8 *)local_60;
      local_50 = (undefined8 *)local_60;
      pvStack_48 = (void *)lVar10;
      operator_delete(local_60);
    }
  }
  return puVar8;
}


// ===== 00c31bc0  FUN_00c31bc0 =====

void FUN_00c31bc0(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_00c31e30;
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
LAB_00c31e30:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c31e48  FUN_00c31e48 =====

void FUN_00c31e48(undefined8 *param_1,undefined4 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)*param_1 + 0x28))();
                    /* WARNING: Could not recover jumptable at 0x00c31e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1,param_2);
  return;
}


// ===== 00c31e88  FUN_00c31e88 =====

void FUN_00c31e88(undefined8 *param_1,undefined8 *param_2)

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
  FUN_00c2c66c(*param_1,&local_40);
  return;
}


// ===== 00c31ec4  FUN_00c31ec4 =====

void FUN_00c31ec4(undefined8 *param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    FUN_00c2c1e4();
    return;
  }
  FUN_00c2c484(*param_1);
  return;
}


// ===== 00c31ed8  FUN_00c31ed8 =====

void FUN_00c31ed8(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)*param_1 + 0x28))();
                    /* WARNING: Could not recover jumptable at 0x00c31f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
  return;
}


// ===== 00c31f18  FUN_00c31f18 =====

void FUN_00c31f18(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(lVar3 + 0x148);
  lVar2 = *(long *)(lVar3 + 0x150);
  while( true ) {
    if (lVar1 == lVar2) {
      *(long *)(lVar3 + 0x150) = lVar1;
      return;
    }
    lVar2 = lVar2 + -0x20;
    if (lVar2 == 0) break;
    FUN_00668f8c(lVar2);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c31f80  FUN_00c31f80 =====

void FUN_00c31f80(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    FUN_00c2ce7c();
    return;
  }
  FUN_00c2cf94(*param_1);
  return;
}


// ===== 00c31f9c  FUN_00c31f9c =====

void FUN_00c31f9c(undefined8 *param_1)

{
  long *plVar1;
  undefined1 **ppuVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined1 *local_60 [2];
  char cStack_49;
  undefined1 local_48;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined7 local_38;
  undefined1 uStack_31;
  
  puVar8 = (undefined8 *)param_1[1];
  plVar7 = (long *)*puVar8;
  if ((long *)plVar7[0x16] == (long *)0x0) {
    uVar3 = FUN_004249b0();
    if ((uVar3 & 1) == 0) {
      uVar4 = (**(code **)(*plVar7 + 0x60))(plVar7);
      FUN_00623bb0(&DAT_001f4e90,"../../pc/channel.cc",0x11fb,"No transport assigned for mid=",uVar4
                  );
    }
  }
  else {
    if (*(char *)(puVar8[1] + 0x18) == '\x01') {
      (**(code **)(*(long *)plVar7[0x16] + 0x58))();
    }
    if ((*(char *)puVar8[2] != '\x01') ||
       (uVar3 = (**(code **)(*(long *)plVar7[0x16] + 0x68))
                          ((long *)plVar7[0x16],plVar7 + 0x2c,plVar7 + 2), (uVar3 & 1) != 0)) {
      uVar6 = 1;
      goto LAB_00c32104;
    }
    plVar5 = (long *)(**(code **)(*plVar7 + 0x60))(plVar7);
    plVar1 = (long *)*plVar5;
    if (-1 < *(char *)((long)plVar5 + 0x17)) {
      plVar1 = plVar5;
    }
    FUN_00898f80(local_60,plVar7 + 0x2c);
    ppuVar2 = (undefined1 **)local_60[0];
    if (-1 < cStack_49) {
      ppuVar2 = local_60;
    }
    FUN_008490e4(&local_48,"Failed to apply demuxer criteria for \'%s\': \'%s\'.",plVar1,ppuVar2);
    puVar8 = (undefined8 *)puVar8[3];
    if (*(char *)((long)puVar8 + 0x17) < '\0') {
      operator_delete((void *)*puVar8);
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
    }
    puVar8[2] = CONCAT17(uStack_31,local_38);
    puVar8[1] = uStack_40;
    *puVar8 = CONCAT71(uStack_47,local_48);
    uStack_31 = 0;
    local_48 = 0;
    if (cStack_49 < '\0') {
      operator_delete(local_60[0]);
    }
  }
  uVar6 = 0;
LAB_00c32104:
  *(undefined1 *)*param_1 = uVar6;
  return;
}


// ===== 00c32124  FUN_00c32124 =====

void FUN_00c32124(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)param_1[1];
  plVar1 = *(long **)(lVar2 + 0xb0);
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)(**(code **)(*plVar1 + 0x68))(plVar1,(long *)param_1[1] + 1,lVar2 + 0x10);
  }
  *(byte *)*param_1 = (byte)plVar1 & 1;
  return;
}


// ===== 00c32178  FUN_00c32178 =====

void FUN_00c32178(long *param_1)

{
  param_1 = (long *)*param_1;
  *(undefined1 *)((long)param_1 + 0xea) = 1;
                    /* WARNING: Could not recover jumptable at 0x00c32190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd8))();
  return;
}


// ===== 00c32194  FUN_00c32194 =====

undefined1 * FUN_00c32194(long *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  void *__src;
  undefined1 uVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  void *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  
  puVar1 = (undefined1 *)param_1[1];
  if (puVar1 < (undefined1 *)param_1[2]) {
    puVar6 = param_2;
    if (param_2 == puVar1) {
      if (param_2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *puVar1 = *param_3;
      param_1[1] = (long)(puVar1 + 1);
    }
    else {
      uVar2 = *param_3;
      puVar4 = puVar1;
      if (puVar1 + -1 < puVar1) {
        *puVar1 = puVar1[-1];
        puVar4 = puVar1 + 1;
      }
      param_1[1] = (long)puVar4;
      memmove(puVar1 + -(long)(puVar1 + ~(ulong)param_2),param_2,(size_t)(puVar1 + ~(ulong)param_2))
      ;
      *param_2 = uVar2;
    }
  }
  else {
    lVar3 = *param_1;
    puVar1 = puVar1 + (1 - lVar3);
    if ((long)puVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d34c0();
    }
    uVar5 = param_1[2] - lVar3;
    puVar6 = (undefined1 *)(uVar5 * 2);
    local_60 = (void *)0x0;
    if (puVar6 < puVar1 || (long)puVar6 - (long)puVar1 == 0) {
      puVar6 = puVar1;
    }
    if (0x3ffffffffffffffe < uVar5) {
      puVar6 = (undefined1 *)0x7fffffffffffffff;
    }
    if (puVar6 != (undefined1 *)0x0) {
      local_60 = operator_new((ulong)puVar6);
    }
    local_58 = (undefined1 *)((long)local_60 + ((long)param_2 - lVar3));
    puStack_48 = (undefined1 *)((long)local_60 + (long)puVar6);
    local_50 = local_58;
    FUN_00c32338(&local_60,param_3);
    puVar6 = local_58;
    memcpy(local_50,param_2,param_1[1] - (long)param_2);
    __src = (void *)*param_1;
    lVar3 = param_1[1];
    param_1[1] = (long)param_2;
    local_50 = local_50 + (lVar3 - (long)param_2);
    puVar1 = local_58 + ((long)__src - (long)param_2);
    memcpy(puVar1,__src,(long)param_2 - (long)__src);
    local_60 = (void *)*param_1;
    lVar3 = param_1[2];
    *param_1 = (long)puVar1;
    param_1[2] = (long)puStack_48;
    param_1[1] = (long)local_50;
    if (local_60 != (void *)0x0) {
      local_58 = (undefined1 *)local_60;
      local_50 = (undefined1 *)local_60;
      puStack_48 = (undefined1 *)lVar3;
      operator_delete(local_60);
    }
  }
  return puVar6;
}


// ===== 00c32338  FUN_00c32338 =====

void FUN_00c32338(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  void *pvVar3;
  undefined1 *__src;
  undefined1 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined1 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  puVar15 = (undefined1 *)param_1[2];
  if ((undefined1 *)param_1[3] == puVar15) {
    pvVar3 = (void *)*param_1;
    __src = (undefined1 *)param_1[1];
    if ((long)__src - (long)pvVar3 == 0) {
      uVar7 = ((long)param_1[3] - (long)pvVar3) * 2;
      if (uVar7 < 2) {
        uVar7 = 1;
      }
      uVar16 = uVar7 >> 2;
      pvVar6 = operator_new(uVar7);
      puVar4 = puVar15 + -(long)__src;
      puVar1 = (undefined1 *)((long)pvVar6 + uVar16);
      puVar8 = (undefined1 *)((long)pvVar6 + uVar16);
      if (puVar4 != (undefined1 *)0x0) {
        lVar14 = uVar16 + (long)pvVar6;
        puVar2 = puVar15 + ~(ulong)__src;
        puVar10 = puVar2;
        if ((undefined1 *)-lVar14 < puVar2) {
          puVar10 = (undefined1 *)-lVar14;
        }
        puVar10 = puVar10 + 1;
        puVar8 = puVar1 + (long)puVar4;
        puVar9 = (undefined1 *)((long)pvVar6 + uVar16);
        puVar11 = __src;
        if ((undefined1 *)0x20 < puVar10) {
          if ((undefined1 *)-lVar14 < puVar2) {
            puVar2 = (undefined1 *)-lVar14;
          }
          puVar9 = (undefined1 *)((long)pvVar6 + uVar16);
          if (((puVar1 <= puVar1 + (long)puVar2) &&
              (puVar9 = (undefined1 *)((long)pvVar6 + uVar16), __src <= __src + (long)puVar2)) &&
             (puVar9 = puVar1, 0x1f < (long)pvVar6 + (uVar16 - (long)__src))) {
            puVar13 = (undefined8 *)((long)pvVar6 + uVar16 + 0x10);
            uVar16 = 0x20;
            if (((ulong)puVar10 & 0x1f) != 0) {
              uVar16 = (ulong)puVar10 & 0x1f;
            }
            puVar12 = (undefined8 *)(__src + 0x10);
            puVar9 = puVar1 + ((long)puVar10 - uVar16);
            puVar11 = __src + ((long)puVar10 - uVar16);
            lVar14 = ~(ulong)puVar2 + uVar16;
            do {
              puVar5 = puVar12 + -1;
              uVar17 = puVar12[-2];
              uVar19 = puVar12[1];
              uVar18 = *puVar12;
              lVar14 = lVar14 + 0x20;
              puVar12 = puVar12 + 4;
              puVar13[-1] = *puVar5;
              puVar13[-2] = uVar17;
              puVar13[1] = uVar19;
              *puVar13 = uVar18;
              puVar13 = puVar13 + 4;
            } while (lVar14 != 0);
          }
        }
        do {
          if (puVar9 == (undefined1 *)0x0) goto LAB_00c324f8;
          puVar10 = puVar9 + 1;
          *puVar9 = *puVar11;
          puVar9 = puVar10;
          puVar11 = puVar11 + 1;
        } while (puVar10 != puVar8);
      }
      *param_1 = pvVar6;
      param_1[1] = puVar1;
      param_1[2] = puVar8;
      param_1[3] = (long)pvVar6 + uVar7;
      if (puVar15 + -1 < puVar4) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if (__src != (undefined1 *)0x0) {
        operator_delete(pvVar3);
      }
    }
    else {
      lVar14 = (((long)__src - (long)pvVar3) + 1) / 2;
      memmove(__src + -lVar14,__src,(long)puVar15 - (long)__src);
      puVar15 = puVar15 + -lVar14;
      param_1[1] = param_1[1] - lVar14;
      param_1[2] = puVar15;
    }
  }
  if (puVar15 != (undefined1 *)0x0) {
    *puVar15 = *param_2;
    param_1[2] = puVar15 + 1;
    return;
  }
LAB_00c324f8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c32520  FUN_00c32520 =====

bool FUN_00c32520(long *param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  undefined8 *__s1;
  undefined8 *__s2;
  undefined8 *puVar2;
  wchar_t *pwVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  wchar_t *pwVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  lVar8 = *param_1;
  if (*(wchar_t **)(lVar8 + 0x18) != *(wchar_t **)(lVar8 + 0x20)) {
    pwVar7 = *(wchar_t **)(param_2 + 0x18);
    pwVar3 = *(wchar_t **)(param_2 + 0x20);
    if (pwVar7 != pwVar3) {
      pwVar7 = wmemchr(pwVar7,**(wchar_t **)(lVar8 + 0x18),(long)pwVar3 - (long)pwVar7 >> 2);
      return pwVar7 != (wchar_t *)0x0 && pwVar7 != pwVar3;
    }
  }
  puVar2 = *(undefined8 **)(lVar8 + 0x78);
  if (puVar2 == *(undefined8 **)(lVar8 + 0x80)) {
    puVar10 = *(undefined8 **)(param_2 + 0x78);
    puVar9 = *(undefined8 **)(param_2 + 0x80);
    if (puVar10 == puVar9) {
      return false;
    }
  }
  else {
    puVar10 = *(undefined8 **)(param_2 + 0x78);
    puVar9 = *(undefined8 **)(param_2 + 0x80);
  }
  if ((long)puVar9 - (long)puVar10 == (long)*(undefined8 **)(lVar8 + 0x80) - (long)puVar2) {
    while( true ) {
      if (puVar10 == puVar9) {
        return true;
      }
      bVar4 = *(byte *)((long)puVar10 + 0x17);
      bVar5 = *(byte *)((long)puVar2 + 0x17);
      __n = puVar10[1];
      if (-1 < (char)bVar4) {
        __n = (ulong)bVar4;
      }
      sVar1 = puVar2[1];
      if (-1 < (char)bVar5) {
        sVar1 = (ulong)bVar5;
      }
      if (__n != sVar1) break;
      __s1 = (undefined8 *)*puVar10;
      if (-1 < (char)bVar4) {
        __s1 = puVar10;
      }
      __s2 = (undefined8 *)*puVar2;
      if (-1 < (char)bVar5) {
        __s2 = puVar2;
      }
      iVar6 = memcmp(__s1,__s2,__n);
      if (iVar6 != 0) {
        return false;
      }
      puVar10 = puVar10 + 10;
      puVar2 = puVar2 + 10;
    }
  }
  return false;
}


// ===== 00c32628  FUN_00c32628 =====

void FUN_00c32628(long param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 local_24 [4];
  
  local_24[0] = 0;
  FUN_00c32870(param_2,param_3,local_24);
  if (param_2 != param_3) {
    puVar3 = param_2 + 1;
    do {
      param_2 = puVar3;
      if (param_2 == param_3) {
        return;
      }
      uVar5 = param_2[-1];
      puVar3 = param_2 + 1;
    } while (uVar5 < *param_2);
    param_2 = param_2 + -1;
    for (; puVar3 != param_3; puVar3 = puVar3 + 1) {
      uVar1 = *puVar3;
      if (uVar5 < uVar1) {
        param_2 = param_2 + 1;
        *param_2 = uVar1;
        uVar5 = uVar1;
      }
    }
    param_2 = param_2 + 1;
  }
  lVar2 = (long)param_2 - (long)param_3;
  if (param_2 < param_3 || lVar2 == 0) {
    if (lVar2 != 0) {
      lVar9 = *(long *)(param_1 + 8);
      memmove(param_2,param_3,lVar9 - (long)param_3);
      lVar4 = *(long *)(param_1 + 8);
      lVar6 = (long)param_2 + (lVar9 - (lVar4 + (long)param_3));
      uVar7 = (ulong)((lVar6 << 0x3e) - lVar6) >> 2;
      uVar8 = (lVar4 - (lVar4 << 0x3e)) - 4U >> 2;
      if (uVar8 <= uVar7) {
        uVar7 = uVar8;
      }
      if ((1 < uVar7) &&
         (((((int)param_2 + (int)lVar9) - ((int)lVar4 + (int)param_3) | -(int)lVar4) & 3U) == 0)) {
        uVar7 = uVar7 & 0x3ffffffffffffffe;
        lVar4 = lVar4 + uVar7 * -4;
        do {
          uVar7 = uVar7 - 2;
        } while (uVar7 != 0);
      }
      while (lVar4 != lVar9 + lVar2) {
        lVar4 = lVar4 + -4;
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      *(long *)(param_1 + 8) = lVar9 + lVar2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:1170: libc++ Hardening assertion __first <= __last failed: vector::erase(first, last) called with invalid range\n"
            );
}


// ===== 00c32794  FUN_00c32794 =====

undefined1  [16] FUN_00c32794(undefined8 *param_1,uint *param_2,uint *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint *puVar2;
  ulong uVar3;
  uint uVar4;
  uint *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  puVar2 = (uint *)*param_1;
  if ((param_2 == puVar2) || (uVar4 = *param_3, param_2[-1] < uVar4)) {
    puVar5 = (uint *)param_1[1];
    if (param_2 != puVar5) {
      uVar4 = *param_3;
      if (*param_2 <= uVar4) {
        if (uVar4 <= *param_2) {
          uVar1 = 0;
          goto LAB_00c3284c;
        }
        goto LAB_00c327f4;
      }
    }
  }
  else {
    puVar5 = (uint *)param_1[1];
LAB_00c327f4:
    param_2 = puVar2;
    if ((long)puVar5 - (long)puVar2 != 0) {
      uVar3 = (long)puVar5 - (long)puVar2 >> 2;
      do {
        uVar6 = uVar3 >> 1;
        param_2 = puVar2 + uVar6 + 1;
        uVar3 = uVar3 + ~uVar6;
        if (uVar4 <= puVar2[uVar6]) {
          param_2 = puVar2;
          uVar3 = uVar6;
        }
        puVar2 = param_2;
      } while (uVar3 != 0);
    }
    if ((param_2 != puVar5) && (*param_2 <= uVar4)) {
      uVar1 = 0;
      goto LAB_00c3284c;
    }
  }
  param_2 = (uint *)FUN_0089cf8c(param_1,param_2,param_4);
  uVar1 = 1;
LAB_00c3284c:
  auVar7._8_8_ = uVar1;
  auVar7._0_8_ = param_2;
  return auVar7;
}


// ===== 00c32870  FUN_00c32870 =====

void FUN_00c32870(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = PTR_DAT_00d51ca8;
  uVar3 = param_2 - param_1 >> 2;
  uVar4 = uVar3;
  if (0x80 < (long)uVar3) {
    do {
      pvVar2 = (void *)FUN_00546b60(uVar4 << 2,puVar1);
      if (pvVar2 != (void *)0x0) {
        FUN_00c32940(param_1,param_2,param_3,uVar3,pvVar2,uVar4);
        operator_delete(pvVar2);
        return;
      }
      uVar4 = uVar4 >> 1;
    } while (uVar4 != 0);
  }
  FUN_00c32940(param_1,param_2,param_3,uVar3,0,0);
  return;
}


// ===== 00c32940  FUN_00c32940 =====

void FUN_00c32940(uint *param_1,uint *param_2,undefined8 param_3,ulong param_4,uint *param_5,
                 long param_6)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  uint *puVar16;
  uint *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  if (1 < param_4) {
    if (param_4 == 2) {
      uVar13 = *param_1;
      if (param_2[-1] < uVar13) {
        *param_1 = param_2[-1];
        param_2[-1] = uVar13;
      }
    }
    else if ((long)param_4 < 0x81) {
      if ((param_1 != param_2) && (param_1 + 1 != param_2)) {
        lVar5 = 0;
        puVar7 = param_1;
        puVar10 = param_1 + 1;
        do {
          uVar13 = *puVar7;
          uVar1 = puVar7[1];
          lVar4 = lVar5;
          if (uVar1 < uVar13) {
            do {
              lVar11 = lVar4;
              *(uint *)((long)param_1 + lVar11 + 4) = uVar13;
              puVar7 = param_1;
              if (lVar11 == 0) goto LAB_00c329e0;
              uVar13 = *(uint *)((long)param_1 + lVar11 + -4);
              lVar4 = lVar11 + -4;
            } while (uVar1 < uVar13);
            puVar7 = (uint *)((long)param_1 + lVar11);
LAB_00c329e0:
            *puVar7 = uVar1;
          }
          puVar6 = puVar10 + 1;
          lVar5 = lVar5 + 4;
          puVar7 = puVar10;
          puVar10 = puVar6;
        } while (puVar6 != param_2);
      }
    }
    else {
      uVar18 = param_4 >> 1;
      lVar5 = param_4 - uVar18;
      if (param_6 < (long)param_4) {
        FUN_00c32940();
        FUN_00c32940(param_1 + uVar18,param_2,param_3,lVar5,param_5,param_6);
        FUN_00c32e70(param_1,param_1 + uVar18,param_2,param_3,uVar18,lVar5,param_5,param_6);
        return;
      }
      FUN_00c32ca0(param_1,param_1 + uVar18,param_3,uVar18,param_5);
      puVar7 = param_5 + uVar18;
      FUN_00c32ca0(param_1 + uVar18,param_2,param_3,lVar5,param_5 + uVar18);
      puVar10 = param_5 + param_4;
      puVar9 = param_5 + uVar18;
      puVar6 = param_5;
      puVar17 = param_1;
      do {
        puVar16 = puVar17;
        puVar8 = puVar9;
        if (puVar8 == puVar10) {
          if (puVar6 == puVar7) {
            return;
          }
          uVar18 = (long)param_5 + (uVar18 * 4 - (long)puVar6) + -4;
          if ((((0x9b < uVar18) &&
               (puVar16 <= (uint *)((long)puVar16 + (uVar18 & 0xfffffffffffffffc)))) &&
              (puVar6 <= (uint *)((long)puVar6 + (uVar18 & 0xfffffffffffffffc)))) &&
             (0x1f < (ulong)((long)param_1 - (long)puVar6))) {
            puVar10 = puVar16 + 4;
            uVar18 = (uVar18 >> 2) + 1;
            uVar12 = uVar18 & 0x7ffffffffffffff8;
            puVar16 = puVar16 + uVar12;
            puVar9 = puVar6 + 4;
            uVar15 = uVar18 & 0x7ffffffffffffff8;
            do {
              puVar17 = puVar9 + -2;
              uVar19 = *(undefined8 *)(puVar9 + -4);
              uVar21 = *(undefined8 *)(puVar9 + 2);
              uVar20 = *(undefined8 *)puVar9;
              uVar15 = uVar15 - 8;
              puVar9 = puVar9 + 8;
              *(undefined8 *)(puVar10 + -2) = *(undefined8 *)puVar17;
              *(undefined8 *)(puVar10 + -4) = uVar19;
              *(undefined8 *)(puVar10 + 2) = uVar21;
              *(undefined8 *)puVar10 = uVar20;
              puVar10 = puVar10 + 8;
            } while (uVar15 != 0);
            puVar6 = puVar6 + uVar12;
            if (uVar18 == uVar12) {
              return;
            }
          }
          do {
            puVar10 = puVar6 + 1;
            *puVar16 = *puVar6;
            puVar6 = puVar10;
            puVar16 = puVar16 + 1;
          } while (puVar10 != puVar7);
          return;
        }
        uVar1 = *puVar8;
        uVar2 = *puVar6;
        param_1 = param_1 + 1;
        lVar5 = 0;
        uVar13 = uVar1;
        if (uVar2 <= uVar1) {
          lVar5 = 4;
          uVar13 = uVar2;
        }
        puVar6 = (uint *)((long)puVar6 + lVar5);
        lVar5 = 4;
        if (uVar2 <= uVar1) {
          lVar5 = 0;
        }
        puVar9 = (uint *)((long)puVar8 + lVar5);
        puVar17 = puVar16 + 1;
        *puVar16 = uVar13;
      } while (puVar6 != puVar7);
      if (puVar9 != puVar10) {
        uVar18 = (long)puVar10 + (-lVar5 - (long)puVar8) + -4;
        if (((0xbb < uVar18) && (puVar17 <= (uint *)((long)puVar17 + (uVar18 & 0xfffffffffffffffc)))
            ) && ((puVar9 <= (uint *)((long)puVar9 + (uVar18 & 0xfffffffffffffffc)) &&
                  (0x1f < (ulong)((long)param_1 + (-lVar5 - (long)puVar8)))))) {
          puVar16 = puVar16 + 5;
          puVar14 = (undefined8 *)((long)puVar8 + lVar5 + 0x10);
          uVar18 = (uVar18 >> 2) + 1;
          uVar12 = uVar18 & 0x7ffffffffffffff8;
          uVar15 = uVar18 & 0x7ffffffffffffff8;
          puVar9 = puVar9 + uVar12;
          puVar17 = puVar17 + uVar12;
          do {
            puVar3 = puVar14 + -1;
            uVar19 = puVar14[-2];
            uVar21 = puVar14[1];
            uVar20 = *puVar14;
            uVar15 = uVar15 - 8;
            puVar14 = puVar14 + 4;
            *(undefined8 *)(puVar16 + -2) = *puVar3;
            *(undefined8 *)(puVar16 + -4) = uVar19;
            *(undefined8 *)(puVar16 + 2) = uVar21;
            *(undefined8 *)puVar16 = uVar20;
            puVar16 = puVar16 + 8;
          } while (uVar15 != 0);
          if (uVar18 == uVar12) {
            return;
          }
        }
        do {
          puVar7 = puVar9 + 1;
          *puVar17 = *puVar9;
          puVar9 = puVar7;
          puVar17 = puVar17 + 1;
        } while (puVar7 != puVar10);
      }
    }
  }
  return;
}


// ===== 00c32ca0  FUN_00c32ca0 =====

void FUN_00c32ca0(uint *param_1,uint *param_2,undefined8 param_3,ulong param_4,uint *param_5)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  
  if (param_4 == 0) {
    return;
  }
  if (param_4 == 2) {
    if (*param_1 <= param_2[-1]) {
      if (param_5 == (uint *)0x0) goto LAB_00c32e5c;
      puVar7 = param_5 + 1;
      *param_5 = *param_1;
      if (puVar7 == (uint *)0x0) goto LAB_00c32e5c;
      uVar1 = param_2[-1];
      goto LAB_00c32dc8;
    }
    if (param_5 == (uint *)0x0) goto LAB_00c32e5c;
    puVar7 = param_5 + 1;
    *param_5 = param_2[-1];
    if (puVar7 == (uint *)0x0) goto LAB_00c32e5c;
  }
  else {
    if (param_4 != 1) {
      if (8 < (long)param_4) {
        uVar8 = param_4 >> 1;
        FUN_00c32940(param_1,param_1 + uVar8,param_3,uVar8,param_5,uVar8);
        FUN_00c32940(param_1 + uVar8,param_2,param_3,param_4 - uVar8,param_5 + uVar8,param_4 - uVar8
                    );
        FUN_00c330d8(param_1,param_1 + uVar8,param_1 + uVar8,param_2,param_5,param_3);
        return;
      }
      if (param_1 == param_2) {
        return;
      }
      if (param_5 != (uint *)0x0) {
        puVar7 = param_1 + 1;
        *param_5 = *param_1;
        if (puVar7 == param_2) {
          return;
        }
        lVar2 = 0;
        puVar5 = param_5;
        do {
          puVar3 = puVar5 + 1;
          if (*puVar7 < *puVar5) {
            if (puVar3 == (uint *)0x0) break;
            puVar5[1] = *puVar5;
            puVar4 = param_5;
            lVar6 = lVar2;
            if (puVar5 != param_5) {
              do {
                puVar4 = (uint *)((long)param_5 + lVar6);
                if (puVar4[-1] <= *puVar7) break;
                lVar6 = lVar6 + -4;
                *puVar4 = puVar4[-1];
                puVar4 = param_5;
              } while (lVar6 != 0);
            }
            *puVar4 = *puVar7;
          }
          else {
            if (puVar3 == (uint *)0x0) break;
            *puVar3 = *puVar7;
          }
          puVar7 = puVar7 + 1;
          lVar2 = lVar2 + 4;
          puVar5 = puVar3;
          if (puVar7 == param_2) {
            return;
          }
        } while( true );
      }
LAB_00c32e5c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar7 = param_5;
    if (param_5 == (uint *)0x0) goto LAB_00c32e5c;
  }
  uVar1 = *param_1;
LAB_00c32dc8:
  *puVar7 = uVar1;
  return;
}


// ===== 00c32e70  FUN_00c32e70 =====

void FUN_00c32e70(uint *param_1,uint *param_2,uint *param_3,undefined8 param_4,long param_5,
                 long param_6,undefined8 param_7,long param_8)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  uint *puVar11;
  uint *local_80;
  
  local_80 = param_1;
  if (param_6 != 0) {
    do {
      if ((param_6 <= param_8) || (param_5 <= param_8)) {
        FUN_00c33318();
        return;
      }
      if (param_5 == 0) {
        return;
      }
      lVar2 = 0;
      lVar10 = 0;
      while (uVar1 = local_80[lVar10], uVar1 <= *param_2) {
        lVar10 = lVar10 + 1;
        lVar2 = lVar2 + -4;
        if (param_5 == lVar10) {
          return;
        }
      }
      puVar6 = (uint *)((long)local_80 - lVar2);
      if (param_5 - lVar10 < param_6) {
        lVar8 = param_6 / 2;
        puVar9 = param_2 + lVar8;
        puVar11 = param_2;
        if (puVar6 != param_2) {
          uVar3 = (long)param_2 + (lVar2 - (long)local_80) >> 2;
          puVar11 = puVar6;
          do {
            uVar4 = uVar3 >> 1;
            uVar5 = uVar3 + ~uVar4;
            uVar3 = uVar4;
            if (puVar11[uVar4] <= *puVar9) {
              puVar11 = puVar11 + uVar4 + 1;
              uVar3 = uVar5;
            }
          } while (uVar3 != 0);
        }
        lVar7 = (long)puVar11 - (long)puVar6 >> 2;
        local_80 = puVar6;
      }
      else {
        if (param_5 + -1 == lVar10) {
          local_80[lVar10] = *param_2;
          *param_2 = uVar1;
          return;
        }
        lVar7 = (param_5 - lVar10) / 2;
        puVar9 = param_3;
        if ((long)param_3 - (long)param_2 != 0) {
          uVar3 = (long)param_3 - (long)param_2 >> 2;
          puVar6 = param_2;
          do {
            uVar5 = uVar3 >> 1;
            puVar9 = puVar6 + uVar5 + 1;
            uVar3 = uVar3 + ~uVar5;
            if (local_80[lVar7 + lVar10] <= puVar6[uVar5]) {
              puVar9 = puVar6;
              uVar3 = uVar5;
            }
            puVar6 = puVar9;
          } while (uVar3 != 0);
        }
        puVar11 = (uint *)((long)local_80 + (lVar7 * 4 - lVar2));
        lVar8 = (long)puVar9 - (long)param_2 >> 2;
        local_80 = (uint *)((long)local_80 - lVar2);
      }
      lVar2 = (param_5 - lVar7) - lVar10;
      puVar6 = (uint *)FUN_00c33684(puVar11,param_2,puVar9);
      if (lVar7 + lVar8 < ((param_6 + param_5) - (lVar7 + lVar8)) - lVar10) {
        FUN_00c32e70(local_80,puVar11,puVar6,param_4,lVar7,lVar8,param_7,param_8);
        local_80 = puVar6;
        puVar6 = param_3;
        param_2 = puVar9;
        param_6 = param_6 - lVar8;
        param_5 = lVar2;
      }
      else {
        FUN_00c32e70(puVar6,puVar9,param_3,param_4,lVar2,param_6 - lVar8,param_7,param_8);
        param_2 = puVar11;
        param_6 = lVar8;
        param_5 = lVar7;
      }
      param_3 = puVar6;
    } while (param_6 != 0);
  }
  return;
}


// ===== 00c330d8  FUN_00c330d8 =====

void FUN_00c330d8(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  ulong uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  iVar5 = (int)param_5;
  if (param_1 != param_2) {
    uVar6 = -(long)param_5;
    do {
      if (param_3 == param_4) {
        if (param_1 == param_2) {
          return;
        }
        uVar11 = uVar6 >> 2;
        uVar10 = (ulong)((long)param_2 + (-4 - (long)param_1)) >> 2;
        uVar9 = uVar11;
        if (uVar10 <= uVar11) {
          uVar9 = uVar10;
        }
        puVar4 = param_1;
        if (0x33 < uVar9) {
          uVar1 = uVar11;
          if (uVar10 <= uVar11) {
            uVar1 = uVar10;
          }
          if (((((((int)param_2 - (int)param_1 | -iVar5) & 3U) == 0) && (param_5 <= param_5 + uVar1)
               ) && (param_1 <= param_1 + uVar1)) && (0x1f < -((long)param_1 + uVar6))) {
            uVar6 = uVar9 + 1 & 7;
            uVar1 = 8;
            if (uVar6 != 0) {
              uVar1 = uVar6;
            }
            if (uVar10 <= uVar11) {
              uVar11 = uVar10;
            }
            puVar4 = param_1 + ((uVar9 + 1) - uVar1);
            puVar8 = param_5 + 4;
            param_1 = param_1 + 4;
            lVar7 = (uVar11 - uVar1) + 1;
            param_5 = param_5 + ((uVar11 + 1) - uVar1);
            do {
              puVar3 = param_1 + -2;
              uVar12 = *(undefined8 *)(param_1 + -4);
              uVar14 = *(undefined8 *)(param_1 + 2);
              uVar13 = *(undefined8 *)param_1;
              lVar7 = lVar7 + -8;
              param_1 = param_1 + 8;
              *(undefined8 *)(puVar8 + -2) = *(undefined8 *)puVar3;
              *(undefined8 *)(puVar8 + -4) = uVar12;
              *(undefined8 *)(puVar8 + 2) = uVar14;
              *(undefined8 *)puVar8 = uVar13;
              puVar8 = puVar8 + 8;
            } while (lVar7 != 0);
          }
        }
        while (param_5 != (uint *)0x0) {
          puVar8 = puVar4 + 1;
          *param_5 = *puVar4;
          puVar4 = puVar8;
          param_5 = param_5 + 1;
          if (puVar8 == param_2) {
            return;
          }
        }
        goto LAB_00c33304;
      }
      uVar2 = *param_1;
      if (*param_3 < uVar2) {
        if (param_5 == (uint *)0x0) goto LAB_00c33304;
        *param_5 = *param_3;
        param_3 = param_3 + 1;
      }
      else {
        if (param_5 == (uint *)0x0) goto LAB_00c33304;
        param_1 = param_1 + 1;
        *param_5 = uVar2;
      }
      param_5 = param_5 + 1;
      uVar6 = uVar6 - 4;
    } while (param_1 != param_2);
  }
  if (param_3 != param_4) {
    uVar9 = (ulong)((long)param_4 + (-4 - (long)param_3)) >> 2;
    uVar6 = uVar9;
    if ((ulong)-(long)param_5 >> 2 <= uVar9) {
      uVar6 = (ulong)-(long)param_5 >> 2;
    }
    puVar4 = param_5;
    if (0x2b < uVar6) {
      uVar11 = (ulong)-(long)param_5 >> 2;
      if (uVar11 <= uVar9) {
        uVar9 = uVar11;
      }
      if ((((((int)param_4 - (int)param_3 | (uint)-(long)param_5) & 3) == 0) &&
          (param_5 <= param_5 + uVar9)) &&
         ((param_3 <= param_3 + uVar9 && (0x1f < (ulong)((long)param_5 - (long)param_3))))) {
        puVar8 = param_3 + 4;
        uVar9 = uVar6 + 1 & 7;
        uVar11 = 8;
        if (uVar9 != 0) {
          uVar11 = uVar9;
        }
        lVar7 = (uVar6 + 1) - uVar11;
        puVar4 = param_5 + lVar7;
        param_3 = param_3 + lVar7;
        param_5 = param_5 + 4;
        do {
          puVar3 = puVar8 + -2;
          uVar12 = *(undefined8 *)(puVar8 + -4);
          uVar14 = *(undefined8 *)(puVar8 + 2);
          uVar13 = *(undefined8 *)puVar8;
          lVar7 = lVar7 + -8;
          puVar8 = puVar8 + 8;
          *(undefined8 *)(param_5 + -2) = *(undefined8 *)puVar3;
          *(undefined8 *)(param_5 + -4) = uVar12;
          *(undefined8 *)(param_5 + 2) = uVar14;
          *(undefined8 *)param_5 = uVar13;
          param_5 = param_5 + 8;
        } while (lVar7 != 0);
      }
    }
    do {
      if (puVar4 == (uint *)0x0) {
LAB_00c33304:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar8 = param_3 + 1;
      *puVar4 = *param_3;
      param_3 = puVar8;
      puVar4 = puVar4 + 1;
    } while (puVar8 != param_4);
  }
  return;
}


// ===== 00c33318  FUN_00c33318 =====

void FUN_00c33318(uint *param_1,uint *param_2,uint *param_3,undefined8 param_4,long param_5,
                 long param_6,uint *param_7)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if (param_6 < param_5) {
    if (param_2 != param_3) {
      uVar11 = (ulong)((long)param_3 + (-4 - (long)param_2)) >> 2;
      uVar12 = uVar11;
      if ((ulong)-(long)param_7 >> 2 <= uVar11) {
        uVar12 = (ulong)-(long)param_7 >> 2;
      }
      puVar7 = param_7;
      puVar9 = param_2;
      if (0x2b < uVar12) {
        uVar13 = (ulong)-(long)param_7 >> 2;
        if (uVar13 <= uVar11) {
          uVar11 = uVar13;
        }
        if ((((((int)param_3 - (int)param_2 | (uint)-(long)param_7) & 3) == 0) &&
            (param_7 <= param_7 + uVar11)) &&
           ((param_2 <= param_2 + uVar11 && (0x1f < (ulong)((long)param_7 - (long)param_2))))) {
          puVar8 = param_2 + 4;
          uVar11 = uVar12 + 1 & 7;
          puVar14 = param_7 + 4;
          uVar13 = 8;
          if (uVar11 != 0) {
            uVar13 = uVar11;
          }
          lVar10 = (uVar12 + 1) - uVar13;
          puVar7 = param_7 + lVar10;
          puVar9 = param_2 + lVar10;
          do {
            puVar6 = puVar8 + -2;
            uVar15 = *(undefined8 *)(puVar8 + -4);
            uVar17 = *(undefined8 *)(puVar8 + 2);
            uVar16 = *(undefined8 *)puVar8;
            lVar10 = lVar10 + -8;
            puVar8 = puVar8 + 8;
            *(undefined8 *)(puVar14 + -2) = *(undefined8 *)puVar6;
            *(undefined8 *)(puVar14 + -4) = uVar15;
            *(undefined8 *)(puVar14 + 2) = uVar17;
            *(undefined8 *)puVar14 = uVar16;
            puVar14 = puVar14 + 8;
          } while (lVar10 != 0);
        }
      }
      do {
        if (puVar7 == (uint *)0x0) {
LAB_00c33624:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar14 = puVar9 + 1;
        puVar8 = puVar7 + 1;
        *puVar7 = *puVar9;
        puVar7 = puVar8;
        puVar9 = puVar14;
      } while (puVar14 != param_3);
      if (puVar8 != param_7) {
        lVar10 = 0;
        do {
          if (param_2 == param_1) {
            if (param_7 == puVar8) {
              return;
            }
            puVar7 = (uint *)((long)param_3 + lVar10);
            uVar12 = ((long)puVar8 - (long)param_7) - 4;
            puVar9 = puVar8;
            if (((0x7b < uVar12) &&
                ((long)param_3 + (lVar10 - ((long)puVar8 - (long)param_7 & 0xfffffffffffffffcU)) <=
                 (ulong)((long)param_3 + lVar10 + -4))) &&
               (0x1f < (ulong)((long)puVar8 + (-lVar10 - (long)param_3)))) {
              puVar14 = puVar7 + -4;
              uVar12 = (uVar12 >> 2) + 1;
              uVar11 = uVar12 & 0x7ffffffffffffff8;
              puVar7 = (uint *)((long)param_3 + lVar10 + uVar11 * -4);
              puVar9 = puVar8 + -uVar11;
              puVar8 = puVar8 + -4;
              uVar13 = uVar12 & 0x7ffffffffffffff8;
              do {
                puVar6 = puVar8 + -2;
                uVar17 = *(undefined8 *)(puVar8 + -4);
                uVar16 = *(undefined8 *)(puVar8 + 2);
                uVar15 = *(undefined8 *)puVar8;
                uVar13 = uVar13 - 8;
                puVar8 = puVar8 + -8;
                *(undefined8 *)(puVar14 + -2) = *(undefined8 *)puVar6;
                *(undefined8 *)(puVar14 + -4) = uVar17;
                *(undefined8 *)(puVar14 + 2) = uVar16;
                *(undefined8 *)puVar14 = uVar15;
                puVar14 = puVar14 + -8;
              } while (uVar13 != 0);
              if (uVar12 == uVar11) {
                return;
              }
            }
            do {
              puVar7 = puVar7 + -1;
              puVar9 = puVar9 + -1;
              *puVar7 = *puVar9;
            } while (puVar9 != param_7);
            return;
          }
          uVar4 = puVar8[-1];
          uVar5 = param_2[-1];
          if (uVar5 <= uVar4) {
            puVar8 = puVar8 + -1;
          }
          uVar3 = uVar4;
          if (uVar4 <= uVar5) {
            uVar3 = uVar5;
          }
          puVar7 = param_2 + -1;
          if (uVar5 <= uVar4) {
            puVar7 = param_2;
          }
          *(uint *)((long)param_3 + lVar10 + -4) = uVar3;
          param_2 = puVar7;
          lVar10 = lVar10 + -4;
        } while (puVar8 != param_7);
      }
    }
  }
  else if (param_1 != param_2) {
    uVar11 = (ulong)((long)param_2 + (-4 - (long)param_1)) >> 2;
    uVar12 = uVar11;
    if ((ulong)-(long)param_7 >> 2 <= uVar11) {
      uVar12 = (ulong)-(long)param_7 >> 2;
    }
    puVar7 = param_7;
    puVar9 = param_1;
    if (0x2b < uVar12) {
      uVar13 = (ulong)-(long)param_7 >> 2;
      if (uVar13 <= uVar11) {
        uVar11 = uVar13;
      }
      if (((((((int)param_2 - (int)param_1 | (uint)-(long)param_7) & 3) == 0) &&
           (param_7 <= param_7 + uVar11)) && (param_1 <= param_1 + uVar11)) &&
         (0x1f < (ulong)((long)param_7 - (long)param_1))) {
        puVar8 = param_1 + 4;
        uVar11 = uVar12 + 1 & 7;
        puVar14 = param_7 + 4;
        uVar13 = 8;
        if (uVar11 != 0) {
          uVar13 = uVar11;
        }
        lVar10 = (uVar12 + 1) - uVar13;
        puVar7 = param_7 + lVar10;
        puVar9 = param_1 + lVar10;
        do {
          puVar6 = puVar8 + -2;
          uVar15 = *(undefined8 *)(puVar8 + -4);
          uVar17 = *(undefined8 *)(puVar8 + 2);
          uVar16 = *(undefined8 *)puVar8;
          lVar10 = lVar10 + -8;
          puVar8 = puVar8 + 8;
          *(undefined8 *)(puVar14 + -2) = *(undefined8 *)puVar6;
          *(undefined8 *)(puVar14 + -4) = uVar15;
          *(undefined8 *)(puVar14 + 2) = uVar17;
          *(undefined8 *)puVar14 = uVar16;
          puVar14 = puVar14 + 8;
        } while (lVar10 != 0);
      }
    }
    lVar10 = -(long)puVar7;
    do {
      if (puVar7 == (uint *)0x0) goto LAB_00c33624;
      puVar14 = puVar9 + 1;
      lVar10 = lVar10 + -4;
      puVar8 = puVar7 + 1;
      *puVar7 = *puVar9;
      puVar7 = puVar8;
      puVar9 = puVar14;
    } while (puVar14 != param_2);
    if (puVar8 != param_7) {
      do {
        if (param_2 == param_3) {
          memmove(param_1,param_7,-((long)param_7 + lVar10));
          return;
        }
        uVar5 = *param_2;
        uVar3 = *param_7;
        lVar1 = 0;
        uVar4 = uVar5;
        if (uVar3 <= uVar5) {
          lVar1 = 4;
          uVar4 = uVar3;
        }
        lVar2 = 4;
        if (uVar3 <= uVar5) {
          lVar2 = 0;
        }
        param_7 = (uint *)((long)param_7 + lVar1);
        param_2 = (uint *)((long)param_2 + lVar2);
        *param_1 = uVar4;
        param_1 = param_1 + 1;
      } while (puVar8 != param_7);
    }
  }
  return;
}


// ===== 00c33684  FUN_00c33684 =====

undefined1  [16] FUN_00c33684(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  size_t __n;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  
  puVar5 = param_3;
  if ((param_1 != param_2) && (puVar5 = param_1, param_2 != param_3)) {
    if (param_1 + 1 == param_2) {
      uVar1 = *param_1;
      memmove(param_1,param_1 + 1,(long)param_3 - (long)param_2);
      puVar5 = (undefined4 *)((long)param_1 + ((long)param_3 - (long)param_2));
      *puVar5 = uVar1;
    }
    else if (param_2 + 1 == param_3) {
      uVar1 = param_3[-1];
      __n = (long)(param_3 + -1) - (long)param_1;
      memmove((void *)((long)param_3 - __n),param_1,__n);
      *param_1 = uVar1;
      puVar5 = (undefined4 *)((long)param_3 - __n);
    }
    else {
      lVar13 = (long)param_2 - (long)param_1 >> 2;
      lVar12 = (long)param_3 - (long)param_2 >> 2;
      lVar8 = lVar12;
      if (lVar13 <= lVar12) {
        lVar8 = lVar13;
      }
      while (puVar2 = puVar5, 0 < lVar8) {
        while (lVar12 < lVar13) {
          lVar8 = lVar13;
          do {
            lVar13 = lVar8 - lVar12;
            if (lVar13 * 4 + lVar8 * -4 != 0) {
              puVar5 = puVar2 + lVar8;
              puVar17 = puVar2 + lVar13;
              uVar16 = (long)puVar5 + (-4 - (long)puVar17);
              puVar7 = puVar5;
              if (0x4b < uVar16) {
                puVar10 = (undefined4 *)((long)puVar17 + (uVar16 & 0xfffffffffffffffc));
                puVar11 = (undefined4 *)((long)puVar5 + (uVar16 & 0xfffffffffffffffc));
                if ((puVar17 <= puVar10 && puVar5 <= puVar11) &&
                   ((puVar11 + 1 <= puVar17 || (puVar10 + 1 <= puVar5)))) {
                  puVar6 = (undefined8 *)(puVar5 + 4);
                  uVar16 = (uVar16 >> 2) + 1;
                  uVar3 = uVar16 & 0x7ffffffffffffff8;
                  puVar4 = (undefined8 *)(puVar17 + 4);
                  uVar9 = (lVar12 * 4 - 4U >> 2) + 1 & 0x7ffffffffffffff8;
                  do {
                    uVar19 = puVar6[-2];
                    uVar21 = puVar6[1];
                    uVar20 = *puVar6;
                    uVar9 = uVar9 - 8;
                    uVar23 = puVar4[-1];
                    uVar22 = puVar4[-2];
                    uVar25 = puVar4[1];
                    uVar24 = *puVar4;
                    puVar4[-1] = puVar6[-1];
                    puVar4[-2] = uVar19;
                    puVar4[1] = uVar21;
                    *puVar4 = uVar20;
                    puVar4 = puVar4 + 4;
                    puVar6[-1] = uVar23;
                    puVar6[-2] = uVar22;
                    puVar6[1] = uVar25;
                    *puVar6 = uVar24;
                    puVar6 = puVar6 + 4;
                  } while (uVar9 != 0);
                  puVar7 = puVar5 + uVar3;
                  puVar17 = puVar17 + uVar3;
                  if (uVar16 == uVar3) goto LAB_00c33720;
                }
              }
              do {
                uVar1 = *puVar17;
                puVar10 = puVar17 + 1;
                *puVar17 = *puVar7;
                *puVar7 = uVar1;
                puVar7 = puVar7 + 1;
                puVar17 = puVar10;
              } while (puVar10 != puVar5);
            }
LAB_00c33720:
            lVar8 = lVar13;
          } while (lVar12 < lVar13);
          if (lVar13 < 1) goto LAB_00c33920;
        }
        lVar15 = lVar13 * 4;
        lVar14 = 0;
        puVar6 = (undefined8 *)(puVar2 + 4);
        puVar5 = puVar2;
        do {
          if (lVar15 != 0) {
            lVar8 = (-4 - (long)puVar2) + lVar13 * -4 * lVar14;
            puVar17 = puVar5 + lVar13;
            uVar16 = (long)puVar17 + lVar8;
            if (((uVar16 < 0x4c) ||
                ((undefined4 *)((long)puVar5 + (uVar16 & 0xfffffffffffffffc)) < puVar5 ||
                 (undefined4 *)((long)puVar17 + (uVar16 & 0xfffffffffffffffc)) < puVar17)) ||
               ((uVar9 = (long)puVar17 + lVar8 & 0xfffffffffffffffc,
                puVar5 < (undefined4 *)((long)puVar17 + uVar9 + 4) &&
                (puVar17 < (undefined4 *)((long)puVar2 + uVar9 + lVar15 * lVar14 + 4))))) {
              puVar7 = puVar5 + lVar13;
              puVar10 = puVar5;
            }
            else {
              puVar4 = (undefined8 *)(puVar17 + 4);
              uVar16 = (uVar16 >> 2) + 1;
              uVar3 = uVar16 & 0x7ffffffffffffff8;
              puVar7 = puVar17 + uVar3;
              puVar10 = puVar5 + uVar3;
              uVar9 = (lVar15 - 4U >> 2) + 1 & 0x7ffffffffffffff8;
              puVar18 = puVar6;
              do {
                uVar19 = puVar4[-2];
                uVar21 = puVar4[1];
                uVar20 = *puVar4;
                uVar9 = uVar9 - 8;
                uVar23 = puVar18[-1];
                uVar22 = puVar18[-2];
                uVar25 = puVar18[1];
                uVar24 = *puVar18;
                puVar18[-1] = puVar4[-1];
                puVar18[-2] = uVar19;
                puVar18[1] = uVar21;
                *puVar18 = uVar20;
                puVar18 = puVar18 + 4;
                puVar4[-1] = uVar23;
                puVar4[-2] = uVar22;
                puVar4[1] = uVar25;
                *puVar4 = uVar24;
                puVar4 = puVar4 + 4;
              } while (uVar9 != 0);
              if (uVar16 == uVar3) goto LAB_00c33828;
            }
            do {
              uVar1 = *puVar10;
              puVar11 = puVar10 + 1;
              *puVar10 = *puVar7;
              *puVar7 = uVar1;
              puVar7 = puVar7 + 1;
              puVar10 = puVar11;
            } while (puVar11 != puVar17);
          }
LAB_00c33828:
          lVar12 = lVar12 - lVar13;
          puVar5 = puVar5 + lVar13;
          lVar14 = lVar14 + 1;
          puVar6 = (undefined8 *)((long)puVar6 + lVar15);
          lVar8 = lVar12;
        } while (lVar13 <= lVar12);
      }
LAB_00c33920:
      puVar5 = (undefined4 *)(((long)param_3 - (long)param_2) + (long)param_1);
    }
  }
  auVar26._8_8_ = param_3;
  auVar26._0_8_ = puVar5;
  return auVar26;
}


// ===== 00c33994  FUN_00c33994 =====

void FUN_00c33994(long param_1,long param_2,long param_3,undefined8 param_4)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = param_2 - param_1 >> 2;
  uVar2 = param_3 - param_2 >> 2;
  uVar4 = uVar2;
  if ((long)uVar3 <= (long)uVar2) {
    uVar4 = uVar3;
  }
  if (0 < (long)uVar4) {
    do {
      pvVar1 = (void *)FUN_00546b60(uVar4 << 2,&DAT_001f9431);
      if (pvVar1 != (void *)0x0) {
        FUN_00c32e70(param_1,param_2,param_3,param_4,uVar3,uVar2,pvVar1,uVar4);
        operator_delete(pvVar1);
        return;
      }
      uVar4 = uVar4 >> 1;
    } while (uVar4 != 0);
  }
  FUN_00c32e70(param_1,param_2,param_3,param_4,uVar3,uVar2,0,uVar4);
  return;
}


// ===== 00c33a90  FUN_00c33a90 =====

undefined1 * FUN_00c33a90(long *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  void *__src;
  undefined1 uVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  void *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  
  puVar1 = (undefined1 *)param_1[1];
  if (puVar1 < (undefined1 *)param_1[2]) {
    puVar6 = param_2;
    if (param_2 == puVar1) {
      if (param_2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *puVar1 = *param_3;
      param_1[1] = (long)(puVar1 + 1);
    }
    else {
      uVar2 = *param_3;
      puVar4 = puVar1;
      if (puVar1 + -1 < puVar1) {
        *puVar1 = puVar1[-1];
        puVar4 = puVar1 + 1;
      }
      param_1[1] = (long)puVar4;
      memmove(puVar1 + -(long)(puVar1 + ~(ulong)param_2),param_2,(size_t)(puVar1 + ~(ulong)param_2))
      ;
      *param_2 = uVar2;
    }
  }
  else {
    lVar3 = *param_1;
    puVar1 = puVar1 + (1 - lVar3);
    if ((long)puVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d34c0();
    }
    uVar5 = param_1[2] - lVar3;
    puVar6 = (undefined1 *)(uVar5 * 2);
    local_60 = (void *)0x0;
    if (puVar6 < puVar1 || (long)puVar6 - (long)puVar1 == 0) {
      puVar6 = puVar1;
    }
    if (0x3ffffffffffffffe < uVar5) {
      puVar6 = (undefined1 *)0x7fffffffffffffff;
    }
    if (puVar6 != (undefined1 *)0x0) {
      local_60 = operator_new((ulong)puVar6);
    }
    local_58 = (undefined1 *)((long)local_60 + ((long)param_2 - lVar3));
    puStack_48 = (undefined1 *)((long)local_60 + (long)puVar6);
    local_50 = local_58;
    FUN_00c33c34(&local_60,param_3);
    puVar6 = local_58;
    memcpy(local_50,param_2,param_1[1] - (long)param_2);
    __src = (void *)*param_1;
    lVar3 = param_1[1];
    param_1[1] = (long)param_2;
    local_50 = local_50 + (lVar3 - (long)param_2);
    puVar1 = local_58 + ((long)__src - (long)param_2);
    memcpy(puVar1,__src,(long)param_2 - (long)__src);
    local_60 = (void *)*param_1;
    lVar3 = param_1[2];
    *param_1 = (long)puVar1;
    param_1[2] = (long)puStack_48;
    param_1[1] = (long)local_50;
    if (local_60 != (void *)0x0) {
      local_58 = (undefined1 *)local_60;
      local_50 = (undefined1 *)local_60;
      puStack_48 = (undefined1 *)lVar3;
      operator_delete(local_60);
    }
  }
  return puVar6;
}


// ===== 00c33c34  FUN_00c33c34 =====

void FUN_00c33c34(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  void *pvVar3;
  undefined1 *__src;
  undefined1 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined1 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  puVar15 = (undefined1 *)param_1[2];
  if ((undefined1 *)param_1[3] == puVar15) {
    pvVar3 = (void *)*param_1;
    __src = (undefined1 *)param_1[1];
    if ((long)__src - (long)pvVar3 == 0) {
      uVar7 = ((long)param_1[3] - (long)pvVar3) * 2;
      if (uVar7 < 2) {
        uVar7 = 1;
      }
      uVar16 = uVar7 >> 2;
      pvVar6 = operator_new(uVar7);
      puVar4 = puVar15 + -(long)__src;
      puVar1 = (undefined1 *)((long)pvVar6 + uVar16);
      puVar8 = (undefined1 *)((long)pvVar6 + uVar16);
      if (puVar4 != (undefined1 *)0x0) {
        lVar14 = uVar16 + (long)pvVar6;
        puVar2 = puVar15 + ~(ulong)__src;
        puVar10 = puVar2;
        if ((undefined1 *)-lVar14 < puVar2) {
          puVar10 = (undefined1 *)-lVar14;
        }
        puVar10 = puVar10 + 1;
        puVar8 = puVar1 + (long)puVar4;
        puVar9 = (undefined1 *)((long)pvVar6 + uVar16);
        puVar11 = __src;
        if ((undefined1 *)0x20 < puVar10) {
          if ((undefined1 *)-lVar14 < puVar2) {
            puVar2 = (undefined1 *)-lVar14;
          }
          puVar9 = (undefined1 *)((long)pvVar6 + uVar16);
          if (((puVar1 <= puVar1 + (long)puVar2) &&
              (puVar9 = (undefined1 *)((long)pvVar6 + uVar16), __src <= __src + (long)puVar2)) &&
             (puVar9 = puVar1, 0x1f < (long)pvVar6 + (uVar16 - (long)__src))) {
            puVar13 = (undefined8 *)((long)pvVar6 + uVar16 + 0x10);
            uVar16 = 0x20;
            if (((ulong)puVar10 & 0x1f) != 0) {
              uVar16 = (ulong)puVar10 & 0x1f;
            }
            puVar12 = (undefined8 *)(__src + 0x10);
            puVar9 = puVar1 + ((long)puVar10 - uVar16);
            puVar11 = __src + ((long)puVar10 - uVar16);
            lVar14 = ~(ulong)puVar2 + uVar16;
            do {
              puVar5 = puVar12 + -1;
              uVar17 = puVar12[-2];
              uVar19 = puVar12[1];
              uVar18 = *puVar12;
              lVar14 = lVar14 + 0x20;
              puVar12 = puVar12 + 4;
              puVar13[-1] = *puVar5;
              puVar13[-2] = uVar17;
              puVar13[1] = uVar19;
              *puVar13 = uVar18;
              puVar13 = puVar13 + 4;
            } while (lVar14 != 0);
          }
        }
        do {
          if (puVar9 == (undefined1 *)0x0) goto LAB_00c33df4;
          puVar10 = puVar9 + 1;
          *puVar9 = *puVar11;
          puVar9 = puVar10;
          puVar11 = puVar11 + 1;
        } while (puVar10 != puVar8);
      }
      *param_1 = pvVar6;
      param_1[1] = puVar1;
      param_1[2] = puVar8;
      param_1[3] = (long)pvVar6 + uVar7;
      if (puVar15 + -1 < puVar4) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if (__src != (undefined1 *)0x0) {
        operator_delete(pvVar3);
      }
    }
    else {
      lVar14 = (((long)__src - (long)pvVar3) + 1) / 2;
      memmove(__src + -lVar14,__src,(long)puVar15 - (long)__src);
      puVar15 = puVar15 + -lVar14;
      param_1[1] = param_1[1] - lVar14;
      param_1[2] = puVar15;
    }
  }
  if (puVar15 != (undefined1 *)0x0) {
    *puVar15 = *param_2;
    param_1[2] = puVar15 + 1;
    return;
  }
LAB_00c33df4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c33e1c  FUN_00c33e1c =====

void FUN_00c33e1c(long *param_1,long *param_2,long param_3,long param_4,long param_5,long param_6,
                 long param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    FUN_00d0f740(1,lVar1 + 8);
  }
  lVar1 = param_2[3];
  lVar3 = param_2[2];
  lVar2 = param_2[1];
  param_1[4] = param_2[4];
  param_1[3] = lVar1;
  param_1[0x16] = (long)FUN_004473ec;
  param_1[0x17] = (long)FUN_00c39884;
  param_1[2] = lVar3;
  param_1[1] = lVar2;
  param_1[5] = param_3;
  param_1[6] = param_4;
  param_1[7] = param_5;
  param_1[8] = param_6;
  param_1[9] = param_7;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = (long)param_1;
  param_1[0x18] = (long)param_1;
  param_1[0x1a] = (long)FUN_004473ec;
  param_1[0x1b] = (long)FUN_00c3995c;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_00bf9364(param_1 + 0x1e,param_8);
  FUN_00be0620(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x75] = 0;
  *(int *)(param_1 + 0x76) = (int)param_1[0x23];
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x7f] = 0;
  return;
}


// ===== 00c33f1c  FUN_00c33f1c =====

void FUN_00c33f1c(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  
  FUN_00c3c0a8(param_1 + 10);
  FUN_00c33fd0(param_1 + 0x76);
  pvVar3 = (void *)param_1[0x75];
  if ((pvVar3 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar3), iVar1 == 1)) {
    FUN_00833e18(pvVar3);
    operator_delete(pvVar3);
  }
  FUN_00be08b0(param_1 + 0x58);
  FUN_00be6e2c(param_1 + 0x1e);
  FUN_00c34150(param_1 + 10);
  plVar2 = (long *)*param_1;
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00c33fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 00c33fd0  FUN_00c33fd0 =====

void FUN_00c33fd0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 0x38);
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x40);
    puVar1 = puVar3;
    if (puVar3 != puVar2) {
      do {
        puVar1 = puVar2 + -4;
        if (puVar1 == (undefined8 *)0x0) goto LAB_00c3413c;
        if (*(char *)((long)puVar2 + -9) < '\0') {
          operator_delete((void *)*puVar1);
        }
        puVar2 = puVar1;
      } while (puVar1 != puVar3);
      puVar1 = *(undefined8 **)(param_1 + 0x38);
    }
    *(undefined8 **)(param_1 + 0x40) = puVar3;
    operator_delete(puVar1);
  }
  puVar3 = *(undefined8 **)(param_1 + 0x20);
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    puVar2 = puVar3;
    if (puVar3 != puVar1) {
      do {
        puVar1 = puVar1 + -1;
        if (puVar1 == (undefined8 *)0x0) goto LAB_00c3413c;
        pvVar4 = (void *)*puVar1;
        *puVar1 = 0;
        if (pvVar4 != (void *)0x0) {
          FUN_00b16cf4(pvVar4);
          operator_delete(pvVar4);
        }
      } while (puVar1 != puVar3);
      puVar2 = *(undefined8 **)(param_1 + 0x20);
    }
    *(undefined8 **)(param_1 + 0x28) = puVar3;
    operator_delete(puVar2);
  }
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  puVar2 = puVar3;
  if (puVar3 != puVar1) {
    do {
      puVar1 = puVar1 + -1;
      if (puVar1 == (undefined8 *)0x0) {
LAB_00c3413c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar4 = (void *)*puVar1;
      *puVar1 = 0;
      if (pvVar4 != (void *)0x0) {
        FUN_00b16cf4(pvVar4);
        operator_delete(pvVar4);
      }
    } while (puVar1 != puVar3);
    puVar2 = *(undefined8 **)(param_1 + 8);
  }
  *(undefined8 **)(param_1 + 0x10) = puVar3;
  operator_delete(puVar2);
  return;
}


// ===== 00c34150  FUN_00c34150 =====

void FUN_00c34150(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  
  (*(code *)param_1[0x10])(0,param_1 + 0xe,param_1 + 0xe);
  (*(code *)param_1[0xc])(0,param_1 + 10,param_1 + 10);
  puVar3 = (undefined8 *)param_1[6];
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[7];
    puVar1 = puVar3;
    if (puVar3 != puVar2) {
      do {
        puVar1 = puVar2 + -4;
        if (puVar1 == (undefined8 *)0x0) goto LAB_00c342dc;
        if (*(char *)((long)puVar2 + -9) < '\0') {
          operator_delete((void *)*puVar1);
        }
        puVar2 = puVar1;
      } while (puVar1 != puVar3);
      puVar1 = (undefined8 *)param_1[6];
    }
    param_1[7] = puVar3;
    operator_delete(puVar1);
  }
  puVar3 = (undefined8 *)param_1[3];
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[4];
    puVar1 = puVar3;
    if (puVar3 != puVar2) {
      do {
        puVar1 = puVar2 + -4;
        if (puVar1 == (undefined8 *)0x0) goto LAB_00c342dc;
        if (*(char *)((long)puVar2 + -9) < '\0') {
          operator_delete((void *)*puVar1);
        }
        puVar2 = puVar1;
      } while (puVar1 != puVar3);
      puVar1 = (undefined8 *)param_1[3];
    }
    param_1[4] = puVar3;
    operator_delete(puVar1);
  }
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  puVar1 = (undefined8 *)param_1[1];
  puVar2 = puVar3;
  if (puVar3 != puVar1) {
    do {
      puVar1 = puVar1 + -1;
      if (puVar1 == (undefined8 *)0x0) {
LAB_00c342dc:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar4 = (void *)*puVar1;
      *puVar1 = 0;
      if (pvVar4 != (void *)0x0) {
        FUN_00c3e428(pvVar4);
        operator_delete(pvVar4);
      }
    } while (puVar1 != puVar3);
    puVar2 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar3;
  operator_delete(puVar2);
  return;
}


// ===== 00c342f0  FUN_00c342f0 =====

void FUN_00c342f0(undefined8 *param_1,long param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long local_98;
  undefined4 *puStack_90;
  undefined8 *local_88;
  undefined8 *puStack_80;
  char **local_78;
  char *local_70;
  char *pcStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  long *plStack_48;
  undefined1 uStack_25;
  undefined4 local_24;
  
  local_60 = param_5;
  uStack_58 = param_4;
  local_24 = param_3;
  if (((DAT_00dbafc8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00dbafc8), iVar1 != 0)) {
    DAT_00dbafc0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbafc8);
  }
  local_78 = (char **)0x0;
  pcStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbafc0 != '\0') {
    FUN_0066d348(0x42,DAT_00dbafc0,"JsepTransportController::SetLocalDescription",0,0,0,0,0,0);
    local_70 = DAT_00dbafc0;
    pcStack_68 = "JsepTransportController::SetLocalDescription";
    local_78 = &local_70;
  }
  puStack_90 = &local_24;
  local_88 = &uStack_58;
  plVar2 = *(long **)(param_2 + 0x30);
  puStack_80 = &local_60;
  plStack_48 = &local_98;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar3 = *plVar2;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined4 *)param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)((long)param_1 + 0x26) = 0;
  *(undefined8 *)((long)param_1 + 0x1d) = 0;
  local_98 = param_2;
  local_50 = param_1;
  (**(code **)(lVar3 + 0x60))(plVar2,&local_50,FUN_00c39968,&uStack_25);
  if ((local_78 != (char **)0x0) && (**local_78 != '\0')) {
    FUN_0066d348(0x45,*local_78,local_78[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 00c34468  FUN_00c34468 =====

void FUN_00c34468(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 **local_18;
  
  *(undefined4 *)(param_1 + 0x3a0) = param_2;
  local_18 = &local_48;
  local_48 = (undefined8 *)0x0;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_00c3c004(param_1 + 0x50,&local_18,FUN_00c3a134);
  puVar1 = local_40;
  for (puVar3 = local_48; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    plVar2 = (long *)(**(code **)(*(long *)*puVar3 + 0xd0))();
    (**(code **)(*plVar2 + 0x70))(plVar2,*(undefined4 *)(param_1 + 0x3a0));
  }
  if (local_48 != (undefined8 *)0x0) {
    uVar5 = (ulong)((long)local_40 + (-8 - ((long)local_40 << 0x3d))) >> 3;
    uVar4 = (ulong)(((long)local_48 - (long)local_40 << 0x3d) - ((long)local_48 - (long)local_40))
            >> 3;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    puVar3 = local_40;
    if ((1 < uVar4) && ((((int)local_48 - (int)local_40 | -(int)local_40) & 7U) == 0)) {
      uVar4 = uVar4 & 0x1ffffffffffffffe;
      puVar3 = local_40 + -uVar4;
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    while (puVar3 != local_48) {
      puVar3 = puVar3 + -1;
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
  return;
}


// ===== 00c3458c  FUN_00c3458c =====

/* WARNING: Removing unreachable block (ram,0x00c352b8) */
/* WARNING: Removing unreachable block (ram,0x00c34ba8) */
/* WARNING: Removing unreachable block (ram,0x00c34bbc) */
/* WARNING: Removing unreachable block (ram,0x00c34bc0) */
/* WARNING: Removing unreachable block (ram,0x00c34938) */
/* WARNING: Removing unreachable block (ram,0x00c34948) */
/* WARNING: Removing unreachable block (ram,0x00c3494c) */
/* WARNING: Removing unreachable block (ram,0x00c34750) */
/* WARNING: Removing unreachable block (ram,0x00c34760) */
/* WARNING: Removing unreachable block (ram,0x00c34764) */
/* WARNING: Removing unreachable block (ram,0x00c35418) */
/* WARNING: Removing unreachable block (ram,0x00c3527c) */
/* WARNING: Removing unreachable block (ram,0x00c347c8) */
/* WARNING: Removing unreachable block (ram,0x00c34edc) */
/* WARNING: Removing unreachable block (ram,0x00c34ef0) */
/* WARNING: Removing unreachable block (ram,0x00c34ef4) */
/* WARNING: Removing unreachable block (ram,0x00c3550c) */
/* WARNING: Removing unreachable block (ram,0x00c347e8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c3458c(int *param_1,long param_2,uint param_3,int param_4,long *param_5,long *param_6)

{
  size_t sVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  ulong ******ppppppuVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  char *pcVar16;
  size_t sVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  ulong *******pppppppuVar21;
  ulong *******pppppppuVar22;
  undefined4 uVar23;
  ulong uVar24;
  ulong *puVar25;
  undefined4 uVar26;
  long lVar27;
  long lVar28;
  undefined1 auVar29 [16];
  undefined1 local_208 [16];
  void *local_1f8 [2];
  char cStack_1e1;
  void *local_1e0;
  undefined8 uStack_1d8;
  long local_1d0;
  undefined1 local_1c0 [16];
  long local_1b0;
  undefined1 uStack_1a1;
  undefined1 *local_1a0;
  ulong *******pppppppuStack_198;
  ulong *******local_190;
  void *pvStack_188;
  undefined1 *puStack_180;
  undefined7 local_178;
  char cStack_171;
  int local_170;
  undefined3 uStack_16c;
  ulong *******local_160;
  ulong *******pppppppuStack_158;
  void **ppvStack_150;
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
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  ulong *******local_e0;
  ulong *******pppppppuStack_d8;
  void **local_d0;
  ulong *******local_c8;
  ulong *******local_c0;
  void **local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined5 local_98;
  undefined3 uStack_93;
  undefined4 local_90;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  char **local_88;
  char *local_80;
  char *pcStack_78;
  
  if (((DAT_00dbafe8 & 1) == 0) && (iVar9 = FUN_0054fdd4(&DAT_00dbafe8), iVar9 != 0)) {
    DAT_00dbafe0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbafe8);
  }
  local_88 = (char **)0x0;
  pcStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbafe0 != '\0') {
    FUN_0066d348(0x42,DAT_00dbafe0,"JsepTransportController::ApplyDescription_n",0,0,0,0,0,0);
    local_80 = DAT_00dbafe0;
    pcStack_78 = "JsepTransportController::ApplyDescription_n";
    local_88 = &local_80;
  }
  puVar25 = (ulong *)((ulong)&local_b0 | 8);
  uStack_8b = 0xaa;
  uStack_89 = 0xaa;
  local_b0 = 0xaaaaaaaa00000000;
  uStack_8a = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  plVar18 = param_5;
  if ((param_3 & 1) == 0) {
    plVar18 = param_6;
  }
  uStack_93 = 0;
  local_90 = 0;
  uStack_8c = 0;
  FUN_00c36b38(&local_160,param_2,param_3 & 1,param_4,param_5,param_6);
  local_b0 = CONCAT44(local_b0._4_4_,(int)local_160);
  if ((long)puStack_148 < 0) {
    FUN_00547fc0(puVar25,pppppppuStack_158,ppvStack_150);
    uStack_8c = (undefined1)((ulong)local_140 >> 0x20);
    uStack_8b = (undefined1)((ulong)local_140 >> 0x28);
    uStack_8a = (undefined1)((ulong)local_140 >> 0x30);
    if ((long)puStack_148 < 0) {
      local_90 = (int)local_140;
      operator_delete(pppppppuStack_158);
      iVar9 = (int)local_b0;
      iVar8 = local_90;
    }
    else {
      iVar9 = (int)local_b0;
      iVar8 = (int)local_140;
    }
  }
  else {
    puVar25[2] = (ulong)puStack_148;
    puVar25[1] = (ulong)ppvStack_150;
    *puVar25 = (ulong)pppppppuStack_158;
    uStack_8c = (undefined1)((ulong)local_140 >> 0x20);
    uStack_8b = (undefined1)((ulong)local_140 >> 0x28);
    uStack_8a = (undefined1)((ulong)local_140 >> 0x30);
    iVar9 = (int)local_160;
    iVar8 = (int)local_140;
  }
  local_90 = iVar8;
  if (iVar9 == 0) {
    local_c0 = (ulong *******)0x0;
    local_b8 = (void **)0x0;
    local_c8 = (ulong *******)&local_c0;
    if (*(long *)(param_2 + 0x3b8) != *(long *)(param_2 + 0x3c0)) {
      FUN_00c378c0(&local_160,param_2,plVar18);
      local_190 = (ulong *******)&local_c8;
      FUN_00c39568(&local_190,local_c0);
      local_b8 = ppvStack_150;
      local_c8 = local_160;
      local_c0 = pppppppuStack_158;
      pppppppuVar21 = (ulong *******)&local_c0;
      if (ppvStack_150 != (void **)0x0) {
        local_160 = (ulong *******)&pppppppuStack_158;
        pppppppuStack_158[2] = (ulong ******)&local_c0;
        pppppppuStack_158 = (ulong *******)0x0;
        ppvStack_150 = (void **)0x0;
        pppppppuVar21 = local_c8;
      }
      local_c8 = pppppppuVar21;
      local_190 = (ulong *******)&local_160;
      FUN_00c39568(&local_190,pppppppuStack_158);
    }
    lVar28 = *plVar18;
    lVar27 = plVar18[1];
    if (lVar28 != lVar27) {
      do {
        if ((*(byte *)(lVar28 + 4) & 1) == 0) {
          lVar19 = (long)*(char *)(lVar28 + 0x1f);
          if (lVar19 < 0) {
            lVar20 = *(long *)(lVar28 + 8);
            lVar19 = *(long *)(lVar28 + 0x10);
          }
          else {
            lVar20 = lVar28 + 8;
          }
          uVar10 = FUN_00c3b190(param_2 + 0x3b0,lVar20,lVar19);
          if ((uVar10 & 1) != 0) {
            FUN_00c37b68(&local_160,param_2,0,lVar28);
            local_b0 = CONCAT44(local_b0._4_4_,(int)local_160);
            if ((long)puStack_148 < 0) {
              FUN_00547fc0(puVar25,pppppppuStack_158,ppvStack_150);
              uStack_8c = (undefined1)((ulong)local_140 >> 0x20);
              uStack_8b = (undefined1)((ulong)local_140 >> 0x28);
              uStack_8a = (undefined1)((ulong)local_140 >> 0x30);
              local_90 = (int)local_140;
              if ((long)puStack_148 < 0) {
                operator_delete(pppppppuStack_158);
              }
            }
            else {
              puVar25[1] = (ulong)ppvStack_150;
              *puVar25 = (ulong)pppppppuStack_158;
              puVar25[2] = (ulong)puStack_148;
              uStack_8c = (undefined1)((ulong)local_140 >> 0x20);
              uStack_8b = (undefined1)((ulong)local_140 >> 0x28);
              uStack_8a = (undefined1)((ulong)local_140 >> 0x30);
              local_90 = (int)local_140;
            }
            if ((int)local_b0 != 0) {
              *param_1 = (int)local_b0;
              uVar24 = *puVar25;
              uVar10 = puVar25[2];
              *(ulong *)(param_1 + 4) = puVar25[1];
              *(ulong *)(param_1 + 2) = uVar24;
              *(ulong *)(param_1 + 6) = uVar10;
              param_1[8] = local_90;
              *(uint *)((long)param_1 + 0x23) =
                   CONCAT13(uStack_8a,CONCAT12(uStack_8b,CONCAT11(uStack_8c,local_90._3_1_)));
              goto LAB_00c35260;
            }
          }
        }
        lVar28 = lVar28 + 0x28;
      } while (lVar28 != lVar27);
      lVar28 = *plVar18;
      if (plVar18[1] != lVar28) {
        uVar10 = 0;
        do {
          lVar27 = plVar18[3];
          if ((ulong)((plVar18[4] - lVar27 >> 4) * 0x6db6db6db6db6db7) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                      );
          }
          lVar28 = lVar28 + uVar10 * 0x28;
          if (*(char *)(lVar28 + 4) == '\x01') {
            FUN_00c37d48(param_2,lVar28);
            goto LAB_00c349b8;
          }
          lVar20 = (long)*(char *)(lVar28 + 0x1f);
          lVar19 = lVar28 + 8;
          if (lVar20 < 0) {
            lVar14 = *(long *)(lVar28 + 8);
            lVar20 = *(long *)(lVar28 + 0x10);
          }
          else {
            lVar14 = lVar28 + 8;
          }
          ppppppuVar11 = (ulong ******)FUN_00c3b244(param_2 + 0x3b0,lVar14,lVar20);
          if (ppppppuVar11 != (ulong ******)0x0) {
            puVar12 = (undefined8 *)FUN_00b16dbc(ppppppuVar11);
            bVar6 = *(byte *)((long)puVar12 + 0x17);
            bVar7 = *(byte *)(lVar28 + 0x1f);
            uVar24 = (ulong)bVar7;
            sVar17 = *(size_t *)(lVar28 + 0x10);
            if (-1 < (char)bVar7) {
              sVar17 = uVar24;
            }
            sVar1 = puVar12[1];
            if (-1 < (char)bVar6) {
              sVar1 = (ulong)bVar6;
            }
            if (sVar17 == sVar1) {
              puVar2 = (undefined8 *)*(void **)(lVar28 + 8);
              if (-1 < (char)bVar7) {
                puVar2 = (undefined8 *)(lVar28 + 8);
              }
              puVar3 = (undefined8 *)*puVar12;
              if (-1 < (char)bVar6) {
                puVar3 = puVar12;
              }
              iVar9 = memcmp(puVar2,puVar3,sVar17);
              if (iVar9 != 0) goto LAB_00c34aa8;
LAB_00c34ac0:
              lVar20 = lVar28 + 8;
              if ((uint)uVar24 >> 7 != 0) goto LAB_00c34ba0;
              goto LAB_00c34ac8;
            }
LAB_00c34aa8:
            uVar13 = FUN_00c37eec(param_2,lVar28,ppppppuVar11);
            uVar24 = (ulong)*(byte *)(lVar28 + 0x1f);
            if ((uVar13 & 1) != 0) goto LAB_00c34ac0;
            lVar27 = *(long *)(lVar28 + 8);
            uVar10 = *(ulong *)(lVar28 + 0x10);
            if (-1 < (char)*(byte *)(lVar28 + 0x1f)) {
              lVar27 = lVar19;
              uVar10 = uVar24;
            }
            FUN_005ff514(&local_190,&local_160,
                         "Failed to process the bundled m= section with mid=\'",0x33,lVar27,uVar10);
            plVar18 = (long *)FUN_00547cac(&local_190,&DAT_001e0c01,2);
            pppppppuStack_158 = (ulong *******)plVar18[1];
            local_160 = (ulong *******)*plVar18;
            ppvStack_150 = (void **)plVar18[2];
LAB_00c35480:
            plVar18[1] = 0;
            plVar18[2] = 0;
            *plVar18 = 0;
            pppppppuVar21 = pppppppuStack_158;
            pppppppuVar22 = local_160;
            if (-1 < (long)ppvStack_150) {
              pppppppuVar21 = (ulong *******)((ulong)ppvStack_150 >> 0x38);
              pppppppuVar22 = (ulong *******)&local_160;
            }
            FUN_00b0092c(param_1,3,pppppppuVar22,pppppppuVar21);
            if ((long)ppvStack_150 < 0) {
              operator_delete(local_160);
            }
            if ((long)puStack_180 < 0) {
              operator_delete(local_190);
            }
            goto LAB_00c35260;
          }
          uVar24 = (ulong)*(byte *)(lVar28 + 0x1f);
          lVar20 = lVar28 + 8;
          if ((char)*(byte *)(lVar28 + 0x1f) < '\0') {
LAB_00c34ba0:
            lVar20 = *(long *)(lVar28 + 8);
            uVar24 = *(ulong *)(lVar28 + 0x10);
          }
LAB_00c34ac8:
          lVar20 = FUN_00c3c34c(param_2 + 0x50,lVar20,uVar24);
          if (lVar20 == 0) {
            uVar10 = FUN_004249b0();
            if ((uVar10 & 1) == 0) {
              local_160 = (ulong *******)0x1e6abc;
              pppppppuStack_158 = (ulong *******)0x1633;
              ppvStack_150 = &local_1e0;
              uVar10 = *(ulong *)(lVar28 + 0x10);
              lVar27 = *(long *)(lVar28 + 8);
              if (-1 < (char)*(byte *)(lVar28 + 0x1f)) {
                uVar10 = (ulong)*(byte *)(lVar28 + 0x1f);
                lVar27 = lVar28 + 8;
              }
              FUN_005ff514(&local_e0,&local_190,
                           "Could not find transport for m= section with mid=\'",0x32,lVar27,uVar10)
              ;
              puVar12 = (undefined8 *)FUN_00547cac(&local_e0,&DAT_001c1d3e,1);
              pvStack_188 = (void *)puVar12[1];
              local_190 = (ulong *******)*puVar12;
              puStack_180 = (undefined1 *)puVar12[2];
              puVar12[1] = 0;
              puVar12[2] = 0;
              *puVar12 = 0;
              local_1c0 = FUN_005eceec(3);
              FUN_00623bb0(&DAT_00255ab6,local_160,(ulong)pppppppuStack_158 & 0xffffffff,&local_190,
                           &DAT_001a2df6,local_1c0,&DAT_001ca519);
              if ((long)puStack_180 < 0) {
                operator_delete(local_190);
              }
            }
            bVar6 = *(byte *)(lVar28 + 0x1f);
            uVar10 = *(ulong *)(lVar28 + 0x10);
            if (-1 < (char)bVar6) {
              uVar10 = (ulong)bVar6;
            }
            lVar28 = *(long *)(lVar28 + 8);
            if (-1 < (char)bVar6) {
              lVar28 = lVar19;
            }
            FUN_005ff514(&local_190,&local_160,"Could not find transport for m= section with mid=\'"
                         ,0x32,lVar28,uVar10);
            plVar18 = (long *)FUN_00547cac(&local_190,&DAT_001c1d3e,1);
            pppppppuStack_158 = (ulong *******)plVar18[1];
            local_160 = (ulong *******)*plVar18;
            ppvStack_150 = (void **)plVar18[2];
            goto LAB_00c35480;
          }
          if (ppppppuVar11 == (ulong ******)0x0) {
LAB_00c34b40:
            FUN_00c38058(&local_160,param_2,lVar28);
            local_b0 = CONCAT44(local_b0._4_4_,(int)local_160);
            if ((long)puStack_148 < 0) {
              FUN_00547fc0(puVar25,pppppppuStack_158,ppvStack_150);
              uStack_8c = (undefined1)((ulong)local_140 >> 0x20);
              uStack_8b = (undefined1)((ulong)local_140 >> 0x28);
              uStack_8a = (undefined1)((ulong)local_140 >> 0x30);
              local_90 = (int)local_140;
              if ((long)puStack_148 < 0) {
                operator_delete(pppppppuStack_158);
              }
            }
            else {
              puVar25[1] = (ulong)ppvStack_150;
              *puVar25 = (ulong)pppppppuStack_158;
              puVar25[2] = (ulong)puStack_148;
              uStack_8c = (undefined1)((ulong)local_140 >> 0x20);
              uStack_8b = (undefined1)((ulong)local_140 >> 0x28);
              uStack_8a = (undefined1)((ulong)local_140 >> 0x30);
              local_90 = (int)local_140;
            }
            if ((int)local_b0 != 0) {
              *param_1 = (int)local_b0;
              uVar24 = *puVar25;
              uVar10 = puVar25[2];
              *(ulong *)(param_1 + 4) = puVar25[1];
              *(ulong *)(param_1 + 2) = uVar24;
              *(ulong *)(param_1 + 6) = uVar10;
              param_1[8] = local_90;
              *(uint *)((long)param_1 + 0x23) =
                   CONCAT13(uStack_8a,CONCAT12(uStack_8b,CONCAT11(uStack_8c,local_90._3_1_)));
              goto LAB_00c35260;
            }
            local_e0 = (ulong *******)0x0;
            pppppppuStack_d8 = (ulong *******)0x0;
            local_d0 = (void **)0x0;
            pppppppuVar21 = local_c0;
            if (ppppppuVar11 == (ulong ******)0x0) {
              FUN_00c38190(&local_160,param_2,lVar28);
              if (local_e0 != (ulong *******)0x0) {
                uVar13 = (ulong)((long)pppppppuStack_d8 + (-4 - ((long)pppppppuStack_d8 << 0x3e)))
                         >> 2;
                uVar24 = (ulong)(((long)local_e0 - (long)pppppppuStack_d8 << 0x3e) -
                                ((long)local_e0 - (long)pppppppuStack_d8)) >> 2;
                if (uVar13 <= uVar24) {
                  uVar24 = uVar13;
                }
                pppppppuVar21 = pppppppuStack_d8;
                if ((1 < uVar24) &&
                   ((((int)local_e0 - (int)pppppppuStack_d8 | -(int)pppppppuStack_d8) & 3U) == 0)) {
                  uVar24 = uVar24 & 0x3ffffffffffffffe;
                  pppppppuVar21 = (ulong *******)((long)pppppppuStack_d8 + uVar24 * -4);
                  do {
                    uVar24 = uVar24 - 2;
                  } while (uVar24 != 0);
                }
                while (pppppppuVar21 != local_e0) {
                  pppppppuVar21 = (ulong *******)((long)pppppppuVar21 + -4);
                  if (pppppppuVar21 == (ulong *******)0x0) goto LAB_00c35280;
                }
                pppppppuStack_d8 = local_e0;
                operator_delete(local_e0);
              }
              local_d0 = ppvStack_150;
              pppppppuStack_d8 = pppppppuStack_158;
              local_e0 = local_160;
            }
            else {
              for (; pppppppuVar22 = (ulong *******)&local_c0, pppppppuVar21 != (ulong *******)0x0;
                  pppppppuVar21 = (ulong *******)*pppppppuVar21) {
                while (pppppppuVar21[4] <= ppppppuVar11) {
                  pppppppuVar22 = pppppppuVar21;
                  if ((ppppppuVar11 <= pppppppuVar21[4]) ||
                     (pppppppuVar21 = (ulong *******)pppppppuVar21[1],
                     pppppppuVar22 = (ulong *******)&local_c0, pppppppuVar21 == (ulong *******)0x0))
                  goto LAB_00c34c54;
                }
              }
LAB_00c34c54:
              if (&local_e0 != (ulong ********)(pppppppuVar22 + 5)) {
                FUN_00c3965c(&local_e0,pppppppuVar22[5],pppppppuVar22[6],
                             (long)pppppppuVar22[6] - (long)pppppppuVar22[5] >> 2);
              }
            }
            if (*(char *)(param_2 + 0x121) == '\x01') {
              lVar14 = FUN_00b174c8(lVar28);
              lVar14 = FUN_00669f90(lVar14 + 0x40,
                                    "http://www.webrtc.org/experiments/rtp-hdrext/abs-send-time",
                                    0x3a,*(undefined1 *)(param_2 + 0xfb));
              if (lVar14 == 0) goto LAB_00c34d58;
              uVar26 = *(undefined4 *)(lVar14 + 0x18);
            }
            else {
LAB_00c34d58:
              uVar26 = 0xffffffff;
            }
            uVar5 = *(undefined4 *)(param_2 + 0x3a0);
            lVar27 = lVar27 + uVar10 * 0x70;
            local_110 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
            ppvStack_150 = (void **)&DAT_aaaaaaaaaaaaaaaa;
            puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
            local_140 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
            local_130 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
            local_120 = &DAT_aaaaaaaaaaaaaaaa;
            pppppppuStack_158 = (ulong *******)&DAT_aaaaaaaaaaaaaaaa;
            local_160 = (ulong *******)&DAT_aaaaaaaaaaaaaaaa;
            FUN_00b193dc(&local_160,lVar27 + 0x18);
            uVar23 = uVar5;
            if ((param_3 & 1) == 0) {
              uVar23 = 0;
              if ((int)puStack_118 != 1 || *(int *)(param_2 + 0x3a0) != 1) {
                uVar23 = uVar5;
              }
              if (((*(long *)(lVar20 + 0x10) != 0) &&
                  (*(int *)(*(long *)(lVar20 + 0x10) + 0x70) == 1)) &&
                 (*(int *)(param_2 + 0x3a0) == 0 && (int)puStack_118 == 0)) {
                uVar23 = 1;
              }
            }
            else if (((*(long *)(lVar20 + 0x18) != 0) &&
                     (*(int *)(*(long *)(lVar20 + 0x18) + 0x70) == 1)) &&
                    (uVar23 = 0, (int)puStack_118 != 0 || *(int *)(param_2 + 0x3a0) != 1)) {
              uVar23 = uVar5;
            }
            FUN_00b194c8(&local_160);
            uVar15 = FUN_00c34468(param_2,uVar23);
            pppppppuStack_158 = (ulong *******)&DAT_aaaaaaaaaaaaaaaa;
            local_160 = (ulong *******)&DAT_aaaaaaaaaaaaaaaa;
            puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
            ppvStack_150 = (void **)&DAT_aaaaaaaaaaaaaaaa;
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
            puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
            FUN_00c38274(&local_160,uVar15,lVar28,lVar27,&local_e0,uVar26);
            if ((param_3 & 1) == 0) {
              FUN_00c3f900(&local_190,lVar20,&local_160,param_4);
              local_b0 = CONCAT44(local_b0._4_4_,local_190._0_4_);
              if (cStack_171 < '\0') goto LAB_00c34ecc;
LAB_00c34e70:
              puVar25[1] = (ulong)puStack_180;
              *puVar25 = (ulong)pvStack_188;
              puVar25[2] = CONCAT17(cStack_171,local_178);
              local_90 = local_170;
              uStack_8c = (undefined1)uStack_16c;
              uStack_8b = (undefined1)((uint3)uStack_16c >> 8);
              uStack_8a = (undefined1)((uint3)uStack_16c >> 0x10);
            }
            else {
              FUN_00c3e730(&local_190,lVar20,&local_160,param_4);
              local_b0 = CONCAT44(local_b0._4_4_,local_190._0_4_);
              if (-1 < cStack_171) goto LAB_00c34e70;
LAB_00c34ecc:
              FUN_00547fc0(puVar25,pvStack_188,puStack_180);
              local_90 = local_170;
              uStack_8c = (undefined1)uStack_16c;
              uStack_8b = (undefined1)((uint3)uStack_16c >> 8);
              uStack_8a = (undefined1)((uint3)uStack_16c >> 0x10);
              if (cStack_171 < '\0') {
                operator_delete(pvStack_188);
              }
            }
            iVar9 = (int)local_b0;
            if ((int)local_b0 != 0) {
              uVar24 = FUN_004249b0();
              if ((uVar24 & 1) == 0) {
                local_190 = (ulong *******)0x1e6abc;
                pvStack_188 = (void *)0x17a3;
                puStack_180 = &uStack_1a1;
                uVar24 = *(ulong *)(lVar28 + 0x10);
                lVar27 = *(long *)(lVar28 + 8);
                if (-1 < (char)*(byte *)(lVar28 + 0x1f)) {
                  uVar24 = (ulong)*(byte *)(lVar28 + 0x1f);
                  lVar27 = lVar28 + 8;
                }
                FUN_005ff514(local_1f8,local_1c0,
                             "Failed to apply the description for m= section with mid=\'",0x39,
                             lVar27,uVar24);
                puVar12 = (undefined8 *)FUN_00547cac(local_1f8,&DAT_001e9687,3);
                uStack_1d8 = puVar12[1];
                local_1e0 = (void *)*puVar12;
                local_1d0 = puVar12[2];
                puVar12[1] = 0;
                puVar12[2] = 0;
                *puVar12 = 0;
                pcVar16 = (char *)FUN_005ecd5c(&local_b0);
                if (pcVar16 == (char *)0x0) goto LAB_00c3553c;
                sVar17 = strlen(pcVar16);
                puVar12 = (undefined8 *)FUN_00547cac(&local_1e0,pcVar16,sVar17);
                local_1a0 = local_1c0;
                local_1c0._8_8_ = puVar12[1];
                local_1c0._0_8_ = *puVar12;
                local_1b0 = puVar12[2];
                puVar12[1] = 0;
                puVar12[2] = 0;
                *puVar12 = 0;
                pppppppuStack_198 = (ulong *******)&local_190;
                auVar29 = FUN_005eceec(3);
                local_208 = auVar29;
                FUN_00623bb0(&DAT_00255ab6,local_190,(ulong)pvStack_188 & 0xffffffff,local_1a0,
                             &DAT_001a2df6,local_208,&DAT_001ca519);
                if (local_1b0 < 0) {
                  operator_delete((void *)local_1c0._0_8_);
                }
                if (local_1d0 < 0) {
                  operator_delete(local_1e0);
                }
                if (cStack_1e1 < '\0') {
                  operator_delete(local_1f8[0]);
                }
              }
              bVar6 = *(byte *)(lVar28 + 0x1f);
              uVar24 = *(ulong *)(lVar28 + 0x10);
              if (-1 < (char)bVar6) {
                uVar24 = (ulong)bVar6;
              }
              lVar28 = *(long *)(lVar28 + 8);
              if (-1 < (char)bVar6) {
                lVar28 = lVar19;
              }
              FUN_005ff514(&local_1e0,&local_190,
                           "Failed to apply the description for m= section with mid=\'",0x39,lVar28,
                           uVar24);
              puVar12 = (undefined8 *)FUN_00547cac(&local_1e0,&DAT_001e9687,3);
              local_1c0._8_8_ = puVar12[1];
              local_1c0._0_8_ = *puVar12;
              local_1b0 = puVar12[2];
              puVar12[1] = 0;
              puVar12[2] = 0;
              *puVar12 = 0;
              pcVar16 = (char *)FUN_005ecd5c(&local_b0);
              if (pcVar16 == (char *)0x0) {
LAB_00c3553c:
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/string:3112: libc++ Hardening assertion __s != nullptr failed: string::append received nullptr\n"
                          );
              }
              sVar17 = strlen(pcVar16);
              puVar12 = (undefined8 *)FUN_00547cac(local_1c0,pcVar16,sVar17);
              pvStack_188 = (void *)puVar12[1];
              local_190 = (ulong *******)*puVar12;
              puStack_180 = (undefined1 *)puVar12[2];
              puVar12[1] = 0;
              puVar12[2] = 0;
              *puVar12 = 0;
              pvVar4 = pvStack_188;
              pppppppuVar21 = local_190;
              if (-1 < (long)puStack_180) {
                pvVar4 = (void *)((ulong)puStack_180 >> 0x38);
                pppppppuVar21 = (ulong *******)&local_190;
              }
              FUN_00b0092c(param_1,3,pppppppuVar21,pvVar4);
              if ((long)puStack_180 < 0) {
                operator_delete(local_190);
              }
              if (local_1b0 < 0) {
                operator_delete((void *)local_1c0._0_8_);
              }
              if (local_1d0 < 0) {
                operator_delete(local_1e0);
              }
            }
            FUN_00c3e140(&local_160);
            if (local_e0 != (ulong *******)0x0) {
              uVar13 = (ulong)((long)pppppppuStack_d8 + (-4 - ((long)pppppppuStack_d8 << 0x3e))) >>
                       2;
              uVar24 = (ulong)(((long)local_e0 - (long)pppppppuStack_d8 << 0x3e) -
                              ((long)local_e0 - (long)pppppppuStack_d8)) >> 2;
              if (uVar13 <= uVar24) {
                uVar24 = uVar13;
              }
              pppppppuVar21 = pppppppuStack_d8;
              if ((1 < uVar24) &&
                 ((((int)local_e0 - (int)pppppppuStack_d8 | -(int)pppppppuStack_d8) & 3U) == 0)) {
                uVar24 = uVar24 & 0x3ffffffffffffffe;
                pppppppuVar21 = (ulong *******)((long)pppppppuStack_d8 + uVar24 * -4);
                do {
                  uVar24 = uVar24 - 2;
                } while (uVar24 != 0);
              }
              while (pppppppuVar21 != local_e0) {
                pppppppuVar21 = (ulong *******)((long)pppppppuVar21 + -4);
                if (pppppppuVar21 == (ulong *******)0x0) {
LAB_00c35280:
                    /* WARNING: Subroutine does not return */
                  std::__Cr::__libcpp_verbose_abort
                            ("%s",
                             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                            );
                }
              }
              pppppppuStack_d8 = local_e0;
              operator_delete(local_e0);
            }
            if (iVar9 != 0) goto LAB_00c35260;
          }
          else {
            puVar12 = (undefined8 *)FUN_00b16dbc(ppppppuVar11);
            bVar6 = *(byte *)(lVar28 + 0x1f);
            bVar7 = *(byte *)((long)puVar12 + 0x17);
            sVar17 = *(size_t *)(lVar28 + 0x10);
            if (-1 < (char)bVar6) {
              sVar17 = (ulong)bVar6;
            }
            sVar1 = puVar12[1];
            if (-1 < (char)bVar7) {
              sVar1 = (ulong)bVar7;
            }
            if (sVar17 == sVar1) {
              puVar2 = (undefined8 *)*(void **)(lVar28 + 8);
              if (-1 < (char)bVar6) {
                puVar2 = (undefined8 *)(lVar28 + 8);
              }
              puVar3 = (undefined8 *)*puVar12;
              if (-1 < (char)bVar7) {
                puVar3 = puVar12;
              }
              iVar9 = memcmp(puVar2,puVar3,sVar17);
              if (iVar9 == 0) goto LAB_00c34b40;
            }
          }
LAB_00c349b8:
          lVar28 = *plVar18;
          uVar10 = uVar10 + 1;
        } while (uVar10 < (ulong)((plVar18[1] - lVar28 >> 3) * -0x3333333333333333));
      }
    }
    if (param_4 == 2) {
      FUN_00c3c7d8(param_2 + 0x50);
      FUN_00c3b9e8(param_2 + 0x3b0);
    }
    FUN_005ecd48(param_1);
LAB_00c35260:
    local_160 = (ulong *******)&local_c8;
    FUN_00c39568(&local_160,local_c0);
  }
  else {
    *param_1 = iVar9;
    uVar24 = *puVar25;
    uVar10 = puVar25[2];
    *(ulong *)(param_1 + 4) = puVar25[1];
    *(ulong *)(param_1 + 2) = uVar24;
    *(ulong *)(param_1 + 6) = uVar10;
    local_90._3_1_ = (undefined1)((uint)iVar8 >> 0x18);
    param_1[8] = iVar8;
    *(uint *)((long)param_1 + 0x23) =
         CONCAT13(uStack_8a,CONCAT12(uStack_8b,CONCAT11(uStack_8c,local_90._3_1_)));
  }
  if ((local_88 != (char **)0x0) && (**local_88 != '\0')) {
    FUN_0066d348(0x45,*local_88,local_88[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 00c35580  FUN_00c35580 =====

void FUN_00c35580(undefined8 *param_1,long param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long local_98;
  undefined4 *puStack_90;
  undefined8 *local_88;
  undefined8 *puStack_80;
  char **local_78;
  char *local_70;
  char *pcStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  long *plStack_48;
  undefined1 uStack_25;
  undefined4 local_24;
  
  local_60 = param_5;
  uStack_58 = param_4;
  local_24 = param_3;
  if (((DAT_00dbafd8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00dbafd8), iVar1 != 0)) {
    DAT_00dbafd0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbafd8);
  }
  local_78 = (char **)0x0;
  pcStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbafd0 != '\0') {
    FUN_0066d348(0x42,DAT_00dbafd0,"JsepTransportController::SetRemoteDescription",0,0,0,0,0,0);
    local_70 = DAT_00dbafd0;
    pcStack_68 = "JsepTransportController::SetRemoteDescription";
    local_78 = &local_70;
  }
  puStack_90 = &local_24;
  local_88 = &uStack_58;
  plVar2 = *(long **)(param_2 + 0x30);
  puStack_80 = &local_60;
  plStack_48 = &local_98;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar3 = *plVar2;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined4 *)param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)((long)param_1 + 0x26) = 0;
  *(undefined8 *)((long)param_1 + 0x1d) = 0;
  local_98 = param_2;
  local_50 = param_1;
  (**(code **)(lVar3 + 0x60))(plVar2,&local_50,FUN_00c39a80,&uStack_25);
  if ((local_78 != (char **)0x0) && (**local_78 != '\0')) {
    FUN_0066d348(0x45,*local_78,local_78[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 00c356f8  FUN_00c356f8 =====

long FUN_00c356f8(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00c3c3a8(param_1 + 0x50);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  return lVar1;
}


// ===== 00c35720  FUN_00c35720 =====

long FUN_00c35720(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00c3c3a8(param_1 + 0x50);
  lVar2 = lVar1;
  if (lVar1 != 0) {
    lVar2 = 0;
    if (*(long *)(lVar1 + 0x30) != 0) {
      lVar2 = *(long *)(lVar1 + 0x30) + 8;
    }
  }
  return lVar2;
}


// ===== 00c35754  FUN_00c35754 =====

long FUN_00c35754(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00c3c34c(param_1 + 0x50);
  if (lVar1 != 0) {
    lVar1 = *(long *)(*(long *)(lVar1 + 0x20) + 0xe0);
  }
  return lVar1;
}


// ===== 00c35780  FUN_00c35780 =====

void FUN_00c35780(long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00c3c34c(param_2 + 0x50);
  if (lVar1 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = *(undefined8 **)(lVar1 + 0x28);
    *param_1 = (long)puVar2;
    if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c357c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)();
      return;
    }
  }
  return;
}


// ===== 00c357d8  FUN_00c357d8 =====

void FUN_00c357d8(long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00c3c3a8(param_2 + 0x50);
  if (lVar1 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = *(undefined8 **)(lVar1 + 0x30);
    *param_1 = (long)puVar2;
    if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c35818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)();
      return;
    }
  }
  return;
}


// ===== 00c35830  FUN_00c35830 =====

void FUN_00c35830(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 **local_18;
  
  uVar8 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  uVar10 = param_2[1];
  uVar9 = *param_2;
  uVar12 = param_2[3];
  uVar11 = param_2[2];
  local_18 = &local_48;
  local_40 = (undefined8 *)0x0;
  *(undefined8 *)(param_1 + 0x2e8) = param_2[5];
  *(undefined8 *)(param_1 + 0x2e0) = uVar8;
  *(undefined8 *)(param_1 + 0x2f8) = uVar7;
  *(undefined8 *)(param_1 + 0x2f0) = uVar6;
  *(undefined8 *)(param_1 + 0x2c8) = uVar10;
  *(undefined8 *)(param_1 + 0x2c0) = uVar9;
  *(undefined8 *)(param_1 + 0x2d8) = uVar12;
  *(undefined8 *)(param_1 + 0x2d0) = uVar11;
  uVar8 = param_2[0xc];
  uVar7 = param_2[0xf];
  uVar6 = param_2[0xe];
  local_48 = (undefined8 *)0x0;
  uVar10 = param_2[9];
  uVar9 = param_2[8];
  uVar12 = param_2[0xb];
  uVar11 = param_2[10];
  local_38 = 0;
  *(undefined8 *)(param_1 + 0x328) = param_2[0xd];
  *(undefined8 *)(param_1 + 800) = uVar8;
  *(undefined8 *)(param_1 + 0x338) = uVar7;
  *(undefined8 *)(param_1 + 0x330) = uVar6;
  *(undefined8 *)(param_1 + 0x308) = uVar10;
  *(undefined8 *)(param_1 + 0x300) = uVar9;
  *(undefined8 *)(param_1 + 0x318) = uVar12;
  *(undefined8 *)(param_1 + 0x310) = uVar11;
  uVar8 = param_2[0x14];
  uVar7 = param_2[0x17];
  uVar6 = param_2[0x16];
  uVar10 = param_2[0x11];
  uVar9 = param_2[0x10];
  uVar12 = param_2[0x13];
  uVar11 = param_2[0x12];
  *(undefined8 *)(param_1 + 0x368) = param_2[0x15];
  *(undefined8 *)(param_1 + 0x360) = uVar8;
  *(undefined8 *)(param_1 + 0x378) = uVar7;
  *(undefined8 *)(param_1 + 0x370) = uVar6;
  *(undefined8 *)(param_1 + 0x348) = uVar10;
  *(undefined8 *)(param_1 + 0x340) = uVar9;
  *(undefined8 *)(param_1 + 0x358) = uVar12;
  *(undefined8 *)(param_1 + 0x350) = uVar11;
  uVar6 = *(undefined8 *)((long)param_2 + 0xcd);
  uVar8 = param_2[0x19];
  uVar7 = param_2[0x18];
  *(undefined8 *)(param_1 + 0x395) = *(undefined8 *)((long)param_2 + 0xd5);
  *(undefined8 *)(param_1 + 0x38d) = uVar6;
  *(undefined8 *)(param_1 + 0x388) = uVar8;
  *(undefined8 *)(param_1 + 0x380) = uVar7;
  FUN_00c3c004(param_1 + 0x50,&local_18,FUN_00c3a134);
  puVar1 = local_40;
  for (puVar3 = local_48; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    plVar2 = (long *)(**(code **)(*(long *)*puVar3 + 0xd0))();
    (**(code **)(*plVar2 + 0x90))(plVar2,param_1 + 0x2c0);
  }
  if (local_48 != (undefined8 *)0x0) {
    uVar5 = (ulong)((long)local_40 + (-8 - ((long)local_40 << 0x3d))) >> 3;
    uVar4 = (ulong)(((long)local_48 - (long)local_40 << 0x3d) - ((long)local_48 - (long)local_40))
            >> 3;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    puVar3 = local_40;
    if ((1 < uVar4) && ((((int)local_48 - (int)local_40 | -(int)local_40) & 7U) == 0)) {
      uVar4 = uVar4 & 0x1ffffffffffffffe;
      puVar3 = local_40 + -uVar4;
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    while (puVar3 != local_48) {
      puVar3 = puVar3 + -1;
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
  return;
}


// ===== 00c35994  FUN_00c35994 =====

void FUN_00c35994(long param_1)

{
  undefined1 uStack_11;
  
  FUN_00c3c004(param_1 + 0x50,&uStack_11,FUN_00c39b60);
  return;
}


// ===== 00c359c8  FUN_00c359c8 =====

undefined1 FUN_00c359c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_49;
  long local_48;
  undefined8 *puStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 *local_28;
  long *plStack_20;
  undefined1 local_14 [4];
  
  puStack_40 = &local_38;
  plStack_20 = &local_48;
  local_28 = local_14;
  local_14[0] = 0xaa;
  local_48 = param_1;
  local_38 = param_2;
  uStack_30 = param_3;
  (**(code **)(**(long **)(param_1 + 0x30) + 0x60))
            (*(long **)(param_1 + 0x30),&local_28,FUN_00c39b6c,&uStack_49);
  return local_14[0];
}


// ===== 00c35a2c  FUN_00c35a2c =====

ulong FUN_00c35a2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 uStack_61;
  long local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulong *local_40;
  long *plStack_38;
  ulong local_18;
  
  local_50 = param_2;
  uStack_48 = param_3;
  uVar1 = FUN_007e18fc(*(undefined8 *)(param_1 + 0x30));
  if ((uVar1 & 1) == 0) {
    puStack_58 = &local_50;
    local_40 = &local_18;
    local_18 = 0xaaaaaa00aaaaaa00;
    plStack_38 = &local_60;
    local_60 = param_1;
    (**(code **)(**(long **)(param_1 + 0x30) + 0x60))
              (*(long **)(param_1 + 0x30),&local_40,FUN_00c39bc0,&uStack_61);
  }
  else {
    local_18 = FUN_00c3c3a8(param_1 + 0x50,param_2,param_3);
    if (local_18 != 0) {
      local_18 = FUN_00c40560();
    }
  }
  return local_18 & 0xffffffffff;
}


// ===== 00c35adc  FUN_00c35adc =====

undefined1 FUN_00c35adc(long param_1,undefined8 param_2)

{
  undefined1 uStack_39;
  long local_38;
  undefined8 uStack_30;
  undefined1 *local_28;
  long *plStack_20;
  undefined1 local_14 [4];
  
  local_28 = local_14;
  plStack_20 = &local_38;
  local_14[0] = 0xaa;
  local_38 = param_1;
  uStack_30 = param_2;
  (**(code **)(**(long **)(param_1 + 0x30) + 0x60))
            (*(long **)(param_1 + 0x30),&local_28,FUN_00c39c80,&uStack_39);
  return local_14[0];
}


// ===== 00c35b38  FUN_00c35b38 =====

undefined8 FUN_00c35b38(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  void *pvVar8;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if ((param_1[0x75] == 0) && (lVar7 = *param_2, lVar7 != 0)) {
    FUN_00d0f740(1,lVar7);
    pvVar8 = (void *)param_1[0x75];
    if ((pvVar8 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar8), iVar2 == 1)) {
      FUN_00833e18(pvVar8);
      operator_delete(pvVar8);
    }
    param_1[0x75] = lVar7;
    local_50 = param_1;
    FUN_00c3c004(param_1 + 10,&local_50,FUN_00c39cbc);
    local_50 = (undefined8 *)0x0;
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    local_38 = (undefined1 *)&local_50;
    FUN_00c3c004(param_1 + 10,&local_38,FUN_00c3a134);
    puVar1 = local_48;
    for (puVar4 = local_50; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      (**(code **)(*(long *)*puVar4 + 0xa8))((long *)*puVar4,param_1 + 0x75);
    }
    if (local_50 != (undefined8 *)0x0) {
      uVar6 = (ulong)((long)local_48 + (-8 - ((long)local_48 << 0x3d))) >> 3;
      uVar5 = (ulong)(((long)local_50 - (long)local_48 << 0x3d) - ((long)local_50 - (long)local_48))
              >> 3;
      if (uVar6 <= uVar5) {
        uVar5 = uVar6;
      }
      puVar4 = local_48;
      if ((1 < uVar5) && ((((int)local_50 - (int)local_48 | -(int)local_48) & 7U) == 0)) {
        uVar5 = uVar5 & 0x1ffffffffffffffe;
        puVar4 = local_48 + -uVar5;
        do {
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
      while (puVar4 != local_50) {
        puVar4 = puVar4 + -1;
        if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      local_48 = local_50;
      operator_delete(local_50);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


// ===== 00c35cc4  FUN_00c35cc4 =====

void FUN_00c35cc4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00c3c1a4(param_2 + 0x50);
  if (lVar1 == 0) {
    *param_1 = 0;
  }
  else {
    lVar1 = *(long *)(lVar1 + 8);
    *param_1 = lVar1;
    if (lVar1 != 0) {
      FUN_00d0f740(1);
    }
  }
  return;
}


// ===== 00c35d10  FUN_00c35d10 =====

undefined8 FUN_00c35d10(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_00c3c1a4(param_1 + 0x50);
  if ((lVar1 != 0) && (plVar2 = *(long **)(*(long *)(lVar1 + 0x20) + 0xe0), plVar2 != (long *)0x0))
  {
                    /* WARNING: Could not recover jumptable at 0x00c35d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar2 + 0xb0))();
    return uVar3;
  }
  return 0;
}


// ===== 00c35d58  FUN_00c35d58 =====

void FUN_00c35d58(long param_1)

{
  undefined1 uStack_19;
  long local_18;
  
  local_18 = param_1;
  (**(code **)(**(long **)(param_1 + 0x30) + 0x60))
            (*(long **)(param_1 + 0x30),&local_18,FUN_00c39d34,&uStack_19);
  return;
}


// ===== 00c35da0  FUN_00c35da0 =====

void FUN_00c35da0(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined1 *local_28;
  
  local_28 = (undefined1 *)&local_40;
  local_40 = (undefined8 *)0x0;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_00c3c004(param_1 + 0x50,&local_28,FUN_00c3a134);
  puVar1 = local_38;
  for (puVar3 = local_40; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    plVar2 = (long *)(**(code **)(*(long *)*puVar3 + 0xd0))();
    (**(code **)(*plVar2 + 0xa0))();
  }
  if (local_40 != (undefined8 *)0x0) {
    uVar5 = (ulong)((long)local_38 + (-8 - ((long)local_38 << 0x3d))) >> 3;
    uVar4 = (ulong)(((long)local_40 - (long)local_38 << 0x3d) - ((long)local_40 - (long)local_38))
            >> 3;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    puVar3 = local_38;
    if ((1 < uVar4) && ((((int)local_40 - (int)local_38 | -(int)local_38) & 7U) == 0)) {
      uVar4 = uVar4 & 0x1ffffffffffffffe;
      puVar3 = local_38 + -uVar4;
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    while (puVar3 != local_40) {
      puVar3 = puVar3 + -1;
      if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    local_38 = local_40;
    operator_delete(local_40);
  }
  return;
}


// ===== 00c35eb0  FUN_00c35eb0 =====

void FUN_00c35eb0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = FUN_00c3c278(param_2 + 0x50);
  if (lVar1 != 0) {
    FUN_00c40218(param_1,lVar1,param_5);
    return;
  }
  uVar2 = FUN_004022fc();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../pc/jsep_transport_controller.cc",0xb62,
                 "Not adding candidate because the JsepTransport doesn\'t exist. Ignore it.");
  }
  FUN_005ecd48(param_1);
  return;
}


// ===== 00c35f28  FUN_00c35f28 =====

undefined1 FUN_00c35f28(long param_1,undefined8 param_2)

{
  undefined1 uStack_41;
  long local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined1 *local_28;
  long *plStack_20;
  undefined1 local_14 [4];
  
  local_38 = &local_30;
  local_28 = local_14;
  plStack_20 = &local_40;
  local_14[0] = 0xaa;
  local_40 = param_1;
  local_30 = param_2;
  (**(code **)(**(long **)(param_1 + 0x30) + 0x60))
            (*(long **)(param_1 + 0x30),&local_28,FUN_00c39d40,&uStack_41);
  return local_14[0];
}


// ===== 00c35f8c  FUN_00c35f8c =====

/* WARNING: Removing unreachable block (ram,0x00c360a8) */
/* WARNING: Removing unreachable block (ram,0x00c36150) */
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00c35f8c(long param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 *******pppppppuVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  int local_78;
  undefined4 uStack_74;
  void *local_70;
  char cStack_61;
  char cStack_59;
  undefined8 *******local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_005478d8(&local_50,*param_2,param_2[1]);
  }
  else {
    puStack_48 = (undefined1 *)param_2[1];
    local_50 = (undefined8 *******)*param_2;
    local_40 = (undefined1 *)param_2[2];
  }
  FUN_00be0494(&local_78,param_2 + 4);
  if (local_78 == 0) {
    puVar1 = puStack_48;
    if (((ulong)local_40 & 0x8000000000000000) == 0) {
      puVar1 = (undefined1 *)((ulong)local_40 >> 0x38);
    }
    if (cStack_59 < '\0') {
      operator_delete(local_70);
    }
    if (puVar1 != (undefined1 *)0x0) {
      puVar1 = puStack_48;
      pppppppuVar3 = local_50;
      if (-1 < (long)local_40) {
        puVar1 = (undefined1 *)((ulong)local_40 >> 0x38);
        pppppppuVar3 = &local_50;
      }
      lVar4 = FUN_00c3c34c(param_1 + 0x50,pppppppuVar3,puVar1);
      if (lVar4 == 0) {
        uVar6 = FUN_004022fc();
        if ((uVar6 & 1) != 0) {
          return 0;
        }
        FUN_00623bb0(&DAT_001f4e90,"../../pc/jsep_transport_controller.cc",0xc2a,
                     "No Transport for mid=",&local_50);
        return 0;
      }
      lVar2 = 0xe0;
      if (*(int *)(param_2 + 7) != DAT_00254798) {
        lVar2 = 0xe8;
      }
      plVar5 = *(long **)(*(long *)(lVar4 + 0x20) + lVar2);
      if (plVar5 != (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar5 + 0xd0))();
        (**(code **)(*plVar5 + 0xb0))(plVar5,param_2 + 4);
      }
      return 1;
    }
  }
  else if (cStack_59 < '\0') {
    operator_delete(local_70);
  }
  uVar6 = FUN_004249b0();
  if ((uVar6 & 1) == 0) {
    FUN_00aff5b4(&local_78,param_2 + 4,1);
    FUN_00623bb0(&DAT_001f4e90,"../../pc/jsep_transport_controller.cc",0xbfb,
                 "Candidate invalid or missing sdp_mid: ",&local_78);
    if (cStack_61 < '\0') {
      operator_delete((void *)CONCAT44(uStack_74,local_78));
    }
  }
  return 0;
}


// ===== 00c3617c  FUN_00c3617c =====

void FUN_00c3617c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = FUN_00c3c1a4(param_1 + 0x50);
  if (lVar1 != 0) {
    FUN_00c405b0(lVar1,param_4);
    return;
  }
  return;
}


// ===== 00c361c0  FUN_00c361c0 =====

void FUN_00c361c0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 uStack_29;
  long local_28;
  undefined8 *puStack_20;
  long *local_18;
  
  plVar1 = *(long **)(param_2 + 0x30);
  local_18 = &local_28;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar2 = *plVar1;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined4 *)param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)((long)param_1 + 0x26) = 0;
  *(undefined8 *)((long)param_1 + 0x1d) = 0;
  local_28 = param_2;
  puStack_20 = param_1;
  (**(code **)(lVar2 + 0x60))(plVar1,&puStack_20,FUN_00c39d80,&uStack_29);
  return;
}


// ===== 00c3622c  FUN_00c3622c =====

void FUN_00c3622c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined1 local_50 [16];
  undefined1 uStack_39;
  char *local_38;
  ulong local_30;
  undefined1 *local_28;
  
  FUN_00c3b8a8(param_2 + 0x3b0);
  uVar1 = FUN_00c3c5ac(param_2 + 0x50);
  if ((uVar1 & 1) != 0) {
    FUN_005ecd48(param_1);
    return;
  }
  uVar1 = FUN_004249b0();
  if ((uVar1 & 1) == 0) {
    local_38 = "../../pc/jsep_transport_controller.cc";
    local_30 = 0xd4b;
    local_28 = &uStack_39;
    local_50 = FUN_005eceec(10);
    FUN_00623bb0(&DAT_00255ab0,local_38,local_30 & 0xffffffff,"Failed to roll back transport state."
                 ,&DAT_001a2df6,local_50,&DAT_001ca519);
  }
  FUN_00b0092c(param_1,10,"Failed to roll back transport state.",0x24);
  return;
}


// ===== 00c36300  FUN_00c36300 =====

/* WARNING: Removing unreachable block (ram,0x00c36478) */

void FUN_00c36300(undefined8 *param_1,undefined8 *param_2,undefined8 ***param_3,ulong param_4,
                 ulong param_5)

{
  ulong uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 ***__dest;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *local_160 [2];
  code *local_150;
  code *pcStack_148;
  undefined8 *local_140 [2];
  code *local_130;
  code *pcStack_128;
  undefined8 *local_120 [2];
  code *local_110;
  code *pcStack_108;
  undefined8 *local_100 [2];
  code *local_f0;
  code *pcStack_e8;
  long *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 **local_88;
  ulong uStack_80;
  undefined8 local_78;
  
  plVar7 = (long *)*param_2;
  puVar2 = (undefined4 *)PTR_DAT_00d52640;
  if ((param_5 & 1) == 0) {
    puVar2 = (undefined4 *)PTR_DAT_00d52638;
  }
  if (plVar7 != (long *)0x0) {
    FUN_00d0f740(1,plVar7 + 1);
  }
  uVar10 = param_2[8];
  uVar9 = param_2[7];
  uVar8 = param_2[9];
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  if (0x7ffffffffffffff6 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  plVar6 = (long *)param_2[0x25];
  if (param_4 < 0x17) {
    local_78 = CONCAT17((char)param_4,(undefined7)local_78);
    __dest = &local_88;
  }
  else {
    uVar1 = (param_4 & 0x7ffffffffffffff8) + 8;
    uVar3 = 0x19;
    if (uVar1 != 0x18) {
      uVar3 = uVar1;
    }
    __dest = (undefined8 ***)operator_new(uVar3);
    local_78 = uVar3 | 0x8000000000000000;
    local_88 = __dest;
    uStack_80 = param_4;
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
  uVar4 = *puVar2;
  memmove(__dest,param_3,param_4);
  uStack_c8 = param_2[2];
  local_d0 = param_2[1];
  uStack_b8 = param_2[4];
  local_c0 = param_2[3];
  *(undefined1 *)((long)__dest + param_4) = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_d8 = plVar7;
  local_b0 = uVar9;
  uStack_a8 = uVar10;
  local_a0 = uVar8;
  (**(code **)(*plVar6 + 0x10))(param_1,plVar6,&local_88,uVar4,&local_d8);
  plVar7 = local_d8;
  if ((local_d8 != (long *)0x0) && (iVar5 = FUN_00d0f7a0(0xffffffff,local_d8 + 1), iVar5 == 1)) {
    (**(code **)(*plVar7 + 8))(plVar7);
  }
  plVar7 = (long *)(**(code **)(*(long *)*param_1 + 0x20))();
  local_f0 = FUN_004473ec;
  pcStack_e8 = FUN_00c39e4c;
  local_100[0] = param_2;
  FUN_00be0d04(plVar7,param_2,local_100);
  (*local_f0)(0,local_100,local_100);
  local_110 = FUN_004473ec;
  pcStack_108 = FUN_00c39e58;
  local_120[0] = param_2;
  FUN_00be0d9c(plVar7,param_2,local_120);
  (*local_110)(0,local_120,local_120);
  (*(code *)plVar7[0x2c])(0,plVar7 + 0x2a,plVar7 + 0x2a);
  plVar7[0x2a] = (long)param_2;
  plVar7[0x2c] = (long)FUN_004473ec;
  plVar7[0x2d] = (long)FUN_00c39e64;
  (*(code *)plVar7[0x30])(0,plVar7 + 0x2e,plVar7 + 0x2e);
  plVar7[0x30] = (long)FUN_004473ec;
  plVar7[0x31] = (long)FUN_00c39e7c;
  plVar7[0x2e] = (long)param_2;
  local_130 = FUN_004473ec;
  pcStack_128 = FUN_00c39e90;
  local_140[0] = param_2;
  FUN_00be0e34(plVar7,param_2,local_140);
  (*local_130)(0,local_140,local_140);
  local_150 = FUN_004473ec;
  pcStack_148 = FUN_00c39f0c;
  local_160[0] = param_2;
  FUN_00be0ecc(plVar7,param_2,local_160);
  (*local_150)(0,local_160,local_160);
  (*(code *)plVar7[0x34])(0,plVar7 + 0x32,plVar7 + 0x32);
  plVar7[0x32] = (long)param_2;
  plVar7[0x34] = (long)FUN_004473ec;
  plVar7[0x35] = (long)FUN_00c39f9c;
  (**(code **)(*plVar7 + 0x70))(plVar7,*(undefined4 *)(param_2 + 0x74));
  (**(code **)(*plVar7 + 0x90))(plVar7,param_2 + 0x58);
  return;
}


// ===== 00c36654  FUN_00c36654 =====

long * FUN_00c36654(long param_1,long param_2,undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long local_b0 [2];
  code *local_a0;
  code *pcStack_98;
  long local_90 [2];
  code *local_80;
  code *pcStack_78;
  long *local_70;
  long *local_68;
  long *local_60;
  undefined8 local_58 [2];
  code *local_48;
  undefined *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *(ulong *)(param_2 + 0x10);
  plVar4 = (long *)*(long *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x1f)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x1f);
    plVar4 = (long *)(param_2 + 8);
  }
  local_68 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00c36300(&local_68,param_1,plVar4,uVar1,param_3);
  plVar4 = local_68;
  plVar3 = *(long **)(param_1 + 0x130);
  if (plVar3 == (long *)0x0) {
    plVar4 = (long *)operator_new(800);
    local_60 = local_68;
    local_68 = (long *)0x0;
    local_48 = FUN_00c39fb0;
    local_40 = &DAT_001fbc50;
    FUN_00c7249c(plVar4,param_1,&local_60,param_1 + 0xf8,*(undefined4 *)(param_1 + 0xf4),local_58);
    if (*(code **)(local_40 + 8) != (code *)0x0) {
      (**(code **)(local_40 + 8))(local_58[0]);
    }
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 8))();
    }
  }
  else {
    local_68 = (long *)0x0;
    local_70 = plVar4;
    plVar4 = (long *)(**(code **)(*plVar3 + 0x10))
                               (plVar3,&local_70,param_1 + 0xf8,*(undefined4 *)(param_1 + 0xf4));
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 8))(local_70);
    }
  }
  if (*(long *)(param_1 + 0x3a8) != 0) {
    (**(code **)(*plVar4 + 0xa8))(plVar4,param_1 + 0x3a8);
  }
  local_80 = FUN_004473ec;
  pcStack_78 = FUN_00c39fc0;
  local_90[0] = param_1;
  FUN_00bc8598(plVar4,param_1,local_90);
  (*local_80)(0,local_90,local_90);
  local_a0 = FUN_004473ec;
  pcStack_98 = FUN_00c39fcc;
  local_b0[0] = param_1;
  FUN_00bc8758(plVar4,param_1,local_b0);
  (*local_a0)(0,local_b0,local_b0);
  FUN_007b5a0c(plVar4 + 0x1e,param_1,param_1,FUN_00c39fd8);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 8))();
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar4;
}


// ===== 00c36848  FUN_00c36848 =====

long * FUN_00c36848(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 in_x3;
  long in_x4;
  
  plVar2 = (long *)operator_new(0x200);
  *plVar2 = (long)&PTR_FUN_00d4d050;
  FUN_007b5d10(plVar2 + 1);
  FUN_007b5d10(plVar2 + 5);
  plVar2[0xc] = (long)FUN_004473ec;
  plVar2[0xd] = (long)FUN_00c3a08c;
  FUN_007b5d10(plVar2 + 0xe);
  FUN_007b5d10(plVar2 + 0x12);
  FUN_007b5d10(plVar2 + 0x16);
  FUN_007ebca0(plVar2 + 0x1a);
  puVar1 = PTR_DAT_00d52ee8;
  *(bool *)(plVar2 + 0x1b) = in_x4 == 0;
  *(undefined4 *)(plVar2 + 0x20) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[0x1d] = 0;
  plVar2[0x1c] = 0;
  plVar2[0x1f] = 0;
  plVar2[0x1e] = 0;
  FUN_0089954c(plVar2 + 0x21,1);
  FUN_007d87d8(plVar2 + 0x3b);
  *(undefined1 *)((long)plVar2 + 0x1ef) = 0;
  FUN_007ebca0(plVar2 + 0x3e);
  FUN_00c45904(plVar2,in_x3);
  if (in_x4 != 0) {
    FUN_00c457c0(plVar2,in_x4);
  }
  return plVar2;
}


// ===== 00c36938  FUN_00c36938 =====

void * FUN_00c36938(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long param_5)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  long *local_70;
  code *pcStack_68;
  code *local_60;
  code *pcStack_58;
  
  if ((char)param_1[0x24] == '\x01') {
    uVar1 = FUN_00417e08();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/jsep_transport_controller.cc",0x1211,
                   "Creating UnencryptedRtpTransport, because encryption is disabled.");
    }
    pvVar2 = (void *)FUN_00c36848();
  }
  else {
    lVar3 = param_1[0x27];
    uVar1 = FUN_00417e08();
    if (lVar3 == 0) {
      if ((uVar1 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../pc/jsep_transport_controller.cc",0x1269,
                     "Creating DtlsSrtpTransport.");
      }
      lVar3 = param_1[1];
      pvVar2 = operator_new(0x2f0);
      FUN_00c4237c(pvVar2,param_5 == 0,lVar3);
      if (*(char *)((long)param_1 + 0x121) == '\x01') {
        FUN_00c45140(pvVar2);
      }
      FUN_00c4263c(pvVar2,param_4,param_5);
      local_60 = FUN_004473ec;
      pcStack_58 = FUN_00c3a094;
      local_70 = param_1;
      FUN_00c43770(pvVar2,&local_70);
      (*local_60)(0,&local_70,&local_70);
    }
    else {
      if ((uVar1 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../pc/jsep_transport_controller.cc",0x1241,
                     "Creating RtpTransport from injected factory.");
      }
      pvVar2 = (void *)(**(code **)(*(long *)param_1[0x27] + 0x10))
                                 ((long *)param_1[0x27],param_2,param_3,param_4,param_5);
    }
  }
  local_70 = (long *)operator_new(0x20);
  *local_70 = (long)param_1;
  local_70[2] = (long)FUN_004473ec;
  local_70[3] = (long)FUN_00c3a0a0;
  pcStack_68 = FUN_00c394bc;
  local_60 = FUN_00c39528;
  FUN_007b5b08((long)pvVar2 + 0x28,param_1,&local_70);
  (**(code **)((long)pvVar2 + 0x60))(0,(long)pvVar2 + 0x50,(long)pvVar2 + 0x50);
  *(long **)((long)pvVar2 + 0x50) = param_1;
  *(code **)((long)pvVar2 + 0x60) = FUN_004473ec;
  *(code **)((long)pvVar2 + 0x68) = FUN_00c3a120;
  return pvVar2;
}


// ===== 00c36b38  FUN_00c36b38 =====

/* WARNING: Removing unreachable block (ram,0x00c36fdc) */
/* WARNING: Removing unreachable block (ram,0x00c36cd0) */
/* WARNING: Removing unreachable block (ram,0x00c36fd8) */
/* WARNING: Removing unreachable block (ram,0x00c36ff4) */
/* WARNING: Removing unreachable block (ram,0x00c36ef0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00c36b38(undefined8 param_1,long param_2,ulong param_3,int param_4,long *param_5,
                 long *param_6)

{
  undefined8 ******ppppppuVar1;
  ulong ******__n;
  undefined8 *******pppppppuVar2;
  undefined8 ******__n_00;
  ulong *******pppppppuVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *__s1;
  ulong ******ppppppuVar6;
  bool bVar7;
  ulong *puVar8;
  undefined *puVar9;
  ulong *puVar10;
  int iVar11;
  size_t sVar12;
  ulong *******pppppppuVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  char *pcVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong *****pppppuVar20;
  undefined8 uVar21;
  byte bVar22;
  ulong *******pppppppuVar23;
  ulong ******ppppppuVar24;
  ulong *puVar25;
  ulong uVar26;
  long *plVar27;
  ulong ******ppppppuVar28;
  long *plVar29;
  long *plVar30;
  undefined8 *******pppppppuVar31;
  undefined8 ******ppppppuVar32;
  ulong uVar33;
  ulong *******pppppppuVar34;
  ulong ******ppppppuVar35;
  void *local_128 [2];
  char cStack_111;
  ulong *******local_110;
  ulong uStack_108;
  ulong local_100;
  ulong *******local_f0;
  ulong *******pppppppuStack_e8;
  ulong local_e0;
  ulong *******local_d0;
  ulong *******pppppppuStack_c8;
  undefined1 *local_c0;
  ulong local_b8;
  ulong *******local_b0;
  ulong *******local_a8;
  undefined8 local_a0;
  undefined8 *******local_98;
  undefined8 *******local_90;
  undefined8 uStack_88;
  ulong *local_80;
  ulong *puStack_78;
  undefined1 *local_70;
  
  puVar9 = PTR_s_BUNDLE_00d52600;
  plVar15 = param_5;
  if ((param_3 & 1) == 0) {
    plVar15 = param_6;
  }
  puStack_78 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
  local_80 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  sVar12 = strlen(PTR_s_BUNDLE_00d52600);
  FUN_00b17aa4(&local_80,plVar15,puVar9);
  puVar10 = puStack_78;
  local_98 = &local_90;
  local_90 = (undefined8 *******)0x0;
  uStack_88 = 0;
  puVar8 = puStack_78;
  for (puVar25 = local_80; puStack_78 = puVar8, puVar25 != puVar10; puVar25 = puVar25 + 1) {
    uVar33 = *puVar25;
    puVar16 = *(undefined8 **)(uVar33 + 0x20);
    pppppppuVar31 = local_90;
    for (puVar14 = *(undefined8 **)(uVar33 + 0x18); local_90 = pppppppuVar31, puVar14 != puVar16;
        puVar14 = puVar14 + 3) {
      bVar22 = *(byte *)((long)puVar14 + 0x17);
      if (pppppppuVar31 != (undefined8 *******)0x0) {
        puVar18 = (undefined8 *)*puVar14;
        ppppppuVar32 = (undefined8 ******)puVar14[1];
        if (-1 < (char)bVar22) {
          puVar18 = puVar14;
          ppppppuVar32 = (undefined8 ******)(ulong)bVar22;
        }
        do {
          while( true ) {
            pppppppuVar2 = (undefined8 *******)pppppppuVar31[4];
            ppppppuVar5 = pppppppuVar31[5];
            if (-1 < (char)*(byte *)((long)pppppppuVar31 + 0x37)) {
              pppppppuVar2 = pppppppuVar31 + 4;
              ppppppuVar5 = (undefined8 ******)(ulong)*(byte *)((long)pppppppuVar31 + 0x37);
            }
            ppppppuVar1 = ppppppuVar5;
            if (ppppppuVar32 <= ppppppuVar5) {
              ppppppuVar1 = ppppppuVar32;
            }
            iVar11 = memcmp(puVar18,pppppppuVar2,(size_t)ppppppuVar1);
            if (iVar11 != 0) break;
            if (ppppppuVar32 == ppppppuVar5) {
              if ((undefined8 ********)pppppppuVar31 != &local_90) {
                FUN_005ff514(&local_b0,&local_d0,"A BUNDLE group contains a MID=\'",0x1f,puVar18,
                             ppppppuVar32);
                pcVar17 = "\' that is already in a BUNDLE group.";
                uVar21 = 0x24;
                goto LAB_00c36f88;
              }
              goto LAB_00c36c78;
            }
            if (ppppppuVar5 <= ppppppuVar32) goto LAB_00c36c0c;
LAB_00c36c5c:
            pppppppuVar31 = (undefined8 *******)*pppppppuVar31;
            if (pppppppuVar31 == (undefined8 *******)0x0) goto LAB_00c36c78;
          }
          if (iVar11 < 0) goto LAB_00c36c5c;
LAB_00c36c0c:
          pppppppuVar31 = (undefined8 *******)pppppppuVar31[1];
        } while (pppppppuVar31 != (undefined8 *******)0x0);
      }
LAB_00c36c78:
      if ((char)bVar22 < '\0') {
        FUN_005478d8(&local_d0,*puVar14,puVar14[1]);
      }
      else {
        local_c0 = (undefined1 *)puVar14[2];
        pppppppuStack_c8 = (ulong *******)puVar14[1];
        local_d0 = (ulong *******)*puVar14;
      }
      local_b0 = (ulong *******)&local_98;
      local_b8 = uVar33;
      FUN_00c3a44c(&local_b0,&local_d0,&local_d0);
      lVar19 = (long)*(char *)((long)puVar14 + 0x17);
      puVar18 = puVar14;
      if (lVar19 < 0) {
        lVar19 = puVar14[1];
        puVar18 = (undefined8 *)*puVar14;
      }
      lVar19 = FUN_00b1743c(plVar15,puVar18,lVar19);
      if (lVar19 == 0) {
        uVar33 = puVar14[1];
        puVar16 = (undefined8 *)*puVar14;
        if (-1 < (char)*(byte *)((long)puVar14 + 0x17)) {
          uVar33 = (ulong)*(byte *)((long)puVar14 + 0x17);
          puVar16 = puVar14;
        }
        FUN_005ff514(&local_b0,&local_d0,"A BUNDLE group contains a MID=\'",0x1f,puVar16,uVar33);
        pcVar17 = "\' matching no m= section.";
        uVar21 = 0x19;
        goto LAB_00c36f88;
      }
      pppppppuVar31 = local_90;
    }
    puVar8 = puStack_78;
  }
  if (param_4 == 2) {
    plVar29 = param_6;
    if ((param_3 & 1) == 0) {
      plVar29 = param_5;
    }
    if (plVar29 != (long *)0x0) {
      if ((param_3 & 1) == 0) {
        param_6 = param_5;
      }
      pppppppuStack_c8 = (ulong *******)&DAT_aaaaaaaaaaaaaaaa;
      local_d0 = (ulong *******)&DAT_aaaaaaaaaaaaaaaa;
      local_c0 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00b17aa4(&local_d0,param_6,PTR_s_BUNDLE_00d52600,sVar12);
      pppppppuVar23 = pppppppuStack_c8;
      local_a8 = (ulong *******)0x0;
      local_a0 = 0;
      local_b0 = (ulong *******)&local_a8;
      puVar25 = local_80;
      puVar8 = puStack_78;
      for (pppppppuVar34 = local_d0; local_80 = puVar25, puStack_78 = puVar8,
          pppppppuVar34 != pppppppuVar23; pppppppuVar34 = pppppppuVar34 + 1) {
        ppppppuVar35 = *pppppppuVar34;
        pppppppuVar3 = (ulong *******)ppppppuVar35[4];
        for (pppppppuVar13 = (ulong *******)ppppppuVar35[3]; pppppppuVar13 != pppppppuVar3;
            pppppppuVar13 = pppppppuVar13 + 3) {
          local_110 = pppppppuVar13;
          local_f0 = (ulong *******)&local_b0;
          lVar19 = FUN_00c3a838(&local_f0,pppppppuVar13,&DAT_001f94c3,&local_110,local_128);
          *(ulong *******)(lVar19 + 0x38) = ppppppuVar35;
        }
        puVar25 = local_80;
        puVar8 = puStack_78;
      }
      pppppppuStack_e8 = (ulong *******)0x0;
      local_e0 = 0;
      local_f0 = (ulong *******)&pppppppuStack_e8;
      if (puVar25 != puVar8) {
LAB_00c37114:
        uVar33 = *puVar25;
        lVar19 = FUN_00b16dbc(uVar33);
        if (lVar19 == 0) goto LAB_00c372dc;
        puVar14 = (undefined8 *)FUN_00b16dbc(uVar33);
        if (local_a8 != (ulong *******)0x0) {
          pppppppuVar34 = local_a8;
          puVar16 = (undefined8 *)*puVar14;
          ppppppuVar35 = (ulong ******)puVar14[1];
          if (-1 < (char)*(byte *)((long)puVar14 + 0x17)) {
            puVar16 = puVar14;
            ppppppuVar35 = (ulong ******)(ulong)*(byte *)((long)puVar14 + 0x17);
          }
          do {
            pppppppuVar23 = (ulong *******)pppppppuVar34[4];
            ppppppuVar28 = pppppppuVar34[5];
            if (-1 < (char)*(byte *)((long)pppppppuVar34 + 0x37)) {
              pppppppuVar23 = pppppppuVar34 + 4;
              ppppppuVar28 = (ulong ******)(ulong)*(byte *)((long)pppppppuVar34 + 0x37);
            }
            ppppppuVar24 = ppppppuVar28;
            if (ppppppuVar35 <= ppppppuVar28) {
              ppppppuVar24 = ppppppuVar35;
            }
            iVar11 = memcmp(puVar16,pppppppuVar23,(size_t)ppppppuVar24);
            if (iVar11 == 0) {
              if (ppppppuVar35 == ppppppuVar28) goto LAB_00c371b0;
              if (ppppppuVar28 <= ppppppuVar35) goto LAB_00c37154;
LAB_00c371a4:
              pppppppuVar34 = (ulong *******)*pppppppuVar34;
            }
            else {
              if (iVar11 < 0) goto LAB_00c371a4;
LAB_00c37154:
              pppppppuVar34 = (ulong *******)pppppppuVar34[1];
            }
            if (pppppppuVar34 == (ulong *******)0x0) break;
          } while( true );
        }
        goto LAB_00c373ec;
      }
LAB_00c372e8:
      plVar29 = *(long **)(param_2 + 0x3b8);
      plVar30 = *(long **)(param_2 + 0x3c0);
      if (plVar29 == plVar30) {
        bVar7 = true;
      }
      else {
        do {
          puVar14 = *(undefined8 **)(*plVar29 + 0x18);
          puVar16 = *(undefined8 **)(*plVar29 + 0x20);
          if (puVar14 != puVar16) {
LAB_00c37310:
            bVar22 = *(byte *)((long)puVar14 + 0x17);
            ppppppuVar32 = (undefined8 ******)(ulong)bVar22;
            if (local_90 != (undefined8 *******)0x0) {
              pppppppuVar31 = local_90;
              puVar18 = (undefined8 *)*puVar14;
              ppppppuVar5 = (undefined8 ******)puVar14[1];
              if (-1 < (char)bVar22) {
                puVar18 = puVar14;
                ppppppuVar5 = ppppppuVar32;
              }
              do {
                while( true ) {
                  pppppppuVar2 = (undefined8 *******)pppppppuVar31[4];
                  ppppppuVar1 = pppppppuVar31[5];
                  if (-1 < (char)*(byte *)((long)pppppppuVar31 + 0x37)) {
                    pppppppuVar2 = pppppppuVar31 + 4;
                    ppppppuVar1 = (undefined8 ******)(ulong)*(byte *)((long)pppppppuVar31 + 0x37);
                  }
                  __n_00 = ppppppuVar1;
                  if (ppppppuVar5 <= ppppppuVar1) {
                    __n_00 = ppppppuVar5;
                  }
                  iVar11 = memcmp(puVar18,pppppppuVar2,(size_t)__n_00);
                  if (iVar11 != 0) break;
                  if (ppppppuVar5 == ppppppuVar1) {
                    if ((undefined8 ********)pppppppuVar31 != &local_90) goto LAB_00c373c4;
                    goto LAB_00c3739c;
                  }
                  if (ppppppuVar1 <= ppppppuVar5) goto LAB_00c37334;
LAB_00c37384:
                  pppppppuVar31 = (undefined8 *******)*pppppppuVar31;
                  if (pppppppuVar31 == (undefined8 *******)0x0) goto LAB_00c3739c;
                }
                if (iVar11 < 0) goto LAB_00c37384;
LAB_00c37334:
                pppppppuVar2 = pppppppuVar31 + 1;
                pppppppuVar31 = (undefined8 *******)*pppppppuVar2;
              } while ((undefined8 *******)*pppppppuVar2 != (undefined8 *******)0x0);
            }
LAB_00c3739c:
            puVar18 = puVar14;
            if ((char)bVar22 < '\0') {
              ppppppuVar32 = (undefined8 ******)puVar14[1];
              puVar18 = (undefined8 *)*puVar14;
            }
            lVar19 = FUN_00b1743c(plVar15,puVar18,ppppppuVar32);
            if ((lVar19 != 0) && ((*(byte *)(lVar19 + 4) & 1) != 0)) goto LAB_00c373c4;
            uVar33 = puVar14[1];
            puVar16 = (undefined8 *)*puVar14;
            if (-1 < (char)*(byte *)((long)puVar14 + 0x17)) {
              uVar33 = (ulong)*(byte *)((long)puVar14 + 0x17);
              puVar16 = puVar14;
            }
            FUN_005ff514(local_128,&local_110,"Answer cannot remove m= section with mid=\'",0x2a,
                         puVar16,uVar33);
            plVar29 = (long *)FUN_00547cac(local_128,"\' from already-established BUNDLE group.",
                                           0x28);
            uStack_108 = plVar29[1];
            local_110 = (ulong *******)*plVar29;
            local_100 = plVar29[2];
            plVar29[1] = 0;
            plVar29[2] = 0;
            *plVar29 = 0;
            uVar33 = uStack_108;
            pppppppuVar34 = local_110;
            if (-1 < (long)local_100) {
              uVar33 = local_100 >> 0x38;
              pppppppuVar34 = (ulong *******)&local_110;
            }
            FUN_00b0092c(param_1,3,pppppppuVar34,uVar33);
joined_r0x00c37878:
            if ((long)local_100 < 0) {
              operator_delete(local_110);
            }
            if (cStack_111 < '\0') {
              operator_delete(local_128[0]);
            }
            goto LAB_00c37704;
          }
LAB_00c373d0:
          plVar29 = plVar29 + 1;
          bVar7 = true;
        } while (plVar29 != plVar30);
      }
      goto LAB_00c37708;
    }
  }
  else if (param_4 == 0) {
    local_d0 = (ulong *******)&pppppppuStack_c8;
    pppppppuStack_c8 = (ulong *******)0x0;
    local_c0 = (undefined1 *)0x0;
    local_a8 = (ulong *******)0x0;
    local_a0 = 0;
    local_b0 = (ulong *******)&local_a8;
    for (puVar25 = local_80; puVar25 != puVar8; puVar25 = puVar25 + 1) {
      pppppppuVar34 = (ulong *******)*puVar25;
      ppppppuVar28 = pppppppuVar34[4];
      for (ppppppuVar35 = pppppppuVar34[3]; ppppppuVar35 != ppppppuVar28;
          ppppppuVar35 = ppppppuVar35 + 3) {
        pppppuVar20 = (ulong *****)(long)*(char *)((long)ppppppuVar35 + 0x17);
        ppppppuVar24 = ppppppuVar35;
        if ((long)pppppuVar20 < 0) {
          pppppuVar20 = ppppppuVar35[1];
          ppppppuVar24 = (ulong ******)*ppppppuVar35;
        }
        pppppppuVar13 = (ulong *******)FUN_00c3b244(param_2 + 0x3b0,ppppppuVar24,pppppuVar20);
        pppppppuVar23 = pppppppuStack_c8;
        if (pppppppuVar13 != (ulong *******)0x0) {
          for (; pppppppuVar23 != (ulong *******)0x0; pppppppuVar23 = (ulong *******)*pppppppuVar23)
          {
            while (pppppppuVar23[4] <= pppppppuVar13) {
              if (pppppppuVar13 <= pppppppuVar23[4]) {
                if (((ulong ********)pppppppuVar23 == &pppppppuStack_c8) ||
                   ((ulong *******)pppppppuVar23[5] == pppppppuVar34)) goto LAB_00c36e08;
                goto LAB_00c36e64;
              }
              pppppppuVar23 = (ulong *******)pppppppuVar23[1];
              if (pppppppuVar23 == (ulong *******)0x0) goto LAB_00c36e08;
            }
          }
LAB_00c36e08:
          local_110 = (ulong *******)&local_d0;
          local_f0 = pppppppuVar13;
          pppppppuStack_e8 = pppppppuVar34;
          FUN_00c3a624(&local_110,&local_f0);
          pppppppuVar23 = local_a8;
joined_r0x00c36e20:
          if (pppppppuVar23 != (ulong *******)0x0) {
            while( true ) {
              if (pppppppuVar34 < pppppppuVar23[4]) goto LAB_00c36e28;
              if (pppppppuVar34 <= pppppppuVar23[4]) break;
              pppppppuVar23 = (ulong *******)pppppppuVar23[1];
              if (pppppppuVar23 == (ulong *******)0x0) goto LAB_00c36d74;
            }
            if (((ulong ********)pppppppuVar23 == &local_a8) ||
               ((ulong *******)pppppppuVar23[5] == pppppppuVar13)) goto LAB_00c36d74;
LAB_00c36e64:
            pppppuVar20 = ppppppuVar35[1];
            ppppppuVar28 = (ulong ******)*ppppppuVar35;
            if (-1 < (char)*(byte *)((long)ppppppuVar35 + 0x17)) {
              pppppuVar20 = (ulong *****)(ulong)*(byte *)((long)ppppppuVar35 + 0x17);
              ppppppuVar28 = ppppppuVar35;
            }
            FUN_005ff514(&local_110,&local_f0,&DAT_0019c31a,4,ppppppuVar28,pppppuVar20);
            puVar14 = (undefined8 *)FUN_00547cac(&local_110," in the offer has changed group.",0x20)
            ;
            pppppppuStack_e8 = (ulong *******)puVar14[1];
            local_f0 = (ulong *******)*puVar14;
            local_e0 = puVar14[2];
            puVar14[1] = 0;
            puVar14[2] = 0;
            *puVar14 = 0;
            pppppppuVar34 = pppppppuStack_e8;
            pppppppuVar23 = local_f0;
            if (-1 < (long)local_e0) {
              pppppppuVar34 = (ulong *******)(local_e0 >> 0x38);
              pppppppuVar23 = (ulong *******)&local_f0;
            }
            FUN_00b0092c(param_1,3,pppppppuVar23,pppppppuVar34);
            if ((long)local_100 < 0) {
              operator_delete(local_110);
            }
            local_f0 = (ulong *******)&local_b0;
            FUN_00c3a5b0(&local_f0,local_a8);
            local_b0 = (ulong *******)&local_d0;
            FUN_00c3a5b0(&local_b0,pppppppuStack_c8);
            goto LAB_00c37558;
          }
LAB_00c36d74:
          local_f0 = pppppppuVar34;
          pppppppuStack_e8 = pppppppuVar13;
          FUN_00c3a730(0,&local_b0,&local_b0,&local_f0);
        }
      }
    }
    local_f0 = (ulong *******)&local_b0;
    FUN_00c3a5b0(&local_f0,local_a8);
    local_b0 = (ulong *******)&local_d0;
    FUN_00c3a5b0(&local_b0,pppppppuStack_c8);
  }
LAB_00c37430:
  if (*(int *)(param_2 + 0x118) == 1) {
    sVar12 = strlen("BUNDLE");
    uVar33 = FUN_00b17a18(plVar15,"BUNDLE",sVar12);
    if (((uVar33 & 1) == 0) && (1 < (ulong)((plVar15[1] - *plVar15 >> 3) * -0x3333333333333333))) {
      FUN_00b0092c(param_1,3,"max-bundle is used but no bundle group found.",0x2d);
      goto LAB_00c37558;
    }
  }
  FUN_00c3ad74(param_2 + 0x3b0,plVar15,param_4);
  plVar30 = *(long **)(param_2 + 0x3c0);
  for (plVar29 = *(long **)(param_2 + 0x3b8); plVar29 != plVar30; plVar29 = plVar29 + 1) {
    lVar19 = FUN_00b16dbc(*plVar29);
    if (lVar19 != 0) {
      puVar16 = (undefined8 *)FUN_00b16dbc(*plVar29);
      lVar19 = (long)*(char *)((long)puVar16 + 0x17);
      puVar14 = puVar16;
      if (lVar19 < 0) {
        puVar14 = (undefined8 *)*puVar16;
        lVar19 = puVar16[1];
      }
      lVar19 = FUN_00b1743c(plVar15,puVar14,lVar19);
      if (lVar19 == 0) {
        FUN_00b0092c(param_1,3,"An m= section associated with the BUNDLE-tag doesn\'t exist.",0x3b);
        goto LAB_00c37558;
      }
      if (*(char *)(lVar19 + 4) == '\x01') {
        puVar14 = *(undefined8 **)(*plVar29 + 0x18);
        puVar16 = *(undefined8 **)(*plVar29 + 0x20);
        if (puVar14 != puVar16) {
LAB_00c3751c:
          lVar19 = (long)*(char *)((long)puVar14 + 0x17);
          puVar18 = puVar14;
          if (lVar19 < 0) {
            lVar19 = puVar14[1];
            puVar18 = (undefined8 *)*puVar14;
          }
          lVar19 = FUN_00b1743c(plVar15,puVar18,lVar19);
          if ((*(byte *)(lVar19 + 4) & 1) != 0) goto code_r0x00c37540;
          uVar33 = puVar14[1];
          puVar16 = (undefined8 *)*puVar14;
          if (-1 < (char)*(byte *)((long)puVar14 + 0x17)) {
            uVar33 = (ulong)*(byte *)((long)puVar14 + 0x17);
            puVar16 = puVar14;
          }
          FUN_005ff514(&local_b0,&local_d0,"The m= section with mid=\'",0x19,puVar16,uVar33);
          pcVar17 = "\' should be rejected.";
          uVar21 = 0x15;
LAB_00c36f88:
          plVar15 = (long *)FUN_00547cac(&local_b0,pcVar17,uVar21);
          pppppppuStack_c8 = (ulong *******)plVar15[1];
          local_d0 = (ulong *******)*plVar15;
          local_c0 = (undefined1 *)plVar15[2];
          plVar15[1] = 0;
          plVar15[2] = 0;
          *plVar15 = 0;
          pppppppuVar34 = pppppppuStack_c8;
          pppppppuVar23 = local_d0;
          if (-1 < (long)local_c0) {
            pppppppuVar34 = (ulong *******)((ulong)local_c0 >> 0x38);
            pppppppuVar23 = (ulong *******)&local_d0;
          }
          FUN_00b0092c(param_1,3,pppppppuVar23,pppppppuVar34);
          goto LAB_00c37558;
        }
      }
    }
LAB_00c374c0:
  }
  FUN_005ecd48(param_1);
  goto LAB_00c37558;
LAB_00c372b4:
  if (((ulong ********)pppppppuVar13 == &local_a8) ||
     ((ulong *******)pppppppuVar13[7] != pppppppuVar23)) {
LAB_00c377f4:
    if (-1 < (char)bVar22) {
      ppppppuVar28 = ppppppuVar24;
      plVar27 = plVar29;
    }
    FUN_005ff514(local_128,&local_110,"A BUNDLE group in answer contains a MID=\'",0x29,plVar27,
                 ppppppuVar28);
    plVar29 = (long *)FUN_00547cac(local_128,"\' that was not in the offered group.",0x24);
    uStack_108 = plVar29[1];
    local_110 = (ulong *******)*plVar29;
    local_100 = plVar29[2];
    plVar29[1] = 0;
    plVar29[2] = 0;
    *plVar29 = 0;
    uVar33 = uStack_108;
    pppppppuVar34 = local_110;
    if (-1 < (long)local_100) {
      uVar33 = local_100 >> 0x38;
      pppppppuVar34 = (ulong *******)&local_110;
    }
    FUN_00b0092c(param_1,3,pppppppuVar34,uVar33);
    goto joined_r0x00c37878;
  }
  plVar29 = plVar29 + 3;
  goto joined_r0x00c37218;
LAB_00c372dc:
  puVar25 = puVar25 + 1;
  if (puVar25 == puVar8) goto LAB_00c372e8;
  goto LAB_00c37114;
LAB_00c373c4:
  puVar14 = puVar14 + 3;
  if (puVar14 == puVar16) goto LAB_00c373d0;
  goto LAB_00c37310;
LAB_00c36e28:
  pppppppuVar23 = (ulong *******)*pppppppuVar23;
  goto joined_r0x00c36e20;
code_r0x00c37540:
  puVar14 = puVar14 + 3;
  if (puVar14 == puVar16) goto LAB_00c374c0;
  goto LAB_00c3751c;
LAB_00c371b0:
  if ((ulong ********)pppppppuVar34 != &local_a8) {
    pppppppuVar23 = (ulong *******)pppppppuVar34[7];
    for (pppppppuVar34 = pppppppuStack_e8; pppppppuVar34 != (ulong *******)0x0;
        pppppppuVar34 = (ulong *******)pppppppuVar34[1]) {
      while (pppppppuVar23 < pppppppuVar34[4]) {
        pppppppuVar34 = (ulong *******)*pppppppuVar34;
        if (pppppppuVar34 == (ulong *******)0x0) goto LAB_00c371f8;
      }
      if (pppppppuVar23 <= pppppppuVar34[4]) {
        if ((ulong ********)pppppppuVar34 != &pppppppuStack_e8) {
          pcVar17 = "A MID in the answer has changed group.";
          uVar21 = 0x26;
          goto LAB_00c37400;
        }
        break;
      }
    }
LAB_00c371f8:
    local_110 = pppppppuVar23;
    uStack_108 = uVar33;
    FUN_00c3a9a8(0,&local_f0,&local_f0,&local_110);
    pppppppuVar34 = local_a8;
    plVar30 = *(long **)(uVar33 + 0x18);
    plVar4 = *(long **)(uVar33 + 0x20);
    plVar29 = plVar30;
joined_r0x00c37218:
    if (plVar29 != plVar4) {
      if (pppppppuVar34 != (ulong *******)0x0) {
        bVar22 = *(byte *)((long)plVar29 + 0x17);
        ppppppuVar24 = (ulong ******)(ulong)bVar22;
        plVar27 = (long *)*plVar29;
        ppppppuVar28 = (ulong ******)plVar29[1];
        pppppppuVar13 = pppppppuVar34;
        __s1 = plVar27;
        ppppppuVar35 = ppppppuVar28;
        if (-1 < (char)bVar22) {
          __s1 = plVar29;
          ppppppuVar35 = ppppppuVar24;
        }
        do {
          pppppppuVar3 = (ulong *******)pppppppuVar13[4];
          ppppppuVar6 = pppppppuVar13[5];
          if (-1 < (char)*(byte *)((long)pppppppuVar13 + 0x37)) {
            pppppppuVar3 = pppppppuVar13 + 4;
            ppppppuVar6 = (ulong ******)(ulong)*(byte *)((long)pppppppuVar13 + 0x37);
          }
          __n = ppppppuVar6;
          if (ppppppuVar35 <= ppppppuVar6) {
            __n = ppppppuVar35;
          }
          iVar11 = memcmp(__s1,pppppppuVar3,(size_t)__n);
          if (iVar11 == 0) {
            if (ppppppuVar35 == ppppppuVar6) goto LAB_00c372b4;
            if (ppppppuVar6 <= ppppppuVar35) goto LAB_00c37258;
LAB_00c372a8:
            pppppppuVar13 = (ulong *******)*pppppppuVar13;
          }
          else {
            if (iVar11 < 0) goto LAB_00c372a8;
LAB_00c37258:
            pppppppuVar13 = (ulong *******)pppppppuVar13[1];
          }
          if (pppppppuVar13 == (ulong *******)0x0) goto LAB_00c377f4;
        } while( true );
      }
      bVar22 = *(byte *)((long)plVar30 + 0x17);
      ppppppuVar24 = (ulong ******)(ulong)bVar22;
      plVar27 = (long *)*plVar30;
      ppppppuVar28 = (ulong ******)plVar30[1];
      plVar29 = plVar30;
      goto LAB_00c377f4;
    }
    goto LAB_00c372dc;
  }
LAB_00c373ec:
  pcVar17 = "A BUNDLE group was added in the answer that did not exist in the offer.";
  uVar21 = 0x47;
LAB_00c37400:
  FUN_00b0092c(param_1,3,pcVar17,uVar21);
LAB_00c37704:
  bVar7 = false;
LAB_00c37708:
  local_110 = (ulong *******)&local_f0;
  FUN_00c3a5b0(&local_110,pppppppuStack_e8);
  local_f0 = (ulong *******)&local_b0;
  FUN_00c3a3b8(&local_f0,local_a8);
  if (local_d0 != (ulong *******)0x0) {
    uVar26 = (ulong)((long)pppppppuStack_c8 + (-8 - ((long)pppppppuStack_c8 << 0x3d))) >> 3;
    uVar33 = (ulong)(((long)local_d0 - (long)pppppppuStack_c8 << 0x3d) -
                    ((long)local_d0 - (long)pppppppuStack_c8)) >> 3;
    if (uVar26 <= uVar33) {
      uVar33 = uVar26;
    }
    pppppppuVar34 = pppppppuStack_c8;
    if ((1 < uVar33) &&
       ((((int)local_d0 - (int)pppppppuStack_c8 | -(int)pppppppuStack_c8) & 7U) == 0)) {
      uVar33 = uVar33 & 0x1ffffffffffffffe;
      pppppppuVar34 = pppppppuStack_c8 + -uVar33;
      do {
        uVar33 = uVar33 - 2;
      } while (uVar33 != 0);
    }
    do {
      if (pppppppuVar34 == local_d0) {
        pppppppuStack_c8 = local_d0;
        operator_delete(local_d0);
        goto LAB_00c37890;
      }
      pppppppuVar34 = pppppppuVar34 + -1;
    } while (pppppppuVar34 != (ulong *******)0x0);
    goto LAB_00c375d8;
  }
LAB_00c37890:
  if (bVar7) goto LAB_00c37430;
LAB_00c37558:
  local_d0 = (ulong *******)&local_98;
  FUN_00c3a3b8(&local_d0,local_90);
  if (local_80 == (ulong *)0x0) {
    return;
  }
  uVar26 = (ulong)((long)puStack_78 + (-8 - ((long)puStack_78 << 0x3d))) >> 3;
  uVar33 = (ulong)(((long)local_80 - (long)puStack_78 << 0x3d) - ((long)local_80 - (long)puStack_78)
                  ) >> 3;
  if (uVar26 <= uVar33) {
    uVar33 = uVar26;
  }
  puVar25 = puStack_78;
  if ((1 < uVar33) && ((((int)local_80 - (int)puStack_78 | -(int)puStack_78) & 7U) == 0)) {
    uVar33 = uVar33 & 0x1ffffffffffffffe;
    puVar25 = puStack_78 + -uVar33;
    do {
      uVar33 = uVar33 - 2;
    } while (uVar33 != 0);
  }
  do {
    if (puVar25 == local_80) {
      puStack_78 = local_80;
      operator_delete(local_80);
      return;
    }
    puVar25 = puVar25 + -1;
  } while (puVar25 != (ulong *)0x0);
LAB_00c375d8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c378c0  FUN_00c378c0 =====

void FUN_00c378c0(undefined8 *param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  wchar_t *pwVar3;
  wchar_t __c;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  void *pvVar6;
  void *pvVar7;
  long lVar8;
  size_t __n;
  ulong uVar9;
  wchar_t *pwVar10;
  ulong uVar11;
  ulong uVar12;
  void *__dest;
  long lVar13;
  wchar_t *local_90;
  wchar_t *pwStack_88;
  undefined1 *local_80;
  long local_70;
  undefined1 uStack_61;
  
  lVar1 = *param_3;
  lVar2 = param_3[1];
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  do {
    if (lVar1 == lVar2) {
      return;
    }
    lVar8 = (long)*(char *)(lVar1 + 0x1f);
    if (lVar8 < 0) {
      lVar13 = *(long *)(lVar1 + 8);
      lVar8 = *(long *)(lVar1 + 0x10);
    }
    else {
      lVar13 = lVar1 + 8;
    }
    local_70 = FUN_00c3b244(param_2 + 0x3b0,lVar13,lVar8);
    if (local_70 != 0) {
      local_90 = (wchar_t *)&local_70;
      lVar8 = FUN_00c3aab0(0,param_1,param_1,&DAT_001f94c3,&local_90,&uStack_61);
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      pwStack_88 = (wchar_t *)&DAT_aaaaaaaaaaaaaaaa;
      local_90 = (wchar_t *)&DAT_aaaaaaaaaaaaaaaa;
      FUN_00c38190(&local_90,param_2,lVar1);
      pwVar4 = pwStack_88;
      for (pwVar10 = local_90; pwVar10 != pwVar4; pwVar10 = pwVar10 + 1) {
        pwVar3 = *(wchar_t **)(lVar8 + 0x30);
        __c = *pwVar10;
        pwVar5 = wmemchr(*(wchar_t **)(lVar8 + 0x28),__c,
                         (long)pwVar3 - (long)*(wchar_t **)(lVar8 + 0x28) >> 2);
        if (pwVar5 == (wchar_t *)0x0 || pwVar5 == pwVar3) {
          pwVar3 = *(wchar_t **)(lVar8 + 0x30);
          if (pwVar3 < *(wchar_t **)(lVar8 + 0x38)) {
            if (pwVar3 == (wchar_t *)0x0) {
LAB_00c37b4c:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            pwVar5 = pwVar3 + 1;
            *pwVar3 = __c;
          }
          else {
            lVar13 = (long)pwVar3 - *(long *)(lVar8 + 0x28);
            uVar11 = (lVar13 >> 2) + 1;
            if (uVar11 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_005d348c();
            }
            uVar9 = (long)*(wchar_t **)(lVar8 + 0x38) - *(long *)(lVar8 + 0x28);
            uVar12 = (long)uVar9 >> 1;
            if (uVar12 <= uVar11) {
              uVar12 = uVar11;
            }
            if (0x7ffffffffffffffb < uVar9) {
              uVar12 = 0x3fffffffffffffff;
            }
            if (uVar12 == 0) {
              pvVar6 = (void *)0x0;
            }
            else {
              if (uVar12 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_005d55a4();
              }
              pvVar6 = operator_new(uVar12 << 2);
            }
            pwVar3 = (wchar_t *)((long)pvVar6 + lVar13);
            if (pwVar3 == (wchar_t *)0x0) goto LAB_00c37b4c;
            pwVar5 = pwVar3 + 1;
            *pwVar3 = __c;
            __n = *(long *)(lVar8 + 0x30) - (long)*(void **)(lVar8 + 0x28);
            __dest = (void *)((long)pwVar3 - __n);
            memcpy(__dest,*(void **)(lVar8 + 0x28),__n);
            pvVar7 = *(void **)(lVar8 + 0x28);
            *(void **)(lVar8 + 0x28) = __dest;
            *(wchar_t **)(lVar8 + 0x30) = pwVar5;
            *(void **)(lVar8 + 0x38) = (void *)((long)pvVar6 + uVar12 * 4);
            if (pvVar7 != (void *)0x0) {
              operator_delete(pvVar7);
            }
          }
          *(wchar_t **)(lVar8 + 0x30) = pwVar5;
        }
      }
      if (local_90 != (wchar_t *)0x0) {
        uVar12 = (ulong)((long)pwStack_88 + (-4 - ((long)pwStack_88 << 0x3e))) >> 2;
        uVar11 = (ulong)(((long)local_90 - (long)pwStack_88 << 0x3e) -
                        ((long)local_90 - (long)pwStack_88)) >> 2;
        if (uVar12 <= uVar11) {
          uVar11 = uVar12;
        }
        pwVar10 = pwStack_88;
        if ((1 < uVar11) && ((((int)local_90 - (int)pwStack_88 | -(int)pwStack_88) & 3U) == 0)) {
          uVar11 = uVar11 & 0x3ffffffffffffffe;
          pwVar10 = pwStack_88 + -uVar11;
          do {
            uVar11 = uVar11 - 2;
          } while (uVar11 != 0);
        }
        while (pwVar10 != local_90) {
          pwVar10 = pwVar10 + -1;
          if (pwVar10 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        pwStack_88 = local_90;
        operator_delete(local_90);
      }
    }
    lVar1 = lVar1 + 0x28;
  } while( true );
}


// ===== 00c37b68  FUN_00c37b68 =====

void FUN_00c37b68(undefined8 param_1,long param_2,undefined8 param_3,int *param_4)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 uVar7;
  long *plVar8;
  int *piVar9;
  long local_70 [2];
  code *local_60;
  code *pcStack_58;
  long *local_48;
  
  piVar9 = param_4 + 2;
  uVar1 = *(ulong *)(param_4 + 4);
  piVar2 = *(int **)piVar9;
  if (-1 < (char)*(byte *)((long)param_4 + 0x1f)) {
    uVar1 = (ulong)*(byte *)((long)param_4 + 0x1f);
    piVar2 = piVar9;
  }
  lVar3 = FUN_00c3c278(param_2 + 0x50,piVar2,uVar1);
  if (lVar3 == 0) {
    uVar4 = FUN_00c36654(param_2,param_4,0);
    uVar7 = 0;
    if ((*(int *)(param_2 + 0x11c) != 1) && (*param_4 == 0)) {
      uVar7 = FUN_00c36654(param_2,param_4,1);
    }
    uVar1 = *(ulong *)(param_4 + 4);
    piVar2 = *(int **)(param_4 + 2);
    if (-1 < (char)*(byte *)((long)param_4 + 0x1f)) {
      uVar1 = (ulong)*(byte *)((long)param_4 + 0x1f);
      piVar2 = piVar9;
    }
    uVar7 = FUN_00c36938(param_2,piVar2,uVar1,uVar4,uVar7);
    plVar8 = *(long **)(param_2 + 400);
    if (plVar8 == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,param_2,uVar4);
    }
    plVar8 = (long *)operator_new(0x88);
    FUN_00c41c4c(plVar8,uVar4,0);
    *(undefined4 *)(plVar8 + 0x10) = 0;
    *plVar8 = (long)&PTR_FUN_00d4d0d8;
    if (plVar8 != (long *)0x0) {
      FUN_00d0f740(1,plVar8 + 0x10);
    }
    pvVar6 = operator_new(0x60);
    local_60 = FUN_004473ec;
    pcStack_58 = FUN_00c3ac80;
    local_70[0] = param_2;
    local_48 = plVar8;
    FUN_00c3e208(pvVar6,param_2 + 0x3a8,uVar7,&local_48,uVar5,local_70);
    (*local_60)(0,local_70,local_70);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 8))();
    }
    FUN_00c3bc70(param_2 + 0x50,pvVar6);
    FUN_00c383cc(param_2);
    FUN_005ecd48(param_1);
    return;
  }
  FUN_005ecd48(param_1);
  return;
}


// ===== 00c37d48  FUN_00c37d48 =====

void FUN_00c37d48(long param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  undefined8 *__s1;
  undefined8 *__s2;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  size_t sVar10;
  size_t sVar11;
  byte bVar12;
  
  puVar9 = (undefined8 *)(param_2 + 8);
  uVar2 = *(ulong *)(param_2 + 0x10);
  puVar8 = (undefined8 *)*puVar9;
  if (-1 < (char)*(byte *)(param_2 + 0x1f)) {
    uVar2 = (ulong)*(byte *)(param_2 + 0x1f);
    puVar8 = puVar9;
  }
  lVar5 = FUN_00c3b244(param_1 + 0x3b0,puVar8,uVar2);
  if (lVar5 == 0) {
    uVar2 = *(ulong *)(param_2 + 0x10);
    puVar8 = *(undefined8 **)(param_2 + 8);
    if (-1 < (char)*(byte *)(param_2 + 0x1f)) {
      uVar2 = (ulong)*(byte *)(param_2 + 0x1f);
      puVar8 = puVar9;
    }
    FUN_00c3c404(param_1 + 0x50,puVar8,uVar2);
    return;
  }
  if (*(long *)(lVar5 + 0x18) == *(long *)(lVar5 + 0x20)) {
    bVar12 = *(byte *)(param_2 + 0x1f);
    sVar10 = (size_t)bVar12;
    puVar8 = *(undefined8 **)(param_2 + 8);
    sVar11 = *(size_t *)(param_2 + 0x10);
  }
  else {
    puVar6 = (undefined8 *)FUN_00b16dbc(lVar5);
    bVar12 = *(byte *)(param_2 + 0x1f);
    sVar10 = (size_t)bVar12;
    bVar3 = *(byte *)((long)puVar6 + 0x17);
    puVar8 = *(undefined8 **)(param_2 + 8);
    sVar11 = *(size_t *)(param_2 + 0x10);
    __n = sVar11;
    if (-1 < (char)bVar12) {
      __n = sVar10;
    }
    sVar1 = puVar6[1];
    if (-1 < (char)bVar3) {
      sVar1 = (ulong)bVar3;
    }
    if (__n == sVar1) {
      __s1 = puVar8;
      if (-1 < (char)bVar12) {
        __s1 = puVar9;
      }
      __s2 = (undefined8 *)*puVar6;
      if (-1 < (char)bVar3) {
        __s2 = puVar6;
      }
      iVar4 = memcmp(__s1,__s2,__n);
      if (iVar4 == 0) {
        puVar9 = *(undefined8 **)(lVar5 + 0x20);
        for (puVar8 = *(undefined8 **)(lVar5 + 0x18); puVar8 != puVar9; puVar8 = puVar8 + 3) {
          lVar7 = (long)*(char *)((long)puVar8 + 0x17);
          puVar6 = puVar8;
          if (lVar7 < 0) {
            lVar7 = puVar8[1];
            puVar6 = (undefined8 *)*puVar8;
          }
          FUN_00c3c404(param_1 + 0x50,puVar6,lVar7);
        }
        FUN_00c3b510(param_1 + 0x3b0,lVar5);
        return;
      }
    }
  }
  if (-1 < (char)bVar12) {
    sVar11 = sVar10;
    puVar8 = puVar9;
  }
  FUN_00c3c404(param_1 + 0x50,puVar8,sVar11);
  uVar2 = *(ulong *)(param_2 + 0x10);
  puVar8 = *(undefined8 **)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x1f)) {
    uVar2 = (ulong)*(byte *)(param_2 + 0x1f);
    puVar8 = puVar9;
  }
  FUN_00c3b2a0(param_1 + 0x3b0,lVar5,puVar8,uVar2);
  return;
}


// ===== 00c37eec  FUN_00c37eec =====

uint FUN_00c37eec(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  char **local_58;
  char *local_50;
  char *pcStack_48;
  
  if (((DAT_00dbaff8 & 1) == 0) && (iVar3 = FUN_0054fdd4(&DAT_00dbaff8), iVar3 != 0)) {
    DAT_00dbaff0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbaff8);
  }
  local_58 = (char **)0x0;
  pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbaff0 != '\0') {
    local_58 = &local_50;
    FUN_0066d348(0x42,DAT_00dbaff0,"JsepTransportController::HandleBundledContent",0,0,0,0,0,0);
    local_50 = DAT_00dbaff0;
    pcStack_48 = "JsepTransportController::HandleBundledContent";
  }
  puVar4 = (undefined8 *)FUN_00b16dbc(param_3);
  lVar7 = (long)*(char *)((long)puVar4 + 0x17);
  puVar6 = puVar4;
  if (lVar7 < 0) {
    puVar6 = (undefined8 *)*puVar4;
    lVar7 = puVar4[1];
  }
  uVar5 = FUN_00c3c278(param_1 + 0x50,puVar6,lVar7);
  uVar1 = *(ulong *)(param_2 + 0x10);
  puVar6 = *(undefined8 **)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x1f)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x1f);
    puVar6 = (undefined8 *)(param_2 + 8);
  }
  uVar2 = FUN_00c3bd4c(param_1 + 0x50,puVar6,uVar1,uVar5);
  if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
    FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
  }
  return uVar2 & 1;
}


// ===== 00c38058  FUN_00c38058 =====

void FUN_00c38058(undefined8 param_1,long param_2,int *param_3)

{
  ulong uVar1;
  int *piVar2;
  undefined8 ***pppuVar3;
  long lVar4;
  long *plVar5;
  void *local_58 [2];
  char cStack_41;
  undefined8 **local_40;
  ulong uStack_38;
  ulong local_30;
  
  if ((((*(int *)(param_2 + 0x11c) == 1) && (*param_3 == 0)) &&
      ((*(byte *)((long)param_3 + 5) & 1) == 0)) &&
     (lVar4 = FUN_00b174c8(param_3), (*(byte *)(lVar4 + 0x20) & 1) == 0)) {
    uVar1 = *(ulong *)(param_3 + 4);
    piVar2 = *(int **)(param_3 + 2);
    if (-1 < (char)*(byte *)((long)param_3 + 0x1f)) {
      uVar1 = (ulong)*(byte *)((long)param_3 + 0x1f);
      piVar2 = param_3 + 2;
    }
    FUN_005ff514(local_58,&local_40,"The m= section with mid=\'",0x19,piVar2,uVar1);
    plVar5 = (long *)FUN_00547cac(local_58,
                                  "\' is invalid. RTCP-MUX is not enabled when it is required.",0x3a
                                 );
    uStack_38 = plVar5[1];
    local_40 = (undefined8 **)*plVar5;
    local_30 = plVar5[2];
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = 0;
    uVar1 = uStack_38;
    pppuVar3 = (undefined8 ***)local_40;
    if (-1 < (long)local_30) {
      uVar1 = local_30 >> 0x38;
      pppuVar3 = &local_40;
    }
    FUN_00b0092c(param_1,3,pppuVar3,uVar1);
    if ((long)local_30 < 0) {
      operator_delete(local_40);
    }
    if (cStack_41 < '\0') {
      operator_delete(local_58[0]);
    }
    return;
  }
  FUN_005ecd48(param_1);
  return;
}


// ===== 00c38190  FUN_00c38190 =====

void FUN_00c38190(undefined8 *param_1,long param_2,undefined8 param_3)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  long lVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  lVar3 = FUN_00b174c8(param_3);
  if ((*(byte *)(param_2 + 0xfb) & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    pwVar1 = *(wchar_t **)(lVar3 + 0x48);
    if (*(wchar_t **)(lVar3 + 0x40) != pwVar1) {
      pwVar5 = *(wchar_t **)(lVar3 + 0x40) + 6;
      do {
        if ((char)pwVar5[1] == '\x01') {
          pwVar2 = (wchar_t *)param_1[1];
          pwVar4 = wmemchr((wchar_t *)*param_1,*pwVar5,(long)pwVar2 - (long)*param_1 >> 2);
          if ((pwVar4 == (wchar_t *)0x0) || (pwVar4 == pwVar2)) {
            pwVar2 = (wchar_t *)param_1[1];
            if (pwVar2 < (wchar_t *)param_1[2]) {
              if (pwVar2 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              pwVar4 = pwVar2 + 1;
              *pwVar2 = *pwVar5;
            }
            else {
              pwVar4 = (wchar_t *)FUN_006d13b4(param_1,pwVar5);
            }
            param_1[1] = pwVar4;
          }
        }
        pwVar2 = pwVar5 + 2;
        pwVar5 = pwVar5 + 8;
      } while (pwVar2 != pwVar1);
    }
  }
  return;
}


// ===== 00c38274  FUN_00c38274 =====

void FUN_00c38274(undefined8 param_1,undefined8 param_2,uint *param_3,long param_4,
                 undefined8 param_5,undefined4 param_6)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  char **local_68;
  char *local_60;
  char *pcStack_58;
  
  if (((DAT_00dbb008 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00dbb008), iVar1 != 0)) {
    DAT_00dbb000 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbb008);
  }
  local_68 = (char **)0x0;
  pcStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbb000 != '\0') {
    local_68 = &local_60;
    FUN_0066d348(0x42,DAT_00dbb000,"JsepTransportController::CreateJsepTransportDescription",0,0,0,0
                 ,0,0);
    local_60 = DAT_00dbb000;
    pcStack_58 = "JsepTransportController::CreateJsepTransportDescription";
  }
  lVar2 = FUN_00b174c8(param_3);
  uVar3 = *param_3;
  if (uVar3 != 1) {
    uVar3 = (uint)*(byte *)(lVar2 + 0x20);
  }
  FUN_00c3e0b4(param_1,uVar3 & 1,param_5,param_6,param_4 + 0x18);
  if ((local_68 != (char **)0x0) && (**local_68 != '\0')) {
    FUN_0066d348(0x45,*local_68,local_68[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 00c383cc  FUN_00c383cc =====

void FUN_00c383cc(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  undefined8 uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  undefined8 ****ppppuVar17;
  long *plVar18;
  undefined8 ****ppppuVar19;
  undefined8 ****ppppuVar20;
  undefined8 ****ppppuVar21;
  undefined8 ****ppppuVar22;
  undefined8 *puVar23;
  int iVar24;
  ulong uVar25;
  int iVar26;
  uint uVar27;
  ulong uVar28;
  undefined8 ****ppppuVar29;
  uint uVar30;
  undefined8 *puVar31;
  undefined8 ***local_d0;
  undefined8 ***local_c8;
  long local_c0;
  undefined8 ***local_b8;
  undefined8 ***local_b0;
  long local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  char **local_88;
  char *local_80;
  char *pcStack_78;
  undefined8 ***local_70 [2];
  
  if (((DAT_00dbb018 & 1) == 0) && (iVar16 = FUN_0054fdd4(&DAT_00dbb018), iVar16 != 0)) {
    DAT_00dbb010 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbb018);
  }
  local_88 = (char **)0x0;
  pcStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbb010 != '\0') {
    FUN_0066d348(0x42,DAT_00dbb010,"JsepTransportController::UpdateAggregateStates_n",0,0,0,0,0,0);
    local_80 = DAT_00dbb010;
    pcStack_78 = "JsepTransportController::UpdateAggregateStates_n";
    local_88 = &local_80;
  }
  local_b8 = (undefined8 ***)&local_a0;
  local_a0 = (undefined8 *)0x0;
  local_98 = (undefined8 *)0x0;
  local_90 = 0;
  FUN_00c3c054(param_1 + 0x50,&local_b8,FUN_00c3a2fc);
  puVar23 = local_98;
  ppppuVar21 = &local_b0;
  ppppuVar29 = &local_c8;
  local_b0 = (undefined8 ****)0x0;
  local_a8 = 0;
  local_c0 = 0;
  local_c8 = (undefined8 ****)0x0;
  local_d0 = ppppuVar29;
  local_b8 = ppppuVar21;
  if (local_a0 == local_98) {
    uVar30 = 0;
    bVar14 = false;
    uVar27 = 0;
  }
  else {
    bVar13 = false;
    uVar27 = 0;
    uVar28 = 1;
    bVar14 = true;
    bVar15 = true;
    puVar31 = local_a0;
    do {
      if (bVar13) {
        bVar13 = true;
        if ((uVar28 & 1) != 0) goto LAB_00c38544;
LAB_00c38510:
        uVar28 = 0;
        if (bVar14) goto LAB_00c3855c;
LAB_00c385b4:
        bVar14 = false;
        if (uVar27 == 0) goto LAB_00c385f4;
LAB_00c385bc:
        uVar27 = 1;
        if (bVar15) goto LAB_00c3861c;
LAB_00c385c4:
        bVar15 = false;
      }
      else {
        plVar18 = (long *)(**(code **)(*(long *)*puVar31 + 0xd0))();
        iVar16 = (**(code **)(*plVar18 + 0x50))();
        bVar13 = iVar16 == 3;
        if ((uVar28 & 1) == 0) goto LAB_00c38510;
LAB_00c38544:
        uVar28 = (**(code **)(*(long *)*puVar31 + 8))();
        uVar28 = uVar28 & 0xffffffff;
        if (!bVar14) goto LAB_00c385b4;
LAB_00c3855c:
        uVar25 = (**(code **)(*(long *)*puVar31 + 8))();
        if ((uVar25 & 1) == 0) goto LAB_00c385b4;
        plVar18 = (long *)(**(code **)(*(long *)*puVar31 + 0xd0))();
        iVar16 = (**(code **)(*plVar18 + 0x50))();
        if (iVar16 != 2) goto LAB_00c385b4;
        plVar18 = (long *)(**(code **)(*(long *)*puVar31 + 0xd0))();
        iVar16 = (**(code **)(*plVar18 + 0x68))();
        if (iVar16 != 0) goto LAB_00c385b4;
        plVar18 = (long *)(**(code **)(*(long *)*puVar31 + 0xd0))();
        iVar16 = (**(code **)(*plVar18 + 0xc0))();
        bVar14 = iVar16 == 2;
        if (uVar27 != 0) goto LAB_00c385bc;
LAB_00c385f4:
        plVar18 = (long *)(**(code **)(*(long *)*puVar31 + 0xd0))();
        iVar16 = (**(code **)(*plVar18 + 0xc0))();
        uVar27 = (uint)(iVar16 != 0);
        if (!bVar15) goto LAB_00c385c4;
LAB_00c3861c:
        plVar18 = (long *)(**(code **)(*(long *)*puVar31 + 0xd0))();
        iVar16 = (**(code **)(*plVar18 + 0xc0))();
        bVar15 = iVar16 == 2;
      }
      iVar16 = (**(code **)(*(long *)*puVar31 + 0x50))();
      ppppuVar22 = (undefined8 ****)local_c8;
      ppppuVar17 = ppppuVar29;
      while (ppppuVar19 = ppppuVar17, ppppuVar20 = ppppuVar17, ppppuVar22 != (undefined8 ****)0x0) {
        while (ppppuVar17 = ppppuVar22, *(int *)((long)ppppuVar17 + 0x1c) <= iVar16) {
          if (iVar16 <= *(int *)((long)ppppuVar17 + 0x1c)) goto LAB_00c386e4;
          ppppuVar22 = (undefined8 ****)ppppuVar17[1];
          if ((undefined8 ****)ppppuVar17[1] == (undefined8 ****)0x0) {
            ppppuVar20 = ppppuVar17 + 1;
            ppppuVar19 = ppppuVar17;
            goto LAB_00c38690;
          }
        }
        ppppuVar22 = (undefined8 ****)*ppppuVar17;
      }
LAB_00c38690:
      ppppuVar17 = (undefined8 ****)operator_new(0x28);
      if (ppppuVar17 == (undefined8 ****)0x0) goto LAB_00c39210;
      *(int *)((long)ppppuVar17 + 0x1c) = iVar16;
      *(undefined4 *)(ppppuVar17 + 4) = 0;
      *ppppuVar17 = (undefined8 ***)0x0;
      ppppuVar17[1] = (undefined8 ***)0x0;
      ppppuVar17[2] = ppppuVar19;
      *ppppuVar20 = ppppuVar17;
      ppppuVar22 = ppppuVar17;
      if ((undefined8 ****)*local_d0 != (undefined8 ****)0x0) {
        ppppuVar22 = (undefined8 ****)*ppppuVar20;
        local_d0 = (undefined8 ***)*local_d0;
      }
      FUN_005d5b94(local_c8,ppppuVar22);
      local_c0 = local_c0 + 1;
LAB_00c386e4:
      *(int *)(ppppuVar17 + 4) = *(int *)(ppppuVar17 + 4) + 1;
      plVar18 = (long *)(**(code **)(*(long *)*puVar31 + 0xd0))();
      iVar16 = (**(code **)(*plVar18 + 0x58))();
      ppppuVar17 = (undefined8 ****)local_b0;
      ppppuVar22 = ppppuVar21;
      while (ppppuVar20 = ppppuVar22, ppppuVar17 != (undefined8 ****)0x0) {
        while (ppppuVar19 = ppppuVar17, *(int *)((long)ppppuVar19 + 0x1c) <= iVar16) {
          if (iVar16 <= *(int *)((long)ppppuVar19 + 0x1c)) goto LAB_00c384e4;
          ppppuVar17 = (undefined8 ****)ppppuVar19[1];
          if ((undefined8 ****)ppppuVar19[1] == (undefined8 ****)0x0) {
            ppppuVar22 = ppppuVar19 + 1;
            ppppuVar20 = ppppuVar19;
            goto LAB_00c3874c;
          }
        }
        ppppuVar22 = ppppuVar19;
        ppppuVar17 = (undefined8 ****)*ppppuVar19;
      }
LAB_00c3874c:
      ppppuVar19 = (undefined8 ****)operator_new(0x28);
      if (ppppuVar19 == (undefined8 ****)0x0) goto LAB_00c39210;
      *(int *)((long)ppppuVar19 + 0x1c) = iVar16;
      *(undefined4 *)(ppppuVar19 + 4) = 0;
      *ppppuVar19 = (undefined8 ***)0x0;
      ppppuVar19[1] = (undefined8 ***)0x0;
      ppppuVar19[2] = ppppuVar20;
      *ppppuVar22 = ppppuVar19;
      ppppuVar17 = ppppuVar19;
      if ((undefined8 ****)*local_b8 != (undefined8 ****)0x0) {
        ppppuVar17 = (undefined8 ****)*ppppuVar22;
        local_b8 = (undefined8 ***)*local_b8;
      }
      FUN_005d5b94(local_b0,ppppuVar17);
      local_a8 = local_a8 + 1;
LAB_00c384e4:
      puVar31 = puVar31 + 1;
      *(int *)(ppppuVar19 + 4) = *(int *)(ppppuVar19 + 4) + 1;
    } while (puVar31 != puVar23);
    uVar1 = 2;
    if ((uVar28 & 1) == 0) {
      uVar1 = 0;
    }
    uVar30 = 2;
    if (!bVar15) {
      uVar30 = uVar27;
    }
    uVar27 = 3;
    if (!bVar14) {
      uVar27 = uVar1;
    }
    if (bVar13) {
      uVar27 = 1;
    }
  }
  if (*(uint *)(param_1 + 0xe0) != uVar27) {
    *(uint *)(param_1 + 0xe0) = uVar27;
    (**(code **)(param_1 + 0x1f8))(param_1 + 0x1e0);
  }
  ppppuVar22 = (undefined8 ****)local_b0;
  ppppuVar17 = ppppuVar21;
  ppppuVar20 = ppppuVar21;
  if ((undefined8 ****)local_b0 != (undefined8 ****)0x0) {
    do {
      while (ppppuVar17 = ppppuVar22, 1 < *(int *)((long)ppppuVar17 + 0x1c)) {
        ppppuVar22 = (undefined8 ****)*ppppuVar17;
        ppppuVar20 = ppppuVar17;
        if ((undefined8 ****)*ppppuVar17 == (undefined8 ****)0x0) goto LAB_00c38834;
      }
      if (*(int *)((long)ppppuVar17 + 0x1c) == 1) goto LAB_00c3888c;
      ppppuVar22 = (undefined8 ****)ppppuVar17[1];
    } while ((undefined8 ****)ppppuVar17[1] != (undefined8 ****)0x0);
    ppppuVar20 = ppppuVar17 + 1;
  }
LAB_00c38834:
  ppppuVar22 = (undefined8 ****)operator_new(0x28);
  uVar12 = DAT_001f58a0;
  if (ppppuVar22 != (undefined8 ****)0x0) {
    *ppppuVar22 = (undefined8 ***)0x0;
    ppppuVar22[1] = (undefined8 ***)0x0;
    ppppuVar22[2] = ppppuVar17;
    *(undefined8 *)((long)ppppuVar22 + 0x1c) = uVar12;
    *ppppuVar20 = ppppuVar22;
    ppppuVar17 = ppppuVar22;
    if ((undefined8 ****)*local_b8 != (undefined8 ****)0x0) {
      ppppuVar17 = (undefined8 ****)*ppppuVar20;
      local_b8 = (undefined8 ***)*local_b8;
    }
    FUN_005d5b94(local_b0,ppppuVar17);
    local_a8 = local_a8 + 1;
    ppppuVar17 = ppppuVar22;
LAB_00c3888c:
    iVar16 = *(int *)(ppppuVar17 + 4);
    ppppuVar22 = (undefined8 ****)local_b0;
    ppppuVar17 = ppppuVar21;
    ppppuVar20 = ppppuVar21;
    if ((undefined8 ****)local_b0 != (undefined8 ****)0x0) {
      do {
        while (ppppuVar17 = ppppuVar22, 2 < *(int *)((long)ppppuVar17 + 0x1c)) {
          ppppuVar22 = (undefined8 ****)*ppppuVar17;
          ppppuVar20 = ppppuVar17;
          if ((undefined8 ****)*ppppuVar17 == (undefined8 ****)0x0) goto LAB_00c388dc;
        }
        if (*(int *)((long)ppppuVar17 + 0x1c) == 2) goto LAB_00c38934;
        ppppuVar22 = (undefined8 ****)ppppuVar17[1];
      } while ((undefined8 ****)ppppuVar17[1] != (undefined8 ****)0x0);
      ppppuVar20 = ppppuVar17 + 1;
    }
LAB_00c388dc:
    ppppuVar22 = (undefined8 ****)operator_new(0x28);
    uVar12 = DAT_001f5360;
    if (ppppuVar22 != (undefined8 ****)0x0) {
      *ppppuVar22 = (undefined8 ***)0x0;
      ppppuVar22[1] = (undefined8 ***)0x0;
      ppppuVar22[2] = ppppuVar17;
      *(undefined8 *)((long)ppppuVar22 + 0x1c) = uVar12;
      *ppppuVar20 = ppppuVar22;
      ppppuVar17 = ppppuVar22;
      if ((undefined8 ****)*local_b8 != (undefined8 ****)0x0) {
        ppppuVar17 = (undefined8 ****)*ppppuVar20;
        local_b8 = (undefined8 ***)*local_b8;
      }
      FUN_005d5b94(local_b0,ppppuVar17);
      local_a8 = local_a8 + 1;
      ppppuVar17 = ppppuVar22;
LAB_00c38934:
      iVar2 = *(int *)(ppppuVar17 + 4);
      ppppuVar22 = (undefined8 ****)local_b0;
      ppppuVar17 = ppppuVar21;
      ppppuVar20 = ppppuVar21;
      if ((undefined8 ****)local_b0 != (undefined8 ****)0x0) {
        do {
          while (ppppuVar17 = ppppuVar22, 3 < *(int *)((long)ppppuVar17 + 0x1c)) {
            ppppuVar22 = (undefined8 ****)*ppppuVar17;
            ppppuVar20 = ppppuVar17;
            if ((undefined8 ****)*ppppuVar17 == (undefined8 ****)0x0) goto LAB_00c38984;
          }
          if (*(int *)((long)ppppuVar17 + 0x1c) == 3) goto LAB_00c389dc;
          ppppuVar22 = (undefined8 ****)ppppuVar17[1];
        } while ((undefined8 ****)ppppuVar17[1] != (undefined8 ****)0x0);
        ppppuVar20 = ppppuVar17 + 1;
      }
LAB_00c38984:
      ppppuVar22 = (undefined8 ****)operator_new(0x28);
      uVar12 = DAT_001f5920;
      if (ppppuVar22 != (undefined8 ****)0x0) {
        *ppppuVar22 = (undefined8 ***)0x0;
        ppppuVar22[1] = (undefined8 ***)0x0;
        ppppuVar22[2] = ppppuVar17;
        *(undefined8 *)((long)ppppuVar22 + 0x1c) = uVar12;
        *ppppuVar20 = ppppuVar22;
        ppppuVar17 = ppppuVar22;
        if ((undefined8 ****)*local_b8 != (undefined8 ****)0x0) {
          ppppuVar17 = (undefined8 ****)*ppppuVar20;
          local_b8 = (undefined8 ***)*local_b8;
        }
        FUN_005d5b94(local_b0,ppppuVar17);
        local_a8 = local_a8 + 1;
        ppppuVar17 = ppppuVar22;
LAB_00c389dc:
        iVar3 = *(int *)(ppppuVar17 + 4);
        ppppuVar22 = (undefined8 ****)local_b0;
        ppppuVar17 = ppppuVar21;
        ppppuVar20 = ppppuVar21;
        if ((undefined8 ****)local_b0 != (undefined8 ****)0x0) {
          do {
            while (ppppuVar17 = ppppuVar22, 4 < *(int *)((long)ppppuVar17 + 0x1c)) {
              ppppuVar22 = (undefined8 ****)*ppppuVar17;
              ppppuVar20 = ppppuVar17;
              if ((undefined8 ****)*ppppuVar17 == (undefined8 ****)0x0) goto LAB_00c38a2c;
            }
            if (*(int *)((long)ppppuVar17 + 0x1c) == 4) goto LAB_00c38a8c;
            ppppuVar22 = (undefined8 ****)ppppuVar17[1];
          } while ((undefined8 ****)ppppuVar17[1] != (undefined8 ****)0x0);
          ppppuVar20 = ppppuVar17 + 1;
        }
LAB_00c38a2c:
        ppppuVar22 = (undefined8 ****)operator_new(0x28);
        uVar12 = DAT_001f4f28;
        if (ppppuVar22 != (undefined8 ****)0x0) {
          *ppppuVar22 = (undefined8 ***)0x0;
          ppppuVar22[1] = (undefined8 ***)0x0;
          ppppuVar22[2] = ppppuVar17;
          *(undefined8 *)((long)ppppuVar22 + 0x1c) = uVar12;
          *ppppuVar20 = ppppuVar22;
          ppppuVar17 = ppppuVar22;
          if ((undefined8 ****)*local_b8 != (undefined8 ****)0x0) {
            ppppuVar17 = (undefined8 ****)*ppppuVar20;
            local_b8 = (undefined8 ***)*local_b8;
          }
          FUN_005d5b94(local_b0,ppppuVar17);
          local_a8 = local_a8 + 1;
          ppppuVar17 = ppppuVar22;
LAB_00c38a8c:
          iVar4 = *(int *)(ppppuVar17 + 4);
          ppppuVar22 = (undefined8 ****)local_b0;
          ppppuVar17 = ppppuVar21;
          ppppuVar20 = ppppuVar21;
          if ((undefined8 ****)local_b0 != (undefined8 ****)0x0) {
            do {
              while (ppppuVar17 = ppppuVar22, 5 < *(int *)((long)ppppuVar17 + 0x1c)) {
                ppppuVar22 = (undefined8 ****)*ppppuVar17;
                ppppuVar20 = ppppuVar17;
                if ((undefined8 ****)*ppppuVar17 == (undefined8 ****)0x0) goto LAB_00c38ad4;
              }
              if (*(int *)((long)ppppuVar17 + 0x1c) == 5) goto LAB_00c38b30;
              ppppuVar22 = (undefined8 ****)ppppuVar17[1];
            } while ((undefined8 ****)ppppuVar17[1] != (undefined8 ****)0x0);
            ppppuVar20 = ppppuVar17 + 1;
          }
LAB_00c38ad4:
          ppppuVar22 = (undefined8 ****)operator_new(0x28);
          if (ppppuVar22 != (undefined8 ****)0x0) {
            *ppppuVar22 = (undefined8 ***)0x0;
            ppppuVar22[1] = (undefined8 ***)0x0;
            uVar12 = DAT_001f5ba0;
            ppppuVar22[2] = ppppuVar17;
            *(undefined8 *)((long)ppppuVar22 + 0x1c) = uVar12;
            *ppppuVar20 = ppppuVar22;
            ppppuVar17 = ppppuVar22;
            if ((undefined8 ****)*local_b8 != (undefined8 ****)0x0) {
              ppppuVar17 = (undefined8 ****)*ppppuVar20;
              local_b8 = (undefined8 ***)*local_b8;
            }
            FUN_005d5b94(local_b0,ppppuVar17);
            local_a8 = local_a8 + 1;
            ppppuVar17 = ppppuVar22;
LAB_00c38b30:
            iVar5 = *(int *)(ppppuVar17 + 4);
            ppppuVar22 = (undefined8 ****)local_b0;
            ppppuVar17 = ppppuVar21;
            ppppuVar20 = ppppuVar21;
            if ((undefined8 ****)local_b0 != (undefined8 ****)0x0) {
              do {
                while (ppppuVar17 = ppppuVar22, 6 < *(int *)((long)ppppuVar17 + 0x1c)) {
                  ppppuVar22 = (undefined8 ****)*ppppuVar17;
                  ppppuVar20 = ppppuVar17;
                  if ((undefined8 ****)*ppppuVar17 == (undefined8 ****)0x0) goto LAB_00c38b7c;
                }
                if (*(int *)((long)ppppuVar17 + 0x1c) == 6) goto LAB_00c38bd8;
                ppppuVar22 = (undefined8 ****)ppppuVar17[1];
              } while ((undefined8 ****)ppppuVar17[1] != (undefined8 ****)0x0);
              ppppuVar20 = ppppuVar17 + 1;
            }
LAB_00c38b7c:
            ppppuVar22 = (undefined8 ****)operator_new(0x28);
            if (ppppuVar22 != (undefined8 ****)0x0) {
              *ppppuVar22 = (undefined8 ***)0x0;
              ppppuVar22[1] = (undefined8 ***)0x0;
              uVar12 = DAT_001f50c8;
              ppppuVar22[2] = ppppuVar17;
              *(undefined8 *)((long)ppppuVar22 + 0x1c) = uVar12;
              *ppppuVar20 = ppppuVar22;
              ppppuVar17 = ppppuVar22;
              if ((undefined8 ****)*local_b8 != (undefined8 ****)0x0) {
                ppppuVar17 = (undefined8 ****)*ppppuVar20;
                local_b8 = (undefined8 ***)*local_b8;
              }
              FUN_005d5b94(local_b0,ppppuVar17);
              local_a8 = local_a8 + 1;
              ppppuVar17 = ppppuVar22;
LAB_00c38bd8:
              iVar6 = *(int *)(ppppuVar17 + 4);
              ppppuVar22 = (undefined8 ****)local_b0;
              ppppuVar17 = ppppuVar21;
              if ((undefined8 ****)local_b0 != (undefined8 ****)0x0) {
                do {
                  while (ppppuVar20 = ppppuVar22, ppppuVar17 = ppppuVar20,
                        0 < *(int *)((long)ppppuVar20 + 0x1c)) {
                    ppppuVar22 = (undefined8 ****)*ppppuVar20;
                    ppppuVar21 = ppppuVar20;
                    if ((undefined8 ****)*ppppuVar20 == (undefined8 ****)0x0) goto LAB_00c38c1c;
                  }
                  if (-1 < *(int *)((long)ppppuVar20 + 0x1c)) goto LAB_00c38c6c;
                  ppppuVar22 = (undefined8 ****)ppppuVar20[1];
                } while ((undefined8 ****)ppppuVar20[1] != (undefined8 ****)0x0);
                ppppuVar21 = ppppuVar20 + 1;
              }
LAB_00c38c1c:
              ppppuVar20 = (undefined8 ****)operator_new(0x28);
              if (ppppuVar20 != (undefined8 ****)0x0) {
                *(undefined4 *)((long)ppppuVar20 + 0x1c) = 0;
                *(undefined4 *)(ppppuVar20 + 4) = 0;
                *ppppuVar20 = (undefined8 ***)0x0;
                ppppuVar20[1] = (undefined8 ***)0x0;
                ppppuVar20[2] = ppppuVar17;
                *ppppuVar21 = ppppuVar20;
                ppppuVar22 = ppppuVar20;
                if ((undefined8 ****)*local_b8 != (undefined8 ****)0x0) {
                  ppppuVar22 = (undefined8 ****)*ppppuVar21;
                  local_b8 = (undefined8 ***)*local_b8;
                }
                FUN_005d5b94(local_b0,ppppuVar22);
                local_a8 = local_a8 + 1;
LAB_00c38c6c:
                iVar7 = *(int *)(ppppuVar20 + 4);
                iVar26 = (int)((ulong)((long)local_98 - (long)local_a0) >> 3);
                if (iVar4 < 1) {
                  if (iVar5 < 1) {
                    if (iVar7 + iVar6 == iVar26) {
                      bVar11 = 0;
                      iVar24 = 0;
                    }
                    else if (iVar7 + iVar16 < 1) {
                      if (iVar6 + iVar3 == iVar26) {
                        bVar14 = true;
                      }
                      if (bVar14) {
                        iVar24 = 3;
                        bVar11 = 1;
                      }
                      else {
                        bVar11 = 0;
                        iVar24 = 2;
                        if (iVar3 + iVar2 + iVar6 != iVar26) {
                          iVar24 = 0;
                        }
                      }
                    }
                    else {
                      bVar11 = 0;
                      iVar24 = 1;
                    }
                  }
                  else {
                    bVar11 = 0;
                    iVar24 = 5;
                  }
                }
                else {
                  bVar11 = 0;
                  iVar24 = 4;
                }
                if (*(int *)(param_1 + 0xe4) != iVar24) {
                  bVar14 = (bool)(bVar11 ^ 1);
                  if (*(int *)(param_1 + 0xe4) != 1) {
                    bVar14 = true;
                  }
                  if (!bVar14) {
                    (**(code **)(param_1 + 0x238))(param_1 + 0x220,2);
                  }
                  *(int *)(param_1 + 0xe4) = iVar24;
                  (**(code **)(param_1 + 0x238))(param_1 + 0x220,iVar24);
                }
                ppppuVar21 = (undefined8 ****)local_c8;
                ppppuVar22 = ppppuVar29;
                ppppuVar17 = ppppuVar29;
                if ((undefined8 ****)local_c8 != (undefined8 ****)0x0) {
                  do {
                    while (ppppuVar22 = ppppuVar21, 2 < *(int *)((long)ppppuVar22 + 0x1c)) {
                      ppppuVar21 = (undefined8 ****)*ppppuVar22;
                      ppppuVar17 = ppppuVar22;
                      if ((undefined8 ****)*ppppuVar22 == (undefined8 ****)0x0) goto LAB_00c38db8;
                    }
                    if (*(int *)((long)ppppuVar22 + 0x1c) == 2) goto LAB_00c38e10;
                    ppppuVar21 = (undefined8 ****)ppppuVar22[1];
                  } while ((undefined8 ****)ppppuVar22[1] != (undefined8 ****)0x0);
                  ppppuVar17 = ppppuVar22 + 1;
                }
LAB_00c38db8:
                ppppuVar21 = (undefined8 ****)operator_new(0x28);
                uVar12 = DAT_001f5360;
                if (ppppuVar21 != (undefined8 ****)0x0) {
                  *ppppuVar21 = (undefined8 ***)0x0;
                  ppppuVar21[1] = (undefined8 ***)0x0;
                  ppppuVar21[2] = ppppuVar22;
                  *(undefined8 *)((long)ppppuVar21 + 0x1c) = uVar12;
                  *ppppuVar17 = ppppuVar21;
                  ppppuVar22 = ppppuVar21;
                  if ((undefined8 ****)*local_d0 != (undefined8 ****)0x0) {
                    ppppuVar22 = (undefined8 ****)*ppppuVar17;
                    local_d0 = (undefined8 ***)*local_d0;
                  }
                  FUN_005d5b94(local_c8,ppppuVar22);
                  local_c0 = local_c0 + 1;
                  ppppuVar22 = ppppuVar21;
LAB_00c38e10:
                  iVar24 = *(int *)(ppppuVar22 + 4);
                  ppppuVar21 = (undefined8 ****)local_c8;
                  ppppuVar22 = ppppuVar29;
                  ppppuVar17 = ppppuVar29;
                  if ((undefined8 ****)local_c8 != (undefined8 ****)0x0) {
                    do {
                      while (ppppuVar20 = ppppuVar21, ppppuVar22 = ppppuVar20,
                            1 < *(int *)((long)ppppuVar20 + 0x1c)) {
                        ppppuVar21 = (undefined8 ****)*ppppuVar20;
                        ppppuVar17 = ppppuVar20;
                        if ((undefined8 ****)*ppppuVar20 == (undefined8 ****)0x0) goto LAB_00c38e5c;
                      }
                      if (*(int *)((long)ppppuVar20 + 0x1c) == 1) goto LAB_00c38ebc;
                      ppppuVar21 = (undefined8 ****)ppppuVar20[1];
                    } while ((undefined8 ****)ppppuVar20[1] != (undefined8 ****)0x0);
                    ppppuVar17 = ppppuVar20 + 1;
                  }
LAB_00c38e5c:
                  ppppuVar20 = (undefined8 ****)operator_new(0x28);
                  uVar12 = DAT_001f58a0;
                  if (ppppuVar20 != (undefined8 ****)0x0) {
                    *ppppuVar20 = (undefined8 ***)0x0;
                    ppppuVar20[1] = (undefined8 ***)0x0;
                    ppppuVar20[2] = ppppuVar22;
                    *(undefined8 *)((long)ppppuVar20 + 0x1c) = uVar12;
                    *ppppuVar17 = ppppuVar20;
                    ppppuVar21 = ppppuVar20;
                    if ((undefined8 ****)*local_d0 != (undefined8 ****)0x0) {
                      ppppuVar21 = (undefined8 ****)*ppppuVar17;
                      local_d0 = (undefined8 ***)*local_d0;
                    }
                    FUN_005d5b94(local_c8,ppppuVar21);
                    local_c0 = local_c0 + 1;
LAB_00c38ebc:
                    iVar8 = *(int *)(ppppuVar20 + 4);
                    ppppuVar21 = (undefined8 ****)local_c8;
                    ppppuVar22 = ppppuVar29;
                    ppppuVar17 = ppppuVar29;
                    if ((undefined8 ****)local_c8 != (undefined8 ****)0x0) {
                      do {
                        while (ppppuVar20 = ppppuVar21, ppppuVar22 = ppppuVar20,
                              4 < *(int *)((long)ppppuVar20 + 0x1c)) {
                          ppppuVar21 = (undefined8 ****)*ppppuVar20;
                          ppppuVar17 = ppppuVar20;
                          if ((undefined8 ****)*ppppuVar20 == (undefined8 ****)0x0)
                          goto LAB_00c38f04;
                        }
                        if (*(int *)((long)ppppuVar20 + 0x1c) == 4) goto LAB_00c38f60;
                        ppppuVar21 = (undefined8 ****)ppppuVar20[1];
                      } while ((undefined8 ****)ppppuVar20[1] != (undefined8 ****)0x0);
                      ppppuVar17 = ppppuVar20 + 1;
                    }
LAB_00c38f04:
                    ppppuVar20 = (undefined8 ****)operator_new(0x28);
                    if (ppppuVar20 != (undefined8 ****)0x0) {
                      *ppppuVar20 = (undefined8 ***)0x0;
                      ppppuVar20[1] = (undefined8 ***)0x0;
                      uVar12 = DAT_001f4f28;
                      ppppuVar20[2] = ppppuVar22;
                      *(undefined8 *)((long)ppppuVar20 + 0x1c) = uVar12;
                      *ppppuVar17 = ppppuVar20;
                      ppppuVar21 = ppppuVar20;
                      if ((undefined8 ****)*local_d0 != (undefined8 ****)0x0) {
                        ppppuVar21 = (undefined8 ****)*ppppuVar17;
                        local_d0 = (undefined8 ***)*local_d0;
                      }
                      FUN_005d5b94(local_c8,ppppuVar21);
                      local_c0 = local_c0 + 1;
LAB_00c38f60:
                      iVar9 = *(int *)(ppppuVar20 + 4);
                      ppppuVar21 = (undefined8 ****)local_c8;
                      ppppuVar22 = ppppuVar29;
                      ppppuVar17 = ppppuVar29;
                      if ((undefined8 ****)local_c8 != (undefined8 ****)0x0) {
                        do {
                          while (ppppuVar20 = ppppuVar21, ppppuVar22 = ppppuVar20,
                                3 < *(int *)((long)ppppuVar20 + 0x1c)) {
                            ppppuVar21 = (undefined8 ****)*ppppuVar20;
                            ppppuVar17 = ppppuVar20;
                            if ((undefined8 ****)*ppppuVar20 == (undefined8 ****)0x0)
                            goto LAB_00c38fa8;
                          }
                          if (*(int *)((long)ppppuVar20 + 0x1c) == 3) goto LAB_00c39000;
                          ppppuVar21 = (undefined8 ****)ppppuVar20[1];
                        } while ((undefined8 ****)ppppuVar20[1] != (undefined8 ****)0x0);
                        ppppuVar17 = ppppuVar20 + 1;
                      }
LAB_00c38fa8:
                      ppppuVar20 = (undefined8 ****)operator_new(0x28);
                      uVar12 = DAT_001f5920;
                      if (ppppuVar20 != (undefined8 ****)0x0) {
                        *ppppuVar20 = (undefined8 ***)0x0;
                        ppppuVar20[1] = (undefined8 ***)0x0;
                        ppppuVar20[2] = ppppuVar22;
                        *(undefined8 *)((long)ppppuVar20 + 0x1c) = uVar12;
                        *ppppuVar17 = ppppuVar20;
                        ppppuVar21 = ppppuVar20;
                        if ((undefined8 ****)*local_d0 != (undefined8 ****)0x0) {
                          ppppuVar21 = (undefined8 ****)*ppppuVar17;
                          local_d0 = (undefined8 ***)*local_d0;
                        }
                        FUN_005d5b94(local_c8,ppppuVar21);
                        local_c0 = local_c0 + 1;
LAB_00c39000:
                        iVar10 = *(int *)(ppppuVar20 + 4);
                        ppppuVar21 = (undefined8 ****)local_c8;
                        ppppuVar22 = ppppuVar29;
                        if ((undefined8 ****)local_c8 != (undefined8 ****)0x0) {
                          do {
                            while (ppppuVar17 = ppppuVar21, ppppuVar29 = ppppuVar17,
                                  0 < *(int *)((long)ppppuVar17 + 0x1c)) {
                              ppppuVar21 = (undefined8 ****)*ppppuVar17;
                              ppppuVar22 = ppppuVar17;
                              if ((undefined8 ****)*ppppuVar17 == (undefined8 ****)0x0)
                              goto LAB_00c39040;
                            }
                            if (-1 < *(int *)((long)ppppuVar17 + 0x1c)) goto LAB_00c3908c;
                            ppppuVar21 = (undefined8 ****)ppppuVar17[1];
                          } while ((undefined8 ****)ppppuVar17[1] != (undefined8 ****)0x0);
                          ppppuVar22 = ppppuVar17 + 1;
                        }
LAB_00c39040:
                        ppppuVar17 = (undefined8 ****)operator_new(0x28);
                        if (ppppuVar17 != (undefined8 ****)0x0) {
                          *(undefined4 *)((long)ppppuVar17 + 0x1c) = 0;
                          *(undefined4 *)(ppppuVar17 + 4) = 0;
                          *ppppuVar17 = (undefined8 ***)0x0;
                          ppppuVar17[1] = (undefined8 ***)0x0;
                          ppppuVar17[2] = ppppuVar29;
                          *ppppuVar22 = ppppuVar17;
                          ppppuVar21 = ppppuVar17;
                          if ((undefined8 ****)*local_d0 != (undefined8 ****)0x0) {
                            ppppuVar21 = (undefined8 ****)*ppppuVar22;
                            local_d0 = (undefined8 ***)*local_d0;
                          }
                          FUN_005d5b94(local_c8,ppppuVar21);
                          local_c0 = local_c0 + 1;
LAB_00c3908c:
                          if (iVar9 + iVar4 < 1) {
                            if (iVar5 < 1) {
                              if (*(int *)(ppppuVar17 + 4) + iVar7 + iVar10 + iVar6 == iVar26 * 2) {
                                iVar16 = 0;
                              }
                              else if (iVar8 + iVar16 + *(int *)(ppppuVar17 + 4) + iVar7 < 1) {
                                iVar16 = 2;
                                if (iVar3 + iVar2 + iVar24 + iVar10 + iVar6 != iVar26 * 2) {
                                  iVar16 = 0;
                                }
                              }
                              else {
                                iVar16 = 1;
                              }
                            }
                            else {
                              iVar16 = 3;
                            }
                          }
                          else {
                            iVar16 = 4;
                          }
                          if (*(int *)(param_1 + 0xe8) != iVar16) {
                            *(int *)(param_1 + 0xe8) = iVar16;
                            (**(code **)(param_1 + 0x218))(param_1 + 0x200);
                          }
                          uVar27 = 0;
                          if (local_a0 != local_98) {
                            uVar27 = uVar30;
                          }
                          if (*(uint *)(param_1 + 0xec) != uVar27) {
                            *(uint *)(param_1 + 0xec) = uVar27;
                            (**(code **)(param_1 + 600))(param_1 + 0x240);
                          }
                          local_70[0] = &local_d0;
                          FUN_00c3ad00(local_70,local_c8);
                          local_d0 = &local_b8;
                          FUN_00c3ac8c(&local_d0,local_b0);
                          if (local_a0 != (undefined8 *)0x0) {
                            uVar25 = (ulong)((long)local_98 + (-8 - ((long)local_98 << 0x3d))) >> 3;
                            uVar28 = (ulong)(((long)local_a0 - (long)local_98 << 0x3d) -
                                            ((long)local_a0 - (long)local_98)) >> 3;
                            if (uVar25 <= uVar28) {
                              uVar28 = uVar25;
                            }
                            puVar23 = local_98;
                            if ((1 < uVar28) &&
                               ((((int)local_a0 - (int)local_98 | -(int)local_98) & 7U) == 0)) {
                              uVar28 = uVar28 & 0x1ffffffffffffffe;
                              puVar23 = local_98 + -uVar28;
                              do {
                                uVar28 = uVar28 - 2;
                              } while (uVar28 != 0);
                            }
                            while (puVar23 != local_a0) {
                              puVar23 = puVar23 + -1;
                              if (puVar23 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                                std::__Cr::__libcpp_verbose_abort
                                          ("%s",
                                           "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                                          );
                              }
                            }
                            local_98 = local_a0;
                            operator_delete(local_a0);
                          }
                          if ((local_88 != (char **)0x0) && (**local_88 != '\0')) {
                            FUN_0066d348(0x45,*local_88,local_88[1],0,0,0,0,0,0);
                          }
                          return;
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
LAB_00c39210:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c392c0  FUN_00c392c0 =====

void FUN_00c392c0(undefined8 param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    uVar3 = (**(code **)*param_2)(param_2);
    uVar1 = (**(code **)(*param_2 + 8))(param_2);
    FUN_00623bb0(&DAT_001f647d,"../../pc/jsep_transport_controller.cc",0x26c1," Transport ",uVar3,
                 " writability changed to ",uVar1 & 1,&DAT_001ea377);
  }
  FUN_00c383cc(param_1);
  return;
}


// ===== 00c3937c  FUN_00c3937c =====

void FUN_00c3937c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  void *pvVar1;
  undefined8 *puVar2;
  byte bVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined1 auStack_210 [408];
  void *local_78;
  void *local_70;
  void *local_68;
  undefined8 *local_60;
  ulong uStack_58;
  
  uVar5 = FUN_00aff308(param_3);
  if ((uVar5 & 1) == 0) {
    puVar6 = (undefined8 *)(**(code **)*param_2)(param_2);
    puVar2 = (undefined8 *)*puVar6;
    uVar5 = puVar6[1];
    bVar3 = *(byte *)((long)puVar6 + 0x17);
    FUN_00afef10(auStack_210,param_3);
    local_78 = operator_new(0x198);
    pvVar1 = (void *)((long)local_78 + 0x198);
    local_68 = pvVar1;
    if (local_78 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    if (-1 < (char)bVar3) {
      uVar5 = (ulong)bVar3;
      puVar2 = puVar6;
    }
    FUN_00afef10(local_78,auStack_210);
    local_70 = pvVar1;
    local_60 = puVar2;
    uStack_58 = uVar5;
    (**(code **)(param_1 + 0x1d8))(param_1 + 0x1c0,&local_60,&local_78);
    pvVar4 = local_78;
    pvVar1 = local_70;
    if (local_78 != (void *)0x0) {
      while (pvVar4 != pvVar1) {
        pvVar1 = (void *)((long)pvVar1 + -0x198);
        if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_00aff0f8(pvVar1);
      }
      local_70 = pvVar4;
      operator_delete(local_78);
    }
    FUN_00aff0f8(auStack_210);
  }
  return;
}


// ===== 00c394bc  FUN_00c394bc =====

void FUN_00c394bc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  long lVar1;
  undefined1 auStack_58 [24];
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar1 = *param_1;
  FUN_007b5434(auStack_58);
  local_40 = param_3;
  uStack_38 = param_4;
  (**(code **)(lVar1 + 0x18))(lVar1,auStack_58,&local_40,param_5);
  FUN_007b5554(auStack_58);
  return;
}


// ===== 00c39528  FUN_00c39528 =====

void FUN_00c39528(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x10))(0,pvVar1,pvVar1);
  operator_delete(pvVar1);
  return;
}


// ===== 00c39568  FUN_00c39568 =====

void FUN_00c39568(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00c39568(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
LAB_00c39648:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar1 = (void *)param_2[5];
      puVar5 = (undefined8 *)param_2[1];
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)param_2[6];
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
          if (pvVar2 == (void *)0x0) goto LAB_00c39648;
        }
        param_2[6] = pvVar1;
        operator_delete(pvVar1);
      }
      operator_delete(param_2);
      param_2 = puVar5;
    } while (puVar5 != (undefined8 *)0x0);
  }
  return;
}


// ===== 00c3965c  FUN_00c3965c =====

void FUN_00c3965c(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

{
  size_t __n;
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  size_t __n_00;
  void *pvVar6;
  
  uVar2 = param_1[2];
  pvVar6 = (void *)*param_1;
  if ((ulong)((long)(uVar2 - (long)pvVar6) >> 2) < param_4) {
    if (pvVar6 == (void *)0x0) {
LAB_00c39800:
      if (param_4 >> 0x3e == 0) {
        uVar5 = (long)uVar2 >> 1;
        if ((ulong)((long)uVar2 >> 1) <= param_4) {
          uVar5 = param_4;
        }
        if (0x7ffffffffffffffb < uVar2) {
          uVar5 = 0x3fffffffffffffff;
        }
        if (uVar5 >> 0x3e == 0) {
          pvVar6 = operator_new(uVar5 * 4);
          *param_1 = pvVar6;
          param_1[1] = pvVar6;
          param_1[2] = (void *)((long)pvVar6 + uVar5 * 4);
          memcpy(pvVar6,param_2,param_3 - (long)param_2);
          lVar1 = (long)pvVar6 + (param_3 - (long)param_2);
          goto LAB_00c3985c;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_005d348c();
    }
    pvVar3 = (void *)param_1[1];
    uVar5 = (ulong)((long)pvVar3 + (-4 - ((long)pvVar3 << 0x3e))) >> 2;
    uVar2 = (ulong)(((long)pvVar6 - (long)pvVar3 << 0x3e) - ((long)pvVar6 - (long)pvVar3)) >> 2;
    if (uVar5 <= uVar2) {
      uVar2 = uVar5;
    }
    if ((1 < uVar2) && ((((int)pvVar6 - (int)pvVar3 | -(int)pvVar3) & 3U) == 0)) {
      uVar2 = uVar2 & 0x3ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar2 * -4);
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    do {
      if (pvVar3 == pvVar6) {
        param_1[1] = pvVar6;
        operator_delete(pvVar6);
        uVar2 = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        goto LAB_00c39800;
      }
      pvVar3 = (void *)((long)pvVar3 + -4);
    } while (pvVar3 != (void *)0x0);
  }
  else {
    __n = param_1[1] - (long)pvVar6;
    if ((ulong)((long)__n >> 2) < param_4) {
      memmove(pvVar6,param_2,__n);
      pvVar6 = (void *)param_1[1];
      __n_00 = param_3 - (long)((long)param_2 + __n);
      memmove(pvVar6,(void *)((long)param_2 + __n),__n_00);
      lVar1 = (long)pvVar6 + __n_00;
LAB_00c3985c:
      param_1[1] = lVar1;
      return;
    }
    memmove(pvVar6,param_2,param_3 - (long)param_2);
    lVar1 = param_1[1];
    lVar4 = (long)pvVar6 + (param_3 - (lVar1 + (long)param_2));
    uVar2 = (ulong)((lVar4 << 0x3e) - lVar4) >> 2;
    uVar5 = (lVar1 - (lVar1 << 0x3e)) - 4U >> 2;
    if (uVar5 <= uVar2) {
      uVar2 = uVar5;
    }
    lVar4 = (long)pvVar6 + (param_3 - (long)param_2);
    if ((1 < uVar2) &&
       (((((int)pvVar6 + (int)param_3) - ((int)lVar1 + (int)param_2) | -(int)lVar1) & 3U) == 0)) {
      uVar2 = uVar2 & 0x3ffffffffffffffe;
      lVar1 = lVar1 + uVar2 * -4;
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    do {
      if (lVar1 == lVar4) {
        param_1[1] = lVar4;
        return;
      }
      lVar1 = lVar1 + -4;
    } while (lVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c39884  FUN_00c39884 =====

uint FUN_00c39884(long *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  long *local_28;
  
  plVar7 = *(long **)(*param_1 + 0x140);
  if (plVar7 != (long *)0x0) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    if (param_3 == 0) {
      local_28 = (long *)0x0;
      uVar4 = 0;
      pcVar6 = *(code **)(*plVar7 + 0x10);
      lVar5 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_3 + 0x20);
      local_28 = *(long **)(param_3 + 0x28);
      if (local_28 != (long *)0x0) {
        (**(code **)*local_28)();
      }
      pcVar6 = *(code **)(*plVar7 + 0x10);
      lVar5 = 0;
      if (*(long *)(param_3 + 0x30) != 0) {
        lVar5 = *(long *)(param_3 + 0x30) + 8;
      }
    }
    uVar3 = (*pcVar6)(plVar7,uVar1,uVar2,uVar4,&local_28,lVar5);
    plVar7 = (long *)(uVar3 & 0xffffffff);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 8))(local_28);
    }
  }
  return (uint)plVar7 & 1;
}


// ===== 00c3995c  FUN_00c3995c =====

void FUN_00c3995c(undefined8 *param_1)

{
  FUN_00c383cc(*param_1);
  return;
}


// ===== 00c39968  FUN_00c39968 =====

void FUN_00c39968(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 ***pppuVar3;
  undefined4 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 local_68 [2];
  undefined8 **local_60;
  ulong uStack_58;
  undefined7 local_50;
  byte bStack_49;
  undefined4 uStack_48;
  undefined3 uStack_44;
  
  plVar5 = (long *)param_1[1];
  lVar1 = *plVar5;
  iVar2 = *(int *)plVar5[1];
  uVar6 = *(undefined8 *)plVar5[2];
  uVar7 = *(undefined8 *)plVar5[3];
  if (*(int *)(lVar1 + 0x3a0) == 0) {
    FUN_00c34468(lVar1,iVar2 != 0);
  }
  FUN_00c3458c(local_68,lVar1,1,iVar2,uVar6,uVar7);
  puVar4 = (undefined4 *)*param_1;
  plVar5 = (long *)(puVar4 + 2);
  *puVar4 = local_68[0];
  if (puVar4 != local_68) {
    if (*(char *)((long)puVar4 + 0x1f) < '\0') {
      pppuVar3 = (undefined8 ***)local_60;
      if (-1 < (char)bStack_49) {
        uStack_58 = (ulong)bStack_49;
        pppuVar3 = &local_60;
      }
      FUN_00547f08(plVar5,pppuVar3,uStack_58);
    }
    else if ((char)bStack_49 < '\0') {
      FUN_00547fc0(plVar5,local_60,uStack_58);
    }
    else {
      *(ulong *)(puVar4 + 6) = CONCAT17(bStack_49,local_50);
      *(ulong *)(puVar4 + 4) = uStack_58;
      *plVar5 = (long)local_60;
    }
  }
  *(uint *)((long)puVar4 + 0x23) = CONCAT31(uStack_44,uStack_48._3_1_);
  puVar4[8] = uStack_48;
  if ((char)bStack_49 < '\0') {
    operator_delete(local_60);
  }
  return;
}


// ===== 00c39a80  FUN_00c39a80 =====

void FUN_00c39a80(undefined8 *param_1)

{
  undefined8 ***pppuVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined4 local_48 [2];
  undefined8 **local_40;
  ulong uStack_38;
  undefined7 local_30;
  byte bStack_29;
  undefined4 uStack_28;
  undefined3 uStack_24;
  
  puVar4 = (undefined8 *)param_1[1];
  FUN_00c3458c(local_48,*puVar4,0,*(undefined4 *)puVar4[1],*(undefined8 *)puVar4[2],
               *(undefined8 *)puVar4[3]);
  puVar2 = (undefined4 *)*param_1;
  plVar3 = (long *)(puVar2 + 2);
  *puVar2 = local_48[0];
  if (puVar2 != local_48) {
    if (*(char *)((long)puVar2 + 0x1f) < '\0') {
      pppuVar1 = (undefined8 ***)local_40;
      if (-1 < (char)bStack_29) {
        uStack_38 = (ulong)bStack_29;
        pppuVar1 = &local_40;
      }
      FUN_00547f08(plVar3,pppuVar1,uStack_38);
    }
    else if ((char)bStack_29 < '\0') {
      FUN_00547fc0(plVar3,local_40,uStack_38);
    }
    else {
      *(ulong *)(puVar2 + 6) = CONCAT17(bStack_29,local_30);
      *(ulong *)(puVar2 + 4) = uStack_38;
      *plVar3 = (long)local_40;
    }
  }
  *(uint *)((long)puVar2 + 0x23) = CONCAT31(uStack_24,uStack_28._3_1_);
  puVar2[8] = uStack_28;
  if ((char)bStack_29 < '\0') {
    operator_delete(local_40);
  }
  return;
}


// ===== 00c39b60  FUN_00c39b60 =====

void FUN_00c39b60(undefined8 param_1,undefined8 param_2)

{
  FUN_00c404b8(param_2);
  return;
}


// ===== 00c39b6c  FUN_00c39b6c =====

void FUN_00c39b6c(undefined8 *param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte bVar3;
  
  puVar1 = (undefined8 *)((long *)param_1[1])[1];
  pbVar2 = (byte *)FUN_00c3c1a4(*(long *)param_1[1] + 0x50,*puVar1,puVar1[1]);
  if (pbVar2 == (byte *)0x0) {
    bVar3 = 0;
  }
  else {
    bVar3 = *pbVar2;
  }
  *(byte *)*param_1 = bVar3 & 1;
  return;
}


// ===== 00c39bc0  FUN_00c39bc0 =====

void FUN_00c39bc0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined1 uStack_69;
  long local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long *local_48;
  long *local_40;
  long local_38;
  
  lVar1 = *(long *)param_1[1];
  puVar3 = (undefined8 *)((long *)param_1[1])[1];
  uVar2 = *puVar3;
  uVar4 = puVar3[1];
  local_58 = uVar2;
  uStack_50 = uVar4;
  uVar5 = FUN_007e18fc(*(undefined8 *)(lVar1 + 0x30));
  if ((uVar5 & 1) == 0) {
    puStack_60 = &local_58;
    local_48 = &local_38;
    local_40 = &local_68;
    local_38 = -0x555555ff55555600;
    local_68 = lVar1;
    (**(code **)(**(long **)(lVar1 + 0x30) + 0x60))
              (*(long **)(lVar1 + 0x30),&local_48,FUN_00c39bc0,&uStack_69);
  }
  else {
    local_38 = FUN_00c3c3a8(lVar1 + 0x50,uVar2,uVar4);
    if (local_38 != 0) {
      local_38 = FUN_00c40560();
    }
  }
  puVar6 = (undefined4 *)*param_1;
  *puVar6 = (int)local_38;
  *(char *)(puVar6 + 1) = (char)((ulong)local_38 >> 0x20);
  return;
}


// ===== 00c39c80  FUN_00c39c80 =====

void FUN_00c39c80(undefined8 *param_1)

{
  byte bVar1;
  
  bVar1 = FUN_00c35b38(*(undefined8 *)param_1[1],((undefined8 *)param_1[1])[1]);
  *(byte *)*param_1 = bVar1 & 1;
  return;
}


// ===== 00c39cbc  FUN_00c39cbc =====

void FUN_00c39cbc(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  
  lVar2 = *(long *)(*param_1 + 0x3a8);
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2);
  }
  pvVar3 = *(void **)(param_2 + 8);
  if ((pvVar3 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar3), iVar1 == 1)) {
    FUN_00833e18(pvVar3);
    operator_delete(pvVar3);
  }
  *(long *)(param_2 + 8) = lVar2;
  return;
}


// ===== 00c39d34  FUN_00c39d34 =====

void FUN_00c39d34(undefined8 *param_1)

{
  FUN_00c35da0(*param_1);
  return;
}


// ===== 00c39d40  FUN_00c39d40 =====

void FUN_00c39d40(undefined8 *param_1)

{
  byte bVar1;
  
  bVar1 = FUN_00c35f8c(*(undefined8 *)param_1[1],*(undefined8 *)((undefined8 *)param_1[1])[1]);
  *(byte *)*param_1 = bVar1 & 1;
  return;
}


// ===== 00c39d80  FUN_00c39d80 =====

void FUN_00c39d80(undefined8 *param_1)

{
  undefined8 ***pppuVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined4 local_48 [2];
  undefined8 **local_40;
  ulong uStack_38;
  undefined7 local_30;
  byte bStack_29;
  undefined4 uStack_28;
  undefined3 uStack_24;
  
  FUN_00c3622c(local_48,*(undefined8 *)param_1[1]);
  puVar2 = (undefined4 *)*param_1;
  plVar3 = (long *)(puVar2 + 2);
  *puVar2 = local_48[0];
  if (puVar2 != local_48) {
    if (*(char *)((long)puVar2 + 0x1f) < '\0') {
      pppuVar1 = (undefined8 ***)local_40;
      if (-1 < (char)bStack_29) {
        uStack_38 = (ulong)bStack_29;
        pppuVar1 = &local_40;
      }
      FUN_00547f08(plVar3,pppuVar1,uStack_38);
    }
    else if ((char)bStack_29 < '\0') {
      FUN_00547fc0(plVar3,local_40,uStack_38);
    }
    else {
      *(ulong *)(puVar2 + 6) = CONCAT17(bStack_29,local_30);
      *(ulong *)(puVar2 + 4) = uStack_38;
      *plVar3 = (long)local_40;
    }
  }
  *(uint *)((long)puVar2 + 0x23) = CONCAT31(uStack_24,uStack_28._3_1_);
  puVar2[8] = uStack_28;
  if ((char)bStack_29 < '\0') {
    operator_delete(local_40);
  }
  return;
}


// ===== 00c39e4c  FUN_00c39e4c =====

void FUN_00c39e4c(undefined8 *param_1)

{
  FUN_00c383cc(*param_1);
  return;
}


// ===== 00c39e58  FUN_00c39e58 =====

void FUN_00c39e58(undefined8 *param_1)

{
  FUN_00c3937c(*param_1);
  return;
}


// ===== 00c39e64  FUN_00c39e64 =====

void FUN_00c39e64(long *param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00c39e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x278))(*param_1 + 0x260,param_3);
  return;
}


// ===== 00c39e7c  FUN_00c39e7c =====

void FUN_00c39e7c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c39e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x298))(*param_1 + 0x280);
  return;
}


// ===== 00c39e90  FUN_00c39e90 =====

void FUN_00c39e90(long *param_1)

{
  char *pcVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  iVar2 = *(int *)(lVar4 + 0x3a0);
  uVar3 = FUN_00417e08();
  if ((uVar3 & 1) == 0) {
    pcVar1 = "controlled";
    if (iVar2 != 0) {
      pcVar1 = "controlling";
    }
    FUN_00623bb0(&DAT_001f4ead,"../../pc/jsep_transport_controller.cc",0x2869,
                 "Got role conflict; switching to ",pcVar1," role.");
  }
  FUN_00c34468(lVar4,iVar2 == 0);
  return;
}


// ===== 00c39f0c  FUN_00c39f0c =====

void FUN_00c39f0c(undefined8 *param_1,long *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    uVar3 = (**(code **)*param_2)(param_2);
    uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
    FUN_00623bb0(&DAT_00256769,"../../pc/jsep_transport_controller.cc",0x28b1,uVar3," Transport ",
                 uVar1," state changed. Check if state is complete.");
  }
  FUN_00c383cc(uVar4);
  return;
}


// ===== 00c39f9c  FUN_00c39f9c =====

void FUN_00c39f9c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c39fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2b8))(*param_1 + 0x2a0);
  return;
}


// ===== 00c39fb0  FUN_00c39fb0 =====

void FUN_00c39fb0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005dc0b4();
}


// ===== 00c39fc0  FUN_00c39fc0 =====

void FUN_00c39fc0(undefined8 *param_1)

{
  FUN_00c392c0(*param_1);
  return;
}


// ===== 00c39fcc  FUN_00c39fcc =====

void FUN_00c39fcc(undefined8 *param_1)

{
  FUN_00c383cc(*param_1);
  return;
}


// ===== 00c39fd8  FUN_00c39fd8 =====

void FUN_00c39fd8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c39fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1b8))(*param_1 + 0x1a0);
  return;
}


// ===== 00c39fec  FUN_00c39fec =====

void FUN_00c39fec(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_00d4d050;
  FUN_007ebdcc(param_1[0x1a]);
  pvVar2 = (void *)param_1[0x1a];
  if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2), iVar1 == 1)) {
    operator_delete(pvVar2);
  }
  FUN_007b5d24(param_1 + 0x16);
  FUN_007b5d24(param_1 + 0x12);
  FUN_007b5d24(param_1 + 0xe);
  (*(code *)param_1[0xc])(0,param_1 + 10,param_1 + 10);
  FUN_007b5d24(param_1 + 5);
  FUN_007b5d24(param_1 + 1);
  return;
}


// ===== 00c3a084  FUN_00c3a084 =====

void FUN_00c3a084(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc3a08c);
  (*pcVar1)();
}


// ===== 00c3a08c  FUN_00c3a08c =====

void FUN_00c3a08c(void)

{
  return;
}


// ===== 00c3a094  FUN_00c3a094 =====

void FUN_00c3a094(undefined8 *param_1)

{
  FUN_00c383cc(*param_1);
  return;
}


// ===== 00c3a0a0  FUN_00c3a0a0 =====

void FUN_00c3a0a0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  FUN_007b5434(auStack_60);
  uVar3 = *param_3;
  uVar1 = *(uint *)(param_3 + 1);
  lVar2 = *param_1;
  FUN_007b5434(auStack_48,auStack_60);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0xffffffffffffffff;
  }
  (**(code **)(lVar2 + 0x168))(lVar2 + 0x150,auStack_48,uVar3);
  FUN_007b5554(auStack_48);
  FUN_007b5554(auStack_60);
  return;
}


// ===== 00c3a120  FUN_00c3a120 =====

void FUN_00c3a120(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c3a130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x188))(*param_1 + 0x170);
  return;
}


// ===== 00c3a134  FUN_00c3a134 =====

void FUN_00c3a134(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long local_18;
  
  lVar3 = *(long *)(param_2 + 0x20);
  local_18 = *(long *)(lVar3 + 0xe0);
  if (local_18 != 0) {
    lVar3 = *param_1;
    plVar1 = *(long **)(lVar3 + 8);
    if (plVar1 < *(long **)(lVar3 + 0x10)) {
      if (plVar1 == (long *)0x0) goto LAB_00c3a1bc;
      plVar2 = plVar1 + 1;
      *plVar1 = local_18;
    }
    else {
      plVar2 = (long *)FUN_00c3a1f0(lVar3,&local_18);
    }
    *(long **)(lVar3 + 8) = plVar2;
    lVar3 = *(long *)(param_2 + 0x20);
  }
  local_18 = *(long *)(lVar3 + 0xe8);
  if (local_18 != 0) {
    lVar3 = *param_1;
    plVar1 = *(long **)(lVar3 + 8);
    if (plVar1 < *(long **)(lVar3 + 0x10)) {
      if (plVar1 == (long *)0x0) {
LAB_00c3a1bc:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      plVar2 = plVar1 + 1;
      *plVar1 = local_18;
    }
    else {
      plVar2 = (long *)FUN_00c3a1f0(lVar3,&local_18);
    }
    *(long **)(lVar3 + 8) = plVar2;
  }
  return;
}


// ===== 00c3a1f0  FUN_00c3a1f0 =====

undefined8 * FUN_00c3a1f0(long *param_1,undefined8 *param_2)

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
    FUN_00c3a2e4();
LAB_00c3a2e0:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00c3a2e0;
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


// ===== 00c3a2e4  FUN_00c3a2e4 =====

void FUN_00c3a2e4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c3a2fc  FUN_00c3a2fc =====

void FUN_00c3a2fc(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long local_18;
  
  lVar3 = *(long *)(param_2 + 0x20);
  local_18 = *(long *)(lVar3 + 0xe0);
  if (local_18 != 0) {
    lVar3 = *param_1;
    plVar1 = *(long **)(lVar3 + 8);
    if (plVar1 < *(long **)(lVar3 + 0x10)) {
      if (plVar1 == (long *)0x0) goto LAB_00c3a384;
      plVar2 = plVar1 + 1;
      *plVar1 = local_18;
    }
    else {
      plVar2 = (long *)FUN_00c3a1f0(lVar3,&local_18);
    }
    *(long **)(lVar3 + 8) = plVar2;
    lVar3 = *(long *)(param_2 + 0x20);
  }
  local_18 = *(long *)(lVar3 + 0xe8);
  if (local_18 != 0) {
    lVar3 = *param_1;
    plVar1 = *(long **)(lVar3 + 8);
    if (plVar1 < *(long **)(lVar3 + 0x10)) {
      if (plVar1 == (long *)0x0) {
LAB_00c3a384:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      plVar2 = plVar1 + 1;
      *plVar1 = local_18;
    }
    else {
      plVar2 = (long *)FUN_00c3a1f0(lVar3,&local_18);
    }
    *(long **)(lVar3 + 8) = plVar2;
  }
  return;
}


// ===== 00c3a3b8  FUN_00c3a3b8 =====

void FUN_00c3a3b8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00c3a3b8(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar1 = (undefined8 *)param_2[1];
      if (*(char *)((long)param_2 + 0x37) < '\0') {
        operator_delete((void *)param_2[4]);
      }
      operator_delete(param_2);
      param_2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


// ===== 00c3a44c  FUN_00c3a44c =====

undefined1  [16] FUN_00c3a44c(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  size_t __n;
  long lVar2;
  long lVar3;
  undefined8 *__s1;
  ulong uVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  
  plVar9 = (long *)*param_1;
  plVar10 = plVar9 + 1;
  plVar8 = (long *)*plVar10;
  plVar11 = plVar10;
  if (plVar8 != (long *)0x0) {
    __s1 = (undefined8 *)*param_2;
    uVar1 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      __s1 = param_2;
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    do {
      while( true ) {
        plVar6 = plVar8;
        plVar8 = (long *)plVar6[4];
        uVar4 = plVar6[5];
        if (-1 < (char)*(byte *)((long)plVar6 + 0x37)) {
          plVar8 = plVar6 + 4;
          uVar4 = (ulong)*(byte *)((long)plVar6 + 0x37);
        }
        __n = uVar4;
        if (uVar1 <= uVar4) {
          __n = uVar1;
        }
        iVar5 = memcmp(__s1,plVar8,__n);
        plVar10 = plVar6;
        if (iVar5 != 0) break;
        if (uVar1 == uVar4) {
          uVar7 = 0;
          goto LAB_00c3a574;
        }
        if (uVar4 <= uVar1) goto LAB_00c3a494;
LAB_00c3a4e4:
        plVar8 = (long *)*plVar6;
        plVar11 = plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_00c3a500;
      }
      if (iVar5 < 0) goto LAB_00c3a4e4;
LAB_00c3a494:
      plVar8 = (long *)plVar6[1];
    } while ((long *)plVar6[1] != (long *)0x0);
    plVar11 = plVar6 + 1;
  }
LAB_00c3a500:
  plVar6 = (long *)operator_new(0x40);
  if (plVar6 != (long *)0x0) {
    *plVar6 = 0;
    if (plVar6 + 4 != (long *)0x0) {
      lVar2 = param_3[2];
      lVar3 = param_3[3];
      lVar13 = param_3[1];
      lVar12 = *param_3;
      param_3[1] = 0;
      param_3[2] = 0;
      *param_3 = 0;
      plVar6[6] = lVar2;
      plVar6[5] = lVar13;
      plVar6[4] = lVar12;
      plVar6[7] = lVar3;
      *plVar6 = 0;
      plVar6[1] = 0;
      plVar6[2] = (long)plVar10;
      *plVar11 = (long)plVar6;
      plVar8 = plVar6;
      if (*(long *)*plVar9 != 0) {
        *plVar9 = *(long *)*plVar9;
        plVar8 = (long *)*plVar11;
      }
      FUN_005d5b94(plVar9[1],plVar8);
      uVar7 = 1;
      plVar9[2] = plVar9[2] + 1;
LAB_00c3a574:
      auVar14._8_8_ = uVar7;
      auVar14._0_8_ = plVar6;
      return auVar14;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c3a5b0  FUN_00c3a5b0 =====

void FUN_00c3a5b0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00c3a5b0(param_1,*param_2);
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


// ===== 00c3a624  FUN_00c3a624 =====

undefined1  [16] FUN_00c3a624(undefined8 *param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  plVar6 = (long *)*param_1;
  plVar1 = (long *)operator_new(0x30);
  if (plVar1 != (long *)0x0) {
    *plVar1 = 0;
    if ((ulong *)(plVar1 + 4) != (ulong *)0x0) {
      uVar7 = *param_2;
      plVar1[5] = param_2[1];
      plVar1[4] = uVar7;
      plVar4 = plVar6 + 1;
      plVar2 = (long *)*plVar4;
      plVar5 = plVar4;
      if ((long *)*plVar4 != (long *)0x0) {
        do {
          while (plVar5 = plVar2, uVar7 < (ulong)plVar5[4]) {
            plVar4 = plVar5;
            plVar2 = (long *)*plVar5;
            if ((long *)*plVar5 == (long *)0x0) goto LAB_00c3a6b0;
          }
          if (uVar7 <= (ulong)plVar5[4]) {
            operator_delete(plVar1);
            uVar3 = 0;
            goto LAB_00c3a704;
          }
          plVar2 = (long *)plVar5[1];
        } while ((long *)plVar5[1] != (long *)0x0);
        plVar4 = plVar5 + 1;
      }
LAB_00c3a6b0:
      *plVar1 = 0;
      plVar1[1] = 0;
      plVar1[2] = (long)plVar5;
      *plVar4 = (long)plVar1;
      plVar2 = plVar1;
      if (*(long *)*plVar6 != 0) {
        *plVar6 = *(long *)*plVar6;
        plVar2 = (long *)*plVar4;
      }
      FUN_005d5b94(plVar6[1],plVar2);
      uVar3 = 1;
      plVar6[2] = plVar6[2] + 1;
      plVar5 = plVar1;
LAB_00c3a704:
      auVar8._8_8_ = uVar3;
      auVar8._0_8_ = plVar5;
      return auVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c3a730  FUN_00c3a730 =====

undefined1  [16] FUN_00c3a730(undefined8 param_1,long *param_2,undefined8 param_3,ulong *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  plVar3 = param_2 + 1;
  plVar5 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar2 = plVar1, plVar3 = plVar2, *param_4 < (ulong)plVar2[4]) {
        plVar1 = (long *)*plVar2;
        plVar5 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_00c3a79c;
      }
      if (*param_4 <= (ulong)plVar2[4]) {
        uVar4 = 0;
        goto LAB_00c3a808;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar5 = plVar2 + 1;
  }
LAB_00c3a79c:
  plVar2 = (long *)operator_new(0x30);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar7 = param_4[1];
  uVar6 = *param_4;
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar3;
  plVar2[5] = uVar7;
  plVar2[4] = uVar6;
  *plVar5 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar3 = (long *)*plVar5;
  }
  FUN_005d5b94(param_2[1],plVar3);
  uVar4 = 1;
  param_2[2] = param_2[2] + 1;
LAB_00c3a808:
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar2;
  return auVar8;
}


// ===== 00c3a838  FUN_00c3a838 =====

undefined1  [16]
FUN_00c3a838(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  size_t __n;
  undefined8 *__s1;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
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
          goto LAB_00c3a96c;
        }
        if (uVar2 <= uVar1) goto LAB_00c3a880;
LAB_00c3a8d0:
        plVar6 = (long *)*plVar4;
        plVar10 = plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_00c3a8ec;
      }
      if (iVar3 < 0) goto LAB_00c3a8d0;
LAB_00c3a880:
      plVar6 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
    plVar10 = plVar4 + 1;
  }
LAB_00c3a8ec:
  plVar4 = (long *)operator_new(0x40);
  if (plVar4 != (long *)0x0) {
    plVar6 = plVar4 + 4;
    *plVar4 = 0;
    if (plVar6 != (long *)0x0) {
      plVar7 = (long *)*param_4;
      if (*(char *)((long)plVar7 + 0x17) < '\0') {
        FUN_005478d8(plVar6,*plVar7,plVar7[1]);
      }
      else {
        lVar12 = plVar7[1];
        lVar11 = *plVar7;
        plVar4[6] = plVar7[2];
        plVar4[5] = lVar12;
        *plVar6 = lVar11;
      }
      plVar4[7] = 0;
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
LAB_00c3a96c:
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


// ===== 00c3a9a8  FUN_00c3a9a8 =====

undefined1  [16] FUN_00c3a9a8(undefined8 param_1,long *param_2,undefined8 param_3,ulong *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  plVar3 = param_2 + 1;
  plVar5 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar2 = plVar1, plVar3 = plVar2, *param_4 < (ulong)plVar2[4]) {
        plVar1 = (long *)*plVar2;
        plVar5 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_00c3aa14;
      }
      if (*param_4 <= (ulong)plVar2[4]) {
        uVar4 = 0;
        goto LAB_00c3aa80;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar5 = plVar2 + 1;
  }
LAB_00c3aa14:
  plVar2 = (long *)operator_new(0x30);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar7 = param_4[1];
  uVar6 = *param_4;
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar3;
  plVar2[5] = uVar7;
  plVar2[4] = uVar6;
  *plVar5 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar3 = (long *)*plVar5;
  }
  FUN_005d5b94(param_2[1],plVar3);
  uVar4 = 1;
  param_2[2] = param_2[2] + 1;
LAB_00c3aa80:
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar2;
  return auVar8;
}


// ===== 00c3aab0  FUN_00c3aab0 =====

undefined1  [16]
FUN_00c3aab0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong *puVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  puVar6 = (ulong *)*param_5;
  plVar3 = param_2 + 1;
  plVar7 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    uVar5 = *puVar6;
    plVar1 = (long *)*plVar3;
    do {
      while (plVar2 = plVar1, plVar3 = plVar2, uVar5 < (ulong)plVar2[4]) {
        plVar1 = (long *)*plVar2;
        plVar7 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_00c3ab1c;
      }
      if (uVar5 <= (ulong)plVar2[4]) {
        uVar4 = 0;
        goto LAB_00c3ab8c;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar7 = plVar2 + 1;
  }
LAB_00c3ab1c:
  plVar2 = (long *)operator_new(0x40);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar5 = *puVar6;
  plVar2[6] = 0;
  plVar2[7] = 0;
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[4] = uVar5;
  plVar2[5] = 0;
  plVar2[2] = (long)plVar3;
  *plVar7 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar3 = (long *)*plVar7;
  }
  FUN_005d5b94(param_2[1],plVar3);
  uVar4 = 1;
  param_2[2] = param_2[2] + 1;
LAB_00c3ab8c:
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar2;
  return auVar8;
}


// ===== 00c3abbc  FUN_00c3abbc =====

void FUN_00c3abbc(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x80);
  return;
}


// ===== 00c3abe0  FUN_00c3abe0 =====

bool FUN_00c3abe0(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 0x10);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00c3ac38  FUN_00c3ac38 =====

void FUN_00c3ac38(void *param_1)

{
  FUN_00c41fac();
  operator_delete(param_1);
  return;
}


// ===== 00c3ac68  FUN_00c3ac68 =====

bool FUN_00c3ac68(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x80) == 1;
}


// ===== 00c3ac80  FUN_00c3ac80 =====

void FUN_00c3ac80(undefined8 *param_1)

{
  FUN_00c383cc(*param_1);
  return;
}


// ===== 00c3ac8c  FUN_00c3ac8c =====

void FUN_00c3ac8c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00c3ac8c(param_1,*param_2);
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


// ===== 00c3ad00  FUN_00c3ad00 =====

void FUN_00c3ad00(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00c3ad00(param_1,*param_2);
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


// ===== 00c3ad74  FUN_00c3ad74 =====

void FUN_00c3ad74(int *param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  bool bVar5;
  size_t sVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  void *pvVar12;
  long lVar13;
  undefined1 auVar14 [16];
  long *local_68;
  long *local_60;
  void *local_38;
  
  if ((param_3 == 2) || (*param_1 == 1)) {
    puVar3 = *(undefined8 **)(param_1 + 2);
    puVar7 = *(undefined8 **)(param_1 + 4);
    while (puVar3 != puVar7) {
      puVar7 = puVar7 + -1;
      if (puVar7 == (undefined8 *)0x0) goto LAB_00c3b034;
      pvVar12 = (void *)*puVar7;
      *puVar7 = 0;
      if (pvVar12 != (void *)0x0) {
        FUN_00b16cf4(pvVar12);
        operator_delete(pvVar12);
      }
    }
    *(undefined8 **)(param_1 + 4) = puVar3;
    sVar6 = strlen("BUNDLE");
    FUN_00b17aa4(&local_68,param_2,"BUNDLE",sVar6);
    plVar10 = local_60;
    for (plVar1 = local_68; plVar1 != plVar10; plVar1 = plVar1 + 1) {
      lVar13 = *plVar1;
      pvVar12 = operator_new(0x30);
      FUN_00b16bb0(pvVar12,lVar13);
      puVar3 = *(undefined8 **)(param_1 + 4);
      local_38 = pvVar12;
      if (puVar3 < *(undefined8 **)(param_1 + 6)) {
        if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        local_38 = (void *)0x0;
        puVar7 = puVar3 + 1;
        *puVar3 = pvVar12;
      }
      else {
        puVar7 = (undefined8 *)FUN_00c3ca24(param_1 + 2,&local_38);
      }
      pvVar12 = local_38;
      *(undefined8 **)(param_1 + 4) = puVar7;
      local_38 = (void *)0x0;
      if (pvVar12 != (void *)0x0) {
        FUN_00b16cf4(pvVar12);
        operator_delete(pvVar12);
      }
    }
    if (local_68 != (long *)0x0) {
      uVar9 = (ulong)((long)local_60 + (-8 - ((long)local_60 << 0x3d))) >> 3;
      uVar8 = (ulong)(((long)local_68 - (long)local_60 << 0x3d) - ((long)local_68 - (long)local_60))
              >> 3;
      if (uVar9 <= uVar8) {
        uVar8 = uVar9;
      }
      if ((1 < uVar8) && ((((int)local_68 - (int)local_60 | -(int)local_60) & 7U) == 0)) {
        uVar8 = uVar8 & 0x1ffffffffffffffe;
        local_60 = local_60 + -uVar8;
        do {
          uVar8 = uVar8 - 2;
        } while (uVar8 != 0);
      }
      do {
        if (local_60 == local_68) {
          operator_delete(local_68);
          goto LAB_00c3b05c;
        }
        local_60 = local_60 + -1;
      } while (local_60 != (long *)0x0);
      goto LAB_00c3b034;
    }
  }
  else {
    if (param_3 != 0) {
      return;
    }
    sVar6 = strlen("BUNDLE");
    FUN_00b17aa4(&local_68,param_2,"BUNDLE",sVar6);
    plVar1 = local_60;
    if (local_68 == local_60) {
      bVar5 = false;
    }
    else {
      bVar5 = false;
      plVar10 = local_68;
      do {
        lVar11 = *plVar10;
        lVar4 = *(long *)(lVar11 + 0x20);
        for (lVar13 = *(long *)(lVar11 + 0x18); lVar13 != lVar4; lVar13 = lVar13 + 0x18) {
          auVar14 = FUN_00c3cfd0(param_1 + 0xe,lVar13);
          lVar2 = *(long *)(param_1 + 0x10);
          if (auVar14._0_8_ != auVar14._8_8_) {
            lVar2 = auVar14._0_8_;
          }
          if (*(long *)(param_1 + 0x10) != lVar2) {
            FUN_00b16c50(*(undefined8 *)(lVar2 + 0x18),lVar11);
            bVar5 = true;
            break;
          }
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar1);
    }
    if (local_68 != (long *)0x0) {
      uVar9 = (ulong)((long)local_60 + (-8 - ((long)local_60 << 0x3d))) >> 3;
      uVar8 = (ulong)(((long)local_68 - (long)local_60 << 0x3d) - ((long)local_68 - (long)local_60))
              >> 3;
      if (uVar9 <= uVar8) {
        uVar8 = uVar9;
      }
      if ((1 < uVar8) && ((((int)local_68 - (int)local_60 | -(int)local_60) & 7U) == 0)) {
        uVar8 = uVar8 & 0x1ffffffffffffffe;
        local_60 = local_60 + -uVar8;
        do {
          uVar8 = uVar8 - 2;
        } while (uVar8 != 0);
      }
      do {
        if (local_60 == local_68) {
          operator_delete(local_68);
          goto joined_r0x00c3b0ac;
        }
        local_60 = local_60 + -1;
      } while (local_60 != (long *)0x0);
LAB_00c3b034:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
joined_r0x00c3b0ac:
    if (!bVar5) {
      return;
    }
  }
LAB_00c3b05c:
  FUN_00c3b0b4(param_1);
  return;
}


// ===== 00c3b0b4  FUN_00c3b0b4 =====

void FUN_00c3b0b4(long param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  puVar7 = *(undefined8 **)(param_1 + 0x40);
  while( true ) {
    if (puVar2 == puVar7) {
      plVar3 = *(long **)(param_1 + 8);
      plVar5 = *(long **)(param_1 + 0x10);
      *(undefined8 **)(param_1 + 0x40) = puVar2;
      for (; plVar3 != plVar5; plVar3 = plVar3 + 1) {
        lVar6 = *(long *)(*plVar3 + 0x20);
        for (lVar4 = *(long *)(*plVar3 + 0x18); lVar4 != lVar6; lVar4 = lVar4 + 0x18) {
          lVar10 = *plVar3;
          plVar8 = (long *)FUN_00c3bb20((long *)(param_1 + 0x38),lVar4);
          *plVar8 = lVar10;
        }
      }
      return;
    }
    puVar9 = puVar7 + -4;
    if (puVar9 == (undefined8 *)0x0) break;
    pcVar1 = (char *)((long)puVar7 + -9);
    puVar7 = puVar9;
    if (*pcVar1 < '\0') {
      operator_delete((void *)*puVar9);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c3b190  FUN_00c3b190 =====

bool FUN_00c3b190(long param_1,void *param_2,size_t param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 *__s2;
  size_t sVar4;
  undefined1 auVar5 [16];
  void *local_40;
  size_t sStack_38;
  
  local_40 = param_2;
  sStack_38 = param_3;
  auVar5 = FUN_00c3d100(param_1 + 0x38,&local_40);
  lVar3 = auVar5._0_8_;
  if (((lVar3 == auVar5._8_8_) || (*(long *)(param_1 + 0x40) == lVar3)) ||
     (*(long *)(lVar3 + 0x18) == 0)) {
    bVar1 = true;
  }
  else {
    __s2 = (undefined8 *)FUN_00b16dbc();
    sVar4 = (size_t)*(char *)((long)__s2 + 0x17);
    if ((long)sVar4 < 0) {
      sVar4 = __s2[1];
      __s2 = (undefined8 *)*__s2;
    }
    if (param_3 == sVar4) {
      iVar2 = memcmp(param_2,__s2,param_3);
      bVar1 = iVar2 == 0;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}


// ===== 00c3b244  FUN_00c3b244 =====

undefined8 FUN_00c3b244(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = param_2;
  uStack_28 = param_3;
  auVar3 = FUN_00c3d100(param_1 + 0x38,&local_30);
  lVar1 = auVar3._0_8_;
  if ((lVar1 == auVar3._8_8_) || (*(long *)(param_1 + 0x40) == lVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
  }
  return uVar2;
}


// ===== 00c3b2a0  FUN_00c3b2a0 =====

void FUN_00c3b2a0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  void *local_80 [2];
  char cStack_69;
  char *local_68;
  ulong local_60;
  undefined1 *local_58;
  char *local_50;
  char **ppcStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 uStack_11;
  
  local_40 = param_3;
  uStack_38 = param_4;
  uVar4 = FUN_0044075c();
  if ((uVar4 & 1) == 0) {
    local_68 = "../../pc/jsep_transport_collection.cc";
    local_60 = 0x348;
    local_58 = &uStack_11;
    ppcStack_48 = &local_68;
    local_50 = "Deleting mid ";
    FUN_00b17090(local_80,param_2);
    FUN_00623bb0(&DAT_00224b90,local_68,local_60 & 0xffffffff,local_50,&local_40,
                 " from bundle group ",local_80);
    if (cStack_69 < '\0') {
      operator_delete(local_80[0]);
    }
  }
  plVar6 = *(long **)(param_1 + 8);
  plVar3 = *(long **)(param_1 + 0x10);
  plVar5 = plVar6;
  if (plVar6 != plVar3) {
    uVar4 = (long)plVar3 + (-8 - (long)plVar6);
    uVar7 = (uint)uVar4;
    if ((~uVar7 & 0x18) != 0) {
      uVar8 = (ulong)((uVar7 >> 3) + 1) & 3;
      do {
        plVar5 = plVar6;
        if (param_2 == *plVar6) goto LAB_00c3b390;
        uVar8 = uVar8 - 1;
        plVar6 = plVar6 + 1;
      } while (uVar8 != 0);
    }
    plVar5 = plVar3;
    if (0x17 < uVar4) {
      plVar6 = plVar6 + 2;
      do {
        if (param_2 == plVar6[-2]) {
          plVar5 = plVar6 + -2;
          break;
        }
        if (param_2 == plVar6[-1]) {
          plVar5 = plVar6 + -1;
          break;
        }
        plVar5 = plVar6;
        if (param_2 == *plVar6) break;
        if (param_2 == plVar6[1]) {
          plVar5 = plVar6 + 1;
          break;
        }
        plVar2 = plVar6 + 2;
        plVar6 = plVar6 + 4;
        plVar5 = plVar3;
      } while (plVar2 != plVar3);
    }
  }
LAB_00c3b390:
  FUN_00b16f40(*plVar5,local_40,uStack_38);
  auVar13 = FUN_00c3d100(param_1 + 0x38,&local_40);
  puVar11 = *(undefined8 **)(param_1 + 0x40);
  puVar10 = puVar11;
  if (auVar13._0_8_ != auVar13._8_8_) {
    puVar10 = auVar13._0_8_;
  }
  if (puVar11 == puVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../rtc_base/containers/flat_tree.h",0x378,"position != body_.end()",
                 &DAT_001f5fa0);
  }
  puVar9 = puVar10;
  if (puVar10 + 4 == puVar11) {
    if (puVar10 == puVar11) goto LAB_00c3b460;
  }
  else {
    do {
      if (*(char *)((long)puVar9 + 0x17) < '\0') {
        operator_delete((void *)*puVar9);
      }
      uVar12 = puVar9[4];
      puVar1 = puVar9 + 8;
      *(undefined1 *)((long)puVar9 + 0x37) = 0;
      puVar10 = puVar9 + 4;
      *(undefined1 *)puVar10 = 0;
      puVar9[1] = puVar9[5];
      *puVar9 = uVar12;
      puVar9[2] = puVar9[6];
      puVar9[3] = puVar9[7];
      puVar9 = puVar10;
    } while (puVar1 != puVar11);
    puVar11 = *(undefined8 **)(param_1 + 0x40);
    if (puVar10 == puVar11) goto LAB_00c3b460;
  }
  do {
    puVar9 = puVar11 + -4;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    if (*(char *)((long)puVar11 + -9) < '\0') {
      operator_delete((void *)*puVar9);
    }
    puVar11 = puVar9;
  } while (puVar9 != puVar10);
LAB_00c3b460:
  *(undefined8 **)(param_1 + 0x40) = puVar10;
  return;
}


// ===== 00c3b510  FUN_00c3b510 =====

void FUN_00c3b510(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  plVar12 = (long *)(param_1 + 8);
  plVar14 = (long *)*plVar12;
  plVar3 = *(long **)(param_1 + 0x10);
  plVar13 = plVar14;
  if (plVar14 != plVar3) {
    uVar10 = (long)plVar3 + (-8 - (long)plVar14);
    uVar9 = (uint)uVar10;
    if ((~uVar9 & 0x18) != 0) {
      uVar11 = (ulong)((uVar9 >> 3) + 1) & 3;
      do {
        plVar13 = plVar14;
        if (param_2 == *plVar14) goto LAB_00c3b58c;
        uVar11 = uVar11 - 1;
        plVar14 = plVar14 + 1;
      } while (uVar11 != 0);
    }
    plVar13 = plVar3;
    if (0x17 < uVar10) {
      plVar14 = plVar14 + 2;
      do {
        if (param_2 == plVar14[-2]) {
          plVar13 = plVar14 + -2;
          break;
        }
        if (param_2 == plVar14[-1]) {
          plVar13 = plVar14 + -1;
          break;
        }
        plVar13 = plVar14;
        if (param_2 == *plVar14) break;
        if (param_2 == plVar14[1]) {
          plVar13 = plVar14 + 1;
          break;
        }
        plVar1 = plVar14 + 2;
        plVar14 = plVar14 + 4;
        plVar13 = plVar3;
      } while (plVar1 != plVar3);
    }
  }
LAB_00c3b58c:
  lVar8 = *(long *)(*plVar13 + 0x18);
  lVar4 = *(long *)(*plVar13 + 0x20);
  uVar10 = lVar4 - lVar8;
  if (uVar10 == 0) {
    FUN_00c3b79c(plVar12,plVar13);
    return;
  }
  if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar10 >> 3) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
    FUN_00625650();
  }
  puVar6 = (undefined8 *)operator_new(uVar10);
  lVar15 = 0;
  do {
    puVar2 = (undefined8 *)((long)puVar6 + lVar15);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar7 = (undefined8 *)(lVar8 + lVar15);
    if (*(char *)((long)puVar7 + 0x17) < '\0') {
      FUN_005478d8(puVar2,*(undefined8 *)(lVar8 + lVar15),((undefined8 *)(lVar8 + lVar15))[1]);
    }
    else {
      uVar17 = puVar7[1];
      uVar16 = *puVar7;
      puVar2[2] = puVar7[2];
      puVar2[1] = uVar17;
      *puVar2 = uVar16;
    }
    lVar15 = lVar15 + 0x18;
    lVar5 = lVar15;
    puVar2 = puVar6;
  } while (lVar8 + lVar15 != lVar4);
  for (; lVar5 != 0; lVar5 = lVar5 + -0x18) {
    lVar8 = (long)*(char *)((long)puVar2 + 0x17);
    puVar7 = puVar2;
    if (lVar8 < 0) {
      lVar8 = puVar2[1];
      puVar7 = (undefined8 *)*puVar2;
    }
    FUN_00c3b2a0(param_1,param_2,puVar7,lVar8);
    puVar2 = puVar2 + 3;
  }
  FUN_00c3b79c(plVar12,plVar13);
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
  if (lVar15 != 0) {
    lVar8 = -lVar15;
    puVar2 = (undefined8 *)((long)puVar6 + lVar15);
    do {
      puVar7 = puVar2 + -3;
      if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if (*(char *)((long)puVar2 + -1) < '\0') {
        operator_delete((void *)*puVar7);
      }
      lVar8 = lVar8 + 0x18;
      puVar2 = puVar7;
    } while (lVar8 != 0);
  }
  operator_delete(puVar6);
  return;
}


// ===== 00c3b79c  FUN_00c3b79c =====

undefined8 * FUN_00c3b79c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (param_2 == puVar3) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
              );
  }
  puVar1 = param_2 + 1;
  if (param_2 + 1 == puVar3) {
    puVar4 = param_2;
    if (param_2 == puVar3) goto LAB_00c3b860;
  }
  else {
    do {
      puVar4 = puVar1;
      pvVar2 = (void *)puVar4[-1];
      puVar4[-1] = *puVar4;
      *puVar4 = 0;
      if (pvVar2 != (void *)0x0) {
        FUN_00b16cf4(pvVar2);
        operator_delete(pvVar2);
      }
      puVar1 = puVar4 + 1;
    } while (puVar4 + 1 != puVar3);
    puVar3 = *(undefined8 **)(param_1 + 8);
    if (puVar4 == puVar3) goto LAB_00c3b860;
  }
  do {
    puVar3 = puVar3 + -1;
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    pvVar2 = (void *)*puVar3;
    *puVar3 = 0;
    if (pvVar2 != (void *)0x0) {
      FUN_00b16cf4(pvVar2);
      operator_delete(pvVar2);
    }
  } while (puVar3 != puVar4);
LAB_00c3b860:
  *(undefined8 **)(param_1 + 8) = puVar4;
  return param_2;
}


// ===== 00c3b8a8  FUN_00c3b8a8 =====

void FUN_00c3b8a8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  void *local_48;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  while (puVar1 != puVar6) {
    puVar6 = puVar6 + -1;
    if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    pvVar4 = (void *)*puVar6;
    *puVar6 = 0;
    if (pvVar4 != (void *)0x0) {
      FUN_00b16cf4(pvVar4);
      operator_delete(pvVar4);
    }
  }
  puVar6 = *(undefined8 **)(param_1 + 0x20);
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  *(undefined8 **)(param_1 + 0x10) = puVar1;
  do {
    if (puVar6 == puVar2) {
      FUN_00c3b0b4(param_1);
      return;
    }
    uVar5 = *puVar6;
    pvVar4 = operator_new(0x30);
    FUN_00b16bb0(pvVar4,uVar5);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    local_48 = pvVar4;
    if (puVar1 < *(undefined8 **)(param_1 + 0x18)) {
      if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      local_48 = (void *)0x0;
      puVar3 = puVar1 + 1;
      *puVar1 = pvVar4;
    }
    else {
      puVar3 = (undefined8 *)FUN_00c3ca24((undefined8 *)(param_1 + 8),&local_48);
    }
    pvVar4 = local_48;
    *(undefined8 **)(param_1 + 0x10) = puVar3;
    local_48 = (void *)0x0;
    if (pvVar4 != (void *)0x0) {
      FUN_00b16cf4(pvVar4);
      operator_delete(pvVar4);
    }
    puVar6 = puVar6 + 1;
  } while( true );
}


// ===== 00c3b9e8  FUN_00c3b9e8 =====

void FUN_00c3b9e8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  void *local_48;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  puVar6 = *(undefined8 **)(param_1 + 0x28);
  while (puVar1 != puVar6) {
    puVar6 = puVar6 + -1;
    if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    pvVar4 = (void *)*puVar6;
    *puVar6 = 0;
    if (pvVar4 != (void *)0x0) {
      FUN_00b16cf4(pvVar4);
      operator_delete(pvVar4);
    }
  }
  puVar6 = *(undefined8 **)(param_1 + 8);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  *(undefined8 **)(param_1 + 0x28) = puVar1;
  do {
    if (puVar6 == puVar2) {
      return;
    }
    uVar5 = *puVar6;
    pvVar4 = operator_new(0x30);
    FUN_00b16bb0(pvVar4,uVar5);
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    local_48 = pvVar4;
    if (puVar1 < *(undefined8 **)(param_1 + 0x30)) {
      if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      local_48 = (void *)0x0;
      puVar3 = puVar1 + 1;
      *puVar1 = pvVar4;
    }
    else {
      puVar3 = (undefined8 *)FUN_00c3ca24((undefined8 *)(param_1 + 0x20),&local_48);
    }
    pvVar4 = local_48;
    *(undefined8 **)(param_1 + 0x28) = puVar3;
    local_48 = (void *)0x0;
    if (pvVar4 != (void *)0x0) {
      FUN_00b16cf4(pvVar4);
      operator_delete(pvVar4);
    }
    puVar6 = puVar6 + 1;
  } while( true );
}


// ===== 00c3bb20  FUN_00c3bb20 =====

undefined8 * FUN_00c3bb20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *__s1;
  undefined8 *puVar2;
  size_t sVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 local_68;
  
  puVar9 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)param_1[1];
  lVar5 = (long)puVar4 - (long)puVar9;
  if (lVar5 != 0) {
    uVar10 = lVar5 >> 5;
    puVar2 = (undefined8 *)*param_2;
    uVar7 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      puVar2 = param_2;
      uVar7 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    do {
      uVar11 = uVar10 >> 1;
      puVar1 = puVar9 + uVar11 * 4;
      __s1 = (undefined8 *)*puVar1;
      uVar6 = puVar1[1];
      if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
        __s1 = puVar1;
        uVar6 = (ulong)*(byte *)((long)puVar1 + 0x17);
      }
      sVar3 = uVar7;
      if (uVar6 <= uVar7) {
        sVar3 = uVar6;
      }
      iVar8 = memcmp(__s1,puVar2,sVar3);
      if (iVar8 == 0) {
        if (uVar6 < uVar7) goto LAB_00c3bb78;
      }
      else if (iVar8 < 0) {
LAB_00c3bb78:
        puVar9 = puVar1 + 4;
        uVar11 = uVar10 + ~uVar11;
      }
      uVar10 = uVar11;
    } while (uVar10 != 0);
  }
  if (puVar9 != puVar4) {
    puVar4 = (undefined8 *)*param_2;
    uVar7 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      puVar4 = param_2;
      uVar7 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    puVar2 = (undefined8 *)*puVar9;
    uVar10 = puVar9[1];
    if (-1 < (char)*(byte *)((long)puVar9 + 0x17)) {
      puVar2 = puVar9;
      uVar10 = (ulong)*(byte *)((long)puVar9 + 0x17);
    }
    sVar3 = uVar10;
    if (uVar7 <= uVar10) {
      sVar3 = uVar7;
    }
    iVar8 = memcmp(puVar4,puVar2,sVar3);
    if (iVar8 == 0) {
      if (uVar10 <= uVar7) goto LAB_00c3bc3c;
    }
    else if (-1 < iVar8) goto LAB_00c3bc3c;
  }
  local_68 = 0;
  puVar9 = (undefined8 *)FUN_00c3d20c(param_1,puVar9,param_2,&local_68);
LAB_00c3bc3c:
  return puVar9 + 3;
}


// ===== 00c3bc70  FUN_00c3bc70 =====

void FUN_00c3bc70(long param_1,void *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  void *local_28;
  
  plVar6 = *(long **)(*(long *)((long)param_2 + 0x20) + 0xe0);
  local_28 = param_2;
  puVar3 = (undefined8 *)(**(code **)(*plVar6 + 0xd0))(plVar6);
  puVar4 = (undefined8 *)(**(code **)*puVar3)();
  uVar1 = puVar4[1];
  puVar3 = (undefined8 *)*puVar4;
  if (-1 < (char)*(byte *)((long)puVar4 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)puVar4 + 0x17);
    puVar3 = puVar4;
  }
  FUN_00c3bd4c(param_1,puVar3,uVar1,param_2);
  plVar6 = *(long **)(param_1 + 8);
  if (plVar6 < *(long **)(param_1 + 0x10)) {
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    local_28 = (void *)0x0;
    plVar5 = plVar6 + 1;
    *plVar6 = (long)param_2;
  }
  else {
    plVar5 = (long *)FUN_00c3cb34(param_1,&local_28);
  }
  pvVar2 = local_28;
  *(long **)(param_1 + 8) = plVar5;
  local_28 = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    FUN_00c3e428(pvVar2);
    operator_delete(pvVar2);
  }
  return;
}


// ===== 00c3bd4c  FUN_00c3bd4c =====

uint FUN_00c3bd4c(long *param_1,undefined8 ****param_2,ulong param_3,long param_4)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 ***__src;
  uint uVar4;
  undefined8 ****__dest;
  long *plVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined8 ***local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 ***local_80;
  ulong uStack_78;
  ulong local_70;
  long lStack_68;
  undefined8 ***local_60;
  ulong uStack_58;
  
  local_60 = param_2;
  uStack_58 = param_3;
  auVar11 = FUN_00c3d728(param_1 + 3,&local_60);
  lVar6 = auVar11._0_8_;
  lVar10 = param_1[4];
  if (((lVar6 == auVar11._8_8_) || (lVar10 = lVar6, param_1[4] == lVar6)) ||
     (*(long *)(lVar6 + 0x18) != param_4)) {
    uStack_78 = uStack_58;
    local_80 = local_60;
    uVar4 = (*(code *)param_1[0xd])(param_1 + 10,&local_80,param_4);
    uVar8 = uStack_58;
    __src = local_60;
    if (param_1[4] == lVar10) {
      if (0x7ffffffffffffff6 < uStack_58) {
                    /* WARNING: Subroutine does not return */
        FUN_005d45ec();
      }
      if (uStack_58 < 0x17) {
        local_88 = CONCAT17((char)uStack_58,(undefined7)local_88);
        __dest = &local_98;
      }
      else {
        uVar9 = (uStack_58 & 0x7ffffffffffffff8) + 8;
        uVar2 = 0x19;
        if (uVar9 != 0x18) {
          uVar2 = uVar9;
        }
        __dest = (undefined8 ****)operator_new(uVar2);
        local_88 = uVar2 | 0x8000000000000000;
        uStack_90 = uVar8;
        local_98 = __dest;
      }
      if ((undefined8 ****)((long)__dest + uVar8) < __dest) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                  );
      }
      if ((__dest <= __src) && (__src < (undefined8 ****)((long)__dest + uVar8))) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                  );
      }
      memmove(__dest,__src,uVar8);
      *(undefined1 *)((long)__dest + uVar8) = 0;
      uStack_78 = uStack_90;
      local_80 = local_98;
      local_70 = local_88;
      lStack_68 = param_4;
      FUN_00c3d834(param_1 + 3,&local_80,&local_80);
      if ((long)local_70 < 0) {
        operator_delete(local_80);
      }
    }
    else {
      lVar6 = *(long *)(lVar10 + 0x18);
      *(long *)(lVar10 + 0x18) = param_4;
      for (lVar10 = param_1[3]; lVar10 != param_1[4]; lVar10 = lVar10 + 0x20) {
        if (*(long *)(lVar10 + 0x18) == lVar6) goto LAB_00c3bfb4;
      }
      for (lVar10 = param_1[6]; lVar10 != param_1[7]; lVar10 = lVar10 + 0x20) {
        if (*(long *)(lVar10 + 0x18) == lVar6) goto LAB_00c3bfa8;
      }
      plVar5 = (long *)*param_1;
      plVar3 = (long *)param_1[1];
      if (plVar5 == plVar3) {
LAB_00c3bf98:
        if (plVar5 != plVar3) {
          FUN_00c3c918(param_1);
LAB_00c3bfa8:
          (*(code *)param_1[0x11])(param_1 + 0xe);
        }
      }
      else {
        uVar8 = (long)plVar3 + (-8 - (long)plVar5);
        uVar7 = (uint)uVar8;
        if ((~uVar7 & 0x18) != 0) {
          uVar9 = (ulong)((uVar7 >> 3) + 1) & 3;
          do {
            if (*plVar5 == lVar6) goto LAB_00c3bf98;
            uVar9 = uVar9 - 1;
            plVar5 = plVar5 + 1;
          } while (uVar9 != 0);
        }
        if (0x17 < uVar8) {
          plVar5 = plVar5 + 2;
          do {
            if (plVar5[-2] == lVar6) {
              plVar5 = plVar5 + -2;
              goto LAB_00c3bf98;
            }
            if (plVar5[-1] == lVar6) {
              plVar5 = plVar5 + -1;
              goto LAB_00c3bf98;
            }
            if (*plVar5 == lVar6) goto LAB_00c3bf98;
            if (plVar5[1] == lVar6) {
              plVar5 = plVar5 + 1;
              goto LAB_00c3bf98;
            }
            plVar1 = plVar5 + 2;
            plVar5 = plVar5 + 4;
          } while (plVar1 != plVar3);
        }
      }
    }
  }
  else {
    uVar4 = 1;
  }
LAB_00c3bfb4:
  return uVar4 & 1;
}


// ===== 00c3c004  FUN_00c3c004 =====

void FUN_00c3c004(long *param_1,undefined8 param_2,code *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  for (puVar2 = (undefined8 *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (*param_3)(param_2,*puVar2);
  }
  return;
}


// ===== 00c3c054  FUN_00c3c054 =====

void FUN_00c3c054(long param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  for (lVar1 = *(long *)(param_1 + 0x18); lVar1 != lVar2; lVar1 = lVar1 + 0x20) {
    (*param_3)(param_2,*(undefined8 *)(lVar1 + 0x18));
  }
  return;
}


// ===== 00c3c0a8  FUN_00c3c0a8 =====

void FUN_00c3c0a8(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  long *plVar3;
  long *plVar5;
  undefined8 *local_40;
  ulong uStack_38;
  long *plVar4;
  
  plVar3 = (long *)*param_1;
  plVar5 = (long *)param_1[1];
  if (plVar3 != plVar5) {
    do {
      plVar4 = plVar3 + 1;
      puVar1 = (undefined8 *)(**(code **)(**(long **)(*(long *)(*plVar3 + 0x20) + 0xe0) + 0xd0))();
      puVar1 = (undefined8 *)(**(code **)*puVar1)();
      uStack_38 = puVar1[1];
      local_40 = (undefined8 *)*puVar1;
      if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
        uStack_38 = (ulong)*(byte *)((long)puVar1 + 0x17);
        local_40 = puVar1;
      }
      (*(code *)param_1[0xd])(param_1 + 10,&local_40,0);
      plVar3 = plVar4;
    } while (plVar4 != plVar5);
    plVar3 = (long *)*param_1;
    plVar5 = (long *)param_1[1];
  }
  while( true ) {
    if (plVar3 == plVar5) {
      param_1[1] = plVar3;
      return;
    }
    plVar5 = plVar5 + -1;
    if (plVar5 == (long *)0x0) break;
    pvVar2 = (void *)*plVar5;
    *plVar5 = 0;
    if (pvVar2 != (void *)0x0) {
      FUN_00c3e428(pvVar2);
      operator_delete(pvVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c3c1a4  FUN_00c3c1a4 =====

long FUN_00c3c1a4(long *param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  undefined8 *__s1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar7 = (long *)*param_1;
  plVar8 = (long *)param_1[1];
  plVar6 = plVar7;
  if (plVar7 != plVar8) {
    do {
      puVar4 = (undefined8 *)(**(code **)(**(long **)(*(long *)(*plVar6 + 0x20) + 0xe0) + 0xd0))();
      puVar4 = (undefined8 *)(**(code **)*puVar4)();
      bVar2 = *(byte *)((long)puVar4 + 0x17);
      sVar1 = puVar4[1];
      if (-1 < (char)bVar2) {
        sVar1 = (ulong)bVar2;
      }
      if (sVar1 == param_3) {
        __s1 = (undefined8 *)*puVar4;
        if (-1 < (char)bVar2) {
          __s1 = puVar4;
        }
        iVar3 = memcmp(__s1,param_2,param_3);
        plVar7 = plVar6;
        if (iVar3 == 0) break;
      }
      plVar6 = plVar6 + 1;
      plVar7 = plVar8;
    } while (plVar6 != plVar8);
    plVar8 = (long *)param_1[1];
  }
  if (plVar7 == plVar8) {
    lVar5 = 0;
  }
  else {
    lVar5 = *plVar7;
  }
  return lVar5;
}


// ===== 00c3c278  FUN_00c3c278 =====

long FUN_00c3c278(long *param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  undefined8 *__s1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar7 = (long *)*param_1;
  plVar8 = (long *)param_1[1];
  plVar6 = plVar7;
  if (plVar7 != plVar8) {
    do {
      puVar4 = (undefined8 *)(**(code **)(**(long **)(*(long *)(*plVar6 + 0x20) + 0xe0) + 0xd0))();
      puVar4 = (undefined8 *)(**(code **)*puVar4)();
      bVar2 = *(byte *)((long)puVar4 + 0x17);
      sVar1 = puVar4[1];
      if (-1 < (char)bVar2) {
        sVar1 = (ulong)bVar2;
      }
      if (sVar1 == param_3) {
        __s1 = (undefined8 *)*puVar4;
        if (-1 < (char)bVar2) {
          __s1 = puVar4;
        }
        iVar3 = memcmp(__s1,param_2,param_3);
        plVar7 = plVar6;
        if (iVar3 == 0) break;
      }
      plVar6 = plVar6 + 1;
      plVar7 = plVar8;
    } while (plVar6 != plVar8);
    plVar8 = (long *)param_1[1];
  }
  if (plVar7 == plVar8) {
    lVar5 = 0;
  }
  else {
    lVar5 = *plVar7;
  }
  return lVar5;
}


// ===== 00c3c34c  FUN_00c3c34c =====

undefined8 FUN_00c3c34c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = param_2;
  uStack_28 = param_3;
  auVar3 = FUN_00c3d728(param_1 + 0x18,&local_30);
  lVar1 = auVar3._0_8_;
  if ((lVar1 == auVar3._8_8_) || (*(long *)(param_1 + 0x20) == lVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
  }
  return uVar2;
}


// ===== 00c3c3a8  FUN_00c3c3a8 =====

undefined8 FUN_00c3c3a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = param_2;
  uStack_28 = param_3;
  auVar3 = FUN_00c3d728(param_1 + 0x18,&local_30);
  lVar1 = auVar3._0_8_;
  if ((lVar1 == auVar3._8_8_) || (*(long *)(param_1 + 0x20) == lVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
  }
  return uVar2;
}


// ===== 00c3c404  FUN_00c3c404 =====

void FUN_00c3c404(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_40 = param_2;
  uStack_38 = param_3;
  local_30 = param_2;
  uStack_28 = param_3;
  (*(code *)param_1[0xd])(param_1 + 10,&local_30,0);
  uStack_28 = uStack_38;
  local_30 = local_40;
  auVar9 = FUN_00c3d728(param_1 + 3,&local_30);
  lVar8 = auVar9._0_8_;
  if (((lVar8 != auVar9._8_8_) && (param_1[4] != lVar8)) &&
     (lVar8 = *(long *)(lVar8 + 0x18), lVar8 != 0)) {
    auVar9 = FUN_00c3d728(param_1 + 3,&local_40);
    FUN_00c3de34(param_1 + 3,auVar9._0_8_,auVar9._8_8_);
    for (lVar2 = param_1[3]; lVar2 != param_1[4]; lVar2 = lVar2 + 0x20) {
      if (*(long *)(lVar2 + 0x18) == lVar8) {
        return;
      }
    }
    for (lVar2 = param_1[6]; lVar2 != param_1[7]; lVar2 = lVar2 + 0x20) {
      if (*(long *)(lVar2 + 0x18) == lVar8) goto LAB_00c3c58c;
    }
    plVar4 = (long *)*param_1;
    plVar3 = (long *)param_1[1];
    if (plVar4 == plVar3) {
LAB_00c3c57c:
      if (plVar4 != plVar3) {
        FUN_00c3c918(param_1);
LAB_00c3c58c:
        (*(code *)param_1[0x11])(param_1 + 0xe);
      }
    }
    else {
      uVar6 = (long)plVar3 + (-8 - (long)plVar4);
      uVar5 = (uint)uVar6;
      if ((~uVar5 & 0x18) != 0) {
        uVar7 = (ulong)((uVar5 >> 3) + 1) & 3;
        do {
          if (*plVar4 == lVar8) goto LAB_00c3c57c;
          uVar7 = uVar7 - 1;
          plVar4 = plVar4 + 1;
        } while (uVar7 != 0);
      }
      if (0x17 < uVar6) {
        plVar4 = plVar4 + 2;
        do {
          if (plVar4[-2] == lVar8) {
            plVar4 = plVar4 + -2;
            goto LAB_00c3c57c;
          }
          if (plVar4[-1] == lVar8) {
            plVar4 = plVar4 + -1;
            goto LAB_00c3c57c;
          }
          if (*plVar4 == lVar8) goto LAB_00c3c57c;
          if (plVar4[1] == lVar8) {
            plVar4 = plVar4 + 1;
            goto LAB_00c3c57c;
          }
          plVar1 = plVar4 + 2;
          plVar4 = plVar4 + 4;
        } while (plVar1 != plVar3);
      }
    }
  }
  return;
}


// ===== 00c3c5ac  FUN_00c3c5ac =====

byte FUN_00c3c5ac(long *param_1)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  undefined8 *local_50;
  long lStack_48;
  
  plVar5 = param_1 + 3;
  puVar7 = (undefined8 *)*plVar5;
  puVar8 = (undefined8 *)param_1[4];
  if (puVar7 == puVar8) {
    bVar3 = 1;
  }
  else {
    bVar4 = 1;
    do {
      auVar9 = FUN_00c3df84(param_1 + 6,puVar7);
      bVar2 = auVar9._8_8_ != auVar9._0_8_;
      bVar3 = bVar2 & bVar4;
      if ((!bVar2) && ((bVar4 & 1) != 0)) {
        lStack_48 = (long)*(char *)((long)puVar7 + 0x17);
        local_50 = puVar7;
        if (lStack_48 < 0) {
          lStack_48 = puVar7[1];
          local_50 = (undefined8 *)*puVar7;
        }
        bVar3 = (*(code *)param_1[0xd])(param_1 + 10,&local_50,0);
      }
      puVar7 = puVar7 + 4;
      bVar4 = bVar3;
    } while (puVar7 != puVar8);
  }
  puVar7 = (undefined8 *)param_1[6];
  puVar8 = (undefined8 *)param_1[7];
  if (puVar7 != puVar8) {
    do {
      auVar9 = FUN_00c3df84(plVar5,puVar7);
      lVar1 = param_1[4];
      if (auVar9._0_8_ != auVar9._8_8_) {
        lVar1 = auVar9._0_8_;
      }
      if (param_1[4] == lVar1) {
        if ((bVar3 & 1) != 0) goto LAB_00c3c6b4;
        bVar4 = 0;
      }
      else {
        bVar2 = *(long *)(lVar1 + 0x18) == puVar7[3];
        bVar4 = bVar2 & bVar3;
        if ((!bVar2) && (((bVar3 ^ 1) & 1) == 0)) {
LAB_00c3c6b4:
          lStack_48 = (long)*(char *)((long)puVar7 + 0x17);
          local_50 = puVar7;
          if (lStack_48 < 0) {
            lStack_48 = puVar7[1];
            local_50 = (undefined8 *)*puVar7;
          }
          bVar4 = (*(code *)param_1[0xd])(param_1 + 10,&local_50,puVar7[3]);
        }
      }
      bVar3 = bVar4;
      puVar7 = puVar7 + 4;
    } while (puVar7 != puVar8);
    puVar7 = (undefined8 *)param_1[6];
    puVar8 = (undefined8 *)param_1[7];
  }
  FUN_00c3cc44(plVar5,puVar7,puVar8,(long)puVar8 - (long)puVar7 >> 5);
  (*(code *)param_1[0x11])(param_1 + 0xe);
  plVar5 = (long *)*param_1;
  plVar6 = (long *)param_1[1];
  if (plVar5 != plVar6) {
    bVar2 = false;
LAB_00c3c728:
    do {
      for (lVar1 = param_1[3]; lVar1 != param_1[4]; lVar1 = lVar1 + 0x20) {
        if (*(long *)(lVar1 + 0x18) == *plVar5) goto LAB_00c3c730;
      }
      lVar1 = param_1[6];
      while( true ) {
        if (lVar1 == param_1[7]) {
          plVar5 = (long *)FUN_00c3c918(param_1);
          plVar6 = (long *)param_1[1];
          bVar2 = true;
          if (plVar6 != plVar5) goto LAB_00c3c728;
          goto LAB_00c3c7ac;
        }
        if (*(long *)(lVar1 + 0x18) == *plVar5) break;
        lVar1 = lVar1 + 0x20;
      }
LAB_00c3c730:
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar6);
    if (bVar2) {
LAB_00c3c7ac:
      (*(code *)param_1[0x11])(param_1 + 0xe);
    }
  }
  return bVar3 & 1;
}


// ===== 00c3c7d8  FUN_00c3c7d8 =====

void FUN_00c3c7d8(long *param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  FUN_00c3cc44(param_1 + 6,param_1[3],param_1[4],param_1[4] - param_1[3] >> 5);
  plVar2 = (long *)*param_1;
  plVar4 = (long *)param_1[1];
  if (plVar2 != plVar4) {
    bVar1 = false;
LAB_00c3c810:
    do {
      for (lVar3 = param_1[3]; lVar3 != param_1[4]; lVar3 = lVar3 + 0x20) {
        if (*(long *)(lVar3 + 0x18) == *plVar2) goto LAB_00c3c818;
      }
      lVar3 = param_1[6];
      while( true ) {
        if (lVar3 == param_1[7]) {
          plVar2 = (long *)FUN_00c3c918(param_1);
          plVar4 = (long *)param_1[1];
          bVar1 = true;
          if (plVar4 == plVar2) goto LAB_00c3c894;
          goto LAB_00c3c810;
        }
        if (*(long *)(lVar3 + 0x18) == *plVar2) break;
        lVar3 = lVar3 + 0x20;
      }
LAB_00c3c818:
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar4);
    if (bVar1) {
LAB_00c3c894:
      (*(code *)param_1[0x11])(param_1 + 0xe);
    }
  }
  lVar3 = DAT_00dbb020;
  if (DAT_00dbb020 == 0) {
    lVar3 = FUN_006660d8("WebRTC.PeerConnection.RtpTransportCount",0x27,1,0x31,0x32);
    FUN_00d0f5e0(0,lVar3,&DAT_00dbb020);
    if (lVar3 == 0) {
      return;
    }
  }
  FUN_00666568(lVar3,(ulong)(param_1[1] - *param_1) >> 3);
  return;
}


// ===== 00c3c918  FUN_00c3c918 =====

undefined8 * FUN_00c3c918(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (param_2 == puVar3) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
              );
  }
  puVar1 = param_2 + 1;
  if (param_2 + 1 == puVar3) {
    puVar4 = param_2;
    if (param_2 == puVar3) goto LAB_00c3c9dc;
  }
  else {
    do {
      puVar4 = puVar1;
      pvVar2 = (void *)puVar4[-1];
      puVar4[-1] = *puVar4;
      *puVar4 = 0;
      if (pvVar2 != (void *)0x0) {
        FUN_00c3e428(pvVar2);
        operator_delete(pvVar2);
      }
      puVar1 = puVar4 + 1;
    } while (puVar4 + 1 != puVar3);
    puVar3 = *(undefined8 **)(param_1 + 8);
    if (puVar4 == puVar3) goto LAB_00c3c9dc;
  }
  do {
    puVar3 = puVar3 + -1;
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    pvVar2 = (void *)*puVar3;
    *puVar3 = 0;
    if (pvVar2 != (void *)0x0) {
      FUN_00c3e428(pvVar2);
      operator_delete(pvVar2);
    }
  } while (puVar3 != puVar4);
LAB_00c3c9dc:
  *(undefined8 **)(param_1 + 8) = puVar4;
  return param_2;
}


// ===== 00c3ca24  FUN_00c3ca24 =====

undefined8 * FUN_00c3ca24(long *param_1,undefined8 *param_2)

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
    FUN_00c3cb1c();
LAB_00c3cb18:
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
    if (uVar6 >> 0x3d != 0) goto LAB_00c3cb18;
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


// ===== 00c3cb1c  FUN_00c3cb1c =====

void FUN_00c3cb1c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c3cb34  FUN_00c3cb34 =====

undefined8 * FUN_00c3cb34(long *param_1,undefined8 *param_2)

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
    FUN_00c3cc2c();
LAB_00c3cc28:
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
    if (uVar6 >> 0x3d != 0) goto LAB_00c3cc28;
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


// ===== 00c3cc2c  FUN_00c3cc2c =====

void FUN_00c3cc2c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c3cc44  FUN_00c3cc44 =====

void FUN_00c3cc44(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  uVar7 = param_1[2];
  puVar9 = (undefined8 *)*param_1;
  if ((ulong)((long)(uVar7 - (long)puVar9) >> 5) < param_4) {
    if (puVar9 != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)param_1[1];
      puVar5 = puVar9;
      if (puVar9 != puVar8) {
        do {
          puVar5 = puVar8 + -4;
          if (puVar5 == (undefined8 *)0x0) goto LAB_00c3cfa0;
          if (*(char *)((long)puVar8 + -9) < '\0') {
            operator_delete((void *)*puVar5);
          }
          puVar8 = puVar5;
        } while (puVar5 != puVar9);
        puVar5 = (undefined8 *)*param_1;
      }
      param_1[1] = puVar9;
      operator_delete(puVar5);
      uVar7 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (param_4 >> 0x3b == 0) {
      uVar2 = (long)uVar7 >> 4;
      if ((ulong)((long)uVar7 >> 4) <= param_4) {
        uVar2 = param_4;
      }
      if (0x7fffffffffffffdf < uVar7) {
        uVar2 = 0x7ffffffffffffff;
      }
      if (uVar2 >> 0x3b == 0) {
        puVar9 = (undefined8 *)operator_new(uVar2 * 0x20);
        *param_1 = puVar9;
        param_1[1] = puVar9;
        param_1[2] = puVar9 + uVar2 * 4;
        if (param_2 != param_3) {
          do {
            if (puVar9 == (undefined8 *)0x0) goto LAB_00c3cf8c;
            if (*(char *)((long)param_2 + 0x17) < '\0') {
              FUN_005478d8(puVar9,*param_2,param_2[1]);
            }
            else {
              uVar12 = *param_2;
              uVar6 = param_2[2];
              puVar9[1] = param_2[1];
              *puVar9 = uVar12;
              puVar9[2] = uVar6;
            }
            puVar8 = param_2 + 3;
            param_2 = param_2 + 4;
            puVar9[3] = *puVar8;
            puVar9 = puVar9 + 4;
          } while (param_2 != param_3);
        }
        goto LAB_00c3cf24;
      }
    }
    FUN_00c3cfb8();
                    /* WARNING: Subroutine does not return */
    FUN_005d34a4("vector");
  }
  puVar8 = (undefined8 *)param_1[1];
  lVar11 = (long)puVar8 - (long)puVar9;
  if ((ulong)(lVar11 >> 5) < param_4) {
    puVar5 = param_2;
    puVar1 = puVar8;
    if (puVar8 != puVar9) {
      lVar10 = 0;
      puVar5 = (undefined8 *)((long)param_2 + lVar11);
      do {
        puVar8 = (undefined8 *)((long)puVar9 + lVar10);
        puVar1 = (undefined8 *)((long)param_2 + lVar10);
        if (param_2 != puVar9) {
          bVar3 = *(byte *)((long)puVar1 + 0x17);
          if (*(char *)((long)puVar8 + 0x17) < '\0') {
            uVar7 = ((long *)((long)param_2 + lVar10))[1];
            puVar4 = *(undefined8 **)((long)param_2 + lVar10);
            if (-1 < (char)bVar3) {
              uVar7 = (ulong)bVar3;
              puVar4 = puVar1;
            }
            FUN_00547f08((long)puVar9 + lVar10,puVar4,uVar7);
          }
          else if ((char)bVar3 < '\0') {
            FUN_00547fc0((long)puVar9 + lVar10,*(undefined8 *)((long)param_2 + lVar10),
                         ((undefined8 *)((long)param_2 + lVar10))[1]);
          }
          else {
            uVar12 = puVar1[1];
            uVar6 = *puVar1;
            puVar8[2] = puVar1[2];
            puVar8[1] = uVar12;
            *puVar8 = uVar6;
          }
        }
        lVar10 = lVar10 + 0x20;
        puVar8[3] = puVar1[3];
      } while (lVar11 != lVar10);
      puVar8 = (undefined8 *)param_1[1];
      puVar1 = puVar8;
    }
    while( true ) {
      if (puVar5 == param_3) {
        param_1[1] = puVar8;
        return;
      }
      if (puVar1 == (undefined8 *)0x0) break;
      if (*(char *)((long)puVar5 + 0x17) < '\0') {
        FUN_005478d8(puVar1,*puVar5,puVar5[1]);
      }
      else {
        uVar12 = puVar5[1];
        uVar6 = *puVar5;
        puVar1[2] = puVar5[2];
        puVar1[1] = uVar12;
        *puVar1 = uVar6;
      }
      puVar8 = puVar8 + 4;
      puVar1[3] = puVar5[3];
      puVar5 = puVar5 + 4;
      puVar1 = puVar1 + 4;
    }
LAB_00c3cf8c:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  if (param_2 == param_3) {
    if (puVar9 == puVar8) goto LAB_00c3cf24;
  }
  else {
    do {
      if (param_2 != puVar9) {
        bVar3 = *(byte *)((long)param_2 + 0x17);
        if (*(char *)((long)puVar9 + 0x17) < '\0') {
          uVar7 = param_2[1];
          puVar8 = (undefined8 *)*param_2;
          if (-1 < (char)bVar3) {
            uVar7 = (ulong)bVar3;
            puVar8 = param_2;
          }
          FUN_00547f08(puVar9,puVar8,uVar7);
        }
        else if ((char)bVar3 < '\0') {
          FUN_00547fc0(puVar9,*param_2,param_2[1]);
        }
        else {
          uVar12 = param_2[1];
          uVar6 = *param_2;
          puVar9[2] = param_2[2];
          puVar9[1] = uVar12;
          *puVar9 = uVar6;
        }
      }
      puVar8 = param_2 + 3;
      param_2 = param_2 + 4;
      puVar9[3] = *puVar8;
      puVar9 = puVar9 + 4;
    } while (param_2 != param_3);
    puVar8 = (undefined8 *)param_1[1];
    if (puVar9 == puVar8) goto LAB_00c3cf24;
  }
  do {
    puVar5 = puVar8 + -4;
    if (puVar5 == (undefined8 *)0x0) {
LAB_00c3cfa0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    if (*(char *)((long)puVar8 + -9) < '\0') {
      operator_delete((void *)*puVar5);
    }
    puVar8 = puVar5;
  } while (puVar5 != puVar9);
LAB_00c3cf24:
  param_1[1] = puVar9;
  return;
}


// ===== 00c3cfb8  FUN_00c3cfb8 =====

void FUN_00c3cfb8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c3cfd0  FUN_00c3cfd0 =====

undefined1  [16] FUN_00c3cfd0(undefined8 *param_1,undefined8 *param_2)

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
        if (uVar6 < uVar1) goto LAB_00c3d020;
      }
      else if (iVar7 < 0) {
LAB_00c3d020:
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
      if (uVar1 < uVar10) goto LAB_00c3d0dc;
    }
    else if (iVar7 < 0) goto LAB_00c3d0dc;
    puVar8 = puVar9 + 4;
  }
LAB_00c3d0dc:
  auVar12._8_8_ = puVar8;
  auVar12._0_8_ = puVar9;
  return auVar12;
}


// ===== 00c3d100  FUN_00c3d100 =====

undefined1  [16] FUN_00c3d100(undefined8 *param_1,undefined8 *param_2)

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
        if (uVar5 < uVar3) goto LAB_00c3d13c;
      }
      else if (0 < iVar6) {
LAB_00c3d13c:
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
      if (uVar3 < uVar9) goto LAB_00c3d1e8;
    }
    else if (iVar6 < 0) goto LAB_00c3d1e8;
    puVar7 = puVar8 + 4;
  }
LAB_00c3d1e8:
  auVar11._8_8_ = puVar7;
  auVar11._0_8_ = puVar8;
  return auVar11;
}


// ===== 00c3d20c  FUN_00c3d20c =====

/* WARNING: Removing unreachable block (ram,0x00c3d440) */

undefined8 * FUN_00c3d20c(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  size_t __n;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  void *__dest;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 *local_70;
  undefined8 *puStack_68;
  undefined8 *local_60;
  undefined1 *puStack_58;
  long *local_50;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 < (undefined8 *)param_1[2]) {
    puVar7 = param_2;
    if (param_2 == puVar8) {
      if (param_2 == (undefined8 *)0x0) {
LAB_00c3d4cc:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        FUN_005478d8(puVar8,*param_3,param_3[1]);
      }
      else {
        uVar11 = param_3[1];
        uVar10 = *param_3;
        puVar8[2] = param_3[2];
        puVar8[1] = uVar11;
        *puVar8 = uVar10;
      }
      puVar8[3] = *param_4;
      param_1[1] = (long)(puVar8 + 4);
    }
    else {
      puStack_68 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
      local_60 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
      local_50 = param_1;
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        FUN_005478d8(&local_70,*param_3,param_3[1]);
        puVar8 = (undefined8 *)param_1[1];
      }
      else {
        puStack_68 = (undefined8 *)param_3[1];
        local_70 = (undefined1 *)*param_3;
        local_60 = (undefined8 *)param_3[2];
      }
      puStack_58 = (undefined1 *)*param_4;
      puVar2 = puVar8;
      for (puVar5 = puVar8 + -4; puVar5 < puVar8; puVar5 = puVar5 + 4) {
        if (puVar2 == (undefined8 *)0x0) goto LAB_00c3d4cc;
        uVar11 = puVar5[1];
        uVar10 = *puVar5;
        puVar2[2] = puVar5[2];
        puVar2[1] = uVar11;
        *puVar2 = uVar10;
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = 0;
        puVar2[3] = puVar5[3];
        puVar2 = puVar2 + 4;
      }
      param_1[1] = (long)puVar2;
      if (puVar8 != param_2 + 4) {
        lVar9 = 0;
        do {
          puVar5 = (undefined8 *)((long)puVar8 + lVar9 + -0x40);
          *(undefined8 *)((long)puVar8 + lVar9 + -0x10) =
               *(undefined8 *)((long)puVar8 + lVar9 + -0x30);
          *(undefined8 *)((long)puVar8 + lVar9 + -0x18) =
               *(undefined8 *)((long)puVar8 + lVar9 + -0x38);
          *(undefined8 *)((long)puVar8 + lVar9 + -0x20) = *puVar5;
          lVar3 = lVar9 + -0x40;
          *(undefined1 *)((long)puVar8 + lVar9 + -0x29) = 0;
          *(undefined1 *)puVar5 = 0;
          *(undefined8 *)((long)puVar8 + lVar9 + -8) = *(undefined8 *)((long)puVar8 + lVar9 + -0x28)
          ;
          lVar9 = lVar9 + -0x20;
        } while ((undefined8 *)((long)puVar8 + lVar3) != param_2);
      }
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        operator_delete((void *)*param_2);
      }
      param_2[2] = local_60;
      param_2[1] = puStack_68;
      *param_2 = local_70;
      param_2[3] = puStack_58;
    }
  }
  else {
    lVar9 = *param_1;
    uVar1 = ((long)puVar8 - lVar9 >> 5) + 1;
    if (uVar1 >> 0x3b != 0) {
      FUN_00c3d710();
LAB_00c3d4e4:
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    uVar4 = param_1[2] - lVar9;
    local_70 = (undefined1 *)0x0;
    uVar6 = (long)uVar4 >> 4;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar4) {
      uVar6 = 0x7ffffffffffffff;
    }
    if (uVar6 != 0) {
      if (uVar6 >> 0x3b != 0) goto LAB_00c3d4e4;
      local_70 = (undefined1 *)operator_new(uVar6 << 5);
    }
    puStack_58 = local_70 + uVar6 * 0x20;
    puStack_68 = (undefined8 *)(local_70 + ((long)param_2 - lVar9));
    local_60 = puStack_68;
    FUN_00c3d4e8(&local_70,param_3,param_4);
    puVar7 = puStack_68;
    memcpy(local_60,param_2,param_1[1] - (long)param_2);
    lVar9 = param_1[1];
    param_1[1] = (long)param_2;
    __n = (long)param_2 - *param_1;
    __dest = (void *)((long)puStack_68 - __n);
    local_60 = (undefined8 *)((long)local_60 + (lVar9 - (long)param_2));
    memcpy(__dest,(void *)*param_1,__n);
    local_70 = (undefined1 *)*param_1;
    lVar9 = param_1[2];
    *param_1 = (long)__dest;
    param_1[2] = (long)puStack_58;
    param_1[1] = (long)local_60;
    if (local_70 != (undefined1 *)0x0) {
      puStack_68 = (undefined8 *)local_70;
      local_60 = (undefined8 *)local_70;
      puStack_58 = (undefined1 *)lVar9;
      operator_delete(local_70);
    }
  }
  return puVar7;
}


// ===== 00c3d4e8  FUN_00c3d4e8 =====

void FUN_00c3d4e8(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char *pcVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar9 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar9) {
    pvVar10 = (void *)*param_1;
    puVar6 = (undefined8 *)param_1[1];
    if ((long)puVar6 - (long)pvVar10 == 0) {
      uVar7 = param_1[3] - (long)pvVar10 >> 4;
      if (puVar9 == puVar6) {
        uVar7 = 1;
      }
      if (uVar7 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar4 = operator_new(uVar7 * 0x20);
      pvVar2 = (void *)((long)pvVar4 + uVar7 * 0x20);
      puVar11 = (undefined8 *)((long)pvVar4 + (uVar7 >> 2) * 0x20);
      if ((long)puVar9 - (long)puVar6 == 0) {
        *param_1 = (long)pvVar4;
        param_1[1] = (long)puVar11;
        param_1[2] = (long)puVar11;
        param_1[3] = (long)pvVar2;
      }
      else {
        puVar3 = (undefined8 *)((long)puVar11 + ((long)puVar9 - (long)puVar6));
        puVar8 = puVar11;
        do {
          if (puVar8 == (undefined8 *)0x0) goto LAB_00c3d6e4;
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
        pvVar10 = (void *)*param_1;
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
      if (pvVar10 != (void *)0x0) {
        operator_delete(pvVar10);
      }
    }
    else {
      lVar5 = (((long)puVar6 - (long)pvVar10 >> 5) + 1) / 2;
      if (puVar6 == puVar9) {
        puVar9 = puVar6 + lVar5 * -4;
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
        } while (puVar11 != puVar9);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar11 + lVar5 * -4;
      }
      param_1[1] = (long)(puVar6 + lVar5 * -4);
      param_1[2] = (long)puVar9;
    }
  }
  if (puVar9 != (undefined8 *)0x0) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      FUN_005478d8(puVar9,*param_2,param_2[1]);
    }
    else {
      uVar14 = param_2[1];
      uVar13 = *param_2;
      puVar9[2] = param_2[2];
      puVar9[1] = uVar14;
      *puVar9 = uVar13;
    }
    puVar9[3] = *param_3;
    param_1[2] = (long)(puVar9 + 4);
    return;
  }
LAB_00c3d6e4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c3d710  FUN_00c3d710 =====

void FUN_00c3d710(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c3d728  FUN_00c3d728 =====

undefined1  [16] FUN_00c3d728(undefined8 *param_1,undefined8 *param_2)

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
        if (uVar5 < uVar3) goto LAB_00c3d764;
      }
      else if (0 < iVar6) {
LAB_00c3d764:
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
      if (uVar3 < uVar9) goto LAB_00c3d810;
    }
    else if (iVar6 < 0) goto LAB_00c3d810;
    puVar7 = puVar8 + 4;
  }
LAB_00c3d810:
  auVar11._8_8_ = puVar7;
  auVar11._0_8_ = puVar8;
  return auVar11;
}


// ===== 00c3d834  FUN_00c3d834 =====

undefined1  [16] FUN_00c3d834(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

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
        if (uVar7 < uVar2) goto LAB_00c3d890;
      }
      else if (iVar8 < 0) {
LAB_00c3d890:
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
      if (uVar11 <= uVar2) goto LAB_00c3d95c;
    }
    else if (-1 < iVar8) {
LAB_00c3d95c:
      uVar10 = 0;
      goto LAB_00c3d960;
    }
  }
  puVar9 = (undefined8 *)FUN_00c3d988(param_1,puVar9,param_3);
  uVar10 = 1;
LAB_00c3d960:
  auVar13._8_8_ = uVar10;
  auVar13._0_8_ = puVar9;
  return auVar13;
}


// ===== 00c3d988  FUN_00c3d988 =====

/* WARNING: Removing unreachable block (ram,0x00c3da88) */

undefined8 * FUN_00c3d988(long *param_1,undefined8 *param_2,undefined8 *param_3)

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
LAB_00c3dc04:
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
        if (puVar1 == (undefined8 *)0x0) goto LAB_00c3dc04;
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
      FUN_00c3cfb8();
LAB_00c3dc1c:
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
      if (uVar8 >> 0x3b != 0) goto LAB_00c3dc1c;
      local_80 = operator_new(uVar8 << 5);
    }
    pvStack_68 = (void *)((long)local_80 + uVar8 * 0x20);
    local_78 = (undefined8 *)((long)local_80 + ((long)param_2 - lVar11));
    local_70 = local_78;
    FUN_00c3dc20(&local_80,param_3);
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


// ===== 00c3dc20  FUN_00c3dc20 =====

void FUN_00c3dc20(long *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_00c3de08;
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
LAB_00c3de08:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c3de34  FUN_00c3de34 =====

undefined8 * FUN_00c3de34(long *param_1,undefined8 *param_2,undefined8 *param_3)

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
    if (param_2 == puVar2) goto LAB_00c3df38;
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
    if (puVar5 == puVar2) goto LAB_00c3df38;
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
LAB_00c3df38:
  param_1[1] = (long)puVar5;
  return param_2;
}


// ===== 00c3df84  FUN_00c3df84 =====

undefined1  [16] FUN_00c3df84(undefined8 *param_1,undefined8 *param_2)

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
        if (uVar6 < uVar1) goto LAB_00c3dfd4;
      }
      else if (iVar7 < 0) {
LAB_00c3dfd4:
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
      if (uVar1 < uVar10) goto LAB_00c3e090;
    }
    else if (iVar7 < 0) goto LAB_00c3e090;
    puVar8 = puVar9 + 4;
  }
LAB_00c3e090:
  auVar12._8_8_ = puVar8;
  auVar12._0_8_ = puVar9;
  return auVar12;
}


// ===== 00c3e0b4  FUN_00c3e0b4 =====

void FUN_00c3e0b4(undefined1 *param_1,undefined1 param_2,undefined8 *param_3,undefined4 param_4,
                 undefined8 param_5)

{
  void *__src;
  ulong __n;
  void *__dest;
  
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  __src = (void *)*param_3;
  __n = param_3[1] - (long)__src;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d348c();
    }
    __dest = operator_new(__n);
    *(void **)(param_1 + 8) = __dest;
    *(void **)(param_1 + 0x10) = __dest;
    *(ulong *)(param_1 + 0x18) = (long)__dest + __n;
    memcpy(__dest,__src,__n);
    *(ulong *)(param_1 + 0x10) = (long)__dest + __n;
  }
  *(undefined4 *)(param_1 + 0x20) = param_4;
  FUN_00b193dc(param_1 + 0x28,param_5);
  return;
}


// ===== 00c3e140  FUN_00c3e140 =====

void FUN_00c3e140(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  FUN_00b194c8(param_1 + 0x28);
  pvVar1 = *(void **)(param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = *(void **)(param_1 + 0x10);
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
      *(void **)(param_1 + 0x10) = pvVar1;
      operator_delete(pvVar1);
      return;
    }
    pvVar2 = (void *)((long)pvVar2 + -4);
  } while (pvVar2 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c3e208  FUN_00c3e208 =====

void FUN_00c3e208(undefined1 *param_1,long *param_2,undefined8 param_3,undefined8 *param_4,
                 long param_5,long param_6)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  char **ppcVar4;
  char **local_58;
  char *local_50;
  char *pcStack_48;
  
  *param_1 = 0;
  lVar3 = *param_2;
  *(long *)(param_1 + 8) = lVar3;
  if (lVar3 != 0) {
    FUN_00d0f740(1);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  ppcVar4 = (char **)*param_4;
  *param_4 = 0;
  *(char ***)(param_1 + 0x28) = ppcVar4;
  if (param_5 == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    puVar2 = (undefined8 *)operator_new(0x60);
    local_58 = ppcVar4;
    if (ppcVar4 != (char **)0x0) {
      (**(code **)*ppcVar4)(ppcVar4);
    }
    FUN_00c40dac(puVar2,param_5,&local_58);
    if (local_58 != (char **)0x0) {
      (**(code **)(*local_58 + 8))();
    }
    *(undefined4 *)(puVar2 + 0xb) = 0;
    *(undefined8 **)(param_1 + 0x30) = puVar2;
    *puVar2 = &PTR_FUN_00d4d130;
    puVar2[1] = &PTR_FUN_00d4d1d8;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d0f740(1,puVar2 + 0xb);
    }
  }
  FUN_00c41994(param_1 + 0x38);
  (**(code **)(param_6 + 0x10))(1,param_6,param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_6 + 0x10);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_6 + 0x18);
  *(code **)(param_6 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_6 + 0x18) = 0;
  if (((DAT_00dbb030 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00dbb030), iVar1 != 0)) {
    DAT_00dbb028 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbb030);
  }
  local_58 = (char **)0x0;
  pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbb028 != '\0') {
    FUN_0066d348(0x42,DAT_00dbb028,"JsepTransport::JsepTransport",0,0,0,0,0,0);
    local_50 = DAT_00dbb028;
    pcStack_48 = "JsepTransport::JsepTransport";
    local_58 = &local_50;
  }
  FUN_007b5a0c(*(long *)(*(long *)(param_1 + 0x20) + 0xe0) + 0x110,param_1,param_1,FUN_00c40d9c);
  if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
    FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 00c3e428  FUN_00c3e428 =====

void FUN_00c3e428(long param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  void *pvVar8;
  char **local_48;
  char *local_40;
  char *pcStack_38;
  
  if (((DAT_00dbb040 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00dbb040), iVar1 != 0)) {
    DAT_00dbb038 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbb040);
  }
  local_48 = (char **)0x0;
  pcStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbb038 != '\0') {
    local_48 = &local_40;
    FUN_0066d348(0x42,DAT_00dbb038,"JsepTransport::~JsepTransport",0,0,0,0,0,0);
    local_40 = DAT_00dbb038;
    pcStack_38 = "JsepTransport::~JsepTransport";
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_00c413c0();
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0xe0);
  FUN_007b5df8(lVar7 + 0x110,param_1);
  FUN_00c42094(*(undefined8 *)(param_1 + 0x28),lVar7);
  if ((local_48 != (char **)0x0) && (**local_48 != '\0')) {
    FUN_0066d348(0x45,*local_48,local_48[1],0,0,0,0,0,0);
  }
  (**(code **)(param_1 + 0x50))(0,param_1 + 0x40,param_1 + 0x40);
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 8))();
  }
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x28) + 8))();
  }
  plVar2 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  pvVar8 = *(void **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (pvVar8 != (void *)0x0) {
    FUN_00b194c8((long)pvVar8 + 0x28);
    pvVar3 = *(void **)((long)pvVar8 + 8);
    if (pvVar3 != (void *)0x0) {
      pvVar4 = *(void **)((long)pvVar8 + 0x10);
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
      do {
        if (pvVar4 == pvVar3) {
          *(void **)((long)pvVar8 + 0x10) = pvVar3;
          operator_delete(pvVar3);
          goto LAB_00c3e5fc;
        }
        pvVar4 = (void *)((long)pvVar4 + -4);
      } while (pvVar4 != (void *)0x0);
      goto LAB_00c3e688;
    }
LAB_00c3e5fc:
    operator_delete(pvVar8);
  }
  pvVar8 = *(void **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (pvVar8 != (void *)0x0) {
    FUN_00b194c8((long)pvVar8 + 0x28);
    pvVar3 = *(void **)((long)pvVar8 + 8);
    if (pvVar3 != (void *)0x0) {
      pvVar4 = *(void **)((long)pvVar8 + 0x10);
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
      do {
        if (pvVar4 == pvVar3) {
          *(void **)((long)pvVar8 + 0x10) = pvVar3;
          operator_delete(pvVar3);
          goto LAB_00c3e6ac;
        }
        pvVar4 = (void *)((long)pvVar4 + -4);
      } while (pvVar4 != (void *)0x0);
LAB_00c3e688:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
LAB_00c3e6ac:
    operator_delete(pvVar8);
  }
  pvVar8 = *(void **)(param_1 + 8);
  if ((pvVar8 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar8), iVar1 == 1)) {
    FUN_00833e18(pvVar8);
    operator_delete(pvVar8);
  }
  return;
}


// ===== 00c3e730  FUN_00c3e730 =====

/* WARNING: Removing unreachable block (ram,0x00c3f008) */
/* WARNING: Removing unreachable block (ram,0x00c3efb0) */
/* WARNING: Removing unreachable block (ram,0x00c3ec68) */
/* WARNING: Removing unreachable block (ram,0x00c3ec78) */
/* WARNING: Removing unreachable block (ram,0x00c3ec7c) */
/* WARNING: Removing unreachable block (ram,0x00c3edfc) */
/* WARNING: Removing unreachable block (ram,0x00c3ee0c) */
/* WARNING: Removing unreachable block (ram,0x00c3ee10) */
/* WARNING: Removing unreachable block (ram,0x00c3f0a8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00c3e730(undefined4 *param_1,byte *param_2,undefined1 *param_3,int param_4)

{
  undefined8 *****pppppuVar1;
  undefined8 *******pppppppuVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *******pppppppuVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  char *__s;
  size_t sVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  void *pvVar15;
  undefined8 *puVar16;
  undefined8 ******ppppppuVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  ulong uVar23;
  void *pvVar24;
  undefined4 uVar25;
  long *plVar26;
  long *plVar27;
  void *pvVar28;
  ulong *puVar29;
  undefined8 *******local_168;
  undefined8 *****pppppuStack_160;
  ulong local_158;
  undefined7 local_150;
  char cStack_149;
  undefined4 local_148;
  undefined3 uStack_144;
  undefined8 *******local_140;
  ulong uStack_138;
  ulong local_130;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  undefined1 *local_108;
  undefined1 *local_100;
  undefined8 *******local_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined8 *******pppppppuStack_d8;
  undefined1 *puStack_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  char **local_b8;
  char *local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined4 local_80;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  
  uStack_7b = 0xaa;
  uStack_79 = 0xaa;
  local_a0 = 0xaaaaaaaa00000000;
  uStack_7a = 0;
  local_90 = 0;
  local_88 = 0;
  uStack_98 = 0;
  uStack_83 = 0;
  local_80 = 0;
  uStack_7c = 0;
  if (((DAT_00dbb050 & 1) == 0) && (iVar9 = FUN_0054fdd4(&DAT_00dbb050), iVar9 != 0)) {
    DAT_00dbb048 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbb050);
  }
  pcStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_b8 = (char **)0x0;
  if (*DAT_00dbb048 != '\0') {
    FUN_0066d348(0x42,DAT_00dbb048,"JsepTransport::SetLocalJsepTransportDescription",0,0,0,0,0,0);
    local_b0 = DAT_00dbb048;
    pcStack_a8 = "JsepTransport::SetLocalJsepTransportDescription";
    local_b8 = &local_b0;
  }
  plVar21 = *(long **)(param_3 + 0x28);
  bVar8 = param_3[0x57];
  plVar26 = *(long **)(param_3 + 0x30);
  pppppppuStack_d8 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puVar16 = *(undefined8 **)(param_3 + 0x40);
  if (-1 < (char)bVar8) {
    puVar16 = (undefined8 *)(param_3 + 0x40);
  }
  uVar11 = *(ulong *)(param_3 + 0x48);
  if (-1 < (char)bVar8) {
    uVar11 = (ulong)bVar8;
  }
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
  uVar23 = *(ulong *)(param_3 + 0x60);
  puVar5 = *(undefined8 **)(param_3 + 0x58);
  if (-1 < (char)param_3[0x6f]) {
    uVar23 = (ulong)(byte)param_3[0x6f];
    puVar5 = (undefined8 *)(param_3 + 0x58);
  }
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  if (plVar21 == plVar26) {
    bVar7 = false;
  }
  else {
    do {
      if (*(char *)((long)plVar21 + 0x17) < '\0') {
        plVar27 = (long *)*plVar21;
        if (plVar21[1] == 0xc) goto LAB_00c3e8a0;
      }
      else {
        plVar27 = plVar21;
        if (*(char *)((long)plVar21 + 0x17) == '\f') {
LAB_00c3e8a0:
          plVar22 = plVar21;
          if (*plVar27 == 0x616e696d6f6e6572 && (int)plVar27[1] == 0x6e6f6974) break;
        }
      }
      plVar21 = plVar21 + 3;
      plVar22 = plVar26;
    } while (plVar21 != plVar26);
    bVar7 = plVar22 != plVar26;
  }
  FUN_00b184fc(&local_f0,puVar16,uVar11,puVar5,uVar23,bVar7);
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  local_108 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00b18680(&local_120,&local_f0);
  if ((int)local_120 != 0) {
    local_168 = (undefined8 *******)0x0;
    pppppuStack_160 = (undefined8 *****)0x0;
    local_158 = 0;
    FUN_00547cac(&local_168,"Invalid ICE parameters: ",0x18);
    __s = (char *)FUN_005ecd5c(&local_120);
    if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
                );
    }
    sVar10 = strlen(__s);
    FUN_00547cac(&local_168,__s,sVar10);
    uVar11 = local_158;
    uStack_138 = (ulong)pppppuStack_160;
    local_140 = local_168;
    local_168 = (undefined8 *******)0x0;
    pppppuStack_160 = (undefined8 *****)0x0;
    local_130 = local_158;
    uVar23 = local_158 >> 0x38;
    local_158 = 0;
    pppppuVar1 = (undefined8 *****)uStack_138;
    pppppppuVar2 = local_140;
    if (-1 < (long)uVar11) {
      pppppuVar1 = (undefined8 *****)uVar23;
      pppppppuVar2 = &local_140;
    }
    FUN_00b0092c(param_1,3,pppppppuVar2,pppppuVar1);
    if ((long)local_130 < 0) {
      operator_delete(local_140);
    }
    if ((long)local_158 < 0) {
      operator_delete(local_168);
    }
    goto joined_r0x00c3ef64;
  }
  uVar11 = FUN_00c3f12c(param_2,*param_3,param_4,0);
  if ((uVar11 & 1) == 0) {
    FUN_00b0092c(param_1,3,"Failed to setup RTCP mux.",0x19);
    goto joined_r0x00c3ef64;
  }
  lVar12 = (**(code **)(**(long **)(param_2 + 0x20) + 0x78))();
  if (lVar12 != 0) {
    FUN_00c42d4c(lVar12,param_3 + 8);
  }
  lVar12 = *(long *)(param_2 + 0x10);
  if (lVar12 == 0) {
    bVar8 = 0;
  }
  else {
    lVar18 = (long)*(char *)(lVar12 + 0x57);
    if (lVar18 < 0) {
      lVar13 = *(long *)(lVar12 + 0x40);
      lVar18 = *(long *)(lVar12 + 0x48);
      lVar20 = (long)*(char *)(lVar12 + 0x6f);
      if (lVar20 < 0) goto LAB_00c3ea6c;
LAB_00c3e9f8:
      lVar19 = lVar12 + 0x58;
    }
    else {
      lVar13 = lVar12 + 0x40;
      lVar20 = (long)*(char *)(lVar12 + 0x6f);
      if (-1 < lVar20) goto LAB_00c3e9f8;
LAB_00c3ea6c:
      lVar19 = *(long *)(lVar12 + 0x58);
      lVar20 = *(long *)(lVar12 + 0x60);
    }
    pppppppuVar2 = local_f0;
    puVar14 = puStack_e8;
    if (-1 < (long)local_e0) {
      pppppppuVar2 = &local_f0;
      puVar14 = (undefined1 *)((ulong)local_e0 >> 0x38);
    }
    puVar3 = puStack_d0;
    pppppppuVar6 = pppppppuStack_d8;
    if (-1 < (long)local_c8) {
      puVar3 = (undefined1 *)((ulong)local_c8 >> 0x38);
      pppppppuVar6 = &pppppppuStack_d8;
    }
    bVar8 = FUN_00c50218(lVar13,lVar18,lVar19,lVar20,pppppppuVar2,puVar14,pppppppuVar6,puVar3);
  }
  puVar14 = (undefined1 *)operator_new(0x80);
  pvVar28 = *(void **)(param_3 + 8);
  lVar12 = *(long *)(param_3 + 0x10);
  uVar4 = *param_3;
  *(undefined8 *)(puVar14 + 0x10) = 0;
  *(undefined8 *)(puVar14 + 0x18) = 0;
  *(undefined8 *)(puVar14 + 8) = 0;
  uVar11 = lVar12 - (long)pvVar28;
  *puVar14 = uVar4;
  if (uVar11 != 0) {
    if ((long)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d348c();
    }
    pvVar15 = operator_new(uVar11);
    *(void **)(puVar14 + 8) = pvVar15;
    *(void **)(puVar14 + 0x10) = pvVar15;
    *(ulong *)(puVar14 + 0x18) = (long)pvVar15 + uVar11;
    memcpy(pvVar15,pvVar28,uVar11);
    *(ulong *)(puVar14 + 0x10) = (long)pvVar15 + uVar11;
  }
  *(undefined4 *)(puVar14 + 0x20) = *(undefined4 *)(param_3 + 0x20);
  FUN_00b193dc(puVar14 + 0x28,param_3 + 0x28);
  pvVar28 = *(void **)(param_2 + 0x10);
  *(undefined1 **)(param_2 + 0x10) = puVar14;
  if (pvVar28 != (void *)0x0) {
    FUN_00b194c8((long)pvVar28 + 0x28);
    pvVar15 = *(void **)((long)pvVar28 + 8);
    if (pvVar15 != (void *)0x0) {
      pvVar24 = *(void **)((long)pvVar28 + 0x10);
      uVar23 = (ulong)((long)pvVar24 + (-4 - ((long)pvVar24 << 0x3e))) >> 2;
      uVar11 = (ulong)(((long)pvVar15 - (long)pvVar24 << 0x3e) - ((long)pvVar15 - (long)pvVar24)) >>
               2;
      if (uVar23 <= uVar11) {
        uVar11 = uVar23;
      }
      if ((1 < uVar11) && ((((int)pvVar15 - (int)pvVar24 | -(int)pvVar24) & 3U) == 0)) {
        uVar11 = uVar11 & 0x3ffffffffffffffe;
        pvVar24 = (void *)((long)pvVar24 + uVar11 * -4);
        do {
          uVar11 = uVar11 - 2;
        } while (uVar11 != 0);
      }
      do {
        if (pvVar24 == pvVar15) {
          *(void **)((long)pvVar28 + 0x10) = pvVar15;
          operator_delete(pvVar15);
          goto LAB_00c3ebb8;
        }
        pvVar24 = (void *)((long)pvVar24 + -4);
      } while (pvVar24 != (void *)0x0);
      goto LAB_00c3eb94;
    }
LAB_00c3ebb8:
    operator_delete(pvVar28);
    puVar14 = *(undefined1 **)(param_2 + 0x10);
  }
  puVar29 = (ulong *)((ulong)&local_a0 | 8);
  if (*(long *)(puVar14 + 0x78) == 0) {
    pvVar28 = *(void **)(param_2 + 8);
    if ((pvVar28 != (void *)0x0) && (iVar9 = FUN_00d0f7a0(0xffffffff,pvVar28), iVar9 == 1)) {
      FUN_00833e18(pvVar28);
      operator_delete(pvVar28);
    }
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
LAB_00c3ed50:
    plVar21 = (long *)(**(code **)(**(long **)(*(long *)(param_2 + 0x20) + 0xe0) + 0xd0))();
    (**(code **)(*plVar21 + 0x78))(plVar21,&local_f0);
    if (*(long **)(*(long *)(param_2 + 0x20) + 0xe8) != (long *)0x0) {
      plVar21 = (long *)(**(code **)(**(long **)(*(long *)(param_2 + 0x20) + 0xe8) + 0xd0))();
      (**(code **)(*plVar21 + 0x78))(plVar21,&local_f0);
    }
    if (param_4 - 1U < 2) {
      FUN_00c3f5fc(&local_168,param_2,param_4);
      local_a0 = CONCAT44(local_a0._4_4_,local_168._0_4_);
      if (cStack_149 < '\0') {
        FUN_00547fc0(puVar29,pppppuStack_160,local_158);
        local_80 = local_148;
        uStack_7c = (undefined1)uStack_144;
        uStack_7b = (undefined1)((uint3)uStack_144 >> 8);
        uStack_7a = (undefined1)((uint3)uStack_144 >> 0x10);
        if (cStack_149 < '\0') {
          operator_delete(pppppuStack_160);
        }
      }
      else {
        puVar29[1] = local_158;
        *puVar29 = (ulong)pppppuStack_160;
        puVar29[2] = CONCAT17(cStack_149,local_150);
        local_80 = local_148;
        uStack_7c = (undefined1)uStack_144;
        uStack_7b = (undefined1)((uint3)uStack_144 >> 8);
        uStack_7a = (undefined1)((uint3)uStack_144 >> 0x10);
      }
    }
    if ((int)local_a0 == 0) {
      if ((bVar8 & *param_2 & 1) != 0) {
        *param_2 = 0;
        uVar11 = FUN_0044075c();
        if ((uVar11 & 1) == 0) {
          puVar16 = (undefined8 *)
                    (**(code **)(**(long **)(*(long *)(param_2 + 0x20) + 0xe0) + 0xd0))();
          ppppppuVar17 = (undefined8 ******)(**(code **)*puVar16)();
          pppppuStack_160 = ppppppuVar17[1];
          local_168 = (undefined8 *******)*ppppppuVar17;
          if (-1 < (char)*(byte *)((long)ppppppuVar17 + 0x17)) {
            pppppuStack_160 = (undefined8 *****)(ulong)*(byte *)((long)ppppppuVar17 + 0x17);
            local_168 = (undefined8 *******)ppppppuVar17;
          }
          FUN_00623bb0(&DAT_0021f2ce,"../../pc/jsep_transport.cc",0x5f8,
                       "needs-ice-restart flag cleared for transport ",&local_168);
        }
      }
      FUN_005ecd48(param_1);
      goto joined_r0x00c3ef64;
    }
    pvVar28 = *(void **)(param_2 + 0x10);
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    if (pvVar28 != (void *)0x0) {
      FUN_00b194c8((long)pvVar28 + 0x28);
      pvVar15 = *(void **)((long)pvVar28 + 8);
      if (pvVar15 != (void *)0x0) {
        pvVar24 = *(void **)((long)pvVar28 + 0x10);
        uVar23 = (ulong)((long)pvVar24 + (-4 - ((long)pvVar24 << 0x3e))) >> 2;
        uVar11 = (ulong)(((long)pvVar15 - (long)pvVar24 << 0x3e) - ((long)pvVar15 - (long)pvVar24))
                 >> 2;
        if (uVar23 <= uVar11) {
          uVar11 = uVar23;
        }
        if ((1 < uVar11) && ((((int)pvVar15 - (int)pvVar24 | -(int)pvVar24) & 3U) == 0)) {
          uVar11 = uVar11 & 0x3ffffffffffffffe;
          pvVar24 = (void *)((long)pvVar24 + uVar11 * -4);
          do {
            uVar11 = uVar11 - 2;
          } while (uVar11 != 0);
        }
        do {
          if (pvVar24 == pvVar15) {
            *(void **)((long)pvVar28 + 0x10) = pvVar15;
            operator_delete(pvVar15);
            goto LAB_00c3efd4;
          }
          pvVar24 = (void *)((long)pvVar24 + -4);
        } while (pvVar24 != (void *)0x0);
LAB_00c3eb94:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
LAB_00c3efd4:
      operator_delete(pvVar28);
    }
    *param_1 = (int)local_a0;
    uVar23 = *puVar29;
    uVar11 = puVar29[2];
    *(ulong *)(param_1 + 4) = puVar29[1];
    *(ulong *)(param_1 + 2) = uVar23;
    *(ulong *)(param_1 + 6) = uVar11;
    uVar25 = CONCAT13(uStack_7a,CONCAT12(uStack_7b,CONCAT11(uStack_7c,local_80._3_1_)));
  }
  else {
    FUN_00c3f21c(&local_168);
    local_a0 = CONCAT44(local_a0._4_4_,local_168._0_4_);
    if (cStack_149 < '\0') {
      FUN_00547fc0(puVar29,pppppuStack_160,local_158);
      local_80 = local_148;
      uStack_7c = (undefined1)uStack_144;
      uStack_7b = (undefined1)((uint3)uStack_144 >> 8);
      uStack_7a = (undefined1)((uint3)uStack_144 >> 0x10);
      if (cStack_149 < '\0') {
        operator_delete(pppppuStack_160);
      }
    }
    else {
      puVar29[2] = CONCAT17(cStack_149,local_150);
      puVar29[1] = local_158;
      *puVar29 = (ulong)pppppuStack_160;
      local_80 = local_148;
      uStack_7c = (undefined1)uStack_144;
      uStack_7b = (undefined1)((uint3)uStack_144 >> 8);
      uStack_7a = (undefined1)((uint3)uStack_144 >> 0x10);
    }
    if ((int)local_a0 == 0) goto LAB_00c3ed50;
    pvVar28 = *(void **)(param_2 + 0x10);
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    if (pvVar28 != (void *)0x0) {
      FUN_00b194c8((long)pvVar28 + 0x28);
      pvVar15 = *(void **)((long)pvVar28 + 8);
      if (pvVar15 != (void *)0x0) {
        pvVar24 = *(void **)((long)pvVar28 + 0x10);
        uVar23 = (ulong)((long)pvVar24 + (-4 - ((long)pvVar24 << 0x3e))) >> 2;
        uVar11 = (ulong)(((long)pvVar15 - (long)pvVar24 << 0x3e) - ((long)pvVar15 - (long)pvVar24))
                 >> 2;
        if (uVar23 <= uVar11) {
          uVar11 = uVar23;
        }
        if ((1 < uVar11) && ((((int)pvVar15 - (int)pvVar24 | -(int)pvVar24) & 3U) == 0)) {
          uVar11 = uVar11 & 0x3ffffffffffffffe;
          pvVar24 = (void *)((long)pvVar24 + uVar11 * -4);
          do {
            uVar11 = uVar11 - 2;
          } while (uVar11 != 0);
        }
        do {
          if (pvVar24 == pvVar15) {
            *(void **)((long)pvVar28 + 0x10) = pvVar15;
            operator_delete(pvVar15);
            goto LAB_00c3ef7c;
          }
          pvVar24 = (void *)((long)pvVar24 + -4);
        } while (pvVar24 != (void *)0x0);
        goto LAB_00c3eb94;
      }
LAB_00c3ef7c:
      operator_delete(pvVar28);
    }
    *param_1 = (int)local_a0;
    uVar23 = *puVar29;
    uVar11 = puVar29[2];
    *(ulong *)(param_1 + 4) = puVar29[1];
    *(ulong *)(param_1 + 2) = uVar23;
    *(ulong *)(param_1 + 6) = uVar11;
    uVar25 = CONCAT13(uStack_7a,CONCAT12(uStack_7b,CONCAT11(uStack_7c,local_80._3_1_)));
  }
  param_1[8] = local_80;
  *(undefined4 *)((long)param_1 + 0x23) = uVar25;
joined_r0x00c3ef64:
  if ((long)local_108 < 0) {
    operator_delete(puStack_118);
  }
  if ((long)local_c8 < 0) {
    operator_delete(pppppppuStack_d8);
  }
  if ((long)local_e0 < 0) {
    operator_delete(local_f0);
  }
  if ((local_b8 != (char **)0x0) && (**local_b8 != '\0')) {
    FUN_0066d348(0x45,*local_b8,local_b8[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 00c3f12c  FUN_00c3f12c =====

undefined8 FUN_00c3f12c(long param_1,uint param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  if (param_3 == 0) {
    uVar2 = FUN_00c419bc(param_1 + 0x38,param_2 & 1,param_4);
  }
  else {
    if (param_3 == 2) {
      uVar2 = FUN_00c41b50(param_1 + 0x38,param_2 & 1,param_4);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      uVar2 = FUN_00c419a4(param_1 + 0x38);
      if ((uVar2 & 1) != 0) {
        lVar3 = (**(code **)(**(long **)(param_1 + 0x20) + 0x78))();
        if (lVar3 != 0) {
          FUN_00c423d0(lVar3,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xe0),0);
        }
        FUN_00c45878(*(undefined8 *)(param_1 + 0x20),0);
        (**(code **)(param_1 + 0x58))(param_1 + 0x40);
      }
      goto LAB_00c3f1e0;
    }
    if (param_3 != 1) {
      return 0;
    }
    uVar2 = FUN_00c41a50(param_1 + 0x38,param_2 & 1,param_4);
  }
  if ((uVar2 & 1) == 0) {
    return 0;
  }
LAB_00c3f1e0:
  plVar4 = *(long **)(param_1 + 0x20);
  uVar1 = FUN_00c419a4(param_1 + 0x38);
  (**(code **)(*plVar4 + 0x10))(plVar4,uVar1 & 1);
  return 1;
}


// ===== 00c3f21c  FUN_00c3f21c =====

void FUN_00c3f21c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  char ***__src;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  size_t __n;
  char ****ppppcVar7;
  long lVar8;
  char ***local_4a8;
  ulong uStack_4a0;
  undefined8 local_498;
  char ***local_490;
  undefined1 *puStack_488;
  undefined1 *local_480;
  char **local_470;
  char *local_468;
  char *pcStack_460;
  undefined1 auStack_458 [1024];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (((DAT_00dbb080 & 1) == 0) && (iVar3 = FUN_0054fdd4(&DAT_00dbb080), iVar3 != 0)) {
    DAT_00dbb078 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbb080);
  }
  local_470 = (char **)0x0;
  pcStack_460 = &DAT_aaaaaaaaaaaaaaaa;
  local_468 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbb078 != '\0') {
    FUN_0066d348(0x42,DAT_00dbb078,"JsepTransport::VerifyCertificateFingerprint",0,0,0,0,0,0);
    local_468 = DAT_00dbb078;
    pcStack_460 = "JsepTransport::VerifyCertificateFingerprint";
    local_470 = &local_468;
  }
  if (param_4 == (undefined8 *)0x0) {
    FUN_00b0092c(param_1,3,"No fingerprint",0xe);
  }
  else if (param_3 == 0) {
    FUN_00b0092c(param_1,3,"Fingerprint provided but no identity available.",0x2f);
  }
  else {
    lVar8 = (long)*(char *)((long)param_4 + 0x17);
    puVar4 = param_4;
    if (lVar8 < 0) {
      lVar8 = param_4[1];
      puVar4 = (undefined8 *)*param_4;
    }
    puVar4 = (undefined8 *)FUN_00832e2c(puVar4,lVar8,*(undefined8 *)(param_3 + 8));
    uVar5 = FUN_00833294(puVar4,param_4);
    if ((uVar5 & 1) == 0) {
      memset(auStack_458,0xaa,0x400);
      local_480 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_488 = &DAT_aaaaaaaaaaaaaaaa;
      local_490 = (char ***)&DAT_aaaaaaaaaaaaaaaa;
      FUN_00622830(&local_490,auStack_458,0x400);
      FUN_006228b0(&local_490,"Local fingerprint does not match identity. Expected: ",0x35);
      FUN_008334d4(&local_4a8,puVar4);
      uVar5 = uStack_4a0;
      ppppcVar7 = (char ****)local_4a8;
      if (-1 < (long)local_498) {
        uVar5 = local_498 >> 0x38;
        ppppcVar7 = &local_4a8;
      }
      FUN_006228b0(&local_490,ppppcVar7,uVar5);
      if ((long)local_498 < 0) {
        operator_delete(local_4a8);
      }
      uVar6 = FUN_006228b0(&local_490," Got: ",6);
      FUN_008334d4(&local_4a8,param_4);
      uVar5 = uStack_4a0;
      ppppcVar7 = (char ****)local_4a8;
      if (-1 < (long)local_498) {
        uVar5 = local_498 >> 0x38;
        ppppcVar7 = &local_4a8;
      }
      FUN_006228b0(uVar6,ppppcVar7,uVar5);
      if ((long)local_498 < 0) {
        operator_delete(local_4a8);
      }
      __src = local_490;
      if ((char ****)local_490 == (char ****)0x0) {
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
        ppppcVar7 = &local_4a8;
      }
      else {
        uVar5 = (__n & 0x7ffffffffffffff8) + 8;
        uVar1 = 0x19;
        if (uVar5 != 0x18) {
          uVar1 = uVar5;
        }
        ppppcVar7 = (char ****)operator_new(uVar1);
        local_498 = uVar1 | 0x8000000000000000;
        local_4a8 = (char ***)ppppcVar7;
        uStack_4a0 = __n;
      }
      if ((char ****)((long)ppppcVar7 + __n) < ppppcVar7) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                  );
      }
      if ((ppppcVar7 <= __src) && (__src < (char ****)((long)ppppcVar7 + __n))) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                  );
      }
      memmove(ppppcVar7,__src,__n);
      *(undefined1 *)((long)ppppcVar7 + __n) = 0;
      uVar5 = uStack_4a0;
      ppppcVar7 = (char ****)local_4a8;
      if (-1 < (long)local_498) {
        uVar5 = local_498 >> 0x38;
        ppppcVar7 = &local_4a8;
      }
      FUN_00b0092c(param_1,3,ppppcVar7,uVar5);
      if ((long)local_498 < 0) {
        operator_delete(local_4a8);
      }
    }
    else {
      FUN_005ecd48(param_1);
    }
    if (puVar4 != (undefined8 *)0x0) {
      FUN_007b5554(puVar4 + 3);
      if (*(char *)((long)puVar4 + 0x17) < '\0') {
        operator_delete((void *)*puVar4);
      }
      operator_delete(puVar4);
    }
  }
  if ((local_470 != (char **)0x0) && (**local_470 != '\0')) {
    FUN_0066d348(0x45,*local_470,local_470[1],0,0,0,0,0,0);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c3f5fc  FUN_00c3f5fc =====

void FUN_00c3f5fc(int *param_1,long param_2,int param_3)

{
  undefined8 ****ppppuVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int local_68 [2];
  undefined8 ***local_60;
  ulong uStack_58;
  undefined7 local_50;
  byte bStack_49;
  undefined4 local_48;
  undefined3 uStack_44;
  undefined8 local_28;
  
  if ((*(long *)(param_2 + 0x10) == 0) || (*(long *)(param_2 + 0x18) == 0)) {
    FUN_00b0092c(param_1,6,"Applying an answer transport description without applying any offer.",
                 0x44);
    return;
  }
  lVar5 = *(long *)(*(long *)(param_2 + 0x10) + 0x78);
  local_28 = 0xaaaaaa00aaaaaa00;
  if ((lVar5 == 0) ||
     (puVar6 = *(undefined8 **)(*(long *)(param_2 + 0x18) + 0x78), puVar6 == (undefined8 *)0x0)) {
    if ((param_3 == 2) && (lVar5 != 0)) {
      FUN_00b0092c(param_1,3,"Local fingerprint supplied when caller didn\'t offer DTLS.",0x39);
      return;
    }
    puVar2 = (undefined8 *)operator_new(0x30);
    FUN_00833170(puVar2,&DAT_001b3348,0,0,0);
  }
  else {
    puVar2 = (undefined8 *)operator_new(0x30);
    if (*(char *)((long)puVar6 + 0x17) < '\0') {
      FUN_005478d8(puVar2,*puVar6,puVar6[1]);
    }
    else {
      uVar8 = puVar6[1];
      uVar7 = *puVar6;
      puVar2[2] = puVar6[2];
      puVar2[1] = uVar8;
      *puVar2 = uVar7;
    }
    FUN_007b53e4(puVar2 + 3,puVar6 + 3);
    lVar5 = *(long *)(param_2 + 0x10);
    lVar4 = *(long *)(param_2 + 0x18);
    *(undefined1 **)(param_1 + 8) = &DAT_aaaaaaaaaaaaaaaa;
    *(undefined1 **)(param_1 + 2) = &DAT_aaaaaaaaaaaaaaaa;
    *(undefined1 **)param_1 = &DAT_aaaaaaaaaaaaaaaa;
    *(undefined1 **)(param_1 + 6) = &DAT_aaaaaaaaaaaaaaaa;
    *(undefined1 **)(param_1 + 4) = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00c40950(param_1,param_2,param_3,*(undefined4 *)(lVar5 + 0x74),*(undefined4 *)(lVar4 + 0x74)
                 ,&local_28);
    if (*param_1 != 0) goto LAB_00c3f7cc;
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      operator_delete(*(void **)(param_1 + 2));
    }
  }
  uVar7 = local_28;
  lVar4 = *(long *)(param_2 + 0x20);
  lVar5 = (long)*(char *)((long)puVar2 + 0x17);
  *(undefined1 **)(param_1 + 2) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)param_1 = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 6) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 4) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 8) = &DAT_aaaaaaaaaaaaaaaa;
  plVar3 = *(long **)(lVar4 + 0xe0);
  if (lVar5 < 0) {
    puVar6 = (undefined8 *)*puVar2;
    lVar5 = puVar2[1];
    lVar4 = puVar2[3];
    if (lVar4 == 0) goto LAB_00c3f7a8;
LAB_00c3f78c:
    lVar4 = *(long *)(lVar4 + 0x10) + puVar2[4];
  }
  else {
    lVar4 = puVar2[3];
    puVar6 = puVar2;
    if (lVar4 != 0) goto LAB_00c3f78c;
LAB_00c3f7a8:
    lVar4 = 0;
  }
  (**(code **)(*plVar3 + 200))(param_1,plVar3,puVar6,lVar5,lVar4,puVar2[5],local_28);
  if ((*param_1 != 0) ||
     (plVar3 = *(long **)(*(long *)(param_2 + 0x20) + 0xe8), plVar3 == (long *)0x0))
  goto LAB_00c3f7cc;
  lVar5 = (long)*(char *)((long)puVar2 + 0x17);
  if (lVar5 < 0) {
    puVar6 = (undefined8 *)*puVar2;
    lVar5 = puVar2[1];
    lVar4 = puVar2[3];
    if (lVar4 == 0) goto LAB_00c3f854;
LAB_00c3f838:
    lVar4 = *(long *)(lVar4 + 0x10) + puVar2[4];
  }
  else {
    lVar4 = puVar2[3];
    puVar6 = puVar2;
    if (lVar4 != 0) goto LAB_00c3f838;
LAB_00c3f854:
    lVar4 = 0;
  }
  (**(code **)(*plVar3 + 200))(local_68,plVar3,puVar6,lVar5,lVar4,puVar2[5],uVar7);
  plVar3 = (long *)(param_1 + 2);
  *param_1 = local_68[0];
  if (param_1 != local_68) {
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      ppppuVar1 = (undefined8 ****)local_60;
      if (-1 < (char)bStack_49) {
        uStack_58 = (ulong)bStack_49;
        ppppuVar1 = &local_60;
      }
      FUN_00547f08(plVar3,ppppuVar1,uStack_58);
    }
    else if ((char)bStack_49 < '\0') {
      FUN_00547fc0(plVar3,local_60,uStack_58);
    }
    else {
      *(ulong *)(param_1 + 4) = uStack_58;
      *plVar3 = (long)local_60;
      *(ulong *)(param_1 + 6) = CONCAT17(bStack_49,local_50);
    }
  }
  param_1[8] = local_48;
  *(uint *)((long)param_1 + 0x23) = CONCAT31(uStack_44,local_48._3_1_);
  if ((char)bStack_49 < '\0') {
    operator_delete(local_60);
  }
LAB_00c3f7cc:
  if (puVar2 != (undefined8 *)0x0) {
    FUN_007b5554(puVar2 + 3);
    if (*(char *)((long)puVar2 + 0x17) < '\0') {
      operator_delete((void *)*puVar2);
    }
    operator_delete(puVar2);
  }
  return;
}


// ===== 00c3f900  FUN_00c3f900 =====

/* WARNING: Removing unreachable block (ram,0x00c3ffb8) */
/* WARNING: Removing unreachable block (ram,0x00c3fe70) */
/* WARNING: Removing unreachable block (ram,0x00c3fe80) */
/* WARNING: Removing unreachable block (ram,0x00c3fe84) */
/* WARNING: Removing unreachable block (ram,0x00c40020) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00c3f900(undefined4 *param_1,long param_2,undefined1 *param_3,int param_4)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *******pppppppuVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  long lVar8;
  undefined1 *puVar9;
  char *__s;
  size_t sVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  void *pvVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  void *pvVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 *******local_168;
  void *pvStack_160;
  ulong local_158;
  undefined7 local_150;
  char cStack_149;
  undefined4 local_148;
  undefined3 uStack_144;
  undefined8 *******local_140;
  ulong uStack_138;
  ulong local_130;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  undefined1 *local_108;
  undefined1 *local_100;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined5 local_98;
  undefined3 uStack_93;
  undefined4 local_90;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  char **local_88;
  char *local_80;
  char *pcStack_78;
  
  if (((DAT_00dbb060 & 1) == 0) && (iVar6 = FUN_0054fdd4(&DAT_00dbb060), iVar6 != 0)) {
    DAT_00dbb058 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbb060);
  }
  local_88 = (char **)0x0;
  pcStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbb058 != '\0') {
    FUN_0066d348(0x42,DAT_00dbb058,"JsepTransport::SetLocalJsepTransportDescription",0,0,0,0,0,0);
    local_80 = DAT_00dbb058;
    pcStack_78 = "JsepTransport::SetLocalJsepTransportDescription";
    local_88 = &local_80;
  }
  uStack_8b = 0xaa;
  uStack_89 = 0xaa;
  plVar12 = *(long **)(param_3 + 0x28);
  bVar1 = param_3[0x57];
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  plVar15 = *(long **)(param_3 + 0x30);
  puVar20 = *(undefined8 **)(param_3 + 0x40);
  if (-1 < (char)bVar1) {
    puVar20 = (undefined8 *)(param_3 + 0x40);
  }
  uVar16 = *(ulong *)(param_3 + 0x48);
  if (-1 < (char)bVar1) {
    uVar16 = (ulong)bVar1;
  }
  local_b0 = 0xaaaaaaaa00000000;
  uVar17 = *(ulong *)(param_3 + 0x60);
  puVar3 = *(undefined8 **)(param_3 + 0x58);
  if (-1 < (char)param_3[0x6f]) {
    uVar17 = (ulong)(byte)param_3[0x6f];
    puVar3 = (undefined8 *)(param_3 + 0x58);
  }
  uStack_8a = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_93 = 0;
  local_90 = 0;
  uStack_8c = 0;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  if (plVar12 == plVar15) {
    bVar5 = false;
  }
  else {
    do {
      if (*(char *)((long)plVar12 + 0x17) < '\0') {
        plVar18 = (long *)*plVar12;
        if (plVar12[1] == 0xc) goto LAB_00c3fa70;
      }
      else {
        plVar18 = plVar12;
        if (*(char *)((long)plVar12 + 0x17) == '\f') {
LAB_00c3fa70:
          plVar13 = plVar12;
          if (*plVar18 == 0x616e696d6f6e6572 && (int)plVar18[1] == 0x6e6f6974) break;
        }
      }
      plVar12 = plVar12 + 3;
      plVar13 = plVar15;
    } while (plVar12 != plVar15);
    bVar5 = plVar13 != plVar15;
  }
  FUN_00b184fc(&local_f0,puVar20,uVar16,puVar3,uVar17,bVar5);
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  local_108 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00b18680(&local_120,&local_f0);
  if ((int)local_120 == 0) {
    uVar16 = FUN_00c3f12c(param_2,*param_3,param_4,1);
    if ((uVar16 & 1) == 0) {
      FUN_00b0092c(param_1,3,"Failed to setup RTCP mux.",0x19);
    }
    else {
      lVar8 = (**(code **)(**(long **)(param_2 + 0x20) + 0x78))();
      if (lVar8 != 0) {
        FUN_00c42880(lVar8,param_3 + 8);
        *(undefined4 *)(lVar8 + 0x274) = *(undefined4 *)(param_3 + 0x20);
      }
      puVar9 = (undefined1 *)operator_new(0x80);
      pvVar19 = *(void **)(param_3 + 8);
      lVar8 = *(long *)(param_3 + 0x10);
      uVar2 = *param_3;
      *(undefined8 *)(puVar9 + 0x10) = 0;
      *(undefined8 *)(puVar9 + 0x18) = 0;
      *(undefined8 *)(puVar9 + 8) = 0;
      uVar16 = lVar8 - (long)pvVar19;
      *puVar9 = uVar2;
      if (uVar16 != 0) {
        if ((long)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_005d348c();
        }
        pvVar7 = operator_new(uVar16);
        *(void **)(puVar9 + 8) = pvVar7;
        *(void **)(puVar9 + 0x10) = pvVar7;
        *(ulong *)(puVar9 + 0x18) = (long)pvVar7 + uVar16;
        memcpy(pvVar7,pvVar19,uVar16);
        *(ulong *)(puVar9 + 0x10) = (long)pvVar7 + uVar16;
      }
      *(undefined4 *)(puVar9 + 0x20) = *(undefined4 *)(param_3 + 0x20);
      FUN_00b193dc(puVar9 + 0x28,param_3 + 0x28);
      pvVar19 = *(void **)(param_2 + 0x18);
      *(undefined1 **)(param_2 + 0x18) = puVar9;
      if (pvVar19 != (void *)0x0) {
        FUN_00b194c8((long)pvVar19 + 0x28);
        pvVar7 = *(void **)((long)pvVar19 + 8);
        if (pvVar7 != (void *)0x0) {
          pvVar14 = *(void **)((long)pvVar19 + 0x10);
          uVar17 = (ulong)((long)pvVar14 + (-4 - ((long)pvVar14 << 0x3e))) >> 2;
          uVar16 = (ulong)(((long)pvVar7 - (long)pvVar14 << 0x3e) - ((long)pvVar7 - (long)pvVar14))
                   >> 2;
          if (uVar17 <= uVar16) {
            uVar16 = uVar17;
          }
          if ((1 < uVar16) && ((((int)pvVar7 - (int)pvVar14 | -(int)pvVar14) & 3U) == 0)) {
            uVar16 = uVar16 & 0x3ffffffffffffffe;
            pvVar14 = (void *)((long)pvVar14 + uVar16 * -4);
            do {
              uVar16 = uVar16 - 2;
            } while (uVar16 != 0);
          }
          do {
            if (pvVar14 == pvVar7) {
              *(void **)((long)pvVar19 + 0x10) = pvVar7;
              operator_delete(pvVar7);
              goto LAB_00c3fdb0;
            }
            pvVar14 = (void *)((long)pvVar14 + -4);
          } while (pvVar14 != (void *)0x0);
          goto LAB_00c3ff4c;
        }
LAB_00c3fdb0:
        operator_delete(pvVar19);
      }
      uVar11 = (**(code **)(**(long **)(*(long *)(param_2 + 0x20) + 0xe0) + 0xd0))();
      FUN_00c400d4(param_2,&local_f0,uVar11);
      plVar12 = *(long **)(*(long *)(param_2 + 0x20) + 0xe8);
      if (plVar12 != (long *)0x0) {
        uVar11 = (**(code **)(*plVar12 + 0xd0))();
        FUN_00c400d4(param_2,&local_f0,uVar11);
      }
      puVar20 = (undefined8 *)((ulong)&local_b0 | 8);
      if (param_4 - 1U < 2) {
        FUN_00c3f5fc(&local_168,param_2,0);
        local_b0 = CONCAT44(local_b0._4_4_,local_168._0_4_);
        if (cStack_149 < '\0') {
          FUN_00547fc0(puVar20,pvStack_160,local_158);
          local_90 = local_148;
          uStack_8c = (undefined1)uStack_144;
          uStack_8b = (undefined1)((uint3)uStack_144 >> 8);
          uStack_8a = (undefined1)((uint3)uStack_144 >> 0x10);
          if (cStack_149 < '\0') {
            operator_delete(pvStack_160);
          }
        }
        else {
          puVar20[1] = local_158;
          *puVar20 = pvStack_160;
          puVar20[2] = CONCAT17(cStack_149,local_150);
          local_90 = local_148;
          uStack_8c = (undefined1)uStack_144;
          uStack_8b = (undefined1)((uint3)uStack_144 >> 8);
          uStack_8a = (undefined1)((uint3)uStack_144 >> 0x10);
        }
      }
      if ((int)local_b0 == 0) {
        FUN_005ecd48(param_1);
      }
      else {
        pvVar19 = *(void **)(param_2 + 0x18);
        *(undefined8 *)(param_2 + 0x18) = 0;
        if (pvVar19 != (void *)0x0) {
          FUN_00b194c8((long)pvVar19 + 0x28);
          pvVar7 = *(void **)((long)pvVar19 + 8);
          if (pvVar7 != (void *)0x0) {
            pvVar14 = *(void **)((long)pvVar19 + 0x10);
            uVar17 = (ulong)((long)pvVar14 + (-4 - ((long)pvVar14 << 0x3e))) >> 2;
            uVar16 = (ulong)(((long)pvVar7 - (long)pvVar14 << 0x3e) - ((long)pvVar7 - (long)pvVar14)
                            ) >> 2;
            if (uVar17 <= uVar16) {
              uVar16 = uVar17;
            }
            if ((1 < uVar16) && ((((int)pvVar7 - (int)pvVar14 | -(int)pvVar14) & 3U) == 0)) {
              uVar16 = uVar16 & 0x3ffffffffffffffe;
              pvVar14 = (void *)((long)pvVar14 + uVar16 * -4);
              do {
                uVar16 = uVar16 - 2;
              } while (uVar16 != 0);
            }
            do {
              if (pvVar14 == pvVar7) {
                *(void **)((long)pvVar19 + 0x10) = pvVar7;
                operator_delete(pvVar7);
                goto LAB_00c3ff84;
              }
              pvVar14 = (void *)((long)pvVar14 + -4);
            } while (pvVar14 != (void *)0x0);
            goto LAB_00c3ff4c;
          }
LAB_00c3ff84:
          operator_delete(pvVar19);
        }
        *param_1 = (int)local_b0;
        uVar21 = *puVar20;
        uVar11 = puVar20[2];
        *(undefined8 *)(param_1 + 4) = puVar20[1];
        *(undefined8 *)(param_1 + 2) = uVar21;
        *(undefined8 *)(param_1 + 6) = uVar11;
        param_1[8] = local_90;
        *(uint *)((long)param_1 + 0x23) =
             CONCAT13(uStack_8a,CONCAT12(uStack_8b,CONCAT11(uStack_8c,local_90._3_1_)));
      }
    }
  }
  else {
    pvVar19 = *(void **)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x18) = 0;
    if (pvVar19 != (void *)0x0) {
      FUN_00b194c8((long)pvVar19 + 0x28);
      pvVar7 = *(void **)((long)pvVar19 + 8);
      if (pvVar7 != (void *)0x0) {
        pvVar14 = *(void **)((long)pvVar19 + 0x10);
        uVar17 = (ulong)((long)pvVar14 + (-4 - ((long)pvVar14 << 0x3e))) >> 2;
        uVar16 = (ulong)(((long)pvVar7 - (long)pvVar14 << 0x3e) - ((long)pvVar7 - (long)pvVar14)) >>
                 2;
        if (uVar17 <= uVar16) {
          uVar16 = uVar17;
        }
        if ((1 < uVar16) && ((((int)pvVar7 - (int)pvVar14 | -(int)pvVar14) & 3U) == 0)) {
          uVar16 = uVar16 & 0x3ffffffffffffffe;
          pvVar14 = (void *)((long)pvVar14 + uVar16 * -4);
          do {
            uVar16 = uVar16 - 2;
          } while (uVar16 != 0);
        }
        do {
          if (pvVar14 == pvVar7) {
            *(void **)((long)pvVar19 + 0x10) = pvVar7;
            operator_delete(pvVar7);
            goto LAB_00c3fca4;
          }
          pvVar14 = (void *)((long)pvVar14 + -4);
        } while (pvVar14 != (void *)0x0);
LAB_00c3ff4c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
LAB_00c3fca4:
      operator_delete(pvVar19);
    }
    local_168 = (undefined8 *******)0x0;
    pvStack_160 = (void *)0x0;
    local_158 = 0;
    FUN_00547cac(&local_168,"Invalid ICE parameters: ",0x18);
    __s = (char *)FUN_005ecd5c(&local_120);
    if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
                );
    }
    sVar10 = strlen(__s);
    FUN_00547cac(&local_168,__s,sVar10);
    uVar16 = local_158;
    uStack_138 = (ulong)pvStack_160;
    local_140 = local_168;
    local_168 = (undefined8 *******)0x0;
    pvStack_160 = (void *)0x0;
    local_130 = local_158;
    uVar17 = local_158 >> 0x38;
    local_158 = 0;
    pvVar19 = (void *)uStack_138;
    pppppppuVar4 = local_140;
    if (-1 < (long)uVar16) {
      pvVar19 = (void *)uVar17;
      pppppppuVar4 = &local_140;
    }
    FUN_00b0092c(param_1,3,pppppppuVar4,pvVar19);
    if ((long)local_130 < 0) {
      operator_delete(local_140);
    }
    if ((long)local_158 < 0) {
      operator_delete(local_168);
    }
  }
  if ((long)local_108 < 0) {
    operator_delete(puStack_118);
  }
  if ((long)local_c8 < 0) {
    operator_delete(puStack_d8);
  }
  if ((long)local_e0 < 0) {
    operator_delete(local_f0);
  }
  if ((local_88 != (char **)0x0) && (**local_88 != '\0')) {
    FUN_0066d348(0x45,*local_88,local_88[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 00c400d4  FUN_00c400d4 =====

void FUN_00c400d4(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  char **local_58;
  char *local_50;
  char *pcStack_48;
  
  if (((DAT_00dbb090 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00dbb090), iVar1 != 0)) {
    DAT_00dbb088 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbb090);
  }
  local_58 = (char **)0x0;
  pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbb088 != '\0') {
    local_58 = &local_50;
    FUN_0066d348(0x42,DAT_00dbb088,"JsepTransport::SetRemoteIceParameters",0,0,0,0,0,0);
    local_50 = DAT_00dbb088;
    pcStack_48 = "JsepTransport::SetRemoteIceParameters";
  }
  (**(code **)(*param_3 + 0x80))(param_3,param_2);
  (**(code **)(*param_3 + 0x88))(param_3,*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x70));
  if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
    FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 00c40218  FUN_00c40218 =====

void FUN_00c40218(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 **ppuVar10;
  long lVar11;
  undefined1 *local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined1 *local_68;
  ulong uStack_60;
  ulong local_58;
  
  if (*(long *)(param_2 + 0x18) == 0) {
    local_68 = (undefined1 *)0x0;
    uStack_60 = 0;
    local_58 = 0;
    puVar7 = (undefined8 *)(**(code **)(**(long **)(*(long *)(param_2 + 0x20) + 0xe0) + 0xd0))();
    puVar8 = (undefined8 *)(**(code **)*puVar7)();
    uVar2 = puVar8[1];
    puVar7 = (undefined8 *)*puVar8;
    if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)puVar8 + 0x17);
      puVar7 = puVar8;
    }
    FUN_00547cac(&local_68,puVar7,uVar2);
    FUN_00547cac(&local_68,
                 " is not ready to use the remote candidate because the remote description is not set."
                 ,0x54);
    uVar9 = 6;
    local_80 = local_68;
    bVar5 = (long)local_58 < 0;
    ppuVar10 = (undefined1 **)local_68;
    uStack_78 = uStack_60;
    local_70 = local_58;
    if (!bVar5) {
      ppuVar10 = &local_80;
    }
LAB_00c40454:
    local_58 = 0;
    uStack_60 = 0;
    local_68 = (undefined1 *)0x0;
    uVar2 = uStack_78;
    if (!bVar5) {
      uVar2 = local_70 >> 0x38;
    }
    FUN_00b0092c(param_1,uVar9,ppuVar10,uVar2);
    if ((long)local_70 < 0) {
      operator_delete(local_80);
    }
    if ((long)local_58 < 0) {
      operator_delete(local_68);
    }
    return;
  }
  lVar11 = *param_3;
  lVar3 = param_3[1];
  if (lVar11 != lVar3) {
    iVar4 = *(int *)PTR_DAT_00d52638;
    do {
      lVar1 = 0xe0;
      if (*(int *)(lVar11 + 0x18) != iVar4) {
        lVar1 = 0xe8;
      }
      plVar6 = *(long **)(*(long *)(param_2 + 0x20) + lVar1);
      if (plVar6 == (long *)0x0) {
        local_68 = (undefined1 *)0x0;
        uStack_60 = 0;
        local_58 = 0;
        FUN_00547cac(&local_68,"Candidate has an unknown component: ",0x24);
        FUN_00aff5b4(&local_80,lVar11,1);
        ppuVar10 = (undefined1 **)local_80;
        if (-1 < (long)local_70) {
          uStack_78 = local_70 >> 0x38;
          ppuVar10 = &local_80;
        }
        FUN_00547cac(&local_68,ppuVar10,uStack_78);
        FUN_00547cac(&local_68," for mid ",9);
        puVar7 = (undefined8 *)(**(code **)(**(long **)(*(long *)(param_2 + 0x20) + 0xe0) + 0xd0))()
        ;
        puVar8 = (undefined8 *)(**(code **)*puVar7)();
        uVar2 = puVar8[1];
        puVar7 = (undefined8 *)*puVar8;
        if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
          uVar2 = (ulong)*(byte *)((long)puVar8 + 0x17);
          puVar7 = puVar8;
        }
        FUN_00547cac(&local_68,puVar7,uVar2);
        if (local_70._7_1_ < '\0') {
          operator_delete(local_80);
        }
        uVar9 = 3;
        local_80 = local_68;
        bVar5 = (long)local_58 < 0;
        ppuVar10 = (undefined1 **)local_68;
        uStack_78 = uStack_60;
        local_70 = local_58;
        if (!bVar5) {
          ppuVar10 = &local_80;
        }
        goto LAB_00c40454;
      }
      plVar6 = (long *)(**(code **)(*plVar6 + 0xd0))();
      (**(code **)(*plVar6 + 0xa8))(plVar6,lVar11);
      lVar11 = lVar11 + 0x198;
    } while (lVar11 != lVar3);
  }
  FUN_005ecd48(param_1);
  return;
}


// ===== 00c404b8  FUN_00c404b8 =====

void FUN_00c404b8(byte *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  ulong uStack_28;
  
  if ((*param_1 & 1) == 0) {
    *param_1 = 1;
    uVar1 = FUN_0044075c();
    if ((uVar1 & 1) == 0) {
      puVar2 = (undefined8 *)(**(code **)(**(long **)(*(long *)(param_1 + 0x20) + 0xe0) + 0xd0))();
      puVar2 = (undefined8 *)(**(code **)*puVar2)();
      uStack_28 = puVar2[1];
      local_30 = (undefined8 *)*puVar2;
      if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
        uStack_28 = (ulong)*(byte *)((long)puVar2 + 0x17);
        local_30 = puVar2;
      }
      FUN_00623bb0(&DAT_0021f2ce,"../../pc/jsep_transport.cc",0x8c8,
                   "needs-ice-restart flag set for transport ",&local_30);
    }
  }
  return;
}


// ===== 00c40560  FUN_00c40560 =====

ulong FUN_00c40560(long param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  uint local_14;
  
  local_14 = 0xaaaaaaaa;
  plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0xe0);
  uVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,&local_14);
  uVar3 = (ulong)local_14 | 0x100000000;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  return uVar3;
}


// ===== 00c405b0  FUN_00c405b0 =====

uint FUN_00c405b0(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  char **local_58;
  char *local_50;
  char *pcStack_48;
  
  if (((DAT_00dbb070 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00dbb070), iVar4 != 0)) {
    DAT_00dbb068 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbb070);
  }
  local_58 = (char **)0x0;
  pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbb068 != '\0') {
    local_58 = &local_50;
    FUN_0066d348(0x42,DAT_00dbb068,"JsepTransport::GetStats",0,0,0,0,0,0);
    local_50 = DAT_00dbb068;
    pcStack_48 = "JsepTransport::GetStats";
  }
  puVar5 = (undefined8 *)(**(code **)(**(long **)(*(long *)(param_1 + 0x20) + 0xe0) + 0xd0))();
  puVar6 = (undefined8 *)(**(code **)*puVar5)();
  uVar1 = puVar6[1];
  puVar5 = (undefined8 *)*puVar6;
  if (-1 < (char)*(byte *)((long)puVar6 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)puVar6 + 0x17);
    puVar5 = puVar6;
  }
  if (puVar5 != (undefined8 *)0x0 || uVar1 == 0) {
    uVar7 = FUN_00547b08(param_2);
    lVar8 = *(long *)(param_2 + 0x18);
    lVar2 = *(long *)(param_2 + 0x20);
    while( true ) {
      if (lVar8 == lVar2) {
        *(long *)(param_2 + 0x20) = lVar8;
        uVar7 = FUN_00c407a8(uVar7,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xe0),
                             *(undefined4 *)PTR_DAT_00d52638,param_2);
        uVar9 = (uint)uVar7;
        lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0xe8);
        if (lVar8 != 0) {
          uVar3 = FUN_00c407a8(uVar7,lVar8,*(undefined4 *)PTR_DAT_00d52640,param_2);
          uVar9 = uVar9 & uVar3;
        }
        if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
          FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
        }
        return uVar9 & 1;
      }
      lVar2 = lVar2 + -0xc0;
      if (lVar2 == 0) break;
      uVar7 = FUN_00c720b0(lVar2);
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/string:2845: libc++ Hardening assertion __n == 0 || __s != nullptr failed: string::assign received nullptr\n"
            );
}


// ===== 00c407a8  FUN_00c407a8 =====

uint FUN_00c407a8(undefined8 param_1,long *param_2,undefined4 param_3,long param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined4 local_118 [2];
  undefined8 uStack_110;
  undefined1 local_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
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
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  local_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c71e70(&local_100);
  local_100 = (undefined1 *)CONCAT44(local_100._4_4_,param_3);
  (**(code **)(*param_2 + 0x78))(param_2,(ulong)&local_100 | 4);
  (**(code **)(*param_2 + 0x88))(param_2,(ulong)&local_100 | 8);
  (**(code **)(*param_2 + 0x90))(param_2,(ulong)&local_100 | 0xc);
  (**(code **)(*param_2 + 0x98))(local_118,param_2);
  puStack_e8 = (undefined1 *)uStack_110;
  local_e0 = (undefined1 *)CONCAT71(local_e0._1_7_,local_108);
  uVar2 = (**(code **)(*param_2 + 0x50))(param_2);
  local_d0 = (undefined1 *)CONCAT44(local_d0._4_4_,uVar2);
  local_118[0] = 0xaaaaaaaa;
  uVar4 = (**(code **)(*param_2 + 0x68))(param_2,local_118);
  if ((uVar4 & 1) != 0) {
    local_d8 = (undefined1 *)CONCAT35(local_d8._5_3_,0x100000000);
    local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,local_118[0]);
  }
  plVar5 = (long *)(**(code **)(*param_2 + 0xd0))(param_2);
  uVar3 = (**(code **)(*plVar5 + 200))(plVar5,&puStack_c8);
  if ((uVar3 & 1) != 0) {
    uVar1 = (**(code **)(*param_2 + 0xa0))(param_2);
    uVar4 = *(ulong *)(param_4 + 0x20);
    local_48 = (undefined1 *)CONCAT62(local_48._2_6_,uVar1);
    if (uVar4 < *(ulong *)(param_4 + 0x28)) {
      if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00c71ec0(uVar4,&local_100);
      lVar6 = uVar4 + 0xc0;
    }
    else {
      lVar6 = FUN_00c40aec(param_4 + 0x18,&local_100);
    }
    *(long *)(param_4 + 0x20) = lVar6;
  }
  FUN_00c720b0(&local_100);
  return uVar3 & 1;
}


// ===== 00c40950  FUN_00c40950 =====

void FUN_00c40950(undefined8 param_1,long param_2,int param_3,int param_4,uint param_5,uint *param_6
                 )

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint local_34;
  
  if (param_3 == 0) {
    if (param_4 != 3) {
      pcVar4 = "Offerer must use actpass value for setup attribute.";
      uVar5 = 0x33;
LAB_00c40a9c:
      FUN_00b0092c(param_1,3,pcVar4,uVar5);
      return;
    }
    bVar1 = param_5 == 2;
    if (2 < param_5) {
      pcVar4 = "Answerer must use either active or passive value for setup attribute.";
      uVar5 = 0x45;
      goto LAB_00c40a9c;
    }
    goto LAB_00c409ac;
  }
  if ((param_5 == 0) || (param_5 == 3)) {
LAB_00c40988:
    if (1 < param_4 - 1U) {
      pcVar4 = "Answerer must use either active or passive value for setup attribute.";
      uVar5 = 0x45;
LAB_00c40ad0:
      FUN_00b0092c(param_1,3,pcVar4,uVar5);
      return;
    }
  }
  else {
    local_34 = 0xaaaaaaaa;
    plVar2 = *(long **)(*(long *)(param_2 + 0x20) + 0xe0);
    uVar3 = (**(code **)(*plVar2 + 0x68))(plVar2,&local_34);
    uVar6 = (ulong)local_34 | 0x100000000;
    if ((uVar3 & 1) == 0) {
      uVar6 = 0;
    }
    if (uVar6 >> 0x20 != 0) {
      if (((param_5 == 1) && ((int)uVar6 == 0)) || ((param_5 == 2 && ((int)uVar6 == 1)))) {
        pcVar4 = "Offerer must use current negotiated role for setup attribute.";
        uVar5 = 0x3d;
        goto LAB_00c40ad0;
      }
      goto LAB_00c40988;
    }
    if (param_5 == 2) {
      if (param_4 != 1) {
        pcVar4 = "Answerer must be active when offerer is passive";
LAB_00c40ac4:
        uVar5 = 0x2f;
        goto LAB_00c40ad0;
      }
    }
    else {
      if (param_5 != 1) goto LAB_00c40988;
      if (param_4 != 2) {
        pcVar4 = "Answerer must be passive when offerer is active";
        goto LAB_00c40ac4;
      }
    }
  }
  bVar1 = param_4 == 1;
LAB_00c409ac:
  *(undefined1 *)(param_6 + 1) = 1;
  *param_6 = bVar1 ^ 1;
  FUN_005ecd48(param_1);
  return;
}


// ===== 00c40aec  FUN_00c40aec =====

long FUN_00c40aec(long *param_1,undefined8 param_2)

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
  uVar3 = (lVar6 >> 6) * -0x5555555555555555 + 1;
  if (uVar3 < 0x155555555555556) {
    lVar4 = param_1[2] - *param_1 >> 6;
    uVar5 = lVar4 * 0x5555555555555556;
    if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
      uVar5 = uVar3;
    }
    if (0xaaaaaaaaaaaaa9 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar5 = 0x155555555555555;
    }
    if (uVar5 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0x155555555555555 < uVar5) goto LAB_00c40c7c;
      pvVar2 = operator_new(uVar5 * 0xc0);
      lVar6 = (long)pvVar2 + lVar6;
    }
    if (lVar6 == 0) {
LAB_00c40c50:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_00c71ec0(lVar6,param_2);
    pvVar7 = (void *)*param_1;
    pvVar1 = (void *)param_1[1];
    lVar4 = (long)pvVar7 + (lVar6 - (long)pvVar1);
    pvVar8 = pvVar7;
    lVar9 = lVar4;
    if (pvVar1 != pvVar7) {
      do {
        if (lVar9 == 0) goto LAB_00c40c50;
        FUN_00c71ec0(lVar9,pvVar8);
        pvVar8 = (void *)((long)pvVar8 + 0xc0);
        lVar9 = lVar9 + 0xc0;
      } while (pvVar8 != pvVar1);
      do {
        if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_00c720b0(pvVar7);
        pvVar7 = (void *)((long)pvVar7 + 0xc0);
      } while (pvVar7 != pvVar1);
      pvVar7 = (void *)*param_1;
    }
    *param_1 = lVar4;
    param_1[1] = lVar6 + 0xc0;
    param_1[2] = (long)((long)pvVar2 + uVar5 * 0xc0);
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
    return lVar6 + 0xc0;
  }
  FUN_00c40c80();
LAB_00c40c7c:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00c40c80  FUN_00c40c80 =====

void FUN_00c40c80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c40c98  FUN_00c40c98 =====

void FUN_00c40c98(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x58);
  return;
}


// ===== 00c40cbc  FUN_00c40cbc =====

bool FUN_00c40cbc(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 0xb);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00c40d14  FUN_00c40d14 =====

void FUN_00c40d14(void *param_1)

{
  FUN_00c40ef0();
  operator_delete(param_1);
  return;
}


// ===== 00c40d44  FUN_00c40d44 =====

bool FUN_00c40d44(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x58) == 1;
}


// ===== 00c40d5c  FUN_00c40d5c =====

void FUN_00c40d5c(long param_1)

{
  FUN_00c40ef0(param_1 + -8);
  return;
}


// ===== 00c40d68  FUN_00c40d68 =====

void FUN_00c40d68(long param_1)

{
  FUN_00c40ef0((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 00c40d9c  FUN_00c40d9c =====

void FUN_00c40d9c(long *param_1)

{
  FUN_00c42144(*(undefined8 *)(*param_1 + 0x28));
  return;
}


// ===== 00c40dac  FUN_00c40dac =====

void FUN_00c40dac(undefined8 *param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *local_60;
  undefined8 *local_58 [2];
  code *local_48;
  undefined *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00d4d248;
  param_1[1] = &PTR_FUN_00d4d2e8;
  uVar2 = FUN_007e06bc();
  param_1[2] = uVar2;
  local_60 = (long *)*param_3;
  if (local_60 != (long *)0x0) {
    (**(code **)*local_60)();
  }
  FUN_00c4195c(param_1 + 3,1,&local_60,0,0,0);
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 8))();
  }
  param_1[8] = param_2;
  param_1[9] = 0;
  puVar3 = (undefined8 *)*param_3;
  param_1[10] = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)();
    param_2 = (long *)param_1[8];
  }
  lVar4 = (**(code **)(*param_2 + 0x20))(param_2);
  FUN_007b5a0c(lVar4 + 0x110,param_1,param_1,FUN_00c41898);
  local_48 = FUN_00c418b8;
  local_40 = &DAT_00259208;
  local_58[0] = param_1;
  (**(code **)(*(long *)param_1[8] + 0x10))((long *)param_1[8],local_58);
  if (*(code **)(local_40 + 8) != (code *)0x0) {
    (**(code **)(local_40 + 8))(local_58[0]);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c40ef0  FUN_00c40ef0 =====

void FUN_00c40ef0(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_00d4d248;
  param_1[1] = &PTR_FUN_00d4d2e8;
  if ((long *)param_1[10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[10] + 8))();
  }
  plVar1 = (long *)param_1[8];
  param_1[8] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_00c41978(param_1 + 3);
  return;
}


// ===== 00c40f54  FUN_00c40f54 =====

void FUN_00c40f54(undefined8 *param_1)

{
  long *plVar1;
  
  param_1[-1] = &PTR_FUN_00d4d248;
  *param_1 = &PTR_FUN_00d4d2e8;
  if ((long *)param_1[9] != (long *)0x0) {
    (**(code **)(*(long *)param_1[9] + 8))();
  }
  plVar1 = (long *)param_1[7];
  param_1[7] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_00c41978(param_1 + 2);
  return;
}


// ===== 00c40fb8  FUN_00c40fb8 =====

void FUN_00c40fb8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc40fc0);
  (*pcVar1)();
}


// ===== 00c40fc0  FUN_00c40fc0 =====

void FUN_00c40fc0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc40fc8);
  (*pcVar1)();
}


// ===== 00c40fc8  FUN_00c40fc8 =====

void FUN_00c40fc8(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 uStack_39;
  long local_38;
  undefined8 *puStack_30;
  long *local_28;
  
  uVar1 = FUN_007e18fc(*(undefined8 *)(param_2 + 0x10));
  if ((uVar1 & 1) == 0) {
    plVar3 = *(long **)(param_2 + 0x10);
    param_1[1] = 0;
    param_1[2] = 0xffffffffffffffff;
    *param_1 = 0xaaaaaaaa00000000;
    local_28 = &local_38;
    lVar5 = *plVar3;
    param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined1 *)((long)param_1 + 0x24) = 0;
    local_38 = param_2;
    puStack_30 = param_1;
    (**(code **)(lVar5 + 0x60))(plVar3,&puStack_30,FUN_00c418c4,&uStack_39);
  }
  else {
    puVar2 = *(undefined8 **)(param_2 + 0x20);
    *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 0x18);
    param_1[1] = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)();
    }
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    uVar4 = *(undefined8 *)(param_2 + 0x35);
    param_1[3] = *(undefined8 *)(param_2 + 0x30);
    param_1[2] = uVar6;
    *(undefined8 *)((long)param_1 + 0x1d) = uVar4;
  }
  return;
}


// ===== 00c41090  FUN_00c41090 =====

void FUN_00c41090(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return;
}


// ===== 00c4109c  FUN_00c4109c =====

void FUN_00c4109c(long param_1)

{
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}


// ===== 00c410a8  FUN_00c410a8 =====

void FUN_00c410a8(undefined8 param_1,long param_2,undefined8 param_3,undefined2 param_4)

{
  (**(code **)(**(long **)(param_2 + 0x40) + 0x38))(*(long **)(param_2 + 0x40),param_3,param_4);
  FUN_005ecd48(param_1);
  return;
}


// ===== 00c410e4  FUN_00c410e4 =====

void FUN_00c410e4(undefined8 param_1,long param_2,undefined8 param_3,undefined2 param_4)

{
  (**(code **)(**(long **)(param_2 + 0x38) + 0x38))(*(long **)(param_2 + 0x38),param_3,param_4);
  FUN_005ecd48(param_1);
  return;
}


// ===== 00c41120  FUN_00c41120 =====

void FUN_00c41120(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c41130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x40) + 0x48))();
  return;
}


// ===== 00c41134  FUN_00c41134 =====

void FUN_00c41134(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c41144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x38) + 0x48))();
  return;
}


// ===== 00c41148  FUN_00c41148 =====

void FUN_00c41148(undefined8 param_1,long param_2)

{
  (**(code **)(**(long **)(param_2 + 0x40) + 0x40))();
  FUN_005ecd48(param_1);
  return;
}


// ===== 00c41180  FUN_00c41180 =====

void FUN_00c41180(undefined8 param_1,long param_2)

{
  (**(code **)(**(long **)(param_2 + 0x38) + 0x40))();
  FUN_005ecd48(param_1);
  return;
}


// ===== 00c411b8  FUN_00c411b8 =====

void FUN_00c411b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c411c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x40) + 0x18))();
  return;
}


// ===== 00c411cc  FUN_00c411cc =====

void FUN_00c411cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c411dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x38) + 0x18))();
  return;
}


// ===== 00c411e0  FUN_00c411e0 =====

void FUN_00c411e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c411f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x40) + 0x50))();
  return;
}


// ===== 00c411f4  FUN_00c411f4 =====

void FUN_00c411f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c41204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x38) + 0x50))();
  return;
}


// ===== 00c41208  FUN_00c41208 =====

void FUN_00c41208(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c41218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x40) + 0x70))();
  return;
}


// ===== 00c4121c  FUN_00c4121c =====

void FUN_00c4121c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c4122c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x38) + 0x70))();
  return;
}


// ===== 00c41230  FUN_00c41230 =====

void FUN_00c41230(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c41240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x40) + 0x78))();
  return;
}


// ===== 00c41244  FUN_00c41244 =====

void FUN_00c41244(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c41254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x38) + 0x78))();
  return;
}


// ===== 00c41258  FUN_00c41258 =====

void FUN_00c41258(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c41268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x40) + 0x80))();
  return;
}


// ===== 00c4126c  FUN_00c4126c =====

void FUN_00c4126c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c4127c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x38) + 0x80))();
  return;
}


// ===== 00c41280  FUN_00c41280 =====

ulong FUN_00c41280(long param_1)

{
  return *(ulong *)(param_1 + 0x38) & 0xffffffffff;
}


// ===== 00c41290  FUN_00c41290 =====

ulong FUN_00c41290(long param_1)

{
  return *(ulong *)(param_1 + 0x30) & 0xffffffffff;
}


// ===== 00c412a0  FUN_00c412a0 =====

long * FUN_00c412a0(long param_1)

{
  void *pvVar1;
  long *plVar2;
  undefined1 auStack_58 [4];
  ulong local_54;
  void *local_30;
  
  plVar2 = *(long **)(param_1 + 0x50);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x28))(auStack_58);
    pvVar1 = local_30;
    local_30 = (void *)0x0;
    if (pvVar1 != (void *)0x0) {
      FUN_00832ab8(pvVar1);
      operator_delete(pvVar1);
    }
    if ((local_54 >> 0x20 & 1) == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = (long *)0x100000000;
      if ((int)local_54 == 0) {
        plVar2 = (long *)0x100000001;
      }
    }
  }
  return plVar2;
}


// ===== 00c41320  FUN_00c41320 =====

long * FUN_00c41320(long param_1)

{
  void *pvVar1;
  long *plVar2;
  undefined1 auStack_58 [4];
  ulong local_54;
  void *local_30;
  
  plVar2 = *(long **)(param_1 + 0x48);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x28))(auStack_58);
    pvVar1 = local_30;
    local_30 = (void *)0x0;
    if (pvVar1 != (void *)0x0) {
      FUN_00832ab8(pvVar1);
      operator_delete(pvVar1);
    }
    if ((local_54 >> 0x20 & 1) == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = (long *)0x100000000;
      if ((int)local_54 == 0) {
        plVar2 = (long *)0x100000001;
      }
    }
  }
  return plVar2;
}


// ===== 00c413a0  FUN_00c413a0 =====

void FUN_00c413a0(long *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x50);
  *param_1 = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c413b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)();
    return;
  }
  return;
}


// ===== 00c413c0  FUN_00c413c0 =====

void FUN_00c413c0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = (**(code **)(**(long **)(param_1 + 0x40) + 0x20))();
  FUN_007b5df8(lVar1 + 0x110,param_1);
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x50) + 8))();
  }
  plVar2 = *(long **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_00c41438(param_1,3);
  return;
}


// ===== 00c41438  FUN_00c41438 =====

void FUN_00c41438(long param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 local_98 [2];
  undefined8 *local_90;
  undefined8 local_88;
  undefined5 uStack_80;
  undefined3 uStack_7b;
  undefined5 uStack_78;
  long *local_70;
  undefined4 local_68 [2];
  undefined8 *local_60;
  undefined8 local_58;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  long *local_28;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x40) == 0) {
    local_70 = *(long **)(param_1 + 0x50);
    if (local_70 != (long *)0x0) {
      (**(code **)*local_70)();
    }
    FUN_00c4195c(local_68,param_2,&local_70,*(undefined8 *)(param_1 + 0x28),
                 *(undefined1 *)(param_1 + 0x30),*(ulong *)(param_1 + 0x38) & 0xffffffffff);
    *(undefined4 *)(param_1 + 0x18) = local_68[0];
    if (local_60 != (undefined8 *)0x0) {
      (**(code **)*local_60)(local_60);
    }
    if (*(long **)(param_1 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x20) + 8))();
    }
    *(undefined8 **)(param_1 + 0x20) = local_60;
    *(ulong *)(param_1 + 0x30) = CONCAT35(uStack_4b,uStack_50);
    *(undefined8 *)(param_1 + 0x28) = local_58;
    *(ulong *)(param_1 + 0x35) = CONCAT53(uStack_48,uStack_4b);
    FUN_00c41978(local_68);
    plVar2 = local_70;
  }
  else {
    local_28 = *(long **)(param_1 + 0x50);
    if (local_28 != (long *)0x0) {
      (**(code **)*local_28)();
    }
    FUN_00c4195c(local_68,param_2,&local_28,*(undefined8 *)(param_1 + 0x28),
                 *(undefined1 *)(param_1 + 0x30),*(ulong *)(param_1 + 0x38) & 0xffffffffff);
    *(undefined4 *)(param_1 + 0x18) = local_68[0];
    if (local_60 != (undefined8 *)0x0) {
      (**(code **)*local_60)(local_60);
    }
    if (*(long **)(param_1 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x20) + 8))();
    }
    *(undefined8 **)(param_1 + 0x20) = local_60;
    *(ulong *)(param_1 + 0x30) = CONCAT35(uStack_4b,uStack_50);
    *(undefined8 *)(param_1 + 0x28) = local_58;
    *(ulong *)(param_1 + 0x35) = CONCAT53(uStack_48,uStack_4b);
    FUN_00c41978(local_68);
    plVar2 = local_28;
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if ((param_2 != iVar1) && (puVar3 = *(undefined8 **)(param_1 + 0x48), puVar3 != (undefined8 *)0x0)
     ) {
    local_98[0] = *(undefined4 *)(param_1 + 0x18);
    local_90 = *(undefined8 **)(param_1 + 0x20);
    if (local_90 != (undefined8 *)0x0) {
      (**(code **)*local_90)();
    }
    local_88 = *(undefined8 *)(param_1 + 0x28);
    uStack_80 = (undefined5)*(undefined8 *)(param_1 + 0x30);
    uStack_7b = (undefined3)*(undefined8 *)(param_1 + 0x35);
    uStack_78 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x35) >> 0x18);
    (**(code **)*puVar3)(puVar3,local_98);
    FUN_00c41978(local_98);
  }
  return;
}


// ===== 00c41618  FUN_00c41618 =====

void FUN_00c41618(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 local_58 [2];
  undefined8 *local_50;
  undefined8 local_48;
  undefined5 uStack_40;
  undefined3 uStack_3b;
  undefined5 uStack_38;
  long *local_18;
  
  local_18 = *(long **)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  if (local_18 != (long *)0x0) {
    (**(code **)*local_18)();
  }
  FUN_00c4195c(local_58,uVar1,&local_18,(double)*(int *)(param_2 + 8),1,
               *(ulong *)(param_1 + 0x38) & 0xffffffffff);
  *(undefined4 *)(param_1 + 0x18) = local_58[0];
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50);
  }
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 8))();
  }
  *(undefined8 **)(param_1 + 0x20) = local_50;
  *(ulong *)(param_1 + 0x30) = CONCAT35(uStack_3b,uStack_40);
  *(undefined8 *)(param_1 + 0x28) = local_48;
  *(ulong *)(param_1 + 0x35) = CONCAT53(uStack_38,uStack_3b);
  FUN_00c41978(local_58);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0x40) + 0x28))(*(long **)(param_1 + 0x40),param_2);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_004249b0();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/sctp_transport.cc",0x5d3,
                   "Failed to push down SCTP parameters, closing.");
    }
    FUN_00c41438(param_1,3);
  }
  return;
}


// ===== 00c41744  FUN_00c41744 =====

void FUN_00c41744(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  long *local_60;
  undefined4 local_58 [2];
  undefined8 *local_50;
  undefined8 local_48;
  undefined5 uStack_40;
  undefined3 uStack_3b;
  undefined5 uStack_38;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x40) + 0x60))();
  if (((uVar3 >> 0x20 & 1) != 0) &&
     (uVar3 = (**(code **)(**(long **)(param_1 + 0x40) + 0x68))(), (uVar3 >> 0x20 & 1) != 0)) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x40) + 0x60))();
    if (((uVar3 >> 0x20 & 1) == 0) ||
       (uVar4 = (**(code **)(**(long **)(param_1 + 0x40) + 0x68))(), (uVar4 >> 0x20 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1074: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    local_60 = *(long **)(param_1 + 0x20);
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar1 = (uint)uVar4;
    if ((int)(uint)uVar3 <= (int)(uint)uVar4) {
      uVar1 = (uint)uVar3;
    }
    if (local_60 != (long *)0x0) {
      (**(code **)*local_60)(local_60);
    }
    FUN_00c4195c(local_58,uVar2,&local_60,*(undefined8 *)(param_1 + 0x28),
                 *(undefined1 *)(param_1 + 0x30),(ulong)uVar1 | 0x100000000);
    *(undefined4 *)(param_1 + 0x18) = local_58[0];
    if (local_50 != (undefined8 *)0x0) {
      (**(code **)*local_50)(local_50);
    }
    if (*(long **)(param_1 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x20) + 8))();
    }
    *(undefined8 **)(param_1 + 0x20) = local_50;
    *(ulong *)(param_1 + 0x30) = CONCAT35(uStack_3b,uStack_40);
    *(undefined8 *)(param_1 + 0x28) = local_48;
    *(ulong *)(param_1 + 0x35) = CONCAT53(uStack_38,uStack_3b);
    FUN_00c41978(local_58);
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 8))();
    }
  }
  FUN_00c41438(param_1,2);
  return;
}


// ===== 00c41898  FUN_00c41898 =====

void FUN_00c41898(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 - 3U < 2) {
    FUN_00c41438(*param_1,3);
    return;
  }
  return;
}


// ===== 00c418b8  FUN_00c418b8 =====

void FUN_00c418b8(undefined8 *param_1)

{
  FUN_00c41744(*param_1);
  return;
}


// ===== 00c418c4  FUN_00c418c4 =====

void FUN_00c418c4(long *param_1)

{
  undefined4 *puVar1;
  undefined4 local_48 [2];
  undefined8 *local_40;
  undefined8 local_38;
  undefined5 uStack_30;
  undefined3 uStack_2b;
  undefined5 uStack_28;
  
  (**(code **)(**(long **)param_1[1] + 0x28))(local_48);
  puVar1 = (undefined4 *)*param_1;
  *puVar1 = local_48[0];
  if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)(local_40);
  }
  if (*(long **)(puVar1 + 2) != (long *)0x0) {
    (**(code **)(**(long **)(puVar1 + 2) + 8))();
  }
  *(undefined8 **)(puVar1 + 2) = local_40;
  *(ulong *)((long)puVar1 + 0x1d) = CONCAT53(uStack_28,uStack_2b);
  *(ulong *)(puVar1 + 6) = CONCAT35(uStack_2b,uStack_30);
  *(undefined8 *)(puVar1 + 4) = local_38;
  FUN_00c41978(local_48);
  return;
}


// ===== 00c4195c  FUN_00c4195c =====

void FUN_00c4195c(undefined4 *param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  uVar1 = *param_3;
  *param_3 = 0;
  *(undefined8 *)(param_1 + 6) = param_5;
  *(undefined8 *)(param_1 + 8) = param_6;
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 4) = param_4;
  return;
}


// ===== 00c41978  FUN_00c41978 =====

void FUN_00c41978(long param_1)

{
  if (*(long **)(param_1 + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c4198c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 8))();
    return;
  }
  return;
}


// ===== 00c41994  FUN_00c41994 =====

void FUN_00c41994(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


// ===== 00c419a4  FUN_00c419a4 =====

bool FUN_00c419a4(int *param_1)

{
  return *param_1 - 3U < 3;
}


// ===== 00c419bc  FUN_00c419bc =====

byte FUN_00c419bc(int *param_1,byte param_2,int param_3)

{
  byte bVar1;
  ulong uVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (iVar3 != 0) {
    if (iVar3 == 5) goto LAB_00c41a04;
    if (((param_3 != 0) || (iVar3 != 2)) && ((param_3 != 1 || (iVar3 != 1)))) {
      uVar2 = FUN_004249b0();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../pc/rtcp_mux_filter.cc",0x15b,
                     "Invalid state for change of RTCP mux offer");
      }
      return 0;
    }
  }
  bVar1 = param_2 & 1;
  param_2 = 1;
  *(byte *)(param_1 + 1) = bVar1;
  iVar3 = 1;
  if (param_3 == 0) {
    iVar3 = 2;
  }
  *param_1 = iVar3;
LAB_00c41a04:
  return param_2 & 1;
}


// ===== 00c41a50  FUN_00c41a50 =====

uint FUN_00c41a50(uint *param_1,uint param_2,int param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  char *pcVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 == 5) goto LAB_00c41b40;
  if ((((param_3 == 1) && (uVar4 == 2)) || (uVar4 == 4 && param_3 == 1)) ||
     (param_3 == 0 && (uVar4 & 0xfffffffd) == 1)) {
    if ((char)param_1[1] == '\x01') {
      if ((param_2 & 1) == 0) {
        if (param_3 != 1) {
          param_2 = 1;
          *param_1 = 1;
          goto LAB_00c41b40;
        }
        uVar4 = 2;
      }
      else if (param_3 != 1) {
        uVar4 = 3;
      }
      else {
        uVar4 = 4;
      }
      *param_1 = uVar4;
      param_2 = 1;
      goto LAB_00c41b40;
    }
    if ((param_2 & 1) == 0) {
      param_2 = 1;
      goto LAB_00c41b40;
    }
    uVar1 = FUN_004022fc();
    if ((uVar1 & 1) == 0) {
      pcVar3 = "Invalid parameters in RTCP mux provisional answer";
      uVar2 = 0x28a;
      goto LAB_00c41b08;
    }
  }
  else {
    uVar1 = FUN_004249b0();
    if ((uVar1 & 1) == 0) {
      pcVar3 = "Invalid state for RTCP mux provisional answer";
      uVar2 = 0x1e3;
LAB_00c41b08:
      FUN_00623bb0(&DAT_001f4e98,"../../pc/rtcp_mux_filter.cc",uVar2,pcVar3);
    }
  }
  param_2 = 0;
LAB_00c41b40:
  return param_2 & 1;
}


// ===== 00c41b50  FUN_00c41b50 =====

byte FUN_00c41b50(uint *param_1,byte param_2,int param_3)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == 5) goto LAB_00c41c44;
  if ((((param_3 == 1) && (uVar3 == 2)) || (uVar3 == 4 && param_3 == 1)) ||
     (param_3 == 0 && (uVar3 & 0xfffffffd) == 1)) {
    if (((param_2 & 1) == 0) || (((byte)param_1[1] & 1) != 0)) {
      bVar1 = param_2 & (byte)param_1[1];
      param_2 = 1;
      uVar3 = 5;
      if (bVar1 == 0) {
        uVar3 = 0;
      }
      *param_1 = uVar3;
      goto LAB_00c41c44;
    }
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/rtcp_mux_filter.cc",0x342,
                   "Invalid parameters in RTCP mux answer");
      param_2 = 0;
      goto LAB_00c41c44;
    }
  }
  else {
    uVar2 = FUN_004249b0();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f621a,"../../pc/rtcp_mux_filter.cc",0x2fb,
                   "Invalid state for RTCP mux answer, state is ",*param_1,", source is ",param_3);
    }
  }
  param_2 = 0;
LAB_00c41c44:
  return param_2 & 1;
}


// ===== 00c41c4c  FUN_00c41c4c =====

void FUN_00c41c4c(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *local_38;
  
  *param_1 = &PTR_FUN_00d4d358;
  param_1[1] = param_3;
  uVar1 = FUN_007e06bc();
  param_1[2] = uVar1;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_38);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 3),(pthread_mutexattr_t *)&local_38);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_38);
  FUN_00c42288(param_1 + 8,0);
  uVar1 = (**(code **)(*param_2 + 0xd0))(param_2);
  puVar2 = (undefined8 *)operator_new(0x20);
  uVar3 = FUN_007e06bc();
  puVar2[1] = uVar3;
  puVar2[2] = uVar1;
  *puVar2 = &PTR_FUN_00d4d3a8;
  *(undefined4 *)(puVar2 + 3) = 0;
  param_1[0xf] = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d0f740(1,puVar2 + 3);
  }
  FUN_00c41d20(param_1,param_2);
  return;
}


// ===== 00c41d20  FUN_00c41d20 =====

void FUN_00c41d20(long param_1,long *param_2)

{
  ulong uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  void *pvVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  void *local_70;
  undefined4 local_68;
  undefined1 local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  int local_54;
  
  if (param_2 == (long *)0x0) {
    uVar8 = 3;
  }
  else {
    iVar3 = (**(code **)(*param_2 + 0x50))(param_2);
    if (iVar3 == 2) {
      local_58 = 0xaaaaaaaa;
      local_54 = -0x55555556;
      local_60 = 0xaaaaaaaa;
      local_5c = 0xaaaaaaaa;
      uVar4 = (**(code **)(*param_2 + 0x68))(param_2,&local_54);
      uVar13 = 0xaaaaaa00aaaaaa00;
      if ((uVar4 & 1) != 0) {
        uVar11 = 0xaaaaaa0100000000;
        if (local_54 != 1) {
          uVar11 = 0xaaaaaa00aaaaaa00;
        }
        uVar13 = 0xaaaaaa0100000001;
        if (local_54 != 0) {
          uVar13 = uVar11;
        }
      }
      uVar5 = (**(code **)(*param_2 + 0x78))(param_2,&local_5c);
      uVar6 = (**(code **)(*param_2 + 0x90))(param_2,&local_58);
      uVar7 = (**(code **)(*param_2 + 0x88))(param_2,&local_60);
      if ((uVar4 & uVar7 & uVar5 & uVar6 & 1) == 0) {
        uVar10 = FUN_004249b0();
        if ((uVar10 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../pc/dtls_transport.cc",0x393,
                       "DtlsTransport in connected state has incomplete TLS information");
        }
        uVar8 = (**(code **)(*param_2 + 0x50))(param_2);
        uVar11 = (**(code **)(*param_2 + 0xb0))(param_2);
        FUN_00c422c0(&local_98,uVar8,uVar13,0,0,0,uVar11,0);
      }
      else {
        uVar8 = (**(code **)(*param_2 + 0x50))(param_2);
        uVar14 = (ulong)local_60;
        uVar10 = (ulong)local_5c;
        uVar1 = (ulong)local_58;
        uVar11 = (**(code **)(*param_2 + 0xb0))(param_2);
        uVar9 = (**(code **)(*param_2 + 0x80))(param_2);
        FUN_00c422c0(&local_98,uVar8,uVar13,uVar10 | 0x100000000,uVar1 | 0x100000000,
                     uVar14 | 0x100000000,uVar11,uVar9 & 0xffff | 0x100000000);
      }
      goto LAB_00c41e9c;
    }
    uVar8 = (**(code **)(*param_2 + 0x50))(param_2);
  }
  FUN_00c42288(&local_98,uVar8);
LAB_00c41e9c:
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x18));
  pvVar2 = local_70;
  pvVar12 = *(void **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x48) = uStack_90;
  *(undefined8 *)(param_1 + 0x40) = local_98;
  *(undefined8 *)(param_1 + 0x58) = uStack_80;
  *(undefined8 *)(param_1 + 0x50) = local_88;
  *(undefined1 *)(param_1 + 0x60) = local_78;
  local_70 = (void *)0x0;
  *(void **)(param_1 + 0x68) = pvVar2;
  if (pvVar12 != (void *)0x0) {
    FUN_00832ab8(pvVar12);
    operator_delete(pvVar12);
  }
  *(undefined4 *)(param_1 + 0x70) = local_68;
  *(undefined1 *)(param_1 + 0x74) = local_64;
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x18));
  pvVar2 = local_70;
  local_70 = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    FUN_00832ab8(pvVar2);
    operator_delete(pvVar2);
  }
  return;
}


// ===== 00c41fac  FUN_00c41fac =====

int FUN_00c41fac(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_00d4d358;
  if ((long *)param_1[0xf] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xf] + 8))();
  }
  pvVar2 = (void *)param_1[0xd];
  param_1[0xd] = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_00832ab8(pvVar2);
    operator_delete(pvVar2);
  }
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 3));
  return iVar1;
}


// ===== 00c42014  FUN_00c42014 =====

void FUN_00c42014(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc4201c);
  (*pcVar1)();
}


// ===== 00c4201c  FUN_00c4201c =====

void FUN_00c4201c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}


// ===== 00c42028  FUN_00c42028 =====

void FUN_00c42028(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


// ===== 00c42034  FUN_00c42034 =====

int FUN_00c42034(undefined8 param_1,long param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x18));
  FUN_00c422e0(param_1,param_2 + 0x40);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x18));
  return iVar1;
}


// ===== 00c42074  FUN_00c42074 =====

void FUN_00c42074(long *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x78);
  *param_1 = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c4208c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)();
    return;
  }
  return;
}


// ===== 00c42094  FUN_00c42094 =====

void FUN_00c42094(long *param_1,long *param_2)

{
  void *pvVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [40];
  void *local_30;
  
  iVar2 = (**(code **)(*param_2 + 0x50))(param_2);
  FUN_00c42370(param_1[0xf]);
  FUN_00c41d20(param_1,0);
  if ((iVar2 != 3) && (puVar3 = (undefined8 *)param_1[1], puVar3 != (undefined8 *)0x0)) {
    (**(code **)(*param_1 + 0x28))(auStack_58,param_1);
    (**(code **)*puVar3)(puVar3,auStack_58);
    pvVar1 = local_30;
    local_30 = (void *)0x0;
    if (pvVar1 != (void *)0x0) {
      FUN_00832ab8(pvVar1);
      operator_delete(pvVar1);
    }
  }
  return;
}


// ===== 00c42144  FUN_00c42144 =====

void FUN_00c42144(long *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  void *local_30;
  
  FUN_00c41d20();
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0x28))(auStack_58,param_1);
    (**(code **)*puVar2)(puVar2,auStack_58);
    pvVar1 = local_30;
    local_30 = (void *)0x0;
    if (pvVar1 != (void *)0x0) {
      FUN_00832ab8(pvVar1);
      operator_delete(pvVar1);
    }
  }
  return;
}


// ===== 00c421c4  FUN_00c421c4 =====

void FUN_00c421c4(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x18);
  return;
}


// ===== 00c421e8  FUN_00c421e8 =====

bool FUN_00c421e8(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 3);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00c42240  FUN_00c42240 =====

void FUN_00c42240(void *param_1)

{
  FUN_00c42348();
  operator_delete(param_1);
  return;
}


// ===== 00c42270  FUN_00c42270 =====

bool FUN_00c42270(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x18) == 1;
}


// ===== 00c42288  FUN_00c42288 =====

void FUN_00c42288(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return;
}


// ===== 00c422c0  FUN_00c422c0 =====

void FUN_00c422c0(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 1) = param_3;
  *(undefined8 *)(param_1 + 3) = param_4;
  *(undefined8 *)(param_1 + 5) = param_5;
  *(undefined8 *)(param_1 + 7) = param_6;
  *(undefined8 *)(param_1 + 10) = param_7;
  *(undefined8 *)(param_1 + 0xc) = param_8;
  return;
}


// ===== 00c422e0  FUN_00c422e0 =====

void FUN_00c422e0(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 3) = *(undefined8 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_2 + 5);
  *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_2 + 7);
  lVar1 = *(long *)(param_2 + 10);
  if (lVar1 != 0) {
    lVar1 = FUN_00832b68();
  }
  *(long *)(param_1 + 10) = lVar1;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  return;
}


// ===== 00c42348  FUN_00c42348 =====

void FUN_00c42348(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d4d3e8;
  return;
}


// ===== 00c4235c  FUN_00c4235c =====

void FUN_00c4235c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc42364);
  (*pcVar1)();
}


// ===== 00c42364  FUN_00c42364 =====

undefined8 FUN_00c42364(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 00c42370  FUN_00c42370 =====

void FUN_00c42370(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


// ===== 00c4237c  FUN_00c4237c =====

void FUN_00c4237c(undefined8 *param_1)

{
  FUN_00c43c8c();
  *(undefined1 *)(param_1 + 0x51) = 0;
  *param_1 = &PTR_FUN_00d4d420;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  param_1[0x5c] = FUN_00433984;
  param_1[0x5d] = 0;
  return;
}


// ===== 00c423d0  FUN_00c423d0 =====

void FUN_00c423d0(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  undefined8 extraout_x1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  lVar4 = param_1[0x1d];
  uVar1 = (**(code **)(*param_1 + 0x60))();
  FUN_00c42538(param_2,lVar4,param_3,uVar1 & 1);
  plVar6 = (long *)param_1[0x1c];
  if ((plVar6 != (long *)0x0) && (plVar6 != param_2)) {
    FUN_007b5df8(plVar6 + 0x22,param_1);
  }
  plVar5 = (long *)param_1[0x1d];
  if ((plVar5 != (long *)0x0) && (plVar5 != param_3)) {
    FUN_007b5df8(plVar5 + 0x22,param_1);
  }
  FUN_00c459bc(param_1,param_2);
  FUN_00c45878(param_1,param_3);
  if (plVar6 != param_2) {
    if (param_2 == (long *)0x0) {
      uVar3 = 0;
      uVar2 = extraout_x1;
    }
    else {
      FUN_007b5a0c(param_2 + 0x22,param_1,param_1,FUN_00c43c80);
      auVar7 = (**(code **)(*param_2 + 0x50))(param_2);
      uVar2 = auVar7._8_8_;
      uVar3 = auVar7._0_8_ & 0xffffffff;
    }
    FUN_00c435c0(param_1,uVar2,uVar3);
  }
  if (plVar5 == param_3) {
    return;
  }
  if (param_3 == (long *)0x0) {
    auVar7 = (**(code **)(*param_1 + 0x30))(param_1);
    uVar2 = auVar7._8_8_;
    if ((auVar7 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      return;
    }
    uVar3 = 0;
  }
  else {
    FUN_007b5a0c(param_3 + 0x22,param_1,param_1,FUN_00c43c80);
    auVar7 = (**(code **)(*param_3 + 0x50))(param_3);
    uVar2 = auVar7._8_8_;
    uVar3 = auVar7._0_8_ & 0xffffffff;
  }
  FUN_00c435c0(param_1,uVar2,uVar3);
  return;
}


// ===== 00c42538  FUN_00c42538 =====

void FUN_00c42538(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((param_3 == (undefined8 *)0x0) || (param_3 == param_2)) {
    if (param_3 == (undefined8 *)0x0) goto LAB_00c425d4;
  }
  else if ((param_4 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../pc/dtls_srtp_transport.cc",0x27,"!is_srtp_active",&DAT_001fbee0,
                 "Setting RTCP for DTLS/SRTP after the DTLS is active should never happen.");
  }
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    uVar2 = (**(code **)*param_3)(param_3);
    FUN_00623bb0(&DAT_00259228,"../../pc/dtls_srtp_transport.cc",0x181,"Setting RTCP Transport on ",
                 uVar2," transport ",param_3);
  }
LAB_00c425d4:
  if ((param_1 != (undefined8 *)0x0) && (uVar1 = FUN_00417e08(), (uVar1 & 1) == 0)) {
    uVar2 = (**(code **)*param_1)(param_1);
    FUN_00623bb0(&DAT_00259228,"../../pc/dtls_srtp_transport.cc",0x1a9,"Setting RTP Transport on ",
                 uVar2," transport ",param_1);
    return;
  }
  return;
}


// ===== 00c4263c  FUN_00c4263c =====

void FUN_00c4263c(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined8 extraout_x1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  lVar5 = param_1[0x1d];
  uVar1 = (**(code **)(*param_1 + 0x60))();
  FUN_00c42538(param_2,lVar5,param_3,uVar1 & 1);
  lVar5 = param_1[0x1c];
  if ((lVar5 != 0) && (lVar5 != param_2)) {
    FUN_007b5df8(lVar5 + 0x110,param_1);
  }
  lVar6 = param_1[0x1d];
  if ((lVar6 != 0) && (lVar6 != param_3)) {
    FUN_007b5df8(lVar6 + 0x110,param_1);
  }
  FUN_00c45904(param_1,param_2);
  FUN_00c457c0(param_1,param_3);
  if (lVar5 != param_2) {
    plVar4 = (long *)param_1[0x1c];
    if (plVar4 == (long *)0x0) {
      uVar3 = 0;
      uVar2 = extraout_x1;
    }
    else {
      FUN_007b5a0c(plVar4 + 0x22,param_1,param_1,FUN_00c43c80);
      auVar7 = (**(code **)(*plVar4 + 0x50))(plVar4);
      uVar2 = auVar7._8_8_;
      uVar3 = auVar7._0_8_ & 0xffffffff;
    }
    FUN_00c435c0(param_1,uVar2,uVar3);
  }
  if (lVar6 == param_3) {
    return;
  }
  plVar4 = (long *)param_1[0x1d];
  if (plVar4 == (long *)0x0) {
    auVar7 = (**(code **)(*param_1 + 0x30))(param_1);
    uVar2 = auVar7._8_8_;
    if ((auVar7 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      return;
    }
    uVar3 = 0;
  }
  else {
    FUN_007b5a0c(plVar4 + 0x22,param_1,param_1,FUN_00c43c80);
    auVar7 = (**(code **)(*plVar4 + 0x50))(plVar4);
    uVar2 = auVar7._8_8_;
    uVar3 = auVar7._0_8_ & 0xffffffff;
  }
  FUN_00c435c0(param_1,uVar2,uVar3);
  return;
}


// ===== 00c427ac  FUN_00c427ac =====

void FUN_00c427ac(long *param_1,uint param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  
  FUN_00c45410();
  if (((param_2 & 1) != 0) && (uVar1 = (**(code **)(*param_1 + 0x60))(param_1), (uVar1 & 1) == 0)) {
    uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
    if ((uVar1 & 1) == 0) {
      plVar3 = (long *)param_1[0x1d];
      plVar2 = (long *)param_1[0x1c];
    }
    else {
      plVar3 = (long *)0x0;
      plVar2 = (long *)param_1[0x1c];
    }
    if (((plVar2 != (long *)0x0) && (uVar1 = (**(code **)(*plVar2 + 8))(), (uVar1 & 1) != 0)) &&
       ((plVar3 == (long *)0x0 || (uVar1 = (**(code **)(*plVar3 + 8))(plVar3), (uVar1 & 1) != 0))))
    {
      FUN_00c42ae4(param_1);
      uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
      if (((uVar1 & 1) == 0) && (param_1[0x1d] != 0)) {
        FUN_00c42e7c(param_1);
        return;
      }
    }
  }
  return;
}


// ===== 00c42880  FUN_00c42880 =====

void FUN_00c42880(long *param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  size_t __n;
  long *plVar4;
  
  if ((char)param_1[0x54] == '\x01') {
    __n = param_1[0x52] - param_1[0x51];
    if ((__n == param_2[1] - (long)*param_2) &&
       (iVar1 = memcmp((void *)param_1[0x51],(void *)*param_2,__n), iVar1 == 0)) {
      return;
    }
  }
  FUN_00c429b0(param_1 + 0x51,param_2);
  uVar2 = (**(code **)(*param_1 + 0x30))(param_1);
  if ((uVar2 & 1) == 0) {
    plVar4 = (long *)param_1[0x1d];
    plVar3 = (long *)param_1[0x1c];
  }
  else {
    plVar4 = (long *)0x0;
    plVar3 = (long *)param_1[0x1c];
  }
  if (((plVar3 != (long *)0x0) && (uVar2 = (**(code **)(*plVar3 + 0x60))(), (uVar2 & 1) != 0)) &&
     ((plVar4 == (long *)0x0 || (uVar2 = (**(code **)(*plVar4 + 0x60))(plVar4), (uVar2 & 1) != 0))))
  {
    uVar2 = (**(code **)(*param_1 + 0x30))(param_1);
    if ((uVar2 & 1) == 0) {
      plVar4 = (long *)param_1[0x1d];
      plVar3 = (long *)param_1[0x1c];
    }
    else {
      plVar4 = (long *)0x0;
      plVar3 = (long *)param_1[0x1c];
    }
    if (((plVar3 != (long *)0x0) && (iVar1 = (**(code **)(*plVar3 + 0x50))(), iVar1 == 2)) &&
       ((plVar4 == (long *)0x0 || (iVar1 = (**(code **)(*plVar4 + 0x50))(plVar4), iVar1 == 2)))) {
      FUN_00c42ae4(param_1);
      return;
    }
  }
  return;
}


// ===== 00c429b0  FUN_00c429b0 =====

undefined8 * FUN_00c429b0(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (*(char *)(param_1 + 3) == '\x01') {
    pvVar1 = (void *)*param_1;
    if (pvVar1 != (void *)0x0) {
      pvVar2 = (void *)param_1[1];
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
      param_1[1] = pvVar1;
      operator_delete(pvVar1);
    }
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pvVar1 = (void *)*param_2;
  uVar3 = param_2[1] - (long)pvVar1;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d348c();
    }
    pvVar2 = operator_new(uVar3);
    *param_1 = pvVar2;
    param_1[1] = pvVar2;
    param_1[2] = (long)pvVar2 + uVar3;
    memcpy(pvVar2,pvVar1,uVar3);
    param_1[1] = (long)pvVar2 + uVar3;
  }
  *(undefined1 *)(param_1 + 3) = 1;
  return param_1;
}


// ===== 00c42ae4  FUN_00c42ae4 =====

void FUN_00c42ae4(long param_1)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 local_80;
  long local_78;
  void *local_70;
  undefined8 local_68;
  long local_60;
  void *local_58;
  void *local_50;
  void *local_48;
  undefined8 local_40;
  void *local_38;
  void *local_30;
  undefined8 local_28;
  undefined4 local_4;
  
  local_38 = (void *)0x0;
  local_30 = (void *)0x0;
  local_28 = 0;
  local_50 = (void *)0x0;
  local_48 = (void *)0x0;
  local_40 = 0;
  lVar1 = param_1;
  if ((&local_38 != (void **)(param_1 + 0x288)) && ((*(byte *)(param_1 + 0x2a0) & 1) != 0)) {
    lVar1 = FUN_00c3965c(&local_38,*(long *)(param_1 + 0x288),*(long *)(param_1 + 0x290),
                         *(long *)(param_1 + 0x290) - *(long *)(param_1 + 0x288) >> 2);
  }
  if ((&local_50 != (void **)(param_1 + 0x2a8)) && ((*(byte *)(param_1 + 0x2c0) & 1) != 0)) {
    lVar1 = FUN_00c3965c(&local_50,*(long *)(param_1 + 0x2a8),*(long *)(param_1 + 0x2b0),
                         *(long *)(param_1 + 0x2b0) - *(long *)(param_1 + 0x2a8) >> 2);
  }
  local_4 = 0xaaaaaaaa;
  local_68 = 0;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_80 = 0;
  local_78 = 0;
  local_70 = (void *)0x0;
  uVar2 = FUN_00c430f8(lVar1,*(undefined8 *)(param_1 + 0xe0),&local_4,&local_68,&local_80);
  if ((((uVar2 & 1) == 0) ||
      (uVar2 = FUN_00c44b48(param_1,local_4,&local_68,&local_38,local_4,&local_80,&local_50),
      (uVar2 & 1) == 0)) && (uVar2 = FUN_004022fc(), (uVar2 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f4e98,"../../pc/dtls_srtp_transport.cc",0x632,
                 "DTLS-SRTP key installation for RTP failed");
  }
  if (local_78 != 0) {
    FUN_00841100(local_70);
  }
  pvVar3 = local_70;
  local_70 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  if (local_60 != 0) {
    FUN_00841100(local_58);
  }
  pvVar3 = local_58;
  local_58 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  if (local_50 == (void *)0x0) {
LAB_00c42ca8:
    if (local_38 == (void *)0x0) {
      return;
    }
    uVar4 = (ulong)((long)local_30 + (-4 - ((long)local_30 << 0x3e))) >> 2;
    uVar2 = (ulong)(((long)local_38 - (long)local_30 << 0x3e) - ((long)local_38 - (long)local_30))
            >> 2;
    if (uVar4 <= uVar2) {
      uVar2 = uVar4;
    }
    pvVar3 = local_30;
    if ((1 < uVar2) && ((((int)local_38 - (int)local_30 | -(int)local_30) & 3U) == 0)) {
      uVar2 = uVar2 & 0x3ffffffffffffffe;
      pvVar3 = (void *)((long)local_30 + uVar2 * -4);
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    do {
      if (pvVar3 == local_38) {
        local_30 = local_38;
        operator_delete(local_38);
        return;
      }
      pvVar3 = (void *)((long)pvVar3 + -4);
    } while (pvVar3 != (void *)0x0);
  }
  else {
    uVar4 = (ulong)((long)local_48 + (-4 - ((long)local_48 << 0x3e))) >> 2;
    uVar2 = (ulong)(((long)local_50 - (long)local_48 << 0x3e) - ((long)local_50 - (long)local_48))
            >> 2;
    if (uVar4 <= uVar2) {
      uVar2 = uVar4;
    }
    pvVar3 = local_48;
    if ((1 < uVar2) && ((((int)local_50 - (int)local_48 | -(int)local_48) & 3U) == 0)) {
      uVar2 = uVar2 & 0x3ffffffffffffffe;
      pvVar3 = (void *)((long)local_48 + uVar2 * -4);
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    do {
      if (pvVar3 == local_50) {
        local_48 = local_50;
        operator_delete(local_50);
        goto LAB_00c42ca8;
      }
      pvVar3 = (void *)((long)pvVar3 + -4);
    } while (pvVar3 != (void *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c42d4c  FUN_00c42d4c =====

void FUN_00c42d4c(long *param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  size_t __n;
  long *plVar4;
  
  if ((char)param_1[0x58] == '\x01') {
    __n = param_1[0x56] - param_1[0x55];
    if ((__n == param_2[1] - (long)*param_2) &&
       (iVar1 = memcmp((void *)param_1[0x55],(void *)*param_2,__n), iVar1 == 0)) {
      return;
    }
  }
  FUN_00c429b0(param_1 + 0x55,param_2);
  uVar2 = (**(code **)(*param_1 + 0x30))(param_1);
  if ((uVar2 & 1) == 0) {
    plVar4 = (long *)param_1[0x1d];
    plVar3 = (long *)param_1[0x1c];
  }
  else {
    plVar4 = (long *)0x0;
    plVar3 = (long *)param_1[0x1c];
  }
  if (((plVar3 != (long *)0x0) && (uVar2 = (**(code **)(*plVar3 + 0x60))(), (uVar2 & 1) != 0)) &&
     ((plVar4 == (long *)0x0 || (uVar2 = (**(code **)(*plVar4 + 0x60))(plVar4), (uVar2 & 1) != 0))))
  {
    uVar2 = (**(code **)(*param_1 + 0x30))(param_1);
    if ((uVar2 & 1) == 0) {
      plVar4 = (long *)param_1[0x1d];
      plVar3 = (long *)param_1[0x1c];
    }
    else {
      plVar4 = (long *)0x0;
      plVar3 = (long *)param_1[0x1c];
    }
    if (((plVar3 != (long *)0x0) && (iVar1 = (**(code **)(*plVar3 + 0x50))(), iVar1 == 2)) &&
       ((plVar4 == (long *)0x0 || (iVar1 = (**(code **)(*plVar4 + 0x50))(plVar4), iVar1 == 2)))) {
      FUN_00c42ae4(param_1);
      return;
    }
  }
  return;
}


// ===== 00c42e7c  FUN_00c42e7c =====

void FUN_00c42e7c(long *param_1)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 local_80;
  long local_78;
  void *local_70;
  undefined8 local_68;
  long local_60;
  void *local_58;
  void *local_50;
  void *local_48;
  undefined8 local_40;
  void *local_38;
  void *local_30;
  undefined8 local_28;
  undefined4 local_4;
  
  uVar1 = (**(code **)(*param_1 + 0x60))();
  if ((uVar1 & 1) != 0) {
    return;
  }
  local_38 = (void *)0x0;
  local_30 = (void *)0x0;
  local_28 = 0;
  local_50 = (void *)0x0;
  local_48 = (void *)0x0;
  local_40 = 0;
  if ((&local_38 != (void **)(param_1 + 0x51)) && ((*(byte *)(param_1 + 0x54) & 1) != 0)) {
    uVar1 = FUN_00c3965c(&local_38,param_1[0x51],param_1[0x52],param_1[0x52] - param_1[0x51] >> 2);
  }
  if ((&local_50 != (void **)(param_1 + 0x55)) && ((*(byte *)(param_1 + 0x58) & 1) != 0)) {
    uVar1 = FUN_00c3965c(&local_50,param_1[0x55],param_1[0x56],param_1[0x56] - param_1[0x55] >> 2);
  }
  local_4 = 0xaaaaaaaa;
  local_68 = 0;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_80 = 0;
  local_78 = 0;
  local_70 = (void *)0x0;
  uVar1 = FUN_00c430f8(uVar1,param_1[0x1d],&local_4,&local_68,&local_80);
  if ((((uVar1 & 1) == 0) ||
      (uVar1 = FUN_00c44ee0(param_1,local_4,&local_68,&local_38,local_4,&local_80,&local_50),
      (uVar1 & 1) == 0)) && (uVar1 = FUN_004022fc(), (uVar1 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f4e98,"../../pc/dtls_srtp_transport.cc",0x71a,
                 "DTLS-SRTP key installation for RTCP failed");
  }
  if (local_78 != 0) {
    FUN_00841100(local_70);
  }
  pvVar2 = local_70;
  local_70 = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  if (local_60 != 0) {
    FUN_00841100(local_58);
  }
  pvVar2 = local_58;
  local_58 = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  if (local_50 == (void *)0x0) {
LAB_00c43064:
    if (local_38 == (void *)0x0) {
      return;
    }
    uVar3 = (ulong)((long)local_30 + (-4 - ((long)local_30 << 0x3e))) >> 2;
    uVar1 = (ulong)(((long)local_38 - (long)local_30 << 0x3e) - ((long)local_38 - (long)local_30))
            >> 2;
    if (uVar3 <= uVar1) {
      uVar1 = uVar3;
    }
    pvVar2 = local_30;
    if ((1 < uVar1) && ((((int)local_38 - (int)local_30 | -(int)local_30) & 3U) == 0)) {
      uVar1 = uVar1 & 0x3ffffffffffffffe;
      pvVar2 = (void *)((long)local_30 + uVar1 * -4);
      do {
        uVar1 = uVar1 - 2;
      } while (uVar1 != 0);
    }
    do {
      if (pvVar2 == local_38) {
        local_30 = local_38;
        operator_delete(local_38);
        return;
      }
      pvVar2 = (void *)((long)pvVar2 + -4);
    } while (pvVar2 != (void *)0x0);
  }
  else {
    uVar3 = (ulong)((long)local_48 + (-4 - ((long)local_48 << 0x3e))) >> 2;
    uVar1 = (ulong)(((long)local_50 - (long)local_48 << 0x3e) - ((long)local_50 - (long)local_48))
            >> 2;
    if (uVar3 <= uVar1) {
      uVar1 = uVar3;
    }
    pvVar2 = local_48;
    if ((1 < uVar1) && ((((int)local_50 - (int)local_48 | -(int)local_48) & 3U) == 0)) {
      uVar1 = uVar1 & 0x3ffffffffffffffe;
      pvVar2 = (void *)((long)local_48 + uVar1 * -4);
      do {
        uVar1 = uVar1 - 2;
      } while (uVar1 != 0);
    }
    do {
      if (pvVar2 == local_50) {
        local_48 = local_50;
        operator_delete(local_50);
        goto LAB_00c43064;
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


// ===== 00c430f8  FUN_00c430f8 =====

uint FUN_00c430f8(undefined8 param_1,long *param_2,undefined4 *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  undefined8 uVar8;
  void *pvVar9;
  void *pvVar10;
  size_t *psVar11;
  uint uVar12;
  long lVar13;
  size_t sVar14;
  int iVar15;
  int local_b4;
  ulong local_b0;
  ulong local_a8;
  void *local_a0;
  size_t local_98;
  ulong local_90;
  void *local_88;
  undefined8 local_80;
  long local_78;
  void *local_70;
  int local_68;
  uint local_64;
  
  if (param_2 == (long *)0x0) goto LAB_00c43278;
  uVar7 = (**(code **)(*param_2 + 0x60))(param_2);
  if ((uVar7 & 1) != 0) {
    uVar7 = (**(code **)(*param_2 + 0x88))(param_2,param_3);
    if ((uVar7 & 1) == 0) {
      uVar7 = FUN_004249b0();
      if ((uVar7 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../pc/dtls_srtp_transport.cc",0x783,
                     "No DTLS-SRTP selected crypto suite");
      }
    }
    else {
      local_68 = -0x55555556;
      local_64 = 0xaaaaaaaa;
      uVar7 = FUN_0083e274(*param_3,&local_64,&local_68);
      if ((uVar7 & 1) != 0) {
        uVar7 = FUN_00417e08();
        if ((uVar7 & 1) == 0) {
          uVar8 = (**(code **)*param_2)(param_2);
          FUN_00623bb0(&DAT_001f4e90,"../../pc/dtls_srtp_transport.cc",0x7e9,
                       "Extracting keys from transport: ",uVar8);
        }
        local_80 = 0;
        local_78 = 0;
        local_70 = (void *)0x0;
        uVar7 = (**(code **)(*param_2 + 0xb8))(param_2,&local_80);
        uVar12 = local_64;
        iVar15 = local_68;
        pvVar10 = local_70;
        if ((uVar7 & 1) == 0) {
          uVar7 = FUN_004249b0();
          if ((uVar7 & 1) == 0) {
            FUN_00623bb0(&DAT_001f4e98,"../../pc/dtls_srtp_transport.cc",0x81b,
                         "DTLS-SRTP key export failed");
            param_2 = (long *)0x0;
          }
          else {
            param_2 = (long *)0x0;
          }
        }
        else {
          sVar14 = (size_t)(int)local_64;
          uVar4 = local_64;
          if (local_64 <= local_68 + local_64) {
            uVar4 = local_68 + local_64;
          }
          local_90 = (ulong)(int)uVar4;
          local_98 = sVar14;
          if (uVar4 == 0) {
            local_88 = (void *)0x0;
            if (local_64 != 0) goto LAB_00c43204;
LAB_00c432e4:
            uVar12 = 0;
          }
          else {
            local_88 = operator_new__(local_90);
            if (uVar12 == 0) goto LAB_00c432e4;
LAB_00c43204:
            memcpy(local_88,pvVar10,sVar14);
            pvVar10 = local_70;
            iVar15 = local_68;
            uVar12 = local_64;
          }
          sVar14 = (size_t)(int)uVar12;
          uVar4 = uVar12;
          if (uVar12 <= iVar15 + uVar12) {
            uVar4 = iVar15 + uVar12;
          }
          local_a8 = (ulong)(int)uVar4;
          local_b0 = sVar14;
          if (uVar4 == 0) {
            local_a0 = (void *)0x0;
            if (uVar12 != 0) goto LAB_00c43310;
LAB_00c4333c:
            lVar13 = 0;
          }
          else {
            local_a0 = operator_new__(local_a8);
            if (uVar12 == 0) goto LAB_00c4333c;
LAB_00c43310:
            memcpy(local_a0,(void *)((long)pvVar10 + sVar14),sVar14);
            lVar13 = (long)(int)(local_64 << 1);
            pvVar10 = local_70;
            iVar15 = local_68;
          }
          uVar7 = local_90;
          sVar14 = local_98;
          if (iVar15 != 0) {
            uVar1 = local_98 + (long)iVar15;
            pvVar9 = local_88;
            uVar5 = local_90;
            if (local_90 < uVar1) {
              uVar2 = local_90 + (local_90 >> 1);
              uVar5 = uVar1;
              if (uVar1 <= uVar2) {
                uVar5 = uVar2;
              }
              pvVar9 = operator_new__(uVar5);
              pvVar6 = local_88;
              if (local_88 != (void *)0x0) {
                memcpy(pvVar9,local_88,sVar14);
              }
              if (uVar7 != 0) {
                FUN_00841100(pvVar6,uVar7);
              }
              local_88 = pvVar9;
              if (pvVar6 != (void *)0x0) {
                operator_delete__(pvVar6);
              }
            }
            local_90 = uVar5;
            memcpy((void *)((long)pvVar9 + sVar14),(void *)((long)pvVar10 + lVar13),(long)iVar15);
            uVar5 = local_a8;
            uVar7 = local_b0;
            sVar14 = (size_t)local_68;
            local_98 = uVar1;
            if (local_68 != 0) {
              uVar1 = local_b0 + sVar14;
              pvVar10 = (void *)((long)local_70 + (long)(int)(local_68 + local_64 * 2));
              pvVar9 = local_a0;
              uVar2 = local_a8;
              if (local_a8 < uVar1) {
                uVar3 = local_a8 + (local_a8 >> 1);
                uVar2 = uVar1;
                if (uVar1 <= uVar3) {
                  uVar2 = uVar3;
                }
                pvVar9 = operator_new__(uVar2);
                pvVar6 = local_a0;
                if (local_a0 != (void *)0x0) {
                  memcpy(pvVar9,local_a0,uVar7);
                }
                if (uVar5 != 0) {
                  FUN_00841100(pvVar6,uVar5);
                }
                local_a0 = pvVar9;
                if (pvVar6 != (void *)0x0) {
                  operator_delete__(pvVar6);
                }
              }
              local_a8 = uVar2;
              memcpy((void *)((long)pvVar9 + uVar7),pvVar10,sVar14);
              local_b0 = uVar1;
            }
          }
          local_b4 = -0x55555556;
          uVar7 = (**(code **)(*param_2 + 0x68))(param_2,&local_b4);
          param_2 = (long *)(uVar7 & 0xffffffff);
          if ((uVar7 & 1) == 0) {
            uVar7 = FUN_004022fc();
            if ((uVar7 & 1) == 0) {
              FUN_00623bb0(&DAT_001f4e98,"../../pc/dtls_srtp_transport.cc",0x8ca,
                           "Failed to get the DTLS role.");
            }
          }
          else {
            if (local_b4 == 1) {
              FUN_00c43554(param_4,&local_b0);
              psVar11 = &local_98;
            }
            else {
              FUN_00c43554(param_4,&local_98);
              psVar11 = &local_b0;
            }
            FUN_00c43554(param_5,psVar11);
          }
          pvVar10 = local_a0;
          if (local_a8 != 0) {
            FUN_00841100();
            pvVar10 = local_a0;
          }
          local_a0 = (void *)0x0;
          if (pvVar10 != (void *)0x0) {
            operator_delete__(pvVar10);
          }
          pvVar10 = local_88;
          if (local_90 != 0) {
            FUN_00841100();
            pvVar10 = local_88;
          }
          local_88 = (void *)0x0;
          if (pvVar10 != (void *)0x0) {
            operator_delete__(pvVar10);
          }
        }
        if (local_78 != 0) {
          FUN_00841100(local_70);
        }
        pvVar10 = local_70;
        local_70 = (void *)0x0;
        if (pvVar10 != (void *)0x0) {
          operator_delete__(pvVar10);
        }
        goto LAB_00c43278;
      }
      uVar7 = FUN_004249b0();
      if ((uVar7 & 1) == 0) {
        FUN_00623bb0(&DAT_0025922e,"../../pc/dtls_srtp_transport.cc",0x7c3,
                     "Unknown DTLS-SRTP crypto suite",param_3);
      }
    }
  }
  param_2 = (long *)0x0;
LAB_00c43278:
  return (uint)param_2 & 1;
}


// ===== 00c43554  FUN_00c43554 =====

undefined8 * FUN_00c43554(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  
  if (param_1[1] != 0) {
    FUN_00841100(param_1[2],param_1[1]);
  }
  pvVar1 = (void *)param_1[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_2[2] = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_1;
}


// ===== 00c435c0  FUN_00c435c0 =====

void FUN_00c435c0(long *param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  
  if ((code *)param_1[0x5d] != (code *)0x0) {
    (*(code *)param_1[0x5d])(param_1 + 0x5a);
  }
  if (param_3 != 2) {
    FUN_00c44da4(param_1);
  }
  uVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  if ((uVar1 & 1) == 0) {
    uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
    if ((uVar1 & 1) == 0) {
      plVar3 = (long *)param_1[0x1d];
      plVar2 = (long *)param_1[0x1c];
    }
    else {
      plVar3 = (long *)0x0;
      plVar2 = (long *)param_1[0x1c];
    }
    if (((plVar2 != (long *)0x0) && (uVar1 = (**(code **)(*plVar2 + 8))(), (uVar1 & 1) != 0)) &&
       ((plVar3 == (long *)0x0 || (uVar1 = (**(code **)(*plVar3 + 8))(plVar3), (uVar1 & 1) != 0))))
    {
      FUN_00c42ae4(param_1);
      uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
      if (((uVar1 & 1) == 0) && (param_1[0x1d] != 0)) {
        FUN_00c42e7c(param_1);
        return;
      }
    }
  }
  return;
}


// ===== 00c436ac  FUN_00c436ac =====

void FUN_00c436ac(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x60))();
  if ((uVar1 & 1) == 0) {
    uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
    if ((uVar1 & 1) == 0) {
      plVar3 = (long *)param_1[0x1d];
      plVar2 = (long *)param_1[0x1c];
    }
    else {
      plVar3 = (long *)0x0;
      plVar2 = (long *)param_1[0x1c];
    }
    if (((plVar2 != (long *)0x0) && (uVar1 = (**(code **)(*plVar2 + 8))(), (uVar1 & 1) != 0)) &&
       ((plVar3 == (long *)0x0 || (uVar1 = (**(code **)(*plVar3 + 8))(plVar3), (uVar1 & 1) != 0))))
    {
      FUN_00c42ae4(param_1);
      uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
      if (((uVar1 & 1) == 0) && (param_1[0x1d] != 0)) {
        FUN_00c42e7c(param_1);
        return;
      }
    }
  }
  return;
}


// ===== 00c43770  FUN_00c43770 =====

void FUN_00c43770(long param_1,long param_2)

{
  (**(code **)(param_1 + 0x2e0))(0,param_1 + 0x2d0,param_1 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(code **)(param_1 + 0x2e0) = FUN_00433984;
  (**(code **)(param_2 + 0x10))(1,param_2,param_1 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_2 + 0x18);
  *(code **)(param_2 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}


// ===== 00c437ec  FUN_00c437ec =====

void FUN_00c437ec(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  *param_1 = &PTR_FUN_00d4d420;
  (*(code *)param_1[0x5c])(0,param_1 + 0x5a,param_1 + 0x5a);
  if ((*(char *)(param_1 + 0x58) == '\x01') &&
     (pvVar1 = (void *)param_1[0x55], pvVar1 != (void *)0x0)) {
    pvVar2 = (void *)param_1[0x56];
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
        param_1[0x56] = pvVar1;
        operator_delete(pvVar1);
        goto LAB_00c438ac;
      }
      pvVar2 = (void *)((long)pvVar2 + -4);
    } while (pvVar2 != (void *)0x0);
  }
  else {
LAB_00c438ac:
    if ((*(char *)(param_1 + 0x54) != '\x01') ||
       (pvVar1 = (void *)param_1[0x51], pvVar1 == (void *)0x0)) {
LAB_00c43948:
      FUN_00c43af8(param_1);
      return;
    }
    pvVar2 = (void *)param_1[0x52];
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
        param_1[0x52] = pvVar1;
        operator_delete(pvVar1);
        goto LAB_00c43948;
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


// ===== 00c4395c  FUN_00c4395c =====

void FUN_00c4395c(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  *param_1 = &PTR_FUN_00d4d420;
  (*(code *)param_1[0x5c])(0,param_1 + 0x5a,param_1 + 0x5a);
  if ((*(char *)(param_1 + 0x58) == '\x01') &&
     (pvVar1 = (void *)param_1[0x55], pvVar1 != (void *)0x0)) {
    pvVar2 = (void *)param_1[0x56];
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
        param_1[0x56] = pvVar1;
        operator_delete(pvVar1);
        goto LAB_00c43a1c;
      }
      pvVar2 = (void *)((long)pvVar2 + -4);
    } while (pvVar2 != (void *)0x0);
  }
  else {
LAB_00c43a1c:
    if ((*(char *)(param_1 + 0x54) != '\x01') ||
       (pvVar1 = (void *)param_1[0x51], pvVar1 == (void *)0x0)) {
LAB_00c43ab8:
      FUN_00c43af8(param_1);
      operator_delete(param_1);
      return;
    }
    pvVar2 = (void *)param_1[0x52];
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
        param_1[0x52] = pvVar1;
        operator_delete(pvVar1);
        goto LAB_00c43ab8;
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


// ===== 00c43ad8  FUN_00c43ad8 =====

undefined1 FUN_00c43ad8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd8);
}


// ===== 00c43ae4  FUN_00c43ae4 =====

undefined1 FUN_00c43ae4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x100);
}


// ===== 00c43af0  FUN_00c43af0 =====

void FUN_00c43af0(void)

{
  return;
}


// ===== 00c43af8  FUN_00c43af8 =====

void FUN_00c43af8(long *param_1)

{
  int iVar1;
  void *pvVar2;
  long *plVar3;
  
  *param_1 = (long)(PTR_DAT_00d52ee0 + 0x10);
  if (param_1[0x4c] != 0) {
    FUN_00841100(param_1[0x4d]);
  }
  pvVar2 = (void *)param_1[0x4d];
  param_1[0x4d] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  if (param_1[0x49] != 0) {
    FUN_00841100(param_1[0x4a]);
  }
  pvVar2 = (void *)param_1[0x4a];
  param_1[0x4a] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  pvVar2 = (void *)param_1[0x45];
  param_1[0x45] = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_00c4671c(pvVar2);
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x44];
  param_1[0x44] = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_00c4671c(pvVar2);
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x43];
  param_1[0x43] = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_00c4671c(pvVar2);
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x42];
  param_1[0x42] = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_00c4671c(pvVar2);
    operator_delete(pvVar2);
  }
  if (*(char *)((long)param_1 + 0x20f) < '\0') {
    operator_delete((void *)param_1[0x3f]);
  }
  *param_1 = (long)&PTR_FUN_00d4d580;
  FUN_007ebdcc(param_1[0x3e]);
  pvVar2 = (void *)param_1[0x3e];
  if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2), iVar1 == 1)) {
    operator_delete(pvVar2);
  }
  FUN_00899588(param_1 + 0x21);
  plVar3 = (long *)param_1[0x1f];
  param_1[0x1f] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x48))();
  }
  plVar3 = (long *)param_1[0x1e];
  param_1[0x1e] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x48))();
  }
  FUN_00c39fec(param_1);
  return;
}


// ===== 00c43c80  FUN_00c43c80 =====

void FUN_00c43c80(undefined8 *param_1)

{
  FUN_00c435c0(*param_1);
  return;
}


// ===== 00c43c8c  FUN_00c43c8c =====

void FUN_00c43c8c(long *param_1,undefined1 param_2,long param_3)

{
  undefined *puVar1;
  
  *param_1 = (long)&PTR_FUN_00d4d050;
  FUN_007b5d10(param_1 + 1);
  FUN_007b5d10(param_1 + 5);
  param_1[0xc] = (long)FUN_004473ec;
  param_1[0xd] = (long)FUN_00c3a08c;
  FUN_007b5d10(param_1 + 0xe);
  FUN_007b5d10(param_1 + 0x12);
  FUN_007b5d10(param_1 + 0x16);
  FUN_007ebca0(param_1 + 0x1a);
  puVar1 = PTR_DAT_00d52ee8;
  *(undefined1 *)(param_1 + 0x1b) = param_2;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  FUN_0089954c(param_1 + 0x21,1);
  FUN_007d87d8(param_1 + 0x3b);
  *(undefined1 *)((long)param_1 + 0x1ef) = 0;
  FUN_007ebca0(param_1 + 0x3e);
  *param_1 = (long)&PTR_FUN_00d4d4d0;
  *(undefined1 *)((long)param_1 + 0x234) = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  *(undefined8 *)((long)param_1 + 0x229) = 0;
  *(undefined8 *)((long)param_1 + 0x221) = 0;
  *(undefined1 *)((long)param_1 + 0x23c) = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  *(undefined2 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)((long)param_1 + 0x274) = 0xffffffff;
  param_1[0x50] = param_3;
  return;
}


// ===== 00c43d94  FUN_00c43d94 =====

uint FUN_00c43d94(long *param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint in_stack_ffffffffffffff00;
  undefined1 uStack_f1;
  char *local_f0;
  undefined8 uStack_e8;
  undefined1 *local_e0;
  char *pcStack_d8;
  char **local_d0;
  char **local_c8;
  char *local_c0;
  char *pcStack_b8;
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
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  
  uVar5 = (**(code **)(*param_1 + 0x60))();
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_004249b0();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/srtp_transport.cc",0x183,
                   "Failed to send the packet because SRTP transport is inactive.");
    }
    uVar3 = 0;
    goto LAB_00c43ff4;
  }
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00897be8(&local_b0,param_3);
  if (((DAT_00dbb0a0 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00dbb0a0), iVar4 != 0)) {
    DAT_00dbb098 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbb0a0);
  }
  local_c8 = (char **)0x0;
  pcStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbb098 != '\0') {
    in_stack_ffffffffffffff00 = in_stack_ffffffffffffff00 & 0xffffff00;
    FUN_0066d348(0x42,DAT_00dbb098,"SRTP Encode",0,0,0,0,0,in_stack_ffffffffffffff00);
    local_c0 = DAT_00dbb098;
    pcStack_b8 = "SRTP Encode";
    local_c8 = &local_c0;
  }
  uVar5 = (**(code **)(*param_1 + 0x60))(param_1);
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/srtp_transport.cc",0x8f2,
                   "Failed to ProtectRtp: SRTP not active");
    }
LAB_00c43f04:
    lVar6 = *param_2;
    if (lVar6 != 0) {
      lVar6 = *(long *)(lVar6 + 0x10) + param_2[1];
    }
    lVar1 = 0;
    if (param_2[2] != 0) {
      lVar1 = lVar6;
    }
    uVar2 = FUN_00b1d194(lVar1);
    lVar6 = *param_2;
    if (lVar6 != 0) {
      lVar6 = *(long *)(lVar6 + 0x10) + param_2[1];
    }
    lVar1 = 0;
    if (param_2[2] != 0) {
      lVar1 = lVar6;
    }
    uVar3 = FUN_00b1d1a4(lVar1);
    uVar5 = FUN_004249b0();
    if ((uVar5 & 1) == 0) {
      local_f0 = "../../pc/srtp_transport.cc";
      uStack_e8 = 0x2c3;
      local_e0 = &uStack_f1;
      local_d0 = &local_f0;
      pcStack_d8 = "Failed to protect RTP packet: size=";
      FUN_00623bb0(&DAT_00259232,"../../pc/srtp_transport.cc",0x2c3,
                   "Failed to protect RTP packet: size=",param_2[2],", seqnum=",uVar2,", SSRC=",
                   uVar3);
      in_stack_ffffffffffffff00 = uVar3;
    }
    uVar3 = 0;
  }
  else {
    if (param_1[0x42] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../pc/srtp_transport.cc",0x121,"send_session_",&DAT_001f5fa0);
    }
    uVar5 = FUN_00c46b90(param_1[0x42],param_2);
    if ((uVar5 & 1) == 0) goto LAB_00c43f04;
    uVar3 = FUN_00c45a84(param_1,param_2,&local_b0,param_4);
  }
  if ((local_c8 != (char **)0x0) && (**local_c8 != '\0')) {
    FUN_0066d348(0x45,*local_c8,local_c8[1],0,0,0,0,0,in_stack_ffffffffffffff00 & 0xffffff00);
  }
  FUN_00897c8c(&local_b0);
LAB_00c43ff4:
  return uVar3 & 1;
}


// ===== 00c44064  FUN_00c44064 =====

uint FUN_00c44064(long *param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  char **local_68;
  char *local_60;
  char *pcStack_58;
  undefined4 local_34;
  
  uVar3 = (**(code **)(*param_1 + 0x60))();
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_004249b0();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/srtp_transport.cc",0x32b,
                   "Failed to send the packet because SRTP transport is inactive.");
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    if (((DAT_00dbb0b0 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00dbb0b0), iVar2 != 0)) {
      DAT_00dbb0a8 = (char *)FUN_0066d328("webrtc");
      FUN_0054ff1c(&DAT_00dbb0b0);
    }
    local_68 = (char **)0x0;
    pcStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    if (*DAT_00dbb0a8 != '\0') {
      local_68 = &local_60;
      FUN_0066d348(0x42,DAT_00dbb0a8,"SRTP Encode",0,0,0,0,0,0);
      local_60 = DAT_00dbb0a8;
      pcStack_58 = "SRTP Encode";
    }
    uVar3 = FUN_00c44284(param_1,param_2);
    if ((uVar3 & 1) == 0) {
      local_34 = 0xffffffff;
      if (*param_2 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(long *)(*param_2 + 0x10) + param_2[1];
      }
      FUN_00b1d038(lVar4,param_2[2],&local_34);
      uVar3 = FUN_004249b0();
      if ((uVar3 & 1) == 0) {
        FUN_00623bb0(&DAT_00214e34,"../../pc/srtp_transport.cc",0x373,
                     "Failed to protect RTCP packet: size=",param_2[2],", type=",local_34);
      }
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00c45aec(param_1,param_2,param_3,param_4);
    }
    if ((local_68 != (char **)0x0) && (**local_68 != '\0')) {
      FUN_0066d348(0x45,*local_68,local_68[1],0,0,0,0,0,0);
    }
  }
  return uVar1 & 1;
}


// ===== 00c44284  FUN_00c44284 =====

undefined8 FUN_00c44284(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x60))();
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_004022fc();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/srtp_transport.cc",0x982,
                   "Failed to ProtectRtcp: SRTP not active");
    }
    return 0;
  }
  lVar2 = param_1[0x44];
  if ((lVar2 == 0) && (lVar2 = param_1[0x42], lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../pc/srtp_transport.cc",0x136,"send_session_",&DAT_001f5fa0);
  }
  uVar3 = FUN_00c4748c(lVar2,param_2);
  return uVar3;
}


// ===== 00c4432c  FUN_00c4432c =====

void FUN_00c4432c(long *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  void *__src;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  uint in_stack_ffffffffffffff00;
  undefined1 auStack_e0 [24];
  char *local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  char *local_b0;
  char **ppcStack_a8;
  undefined1 *local_a0;
  char **ppcStack_98;
  char *local_90;
  undefined1 **ppuStack_88;
  ulong local_80;
  char **local_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  char **local_58;
  char *local_50;
  char *pcStack_48;
  undefined1 uStack_21;
  
  if (((DAT_00dbb0c0 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00dbb0c0), iVar4 != 0)) {
    DAT_00dbb0b8 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbb0c0);
  }
  local_58 = (char **)0x0;
  pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbb0b8 != '\0') {
    in_stack_ffffffffffffff00 = in_stack_ffffffffffffff00 & 0xffffff00;
    FUN_0066d348(0x42,DAT_00dbb0b8,"SrtpTransport::OnRtpPacketReceived",0,0,0,0,0,
                 in_stack_ffffffffffffff00);
    local_50 = DAT_00dbb0b8;
    pcStack_48 = "SrtpTransport::OnRtpPacketReceived";
    local_58 = &local_50;
  }
  uVar5 = (**(code **)(*param_1 + 0x60))(param_1);
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/srtp_transport.cc",0x3ca,
                   "Inactive SRTP transport received an RTP packet. Drop it.");
    }
    goto LAB_00c445ec;
  }
  __src = (void *)*param_2;
  puVar6 = (undefined1 *)param_2[1];
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007b54d0(&local_70,puVar6,puVar6);
  if (local_70 != (undefined1 *)0x0) {
    memcpy(*(void **)(local_70 + 0x10),__src,(size_t)puVar6);
    puStack_68 = (undefined1 *)0x0;
    local_60 = puVar6;
  }
  uVar5 = (**(code **)(*param_1 + 0x60))(param_1);
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/srtp_transport.cc",0x9ea,
                   "Failed to UnprotectRtp: SRTP not active");
    }
LAB_00c444c4:
    iVar4 = (int)param_1[0x4f];
    if ((iVar4 * -0x3d70a3d7 + 0x51eb850U >> 2 | iVar4 * 0x40000000) < 0x28f5c29) {
      uVar5 = FUN_004249b0();
      if ((uVar5 & 1) == 0) {
        local_c8 = "../../pc/srtp_transport.cc";
        local_c0 = 0x423;
        local_b8 = &uStack_21;
        ppcStack_a8 = &local_c8;
        local_b0 = "Failed to unprotect RTP packet: size=";
        ppcStack_98 = &local_b0;
        ppuStack_88 = &local_a0;
        local_a0 = local_60;
        local_90 = ", seqnum=";
        puVar6 = local_70;
        if (local_70 != (undefined1 *)0x0) {
          puVar6 = puStack_68 + *(long *)(local_70 + 0x10);
        }
        puVar1 = (undefined1 *)0x0;
        if (local_60 != (undefined1 *)0x0) {
          puVar1 = puVar6;
        }
        local_80 = FUN_00b1d194(puVar1);
        local_80 = local_80 & 0xffff;
        local_78 = &local_90;
        puVar6 = local_70;
        if (local_70 != (undefined1 *)0x0) {
          puVar6 = puStack_68 + *(long *)(local_70 + 0x10);
        }
        puVar1 = (undefined1 *)0x0;
        if (local_60 != (undefined1 *)0x0) {
          puVar1 = puVar6;
        }
        in_stack_ffffffffffffff00 = FUN_00b1d1a4(puVar1);
        puVar2 = *(undefined8 **)(local_78[1] + 8);
        puVar3 = (undefined8 *)puVar2[1];
        FUN_00623bb0(&DAT_0025923a,*puVar3,*(undefined4 *)(puVar3 + 1),*puVar2,
                     *(undefined8 *)local_78[1],*local_78,local_80 & 0xffffffff,", SSRC=",
                     in_stack_ffffffffffffff00,", previous failure count: ",(int)param_1[0x4f]);
      }
      iVar4 = (int)param_1[0x4f];
    }
    *(int *)(param_1 + 0x4f) = iVar4 + 1;
  }
  else {
    if (param_1[0x43] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../pc/srtp_transport.cc",0x140,"recv_session_",&DAT_001f5fa0);
    }
    uVar5 = FUN_00c47638(param_1[0x43],&local_70);
    if ((uVar5 & 1) == 0) goto LAB_00c444c4;
    FUN_007b5434(auStack_e0,&local_70);
    uVar7 = param_2[2];
    if ((*(uint *)(param_2 + 3) & 1) == 0) {
      uVar7 = 0x8000000000000000;
    }
    FUN_00c45d80(param_1,auStack_e0,uVar7,*(undefined1 *)(param_2 + 5));
    FUN_007b5554(auStack_e0);
  }
  FUN_007b5554(&local_70);
LAB_00c445ec:
  if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
    FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,in_stack_ffffffffffffff00 & 0xffffff00);
  }
  return;
}


// ===== 00c44690  FUN_00c44690 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c44690(long *param_1,undefined8 *param_2)

{
  void *__src;
  int iVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char acStack_b8 [24];
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  char **local_88;
  char *local_80;
  char *pcStack_78;
  ulong local_70;
  undefined8 uStack_68;
  char *local_58;
  ulong *puStack_50;
  undefined1 *local_48;
  undefined1 local_24 [4];
  
  if (((DAT_00dbb0d0 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00dbb0d0), iVar1 != 0)) {
    DAT_00dbb0c8 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbb0d0);
  }
  local_88 = (char **)0x0;
  pcStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbb0c8 != '\0') {
    FUN_0066d348(0x42,DAT_00dbb0c8,"SrtpTransport::OnRtcpPacketReceived",0,0,0,0,0,0);
    local_80 = DAT_00dbb0c8;
    pcStack_78 = "SrtpTransport::OnRtcpPacketReceived";
    local_88 = &local_80;
  }
  uVar2 = (**(code **)(*param_1 + 0x60))(param_1);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/srtp_transport.cc",0x4b2,
                   "Inactive SRTP transport received an RTCP packet. Drop it.");
    }
  }
  else {
    __src = (void *)*param_2;
    puVar3 = (undefined1 *)param_2[1];
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_007b54d0(&local_a0,puVar3,puVar3);
    if (local_a0 != (undefined1 *)0x0) {
      memcpy(*(void **)(local_a0 + 0x10),__src,(size_t)puVar3);
      puStack_98 = (undefined1 *)0x0;
      local_90 = puVar3;
    }
    uVar2 = FUN_00c4490c(param_1,&local_a0);
    if ((uVar2 & 1) == 0) {
      local_70 = CONCAT44(local_70._4_4_,0xffffffff);
      if (local_a0 == (undefined1 *)0x0) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = puStack_98 + *(long *)(local_a0 + 0x10);
      }
      FUN_00b1d038(puVar3,local_90,&local_70);
      uVar2 = FUN_004249b0();
      if ((uVar2 & 1) == 0) {
        local_48 = local_24;
        local_58 = "../../pc/srtp_transport.cc";
        puStack_50 = (ulong *)0x4f3;
        FUN_00623bb0(&DAT_00214e34,"../../pc/srtp_transport.cc",0x4f3,
                     "Failed to unprotect RTCP packet: size=",local_90,", type=",
                     local_70 & 0xffffffff);
      }
    }
    else {
      FUN_007b5434(acStack_b8,&local_a0);
      uVar5 = param_2[3];
      uVar4 = param_2[2];
      puStack_50 = &local_70;
      local_24[0] = *(undefined1 *)(param_2 + 5);
      local_70 = CONCAT17((byte)((ulong)uVar4 >> 0x38) & (byte)((ulong)_DAT_001f4c50 >> 0x38),
                          CONCAT16((byte)((ulong)uVar4 >> 0x30) &
                                   (byte)((ulong)_DAT_001f4c50 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar4 >> 0x28) &
                                            (byte)((ulong)_DAT_001f4c50 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar4 >> 0x20) &
                                                     (byte)((ulong)_DAT_001f4c50 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar4 >> 0x18) &
                                                              (byte)((ulong)_DAT_001f4c50 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar4 >> 0x10)
                                                                       & (byte)((ulong)_DAT_001f4c50
                                                                               >> 0x10),
                                                                       CONCAT11((byte)((ulong)uVar4
                                                                                      >> 8) &
                                                                                (byte)((ulong)
                                                  _DAT_001f4c50 >> 8),
                                                  (byte)uVar4 & (byte)_DAT_001f4c50)))))));
      uStack_68 = CONCAT17((byte)((ulong)uVar5 >> 0x38) & (byte)((ulong)_UNK_001f4c58 >> 0x38),
                           CONCAT16((byte)((ulong)uVar5 >> 0x30) &
                                    (byte)((ulong)_UNK_001f4c58 >> 0x30),
                                    CONCAT15((byte)((ulong)uVar5 >> 0x28) &
                                             (byte)((ulong)_UNK_001f4c58 >> 0x28),
                                             CONCAT14((byte)((ulong)uVar5 >> 0x20) &
                                                      (byte)((ulong)_UNK_001f4c58 >> 0x20),
                                                      CONCAT13((byte)((ulong)uVar5 >> 0x18) &
                                                               (byte)((ulong)_UNK_001f4c58 >> 0x18),
                                                               CONCAT12((byte)((ulong)uVar5 >> 0x10)
                                                                        & (byte)((ulong)
                                                  _UNK_001f4c58 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar5 >> 8) &
                                                           (byte)((ulong)_UNK_001f4c58 >> 8),
                                                           (byte)uVar5 & (byte)_UNK_001f4c58)))))));
      local_48 = local_24;
      local_58 = acStack_b8;
      FUN_007b6160(param_1 + 5,&local_58,FUN_00c453ac);
      FUN_007b5554(acStack_b8);
    }
    FUN_007b5554(&local_a0);
  }
  if ((local_88 != (char **)0x0) && (**local_88 != '\0')) {
    FUN_0066d348(0x45,*local_88,local_88[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 00c4490c  FUN_00c4490c =====

undefined8 FUN_00c4490c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x60))();
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_004022fc();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/srtp_transport.cc",0xa32,
                   "Failed to UnprotectRtcp: SRTP not active");
    }
    return 0;
  }
  lVar2 = param_1[0x45];
  if ((lVar2 == 0) && (lVar2 = param_1[0x43], lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../pc/srtp_transport.cc",0x14c,"recv_session_",&DAT_001f5fa0);
  }
  uVar3 = FUN_00c477b8(lVar2,param_2);
  return uVar3;
}


// ===== 00c449b4  FUN_00c449b4 =====

void FUN_00c449b4(long *param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined1 *local_28;
  
  if (*(char *)((long)param_2 + 0x24) != '\x01') goto LAB_00c44a54;
  uVar2 = (**(code **)(*param_1 + 0x60))(param_1);
  if ((uVar2 & 1) == 0) {
LAB_00c44a3c:
    iVar1 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x60))(param_1);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../pc/srtp_transport.cc",0xafa,
                     "Failed to GetSrtpOverhead: SRTP not active");
      }
      goto LAB_00c44a3c;
    }
    if (param_1[0x42] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../pc/srtp_transport.cc",0x163,"send_session_",&DAT_001f5fa0);
    }
    iVar1 = FUN_00c478f4();
  }
  if ((*(byte *)((long)param_2 + 0x24) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
              );
  }
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + iVar1;
LAB_00c44a54:
  uStack_48 = param_2[1];
  local_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  local_30 = param_2[4];
  local_28 = (undefined1 *)&local_50;
  FUN_007b6160(param_1 + 0xe,&local_28,FUN_00bc8a60);
  return;
}


// ===== 00c44ac8  FUN_00c44ac8 =====

void FUN_00c44ac8(long *param_1)

{
  ulong uVar1;
  byte local_24 [4];
  byte *local_8;
  
  uVar1 = (**(code **)(*param_1 + 0x40))(param_1,0);
  local_24[0] = 0;
  if ((uVar1 & 1) != 0) {
    local_24[0] = (**(code **)(*param_1 + 0x40))(param_1,1);
  }
  local_24[0] = local_24[0] & 1;
  local_8 = local_24;
  FUN_007b6160(param_1 + 0x12,&local_8,FUN_0046bccc);
  return;
}


// ===== 00c44b48  FUN_00c44b48 =====

undefined8
FUN_00c44b48(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  char *pcVar1;
  ulong uVar2;
  long lVar3;
  byte local_5c [4];
  byte *local_58;
  
  lVar3 = param_1[0x42];
  if (lVar3 == 0) {
    FUN_00c44cec(param_1);
    uVar2 = FUN_00c46868(param_1[0x42],param_2,param_3,param_4);
    if ((uVar2 & 1) == 0) goto LAB_00c44c80;
    uVar2 = FUN_00c46b14(param_1[0x43],param_5,param_6,param_7);
  }
  else {
    uVar2 = FUN_00c46ab0(lVar3,param_2,param_3,param_4);
    if ((uVar2 & 1) == 0) goto LAB_00c44c80;
    uVar2 = FUN_00c46b2c(param_1[0x43],param_5,param_6,param_7);
  }
  if ((uVar2 & 1) != 0) {
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      pcVar1 = "activated";
      if (lVar3 != 0) {
        pcVar1 = "updated";
      }
      FUN_00623bb0(&DAT_00259244,"../../pc/srtp_transport.cc",0x6d1,"SRTP ",pcVar1,
                   " with negotiated parameters: send crypto_suite ",param_2," recv crypto_suite ",
                   param_5);
    }
    uVar2 = (**(code **)(*param_1 + 0x40))(param_1,1);
    if ((uVar2 & 1) == 0) {
      local_5c[0] = 0;
    }
    else {
      local_5c[0] = (**(code **)(*param_1 + 0x40))(param_1,0);
    }
    local_5c[0] = local_5c[0] & 1;
    if (*(byte *)(param_1 + 0x4e) != local_5c[0]) {
      *(byte *)(param_1 + 0x4e) = local_5c[0];
      local_58 = local_5c;
      FUN_007b6160(param_1 + 0x12,&local_58,FUN_0046bccc);
    }
    return 1;
  }
LAB_00c44c80:
  FUN_00c44da4(param_1);
  return 0;
}


// ===== 00c44cec  FUN_00c44cec =====

void FUN_00c44cec(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = operator_new(0x30);
  FUN_00c4663c(pvVar1,*(undefined8 *)(param_1 + 0x280));
  pvVar2 = *(void **)(param_1 + 0x210);
  *(void **)(param_1 + 0x210) = pvVar1;
  if (pvVar2 != (void *)0x0) {
    FUN_00c4671c(pvVar2);
    operator_delete(pvVar2);
  }
  pvVar1 = operator_new(0x30);
  FUN_00c4663c(pvVar1,*(undefined8 *)(param_1 + 0x280));
  pvVar2 = *(void **)(param_1 + 0x218);
  *(void **)(param_1 + 0x218) = pvVar1;
  if (pvVar2 != (void *)0x0) {
    FUN_00c4671c(pvVar2);
    operator_delete(pvVar2);
  }
  if (*(char *)(param_1 + 0x271) == '\x01') {
    FUN_00c47900(*(undefined8 *)(param_1 + 0x210));
    return;
  }
  return;
}


// ===== 00c44da4  FUN_00c44da4 =====

void FUN_00c44da4(long *param_1)

{
  byte bVar1;
  ulong uVar2;
  void *pvVar3;
  byte local_2c [4];
  undefined1 *local_28;
  
  pvVar3 = (void *)param_1[0x42];
  param_1[0x42] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_00c4671c(pvVar3);
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[0x43];
  param_1[0x43] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_00c4671c(pvVar3);
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[0x44];
  param_1[0x44] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_00c4671c(pvVar3);
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[0x45];
  param_1[0x45] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_00c4671c(pvVar3);
    operator_delete(pvVar3);
  }
  uVar2 = (**(code **)(*param_1 + 0x40))(param_1,1);
  if ((uVar2 & 1) == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = (**(code **)(*param_1 + 0x40))(param_1,0);
  }
  bVar1 = bVar1 & 1;
  if (*(byte *)(param_1 + 0x4e) != bVar1) {
    *(byte *)(param_1 + 0x4e) = bVar1;
    local_28 = local_2c;
    local_2c[0] = bVar1;
    FUN_007b6160(param_1 + 0x12,&local_28,FUN_0046bccc);
  }
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../pc/srtp_transport.cc",0x889,
                 "The params in SRTP transport are reset.");
  }
  return;
}


// ===== 00c44ee0  FUN_00c44ee0 =====

undefined8
FUN_00c44ee0(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  byte local_64 [4];
  undefined1 *local_48;
  
  if ((param_1[0x44] == 0) && (param_1[0x45] == 0)) {
    pvVar2 = operator_new(0x30);
    FUN_00c4663c(pvVar2,param_1[0x50]);
    pvVar3 = (void *)param_1[0x44];
    param_1[0x44] = (long)pvVar2;
    if (pvVar3 != (void *)0x0) {
      FUN_00c4671c(pvVar3);
      operator_delete(pvVar3);
      pvVar2 = (void *)param_1[0x44];
    }
    uVar1 = FUN_00c46868(pvVar2,param_2,param_3,param_4);
    if ((uVar1 & 1) != 0) {
      pvVar2 = operator_new(0x30);
      FUN_00c4663c(pvVar2,param_1[0x50]);
      pvVar3 = (void *)param_1[0x45];
      param_1[0x45] = (long)pvVar2;
      if (pvVar3 != (void *)0x0) {
        FUN_00c4671c(pvVar3);
        operator_delete(pvVar3);
        pvVar2 = (void *)param_1[0x45];
      }
      uVar1 = FUN_00c46b14(pvVar2,param_5,param_6,param_7);
      if ((uVar1 & 1) != 0) {
        uVar1 = FUN_00417e08();
        if ((uVar1 & 1) == 0) {
          FUN_00623bb0(&DAT_001f6148,"../../pc/srtp_transport.cc",0x7d9,
                       "SRTCP activated with negotiated parameters: send crypto_suite ",param_2,
                       " recv crypto_suite ",param_5);
        }
        uVar1 = (**(code **)(*param_1 + 0x40))(param_1,1);
        if ((uVar1 & 1) == 0) {
          local_64[0] = 0;
        }
        else {
          local_64[0] = (**(code **)(*param_1 + 0x40))(param_1,0);
        }
        local_64[0] = local_64[0] & 1;
        if (*(byte *)(param_1 + 0x4e) != local_64[0]) {
          *(byte *)(param_1 + 0x4e) = local_64[0];
          local_48 = local_64;
          FUN_007b6160(param_1 + 0x12,&local_48,FUN_0046bccc);
        }
        return 1;
      }
    }
  }
  else {
    uVar1 = FUN_004249b0();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/srtp_transport.cc",0x75b,
                   "Tried to set SRTCP Params when filter already active");
    }
  }
  return 0;
}


// ===== 00c450c8  FUN_00c450c8 =====

bool FUN_00c450c8(long param_1)

{
  if (*(long *)(param_1 + 0x210) != 0) {
    return *(long *)(param_1 + 0x218) != 0;
  }
  return false;
}


// ===== 00c450ec  FUN_00c450ec =====

undefined8 FUN_00c450ec(long *param_1,uint param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x60))();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_00c45a48(param_1,param_2 & 1);
    return uVar2;
  }
  return 0;
}


// ===== 00c45140  FUN_00c45140 =====

void FUN_00c45140(long param_1)

{
  *(undefined1 *)(param_1 + 0x271) = 1;
  return;
}


// ===== 00c45150  FUN_00c45150 =====

/* WARNING: Type propagation algorithm not settling */

uint FUN_00c45150(long param_1,undefined8 param_2)

{
  int *******pppppppiVar1;
  int iVar2;
  int *******pppppppiVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  int *******local_78;
  int *******local_70;
  byte bStack_61;
  
  if (*(long *)(param_1 + 0x218) != 0) {
    (**(code **)(**(long **)(param_1 + 0x280) + 0x10))
              (&local_78,*(long **)(param_1 + 0x280),"WebRTC-SrtpRemoveReceiveStream",0x1e);
    pppppppiVar1 = local_70;
    if (-1 < (char)bStack_61) {
      pppppppiVar1 = (int *******)(ulong)bStack_61;
    }
    if (pppppppiVar1 < (int *******)0x7) {
      bVar4 = false;
    }
    else {
      pppppppiVar1 = local_78;
      if (-1 < (char)bStack_61) {
        pppppppiVar1 = (int *******)&local_78;
      }
      bVar4 = *(int *)pppppppiVar1 == 0x62616e45 && *(int *)((long)pppppppiVar1 + 3) == 0x64656c62;
    }
    if ((char)bStack_61 < '\0') {
      operator_delete(local_78);
    }
    if (bVar4) {
      FUN_00c45d74(&local_78,param_1,param_2);
      pppppppiVar3 = local_70;
      for (pppppppiVar1 = local_78; pppppppiVar1 != pppppppiVar3;
          pppppppiVar1 = (int *******)((long)pppppppiVar1 + 4)) {
        iVar2 = *(int *)pppppppiVar1;
        uVar6 = FUN_00c47910(*(undefined8 *)(param_1 + 0x218),iVar2);
        if (((uVar6 & 1) == 0) && (uVar6 = FUN_004022fc(), (uVar6 & 1) == 0)) {
          FUN_00623bb0(&DAT_001fcbd8,"../../pc/srtp_transport.cc",0xc62,"Could not remove SSRC ",
                       iVar2," from SRTP session.");
        }
      }
      if (local_78 != (int *******)0x0) {
        uVar7 = (ulong)((long)local_70 + (-4 - ((long)local_70 << 0x3e))) >> 2;
        uVar6 = (ulong)(((long)local_78 - (long)local_70 << 0x3e) -
                       ((long)local_78 - (long)local_70)) >> 2;
        if (uVar7 <= uVar6) {
          uVar6 = uVar7;
        }
        if ((1 < uVar6) && ((((int)local_78 - (int)local_70 | -(int)local_70) & 3U) == 0)) {
          uVar6 = uVar6 & 0x3ffffffffffffffe;
          local_70 = (int *******)((long)local_70 + uVar6 * -4);
          do {
            uVar6 = uVar6 - 2;
          } while (uVar6 != 0);
        }
        while (local_70 != local_78) {
          local_70 = (int *******)((long)local_70 - 4);
          if (local_70 == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        operator_delete(local_78);
      }
    }
  }
  uVar5 = FUN_00c45d18(param_1,param_2);
  return uVar5 & 1;
}


// ===== 00c45370  FUN_00c45370 =====

void FUN_00c45370(void *param_1)

{
  FUN_00c43af8();
  operator_delete(param_1);
  return;
}


// ===== 00c453a0  FUN_00c453a0 =====

undefined8 FUN_00c453a0(void)

{
  return 0;
}


// ===== 00c453ac  FUN_00c453ac =====

void FUN_00c453ac(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)param_1[1];
  puVar2 = (undefined1 *)param_1[2];
  pcVar3 = *(code **)(param_2 + 0x20);
  FUN_007b53e4(auStack_48,*param_1);
  (*pcVar3)(param_2,auStack_48,*puVar1,puVar1[1],*puVar2);
  FUN_007b5554(auStack_48);
  return;
}


// ===== 00c45410  FUN_00c45410 =====

void FUN_00c45410(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xd8) = param_2;
  FUN_00c4541c();
  return;
}


// ===== 00c4541c  FUN_00c4541c =====

void FUN_00c4541c(long param_1)

{
  long *plVar1;
  long lVar2;
  byte *local_50 [2];
  code *local_40;
  code *pcStack_38;
  byte local_14 [3];
  undefined1 uStack_11;
  
  if (*(char *)(param_1 + 0x102) == '\x01') {
    if ((*(byte *)(param_1 + 0x103) & 1) == 0) {
      local_14[0] = *(byte *)(param_1 + 0xd8);
    }
    else {
      local_14[0] = 1;
    }
  }
  else {
    local_14[0] = 0;
  }
  local_14[0] = local_14[0] & 1;
  if (*(byte *)(param_1 + 0x100) != local_14[0]) {
    if (*(char *)(param_1 + 0x1ef) == '\x01') {
      plVar1 = (long *)FUN_005d6490();
      lVar2 = *(long *)(param_1 + 0x1f0);
      if (lVar2 != 0) {
        FUN_00d0f740(1,lVar2);
      }
      local_50[0] = (byte *)operator_new(0x30);
      *(long *)local_50[0] = lVar2;
      *(code **)(local_50[0] + 0x20) = FUN_004473ec;
      *(code **)(local_50[0] + 0x28) = FUN_00c46630;
      *(long *)(local_50[0] + 0x10) = param_1;
      local_40 = FUN_005db390;
      pcStack_38 = FUN_005db348;
      (**(code **)(*plVar1 + 8))(plVar1,local_50,local_14,&uStack_11);
      (*local_40)(0,local_50,local_50);
    }
    else {
      *(byte *)(param_1 + 0x100) = local_14[0];
      local_50[0] = local_14;
      *(undefined1 *)(param_1 + 0x1ef) = 1;
      FUN_007b6160(param_1 + 8,local_50,FUN_0046bccc);
      *(undefined1 *)(param_1 + 0x1ef) = 0;
    }
  }
  return;
}


// ===== 00c45550  FUN_00c45550 =====

void FUN_00c45550(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c45560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xe0))();
  return;
}


// ===== 00c45564  FUN_00c45564 =====

void FUN_00c45564(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c45574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xe0) + 0x20))();
  return;
}


// ===== 00c45578  FUN_00c45578 =====

undefined8 FUN_00c45578(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0xe8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c4558c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0xe8) + 0x20))();
    return uVar1;
  }
  return 0xffffffff;
}


// ===== 00c45598  FUN_00c45598 =====

void FUN_00c45598(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long alStack_128 [5];
  long local_100 [2];
  code *local_f0;
  code *pcStack_e8;
  long local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long local_c0 [2];
  code *local_b0;
  code *pcStack_a8;
  long local_a0 [2];
  code *local_90;
  code *pcStack_88;
  undefined1 local_80 [36];
  undefined1 local_5c;
  long *local_58;
  code *pcStack_50;
  code *local_48;
  
  plVar1 = (long *)*param_3;
  if (param_2 != plVar1) {
    if (plVar1 != (long *)0x0) {
      FUN_00bc8710(plVar1,param_1);
      FUN_00bc847c(*param_3,param_1);
      FUN_00bc88c4(*param_3,param_1);
      FUN_00bc8630(*param_3,param_1);
      FUN_007b5df8(*param_3 + 0x50,param_1);
      local_58 = (long *)local_80;
      local_80[0] = 0;
      local_5c = 0;
      FUN_007b6160(param_1 + 0x70,&local_58,FUN_00bc8a60);
    }
    if (param_2 != (long *)0x0) {
      local_90 = FUN_004473ec;
      pcStack_88 = FUN_00c464cc;
      local_a0[0] = param_1;
      FUN_00bc8678(param_2,param_1,local_a0);
      (*local_90)(0,local_a0,local_a0);
      local_b0 = FUN_004473ec;
      pcStack_a8 = FUN_00c464f8;
      local_c0[0] = param_1;
      FUN_00bc83e4(param_2,param_1,local_c0);
      (*local_b0)(0,local_c0,local_c0);
      local_d0 = FUN_004473ec;
      pcStack_c8 = FUN_00c46504;
      local_e0[0] = param_1;
      FUN_00bc882c(param_2,param_1,local_e0);
      (*local_d0)(0,local_e0,local_e0);
      local_f0 = FUN_004473ec;
      pcStack_e8 = FUN_00c46548;
      local_100[0] = param_1;
      FUN_00bc8598(param_2,param_1,local_100);
      (*local_f0)(0,local_100,local_100);
      lVar2 = *(long *)(param_1 + 0x1f0);
      if (lVar2 != 0) {
        FUN_00d0f740(1,lVar2);
      }
      local_58 = (long *)operator_new(0x20);
      *local_58 = param_1;
      local_58[1] = lVar2;
      local_58[2] = (long)FUN_00c465ac;
      local_58[3] = (long)FUN_00c4655c;
      pcStack_50 = FUN_00c46464;
      local_48 = FUN_00c46474;
      FUN_007b5b08(param_2 + 10,param_1,&local_58);
      (**(code **)(*param_2 + 0x38))(alStack_128,param_2);
      local_58 = alStack_128;
      FUN_007b6160(param_1 + 0x70,&local_58,FUN_00bc8a60);
    }
    *param_3 = (long)param_2;
  }
  return;
}


// ===== 00c457c0  FUN_00c457c0 =====

void FUN_00c457c0(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xf8);
  if (plVar2 == param_2) {
    plVar2 = (long *)0x0;
  }
  else {
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  FUN_00c45598(param_1,param_2,param_1 + 0xe8);
  plVar1 = *(long **)(param_1 + 0xe8);
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)(**(code **)(*plVar1 + 8))();
  }
  *(byte *)(param_1 + 0x103) = (byte)plVar1 & 1;
  FUN_00c4541c(param_1);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x48))(plVar2);
  }
  plVar2 = *(long **)(param_1 + 0xf8);
  *(long **)(param_1 + 0xf8) = param_2;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c45860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x48))();
    return;
  }
  return;
}


// ===== 00c45878  FUN_00c45878 =====

void FUN_00c45878(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xf8);
  if (param_2 == plVar2) {
    plVar2 = (long *)0x0;
  }
  else {
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  FUN_00c45598(param_1,param_2,param_1 + 0xe8);
  plVar1 = *(long **)(param_1 + 0xe8);
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)(**(code **)(*plVar1 + 8))();
  }
  *(byte *)(param_1 + 0x103) = (byte)plVar1 & 1;
  FUN_00c4541c(param_1);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c458f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x48))(plVar2);
    return;
  }
  return;
}


// ===== 00c45904  FUN_00c45904 =====

void FUN_00c45904(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xf0);
  if (plVar2 == param_2) {
    plVar2 = (long *)0x0;
  }
  else {
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  FUN_00c45598(param_1,param_2,param_1 + 0xe0);
  plVar1 = *(long **)(param_1 + 0xe0);
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)(**(code **)(*plVar1 + 8))();
  }
  *(byte *)(param_1 + 0x102) = (byte)plVar1 & 1;
  FUN_00c4541c(param_1);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x48))(plVar2);
  }
  plVar2 = *(long **)(param_1 + 0xf0);
  *(long **)(param_1 + 0xf0) = param_2;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c459a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x48))();
    return;
  }
  return;
}


// ===== 00c459bc  FUN_00c459bc =====

void FUN_00c459bc(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xf0);
  if (param_2 == plVar2) {
    plVar2 = (long *)0x0;
  }
  else {
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  FUN_00c45598(param_1,param_2,param_1 + 0xe0);
  plVar1 = *(long **)(param_1 + 0xe0);
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)(**(code **)(*plVar1 + 8))();
  }
  *(byte *)(param_1 + 0x102) = (byte)plVar1 & 1;
  FUN_00c4541c(param_1);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c45a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x48))(plVar2);
    return;
  }
  return;
}


// ===== 00c45a48  FUN_00c45a48 =====

void FUN_00c45a48(long param_1,uint param_2)

{
  long *plVar1;
  
  if (((param_2 & 1) == 0) || (*(char *)(param_1 + 0xd8) == '\x01')) {
    plVar1 = *(long **)(param_1 + 0xe0);
  }
  else {
    plVar1 = *(long **)(param_1 + 0xe8);
  }
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c45a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 00c45a84  FUN_00c45a84 =====

bool FUN_00c45a84(long param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  
  if (*param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*param_2 + 0x10) + param_2[1];
  }
  iVar1 = (**(code **)(**(long **)(param_1 + 0xe0) + 0x18))
                    (*(long **)(param_1 + 0xe0),lVar2,param_2[2],param_3,param_4);
  return iVar1 == (int)param_2[2];
}


// ===== 00c45aec  FUN_00c45aec =====

bool FUN_00c45aec(long param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 local_a0;
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
  
  if (*(char *)(param_1 + 0x101) == '\x01') {
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
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00897be8(&local_a0,param_3);
    local_a0._0_5_ = CONCAT14(1,(undefined4)local_a0);
    lVar1 = 0xe0;
    if (*(char *)(param_1 + 0xd8) == '\0') {
      lVar1 = 0xe8;
    }
    if (*param_2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*param_2 + 0x10) + param_2[1];
    }
    iVar3 = (**(code **)(**(long **)(param_1 + lVar1) + 0x18))
                      (*(long **)(param_1 + lVar1),lVar4,param_2[2],&local_a0,param_4);
    bVar2 = iVar3 == (int)param_2[2];
    FUN_00897c8c(&local_a0);
  }
  else {
    lVar1 = 0xe0;
    if (*(char *)(param_1 + 0xd8) == '\0') {
      lVar1 = 0xe8;
    }
    if (*param_2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*param_2 + 0x10) + param_2[1];
    }
    iVar3 = (**(code **)(**(long **)(param_1 + lVar1) + 0x18))
                      (*(long **)(param_1 + lVar1),lVar4,param_2[2],param_3,param_4);
    bVar2 = iVar3 == (int)param_2[2];
  }
  return bVar2;
}


// ===== 00c45c1c  FUN_00c45c1c =====

void FUN_00c45c1c(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_3f;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined7 uStack_2f;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  lVar2 = param_2[1] - *param_2;
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = *param_2;
  }
  FUN_007d87fc(&local_3f,lVar1,lVar2 >> 5);
  *(ulong *)(param_1 + 0x1e0) = CONCAT17(uStack_30,uStack_37);
  *(undefined8 *)(param_1 + 0x1d8) = local_3f;
  *(ulong *)(param_1 + 0x1e7) = CONCAT71(uStack_2f,uStack_30);
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c45c94  FUN_00c45c94 =====

uint FUN_00c45c94(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  
  FUN_0089a290(param_1 + 0x108,param_3);
  uVar1 = FUN_008998bc(param_1 + 0x108,param_2,param_3);
  if (((uVar1 & 1) == 0) && (uVar2 = FUN_004249b0(), (uVar2 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f4e98,"../../pc/rtp_transport.cc",0x62b,
                 "Failed to register the sink for RTP demuxer.");
  }
  return uVar1 & 1;
}


// ===== 00c45d18  FUN_00c45d18 =====

uint FUN_00c45d18(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = FUN_0089a290(param_1 + 0x108);
  if (((uVar1 & 1) == 0) && (uVar2 = FUN_004249b0(), (uVar2 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f4e98,"../../pc/rtp_transport.cc",0x66b,
                 "Failed to unregister the sink for RTP demuxer.");
  }
  return uVar1 & 1;
}


// ===== 00c45d74  FUN_00c45d74 =====

void FUN_00c45d74(long param_1)

{
  FUN_0089a7b4(param_1 + 0x108);
  return;
}


// ===== 00c45d80  FUN_00c45d80 =====

void FUN_00c45d80(long param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  long lVar1;
  ulong uVar2;
  void *local_110 [2];
  char cStack_f9;
  undefined1 auStack_f8 [24];
  undefined1 *local_e0;
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
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
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
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007dc060(&local_e0,param_1 + 0x1d8,0x8000000000000000);
  puStack_68 = (undefined1 *)CONCAT71(puStack_68._1_7_,param_4);
  *(bool *)(param_1 + 0x101) = (param_4 & 0xfd) == 1;
  local_70 = (undefined1 *)param_3;
  FUN_007b5434(auStack_f8,param_2);
  uVar2 = FUN_007da648(&local_e0,auStack_f8);
  FUN_007b5554(auStack_f8);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_004249b0();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/rtp_transport.cc",0x703,
                   "Failed to parse the incoming RTP packet before demuxing. Drop it.");
    }
  }
  else {
    uVar2 = FUN_0089a87c(param_1 + 0x108,&local_e0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0044075c();
      if ((uVar2 & 1) == 0) {
        FUN_0089929c(local_110,&local_e0);
        FUN_00623bb0(&DAT_001f4e90,"../../pc/rtp_transport.cc",0x730,"Failed to demux RTP packet: ",
                     local_110);
        if (cStack_f9 < '\0') {
          operator_delete(local_110[0]);
        }
      }
      (**(code **)(param_1 + 0x68))(param_1 + 0x50,&local_e0);
    }
  }
  FUN_007dc1b4(&local_e0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


