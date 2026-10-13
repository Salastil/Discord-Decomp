// ===== 006093f0  FUN_006093f0 =====

undefined8 FUN_006093f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x3f4);
}


// ===== 00609400  FUN_00609400 =====

undefined1  [16] FUN_00609400(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (*(char *)(param_1 + 0x420) != '\x01') {
    return ZEXT816(0);
  }
  uVar1 = *(ulong *)(param_1 + 0x418);
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


// ===== 00609494  FUN_00609494 =====

void FUN_00609494(long param_1)

{
  FUN_008650b0(*(undefined8 *)(param_1 + 0x1f0));
  return;
}


// ===== 006094a0  FUN_006094a0 =====

void FUN_006094a0(long param_1)

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


// ===== 006095c0  FUN_006095c0 =====

void FUN_006095c0(long param_1)

{
  FUN_006094a0(param_1 + -0x38);
  return;
}


// ===== 006095cc  FUN_006095cc =====

void FUN_006095cc(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = *(long *)(param_1 + 0x1c8);
  if ((lVar1 != 0) && (*(long *)(param_2 + 0x18) != 0)) {
    lVar3 = *(long *)(param_2 + 0x58);
    if (lVar3 != 0) {
      lVar3 = *(long *)(lVar3 + 0x10) + *(long *)(param_2 + 0x60);
    }
    if (*(uint *)(lVar1 + 4) == (uint)*(byte *)(lVar3 + *(long *)(param_2 + 0x10))) {
      plVar4 = *(long **)(param_1 + 0x3e0);
      if (plVar4 != (long *)0x0) {
        do {
          while (*(byte *)(param_2 + 1) < *(byte *)((long)plVar4 + 0x1c)) {
            plVar4 = (long *)*plVar4;
            if (plVar4 == (long *)0x0) goto LAB_0060966c;
          }
          if (*(byte *)(param_2 + 1) == *(byte *)((long)plVar4 + 0x1c)) {
            if (plVar4 != (long *)(param_1 + 0x3e0)) {
              uVar2 = (ulong)*(uint *)(plVar4 + 4) | 0x100000000;
              goto LAB_00609670;
            }
            break;
          }
          plVar4 = (long *)plVar4[1];
        } while (plVar4 != (long *)0x0);
      }
LAB_0060966c:
      uVar2 = 0;
LAB_00609670:
      FUN_006071d4(param_1,*(undefined2 *)(param_2 + 4),uVar2);
      lVar1 = *(long *)(param_1 + 0x1c8);
    }
    uVar2 = FUN_00877b74(lVar1,param_2);
    if ((uVar2 & 1) != 0) {
      FUN_0087817c(*(undefined8 *)(param_1 + 0x1c8));
      return;
    }
  }
  return;
}


// ===== 006096ac  FUN_006096ac =====

uint FUN_006096ac(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined1 auStack_8b8 [31];
  undefined1 uStack_899;
  char *local_898;
  undefined8 uStack_890;
  undefined1 *local_888;
  undefined1 *local_880;
  undefined1 *puStack_878;
  undefined1 *local_870;
  undefined1 auStack_868 [2032];
  undefined1 auStack_78 [24];
  byte local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar7 = *param_1;
  memcpy(auStack_868,&DAT_001fc3c8,0x810);
  lVar5 = *(long *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  plVar8 = *(long **)(*(long *)param_1[1] + 0x28);
  puStack_878 = &DAT_aaaaaaaaaaaaaaaa;
  local_880 = &DAT_aaaaaaaaaaaaaaaa;
  local_870 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007b53e4(&local_880,param_2 + 0x58);
  puStack_878 = puStack_878 + lVar5;
  local_870 = (undefined1 *)uVar1;
  (**(code **)(*plVar8 + 0x10))(auStack_868,plVar8,&local_880);
  FUN_007b5554(&local_880);
  if ((local_60 & 1) == 0) {
    uVar6 = FUN_004022fc();
    if ((uVar6 & 1) == 0) {
      local_888 = &uStack_899;
      local_898 = "../../video/rtp_video_stream_receiver2.cc";
      uStack_890 = 0x2572;
      FUN_00623bb0(&DAT_001fcbe7,"../../video/rtp_video_stream_receiver2.cc",0x2572,
                   " Failed to parse payload for ","ssrc: ",*(undefined4 *)(param_2 + 0xc),
                   ", timestamp: ",*(undefined4 *)(param_2 + 8));
    }
    uVar4 = 0;
  }
  else {
    lVar5 = *(long *)(lVar7 + 0x268);
    if (lVar5 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = FUN_0094aad8(lVar5,*(undefined2 *)(param_2 + 4),*(undefined1 *)(param_2 + 0x80));
      if ((local_60 & 1) == 0) goto LAB_00609860;
    }
    FUN_007b5434(auStack_8b8,auStack_78);
    if ((local_60 & 1) == 0) {
LAB_00609860:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    uVar4 = FUN_00605d3c(lVar7,auStack_8b8,param_2,auStack_868,uVar3);
    FUN_007b5554(auStack_8b8);
  }
  if (local_60 == 1) {
    FUN_007b5554(auStack_78);
    FUN_007dd190(auStack_868);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4 & 1;
}


// ===== 00609878  FUN_00609878 =====

char FUN_00609878(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  cVar1 = *(char *)(param_1 + 0x1e0);
  if (cVar1 == '\x01') {
    FUN_00864454(*(undefined8 *)(param_1 + 0x1f0));
    auVar5 = FUN_00864f50(*(undefined8 *)(param_1 + 0x1f0));
    if ((auVar5 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
      local_60 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      local_40 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_008650b0(&local_70,*(undefined8 *)(param_1 + 0x1f0));
      if (((ulong)local_40 & 1) != 0) {
        plVar4 = *(long **)(param_1 + 0x50);
        uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
        uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,uVar2);
        if (((ulong)local_40 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                    );
        }
        if ((long)(((long)((double)(uVar3 & 0xffffffff) / DAT_001f4ff8 + 0.5) -
                   (long)((double)((ulong)puStack_68 & 0xffffffff) / DAT_001f4ff8 + 0.5)) +
                  ((uVar3 >> 0x20) - ((ulong)puStack_68 >> 0x20)) * 1000) < 2) {
          FUN_008533a4(param_1 + 0x80,auVar5._0_8_,local_60,(ulong)puStack_58 & 0xffffffff);
          auVar5 = FUN_00853828(param_1 + 0x80);
          if ((auVar5 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
            FUN_0084b2f0(param_1 + 0x530,auVar5._0_8_,1);
          }
        }
      }
    }
  }
  return cVar1;
}


// ===== 006099bc  FUN_006099bc =====

void FUN_006099bc(long param_1,long param_2)

{
  long *plVar1;
  
  if ((*(long *)(param_1 + 0x268) != 0) &&
     (plVar1 = *(long **)(param_1 + 0x368), plVar1 != (long *)0x0)) {
    do {
      while (param_2 < plVar1[4]) {
        plVar1 = (long *)*plVar1;
        if (plVar1 == (long *)0x0) {
          return;
        }
      }
      if (param_2 == plVar1[4]) {
        if (plVar1 == (long *)(param_1 + 0x368)) {
          return;
        }
        FUN_0094b1ec(*(long *)(param_1 + 0x268),(short)plVar1[5]);
        return;
      }
      plVar1 = (long *)plVar1[1];
    } while (plVar1 != (long *)0x0);
  }
  return;
}


// ===== 00609a14  FUN_00609a14 =====

void FUN_00609a14(long param_1,long param_2)

{
  ulong *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  bool bVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  puVar8 = *(undefined8 **)(param_1 + 0x368);
  if (puVar8 == (undefined8 *)0x0) {
    return;
  }
LAB_00609a48:
  if (param_2 < (long)puVar8[4]) {
    puVar8 = (undefined8 *)*puVar8;
  }
  else {
    if (param_2 == puVar8[4]) {
      if (puVar8 == (undefined8 *)(param_1 + 0x368)) {
        return;
      }
      puVar5 = (undefined8 *)puVar8[1];
      puVar13 = puVar8;
      if ((undefined8 *)puVar8[1] == (undefined8 *)0x0) {
        do {
          puVar14 = (undefined8 *)puVar13[2];
          bVar6 = puVar13 != (undefined8 *)*puVar14;
          puVar13 = puVar14;
        } while (bVar6);
      }
      else {
        do {
          puVar14 = puVar5;
          puVar5 = (undefined8 *)*puVar14;
        } while ((undefined8 *)*puVar14 != (undefined8 *)0x0);
      }
      uVar2 = *(ushort *)(puVar8 + 5);
      uVar10 = (ulong)uVar2;
      puVar8 = *(undefined8 **)(param_1 + 0x360);
      while (puVar8 != puVar14) {
        puVar5 = (undefined8 *)puVar8[1];
        puVar13 = puVar8;
        if ((undefined8 *)puVar8[1] == (undefined8 *)0x0) {
          do {
            puVar15 = (undefined8 *)puVar13[2];
            bVar6 = puVar13 != (undefined8 *)*puVar15;
            puVar13 = puVar15;
          } while (bVar6);
        }
        else {
          do {
            puVar15 = puVar5;
            puVar5 = (undefined8 *)*puVar15;
          } while ((undefined8 *)*puVar15 != (undefined8 *)0x0);
        }
        if (*(undefined8 **)(param_1 + 0x360) == puVar8) {
          *(undefined8 **)(param_1 + 0x360) = puVar15;
        }
        *(long *)(param_1 + 0x370) = *(long *)(param_1 + 0x370) + -1;
        FUN_005d5d48(*(undefined8 *)(param_1 + 0x368),puVar8);
        if (puVar8 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        operator_delete(puVar8);
        puVar8 = puVar15;
      }
      if ((*(byte *)(param_1 + 0x55a) & 1) != 0) {
        uVar3 = (uint)uVar2 - (uint)*(ushort *)(param_1 + 0x558);
        iVar4 = (int)(short)uVar3;
        bVar6 = (uint)*(ushort *)(param_1 + 0x558) <= (uint)uVar2 && uVar3 != 0;
        if (uVar3 != 0x8000) {
          bVar6 = iVar4 != -1 && iVar4 + 1 < 0 == SCARRY4(iVar4,1);
        }
        uVar10 = (ulong)uVar3 & 0xffff;
        if (!bVar6) {
          uVar10 = (ulong)uVar3 & 0xffff | 0xffffffffffff0000;
        }
        uVar10 = uVar10 + *(long *)(param_1 + 0x550);
      }
      plVar9 = *(long **)(param_1 + 0x568);
      plVar7 = *(long **)(param_1 + 0x560);
      *(ulong *)(param_1 + 0x550) = uVar10;
      *(ushort *)(param_1 + 0x558) = uVar2;
      *(undefined1 *)(param_1 + 0x55a) = 1;
      plVar12 = (long *)(param_1 + 0x568);
      while( true ) {
        if (plVar9 == (long *)0x0) goto joined_r0x00609be0;
        puVar1 = (ulong *)(plVar9 + 4);
        plVar11 = plVar9;
        if (((long)*puVar1 <= (long)uVar10) &&
           (plVar9 = plVar9 + 1, plVar11 = plVar12, uVar10 == *puVar1)) break;
        plVar9 = (long *)*plVar9;
        plVar12 = plVar11;
      }
      plVar9 = (long *)*plVar9;
      while (plVar11 = plVar9, plVar11 != (long *)0x0) {
        plVar12 = plVar11;
        plVar9 = (long *)*plVar11;
      }
joined_r0x00609be0:
      for (; plVar7 != plVar12; plVar7 = (long *)FUN_0060bf94(param_1 + 0x560,plVar7)) {
      }
      FUN_009916fc(param_1 + 0x278,uVar2);
      FUN_00937624(*(undefined8 *)(param_1 + 0x348),uVar2);
      return;
    }
    puVar8 = (undefined8 *)puVar8[1];
  }
  if (puVar8 == (undefined8 *)0x0) {
    return;
  }
  goto LAB_00609a48;
}


// ===== 00609c38  FUN_00609c38 =====

void FUN_00609c38(long param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00864f38(*(undefined8 *)(param_1 + 0x1f0),0);
    return;
  }
  FUN_00864f38(*(undefined8 *)(param_1 + 0x1f0),*(undefined4 *)(*(long *)(param_1 + 0x70) + 0x2c));
  return;
}


// ===== 00609c5c  FUN_00609c5c =====

void FUN_00609c5c(long param_1)

{
  byte bVar1;
  void *pvVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x2e0) == 0) {
    bVar1 = *(byte *)(param_1 + 0x598);
    pvVar2 = operator_new(0x4070);
    FUN_0098e20c(pvVar2,(bVar1 ^ 0xff) & 1);
    lVar3 = *(long *)(param_1 + 0x2e0);
    *(void **)(param_1 + 0x2e0) = pvVar2;
    if (lVar3 != 0) {
      FUN_0060ba78(param_1 + 0x2e0);
    }
  }
  if (((*(byte *)(param_1 + 0x1e0) & 1) == 0) && (*(long *)(param_1 + 0x78) != 0)) {
    FUN_008e6d4c(*(long *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x1f0));
    FUN_008e6c58(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x1f0),1);
  }
  *(undefined1 *)(param_1 + 0x1e0) = 1;
  return;
}


// ===== 00609cf0  FUN_00609cf0 =====

void FUN_00609cf0(long param_1)

{
  if ((*(char *)(param_1 + 0x1e0) == '\x01') && (*(long *)(param_1 + 0x78) != 0)) {
    FUN_008e6d4c(*(long *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x1f0));
    FUN_008e6c58(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x1f0),0);
  }
  *(undefined1 *)(param_1 + 0x1e0) = 0;
  return;
}


// ===== 00609d44  FUN_00609d44 =====

void FUN_00609d44(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[7];
  *param_1 = &PTR_FUN_00d27130;
  param_1[1] = &PTR_FUN_00d27168;
  param_1[2] = &PTR_FUN_00d27190;
  if (pvVar1 != (void *)0x0) {
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
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -2);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[8] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00609e10  FUN_00609e10 =====

void FUN_00609e10(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[6];
  param_1[-1] = &PTR_FUN_00d27130;
  *param_1 = &PTR_FUN_00d27168;
  param_1[1] = &PTR_FUN_00d27190;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = (void *)param_1[7];
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
      param_1[7] = pvVar1;
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


// ===== 00609ec8  FUN_00609ec8 =====

void FUN_00609ec8(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[6];
  param_1[-1] = &PTR_FUN_00d27130;
  *param_1 = &PTR_FUN_00d27168;
  param_1[1] = &PTR_FUN_00d27190;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[7];
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
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -2);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[7] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1 + -1);
  return;
}


// ===== 00609f98  FUN_00609f98 =====

void FUN_00609f98(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[5];
  param_1[-2] = &PTR_FUN_00d27130;
  param_1[-1] = &PTR_FUN_00d27168;
  *param_1 = &PTR_FUN_00d27190;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = (void *)param_1[6];
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
      param_1[6] = pvVar1;
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


// ===== 0060a050  FUN_0060a050 =====

void FUN_0060a050(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[5];
  param_1[-2] = &PTR_FUN_00d27130;
  param_1[-1] = &PTR_FUN_00d27168;
  *param_1 = &PTR_FUN_00d27190;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[6];
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
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -2);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[6] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1 + -2);
  return;
}


// ===== 0060a120  FUN_0060a120 =====

undefined2 *
FUN_0060a120(long *param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,long param_5)

{
  ulong uVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  size_t sVar6;
  size_t __n;
  ulong uVar7;
  undefined2 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined2 *puVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined2 *puVar17;
  ulong uVar18;
  undefined2 *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  puVar19 = param_2;
  if (0 < param_5) {
    puVar2 = (undefined2 *)param_1[1];
    if (param_1[2] - (long)puVar2 >> 1 < param_5) {
      lVar20 = *param_1;
      uVar1 = param_5 + ((long)puVar2 - lVar20 >> 1);
      if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d4754();
      }
      uVar9 = param_1[2] - lVar20;
      uVar18 = uVar9;
      if (uVar9 <= uVar1) {
        uVar18 = uVar1;
      }
      if (0x7ffffffffffffffd < uVar9) {
        uVar18 = 0x7fffffffffffffff;
      }
      if (uVar18 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        if ((long)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_005d55a4();
        }
        pvVar4 = operator_new(uVar18 << 1);
      }
      uVar7 = lVar20 - ((long)pvVar4 + (long)param_2);
      uVar9 = uVar7 >> 1;
      uVar15 = param_5 * 2 - 2U >> 1;
      lVar10 = (long)param_2 - lVar20;
      puVar19 = (undefined2 *)((long)pvVar4 + lVar10);
      puVar2 = puVar19 + param_5;
      uVar1 = uVar9;
      if (uVar15 <= uVar9) {
        uVar1 = uVar15;
      }
      puVar8 = puVar19;
      if (0x27 < uVar1) {
        if (uVar15 <= uVar9) {
          uVar9 = uVar15;
        }
        if (((puVar19 <= puVar19 + uVar9) && ((uVar7 & 1) == 0)) &&
           ((param_3 <= param_3 + uVar9 &&
            (puVar8 = (undefined2 *)((long)pvVar4 + lVar10),
            0x1f < (ulong)((((long)pvVar4 + (long)param_2) - (long)param_3) - lVar20))))) {
          uVar9 = uVar1 + 1 & 0xf;
          puVar16 = (undefined8 *)((long)pvVar4 + lVar10 + 0x10);
          uVar7 = 0x10;
          if (uVar9 != 0) {
            uVar7 = uVar9;
          }
          lVar20 = (uVar1 + 1) - uVar7;
          puVar8 = puVar19 + lVar20;
          puVar14 = param_3 + lVar20;
          puVar12 = (undefined8 *)(param_3 + 8);
          do {
            puVar3 = puVar12 + -1;
            uVar21 = puVar12[-2];
            uVar23 = puVar12[1];
            uVar22 = *puVar12;
            lVar20 = lVar20 + -0x10;
            puVar12 = puVar12 + 4;
            puVar16[-1] = *puVar3;
            puVar16[-2] = uVar21;
            puVar16[1] = uVar23;
            *puVar16 = uVar22;
            puVar16 = puVar16 + 4;
            param_3 = puVar14;
          } while (lVar20 != 0);
        }
      }
      do {
        if (puVar8 == (undefined2 *)0x0) {
LAB_0060a4a4:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar14 = puVar8 + 1;
        *puVar8 = *param_3;
        puVar8 = puVar14;
        param_3 = param_3 + 1;
      } while (puVar14 != puVar2);
      memcpy(puVar2,param_2,param_1[1] - (long)param_2);
      lVar20 = param_1[1];
      param_1[1] = (long)param_2;
      sVar6 = (long)param_2 - *param_1;
      memcpy((void *)((long)puVar19 - sVar6),(void *)*param_1,sVar6);
      pvVar5 = (void *)*param_1;
      *param_1 = (long)puVar19 - sVar6;
      param_1[1] = (long)puVar2 + (lVar20 - (long)param_2);
      param_1[2] = (long)((long)pvVar4 + uVar18 * 2);
      if (pvVar5 != (void *)0x0) {
        operator_delete(pvVar5);
      }
    }
    else {
      sVar6 = (long)puVar2 - (long)param_2;
      if ((long)sVar6 >> 1 < param_5) {
        puVar8 = (undefined2 *)((long)param_3 + sVar6);
        puVar14 = puVar2;
        if (puVar8 != param_4) {
          uVar9 = ((((long)param_4 + (long)param_2) - (long)param_3) - (long)puVar2) - 2;
          uVar18 = uVar9 >> 1;
          uVar1 = uVar18;
          if ((ulong)-(long)puVar2 >> 1 <= uVar18) {
            uVar1 = (ulong)-(long)puVar2 >> 1;
          }
          puVar13 = puVar2;
          puVar17 = puVar2;
          if (0x27 < uVar1) {
            if ((ulong)-(long)puVar2 >> 1 <= uVar18) {
              uVar18 = (ulong)-(long)puVar2 >> 1;
            }
            if (((((((uint)uVar9 | (uint)puVar2) & 1) == 0) && (puVar2 <= puVar2 + uVar18)) &&
                (puVar8 <= puVar8 + uVar18)) && (0x1f < (ulong)((long)param_2 - (long)param_3))) {
              uVar18 = uVar1 + 1 & 0xf;
              uVar9 = 0x10;
              if (uVar18 != 0) {
                uVar9 = uVar18;
              }
              puVar16 = (undefined8 *)(puVar2 + 8);
              lVar20 = (uVar1 + 1) - uVar9;
              puVar12 = (undefined8 *)((long)param_3 + ((long)puVar16 - (long)param_2));
              puVar8 = puVar8 + lVar20;
              puVar13 = puVar2 + lVar20;
              do {
                puVar3 = puVar12 + -1;
                uVar21 = puVar12[-2];
                uVar23 = puVar12[1];
                uVar22 = *puVar12;
                lVar20 = lVar20 + -0x10;
                puVar12 = puVar12 + 4;
                puVar16[-1] = *puVar3;
                puVar16[-2] = uVar21;
                puVar16[1] = uVar23;
                *puVar16 = uVar22;
                puVar16 = puVar16 + 4;
                puVar17 = puVar13;
              } while (lVar20 != 0);
            }
          }
          do {
            if (puVar17 == (undefined2 *)0x0) goto LAB_0060a4a4;
            puVar11 = puVar8 + 1;
            *puVar17 = *puVar8;
            puVar8 = puVar11;
            puVar14 = puVar13 + 1;
            puVar13 = puVar13 + 1;
            puVar17 = puVar17 + 1;
          } while (puVar11 != param_4);
        }
        param_1[1] = (long)puVar14;
        if ((long)sVar6 >> 1 < 1) {
          return param_2;
        }
        puVar13 = puVar14;
        for (puVar8 = puVar14 + -param_5; puVar8 < puVar2; puVar8 = puVar8 + 1) {
          if (puVar13 == (undefined2 *)0x0) goto LAB_0060a4a4;
          *puVar13 = *puVar8;
          puVar13 = puVar13 + 1;
        }
        param_1[1] = (long)puVar13;
        __n = (long)puVar14 + (param_5 * -2 - (long)param_2);
        memmove((void *)((long)puVar14 - __n),param_2,__n);
      }
      else {
        sVar6 = param_5 * 2;
        puVar8 = puVar2;
        for (puVar14 = puVar2 + -param_5; puVar14 < puVar2; puVar14 = puVar14 + 1) {
          if (puVar8 == (undefined2 *)0x0) goto LAB_0060a4a4;
          *puVar8 = *puVar14;
          puVar8 = puVar8 + 1;
        }
        param_1[1] = (long)puVar8;
        memmove((void *)((long)puVar2 - ((long)puVar2 - (long)(param_2 + param_5))),param_2,
                (long)puVar2 - (long)(param_2 + param_5));
      }
      memmove(param_2,param_3,sVar6);
    }
  }
  return puVar19;
}


// ===== 0060a4c0  FUN_0060a4c0 =====

void FUN_0060a4c0(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_0060a4c0(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar1 = (void *)param_2[8];
      puVar2 = (undefined8 *)param_2[1];
      param_2[8] = 0;
      if (pvVar1 != (void *)0x0) {
        operator_delete__(pvVar1);
      }
      operator_delete(param_2);
      param_2 = puVar2;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}


// ===== 0060a54c  FUN_0060a54c =====

void FUN_0060a54c(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_0060a54c(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar1 = (void *)param_2[8];
      puVar2 = (undefined8 *)param_2[1];
      param_2[8] = 0;
      if (pvVar1 != (void *)0x0) {
        operator_delete__(pvVar1);
      }
      operator_delete(param_2);
      param_2 = puVar2;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}


// ===== 0060a5d8  FUN_0060a5d8 =====

void FUN_0060a5d8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_0060a5d8(param_1,*param_2);
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


// ===== 0060a64c  FUN_0060a64c =====

long FUN_0060a64c(long param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x44);
  if (cVar1 == *(char *)(param_2 + 0x44)) {
    if (cVar1 != '\0') {
      FUN_00659b1c(param_1);
    }
  }
  else if (cVar1 == '\0') {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_00659adc(param_1);
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x44) = 0;
  }
  return param_1;
}


// ===== 0060a6c8  FUN_0060a6c8 =====

void FUN_0060a6c8(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  cVar1 = *(char *)(param_1 + 6);
  if (cVar1 == *(char *)(param_2 + 6)) {
    if (cVar1 != '\0') {
      uVar7 = param_2[1];
      uVar4 = *param_2;
      pvVar2 = (void *)param_1[3];
      param_1[2] = param_2[2];
      param_1[1] = uVar7;
      *param_1 = uVar4;
      if (pvVar2 != (void *)0x0) {
        pvVar3 = (void *)param_1[4];
        uVar6 = (ulong)((long)pvVar3 + (-8 - ((long)pvVar3 << 0x3d))) >> 3;
        uVar5 = (ulong)(((long)pvVar2 - (long)pvVar3 << 0x3d) - ((long)pvVar2 - (long)pvVar3)) >> 3;
        if (uVar6 <= uVar5) {
          uVar5 = uVar6;
        }
        if ((1 < uVar5) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 7U) == 0)) {
          uVar5 = uVar5 & 0x1ffffffffffffffe;
          pvVar3 = (void *)((long)pvVar3 + uVar5 * -8);
          do {
            uVar5 = uVar5 - 2;
          } while (uVar5 != 0);
        }
        do {
          if (pvVar3 == pvVar2) {
            param_1[4] = pvVar2;
            operator_delete(pvVar2);
            param_1[3] = 0;
            param_1[4] = 0;
            param_1[5] = 0;
            goto LAB_0060a85c;
          }
          pvVar3 = (void *)((long)pvVar3 + -8);
        } while (pvVar3 != (void *)0x0);
LAB_0060a7ec:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
LAB_0060a85c:
      param_1[3] = param_2[3];
      param_1[4] = param_2[4];
      param_1[5] = param_2[5];
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
    }
  }
  else if (cVar1 == '\0') {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar8 = param_2[1];
    uVar7 = *param_2;
    uVar4 = param_2[2];
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[1] = uVar8;
    *param_1 = uVar7;
    param_1[2] = uVar4;
    param_1[3] = 0;
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  else {
    pvVar2 = (void *)param_1[3];
    if (pvVar2 != (void *)0x0) {
      pvVar3 = (void *)param_1[4];
      uVar6 = (ulong)((long)pvVar3 + (-8 - ((long)pvVar3 << 0x3d))) >> 3;
      uVar5 = (ulong)(((long)pvVar2 - (long)pvVar3 << 0x3d) - ((long)pvVar2 - (long)pvVar3)) >> 3;
      if (uVar6 <= uVar5) {
        uVar5 = uVar6;
      }
      if ((1 < uVar5) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 7U) == 0)) {
        uVar5 = uVar5 & 0x1ffffffffffffffe;
        pvVar3 = (void *)((long)pvVar3 + uVar5 * -8);
        do {
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
      do {
        if (pvVar3 == pvVar2) {
          param_1[4] = pvVar2;
          operator_delete(pvVar2);
          goto LAB_0060a890;
        }
        pvVar3 = (void *)((long)pvVar3 + -8);
      } while (pvVar3 != (void *)0x0);
      goto LAB_0060a7ec;
    }
LAB_0060a890:
    *(undefined1 *)(param_1 + 6) = 0;
  }
  return;
}


// ===== 0060a8bc  FUN_0060a8bc =====

undefined8 * FUN_0060a8bc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  uVar3 = *param_2;
  *param_2 = 0;
  pvVar4 = (void *)*param_1;
  *param_1 = uVar3;
  if ((pvVar4 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,(long)pvVar4 + 0x18), iVar1 == 1))
  {
    pvVar2 = *(void **)((long)pvVar4 + 0x10);
    *(undefined8 *)((long)pvVar4 + 0x10) = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    operator_delete(pvVar4);
  }
  return param_1;
}


// ===== 0060a928  FUN_0060a928 =====

long * FUN_0060a928(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  size_t __n;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  void *__dest;
  
  plVar9 = (long *)(param_1[1] - *param_1);
  uVar1 = ((long)plVar9 >> 4) + 1;
  if (uVar1 >> 0x3c != 0) {
    FUN_0060aa38();
LAB_0060aa34:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar5 = param_1[2] - *param_1;
  uVar7 = (long)uVar5 >> 3;
  if (uVar7 <= uVar1) {
    uVar7 = uVar1;
  }
  if (0x7fffffffffffffef < uVar5) {
    uVar7 = 0xfffffffffffffff;
  }
  if (uVar7 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar7 >> 0x3c != 0) goto LAB_0060aa34;
    pvVar3 = operator_new(uVar7 << 4);
    plVar9 = (long *)((long)pvVar3 + (long)plVar9);
  }
  if (plVar9 != (long *)0x0) {
    lVar6 = *param_2;
    if (lVar6 != 0) {
      lVar6 = *(long *)(lVar6 + 0x10) + param_2[1];
    }
    lVar8 = param_2[2];
    lVar2 = 0;
    if (lVar8 != 0) {
      lVar2 = lVar6;
    }
    *plVar9 = lVar2;
    plVar9[1] = lVar8;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)plVar9 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar4 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(plVar9 + 2);
    param_1[2] = (long)((long)pvVar3 + uVar7 * 0x10);
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
    return plVar9 + 2;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0060aa38  FUN_0060aa38 =====

void FUN_0060aa38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0060aa50  FUN_0060aa50 =====

undefined4 * FUN_0060aa50(long *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  void *__src;
  undefined4 uVar2;
  void *__dest;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  void *local_60;
  undefined4 *local_58;
  void *local_50;
  void *local_48;
  
  lVar6 = param_1[1] - *param_1;
  uVar3 = (lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5 + 1;
  if (0x276276276276276 < uVar3) {
    FUN_005da784();
LAB_0060abf8:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  local_58 = (undefined4 *)0x0;
  local_50 = (void *)0x0;
  local_60 = (void *)0x0;
  lVar4 = param_1[2] - *param_1 >> 3;
  uVar5 = lVar4 * -0x6276276276276276;
  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
    uVar5 = uVar3;
  }
  if (0x13b13b13b13b13a < (ulong)(lVar4 * 0x4ec4ec4ec4ec4ec5)) {
    uVar5 = 0x276276276276276;
  }
  if (uVar5 != 0) {
    if (0x276276276276276 < uVar5) goto LAB_0060abf8;
    local_60 = operator_new(uVar5 * 0x68);
  }
  puVar1 = (undefined4 *)((long)local_60 + lVar6);
  local_48 = (void *)((long)local_60 + uVar5 * 0x68);
  local_58 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar2 = *param_2;
  *(undefined8 *)(puVar1 + 4) = 0;
  *(undefined8 *)(puVar1 + 6) = 0;
  *(undefined8 *)(puVar1 + 2) = 0;
  *puVar1 = uVar2;
  __src = *(void **)(param_2 + 2);
  uVar3 = *(long *)(param_2 + 4) - (long)__src;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005da79c();
    }
    __dest = operator_new(uVar3);
    *(void **)(puVar1 + 2) = __dest;
    *(void **)(puVar1 + 4) = __dest;
    *(ulong *)(puVar1 + 6) = (long)__dest + uVar3;
    memcpy(__dest,__src,uVar3);
    *(ulong *)(puVar1 + 4) = (long)__dest + uVar3;
  }
  uVar9 = *(undefined8 *)(param_2 + 8);
  uVar8 = *(undefined8 *)(param_2 + 0xe);
  uVar7 = *(undefined8 *)(param_2 + 0xc);
  uVar11 = *(undefined8 *)(param_2 + 0x12);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x16);
  uVar12 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(puVar1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(puVar1 + 8) = uVar9;
  *(undefined8 *)(puVar1 + 0xe) = uVar8;
  *(undefined8 *)(puVar1 + 0xc) = uVar7;
  *(undefined8 *)(puVar1 + 0x12) = uVar11;
  *(undefined8 *)(puVar1 + 0x10) = uVar10;
  *(undefined8 *)(puVar1 + 0x16) = uVar13;
  *(undefined8 *)(puVar1 + 0x14) = uVar12;
  *(undefined1 *)(puVar1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  lVar6 = (long)local_58 + (*param_1 - param_1[1]);
  FUN_005db200(param_1,*param_1,param_1[1],lVar6);
  local_60 = (void *)*param_1;
  lVar4 = param_1[2];
  *param_1 = lVar6;
  param_1[1] = (long)(puVar1 + 0x1a);
  param_1[2] = (long)local_48;
  local_58 = (undefined4 *)local_60;
  local_50 = local_60;
  local_48 = (void *)lVar4;
  FUN_005db0f0(&local_60);
  return puVar1 + 0x1a;
}


// ===== 0060ac00  FUN_0060ac00 =====

long FUN_0060ac00(long *param_1,undefined8 param_2)

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
  uVar3 = (lVar6 >> 4) * -0x71c71c71c71c71c7 + 1;
  if (uVar3 < 0x1c71c71c71c71c8) {
    lVar4 = param_1[2] - *param_1 >> 4;
    uVar5 = lVar4 * 0x1c71c71c71c71c72;
    if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
      uVar5 = uVar3;
    }
    if (0xe38e38e38e38e2 < (ulong)(lVar4 * -0x71c71c71c71c71c7)) {
      uVar5 = 0x1c71c71c71c71c7;
    }
    if (uVar5 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0x1c71c71c71c71c7 < uVar5) goto LAB_0060ada8;
      pvVar2 = operator_new(uVar5 * 0x90);
      lVar6 = (long)pvVar2 + lVar6;
    }
    if (lVar6 == 0) {
LAB_0060ad7c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_007dc0a0(lVar6,param_2);
    pvVar7 = (void *)*param_1;
    pvVar1 = (void *)param_1[1];
    lVar4 = (long)pvVar7 + (lVar6 - (long)pvVar1);
    pvVar8 = pvVar7;
    lVar9 = lVar4;
    if (pvVar1 != pvVar7) {
      do {
        if (lVar9 == 0) goto LAB_0060ad7c;
        FUN_007dc0f4(lVar9,pvVar8);
        pvVar8 = (void *)((long)pvVar8 + 0x90);
        lVar9 = lVar9 + 0x90;
      } while (pvVar8 != pvVar1);
      do {
        if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_007dc1b4(pvVar7);
        pvVar7 = (void *)((long)pvVar7 + 0x90);
      } while (pvVar7 != pvVar1);
      pvVar7 = (void *)*param_1;
    }
    *param_1 = lVar4;
    param_1[1] = lVar6 + 0x90;
    param_1[2] = (long)((long)pvVar2 + uVar5 * 0x90);
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
    return lVar6 + 0x90;
  }
  FUN_0060adac();
LAB_0060ada8:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 0060adac  FUN_0060adac =====

void FUN_0060adac(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0060adc4  FUN_0060adc4 =====

void FUN_0060adc4(ulong *param_1,undefined4 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  bool bVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined4 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong *puVar18;
  void *pvVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined8 uVar24;
  ulong uVar25;
  
  puVar9 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar7 = 10;
    if (10 < param_3) goto LAB_0060ae54;
LAB_0060ae00:
    uVar8 = *param_1 >> 1;
    pvVar4 = (void *)((long)puVar9 + uVar8 * 4);
    bVar3 = uVar8 <= param_3;
    uVar7 = param_3;
    if (bVar3) {
      uVar7 = uVar8;
    }
    uVar5 = 0;
    if (bVar3) {
      uVar5 = param_3 - uVar8;
    }
    if (!bVar3 || param_3 - uVar8 == 0) {
      pvVar4 = (void *)0x0;
    }
    if (uVar7 != 0) {
      if (uVar7 < 0x18) {
LAB_0060ae28:
        uVar16 = 0;
      }
      else {
        uVar12 = uVar7 - 1;
        if (((((ulong *)((long)puVar9 + uVar12 * 4) < puVar9) || (param_2 + uVar12 < param_2)) ||
            (uVar12 >> 0x3e != 0)) || ((ulong)((long)puVar9 - (long)param_2) < 0x20))
        goto LAB_0060ae28;
        uVar16 = uVar7 & 0x7ffffffffffffff8;
        puVar17 = (ulong *)(param_2 + 4);
        puVar18 = puVar9 + 2;
        param_2 = param_2 + uVar16;
        uVar12 = uVar7 & 0x7ffffffffffffff8;
        do {
          puVar2 = puVar17 + -1;
          uVar21 = puVar17[-2];
          uVar25 = puVar17[1];
          uVar23 = *puVar17;
          uVar12 = uVar12 - 8;
          puVar17 = puVar17 + 4;
          puVar18[-1] = *puVar2;
          puVar18[-2] = uVar21;
          puVar18[1] = uVar25;
          *puVar18 = uVar23;
          puVar18 = puVar18 + 4;
        } while (uVar12 != 0);
        if (uVar7 == uVar16) goto LAB_0060ae80;
      }
      lVar11 = uVar7 - uVar16;
      puVar10 = (undefined4 *)((long)puVar9 + uVar16 * 4);
      puVar14 = param_2;
      do {
        param_2 = puVar14 + 1;
        lVar11 = lVar11 + -1;
        *puVar10 = *puVar14;
        puVar10 = puVar10 + 1;
        puVar14 = param_2;
      } while (lVar11 != 0);
    }
LAB_0060ae80:
    if (param_3 <= uVar8) {
      uVar8 = *param_1;
      goto LAB_0060af84;
    }
    uVar7 = 0;
    pvVar19 = (void *)0x0;
  }
  else {
    puVar9 = (ulong *)param_1[1];
    uVar7 = param_1[2];
    if (param_3 <= uVar7) goto LAB_0060ae00;
LAB_0060ae54:
    uVar7 = uVar7 * 2;
    if (uVar7 < param_3 || uVar7 - param_3 == 0) {
      uVar7 = param_3;
    }
    if (uVar7 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar4 = operator_new(uVar7 << 2);
    uVar5 = param_3;
    pvVar19 = pvVar4;
  }
  uVar12 = uVar5 - 1;
  uVar8 = (ulong)-(long)pvVar4 >> 2;
  if (uVar12 <= (ulong)-(long)pvVar4 >> 2) {
    uVar8 = uVar12;
  }
  if (uVar8 < 0x20) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    uVar16 = (ulong)-(long)pvVar4 >> 2;
    if (uVar12 <= uVar16) {
      uVar16 = uVar12;
    }
    if ((((-(long)pvVar4 & 3U) == 0) && (pvVar4 <= (void *)((long)pvVar4 + uVar16 * 4))) &&
       ((param_2 <= param_2 + uVar16 && (0x1f < (ulong)((long)pvVar4 - (long)param_2))))) {
      puVar15 = (undefined8 *)((long)pvVar4 + 0x10);
      uVar12 = uVar8 + 1 & 7;
      uVar16 = 8;
      if (uVar12 != 0) {
        uVar16 = uVar12;
      }
      puVar13 = (undefined8 *)(param_2 + 4);
      lVar11 = (uVar8 + 1) - uVar16;
      param_2 = param_2 + lVar11;
      lVar6 = lVar11;
      do {
        puVar1 = puVar13 + -1;
        uVar20 = puVar13[-2];
        uVar24 = puVar13[1];
        uVar22 = *puVar13;
        lVar6 = lVar6 + -8;
        puVar13 = puVar13 + 4;
        puVar15[-1] = *puVar1;
        puVar15[-2] = uVar20;
        puVar15[1] = uVar24;
        *puVar15 = uVar22;
        puVar15 = puVar15 + 4;
      } while (lVar6 != 0);
    }
  }
  lVar6 = uVar5 - lVar11;
  puVar10 = (undefined4 *)((long)pvVar4 + lVar11 * 4);
  do {
    if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    lVar6 = lVar6 + -1;
    *puVar10 = *param_2;
    puVar10 = puVar10 + 1;
    param_2 = param_2 + 1;
  } while (lVar6 != 0);
  uVar8 = *param_1;
  if (pvVar19 != (void *)0x0) {
    if ((uVar8 & 1) != 0) {
      operator_delete((void *)param_1[1]);
      uVar8 = *param_1;
    }
    uVar8 = uVar8 | 1;
    param_1[1] = (ulong)pvVar19;
    param_1[2] = uVar7;
  }
LAB_0060af84:
  *param_1 = uVar8 & 1 | param_3 << 1;
  return;
}


// ===== 0060b02c  FUN_0060b02c =====

void FUN_0060b02c(long param_1)

{
  byte bVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar3 = *(void **)(param_1 + 0x68);
  if (pvVar3 != (void *)0x0) {
    pvVar2 = pvVar3;
    pvVar4 = *(void **)(param_1 + 0x70);
    if (pvVar3 != *(void **)(param_1 + 0x70)) {
      do {
        pvVar2 = (void *)((long)pvVar4 + -0x68);
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((*(byte *)((long)pvVar4 + -0x18) & 1) == 0) {
          if ((*(byte *)((long)pvVar4 + -0x30) & 1) == 0) goto LAB_0060b084;
LAB_0060b0a4:
          operator_delete(*(void **)((long)pvVar4 + -0x28));
          bVar1 = *(byte *)((long)pvVar4 + -0x60);
        }
        else {
          operator_delete(*(void **)((long)pvVar4 + -0x10));
          if ((*(byte *)((long)pvVar4 + -0x30) & 1) != 0) goto LAB_0060b0a4;
LAB_0060b084:
          bVar1 = *(byte *)((long)pvVar4 + -0x60);
        }
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)((long)pvVar4 + -0x58));
        }
        pvVar4 = pvVar2;
      } while (pvVar2 != pvVar3);
      pvVar2 = *(void **)(param_1 + 0x68);
    }
    *(void **)(param_1 + 0x70) = pvVar3;
    operator_delete(pvVar2);
  }
  if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x48));
  }
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 0060b13c  FUN_0060b13c =====

void FUN_0060b13c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_0060b13c(param_1,*param_2);
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


// ===== 0060b1b0  FUN_0060b1b0 =====

void FUN_0060b1b0(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_0060b1b0(param_1,*param_2);
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


// ===== 0060b244  FUN_0060b244 =====

void FUN_0060b244(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *local_18;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_0060b244(param_1,*param_2);
    if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    uVar1 = param_2[1];
    local_18 = param_2 + 5;
    FUN_0060b2cc(&local_18,param_2[6]);
    operator_delete(param_2);
    FUN_0060b244(param_1,uVar1);
  }
  return;
}


// ===== 0060b2cc  FUN_0060b2cc =====

void FUN_0060b2cc(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_0060b2cc(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar2 = (undefined8 *)param_2[1];
      if (*(char *)((long)param_2 + 0x4f) < '\0') {
        operator_delete((void *)param_2[7]);
        cVar1 = *(char *)((long)param_2 + 0x37);
      }
      else {
        cVar1 = *(char *)((long)param_2 + 0x37);
      }
      if (cVar1 < '\0') {
        operator_delete((void *)param_2[4]);
      }
      operator_delete(param_2);
      param_2 = puVar2;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}


// ===== 0060b384  FUN_0060b384 =====

void FUN_0060b384(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_0060b384(param_1,*param_2);
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


// ===== 0060b3f8  FUN_0060b3f8 =====

void FUN_0060b3f8(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_0060b3f8(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
LAB_0060b4d8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar1 = (void *)param_2[6];
      puVar5 = (undefined8 *)param_2[1];
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)param_2[7];
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
          if (pvVar2 == (void *)0x0) goto LAB_0060b4d8;
        }
        param_2[7] = pvVar1;
        operator_delete(pvVar1);
      }
      operator_delete(param_2);
      param_2 = puVar5;
    } while (puVar5 != (undefined8 *)0x0);
  }
  return;
}


// ===== 0060b4ec  FUN_0060b4ec =====

void FUN_0060b4ec(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x34);
  return;
}


// ===== 0060b510  FUN_0060b510 =====

bool FUN_0060b510(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,(long)param_1 + 0x34);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 0060b568  FUN_0060b568 =====

void FUN_0060b568(long *param_1)

{
  *param_1 = (long)(PTR_DAT_00d52018 + 0x10);
  if ((long *)param_1[2] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0060b590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[2] + 8))();
    return;
  }
  return;
}


// ===== 0060b598  FUN_0060b598 =====

void FUN_0060b598(long *param_1)

{
  *param_1 = (long)(PTR_DAT_00d52018 + 0x10);
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  operator_delete(param_1);
  return;
}


// ===== 0060b5e8  FUN_0060b5e8 =====

bool FUN_0060b5e8(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x34) == 1;
}


// ===== 0060b600  FUN_0060b600 =====

undefined1  [16]
FUN_0060b600(undefined8 param_1,long *param_2,undefined8 param_3,byte *param_4,long *param_5)

{
  byte bVar1;
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
      while (plVar3 = plVar2, plVar4 = plVar3, *param_4 < *(byte *)(plVar3 + 4)) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_0060b66c;
      }
      if (*param_4 == *(byte *)(plVar3 + 4)) {
        uVar5 = 0;
        goto LAB_0060b6e4;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_0060b66c:
  plVar3 = (long *)operator_new(0x30);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  bVar1 = *param_4;
  lVar6 = *param_5;
  *param_5 = 0;
  *(byte *)(plVar3 + 4) = bVar1;
  plVar3[5] = lVar6;
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
LAB_0060b6e4:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 0060b714  FUN_0060b714 =====

undefined1  [16] FUN_0060b714(undefined8 *param_1,byte *param_2,undefined1 *param_3,long param_4)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  
  plVar8 = (long *)*param_1;
  plVar3 = plVar8 + 1;
  plVar9 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar6 = (long *)*plVar3;
    do {
      while (plVar2 = plVar6, plVar3 = plVar2, *param_2 < *(byte *)(plVar2 + 4)) {
        plVar6 = (long *)*plVar2;
        plVar9 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_0060b780;
      }
      if (*param_2 == *(byte *)(plVar2 + 4)) {
        uVar4 = 0;
        goto LAB_0060b838;
      }
      plVar6 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar9 = plVar2 + 1;
  }
LAB_0060b780:
  plVar2 = (long *)operator_new(0x40);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar1 = *param_3;
  lVar5 = *(long *)(param_4 + 0x10);
  plVar7 = plVar2 + 6;
  *plVar7 = 0;
  plVar6 = plVar2 + 5;
  *plVar6 = (long)plVar7;
  *(undefined1 *)(plVar2 + 4) = uVar1;
  plVar2[7] = 0;
  if (lVar5 != 0) {
    lVar5 = FUN_0060b868(plVar6,*(undefined8 *)(param_4 + 8),plVar6);
    *plVar7 = lVar5;
    *(long **)(lVar5 + 0x10) = plVar7;
    plVar6 = (long *)*plVar7;
    do {
      plVar7 = plVar6;
      plVar6 = (long *)*plVar7;
    } while (plVar6 != (long *)0x0);
    lVar5 = *(long *)(param_4 + 0x10);
    plVar2[5] = (long)plVar7;
    plVar2[7] = lVar5;
  }
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar3;
  *plVar9 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*plVar8 != 0) {
    *plVar8 = *(long *)*plVar8;
    plVar3 = (long *)*plVar9;
  }
  FUN_005d5b94(plVar8[1],plVar3);
  uVar4 = 1;
  plVar8[2] = plVar8[2] + 1;
LAB_0060b838:
  auVar10._8_8_ = uVar4;
  auVar10._0_8_ = plVar2;
  return auVar10;
}


// ===== 0060b868  FUN_0060b868 =====

long * FUN_0060b868(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  if (param_2 == (undefined8 *)0x0) {
    return (long *)0x0;
  }
  plVar3 = (long *)operator_new(0x50);
  if (plVar3 != (long *)0x0) {
    plVar4 = plVar3 + 4;
    *plVar3 = 0;
    if (plVar4 != (long *)0x0) {
      if (*(char *)((long)param_2 + 0x37) < '\0') {
        FUN_005478d8(plVar4,param_2[4],param_2[5]);
        cVar2 = *(char *)((long)param_2 + 0x4f);
      }
      else {
        lVar5 = param_2[4];
        lVar6 = param_2[6];
        plVar3[5] = param_2[5];
        *plVar4 = lVar5;
        plVar3[6] = lVar6;
        cVar2 = *(char *)((long)param_2 + 0x4f);
      }
      if (cVar2 < '\0') {
        FUN_005478d8(plVar3 + 7,param_2[7],param_2[8]);
      }
      else {
        lVar5 = param_2[7];
        lVar6 = param_2[9];
        plVar3[8] = param_2[8];
        plVar3[7] = lVar5;
        plVar3[9] = lVar6;
      }
      lVar6 = FUN_0060b868(param_1,*param_2,param_3);
      lVar5 = FUN_0060b868(param_1,param_2[1],param_3);
      uVar1 = *(undefined1 *)(param_2 + 3);
      *plVar3 = lVar6;
      plVar3[1] = lVar5;
      *(undefined1 *)(plVar3 + 3) = uVar1;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 0x10) = plVar3;
        lVar5 = plVar3[1];
      }
      if (lVar5 != 0) {
        *(long **)(lVar5 + 0x10) = plVar3;
      }
      return plVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0060b974  FUN_0060b974 =====

undefined1  [16]
FUN_0060b974(undefined8 param_1,long *param_2,undefined8 param_3,byte *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  byte bVar2;
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
      while (plVar4 = plVar3, plVar5 = plVar4, *param_4 < *(byte *)((long)plVar4 + 0x1c)) {
        plVar3 = (long *)*plVar4;
        plVar7 = plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_0060b9e0;
      }
      if (*param_4 == *(byte *)((long)plVar4 + 0x1c)) {
        uVar6 = 0;
        goto LAB_0060ba48;
      }
      plVar3 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
    plVar7 = plVar4 + 1;
  }
LAB_0060b9e0:
  plVar4 = (long *)operator_new(0x28);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  bVar2 = *param_4;
  uVar1 = *param_5;
  *plVar4 = 0;
  plVar4[1] = 0;
  *(byte *)((long)plVar4 + 0x1c) = bVar2;
  *(undefined4 *)(plVar4 + 4) = uVar1;
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
LAB_0060ba48:
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = plVar4;
  return auVar8;
}


// ===== 0060ba78  FUN_0060ba78 =====

void FUN_0060ba78(undefined8 param_1,void *param_2)

{
  void *pvVar1;
  long lVar2;
  long local_18;
  
  if (param_2 != (void *)0x0) {
    local_18 = (long)param_2 + 0x4058;
    FUN_0060bb24(&local_18,*(undefined8 *)((long)param_2 + 0x4060));
    local_18 = (long)param_2 + 0x4040;
    FUN_0060bbb0(&local_18,*(undefined8 *)((long)param_2 + 0x4048));
    lVar2 = 0x4000;
    do {
      pvVar1 = *(void **)((long)param_2 + lVar2);
      *(undefined8 *)((long)param_2 + lVar2) = 0;
      if (pvVar1 != (void *)0x0) {
        FUN_007dd190((long)pvVar1 + 0x30);
        FUN_007b5554((long)pvVar1 + 0x18);
        operator_delete(pvVar1);
      }
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
    operator_delete(param_2);
  }
  return;
}


// ===== 0060bb24  FUN_0060bb24 =====

void FUN_0060bb24(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_0060bb24(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar1 = (void *)param_2[7];
      puVar2 = (undefined8 *)param_2[1];
      param_2[7] = 0;
      if (pvVar1 != (void *)0x0) {
        operator_delete__(pvVar1);
      }
      operator_delete(param_2);
      param_2 = puVar2;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}


// ===== 0060bbb0  FUN_0060bbb0 =====

void FUN_0060bbb0(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_0060bbb0(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar1 = (void *)param_2[7];
      puVar2 = (undefined8 *)param_2[1];
      param_2[7] = 0;
      if (pvVar1 != (void *)0x0) {
        operator_delete__(pvVar1);
      }
      operator_delete(param_2);
      param_2 = puVar2;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}


// ===== 0060bc3c  FUN_0060bc3c =====

undefined8 * FUN_0060bc3c(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  
  puVar12 = param_1 + 1;
  uVar11 = *param_1;
  if ((uVar11 & 1) == 0) {
    uVar10 = 10;
  }
  else {
    if ((param_1[2] >> 0x3c & 7) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar12 = (ulong *)param_1[1];
    uVar10 = param_1[2] << 1;
  }
  uVar13 = uVar11 >> 1;
  pvVar3 = operator_new(uVar10 << 3);
  puVar1 = (undefined8 *)((long)pvVar3 + uVar13 * 8);
  if (puVar1 == (undefined8 *)0x0) {
LAB_0060bdb4:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *puVar1 = *param_2;
  if (uVar13 != 0) {
    uVar7 = uVar13 - 1;
    uVar14 = (ulong)-(long)pvVar3 >> 3;
    if (uVar7 <= (ulong)-(long)pvVar3 >> 3) {
      uVar14 = uVar7;
    }
    if (uVar14 < 0x1e) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      uVar9 = (ulong)-(long)pvVar3 >> 3;
      if (uVar7 <= uVar9) {
        uVar9 = uVar7;
      }
      if (((((-(long)pvVar3 & 7U) == 0) && (pvVar3 <= (void *)((long)pvVar3 + uVar9 * 8))) &&
          (puVar12 <= puVar12 + uVar9)) && (0x1f < (ulong)((long)pvVar3 - (long)puVar12))) {
        puVar6 = (ulong *)((long)pvVar3 + 0x10);
        uVar7 = uVar14 + 1 & 3;
        uVar9 = 4;
        if (uVar7 != 0) {
          uVar9 = uVar7;
        }
        puVar8 = puVar12 + 2;
        lVar4 = (uVar14 + 1) - uVar9;
        puVar12 = puVar12 + lVar4;
        lVar5 = lVar4;
        do {
          puVar2 = puVar8 + -1;
          uVar14 = puVar8[-2];
          uVar9 = puVar8[1];
          uVar7 = *puVar8;
          lVar5 = lVar5 + -4;
          puVar8 = puVar8 + 4;
          puVar6[-1] = *puVar2;
          puVar6[-2] = uVar14;
          puVar6[1] = uVar9;
          *puVar6 = uVar7;
          puVar6 = puVar6 + 4;
        } while (lVar5 != 0);
      }
    }
    lVar5 = uVar13 - lVar4;
    puVar6 = (ulong *)((long)pvVar3 + lVar4 * 8);
    do {
      if (puVar6 == (ulong *)0x0) goto LAB_0060bdb4;
      lVar5 = lVar5 + -1;
      *puVar6 = *puVar12;
      puVar6 = puVar6 + 1;
      puVar12 = puVar12 + 1;
    } while (lVar5 != 0);
  }
  if ((uVar11 & 1) != 0) {
    operator_delete((void *)param_1[1]);
    uVar11 = *param_1;
  }
  param_1[1] = (ulong)pvVar3;
  param_1[2] = uVar10;
  *param_1 = (uVar11 | 1) + 2;
  return puVar1;
}


// ===== 0060bdcc  FUN_0060bdcc =====

void FUN_0060bdcc(ulong *param_1)

{
  bool bVar1;
  long *plVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  puVar3 = param_1 + 1;
  uVar4 = *param_1;
  if ((uVar4 & 1) != 0) {
    puVar3 = (ulong *)*puVar3;
  }
  uVar5 = uVar4 >> 1;
  if (uVar5 != 0) {
    puVar3 = puVar3 + uVar5;
    lVar6 = -uVar5;
    do {
      puVar3 = puVar3 + -1;
      if (puVar3 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar2 = (long *)*puVar3;
      *puVar3 = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      bVar1 = lVar6 != -1;
      lVar6 = lVar6 + 1;
    } while (bVar1);
    uVar4 = *param_1;
  }
  if ((uVar4 & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[1]);
  return;
}


// ===== 0060be8c  FUN_0060be8c =====

undefined1  [16]
FUN_0060be8c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  plVar6 = (long *)*param_5;
  plVar3 = param_2 + 1;
  plVar7 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    lVar5 = *plVar6;
    plVar1 = (long *)*plVar3;
    do {
      while (plVar2 = plVar1, plVar3 = plVar2, lVar5 < plVar2[4]) {
        plVar1 = (long *)*plVar2;
        plVar7 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_0060bef4;
      }
      if (lVar5 == plVar2[4]) {
        uVar4 = 0;
        goto LAB_0060bf64;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar7 = plVar2 + 1;
  }
LAB_0060bef4:
  plVar2 = (long *)operator_new(0x30);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  lVar5 = *plVar6;
  *(undefined2 *)(plVar2 + 5) = 0;
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[4] = lVar5;
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
LAB_0060bf64:
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar2;
  return auVar8;
}


// ===== 0060bf94  FUN_0060bf94 =====

undefined8 * FUN_0060bf94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar1 = (undefined8 *)param_2[1];
  puVar7 = param_2;
  if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
    do {
      puVar8 = (undefined8 *)puVar7[2];
      bVar2 = puVar7 != (undefined8 *)*puVar8;
      puVar7 = puVar8;
    } while (bVar2);
  }
  else {
    do {
      puVar8 = puVar1;
      puVar1 = (undefined8 *)*puVar8;
    } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
  }
  if ((undefined8 *)*param_1 == param_2) {
    *param_1 = puVar8;
  }
  param_1[2] = param_1[2] + -1;
  FUN_005d5d48(param_1[1],param_2);
  if (param_2 != (undefined8 *)0xffffffffffffffe0) {
    pvVar3 = (void *)param_2[6];
    if (pvVar3 == (void *)0x0) {
LAB_0060c098:
      operator_delete(param_2);
      return puVar8;
    }
    pvVar4 = (void *)param_2[7];
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
        param_2[7] = pvVar3;
        operator_delete(pvVar3);
        goto LAB_0060c098;
      }
      pvVar4 = (void *)((long)pvVar4 + -4);
    } while (pvVar4 != (void *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0060c0b8  FUN_0060c0b8 =====

void FUN_0060c0b8(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *****ppppplVar1;
  bool bVar2;
  long ****local_48;
  ulong local_40;
  byte bStack_31;
  
  (**(code **)(*param_4 + 0x10))(&local_48,param_4,"WebRTC-GenericDescriptorAuth",0x1c);
  if (-1 < (char)bStack_31) {
    local_40 = (ulong)bStack_31;
  }
  if (local_40 < 8) {
    bVar2 = true;
  }
  else {
    ppppplVar1 = (long *****)local_48;
    if (-1 < (char)bStack_31) {
      ppppplVar1 = &local_48;
    }
    bVar2 = *ppppplVar1 != (long ****)0x64656c6261736944;
  }
  if ((char)bStack_31 < '\0') {
    operator_delete(local_48);
  }
  *param_1 = bVar2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 3;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}


// ===== 0060c1a0  FUN_0060c1a0 =====

void FUN_0060c1a0(long param_1)

{
  FUN_0060c1ec(param_1 + 0x20);
  if (*(long **)(param_1 + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0060c1d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 8))();
    return;
  }
  return;
}


// ===== 0060c1ec  FUN_0060c1ec =====

void FUN_0060c1ec(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar4;
  
  puVar9 = (undefined8 *)param_1[1];
  puVar6 = (undefined8 *)param_1[2];
  puVar4 = puVar9;
  if (puVar9 != puVar6) {
    uVar7 = param_1[4];
    plVar10 = puVar9 + (uVar7 >> 9);
    plVar11 = (long *)(*plVar10 + (uVar7 & 0x1ff) * 8);
    plVar1 = (long *)(puVar9[param_1[5] + uVar7 >> 9] + (param_1[5] + uVar7 & 0x1ff) * 8);
    puVar4 = puVar6;
    if (plVar11 != plVar1) {
      do {
        if (plVar11 == (long *)0x0) goto LAB_0060c390;
        plVar2 = (long *)*plVar11;
        *plVar11 = 0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        plVar11 = plVar11 + 1;
        if ((long)plVar11 - *plVar10 == 0x1000) {
          plVar10 = plVar10 + 1;
          plVar11 = (long *)*plVar10;
        }
      } while (plVar11 != plVar1);
      puVar9 = (undefined8 *)param_1[1];
      puVar6 = (undefined8 *)param_1[2];
      puVar4 = puVar6;
    }
  }
  param_1[5] = 0;
  lVar3 = (long)puVar4 - (long)puVar9;
  while (uVar7 = lVar3 >> 3, 2 < uVar7) {
    operator_delete((void *)*puVar9);
    puVar6 = (undefined8 *)param_1[2];
    puVar9 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = puVar9;
    lVar3 = (long)puVar6 - (long)puVar9;
  }
  if (uVar7 == 1) {
    uVar5 = 0x100;
  }
  else {
    if (uVar7 != 2) goto LAB_0060c308;
    uVar5 = 0x200;
  }
  param_1[4] = uVar5;
LAB_0060c308:
  puVar4 = puVar6;
  if (puVar9 != puVar6) {
    do {
      puVar4 = puVar9 + 1;
      operator_delete((void *)*puVar9);
      puVar9 = puVar4;
    } while (puVar4 != puVar6);
    puVar6 = (undefined8 *)param_1[1];
    puVar4 = (undefined8 *)param_1[2];
  }
  uVar8 = (ulong)((long)puVar4 + (-8 - ((long)puVar4 << 0x3d))) >> 3;
  uVar7 = (ulong)(((long)puVar6 - (long)puVar4 << 0x3d) - ((long)puVar6 - (long)puVar4)) >> 3;
  if (uVar8 <= uVar7) {
    uVar7 = uVar8;
  }
  if ((1 < uVar7) && ((((int)puVar6 - (int)puVar4 | -(int)puVar4) & 7U) == 0)) {
    uVar7 = uVar7 & 0x1ffffffffffffffe;
    puVar4 = puVar4 + -uVar7;
    do {
      uVar7 = uVar7 - 2;
    } while (uVar7 != 0);
  }
  do {
    if (puVar4 == puVar6) {
      param_1[2] = puVar4;
      if ((void *)*param_1 != (void *)0x0) {
        operator_delete((void *)*param_1);
        return;
      }
      return;
    }
    puVar4 = puVar4 + -1;
  } while (puVar4 != (undefined8 *)0x0);
LAB_0060c390:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0060c3f0  FUN_0060c3f0 =====

void FUN_0060c3f0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  *param_2 = 0;
  plVar1 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar2;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0060c414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 0060c41c  FUN_0060c41c =====

void FUN_0060c41c(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  iVar3 = FUN_0060c55c();
  if (iVar3 == 1) {
    FUN_0060c8d4(param_1);
                    /* WARNING: Could not recover jumptable at 0x0060c514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x10))(*(long **)(param_1 + 0x10),param_2);
    return;
  }
  if (iVar3 == 0) {
    uVar6 = *(ulong *)(param_1 + 0x48);
    if (0x17 < uVar6) {
      uVar6 = FUN_004022fc();
      if ((uVar6 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../video/buffered_frame_decryptor.cc",0x1a2,
                     "Encrypted frame stash full poping oldest item.");
      }
      FUN_0060c804(param_1 + 0x20);
      uVar6 = *(ulong *)(param_1 + 0x48);
    }
    lVar4 = *(long *)(param_1 + 0x28);
    lVar5 = *(long *)(param_1 + 0x30);
    lVar2 = 0;
    if (lVar5 != lVar4) {
      lVar2 = (lVar5 - lVar4) * 0x40 + -1;
    }
    if (lVar2 == uVar6 + *(long *)(param_1 + 0x40)) {
      FUN_0060cac8(param_1 + 0x20);
      lVar4 = *(long *)(param_1 + 0x28);
      lVar5 = *(long *)(param_1 + 0x30);
    }
    if ((lVar4 == lVar5) ||
       (uVar6 = *(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x40),
       plVar1 = (long *)(*(long *)(lVar4 + (uVar6 >> 9) * 8) + (uVar6 & 0x1ff) * 8),
       plVar1 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *plVar1 = (long)param_2;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
  }
  else if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0060c534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 8))(param_2);
    return;
  }
  return;
}


// ===== 0060c55c  FUN_0060c55c =====

int FUN_0060c55c(char *param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 in_x7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  void *pvVar11;
  int iVar12;
  long *plVar13;
  void *pvVar14;
  undefined1 auVar15 [16];
  void *local_78;
  void *local_70;
  undefined8 local_68;
  
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 == (long *)0x0) {
    uVar5 = FUN_00417e08();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../video/buffered_frame_decryptor.cc",0x231,
                   "Frame decryption required but not attached to this stream. Stashing frame.");
      iVar12 = 0;
    }
    else {
      iVar12 = 0;
    }
  }
  else {
    uVar5 = (**(code **)(*plVar4 + 0x28))(plVar4,1,*(undefined8 *)(param_2 + 0x98));
    if (*(ulong *)(param_2 + 0x98) < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../video/buffered_frame_decryptor.cc",0x4e,
                   "max_plaintext_byte_size <= frame->size()",&DAT_001fb920,uVar5);
    }
    uVar6 = FUN_007bc78c(*(undefined8 *)(param_2 + 0x9e8));
    if (*param_1 == '\x01') {
      FUN_0084f840(param_2);
      FUN_00863c14(&local_78);
      pvVar11 = local_78;
      pvVar14 = local_70;
    }
    else {
      pvVar14 = (void *)0x0;
      pvVar11 = (void *)0x0;
    }
    plVar4 = *(long **)(param_2 + 0x90);
    uVar3 = (long)pvVar14 - (long)pvVar11;
    plVar13 = *(long **)(param_1 + 8);
    pvVar8 = (void *)0x0;
    if (uVar3 != 0) {
      pvVar8 = pvVar11;
    }
    local_78 = (void *)0x0;
    local_70 = (void *)0x0;
    local_68 = 0;
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x20))();
    }
    uVar1 = 0;
    if (uVar5 != 0) {
      uVar1 = uVar6;
    }
    plVar2 = (long *)0x0;
    if (*(long *)(param_2 + 0x98) != 0) {
      plVar2 = plVar4;
    }
    auVar15 = (**(code **)(*plVar13 + 0x20))
                        (plVar13,1,&local_78,pvVar8,uVar3,plVar2,*(long *)(param_2 + 0x98),in_x7,
                         uVar1,uVar5);
    uVar7 = auVar15._8_8_;
    if (local_78 != (void *)0x0) {
      uVar10 = (ulong)((long)local_70 + (-4 - ((long)local_70 << 0x3e))) >> 2;
      uVar9 = (ulong)(((long)local_78 - (long)local_70 << 0x3e) - ((long)local_78 - (long)local_70))
              >> 2;
      if (uVar10 <= uVar9) {
        uVar9 = uVar10;
      }
      pvVar8 = local_70;
      if ((1 < uVar9) && ((((int)local_78 - (int)local_70 | -(int)local_70) & 3U) == 0)) {
        uVar9 = uVar9 & 0x3ffffffffffffffe;
        pvVar8 = (void *)((long)local_70 + uVar9 * -4);
        do {
          uVar9 = uVar9 - 2;
        } while (uVar9 != 0);
      }
      do {
        if (pvVar8 == local_78) {
          local_70 = local_78;
          operator_delete(local_78);
          goto LAB_0060c724;
        }
        pvVar8 = (void *)((long)pvVar8 + -4);
      } while (pvVar8 != (void *)0x0);
LAB_0060c6d8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
LAB_0060c724:
    iVar12 = auVar15._0_4_;
    if (*(int *)(param_1 + 4) != iVar12) {
      *(int *)(param_1 + 4) = iVar12;
      (**(code **)(**(long **)(param_1 + 0x18) + 0x10))
                (*(long **)(param_1 + 0x18),auVar15._0_8_ & 0xffffffff);
    }
    if (iVar12 == 0) {
      if (uVar5 < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../video/buffered_frame_decryptor.cc",0x69,
                     "decrypt_result.bytes_written <= max_plaintext_byte_size",&DAT_001fb920,uVar7,
                     uVar5);
      }
      *(ulong *)(param_2 + 0x98) = uVar7;
      iVar12 = 1;
      if ((param_1[1] & 1U) == 0) {
        param_1[1] = '\x01';
      }
    }
    else {
      iVar12 = (uint)(byte)param_1[1] << 1;
    }
    if (pvVar11 != (void *)0x0) {
      if ((long)pvVar14 - 1U < uVar3) goto LAB_0060c6d8;
      operator_delete(pvVar11);
    }
  }
  return iVar12;
}


// ===== 0060c804  FUN_0060c804 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060c804(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:2185: libc++ Hardening assertion !empty() failed: deque::pop_front called on an empty deque\n"
              );
  }
  plVar1 = (long *)(*(long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) >> 9) * 8) +
                   (*(ulong *)(param_1 + 0x20) & 0x1ff) * 8);
  if (plVar1 != (long *)0x0) {
    plVar2 = (long *)*plVar1;
    *plVar1 = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    uVar3 = *(long *)(param_1 + 0x20) + _DAT_001f2940;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + _UNK_001f2948;
    *(ulong *)(param_1 + 0x20) = uVar3;
    if (0x3ff < uVar3) {
      operator_delete((void *)**(undefined8 **)(param_1 + 8));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x200;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0060c8d4  FUN_0060c8d4 =====

void FUN_0060c8d4(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar11;
  
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar5 = FUN_00417e08(), (uVar5 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f6643,"../../video/buffered_frame_decryptor.cc",0x3b9,
                 "Retrying stashed encrypted frames. Count: ",*(undefined8 *)(param_1 + 0x48));
  }
  puVar8 = *(undefined8 **)(param_1 + 0x28);
  puVar11 = *(undefined8 **)(param_1 + 0x30);
  if (puVar8 == puVar11) {
LAB_0060c960:
    if (puVar8 == puVar11) goto LAB_0060ca44;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x40);
    uVar5 = *(long *)(param_1 + 0x48) + uVar3;
    plVar13 = puVar8 + (uVar3 >> 9);
    puVar12 = (undefined8 *)(*plVar13 + (uVar3 & 0x1ff) * 8);
    puVar1 = (undefined8 *)(puVar8[uVar5 >> 9] + (uVar5 & 0x1ff) * 8);
    if (puVar12 == puVar1) goto LAB_0060c960;
    do {
      iVar4 = FUN_0060c55c(param_1,*puVar12);
      if (iVar4 == 1) {
        plVar6 = *(long **)(param_1 + 0x10);
        uVar9 = *puVar12;
        *puVar12 = 0;
        (**(code **)(*plVar6 + 0x10))(plVar6,uVar9);
      }
      puVar12 = puVar12 + 1;
      if ((long)puVar12 - *plVar13 == 0x1000) {
        plVar13 = plVar13 + 1;
        puVar12 = (undefined8 *)*plVar13;
      }
    } while (puVar12 != puVar1);
    puVar8 = *(undefined8 **)(param_1 + 0x28);
    puVar11 = *(undefined8 **)(param_1 + 0x30);
    if (puVar8 == puVar11) goto LAB_0060ca44;
  }
  uVar3 = *(ulong *)(param_1 + 0x40);
  uVar5 = *(long *)(param_1 + 0x48) + uVar3;
  plVar6 = puVar8 + (uVar3 >> 9);
  plVar13 = (long *)(*plVar6 + (uVar3 & 0x1ff) * 8);
  plVar2 = (long *)(puVar8[uVar5 >> 9] + (uVar5 & 0x1ff) * 8);
  if (plVar13 != plVar2) {
    do {
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar7 = (long *)*plVar13;
      *plVar13 = 0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
      plVar13 = plVar13 + 1;
      if ((long)plVar13 - *plVar6 == 0x1000) {
        plVar6 = plVar6 + 1;
        plVar13 = (long *)*plVar6;
      }
    } while (plVar13 != plVar2);
    puVar8 = *(undefined8 **)(param_1 + 0x28);
    puVar11 = *(undefined8 **)(param_1 + 0x30);
  }
LAB_0060ca44:
  *(undefined8 *)(param_1 + 0x48) = 0;
  lVar10 = (long)puVar11 - (long)puVar8;
  while (uVar5 = lVar10 >> 3, 2 < uVar5) {
    operator_delete((void *)*puVar8);
    puVar8 = (undefined8 *)(*(long *)(param_1 + 0x28) + 8);
    *(undefined8 **)(param_1 + 0x28) = puVar8;
    lVar10 = *(long *)(param_1 + 0x30) - (long)puVar8;
  }
  if (uVar5 == 1) {
    uVar9 = 0x100;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    uVar9 = 0x200;
  }
  *(undefined8 *)(param_1 + 0x40) = uVar9;
  return;
}


// ===== 0060cac8  FUN_0060cac8 =====

void FUN_0060cac8(long *param_1)

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
  
  if ((ulong)param_1[4] < 0x200) {
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
      FUN_0060cf38(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_0060d45c(&local_50,lVar5);
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
      FUN_0060cf38(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0x1000);
    FUN_0060d1c0(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x200;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_0060ccb0(param_1,&local_50);
  return;
}


// ===== 0060ccb0  FUN_0060ccb0 =====

void FUN_0060ccb0(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_0060cf20;
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
LAB_0060cf20:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0060cf38  FUN_0060cf38 =====

void FUN_0060cf38(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_0060d1a8;
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
LAB_0060d1a8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0060d1c0  FUN_0060d1c0 =====

void FUN_0060d1c0(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_0060d444;
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
LAB_0060d444:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0060d45c  FUN_0060d45c =====

void FUN_0060d45c(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_0060d6e0;
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
LAB_0060d6e0:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0060d6f8  FUN_0060d6f8 =====

void FUN_0060d6f8(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 ****ppppuVar2;
  undefined8 ***local_58;
  ulong uStack_50;
  byte bStack_41;
  long *local_40;
  long *plStack_38;
  
  FUN_00661054(param_1,"factor",6);
  puVar1 = PTR_DAT_00d52020 + 0x10;
  param_1[8] = 0x3ff199999999999a;
  *param_1 = (long)puVar1;
  FUN_00661054(param_1 + 9,"max_delay",9);
  param_1[9] = (long)&PTR_FUN_00d267f8;
  param_1[0x11] = (long)"nt read_session_ticket";
  local_40 = param_1;
  plStack_38 = param_1 + 9;
  (**(code **)(*param_2 + 0x10))(&local_58,param_2,"WebRTC-Video-Pacing",0x13);
  ppppuVar2 = (undefined8 ****)local_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    ppppuVar2 = &local_58;
  }
  FUN_00661cc0(&local_40,2,ppppuVar2,uStack_50);
  if ((char)bStack_41 < '\0') {
    operator_delete(local_58);
  }
  return;
}


// ===== 0060d7f4  FUN_0060d7f4 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060d7f4(long *param_1,long *param_2,undefined4 param_3,int ******param_4,long *param_5,
                 undefined8 param_6,long param_7,long param_8,undefined8 param_9,long param_10,
                 undefined8 param_11,undefined8 param_12,undefined8 param_13,void *param_14)

{
  int *******pppppppiVar1;
  char *pcVar2;
  char cVar3;
  long lVar4;
  double dVar5;
  float *pfVar6;
  bool bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  void *pvVar13;
  undefined8 uVar14;
  long lVar15;
  void *pvVar16;
  undefined4 uVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  float fVar34;
  undefined8 in_stack_fffffffffffffd90;
  uint local_260;
  void *local_230;
  undefined8 uStack_228;
  long local_220;
  long *local_210;
  int *******local_208;
  int *******local_200;
  long *plStack_1f8;
  undefined8 local_1f0;
  long *plStack_1e8;
  undefined1 *local_1e0;
  long *plStack_1d8;
  undefined1 *puStack_1d0;
  undefined8 uStack_1c8;
  long *local_1c0;
  float local_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  uint uStack_190;
  undefined4 uStack_18c;
  uint uStack_188;
  int iStack_184;
  uint uStack_180;
  undefined4 uStack_17c;
  undefined1 auStack_178 [208];
  long *local_a8 [2];
  code *local_98;
  undefined *local_90;
  long local_88;
  
  uVar11 = (undefined4)((ulong)in_stack_fffffffffffffd90 >> 0x20);
  lVar4 = tpidr_el0;
  local_88 = *(long *)(lVar4 + 0x28);
  param_1[1] = (long)&PTR_FUN_00d27430;
  param_1[2] = (long)&PTR_FUN_00d27460;
  *param_1 = (long)&PTR_FUN_00d27378;
  lVar15 = *param_2;
  plVar21 = param_1 + 3;
  *plVar21 = lVar15;
  if (lVar15 != 0) {
    FUN_00d0f740(1,lVar15 + 8);
  }
  auVar27 = *(undefined1 (*) [16])(param_2 + 1);
  lVar22 = param_2[4];
  lVar15 = param_2[3];
  param_1[5] = auVar27._8_8_;
  param_1[4] = auVar27._0_8_;
  param_1[7] = lVar22;
  param_1[6] = lVar15;
  param_1[8] = (long)param_5;
  FUN_0061094c(param_1 + 9,param_1[5],param_9,*(undefined4 *)(param_10 + 0x88),param_1[4]);
  param_1[0x82] = (long)&PTR_FUN_00d274b8;
  param_1[0x83] = (long)(param_1 + 9);
  param_1[0x84] = param_8;
  FUN_00848970(param_1 + 0x85,param_9);
  *(undefined4 *)(param_1 + 0xba) = *(undefined4 *)(param_10 + 0x88);
  if (param_14 == (void *)0x0) {
    plVar20 = (long *)param_1[4];
    lVar15 = FUN_00669f90(param_1 + 0x91,
                          "http://www.webrtc.org/experiments/rtp-hdrext/video-layers-allocation00",
                          0x46,*(undefined1 *)((long)param_1 + 0x5ab));
    if (lVar15 == 0) {
      (**(code **)(*plVar20 + 0x10))(&local_200,plVar20,"WebRTC-Target-Bitrate-Rtcp",0x1a);
      plVar20 = plStack_1f8;
      if (-1 < (long)local_1f0) {
        plVar20 = (long *)(ulong)local_1f0._7_1_;
      }
      if (plVar20 < 7) {
        local_260 = 1;
      }
      else {
        pppppppiVar1 = local_200;
        if (-1 < (long)local_1f0) {
          pppppppiVar1 = (int *******)&local_200;
        }
        local_260 = (uint)(*(int *)pppppppiVar1 != 0x62616e45 ||
                          *(int *)((long)pppppppiVar1 + 3) != 0x64656c62);
      }
      if ((long)local_1f0 < 0) {
        operator_delete(local_200);
      }
    }
    else {
      local_260 = 2;
    }
    lVar15 = param_1[0xb4];
    plVar20 = (long *)param_1[6];
    (**(code **)(*(long *)param_1[4] + 0x10))
              (&local_200,(long *)param_1[4],"WebRTC-MediaTaskQueuePriorities",0x1f);
    if (-1 < (char)local_1f0._7_1_) {
      plStack_1f8 = (long *)(ulong)local_1f0._7_1_;
    }
    if (plStack_1f8 < 7) {
      uVar17 = 0;
    }
    else {
      pppppppiVar1 = local_200;
      if (-1 < (char)local_1f0._7_1_) {
        pppppppiVar1 = (int *******)&local_200;
      }
      uVar17 = 0;
      if (*(int *)pppppppiVar1 == 0x62616e45 && *(int *)((long)pppppppiVar1 + 3) == 0x64656c62) {
        uVar17 = 2;
      }
    }
    if ((char)local_1f0._7_1_ < '\0') {
      operator_delete(local_200);
    }
    uVar12 = (**(code **)(*plVar20 + 0x10))(plVar20,"VideoEncoderQueue",0x11,uVar17);
    pvVar13 = operator_new(0xf8);
    FUN_009815f0(pvVar13,plVar21,param_1 + 9);
    lVar22 = param_1[5];
    uVar14 = FUN_005d6490();
    uVar14 = FUN_0094cba8(lVar22,uVar12,param_6,uVar14,param_1[4]);
    param_14 = operator_new(0x21a0);
    FUN_00958314(param_14,plVar21,param_3,param_1 + 9,param_1 + 0xaa,pvVar13,uVar14,uVar12,
                 CONCAT44(uVar11,local_260),lVar15);
  }
  param_1[0xbb] = (long)param_14;
  uVar9 = FUN_008988fc(param_10 + 0x20);
  local_98 = FUN_00610014;
  local_90 = &DAT_001fcd10;
  local_a8[0] = param_1;
  FUN_0061e6c8(param_1 + 0xbc,plVar21,uVar9 & 1,param_1 + 0x85,param_1[0xbb],local_a8);
  if (*(code **)(local_90 + 8) != (code *)0x0) {
    (**(code **)(local_90 + 8))(local_a8[0]);
  }
  local_1f0 = (long *)0x0;
  if (param_1 + 0xbc != (long *)0x0) {
    local_1f0 = param_1 + 0xbd;
  }
  bVar7 = param_1 == (long *)0xffffffffffffffb8;
  plStack_1e8 = (long *)0x0;
  if (!bVar7) {
    plStack_1e8 = param_1 + 10;
  }
  lVar32 = (long)param_1 + _DAT_001f4cd0;
  lVar33 = (long)param_1 + _UNK_001f4cd8;
  lVar30 = (long)param_1 + _DAT_001f3f70;
  lVar31 = (long)param_1 + _UNK_001f3f78;
  lVar15 = param_1[0xaf];
  lVar22 = param_1[0xb0];
  auVar27._0_8_ = (ulong)CONCAT14(bVar7,(uint)bVar7) << 0x3f;
  auVar27._8_8_ = (ulong)bVar7 << 0x3f;
  uStack_180 = 0xaaaaaaaa;
  uStack_17c = 0xaaaaaaaa;
  uStack_188 = 0xaaaaaaaa;
  iStack_184 = -0x55555556;
  uStack_190 = 0xaaaaaaaa;
  uStack_18c = -0x55555556;
  uStack_198._0_4_ = 0xaaaaaaaa;
  uStack_198._4_4_ = 0xaaaaaaaa;
  local_1a0 = 0.0;
  uStack_19c = 0;
  auVar27 = NEON_cmge(auVar27,0,8);
  puStack_1d0 = (undefined1 *)
                CONCAT17(auVar27[7] & (byte)((ulong)lVar32 >> 0x38),
                         CONCAT16(auVar27[6] & (byte)((ulong)lVar32 >> 0x30),
                                  CONCAT15(auVar27[5] & (byte)((ulong)lVar32 >> 0x28),
                                           CONCAT14(auVar27[4] & (byte)((ulong)lVar32 >> 0x20),
                                                    CONCAT13(auVar27[3] &
                                                             (byte)((ulong)lVar32 >> 0x18),
                                                             CONCAT12(auVar27[2] &
                                                                      (byte)((ulong)lVar32 >> 0x10),
                                                                      CONCAT11(auVar27[1] &
                                                                               (byte)((ulong)lVar32
                                                                                     >> 8),
                                                                               auVar27[0] &
                                                                               (byte)lVar32)))))));
  uStack_1c8 = (long *)CONCAT17(auVar27[0xf] & (byte)((ulong)lVar33 >> 0x38),
                                CONCAT16(auVar27[0xe] & (byte)((ulong)lVar33 >> 0x30),
                                         CONCAT15(auVar27[0xd] & (byte)((ulong)lVar33 >> 0x28),
                                                  CONCAT14(auVar27[0xc] &
                                                           (byte)((ulong)lVar33 >> 0x20),
                                                           CONCAT13(auVar27[0xb] &
                                                                    (byte)((ulong)lVar33 >> 0x18),
                                                                    CONCAT12(auVar27[10] &
                                                                             (byte)((ulong)lVar33 >>
                                                                                   0x10),
                                                                             CONCAT11(auVar27[9] &
                                                                                      (byte)((ulong)
                                                  lVar33 >> 8),auVar27[8] & (byte)lVar33)))))));
  auVar28._0_8_ =
       (undefined1 *)
       CONCAT17(auVar27[7] & (byte)((ulong)lVar30 >> 0x38),
                CONCAT16(auVar27[6] & (byte)((ulong)lVar30 >> 0x30),
                         CONCAT15(auVar27[5] & (byte)((ulong)lVar30 >> 0x28),
                                  CONCAT14(auVar27[4] & (byte)((ulong)lVar30 >> 0x20),
                                           CONCAT13(auVar27[3] & (byte)((ulong)lVar30 >> 0x18),
                                                    CONCAT12(auVar27[2] &
                                                             (byte)((ulong)lVar30 >> 0x10),
                                                             CONCAT11(auVar27[1] &
                                                                      (byte)((ulong)lVar30 >> 8),
                                                                      auVar27[0] & (byte)lVar30)))))
                        ));
  auVar28[8] = auVar27[8] & (byte)lVar31;
  auVar28[9] = auVar27[9] & (byte)((ulong)lVar31 >> 8);
  auVar28[10] = auVar27[10] & (byte)((ulong)lVar31 >> 0x10);
  auVar28[0xb] = auVar27[0xb] & (byte)((ulong)lVar31 >> 0x18);
  auVar28[0xc] = auVar27[0xc] & (byte)((ulong)lVar31 >> 0x20);
  auVar28[0xd] = auVar27[0xd] & (byte)((ulong)lVar31 >> 0x28);
  auVar28[0xe] = auVar27[0xe] & (byte)((ulong)lVar31 >> 0x30);
  auVar28[0xf] = auVar27[0xf] & (byte)((ulong)lVar31 >> 0x38);
  plStack_1d8 = auVar28._8_8_;
  local_200 = (int *******)param_4;
  plStack_1f8 = param_1 + 0xbc;
  local_1e0 = auVar28._0_8_;
  local_1c0 = param_1 + 0x82;
  FUN_007ebea0(&uStack_198);
  uStack_198._0_4_ = (undefined4)param_1[0xb5];
  local_1a0 = (float)param_1[0xb3];
  uStack_19c = (undefined4)((ulong)param_1[0xb3] >> 0x20);
  uStack_198._4_4_ = CONCAT31(uStack_198._5_3_,*(undefined1 *)((long)param_1 + 0x5ac));
  if (&uStack_198 != param_1 + 0xb5) {
    FUN_005d4868(&uStack_190,param_1[0xb6],param_1[0xb7],param_1[0xb7] - param_1[0xb6] >> 1);
  }
  local_210 = (long *)param_1[0xb9];
  if (local_210 != (long *)0x0) {
    (**(code **)*local_210)();
  }
  lVar15 = (**(code **)(*param_5 + 0x18))
                     (param_5,param_11,param_12,param_1 + 0x85,(int)lVar15,lVar22,&local_200,
                      param_13,&local_1a0,&local_210);
  if (local_210 != (long *)0x0) {
    (**(code **)(*local_210 + 8))(local_210);
  }
  pvVar13 = (void *)CONCAT44(uStack_18c,uStack_190);
  if (pvVar13 != (void *)0x0) {
    pvVar16 = (void *)CONCAT44(iStack_184,uStack_188);
    uVar19 = (ulong)((long)pvVar16 + ((long)pvVar16 << 0x3f) + -2) >> 1;
    uVar18 = (ulong)(((long)pvVar13 - (long)pvVar16 << 0x3f) - ((long)pvVar13 - (long)pvVar16)) >> 1
    ;
    if (uVar19 <= uVar18) {
      uVar18 = uVar19;
    }
    if ((1 < uVar18) && (((uStack_190 - uStack_188 | uStack_188) & 1) == 0)) {
      uVar18 = uVar18 & 0x7ffffffffffffffe;
      pvVar16 = (void *)((long)pvVar16 + uVar18 * -2);
      do {
        uVar18 = uVar18 - 2;
      } while (uVar18 != 0);
    }
    while (pvVar16 != pvVar13) {
      pvVar16 = (void *)((long)pvVar16 + -2);
      if (pvVar16 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    uStack_188 = uStack_190;
    iStack_184 = uStack_18c;
    operator_delete(pvVar13);
  }
  param_1[0xd0] = lVar15;
  *(undefined1 *)(param_1 + 0xd1) = 0;
  if ((*(byte *)((long)param_1 + 0x591) & 1) == 0) {
    bVar7 = *(int *)(param_10 + 0x88) != 1;
    pcVar2 = "WebRTC-ProbingScreenshareBwe";
    if (bVar7) {
      pcVar2 = "WebRTC-StrictPacingAndProbing";
    }
    uVar12 = 0x1c;
    if (bVar7) {
      uVar12 = 0x1d;
    }
    FUN_008de740(&local_200,param_1[4],pcVar2,uVar12);
    bVar8 = (byte)local_1e0;
  }
  else {
    bVar8 = 1;
  }
  *(byte *)((long)param_1 + 0x689) = bVar8 & 1;
  FUN_0060d6f8(param_1 + 0xd2,param_1[4]);
  lVar15 = FUN_005d6490();
  param_1[0xe5] = 0;
  param_1[0xe4] = lVar15;
  *(undefined2 *)(param_1 + 0xe6) = 0;
  param_1[0xe7] = param_7;
  lVar15 = *(long *)(param_10 + 0xa8);
  if (lVar15 == *(long *)(param_10 + 0xb0)) {
    bVar8 = 0;
  }
  else {
    do {
      bVar8 = *(byte *)(lVar15 + 0x52);
      if (lVar15 + 200 == *(long *)(param_10 + 0xb0)) break;
      lVar15 = lVar15 + 200;
    } while ((bVar8 & 1) == 0);
  }
  *(byte *)(param_1 + 0xe8) = bVar8 & 1;
  *(undefined1 *)((long)param_1 + 0x741) = 1;
  *(undefined8 *)((long)param_1 + 0x744) = 0;
  iVar10 = *(int *)(param_10 + 0x9c);
  *(undefined4 *)(param_1 + 0xea) = 0;
  if (iVar10 < 1) {
    iVar10 = 10000000;
  }
  *(int *)((long)param_1 + 0x74c) = iVar10;
  param_1[0xeb] = *(long *)(param_10 + 0xa0);
  if (*(char *)((long)param_1 + 0x4b7) < '\0') {
    FUN_005478d8(&local_230,param_1[0x94],param_1[0x95]);
  }
  else {
    local_220 = param_1[0x96];
    uStack_228 = SUB168(*(undefined1 (*) [16])(param_1 + 0x94),8);
    local_230 = SUB168(*(undefined1 (*) [16])(param_1 + 0x94),0);
  }
  plVar21 = (long *)param_1[4];
  iVar10 = FUN_007b8cec(&local_230);
  if (iVar10 == 3) {
    auVar29[8] = 0xaa;
    auVar29._0_8_ = &DAT_aaaaaaaaaaaaaaaa;
    auVar29[9] = 0xaa;
    auVar29[10] = 0xaa;
    auVar29[0xb] = 0xaa;
    auVar29[0xc] = 0xaa;
    auVar29[0xd] = 0xaa;
    auVar29[0xe] = 0xaa;
    auVar29[0xf] = 0xaa;
    plStack_1f8 = auVar29._8_8_;
    local_200 = (int *******)&DAT_aaaaaaaaaaaaaaaa;
    local_1f0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1d0 = &DAT_aaaaaaaaaaaaaaaa;
    plStack_1e8 = plStack_1f8;
    plStack_1d8 = plStack_1f8;
    uStack_1c8 = plStack_1f8;
    FUN_00661054(&local_200,"bitrate",7);
    uStack_1c8 = (long *)((ulong)uStack_1c8 & 0xffffffff);
    local_200 = (int *******)(PTR_DAT_00d52028 + 0x10);
    local_208 = (int *******)&local_200;
    (**(code **)(*plVar21 + 0x10))(&local_1a0,plVar21,"WebRTC-AV1-OverridePriorityBitrate",0x22);
    uVar18 = CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
    pfVar6 = (float *)CONCAT44(uStack_19c,local_1a0);
    if (-1 < uStack_18c) {
      uVar18 = (ulong)uStack_18c._3_1_;
      pfVar6 = &local_1a0;
    }
    FUN_00661cc0(&local_208,1,pfVar6,uVar18);
    if (uStack_18c < 0) {
      operator_delete((void *)CONCAT44(uStack_19c,local_1a0));
    }
    uVar11 = uStack_1c8._4_4_;
    FUN_006634ac(&local_200);
  }
  else {
    uVar11 = 0;
  }
  if (local_220 < 0) {
    operator_delete(local_230);
  }
  *(undefined4 *)(param_1 + 0xec) = uVar11;
  FUN_007ebca0(param_1 + 0xed);
  puVar23 = (undefined8 *)param_1[0x91];
  puVar24 = (undefined8 *)param_1[0x92];
  *(undefined1 *)(param_1 + 0xee) = 0;
  *(undefined1 *)(param_1 + 0x11a) = 0;
  if (puVar23 != puVar24) {
    lVar15 = param_1[0xba];
    lVar22 = param_1[4];
    do {
      if (((*(char *)((long)puVar23 + 0x17) < '\0') && (puVar23[1] == 0x49)) &&
         (iVar10 = memcmp((void *)*puVar23,
                          "http://www.ietf.org/id/draft-holmer-rmcat-transport-wide-cc-extensions-01"
                          ,0x49), iVar10 == 0)) {
        auVar25[8] = 0xaa;
        auVar25._0_8_ = &DAT_aaaaaaaaaaaaaaaa;
        uStack_190 = 0xaaaaaaaa;
        auVar25[9] = 0xaa;
        auVar25[10] = 0xaa;
        auVar25[0xb] = 0xaa;
        local_1a0 = -NAN;
        bVar7 = (int)lVar15 != 1;
        pcVar2 = "WebRTC-ProbingScreenshareBwe";
        if (bVar7) {
          pcVar2 = "WebRTC-StrictPacingAndProbing";
        }
        uVar12 = 0x1c;
        if (bVar7) {
          uVar12 = 0x1d;
        }
        uStack_198._4_4_ = auVar25._8_4_;
        uStack_19c = 0xaaaaaaaa;
        uStack_198._0_4_ = 0xaaaaaaaa;
        uStack_18c = -0x55555556;
        uStack_188 = 0xaaaaaaaa;
        uStack_17c = 0xaaaaaaaa;
        iStack_184 = uStack_198._4_4_;
        uStack_180 = uStack_190;
        FUN_008de740(&local_1a0,lVar22,pcVar2,uVar12);
        fVar34 = local_1a0;
        if ((char)uStack_180 != '\x01') {
          FUN_008a5364(&local_200,lVar22);
          auVar27 = FUN_008a5784(&local_200);
          dVar5 = auVar27._0_8_;
          if ((auVar27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
            dVar5 = (double)param_1[0xda];
          }
          FUN_008a56ec(&local_200);
          fVar34 = (float)dVar5;
        }
        uVar18 = (ulong)(uint)fVar34 | 0x100000000;
        goto LAB_0060e010;
      }
      puVar23 = puVar23 + 4;
    } while (puVar23 != puVar24);
  }
  uVar18 = 0;
LAB_0060e010:
  *(int *)(param_1 + 0x11b) = (int)uVar18;
  *(char *)((long)param_1 + 0x8dc) = (char)(uVar18 >> 0x20);
  uVar18 = FUN_00417e08();
  if ((uVar18 & 1) == 0) {
    FUN_00848b50(&local_200,param_1 + 0x85);
    FUN_00623bb0(&DAT_001f4e90,"../../video/video_send_stream_impl.cc",0xec9,"VideoSendStreamImpl: "
                 ,&local_200);
    if ((long)local_1f0 < 0) {
      operator_delete(local_200);
    }
  }
  uVar18 = FUN_008de66c(param_1[4]);
  if ((uVar18 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../video/video_send_stream_impl.cc",0x1dc,
                 "AlrExperimentSettings::MaxOneFieldTrialEnabled(env_.field_trials())",&DAT_001f5fa0
                );
  }
  cVar3 = *(char *)((long)param_1 + 0x8dc);
  if (cVar3 == '\x01') {
    auVar26[8] = 0xaa;
    auVar26._0_8_ = &DAT_aaaaaaaaaaaaaaaa;
    uStack_190 = 0xaaaaaaaa;
    auVar26[9] = 0xaa;
    auVar26[10] = 0xaa;
    auVar26[0xb] = 0xaa;
    local_1a0 = -NAN;
    bVar7 = (int)param_1[0xba] != 1;
    pcVar2 = "WebRTC-ProbingScreenshareBwe";
    if (bVar7) {
      pcVar2 = "WebRTC-StrictPacingAndProbing";
    }
    uVar12 = 0x1c;
    if (bVar7) {
      uVar12 = 0x1d;
    }
    uStack_198._4_4_ = auVar26._8_4_;
    uStack_19c = 0xaaaaaaaa;
    uStack_198._0_4_ = 0xaaaaaaaa;
    uStack_18c = -0x55555556;
    uStack_188 = 0xaaaaaaaa;
    uStack_17c = 0xaaaaaaaa;
    iStack_184 = uStack_198._4_4_;
    uStack_180 = uStack_190;
    FUN_008de740(&local_1a0,param_1[4],pcVar2,uVar12);
    if ((char)uStack_180 == '\x01') {
      uVar19 = CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
      bVar8 = 1;
    }
    else {
      FUN_008a5364(&local_200,param_1[4]);
      bVar8 = FUN_008a5794(&local_200);
      FUN_008a56ec(&local_200);
      uVar18 = param_1[0xe3];
      if ((long)uVar18 < 0) {
        uVar19 = -(-uVar18 / 1000) - (ulong)(500 < -uVar18 % 1000);
      }
      else {
        uVar19 = uVar18 / 1000;
        if (499 < uVar18 % 1000) {
          uVar19 = uVar19 + 1;
        }
      }
    }
    (**(code **)(*(long *)param_1[8] + 0x60))((long *)param_1[8],uVar19);
  }
  else {
    bVar8 = 0;
  }
  if (cVar3 != '\0' || *(byte *)((long)param_1 + 0x591) != 0) {
    (**(code **)(*param_5 + 0xa0))(param_5,(bVar8 | *(byte *)((long)param_1 + 0x591)) & 1);
  }
  if (*(char *)((long)param_1 + 0x8dc) == '\x01') {
    (**(code **)(*(long *)param_1[8] + 0x58))();
  }
  puVar23 = (undefined8 *)param_1[0x91];
  do {
    if (puVar23 == (undefined8 *)param_1[0x92]) {
      uVar12 = 1;
LAB_0060e26c:
      (**(code **)(*(long *)param_1[0xbb] + 0x28))((long *)param_1[0xbb],param_1 + 2,uVar12);
      plVar21 = (long *)param_1[0xbb];
      uVar11 = (**(code **)(*(long *)param_1[0xe7] + 0x10))((long *)param_1[0xe7],param_1 + 1);
      (**(code **)(*plVar21 + 0x30))(plVar21,uVar11);
      lVar15 = 0;
      if (param_1[0xd0] != 0) {
        lVar15 = param_1[0xd0] + 8;
      }
      (**(code **)(*(long *)param_1[0xbb] + 0x50))((long *)param_1[0xbb],lVar15);
      FUN_008495b4(auStack_178,param_10);
      (**(code **)(*param_1 + 0x30))(param_1,auStack_178);
      FUN_0084966c(auStack_178);
      if (*(long *)(lVar4 + 0x28) == local_88) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (((*(char *)((long)puVar23 + 0x17) < '\0') && (puVar23[1] == 0x1a)) &&
       (plVar21 = (long *)*puVar23,
       ((*plVar21 == 0x707067333a6e7275 && plVar21[1] == 0x6f2d6f656469763a) &&
       plVar21[2] == 0x697461746e656972) && (short)plVar21[3] == 0x6e6f)) {
      uVar12 = 0;
      goto LAB_0060e26c;
    }
    puVar23 = puVar23 + 4;
  } while( true );
}


// ===== 0060e350  FUN_0060e350 =====

void FUN_0060e350(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  void *pvVar4;
  void *local_38 [2];
  char cStack_21;
  
  *param_1 = &PTR_FUN_00d27378;
  param_1[1] = &PTR_FUN_00d27430;
  param_1[2] = &PTR_FUN_00d27460;
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00848b50(local_38,param_1 + 0x85);
    FUN_00623bb0(&DAT_001f4e90,"../../video/video_send_stream_impl.cc",0x1079,
                 "~VideoSendStreamImpl: ",local_38);
    if (cStack_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  (**(code **)(*(long *)param_1[8] + 0x20))((long *)param_1[8],param_1[0xd0]);
  FUN_007ebdcc(param_1[0xed]);
  pvVar4 = (void *)param_1[0xed];
  if ((pvVar4 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar1 == 1)) {
    operator_delete(pvVar4);
  }
  pvVar4 = (void *)param_1[0xe5];
  if ((pvVar4 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar1 == 1)) {
    operator_delete(pvVar4);
  }
  FUN_006634ac(param_1 + 0xdb);
  FUN_006634ac(param_1 + 0xd2);
  FUN_0060e4bc(param_1 + 0xbc);
  plVar3 = (long *)param_1[0xbb];
  param_1[0xbb] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  FUN_00848a78(param_1 + 0x85);
  FUN_00610ddc(param_1 + 9);
  plVar3 = (long *)param_1[3];
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  return;
}


// ===== 0060e4bc  FUN_0060e4bc =====

void FUN_0060e4bc(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  
  pvVar3 = (void *)param_1[0x10];
  puVar1 = PTR_DAT_00d51ff0 + 0x40;
  *param_1 = (long)(PTR_DAT_00d51ff0 + 0x10);
  param_1[1] = (long)puVar1;
  if (pvVar3 == (void *)0x0) {
LAB_0060e564:
    if (*(code **)(param_1[0xe] + 8) != (code *)0x0) {
      (**(code **)(param_1[0xe] + 8))(param_1[0xb]);
    }
    pvVar3 = (void *)param_1[7];
    if (pvVar3 == (void *)0x0) {
LAB_0060e608:
      plVar7 = (long *)param_1[2];
      if ((plVar7 != (long *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,plVar7 + 1), iVar2 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0060e63c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 8))(plVar7);
        return;
      }
      return;
    }
    pvVar4 = (void *)param_1[8];
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
        param_1[8] = (long)pvVar3;
        operator_delete(pvVar3);
        goto LAB_0060e608;
      }
      pvVar4 = (void *)((long)pvVar4 + -4);
    } while (pvVar4 != (void *)0x0);
  }
  else {
    pvVar4 = (void *)param_1[0x11];
    uVar6 = (ulong)((long)pvVar4 + (-8 - ((long)pvVar4 << 0x3d))) >> 3;
    uVar5 = (ulong)(((long)pvVar3 - (long)pvVar4 << 0x3d) - ((long)pvVar3 - (long)pvVar4)) >> 3;
    if (uVar6 <= uVar5) {
      uVar5 = uVar6;
    }
    if ((1 < uVar5) && ((((int)pvVar3 - (int)pvVar4 | -(int)pvVar4) & 7U) == 0)) {
      uVar5 = uVar5 & 0x1ffffffffffffffe;
      pvVar4 = (void *)((long)pvVar4 + uVar5 * -8);
      do {
        uVar5 = uVar5 - 2;
      } while (uVar5 != 0);
    }
    do {
      if (pvVar4 == pvVar3) {
        param_1[0x11] = (long)pvVar3;
        operator_delete(pvVar3);
        goto LAB_0060e564;
      }
      pvVar4 = (void *)((long)pvVar4 + -8);
    } while (pvVar4 != (void *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0060e650  FUN_0060e650 =====

void FUN_0060e650(void)

{
  return;
}


// ===== 0060e658  FUN_0060e658 =====

void FUN_0060e658(long param_1)

{
  FUN_0060e350(param_1 + -8);
  return;
}


// ===== 0060e664  FUN_0060e664 =====

void FUN_0060e664(long param_1)

{
  FUN_0060e350(param_1 + -0x10);
  return;
}


// ===== 0060e670  FUN_0060e670 =====

void FUN_0060e670(void *param_1)

{
  FUN_0060e350();
  operator_delete(param_1);
  return;
}


// ===== 0060e6a0  FUN_0060e6a0 =====

void FUN_0060e6a0(long param_1)

{
  FUN_0060e350((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 0060e6d4  FUN_0060e6d4 =====

void FUN_0060e6d4(long param_1)

{
  FUN_0060e350((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}


// ===== 0060e708  FUN_0060e708 =====

void FUN_0060e708(long param_1,long *param_2)

{
  long *plVar1;
  long *local_8;
  
  local_8 = (long *)*param_2;
  plVar1 = *(long **)(param_1 + 0x5d8);
  if (local_8 != (long *)0x0) {
    (**(code **)*local_8)();
  }
  (**(code **)(*plVar1 + 0x10))(plVar1,&local_8);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))();
  }
  return;
}


// ===== 0060e770  FUN_0060e770 =====

void FUN_0060e770(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0060e780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x5d8) + 0x18))();
  return;
}


// ===== 0060e784  FUN_0060e784 =====

void FUN_0060e784(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0060e794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x5d8) + 0x20))();
  return;
}


// ===== 0060e798  FUN_0060e798 =====

void FUN_0060e798(long *param_1)

{
  long lVar1;
  undefined1 auStack_130 [16];
  code *local_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [208];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008495b4(auStack_108);
  local_120 = FUN_00433984;
  uStack_118 = 0;
  (**(code **)(*param_1 + 0x38))(param_1,auStack_108,auStack_130);
  (*local_120)(0,auStack_130,auStack_130);
  FUN_0084966c(auStack_108);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0060e834  FUN_0060e834 =====

void FUN_0060e834(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_1a0 [16];
  code *local_190;
  undefined8 uStack_188;
  void *local_178 [2];
  char cStack_161;
  void *local_160 [2];
  char cStack_149;
  undefined1 uStack_141;
  undefined1 auStack_140 [208];
  char *local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined7 uStack_60;
  undefined1 uStack_59;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00417e08();
  if ((uVar5 & 1) == 0) {
    local_70 = "../../video/video_send_stream_impl.cc";
    uStack_68 = 0x1189;
    uStack_64 = 0;
    uStack_60 = SUB87(&uStack_141,0);
    uStack_59 = (undefined1)((ulong)&uStack_141 >> 0x38);
    FUN_00849790(local_160,param_2);
    FUN_00848b50(local_178,param_1 + 0x428);
    FUN_00623bb0("\r\t\n\t\n",local_70,uStack_68,"Encoder config: ",local_160,
                 " VideoSendStream config: ",local_178);
    if (cStack_161 < '\0') {
      operator_delete(local_178[0]);
    }
    if (cStack_149 < '\0') {
      operator_delete(local_160[0]);
    }
  }
  lVar6 = *(long *)(param_2 + 0xa8);
  do {
    if (lVar6 == *(long *)(param_2 + 0xb0)) {
      *(undefined1 *)(param_1 + 0x740) = 0;
LAB_0060e908:
      if (((*(byte *)(param_1 + 0x740) & 1) == 0) &&
         (uVar5 = FUN_00841d54(param_1 + 0x728), (uVar5 & 1) != 0)) {
        (**(code **)(**(long **)(param_1 + 0x738) + 8))(*(long **)(param_1 + 0x738),param_1 + 8);
        FUN_00841cf8(param_1 + 0x728);
        (**(code **)(**(long **)(param_1 + 0x5d8) + 0x48))(0,*(long **)(param_1 + 0x5d8),0,0,0,0);
        FUN_00618494(param_1 + 0x48,0);
      }
LAB_0060e9a0:
      plVar9 = *(long **)(param_1 + 0x5d8);
      FUN_008495b4(auStack_140,param_2);
      lVar6 = *(long *)(param_1 + 0x488);
      lVar8 = *(long *)(param_1 + 0x478);
      if (lVar6 == *(long *)(param_1 + 0x490)) {
        lVar7 = 0;
        lVar6 = 0xc;
        iVar3 = *(int *)(param_1 + 0x4f0);
      }
      else {
        uStack_68 = 0xaaaaaaaa;
        local_70 = &DAT_aaaaaaaaaaaaaaaa;
        uStack_64 = 0xaaaaaaaa;
        uStack_60 = 0xaaaaaaaaaaaaaa;
        FUN_007d87fc(&local_70,lVar6,*(long *)(param_1 + 0x490) - lVar6 >> 5);
        auVar10 = FUN_00868bec();
        iVar3 = FUN_00863de8(auVar10._0_8_,auVar10._8_8_,&local_70);
        auVar10 = FUN_00868bd8();
        iVar4 = FUN_00863de8(auVar10._0_8_,auVar10._8_8_,&local_70);
        lVar7 = (long)iVar4;
        lVar6 = (long)iVar3 + 0xc;
        iVar3 = *(int *)(param_1 + 0x4f0);
      }
      if (iVar3 < 0) {
        lVar1 = 0;
        if (-1 < *(int *)(param_1 + 0x4e0)) {
          lVar1 = lVar7 + 0x12;
        }
        lVar6 = lVar1 + lVar6 + (ulong)(~*(uint *)(param_1 + 0x4e4) >> 0x1f);
      }
      else {
        lVar6 = lVar7 + lVar6 + 0x20;
      }
      if (-1 < *(int *)(param_1 + 0x528)) {
        lVar6 = lVar6 + 2;
      }
      (**(code **)(param_3 + 0x10))(1,param_3,auStack_1a0);
      uStack_188 = *(undefined8 *)(param_3 + 0x18);
      local_190 = *(code **)(param_3 + 0x10);
      *(code **)(param_3 + 0x10) = FUN_00433984;
      *(undefined8 *)(param_3 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x60))(plVar9,auStack_140,lVar8 - lVar6,auStack_1a0);
      (*local_190)(0,auStack_1a0,auStack_1a0);
      FUN_0084966c(auStack_140);
      if (*(long *)(lVar2 + 0x28) == local_58) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if ((*(byte *)(lVar6 + 0x52) & 1) != 0) {
      *(undefined1 *)(param_1 + 0x740) = 1;
      uVar5 = (**(code **)(**(long **)(param_1 + 0x680) + 0x38))();
      if (((uVar5 & 1) == 0) || (uVar5 = FUN_00841d54(param_1 + 0x728), (uVar5 & 1) != 0))
      goto LAB_0060e908;
      FUN_0060eb20(param_1);
      goto LAB_0060e9a0;
    }
    lVar6 = lVar6 + 200;
  } while( true );
}


// ===== 0060eb20  FUN_0060eb20 =====

void FUN_0060eb20(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  void *pvVar7;
  void *local_90;
  void *local_88;
  undefined8 local_80;
  undefined1 uStack_71;
  long local_70 [2];
  code *local_60;
  code *pcStack_58;
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  byte local_38;
  undefined8 local_30;
  uint local_28;
  undefined1 local_24;
  
  local_50 = *(undefined8 *)(param_1 + 0x748);
  if ((*(byte *)(param_1 + 0x741) & 1) == 0) {
    local_48 = *(undefined4 *)(param_1 + 0x744);
  }
  else {
    local_48 = 0;
  }
  local_40 = (long)*(int *)(param_1 + 0x760);
  local_30 = *(undefined8 *)(param_1 + 0x758);
  local_38 = *(byte *)(param_1 + 0x590) ^ 1;
  local_24 = *(int *)(param_1 + 0x5d0) == 0;
  if ((bool)local_24) {
    local_28 = 1;
  }
  else {
    local_28 = local_28 & 0xffffff00;
  }
  (**(code **)**(undefined8 **)(param_1 + 0x738))
            (*(undefined8 **)(param_1 + 0x738),param_1 + 8,&local_50);
  *(undefined4 *)(param_1 + 0x730) = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x720);
  *(undefined1 *)(param_1 + 0x731) = 0;
  local_60 = FUN_004473ec;
  pcStack_58 = FUN_0061003c;
  local_70[0] = param_1;
  uVar2 = FUN_00622394();
  FUN_00841954(&local_90,uVar6,"nt read_session_ticket",local_70,0,uVar2,&uStack_71);
  pvVar3 = local_90;
  pvVar7 = *(void **)(param_1 + 0x728);
  local_90 = (void *)0x0;
  *(void **)(param_1 + 0x728) = pvVar3;
  if (pvVar7 != (void *)0x0) {
    iVar1 = FUN_00d0f7a0(0xffffffff,pvVar7);
    if (iVar1 == 1) {
      operator_delete(pvVar7);
    }
    pvVar3 = local_90;
    if ((local_90 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,local_90), iVar1 == 1)) {
      operator_delete(pvVar3);
    }
  }
  (*local_60)(0,local_70,local_70);
  local_90 = (void *)0x0;
  local_88 = (void *)0x0;
  local_80 = 0;
  (**(code **)(**(long **)(param_1 + 0x5d8) + 0x38))(*(long **)(param_1 + 0x5d8),&local_90);
  if (local_90 != (void *)0x0) {
    uVar5 = (ulong)((long)local_88 + (-4 - ((long)local_88 << 0x3e))) >> 2;
    uVar4 = (ulong)(((long)local_90 - (long)local_88 << 0x3e) - ((long)local_90 - (long)local_88))
            >> 2;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    pvVar3 = local_88;
    if ((1 < uVar4) && ((((int)local_90 - (int)local_88 | -(int)local_88) & 3U) == 0)) {
      uVar4 = uVar4 & 0x3ffffffffffffffe;
      pvVar3 = (void *)((long)local_88 + uVar4 * -4);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    while (pvVar3 != local_90) {
      pvVar3 = (void *)((long)pvVar3 + -4);
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    local_88 = local_90;
    operator_delete(local_90);
  }
  return;
}


// ===== 0060ed2c  FUN_0060ed2c =====

void FUN_0060ed2c(long param_1)

{
  FUN_00617be0(param_1 + 0x48);
  return;
}


// ===== 0060ed38  FUN_0060ed38 =====

void FUN_0060ed38(long param_1)

{
  FUN_00617eb8(param_1 + 0x48);
  return;
}


// ===== 0060ed44  FUN_0060ed44 =====

void FUN_0060ed44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0060ed54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x680) + 0x98))();
  return;
}


// ===== 0060ed58  FUN_0060ed58 =====

void FUN_0060ed58(long *param_1,long **param_2,long **param_3)

{
  long **pplVar1;
  undefined8 **local_58;
  long *local_50;
  long *local_48;
  long **local_28;
  
  (**(code **)(*(long *)param_1[0xbb] + 0x68))();
  *(undefined1 *)(param_1 + 0xd1) = 0;
  (**(code **)(*param_1 + 8))(param_1);
  (**(code **)(*(long *)param_1[0xd0] + 0x48))(&local_58);
  pplVar1 = param_2 + 1;
  local_28 = param_2;
  FUN_005e3464(&local_28,*pplVar1);
  param_2[2] = local_48;
  *param_2 = (long *)local_58;
  *pplVar1 = local_50;
  if (local_48 == (long *)0x0) {
    *param_2 = (long *)pplVar1;
  }
  else {
    local_58 = &local_50;
    local_50[2] = (long)pplVar1;
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
  }
  local_28 = (long **)&local_58;
  FUN_005e3464(&local_28,local_50);
  (**(code **)(*(long *)param_1[0xd0] + 0x50))(&local_58);
  pplVar1 = param_3 + 1;
  local_28 = param_3;
  FUN_005e34d8(&local_28,*pplVar1);
  param_3[2] = local_48;
  *param_3 = (long *)local_58;
  *pplVar1 = local_50;
  if (local_48 == (long *)0x0) {
    *param_3 = (long *)pplVar1;
  }
  else {
    local_58 = &local_50;
    local_50[2] = (long)pplVar1;
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
  }
  local_28 = (long **)&local_58;
  FUN_005e34d8(&local_28,local_50);
  return;
}


// ===== 0060ee9c  FUN_0060ee9c =====

void FUN_0060ee9c(long param_1,undefined8 *param_2)

{
  size_t __n;
  size_t sVar1;
  undefined8 *__s1;
  undefined8 *__s2;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined4 *local_78;
  undefined4 *local_70;
  undefined4 *local_68;
  
  lVar13 = *(long *)(param_1 + 0x430);
  lVar15 = *(long *)(param_1 + 0x428);
  local_70 = (undefined4 *)0x0;
  local_68 = (undefined4 *)0x0;
  uVar10 = lVar13 - lVar15;
  local_78 = (undefined4 *)0x0;
  if (uVar10 != 0) {
    if ((long)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0060fffc();
    }
    local_78 = (undefined4 *)operator_new(uVar10);
    uVar7 = uVar10 - 4 >> 2;
    uVar11 = (ulong)-(long)local_78 >> 2;
    if (uVar7 <= (ulong)-(long)local_78 >> 2) {
      uVar11 = uVar7;
    }
    local_68 = (undefined4 *)((long)local_78 + uVar10);
    puVar8 = local_78;
    if ((0xf < uVar11) && ((((int)lVar13 - (int)lVar15 | -(int)local_78) & 3U) == 0)) {
      uVar10 = uVar11 + 1 & 7;
      uVar7 = 8;
      if (uVar10 != 0) {
        uVar7 = uVar10;
      }
      puVar12 = (undefined8 *)(local_78 + 4);
      lVar13 = (uVar11 + 1) - uVar7;
      puVar8 = local_78 + lVar13;
      do {
        lVar13 = lVar13 + -8;
        puVar12[-1] = 0x300000003;
        puVar12[-2] = 0x300000003;
        puVar12[1] = 0x300000003;
        *puVar12 = 0x300000003;
        puVar12 = puVar12 + 4;
      } while (lVar13 != 0);
    }
    do {
      if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar9 = puVar8 + 1;
      *puVar8 = 3;
      puVar8 = puVar9;
    } while (puVar9 != local_68);
  }
  local_70 = local_68;
  if (*(long *)(param_1 + 0x440) == *(long *)(param_1 + 0x448)) goto LAB_0060f118;
  puVar12 = (undefined8 *)*param_2;
  puVar14 = (undefined8 *)param_2[1];
  if (puVar12 == puVar14) goto LAB_0060f118;
  uVar10 = (long)local_68 - (long)local_78 >> 2;
  if (0 < (long)uVar10) {
    puVar8 = local_78;
    if (uVar10 < 8) {
LAB_0060eff8:
      *puVar8 = 4;
      if ((1 < uVar10) && (puVar8[1] = 4, uVar10 != 2)) {
        puVar8[2] = 4;
        if ((3 < uVar10) &&
           (((puVar8[3] = 4, uVar10 != 4 && (puVar8[4] = 4, 5 < uVar10)) &&
            (puVar8[5] = 4, uVar10 == 7)))) {
          puVar8[6] = 4;
        }
      }
    }
    else {
      puVar12 = (undefined8 *)(local_78 + 4);
      uVar11 = uVar10 & 0x7ffffffffffffff8;
      do {
        uVar11 = uVar11 - 8;
        puVar12[-1] = 0x400000004;
        puVar12[-2] = 0x400000004;
        puVar12[1] = 0x400000004;
        *puVar12 = 0x400000004;
        puVar12 = puVar12 + 4;
      } while (uVar11 != 0);
      bVar4 = uVar10 != (uVar10 & 0x7ffffffffffffff8);
      puVar8 = local_78 + (uVar10 & 0x7ffffffffffffff8);
      uVar10 = (ulong)((long)local_68 - (long)local_78) >> 2 & 7;
      if (bVar4) goto LAB_0060eff8;
    }
    puVar12 = (undefined8 *)*param_2;
    puVar14 = (undefined8 *)param_2[1];
  }
  for (; puVar12 != puVar14; puVar12 = puVar12 + 3) {
    puVar16 = *(undefined8 **)(param_1 + 0x440);
    lVar13 = *(long *)(param_1 + 0x448) - (long)puVar16;
    if (lVar13 != 0) {
      bVar2 = *(byte *)((long)puVar12 + 0x17);
      uVar10 = 0;
      __n = puVar12[1];
      if (-1 < (char)bVar2) {
        __n = (ulong)bVar2;
      }
      do {
        bVar3 = *(byte *)((long)puVar16 + 0x17);
        sVar1 = puVar16[1];
        if (-1 < (char)bVar3) {
          sVar1 = (ulong)bVar3;
        }
        if (sVar1 == __n) {
          __s1 = (undefined8 *)*puVar16;
          if (-1 < (char)bVar3) {
            __s1 = puVar16;
          }
          __s2 = (undefined8 *)*puVar12;
          if (-1 < (char)bVar2) {
            __s2 = puVar12;
          }
          iVar5 = memcmp(__s1,__s2,__n);
          if (iVar5 == 0) {
            if ((ulong)((long)local_70 - (long)local_78 >> 2) <= uVar10) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                        );
            }
            local_78[uVar10] = 3;
            break;
          }
        }
        uVar10 = uVar10 + 1;
        puVar16 = puVar16 + 3;
      } while ((lVar13 >> 3) * -0x5555555555555555 - uVar10 != 0);
    }
  }
LAB_0060f118:
  plVar6 = *(long **)(param_1 + 0x5d8);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x38))(plVar6,&local_78);
  }
  if (local_78 != (undefined4 *)0x0) {
    uVar11 = (ulong)((long)local_70 + (-4 - ((long)local_70 << 0x3e))) >> 2;
    uVar10 = (ulong)(((long)local_78 - (long)local_70 << 0x3e) - ((long)local_78 - (long)local_70))
             >> 2;
    if (uVar11 <= uVar10) {
      uVar10 = uVar11;
    }
    puVar8 = local_70;
    if ((1 < uVar10) && ((((int)local_78 - (int)local_70 | -(int)local_70) & 3U) == 0)) {
      uVar10 = uVar10 & 0x3ffffffffffffffe;
      puVar8 = local_70 + -uVar10;
      do {
        uVar10 = uVar10 - 2;
      } while (uVar10 != 0);
    }
    while (puVar8 != local_78) {
      puVar8 = puVar8 + -1;
      if (puVar8 == (undefined4 *)0x0) {
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
}


// ===== 0060f1fc  FUN_0060f1fc =====

void FUN_0060f1fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0060f20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x680) + 0x58))();
  return;
}


// ===== 0060f210  FUN_0060f210 =====

void FUN_0060f210(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0060f220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x680) + 0x38))();
  return;
}


// ===== 0060f224  FUN_0060f224 =====

void FUN_0060f224(long param_1)

{
  ulong uVar1;
  
  (**(code **)(**(long **)(param_1 + 0x680) + 0x30))(*(long **)(param_1 + 0x680),1);
  uVar1 = FUN_00841d54(param_1 + 0x728);
  if (((uVar1 & 1) == 0) && (*(char *)(param_1 + 0x740) == '\x01')) {
    FUN_0060eb20(param_1);
    return;
  }
  return;
}


// ===== 0060f288  FUN_0060f288 =====

void FUN_0060f288(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../video/video_send_stream_impl.cc",0x15a9,
                 "VideoSendStreamImpl::Stop");
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0x680) + 0x38))();
  if ((uVar2 & 1) != 0) {
    if (((DAT_00d64298 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d64298), iVar1 != 0)) {
      DAT_00d64290 = (char *)FUN_0066d328("webrtc");
      FUN_0054ff1c(&DAT_00d64298);
    }
    if (*DAT_00d64290 != '\0') {
      FUN_0066d348(0x49,DAT_00d64290,"VideoSendStream::Stop",0,0,0,0,0,0);
    }
    (**(code **)(**(long **)(param_1 + 0x680) + 0x30))(*(long **)(param_1 + 0x680),0);
    uVar2 = FUN_00841d54(param_1 + 0x728);
    if ((uVar2 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x738) + 8))(*(long **)(param_1 + 0x738),param_1 + 8);
      FUN_00841cf8(param_1 + 0x728);
      (**(code **)(**(long **)(param_1 + 0x5d8) + 0x48))(0,*(long **)(param_1 + 0x5d8),0,0,0,0);
      FUN_00618494(param_1 + 0x48,0);
      return;
    }
  }
  return;
}


// ===== 0060f3f0  FUN_0060f3f0 =====

void FUN_0060f3f0(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined1 uStack_119;
  long local_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  undefined5 uStack_78;
  undefined3 uStack_73;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined1 uStack_61;
  long *local_60 [2];
  code *local_50;
  code *pcStack_48;
  
  lStack_88 = param_2[0x11];
  local_90 = param_2[0x10];
  local_80 = param_2[0x12];
  lVar4 = *(long *)(param_1 + 0x720);
  uStack_6b = 0xaaaaaa;
  uStack_78 = (undefined5)param_2[0x13];
  lStack_c8 = param_2[9];
  local_d0 = param_2[8];
  lStack_b8 = param_2[0xb];
  lStack_c0 = param_2[10];
  uStack_73 = (undefined3)*(undefined8 *)((long)param_2 + 0x9d);
  uStack_70 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0x9d) >> 0x18);
  lStack_a8 = param_2[0xd];
  local_b0 = param_2[0xc];
  lStack_98 = param_2[0xf];
  lStack_a0 = param_2[0xe];
  lStack_108 = param_2[1];
  lStack_110 = *param_2;
  lStack_f8 = param_2[3];
  lStack_100 = param_2[2];
  lStack_e8 = param_2[5];
  local_f0 = param_2[4];
  lStack_d8 = param_2[7];
  lStack_e0 = param_2[6];
  local_118 = param_1;
  lVar1 = FUN_005d6490();
  if (lVar1 == lVar4) {
    FUN_0060f560(&local_118);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x768);
    plVar3 = *(long **)(param_1 + 0x720);
    if (lVar1 != 0) {
      FUN_00d0f740(1,lVar1);
    }
    plVar2 = (long *)operator_new(0xb0);
    plVar2[0x11] = local_90;
    plVar2[0x10] = lStack_98;
    plVar2[0x13] = local_80;
    plVar2[0x12] = lStack_88;
    plVar2[0x15] = CONCAT35(uStack_6b,uStack_70);
    plVar2[0x14] = CONCAT35(uStack_73,uStack_78);
    plVar2[9] = local_d0;
    plVar2[8] = lStack_d8;
    plVar2[0xb] = lStack_c0;
    plVar2[10] = lStack_c8;
    plVar2[0xd] = local_b0;
    plVar2[0xc] = lStack_b8;
    plVar2[0xf] = lStack_a0;
    plVar2[0xe] = lStack_a8;
    plVar2[1] = lStack_110;
    *plVar2 = local_118;
    plVar2[3] = lStack_100;
    plVar2[2] = lStack_108;
    plVar2[5] = local_f0;
    plVar2[4] = lStack_f8;
    plVar2[7] = lStack_e0;
    plVar2[6] = lStack_e8;
    local_60[0] = (long *)operator_new(0x30);
    *local_60[0] = lVar1;
    local_60[0][4] = (long)FUN_005ea56c;
    local_60[0][5] = (long)FUN_006100e8;
    local_60[0][2] = (long)plVar2;
    local_60[0][3] = 0xb0;
    local_50 = FUN_005db390;
    pcStack_48 = FUN_005db348;
    (**(code **)(*plVar3 + 8))(plVar3,local_60,&uStack_61,&uStack_119);
    (*local_50)(0,local_60,local_60);
  }
  return;
}


// ===== 0060f560  FUN_0060f560 =====

void FUN_0060f560(long *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar9 = *param_1;
  if (*(int *)(lVar9 + 0x750) == 0) {
    return;
  }
  uVar5 = (**(code **)(**(long **)(lVar9 + 0x28) + 0x10))();
  puVar1 = (uint *)(lVar9 + 0x770);
  uVar6 = uVar5 / 1000;
  if (499 < uVar5 % 1000) {
    uVar6 = uVar6 + 1;
  }
  if ((uVar5 & 0x8000000000000000) != 0) {
    uVar6 = -(-uVar5 / 1000) - (ulong)(500 < -uVar5 % 1000);
  }
  if (*(char *)(lVar9 + 0x8d0) == '\x01') {
    puVar7 = (uint *)(param_1 + 1);
    if ((*puVar1 <= *puVar7) && (*puVar7 < (*puVar1 * 0x6e) / 100)) {
      lVar8 = 0;
      do {
        uVar3 = FUN_007cbfa0(puVar7,lVar8,0);
        uVar4 = FUN_007cbfa0(lVar9 + 0x770,lVar8,0);
        if (((uVar3 ^ uVar4) & 1) != 0) {
LAB_0060f824:
          if ((*(byte *)(lVar9 + 0x8d0) & 1) != 0) goto LAB_0060f7a0;
          goto LAB_0060f82c;
        }
        uVar3 = FUN_007cbfa0(puVar7,lVar8,1);
        uVar4 = FUN_007cbfa0(lVar9 + 0x770,lVar8,1);
        if (((uVar3 ^ uVar4) & 1) != 0) goto LAB_0060f824;
        uVar3 = FUN_007cbfa0(puVar7,lVar8,2);
        uVar4 = FUN_007cbfa0(lVar9 + 0x770,lVar8,2);
        if (((uVar3 ^ uVar4) & 1) != 0) goto LAB_0060f824;
        uVar3 = FUN_007cbfa0(puVar7,lVar8,3);
        uVar4 = FUN_007cbfa0(lVar9 + 0x770,lVar8,3);
        if (((uVar3 ^ uVar4) & 1) != 0) goto LAB_0060f824;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 5);
      if ((*(byte *)(lVar9 + 0x8d0) & 1) == 0) {
LAB_0060f82c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                  );
      }
      if ((long)(uVar6 - *(long *)(lVar9 + 0x8c8)) < 500) {
        puVar2 = (undefined8 *)(lVar9 + 0x818);
        if (*(char *)(lVar9 + 0x8c0) == '\x01') {
          lVar11 = param_1[5];
          lVar10 = param_1[8];
          lVar8 = param_1[7];
          lVar12 = param_1[2];
          uVar13 = *(undefined8 *)puVar7;
          lVar15 = param_1[4];
          lVar14 = param_1[3];
          *(long *)(lVar9 + 0x840) = param_1[6];
          *(long *)(lVar9 + 0x838) = lVar11;
          *(long *)(lVar9 + 0x850) = lVar10;
          *(long *)(lVar9 + 0x848) = lVar8;
          *(long *)(lVar9 + 0x820) = lVar12;
          *puVar2 = uVar13;
          *(long *)(lVar9 + 0x830) = lVar15;
          *(long *)(lVar9 + 0x828) = lVar14;
          lVar11 = param_1[0xd];
          lVar10 = param_1[0x10];
          lVar8 = param_1[0xf];
          lVar14 = param_1[10];
          lVar12 = param_1[9];
          lVar16 = param_1[0xc];
          lVar15 = param_1[0xb];
          *(long *)(lVar9 + 0x880) = param_1[0xe];
          *(long *)(lVar9 + 0x878) = lVar11;
          *(long *)(lVar9 + 0x890) = lVar10;
          *(long *)(lVar9 + 0x888) = lVar8;
          *(long *)(lVar9 + 0x860) = lVar14;
          *(long *)(lVar9 + 0x858) = lVar12;
          *(long *)(lVar9 + 0x870) = lVar16;
          *(long *)(lVar9 + 0x868) = lVar15;
          lVar12 = param_1[0x12];
          lVar11 = param_1[0x11];
          lVar10 = param_1[0x14];
          lVar8 = param_1[0x13];
          *(undefined8 *)(lVar9 + 0x8b5) = *(undefined8 *)((long)param_1 + 0xa5);
          *(long *)(lVar9 + 0x8a0) = lVar12;
          *(long *)(lVar9 + 0x898) = lVar11;
          *(long *)(lVar9 + 0x8b0) = lVar10;
          *(long *)(lVar9 + 0x8a8) = lVar8;
          return;
        }
        if (puVar2 != (undefined8 *)0x0) {
          lVar11 = param_1[5];
          lVar10 = param_1[8];
          lVar8 = param_1[7];
          lVar12 = param_1[2];
          uVar13 = *(undefined8 *)puVar7;
          lVar15 = param_1[4];
          lVar14 = param_1[3];
          *(long *)(lVar9 + 0x840) = param_1[6];
          *(long *)(lVar9 + 0x838) = lVar11;
          *(long *)(lVar9 + 0x850) = lVar10;
          *(long *)(lVar9 + 0x848) = lVar8;
          *(long *)(lVar9 + 0x820) = lVar12;
          *puVar2 = uVar13;
          *(long *)(lVar9 + 0x830) = lVar15;
          *(long *)(lVar9 + 0x828) = lVar14;
          lVar11 = param_1[0xd];
          lVar10 = param_1[0x10];
          lVar8 = param_1[0xf];
          lVar14 = param_1[10];
          lVar12 = param_1[9];
          lVar16 = param_1[0xc];
          lVar15 = param_1[0xb];
          *(long *)(lVar9 + 0x880) = param_1[0xe];
          *(long *)(lVar9 + 0x878) = lVar11;
          *(long *)(lVar9 + 0x890) = lVar10;
          *(long *)(lVar9 + 0x888) = lVar8;
          *(long *)(lVar9 + 0x860) = lVar14;
          *(long *)(lVar9 + 0x858) = lVar12;
          *(long *)(lVar9 + 0x870) = lVar16;
          *(long *)(lVar9 + 0x868) = lVar15;
          lVar12 = param_1[0x12];
          lVar11 = param_1[0x11];
          lVar10 = param_1[0x14];
          lVar8 = param_1[0x13];
          *(long *)(lVar9 + 0x8b8) = param_1[0x15];
          *(long *)(lVar9 + 0x8a0) = lVar12;
          *(long *)(lVar9 + 0x898) = lVar11;
          *(long *)(lVar9 + 0x8b0) = lVar10;
          *(long *)(lVar9 + 0x8a8) = lVar8;
          *(undefined1 *)(lVar9 + 0x8c0) = 1;
          return;
        }
        goto LAB_0060f898;
      }
    }
  }
  else {
    if (puVar1 == (uint *)0x0) {
LAB_0060f898:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(undefined8 *)(lVar9 + 0x778) = 0;
    puVar1[0] = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar9 + 0x788) = 0;
    *(undefined8 *)(lVar9 + 0x780) = 0;
    *(undefined8 *)(lVar9 + 0x798) = 0;
    *(undefined8 *)(lVar9 + 0x790) = 0;
    *(undefined8 *)(lVar9 + 0x7a8) = 0;
    *(undefined8 *)(lVar9 + 0x7a0) = 0;
    *(undefined8 *)(lVar9 + 0x7b8) = 0;
    *(undefined8 *)(lVar9 + 0x7b0) = 0;
    *(undefined8 *)(lVar9 + 0x7c8) = 0;
    *(undefined8 *)(lVar9 + 0x7c0) = 0;
    *(undefined8 *)(lVar9 + 0x7d8) = 0;
    *(undefined8 *)(lVar9 + 2000) = 0;
    *(undefined8 *)(lVar9 + 0x7e8) = 0;
    *(undefined8 *)(lVar9 + 0x7e0) = 0;
    *(undefined8 *)(lVar9 + 0x7f8) = 0;
    *(undefined8 *)(lVar9 + 0x7f0) = 0;
    *(undefined8 *)(lVar9 + 0x808) = 0;
    *(undefined8 *)(lVar9 + 0x800) = 0;
    *(undefined8 *)(lVar9 + 0x818) = 0;
    *(undefined8 *)(lVar9 + 0x810) = 0;
    *(undefined8 *)(lVar9 + 0x828) = 0;
    *(undefined8 *)(lVar9 + 0x820) = 0;
    *(undefined8 *)(lVar9 + 0x838) = 0;
    *(undefined8 *)(lVar9 + 0x830) = 0;
    *(undefined8 *)(lVar9 + 0x848) = 0;
    *(undefined8 *)(lVar9 + 0x840) = 0;
    *(undefined8 *)(lVar9 + 0x858) = 0;
    *(undefined8 *)(lVar9 + 0x850) = 0;
    *(undefined8 *)(lVar9 + 0x868) = 0;
    *(undefined8 *)(lVar9 + 0x860) = 0;
    *(undefined8 *)(lVar9 + 0x878) = 0;
    *(undefined8 *)(lVar9 + 0x870) = 0;
    *(undefined8 *)(lVar9 + 0x888) = 0;
    *(undefined8 *)(lVar9 + 0x880) = 0;
    *(undefined8 *)(lVar9 + 0x898) = 0;
    *(undefined8 *)(lVar9 + 0x890) = 0;
    *(undefined8 *)(lVar9 + 0x8a8) = 0;
    *(undefined8 *)(lVar9 + 0x8a0) = 0;
    *(undefined8 *)(lVar9 + 0x8b8) = 0;
    *(undefined8 *)(lVar9 + 0x8b0) = 0;
    *(undefined8 *)(lVar9 + 0x8c8) = 0;
    *(undefined8 *)(lVar9 + 0x8c0) = 0;
    FUN_007cbe28(lVar9 + 0x770);
    *(undefined1 *)(lVar9 + 0x818) = 0;
    *(undefined1 *)(lVar9 + 0x8c0) = 0;
    *(undefined1 *)(lVar9 + 0x8d0) = 1;
  }
LAB_0060f7a0:
  lVar10 = param_1[8];
  lVar8 = param_1[7];
  lVar11 = param_1[5];
  lVar14 = param_1[2];
  lVar12 = param_1[1];
  lVar16 = param_1[4];
  lVar15 = param_1[3];
  *(long *)(lVar9 + 0x798) = param_1[6];
  *(long *)(lVar9 + 0x790) = lVar11;
  *(long *)(lVar9 + 0x7a8) = lVar10;
  *(long *)(lVar9 + 0x7a0) = lVar8;
  *(long *)(lVar9 + 0x778) = lVar14;
  *(long *)puVar1 = lVar12;
  *(long *)(lVar9 + 0x788) = lVar16;
  *(long *)(lVar9 + 0x780) = lVar15;
  lVar10 = param_1[0x10];
  lVar8 = param_1[0xf];
  lVar11 = param_1[0xd];
  lVar14 = param_1[10];
  lVar12 = param_1[9];
  lVar16 = param_1[0xc];
  lVar15 = param_1[0xb];
  *(long *)(lVar9 + 0x7d8) = param_1[0xe];
  *(long *)(lVar9 + 2000) = lVar11;
  *(long *)(lVar9 + 0x7e8) = lVar10;
  *(long *)(lVar9 + 0x7e0) = lVar8;
  *(long *)(lVar9 + 0x7b8) = lVar14;
  *(long *)(lVar9 + 0x7b0) = lVar12;
  *(long *)(lVar9 + 0x7c8) = lVar16;
  *(long *)(lVar9 + 0x7c0) = lVar15;
  lVar10 = param_1[0x14];
  lVar8 = param_1[0x13];
  lVar12 = param_1[0x12];
  lVar11 = param_1[0x11];
  *(undefined8 *)(lVar9 + 0x80d) = *(undefined8 *)((long)param_1 + 0xa5);
  *(long *)(lVar9 + 0x7f8) = lVar12;
  *(long *)(lVar9 + 0x7f0) = lVar11;
  *(long *)(lVar9 + 0x808) = lVar10;
  *(long *)(lVar9 + 0x800) = lVar8;
  if (*(char *)(lVar9 + 0x8c0) == '\x01') {
    *(undefined1 *)(lVar9 + 0x8c0) = 0;
  }
  *(ulong *)(lVar9 + 0x8c8) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x0060f820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar9 + 0x680) + 0x60))(*(long **)(lVar9 + 0x680),param_1 + 1);
  return;
}


// ===== 0060f8ac  FUN_0060f8ac =====

void FUN_0060f8ac(long param_1)

{
  FUN_0060f3f0(param_1 + -0x10);
  return;
}


// ===== 0060f8b8  FUN_0060f8b8 =====

void FUN_0060f8b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0060f8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x680) + 0x68))();
  return;
}


// ===== 0060f8cc  FUN_0060f8cc =====

void FUN_0060f8cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0060f8dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x670) + 0x68))();
  return;
}


// ===== 0060f8e0  FUN_0060f8e0 =====

void FUN_0060f8e0(long param_1)

{
  ulong uVar1;
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  byte local_38;
  undefined8 local_30;
  uint local_28;
  undefined1 local_24;
  
  uVar1 = FUN_00841d54(param_1 + 0x728);
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_00417e08();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../video/video_send_stream_impl.cc",0x1881,
                   "SignalEncoderActive, Encoder is active.");
    }
    local_50 = *(undefined8 *)(param_1 + 0x748);
    if ((*(byte *)(param_1 + 0x741) & 1) == 0) {
      local_48 = *(undefined4 *)(param_1 + 0x744);
    }
    else {
      local_48 = 0;
    }
    local_40 = (long)*(int *)(param_1 + 0x760);
    local_30 = *(undefined8 *)(param_1 + 0x758);
    local_38 = *(byte *)(param_1 + 0x590) ^ 1;
    local_24 = *(int *)(param_1 + 0x5d0) == 0;
    if ((bool)local_24) {
      local_28 = 1;
    }
    else {
      local_28 = local_28 & 0xffffff00;
    }
    (**(code **)**(undefined8 **)(param_1 + 0x738))
              (*(undefined8 **)(param_1 + 0x738),param_1 + 8,&local_50);
  }
  return;
}


// ===== 0060f9b4  FUN_0060f9b4 =====

void FUN_0060f9b4(long param_1,long *param_2,byte param_3,undefined4 param_4,undefined4 param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uStack_72;
  undefined1 uStack_71;
  long *local_70 [2];
  code *local_60;
  code *pcStack_58;
  
  lVar4 = param_2[2];
  lVar6 = param_2[1];
  lVar5 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  lVar3 = *(long *)(param_1 + 0x768);
  plVar2 = *(long **)(param_1 + 0x720);
  if (lVar3 != 0) {
    FUN_00d0f740(1,lVar3);
  }
  plVar1 = (long *)operator_new(0x30);
  *(undefined2 *)((long)plVar1 + 0x21) = 0xaaaa;
  *plVar1 = param_1;
  plVar1[2] = lVar6;
  plVar1[1] = lVar5;
  plVar1[3] = lVar4;
  *(byte *)(plVar1 + 4) = param_3 & 1;
  *(undefined1 *)((long)plVar1 + 0x23) = 0xaa;
  *(undefined4 *)((long)plVar1 + 0x24) = param_4;
  *(undefined4 *)(plVar1 + 5) = param_5;
  local_70[0] = (long *)operator_new(0x30);
  *local_70[0] = lVar3;
  local_70[0][4] = (long)FUN_00610658;
  local_70[0][5] = (long)FUN_006100f4;
  local_70[0][2] = (long)plVar1;
  local_60 = FUN_005db390;
  pcStack_58 = FUN_005db348;
  (**(code **)(*plVar2 + 8))(plVar2,local_70,&uStack_71,&uStack_72);
  (*local_60)(0,local_70,local_70);
  return;
}


// ===== 0060fad4  FUN_0060fad4 =====

void FUN_0060fad4(long param_1,long *param_2,byte param_3,undefined4 param_4,undefined4 param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uStack_72;
  undefined1 uStack_71;
  long *local_70 [2];
  code *local_60;
  code *pcStack_58;
  
  lVar4 = param_2[2];
  lVar6 = param_2[1];
  lVar5 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  lVar3 = *(long *)(param_1 + 0x758);
  plVar2 = *(long **)(param_1 + 0x710);
  if (lVar3 != 0) {
    FUN_00d0f740(1,lVar3);
  }
  plVar1 = (long *)operator_new(0x30);
  *(undefined2 *)((long)plVar1 + 0x21) = 0xaaaa;
  *plVar1 = param_1 + -0x10;
  plVar1[2] = lVar6;
  plVar1[1] = lVar5;
  plVar1[3] = lVar4;
  *(byte *)(plVar1 + 4) = param_3 & 1;
  *(undefined1 *)((long)plVar1 + 0x23) = 0xaa;
  *(undefined4 *)((long)plVar1 + 0x24) = param_4;
  *(undefined4 *)(plVar1 + 5) = param_5;
  local_70[0] = (long *)operator_new(0x30);
  *local_70[0] = lVar3;
  local_70[0][4] = (long)FUN_00610658;
  local_70[0][5] = (long)FUN_006100f4;
  local_70[0][2] = (long)plVar1;
  local_60 = FUN_005db390;
  pcStack_58 = FUN_005db348;
  (**(code **)(*plVar2 + 8))(plVar2,local_70,&uStack_71,&uStack_72);
  (*local_60)(0,local_70,local_70);
  return;
}


// ===== 0060fbf8  FUN_0060fbf8 =====

void FUN_0060fbf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *local_60 [2];
  code *local_50;
  code *pcStack_48;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  *(undefined4 *)(param_1 + 0x730) = 1;
  lVar2 = *(long *)(param_1 + 0x768);
  plVar1 = *(long **)(param_1 + 0x720);
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2);
  }
  local_60[0] = (long *)operator_new(0x30);
  *local_60[0] = lVar2;
  local_60[0][4] = (long)FUN_004473ec;
  local_60[0][5] = (long)FUN_006108d8;
  local_60[0][2] = param_1;
  local_50 = FUN_005db390;
  pcStack_48 = FUN_005db348;
  (**(code **)(*plVar1 + 8))(plVar1,local_60,&uStack_21,&uStack_22);
  (*local_50)(0,local_60,local_60);
  (**(code **)(**(long **)(param_1 + 0x680) + 0x10))(*(long **)(param_1 + 0x680),param_2,param_3);
  return;
}


// ===== 0060fce8  FUN_0060fce8 =====

void FUN_0060fce8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 uStack_62;
  undefined1 uStack_61;
  long *local_60 [2];
  code *local_50;
  code *pcStack_48;
  
  *(undefined4 *)(param_1 + 0x720) = 1;
  lVar2 = *(long *)(param_1 + 0x758);
  plVar1 = *(long **)(param_1 + 0x710);
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2);
  }
  local_60[0] = (long *)operator_new(0x30);
  *local_60[0] = lVar2;
  local_60[0][4] = (long)FUN_004473ec;
  local_60[0][5] = (long)FUN_006108d8;
  local_60[0][2] = param_1 + -0x10;
  local_50 = FUN_005db390;
  pcStack_48 = FUN_005db348;
  (**(code **)(*plVar1 + 8))(plVar1,local_60,&uStack_61,&uStack_62);
  (*local_50)(0,local_60,local_60);
  (**(code **)(**(long **)(param_1 + 0x670) + 0x10))(*(long **)(param_1 + 0x670),param_2,param_3);
  return;
}


// ===== 0060fddc  FUN_0060fddc =====

void FUN_0060fddc(long param_1)

{
  *(undefined4 *)(param_1 + 0x730) = 1;
  return;
}


// ===== 0060fdf0  FUN_0060fdf0 =====

void FUN_0060fdf0(long param_1)

{
  *(undefined4 *)(param_1 + 0x720) = 1;
  return;
}


// ===== 0060fe04  FUN_0060fe04 =====

uint FUN_0060fe04(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uStack_58 = param_2[1];
  local_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  local_40 = param_2[4];
  plVar8 = *(long **)(param_1 + 0x680);
  uVar4 = FUN_00619338(param_1 + 0x48);
  (**(code **)(*plVar8 + 0x70))(plVar8,&local_60,uVar4);
  uVar4 = (**(code **)(**(long **)(param_1 + 0x680) + 0x80))();
  *(undefined4 *)(param_1 + 0x750) = uVar4;
  uVar5 = (**(code **)(**(long **)(param_1 + 0x680) + 0x88))(*(long **)(param_1 + 0x680));
  uVar3 = *(uint *)(param_1 + 0x750);
  uVar1 = uVar3;
  if (*(uint *)(param_1 + 0x74c) <= uVar3) {
    uVar1 = *(uint *)(param_1 + 0x74c);
  }
  *(uint *)(param_1 + 0x750) = uVar1;
  uVar6 = param_2[2];
  uVar7 = uVar6 / 1000;
  if (499 < uVar6 % 1000) {
    uVar7 = uVar7 + 1;
  }
  if ((uVar6 & 0x8000000000000000) != 0) {
    uVar7 = -(-uVar6 / 1000) - (ulong)(500 < -uVar6 % 1000);
  }
  uVar2 = 0;
  if (uVar5 <= uVar3) {
    uVar2 = uVar3 - uVar5;
  }
  uVar3 = uVar1;
  if (uVar1 <= uVar2) {
    uVar3 = uVar2;
  }
  (**(code **)(**(long **)(param_1 + 0x5d8) + 0x48))
            (param_2[4],*(long **)(param_1 + 0x5d8),uVar1,uVar3,(int)((double)param_2[1] * 256.0),
             uVar7);
  FUN_00618494(param_1 + 0x48,*(undefined4 *)(param_1 + 0x750));
  return uVar5;
}


// ===== 0060ff48  FUN_0060ff48 =====

void FUN_0060ff48(long param_1)

{
  FUN_0060fe04(param_1 + -8);
  return;
}


// ===== 0060ff54  FUN_0060ff54 =====

undefined1  [16] FUN_0060ff54(void)

{
  return ZEXT816(0);
}


// ===== 0060ff64  FUN_0060ff64 =====

undefined1  [16] FUN_0060ff64(void)

{
  return ZEXT816(0);
}


// ===== 0060ff74  FUN_0060ff74 =====

void FUN_0060ff74(void)

{
  return;
}


// ===== 0060ff7c  FUN_0060ff7c =====

void FUN_0060ff7c(void)

{
  return;
}


// ===== 0060ff84  FUN_0060ff84 =====

void FUN_0060ff84(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0060ff90  FUN_0060ff90 =====

void FUN_0060ff90(long param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_0061a848(*(undefined8 *)(param_1 + 8),param_4);
  if ((param_2 >> 0x10 & 1) == 0) {
    return;
  }
  FUN_005f3a2c(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4);
  return;
}


// ===== 0060fffc  FUN_0060fffc =====

void FUN_0060fffc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00610014  FUN_00610014 =====

void FUN_00610014(long *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_3[1] - *param_3;
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = *param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00610038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*param_1 + 0x680) + 0xa0))
            (*(long **)(*param_1 + 0x680),param_2,lVar1,lVar2 >> 1);
  return;
}


// ===== 0061003c  FUN_0061003c =====

char * FUN_0061003c(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if ((*(byte *)(lVar2 + 0x730) & 1) == 0) {
    if (((*(byte *)(lVar2 + 0x731) & 1) == 0) && (*(int *)(lVar2 + 0x750) != 0)) {
      uVar1 = FUN_00417e08();
      if ((uVar1 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../video/video_send_stream_impl.cc",0x1681,
                     "SignalEncoderTimedOut, Encoder timed out.");
      }
      (**(code **)(**(long **)(lVar2 + 0x738) + 8))(*(long **)(lVar2 + 0x738),lVar2 + 8);
    }
    *(undefined1 *)(lVar2 + 0x731) = 1;
    *(undefined1 *)(lVar2 + 0x741) = 1;
  }
  else if (*(byte *)(lVar2 + 0x731) != 0) {
    FUN_0060f8e0(lVar2);
    *(undefined1 *)(lVar2 + 0x731) = 0;
  }
  *(undefined4 *)(lVar2 + 0x730) = 0;
  return "nt read_session_ticket";
}


// ===== 006100e8  FUN_006100e8 =====

void FUN_006100e8(undefined8 *param_1)

{
  FUN_0060f560(*param_1);
  return;
}


// ===== 006100f4  FUN_006100f4 =====

void FUN_006100f4(undefined8 *param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  void *pvVar8;
  int iVar9;
  uint uVar10;
  ulong extraout_x1;
  undefined8 uVar11;
  undefined4 uVar12;
  long lVar13;
  undefined8 *puVar14;
  int *piVar15;
  undefined8 *puVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  void *pvVar21;
  ulong uVar22;
  long lVar23;
  long *plVar24;
  double dVar25;
  void *local_a8;
  void *local_a0;
  void *local_98;
  byte local_90;
  undefined8 local_88;
  uint local_80;
  undefined1 local_7c;
  char **local_78;
  char *local_70;
  char *pcStack_68;
  
  plVar24 = (long *)*param_1;
  lVar23 = *plVar24;
  if (((DAT_00d642a8 & 1) == 0) && (iVar9 = FUN_0054fdd4(&DAT_00d642a8), iVar9 != 0)) {
    DAT_00d642a0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d642a8);
  }
  local_78 = (char **)0x0;
  pcStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d642a0 != '\0') {
    FUN_0066d348(0x42,DAT_00d642a0,"VideoSendStream::OnEncoderConfigurationChanged",0,0,0,0,0,0);
    local_70 = DAT_00d642a0;
    pcStack_68 = "VideoSendStream::OnEncoderConfigurationChanged";
    local_78 = &local_70;
  }
  iVar9 = FUN_007b8cec(lVar23 + 0x4a0);
  uVar10 = FUN_009469c8(*(undefined8 *)(lVar23 + 0x20),iVar9);
  if ((extraout_x1 & 1) == 0) {
    if (plVar24[2] == plVar24[1]) goto LAB_00610600;
    uVar10 = *(uint *)(plVar24[1] + 0x14);
    uVar17 = 15000;
    if (iVar9 != 3) {
      uVar17 = *(uint *)PTR_DAT_00d52030;
    }
    if ((int)uVar10 <= (int)uVar17) {
      uVar10 = uVar17;
    }
  }
  *(uint *)(lVar23 + 0x748) = uVar10;
  lVar13 = plVar24[1];
  if (lVar13 == plVar24[2]) {
    *(undefined8 *)(lVar23 + 0x758) = 0;
  }
  else {
    dVar25 = 0.0;
    uVar17 = 0;
    do {
      if (*(char *)(lVar13 + 0x52) == '\x01') {
        uVar17 = *(int *)(lVar13 + 0x1c) + uVar17;
      }
      if (*(char *)(lVar13 + 0x48) == '\x01') {
        dVar25 = dVar25 + *(double *)(lVar13 + 0x40);
      }
      lVar13 = lVar13 + 200;
    } while (lVar13 != plVar24[2]);
    *(double *)(lVar23 + 0x758) = dVar25;
    if (uVar17 != 0) {
      if (uVar10 <= uVar17) {
        uVar10 = uVar17;
      }
      *(uint *)(lVar23 + 0x74c) = uVar10;
    }
  }
  cVar4 = *(char *)(lVar23 + 0x590);
  bVar5 = *(byte *)(lVar23 + 0x689);
  local_a0 = (void *)0x0;
  local_98 = (void *)0x0;
  lVar13 = plVar24[1];
  lVar2 = plVar24[2];
  bVar6 = *(byte *)(plVar24 + 4);
  local_a8 = (void *)0x0;
  iVar9 = *(int *)((long)plVar24 + 0x24);
  lVar7 = plVar24[5];
  if (lVar13 == lVar2) {
    pvVar21 = (void *)0x0;
  }
  else {
    pvVar21 = (void *)0x0;
    do {
      if (*(char *)(lVar13 + 0x52) == '\x01') {
        if (pvVar21 < local_98) {
          if (pvVar21 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          FUN_00849240(pvVar21,lVar13);
          pvVar21 = (void *)((long)pvVar21 + 200);
          local_a0 = pvVar21;
        }
        else {
          pvVar21 = (void *)FUN_0061071c(&local_a8,lVar13);
          local_a0 = pvVar21;
        }
      }
      lVar13 = lVar13 + 200;
    } while (lVar13 != lVar2);
  }
  pvVar8 = local_a8;
  lVar13 = ((long)pvVar21 - (long)local_a8 >> 3) * -0x70a3d70a3d70a3d7;
  uVar22 = lVar13 - 1;
  dVar25 = DAT_001f5340;
  if (lVar13 == 0 || uVar22 == 0) {
    if ((local_a8 == pvVar21) || ((bVar6 & 1) == 0)) {
      iVar9 = 0;
      if ((local_a8 == pvVar21) || (cVar4 == '\0')) goto LAB_00610430;
      goto LAB_0061038c;
    }
    if ((bVar5 & 1) != 0) goto LAB_00610370;
    if (iVar9 != 1) {
      dVar25 = 1.2;
    }
  }
  else {
    if ((bVar5 & 1) != 0) {
LAB_00610370:
      if (pvVar21 == local_a8) goto LAB_00610600;
LAB_0061038c:
      iVar9 = *(int *)((long)local_a8 + 0x14);
      goto LAB_00610430;
    }
    if (iVar9 != 1) {
      dVar25 = 1.2;
    }
    if (bVar6 == 0) {
      if (pvVar21 != local_a8) {
        iVar9 = *(int *)((long)local_a8 + uVar22 * 200 + 0x18);
        iVar19 = (int)(dVar25 * (double)*(int *)((long)local_a8 + uVar22 * 200 + 0x14) + 0.5);
        if (iVar19 <= iVar9) {
          iVar9 = iVar19;
        }
        if ((long)pvVar21 - (long)local_a8 == 400) {
          uVar18 = 0;
        }
        else {
          iVar19 = 0;
          uVar18 = uVar22 & 0xfffffffffffffffe;
          piVar15 = (int *)((long)local_a8 + 0xe0);
          uVar20 = uVar22 & 0xfffffffffffffffe;
          do {
            piVar1 = piVar15 + -0x32;
            iVar3 = *piVar15;
            uVar20 = uVar20 - 2;
            piVar15 = piVar15 + 100;
            iVar9 = *piVar1 + iVar9;
            iVar19 = iVar3 + iVar19;
          } while (uVar20 != 0);
          iVar9 = iVar19 + iVar9;
          if (uVar22 == uVar18) goto LAB_00610430;
        }
        lVar13 = ~uVar18 + lVar13;
        piVar15 = (int *)((long)local_a8 + uVar18 * 200 + 0x18);
        do {
          lVar13 = lVar13 + -1;
          iVar9 = *piVar15 + iVar9;
          piVar15 = piVar15 + 0x32;
        } while (lVar13 != 0);
        goto LAB_00610430;
      }
      goto LAB_00610600;
    }
  }
  if (pvVar21 == local_a8) {
LAB_00610600:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
              );
  }
  iVar9 = (int)(dVar25 * (double)*(int *)((long)local_a8 + 0x18) + 0.5);
LAB_00610430:
  if (local_a8 != (void *)0x0) {
    while (pvVar8 != pvVar21) {
      pvVar21 = (void *)((long)pvVar21 + -200);
      if (pvVar21 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_008492a8(pvVar21);
    }
    local_a0 = pvVar8;
    operator_delete(local_a8);
  }
  if (iVar9 <= (int)lVar7) {
    iVar9 = (int)lVar7;
  }
  *(int *)(lVar23 + 0x744) = iVar9;
  puVar14 = (undefined8 *)plVar24[1];
  puVar16 = (undefined8 *)plVar24[2];
  uVar22 = ((long)puVar16 - (long)puVar14 >> 3) * -0x70a3d70a3d70a3d7;
  lVar13 = *(long *)(lVar23 + 0x428);
  if (uVar22 < (ulong)(*(long *)(lVar23 + 0x430) - lVar13 >> 2)) {
    do {
      FUN_006182f8(lVar23 + 0x48,*(undefined4 *)(lVar13 + uVar22 * 4));
      lVar13 = *(long *)(lVar23 + 0x428);
      uVar22 = uVar22 + 1;
    } while (uVar22 < (ulong)(*(long *)(lVar23 + 0x430) - lVar13 >> 2));
    puVar14 = (undefined8 *)plVar24[1];
    puVar16 = (undefined8 *)plVar24[2];
  }
  if (puVar14 == puVar16) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
              );
  }
  if (*(char *)(puVar16 + -0x12) == '\x01') {
    uVar11 = puVar16[-0x13];
  }
  else {
    uVar11 = 1;
  }
  (**(code **)(**(long **)(lVar23 + 0x680) + 0x90))
            (*(long **)(lVar23 + 0x680),*puVar14,puVar14[1],uVar11);
  uVar22 = FUN_00841d54(lVar23 + 0x728);
  if ((uVar22 & 1) != 0) {
    local_a8 = *(void **)(lVar23 + 0x748);
    if ((*(byte *)(lVar23 + 0x741) & 1) == 0) {
      uVar12 = *(undefined4 *)(lVar23 + 0x744);
    }
    else {
      uVar12 = 0;
    }
    local_a0 = (void *)CONCAT44(local_a0._4_4_,uVar12);
    local_98 = (void *)(long)*(int *)(lVar23 + 0x760);
    local_90 = *(byte *)(lVar23 + 0x590) ^ 1;
    local_88 = *(undefined8 *)(lVar23 + 0x758);
    local_7c = *(int *)(lVar23 + 0x5d0) == 0;
    if ((bool)local_7c) {
      local_80 = 1;
    }
    else {
      local_80 = local_80 & 0xffffff00;
    }
    (**(code **)**(undefined8 **)(lVar23 + 0x738))
              (*(undefined8 **)(lVar23 + 0x738),lVar23 + 8,&local_a8);
  }
  if ((local_78 != (char **)0x0) && (**local_78 != '\0')) {
    FUN_0066d348(0x45,*local_78,local_78[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 00610658  FUN_00610658 =====

void FUN_00610658(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x61071c);
      (*pcVar1)();
    }
    pvVar3 = (void *)*param_2;
    if (pvVar3 != (void *)0x0) {
      pvVar5 = *(void **)((long)pvVar3 + 8);
      if (pvVar5 != (void *)0x0) {
        pvVar4 = *(void **)((long)pvVar3 + 0x10);
        pvVar2 = pvVar5;
        if (pvVar5 != pvVar4) {
          do {
            pvVar4 = (void *)((long)pvVar4 + -200);
            if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            FUN_008492a8(pvVar4);
          } while (pvVar4 != pvVar5);
          pvVar2 = *(void **)((long)pvVar3 + 8);
        }
        *(void **)((long)pvVar3 + 0x10) = pvVar5;
        operator_delete(pvVar2);
      }
      operator_delete(pvVar3);
      return;
    }
  }
  return;
}


// ===== 0061071c  FUN_0061071c =====

long FUN_0061071c(long *param_1,undefined8 param_2)

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
  uVar3 = (lVar6 >> 3) * -0x70a3d70a3d70a3d7 + 1;
  if (uVar3 < 0x147ae147ae147af) {
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar4 * 0x1eb851eb851eb852;
    if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
      uVar5 = uVar3;
    }
    if (0xa3d70a3d70a3d6 < (ulong)(lVar4 * -0x70a3d70a3d70a3d7)) {
      uVar5 = 0x147ae147ae147ae;
    }
    if (uVar5 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0x147ae147ae147ae < uVar5) goto LAB_006108bc;
      pvVar2 = operator_new(uVar5 * 200);
      lVar6 = (long)pvVar2 + lVar6;
    }
    if (lVar6 == 0) {
LAB_00610890:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_00849240(lVar6,param_2);
    pvVar7 = (void *)*param_1;
    pvVar1 = (void *)param_1[1];
    lVar4 = (long)pvVar7 + (lVar6 - (long)pvVar1);
    pvVar8 = pvVar7;
    lVar9 = lVar4;
    if (pvVar1 != pvVar7) {
      do {
        if (lVar9 == 0) goto LAB_00610890;
        FUN_00849240(lVar9,pvVar8);
        pvVar8 = (void *)((long)pvVar8 + 200);
        lVar9 = lVar9 + 200;
      } while (pvVar8 != pvVar1);
      do {
        if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_008492a8(pvVar7);
        pvVar7 = (void *)((long)pvVar7 + 200);
      } while (pvVar7 != pvVar1);
      pvVar7 = (void *)*param_1;
    }
    *param_1 = lVar4;
    param_1[1] = lVar6 + 200;
    param_1[2] = (long)((long)pvVar2 + uVar5 * 200);
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
    return lVar6 + 200;
  }
  FUN_006108c0();
LAB_006108bc:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 006108c0  FUN_006108c0 =====

void FUN_006108c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 006108d8  FUN_006108d8 =====

void FUN_006108d8(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  if (*(char *)((long)plVar1 + 0x741) == '\x01') {
    *(undefined1 *)((long)plVar1 + 0x741) = 0;
    FUN_0060f8e0(plVar1);
  }
  if (((char)plVar1[0x11a] == '\x01') && ((char)plVar1[0x118] == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00610938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x88))(plVar1,plVar1 + 0x103);
    return;
  }
  return;
}


// ===== 0061094c  FUN_0061094c =====

void FUN_0061094c(undefined8 *param_1,long *param_2,long param_3,undefined4 param_4,long *param_5)

{
  char *pcVar1;
  undefined1 *puVar2;
  long ****pppplVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  void *pvVar8;
  char ****ppppcVar9;
  ulong uVar10;
  undefined8 uVar11;
  char ***local_88;
  long local_80;
  char cStack_71;
  long ***local_70;
  undefined1 *puStack_68;
  undefined8 local_60;
  undefined4 local_4c;
  uint local_48;
  int local_44;
  
  param_1[6] = param_2;
  *param_1 = &PTR_FUN_00d274e0;
  param_1[1] = &PTR_FUN_00d275b8;
  param_1[2] = &PTR_FUN_00d275e0;
  param_1[3] = &PTR_FUN_00d27608;
  param_1[4] = &PTR_FUN_00d27638;
  param_1[5] = &PTR_FUN_00d27660;
  if (*(char *)(param_3 + 0x8f) < '\0') {
    FUN_005478d8(param_1 + 7,*(undefined8 *)(param_3 + 0x78),*(undefined8 *)(param_3 + 0x80));
  }
  else {
    uVar11 = *(undefined8 *)(param_3 + 0x80);
    uVar7 = *(undefined8 *)(param_3 + 0x78);
    param_1[9] = *(undefined8 *)(param_3 + 0x88);
    param_1[8] = uVar11;
    param_1[7] = uVar7;
  }
  FUN_00843c1c(param_1 + 10,param_3);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = (long ***)&DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_5 + 0x10))(&local_70,param_5,"WebRTC-VP8-Forced-Fallback-Encoder-v2",0x25);
  uVar5 = (uint)(char)local_60._7_1_;
  puVar2 = puStack_68;
  if (-1 < (int)uVar5) {
    puVar2 = (undefined1 *)(ulong)local_60._7_1_;
  }
  if (puVar2 < (undefined1 *)0x7) {
LAB_00610a58:
    uVar10 = 0;
    if ((uVar5 >> 7 & 1) != 0) {
LAB_00610a64:
      operator_delete(local_70);
    }
  }
  else {
    pppplVar3 = (long ****)local_70;
    if (-1 < (int)uVar5) {
      pppplVar3 = &local_70;
    }
    if (*(int *)pppplVar3 != 0x62616e45 || *(int *)((long)pppplVar3 + 3) != 0x64656c62)
    goto LAB_00610a58;
    FUN_00547e10(&local_88,&local_70,7,0xffffffffffffffff,&local_44);
    if (cStack_71 < '\0') {
      ppppcVar9 = (char ****)local_88;
      if (local_80 != 0) goto LAB_00610cb0;
      uVar10 = 0;
LAB_00610d9c:
      operator_delete(local_88);
    }
    else if (cStack_71 == '\0') {
      uVar10 = 0;
    }
    else {
      ppppcVar9 = &local_88;
LAB_00610cb0:
      local_48 = 0xaaaaaaaa;
      local_44 = -0x55555556;
      local_4c = 0xaaaaaaaa;
      iVar6 = sscanf((char *)ppppcVar9,"-%d,%d,%d",&local_44,&local_48,&local_4c);
      if (iVar6 == 3) {
        uVar10 = 0;
        if (((0 < local_44) && (0 < (int)local_48)) && (local_44 <= (int)local_48)) {
          uVar10 = (ulong)local_48 | 0x100000000;
        }
      }
      else {
        uVar10 = 0;
      }
      if (cStack_71 < '\0') goto LAB_00610d9c;
    }
    if ((long)local_60 < 0) goto LAB_00610a64;
  }
  *(int *)(param_1 + 0x2f) = (int)uVar10;
  *(char *)((long)param_1 + 0x17c) = (char)(uVar10 >> 0x20);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = (long ***)&DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_5 + 0x10))(&local_70,param_5,"WebRTC-VP8-Forced-Fallback-Encoder-v2",0x25);
  uVar5 = (uint)(char)local_60._7_1_;
  puVar2 = puStack_68;
  if (-1 < (int)uVar5) {
    puVar2 = (undefined1 *)(ulong)local_60._7_1_;
  }
  if (puVar2 < (undefined1 *)0x8) {
LAB_00610af4:
    uVar10 = 0;
    if ((uVar5 >> 7 & 1) == 0) goto LAB_00610b0c;
  }
  else {
    pppplVar3 = (long ****)local_70;
    if (-1 < (int)uVar5) {
      pppplVar3 = &local_70;
    }
    if (*pppplVar3 != (long ***)0x64656c6261736944) goto LAB_00610af4;
    FUN_00547e10(&local_88,&local_70,8,0xffffffffffffffff,&local_44);
    if (cStack_71 < '\0') {
      ppppcVar9 = (char ****)local_88;
      if (local_80 != 0) goto LAB_00610d14;
      uVar10 = 0;
LAB_00610dc0:
      operator_delete(local_88);
    }
    else if (cStack_71 == '\0') {
      uVar10 = 0;
    }
    else {
      ppppcVar9 = &local_88;
LAB_00610d14:
      local_48 = 0xaaaaaaaa;
      local_44 = -0x55555556;
      local_4c = 0xaaaaaaaa;
      iVar6 = sscanf((char *)ppppcVar9,"-%d,%d,%d",&local_44,&local_48,&local_4c);
      if (iVar6 == 3) {
        uVar10 = 0;
        if (((0 < local_44) && (0 < (int)local_48)) && (local_44 <= (int)local_48)) {
          uVar10 = (ulong)local_48 | 0x100000000;
        }
      }
      else {
        uVar10 = 0;
      }
      if (cStack_71 < '\0') goto LAB_00610dc0;
    }
    if (-1 < (long)local_60) goto LAB_00610b0c;
  }
  operator_delete(local_70);
LAB_00610b0c:
  *(int *)(param_1 + 0x30) = (int)uVar10;
  *(char *)((long)param_1 + 0x184) = (char)(uVar10 >> 0x20);
  local_70 = (long ***)&DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_70);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 0x31),(pthread_mutexattr_t *)&local_70);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_70);
  *(undefined4 *)(param_1 + 0x36) = param_4;
  uVar7 = (**(code **)(*param_2 + 0x10))(param_2);
  param_1[0x37] = uVar7;
  FUN_0084804c(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x52) = *(undefined4 *)PTR_DAT_00d52038;
  FUN_00625c38(0x3f000000,param_1 + 0x51);
  FUN_0061d8a0(param_1 + 0x53,param_1[6]);
  FUN_00992290(param_1 + 0x59,100,10);
  FUN_00992290(param_1 + 0x60,100,10);
  param_1[0x67] = param_1 + 0x68;
  *(undefined8 *)((long)param_1 + 0x37c) = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  *(undefined1 *)(param_1 + 0x6b) = 0;
  param_1[0x6e] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  *(undefined2 *)(param_1 + 0x6f) = 0;
  *(undefined2 *)((long)param_1 + 900) = 0;
  *(undefined1 *)(param_1 + 0x71) = 0;
  *(undefined1 *)(param_1 + 0x77) = 0;
  param_1[0x6c] = 0;
  *(undefined8 *)((long)param_1 + 0x367) = 0;
  pvVar8 = operator_new(0x5c0);
  pcVar1 = "WebRTC.Video.Screenshare.";
  if (*(int *)(param_1 + 0x36) != 1) {
    pcVar1 = (char *)0x0;
  }
  pcVar4 = "WebRTC.Video.";
  if (*(int *)(param_1 + 0x36) != 0) {
    pcVar4 = pcVar1;
  }
  FUN_00616b20(pvVar8,pcVar4,param_1 + 0x38,param_2);
  param_1[0x78] = pvVar8;
  return;
}


// ===== 00610ddc  FUN_00610ddc =====

void FUN_00610ddc(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  ulong uVar8;
  undefined8 *local_18;
  
  *param_1 = &PTR_FUN_00d274e0;
  param_1[1] = &PTR_FUN_00d275b8;
  param_1[2] = &PTR_FUN_00d275e0;
  param_1[3] = &PTR_FUN_00d27608;
  param_1[4] = &PTR_FUN_00d27638;
  param_1[5] = &PTR_FUN_00d27660;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x31));
  FUN_0061106c(param_1[0x78],param_1 + 10,param_1 + 0x38);
  lVar3 = (**(code **)(*(long *)param_1[6] + 0x10))();
  uVar8 = 0x7fffffffffffffff;
  if ((lVar3 != 0x7fffffffffffffff) && (lVar5 = param_1[0x37], lVar5 != -0x8000000000000000)) {
    uVar8 = 0x8000000000000000;
    if (lVar5 != 0x7fffffffffffffff && lVar3 != -0x8000000000000000) {
      uVar8 = lVar3 - lVar5;
    }
  }
  lVar3 = DAT_00d642b0;
  if (DAT_00d642b0 == 0) {
    lVar3 = FUN_006660d0("WebRTC.Video.SendStreamLifetimeInSeconds",0x28,1,100000,0x32);
    FUN_00d0f5e0(0,lVar3,&DAT_00d642b0);
    if (lVar3 == 0) goto LAB_00610f24;
  }
  uVar6 = uVar8 / 1000000;
  if (499999 < uVar8 % 1000000) {
    uVar6 = uVar6 + 1;
  }
  if ((uVar8 & 0x8000000000000000) != 0) {
    uVar6 = -(-uVar8 / 1000000) - (ulong)(500000 < -uVar8 % 1000000);
  }
  FUN_00666568(lVar3,uVar6);
LAB_00610f24:
  if ((9999999 < (long)uVar8) &&
     (lVar3 = FUN_0066631c("WebRTC.Video.Encoder.CodecType",0x1e,0x40), lVar3 != 0)) {
    iVar2 = FUN_007b8cec(param_1 + 7);
    if (iVar2 - 1U < 5) {
      uVar4 = *(undefined4 *)(&DAT_001fcd58 + (ulong)(iVar2 - 1U) * 4);
    }
    else {
      uVar4 = 0;
    }
    FUN_00666568(lVar3,uVar4);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x31));
  pvVar7 = (void *)param_1[0x78];
  param_1[0x78] = 0;
  if (pvVar7 != (void *)0x0) {
    FUN_0061709c(pvVar7);
    operator_delete(pvVar7);
  }
  if (*(char *)(param_1 + 0x77) == '\x01') {
    if (*(char *)((long)param_1 + 0x3b7) < '\0') {
      operator_delete((void *)param_1[0x74]);
      cVar1 = *(char *)((long)param_1 + 0x39f);
    }
    else {
      cVar1 = *(char *)((long)param_1 + 0x39f);
    }
    if (cVar1 < '\0') {
      operator_delete((void *)param_1[0x71]);
    }
  }
  local_18 = param_1 + 0x67;
  FUN_0061bc18(&local_18,param_1[0x68]);
  FUN_00992338(param_1 + 0x60);
  FUN_00992338(param_1 + 0x59);
  local_18 = param_1 + 0x56;
  FUN_0061b080(&local_18,param_1[0x57]);
  FUN_008480a4(param_1 + 0x38);
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x31));
  FUN_00843fd0(param_1 + 10);
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  return;
}


// ===== 0061106c  FUN_0061106c  [FAILED] =====
/* decompilation failed: Exception while decompiling 0061106c: process: timeout
 */

// ===== 006169b0  FUN_006169b0 =====

void FUN_006169b0(long param_1)

{
  FUN_00610ddc(param_1 + -8);
  return;
}


// ===== 006169bc  FUN_006169bc =====

void FUN_006169bc(long param_1)

{
  FUN_00610ddc(param_1 + -0x10);
  return;
}


// ===== 006169c8  FUN_006169c8 =====

void FUN_006169c8(long param_1)

{
  FUN_00610ddc(param_1 + -0x18);
  return;
}


// ===== 006169d4  FUN_006169d4 =====

void FUN_006169d4(long param_1)

{
  FUN_00610ddc(param_1 + -0x20);
  return;
}


// ===== 006169e0  FUN_006169e0 =====

void FUN_006169e0(long param_1)

{
  FUN_00610ddc(param_1 + -0x28);
  return;
}


// ===== 006169ec  FUN_006169ec =====

void FUN_006169ec(void *param_1)

{
  FUN_00610ddc();
  operator_delete(param_1);
  return;
}


// ===== 00616a1c  FUN_00616a1c =====

void FUN_00616a1c(long param_1)

{
  FUN_00610ddc((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 00616a50  FUN_00616a50 =====

void FUN_00616a50(long param_1)

{
  FUN_00610ddc((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}


// ===== 00616a84  FUN_00616a84 =====

void FUN_00616a84(long param_1)

{
  FUN_00610ddc((void *)(param_1 + -0x18));
  operator_delete((void *)(param_1 + -0x18));
  return;
}


// ===== 00616ab8  FUN_00616ab8 =====

void FUN_00616ab8(long param_1)

{
  FUN_00610ddc((void *)(param_1 + -0x20));
  operator_delete((void *)(param_1 + -0x20));
  return;
}


// ===== 00616aec  FUN_00616aec =====

void FUN_00616aec(long param_1)

{
  FUN_00610ddc((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}


// ===== 00616b20  FUN_00616b20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00616b20(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  FUN_005d3510();
  *(undefined8 *)(param_1 + 0x18) = param_4;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_00992290(param_1 + 0xf0,100,10);
  FUN_005f4dd0(param_1 + 0x128,param_4,0,1);
  FUN_005f4dd0(param_1 + 0x180,param_4,0,1);
  FUN_005f4f28(param_1 + 0x1d8,param_4,0,1);
  FUN_005f4f28(param_1 + 0x230,param_4,0,1);
  FUN_005f4f28(param_1 + 0x288,param_4,0,1);
  FUN_005f4f28(param_1 + 0x2e0,param_4,0,1);
  FUN_005f4f28(param_1 + 0x338,param_4,0,1);
  FUN_005f4f28(param_1 + 0x390,param_4,0,1);
  uVar5 = _UNK_001f3068;
  uVar4 = _DAT_001f3060;
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined2 *)(param_1 + 0x448) = 1;
  *(undefined8 *)(param_1 + 0x408) = uVar5;
  *(undefined8 *)(param_1 + 0x400) = uVar4;
  *(undefined8 *)(param_1 + 0x3f0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 1000) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3f8) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x44c) = 0;
  *(undefined8 *)(param_1 + 0x420) = 0;
  *(undefined8 *)(param_1 + 0x418) = 0;
  *(undefined8 *)(param_1 + 0x425) = 0;
  *(undefined8 *)(param_1 + 0x430) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x440) = 0;
  *(undefined8 *)(param_1 + 0x438) = 0;
  *(undefined8 *)(param_1 + 0x450) = 0;
  *(undefined1 *)(param_1 + 0x458) = 0;
  *(undefined1 *)(param_1 + 0x460) = 0;
  *(undefined4 *)(param_1 + 0x468) = 2000;
  *(undefined2 *)(param_1 + 0x470) = 1;
  FUN_0061df98(param_1 + 0x478);
  *(undefined1 *)(param_1 + 0x498) = 0;
  *(undefined1 *)(param_1 + 0x4b0) = 0;
  if (*(char *)(param_3 + 3) == '\x01') {
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      FUN_005478d8(param_1 + 0x498,*param_3,param_3[1]);
    }
    else {
      uVar5 = param_3[1];
      uVar4 = *param_3;
      *(undefined8 *)(param_1 + 0x4a8) = param_3[2];
      *(undefined8 *)(param_1 + 0x4a0) = uVar5;
      *(undefined8 *)(param_1 + 0x498) = uVar4;
    }
    *(undefined1 *)(param_1 + 0x4b0) = 1;
  }
  uVar6 = param_3[8];
  uVar5 = param_3[0xb];
  uVar4 = param_3[10];
  uVar8 = param_3[5];
  uVar7 = param_3[4];
  uVar10 = param_3[7];
  uVar9 = param_3[6];
  plVar2 = (long *)(param_1 + 0x518);
  *(undefined8 *)(param_1 + 0x4e0) = param_3[9];
  *(undefined8 *)(param_1 + 0x4d8) = uVar6;
  *(undefined8 *)(param_1 + 0x4f0) = uVar5;
  *(undefined8 *)(param_1 + 0x4e8) = uVar4;
  *(undefined8 *)(param_1 + 0x4c0) = uVar8;
  *(undefined8 *)(param_1 + 0x4b8) = uVar7;
  *(undefined8 *)(param_1 + 0x4d0) = uVar10;
  *(undefined8 *)(param_1 + 0x4c8) = uVar9;
  uVar6 = param_3[0xd];
  uVar5 = param_3[0xc];
  uVar4 = param_3[0xe];
  *(long **)(param_1 + 0x510) = plVar2;
  *(undefined8 *)(param_1 + 0x500) = uVar6;
  *(undefined8 *)(param_1 + 0x4f8) = uVar5;
  *(undefined8 *)(param_1 + 0x508) = uVar4;
  *(undefined8 *)(param_1 + 0x520) = 0;
  *plVar2 = 0;
  if (param_3[0x11] != 0) {
    lVar1 = FUN_0061b1ec(param_1 + 0x510,param_3[0x10],param_1 + 0x510);
    *plVar2 = lVar1;
    *(long **)(lVar1 + 0x10) = plVar2;
    plVar2 = (long *)*plVar2;
    do {
      plVar3 = plVar2;
      plVar2 = (long *)*plVar3;
    } while (plVar2 != (long *)0x0);
    *(long **)(param_1 + 0x510) = plVar3;
    *(undefined8 *)(param_1 + 0x520) = param_3[0x11];
  }
  uVar4 = param_3[0x12];
  plVar2 = (long *)(param_1 + 0x540);
  *(undefined8 *)(param_1 + 0x52d) = *(undefined8 *)((long)param_3 + 0x95);
  *(undefined8 *)(param_1 + 0x528) = uVar4;
  *(long **)(param_1 + 0x538) = plVar2;
  *(undefined8 *)(param_1 + 0x548) = 0;
  *(undefined8 *)(param_1 + 0x540) = 0;
  if (param_3[0x16] != 0) {
    lVar1 = FUN_0061aa20(param_1 + 0x538,param_3[0x15],param_1 + 0x538);
    *plVar2 = lVar1;
    *(long **)(lVar1 + 0x10) = plVar2;
    plVar2 = (long *)*plVar2;
    do {
      plVar3 = plVar2;
      plVar2 = (long *)*plVar3;
    } while (plVar2 != (long *)0x0);
    *(long **)(param_1 + 0x538) = plVar3;
    *(undefined8 *)(param_1 + 0x548) = param_3[0x16];
  }
  uVar4 = param_3[0x17];
  uVar5 = *(undefined8 *)((long)param_3 + 0xbe);
  *(long *)(param_1 + 0x570) = param_1 + 0x578;
  *(undefined8 *)(param_1 + 0x578) = 0;
  *(undefined8 *)(param_1 + 0x556) = uVar5;
  *(undefined8 *)(param_1 + 0x550) = uVar4;
  *(undefined8 *)(param_1 + 0x5b8) = 0;
  *(undefined8 *)(param_1 + 0x5b0) = 0;
  *(undefined8 *)(param_1 + 0x5a0) = 0;
  *(undefined8 *)(param_1 + 0x598) = 0;
  *(undefined8 **)(param_1 + 0x590) = (undefined8 *)(param_1 + 0x598);
  *(undefined8 *)(param_1 + 0x588) = 0;
  *(undefined8 *)(param_1 + 0x580) = 0;
  *(undefined8 *)(param_1 + 0x568) = 0;
  *(undefined8 *)(param_1 + 0x560) = 0;
  *(long *)(param_1 + 0x5a8) = param_1 + 0x5b0;
  FUN_00616f74(param_1,param_3);
  return;
}


// ===== 00616e08  FUN_00616e08 =====

void FUN_00616e08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
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
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (*(char *)(param_2 + 3) == '\x01') {
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
      uVar6 = param_2[1];
      uVar3 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar6;
      *param_1 = uVar3;
    }
    *(undefined1 *)(param_1 + 3) = 1;
  }
  uVar15 = param_2[0xb];
  uVar14 = param_2[10];
  uVar7 = param_2[0xd];
  uVar6 = param_2[0xc];
  uVar9 = param_2[5];
  uVar8 = param_2[4];
  uVar11 = param_2[7];
  uVar10 = param_2[6];
  uVar3 = param_2[0xe];
  uVar13 = param_2[9];
  uVar12 = param_2[8];
  plVar4 = param_1 + 0x10;
  *plVar4 = 0;
  puVar1 = param_1 + 0xf;
  *puVar1 = plVar4;
  param_1[0xb] = uVar15;
  param_1[10] = uVar14;
  param_1[9] = uVar13;
  param_1[8] = uVar12;
  param_1[7] = uVar11;
  param_1[6] = uVar10;
  param_1[5] = uVar9;
  param_1[4] = uVar8;
  param_1[0xe] = uVar3;
  param_1[0xd] = uVar7;
  param_1[0xc] = uVar6;
  param_1[0x11] = 0;
  if (param_2[0x11] != 0) {
    lVar2 = FUN_0061b1ec(puVar1,param_2[0x10],puVar1);
    *plVar4 = lVar2;
    *(long **)(lVar2 + 0x10) = plVar4;
    plVar4 = (long *)*plVar4;
    do {
      plVar5 = plVar4;
      plVar4 = (long *)*plVar5;
    } while (plVar4 != (long *)0x0);
    param_1[0xf] = plVar5;
    param_1[0x11] = param_2[0x11];
  }
  uVar3 = param_2[0x12];
  uVar6 = *(undefined8 *)((long)param_2 + 0x95);
  plVar4 = param_1 + 0x15;
  *plVar4 = 0;
  puVar1 = param_1 + 0x14;
  *puVar1 = plVar4;
  *(undefined8 *)((long)param_1 + 0x95) = uVar6;
  param_1[0x12] = uVar3;
  param_1[0x16] = 0;
  if (param_2[0x16] != 0) {
    lVar2 = FUN_0061aa20(puVar1,param_2[0x15],puVar1);
    *plVar4 = lVar2;
    *(long **)(lVar2 + 0x10) = plVar4;
    plVar4 = (long *)*plVar4;
    do {
      plVar5 = plVar4;
      plVar4 = (long *)*plVar5;
    } while (plVar4 != (long *)0x0);
    param_1[0x14] = plVar5;
    param_1[0x16] = param_2[0x16];
  }
  uVar3 = param_2[0x17];
  *(undefined8 *)((long)param_1 + 0xbe) = *(undefined8 *)((long)param_2 + 0xbe);
  param_1[0x17] = uVar3;
  return;
}


// ===== 00616f74  FUN_00616f74 =====

void FUN_00616f74(long param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = *(long **)(param_2 + 0xa0);
  do {
    if (plVar6 == (long *)(param_2 + 0xa8)) {
      return;
    }
    uVar1 = (undefined4)plVar6[4];
    FUN_005f4fd4(param_1 + 0x1d8,plVar6[0xd] + plVar6[0xc] + plVar6[0xe],uVar1);
    FUN_005f4fd4(param_1 + 0x2e0,plVar6[0xe],uVar1);
    FUN_005f4fd4(param_1 + 0x338,plVar6[0x14] + plVar6[0x13] + plVar6[0x15],uVar1);
    FUN_005f4fd4(param_1 + 0x390,plVar6[0x1b] + plVar6[0x1a] + plVar6[0x1c],uVar1);
    if ((int)plVar6[5] == 1) {
      lVar4 = param_1 + 0x288;
      lVar5 = plVar6[0xd] + plVar6[0xc] + plVar6[0xe];
LAB_00617050:
      FUN_005f4fd4(lVar4,lVar5,uVar1);
    }
    else if ((int)plVar6[5] == 0) {
      lVar4 = param_1 + 0x230;
      lVar5 = plVar6[0xd] - (plVar6[0x14] + plVar6[0x1b]);
      goto LAB_00617050;
    }
    plVar2 = (long *)plVar6[1];
    plVar7 = plVar6;
    if ((long *)plVar6[1] == (long *)0x0) {
      do {
        plVar6 = (long *)plVar7[2];
        bVar3 = plVar7 != (long *)*plVar6;
        plVar7 = plVar6;
      } while (bVar3);
    }
    else {
      do {
        plVar6 = plVar2;
        plVar2 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  } while( true );
}


// ===== 0061709c  FUN_0061709c =====

void FUN_0061709c(undefined8 *param_1)

{
  undefined8 *local_8;
  
  local_8 = param_1 + 0xb5;
  FUN_0061bf34(&local_8,param_1[0xb6]);
  local_8 = param_1 + 0xb2;
  FUN_0061bec0(&local_8,param_1[0xb3]);
  local_8 = param_1 + 0xae;
  FUN_0061be4c(&local_8,param_1[0xaf]);
  FUN_008480a4(param_1 + 0x93);
  FUN_0061dfb0(param_1 + 0x8f);
  FUN_005f52e4(param_1 + 0x72);
  FUN_005f52e4(param_1 + 0x67);
  FUN_005f52e4(param_1 + 0x5c);
  FUN_005f52e4(param_1 + 0x51);
  FUN_005f52e4(param_1 + 0x46);
  FUN_005f52e4(param_1 + 0x3b);
  FUN_005f52e4(param_1 + 0x30);
  FUN_005f52e4(param_1 + 0x25);
  FUN_00992338(param_1 + 0x1e);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    operator_delete((void *)*param_1);
  }
  return;
}


// ===== 0061716c  FUN_0061716c =====

void FUN_0061716c(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  lVar6 = *(long *)(param_1 + 0x580);
  while( true ) {
    if ((lVar6 == 0) || (plVar10 = *(long **)(param_1 + 0x570), param_2 - plVar10[5] < 800)) {
      return;
    }
    lVar3 = plVar10[6];
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + (long)(int)lVar3;
    iVar2 = *(int *)((long)plVar10 + 0x34);
    uVar7 = *(ulong *)(param_1 + 0x560);
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + (long)iVar2;
    if ((1 < uVar7) && ((ulong)(long)(int)*(uint *)(plVar10 + 7) < uVar7)) {
      uVar1 = (int)uVar7 + ~*(uint *)(plVar10 + 7);
      if (((int)uVar1 < 1) ||
         (*(ulong *)(param_1 + 0x568) <=
          (ulong)(uint)(*(int *)((long)plVar10 + 0x34) * (int)plVar10[6]))) {
        *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
      }
      else {
        *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
        *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + 1;
        *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
        *(ulong *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + (ulong)uVar1;
      }
    }
    plVar8 = plVar10;
    plVar4 = (long *)plVar10[1];
    if ((long *)plVar10[1] == (long *)0x0) {
      do {
        plVar9 = (long *)plVar8[2];
        bVar5 = plVar8 != (long *)*plVar9;
        plVar8 = plVar9;
      } while (bVar5);
    }
    else {
      do {
        plVar9 = plVar4;
        plVar4 = (long *)*plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
    }
    *(long **)(param_1 + 0x570) = plVar9;
    *(long *)(param_1 + 0x580) = lVar6 + -1;
    FUN_005d5d48(*(undefined8 *)(param_1 + 0x578),plVar10);
    if (plVar10 == (long *)0xffffffffffffffe0) break;
    operator_delete(plVar10);
    lVar6 = *(long *)(param_1 + 0x580);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 006172e4  FUN_006172e4 =====

void FUN_006172e4(undefined8 *param_1,double *param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long lVar4;
  double dVar5;
  undefined1 *puVar6;
  undefined1 **ppuVar7;
  undefined1 **ppuVar8;
  undefined1 **ppuVar9;
  undefined8 *puVar10;
  double dVar11;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined8 local_d0;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
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
  undefined4 local_40;
  long local_38;
  
  ppuVar7 = &local_e0;
  ppuVar8 = &local_e0;
  ppuVar9 = &local_e0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_a8 = param_3;
  if ((param_3 >> 0x20 & 1) != 0) {
    if ((int)(uint)param_3 < 0) {
      puVar3 = (undefined4 *)FUN_006071a4(&local_a8);
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../video/send_statistics_proxy.cc",0x12e,"*spatial_id >= 0",&DAT_001fbedc,
                   *puVar3,0);
    }
    if (4 < (uint)param_3) {
      puVar3 = (undefined4 *)FUN_006071a4(&local_a8);
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../video/send_statistics_proxy.cc",0x12f,"*spatial_id < kMaxSpatialLayers",
                   &DAT_001fbedc,*puVar3,5);
    }
  }
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
  local_40 = 0xaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00622830(&local_c0,&local_a0,100);
  lVar4 = (long)*(char *)((long)param_1 + 0x17);
  puVar10 = param_1;
  if (lVar4 < 0) {
    puVar10 = (undefined8 *)*param_1;
    lVar4 = param_1[1];
  }
  uVar2 = FUN_006228b0(&local_c0,puVar10,lVar4);
  FUN_006228b0(uVar2,&DAT_001e7b8f,4);
  if (local_a8._4_1_ == '\x01') {
    uVar2 = FUN_006228b0(&local_c0,&DAT_001b102c,2);
    if ((local_a8 & 0x100000000) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    FUN_00622910(uVar2,local_a8 & 0xffffffff);
  }
  FUN_006228b0(&local_c0,&DAT_001ba08c,2);
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_005d3510(&local_e0,local_c0);
  dVar5 = param_2[1];
  if (4 < (long)dVar5) {
    puVar6 = (undefined1 *)(long)local_d0._7_1_;
    dVar11 = *param_2;
    if ((long)puVar6 < 0) {
      puVar6 = puStack_d8;
      ppuVar7 = (undefined1 **)local_e0;
      if (puStack_d8 == (undefined1 *)0x0) goto LAB_006175ac;
    }
    else if (local_d0._7_1_ == '\0') goto LAB_006175ac;
    *(undefined1 *)((long)ppuVar7 + (long)(puVar6 + -1)) = 0x59;
    puVar6 = puStack_d8;
    ppuVar7 = (undefined1 **)local_e0;
    if (-1 < (long)local_d0) {
      puVar6 = (undefined1 *)((ulong)local_d0 >> 0x38);
      ppuVar7 = &local_e0;
    }
    uVar2 = FUN_006660d8(ppuVar7,puVar6,1,1000,1000);
    FUN_00666568(uVar2,(int)((float)(dVar11 / (double)(ulong)dVar5) * 10.0));
  }
  dVar5 = param_2[3];
  if (4 < (long)dVar5) {
    puVar6 = (undefined1 *)(long)local_d0._7_1_;
    dVar11 = param_2[2];
    if ((long)puVar6 < 0) {
      puVar6 = puStack_d8;
      ppuVar8 = (undefined1 **)local_e0;
      if (puStack_d8 == (undefined1 *)0x0) goto LAB_006175ac;
    }
    else if (local_d0._7_1_ == '\0') goto LAB_006175ac;
    *(undefined1 *)((long)ppuVar8 + (long)(puVar6 + -1)) = 0x55;
    puVar6 = puStack_d8;
    ppuVar8 = (undefined1 **)local_e0;
    if (-1 < (long)local_d0) {
      puVar6 = (undefined1 *)((ulong)local_d0 >> 0x38);
      ppuVar8 = &local_e0;
    }
    uVar2 = FUN_006660d8(ppuVar8,puVar6,1,1000,1000);
    FUN_00666568(uVar2,(int)((float)(dVar11 / (double)(ulong)dVar5) * 10.0));
  }
  dVar5 = param_2[5];
  if (4 < (long)dVar5) {
    puVar6 = (undefined1 *)(long)local_d0._7_1_;
    dVar11 = param_2[4];
    if ((long)puVar6 < 0) {
      puVar6 = puStack_d8;
      ppuVar9 = (undefined1 **)local_e0;
      if (puStack_d8 == (undefined1 *)0x0) goto LAB_006175ac;
    }
    else if (local_d0._7_1_ == '\0') {
LAB_006175ac:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string:1491: libc++ Hardening assertion !empty() failed: string::back(): string is empty\n"
                );
    }
    *(undefined1 *)((long)ppuVar9 + (long)(puVar6 + -1)) = 0x56;
    puVar6 = puStack_d8;
    ppuVar9 = (undefined1 **)local_e0;
    if (-1 < (long)local_d0) {
      puVar6 = (undefined1 *)((ulong)local_d0 >> 0x38);
      ppuVar9 = &local_e0;
    }
    uVar2 = FUN_006660d8(ppuVar9,puVar6,1,1000,1000);
    FUN_00666568(uVar2,(int)((float)(dVar11 / (double)(ulong)dVar5) * 10.0));
  }
  if ((long)local_d0 < 0) {
    operator_delete(local_e0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00617638  FUN_00617638 =====

undefined4 FUN_00617638(long param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *local_68;
  ulong local_60;
  undefined8 local_58;
  int local_50;
  long *local_48;
  
  uVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  uVar6 = uVar4 / 1000;
  if (499 < uVar4 % 1000) {
    uVar6 = uVar6 + 1;
  }
  if ((uVar4 & 0x8000000000000000) != 0) {
    uVar6 = -(-uVar4 / 1000) - (ulong)(500 < -uVar4 % 1000);
  }
  FUN_0061716c(param_1,uVar6);
  local_48 = (long *)(param_1 + 0x570);
  if ((0x96 < *(ulong *)(param_1 + 0x580)) ||
     ((*(ulong *)(param_1 + 0x580) != 0 && (900000 < param_2[0x26] - *(int *)(*local_48 + 0x20)))))
  {
    local_68 = local_48;
    FUN_0061be4c(&local_68,*(undefined8 *)(param_1 + 0x578));
    *(undefined8 **)(param_1 + 0x570) = (undefined8 *)(param_1 + 0x578);
    *(undefined8 *)(param_1 + 0x580) = 0;
    *(undefined8 *)(param_1 + 0x578) = 0;
  }
  plVar5 = *(long **)(param_1 + 0x578);
  uVar2 = param_2[0x26];
  if (plVar5 != (long *)0x0) {
    do {
      while( true ) {
        uVar3 = *(uint *)(plVar5 + 4);
        if (uVar3 - uVar2 != -0x80000000) break;
        if (uVar3 <= uVar2) goto LAB_00617770;
LAB_00617740:
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_006177e0;
      }
      if ((uVar3 != uVar2) && (-1 < (int)(uVar3 - uVar2))) goto LAB_00617740;
LAB_00617770:
      if (uVar2 - uVar3 == -0x80000000) {
        if (uVar2 <= uVar3) {
LAB_006177a0:
          if (plVar5 != (long *)(param_1 + 0x578)) {
            uVar2 = *(uint *)(plVar5 + 6);
            if (*(uint *)(plVar5 + 6) <= *param_2) {
              uVar2 = *param_2;
            }
            *(uint *)(plVar5 + 6) = uVar2;
            uVar2 = *(uint *)((long)plVar5 + 0x34);
            if (*(uint *)((long)plVar5 + 0x34) <= param_2[1]) {
              uVar2 = param_2[1];
            }
            iVar1 = (int)plVar5[7];
            if ((int)plVar5[7] <= param_3) {
              iVar1 = param_3;
            }
            *(uint *)((long)plVar5 + 0x34) = uVar2;
            *(int *)(plVar5 + 7) = iVar1;
            return 0;
          }
          break;
        }
      }
      else if ((uVar2 == uVar3) || ((int)(uVar2 - uVar3) < 0)) goto LAB_006177a0;
      plVar5 = (long *)plVar5[1];
    } while (plVar5 != (long *)0x0);
  }
LAB_006177e0:
  local_58 = *(undefined8 *)param_2;
  local_68 = (long *)CONCAT44(local_68._4_4_,uVar2);
  local_60 = uVar6;
  local_50 = param_3;
  FUN_0061bfa8(&local_48,&local_68,&local_68);
  thunk_FUN_005f48d0(param_1 + 0x180,1);
  return 1;
}


// ===== 00617838  FUN_00617838 =====

int FUN_00617838(long param_1,long param_2,long *param_3)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  void *pvVar4;
  long lVar5;
  void *pvVar6;
  long local_28;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x188));
  if (*(int *)(param_1 + 0x1b0) != *(int *)(param_2 + 0x88)) {
    FUN_0061106c(*(undefined8 *)(param_1 + 0x3c0),param_1 + 0x50,param_1 + 0x1c0);
    pvVar4 = operator_new(0x5c0);
    pcVar1 = "WebRTC.Video.Screenshare.";
    if (*(int *)(param_2 + 0x88) != 1) {
      pcVar1 = (char *)0x0;
    }
    pcVar2 = "WebRTC.Video.";
    if (*(int *)(param_2 + 0x88) != 0) {
      pcVar2 = pcVar1;
    }
    FUN_00616b20(pvVar4,pcVar2,param_1 + 0x1c0,*(undefined8 *)(param_1 + 0x30));
    pvVar6 = *(void **)(param_1 + 0x3c0);
    *(void **)(param_1 + 0x3c0) = pvVar4;
    if (pvVar6 != (void *)0x0) {
      FUN_0061709c(pvVar6);
      operator_delete(pvVar6);
    }
    *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x88);
  }
  lVar5 = *(long *)(param_1 + 0x3c0);
  local_28 = lVar5 + 0x570;
  FUN_0061be4c(&local_28,*(undefined8 *)(lVar5 + 0x578));
  *(undefined8 **)(lVar5 + 0x570) = (undefined8 *)(lVar5 + 0x578);
  *(undefined8 *)(lVar5 + 0x580) = 0;
  *(undefined8 *)(lVar5 + 0x578) = 0;
  *(long *)(*(long *)(param_1 + 0x3c0) + 0x560) = (param_3[1] - *param_3 >> 3) * -0x70a3d70a3d70a3d7
  ;
  lVar5 = param_3[1];
  if (*param_3 == lVar5) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar5 + -0xc0) * *(long *)(lVar5 + -200);
  }
  *(long *)(*(long *)(param_1 + 0x3c0) + 0x568) = lVar5;
  iVar3 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x188));
  return iVar3;
}


// ===== 0061797c  FUN_0061797c =====

int FUN_0061797c(long param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x188));
  FUN_00625c4c(0x3f800000,(float)param_2,param_1 + 0x288);
  *(long *)(param_1 + 0x1f8) = *(long *)(param_1 + 0x1f8) + (long)param_2;
  *(int *)(param_1 + 0x1ec) = (int)(float)(int)*(float *)(param_1 + 0x28c);
  *(undefined4 *)(param_1 + 0x1f0) = param_3;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x188));
  return iVar1;
}


// ===== 006179ec  FUN_006179ec =====

int FUN_006179ec(long param_1,byte param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
  uVar4 = uVar2 / 1000;
  if (499 < uVar2 % 1000) {
    uVar4 = uVar4 + 1;
  }
  if ((uVar2 & 0x8000000000000000) != 0) {
    uVar4 = -(-uVar2 / 1000) - (ulong)(500 < -uVar2 % 1000);
  }
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x188));
  *(byte *)(param_1 + 0x22c) = param_2 & 1;
  if ((param_2 & 1) == 0) {
    if ((*(char *)(param_1 + 0x378) == '\x01') &&
       (*(long *)(*(long *)(param_1 + 0x3c0) + 0x3f8) == -1)) {
      *(ulong *)(*(long *)(param_1 + 0x3c0) + 0x3f8) = uVar4;
    }
    if ((*(char *)(param_1 + 900) == '\x01') &&
       (*(long *)(*(long *)(param_1 + 0x3c0) + 0x408) == -1)) {
      *(ulong *)(*(long *)(param_1 + 0x3c0) + 0x408) = uVar4;
    }
    FUN_005f4890(*(long *)(param_1 + 0x3c0) + 0x288);
    FUN_005f4890(*(long *)(param_1 + 0x3c0) + 0x2e0);
    FUN_005f4890(*(long *)(param_1 + 0x3c0) + 0x338);
    FUN_005f4890(*(long *)(param_1 + 0x3c0) + 0x390);
  }
  else {
    FUN_005f4734(*(long *)(param_1 + 0x3c0) + 0x128,500);
    FUN_005f4734(*(long *)(param_1 + 0x3c0) + 0x180,500);
    FUN_005f4734(*(long *)(param_1 + 0x3c0) + 0x1d8,500);
    FUN_005f4734(*(long *)(param_1 + 0x3c0) + 0x230,500);
    FUN_005f4734(*(long *)(param_1 + 0x3c0) + 0x288,500);
    FUN_005f4734(*(long *)(param_1 + 0x3c0) + 0x2e0,500);
    FUN_005f4734(*(long *)(param_1 + 0x3c0) + 0x338,500);
    FUN_005f4734(*(long *)(param_1 + 0x3c0) + 0x390,500);
    lVar3 = *(long *)(param_1 + 0x3c0);
    if (*(long *)(lVar3 + 0x3f8) != -1) {
      *(ulong *)(lVar3 + 0x400) = (uVar4 - *(long *)(lVar3 + 0x3f8)) + *(long *)(lVar3 + 0x400);
      *(undefined8 *)(lVar3 + 0x3f8) = 0xffffffffffffffff;
      lVar3 = *(long *)(param_1 + 0x3c0);
    }
    if (*(long *)(lVar3 + 0x408) != -1) {
      *(ulong *)(lVar3 + 0x410) = (uVar4 - *(long *)(lVar3 + 0x408)) + *(long *)(lVar3 + 0x410);
      *(undefined8 *)(lVar3 + 0x408) = 0xffffffffffffffff;
    }
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x188));
  return iVar1;
}


// ===== 00617be0  FUN_00617be0 =====

int FUN_00617be0(undefined8 param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  double dVar11;
  long *local_88;
  long local_80;
  long local_78;
  undefined1 uStack_69;
  undefined8 **local_68;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x188));
  lVar5 = (**(code **)(**(long **)(param_2 + 0x30) + 0x10))();
  plVar9 = *(long **)(param_2 + 0x260);
  plVar1 = (long *)(param_2 + 0x268);
  if (plVar9 != plVar1) {
    do {
      local_68 = (undefined8 **)(plVar9 + 4);
      local_88 = (long *)(param_2 + 0x338);
      lVar6 = FUN_0061c0fc(&local_88,plVar9 + 4,&DAT_001f94c3,&local_68,&uStack_69);
      if (((lVar5 == 0x7fffffffffffffff) ||
          (lVar6 = *(long *)(lVar6 + 0x28), lVar6 == -0x8000000000000000)) ||
         ((lVar5 != -0x8000000000000000 &&
          ((lVar6 != 0x7fffffffffffffff && (4999999 < lVar5 - lVar6)))))) {
        *(undefined4 *)((long)plVar9 + 0x3c) = 0;
        *(undefined4 *)(plVar9 + 8) = 0;
      }
      plVar7 = (long *)plVar9[1];
      plVar8 = plVar9;
      if ((long *)plVar9[1] == (long *)0x0) {
        do {
          plVar9 = (long *)plVar8[2];
          bVar2 = plVar8 != (long *)*plVar9;
          plVar8 = plVar9;
        } while (bVar2);
      }
      else {
        do {
          plVar9 = plVar7;
          plVar7 = (long *)*plVar9;
        } while ((long *)*plVar9 != (long *)0x0);
      }
    } while (plVar9 != plVar1);
  }
  plVar9 = (long *)(*(long *)(param_2 + 0x3c0) + 0xf0);
  uVar10 = FUN_0099234c(plVar9,lVar5,*plVar9 * *(long *)(*(long *)(param_2 + 0x3c0) + 0xf8) * 1000);
  *(undefined8 *)(param_2 + 0x1e0) = uVar10;
  uVar3 = FUN_009924e0(*(long *)(param_2 + 0x3c0) + 0xf0);
  *(undefined4 *)(param_2 + 0x208) = uVar3;
  *(bool *)(param_2 + 0x278) = *(int *)(param_2 + 0x1b0) != 0;
  dVar11 = (double)FUN_0099234c(param_2 + 0x300,lVar5,
                                *(long *)(param_2 + 0x300) * *(long *)(param_2 + 0x308) * 1000);
  *(int *)(param_2 + 0x1e8) = (int)dVar11;
  dVar11 = (double)FUN_0099234c(param_2 + 0x2c8,lVar5,
                                *(long *)(param_2 + 0x2c8) * *(long *)(param_2 + 0x2d0) * 1000);
  *(int *)(param_2 + 0x228) = (int)(dVar11 * 8.0);
  FUN_0061da5c(&local_88,param_2 + 0x298);
  local_68 = (undefined8 **)(param_2 + 0x238);
  FUN_0061b080(&local_68,*(undefined8 *)(param_2 + 0x240));
  *(long *)(param_2 + 0x248) = local_78;
  *(long **)(param_2 + 0x238) = local_88;
  *(long *)(param_2 + 0x240) = local_80;
  if (local_78 == 0) {
    *(undefined8 **)(param_2 + 0x238) = (undefined8 *)(param_2 + 0x240);
  }
  else {
    local_88 = &local_80;
    *(undefined8 **)(local_80 + 0x10) = (undefined8 *)(param_2 + 0x240);
    local_80 = 0;
    local_78 = 0;
  }
  local_68 = &local_88;
  FUN_0061b080(&local_68,local_80);
  plVar9 = *(long **)(param_2 + 0x260);
  if (plVar9 != plVar1) {
    do {
      plVar7 = *(long **)(param_2 + 0x340);
      if (plVar7 != (long *)0x0) {
        do {
          while (*(uint *)(plVar7 + 4) <= *(uint *)(plVar9 + 4)) {
            if (*(uint *)(plVar9 + 4) == *(uint *)(plVar7 + 4)) {
              if (plVar7 != (long *)(param_2 + 0x340)) {
                lVar6 = FUN_0099234c(plVar7 + 6,lVar5,plVar7[6] * plVar7[7] * 1000);
                plVar9[0x2d] = lVar6;
              }
              goto LAB_00617e50;
            }
            plVar7 = (long *)plVar7[1];
            if (plVar7 == (long *)0x0) goto LAB_00617e50;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
LAB_00617e50:
      plVar7 = (long *)plVar9[1];
      plVar8 = plVar9;
      if ((long *)plVar9[1] == (long *)0x0) {
        do {
          plVar9 = (long *)plVar8[2];
          bVar2 = plVar8 != (long *)*plVar9;
          plVar8 = plVar9;
        } while (bVar2);
      }
      else {
        do {
          plVar9 = plVar7;
          plVar7 = (long *)*plVar9;
        } while ((long *)*plVar9 != (long *)0x0);
      }
    } while (plVar9 != plVar1);
  }
  FUN_00616e08(param_1,param_2 + 0x1c0);
  iVar4 = pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x188));
  return iVar4;
}


// ===== 00617eb8  FUN_00617eb8 =====

int FUN_00617eb8(long param_1,long param_2)

{
  undefined8 ***pppuVar1;
  int iVar2;
  undefined8 **local_50;
  undefined8 **local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x188));
  FUN_00617f80(param_1 + 0x1c0,param_2);
  FUN_0061d964(param_1 + 0x298,*(undefined4 *)(param_2 + 0x74));
  local_48 = (undefined8 ***)0x0;
  local_40 = 0;
  local_50 = &local_48;
  if (*(long *)(param_2 + 0x88) != 0) {
    local_48 = (undefined8 **)FUN_0061b1ec(&local_50,*(undefined8 *)(param_2 + 0x80),&local_50);
    ((undefined8 ***)local_48)[2] = &local_48;
    pppuVar1 = (undefined8 ***)local_48;
    do {
      local_50 = pppuVar1;
      pppuVar1 = (undefined8 ***)*local_50;
    } while ((undefined8 ***)*local_50 != (undefined8 ***)0x0);
    local_40 = *(undefined8 *)(param_2 + 0x88);
  }
  FUN_0061db90(param_1 + 0x298,&local_50);
  local_38 = (undefined1 *)&local_50;
  FUN_0061b080(&local_38,local_48);
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x188));
  return iVar2;
}


// ===== 00617f80  FUN_00617f80 =====

long FUN_00617f80(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  FUN_005e7520();
  uVar6 = *(undefined8 *)(param_2 + 0x40);
  uVar5 = *(undefined8 *)(param_2 + 0x58);
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  uVar10 = *(undefined8 *)(param_2 + 0x38);
  uVar9 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  *(undefined8 *)(param_1 + 0x28) = uVar8;
  *(undefined8 *)(param_1 + 0x20) = uVar7;
  *(undefined8 *)(param_1 + 0x38) = uVar10;
  *(undefined8 *)(param_1 + 0x30) = uVar9;
  uVar5 = *(undefined8 *)(param_2 + 0x68);
  uVar4 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  if (param_1 == param_2) {
    uVar4 = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(param_1 + 0x95) = *(undefined8 *)(param_2 + 0x95);
    *(undefined8 *)(param_1 + 0x90) = uVar4;
    goto LAB_006180d0;
  }
  if (*(long *)(param_1 + 0x88) == 0) {
    lVar2 = FUN_0061b1ec(param_1 + 0x78,*(undefined8 *)(param_2 + 0x80),param_1 + 0x78);
    plVar3 = (long *)(param_1 + 0x80);
    *plVar3 = lVar2;
    if (lVar2 != 0) {
      *(long **)(lVar2 + 0x10) = plVar3;
      plVar1 = (long *)*plVar3;
      goto joined_r0x00618028;
    }
  }
  else {
    plVar1 = (long *)FUN_0061b0f4(param_1 + 0x78,*(undefined8 *)(param_1 + 0x80),
                                  *(undefined8 *)(param_2 + 0x80),0,param_1 + 0x78);
    *(long **)(param_1 + 0x80) = plVar1;
joined_r0x00618028:
    if (plVar1 == (long *)0x0) {
      plVar3 = (long *)(param_1 + 0x80);
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  *(long **)(param_1 + 0x78) = plVar3;
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  uVar4 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x95) = *(undefined8 *)(param_2 + 0x95);
  *(undefined8 *)(param_1 + 0x90) = uVar4;
  if (*(long *)(param_1 + 0xb0) == 0) {
    lVar2 = FUN_0061aa20(param_1 + 0xa0,*(undefined8 *)(param_2 + 0xa8),param_1 + 0xa0);
    plVar3 = (long *)(param_1 + 0xa8);
    *plVar3 = lVar2;
    if (lVar2 != 0) {
      *(long **)(lVar2 + 0x10) = plVar3;
      plVar1 = (long *)*plVar3;
      goto joined_r0x006180ac;
    }
  }
  else {
    plVar1 = (long *)FUN_0061b2ac(param_1 + 0xa0,*(undefined8 *)(param_1 + 0xa8),
                                  *(undefined8 *)(param_2 + 0xa8),0,param_1 + 0xa0);
    *(long **)(param_1 + 0xa8) = plVar1;
joined_r0x006180ac:
    if (plVar1 == (long *)0x0) {
      plVar3 = (long *)(param_1 + 0xa8);
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  *(long **)(param_1 + 0xa0) = plVar3;
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
LAB_006180d0:
  uVar4 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xbe) = *(undefined8 *)(param_2 + 0xbe);
  *(undefined8 *)(param_1 + 0xb8) = uVar4;
  return param_1;
}


// ===== 006180f4  FUN_006180f4 =====

int * FUN_006180f4(long param_1,uint param_2)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar8 = (undefined8 *)(param_1 + 0x268);
  for (puVar7 = *(undefined8 **)(param_1 + 0x268); puVar7 != (undefined8 *)0x0;
      puVar7 = (undefined8 *)puVar7[1]) {
    while (param_2 < *(uint *)(puVar7 + 4)) {
      puVar7 = (undefined8 *)*puVar7;
      if (puVar7 == (undefined8 *)0x0) goto LAB_0061815c;
    }
    if (param_2 == *(uint *)(puVar7 + 4)) {
      if (puVar7 != puVar8) {
        return (int *)(puVar7 + 5);
      }
      break;
    }
  }
LAB_0061815c:
  uVar4 = FUN_00844bb8(param_1 + 0x50,param_2);
  if (*(int *)(param_1 + 0x118) == -1) {
    bVar2 = false;
  }
  else {
    bVar2 = param_2 == *(uint *)(param_1 + 0x11c);
  }
  uVar5 = FUN_00844bf8(param_1 + 0x50,param_2);
  if (((uVar4 & 1) == 0 && !bVar2) && ((uVar5 & 1) == 0)) {
    return (int *)0x0;
  }
  puVar7 = (undefined8 *)*puVar8;
  while (puVar9 = puVar8, puVar7 != (undefined8 *)0x0) {
    while (puVar6 = puVar7, *(uint *)(puVar6 + 4) <= param_2) {
      if (param_2 == *(uint *)(puVar6 + 4)) goto joined_r0x00618264;
      puVar7 = (undefined8 *)puVar6[1];
      if ((undefined8 *)puVar6[1] == (undefined8 *)0x0) {
        puVar8 = puVar6 + 1;
        puVar9 = puVar6;
        goto LAB_006181ec;
      }
    }
    puVar8 = puVar6;
    puVar7 = (undefined8 *)*puVar6;
  }
LAB_006181ec:
  puVar6 = (undefined8 *)operator_new(0x1f8);
  if ((puVar6 == (undefined8 *)0x0) || (*puVar6 = 0, puVar6 == (undefined8 *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *(uint *)(puVar6 + 4) = param_2;
  FUN_00847618(puVar6 + 5);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = puVar9;
  *puVar8 = puVar6;
  puVar7 = puVar6;
  if (**(long **)(param_1 + 0x260) != 0) {
    *(long *)(param_1 + 0x260) = **(long **)(param_1 + 0x260);
    puVar7 = (undefined8 *)*puVar8;
  }
  FUN_005d5b94(*(undefined8 *)(param_1 + 0x268),puVar7);
  *(long *)(param_1 + 0x270) = *(long *)(param_1 + 0x270) + 1;
joined_r0x00618264:
  piVar1 = (int *)(puVar6 + 5);
  if ((uVar4 & 1) != 0) {
    *piVar1 = 0;
    return piVar1;
  }
  if ((uVar5 & 1) == 0) {
    if (bVar2) {
      *piVar1 = 2;
    }
    else if (*piVar1 != 2) {
      if (*piVar1 != 1) {
        return piVar1;
      }
      goto LAB_00618274;
    }
    uVar3 = FUN_00844d34(param_1 + 0x50,param_2);
  }
  else {
    *piVar1 = 1;
LAB_00618274:
    uVar3 = FUN_00844cc0(param_1 + 0x50,param_2);
  }
  *(undefined4 *)((long)puVar6 + 0x2c) = uVar3;
  *(undefined1 *)(puVar6 + 6) = 1;
  return piVar1;
}


// ===== 006182f8  FUN_006182f8 =====

int FUN_006182f8(long param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x188));
  lVar2 = FUN_006180f4(param_1,param_2);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x1c) = 0;
    *(undefined8 *)(lVar2 + 0x14) = 0;
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x188));
  return iVar1;
}


// ===== 00618344  FUN_00618344 =====

int FUN_00618344(long param_1,uint param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  long local_38;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x188));
  if ((ulong)(*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 2) <= (ulong)param_2) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
              );
  }
  lVar3 = FUN_006180f4(param_1,*(undefined4 *)(*(long *)(param_1 + 0x50) + (ulong)param_2 * 4));
  if (lVar3 != 0) {
    lVar3 = lVar3 + 0x1a8;
    if (*(char *)(param_4 + 0x18) == '\0') {
      lVar4 = FUN_0061c230(lVar3,param_3);
      if (lVar4 != 0) {
        FUN_0061c368(lVar3,lVar4);
      }
    }
    else {
      local_38 = lVar3;
      auVar5 = FUN_0061c570(&local_38,param_3,param_3,param_4);
      lVar3 = auVar5._0_8_;
      if ((auVar5 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__hash_table:242: libc++ Hardening assertion __node_ != nullptr failed: Attempted to dereference a non-dereferenceable unordered container iterator\n"
                    );
        }
        bVar1 = *(byte *)(param_4 + 0x18);
        if ((ulong)*(byte *)(lVar3 + 0x40) == 0xff) {
          if (bVar1 == 0xff) goto LAB_0061844c;
        }
        else if (bVar1 == 0xff) {
          (*(code *)(&PTR_FUN_00d27678)[*(byte *)(lVar3 + 0x40)])(&local_38,lVar3 + 0x28);
          *(undefined1 *)(lVar3 + 0x40) = 0xff;
          goto LAB_0061844c;
        }
        local_38 = lVar3 + 0x28;
        (*(code *)(&PTR_FUN_00d276d8)[bVar1])(&local_38,lVar3 + 0x28,param_4);
      }
    }
  }
LAB_0061844c:
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x188));
  return iVar2;
}


// ===== 00618494  FUN_00618494 =====

int FUN_00618494(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x188));
  if ((param_2 != 0) || (*(long *)(*(long *)(param_1 + 0x3c0) + 0x430) != -1)) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
    uVar4 = uVar2 / 1000;
    lVar3 = *(long *)(param_1 + 0x3c0);
    if (499 < uVar2 % 1000) {
      uVar4 = uVar4 + 1;
    }
    if ((uVar2 & 0x8000000000000000) != 0) {
      uVar4 = -(-uVar2 / 1000) - (ulong)(500 < -uVar2 % 1000);
    }
    if (*(long *)(lVar3 + 0x430) != -1) {
      iVar1 = *(int *)(param_1 + 0x224);
      lVar5 = uVar4 - *(long *)(lVar3 + 0x430);
      if (iVar1 == 0) {
        *(long *)(lVar3 + 0x418) = *(long *)(lVar3 + 0x418) + lVar5;
      }
      *(long *)(lVar3 + 0x420) = *(long *)(lVar3 + 0x420) + lVar5;
      lVar3 = *(long *)(param_1 + 0x3c0);
      if (*(char *)(lVar3 + 0x42c) == '\x01') {
        *(int *)(lVar3 + 0x428) = *(int *)(lVar3 + 0x428) + 1;
        lVar3 = *(long *)(param_1 + 0x3c0);
      }
      *(bool *)(lVar3 + 0x42c) = (param_2 == 0) != (iVar1 == 0);
      lVar3 = *(long *)(param_1 + 0x3c0);
    }
    *(ulong *)(lVar3 + 0x430) = uVar4;
    *(int *)(param_1 + 0x224) = param_2;
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x188));
  return iVar1;
}


// ===== 006185bc  FUN_006185bc =====

void FUN_006185bc(long param_1,int *param_2,int param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  
  if (((*(char *)(param_1 + 0x184) == '\x01') &&
      (lVar6 = *(long *)(param_1 + 0x3c0), *(char *)(lVar6 + 0x470) == '\x01')) &&
     ((*(byte *)(param_1 + 0x25c) & 1) == 0)) {
    if (((param_4 == 0) && (*param_2 == 1)) && (*(byte *)((long)param_2 + 9) - 0xff < 0xffffff02)) {
      if (*(char *)(param_1 + 0x1d8) == '\x01') {
        piVar9 = (int *)(param_1 + 0x1c0);
        if (*(char *)(param_1 + 0x1d7) < '\0') {
          if (*(long *)(param_1 + 0x1c8) == 6) {
            piVar9 = *(int **)piVar9;
            goto LAB_00618654;
          }
        }
        else if (*(char *)(param_1 + 0x1d7) == '\x06') {
LAB_00618654:
          if (*piVar9 == 0x7662696c && (short)piVar9[1] == 0x7870) goto LAB_00618698;
        }
      }
      if ((param_3 <= *(int *)(param_1 + 0x180)) || (*(char *)(lVar6 + 0x471) == '\x01')) {
        *(undefined1 *)(param_1 + 0x25c) = 1;
      }
    }
    else {
LAB_00618698:
      *(undefined1 *)(lVar6 + 0x470) = 0;
    }
  }
  if (*(char *)(param_1 + 0x17c) != '\x01') {
    return;
  }
  lVar6 = *(long *)(param_1 + 0x3c0);
  if (*(char *)(lVar6 + 0x448) != '\x01') {
    return;
  }
  if (((param_4 != 0) || (*param_2 != 1)) || (0xffffff01 < *(byte *)((long)param_2 + 9) - 0xff))
  goto LAB_00618858;
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
  uVar7 = uVar4 / 1000;
  if (499 < uVar4 % 1000) {
    uVar7 = uVar7 + 1;
  }
  if ((uVar4 & 0x8000000000000000) != 0) {
    uVar7 = -(-uVar4 / 1000) - (ulong)(500 < -uVar4 % 1000);
  }
  if (*(char *)(param_1 + 0x3b8) == '\x01') {
    cVar1 = *(char *)(param_1 + 0x39f);
    uVar5 = (uint)cVar1;
    piVar9 = (int *)(param_1 + 0x388);
    if (cVar1 < '\0') {
      if (*(long *)(param_1 + 0x390) != 6) goto LAB_006187a0;
      piVar9 = *(int **)piVar9;
LAB_00618784:
      bVar2 = *piVar9 == 0x7662696c && (short)piVar9[1] == 0x7870;
    }
    else {
      if (cVar1 == '\x06') goto LAB_00618784;
LAB_006187a0:
      bVar2 = false;
    }
    if (*(char *)(param_1 + 0x3b7) < '\0') {
      if (*(long *)(param_1 + 0x3a8) == 6) {
        bVar3 = **(int **)(param_1 + 0x3a0) == 0x7662696c &&
                (short)(*(int **)(param_1 + 0x3a0))[1] == 0x7870;
      }
      else {
        bVar3 = false;
      }
      operator_delete(*(void **)(param_1 + 0x3a0));
      uVar5 = (uint)*(byte *)(param_1 + 0x39f);
    }
    else if (*(char *)(param_1 + 0x3b7) == '\x06') {
      bVar3 = *(int *)(param_1 + 0x3a0) == 0x7662696c && *(short *)(param_1 + 0x3a4) == 0x7870;
    }
    else {
      bVar3 = false;
    }
    if ((uVar5 >> 7 & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x388));
    }
    *(undefined1 *)(param_1 + 0x3b8) = 0;
    if ((bVar2 | bVar3) != 1) {
      return;
    }
    if ((bool)bVar3 != false) {
      if ((*(byte *)(param_1 + 0x17c) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      if (*(int *)(param_1 + 0x178) < param_3) {
LAB_00618858:
        *(undefined1 *)(lVar6 + 0x448) = 0;
        return;
      }
    }
    *(undefined1 *)(param_1 + 0x25c) = 1;
    *(int *)(lVar6 + 0x44c) = *(int *)(lVar6 + 0x44c) + 1;
  }
  else {
    bVar3 = *(byte *)(lVar6 + 0x449);
  }
  if ((*(byte *)(lVar6 + 0x460) & 1) == 0) {
    *(byte *)(lVar6 + 0x449) = bVar3 & 1;
  }
  else {
    lVar8 = uVar7 - *(long *)(lVar6 + 0x458);
    if (lVar8 < *(int *)(lVar6 + 0x468)) {
      lVar10 = *(long *)(param_1 + 0x3c0);
      if (*(char *)(lVar6 + 0x449) == '\x01') {
        *(long *)(lVar10 + 0x438) = *(long *)(lVar10 + 0x438) + lVar8;
      }
      *(long *)(lVar10 + 0x440) = *(long *)(lVar10 + 0x440) + lVar8;
      *(long *)(lVar6 + 0x450) = *(long *)(lVar6 + 0x450) + lVar8;
      *(byte *)(lVar6 + 0x449) = bVar3 & 1;
      if (*(char *)(lVar6 + 0x460) != '\x01') goto LAB_0061890c;
    }
    else {
      *(byte *)(lVar6 + 0x449) = bVar3 & 1;
    }
    *(undefined1 *)(lVar6 + 0x460) = 0;
  }
LAB_0061890c:
  if (lVar6 != -0x458) {
    *(ulong *)(lVar6 + 0x458) = uVar7;
    *(undefined1 *)(lVar6 + 0x460) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00618948  FUN_00618948 =====

int FUN_00618948(long param_1)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x188));
  *(undefined1 *)(*(long *)(param_1 + 0x3c0) + 0x471) = 1;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x188));
  return iVar1;
}


// ===== 00618984  FUN_00618984 =====

int FUN_00618984(long param_1,int *param_2,int *param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  byte bVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 local_8c;
  undefined4 **local_88;
  undefined8 uStack_80;
  undefined4 **local_78;
  undefined4 *local_70;
  undefined1 uStack_61;
  
  iVar5 = 0;
  if ((*(ulong *)(param_2 + 0x27) & 0x100000000) != 0) {
    iVar5 = (int)*(ulong *)(param_2 + 0x27);
  }
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x188));
  uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
  *(int *)(param_1 + 500) = *(int *)(param_1 + 500) + 1;
  dVar15 = (double)FUN_0099234c(param_1 + 0x300,uVar6,
                                *(long *)(param_1 + 0x300) * *(long *)(param_1 + 0x308) * 1000);
  dVar16 = 1.0;
  if (1.0 <= dVar15) {
    dVar16 = dVar15;
  }
  dVar15 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x200));
  *(long *)(param_1 + 0x200) =
       (long)((double)(long)((double)*(int *)(param_1 + 0x224) / (dVar16 * 8.0)) + dVar15);
  if (param_3 != (int *)0x0) {
    FUN_006185bc(param_1,param_3,param_2[1] * *param_2,iVar5);
  }
  if ((ulong)(*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 2) <= (ulong)(long)iVar5) {
    uVar9 = FUN_004249b0();
    if ((uVar9 & 1) == 0) {
      local_78 = &local_70;
      local_88 = (undefined4 **)0x1d36f7;
      uStack_80 = 0x22d3;
      FUN_00623bb0(&DAT_001f7140,"../../video/send_statistics_proxy.cc",0x22d3,
                   "Encoded image outside simulcast range (",iVar5,&DAT_001ed115,
                   *(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 2,&DAT_001a3771);
    }
    goto LAB_00619068;
  }
  local_8c = *(undefined4 *)(*(long *)(param_1 + 0x50) + (long)iVar5 * 4);
  lVar7 = FUN_006180f4(param_1);
  if (lVar7 == 0) goto LAB_00619068;
  local_70 = &local_8c;
  local_88 = (undefined4 **)(param_1 + 0x338);
  lVar8 = FUN_0061c0fc(&local_88,&local_8c,&DAT_001f94c3,&local_70,&uStack_61);
  *(int *)(lVar7 + 0x148) = *(int *)(lVar7 + 0x148) + 1;
  lVar11 = *(long *)(param_2 + 0xc);
  lVar2 = *(long *)(param_2 + 0xe);
  *(long *)(lVar7 + 0x180) = *(long *)(lVar7 + 0x180) + (lVar2 - lVar11);
  lVar13 = *(long *)(param_1 + 0x3c0);
  *(long *)(lVar13 + 0x68) = *(long *)(lVar13 + 0x68) + 1;
  *(long *)(lVar13 + 0x60) = *(long *)(lVar13 + 0x60) + (long)(int)(lVar2 - lVar11);
  if (param_3 == (int *)0x0) {
    *(undefined2 *)(lVar7 + 0x194) = 0;
    bVar14 = 1;
    if (*(int *)(lVar7 + 0x14) != 0) goto LAB_00618b84;
LAB_00618b98:
    *(int *)(lVar7 + 0x14) = *param_2;
    *(int *)(lVar7 + 0x18) = param_2[1];
    *(undefined8 *)(lVar8 + 0x28) = uVar6;
  }
  else {
    *(short *)(lVar7 + 0x194) = (short)param_3[0x1f2];
    bVar14 = *(byte *)(param_3 + 0x198);
    if (*(int *)(lVar7 + 0x14) == 0) goto LAB_00618b98;
LAB_00618b84:
    if (*(int *)(lVar7 + 0x18) == 0 || (bVar14 & 1) != 0) goto LAB_00618b98;
  }
  lVar11 = *(long *)(param_1 + 0x3c0);
  if (param_2[6] == 3) {
    *(long *)(lVar11 + 0x70) = *(long *)(lVar11 + 0x70) + 1;
  }
  *(long *)(lVar11 + 0x78) = *(long *)(lVar11 + 0x78) + 1;
  if (param_2[9] != -1) {
    plVar1 = (long *)(lVar7 + 0x150);
    if ((*(byte *)(lVar7 + 0x158) & 1) == 0) {
      if (plVar1 == (long *)0x0) goto LAB_00619098;
      *(undefined8 *)(lVar7 + 0x150) = 0;
      *(undefined1 *)(lVar7 + 0x158) = 1;
    }
    *plVar1 = *plVar1 + (long)param_2[9];
    if (param_3 != (int *)0x0) {
      iVar3 = *param_3;
      if (iVar3 < 3) {
        if (iVar3 == 1) {
          local_88 = &local_70;
          iVar3 = iVar5;
          if (*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) == 4) {
            iVar3 = -1;
          }
          local_70 = (undefined4 *)CONCAT44(local_70._4_4_,iVar3);
          lVar11 = FUN_0061ca40(0,*(long *)(param_1 + 0x3c0) + 0x590,
                                *(long *)(param_1 + 0x3c0) + 0x590,&DAT_001f94c3,&local_88,
                                &uStack_61);
          iVar3 = param_2[9];
          *(long *)(lVar11 + 0x30) = *(long *)(lVar11 + 0x30) + 1;
          *(long *)(lVar11 + 0x28) = *(long *)(lVar11 + 0x28) + (long)iVar3;
        }
        else if (iVar3 == 2) {
          local_88 = &local_70;
          uVar10 = (undefined4)*(ulong *)(param_2 + 0x27);
          if ((*(ulong *)(param_2 + 0x27) & 0x100000000) == 0) {
            uVar10 = 0xffffffff;
          }
          if ((*(ulong *)(param_2 + 0x2e) & 0x100000000) != 0) {
            uVar10 = (undefined4)*(ulong *)(param_2 + 0x2e);
          }
          local_70 = (undefined4 *)CONCAT44(local_70._4_4_,uVar10);
          lVar11 = FUN_0061ca40(0,*(long *)(param_1 + 0x3c0) + 0x590,
                                *(long *)(param_1 + 0x3c0) + 0x590,&DAT_001f94c3,&local_88,
                                &uStack_61);
          iVar3 = param_2[9];
          *(long *)(lVar11 + 0x40) = *(long *)(lVar11 + 0x40) + 1;
          *(long *)(lVar11 + 0x38) = *(long *)(lVar11 + 0x38) + (long)iVar3;
        }
      }
      else if (iVar3 == 3) {
        local_88 = &local_70;
        uVar10 = (undefined4)*(ulong *)(param_2 + 0x27);
        if ((*(ulong *)(param_2 + 0x27) & 0x100000000) == 0) {
          uVar10 = 0xffffffff;
        }
        if ((*(ulong *)(param_2 + 0x2e) & 0x100000000) != 0) {
          uVar10 = (undefined4)*(ulong *)(param_2 + 0x2e);
        }
        local_70 = (undefined4 *)CONCAT44(local_70._4_4_,uVar10);
        lVar11 = FUN_0061ca40(0,*(long *)(param_1 + 0x3c0) + 0x590,
                              *(long *)(param_1 + 0x3c0) + 0x590,&DAT_001f94c3,&local_88,&uStack_61)
        ;
        iVar3 = param_2[9];
        *(long *)(lVar11 + 0x60) = *(long *)(lVar11 + 0x60) + 1;
        *(long *)(lVar11 + 0x58) = *(long *)(lVar11 + 0x58) + (long)iVar3;
      }
      else if (iVar3 == 4) {
        local_88 = &local_70;
        iVar3 = iVar5;
        if (*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) == 4) {
          iVar3 = -1;
        }
        local_70 = (undefined4 *)CONCAT44(local_70._4_4_,iVar3);
        lVar11 = FUN_0061ca40(0,*(long *)(param_1 + 0x3c0) + 0x590,
                              *(long *)(param_1 + 0x3c0) + 0x590,&DAT_001f94c3,&local_88,&uStack_61)
        ;
        iVar3 = param_2[9];
        *(long *)(lVar11 + 0x50) = *(long *)(lVar11 + 0x50) + 1;
        *(long *)(lVar11 + 0x48) = *(long *)(lVar11 + 0x48) + (long)iVar3;
      }
      else if (iVar3 == 5) {
        local_88 = &local_70;
        iVar3 = iVar5;
        if (*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) == 4) {
          iVar3 = -1;
        }
        local_70 = (undefined4 *)CONCAT44(local_70._4_4_,iVar3);
        lVar11 = FUN_0061ca40(0,*(long *)(param_1 + 0x3c0) + 0x590,
                              *(long *)(param_1 + 0x3c0) + 0x590,&DAT_001f94c3,&local_88,&uStack_61)
        ;
        iVar3 = param_2[9];
        *(long *)(lVar11 + 0x70) = *(long *)(lVar11 + 0x70) + 1;
        *(long *)(lVar11 + 0x68) = *(long *)(lVar11 + 0x68) + (long)iVar3;
      }
    }
  }
  if ((*(byte *)(param_2 + 0x5c) & 1) != 0) {
    dVar17 = *(double *)(param_2 + 0x5a);
    dVar15 = *(double *)(param_2 + 0x58);
    dVar16 = *(double *)(param_2 + 0x56);
    *(long *)(lVar7 + 0x178) = *(long *)(lVar7 + 0x178) + 1;
    *(double *)(lVar7 + 0x170) = dVar17 + *(double *)(lVar7 + 0x170);
    *(double *)(lVar7 + 0x168) = dVar15 + *(double *)(lVar7 + 0x168);
    *(double *)(lVar7 + 0x160) = dVar16 + *(double *)(lVar7 + 0x160);
    iVar3 = iVar5;
    if (*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) == 4) {
      iVar3 = -1;
    }
    local_70 = (undefined4 *)CONCAT44(local_70._4_4_,iVar3);
    local_88 = &local_70;
    lVar11 = FUN_0061cb5c(0,*(long *)(param_1 + 0x3c0) + 0x5a8,*(long *)(param_1 + 0x3c0) + 0x5a8,
                          &DAT_001f94c3,&local_88,&uStack_61);
    *(long *)(lVar11 + 0x30) = *(long *)(lVar11 + 0x30) + 1;
    *(double *)(lVar11 + 0x28) = *(double *)(lVar11 + 0x28) + (double)(float)dVar16;
    local_88 = &local_70;
    lVar11 = FUN_0061cb5c(0,*(long *)(param_1 + 0x3c0) + 0x5a8,*(long *)(param_1 + 0x3c0) + 0x5a8,
                          &DAT_001f94c3,&local_88,&uStack_61);
    *(long *)(lVar11 + 0x40) = *(long *)(lVar11 + 0x40) + 1;
    *(double *)(lVar11 + 0x38) = *(double *)(lVar11 + 0x38) + (double)(float)dVar15;
    local_88 = &local_70;
    lVar11 = FUN_0061cb5c(0,*(long *)(param_1 + 0x3c0) + 0x5a8,*(long *)(param_1 + 0x3c0) + 0x5a8,
                          &DAT_001f94c3,&local_88,&uStack_61);
    *(long *)(lVar11 + 0x50) = *(long *)(lVar11 + 0x50) + 1;
    *(double *)(lVar11 + 0x48) = *(double *)(lVar11 + 0x48) + (double)(float)dVar17;
  }
  if ((*(byte *)(param_2 + 10) >> 1 & 1) != 0) {
    *(int *)(lVar7 + 400) = *(int *)(lVar7 + 400) + 1;
    if (*(char *)(param_1 + 0x358) == '\x01') {
      if (*(long *)(param_2 + 4) <= *(long *)(param_1 + 0x350)) goto LAB_00618fbc;
      *(undefined1 *)(param_1 + 0x358) = 0;
    }
    if ((long *)(param_1 + 0x350) == (long *)0x0) {
LAB_00619098:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar12 = *(undefined8 *)(param_2 + 4);
    *(undefined1 *)(param_1 + 0x358) = 1;
    *(undefined8 *)(param_1 + 0x350) = uVar12;
    *(int *)(param_1 + 0x280) = *(int *)(param_1 + 0x280) + 1;
  }
LAB_00618fbc:
  FUN_009924ec(param_1 + 0x2c8,*(undefined8 *)(param_2 + 0x24),uVar6);
  uVar9 = FUN_00617638(*(undefined8 *)(param_1 + 0x3c0),param_2,iVar5);
  if ((uVar9 & 1) != 0) {
    FUN_009924ec(param_1 + 0x300,1,uVar6);
  }
  if ((bVar14 & 1) != 0) {
    FUN_009924ec(lVar8 + 0x30,1,uVar6);
  }
  if (*(char *)(param_1 + 900) == '\x01') {
    uVar4 = *(uint *)(param_1 + 0x37c);
    lVar7 = *(long *)(param_1 + 0x3c0);
    *(byte *)(param_1 + 0x22d) = *(byte *)(param_1 + 0x22d) | 0 < (int)uVar4;
    if ((int)uVar4 < 1) {
      *(long *)(lVar7 + 0x88) = *(long *)(lVar7 + 0x88) + 1;
    }
    else {
      *(long *)(lVar7 + 0x88) = *(long *)(lVar7 + 0x88) + 1;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      lVar7 = *(long *)(param_1 + 0x3c0);
      *(long *)(lVar7 + 0x98) = *(long *)(lVar7 + 0x98) + 1;
      *(ulong *)(lVar7 + 0x90) = *(long *)(lVar7 + 0x90) + (ulong)uVar4;
    }
  }
LAB_00619068:
  iVar5 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x188));
  return iVar5;
}


// ===== 006190ac  FUN_006190ac =====

/* WARNING: Removing unreachable block (ram,0x006192b4) */

int FUN_006190ac(long param_1,ulong *param_2,ushort param_3)

{
  ulong *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  void *local_70;
  undefined8 uStack_68;
  ulong local_60;
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x188));
  if (*(char *)(param_1 + 0x1d8) == '\x01') {
    if (*(char *)(param_1 + 0x1d7) < '\0') {
      FUN_005478d8(&local_70,*(undefined8 *)(param_1 + 0x1c0),*(undefined8 *)(param_1 + 0x1c8));
    }
    else {
      uStack_68 = *(undefined8 *)(param_1 + 0x1c8);
      local_70 = *(void **)(param_1 + 0x1c0);
      local_60 = *(ulong *)(param_1 + 0x1d0);
    }
  }
  else {
    FUN_005d3510(&local_70,"unknown");
  }
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_005478d8(&local_58,*param_2,param_2[1]);
  }
  else {
    local_48 = param_2[2];
    uStack_50 = param_2[1];
    local_58 = *param_2;
  }
  uVar4 = local_60;
  uVar3 = uStack_68;
  pvVar2 = local_70;
  puVar1 = (ulong *)(param_1 + 0x388);
  if (*(char *)(param_1 + 0x3b8) == '\x01') {
    if (*(char *)(param_1 + 0x39f) < '\0') {
      operator_delete(*(void **)(param_1 + 0x388));
    }
    uVar4 = local_60;
    local_60 = local_60 & 0xffffffffffffff;
    *(undefined8 *)(param_1 + 0x390) = uStack_68;
    *puVar1 = (ulong)local_70;
    *(ulong *)(param_1 + 0x398) = uVar4;
    local_70 = (void *)((ulong)local_70 & 0xffffffffffffff00);
    if (*(char *)(param_1 + 0x3b7) < '\0') {
      operator_delete(*(void **)(param_1 + 0x3a0));
    }
    uVar5 = local_48;
    uVar4 = local_58;
    local_48 = local_48 & 0xffffffffffffff;
    local_58 = local_58 & 0xffffffffffffff00;
    *(ulong *)(param_1 + 0x3a8) = uStack_50;
    *(ulong *)(param_1 + 0x3a0) = uVar4;
    *(ulong *)(param_1 + 0x3b0) = uVar5;
    if ((long)local_60 < 0) {
      operator_delete(local_70);
    }
  }
  else {
    if (puVar1 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uStack_68 = 0;
    local_60 = 0;
    local_70 = (void *)0x0;
    *(ulong *)(param_1 + 0x398) = uVar4;
    *(undefined8 *)(param_1 + 0x390) = uVar3;
    *puVar1 = (ulong)pvVar2;
    *(ulong *)(param_1 + 0x3b0) = local_48;
    *(ulong *)(param_1 + 0x3a8) = uStack_50;
    *(ulong *)(param_1 + 0x3a0) = local_58;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    *(undefined1 *)(param_1 + 0x3b8) = 1;
  }
  FUN_00600e24(param_1 + 0x1c0,param_2);
  plVar9 = *(long **)(param_1 + 0x260);
  *(ushort *)(param_1 + 0x284) = param_3 & 0xff | 0x100;
  while (plVar9 != (long *)(param_1 + 0x268)) {
    if (*(char *)((long)plVar9 + 0x1bd) == '\x01') {
      *(undefined1 *)((long)plVar9 + 0x1bd) = 0;
    }
    plVar10 = plVar9;
    plVar6 = (long *)plVar9[1];
    if ((long *)plVar9[1] == (long *)0x0) {
      do {
        plVar9 = (long *)plVar10[2];
        bVar7 = plVar10 != (long *)*plVar9;
        plVar10 = plVar9;
      } while (bVar7);
    }
    else {
      do {
        plVar9 = plVar6;
        plVar6 = (long *)*plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
    }
  }
  iVar8 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x188));
  return iVar8;
}


// ===== 006192cc  FUN_006192cc =====

int FUN_006192cc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  double dVar4;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x188));
  lVar2 = *(long *)(param_1 + 0x3c0);
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
  plVar3 = (long *)(lVar2 + 0xf0);
  dVar4 = (double)FUN_0099234c(plVar3,uVar1,*plVar3 * *(long *)(lVar2 + 0xf8) * 1000);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x188));
  return (int)dVar4;
}


// ===== 00619338  FUN_00619338 =====

int FUN_00619338(long param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x188));
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
  dVar2 = (double)FUN_0099234c(param_1 + 0x300,uVar1,
                               *(long *)(param_1 + 0x300) * *(long *)(param_1 + 0x308) * 1000);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x188));
  return (int)dVar2;
}


// ===== 006193a4  FUN_006193a4 =====

int FUN_006193a4(long param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x188));
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
  FUN_009924ec(*(long *)(param_1 + 0x3c0) + 0xf0,1,uVar2);
  thunk_FUN_005f48d0(*(long *)(param_1 + 0x3c0) + 0x128,1);
  lVar3 = *(long *)(param_1 + 0x3c0);
  *(long *)(lVar3 + 0x28) = *(long *)(lVar3 + 0x28) + 1;
  *(long *)(lVar3 + 0x20) = *(long *)(lVar3 + 0x20) + (long)param_2;
  lVar3 = *(long *)(param_1 + 0x3c0);
  *(long *)(lVar3 + 0x38) = *(long *)(lVar3 + 0x38) + 1;
  *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + (long)param_3;
  if (*(char *)(param_1 + 0x378) == '\x01') {
    lVar3 = *(long *)(param_1 + 0x3c0);
    if (*(char *)(param_1 + 0x22e) == '\x01') {
      *(long *)(lVar3 + 0xa0) = *(long *)(lVar3 + 0xa0) + 1;
    }
    *(long *)(lVar3 + 0xa8) = *(long *)(lVar3 + 0xa8) + 1;
  }
  lVar3 = FUN_009924e0(param_1 + 0x300);
  if (lVar3 == 0) {
    FUN_009924ec(param_1 + 0x300,0,uVar2);
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x188));
  return iVar1;
}


// ===== 006194b0  FUN_006194b0 =====

int FUN_006194b0(long param_1,int param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x188));
  if (param_2 < 3) {
    if (param_2 == 0) {
      *(int *)(param_1 + 0x20c) = *(int *)(param_1 + 0x20c) + 1;
    }
    else if (param_2 == 1) {
      *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + 1;
    }
    else if (param_2 == 2) {
      *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) + 1;
    }
  }
  else if (param_2 == 3) {
    *(int *)(param_1 + 0x220) = *(int *)(param_1 + 0x220) + 1;
  }
  else if (param_2 == 4) {
    *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
  }
  else if (param_2 == 5) {
    *(int *)(param_1 + 0x21c) = *(int *)(param_1 + 0x21c) + 1;
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x188));
  return iVar1;
}


// ===== 00619574  FUN_00619574 =====

int FUN_00619574(long param_1)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x188));
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined8 *)(param_1 + 0x37c) = 0;
  FUN_006195b8(param_1);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x188));
  return iVar1;
}


// ===== 006195b8  FUN_006195b8 =====

void FUN_006195b8(long param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  char cVar8;
  
  cVar5 = *(char *)(param_1 + 0x379);
  iVar4 = *(int *)(param_1 + 0x374);
  if (cVar5 == '\0') {
    iVar4 = -0x55555600;
  }
  bVar1 = 0;
  if (0 < *(int *)(param_1 + 0x370)) {
    bVar1 = *(byte *)(param_1 + 0x378);
  }
  if ((bVar1 & 1) == 0) {
    cVar8 = '\0';
    if (0 < iVar4) {
      cVar8 = cVar5;
    }
  }
  else {
    cVar8 = '\x01';
  }
  bVar2 = 0;
  if (0 < *(int *)(param_1 + 0x37c)) {
    bVar2 = *(byte *)(param_1 + 900);
  }
  bVar3 = 0;
  if (0 < *(int *)(param_1 + 0x380)) {
    bVar3 = *(byte *)(param_1 + 0x385);
  }
  if (((((bVar2 & 1) == 0) && ((bVar3 & 1) == 0)) && ((*(byte *)(param_1 + 0x36d) & 1) == 0)) &&
     (*(char *)(param_1 + 0x36e) != '\x01')) {
    if (cVar8 == '\0') {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
  }
  else {
    uVar7 = 2;
  }
  FUN_0061d964(param_1 + 0x298,uVar7);
  *(byte *)(param_1 + 0x22e) = bVar1;
  cVar8 = '\0';
  if (0 < iVar4) {
    cVar8 = cVar5;
  }
  *(byte *)(param_1 + 0x22d) = bVar2;
  *(char *)(param_1 + 0x230) = cVar8;
  *(byte *)(param_1 + 0x22f) = bVar3;
  if (*(char *)(param_1 + 0x36d) == '\x01') {
    if (*(int *)(param_1 + 0x1b0) == 1) {
      *(undefined1 *)(param_1 + 0x22f) = 1;
    }
    else if (*(int *)(param_1 + 0x1b0) == 0) {
      *(undefined1 *)(param_1 + 0x22d) = 1;
    }
  }
  if (*(char *)(param_1 + 0x36e) == '\x01') {
    *(undefined1 *)(param_1 + 0x22d) = 1;
  }
  uVar6 = FUN_0061d958(param_1 + 0x298);
  *(undefined4 *)(param_1 + 0x234) = uVar6;
  return;
}


// ===== 006196e8  FUN_006196e8 =====

int FUN_006196e8(long param_1,short param_2,undefined2 param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x188));
  lVar4 = *(long *)(param_1 + 0x3c0);
  *(short *)(param_1 + 0x378) = param_2;
  *(undefined2 *)(param_1 + 900) = param_3;
  if (param_2 == 0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
    uVar3 = uVar2 / 1000;
    if (499 < uVar2 % 1000) {
      uVar3 = uVar3 + 1;
    }
    if ((uVar2 & 0x8000000000000000) != 0) {
      uVar3 = -(-uVar2 / 1000) - (ulong)(500 < -uVar2 % 1000);
    }
    if (*(long *)(lVar4 + 0x3f8) != -1) {
      *(ulong *)(lVar4 + 0x400) = (uVar3 - *(long *)(lVar4 + 0x3f8)) + *(long *)(lVar4 + 0x400);
      uVar3 = 0xffffffffffffffff;
LAB_0061982c:
      *(ulong *)(lVar4 + 0x3f8) = uVar3;
    }
  }
  else if ((*(byte *)(param_1 + 0x22c) & 1) == 0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
    uVar3 = uVar2 / 1000;
    if (499 < uVar2 % 1000) {
      uVar3 = uVar3 + 1;
    }
    if ((uVar2 & 0x8000000000000000) != 0) {
      uVar3 = -(-uVar2 / 1000) - (ulong)(500 < -uVar2 % 1000);
    }
    if (*(long *)(lVar4 + 0x3f8) == -1) goto LAB_0061982c;
  }
  lVar4 = *(long *)(param_1 + 0x3c0);
  if (*(char *)(param_1 + 0x385) == '\0' && *(char *)(param_1 + 900) == '\0') {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
    uVar3 = uVar2 / 1000;
    if (499 < uVar2 % 1000) {
      uVar3 = uVar3 + 1;
    }
    if ((uVar2 & 0x8000000000000000) != 0) {
      uVar3 = -(-uVar2 / 1000) - (ulong)(500 < -uVar2 % 1000);
    }
    if (*(long *)(lVar4 + 0x408) == -1) goto LAB_00619950;
    *(ulong *)(lVar4 + 0x410) = (uVar3 - *(long *)(lVar4 + 0x408)) + *(long *)(lVar4 + 0x410);
    uVar3 = 0xffffffffffffffff;
  }
  else {
    if ((*(byte *)(param_1 + 0x22c) & 1) != 0) goto LAB_00619950;
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
    uVar3 = uVar2 / 1000;
    if (499 < uVar2 % 1000) {
      uVar3 = uVar3 + 1;
    }
    if ((uVar2 & 0x8000000000000000) != 0) {
      uVar3 = -(-uVar2 / 1000) - (ulong)(500 < -uVar2 % 1000);
    }
    if (*(long *)(lVar4 + 0x408) != -1) goto LAB_00619950;
  }
  *(ulong *)(lVar4 + 0x408) = uVar3;
LAB_00619950:
  FUN_006195b8(param_1);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x188));
  return iVar1;
}


// ===== 00619970  FUN_00619970 =====

int FUN_00619970(long param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x188));
  iVar2 = *(int *)(param_1 + 0x37c);
  *(undefined8 *)(param_1 + 0x370) = *param_3;
  uVar5 = *param_4;
  *(undefined8 *)(param_1 + 0x37c) = uVar5;
  if (param_2 == 0) {
    lVar3 = *(long *)(param_1 + 0x3c0);
    bVar1 = *(char *)(param_1 + 900) == '\0';
    iVar4 = (int)uVar5;
    if (bVar1) {
      iVar4 = -1;
    }
    if (bVar1) {
      iVar2 = -0x55555600;
    }
    if ((((*(int *)(lVar3 + 0x588) != 0) && (0 < iVar2)) && (iVar4 < iVar2)) &&
       (*(int *)(lVar3 + 0x58c) < *(int *)(lVar3 + 0x588))) {
      *(int *)(lVar3 + 0x58c) = *(int *)(lVar3 + 0x58c) + 1;
    }
    *(int *)(param_1 + 600) = *(int *)(param_1 + 600) + 1;
  }
  else if (param_2 == 1) {
    *(int *)(param_1 + 0x254) = *(int *)(param_1 + 0x254) + 1;
  }
  FUN_006195b8(param_1);
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x188));
  return iVar2;
}


// ===== 00619a44  FUN_00619a44 =====

int FUN_00619a44(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  long *plVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  int iVar23;
  ulong uVar24;
  undefined1 auVar25 [16];
  
  bVar3 = *(byte *)(param_2 + 0x368);
  bVar4 = *(byte *)(param_2 + 0x228);
  bVar5 = *(byte *)(param_2 + 0x2c8);
  bVar6 = *(byte *)(param_2 + 0x408);
  bVar7 = *(byte *)(param_2 + 0x4a8);
  bVar8 = *(byte *)(param_2 + 0x48);
  bVar9 = *(byte *)(param_2 + 0xe8);
  bVar10 = *(byte *)(param_2 + 0x188);
  uVar13 = FUN_007cc138(param_3,0);
  uVar14 = FUN_007cc138(param_3,1);
  uVar15 = FUN_007cc138(param_3,2);
  uVar16 = FUN_007cc138(param_3,3);
  auVar25._4_4_ = uVar14;
  auVar25._0_4_ = uVar13;
  auVar25._8_4_ = uVar15;
  auVar25._12_4_ = uVar16;
  auVar25 = NEON_cmtst(auVar25,auVar25,4);
  uVar24 = CONCAT26(auVar25._12_2_,CONCAT24(auVar25._8_2_,CONCAT22(auVar25._4_2_,auVar25._0_2_))) &
           0x1000100010001;
  iVar23 = CONCAT13((char)(uVar24 >> 0x30),
                    CONCAT12((char)(uVar24 >> 0x20),CONCAT11((char)(uVar24 >> 0x10),(char)uVar24)));
  iVar17 = FUN_007cc138(param_3,4);
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x188));
  if (*(undefined4 **)(param_1 + 0x58) != *(undefined4 **)(param_1 + 0x50)) {
    lVar19 = FUN_006180f4(param_1,**(undefined4 **)(param_1 + 0x50));
    if (lVar19 != 0) {
      uVar13 = FUN_007cc138(param_3,0);
      *(undefined4 *)(lVar19 + 0x24) = uVar13;
    }
    if (4 < (ulong)(*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50))) {
      lVar19 = FUN_006180f4(param_1,*(undefined4 *)(*(long *)(param_1 + 0x50) + 4));
      if (lVar19 != 0) {
        uVar13 = FUN_007cc138(param_3,1);
        *(undefined4 *)(lVar19 + 0x24) = uVar13;
      }
      if (8 < (ulong)(*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50))) {
        lVar19 = FUN_006180f4(param_1,*(undefined4 *)(*(long *)(param_1 + 0x50) + 8));
        if (lVar19 != 0) {
          uVar13 = FUN_007cc138(param_3,2);
          *(undefined4 *)(lVar19 + 0x24) = uVar13;
        }
        if (0xc < (ulong)(*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50))) {
          lVar19 = FUN_006180f4(param_1,*(undefined4 *)(*(long *)(param_1 + 0x50) + 0xc));
          if (lVar19 != 0) {
            uVar13 = FUN_007cc138(param_3,3);
            *(undefined4 *)(lVar19 + 0x24) = uVar13;
          }
          if ((0x10 < (ulong)(*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50))) &&
             (lVar19 = FUN_006180f4(param_1,*(undefined4 *)(*(long *)(param_1 + 0x50) + 0x10)),
             lVar19 != 0)) {
            uVar13 = FUN_007cc138(param_3,4);
            *(undefined4 *)(lVar19 + 0x24) = uVar13;
          }
        }
      }
    }
  }
  iVar1 = (uint)bVar8 + (uint)bVar9 + (uint)bVar10;
  *(undefined1 *)(param_1 + 0x36d) = *(undefined1 *)(param_3 + 0xa4);
  iVar2 = (uint)bVar4 + (uint)bVar5 + (uint)bVar3 + (uint)bVar6 + (uint)bVar7;
  FUN_006195b8(param_1);
  plVar21 = *(long **)(param_1 + 0x260);
  do {
    if (plVar21 == (long *)(param_1 + 0x268)) {
      if (iVar23 != *(int *)(param_1 + 0x368) || (iVar17 != 0) != (bool)*(char *)(param_1 + 0x36c))
      {
        if ((*(int *)(param_1 + 0x360) == iVar2) && (*(int *)(param_1 + 0x364) == iVar1)) {
          *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) + 1;
        }
        *(int *)(param_1 + 0x368) = iVar23;
        *(bool *)(param_1 + 0x36c) = iVar17 != 0;
      }
      *(int *)(param_1 + 0x360) = iVar2;
      *(int *)(param_1 + 0x364) = iVar1;
      iVar17 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x188));
      return iVar17;
    }
    lVar19 = *(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50);
    if (lVar19 != 0) {
      lVar20 = 0;
      do {
        if (*(int *)(*(long *)(param_1 + 0x50) + lVar20 * 4) == (int)plVar21[4]) {
          uVar18 = FUN_007cc138(param_3);
          if ((*(byte *)(plVar21 + 0x39) & 1) == 0) {
            *(undefined1 *)(plVar21 + 0x39) = 1;
          }
          plVar21[0x38] = (ulong)uVar18;
          if (uVar18 == 0) goto LAB_00619cb0;
          goto LAB_00619cb4;
        }
        lVar20 = lVar20 + 1;
      } while (lVar19 >> 2 != lVar20);
    }
    if ((char)plVar21[0x39] == '\x01') {
LAB_00619cb0:
      *(undefined1 *)(plVar21 + 0x39) = 0;
    }
LAB_00619cb4:
    plVar11 = (long *)plVar21[1];
    plVar22 = plVar21;
    if ((long *)plVar21[1] == (long *)0x0) {
      do {
        plVar21 = (long *)plVar22[2];
        bVar12 = plVar22 != (long *)*plVar21;
        plVar22 = plVar21;
      } while (bVar12);
    }
    else {
      do {
        plVar21 = plVar11;
        plVar11 = (long *)*plVar21;
      } while ((long *)*plVar21 != (long *)0x0);
    }
  } while( true );
}


// ===== 00619d8c  FUN_00619d8c =====

int FUN_00619d8c(long param_1,undefined1 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x188));
  *(undefined1 *)(param_1 + 0x36e) = param_2;
  FUN_006195b8(param_1);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x188));
  return iVar1;
}


// ===== 00619dcc  FUN_00619dcc =====

int FUN_00619dcc(long param_1)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x188));
  *(int *)(*(long *)(param_1 + 0x3c0) + 0x588) = *(int *)(*(long *)(param_1 + 0x3c0) + 0x588) + 1;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x188));
  return iVar1;
}


// ===== 00619e0c  FUN_00619e0c =====

int FUN_00619e0c(long param_1,undefined4 param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x188));
  lVar2 = FUN_006180f4(param_1,param_2);
  if (lVar2 != 0) {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    *(undefined4 *)(lVar2 + 0xf0) = *(undefined4 *)(param_3 + 2);
    *(undefined8 *)(lVar2 + 0xe8) = uVar6;
    *(undefined8 *)(lVar2 + 0xe0) = uVar5;
    if (*(long *)(*(long *)(param_1 + 0x3c0) + 1000) == -1) {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
      uVar4 = uVar3 / 1000;
      if (499 < uVar3 % 1000) {
        uVar4 = uVar4 + 1;
      }
      if ((uVar3 & 0x8000000000000000) != 0) {
        uVar4 = -(-uVar3 / 1000) - (ulong)(500 < -uVar3 % 1000);
      }
      *(ulong *)(*(long *)(param_1 + 0x3c0) + 1000) = uVar4;
    }
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x188));
  return iVar1;
}


// ===== 00619eec  FUN_00619eec =====

int FUN_00619eec(long param_1,undefined4 param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x178));
  lVar2 = FUN_006180f4(param_1 + -0x10,param_2);
  if (lVar2 != 0) {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    *(undefined4 *)(lVar2 + 0xf0) = *(undefined4 *)(param_3 + 2);
    *(undefined8 *)(lVar2 + 0xe8) = uVar6;
    *(undefined8 *)(lVar2 + 0xe0) = uVar5;
    if (*(long *)(*(long *)(param_1 + 0x3b0) + 1000) == -1) {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
      uVar4 = uVar3 / 1000;
      if (499 < uVar3 % 1000) {
        uVar4 = uVar4 + 1;
      }
      if ((uVar3 & 0x8000000000000000) != 0) {
        uVar4 = -(-uVar3 / 1000) - (ulong)(500 < -uVar3 % 1000);
      }
      *(ulong *)(*(long *)(param_1 + 0x3b0) + 1000) = uVar4;
    }
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x178));
  return iVar1;
}


// ===== 00619fcc  FUN_00619fcc =====

int FUN_00619fcc(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x188));
  lVar2 = FUN_006180f4(param_1,*(undefined4 *)((long)param_2 + 4));
  if (lVar2 != 0) {
    FUN_0061dfe4(*(long *)(param_1 + 0x3c0) + 0x478,*(undefined4 *)((long)param_2 + 4),
                 *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
    if (*(char *)(lVar2 + 0x138) == '\x01') {
      uVar6 = param_2[5];
      uVar5 = param_2[4];
      uVar4 = param_2[7];
      uVar3 = param_2[6];
      uVar8 = param_2[1];
      uVar7 = *param_2;
      uVar10 = param_2[3];
      uVar9 = param_2[2];
    }
    else {
      if ((undefined8 *)(lVar2 + 0xf8) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar6 = param_2[5];
      uVar5 = param_2[4];
      uVar4 = param_2[7];
      uVar3 = param_2[6];
      uVar8 = param_2[1];
      uVar7 = *param_2;
      uVar10 = param_2[3];
      uVar9 = param_2[2];
      *(undefined1 *)(lVar2 + 0x138) = 1;
    }
    *(undefined8 *)(lVar2 + 0x120) = uVar6;
    *(undefined8 *)(lVar2 + 0x118) = uVar5;
    *(undefined8 *)(lVar2 + 0x130) = uVar4;
    *(undefined8 *)(lVar2 + 0x128) = uVar3;
    *(undefined8 *)(lVar2 + 0x100) = uVar8;
    *(undefined8 *)(lVar2 + 0xf8) = uVar7;
    *(undefined8 *)(lVar2 + 0x110) = uVar10;
    *(undefined8 *)(lVar2 + 0x108) = uVar9;
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x188));
  return iVar1;
}


// ===== 0061a07c  FUN_0061a07c =====

void FUN_0061a07c(long param_1)

{
  FUN_00619fcc(param_1 + -8);
  return;
}


// ===== 0061a088  FUN_0061a088 =====

int FUN_0061a088(long *param_1,long param_2,uint param_3)

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
  
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x188));
  plVar2 = *(long **)(param_2 + 0x268);
  if (plVar2 != (long *)0x0) {
    do {
      while (param_3 < *(uint *)(plVar2 + 4)) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) goto LAB_0061a134;
      }
      if (param_3 == *(uint *)(plVar2 + 4)) {
        if (plVar2 != (long *)(param_2 + 0x268)) {
          lVar4 = plVar2[0x12];
          lVar3 = plVar2[0x11];
          lVar5 = plVar2[0xf];
          lVar7 = plVar2[0xc];
          lVar6 = plVar2[0xb];
          lVar9 = plVar2[0xe];
          lVar8 = plVar2[0xd];
          param_1[5] = plVar2[0x10];
          param_1[4] = lVar5;
          param_1[7] = lVar4;
          param_1[6] = lVar3;
          param_1[1] = lVar7;
          *param_1 = lVar6;
          param_1[3] = lVar9;
          param_1[2] = lVar8;
          lVar4 = plVar2[0x1a];
          lVar3 = plVar2[0x19];
          lVar5 = plVar2[0x17];
          lVar7 = plVar2[0x14];
          lVar6 = plVar2[0x13];
          lVar9 = plVar2[0x16];
          lVar8 = plVar2[0x15];
          param_1[0xd] = plVar2[0x18];
          param_1[0xc] = lVar5;
          param_1[0xf] = lVar4;
          param_1[0xe] = lVar3;
          param_1[9] = lVar7;
          param_1[8] = lVar6;
          param_1[0xb] = lVar9;
          param_1[10] = lVar8;
          lVar4 = plVar2[0x20];
          lVar3 = plVar2[0x1f];
          lVar5 = plVar2[0x1d];
          lVar7 = plVar2[0x1c];
          lVar6 = plVar2[0x1b];
          param_1[0x13] = plVar2[0x1e];
          param_1[0x12] = lVar5;
          param_1[0x15] = lVar4;
          param_1[0x14] = lVar3;
          param_1[0x11] = lVar7;
          param_1[0x10] = lVar6;
          goto LAB_0061a13c;
        }
        break;
      }
      plVar2 = (long *)plVar2[1];
    } while (plVar2 != (long *)0x0);
  }
LAB_0061a134:
  FUN_007ccda0(param_1);
LAB_0061a13c:
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x188));
  return iVar1;
}


// ===== 0061a154  FUN_0061a154 =====

int FUN_0061a154(long *param_1,long param_2,uint param_3)

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
  
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x170));
  plVar2 = *(long **)(param_2 + 0x250);
  if (plVar2 != (long *)0x0) {
    do {
      while (param_3 < *(uint *)(plVar2 + 4)) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) goto LAB_0061a200;
      }
      if (param_3 == *(uint *)(plVar2 + 4)) {
        if (plVar2 != (long *)(param_2 + 0x250)) {
          lVar4 = plVar2[0x12];
          lVar3 = plVar2[0x11];
          lVar5 = plVar2[0xf];
          lVar7 = plVar2[0xc];
          lVar6 = plVar2[0xb];
          lVar9 = plVar2[0xe];
          lVar8 = plVar2[0xd];
          param_1[5] = plVar2[0x10];
          param_1[4] = lVar5;
          param_1[7] = lVar4;
          param_1[6] = lVar3;
          param_1[1] = lVar7;
          *param_1 = lVar6;
          param_1[3] = lVar9;
          param_1[2] = lVar8;
          lVar4 = plVar2[0x1a];
          lVar3 = plVar2[0x19];
          lVar5 = plVar2[0x17];
          lVar7 = plVar2[0x14];
          lVar6 = plVar2[0x13];
          lVar9 = plVar2[0x16];
          lVar8 = plVar2[0x15];
          param_1[0xd] = plVar2[0x18];
          param_1[0xc] = lVar5;
          param_1[0xf] = lVar4;
          param_1[0xe] = lVar3;
          param_1[9] = lVar7;
          param_1[8] = lVar6;
          param_1[0xb] = lVar9;
          param_1[10] = lVar8;
          lVar4 = plVar2[0x20];
          lVar3 = plVar2[0x1f];
          lVar5 = plVar2[0x1d];
          lVar7 = plVar2[0x1c];
          lVar6 = plVar2[0x1b];
          param_1[0x13] = plVar2[0x1e];
          param_1[0x12] = lVar5;
          param_1[0x15] = lVar4;
          param_1[0x14] = lVar3;
          param_1[0x11] = lVar7;
          param_1[0x10] = lVar6;
          goto LAB_0061a208;
        }
        break;
      }
      plVar2 = (long *)plVar2[1];
    } while (plVar2 != (long *)0x0);
  }
LAB_0061a200:
  FUN_007ccda0(param_1);
LAB_0061a208:
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x170));
  return iVar1;
}


// ===== 0061a220  FUN_0061a220 =====

int FUN_0061a220(long param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x188));
  piVar2 = (int *)FUN_006180f4(param_1,param_3);
  uVar9 = param_2[4];
  uVar8 = param_2[7];
  uVar7 = param_2[6];
  uVar13 = param_2[1];
  uVar12 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  *(undefined8 *)(piVar2 + 0x16) = param_2[5];
  *(undefined8 *)(piVar2 + 0x14) = uVar9;
  *(undefined8 *)(piVar2 + 0x1a) = uVar8;
  *(undefined8 *)(piVar2 + 0x18) = uVar7;
  *(undefined8 *)(piVar2 + 0xe) = uVar13;
  *(undefined8 *)(piVar2 + 0xc) = uVar12;
  *(undefined8 *)(piVar2 + 0x12) = uVar11;
  *(undefined8 *)(piVar2 + 0x10) = uVar10;
  uVar9 = param_2[0xc];
  uVar8 = param_2[0xf];
  uVar7 = param_2[0xe];
  uVar13 = param_2[9];
  uVar12 = param_2[8];
  uVar11 = param_2[0xb];
  uVar10 = param_2[10];
  *(undefined8 *)(piVar2 + 0x26) = param_2[0xd];
  *(undefined8 *)(piVar2 + 0x24) = uVar9;
  *(undefined8 *)(piVar2 + 0x2a) = uVar8;
  *(undefined8 *)(piVar2 + 0x28) = uVar7;
  *(undefined8 *)(piVar2 + 0x1e) = uVar13;
  *(undefined8 *)(piVar2 + 0x1c) = uVar12;
  *(undefined8 *)(piVar2 + 0x22) = uVar11;
  *(undefined8 *)(piVar2 + 0x20) = uVar10;
  uVar8 = param_2[0x11];
  uVar7 = param_2[0x10];
  uVar10 = param_2[0x13];
  uVar9 = param_2[0x12];
  uVar11 = param_2[0x14];
  *(undefined8 *)(piVar2 + 0x36) = param_2[0x15];
  *(undefined8 *)(piVar2 + 0x34) = uVar11;
  *(undefined8 *)(piVar2 + 0x2e) = uVar8;
  *(undefined8 *)(piVar2 + 0x2c) = uVar7;
  *(undefined8 *)(piVar2 + 0x32) = uVar10;
  *(undefined8 *)(piVar2 + 0x30) = uVar9;
  if (*(long *)(*(long *)(param_1 + 0x3c0) + 0x3f0) == -1) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
    if ((long)uVar3 < 0) {
      uVar5 = -(-uVar3 / 1000) - (ulong)(500 < -uVar3 % 1000);
    }
    else {
      uVar5 = uVar3 / 1000;
      if (499 < uVar3 % 1000) {
        uVar5 = uVar5 + 1;
      }
    }
    *(ulong *)(*(long *)(param_1 + 0x3c0) + 0x3f0) = uVar5;
    lVar6 = *(long *)(param_1 + 0x3c0);
    *(undefined8 *)(lVar6 + 0x400) = 0;
    if (*(long *)(lVar6 + 0x3f8) != -1) {
      *(ulong *)(lVar6 + 0x3f8) = uVar5;
    }
    lVar6 = *(long *)(param_1 + 0x3c0);
    *(undefined8 *)(lVar6 + 0x410) = 0;
    if (*(long *)(lVar6 + 0x408) != -1) {
      *(ulong *)(lVar6 + 0x408) = uVar5;
    }
  }
  thunk_FUN_005f4a00(*(long *)(param_1 + 0x3c0) + 0x1d8,param_2[2] + param_2[1] + param_2[3],param_3
                    );
  thunk_FUN_005f4a00(*(long *)(param_1 + 0x3c0) + 0x2e0,param_2[3],param_3);
  thunk_FUN_005f4a00(*(long *)(param_1 + 0x3c0) + 0x338,param_2[9] + param_2[8] + param_2[10],
                     param_3);
  thunk_FUN_005f4a00(*(long *)(param_1 + 0x3c0) + 0x390,param_2[0x10] + param_2[0xf] + param_2[0x11]
                     ,param_3);
  if (*piVar2 == 1) {
    lVar6 = *(long *)(param_1 + 0x3c0) + 0x288;
    lVar4 = param_2[2] + param_2[1] + param_2[3];
  }
  else {
    if (*piVar2 != 0) goto LAB_0061a40c;
    lVar4 = param_2[2] - (param_2[9] + param_2[0x10]);
    lVar6 = *(long *)(param_1 + 0x3c0) + 0x230;
  }
  thunk_FUN_005f4a00(lVar6,lVar4,param_3);
LAB_0061a40c:
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x188));
  return iVar1;
}


// ===== 0061a424  FUN_0061a424 =====

void FUN_0061a424(long param_1)

{
  FUN_0061a220(param_1 + -0x18);
  return;
}


// ===== 0061a430  FUN_0061a430 =====

int FUN_0061a430(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x188));
  lVar2 = FUN_006180f4(param_1,param_4);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x1c) = param_2;
    *(undefined4 *)(lVar2 + 0x20) = param_3;
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x188));
  return iVar1;
}


// ===== 0061a488  FUN_0061a488 =====

int FUN_0061a488(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x168));
  lVar2 = FUN_006180f4(param_1 + -0x20,param_4);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x1c) = param_2;
    *(undefined4 *)(lVar2 + 0x20) = param_3;
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x168));
  return iVar1;
}


// ===== 0061a4e0  FUN_0061a4e0 =====

int FUN_0061a4e0(long param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x188));
  lVar2 = FUN_006180f4(param_1,param_3);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0xc) = *param_2;
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x188));
  return iVar1;
}


// ===== 0061a538  FUN_0061a538 =====

int FUN_0061a538(long param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x160));
  lVar2 = FUN_006180f4(param_1 + -0x28,param_3);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0xc) = *param_2;
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x160));
  return iVar1;
}


// ===== 0061a590  FUN_0061a590 =====

void FUN_0061a590(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_1 + 0x48);
  lVar6 = *(long *)(param_1 + 0x50);
  lVar2 = 0;
  if (lVar6 != lVar11) {
    lVar2 = (lVar6 - lVar11) * 0x20 + -1;
  }
  if (lVar2 == *(long *)(param_1 + 0x68) + *(long *)(param_1 + 0x60)) {
    FUN_0061cc70(param_1 + 0x40);
    lVar11 = *(long *)(param_1 + 0x48);
    lVar6 = *(long *)(param_1 + 0x50);
  }
  if ((lVar11 == lVar6) ||
     (uVar5 = *(long *)(param_1 + 0x68) + *(long *)(param_1 + 0x60),
     plVar10 = (long *)(*(long *)(lVar11 + (uVar5 >> 8) * 8) + (uVar5 & 0xff) * 0x10),
     plVar10 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *plVar10 = param_2;
  plVar10[1] = param_3;
  lVar11 = *(long *)(param_1 + 0x68);
  lVar6 = *(long *)(param_1 + 0x70);
  lVar2 = lVar11 + 1;
  *(long *)(param_1 + 0x68) = lVar2;
  lVar9 = 0x7fffffffffffffff;
  if ((lVar6 != 0x7fffffffffffffff) && (param_3 != 0x7fffffffffffffff)) {
    lVar9 = -0x8000000000000000;
    if (param_3 != -0x8000000000000000 && lVar6 != -0x8000000000000000) {
      lVar9 = lVar6 + param_3;
    }
  }
  *(long *)(param_1 + 0x70) = lVar9;
  if ((*(long **)(param_1 + 0x78) == (long *)0x0) || (**(long **)(param_1 + 0x78) <= param_3)) {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/deque:1575: libc++ Hardening assertion !empty() failed: deque::back called on an empty deque\n"
                );
    }
    uVar5 = *(long *)(param_1 + 0x60) + lVar11;
    *(ulong *)(param_1 + 0x78) =
         *(long *)(*(long *)(param_1 + 0x48) + (uVar5 >> 8) * 8) + (uVar5 & 0xff) * 0x10 + 8;
  }
  else if (lVar2 == 0) goto LAB_0061a65c;
  puVar3 = *(undefined8 **)(param_1 + 0x48);
  uVar5 = *(ulong *)(param_1 + 0x60);
  do {
    plVar4 = puVar3 + (uVar5 >> 8);
    plVar10 = (long *)(*plVar4 + (uVar5 & 0xff) * 0x10);
    uVar8 = uVar5 & 0xff;
    if (((param_2 != 0x7fffffffffffffff) && (lVar11 = *plVar10, lVar11 != -0x8000000000000000)) &&
       ((param_2 == -0x8000000000000000 ||
        (lVar11 == 0x7fffffffffffffff || param_2 - lVar11 < 0xf4241)))) {
      if (*(long *)(param_1 + 0x78) == 0) {
        plVar10 = plVar10 + 1;
        *(long **)(param_1 + 0x78) = plVar10;
        if (puVar3 != *(undefined8 **)(param_1 + 0x50)) {
          lVar6 = puVar3[uVar5 + lVar2 >> 8];
          lVar11 = *plVar4 + uVar8 * 0x10;
          while (lVar11 != lVar6 + (uVar5 + lVar2 & 0xff) * 0x10) {
            plVar7 = (long *)(lVar11 + 8);
            if (*plVar10 <= *plVar7) {
              *(long **)(param_1 + 0x78) = plVar7;
              plVar10 = plVar7;
            }
            lVar11 = lVar11 + 0x10;
            if (lVar11 - *plVar4 == 0x1000) {
              plVar4 = plVar4 + 1;
              lVar11 = *plVar4;
            }
          }
        }
      }
      return;
    }
    lVar9 = plVar10[1];
    lVar6 = *(long *)(param_1 + 0x70);
    lVar11 = -0x8000000000000000;
    if (lVar9 != 0x7fffffffffffffff && lVar6 != -0x8000000000000000) {
      lVar11 = lVar6 - lVar9;
    }
    lVar1 = 0x7fffffffffffffff;
    if (lVar9 != -0x8000000000000000) {
      lVar1 = lVar11;
    }
    lVar11 = 0x7fffffffffffffff;
    if (lVar6 != 0x7fffffffffffffff) {
      lVar11 = lVar1;
    }
    *(long *)(param_1 + 0x70) = lVar11;
    lVar11 = *plVar4;
    if (*(long *)(param_1 + 0x78) == lVar11 + uVar8 * 0x10 + 8) {
      *(undefined8 *)(param_1 + 0x78) = 0;
      lVar11 = *plVar4;
    }
    if (lVar11 + uVar8 * 0x10 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    uVar5 = uVar5 + 1;
    lVar2 = lVar2 + -1;
    *(ulong *)(param_1 + 0x60) = uVar5;
    *(long *)(param_1 + 0x68) = lVar2;
    if (0x1ff < uVar5) {
      operator_delete((void *)*puVar3);
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x48) + 8);
      lVar2 = *(long *)(param_1 + 0x68);
      *(undefined8 **)(param_1 + 0x48) = puVar3;
      uVar5 = *(long *)(param_1 + 0x60) - 0x100;
      *(ulong *)(param_1 + 0x60) = uVar5;
    }
  } while (lVar2 != 0);
LAB_0061a65c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/deque:1563: libc++ Hardening assertion !empty() failed: deque::front called on an empty deque\n"
            );
}


// ===== 0061a848  FUN_0061a848 =====

int FUN_0061a848(long param_1,undefined4 param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  undefined4 local_50;
  undefined1 uStack_49;
  undefined1 *local_48;
  long local_28;
  
  local_50 = param_2;
  lVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x188));
  lVar4 = FUN_006180f4(param_1,param_2);
  if (lVar4 != 0) {
    local_28 = param_1 + 0x338;
    local_48 = (undefined1 *)&local_50;
    lVar5 = FUN_0061c0fc(&local_28,&local_50,&DAT_001f94c3,&local_48,&uStack_49);
    lVar6 = 0x7fffffffffffffff;
    if ((lVar3 != 0x7fffffffffffffff) && (param_3 != -0x8000000000000000)) {
      lVar6 = -0x8000000000000000;
      if (param_3 != 0x7fffffffffffffff && lVar3 != -0x8000000000000000) {
        lVar6 = lVar3 - param_3;
      }
    }
    FUN_0061a590(lVar5 + 0x28,lVar3,lVar6);
    uVar1 = 0;
    if (*(ulong *)(lVar5 + 0x90) != 0) {
      uVar1 = *(ulong *)(lVar5 + 0x98) / *(ulong *)(lVar5 + 0x90);
    }
    uVar7 = **(ulong **)(lVar5 + 0xa0);
    iVar8 = (int)(uVar7 / 1000);
    iVar2 = (int)(uVar1 / 1000);
    if (499 < uVar1 % 1000) {
      iVar2 = iVar2 + 1;
    }
    if ((uVar1 & 0x8000000000000000) != 0) {
      iVar2 = -(int)(-uVar1 / 1000) - (uint)(500 < -uVar1 % 1000);
    }
    if (499 < uVar7 % 1000) {
      iVar8 = iVar8 + 1;
    }
    if ((uVar7 & 0x8000000000000000) != 0) {
      iVar8 = -(int)(-uVar7 / 1000) - (uint)(500 < -uVar7 % 1000);
    }
    *(int *)(lVar4 + 0x28) = iVar2;
    *(int *)(lVar4 + 0x2c) = iVar8;
    lVar3 = *(long *)(param_1 + 0x3c0);
    *(long *)(lVar3 + 0xd8) = *(long *)(lVar3 + 0xd8) + 1;
    *(long *)(lVar3 + 0xd0) = *(long *)(lVar3 + 0xd0) + (long)iVar2;
    lVar3 = *(long *)(param_1 + 0x3c0);
    *(long *)(lVar3 + 0xe8) = *(long *)(lVar3 + 0xe8) + 1;
    *(long *)(lVar3 + 0xe0) = *(long *)(lVar3 + 0xe0) + (long)iVar8;
  }
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x188));
  return iVar2;
}


// ===== 0061aa20  FUN_0061aa20 =====

long * FUN_0061aa20(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 == (undefined8 *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = (long *)operator_new(0x1f8);
    if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(undefined4 *)(plVar2 + 4) = *(undefined4 *)(param_2 + 4);
    memcpy(plVar2 + 5,param_2 + 5,0x1a1);
    FUN_0061ab04(plVar2 + 0x3a,param_2 + 0x3a);
    lVar3 = FUN_0061aa20(param_1,*param_2,param_3);
    lVar4 = FUN_0061aa20(param_1,param_2[1],param_3);
    uVar1 = *(undefined1 *)(param_2 + 3);
    *plVar2 = lVar3;
    plVar2[1] = lVar4;
    *(undefined1 *)(plVar2 + 3) = uVar1;
    if (lVar3 != 0) {
      *(long **)(lVar3 + 0x10) = plVar2;
      lVar4 = plVar2[1];
    }
    if (lVar4 != 0) {
      *(long **)(lVar4 + 0x10) = plVar2;
    }
  }
  return plVar2;
}


// ===== 0061ab04  FUN_0061ab04 =====

void FUN_0061ab04(long *param_1,long param_2)

{
  ulong uVar1;
  void *__s;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar4 = *(ulong *)(param_2 + 8);
    if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    __s = operator_new(uVar4 << 3);
    *param_1 = (long)__s;
    param_1[1] = uVar4;
    if (uVar4 != 0) {
      memset(__s,0,uVar4 << 3);
    }
    puVar3 = *(undefined8 **)(param_2 + 0x10);
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_0061ac0c(&local_60,param_1,puVar3[1],puVar3 + 2);
    uVar2 = param_1[1];
    param_1[2] = (long)local_60;
    uVar4 = *(ulong *)(local_60 + 8);
    if ((uVar2 & uVar2 - 1) == 0) {
      uVar4 = uVar2 - 1 & uVar4;
    }
    else if (uVar2 <= uVar4) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar4 / uVar2;
      }
      uVar4 = uVar4 - uVar1 * uVar2;
    }
    *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
    FUN_0061acf0(param_1,*puVar3,param_1[2]);
    param_1[3] = *(long *)(param_2 + 0x18);
  }
  return;
}


// ===== 0061ac0c  FUN_0061ac0c =====

void FUN_0061ac0c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *local_28;
  
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  puVar3 = (undefined8 *)operator_new(0x48);
  *param_1 = puVar3;
  param_1[1] = param_2;
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = puVar3 + 2;
    *puVar3 = 0;
    puVar3[1] = param_3;
    if (puVar1 != (undefined8 *)0x0) {
      if (*(char *)((long)param_4 + 0x17) < '\0') {
        FUN_005478d8(puVar1,*param_4,param_4[1]);
      }
      else {
        uVar5 = *param_4;
        uVar4 = param_4[2];
        puVar3[3] = param_4[1];
        *puVar1 = uVar5;
        puVar3[4] = uVar4;
      }
      bVar2 = *(byte *)(param_4 + 6);
      local_28 = puVar3 + 5;
      *(undefined1 *)local_28 = 0;
      *(undefined1 *)(puVar3 + 8) = 0xff;
      if ((ulong)bVar2 != 0xff) {
        (*(code *)(&PTR_FUN_00d276a8)[bVar2])(&local_28,param_4 + 3);
        *(byte *)(puVar3 + 8) = bVar2;
      }
      *(undefined1 *)(param_1 + 2) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0061acf0  FUN_0061acf0 =====

/* WARNING: Removing unreachable block (ram,0x0061adc4) */
/* WARNING: Removing unreachable block (ram,0x0061adcc) */
/* WARNING: Removing unreachable block (ram,0x0061ae44) */
/* WARNING: Removing unreachable block (ram,0x0061add4) */
/* WARNING: Removing unreachable block (ram,0x0061ade0) */
/* WARNING: Removing unreachable block (ram,0x0061adf0) */
/* WARNING: Removing unreachable block (ram,0x0061adfc) */
/* WARNING: Removing unreachable block (ram,0x0061ad40) */

void FUN_0061acf0(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  
  if (param_2 != (long *)0x0) {
    uVar3 = param_1[1];
    do {
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = (long *)&DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_0061ac0c(&local_80,param_1,param_2[1],param_2 + 2);
      uVar2 = local_80[1];
      if ((uVar3 & uVar3 - 1) == 0) {
        uVar2 = uVar2 & uVar3 - 1;
      }
      else if (uVar3 <= uVar2) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar2 / uVar3;
        }
        uVar2 = uVar2 - uVar1 * uVar3;
      }
      if (uVar2 != param_4) {
        *(long **)(*param_1 + uVar2 * 8) = param_3;
        param_4 = uVar2;
      }
      *param_3 = (long)local_80;
      param_2 = (long *)*param_2;
      param_3 = local_80;
    } while (param_2 != (long *)0x0);
  }
  return;
}


// ===== 0061ae58  FUN_0061ae58 =====

void FUN_0061ae58(void)

{
  return;
}


// ===== 0061ae60  FUN_0061ae60 =====

void FUN_0061ae60(void)

{
  return;
}


// ===== 0061ae68  FUN_0061ae68 =====

void FUN_0061ae68(void)

{
  return;
}


// ===== 0061ae70  FUN_0061ae70 =====

void FUN_0061ae70(void)

{
  return;
}


// ===== 0061ae78  FUN_0061ae78 =====

void FUN_0061ae78(void)

{
  return;
}


// ===== 0061ae80  FUN_0061ae80 =====

void FUN_0061ae80(undefined8 param_1,undefined8 *param_2)

{
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    return;
  }
  operator_delete((void *)*param_2);
  return;
}


// ===== 0061aea0  FUN_0061aea0 =====

void FUN_0061aea0(long *param_1)

{
  if (*param_1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0061aed0  FUN_0061aed0 =====

void FUN_0061aed0(undefined8 *param_1,undefined1 *param_2)

{
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    *(undefined1 *)*param_1 = *param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0061af08  FUN_0061af08 =====

void FUN_0061af08(long *param_1,undefined8 *param_2)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    *(undefined8 *)*param_1 = *param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0061af40  FUN_0061af40 =====

void FUN_0061af40(long *param_1,undefined8 *param_2)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    *(undefined8 *)*param_1 = *param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0061af78  FUN_0061af78 =====

void FUN_0061af78(long *param_1,undefined8 *param_2)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    *(undefined8 *)*param_1 = *param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0061afb0  FUN_0061afb0 =====

void FUN_0061afb0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
    return;
  }
  FUN_005478d8(puVar1,*param_2,param_2[1]);
  return;
}


// ===== 0061b004  FUN_0061b004 =====

void FUN_0061b004(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_0061b004(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar1 = (undefined8 *)param_2[1];
      FUN_008476ac(param_2 + 5);
      operator_delete(param_2);
      param_2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


// ===== 0061b080  FUN_0061b080 =====

void FUN_0061b080(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_0061b080(param_1,*param_2);
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


// ===== 0061b0f4  FUN_0061b0f4 =====

long * FUN_0061b0f4(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,
                   undefined8 param_5)

{
  long lVar1;
  undefined8 local_38;
  
  if (param_3 == (long *)0x0) {
    local_38 = param_1;
    FUN_0061b080(&local_38,param_2);
    param_2 = (long *)0x0;
  }
  else {
    *(int *)(param_2 + 4) = (int)param_3[4];
    param_2[5] = param_3[5];
    *(char *)(param_2 + 3) = (char)param_3[3];
    lVar1 = *param_3;
    if (*param_2 == 0) {
      if (lVar1 != 0) {
        lVar1 = FUN_0061b1ec(param_5,lVar1,param_5);
        *param_2 = lVar1;
        *(long **)(lVar1 + 0x10) = param_2;
      }
    }
    else {
      lVar1 = FUN_0061b0f4(param_1,*param_2,lVar1,0,param_5);
      *param_2 = lVar1;
    }
    lVar1 = param_3[1];
    if (param_2[1] == 0) {
      if (lVar1 != 0) {
        lVar1 = FUN_0061b1ec(param_5,lVar1,param_5);
        param_2[1] = lVar1;
        *(long **)(lVar1 + 0x10) = param_2;
      }
    }
    else {
      lVar1 = FUN_0061b0f4(param_1,param_2[1],lVar1,0,param_5);
      param_2[1] = lVar1;
    }
  }
  return param_2;
}


// ===== 0061b1ec  FUN_0061b1ec =====

long * FUN_0061b1ec(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

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
    lVar3 = FUN_0061b1ec(param_1,uVar5,param_3);
    lVar4 = FUN_0061b1ec(param_1,param_2[1],param_3);
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


// ===== 0061b2ac  FUN_0061b2ac =====

long * FUN_0061b2ac(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,
                   undefined8 param_5)

{
  long lVar1;
  undefined8 local_38;
  
  if (param_3 == (long *)0x0) {
    local_38 = param_1;
    FUN_0061b004(&local_38,param_2);
    param_2 = (long *)0x0;
  }
  else {
    *(int *)(param_2 + 4) = (int)param_3[4];
    memcpy(param_2 + 5,param_3 + 5,0x1a1);
    FUN_0061b3b8(param_2 + 0x3a,param_3 + 0x3a);
    *(char *)(param_2 + 3) = (char)param_3[3];
    lVar1 = *param_3;
    if (*param_2 == 0) {
      if (lVar1 != 0) {
        lVar1 = FUN_0061aa20(param_5,lVar1,param_5);
        *param_2 = lVar1;
        *(long **)(lVar1 + 0x10) = param_2;
      }
    }
    else {
      lVar1 = FUN_0061b2ac(param_1,*param_2,lVar1,0,param_5);
      *param_2 = lVar1;
    }
    lVar1 = param_3[1];
    if (param_2[1] == 0) {
      if (lVar1 != 0) {
        lVar1 = FUN_0061aa20(param_5,lVar1,param_5);
        param_2[1] = lVar1;
        *(long **)(lVar1 + 0x10) = param_2;
      }
    }
    else {
      lVar1 = FUN_0061b2ac(param_1,param_2[1],lVar1,0,param_5);
      param_2[1] = lVar1;
    }
  }
  return param_2;
}


// ===== 0061b3b8  FUN_0061b3b8 =====

long * FUN_0061b3b8(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  
  if (param_1 == param_2) {
    return param_1;
  }
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (param_2[3] == 0) {
    if (param_1[3] == 0) {
      return param_1;
    }
    puVar2 = (undefined8 *)param_1[2];
    while( true ) {
      if (puVar2 == (undefined8 *)0x0) {
        lVar8 = param_1[1];
        param_1[2] = 0;
        if (lVar8 != 0) {
          lVar6 = 0;
          do {
            *(undefined8 *)(*param_1 + lVar6 * 8) = 0;
            lVar6 = lVar6 + 1;
          } while (lVar8 != lVar6);
        }
        param_1[3] = 0;
        return param_1;
      }
      if (puVar2 == (undefined8 *)0xfffffffffffffff0) break;
      pvVar3 = (void *)*puVar2;
      if ((ulong)*(byte *)(puVar2 + 8) != 0xff) {
        (*(code *)(&PTR_FUN_00d27678)[*(byte *)(puVar2 + 8)])(&local_80,puVar2 + 5);
      }
      *(undefined1 *)(puVar2 + 8) = 0xff;
      if (*(char *)((long)puVar2 + 0x27) < '\0') {
        operator_delete((void *)puVar2[2]);
      }
      operator_delete(puVar2);
      puVar2 = (undefined8 *)pvVar3;
    }
LAB_0061b6f8:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  uVar11 = param_2[1];
  if (uVar11 != param_1[1]) {
    if (uVar11 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar3 = operator_new(uVar11 << 3);
    pvVar4 = (void *)*param_1;
    *param_1 = (long)pvVar3;
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
    param_1[1] = uVar11;
  }
  if (uVar11 != 0) {
    memset((void *)*param_1,0,uVar11 << 3);
  }
  plVar10 = (long *)param_2[2];
  plVar7 = param_1 + 2;
  lVar8 = *plVar7;
  if (lVar8 == 0) {
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_0061ac0c(&local_80,param_1,plVar10[1],plVar10 + 2);
    uVar11 = param_1[1];
    param_1[2] = (long)local_80;
    uVar9 = *(ulong *)(local_80 + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar9 = uVar11 - 1 & uVar9;
    }
    else if (uVar11 <= uVar9) {
      uVar12 = 0;
      if (uVar11 != 0) {
        uVar12 = uVar9 / uVar11;
      }
      uVar9 = uVar9 - uVar12 * uVar11;
    }
    *(long **)(*param_1 + uVar9 * 8) = plVar7;
    plVar10 = (long *)*plVar10;
    plVar7 = (long *)param_1[2];
  }
  else {
    FUN_0061b710(param_1,lVar8 + 0x10,plVar10 + 2);
    uVar12 = uVar11 - 1;
    *(long *)(lVar8 + 8) = plVar10[1];
    uVar9 = *(ulong *)(param_1[2] + 8);
    if ((uVar11 & uVar12) == 0) {
      uVar9 = uVar9 & uVar12;
    }
    else if (uVar11 <= uVar9) {
      uVar5 = 0;
      if (uVar11 != 0) {
        uVar5 = uVar9 / uVar11;
      }
      uVar9 = uVar9 - uVar5 * uVar11;
    }
    *(long **)(*param_1 + uVar9 * 8) = plVar7;
    plVar7 = (long *)param_1[2];
    for (plVar10 = (long *)*plVar10; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
      lVar8 = *plVar7;
      if (lVar8 == 0) goto LAB_0061b6c4;
      FUN_0061b710(param_1,lVar8 + 0x10,plVar10 + 2);
      uVar5 = plVar10[1];
      *(ulong *)(lVar8 + 8) = uVar5;
      if ((uVar11 & uVar12) == 0) {
        uVar5 = uVar5 & uVar12;
      }
      else if (uVar11 <= uVar5) {
        uVar1 = 0;
        if (uVar11 != 0) {
          uVar1 = uVar5 / uVar11;
        }
        uVar5 = uVar5 - uVar1 * uVar11;
      }
      if (uVar5 != uVar9) {
        *(long **)(*param_1 + uVar5 * 8) = plVar7;
        uVar9 = uVar5;
      }
      plVar7 = (long *)*plVar7;
    }
    plVar10 = (long *)*plVar7;
    if (plVar10 != (undefined8 *)0x0) {
      do {
        if (plVar10 == (long *)0xfffffffffffffff0) goto LAB_0061b6f8;
        pvVar3 = (void *)*plVar10;
        if ((ulong)*(byte *)(plVar10 + 8) != 0xff) {
          (*(code *)(&PTR_FUN_00d27678)[*(byte *)(plVar10 + 8)])(&local_80,plVar10 + 5);
        }
        *(undefined1 *)(plVar10 + 8) = 0xff;
        if (*(char *)((long)plVar10 + 0x27) < '\0') {
          operator_delete((void *)plVar10[2]);
        }
        operator_delete(plVar10);
        plVar10 = (long *)pvVar3;
      } while (pvVar3 != (void *)0x0);
      *plVar7 = 0;
      goto LAB_0061b6c8;
    }
  }
LAB_0061b6c4:
  FUN_0061acf0(param_1,plVar10,plVar7,uVar9);
LAB_0061b6c8:
  param_1[3] = param_2[3];
  return param_1;
}


// ===== 0061b710  FUN_0061b710 =====

void FUN_0061b710(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *local_30;
  undefined1 uStack_21;
  
  if (param_2 != param_3) {
    bVar2 = *(byte *)((long)param_3 + 0x17);
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      uVar1 = param_3[1];
      puVar3 = (undefined8 *)*param_3;
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        puVar3 = param_3;
      }
      FUN_00547f08(param_2,puVar3,uVar1);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(param_2,*param_3,param_3[1]);
    }
    else {
      uVar5 = param_3[1];
      uVar4 = *param_3;
      param_2[2] = param_3[2];
      param_2[1] = uVar5;
      *param_2 = uVar4;
    }
  }
  bVar2 = *(byte *)(param_3 + 6);
  local_30 = param_2 + 3;
  if ((ulong)*(byte *)(param_2 + 6) == 0xff) {
    if (bVar2 == 0xff) {
      return;
    }
  }
  else if (bVar2 == 0xff) {
    (*(code *)(&PTR_FUN_00d27678)[*(byte *)(param_2 + 6)])(&uStack_21,param_2 + 3);
    *(undefined1 *)(param_2 + 6) = 0xff;
    return;
  }
  (*(code *)(&PTR_FUN_00d276d8)[bVar2])(&local_30,local_30,param_3 + 3);
  return;
}


// ===== 0061b7fc  FUN_0061b7fc =====

void FUN_0061b7fc(long *param_1)

{
  byte bVar1;
  long lVar2;
  undefined1 uStack_1;
  
  lVar2 = *param_1;
  bVar1 = *(byte *)(lVar2 + 0x18);
  if (bVar1 != 0) {
    if (bVar1 != 0xff) {
      (*(code *)(&PTR_FUN_00d27678)[bVar1])(&uStack_1,lVar2);
    }
    *(undefined1 *)(lVar2 + 0x18) = 0xff;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(undefined1 *)(lVar2 + 0x18) = 0;
  }
  return;
}


// ===== 0061b86c  FUN_0061b86c =====

void FUN_0061b86c(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 uStack_21;
  
  puVar3 = (undefined1 *)*param_1;
  bVar1 = puVar3[0x18];
  if (bVar1 != 0xff) {
    if (bVar1 == 1) {
      *param_2 = *param_3;
      return;
    }
    (*(code *)(&PTR_FUN_00d27678)[bVar1])(&uStack_21,puVar3);
  }
  puVar3[0x18] = 0xff;
  if (puVar3 != (undefined1 *)0x0) {
    uVar2 = *param_3;
    puVar3[0x18] = 1;
    *puVar3 = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0061b904  FUN_0061b904 =====

void FUN_0061b904(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 uStack_21;
  
  param_1 = (undefined8 *)*param_1;
  bVar1 = *(byte *)(param_1 + 3);
  if (bVar1 != 0xff) {
    if (bVar1 == 2) {
      *param_2 = *param_3;
      return;
    }
    (*(code *)(&PTR_FUN_00d27678)[bVar1])(&uStack_21,param_1);
  }
  *(undefined1 *)(param_1 + 3) = 0xff;
  if (param_1 != (undefined8 *)0x0) {
    uVar2 = *param_3;
    *(undefined1 *)(param_1 + 3) = 2;
    *param_1 = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0061b99c  FUN_0061b99c =====

void FUN_0061b99c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 uStack_21;
  
  param_1 = (undefined8 *)*param_1;
  bVar1 = *(byte *)(param_1 + 3);
  if (bVar1 != 0xff) {
    if (bVar1 == 3) {
      *param_2 = *param_3;
      return;
    }
    (*(code *)(&PTR_FUN_00d27678)[bVar1])(&uStack_21,param_1);
  }
  *(undefined1 *)(param_1 + 3) = 0xff;
  if (param_1 != (undefined8 *)0x0) {
    uVar2 = *param_3;
    *(undefined1 *)(param_1 + 3) = 3;
    *param_1 = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0061ba34  FUN_0061ba34 =====

void FUN_0061ba34(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 uStack_21;
  
  puVar2 = (undefined8 *)*param_1;
  bVar1 = *(byte *)(puVar2 + 3);
  if (bVar1 != 0xff) {
    if (bVar1 == 4) {
      *param_2 = *param_3;
      return;
    }
    (*(code *)(&PTR_FUN_00d27678)[bVar1])(&uStack_21,puVar2);
  }
  *(undefined1 *)(puVar2 + 3) = 0xff;
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = *param_3;
    *(undefined1 *)(puVar2 + 3) = 4;
    *puVar2 = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0061bacc  FUN_0061bacc =====

void FUN_0061bacc(undefined8 *param_1)

{
  FUN_0061bad8(*param_1);
  return;
}


// ===== 0061bad8  FUN_0061bad8 =====

void FUN_0061bad8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined1 uStack_1;
  
  bVar2 = *(byte *)(param_1 + 3);
  if (bVar2 == 5) {
    if (param_2 != param_3) {
      bVar2 = *(byte *)((long)param_3 + 0x17);
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        uVar1 = param_3[1];
        puVar3 = (undefined8 *)*param_3;
        if (-1 < (char)bVar2) {
          uVar1 = (ulong)bVar2;
          puVar3 = param_3;
        }
        FUN_00547f08(param_2,puVar3,uVar1);
        return;
      }
      if ((char)bVar2 < '\0') {
        FUN_00547fc0(param_2,*param_3,param_3[1]);
        return;
      }
      uVar5 = param_3[1];
      uVar4 = *param_3;
      param_2[2] = param_3[2];
      param_2[1] = uVar5;
      *param_2 = uVar4;
    }
  }
  else {
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      FUN_005478d8(&local_40,*param_3,param_3[1]);
      bVar2 = *(byte *)(param_1 + 3);
    }
    else {
      uStack_38 = param_3[1];
      local_40 = *param_3;
      local_30 = param_3[2];
    }
    if (bVar2 != 0xff) {
      (*(code *)(&PTR_FUN_00d27678)[bVar2])(&uStack_1,param_1);
    }
    *(undefined1 *)(param_1 + 3) = 0xff;
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(undefined1 *)(param_1 + 3) = 5;
    param_1[1] = uStack_38;
    *param_1 = local_40;
    param_1[2] = local_30;
  }
  return;
}


// ===== 0061bc18  FUN_0061bc18 =====

void FUN_0061bc18(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_0061bc18(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar1 = (undefined8 *)param_2[1];
      FUN_0061bc9c(param_2 + 0xd);
      FUN_00992338(param_2 + 6);
      operator_delete(param_2);
      param_2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


// ===== 0061bc9c  FUN_0061bc9c =====

void FUN_0061bc9c(undefined8 *param_1)

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
      if (lVar4 == 0) goto LAB_0061bdfc;
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
    if (uVar7 != 2) goto LAB_0061bd74;
    uVar1 = 0x100;
  }
  param_1[4] = uVar1;
LAB_0061bd74:
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
LAB_0061bdfc:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0061be4c  FUN_0061be4c =====

void FUN_0061be4c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_0061be4c(param_1,*param_2);
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


// ===== 0061bec0  FUN_0061bec0 =====

void FUN_0061bec0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_0061bec0(param_1,*param_2);
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


// ===== 0061bf34  FUN_0061bf34 =====

void FUN_0061bf34(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_0061bf34(param_1,*param_2);
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


// ===== 0061bfa8  FUN_0061bfa8 =====

undefined1  [16] FUN_0061bfa8(undefined8 *param_1,uint *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  plVar9 = (long *)*param_1;
  plVar6 = plVar9 + 1;
  plVar10 = plVar6;
  if ((long *)*plVar6 != (long *)0x0) {
    uVar1 = *param_2;
    plVar4 = (long *)*plVar6;
    do {
      while( true ) {
        plVar5 = plVar4;
        uVar2 = *(uint *)(plVar5 + 4);
        plVar6 = plVar5;
        if (uVar2 - uVar1 == -0x80000000) break;
        if ((uVar2 == uVar1) || ((int)(uVar2 - uVar1) < 0)) goto LAB_0061c018;
LAB_0061bfe0:
        plVar4 = (long *)*plVar5;
        plVar10 = plVar5;
        if ((long *)*plVar5 == (long *)0x0) goto LAB_0061c050;
      }
      if (uVar1 < uVar2) goto LAB_0061bfe0;
LAB_0061c018:
      if (uVar1 - uVar2 != -0x80000000) {
        if ((uVar1 != uVar2) && (-1 < (int)(uVar1 - uVar2))) goto LAB_0061c03c;
LAB_0061c0c4:
        uVar7 = 0;
        goto LAB_0061c0cc;
      }
      if (uVar1 <= uVar2) goto LAB_0061c0c4;
LAB_0061c03c:
      plVar4 = (long *)plVar5[1];
    } while ((long *)plVar5[1] != (long *)0x0);
    plVar10 = plVar5 + 1;
  }
LAB_0061c050:
  plVar5 = (long *)operator_new(0x40);
  if ((plVar5 == (long *)0x0) || (*plVar5 = 0, plVar5 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar3 = *param_3;
  lVar12 = *(long *)(param_3 + 4);
  lVar11 = *(long *)(param_3 + 2);
  lVar8 = *(long *)(param_3 + 6);
  *plVar5 = 0;
  plVar5[1] = 0;
  *(undefined4 *)(plVar5 + 4) = uVar3;
  plVar5[6] = lVar12;
  plVar5[5] = lVar11;
  plVar5[7] = lVar8;
  plVar5[2] = (long)plVar6;
  *plVar10 = (long)plVar5;
  plVar6 = plVar5;
  if (*(long *)*plVar9 != 0) {
    *plVar9 = *(long *)*plVar9;
    plVar6 = (long *)*plVar10;
  }
  FUN_005d5b94(plVar9[1],plVar6);
  uVar7 = 1;
  plVar9[2] = plVar9[2] + 1;
LAB_0061c0cc:
  auVar13._8_8_ = uVar7;
  auVar13._0_8_ = plVar5;
  return auVar13;
}


// ===== 0061c0fc  FUN_0061c0fc =====

undefined1  [16]
FUN_0061c0fc(undefined8 *param_1,uint *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  plVar6 = (long *)*param_1;
  plVar4 = plVar6 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, *param_2 < *(uint *)(plVar3 + 4)) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_0061c164;
      }
      if (*param_2 == *(uint *)(plVar3 + 4)) {
        uVar5 = 0;
        goto LAB_0061c200;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_0061c164:
  plVar3 = (long *)operator_new(0xa8);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar1 = *(undefined4 *)*param_4;
  plVar3[5] = -0x8000000000000000;
  *(undefined4 *)(plVar3 + 4) = uVar1;
  FUN_00992290(plVar3 + 6,100,10);
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = (long)plVar4;
  plVar3[0x14] = 0;
  plVar3[0x13] = 0;
  plVar3[0x12] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0xd] = 0;
  *plVar7 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*plVar6 != 0) {
    *plVar6 = *(long *)*plVar6;
    plVar4 = (long *)*plVar7;
  }
  FUN_005d5b94(plVar6[1],plVar4);
  uVar5 = 1;
  plVar6[2] = plVar6[2] + 1;
LAB_0061c200:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 0061c230  FUN_0061c230 =====

long FUN_0061c230(long *param_1,undefined8 *param_2)

{
  size_t __n;
  size_t sVar1;
  undefined8 *__s1;
  byte bVar2;
  ulong uVar3;
  undefined8 *__s2;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar8 = param_1[1];
  if ((uVar8 != 0) && (param_1[3] != 0)) {
    __n = param_2[1];
    __s2 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      __n = (ulong)*(byte *)((long)param_2 + 0x17);
      __s2 = param_2;
    }
    uVar5 = FUN_0061e264(__s2,__n);
    uVar9 = uVar8 - 1;
    if ((uVar8 & uVar9) == 0) {
      uVar10 = uVar5 & uVar9;
    }
    else {
      uVar10 = uVar5;
      if (uVar8 <= uVar5) {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = uVar5 / uVar8;
        }
        uVar10 = uVar5 - uVar10 * uVar8;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar10 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar5) {
          bVar2 = *(byte *)((long)plVar6 + 0x27);
          sVar1 = plVar6[3];
          if (-1 < (char)bVar2) {
            sVar1 = (ulong)bVar2;
          }
          if (sVar1 == __n) {
            __s1 = (undefined8 *)plVar6[2];
            if (-1 < (char)bVar2) {
              __s1 = plVar6 + 2;
            }
            iVar4 = memcmp(__s1,__s2,__n);
            if (iVar4 == 0) {
              return (long)plVar6;
            }
          }
        }
        else {
          if ((uVar8 & uVar9) == 0) {
            uVar7 = uVar7 & uVar9;
          }
          else if (uVar8 <= uVar7) {
            uVar3 = 0;
            if (uVar8 != 0) {
              uVar3 = uVar7 / uVar8;
            }
            uVar7 = uVar7 - uVar3 * uVar8;
          }
          if (uVar7 != uVar10) {
            return 0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return 0;
}


// ===== 0061c368  FUN_0061c368 =====

undefined8 FUN_0061c368(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  void *local_40 [2];
  char local_30;
  undefined1 uStack_21;
  
  if (param_2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__hash_table:1855: libc++ Hardening assertion __p != end() failed: unordered container::erase(iterator) called with a non-dereferenceable iterator\n"
              );
  }
  uVar2 = *param_2;
  FUN_0061c43c(local_40);
  pvVar1 = local_40[0];
  local_40[0] = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    if (local_30 == '\x01') {
      if (pvVar1 == (void *)0xfffffffffffffff0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((ulong)*(byte *)((long)pvVar1 + 0x40) != 0xff) {
        (*(code *)(&PTR_FUN_00d27678)[*(byte *)((long)pvVar1 + 0x40)])
                  (&uStack_21,(long)pvVar1 + 0x28);
      }
      *(undefined1 *)((long)pvVar1 + 0x40) = 0xff;
      if (*(char *)((long)pvVar1 + 0x27) < '\0') {
        operator_delete(*(void **)((long)pvVar1 + 0x10));
      }
    }
    operator_delete(pvVar1);
  }
  return uVar2;
}


// ===== 0061c43c  FUN_0061c43c =====

void FUN_0061c43c(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar5 = uVar4 - 1;
  if ((uVar4 & uVar5) == 0) {
    uVar3 = uVar5 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
  if (plVar7 != param_2 + 2) {
    uVar8 = plVar7[1];
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_0061c4f4;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_0061c4f4;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_0061c4f4:
  lVar6 = *param_3;
  if (lVar6 != 0) {
    uVar8 = *(ulong *)(lVar6 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar5 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar7;
      lVar6 = *param_3;
    }
  }
  *plVar7 = lVar6;
  *param_3 = 0;
  lVar6 = param_2[3];
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  param_2[3] = lVar6 + -1;
  return;
}


// ===== 0061c570  FUN_0061c570 =====

undefined1  [16] FUN_0061c570(undefined8 *param_1,undefined8 *param_2,long *param_3,long param_4)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  undefined8 *__s2;
  int iVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined1 auVar19 [16];
  long *local_68;
  
  plVar13 = (long *)*param_1;
  __n = param_2[1];
  __s2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    __n = (ulong)*(byte *)((long)param_2 + 0x17);
    __s2 = param_2;
  }
  puVar4 = (undefined1 *)FUN_0061e264(__s2,__n);
  puVar15 = (undefined1 *)plVar13[1];
  if (puVar15 == (undefined1 *)0x0) {
    puVar16 = &DAT_aaaaaaaaaaaaaaaa;
  }
  else {
    puVar17 = puVar15 + -1;
    if (((ulong)puVar15 & (ulong)puVar17) == 0) {
      puVar16 = (undefined1 *)((ulong)puVar17 & (ulong)puVar4);
    }
    else {
      puVar16 = puVar4;
      if (puVar15 <= puVar4) {
        uVar10 = 0;
        if (puVar15 != (undefined1 *)0x0) {
          uVar10 = (ulong)puVar4 / (ulong)puVar15;
        }
        puVar16 = puVar4 + -(uVar10 * (long)puVar15);
      }
    }
    puVar7 = *(undefined8 **)(*plVar13 + (long)puVar16 * 8);
    if (puVar7 != (undefined8 *)0x0) {
      for (plVar14 = (long *)*puVar7; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
        puVar9 = (undefined1 *)plVar14[1];
        if (puVar9 == puVar4) {
          bVar2 = *(byte *)((long)plVar14 + 0x27);
          sVar1 = plVar14[3];
          if (-1 < (char)bVar2) {
            sVar1 = (ulong)bVar2;
          }
          if (sVar1 == __n) {
            plVar11 = (long *)plVar14[2];
            if (-1 < (char)bVar2) {
              plVar11 = plVar14 + 2;
            }
            iVar3 = memcmp(plVar11,__s2,__n);
            if (iVar3 == 0) {
              uVar6 = 0;
              goto LAB_0061c8a8;
            }
          }
        }
        else {
          if (((ulong)puVar15 & (ulong)puVar17) == 0) {
            puVar9 = (undefined1 *)((ulong)puVar9 & (ulong)puVar17);
          }
          else if (puVar15 <= puVar9) {
            uVar10 = 0;
            if (puVar15 != (undefined1 *)0x0) {
              uVar10 = (ulong)puVar9 / (ulong)puVar15;
            }
            puVar9 = puVar9 + -(uVar10 * (long)puVar15);
          }
          if (puVar9 != puVar16) break;
        }
      }
    }
  }
  plVar14 = (long *)operator_new(0x48);
  if (plVar14 == (long *)0x0) {
LAB_0061c8d8:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  plVar11 = plVar14 + 2;
  *plVar14 = 0;
  plVar14[1] = (long)puVar4;
  if (plVar11 == (long *)0x0) goto LAB_0061c8d8;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    FUN_005478d8(plVar11,*param_3,param_3[1]);
  }
  else {
    lVar18 = *param_3;
    lVar8 = param_3[2];
    plVar14[3] = param_3[1];
    *plVar11 = lVar18;
    plVar14[4] = lVar8;
  }
  bVar2 = *(byte *)(param_4 + 0x18);
  *(undefined1 *)(plVar14 + 5) = 0;
  *(undefined1 *)(plVar14 + 8) = 0xff;
  if ((ulong)bVar2 != 0xff) {
    local_68 = plVar14 + 5;
    (*(code *)(&PTR_FUN_00d276a8)[bVar2])(&local_68,param_4);
    *(byte *)(plVar14 + 8) = bVar2;
  }
  if ((float)(plVar13[3] + 1) <= *(float *)(plVar13 + 4) * (float)puVar15) goto LAB_0061c830;
  if (puVar15 < (undefined1 *)0x3) {
    uVar10 = 1;
  }
  else {
    uVar10 = (ulong)(((ulong)puVar15 & (ulong)(puVar15 + -1)) != 0);
  }
  uVar10 = uVar10 | (long)puVar15 << 1;
  uVar12 = (ulong)((float)(plVar13[3] + 1) / *(float *)(plVar13 + 4));
  if (uVar10 <= uVar12) {
    uVar10 = uVar12;
  }
  if (uVar10 - 1 == 0) {
    uVar10 = 2;
  }
  else if ((uVar10 & uVar10 - 1) != 0) {
    uVar10 = FUN_005204f8(uVar10);
  }
  uVar12 = plVar13[1];
  if (uVar12 < uVar10) {
LAB_0061c790:
    FUN_0061c8ec(plVar13,uVar10);
  }
  else if (uVar10 < uVar12) {
    uVar5 = (ulong)((float)(ulong)plVar13[3] / *(float *)(plVar13 + 4));
    if ((uVar12 < 3) || ((uVar12 & uVar12 - 1) != 0)) {
      uVar5 = FUN_005204f8();
    }
    else if (1 < uVar5) {
      uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
    }
    if (uVar10 <= uVar5) {
      uVar10 = uVar5;
    }
    if (uVar10 < uVar12) goto LAB_0061c790;
  }
  puVar15 = (undefined1 *)plVar13[1];
  if (((ulong)puVar15 & (ulong)(puVar15 + -1)) == 0) {
    puVar16 = (undefined1 *)((ulong)(puVar15 + -1) & (ulong)puVar4);
  }
  else {
    puVar16 = puVar4;
    if (puVar15 <= puVar4) {
      uVar10 = 0;
      if (puVar15 != (undefined1 *)0x0) {
        uVar10 = (ulong)puVar4 / (ulong)puVar15;
      }
      puVar16 = puVar4 + -(uVar10 * (long)puVar15);
    }
  }
LAB_0061c830:
  lVar8 = *plVar13;
  plVar11 = *(long **)(lVar8 + (long)puVar16 * 8);
  if (plVar11 == (long *)0x0) {
    plVar11 = plVar13 + 2;
    *plVar14 = *plVar11;
    *plVar11 = (long)plVar14;
    *(long **)(lVar8 + (long)puVar16 * 8) = plVar11;
    if (*plVar14 != 0) {
      puVar4 = *(undefined1 **)(*plVar14 + 8);
      if (((ulong)puVar15 & (ulong)(puVar15 + -1)) == 0) {
        puVar4 = (undefined1 *)((ulong)puVar4 & (ulong)(puVar15 + -1));
      }
      else if (puVar15 <= puVar4) {
        uVar10 = 0;
        if (puVar15 != (undefined1 *)0x0) {
          uVar10 = (ulong)puVar4 / (ulong)puVar15;
        }
        puVar4 = puVar4 + -(uVar10 * (long)puVar15);
      }
      *(long **)(*plVar13 + (long)puVar4 * 8) = plVar14;
    }
  }
  else {
    *plVar14 = *plVar11;
    *plVar11 = (long)plVar14;
  }
  uVar6 = 1;
  plVar13[3] = plVar13[3] + 1;
LAB_0061c8a8:
  auVar19._8_8_ = uVar6;
  auVar19._0_8_ = plVar14;
  return auVar19;
}


// ===== 0061c8ec  FUN_0061c8ec =====

void FUN_0061c8ec(long *param_1,ulong param_2)

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


// ===== 0061ca40  FUN_0061ca40 =====

undefined1  [16]
FUN_0061ca40(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  int *piVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  piVar6 = (int *)*param_5;
  plVar4 = param_2 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    iVar1 = *piVar6;
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, iVar1 < (int)plVar3[4]) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_0061caa8;
      }
      if (iVar1 == (int)plVar3[4]) {
        uVar5 = 0;
        goto LAB_0061cb2c;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_0061caa8:
  plVar3 = (long *)operator_new(0x78);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  iVar1 = *piVar6;
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = (long)plVar4;
  *(int *)(plVar3 + 4) = iVar1;
  plVar3[6] = 0;
  plVar3[5] = 0;
  plVar3[8] = 0;
  plVar3[7] = 0;
  plVar3[10] = 0;
  plVar3[9] = 0;
  plVar3[0xc] = 0;
  plVar3[0xb] = 0;
  plVar3[0xe] = 0;
  plVar3[0xd] = 0;
  *plVar7 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar4 = (long *)*plVar7;
  }
  FUN_005d5b94(param_2[1],plVar4);
  uVar5 = 1;
  param_2[2] = param_2[2] + 1;
LAB_0061cb2c:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 0061cb5c  FUN_0061cb5c =====

undefined1  [16]
FUN_0061cb5c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  int *piVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  piVar6 = (int *)*param_5;
  plVar4 = param_2 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    iVar1 = *piVar6;
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, iVar1 < (int)plVar3[4]) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_0061cbc4;
      }
      if (iVar1 == (int)plVar3[4]) {
        uVar5 = 0;
        goto LAB_0061cc40;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_0061cbc4:
  plVar3 = (long *)operator_new(0x58);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  iVar1 = *piVar6;
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = (long)plVar4;
  *(int *)(plVar3 + 4) = iVar1;
  plVar3[6] = 0;
  plVar3[5] = 0;
  plVar3[8] = 0;
  plVar3[7] = 0;
  plVar3[10] = 0;
  plVar3[9] = 0;
  *plVar7 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar4 = (long *)*plVar7;
  }
  FUN_005d5b94(param_2[1],plVar4);
  uVar5 = 1;
  param_2[2] = param_2[2] + 1;
LAB_0061cc40:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 0061cc70  FUN_0061cc70 =====

void FUN_0061cc70(long *param_1)

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
      FUN_0061d0e0(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_0061d604(&local_50,lVar5);
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
      FUN_0061d0e0(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0x1000);
    FUN_0061d368(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x100;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_0061ce58(param_1,&local_50);
  return;
}


// ===== 0061ce58  FUN_0061ce58 =====

void FUN_0061ce58(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_0061d0c8;
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
LAB_0061d0c8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0061d0e0  FUN_0061d0e0 =====

void FUN_0061d0e0(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_0061d350;
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
LAB_0061d350:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0061d368  FUN_0061d368 =====

void FUN_0061d368(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_0061d5ec;
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
LAB_0061d5ec:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0061d604  FUN_0061d604 =====

void FUN_0061d604(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_0061d888;
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
LAB_0061d888:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0061d8a0  FUN_0061d8a0 =====

void FUN_0061d8a0(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  uVar2 = uVar1 / 1000;
  if (499 < uVar1 % 1000) {
    uVar2 = uVar2 + 1;
  }
  param_1[4] = 0;
  if ((uVar1 & 0x8000000000000000) != 0) {
    uVar2 = -(-uVar1 / 1000) - (ulong)(500 < -uVar1 % 1000);
  }
  param_1[3] = param_1 + 4;
  param_1[2] = uVar2;
  param_1[5] = 0;
  FUN_0061dc3c(param_1 + 3,&DAT_001fcd70,&DAT_001fcdb0);
  return;
}


// ===== 0061d958  FUN_0061d958 =====

undefined4 FUN_0061d958(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


// ===== 0061d964  FUN_0061d964 =====

void FUN_0061d964(undefined8 *param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined1 uStack_41;
  int *local_28;
  
  if (param_2 != *(int *)(param_1 + 1)) {
    uVar1 = (**(code **)(*(long *)*param_1 + 0x10))();
    uVar3 = uVar1 / 1000;
    if (499 < uVar1 % 1000) {
      uVar3 = uVar3 + 1;
    }
    lVar4 = param_1[2];
    if ((uVar1 & 0x8000000000000000) != 0) {
      uVar3 = -(-uVar1 / 1000) - (ulong)(500 < -uVar1 % 1000);
    }
    local_28 = (int *)(param_1 + 1);
    lVar2 = FUN_0061de8c(0,param_1 + 3,param_1 + 3,&DAT_001f94c3,&local_28,&uStack_41);
    *(ulong *)(lVar2 + 0x28) = (uVar3 - lVar4) + *(long *)(lVar2 + 0x28);
    *(int *)(param_1 + 1) = param_2;
    param_1[2] = uVar3;
  }
  return;
}


// ===== 0061da5c  FUN_0061da5c =====

void FUN_0061da5c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  lVar2 = param_2[5];
  puVar8 = param_1 + 1;
  *puVar8 = 0;
  *param_1 = puVar8;
  param_1[2] = 0;
  puVar9 = puVar8;
  if (lVar2 != 0) {
    lVar2 = FUN_0061b1ec(param_1,param_2[4],param_1);
    param_1[1] = lVar2;
    *(undefined8 **)(lVar2 + 0x10) = puVar8;
    puVar3 = (undefined8 *)param_1[1];
    puVar6 = puVar3;
    do {
      puVar5 = puVar6;
      puVar6 = (undefined8 *)*puVar5;
    } while (puVar6 != (undefined8 *)0x0);
    uVar7 = param_2[5];
    *param_1 = puVar5;
    param_1[2] = uVar7;
    if (puVar3 != (undefined8 *)0x0) {
      do {
        while (*(int *)(puVar3 + 4) <= *(int *)(param_2 + 1)) {
          puVar9 = puVar3;
          if ((*(int *)(param_2 + 1) <= *(int *)(puVar3 + 4)) ||
             (puVar3 = (undefined8 *)puVar3[1], puVar9 = puVar8, puVar3 == (undefined8 *)0x0))
          goto LAB_0061db00;
        }
        puVar3 = (undefined8 *)*puVar3;
        puVar9 = puVar8;
      } while (puVar3 != (undefined8 *)0x0);
    }
  }
LAB_0061db00:
  uVar1 = (**(code **)(*(long *)*param_2 + 0x10))();
  uVar4 = uVar1 / 1000;
  if (499 < uVar1 % 1000) {
    uVar4 = uVar4 + 1;
  }
  if ((uVar1 & 0x8000000000000000) != 0) {
    uVar4 = -(-uVar1 / 1000) - (ulong)(500 < -uVar1 % 1000);
  }
  puVar9[5] = (uVar4 - param_2[2]) + puVar9[5];
  return;
}


// ===== 0061db90  FUN_0061db90 =====

void FUN_0061db90(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1 + 0x18 == param_2) {
    return;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    lVar2 = FUN_0061b1ec(param_1 + 0x18,*(undefined8 *)(param_2 + 8),param_1 + 0x18);
    plVar3 = (long *)(param_1 + 0x20);
    *plVar3 = lVar2;
    if (lVar2 == 0) goto LAB_0061dc20;
    *(long **)(lVar2 + 0x10) = plVar3;
    plVar1 = (long *)*plVar3;
  }
  else {
    plVar1 = (long *)FUN_0061b0f4(param_1 + 0x18,*(undefined8 *)(param_1 + 0x20),
                                  *(undefined8 *)(param_2 + 8),0,param_1 + 0x18);
    *(long **)(param_1 + 0x20) = plVar1;
  }
  if (plVar1 == (long *)0x0) {
    plVar3 = (long *)(param_1 + 0x20);
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
LAB_0061dc20:
  *(long **)(param_1 + 0x18) = plVar3;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x10);
  return;
}


// ===== 0061dc3c  FUN_0061dc3c =====

void FUN_0061dc3c(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_48;
  long *local_40;
  long *plStack_38;
  
  if (param_2 != param_3) {
    lVar2 = param_1[1];
    if (lVar2 == 0) {
      puVar1 = (undefined8 *)operator_new(0x30);
      if ((puVar1 == (undefined8 *)0x0) || (puVar1 + 4 == (undefined8 *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar4 = param_2[1];
      uVar3 = *param_2;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = param_1 + 1;
      puVar1[5] = uVar4;
      puVar1[4] = uVar3;
      param_1[1] = (long)puVar1;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
      }
      FUN_005d5b94(puVar1,puVar1);
      param_2 = param_2 + 2;
      param_1[2] = param_1[2] + 1;
      lVar2 = param_1[1];
    }
    do {
      local_48 = lVar2;
      lVar2 = *(long *)(local_48 + 8);
    } while (*(long *)(local_48 + 8) != 0);
    if (param_2 != param_3) {
      do {
        local_40 = param_1;
        plStack_38 = &local_48;
        FUN_0061dd2c(&local_40,param_2,param_2);
        param_2 = param_2 + 2;
      } while (param_2 != param_3);
    }
  }
  return;
}


// ===== 0061dd2c  FUN_0061dd2c =====

void FUN_0061dd2c(long *param_1,int *param_2,undefined8 *param_3)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  plVar1 = (long *)*param_1;
  lVar8 = *(long *)param_1[1];
  iVar2 = *param_2;
  if (*(int *)(lVar8 + 0x20) < iVar2) {
    puVar3 = (undefined8 *)operator_new(0x30);
    if ((puVar3 == (undefined8 *)0x0) || (puVar3 + 4 == (undefined8 *)0x0)) {
LAB_0061de78:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar10 = param_3[1];
    uVar9 = *param_3;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = lVar8;
    puVar3[5] = uVar10;
    puVar3[4] = uVar9;
    *(undefined8 **)(lVar8 + 8) = puVar3;
    puVar4 = puVar3;
    if (*(long *)*plVar1 != 0) {
      *plVar1 = *(long *)*plVar1;
      puVar4 = *(undefined8 **)(lVar8 + 8);
    }
    FUN_005d5b94(plVar1[1],puVar4);
    plVar1[2] = plVar1[2] + 1;
    *(undefined8 **)param_1[1] = puVar3;
  }
  else {
    plVar6 = plVar1 + 1;
    plVar5 = (long *)*plVar6;
    while (plVar7 = plVar6, plVar5 != (long *)0x0) {
      while (plVar6 = plVar5, (int)plVar6[4] <= iVar2) {
        if (iVar2 <= (int)plVar6[4]) {
          return;
        }
        plVar5 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) {
          plVar7 = plVar6 + 1;
          goto LAB_0061de0c;
        }
      }
      plVar5 = (long *)*plVar6;
    }
LAB_0061de0c:
    puVar3 = (undefined8 *)operator_new(0x30);
    if ((puVar3 == (undefined8 *)0x0) || (puVar3 + 4 == (undefined8 *)0x0)) goto LAB_0061de78;
    uVar10 = param_3[1];
    uVar9 = *param_3;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = plVar6;
    puVar3[5] = uVar10;
    puVar3[4] = uVar9;
    *plVar7 = (long)puVar3;
    if (*(long *)*plVar1 != 0) {
      *plVar1 = *(long *)*plVar1;
      puVar3 = (undefined8 *)*plVar7;
    }
    FUN_005d5b94(plVar1[1],puVar3);
    plVar1[2] = plVar1[2] + 1;
  }
  return;
}


// ===== 0061de8c  FUN_0061de8c =====

undefined1  [16]
FUN_0061de8c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  int *piVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  piVar6 = (int *)*param_5;
  plVar4 = param_2 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    iVar1 = *piVar6;
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, iVar1 < (int)plVar3[4]) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_0061def8;
      }
      if (iVar1 <= (int)plVar3[4]) {
        uVar5 = 0;
        goto LAB_0061df68;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_0061def8:
  plVar3 = (long *)operator_new(0x30);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  iVar1 = *piVar6;
  plVar3[5] = 0;
  *plVar3 = 0;
  plVar3[1] = 0;
  *(int *)(plVar3 + 4) = iVar1;
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
LAB_0061df68:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 0061df98  FUN_0061df98 =====

void FUN_0061df98(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = param_1 + 2;
  return;
}


// ===== 0061dfb0  FUN_0061dfb0 =====

void FUN_0061dfb0(long param_1)

{
  long local_18;
  
  local_18 = param_1 + 8;
  FUN_0061e0f4(&local_18,*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 0061dfe4  FUN_0061dfe4 =====

void FUN_0061dfe4(int *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  uint local_30;
  undefined1 uStack_29;
  undefined1 *local_28;
  
  local_28 = (undefined1 *)&local_30;
  for (piVar3 = *(int **)(param_1 + 4); piVar3 != (int *)0x0; piVar3 = *(int **)piVar3) {
    while ((uint)piVar3[7] <= param_2) {
      if (param_2 == piVar3[7]) {
        if (((piVar3 != param_1 + 4) && (-1 < param_4 - piVar3[8])) &&
           (iVar1 = piVar3[9], -1 < param_3 - iVar1)) {
          *param_1 = *param_1 + (param_4 - piVar3[8]);
          param_1[1] = param_1[1] + (param_3 - iVar1);
        }
        goto LAB_0061e068;
      }
      piVar3 = *(int **)(piVar3 + 2);
      if (piVar3 == (int *)0x0) goto LAB_0061e068;
    }
  }
LAB_0061e068:
  local_30 = param_2;
  lVar2 = FUN_0061e168(0,param_1 + 2,param_1 + 2,&DAT_001f94c3,&local_28,&uStack_29);
  *(int *)(lVar2 + 0x20) = param_4;
  *(int *)(lVar2 + 0x24) = param_3;
  return;
}


// ===== 0061e0a8  FUN_0061e0a8 =====

int FUN_0061e0a8(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = (param_1[1] * 0xff + (uVar1 >> 1)) / uVar1;
    }
    return (int)(uVar2 * 100) / 0xff;
  }
  return -1;
}


// ===== 0061e0f4  FUN_0061e0f4 =====

void FUN_0061e0f4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_0061e0f4(param_1,*param_2);
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


// ===== 0061e168  FUN_0061e168 =====

undefined1  [16]
FUN_0061e168(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
      while (plVar3 = plVar2, plVar4 = plVar3, uVar1 < *(uint *)((long)plVar3 + 0x1c)) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_0061e1d0;
      }
      if (uVar1 == *(uint *)((long)plVar3 + 0x1c)) {
        uVar5 = 0;
        goto LAB_0061e234;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_0061e1d0:
  plVar3 = (long *)operator_new(0x28);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar1 = *puVar6;
  plVar3[4] = 0;
  *plVar3 = 0;
  plVar3[1] = 0;
  *(uint *)((long)plVar3 + 0x1c) = uVar1;
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
LAB_0061e234:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 0061e264  FUN_0061e264 =====

void FUN_0061e264(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_0061e294(&uStack_11,param_1,param_2);
  return;
}


// ===== 0061e294  FUN_0061e294 =====

ulong FUN_0061e294(undefined8 param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  long lVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  
  if (param_3 < 0x21) {
    if (param_3 < 0x11) {
      if (8 < param_3) {
        uVar14 = *(ulong *)((long)param_2 + (param_3 - 8));
        uVar15 = uVar14 + param_3;
        uVar15 = uVar15 >> (param_3 & 0x3f) | uVar15 << 0x40 - (param_3 & 0x3f);
        uVar16 = (uVar15 ^ *param_2) * -0x622015f714c7d297;
        uVar15 = (uVar15 ^ uVar16 >> 0x2f ^ uVar16) * -0x622015f714c7d297;
        return (uVar15 ^ uVar15 >> 0x2f) * -0x622015f714c7d297 ^ uVar14;
      }
      if (param_3 < 4) {
        if (param_3 == 0) {
          return 0x9ae16a3b2f90404f;
        }
        uVar15 = (param_3 | (ulong)*(byte *)((long)param_2 + (param_3 - 1)) << 2) *
                 -0x36b62838af619aa9 ^
                 (ulong)CONCAT11(*(undefined1 *)((long)param_2 + (param_3 >> 1)),(char)*param_2) *
                 -0x651e95c4d06fbfb1;
        return (uVar15 ^ uVar15 >> 0x2f) * -0x651e95c4d06fbfb1;
      }
      uVar14 = (ulong)*(uint *)((long)param_2 + (param_3 - 4));
      uVar15 = (param_3 + (ulong)(uint)*param_2 * 8 ^ uVar14) * -0x622015f714c7d297;
      uVar15 = uVar14 ^ uVar15 >> 0x2f ^ uVar15;
    }
    else {
      lVar20 = *(long *)((long)param_2 + (param_3 - 8));
      uVar15 = lVar20 * -0x651e95c4d06fbfb1;
      uVar16 = *param_2 * -0x4b6d499041670d8d - param_2[1];
      uVar14 = param_2[1] ^ 0xc949d7c7509e6557;
      uVar14 = *param_2 * -0x4b6d499041670d8d + param_3 + (uVar14 >> 0x14 | uVar14 << 0x2c) +
               lVar20 * 0x651e95c4d06fbfb1;
      uVar15 = ((uVar15 >> 0x1e | uVar15 << 0x22) + (uVar16 >> 0x2b | uVar16 * 0x200000) +
                *(long *)((long)param_2 + (param_3 - 0x10)) * -0x3c5a37a36834ced9 ^ uVar14) *
               -0x622015f714c7d297;
      uVar15 = uVar14 ^ uVar15 >> 0x2f ^ uVar15;
    }
    lVar17 = -0x622015f714c7d297;
    uVar15 = uVar15 * -0x622015f714c7d297;
  }
  else {
    if (0x40 < param_3) {
      lVar17 = *(long *)((long)param_2 + (param_3 - 0x38));
      lVar10 = *(long *)((long)param_2 + (param_3 - 0x30));
      uVar16 = *(ulong *)((long)param_2 + (param_3 - 0x18));
      lVar5 = *(long *)((long)param_2 + (param_3 - 0x10));
      lVar11 = *(long *)((long)param_2 + (param_3 - 8));
      lVar13 = *(long *)((long)param_2 + (param_3 - 0x28));
      uVar15 = (uVar16 ^ lVar10 + param_3) * -0x622015f714c7d297;
      lVar20 = *(long *)((long)param_2 + (param_3 - 0x40)) + param_3;
      puVar12 = param_2 + 4;
      uVar15 = (uVar16 ^ uVar15 >> 0x2f ^ uVar15) * -0x622015f714c7d297;
      uVar23 = (uVar15 ^ uVar15 >> 0x2f) * -0x622015f714c7d297;
      uVar15 = lVar17 + lVar5;
      lVar4 = uVar15 + *(long *)((long)param_2 + (param_3 - 0x20)) + -0x4b6d499041670d8d;
      lVar18 = *param_2 + lVar13 * -0x4b6d499041670d8d;
      uVar14 = lVar20 + lVar17 + lVar10;
      uVar16 = lVar4 + uVar16 + lVar5;
      uVar21 = uVar14 + lVar13;
      uVar3 = lVar4 + lVar13 + lVar11;
      uVar22 = lVar13 + lVar20 + uVar23;
      uVar14 = (uVar14 >> 0x2c | uVar14 * 0x100000) + lVar20 + (uVar22 >> 0x15 | uVar22 << 0x2b);
      uVar22 = uVar16 + lVar11;
      uVar16 = (uVar16 >> 0x2c | uVar16 * 0x100000) + lVar4 + (uVar3 >> 0x15 | uVar3 << 0x2b);
      lVar20 = -(param_3 - 1 & 0xffffffffffffffc0);
      do {
        puVar6 = puVar12 + -3;
        lVar17 = puVar12[-4] + uVar14 * -0x4b6d499041670d8d;
        puVar1 = puVar12 + 2;
        puVar7 = puVar12 + 3;
        uVar3 = lVar18 + uVar21 + uVar15 + *puVar6;
        lVar20 = lVar20 + 0x40;
        lVar18 = (uVar23 + uVar22 >> 0x21 | (uVar23 + uVar22) * 0x80000000) * -0x4b6d499041670d8d;
        puVar8 = puVar12 + 1;
        uVar15 = uVar15 + uVar14 + *puVar1;
        uVar15 = *puVar8 + uVar21 + (uVar15 >> 0x2a | uVar15 * 0x400000) * -0x4b6d499041670d8d;
        puVar2 = puVar12 + -2;
        puVar9 = puVar12 + -1;
        lVar4 = lVar18 + uVar16 + *puVar12;
        puVar12 = puVar12 + 8;
        uVar23 = (uVar3 >> 0x25 | uVar3 * 0x8000000) * -0x4b6d499041670d8d ^ uVar16;
        uVar16 = lVar4 + *puVar8 + *puVar1;
        uVar14 = lVar17 + *puVar6 + *puVar2;
        uVar3 = lVar17 + uVar22 + *puVar9 + uVar23;
        uVar19 = uVar15 + *puVar2 + lVar4 + *puVar7;
        uVar21 = uVar14 + *puVar9;
        uVar14 = (uVar14 >> 0x2c | uVar14 * 0x100000) + lVar17 + (uVar3 >> 0x15 | uVar3 << 0x2b);
        uVar22 = uVar16 + *puVar7;
        uVar16 = (uVar16 >> 0x2c | uVar16 * 0x100000) + lVar4 + (uVar19 >> 0x15 | uVar19 << 0x2b);
      } while (lVar20 != 0);
      uVar21 = (uVar22 ^ uVar21) * -0x622015f714c7d297;
      uVar14 = (uVar16 ^ uVar14) * -0x622015f714c7d297;
      uVar21 = (uVar22 ^ uVar21 >> 0x2f ^ uVar21) * -0x622015f714c7d297;
      uVar14 = (uVar16 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
      uVar14 = lVar18 + (uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297;
      uVar15 = (uVar14 ^ uVar23 + (uVar15 ^ uVar15 >> 0x2f) * -0x4b6d499041670d8d +
                         (uVar21 ^ uVar21 >> 0x2f) * -0x622015f714c7d297) * -0x622015f714c7d297;
      uVar15 = (uVar14 ^ uVar15 >> 0x2f ^ uVar15) * -0x622015f714c7d297;
      return (uVar15 ^ uVar15 >> 0x2f) * -0x622015f714c7d297;
    }
    lVar4 = *(long *)((long)param_2 + (param_3 - 0x10));
    uVar19 = *param_2 + (lVar4 + param_3) * -0x3c5a37a36834ced9;
    uVar23 = param_2[3];
    uVar15 = *(long *)((long)param_2 + (param_3 - 0x20)) + param_2[2];
    lVar20 = *(long *)((long)param_2 + (param_3 - 8)) + uVar23;
    uVar14 = *(long *)((long)param_2 + (param_3 - 0x18)) + uVar15;
    uVar16 = uVar19 + param_2[1];
    uVar21 = uVar16 + param_2[2];
    uVar3 = uVar14 + lVar4;
    uVar22 = lVar20 + uVar15;
    lVar4 = (uVar16 >> 7 | uVar16 << 0x39) + (uVar19 >> 0x25 | uVar19 * 0x8000000) +
            (uVar19 + uVar23 >> 0x34 | (uVar19 + uVar23) * 0x1000) +
            (uVar21 >> 0x1f | uVar21 << 0x21);
    lVar17 = -0x651e95c4d06fbfb1;
    uVar15 = (uVar3 + lVar20 + lVar4) * -0x3c5a37a36834ced9 +
             (uVar21 + uVar23 + (uVar15 >> 0x25 | uVar15 * 0x8000000) +
                       (uVar14 >> 7 | uVar14 << 0x39) + (uVar22 >> 0x34 | uVar22 * 0x1000) +
                       (uVar3 >> 0x1f | uVar3 << 0x21)) * -0x651e95c4d06fbfb1;
    uVar15 = lVar4 + (uVar15 ^ uVar15 >> 0x2f) * -0x3c5a37a36834ced9;
  }
  return (uVar15 ^ uVar15 >> 0x2f) * lVar17;
}


// ===== 0061e6c8  FUN_0061e6c8 =====

void FUN_0061e6c8(undefined8 *param_1,long *param_2,byte param_3,long *param_4,undefined8 param_5,
                 undefined8 *param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  void *__src;
  void *__dest;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_98 [72];
  
  *param_1 = &PTR_FUN_00d27718;
  param_1[1] = &PTR_FUN_00d27748;
  lVar4 = *param_2;
  param_1[2] = lVar4;
  if (lVar4 != 0) {
    FUN_00d0f740(1,lVar4 + 8);
  }
  lVar9 = param_2[4];
  lVar4 = param_2[3];
  lVar11 = param_2[2];
  lVar10 = param_2[1];
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  param_1[6] = lVar9;
  param_1[5] = lVar4;
  param_1[4] = lVar11;
  param_1[3] = lVar10;
  __src = (void *)*param_4;
  uVar5 = param_4[1] - (long)__src;
  if (uVar5 != 0) {
    if ((long)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005da79c();
    }
    __dest = operator_new(uVar5);
    param_1[7] = __dest;
    param_1[8] = __dest;
    param_1[9] = (long)__dest + uVar5;
    memcpy(__dest,__src,uVar5);
    param_1[8] = (long)__dest + uVar5;
  }
  *(byte *)(param_1 + 10) = param_3 & 1;
  uVar8 = *param_6;
  param_1[0xc] = param_6[1];
  param_1[0xb] = uVar8;
  param_1[0xd] = param_6[2];
  lVar4 = param_6[3];
  param_1[0xe] = lVar4;
  if (*(long *)(lVar4 + 8) != 0) {
    param_6[2] = 0;
    param_6[3] = &DAT_001fbc50;
  }
  param_1[0xf] = param_5;
  if ((param_3 & 1) == 0) {
LAB_0061e7d4:
    param_1[0x10] = 0;
    uVar5 = 1;
  }
  else {
    lVar4 = *param_4;
    lVar9 = param_4[1];
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    if (lVar9 - lVar4 == 0) goto LAB_0061e868;
    uVar5 = lVar9 - lVar4 >> 2;
    if (uVar5 >> 0x3d != 0) {
      FUN_0061ef74();
      goto LAB_0061e7d4;
    }
  }
  puVar3 = (undefined8 *)operator_new(uVar5 * 8);
  param_1[0x10] = puVar3;
  param_1[0x11] = puVar3;
  uVar6 = uVar5 * 8 - 8 >> 3;
  uVar2 = (ulong)-(long)puVar3 >> 3;
  if (uVar6 <= (ulong)-(long)puVar3 >> 3) {
    uVar2 = uVar6;
  }
  puVar1 = puVar3 + uVar5;
  param_1[0x12] = puVar1;
  if ((5 < uVar2) && ((-(int)puVar3 & 7U) == 0)) {
    uVar5 = uVar2 + 1 & 3;
    uVar6 = 4;
    if (uVar5 != 0) {
      uVar6 = uVar5;
    }
    puVar7 = puVar3 + 2;
    lVar4 = (uVar2 + 1) - uVar6;
    puVar3 = puVar3 + lVar4;
    do {
      lVar4 = lVar4 + -4;
      puVar7[-1] = 0;
      puVar7[-2] = 0;
      puVar7[1] = 0;
      *puVar7 = 0;
      puVar7 = puVar7 + 4;
    } while (lVar4 != 0);
  }
  do {
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar7 = puVar3 + 1;
    *puVar3 = 0;
    puVar3 = puVar7;
  } while (puVar7 != puVar1);
  param_1[0x11] = puVar1;
LAB_0061e868:
  FUN_009926ec(auStack_98,param_1[3]);
  uVar5 = FUN_009927a8(auStack_98);
  lVar4 = 300000;
  if ((uVar5 & 0x100000000) != 0) {
    lVar4 = (long)(int)uVar5 * 1000;
  }
  param_1[0x13] = lVar4;
  FUN_006634ac(auStack_98);
  return;
}


// ===== 0061e8d8  FUN_0061e8d8 =====

void FUN_0061e8d8(long param_1,wchar_t param_2)

{
  ulong uVar1;
  wchar_t *pwVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  wchar_t *pwVar14;
  ulong uVar15;
  void *local_70;
  void *local_68;
  undefined8 local_60;
  undefined4 *local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  
  pwVar14 = *(wchar_t **)(param_1 + 0x40);
  pwVar2 = wmemchr(*(wchar_t **)(param_1 + 0x38),param_2,
                   (long)pwVar14 - (long)*(wchar_t **)(param_1 + 0x38) >> 2);
  if (pwVar2 != (wchar_t *)0x0) {
    pwVar14 = pwVar2;
  }
  if (pwVar14 == *(wchar_t **)(param_1 + 0x40)) {
    uVar15 = FUN_004022fc();
    if ((uVar15 & 1) != 0) {
      return;
    }
    FUN_00623bb0(&DAT_001fcbd8,"../../video/encoder_rtcp_feedback.cc",0x232,"SSRC ",param_2,
                 " not found.");
    return;
  }
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = (long)pwVar14 - *(long *)(param_1 + 0x38) >> 2;
    if ((ulong)(*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80) >> 3) < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../video/encoder_rtcp_feedback.cc",0x4b,
                   "ssrc_index <= time_last_packet_delivery_queue_.size()",&DAT_001fb920,uVar15);
    }
  }
  lVar3 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
  lVar10 = *(long *)(param_1 + 0x80);
  if ((ulong)(*(long *)(param_1 + 0x88) - lVar10 >> 3) <= uVar15) goto LAB_0061ec74;
  lVar9 = *(long *)(lVar10 + uVar15 * 8);
  lVar7 = 0x7fffffffffffffff;
  if ((lVar9 != 0x7fffffffffffffff) &&
     (lVar12 = *(long *)(param_1 + 0x98), lVar12 != 0x7fffffffffffffff)) {
    lVar7 = -0x8000000000000000;
    if (lVar12 != -0x8000000000000000 && lVar9 != -0x8000000000000000) {
      lVar7 = lVar9 + lVar12;
    }
  }
  if (lVar3 < lVar7) {
    return;
  }
  *(long *)(lVar10 + uVar15 * 8) = lVar3;
  lVar10 = *(long *)(param_1 + 0x38);
  lVar3 = *(long *)(param_1 + 0x40);
  local_50 = (undefined4 *)0x0;
  local_48 = (undefined4 *)0x0;
  local_58 = (undefined4 *)0x0;
  uVar11 = lVar3 - lVar10;
  if (uVar11 == 0) {
    if ((*(byte *)(param_1 + 0x50) & 1) != 0) goto LAB_0061ead8;
LAB_0061eb18:
    puVar8 = local_58;
    local_70 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_50 = local_48;
    (**(code **)(**(long **)(param_1 + 0x78) + 0x38))(*(long **)(param_1 + 0x78),&local_70);
    if (local_70 != (void *)0x0) {
      uVar11 = (ulong)((long)local_68 + (-4 - ((long)local_68 << 0x3e))) >> 2;
      uVar15 = (ulong)(((long)local_70 - (long)local_68 << 0x3e) - ((long)local_70 - (long)local_68)
                      ) >> 2;
      if (uVar11 <= uVar15) {
        uVar15 = uVar11;
      }
      pvVar5 = local_68;
      if ((1 < uVar15) && ((((int)local_70 - (int)local_68 | -(int)local_68) & 3U) == 0)) {
        uVar15 = uVar15 & 0x3ffffffffffffffe;
        pvVar5 = (void *)((long)local_68 + uVar15 * -4);
        do {
          uVar15 = uVar15 - 2;
        } while (uVar15 != 0);
      }
      do {
        if (pvVar5 == local_70) {
          local_68 = local_70;
          operator_delete(local_70);
          goto LAB_0061ebc8;
        }
        pvVar5 = (void *)((long)pvVar5 + -4);
      } while (pvVar5 != (void *)0x0);
      goto LAB_0061ec30;
    }
  }
  else {
    if ((long)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0060fffc();
    }
    local_58 = (undefined4 *)operator_new(uVar11);
    uVar4 = uVar11 - 4 >> 2;
    uVar1 = (ulong)-(long)local_58 >> 2;
    if (uVar4 <= (ulong)-(long)local_58 >> 2) {
      uVar1 = uVar4;
    }
    local_48 = (undefined4 *)((long)local_58 + uVar11);
    puVar8 = local_58;
    if ((0xf < uVar1) && ((((int)lVar3 - (int)lVar10 | -(int)local_58) & 3U) == 0)) {
      uVar11 = uVar1 + 1 & 7;
      uVar4 = 8;
      if (uVar11 != 0) {
        uVar4 = uVar11;
      }
      puVar13 = (undefined8 *)(local_58 + 4);
      lVar10 = (uVar1 + 1) - uVar4;
      puVar8 = local_58 + lVar10;
      do {
        lVar10 = lVar10 + -8;
        puVar13[-1] = 0x400000004;
        puVar13[-2] = 0x400000004;
        puVar13[1] = 0x400000004;
        *puVar13 = 0x400000004;
        puVar13 = puVar13 + 4;
      } while (lVar10 != 0);
    }
    do {
      if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar6 = puVar8 + 1;
      *puVar8 = 4;
      puVar8 = puVar6;
    } while (puVar6 != local_48);
    if ((*(byte *)(param_1 + 0x50) & 1) == 0) goto LAB_0061eb18;
LAB_0061ead8:
    local_50 = local_48;
    if ((ulong)((long)local_48 - (long)local_58 >> 2) <= uVar15) {
LAB_0061ec74:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                );
    }
    local_58[uVar15] = 3;
    (**(code **)(**(long **)(param_1 + 0x78) + 0x38))(*(long **)(param_1 + 0x78),&local_58);
    puVar8 = local_58;
  }
LAB_0061ebc8:
  if (puVar8 == (undefined4 *)0x0) {
    return;
  }
  uVar11 = (ulong)((long)local_50 + (-4 - ((long)local_50 << 0x3e))) >> 2;
  uVar15 = (ulong)(((long)puVar8 - (long)local_50 << 0x3e) - ((long)puVar8 - (long)local_50)) >> 2;
  if (uVar11 <= uVar15) {
    uVar15 = uVar11;
  }
  puVar6 = local_50;
  if ((1 < uVar15) && ((((int)puVar8 - (int)local_50 | -(int)local_50) & 3U) == 0)) {
    uVar15 = uVar15 & 0x3ffffffffffffffe;
    puVar6 = local_50 + -uVar15;
    do {
      uVar15 = uVar15 - 2;
    } while (uVar15 != 0);
  }
  do {
    if (puVar6 == puVar8) {
      local_50 = puVar8;
      operator_delete(puVar8);
      return;
    }
    puVar6 = puVar6 + -1;
  } while (puVar6 != (undefined4 *)0x0);
LAB_0061ec30:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0061ec8c  FUN_0061ec8c =====

void FUN_0061ec8c(long param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,
                 ushort param_5)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 *local_70;
  undefined4 *puStack_68;
  undefined1 *local_60;
  undefined2 *local_58;
  undefined2 *local_50;
  undefined2 *local_48;
  
  local_58 = (undefined2 *)operator_new(4);
  local_50 = local_58 + 2;
  local_48 = local_50;
  if (local_58 == (undefined2 *)0x0) {
LAB_0061eed0:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *local_58 = param_3;
  if (local_58 + 1 == (undefined2 *)0x0) goto LAB_0061eed0;
  pcVar5 = *(code **)(param_1 + 0x68);
  local_58[1] = param_4;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = (undefined4 *)&DAT_aaaaaaaaaaaaaaaa;
  local_70 = (undefined4 *)&DAT_aaaaaaaaaaaaaaaa;
  (*pcVar5)(&local_70,param_1 + 0x58,param_2,&local_58);
  if (local_70 == puStack_68) goto LAB_0061edb0;
  if ((ulong)((long)puStack_68 - (long)local_70) < 9) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
              );
  }
  uVar1 = 0;
  local_7c = *local_70;
  local_78 = local_70[2];
  if (*(char *)(local_70 + 3) == '\x01') {
    uVar1 = param_5 & 1 | 0x100;
    if (*(char *)((long)local_70 + 0xd) != '\0') {
      local_74 = CONCAT22(param_5,param_5) & 0x10001 | 0x1000100;
      goto LAB_0061ed98;
    }
    uVar2 = 0;
    if ((param_5 & 1) == 0) {
      uVar2 = 0x100;
    }
LAB_0061ed94:
    local_74 = CONCAT22(uVar2,uVar1);
  }
  else if (*(char *)((long)local_70 + 0xd) == '\0') {
    if ((param_5 & 1) == 0) goto LAB_0061ed90;
    local_74 = 0x101;
  }
  else {
    if ((param_5 & 1) == 0) {
LAB_0061ed90:
      uVar2 = 0x100;
      goto LAB_0061ed94;
    }
    local_74 = 0x1010101;
  }
LAB_0061ed98:
  (**(code **)(**(long **)(param_1 + 0x78) + 0x40))(*(long **)(param_1 + 0x78),&local_7c);
LAB_0061edb0:
  if (local_70 == (undefined4 *)0x0) {
LAB_0061ee2c:
    if (local_58 == (undefined2 *)0x0) {
      return;
    }
    uVar7 = (ulong)((long)local_50 + ((long)local_50 << 0x3f) + -2) >> 1;
    uVar6 = (ulong)(((long)local_58 - (long)local_50 << 0x3f) - ((long)local_58 - (long)local_50))
            >> 1;
    if (uVar7 <= uVar6) {
      uVar6 = uVar7;
    }
    puVar4 = local_50;
    if ((1 < uVar6) && ((((int)local_58 - (uint)local_50 | (uint)local_50) & 1) == 0)) {
      uVar6 = uVar6 & 0x7ffffffffffffffe;
      puVar4 = local_50 + -uVar6;
      do {
        uVar6 = uVar6 - 2;
      } while (uVar6 != 0);
    }
    do {
      if (puVar4 == local_58) {
        local_50 = local_58;
        operator_delete(local_58);
        return;
      }
      puVar4 = puVar4 + -1;
    } while (puVar4 != (undefined2 *)0x0);
  }
  else {
    uVar7 = (ulong)((long)puStack_68 + (-8 - ((long)puStack_68 << 0x3d))) >> 3;
    uVar6 = (ulong)(((long)local_70 - (long)puStack_68 << 0x3d) -
                   ((long)local_70 - (long)puStack_68)) >> 3;
    if (uVar7 <= uVar6) {
      uVar6 = uVar7;
    }
    puVar3 = puStack_68;
    if ((1 < uVar6) && ((((int)local_70 - (int)puStack_68 | -(int)puStack_68) & 7U) == 0)) {
      uVar6 = uVar6 & 0x1ffffffffffffffe;
      puVar3 = puStack_68 + uVar6 * -2;
      do {
        uVar6 = uVar6 - 2;
      } while (uVar6 != 0);
    }
    do {
      if (puVar3 == local_70) {
        puStack_68 = local_70;
        operator_delete(local_70);
        goto LAB_0061ee2c;
      }
      puVar3 = puVar3 + -2;
    } while (puVar3 != (undefined4 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0061eef8  FUN_0061eef8 =====

void FUN_0061eef8(long param_1)

{
  FUN_0061ec8c(param_1 + -8);
  return;
}


// ===== 0061ef04  FUN_0061ef04 =====

void FUN_0061ef04(void *param_1)

{
  FUN_0060e4bc();
  operator_delete(param_1);
  return;
}


// ===== 0061ef34  FUN_0061ef34 =====

void FUN_0061ef34(long param_1)

{
  FUN_0060e4bc(param_1 + -8);
  return;
}


// ===== 0061ef40  FUN_0061ef40 =====

void FUN_0061ef40(long param_1)

{
  FUN_0060e4bc((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 0061ef74  FUN_0061ef74 =====

void FUN_0061ef74(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0061ef8c  FUN_0061ef8c =====

void FUN_0061ef8c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &PTR_FUN_00d27770;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  FUN_009400f8(param_2,param_1);
  return;
}


// ===== 0061efb4  FUN_0061efb4 =====

void FUN_0061efb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d27770;
  FUN_009400f8(param_1[1],0);
  return;
}


// ===== 0061efd4  FUN_0061efd4 =====

void FUN_0061efd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d27770;
  FUN_009400f8(param_1[1],0);
  operator_delete(param_1);
  return;
}


// ===== 0061f018  FUN_0061f018 =====

undefined8 FUN_0061f018(long param_1,undefined8 *param_2)

{
  FUN_005fde88(*(undefined8 *)(param_1 + 0x10),*param_2,*(undefined2 *)(param_2 + 1),param_2[2],
               *(undefined1 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c));
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18),*param_2);
  return 0;
}


// ===== 0061f074  FUN_0061f074 =====

void FUN_0061f074(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0061f084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))();
  return;
}


// ===== 0061f088  FUN_0061f088 =====

void FUN_0061f088(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0061f098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x38))();
  return;
}


// ===== 0061f09c  FUN_0061f09c =====

void FUN_0061f09c(long param_1)

{
  FUN_005fd59c(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 0061f0a8  FUN_0061f0a8 =====

void FUN_0061f0a8(long param_1)

{
  FUN_005fd65c(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 0061f0b4  FUN_0061f0b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061f0b4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = _UNK_001f4af8;
  uVar6 = _DAT_001f4af0;
  uVar2 = _UNK_001f25f8;
  uVar1 = _DAT_001f25f0;
  uVar5 = _DAT_001f1d30;
  param_1[1] = _UNK_001f1d38;
  *param_1 = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  uVar1 = _UNK_001f2d08;
  uVar5 = _DAT_001f2d00;
  *(undefined2 *)((long)param_1 + 0x54) = 0;
  param_1[5] = uVar3;
  param_1[4] = uVar6;
  param_1[7] = uVar1;
  param_1[6] = uVar5;
  uVar1 = _UNK_001f3348;
  uVar5 = _DAT_001f3340;
  uVar6 = NEON_fmov(0x41200000,4);
  *(undefined8 *)((long)param_1 + 0x4c) = DAT_001f53d0;
  uVar2 = DAT_001f5ce8;
  param_1[0x11] = uVar1;
  param_1[0x10] = uVar5;
  uVar1 = _UNK_001f4108;
  uVar5 = _DAT_001f4100;
  param_1[0x14] = uVar2;
  uVar2 = DAT_001f5c80;
  param_1[0x17] = uVar1;
  param_1[0x16] = uVar5;
  uVar5 = DAT_001f5a88;
  param_1[0x1a] = uVar2;
  uVar1 = DAT_001f5af0;
  *(int *)(param_1 + 0x1d) = (int)uVar5;
  param_1[0x1e] = uVar1;
  uVar5 = DAT_001f54b8;
  uVar2 = DAT_001f50e0;
  param_1[0x26] = uVar6;
  param_1[0x22] = uVar5;
  uVar1 = _UNK_001f48d8;
  uVar5 = _DAT_001f48d0;
  *(int *)((long)param_1 + 0x11c) = (int)uVar2;
  param_1[0x25] = uVar1;
  param_1[0x24] = uVar5;
  uVar6 = _UNK_001f3878;
  uVar2 = _DAT_001f3870;
  uVar1 = _UNK_001f2968;
  uVar5 = _DAT_001f2960;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x461c4000;
  *(undefined8 *)((long)param_1 + 0x144) = uVar6;
  *(undefined8 *)((long)param_1 + 0x13c) = uVar2;
  uVar6 = _UNK_001f3268;
  uVar2 = _DAT_001f3260;
  param_1[0x2c] = uVar1;
  param_1[0x2b] = uVar5;
  uVar4 = _UNK_001f48e8;
  uVar3 = _DAT_001f48e0;
  uVar1 = _UNK_001f1ea8;
  uVar5 = _DAT_001f1ea0;
  *(undefined4 *)(param_1 + 0xd) = 0x461c4000;
  param_1[0x33] = uVar6;
  param_1[0x32] = uVar2;
  param_1[0x35] = uVar1;
  param_1[0x34] = uVar5;
  uVar6 = _UNK_001f3538;
  uVar2 = _DAT_001f3530;
  uVar1 = _UNK_001f2028;
  uVar5 = _DAT_001f2020;
  param_1[0x37] = uVar4;
  param_1[0x36] = uVar3;
  param_1[0x39] = uVar6;
  param_1[0x38] = uVar2;
  uVar6 = DAT_001f58a8;
  *(undefined8 *)((long)param_1 + 0x1dc) = uVar1;
  *(undefined8 *)((long)param_1 + 0x1d4) = uVar5;
  uVar2 = DAT_001f5300;
  param_1[0x3d] = uVar6;
  *(undefined4 *)(param_1 + 9) = 0x3e4ccccd;
  *(undefined2 *)(param_1 + 0xb) = 0x100;
  *(undefined2 *)((long)param_1 + 100) = 0x100;
  param_1[0xf] = 0xd;
  *(undefined4 *)(param_1 + 0x12) = 0x4b9929a8;
  param_1[0x13] = 0xd;
  *(undefined4 *)(param_1 + 0x18) = 0x4b9929a8;
  param_1[0x15] = 0xc;
  param_1[0x19] = 0xc;
  param_1[0x41] = 1;
  param_1[0x40] = 1;
  param_1[0x43] = 1;
  param_1[0x42] = 1;
  uVar5 = NEON_fmov(0x3f800000,4);
  param_1[0x1b] = 0xfa;
  param_1[0x1c] = 0x1940200000;
  *(undefined4 *)(param_1 + 0x1f) = 0x3fc00000;
  *(undefined2 *)(param_1 + 0x21) = 0x101;
  *(undefined2 *)(param_1 + 0x3f) = 0x101;
  param_1[0x45] = uVar5;
  uVar1 = _UNK_001f4498;
  uVar5 = _DAT_001f4490;
  *(undefined4 *)(param_1 + 0x23) = 0x3f547ae1;
  *(undefined8 *)((long)param_1 + 0x23c) = uVar1;
  *(undefined8 *)((long)param_1 + 0x234) = uVar5;
  param_1[0x2a] = 0x32;
  *(undefined8 *)((long)param_1 + 0x244) = 0x100000010;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined1 *)((long)param_1 + 0xfc) = 1;
  param_1[0x20] = 1;
  param_1[0x2d] = 1;
  param_1[0x2e] = 1;
  *(undefined1 *)(param_1 + 0x2f) = 1;
  *(undefined4 *)(param_1 + 0x30) = 0xc2c01170;
  *(undefined1 *)(param_1 + 0x3a) = 1;
  param_1[0x44] = 1;
  *(undefined4 *)((long)param_1 + 0x24c) = 0x3727c5ac;
  *(undefined1 *)(param_1 + 0x4b) = 1;
  param_1[0x31] = 4;
  *(undefined8 *)((long)param_1 + 0x25c) = 0x12c00000000;
  param_1[8] = 0x3f3333333f333333;
  *(undefined1 *)((long)param_1 + 0x6c) = 0;
  *(undefined1 *)((long)param_1 + 0xec) = 0;
  *(undefined2 *)(param_1 + 0x27) = 0;
  *(undefined2 *)((long)param_1 + 0x14c) = 0;
  param_1[0x3e] = uVar2;
  *(undefined4 *)((long)param_1 + 0x1e4) = 0x3e800000;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)((long)param_1 + 0x264) = 0x40000000;
  return;
}


// ===== 0061f310  FUN_0061f310 =====

void FUN_0061f310(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  uVar3 = param_2[6];
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  uVar7 = param_2[5];
  uVar6 = param_2[4];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  param_1[5] = uVar7;
  param_1[4] = uVar6;
  uVar1 = param_2[0x17];
  uVar3 = param_2[0x1e];
  uVar2 = param_2[0x1d];
  uVar5 = param_2[0x1a];
  uVar4 = param_2[0x19];
  uVar7 = param_2[0x1c];
  uVar6 = param_2[0x1b];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = uVar1;
  param_1[0x1e] = uVar3;
  param_1[0x1d] = uVar2;
  param_1[0x1c] = uVar7;
  param_1[0x1b] = uVar6;
  param_1[0x1a] = uVar5;
  param_1[0x19] = uVar4;
  uVar7 = param_2[0x24];
  uVar6 = param_2[0x23];
  uVar3 = param_2[0x26];
  uVar2 = param_2[0x25];
  uVar1 = param_2[0x1f];
  uVar5 = param_2[0x22];
  uVar4 = param_2[0x21];
  param_1[0x20] = param_2[0x20];
  param_1[0x1f] = uVar1;
  param_1[0x24] = uVar7;
  param_1[0x23] = uVar6;
  param_1[0x26] = uVar3;
  param_1[0x25] = uVar2;
  param_1[0x22] = uVar5;
  param_1[0x21] = uVar4;
  uVar2 = param_2[0x27];
  uVar1 = *(undefined8 *)((long)param_2 + 0x146);
  param_1[0x28] = param_2[0x28];
  param_1[0x27] = uVar2;
  *(undefined8 *)((long)param_1 + 0x146) = uVar1;
  uVar1 = param_2[0x15];
  uVar3 = param_2[0x14];
  uVar2 = param_2[0x13];
  uVar5 = param_2[0x10];
  uVar4 = param_2[0xf];
  uVar7 = param_2[0x12];
  uVar6 = param_2[0x11];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar1;
  param_1[0x14] = uVar3;
  param_1[0x13] = uVar2;
  param_1[0x12] = uVar7;
  param_1[0x11] = uVar6;
  param_1[0x10] = uVar5;
  param_1[0xf] = uVar4;
  uVar5 = param_2[0x2b];
  uVar4 = param_2[0x2a];
  uVar3 = param_2[0x2d];
  uVar2 = param_2[0x2c];
  uVar1 = *(undefined8 *)((long)param_2 + 0x169);
  *(undefined8 *)((long)param_1 + 0x171) = *(undefined8 *)((long)param_2 + 0x171);
  *(undefined8 *)((long)param_1 + 0x169) = uVar1;
  param_1[0x2b] = uVar5;
  param_1[0x2a] = uVar4;
  param_1[0x2d] = uVar3;
  param_1[0x2c] = uVar2;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  param_1[0x31] = param_2[0x31];
  uVar1 = param_2[0x32];
  *(undefined4 *)(param_1 + 0x33) = *(undefined4 *)(param_2 + 0x33);
  param_1[0x32] = uVar1;
  uVar1 = *(undefined8 *)((long)param_2 + 0x19c);
  *(undefined4 *)((long)param_1 + 0x1a4) = *(undefined4 *)((long)param_2 + 0x1a4);
  *(undefined8 *)((long)param_1 + 0x19c) = uVar1;
  param_1[0x35] = param_2[0x35];
  uVar1 = param_2[0x36];
  *(undefined4 *)(param_1 + 0x37) = *(undefined4 *)(param_2 + 0x37);
  param_1[0x36] = uVar1;
  uVar1 = *(undefined8 *)((long)param_2 + 0x1bc);
  *(undefined4 *)((long)param_1 + 0x1c4) = *(undefined4 *)((long)param_2 + 0x1c4);
  *(undefined8 *)((long)param_1 + 0x1bc) = uVar1;
  param_1[0x39] = param_2[0x39];
  uVar3 = param_2[0x3e];
  uVar2 = param_2[0x41];
  uVar1 = param_2[0x40];
  uVar5 = param_2[0x3b];
  uVar4 = param_2[0x3a];
  uVar7 = param_2[0x3d];
  uVar6 = param_2[0x3c];
  param_1[0x3f] = param_2[0x3f];
  param_1[0x3e] = uVar3;
  param_1[0x41] = uVar2;
  param_1[0x40] = uVar1;
  param_1[0x3b] = uVar5;
  param_1[0x3a] = uVar4;
  param_1[0x3d] = uVar7;
  param_1[0x3c] = uVar6;
  uVar3 = param_2[0x46];
  uVar2 = param_2[0x49];
  uVar1 = param_2[0x48];
  uVar5 = param_2[0x43];
  uVar4 = param_2[0x42];
  uVar7 = param_2[0x45];
  uVar6 = param_2[0x44];
  param_1[0x47] = param_2[0x47];
  param_1[0x46] = uVar3;
  param_1[0x49] = uVar2;
  param_1[0x48] = uVar1;
  param_1[0x43] = uVar5;
  param_1[0x42] = uVar4;
  param_1[0x45] = uVar7;
  param_1[0x44] = uVar6;
  *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_2 + 0x4a);
  uVar1 = param_2[0x4b];
  param_1[0x4c] = param_2[0x4c];
  param_1[0x4b] = uVar1;
  return;
}


// ===== 0061f470  FUN_0061f470 =====

void FUN_0061f470(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  uVar3 = param_2[6];
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  uVar7 = param_2[5];
  uVar6 = param_2[4];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  param_1[5] = uVar7;
  param_1[4] = uVar6;
  uVar1 = param_2[0x17];
  uVar3 = param_2[0x1e];
  uVar2 = param_2[0x1d];
  uVar5 = param_2[0x1a];
  uVar4 = param_2[0x19];
  uVar7 = param_2[0x1c];
  uVar6 = param_2[0x1b];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = uVar1;
  param_1[0x1e] = uVar3;
  param_1[0x1d] = uVar2;
  param_1[0x1c] = uVar7;
  param_1[0x1b] = uVar6;
  param_1[0x1a] = uVar5;
  param_1[0x19] = uVar4;
  uVar7 = param_2[0x24];
  uVar6 = param_2[0x23];
  uVar3 = param_2[0x26];
  uVar2 = param_2[0x25];
  uVar1 = param_2[0x1f];
  uVar5 = param_2[0x22];
  uVar4 = param_2[0x21];
  param_1[0x20] = param_2[0x20];
  param_1[0x1f] = uVar1;
  param_1[0x24] = uVar7;
  param_1[0x23] = uVar6;
  param_1[0x26] = uVar3;
  param_1[0x25] = uVar2;
  param_1[0x22] = uVar5;
  param_1[0x21] = uVar4;
  uVar2 = param_2[0x27];
  uVar1 = *(undefined8 *)((long)param_2 + 0x146);
  param_1[0x28] = param_2[0x28];
  param_1[0x27] = uVar2;
  *(undefined8 *)((long)param_1 + 0x146) = uVar1;
  uVar1 = param_2[0x15];
  uVar3 = param_2[0x14];
  uVar2 = param_2[0x13];
  uVar5 = param_2[0x10];
  uVar4 = param_2[0xf];
  uVar7 = param_2[0x12];
  uVar6 = param_2[0x11];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar1;
  param_1[0x14] = uVar3;
  param_1[0x13] = uVar2;
  param_1[0x12] = uVar7;
  param_1[0x11] = uVar6;
  param_1[0x10] = uVar5;
  param_1[0xf] = uVar4;
  uVar5 = param_2[0x2b];
  uVar4 = param_2[0x2a];
  uVar3 = param_2[0x2d];
  uVar2 = param_2[0x2c];
  uVar1 = *(undefined8 *)((long)param_2 + 0x169);
  *(undefined8 *)((long)param_1 + 0x171) = *(undefined8 *)((long)param_2 + 0x171);
  *(undefined8 *)((long)param_1 + 0x169) = uVar1;
  param_1[0x2b] = uVar5;
  param_1[0x2a] = uVar4;
  param_1[0x2d] = uVar3;
  param_1[0x2c] = uVar2;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  param_1[0x31] = param_2[0x31];
  uVar1 = param_2[0x32];
  *(undefined4 *)(param_1 + 0x33) = *(undefined4 *)(param_2 + 0x33);
  param_1[0x32] = uVar1;
  uVar1 = *(undefined8 *)((long)param_2 + 0x19c);
  *(undefined4 *)((long)param_1 + 0x1a4) = *(undefined4 *)((long)param_2 + 0x1a4);
  *(undefined8 *)((long)param_1 + 0x19c) = uVar1;
  param_1[0x35] = param_2[0x35];
  uVar1 = param_2[0x36];
  *(undefined4 *)(param_1 + 0x37) = *(undefined4 *)(param_2 + 0x37);
  param_1[0x36] = uVar1;
  uVar1 = *(undefined8 *)((long)param_2 + 0x1bc);
  *(undefined4 *)((long)param_1 + 0x1c4) = *(undefined4 *)((long)param_2 + 0x1c4);
  *(undefined8 *)((long)param_1 + 0x1bc) = uVar1;
  param_1[0x39] = param_2[0x39];
  uVar3 = param_2[0x3e];
  uVar2 = param_2[0x41];
  uVar1 = param_2[0x40];
  uVar5 = param_2[0x3b];
  uVar4 = param_2[0x3a];
  uVar7 = param_2[0x3d];
  uVar6 = param_2[0x3c];
  param_1[0x3f] = param_2[0x3f];
  param_1[0x3e] = uVar3;
  param_1[0x41] = uVar2;
  param_1[0x40] = uVar1;
  param_1[0x3b] = uVar5;
  param_1[0x3a] = uVar4;
  param_1[0x3d] = uVar7;
  param_1[0x3c] = uVar6;
  uVar3 = param_2[0x46];
  uVar2 = param_2[0x49];
  uVar1 = param_2[0x48];
  uVar5 = param_2[0x43];
  uVar4 = param_2[0x42];
  uVar7 = param_2[0x45];
  uVar6 = param_2[0x44];
  param_1[0x47] = param_2[0x47];
  param_1[0x46] = uVar3;
  param_1[0x49] = uVar2;
  param_1[0x48] = uVar1;
  param_1[0x43] = uVar5;
  param_1[0x42] = uVar4;
  param_1[0x45] = uVar7;
  param_1[0x44] = uVar6;
  *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_2 + 0x4a);
  uVar1 = param_2[0x4b];
  param_1[0x4c] = param_2[0x4c];
  param_1[0x4b] = uVar1;
  return;
}


// ===== 0061f5d0  FUN_0061f5d0 =====

void FUN_0061f5d0(void *param_1)

{
  undefined8 uVar1;
  
  memcpy(param_1,&DAT_001fcdb0,0x268);
  FUN_0061f0b4(param_1);
  uVar1 = DAT_001f5010;
  *(undefined8 *)((long)param_1 + 0x98) = 0xb;
  *(undefined4 *)((long)param_1 + 0xa0) = 0x3f733333;
  *(undefined8 *)((long)param_1 + 200) = 0xb;
  *(undefined4 *)((long)param_1 + 0xd0) = 0x3f733333;
  *(undefined8 *)((long)param_1 + 0x1a8) = uVar1;
  return;
}


// ===== 0061f638  FUN_0061f638 =====

void FUN_0061f638(void *param_1,size_t param_2)

{
  undefined1 **ppuVar1;
  undefined *puVar2;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  void *local_30;
  size_t sStack_28;
  
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = param_1;
  sStack_28 = param_2;
  FUN_0061f6c8(&local_50,&local_30);
  ppuVar1 = (undefined1 **)local_50;
  if (-1 < (long)local_40) {
    ppuVar1 = &local_50;
  }
  __android_log_print(6,&DAT_001b6dea,&DAT_001d2ff8,ppuVar1);
  fflush(*(FILE **)PTR_stdout_00d51cb0);
  puVar2 = PTR_stderr_00d51cb8;
  fwrite(local_30,sStack_28,1,*(FILE **)PTR_stderr_00d51cb8);
  fflush(*(FILE **)puVar2);
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0061f6c8  FUN_0061f6c8 =====

void FUN_0061f6c8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *__dest;
  ulong __n;
  
  __n = param_2[1];
  if (0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  param_2 = (undefined8 *)*param_2;
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
    if ((__dest <= param_2) && (param_2 < (undefined8 *)((long)__dest + __n))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,param_2,__n);
    *(undefined1 *)((long)__dest + __n) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 0061f7a4  FUN_0061f7a4 =====

undefined4 FUN_0061f7a4(long *param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  size_t sVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  char *pcVar8;
  char *__s;
  
  uVar5 = 0;
  switch(*(undefined1 *)*param_2) {
  case 0:
    goto code_r0x0061fb98;
  case 1:
    uVar1 = *(uint *)(param_1 + 3);
    if (((int)uVar1 < 0) && (*(uint *)(param_1 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
      puVar6 = (undefined4 *)(param_1[1] + (long)(int)uVar1);
    }
    else {
      puVar6 = (undefined4 *)*param_1;
      *param_1 = (long)(puVar6 + 2);
    }
    uVar5 = *puVar6;
    puVar3 = &DAT_001ef797;
    goto LAB_0061fadc;
  case 2:
    uVar1 = *(uint *)(param_1 + 3);
    if (((int)uVar1 < 0) && (*(uint *)(param_1 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
      puVar7 = (undefined8 *)(param_1[1] + (long)(int)uVar1);
    }
    else {
      puVar7 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar7 + 1);
    }
    uVar4 = *puVar7;
    puVar3 = &DAT_001ab5b7;
    break;
  case 3:
    uVar1 = *(uint *)(param_1 + 3);
    if (((int)uVar1 < 0) && (*(uint *)(param_1 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
      puVar7 = (undefined8 *)(param_1[1] + (long)(int)uVar1);
    }
    else {
      puVar7 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar7 + 1);
    }
    uVar4 = *puVar7;
    puVar3 = &DAT_00197960;
    break;
  case 4:
    uVar1 = *(uint *)(param_1 + 3);
    if (((int)uVar1 < 0) && (*(uint *)(param_1 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
      puVar6 = (undefined4 *)(param_1[1] + (long)(int)uVar1);
    }
    else {
      puVar6 = (undefined4 *)*param_1;
      *param_1 = (long)(puVar6 + 2);
    }
    uVar5 = *puVar6;
    puVar3 = &DAT_001ab5bb;
LAB_0061fadc:
    FUN_0061fbc4(param_3,puVar3,uVar5);
    goto LAB_0061fb84;
  case 5:
    uVar1 = *(uint *)(param_1 + 3);
    if (((int)uVar1 < 0) && (*(uint *)(param_1 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
      puVar7 = (undefined8 *)(param_1[1] + (long)(int)uVar1);
    }
    else {
      puVar7 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar7 + 1);
    }
    uVar4 = *puVar7;
    puVar3 = &DAT_00197965;
    break;
  case 6:
    uVar1 = *(uint *)(param_1 + 3);
    if (((int)uVar1 < 0) && (*(uint *)(param_1 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
      puVar7 = (undefined8 *)(param_1[1] + (long)(int)uVar1);
    }
    else {
      puVar7 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar7 + 1);
    }
    uVar4 = *puVar7;
    puVar3 = &DAT_001c2129;
    break;
  case 7:
    uVar1 = *(uint *)((long)param_1 + 0x1c);
    if (((int)uVar1 < 0) && (*(uint *)((long)param_1 + 0x1c) = uVar1 + 0x10, uVar1 < 0xfffffff1)) {
      puVar7 = (undefined8 *)(param_1[2] + (long)(int)uVar1);
    }
    else {
      puVar7 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar7 + 1);
    }
    FUN_0061fbc4(*puVar7,param_3,&DAT_001ca883);
    goto LAB_0061fb84;
  case 8:
    uVar1 = *(uint *)((long)param_1 + 0x1c);
    if (((int)uVar1 < 0) && (*(uint *)((long)param_1 + 0x1c) = uVar1 + 0x10, uVar1 < 0xfffffff1)) {
      puVar7 = (undefined8 *)(param_1[2] + (long)(int)uVar1);
    }
    else {
      puVar7 = (undefined8 *)(*param_1 + 0xfU & 0xfffffffffffffff0);
      *param_1 = (long)(puVar7 + 2);
    }
    FUN_0061fbc4(*puVar7,param_3,&DAT_001d6225);
    goto LAB_0061fb84;
  case 9:
    uVar1 = *(uint *)(param_1 + 3);
    if (((int)uVar1 < 0) && (*(uint *)(param_1 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
      puVar7 = (undefined8 *)(param_1[1] + (long)(int)uVar1);
    }
    else {
      puVar7 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar7 + 1);
    }
    __s = (char *)*puVar7;
    if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string:3112: libc++ Hardening assertion __s != nullptr failed: string::append received nullptr\n"
                );
    }
    sVar2 = strlen(__s);
    goto LAB_0061fb54;
  case 10:
    uVar1 = *(uint *)(param_1 + 3);
    if (((int)uVar1 < 0) && (*(uint *)(param_1 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
      puVar7 = (undefined8 *)(param_1[1] + (long)(int)uVar1);
    }
    else {
      puVar7 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar7 + 1);
    }
    pcVar8 = (char *)*puVar7;
    __s = *(char **)pcVar8;
    sVar2 = *(size_t *)(pcVar8 + 8);
    if (-1 < pcVar8[0x17]) {
      __s = pcVar8;
      sVar2 = (ulong)(byte)pcVar8[0x17];
    }
    goto LAB_0061fb54;
  case 0xb:
    uVar1 = *(uint *)(param_1 + 3);
    if (((int)uVar1 < 0) && (*(uint *)(param_1 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
      puVar7 = (undefined8 *)(param_1[1] + (long)(int)uVar1);
    }
    else {
      puVar7 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar7 + 1);
    }
    __s = *(char **)*puVar7;
    sVar2 = ((undefined8 *)*puVar7)[1];
LAB_0061fb54:
    FUN_00547cac(param_3,__s,sVar2);
    goto LAB_0061fb84;
  case 0xc:
    uVar1 = *(uint *)(param_1 + 3);
    if (((int)uVar1 < 0) && (*(uint *)(param_1 + 3) = uVar1 + 8, uVar1 < 0xfffffff9)) {
      puVar7 = (undefined8 *)(param_1[1] + (long)(int)uVar1);
    }
    else {
      puVar7 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar7 + 1);
    }
    uVar4 = *puVar7;
    puVar3 = &DAT_001e770a;
    break;
  default:
    FUN_00547cac(param_3,"[Invalid CheckArgType]",0x16);
    uVar5 = 0;
    goto code_r0x0061fb98;
  }
  FUN_0061fbc4(param_3,puVar3,uVar4);
LAB_0061fb84:
  *param_2 = *param_2 + 1;
  uVar5 = 1;
code_r0x0061fb98:
  return uVar5;
}


// ===== 0061fbc4  FUN_0061fbc4 =====

ulong FUN_0061fbc4(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 *local_d0;
  undefined1 **ppuStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined1 **ppuStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined1 **ppuStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  
  uStack_98 = 0xffffff80ffffffd0;
  uStack_78 = 0xffffff80ffffffd0;
  local_100 = param_3;
  uStack_f8 = param_4;
  local_f0 = param_5;
  uStack_e8 = param_6;
  local_e0 = param_7;
  uStack_d8 = param_8;
  local_b0 = (undefined1 *)register0x00000008;
  ppuStack_a8 = &local_d0;
  puStack_a0 = &local_100;
  local_90 = (undefined1 *)register0x00000008;
  ppuStack_88 = &local_d0;
  puStack_80 = &local_100;
  uVar1 = vsnprintf((char *)0x0,0,param_2,&local_b0);
  uVar4 = (ulong)uVar1;
  if ((int)uVar1 < 1) {
    return uVar4;
  }
  uVar5 = (ulong)*(char *)((long)param_1 + 0x17);
  if ((long)uVar5 < 0) {
    uVar5 = param_1[1];
    uVar4 = uVar5 + uVar4;
    if (uVar5 < uVar4) {
      uVar3 = (uint)(byte)((ulong)param_1[2] >> 0x38);
      lVar2 = (param_1[2] & 0x7fffffffffffffff) - 1;
      goto LAB_0061fc9c;
    }
    puVar6 = (undefined8 *)*param_1;
  }
  else {
    uVar4 = uVar5 + uVar4;
    lVar2 = 0x16;
    uVar3 = (uint)*(char *)((long)param_1 + 0x17);
LAB_0061fc9c:
    if (lVar2 - uVar5 < uVar4 - uVar5) {
      FUN_0054774c(param_1,lVar2,uVar4 - lVar2,uVar5,uVar5,0,0);
      uVar3 = (uint)*(byte *)((long)param_1 + 0x17);
      param_1[1] = uVar5;
    }
    puVar6 = param_1;
    if ((uVar3 >> 7 & 1) != 0) {
      puVar6 = (undefined8 *)*param_1;
    }
    memset((void *)((long)puVar6 + uVar5),0,uVar4 - uVar5);
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      *(byte *)((long)param_1 + 0x17) = (byte)uVar4 & 0x7f;
      goto LAB_0061fd08;
    }
  }
  param_1[1] = uVar4;
LAB_0061fd08:
  *(undefined1 *)((long)puVar6 + uVar4) = 0;
  uVar4 = (ulong)*(char *)((long)param_1 + 0x17);
  if ((long)uVar4 < 0) {
    uVar4 = param_1[1];
  }
  if (uVar5 <= uVar4) {
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      param_1 = (undefined8 *)*param_1;
    }
    uStack_b8 = 0xffffff80ffffffd0;
    local_d0 = (undefined1 *)register0x00000008;
    ppuStack_c8 = &local_d0;
    puStack_c0 = &local_100;
    uVar1 = vsnprintf((char *)((long)param_1 + uVar5),(long)(int)(uVar1 + 1),param_2,&local_d0);
    return (ulong)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/string:1360: libc++ Hardening assertion __pos <= size() failed: string index out of bounds\n"
            );
}


// ===== 0061fd88  FUN_0061fd88 =====

/* WARNING: Removing unreachable block (ram,0x0061feb4) */
/* WARNING: Removing unreachable block (ram,0x0061fecc) */

void FUN_0061fd88(undefined8 param_1,undefined4 param_2,undefined8 param_3,char *param_4)

{
  undefined8 ***pppuVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 **local_78;
  ulong uStack_70;
  ulong local_68;
  char *local_28;
  
  local_78 = (undefined8 ***)0x0;
  uStack_70 = 0;
  local_68 = 0;
  local_28 = param_4;
  puVar2 = (undefined4 *)__errno();
  FUN_0061fbc4(&local_78,
               "\n\n#\n# Fatal error in: %s, line %d\n# last system error: %u\n# Check failed: %s",
               param_1,param_2,*puVar2,param_3);
  if (*param_4 == '\r') {
    local_28 = param_4 + 1;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uVar3 = FUN_0061f7a4(&stack0xffffffffffffffa0,&local_28,&local_90);
    if ((uVar3 & 1) != 0) {
      uVar3 = FUN_0061f7a4(&stack0xffffffffffffffa0,&local_28,&local_a8);
      if ((uVar3 & 1) != 0) {
        FUN_0061fbc4(&local_78," (%s vs. %s)\n# ",&local_90,&local_a8);
      }
    }
  }
  else {
    FUN_00547cac(&local_78,&DAT_0019a219,3);
  }
  do {
    uVar3 = FUN_0061f7a4(&stack0xffffffffffffffa0,&local_28,&local_78);
  } while ((uVar3 & 1) != 0);
  uVar3 = uStack_70;
  pppuVar1 = (undefined8 ***)local_78;
  if (-1 < (long)local_68) {
    uVar3 = local_68 >> 0x38;
    pppuVar1 = &local_78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061f638(pppuVar1,uVar3);
}


// ===== 0061ff28  FUN_0061ff28 =====

void FUN_0061ff28(void)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined4 *puVar3;
  undefined8 **local_38;
  ulong uStack_30;
  ulong local_28;
  
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_28 = 0;
  puVar3 = (undefined4 *)__errno();
  FUN_0061fbc4(&local_38,
               "\n\n#\n# Unreachable code reached (file and line unknown)\n# last system error: %u\n# "
               ,*puVar3);
  uVar1 = uStack_30;
  pppuVar2 = (undefined8 ***)local_38;
  if (-1 < (long)local_28) {
    uVar1 = local_28 >> 0x38;
    pppuVar2 = &local_38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061f638(pppuVar2,uVar1);
}


// ===== 0061ff7c  thunk_FUN_00547cac =====

void thunk_FUN_00547cac(void)

{
  FUN_00547cac();
  return;
}


// ===== 0061ff84  FUN_0061ff84 =====

bool FUN_0061ff84(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  
  if (param_2 == param_4) {
    iVar1 = FUN_00620058(param_1,param_3,param_2);
    return iVar1 == 0;
  }
  return false;
}


// ===== 0061ffc8  FUN_0061ffc8 =====

bool FUN_0061ffc8(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  
  if (param_2 < param_4) {
    return false;
  }
  iVar1 = FUN_00620058(param_1,param_3,param_4);
  return iVar1 == 0;
}


// ===== 00620008  FUN_00620008 =====

void FUN_00620008(long *param_1,long param_2,long param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
              );
  }
  if ((param_2 == 0) && (param_3 != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
              );
  }
  return;
}


// ===== 00620058  FUN_00620058 =====

int FUN_00620058(byte *param_1,byte *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  
  if (param_3 != 0) {
    do {
      bVar3 = *param_1;
      bVar4 = *param_2;
      if ((uint)bVar3 != (uint)bVar4) {
        uVar1 = bVar3 + 0x20;
        if (0x19 < bVar3 - 0x41) {
          uVar1 = (uint)bVar3;
        }
        uVar2 = bVar4 + 0x20;
        if (0x19 < bVar4 - 0x41) {
          uVar2 = (uint)bVar4;
        }
        iVar5 = (uVar1 & 0xff) - (uVar2 & 0xff);
        if (iVar5 != 0) {
          return iVar5;
        }
      }
      param_3 = param_3 + -1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return 0;
}


// ===== 006200b8  FUN_006200b8 =====

void FUN_006200b8(uint param_1,short *param_2)

{
  *param_2 = (short)param_1 * 0x100 + (short)((ulong)param_1 * 0x67 >> 10) * -0x9ff + 0x3030;
  return;
}


// ===== 006200e4  FUN_006200e4 =====

void FUN_006200e4(uint param_1,ulong *param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 < 10) {
    *(byte *)param_2 = (byte)param_1 | 0x30;
    *(byte *)((long)param_2 + 1) = 0;
    return;
  }
  if (param_1 < 100000000) {
    uVar3 = (ulong)param_1 / 10000 | (ulong)(param_1 % 10000) << 0x20;
    lVar1 = uVar3 * 0x10000 + (uVar3 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
    uVar3 = lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff;
    uVar4 = (uVar3 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar3 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar4 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20);
    *param_2 = uVar3 + 0x3030303030303030 >> (uVar4 & 0x38);
    *(byte *)((long)param_2 + (8 - (uVar4 >> 3))) = 0;
    return;
  }
  uVar3 = (ulong)(param_1 % 100000000) / 10000 | (ulong)((param_1 % 100000000) % 10000) << 0x20;
  lVar1 = uVar3 * 0x10000 + (uVar3 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
  uVar2 = (int)(param_1 / 100000000 - 10) >> 8;
  *(short *)param_2 =
       (short)((param_1 / 1000000000 | (param_1 / 100000000 + (param_1 / 1000000000) * -10) * 0x100)
               + 0x3030 >> (ulong)(uVar2 & 8));
  *(ulong *)((long)param_2 + (long)(int)uVar2 + 2) =
       lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff + 0x3030303030303030
  ;
  *(byte *)((long)param_2 + (long)(int)uVar2 + 10) = 0;
  return;
}


// ===== 0062024c  FUN_0062024c =====

void FUN_0062024c(uint param_1,ulong *param_2)

{
  long lVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((int)param_1 < 0) {
    param_1 = -param_1;
    puVar3 = (ulong *)((long)param_2 + 1);
    *(byte *)param_2 = 0x2d;
    if (9 < param_1) goto LAB_00620288;
  }
  else {
    puVar3 = param_2;
    if (9 < param_1) {
LAB_00620288:
      if (param_1 < 100000000) {
        uVar4 = (ulong)param_1 / 10000 | (ulong)(param_1 % 10000) << 0x20;
        lVar1 = uVar4 * 0x10000 + (uVar4 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
        uVar4 = lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff;
        uVar5 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
        *puVar3 = uVar4 + 0x3030303030303030 >> (uVar5 & 0x38);
        *(byte *)((long)puVar3 + (8 - (uVar5 >> 3))) = 0;
        return;
      }
      uVar4 = (ulong)(param_1 % 100000000) / 10000 | (ulong)((param_1 % 100000000) % 10000) << 0x20;
      lVar1 = uVar4 * 0x10000 + (uVar4 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
      uVar2 = (int)(param_1 / 100000000 - 10) >> 8;
      *(short *)puVar3 =
           (short)((param_1 / 1000000000 |
                   (param_1 / 100000000 + (param_1 / 1000000000) * -10) * 0x100) + 0x3030 >>
                  (ulong)(uVar2 & 8));
      *(ulong *)((long)puVar3 + (long)(int)uVar2 + 2) =
           lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff +
           0x3030303030303030;
      *(byte *)((long)puVar3 + (long)(int)uVar2 + 10) = 0;
      return;
    }
  }
  *(byte *)puVar3 = (byte)param_1 | 0x30;
  *(byte *)((long)puVar3 + 1) = 0;
  return;
}


// ===== 006203cc  FUN_006203cc =====

void FUN_006203cc(ulong param_1,ulong *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar5 = (int)param_1;
  if (param_1 >> 0x20 != 0) {
    uVar3 = param_1 / 100000000;
    if (param_1 < 10000000000000000) {
      uVar6 = uVar3 * 0xd1b71759 >> 0x2d |
              (ulong)((int)uVar3 + (uint)(uVar3 * 0xd1b71759 >> 0x2d) * -10000) << 0x20;
      lVar1 = uVar6 * 0x10000 + (uVar6 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
      uVar6 = lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff;
      uVar7 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
      *param_2 = uVar6 + 0x3030303030303030 >> (uVar7 & 0x38);
      lVar2 = 8 - (uVar7 >> 3);
    }
    else {
      uVar6 = uVar3 % 100000000;
      uVar6 = uVar6 / 10000 | (ulong)(uint)((int)uVar6 + (int)(uVar6 / 10000) * -10000) << 0x20;
      uVar8 = (uint)(param_1 / 10000000000000000);
      uVar8 = uVar8 / 100 | (uVar8 % 100) * 0x10000;
      lVar1 = uVar6 * 0x10000 + (uVar6 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
      uVar8 = uVar8 * 0x100 + (uVar8 * 0x67 >> 10 & 0xf000f) * -0x9ff;
      uVar4 = (uVar8 & 0xaaaaaaaa) >> 1 | (uVar8 & 0x55555555) << 1;
      uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      uVar9 = (uint)LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
      uVar4 = uVar9 >> 3;
      *(uint *)param_2 = uVar8 + 0x30303030 >> (ulong)(uVar9 & 0x18);
      lVar2 = 0xc - (ulong)uVar4;
      *(ulong *)((long)param_2 + (4 - (ulong)uVar4)) =
           lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff +
           0x3030303030303030;
    }
    uVar8 = iVar5 + (int)uVar3 * -100000000;
    uVar3 = (ulong)uVar8 / 10000 | (ulong)(uVar8 % 10000) << 0x20;
    lVar1 = uVar3 * 0x10000 + (uVar3 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
    *(long *)((long)param_2 + lVar2) =
         lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff +
         0x3030303030303030;
    *(undefined1 *)((long *)((long)param_2 + lVar2) + 1) = 0;
    return;
  }
  if (param_1 < 10) {
    *(byte *)param_2 = (byte)param_1 | 0x30;
    *(undefined1 *)((long)param_2 + 1) = 0;
    return;
  }
  if (param_1 < 100000000) {
    uVar3 = (param_1 & 0xffffffff) / 10000 |
            (ulong)(uint)(iVar5 + (int)((param_1 & 0xffffffff) / 10000) * -10000) << 0x20;
    lVar1 = uVar3 * 0x10000 + (uVar3 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
    uVar3 = lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff;
    uVar6 = (uVar3 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar3 & 0x5555555555555555) << 1;
    uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
    uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20);
    *param_2 = uVar3 + 0x3030303030303030 >> (uVar6 & 0x38);
    *(undefined1 *)((long)param_2 + (8 - (uVar6 >> 3))) = 0;
    return;
  }
  uVar4 = (uint)((param_1 & 0xffffffff) / 100000000);
  uVar8 = iVar5 + uVar4 * -100000000;
  uVar3 = (ulong)uVar8 / 10000 | (ulong)(uVar8 % 10000) << 0x20;
  lVar1 = uVar3 * 0x10000 + (uVar3 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
  uVar4 = uVar4 / 10;
  iVar5 = (int)((param_1 & 0xffffffff) / 100000000);
  uVar8 = iVar5 + -10 >> 8;
  *(short *)param_2 =
       (short)((uVar4 | (iVar5 + uVar4 * -10) * 0x100) + 0x3030 >> (ulong)(uVar8 & 8));
  *(ulong *)((long)param_2 + (long)(int)uVar8 + 2) =
       lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff + 0x3030303030303030
  ;
  *(undefined1 *)((long)param_2 + (long)(int)uVar8 + 10) = 0;
  return;
}


// ===== 00620744  FUN_00620744 =====

void FUN_00620744(ulong param_1,ulong *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((long)param_1 < 0) {
    param_1 = -param_1;
    *(undefined1 *)param_2 = 0x2d;
    uVar3 = param_1 >> 0x20;
    param_2 = (ulong *)((long)param_2 + 1);
  }
  else {
    uVar3 = param_1 >> 0x20;
  }
  if (uVar3 != 0) {
    uVar3 = param_1 / 100000000;
    if (param_1 < 10000000000000000) {
      uVar3 = uVar3 * 0xd1b71759 >> 0x2d |
              (ulong)((int)uVar3 + (uint)(uVar3 * 0xd1b71759 >> 0x2d) * -10000) << 0x20;
      lVar1 = uVar3 * 0x10000 + (uVar3 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
      uVar3 = lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff;
      uVar6 = (uVar3 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar3 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20);
      *param_2 = uVar3 + 0x3030303030303030 >> (uVar6 & 0x38);
      lVar2 = 8 - (uVar6 >> 3);
    }
    else {
      uVar3 = uVar3 % 100000000;
      uVar3 = uVar3 / 10000 | (ulong)(uint)((int)uVar3 + (int)(uVar3 / 10000) * -10000) << 0x20;
      uVar7 = (uint)(param_1 / 10000000000000000);
      uVar7 = uVar7 / 100 | (uVar7 % 100) * 0x10000;
      lVar1 = uVar3 * 0x10000 + (uVar3 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
      uVar7 = uVar7 * 0x100 + (uVar7 * 0x67 >> 10 & 0xf000f) * -0x9ff;
      uVar4 = (uVar7 & 0xaaaaaaaa) >> 1 | (uVar7 & 0x55555555) << 1;
      uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      uVar8 = (uint)LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
      uVar4 = uVar8 >> 3;
      *(uint *)param_2 = uVar7 + 0x30303030 >> (ulong)(uVar8 & 0x18);
      lVar2 = 0xc - (ulong)uVar4;
      *(ulong *)((long)param_2 + (4 - (ulong)uVar4)) =
           lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff +
           0x3030303030303030;
    }
    param_1 = param_1 % 100000000;
    uVar3 = param_1 / 10000 | (ulong)(uint)((int)param_1 + (int)(param_1 / 10000) * -10000) << 0x20;
    lVar1 = uVar3 * 0x10000 + (uVar3 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
    *(long *)((long)param_2 + lVar2) =
         lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff +
         0x3030303030303030;
    *(undefined1 *)((long *)((long)param_2 + lVar2) + 1) = 0;
    return;
  }
  if (param_1 < 10) {
    *(byte *)param_2 = (byte)param_1 | 0x30;
    *(undefined1 *)((long)param_2 + 1) = 0;
    return;
  }
  if (99999999 < param_1) {
    uVar4 = (uint)((param_1 & 0xffffffff) / 100000000);
    uVar7 = (int)param_1 + uVar4 * -100000000;
    uVar3 = (ulong)uVar7 / 10000 | (ulong)(uVar7 % 10000) << 0x20;
    lVar1 = uVar3 * 0x10000 + (uVar3 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
    uVar4 = uVar4 / 10;
    iVar5 = (int)((param_1 & 0xffffffff) / 100000000);
    uVar7 = iVar5 + -10 >> 8;
    *(short *)param_2 =
         (short)((uVar4 | (iVar5 + uVar4 * -10) * 0x100) + 0x3030 >> (ulong)(uVar7 & 8));
    *(ulong *)((long)param_2 + (long)(int)uVar7 + 2) =
         lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff +
         0x3030303030303030;
    *(undefined1 *)((long)param_2 + (long)(int)uVar7 + 10) = 0;
    return;
  }
  uVar3 = (param_1 & 0xffffffff) / 10000 |
          (ulong)(uint)((int)param_1 + (int)((param_1 & 0xffffffff) / 10000) * -10000) << 0x20;
  lVar1 = uVar3 * 0x10000 + (uVar3 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
  uVar3 = lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff;
  uVar6 = (uVar3 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar3 & 0x5555555555555555) << 1;
  uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
  uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
  uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
  uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20);
  *param_2 = uVar3 + 0x3030303030303030 >> (uVar6 & 0x38);
  *(undefined1 *)((long)param_2 + (8 - (uVar6 >> 3))) = 0;
  return;
}


// ===== 00620ad8  FUN_00620ad8 =====

long * FUN_00620ad8(ulong param_1,ulong param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  
  if (param_2 == 0) {
    iVar10 = (int)param_1;
    if (param_1 >> 0x20 == 0) {
      if (param_1 < 10) {
        plVar14 = (long *)((long)param_3 + 1);
        *(byte *)param_3 = (byte)param_1 | 0x30;
      }
      else if (param_1 < 100000000) {
        uVar6 = (param_1 & 0xffffffff) / 10000 |
                (ulong)(uint)(iVar10 + (int)((param_1 & 0xffffffff) / 10000) * -10000) << 0x20;
        lVar1 = uVar6 * 0x10000 + (uVar6 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
        uVar6 = lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff;
        uVar16 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
        *param_3 = uVar6 + 0x3030303030303030 >> (uVar16 & 0x38);
        plVar14 = (long *)((long)param_3 + (8 - (uVar16 >> 3)));
      }
      else {
        uVar9 = (uint)((param_1 & 0xffffffff) / 100000000);
        uVar5 = iVar10 + uVar9 * -100000000;
        uVar6 = (ulong)uVar5 / 10000 | (ulong)(uVar5 % 10000) << 0x20;
        lVar1 = uVar6 * 0x10000 + (uVar6 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
        uVar9 = uVar9 / 10;
        iVar10 = (int)((param_1 & 0xffffffff) / 100000000);
        uVar5 = iVar10 + -10 >> 8;
        *(short *)param_3 =
             (short)((uVar9 | (iVar10 + uVar9 * -10) * 0x100) + 0x3030 >> (ulong)(uVar5 & 8));
        plVar14 = (long *)((long)param_3 + (long)(int)uVar5 + 10);
        *(ulong *)((long)param_3 + (long)(int)uVar5 + 2) =
             lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff +
             0x3030303030303030;
      }
    }
    else {
      uVar6 = param_1 / 100000000;
      if (param_1 < 10000000000000000) {
        uVar16 = (uVar6 & 0xffffffff) / 10000 |
                 (ulong)(uint)((int)uVar6 + (int)((uVar6 & 0xffffffff) / 10000) * -10000) << 0x20;
        lVar1 = uVar16 * 0x10000 + (uVar16 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
        uVar16 = lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff;
        uVar7 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
        *param_3 = uVar16 + 0x3030303030303030 >> (uVar7 & 0x38);
        lVar4 = 8 - (uVar7 >> 3);
      }
      else {
        uVar16 = uVar6 % 100000000;
        uVar16 = uVar16 / 10000 |
                 (ulong)(uint)((int)uVar16 + (int)(uVar16 / 10000) * -10000) << 0x20;
        uVar5 = (uint)(param_1 / 10000000000000000);
        uVar5 = uVar5 / 100 | (uVar5 % 100) * 0x10000;
        lVar1 = uVar16 * 0x10000 + (uVar16 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
        uVar5 = uVar5 * 0x100 + (uVar5 * 0x67 >> 10 & 0xf000f) * -0x9ff;
        uVar9 = (uVar5 & 0xaaaaaaaa) >> 1 | (uVar5 & 0x55555555) << 1;
        uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
        uVar11 = (uint)LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10);
        uVar9 = uVar11 >> 3;
        *(uint *)param_3 = uVar5 + 0x30303030 >> (ulong)(uVar11 & 0x18);
        lVar4 = 0xc - (ulong)uVar9;
        *(ulong *)((long)param_3 + (4 - (ulong)uVar9)) =
             lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff +
             0x3030303030303030;
      }
      uVar5 = iVar10 + (int)uVar6 * -100000000;
      uVar6 = (ulong)uVar5 / 10000 | (ulong)(uVar5 % 10000) << 0x20;
      lVar1 = uVar6 * 0x10000 + (uVar6 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
      plVar14 = (long *)((long)param_3 + lVar4) + 1;
      *(long *)((long)param_3 + lVar4) =
           lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff +
           0x3030303030303030;
    }
  }
  else {
    auVar17 = FUN_00d0f14c(param_1,param_2,10000000000000000,0);
    uVar16 = param_1 + auVar17._0_8_ * -10000000000000000;
    uVar6 = FUN_00d0f158(auVar17._0_8_,auVar17._8_8_,10000000000000000,0);
    if (~param_2 < 0xfffffb11d292bea5 &&
        !CARRY8(~param_2 + 0x4ee2d6d415b,(ulong)(param_1 < 0x85acef8100000000))) {
      uVar5 = FUN_00d0f14c(param_1,param_2,0x85acef8100000000,0x4ee2d6d415b);
      if (uVar5 < 10) {
        plVar14 = (long *)((long)param_3 + 1);
        *(byte *)param_3 = (byte)uVar5 | 0x30;
      }
      else {
        uVar7 = (ulong)uVar5 / 10000 | (ulong)(uVar5 % 10000) << 0x20;
        lVar1 = uVar7 * 0x10000 + (uVar7 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
        uVar7 = lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff;
        uVar8 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20);
        *param_3 = uVar7 + 0x3030303030303030 >> (uVar8 & 0x38);
        plVar14 = (long *)((long)param_3 + (8 - (uVar8 >> 3)));
      }
      uVar12 = uVar16 / 100000000 & 0xffffffff;
      uVar8 = uVar6 % 100000000;
      uVar7 = uVar16 % 100000000;
      uVar13 = (uVar6 / 100000000) * 0xd1b71759;
      uVar16 = uVar12 / 10000 |
               (ulong)(uint)((int)(uVar16 / 100000000) + (int)(uVar12 / 10000) * -10000) << 0x20;
      uVar6 = uVar13 >> 0x2d |
              (ulong)((int)(uVar6 / 100000000) + (uint)(uVar13 >> 0x2d) * -10000) << 0x20;
      uVar8 = uVar8 / 10000 | (ulong)(uint)((int)uVar8 + (int)(uVar8 / 10000) * -10000) << 0x20;
      uVar7 = uVar7 / 10000 | (ulong)(uint)((int)uVar7 + (int)(uVar7 / 10000) * -10000) << 0x20;
      lVar1 = uVar16 * 0x10000 + (uVar16 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
      lVar4 = uVar6 * 0x10000 + (uVar6 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
      lVar2 = uVar8 * 0x10000 + (uVar8 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
      lVar3 = uVar7 * 0x10000 + (uVar7 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
      *plVar14 = lVar4 * 0x100 + ((ulong)(lVar4 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff +
                 0x3030303030303030;
      plVar14[1] = lVar2 * 0x100 + ((ulong)(lVar2 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff +
                   0x3030303030303030;
      plVar14[2] = lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff +
                   0x3030303030303030;
      plVar14[3] = lVar3 * 0x100 + ((ulong)(lVar3 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff +
                   0x3030303030303030;
      plVar14 = plVar14 + 4;
    }
    else {
      if (uVar6 >> 0x20 == 0) {
        uVar5 = (uint)uVar6;
        if (uVar5 < 10) {
          plVar15 = (long *)((long)param_3 + 1);
          *(byte *)param_3 = (byte)uVar6 | 0x30;
        }
        else if (uVar5 < 100000000) {
          uVar6 = (uVar6 & 0xffffffff) / 10000 |
                  (ulong)(uVar5 + (int)((uVar6 & 0xffffffff) / 10000) * -10000) << 0x20;
          lVar1 = uVar6 * 0x10000 + (uVar6 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
          uVar6 = lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff;
          uVar7 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
          *param_3 = uVar6 + 0x3030303030303030 >> (uVar7 & 0x38);
          plVar15 = (long *)((long)param_3 + (8 - (uVar7 >> 3)));
        }
        else {
          uVar9 = (uint)((uVar6 & 0xffffffff) / 100000000);
          uVar5 = uVar5 + uVar9 * -100000000;
          uVar7 = (ulong)uVar5 / 10000 | (ulong)(uVar5 % 10000) << 0x20;
          lVar1 = uVar7 * 0x10000 + (uVar7 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
          uVar9 = uVar9 / 10;
          iVar10 = (int)((uVar6 & 0xffffffff) / 100000000);
          uVar5 = iVar10 + -10 >> 8;
          *(short *)param_3 =
               (short)((uVar9 | (iVar10 + uVar9 * -10) * 0x100) + 0x3030 >> (ulong)(uVar5 & 8));
          plVar15 = (long *)((long)param_3 + (long)(int)uVar5 + 10);
          *(ulong *)((long)param_3 + (long)(int)uVar5 + 2) =
               lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff +
               0x3030303030303030;
        }
      }
      else {
        uVar7 = FUN_00621c80(uVar6 / 100000000 & 0xffffffff);
        uVar6 = uVar6 % 100000000;
        uVar8 = uVar6 / 10000 | (ulong)(uint)((int)uVar6 + (int)(uVar6 / 10000) * -10000) << 0x20;
        uVar6 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20);
        lVar1 = uVar8 * 0x10000 + (uVar8 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
        *param_3 = uVar7 + 0x3030303030303030 >> (uVar6 & 0x38);
        uVar6 = uVar6 >> 3;
        plVar15 = (long *)((long)param_3 + (0x10 - uVar6));
        *(ulong *)((long)param_3 + (8 - uVar6)) =
             lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff +
             0x3030303030303030;
      }
      uVar6 = uVar16 / 100000000 & 0xffffffff;
      uVar7 = uVar16 % 100000000;
      uVar6 = uVar6 / 10000 |
              (ulong)(uint)((int)(uVar16 / 100000000) + (int)(uVar6 / 10000) * -10000) << 0x20;
      uVar16 = uVar7 / 10000 | (ulong)(uint)((int)uVar7 + (int)(uVar7 / 10000) * -10000) << 0x20;
      lVar1 = uVar6 * 0x10000 + (uVar6 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
      lVar4 = uVar16 * 0x10000 + (uVar16 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
      plVar14 = plVar15 + 2;
      *plVar15 = lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff +
                 0x3030303030303030;
      plVar15[1] = lVar4 * 0x100 + ((ulong)(lVar4 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff +
                   0x3030303030303030;
    }
  }
  *(undefined1 *)plVar14 = 0;
  return plVar14;
}


// ===== 00621398  FUN_00621398 =====

undefined1 * FUN_00621398(double param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  uint uVar9;
  double dVar10;
  uint *puVar11;
  uint *puVar12;
  char cVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  undefined1 uVar17;
  ulong uVar18;
  ulong uVar19;
  short *psVar20;
  undefined4 *puVar21;
  uint uVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 local_60 [6];
  undefined2 uStack_5a;
  undefined2 uStack_58;
  int iStack_54;
  
  if (NAN(param_1)) {
    *param_2 = 0x6e616e;
    return (undefined1 *)0x3;
  }
  if (param_1 == 0.0) {
    puVar11 = param_2;
    if ((long)param_1 < 0) {
      puVar11 = (uint *)((long)param_2 + 1);
      *(undefined1 *)param_2 = 0x2d;
    }
    *(undefined2 *)puVar11 = 0x30;
    return (undefined1 *)((long)puVar11 + (1 - (long)param_2));
  }
  puVar11 = param_2;
  if (param_1 < 0.0) {
    param_1 = -param_1;
    *(undefined1 *)param_2 = 0x2d;
    puVar11 = (uint *)((long)param_2 + 1);
  }
  if (param_1 != 1.79769313486232e+308 && param_1 < 1.79769313486232e+308 == NAN(param_1)) {
    *puVar11 = 0x666e69;
    return (undefined1 *)((long)puVar11 + (3 - (long)param_2));
  }
  uVar15 = 5;
  if (param_1 < 999999.5 == NAN(param_1)) {
    dVar24 = param_1;
    if (param_1 < DAT_001f57e8 == (NAN(param_1) || NAN(DAT_001f57e8))) {
      uVar15 = 0x105;
      dVar24 = param_1 * DAT_001f5a10;
    }
    dVar23 = dVar24;
    if (dVar24 < DAT_001f5b50 == (NAN(dVar24) || NAN(DAT_001f5b50))) {
      dVar23 = dVar24 * DAT_001f5cf0;
    }
    if (dVar24 < DAT_001f5b50 == (NAN(dVar24) || NAN(DAT_001f5b50))) {
      uVar15 = uVar15 | 0x80;
    }
    dVar24 = dVar23;
    if (dVar23 < DAT_001f5308 == (NAN(dVar23) || NAN(DAT_001f5308))) {
      dVar24 = dVar23 * DAT_001f5a18;
    }
    if (dVar23 < DAT_001f5308 == (NAN(dVar23) || NAN(DAT_001f5308))) {
      uVar15 = uVar15 | 0x40;
    }
    dVar23 = dVar24;
    if (dVar24 < DAT_001f5348 == (NAN(dVar24) || NAN(DAT_001f5348))) {
      dVar23 = dVar24 * DAT_001f56a8;
    }
    if (dVar24 < DAT_001f5348 == (NAN(dVar24) || NAN(DAT_001f5348))) {
      uVar15 = uVar15 | 0x20;
    }
    dVar24 = dVar23;
    if (dVar23 < DAT_001f5760 == (NAN(dVar23) || NAN(DAT_001f5760))) {
      dVar24 = dVar23 * DAT_001f5928;
    }
    if (dVar23 < DAT_001f5760 == (NAN(dVar23) || NAN(DAT_001f5760))) {
      uVar15 = uVar15 + 0x10;
    }
    if (dVar24 < DAT_001f5018 == (NAN(dVar24) || NAN(DAT_001f5018))) {
      dVar24 = dVar24 * DAT_001f5660;
      uVar15 = uVar15 + 8;
    }
    if (dVar24 < 1000000000.0 == NAN(dVar24)) {
      uVar15 = uVar15 + 4;
      dVar24 = dVar24 * DAT_001f4f18;
    }
    if (dVar24 < 10000000.0 == NAN(dVar24)) {
      uVar15 = uVar15 + 2;
      dVar24 = dVar24 * DAT_001f5338;
    }
    if (dVar24 < 1000000.0 == NAN(dVar24)) {
      uVar15 = uVar15 + 1;
      dVar23 = DAT_001f5930;
      goto LAB_006216d4;
    }
  }
  else {
    dVar24 = param_1 * DAT_001f51e0;
    if (DAT_001f5cf8 <= param_1) {
      dVar24 = param_1;
    }
    uVar22 = 0xffffff05;
    if (DAT_001f5cf8 <= param_1) {
      uVar22 = uVar15;
    }
    dVar23 = dVar24 * DAT_001f5768;
    if (DAT_001f5438 <= dVar24) {
      dVar23 = dVar24;
    }
    uVar15 = uVar22 - 0x80;
    if (DAT_001f5438 <= dVar24) {
      uVar15 = uVar22;
    }
    dVar24 = dVar23 * DAT_001f5938;
    if (DAT_001f5c00 <= dVar23) {
      dVar24 = dVar23;
    }
    uVar22 = uVar15 - 0x40;
    if (DAT_001f5c00 <= dVar23) {
      uVar22 = uVar15;
    }
    dVar23 = dVar24 * DAT_001f5c08;
    if (DAT_001f5020 <= dVar24) {
      dVar23 = dVar24;
    }
    uVar15 = uVar22 - 0x20;
    if (DAT_001f5020 <= dVar24) {
      uVar15 = uVar22;
    }
    dVar24 = dVar23 * DAT_001f5770;
    uVar22 = uVar15 - 0x10;
    if (DAT_001f57f0 <= dVar23) {
      dVar24 = dVar23;
      uVar22 = uVar15;
    }
    dVar23 = dVar24 * 100000000.0;
    uVar15 = uVar22 - 8;
    if (DAT_001f5338 <= dVar24) {
      dVar23 = dVar24;
      uVar15 = uVar22;
    }
    uVar22 = uVar15 - 4;
    dVar10 = dVar23 * 10000.0;
    if (100.0 <= dVar23) {
      uVar22 = uVar15;
      dVar10 = dVar23;
    }
    dVar24 = dVar10 * 100.0;
    uVar15 = uVar22 - 2;
    if (10000.0 <= dVar10) {
      dVar24 = dVar10;
      uVar15 = uVar22;
    }
    if (dVar24 < 100000.0) {
      uVar15 = uVar15 - 1;
      dVar23 = 10.0;
LAB_006216d4:
      dVar24 = dVar24 * dVar23;
    }
  }
  uVar18 = (ulong)(dVar24 * 65536.0);
  puVar21 = (undefined4 *)((ulong)local_60 | 5);
  if ((uVar18 & 0xffff) - 0x7fff < 2) {
    uVar22 = (uint)(uVar18 >> 0x10);
    dVar24 = frexp(param_1,&iStack_54);
    uVar18 = uVar18 >> 0xf & 0xfffffffe | 1;
    uVar19 = (long)(dVar24 * -9.223372036854776e+18) << 1;
    if ((int)uVar15 < 6) {
      auVar26 = FUN_00621cdc(uVar19,5 - uVar15);
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar18 << (LZCOUNT(uVar18) & 0x3fU);
    }
    else {
      auVar25 = FUN_00621cdc(uVar18,uVar15 - 5);
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar19;
    }
    bVar1 = auVar25._8_8_ < auVar26._8_8_;
    if (auVar26._0_8_ != auVar25._0_8_) {
      bVar1 = auVar25._0_8_ < auVar26._0_8_;
    }
    if (bVar1) {
      uVar22 = uVar22 + 1;
    }
    else if (auVar26 == auVar25) {
      uVar22 = (uVar22 & 1) + uVar22;
    }
  }
  else {
    uVar22 = (uint)(uVar18 + 0x8000 >> 0x10);
  }
  uVar2 = 100000;
  if (uVar22 != 1000000) {
    uVar2 = uVar22;
  }
  uVar9 = uVar2 % 10000;
  uVar2 = (uVar2 / 10000) * 0x100 + ((uVar2 / 10000) * 0x67 >> 10) * 0xf601 + 0x3030;
  uVar5 = uVar2 & 0xffff;
  uVar16 = (uVar9 % 100) / 10;
  uVar3 = uVar16 + 0x3030;
  uVar4 = (uVar9 / 100) * 0x100 + (int)((ulong)(uVar9 / 100) * 0x67 >> 10) * 0xf601 + 0x3030;
  uVar9 = uVar3 + (uVar9 % 100 + uVar16 * 0xf6) * 0x100;
  if (uVar22 == 1000000) {
    uVar15 = uVar15 + 1;
  }
  uStack_5a = (undefined2)uVar4;
  uStack_58 = (undefined2)uVar9;
  *(undefined2 *)puVar11 = 0x2e30;
  uVar17 = (undefined1)uVar5;
  if (9 < uVar15 + 4) {
    uVar6 = *puVar21;
    uVar7 = *(undefined1 *)(puVar21 + 1);
    *(undefined1 *)puVar11 = uVar17;
    *(undefined4 *)((long)puVar11 + 2) = uVar6;
    *(undefined1 *)((long)puVar11 + 6) = uVar7;
    puVar11 = puVar11 + 2;
    do {
      puVar14 = puVar11;
      puVar11 = (uint *)((long)puVar14 + -1);
    } while (*(char *)((long)puVar14 + -2) == '0');
    if (*(char *)((long)puVar14 + -2) == '.') {
      puVar11 = (uint *)((long)puVar14 + -2);
    }
    uVar22 = -uVar15;
    if (-1 < (int)uVar15) {
      uVar22 = uVar15;
    }
    *(undefined1 *)puVar11 = 0x65;
    uVar17 = 0x2b;
    if ((int)uVar15 < 1) {
      uVar17 = 0x2d;
    }
    *(undefined1 *)((long)puVar11 + 1) = uVar17;
    if (uVar22 < 100) {
      psVar20 = (short *)((long)puVar11 + 2);
    }
    else {
      psVar20 = (short *)((long)puVar11 + 3);
      uVar15 = (uVar22 >> 2 & 0x3fff) / 0x19;
      uVar22 = uVar22 + uVar15 * -100;
      *(char *)((long)puVar11 + 2) = (char)uVar15 + '0';
    }
    *psVar20 = (short)uVar22 * 0x100 + (short)((ulong)uVar22 * 0x67 >> 10) * -0x9ff + 0x3030;
    puVar14 = (uint *)(psVar20 + 1);
    *(undefined1 *)puVar14 = 0;
    goto LAB_00621b00;
  }
  uVar22 = uVar9 >> 8 & 0xff;
  puVar14 = (uint *)((ulong)local_60 | 4);
  uVar7 = (undefined1)(uVar9 >> 8);
  switch(uVar15) {
  case 0:
    uVar6 = *puVar21;
    uVar7 = *(undefined1 *)(puVar21 + 1);
    *(undefined1 *)puVar11 = uVar17;
    puVar12 = puVar11 + 2;
    *(undefined4 *)((long)puVar11 + 2) = uVar6;
    *(undefined1 *)((long)puVar11 + 6) = uVar7;
    do {
      cVar13 = *(char *)((long)puVar12 + -2);
      puVar12 = (uint *)((long)puVar12 + -1);
    } while (cVar13 == '0');
    break;
  case 1:
    *(undefined1 *)((long)puVar11 + 2) = 0x2e;
    *(short *)puVar11 = (short)uVar2;
    puVar12 = puVar11 + 2;
    *(uint *)((long)puVar11 + 3) = CONCAT22(uStack_58,uStack_5a);
    do {
      cVar13 = *(char *)((long)puVar12 + -2);
      puVar12 = (uint *)((long)puVar12 + -1);
    } while (cVar13 == '0');
    break;
  case 2:
    uVar15 = *puVar14;
    uVar17 = *(undefined1 *)((long)puVar14 + 2);
    *(undefined1 *)((long)puVar11 + 3) = 0x2e;
    uVar8 = *(undefined2 *)((ulong)local_60 | 7);
    *(undefined1 *)((long)puVar11 + 2) = uVar17;
    uVar17 = *(undefined1 *)((undefined2 *)((ulong)local_60 | 7) + 1);
    *(short *)puVar11 = (short)uVar15;
    puVar12 = puVar11 + 2;
    *(undefined2 *)(puVar11 + 1) = uVar8;
    *(undefined1 *)((long)puVar11 + 6) = uVar17;
    do {
      cVar13 = *(char *)((long)puVar12 + -2);
      puVar12 = (uint *)((long)puVar12 + -1);
    } while (cVar13 == '0');
    break;
  case 3:
    puVar14 = puVar11 + 1;
    *puVar11 = uVar5 | (uint)(((ulong)uVar4 << 0x30) >> 0x20);
    if ((uVar3 & 0xff | uVar22) == 0x30) {
      *(undefined1 *)puVar14 = 0;
      goto LAB_00621b00;
    }
    *(char *)((long)puVar11 + 5) = (char)uVar3;
    *(undefined1 *)(puVar11 + 1) = 0x2e;
    if (uVar22 == 0x30) {
      puVar14 = (uint *)((long)puVar11 + 6);
      *(undefined1 *)puVar14 = 0;
      goto LAB_00621b00;
    }
    *(undefined1 *)((long)puVar11 + 6) = uVar7;
    goto LAB_00621af8;
  case 4:
    uVar15 = puVar14[1];
    *puVar11 = *puVar14;
    *(char *)(puVar11 + 1) = (char)uVar15;
    if (uVar22 == 0x30) {
      puVar14 = (uint *)((long)puVar11 + 5);
      *(undefined1 *)puVar14 = 0;
      goto LAB_00621b00;
    }
    *(undefined1 *)((long)puVar11 + 6) = uVar7;
    *(undefined1 *)((long)puVar11 + 5) = 0x2e;
LAB_00621af8:
    puVar14 = (uint *)((long)puVar11 + 7);
    *(undefined1 *)puVar14 = 0;
    goto LAB_00621b00;
  case 5:
    uVar15 = puVar14[1];
    *puVar11 = *puVar14;
    *(short *)(puVar11 + 1) = (short)uVar15;
    puVar14 = (uint *)((long)puVar11 + 6);
    *(undefined1 *)puVar14 = 0;
    goto LAB_00621b00;
  case 0xfffffffc:
    *(undefined1 *)((long)puVar11 + 2) = 0x30;
    puVar11 = (uint *)((long)puVar11 + 1);
  case 0xfffffffd:
    *(undefined1 *)((long)puVar11 + 2) = 0x30;
    puVar11 = (uint *)((long)puVar11 + 1);
  case 0xfffffffe:
    goto code_r0x006218a0;
  case 0xffffffff:
    goto code_r0x006218b0;
  }
  puVar14 = (uint *)((long)puVar12 + -1);
  if (cVar13 != '.') {
    puVar14 = puVar12;
  }
  *(undefined1 *)puVar14 = 0;
LAB_00621b00:
  return (undefined1 *)((long)puVar14 - (long)param_2);
code_r0x006218a0:
  *(undefined1 *)((long)puVar11 + 2) = 0x30;
  puVar11 = (uint *)((long)puVar11 + 1);
code_r0x006218b0:
  uVar15 = *puVar14;
  *(short *)((long)puVar11 + 6) = (short)puVar14[1];
  *(uint *)((long)puVar11 + 2) = uVar15;
  puVar14 = (uint *)((long)puVar11 + 9);
  do {
    psVar20 = (short *)((long)puVar14 + -2);
    puVar14 = (uint *)((long)puVar14 + -1);
  } while (*(char *)psVar20 == '0');
  *(undefined1 *)puVar14 = 0;
  goto LAB_00621b00;
}


// ===== 00621b38  FUN_00621b38 =====

undefined8 FUN_00621b38(byte *param_1,long param_2,int *param_3,int param_4)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  byte *local_30;
  long lStack_28;
  byte local_8 [4];
  int local_4;
  
  *param_3 = 0;
  local_8[0] = 0xaa;
  local_30 = param_1;
  lStack_28 = param_2;
  local_4 = param_4;
  uVar2 = FUN_00621e10(&local_30,&local_4,local_8);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if ((local_8[0] & 1) == 0) {
    if (local_30 + lStack_28 <= local_30) goto LAB_00621c40;
    iVar4 = 0;
    do {
      cVar1 = "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[*local_30];
      if (local_4 <= cVar1) goto LAB_00621c60;
      if (*(int *)(&DAT_001fd464 + (long)local_4 * 4) < iVar4) {
LAB_00621c74:
        uVar3 = 0;
        iVar4 = 0x7fffffff;
        goto LAB_00621c48;
      }
      if ((int)((int)cVar1 ^ 0x7fffffffU) < iVar4 * local_4) goto LAB_00621c74;
      lStack_28 = lStack_28 + -1;
      iVar4 = iVar4 * local_4 + (int)cVar1;
      local_30 = local_30 + 1;
    } while (lStack_28 != 0);
  }
  else if (local_30 < local_30 + lStack_28) {
    iVar4 = 0;
    do {
      cVar1 = "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[*local_30];
      if (local_4 <= cVar1) goto LAB_00621c60;
      if (iVar4 < *(int *)(&DAT_001fd4f8 + (long)local_4 * 4)) {
LAB_00621c68:
        uVar3 = 0;
        iVar4 = -0x80000000;
        goto LAB_00621c48;
      }
      if (iVar4 * local_4 < (int)((int)cVar1 ^ 0x80000000U)) goto LAB_00621c68;
      lStack_28 = lStack_28 + -1;
      iVar4 = iVar4 * local_4 - (int)cVar1;
      local_30 = local_30 + 1;
    } while (lStack_28 != 0);
  }
  else {
LAB_00621c40:
    iVar4 = 0;
  }
  uVar3 = 1;
LAB_00621c48:
  *param_3 = iVar4;
  return uVar3;
LAB_00621c60:
  uVar3 = 0;
  goto LAB_00621c48;
}


// ===== 00621c80  FUN_00621c80 =====

long FUN_00621c80(uint param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = (ulong)param_1 / 10000 | (ulong)(param_1 % 10000) << 0x20;
  lVar1 = uVar2 * 0x10000 + (uVar2 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
  return lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff;
}


// ===== 00621cdc  FUN_00621cdc =====

undefined1  [16] FUN_00621cdc(ulong param_1,uint param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  if (param_2 < 0xd) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    uVar4 = param_2;
    do {
      uVar5 = uVar2 >> 0x20;
      uVar6 = param_1 >> 0x20;
      uVar3 = (uVar2 & 0xffffffff) * 0x48c27395;
      uVar7 = param_1 & 0xffffffff;
      uVar8 = uVar5 * 0x48c2739500000000;
      uVar2 = uVar8 + uVar3;
      param_1 = uVar6 * 0x48c2739500000000 + (param_1 & 0xffffffff) * 0x48c27395 +
                (uVar5 * 0x48c27395 >> 0x20) + (ulong)CARRY8(uVar8,uVar3);
      uVar3 = uVar6 * 0x48c27395 >> 0x20;
      if (param_1 < uVar7 * 0x48c27395) {
        uVar3 = uVar3 + 1;
      }
      if (uVar3 != 0) {
        uVar7 = LZCOUNT(uVar3);
        uVar2 = param_1 << (uVar7 & 0x3f) | (uVar2 >> 1) >> ((ulong)~(uint)uVar7 & 0x3f);
        param_1 = uVar3 << (uVar7 & 0x3f) | (param_1 >> 1) >> ((ulong)~(uint)uVar7 & 0x3f);
      }
      param_2 = uVar4 - 0xd;
      bVar1 = 0x19 < (int)uVar4;
      uVar4 = param_2;
    } while (bVar1);
  }
  uVar4 = *(uint *)(&DAT_001fd330 + (ulong)param_2 * 4);
  uVar6 = (param_1 >> 0x20) * (ulong)uVar4;
  uVar8 = (uVar2 >> 0x20) * (ulong)uVar4;
  uVar5 = (uVar2 & 0xffffffff) * (ulong)uVar4;
  uVar7 = uVar6 >> 0x20;
  uVar2 = uVar8 << 0x20;
  uVar3 = uVar5 + uVar2;
  uVar2 = (uVar6 << 0x20) + (param_1 & 0xffffffff) * (ulong)uVar4 + (uVar8 >> 0x20) +
          (ulong)CARRY8(uVar5,uVar2);
  if (uVar2 < (param_1 & 0xffffffff) * (ulong)uVar4) {
    uVar7 = uVar7 + 1;
  }
  if (uVar7 != 0) {
    uVar5 = LZCOUNT(uVar7);
    uVar3 = uVar2 << (uVar5 & 0x3f) | (uVar3 >> 1) >> ((ulong)~(uint)uVar5 & 0x3f);
    uVar2 = uVar7 << (uVar5 & 0x3f) | (uVar2 >> 1) >> ((ulong)~(uint)uVar5 & 0x3f);
  }
  uVar7 = LZCOUNT(uVar2);
  auVar9._8_8_ = uVar3 << (uVar7 & 0x3f);
  auVar9._0_8_ = uVar2 << (uVar7 & 0x3f) | (uVar3 >> 1) >> ((ulong)~(uint)uVar7 & 0x3f);
  return auVar9;
}


// ===== 00621e10  FUN_00621e10 =====

undefined8 FUN_00621e10(ulong *param_1,int *param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  byte *pbVar9;
  
  pbVar9 = (byte *)*param_1;
  if (pbVar9 == (byte *)0x0) {
    return 0;
  }
  uVar4 = param_1[1];
  iVar8 = *param_2;
  pbVar3 = pbVar9;
  uVar6 = uVar4;
  if (pbVar9 < pbVar9 + uVar4) {
    do {
      if (((byte)PTR_DAT_00d52040[*pbVar3] >> 3 & 1) == 0) goto LAB_00621e68;
      uVar6 = uVar6 - 1;
      pbVar3 = pbVar3 + 1;
    } while (uVar6 != 0);
    pbVar3 = pbVar9 + uVar4;
  }
LAB_00621e68:
  lVar7 = -(long)pbVar9;
  do {
    pbVar1 = pbVar9 + uVar4;
    if (pbVar1 <= pbVar3) {
      return 0;
    }
    pbVar9 = pbVar9 + -1;
    lVar7 = lVar7 + 1;
  } while (((byte)PTR_DAT_00d52040[pbVar1[-1]] >> 3 & 1) != 0);
  bVar2 = *pbVar3;
  *(bool *)param_3 = bVar2 == 0x2d;
  if (((bVar2 == 0x2d) || (*pbVar3 == 0x2b)) && (pbVar3 = pbVar3 + 1, pbVar9 + uVar4 + 1 <= pbVar3))
  {
    return 0;
  }
  if (iVar8 == 0x10) {
    lVar5 = (uVar4 - lVar7) + 1;
    if (((1 < (long)(((uVar4 - (long)pbVar3) - lVar7) + 1)) && (*pbVar3 == 0x30)) &&
       ((pbVar3[1] | 0x20) == 0x78)) goto LAB_00621f48;
  }
  else {
    if (iVar8 != 0) {
      if (0x22 < iVar8 - 2U) {
        return 0;
      }
      lVar5 = (uVar4 - lVar7) + 1;
      goto LAB_00621fb4;
    }
    lVar5 = (uVar4 - lVar7) + 1;
    if ((long)(((uVar4 - (long)pbVar3) - lVar7) + 1) < 2) {
      iVar8 = 10;
      if (uVar4 - (long)pbVar3 == lVar7) {
        bVar2 = *pbVar3;
        if (bVar2 == 0x30) {
          pbVar3 = pbVar3 + 1;
        }
        iVar8 = 8;
        if (bVar2 != 0x30) {
          iVar8 = 10;
        }
      }
      goto LAB_00621fb4;
    }
    if (*pbVar3 != 0x30) {
      iVar8 = 10;
      goto LAB_00621fb4;
    }
    if ((pbVar3[1] | 0x20) != 0x78) {
      pbVar3 = pbVar3 + 1;
      iVar8 = 8;
      goto LAB_00621fb4;
    }
LAB_00621f48:
    pbVar3 = pbVar3 + 2;
    if (pbVar9 + uVar4 + 1 <= pbVar3) {
      return 0;
    }
  }
  iVar8 = 0x10;
LAB_00621fb4:
  if (lVar5 - (long)pbVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
              );
  }
  if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
              );
  }
  *param_1 = (ulong)pbVar3;
  param_1[1] = lVar5 - (long)pbVar3;
  *param_2 = iVar8;
  return 1;
}


// ===== 00621ff8  FUN_00621ff8 =====

void FUN_00621ff8(undefined8 param_1)

{
  code *pcVar1;
  
  FUN_00622058(3,"throw_delegate.cc",0x5f,&DAT_001ae0df,param_1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x622028);
  (*pcVar1)();
}


// ===== 00622028  FUN_00622028 =====

void FUN_00622028(undefined8 param_1)

{
  code *pcVar1;
  
  FUN_00622058(3,"throw_delegate.cc",0x70,&DAT_001ae0df,param_1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x622058);
  (*pcVar1)();
}


// ===== 00622058  FUN_00622058 =====

void FUN_00622058(int param_1,undefined8 param_2,undefined4 param_3,char *param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  size_t __n;
  long lVar6;
  bool bVar7;
  char *pcVar8;
  int iVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined8 local_cb0;
  undefined8 uStack_ca8;
  undefined8 local_ca0;
  undefined8 uStack_c98;
  undefined1 *local_c90;
  undefined1 **ppuStack_c88;
  undefined8 *puStack_c80;
  undefined8 uStack_c78;
  uint local_c4c;
  char *local_c48;
  undefined1 *local_c40;
  undefined1 **ppuStack_c38;
  undefined8 *puStack_c30;
  undefined8 uStack_c28;
  char acStack_c20 [3000];
  long local_68;
  
  ppuStack_c88 = &local_c90;
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  puStack_c80 = &local_cb0;
  uStack_c78 = 0xffffff80ffffffe0;
  local_cb0 = param_5;
  uStack_ca8 = param_6;
  local_ca0 = param_7;
  uStack_c98 = param_8;
  local_c90 = (undefined1 *)register0x00000008;
  memset(acStack_c20,0xaa,3000);
  local_c4c = 3000;
  local_c48 = acStack_c20;
  uVar10 = (*(code *)PTR_FUN_00d596e0)(param_1,param_2,param_3,&local_c48,&local_c4c);
  pcVar8 = local_c48;
  if ((uVar10 & 1) == 0) goto LAB_006221f4;
  if ((int)local_c4c < 0) {
LAB_006221a8:
    FUN_00622290(&local_c48,&local_c4c,&DAT_001ae0df," ... (message truncated)\n");
  }
  else {
    ppuStack_c38 = ppuStack_c88;
    local_c40 = local_c90;
    uStack_c28 = uStack_c78;
    puStack_c30 = puStack_c80;
    iVar9 = vsnprintf(local_c48,(ulong)local_c4c,param_4,&local_c40);
    bVar1 = iVar9 + 1 < 0 != SCARRY4(iVar9,1);
    iVar2 = 0;
    if (0x19 < local_c4c) {
      iVar2 = local_c4c - 0x1a;
    }
    iVar3 = iVar9;
    if ((iVar9 == -1 || bVar1) || (int)local_c4c < iVar9) {
      iVar3 = iVar2;
    }
    local_c48 = local_c48 + iVar3;
    uVar5 = local_c4c - iVar3;
    bVar7 = (int)local_c4c < iVar9;
    local_c4c = uVar5;
    if ((iVar9 == -1 || bVar1) || bVar7) goto LAB_006221a8;
    FUN_00622290(&local_c48,&local_c4c,&DAT_001ded1c);
  }
  __n = (long)local_c48 - (long)acStack_c20;
  if (__n != 0) {
    puVar11 = (undefined4 *)__errno();
    uVar4 = *puVar11;
    write(2,acStack_c20,__n);
    *puVar11 = uVar4;
  }
LAB_006221f4:
  if (param_1 == 3) {
    (*(code *)PTR_FUN_00d596f0)(param_2,param_3,acStack_c20,pcVar8,&local_68);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00622260  FUN_00622260 =====

void FUN_00622260(void)

{
  FUN_00622058();
  return;
}


// ===== 00622290  FUN_00622290 =====

void FUN_00622290(long *param_1,int *param_2,char *param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  if (-1 < *param_2) {
    ppuStack_68 = &local_70;
    puStack_60 = auStack_a0;
    uStack_58 = 0xffffff80ffffffd8;
    local_98 = param_4;
    local_90 = param_5;
    uStack_88 = param_6;
    local_80 = param_7;
    uStack_78 = param_8;
    local_70 = (undefined1 *)register0x00000008;
    uVar1 = vsnprintf((char *)*param_1,(long)*param_2,param_3,&local_70);
    if ((-1 < (int)uVar1) && ((int)uVar1 <= *param_2)) {
      *param_2 = *param_2 - uVar1;
      *param_1 = *param_1 + (ulong)uVar1;
    }
  }
  return;
}


// ===== 00622350  FUN_00622350 =====

undefined8
FUN_00622350(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5)

{
  FUN_00622290(param_4,param_5,"[%s : %d] RAW: ",param_2,param_3);
  return 1;
}


// ===== 0062238c  FUN_0062238c =====

void FUN_0062238c(void)

{
  return;
}


// ===== 00622394  FUN_00622394 =====

undefined8 * FUN_00622394(void)

{
  int iVar1;
  
  if (((DAT_00d645c0 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d645c0), iVar1 != 0)) {
    DAT_00d645b8 = (undefined8 *)operator_new(8);
    *DAT_00d645b8 = &PTR_FUN_00d277b8;
    FUN_0054ff1c(&DAT_00d645c0);
  }
  return DAT_00d645b8;
}


// ===== 00622408  FUN_00622408 =====

void FUN_00622408(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00622414  thunk_FUN_006258f0 =====

void thunk_FUN_006258f0(void)

{
  FUN_006258f0();
  return;
}


// ===== 0062241c  FUN_0062241c =====

ulong FUN_0062241c(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if ((DAT_00d645d0 & 1) == 0) {
    iVar1 = FUN_0054fdd4(&DAT_00d645d0);
    if (iVar1 != 0) {
      lVar2 = FUN_006258f0();
      lVar3 = FUN_00625ae8();
      DAT_00d645c8 = (lVar3 - lVar2) + 0x7d91048bca000;
      FUN_0054ff1c(&DAT_00d645d0);
    }
  }
  lVar2 = (DAT_00d645c8 + param_2) / 1000000;
  uVar4 = SUB168(SEXT816((long)((ulong)(uint)((int)(DAT_00d645c8 + param_2) + (int)lVar2 * -1000000)
                               << 0x20)) * SEXT816(0x431bde82d7b634db),8);
  return (uVar4 >> 0x12) - ((long)uVar4 >> 0x3f) & 0xffffffff | lVar2 << 0x20;
}


// ===== 006224f0  FUN_006224f0 =====

void FUN_006224f0(void)

{
  return;
}


// ===== 006224f8  FUN_006224f8 =====

void FUN_006224f8(char *param_1,ulong param_2)

{
  long lVar1;
  char **ppcVar2;
  size_t __n;
  char *__dest;
  char *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  char *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  long local_48;
  
  ppcVar2 = &local_b0;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
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
  if (param_2 == 0x8000000000000000) {
    pcVar3 = "-inf ms";
  }
  else {
    if (param_2 == 0) {
LAB_006225c8:
      ppcVar2 = (char **)FUN_00622a0c(&local_b0,param_2);
      pcVar3 = " us";
LAB_006225dc:
      uVar4 = 3;
      goto LAB_006225e0;
    }
    if (param_2 != 0x7fffffffffffffff) {
      if (0x4189374bc6a7ee <
          (param_2 * 0x1cac083126e978d5 + 0x10624dd2f1a9fb8 >> 3 |
          param_2 * 0x1cac083126e978d5 << 0x3d)) goto LAB_006225c8;
      if ((long)param_2 < 0) {
        param_2 = -param_2;
        uVar6 = param_2 / 1000;
        uVar5 = uVar6;
        if (500 < param_2 % 1000) {
          uVar5 = uVar6 + 1;
        }
        if (0x4189374bc6a7ef <
            (uVar5 * 0x1cac083126e978d5 >> 3 | uVar5 * 0x1cac083126e978d5 << 0x3d)) {
          uVar5 = -uVar6 - (ulong)(500 < param_2 % 1000);
          goto LAB_00622784;
        }
        uVar5 = -(param_2 / 1000000) - (ulong)(500000 < param_2 % 1000000);
      }
      else {
        uVar5 = param_2 / 1000;
        if (499 < param_2 % 1000) {
          uVar5 = uVar5 + 1;
        }
        if (0x4189374bc6a7ef <
            (uVar5 * 0x1cac083126e978d5 >> 3 | uVar5 * 0x1cac083126e978d5 << 0x3d)) {
LAB_00622784:
          ppcVar2 = (char **)FUN_00622a0c(&local_b0,uVar5);
          pcVar3 = " ms";
          goto LAB_006225dc;
        }
        uVar5 = param_2 / 1000000;
        if (499999 < param_2 % 1000000) {
          uVar5 = uVar5 + 1;
        }
      }
      ppcVar2 = (char **)FUN_00622a0c(&local_b0,uVar5);
      pcVar3 = " s";
      uVar4 = 2;
      goto LAB_006225e0;
    }
    pcVar3 = "+inf ms";
  }
  uVar4 = 7;
LAB_006225e0:
  FUN_006228b0(ppcVar2,pcVar3,uVar4);
  pcVar3 = local_b0;
  if (local_b0 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:1063: libc++ Hardening assertion __s != nullptr failed: basic_string(const char*) detected nullptr\n"
              );
  }
  __n = strlen(local_b0);
  if (0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (__n < 0x17) {
    param_1[0x17] = (char)__n;
    __dest = param_1;
  }
  else {
    uVar5 = (__n & 0x7ffffffffffffff8) + 8;
    uVar6 = 0x19;
    if (uVar5 != 0x18) {
      uVar6 = uVar5;
    }
    __dest = (char *)operator_new(uVar6);
    *(char **)param_1 = __dest;
    *(size_t *)(param_1 + 8) = __n;
    *(ulong *)(param_1 + 0x10) = uVar6 | 0x8000000000000000;
  }
  if (__dest + __n < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((__dest <= pcVar3) && (pcVar3 < __dest + __n)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(__dest,pcVar3,__n);
  __dest[__n] = '\0';
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00622830  FUN_00622830 =====

void FUN_00622830(undefined8 *param_1,undefined1 *param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  *param_2 = 0;
  return;
}


// ===== 00622844  FUN_00622844 =====

long * FUN_00622844(long *param_1,undefined1 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 local_14 [4];
  
  lVar2 = param_1[1];
  lVar1 = param_1[2] + 1;
  local_14[0] = param_2;
  memcpy((void *)(*param_1 + param_1[2]),local_14,(ulong)(lVar2 != lVar1));
  lVar3 = param_1[2];
  if (lVar2 != lVar1) {
    lVar3 = lVar3 + 1;
  }
  param_1[2] = lVar3;
  *(undefined1 *)(*param_1 + lVar3) = 0;
  return param_1;
}


// ===== 006228b0  FUN_006228b0 =====

long * FUN_006228b0(long *param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_1[1] + ~param_1[2];
  if (uVar1 <= param_3) {
    param_3 = uVar1;
  }
  memcpy((void *)(*param_1 + param_1[2]),param_2,param_3);
  lVar2 = param_1[2];
  param_1[2] = lVar2 + param_3;
  *(undefined1 *)(*param_1 + lVar2 + param_3) = 0;
  return param_1;
}


// ===== 00622910  FUN_00622910 =====

void FUN_00622910(undefined8 param_1,undefined4 param_2)

{
  FUN_00622924(param_1,&DAT_001ef797,param_2);
  return;
}


// ===== 00622924  FUN_00622924 =====

long * FUN_00622924(long *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  uint uVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined1 **ppuStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  ppuStack_58 = &local_60;
  puStack_50 = &local_90;
  uStack_48 = 0xffffff80ffffffd0;
  local_90 = param_3;
  uStack_88 = param_4;
  local_80 = param_5;
  uStack_78 = param_6;
  local_70 = param_7;
  uStack_68 = param_8;
  local_60 = (undefined1 *)register0x00000008;
  uVar2 = vsnprintf((char *)(*param_1 + param_1[2]),param_1[1] - param_1[2],param_2,&local_60);
  if ((int)uVar2 < 0) {
    *(undefined1 *)(*param_1 + param_1[2]) = 0;
  }
  else {
    uVar1 = param_1[1] + ~param_1[2];
    if (uVar2 <= uVar1) {
      uVar1 = (ulong)uVar2;
    }
    param_1[2] = uVar1 + param_1[2];
  }
  return param_1;
}


// ===== 006229f8  FUN_006229f8 =====

void FUN_006229f8(undefined8 param_1,undefined4 param_2)

{
  FUN_00622924(param_1,&DAT_001ab5bb,param_2);
  return;
}


// ===== 00622a0c  FUN_00622a0c =====

void FUN_00622a0c(undefined8 param_1,undefined8 param_2)

{
  FUN_00622924(param_1,&DAT_001ab5b7,param_2);
  return;
}


// ===== 00622a20  FUN_00622a20 =====

void FUN_00622a20(undefined8 param_1,undefined8 param_2)

{
  FUN_00622924(param_1,&DAT_00197965,param_2);
  return;
}


// ===== 00622a34  FUN_00622a34 =====

void FUN_00622a34(float param_1,undefined8 param_2)

{
  FUN_00622924((double)param_1,param_2,&DAT_001ca883);
  return;
}


// ===== 00622a48  FUN_00622a48 =====

void FUN_00622a48(undefined8 param_1)

{
  FUN_00622924(param_1,&DAT_001ca883);
  return;
}


// ===== 00622a58  FUN_00622a58 =====

undefined8 *
FUN_00622a58(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 *local_d0;
  undefined1 **ppuStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined1 **ppuStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined1 **ppuStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  
  uStack_98 = 0xffffff80ffffffd0;
  uStack_78 = 0xffffff80ffffffd0;
  local_100 = param_3;
  uStack_f8 = param_4;
  local_f0 = param_5;
  uStack_e8 = param_6;
  local_e0 = param_7;
  uStack_d8 = param_8;
  local_b0 = (undefined1 *)register0x00000008;
  ppuStack_a8 = &local_d0;
  puStack_a0 = &local_100;
  local_90 = (undefined1 *)register0x00000008;
  ppuStack_88 = &local_d0;
  puStack_80 = &local_100;
  uVar1 = vsnprintf((char *)0x0,0,param_2,&local_b0);
  if ((int)uVar1 < 1) {
    return param_1;
  }
  uVar5 = (ulong)*(char *)((long)param_1 + 0x17);
  if ((long)uVar5 < 0) {
    uVar5 = param_1[1];
    uVar4 = uVar5 + uVar1;
    if (uVar5 < uVar4) {
      uVar3 = (uint)(byte)((ulong)param_1[2] >> 0x38);
      lVar2 = (param_1[2] & 0x7fffffffffffffff) - 1;
      goto LAB_00622b30;
    }
    puVar6 = (undefined8 *)*param_1;
  }
  else {
    uVar4 = uVar5 + uVar1;
    lVar2 = 0x16;
    uVar3 = (uint)*(char *)((long)param_1 + 0x17);
LAB_00622b30:
    if (lVar2 - uVar5 < uVar4 - uVar5) {
      FUN_0054774c(param_1,lVar2,uVar4 - lVar2,uVar5,uVar5,0,0);
      uVar3 = (uint)*(byte *)((long)param_1 + 0x17);
      param_1[1] = uVar5;
    }
    puVar6 = param_1;
    if ((uVar3 >> 7 & 1) != 0) {
      puVar6 = (undefined8 *)*param_1;
    }
    memset((void *)((long)puVar6 + uVar5),0,uVar4 - uVar5);
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      *(byte *)((long)param_1 + 0x17) = (byte)uVar4 & 0x7f;
      goto LAB_00622b9c;
    }
  }
  param_1[1] = uVar4;
LAB_00622b9c:
  *(undefined1 *)((long)puVar6 + uVar4) = 0;
  uVar4 = (ulong)*(char *)((long)param_1 + 0x17);
  if ((long)uVar4 < 0) {
    uVar4 = param_1[1];
  }
  if (uVar5 <= uVar4) {
    puVar6 = param_1;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      puVar6 = (undefined8 *)*param_1;
    }
    uStack_b8 = 0xffffff80ffffffd0;
    local_d0 = (undefined1 *)register0x00000008;
    ppuStack_c8 = &local_d0;
    puStack_c0 = &local_100;
    vsnprintf((char *)((long)puVar6 + uVar5),(long)(int)(uVar1 + 1),param_2,&local_d0);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/string:1360: libc++ Hardening assertion __pos <= size() failed: string index out of bounds\n"
            );
}


// ===== 00622c24  FUN_00622c24 =====

void FUN_00622c24(char *param_1,ulong param_2)

{
  long lVar1;
  char **ppcVar2;
  size_t __n;
  char *__dest;
  char *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  char *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  long local_48;
  
  ppcVar2 = &local_b0;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
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
  if (param_2 == 0x8000000000000000) {
    pcVar3 = "-inf ms";
  }
  else {
    if (param_2 == 0) {
LAB_00622cf4:
      ppcVar2 = (char **)FUN_00622a0c(&local_b0,param_2);
      pcVar3 = " us";
LAB_00622d08:
      uVar4 = 3;
      goto LAB_00622d0c;
    }
    if (param_2 != 0x7fffffffffffffff) {
      if (0x4189374bc6a7ee <
          (param_2 * 0x1cac083126e978d5 + 0x10624dd2f1a9fb8 >> 3 |
          param_2 * 0x1cac083126e978d5 << 0x3d)) goto LAB_00622cf4;
      if ((long)param_2 < 0) {
        param_2 = -param_2;
        uVar6 = param_2 / 1000;
        uVar5 = uVar6;
        if (500 < param_2 % 1000) {
          uVar5 = uVar6 + 1;
        }
        if (0x4189374bc6a7ef <
            (uVar5 * 0x1cac083126e978d5 >> 3 | uVar5 * 0x1cac083126e978d5 << 0x3d)) {
          uVar5 = -uVar6 - (ulong)(500 < param_2 % 1000);
          goto LAB_00622eb0;
        }
        uVar5 = -(param_2 / 1000000) - (ulong)(500000 < param_2 % 1000000);
      }
      else {
        uVar5 = param_2 / 1000;
        if (499 < param_2 % 1000) {
          uVar5 = uVar5 + 1;
        }
        if (0x4189374bc6a7ef <
            (uVar5 * 0x1cac083126e978d5 >> 3 | uVar5 * 0x1cac083126e978d5 << 0x3d)) {
LAB_00622eb0:
          ppcVar2 = (char **)FUN_00622a0c(&local_b0,uVar5);
          pcVar3 = " ms";
          goto LAB_00622d08;
        }
        uVar5 = param_2 / 1000000;
        if (499999 < param_2 % 1000000) {
          uVar5 = uVar5 + 1;
        }
      }
      ppcVar2 = (char **)FUN_00622a0c(&local_b0,uVar5);
      pcVar3 = " s";
      uVar4 = 2;
      goto LAB_00622d0c;
    }
    pcVar3 = "+inf ms";
  }
  uVar4 = 7;
LAB_00622d0c:
  FUN_006228b0(ppcVar2,pcVar3,uVar4);
  pcVar3 = local_b0;
  if (local_b0 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:1063: libc++ Hardening assertion __s != nullptr failed: basic_string(const char*) detected nullptr\n"
              );
  }
  __n = strlen(local_b0);
  if (0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (__n < 0x17) {
    param_1[0x17] = (char)__n;
    __dest = param_1;
  }
  else {
    uVar5 = (__n & 0x7ffffffffffffff8) + 8;
    uVar6 = 0x19;
    if (uVar5 != 0x18) {
      uVar6 = uVar5;
    }
    __dest = (char *)operator_new(uVar6);
    *(char **)param_1 = __dest;
    *(size_t *)(param_1 + 8) = __n;
    *(ulong *)(param_1 + 0x10) = uVar6 | 0x8000000000000000;
  }
  if (__dest + __n < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((__dest <= pcVar3) && (pcVar3 < __dest + __n)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(__dest,pcVar3,__n);
  __dest[__n] = '\0';
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00622f5c  FUN_00622f5c =====

/* WARNING: Removing unreachable block (ram,0x0062311c) */
/* WARNING: Removing unreachable block (ram,0x006231a0) */

void FUN_00622f5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  size_t sVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 *local_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  undefined1 *puStack_138;
  char *local_130;
  time_t local_128;
  long local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined2 local_d0;
  undefined8 **local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined2 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  if (param_2[7] != -0x8000000000000000) {
    local_50 = 0xaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    local_120 = FUN_00518300();
    local_128 = FUN_005183a4(&local_120);
    local_130 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
    local_150 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_140 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
    local_160 = &DAT_aaaaaaaaaaaaaaaa;
    iVar6 = (int)((ulong)((local_120 % 1000000) * 0x10624dd3) >> 0x20);
    localtime_r(&local_128,(tm *)&local_160);
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
    strftime((char *)&local_c0,0x40,"%F %T",(tm *)&local_160);
    local_d0 = 0xaaaa;
    puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
    local_f0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
    local_100 = &DAT_aaaaaaaaaaaaaaaa;
    snprintf((char *)&local_100,0x32,"%03ld",(long)((iVar6 >> 6) - (iVar6 >> 0x1f)));
    snprintf((char *)&local_80,0x32,"[%s.%s] ",&local_c0,&local_100);
    sVar4 = strlen((char *)&local_80);
    FUN_00547cac(&local_118,&local_80,sVar4);
  }
  if (*(char *)(param_2 + 6) == '\x01') {
    FUN_00547cac(&local_118,&DAT_0019769a,1);
    if ((*(byte *)(param_2 + 6) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    local_c0 = (undefined8 ***)0x0;
    puStack_b8 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    FUN_005f55c4(&local_c0,0x16,*(undefined4 *)((long)param_2 + 0x2c));
    puVar1 = puStack_b8;
    pppuVar3 = (undefined8 ***)local_c0;
    if (-1 < (long)local_b0) {
      puVar1 = (undefined1 *)((ulong)local_b0 >> 0x38);
      pppuVar3 = &local_c0;
    }
    FUN_00547cac(&local_118,pppuVar3,puVar1);
    FUN_00547cac(&local_118,&DAT_001d2ea9,2);
  }
  if (param_2[4] != 0) {
    FUN_00547cac(&local_118,"(line ",6);
    local_c0 = (undefined8 ***)0x0;
    puStack_b8 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    FUN_005f55c4(&local_c0,0x16,*(undefined4 *)(param_2 + 5));
    puVar1 = puStack_b8;
    pppuVar3 = (undefined8 ***)local_c0;
    if (-1 < (long)local_b0) {
      puVar1 = (undefined1 *)((ulong)local_b0 >> 0x38);
      pppuVar3 = &local_c0;
    }
    FUN_00547cac(&local_118,pppuVar3,puVar1);
    FUN_00547cac(&local_118,&DAT_001cdeb2,3);
  }
  lVar5 = (long)*(char *)((long)param_2 + 0x17);
  puVar7 = param_2;
  if (lVar5 < 0) {
    puVar7 = (undefined8 *)*param_2;
    lVar5 = param_2[1];
  }
  FUN_00547cac(&local_118,puVar7,lVar5);
  param_1[1] = uStack_110;
  *param_1 = local_118;
  param_1[2] = local_108;
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00623234  FUN_00623234 =====

void FUN_00623234(void)

{
  FUN_00623244();
  return;
}


// ===== 00623244  FUN_00623244 =====

void FUN_00623244(undefined8 *param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int param_6)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  size_t sVar9;
  undefined8 uVar10;
  char *pcVar11;
  time_t tVar12;
  undefined1 *local_480;
  undefined1 *puStack_478;
  undefined1 *local_470;
  undefined1 auStack_468 [1024];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  param_1[7] = 0x8000000000000000;
  param_1[8] = "libjingle";
  *(undefined4 *)(param_1 + 10) = param_4;
  param_1[9] = 9;
  cVar2 = DAT_00d645e4;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined8 *)((long)param_1 + 0x25) = 0;
  *(undefined8 *)((long)param_1 + 0x1d) = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  if (cVar2 == '\x01') {
    if (((DAT_00d645f0 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00d645f0), iVar4 != 0)) {
      DAT_00d645e8 = FUN_00625844();
      FUN_0054ff1c(&DAT_00d645f0);
    }
    uVar10 = DAT_00d645e8;
    uVar5 = FUN_00625844();
    lVar6 = FUN_006259ac(uVar5,uVar10);
    if (((DAT_00d64600 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00d64600), iVar4 != 0)) {
      tVar12 = time((time_t *)0x0);
      DAT_00d645f8 = (undefined4)tVar12;
      FUN_0054ff1c(&DAT_00d64600);
    }
    param_1[7] = lVar6 * 1000;
  }
  if (DAT_00d645e0 == '\x01') {
    uVar3 = gettid();
    *(undefined4 *)((long)param_1 + 0x2c) = uVar3;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  if (param_2 != (char *)0x0) {
    pcVar7 = strrchr(param_2,0x2f);
    pcVar8 = strrchr(param_2,0x5c);
    pcVar11 = pcVar7;
    if (pcVar7 <= pcVar8) {
      pcVar11 = pcVar8;
    }
    if (pcVar7 != (char *)0x0 || pcVar8 != (char *)0x0) {
      param_2 = pcVar11 + 1;
    }
    if (param_2 == (char *)0x0) goto LAB_0062344c;
    sVar9 = strlen(param_2);
    param_1[3] = param_2;
    param_1[4] = sVar9;
    *(undefined4 *)(param_1 + 5) = param_3;
    param_1[8] = param_2;
    param_1[9] = sVar9;
  }
  if (param_5 != 0) {
    memset(auStack_468,0xaa,0x400);
    local_470 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_478 = &DAT_aaaaaaaaaaaaaaaa;
    local_480 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00622830(&local_480,auStack_468,0x400);
    FUN_00622924(&local_480,"[0x%08X]",param_6);
    if (param_5 == 1) {
      uVar10 = FUN_006228b0(&local_480,&DAT_001d5e07,1);
      pcVar11 = strerror(param_6);
      if (pcVar11 == (char *)0x0) {
LAB_0062344c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
                  );
      }
      sVar9 = strlen(pcVar11);
      FUN_006228b0(uVar10,pcVar11,sVar9);
    }
    if (local_480 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string:3022: libc++ Hardening assertion __s != nullptr failed: string::assign received nullptr\n"
                );
    }
    FUN_00547bf8(param_1 + 0xb);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006234e4  FUN_006234e4 =====

void FUN_006234e4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  pthread_mutex_t *ppVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  
  lVar7 = (long)*(char *)((long)param_1 + 0x6f);
  if (lVar7 < 0) {
    lVar7 = param_1[0xc];
  }
  if (lVar7 != 0) {
    FUN_00547cac(param_1 + 0xe,&DAT_001b3795,3);
    lVar7 = (long)*(char *)((long)param_1 + 0x6f);
    if (lVar7 < 0) {
      puVar6 = (undefined8 *)param_1[0xb];
      lVar7 = param_1[0xc];
    }
    else {
      puVar6 = param_1 + 0xb;
    }
    FUN_00547cac(param_1 + 0xe,puVar6,lVar7);
  }
  FUN_00547cac(param_1 + 0xe,&DAT_001ded1c,1);
  uVar1 = param_1[0xf];
  uVar2 = param_1[0x10];
  uVar8 = param_1[0xe];
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    operator_delete((void *)*param_1);
  }
  *param_1 = uVar8;
  param_1[1] = uVar1;
  iVar4 = DAT_00d59708;
  param_1[2] = uVar2;
  if (iVar4 <= *(int *)(param_1 + 10)) {
    FUN_006236bc(param_1);
  }
  if (((DAT_00d64610 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00d64610), iVar4 != 0)) {
    ppVar5 = (pthread_mutex_t *)operator_new(0x28);
    (ppVar5->__data).__list.__next = (__pthread_internal_list *)0x0;
    *(int *)((long)ppVar5 + 8) = 0;
    *(uint *)((long)ppVar5 + 0xc) = 0;
    ppVar5->__align = 0;
    (ppVar5->__data).__list.__prev = (__pthread_internal_list *)0x0;
    *(int *)((long)ppVar5 + 0x10) = 0;
    *(int *)((long)ppVar5 + 0x14) = 0;
    FUN_006245ec();
    DAT_00d64608 = ppVar5;
    FUN_0054ff1c(&DAT_00d64610);
  }
  ppVar5 = DAT_00d64608;
  pthread_mutex_lock(DAT_00d64608);
  for (plVar9 = DAT_00d645d8; plVar9 != (long *)0x0; plVar9 = (long *)plVar9[1]) {
    if ((int)plVar9[2] <= *(int *)(param_1 + 10)) {
      (**(code **)(*plVar9 + 0x40))(plVar9,param_1);
    }
  }
  pthread_mutex_unlock(ppVar5);
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    operator_delete((void *)param_1[0xe]);
    cVar3 = *(char *)((long)param_1 + 0x6f);
  }
  else {
    cVar3 = *(char *)((long)param_1 + 0x6f);
  }
  if (cVar3 < '\0') {
    operator_delete((void *)param_1[0xb]);
    cVar3 = *(char *)((long)param_1 + 0x17);
  }
  else {
    cVar3 = *(char *)((long)param_1 + 0x17);
  }
  if (-1 < cVar3) {
    return;
  }
  operator_delete((void *)*param_1);
  return;
}


// ===== 006236bc  FUN_006236bc =====

void FUN_006236bc(long param_1)

{
  char ******ppppppcVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char *****local_80;
  undefined1 *puStack_78;
  undefined8 local_70;
  
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = (char *****)&DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00622f5c(&local_80);
  cVar3 = DAT_00d59700;
  if (*(uint *)(param_1 + 0x50) < 4) {
    uVar4 = *(undefined4 *)(&DAT_001f4110 + (ulong)*(uint *)(param_1 + 0x50) * 4);
  }
  else {
    uVar4 = 0;
  }
  puVar7 = puStack_78;
  if (-1 < (long)local_70) {
    puVar7 = (undefined1 *)((ulong)local_70 >> 0x38);
  }
  iVar5 = (int)puVar7;
  if (iVar5 + 0x3c3U < 0x787) {
    ppppppcVar1 = (char ******)local_80;
    if (-1 < (long)local_70) {
      ppppppcVar1 = &local_80;
    }
    __android_log_print(uVar4,*(undefined8 *)(param_1 + 0x40),&DAT_001ae586,
                        (ulong)puVar7 & 0xffffffff,ppppppcVar1);
  }
  else if (0 < iVar5) {
    iVar9 = 0;
    iVar8 = 1;
    do {
      uVar6 = (uint)puVar7;
      uVar10 = uVar6;
      if (0x3c3 < uVar6) {
        uVar10 = 0x3c4;
      }
      ppppppcVar1 = (char ******)local_80;
      if (-1 < (long)local_70) {
        ppppppcVar1 = &local_80;
      }
      __android_log_print(uVar4,*(undefined8 *)(param_1 + 0x40),"[%d/%d] %.*s",iVar8,
                          iVar5 / 0x3c4 + 1,uVar10,(char *)((long)ppppppcVar1 + (long)iVar9));
      puVar7 = (undefined1 *)(ulong)(uVar6 - uVar10);
      iVar9 = iVar9 + uVar10;
      iVar8 = iVar8 + 1;
    } while (uVar6 - uVar10 != 0 && (int)uVar10 <= (int)uVar6);
  }
  puVar2 = PTR_stderr_00d51cb8;
  if (cVar3 == '\0') {
    if (((uint)(int)local_70._7_1_ >> 7 & 1) == 0) {
      return;
    }
  }
  else {
    ppppppcVar1 = (char ******)local_80;
    if (-1 < local_70._7_1_) {
      ppppppcVar1 = &local_80;
    }
    fputs((char *)ppppppcVar1,*(FILE **)PTR_stderr_00d51cb8);
    fflush(*(FILE **)puVar2);
    if (-1 < (long)local_70) {
      return;
    }
  }
  operator_delete(local_80);
  return;
}


// ===== 00623864  FUN_00623864 =====

long FUN_00623864(long param_1)

{
  return param_1 + 0x70;
}


// ===== 00623870  FUN_00623870 =====

undefined4 FUN_00623870(void)

{
  return DAT_00d5970c;
}


// ===== 00623880  FUN_00623880 =====

void FUN_00623880(undefined1 param_1)

{
  DAT_00d645e0 = param_1;
  return;
}


// ===== 00623890  FUN_00623890 =====

void FUN_00623890(undefined1 param_1)

{
  DAT_00d645e4 = param_1;
  return;
}


// ===== 006238a0  FUN_006238a0 =====

int FUN_006238a0(int param_1)

{
  int *piVar1;
  int iVar2;
  pthread_mutex_t *ppVar3;
  long lVar4;
  
  DAT_00d59708 = param_1;
  if (((DAT_00d64610 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d64610), iVar2 != 0)) {
    ppVar3 = (pthread_mutex_t *)operator_new(0x28);
    (ppVar3->__data).__list.__next = (__pthread_internal_list *)0x0;
    *(int *)((long)ppVar3 + 8) = 0;
    *(uint *)((long)ppVar3 + 0xc) = 0;
    ppVar3->__align = 0;
    (ppVar3->__data).__list.__prev = (__pthread_internal_list *)0x0;
    *(int *)((long)ppVar3 + 0x10) = 0;
    *(int *)((long)ppVar3 + 0x14) = 0;
    FUN_006245ec();
    DAT_00d64608 = ppVar3;
    FUN_0054ff1c(&DAT_00d64610);
  }
  ppVar3 = DAT_00d64608;
  pthread_mutex_lock(DAT_00d64608);
  iVar2 = DAT_00d59708;
  lVar4 = DAT_00d645d8;
  while (DAT_00d5970c = iVar2, lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x10);
    lVar4 = *(long *)(lVar4 + 8);
    iVar2 = *piVar1;
    if (DAT_00d5970c <= *piVar1) {
      iVar2 = DAT_00d5970c;
    }
  }
  iVar2 = pthread_mutex_unlock(ppVar3);
  return iVar2;
}


// ===== 00623960  FUN_00623960 =====

void FUN_00623960(undefined1 param_1)

{
  DAT_00d59700 = param_1;
  return;
}


// ===== 00623970  FUN_00623970 =====

int FUN_00623970(long param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  pthread_mutex_t *ppVar3;
  long lVar4;
  
  if (((DAT_00d64610 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d64610), iVar2 != 0)) {
    ppVar3 = (pthread_mutex_t *)operator_new(0x28);
    (ppVar3->__data).__list.__next = (__pthread_internal_list *)0x0;
    *(int *)((long)ppVar3 + 8) = 0;
    *(uint *)((long)ppVar3 + 0xc) = 0;
    ppVar3->__align = 0;
    (ppVar3->__data).__list.__prev = (__pthread_internal_list *)0x0;
    *(int *)((long)ppVar3 + 0x10) = 0;
    *(int *)((long)ppVar3 + 0x14) = 0;
    FUN_006245ec();
    DAT_00d64608 = ppVar3;
    FUN_0054ff1c(&DAT_00d64610);
  }
  ppVar3 = DAT_00d64608;
  pthread_mutex_lock(DAT_00d64608);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(long *)(param_1 + 8) = DAT_00d645d8;
  DAT_00d59704 = 0;
  lVar4 = param_1;
  iVar2 = DAT_00d59708;
  DAT_00d5970c = DAT_00d59708;
  if (param_1 != 0) {
    do {
      piVar1 = (int *)(lVar4 + 0x10);
      lVar4 = *(long *)(lVar4 + 8);
      DAT_00d5970c = *piVar1;
      if (iVar2 <= *piVar1) {
        DAT_00d5970c = iVar2;
      }
      iVar2 = DAT_00d5970c;
    } while (lVar4 != 0);
  }
  DAT_00d645d8 = param_1;
  iVar2 = pthread_mutex_unlock(ppVar3);
  return iVar2;
}


// ===== 00623a50  FUN_00623a50 =====

int FUN_00623a50(long param_1)

{
  int *piVar1;
  int iVar2;
  pthread_mutex_t *ppVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if (((DAT_00d64610 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d64610), iVar2 != 0)) {
    ppVar3 = (pthread_mutex_t *)operator_new(0x28);
    (ppVar3->__data).__list.__next = (__pthread_internal_list *)0x0;
    *(int *)((long)ppVar3 + 8) = 0;
    *(uint *)((long)ppVar3 + 0xc) = 0;
    ppVar3->__align = 0;
    (ppVar3->__data).__list.__prev = (__pthread_internal_list *)0x0;
    *(int *)((long)ppVar3 + 0x10) = 0;
    *(int *)((long)ppVar3 + 0x14) = 0;
    FUN_006245ec();
    DAT_00d64608 = ppVar3;
    FUN_0054ff1c(&DAT_00d64610);
  }
  ppVar3 = DAT_00d64608;
  pthread_mutex_lock(DAT_00d64608);
  if (DAT_00d645d8 == 0) {
    DAT_00d59704 = true;
    DAT_00d5970c = DAT_00d59708;
  }
  else {
    lVar5 = DAT_00d645d8;
    if (DAT_00d645d8 == param_1) {
      puVar6 = &DAT_00d645d8;
    }
    else {
      do {
        lVar4 = lVar5;
        lVar5 = *(long *)(lVar4 + 8);
        if (lVar5 == 0) goto LAB_00623ae8;
      } while (lVar5 != param_1);
      puVar6 = (undefined8 *)(lVar4 + 8);
    }
    *puVar6 = *(undefined8 *)(lVar5 + 8);
LAB_00623ae8:
    DAT_00d59704 = DAT_00d645d8 == 0;
    iVar2 = DAT_00d59708;
    lVar5 = DAT_00d645d8;
    while (DAT_00d5970c = iVar2, lVar5 != 0) {
      piVar1 = (int *)(lVar5 + 0x10);
      lVar5 = *(long *)(lVar5 + 8);
      iVar2 = *piVar1;
      if (DAT_00d5970c <= *piVar1) {
        iVar2 = DAT_00d5970c;
      }
    }
  }
  iVar2 = pthread_mutex_unlock(ppVar3);
  return iVar2;
}


// ===== 00623b7c  FUN_00623b7c =====

undefined1 FUN_00623b7c(int param_1)

{
  if (DAT_00d59708 <= param_1 || DAT_00d5970c <= param_1) {
    return 0;
  }
  return DAT_00d59704;
}


// ===== 00623bb0  FUN_00623bb0 =====

/* WARNING: Removing unreachable block (ram,0x006240e8) */
/* WARNING: Removing unreachable block (ram,0x00623ca8) */
/* WARNING: Removing unreachable block (ram,0x00623ccc) */
/* WARNING: Removing unreachable block (ram,0x00623cec) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffea8 : 0x00623cb4 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00623bb0(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  ulong uVar1;
  char cVar2;
  undefined8 *******pppppppuVar3;
  uint uVar4;
  uint uVar5;
  size_t sVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char **ppcVar12;
  long lVar13;
  char *pcVar14;
  char *apcStack_160 [4];
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined1 *local_120 [4];
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  char *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 local_78;
  undefined8 *******local_68;
  ulong uStack_60;
  ulong local_58;
  
  cVar2 = *param_2;
  if (cVar2 == '\x0f') {
    ppcVar12 = apcStack_160 + 1;
    local_78 = -0x7f00000028;
    pcVar7 = (char *)0x0;
    uVar10 = 0;
    uVar11 = 0;
    pcVar14 = apcStack_160[2];
  }
  else if (cVar2 == '\x0e') {
    local_78 = -0x7f00000030;
    uVar10 = *(undefined4 *)((long)apcStack_160[1] + 0x10);
    uVar11 = *(undefined4 *)((long)apcStack_160[1] + 0x14);
    pcVar7 = *(char **)apcStack_160[1];
    ppcVar12 = (char **)((long)apcStack_160[1] + 8);
    pcVar14 = (char *)0x0;
  }
  else {
    if (cVar2 != '\r') {
      return;
    }
    local_78 = -0x7f00000028;
    ppcVar12 = apcStack_160 + 2;
    uVar10 = 0;
    uVar11 = 0;
    pcVar7 = apcStack_160[1];
    pcVar14 = (char *)0x0;
  }
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_120[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_120[0] = &DAT_aaaaaaaaaaaaaaaa;
  local_120[3] = &DAT_aaaaaaaaaaaaaaaa;
  local_120[2] = &DAT_aaaaaaaaaaaaaaaa;
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
  apcStack_160[1] = (char *)param_3;
  apcStack_160[2] = (char *)param_4;
  apcStack_160[3] = (char *)param_5;
  uStack_140 = param_6;
  local_138 = param_7;
  uStack_130 = param_8;
  local_128 = param_9;
  FUN_00623244(local_120,pcVar7,*(uint *)ppcVar12 >> 3,*(uint *)ppcVar12 & 7,uVar10,uVar11,param_8,
               param_9,param_1);
  if (pcVar14 != (char *)0x0) {
    puStack_d8 = (undefined1 *)strlen(pcVar14);
    local_e0 = pcVar14;
  }
  pcVar7 = param_2 + 1;
  puVar15 = (undefined8 *)register0x00000008;
LAB_00623d88:
  pcVar14 = pcVar7 + 1;
  uVar4 = (uint)local_78;
  uVar5 = local_78._4_4_;
  switch(*pcVar7) {
  case '\x01':
    lVar13 = (long)(int)(uint)local_78;
    if (((int)(uint)local_78 < 0) &&
       (local_78 = CONCAT44(local_78._4_4_,(uint)local_78 + 8), uVar4 < 0xfffffff9)) {
      puVar8 = (undefined8 *)((long)local_120 + lVar13);
    }
    else {
      puVar8 = puVar15;
      puVar15 = puVar15 + 1;
    }
    local_68 = (undefined8 *******)0x0;
    uStack_60 = 0;
    local_58 = 0;
    FUN_005f55c4(&local_68,0x16,*(undefined4 *)puVar8);
    break;
  case '\x02':
    lVar13 = (long)(int)(uint)local_78;
    if (((int)(uint)local_78 < 0) &&
       (local_78 = CONCAT44(local_78._4_4_,(uint)local_78 + 8), uVar4 < 0xfffffff9)) {
      puVar8 = (undefined8 *)((long)local_120 + lVar13);
    }
    else {
      puVar8 = puVar15;
      puVar15 = puVar15 + 1;
    }
    local_68 = (undefined8 *******)0x0;
    uStack_60 = 0;
    local_58 = 0;
    FUN_005f5410(&local_68,0x16,*puVar8);
    break;
  case '\x03':
    lVar13 = (long)(int)(uint)local_78;
    if (((int)(uint)local_78 < 0) &&
       (local_78 = CONCAT44(local_78._4_4_,(uint)local_78 + 8), uVar4 < 0xfffffff9)) {
      puVar8 = (undefined8 *)((long)local_120 + lVar13);
    }
    else {
      puVar8 = puVar15;
      puVar15 = puVar15 + 1;
    }
    local_68 = (undefined8 *******)0x0;
    uStack_60 = 0;
    local_58 = 0;
    FUN_00624634(&local_68,0x16,*puVar8);
    break;
  case '\x04':
    lVar13 = (long)(int)(uint)local_78;
    if (((int)(uint)local_78 < 0) &&
       (local_78 = CONCAT44(local_78._4_4_,(uint)local_78 + 8), uVar4 < 0xfffffff9)) {
      puVar8 = (undefined8 *)((long)local_120 + lVar13);
    }
    else {
      puVar8 = puVar15;
      puVar15 = puVar15 + 1;
    }
    local_68 = (undefined8 *******)0x0;
    uStack_60 = 0;
    local_58 = 0;
    FUN_005fa03c(&local_68,0x16,*(undefined4 *)puVar8);
    break;
  case '\x05':
    lVar13 = (long)(int)(uint)local_78;
    if (((int)(uint)local_78 < 0) &&
       (local_78 = CONCAT44(local_78._4_4_,(uint)local_78 + 8), uVar4 < 0xfffffff9)) {
      puVar8 = (undefined8 *)((long)local_120 + lVar13);
    }
    else {
      puVar8 = puVar15;
      puVar15 = puVar15 + 1;
    }
    local_68 = (undefined8 *******)0x0;
    uStack_60 = 0;
    local_58 = 0;
    FUN_006247b4(&local_68,0x16,*puVar8);
    break;
  case '\x06':
    lVar13 = (long)(int)(uint)local_78;
    if (((int)(uint)local_78 < 0) &&
       (local_78 = CONCAT44(local_78._4_4_,(uint)local_78 + 8), uVar4 < 0xfffffff9)) {
      puVar8 = (undefined8 *)((long)local_120 + lVar13);
    }
    else {
      puVar8 = puVar15;
      puVar15 = puVar15 + 1;
    }
    local_68 = (undefined8 *******)0x0;
    uStack_60 = 0;
    local_58 = 0;
    FUN_00624934(&local_68,0x16,*puVar8);
    break;
  case '\a':
    lVar13 = (long)(int)local_78._4_4_;
    if ((local_78 < 0) &&
       (local_78 = CONCAT44(local_78._4_4_ + 0x10,(uint)local_78), uVar5 < 0xfffffff1)) {
      puVar8 = (undefined8 *)((long)apcStack_160 + lVar13);
    }
    else {
      puVar8 = puVar15;
      puVar15 = puVar15 + 1;
    }
    local_68 = (undefined8 *******)0x0;
    uStack_60 = 0;
    local_58 = 0;
    FUN_00624ab4(*puVar8,&local_68,0x10);
    break;
  default:
    goto code_r0x0062411c;
  case '\t':
    lVar13 = (long)(int)(uint)local_78;
    if (((int)(uint)local_78 < 0) &&
       (local_78 = CONCAT44(local_78._4_4_,(uint)local_78 + 8), uVar4 < 0xfffffff9)) {
      puVar8 = (undefined8 *)((long)local_120 + lVar13);
    }
    else {
      puVar8 = puVar15;
      puVar15 = puVar15 + 1;
    }
    pcVar7 = "(null)";
    if ((char *)*puVar8 != (char *)0x0) {
      pcVar7 = (char *)*puVar8;
    }
    sVar6 = strlen(pcVar7);
    FUN_00547cac(&puStack_b0,pcVar7,sVar6);
    pcVar7 = pcVar14;
    goto LAB_00623d88;
  case '\n':
    lVar13 = (long)(int)(uint)local_78;
    if (((int)(uint)local_78 < 0) &&
       (local_78 = CONCAT44(local_78._4_4_,(uint)local_78 + 8), uVar4 < 0xfffffff9)) {
      puVar9 = (undefined8 *)((long)local_120 + lVar13);
      puVar16 = puVar15;
    }
    else {
      puVar16 = puVar15 + 1;
      puVar9 = puVar15;
    }
    puVar9 = (undefined8 *)*puVar9;
    lVar13 = (long)*(char *)((long)puVar9 + 0x17);
    puVar8 = puVar9;
    puVar15 = puVar16;
    if (lVar13 < 0) {
      puVar8 = (undefined8 *)*puVar9;
      lVar13 = puVar9[1];
    }
    goto LAB_00623d80;
  case '\v':
    lVar13 = (long)(int)(uint)local_78;
    if (((int)(uint)local_78 < 0) &&
       (local_78 = CONCAT44(local_78._4_4_,(uint)local_78 + 8), uVar4 < 0xfffffff9)) {
      puVar8 = (undefined8 *)((long)local_120 + lVar13);
    }
    else {
      puVar8 = puVar15;
      puVar15 = puVar15 + 1;
    }
    lVar13 = ((undefined8 *)*puVar8)[1];
    puVar8 = *(undefined8 **)*puVar8;
LAB_00623d80:
    FUN_00547cac(&puStack_b0,puVar8,lVar13);
    pcVar7 = pcVar14;
    goto LAB_00623d88;
  case '\f':
    lVar13 = (long)(int)(uint)local_78;
    if (((int)(uint)local_78 < 0) &&
       (local_78 = CONCAT44(local_78._4_4_,(uint)local_78 + 8), uVar4 < 0xfffffff9)) {
      puVar8 = (undefined8 *)((long)local_120 + lVar13);
    }
    else {
      puVar8 = puVar15;
      puVar15 = puVar15 + 1;
    }
    FUN_00625774(&local_68,*(undefined4 *)puVar8);
  }
  uVar1 = uStack_60;
  pppppppuVar3 = local_68;
  if (-1 < (long)local_58) {
    uVar1 = local_58 >> 0x38;
    pppppppuVar3 = &local_68;
  }
  FUN_00547cac(&puStack_b0,pppppppuVar3,uVar1);
  pcVar7 = pcVar14;
  goto LAB_00623d88;
code_r0x0062411c:
  FUN_006234e4(local_120);
  return;
}


// ===== 00624144  FUN_00624144 =====

void FUN_00624144(long *param_1,long param_2)

{
  void *local_38 [2];
  char cStack_21;
  
  FUN_00622f5c(local_38,param_2);
  (**(code **)(*param_1 + 0x10))
            (param_1,local_38,*(undefined4 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x40));
  if (cStack_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}


// ===== 006241b4  FUN_006241b4 =====

void FUN_006241b4(long *param_1,undefined8 *param_2,undefined4 param_3,char *param_4)

{
  ulong uVar1;
  size_t sVar2;
  undefined8 *puVar3;
  void *local_68 [2];
  char cStack_51;
  void *local_50;
  undefined8 uStack_48;
  long local_40;
  
  uVar1 = param_2[1];
  puVar3 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar3 = param_2;
  }
  FUN_005ff514(local_68,&local_50,&DAT_001c4dc3,2,puVar3,uVar1);
  if (param_4 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:3209: libc++ Hardening assertion __s != nullptr failed: string::insert received nullptr\n"
              );
  }
  sVar2 = strlen(param_4);
  puVar3 = (undefined8 *)FUN_00547994(local_68,0,param_4,sVar2);
  uStack_48 = puVar3[1];
  local_50 = (void *)*puVar3;
  local_40 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  (**(code **)(*param_1 + 0x18))(param_1,&local_50,param_3);
  if (local_40 < 0) {
    operator_delete(local_50);
  }
  if (cStack_51 < '\0') {
    operator_delete(local_68[0]);
  }
  return;
}


// ===== 006242c0  FUN_006242c0 =====

void FUN_006242c0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006242cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}


// ===== 006242d0  FUN_006242d0 =====

/* WARNING: Removing unreachable block (ram,0x0062443c) */

void FUN_006242d0(long *param_1,undefined8 ****param_2,ulong param_3,undefined4 param_4,
                 char *param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 ****__dest;
  undefined8 *puVar3;
  size_t sVar4;
  undefined8 ***local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_3 < 0x17) {
    local_98 = CONCAT17((char)param_3,(undefined7)local_98);
    __dest = &local_a8;
  }
  else {
    uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 ****)operator_new(uVar2);
    local_98 = uVar2 | 0x8000000000000000;
    local_a8 = __dest;
    uStack_a0 = param_3;
  }
  if ((undefined8 ****)((long)__dest + param_3) < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((__dest <= param_2) && (param_2 < (undefined8 ****)((long)__dest + param_3))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(__dest,param_2,param_3);
  *(undefined1 *)((long)__dest + param_3) = 0;
  puVar3 = (undefined8 *)FUN_00547994(&local_a8,0,&DAT_001c4dc3,2);
  uStack_88 = puVar3[1];
  local_90 = (void *)*puVar3;
  local_80 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  if (param_5 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:3209: libc++ Hardening assertion __s != nullptr failed: string::insert received nullptr\n"
              );
  }
  sVar4 = strlen(param_5);
  puVar3 = (undefined8 *)FUN_00547994(&local_90,0,param_5,sVar4);
  uStack_68 = puVar3[1];
  local_70 = *puVar3;
  local_60 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  (**(code **)(*param_1 + 0x18))(param_1,&local_70,param_4);
  if (local_80 < 0) {
    operator_delete(local_90);
  }
  if ((long)local_98 < 0) {
    operator_delete(local_a8);
  }
  return;
}


// ===== 006244c0  FUN_006244c0 =====

void FUN_006244c0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006244cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}


// ===== 006244d0  FUN_006244d0 =====

void FUN_006244d0(long *param_1,undefined8 ***param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 ***__dest;
  long lVar3;
  undefined8 **local_58;
  ulong uStack_50;
  undefined8 local_48;
  
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_3 < 0x17) {
    local_48 = CONCAT17((char)param_3,(undefined7)local_48);
    __dest = &local_58;
  }
  else {
    uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 ***)operator_new(uVar2);
    local_48 = uVar2 | 0x8000000000000000;
    local_58 = __dest;
    uStack_50 = param_3;
  }
  if (__dest <= (undefined8 ***)((long)__dest + param_3)) {
    if ((__dest <= param_2) && (param_2 < (undefined8 ***)((long)__dest + param_3))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,param_2,param_3);
    lVar3 = *param_1;
    *(undefined1 *)((long)__dest + param_3) = 0;
    (**(code **)(lVar3 + 0x20))(param_1,&local_58);
    if ((long)local_48 < 0) {
      operator_delete(local_58);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 006245ec  FUN_006245ec =====

int FUN_006245ec(pthread_mutex_t *param_1)

{
  int iVar1;
  undefined1 *local_8;
  
  local_8 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_8);
  pthread_mutex_init(param_1,(pthread_mutexattr_t *)&local_8);
  iVar1 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_8);
  return iVar1;
}


// ===== 00624634  FUN_00624634 =====

void FUN_00624634(long *param_1,ulong param_2,undefined8 param_3)

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
    goto LAB_006247b0;
  }
  uVar6 = (ulong)*(char *)((long)param_1 + 0x17);
  if ((long)uVar6 < 0) {
    uVar6 = param_1[1];
    if (uVar6 < param_2) {
      uVar4 = (ulong)param_1[2] >> 0x38;
      lVar3 = (param_1[2] & 0x7fffffffffffffffU) - 1;
      goto LAB_006246a0;
    }
    plVar7 = (long *)*param_1;
LAB_00624714:
    param_1[1] = param_2;
  }
  else if (uVar6 < param_2) {
    lVar3 = 0x16;
    uVar4 = uVar6 & 0xffffffff;
LAB_006246a0:
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
    if (*(char *)((long)param_1 + 0x17) < '\0') goto LAB_00624714;
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
        if ((ulong)param_1[1] < uVar6) goto LAB_006247b0;
        param_1[1] = uVar6;
      }
      else {
        if (bVar1 < uVar6) {
LAB_006247b0:
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x6247a4);
  (*pcVar2)();
}


// ===== 006247b4  FUN_006247b4 =====

void FUN_006247b4(long *param_1,ulong param_2,undefined8 param_3)

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
    goto LAB_00624930;
  }
  uVar6 = (ulong)*(char *)((long)param_1 + 0x17);
  if ((long)uVar6 < 0) {
    uVar6 = param_1[1];
    if (uVar6 < param_2) {
      uVar4 = (ulong)param_1[2] >> 0x38;
      lVar3 = (param_1[2] & 0x7fffffffffffffffU) - 1;
      goto LAB_00624820;
    }
    plVar7 = (long *)*param_1;
LAB_00624894:
    param_1[1] = param_2;
  }
  else if (uVar6 < param_2) {
    lVar3 = 0x16;
    uVar4 = uVar6 & 0xffffffff;
LAB_00624820:
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
    if (*(char *)((long)param_1 + 0x17) < '\0') goto LAB_00624894;
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
  lVar3 = FUN_006203cc(param_3,plVar7);
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
        if ((ulong)param_1[1] < uVar6) goto LAB_00624930;
        param_1[1] = uVar6;
      }
      else {
        if (bVar1 < uVar6) {
LAB_00624930:
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x624924);
  (*pcVar2)();
}


// ===== 00624934  FUN_00624934 =====

void FUN_00624934(long *param_1,ulong param_2,undefined8 param_3)

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
    goto LAB_00624ab0;
  }
  uVar6 = (ulong)*(char *)((long)param_1 + 0x17);
  if ((long)uVar6 < 0) {
    uVar6 = param_1[1];
    if (uVar6 < param_2) {
      uVar4 = (ulong)param_1[2] >> 0x38;
      lVar3 = (param_1[2] & 0x7fffffffffffffffU) - 1;
      goto LAB_006249a0;
    }
    plVar7 = (long *)*param_1;
LAB_00624a14:
    param_1[1] = param_2;
  }
  else if (uVar6 < param_2) {
    lVar3 = 0x16;
    uVar4 = uVar6 & 0xffffffff;
LAB_006249a0:
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
    if (*(char *)((long)param_1 + 0x17) < '\0') goto LAB_00624a14;
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
  lVar3 = FUN_006203cc(param_3,plVar7);
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
        if ((ulong)param_1[1] < uVar6) goto LAB_00624ab0;
        param_1[1] = uVar6;
      }
      else {
        if (bVar1 < uVar6) {
LAB_00624ab0:
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x624aa4);
  (*pcVar2)();
}


// ===== 00624ab4  FUN_00624ab4 =====

void FUN_00624ab4(undefined8 param_1,long *param_2,ulong param_3)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  if (0x7ffffffffffffff6 < param_3) {
    FUN_00621ff8("absl::StringResizeAndOverwrite");
    goto LAB_00624c30;
  }
  uVar6 = (ulong)*(char *)((long)param_2 + 0x17);
  if ((long)uVar6 < 0) {
    uVar6 = param_2[1];
    if (uVar6 < param_3) {
      uVar4 = (ulong)param_2[2] >> 0x38;
      lVar3 = (param_2[2] & 0x7fffffffffffffffU) - 1;
      goto LAB_00624b24;
    }
    plVar7 = (long *)*param_2;
LAB_00624b98:
    param_2[1] = param_3;
  }
  else if (uVar6 < param_3) {
    lVar3 = 0x16;
    uVar4 = uVar6 & 0xffffffff;
LAB_00624b24:
    if (lVar3 - uVar6 < param_3 - uVar6) {
      FUN_0054774c(param_2,lVar3,param_3 - lVar3,uVar6,uVar6,0,0);
      uVar4 = (ulong)*(byte *)((long)param_2 + 0x17);
      param_2[1] = uVar6;
    }
    plVar7 = (long *)*param_2;
    if ((uVar4 & 0x80) == 0) {
      plVar7 = param_2;
    }
    memset((void *)((long)plVar7 + uVar6),0,param_3 - uVar6);
    if (*(char *)((long)param_2 + 0x17) < '\0') goto LAB_00624b98;
    *(byte *)((long)param_2 + 0x17) = (byte)param_3 & 0x7f;
  }
  else {
    *(byte *)((long)param_2 + 0x17) = (byte)param_3;
    plVar7 = param_2;
  }
  *(undefined1 *)((long)plVar7 + param_3) = 0;
  plVar7 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar7 = param_2;
  }
  uVar6 = FUN_00621398(param_1,plVar7);
  if (uVar6 <= param_3) {
    bVar1 = *(byte *)((long)param_2 + 0x17);
    plVar5 = (long *)*param_2;
    plVar7 = plVar5;
    if ((bVar1 & 0x80) == 0) {
      plVar7 = param_2;
    }
    if (*(char *)((long)plVar7 + param_3) == '\0') {
      if ((char)bVar1 < '\0') {
        if ((ulong)param_2[1] < uVar6) goto LAB_00624c30;
        param_2[1] = uVar6;
      }
      else {
        if (bVar1 < uVar6) {
LAB_00624c30:
                    /* WARNING: Subroutine does not return */
          FUN_005f5590();
        }
        *(char *)((long)param_2 + 0x17) = (char)uVar6;
        plVar5 = param_2;
      }
      *(undefined1 *)((long)plVar5 + uVar6) = 0;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x624c24);
  (*pcVar2)();
}


// ===== 00624c34  FUN_00624c34 =====

void FUN_00624c34(undefined8 param_1,undefined8 param_2)

{
  FUN_00624c40(param_1,param_2,0);
  return;
}


// ===== 00624c40  FUN_00624c40 =====

void FUN_00624c40(undefined8 *param_1,byte *param_2,ulong param_3,char param_4)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar5 = param_3 * 3 - 1;
  if (param_4 == '\0' || param_3 == 0) {
    uVar5 = param_3 * 2;
  }
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  if (0x7ffffffffffffff6 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (uVar5 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar5;
    puVar4 = param_1;
    if (uVar5 == 0) goto LAB_00624cf4;
  }
  else {
    uVar6 = (uVar5 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar6 != 0x18) {
      uVar2 = uVar6;
    }
    puVar4 = (undefined8 *)operator_new(uVar2);
    *param_1 = puVar4;
    param_1[1] = uVar5;
    param_1[2] = uVar2 | 0x8000000000000000;
  }
  memset(puVar4,0,uVar5);
LAB_00624cf4:
  *(undefined1 *)((long)puVar4 + uVar5) = 0;
  puVar4 = (undefined8 *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    puVar4 = param_1;
  }
  if (param_3 != 0) {
    lVar7 = 0;
    uVar5 = 1;
    uVar6 = param_3;
    do {
      bVar3 = *param_2;
      *(char *)((long)puVar4 + lVar7) = "0123456789abcdef"[bVar3 >> 4];
      ((char *)((long)puVar4 + lVar7))[1] = "0123456789abcdef"[(ulong)bVar3 & 0xf];
      lVar1 = lVar7 + 2;
      if ((param_4 != '\0') && (uVar5 < param_3)) {
        *(char *)((long)puVar4 + lVar1) = param_4;
        lVar1 = lVar7 + 3;
      }
      lVar7 = lVar1;
      uVar6 = uVar6 - 1;
      uVar5 = uVar5 + 1;
      param_2 = param_2 + 1;
    } while (uVar6 != 0);
  }
  return;
}


// ===== 00624d94  FUN_00624d94 =====

long FUN_00624d94(long param_1,ulong param_2,long param_3,ulong param_4,char param_5)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_2 == 0) {
LAB_00624ea4:
    lVar4 = 0;
  }
  else {
    if (param_5 == '\0') {
      uVar3 = param_4 >> 1;
    }
    else {
      uVar3 = (param_4 + 1) / 3;
    }
    lVar4 = 0;
    if ((uVar3 <= param_2) && (param_4 != 0)) {
      uVar3 = 0;
      lVar4 = 0;
      do {
        if (param_4 - uVar3 < 2) goto LAB_00624ea4;
        bVar2 = *(byte *)(param_3 + uVar3);
        uVar5 = bVar2 - 0x30;
        if (9 < uVar5) {
          uVar5 = (uint)bVar2;
          if (bVar2 - 0x41 < 6) {
            uVar5 = uVar5 - 0x37;
          }
          else {
            if (5 < uVar5 - 0x61) goto LAB_00624ea4;
            uVar5 = uVar5 - 0x57;
          }
        }
        bVar2 = ((byte *)(param_3 + uVar3))[1];
        uVar6 = bVar2 - 0x30;
        if (9 < uVar6) {
          uVar6 = (uint)bVar2;
          if (bVar2 - 0x41 < 6) {
            uVar6 = uVar6 - 0x37;
          }
          else {
            if (5 < uVar6 - 0x61) goto LAB_00624ea4;
            uVar6 = uVar6 - 0x57;
          }
        }
        *(byte *)(param_1 + lVar4) = (byte)uVar6 | (byte)(uVar5 << 4);
        uVar1 = uVar3 + 2;
        if ((param_5 != '\0') && (1 < param_4 - uVar1)) {
          if (param_4 <= uVar1) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/string_view:417: libc++ Hardening assertion __pos < size() failed: string_view[] index out of bounds\n"
                      );
          }
          if (*(char *)(param_3 + uVar1) != param_5) goto LAB_00624ea4;
          uVar1 = uVar3 + 3;
        }
        uVar3 = uVar1;
        lVar4 = lVar4 + 1;
      } while (uVar3 < param_4);
    }
  }
  return lVar4;
}


// ===== 00624ecc  FUN_00624ecc =====

/* WARNING: Removing unreachable block (ram,0x00624f38) */

long FUN_00624ecc(long param_1,ulong param_2,char param_3,ulong *param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long local_50;
  ulong uStack_48;
  
  uVar3 = *param_4;
  uVar4 = param_4[1];
  while (uVar3 != uVar4) {
    uVar4 = uVar4 - 0x18;
    if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
  param_4[1] = uVar3;
  if (param_2 != 0) {
    uVar5 = 0;
    uVar4 = 0;
    do {
      if (*(char *)(param_1 + uVar5) == param_3) {
        uVar1 = uVar5 - uVar4;
        if (uVar1 != 0) {
          if (param_2 < uVar4) goto LAB_00625054;
          local_50 = param_1 + uVar4;
          uStack_48 = param_2 - uVar4;
          if (uVar1 <= param_2 - uVar4) {
            uStack_48 = uVar1;
          }
          if (uVar3 < param_4[2]) {
            FUN_00625458(param_4,uVar3,&local_50);
            uVar3 = uVar3 + 0x18;
          }
          else {
            uVar3 = FUN_0062554c(param_4,&local_50);
          }
          param_4[1] = uVar3;
        }
        uVar4 = uVar5 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
    lVar2 = param_2 - uVar4;
    if (lVar2 != 0) {
      if (param_2 < uVar4) {
LAB_00625054:
                    /* WARNING: Subroutine does not return */
        FUN_005f55a8("string_view::substr");
      }
      local_50 = param_1 + uVar4;
      uStack_48 = lVar2;
      if (uVar3 < param_4[2]) {
        FUN_00625458(param_4,uVar3,&local_50);
        uVar3 = uVar3 + 0x18;
      }
      else {
        uVar3 = FUN_0062554c(param_4,&local_50);
      }
      param_4[1] = uVar3;
    }
  }
  return ((long)(uVar3 - *param_4) >> 3) * -0x5555555555555555;
}


// ===== 00625060  FUN_00625060 =====

bool FUN_00625060(undefined8 ****param_1,size_t param_2,uint param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  long lVar6;
  void *pvVar7;
  undefined8 ****ppppuVar8;
  ulong uVar9;
  undefined8 ****ppppuVar10;
  long lVar11;
  undefined8 ***local_78;
  ulong uStack_70;
  undefined8 local_68;
  
  pvVar7 = memchr(param_1,param_3 & 0xff,param_2);
  uVar4 = (long)pvVar7 - (long)param_1;
  if (pvVar7 == (void *)0x0) {
    uVar4 = 0xffffffffffffffff;
  }
  if (uVar4 == 0xffffffffffffffff) {
LAB_00625250:
    return uVar4 != 0xffffffffffffffff;
  }
  uVar2 = (long)pvVar7 - (long)param_1;
  lVar6 = (long)param_1 - (long)pvVar7;
  do {
    lVar11 = lVar6;
    uVar9 = uVar2;
    if (param_2 <= uVar9 + 1) break;
    uVar2 = uVar9 + 1;
    lVar6 = lVar11 + -1;
  } while ((uint)*(byte *)((long)param_1 + uVar9 + 1) == (param_3 & 0xff));
  uVar2 = param_2;
  if (uVar4 <= param_2) {
    uVar2 = uVar4;
  }
  if (uVar2 < 0x7ffffffffffffff7) {
    if (uVar2 < 0x17) {
      local_68 = CONCAT17((char)uVar2,(undefined7)local_68);
      ppppuVar8 = &local_78;
    }
    else {
      uVar1 = (uVar2 & 0x7ffffffffffffff8) + 8;
      uVar3 = 0x19;
      if (uVar1 != 0x18) {
        uVar3 = uVar1;
      }
      ppppuVar8 = (undefined8 ****)operator_new(uVar3);
      local_68 = uVar3 | 0x8000000000000000;
      local_78 = ppppuVar8;
      uStack_70 = uVar2;
    }
    if ((undefined8 ****)((long)ppppuVar8 + uVar2) < ppppuVar8) {
LAB_0062527c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((param_1 < ppppuVar8) || ((undefined8 ****)((long)ppppuVar8 + uVar2) <= param_1)) {
      memmove(ppppuVar8,param_1,uVar2);
      cVar5 = *(char *)((long)param_4 + 0x17);
      *(undefined1 *)((long)ppppuVar8 + uVar2) = 0;
      if (cVar5 < '\0') {
        operator_delete((void *)*param_4);
      }
      param_4[1] = uStack_70;
      *param_4 = local_78;
      param_4[2] = local_68;
      if (param_2 <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_005f55a8("string_view::substr");
      }
      uVar2 = ~uVar9 + param_2;
      if (0x7ffffffffffffff6 < uVar2) goto LAB_006252a4;
      if (uVar2 < 0x17) {
        local_68 = CONCAT17((char)uVar2,(undefined7)local_68);
        ppppuVar8 = &local_78;
      }
      else {
        uVar1 = (uVar2 & 0x7ffffffffffffff8) + 8;
        uVar3 = 0x19;
        if (uVar1 != 0x18) {
          uVar3 = uVar1;
        }
        ppppuVar8 = (undefined8 ****)operator_new(uVar3);
        local_68 = uVar3 | 0x8000000000000000;
        local_78 = ppppuVar8;
        uStack_70 = uVar2;
      }
      ppppuVar10 = (undefined8 ****)((long)ppppuVar8 + ((param_2 - 1) - uVar9));
      if (ppppuVar10 < ppppuVar8) goto LAB_0062527c;
      param_1 = (undefined8 ****)((long)param_1 + uVar9 + 1);
      if ((param_1 < ppppuVar8) || (ppppuVar10 <= param_1)) {
        memmove(ppppuVar8,param_1,uVar2);
        cVar5 = *(char *)((long)param_5 + 0x17);
        *(undefined1 *)((long)ppppuVar8 + lVar11 + (param_2 - 1)) = 0;
        if (cVar5 < '\0') {
          operator_delete((void *)*param_5);
        }
        param_5[1] = uStack_70;
        *param_5 = local_78;
        param_5[2] = local_68;
        goto LAB_00625250;
      }
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
LAB_006252a4:
                    /* WARNING: Subroutine does not return */
  FUN_005d45ec();
}


// ===== 006252b4  FUN_006252b4 =====

void FUN_006252b4(undefined8 *param_1,long param_2,ulong param_3,char param_4)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long local_50;
  ulong uStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 == 0) {
    uVar3 = 0;
    plVar1 = (long *)0x0;
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
    plVar2 = (long *)0x0;
    do {
      plVar1 = plVar2;
      if (*(char *)(param_2 + uVar4) == param_4) {
        if (param_3 < uVar3) goto LAB_006253dc;
        local_50 = param_2 + uVar3;
        uStack_48 = param_3 - uVar3;
        if (uVar4 - uVar3 <= param_3 - uVar3) {
          uStack_48 = uVar4 - uVar3;
        }
        if (plVar2 < (long *)param_1[2]) {
          if (plVar2 == (long *)0x0) goto LAB_006253b8;
          plVar1 = plVar2 + 2;
          plVar2[1] = uStack_48;
          *plVar2 = local_50;
        }
        else {
          plVar1 = (long *)FUN_00625668(param_1,&local_50);
        }
        uVar3 = uVar4 + 1;
        param_1[1] = plVar1;
      }
      uVar4 = uVar4 + 1;
      plVar2 = plVar1;
    } while (param_3 != uVar4);
    if (param_3 < uVar3) {
LAB_006253dc:
                    /* WARNING: Subroutine does not return */
      FUN_005f55a8("string_view::substr");
    }
  }
  local_50 = param_2 + uVar3;
  uStack_48 = param_3 - uVar3;
  if (plVar1 < (long *)param_1[2]) {
    if (plVar1 == (long *)0x0) {
LAB_006253b8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    plVar2 = plVar1 + 2;
    plVar1[1] = uStack_48;
    *plVar1 = local_50;
  }
  else {
    plVar2 = (long *)FUN_00625668(param_1,&local_50);
  }
  param_1[1] = plVar2;
  return;
}


// ===== 006253e8  FUN_006253e8 =====

undefined8 FUN_006253e8(int *param_1,long param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 4) {
    if (*param_1 != 0x65757274) {
      return 0;
    }
    uVar1 = 1;
  }
  else {
    if (param_2 != 5) {
      return 0;
    }
    if (*param_1 != 0x736c6166 || (char)param_1[1] != 'e') {
      return 0;
    }
    uVar1 = 0;
  }
  *param_3 = uVar1;
  return 1;
}


// ===== 00625458  FUN_00625458 =====

void FUN_00625458(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *__dest;
  ulong __n;
  
  if (param_2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  __n = param_3[1];
  if (__n < 0x7ffffffffffffff7) {
    param_3 = (undefined8 *)*param_3;
    if (__n < 0x17) {
      *(char *)((long)param_2 + 0x17) = (char)__n;
      __dest = param_2;
    }
    else {
      uVar1 = (__n & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      __dest = (undefined8 *)operator_new(uVar2);
      *param_2 = __dest;
      param_2[1] = __n;
      param_2[2] = uVar2 | 0x8000000000000000;
    }
    if (__dest <= (undefined8 *)((long)__dest + __n)) {
      if ((__dest <= param_3) && (param_3 < (undefined8 *)((long)__dest + __n))) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                  );
      }
      memmove(__dest,param_3,__n);
      *(undefined1 *)((long)__dest + __n) = 0;
      return;
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


// ===== 0062554c  FUN_0062554c =====

long FUN_0062554c(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  void *pvVar2;
  size_t __n;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  void *__dest;
  
  lVar6 = param_1[1] - *param_1;
  uVar3 = (lVar6 >> 3) * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00625650();
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
    if (0xaaaaaaaaaaaaaaa < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar1 = operator_new(uVar5 * 0x18);
  }
  lVar6 = (long)pvVar1 + lVar6;
  FUN_00625458(param_1,lVar6,param_2);
  __n = param_1[1] - *param_1;
  __dest = (void *)(lVar6 - __n);
  memcpy(__dest,(void *)*param_1,__n);
  pvVar2 = (void *)*param_1;
  *param_1 = (long)__dest;
  param_1[1] = lVar6 + 0x18;
  param_1[2] = (long)((long)pvVar1 + uVar5 * 0x18);
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  return lVar6 + 0x18;
}


// ===== 00625650  FUN_00625650 =====

void FUN_00625650(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00625668  FUN_00625668 =====

undefined8 * FUN_00625668(long *param_1,undefined8 *param_2)

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
    FUN_0062575c();
LAB_00625758:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
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
    if (uVar5 >> 0x3c != 0) goto LAB_00625758;
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


// ===== 0062575c  FUN_0062575c =====

void FUN_0062575c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00625774  FUN_00625774 =====

void FUN_00625774(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined2 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0xaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  snprintf((char *)&local_60,0x32,"%x",param_2 & 0xffffffff);
  FUN_005d3510(param_1,&local_60);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006257f8  <EXTERNAL>::gettid =====

void gettid(void)

{
  gettid();
  return;
}


// ===== 00625800  <EXTERNAL>::pthread_self =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

pthread_t pthread_self(void)

{
  pthread_t pVar1;
  
  pVar1 = pthread_self();
  return pVar1;
}


// ===== 00625808  FUN_00625808 =====

bool FUN_00625808(pthread_t *param_1,pthread_t *param_2)

{
  int iVar1;
  
  iVar1 = pthread_equal(*param_1,*param_2);
  return iVar1 != 0;
}


// ===== 00625834  FUN_00625834 =====

int FUN_00625834(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = prctl(0xf,param_1);
  return iVar1;
}


// ===== 00625844  FUN_00625844 =====

long FUN_00625844(void)

{
  long lVar1;
  
  lVar1 = FUN_00625bf4();
  return lVar1 / 1000000;
}


// ===== 0062587c  FUN_0062587c =====

void FUN_0062587c(void)

{
  if (DAT_00d64618 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00625894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_00d64618 + 0x10))();
    return;
  }
  FUN_00625bf4();
  return;
}


// ===== 0062589c  FUN_0062589c =====

long FUN_0062589c(void)

{
  long lVar1;
  
  if (DAT_00d64618 == (long *)0x0) {
    lVar1 = FUN_00625bf4();
  }
  else {
    lVar1 = (**(code **)(*DAT_00d64618 + 0x10))();
  }
  return lVar1 / 1000000;
}


// ===== 006258f0  FUN_006258f0 =====

long FUN_006258f0(void)

{
  long lVar1;
  
  if (DAT_00d64618 == (long *)0x0) {
    lVar1 = FUN_00625bf4();
  }
  else {
    lVar1 = (**(code **)(*DAT_00d64618 + 0x10))();
  }
  return lVar1 / 1000;
}


// ===== 00625944  FUN_00625944 =====

long FUN_00625944(long param_1)

{
  long lVar1;
  
  if (DAT_00d64618 == (long *)0x0) {
    lVar1 = FUN_00625bf4();
  }
  else {
    lVar1 = (**(code **)(*DAT_00d64618 + 0x10))(DAT_00d64618);
  }
  return lVar1 / 1000000 + param_1;
}


// ===== 006259ac  FUN_006259ac =====

long FUN_006259ac(long param_1,long param_2)

{
  return param_1 - param_2;
}


// ===== 006259b8  FUN_006259b8 =====

long FUN_006259b8(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  
  uVar3 = param_1[5];
  uVar1 = uVar3 + 0x76c;
  if ((uVar3 & 3) == 0) {
    uVar7 = uVar1 * -0x3d70a3d7 + 0x51eb850;
    if ((uVar7 >> 2 | uVar3 * 0x40000000) < 0x28f5c29) {
      uVar7 = (uint)((uVar7 >> 4 | uVar1 * -0x70000000) < 0xa3d70b);
    }
    else {
      uVar7 = 1;
    }
  }
  else {
    uVar7 = 0;
  }
  lVar6 = -1;
  if (0x7b1 < (int)uVar1) {
    uVar4 = param_1[4];
    if ((uVar4 < 0xc) && (iVar5 = param_1[3] - 1, -1 < iVar5)) {
      uVar2 = 0;
      if (uVar4 == 1) {
        uVar2 = uVar7;
      }
      lVar6 = -1;
      if ((((iVar5 < (int)((int)*(short *)(&DAT_001fd5b2 + (ulong)uVar4 * 2) + uVar2)) &&
           (param_1[2] < 0x18)) && (param_1[1] < 0x3c)) && (*param_1 < 0x3c)) {
        uVar2 = 0;
        if (uVar4 < 2) {
          uVar2 = uVar7;
        }
        lVar6 = (ulong)*param_1 +
                ((ulong)param_1[1] +
                ((ulong)param_1[2] +
                ((long)*(short *)(&DAT_001fd5ca + (ulong)uVar4 * 2) +
                 (long)(int)((((uVar1 / 400 - uVar1 / 100) + (uVar1 >> 2) + iVar5) - uVar2) + -0x1dd
                            ) + (ulong)(uVar3 - 0x46) * 0x16d) * 0x18) * 0x3c) * 0x3c;
      }
    }
  }
  return lVar6;
}


// ===== 00625ae8  FUN_00625ae8 =====

undefined1 * FUN_00625ae8(void)

{
  long lVar1;
  undefined1 *puVar2;
  timeval local_20;
  
  if (DAT_00d64618 == (long *)0x0) {
    local_20.tv_usec = (__suseconds_t)&DAT_aaaaaaaaaaaaaaaa;
    local_20.tv_sec = (__time_t)&DAT_aaaaaaaaaaaaaaaa;
    gettimeofday(&local_20,(__timezone_ptr_t)0x0);
    puVar2 = (undefined1 *)(local_20.tv_usec + local_20.tv_sec * 1000000);
  }
  else {
    lVar1 = (**(code **)(*DAT_00d64618 + 0x10))();
    puVar2 = (undefined1 *)(lVar1 / 1000);
  }
  return puVar2;
}


// ===== 00625b64  FUN_00625b64 =====

long FUN_00625b64(void)

{
  long lVar1;
  undefined1 *puVar2;
  timeval local_30;
  
  if (DAT_00d64618 == (long *)0x0) {
    local_30.tv_usec = (__suseconds_t)&DAT_aaaaaaaaaaaaaaaa;
    local_30.tv_sec = (__time_t)&DAT_aaaaaaaaaaaaaaaa;
    gettimeofday(&local_30,(__timezone_ptr_t)0x0);
    puVar2 = (undefined1 *)(local_30.tv_usec + local_30.tv_sec * 1000000);
  }
  else {
    lVar1 = (**(code **)(*DAT_00d64618 + 0x10))();
    puVar2 = (undefined1 *)(lVar1 / 1000);
  }
  return (long)puVar2 / 1000;
}


// ===== 00625bf4  FUN_00625bf4 =====

undefined1 * FUN_00625bf4(void)

{
  timespec local_20;
  
  local_20.tv_nsec = (long)&DAT_aaaaaaaaaaaaaaaa;
  local_20.tv_sec = (__time_t)&DAT_aaaaaaaaaaaaaaaa;
  clock_gettime(1,&local_20);
  return (undefined1 *)(local_20.tv_nsec + local_20.tv_sec * 1000000000);
}


// ===== 00625c38  FUN_00625c38 =====

void FUN_00625c38(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = param_1;
  param_2[1] = 0xbf800000;
  return;
}


// ===== 00625c4c  FUN_00625c4c =====

void FUN_00625c4c(float param_1,float param_2,float *param_3)

{
  bool bVar1;
  float __x;
  float fVar2;
  
  fVar2 = param_3[1];
  if (fVar2 != -1.0) {
    __x = *param_3;
    if (param_1 != 1.0) {
      __x = powf(__x,param_1);
    }
    param_2 = fVar2 * __x + param_2 * (1.0 - __x);
  }
  fVar2 = param_3[2];
  bVar1 = true;
  if ((param_2 != fVar2 && param_2 < fVar2 == (NAN(param_2) || NAN(fVar2))) &&
     (bVar1 = false, !NAN(fVar2))) {
    bVar1 = fVar2 == -1.0;
  }
  if (bVar1) {
    fVar2 = param_2;
  }
  param_3[1] = fVar2;
  return;
}


// ===== 00625cd0  FUN_00625cd0 =====

void FUN_00625cd0(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = param_1;
  return;
}


// ===== 00625cdc  FUN_00625cdc =====

void FUN_00625cdc(undefined8 *param_1,ulong param_2)

{
  undefined4 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (param_2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d348c();
    }
    puVar4 = (undefined4 *)operator_new(param_2 * 4);
    param_1[2] = puVar4;
    param_1[3] = puVar4;
    uVar6 = param_2 * 4 - 4 >> 2;
    uVar2 = (ulong)-(long)puVar4 >> 2;
    if (uVar6 <= (ulong)-(long)puVar4 >> 2) {
      uVar2 = uVar6;
    }
    puVar1 = puVar4 + param_2;
    param_1[4] = puVar1;
    if ((7 < uVar2) && ((-(int)puVar4 & 3U) == 0)) {
      uVar6 = uVar2 + 1 & 7;
      uVar3 = 8;
      if (uVar6 != 0) {
        uVar3 = uVar6;
      }
      puVar8 = (undefined8 *)(puVar4 + 4);
      lVar7 = (uVar2 + 1) - uVar3;
      puVar4 = puVar4 + lVar7;
      do {
        lVar7 = lVar7 + -8;
        puVar8[-1] = 0;
        puVar8[-2] = 0;
        puVar8[1] = 0;
        *puVar8 = 0;
        puVar8 = puVar8 + 4;
      } while (lVar7 != 0);
    }
    do {
      if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar5 = puVar4 + 1;
      *puVar4 = 0;
      puVar4 = puVar5;
    } while (puVar5 != puVar1);
    param_1[3] = puVar1;
  }
  return;
}


// ===== 00625dbc  FUN_00625dbc =====

void FUN_00625dbc(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = *(void **)(param_1 + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = *(void **)(param_1 + 0x18);
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
      *(void **)(param_1 + 0x18) = pvVar1;
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


// ===== 00625e64  FUN_00625e64 =====

void FUN_00625e64(ulong *param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_1[2];
  uVar4 = *param_1 + 1;
  *param_1 = uVar4;
  uVar5 = (long)(param_1[3] - uVar1) >> 2;
  uVar2 = 0;
  if (uVar5 != 0) {
    uVar2 = uVar4 / uVar5;
  }
  lVar3 = uVar4 - uVar2 * uVar5;
  if (uVar5 < uVar4) {
    uVar4 = param_1[1] - (long)*(int *)(uVar1 + lVar3 * 4);
  }
  else {
    uVar4 = param_1[1];
  }
  param_1[1] = uVar4 + (long)param_2;
  *(int *)(uVar1 + lVar3 * 4) = param_2;
  return;
}


// ===== 00625eb4  FUN_00625eb4 =====

ulong FUN_00625eb4(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar2 = (long)(param_1[3] - param_1[2]) >> 2;
    if (uVar1 <= uVar2) {
      uVar2 = uVar1;
    }
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = param_1[1] / uVar2;
    }
    return uVar1 & 0xffffffff | 0x100000000;
  }
  return 0;
}


// ===== 00625ef0  FUN_00625ef0 =====

ulong FUN_00625ef0(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = (long)(param_1[3] - param_1[2]) >> 2;
  if (*param_1 <= uVar1) {
    uVar1 = *param_1;
  }
  return uVar1;
}


// ===== 00625f10  FUN_00625f10 =====

void FUN_00625f10(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00625f1c  FUN_00625f1c =====

undefined8 FUN_00625f1c(undefined8 param_1,long *param_2)

{
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  return 0;
}


// ===== 00625f50  FUN_00625f50 =====

void FUN_00625f50(void)

{
  return;
}


// ===== 00625f58  FUN_00625f58 =====

void FUN_00625f58(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00625f64  FUN_00625f64 =====

void FUN_00625f64(void)

{
  return;
}


// ===== 00625f6c  FUN_00625f6c =====

void FUN_00625f6c(undefined8 param_1,long *param_2)

{
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00625f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 8))(param_2);
    return;
  }
  return;
}


// ===== 00625f88  FUN_00625f88 =====

/* WARNING: Removing unreachable block (ram,0x00627f40) */
/* WARNING: Removing unreachable block (ram,0x00627f68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00625f88(void *param_1,undefined8 param_2,long *param_3)

{
  long ****pppplVar1;
  long ***ppplVar2;
  undefined *puVar3;
  long *****ppppplVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined8 *****pppppuVar7;
  long ****pppplVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  ulong uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  long ****local_718;
  long ***local_710;
  long ***local_708;
  long ***local_700;
  long ***local_6f8;
  long ***local_6f0;
  long ***local_6e8;
  long ***local_6e0;
  long ***local_6d8;
  long ***local_6d0;
  long ***local_6c8;
  long ***ppplStack_6c0;
  long ***local_6b8;
  long ***ppplStack_6b0;
  long ***local_6a8;
  undefined1 **ppuStack_6a0;
  undefined1 **local_698;
  undefined1 *local_690;
  undefined1 *puStack_688;
  undefined1 *puStack_680;
  undefined1 *puStack_678;
  undefined1 *local_670;
  undefined1 *puStack_668;
  undefined1 *puStack_660;
  undefined8 uStack_658;
  undefined1 *local_650;
  undefined1 *puStack_648;
  undefined1 *puStack_640;
  undefined1 *puStack_638;
  undefined1 *local_630;
  undefined1 *puStack_628;
  undefined1 *puStack_620;
  undefined8 uStack_618;
  long ***local_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  double local_5d0;
  long ***local_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  double local_580;
  long ***local_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  double local_530;
  long ***local_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  double local_4e0;
  long ***local_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  double local_490;
  long ***local_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  double local_440;
  long ***local_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  double local_3f0;
  long ***local_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  double local_3a0;
  long ***local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  double local_350;
  long ***local_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  double local_300;
  long ***local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  double local_2b0;
  long ***local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  double local_260;
  long ***local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  double local_210;
  long ***local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  double local_1c0;
  long ***local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  double local_170;
  undefined8 ****local_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  long ***local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  double local_100;
  long ***local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  double local_b0;
  undefined8 ****local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  
  memcpy(param_1,&DAT_001fd5e8,0x268);
  FUN_0061f310(param_1,param_2);
  (**(code **)(*param_3 + 0x10))
            (&local_718,param_3,"WebRTC-Aec3StereoContentDetectionKillSwitch",0x2b);
  ppplVar2 = local_710;
  if (-1 < (long)local_708) {
    ppplVar2 = (long ***)((ulong)local_708 >> 0x38);
  }
  if (ppplVar2 < 7) {
    bVar17 = false;
  }
  else {
    ppppplVar4 = (long *****)local_718;
    if (-1 < (long)local_708) {
      ppppplVar4 = &local_718;
    }
    bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
  }
  if ((long)local_708 < 0) {
    operator_delete(local_718);
  }
  if (bVar17) {
    *(undefined1 *)((long)param_1 + 600) = 0;
  }
  (**(code **)(*param_3 + 0x10))
            (&local_718,param_3,"WebRTC-Aec3AntiHowlingMinimizationKillSwitch",0x2c);
  ppplVar2 = local_710;
  if (-1 < (long)local_708) {
    ppplVar2 = (long ***)((ulong)local_708 >> 0x38);
  }
  if (ppplVar2 < 7) {
    bVar17 = false;
  }
  else {
    ppppplVar4 = (long *****)local_718;
    if (-1 < (long)local_708) {
      ppppplVar4 = &local_718;
    }
    bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
  }
  if ((long)local_708 < 0) {
    operator_delete(local_718);
  }
  if (bVar17) {
    *(undefined8 *)((long)param_1 + 0x23c) = 0x3c23d70a41c80000;
  }
  (**(code **)(*param_3 + 0x10))(&local_718,param_3,"WebRTC-Aec3UseShortConfigChangeDuration",0x27);
  ppplVar2 = local_710;
  if (-1 < (long)local_708) {
    ppplVar2 = (long ***)((ulong)local_708 >> 0x38);
  }
  if (ppplVar2 < 7) {
    bVar17 = false;
  }
  else {
    ppppplVar4 = (long *****)local_718;
    if (-1 < (long)local_708) {
      ppppplVar4 = &local_718;
    }
    bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
  }
  if ((long)local_708 < 0) {
    operator_delete(local_718);
  }
  if (bVar17) {
    *(undefined8 *)((long)param_1 + 0xd8) = 10;
  }
  (**(code **)(*param_3 + 0x10))(&local_718,param_3,"WebRTC-Aec3UseZeroInitialStateDuration",0x26);
  ppplVar2 = local_710;
  if (-1 < (long)local_708) {
    ppplVar2 = (long ***)((ulong)local_708 >> 0x38);
  }
  if (ppplVar2 < 7) {
    bVar17 = false;
    if (-1 < (long)local_708) goto LAB_00626208;
LAB_00626214:
    operator_delete(local_718);
    uVar19 = 0;
    if (!bVar17) goto LAB_0062622c;
LAB_0062657c:
    *(undefined4 *)((long)param_1 + 0xe0) = uVar19;
  }
  else {
    ppppplVar4 = (long *****)local_718;
    if (-1 < (long)local_708) {
      ppppplVar4 = &local_718;
    }
    bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
    if ((long)local_708 < 0) goto LAB_00626214;
LAB_00626208:
    uVar19 = 0;
    if (bVar17) goto LAB_0062657c;
LAB_0062622c:
    (**(code **)(*param_3 + 0x10))
              (&local_718,param_3,"WebRTC-Aec3UseDot1SecondsInitialStateDuration",0x2d);
    ppplVar2 = local_710;
    if (-1 < (long)local_708) {
      ppplVar2 = (long ***)((ulong)local_708 >> 0x38);
    }
    if (ppplVar2 < 7) {
      bVar17 = false;
      if (-1 < (long)local_708) goto LAB_0062629c;
LAB_006262b0:
      operator_delete(local_718);
      if (bVar17) goto LAB_006262a0;
    }
    else {
      ppppplVar4 = (long *****)local_718;
      if (-1 < (long)local_708) {
        ppppplVar4 = &local_718;
      }
      bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
      if ((long)local_708 < 0) goto LAB_006262b0;
LAB_0062629c:
      if (bVar17) {
LAB_006262a0:
        uVar19 = 0x3dcccccd;
        goto LAB_0062657c;
      }
    }
    (**(code **)(*param_3 + 0x10))
              (&local_718,param_3,"WebRTC-Aec3UseDot2SecondsInitialStateDuration",0x2d);
    ppplVar2 = local_710;
    if (-1 < (long)local_708) {
      ppplVar2 = (long ***)((ulong)local_708 >> 0x38);
    }
    if (ppplVar2 < 7) {
      bVar17 = false;
      if (-1 < (long)local_708) goto LAB_00626334;
LAB_00626348:
      operator_delete(local_718);
      if (bVar17) goto LAB_00626338;
    }
    else {
      ppppplVar4 = (long *****)local_718;
      if (-1 < (long)local_708) {
        ppppplVar4 = &local_718;
      }
      bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
      if ((long)local_708 < 0) goto LAB_00626348;
LAB_00626334:
      if (bVar17) {
LAB_00626338:
        uVar19 = 0x3e4ccccd;
        goto LAB_0062657c;
      }
    }
    (**(code **)(*param_3 + 0x10))
              (&local_718,param_3,"WebRTC-Aec3UseDot3SecondsInitialStateDuration",0x2d);
    ppplVar2 = local_710;
    if (-1 < (long)local_708) {
      ppplVar2 = (long ***)((ulong)local_708 >> 0x38);
    }
    if (ppplVar2 < 7) {
      bVar17 = false;
    }
    else {
      ppppplVar4 = (long *****)local_718;
      if (-1 < (long)local_708) {
        ppppplVar4 = &local_718;
      }
      bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
    }
    if ((long)local_708 < 0) {
      operator_delete(local_718);
    }
    if (bVar17) {
      uVar19 = 0x3e99999a;
      goto LAB_0062657c;
    }
    (**(code **)(*param_3 + 0x10))
              (&local_718,param_3,"WebRTC-Aec3UseDot6SecondsInitialStateDuration",0x2d);
    ppplVar2 = local_710;
    if (-1 < (long)local_708) {
      ppplVar2 = (long ***)((ulong)local_708 >> 0x38);
    }
    if (ppplVar2 < 7) {
      bVar17 = false;
    }
    else {
      ppppplVar4 = (long *****)local_718;
      if (-1 < (long)local_708) {
        ppppplVar4 = &local_718;
      }
      bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
    }
    if ((long)local_708 < 0) {
      operator_delete(local_718);
    }
    if (bVar17) {
      uVar19 = 0x3f19999a;
      goto LAB_0062657c;
    }
    (**(code **)(*param_3 + 0x10))
              (&local_718,param_3,"WebRTC-Aec3UseDot9SecondsInitialStateDuration",0x2d);
    ppplVar2 = local_710;
    if (-1 < (long)local_708) {
      ppplVar2 = (long ***)((ulong)local_708 >> 0x38);
    }
    if (ppplVar2 < 7) {
      bVar17 = false;
    }
    else {
      ppppplVar4 = (long *****)local_718;
      if (-1 < (long)local_708) {
        ppppplVar4 = &local_718;
      }
      bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
    }
    if ((long)local_708 < 0) {
      operator_delete(local_718);
    }
    if (bVar17) {
      uVar19 = 0x3f666666;
      goto LAB_0062657c;
    }
    uVar18 = FUN_00627fa0(param_3,"WebRTC-Aec3Use1Dot2SecondsInitialStateDuration",0x2e);
    if ((uVar18 & 1) != 0) {
      uVar19 = 0x3f99999a;
      goto LAB_0062657c;
    }
    uVar18 = FUN_00627fa0(param_3,"WebRTC-Aec3Use1Dot6SecondsInitialStateDuration",0x2e);
    if ((uVar18 & 1) != 0) {
      uVar19 = 0x3fcccccd;
      goto LAB_0062657c;
    }
    uVar18 = FUN_00627fa0(param_3,"WebRTC-Aec3Use2Dot0SecondsInitialStateDuration",0x2e);
    uVar19 = 0x40000000;
    if ((uVar18 & 1) != 0) goto LAB_0062657c;
  }
  (**(code **)(*param_3 + 0x10))(&local_718,param_3,"WebRTC-Aec3HighPassFilterEchoReference",0x26);
  ppplVar2 = local_710;
  if (-1 < (long)local_708) {
    ppplVar2 = (long ***)((ulong)local_708 >> 0x38);
  }
  if (ppplVar2 < 7) {
    bVar17 = false;
  }
  else {
    ppppplVar4 = (long *****)local_718;
    if (-1 < (long)local_708) {
      ppppplVar4 = &local_718;
    }
    bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
  }
  if ((long)local_708 < 0) {
    operator_delete(local_718);
  }
  if (bVar17) {
    *(undefined1 *)((long)param_1 + 0xeb) = 1;
  }
  (**(code **)(*param_3 + 0x10))
            (&local_718,param_3,"WebRTC-Aec3EchoSaturationDetectionKillSwitch",0x2c);
  if (-1 < (long)local_708) {
    local_710 = (long ***)((ulong)local_708 >> 0x38);
  }
  if (local_710 < 7) {
    bVar17 = false;
  }
  else {
    ppppplVar4 = (long *****)local_718;
    if (-1 < (long)local_708) {
      ppppplVar4 = &local_718;
    }
    bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
  }
  if ((long)local_708 < 0) {
    operator_delete(local_718);
  }
  if (bVar17) {
    *(undefined1 *)((long)param_1 + 0x11c) = 0;
  }
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = (undefined8 ****)&DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_3 + 0x10))(&local_a0,param_3,"WebRTC-Aec3UseNearendReverbLen",0x1e);
  uVar16 = DAT_001fd890;
  uVar15 = _UNK_001fd888;
  uVar14 = _DAT_001fd880;
  uVar13 = _UNK_001fd878;
  uVar12 = _DAT_001fd870;
  uVar11 = _UNK_001fd868;
  uVar10 = _DAT_001fd860;
  uVar9 = _UNK_001fd858;
  pppplVar8 = _DAT_001fd850;
  fVar20 = *(float *)((long)param_1 + 0x114);
  uStack_d8 = _UNK_001fd868;
  local_e0 = _DAT_001fd860;
  local_b0 = (double)DAT_001fd890;
  uStack_e8 = _UNK_001fd858;
  local_f0 = (long ***)_DAT_001fd850;
  uStack_c8 = _UNK_001fd878;
  local_d0 = _DAT_001fd870;
  uStack_b8 = _UNK_001fd888;
  local_c0 = _DAT_001fd880;
  FUN_00661054(&local_f0,"default_len",0xb);
  fVar21 = *(float *)((long)param_1 + 0x118);
  uStack_138 = uVar9;
  local_140 = (long ***)pppplVar8;
  pppplVar1 = (long ****)(PTR_DAT_00d52020 + 0x10);
  local_100 = (double)uVar16;
  uStack_118 = uVar13;
  local_120 = uVar12;
  uStack_128 = uVar11;
  local_130 = uVar10;
  uStack_108 = uVar15;
  local_110 = uVar14;
  local_f0 = (long ***)pppplVar1;
  local_b0 = (double)fVar20;
  FUN_00661054(&local_140,"nearend_len",0xb);
  puVar5 = puStack_98;
  pppppuVar7 = (undefined8 *****)local_a0;
  if (-1 < (long)local_90) {
    puVar5 = (undefined1 *)((ulong)local_90 >> 0x38);
    pppppuVar7 = &local_a0;
  }
  local_718 = &local_f0;
  local_710 = (long ***)&local_140;
  local_140 = (long ***)pppplVar1;
  local_100 = (double)fVar21;
  FUN_00661cc0(&local_718,2,pppppuVar7,puVar5);
  if ((ABS(local_b0) < 0.9999999701976776) && (ABS(local_100) < 0.9999999701976776)) {
    *(float *)((long)param_1 + 0x114) = (float)local_b0;
    *(float *)((long)param_1 + 0x118) = (float)local_100;
  }
  (**(code **)(*param_3 + 0x10))(&local_718,param_3,"WebRTC-Aec3ConservativeTailFreqResponse",0x27);
  pppplVar1 = (long ****)local_710;
  if (-1 < (long)local_708) {
    pppplVar1 = (long ****)((ulong)local_708 >> 0x38);
  }
  if (pppplVar1 < (long ****)0x7) {
    bVar17 = false;
  }
  else {
    ppppplVar4 = (long *****)local_718;
    if (-1 < (long)local_708) {
      ppppplVar4 = &local_718;
    }
    bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
  }
  if ((long)local_708 < 0) {
    operator_delete(local_718);
  }
  if (bVar17) {
    *(undefined1 *)((long)param_1 + 0x11f) = 1;
  }
  (**(code **)(*param_3 + 0x10))(&local_718,param_3,"WebRTC-Aec3ConservativeTailFreqResponse",0x27);
  pppplVar1 = (long ****)local_710;
  if (-1 < (long)local_708) {
    pppplVar1 = (long ****)((ulong)local_708 >> 0x38);
  }
  if (pppplVar1 < (long ****)0x8) {
    bVar17 = false;
  }
  else {
    ppppplVar4 = (long *****)local_718;
    if (-1 < (long)local_708) {
      ppppplVar4 = &local_718;
    }
    bVar17 = *ppppplVar4 == (long ****)0x64656c6261736944;
  }
  if ((long)local_708 < 0) {
    operator_delete(local_718);
  }
  if (bVar17) {
    *(undefined1 *)((long)param_1 + 0x11f) = 0;
  }
  (**(code **)(*param_3 + 0x10))(&local_718,param_3,"WebRTC-Aec3ShortHeadroomKillSwitch",0x22);
  pppplVar1 = (long ****)local_710;
  if (-1 < (long)local_708) {
    pppplVar1 = (long ****)((ulong)local_708 >> 0x38);
  }
  if (pppplVar1 < (long ****)0x7) {
    bVar17 = false;
  }
  else {
    ppppplVar4 = (long *****)local_718;
    if (-1 < (long)local_708) {
      ppppplVar4 = &local_718;
    }
    bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
  }
  if ((long)local_708 < 0) {
    operator_delete(local_718);
  }
  if (bVar17) {
    *(undefined8 *)((long)param_1 + 0x28) = 0x80;
  }
  (**(code **)(*param_3 + 0x10))
            (&local_718,param_3,"WebRTC-Aec3ClampInstQualityToZeroKillSwitch",0x2b);
  pppplVar1 = (long ****)local_710;
  if (-1 < (long)local_708) {
    pppplVar1 = (long ****)((ulong)local_708 >> 0x38);
  }
  if (pppplVar1 < (long ****)0x7) {
    bVar17 = false;
  }
  else {
    ppppplVar4 = (long *****)local_718;
    if (-1 < (long)local_708) {
      ppppplVar4 = &local_718;
    }
    bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
  }
  if ((long)local_708 < 0) {
    operator_delete(local_718);
  }
  if (bVar17) {
    *(undefined1 *)((long)param_1 + 0x108) = 0;
  }
  (**(code **)(*param_3 + 0x10))
            (&local_718,param_3,"WebRTC-Aec3ClampInstQualityToOneKillSwitch",0x2a);
  pppplVar1 = (long ****)local_710;
  if (-1 < (long)local_708) {
    pppplVar1 = (long ****)((ulong)local_708 >> 0x38);
  }
  if (pppplVar1 < (long ****)0x7) {
    bVar17 = false;
  }
  else {
    ppppplVar4 = (long *****)local_718;
    if (-1 < (long)local_708) {
      ppppplVar4 = &local_718;
    }
    bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
  }
  if ((long)local_708 < 0) {
    operator_delete(local_718);
  }
  if (bVar17) {
    *(undefined1 *)((long)param_1 + 0x109) = 0;
  }
  (**(code **)(*param_3 + 0x10))(&local_718,param_3,"WebRTC-Aec3OnsetDetectionKillSwitch",0x23);
  pppplVar1 = (long ****)local_710;
  if (-1 < (long)local_708) {
    pppplVar1 = (long ****)((ulong)local_708 >> 0x38);
  }
  if (pppplVar1 < (long ****)0x7) {
    bVar17 = false;
  }
  else {
    ppppplVar4 = (long *****)local_718;
    if (-1 < (long)local_708) {
      ppppplVar4 = &local_718;
    }
    bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
  }
  if ((long)local_708 < 0) {
    operator_delete(local_718);
  }
  if (bVar17) {
    *(undefined1 *)((long)param_1 + 0xfc) = 0;
  }
  (**(code **)(*param_3 + 0x10))
            (&local_718,param_3,"WebRTC-Aec3EnforceRenderDelayEstimationDownmixing",0x31);
  pppplVar1 = (long ****)local_710;
  if (-1 < (long)local_708) {
    pppplVar1 = (long ****)((ulong)local_708 >> 0x38);
  }
  if (pppplVar1 < (long ****)0x7) {
    bVar17 = false;
  }
  else {
    ppppplVar4 = (long *****)local_718;
    if (-1 < (long)local_708) {
      ppppplVar4 = &local_718;
    }
    bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
  }
  if ((long)local_708 < 0) {
    operator_delete(local_718);
  }
  if (bVar17) {
    *(undefined2 *)((long)param_1 + 0x58) = 1;
  }
  (**(code **)(*param_3 + 0x10))
            (&local_718,param_3,"WebRTC-Aec3EnforceCaptureDelayEstimationDownmixing",0x32);
  pppplVar1 = (long ****)local_710;
  if (-1 < (long)local_708) {
    pppplVar1 = (long ****)((ulong)local_708 >> 0x38);
  }
  if (pppplVar1 < (long ****)0x7) {
    bVar17 = false;
  }
  else {
    ppppplVar4 = (long *****)local_718;
    if (-1 < (long)local_708) {
      ppppplVar4 = &local_718;
    }
    bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
  }
  if ((long)local_708 < 0) {
    operator_delete(local_718);
  }
  if (bVar17) {
    *(undefined2 *)((long)param_1 + 100) = 1;
  }
  (**(code **)(*param_3 + 0x10))
            (&local_718,param_3,"WebRTC-Aec3EnforceCaptureDelayEstimationLeftRightPrioritization",
             0x3f);
  pppplVar1 = (long ****)local_710;
  if (-1 < (long)local_708) {
    pppplVar1 = (long ****)((ulong)local_708 >> 0x38);
  }
  if (pppplVar1 < (long ****)0x7) {
    bVar17 = false;
  }
  else {
    ppppplVar4 = (long *****)local_718;
    if (-1 < (long)local_708) {
      ppppplVar4 = &local_718;
    }
    bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
  }
  if ((long)local_708 < 0) {
    operator_delete(local_718);
  }
  if (bVar17) {
    *(undefined1 *)((long)param_1 + 0x6c) = 1;
  }
  (**(code **)(*param_3 + 0x10))
            (&local_718,param_3,"WebRTC-Aec3RenderDelayEstimationLeftRightPrioritizationKillSwitch",
             0x41);
  pppplVar1 = (long ****)local_710;
  if (-1 < (long)local_708) {
    pppplVar1 = (long ****)((ulong)local_708 >> 0x38);
  }
  if (pppplVar1 < (long ****)0x7) {
    bVar17 = false;
  }
  else {
    ppppplVar4 = (long *****)local_718;
    if (-1 < (long)local_708) {
      ppppplVar4 = &local_718;
    }
    bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
  }
  if ((long)local_708 < 0) {
    operator_delete(local_718);
  }
  if (bVar17) {
    *(undefined1 *)((long)param_1 + 0x6c) = 0;
  }
  (**(code **)(*param_3 + 0x10))
            (&local_718,param_3,"WebRTC-Aec3SensitiveDominantNearendActivation",0x2d);
  pppplVar1 = (long ****)local_710;
  if (-1 < (long)local_708) {
    pppplVar1 = (long ****)((ulong)local_708 >> 0x38);
  }
  if (pppplVar1 < (long ****)0x7) {
    bVar17 = false;
    if (-1 < (long)local_708) goto LAB_00626dbc;
LAB_00626dc8:
    operator_delete(local_718);
    uVar19 = 0x3f000000;
    if (!bVar17) goto LAB_00626de0;
LAB_00626e68:
    *(undefined4 *)((long)param_1 + 0x1e4) = uVar19;
  }
  else {
    ppppplVar4 = (long *****)local_718;
    if (-1 < (long)local_708) {
      ppppplVar4 = &local_718;
    }
    bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
    if ((long)local_708 < 0) goto LAB_00626dc8;
LAB_00626dbc:
    uVar19 = 0x3f000000;
    if (bVar17) goto LAB_00626e68;
LAB_00626de0:
    (**(code **)(*param_3 + 0x10))
              (&local_718,param_3,"WebRTC-Aec3VerySensitiveDominantNearendActivation",0x31);
    pppplVar1 = (long ****)local_710;
    if (-1 < (long)local_708) {
      pppplVar1 = (long ****)((ulong)local_708 >> 0x38);
    }
    if (pppplVar1 < (long ****)0x7) {
      bVar17 = false;
    }
    else {
      ppppplVar4 = (long *****)local_718;
      if (-1 < (long)local_708) {
        ppppplVar4 = &local_718;
      }
      bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
    }
    if ((long)local_708 < 0) {
      operator_delete(local_718);
    }
    uVar19 = 0x3f400000;
    if (bVar17) goto LAB_00626e68;
  }
  (**(code **)(*param_3 + 0x10))(&local_718,param_3,"WebRTC-Aec3TransparentAntiHowlingGain",0x25);
  pppplVar1 = (long ****)local_710;
  if (-1 < (long)local_708) {
    pppplVar1 = (long ****)((ulong)local_708 >> 0x38);
  }
  if (pppplVar1 < (long ****)0x7) {
    bVar17 = false;
  }
  else {
    ppppplVar4 = (long *****)local_718;
    if (-1 < (long)local_708) {
      ppppplVar4 = &local_718;
    }
    bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
  }
  if ((long)local_708 < 0) {
    operator_delete(local_718);
  }
  if (bVar17) {
    *(undefined4 *)((long)param_1 + 0x240) = 0x3f800000;
  }
  (**(code **)(*param_3 + 0x10))
            (&local_718,param_3,"WebRTC-Aec3EnforceMoreTransparentNormalSuppressorTuning",0x37);
  pppplVar1 = (long ****)local_710;
  if (-1 < (long)local_708) {
    pppplVar1 = (long ****)((ulong)local_708 >> 0x38);
  }
  if (pppplVar1 < (long ****)0x7) {
    bVar17 = false;
  }
  else {
    ppppplVar4 = (long *****)local_718;
    if (-1 < (long)local_708) {
      ppppplVar4 = &local_718;
    }
    bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
  }
  if ((long)local_708 < 0) {
    operator_delete(local_718);
  }
  if (bVar17) {
    *(undefined8 *)((long)param_1 + 400) = DAT_001f5a20;
  }
  (**(code **)(*param_3 + 0x10))
            (&local_718,param_3,"WebRTC-Aec3EnforceMoreTransparentNearendSuppressorTuning",0x38);
  pppplVar1 = (long ****)local_710;
  if (-1 < (long)local_708) {
    pppplVar1 = (long ****)((ulong)local_708 >> 0x38);
  }
  if (pppplVar1 < (long ****)0x7) {
    bVar17 = false;
  }
  else {
    ppppplVar4 = (long *****)local_718;
    if (-1 < (long)local_708) {
      ppppplVar4 = &local_718;
    }
    bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
  }
  if ((long)local_708 < 0) {
    operator_delete(local_718);
  }
  if (bVar17) {
    *(undefined8 *)((long)param_1 + 0x1b0) = DAT_001f54c0;
  }
  (**(code **)(*param_3 + 0x10))
            (&local_718,param_3,"WebRTC-Aec3EnforceMoreTransparentNormalSuppressorHfTuning",0x39);
  pppplVar1 = (long ****)local_710;
  if (-1 < (long)local_708) {
    pppplVar1 = (long ****)((ulong)local_708 >> 0x38);
  }
  if (pppplVar1 < (long ****)0x7) {
    bVar17 = false;
  }
  else {
    ppppplVar4 = (long *****)local_718;
    if (-1 < (long)local_708) {
      ppppplVar4 = &local_718;
    }
    bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
  }
  if ((long)local_708 < 0) {
    operator_delete(local_718);
  }
  if (bVar17) {
    *(undefined8 *)((long)param_1 + 0x19c) = 0x3ecccccd3e99999a;
  }
  (**(code **)(*param_3 + 0x10))
            (&local_718,param_3,"WebRTC-Aec3EnforceMoreTransparentNearendSuppressorHfTuning",0x3a);
  pppplVar1 = (long ****)local_710;
  if (-1 < (long)local_708) {
    pppplVar1 = (long ****)((ulong)local_708 >> 0x38);
  }
  if (pppplVar1 < (long ****)0x7) {
    bVar17 = false;
  }
  else {
    ppppplVar4 = (long *****)local_718;
    if (-1 < (long)local_708) {
      ppppplVar4 = &local_718;
    }
    bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
  }
  if ((long)local_708 < 0) {
    operator_delete(local_718);
  }
  if (bVar17) {
    *(undefined8 *)((long)param_1 + 0x1bc) = 0x3f8ccccd3f8b851f;
  }
  (**(code **)(*param_3 + 0x10))
            (&local_718,param_3,"WebRTC-Aec3EnforceRapidlyAdjustingNormalSuppressorTunings",0x39);
  pppplVar1 = (long ****)local_710;
  if (-1 < (long)local_708) {
    pppplVar1 = (long ****)((ulong)local_708 >> 0x38);
  }
  if (pppplVar1 < (long ****)0x7) {
    bVar17 = false;
  }
  else {
    ppppplVar4 = (long *****)local_718;
    if (-1 < (long)local_708) {
      ppppplVar4 = &local_718;
    }
    bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
  }
  if ((long)local_708 < 0) {
    operator_delete(local_718);
  }
  if (bVar17) {
    *(undefined4 *)((long)param_1 + 0x1a8) = 0x40200000;
  }
  (**(code **)(*param_3 + 0x10))
            (&local_718,param_3,"WebRTC-Aec3EnforceRapidlyAdjustingNearendSuppressorTunings",0x3a);
  pppplVar1 = (long ****)local_710;
  if (-1 < (long)local_708) {
    pppplVar1 = (long ****)((ulong)local_708 >> 0x38);
  }
  if (pppplVar1 < (long ****)0x7) {
    bVar17 = false;
  }
  else {
    ppppplVar4 = (long *****)local_718;
    if (-1 < (long)local_708) {
      ppppplVar4 = &local_718;
    }
    bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
  }
  if ((long)local_708 < 0) {
    operator_delete(local_718);
  }
  if (bVar17) {
    *(undefined4 *)((long)param_1 + 0x1c8) = 0x40200000;
  }
  (**(code **)(*param_3 + 0x10))
            (&local_718,param_3,"WebRTC-Aec3EnforceSlowlyAdjustingNormalSuppressorTunings",0x38);
  pppplVar1 = (long ****)local_710;
  if (-1 < (long)local_708) {
    pppplVar1 = (long ****)((ulong)local_708 >> 0x38);
  }
  if (pppplVar1 < (long ****)0x7) {
    bVar17 = false;
  }
  else {
    ppppplVar4 = (long *****)local_718;
    if (-1 < (long)local_708) {
      ppppplVar4 = &local_718;
    }
    bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
  }
  if ((long)local_708 < 0) {
    operator_delete(local_718);
  }
  if (bVar17) {
    *(undefined4 *)((long)param_1 + 0x1ac) = 0x3e4ccccd;
  }
  (**(code **)(*param_3 + 0x10))
            (&local_718,param_3,"WebRTC-Aec3EnforceSlowlyAdjustingNearendSuppressorTunings",0x39);
  pppplVar1 = (long ****)local_710;
  if (-1 < (long)local_708) {
    pppplVar1 = (long ****)((ulong)local_708 >> 0x38);
  }
  if (pppplVar1 < (long ****)0x7) {
    bVar17 = false;
  }
  else {
    ppppplVar4 = (long *****)local_718;
    if (-1 < (long)local_708) {
      ppppplVar4 = &local_718;
    }
    bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
  }
  if ((long)local_708 < 0) {
    operator_delete(local_718);
  }
  if (bVar17) {
    *(undefined4 *)((long)param_1 + 0x1cc) = 0x3e4ccccd;
  }
  (**(code **)(*param_3 + 0x10))
            (&local_718,param_3,"WebRTC-Aec3EnforceConservativeHfSuppression",0x2b);
  pppplVar1 = (long ****)local_710;
  if (-1 < (long)local_708) {
    pppplVar1 = (long ****)((ulong)local_708 >> 0x38);
  }
  if (pppplVar1 < (long ****)0x7) {
    bVar17 = false;
  }
  else {
    ppppplVar4 = (long *****)local_718;
    if (-1 < (long)local_708) {
      ppppplVar4 = &local_718;
    }
    bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
  }
  if ((long)local_708 < 0) {
    operator_delete(local_718);
  }
  if (bVar17) {
    *(undefined1 *)((long)param_1 + 0x250) = 1;
  }
  (**(code **)(*param_3 + 0x10))(&local_718,param_3,"WebRTC-Aec3EnforceStationarityProperties",0x28)
  ;
  pppplVar1 = (long ****)local_710;
  if (-1 < (long)local_708) {
    pppplVar1 = (long ****)((ulong)local_708 >> 0x38);
  }
  if (pppplVar1 < (long ****)0x7) {
    bVar17 = false;
  }
  else {
    ppppplVar4 = (long *****)local_718;
    if (-1 < (long)local_708) {
      ppppplVar4 = &local_718;
    }
    bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
  }
  if ((long)local_708 < 0) {
    operator_delete(local_718);
  }
  if (bVar17) {
    *(undefined1 *)((long)param_1 + 0x138) = 1;
  }
  (**(code **)(*param_3 + 0x10))
            (&local_718,param_3,"WebRTC-Aec3EnforceStationarityPropertiesAtInit",0x2e);
  pppplVar1 = (long ****)local_710;
  if (-1 < (long)local_708) {
    pppplVar1 = (long ****)((ulong)local_708 >> 0x38);
  }
  if (pppplVar1 < (long ****)0x7) {
    bVar17 = false;
  }
  else {
    ppppplVar4 = (long *****)local_718;
    if (-1 < (long)local_708) {
      ppppplVar4 = &local_718;
    }
    bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
  }
  if ((long)local_708 < 0) {
    operator_delete(local_718);
  }
  if (bVar17) {
    *(undefined1 *)((long)param_1 + 0x139) = 1;
  }
  (**(code **)(*param_3 + 0x10))(&local_718,param_3,"WebRTC-Aec3EnforceLowActiveRenderLimit",0x26);
  pppplVar1 = (long ****)local_710;
  if (-1 < (long)local_708) {
    pppplVar1 = (long ****)((ulong)local_708 >> 0x38);
  }
  if (pppplVar1 < (long ****)0x7) {
    bVar17 = false;
    if (-1 < (long)local_708) goto LAB_0062759c;
LAB_006275ac:
    operator_delete(local_718);
    if (bVar17) goto LAB_006275a0;
LAB_006275c0:
    (**(code **)(*param_3 + 0x10))
              (&local_718,param_3,"WebRTC-Aec3EnforceVeryLowActiveRenderLimit",0x2a);
    pppplVar1 = (long ****)local_710;
    if (-1 < (long)local_708) {
      pppplVar1 = (long ****)((ulong)local_708 >> 0x38);
    }
    if (pppplVar1 < (long ****)0x7) {
      bVar17 = false;
    }
    else {
      ppppplVar4 = (long *****)local_718;
      if (-1 < (long)local_708) {
        ppppplVar4 = &local_718;
      }
      bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
    }
    if ((long)local_708 < 0) {
      operator_delete(local_718);
    }
    uVar19 = 0x41f00000;
    if (!bVar17) goto LAB_0062764c;
  }
  else {
    ppppplVar4 = (long *****)local_718;
    if (-1 < (long)local_708) {
      ppppplVar4 = &local_718;
    }
    bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
    if ((long)local_708 < 0) goto LAB_006275ac;
LAB_0062759c:
    if (!bVar17) goto LAB_006275c0;
LAB_006275a0:
    uVar19 = 0x42480000;
  }
  *(undefined4 *)((long)param_1 + 0x13c) = uVar19;
LAB_0062764c:
  (**(code **)(*param_3 + 0x10))(&local_718,param_3,"WebRTC-Aec3NonlinearModeReverbKillSwitch",0x28)
  ;
  pppplVar1 = (long ****)local_710;
  if (-1 < (long)local_708) {
    pppplVar1 = (long ****)((ulong)local_708 >> 0x38);
  }
  if (pppplVar1 < (long ****)0x7) {
    bVar17 = false;
  }
  else {
    ppppplVar4 = (long *****)local_718;
    if (-1 < (long)local_708) {
      ppppplVar4 = &local_718;
    }
    bVar17 = *(int *)ppppplVar4 == 0x62616e45 && *(int *)((long)ppppplVar4 + 3) == 0x64656c62;
  }
  if ((long)local_708 < 0) {
    operator_delete(local_718);
  }
  if (bVar17) {
    *(undefined1 *)((long)param_1 + 0x178) = 0;
  }
  local_150 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  local_160 = (undefined8 ****)&DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_3 + 0x10))(&local_160,param_3,"WebRTC-Aec3SuppressorTuningOverride",0x23);
  fVar20 = *(float *)((long)param_1 + 0x1b0);
  uStack_1a8 = uVar9;
  local_1b0 = (long ***)pppplVar8;
  local_170 = (double)uVar16;
  uStack_188 = uVar13;
  local_190 = uVar12;
  uStack_198 = uVar11;
  local_1a0 = uVar10;
  uStack_178 = uVar15;
  local_180 = uVar14;
  FUN_00661054(&local_1b0,"nearend_tuning_mask_lf_enr_transparent",0x26);
  fVar21 = *(float *)((long)param_1 + 0x1b4);
  uStack_1f8 = uVar9;
  local_200 = (long ***)pppplVar8;
  ppplVar2 = (long ***)(PTR_DAT_00d52020 + 0x10);
  local_1c0 = (double)uVar16;
  uStack_1d8 = uVar13;
  local_1e0 = uVar12;
  uStack_1e8 = uVar11;
  local_1f0 = uVar10;
  uStack_1c8 = uVar15;
  local_1d0 = uVar14;
  local_1b0 = ppplVar2;
  local_170 = (double)fVar20;
  FUN_00661054(&local_200,"nearend_tuning_mask_lf_enr_suppress",0x23);
  fVar20 = *(float *)((long)param_1 + 0x1bc);
  uStack_248 = uVar9;
  local_250 = (long ***)pppplVar8;
  local_210 = (double)uVar16;
  uStack_228 = uVar13;
  local_230 = uVar12;
  uStack_238 = uVar11;
  local_240 = uVar10;
  uStack_218 = uVar15;
  local_220 = uVar14;
  local_200 = ppplVar2;
  local_1c0 = (double)fVar21;
  FUN_00661054(&local_250,"nearend_tuning_mask_hf_enr_transparent",0x26);
  fVar21 = *(float *)((long)param_1 + 0x1c0);
  local_260 = (double)uVar16;
  uStack_298 = uVar9;
  local_2a0 = (long ***)pppplVar8;
  uStack_288 = uVar11;
  uStack_290 = uVar10;
  uStack_278 = uVar13;
  local_280 = uVar12;
  uStack_268 = uVar15;
  local_270 = uVar14;
  local_250 = ppplVar2;
  local_210 = (double)fVar20;
  FUN_00661054(&local_2a0,"nearend_tuning_mask_hf_enr_suppress",0x23);
  fVar20 = *(float *)((long)param_1 + 0x1c8);
  local_2b0 = (double)uVar16;
  uStack_2e8 = uVar9;
  local_2f0 = (long ***)pppplVar8;
  uStack_2d8 = uVar11;
  uStack_2e0 = uVar10;
  uStack_2c8 = uVar13;
  local_2d0 = uVar12;
  uStack_2b8 = uVar15;
  uStack_2c0 = uVar14;
  local_2a0 = ppplVar2;
  local_260 = (double)fVar21;
  FUN_00661054(&local_2f0,"nearend_tuning_max_inc_factor",0x1d);
  fVar21 = *(float *)((long)param_1 + 0x1cc);
  local_300 = (double)uVar16;
  uStack_338 = uVar9;
  local_340 = (long ***)pppplVar8;
  uStack_328 = uVar11;
  uStack_330 = uVar10;
  uStack_318 = uVar13;
  local_320 = uVar12;
  uStack_308 = uVar15;
  uStack_310 = uVar14;
  local_2f0 = ppplVar2;
  local_2b0 = (double)fVar20;
  FUN_00661054(&local_340,"nearend_tuning_max_dec_factor_lf",0x20);
  fVar20 = *(float *)((long)param_1 + 400);
  local_350 = (double)uVar16;
  uStack_388 = uVar9;
  local_390 = (long ***)pppplVar8;
  uStack_378 = uVar11;
  uStack_380 = uVar10;
  uStack_368 = uVar13;
  local_370 = uVar12;
  uStack_358 = uVar15;
  uStack_360 = uVar14;
  local_340 = ppplVar2;
  local_300 = (double)fVar21;
  FUN_00661054(&local_390,"normal_tuning_mask_lf_enr_transparent",0x25);
  fVar21 = *(float *)((long)param_1 + 0x194);
  local_3a0 = (double)uVar16;
  uStack_3d8 = uVar9;
  local_3e0 = (long ***)pppplVar8;
  uStack_3c8 = uVar11;
  uStack_3d0 = uVar10;
  uStack_3b8 = uVar13;
  local_3c0 = uVar12;
  uStack_3a8 = uVar15;
  uStack_3b0 = uVar14;
  local_390 = ppplVar2;
  local_350 = (double)fVar20;
  FUN_00661054(&local_3e0,"normal_tuning_mask_lf_enr_suppress",0x22);
  fVar20 = *(float *)((long)param_1 + 0x19c);
  local_3f0 = (double)uVar16;
  uStack_428 = uVar9;
  local_430 = (long ***)pppplVar8;
  uStack_418 = uVar11;
  uStack_420 = uVar10;
  uStack_408 = uVar13;
  local_410 = uVar12;
  uStack_3f8 = uVar15;
  uStack_400 = uVar14;
  local_3e0 = ppplVar2;
  local_3a0 = (double)fVar21;
  FUN_00661054(&local_430,"normal_tuning_mask_hf_enr_transparent",0x25);
  fVar21 = *(float *)((long)param_1 + 0x1a0);
  local_440 = (double)uVar16;
  uStack_478 = uVar9;
  local_480 = (long ***)pppplVar8;
  uStack_468 = uVar11;
  uStack_470 = uVar10;
  uStack_458 = uVar13;
  local_460 = uVar12;
  uStack_448 = uVar15;
  uStack_450 = uVar14;
  local_430 = ppplVar2;
  local_3f0 = (double)fVar20;
  FUN_00661054(&local_480,"normal_tuning_mask_hf_enr_suppress",0x22);
  fVar20 = *(float *)((long)param_1 + 0x1a8);
  local_490 = (double)uVar16;
  uStack_4c8 = uVar9;
  local_4d0 = (long ***)pppplVar8;
  uStack_4b8 = uVar11;
  uStack_4c0 = uVar10;
  uStack_4a8 = uVar13;
  local_4b0 = uVar12;
  uStack_498 = uVar15;
  uStack_4a0 = uVar14;
  local_480 = ppplVar2;
  local_440 = (double)fVar21;
  FUN_00661054(&local_4d0,"normal_tuning_max_inc_factor",0x1c);
  fVar21 = *(float *)((long)param_1 + 0x1ac);
  local_4e0 = (double)uVar16;
  uStack_518 = uVar9;
  local_520 = (long ***)pppplVar8;
  uStack_508 = uVar11;
  uStack_510 = uVar10;
  uStack_4f8 = uVar13;
  local_500 = uVar12;
  uStack_4e8 = uVar15;
  uStack_4f0 = uVar14;
  local_4d0 = ppplVar2;
  local_490 = (double)fVar20;
  FUN_00661054(&local_520,"normal_tuning_max_dec_factor_lf",0x1f);
  fVar20 = *(float *)((long)param_1 + 0x1e4);
  local_530 = (double)uVar16;
  uStack_568 = uVar9;
  local_570 = (long ***)pppplVar8;
  uStack_558 = uVar11;
  uStack_560 = uVar10;
  uStack_548 = uVar13;
  local_550 = uVar12;
  uStack_538 = uVar15;
  uStack_540 = uVar14;
  local_520 = ppplVar2;
  local_4e0 = (double)fVar21;
  FUN_00661054(&local_570,"dominant_nearend_detection_enr_threshold",0x28);
  fVar21 = *(float *)((long)param_1 + 0x1e8);
  local_580 = (double)uVar16;
  uStack_5b8 = uVar9;
  local_5c0 = (long ***)pppplVar8;
  uStack_5a8 = uVar11;
  uStack_5b0 = uVar10;
  uStack_598 = uVar13;
  local_5a0 = uVar12;
  uStack_588 = uVar15;
  uStack_590 = uVar14;
  local_570 = ppplVar2;
  local_530 = (double)fVar20;
  FUN_00661054(&local_5c0,"dominant_nearend_detection_enr_exit_threshold",0x2d);
  fVar20 = *(float *)((long)param_1 + 0x1ec);
  local_5d0 = (double)uVar16;
  uStack_608 = uVar9;
  local_610 = (long ***)pppplVar8;
  uStack_5f8 = uVar11;
  uStack_600 = uVar10;
  uStack_5e8 = uVar13;
  local_5f0 = uVar12;
  uStack_5d8 = uVar15;
  uStack_5e0 = uVar14;
  local_5c0 = ppplVar2;
  local_580 = (double)fVar21;
  FUN_00661054(&local_610,"dominant_nearend_detection_snr_threshold",0x28);
  uVar19 = *(undefined4 *)((long)param_1 + 0x1f0);
  puStack_648 = &DAT_aaaaaaaaaaaaaaaa;
  local_650 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_638 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_640 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_628 = &DAT_aaaaaaaaaaaaaaaa;
  local_630 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_618 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_620 = &DAT_aaaaaaaaaaaaaaaa;
  local_610 = ppplVar2;
  local_5d0 = (double)fVar20;
  FUN_00661054(&local_650,"dominant_nearend_detection_hold_duration",0x28);
  uVar6 = *(undefined4 *)((long)param_1 + 500);
  puVar3 = PTR_DAT_00d52028 + 0x10;
  puStack_668 = &DAT_aaaaaaaaaaaaaaaa;
  local_670 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_658 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_660 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_688 = &DAT_aaaaaaaaaaaaaaaa;
  local_690 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_678 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_680 = &DAT_aaaaaaaaaaaaaaaa;
  local_650 = puVar3;
  uStack_618._4_4_ = uVar19;
  FUN_00661054(&local_690,"dominant_nearend_detection_trigger_threshold",0x2c);
  local_718 = &local_1b0;
  local_6b8 = (long ***)&local_570;
  local_710 = (long ***)&local_200;
  local_708 = (long ***)&local_250;
  local_700 = (long ***)&local_2a0;
  local_6f8 = (long ***)&local_2f0;
  local_6f0 = (long ***)&local_340;
  local_6e8 = (long ***)&local_390;
  local_6e0 = (long ***)&local_3e0;
  local_6d8 = (long ***)&local_430;
  local_6d0 = (long ***)&local_480;
  local_6c8 = (long ***)&local_4d0;
  puVar5 = puStack_158;
  pppppuVar7 = (undefined8 *****)local_160;
  if (-1 < (long)local_150) {
    puVar5 = (undefined1 *)((ulong)local_150 >> 0x38);
    pppppuVar7 = &local_160;
  }
  ppplStack_6c0 = (long ***)&local_520;
  ppplStack_6b0 = (long ***)&local_5c0;
  local_6a8 = (long ***)&local_610;
  ppuStack_6a0 = &local_650;
  local_698 = &local_690;
  local_690 = puVar3;
  uStack_658._4_4_ = uVar6;
  FUN_00661cc0(&local_718,0x11,pppppuVar7,puVar5);
  *(float *)((long)param_1 + 0x1bc) = (float)local_210;
  *(float *)((long)param_1 + 0x1cc) = (float)local_300;
  *(float *)((long)param_1 + 400) = (float)local_350;
  *(float *)((long)param_1 + 0x1c8) = (float)local_2b0;
  *(float *)((long)param_1 + 0x1c0) = (float)local_260;
  *(float *)((long)param_1 + 0x19c) = (float)local_3f0;
  *(float *)((long)param_1 + 0x194) = (float)local_3a0;
  *(undefined4 *)((long)param_1 + 0x1f0) = uStack_618._4_4_;
  *(float *)((long)param_1 + 0x1ec) = (float)local_5d0;
  *(ulong *)((long)param_1 + 0x1b0) = CONCAT44((float)local_1c0,(float)local_170);
  *(ulong *)((long)param_1 + 0x1a8) = CONCAT44((float)local_4e0,(float)local_490);
  *(float *)((long)param_1 + 0x1a0) = (float)local_440;
  *(float *)((long)param_1 + 0x1e4) = (float)local_530;
  *(float *)((long)param_1 + 0x1e8) = (float)local_580;
  *(undefined4 *)((long)param_1 + 500) = uStack_658._4_4_;
  FUN_0062804c(0x41200000,param_3,"WebRTC-Aec3SuppressorNearendLfMaskTransparentOverride",0x35,
               (long)param_1 + 0x1b0);
  FUN_0062804c(0x41200000,param_3,"WebRTC-Aec3SuppressorNearendLfMaskSuppressOverride",0x32,
               (long)param_1 + 0x1b4);
  FUN_0062804c(0x41200000,param_3,"WebRTC-Aec3SuppressorNearendHfMaskTransparentOverride",0x35,
               (long)param_1 + 0x1bc);
  FUN_0062804c(0x41200000,param_3,"WebRTC-Aec3SuppressorNearendHfMaskSuppressOverride",0x32,
               (long)param_1 + 0x1c0);
  FUN_0062804c(0x41200000,param_3,"WebRTC-Aec3SuppressorNearendMaxIncFactorOverride",0x30,
               (long)param_1 + 0x1c8);
  FUN_0062804c(0x41200000,param_3,"WebRTC-Aec3SuppressorNearendMaxDecFactorLfOverride",0x32,
               (long)param_1 + 0x1cc);
  FUN_0062804c(0x41200000,param_3,"WebRTC-Aec3SuppressorNormalLfMaskTransparentOverride",0x34,
               (long)param_1 + 400);
  FUN_0062804c(0x41200000,param_3,"WebRTC-Aec3SuppressorNormalLfMaskSuppressOverride",0x31,
               (long)param_1 + 0x194);
  FUN_0062804c(0x41200000,param_3,"WebRTC-Aec3SuppressorNormalHfMaskTransparentOverride",0x34,
               (long)param_1 + 0x19c);
  FUN_0062804c(0x41200000,param_3,"WebRTC-Aec3SuppressorNormalHfMaskSuppressOverride",0x31,
               (long)param_1 + 0x1a0);
  FUN_0062804c(0x41200000,param_3,"WebRTC-Aec3SuppressorNormalMaxIncFactorOverride",0x2f,
               (long)param_1 + 0x1a8);
  FUN_0062804c(0x41200000,param_3,"WebRTC-Aec3SuppressorNormalMaxDecFactorLfOverride",0x31,
               (long)param_1 + 0x1ac);
  FUN_0062804c(0x42c80000,param_3,"WebRTC-Aec3SuppressorDominantNearendEnrThresholdOverride",0x38,
               (long)param_1 + 0x1e4);
  FUN_0062804c(0x42c80000,param_3,"WebRTC-Aec3SuppressorDominantNearendEnrExitThresholdOverride",
               0x3c,(long)param_1 + 0x1e8);
  FUN_0062804c(0x42c80000,param_3,"WebRTC-Aec3SuppressorDominantNearendSnrThresholdOverride",0x38,
               (long)param_1 + 0x1ec);
  FUN_006281e0(param_3,"WebRTC-Aec3SuppressorDominantNearendHoldDurationOverride",0x38,1000,
               (long)param_1 + 0x1f0);
  FUN_006281e0(param_3,"WebRTC-Aec3SuppressorDominantNearendTriggerThresholdOverride",0x3c,1000,
               (long)param_1 + 500);
  FUN_0062804c(0x41200000,param_3,"WebRTC-Aec3SuppressorAntiHowlingGainOverride",0x2c,
               (long)param_1 + 0x240);
  FUN_0062804c(0x3f800000,param_3,"WebRTC-Aec3DelayEstimateSmoothingOverride",0x29,
               (long)param_1 + 0x40);
  FUN_0062804c(0x3f800000,param_3,"WebRTC-Aec3DelayEstimateSmoothingDelayFoundOverride",0x33,
               (long)param_1 + 0x44);
  local_718 = (long ****)CONCAT44(local_718._4_4_,(int)*(undefined8 *)((long)param_1 + 8));
  FUN_006281e0(param_3,"WebRTC-Aec3BufferingMaxAllowedExcessRenderBlocksOverride",0x38,0x14,
               &local_718);
  *(long *)((long)param_1 + 8) = (long)(int)local_718;
  FUN_006634ac(&local_690);
  FUN_006634ac(&local_650);
  FUN_006634ac(&local_610);
  FUN_006634ac(&local_5c0);
  FUN_006634ac(&local_570);
  FUN_006634ac(&local_520);
  FUN_006634ac(&local_4d0);
  FUN_006634ac(&local_480);
  FUN_006634ac(&local_430);
  FUN_006634ac(&local_3e0);
  FUN_006634ac(&local_390);
  FUN_006634ac(&local_340);
  FUN_006634ac(&local_2f0);
  FUN_006634ac(&local_2a0);
  FUN_006634ac(&local_250);
  FUN_006634ac(&local_200);
  FUN_006634ac(&local_1b0);
  FUN_006634ac(&local_140);
  FUN_006634ac(&local_f0);
  return;
}


// ===== 00627fa0  FUN_00627fa0 =====

bool FUN_00627fa0(long *param_1)

{
  int *****pppppiVar1;
  bool bVar2;
  int ****local_38;
  ulong local_30;
  byte bStack_21;
  
  (**(code **)(*param_1 + 0x10))(&local_38);
  if (-1 < (char)bStack_21) {
    local_30 = (ulong)bStack_21;
  }
  if (local_30 < 7) {
    bVar2 = false;
  }
  else {
    pppppiVar1 = (int *****)local_38;
    if (-1 < (char)bStack_21) {
      pppppiVar1 = &local_38;
    }
    bVar2 = *(int *)pppppiVar1 == 0x62616e45 && *(int *)((long)pppppiVar1 + 3) == 0x64656c62;
  }
  if ((char)bStack_21 < '\0') {
    operator_delete(local_38);
  }
  return bVar2;
}


// ===== 0062804c  FUN_0062804c =====

/* WARNING: Removing unreachable block (ram,0x006281b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062804c(float param_1,long *param_2,undefined8 param_3,undefined8 param_4,float *param_5)

{
  undefined1 *puVar1;
  undefined8 ****ppppuVar2;
  ulong uVar3;
  float fVar4;
  undefined1 uStack_e9;
  undefined **local_e8;
  undefined8 uStack_e0;
  undefined1 *local_d8;
  undefined *local_d0;
  undefined ***pppuStack_c8;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  double local_80;
  undefined8 ***local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = (undefined8 ***)&DAT_aaaaaaaaaaaaaaaa;
  local_50 = param_3;
  uStack_48 = param_4;
  (**(code **)(*param_2 + 0x10))(&local_70);
  fVar4 = *param_5;
  local_80 = (double)DAT_001fd890;
  uStack_b8 = _UNK_001fd858;
  local_c0 = _DAT_001fd850;
  uStack_a8 = _UNK_001fd868;
  uStack_b0 = _DAT_001fd860;
  uStack_98 = _UNK_001fd878;
  local_a0 = _DAT_001fd870;
  uStack_88 = _UNK_001fd888;
  uStack_90 = _DAT_001fd880;
  FUN_00661054(&local_c0,&DAT_001b3348,0);
  local_c0 = PTR_DAT_00d52020 + 0x10;
  puVar1 = puStack_68;
  ppppuVar2 = (undefined8 ****)local_70;
  if (-1 < (long)local_60) {
    puVar1 = (undefined1 *)((ulong)local_60 >> 0x38);
    ppppuVar2 = &local_70;
  }
  local_e8 = &local_c0;
  local_80 = (double)fVar4;
  FUN_00661cc0(&local_e8,1,ppppuVar2,puVar1);
  if (((local_80 < -7.006492321624085e-46 == NAN(local_80)) &&
      (fVar4 = (float)local_80, param_1 < fVar4 == (NAN(param_1) || NAN(fVar4)))) &&
     (*param_5 != fVar4)) {
    uVar3 = FUN_00417e08();
    if ((uVar3 & 1) == 0) {
      local_e8 = (undefined **)0x1cb07e;
      uStack_e0 = 0x251;
      local_d8 = &uStack_e9;
      pppuStack_c8 = &local_e8;
      local_d0 = &DAT_001bf719;
      FUN_00623bb0((double)*param_5,(double)fVar4,&DAT_001fd898,
                   "../../modules/audio_processing/aec3/echo_canceller3.cc",0x251,&DAT_001bf719,
                   &local_50," changing AEC3 parameter value from ",&DAT_0019fec4);
    }
    *param_5 = fVar4;
  }
  FUN_006634ac(&local_c0);
  return;
}


// ===== 006281e0  FUN_006281e0 =====

/* WARNING: Removing unreachable block (ram,0x00628330) */

void FUN_006281e0(long *param_1,undefined8 param_2,undefined8 param_3,uint param_4,int *param_5)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 ****ppppuVar3;
  ulong uVar4;
  float fVar5;
  undefined1 uStack_d9;
  undefined1 **local_d8;
  undefined8 uStack_d0;
  undefined1 *local_c8;
  undefined *puStack_c0;
  undefined1 ***local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined8 ***local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = (undefined8 ***)&DAT_aaaaaaaaaaaaaaaa;
  local_50 = param_2;
  uStack_48 = param_3;
  (**(code **)(*param_1 + 0x10))(&local_70);
  iVar2 = *param_5;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00661054(&local_b0,&DAT_001b3348,0);
  local_b0 = PTR_DAT_00d52028 + 0x10;
  puVar1 = puStack_68;
  ppppuVar3 = (undefined8 ****)local_70;
  if (-1 < (long)local_60) {
    puVar1 = (undefined1 *)((ulong)local_60 >> 0x38);
    ppppuVar3 = &local_70;
  }
  local_d8 = &local_b0;
  uStack_78._4_4_ = iVar2;
  FUN_00661cc0(&local_d8,1,ppppuVar3,puVar1);
  iVar2 = uStack_78._4_4_;
  if (((-1 < uStack_78._4_4_) && (fVar5 = (float)uStack_78._4_4_, fVar5 <= (float)param_4)) &&
     (fVar5 != (float)*param_5)) {
    uVar4 = FUN_00417e08();
    if ((uVar4 & 1) == 0) {
      local_c8 = &uStack_d9;
      local_d8 = (undefined1 **)0x1cb07e;
      uStack_d0 = 0x2f9;
      local_b8 = &local_d8;
      puStack_c0 = &DAT_001bf719;
      FUN_00623bb0((double)iVar2,&DAT_001fd8a0,
                   "../../modules/audio_processing/aec3/echo_canceller3.cc",0x2f9,&DAT_001bf719,
                   &local_50," changing AEC3 parameter value from ",*param_5,&DAT_0019fec4);
    }
    *param_5 = (int)fVar5;
  }
  FUN_006634ac(&local_b0);
  return;
}


// ===== 00628360  FUN_00628360 =====

void FUN_00628360(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 ulong param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  void *pvVar10;
  undefined4 *local_80;
  undefined4 *local_78;
  undefined4 *local_70;
  long local_68;
  long lStack_60;
  
  *param_1 = param_2;
  param_1[1] = param_5;
  param_1[2] = param_6;
  param_1[3] = 0;
  local_80 = (undefined4 *)operator_new(0x280);
  local_70 = local_80 + 0xa0;
  uVar9 = (ulong)-(long)local_80 >> 2;
  if (0x9e < uVar9) {
    uVar9 = 0x9f;
  }
  puVar3 = local_80;
  if ((0x1f < (ulong)-(long)local_80) && ((-(int)local_80 & 3U) == 0)) {
    uVar8 = uVar9 + 1 & 7;
    uVar2 = 8;
    if (uVar8 != 0) {
      uVar2 = uVar8;
    }
    puVar5 = (undefined8 *)(local_80 + 4);
    lVar7 = (uVar9 + 1) - uVar2;
    puVar3 = local_80 + lVar7;
    do {
      lVar7 = lVar7 + -8;
      puVar5[-1] = 0;
      puVar5[-2] = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar5 = puVar5 + 4;
    } while (lVar7 != 0);
  }
  do {
    if (puVar3 == (undefined4 *)0x0) goto LAB_00628530;
    puVar4 = puVar3 + 1;
    *puVar3 = 0;
    puVar3 = puVar4;
  } while (puVar4 != local_70);
  local_78 = local_70;
  FUN_006285c0(&local_68,param_6,&local_80);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if (param_5 != 0) {
    if (0xaaaaaaaaaaaaaaa < param_5) {
                    /* WARNING: Subroutine does not return */
      FUN_0062a9cc();
    }
    uVar9 = param_5 * 0x18;
    puVar5 = (undefined8 *)operator_new(uVar9);
    puVar1 = puVar5 + param_5 * 3;
    param_1[4] = puVar5;
    param_1[5] = puVar5;
    param_1[6] = puVar1;
    do {
      if (puVar5 == (undefined8 *)0x0) {
LAB_00628530:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      FUN_0062a9e4(puVar5,local_68,lStack_60,(lStack_60 - local_68 >> 3) * -0x5555555555555555);
      uVar9 = uVar9 - 0x18;
      puVar5 = puVar5 + 3;
    } while (uVar9 != 0);
    param_1[5] = puVar1;
  }
  FUN_006286b4(&local_68);
  if (local_80 != (undefined4 *)0x0) {
    uVar8 = (ulong)((long)local_78 + (-4 - ((long)local_78 << 0x3e))) >> 2;
    uVar9 = (ulong)(((long)local_80 - (long)local_78 << 0x3e) - ((long)local_80 - (long)local_78))
            >> 2;
    if (uVar8 <= uVar9) {
      uVar9 = uVar8;
    }
    puVar3 = local_78;
    if ((1 < uVar9) && ((((int)local_80 - (int)local_78 | -(int)local_78) & 3U) == 0)) {
      uVar9 = uVar9 & 0x3ffffffffffffffe;
      puVar3 = local_78 + -uVar9;
      do {
        uVar9 = uVar9 - 2;
      } while (uVar9 != 0);
    }
    while (puVar3 != local_80) {
      puVar3 = puVar3 + -1;
      if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    local_78 = local_80;
    operator_delete(local_80);
  }
  param_1[7] = param_4;
  if (*(char *)(param_3 + 0xeb) == '\x01') {
    pvVar6 = operator_new(0x20);
    FUN_006604e8(pvVar6,16000,param_6);
    pvVar10 = (void *)param_1[3];
    param_1[3] = pvVar6;
    if (pvVar10 != (void *)0x0) {
      FUN_0066087c(pvVar10);
      operator_delete(pvVar10);
    }
  }
  return;
}


// ===== 006285c0  FUN_006285c0 =====

void FUN_006285c0(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  void *__src;
  void *pvVar3;
  undefined8 *puVar4;
  void *__dest;
  ulong uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_0062a9b4();
    }
    uVar5 = param_2 * 0x18;
    puVar4 = (undefined8 *)operator_new(uVar5);
    puVar1 = puVar4 + param_2 * 3;
    *param_1 = puVar4;
    param_1[1] = puVar4;
    param_1[2] = puVar1;
    __src = (void *)*param_3;
    pvVar3 = (void *)param_3[1];
    do {
      if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      if (pvVar3 != __src) {
        if ((long)pvVar3 - (long)__src < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0062a99c();
        }
        __dest = operator_new((long)pvVar3 - (long)__src);
        lVar2 = (long)__dest + ((long)pvVar3 - (long)__src);
        *puVar4 = __dest;
        puVar4[1] = __dest;
        puVar4[2] = lVar2;
        memcpy(__dest,__src,(long)pvVar3 - (long)__src);
        puVar4[1] = lVar2;
      }
      uVar5 = uVar5 - 0x18;
      puVar4 = puVar4 + 3;
    } while (uVar5 != 0);
    param_1[1] = puVar1;
  }
  return;
}


// ===== 006286b4  FUN_006286b4 =====

void FUN_006286b4(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)*param_1;
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = puVar7;
  puVar3 = (undefined8 *)param_1[1];
  if (puVar7 != (undefined8 *)param_1[1]) {
    do {
      puVar2 = puVar3 + -3;
      if (puVar2 == (undefined8 *)0x0) {
LAB_0062879c:
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
        uVar5 = (ulong)(((long)pvVar1 - (long)pvVar4 << 0x3e) - ((long)pvVar1 - (long)pvVar4)) >> 2;
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
          if (pvVar4 == (void *)0x0) goto LAB_0062879c;
        }
        puVar3[-2] = pvVar1;
        operator_delete(pvVar1);
      }
      puVar3 = puVar2;
    } while (puVar7 != puVar2);
    puVar2 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar7;
  operator_delete(puVar2);
  return;
}


// ===== 006287c4  FUN_006287c4 =====

void FUN_006287c4(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(param_1 + 0x20);
  if (pvVar3 != (void *)0x0) {
    pvVar2 = *(void **)(param_1 + 0x28);
    pvVar1 = pvVar3;
    if (pvVar3 != pvVar2) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -0x18);
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_006286b4(pvVar2);
      } while (pvVar2 != pvVar3);
      pvVar1 = *(void **)(param_1 + 0x20);
    }
    *(void **)(param_1 + 0x28) = pvVar3;
    operator_delete(pvVar1);
  }
  pvVar3 = *(void **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_0066087c(pvVar3);
    operator_delete(pvVar3);
    return;
  }
  return;
}


// ===== 00628878  FUN_00628878 =====

void FUN_00628878(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  uVar6 = *(ulong *)(param_1 + 8);
  if (uVar6 != 0) {
    uVar8 = *(ulong *)(param_1 + 0x10);
    uVar7 = 0;
    do {
      if (uVar8 != 0) {
        lVar9 = 0;
        uVar10 = 0;
        do {
          lVar1 = *(long *)(param_2 + 0x60);
          if (*(long *)(param_2 + 0x68) != 0) {
            lVar1 = *(long *)(param_2 + 0x68);
          }
          if (((ulong)((*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 3) *
                      -0x5555555555555555) <= uVar7) ||
             (plVar4 = (long *)(*(long *)(param_1 + 0x20) + uVar7 * 0x18), lVar2 = *plVar4,
             (ulong)((plVar4[1] - lVar2 >> 3) * -0x5555555555555555) <= uVar10)) goto LAB_00628a2c;
          memmove(*(void **)(lVar2 + lVar9),
                  *(void **)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x38) * uVar10 * 8 +
                            uVar7 * 8),0x280);
          uVar10 = uVar10 + 1;
          lVar9 = lVar9 + 0x18;
        } while (uVar8 != uVar10);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    if (*(long *)(param_1 + 0x28) == *(long *)(param_1 + 0x20)) goto LAB_00628a2c;
    FUN_00660a24();
  }
  lVar9 = *(long *)(param_1 + 0x38);
  uVar6 = (*(long *)(lVar9 + 0x38) - *(long *)(lVar9 + 0x30) >> 3) * -0x5555555555555555;
  if (*(ulong *)(lVar9 + 0x28) != uVar6) {
    if (uVar6 <= *(ulong *)(lVar9 + 0x18)) {
LAB_00628a2c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                );
    }
    puVar3 = (undefined8 *)(*(long *)(lVar9 + 0x30) + *(ulong *)(lVar9 + 0x18) * 0x18);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = *puVar3;
    *puVar3 = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = puVar3[1];
    puVar3[1] = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = puVar3[2];
    puVar3[2] = uVar5;
    FUN_00d0f800(1,lVar9 + 0x28);
    lVar1 = 0;
    if (*(long *)(lVar9 + 0x18) + 1 !=
        (*(long *)(lVar9 + 0x38) - *(long *)(lVar9 + 0x30) >> 3) * -0x5555555555555555) {
      lVar1 = *(long *)(lVar9 + 0x18) + 1;
    }
    *(long *)(lVar9 + 0x18) = lVar1;
  }
  return;
}


// ===== 00628a40  FUN_00628a40 =====

void FUN_00628a40(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,ulong param_7,undefined8 param_8)

{
  char *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  char *pcVar16;
  long lVar17;
  char **ppcVar18;
  ulong uVar19;
  ulong uVar20;
  void *pvVar21;
  uint uVar22;
  ulong uVar23;
  undefined8 uVar24;
  long *plVar25;
  long *plVar26;
  void *pvVar27;
  long *plVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  undefined1 uStack_91;
  char *local_90;
  char **local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  
  *param_1 = &PTR_FUN_00d27828;
  lVar17 = *param_2;
  param_1[1] = lVar17;
  if (lVar17 != 0) {
    FUN_00d0f740(1,lVar17 + 8);
  }
  lVar30 = param_2[4];
  lVar17 = param_2[3];
  lVar31 = param_2[1];
  param_1[3] = param_2[2];
  param_1[2] = lVar31;
  param_1[5] = lVar30;
  param_1[4] = lVar17;
  FUN_00660fac(param_1 + 6);
  FUN_00660fac(param_1 + 8);
  param_1[10] = 0;
  pvVar6 = operator_new(1);
  iVar5 = FUN_00d0f7a0(1,&DAT_00d64620);
  FUN_0065b3d8(pvVar6,iVar5 + 1);
  param_1[0xb] = pvVar6;
  FUN_00625f88(param_1 + 0xc,param_3,param_2[1]);
  *(int *)(param_1 + 0x59) = param_6;
  param_1[0x5a] = param_7;
  param_1[0x5c] = param_8;
  *(int *)((long)param_1 + 0x2cc) = param_6 / 16000;
  FUN_0062af84(param_1 + 0x5d,param_1 + 0xc,param_4,param_7 & 0xffffffff);
  lVar17 = param_1[0xf8];
  FUN_0063711c(*(undefined4 *)(lVar17 + 0x25c),*(undefined4 *)(lVar17 + 0x264),param_1 + 0xf9,
               *(undefined1 *)(lVar17 + 600),*(undefined4 *)(param_1 + 0x5a),
               *(undefined4 *)(lVar17 + 0x260));
  param_1[0x100] = param_5;
  param_1[0x101] = 0;
  FUN_0062b038(param_1 + 0x102,(long)*(int *)((long)param_1 + 0x2cc),param_1[0x5c]);
  FUN_0063574c(param_1 + 0x107,(long)*(int *)((long)param_1 + 0x2cc),param_1[0x5c]);
  iVar5 = *(int *)((long)param_1 + 0x2cc);
  uVar24 = param_1[0x5a];
  param_1[0x10c] = 0;
  local_90 = (char *)operator_new(0x280);
  local_80 = local_90 + 0x280;
  uVar23 = (ulong)-(long)local_90 >> 2;
  if (0x9e < uVar23) {
    uVar23 = 0x9f;
  }
  pcVar12 = local_90;
  if ((0x1f < (ulong)-(long)local_90) && ((-(int)local_90 & 3U) == 0)) {
    uVar19 = uVar23 + 1 & 7;
    uVar20 = 8;
    if (uVar19 != 0) {
      uVar20 = uVar19;
    }
    pcVar16 = local_90 + 0x10;
    lVar17 = (uVar23 + 1) - uVar20;
    pcVar12 = local_90 + lVar17 * 4;
    do {
      lVar17 = lVar17 + -8;
      pcVar16[-8] = '\0';
      pcVar16[-7] = '\0';
      pcVar16[-6] = '\0';
      pcVar16[-5] = '\0';
      pcVar16[-4] = '\0';
      pcVar16[-3] = '\0';
      pcVar16[-2] = '\0';
      pcVar16[-1] = '\0';
      pcVar16[-0x10] = '\0';
      pcVar16[-0xf] = '\0';
      pcVar16[-0xe] = '\0';
      pcVar16[-0xd] = '\0';
      pcVar16[-0xc] = '\0';
      pcVar16[-0xb] = '\0';
      pcVar16[-10] = '\0';
      pcVar16[-9] = '\0';
      pcVar16[8] = '\0';
      pcVar16[9] = '\0';
      pcVar16[10] = '\0';
      pcVar16[0xb] = '\0';
      pcVar16[0xc] = '\0';
      pcVar16[0xd] = '\0';
      pcVar16[0xe] = '\0';
      pcVar16[0xf] = '\0';
      pcVar16[0] = '\0';
      pcVar16[1] = '\0';
      pcVar16[2] = '\0';
      pcVar16[3] = '\0';
      pcVar16[4] = '\0';
      pcVar16[5] = '\0';
      pcVar16[6] = '\0';
      pcVar16[7] = '\0';
      pcVar16 = pcVar16 + 0x20;
    } while (lVar17 != 0);
  }
  do {
    ppcVar18 = local_88;
    if (pcVar12 == (char *)0x0) goto LAB_006296a4;
    pcVar16 = pcVar12 + 4;
    pcVar12[0] = '\0';
    pcVar12[1] = '\0';
    pcVar12[2] = '\0';
    pcVar12[3] = '\0';
    pcVar12 = pcVar16;
  } while (pcVar16 != local_80);
  local_88 = (char **)local_80;
  FUN_006285c0(&local_78,uVar24,&local_90);
  if (iVar5 == 0) {
    plVar28 = (long *)0x0;
    plVar7 = (long *)0x0;
  }
  else {
    if (iVar5 < 0) goto LAB_00629750;
    uVar23 = (long)iVar5 * 0x18;
    plVar7 = (long *)operator_new(uVar23);
    plVar28 = plVar7 + (long)iVar5 * 3;
    plVar25 = plVar7;
    do {
      ppcVar18 = local_88;
      if (plVar25 == (long *)0x0) goto LAB_006296a4;
      *plVar25 = 0;
      plVar25[1] = 0;
      plVar25[2] = 0;
      FUN_0062a9e4(plVar25,local_78,local_70,
                   ((long)local_70 - (long)local_78 >> 3) * -0x5555555555555555);
      uVar23 = uVar23 - 0x18;
      plVar25 = plVar25 + 3;
    } while (uVar23 != 0);
  }
  param_1[0x10f] = 0xa0;
  param_1[0x10d] = (long)*(int *)((long)param_1 + 0x2cc);
  param_1[0x10e] = param_1[0x5a];
  param_1[0x110] = 0;
  param_1[0x112] = 0;
  param_1[0x111] = 0;
  puVar8 = (undefined8 *)operator_new(0x960);
  param_1[0x113] = puVar8;
  param_1[0x114] = puVar8;
  puVar10 = puVar8 + 300;
  param_1[0x115] = puVar10;
  do {
    ppcVar18 = local_88;
    if (puVar8 == (undefined8 *)0x0) goto LAB_006296a4;
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    if (plVar28 != plVar7) {
      if (0xaaaaaaaaaaaaaaa < (ulong)(((long)plVar28 - (long)plVar7 >> 3) * -0x5555555555555555))
      goto LAB_00629750;
      puVar9 = (undefined8 *)operator_new((long)plVar28 - (long)plVar7);
      *puVar8 = puVar9;
      puVar8[1] = puVar9;
      puVar8[2] = (long)puVar9 + ((long)plVar28 - (long)plVar7);
      plVar25 = plVar7;
      do {
        ppcVar18 = local_88;
        if (puVar9 == (undefined8 *)0x0) goto LAB_006296a4;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        plVar26 = plVar25 + 3;
        FUN_0062a9e4(puVar9,*plVar25,plVar25[1],(plVar25[1] - *plVar25 >> 3) * -0x5555555555555555);
        puVar9 = puVar9 + 3;
        plVar25 = plVar26;
      } while (plVar26 != plVar28);
      puVar8[1] = puVar9;
    }
    puVar8 = puVar8 + 3;
  } while (puVar8 != puVar10);
  param_1[0x114] = puVar10;
  if (plVar7 != (long *)0x0) {
    while (plVar28 != plVar7) {
      plVar28 = plVar28 + -3;
      if (plVar28 == (long *)0x0) goto LAB_0062929c;
      FUN_006286b4(plVar28);
    }
    operator_delete(plVar7);
  }
  FUN_006286b4(&local_78);
  if (local_90 != (char *)0x0) {
    uVar23 = (ulong)(((long)local_90 - (long)local_88 << 0x3e) - ((long)local_90 - (long)local_88))
             >> 2;
    if ((ulong)((long)local_88 + (-4 - ((long)local_88 << 0x3e))) >> 2 <= uVar23) {
      uVar23 = (ulong)((long)local_88 + (-4 - ((long)local_88 << 0x3e))) >> 2;
    }
    ppcVar18 = local_88;
    if ((1 < uVar23) && ((((int)local_90 - (int)local_88 | -(int)local_88) & 3U) == 0)) {
      uVar23 = uVar23 & 0x3ffffffffffffffe;
      ppcVar18 = (char **)((long)local_88 + uVar23 * -4);
      do {
        uVar23 = uVar23 - 2;
      } while (uVar23 != 0);
    }
    do {
      if (ppcVar18 == (char **)local_90) {
        local_88 = (char **)local_90;
        operator_delete(local_90);
        goto LAB_00628e40;
      }
      ppcVar18 = (char **)((long)ppcVar18 + -4);
    } while (ppcVar18 != (char **)0x0);
LAB_0062929c:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
LAB_00628e40:
  iVar5 = *(int *)((long)param_1 + 0x2cc);
  uVar24 = param_1[0x5a];
  param_1[0x116] = 0;
  local_90 = (char *)operator_new(0x280);
  local_88 = (char **)(local_90 + 0x280);
  uVar23 = (ulong)-(long)local_90 >> 2;
  if (0x9e < uVar23) {
    uVar23 = 0x9f;
  }
  pcVar12 = local_90;
  if ((0x1f < (ulong)-(long)local_90) && ((-(int)local_90 & 3U) == 0)) {
    uVar19 = uVar23 + 1 & 7;
    uVar20 = 8;
    if (uVar19 != 0) {
      uVar20 = uVar19;
    }
    pcVar16 = local_90 + 0x10;
    lVar17 = (uVar23 + 1) - uVar20;
    pcVar12 = local_90 + lVar17 * 4;
    do {
      lVar17 = lVar17 + -8;
      pcVar16[-8] = '\0';
      pcVar16[-7] = '\0';
      pcVar16[-6] = '\0';
      pcVar16[-5] = '\0';
      pcVar16[-4] = '\0';
      pcVar16[-3] = '\0';
      pcVar16[-2] = '\0';
      pcVar16[-1] = '\0';
      pcVar16[-0x10] = '\0';
      pcVar16[-0xf] = '\0';
      pcVar16[-0xe] = '\0';
      pcVar16[-0xd] = '\0';
      pcVar16[-0xc] = '\0';
      pcVar16[-0xb] = '\0';
      pcVar16[-10] = '\0';
      pcVar16[-9] = '\0';
      pcVar16[8] = '\0';
      pcVar16[9] = '\0';
      pcVar16[10] = '\0';
      pcVar16[0xb] = '\0';
      pcVar16[0xc] = '\0';
      pcVar16[0xd] = '\0';
      pcVar16[0xe] = '\0';
      pcVar16[0xf] = '\0';
      pcVar16[0] = '\0';
      pcVar16[1] = '\0';
      pcVar16[2] = '\0';
      pcVar16[3] = '\0';
      pcVar16[4] = '\0';
      pcVar16[5] = '\0';
      pcVar16[6] = '\0';
      pcVar16[7] = '\0';
      pcVar16 = pcVar16 + 0x20;
    } while (lVar17 != 0);
  }
  do {
    ppcVar18 = (char **)local_90;
    local_80 = (char *)local_88;
    if (pcVar12 == (char *)0x0) goto LAB_006296a4;
    pcVar16 = pcVar12 + 4;
    pcVar12[0] = '\0';
    pcVar12[1] = '\0';
    pcVar12[2] = '\0';
    pcVar12[3] = '\0';
    pcVar12 = pcVar16;
  } while ((char **)pcVar16 != local_88);
  FUN_006285c0(&local_78,uVar24,&local_90);
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  if (iVar5 != 0) {
    if (iVar5 < 0) {
LAB_00629750:
                    /* WARNING: Subroutine does not return */
      FUN_0062a9cc();
    }
    uVar23 = (long)iVar5 * 0x18;
    puVar10 = (undefined8 *)operator_new(uVar23);
    puVar8 = puVar10 + (long)iVar5 * 3;
    param_1[0x117] = puVar10;
    param_1[0x118] = puVar10;
    param_1[0x119] = puVar8;
    do {
      ppcVar18 = local_88;
      if (puVar10 == (undefined8 *)0x0) goto LAB_006296a4;
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      FUN_0062a9e4(puVar10,local_78,local_70,
                   ((long)local_70 - (long)local_78 >> 3) * -0x5555555555555555);
      uVar23 = uVar23 - 0x18;
      puVar10 = puVar10 + 3;
    } while (uVar23 != 0);
    param_1[0x118] = puVar8;
  }
  FUN_006286b4(&local_78);
  if (local_90 != (char *)0x0) {
    uVar23 = (ulong)(((long)local_90 - (long)local_88 << 0x3e) - ((long)local_90 - (long)local_88))
             >> 2;
    if ((ulong)((long)local_88 + (-4 - ((long)local_88 << 0x3e))) >> 2 <= uVar23) {
      uVar23 = (ulong)((long)local_88 + (-4 - ((long)local_88 << 0x3e))) >> 2;
    }
    ppcVar18 = local_88;
    if ((1 < uVar23) && ((((int)local_90 - (int)local_88 | -(int)local_88) & 3U) == 0)) {
      uVar23 = uVar23 & 0x3ffffffffffffffe;
      ppcVar18 = (char **)((long)local_88 + uVar23 * -4);
      do {
        uVar23 = uVar23 - 2;
      } while (uVar23 != 0);
    }
    do {
      if (ppcVar18 == (char **)local_90) {
        local_88 = (char **)local_90;
        operator_delete(local_90);
        goto LAB_00628fdc;
      }
      ppcVar18 = (char **)((long)ppcVar18 + -4);
    } while (ppcVar18 != (char **)0x0);
    goto LAB_0062929c;
  }
LAB_00628fdc:
  iVar5 = *(int *)((long)param_1 + 0x2cc);
  *(undefined1 *)(param_1 + 0x11a) = 0;
  param_1[0x11c] = 0;
  *(int *)((long)param_1 + 0x8dc) = *(int *)(param_1 + 0x5a);
  uVar22 = iVar5 * *(int *)(param_1 + 0x5a);
  *(int *)(param_1 + 0x11b) = iVar5;
  param_1[0x11e] = 0;
  param_1[0x11d] = 0;
  if (uVar22 != 0) {
    if (-(ulong)(uVar22 >> 0x1f) >> 0x3e != 0) goto LAB_00629754;
    uVar23 = (long)(int)uVar22 * 0x100;
    puVar11 = (undefined4 *)operator_new(uVar23);
    uVar19 = uVar23 - 4 >> 2;
    param_1[0x11c] = puVar11;
    param_1[0x11d] = puVar11;
    param_1[0x11e] = puVar11 + (-(ulong)(uVar22 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar22 << 6);
    uVar23 = (ulong)-(long)puVar11 >> 2;
    if (uVar19 <= (ulong)-(long)puVar11 >> 2) {
      uVar23 = uVar19;
    }
    puVar13 = puVar11;
    if ((7 < uVar23) && ((-(int)puVar11 & 3U) == 0)) {
      uVar19 = uVar23 + 1 & 7;
      uVar20 = 8;
      if (uVar19 != 0) {
        uVar20 = uVar19;
      }
      puVar10 = (undefined8 *)(puVar11 + 4);
      lVar17 = (uVar23 + 1) - uVar20;
      puVar13 = puVar11 + lVar17;
      do {
        lVar17 = lVar17 + -8;
        puVar10[-1] = 0;
        puVar10[-2] = 0;
        puVar10[1] = 0;
        *puVar10 = 0;
        puVar10 = puVar10 + 4;
      } while (lVar17 != 0);
    }
    do {
      ppcVar18 = local_88;
      if (puVar13 == (undefined4 *)0x0) goto LAB_006296a4;
      puVar14 = puVar13 + 1;
      *puVar13 = 0;
      puVar13 = puVar14;
    } while (puVar14 != puVar11 + (long)(int)uVar22 * 0x40);
    param_1[0x11d] = puVar11 + (long)(int)uVar22 * 0x40;
  }
  uVar23 = param_1[0x5c];
  param_1[0x11f] = 0;
  *(int *)(param_1 + 0x120) = iVar5;
  uVar22 = iVar5 * (int)uVar23;
  *(int *)((long)param_1 + 0x904) = (int)uVar23;
  param_1[0x121] = 0;
  param_1[0x123] = 0;
  param_1[0x122] = 0;
  if (uVar22 != 0) {
    if (-(ulong)(uVar22 >> 0x1f) >> 0x3e != 0) goto LAB_00629754;
    uVar19 = (long)(int)uVar22 * 0x100;
    puVar11 = (undefined4 *)operator_new(uVar19);
    uVar20 = uVar19 - 4 >> 2;
    param_1[0x121] = puVar11;
    param_1[0x122] = puVar11;
    param_1[0x123] = puVar11 + (-(ulong)(uVar22 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar22 << 6);
    uVar19 = (ulong)-(long)puVar11 >> 2;
    if (uVar20 <= (ulong)-(long)puVar11 >> 2) {
      uVar19 = uVar20;
    }
    puVar13 = puVar11;
    if ((7 < uVar19) && ((-(int)puVar11 & 3U) == 0)) {
      uVar20 = uVar19 + 1 & 7;
      uVar29 = 8;
      if (uVar20 != 0) {
        uVar29 = uVar20;
      }
      puVar10 = (undefined8 *)(puVar11 + 4);
      lVar17 = (uVar19 + 1) - uVar29;
      puVar13 = puVar11 + lVar17;
      do {
        lVar17 = lVar17 + -8;
        puVar10[-1] = 0;
        puVar10[-2] = 0;
        puVar10[1] = 0;
        *puVar10 = 0;
        puVar10 = puVar10 + 4;
      } while (lVar17 != 0);
    }
    do {
      ppcVar18 = local_88;
      if (puVar13 == (undefined4 *)0x0) goto LAB_006296a4;
      puVar14 = puVar13 + 1;
      *puVar13 = 0;
      puVar13 = puVar14;
    } while (puVar14 != puVar11 + (long)(int)uVar22 * 0x40);
    param_1[0x122] = puVar11 + (long)(int)uVar22 * 0x40;
  }
  local_78 = (char *)0x0;
  local_70 = (char *)0x0;
  local_68 = (char *)0x0;
  param_1[0x129] = 0;
  param_1[0x128] = 0;
  param_1[0x127] = 0;
  param_1[0x126] = 0;
  param_1[0x125] = 0;
  param_1[0x124] = 0;
  if (uVar23 != 0) {
    if (uVar23 >> 0x3c != 0) goto LAB_00629758;
    local_78 = (char *)operator_new(uVar23 * 0x10);
    uVar19 = uVar23 * 0x10 - 0x10;
    local_68 = local_78 + uVar23 * 0x10;
    uVar22 = (uint)uVar19;
    pcVar12 = local_78;
    ppcVar18 = local_88;
    if ((~uVar22 & 0x30) != 0) {
      lVar17 = -((ulong)((uVar22 >> 4) + 1) & 3);
      pcVar16 = local_78;
      do {
        local_70 = local_78;
        if (pcVar16 == (char *)0x0) goto LAB_006296a4;
        bVar4 = lVar17 != -1;
        lVar17 = lVar17 + 1;
        pcVar12 = pcVar16 + 0x10;
        pcVar16[0] = '\0';
        pcVar16[1] = '\0';
        pcVar16[2] = '\0';
        pcVar16[3] = '\0';
        pcVar16[4] = '\0';
        pcVar16[5] = '\0';
        pcVar16[6] = '\0';
        pcVar16[7] = '\0';
        pcVar16[8] = '\0';
        pcVar16[9] = '\0';
        pcVar16[10] = '\0';
        pcVar16[0xb] = '\0';
        pcVar16[0xc] = '\0';
        pcVar16[0xd] = '\0';
        pcVar16[0xe] = '\0';
        pcVar16[0xf] = '\0';
        pcVar16 = pcVar12;
      } while (bVar4);
    }
    if (0x2f < uVar19) {
      do {
        local_70 = local_78;
        if (pcVar12 == (char *)0x0) goto LAB_006296a4;
        pcVar16 = pcVar12 + 0x10;
        pcVar12[0] = '\0';
        pcVar12[1] = '\0';
        pcVar12[2] = '\0';
        pcVar12[3] = '\0';
        pcVar12[4] = '\0';
        pcVar12[5] = '\0';
        pcVar12[6] = '\0';
        pcVar12[7] = '\0';
        pcVar12[8] = '\0';
        pcVar12[9] = '\0';
        pcVar12[10] = '\0';
        pcVar12[0xb] = '\0';
        pcVar12[0xc] = '\0';
        pcVar12[0xd] = '\0';
        pcVar12[0xe] = '\0';
        pcVar12[0xf] = '\0';
        local_70 = local_78;
        if (pcVar16 == (char *)0x0) goto LAB_006296a4;
        pcVar1 = pcVar12 + 0x20;
        pcVar16[0] = '\0';
        pcVar16[1] = '\0';
        pcVar16[2] = '\0';
        pcVar16[3] = '\0';
        pcVar16[4] = '\0';
        pcVar16[5] = '\0';
        pcVar16[6] = '\0';
        pcVar16[7] = '\0';
        pcVar12[0x18] = '\0';
        pcVar12[0x19] = '\0';
        pcVar12[0x1a] = '\0';
        pcVar12[0x1b] = '\0';
        pcVar12[0x1c] = '\0';
        pcVar12[0x1d] = '\0';
        pcVar12[0x1e] = '\0';
        pcVar12[0x1f] = '\0';
        local_70 = local_78;
        if (pcVar1 == (char *)0x0) goto LAB_006296a4;
        pcVar16 = pcVar12 + 0x30;
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        pcVar1[4] = '\0';
        pcVar1[5] = '\0';
        pcVar1[6] = '\0';
        pcVar1[7] = '\0';
        pcVar12[0x28] = '\0';
        pcVar12[0x29] = '\0';
        pcVar12[0x2a] = '\0';
        pcVar12[0x2b] = '\0';
        pcVar12[0x2c] = '\0';
        pcVar12[0x2d] = '\0';
        pcVar12[0x2e] = '\0';
        pcVar12[0x2f] = '\0';
        local_70 = local_78;
        if (pcVar16 == (char *)0x0) goto LAB_006296a4;
        pcVar1 = pcVar12 + 0x40;
        pcVar16[0] = '\0';
        pcVar16[1] = '\0';
        pcVar16[2] = '\0';
        pcVar16[3] = '\0';
        pcVar16[4] = '\0';
        pcVar16[5] = '\0';
        pcVar16[6] = '\0';
        pcVar16[7] = '\0';
        pcVar12[0x38] = '\0';
        pcVar12[0x39] = '\0';
        pcVar12[0x3a] = '\0';
        pcVar12[0x3b] = '\0';
        pcVar12[0x3c] = '\0';
        pcVar12[0x3d] = '\0';
        pcVar12[0x3e] = '\0';
        pcVar12[0x3f] = '\0';
        pcVar12 = pcVar1;
      } while (pcVar1 != local_68);
    }
  }
  local_70 = local_68;
  FUN_0062975c(param_1 + 0x12a,(long)iVar5,&local_78);
  if (local_78 != (char *)0x0) {
    uVar23 = (ulong)(((long)local_78 - (long)local_70 << 0x3c) - ((long)local_78 - (long)local_70))
             >> 4;
    if ((ulong)(local_70 + (-0x10 - ((long)local_70 << 0x3c))) >> 4 <= uVar23) {
      uVar23 = (ulong)(local_70 + (-0x10 - ((long)local_70 << 0x3c))) >> 4;
    }
    pcVar12 = local_70;
    if ((1 < uVar23) && ((((int)local_78 - (int)local_70 | -(int)local_70) & 0xfU) == 0)) {
      uVar23 = uVar23 & 0xffffffffffffffe;
      pcVar12 = local_70 + uVar23 * -0x10;
      do {
        uVar23 = uVar23 - 2;
      } while (uVar23 != 0);
    }
    do {
      if (pcVar12 == local_78) {
        local_70 = local_78;
        operator_delete(local_78);
        goto LAB_006292c0;
      }
      pcVar12 = pcVar12 + -0x10;
    } while (pcVar12 != (char *)0x0);
    goto LAB_0062929c;
  }
LAB_006292c0:
  param_1[0x12d] = 0;
  FUN_0062ba90(param_1 + 0x12e);
  FUN_0062ba90(param_1 + 0x12f);
  *(undefined2 *)(param_1 + 0x131) = 0;
  param_1[0x130] = 0;
  FUN_0062baa4(param_1 + 0x12e);
  if (*(long *)(param_1[0xf8] + 0x38) != 0) {
    pvVar6 = operator_new(0x30);
    FUN_0062bd5c(pvVar6,param_1[0x5c],(long)*(int *)((long)param_1 + 0x2cc),0xa0,param_1[0x13]);
    pvVar27 = (void *)param_1[0x12d];
    param_1[0x12d] = pvVar6;
    if (pvVar27 != (void *)0x0) {
      FUN_0062bf84(pvVar27);
      operator_delete(pvVar27);
    }
  }
  pvVar6 = operator_new(0x40);
  FUN_00628360(pvVar6,param_1[0xb],param_1[0xf8],param_1 + 0x10d,
               (long)*(int *)((long)param_1 + 0x2cc),param_1[0x5a]);
  pvVar27 = (void *)param_1[10];
  param_1[10] = pvVar6;
  if (pvVar27 != (void *)0x0) {
    FUN_006287c4(pvVar27);
    operator_delete(pvVar27);
  }
  if (*(char *)(param_1[0xf8] + 0xec) == '\x01') {
    pvVar6 = operator_new(0x28);
    FUN_0062b038(pvVar6,1,param_1[0x5c]);
    pvVar27 = (void *)param_1[0x101];
    param_1[0x101] = pvVar6;
    if (pvVar27 != (void *)0x0) {
      FUN_0062b23c(pvVar27);
      operator_delete(pvVar27);
    }
    puVar11 = (undefined4 *)operator_new(0x20);
    uVar23 = param_1[0x5c];
    *(undefined8 *)(puVar11 + 4) = 0;
    *(undefined8 *)(puVar11 + 6) = 0;
    *(undefined8 *)(puVar11 + 2) = 0;
    *puVar11 = 1;
    puVar11[1] = (int)uVar23;
    if ((int)uVar23 != 0) {
      uVar19 = -(uVar23 >> 0x1f & 1);
      if (uVar19 >> 0x3e != 0) {
LAB_00629754:
                    /* WARNING: Subroutine does not return */
        FUN_0062a99c();
      }
      uVar29 = (long)(uVar23 << 0x20) >> 0x18;
      puVar13 = (undefined4 *)operator_new(uVar29);
      uVar20 = uVar29 - 4 >> 2;
      *(undefined4 **)(puVar11 + 2) = puVar13;
      *(undefined4 **)(puVar11 + 6) =
           puVar13 + (uVar19 & 0xffffffc000000000 | (uVar23 & 0xffffffff) << 6);
      uVar19 = (ulong)-(long)puVar13 >> 2;
      if (uVar20 <= (ulong)-(long)puVar13 >> 2) {
        uVar19 = uVar20;
      }
      puVar14 = puVar13;
      if ((7 < uVar19) && ((-(int)puVar13 & 3U) == 0)) {
        uVar20 = uVar19 + 1 & 7;
        uVar3 = 8;
        if (uVar20 != 0) {
          uVar3 = uVar20;
        }
        puVar10 = (undefined8 *)(puVar13 + 4);
        lVar17 = ~uVar19 + uVar3;
        puVar14 = puVar13 + ((uVar19 + 1) - uVar3);
        do {
          lVar17 = lVar17 + 8;
          puVar10[-1] = 0;
          puVar10[-2] = 0;
          puVar10[1] = 0;
          *puVar10 = 0;
          puVar10 = puVar10 + 4;
        } while (lVar17 != 0);
      }
      do {
        ppcVar18 = local_88;
        if (puVar14 == (undefined4 *)0x0) goto LAB_006296a4;
        puVar15 = puVar14 + 1;
        *puVar14 = 0;
        puVar14 = puVar15;
      } while (puVar15 != (undefined4 *)((long)puVar13 + uVar29));
      *(undefined4 **)(puVar11 + 4) = (undefined4 *)((long)puVar13 + uVar29);
    }
    pvVar6 = (void *)param_1[0x11f];
    param_1[0x11f] = puVar11;
    if (pvVar6 != (void *)0x0) {
      pvVar27 = *(void **)((long)pvVar6 + 8);
      if (pvVar27 != (void *)0x0) {
        pvVar21 = *(void **)((long)pvVar6 + 0x10);
        uVar19 = (ulong)((long)pvVar21 + (-4 - ((long)pvVar21 << 0x3e))) >> 2;
        uVar23 = (ulong)(((long)pvVar27 - (long)pvVar21 << 0x3e) - ((long)pvVar27 - (long)pvVar21))
                 >> 2;
        if (uVar19 <= uVar23) {
          uVar23 = uVar19;
        }
        if ((1 < uVar23) && ((((int)pvVar27 - (int)pvVar21 | -(int)pvVar21) & 3U) == 0)) {
          uVar23 = uVar23 & 0x3ffffffffffffffe;
          pvVar21 = (void *)((long)pvVar21 + uVar23 * -4);
          do {
            uVar23 = uVar23 - 2;
          } while (uVar23 != 0);
        }
        do {
          if (pvVar21 == pvVar27) {
            *(void **)((long)pvVar6 + 0x10) = pvVar27;
            operator_delete(pvVar27);
            goto LAB_00629514;
          }
          pvVar21 = (void *)((long)pvVar21 + -4);
        } while (pvVar21 != (void *)0x0);
        goto LAB_0062929c;
      }
LAB_00629514:
      operator_delete(pvVar6);
      uVar23 = param_1[0x5c];
    }
    if (uVar23 == 0) {
      puVar8 = (undefined8 *)0x0;
      puVar10 = (undefined8 *)0x0;
    }
    else {
      if (uVar23 >> 0x3c != 0) goto LAB_00629758;
      puVar8 = (undefined8 *)operator_new(uVar23 * 0x10);
      uVar19 = uVar23 * 0x10 - 0x10;
      uVar22 = (uint)uVar19;
      puVar9 = puVar8;
      ppcVar18 = local_88;
      if ((~uVar22 & 0x30) != 0) {
        lVar17 = -((ulong)((uVar22 >> 4) + 1) & 3);
        puVar10 = puVar8;
        do {
          if (puVar10 == (undefined8 *)0x0) goto LAB_006296a4;
          bVar4 = lVar17 != -1;
          lVar17 = lVar17 + 1;
          puVar9 = puVar10 + 2;
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10 = puVar9;
        } while (bVar4);
      }
      puVar10 = puVar8 + uVar23 * 2;
      if (0x2f < uVar19) {
        do {
          if (puVar9 == (undefined8 *)0x0) goto LAB_006296a4;
          *puVar9 = 0;
          puVar9[1] = 0;
          if (puVar9 + 2 == (undefined8 *)0x0) goto LAB_006296a4;
          puVar9[2] = 0;
          puVar9[3] = 0;
          if (puVar9 + 4 == (undefined8 *)0x0) goto LAB_006296a4;
          puVar9[4] = 0;
          puVar9[5] = 0;
          if (puVar9 + 6 == (undefined8 *)0x0) goto LAB_006296a4;
          puVar2 = puVar9 + 8;
          puVar9[6] = 0;
          puVar9[7] = 0;
          puVar9 = puVar2;
        } while (puVar2 != puVar10);
      }
    }
    pcVar16 = (char *)operator_new(0x18);
    pcVar12 = pcVar16 + 0x18;
    ppcVar18 = local_88;
    local_78 = pcVar16;
    local_70 = pcVar16;
    local_68 = pcVar12;
    if (pcVar16 == (char *)0x0) {
LAB_006296a4:
      local_88 = ppcVar18;
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    pcVar16[0] = '\0';
    pcVar16[1] = '\0';
    pcVar16[2] = '\0';
    pcVar16[3] = '\0';
    pcVar16[4] = '\0';
    pcVar16[5] = '\0';
    pcVar16[6] = '\0';
    pcVar16[7] = '\0';
    pcVar16[8] = '\0';
    pcVar16[9] = '\0';
    pcVar16[10] = '\0';
    pcVar16[0xb] = '\0';
    pcVar16[0xc] = '\0';
    pcVar16[0xd] = '\0';
    pcVar16[0xe] = '\0';
    pcVar16[0xf] = '\0';
    pcVar16[0x10] = '\0';
    pcVar16[0x11] = '\0';
    pcVar16[0x12] = '\0';
    pcVar16[0x13] = '\0';
    pcVar16[0x14] = '\0';
    pcVar16[0x15] = '\0';
    pcVar16[0x16] = '\0';
    pcVar16[0x17] = '\0';
    if (puVar10 != puVar8) {
      if ((long)puVar10 - (long)puVar8 < 0) {
LAB_00629758:
                    /* WARNING: Subroutine does not return */
        FUN_0062aad8();
      }
      pvVar6 = operator_new((long)puVar10 - (long)puVar8);
      lVar17 = (long)pvVar6 + ((long)puVar10 - (long)puVar8);
      *(void **)pcVar16 = pvVar6;
      *(void **)(pcVar16 + 8) = pvVar6;
      *(long *)(pcVar16 + 0x10) = lVar17;
      memcpy(pvVar6,puVar8,(long)puVar10 - (long)puVar8);
      *(long *)(pcVar16 + 8) = lVar17;
    }
    local_70 = pcVar12;
    FUN_00629850(param_1 + 0x127,&local_78);
    FUN_00629980(&local_78);
    if (puVar8 != (undefined8 *)0x0) {
      uVar19 = (ulong)((long)puVar10 + (-0x10 - ((long)puVar10 << 0x3c))) >> 4;
      uVar23 = (ulong)(((long)puVar8 - (long)puVar10 << 0x3c) - ((long)puVar8 - (long)puVar10)) >> 4
      ;
      if (uVar19 <= uVar23) {
        uVar23 = uVar19;
      }
      if ((1 < uVar23) && ((((int)puVar8 - (int)puVar10 | -(int)puVar10) & 0xfU) == 0)) {
        uVar23 = uVar23 & 0xffffffffffffffe;
        puVar10 = puVar10 + uVar23 * -2;
        do {
          uVar23 = uVar23 - 2;
        } while (uVar23 != 0);
      }
      do {
        if (puVar10 == puVar8) {
          operator_delete(puVar8);
          goto LAB_006296c4;
        }
        puVar10 = puVar10 + -2;
      } while (puVar10 != (undefined8 *)0x0);
      goto LAB_0062929c;
    }
  }
LAB_006296c4:
  FUN_00629a90(param_1);
  uVar23 = FUN_00417e08();
  if ((uVar23 & 1) == 0) {
    local_68 = &uStack_91;
    local_78 = "../../modules/audio_processing/aec3/echo_canceller3.cc";
    local_70 = (char *)0x19a1;
    local_88 = &local_78;
    local_90 = "AEC3 created with sample rate: ";
    FUN_00623bb0(&DAT_001f7138,"../../modules/audio_processing/aec3/echo_canceller3.cc",0x19a1,
                 "AEC3 created with sample rate: ",*(undefined4 *)(param_1 + 0x59),
                 " Hz, num render channels: ",param_1[0x5a],", num capture channels: ",param_1[0x5c]
                );
  }
  return;
}


// ===== 0062975c  FUN_0062975c =====

undefined8 * FUN_0062975c(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  void *__dest;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar2 = param_1;
  if (param_2 != 0) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      auVar11 = FUN_0062aaf0();
      puVar9 = auVar11._8_8_;
      puVar2 = auVar11._0_8_;
      puVar10 = (undefined8 *)*puVar2;
      if (puVar10 != (undefined8 *)0x0) {
        puVar4 = puVar10;
        puVar5 = (undefined8 *)puVar2[1];
        if (puVar10 != (undefined8 *)puVar2[1]) {
          do {
            puVar4 = puVar5 + -3;
            if (puVar4 == (undefined8 *)0x0) {
LAB_0062996c:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            pvVar3 = (void *)*puVar4;
            if (pvVar3 != (void *)0x0) {
              pvVar6 = (void *)puVar5[-2];
              uVar7 = (ulong)((long)pvVar6 + (-0x10 - ((long)pvVar6 << 0x3c))) >> 4;
              uVar8 = (ulong)(((long)pvVar3 - (long)pvVar6 << 0x3c) - ((long)pvVar3 - (long)pvVar6))
                      >> 4;
              if (uVar7 <= uVar8) {
                uVar8 = uVar7;
              }
              if ((1 < uVar8) && ((((int)pvVar3 - (int)pvVar6 | -(int)pvVar6) & 0xfU) == 0)) {
                uVar8 = uVar8 & 0xffffffffffffffe;
                pvVar6 = (void *)((long)pvVar6 + uVar8 * -0x10);
                do {
                  uVar8 = uVar8 - 2;
                } while (uVar8 != 0);
              }
              while (pvVar6 != pvVar3) {
                pvVar6 = (void *)((long)pvVar6 + -0x10);
                if (pvVar6 == (void *)0x0) goto LAB_0062996c;
              }
              puVar5[-2] = pvVar3;
              operator_delete(pvVar3);
            }
            puVar5 = puVar4;
          } while (puVar10 != puVar4);
          puVar4 = (undefined8 *)*puVar2;
        }
        puVar2[1] = puVar10;
        operator_delete(puVar4);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
      }
      *puVar2 = *puVar9;
      puVar2[1] = puVar9[1];
      puVar2[2] = puVar9[2];
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      return puVar2;
    }
    uVar8 = param_2 * 0x18;
    puVar2 = (undefined8 *)operator_new(uVar8);
    puVar10 = puVar2 + param_2 * 3;
    *param_1 = puVar2;
    param_1[1] = puVar2;
    param_1[2] = puVar10;
    pvVar3 = (void *)*param_3;
    pvVar6 = (void *)param_3[1];
    puVar9 = puVar2;
    do {
      if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      if (pvVar6 != pvVar3) {
        if ((long)pvVar6 - (long)pvVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0062aad8();
        }
        __dest = operator_new((long)pvVar6 - (long)pvVar3);
        lVar1 = (long)__dest + ((long)pvVar6 - (long)pvVar3);
        *puVar9 = __dest;
        puVar9[1] = __dest;
        puVar9[2] = lVar1;
        puVar2 = (undefined8 *)memcpy(__dest,pvVar3,(long)pvVar6 - (long)pvVar3);
        puVar9[1] = lVar1;
      }
      uVar8 = uVar8 - 0x18;
      puVar9 = puVar9 + 3;
    } while (uVar8 != 0);
    param_1[1] = puVar10;
  }
  return puVar2;
}


// ===== 00629850  FUN_00629850 =====

undefined8 * FUN_00629850(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)*param_1;
  if (puVar7 != (undefined8 *)0x0) {
    puVar2 = puVar7;
    puVar3 = (undefined8 *)param_1[1];
    if (puVar7 != (undefined8 *)param_1[1]) {
      do {
        puVar2 = puVar3 + -3;
        if (puVar2 == (undefined8 *)0x0) {
LAB_0062996c:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        pvVar1 = (void *)*puVar2;
        if (pvVar1 != (void *)0x0) {
          pvVar4 = (void *)puVar3[-2];
          uVar6 = (ulong)((long)pvVar4 + (-0x10 - ((long)pvVar4 << 0x3c))) >> 4;
          uVar5 = (ulong)(((long)pvVar1 - (long)pvVar4 << 0x3c) - ((long)pvVar1 - (long)pvVar4)) >>
                  4;
          if (uVar6 <= uVar5) {
            uVar5 = uVar6;
          }
          if ((1 < uVar5) && ((((int)pvVar1 - (int)pvVar4 | -(int)pvVar4) & 0xfU) == 0)) {
            uVar5 = uVar5 & 0xffffffffffffffe;
            pvVar4 = (void *)((long)pvVar4 + uVar5 * -0x10);
            do {
              uVar5 = uVar5 - 2;
            } while (uVar5 != 0);
          }
          while (pvVar4 != pvVar1) {
            pvVar4 = (void *)((long)pvVar4 + -0x10);
            if (pvVar4 == (void *)0x0) goto LAB_0062996c;
          }
          puVar3[-2] = pvVar1;
          operator_delete(pvVar1);
        }
        puVar3 = puVar2;
      } while (puVar7 != puVar2);
      puVar2 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar7;
    operator_delete(puVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_1;
}


// ===== 00629980  FUN_00629980 =====

void FUN_00629980(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)*param_1;
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = puVar7;
  puVar3 = (undefined8 *)param_1[1];
  if (puVar7 != (undefined8 *)param_1[1]) {
    do {
      puVar2 = puVar3 + -3;
      if (puVar2 == (undefined8 *)0x0) {
LAB_00629a68:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar1 = (void *)*puVar2;
      if (pvVar1 != (void *)0x0) {
        pvVar4 = (void *)puVar3[-2];
        uVar6 = (ulong)((long)pvVar4 + (-0x10 - ((long)pvVar4 << 0x3c))) >> 4;
        uVar5 = (ulong)(((long)pvVar1 - (long)pvVar4 << 0x3c) - ((long)pvVar1 - (long)pvVar4)) >> 4;
        if (uVar6 <= uVar5) {
          uVar5 = uVar6;
        }
        if ((1 < uVar5) && ((((int)pvVar1 - (int)pvVar4 | -(int)pvVar4) & 0xfU) == 0)) {
          uVar5 = uVar5 & 0xffffffffffffffe;
          pvVar4 = (void *)((long)pvVar4 + uVar5 * -0x10);
          do {
            uVar5 = uVar5 - 2;
          } while (uVar5 != 0);
        }
        while (pvVar4 != pvVar1) {
          pvVar4 = (void *)((long)pvVar4 + -0x10);
          if (pvVar4 == (void *)0x0) goto LAB_00629a68;
        }
        puVar3[-2] = pvVar1;
        operator_delete(pvVar1);
      }
      puVar3 = puVar2;
    } while (puVar7 != puVar2);
    puVar2 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar7;
  operator_delete(puVar2);
  return;
}


// ===== 00629a90  FUN_00629a90 =====

void FUN_00629a90(long param_1)

{
  int iVar1;
  bool bVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  size_t __n;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  void *pvVar12;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined1 auStack_48 [24];
  
  if (*(char *)(param_1 + 0x7e8) == '\x01') {
    uVar6 = *(undefined8 *)(param_1 + 0x2d0);
  }
  else {
    uVar6 = 1;
  }
  *(undefined8 *)(param_1 + 0x2d8) = uVar6;
  FUN_0062b010(param_1 + 0x2e8);
  uVar9 = *(int *)(param_1 + 0x8d8) * *(int *)(param_1 + 0x2d8);
  *(int *)(param_1 + 0x8dc) = *(int *)(param_1 + 0x2d8);
  FUN_0062abc0(param_1 + 0x8e0,-(ulong)(uVar9 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar9 << 6);
  __n = *(long *)(param_1 + 0x8e8) - (long)*(void **)(param_1 + 0x8e0);
  if (0 < (long)__n) {
    memset(*(void **)(param_1 + 0x8e0),0,__n);
  }
  pvVar3 = operator_new(0x28);
  FUN_0063574c(pvVar3,(long)*(int *)(param_1 + 0x2cc),*(undefined8 *)(param_1 + 0x2d8));
  pvVar12 = *(void **)(param_1 + 0x860);
  *(void **)(param_1 + 0x860) = pvVar3;
  if (pvVar12 != (void *)0x0) {
    FUN_0063598c(pvVar12);
    operator_delete(pvVar12);
  }
  uVar6 = FUN_0062c164(param_1 + 8,*(undefined8 *)(param_1 + 0x7c0),*(undefined4 *)(param_1 + 0x2c8)
                       ,*(undefined8 *)(param_1 + 0x2d8),*(undefined8 *)(param_1 + 0x2e0),
                       *(undefined8 *)(param_1 + 0x800));
  plVar7 = *(long **)(param_1 + 0x8b0);
  *(undefined8 *)(param_1 + 0x8b0) = uVar6;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))(plVar7);
  }
  uVar8 = *(ulong *)(param_1 + 0x2d8);
  iVar1 = *(int *)(param_1 + 0x2cc);
  local_58 = (undefined8 *)0x0;
  local_50 = (undefined8 *)0x0;
  local_60 = (undefined8 *)0x0;
  if (uVar8 != 0) {
    if (uVar8 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0062aad8();
    }
    local_60 = (undefined8 *)operator_new(uVar8 * 0x10);
    uVar10 = uVar8 * 0x10 - 0x10;
    local_50 = local_60 + uVar8 * 2;
    uVar9 = (uint)uVar10;
    puVar5 = local_60;
    if ((~uVar9 & 0x30) != 0) {
      lVar11 = -((ulong)((uVar9 >> 4) + 1) & 3);
      puVar4 = local_60;
      do {
        if (puVar4 == (undefined8 *)0x0) goto LAB_00629cc4;
        bVar2 = lVar11 != -1;
        lVar11 = lVar11 + 1;
        puVar5 = puVar4 + 2;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4 = puVar5;
      } while (bVar2);
    }
    if (0x2f < uVar10) {
      do {
        if (puVar5 == (undefined8 *)0x0) {
LAB_00629cc4:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *puVar5 = 0;
        puVar5[1] = 0;
        if (puVar5 + 2 == (undefined8 *)0x0) goto LAB_00629cc4;
        puVar5[2] = 0;
        puVar5[3] = 0;
        if (puVar5 + 4 == (undefined8 *)0x0) goto LAB_00629cc4;
        puVar5[4] = 0;
        puVar5[5] = 0;
        if (puVar5 + 6 == (undefined8 *)0x0) goto LAB_00629cc4;
        puVar4 = puVar5 + 8;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5 = puVar4;
      } while (puVar4 != local_50);
    }
  }
  local_58 = local_50;
  FUN_0062975c(auStack_48,(long)iVar1,&local_60);
  FUN_00629850(param_1 + 0x920,auStack_48);
  FUN_00629980(auStack_48);
  if (local_60 != (undefined8 *)0x0) {
    uVar10 = (ulong)((long)local_58 + (-0x10 - ((long)local_58 << 0x3c))) >> 4;
    uVar8 = (ulong)(((long)local_60 - (long)local_58 << 0x3c) - ((long)local_60 - (long)local_58))
            >> 4;
    if (uVar10 <= uVar8) {
      uVar8 = uVar10;
    }
    puVar5 = local_58;
    if ((1 < uVar8) && ((((int)local_60 - (int)local_58 | -(int)local_58) & 0xfU) == 0)) {
      uVar8 = uVar8 & 0xffffffffffffffe;
      puVar5 = local_58 + uVar8 * -2;
      do {
        uVar8 = uVar8 - 2;
      } while (uVar8 != 0);
    }
    while (puVar5 != local_60) {
      puVar5 = puVar5 + -2;
      if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    local_58 = local_60;
    operator_delete(local_60);
  }
  return;
}


// ===== 00629d04  FUN_00629d04 =====

void FUN_00629d04(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  
  pvVar7 = (void *)param_1[0x12d];
  param_1[0x12d] = 0;
  *param_1 = &PTR_FUN_00d27828;
  if (pvVar7 != (void *)0x0) {
    FUN_0062bf84(pvVar7);
    operator_delete(pvVar7);
  }
  FUN_00629980(param_1 + 0x12a);
  FUN_00629980(param_1 + 0x127);
  FUN_00629980(param_1 + 0x124);
  pvVar7 = (void *)param_1[0x121];
  if (pvVar7 == (void *)0x0) {
LAB_00629df0:
    pvVar7 = (void *)param_1[0x11f];
    param_1[0x11f] = 0;
    if (pvVar7 != (void *)0x0) {
      pvVar3 = *(void **)((long)pvVar7 + 8);
      if (pvVar3 != (void *)0x0) {
        pvVar4 = *(void **)((long)pvVar7 + 0x10);
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
            *(void **)((long)pvVar7 + 0x10) = pvVar3;
            operator_delete(pvVar3);
            goto LAB_00629e7c;
          }
          pvVar4 = (void *)((long)pvVar4 + -4);
        } while (pvVar4 != (void *)0x0);
        goto LAB_00629dcc;
      }
LAB_00629e7c:
      operator_delete(pvVar7);
    }
    pvVar7 = (void *)param_1[0x11c];
    if (pvVar7 == (void *)0x0) {
LAB_00629f08:
      pvVar7 = (void *)param_1[0x117];
      if (pvVar7 != (void *)0x0) {
        pvVar3 = (void *)param_1[0x118];
        pvVar4 = pvVar7;
        if (pvVar7 != pvVar3) {
          do {
            pvVar3 = (void *)((long)pvVar3 + -0x18);
            if (pvVar3 == (void *)0x0) goto LAB_00629dcc;
            FUN_006286b4(pvVar3);
          } while (pvVar3 != pvVar7);
          pvVar4 = (void *)param_1[0x117];
        }
        param_1[0x118] = pvVar7;
        operator_delete(pvVar4);
      }
      plVar2 = (long *)param_1[0x116];
      param_1[0x116] = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (param_1[0x113] != 0) {
        FUN_0062ab08(param_1 + 0x113);
        operator_delete((void *)param_1[0x113]);
      }
      pvVar7 = (void *)param_1[0x10c];
      param_1[0x10c] = 0;
      if (pvVar7 != (void *)0x0) {
        FUN_0063598c(pvVar7);
        operator_delete(pvVar7);
      }
      FUN_0063598c(param_1 + 0x107);
      FUN_0062b23c(param_1 + 0x102);
      pvVar7 = (void *)param_1[0x101];
      param_1[0x101] = 0;
      if (pvVar7 != (void *)0x0) {
        FUN_0062b23c(pvVar7);
        operator_delete(pvVar7);
      }
      pvVar7 = (void *)param_1[0xfc];
      param_1[0xfc] = 0;
      if (pvVar7 != (void *)0x0) {
        FUN_006370c0(pvVar7);
        operator_delete(pvVar7);
      }
      pvVar7 = (void *)param_1[0xb];
      param_1[0xb] = 0;
      if (pvVar7 != (void *)0x0) {
        FUN_0065b3e0(pvVar7);
        operator_delete(pvVar7);
      }
      pvVar7 = (void *)param_1[10];
      param_1[10] = 0;
      if (pvVar7 != (void *)0x0) {
        FUN_006287c4(pvVar7);
        operator_delete(pvVar7);
      }
      plVar2 = (long *)param_1[1];
      if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0062a06c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 8))(plVar2);
        return;
      }
      return;
    }
    pvVar3 = (void *)param_1[0x11d];
    uVar6 = (ulong)((long)pvVar3 + (-4 - ((long)pvVar3 << 0x3e))) >> 2;
    uVar5 = (ulong)(((long)pvVar7 - (long)pvVar3 << 0x3e) - ((long)pvVar7 - (long)pvVar3)) >> 2;
    if (uVar6 <= uVar5) {
      uVar5 = uVar6;
    }
    if ((1 < uVar5) && ((((int)pvVar7 - (int)pvVar3 | -(int)pvVar3) & 3U) == 0)) {
      uVar5 = uVar5 & 0x3ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar5 * -4);
      do {
        uVar5 = uVar5 - 2;
      } while (uVar5 != 0);
    }
    do {
      if (pvVar3 == pvVar7) {
        param_1[0x11d] = pvVar7;
        operator_delete(pvVar7);
        goto LAB_00629f08;
      }
      pvVar3 = (void *)((long)pvVar3 + -4);
    } while (pvVar3 != (void *)0x0);
  }
  else {
    pvVar3 = (void *)param_1[0x122];
    uVar6 = (ulong)((long)pvVar3 + (-4 - ((long)pvVar3 << 0x3e))) >> 2;
    uVar5 = (ulong)(((long)pvVar7 - (long)pvVar3 << 0x3e) - ((long)pvVar7 - (long)pvVar3)) >> 2;
    if (uVar6 <= uVar5) {
      uVar5 = uVar6;
    }
    if ((1 < uVar5) && ((((int)pvVar7 - (int)pvVar3 | -(int)pvVar3) & 3U) == 0)) {
      uVar5 = uVar5 & 0x3ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar5 * -4);
      do {
        uVar5 = uVar5 - 2;
      } while (uVar5 != 0);
    }
    do {
      if (pvVar3 == pvVar7) {
        param_1[0x122] = pvVar7;
        operator_delete(pvVar7);
        goto LAB_00629df0;
      }
      pvVar3 = (void *)((long)pvVar3 + -4);
    } while (pvVar3 != (void *)0x0);
  }
LAB_00629dcc:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0062a084  FUN_0062a084 =====

void FUN_0062a084(void *param_1)

{
  FUN_00629d04();
  operator_delete(param_1);
  return;
}


// ===== 0062a0b4  FUN_0062a0b4 =====

void FUN_0062a0b4(long *param_1,undefined8 param_2,undefined4 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0062a0c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,param_2,0,param_3);
  return;
}


// ===== 0062a0cc  FUN_0062a0cc =====

void FUN_0062a0cc(long param_1,undefined8 param_2,long param_3,byte param_4)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  undefined1 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  
  if (((param_3 != 0) && (*(long *)(param_1 + 0x808) == 0)) &&
     (uVar5 = FUN_004249b0(), (uVar5 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_processing/aec3/echo_canceller3.cc",0x1be3,
                 "Trying to retrieve the linear AEC output without properly configuring AEC3.");
  }
  FUN_0062bb18(param_1 + 0x970);
  if (*(long *)(*(long *)(param_1 + 0x7c0) + 0x38) != 0) {
    FUN_0062c018(*(undefined8 *)(param_1 + 0x968),param_2);
  }
  FUN_0062a28c(param_1);
  lVar1 = param_1 + 0x810;
  lVar2 = param_1 + 0x900;
  FUN_0062a434(param_3,param_2,param_4 & 1,*(undefined1 *)(param_1 + 0x7e9),
               *(undefined1 *)(param_1 + 0x8d0),0,param_1 + 0x838,*(undefined8 *)(param_1 + 0x808),
               lVar1,*(undefined8 *)(param_1 + 0x8b0),*(undefined8 *)(param_1 + 0x8f8),
               param_1 + 0x938,lVar2,param_1 + 0x950);
  FUN_0062a434(param_3,param_2,param_4 & 1,*(undefined1 *)(param_1 + 0x7e9),
               *(undefined1 *)(param_1 + 0x8d0),1,param_1 + 0x838,*(undefined8 *)(param_1 + 0x808),
               lVar1,*(undefined8 *)(param_1 + 0x8b0),*(undefined8 *)(param_1 + 0x8f8),
               param_1 + 0x938,lVar2,param_1 + 0x950);
  bVar3 = *(byte *)(param_1 + 0x7e9);
  uVar4 = *(undefined1 *)(param_1 + 0x8d0);
  lVar6 = *(long *)(param_1 + 0x808);
  plVar8 = *(long **)(param_1 + 0x8b0);
  uVar7 = *(undefined8 *)(param_1 + 0x8f8);
  uVar5 = FUN_00635cd8(param_1 + 0x838);
  if ((uVar5 & 1) != 0) {
    FUN_00635d2c(param_1 + 0x838,lVar2);
    (**(code **)(*plVar8 + 0x20))(plVar8,(param_4 | bVar3) & 1,uVar4,uVar7,lVar2);
    FUN_0062b2d0(lVar1,lVar2);
    if (lVar6 != 0) {
      FUN_0062b2d0(lVar6,uVar7);
      return;
    }
  }
  return;
}


// ===== 0062a28c  FUN_0062a28c =====

void FUN_0062a28c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x890) == 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x898);
  uVar3 = *(ulong *)(param_1 + 0x888);
  if (uVar3 < (ulong)((*(long *)(param_1 + 0x8a0) - lVar1 >> 3) * -0x5555555555555555)) {
    do {
      puVar2 = (undefined8 *)(lVar1 + uVar3 * 0x18);
      uVar4 = *(undefined8 *)(param_1 + 0x8b8);
      *(undefined8 *)(param_1 + 0x8b8) = *puVar2;
      *puVar2 = uVar4;
      uVar4 = *(undefined8 *)(param_1 + 0x8c0);
      *(undefined8 *)(param_1 + 0x8c0) = puVar2[1];
      puVar2[1] = uVar4;
      uVar4 = *(undefined8 *)(param_1 + 0x8c8);
      *(undefined8 *)(param_1 + 0x8c8) = puVar2[2];
      puVar2[2] = uVar4;
      FUN_00d0f800(0xffffffffffffffff,param_1 + 0x890);
      lVar1 = 0;
      if (*(long *)(param_1 + 0x888) + 1 !=
          (*(long *)(param_1 + 0x8a0) - *(long *)(param_1 + 0x898) >> 3) * -0x5555555555555555) {
        lVar1 = *(long *)(param_1 + 0x888) + 1;
      }
      *(long *)(param_1 + 0x888) = lVar1;
      FUN_0062bac0(param_1 + 0x970);
      uVar3 = FUN_006371d4(param_1 + 0x7c8,param_1 + 0x8b8);
      if ((uVar3 & 1) != 0) {
        FUN_00629a90(param_1);
      }
      FUN_0062a5c4(*(undefined1 *)(param_1 + 0x7e9),param_1 + 0x8b8,0,
                   *(undefined8 *)(param_1 + 0x860),*(undefined8 *)(param_1 + 0x8b0),param_1 + 0x8d8
                   ,param_1 + 0x920);
      FUN_0062a5c4(*(undefined1 *)(param_1 + 0x7e9),param_1 + 0x8b8,1,
                   *(undefined8 *)(param_1 + 0x860),*(undefined8 *)(param_1 + 0x8b0),param_1 + 0x8d8
                   ,param_1 + 0x920);
      uVar4 = *(undefined8 *)(param_1 + 0x860);
      plVar5 = *(long **)(param_1 + 0x8b0);
      uVar3 = FUN_00635cd8(uVar4);
      if ((uVar3 & 1) != 0) {
        FUN_00635d2c(uVar4,param_1 + 0x8d8);
        (**(code **)(*plVar5 + 0x28))(plVar5,param_1 + 0x8d8);
      }
      if (*(long *)(param_1 + 0x890) == 0) {
        return;
      }
      lVar1 = *(long *)(param_1 + 0x898);
      uVar3 = *(ulong *)(param_1 + 0x888);
    } while (uVar3 < (ulong)((*(long *)(param_1 + 0x8a0) - lVar1 >> 3) * -0x5555555555555555));
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 0062a434  FUN_0062a434 =====

void FUN_0062a434(long param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 long *param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                 undefined8 param_14)

{
  FUN_0062ae80(param_2,param_6,param_14);
  if (param_1 == 0) {
    FUN_00635a20(param_7,param_14,param_13);
    (**(code **)(*param_10 + 0x20))(param_10,(param_3 | param_4) & 1,param_5 & 1,param_11,param_13);
    param_8 = param_9;
    param_11 = param_13;
    param_12 = param_14;
  }
  else {
    FUN_0062ae80(param_1,param_6,param_12);
    FUN_00635a20(param_7,param_14,param_13);
    (**(code **)(*param_10 + 0x20))(param_10,(param_3 | param_4) & 1,param_5 & 1,param_11,param_13);
    FUN_0062b3d4(param_9,param_13,param_14);
  }
  FUN_0062b3d4(param_8,param_11,param_12);
  return;
}


