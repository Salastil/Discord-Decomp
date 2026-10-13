// ===== 00708614  FUN_00708614 =====

void FUN_00708614(void)

{
  int iVar1;
  
  iVar1 = FUN_007082bc();
  if (iVar1 != 0) {
    FUN_00708cb4("nsync_mu_wait woke but condition not true\n");
    return;
  }
  return;
}


// ===== 0070864c  FUN_0070864c =====

void FUN_0070864c(undefined8 *param_1)

{
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


// ===== 00708664  FUN_00708664 =====

void FUN_00708664(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  long local_38;
  char local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = '\0';
  local_38 = param_1;
  if (param_1 == 0) {
    pcVar3 = "unique_lock::lock: references null mutex";
LAB_00708708:
    if (*(long *)(lVar1 + 0x28) == local_28) {
      uVar2 = FUN_00715908(1,pcVar3);
                    /* catch() { ... } // from try @ 0070868c with catch @ 00708720 */
      if (local_30 != '\0') {
        FUN_00715bf8(local_38);
      }
      if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
        FUN_00755eac(uVar2);
      }
    }
  }
  else {
                    /* try { // try from 0070868c to 0070871f has its CatchHandler @ 00708720 */
    FUN_00715bcc();
    local_30 = '\x01';
    if (*(int *)(param_1 + 0x58) == 0) {
      do {
        FUN_00715ac0(param_1 + 0x28,&local_38);
      } while (*(int *)(param_1 + 0x58) == 0);
      *(undefined4 *)(param_1 + 0x58) = 0;
      if (local_30 == '\0') {
        pcVar3 = "unique_lock::unlock: not locked";
        goto LAB_00708708;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    FUN_00715bf8(local_38);
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00708750  FUN_00708750 =====

undefined4 FUN_00708750(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  long local_58;
  byte local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = 0;
  local_58 = param_1;
                    /* try { // try from 00708794 to 0070879f has its CatchHandler @ 00708ad8 */
  iVar2 = FUN_00708c8c(param_2,param_3,*(undefined8 *)PTR_DAT_007a3798,
                       *(undefined8 *)(PTR_DAT_007a3798 + 8));
  if (iVar2 != 0) {
                    /* try { // try from 007087a4 to 007087c7 has its CatchHandler @ 00708ae0 */
    uVar3 = FUN_00708c1c(param_2,param_3);
    if (local_58 == 0) {
      pcVar6 = "unique_lock::lock: references null mutex";
      goto LAB_00708a80;
    }
    if ((local_50 & 1) == 0) {
      FUN_00715bcc();
      local_50 = 1;
      if (*(int *)(param_1 + 0x58) == 0) {
        if (uVar3 == 0) {
          do {
            lVar4 = FUN_007110f4();
            if (lVar4 < 0) {
              FUN_00715b0c(param_1 + 0x28,&local_58,0);
              lVar4 = FUN_007110f4();
              if (-1 < lVar4) goto LAB_007088a4;
            }
            else {
LAB_007088a4:
                    /* try { // try from 007088a4 to 007088bb has its CatchHandler @ 00708adc */
              auVar8 = FUN_00708c48();
              iVar2 = FUN_00708c8c(param_2,param_3,auVar8._0_8_,auVar8._8_8_);
              if (iVar2 < 1) goto LAB_00708a30;
            }
          } while (*(int *)(param_1 + 0x58) == 0);
        }
        else if ((long)uVar3 < 1) {
          if (uVar3 < 0xffdf3b645a1cac09) {
            do {
              lVar4 = FUN_007110f4();
              if (lVar4 < (long)uVar3) {
                FUN_00715b0c(param_1 + 0x28,&local_58,0x8000000000000000);
                lVar4 = FUN_007110f4();
                if ((long)uVar3 <= lVar4) goto LAB_007089bc;
              }
              else {
LAB_007089bc:
                    /* try { // try from 007089bc to 007089d3 has its CatchHandler @ 00708acc */
                auVar8 = FUN_00708c48();
                iVar2 = FUN_00708c8c(param_2,param_3,auVar8._0_8_,auVar8._8_8_);
                if (iVar2 < 1) goto LAB_00708a30;
              }
            } while (*(int *)(param_1 + 0x58) == 0);
          }
          else {
            do {
              lVar4 = FUN_007110f4();
              if (lVar4 < (long)uVar3) {
                FUN_00715b0c(param_1 + 0x28,&local_58,uVar3 * 1000);
                lVar4 = FUN_007110f4();
                if ((long)uVar3 <= lVar4) goto LAB_00708a10;
              }
              else {
LAB_00708a10:
                    /* try { // try from 00708a10 to 00708a27 has its CatchHandler @ 00708ac8 */
                auVar8 = FUN_00708c48();
                iVar2 = FUN_00708c8c(param_2,param_3,auVar8._0_8_,auVar8._8_8_);
                if (iVar2 < 1) goto LAB_00708a30;
              }
            } while (*(int *)(param_1 + 0x58) == 0);
          }
        }
        else if (uVar3 < 0x20c49ba5e353f8) {
          do {
            lVar4 = FUN_007110f4();
            if (lVar4 < (long)uVar3) {
              FUN_00715b0c(param_1 + 0x28,&local_58,uVar3 * 1000);
              lVar4 = FUN_007110f4();
              if ((long)uVar3 <= lVar4) goto LAB_0070894c;
            }
            else {
LAB_0070894c:
                    /* try { // try from 0070894c to 00708963 has its CatchHandler @ 00708ad0 */
              auVar8 = FUN_00708c48();
              iVar2 = FUN_00708c8c(param_2,param_3,auVar8._0_8_,auVar8._8_8_);
              if (iVar2 < 1) goto LAB_00708a30;
            }
          } while (*(int *)(param_1 + 0x58) == 0);
        }
        else {
          do {
            lVar4 = FUN_007110f4();
            if (lVar4 < (long)uVar3) {
              FUN_00715b0c(param_1 + 0x28,&local_58,0x7fffffffffffffff);
              lVar4 = FUN_007110f4();
              if ((long)uVar3 <= lVar4) goto LAB_007088f8;
            }
            else {
LAB_007088f8:
                    /* try { // try from 007088f8 to 0070890f has its CatchHandler @ 00708ad4 */
              auVar8 = FUN_00708c48();
              iVar2 = FUN_00708c8c(param_2,param_3,auVar8._0_8_,auVar8._8_8_);
              if (iVar2 < 1) goto LAB_00708a30;
            }
          } while (*(int *)(param_1 + 0x58) == 0);
        }
      }
      goto LAB_007087d8;
    }
    pcVar6 = "unique_lock::lock: already locked";
    uVar5 = 0x23;
    goto LAB_00708a94;
  }
  if (param_1 == 0) goto LAB_00708aa8;
                    /* try { // try from 007087f8 to 007087ff has its CatchHandler @ 00708ad8 */
  FUN_00715bcc(param_1);
  local_50 = 1;
  if (*(int *)(param_1 + 0x58) != 0) {
    uVar7 = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
LAB_00708a44:
    FUN_00715bf8(local_58);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return uVar7;
    }
    goto LAB_00708b0c;
  }
  do {
    FUN_00715ac0(param_1 + 0x28,&local_58);
  } while (*(int *)(param_1 + 0x58) == 0);
  uVar7 = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (local_50 != 0) goto LAB_00708a44;
  pcVar6 = "unique_lock::unlock: not locked";
  goto LAB_00708ab0;
LAB_00708a30:
  if (*(int *)(param_1 + 0x58) == 0) {
    uVar7 = 0x6e;
  }
  else {
LAB_007087d8:
    uVar7 = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (local_50 != 0) goto LAB_00708a44;
  pcVar6 = "unique_lock::unlock: not locked";
LAB_00708a80:
  uVar5 = 1;
LAB_00708a94:
  if (*(long *)(lVar1 + 0x28) != local_48) goto LAB_00708b0c;
                    /* try { // try from 00708aa4 to 00708aa7 has its CatchHandler @ 00708ae0 */
  FUN_00715908(uVar5,pcVar6);
LAB_00708aa8:
  pcVar6 = "unique_lock::lock: references null mutex";
LAB_00708ab0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00708ac0 to 00708ac7 has its CatchHandler @ 00708ad8 */
    uVar5 = FUN_00715908(1,pcVar6);
                    /* catch() { ... } // from try @ 00708a10 with catch @ 00708ac8 */
                    /* catch() { ... } // from try @ 007087a4 with catch @ 00708ae0
                       catch() { ... } // from try @ 00708aa4 with catch @ 00708ae0 */
    if (local_50 != 0) {
      FUN_00715bf8(local_58);
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar5);
    }
  }
LAB_00708b0c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00708b10  FUN_00708b10 =====

ulong FUN_00708b10(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  if (param_1 != 0) {
    FUN_00715bcc();
    *(undefined4 *)(param_1 + 0x58) = 1;
    FUN_00715aa0(param_1 + 0x28);
    uVar3 = FUN_00715bf8(param_1);
    return uVar3;
  }
  auVar4 = FUN_00715908(1,"unique_lock::lock: references null mutex");
  if ((int)DAT_007aee50 != 2) {
    do {
      if ((int)DAT_007aee50 != 0) goto LAB_00708bd8;
      iVar1 = FUN_00755a80(0,1,&DAT_007aee50);
    } while (iVar1 != 0);
    pthread_key_create((pthread_key_t *)((long)&DAT_007aee50 + 4),auVar4._8_8_);
    DAT_007aee50._0_4_ = 2;
LAB_00708bd8:
    while ((int)DAT_007aee50 != 2) {
      sched_yield();
    }
  }
  uVar2 = pthread_setspecific(DAT_007aee50._4_4_,auVar4._0_8_);
  return (ulong)uVar2;
}


// ===== 00708b58  FUN_00708b58 =====

int FUN_00708b58(void *param_1,__destr_function *param_2)

{
  int iVar1;
  
  if ((int)DAT_007aee50 != 2) {
    if ((int)DAT_007aee50 == 0) {
      do {
        iVar1 = FUN_00755a80(0,1,&DAT_007aee50);
        if (iVar1 == 0) {
          pthread_key_create((pthread_key_t *)((long)&DAT_007aee50 + 4),param_2);
          DAT_007aee50._0_4_ = 2;
          break;
        }
      } while ((int)DAT_007aee50 == 0);
    }
    while ((int)DAT_007aee50 != 2) {
      sched_yield();
    }
  }
  iVar1 = pthread_setspecific(DAT_007aee50._4_4_,param_1);
  return iVar1;
}


// ===== 00708c04  FUN_00708c04 =====

int FUN_00708c04(void)

{
  int iVar1;
  
                    /* try { // try from 00708c0c to 00708c0f has its CatchHandler @ 00708c18 */
  iVar1 = sched_yield();
  return iVar1;
}


// ===== 00708c1c  FUN_00708c1c =====

long FUN_00708c1c(long param_1,long param_2)

{
  return (param_2 + param_1 * 1000000000) / 1000;
}


// ===== 00708c48  FUN_00708c48 =====

void FUN_00708c48(void)

{
  FUN_007110f4();
  return;
}


// ===== 00708c8c  FUN_00708c8c =====

int FUN_00708c8c(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  
  iVar1 = (uint)(param_3 < param_1) - (uint)(param_1 < param_3);
  if (iVar1 == 0) {
    iVar1 = (uint)(param_4 < param_2) - (uint)(param_2 < param_4);
  }
  return iVar1;
}


// ===== 00708cb4  FUN_00708cb4 =====

void FUN_00708cb4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00708ce4(PTR_DAT_007a37a8,"panic: ");
  FUN_00708ce4(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00708ce4  FUN_00708ce4 =====

void FUN_00708ce4(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  FUN_00303e0c(param_1,param_2,sVar1);
  return;
}


// ===== 00708d18  FUN_00708d18 =====

void FUN_00708d18(float param_1,float param_2,int param_3,int param_4,int param_5,int param_6,
                 undefined8 param_7,int param_8,long param_9,int param_10,long param_11,int param_12
                 )

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  code *pcVar11;
  ulong uVar12;
  undefined1 auStack_c0 [12];
  int local_b4;
  long local_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  long local_98;
  undefined4 local_8c;
  uint local_88;
  int local_84 [3];
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  local_84[0] = 0;
  if (param_3 == 0x65) {
    iVar4 = -1;
    if (param_4 == 0x6f) {
      iVar4 = 1;
    }
    iVar8 = 0;
    if (param_4 != 0x70) {
      iVar8 = iVar4;
    }
    if (param_4 == 0x72) {
      iVar8 = 1;
    }
    iVar4 = 0;
    if (param_4 != 0x71) {
      iVar4 = iVar8;
    }
    iVar8 = 0xb;
    if (param_12 != 0) {
      iVar8 = -1;
    }
    iVar2 = 8;
    if (param_10 != 0) {
      iVar2 = iVar8;
    }
    iVar8 = param_6;
    if (param_6 < 2) {
      iVar8 = 1;
    }
    iVar3 = 6;
    if (iVar8 <= param_8) {
      iVar3 = iVar2;
    }
    iVar8 = 3;
    if (-1 < param_5) {
      iVar8 = iVar3;
    }
    local_84[0] = 2;
    if (-1 < param_6) {
      local_84[0] = iVar8;
    }
    iVar8 = param_5;
    iVar2 = param_6;
    if (iVar4 < 0) {
      local_84[0] = 1;
      iVar4 = -1;
    }
joined_r0x00708eb4:
    if (local_84[0] < 0) {
      if ((iVar8 != 0) && (iVar2 != 0)) {
        iVar3 = iVar2;
        iVar9 = iVar8;
        if (iVar4 != 0) {
          iVar3 = iVar8;
          iVar9 = iVar2;
        }
        if (param_2 != 1.0) {
          iVar1 = -param_12;
          if (-1 < param_12) {
            iVar1 = param_12;
          }
          local_98 = CONCAT44(local_98._4_4_,param_5);
          local_a0 = (undefined1 *)CONCAT44(local_a0._4_4_,param_6);
          local_b4 = iVar9;
          local_b0 = param_9;
          uStack_a8 = param_7;
          FUN_0070b1ac(param_2,(long)iVar3,0,0,param_11,iVar1,0,0,0,0);
          param_7 = uStack_a8;
          param_9 = local_b0;
          iVar9 = local_b4;
          param_5 = (int)local_98;
          param_6 = (int)local_a0;
        }
        if (param_1 != 0.0) {
          local_88 = param_5 + param_6 + 0x23U & 0xfffffffc;
          lVar5 = 0;
          if (param_10 < 0) {
            lVar5 = -(long)((iVar9 + -1) * param_10);
          }
          lVar6 = 0;
          if (param_12 < 0) {
            lVar6 = -(long)((iVar3 + -1) * param_12);
          }
          if (0x200 < local_88) {
            local_88 = 0;
          }
          param_11 = param_11 + lVar6 * 4;
          local_8c = 0x7fc01234;
          if (local_88 == 0) {
            uVar10 = 1;
          }
          else {
            uVar10 = (ulong)local_88;
          }
          uVar12 = (ulong)(auStack_c0 + -(uVar10 * 4 + 0xf & 0x7fffffff0)) & 0xffffffffffffffe0;
          uVar10 = uVar12;
          if (local_88 == 0) {
            local_a0 = auStack_c0;
            local_98 = param_11;
            uVar10 = FUN_0070a234(1);
            param_11 = local_98;
          }
          pcVar11 = (code *)(&PTR_LAB_0079b808)[iVar4];
          *(long *)(uVar12 - 0x10) = (long)param_12;
          *(ulong *)(uVar12 - 8) = uVar10;
          (*pcVar11)(param_1,(long)iVar2,(long)iVar8,0,param_7,(long)param_8,param_9 + lVar5 * 4,
                     (long)param_10,param_11);
          if (local_88 == 0) {
            FUN_0070a6a8(uVar10);
          }
        }
      }
      goto LAB_00708e00;
    }
  }
  else if (param_3 == 0x66) {
    iVar8 = -(uint)(param_4 != 0x6f);
    if (param_4 == 0x70) {
      iVar8 = 1;
    }
    iVar4 = 0;
    if (param_4 != 0x72) {
      iVar4 = iVar8;
    }
    if (param_4 == 0x71) {
      iVar4 = 1;
    }
    iVar8 = 0xb;
    if (param_12 != 0) {
      iVar8 = -1;
    }
    iVar2 = 8;
    if (param_10 != 0) {
      iVar2 = iVar8;
    }
    iVar8 = param_5;
    if (param_5 < 2) {
      iVar8 = 1;
    }
    iVar3 = 6;
    if (iVar8 <= param_8) {
      iVar3 = iVar2;
    }
    iVar8 = 3;
    if (-1 < param_6) {
      iVar8 = iVar3;
    }
    local_84[0] = 2;
    if (-1 < param_5) {
      local_84[0] = iVar8;
    }
    iVar8 = param_6;
    iVar2 = param_5;
    if (iVar4 < 0) {
      local_84[0] = 1;
    }
    goto joined_r0x00708eb4;
  }
  FUN_0070b04c("SGEMV ",local_84,7);
LAB_00708e00:
  if (*(long *)(lVar7 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0070905c  FUN_0070905c =====

void FUN_0070905c(undefined4 param_1,float param_2,int param_3,undefined4 param_4,undefined4 param_5
                 ,int param_6,int param_7,int param_8,undefined8 param_9,int param_10,
                 undefined8 param_11,int param_12,undefined8 param_13,int param_14)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 *local_d0;
  float *local_c8;
  long local_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long local_a0;
  long local_98;
  float local_78;
  undefined4 uStack_74;
  long local_70;
  long lVar11;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  local_c8 = &local_78;
  local_d0 = &uStack_74;
  local_f4 = 0;
  local_78 = param_2;
  uStack_74 = param_1;
  if (param_3 == 0x65) {
    lVar6 = (long)param_7;
    uVar10 = CONCAT44(param_5,param_4);
    lVar5 = (long)param_6;
    lVar7 = (long)param_10;
    lVar8 = (long)param_12;
    local_f0 = param_11;
    uVar14 = NEON_cmeq(uVar10,0x6f0000006f,4);
    uVar16 = NEON_cmeq(uVar10,0x7000000070,4);
    uVar17 = NEON_cmeq(uVar10,0x7200000072,4);
    uVar10 = NEON_cmeq(uVar10,0x7100000071,4);
    iVar2 = CONCAT13(~(byte)((ulong)uVar14 >> 0x18) & ~(byte)((ulong)uVar16 >> 0x18),
                     CONCAT12(~(byte)((ulong)uVar14 >> 0x10) & ~(byte)((ulong)uVar16 >> 0x10),
                              CONCAT11(~(byte)((ulong)uVar14 >> 8) & ~(byte)((ulong)uVar16 >> 8),
                                       ~(byte)uVar14 & ~(byte)uVar16)));
    iVar13 = iVar2 - (int)uVar16;
    iVar15 = (int)(CONCAT17(~(byte)((ulong)uVar14 >> 0x38) & ~(byte)((ulong)uVar16 >> 0x38),
                            CONCAT16(~(byte)((ulong)uVar14 >> 0x30) & ~(byte)((ulong)uVar16 >> 0x30)
                                     ,CONCAT15(~(byte)((ulong)uVar14 >> 0x28) &
                                               ~(byte)((ulong)uVar16 >> 0x28),
                                               CONCAT14(~(byte)((ulong)uVar14 >> 0x20) &
                                                        ~(byte)((ulong)uVar16 >> 0x20),iVar2)))) >>
                  0x20) - (int)((ulong)uVar16 >> 0x20);
    iVar2 = CONCAT13((byte)((uint)iVar13 >> 0x18) & ~(byte)((ulong)uVar17 >> 0x18) &
                     ~(byte)((ulong)uVar10 >> 0x18),
                     CONCAT12((byte)((uint)iVar13 >> 0x10) & ~(byte)((ulong)uVar17 >> 0x10) &
                              ~(byte)((ulong)uVar10 >> 0x10),
                              CONCAT11((byte)((uint)iVar13 >> 8) & ~(byte)((ulong)uVar17 >> 8) &
                                       ~(byte)((ulong)uVar10 >> 8),
                                       (byte)iVar13 & ~(byte)uVar17 & ~(byte)uVar10)));
    uVar9 = iVar2 - (int)uVar10;
    uVar12 = (int)(CONCAT17((byte)((uint)iVar15 >> 0x18) & ~(byte)((ulong)uVar17 >> 0x38) &
                            ~(byte)((ulong)uVar10 >> 0x38),
                            CONCAT16((byte)((uint)iVar15 >> 0x10) & ~(byte)((ulong)uVar17 >> 0x30) &
                                     ~(byte)((ulong)uVar10 >> 0x30),
                                     CONCAT15((byte)((uint)iVar15 >> 8) &
                                              ~(byte)((ulong)uVar17 >> 0x28) &
                                              ~(byte)((ulong)uVar10 >> 0x28),
                                              CONCAT14((byte)iVar15 & ~(byte)((ulong)uVar17 >> 0x20)
                                                       & ~(byte)((ulong)uVar10 >> 0x20),iVar2)))) >>
                  0x20) - (int)((ulong)uVar10 >> 0x20);
    lVar11 = CONCAT44(uVar12,uVar9);
    lVar3 = lVar6;
    if ((uVar12 & 1) != 0) {
      lVar3 = (long)param_8;
    }
    lVar4 = (long)param_8;
    if ((uVar9 & 1) != 0) {
      lVar4 = lVar5;
    }
    iVar2 = 0xd;
    if (param_7 <= param_14) {
      iVar2 = -1;
    }
    iVar13 = 10;
    if (lVar4 <= lVar7) {
      iVar13 = iVar2;
    }
    iVar2 = 8;
    iVar15 = param_6;
    uStack_e8 = param_9;
    if (lVar3 <= lVar8) {
      iVar2 = iVar13;
    }
LAB_00709240:
    uVar14 = uStack_e8;
    uVar10 = local_f0;
    local_e0 = param_13;
    lVar4 = (long)param_8;
    lVar3 = (long)param_14;
    iVar13 = 5;
    if (-1 < param_8) {
      iVar13 = iVar2;
    }
    iVar2 = 4;
    if (-1 < iVar15) {
      iVar2 = iVar13;
    }
    iVar13 = 3;
    if (-1 < param_7) {
      iVar13 = iVar2;
    }
    local_f4 = 2;
    if (-1 < (int)lVar11) {
      local_f4 = iVar13;
    }
    if (lVar11 < 0) {
      local_f4 = 1;
    }
    local_c0 = lVar6;
    local_b8 = lVar5;
    lStack_b0 = lVar4;
    local_a8 = lVar8;
    local_a0 = lVar7;
    local_98 = lVar3;
    if (local_f4 < 0) {
      if ((lVar6 != 0) && (lVar5 != 0)) {
        iVar2 = FUN_0070f238(uVar12,uVar9,lVar6,lVar5,lVar4);
        if (iVar2 == 0) {
          lVar3 = FUN_0070a234();
          (*(code *)(&PTR_FUN_0079b898)[(int)(uVar12 | uVar9 << 2)])
                    (&local_f0,0,0,lVar3,lVar3 + 0x2c000,0);
          FUN_0070a6a8(lVar3);
        }
        else {
          uVar12 = uVar12 | uVar9 << 2;
          if (local_78 == 0.0) {
            (*(code *)(&PTR_FUN_0079b818)[(int)uVar12])
                      (lVar6,lVar5,lVar4,uVar10,lVar8,uVar14,lVar7,param_13,lVar3);
          }
          else {
            (*(code *)(&PTR_FUN_0079b858)[(int)uVar12])
                      (uStack_74,lVar6,lVar5,lVar4,uVar10,lVar8,uVar14,lVar7,param_13,lVar3);
          }
        }
      }
      goto LAB_0070929c;
    }
  }
  else if (param_3 == 0x66) {
    lVar6 = (long)param_6;
    lVar5 = (long)param_7;
    lVar7 = (long)param_12;
    uVar10 = CONCAT44(param_4,param_5);
    lVar8 = (long)param_10;
    uStack_e8 = param_11;
    uVar14 = NEON_cmeq(uVar10,0x6f0000006f,4);
    uVar16 = NEON_cmeq(uVar10,0x7000000070,4);
    uVar17 = NEON_cmeq(uVar10,0x7200000072,4);
    uVar10 = NEON_cmeq(uVar10,0x7100000071,4);
    iVar2 = CONCAT13(~(byte)((ulong)uVar14 >> 0x18) & ~(byte)((ulong)uVar16 >> 0x18),
                     CONCAT12(~(byte)((ulong)uVar14 >> 0x10) & ~(byte)((ulong)uVar16 >> 0x10),
                              CONCAT11(~(byte)((ulong)uVar14 >> 8) & ~(byte)((ulong)uVar16 >> 8),
                                       ~(byte)uVar14 & ~(byte)uVar16)));
    iVar13 = iVar2 - (int)uVar16;
    iVar15 = (int)(CONCAT17(~(byte)((ulong)uVar14 >> 0x38) & ~(byte)((ulong)uVar16 >> 0x38),
                            CONCAT16(~(byte)((ulong)uVar14 >> 0x30) & ~(byte)((ulong)uVar16 >> 0x30)
                                     ,CONCAT15(~(byte)((ulong)uVar14 >> 0x28) &
                                               ~(byte)((ulong)uVar16 >> 0x28),
                                               CONCAT14(~(byte)((ulong)uVar14 >> 0x20) &
                                                        ~(byte)((ulong)uVar16 >> 0x20),iVar2)))) >>
                  0x20) - (int)((ulong)uVar16 >> 0x20);
    iVar2 = CONCAT13((byte)((uint)iVar13 >> 0x18) & ~(byte)((ulong)uVar17 >> 0x18) &
                     ~(byte)((ulong)uVar10 >> 0x18),
                     CONCAT12((byte)((uint)iVar13 >> 0x10) & ~(byte)((ulong)uVar17 >> 0x10) &
                              ~(byte)((ulong)uVar10 >> 0x10),
                              CONCAT11((byte)((uint)iVar13 >> 8) & ~(byte)((ulong)uVar17 >> 8) &
                                       ~(byte)((ulong)uVar10 >> 8),
                                       (byte)iVar13 & ~(byte)uVar17 & ~(byte)uVar10)));
    uVar9 = iVar2 - (int)uVar10;
    uVar12 = (int)(CONCAT17((byte)((uint)iVar15 >> 0x18) & ~(byte)((ulong)uVar17 >> 0x38) &
                            ~(byte)((ulong)uVar10 >> 0x38),
                            CONCAT16((byte)((uint)iVar15 >> 0x10) & ~(byte)((ulong)uVar17 >> 0x30) &
                                     ~(byte)((ulong)uVar10 >> 0x30),
                                     CONCAT15((byte)((uint)iVar15 >> 8) &
                                              ~(byte)((ulong)uVar17 >> 0x28) &
                                              ~(byte)((ulong)uVar10 >> 0x28),
                                              CONCAT14((byte)iVar15 & ~(byte)((ulong)uVar17 >> 0x20)
                                                       & ~(byte)((ulong)uVar10 >> 0x20),iVar2)))) >>
                  0x20) - (int)((ulong)uVar10 >> 0x20);
    lVar11 = CONCAT44(uVar12,uVar9);
    lVar3 = lVar6;
    if ((uVar12 & 1) != 0) {
      lVar3 = (long)param_8;
    }
    lVar4 = (long)param_8;
    if ((uVar9 & 1) != 0) {
      lVar4 = lVar5;
    }
    iVar2 = 0xd;
    if (param_6 <= param_14) {
      iVar2 = -1;
    }
    iVar13 = 10;
    if (lVar4 <= lVar7) {
      iVar13 = iVar2;
    }
    iVar2 = 8;
    iVar15 = param_7;
    local_f0 = param_9;
    param_7 = param_6;
    if (lVar3 <= lVar8) {
      iVar2 = iVar13;
    }
    goto LAB_00709240;
  }
  FUN_0070b04c("SGEMM ",&local_f4,7);
LAB_0070929c:
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007093b0  FUN_007093b0 =====

undefined8 FUN_007093b0(long *param_1,long *param_2,long *param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  float *pfVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  
  if (param_2 == (long *)0x0) {
    lVar26 = 0;
    plVar12 = param_1 + 6;
    lVar21 = param_1[8];
    lVar27 = param_1[0xb];
  }
  else {
    plVar12 = param_2 + 1;
    lVar26 = *param_2;
    lVar21 = param_1[8];
    lVar27 = param_1[0xb];
  }
  if (param_3 == (long *)0x0) {
    lVar25 = 0;
    plVar13 = param_1 + 7;
  }
  else {
    plVar13 = param_3 + 1;
    lVar25 = *param_3;
  }
  lVar8 = param_1[9];
  lVar10 = param_1[10];
  pfVar15 = (float *)param_1[4];
  lVar23 = *plVar12;
  lVar22 = *plVar13;
  lVar9 = *param_1;
  lVar11 = param_1[1];
  lVar16 = param_1[2];
  if (((float *)param_1[5] != (float *)0x0) && (*(float *)param_1[5] != 1.0)) {
    FUN_0070ef80(lVar23 - lVar26,lVar22 - lVar25,0,0,0,0,0,lVar16 + lVar26 * 4 + lVar25 * lVar27 * 4
                 ,lVar27);
  }
  if ((((lVar21 != 0) && (pfVar15 != (float *)0x0)) && (*pfVar15 != 0.0)) &&
     ((lVar25 < lVar22 && (0 < lVar21)))) {
    uVar17 = lVar23 - lVar26;
    uVar5 = (uVar17 >> 1) + 0xf & 0x7ffffffffffffff0;
    if ((long)uVar17 < 0x81) {
      uVar5 = uVar17;
    }
    uVar2 = 0x80;
    if ((long)uVar17 < 0x100) {
      uVar2 = uVar5;
    }
    do {
      lVar20 = lVar22 - lVar25;
      lVar3 = lVar20;
      if (0xfff < lVar20) {
        lVar3 = 0x1000;
      }
      lVar19 = 0;
      do {
        uVar14 = lVar21 - lVar19;
        uVar5 = (uVar14 >> 1) + 0xf & 0x7ffffffffffffff0;
        if ((long)uVar14 < 0x161) {
          uVar5 = uVar14;
        }
        uVar4 = 0x160;
        if ((long)uVar14 < 0x2c0) {
          uVar4 = uVar5;
        }
        FUN_0070e3c0(uVar4,uVar2,lVar9 + lVar26 * 4 + lVar19 * lVar8 * 4,lVar8,param_4);
        if (0 < lVar20) {
          lVar24 = lVar25;
          uVar5 = uVar4;
          if ((long)uVar17 < 0x81) {
            uVar5 = 0;
          }
          do {
            lVar18 = (lVar3 + lVar25) - lVar24;
            lVar6 = lVar18;
            if (3 < lVar18) {
              lVar6 = 4;
            }
            lVar1 = param_5 + uVar5 * (lVar24 - lVar25) * 4;
            if (0xb < lVar18) {
              lVar6 = 0xc;
            }
            FUN_0070ea20(uVar4,lVar6,lVar11 + lVar19 * 4 + lVar24 * lVar10 * 4,lVar10,lVar1);
            FUN_0070b700(*pfVar15,uVar2,lVar6,uVar4,param_4,lVar1,
                         lVar16 + lVar26 * 4 + lVar24 * lVar27 * 4,lVar27);
            lVar24 = lVar6 + lVar24;
          } while (lVar24 < lVar3 + lVar25);
        }
        if ((long)(uVar2 + lVar26) < lVar23) {
          lVar24 = uVar2 + lVar26;
          do {
            uVar14 = lVar23 - lVar24;
            uVar5 = uVar14;
            if (0x80 < (long)uVar14) {
              uVar5 = (uVar14 >> 1) + 0xf & 0x7ffffffffffffff0;
            }
            uVar7 = 0x80;
            if ((long)uVar14 < 0x100) {
              uVar7 = uVar5;
            }
            FUN_0070e3c0(uVar4,uVar7,lVar9 + lVar19 * lVar8 * 4 + lVar24 * 4,lVar8,param_4);
            FUN_0070b700(*pfVar15,uVar7,lVar3,uVar4,param_4,param_5,
                         lVar16 + lVar25 * lVar27 * 4 + lVar24 * 4,lVar27);
            lVar24 = uVar7 + lVar24;
          } while (lVar24 < lVar23);
        }
        lVar19 = uVar4 + lVar19;
      } while (lVar19 < lVar21);
      lVar25 = lVar25 + 0x1000;
    } while (lVar25 < lVar22);
  }
  return 0;
}


// ===== 00709768  FUN_00709768 =====

undefined8 FUN_00709768(long *param_1,long *param_2,long *param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  float *pfVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  
  if (param_2 == (long *)0x0) {
    lVar25 = 0;
    plVar11 = param_1 + 6;
    lVar20 = param_1[8];
    lVar21 = param_1[0xb];
  }
  else {
    plVar11 = param_2 + 1;
    lVar25 = *param_2;
    lVar20 = param_1[8];
    lVar21 = param_1[0xb];
  }
  if (param_3 == (long *)0x0) {
    lVar22 = 0;
    plVar12 = param_1 + 7;
  }
  else {
    plVar12 = param_3 + 1;
    lVar22 = *param_3;
  }
  lVar7 = param_1[9];
  lVar9 = param_1[10];
  lVar26 = *plVar11;
  lVar24 = *plVar12;
  pfVar14 = (float *)param_1[4];
  lVar8 = *param_1;
  lVar10 = param_1[1];
  lVar15 = param_1[2];
  if (((float *)param_1[5] != (float *)0x0) && (*(float *)param_1[5] != 1.0)) {
    FUN_0070ef80(lVar26 - lVar25,lVar24 - lVar22,0,0,0,0,0,lVar15 + lVar25 * 4 + lVar22 * lVar21 * 4
                 ,lVar21);
  }
  if ((((lVar20 != 0) && (pfVar14 != (float *)0x0)) && (*pfVar14 != 0.0)) &&
     ((lVar22 < lVar24 && (0 < lVar20)))) {
    uVar17 = lVar26 - lVar25;
    uVar4 = (uVar17 >> 1) + 0xf & 0x7ffffffffffffff0;
    if ((long)uVar17 < 0x81) {
      uVar4 = uVar17;
    }
    uVar1 = 0x80;
    if ((long)uVar17 < 0x100) {
      uVar1 = uVar4;
    }
    do {
      lVar19 = lVar24 - lVar22;
      lVar2 = lVar19;
      if (0xfff < lVar19) {
        lVar2 = 0x1000;
      }
      lVar18 = 0;
      do {
        uVar13 = lVar20 - lVar18;
        uVar4 = (uVar13 >> 1) + 0xf & 0x7ffffffffffffff0;
        if ((long)uVar13 < 0x161) {
          uVar4 = uVar13;
        }
        uVar3 = 0x160;
        if ((long)uVar13 < 0x2c0) {
          uVar3 = uVar4;
        }
        FUN_0070e3c0(uVar3,uVar1,lVar8 + lVar25 * 4 + lVar18 * lVar7 * 4,lVar7,param_4);
        if (0 < lVar19) {
          lVar23 = lVar22;
          uVar4 = uVar3;
          if ((long)uVar17 < 0x81) {
            uVar4 = 0;
          }
          do {
            lVar16 = (lVar2 + lVar22) - lVar23;
            lVar5 = lVar16;
            if (3 < lVar16) {
              lVar5 = 4;
            }
            if (0xb < lVar16) {
              lVar5 = 0xc;
            }
            lVar16 = param_5 + uVar4 * (lVar23 - lVar22) * 4;
            FUN_0070ec8c(uVar3,lVar5,lVar10 + lVar18 * lVar9 * 4 + lVar23 * 4,lVar9,lVar16);
            FUN_0070b700(*pfVar14,uVar1,lVar5,uVar3,param_4,lVar16,
                         lVar15 + lVar25 * 4 + lVar23 * lVar21 * 4,lVar21);
            lVar23 = lVar5 + lVar23;
          } while (lVar23 < lVar2 + lVar22);
        }
        if ((long)(uVar1 + lVar25) < lVar26) {
          lVar23 = uVar1 + lVar25;
          do {
            uVar13 = lVar26 - lVar23;
            uVar4 = uVar13;
            if (0x80 < (long)uVar13) {
              uVar4 = (uVar13 >> 1) + 0xf & 0x7ffffffffffffff0;
            }
            uVar6 = 0x80;
            if ((long)uVar13 < 0x100) {
              uVar6 = uVar4;
            }
            FUN_0070e3c0(uVar3,uVar6,lVar8 + lVar18 * lVar7 * 4 + lVar23 * 4,lVar7,param_4);
            FUN_0070b700(*pfVar14,uVar6,lVar2,uVar3,param_4,param_5,
                         lVar15 + lVar22 * lVar21 * 4 + lVar23 * 4,lVar21);
            lVar23 = uVar6 + lVar23;
          } while (lVar23 < lVar26);
        }
        lVar18 = uVar3 + lVar18;
      } while (lVar18 < lVar20);
      lVar22 = lVar22 + 0x1000;
    } while (lVar22 < lVar24);
  }
  return 0;
}


// ===== 00709b24  FUN_00709b24 =====

undefined8 FUN_00709b24(long *param_1,long *param_2,long *param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  float *pfVar27;
  long lVar28;
  long lVar29;
  
  if (param_2 == (long *)0x0) {
    lVar23 = 0;
    plVar14 = param_1 + 6;
    lVar25 = param_1[8];
    lVar24 = param_1[0xb];
  }
  else {
    plVar14 = param_2 + 1;
    lVar23 = *param_2;
    lVar25 = param_1[8];
    lVar24 = param_1[0xb];
  }
  if (param_3 == (long *)0x0) {
    lVar26 = 0;
    plVar15 = param_1 + 7;
  }
  else {
    plVar15 = param_3 + 1;
    lVar26 = *param_3;
  }
  lVar9 = *param_1;
  lVar11 = param_1[1];
  pfVar27 = (float *)param_1[4];
  lVar10 = param_1[9];
  lVar12 = param_1[10];
  lVar29 = *plVar15;
  lVar17 = param_1[2];
  lVar18 = *plVar14;
  if (((float *)param_1[5] != (float *)0x0) && (*(float *)param_1[5] != 1.0)) {
    FUN_0070ef80(lVar18 - lVar23,lVar29 - lVar26,0,0,0,0,0,lVar17 + lVar23 * 4 + lVar26 * lVar24 * 4
                 ,lVar24);
  }
  if ((((lVar25 != 0) && (pfVar27 != (float *)0x0)) && (*pfVar27 != 0.0)) &&
     ((lVar26 < lVar29 && (0 < lVar25)))) {
    uVar19 = lVar18 - lVar23;
    uVar6 = (uVar19 >> 1) + 0xf & 0x7ffffffffffffff0;
    if ((long)uVar19 < 0x81) {
      uVar6 = uVar19;
    }
    uVar3 = 0x80;
    if ((long)uVar19 < 0x100) {
      uVar3 = uVar6;
    }
    do {
      lVar20 = lVar29 - lVar26;
      lVar22 = 0;
      lVar4 = lVar20;
      if (0xfff < lVar20) {
        lVar4 = 0x1000;
      }
      do {
        uVar16 = lVar25 - lVar22;
        lVar1 = lVar9 + lVar22 * 4;
        uVar6 = (uVar16 >> 1) + 0xf & 0x7ffffffffffffff0;
        if ((long)uVar16 < 0x161) {
          uVar6 = uVar16;
        }
        uVar5 = 0x160;
        if ((long)uVar16 < 0x2c0) {
          uVar5 = uVar6;
        }
        FUN_0070dc24(uVar5,uVar3,lVar1 + lVar23 * lVar10 * 4,lVar10,param_4);
        lVar13 = uVar3 + lVar23;
        if (0 < lVar20) {
          lVar28 = lVar26;
          uVar6 = uVar5;
          if ((long)uVar19 < 0x81) {
            uVar6 = 0;
          }
          do {
            lVar21 = (lVar4 + lVar26) - lVar28;
            lVar7 = lVar21;
            if (3 < lVar21) {
              lVar7 = 4;
            }
            lVar2 = param_5 + uVar6 * (lVar28 - lVar26) * 4;
            if (0xb < lVar21) {
              lVar7 = 0xc;
            }
            FUN_0070ea20(uVar5,lVar7,lVar11 + lVar22 * 4 + lVar28 * lVar12 * 4,lVar12,lVar2);
            FUN_0070b700(*pfVar27,uVar3,lVar7,uVar5,param_4,lVar2,
                         lVar17 + lVar23 * 4 + lVar28 * lVar24 * 4,lVar24);
            lVar28 = lVar7 + lVar28;
          } while (lVar28 < lVar4 + lVar26);
        }
        for (; lVar13 < lVar18; lVar13 = uVar8 + lVar13) {
          uVar16 = lVar18 - lVar13;
          uVar6 = uVar16;
          if (0x80 < (long)uVar16) {
            uVar6 = (uVar16 >> 1) + 0xf & 0x7ffffffffffffff0;
          }
          uVar8 = 0x80;
          if ((long)uVar16 < 0x100) {
            uVar8 = uVar6;
          }
          FUN_0070dc24(uVar5,uVar8,lVar1 + lVar13 * lVar10 * 4,lVar10,param_4);
          FUN_0070b700(*pfVar27,uVar8,lVar4,uVar5,param_4,param_5,
                       lVar17 + lVar26 * lVar24 * 4 + lVar13 * 4,lVar24);
        }
        lVar22 = uVar5 + lVar22;
      } while (lVar22 < lVar25);
      lVar26 = lVar26 + 0x1000;
    } while (lVar26 < lVar29);
  }
  return 0;
}


// ===== 00709ea4  FUN_00709ea4 =====

undefined8 FUN_00709ea4(long *param_1,long *param_2,long *param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  float *pfVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  
  if (param_2 == (long *)0x0) {
    lVar29 = 0;
    plVar14 = param_1 + 6;
    lVar24 = param_1[8];
    lVar26 = param_1[0xb];
  }
  else {
    plVar14 = param_2 + 1;
    lVar29 = *param_2;
    lVar24 = param_1[8];
    lVar26 = param_1[0xb];
  }
  if (param_3 == (long *)0x0) {
    lVar28 = 0;
    plVar15 = param_1 + 7;
  }
  else {
    plVar15 = param_3 + 1;
    lVar28 = *param_3;
  }
  lVar9 = param_1[9];
  lVar11 = param_1[10];
  lVar27 = *plVar15;
  pfVar17 = (float *)param_1[4];
  lVar10 = *param_1;
  lVar12 = param_1[1];
  lVar18 = param_1[2];
  lVar19 = *plVar14;
  if (((float *)param_1[5] != (float *)0x0) && (*(float *)param_1[5] != 1.0)) {
    FUN_0070ef80(lVar19 - lVar29,lVar27 - lVar28,0,0,0,0,0,lVar18 + lVar29 * 4 + lVar28 * lVar26 * 4
                 ,lVar26);
  }
  if ((((lVar24 != 0) && (pfVar17 != (float *)0x0)) && (*pfVar17 != 0.0)) &&
     ((lVar28 < lVar27 && (0 < lVar24)))) {
    uVar20 = lVar19 - lVar29;
    uVar6 = (uVar20 >> 1) + 0xf & 0x7ffffffffffffff0;
    if ((long)uVar20 < 0x81) {
      uVar6 = uVar20;
    }
    uVar3 = 0x80;
    if ((long)uVar20 < 0x100) {
      uVar3 = uVar6;
    }
    do {
      lVar22 = lVar27 - lVar28;
      lVar23 = 0;
      lVar4 = lVar22;
      if (0xfff < lVar22) {
        lVar4 = 0x1000;
      }
      do {
        uVar16 = lVar24 - lVar23;
        lVar1 = lVar10 + lVar23 * 4;
        uVar6 = (uVar16 >> 1) + 0xf & 0x7ffffffffffffff0;
        if ((long)uVar16 < 0x161) {
          uVar6 = uVar16;
        }
        uVar5 = 0x160;
        if ((long)uVar16 < 0x2c0) {
          uVar5 = uVar6;
        }
        FUN_0070dc24(uVar5,uVar3,lVar1 + lVar29 * lVar9 * 4,lVar9,param_4);
        lVar13 = uVar3 + lVar29;
        if (0 < lVar22) {
          lVar25 = lVar28;
          uVar6 = uVar5;
          if ((long)uVar20 < 0x81) {
            uVar6 = 0;
          }
          do {
            lVar21 = (lVar4 + lVar28) - lVar25;
            lVar7 = lVar21;
            if (3 < lVar21) {
              lVar7 = 4;
            }
            lVar2 = param_5 + uVar6 * (lVar25 - lVar28) * 4;
            if (0xb < lVar21) {
              lVar7 = 0xc;
            }
            FUN_0070ec8c(uVar5,lVar7,lVar12 + lVar23 * lVar11 * 4 + lVar25 * 4,lVar11,lVar2);
            FUN_0070b700(*pfVar17,uVar3,lVar7,uVar5,param_4,lVar2,
                         lVar18 + lVar29 * 4 + lVar25 * lVar26 * 4,lVar26);
            lVar25 = lVar7 + lVar25;
          } while (lVar25 < lVar4 + lVar28);
        }
        for (; lVar13 < lVar19; lVar13 = uVar8 + lVar13) {
          uVar16 = lVar19 - lVar13;
          uVar6 = uVar16;
          if (0x80 < (long)uVar16) {
            uVar6 = (uVar16 >> 1) + 0xf & 0x7ffffffffffffff0;
          }
          uVar8 = 0x80;
          if ((long)uVar16 < 0x100) {
            uVar8 = uVar6;
          }
          FUN_0070dc24(uVar5,uVar8,lVar1 + lVar13 * lVar9 * 4,lVar9,param_4);
          FUN_0070b700(*pfVar17,uVar8,lVar4,uVar5,param_4,param_5,
                       lVar18 + lVar28 * lVar26 * 4 + lVar13 * 4,lVar26);
        }
        lVar23 = uVar5 + lVar23;
      } while (lVar23 < lVar24);
      lVar28 = lVar28 + 0x1000;
    } while (lVar28 < lVar27);
  }
  return 0;
}


// ===== 0070a234  FUN_0070a234 =====

undefined8 FUN_0070a234(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined **ppuVar7;
  
  if (DAT_007afae4 == 0) {
    FUN_0070b1a8();
    DAT_007afae4 = 1;
    DataMemoryBarrier(2,2);
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_007afb00);
  lVar4 = 0;
  do {
    DataMemoryBarrier(2,1);
    if (*(int *)((long)&DAT_007aee68 + lVar4) == 0) {
      *(undefined4 *)((long)&DAT_007aee68 + lVar4) = 1;
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_007afb00);
      if (*(long *)((long)&DAT_007aee60 + lVar4) == 0) {
        ppuVar7 = &PTR_FUN_0079b918;
        pcVar6 = FUN_0070a538;
        do {
          lVar5 = (*pcVar6)(0);
          ppuVar7 = ppuVar7 + 1;
          pcVar6 = (code *)*ppuVar7;
          if (lVar5 != -1 || pcVar6 == (code *)0x0) {
            pcVar6 = FUN_0070a538;
            ppuVar7 = &PTR_FUN_0079b918;
          }
        } while (lVar5 == -1);
        pthread_mutex_lock((pthread_mutex_t *)&DAT_007afb00);
        *(long *)((long)&DAT_007aee60 + lVar4) = lVar5;
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_007afb00);
        return *(undefined8 *)((long)&DAT_007aee60 + lVar4);
      }
      return *(undefined8 *)((long)&DAT_007aee60 + lVar4);
    }
    lVar4 = lVar4 + 0x40;
  } while (lVar4 != 0xc80);
  lVar4 = 0x32;
  if (DAT_007afae0 == 1) {
    lVar5 = 0x10;
    do {
      DataMemoryBarrier(2,1);
      pvVar3 = DAT_007afaf0;
      if (*(int *)((long)DAT_007afaf0 + lVar5) == 0) goto LAB_0070a48c;
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x40;
    } while (lVar4 != 0x232);
  }
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_007afb00);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_007afb00);
  puVar2 = PTR_stderr_007a1438;
  if ((DAT_007afae0 & 1) != 0) {
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_007afb00);
    puts("OpenBLAS : Program is Terminated. Because you tried to allocate too many memory regions.")
    ;
    printf("This library was built to support a maximum of %d threads - either rebuild OpenBLAS\n",
           0x32);
    puts("with a larger NUM_THREADS value or set the environment variable OPENBLAS_NUM_THREADS to");
    puts("a sufficiently small number. This error typically occurs when the software that relies on"
        );
    puts(
        "OpenBLAS calls BLAS functions from many threads in parallel, or when your computer has more"
        );
    puts("cpu cores than what OpenBLAS was configured to handle.");
    return 0;
  }
  fwrite("OpenBLAS warning: precompiled NUM_THREADS exceeded, adding auxiliary array for thread metadata.\n"
         ,0x60,1,*(FILE **)PTR_stderr_007a1438);
  fwrite("To avoid this warning, please rebuild your copy of OpenBLAS with a larger NUM_THREADS setting\n"
         ,0x5e,1,*(FILE **)puVar2);
  fprintf(*(FILE **)puVar2,"or set the environment variable OPENBLAS_NUM_THREADS to %d or lower\n",0
         );
  DAT_007afae0 = 1;
  DataMemoryBarrier(2,3);
  DAT_007afaf8 = malloc(0x3000);
  pvVar3 = malloc(0x8000);
  lVar5 = 0;
  DAT_007afaf0 = pvVar3;
  do {
    puVar1 = (undefined8 *)((long)pvVar3 + lVar5);
    lVar5 = lVar5 + 0x40;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = 0;
  } while (lVar5 != 0x8000);
LAB_0070a48c:
  lVar4 = (lVar4 << 0x20) + -0x3200000000;
  *(undefined4 *)((long)pvVar3 + (lVar4 >> 0x1a) + 0x10) = 1;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_007afb00);
  ppuVar7 = &PTR_FUN_0079b918;
  pcVar6 = FUN_0070a538;
  do {
    lVar5 = (*pcVar6)(0);
    ppuVar7 = ppuVar7 + 1;
    pcVar6 = (code *)*ppuVar7;
    if (lVar5 != -1 || pcVar6 == (code *)0x0) {
      pcVar6 = FUN_0070a538;
      ppuVar7 = &PTR_FUN_0079b918;
    }
  } while (lVar5 == -1);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_007afb00);
  lVar4 = (lVar4 >> 0x20) * 0x40;
  *(long *)((long)DAT_007afaf0 + lVar4 + 8) = lVar5;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_007afb00);
  return *(undefined8 *)((long)DAT_007afaf0 + lVar4 + 8);
}


// ===== 0070a538  FUN_0070a538 =====

void * FUN_0070a538(void *param_1)

{
  void *pvVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (param_1 == (void *)0x0) {
    pvVar1 = mmap((void *)0x0,0x2000000,3,0x22,-1,0);
  }
  else {
    pvVar1 = mmap(param_1,0x2000000,3,0x32,-1,0);
  }
  if (pvVar1 == (void *)0xffffffffffffffff) {
    return (void *)0xffffffffffffffff;
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_007afb00);
  if (DAT_007afae8 < 0x32) {
    *(void **)(&DAT_007afb28 + (long)DAT_007afae8 * 0x18) = pvVar1;
    puVar3 = &DAT_007afb30 + (long)DAT_007afae8 * 3;
  }
  else {
    lVar2 = DAT_007afaf8 + (long)DAT_007afae8 * 0x18;
    puVar3 = (undefined8 *)(lVar2 + -0x4a8);
    *(void **)(lVar2 + -0x4b0) = pvVar1;
  }
  DAT_007afae8 = DAT_007afae8 + 1;
  *puVar3 = FUN_0070afe4;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_007afb00);
  return pvVar1;
}


// ===== 0070a61c  FUN_0070a61c =====

void FUN_0070a61c(void)

{
  void *pvVar1;
  long lVar2;
  undefined8 *puVar3;
  
  pvVar1 = malloc(0x2001000);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0xffffffffffffffff;
  }
  if (pvVar1 != (void *)0xffffffffffffffff) {
    if (DAT_007afae8 < 0x32) {
      *(void **)(&DAT_007afb28 + (long)DAT_007afae8 * 0x18) = pvVar1;
      puVar3 = &DAT_007afb30 + (long)DAT_007afae8 * 3;
    }
    else {
      lVar2 = DAT_007afaf8 + (long)DAT_007afae8 * 0x18;
      puVar3 = (undefined8 *)(lVar2 + -0x4a8);
      *(void **)(lVar2 + -0x4b0) = pvVar1;
    }
    DAT_007afae8 = DAT_007afae8 + 1;
    *puVar3 = FUN_0070b044;
  }
  return;
}


// ===== 0070a6a8  FUN_0070a6a8 =====

int FUN_0070a6a8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_007afb00);
  if (DAT_007aee60 == param_1) {
    lVar3 = 0;
  }
  else if (DAT_007aeea0 == param_1) {
    lVar3 = 1;
  }
  else if (DAT_007aeee0 == param_1) {
    lVar3 = 2;
  }
  else if (DAT_007aef20 == param_1) {
    lVar3 = 3;
  }
  else if (DAT_007aef60 == param_1) {
    lVar3 = 4;
  }
  else if (DAT_007aefa0 == param_1) {
    lVar3 = 5;
  }
  else if (DAT_007aefe0 == param_1) {
    lVar3 = 6;
  }
  else if (DAT_007af020 == param_1) {
    lVar3 = 7;
  }
  else if (DAT_007af060 == param_1) {
    lVar3 = 8;
  }
  else if (DAT_007af0a0 == param_1) {
    lVar3 = 9;
  }
  else if (DAT_007af0e0 == param_1) {
    lVar3 = 10;
  }
  else if (DAT_007af120 == param_1) {
    lVar3 = 0xb;
  }
  else if (DAT_007af160 == param_1) {
    lVar3 = 0xc;
  }
  else if (DAT_007af1a0 == param_1) {
    lVar3 = 0xd;
  }
  else if (DAT_007af1e0 == param_1) {
    lVar3 = 0xe;
  }
  else if (DAT_007af220 == param_1) {
    lVar3 = 0xf;
  }
  else if (DAT_007af260 == param_1) {
    lVar3 = 0x10;
  }
  else if (DAT_007af2a0 == param_1) {
    lVar3 = 0x11;
  }
  else if (DAT_007af2e0 == param_1) {
    lVar3 = 0x12;
  }
  else if (DAT_007af320 == param_1) {
    lVar3 = 0x13;
  }
  else if (DAT_007af360 == param_1) {
    lVar3 = 0x14;
  }
  else if (DAT_007af3a0 == param_1) {
    lVar3 = 0x15;
  }
  else if (DAT_007af3e0 == param_1) {
    lVar3 = 0x16;
  }
  else if (DAT_007af420 == param_1) {
    lVar3 = 0x17;
  }
  else if (DAT_007af460 == param_1) {
    lVar3 = 0x18;
  }
  else if (DAT_007af4a0 == param_1) {
    lVar3 = 0x19;
  }
  else if (DAT_007af4e0 == param_1) {
    lVar3 = 0x1a;
  }
  else if (DAT_007af520 == param_1) {
    lVar3 = 0x1b;
  }
  else if (DAT_007af560 == param_1) {
    lVar3 = 0x1c;
  }
  else if (DAT_007af5a0 == param_1) {
    lVar3 = 0x1d;
  }
  else if (DAT_007af5e0 == param_1) {
    lVar3 = 0x1e;
  }
  else if (DAT_007af620 == param_1) {
    lVar3 = 0x1f;
  }
  else if (DAT_007af660 == param_1) {
    lVar3 = 0x20;
  }
  else if (DAT_007af6a0 == param_1) {
    lVar3 = 0x21;
  }
  else if (DAT_007af6e0 == param_1) {
    lVar3 = 0x22;
  }
  else if (DAT_007af720 == param_1) {
    lVar3 = 0x23;
  }
  else if (DAT_007af760 == param_1) {
    lVar3 = 0x24;
  }
  else if (DAT_007af7a0 == param_1) {
    lVar3 = 0x25;
  }
  else if (DAT_007af7e0 == param_1) {
    lVar3 = 0x26;
  }
  else if (DAT_007af820 == param_1) {
    lVar3 = 0x27;
  }
  else if (DAT_007af860 == param_1) {
    lVar3 = 0x28;
  }
  else if (DAT_007af8a0 == param_1) {
    lVar3 = 0x29;
  }
  else if (DAT_007af8e0 == param_1) {
    lVar3 = 0x2a;
  }
  else if (DAT_007af920 == param_1) {
    lVar3 = 0x2b;
  }
  else if (DAT_007af960 == param_1) {
    lVar3 = 0x2c;
  }
  else if (DAT_007af9a0 == param_1) {
    lVar3 = 0x2d;
  }
  else if (DAT_007af9e0 == param_1) {
    lVar3 = 0x2e;
  }
  else if (DAT_007afa20 == param_1) {
    lVar3 = 0x2f;
  }
  else if (DAT_007afa60 == param_1) {
    lVar3 = 0x30;
  }
  else {
    if (DAT_007afaa0 != param_1) {
      if (DAT_007afae0 == '\x01') {
        lVar3 = 0;
        do {
          if (*(long *)(DAT_007afaf0 + 8 + lVar3) == param_1) {
            DataMemoryBarrier(2,2);
            *(undefined4 *)(DAT_007afaf0 + lVar3 + 0x10) = 0;
            iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_007afb00);
            return iVar1;
          }
          lVar3 = lVar3 + 0x40;
        } while (lVar3 != 0x8000);
        DataMemoryBarrier(2,2);
        uVar2 = 0x232;
      }
      else {
        uVar2 = 0x32;
      }
      printf("BLAS : Bad memory unallocation! : %4d  %p\n",uVar2,param_1);
      iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_007afb00);
      return iVar1;
    }
    lVar3 = 0x31;
  }
  DataMemoryBarrier(2,2);
  (&DAT_007aee68)[lVar3 * 0x10] = 0;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_007afb00);
  return iVar1;
}


// ===== 0070ac28  FUN_0070ac28 =====

int FUN_0070ac28(void)

{
  undefined8 *puVar1;
  void *__ptr;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_007afb00);
  if (0 < DAT_007afae8) {
    uVar3 = 0;
    lVar4 = 0x50;
    do {
      while (0x31 < uVar3) {
        (**(code **)(DAT_007afaf8 + lVar4 + -0x4f8))(DAT_007afaf8 + lVar4 + -0x500);
        uVar3 = uVar3 + 1;
        lVar4 = lVar4 + 0x18;
        if ((long)DAT_007afae8 <= (long)uVar3) goto code_r0x0070accc;
      }
      (**(code **)(&DAT_007afae0 + lVar4))(&DAT_007afad8 + lVar4);
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x18;
    } while ((long)uVar3 < (long)DAT_007afae8);
  }
code_r0x0070accc:
  __ptr = DAT_007afaf0;
  DAT_007aee60 = 0;
  DAT_007aee68 = 0;
  DAT_007aee58 = 0;
  DAT_007aeea0 = 0;
  DAT_007aeea8 = 0;
  DAT_007aee98 = 0;
  DAT_007aeee0 = 0;
  DAT_007aeee8 = 0;
  DAT_007aeed8 = 0;
  DAT_007aef20 = 0;
  DAT_007aef28 = 0;
  DAT_007aef18 = 0;
  DAT_007aef60 = 0;
  DAT_007aef68 = 0;
  DAT_007aef58 = 0;
  DAT_007aefa0 = 0;
  DAT_007aefa8 = 0;
  DAT_007aef98 = 0;
  DAT_007aefe0 = 0;
  DAT_007aefe8 = 0;
  DAT_007aefd8 = 0;
  DAT_007af020 = 0;
  DAT_007af028 = 0;
  DAT_007af018 = 0;
  DAT_007af060 = 0;
  DAT_007af068 = 0;
  DAT_007af058 = 0;
  DAT_007af0a0 = 0;
  DAT_007af0a8 = 0;
  DAT_007af098 = 0;
  DAT_007af0e0 = 0;
  DAT_007af0e8 = 0;
  DAT_007af0d8 = 0;
  DAT_007af120 = 0;
  DAT_007af128 = 0;
  DAT_007af118 = 0;
  DAT_007af160 = 0;
  DAT_007af168 = 0;
  DAT_007af158 = 0;
  DAT_007af1a0 = 0;
  DAT_007af1a8 = 0;
  DAT_007af198 = 0;
  DAT_007af1e0 = 0;
  DAT_007af1e8 = 0;
  DAT_007af1d8 = 0;
  DAT_007af220 = 0;
  DAT_007af228 = 0;
  DAT_007af218 = 0;
  DAT_007af260 = 0;
  DAT_007af268 = 0;
  DAT_007af258 = 0;
  DAT_007af2a0 = 0;
  DAT_007af2a8 = 0;
  DAT_007af298 = 0;
  DAT_007af2e0 = 0;
  DAT_007af2e8 = 0;
  DAT_007af2d8 = 0;
  DAT_007af320 = 0;
  DAT_007af328 = 0;
  DAT_007af318 = 0;
  DAT_007af360 = 0;
  DAT_007af368 = 0;
  DAT_007af358 = 0;
  DAT_007af3a0 = 0;
  DAT_007af3a8 = 0;
  DAT_007af398 = 0;
  DAT_007af3e0 = 0;
  DAT_007af3e8 = 0;
  DAT_007af3d8 = 0;
  DAT_007af420 = 0;
  DAT_007af428 = 0;
  DAT_007af418 = 0;
  DAT_007af460 = 0;
  DAT_007af468 = 0;
  DAT_007af458 = 0;
  DAT_007af4a0 = 0;
  DAT_007af4a8 = 0;
  DAT_007af498 = 0;
  DAT_007af4e0 = 0;
  DAT_007af4e8 = 0;
  DAT_007af4d8 = 0;
  DAT_007af520 = 0;
  DAT_007af528 = 0;
  DAT_007af518 = 0;
  DAT_007af560 = 0;
  DAT_007af568 = 0;
  DAT_007af558 = 0;
  DAT_007af5a0 = 0;
  DAT_007af5a8 = 0;
  DAT_007af598 = 0;
  DAT_007af5e0 = 0;
  DAT_007af5e8 = 0;
  DAT_007af5d8 = 0;
  DAT_007af620 = 0;
  DAT_007af628 = 0;
  DAT_007af618 = 0;
  DAT_007af660 = 0;
  DAT_007af668 = 0;
  DAT_007af658 = 0;
  DAT_007af6a0 = 0;
  DAT_007af6a8 = 0;
  DAT_007af698 = 0;
  DAT_007af6e0 = 0;
  DAT_007af6e8 = 0;
  DAT_007af6d8 = 0;
  DAT_007af720 = 0;
  DAT_007af728 = 0;
  DAT_007af718 = 0;
  DAT_007af760 = 0;
  DAT_007af768 = 0;
  DAT_007af758 = 0;
  DAT_007af7a0 = 0;
  DAT_007af7a8 = 0;
  DAT_007af798 = 0;
  DAT_007af7e0 = 0;
  DAT_007af7e8 = 0;
  DAT_007af7d8 = 0;
  DAT_007af820 = 0;
  DAT_007af828 = 0;
  DAT_007af818 = 0;
  DAT_007af860 = 0;
  DAT_007af868 = 0;
  DAT_007af858 = 0;
  DAT_007af8a0 = 0;
  DAT_007af8a8 = 0;
  DAT_007af898 = 0;
  DAT_007af8e0 = 0;
  DAT_007af8e8 = 0;
  DAT_007af8d8 = 0;
  DAT_007af920 = 0;
  DAT_007af928 = 0;
  DAT_007af918 = 0;
  DAT_007af960 = 0;
  DAT_007af968 = 0;
  DAT_007af958 = 0;
  DAT_007af9a0 = 0;
  DAT_007af9a8 = 0;
  DAT_007af998 = 0;
  DAT_007af9e0 = 0;
  DAT_007af9e8 = 0;
  DAT_007af9d8 = 0;
  DAT_007afa20 = 0;
  DAT_007afa28 = 0;
  DAT_007afa18 = 0;
  DAT_007afa60 = 0;
  DAT_007afa68 = 0;
  DAT_007afa58 = 0;
  DAT_007afaa0 = 0;
  DAT_007afaa8 = 0;
  DAT_007afa98 = 0;
  if ((DAT_007afae0 & 1) != 0) {
    lVar4 = 0;
    do {
      puVar1 = (undefined8 *)((long)__ptr + lVar4);
      lVar4 = lVar4 + 0x40;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *puVar1 = 0;
    } while (lVar4 != 0x8000);
    free(__ptr);
    DAT_007afaf0 = (void *)0x0;
    DAT_007afae0 = 0;
  }
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_007afb00);
  return iVar2;
}


// ===== 0070af84  _INIT_28 =====

void _INIT_28(void)

{
  if ((DAT_007afad8 & 1) == 0) {
    FUN_0070b078();
    DAT_007afad8 = 1;
  }
  return;
}


// ===== 0070afb4  _FINI_2 =====

void _FINI_2(void)

{
  if (DAT_007afad8 == '\x01') {
    FUN_0070ac28();
    DAT_007afad8 = '\0';
  }
  return;
}


// ===== 0070afe4  FUN_0070afe4 =====

void * FUN_0070afe4(undefined8 *param_1)

{
  uint uVar1;
  void *__addr;
  uint *puVar2;
  
  __addr = (void *)*param_1;
  if (__addr != (void *)0x0) {
    uVar1 = munmap(__addr,0x2000000);
    __addr = (void *)(ulong)uVar1;
    if (uVar1 != 0) {
      puVar2 = (uint *)__errno();
      uVar1 = *puVar2;
      perror("OpenBLAS : munmap failed:");
      uVar1 = printf("error code=%d,\trelease->address=%p\n",(ulong)uVar1,*param_1);
      return (void *)(ulong)uVar1;
    }
  }
  return __addr;
}


// ===== 0070b044  FUN_0070b044 =====

void FUN_0070b044(undefined8 *param_1)

{
  free((void *)*param_1);
  return;
}


// ===== 0070b04c  FUN_0070b04c =====

undefined8 FUN_0070b04c(undefined8 param_1,uint *param_2)

{
  printf(" ** On entry to %6s parameter number %2d had an illegal value\n",param_1,(ulong)*param_2);
  return 0;
}


// ===== 0070b074  FUN_0070b074 =====

void FUN_0070b074(void)

{
  return;
}


// ===== 0070b078  FUN_0070b078 =====

void FUN_0070b078(void)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = getenv("OPENBLAS_VERBOSE");
  if (pcVar3 != (char *)0x0) {
    uVar1 = atoi(pcVar3);
    pcVar3 = (char *)(ulong)uVar1;
  }
  DAT_007affd8 = (uint)pcVar3 & ((int)(uint)pcVar3 >> 0x1f ^ 0xffffffffU);
  pcVar3 = getenv("OPENBLAS_BLOCK_FACTOR");
  if (pcVar3 != (char *)0x0) {
    uVar1 = atoi(pcVar3);
    pcVar3 = (char *)(ulong)uVar1;
  }
  DAT_007affe0 = (uint)pcVar3 & ((int)(uint)pcVar3 >> 0x1f ^ 0xffffffffU);
  pcVar3 = getenv("OPENBLAS_THREAD_TIMEOUT");
  if (pcVar3 != (char *)0x0) {
    uVar1 = atoi(pcVar3);
    pcVar3 = (char *)(ulong)uVar1;
  }
  DAT_007affdc = (uint)pcVar3 & ((int)(uint)pcVar3 >> 0x1f ^ 0xffffffffU);
  pcVar3 = getenv("OPENBLAS_DEFAULT_NUM_THREADS");
  if (pcVar3 == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = atoi(pcVar3);
  }
  DAT_007affe4 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  pcVar3 = getenv("OPENBLAS_NUM_THREADS");
  if (pcVar3 != (char *)0x0) {
    uVar2 = atoi(pcVar3);
    pcVar3 = (char *)(ulong)uVar2;
  }
  uVar2 = (uint)pcVar3;
  if ((0 < (int)uVar2) || ((int)uVar1 < 1)) {
    DAT_007affe4 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  }
  pcVar3 = getenv("GOTO_NUM_THREADS");
  if (pcVar3 != (char *)0x0) {
    uVar1 = atoi(pcVar3);
    pcVar3 = (char *)(ulong)uVar1;
  }
  DAT_007affe8 = (uint)pcVar3 & ((int)(uint)pcVar3 >> 0x1f ^ 0xffffffffU);
  pcVar3 = getenv("OMP_NUM_THREADS");
  if (pcVar3 != (char *)0x0) {
    uVar1 = atoi(pcVar3);
    pcVar3 = (char *)(ulong)uVar1;
  }
  DAT_007affec = (uint)pcVar3 & ((int)(uint)pcVar3 >> 0x1f ^ 0xffffffffU);
  pcVar3 = getenv("OMP_ADAPTIVE");
  if (pcVar3 != (char *)0x0) {
    uVar1 = atoi(pcVar3);
    pcVar3 = (char *)(ulong)uVar1;
  }
  DAT_007afff0 = (uint)pcVar3 & ((int)(uint)pcVar3 >> 0x1f ^ 0xffffffffU);
  return;
}


// ===== 0070b1a8  FUN_0070b1a8 =====

void FUN_0070b1a8(void)

{
  return;
}


// ===== 0070b1ac  FUN_0070b1ac =====

undefined8
FUN_0070b1ac(float param_1,ulong param_2,undefined8 param_3,undefined8 param_4,float *param_5,
            long param_6)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  float *pfVar6;
  long in_stack_00000000;
  
  if (0 < (long)param_2) {
    if ((in_stack_00000000 != 1) && (param_1 == 0.0)) {
      do {
        *param_5 = param_1;
        param_5 = param_5 + param_6;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
      return 0;
    }
    if (param_6 == 1) {
      for (lVar5 = (long)param_2 >> 3; lVar5 != 0; lVar5 = lVar5 + -1) {
        uVar3 = *(undefined8 *)(param_5 + 2);
        uVar4 = *(undefined8 *)(param_5 + 6);
        *param_5 = *param_5 * param_1;
        param_5[1] = param_5[1] * param_1;
        param_5[2] = (float)uVar3 * param_1;
        param_5[3] = (float)((ulong)uVar3 >> 0x20) * param_1;
        param_5[4] = param_5[4] * param_1;
        param_5[5] = param_5[5] * param_1;
        param_5[6] = (float)uVar4 * param_1;
        param_5[7] = (float)((ulong)uVar4 >> 0x20) * param_1;
        Hint_Prefetch(param_5 + 0x108,0,0,0);
        param_5 = param_5 + 8;
      }
      param_2 = param_2 & 7;
      if (param_2 != 0) {
        do {
          *param_5 = *param_5 * param_1;
          param_2 = param_2 - 1;
          param_5 = param_5 + 1;
        } while (param_2 != 0);
        return 0;
      }
    }
    else {
      lVar5 = (long)param_2 >> 2;
      pfVar6 = param_5;
      if (0 < lVar5) {
        do {
          pfVar1 = param_5 + param_6;
          *pfVar6 = *param_5 * param_1;
          pfVar6 = pfVar6 + param_6;
          pfVar2 = pfVar1 + param_6;
          *pfVar6 = *pfVar1 * param_1;
          pfVar6 = pfVar6 + param_6;
          *pfVar6 = *pfVar2 * param_1;
          param_5 = pfVar2 + param_6 + param_6;
          pfVar6[param_6] = pfVar2[param_6] * param_1;
          pfVar6 = pfVar6 + param_6 + param_6;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
        *param_5 = *param_5 * param_1;
        param_5 = param_5 + param_6;
      }
    }
  }
  return 0;
}


// ===== 0070b700  FUN_0070b700 =====

undefined8
FUN_0070b700(float param_1,ulong param_2,ulong param_3,ulong param_4,float *param_5,float *param_6,
            float *param_7,long param_8)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  float *pfVar31;
  float *pfVar32;
  float *pfVar33;
  float *pfVar34;
  float *pfVar35;
  float *pfVar36;
  float *pfVar37;
  float *pfVar38;
  float *pfVar39;
  float *pfVar40;
  float *pfVar41;
  float *pfVar42;
  float *pfVar43;
  float *pfVar44;
  float *pfVar45;
  float *pfVar46;
  float *pfVar47;
  float *pfVar48;
  float *pfVar49;
  float *pfVar50;
  float *pfVar51;
  float *pfVar52;
  float *pfVar53;
  float *pfVar54;
  float *pfVar55;
  float *pfVar56;
  float *pfVar57;
  float *pfVar58;
  float *pfVar59;
  float *pfVar60;
  float *pfVar61;
  long lVar62;
  long lVar63;
  ulong uVar64;
  ulong uVar65;
  long lVar66;
  long lVar67;
  float *pfVar68;
  float *pfVar69;
  float *pfVar70;
  float *pfVar71;
  float *pfVar72;
  float *pfVar73;
  float *pfVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  undefined8 uVar115;
  float fVar116;
  float fVar117;
  undefined8 uVar118;
  float fVar119;
  float fVar120;
  undefined8 uVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  undefined8 uVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  undefined8 uVar151;
  float fVar152;
  float fVar153;
  float fVar154;
  float fVar155;
  float fVar156;
  float fVar157;
  float fVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar162;
  float fVar163;
  float fVar164;
  float fVar165;
  float fVar166;
  float fVar167;
  undefined8 uVar168;
  float fVar169;
  float fVar170;
  float fVar171;
  float fVar172;
  float fVar173;
  float fVar174;
  float fVar175;
  float fVar176;
  undefined8 uVar177;
  undefined8 uVar178;
  float fVar179;
  float fVar180;
  float fVar181;
  float fVar182;
  float fVar183;
  float fVar184;
  float fVar185;
  float fVar186;
  float fVar187;
  float fVar188;
  float fVar189;
  float fVar190;
  float fVar191;
  float fVar192;
  float fVar193;
  float fVar194;
  float fVar195;
  float fVar196;
  float fVar197;
  float fVar198;
  float fVar199;
  float fVar200;
  float fVar201;
  float fVar202;
  float fVar203;
  float fVar204;
  float fVar205;
  float fVar206;
  float fVar207;
  float fVar208;
  float fVar209;
  float fVar210;
  float fVar211;
  float fVar212;
  float fVar213;
  float fVar214;
  float fVar215;
  float fVar216;
  float fVar217;
  float fVar218;
  float fVar219;
  float fVar220;
  float fVar221;
  float fVar222;
  float fVar223;
  float fVar224;
  float fVar225;
  float fVar226;
  float fVar227;
  float fVar228;
  float fVar229;
  float fVar230;
  float fVar231;
  float fVar232;
  float fVar233;
  float fVar234;
  float fVar235;
  float fVar236;
  float fVar237;
  float fVar238;
  float fVar239;
  float fVar240;
  float fVar241;
  float fVar242;
  float fVar243;
  float fVar244;
  float fVar245;
  float fVar246;
  float fVar247;
  float fVar248;
  float fVar249;
  float fVar250;
  float fVar251;
  float fVar252;
  float fVar253;
  float fVar254;
  float fVar255;
  float fVar256;
  float fVar257;
  float fVar258;
  float fVar259;
  float fVar260;
  float fVar261;
  float fVar262;
  float fVar263;
  float fVar264;
  float fVar265;
  float fVar266;
  float fVar267;
  float fVar268;
  float fVar269;
  float fVar270;
  float fVar271;
  float fVar272;
  float fVar273;
  float fVar274;
  float fVar275;
  float fVar276;
  float fVar277;
  float fVar278;
  float fVar279;
  float fVar280;
  undefined4 uVar281;
  float fVar282;
  float fVar283;
  float fVar284;
  float fVar285;
  float fVar286;
  float fVar287;
  float fVar288;
  float fVar289;
  float fVar290;
  float fVar291;
  float fVar292;
  float fVar293;
  float fVar294;
  float fVar295;
  float fVar296;
  float fVar297;
  float fVar298;
  float fVar299;
  float fVar300;
  float fVar301;
  float fVar302;
  float fVar303;
  float fVar304;
  float fVar305;
  float fVar306;
  float fVar307;
  float fVar308;
  float fVar309;
  float fVar310;
  float fVar311;
  float fVar312;
  float fVar313;
  float fVar314;
  float fVar315;
  float fVar316;
  float fVar317;
  float fVar318;
  float fVar319;
  float fVar320;
  float fVar321;
  float fVar322;
  float fVar323;
  float fVar324;
  float fVar325;
  float fVar326;
  float fVar327;
  float fVar328;
  float fVar329;
  float fVar330;
  float fVar331;
  float fVar332;
  float fVar333;
  float fVar334;
  float fVar335;
  float fVar336;
  float fVar337;
  float fVar338;
  float fVar339;
  float fVar340;
  float fVar341;
  
  Hint_Prefetch(param_6,0,0,0);
  Hint_Prefetch(param_5,0,0,0);
  uVar65 = (long)param_4 >> 3;
  lVar67 = (long)param_2 >> 4;
  pfVar61 = param_7;
  lVar66 = (long)param_3 >> 2;
  if (0 < (long)param_3 >> 2) {
    do {
      pfVar72 = pfVar61 + param_8;
      pfVar71 = pfVar72 + param_8;
      pfVar73 = pfVar71 + param_8;
      param_7 = pfVar73 + param_8;
      lVar63 = lVar67;
      pfVar68 = param_5;
      if (0 < lVar67) {
        do {
          if ((long)uVar65 < 2) {
            if ((uVar65 & 1) == 0) {
              fVar77 = 0.0;
              fVar90 = 0.0;
              fVar91 = 0.0;
              fVar92 = 0.0;
              fVar93 = 0.0;
              fVar328 = 0.0;
              fVar100 = 0.0;
              fVar101 = 0.0;
              fVar102 = 0.0;
              fVar103 = 0.0;
              fVar323 = 0.0;
              fVar324 = 0.0;
              fVar110 = 0.0;
              fVar111 = 0.0;
              fVar325 = 0.0;
              fVar326 = 0.0;
              fVar114 = 0.0;
              fVar296 = 0.0;
              fVar75 = 0.0;
              fVar76 = 0.0;
              fVar94 = 0.0;
              fVar95 = 0.0;
              fVar78 = 0.0;
              fVar104 = 0.0;
              fVar105 = 0.0;
              fVar329 = 0.0;
              fVar112 = 0.0;
              fVar113 = 0.0;
              fVar332 = 0.0;
              fVar309 = 0.0;
              fVar310 = 0.0;
              fVar79 = 0.0;
              fVar80 = 0.0;
              fVar96 = 0.0;
              fVar97 = 0.0;
              fVar81 = 0.0;
              fVar82 = 0.0;
              fVar106 = 0.0;
              fVar107 = 0.0;
              fVar83 = 0.0;
              fVar84 = 0.0;
              fVar315 = 0.0;
              fVar317 = 0.0;
              fVar335 = 0.0;
              fVar321 = 0.0;
              fVar322 = 0.0;
              fVar85 = 0.0;
              fVar86 = 0.0;
              fVar98 = 0.0;
              fVar99 = 0.0;
              fVar87 = 0.0;
              fVar108 = 0.0;
              fVar109 = 0.0;
              fVar88 = 0.0;
              fVar334 = 0.0;
              fVar336 = 0.0;
              fVar89 = 0.0;
              fVar340 = 0.0;
              fVar341 = 0.0;
              pfVar70 = param_6;
              fVar330 = fVar323;
              fVar333 = fVar323;
              fVar338 = fVar77;
              fVar331 = fVar328;
              fVar337 = fVar323;
            }
            else {
              fVar188 = *param_6;
              fVar197 = param_6[1];
              fVar323 = (float)*(undefined8 *)pfVar68;
              fVar77 = (float)((ulong)*(undefined8 *)pfVar68 >> 0x20);
              fVar330 = (float)*(undefined8 *)(pfVar68 + 2);
              fVar83 = (float)((ulong)*(undefined8 *)(pfVar68 + 2) >> 0x20);
              fVar208 = param_6[2];
              fVar219 = param_6[3];
              fVar338 = (float)*(undefined8 *)(pfVar68 + 4);
              fVar87 = (float)((ulong)*(undefined8 *)(pfVar68 + 4) >> 0x20);
              fVar109 = (float)*(undefined8 *)(pfVar68 + 6);
              fVar113 = (float)((ulong)*(undefined8 *)(pfVar68 + 6) >> 0x20);
              fVar230 = param_6[4];
              fVar242 = param_6[5];
              fVar339 = (float)*(undefined8 *)(pfVar68 + 8);
              fVar310 = (float)((ulong)*(undefined8 *)(pfVar68 + 8) >> 0x20);
              fVar322 = (float)*(undefined8 *)(pfVar68 + 10);
              fVar266 = (float)((ulong)*(undefined8 *)(pfVar68 + 10) >> 0x20);
              fVar254 = param_6[6];
              fVar267 = param_6[7];
              fVar218 = (float)*(undefined8 *)(pfVar68 + 0xc);
              fVar124 = (float)((ulong)*(undefined8 *)(pfVar68 + 0xc) >> 0x20);
              fVar128 = (float)*(undefined8 *)(pfVar68 + 0xe);
              fVar132 = (float)((ulong)*(undefined8 *)(pfVar68 + 0xe) >> 0x20);
              Hint_Prefetch(pfVar68 + 0x2a0,0,0,0);
              Hint_Prefetch(pfVar68 + 0x2b0,0,0,0);
              fVar85 = (float)*(undefined8 *)(pfVar68 + 0x10);
              fVar100 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x10) >> 0x20);
              fVar104 = (float)*(undefined8 *)(pfVar68 + 0x12);
              fVar315 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x12) >> 0x20);
              fVar139 = (float)*(undefined8 *)(pfVar68 + 0x14);
              fVar142 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x14) >> 0x20);
              fVar145 = (float)*(undefined8 *)(pfVar68 + 0x16);
              fVar148 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x16) >> 0x20);
              fVar152 = (float)*(undefined8 *)(pfVar68 + 0x18);
              fVar155 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x18) >> 0x20);
              fVar158 = (float)*(undefined8 *)(pfVar68 + 0x1a);
              fVar161 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x1a) >> 0x20);
              fVar164 = (float)*(undefined8 *)(pfVar68 + 0x1c);
              fVar167 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x1c) >> 0x20);
              fVar171 = (float)*(undefined8 *)(pfVar68 + 0x1e);
              fVar174 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x1e) >> 0x20);
              fVar189 = param_6[8];
              fVar198 = param_6[9];
              fVar209 = param_6[10];
              fVar220 = param_6[0xb];
              Hint_Prefetch(param_6 + 0x44,0,0,0);
              fVar324 = (float)*(undefined8 *)(pfVar68 + 0x20);
              fVar78 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x20) >> 0x20);
              fVar332 = (float)*(undefined8 *)(pfVar68 + 0x22);
              fVar84 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x22) >> 0x20);
              fVar331 = (float)*(undefined8 *)(pfVar68 + 0x24);
              fVar88 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x24) >> 0x20);
              fVar110 = (float)*(undefined8 *)(pfVar68 + 0x26);
              fVar114 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x26) >> 0x20);
              fVar116 = (float)*(undefined8 *)(pfVar68 + 0x28);
              fVar334 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x28) >> 0x20);
              fVar340 = (float)*(undefined8 *)(pfVar68 + 0x2a);
              fVar279 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x2a) >> 0x20);
              fVar229 = (float)*(undefined8 *)(pfVar68 + 0x2c);
              fVar125 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x2c) >> 0x20);
              fVar129 = (float)*(undefined8 *)(pfVar68 + 0x2e);
              fVar133 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x2e) >> 0x20);
              fVar231 = param_6[0xc];
              fVar243 = param_6[0xd];
              fVar255 = param_6[0xe];
              fVar268 = param_6[0xf];
              Hint_Prefetch(pfVar68 + 0x2c8,0,0,0);
              Hint_Prefetch(pfVar68 + 0x2b8,0,0,0);
              fVar86 = (float)*(undefined8 *)(pfVar68 + 0x30);
              fVar101 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x30) >> 0x20);
              fVar105 = (float)*(undefined8 *)(pfVar68 + 0x32);
              fVar317 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x32) >> 0x20);
              fVar140 = (float)*(undefined8 *)(pfVar68 + 0x34);
              fVar143 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x34) >> 0x20);
              fVar146 = (float)*(undefined8 *)(pfVar68 + 0x36);
              fVar149 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x36) >> 0x20);
              fVar153 = (float)*(undefined8 *)(pfVar68 + 0x38);
              fVar156 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x38) >> 0x20);
              fVar159 = (float)*(undefined8 *)(pfVar68 + 0x3a);
              fVar162 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x3a) >> 0x20);
              fVar165 = (float)*(undefined8 *)(pfVar68 + 0x3c);
              fVar169 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x3c) >> 0x20);
              fVar172 = (float)*(undefined8 *)(pfVar68 + 0x3e);
              fVar175 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x3e) >> 0x20);
              fVar190 = param_6[0x10];
              fVar199 = param_6[0x11];
              fVar210 = param_6[0x12];
              fVar221 = param_6[0x13];
              Hint_Prefetch(param_6 + 0x4c,0,0,0);
              fVar325 = (float)*(undefined8 *)(pfVar68 + 0x40);
              fVar328 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x40) >> 0x20);
              fVar81 = (float)*(undefined8 *)(pfVar68 + 0x42);
              fVar333 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x42) >> 0x20);
              fVar337 = (float)*(undefined8 *)(pfVar68 + 0x44);
              fVar89 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x44) >> 0x20);
              fVar111 = (float)*(undefined8 *)(pfVar68 + 0x46);
              fVar296 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x46) >> 0x20);
              fVar117 = (float)*(undefined8 *)(pfVar68 + 0x48);
              fVar336 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x48) >> 0x20);
              fVar341 = (float)*(undefined8 *)(pfVar68 + 0x4a);
              fVar196 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x4a) >> 0x20);
              fVar122 = (float)*(undefined8 *)(pfVar68 + 0x4c);
              fVar126 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x4c) >> 0x20);
              fVar130 = (float)*(undefined8 *)(pfVar68 + 0x4e);
              fVar135 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x4e) >> 0x20);
              fVar232 = param_6[0x14];
              fVar244 = param_6[0x15];
              fVar256 = param_6[0x16];
              fVar269 = param_6[0x17];
              Hint_Prefetch(pfVar68 + 0x2e8,0,0,0);
              Hint_Prefetch(pfVar68 + 0x2d8,0,0,0);
              fVar98 = (float)*(undefined8 *)(pfVar68 + 0x50);
              fVar102 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x50) >> 0x20);
              fVar106 = (float)*(undefined8 *)(pfVar68 + 0x52);
              fVar137 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x52) >> 0x20);
              fVar141 = (float)*(undefined8 *)(pfVar68 + 0x54);
              fVar144 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x54) >> 0x20);
              fVar147 = (float)*(undefined8 *)(pfVar68 + 0x56);
              fVar150 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x56) >> 0x20);
              fVar154 = (float)*(undefined8 *)(pfVar68 + 0x58);
              fVar157 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x58) >> 0x20);
              fVar160 = (float)*(undefined8 *)(pfVar68 + 0x5a);
              fVar163 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x5a) >> 0x20);
              fVar166 = (float)*(undefined8 *)(pfVar68 + 0x5c);
              fVar170 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x5c) >> 0x20);
              fVar173 = (float)*(undefined8 *)(pfVar68 + 0x5e);
              fVar176 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x5e) >> 0x20);
              fVar191 = param_6[0x18];
              fVar200 = param_6[0x19];
              fVar211 = param_6[0x1a];
              fVar222 = param_6[0x1b];
              Hint_Prefetch(param_6 + 0x54,0,0,0);
              fVar326 = (float)*(undefined8 *)(pfVar68 + 0x60);
              fVar329 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x60) >> 0x20);
              fVar82 = (float)*(undefined8 *)(pfVar68 + 0x62);
              fVar335 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x62) >> 0x20);
              fVar327 = (float)*(undefined8 *)(pfVar68 + 100);
              fVar108 = (float)((ulong)*(undefined8 *)(pfVar68 + 100) >> 0x20);
              fVar112 = (float)*(undefined8 *)(pfVar68 + 0x66);
              fVar309 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x66) >> 0x20);
              fVar119 = (float)*(undefined8 *)(pfVar68 + 0x68);
              fVar321 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x68) >> 0x20);
              fVar120 = (float)*(undefined8 *)(pfVar68 + 0x6a);
              fVar207 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x6a) >> 0x20);
              fVar123 = (float)*(undefined8 *)(pfVar68 + 0x6c);
              fVar127 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x6c) >> 0x20);
              fVar131 = (float)*(undefined8 *)(pfVar68 + 0x6e);
              fVar136 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x6e) >> 0x20);
              fVar233 = param_6[0x1c];
              fVar245 = param_6[0x1d];
              fVar257 = param_6[0x1e];
              fVar270 = param_6[0x1f];
              Hint_Prefetch(pfVar68 + 0x308,0,0,0);
              Hint_Prefetch(pfVar68 + 0x2f8,0,0,0);
              fVar99 = (float)*(undefined8 *)(pfVar68 + 0x70);
              fVar103 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x70) >> 0x20);
              fVar107 = (float)*(undefined8 *)(pfVar68 + 0x72);
              fVar138 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x72) >> 0x20);
              fVar90 = fVar323 * fVar188 + fVar85 * fVar230 + fVar324 * fVar189 + fVar86 * fVar231 +
                       fVar325 * fVar190 + fVar98 * fVar232 + fVar326 * fVar191 + fVar99 * fVar233;
              fVar91 = fVar77 * fVar188 + fVar100 * fVar230 + fVar78 * fVar189 + fVar101 * fVar231 +
                       fVar328 * fVar190 + fVar102 * fVar232 + fVar329 * fVar191 + fVar103 * fVar233
              ;
              fVar92 = fVar330 * fVar188 + fVar104 * fVar230 + fVar332 * fVar189 + fVar105 * fVar231
                       + fVar81 * fVar190 + fVar106 * fVar232 + fVar82 * fVar191 + fVar107 * fVar233
              ;
              fVar93 = fVar83 * fVar188 + fVar315 * fVar230 + fVar84 * fVar189 + fVar317 * fVar231 +
                       fVar333 * fVar190 + fVar137 * fVar232 + fVar335 * fVar191 + fVar138 * fVar233
              ;
              fVar75 = fVar323 * fVar197 + fVar85 * fVar242 + fVar324 * fVar198 + fVar86 * fVar243 +
                       fVar325 * fVar199 + fVar98 * fVar244 + fVar326 * fVar200 + fVar99 * fVar245;
              fVar76 = fVar77 * fVar197 + fVar100 * fVar242 + fVar78 * fVar198 + fVar101 * fVar243 +
                       fVar328 * fVar199 + fVar102 * fVar244 + fVar329 * fVar200 + fVar103 * fVar245
              ;
              fVar94 = fVar330 * fVar197 + fVar104 * fVar242 + fVar332 * fVar198 + fVar105 * fVar243
                       + fVar81 * fVar199 + fVar106 * fVar244 + fVar82 * fVar200 + fVar107 * fVar245
              ;
              fVar95 = fVar83 * fVar197 + fVar315 * fVar242 + fVar84 * fVar198 + fVar317 * fVar243 +
                       fVar333 * fVar199 + fVar137 * fVar244 + fVar335 * fVar200 + fVar138 * fVar245
              ;
              fVar79 = fVar323 * fVar208 + fVar85 * fVar254 + fVar324 * fVar209 + fVar86 * fVar255 +
                       fVar325 * fVar210 + fVar98 * fVar256 + fVar326 * fVar211 + fVar99 * fVar257;
              fVar80 = fVar77 * fVar208 + fVar100 * fVar254 + fVar78 * fVar209 + fVar101 * fVar255 +
                       fVar328 * fVar210 + fVar102 * fVar256 + fVar329 * fVar211 + fVar103 * fVar257
              ;
              fVar96 = fVar330 * fVar208 + fVar104 * fVar254 + fVar332 * fVar209 + fVar105 * fVar255
                       + fVar81 * fVar210 + fVar106 * fVar256 + fVar82 * fVar211 + fVar107 * fVar257
              ;
              fVar97 = fVar83 * fVar208 + fVar315 * fVar254 + fVar84 * fVar209 + fVar317 * fVar255 +
                       fVar333 * fVar210 + fVar137 * fVar256 + fVar335 * fVar211 + fVar138 * fVar257
              ;
              fVar85 = fVar323 * fVar219 + fVar85 * fVar267 + fVar324 * fVar220 + fVar86 * fVar268 +
                       fVar325 * fVar221 + fVar98 * fVar269 + fVar326 * fVar222 + fVar99 * fVar270;
              fVar86 = fVar77 * fVar219 + fVar100 * fVar267 + fVar78 * fVar220 + fVar101 * fVar268 +
                       fVar328 * fVar221 + fVar102 * fVar269 + fVar329 * fVar222 + fVar103 * fVar270
              ;
              fVar98 = fVar330 * fVar219 + fVar104 * fVar267 + fVar332 * fVar220 + fVar105 * fVar268
                       + fVar81 * fVar221 + fVar106 * fVar269 + fVar82 * fVar222 + fVar107 * fVar270
              ;
              fVar99 = fVar83 * fVar219 + fVar315 * fVar267 + fVar84 * fVar220 + fVar317 * fVar268 +
                       fVar333 * fVar221 + fVar137 * fVar269 + fVar335 * fVar222 + fVar138 * fVar270
              ;
              fVar137 = (float)*(undefined8 *)(pfVar68 + 0x74);
              fVar323 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x74) >> 0x20);
              fVar324 = (float)*(undefined8 *)(pfVar68 + 0x76);
              fVar325 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x76) >> 0x20);
              fVar100 = fVar338 * fVar188 + fVar139 * fVar230 + fVar331 * fVar189 +
                        fVar140 * fVar231 + fVar337 * fVar190 + fVar141 * fVar232 +
                        fVar327 * fVar191 + fVar137 * fVar233;
              fVar101 = fVar87 * fVar188 + fVar142 * fVar230 + fVar88 * fVar189 + fVar143 * fVar231
                        + fVar89 * fVar190 + fVar144 * fVar232 + fVar108 * fVar191 +
                        fVar323 * fVar233;
              fVar102 = fVar109 * fVar188 + fVar145 * fVar230 + fVar110 * fVar189 +
                        fVar146 * fVar231 + fVar111 * fVar190 + fVar147 * fVar232 +
                        fVar112 * fVar191 + fVar324 * fVar233;
              fVar103 = fVar113 * fVar188 + fVar148 * fVar230 + fVar114 * fVar189 +
                        fVar149 * fVar231 + fVar296 * fVar190 + fVar150 * fVar232 +
                        fVar309 * fVar191 + fVar325 * fVar233;
              fVar77 = fVar338 * fVar197 + fVar139 * fVar242 + fVar331 * fVar198 + fVar140 * fVar243
                       + fVar337 * fVar199 + fVar141 * fVar244 + fVar327 * fVar200 +
                       fVar137 * fVar245;
              fVar78 = fVar87 * fVar197 + fVar142 * fVar242 + fVar88 * fVar198 + fVar143 * fVar243 +
                       fVar89 * fVar199 + fVar144 * fVar244 + fVar108 * fVar200 + fVar323 * fVar245;
              fVar104 = fVar109 * fVar197 + fVar145 * fVar242 + fVar110 * fVar198 +
                        fVar146 * fVar243 + fVar111 * fVar199 + fVar147 * fVar244 +
                        fVar112 * fVar200 + fVar324 * fVar245;
              fVar105 = fVar113 * fVar197 + fVar148 * fVar242 + fVar114 * fVar198 +
                        fVar149 * fVar243 + fVar296 * fVar199 + fVar150 * fVar244 +
                        fVar309 * fVar200 + fVar325 * fVar245;
              fVar81 = fVar338 * fVar208 + fVar139 * fVar254 + fVar331 * fVar209 + fVar140 * fVar255
                       + fVar337 * fVar210 + fVar141 * fVar256 + fVar327 * fVar211 +
                       fVar137 * fVar257;
              fVar82 = fVar87 * fVar208 + fVar142 * fVar254 + fVar88 * fVar209 + fVar143 * fVar255 +
                       fVar89 * fVar210 + fVar144 * fVar256 + fVar108 * fVar211 + fVar323 * fVar257;
              fVar106 = fVar109 * fVar208 + fVar145 * fVar254 + fVar110 * fVar209 +
                        fVar146 * fVar255 + fVar111 * fVar210 + fVar147 * fVar256 +
                        fVar112 * fVar211 + fVar324 * fVar257;
              fVar107 = fVar113 * fVar208 + fVar148 * fVar254 + fVar114 * fVar209 +
                        fVar149 * fVar255 + fVar296 * fVar210 + fVar150 * fVar256 +
                        fVar309 * fVar211 + fVar325 * fVar257;
              fVar87 = fVar87 * fVar219 + fVar142 * fVar267 + fVar88 * fVar220 + fVar143 * fVar268 +
                       fVar89 * fVar221 + fVar144 * fVar269 + fVar108 * fVar222 + fVar323 * fVar270;
              fVar108 = fVar109 * fVar219 + fVar145 * fVar267 + fVar110 * fVar220 +
                        fVar146 * fVar268 + fVar111 * fVar221 + fVar147 * fVar269 +
                        fVar112 * fVar222 + fVar324 * fVar270;
              fVar109 = fVar113 * fVar219 + fVar148 * fVar267 + fVar114 * fVar220 +
                        fVar149 * fVar268 + fVar296 * fVar221 + fVar150 * fVar269 +
                        fVar309 * fVar222 + fVar325 * fVar270;
              Hint_Prefetch(param_6 + 0x58,0,0,0);
              fVar138 = (float)*(undefined8 *)(pfVar68 + 0x78);
              fVar325 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x78) >> 0x20);
              fVar326 = (float)*(undefined8 *)(pfVar68 + 0x7a);
              fVar330 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x7a) >> 0x20);
              fVar323 = fVar339 * fVar188 + fVar152 * fVar230 + fVar116 * fVar189 +
                        fVar153 * fVar231 + fVar117 * fVar190 + fVar154 * fVar232 +
                        fVar119 * fVar191 + fVar138 * fVar233;
              fVar324 = fVar310 * fVar188 + fVar155 * fVar230 + fVar334 * fVar189 +
                        fVar156 * fVar231 + fVar336 * fVar190 + fVar157 * fVar232 +
                        fVar321 * fVar191 + fVar325 * fVar233;
              fVar110 = fVar322 * fVar188 + fVar158 * fVar230 + fVar340 * fVar189 +
                        fVar159 * fVar231 + fVar341 * fVar190 + fVar160 * fVar232 +
                        fVar120 * fVar191 + fVar326 * fVar233;
              fVar111 = fVar266 * fVar188 + fVar161 * fVar230 + fVar279 * fVar189 +
                        fVar162 * fVar231 + fVar196 * fVar190 + fVar163 * fVar232 +
                        fVar207 * fVar191 + fVar330 * fVar233;
              fVar328 = fVar339 * fVar197 + fVar152 * fVar242 + fVar116 * fVar198 +
                        fVar153 * fVar243 + fVar117 * fVar199 + fVar154 * fVar244 +
                        fVar119 * fVar200 + fVar138 * fVar245;
              fVar329 = fVar310 * fVar197 + fVar155 * fVar242 + fVar334 * fVar198 +
                        fVar156 * fVar243 + fVar336 * fVar199 + fVar157 * fVar244 +
                        fVar321 * fVar200 + fVar325 * fVar245;
              fVar112 = fVar322 * fVar197 + fVar158 * fVar242 + fVar340 * fVar198 +
                        fVar159 * fVar243 + fVar341 * fVar199 + fVar160 * fVar244 +
                        fVar120 * fVar200 + fVar326 * fVar245;
              fVar113 = fVar266 * fVar197 + fVar161 * fVar242 + fVar279 * fVar198 +
                        fVar162 * fVar243 + fVar196 * fVar199 + fVar163 * fVar244 +
                        fVar207 * fVar200 + fVar330 * fVar245;
              fVar83 = fVar339 * fVar208 + fVar152 * fVar254 + fVar116 * fVar209 + fVar153 * fVar255
                       + fVar117 * fVar210 + fVar154 * fVar256 + fVar119 * fVar211 +
                       fVar138 * fVar257;
              fVar84 = fVar310 * fVar208 + fVar155 * fVar254 + fVar334 * fVar209 + fVar156 * fVar255
                       + fVar336 * fVar210 + fVar157 * fVar256 + fVar321 * fVar211 +
                       fVar325 * fVar257;
              fVar315 = fVar322 * fVar208 + fVar158 * fVar254 + fVar340 * fVar209 +
                        fVar159 * fVar255 + fVar341 * fVar210 + fVar160 * fVar256 +
                        fVar120 * fVar211 + fVar326 * fVar257;
              fVar317 = fVar266 * fVar208 + fVar161 * fVar254 + fVar279 * fVar209 +
                        fVar162 * fVar255 + fVar196 * fVar210 + fVar163 * fVar256 +
                        fVar207 * fVar211 + fVar330 * fVar257;
              fVar88 = fVar310 * fVar219 + fVar155 * fVar267 + fVar334 * fVar220 + fVar156 * fVar268
                       + fVar336 * fVar221 + fVar157 * fVar269 + fVar321 * fVar222 +
                       fVar325 * fVar270;
              fVar334 = fVar322 * fVar219 + fVar158 * fVar267 + fVar340 * fVar220 +
                        fVar159 * fVar268 + fVar341 * fVar221 + fVar160 * fVar269 +
                        fVar120 * fVar222 + fVar326 * fVar270;
              fVar336 = fVar266 * fVar219 + fVar161 * fVar267 + fVar279 * fVar220 +
                        fVar162 * fVar268 + fVar196 * fVar221 + fVar163 * fVar269 +
                        fVar207 * fVar222 + fVar330 * fVar270;
              fVar120 = (float)*(undefined8 *)(pfVar68 + 0x7c);
              fVar330 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x7c) >> 0x20);
              fVar333 = (float)*(undefined8 *)(pfVar68 + 0x7e);
              fVar341 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x7e) >> 0x20);
              fVar325 = fVar218 * fVar188 + fVar164 * fVar230 + fVar229 * fVar189 +
                        fVar165 * fVar231 + fVar122 * fVar190 + fVar166 * fVar232 +
                        fVar123 * fVar191 + fVar120 * fVar233;
              fVar326 = fVar124 * fVar188 + fVar167 * fVar230 + fVar125 * fVar189 +
                        fVar169 * fVar231 + fVar126 * fVar190 + fVar170 * fVar232 +
                        fVar127 * fVar191 + fVar330 * fVar233;
              fVar114 = fVar128 * fVar188 + fVar171 * fVar230 + fVar129 * fVar189 +
                        fVar172 * fVar231 + fVar130 * fVar190 + fVar173 * fVar232 +
                        fVar131 * fVar191 + fVar333 * fVar233;
              fVar296 = fVar132 * fVar188 + fVar174 * fVar230 + fVar133 * fVar189 +
                        fVar175 * fVar231 + fVar135 * fVar190 + fVar176 * fVar232 +
                        fVar136 * fVar191 + fVar341 * fVar233;
              fVar332 = fVar124 * fVar197 + fVar167 * fVar242 + fVar125 * fVar198 +
                        fVar169 * fVar243 + fVar126 * fVar199 + fVar170 * fVar244 +
                        fVar127 * fVar200 + fVar330 * fVar245;
              fVar309 = fVar128 * fVar197 + fVar171 * fVar242 + fVar129 * fVar198 +
                        fVar172 * fVar243 + fVar130 * fVar199 + fVar173 * fVar244 +
                        fVar131 * fVar200 + fVar333 * fVar245;
              fVar310 = fVar132 * fVar197 + fVar174 * fVar242 + fVar133 * fVar198 +
                        fVar175 * fVar243 + fVar135 * fVar199 + fVar176 * fVar244 +
                        fVar136 * fVar200 + fVar341 * fVar245;
              fVar335 = fVar124 * fVar208 + fVar167 * fVar254 + fVar125 * fVar209 +
                        fVar169 * fVar255 + fVar126 * fVar210 + fVar170 * fVar256 +
                        fVar127 * fVar211 + fVar330 * fVar257;
              fVar321 = fVar128 * fVar208 + fVar171 * fVar254 + fVar129 * fVar209 +
                        fVar172 * fVar255 + fVar130 * fVar210 + fVar173 * fVar256 +
                        fVar131 * fVar211 + fVar333 * fVar257;
              fVar322 = fVar132 * fVar208 + fVar174 * fVar254 + fVar133 * fVar209 +
                        fVar175 * fVar255 + fVar135 * fVar210 + fVar176 * fVar256 +
                        fVar136 * fVar211 + fVar341 * fVar257;
              fVar89 = fVar124 * fVar219 + fVar167 * fVar267 + fVar125 * fVar220 + fVar169 * fVar268
                       + fVar126 * fVar221 + fVar170 * fVar269 + fVar127 * fVar222 +
                       fVar330 * fVar270;
              fVar340 = fVar128 * fVar219 + fVar171 * fVar267 + fVar129 * fVar220 +
                        fVar172 * fVar268 + fVar130 * fVar221 + fVar173 * fVar269 +
                        fVar131 * fVar222 + fVar333 * fVar270;
              fVar341 = fVar132 * fVar219 + fVar174 * fVar267 + fVar133 * fVar220 +
                        fVar175 * fVar268 + fVar135 * fVar221 + fVar176 * fVar269 +
                        fVar136 * fVar222 + fVar341 * fVar270;
              pfVar70 = param_6 + 0x20;
              pfVar68 = pfVar68 + 0x80;
              fVar330 = fVar218 * fVar197 + fVar164 * fVar242 + fVar229 * fVar198 +
                        fVar165 * fVar243 + fVar122 * fVar199 + fVar166 * fVar244 +
                        fVar123 * fVar200 + fVar120 * fVar245;
              fVar333 = fVar218 * fVar208 + fVar164 * fVar254 + fVar229 * fVar209 +
                        fVar165 * fVar255 + fVar122 * fVar210 + fVar166 * fVar256 +
                        fVar123 * fVar211 + fVar120 * fVar257;
              fVar338 = fVar338 * fVar219 + fVar139 * fVar267 + fVar331 * fVar220 +
                        fVar140 * fVar268 + fVar337 * fVar221 + fVar141 * fVar269 +
                        fVar327 * fVar222 + fVar137 * fVar270;
              fVar331 = fVar339 * fVar219 + fVar152 * fVar267 + fVar116 * fVar220 +
                        fVar153 * fVar268 + fVar117 * fVar221 + fVar154 * fVar269 +
                        fVar119 * fVar222 + fVar138 * fVar270;
              fVar337 = fVar218 * fVar219 + fVar164 * fVar267 + fVar229 * fVar220 +
                        fVar165 * fVar268 + fVar122 * fVar221 + fVar166 * fVar269 +
                        fVar123 * fVar222 + fVar120 * fVar270;
            }
          }
          else {
            fVar188 = *param_6;
            fVar197 = param_6[1];
            fVar323 = (float)*(undefined8 *)pfVar68;
            fVar75 = (float)((ulong)*(undefined8 *)pfVar68 >> 0x20);
            fVar328 = (float)*(undefined8 *)(pfVar68 + 2);
            fVar79 = (float)((ulong)*(undefined8 *)(pfVar68 + 2) >> 0x20);
            fVar208 = param_6[2];
            fVar219 = param_6[3];
            fVar83 = (float)*(undefined8 *)(pfVar68 + 4);
            fVar85 = (float)((ulong)*(undefined8 *)(pfVar68 + 4) >> 0x20);
            fVar331 = (float)*(undefined8 *)(pfVar68 + 6);
            fVar90 = (float)((ulong)*(undefined8 *)(pfVar68 + 6) >> 0x20);
            fVar230 = param_6[4];
            fVar242 = param_6[5];
            fVar94 = (float)*(undefined8 *)(pfVar68 + 8);
            fVar98 = (float)((ulong)*(undefined8 *)(pfVar68 + 8) >> 0x20);
            fVar102 = (float)*(undefined8 *)(pfVar68 + 10);
            fVar106 = (float)((ulong)*(undefined8 *)(pfVar68 + 10) >> 0x20);
            fVar254 = param_6[6];
            fVar267 = param_6[7];
            fVar110 = (float)*(undefined8 *)(pfVar68 + 0xc);
            fVar114 = (float)((ulong)*(undefined8 *)(pfVar68 + 0xc) >> 0x20);
            fVar315 = (float)*(undefined8 *)(pfVar68 + 0xe);
            fVar321 = (float)((ulong)*(undefined8 *)(pfVar68 + 0xe) >> 0x20);
            Hint_Prefetch(pfVar68 + 0x2a0,0,0,0);
            Hint_Prefetch(pfVar68 + 0x2b0,0,0,0);
            fVar327 = (float)*(undefined8 *)(pfVar68 + 0x10);
            fVar119 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x10) >> 0x20);
            fVar196 = (float)*(undefined8 *)(pfVar68 + 0x12);
            fVar122 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x12) >> 0x20);
            fVar126 = (float)*(undefined8 *)(pfVar68 + 0x14);
            fVar130 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x14) >> 0x20);
            fVar135 = (float)*(undefined8 *)(pfVar68 + 0x16);
            fVar139 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x16) >> 0x20);
            fVar143 = (float)*(undefined8 *)(pfVar68 + 0x18);
            fVar147 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x18) >> 0x20);
            fVar152 = (float)*(undefined8 *)(pfVar68 + 0x1a);
            fVar156 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x1a) >> 0x20);
            fVar160 = (float)*(undefined8 *)(pfVar68 + 0x1c);
            fVar164 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x1c) >> 0x20);
            fVar169 = (float)*(undefined8 *)(pfVar68 + 0x1e);
            fVar173 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x1e) >> 0x20);
            fVar189 = param_6[8];
            fVar198 = param_6[9];
            fVar209 = param_6[10];
            fVar220 = param_6[0xb];
            Hint_Prefetch(param_6 + 0x44,0,0,0);
            fVar324 = (float)*(undefined8 *)(pfVar68 + 0x20);
            fVar76 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x20) >> 0x20);
            fVar329 = (float)*(undefined8 *)(pfVar68 + 0x22);
            fVar80 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x22) >> 0x20);
            fVar84 = (float)*(undefined8 *)(pfVar68 + 0x24);
            fVar86 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x24) >> 0x20);
            fVar88 = (float)*(undefined8 *)(pfVar68 + 0x26);
            fVar91 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x26) >> 0x20);
            fVar95 = (float)*(undefined8 *)(pfVar68 + 0x28);
            fVar99 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x28) >> 0x20);
            fVar103 = (float)*(undefined8 *)(pfVar68 + 0x2a);
            fVar107 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x2a) >> 0x20);
            fVar111 = (float)*(undefined8 *)(pfVar68 + 0x2c);
            fVar296 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x2c) >> 0x20);
            fVar317 = (float)*(undefined8 *)(pfVar68 + 0x2e);
            fVar322 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x2e) >> 0x20);
            fVar231 = param_6[0xc];
            fVar243 = param_6[0xd];
            fVar255 = param_6[0xe];
            fVar268 = param_6[0xf];
            Hint_Prefetch(pfVar68 + 0x2c8,0,0,0);
            Hint_Prefetch(pfVar68 + 0x2b8,0,0,0);
            fVar339 = (float)*(undefined8 *)(pfVar68 + 0x30);
            fVar120 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x30) >> 0x20);
            fVar207 = (float)*(undefined8 *)(pfVar68 + 0x32);
            fVar123 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x32) >> 0x20);
            fVar127 = (float)*(undefined8 *)(pfVar68 + 0x34);
            fVar131 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x34) >> 0x20);
            fVar136 = (float)*(undefined8 *)(pfVar68 + 0x36);
            fVar140 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x36) >> 0x20);
            fVar144 = (float)*(undefined8 *)(pfVar68 + 0x38);
            fVar148 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x38) >> 0x20);
            fVar153 = (float)*(undefined8 *)(pfVar68 + 0x3a);
            fVar157 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x3a) >> 0x20);
            fVar161 = (float)*(undefined8 *)(pfVar68 + 0x3c);
            fVar165 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x3c) >> 0x20);
            fVar170 = (float)*(undefined8 *)(pfVar68 + 0x3e);
            fVar174 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x3e) >> 0x20);
            fVar190 = param_6[0x10];
            fVar199 = param_6[0x11];
            fVar210 = param_6[0x12];
            fVar221 = param_6[0x13];
            Hint_Prefetch(param_6 + 0x4c,0,0,0);
            fVar325 = (float)*(undefined8 *)(pfVar68 + 0x40);
            fVar77 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x40) >> 0x20);
            fVar330 = (float)*(undefined8 *)(pfVar68 + 0x42);
            fVar81 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x42) >> 0x20);
            fVar333 = (float)*(undefined8 *)(pfVar68 + 0x44);
            fVar338 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x44) >> 0x20);
            fVar337 = (float)*(undefined8 *)(pfVar68 + 0x46);
            fVar92 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x46) >> 0x20);
            fVar96 = (float)*(undefined8 *)(pfVar68 + 0x48);
            fVar100 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x48) >> 0x20);
            fVar104 = (float)*(undefined8 *)(pfVar68 + 0x4a);
            fVar108 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x4a) >> 0x20);
            fVar112 = (float)*(undefined8 *)(pfVar68 + 0x4c);
            fVar309 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x4c) >> 0x20);
            fVar334 = (float)*(undefined8 *)(pfVar68 + 0x4e);
            fVar340 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x4e) >> 0x20);
            fVar232 = param_6[0x14];
            fVar244 = param_6[0x15];
            fVar256 = param_6[0x16];
            fVar269 = param_6[0x17];
            Hint_Prefetch(pfVar68 + 0x2e8,0,0,0);
            Hint_Prefetch(pfVar68 + 0x2d8,0,0,0);
            fVar116 = (float)*(undefined8 *)(pfVar68 + 0x50);
            fVar266 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x50) >> 0x20);
            fVar218 = (float)*(undefined8 *)(pfVar68 + 0x52);
            fVar124 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x52) >> 0x20);
            fVar128 = (float)*(undefined8 *)(pfVar68 + 0x54);
            fVar132 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x54) >> 0x20);
            fVar137 = (float)*(undefined8 *)(pfVar68 + 0x56);
            fVar141 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x56) >> 0x20);
            fVar145 = (float)*(undefined8 *)(pfVar68 + 0x58);
            fVar149 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x58) >> 0x20);
            fVar154 = (float)*(undefined8 *)(pfVar68 + 0x5a);
            fVar158 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x5a) >> 0x20);
            fVar162 = (float)*(undefined8 *)(pfVar68 + 0x5c);
            fVar166 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x5c) >> 0x20);
            fVar171 = (float)*(undefined8 *)(pfVar68 + 0x5e);
            fVar175 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x5e) >> 0x20);
            fVar191 = param_6[0x18];
            fVar200 = param_6[0x19];
            fVar211 = param_6[0x1a];
            fVar222 = param_6[0x1b];
            Hint_Prefetch(param_6 + 0x54,0,0,0);
            fVar326 = (float)*(undefined8 *)(pfVar68 + 0x60);
            fVar78 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x60) >> 0x20);
            fVar332 = (float)*(undefined8 *)(pfVar68 + 0x62);
            fVar82 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x62) >> 0x20);
            fVar335 = (float)*(undefined8 *)(pfVar68 + 100);
            fVar87 = (float)((ulong)*(undefined8 *)(pfVar68 + 100) >> 0x20);
            fVar89 = (float)*(undefined8 *)(pfVar68 + 0x66);
            fVar93 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x66) >> 0x20);
            fVar97 = (float)*(undefined8 *)(pfVar68 + 0x68);
            fVar101 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x68) >> 0x20);
            fVar105 = (float)*(undefined8 *)(pfVar68 + 0x6a);
            fVar109 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x6a) >> 0x20);
            fVar113 = (float)*(undefined8 *)(pfVar68 + 0x6c);
            fVar310 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x6c) >> 0x20);
            fVar336 = (float)*(undefined8 *)(pfVar68 + 0x6e);
            fVar341 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x6e) >> 0x20);
            fVar233 = param_6[0x1c];
            fVar245 = param_6[0x1d];
            fVar257 = param_6[0x1e];
            fVar270 = param_6[0x1f];
            Hint_Prefetch(pfVar68 + 0x308,0,0,0);
            Hint_Prefetch(pfVar68 + 0x2f8,0,0,0);
            fVar117 = (float)*(undefined8 *)(pfVar68 + 0x70);
            fVar279 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x70) >> 0x20);
            fVar229 = (float)*(undefined8 *)(pfVar68 + 0x72);
            fVar125 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x72) >> 0x20);
            fVar280 = fVar323 * fVar188 + fVar327 * fVar230 + fVar324 * fVar189 + fVar339 * fVar231
                      + fVar325 * fVar190 + fVar116 * fVar232 + fVar326 * fVar191 +
                      fVar117 * fVar233;
            fVar282 = fVar75 * fVar188 + fVar119 * fVar230 + fVar76 * fVar189 + fVar120 * fVar231 +
                      fVar77 * fVar190 + fVar266 * fVar232 + fVar78 * fVar191 + fVar279 * fVar233;
            fVar283 = fVar328 * fVar188 + fVar196 * fVar230 + fVar329 * fVar189 + fVar207 * fVar231
                      + fVar330 * fVar190 + fVar218 * fVar232 + fVar332 * fVar191 +
                      fVar229 * fVar233;
            fVar284 = fVar79 * fVar188 + fVar122 * fVar230 + fVar80 * fVar189 + fVar123 * fVar231 +
                      fVar81 * fVar190 + fVar124 * fVar232 + fVar82 * fVar191 + fVar125 * fVar233;
            fVar129 = (float)*(undefined8 *)(pfVar68 + 0x74);
            fVar133 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x74) >> 0x20);
            fVar138 = (float)*(undefined8 *)(pfVar68 + 0x76);
            fVar142 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x76) >> 0x20);
            fVar285 = fVar83 * fVar188 + fVar126 * fVar230 + fVar84 * fVar189 + fVar127 * fVar231 +
                      fVar333 * fVar190 + fVar128 * fVar232 + fVar335 * fVar191 + fVar129 * fVar233;
            fVar286 = fVar85 * fVar188 + fVar130 * fVar230 + fVar86 * fVar189 + fVar131 * fVar231 +
                      fVar338 * fVar190 + fVar132 * fVar232 + fVar87 * fVar191 + fVar133 * fVar233;
            fVar287 = fVar331 * fVar188 + fVar135 * fVar230 + fVar88 * fVar189 + fVar136 * fVar231 +
                      fVar337 * fVar190 + fVar137 * fVar232 + fVar89 * fVar191 + fVar138 * fVar233;
            fVar288 = fVar90 * fVar188 + fVar139 * fVar230 + fVar91 * fVar189 + fVar140 * fVar231 +
                      fVar92 * fVar190 + fVar141 * fVar232 + fVar93 * fVar191 + fVar142 * fVar233;
            uVar118 = *(undefined8 *)(pfVar68 + 0x82);
            uVar115 = *(undefined8 *)(pfVar68 + 0x80);
            uVar134 = *(undefined8 *)(pfVar68 + 0x86);
            uVar121 = *(undefined8 *)(pfVar68 + 0x84);
            fVar146 = (float)*(undefined8 *)(pfVar68 + 0x78);
            fVar150 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x78) >> 0x20);
            fVar155 = (float)*(undefined8 *)(pfVar68 + 0x7a);
            fVar159 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x7a) >> 0x20);
            fVar289 = fVar94 * fVar188 + fVar143 * fVar230 + fVar95 * fVar189 + fVar144 * fVar231 +
                      fVar96 * fVar190 + fVar145 * fVar232 + fVar97 * fVar191 + fVar146 * fVar233;
            fVar290 = fVar98 * fVar188 + fVar147 * fVar230 + fVar99 * fVar189 + fVar148 * fVar231 +
                      fVar100 * fVar190 + fVar149 * fVar232 + fVar101 * fVar191 + fVar150 * fVar233;
            fVar291 = fVar102 * fVar188 + fVar152 * fVar230 + fVar103 * fVar189 + fVar153 * fVar231
                      + fVar104 * fVar190 + fVar154 * fVar232 + fVar105 * fVar191 +
                      fVar155 * fVar233;
            fVar292 = fVar106 * fVar188 + fVar156 * fVar230 + fVar107 * fVar189 + fVar157 * fVar231
                      + fVar108 * fVar190 + fVar158 * fVar232 + fVar109 * fVar191 +
                      fVar159 * fVar233;
            fVar163 = (float)*(undefined8 *)(pfVar68 + 0x7c);
            fVar167 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x7c) >> 0x20);
            fVar172 = (float)*(undefined8 *)(pfVar68 + 0x7e);
            fVar176 = (float)((ulong)*(undefined8 *)(pfVar68 + 0x7e) >> 0x20);
            fVar293 = fVar110 * fVar188 + fVar160 * fVar230 + fVar111 * fVar189 + fVar161 * fVar231
                      + fVar112 * fVar190 + fVar162 * fVar232 + fVar113 * fVar191 +
                      fVar163 * fVar233;
            fVar294 = fVar114 * fVar188 + fVar164 * fVar230 + fVar296 * fVar189 + fVar165 * fVar231
                      + fVar309 * fVar190 + fVar166 * fVar232 + fVar310 * fVar191 +
                      fVar167 * fVar233;
            fVar295 = fVar315 * fVar188 + fVar169 * fVar230 + fVar317 * fVar189 + fVar170 * fVar231
                      + fVar334 * fVar190 + fVar171 * fVar232 + fVar336 * fVar191 +
                      fVar172 * fVar233;
            fVar230 = fVar321 * fVar188 + fVar173 * fVar230 + fVar322 * fVar189 + fVar174 * fVar231
                      + fVar340 * fVar190 + fVar175 * fVar232 + fVar341 * fVar191 +
                      fVar176 * fVar233;
            fVar231 = fVar323 * fVar197 + fVar327 * fVar242 + fVar324 * fVar198 + fVar339 * fVar243
                      + fVar325 * fVar199 + fVar116 * fVar244 + fVar326 * fVar200 +
                      fVar117 * fVar245;
            fVar232 = fVar75 * fVar197 + fVar119 * fVar242 + fVar76 * fVar198 + fVar120 * fVar243 +
                      fVar77 * fVar199 + fVar266 * fVar244 + fVar78 * fVar200 + fVar279 * fVar245;
            fVar233 = fVar328 * fVar197 + fVar196 * fVar242 + fVar329 * fVar198 + fVar207 * fVar243
                      + fVar330 * fVar199 + fVar218 * fVar244 + fVar332 * fVar200 +
                      fVar229 * fVar245;
            fVar297 = fVar79 * fVar197 + fVar122 * fVar242 + fVar80 * fVar198 + fVar123 * fVar243 +
                      fVar81 * fVar199 + fVar124 * fVar244 + fVar82 * fVar200 + fVar125 * fVar245;
            fVar298 = fVar83 * fVar197 + fVar126 * fVar242 + fVar84 * fVar198 + fVar127 * fVar243 +
                      fVar333 * fVar199 + fVar128 * fVar244 + fVar335 * fVar200 + fVar129 * fVar245;
            fVar299 = fVar85 * fVar197 + fVar130 * fVar242 + fVar86 * fVar198 + fVar131 * fVar243 +
                      fVar338 * fVar199 + fVar132 * fVar244 + fVar87 * fVar200 + fVar133 * fVar245;
            fVar300 = fVar331 * fVar197 + fVar135 * fVar242 + fVar88 * fVar198 + fVar136 * fVar243 +
                      fVar337 * fVar199 + fVar137 * fVar244 + fVar89 * fVar200 + fVar138 * fVar245;
            fVar301 = fVar90 * fVar197 + fVar139 * fVar242 + fVar91 * fVar198 + fVar140 * fVar243 +
                      fVar92 * fVar199 + fVar141 * fVar244 + fVar93 * fVar200 + fVar142 * fVar245;
            fVar188 = param_6[0x20];
            fVar189 = param_6[0x21];
            fVar302 = fVar94 * fVar197 + fVar143 * fVar242 + fVar95 * fVar198 + fVar144 * fVar243 +
                      fVar96 * fVar199 + fVar145 * fVar244 + fVar97 * fVar200 + fVar146 * fVar245;
            fVar303 = fVar98 * fVar197 + fVar147 * fVar242 + fVar99 * fVar198 + fVar148 * fVar243 +
                      fVar100 * fVar199 + fVar149 * fVar244 + fVar101 * fVar200 + fVar150 * fVar245;
            fVar304 = fVar102 * fVar197 + fVar152 * fVar242 + fVar103 * fVar198 + fVar153 * fVar243
                      + fVar104 * fVar199 + fVar154 * fVar244 + fVar105 * fVar200 +
                      fVar155 * fVar245;
            fVar305 = fVar106 * fVar197 + fVar156 * fVar242 + fVar107 * fVar198 + fVar157 * fVar243
                      + fVar108 * fVar199 + fVar158 * fVar244 + fVar109 * fVar200 +
                      fVar159 * fVar245;
            fVar306 = fVar110 * fVar197 + fVar160 * fVar242 + fVar111 * fVar198 + fVar161 * fVar243
                      + fVar112 * fVar199 + fVar162 * fVar244 + fVar113 * fVar200 +
                      fVar163 * fVar245;
            fVar307 = fVar114 * fVar197 + fVar164 * fVar242 + fVar296 * fVar198 + fVar165 * fVar243
                      + fVar309 * fVar199 + fVar166 * fVar244 + fVar310 * fVar200 +
                      fVar167 * fVar245;
            fVar308 = fVar315 * fVar197 + fVar169 * fVar242 + fVar317 * fVar198 + fVar170 * fVar243
                      + fVar334 * fVar199 + fVar171 * fVar244 + fVar336 * fVar200 +
                      fVar172 * fVar245;
            fVar197 = fVar321 * fVar197 + fVar173 * fVar242 + fVar322 * fVar198 + fVar174 * fVar243
                      + fVar340 * fVar199 + fVar175 * fVar244 + fVar341 * fVar200 +
                      fVar176 * fVar245;
            pfVar69 = param_6 + 0x24;
            fVar190 = param_6[0x22];
            fVar191 = param_6[0x23];
            fVar198 = fVar323 * fVar208 + fVar327 * fVar254 + fVar324 * fVar209 + fVar339 * fVar255
                      + fVar325 * fVar210 + fVar116 * fVar256 + fVar326 * fVar211 +
                      fVar117 * fVar257;
            fVar199 = fVar75 * fVar208 + fVar119 * fVar254 + fVar76 * fVar209 + fVar120 * fVar255 +
                      fVar77 * fVar210 + fVar266 * fVar256 + fVar78 * fVar211 + fVar279 * fVar257;
            fVar200 = fVar328 * fVar208 + fVar196 * fVar254 + fVar329 * fVar209 + fVar207 * fVar255
                      + fVar330 * fVar210 + fVar218 * fVar256 + fVar332 * fVar211 +
                      fVar229 * fVar257;
            fVar242 = fVar79 * fVar208 + fVar122 * fVar254 + fVar80 * fVar209 + fVar123 * fVar255 +
                      fVar81 * fVar210 + fVar124 * fVar256 + fVar82 * fVar211 + fVar125 * fVar257;
            fVar243 = fVar83 * fVar208 + fVar126 * fVar254 + fVar84 * fVar209 + fVar127 * fVar255 +
                      fVar333 * fVar210 + fVar128 * fVar256 + fVar335 * fVar211 + fVar129 * fVar257;
            fVar244 = fVar85 * fVar208 + fVar130 * fVar254 + fVar86 * fVar209 + fVar131 * fVar255 +
                      fVar338 * fVar210 + fVar132 * fVar256 + fVar87 * fVar211 + fVar133 * fVar257;
            fVar245 = fVar331 * fVar208 + fVar135 * fVar254 + fVar88 * fVar209 + fVar136 * fVar255 +
                      fVar337 * fVar210 + fVar137 * fVar256 + fVar89 * fVar211 + fVar138 * fVar257;
            fVar311 = fVar90 * fVar208 + fVar139 * fVar254 + fVar91 * fVar209 + fVar140 * fVar255 +
                      fVar92 * fVar210 + fVar141 * fVar256 + fVar93 * fVar211 + fVar142 * fVar257;
            Hint_Prefetch(param_6 + 0x5c,0,0,0);
            fVar312 = fVar94 * fVar208 + fVar143 * fVar254 + fVar95 * fVar209 + fVar144 * fVar255 +
                      fVar96 * fVar210 + fVar145 * fVar256 + fVar97 * fVar211 + fVar146 * fVar257;
            fVar313 = fVar98 * fVar208 + fVar147 * fVar254 + fVar99 * fVar209 + fVar148 * fVar255 +
                      fVar100 * fVar210 + fVar149 * fVar256 + fVar101 * fVar211 + fVar150 * fVar257;
            fVar314 = fVar102 * fVar208 + fVar152 * fVar254 + fVar103 * fVar209 + fVar153 * fVar255
                      + fVar104 * fVar210 + fVar154 * fVar256 + fVar105 * fVar211 +
                      fVar155 * fVar257;
            fVar316 = fVar106 * fVar208 + fVar156 * fVar254 + fVar107 * fVar209 + fVar157 * fVar255
                      + fVar108 * fVar210 + fVar158 * fVar256 + fVar109 * fVar211 +
                      fVar159 * fVar257;
            fVar318 = fVar110 * fVar208 + fVar160 * fVar254 + fVar111 * fVar209 + fVar161 * fVar255
                      + fVar112 * fVar210 + fVar162 * fVar256 + fVar113 * fVar211 +
                      fVar163 * fVar257;
            fVar319 = fVar114 * fVar208 + fVar164 * fVar254 + fVar296 * fVar209 + fVar165 * fVar255
                      + fVar309 * fVar210 + fVar166 * fVar256 + fVar310 * fVar211 +
                      fVar167 * fVar257;
            fVar320 = fVar315 * fVar208 + fVar169 * fVar254 + fVar317 * fVar209 + fVar170 * fVar255
                      + fVar334 * fVar210 + fVar171 * fVar256 + fVar336 * fVar211 +
                      fVar172 * fVar257;
            fVar208 = fVar321 * fVar208 + fVar173 * fVar254 + fVar322 * fVar209 + fVar174 * fVar255
                      + fVar340 * fVar210 + fVar175 * fVar256 + fVar341 * fVar211 +
                      fVar176 * fVar257;
            pfVar74 = pfVar68 + 0x90;
            uVar168 = *(undefined8 *)(pfVar68 + 0x8a);
            uVar151 = *(undefined8 *)(pfVar68 + 0x88);
            uVar178 = *(undefined8 *)(pfVar68 + 0x8e);
            uVar177 = *(undefined8 *)(pfVar68 + 0x8c);
            fVar323 = fVar323 * fVar219 + fVar327 * fVar267 + fVar324 * fVar220 + fVar339 * fVar268
                      + fVar325 * fVar221 + fVar116 * fVar269 + fVar326 * fVar222 +
                      fVar117 * fVar270;
            fVar324 = fVar75 * fVar219 + fVar119 * fVar267 + fVar76 * fVar220 + fVar120 * fVar268 +
                      fVar77 * fVar221 + fVar266 * fVar269 + fVar78 * fVar222 + fVar279 * fVar270;
            fVar325 = fVar328 * fVar219 + fVar196 * fVar267 + fVar329 * fVar220 + fVar207 * fVar268
                      + fVar330 * fVar221 + fVar218 * fVar269 + fVar332 * fVar222 +
                      fVar229 * fVar270;
            fVar326 = fVar79 * fVar219 + fVar122 * fVar267 + fVar80 * fVar220 + fVar123 * fVar268 +
                      fVar81 * fVar221 + fVar124 * fVar269 + fVar82 * fVar222 + fVar125 * fVar270;
            fVar327 = fVar83 * fVar219 + fVar126 * fVar267 + fVar84 * fVar220 + fVar127 * fVar268 +
                      fVar333 * fVar221 + fVar128 * fVar269 + fVar335 * fVar222 + fVar129 * fVar270;
            fVar328 = fVar85 * fVar219 + fVar130 * fVar267 + fVar86 * fVar220 + fVar131 * fVar268 +
                      fVar338 * fVar221 + fVar132 * fVar269 + fVar87 * fVar222 + fVar133 * fVar270;
            fVar329 = fVar331 * fVar219 + fVar135 * fVar267 + fVar88 * fVar220 + fVar136 * fVar268 +
                      fVar337 * fVar221 + fVar137 * fVar269 + fVar89 * fVar222 + fVar138 * fVar270;
            fVar330 = fVar90 * fVar219 + fVar139 * fVar267 + fVar91 * fVar220 + fVar140 * fVar268 +
                      fVar92 * fVar221 + fVar141 * fVar269 + fVar93 * fVar222 + fVar142 * fVar270;
            fVar331 = fVar94 * fVar219 + fVar143 * fVar267 + fVar95 * fVar220 + fVar144 * fVar268 +
                      fVar96 * fVar221 + fVar145 * fVar269 + fVar97 * fVar222 + fVar146 * fVar270;
            fVar332 = fVar98 * fVar219 + fVar147 * fVar267 + fVar99 * fVar220 + fVar148 * fVar268 +
                      fVar100 * fVar221 + fVar149 * fVar269 + fVar101 * fVar222 + fVar150 * fVar270;
            fVar333 = fVar102 * fVar219 + fVar152 * fVar267 + fVar103 * fVar220 + fVar153 * fVar268
                      + fVar104 * fVar221 + fVar154 * fVar269 + fVar105 * fVar222 +
                      fVar155 * fVar270;
            fVar335 = fVar106 * fVar219 + fVar156 * fVar267 + fVar107 * fVar220 + fVar157 * fVar268
                      + fVar108 * fVar221 + fVar158 * fVar269 + fVar109 * fVar222 +
                      fVar159 * fVar270;
            fVar337 = fVar110 * fVar219 + fVar160 * fVar267 + fVar111 * fVar220 + fVar161 * fVar268
                      + fVar112 * fVar221 + fVar162 * fVar269 + fVar113 * fVar222 +
                      fVar163 * fVar270;
            fVar338 = fVar114 * fVar219 + fVar164 * fVar267 + fVar296 * fVar220 + fVar165 * fVar268
                      + fVar309 * fVar221 + fVar166 * fVar269 + fVar310 * fVar222 +
                      fVar167 * fVar270;
            fVar339 = fVar315 * fVar219 + fVar169 * fVar267 + fVar317 * fVar220 + fVar170 * fVar268
                      + fVar334 * fVar221 + fVar171 * fVar269 + fVar336 * fVar222 +
                      fVar172 * fVar270;
            fVar341 = fVar321 * fVar219 + fVar173 * fVar267 + fVar322 * fVar220 + fVar174 * fVar268
                      + fVar340 * fVar221 + fVar175 * fVar269 + fVar341 * fVar222 +
                      fVar176 * fVar270;
            lVar62 = uVar65 - 2;
            pfVar68 = pfVar69;
            pfVar70 = pfVar74;
            if (uVar65 - 2 != 0 && 1 < (long)uVar65) {
              do {
                fVar296 = (float)uVar115;
                fVar317 = (float)((ulong)uVar115 >> 0x20);
                fVar322 = (float)uVar118;
                fVar119 = (float)((ulong)uVar118 >> 0x20);
                fVar196 = (float)uVar121;
                fVar122 = (float)((ulong)uVar121 >> 0x20);
                fVar126 = (float)uVar134;
                fVar130 = (float)((ulong)uVar134 >> 0x20);
                fVar135 = (float)uVar151;
                fVar139 = (float)((ulong)uVar151 >> 0x20);
                fVar143 = (float)uVar168;
                fVar147 = (float)((ulong)uVar168 >> 0x20);
                fVar152 = (float)uVar177;
                fVar156 = (float)((ulong)uVar177 >> 0x20);
                fVar160 = (float)uVar178;
                fVar164 = (float)((ulong)uVar178 >> 0x20);
                fVar234 = *pfVar68;
                fVar246 = pfVar68[1];
                fVar75 = fVar135 * fVar189;
                fVar85 = fVar139 * fVar189;
                fVar95 = fVar143 * fVar189;
                fVar105 = fVar147 * fVar189;
                fVar76 = fVar152 * fVar189;
                fVar86 = fVar156 * fVar189;
                fVar96 = fVar160 * fVar189;
                fVar106 = fVar164 * fVar189;
                fVar258 = pfVar68[2];
                fVar271 = pfVar68[3];
                fVar77 = fVar296 * fVar190;
                fVar87 = fVar317 * fVar190;
                fVar97 = fVar322 * fVar190;
                fVar107 = fVar119 * fVar190;
                fVar78 = fVar196 * fVar190;
                fVar88 = fVar122 * fVar190;
                fVar98 = fVar126 * fVar190;
                fVar108 = fVar130 * fVar190;
                Hint_Prefetch(pfVar70 + 0x298,0,0,0);
                fVar79 = fVar135 * fVar190;
                fVar89 = fVar139 * fVar190;
                fVar99 = fVar143 * fVar190;
                fVar109 = fVar147 * fVar190;
                fVar80 = fVar152 * fVar190;
                fVar90 = fVar156 * fVar190;
                fVar100 = fVar160 * fVar190;
                fVar110 = fVar164 * fVar190;
                Hint_Prefetch(pfVar70 + 0x288,0,0,0);
                fVar81 = fVar296 * fVar191;
                fVar91 = fVar317 * fVar191;
                fVar101 = fVar322 * fVar191;
                fVar111 = fVar119 * fVar191;
                fVar82 = fVar196 * fVar191;
                fVar92 = fVar122 * fVar191;
                fVar102 = fVar126 * fVar191;
                fVar112 = fVar130 * fVar191;
                fVar83 = fVar135 * fVar191;
                fVar93 = fVar139 * fVar191;
                fVar103 = fVar143 * fVar191;
                fVar113 = fVar147 * fVar191;
                fVar84 = fVar152 * fVar191;
                fVar94 = fVar156 * fVar191;
                fVar104 = fVar160 * fVar191;
                fVar114 = fVar164 * fVar191;
                fVar169 = (float)*(undefined8 *)pfVar70;
                fVar173 = (float)((ulong)*(undefined8 *)pfVar70 >> 0x20);
                fVar209 = (float)*(undefined8 *)(pfVar70 + 2);
                fVar220 = (float)((ulong)*(undefined8 *)(pfVar70 + 2) >> 0x20);
                fVar255 = (float)*(undefined8 *)(pfVar70 + 4);
                fVar268 = (float)((ulong)*(undefined8 *)(pfVar70 + 4) >> 0x20);
                fVar193 = (float)*(undefined8 *)(pfVar70 + 6);
                fVar205 = (float)((ulong)*(undefined8 *)(pfVar70 + 6) >> 0x20);
                fVar217 = (float)*(undefined8 *)(pfVar70 + 8);
                fVar238 = (float)((ulong)*(undefined8 *)(pfVar70 + 8) >> 0x20);
                fVar250 = (float)*(undefined8 *)(pfVar70 + 10);
                fVar262 = (float)((ulong)*(undefined8 *)(pfVar70 + 10) >> 0x20);
                fVar275 = (float)*(undefined8 *)(pfVar70 + 0xc);
                fVar278 = (float)((ulong)*(undefined8 *)(pfVar70 + 0xc) >> 0x20);
                fVar182 = (float)*(undefined8 *)(pfVar70 + 0xe);
                fVar185 = (float)((ulong)*(undefined8 *)(pfVar70 + 0xe) >> 0x20);
                fVar190 = pfVar68[4];
                fVar201 = pfVar68[5];
                fVar212 = pfVar68[6];
                fVar223 = pfVar68[7];
                Hint_Prefetch(pfVar68 + 0x40,0,0,0);
                fVar309 = (float)*(undefined8 *)(pfVar70 + 0x10);
                fVar334 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x10) >> 0x20);
                fVar340 = (float)*(undefined8 *)(pfVar70 + 0x12);
                fVar120 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x12) >> 0x20);
                fVar207 = (float)*(undefined8 *)(pfVar70 + 0x14);
                fVar123 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x14) >> 0x20);
                fVar127 = (float)*(undefined8 *)(pfVar70 + 0x16);
                fVar131 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x16) >> 0x20);
                fVar136 = (float)*(undefined8 *)(pfVar70 + 0x18);
                fVar140 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x18) >> 0x20);
                fVar144 = (float)*(undefined8 *)(pfVar70 + 0x1a);
                fVar148 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x1a) >> 0x20);
                fVar153 = (float)*(undefined8 *)(pfVar70 + 0x1c);
                fVar157 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x1c) >> 0x20);
                fVar161 = (float)*(undefined8 *)(pfVar70 + 0x1e);
                fVar165 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x1e) >> 0x20);
                fVar235 = pfVar68[8];
                fVar247 = pfVar68[9];
                fVar259 = pfVar68[10];
                fVar272 = pfVar68[0xb];
                Hint_Prefetch(pfVar70 + 0x2b8,0,0,0);
                Hint_Prefetch(pfVar70 + 0x2a8,0,0,0);
                fVar170 = (float)*(undefined8 *)(pfVar70 + 0x20);
                fVar174 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x20) >> 0x20);
                fVar210 = (float)*(undefined8 *)(pfVar70 + 0x22);
                fVar221 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x22) >> 0x20);
                fVar256 = (float)*(undefined8 *)(pfVar70 + 0x24);
                fVar269 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x24) >> 0x20);
                fVar194 = (float)*(undefined8 *)(pfVar70 + 0x26);
                fVar206 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x26) >> 0x20);
                fVar226 = (float)*(undefined8 *)(pfVar70 + 0x28);
                fVar239 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x28) >> 0x20);
                fVar251 = (float)*(undefined8 *)(pfVar70 + 0x2a);
                fVar263 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x2a) >> 0x20);
                fVar276 = (float)*(undefined8 *)(pfVar70 + 0x2c);
                fVar180 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x2c) >> 0x20);
                fVar183 = (float)*(undefined8 *)(pfVar70 + 0x2e);
                fVar186 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x2e) >> 0x20);
                fVar191 = pfVar68[0xc];
                fVar202 = pfVar68[0xd];
                fVar213 = pfVar68[0xe];
                fVar224 = pfVar68[0xf];
                Hint_Prefetch(pfVar68 + 0x48,0,0,0);
                fVar310 = (float)*(undefined8 *)(pfVar70 + 0x30);
                fVar336 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x30) >> 0x20);
                fVar116 = (float)*(undefined8 *)(pfVar70 + 0x32);
                fVar266 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x32) >> 0x20);
                fVar218 = (float)*(undefined8 *)(pfVar70 + 0x34);
                fVar124 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x34) >> 0x20);
                fVar128 = (float)*(undefined8 *)(pfVar70 + 0x36);
                fVar132 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x36) >> 0x20);
                fVar137 = (float)*(undefined8 *)(pfVar70 + 0x38);
                fVar141 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x38) >> 0x20);
                fVar145 = (float)*(undefined8 *)(pfVar70 + 0x3a);
                fVar149 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x3a) >> 0x20);
                fVar154 = (float)*(undefined8 *)(pfVar70 + 0x3c);
                fVar158 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x3c) >> 0x20);
                fVar162 = (float)*(undefined8 *)(pfVar70 + 0x3e);
                fVar166 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x3e) >> 0x20);
                fVar236 = pfVar68[0x10];
                fVar248 = pfVar68[0x11];
                fVar260 = pfVar68[0x12];
                fVar273 = pfVar68[0x13];
                Hint_Prefetch(pfVar70 + 0x2d8,0,0,0);
                Hint_Prefetch(pfVar70 + 0x2c8,0,0,0);
                fVar171 = (float)*(undefined8 *)(pfVar70 + 0x40);
                fVar175 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x40) >> 0x20);
                fVar211 = (float)*(undefined8 *)(pfVar70 + 0x42);
                fVar222 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x42) >> 0x20);
                fVar257 = (float)*(undefined8 *)(pfVar70 + 0x44);
                fVar270 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x44) >> 0x20);
                fVar195 = (float)*(undefined8 *)(pfVar70 + 0x46);
                fVar215 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x46) >> 0x20);
                fVar227 = (float)*(undefined8 *)(pfVar70 + 0x48);
                fVar240 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x48) >> 0x20);
                fVar252 = (float)*(undefined8 *)(pfVar70 + 0x4a);
                fVar264 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x4a) >> 0x20);
                fVar277 = (float)*(undefined8 *)(pfVar70 + 0x4c);
                fVar181 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x4c) >> 0x20);
                fVar184 = (float)*(undefined8 *)(pfVar70 + 0x4e);
                fVar187 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x4e) >> 0x20);
                fVar192 = pfVar68[0x14];
                fVar203 = pfVar68[0x15];
                fVar214 = pfVar68[0x16];
                fVar225 = pfVar68[0x17];
                Hint_Prefetch(pfVar68 + 0x50,0,0,0);
                fVar315 = (float)*(undefined8 *)(pfVar70 + 0x50);
                fVar321 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x50) >> 0x20);
                fVar117 = (float)*(undefined8 *)(pfVar70 + 0x52);
                fVar279 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x52) >> 0x20);
                fVar229 = (float)*(undefined8 *)(pfVar70 + 0x54);
                fVar125 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x54) >> 0x20);
                fVar129 = (float)*(undefined8 *)(pfVar70 + 0x56);
                fVar133 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x56) >> 0x20);
                fVar138 = (float)*(undefined8 *)(pfVar70 + 0x58);
                fVar142 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x58) >> 0x20);
                fVar146 = (float)*(undefined8 *)(pfVar70 + 0x5a);
                fVar150 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x5a) >> 0x20);
                fVar155 = (float)*(undefined8 *)(pfVar70 + 0x5c);
                fVar159 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x5c) >> 0x20);
                fVar163 = (float)*(undefined8 *)(pfVar70 + 0x5e);
                fVar167 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x5e) >> 0x20);
                fVar237 = pfVar68[0x18];
                fVar249 = pfVar68[0x19];
                fVar261 = pfVar68[0x1a];
                fVar274 = pfVar68[0x1b];
                Hint_Prefetch(pfVar70 + 0x2f8,0,0,0);
                Hint_Prefetch(pfVar70 + 0x2e8,0,0,0);
                fVar172 = (float)*(undefined8 *)(pfVar70 + 0x60);
                fVar176 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x60) >> 0x20);
                fVar219 = (float)*(undefined8 *)(pfVar70 + 0x62);
                fVar254 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x62) >> 0x20);
                fVar280 = fVar280 + fVar296 * fVar188 + fVar169 * fVar234 + fVar309 * fVar190 +
                          fVar170 * fVar235 + fVar310 * fVar191 + fVar171 * fVar236 +
                          fVar315 * fVar192 + fVar172 * fVar237;
                fVar282 = fVar282 + fVar317 * fVar188 + fVar173 * fVar234 + fVar334 * fVar190 +
                          fVar174 * fVar235 + fVar336 * fVar191 + fVar175 * fVar236 +
                          fVar321 * fVar192 + fVar176 * fVar237;
                fVar283 = fVar283 + fVar322 * fVar188 + fVar209 * fVar234 + fVar340 * fVar190 +
                          fVar210 * fVar235 + fVar116 * fVar191 + fVar211 * fVar236 +
                          fVar117 * fVar192 + fVar219 * fVar237;
                fVar284 = fVar284 + fVar119 * fVar188 + fVar220 * fVar234 + fVar120 * fVar190 +
                          fVar221 * fVar235 + fVar266 * fVar191 + fVar222 * fVar236 +
                          fVar279 * fVar192 + fVar254 * fVar237;
                fVar267 = (float)*(undefined8 *)(pfVar70 + 100);
                fVar179 = (float)((ulong)*(undefined8 *)(pfVar70 + 100) >> 0x20);
                fVar204 = (float)*(undefined8 *)(pfVar70 + 0x66);
                fVar216 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x66) >> 0x20);
                fVar285 = fVar285 + fVar196 * fVar188 + fVar255 * fVar234 + fVar207 * fVar190 +
                          fVar256 * fVar235 + fVar218 * fVar191 + fVar257 * fVar236 +
                          fVar229 * fVar192 + fVar267 * fVar237;
                fVar286 = fVar286 + fVar122 * fVar188 + fVar268 * fVar234 + fVar123 * fVar190 +
                          fVar269 * fVar235 + fVar124 * fVar191 + fVar270 * fVar236 +
                          fVar125 * fVar192 + fVar179 * fVar237;
                fVar287 = fVar287 + fVar126 * fVar188 + fVar193 * fVar234 + fVar127 * fVar190 +
                          fVar194 * fVar235 + fVar128 * fVar191 + fVar195 * fVar236 +
                          fVar129 * fVar192 + fVar204 * fVar237;
                fVar288 = fVar288 + fVar130 * fVar188 + fVar205 * fVar234 + fVar131 * fVar190 +
                          fVar206 * fVar235 + fVar132 * fVar191 + fVar215 * fVar236 +
                          fVar133 * fVar192 + fVar216 * fVar237;
                uVar118 = *(undefined8 *)(pfVar70 + 0x72);
                uVar115 = *(undefined8 *)(pfVar70 + 0x70);
                uVar134 = *(undefined8 *)(pfVar70 + 0x76);
                uVar121 = *(undefined8 *)(pfVar70 + 0x74);
                fVar228 = (float)*(undefined8 *)(pfVar70 + 0x68);
                fVar241 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x68) >> 0x20);
                fVar253 = (float)*(undefined8 *)(pfVar70 + 0x6a);
                fVar265 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x6a) >> 0x20);
                fVar289 = fVar289 + fVar135 * fVar188 + fVar217 * fVar234 + fVar136 * fVar190 +
                          fVar226 * fVar235 + fVar137 * fVar191 + fVar227 * fVar236 +
                          fVar138 * fVar192 + fVar228 * fVar237;
                fVar290 = fVar290 + fVar139 * fVar188 + fVar238 * fVar234 + fVar140 * fVar190 +
                          fVar239 * fVar235 + fVar141 * fVar191 + fVar240 * fVar236 +
                          fVar142 * fVar192 + fVar241 * fVar237;
                fVar291 = fVar291 + fVar143 * fVar188 + fVar250 * fVar234 + fVar144 * fVar190 +
                          fVar251 * fVar235 + fVar145 * fVar191 + fVar252 * fVar236 +
                          fVar146 * fVar192 + fVar253 * fVar237;
                fVar292 = fVar292 + fVar147 * fVar188 + fVar262 * fVar234 + fVar148 * fVar190 +
                          fVar263 * fVar235 + fVar149 * fVar191 + fVar264 * fVar236 +
                          fVar150 * fVar192 + fVar265 * fVar237;
                fVar135 = (float)*(undefined8 *)(pfVar70 + 0x6c);
                fVar139 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x6c) >> 0x20);
                fVar143 = (float)*(undefined8 *)(pfVar70 + 0x6e);
                fVar147 = (float)((ulong)*(undefined8 *)(pfVar70 + 0x6e) >> 0x20);
                fVar293 = fVar293 + fVar152 * fVar188 + fVar275 * fVar234 + fVar153 * fVar190 +
                          fVar276 * fVar235 + fVar154 * fVar191 + fVar277 * fVar236 +
                          fVar155 * fVar192 + fVar135 * fVar237;
                fVar294 = fVar294 + fVar156 * fVar188 + fVar278 * fVar234 + fVar157 * fVar190 +
                          fVar180 * fVar235 + fVar158 * fVar191 + fVar181 * fVar236 +
                          fVar159 * fVar192 + fVar139 * fVar237;
                fVar295 = fVar295 + fVar160 * fVar188 + fVar182 * fVar234 + fVar161 * fVar190 +
                          fVar183 * fVar235 + fVar162 * fVar191 + fVar184 * fVar236 +
                          fVar163 * fVar192 + fVar143 * fVar237;
                fVar230 = fVar230 + fVar164 * fVar188 + fVar185 * fVar234 + fVar165 * fVar190 +
                          fVar186 * fVar235 + fVar166 * fVar191 + fVar187 * fVar236 +
                          fVar167 * fVar192 + fVar147 * fVar237;
                fVar231 = fVar231 + fVar296 * fVar189 + fVar169 * fVar246 + fVar309 * fVar201 +
                          fVar170 * fVar247 + fVar310 * fVar202 + fVar171 * fVar248 +
                          fVar315 * fVar203 + fVar172 * fVar249;
                fVar232 = fVar232 + fVar317 * fVar189 + fVar173 * fVar246 + fVar334 * fVar201 +
                          fVar174 * fVar247 + fVar336 * fVar202 + fVar175 * fVar248 +
                          fVar321 * fVar203 + fVar176 * fVar249;
                fVar233 = fVar233 + fVar322 * fVar189 + fVar209 * fVar246 + fVar340 * fVar201 +
                          fVar210 * fVar247 + fVar116 * fVar202 + fVar211 * fVar248 +
                          fVar117 * fVar203 + fVar219 * fVar249;
                fVar297 = fVar297 + fVar119 * fVar189 + fVar220 * fVar246 + fVar120 * fVar201 +
                          fVar221 * fVar247 + fVar266 * fVar202 + fVar222 * fVar248 +
                          fVar279 * fVar203 + fVar254 * fVar249;
                fVar298 = fVar298 + fVar196 * fVar189 + fVar255 * fVar246 + fVar207 * fVar201 +
                          fVar256 * fVar247 + fVar218 * fVar202 + fVar257 * fVar248 +
                          fVar229 * fVar203 + fVar267 * fVar249;
                fVar299 = fVar299 + fVar122 * fVar189 + fVar268 * fVar246 + fVar123 * fVar201 +
                          fVar269 * fVar247 + fVar124 * fVar202 + fVar270 * fVar248 +
                          fVar125 * fVar203 + fVar179 * fVar249;
                fVar300 = fVar300 + fVar126 * fVar189 + fVar193 * fVar246 + fVar127 * fVar201 +
                          fVar194 * fVar247 + fVar128 * fVar202 + fVar195 * fVar248 +
                          fVar129 * fVar203 + fVar204 * fVar249;
                fVar301 = fVar301 + fVar130 * fVar189 + fVar205 * fVar246 + fVar131 * fVar201 +
                          fVar206 * fVar247 + fVar132 * fVar202 + fVar215 * fVar248 +
                          fVar133 * fVar203 + fVar216 * fVar249;
                fVar188 = pfVar68[0x1c];
                fVar189 = pfVar68[0x1d];
                fVar302 = fVar302 + fVar75 + fVar217 * fVar246 + fVar136 * fVar201 +
                          fVar226 * fVar247 + fVar137 * fVar202 + fVar227 * fVar248 +
                          fVar138 * fVar203 + fVar228 * fVar249;
                fVar303 = fVar303 + fVar85 + fVar238 * fVar246 + fVar140 * fVar201 +
                          fVar239 * fVar247 + fVar141 * fVar202 + fVar240 * fVar248 +
                          fVar142 * fVar203 + fVar241 * fVar249;
                fVar304 = fVar304 + fVar95 + fVar250 * fVar246 + fVar144 * fVar201 +
                          fVar251 * fVar247 + fVar145 * fVar202 + fVar252 * fVar248 +
                          fVar146 * fVar203 + fVar253 * fVar249;
                fVar305 = fVar305 + fVar105 + fVar262 * fVar246 + fVar148 * fVar201 +
                          fVar263 * fVar247 + fVar149 * fVar202 + fVar264 * fVar248 +
                          fVar150 * fVar203 + fVar265 * fVar249;
                fVar306 = fVar306 + fVar76 + fVar275 * fVar246 + fVar153 * fVar201 +
                          fVar276 * fVar247 + fVar154 * fVar202 + fVar277 * fVar248 +
                          fVar155 * fVar203 + fVar135 * fVar249;
                fVar307 = fVar307 + fVar86 + fVar278 * fVar246 + fVar157 * fVar201 +
                          fVar180 * fVar247 + fVar158 * fVar202 + fVar181 * fVar248 +
                          fVar159 * fVar203 + fVar139 * fVar249;
                fVar308 = fVar308 + fVar96 + fVar182 * fVar246 + fVar161 * fVar201 +
                          fVar183 * fVar247 + fVar162 * fVar202 + fVar184 * fVar248 +
                          fVar163 * fVar203 + fVar143 * fVar249;
                fVar197 = fVar197 + fVar106 + fVar185 * fVar246 + fVar165 * fVar201 +
                          fVar186 * fVar247 + fVar166 * fVar202 + fVar187 * fVar248 +
                          fVar167 * fVar203 + fVar147 * fVar249;
                pfVar69 = pfVar68 + 0x20;
                fVar190 = pfVar68[0x1e];
                fVar191 = pfVar68[0x1f];
                fVar198 = fVar198 + fVar77 + fVar169 * fVar258 + fVar309 * fVar212 +
                          fVar170 * fVar259 + fVar310 * fVar213 + fVar171 * fVar260 +
                          fVar315 * fVar214 + fVar172 * fVar261;
                fVar199 = fVar199 + fVar87 + fVar173 * fVar258 + fVar334 * fVar212 +
                          fVar174 * fVar259 + fVar336 * fVar213 + fVar175 * fVar260 +
                          fVar321 * fVar214 + fVar176 * fVar261;
                fVar200 = fVar200 + fVar97 + fVar209 * fVar258 + fVar340 * fVar212 +
                          fVar210 * fVar259 + fVar116 * fVar213 + fVar211 * fVar260 +
                          fVar117 * fVar214 + fVar219 * fVar261;
                fVar242 = fVar242 + fVar107 + fVar220 * fVar258 + fVar120 * fVar212 +
                          fVar221 * fVar259 + fVar266 * fVar213 + fVar222 * fVar260 +
                          fVar279 * fVar214 + fVar254 * fVar261;
                fVar243 = fVar243 + fVar78 + fVar255 * fVar258 + fVar207 * fVar212 +
                          fVar256 * fVar259 + fVar218 * fVar213 + fVar257 * fVar260 +
                          fVar229 * fVar214 + fVar267 * fVar261;
                fVar244 = fVar244 + fVar88 + fVar268 * fVar258 + fVar123 * fVar212 +
                          fVar269 * fVar259 + fVar124 * fVar213 + fVar270 * fVar260 +
                          fVar125 * fVar214 + fVar179 * fVar261;
                fVar245 = fVar245 + fVar98 + fVar193 * fVar258 + fVar127 * fVar212 +
                          fVar194 * fVar259 + fVar128 * fVar213 + fVar195 * fVar260 +
                          fVar129 * fVar214 + fVar204 * fVar261;
                fVar311 = fVar311 + fVar108 + fVar205 * fVar258 + fVar131 * fVar212 +
                          fVar206 * fVar259 + fVar132 * fVar213 + fVar215 * fVar260 +
                          fVar133 * fVar214 + fVar216 * fVar261;
                Hint_Prefetch(pfVar68 + 0x58,0,0,0);
                fVar312 = fVar312 + fVar79 + fVar217 * fVar258 + fVar136 * fVar212 +
                          fVar226 * fVar259 + fVar137 * fVar213 + fVar227 * fVar260 +
                          fVar138 * fVar214 + fVar228 * fVar261;
                fVar313 = fVar313 + fVar89 + fVar238 * fVar258 + fVar140 * fVar212 +
                          fVar239 * fVar259 + fVar141 * fVar213 + fVar240 * fVar260 +
                          fVar142 * fVar214 + fVar241 * fVar261;
                fVar314 = fVar314 + fVar99 + fVar250 * fVar258 + fVar144 * fVar212 +
                          fVar251 * fVar259 + fVar145 * fVar213 + fVar252 * fVar260 +
                          fVar146 * fVar214 + fVar253 * fVar261;
                fVar316 = fVar316 + fVar109 + fVar262 * fVar258 + fVar148 * fVar212 +
                          fVar263 * fVar259 + fVar149 * fVar213 + fVar264 * fVar260 +
                          fVar150 * fVar214 + fVar265 * fVar261;
                fVar318 = fVar318 + fVar80 + fVar275 * fVar258 + fVar153 * fVar212 +
                          fVar276 * fVar259 + fVar154 * fVar213 + fVar277 * fVar260 +
                          fVar155 * fVar214 + fVar135 * fVar261;
                fVar319 = fVar319 + fVar90 + fVar278 * fVar258 + fVar157 * fVar212 +
                          fVar180 * fVar259 + fVar158 * fVar213 + fVar181 * fVar260 +
                          fVar159 * fVar214 + fVar139 * fVar261;
                fVar320 = fVar320 + fVar100 + fVar182 * fVar258 + fVar161 * fVar212 +
                          fVar183 * fVar259 + fVar162 * fVar213 + fVar184 * fVar260 +
                          fVar163 * fVar214 + fVar143 * fVar261;
                fVar208 = fVar208 + fVar110 + fVar185 * fVar258 + fVar165 * fVar212 +
                          fVar186 * fVar259 + fVar166 * fVar213 + fVar187 * fVar260 +
                          fVar167 * fVar214 + fVar147 * fVar261;
                pfVar74 = pfVar70 + 0x80;
                uVar168 = *(undefined8 *)(pfVar70 + 0x7a);
                uVar151 = *(undefined8 *)(pfVar70 + 0x78);
                uVar178 = *(undefined8 *)(pfVar70 + 0x7e);
                uVar177 = *(undefined8 *)(pfVar70 + 0x7c);
                fVar323 = fVar323 + fVar81 + fVar169 * fVar271 + fVar309 * fVar223 +
                          fVar170 * fVar272 + fVar310 * fVar224 + fVar171 * fVar273 +
                          fVar315 * fVar225 + fVar172 * fVar274;
                fVar324 = fVar324 + fVar91 + fVar173 * fVar271 + fVar334 * fVar223 +
                          fVar174 * fVar272 + fVar336 * fVar224 + fVar175 * fVar273 +
                          fVar321 * fVar225 + fVar176 * fVar274;
                fVar325 = fVar325 + fVar101 + fVar209 * fVar271 + fVar340 * fVar223 +
                          fVar210 * fVar272 + fVar116 * fVar224 + fVar211 * fVar273 +
                          fVar117 * fVar225 + fVar219 * fVar274;
                fVar326 = fVar326 + fVar111 + fVar220 * fVar271 + fVar120 * fVar223 +
                          fVar221 * fVar272 + fVar266 * fVar224 + fVar222 * fVar273 +
                          fVar279 * fVar225 + fVar254 * fVar274;
                fVar327 = fVar327 + fVar82 + fVar255 * fVar271 + fVar207 * fVar223 +
                          fVar256 * fVar272 + fVar218 * fVar224 + fVar257 * fVar273 +
                          fVar229 * fVar225 + fVar267 * fVar274;
                fVar328 = fVar328 + fVar92 + fVar268 * fVar271 + fVar123 * fVar223 +
                          fVar269 * fVar272 + fVar124 * fVar224 + fVar270 * fVar273 +
                          fVar125 * fVar225 + fVar179 * fVar274;
                fVar329 = fVar329 + fVar102 + fVar193 * fVar271 + fVar127 * fVar223 +
                          fVar194 * fVar272 + fVar128 * fVar224 + fVar195 * fVar273 +
                          fVar129 * fVar225 + fVar204 * fVar274;
                fVar330 = fVar330 + fVar112 + fVar205 * fVar271 + fVar131 * fVar223 +
                          fVar206 * fVar272 + fVar132 * fVar224 + fVar215 * fVar273 +
                          fVar133 * fVar225 + fVar216 * fVar274;
                fVar331 = fVar331 + fVar83 + fVar217 * fVar271 + fVar136 * fVar223 +
                          fVar226 * fVar272 + fVar137 * fVar224 + fVar227 * fVar273 +
                          fVar138 * fVar225 + fVar228 * fVar274;
                fVar332 = fVar332 + fVar93 + fVar238 * fVar271 + fVar140 * fVar223 +
                          fVar239 * fVar272 + fVar141 * fVar224 + fVar240 * fVar273 +
                          fVar142 * fVar225 + fVar241 * fVar274;
                fVar333 = fVar333 + fVar103 + fVar250 * fVar271 + fVar144 * fVar223 +
                          fVar251 * fVar272 + fVar145 * fVar224 + fVar252 * fVar273 +
                          fVar146 * fVar225 + fVar253 * fVar274;
                fVar335 = fVar335 + fVar113 + fVar262 * fVar271 + fVar148 * fVar223 +
                          fVar263 * fVar272 + fVar149 * fVar224 + fVar264 * fVar273 +
                          fVar150 * fVar225 + fVar265 * fVar274;
                fVar337 = fVar337 + fVar84 + fVar275 * fVar271 + fVar153 * fVar223 +
                          fVar276 * fVar272 + fVar154 * fVar224 + fVar277 * fVar273 +
                          fVar155 * fVar225 + fVar135 * fVar274;
                fVar338 = fVar338 + fVar94 + fVar278 * fVar271 + fVar157 * fVar223 +
                          fVar180 * fVar272 + fVar158 * fVar224 + fVar181 * fVar273 +
                          fVar159 * fVar225 + fVar139 * fVar274;
                fVar339 = fVar339 + fVar104 + fVar182 * fVar271 + fVar161 * fVar223 +
                          fVar183 * fVar272 + fVar162 * fVar224 + fVar184 * fVar273 +
                          fVar163 * fVar225 + fVar143 * fVar274;
                fVar341 = fVar341 + fVar114 + fVar185 * fVar271 + fVar165 * fVar223 +
                          fVar186 * fVar272 + fVar166 * fVar224 + fVar187 * fVar273 +
                          fVar167 * fVar225 + fVar147 * fVar274;
                lVar2 = lVar62 + -1;
                bVar1 = 0 < lVar62;
                lVar62 = lVar2;
                pfVar68 = pfVar69;
                pfVar70 = pfVar74;
              } while (lVar2 != 0 && bVar1);
            }
            fVar77 = (float)uVar115;
            fVar83 = (float)((ulong)uVar115 >> 0x20);
            fVar88 = (float)uVar118;
            fVar100 = (float)((ulong)uVar118 >> 0x20);
            fVar116 = (float)uVar121;
            fVar108 = (float)((ulong)uVar121 >> 0x20);
            fVar112 = (float)uVar134;
            fVar309 = (float)((ulong)uVar134 >> 0x20);
            fVar266 = (float)uVar151;
            fVar334 = (float)((ulong)uVar151 >> 0x20);
            fVar340 = (float)uVar168;
            fVar123 = (float)((ulong)uVar168 >> 0x20);
            fVar127 = (float)uVar177;
            fVar131 = (float)((ulong)uVar177 >> 0x20);
            fVar136 = (float)uVar178;
            fVar140 = (float)((ulong)uVar178 >> 0x20);
            fVar238 = *pfVar69;
            fVar250 = pfVar69[1];
            fVar262 = pfVar69[2];
            fVar275 = pfVar69[3];
            Hint_Prefetch(pfVar74 + 0x298,0,0,0);
            Hint_Prefetch(pfVar74 + 0x288,0,0,0);
            fVar85 = (float)*(undefined8 *)pfVar74;
            fVar107 = (float)((ulong)*(undefined8 *)pfVar74 >> 0x20);
            fVar147 = (float)*(undefined8 *)(pfVar74 + 2);
            fVar152 = (float)((ulong)*(undefined8 *)(pfVar74 + 2) >> 0x20);
            fVar156 = (float)*(undefined8 *)(pfVar74 + 4);
            fVar159 = (float)((ulong)*(undefined8 *)(pfVar74 + 4) >> 0x20);
            fVar162 = (float)*(undefined8 *)(pfVar74 + 6);
            fVar165 = (float)((ulong)*(undefined8 *)(pfVar74 + 6) >> 0x20);
            fVar169 = (float)*(undefined8 *)(pfVar74 + 8);
            fVar172 = (float)((ulong)*(undefined8 *)(pfVar74 + 8) >> 0x20);
            fVar175 = (float)*(undefined8 *)(pfVar74 + 10);
            fVar210 = (float)((ulong)*(undefined8 *)(pfVar74 + 10) >> 0x20);
            fVar220 = (float)*(undefined8 *)(pfVar74 + 0xc);
            fVar254 = (float)((ulong)*(undefined8 *)(pfVar74 + 0xc) >> 0x20);
            fVar257 = (float)*(undefined8 *)(pfVar74 + 0xe);
            fVar269 = (float)((ulong)*(undefined8 *)(pfVar74 + 0xe) >> 0x20);
            fVar193 = pfVar69[4];
            fVar204 = pfVar69[5];
            fVar215 = pfVar69[6];
            fVar226 = pfVar69[7];
            Hint_Prefetch(pfVar69 + 0x40,0,0,0);
            fVar78 = (float)*(undefined8 *)(pfVar74 + 0x10);
            fVar84 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x10) >> 0x20);
            fVar89 = (float)*(undefined8 *)(pfVar74 + 0x12);
            fVar101 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x12) >> 0x20);
            fVar117 = (float)*(undefined8 *)(pfVar74 + 0x14);
            fVar109 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x14) >> 0x20);
            fVar113 = (float)*(undefined8 *)(pfVar74 + 0x16);
            fVar310 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x16) >> 0x20);
            fVar279 = (float)*(undefined8 *)(pfVar74 + 0x18);
            fVar336 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x18) >> 0x20);
            fVar218 = (float)*(undefined8 *)(pfVar74 + 0x1a);
            fVar124 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x1a) >> 0x20);
            fVar128 = (float)*(undefined8 *)(pfVar74 + 0x1c);
            fVar132 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x1c) >> 0x20);
            fVar137 = (float)*(undefined8 *)(pfVar74 + 0x1e);
            fVar141 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x1e) >> 0x20);
            fVar239 = pfVar69[8];
            fVar251 = pfVar69[9];
            fVar263 = pfVar69[10];
            fVar276 = pfVar69[0xb];
            Hint_Prefetch(pfVar74 + 0x2b8,0,0,0);
            Hint_Prefetch(pfVar74 + 0x2a8,0,0,0);
            fVar104 = (float)*(undefined8 *)(pfVar74 + 0x20);
            fVar144 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x20) >> 0x20);
            fVar148 = (float)*(undefined8 *)(pfVar74 + 0x22);
            fVar153 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x22) >> 0x20);
            fVar157 = (float)*(undefined8 *)(pfVar74 + 0x24);
            fVar160 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x24) >> 0x20);
            fVar163 = (float)*(undefined8 *)(pfVar74 + 0x26);
            fVar166 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x26) >> 0x20);
            fVar170 = (float)*(undefined8 *)(pfVar74 + 0x28);
            fVar173 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x28) >> 0x20);
            fVar176 = (float)*(undefined8 *)(pfVar74 + 0x2a);
            fVar211 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x2a) >> 0x20);
            fVar221 = (float)*(undefined8 *)(pfVar74 + 0x2c);
            fVar255 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x2c) >> 0x20);
            fVar267 = (float)*(undefined8 *)(pfVar74 + 0x2e);
            fVar270 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x2e) >> 0x20);
            fVar194 = pfVar69[0xc];
            fVar205 = pfVar69[0xd];
            fVar216 = pfVar69[0xe];
            fVar227 = pfVar69[0xf];
            Hint_Prefetch(pfVar69 + 0x48,0,0,0);
            fVar81 = (float)*(undefined8 *)(pfVar74 + 0x30);
            fVar86 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x30) >> 0x20);
            fVar98 = (float)*(undefined8 *)(pfVar74 + 0x32);
            fVar102 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x32) >> 0x20);
            fVar119 = (float)*(undefined8 *)(pfVar74 + 0x34);
            fVar110 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x34) >> 0x20);
            fVar114 = (float)*(undefined8 *)(pfVar74 + 0x36);
            fVar315 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x36) >> 0x20);
            fVar196 = (float)*(undefined8 *)(pfVar74 + 0x38);
            fVar321 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x38) >> 0x20);
            fVar229 = (float)*(undefined8 *)(pfVar74 + 0x3a);
            fVar125 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x3a) >> 0x20);
            fVar129 = (float)*(undefined8 *)(pfVar74 + 0x3c);
            fVar133 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x3c) >> 0x20);
            fVar138 = (float)*(undefined8 *)(pfVar74 + 0x3e);
            fVar142 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x3e) >> 0x20);
            fVar240 = pfVar69[0x10];
            fVar252 = pfVar69[0x11];
            fVar264 = pfVar69[0x12];
            fVar277 = pfVar69[0x13];
            Hint_Prefetch(pfVar74 + 0x2d8,0,0,0);
            Hint_Prefetch(pfVar74 + 0x2c8,0,0,0);
            fVar105 = (float)*(undefined8 *)(pfVar74 + 0x40);
            fVar145 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x40) >> 0x20);
            fVar149 = (float)*(undefined8 *)(pfVar74 + 0x42);
            fVar154 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x42) >> 0x20);
            fVar158 = (float)*(undefined8 *)(pfVar74 + 0x44);
            fVar161 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x44) >> 0x20);
            fVar164 = (float)*(undefined8 *)(pfVar74 + 0x46);
            fVar167 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x46) >> 0x20);
            fVar171 = (float)*(undefined8 *)(pfVar74 + 0x48);
            fVar174 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x48) >> 0x20);
            fVar209 = (float)*(undefined8 *)(pfVar74 + 0x4a);
            fVar219 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x4a) >> 0x20);
            fVar222 = (float)*(undefined8 *)(pfVar74 + 0x4c);
            fVar256 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x4c) >> 0x20);
            fVar268 = (float)*(undefined8 *)(pfVar74 + 0x4e);
            fVar179 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x4e) >> 0x20);
            fVar195 = pfVar69[0x14];
            fVar206 = pfVar69[0x15];
            fVar217 = pfVar69[0x16];
            fVar228 = pfVar69[0x17];
            Hint_Prefetch(pfVar69 + 0x50,0,0,0);
            fVar82 = (float)*(undefined8 *)(pfVar74 + 0x50);
            fVar87 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x50) >> 0x20);
            fVar99 = (float)*(undefined8 *)(pfVar74 + 0x52);
            fVar103 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x52) >> 0x20);
            fVar120 = (float)*(undefined8 *)(pfVar74 + 0x54);
            fVar111 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x54) >> 0x20);
            fVar296 = (float)*(undefined8 *)(pfVar74 + 0x56);
            fVar317 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x56) >> 0x20);
            fVar207 = (float)*(undefined8 *)(pfVar74 + 0x58);
            fVar322 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x58) >> 0x20);
            fVar122 = (float)*(undefined8 *)(pfVar74 + 0x5a);
            fVar126 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x5a) >> 0x20);
            fVar130 = (float)*(undefined8 *)(pfVar74 + 0x5c);
            fVar135 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x5c) >> 0x20);
            fVar139 = (float)*(undefined8 *)(pfVar74 + 0x5e);
            fVar143 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x5e) >> 0x20);
            fVar241 = pfVar69[0x18];
            fVar253 = pfVar69[0x19];
            fVar265 = pfVar69[0x1a];
            fVar278 = pfVar69[0x1b];
            Hint_Prefetch(pfVar74 + 0x2f8,0,0,0);
            Hint_Prefetch(pfVar74 + 0x2e8,0,0,0);
            fVar106 = (float)*(undefined8 *)(pfVar74 + 0x60);
            fVar146 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x60) >> 0x20);
            fVar150 = (float)*(undefined8 *)(pfVar74 + 0x62);
            fVar155 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x62) >> 0x20);
            fVar90 = fVar280 + fVar77 * fVar188 + fVar85 * fVar238 + fVar78 * fVar193 +
                     fVar104 * fVar239 + fVar81 * fVar194 + fVar105 * fVar240 + fVar82 * fVar195 +
                     fVar106 * fVar241;
            fVar91 = fVar282 + fVar83 * fVar188 + fVar107 * fVar238 + fVar84 * fVar193 +
                     fVar144 * fVar239 + fVar86 * fVar194 + fVar145 * fVar240 + fVar87 * fVar195 +
                     fVar146 * fVar241;
            fVar92 = fVar283 + fVar88 * fVar188 + fVar147 * fVar238 + fVar89 * fVar193 +
                     fVar148 * fVar239 + fVar98 * fVar194 + fVar149 * fVar240 + fVar99 * fVar195 +
                     fVar150 * fVar241;
            fVar93 = fVar284 + fVar100 * fVar188 + fVar152 * fVar238 + fVar101 * fVar193 +
                     fVar153 * fVar239 + fVar102 * fVar194 + fVar154 * fVar240 + fVar103 * fVar195 +
                     fVar155 * fVar241;
            fVar75 = fVar231 + fVar77 * fVar189 + fVar85 * fVar250 + fVar78 * fVar204 +
                     fVar104 * fVar251 + fVar81 * fVar205 + fVar105 * fVar252 + fVar82 * fVar206 +
                     fVar106 * fVar253;
            fVar76 = fVar232 + fVar83 * fVar189 + fVar107 * fVar250 + fVar84 * fVar204 +
                     fVar144 * fVar251 + fVar86 * fVar205 + fVar145 * fVar252 + fVar87 * fVar206 +
                     fVar146 * fVar253;
            fVar94 = fVar233 + fVar88 * fVar189 + fVar147 * fVar250 + fVar89 * fVar204 +
                     fVar148 * fVar251 + fVar98 * fVar205 + fVar149 * fVar252 + fVar99 * fVar206 +
                     fVar150 * fVar253;
            fVar95 = fVar297 + fVar100 * fVar189 + fVar152 * fVar250 + fVar101 * fVar204 +
                     fVar153 * fVar251 + fVar102 * fVar205 + fVar154 * fVar252 + fVar103 * fVar206 +
                     fVar155 * fVar253;
            fVar79 = fVar198 + fVar77 * fVar190 + fVar85 * fVar262 + fVar78 * fVar215 +
                     fVar104 * fVar263 + fVar81 * fVar216 + fVar105 * fVar264 + fVar82 * fVar217 +
                     fVar106 * fVar265;
            fVar80 = fVar199 + fVar83 * fVar190 + fVar107 * fVar262 + fVar84 * fVar215 +
                     fVar144 * fVar263 + fVar86 * fVar216 + fVar145 * fVar264 + fVar87 * fVar217 +
                     fVar146 * fVar265;
            fVar96 = fVar200 + fVar88 * fVar190 + fVar147 * fVar262 + fVar89 * fVar215 +
                     fVar148 * fVar263 + fVar98 * fVar216 + fVar149 * fVar264 + fVar99 * fVar217 +
                     fVar150 * fVar265;
            fVar97 = fVar242 + fVar100 * fVar190 + fVar152 * fVar262 + fVar101 * fVar215 +
                     fVar153 * fVar263 + fVar102 * fVar216 + fVar154 * fVar264 + fVar103 * fVar217 +
                     fVar155 * fVar265;
            fVar85 = fVar323 + fVar77 * fVar191 + fVar85 * fVar275 + fVar78 * fVar226 +
                     fVar104 * fVar276 + fVar81 * fVar227 + fVar105 * fVar277 + fVar82 * fVar228 +
                     fVar106 * fVar278;
            fVar86 = fVar324 + fVar83 * fVar191 + fVar107 * fVar275 + fVar84 * fVar226 +
                     fVar144 * fVar276 + fVar86 * fVar227 + fVar145 * fVar277 + fVar87 * fVar228 +
                     fVar146 * fVar278;
            fVar98 = fVar325 + fVar88 * fVar191 + fVar147 * fVar275 + fVar89 * fVar226 +
                     fVar148 * fVar276 + fVar98 * fVar227 + fVar149 * fVar277 + fVar99 * fVar228 +
                     fVar150 * fVar278;
            fVar99 = fVar326 + fVar100 * fVar191 + fVar152 * fVar275 + fVar101 * fVar226 +
                     fVar153 * fVar276 + fVar102 * fVar227 + fVar154 * fVar277 + fVar103 * fVar228 +
                     fVar155 * fVar278;
            fVar144 = (float)*(undefined8 *)(pfVar74 + 100);
            fVar323 = (float)((ulong)*(undefined8 *)(pfVar74 + 100) >> 0x20);
            fVar324 = (float)*(undefined8 *)(pfVar74 + 0x66);
            fVar325 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x66) >> 0x20);
            fVar100 = fVar285 + fVar116 * fVar188 + fVar156 * fVar238 + fVar117 * fVar193 +
                      fVar157 * fVar239 + fVar119 * fVar194 + fVar158 * fVar240 + fVar120 * fVar195
                      + fVar144 * fVar241;
            fVar101 = fVar286 + fVar108 * fVar188 + fVar159 * fVar238 + fVar109 * fVar193 +
                      fVar160 * fVar239 + fVar110 * fVar194 + fVar161 * fVar240 + fVar111 * fVar195
                      + fVar323 * fVar241;
            fVar102 = fVar287 + fVar112 * fVar188 + fVar162 * fVar238 + fVar113 * fVar193 +
                      fVar163 * fVar239 + fVar114 * fVar194 + fVar164 * fVar240 + fVar296 * fVar195
                      + fVar324 * fVar241;
            fVar103 = fVar288 + fVar309 * fVar188 + fVar165 * fVar238 + fVar310 * fVar193 +
                      fVar166 * fVar239 + fVar315 * fVar194 + fVar167 * fVar240 + fVar317 * fVar195
                      + fVar325 * fVar241;
            fVar77 = fVar298 + fVar116 * fVar189 + fVar156 * fVar250 + fVar117 * fVar204 +
                     fVar157 * fVar251 + fVar119 * fVar205 + fVar158 * fVar252 + fVar120 * fVar206 +
                     fVar144 * fVar253;
            fVar78 = fVar299 + fVar108 * fVar189 + fVar159 * fVar250 + fVar109 * fVar204 +
                     fVar160 * fVar251 + fVar110 * fVar205 + fVar161 * fVar252 + fVar111 * fVar206 +
                     fVar323 * fVar253;
            fVar104 = fVar300 + fVar112 * fVar189 + fVar162 * fVar250 + fVar113 * fVar204 +
                      fVar163 * fVar251 + fVar114 * fVar205 + fVar164 * fVar252 + fVar296 * fVar206
                      + fVar324 * fVar253;
            fVar105 = fVar301 + fVar309 * fVar189 + fVar165 * fVar250 + fVar310 * fVar204 +
                      fVar166 * fVar251 + fVar315 * fVar205 + fVar167 * fVar252 + fVar317 * fVar206
                      + fVar325 * fVar253;
            fVar81 = fVar243 + fVar116 * fVar190 + fVar156 * fVar262 + fVar117 * fVar215 +
                     fVar157 * fVar263 + fVar119 * fVar216 + fVar158 * fVar264 + fVar120 * fVar217 +
                     fVar144 * fVar265;
            fVar82 = fVar244 + fVar108 * fVar190 + fVar159 * fVar262 + fVar109 * fVar215 +
                     fVar160 * fVar263 + fVar110 * fVar216 + fVar161 * fVar264 + fVar111 * fVar217 +
                     fVar323 * fVar265;
            fVar106 = fVar245 + fVar112 * fVar190 + fVar162 * fVar262 + fVar113 * fVar215 +
                      fVar163 * fVar263 + fVar114 * fVar216 + fVar164 * fVar264 + fVar296 * fVar217
                      + fVar324 * fVar265;
            fVar107 = fVar311 + fVar309 * fVar190 + fVar165 * fVar262 + fVar310 * fVar215 +
                      fVar166 * fVar263 + fVar315 * fVar216 + fVar167 * fVar264 + fVar317 * fVar217
                      + fVar325 * fVar265;
            fVar87 = fVar328 + fVar108 * fVar191 + fVar159 * fVar275 + fVar109 * fVar226 +
                     fVar160 * fVar276 + fVar110 * fVar227 + fVar161 * fVar277 + fVar111 * fVar228 +
                     fVar323 * fVar278;
            fVar108 = fVar329 + fVar112 * fVar191 + fVar162 * fVar275 + fVar113 * fVar226 +
                      fVar163 * fVar276 + fVar114 * fVar227 + fVar164 * fVar277 + fVar296 * fVar228
                      + fVar324 * fVar278;
            fVar109 = fVar330 + fVar309 * fVar191 + fVar165 * fVar275 + fVar310 * fVar226 +
                      fVar166 * fVar276 + fVar315 * fVar227 + fVar167 * fVar277 + fVar317 * fVar228
                      + fVar325 * fVar278;
            Hint_Prefetch(pfVar69 + 0x54,0,0,0);
            fVar145 = (float)*(undefined8 *)(pfVar74 + 0x68);
            fVar325 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x68) >> 0x20);
            fVar326 = (float)*(undefined8 *)(pfVar74 + 0x6a);
            fVar330 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x6a) >> 0x20);
            fVar323 = fVar289 + fVar266 * fVar188 + fVar169 * fVar238 + fVar279 * fVar193 +
                      fVar170 * fVar239 + fVar196 * fVar194 + fVar171 * fVar240 + fVar207 * fVar195
                      + fVar145 * fVar241;
            fVar324 = fVar290 + fVar334 * fVar188 + fVar172 * fVar238 + fVar336 * fVar193 +
                      fVar173 * fVar239 + fVar321 * fVar194 + fVar174 * fVar240 + fVar322 * fVar195
                      + fVar325 * fVar241;
            fVar110 = fVar291 + fVar340 * fVar188 + fVar175 * fVar238 + fVar218 * fVar193 +
                      fVar176 * fVar239 + fVar229 * fVar194 + fVar209 * fVar240 + fVar122 * fVar195
                      + fVar326 * fVar241;
            fVar111 = fVar292 + fVar123 * fVar188 + fVar210 * fVar238 + fVar124 * fVar193 +
                      fVar211 * fVar239 + fVar125 * fVar194 + fVar219 * fVar240 + fVar126 * fVar195
                      + fVar330 * fVar241;
            fVar328 = fVar302 + fVar266 * fVar189 + fVar169 * fVar250 + fVar279 * fVar204 +
                      fVar170 * fVar251 + fVar196 * fVar205 + fVar171 * fVar252 + fVar207 * fVar206
                      + fVar145 * fVar253;
            fVar329 = fVar303 + fVar334 * fVar189 + fVar172 * fVar250 + fVar336 * fVar204 +
                      fVar173 * fVar251 + fVar321 * fVar205 + fVar174 * fVar252 + fVar322 * fVar206
                      + fVar325 * fVar253;
            fVar112 = fVar304 + fVar340 * fVar189 + fVar175 * fVar250 + fVar218 * fVar204 +
                      fVar176 * fVar251 + fVar229 * fVar205 + fVar209 * fVar252 + fVar122 * fVar206
                      + fVar326 * fVar253;
            fVar113 = fVar305 + fVar123 * fVar189 + fVar210 * fVar250 + fVar124 * fVar204 +
                      fVar211 * fVar251 + fVar125 * fVar205 + fVar219 * fVar252 + fVar126 * fVar206
                      + fVar330 * fVar253;
            fVar83 = fVar312 + fVar266 * fVar190 + fVar169 * fVar262 + fVar279 * fVar215 +
                     fVar170 * fVar263 + fVar196 * fVar216 + fVar171 * fVar264 + fVar207 * fVar217 +
                     fVar145 * fVar265;
            fVar84 = fVar313 + fVar334 * fVar190 + fVar172 * fVar262 + fVar336 * fVar215 +
                     fVar173 * fVar263 + fVar321 * fVar216 + fVar174 * fVar264 + fVar322 * fVar217 +
                     fVar325 * fVar265;
            fVar315 = fVar314 + fVar340 * fVar190 + fVar175 * fVar262 + fVar218 * fVar215 +
                      fVar176 * fVar263 + fVar229 * fVar216 + fVar209 * fVar264 + fVar122 * fVar217
                      + fVar326 * fVar265;
            fVar317 = fVar316 + fVar123 * fVar190 + fVar210 * fVar262 + fVar124 * fVar215 +
                      fVar211 * fVar263 + fVar125 * fVar216 + fVar219 * fVar264 + fVar126 * fVar217
                      + fVar330 * fVar265;
            fVar88 = fVar332 + fVar334 * fVar191 + fVar172 * fVar275 + fVar336 * fVar226 +
                     fVar173 * fVar276 + fVar321 * fVar227 + fVar174 * fVar277 + fVar322 * fVar228 +
                     fVar325 * fVar278;
            fVar334 = fVar333 + fVar340 * fVar191 + fVar175 * fVar275 + fVar218 * fVar226 +
                      fVar176 * fVar276 + fVar229 * fVar227 + fVar209 * fVar277 + fVar122 * fVar228
                      + fVar326 * fVar278;
            fVar336 = fVar335 + fVar123 * fVar191 + fVar210 * fVar275 + fVar124 * fVar226 +
                      fVar211 * fVar276 + fVar125 * fVar227 + fVar219 * fVar277 + fVar126 * fVar228
                      + fVar330 * fVar278;
            fVar218 = (float)*(undefined8 *)(pfVar74 + 0x6c);
            fVar330 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x6c) >> 0x20);
            fVar333 = (float)*(undefined8 *)(pfVar74 + 0x6e);
            fVar229 = (float)((ulong)*(undefined8 *)(pfVar74 + 0x6e) >> 0x20);
            fVar325 = fVar293 + fVar127 * fVar188 + fVar220 * fVar238 + fVar128 * fVar193 +
                      fVar221 * fVar239 + fVar129 * fVar194 + fVar222 * fVar240 + fVar130 * fVar195
                      + fVar218 * fVar241;
            fVar326 = fVar294 + fVar131 * fVar188 + fVar254 * fVar238 + fVar132 * fVar193 +
                      fVar255 * fVar239 + fVar133 * fVar194 + fVar256 * fVar240 + fVar135 * fVar195
                      + fVar330 * fVar241;
            fVar114 = fVar295 + fVar136 * fVar188 + fVar257 * fVar238 + fVar137 * fVar193 +
                      fVar267 * fVar239 + fVar138 * fVar194 + fVar268 * fVar240 + fVar139 * fVar195
                      + fVar333 * fVar241;
            fVar296 = fVar230 + fVar140 * fVar188 + fVar269 * fVar238 + fVar141 * fVar193 +
                      fVar270 * fVar239 + fVar142 * fVar194 + fVar179 * fVar240 + fVar143 * fVar195
                      + fVar229 * fVar241;
            fVar332 = fVar307 + fVar131 * fVar189 + fVar254 * fVar250 + fVar132 * fVar204 +
                      fVar255 * fVar251 + fVar133 * fVar205 + fVar256 * fVar252 + fVar135 * fVar206
                      + fVar330 * fVar253;
            fVar309 = fVar308 + fVar136 * fVar189 + fVar257 * fVar250 + fVar137 * fVar204 +
                      fVar267 * fVar251 + fVar138 * fVar205 + fVar268 * fVar252 + fVar139 * fVar206
                      + fVar333 * fVar253;
            fVar310 = fVar197 + fVar140 * fVar189 + fVar269 * fVar250 + fVar141 * fVar204 +
                      fVar270 * fVar251 + fVar142 * fVar205 + fVar179 * fVar252 + fVar143 * fVar206
                      + fVar229 * fVar253;
            fVar335 = fVar319 + fVar131 * fVar190 + fVar254 * fVar262 + fVar132 * fVar215 +
                      fVar255 * fVar263 + fVar133 * fVar216 + fVar256 * fVar264 + fVar135 * fVar217
                      + fVar330 * fVar265;
            fVar321 = fVar320 + fVar136 * fVar190 + fVar257 * fVar262 + fVar137 * fVar215 +
                      fVar267 * fVar263 + fVar138 * fVar216 + fVar268 * fVar264 + fVar139 * fVar217
                      + fVar333 * fVar265;
            fVar322 = fVar208 + fVar140 * fVar190 + fVar269 * fVar262 + fVar141 * fVar215 +
                      fVar270 * fVar263 + fVar142 * fVar216 + fVar179 * fVar264 + fVar143 * fVar217
                      + fVar229 * fVar265;
            fVar89 = fVar338 + fVar131 * fVar191 + fVar254 * fVar275 + fVar132 * fVar226 +
                     fVar255 * fVar276 + fVar133 * fVar227 + fVar256 * fVar277 + fVar135 * fVar228 +
                     fVar330 * fVar278;
            fVar340 = fVar339 + fVar136 * fVar191 + fVar257 * fVar275 + fVar137 * fVar226 +
                      fVar267 * fVar276 + fVar138 * fVar227 + fVar268 * fVar277 + fVar139 * fVar228
                      + fVar333 * fVar278;
            fVar341 = fVar341 + fVar140 * fVar191 + fVar269 * fVar275 + fVar141 * fVar226 +
                      fVar270 * fVar276 + fVar142 * fVar227 + fVar179 * fVar277 + fVar143 * fVar228
                      + fVar229 * fVar278;
            pfVar70 = pfVar69 + 0x1c;
            pfVar68 = pfVar74 + 0x70;
            fVar330 = fVar306 + fVar127 * fVar189 + fVar220 * fVar250 + fVar128 * fVar204 +
                      fVar221 * fVar251 + fVar129 * fVar205 + fVar222 * fVar252 + fVar130 * fVar206
                      + fVar218 * fVar253;
            fVar333 = fVar318 + fVar127 * fVar190 + fVar220 * fVar262 + fVar128 * fVar215 +
                      fVar221 * fVar263 + fVar129 * fVar216 + fVar222 * fVar264 + fVar130 * fVar217
                      + fVar218 * fVar265;
            fVar338 = fVar327 + fVar116 * fVar191 + fVar156 * fVar275 + fVar117 * fVar226 +
                      fVar157 * fVar276 + fVar119 * fVar227 + fVar158 * fVar277 + fVar120 * fVar228
                      + fVar144 * fVar278;
            fVar331 = fVar331 + fVar266 * fVar191 + fVar169 * fVar275 + fVar279 * fVar226 +
                      fVar170 * fVar276 + fVar196 * fVar227 + fVar171 * fVar277 + fVar207 * fVar228
                      + fVar145 * fVar278;
            fVar337 = fVar337 + fVar127 * fVar191 + fVar220 * fVar275 + fVar128 * fVar226 +
                      fVar221 * fVar276 + fVar129 * fVar227 + fVar222 * fVar277 + fVar130 * fVar228
                      + fVar218 * fVar278;
          }
          for (uVar64 = param_4 & 7; uVar64 != 0; uVar64 = uVar64 - 1) {
            fVar196 = *pfVar70;
            fVar207 = pfVar70[1];
            fVar327 = (float)*(undefined8 *)pfVar68;
            fVar339 = (float)((ulong)*(undefined8 *)pfVar68 >> 0x20);
            fVar116 = (float)*(undefined8 *)(pfVar68 + 2);
            fVar117 = (float)((ulong)*(undefined8 *)(pfVar68 + 2) >> 0x20);
            fVar90 = fVar90 + fVar327 * fVar196;
            fVar91 = fVar91 + fVar339 * fVar196;
            fVar92 = fVar92 + fVar116 * fVar196;
            fVar93 = fVar93 + fVar117 * fVar196;
            fVar75 = fVar75 + fVar327 * fVar207;
            fVar76 = fVar76 + fVar339 * fVar207;
            fVar94 = fVar94 + fVar116 * fVar207;
            fVar95 = fVar95 + fVar117 * fVar207;
            fVar218 = pfVar70[2];
            fVar229 = pfVar70[3];
            fVar79 = fVar79 + fVar327 * fVar218;
            fVar80 = fVar80 + fVar339 * fVar218;
            fVar96 = fVar96 + fVar116 * fVar218;
            fVar97 = fVar97 + fVar117 * fVar218;
            fVar85 = fVar85 + fVar327 * fVar229;
            fVar86 = fVar86 + fVar339 * fVar229;
            fVar98 = fVar98 + fVar116 * fVar229;
            fVar99 = fVar99 + fVar117 * fVar229;
            fVar327 = (float)*(undefined8 *)(pfVar68 + 4);
            fVar339 = (float)((ulong)*(undefined8 *)(pfVar68 + 4) >> 0x20);
            fVar116 = (float)*(undefined8 *)(pfVar68 + 6);
            fVar117 = (float)((ulong)*(undefined8 *)(pfVar68 + 6) >> 0x20);
            fVar100 = fVar100 + fVar327 * fVar196;
            fVar101 = fVar101 + fVar339 * fVar196;
            fVar102 = fVar102 + fVar116 * fVar196;
            fVar103 = fVar103 + fVar117 * fVar196;
            fVar77 = fVar77 + fVar327 * fVar207;
            fVar78 = fVar78 + fVar339 * fVar207;
            fVar104 = fVar104 + fVar116 * fVar207;
            fVar105 = fVar105 + fVar117 * fVar207;
            fVar81 = fVar81 + fVar327 * fVar218;
            fVar82 = fVar82 + fVar339 * fVar218;
            fVar106 = fVar106 + fVar116 * fVar218;
            fVar107 = fVar107 + fVar117 * fVar218;
            fVar338 = fVar338 + fVar327 * fVar229;
            fVar87 = fVar87 + fVar339 * fVar229;
            fVar108 = fVar108 + fVar116 * fVar229;
            fVar109 = fVar109 + fVar117 * fVar229;
            fVar327 = (float)*(undefined8 *)(pfVar68 + 8);
            fVar339 = (float)((ulong)*(undefined8 *)(pfVar68 + 8) >> 0x20);
            fVar116 = (float)*(undefined8 *)(pfVar68 + 10);
            fVar117 = (float)((ulong)*(undefined8 *)(pfVar68 + 10) >> 0x20);
            fVar323 = fVar323 + fVar327 * fVar196;
            fVar324 = fVar324 + fVar339 * fVar196;
            fVar110 = fVar110 + fVar116 * fVar196;
            fVar111 = fVar111 + fVar117 * fVar196;
            fVar328 = fVar328 + fVar327 * fVar207;
            fVar329 = fVar329 + fVar339 * fVar207;
            fVar112 = fVar112 + fVar116 * fVar207;
            fVar113 = fVar113 + fVar117 * fVar207;
            Hint_Prefetch(pfVar68 + 0x290,0,0,0);
            fVar119 = (float)*(undefined8 *)(pfVar68 + 0xc);
            fVar120 = (float)((ulong)*(undefined8 *)(pfVar68 + 0xc) >> 0x20);
            fVar266 = (float)*(undefined8 *)(pfVar68 + 0xe);
            fVar279 = (float)((ulong)*(undefined8 *)(pfVar68 + 0xe) >> 0x20);
            fVar325 = fVar325 + fVar119 * fVar196;
            fVar326 = fVar326 + fVar120 * fVar196;
            fVar114 = fVar114 + fVar266 * fVar196;
            fVar296 = fVar296 + fVar279 * fVar196;
            fVar330 = fVar330 + fVar119 * fVar207;
            fVar332 = fVar332 + fVar120 * fVar207;
            fVar309 = fVar309 + fVar266 * fVar207;
            fVar310 = fVar310 + fVar279 * fVar207;
            fVar83 = fVar83 + fVar327 * fVar218;
            fVar84 = fVar84 + fVar339 * fVar218;
            fVar315 = fVar315 + fVar116 * fVar218;
            fVar317 = fVar317 + fVar117 * fVar218;
            fVar331 = fVar331 + fVar327 * fVar229;
            fVar88 = fVar88 + fVar339 * fVar229;
            fVar334 = fVar334 + fVar116 * fVar229;
            fVar336 = fVar336 + fVar117 * fVar229;
            Hint_Prefetch(pfVar70 + 0x3c,0,0,0);
            fVar333 = fVar333 + fVar119 * fVar218;
            fVar335 = fVar335 + fVar120 * fVar218;
            fVar321 = fVar321 + fVar266 * fVar218;
            fVar322 = fVar322 + fVar279 * fVar218;
            fVar337 = fVar337 + fVar119 * fVar229;
            fVar89 = fVar89 + fVar120 * fVar229;
            fVar340 = fVar340 + fVar266 * fVar229;
            fVar341 = fVar341 + fVar279 * fVar229;
            pfVar70 = pfVar70 + 4;
            pfVar68 = pfVar68 + 0x10;
          }
          Hint_Prefetch(pfVar68,0,0,0);
          Hint_Prefetch(pfVar68 + 0x10,0,0,0);
          Hint_Prefetch(param_6,0,0,0);
          Hint_Prefetch(pfVar61 + 0x28,0,1,0);
          *(ulong *)(pfVar61 + 2) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar61 + 2) >> 0x20) + fVar93 * param_1,
                        (float)*(undefined8 *)(pfVar61 + 2) + fVar92 * param_1);
          *(ulong *)pfVar61 =
               CONCAT44((float)((ulong)*(undefined8 *)pfVar61 >> 0x20) + fVar91 * param_1,
                        (float)*(undefined8 *)pfVar61 + fVar90 * param_1);
          *(ulong *)(pfVar61 + 6) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar61 + 6) >> 0x20) + fVar103 * param_1,
                        (float)*(undefined8 *)(pfVar61 + 6) + fVar102 * param_1);
          *(ulong *)(pfVar61 + 4) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar61 + 4) >> 0x20) + fVar101 * param_1,
                        (float)*(undefined8 *)(pfVar61 + 4) + fVar100 * param_1);
          uVar115 = *(undefined8 *)(pfVar61 + 8);
          *(ulong *)(pfVar61 + 10) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar61 + 10) >> 0x20) + fVar111 * param_1,
                        (float)*(undefined8 *)(pfVar61 + 10) + fVar110 * param_1);
          *(ulong *)(pfVar61 + 8) =
               CONCAT44((float)((ulong)uVar115 >> 0x20) + fVar324 * param_1,
                        (float)uVar115 + fVar323 * param_1);
          *(ulong *)(pfVar61 + 0xe) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar61 + 0xe) >> 0x20) + fVar296 * param_1,
                        (float)*(undefined8 *)(pfVar61 + 0xe) + fVar114 * param_1);
          *(ulong *)(pfVar61 + 0xc) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar61 + 0xc) >> 0x20) + fVar326 * param_1,
                        (float)*(undefined8 *)(pfVar61 + 0xc) + fVar325 * param_1);
          pfVar61 = pfVar61 + 0x10;
          Hint_Prefetch(pfVar72 + 0x28,0,1,0);
          *(ulong *)(pfVar72 + 2) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar72 + 2) >> 0x20) + fVar95 * param_1,
                        (float)*(undefined8 *)(pfVar72 + 2) + fVar94 * param_1);
          *(ulong *)pfVar72 =
               CONCAT44((float)((ulong)*(undefined8 *)pfVar72 >> 0x20) + fVar76 * param_1,
                        (float)*(undefined8 *)pfVar72 + fVar75 * param_1);
          *(ulong *)(pfVar72 + 6) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar72 + 6) >> 0x20) + fVar105 * param_1,
                        (float)*(undefined8 *)(pfVar72 + 6) + fVar104 * param_1);
          *(ulong *)(pfVar72 + 4) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar72 + 4) >> 0x20) + fVar78 * param_1,
                        (float)*(undefined8 *)(pfVar72 + 4) + fVar77 * param_1);
          uVar115 = *(undefined8 *)(pfVar72 + 8);
          *(ulong *)(pfVar72 + 10) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar72 + 10) >> 0x20) + fVar113 * param_1,
                        (float)*(undefined8 *)(pfVar72 + 10) + fVar112 * param_1);
          *(ulong *)(pfVar72 + 8) =
               CONCAT44((float)((ulong)uVar115 >> 0x20) + fVar329 * param_1,
                        (float)uVar115 + fVar328 * param_1);
          *(ulong *)(pfVar72 + 0xe) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar72 + 0xe) >> 0x20) + fVar310 * param_1,
                        (float)*(undefined8 *)(pfVar72 + 0xe) + fVar309 * param_1);
          *(ulong *)(pfVar72 + 0xc) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar72 + 0xc) >> 0x20) + fVar332 * param_1,
                        (float)*(undefined8 *)(pfVar72 + 0xc) + fVar330 * param_1);
          pfVar72 = pfVar72 + 0x10;
          Hint_Prefetch(pfVar71 + 0x28,0,1,0);
          *(ulong *)(pfVar71 + 2) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar71 + 2) >> 0x20) + fVar97 * param_1,
                        (float)*(undefined8 *)(pfVar71 + 2) + fVar96 * param_1);
          *(ulong *)pfVar71 =
               CONCAT44((float)((ulong)*(undefined8 *)pfVar71 >> 0x20) + fVar80 * param_1,
                        (float)*(undefined8 *)pfVar71 + fVar79 * param_1);
          *(ulong *)(pfVar71 + 6) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar71 + 6) >> 0x20) + fVar107 * param_1,
                        (float)*(undefined8 *)(pfVar71 + 6) + fVar106 * param_1);
          *(ulong *)(pfVar71 + 4) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar71 + 4) >> 0x20) + fVar82 * param_1,
                        (float)*(undefined8 *)(pfVar71 + 4) + fVar81 * param_1);
          uVar115 = *(undefined8 *)(pfVar71 + 8);
          *(ulong *)(pfVar71 + 10) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar71 + 10) >> 0x20) + fVar317 * param_1,
                        (float)*(undefined8 *)(pfVar71 + 10) + fVar315 * param_1);
          *(ulong *)(pfVar71 + 8) =
               CONCAT44((float)((ulong)uVar115 >> 0x20) + fVar84 * param_1,
                        (float)uVar115 + fVar83 * param_1);
          *(ulong *)(pfVar71 + 0xe) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar71 + 0xe) >> 0x20) + fVar322 * param_1,
                        (float)*(undefined8 *)(pfVar71 + 0xe) + fVar321 * param_1);
          *(ulong *)(pfVar71 + 0xc) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar71 + 0xc) >> 0x20) + fVar335 * param_1,
                        (float)*(undefined8 *)(pfVar71 + 0xc) + fVar333 * param_1);
          pfVar71 = pfVar71 + 0x10;
          Hint_Prefetch(pfVar73 + 0x28,0,1,0);
          *(ulong *)(pfVar73 + 2) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar73 + 2) >> 0x20) + fVar99 * param_1,
                        (float)*(undefined8 *)(pfVar73 + 2) + fVar98 * param_1);
          *(ulong *)pfVar73 =
               CONCAT44((float)((ulong)*(undefined8 *)pfVar73 >> 0x20) + fVar86 * param_1,
                        (float)*(undefined8 *)pfVar73 + fVar85 * param_1);
          *(ulong *)(pfVar73 + 6) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar73 + 6) >> 0x20) + fVar109 * param_1,
                        (float)*(undefined8 *)(pfVar73 + 6) + fVar108 * param_1);
          *(ulong *)(pfVar73 + 4) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar73 + 4) >> 0x20) + fVar87 * param_1,
                        (float)*(undefined8 *)(pfVar73 + 4) + fVar338 * param_1);
          uVar115 = *(undefined8 *)(pfVar73 + 8);
          *(ulong *)(pfVar73 + 10) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar73 + 10) >> 0x20) + fVar336 * param_1,
                        (float)*(undefined8 *)(pfVar73 + 10) + fVar334 * param_1);
          *(ulong *)(pfVar73 + 8) =
               CONCAT44((float)((ulong)uVar115 >> 0x20) + fVar88 * param_1,
                        (float)uVar115 + fVar331 * param_1);
          *(ulong *)(pfVar73 + 0xe) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar73 + 0xe) >> 0x20) + fVar341 * param_1,
                        (float)*(undefined8 *)(pfVar73 + 0xe) + fVar340 * param_1);
          *(ulong *)(pfVar73 + 0xc) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar73 + 0xc) >> 0x20) + fVar89 * param_1,
                        (float)*(undefined8 *)(pfVar73 + 0xc) + fVar337 * param_1);
          pfVar73 = pfVar73 + 0x10;
          lVar63 = lVar63 + -1;
        } while (lVar63 != 0);
      }
      if ((param_2 & 0xf) != 0) {
        uVar64 = (long)param_4 >> 1;
        if ((param_2 & 8) != 0) {
          if ((long)uVar64 < 2) {
            if ((uVar64 & 1) == 0) {
              fVar323 = 0.0;
              fVar326 = 0.0;
              fVar75 = 0.0;
              fVar76 = 0.0;
              fVar77 = 0.0;
              fVar78 = 0.0;
              fVar328 = 0.0;
              fVar329 = 0.0;
              fVar330 = 0.0;
              fVar332 = 0.0;
              fVar79 = 0.0;
              fVar80 = 0.0;
              fVar81 = 0.0;
              fVar324 = 0.0;
              fVar82 = 0.0;
              fVar83 = 0.0;
              fVar84 = 0.0;
              fVar333 = 0.0;
              fVar335 = 0.0;
              fVar85 = 0.0;
              fVar86 = 0.0;
              fVar338 = 0.0;
              fVar87 = 0.0;
              fVar331 = 0.0;
              fVar88 = 0.0;
              fVar337 = 0.0;
              fVar89 = 0.0;
              fVar90 = 0.0;
              fVar325 = 0.0;
              fVar91 = 0.0;
              fVar92 = 0.0;
              fVar93 = 0.0;
              pfVar70 = param_6;
              pfVar69 = pfVar68;
            }
            else {
              fVar323 = *param_6;
              fVar84 = param_6[1];
              fVar331 = param_6[2];
              fVar102 = param_6[3];
              fVar325 = (float)*(undefined8 *)pfVar68;
              fVar337 = (float)((ulong)*(undefined8 *)pfVar68 >> 0x20);
              fVar89 = (float)*(undefined8 *)(pfVar68 + 2);
              fVar90 = (float)((ulong)*(undefined8 *)(pfVar68 + 2) >> 0x20);
              fVar91 = (float)*(undefined8 *)(pfVar68 + 4);
              fVar92 = (float)((ulong)*(undefined8 *)(pfVar68 + 4) >> 0x20);
              fVar93 = (float)*(undefined8 *)(pfVar68 + 6);
              fVar94 = (float)((ulong)*(undefined8 *)(pfVar68 + 6) >> 0x20);
              fVar324 = param_6[4];
              fVar333 = param_6[5];
              fVar103 = param_6[6];
              fVar104 = param_6[7];
              fVar88 = (float)*(undefined8 *)(pfVar68 + 8);
              fVar95 = (float)((ulong)*(undefined8 *)(pfVar68 + 8) >> 0x20);
              fVar96 = (float)*(undefined8 *)(pfVar68 + 10);
              fVar97 = (float)((ulong)*(undefined8 *)(pfVar68 + 10) >> 0x20);
              fVar326 = fVar325 * fVar323 + fVar88 * fVar324;
              fVar75 = fVar337 * fVar323 + fVar95 * fVar324;
              fVar76 = fVar89 * fVar323 + fVar96 * fVar324;
              fVar77 = fVar90 * fVar323 + fVar97 * fVar324;
              fVar98 = (float)*(undefined8 *)(pfVar68 + 0xc);
              fVar99 = (float)((ulong)*(undefined8 *)(pfVar68 + 0xc) >> 0x20);
              fVar100 = (float)*(undefined8 *)(pfVar68 + 0xe);
              fVar101 = (float)((ulong)*(undefined8 *)(pfVar68 + 0xe) >> 0x20);
              fVar78 = fVar91 * fVar323 + fVar98 * fVar324;
              fVar328 = fVar92 * fVar323 + fVar99 * fVar324;
              fVar329 = fVar93 * fVar323 + fVar100 * fVar324;
              fVar330 = fVar94 * fVar323 + fVar101 * fVar324;
              fVar332 = fVar325 * fVar84 + fVar88 * fVar333;
              fVar79 = fVar337 * fVar84 + fVar95 * fVar333;
              fVar80 = fVar89 * fVar84 + fVar96 * fVar333;
              fVar81 = fVar90 * fVar84 + fVar97 * fVar333;
              fVar324 = fVar91 * fVar84 + fVar98 * fVar333;
              fVar82 = fVar92 * fVar84 + fVar99 * fVar333;
              fVar83 = fVar93 * fVar84 + fVar100 * fVar333;
              fVar84 = fVar94 * fVar84 + fVar101 * fVar333;
              fVar333 = fVar325 * fVar331 + fVar88 * fVar103;
              fVar335 = fVar337 * fVar331 + fVar95 * fVar103;
              fVar85 = fVar89 * fVar331 + fVar96 * fVar103;
              fVar86 = fVar90 * fVar331 + fVar97 * fVar103;
              fVar323 = fVar91 * fVar331 + fVar98 * fVar103;
              fVar338 = fVar92 * fVar331 + fVar99 * fVar103;
              fVar87 = fVar93 * fVar331 + fVar100 * fVar103;
              fVar331 = fVar94 * fVar331 + fVar101 * fVar103;
              fVar88 = fVar325 * fVar102 + fVar88 * fVar104;
              fVar337 = fVar337 * fVar102 + fVar95 * fVar104;
              fVar89 = fVar89 * fVar102 + fVar96 * fVar104;
              fVar90 = fVar90 * fVar102 + fVar97 * fVar104;
              fVar325 = fVar91 * fVar102 + fVar98 * fVar104;
              fVar91 = fVar92 * fVar102 + fVar99 * fVar104;
              fVar92 = fVar93 * fVar102 + fVar100 * fVar104;
              fVar93 = fVar94 * fVar102 + fVar101 * fVar104;
              pfVar70 = param_6 + 8;
              pfVar69 = pfVar68 + 0x10;
            }
          }
          else {
            fVar83 = *param_6;
            fVar84 = param_6[1];
            fVar333 = param_6[2];
            fVar335 = param_6[3];
            fVar323 = (float)*(undefined8 *)pfVar68;
            fVar324 = (float)((ulong)*(undefined8 *)pfVar68 >> 0x20);
            fVar325 = (float)*(undefined8 *)(pfVar68 + 2);
            fVar326 = (float)((ulong)*(undefined8 *)(pfVar68 + 2) >> 0x20);
            fVar75 = (float)*(undefined8 *)(pfVar68 + 4);
            fVar76 = (float)((ulong)*(undefined8 *)(pfVar68 + 4) >> 0x20);
            fVar77 = (float)*(undefined8 *)(pfVar68 + 6);
            fVar78 = (float)((ulong)*(undefined8 *)(pfVar68 + 6) >> 0x20);
            fVar85 = param_6[4];
            fVar86 = param_6[5];
            fVar338 = param_6[6];
            fVar87 = param_6[7];
            fVar328 = (float)*(undefined8 *)(pfVar68 + 8);
            fVar329 = (float)((ulong)*(undefined8 *)(pfVar68 + 8) >> 0x20);
            fVar330 = (float)*(undefined8 *)(pfVar68 + 10);
            fVar332 = (float)((ulong)*(undefined8 *)(pfVar68 + 10) >> 0x20);
            fVar88 = fVar323 * fVar83 + fVar328 * fVar85;
            fVar337 = fVar324 * fVar83 + fVar329 * fVar85;
            fVar89 = fVar325 * fVar83 + fVar330 * fVar85;
            fVar90 = fVar326 * fVar83 + fVar332 * fVar85;
            fVar79 = (float)*(undefined8 *)(pfVar68 + 0xc);
            fVar80 = (float)((ulong)*(undefined8 *)(pfVar68 + 0xc) >> 0x20);
            fVar81 = (float)*(undefined8 *)(pfVar68 + 0xe);
            fVar82 = (float)((ulong)*(undefined8 *)(pfVar68 + 0xe) >> 0x20);
            fVar91 = fVar75 * fVar83 + fVar79 * fVar85;
            fVar92 = fVar76 * fVar83 + fVar80 * fVar85;
            fVar94 = fVar77 * fVar83 + fVar81 * fVar85;
            fVar83 = fVar78 * fVar83 + fVar82 * fVar85;
            fVar85 = fVar323 * fVar84 + fVar328 * fVar86;
            fVar95 = fVar324 * fVar84 + fVar329 * fVar86;
            fVar96 = fVar325 * fVar84 + fVar330 * fVar86;
            fVar97 = fVar326 * fVar84 + fVar332 * fVar86;
            fVar98 = fVar75 * fVar84 + fVar79 * fVar86;
            fVar99 = fVar76 * fVar84 + fVar80 * fVar86;
            fVar100 = fVar77 * fVar84 + fVar81 * fVar86;
            fVar84 = fVar78 * fVar84 + fVar82 * fVar86;
            fVar86 = fVar323 * fVar333 + fVar328 * fVar338;
            fVar101 = fVar324 * fVar333 + fVar329 * fVar338;
            fVar102 = fVar325 * fVar333 + fVar330 * fVar338;
            fVar103 = fVar326 * fVar333 + fVar332 * fVar338;
            fVar104 = fVar75 * fVar333 + fVar79 * fVar338;
            fVar105 = fVar76 * fVar333 + fVar80 * fVar338;
            fVar106 = fVar77 * fVar333 + fVar81 * fVar338;
            fVar107 = fVar78 * fVar333 + fVar82 * fVar338;
            fVar108 = fVar323 * fVar335 + fVar328 * fVar87;
            fVar109 = fVar324 * fVar335 + fVar329 * fVar87;
            fVar110 = fVar325 * fVar335 + fVar330 * fVar87;
            fVar111 = fVar326 * fVar335 + fVar332 * fVar87;
            fVar112 = fVar75 * fVar335 + fVar79 * fVar87;
            fVar113 = fVar76 * fVar335 + fVar80 * fVar87;
            fVar114 = fVar77 * fVar335 + fVar81 * fVar87;
            fVar296 = fVar78 * fVar335 + fVar82 * fVar87;
            fVar323 = param_6[8];
            fVar325 = param_6[9];
            pfVar69 = param_6 + 0xc;
            fVar331 = param_6[10];
            fVar93 = param_6[0xb];
            uVar118 = *(undefined8 *)(pfVar68 + 0x12);
            uVar115 = *(undefined8 *)(pfVar68 + 0x10);
            pfVar74 = pfVar68 + 0x18;
            uVar134 = *(undefined8 *)(pfVar68 + 0x16);
            uVar121 = *(undefined8 *)(pfVar68 + 0x14);
            lVar63 = uVar64 - 2;
            pfVar68 = pfVar69;
            pfVar70 = pfVar74;
            if (uVar64 - 2 != 0 && 1 < (long)uVar64) {
              do {
                fVar324 = (float)uVar115;
                fVar326 = (float)((ulong)uVar115 >> 0x20);
                fVar75 = (float)uVar118;
                fVar76 = (float)((ulong)uVar118 >> 0x20);
                fVar77 = (float)uVar121;
                fVar78 = (float)((ulong)uVar121 >> 0x20);
                fVar328 = (float)uVar134;
                fVar329 = (float)((ulong)uVar134 >> 0x20);
                fVar338 = *pfVar68;
                fVar87 = pfVar68[1];
                fVar309 = pfVar68[2];
                fVar310 = pfVar68[3];
                fVar330 = (float)*(undefined8 *)pfVar70;
                fVar332 = (float)((ulong)*(undefined8 *)pfVar70 >> 0x20);
                fVar79 = (float)*(undefined8 *)(pfVar70 + 2);
                fVar80 = (float)((ulong)*(undefined8 *)(pfVar70 + 2) >> 0x20);
                fVar88 = fVar88 + fVar324 * fVar323 + fVar330 * fVar338;
                fVar337 = fVar337 + fVar326 * fVar323 + fVar332 * fVar338;
                fVar89 = fVar89 + fVar75 * fVar323 + fVar79 * fVar338;
                fVar90 = fVar90 + fVar76 * fVar323 + fVar80 * fVar338;
                fVar81 = (float)*(undefined8 *)(pfVar70 + 4);
                fVar82 = (float)((ulong)*(undefined8 *)(pfVar70 + 4) >> 0x20);
                fVar333 = (float)*(undefined8 *)(pfVar70 + 6);
                fVar335 = (float)((ulong)*(undefined8 *)(pfVar70 + 6) >> 0x20);
                fVar91 = fVar91 + fVar77 * fVar323 + fVar81 * fVar338;
                fVar92 = fVar92 + fVar78 * fVar323 + fVar82 * fVar338;
                fVar94 = fVar94 + fVar328 * fVar323 + fVar333 * fVar338;
                fVar83 = fVar83 + fVar329 * fVar323 + fVar335 * fVar338;
                fVar85 = fVar85 + fVar324 * fVar325 + fVar330 * fVar87;
                fVar95 = fVar95 + fVar326 * fVar325 + fVar332 * fVar87;
                fVar96 = fVar96 + fVar75 * fVar325 + fVar79 * fVar87;
                fVar97 = fVar97 + fVar76 * fVar325 + fVar80 * fVar87;
                fVar98 = fVar98 + fVar77 * fVar325 + fVar81 * fVar87;
                fVar99 = fVar99 + fVar78 * fVar325 + fVar82 * fVar87;
                fVar100 = fVar100 + fVar328 * fVar325 + fVar333 * fVar87;
                fVar84 = fVar84 + fVar329 * fVar325 + fVar335 * fVar87;
                fVar86 = fVar86 + fVar324 * fVar331 + fVar330 * fVar309;
                fVar101 = fVar101 + fVar326 * fVar331 + fVar332 * fVar309;
                fVar102 = fVar102 + fVar75 * fVar331 + fVar79 * fVar309;
                fVar103 = fVar103 + fVar76 * fVar331 + fVar80 * fVar309;
                fVar104 = fVar104 + fVar77 * fVar331 + fVar81 * fVar309;
                fVar105 = fVar105 + fVar78 * fVar331 + fVar82 * fVar309;
                fVar106 = fVar106 + fVar328 * fVar331 + fVar333 * fVar309;
                fVar107 = fVar107 + fVar329 * fVar331 + fVar335 * fVar309;
                fVar108 = fVar108 + fVar324 * fVar93 + fVar330 * fVar310;
                fVar109 = fVar109 + fVar326 * fVar93 + fVar332 * fVar310;
                fVar110 = fVar110 + fVar75 * fVar93 + fVar79 * fVar310;
                fVar111 = fVar111 + fVar76 * fVar93 + fVar80 * fVar310;
                fVar112 = fVar112 + fVar77 * fVar93 + fVar81 * fVar310;
                fVar113 = fVar113 + fVar78 * fVar93 + fVar82 * fVar310;
                fVar114 = fVar114 + fVar328 * fVar93 + fVar333 * fVar310;
                fVar296 = fVar296 + fVar329 * fVar93 + fVar335 * fVar310;
                fVar323 = pfVar68[4];
                fVar325 = pfVar68[5];
                pfVar69 = pfVar68 + 8;
                fVar331 = pfVar68[6];
                fVar93 = pfVar68[7];
                uVar118 = *(undefined8 *)(pfVar70 + 10);
                uVar115 = *(undefined8 *)(pfVar70 + 8);
                pfVar74 = pfVar70 + 0x10;
                uVar134 = *(undefined8 *)(pfVar70 + 0xe);
                uVar121 = *(undefined8 *)(pfVar70 + 0xc);
                lVar62 = lVar63 + -1;
                bVar1 = 0 < lVar63;
                lVar63 = lVar62;
                pfVar68 = pfVar69;
                pfVar70 = pfVar74;
              } while (lVar62 != 0 && bVar1);
            }
            fVar309 = (float)uVar115;
            fVar310 = (float)((ulong)uVar115 >> 0x20);
            fVar315 = (float)uVar118;
            fVar317 = (float)((ulong)uVar118 >> 0x20);
            fVar334 = (float)uVar121;
            fVar336 = (float)((ulong)uVar121 >> 0x20);
            fVar321 = (float)uVar134;
            fVar322 = (float)((ulong)uVar134 >> 0x20);
            fVar324 = *pfVar69;
            fVar333 = pfVar69[1];
            fVar266 = pfVar69[2];
            fVar279 = pfVar69[3];
            fVar340 = (float)*(undefined8 *)pfVar74;
            fVar341 = (float)((ulong)*(undefined8 *)pfVar74 >> 0x20);
            fVar327 = (float)*(undefined8 *)(pfVar74 + 2);
            fVar339 = (float)((ulong)*(undefined8 *)(pfVar74 + 2) >> 0x20);
            fVar326 = fVar88 + fVar309 * fVar323 + fVar340 * fVar324;
            fVar75 = fVar337 + fVar310 * fVar323 + fVar341 * fVar324;
            fVar76 = fVar89 + fVar315 * fVar323 + fVar327 * fVar324;
            fVar77 = fVar90 + fVar317 * fVar323 + fVar339 * fVar324;
            fVar116 = (float)*(undefined8 *)(pfVar74 + 4);
            fVar117 = (float)((ulong)*(undefined8 *)(pfVar74 + 4) >> 0x20);
            fVar119 = (float)*(undefined8 *)(pfVar74 + 6);
            fVar120 = (float)((ulong)*(undefined8 *)(pfVar74 + 6) >> 0x20);
            fVar78 = fVar91 + fVar334 * fVar323 + fVar116 * fVar324;
            fVar328 = fVar92 + fVar336 * fVar323 + fVar117 * fVar324;
            fVar329 = fVar94 + fVar321 * fVar323 + fVar119 * fVar324;
            fVar330 = fVar83 + fVar322 * fVar323 + fVar120 * fVar324;
            fVar332 = fVar85 + fVar309 * fVar325 + fVar340 * fVar333;
            fVar79 = fVar95 + fVar310 * fVar325 + fVar341 * fVar333;
            fVar80 = fVar96 + fVar315 * fVar325 + fVar327 * fVar333;
            fVar81 = fVar97 + fVar317 * fVar325 + fVar339 * fVar333;
            fVar324 = fVar98 + fVar334 * fVar325 + fVar116 * fVar333;
            fVar82 = fVar99 + fVar336 * fVar325 + fVar117 * fVar333;
            fVar83 = fVar100 + fVar321 * fVar325 + fVar119 * fVar333;
            fVar84 = fVar84 + fVar322 * fVar325 + fVar120 * fVar333;
            fVar333 = fVar86 + fVar309 * fVar331 + fVar340 * fVar266;
            fVar335 = fVar101 + fVar310 * fVar331 + fVar341 * fVar266;
            fVar85 = fVar102 + fVar315 * fVar331 + fVar327 * fVar266;
            fVar86 = fVar103 + fVar317 * fVar331 + fVar339 * fVar266;
            fVar323 = fVar104 + fVar334 * fVar331 + fVar116 * fVar266;
            fVar338 = fVar105 + fVar336 * fVar331 + fVar117 * fVar266;
            fVar87 = fVar106 + fVar321 * fVar331 + fVar119 * fVar266;
            fVar331 = fVar107 + fVar322 * fVar331 + fVar120 * fVar266;
            fVar88 = fVar108 + fVar309 * fVar93 + fVar340 * fVar279;
            fVar337 = fVar109 + fVar310 * fVar93 + fVar341 * fVar279;
            fVar89 = fVar110 + fVar315 * fVar93 + fVar327 * fVar279;
            fVar90 = fVar111 + fVar317 * fVar93 + fVar339 * fVar279;
            fVar325 = fVar112 + fVar334 * fVar93 + fVar116 * fVar279;
            fVar91 = fVar113 + fVar336 * fVar93 + fVar117 * fVar279;
            fVar92 = fVar114 + fVar321 * fVar93 + fVar119 * fVar279;
            fVar93 = fVar296 + fVar322 * fVar93 + fVar120 * fVar279;
            pfVar70 = pfVar69 + 4;
            pfVar69 = pfVar74 + 8;
          }
          pfVar68 = pfVar69;
          if ((param_4 & 1) != 0) {
            fVar102 = *pfVar70;
            fVar103 = pfVar70[1];
            fVar104 = pfVar70[2];
            fVar105 = pfVar70[3];
            pfVar68 = pfVar69 + 8;
            fVar94 = (float)*(undefined8 *)pfVar69;
            fVar95 = (float)((ulong)*(undefined8 *)pfVar69 >> 0x20);
            fVar96 = (float)*(undefined8 *)(pfVar69 + 2);
            fVar97 = (float)((ulong)*(undefined8 *)(pfVar69 + 2) >> 0x20);
            fVar326 = fVar326 + fVar94 * fVar102;
            fVar75 = fVar75 + fVar95 * fVar102;
            fVar76 = fVar76 + fVar96 * fVar102;
            fVar77 = fVar77 + fVar97 * fVar102;
            fVar98 = (float)*(undefined8 *)(pfVar69 + 4);
            fVar99 = (float)((ulong)*(undefined8 *)(pfVar69 + 4) >> 0x20);
            fVar100 = (float)*(undefined8 *)(pfVar69 + 6);
            fVar101 = (float)((ulong)*(undefined8 *)(pfVar69 + 6) >> 0x20);
            fVar78 = fVar78 + fVar98 * fVar102;
            fVar328 = fVar328 + fVar99 * fVar102;
            fVar329 = fVar329 + fVar100 * fVar102;
            fVar330 = fVar330 + fVar101 * fVar102;
            fVar332 = fVar332 + fVar94 * fVar103;
            fVar79 = fVar79 + fVar95 * fVar103;
            fVar80 = fVar80 + fVar96 * fVar103;
            fVar81 = fVar81 + fVar97 * fVar103;
            fVar324 = fVar324 + fVar98 * fVar103;
            fVar82 = fVar82 + fVar99 * fVar103;
            fVar83 = fVar83 + fVar100 * fVar103;
            fVar84 = fVar84 + fVar101 * fVar103;
            fVar333 = fVar333 + fVar94 * fVar104;
            fVar335 = fVar335 + fVar95 * fVar104;
            fVar85 = fVar85 + fVar96 * fVar104;
            fVar86 = fVar86 + fVar97 * fVar104;
            fVar323 = fVar323 + fVar98 * fVar104;
            fVar338 = fVar338 + fVar99 * fVar104;
            fVar87 = fVar87 + fVar100 * fVar104;
            fVar331 = fVar331 + fVar101 * fVar104;
            fVar88 = fVar88 + fVar94 * fVar105;
            fVar337 = fVar337 + fVar95 * fVar105;
            fVar89 = fVar89 + fVar96 * fVar105;
            fVar90 = fVar90 + fVar97 * fVar105;
            fVar325 = fVar325 + fVar98 * fVar105;
            fVar91 = fVar91 + fVar99 * fVar105;
            fVar92 = fVar92 + fVar100 * fVar105;
            fVar93 = fVar93 + fVar101 * fVar105;
          }
          *(ulong *)(pfVar61 + 2) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar61 + 2) >> 0x20) + fVar77 * param_1,
                        (float)*(undefined8 *)(pfVar61 + 2) + fVar76 * param_1);
          *(ulong *)pfVar61 =
               CONCAT44((float)((ulong)*(undefined8 *)pfVar61 >> 0x20) + fVar75 * param_1,
                        (float)*(undefined8 *)pfVar61 + fVar326 * param_1);
          *(ulong *)(pfVar61 + 6) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar61 + 6) >> 0x20) + fVar330 * param_1,
                        (float)*(undefined8 *)(pfVar61 + 6) + fVar329 * param_1);
          *(ulong *)(pfVar61 + 4) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar61 + 4) >> 0x20) + fVar328 * param_1,
                        (float)*(undefined8 *)(pfVar61 + 4) + fVar78 * param_1);
          pfVar61 = pfVar61 + 8;
          *(ulong *)(pfVar72 + 2) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar72 + 2) >> 0x20) + fVar81 * param_1,
                        (float)*(undefined8 *)(pfVar72 + 2) + fVar80 * param_1);
          *(ulong *)pfVar72 =
               CONCAT44((float)((ulong)*(undefined8 *)pfVar72 >> 0x20) + fVar79 * param_1,
                        (float)*(undefined8 *)pfVar72 + fVar332 * param_1);
          *(ulong *)(pfVar72 + 6) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar72 + 6) >> 0x20) + fVar84 * param_1,
                        (float)*(undefined8 *)(pfVar72 + 6) + fVar83 * param_1);
          *(ulong *)(pfVar72 + 4) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar72 + 4) >> 0x20) + fVar82 * param_1,
                        (float)*(undefined8 *)(pfVar72 + 4) + fVar324 * param_1);
          pfVar72 = pfVar72 + 8;
          *(ulong *)(pfVar71 + 2) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar71 + 2) >> 0x20) + fVar86 * param_1,
                        (float)*(undefined8 *)(pfVar71 + 2) + fVar85 * param_1);
          *(ulong *)pfVar71 =
               CONCAT44((float)((ulong)*(undefined8 *)pfVar71 >> 0x20) + fVar335 * param_1,
                        (float)*(undefined8 *)pfVar71 + fVar333 * param_1);
          *(ulong *)(pfVar71 + 6) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar71 + 6) >> 0x20) + fVar331 * param_1,
                        (float)*(undefined8 *)(pfVar71 + 6) + fVar87 * param_1);
          *(ulong *)(pfVar71 + 4) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar71 + 4) >> 0x20) + fVar338 * param_1,
                        (float)*(undefined8 *)(pfVar71 + 4) + fVar323 * param_1);
          pfVar71 = pfVar71 + 8;
          *(ulong *)(pfVar73 + 2) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar73 + 2) >> 0x20) + fVar90 * param_1,
                        (float)*(undefined8 *)(pfVar73 + 2) + fVar89 * param_1);
          *(ulong *)pfVar73 =
               CONCAT44((float)((ulong)*(undefined8 *)pfVar73 >> 0x20) + fVar337 * param_1,
                        (float)*(undefined8 *)pfVar73 + fVar88 * param_1);
          *(ulong *)(pfVar73 + 6) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar73 + 6) >> 0x20) + fVar93 * param_1,
                        (float)*(undefined8 *)(pfVar73 + 6) + fVar92 * param_1);
          *(ulong *)(pfVar73 + 4) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar73 + 4) >> 0x20) + fVar91 * param_1,
                        (float)*(undefined8 *)(pfVar73 + 4) + fVar325 * param_1);
          pfVar73 = pfVar73 + 8;
        }
        if ((param_2 & 7) != 0) {
          if ((param_2 & 4) != 0) {
            if ((long)uVar64 < 2) {
              if ((uVar64 & 1) == 0) {
                fVar323 = 0.0;
                fVar324 = 0.0;
                fVar325 = 0.0;
                fVar326 = 0.0;
                fVar75 = 0.0;
                fVar76 = 0.0;
                fVar77 = 0.0;
                fVar78 = 0.0;
                fVar328 = 0.0;
                fVar329 = 0.0;
                fVar330 = 0.0;
                fVar332 = 0.0;
                fVar79 = 0.0;
                fVar80 = 0.0;
                fVar81 = 0.0;
                fVar82 = 0.0;
                pfVar70 = param_6;
                pfVar69 = pfVar68;
              }
              else {
                fVar326 = *param_6;
                fVar78 = param_6[1];
                fVar332 = param_6[2];
                fVar85 = param_6[3];
                fVar79 = (float)*(undefined8 *)pfVar68;
                fVar80 = (float)((ulong)*(undefined8 *)pfVar68 >> 0x20);
                fVar81 = (float)*(undefined8 *)(pfVar68 + 2);
                fVar82 = (float)((ulong)*(undefined8 *)(pfVar68 + 2) >> 0x20);
                fVar75 = param_6[4];
                fVar328 = param_6[5];
                fVar86 = param_6[6];
                fVar338 = param_6[7];
                fVar83 = (float)*(undefined8 *)(pfVar68 + 4);
                fVar84 = (float)((ulong)*(undefined8 *)(pfVar68 + 4) >> 0x20);
                fVar333 = (float)*(undefined8 *)(pfVar68 + 6);
                fVar335 = (float)((ulong)*(undefined8 *)(pfVar68 + 6) >> 0x20);
                fVar323 = fVar79 * fVar326 + fVar83 * fVar75;
                fVar324 = fVar80 * fVar326 + fVar84 * fVar75;
                fVar325 = fVar81 * fVar326 + fVar333 * fVar75;
                fVar326 = fVar82 * fVar326 + fVar335 * fVar75;
                fVar75 = fVar79 * fVar78 + fVar83 * fVar328;
                fVar76 = fVar80 * fVar78 + fVar84 * fVar328;
                fVar77 = fVar81 * fVar78 + fVar333 * fVar328;
                fVar78 = fVar82 * fVar78 + fVar335 * fVar328;
                fVar328 = fVar79 * fVar332 + fVar83 * fVar86;
                fVar329 = fVar80 * fVar332 + fVar84 * fVar86;
                fVar330 = fVar81 * fVar332 + fVar333 * fVar86;
                fVar332 = fVar82 * fVar332 + fVar335 * fVar86;
                fVar79 = fVar79 * fVar85 + fVar83 * fVar338;
                fVar80 = fVar80 * fVar85 + fVar84 * fVar338;
                fVar81 = fVar81 * fVar85 + fVar333 * fVar338;
                fVar82 = fVar82 * fVar85 + fVar335 * fVar338;
                pfVar70 = param_6 + 8;
                pfVar69 = pfVar68 + 8;
              }
            }
            else {
              fVar328 = *param_6;
              fVar329 = param_6[1];
              fVar330 = param_6[2];
              fVar332 = param_6[3];
              fVar323 = (float)*(undefined8 *)pfVar68;
              fVar324 = (float)((ulong)*(undefined8 *)pfVar68 >> 0x20);
              fVar325 = (float)*(undefined8 *)(pfVar68 + 2);
              fVar326 = (float)((ulong)*(undefined8 *)(pfVar68 + 2) >> 0x20);
              fVar79 = param_6[4];
              fVar80 = param_6[5];
              fVar81 = param_6[6];
              fVar82 = param_6[7];
              fVar75 = (float)*(undefined8 *)(pfVar68 + 4);
              fVar76 = (float)((ulong)*(undefined8 *)(pfVar68 + 4) >> 0x20);
              fVar77 = (float)*(undefined8 *)(pfVar68 + 6);
              fVar78 = (float)((ulong)*(undefined8 *)(pfVar68 + 6) >> 0x20);
              fVar83 = fVar323 * fVar328 + fVar75 * fVar79;
              fVar84 = fVar324 * fVar328 + fVar76 * fVar79;
              fVar333 = fVar325 * fVar328 + fVar77 * fVar79;
              fVar328 = fVar326 * fVar328 + fVar78 * fVar79;
              fVar79 = fVar323 * fVar329 + fVar75 * fVar80;
              fVar335 = fVar324 * fVar329 + fVar76 * fVar80;
              fVar85 = fVar325 * fVar329 + fVar77 * fVar80;
              fVar329 = fVar326 * fVar329 + fVar78 * fVar80;
              fVar80 = fVar323 * fVar330 + fVar75 * fVar81;
              fVar86 = fVar324 * fVar330 + fVar76 * fVar81;
              fVar338 = fVar325 * fVar330 + fVar77 * fVar81;
              fVar81 = fVar326 * fVar330 + fVar78 * fVar81;
              fVar87 = fVar323 * fVar332 + fVar75 * fVar82;
              fVar331 = fVar324 * fVar332 + fVar76 * fVar82;
              fVar88 = fVar325 * fVar332 + fVar77 * fVar82;
              fVar337 = fVar326 * fVar332 + fVar78 * fVar82;
              fVar326 = param_6[8];
              fVar78 = param_6[9];
              pfVar69 = param_6 + 0xc;
              fVar332 = param_6[10];
              fVar82 = param_6[0xb];
              pfVar74 = pfVar68 + 0xc;
              uVar118 = *(undefined8 *)(pfVar68 + 10);
              uVar115 = *(undefined8 *)(pfVar68 + 8);
              lVar63 = uVar64 - 2;
              pfVar68 = pfVar69;
              pfVar70 = pfVar74;
              if (uVar64 - 2 != 0 && 1 < (long)uVar64) {
                do {
                  fVar323 = (float)uVar115;
                  fVar324 = (float)((ulong)uVar115 >> 0x20);
                  fVar325 = (float)uVar118;
                  fVar75 = (float)((ulong)uVar118 >> 0x20);
                  fVar90 = *pfVar68;
                  fVar91 = pfVar68[1];
                  fVar92 = pfVar68[2];
                  fVar93 = pfVar68[3];
                  fVar76 = (float)*(undefined8 *)pfVar70;
                  fVar77 = (float)((ulong)*(undefined8 *)pfVar70 >> 0x20);
                  fVar330 = (float)*(undefined8 *)(pfVar70 + 2);
                  fVar89 = (float)((ulong)*(undefined8 *)(pfVar70 + 2) >> 0x20);
                  fVar83 = fVar83 + fVar323 * fVar326 + fVar76 * fVar90;
                  fVar84 = fVar84 + fVar324 * fVar326 + fVar77 * fVar90;
                  fVar333 = fVar333 + fVar325 * fVar326 + fVar330 * fVar90;
                  fVar328 = fVar328 + fVar75 * fVar326 + fVar89 * fVar90;
                  fVar79 = fVar79 + fVar323 * fVar78 + fVar76 * fVar91;
                  fVar335 = fVar335 + fVar324 * fVar78 + fVar77 * fVar91;
                  fVar85 = fVar85 + fVar325 * fVar78 + fVar330 * fVar91;
                  fVar329 = fVar329 + fVar75 * fVar78 + fVar89 * fVar91;
                  fVar80 = fVar80 + fVar323 * fVar332 + fVar76 * fVar92;
                  fVar86 = fVar86 + fVar324 * fVar332 + fVar77 * fVar92;
                  fVar338 = fVar338 + fVar325 * fVar332 + fVar330 * fVar92;
                  fVar81 = fVar81 + fVar75 * fVar332 + fVar89 * fVar92;
                  fVar87 = fVar87 + fVar323 * fVar82 + fVar76 * fVar93;
                  fVar331 = fVar331 + fVar324 * fVar82 + fVar77 * fVar93;
                  fVar88 = fVar88 + fVar325 * fVar82 + fVar330 * fVar93;
                  fVar337 = fVar337 + fVar75 * fVar82 + fVar89 * fVar93;
                  fVar326 = pfVar68[4];
                  fVar78 = pfVar68[5];
                  pfVar69 = pfVar68 + 8;
                  fVar332 = pfVar68[6];
                  fVar82 = pfVar68[7];
                  pfVar74 = pfVar70 + 8;
                  uVar118 = *(undefined8 *)(pfVar70 + 6);
                  uVar115 = *(undefined8 *)(pfVar70 + 4);
                  lVar62 = lVar63 + -1;
                  bVar1 = 0 < lVar63;
                  lVar63 = lVar62;
                  pfVar68 = pfVar69;
                  pfVar70 = pfVar74;
                } while (lVar62 != 0 && bVar1);
              }
              fVar89 = (float)uVar115;
              fVar90 = (float)((ulong)uVar115 >> 0x20);
              fVar91 = (float)uVar118;
              fVar92 = (float)((ulong)uVar118 >> 0x20);
              fVar75 = *pfVar69;
              fVar330 = pfVar69[1];
              fVar97 = pfVar69[2];
              fVar98 = pfVar69[3];
              fVar93 = (float)*(undefined8 *)pfVar74;
              fVar94 = (float)((ulong)*(undefined8 *)pfVar74 >> 0x20);
              fVar95 = (float)*(undefined8 *)(pfVar74 + 2);
              fVar96 = (float)((ulong)*(undefined8 *)(pfVar74 + 2) >> 0x20);
              fVar323 = fVar83 + fVar89 * fVar326 + fVar93 * fVar75;
              fVar324 = fVar84 + fVar90 * fVar326 + fVar94 * fVar75;
              fVar325 = fVar333 + fVar91 * fVar326 + fVar95 * fVar75;
              fVar326 = fVar328 + fVar92 * fVar326 + fVar96 * fVar75;
              fVar75 = fVar79 + fVar89 * fVar78 + fVar93 * fVar330;
              fVar76 = fVar335 + fVar90 * fVar78 + fVar94 * fVar330;
              fVar77 = fVar85 + fVar91 * fVar78 + fVar95 * fVar330;
              fVar78 = fVar329 + fVar92 * fVar78 + fVar96 * fVar330;
              fVar328 = fVar80 + fVar89 * fVar332 + fVar93 * fVar97;
              fVar329 = fVar86 + fVar90 * fVar332 + fVar94 * fVar97;
              fVar330 = fVar338 + fVar91 * fVar332 + fVar95 * fVar97;
              fVar332 = fVar81 + fVar92 * fVar332 + fVar96 * fVar97;
              fVar79 = fVar87 + fVar89 * fVar82 + fVar93 * fVar98;
              fVar80 = fVar331 + fVar90 * fVar82 + fVar94 * fVar98;
              fVar81 = fVar88 + fVar91 * fVar82 + fVar95 * fVar98;
              fVar82 = fVar337 + fVar92 * fVar82 + fVar96 * fVar98;
              pfVar70 = pfVar69 + 4;
              pfVar69 = pfVar74 + 4;
            }
            pfVar68 = pfVar69;
            if ((param_4 & 1) != 0) {
              fVar85 = *pfVar70;
              fVar86 = pfVar70[1];
              fVar338 = pfVar70[2];
              fVar87 = pfVar70[3];
              pfVar68 = pfVar69 + 4;
              fVar83 = (float)*(undefined8 *)pfVar69;
              fVar84 = (float)((ulong)*(undefined8 *)pfVar69 >> 0x20);
              fVar333 = (float)*(undefined8 *)(pfVar69 + 2);
              fVar335 = (float)((ulong)*(undefined8 *)(pfVar69 + 2) >> 0x20);
              fVar323 = fVar323 + fVar83 * fVar85;
              fVar324 = fVar324 + fVar84 * fVar85;
              fVar325 = fVar325 + fVar333 * fVar85;
              fVar326 = fVar326 + fVar335 * fVar85;
              fVar75 = fVar75 + fVar83 * fVar86;
              fVar76 = fVar76 + fVar84 * fVar86;
              fVar77 = fVar77 + fVar333 * fVar86;
              fVar78 = fVar78 + fVar335 * fVar86;
              fVar328 = fVar328 + fVar83 * fVar338;
              fVar329 = fVar329 + fVar84 * fVar338;
              fVar330 = fVar330 + fVar333 * fVar338;
              fVar332 = fVar332 + fVar335 * fVar338;
              fVar79 = fVar79 + fVar83 * fVar87;
              fVar80 = fVar80 + fVar84 * fVar87;
              fVar81 = fVar81 + fVar333 * fVar87;
              fVar82 = fVar82 + fVar335 * fVar87;
            }
            *(ulong *)(pfVar61 + 2) =
                 CONCAT44((float)((ulong)*(undefined8 *)(pfVar61 + 2) >> 0x20) + fVar326 * param_1,
                          (float)*(undefined8 *)(pfVar61 + 2) + fVar325 * param_1);
            *(ulong *)pfVar61 =
                 CONCAT44((float)((ulong)*(undefined8 *)pfVar61 >> 0x20) + fVar324 * param_1,
                          (float)*(undefined8 *)pfVar61 + fVar323 * param_1);
            pfVar61 = pfVar61 + 4;
            *(ulong *)(pfVar72 + 2) =
                 CONCAT44((float)((ulong)*(undefined8 *)(pfVar72 + 2) >> 0x20) + fVar78 * param_1,
                          (float)*(undefined8 *)(pfVar72 + 2) + fVar77 * param_1);
            *(ulong *)pfVar72 =
                 CONCAT44((float)((ulong)*(undefined8 *)pfVar72 >> 0x20) + fVar76 * param_1,
                          (float)*(undefined8 *)pfVar72 + fVar75 * param_1);
            pfVar72 = pfVar72 + 4;
            *(ulong *)(pfVar71 + 2) =
                 CONCAT44((float)((ulong)*(undefined8 *)(pfVar71 + 2) >> 0x20) + fVar332 * param_1,
                          (float)*(undefined8 *)(pfVar71 + 2) + fVar330 * param_1);
            *(ulong *)pfVar71 =
                 CONCAT44((float)((ulong)*(undefined8 *)pfVar71 >> 0x20) + fVar329 * param_1,
                          (float)*(undefined8 *)pfVar71 + fVar328 * param_1);
            pfVar71 = pfVar71 + 4;
            *(ulong *)(pfVar73 + 2) =
                 CONCAT44((float)((ulong)*(undefined8 *)(pfVar73 + 2) >> 0x20) + fVar82 * param_1,
                          (float)*(undefined8 *)(pfVar73 + 2) + fVar81 * param_1);
            *(ulong *)pfVar73 =
                 CONCAT44((float)((ulong)*(undefined8 *)pfVar73 >> 0x20) + fVar80 * param_1,
                          (float)*(undefined8 *)pfVar73 + fVar79 * param_1);
            pfVar73 = pfVar73 + 4;
          }
          if ((param_2 & 3) != 0) {
            if ((param_2 & 2) != 0) {
              fVar325 = 0.0;
              fVar75 = 0.0;
              fVar76 = 0.0;
              fVar326 = 0.0;
              fVar77 = 0.0;
              fVar78 = 0.0;
              fVar328 = 0.0;
              uVar64 = uVar65;
              pfVar69 = param_6;
              pfVar70 = param_6;
              fVar323 = fVar326;
              fVar324 = fVar325;
              if (0 < (long)uVar65) {
                do {
                  fVar324 = (float)*(undefined8 *)pfVar68;
                  fVar83 = (float)((ulong)*(undefined8 *)pfVar68 >> 0x20);
                  fVar329 = (float)*(undefined8 *)(pfVar68 + 2);
                  fVar84 = (float)((ulong)*(undefined8 *)(pfVar68 + 2) >> 0x20);
                  fVar330 = (float)*(undefined8 *)(pfVar68 + 4);
                  fVar333 = (float)((ulong)*(undefined8 *)(pfVar68 + 4) >> 0x20);
                  fVar332 = (float)*(undefined8 *)(pfVar68 + 6);
                  fVar335 = (float)((ulong)*(undefined8 *)(pfVar68 + 6) >> 0x20);
                  fVar79 = (float)*(undefined8 *)(pfVar68 + 8);
                  fVar85 = (float)((ulong)*(undefined8 *)(pfVar68 + 8) >> 0x20);
                  fVar80 = (float)*(undefined8 *)(pfVar68 + 10);
                  fVar86 = (float)((ulong)*(undefined8 *)(pfVar68 + 10) >> 0x20);
                  pfVar74 = pfVar68 + 0xe;
                  fVar81 = (float)*(undefined8 *)(pfVar68 + 0xc);
                  fVar338 = (float)((ulong)*(undefined8 *)(pfVar68 + 0xc) >> 0x20);
                  pfVar70 = pfVar69 + 0x20;
                  pfVar68 = pfVar68 + 0x10;
                  fVar82 = (float)*(undefined8 *)pfVar74;
                  fVar87 = (float)((ulong)*(undefined8 *)pfVar74 >> 0x20);
                  fVar75 = fVar75 + fVar324 * *pfVar69 + fVar329 * pfVar69[4] + fVar330 * pfVar69[8]
                           + fVar332 * pfVar69[0xc] + fVar79 * pfVar69[0x10] +
                           fVar80 * pfVar69[0x14] + fVar81 * pfVar69[0x18] + fVar82 * pfVar69[0x1c];
                  fVar76 = fVar76 + fVar83 * *pfVar69 + fVar84 * pfVar69[4] + fVar333 * pfVar69[8] +
                           fVar335 * pfVar69[0xc] + fVar85 * pfVar69[0x10] + fVar86 * pfVar69[0x14]
                           + fVar338 * pfVar69[0x18] + fVar87 * pfVar69[0x1c];
                  fVar326 = fVar326 + fVar324 * pfVar69[1] + fVar329 * pfVar69[5] +
                            fVar330 * pfVar69[9] + fVar332 * pfVar69[0xd] + fVar79 * pfVar69[0x11] +
                            fVar80 * pfVar69[0x15] + fVar81 * pfVar69[0x19] + fVar82 * pfVar69[0x1d]
                  ;
                  fVar77 = fVar77 + fVar83 * pfVar69[1] + fVar84 * pfVar69[5] + fVar333 * pfVar69[9]
                           + fVar335 * pfVar69[0xd] + fVar85 * pfVar69[0x11] +
                           fVar86 * pfVar69[0x15] + fVar338 * pfVar69[0x19] + fVar87 * pfVar69[0x1d]
                  ;
                  fVar323 = fVar323 + fVar324 * pfVar69[2] + fVar329 * pfVar69[6] +
                            fVar330 * pfVar69[10] + fVar332 * pfVar69[0xe] + fVar79 * pfVar69[0x12]
                            + fVar80 * pfVar69[0x16] + fVar81 * pfVar69[0x1a] +
                            fVar82 * pfVar69[0x1e];
                  fVar78 = fVar78 + fVar83 * pfVar69[2] + fVar84 * pfVar69[6] +
                           fVar333 * pfVar69[10] + fVar335 * pfVar69[0xe] + fVar85 * pfVar69[0x12] +
                           fVar86 * pfVar69[0x16] + fVar338 * pfVar69[0x1a] + fVar87 * pfVar69[0x1e]
                  ;
                  fVar325 = fVar325 + fVar324 * pfVar69[3] + fVar329 * pfVar69[7] +
                            fVar330 * pfVar69[0xb] + fVar332 * pfVar69[0xf] + fVar79 * pfVar69[0x13]
                            + fVar80 * pfVar69[0x17] + fVar81 * pfVar69[0x1b] +
                            fVar82 * pfVar69[0x1f];
                  fVar328 = fVar328 + fVar83 * pfVar69[3] + fVar84 * pfVar69[7] +
                            fVar333 * pfVar69[0xb] + fVar335 * pfVar69[0xf] + fVar85 * pfVar69[0x13]
                            + fVar86 * pfVar69[0x17] + fVar338 * pfVar69[0x1b] +
                            fVar87 * pfVar69[0x1f];
                  uVar3 = uVar64 - 1;
                  bVar1 = 0 < (long)uVar64;
                  uVar64 = uVar3;
                  pfVar69 = pfVar70;
                  fVar324 = fVar75;
                } while (uVar3 != 0 && bVar1);
              }
              uVar64 = param_4 & 7;
              pfVar69 = pfVar68;
              if ((param_4 & 7) != 0) {
                do {
                  pfVar68 = pfVar69 + 2;
                  fVar75 = (float)*(undefined8 *)pfVar69;
                  fVar329 = (float)((ulong)*(undefined8 *)pfVar69 >> 0x20);
                  fVar324 = fVar324 + fVar75 * *pfVar70;
                  fVar76 = fVar76 + fVar329 * *pfVar70;
                  fVar326 = fVar326 + fVar75 * pfVar70[1];
                  fVar77 = fVar77 + fVar329 * pfVar70[1];
                  fVar323 = fVar323 + fVar75 * pfVar70[2];
                  fVar78 = fVar78 + fVar329 * pfVar70[2];
                  fVar325 = fVar325 + fVar75 * pfVar70[3];
                  fVar328 = fVar328 + fVar329 * pfVar70[3];
                  uVar3 = uVar64 - 1;
                  bVar1 = 0 < (long)uVar64;
                  uVar64 = uVar3;
                  pfVar70 = pfVar70 + 4;
                  pfVar69 = pfVar68;
                } while (uVar3 != 0 && bVar1);
              }
              *(ulong *)pfVar61 =
                   CONCAT44((float)((ulong)*(undefined8 *)pfVar61 >> 0x20) + fVar76 * param_1,
                            (float)*(undefined8 *)pfVar61 + fVar324 * param_1);
              pfVar61 = pfVar61 + 2;
              *(ulong *)pfVar72 =
                   CONCAT44((float)((ulong)*(undefined8 *)pfVar72 >> 0x20) + fVar77 * param_1,
                            (float)*(undefined8 *)pfVar72 + fVar326 * param_1);
              pfVar72 = pfVar72 + 2;
              *(ulong *)pfVar71 =
                   CONCAT44((float)((ulong)*(undefined8 *)pfVar71 >> 0x20) + fVar78 * param_1,
                            (float)*(undefined8 *)pfVar71 + fVar323 * param_1);
              pfVar71 = pfVar71 + 2;
              *(ulong *)pfVar73 =
                   CONCAT44((float)((ulong)*(undefined8 *)pfVar73 >> 0x20) + fVar328 * param_1,
                            (float)*(undefined8 *)pfVar73 + fVar325 * param_1);
              pfVar73 = pfVar73 + 2;
            }
            if ((param_2 & 1) != 0) {
              fVar325 = 0.0;
              fVar326 = 0.0;
              fVar324 = 0.0;
              fVar75 = 0.0;
              uVar64 = uVar65;
              pfVar70 = param_6;
              fVar323 = 0.0;
              if (0 < (long)uVar65) {
                do {
                  fVar323 = *pfVar68;
                  uVar115 = *(undefined8 *)pfVar70;
                  pfVar4 = pfVar70 + 2;
                  pfVar69 = pfVar70 + 4;
                  fVar76 = pfVar68[1];
                  pfVar5 = pfVar70 + 6;
                  pfVar74 = pfVar70 + 8;
                  fVar77 = pfVar68[2];
                  pfVar6 = pfVar70 + 10;
                  pfVar12 = pfVar70 + 0xc;
                  fVar78 = pfVar68[3];
                  pfVar7 = pfVar70 + 0xe;
                  pfVar13 = pfVar70 + 0x10;
                  fVar328 = pfVar68[4];
                  pfVar8 = pfVar70 + 0x12;
                  pfVar14 = pfVar70 + 0x14;
                  fVar329 = pfVar68[5];
                  pfVar9 = pfVar70 + 0x16;
                  pfVar15 = pfVar70 + 0x18;
                  fVar330 = pfVar68[6];
                  pfVar10 = pfVar70 + 0x1a;
                  pfVar60 = pfVar70 + 0x1c;
                  fVar332 = pfVar68[7];
                  pfVar68 = pfVar68 + 8;
                  pfVar11 = pfVar70 + 0x1e;
                  pfVar70 = pfVar70 + 0x20;
                  fVar325 = fVar325 + (float)uVar115 * fVar323 +
                            (float)*(undefined8 *)pfVar69 * fVar76 +
                            (float)*(undefined8 *)pfVar74 * fVar77 +
                            (float)*(undefined8 *)pfVar12 * fVar78 +
                            (float)*(undefined8 *)pfVar13 * fVar328 +
                            (float)*(undefined8 *)pfVar14 * fVar329 +
                            (float)*(undefined8 *)pfVar15 * fVar330 +
                            (float)*(undefined8 *)pfVar60 * fVar332;
                  fVar326 = fVar326 + (float)((ulong)uVar115 >> 0x20) * fVar323 +
                            (float)((ulong)*(undefined8 *)pfVar69 >> 0x20) * fVar76 +
                            (float)((ulong)*(undefined8 *)pfVar74 >> 0x20) * fVar77 +
                            (float)((ulong)*(undefined8 *)pfVar12 >> 0x20) * fVar78 +
                            (float)((ulong)*(undefined8 *)pfVar13 >> 0x20) * fVar328 +
                            (float)((ulong)*(undefined8 *)pfVar14 >> 0x20) * fVar329 +
                            (float)((ulong)*(undefined8 *)pfVar15 >> 0x20) * fVar330 +
                            (float)((ulong)*(undefined8 *)pfVar60 >> 0x20) * fVar332;
                  fVar324 = fVar324 + (float)*(undefined8 *)pfVar4 * fVar323 +
                            (float)*(undefined8 *)pfVar5 * fVar76 +
                            (float)*(undefined8 *)pfVar6 * fVar77 +
                            (float)*(undefined8 *)pfVar7 * fVar78 +
                            (float)*(undefined8 *)pfVar8 * fVar328 +
                            (float)*(undefined8 *)pfVar9 * fVar329 +
                            (float)*(undefined8 *)pfVar10 * fVar330 +
                            (float)*(undefined8 *)pfVar11 * fVar332;
                  fVar75 = fVar75 + (float)((ulong)*(undefined8 *)pfVar4 >> 0x20) * fVar323 +
                           (float)((ulong)*(undefined8 *)pfVar5 >> 0x20) * fVar76 +
                           (float)((ulong)*(undefined8 *)pfVar6 >> 0x20) * fVar77 +
                           (float)((ulong)*(undefined8 *)pfVar7 >> 0x20) * fVar78 +
                           (float)((ulong)*(undefined8 *)pfVar8 >> 0x20) * fVar328 +
                           (float)((ulong)*(undefined8 *)pfVar9 >> 0x20) * fVar329 +
                           (float)((ulong)*(undefined8 *)pfVar10 >> 0x20) * fVar330 +
                           (float)((ulong)*(undefined8 *)pfVar11 >> 0x20) * fVar332;
                  uVar3 = uVar64 - 1;
                  bVar1 = 0 < (long)uVar64;
                  uVar64 = uVar3;
                  fVar323 = fVar325;
                } while (uVar3 != 0 && bVar1);
              }
              uVar64 = param_4 & 7;
              if ((param_4 & 7) != 0) {
                do {
                  fVar325 = *pfVar68;
                  pfVar68 = pfVar68 + 1;
                  uVar115 = *(undefined8 *)pfVar70;
                  pfVar69 = pfVar70 + 2;
                  pfVar70 = pfVar70 + 4;
                  fVar323 = fVar323 + (float)uVar115 * fVar325;
                  fVar326 = fVar326 + (float)((ulong)uVar115 >> 0x20) * fVar325;
                  fVar324 = fVar324 + (float)*(undefined8 *)pfVar69 * fVar325;
                  fVar75 = fVar75 + (float)((ulong)*(undefined8 *)pfVar69 >> 0x20) * fVar325;
                  uVar3 = uVar64 - 1;
                  bVar1 = 0 < (long)uVar64;
                  uVar64 = uVar3;
                } while (uVar3 != 0 && bVar1);
              }
              fVar325 = *pfVar72;
              *pfVar61 = *pfVar61 + fVar323 * param_1;
              *pfVar72 = fVar325 + fVar326 * param_1;
              fVar323 = *pfVar73;
              *pfVar71 = *pfVar71 + fVar324 * param_1;
              *pfVar73 = fVar323 + fVar75 * param_1;
            }
          }
        }
      }
      param_6 = param_6 + param_4 * 4;
      lVar63 = lVar66 + -1;
      bVar1 = 0 < lVar66;
      pfVar61 = param_7;
      lVar66 = lVar63;
    } while (lVar63 != 0 && bVar1);
  }
  if ((param_3 & 3) != 0) {
    pfVar61 = param_7;
    if ((param_3 & 2) != 0) {
      pfVar61 = param_7 + param_8 * 2;
      lVar66 = lVar67;
      pfVar72 = param_5;
      if (0 < lVar67) {
        do {
          fVar325 = 0.0;
          fVar76 = 0.0;
          fVar77 = 0.0;
          fVar78 = 0.0;
          fVar328 = 0.0;
          fVar329 = 0.0;
          fVar330 = 0.0;
          fVar332 = 0.0;
          fVar79 = 0.0;
          fVar80 = 0.0;
          fVar81 = 0.0;
          fVar82 = 0.0;
          fVar83 = 0.0;
          fVar326 = 0.0;
          fVar84 = 0.0;
          fVar333 = 0.0;
          fVar335 = 0.0;
          fVar85 = 0.0;
          fVar86 = 0.0;
          fVar338 = 0.0;
          fVar87 = 0.0;
          fVar331 = 0.0;
          fVar88 = 0.0;
          fVar337 = 0.0;
          fVar89 = 0.0;
          fVar90 = 0.0;
          fVar91 = 0.0;
          fVar92 = 0.0;
          fVar75 = 0.0;
          fVar93 = 0.0;
          fVar94 = 0.0;
          fVar95 = 0.0;
          uVar64 = uVar65;
          pfVar71 = param_6;
          fVar323 = fVar325;
          fVar324 = 0.0;
          if (0 < (long)uVar65) {
            do {
              fVar280 = (float)*(undefined8 *)pfVar71;
              fVar323 = (float)*(undefined8 *)pfVar72;
              fVar102 = (float)((ulong)*(undefined8 *)pfVar72 >> 0x20);
              fVar110 = (float)*(undefined8 *)(pfVar72 + 2);
              fVar315 = (float)((ulong)*(undefined8 *)(pfVar72 + 2) >> 0x20);
              fVar327 = (float)*(undefined8 *)(pfVar72 + 4);
              fVar196 = (float)((ulong)*(undefined8 *)(pfVar72 + 4) >> 0x20);
              fVar126 = (float)*(undefined8 *)(pfVar72 + 6);
              fVar135 = (float)((ulong)*(undefined8 *)(pfVar72 + 6) >> 0x20);
              fVar143 = (float)*(undefined8 *)(pfVar72 + 8);
              fVar152 = (float)((ulong)*(undefined8 *)(pfVar72 + 8) >> 0x20);
              fVar160 = (float)*(undefined8 *)(pfVar72 + 10);
              fVar169 = (float)((ulong)*(undefined8 *)(pfVar72 + 10) >> 0x20);
              fVar188 = (float)*(undefined8 *)(pfVar72 + 0xc);
              fVar208 = (float)((ulong)*(undefined8 *)(pfVar72 + 0xc) >> 0x20);
              fVar230 = (float)*(undefined8 *)(pfVar72 + 0xe);
              fVar254 = (float)((ulong)*(undefined8 *)(pfVar72 + 0xe) >> 0x20);
              fVar289 = (float)((ulong)*(undefined8 *)pfVar71 >> 0x20);
              fVar282 = (float)*(undefined8 *)(pfVar71 + 2);
              fVar324 = (float)*(undefined8 *)(pfVar72 + 0x10);
              fVar103 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x10) >> 0x20);
              fVar111 = (float)*(undefined8 *)(pfVar72 + 0x12);
              fVar317 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x12) >> 0x20);
              fVar339 = (float)*(undefined8 *)(pfVar72 + 0x14);
              fVar207 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x14) >> 0x20);
              fVar127 = (float)*(undefined8 *)(pfVar72 + 0x16);
              fVar136 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x16) >> 0x20);
              fVar144 = (float)*(undefined8 *)(pfVar72 + 0x18);
              fVar153 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x18) >> 0x20);
              fVar161 = (float)*(undefined8 *)(pfVar72 + 0x1a);
              fVar170 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x1a) >> 0x20);
              fVar189 = (float)*(undefined8 *)(pfVar72 + 0x1c);
              fVar209 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x1c) >> 0x20);
              fVar231 = (float)*(undefined8 *)(pfVar72 + 0x1e);
              fVar255 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x1e) >> 0x20);
              fVar290 = (float)((ulong)*(undefined8 *)(pfVar71 + 2) >> 0x20);
              fVar283 = (float)*(undefined8 *)(pfVar71 + 4);
              fVar96 = (float)*(undefined8 *)(pfVar72 + 0x20);
              fVar104 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x20) >> 0x20);
              fVar112 = (float)*(undefined8 *)(pfVar72 + 0x22);
              fVar334 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x22) >> 0x20);
              fVar116 = (float)*(undefined8 *)(pfVar72 + 0x24);
              fVar218 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x24) >> 0x20);
              fVar128 = (float)*(undefined8 *)(pfVar72 + 0x26);
              fVar137 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x26) >> 0x20);
              fVar145 = (float)*(undefined8 *)(pfVar72 + 0x28);
              fVar154 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x28) >> 0x20);
              fVar162 = (float)*(undefined8 *)(pfVar72 + 0x2a);
              fVar171 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x2a) >> 0x20);
              fVar190 = (float)*(undefined8 *)(pfVar72 + 0x2c);
              fVar210 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x2c) >> 0x20);
              fVar232 = (float)*(undefined8 *)(pfVar72 + 0x2e);
              fVar256 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x2e) >> 0x20);
              fVar291 = (float)((ulong)*(undefined8 *)(pfVar71 + 4) >> 0x20);
              fVar284 = (float)*(undefined8 *)(pfVar71 + 6);
              fVar97 = (float)*(undefined8 *)(pfVar72 + 0x30);
              fVar105 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x30) >> 0x20);
              fVar113 = (float)*(undefined8 *)(pfVar72 + 0x32);
              fVar336 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x32) >> 0x20);
              fVar117 = (float)*(undefined8 *)(pfVar72 + 0x34);
              fVar229 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x34) >> 0x20);
              fVar129 = (float)*(undefined8 *)(pfVar72 + 0x36);
              fVar138 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x36) >> 0x20);
              fVar146 = (float)*(undefined8 *)(pfVar72 + 0x38);
              fVar155 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x38) >> 0x20);
              fVar163 = (float)*(undefined8 *)(pfVar72 + 0x3a);
              fVar172 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x3a) >> 0x20);
              fVar191 = (float)*(undefined8 *)(pfVar72 + 0x3c);
              fVar211 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x3c) >> 0x20);
              fVar233 = (float)*(undefined8 *)(pfVar72 + 0x3e);
              fVar257 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x3e) >> 0x20);
              fVar292 = (float)((ulong)*(undefined8 *)(pfVar71 + 6) >> 0x20);
              fVar285 = (float)*(undefined8 *)(pfVar71 + 8);
              fVar98 = (float)*(undefined8 *)(pfVar72 + 0x40);
              fVar106 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x40) >> 0x20);
              fVar114 = (float)*(undefined8 *)(pfVar72 + 0x42);
              fVar321 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x42) >> 0x20);
              fVar119 = (float)*(undefined8 *)(pfVar72 + 0x44);
              fVar122 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x44) >> 0x20);
              fVar130 = (float)*(undefined8 *)(pfVar72 + 0x46);
              fVar139 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x46) >> 0x20);
              fVar147 = (float)*(undefined8 *)(pfVar72 + 0x48);
              fVar156 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x48) >> 0x20);
              fVar164 = (float)*(undefined8 *)(pfVar72 + 0x4a);
              fVar173 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x4a) >> 0x20);
              fVar197 = (float)*(undefined8 *)(pfVar72 + 0x4c);
              fVar219 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x4c) >> 0x20);
              fVar242 = (float)*(undefined8 *)(pfVar72 + 0x4e);
              fVar267 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x4e) >> 0x20);
              fVar293 = (float)((ulong)*(undefined8 *)(pfVar71 + 8) >> 0x20);
              fVar286 = (float)*(undefined8 *)(pfVar71 + 10);
              fVar99 = (float)*(undefined8 *)(pfVar72 + 0x50);
              fVar107 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x50) >> 0x20);
              fVar296 = (float)*(undefined8 *)(pfVar72 + 0x52);
              fVar322 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x52) >> 0x20);
              fVar120 = (float)*(undefined8 *)(pfVar72 + 0x54);
              fVar123 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x54) >> 0x20);
              fVar131 = (float)*(undefined8 *)(pfVar72 + 0x56);
              fVar140 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x56) >> 0x20);
              fVar148 = (float)*(undefined8 *)(pfVar72 + 0x58);
              fVar157 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x58) >> 0x20);
              fVar165 = (float)*(undefined8 *)(pfVar72 + 0x5a);
              fVar174 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x5a) >> 0x20);
              fVar198 = (float)*(undefined8 *)(pfVar72 + 0x5c);
              fVar220 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x5c) >> 0x20);
              fVar243 = (float)*(undefined8 *)(pfVar72 + 0x5e);
              fVar268 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x5e) >> 0x20);
              fVar294 = (float)((ulong)*(undefined8 *)(pfVar71 + 10) >> 0x20);
              pfVar73 = pfVar71 + 0xe;
              pfVar68 = pfVar72 + 0x70;
              fVar287 = (float)*(undefined8 *)(pfVar71 + 0xc);
              fVar100 = (float)*(undefined8 *)(pfVar72 + 0x60);
              fVar108 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x60) >> 0x20);
              fVar309 = (float)*(undefined8 *)(pfVar72 + 0x62);
              fVar340 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x62) >> 0x20);
              fVar266 = (float)*(undefined8 *)(pfVar72 + 100);
              fVar124 = (float)((ulong)*(undefined8 *)(pfVar72 + 100) >> 0x20);
              fVar132 = (float)*(undefined8 *)(pfVar72 + 0x66);
              fVar141 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x66) >> 0x20);
              fVar149 = (float)*(undefined8 *)(pfVar72 + 0x68);
              fVar158 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x68) >> 0x20);
              fVar166 = (float)*(undefined8 *)(pfVar72 + 0x6a);
              fVar175 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x6a) >> 0x20);
              fVar199 = (float)*(undefined8 *)(pfVar72 + 0x6c);
              fVar221 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x6c) >> 0x20);
              fVar244 = (float)*(undefined8 *)(pfVar72 + 0x6e);
              fVar269 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x6e) >> 0x20);
              fVar295 = (float)((ulong)*(undefined8 *)(pfVar71 + 0xc) >> 0x20);
              pfVar71 = pfVar71 + 0x10;
              pfVar12 = pfVar72 + 0x72;
              pfVar70 = pfVar72 + 0x74;
              pfVar13 = pfVar72 + 0x76;
              pfVar69 = pfVar72 + 0x78;
              pfVar14 = pfVar72 + 0x7a;
              pfVar74 = pfVar72 + 0x7c;
              pfVar15 = pfVar72 + 0x7e;
              pfVar72 = pfVar72 + 0x80;
              fVar288 = (float)*(undefined8 *)pfVar73;
              fVar101 = (float)*(undefined8 *)pfVar68;
              fVar109 = (float)((ulong)*(undefined8 *)pfVar68 >> 0x20);
              fVar310 = (float)*(undefined8 *)pfVar12;
              fVar341 = (float)((ulong)*(undefined8 *)pfVar12 >> 0x20);
              fVar76 = fVar76 + fVar323 * fVar280 + fVar324 * fVar282 + fVar96 * fVar283 +
                       fVar97 * fVar284 + fVar98 * fVar285 + fVar99 * fVar286 + fVar100 * fVar287 +
                       fVar101 * fVar288;
              fVar77 = fVar77 + fVar102 * fVar280 + fVar103 * fVar282 + fVar104 * fVar283 +
                       fVar105 * fVar284 + fVar106 * fVar285 + fVar107 * fVar286 + fVar108 * fVar287
                       + fVar109 * fVar288;
              fVar78 = fVar78 + fVar110 * fVar280 + fVar111 * fVar282 + fVar112 * fVar283 +
                       fVar113 * fVar284 + fVar114 * fVar285 + fVar296 * fVar286 + fVar309 * fVar287
                       + fVar310 * fVar288;
              fVar328 = fVar328 + fVar315 * fVar280 + fVar317 * fVar282 + fVar334 * fVar283 +
                        fVar336 * fVar284 + fVar321 * fVar285 + fVar322 * fVar286 +
                        fVar340 * fVar287 + fVar341 * fVar288;
              fVar279 = (float)*(undefined8 *)pfVar70;
              fVar125 = (float)((ulong)*(undefined8 *)pfVar70 >> 0x20);
              fVar133 = (float)*(undefined8 *)pfVar13;
              fVar142 = (float)((ulong)*(undefined8 *)pfVar13 >> 0x20);
              fVar329 = fVar329 + fVar327 * fVar280 + fVar339 * fVar282 + fVar116 * fVar283 +
                        fVar117 * fVar284 + fVar119 * fVar285 + fVar120 * fVar286 +
                        fVar266 * fVar287 + fVar279 * fVar288;
              fVar330 = fVar330 + fVar196 * fVar280 + fVar207 * fVar282 + fVar218 * fVar283 +
                        fVar229 * fVar284 + fVar122 * fVar285 + fVar123 * fVar286 +
                        fVar124 * fVar287 + fVar125 * fVar288;
              fVar332 = fVar332 + fVar126 * fVar280 + fVar127 * fVar282 + fVar128 * fVar283 +
                        fVar129 * fVar284 + fVar130 * fVar285 + fVar131 * fVar286 +
                        fVar132 * fVar287 + fVar133 * fVar288;
              fVar79 = fVar79 + fVar135 * fVar280 + fVar136 * fVar282 + fVar137 * fVar283 +
                       fVar138 * fVar284 + fVar139 * fVar285 + fVar140 * fVar286 + fVar141 * fVar287
                       + fVar142 * fVar288;
              fVar150 = (float)*(undefined8 *)pfVar69;
              fVar159 = (float)((ulong)*(undefined8 *)pfVar69 >> 0x20);
              fVar167 = (float)*(undefined8 *)pfVar14;
              fVar176 = (float)((ulong)*(undefined8 *)pfVar14 >> 0x20);
              fVar80 = fVar80 + fVar143 * fVar280 + fVar144 * fVar282 + fVar145 * fVar283 +
                       fVar146 * fVar284 + fVar147 * fVar285 + fVar148 * fVar286 + fVar149 * fVar287
                       + fVar150 * fVar288;
              fVar81 = fVar81 + fVar152 * fVar280 + fVar153 * fVar282 + fVar154 * fVar283 +
                       fVar155 * fVar284 + fVar156 * fVar285 + fVar157 * fVar286 + fVar158 * fVar287
                       + fVar159 * fVar288;
              fVar82 = fVar82 + fVar160 * fVar280 + fVar161 * fVar282 + fVar162 * fVar283 +
                       fVar163 * fVar284 + fVar164 * fVar285 + fVar165 * fVar286 + fVar166 * fVar287
                       + fVar167 * fVar288;
              fVar83 = fVar83 + fVar169 * fVar280 + fVar170 * fVar282 + fVar171 * fVar283 +
                       fVar172 * fVar284 + fVar173 * fVar285 + fVar174 * fVar286 + fVar175 * fVar287
                       + fVar176 * fVar288;
              fVar200 = (float)*(undefined8 *)pfVar74;
              fVar222 = (float)((ulong)*(undefined8 *)pfVar74 >> 0x20);
              fVar245 = (float)*(undefined8 *)pfVar15;
              fVar270 = (float)((ulong)*(undefined8 *)pfVar15 >> 0x20);
              fVar326 = fVar326 + fVar188 * fVar280 + fVar189 * fVar282 + fVar190 * fVar283 +
                        fVar191 * fVar284 + fVar197 * fVar285 + fVar198 * fVar286 +
                        fVar199 * fVar287 + fVar200 * fVar288;
              fVar84 = fVar84 + fVar208 * fVar280 + fVar209 * fVar282 + fVar210 * fVar283 +
                       fVar211 * fVar284 + fVar219 * fVar285 + fVar220 * fVar286 + fVar221 * fVar287
                       + fVar222 * fVar288;
              fVar333 = fVar333 + fVar230 * fVar280 + fVar231 * fVar282 + fVar232 * fVar283 +
                        fVar233 * fVar284 + fVar242 * fVar285 + fVar243 * fVar286 +
                        fVar244 * fVar287 + fVar245 * fVar288;
              fVar335 = fVar335 + fVar254 * fVar280 + fVar255 * fVar282 + fVar256 * fVar283 +
                        fVar257 * fVar284 + fVar267 * fVar285 + fVar268 * fVar286 +
                        fVar269 * fVar287 + fVar270 * fVar288;
              fVar280 = (float)((ulong)*(undefined8 *)pfVar73 >> 0x20);
              fVar85 = fVar85 + fVar323 * fVar289 + fVar324 * fVar290 + fVar96 * fVar291 +
                       fVar97 * fVar292 + fVar98 * fVar293 + fVar99 * fVar294 + fVar100 * fVar295 +
                       fVar101 * fVar280;
              fVar86 = fVar86 + fVar102 * fVar289 + fVar103 * fVar290 + fVar104 * fVar291 +
                       fVar105 * fVar292 + fVar106 * fVar293 + fVar107 * fVar294 + fVar108 * fVar295
                       + fVar109 * fVar280;
              fVar338 = fVar338 + fVar110 * fVar289 + fVar111 * fVar290 + fVar112 * fVar291 +
                        fVar113 * fVar292 + fVar114 * fVar293 + fVar296 * fVar294 +
                        fVar309 * fVar295 + fVar310 * fVar280;
              fVar87 = fVar87 + fVar315 * fVar289 + fVar317 * fVar290 + fVar334 * fVar291 +
                       fVar336 * fVar292 + fVar321 * fVar293 + fVar322 * fVar294 + fVar340 * fVar295
                       + fVar341 * fVar280;
              fVar325 = fVar325 + fVar327 * fVar289 + fVar339 * fVar290 + fVar116 * fVar291 +
                        fVar117 * fVar292 + fVar119 * fVar293 + fVar120 * fVar294 +
                        fVar266 * fVar295 + fVar279 * fVar280;
              fVar331 = fVar331 + fVar196 * fVar289 + fVar207 * fVar290 + fVar218 * fVar291 +
                        fVar229 * fVar292 + fVar122 * fVar293 + fVar123 * fVar294 +
                        fVar124 * fVar295 + fVar125 * fVar280;
              fVar88 = fVar88 + fVar126 * fVar289 + fVar127 * fVar290 + fVar128 * fVar291 +
                       fVar129 * fVar292 + fVar130 * fVar293 + fVar131 * fVar294 + fVar132 * fVar295
                       + fVar133 * fVar280;
              fVar337 = fVar337 + fVar135 * fVar289 + fVar136 * fVar290 + fVar137 * fVar291 +
                        fVar138 * fVar292 + fVar139 * fVar293 + fVar140 * fVar294 +
                        fVar141 * fVar295 + fVar142 * fVar280;
              fVar89 = fVar89 + fVar143 * fVar289 + fVar144 * fVar290 + fVar145 * fVar291 +
                       fVar146 * fVar292 + fVar147 * fVar293 + fVar148 * fVar294 + fVar149 * fVar295
                       + fVar150 * fVar280;
              fVar90 = fVar90 + fVar152 * fVar289 + fVar153 * fVar290 + fVar154 * fVar291 +
                       fVar155 * fVar292 + fVar156 * fVar293 + fVar157 * fVar294 + fVar158 * fVar295
                       + fVar159 * fVar280;
              fVar91 = fVar91 + fVar160 * fVar289 + fVar161 * fVar290 + fVar162 * fVar291 +
                       fVar163 * fVar292 + fVar164 * fVar293 + fVar165 * fVar294 + fVar166 * fVar295
                       + fVar167 * fVar280;
              fVar92 = fVar92 + fVar169 * fVar289 + fVar170 * fVar290 + fVar171 * fVar291 +
                       fVar172 * fVar292 + fVar173 * fVar293 + fVar174 * fVar294 + fVar175 * fVar295
                       + fVar176 * fVar280;
              fVar75 = fVar75 + fVar188 * fVar289 + fVar189 * fVar290 + fVar190 * fVar291 +
                       fVar191 * fVar292 + fVar197 * fVar293 + fVar198 * fVar294 + fVar199 * fVar295
                       + fVar200 * fVar280;
              fVar93 = fVar93 + fVar208 * fVar289 + fVar209 * fVar290 + fVar210 * fVar291 +
                       fVar211 * fVar292 + fVar219 * fVar293 + fVar220 * fVar294 + fVar221 * fVar295
                       + fVar222 * fVar280;
              fVar94 = fVar94 + fVar230 * fVar289 + fVar231 * fVar290 + fVar232 * fVar291 +
                       fVar233 * fVar292 + fVar242 * fVar293 + fVar243 * fVar294 + fVar244 * fVar295
                       + fVar245 * fVar280;
              fVar95 = fVar95 + fVar254 * fVar289 + fVar255 * fVar290 + fVar256 * fVar291 +
                       fVar257 * fVar292 + fVar267 * fVar293 + fVar268 * fVar294 + fVar269 * fVar295
                       + fVar270 * fVar280;
              uVar3 = uVar64 - 1;
              bVar1 = 0 < (long)uVar64;
              uVar64 = uVar3;
              fVar323 = fVar76;
              fVar324 = fVar329;
            } while (uVar3 != 0 && bVar1);
          }
          uVar64 = param_4 & 7;
          if ((param_4 & 7) != 0) {
            do {
              uVar115 = *(undefined8 *)pfVar71;
              pfVar71 = pfVar71 + 2;
              uVar118 = *(undefined8 *)pfVar72;
              pfVar69 = pfVar72 + 2;
              pfVar73 = pfVar72 + 4;
              pfVar74 = pfVar72 + 6;
              pfVar68 = pfVar72 + 8;
              pfVar12 = pfVar72 + 10;
              pfVar70 = pfVar72 + 0xc;
              pfVar13 = pfVar72 + 0xe;
              pfVar72 = pfVar72 + 0x10;
              fVar110 = (float)uVar115;
              fVar76 = (float)uVar118;
              fVar329 = (float)((ulong)uVar118 >> 0x20);
              fVar96 = (float)*(undefined8 *)pfVar69;
              fVar97 = (float)((ulong)*(undefined8 *)pfVar69 >> 0x20);
              fVar323 = fVar323 + fVar76 * fVar110;
              fVar77 = fVar77 + fVar329 * fVar110;
              fVar78 = fVar78 + fVar96 * fVar110;
              fVar328 = fVar328 + fVar97 * fVar110;
              fVar98 = (float)*(undefined8 *)pfVar73;
              fVar99 = (float)((ulong)*(undefined8 *)pfVar73 >> 0x20);
              fVar100 = (float)*(undefined8 *)pfVar74;
              fVar101 = (float)((ulong)*(undefined8 *)pfVar74 >> 0x20);
              fVar324 = fVar324 + fVar98 * fVar110;
              fVar330 = fVar330 + fVar99 * fVar110;
              fVar332 = fVar332 + fVar100 * fVar110;
              fVar79 = fVar79 + fVar101 * fVar110;
              fVar102 = (float)*(undefined8 *)pfVar68;
              fVar103 = (float)((ulong)*(undefined8 *)pfVar68 >> 0x20);
              fVar104 = (float)*(undefined8 *)pfVar12;
              fVar105 = (float)((ulong)*(undefined8 *)pfVar12 >> 0x20);
              fVar80 = fVar80 + fVar102 * fVar110;
              fVar81 = fVar81 + fVar103 * fVar110;
              fVar82 = fVar82 + fVar104 * fVar110;
              fVar83 = fVar83 + fVar105 * fVar110;
              fVar106 = (float)*(undefined8 *)pfVar70;
              fVar107 = (float)((ulong)*(undefined8 *)pfVar70 >> 0x20);
              fVar108 = (float)*(undefined8 *)pfVar13;
              fVar109 = (float)((ulong)*(undefined8 *)pfVar13 >> 0x20);
              fVar326 = fVar326 + fVar106 * fVar110;
              fVar84 = fVar84 + fVar107 * fVar110;
              fVar333 = fVar333 + fVar108 * fVar110;
              fVar335 = fVar335 + fVar109 * fVar110;
              fVar110 = (float)((ulong)uVar115 >> 0x20);
              fVar85 = fVar85 + fVar76 * fVar110;
              fVar86 = fVar86 + fVar329 * fVar110;
              fVar338 = fVar338 + fVar96 * fVar110;
              fVar87 = fVar87 + fVar97 * fVar110;
              fVar325 = fVar325 + fVar98 * fVar110;
              fVar331 = fVar331 + fVar99 * fVar110;
              fVar88 = fVar88 + fVar100 * fVar110;
              fVar337 = fVar337 + fVar101 * fVar110;
              fVar89 = fVar89 + fVar102 * fVar110;
              fVar90 = fVar90 + fVar103 * fVar110;
              fVar91 = fVar91 + fVar104 * fVar110;
              fVar92 = fVar92 + fVar105 * fVar110;
              fVar75 = fVar75 + fVar106 * fVar110;
              fVar93 = fVar93 + fVar107 * fVar110;
              fVar94 = fVar94 + fVar108 * fVar110;
              fVar95 = fVar95 + fVar109 * fVar110;
              uVar3 = uVar64 - 1;
              bVar1 = 0 < (long)uVar64;
              uVar64 = uVar3;
            } while (uVar3 != 0 && bVar1);
          }
          pfVar71 = param_7 + param_8;
          uVar115 = *(undefined8 *)param_7;
          uVar118 = *(undefined8 *)(param_7 + 2);
          uVar121 = *(undefined8 *)(param_7 + 4);
          uVar134 = *(undefined8 *)(param_7 + 6);
          uVar151 = *(undefined8 *)(param_7 + 8);
          uVar168 = *(undefined8 *)(param_7 + 10);
          uVar177 = *(undefined8 *)(param_7 + 0xc);
          uVar178 = *(undefined8 *)(param_7 + 0xe);
          *param_7 = (float)uVar115 + fVar323 * param_1;
          param_7[1] = (float)((ulong)uVar115 >> 0x20) + fVar77 * param_1;
          param_7[2] = (float)uVar118 + fVar78 * param_1;
          param_7[3] = (float)((ulong)uVar118 >> 0x20) + fVar328 * param_1;
          param_7[4] = (float)uVar121 + fVar324 * param_1;
          param_7[5] = (float)((ulong)uVar121 >> 0x20) + fVar330 * param_1;
          param_7[6] = (float)uVar134 + fVar332 * param_1;
          param_7[7] = (float)((ulong)uVar134 >> 0x20) + fVar79 * param_1;
          param_7[8] = (float)uVar151 + fVar80 * param_1;
          param_7[9] = (float)((ulong)uVar151 >> 0x20) + fVar81 * param_1;
          param_7[10] = (float)uVar168 + fVar82 * param_1;
          param_7[0xb] = (float)((ulong)uVar168 >> 0x20) + fVar83 * param_1;
          param_7[0xc] = (float)uVar177 + fVar326 * param_1;
          param_7[0xd] = (float)((ulong)uVar177 >> 0x20) + fVar84 * param_1;
          param_7[0xe] = (float)uVar178 + fVar333 * param_1;
          param_7[0xf] = (float)((ulong)uVar178 >> 0x20) + fVar335 * param_1;
          uVar115 = *(undefined8 *)pfVar71;
          uVar118 = *(undefined8 *)(pfVar71 + 2);
          uVar121 = *(undefined8 *)(pfVar71 + 4);
          uVar134 = *(undefined8 *)(pfVar71 + 6);
          uVar151 = *(undefined8 *)(pfVar71 + 8);
          uVar168 = *(undefined8 *)(pfVar71 + 10);
          uVar177 = *(undefined8 *)(pfVar71 + 0xc);
          uVar178 = *(undefined8 *)(pfVar71 + 0xe);
          *pfVar71 = (float)uVar115 + fVar85 * param_1;
          pfVar71[1] = (float)((ulong)uVar115 >> 0x20) + fVar86 * param_1;
          pfVar71[2] = (float)uVar118 + fVar338 * param_1;
          pfVar71[3] = (float)((ulong)uVar118 >> 0x20) + fVar87 * param_1;
          pfVar71[4] = (float)uVar121 + fVar325 * param_1;
          pfVar71[5] = (float)((ulong)uVar121 >> 0x20) + fVar331 * param_1;
          pfVar71[6] = (float)uVar134 + fVar88 * param_1;
          pfVar71[7] = (float)((ulong)uVar134 >> 0x20) + fVar337 * param_1;
          pfVar71[8] = (float)uVar151 + fVar89 * param_1;
          pfVar71[9] = (float)((ulong)uVar151 >> 0x20) + fVar90 * param_1;
          pfVar71[10] = (float)uVar168 + fVar91 * param_1;
          pfVar71[0xb] = (float)((ulong)uVar168 >> 0x20) + fVar92 * param_1;
          pfVar71[0xc] = (float)uVar177 + fVar75 * param_1;
          pfVar71[0xd] = (float)((ulong)uVar177 >> 0x20) + fVar93 * param_1;
          pfVar71[0xe] = (float)uVar178 + fVar94 * param_1;
          pfVar71[0xf] = (float)((ulong)uVar178 >> 0x20) + fVar95 * param_1;
          param_7 = param_7 + 0x10;
          lVar63 = lVar66 + -1;
          bVar1 = 0 < lVar66;
          lVar66 = lVar63;
        } while (lVar63 != 0 && bVar1);
      }
      if ((param_2 & 0xf) != 0) {
        if ((param_2 & 8) != 0) {
          fVar325 = 0.0;
          fVar326 = 0.0;
          fVar75 = 0.0;
          fVar76 = 0.0;
          fVar77 = 0.0;
          fVar328 = 0.0;
          fVar329 = 0.0;
          fVar330 = 0.0;
          fVar332 = 0.0;
          fVar78 = 0.0;
          fVar79 = 0.0;
          fVar80 = 0.0;
          fVar81 = 0.0;
          fVar82 = 0.0;
          fVar83 = 0.0;
          fVar84 = 0.0;
          uVar64 = uVar65;
          pfVar71 = param_6;
          fVar323 = fVar325;
          fVar324 = fVar325;
          if (0 < (long)uVar65) {
            do {
              fVar126 = (float)*(undefined8 *)pfVar71;
              fVar323 = (float)*(undefined8 *)pfVar72;
              fVar331 = (float)((ulong)*(undefined8 *)pfVar72 >> 0x20);
              fVar94 = (float)*(undefined8 *)(pfVar72 + 2);
              fVar102 = (float)((ulong)*(undefined8 *)(pfVar72 + 2) >> 0x20);
              fVar110 = (float)*(undefined8 *)(pfVar72 + 4);
              fVar315 = (float)((ulong)*(undefined8 *)(pfVar72 + 4) >> 0x20);
              fVar327 = (float)*(undefined8 *)(pfVar72 + 6);
              fVar196 = (float)((ulong)*(undefined8 *)(pfVar72 + 6) >> 0x20);
              fVar135 = (float)((ulong)*(undefined8 *)pfVar71 >> 0x20);
              fVar127 = (float)*(undefined8 *)(pfVar71 + 2);
              fVar324 = (float)*(undefined8 *)(pfVar72 + 8);
              fVar88 = (float)((ulong)*(undefined8 *)(pfVar72 + 8) >> 0x20);
              fVar95 = (float)*(undefined8 *)(pfVar72 + 10);
              fVar103 = (float)((ulong)*(undefined8 *)(pfVar72 + 10) >> 0x20);
              fVar111 = (float)*(undefined8 *)(pfVar72 + 0xc);
              fVar317 = (float)((ulong)*(undefined8 *)(pfVar72 + 0xc) >> 0x20);
              fVar339 = (float)*(undefined8 *)(pfVar72 + 0xe);
              fVar207 = (float)((ulong)*(undefined8 *)(pfVar72 + 0xe) >> 0x20);
              fVar136 = (float)((ulong)*(undefined8 *)(pfVar71 + 2) >> 0x20);
              fVar128 = (float)*(undefined8 *)(pfVar71 + 4);
              fVar333 = (float)*(undefined8 *)(pfVar72 + 0x10);
              fVar337 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x10) >> 0x20);
              fVar96 = (float)*(undefined8 *)(pfVar72 + 0x12);
              fVar104 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x12) >> 0x20);
              fVar112 = (float)*(undefined8 *)(pfVar72 + 0x14);
              fVar334 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x14) >> 0x20);
              fVar116 = (float)*(undefined8 *)(pfVar72 + 0x16);
              fVar218 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x16) >> 0x20);
              fVar137 = (float)((ulong)*(undefined8 *)(pfVar71 + 4) >> 0x20);
              fVar129 = (float)*(undefined8 *)(pfVar71 + 6);
              fVar335 = (float)*(undefined8 *)(pfVar72 + 0x18);
              fVar89 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x18) >> 0x20);
              fVar97 = (float)*(undefined8 *)(pfVar72 + 0x1a);
              fVar105 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x1a) >> 0x20);
              fVar113 = (float)*(undefined8 *)(pfVar72 + 0x1c);
              fVar336 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x1c) >> 0x20);
              fVar117 = (float)*(undefined8 *)(pfVar72 + 0x1e);
              fVar229 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x1e) >> 0x20);
              fVar138 = (float)((ulong)*(undefined8 *)(pfVar71 + 6) >> 0x20);
              fVar130 = (float)*(undefined8 *)(pfVar71 + 8);
              fVar85 = (float)*(undefined8 *)(pfVar72 + 0x20);
              fVar90 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x20) >> 0x20);
              fVar98 = (float)*(undefined8 *)(pfVar72 + 0x22);
              fVar106 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x22) >> 0x20);
              fVar114 = (float)*(undefined8 *)(pfVar72 + 0x24);
              fVar321 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x24) >> 0x20);
              fVar119 = (float)*(undefined8 *)(pfVar72 + 0x26);
              fVar122 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x26) >> 0x20);
              fVar139 = (float)((ulong)*(undefined8 *)(pfVar71 + 8) >> 0x20);
              fVar131 = (float)*(undefined8 *)(pfVar71 + 10);
              fVar86 = (float)*(undefined8 *)(pfVar72 + 0x28);
              fVar91 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x28) >> 0x20);
              fVar99 = (float)*(undefined8 *)(pfVar72 + 0x2a);
              fVar107 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x2a) >> 0x20);
              fVar296 = (float)*(undefined8 *)(pfVar72 + 0x2c);
              fVar322 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x2c) >> 0x20);
              fVar120 = (float)*(undefined8 *)(pfVar72 + 0x2e);
              fVar123 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x2e) >> 0x20);
              fVar140 = (float)((ulong)*(undefined8 *)(pfVar71 + 10) >> 0x20);
              pfVar73 = pfVar71 + 0xe;
              pfVar68 = pfVar72 + 0x38;
              fVar132 = (float)*(undefined8 *)(pfVar71 + 0xc);
              fVar338 = (float)*(undefined8 *)(pfVar72 + 0x30);
              fVar92 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x30) >> 0x20);
              fVar100 = (float)*(undefined8 *)(pfVar72 + 0x32);
              fVar108 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x32) >> 0x20);
              fVar309 = (float)*(undefined8 *)(pfVar72 + 0x34);
              fVar340 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x34) >> 0x20);
              fVar266 = (float)*(undefined8 *)(pfVar72 + 0x36);
              fVar124 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x36) >> 0x20);
              fVar141 = (float)((ulong)*(undefined8 *)(pfVar71 + 0xc) >> 0x20);
              pfVar71 = pfVar71 + 0x10;
              pfVar69 = pfVar72 + 0x3a;
              pfVar70 = pfVar72 + 0x3c;
              pfVar74 = pfVar72 + 0x3e;
              pfVar72 = pfVar72 + 0x40;
              fVar133 = (float)*(undefined8 *)pfVar73;
              fVar87 = (float)*(undefined8 *)pfVar68;
              fVar93 = (float)((ulong)*(undefined8 *)pfVar68 >> 0x20);
              fVar101 = (float)*(undefined8 *)pfVar69;
              fVar109 = (float)((ulong)*(undefined8 *)pfVar69 >> 0x20);
              fVar326 = fVar326 + fVar323 * fVar126 + fVar324 * fVar127 + fVar333 * fVar128 +
                        fVar335 * fVar129 + fVar85 * fVar130 + fVar86 * fVar131 + fVar338 * fVar132
                        + fVar87 * fVar133;
              fVar75 = fVar75 + fVar331 * fVar126 + fVar88 * fVar127 + fVar337 * fVar128 +
                       fVar89 * fVar129 + fVar90 * fVar130 + fVar91 * fVar131 + fVar92 * fVar132 +
                       fVar93 * fVar133;
              fVar76 = fVar76 + fVar94 * fVar126 + fVar95 * fVar127 + fVar96 * fVar128 +
                       fVar97 * fVar129 + fVar98 * fVar130 + fVar99 * fVar131 + fVar100 * fVar132 +
                       fVar101 * fVar133;
              fVar77 = fVar77 + fVar102 * fVar126 + fVar103 * fVar127 + fVar104 * fVar128 +
                       fVar105 * fVar129 + fVar106 * fVar130 + fVar107 * fVar131 + fVar108 * fVar132
                       + fVar109 * fVar133;
              fVar310 = (float)*(undefined8 *)pfVar70;
              fVar341 = (float)((ulong)*(undefined8 *)pfVar70 >> 0x20);
              fVar279 = (float)*(undefined8 *)pfVar74;
              fVar125 = (float)((ulong)*(undefined8 *)pfVar74 >> 0x20);
              fVar328 = fVar328 + fVar110 * fVar126 + fVar111 * fVar127 + fVar112 * fVar128 +
                        fVar113 * fVar129 + fVar114 * fVar130 + fVar296 * fVar131 +
                        fVar309 * fVar132 + fVar310 * fVar133;
              fVar329 = fVar329 + fVar315 * fVar126 + fVar317 * fVar127 + fVar334 * fVar128 +
                        fVar336 * fVar129 + fVar321 * fVar130 + fVar322 * fVar131 +
                        fVar340 * fVar132 + fVar341 * fVar133;
              fVar330 = fVar330 + fVar327 * fVar126 + fVar339 * fVar127 + fVar116 * fVar128 +
                        fVar117 * fVar129 + fVar119 * fVar130 + fVar120 * fVar131 +
                        fVar266 * fVar132 + fVar279 * fVar133;
              fVar332 = fVar332 + fVar196 * fVar126 + fVar207 * fVar127 + fVar218 * fVar128 +
                        fVar229 * fVar129 + fVar122 * fVar130 + fVar123 * fVar131 +
                        fVar124 * fVar132 + fVar125 * fVar133;
              fVar126 = (float)((ulong)*(undefined8 *)pfVar73 >> 0x20);
              fVar78 = fVar78 + fVar323 * fVar135 + fVar324 * fVar136 + fVar333 * fVar137 +
                       fVar335 * fVar138 + fVar85 * fVar139 + fVar86 * fVar140 + fVar338 * fVar141 +
                       fVar87 * fVar126;
              fVar79 = fVar79 + fVar331 * fVar135 + fVar88 * fVar136 + fVar337 * fVar137 +
                       fVar89 * fVar138 + fVar90 * fVar139 + fVar91 * fVar140 + fVar92 * fVar141 +
                       fVar93 * fVar126;
              fVar80 = fVar80 + fVar94 * fVar135 + fVar95 * fVar136 + fVar96 * fVar137 +
                       fVar97 * fVar138 + fVar98 * fVar139 + fVar99 * fVar140 + fVar100 * fVar141 +
                       fVar101 * fVar126;
              fVar81 = fVar81 + fVar102 * fVar135 + fVar103 * fVar136 + fVar104 * fVar137 +
                       fVar105 * fVar138 + fVar106 * fVar139 + fVar107 * fVar140 + fVar108 * fVar141
                       + fVar109 * fVar126;
              fVar325 = fVar325 + fVar110 * fVar135 + fVar111 * fVar136 + fVar112 * fVar137 +
                        fVar113 * fVar138 + fVar114 * fVar139 + fVar296 * fVar140 +
                        fVar309 * fVar141 + fVar310 * fVar126;
              fVar82 = fVar82 + fVar315 * fVar135 + fVar317 * fVar136 + fVar334 * fVar137 +
                       fVar336 * fVar138 + fVar321 * fVar139 + fVar322 * fVar140 + fVar340 * fVar141
                       + fVar341 * fVar126;
              fVar83 = fVar83 + fVar327 * fVar135 + fVar339 * fVar136 + fVar116 * fVar137 +
                       fVar117 * fVar138 + fVar119 * fVar139 + fVar120 * fVar140 + fVar266 * fVar141
                       + fVar279 * fVar126;
              fVar84 = fVar84 + fVar196 * fVar135 + fVar207 * fVar136 + fVar218 * fVar137 +
                       fVar229 * fVar138 + fVar122 * fVar139 + fVar123 * fVar140 + fVar124 * fVar141
                       + fVar125 * fVar126;
              uVar3 = uVar64 - 1;
              bVar1 = 0 < (long)uVar64;
              uVar64 = uVar3;
              fVar323 = fVar326;
              fVar324 = fVar328;
            } while (uVar3 != 0 && bVar1);
          }
          uVar64 = param_4 & 7;
          if ((param_4 & 7) != 0) {
            do {
              uVar115 = *(undefined8 *)pfVar71;
              pfVar71 = pfVar71 + 2;
              uVar118 = *(undefined8 *)pfVar72;
              pfVar68 = pfVar72 + 2;
              pfVar73 = pfVar72 + 4;
              pfVar70 = pfVar72 + 6;
              pfVar72 = pfVar72 + 8;
              fVar331 = (float)uVar115;
              fVar326 = (float)uVar118;
              fVar328 = (float)((ulong)uVar118 >> 0x20);
              fVar333 = (float)*(undefined8 *)pfVar68;
              fVar335 = (float)((ulong)*(undefined8 *)pfVar68 >> 0x20);
              fVar323 = fVar323 + fVar326 * fVar331;
              fVar75 = fVar75 + fVar328 * fVar331;
              fVar76 = fVar76 + fVar333 * fVar331;
              fVar77 = fVar77 + fVar335 * fVar331;
              fVar85 = (float)*(undefined8 *)pfVar73;
              fVar86 = (float)((ulong)*(undefined8 *)pfVar73 >> 0x20);
              fVar338 = (float)*(undefined8 *)pfVar70;
              fVar87 = (float)((ulong)*(undefined8 *)pfVar70 >> 0x20);
              fVar324 = fVar324 + fVar85 * fVar331;
              fVar329 = fVar329 + fVar86 * fVar331;
              fVar330 = fVar330 + fVar338 * fVar331;
              fVar332 = fVar332 + fVar87 * fVar331;
              fVar331 = (float)((ulong)uVar115 >> 0x20);
              fVar78 = fVar78 + fVar326 * fVar331;
              fVar79 = fVar79 + fVar328 * fVar331;
              fVar80 = fVar80 + fVar333 * fVar331;
              fVar81 = fVar81 + fVar335 * fVar331;
              fVar325 = fVar325 + fVar85 * fVar331;
              fVar82 = fVar82 + fVar86 * fVar331;
              fVar83 = fVar83 + fVar338 * fVar331;
              fVar84 = fVar84 + fVar87 * fVar331;
              uVar3 = uVar64 - 1;
              bVar1 = 0 < (long)uVar64;
              uVar64 = uVar3;
            } while (uVar3 != 0 && bVar1);
          }
          pfVar71 = param_7 + param_8;
          uVar115 = *(undefined8 *)param_7;
          uVar118 = *(undefined8 *)(param_7 + 2);
          uVar121 = *(undefined8 *)(param_7 + 4);
          uVar134 = *(undefined8 *)(param_7 + 6);
          *param_7 = (float)uVar115 + fVar323 * param_1;
          param_7[1] = (float)((ulong)uVar115 >> 0x20) + fVar75 * param_1;
          param_7[2] = (float)uVar118 + fVar76 * param_1;
          param_7[3] = (float)((ulong)uVar118 >> 0x20) + fVar77 * param_1;
          param_7[4] = (float)uVar121 + fVar324 * param_1;
          param_7[5] = (float)((ulong)uVar121 >> 0x20) + fVar329 * param_1;
          param_7[6] = (float)uVar134 + fVar330 * param_1;
          param_7[7] = (float)((ulong)uVar134 >> 0x20) + fVar332 * param_1;
          uVar115 = *(undefined8 *)pfVar71;
          uVar118 = *(undefined8 *)(pfVar71 + 2);
          uVar121 = *(undefined8 *)(pfVar71 + 4);
          uVar134 = *(undefined8 *)(pfVar71 + 6);
          *pfVar71 = (float)uVar115 + fVar78 * param_1;
          pfVar71[1] = (float)((ulong)uVar115 >> 0x20) + fVar79 * param_1;
          pfVar71[2] = (float)uVar118 + fVar80 * param_1;
          pfVar71[3] = (float)((ulong)uVar118 >> 0x20) + fVar81 * param_1;
          pfVar71[4] = (float)uVar121 + fVar325 * param_1;
          pfVar71[5] = (float)((ulong)uVar121 >> 0x20) + fVar82 * param_1;
          pfVar71[6] = (float)uVar134 + fVar83 * param_1;
          pfVar71[7] = (float)((ulong)uVar134 >> 0x20) + fVar84 * param_1;
          param_7 = param_7 + 8;
        }
        if ((param_2 & 7) != 0) {
          if ((param_2 & 4) != 0) {
            fVar325 = 0.0;
            fVar326 = 0.0;
            fVar75 = 0.0;
            fVar77 = 0.0;
            fVar78 = 0.0;
            fVar76 = 0.0;
            fVar328 = 0.0;
            fVar329 = 0.0;
            uVar64 = uVar65;
            pfVar71 = param_6;
            fVar323 = fVar325;
            fVar324 = fVar325;
            if (0 < (long)uVar65) {
              do {
                fVar102 = (float)*(undefined8 *)pfVar71;
                fVar323 = (float)*(undefined8 *)pfVar72;
                fVar83 = (float)((ulong)*(undefined8 *)pfVar72 >> 0x20);
                fVar331 = (float)*(undefined8 *)(pfVar72 + 2);
                fVar94 = (float)((ulong)*(undefined8 *)(pfVar72 + 2) >> 0x20);
                fVar110 = (float)((ulong)*(undefined8 *)pfVar71 >> 0x20);
                fVar103 = (float)*(undefined8 *)(pfVar71 + 2);
                fVar324 = (float)*(undefined8 *)(pfVar72 + 4);
                fVar84 = (float)((ulong)*(undefined8 *)(pfVar72 + 4) >> 0x20);
                fVar88 = (float)*(undefined8 *)(pfVar72 + 6);
                fVar95 = (float)((ulong)*(undefined8 *)(pfVar72 + 6) >> 0x20);
                fVar111 = (float)((ulong)*(undefined8 *)(pfVar71 + 2) >> 0x20);
                fVar104 = (float)*(undefined8 *)(pfVar71 + 4);
                fVar330 = (float)*(undefined8 *)(pfVar72 + 8);
                fVar333 = (float)((ulong)*(undefined8 *)(pfVar72 + 8) >> 0x20);
                fVar337 = (float)*(undefined8 *)(pfVar72 + 10);
                fVar96 = (float)((ulong)*(undefined8 *)(pfVar72 + 10) >> 0x20);
                fVar112 = (float)((ulong)*(undefined8 *)(pfVar71 + 4) >> 0x20);
                fVar105 = (float)*(undefined8 *)(pfVar71 + 6);
                fVar332 = (float)*(undefined8 *)(pfVar72 + 0xc);
                fVar335 = (float)((ulong)*(undefined8 *)(pfVar72 + 0xc) >> 0x20);
                fVar89 = (float)*(undefined8 *)(pfVar72 + 0xe);
                fVar97 = (float)((ulong)*(undefined8 *)(pfVar72 + 0xe) >> 0x20);
                fVar113 = (float)((ulong)*(undefined8 *)(pfVar71 + 6) >> 0x20);
                fVar106 = (float)*(undefined8 *)(pfVar71 + 8);
                fVar79 = (float)*(undefined8 *)(pfVar72 + 0x10);
                fVar85 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x10) >> 0x20);
                fVar90 = (float)*(undefined8 *)(pfVar72 + 0x12);
                fVar98 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x12) >> 0x20);
                fVar114 = (float)((ulong)*(undefined8 *)(pfVar71 + 8) >> 0x20);
                fVar107 = (float)*(undefined8 *)(pfVar71 + 10);
                fVar80 = (float)*(undefined8 *)(pfVar72 + 0x14);
                fVar86 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x14) >> 0x20);
                fVar91 = (float)*(undefined8 *)(pfVar72 + 0x16);
                fVar99 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x16) >> 0x20);
                fVar296 = (float)((ulong)*(undefined8 *)(pfVar71 + 10) >> 0x20);
                pfVar73 = pfVar71 + 0xe;
                pfVar68 = pfVar72 + 0x1c;
                fVar108 = (float)*(undefined8 *)(pfVar71 + 0xc);
                fVar81 = (float)*(undefined8 *)(pfVar72 + 0x18);
                fVar338 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x18) >> 0x20);
                fVar92 = (float)*(undefined8 *)(pfVar72 + 0x1a);
                fVar100 = (float)((ulong)*(undefined8 *)(pfVar72 + 0x1a) >> 0x20);
                fVar309 = (float)((ulong)*(undefined8 *)(pfVar71 + 0xc) >> 0x20);
                pfVar71 = pfVar71 + 0x10;
                pfVar70 = pfVar72 + 0x1e;
                pfVar72 = pfVar72 + 0x20;
                fVar109 = (float)*(undefined8 *)pfVar73;
                fVar82 = (float)*(undefined8 *)pfVar68;
                fVar87 = (float)((ulong)*(undefined8 *)pfVar68 >> 0x20);
                fVar326 = fVar326 + fVar323 * fVar102 + fVar324 * fVar103 + fVar330 * fVar104 +
                          fVar332 * fVar105 + fVar79 * fVar106 + fVar80 * fVar107 + fVar81 * fVar108
                          + fVar82 * fVar109;
                fVar75 = fVar75 + fVar83 * fVar102 + fVar84 * fVar103 + fVar333 * fVar104 +
                         fVar335 * fVar105 + fVar85 * fVar106 + fVar86 * fVar107 + fVar338 * fVar108
                         + fVar87 * fVar109;
                fVar93 = (float)*(undefined8 *)pfVar70;
                fVar101 = (float)((ulong)*(undefined8 *)pfVar70 >> 0x20);
                fVar77 = fVar77 + fVar331 * fVar102 + fVar88 * fVar103 + fVar337 * fVar104 +
                         fVar89 * fVar105 + fVar90 * fVar106 + fVar91 * fVar107 + fVar92 * fVar108 +
                         fVar93 * fVar109;
                fVar78 = fVar78 + fVar94 * fVar102 + fVar95 * fVar103 + fVar96 * fVar104 +
                         fVar97 * fVar105 + fVar98 * fVar106 + fVar99 * fVar107 + fVar100 * fVar108
                         + fVar101 * fVar109;
                fVar102 = (float)((ulong)*(undefined8 *)pfVar73 >> 0x20);
                fVar76 = fVar76 + fVar323 * fVar110 + fVar324 * fVar111 + fVar330 * fVar112 +
                         fVar332 * fVar113 + fVar79 * fVar114 + fVar80 * fVar296 + fVar81 * fVar309
                         + fVar82 * fVar102;
                fVar328 = fVar328 + fVar83 * fVar110 + fVar84 * fVar111 + fVar333 * fVar112 +
                          fVar335 * fVar113 + fVar85 * fVar114 + fVar86 * fVar296 +
                          fVar338 * fVar309 + fVar87 * fVar102;
                fVar325 = fVar325 + fVar331 * fVar110 + fVar88 * fVar111 + fVar337 * fVar112 +
                          fVar89 * fVar113 + fVar90 * fVar114 + fVar91 * fVar296 + fVar92 * fVar309
                          + fVar93 * fVar102;
                fVar329 = fVar329 + fVar94 * fVar110 + fVar95 * fVar111 + fVar96 * fVar112 +
                          fVar97 * fVar113 + fVar98 * fVar114 + fVar99 * fVar296 + fVar100 * fVar309
                          + fVar101 * fVar102;
                uVar3 = uVar64 - 1;
                bVar1 = 0 < (long)uVar64;
                uVar64 = uVar3;
                fVar323 = fVar326;
                fVar324 = fVar77;
              } while (uVar3 != 0 && bVar1);
            }
            uVar64 = param_4 & 7;
            if ((param_4 & 7) != 0) {
              do {
                uVar115 = *(undefined8 *)pfVar71;
                pfVar71 = pfVar71 + 2;
                uVar118 = *(undefined8 *)pfVar72;
                pfVar73 = pfVar72 + 2;
                pfVar72 = pfVar72 + 4;
                fVar79 = (float)uVar115;
                fVar326 = (float)uVar118;
                fVar77 = (float)((ulong)uVar118 >> 0x20);
                fVar323 = fVar323 + fVar326 * fVar79;
                fVar75 = fVar75 + fVar77 * fVar79;
                fVar330 = (float)*(undefined8 *)pfVar73;
                fVar332 = (float)((ulong)*(undefined8 *)pfVar73 >> 0x20);
                fVar324 = fVar324 + fVar330 * fVar79;
                fVar78 = fVar78 + fVar332 * fVar79;
                fVar79 = (float)((ulong)uVar115 >> 0x20);
                fVar76 = fVar76 + fVar326 * fVar79;
                fVar328 = fVar328 + fVar77 * fVar79;
                fVar325 = fVar325 + fVar330 * fVar79;
                fVar329 = fVar329 + fVar332 * fVar79;
                uVar3 = uVar64 - 1;
                bVar1 = 0 < (long)uVar64;
                uVar64 = uVar3;
              } while (uVar3 != 0 && bVar1);
            }
            uVar115 = *(undefined8 *)param_7;
            uVar118 = *(undefined8 *)(param_7 + 2);
            *param_7 = (float)uVar115 + fVar323 * param_1;
            param_7[1] = (float)((ulong)uVar115 >> 0x20) + fVar75 * param_1;
            param_7[2] = (float)uVar118 + fVar324 * param_1;
            param_7[3] = (float)((ulong)uVar118 >> 0x20) + fVar78 * param_1;
            pfVar71 = param_7 + param_8;
            uVar115 = *(undefined8 *)pfVar71;
            uVar118 = *(undefined8 *)(pfVar71 + 2);
            *pfVar71 = (float)uVar115 + fVar76 * param_1;
            pfVar71[1] = (float)((ulong)uVar115 >> 0x20) + fVar328 * param_1;
            pfVar71[2] = (float)uVar118 + fVar325 * param_1;
            pfVar71[3] = (float)((ulong)uVar118 >> 0x20) + fVar329 * param_1;
            param_7 = param_7 + 4;
          }
          if ((param_2 & 3) != 0) {
            if ((param_2 & 2) != 0) {
              fVar325 = 0.0;
              fVar326 = 0.0;
              fVar324 = 0.0;
              fVar75 = 0.0;
              uVar64 = uVar65;
              pfVar71 = param_6;
              fVar323 = 0.0;
              if (0 < (long)uVar65) {
                do {
                  fVar85 = (float)*(undefined8 *)pfVar71;
                  fVar323 = (float)*(undefined8 *)pfVar72;
                  fVar79 = (float)((ulong)*(undefined8 *)pfVar72 >> 0x20);
                  fVar90 = (float)((ulong)*(undefined8 *)pfVar71 >> 0x20);
                  fVar86 = (float)*(undefined8 *)(pfVar71 + 2);
                  fVar76 = (float)*(undefined8 *)(pfVar72 + 2);
                  fVar80 = (float)((ulong)*(undefined8 *)(pfVar72 + 2) >> 0x20);
                  fVar91 = (float)((ulong)*(undefined8 *)(pfVar71 + 2) >> 0x20);
                  fVar338 = (float)*(undefined8 *)(pfVar71 + 4);
                  fVar77 = (float)*(undefined8 *)(pfVar72 + 4);
                  fVar81 = (float)((ulong)*(undefined8 *)(pfVar72 + 4) >> 0x20);
                  fVar92 = (float)((ulong)*(undefined8 *)(pfVar71 + 4) >> 0x20);
                  fVar87 = (float)*(undefined8 *)(pfVar71 + 6);
                  fVar78 = (float)*(undefined8 *)(pfVar72 + 6);
                  fVar82 = (float)((ulong)*(undefined8 *)(pfVar72 + 6) >> 0x20);
                  fVar93 = (float)((ulong)*(undefined8 *)(pfVar71 + 6) >> 0x20);
                  fVar331 = (float)*(undefined8 *)(pfVar71 + 8);
                  fVar328 = (float)*(undefined8 *)(pfVar72 + 8);
                  fVar83 = (float)((ulong)*(undefined8 *)(pfVar72 + 8) >> 0x20);
                  fVar94 = (float)((ulong)*(undefined8 *)(pfVar71 + 8) >> 0x20);
                  fVar88 = (float)*(undefined8 *)(pfVar71 + 10);
                  fVar329 = (float)*(undefined8 *)(pfVar72 + 10);
                  fVar84 = (float)((ulong)*(undefined8 *)(pfVar72 + 10) >> 0x20);
                  fVar95 = (float)((ulong)*(undefined8 *)(pfVar71 + 10) >> 0x20);
                  pfVar73 = pfVar71 + 0xe;
                  pfVar68 = pfVar72 + 0xe;
                  fVar337 = (float)*(undefined8 *)(pfVar71 + 0xc);
                  fVar330 = (float)*(undefined8 *)(pfVar72 + 0xc);
                  fVar333 = (float)((ulong)*(undefined8 *)(pfVar72 + 0xc) >> 0x20);
                  fVar96 = (float)((ulong)*(undefined8 *)(pfVar71 + 0xc) >> 0x20);
                  pfVar71 = pfVar71 + 0x10;
                  pfVar72 = pfVar72 + 0x10;
                  fVar89 = (float)*(undefined8 *)pfVar73;
                  fVar332 = (float)*(undefined8 *)pfVar68;
                  fVar335 = (float)((ulong)*(undefined8 *)pfVar68 >> 0x20);
                  fVar325 = fVar325 + fVar323 * fVar85 + fVar76 * fVar86 + fVar77 * fVar338 +
                            fVar78 * fVar87 + fVar328 * fVar331 + fVar329 * fVar88 +
                            fVar330 * fVar337 + fVar332 * fVar89;
                  fVar326 = fVar326 + fVar79 * fVar85 + fVar80 * fVar86 + fVar81 * fVar338 +
                            fVar82 * fVar87 + fVar83 * fVar331 + fVar84 * fVar88 + fVar333 * fVar337
                            + fVar335 * fVar89;
                  fVar85 = (float)((ulong)*(undefined8 *)pfVar73 >> 0x20);
                  fVar324 = fVar324 + fVar323 * fVar90 + fVar76 * fVar91 + fVar77 * fVar92 +
                            fVar78 * fVar93 + fVar328 * fVar94 + fVar329 * fVar95 + fVar330 * fVar96
                            + fVar332 * fVar85;
                  fVar75 = fVar75 + fVar79 * fVar90 + fVar80 * fVar91 + fVar81 * fVar92 +
                           fVar82 * fVar93 + fVar83 * fVar94 + fVar84 * fVar95 + fVar333 * fVar96 +
                           fVar335 * fVar85;
                  uVar3 = uVar64 - 1;
                  bVar1 = 0 < (long)uVar64;
                  uVar64 = uVar3;
                  fVar323 = fVar325;
                } while (uVar3 != 0 && bVar1);
              }
              uVar64 = param_4 & 7;
              if ((param_4 & 7) != 0) {
                do {
                  uVar115 = *(undefined8 *)pfVar71;
                  pfVar71 = pfVar71 + 2;
                  uVar118 = *(undefined8 *)pfVar72;
                  pfVar72 = pfVar72 + 2;
                  fVar77 = (float)uVar115;
                  fVar325 = (float)uVar118;
                  fVar76 = (float)((ulong)uVar118 >> 0x20);
                  fVar323 = fVar323 + fVar325 * fVar77;
                  fVar326 = fVar326 + fVar76 * fVar77;
                  fVar77 = (float)((ulong)uVar115 >> 0x20);
                  fVar324 = fVar324 + fVar325 * fVar77;
                  fVar75 = fVar75 + fVar76 * fVar77;
                  uVar3 = uVar64 - 1;
                  bVar1 = 0 < (long)uVar64;
                  uVar64 = uVar3;
                } while (uVar3 != 0 && bVar1);
              }
              uVar115 = *(undefined8 *)param_7;
              *param_7 = (float)uVar115 + fVar323 * param_1;
              param_7[1] = (float)((ulong)uVar115 >> 0x20) + fVar326 * param_1;
              pfVar71 = param_7 + param_8;
              uVar115 = *(undefined8 *)pfVar71;
              *pfVar71 = (float)uVar115 + fVar324 * param_1;
              pfVar71[1] = (float)((ulong)uVar115 >> 0x20) + fVar75 * param_1;
              param_7 = param_7 + 2;
            }
            if ((param_2 & 1) != 0) {
              fVar324 = 0.0;
              fVar325 = 0.0;
              uVar64 = uVar65;
              pfVar71 = param_6;
              fVar323 = 0.0;
              if (0 < (long)uVar65) {
                do {
                  uVar115 = *(undefined8 *)pfVar71;
                  pfVar73 = pfVar71 + 2;
                  fVar323 = *pfVar72;
                  pfVar68 = pfVar72 + 1;
                  pfVar70 = pfVar71 + 4;
                  pfVar69 = pfVar72 + 2;
                  pfVar74 = pfVar71 + 6;
                  pfVar12 = pfVar72 + 3;
                  pfVar13 = pfVar71 + 8;
                  pfVar14 = pfVar72 + 4;
                  pfVar15 = pfVar71 + 10;
                  pfVar60 = pfVar72 + 5;
                  pfVar4 = pfVar71 + 0xc;
                  pfVar5 = pfVar72 + 6;
                  pfVar6 = pfVar71 + 0xe;
                  pfVar7 = pfVar72 + 7;
                  pfVar71 = pfVar71 + 0x10;
                  pfVar72 = pfVar72 + 8;
                  fVar324 = fVar324 + (float)uVar115 * fVar323 +
                            (float)*(undefined8 *)pfVar73 * *pfVar68 +
                            (float)*(undefined8 *)pfVar70 * *pfVar69 +
                            (float)*(undefined8 *)pfVar74 * *pfVar12 +
                            (float)*(undefined8 *)pfVar13 * *pfVar14 +
                            (float)*(undefined8 *)pfVar15 * *pfVar60 +
                            (float)*(undefined8 *)pfVar4 * *pfVar5 +
                            (float)*(undefined8 *)pfVar6 * *pfVar7;
                  fVar325 = fVar325 + (float)((ulong)uVar115 >> 0x20) * fVar323 +
                            (float)((ulong)*(undefined8 *)pfVar73 >> 0x20) * *pfVar68 +
                            (float)((ulong)*(undefined8 *)pfVar70 >> 0x20) * *pfVar69 +
                            (float)((ulong)*(undefined8 *)pfVar74 >> 0x20) * *pfVar12 +
                            (float)((ulong)*(undefined8 *)pfVar13 >> 0x20) * *pfVar14 +
                            (float)((ulong)*(undefined8 *)pfVar15 >> 0x20) * *pfVar60 +
                            (float)((ulong)*(undefined8 *)pfVar4 >> 0x20) * *pfVar5 +
                            (float)((ulong)*(undefined8 *)pfVar6 >> 0x20) * *pfVar7;
                  uVar3 = uVar64 - 1;
                  bVar1 = 0 < (long)uVar64;
                  uVar64 = uVar3;
                  fVar323 = fVar324;
                } while (uVar3 != 0 && bVar1);
              }
              uVar64 = param_4 & 7;
              if ((param_4 & 7) != 0) {
                do {
                  uVar115 = *(undefined8 *)pfVar71;
                  pfVar71 = pfVar71 + 2;
                  fVar324 = *pfVar72;
                  pfVar72 = pfVar72 + 1;
                  fVar323 = fVar323 + (float)uVar115 * fVar324;
                  fVar325 = fVar325 + (float)((ulong)uVar115 >> 0x20) * fVar324;
                  uVar3 = uVar64 - 1;
                  bVar1 = 0 < (long)uVar64;
                  uVar64 = uVar3;
                } while (uVar3 != 0 && bVar1);
              }
              fVar324 = param_7[param_8];
              *param_7 = *param_7 + fVar323 * param_1;
              param_7[param_8] = fVar324 + fVar325 * param_1;
            }
          }
        }
      }
      param_6 = param_6 + param_4 * 2;
    }
    if ((param_3 & 1) != 0) {
      if (0 < lVar67) {
        do {
          fVar326 = 0.0;
          fVar75 = 0.0;
          fVar76 = 0.0;
          fVar77 = 0.0;
          fVar78 = 0.0;
          fVar328 = 0.0;
          fVar329 = 0.0;
          fVar330 = 0.0;
          fVar332 = 0.0;
          fVar79 = 0.0;
          fVar80 = 0.0;
          fVar81 = 0.0;
          fVar325 = 0.0;
          fVar82 = 0.0;
          fVar83 = 0.0;
          fVar84 = 0.0;
          uVar64 = uVar65;
          pfVar72 = param_6;
          fVar323 = 0.0;
          fVar324 = 0.0;
          if (0 < (long)uVar65) {
            do {
              fVar323 = *pfVar72;
              uVar115 = *(undefined8 *)param_5;
              pfVar16 = param_5 + 2;
              pfVar71 = param_5 + 4;
              pfVar17 = param_5 + 6;
              pfVar73 = param_5 + 8;
              pfVar18 = param_5 + 10;
              pfVar68 = param_5 + 0xc;
              pfVar19 = param_5 + 0xe;
              pfVar70 = param_5 + 0x10;
              fVar324 = pfVar72[1];
              pfVar20 = param_5 + 0x12;
              pfVar69 = param_5 + 0x14;
              pfVar21 = param_5 + 0x16;
              pfVar74 = param_5 + 0x18;
              pfVar22 = param_5 + 0x1a;
              pfVar12 = param_5 + 0x1c;
              pfVar23 = param_5 + 0x1e;
              pfVar13 = param_5 + 0x20;
              fVar333 = pfVar72[2];
              pfVar24 = param_5 + 0x22;
              pfVar14 = param_5 + 0x24;
              pfVar25 = param_5 + 0x26;
              pfVar15 = param_5 + 0x28;
              pfVar26 = param_5 + 0x2a;
              pfVar60 = param_5 + 0x2c;
              pfVar27 = param_5 + 0x2e;
              pfVar4 = param_5 + 0x30;
              fVar335 = pfVar72[3];
              pfVar28 = param_5 + 0x32;
              pfVar5 = param_5 + 0x34;
              pfVar29 = param_5 + 0x36;
              pfVar6 = param_5 + 0x38;
              pfVar30 = param_5 + 0x3a;
              pfVar7 = param_5 + 0x3c;
              pfVar31 = param_5 + 0x3e;
              pfVar8 = param_5 + 0x40;
              fVar85 = pfVar72[4];
              pfVar32 = param_5 + 0x42;
              pfVar9 = param_5 + 0x44;
              pfVar33 = param_5 + 0x46;
              pfVar10 = param_5 + 0x48;
              pfVar34 = param_5 + 0x4a;
              pfVar11 = param_5 + 0x4c;
              pfVar35 = param_5 + 0x4e;
              pfVar48 = param_5 + 0x50;
              fVar86 = pfVar72[5];
              pfVar36 = param_5 + 0x52;
              pfVar49 = param_5 + 0x54;
              pfVar37 = param_5 + 0x56;
              pfVar50 = param_5 + 0x58;
              pfVar38 = param_5 + 0x5a;
              pfVar51 = param_5 + 0x5c;
              pfVar39 = param_5 + 0x5e;
              pfVar52 = param_5 + 0x60;
              fVar338 = pfVar72[6];
              pfVar40 = param_5 + 0x62;
              pfVar53 = param_5 + 100;
              pfVar41 = param_5 + 0x66;
              pfVar54 = param_5 + 0x68;
              pfVar42 = param_5 + 0x6a;
              pfVar55 = param_5 + 0x6c;
              pfVar43 = param_5 + 0x6e;
              pfVar56 = param_5 + 0x70;
              fVar87 = pfVar72[7];
              pfVar72 = pfVar72 + 8;
              pfVar44 = param_5 + 0x72;
              pfVar57 = param_5 + 0x74;
              pfVar45 = param_5 + 0x76;
              pfVar58 = param_5 + 0x78;
              pfVar46 = param_5 + 0x7a;
              pfVar59 = param_5 + 0x7c;
              pfVar47 = param_5 + 0x7e;
              param_5 = param_5 + 0x80;
              fVar326 = fVar326 + (float)uVar115 * fVar323 + (float)*(undefined8 *)pfVar70 * fVar324
                        + (float)*(undefined8 *)pfVar13 * fVar333 +
                        (float)*(undefined8 *)pfVar4 * fVar335 +
                        (float)*(undefined8 *)pfVar8 * fVar85 +
                        (float)*(undefined8 *)pfVar48 * fVar86 +
                        (float)*(undefined8 *)pfVar52 * fVar338 +
                        (float)*(undefined8 *)pfVar56 * fVar87;
              fVar75 = fVar75 + (float)((ulong)uVar115 >> 0x20) * fVar323 +
                       (float)((ulong)*(undefined8 *)pfVar70 >> 0x20) * fVar324 +
                       (float)((ulong)*(undefined8 *)pfVar13 >> 0x20) * fVar333 +
                       (float)((ulong)*(undefined8 *)pfVar4 >> 0x20) * fVar335 +
                       (float)((ulong)*(undefined8 *)pfVar8 >> 0x20) * fVar85 +
                       (float)((ulong)*(undefined8 *)pfVar48 >> 0x20) * fVar86 +
                       (float)((ulong)*(undefined8 *)pfVar52 >> 0x20) * fVar338 +
                       (float)((ulong)*(undefined8 *)pfVar56 >> 0x20) * fVar87;
              fVar76 = fVar76 + (float)*(undefined8 *)pfVar16 * fVar323 +
                       (float)*(undefined8 *)pfVar20 * fVar324 +
                       (float)*(undefined8 *)pfVar24 * fVar333 +
                       (float)*(undefined8 *)pfVar28 * fVar335 +
                       (float)*(undefined8 *)pfVar32 * fVar85 +
                       (float)*(undefined8 *)pfVar36 * fVar86 +
                       (float)*(undefined8 *)pfVar40 * fVar338 +
                       (float)*(undefined8 *)pfVar44 * fVar87;
              fVar77 = fVar77 + (float)((ulong)*(undefined8 *)pfVar16 >> 0x20) * fVar323 +
                       (float)((ulong)*(undefined8 *)pfVar20 >> 0x20) * fVar324 +
                       (float)((ulong)*(undefined8 *)pfVar24 >> 0x20) * fVar333 +
                       (float)((ulong)*(undefined8 *)pfVar28 >> 0x20) * fVar335 +
                       (float)((ulong)*(undefined8 *)pfVar32 >> 0x20) * fVar85 +
                       (float)((ulong)*(undefined8 *)pfVar36 >> 0x20) * fVar86 +
                       (float)((ulong)*(undefined8 *)pfVar40 >> 0x20) * fVar338 +
                       (float)((ulong)*(undefined8 *)pfVar44 >> 0x20) * fVar87;
              fVar78 = fVar78 + (float)*(undefined8 *)pfVar71 * fVar323 +
                       (float)*(undefined8 *)pfVar69 * fVar324 +
                       (float)*(undefined8 *)pfVar14 * fVar333 +
                       (float)*(undefined8 *)pfVar5 * fVar335 +
                       (float)*(undefined8 *)pfVar9 * fVar85 +
                       (float)*(undefined8 *)pfVar49 * fVar86 +
                       (float)*(undefined8 *)pfVar53 * fVar338 +
                       (float)*(undefined8 *)pfVar57 * fVar87;
              fVar328 = fVar328 + (float)((ulong)*(undefined8 *)pfVar71 >> 0x20) * fVar323 +
                        (float)((ulong)*(undefined8 *)pfVar69 >> 0x20) * fVar324 +
                        (float)((ulong)*(undefined8 *)pfVar14 >> 0x20) * fVar333 +
                        (float)((ulong)*(undefined8 *)pfVar5 >> 0x20) * fVar335 +
                        (float)((ulong)*(undefined8 *)pfVar9 >> 0x20) * fVar85 +
                        (float)((ulong)*(undefined8 *)pfVar49 >> 0x20) * fVar86 +
                        (float)((ulong)*(undefined8 *)pfVar53 >> 0x20) * fVar338 +
                        (float)((ulong)*(undefined8 *)pfVar57 >> 0x20) * fVar87;
              fVar329 = fVar329 + (float)*(undefined8 *)pfVar17 * fVar323 +
                        (float)*(undefined8 *)pfVar21 * fVar324 +
                        (float)*(undefined8 *)pfVar25 * fVar333 +
                        (float)*(undefined8 *)pfVar29 * fVar335 +
                        (float)*(undefined8 *)pfVar33 * fVar85 +
                        (float)*(undefined8 *)pfVar37 * fVar86 +
                        (float)*(undefined8 *)pfVar41 * fVar338 +
                        (float)*(undefined8 *)pfVar45 * fVar87;
              fVar330 = fVar330 + (float)((ulong)*(undefined8 *)pfVar17 >> 0x20) * fVar323 +
                        (float)((ulong)*(undefined8 *)pfVar21 >> 0x20) * fVar324 +
                        (float)((ulong)*(undefined8 *)pfVar25 >> 0x20) * fVar333 +
                        (float)((ulong)*(undefined8 *)pfVar29 >> 0x20) * fVar335 +
                        (float)((ulong)*(undefined8 *)pfVar33 >> 0x20) * fVar85 +
                        (float)((ulong)*(undefined8 *)pfVar37 >> 0x20) * fVar86 +
                        (float)((ulong)*(undefined8 *)pfVar41 >> 0x20) * fVar338 +
                        (float)((ulong)*(undefined8 *)pfVar45 >> 0x20) * fVar87;
              fVar332 = fVar332 + (float)*(undefined8 *)pfVar73 * fVar323 +
                        (float)*(undefined8 *)pfVar74 * fVar324 +
                        (float)*(undefined8 *)pfVar15 * fVar333 +
                        (float)*(undefined8 *)pfVar6 * fVar335 +
                        (float)*(undefined8 *)pfVar10 * fVar85 +
                        (float)*(undefined8 *)pfVar50 * fVar86 +
                        (float)*(undefined8 *)pfVar54 * fVar338 +
                        (float)*(undefined8 *)pfVar58 * fVar87;
              fVar79 = fVar79 + (float)((ulong)*(undefined8 *)pfVar73 >> 0x20) * fVar323 +
                       (float)((ulong)*(undefined8 *)pfVar74 >> 0x20) * fVar324 +
                       (float)((ulong)*(undefined8 *)pfVar15 >> 0x20) * fVar333 +
                       (float)((ulong)*(undefined8 *)pfVar6 >> 0x20) * fVar335 +
                       (float)((ulong)*(undefined8 *)pfVar10 >> 0x20) * fVar85 +
                       (float)((ulong)*(undefined8 *)pfVar50 >> 0x20) * fVar86 +
                       (float)((ulong)*(undefined8 *)pfVar54 >> 0x20) * fVar338 +
                       (float)((ulong)*(undefined8 *)pfVar58 >> 0x20) * fVar87;
              fVar80 = fVar80 + (float)*(undefined8 *)pfVar18 * fVar323 +
                       (float)*(undefined8 *)pfVar22 * fVar324 +
                       (float)*(undefined8 *)pfVar26 * fVar333 +
                       (float)*(undefined8 *)pfVar30 * fVar335 +
                       (float)*(undefined8 *)pfVar34 * fVar85 +
                       (float)*(undefined8 *)pfVar38 * fVar86 +
                       (float)*(undefined8 *)pfVar42 * fVar338 +
                       (float)*(undefined8 *)pfVar46 * fVar87;
              fVar81 = fVar81 + (float)((ulong)*(undefined8 *)pfVar18 >> 0x20) * fVar323 +
                       (float)((ulong)*(undefined8 *)pfVar22 >> 0x20) * fVar324 +
                       (float)((ulong)*(undefined8 *)pfVar26 >> 0x20) * fVar333 +
                       (float)((ulong)*(undefined8 *)pfVar30 >> 0x20) * fVar335 +
                       (float)((ulong)*(undefined8 *)pfVar34 >> 0x20) * fVar85 +
                       (float)((ulong)*(undefined8 *)pfVar38 >> 0x20) * fVar86 +
                       (float)((ulong)*(undefined8 *)pfVar42 >> 0x20) * fVar338 +
                       (float)((ulong)*(undefined8 *)pfVar46 >> 0x20) * fVar87;
              fVar325 = fVar325 + (float)*(undefined8 *)pfVar68 * fVar323 +
                        (float)*(undefined8 *)pfVar12 * fVar324 +
                        (float)*(undefined8 *)pfVar60 * fVar333 +
                        (float)*(undefined8 *)pfVar7 * fVar335 +
                        (float)*(undefined8 *)pfVar11 * fVar85 +
                        (float)*(undefined8 *)pfVar51 * fVar86 +
                        (float)*(undefined8 *)pfVar55 * fVar338 +
                        (float)*(undefined8 *)pfVar59 * fVar87;
              fVar82 = fVar82 + (float)((ulong)*(undefined8 *)pfVar68 >> 0x20) * fVar323 +
                       (float)((ulong)*(undefined8 *)pfVar12 >> 0x20) * fVar324 +
                       (float)((ulong)*(undefined8 *)pfVar60 >> 0x20) * fVar333 +
                       (float)((ulong)*(undefined8 *)pfVar7 >> 0x20) * fVar335 +
                       (float)((ulong)*(undefined8 *)pfVar11 >> 0x20) * fVar85 +
                       (float)((ulong)*(undefined8 *)pfVar51 >> 0x20) * fVar86 +
                       (float)((ulong)*(undefined8 *)pfVar55 >> 0x20) * fVar338 +
                       (float)((ulong)*(undefined8 *)pfVar59 >> 0x20) * fVar87;
              fVar83 = fVar83 + (float)*(undefined8 *)pfVar19 * fVar323 +
                       (float)*(undefined8 *)pfVar23 * fVar324 +
                       (float)*(undefined8 *)pfVar27 * fVar333 +
                       (float)*(undefined8 *)pfVar31 * fVar335 +
                       (float)*(undefined8 *)pfVar35 * fVar85 +
                       (float)*(undefined8 *)pfVar39 * fVar86 +
                       (float)*(undefined8 *)pfVar43 * fVar338 +
                       (float)*(undefined8 *)pfVar47 * fVar87;
              fVar84 = fVar84 + (float)((ulong)*(undefined8 *)pfVar19 >> 0x20) * fVar323 +
                       (float)((ulong)*(undefined8 *)pfVar23 >> 0x20) * fVar324 +
                       (float)((ulong)*(undefined8 *)pfVar27 >> 0x20) * fVar333 +
                       (float)((ulong)*(undefined8 *)pfVar31 >> 0x20) * fVar335 +
                       (float)((ulong)*(undefined8 *)pfVar35 >> 0x20) * fVar85 +
                       (float)((ulong)*(undefined8 *)pfVar39 >> 0x20) * fVar86 +
                       (float)((ulong)*(undefined8 *)pfVar43 >> 0x20) * fVar338 +
                       (float)((ulong)*(undefined8 *)pfVar47 >> 0x20) * fVar87;
              uVar3 = uVar64 - 1;
              bVar1 = 0 < (long)uVar64;
              uVar64 = uVar3;
              fVar323 = fVar326;
              fVar324 = fVar78;
            } while (uVar3 != 0 && bVar1);
          }
          uVar64 = param_4 & 7;
          if ((param_4 & 7) != 0) {
            do {
              fVar326 = *pfVar72;
              pfVar72 = pfVar72 + 1;
              uVar115 = *(undefined8 *)param_5;
              pfVar70 = param_5 + 2;
              pfVar71 = param_5 + 4;
              pfVar69 = param_5 + 6;
              pfVar73 = param_5 + 8;
              pfVar74 = param_5 + 10;
              pfVar68 = param_5 + 0xc;
              pfVar12 = param_5 + 0xe;
              param_5 = param_5 + 0x10;
              fVar323 = fVar323 + (float)uVar115 * fVar326;
              fVar75 = fVar75 + (float)((ulong)uVar115 >> 0x20) * fVar326;
              fVar76 = fVar76 + (float)*(undefined8 *)pfVar70 * fVar326;
              fVar77 = fVar77 + (float)((ulong)*(undefined8 *)pfVar70 >> 0x20) * fVar326;
              fVar324 = fVar324 + (float)*(undefined8 *)pfVar71 * fVar326;
              fVar328 = fVar328 + (float)((ulong)*(undefined8 *)pfVar71 >> 0x20) * fVar326;
              fVar329 = fVar329 + (float)*(undefined8 *)pfVar69 * fVar326;
              fVar330 = fVar330 + (float)((ulong)*(undefined8 *)pfVar69 >> 0x20) * fVar326;
              fVar332 = fVar332 + (float)*(undefined8 *)pfVar73 * fVar326;
              fVar79 = fVar79 + (float)((ulong)*(undefined8 *)pfVar73 >> 0x20) * fVar326;
              fVar80 = fVar80 + (float)*(undefined8 *)pfVar74 * fVar326;
              fVar81 = fVar81 + (float)((ulong)*(undefined8 *)pfVar74 >> 0x20) * fVar326;
              fVar325 = fVar325 + (float)*(undefined8 *)pfVar68 * fVar326;
              fVar82 = fVar82 + (float)((ulong)*(undefined8 *)pfVar68 >> 0x20) * fVar326;
              fVar83 = fVar83 + (float)*(undefined8 *)pfVar12 * fVar326;
              fVar84 = fVar84 + (float)((ulong)*(undefined8 *)pfVar12 >> 0x20) * fVar326;
              uVar3 = uVar64 - 1;
              bVar1 = 0 < (long)uVar64;
              uVar64 = uVar3;
            } while (uVar3 != 0 && bVar1);
          }
          uVar115 = *(undefined8 *)pfVar61;
          uVar118 = *(undefined8 *)(pfVar61 + 2);
          uVar121 = *(undefined8 *)(pfVar61 + 4);
          uVar134 = *(undefined8 *)(pfVar61 + 6);
          uVar151 = *(undefined8 *)(pfVar61 + 8);
          uVar168 = *(undefined8 *)(pfVar61 + 10);
          uVar177 = *(undefined8 *)(pfVar61 + 0xc);
          uVar178 = *(undefined8 *)(pfVar61 + 0xe);
          *pfVar61 = (float)uVar115 + fVar323 * param_1;
          pfVar61[1] = (float)((ulong)uVar115 >> 0x20) + fVar75 * param_1;
          pfVar61[2] = (float)uVar118 + fVar76 * param_1;
          pfVar61[3] = (float)((ulong)uVar118 >> 0x20) + fVar77 * param_1;
          pfVar61[4] = (float)uVar121 + fVar324 * param_1;
          pfVar61[5] = (float)((ulong)uVar121 >> 0x20) + fVar328 * param_1;
          pfVar61[6] = (float)uVar134 + fVar329 * param_1;
          pfVar61[7] = (float)((ulong)uVar134 >> 0x20) + fVar330 * param_1;
          pfVar61[8] = (float)uVar151 + fVar332 * param_1;
          pfVar61[9] = (float)((ulong)uVar151 >> 0x20) + fVar79 * param_1;
          pfVar61[10] = (float)uVar168 + fVar80 * param_1;
          pfVar61[0xb] = (float)((ulong)uVar168 >> 0x20) + fVar81 * param_1;
          pfVar61[0xc] = (float)uVar177 + fVar325 * param_1;
          pfVar61[0xd] = (float)((ulong)uVar177 >> 0x20) + fVar82 * param_1;
          pfVar61[0xe] = (float)uVar178 + fVar83 * param_1;
          pfVar61[0xf] = (float)((ulong)uVar178 >> 0x20) + fVar84 * param_1;
          pfVar61 = pfVar61 + 0x10;
          lVar66 = lVar67 + -1;
          bVar1 = 0 < lVar67;
          lVar67 = lVar66;
        } while (lVar66 != 0 && bVar1);
      }
      if ((param_2 & 0xf) != 0) {
        if ((param_2 & 8) != 0) {
          fVar325 = 0.0;
          fVar326 = 0.0;
          fVar75 = 0.0;
          fVar76 = 0.0;
          fVar77 = 0.0;
          fVar78 = 0.0;
          fVar328 = 0.0;
          fVar329 = 0.0;
          uVar64 = uVar65;
          pfVar72 = param_6;
          fVar323 = 0.0;
          fVar324 = 0.0;
          if (0 < (long)uVar65) {
            do {
              fVar323 = *pfVar72;
              uVar115 = *(undefined8 *)param_5;
              pfVar8 = param_5 + 2;
              pfVar71 = param_5 + 4;
              pfVar9 = param_5 + 6;
              pfVar73 = param_5 + 8;
              fVar324 = pfVar72[1];
              pfVar10 = param_5 + 10;
              pfVar68 = param_5 + 0xc;
              pfVar11 = param_5 + 0xe;
              pfVar70 = param_5 + 0x10;
              fVar330 = pfVar72[2];
              pfVar48 = param_5 + 0x12;
              pfVar69 = param_5 + 0x14;
              pfVar49 = param_5 + 0x16;
              pfVar74 = param_5 + 0x18;
              fVar332 = pfVar72[3];
              pfVar50 = param_5 + 0x1a;
              pfVar12 = param_5 + 0x1c;
              pfVar51 = param_5 + 0x1e;
              pfVar13 = param_5 + 0x20;
              fVar79 = pfVar72[4];
              pfVar52 = param_5 + 0x22;
              pfVar14 = param_5 + 0x24;
              pfVar53 = param_5 + 0x26;
              pfVar15 = param_5 + 0x28;
              fVar80 = pfVar72[5];
              pfVar54 = param_5 + 0x2a;
              pfVar60 = param_5 + 0x2c;
              pfVar55 = param_5 + 0x2e;
              pfVar4 = param_5 + 0x30;
              fVar81 = pfVar72[6];
              pfVar56 = param_5 + 0x32;
              pfVar5 = param_5 + 0x34;
              pfVar57 = param_5 + 0x36;
              pfVar6 = param_5 + 0x38;
              fVar82 = pfVar72[7];
              pfVar72 = pfVar72 + 8;
              pfVar58 = param_5 + 0x3a;
              pfVar7 = param_5 + 0x3c;
              pfVar59 = param_5 + 0x3e;
              param_5 = param_5 + 0x40;
              fVar325 = fVar325 + (float)uVar115 * fVar323 + (float)*(undefined8 *)pfVar73 * fVar324
                        + (float)*(undefined8 *)pfVar70 * fVar330 +
                        (float)*(undefined8 *)pfVar74 * fVar332 +
                        (float)*(undefined8 *)pfVar13 * fVar79 +
                        (float)*(undefined8 *)pfVar15 * fVar80 +
                        (float)*(undefined8 *)pfVar4 * fVar81 +
                        (float)*(undefined8 *)pfVar6 * fVar82;
              fVar326 = fVar326 + (float)((ulong)uVar115 >> 0x20) * fVar323 +
                        (float)((ulong)*(undefined8 *)pfVar73 >> 0x20) * fVar324 +
                        (float)((ulong)*(undefined8 *)pfVar70 >> 0x20) * fVar330 +
                        (float)((ulong)*(undefined8 *)pfVar74 >> 0x20) * fVar332 +
                        (float)((ulong)*(undefined8 *)pfVar13 >> 0x20) * fVar79 +
                        (float)((ulong)*(undefined8 *)pfVar15 >> 0x20) * fVar80 +
                        (float)((ulong)*(undefined8 *)pfVar4 >> 0x20) * fVar81 +
                        (float)((ulong)*(undefined8 *)pfVar6 >> 0x20) * fVar82;
              fVar75 = fVar75 + (float)*(undefined8 *)pfVar8 * fVar323 +
                       (float)*(undefined8 *)pfVar10 * fVar324 +
                       (float)*(undefined8 *)pfVar48 * fVar330 +
                       (float)*(undefined8 *)pfVar50 * fVar332 +
                       (float)*(undefined8 *)pfVar52 * fVar79 +
                       (float)*(undefined8 *)pfVar54 * fVar80 +
                       (float)*(undefined8 *)pfVar56 * fVar81 +
                       (float)*(undefined8 *)pfVar58 * fVar82;
              fVar76 = fVar76 + (float)((ulong)*(undefined8 *)pfVar8 >> 0x20) * fVar323 +
                       (float)((ulong)*(undefined8 *)pfVar10 >> 0x20) * fVar324 +
                       (float)((ulong)*(undefined8 *)pfVar48 >> 0x20) * fVar330 +
                       (float)((ulong)*(undefined8 *)pfVar50 >> 0x20) * fVar332 +
                       (float)((ulong)*(undefined8 *)pfVar52 >> 0x20) * fVar79 +
                       (float)((ulong)*(undefined8 *)pfVar54 >> 0x20) * fVar80 +
                       (float)((ulong)*(undefined8 *)pfVar56 >> 0x20) * fVar81 +
                       (float)((ulong)*(undefined8 *)pfVar58 >> 0x20) * fVar82;
              fVar77 = fVar77 + (float)*(undefined8 *)pfVar71 * fVar323 +
                       (float)*(undefined8 *)pfVar68 * fVar324 +
                       (float)*(undefined8 *)pfVar69 * fVar330 +
                       (float)*(undefined8 *)pfVar12 * fVar332 +
                       (float)*(undefined8 *)pfVar14 * fVar79 +
                       (float)*(undefined8 *)pfVar60 * fVar80 +
                       (float)*(undefined8 *)pfVar5 * fVar81 + (float)*(undefined8 *)pfVar7 * fVar82
              ;
              fVar78 = fVar78 + (float)((ulong)*(undefined8 *)pfVar71 >> 0x20) * fVar323 +
                       (float)((ulong)*(undefined8 *)pfVar68 >> 0x20) * fVar324 +
                       (float)((ulong)*(undefined8 *)pfVar69 >> 0x20) * fVar330 +
                       (float)((ulong)*(undefined8 *)pfVar12 >> 0x20) * fVar332 +
                       (float)((ulong)*(undefined8 *)pfVar14 >> 0x20) * fVar79 +
                       (float)((ulong)*(undefined8 *)pfVar60 >> 0x20) * fVar80 +
                       (float)((ulong)*(undefined8 *)pfVar5 >> 0x20) * fVar81 +
                       (float)((ulong)*(undefined8 *)pfVar7 >> 0x20) * fVar82;
              fVar328 = fVar328 + (float)*(undefined8 *)pfVar9 * fVar323 +
                        (float)*(undefined8 *)pfVar11 * fVar324 +
                        (float)*(undefined8 *)pfVar49 * fVar330 +
                        (float)*(undefined8 *)pfVar51 * fVar332 +
                        (float)*(undefined8 *)pfVar53 * fVar79 +
                        (float)*(undefined8 *)pfVar55 * fVar80 +
                        (float)*(undefined8 *)pfVar57 * fVar81 +
                        (float)*(undefined8 *)pfVar59 * fVar82;
              fVar329 = fVar329 + (float)((ulong)*(undefined8 *)pfVar9 >> 0x20) * fVar323 +
                        (float)((ulong)*(undefined8 *)pfVar11 >> 0x20) * fVar324 +
                        (float)((ulong)*(undefined8 *)pfVar49 >> 0x20) * fVar330 +
                        (float)((ulong)*(undefined8 *)pfVar51 >> 0x20) * fVar332 +
                        (float)((ulong)*(undefined8 *)pfVar53 >> 0x20) * fVar79 +
                        (float)((ulong)*(undefined8 *)pfVar55 >> 0x20) * fVar80 +
                        (float)((ulong)*(undefined8 *)pfVar57 >> 0x20) * fVar81 +
                        (float)((ulong)*(undefined8 *)pfVar59 >> 0x20) * fVar82;
              uVar3 = uVar64 - 1;
              bVar1 = 0 < (long)uVar64;
              uVar64 = uVar3;
              fVar323 = fVar325;
              fVar324 = fVar77;
            } while (uVar3 != 0 && bVar1);
          }
          uVar64 = param_4 & 7;
          if ((param_4 & 7) != 0) {
            do {
              fVar325 = *pfVar72;
              pfVar72 = pfVar72 + 1;
              uVar115 = *(undefined8 *)param_5;
              pfVar73 = param_5 + 2;
              pfVar71 = param_5 + 4;
              pfVar68 = param_5 + 6;
              param_5 = param_5 + 8;
              fVar323 = fVar323 + (float)uVar115 * fVar325;
              fVar326 = fVar326 + (float)((ulong)uVar115 >> 0x20) * fVar325;
              fVar75 = fVar75 + (float)*(undefined8 *)pfVar73 * fVar325;
              fVar76 = fVar76 + (float)((ulong)*(undefined8 *)pfVar73 >> 0x20) * fVar325;
              fVar324 = fVar324 + (float)*(undefined8 *)pfVar71 * fVar325;
              fVar78 = fVar78 + (float)((ulong)*(undefined8 *)pfVar71 >> 0x20) * fVar325;
              fVar328 = fVar328 + (float)*(undefined8 *)pfVar68 * fVar325;
              fVar329 = fVar329 + (float)((ulong)*(undefined8 *)pfVar68 >> 0x20) * fVar325;
              uVar3 = uVar64 - 1;
              bVar1 = 0 < (long)uVar64;
              uVar64 = uVar3;
            } while (uVar3 != 0 && bVar1);
          }
          uVar115 = *(undefined8 *)pfVar61;
          uVar118 = *(undefined8 *)(pfVar61 + 2);
          uVar121 = *(undefined8 *)(pfVar61 + 4);
          uVar134 = *(undefined8 *)(pfVar61 + 6);
          *pfVar61 = (float)uVar115 + fVar323 * param_1;
          pfVar61[1] = (float)((ulong)uVar115 >> 0x20) + fVar326 * param_1;
          pfVar61[2] = (float)uVar118 + fVar75 * param_1;
          pfVar61[3] = (float)((ulong)uVar118 >> 0x20) + fVar76 * param_1;
          pfVar61[4] = (float)uVar121 + fVar324 * param_1;
          pfVar61[5] = (float)((ulong)uVar121 >> 0x20) + fVar78 * param_1;
          pfVar61[6] = (float)uVar134 + fVar328 * param_1;
          pfVar61[7] = (float)((ulong)uVar134 >> 0x20) + fVar329 * param_1;
          pfVar61 = pfVar61 + 8;
        }
        if ((param_2 & 7) != 0) {
          if ((param_2 & 4) != 0) {
            fVar325 = 0.0;
            fVar326 = 0.0;
            fVar75 = 0.0;
            fVar76 = 0.0;
            uVar64 = uVar65;
            pfVar72 = param_6;
            fVar323 = 0.0;
            fVar324 = 0.0;
            if (0 < (long)uVar65) {
              do {
                fVar323 = *pfVar72;
                uVar115 = *(undefined8 *)param_5;
                pfVar13 = param_5 + 2;
                pfVar71 = param_5 + 4;
                fVar324 = pfVar72[1];
                pfVar14 = param_5 + 6;
                pfVar73 = param_5 + 8;
                fVar77 = pfVar72[2];
                pfVar15 = param_5 + 10;
                pfVar68 = param_5 + 0xc;
                fVar78 = pfVar72[3];
                pfVar60 = param_5 + 0xe;
                pfVar70 = param_5 + 0x10;
                fVar328 = pfVar72[4];
                pfVar4 = param_5 + 0x12;
                pfVar69 = param_5 + 0x14;
                fVar329 = pfVar72[5];
                pfVar5 = param_5 + 0x16;
                pfVar74 = param_5 + 0x18;
                fVar330 = pfVar72[6];
                pfVar6 = param_5 + 0x1a;
                pfVar12 = param_5 + 0x1c;
                fVar332 = pfVar72[7];
                pfVar72 = pfVar72 + 8;
                pfVar7 = param_5 + 0x1e;
                param_5 = param_5 + 0x20;
                fVar325 = fVar325 + (float)uVar115 * fVar323 +
                          (float)*(undefined8 *)pfVar71 * fVar324 +
                          (float)*(undefined8 *)pfVar73 * fVar77 +
                          (float)*(undefined8 *)pfVar68 * fVar78 +
                          (float)*(undefined8 *)pfVar70 * fVar328 +
                          (float)*(undefined8 *)pfVar69 * fVar329 +
                          (float)*(undefined8 *)pfVar74 * fVar330 +
                          (float)*(undefined8 *)pfVar12 * fVar332;
                fVar326 = fVar326 + (float)((ulong)uVar115 >> 0x20) * fVar323 +
                          (float)((ulong)*(undefined8 *)pfVar71 >> 0x20) * fVar324 +
                          (float)((ulong)*(undefined8 *)pfVar73 >> 0x20) * fVar77 +
                          (float)((ulong)*(undefined8 *)pfVar68 >> 0x20) * fVar78 +
                          (float)((ulong)*(undefined8 *)pfVar70 >> 0x20) * fVar328 +
                          (float)((ulong)*(undefined8 *)pfVar69 >> 0x20) * fVar329 +
                          (float)((ulong)*(undefined8 *)pfVar74 >> 0x20) * fVar330 +
                          (float)((ulong)*(undefined8 *)pfVar12 >> 0x20) * fVar332;
                fVar75 = fVar75 + (float)*(undefined8 *)pfVar13 * fVar323 +
                         (float)*(undefined8 *)pfVar14 * fVar324 +
                         (float)*(undefined8 *)pfVar15 * fVar77 +
                         (float)*(undefined8 *)pfVar60 * fVar78 +
                         (float)*(undefined8 *)pfVar4 * fVar328 +
                         (float)*(undefined8 *)pfVar5 * fVar329 +
                         (float)*(undefined8 *)pfVar6 * fVar330 +
                         (float)*(undefined8 *)pfVar7 * fVar332;
                fVar76 = fVar76 + (float)((ulong)*(undefined8 *)pfVar13 >> 0x20) * fVar323 +
                         (float)((ulong)*(undefined8 *)pfVar14 >> 0x20) * fVar324 +
                         (float)((ulong)*(undefined8 *)pfVar15 >> 0x20) * fVar77 +
                         (float)((ulong)*(undefined8 *)pfVar60 >> 0x20) * fVar78 +
                         (float)((ulong)*(undefined8 *)pfVar4 >> 0x20) * fVar328 +
                         (float)((ulong)*(undefined8 *)pfVar5 >> 0x20) * fVar329 +
                         (float)((ulong)*(undefined8 *)pfVar6 >> 0x20) * fVar330 +
                         (float)((ulong)*(undefined8 *)pfVar7 >> 0x20) * fVar332;
                uVar3 = uVar64 - 1;
                bVar1 = 0 < (long)uVar64;
                uVar64 = uVar3;
                fVar323 = fVar325;
                fVar324 = fVar75;
              } while (uVar3 != 0 && bVar1);
            }
            uVar64 = param_4 & 7;
            if ((param_4 & 7) != 0) {
              do {
                fVar325 = *pfVar72;
                pfVar72 = pfVar72 + 1;
                uVar115 = *(undefined8 *)param_5;
                pfVar71 = param_5 + 2;
                param_5 = param_5 + 4;
                fVar323 = fVar323 + (float)uVar115 * fVar325;
                fVar326 = fVar326 + (float)((ulong)uVar115 >> 0x20) * fVar325;
                fVar324 = fVar324 + (float)*(undefined8 *)pfVar71 * fVar325;
                fVar76 = fVar76 + (float)((ulong)*(undefined8 *)pfVar71 >> 0x20) * fVar325;
                uVar3 = uVar64 - 1;
                bVar1 = 0 < (long)uVar64;
                uVar64 = uVar3;
              } while (uVar3 != 0 && bVar1);
            }
            uVar115 = *(undefined8 *)pfVar61;
            uVar118 = *(undefined8 *)(pfVar61 + 2);
            *pfVar61 = (float)uVar115 + fVar323 * param_1;
            pfVar61[1] = (float)((ulong)uVar115 >> 0x20) + fVar326 * param_1;
            pfVar61[2] = (float)uVar118 + fVar324 * param_1;
            pfVar61[3] = (float)((ulong)uVar118 >> 0x20) + fVar76 * param_1;
            pfVar61 = pfVar61 + 4;
          }
          if ((param_2 & 3) != 0) {
            if ((param_2 & 2) != 0) {
              fVar324 = 0.0;
              fVar325 = 0.0;
              uVar64 = uVar65;
              pfVar72 = param_6;
              fVar323 = 0.0;
              if (0 < (long)uVar65) {
                do {
                  fVar323 = *pfVar72;
                  pfVar71 = pfVar72 + 1;
                  uVar115 = *(undefined8 *)param_5;
                  pfVar73 = param_5 + 2;
                  pfVar68 = pfVar72 + 2;
                  pfVar70 = param_5 + 4;
                  pfVar69 = pfVar72 + 3;
                  pfVar74 = param_5 + 6;
                  pfVar12 = pfVar72 + 4;
                  pfVar13 = param_5 + 8;
                  pfVar14 = pfVar72 + 5;
                  pfVar15 = param_5 + 10;
                  pfVar60 = pfVar72 + 6;
                  pfVar4 = param_5 + 0xc;
                  pfVar5 = pfVar72 + 7;
                  pfVar6 = param_5 + 0xe;
                  pfVar72 = pfVar72 + 8;
                  param_5 = param_5 + 0x10;
                  fVar324 = fVar324 + (float)uVar115 * fVar323 +
                            (float)*(undefined8 *)pfVar73 * *pfVar71 +
                            (float)*(undefined8 *)pfVar70 * *pfVar68 +
                            (float)*(undefined8 *)pfVar74 * *pfVar69 +
                            (float)*(undefined8 *)pfVar13 * *pfVar12 +
                            (float)*(undefined8 *)pfVar15 * *pfVar14 +
                            (float)*(undefined8 *)pfVar4 * *pfVar60 +
                            (float)*(undefined8 *)pfVar6 * *pfVar5;
                  fVar325 = fVar325 + (float)((ulong)uVar115 >> 0x20) * fVar323 +
                            (float)((ulong)*(undefined8 *)pfVar73 >> 0x20) * *pfVar71 +
                            (float)((ulong)*(undefined8 *)pfVar70 >> 0x20) * *pfVar68 +
                            (float)((ulong)*(undefined8 *)pfVar74 >> 0x20) * *pfVar69 +
                            (float)((ulong)*(undefined8 *)pfVar13 >> 0x20) * *pfVar12 +
                            (float)((ulong)*(undefined8 *)pfVar15 >> 0x20) * *pfVar14 +
                            (float)((ulong)*(undefined8 *)pfVar4 >> 0x20) * *pfVar60 +
                            (float)((ulong)*(undefined8 *)pfVar6 >> 0x20) * *pfVar5;
                  uVar3 = uVar64 - 1;
                  bVar1 = 0 < (long)uVar64;
                  uVar64 = uVar3;
                  fVar323 = fVar324;
                } while (uVar3 != 0 && bVar1);
              }
              uVar64 = param_4 & 7;
              if ((param_4 & 7) != 0) {
                do {
                  fVar324 = *pfVar72;
                  pfVar72 = pfVar72 + 1;
                  uVar115 = *(undefined8 *)param_5;
                  param_5 = param_5 + 2;
                  fVar323 = fVar323 + (float)uVar115 * fVar324;
                  fVar325 = fVar325 + (float)((ulong)uVar115 >> 0x20) * fVar324;
                  uVar3 = uVar64 - 1;
                  bVar1 = 0 < (long)uVar64;
                  uVar64 = uVar3;
                } while (uVar3 != 0 && bVar1);
              }
              uVar115 = *(undefined8 *)pfVar61;
              *pfVar61 = (float)uVar115 + fVar323 * param_1;
              pfVar61[1] = (float)((ulong)uVar115 >> 0x20) + fVar325 * param_1;
              pfVar61 = pfVar61 + 2;
            }
            if ((param_2 & 1) != 0) {
              fVar323 = 0.0;
              if (0 < (long)uVar65) {
                do {
                  uVar281 = NEON_fmadd(*param_5,*param_6,fVar323);
                  uVar281 = NEON_fmadd(param_5[1],param_6[1],uVar281);
                  uVar281 = NEON_fmadd(param_5[2],param_6[2],uVar281);
                  uVar281 = NEON_fmadd(param_5[3],param_6[3],uVar281);
                  uVar281 = NEON_fmadd(param_5[4],param_6[4],uVar281);
                  uVar281 = NEON_fmadd(param_5[5],param_6[5],uVar281);
                  pfVar72 = param_6 + 7;
                  pfVar71 = param_5 + 7;
                  uVar281 = NEON_fmadd(param_5[6],param_6[6],uVar281);
                  param_6 = param_6 + 8;
                  param_5 = param_5 + 8;
                  fVar323 = (float)NEON_fmadd(*pfVar71,*pfVar72,uVar281);
                  uVar64 = uVar65 - 1;
                  bVar1 = 0 < (long)uVar65;
                  uVar65 = uVar64;
                } while (uVar64 != 0 && bVar1);
              }
              uVar65 = param_4 & 7;
              if ((param_4 & 7) != 0) {
                do {
                  fVar325 = *param_6;
                  param_6 = param_6 + 1;
                  fVar324 = *param_5;
                  param_5 = param_5 + 1;
                  fVar323 = (float)NEON_fmadd(fVar324,fVar325,fVar323);
                  uVar64 = uVar65 - 1;
                  bVar1 = 0 < (long)uVar65;
                  uVar65 = uVar64;
                } while (uVar64 != 0 && bVar1);
              }
              *pfVar61 = *pfVar61 + fVar323 * param_1;
            }
          }
        }
      }
    }
  }
  return 0;
}


// ===== 0070dc24  FUN_0070dc24 =====

undefined8
FUN_0070dc24(ulong param_1,ulong param_2,undefined8 *param_3,long param_4,undefined8 *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined4 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  ulong uVar27;
  ulong uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined4 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  
  uVar27 = (long)param_1 >> 1;
  lVar14 = param_4 * 4;
  if (0 < (long)param_2 >> 4) {
    lVar17 = (long)param_2 >> 4;
    do {
      puVar13 = param_3;
      uVar28 = uVar27 + 1;
      if ((long)uVar27 < 1) {
        puVar1 = (undefined4 *)((long)param_3 + lVar14);
        puVar13 = (undefined8 *)(puVar1 + param_4);
        puVar21 = (undefined4 *)((long)puVar13 + lVar14);
        puVar15 = (undefined8 *)(puVar21 + param_4);
        puVar12 = (undefined4 *)((long)puVar15 + lVar14);
        puVar16 = (undefined8 *)(puVar12 + param_4);
        puVar18 = (undefined4 *)((long)puVar16 + lVar14);
        puVar19 = (undefined8 *)(puVar18 + param_4);
        puVar3 = (undefined4 *)((long)puVar19 + lVar14);
        puVar25 = (undefined8 *)(puVar3 + param_4);
        puVar4 = (undefined4 *)((long)puVar25 + lVar14);
        puVar26 = (undefined8 *)(puVar4 + param_4);
        puVar5 = (undefined4 *)((long)puVar26 + lVar14);
        puVar22 = (undefined8 *)(puVar5 + param_4);
        puVar2 = (undefined4 *)((long)puVar22 + lVar14);
        puVar23 = param_3;
      }
      else {
        do {
          puVar1 = (undefined4 *)((long)puVar13 + lVar14);
          puVar23 = puVar13 + 1;
          uVar29 = *(undefined4 *)((long)puVar13 + 4);
          uVar30 = *puVar1;
          uVar33 = puVar1[1];
          puVar1 = puVar1 + param_4;
          uVar36 = *puVar1;
          uVar37 = puVar1[1];
          puVar1 = puVar1 + param_4;
          uVar38 = *puVar1;
          uVar39 = puVar1[1];
          puVar1 = puVar1 + param_4;
          uVar48 = *puVar1;
          uVar49 = puVar1[1];
          puVar1 = puVar1 + param_4;
          uVar50 = *puVar1;
          uVar51 = puVar1[1];
          puVar1 = puVar1 + param_4;
          uVar52 = *puVar1;
          uVar53 = puVar1[1];
          puVar1 = puVar1 + param_4;
          uVar54 = *puVar1;
          uVar55 = puVar1[1];
          puVar1 = puVar1 + param_4;
          uVar56 = *puVar1;
          uVar57 = puVar1[1];
          puVar1 = puVar1 + param_4;
          uVar58 = *puVar1;
          uVar59 = puVar1[1];
          puVar1 = puVar1 + param_4;
          uVar60 = *puVar1;
          uVar61 = puVar1[1];
          puVar1 = puVar1 + param_4;
          uVar62 = *puVar1;
          uVar63 = puVar1[1];
          puVar1 = puVar1 + param_4;
          uVar40 = *puVar1;
          uVar41 = puVar1[1];
          puVar1 = puVar1 + param_4;
          uVar42 = *puVar1;
          uVar43 = puVar1[1];
          puVar1 = puVar1 + param_4;
          uVar44 = *puVar1;
          uVar45 = puVar1[1];
          uVar46 = puVar1[param_4];
          uVar47 = (puVar1 + param_4)[1];
          uVar28 = uVar28 - 1;
          *(undefined4 *)param_5 = *(undefined4 *)puVar13;
          *(undefined4 *)((long)param_5 + 4) = uVar30;
          *(undefined4 *)(param_5 + 1) = uVar36;
          *(undefined4 *)((long)param_5 + 0xc) = uVar38;
          *(undefined4 *)(param_5 + 2) = uVar48;
          *(undefined4 *)((long)param_5 + 0x14) = uVar50;
          *(undefined4 *)(param_5 + 3) = uVar52;
          *(undefined4 *)((long)param_5 + 0x1c) = uVar54;
          *(undefined4 *)(param_5 + 4) = uVar56;
          *(undefined4 *)((long)param_5 + 0x24) = uVar58;
          *(undefined4 *)(param_5 + 5) = uVar60;
          *(undefined4 *)((long)param_5 + 0x2c) = uVar62;
          *(undefined4 *)(param_5 + 6) = uVar40;
          *(undefined4 *)((long)param_5 + 0x34) = uVar42;
          *(undefined4 *)(param_5 + 7) = uVar44;
          *(undefined4 *)((long)param_5 + 0x3c) = uVar46;
          *(undefined4 *)(param_5 + 8) = uVar29;
          *(undefined4 *)((long)param_5 + 0x44) = uVar33;
          *(undefined4 *)(param_5 + 9) = uVar37;
          *(undefined4 *)((long)param_5 + 0x4c) = uVar39;
          *(undefined4 *)(param_5 + 10) = uVar49;
          *(undefined4 *)((long)param_5 + 0x54) = uVar51;
          *(undefined4 *)(param_5 + 0xb) = uVar53;
          *(undefined4 *)((long)param_5 + 0x5c) = uVar55;
          *(undefined4 *)(param_5 + 0xc) = uVar57;
          *(undefined4 *)((long)param_5 + 100) = uVar59;
          *(undefined4 *)(param_5 + 0xd) = uVar61;
          *(undefined4 *)((long)param_5 + 0x6c) = uVar63;
          *(undefined4 *)(param_5 + 0xe) = uVar41;
          *(undefined4 *)((long)param_5 + 0x74) = uVar43;
          *(undefined4 *)(param_5 + 0xf) = uVar45;
          *(undefined4 *)((long)param_5 + 0x7c) = uVar47;
          param_5 = param_5 + 0x10;
          puVar13 = puVar23;
        } while (1 < uVar28);
        puVar19 = puVar23 + param_4 * 4;
        puVar26 = puVar23 + param_4 * 6;
        puVar22 = puVar23 + param_4 * 7;
        puVar2 = (undefined4 *)((long)puVar23 + param_4 * 0x3c);
        puVar15 = puVar23 + param_4 * 2;
        puVar21 = (undefined4 *)((long)puVar23 + param_4 * 0xc);
        puVar1 = (undefined4 *)((long)puVar23 + lVar14);
        puVar12 = (undefined4 *)((long)puVar23 + param_4 * 0x14);
        puVar16 = puVar23 + param_4 * 3;
        puVar3 = (undefined4 *)((long)puVar23 + param_4 * 0x24);
        puVar18 = (undefined4 *)((long)puVar23 + param_4 * 0x1c);
        puVar25 = puVar23 + param_4 * 5;
        puVar4 = (undefined4 *)((long)puVar23 + param_4 * 0x2c);
        puVar5 = (undefined4 *)((long)puVar23 + param_4 * 0x34);
        puVar13 = puVar23 + param_4;
      }
      if ((param_1 & 1) != 0) {
        uVar29 = *puVar1;
        uVar30 = *(undefined4 *)puVar13;
        uVar33 = *puVar21;
        uVar36 = *(undefined4 *)puVar15;
        uVar37 = *puVar12;
        uVar38 = *(undefined4 *)puVar16;
        uVar39 = *puVar18;
        uVar40 = *(undefined4 *)puVar19;
        uVar41 = *puVar3;
        uVar42 = *(undefined4 *)puVar25;
        uVar43 = *puVar4;
        uVar44 = *(undefined4 *)puVar26;
        uVar45 = *puVar5;
        uVar46 = *(undefined4 *)puVar22;
        uVar47 = *puVar2;
        *(undefined4 *)param_5 = *(undefined4 *)puVar23;
        *(undefined4 *)((long)param_5 + 4) = uVar29;
        *(undefined4 *)(param_5 + 1) = uVar30;
        *(undefined4 *)((long)param_5 + 0xc) = uVar33;
        *(undefined4 *)(param_5 + 2) = uVar36;
        *(undefined4 *)((long)param_5 + 0x14) = uVar37;
        *(undefined4 *)(param_5 + 3) = uVar38;
        *(undefined4 *)((long)param_5 + 0x1c) = uVar39;
        *(undefined4 *)(param_5 + 4) = uVar40;
        *(undefined4 *)((long)param_5 + 0x24) = uVar41;
        *(undefined4 *)(param_5 + 5) = uVar42;
        *(undefined4 *)((long)param_5 + 0x2c) = uVar43;
        *(undefined4 *)(param_5 + 6) = uVar44;
        *(undefined4 *)((long)param_5 + 0x34) = uVar45;
        *(undefined4 *)(param_5 + 7) = uVar46;
        *(undefined4 *)((long)param_5 + 0x3c) = uVar47;
        param_5 = param_5 + 8;
      }
      param_3 = param_3 + param_4 * 8;
      lVar6 = lVar17 + -1;
      bVar10 = 0 < lVar17;
      lVar17 = lVar6;
    } while (lVar6 != 0 && bVar10);
  }
  uVar11 = (uint)param_2;
  if ((uVar11 >> 3 & 1) != 0) {
    puVar13 = param_3 + param_4 * 4;
    if ((long)uVar27 < 1) {
      puVar1 = (undefined4 *)((long)param_3 + lVar14);
      puVar15 = (undefined8 *)(puVar1 + param_4);
      puVar21 = (undefined4 *)((long)puVar15 + lVar14);
      puVar16 = (undefined8 *)(puVar21 + param_4);
      puVar12 = (undefined4 *)((long)puVar16 + lVar14);
      puVar19 = (undefined8 *)(puVar12 + param_4);
      puVar18 = (undefined4 *)((long)puVar19 + lVar14);
      puVar25 = param_3;
    }
    else {
      uVar28 = uVar27 + 1;
      do {
        puVar1 = (undefined4 *)((long)param_3 + lVar14);
        puVar25 = param_3 + 1;
        uVar29 = *(undefined4 *)((long)param_3 + 4);
        uVar30 = *puVar1;
        uVar33 = puVar1[1];
        puVar1 = puVar1 + param_4;
        uVar36 = *puVar1;
        uVar37 = puVar1[1];
        puVar1 = puVar1 + param_4;
        uVar38 = *puVar1;
        uVar39 = puVar1[1];
        puVar1 = puVar1 + param_4;
        uVar40 = *puVar1;
        uVar41 = puVar1[1];
        puVar1 = puVar1 + param_4;
        uVar42 = *puVar1;
        uVar43 = puVar1[1];
        puVar1 = puVar1 + param_4;
        uVar44 = *puVar1;
        uVar45 = puVar1[1];
        uVar46 = puVar1[param_4];
        uVar47 = (puVar1 + param_4)[1];
        uVar28 = uVar28 - 1;
        *(undefined4 *)param_5 = *(undefined4 *)param_3;
        *(undefined4 *)((long)param_5 + 4) = uVar30;
        *(undefined4 *)(param_5 + 1) = uVar36;
        *(undefined4 *)((long)param_5 + 0xc) = uVar38;
        *(undefined4 *)(param_5 + 2) = uVar40;
        *(undefined4 *)((long)param_5 + 0x14) = uVar42;
        *(undefined4 *)(param_5 + 3) = uVar44;
        *(undefined4 *)((long)param_5 + 0x1c) = uVar46;
        *(undefined4 *)(param_5 + 4) = uVar29;
        *(undefined4 *)((long)param_5 + 0x24) = uVar33;
        *(undefined4 *)(param_5 + 5) = uVar37;
        *(undefined4 *)((long)param_5 + 0x2c) = uVar39;
        *(undefined4 *)(param_5 + 6) = uVar41;
        *(undefined4 *)((long)param_5 + 0x34) = uVar43;
        *(undefined4 *)(param_5 + 7) = uVar45;
        *(undefined4 *)((long)param_5 + 0x3c) = uVar47;
        param_5 = param_5 + 8;
        param_3 = puVar25;
      } while (1 < uVar28);
      puVar12 = (undefined4 *)((long)puVar25 + param_4 * 0x14);
      puVar16 = puVar25 + param_4 * 2;
      puVar1 = (undefined4 *)((long)puVar25 + param_4 * 4);
      puVar15 = puVar25 + param_4;
      puVar19 = puVar25 + param_4 * 3;
      puVar18 = (undefined4 *)((long)puVar25 + param_4 * 0x1c);
      puVar21 = (undefined4 *)((long)puVar25 + param_4 * 0xc);
    }
    param_3 = puVar13;
    if ((param_1 & 1) != 0) {
      uVar29 = *puVar1;
      uVar30 = *(undefined4 *)puVar15;
      uVar33 = *puVar21;
      uVar36 = *(undefined4 *)puVar16;
      uVar37 = *puVar12;
      uVar38 = *(undefined4 *)puVar19;
      uVar39 = *puVar18;
      *(undefined4 *)param_5 = *(undefined4 *)puVar25;
      *(undefined4 *)((long)param_5 + 4) = uVar29;
      *(undefined4 *)(param_5 + 1) = uVar30;
      *(undefined4 *)((long)param_5 + 0xc) = uVar33;
      *(undefined4 *)(param_5 + 2) = uVar36;
      *(undefined4 *)((long)param_5 + 0x14) = uVar37;
      *(undefined4 *)(param_5 + 3) = uVar38;
      *(undefined4 *)((long)param_5 + 0x1c) = uVar39;
      param_5 = param_5 + 4;
    }
  }
  if ((uVar11 >> 2 & 1) != 0) {
    puVar15 = (undefined8 *)((long)param_3 + lVar14);
    puVar16 = param_3 + param_4 * 2;
    puVar19 = (undefined8 *)((long)puVar15 + lVar14);
    puVar25 = (undefined8 *)((long)puVar19 + lVar14);
    puVar13 = param_5;
    puVar26 = param_3;
    if (0 < (long)uVar27) {
      uVar28 = uVar27;
      if (7 < uVar27) {
        puVar13 = param_5 + uVar27 * 4;
        if ((((puVar13 <= puVar25 ||
               (undefined8 *)((long)param_3 + uVar27 * 8 + param_4 * 0xc) <= param_5) &&
             (param_3 + uVar27 + param_4 <= param_5 || puVar13 <= puVar19)) &&
            ((undefined8 *)((long)param_3 + uVar27 * 8 + param_4 * 4) <= param_5 ||
             puVar13 <= puVar15)) && (param_3 + uVar27 <= param_5 || puVar13 <= param_3)) {
          uVar20 = uVar27 & 0x7ffffffffffffffe;
          puVar13 = param_5 + uVar20 * 4;
          puVar25 = puVar25 + uVar20;
          puVar19 = puVar19 + uVar20;
          puVar15 = puVar15 + uVar20;
          puVar26 = param_3 + uVar20;
          uVar28 = uVar20;
          do {
            puVar1 = (undefined4 *)((long)param_3 + param_4 * 0xc);
            puVar22 = param_3 + param_4;
            puVar21 = (undefined4 *)((long)param_3 + lVar14);
            uVar29 = *(undefined4 *)param_3;
            uVar33 = *(undefined4 *)((long)param_3 + 4);
            uVar30 = *(undefined4 *)(param_3 + 1);
            uVar36 = *(undefined4 *)((long)param_3 + 0xc);
            param_3 = param_3 + 2;
            uVar37 = *puVar21;
            uVar38 = puVar21[1];
            uVar39 = *(undefined4 *)puVar22;
            uVar40 = *(undefined4 *)((long)puVar22 + 4);
            uVar41 = *(undefined4 *)((long)puVar22 + 0xc);
            uVar28 = uVar28 - 2;
            uVar42 = *puVar1;
            uVar43 = puVar1[1];
            param_5[5] = CONCAT44(*(undefined4 *)(puVar22 + 1),*(undefined4 *)(puVar22 + 1));
            param_5[4] = CONCAT44(uVar30,uVar30);
            param_5[7] = CONCAT44(uVar41,uVar41);
            param_5[6] = CONCAT44(uVar36,uVar36);
            param_5[1] = CONCAT44(uVar42,uVar39);
            *param_5 = CONCAT44(uVar37,uVar29);
            param_5[3] = CONCAT44(uVar43,uVar40);
            param_5[2] = CONCAT44(uVar38,uVar33);
            param_5 = param_5 + 8;
          } while (uVar28 != 0);
          uVar28 = param_1 >> 1 & 1;
          param_5 = puVar13;
          param_3 = puVar26;
          if (uVar27 == uVar20) goto LAB_0070e074;
        }
      }
      uVar28 = uVar28 + 1;
      puVar22 = puVar15;
      puVar23 = puVar19;
      puVar24 = puVar25;
      puVar13 = param_5;
      do {
        puVar26 = param_3 + 1;
        uVar29 = *(undefined4 *)((long)param_3 + 4);
        puVar15 = puVar22 + 1;
        uVar30 = *(undefined4 *)puVar22;
        uVar33 = *(undefined4 *)((long)puVar22 + 4);
        puVar19 = puVar23 + 1;
        uVar36 = *(undefined4 *)puVar23;
        uVar37 = *(undefined4 *)((long)puVar23 + 4);
        puVar25 = puVar24 + 1;
        uVar38 = *(undefined4 *)puVar24;
        uVar39 = *(undefined4 *)((long)puVar24 + 4);
        uVar28 = uVar28 - 1;
        *(undefined4 *)puVar13 = *(undefined4 *)param_3;
        *(undefined4 *)((long)puVar13 + 4) = uVar30;
        *(undefined4 *)(puVar13 + 2) = uVar29;
        *(undefined4 *)((long)puVar13 + 0x14) = uVar33;
        *(undefined4 *)(puVar13 + 1) = uVar36;
        *(undefined4 *)((long)puVar13 + 0xc) = uVar38;
        *(undefined4 *)(puVar13 + 3) = uVar37;
        *(undefined4 *)((long)puVar13 + 0x1c) = uVar39;
        puVar13 = puVar13 + 4;
        puVar22 = puVar15;
        puVar23 = puVar19;
        puVar24 = puVar25;
        param_3 = puVar26;
      } while (1 < uVar28);
    }
LAB_0070e074:
    param_3 = puVar16;
    param_5 = puVar13;
    if ((param_1 & 1) != 0) {
      uVar29 = *(undefined4 *)puVar15;
      param_5 = puVar13 + 2;
      uVar30 = *(undefined4 *)puVar19;
      uVar33 = *(undefined4 *)puVar25;
      *(undefined4 *)puVar13 = *(undefined4 *)puVar26;
      *(undefined4 *)((long)puVar13 + 4) = uVar29;
      *(undefined4 *)(puVar13 + 1) = uVar30;
      *(undefined4 *)((long)puVar13 + 0xc) = uVar33;
    }
  }
  if ((uVar11 >> 1 & 1) != 0) {
    puVar13 = (undefined8 *)((long)param_3 + param_4 * 4);
    puVar15 = param_3 + param_4;
    puVar16 = param_3;
    if (0 < (long)uVar27) {
      uVar28 = uVar27;
      if (7 < uVar27) {
        if ((param_5 + uVar27 * 2 <= puVar13 ||
             (undefined8 *)((long)param_3 + uVar27 * 8 + param_4 * 4) <= param_5) &&
           (param_3 + uVar27 <= param_5 || param_5 + uVar27 * 2 <= param_3)) {
          uVar20 = uVar27 & 0x7ffffffffffffff8;
          puVar19 = param_5 + 8;
          param_5 = param_5 + uVar20 * 2;
          puVar13 = puVar13 + uVar20;
          puVar16 = param_3 + uVar20;
          uVar28 = uVar20;
          do {
            puVar1 = (undefined4 *)((long)param_3 + lVar14);
            uVar28 = uVar28 - 8;
            uVar36 = *(undefined4 *)((long)param_3 + 4);
            uVar29 = *(undefined4 *)(param_3 + 1);
            uVar37 = *(undefined4 *)((long)param_3 + 0xc);
            uVar30 = *(undefined4 *)(param_3 + 2);
            uVar38 = *(undefined4 *)((long)param_3 + 0x14);
            uVar33 = *(undefined4 *)(param_3 + 3);
            uVar39 = *(undefined4 *)((long)param_3 + 0x1c);
            uVar40 = *puVar1;
            uVar44 = puVar1[1];
            uVar41 = puVar1[2];
            uVar45 = puVar1[3];
            uVar42 = puVar1[4];
            uVar46 = puVar1[5];
            uVar43 = puVar1[6];
            uVar47 = puVar1[7];
            uVar56 = *(undefined4 *)(param_3 + 4);
            uVar60 = *(undefined4 *)((long)param_3 + 0x24);
            uVar57 = *(undefined4 *)(param_3 + 5);
            uVar61 = *(undefined4 *)((long)param_3 + 0x2c);
            uVar58 = *(undefined4 *)(param_3 + 6);
            uVar62 = *(undefined4 *)((long)param_3 + 0x34);
            uVar59 = *(undefined4 *)(param_3 + 7);
            uVar63 = *(undefined4 *)((long)param_3 + 0x3c);
            uVar48 = puVar1[8];
            uVar52 = puVar1[9];
            uVar49 = puVar1[10];
            uVar53 = puVar1[0xb];
            uVar50 = puVar1[0xc];
            uVar54 = puVar1[0xd];
            uVar51 = puVar1[0xe];
            uVar55 = puVar1[0xf];
            *(undefined4 *)(puVar19 + -8) = *(undefined4 *)param_3;
            *(undefined4 *)((long)puVar19 + -0x3c) = uVar40;
            *(undefined4 *)(puVar19 + -7) = uVar36;
            *(undefined4 *)((long)puVar19 + -0x34) = uVar44;
            *(undefined4 *)(puVar19 + -6) = uVar29;
            *(undefined4 *)((long)puVar19 + -0x2c) = uVar41;
            *(undefined4 *)(puVar19 + -5) = uVar37;
            *(undefined4 *)((long)puVar19 + -0x24) = uVar45;
            *(undefined4 *)(puVar19 + -4) = uVar30;
            *(undefined4 *)((long)puVar19 + -0x1c) = uVar42;
            *(undefined4 *)(puVar19 + -3) = uVar38;
            *(undefined4 *)((long)puVar19 + -0x14) = uVar46;
            *(undefined4 *)(puVar19 + -2) = uVar33;
            *(undefined4 *)((long)puVar19 + -0xc) = uVar43;
            *(undefined4 *)(puVar19 + -1) = uVar39;
            *(undefined4 *)((long)puVar19 + -4) = uVar47;
            *(undefined4 *)puVar19 = uVar56;
            *(undefined4 *)((long)puVar19 + 4) = uVar48;
            *(undefined4 *)(puVar19 + 1) = uVar60;
            *(undefined4 *)((long)puVar19 + 0xc) = uVar52;
            *(undefined4 *)(puVar19 + 2) = uVar57;
            *(undefined4 *)((long)puVar19 + 0x14) = uVar49;
            *(undefined4 *)(puVar19 + 3) = uVar61;
            *(undefined4 *)((long)puVar19 + 0x1c) = uVar53;
            *(undefined4 *)(puVar19 + 4) = uVar58;
            *(undefined4 *)((long)puVar19 + 0x24) = uVar50;
            *(undefined4 *)(puVar19 + 5) = uVar62;
            *(undefined4 *)((long)puVar19 + 0x2c) = uVar54;
            *(undefined4 *)(puVar19 + 6) = uVar59;
            *(undefined4 *)((long)puVar19 + 0x34) = uVar51;
            *(undefined4 *)(puVar19 + 7) = uVar63;
            *(undefined4 *)((long)puVar19 + 0x3c) = uVar55;
            puVar19 = puVar19 + 0x10;
            param_3 = param_3 + 8;
          } while (uVar28 != 0);
          uVar28 = param_1 >> 1 & 7;
          param_3 = puVar16;
          if (uVar27 == uVar20) goto LAB_0070e0fc;
        }
      }
      uVar28 = uVar28 + 1;
      puVar19 = puVar13;
      do {
        puVar16 = param_3 + 1;
        uVar7 = *param_3;
        uVar28 = uVar28 - 1;
        puVar13 = puVar19 + 1;
        uVar8 = *puVar19;
        *(int *)param_5 = (int)uVar7;
        *(int *)((long)param_5 + 4) = (int)uVar8;
        *(int *)(param_5 + 1) = (int)((ulong)uVar7 >> 0x20);
        *(int *)((long)param_5 + 0xc) = (int)((ulong)uVar8 >> 0x20);
        param_5 = param_5 + 2;
        puVar19 = puVar13;
        param_3 = puVar16;
      } while (1 < uVar28);
    }
LAB_0070e0fc:
    param_3 = puVar15;
    if ((param_1 & 1) != 0) {
      uVar29 = *(undefined4 *)puVar13;
      *(undefined4 *)param_5 = *(undefined4 *)puVar16;
      *(undefined4 *)((long)param_5 + 4) = uVar29;
      param_5 = param_5 + 1;
    }
  }
  if ((param_2 & 1) == 0) {
    return 0;
  }
  puVar13 = param_3;
  if (0 < (long)uVar27) {
    if ((7 < uVar27) && ((param_3 + uVar27 <= param_5 || (param_5 + uVar27 <= param_3)))) {
      uVar20 = uVar27 & 0x7ffffffffffffff8;
      puVar15 = param_5 + 4;
      param_5 = param_5 + uVar20;
      puVar13 = param_3 + uVar20;
      puVar16 = param_3 + 4;
      uVar28 = uVar20;
      do {
        uVar7 = puVar16[-4];
        uVar9 = puVar16[-1];
        uVar8 = puVar16[-2];
        uVar28 = uVar28 - 8;
        uVar35 = puVar16[1];
        uVar34 = *puVar16;
        uVar32 = puVar16[3];
        uVar31 = puVar16[2];
        puVar15[-3] = puVar16[-3];
        puVar15[-4] = uVar7;
        puVar15[-1] = uVar9;
        puVar15[-2] = uVar8;
        puVar15[1] = uVar35;
        *puVar15 = uVar34;
        puVar15[3] = uVar32;
        puVar15[2] = uVar31;
        puVar16 = puVar16 + 8;
        puVar15 = puVar15 + 8;
      } while (uVar28 != 0);
      bVar10 = uVar27 == uVar20;
      param_3 = puVar13;
      uVar27 = param_1 >> 1 & 7;
      if (bVar10) goto LAB_0070e180;
    }
    uVar27 = uVar27 + 1;
    puVar15 = param_5;
    do {
      puVar13 = param_3 + 1;
      uVar27 = uVar27 - 1;
      param_5 = puVar15 + 1;
      *puVar15 = *param_3;
      param_3 = puVar13;
      puVar15 = param_5;
    } while (1 < uVar27);
  }
LAB_0070e180:
  if ((param_1 & 1) != 0) {
    *(undefined4 *)param_5 = *(undefined4 *)puVar13;
  }
  return 0;
}


// ===== 0070e3c0  FUN_0070e3c0 =====

undefined8
FUN_0070e3c0(ulong param_1,ulong param_2,undefined8 *param_3,long param_4,undefined4 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined4 *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  
  param_4 = param_4 * 4;
  lVar23 = param_1 * 4;
  puVar19 = (undefined8 *)((param_2 & 0xfffffffffffffff0) * lVar23 + (long)param_5);
  puVar20 = (undefined8 *)((param_2 & 0xfffffffffffffff8) * lVar23 + (long)param_5);
  puVar21 = (undefined8 *)((param_2 & 0xfffffffffffffffc) * lVar23 + (long)param_5);
  puVar22 = (undefined4 *)((param_2 & 0xfffffffffffffffe) * lVar23 + (long)param_5);
  lVar23 = (long)param_1 >> 3;
  lVar25 = (long)param_2 >> 4;
  puVar9 = param_3;
  puVar11 = param_5;
  if (0 < lVar23) {
    do {
      puVar10 = (undefined8 *)((long)puVar9 + param_4);
      puVar13 = (undefined8 *)((long)puVar10 + param_4);
      puVar14 = (undefined8 *)((long)puVar13 + param_4);
      puVar15 = (undefined8 *)((long)puVar14 + param_4);
      puVar16 = (undefined8 *)((long)puVar15 + param_4);
      puVar17 = (undefined8 *)((long)puVar16 + param_4);
      puVar18 = (undefined8 *)((long)puVar17 + param_4);
      param_3 = (undefined8 *)((long)puVar18 + param_4);
      param_5 = puVar11 + 0x80;
      lVar24 = lVar25;
      if (0 < lVar25) {
        do {
          Hint_Prefetch(puVar9 + 0x20,0,0,0);
          Hint_Prefetch(puVar10 + 0x20,0,0,0);
          Hint_Prefetch(puVar13 + 0x20,0,0,0);
          Hint_Prefetch(puVar14 + 0x20,0,0,0);
          Hint_Prefetch(puVar15 + 0x20,0,0,0);
          Hint_Prefetch(puVar16 + 0x20,0,0,0);
          Hint_Prefetch(puVar17 + 0x20,0,0,0);
          Hint_Prefetch(puVar18 + 0x20,0,0,0);
          uVar26 = *puVar9;
          uVar27 = puVar9[1];
          uVar29 = puVar9[2];
          uVar32 = puVar9[3];
          uVar28 = puVar9[4];
          uVar30 = puVar9[5];
          uVar31 = puVar9[6];
          uVar33 = puVar9[7];
          puVar9 = puVar9 + 8;
          *puVar11 = (int)uVar26;
          puVar11[1] = (int)((ulong)uVar26 >> 0x20);
          puVar11[2] = (int)uVar27;
          puVar11[3] = (int)((ulong)uVar27 >> 0x20);
          puVar11[4] = (int)uVar29;
          puVar11[5] = (int)((ulong)uVar29 >> 0x20);
          puVar11[6] = (int)uVar32;
          puVar11[7] = (int)((ulong)uVar32 >> 0x20);
          puVar11[8] = (int)uVar28;
          puVar11[9] = (int)((ulong)uVar28 >> 0x20);
          puVar11[10] = (int)uVar30;
          puVar11[0xb] = (int)((ulong)uVar30 >> 0x20);
          puVar11[0xc] = (int)uVar31;
          puVar11[0xd] = (int)((ulong)uVar31 >> 0x20);
          puVar11[0xe] = (int)uVar33;
          puVar11[0xf] = (int)((ulong)uVar33 >> 0x20);
          uVar26 = *puVar10;
          uVar27 = puVar10[1];
          uVar29 = puVar10[2];
          uVar32 = puVar10[3];
          uVar28 = puVar10[4];
          uVar30 = puVar10[5];
          uVar31 = puVar10[6];
          uVar33 = puVar10[7];
          puVar10 = puVar10 + 8;
          puVar11[0x10] = (int)uVar26;
          puVar11[0x11] = (int)((ulong)uVar26 >> 0x20);
          puVar11[0x12] = (int)uVar27;
          puVar11[0x13] = (int)((ulong)uVar27 >> 0x20);
          puVar11[0x14] = (int)uVar29;
          puVar11[0x15] = (int)((ulong)uVar29 >> 0x20);
          puVar11[0x16] = (int)uVar32;
          puVar11[0x17] = (int)((ulong)uVar32 >> 0x20);
          puVar11[0x18] = (int)uVar28;
          puVar11[0x19] = (int)((ulong)uVar28 >> 0x20);
          puVar11[0x1a] = (int)uVar30;
          puVar11[0x1b] = (int)((ulong)uVar30 >> 0x20);
          puVar11[0x1c] = (int)uVar31;
          puVar11[0x1d] = (int)((ulong)uVar31 >> 0x20);
          puVar11[0x1e] = (int)uVar33;
          puVar11[0x1f] = (int)((ulong)uVar33 >> 0x20);
          uVar26 = *puVar13;
          uVar27 = puVar13[1];
          uVar29 = puVar13[2];
          uVar32 = puVar13[3];
          uVar28 = puVar13[4];
          uVar30 = puVar13[5];
          uVar31 = puVar13[6];
          uVar33 = puVar13[7];
          puVar13 = puVar13 + 8;
          puVar11[0x20] = (int)uVar26;
          puVar11[0x21] = (int)((ulong)uVar26 >> 0x20);
          puVar11[0x22] = (int)uVar27;
          puVar11[0x23] = (int)((ulong)uVar27 >> 0x20);
          puVar11[0x24] = (int)uVar29;
          puVar11[0x25] = (int)((ulong)uVar29 >> 0x20);
          puVar11[0x26] = (int)uVar32;
          puVar11[0x27] = (int)((ulong)uVar32 >> 0x20);
          puVar11[0x28] = (int)uVar28;
          puVar11[0x29] = (int)((ulong)uVar28 >> 0x20);
          puVar11[0x2a] = (int)uVar30;
          puVar11[0x2b] = (int)((ulong)uVar30 >> 0x20);
          puVar11[0x2c] = (int)uVar31;
          puVar11[0x2d] = (int)((ulong)uVar31 >> 0x20);
          puVar11[0x2e] = (int)uVar33;
          puVar11[0x2f] = (int)((ulong)uVar33 >> 0x20);
          uVar26 = *puVar14;
          uVar27 = puVar14[1];
          uVar29 = puVar14[2];
          uVar32 = puVar14[3];
          uVar28 = puVar14[4];
          uVar30 = puVar14[5];
          uVar31 = puVar14[6];
          uVar33 = puVar14[7];
          puVar14 = puVar14 + 8;
          puVar11[0x30] = (int)uVar26;
          puVar11[0x31] = (int)((ulong)uVar26 >> 0x20);
          puVar11[0x32] = (int)uVar27;
          puVar11[0x33] = (int)((ulong)uVar27 >> 0x20);
          puVar11[0x34] = (int)uVar29;
          puVar11[0x35] = (int)((ulong)uVar29 >> 0x20);
          puVar11[0x36] = (int)uVar32;
          puVar11[0x37] = (int)((ulong)uVar32 >> 0x20);
          puVar11[0x38] = (int)uVar28;
          puVar11[0x39] = (int)((ulong)uVar28 >> 0x20);
          puVar11[0x3a] = (int)uVar30;
          puVar11[0x3b] = (int)((ulong)uVar30 >> 0x20);
          puVar11[0x3c] = (int)uVar31;
          puVar11[0x3d] = (int)((ulong)uVar31 >> 0x20);
          puVar11[0x3e] = (int)uVar33;
          puVar11[0x3f] = (int)((ulong)uVar33 >> 0x20);
          uVar26 = *puVar15;
          uVar27 = puVar15[1];
          uVar29 = puVar15[2];
          uVar32 = puVar15[3];
          uVar34 = *(undefined4 *)(puVar15 + 4);
          uVar35 = *(undefined4 *)((long)puVar15 + 0x24);
          uVar36 = *(undefined4 *)(puVar15 + 5);
          uVar37 = *(undefined4 *)((long)puVar15 + 0x2c);
          uVar38 = *(undefined4 *)(puVar15 + 6);
          uVar39 = *(undefined4 *)((long)puVar15 + 0x34);
          uVar40 = *(undefined4 *)(puVar15 + 7);
          uVar41 = *(undefined4 *)((long)puVar15 + 0x3c);
          puVar15 = puVar15 + 8;
          puVar11[0x40] = (int)uVar26;
          puVar11[0x41] = (int)((ulong)uVar26 >> 0x20);
          puVar11[0x42] = (int)uVar27;
          puVar11[0x43] = (int)((ulong)uVar27 >> 0x20);
          puVar11[0x44] = (int)uVar29;
          puVar11[0x45] = (int)((ulong)uVar29 >> 0x20);
          puVar11[0x46] = (int)uVar32;
          puVar11[0x47] = (int)((ulong)uVar32 >> 0x20);
          puVar11[0x48] = uVar34;
          puVar11[0x49] = uVar35;
          puVar11[0x4a] = uVar36;
          puVar11[0x4b] = uVar37;
          puVar11[0x4c] = uVar38;
          puVar11[0x4d] = uVar39;
          puVar11[0x4e] = uVar40;
          puVar11[0x4f] = uVar41;
          uVar34 = *(undefined4 *)puVar16;
          uVar35 = *(undefined4 *)((long)puVar16 + 4);
          uVar36 = *(undefined4 *)(puVar16 + 1);
          uVar37 = *(undefined4 *)((long)puVar16 + 0xc);
          uVar38 = *(undefined4 *)(puVar16 + 2);
          uVar39 = *(undefined4 *)((long)puVar16 + 0x14);
          uVar40 = *(undefined4 *)(puVar16 + 3);
          uVar41 = *(undefined4 *)((long)puVar16 + 0x1c);
          uVar42 = *(undefined4 *)(puVar16 + 4);
          uVar43 = *(undefined4 *)((long)puVar16 + 0x24);
          uVar44 = *(undefined4 *)(puVar16 + 5);
          uVar45 = *(undefined4 *)((long)puVar16 + 0x2c);
          uVar46 = *(undefined4 *)(puVar16 + 6);
          uVar47 = *(undefined4 *)((long)puVar16 + 0x34);
          uVar48 = *(undefined4 *)(puVar16 + 7);
          uVar49 = *(undefined4 *)((long)puVar16 + 0x3c);
          puVar16 = puVar16 + 8;
          puVar11[0x50] = uVar34;
          puVar11[0x51] = uVar35;
          puVar11[0x52] = uVar36;
          puVar11[0x53] = uVar37;
          puVar11[0x54] = uVar38;
          puVar11[0x55] = uVar39;
          puVar11[0x56] = uVar40;
          puVar11[0x57] = uVar41;
          puVar11[0x58] = uVar42;
          puVar11[0x59] = uVar43;
          puVar11[0x5a] = uVar44;
          puVar11[0x5b] = uVar45;
          puVar11[0x5c] = uVar46;
          puVar11[0x5d] = uVar47;
          puVar11[0x5e] = uVar48;
          puVar11[0x5f] = uVar49;
          uVar34 = *(undefined4 *)puVar17;
          uVar35 = *(undefined4 *)((long)puVar17 + 4);
          uVar36 = *(undefined4 *)(puVar17 + 1);
          uVar37 = *(undefined4 *)((long)puVar17 + 0xc);
          uVar38 = *(undefined4 *)(puVar17 + 2);
          uVar39 = *(undefined4 *)((long)puVar17 + 0x14);
          uVar40 = *(undefined4 *)(puVar17 + 3);
          uVar41 = *(undefined4 *)((long)puVar17 + 0x1c);
          uVar42 = *(undefined4 *)(puVar17 + 4);
          uVar43 = *(undefined4 *)((long)puVar17 + 0x24);
          uVar44 = *(undefined4 *)(puVar17 + 5);
          uVar45 = *(undefined4 *)((long)puVar17 + 0x2c);
          uVar46 = *(undefined4 *)(puVar17 + 6);
          uVar47 = *(undefined4 *)((long)puVar17 + 0x34);
          uVar48 = *(undefined4 *)(puVar17 + 7);
          uVar49 = *(undefined4 *)((long)puVar17 + 0x3c);
          puVar17 = puVar17 + 8;
          puVar11[0x60] = uVar34;
          puVar11[0x61] = uVar35;
          puVar11[0x62] = uVar36;
          puVar11[99] = uVar37;
          puVar11[100] = uVar38;
          puVar11[0x65] = uVar39;
          puVar11[0x66] = uVar40;
          puVar11[0x67] = uVar41;
          puVar11[0x68] = uVar42;
          puVar11[0x69] = uVar43;
          puVar11[0x6a] = uVar44;
          puVar11[0x6b] = uVar45;
          puVar11[0x6c] = uVar46;
          puVar11[0x6d] = uVar47;
          puVar11[0x6e] = uVar48;
          puVar11[0x6f] = uVar49;
          uVar34 = *(undefined4 *)puVar18;
          uVar35 = *(undefined4 *)((long)puVar18 + 4);
          uVar36 = *(undefined4 *)(puVar18 + 1);
          uVar37 = *(undefined4 *)((long)puVar18 + 0xc);
          uVar38 = *(undefined4 *)(puVar18 + 2);
          uVar39 = *(undefined4 *)((long)puVar18 + 0x14);
          uVar40 = *(undefined4 *)(puVar18 + 3);
          uVar41 = *(undefined4 *)((long)puVar18 + 0x1c);
          uVar42 = *(undefined4 *)(puVar18 + 4);
          uVar43 = *(undefined4 *)((long)puVar18 + 0x24);
          uVar44 = *(undefined4 *)(puVar18 + 5);
          uVar45 = *(undefined4 *)((long)puVar18 + 0x2c);
          uVar46 = *(undefined4 *)(puVar18 + 6);
          uVar47 = *(undefined4 *)((long)puVar18 + 0x34);
          uVar48 = *(undefined4 *)(puVar18 + 7);
          uVar49 = *(undefined4 *)((long)puVar18 + 0x3c);
          puVar18 = puVar18 + 8;
          puVar11[0x70] = uVar34;
          puVar11[0x71] = uVar35;
          puVar11[0x72] = uVar36;
          puVar11[0x73] = uVar37;
          puVar11[0x74] = uVar38;
          puVar11[0x75] = uVar39;
          puVar11[0x76] = uVar40;
          puVar11[0x77] = uVar41;
          puVar11[0x78] = uVar42;
          puVar11[0x79] = uVar43;
          puVar11[0x7a] = uVar44;
          puVar11[0x7b] = uVar45;
          puVar11[0x7c] = uVar46;
          puVar11[0x7d] = uVar47;
          puVar11[0x7e] = uVar48;
          puVar11[0x7f] = uVar49;
          puVar11 = puVar11 + param_1 * 0x10;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
      }
      if ((param_2 & 8) != 0) {
        Hint_Prefetch(puVar9 + 0x20,0,0,0);
        Hint_Prefetch(puVar10 + 0x20,0,0,0);
        Hint_Prefetch(puVar13 + 0x20,0,0,0);
        Hint_Prefetch(puVar14 + 0x20,0,0,0);
        Hint_Prefetch(puVar15 + 0x20,0,0,0);
        Hint_Prefetch(puVar16 + 0x20,0,0,0);
        Hint_Prefetch(puVar17 + 0x20,0,0,0);
        Hint_Prefetch(puVar18 + 0x20,0,0,0);
        uVar27 = puVar9[1];
        uVar26 = *puVar9;
        uVar32 = puVar9[3];
        uVar29 = puVar9[2];
        uVar30 = puVar10[1];
        uVar28 = *puVar10;
        uVar33 = puVar10[3];
        uVar31 = puVar10[2];
        puVar9 = puVar9 + 4;
        puVar10 = puVar10 + 4;
        *(int *)puVar19 = (int)uVar26;
        *(int *)((long)puVar19 + 4) = (int)((ulong)uVar26 >> 0x20);
        *(int *)(puVar19 + 1) = (int)uVar27;
        *(int *)((long)puVar19 + 0xc) = (int)((ulong)uVar27 >> 0x20);
        *(int *)(puVar19 + 2) = (int)uVar29;
        *(int *)((long)puVar19 + 0x14) = (int)((ulong)uVar29 >> 0x20);
        *(int *)(puVar19 + 3) = (int)uVar32;
        *(int *)((long)puVar19 + 0x1c) = (int)((ulong)uVar32 >> 0x20);
        *(int *)(puVar19 + 4) = (int)uVar28;
        *(int *)((long)puVar19 + 0x24) = (int)((ulong)uVar28 >> 0x20);
        *(int *)(puVar19 + 5) = (int)uVar30;
        *(int *)((long)puVar19 + 0x2c) = (int)((ulong)uVar30 >> 0x20);
        *(int *)(puVar19 + 6) = (int)uVar31;
        *(int *)((long)puVar19 + 0x34) = (int)((ulong)uVar31 >> 0x20);
        *(int *)(puVar19 + 7) = (int)uVar33;
        *(int *)((long)puVar19 + 0x3c) = (int)((ulong)uVar33 >> 0x20);
        uVar27 = puVar13[1];
        uVar26 = *puVar13;
        uVar32 = puVar13[3];
        uVar29 = puVar13[2];
        uVar30 = puVar14[1];
        uVar28 = *puVar14;
        uVar33 = puVar14[3];
        uVar31 = puVar14[2];
        puVar13 = puVar13 + 4;
        puVar14 = puVar14 + 4;
        *(int *)(puVar19 + 8) = (int)uVar26;
        *(int *)((long)puVar19 + 0x44) = (int)((ulong)uVar26 >> 0x20);
        *(int *)(puVar19 + 9) = (int)uVar27;
        *(int *)((long)puVar19 + 0x4c) = (int)((ulong)uVar27 >> 0x20);
        *(int *)(puVar19 + 10) = (int)uVar29;
        *(int *)((long)puVar19 + 0x54) = (int)((ulong)uVar29 >> 0x20);
        *(int *)(puVar19 + 0xb) = (int)uVar32;
        *(int *)((long)puVar19 + 0x5c) = (int)((ulong)uVar32 >> 0x20);
        *(int *)(puVar19 + 0xc) = (int)uVar28;
        *(int *)((long)puVar19 + 100) = (int)((ulong)uVar28 >> 0x20);
        *(int *)(puVar19 + 0xd) = (int)uVar30;
        *(int *)((long)puVar19 + 0x6c) = (int)((ulong)uVar30 >> 0x20);
        *(int *)(puVar19 + 0xe) = (int)uVar31;
        *(int *)((long)puVar19 + 0x74) = (int)((ulong)uVar31 >> 0x20);
        *(int *)(puVar19 + 0xf) = (int)uVar33;
        *(int *)((long)puVar19 + 0x7c) = (int)((ulong)uVar33 >> 0x20);
        uVar27 = puVar15[1];
        uVar26 = *puVar15;
        uVar32 = puVar15[3];
        uVar29 = puVar15[2];
        uVar30 = puVar16[1];
        uVar28 = *puVar16;
        uVar33 = puVar16[3];
        uVar31 = puVar16[2];
        puVar15 = puVar15 + 4;
        puVar16 = puVar16 + 4;
        *(int *)(puVar19 + 0x10) = (int)uVar26;
        *(int *)((long)puVar19 + 0x84) = (int)((ulong)uVar26 >> 0x20);
        *(int *)(puVar19 + 0x11) = (int)uVar27;
        *(int *)((long)puVar19 + 0x8c) = (int)((ulong)uVar27 >> 0x20);
        *(int *)(puVar19 + 0x12) = (int)uVar29;
        *(int *)((long)puVar19 + 0x94) = (int)((ulong)uVar29 >> 0x20);
        *(int *)(puVar19 + 0x13) = (int)uVar32;
        *(int *)((long)puVar19 + 0x9c) = (int)((ulong)uVar32 >> 0x20);
        *(int *)(puVar19 + 0x14) = (int)uVar28;
        *(int *)((long)puVar19 + 0xa4) = (int)((ulong)uVar28 >> 0x20);
        *(int *)(puVar19 + 0x15) = (int)uVar30;
        *(int *)((long)puVar19 + 0xac) = (int)((ulong)uVar30 >> 0x20);
        *(int *)(puVar19 + 0x16) = (int)uVar31;
        *(int *)((long)puVar19 + 0xb4) = (int)((ulong)uVar31 >> 0x20);
        *(int *)(puVar19 + 0x17) = (int)uVar33;
        *(int *)((long)puVar19 + 0xbc) = (int)((ulong)uVar33 >> 0x20);
        uVar27 = puVar17[1];
        uVar26 = *puVar17;
        uVar32 = puVar17[3];
        uVar29 = puVar17[2];
        uVar30 = puVar18[1];
        uVar28 = *puVar18;
        uVar33 = puVar18[3];
        uVar31 = puVar18[2];
        puVar17 = puVar17 + 4;
        puVar18 = puVar18 + 4;
        *(int *)(puVar19 + 0x18) = (int)uVar26;
        *(int *)((long)puVar19 + 0xc4) = (int)((ulong)uVar26 >> 0x20);
        *(int *)(puVar19 + 0x19) = (int)uVar27;
        *(int *)((long)puVar19 + 0xcc) = (int)((ulong)uVar27 >> 0x20);
        *(int *)(puVar19 + 0x1a) = (int)uVar29;
        *(int *)((long)puVar19 + 0xd4) = (int)((ulong)uVar29 >> 0x20);
        *(int *)(puVar19 + 0x1b) = (int)uVar32;
        *(int *)((long)puVar19 + 0xdc) = (int)((ulong)uVar32 >> 0x20);
        *(int *)(puVar19 + 0x1c) = (int)uVar28;
        *(int *)((long)puVar19 + 0xe4) = (int)((ulong)uVar28 >> 0x20);
        *(int *)(puVar19 + 0x1d) = (int)uVar30;
        *(int *)((long)puVar19 + 0xec) = (int)((ulong)uVar30 >> 0x20);
        *(int *)(puVar19 + 0x1e) = (int)uVar31;
        *(int *)((long)puVar19 + 0xf4) = (int)((ulong)uVar31 >> 0x20);
        *(int *)(puVar19 + 0x1f) = (int)uVar33;
        *(int *)((long)puVar19 + 0xfc) = (int)((ulong)uVar33 >> 0x20);
        puVar19 = puVar19 + 0x20;
      }
      if ((param_2 & 4) != 0) {
        uVar27 = puVar9[1];
        uVar26 = *puVar9;
        uVar32 = puVar10[1];
        uVar29 = *puVar10;
        uVar30 = puVar13[1];
        uVar28 = *puVar13;
        uVar33 = puVar14[1];
        uVar31 = *puVar14;
        puVar9 = puVar9 + 2;
        puVar10 = puVar10 + 2;
        puVar13 = puVar13 + 2;
        puVar14 = puVar14 + 2;
        *(int *)puVar20 = (int)uVar26;
        *(int *)((long)puVar20 + 4) = (int)((ulong)uVar26 >> 0x20);
        *(int *)(puVar20 + 1) = (int)uVar27;
        *(int *)((long)puVar20 + 0xc) = (int)((ulong)uVar27 >> 0x20);
        *(int *)(puVar20 + 2) = (int)uVar29;
        *(int *)((long)puVar20 + 0x14) = (int)((ulong)uVar29 >> 0x20);
        *(int *)(puVar20 + 3) = (int)uVar32;
        *(int *)((long)puVar20 + 0x1c) = (int)((ulong)uVar32 >> 0x20);
        *(int *)(puVar20 + 4) = (int)uVar28;
        *(int *)((long)puVar20 + 0x24) = (int)((ulong)uVar28 >> 0x20);
        *(int *)(puVar20 + 5) = (int)uVar30;
        *(int *)((long)puVar20 + 0x2c) = (int)((ulong)uVar30 >> 0x20);
        *(int *)(puVar20 + 6) = (int)uVar31;
        *(int *)((long)puVar20 + 0x34) = (int)((ulong)uVar31 >> 0x20);
        *(int *)(puVar20 + 7) = (int)uVar33;
        *(int *)((long)puVar20 + 0x3c) = (int)((ulong)uVar33 >> 0x20);
        uVar27 = puVar15[1];
        uVar26 = *puVar15;
        uVar32 = puVar16[1];
        uVar29 = *puVar16;
        uVar30 = puVar17[1];
        uVar28 = *puVar17;
        uVar33 = puVar18[1];
        uVar31 = *puVar18;
        puVar15 = puVar15 + 2;
        puVar16 = puVar16 + 2;
        puVar17 = puVar17 + 2;
        puVar18 = puVar18 + 2;
        *(int *)(puVar20 + 8) = (int)uVar26;
        *(int *)((long)puVar20 + 0x44) = (int)((ulong)uVar26 >> 0x20);
        *(int *)(puVar20 + 9) = (int)uVar27;
        *(int *)((long)puVar20 + 0x4c) = (int)((ulong)uVar27 >> 0x20);
        *(int *)(puVar20 + 10) = (int)uVar29;
        *(int *)((long)puVar20 + 0x54) = (int)((ulong)uVar29 >> 0x20);
        *(int *)(puVar20 + 0xb) = (int)uVar32;
        *(int *)((long)puVar20 + 0x5c) = (int)((ulong)uVar32 >> 0x20);
        *(int *)(puVar20 + 0xc) = (int)uVar28;
        *(int *)((long)puVar20 + 100) = (int)((ulong)uVar28 >> 0x20);
        *(int *)(puVar20 + 0xd) = (int)uVar30;
        *(int *)((long)puVar20 + 0x6c) = (int)((ulong)uVar30 >> 0x20);
        *(int *)(puVar20 + 0xe) = (int)uVar31;
        *(int *)((long)puVar20 + 0x74) = (int)((ulong)uVar31 >> 0x20);
        *(int *)(puVar20 + 0xf) = (int)uVar33;
        *(int *)((long)puVar20 + 0x7c) = (int)((ulong)uVar33 >> 0x20);
        puVar20 = puVar20 + 0x10;
      }
      if ((param_2 & 2) != 0) {
        uVar26 = *puVar9;
        uVar27 = *puVar10;
        uVar29 = *puVar13;
        uVar32 = *puVar14;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
        *puVar21 = uVar26;
        puVar21[1] = uVar27;
        puVar21[2] = uVar29;
        puVar21[3] = uVar32;
        uVar26 = *puVar15;
        uVar27 = *puVar16;
        uVar29 = *puVar17;
        uVar32 = *puVar18;
        puVar15 = puVar15 + 1;
        puVar16 = puVar16 + 1;
        puVar17 = puVar17 + 1;
        puVar18 = puVar18 + 1;
        puVar21[4] = uVar26;
        puVar21[5] = uVar27;
        puVar21[6] = uVar29;
        puVar21[7] = uVar32;
        puVar21 = puVar21 + 8;
      }
      if ((param_2 & 1) != 0) {
        uVar34 = *(undefined4 *)puVar10;
        uVar35 = *(undefined4 *)puVar13;
        uVar36 = *(undefined4 *)puVar14;
        *puVar22 = *(undefined4 *)puVar9;
        puVar22[1] = uVar34;
        puVar22[2] = uVar35;
        puVar22[3] = uVar36;
        uVar34 = *(undefined4 *)puVar16;
        uVar35 = *(undefined4 *)puVar17;
        uVar36 = *(undefined4 *)puVar18;
        puVar22[4] = *(undefined4 *)puVar15;
        puVar22[5] = uVar34;
        puVar22[6] = uVar35;
        puVar22[7] = uVar36;
        puVar22 = puVar22 + 8;
      }
      lVar23 = lVar23 + -1;
      puVar9 = param_3;
      puVar11 = param_5;
    } while (lVar23 != 0);
  }
  if ((param_1 & 7) != 0) {
    puVar9 = param_3;
    puVar11 = param_5;
    if ((param_1 & 4) != 0) {
      puVar10 = (undefined8 *)((long)param_3 + param_4);
      puVar13 = (undefined8 *)((long)puVar10 + param_4);
      puVar14 = (undefined8 *)((long)puVar13 + param_4);
      puVar9 = (undefined8 *)((long)puVar14 + param_4);
      puVar11 = param_5 + 0x40;
      lVar23 = lVar25;
      if (0 < lVar25) {
        do {
          Hint_Prefetch(param_3 + 0x20,0,0,0);
          Hint_Prefetch(puVar10 + 0x20,0,0,0);
          Hint_Prefetch(puVar13 + 0x20,0,0,0);
          Hint_Prefetch(puVar14 + 0x20,0,0,0);
          uVar26 = *param_3;
          uVar27 = param_3[1];
          uVar29 = param_3[2];
          uVar32 = param_3[3];
          uVar28 = param_3[4];
          uVar30 = param_3[5];
          uVar31 = param_3[6];
          uVar33 = param_3[7];
          param_3 = param_3 + 8;
          *param_5 = (int)uVar26;
          param_5[1] = (int)((ulong)uVar26 >> 0x20);
          param_5[2] = (int)uVar27;
          param_5[3] = (int)((ulong)uVar27 >> 0x20);
          param_5[4] = (int)uVar29;
          param_5[5] = (int)((ulong)uVar29 >> 0x20);
          param_5[6] = (int)uVar32;
          param_5[7] = (int)((ulong)uVar32 >> 0x20);
          param_5[8] = (int)uVar28;
          param_5[9] = (int)((ulong)uVar28 >> 0x20);
          param_5[10] = (int)uVar30;
          param_5[0xb] = (int)((ulong)uVar30 >> 0x20);
          param_5[0xc] = (int)uVar31;
          param_5[0xd] = (int)((ulong)uVar31 >> 0x20);
          param_5[0xe] = (int)uVar33;
          param_5[0xf] = (int)((ulong)uVar33 >> 0x20);
          uVar26 = *puVar10;
          uVar27 = puVar10[1];
          uVar29 = puVar10[2];
          uVar32 = puVar10[3];
          uVar28 = puVar10[4];
          uVar30 = puVar10[5];
          uVar31 = puVar10[6];
          uVar33 = puVar10[7];
          puVar10 = puVar10 + 8;
          param_5[0x10] = (int)uVar26;
          param_5[0x11] = (int)((ulong)uVar26 >> 0x20);
          param_5[0x12] = (int)uVar27;
          param_5[0x13] = (int)((ulong)uVar27 >> 0x20);
          param_5[0x14] = (int)uVar29;
          param_5[0x15] = (int)((ulong)uVar29 >> 0x20);
          param_5[0x16] = (int)uVar32;
          param_5[0x17] = (int)((ulong)uVar32 >> 0x20);
          param_5[0x18] = (int)uVar28;
          param_5[0x19] = (int)((ulong)uVar28 >> 0x20);
          param_5[0x1a] = (int)uVar30;
          param_5[0x1b] = (int)((ulong)uVar30 >> 0x20);
          param_5[0x1c] = (int)uVar31;
          param_5[0x1d] = (int)((ulong)uVar31 >> 0x20);
          param_5[0x1e] = (int)uVar33;
          param_5[0x1f] = (int)((ulong)uVar33 >> 0x20);
          uVar26 = *puVar13;
          uVar27 = puVar13[1];
          uVar29 = puVar13[2];
          uVar32 = puVar13[3];
          uVar28 = puVar13[4];
          uVar30 = puVar13[5];
          uVar31 = puVar13[6];
          uVar33 = puVar13[7];
          puVar13 = puVar13 + 8;
          param_5[0x20] = (int)uVar26;
          param_5[0x21] = (int)((ulong)uVar26 >> 0x20);
          param_5[0x22] = (int)uVar27;
          param_5[0x23] = (int)((ulong)uVar27 >> 0x20);
          param_5[0x24] = (int)uVar29;
          param_5[0x25] = (int)((ulong)uVar29 >> 0x20);
          param_5[0x26] = (int)uVar32;
          param_5[0x27] = (int)((ulong)uVar32 >> 0x20);
          param_5[0x28] = (int)uVar28;
          param_5[0x29] = (int)((ulong)uVar28 >> 0x20);
          param_5[0x2a] = (int)uVar30;
          param_5[0x2b] = (int)((ulong)uVar30 >> 0x20);
          param_5[0x2c] = (int)uVar31;
          param_5[0x2d] = (int)((ulong)uVar31 >> 0x20);
          param_5[0x2e] = (int)uVar33;
          param_5[0x2f] = (int)((ulong)uVar33 >> 0x20);
          uVar26 = *puVar14;
          uVar27 = puVar14[1];
          uVar29 = puVar14[2];
          uVar32 = puVar14[3];
          uVar28 = puVar14[4];
          uVar30 = puVar14[5];
          uVar31 = puVar14[6];
          uVar33 = puVar14[7];
          puVar14 = puVar14 + 8;
          param_5[0x30] = (int)uVar26;
          param_5[0x31] = (int)((ulong)uVar26 >> 0x20);
          param_5[0x32] = (int)uVar27;
          param_5[0x33] = (int)((ulong)uVar27 >> 0x20);
          param_5[0x34] = (int)uVar29;
          param_5[0x35] = (int)((ulong)uVar29 >> 0x20);
          param_5[0x36] = (int)uVar32;
          param_5[0x37] = (int)((ulong)uVar32 >> 0x20);
          param_5[0x38] = (int)uVar28;
          param_5[0x39] = (int)((ulong)uVar28 >> 0x20);
          param_5[0x3a] = (int)uVar30;
          param_5[0x3b] = (int)((ulong)uVar30 >> 0x20);
          param_5[0x3c] = (int)uVar31;
          param_5[0x3d] = (int)((ulong)uVar31 >> 0x20);
          param_5[0x3e] = (int)uVar33;
          param_5[0x3f] = (int)((ulong)uVar33 >> 0x20);
          param_5 = param_5 + param_1 * 0x10;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
      }
      if ((param_2 & 8) != 0) {
        Hint_Prefetch(param_3 + 0x20,0,0,0);
        Hint_Prefetch(puVar10 + 0x20,0,0,0);
        Hint_Prefetch(puVar13 + 0x20,0,0,0);
        Hint_Prefetch(puVar14 + 0x20,0,0,0);
        uVar27 = param_3[1];
        uVar26 = *param_3;
        uVar32 = param_3[3];
        uVar29 = param_3[2];
        uVar30 = puVar10[1];
        uVar28 = *puVar10;
        uVar33 = puVar10[3];
        uVar31 = puVar10[2];
        param_3 = param_3 + 4;
        puVar10 = puVar10 + 4;
        *(int *)puVar19 = (int)uVar26;
        *(int *)((long)puVar19 + 4) = (int)((ulong)uVar26 >> 0x20);
        *(int *)(puVar19 + 1) = (int)uVar27;
        *(int *)((long)puVar19 + 0xc) = (int)((ulong)uVar27 >> 0x20);
        *(int *)(puVar19 + 2) = (int)uVar29;
        *(int *)((long)puVar19 + 0x14) = (int)((ulong)uVar29 >> 0x20);
        *(int *)(puVar19 + 3) = (int)uVar32;
        *(int *)((long)puVar19 + 0x1c) = (int)((ulong)uVar32 >> 0x20);
        *(int *)(puVar19 + 4) = (int)uVar28;
        *(int *)((long)puVar19 + 0x24) = (int)((ulong)uVar28 >> 0x20);
        *(int *)(puVar19 + 5) = (int)uVar30;
        *(int *)((long)puVar19 + 0x2c) = (int)((ulong)uVar30 >> 0x20);
        *(int *)(puVar19 + 6) = (int)uVar31;
        *(int *)((long)puVar19 + 0x34) = (int)((ulong)uVar31 >> 0x20);
        *(int *)(puVar19 + 7) = (int)uVar33;
        *(int *)((long)puVar19 + 0x3c) = (int)((ulong)uVar33 >> 0x20);
        uVar27 = puVar13[1];
        uVar26 = *puVar13;
        uVar32 = puVar13[3];
        uVar29 = puVar13[2];
        uVar30 = puVar14[1];
        uVar28 = *puVar14;
        uVar33 = puVar14[3];
        uVar31 = puVar14[2];
        puVar13 = puVar13 + 4;
        puVar14 = puVar14 + 4;
        *(int *)(puVar19 + 8) = (int)uVar26;
        *(int *)((long)puVar19 + 0x44) = (int)((ulong)uVar26 >> 0x20);
        *(int *)(puVar19 + 9) = (int)uVar27;
        *(int *)((long)puVar19 + 0x4c) = (int)((ulong)uVar27 >> 0x20);
        *(int *)(puVar19 + 10) = (int)uVar29;
        *(int *)((long)puVar19 + 0x54) = (int)((ulong)uVar29 >> 0x20);
        *(int *)(puVar19 + 0xb) = (int)uVar32;
        *(int *)((long)puVar19 + 0x5c) = (int)((ulong)uVar32 >> 0x20);
        *(int *)(puVar19 + 0xc) = (int)uVar28;
        *(int *)((long)puVar19 + 100) = (int)((ulong)uVar28 >> 0x20);
        *(int *)(puVar19 + 0xd) = (int)uVar30;
        *(int *)((long)puVar19 + 0x6c) = (int)((ulong)uVar30 >> 0x20);
        *(int *)(puVar19 + 0xe) = (int)uVar31;
        *(int *)((long)puVar19 + 0x74) = (int)((ulong)uVar31 >> 0x20);
        *(int *)(puVar19 + 0xf) = (int)uVar33;
        *(int *)((long)puVar19 + 0x7c) = (int)((ulong)uVar33 >> 0x20);
        puVar19 = puVar19 + 0x10;
      }
      if ((param_2 & 4) != 0) {
        uVar27 = param_3[1];
        uVar26 = *param_3;
        uVar32 = puVar10[1];
        uVar29 = *puVar10;
        uVar30 = puVar13[1];
        uVar28 = *puVar13;
        uVar33 = puVar14[1];
        uVar31 = *puVar14;
        param_3 = param_3 + 2;
        puVar10 = puVar10 + 2;
        puVar13 = puVar13 + 2;
        puVar14 = puVar14 + 2;
        *(int *)puVar20 = (int)uVar26;
        *(int *)((long)puVar20 + 4) = (int)((ulong)uVar26 >> 0x20);
        *(int *)(puVar20 + 1) = (int)uVar27;
        *(int *)((long)puVar20 + 0xc) = (int)((ulong)uVar27 >> 0x20);
        *(int *)(puVar20 + 2) = (int)uVar29;
        *(int *)((long)puVar20 + 0x14) = (int)((ulong)uVar29 >> 0x20);
        *(int *)(puVar20 + 3) = (int)uVar32;
        *(int *)((long)puVar20 + 0x1c) = (int)((ulong)uVar32 >> 0x20);
        *(int *)(puVar20 + 4) = (int)uVar28;
        *(int *)((long)puVar20 + 0x24) = (int)((ulong)uVar28 >> 0x20);
        *(int *)(puVar20 + 5) = (int)uVar30;
        *(int *)((long)puVar20 + 0x2c) = (int)((ulong)uVar30 >> 0x20);
        *(int *)(puVar20 + 6) = (int)uVar31;
        *(int *)((long)puVar20 + 0x34) = (int)((ulong)uVar31 >> 0x20);
        *(int *)(puVar20 + 7) = (int)uVar33;
        *(int *)((long)puVar20 + 0x3c) = (int)((ulong)uVar33 >> 0x20);
        puVar20 = puVar20 + 8;
      }
      if ((param_2 & 2) != 0) {
        uVar26 = *param_3;
        uVar27 = *puVar10;
        uVar29 = *puVar13;
        uVar32 = *puVar14;
        param_3 = param_3 + 1;
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
        *puVar21 = uVar26;
        puVar21[1] = uVar27;
        puVar21[2] = uVar29;
        puVar21[3] = uVar32;
        puVar21 = puVar21 + 4;
      }
      if ((param_2 & 1) != 0) {
        uVar34 = *(undefined4 *)puVar10;
        uVar35 = *(undefined4 *)puVar13;
        uVar36 = *(undefined4 *)puVar14;
        *puVar22 = *(undefined4 *)param_3;
        puVar22[1] = uVar34;
        puVar22[2] = uVar35;
        puVar22[3] = uVar36;
        puVar22 = puVar22 + 4;
      }
    }
    if ((param_1 & 3) != 0) {
      puVar10 = puVar9;
      puVar12 = puVar11;
      if ((param_1 & 2) != 0) {
        puVar13 = (undefined8 *)((long)puVar9 + param_4);
        puVar10 = (undefined8 *)((long)puVar13 + param_4);
        puVar12 = puVar11 + 0x20;
        lVar23 = lVar25;
        if (0 < lVar25) {
          do {
            Hint_Prefetch(puVar9 + 0x20,0,0,0);
            Hint_Prefetch(puVar13 + 0x20,0,0,0);
            uVar26 = *puVar9;
            uVar27 = puVar9[1];
            uVar29 = puVar9[2];
            uVar32 = puVar9[3];
            uVar28 = puVar9[4];
            uVar30 = puVar9[5];
            uVar31 = puVar9[6];
            uVar33 = puVar9[7];
            puVar9 = puVar9 + 8;
            uVar1 = *puVar13;
            uVar2 = puVar13[1];
            uVar3 = puVar13[2];
            uVar4 = puVar13[3];
            uVar5 = puVar13[4];
            uVar6 = puVar13[5];
            uVar7 = puVar13[6];
            uVar8 = puVar13[7];
            puVar13 = puVar13 + 8;
            *puVar11 = (int)uVar26;
            puVar11[1] = (int)((ulong)uVar26 >> 0x20);
            puVar11[2] = (int)uVar27;
            puVar11[3] = (int)((ulong)uVar27 >> 0x20);
            puVar11[4] = (int)uVar29;
            puVar11[5] = (int)((ulong)uVar29 >> 0x20);
            puVar11[6] = (int)uVar32;
            puVar11[7] = (int)((ulong)uVar32 >> 0x20);
            puVar11[8] = (int)uVar28;
            puVar11[9] = (int)((ulong)uVar28 >> 0x20);
            puVar11[10] = (int)uVar30;
            puVar11[0xb] = (int)((ulong)uVar30 >> 0x20);
            puVar11[0xc] = (int)uVar31;
            puVar11[0xd] = (int)((ulong)uVar31 >> 0x20);
            puVar11[0xe] = (int)uVar33;
            puVar11[0xf] = (int)((ulong)uVar33 >> 0x20);
            puVar11[0x10] = (int)uVar1;
            puVar11[0x11] = (int)((ulong)uVar1 >> 0x20);
            puVar11[0x12] = (int)uVar2;
            puVar11[0x13] = (int)((ulong)uVar2 >> 0x20);
            puVar11[0x14] = (int)uVar3;
            puVar11[0x15] = (int)((ulong)uVar3 >> 0x20);
            puVar11[0x16] = (int)uVar4;
            puVar11[0x17] = (int)((ulong)uVar4 >> 0x20);
            puVar11[0x18] = (int)uVar5;
            puVar11[0x19] = (int)((ulong)uVar5 >> 0x20);
            puVar11[0x1a] = (int)uVar6;
            puVar11[0x1b] = (int)((ulong)uVar6 >> 0x20);
            puVar11[0x1c] = (int)uVar7;
            puVar11[0x1d] = (int)((ulong)uVar7 >> 0x20);
            puVar11[0x1e] = (int)uVar8;
            puVar11[0x1f] = (int)((ulong)uVar8 >> 0x20);
            puVar11 = puVar11 + param_1 * 0x10;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
        }
        if ((param_2 & 8) != 0) {
          Hint_Prefetch(puVar9 + 0x20,0,0,0);
          Hint_Prefetch(puVar13 + 0x20,0,0,0);
          uVar26 = *puVar9;
          uVar27 = puVar9[1];
          uVar29 = puVar9[2];
          uVar32 = puVar9[3];
          uVar28 = *puVar13;
          uVar30 = puVar13[1];
          uVar31 = puVar13[2];
          uVar33 = puVar13[3];
          puVar9 = puVar9 + 4;
          puVar13 = puVar13 + 4;
          *(int *)puVar19 = (int)uVar26;
          *(int *)((long)puVar19 + 4) = (int)((ulong)uVar26 >> 0x20);
          *(int *)(puVar19 + 1) = (int)uVar27;
          *(int *)((long)puVar19 + 0xc) = (int)((ulong)uVar27 >> 0x20);
          *(int *)(puVar19 + 2) = (int)uVar29;
          *(int *)((long)puVar19 + 0x14) = (int)((ulong)uVar29 >> 0x20);
          *(int *)(puVar19 + 3) = (int)uVar32;
          *(int *)((long)puVar19 + 0x1c) = (int)((ulong)uVar32 >> 0x20);
          *(int *)(puVar19 + 4) = (int)uVar28;
          *(int *)((long)puVar19 + 0x24) = (int)((ulong)uVar28 >> 0x20);
          *(int *)(puVar19 + 5) = (int)uVar30;
          *(int *)((long)puVar19 + 0x2c) = (int)((ulong)uVar30 >> 0x20);
          *(int *)(puVar19 + 6) = (int)uVar31;
          *(int *)((long)puVar19 + 0x34) = (int)((ulong)uVar31 >> 0x20);
          *(int *)(puVar19 + 7) = (int)uVar33;
          *(int *)((long)puVar19 + 0x3c) = (int)((ulong)uVar33 >> 0x20);
          puVar19 = puVar19 + 8;
        }
        if ((param_2 & 4) != 0) {
          puVar14 = puVar9 + 1;
          uVar26 = *puVar9;
          uVar29 = puVar13[1];
          uVar27 = *puVar13;
          puVar9 = puVar9 + 2;
          puVar13 = puVar13 + 2;
          puVar20[1] = *puVar14;
          *puVar20 = uVar26;
          puVar20[3] = uVar29;
          puVar20[2] = uVar27;
          puVar20 = puVar20 + 4;
        }
        if ((param_2 & 2) != 0) {
          uVar26 = *puVar9;
          uVar27 = *puVar13;
          puVar9 = puVar9 + 1;
          puVar13 = puVar13 + 1;
          *puVar21 = uVar26;
          puVar21[1] = uVar27;
          puVar21 = puVar21 + 2;
        }
        if ((param_2 & 1) != 0) {
          uVar34 = *(undefined4 *)puVar13;
          *puVar22 = *(undefined4 *)puVar9;
          puVar22[1] = uVar34;
          puVar22 = puVar22 + 2;
        }
      }
      if ((param_1 & 1) != 0) {
        if (0 < lVar25) {
          do {
            Hint_Prefetch(puVar10 + 0x20,0,0,0);
            uVar26 = *puVar10;
            uVar27 = puVar10[1];
            uVar29 = puVar10[2];
            uVar32 = puVar10[3];
            uVar28 = puVar10[4];
            uVar30 = puVar10[5];
            uVar31 = puVar10[6];
            uVar33 = puVar10[7];
            puVar10 = puVar10 + 8;
            *puVar12 = (int)uVar26;
            puVar12[1] = (int)((ulong)uVar26 >> 0x20);
            puVar12[2] = (int)uVar27;
            puVar12[3] = (int)((ulong)uVar27 >> 0x20);
            puVar12[4] = (int)uVar29;
            puVar12[5] = (int)((ulong)uVar29 >> 0x20);
            puVar12[6] = (int)uVar32;
            puVar12[7] = (int)((ulong)uVar32 >> 0x20);
            puVar12[8] = (int)uVar28;
            puVar12[9] = (int)((ulong)uVar28 >> 0x20);
            puVar12[10] = (int)uVar30;
            puVar12[0xb] = (int)((ulong)uVar30 >> 0x20);
            puVar12[0xc] = (int)uVar31;
            puVar12[0xd] = (int)((ulong)uVar31 >> 0x20);
            puVar12[0xe] = (int)uVar33;
            puVar12[0xf] = (int)((ulong)uVar33 >> 0x20);
            puVar12 = puVar12 + param_1 * 0x10;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
        }
        if ((param_2 & 8) != 0) {
          Hint_Prefetch(puVar10 + 0x20,0,0,0);
          puVar9 = puVar10 + 1;
          uVar26 = *puVar10;
          uVar29 = puVar10[3];
          uVar27 = puVar10[2];
          puVar10 = puVar10 + 4;
          puVar19[1] = *puVar9;
          *puVar19 = uVar26;
          puVar19[3] = uVar29;
          puVar19[2] = uVar27;
        }
        if ((param_2 & 4) != 0) {
          puVar9 = puVar10 + 1;
          uVar26 = *puVar10;
          puVar10 = puVar10 + 2;
          puVar20[1] = *puVar9;
          *puVar20 = uVar26;
        }
        if ((param_2 & 2) != 0) {
          uVar26 = *puVar10;
          puVar10 = puVar10 + 1;
          *puVar21 = uVar26;
        }
        if ((param_2 & 1) != 0) {
          *puVar22 = *(undefined4 *)puVar10;
        }
      }
    }
  }
  return 0;
}


// ===== 0070ea20  FUN_0070ea20 =====

undefined8
FUN_0070ea20(ulong param_1,ulong param_2,undefined8 *param_3,long param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  param_4 = param_4 * 4;
  lVar12 = (long)param_2 >> 2;
  lVar11 = (long)param_1 >> 2;
  puVar1 = param_3;
  if (0 < lVar12) {
    do {
      puVar2 = (undefined8 *)((long)puVar1 + param_4);
      puVar4 = (undefined8 *)((long)puVar2 + param_4);
      puVar6 = (undefined8 *)((long)puVar4 + param_4);
      param_3 = (undefined8 *)((long)puVar6 + param_4);
      puVar3 = puVar1;
      puVar5 = puVar2;
      puVar7 = puVar4;
      puVar8 = puVar6;
      lVar9 = lVar11;
      if (0 < lVar11) {
        do {
          Hint_Prefetch(puVar3 + 0x140,0,0,0);
          Hint_Prefetch(puVar5 + 0x140,0,0,0);
          Hint_Prefetch(puVar7 + 0x140,0,0,0);
          Hint_Prefetch(puVar8 + 0x140,0,0,0);
          puVar1 = puVar3 + 2;
          uVar14 = puVar3[1];
          uVar13 = *puVar3;
          puVar2 = puVar5 + 2;
          uVar17 = puVar5[1];
          uVar16 = *puVar5;
          puVar4 = puVar7 + 2;
          uVar20 = puVar7[1];
          uVar19 = *puVar7;
          puVar6 = puVar8 + 2;
          uVar23 = puVar8[1];
          uVar22 = *puVar8;
          *(int *)param_5 = (int)uVar13;
          *(int *)((long)param_5 + 4) = (int)uVar16;
          *(int *)(param_5 + 1) = (int)uVar19;
          *(int *)((long)param_5 + 0xc) = (int)uVar22;
          *(int *)(param_5 + 2) = (int)((ulong)uVar13 >> 0x20);
          *(int *)((long)param_5 + 0x14) = (int)((ulong)uVar16 >> 0x20);
          *(int *)(param_5 + 3) = (int)((ulong)uVar19 >> 0x20);
          *(int *)((long)param_5 + 0x1c) = (int)((ulong)uVar22 >> 0x20);
          *(int *)(param_5 + 4) = (int)uVar14;
          *(int *)((long)param_5 + 0x24) = (int)uVar17;
          *(int *)(param_5 + 5) = (int)uVar20;
          *(int *)((long)param_5 + 0x2c) = (int)uVar23;
          *(int *)(param_5 + 6) = (int)((ulong)uVar14 >> 0x20);
          *(int *)((long)param_5 + 0x34) = (int)((ulong)uVar17 >> 0x20);
          *(int *)(param_5 + 7) = (int)((ulong)uVar20 >> 0x20);
          *(int *)((long)param_5 + 0x3c) = (int)((ulong)uVar23 >> 0x20);
          param_5 = param_5 + 8;
          lVar9 = lVar9 + -1;
          puVar3 = puVar1;
          puVar5 = puVar2;
          puVar7 = puVar4;
          puVar8 = puVar6;
        } while (lVar9 != 0);
      }
      for (uVar10 = param_1 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        Hint_Prefetch(puVar1 + 0x140,0,0,0);
        Hint_Prefetch(puVar2 + 0x140,0,0,0);
        Hint_Prefetch(puVar4 + 0x140,0,0,0);
        Hint_Prefetch(puVar6 + 0x140,0,0,0);
        uVar15 = *(undefined4 *)puVar2;
        uVar18 = *(undefined4 *)puVar4;
        uVar21 = *(undefined4 *)puVar6;
        *(undefined4 *)param_5 = *(undefined4 *)puVar1;
        *(undefined4 *)((long)param_5 + 4) = uVar15;
        *(undefined4 *)(param_5 + 1) = uVar18;
        *(undefined4 *)((long)param_5 + 0xc) = uVar21;
        param_5 = param_5 + 2;
        puVar1 = (undefined8 *)((long)puVar1 + 4);
        puVar2 = (undefined8 *)((long)puVar2 + 4);
        puVar4 = (undefined8 *)((long)puVar4 + 4);
        puVar6 = (undefined8 *)((long)puVar6 + 4);
      }
      lVar12 = lVar12 + -1;
      puVar1 = param_3;
    } while (lVar12 != 0);
  }
  if ((param_2 & 3) != 0) {
    puVar1 = param_3;
    if ((param_2 & 2) != 0) {
      puVar2 = (undefined8 *)((long)param_3 + param_4);
      puVar1 = (undefined8 *)((long)puVar2 + param_4);
      puVar4 = param_3;
      puVar6 = puVar2;
      lVar12 = lVar11;
      if (0 < lVar11) {
        do {
          Hint_Prefetch(puVar4 + 0x140,0,0,0);
          Hint_Prefetch(puVar6 + 0x140,0,0,0);
          param_3 = puVar4 + 2;
          uVar14 = puVar4[1];
          uVar13 = *puVar4;
          puVar2 = puVar6 + 2;
          uVar17 = puVar6[1];
          uVar16 = *puVar6;
          *(int *)param_5 = (int)uVar13;
          *(int *)((long)param_5 + 4) = (int)uVar16;
          *(int *)(param_5 + 1) = (int)((ulong)uVar13 >> 0x20);
          *(int *)((long)param_5 + 0xc) = (int)((ulong)uVar16 >> 0x20);
          *(int *)(param_5 + 2) = (int)uVar14;
          *(int *)((long)param_5 + 0x14) = (int)uVar17;
          *(int *)(param_5 + 3) = (int)((ulong)uVar14 >> 0x20);
          *(int *)((long)param_5 + 0x1c) = (int)((ulong)uVar17 >> 0x20);
          param_5 = param_5 + 4;
          lVar12 = lVar12 + -1;
          puVar4 = param_3;
          puVar6 = puVar2;
        } while (lVar12 != 0);
      }
      for (uVar10 = param_1 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        Hint_Prefetch(param_3 + 0x140,0,0,0);
        Hint_Prefetch(puVar2 + 0x140,0,0,0);
        uVar15 = *(undefined4 *)puVar2;
        *(undefined4 *)param_5 = *(undefined4 *)param_3;
        *(undefined4 *)((long)param_5 + 4) = uVar15;
        param_5 = param_5 + 1;
        param_3 = (undefined8 *)((long)param_3 + 4);
        puVar2 = (undefined8 *)((long)puVar2 + 4);
      }
    }
    if ((param_2 & 1) != 0) {
      puVar2 = param_5;
      puVar4 = puVar1;
      if (0 < lVar11) {
        do {
          Hint_Prefetch(puVar4 + 0x140,0,0,0);
          puVar1 = puVar4 + 2;
          uVar13 = *puVar4;
          param_5 = puVar2 + 2;
          puVar2[1] = puVar4[1];
          *puVar2 = uVar13;
          lVar11 = lVar11 + -1;
          puVar2 = param_5;
          puVar4 = puVar1;
        } while (lVar11 != 0);
      }
      for (param_1 = param_1 & 3; param_1 != 0; param_1 = param_1 - 1) {
        Hint_Prefetch(puVar1 + 0x140,0,0,0);
        *(undefined4 *)param_5 = *(undefined4 *)puVar1;
        param_5 = (undefined8 *)((long)param_5 + 4);
        puVar1 = (undefined8 *)((long)puVar1 + 4);
      }
    }
  }
  return 0;
}


// ===== 0070ec8c  FUN_0070ec8c =====

undefined8
FUN_0070ec8c(ulong param_1,ulong param_2,undefined8 *param_3,long param_4,undefined8 *param_5)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  uVar4 = (uint)param_2;
  lVar15 = (long)param_1 >> 2;
  puVar6 = (undefined8 *)((long)param_5 + (param_2 & 0x3ffffffffffffffc) * param_1 * 4);
  puVar9 = (undefined4 *)((long)param_5 + (param_2 & 0x3ffffffffffffffe) * param_1 * 4);
  lVar12 = (long)param_2 >> 2;
  if (lVar15 < 1) goto LAB_0070eea8;
  lVar13 = param_4 * 4;
  if (0 < lVar12) {
    puVar11 = param_5 + 4;
    puVar5 = param_3;
    do {
      param_3 = puVar5 + param_4 * 2;
      puVar7 = puVar11;
      uVar8 = lVar12 + 1;
      do {
        puVar14 = puVar5;
        uVar17 = *puVar14;
        uVar25 = ((undefined8 *)((long)puVar14 + lVar13))[1];
        uVar21 = *(undefined8 *)((long)puVar14 + lVar13);
        uVar8 = uVar8 - 1;
        uVar22 = (puVar14 + param_4)[1];
        uVar20 = puVar14[param_4];
        puVar5 = (undefined8 *)((long)puVar14 + param_4 * 0xc);
        uVar26 = puVar5[1];
        uVar24 = *puVar5;
        puVar7[-3] = puVar14[1];
        puVar7[-4] = uVar17;
        puVar7[-1] = uVar25;
        puVar7[-2] = uVar21;
        puVar5 = puVar14 + 2;
        puVar7[1] = uVar22;
        *puVar7 = uVar20;
        puVar7[3] = uVar26;
        puVar7[2] = uVar24;
        puVar7 = puVar7 + param_1 * 2;
      } while (1 < uVar8);
      puVar7 = (undefined8 *)((long)puVar5 + param_4 * 0xc);
      puVar16 = puVar5 + param_4;
      puVar2 = (undefined8 *)((long)puVar5 + lVar13);
      if ((uVar4 >> 1 & 1) != 0) {
        uVar17 = *puVar5;
        uVar21 = *puVar16;
        uVar25 = *puVar7;
        puVar6[1] = *puVar2;
        *puVar6 = uVar17;
        puVar6[3] = uVar25;
        puVar6[2] = uVar21;
        puVar5 = puVar14 + 3;
        puVar2 = puVar2 + 1;
        puVar16 = puVar16 + 1;
        puVar7 = puVar7 + 1;
        puVar6 = puVar6 + 4;
      }
      if ((param_2 & 1) != 0) {
        uVar18 = *(undefined4 *)puVar2;
        uVar19 = *(undefined4 *)puVar16;
        uVar23 = *(undefined4 *)puVar7;
        *puVar9 = *(undefined4 *)puVar5;
        puVar9[1] = uVar18;
        puVar9[2] = uVar19;
        puVar9[3] = uVar23;
        puVar9 = puVar9 + 4;
      }
      lVar3 = lVar15 + -1;
      param_5 = param_5 + 8;
      puVar11 = puVar11 + 8;
      bVar1 = 0 < lVar15;
      puVar5 = param_3;
      lVar15 = lVar3;
    } while (lVar3 != 0 && bVar1);
    goto LAB_0070eea8;
  }
  if ((uVar4 >> 1 & 1) == 0) {
    if ((param_2 & 1) == 0) {
      param_5 = param_5 + lVar15 * 8;
      param_3 = param_3 + lVar15 * param_4 * 2;
      goto LAB_0070eea8;
    }
    uVar8 = lVar15 + 1;
    do {
      puVar7 = param_3;
      uVar8 = uVar8 - 1;
      puVar10 = (undefined4 *)((long)puVar7 + lVar13) + param_4;
      uVar18 = *(undefined4 *)((long)puVar7 + lVar13);
      uVar19 = *puVar10;
      uVar23 = puVar10[param_4];
      *puVar9 = *(undefined4 *)puVar7;
      puVar9[1] = uVar18;
      puVar9[2] = uVar19;
      puVar9[3] = uVar23;
      puVar9 = puVar9 + 4;
      param_3 = (undefined8 *)(puVar10 + param_4 + param_4);
    } while (1 < uVar8);
LAB_0070ee34:
    param_3 = puVar7 + param_4 * 2;
  }
  else {
    if ((param_2 & 1) == 0) {
      uVar8 = lVar15 + 1;
      puVar11 = puVar6;
      do {
        puVar7 = param_3;
        uVar17 = *puVar7;
        uVar8 = uVar8 - 1;
        puVar6 = (undefined8 *)((long)puVar7 + lVar13 + lVar13);
        puVar5 = (undefined8 *)((long)puVar6 + lVar13);
        uVar21 = *puVar6;
        uVar25 = *puVar5;
        puVar6 = puVar11 + 4;
        puVar11[1] = *(undefined8 *)((long)puVar7 + lVar13);
        *puVar11 = uVar17;
        puVar11[3] = uVar25;
        puVar11[2] = uVar21;
        param_3 = (undefined8 *)((long)puVar5 + lVar13);
        puVar11 = puVar6;
      } while (1 < uVar8);
      goto LAB_0070ee34;
    }
    uVar8 = lVar15 + 1;
    puVar11 = puVar6;
    do {
      puVar5 = (undefined8 *)((long)param_3 + param_4 * 0xc);
      uVar17 = *param_3;
      uVar21 = param_3[param_4];
      uVar25 = *puVar5;
      uVar8 = uVar8 - 1;
      puVar6 = puVar11 + 4;
      puVar11[1] = *(undefined8 *)((long)param_3 + lVar13);
      *puVar11 = uVar17;
      puVar11[3] = uVar25;
      puVar11[2] = uVar21;
      puVar11 = param_3 + 1;
      uVar18 = *(undefined4 *)((undefined8 *)((long)param_3 + lVar13) + 1);
      uVar19 = *(undefined4 *)(param_3 + param_4 + 1);
      uVar23 = *(undefined4 *)(puVar5 + 1);
      param_3 = param_3 + param_4 * 2;
      *puVar9 = *(undefined4 *)puVar11;
      puVar9[1] = uVar18;
      puVar9[2] = uVar19;
      puVar9[3] = uVar23;
      puVar9 = puVar9 + 4;
      puVar11 = puVar6;
    } while (1 < uVar8);
  }
  param_5 = param_5 + lVar15 * 8;
LAB_0070eea8:
  puVar10 = puVar9;
  puVar11 = puVar6;
  if (((uint)param_1 >> 1 & 1) != 0) {
    puVar5 = param_3;
    if (lVar12 < 1) {
      puVar7 = (undefined8 *)((long)param_3 + param_4 * 4);
    }
    else {
      puVar7 = param_5 + 2;
      uVar8 = lVar12 + 1;
      do {
        puVar16 = puVar5 + 1;
        uVar17 = *puVar5;
        puVar14 = (undefined8 *)((long)puVar5 + param_4 * 4);
        uVar25 = puVar14[1];
        uVar21 = *puVar14;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 2;
        puVar7[-1] = *puVar16;
        puVar7[-2] = uVar17;
        puVar7[1] = uVar25;
        *puVar7 = uVar21;
        puVar7 = puVar7 + param_1 * 2;
      } while (1 < uVar8);
      puVar7 = (undefined8 *)((long)puVar5 + param_4 * 4);
    }
    param_3 = param_3 + param_4;
    puVar14 = puVar5;
    puVar16 = puVar7;
    if ((uVar4 >> 1 & 1) != 0) {
      puVar14 = puVar5 + 1;
      uVar17 = *puVar5;
      puVar16 = puVar7 + 1;
      puVar11 = puVar6 + 2;
      puVar6[1] = *puVar7;
      *puVar6 = uVar17;
    }
    param_5 = param_5 + 4;
    if ((param_2 & 1) != 0) {
      uVar18 = *(undefined4 *)puVar16;
      puVar10 = puVar9 + 2;
      *puVar9 = *(undefined4 *)puVar14;
      puVar9[1] = uVar18;
    }
  }
  if ((param_1 & 1) != 0) {
    if (0 < lVar12) {
      uVar8 = lVar12 + 1;
      puVar6 = param_3;
      do {
        param_3 = puVar6 + 2;
        uVar17 = *puVar6;
        uVar8 = uVar8 - 1;
        param_5[1] = puVar6[1];
        *param_5 = uVar17;
        param_5 = param_5 + param_1 * 2;
        puVar6 = param_3;
      } while (1 < uVar8);
    }
    puVar6 = param_3;
    if ((uVar4 >> 1 & 1) != 0) {
      puVar6 = param_3 + 1;
      *puVar11 = *param_3;
    }
    if ((param_2 & 1) != 0) {
      *puVar10 = *(undefined4 *)puVar6;
    }
  }
  return 0;
}


// ===== 0070ef80  FUN_0070ef80 =====

undefined8 FUN_0070ef80(float param_1,ulong param_2,long param_3)

{
  float *pfVar1;
  float *in_x7;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
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
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long in_stack_00000000;
  
  if (0 < param_3) {
    lVar5 = (long)param_2 >> 5;
    if (param_1 == 0.0) {
      do {
        pfVar1 = in_x7 + in_stack_00000000;
        if (0 < lVar5) {
          pfVar2 = in_x7 + 8;
          pfVar3 = in_x7 + 0x10;
          pfVar4 = in_x7 + 0x18;
          lVar7 = lVar5;
          do {
            *in_x7 = 0.0;
            in_x7[1] = 0.0;
            in_x7[2] = 0.0;
            in_x7[3] = 0.0;
            in_x7[4] = 0.0;
            in_x7[5] = 0.0;
            in_x7[6] = 0.0;
            in_x7[7] = 0.0;
            in_x7 = in_x7 + 0x20;
            *pfVar2 = 0.0;
            pfVar2[1] = 0.0;
            pfVar2[2] = 0.0;
            pfVar2[3] = 0.0;
            pfVar2[4] = 0.0;
            pfVar2[5] = 0.0;
            pfVar2[6] = 0.0;
            pfVar2[7] = 0.0;
            pfVar2 = pfVar2 + 0x20;
            *pfVar3 = 0.0;
            pfVar3[1] = 0.0;
            pfVar3[2] = 0.0;
            pfVar3[3] = 0.0;
            pfVar3[4] = 0.0;
            pfVar3[5] = 0.0;
            pfVar3[6] = 0.0;
            pfVar3[7] = 0.0;
            pfVar3 = pfVar3 + 0x20;
            *pfVar4 = 0.0;
            pfVar4[1] = 0.0;
            pfVar4[2] = 0.0;
            pfVar4[3] = 0.0;
            pfVar4[4] = 0.0;
            pfVar4[5] = 0.0;
            pfVar4[6] = 0.0;
            pfVar4[7] = 0.0;
            pfVar4 = pfVar4 + 0x20;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        for (uVar6 = param_2 & 0x1f; uVar6 != 0; uVar6 = uVar6 - 1) {
          *in_x7 = param_1;
          in_x7 = in_x7 + 1;
        }
        param_3 = param_3 + -1;
        in_x7 = pfVar1;
      } while (param_3 != 0);
      return 0;
    }
    do {
      pfVar1 = in_x7 + in_stack_00000000;
      if (0 < lVar5) {
        pfVar2 = in_x7 + 8;
        pfVar3 = in_x7 + 0x10;
        pfVar4 = in_x7 + 0x18;
        lVar7 = lVar5;
        do {
          Hint_Prefetch(in_x7 + 0xa0,0,0,0);
          uVar9 = *(undefined8 *)(in_x7 + 2);
          uVar8 = *(undefined8 *)in_x7;
          uVar11 = *(undefined8 *)(in_x7 + 6);
          uVar10 = *(undefined8 *)(in_x7 + 4);
          uVar13 = *(undefined8 *)(pfVar2 + 2);
          uVar12 = *(undefined8 *)pfVar2;
          uVar15 = *(undefined8 *)(pfVar2 + 6);
          uVar14 = *(undefined8 *)(pfVar2 + 4);
          uVar17 = *(undefined8 *)(pfVar3 + 2);
          uVar16 = *(undefined8 *)pfVar3;
          uVar19 = *(undefined8 *)(pfVar3 + 6);
          uVar18 = *(undefined8 *)(pfVar3 + 4);
          uVar21 = *(undefined8 *)(pfVar4 + 2);
          uVar20 = *(undefined8 *)pfVar4;
          uVar23 = *(undefined8 *)(pfVar4 + 6);
          uVar22 = *(undefined8 *)(pfVar4 + 4);
          Hint_Prefetch(in_x7 + 0xb0,0,0,0);
          *in_x7 = (float)uVar8 * param_1;
          in_x7[1] = (float)((ulong)uVar8 >> 0x20) * param_1;
          in_x7[2] = (float)uVar9 * param_1;
          in_x7[3] = (float)((ulong)uVar9 >> 0x20) * param_1;
          in_x7[4] = (float)uVar10 * param_1;
          in_x7[5] = (float)((ulong)uVar10 >> 0x20) * param_1;
          in_x7[6] = (float)uVar11 * param_1;
          in_x7[7] = (float)((ulong)uVar11 >> 0x20) * param_1;
          in_x7 = in_x7 + 0x20;
          *pfVar2 = (float)uVar12 * param_1;
          pfVar2[1] = (float)((ulong)uVar12 >> 0x20) * param_1;
          pfVar2[2] = (float)uVar13 * param_1;
          pfVar2[3] = (float)((ulong)uVar13 >> 0x20) * param_1;
          pfVar2[4] = (float)uVar14 * param_1;
          pfVar2[5] = (float)((ulong)uVar14 >> 0x20) * param_1;
          pfVar2[6] = (float)uVar15 * param_1;
          pfVar2[7] = (float)((ulong)uVar15 >> 0x20) * param_1;
          pfVar2 = pfVar2 + 0x20;
          *pfVar3 = (float)uVar16 * param_1;
          pfVar3[1] = (float)((ulong)uVar16 >> 0x20) * param_1;
          pfVar3[2] = (float)uVar17 * param_1;
          pfVar3[3] = (float)((ulong)uVar17 >> 0x20) * param_1;
          pfVar3[4] = (float)uVar18 * param_1;
          pfVar3[5] = (float)((ulong)uVar18 >> 0x20) * param_1;
          pfVar3[6] = (float)uVar19 * param_1;
          pfVar3[7] = (float)((ulong)uVar19 >> 0x20) * param_1;
          pfVar3 = pfVar3 + 0x20;
          *pfVar4 = (float)uVar20 * param_1;
          pfVar4[1] = (float)((ulong)uVar20 >> 0x20) * param_1;
          pfVar4[2] = (float)uVar21 * param_1;
          pfVar4[3] = (float)((ulong)uVar21 >> 0x20) * param_1;
          pfVar4[4] = (float)uVar22 * param_1;
          pfVar4[5] = (float)((ulong)uVar22 >> 0x20) * param_1;
          pfVar4[6] = (float)uVar23 * param_1;
          pfVar4[7] = (float)((ulong)uVar23 >> 0x20) * param_1;
          pfVar4 = pfVar4 + 0x20;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      for (uVar6 = param_2 & 0x1f; uVar6 != 0; uVar6 = uVar6 - 1) {
        *in_x7 = *in_x7 * param_1;
        in_x7 = in_x7 + 1;
      }
      param_3 = param_3 + -1;
      in_x7 = pfVar1;
    } while (param_3 != 0);
  }
  return 0;
}


// ===== 0070f238  FUN_0070f238 =====

undefined8 FUN_0070f238(void)

{
  return 0;
}


// ===== 0070f240  FUN_0070f240 =====

undefined8
FUN_0070f240(float param_1,float param_2,long param_3,ulong param_4,ulong param_5,long param_6,
            long param_7,long param_8,long param_9,long param_10,long param_11)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  float fVar14;
  undefined4 uVar15;
  
  if ((0 < param_3) && (0 < (long)param_4)) {
    if ((long)param_5 < 1) {
      lVar3 = 0;
      uVar5 = param_4 & 0x7ffffffffffffff8;
      puVar4 = (undefined8 *)(param_10 + 0x10);
      param_1 = param_1 * 0.0;
      do {
        uVar7 = uVar5;
        puVar2 = puVar4;
        if (param_4 < 8 || param_11 != 1) {
          uVar7 = 0;
LAB_0070f410:
          puVar9 = (undefined4 *)(param_10 + param_11 * 4 * uVar7);
          lVar6 = param_4 - uVar7;
          do {
            lVar6 = lVar6 + -1;
            uVar15 = NEON_fmadd(*puVar9,param_2,param_1);
            *puVar9 = uVar15;
            puVar9 = puVar9 + param_11;
          } while (lVar6 != 0);
        }
        else {
          do {
            uVar7 = uVar7 - 8;
            puVar2[-1] = CONCAT44(param_1 + param_2 * (float)((ulong)puVar2[-1] >> 0x20),
                                  param_1 + param_2 * (float)puVar2[-1]);
            puVar2[-2] = CONCAT44(param_1 + param_2 * (float)((ulong)puVar2[-2] >> 0x20),
                                  param_1 + param_2 * (float)puVar2[-2]);
            puVar2[1] = CONCAT44(param_1 + param_2 * (float)((ulong)puVar2[1] >> 0x20),
                                 param_1 + param_2 * (float)puVar2[1]);
            *puVar2 = CONCAT44(param_1 + param_2 * (float)((ulong)*puVar2 >> 0x20),
                               param_1 + param_2 * (float)*puVar2);
            puVar2 = puVar2 + 4;
          } while (uVar7 != 0);
          uVar7 = uVar5;
          if (uVar5 != param_4) goto LAB_0070f410;
        }
        lVar3 = lVar3 + 1;
        puVar4 = (undefined8 *)((long)puVar4 + 4);
        param_10 = param_10 + 4;
      } while (lVar3 != param_3);
    }
    else {
      lVar3 = 0;
      uVar5 = param_5 & 0x7ffffffffffffff8;
      puVar4 = (undefined8 *)(param_6 + 0x10);
      do {
        lVar6 = param_10 + lVar3 * 4;
        uVar7 = 0;
        lVar1 = param_8;
        puVar2 = (undefined8 *)(param_8 + 0x10);
        do {
          fVar14 = 0.0;
          uVar8 = uVar5;
          puVar10 = puVar2;
          puVar12 = puVar4;
          if (param_5 < 8 || param_7 != 1) {
            uVar8 = 0;
LAB_0070f360:
            puVar9 = (undefined4 *)(param_6 + param_7 * 4 * uVar8);
            lVar13 = param_5 - uVar8;
            puVar11 = (undefined4 *)(lVar1 + uVar8 * 4);
            do {
              uVar15 = *puVar9;
              lVar13 = lVar13 + -1;
              puVar9 = puVar9 + param_7;
              fVar14 = (float)NEON_fmadd(uVar15,*puVar11,fVar14);
              puVar11 = puVar11 + 1;
            } while (lVar13 != 0);
          }
          else {
            do {
              uVar8 = uVar8 - 8;
              fVar14 = fVar14 + (float)puVar12[-2] * (float)puVar10[-2] +
                       (float)((ulong)puVar12[-2] >> 0x20) * (float)((ulong)puVar10[-2] >> 0x20) +
                       (float)puVar12[-1] * (float)puVar10[-1] +
                       (float)((ulong)puVar12[-1] >> 0x20) * (float)((ulong)puVar10[-1] >> 0x20) +
                       (float)*puVar12 * (float)*puVar10 +
                       (float)((ulong)*puVar12 >> 0x20) * (float)((ulong)*puVar10 >> 0x20) +
                       (float)puVar12[1] * (float)puVar10[1] +
                       (float)((ulong)puVar12[1] >> 0x20) * (float)((ulong)puVar10[1] >> 0x20);
              puVar10 = puVar10 + 4;
              puVar12 = puVar12 + 4;
            } while (uVar8 != 0);
            uVar8 = uVar5;
            if (uVar5 != param_5) goto LAB_0070f360;
          }
          lVar13 = uVar7 * param_11;
          uVar7 = uVar7 + 1;
          puVar2 = (undefined8 *)((long)puVar2 + param_9 * 4);
          lVar1 = lVar1 + param_9 * 4;
          lVar13 = lVar13 * 4;
          uVar15 = NEON_fmadd(*(undefined4 *)(lVar6 + lVar13),param_2,fVar14 * param_1);
          *(undefined4 *)(lVar6 + lVar13) = uVar15;
        } while (uVar7 != param_4);
        lVar3 = lVar3 + 1;
        puVar4 = (undefined8 *)((long)puVar4 + 4);
        param_6 = param_6 + 4;
      } while (lVar3 != param_3);
    }
  }
  return 0;
}


// ===== 0070f444  FUN_0070f444 =====

undefined8
FUN_0070f444(float param_1,float param_2,long param_3,ulong param_4,ulong param_5,long param_6,
            long param_7,long param_8,long param_9,long param_10,long param_11)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  if ((0 < param_3) && (0 < (long)param_4)) {
    if ((long)param_5 < 1) {
      lVar3 = 0;
      uVar5 = param_4 & 0x7ffffffffffffff8;
      puVar4 = (undefined8 *)(param_10 + 0x10);
      param_1 = param_1 * 0.0;
      do {
        uVar7 = uVar5;
        puVar2 = puVar4;
        if (param_4 < 8 || param_11 != 1) {
          uVar7 = 0;
LAB_0070f620:
          puVar9 = (undefined4 *)(param_10 + param_11 * 4 * uVar7);
          lVar6 = param_4 - uVar7;
          do {
            lVar6 = lVar6 + -1;
            uVar15 = NEON_fmadd(*puVar9,param_2,param_1);
            *puVar9 = uVar15;
            puVar9 = puVar9 + param_11;
          } while (lVar6 != 0);
        }
        else {
          do {
            uVar7 = uVar7 - 8;
            puVar2[-1] = CONCAT44(param_1 + param_2 * (float)((ulong)puVar2[-1] >> 0x20),
                                  param_1 + param_2 * (float)puVar2[-1]);
            puVar2[-2] = CONCAT44(param_1 + param_2 * (float)((ulong)puVar2[-2] >> 0x20),
                                  param_1 + param_2 * (float)puVar2[-2]);
            puVar2[1] = CONCAT44(param_1 + param_2 * (float)((ulong)puVar2[1] >> 0x20),
                                 param_1 + param_2 * (float)puVar2[1]);
            *puVar2 = CONCAT44(param_1 + param_2 * (float)((ulong)*puVar2 >> 0x20),
                               param_1 + param_2 * (float)*puVar2);
            puVar2 = puVar2 + 4;
          } while (uVar7 != 0);
          uVar7 = uVar5;
          if (uVar5 != param_4) goto LAB_0070f620;
        }
        lVar3 = lVar3 + 1;
        puVar4 = (undefined8 *)((long)puVar4 + 4);
        param_10 = param_10 + 4;
      } while (lVar3 != param_3);
    }
    else {
      lVar3 = 0;
      uVar5 = param_5 & 0x7ffffffffffffff8;
      puVar4 = (undefined8 *)(param_6 + 0x10);
      do {
        lVar1 = param_10 + lVar3 * 4;
        uVar7 = 0;
        lVar6 = param_8;
        puVar2 = (undefined8 *)(param_8 + 0x10);
        do {
          fVar14 = 0.0;
          uVar8 = uVar5;
          puVar10 = puVar2;
          puVar12 = puVar4;
          if (param_5 < 8 || (param_7 != 1 || param_9 != 1)) {
            uVar8 = 0;
LAB_0070f56c:
            puVar9 = (undefined4 *)(lVar6 + param_9 * 4 * uVar8);
            puVar11 = (undefined4 *)(param_6 + param_7 * 4 * uVar8);
            lVar13 = param_5 - uVar8;
            do {
              uVar15 = *puVar11;
              uVar16 = *puVar9;
              lVar13 = lVar13 + -1;
              puVar9 = puVar9 + param_9;
              puVar11 = puVar11 + param_7;
              fVar14 = (float)NEON_fmadd(uVar15,uVar16,fVar14);
            } while (lVar13 != 0);
          }
          else {
            do {
              uVar8 = uVar8 - 8;
              fVar14 = fVar14 + (float)puVar12[-2] * (float)puVar10[-2] +
                       (float)((ulong)puVar12[-2] >> 0x20) * (float)((ulong)puVar10[-2] >> 0x20) +
                       (float)puVar12[-1] * (float)puVar10[-1] +
                       (float)((ulong)puVar12[-1] >> 0x20) * (float)((ulong)puVar10[-1] >> 0x20) +
                       (float)*puVar12 * (float)*puVar10 +
                       (float)((ulong)*puVar12 >> 0x20) * (float)((ulong)*puVar10 >> 0x20) +
                       (float)puVar12[1] * (float)puVar10[1] +
                       (float)((ulong)puVar12[1] >> 0x20) * (float)((ulong)puVar10[1] >> 0x20);
              puVar10 = puVar10 + 4;
              puVar12 = puVar12 + 4;
            } while (uVar8 != 0);
            uVar8 = uVar5;
            if (uVar5 != param_5) goto LAB_0070f56c;
          }
          lVar13 = uVar7 * param_11;
          uVar7 = uVar7 + 1;
          puVar2 = (undefined8 *)((long)puVar2 + 4);
          lVar6 = lVar6 + 4;
          lVar13 = lVar13 * 4;
          uVar15 = NEON_fmadd(*(undefined4 *)(lVar1 + lVar13),param_2,fVar14 * param_1);
          *(undefined4 *)(lVar1 + lVar13) = uVar15;
        } while (uVar7 != param_4);
        lVar3 = lVar3 + 1;
        puVar4 = (undefined8 *)((long)puVar4 + 4);
        param_6 = param_6 + 4;
      } while (lVar3 != param_3);
    }
  }
  return 0;
}


// ===== 0070f654  FUN_0070f654 =====

undefined8
FUN_0070f654(float param_1,float param_2,long param_3,ulong param_4,ulong param_5,long param_6,
            long param_7,long param_8,long param_9,long param_10,long param_11)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  float fVar15;
  
  if ((0 < param_3) && (0 < (long)param_4)) {
    if ((long)param_5 < 1) {
      lVar4 = 0;
      uVar5 = param_4 & 0x7ffffffffffffff8;
      puVar6 = (undefined8 *)(param_10 + 0x10);
      param_1 = param_1 * 0.0;
      do {
        uVar9 = uVar5;
        puVar1 = puVar6;
        if (param_4 < 8 || param_11 != 1) {
          uVar9 = 0;
LAB_0070f818:
          puVar7 = (undefined4 *)(param_10 + param_11 * 4 * uVar9);
          lVar8 = param_4 - uVar9;
          do {
            lVar8 = lVar8 + -1;
            uVar14 = NEON_fmadd(*puVar7,param_2,param_1);
            *puVar7 = uVar14;
            puVar7 = puVar7 + param_11;
          } while (lVar8 != 0);
        }
        else {
          do {
            uVar9 = uVar9 - 8;
            puVar1[-1] = CONCAT44(param_1 + param_2 * (float)((ulong)puVar1[-1] >> 0x20),
                                  param_1 + param_2 * (float)puVar1[-1]);
            puVar1[-2] = CONCAT44(param_1 + param_2 * (float)((ulong)puVar1[-2] >> 0x20),
                                  param_1 + param_2 * (float)puVar1[-2]);
            puVar1[1] = CONCAT44(param_1 + param_2 * (float)((ulong)puVar1[1] >> 0x20),
                                 param_1 + param_2 * (float)puVar1[1]);
            *puVar1 = CONCAT44(param_1 + param_2 * (float)((ulong)*puVar1 >> 0x20),
                               param_1 + param_2 * (float)*puVar1);
            puVar1 = puVar1 + 4;
          } while (uVar9 != 0);
          uVar9 = uVar5;
          if (uVar5 != param_4) goto LAB_0070f818;
        }
        lVar4 = lVar4 + 1;
        puVar6 = (undefined8 *)((long)puVar6 + 4);
        param_10 = param_10 + 4;
      } while (lVar4 != param_3);
    }
    else {
      lVar4 = 0;
      uVar5 = param_5 & 0x7ffffffffffffff8;
      puVar6 = (undefined8 *)(param_6 + 0x10);
      do {
        lVar8 = param_10 + lVar4 * 4;
        uVar9 = 0;
        puVar1 = (undefined8 *)(param_8 + 0x10);
        lVar10 = param_8;
        do {
          fVar15 = 0.0;
          uVar2 = uVar5;
          puVar11 = puVar1;
          puVar12 = puVar6;
          if (param_5 < 8) {
            uVar2 = 0;
LAB_0070f768:
            lVar3 = param_5 - uVar2;
            puVar7 = (undefined4 *)(lVar10 + uVar2 * 4);
            puVar13 = (undefined4 *)(param_6 + uVar2 * 4);
            do {
              lVar3 = lVar3 + -1;
              fVar15 = (float)NEON_fmadd(*puVar13,*puVar7,fVar15);
              puVar7 = puVar7 + 1;
              puVar13 = puVar13 + 1;
            } while (lVar3 != 0);
          }
          else {
            do {
              uVar2 = uVar2 - 8;
              fVar15 = fVar15 + (float)puVar12[-2] * (float)puVar11[-2] +
                       (float)((ulong)puVar12[-2] >> 0x20) * (float)((ulong)puVar11[-2] >> 0x20) +
                       (float)puVar12[-1] * (float)puVar11[-1] +
                       (float)((ulong)puVar12[-1] >> 0x20) * (float)((ulong)puVar11[-1] >> 0x20) +
                       (float)*puVar12 * (float)*puVar11 +
                       (float)((ulong)*puVar12 >> 0x20) * (float)((ulong)*puVar11 >> 0x20) +
                       (float)puVar12[1] * (float)puVar11[1] +
                       (float)((ulong)puVar12[1] >> 0x20) * (float)((ulong)puVar11[1] >> 0x20);
              puVar11 = puVar11 + 4;
              puVar12 = puVar12 + 4;
            } while (uVar2 != 0);
            uVar2 = uVar5;
            if (uVar5 != param_5) goto LAB_0070f768;
          }
          lVar3 = uVar9 * param_11;
          uVar9 = uVar9 + 1;
          puVar1 = (undefined8 *)((long)puVar1 + param_9 * 4);
          lVar10 = lVar10 + param_9 * 4;
          lVar3 = lVar3 * 4;
          uVar14 = NEON_fmadd(*(undefined4 *)(lVar8 + lVar3),param_2,fVar15 * param_1);
          *(undefined4 *)(lVar8 + lVar3) = uVar14;
        } while (uVar9 != param_4);
        lVar4 = lVar4 + 1;
        puVar6 = (undefined8 *)((long)puVar6 + param_7 * 4);
        param_6 = param_6 + param_7 * 4;
      } while (lVar4 != param_3);
    }
  }
  return 0;
}


// ===== 0070f848  FUN_0070f848 =====

undefined8
FUN_0070f848(float param_1,float param_2,long param_3,ulong param_4,ulong param_5,long param_6,
            long param_7,long param_8,long param_9,long param_10,long param_11)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  float fVar14;
  undefined4 uVar15;
  
  if ((0 < param_3) && (0 < (long)param_4)) {
    if ((long)param_5 < 1) {
      lVar3 = 0;
      uVar5 = param_4 & 0x7ffffffffffffff8;
      puVar4 = (undefined8 *)(param_10 + 0x10);
      param_1 = param_1 * 0.0;
      do {
        uVar7 = uVar5;
        puVar2 = puVar4;
        if (param_4 < 8 || param_11 != 1) {
          uVar7 = 0;
LAB_0070fa18:
          puVar9 = (undefined4 *)(param_10 + param_11 * 4 * uVar7);
          lVar6 = param_4 - uVar7;
          do {
            lVar6 = lVar6 + -1;
            uVar15 = NEON_fmadd(*puVar9,param_2,param_1);
            *puVar9 = uVar15;
            puVar9 = puVar9 + param_11;
          } while (lVar6 != 0);
        }
        else {
          do {
            uVar7 = uVar7 - 8;
            puVar2[-1] = CONCAT44(param_1 + param_2 * (float)((ulong)puVar2[-1] >> 0x20),
                                  param_1 + param_2 * (float)puVar2[-1]);
            puVar2[-2] = CONCAT44(param_1 + param_2 * (float)((ulong)puVar2[-2] >> 0x20),
                                  param_1 + param_2 * (float)puVar2[-2]);
            puVar2[1] = CONCAT44(param_1 + param_2 * (float)((ulong)puVar2[1] >> 0x20),
                                 param_1 + param_2 * (float)puVar2[1]);
            *puVar2 = CONCAT44(param_1 + param_2 * (float)((ulong)*puVar2 >> 0x20),
                               param_1 + param_2 * (float)*puVar2);
            puVar2 = puVar2 + 4;
          } while (uVar7 != 0);
          uVar7 = uVar5;
          if (uVar5 != param_4) goto LAB_0070fa18;
        }
        lVar3 = lVar3 + 1;
        puVar4 = (undefined8 *)((long)puVar4 + 4);
        param_10 = param_10 + 4;
      } while (lVar3 != param_3);
    }
    else {
      lVar3 = 0;
      uVar5 = param_5 & 0x7ffffffffffffff8;
      puVar4 = (undefined8 *)(param_6 + 0x10);
      do {
        lVar1 = param_10 + lVar3 * 4;
        uVar7 = 0;
        lVar6 = param_8;
        puVar2 = (undefined8 *)(param_8 + 0x10);
        do {
          fVar14 = 0.0;
          uVar8 = uVar5;
          puVar10 = puVar2;
          puVar12 = puVar4;
          if (param_5 < 8 || param_9 != 1) {
            uVar8 = 0;
LAB_0070f968:
            puVar9 = (undefined4 *)(lVar6 + param_9 * 4 * uVar8);
            lVar13 = param_5 - uVar8;
            puVar11 = (undefined4 *)(param_6 + uVar8 * 4);
            do {
              uVar15 = *puVar9;
              lVar13 = lVar13 + -1;
              puVar9 = puVar9 + param_9;
              fVar14 = (float)NEON_fmadd(*puVar11,uVar15,fVar14);
              puVar11 = puVar11 + 1;
            } while (lVar13 != 0);
          }
          else {
            do {
              uVar8 = uVar8 - 8;
              fVar14 = fVar14 + (float)puVar12[-2] * (float)puVar10[-2] +
                       (float)((ulong)puVar12[-2] >> 0x20) * (float)((ulong)puVar10[-2] >> 0x20) +
                       (float)puVar12[-1] * (float)puVar10[-1] +
                       (float)((ulong)puVar12[-1] >> 0x20) * (float)((ulong)puVar10[-1] >> 0x20) +
                       (float)*puVar12 * (float)*puVar10 +
                       (float)((ulong)*puVar12 >> 0x20) * (float)((ulong)*puVar10 >> 0x20) +
                       (float)puVar12[1] * (float)puVar10[1] +
                       (float)((ulong)puVar12[1] >> 0x20) * (float)((ulong)puVar10[1] >> 0x20);
              puVar10 = puVar10 + 4;
              puVar12 = puVar12 + 4;
            } while (uVar8 != 0);
            uVar8 = uVar5;
            if (uVar5 != param_5) goto LAB_0070f968;
          }
          lVar13 = uVar7 * param_11;
          uVar7 = uVar7 + 1;
          puVar2 = (undefined8 *)((long)puVar2 + 4);
          lVar6 = lVar6 + 4;
          lVar13 = lVar13 * 4;
          uVar15 = NEON_fmadd(*(undefined4 *)(lVar1 + lVar13),param_2,fVar14 * param_1);
          *(undefined4 *)(lVar1 + lVar13) = uVar15;
        } while (uVar7 != param_4);
        lVar3 = lVar3 + 1;
        puVar4 = (undefined8 *)((long)puVar4 + param_7 * 4);
        param_6 = param_6 + param_7 * 4;
      } while (lVar3 != param_3);
    }
  }
  return 0;
}


// ===== 0070fa4c  FUN_0070fa4c =====

undefined8
FUN_0070fa4c(float param_1,long param_2,ulong param_3,ulong param_4,long param_5,long param_6,
            long param_7,long param_8,long param_9,long param_10)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  float fVar14;
  undefined4 uVar15;
  
  if ((0 < param_2) && (0 < (long)param_3)) {
    if ((long)param_4 < 1) {
      lVar2 = 0;
      uVar4 = param_3 & 0x7ffffffffffffff8;
      puVar3 = (undefined8 *)(param_9 + 0x10);
      param_1 = param_1 * 0.0;
      do {
        uVar7 = uVar4;
        puVar1 = puVar3;
        if (param_3 < 8 || param_10 != 1) {
          uVar7 = 0;
LAB_0070fbf8:
          pfVar5 = (float *)(param_9 + param_10 * 4 * uVar7);
          lVar6 = param_3 - uVar7;
          do {
            lVar6 = lVar6 + -1;
            *pfVar5 = param_1;
            pfVar5 = pfVar5 + param_10;
          } while (lVar6 != 0);
        }
        else {
          do {
            uVar7 = uVar7 - 8;
            puVar1[-1] = CONCAT44(param_1,param_1);
            puVar1[-2] = CONCAT44(param_1,param_1);
            puVar1[1] = CONCAT44(param_1,param_1);
            *puVar1 = CONCAT44(param_1,param_1);
            puVar1 = puVar1 + 4;
          } while (uVar7 != 0);
          uVar7 = uVar4;
          if (uVar4 != param_3) goto LAB_0070fbf8;
        }
        lVar2 = lVar2 + 1;
        puVar3 = (undefined8 *)((long)puVar3 + 4);
        param_9 = param_9 + 4;
      } while (lVar2 != param_2);
    }
    else {
      lVar2 = 0;
      uVar4 = param_4 & 0x7ffffffffffffff8;
      puVar3 = (undefined8 *)(param_5 + 0x10);
      do {
        uVar7 = 0;
        lVar6 = param_7;
        puVar1 = (undefined8 *)(param_7 + 0x10);
        do {
          fVar14 = 0.0;
          uVar8 = uVar4;
          puVar10 = puVar1;
          puVar12 = puVar3;
          if (param_4 < 8 || param_6 != 1) {
            uVar8 = 0;
LAB_0070fb60:
            puVar9 = (undefined4 *)(param_5 + param_6 * 4 * uVar8);
            lVar13 = param_4 - uVar8;
            puVar11 = (undefined4 *)(lVar6 + uVar8 * 4);
            do {
              uVar15 = *puVar9;
              lVar13 = lVar13 + -1;
              puVar9 = puVar9 + param_6;
              fVar14 = (float)NEON_fmadd(uVar15,*puVar11,fVar14);
              puVar11 = puVar11 + 1;
            } while (lVar13 != 0);
          }
          else {
            do {
              uVar8 = uVar8 - 8;
              fVar14 = fVar14 + (float)puVar12[-2] * (float)puVar10[-2] +
                       (float)((ulong)puVar12[-2] >> 0x20) * (float)((ulong)puVar10[-2] >> 0x20) +
                       (float)puVar12[-1] * (float)puVar10[-1] +
                       (float)((ulong)puVar12[-1] >> 0x20) * (float)((ulong)puVar10[-1] >> 0x20) +
                       (float)*puVar12 * (float)*puVar10 +
                       (float)((ulong)*puVar12 >> 0x20) * (float)((ulong)*puVar10 >> 0x20) +
                       (float)puVar12[1] * (float)puVar10[1] +
                       (float)((ulong)puVar12[1] >> 0x20) * (float)((ulong)puVar10[1] >> 0x20);
              puVar10 = puVar10 + 4;
              puVar12 = puVar12 + 4;
            } while (uVar8 != 0);
            uVar8 = uVar4;
            if (uVar4 != param_4) goto LAB_0070fb60;
          }
          lVar13 = uVar7 * param_10;
          uVar7 = uVar7 + 1;
          puVar1 = (undefined8 *)((long)puVar1 + param_8 * 4);
          lVar6 = lVar6 + param_8 * 4;
          *(float *)(param_9 + lVar2 * 4 + lVar13 * 4) = fVar14 * param_1;
        } while (uVar7 != param_3);
        lVar2 = lVar2 + 1;
        puVar3 = (undefined8 *)((long)puVar3 + 4);
        param_5 = param_5 + 4;
      } while (lVar2 != param_2);
    }
  }
  return 0;
}


// ===== 0070fc24  FUN_0070fc24 =====

undefined8
FUN_0070fc24(float param_1,long param_2,ulong param_3,ulong param_4,long param_5,long param_6,
            long param_7,long param_8,long param_9,long param_10)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  if ((0 < param_2) && (0 < (long)param_3)) {
    if ((long)param_4 < 1) {
      lVar2 = 0;
      uVar4 = param_3 & 0x7ffffffffffffff8;
      puVar3 = (undefined8 *)(param_9 + 0x10);
      param_1 = param_1 * 0.0;
      do {
        uVar7 = uVar4;
        puVar1 = puVar3;
        if (param_3 < 8 || param_10 != 1) {
          uVar7 = 0;
LAB_0070fddc:
          pfVar5 = (float *)(param_9 + param_10 * 4 * uVar7);
          lVar6 = param_3 - uVar7;
          do {
            lVar6 = lVar6 + -1;
            *pfVar5 = param_1;
            pfVar5 = pfVar5 + param_10;
          } while (lVar6 != 0);
        }
        else {
          do {
            uVar7 = uVar7 - 8;
            puVar1[-1] = CONCAT44(param_1,param_1);
            puVar1[-2] = CONCAT44(param_1,param_1);
            puVar1[1] = CONCAT44(param_1,param_1);
            *puVar1 = CONCAT44(param_1,param_1);
            puVar1 = puVar1 + 4;
          } while (uVar7 != 0);
          uVar7 = uVar4;
          if (uVar4 != param_3) goto LAB_0070fddc;
        }
        lVar2 = lVar2 + 1;
        puVar3 = (undefined8 *)((long)puVar3 + 4);
        param_9 = param_9 + 4;
      } while (lVar2 != param_2);
    }
    else {
      lVar2 = 0;
      uVar4 = param_4 & 0x7ffffffffffffff8;
      puVar3 = (undefined8 *)(param_5 + 0x10);
      do {
        uVar7 = 0;
        lVar6 = param_7;
        puVar1 = (undefined8 *)(param_7 + 0x10);
        do {
          fVar14 = 0.0;
          uVar8 = uVar4;
          puVar10 = puVar1;
          puVar12 = puVar3;
          if (param_4 < 8 || (param_6 != 1 || param_8 != 1)) {
            uVar8 = 0;
LAB_0070fd40:
            puVar9 = (undefined4 *)(lVar6 + param_8 * 4 * uVar8);
            puVar11 = (undefined4 *)(param_5 + param_6 * 4 * uVar8);
            lVar13 = param_4 - uVar8;
            do {
              uVar15 = *puVar11;
              uVar16 = *puVar9;
              lVar13 = lVar13 + -1;
              puVar9 = puVar9 + param_8;
              puVar11 = puVar11 + param_6;
              fVar14 = (float)NEON_fmadd(uVar15,uVar16,fVar14);
            } while (lVar13 != 0);
          }
          else {
            do {
              uVar8 = uVar8 - 8;
              fVar14 = fVar14 + (float)puVar12[-2] * (float)puVar10[-2] +
                       (float)((ulong)puVar12[-2] >> 0x20) * (float)((ulong)puVar10[-2] >> 0x20) +
                       (float)puVar12[-1] * (float)puVar10[-1] +
                       (float)((ulong)puVar12[-1] >> 0x20) * (float)((ulong)puVar10[-1] >> 0x20) +
                       (float)*puVar12 * (float)*puVar10 +
                       (float)((ulong)*puVar12 >> 0x20) * (float)((ulong)*puVar10 >> 0x20) +
                       (float)puVar12[1] * (float)puVar10[1] +
                       (float)((ulong)puVar12[1] >> 0x20) * (float)((ulong)puVar10[1] >> 0x20);
              puVar10 = puVar10 + 4;
              puVar12 = puVar12 + 4;
            } while (uVar8 != 0);
            uVar8 = uVar4;
            if (uVar4 != param_4) goto LAB_0070fd40;
          }
          lVar13 = uVar7 * param_10;
          uVar7 = uVar7 + 1;
          puVar1 = (undefined8 *)((long)puVar1 + 4);
          lVar6 = lVar6 + 4;
          *(float *)(param_9 + lVar2 * 4 + lVar13 * 4) = fVar14 * param_1;
        } while (uVar7 != param_3);
        lVar2 = lVar2 + 1;
        puVar3 = (undefined8 *)((long)puVar3 + 4);
        param_5 = param_5 + 4;
      } while (lVar2 != param_2);
    }
  }
  return 0;
}


// ===== 0070fe08  FUN_0070fe08 =====

undefined8
FUN_0070fe08(float param_1,long param_2,ulong param_3,ulong param_4,long param_5,long param_6,
            long param_7,long param_8,long param_9,long param_10)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  float *pfVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  float fVar14;
  
  if ((0 < param_2) && (0 < (long)param_3)) {
    if ((long)param_4 < 1) {
      lVar4 = 0;
      uVar5 = param_3 & 0x7ffffffffffffff8;
      puVar6 = (undefined8 *)(param_9 + 0x10);
      param_1 = param_1 * 0.0;
      do {
        uVar9 = uVar5;
        puVar1 = puVar6;
        if (param_3 < 8 || param_10 != 1) {
          uVar9 = 0;
LAB_0070ffa8:
          pfVar7 = (float *)(param_9 + param_10 * 4 * uVar9);
          lVar8 = param_3 - uVar9;
          do {
            lVar8 = lVar8 + -1;
            *pfVar7 = param_1;
            pfVar7 = pfVar7 + param_10;
          } while (lVar8 != 0);
        }
        else {
          do {
            uVar9 = uVar9 - 8;
            puVar1[-1] = CONCAT44(param_1,param_1);
            puVar1[-2] = CONCAT44(param_1,param_1);
            puVar1[1] = CONCAT44(param_1,param_1);
            *puVar1 = CONCAT44(param_1,param_1);
            puVar1 = puVar1 + 4;
          } while (uVar9 != 0);
          uVar9 = uVar5;
          if (uVar5 != param_3) goto LAB_0070ffa8;
        }
        lVar4 = lVar4 + 1;
        puVar6 = (undefined8 *)((long)puVar6 + 4);
        param_9 = param_9 + 4;
      } while (lVar4 != param_2);
    }
    else {
      lVar4 = 0;
      uVar5 = param_4 & 0x7ffffffffffffff8;
      puVar6 = (undefined8 *)(param_5 + 0x10);
      do {
        uVar9 = 0;
        puVar1 = (undefined8 *)(param_7 + 0x10);
        lVar8 = param_7;
        do {
          fVar14 = 0.0;
          uVar2 = uVar5;
          puVar10 = puVar1;
          puVar12 = puVar6;
          if (param_4 < 8) {
            uVar2 = 0;
LAB_0070ff10:
            lVar3 = param_4 - uVar2;
            puVar11 = (undefined4 *)(lVar8 + uVar2 * 4);
            puVar13 = (undefined4 *)(param_5 + uVar2 * 4);
            do {
              lVar3 = lVar3 + -1;
              fVar14 = (float)NEON_fmadd(*puVar13,*puVar11,fVar14);
              puVar11 = puVar11 + 1;
              puVar13 = puVar13 + 1;
            } while (lVar3 != 0);
          }
          else {
            do {
              uVar2 = uVar2 - 8;
              fVar14 = fVar14 + (float)puVar12[-2] * (float)puVar10[-2] +
                       (float)((ulong)puVar12[-2] >> 0x20) * (float)((ulong)puVar10[-2] >> 0x20) +
                       (float)puVar12[-1] * (float)puVar10[-1] +
                       (float)((ulong)puVar12[-1] >> 0x20) * (float)((ulong)puVar10[-1] >> 0x20) +
                       (float)*puVar12 * (float)*puVar10 +
                       (float)((ulong)*puVar12 >> 0x20) * (float)((ulong)*puVar10 >> 0x20) +
                       (float)puVar12[1] * (float)puVar10[1] +
                       (float)((ulong)puVar12[1] >> 0x20) * (float)((ulong)puVar10[1] >> 0x20);
              puVar10 = puVar10 + 4;
              puVar12 = puVar12 + 4;
            } while (uVar2 != 0);
            uVar2 = uVar5;
            if (uVar5 != param_4) goto LAB_0070ff10;
          }
          lVar3 = uVar9 * param_10;
          uVar9 = uVar9 + 1;
          puVar1 = (undefined8 *)((long)puVar1 + param_8 * 4);
          lVar8 = lVar8 + param_8 * 4;
          *(float *)(param_9 + lVar4 * 4 + lVar3 * 4) = fVar14 * param_1;
        } while (uVar9 != param_3);
        lVar4 = lVar4 + 1;
        puVar6 = (undefined8 *)((long)puVar6 + param_6 * 4);
        param_5 = param_5 + param_6 * 4;
      } while (lVar4 != param_2);
    }
  }
  return 0;
}


// ===== 0070ffd0  FUN_0070ffd0 =====

undefined8
FUN_0070ffd0(float param_1,long param_2,ulong param_3,ulong param_4,long param_5,long param_6,
            long param_7,long param_8,long param_9,long param_10)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  float fVar14;
  undefined4 uVar15;
  
  if ((0 < param_2) && (0 < (long)param_3)) {
    if ((long)param_4 < 1) {
      lVar2 = 0;
      uVar4 = param_3 & 0x7ffffffffffffff8;
      puVar3 = (undefined8 *)(param_9 + 0x10);
      param_1 = param_1 * 0.0;
      do {
        uVar7 = uVar4;
        puVar1 = puVar3;
        if (param_3 < 8 || param_10 != 1) {
          uVar7 = 0;
LAB_0071017c:
          pfVar5 = (float *)(param_9 + param_10 * 4 * uVar7);
          lVar6 = param_3 - uVar7;
          do {
            lVar6 = lVar6 + -1;
            *pfVar5 = param_1;
            pfVar5 = pfVar5 + param_10;
          } while (lVar6 != 0);
        }
        else {
          do {
            uVar7 = uVar7 - 8;
            puVar1[-1] = CONCAT44(param_1,param_1);
            puVar1[-2] = CONCAT44(param_1,param_1);
            puVar1[1] = CONCAT44(param_1,param_1);
            *puVar1 = CONCAT44(param_1,param_1);
            puVar1 = puVar1 + 4;
          } while (uVar7 != 0);
          uVar7 = uVar4;
          if (uVar4 != param_3) goto LAB_0071017c;
        }
        lVar2 = lVar2 + 1;
        puVar3 = (undefined8 *)((long)puVar3 + 4);
        param_9 = param_9 + 4;
      } while (lVar2 != param_2);
    }
    else {
      lVar2 = 0;
      uVar4 = param_4 & 0x7ffffffffffffff8;
      puVar3 = (undefined8 *)(param_5 + 0x10);
      do {
        uVar7 = 0;
        lVar6 = param_7;
        puVar1 = (undefined8 *)(param_7 + 0x10);
        do {
          fVar14 = 0.0;
          uVar8 = uVar4;
          puVar10 = puVar1;
          puVar12 = puVar3;
          if (param_4 < 8 || param_8 != 1) {
            uVar8 = 0;
LAB_007100e4:
            puVar9 = (undefined4 *)(lVar6 + param_8 * 4 * uVar8);
            lVar13 = param_4 - uVar8;
            puVar11 = (undefined4 *)(param_5 + uVar8 * 4);
            do {
              uVar15 = *puVar9;
              lVar13 = lVar13 + -1;
              puVar9 = puVar9 + param_8;
              fVar14 = (float)NEON_fmadd(*puVar11,uVar15,fVar14);
              puVar11 = puVar11 + 1;
            } while (lVar13 != 0);
          }
          else {
            do {
              uVar8 = uVar8 - 8;
              fVar14 = fVar14 + (float)puVar12[-2] * (float)puVar10[-2] +
                       (float)((ulong)puVar12[-2] >> 0x20) * (float)((ulong)puVar10[-2] >> 0x20) +
                       (float)puVar12[-1] * (float)puVar10[-1] +
                       (float)((ulong)puVar12[-1] >> 0x20) * (float)((ulong)puVar10[-1] >> 0x20) +
                       (float)*puVar12 * (float)*puVar10 +
                       (float)((ulong)*puVar12 >> 0x20) * (float)((ulong)*puVar10 >> 0x20) +
                       (float)puVar12[1] * (float)puVar10[1] +
                       (float)((ulong)puVar12[1] >> 0x20) * (float)((ulong)puVar10[1] >> 0x20);
              puVar10 = puVar10 + 4;
              puVar12 = puVar12 + 4;
            } while (uVar8 != 0);
            uVar8 = uVar4;
            if (uVar4 != param_4) goto LAB_007100e4;
          }
          lVar13 = uVar7 * param_10;
          uVar7 = uVar7 + 1;
          puVar1 = (undefined8 *)((long)puVar1 + 4);
          lVar6 = lVar6 + 4;
          *(float *)(param_9 + lVar2 * 4 + lVar13 * 4) = fVar14 * param_1;
        } while (uVar7 != param_3);
        lVar2 = lVar2 + 1;
        puVar3 = (undefined8 *)((long)puVar3 + param_6 * 4);
        param_5 = param_5 + param_6 * 4;
      } while (lVar2 != param_2);
    }
  }
  return 0;
}


// ===== 007101a8  FUN_007101a8 =====

void FUN_007101a8(void)

{
  FUN_007101c8();
  return;
}


// ===== 007101c8  FUN_007101c8 =====

void FUN_007101c8(long *param_1,long *param_2,undefined1 param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined1 local_34 [4];
  
  param_5 = param_5 & 0xffffffff;
  local_34[0] = param_3;
LAB_007101fc:
  do {
    plVar7 = param_1;
    uVar3 = (long)param_2 - (long)plVar7 >> 3;
    if ((long)uVar3 < 3) {
      if (uVar3 < 2) {
        return;
      }
      if (uVar3 == 2) {
        lVar6 = *plVar7;
        if (param_2[-1] < lVar6) {
          *plVar7 = param_2[-1];
          param_2[-1] = lVar6;
          return;
        }
        return;
      }
    }
    else {
      if (uVar3 == 3) {
        lVar6 = *plVar7;
        lVar9 = plVar7[1];
        lVar11 = param_2[-1];
        if (lVar9 < lVar6) {
          if (lVar11 < lVar9) {
            *plVar7 = lVar11;
          }
          else {
            *plVar7 = lVar9;
            plVar7[1] = lVar6;
            if (lVar6 <= param_2[-1]) {
              return;
            }
            plVar7[1] = param_2[-1];
          }
          param_2[-1] = lVar6;
          return;
        }
        if (lVar11 < lVar9) {
          plVar7[1] = lVar11;
          param_2[-1] = lVar9;
          lVar6 = *plVar7;
          if (plVar7[1] < lVar6) {
            *plVar7 = plVar7[1];
            plVar7[1] = lVar6;
            return;
          }
          return;
        }
        return;
      }
      if (uVar3 == 4) {
        lVar9 = *plVar7;
        plVar8 = plVar7 + 1;
        lVar6 = *plVar8;
        plVar4 = plVar7 + 2;
        lVar11 = *plVar4;
        plVar5 = plVar7;
        if (lVar6 < lVar9) {
          lVar2 = lVar9;
          plVar12 = plVar4;
          if (lVar6 <= lVar11) {
            *plVar7 = lVar6;
            plVar7[1] = lVar9;
            lVar6 = lVar11;
            plVar5 = plVar8;
            goto joined_r0x007107f4;
          }
        }
        else {
          lVar10 = lVar11;
          if (lVar6 <= lVar11) goto LAB_00710850;
          *plVar8 = lVar11;
          *plVar4 = lVar6;
          plVar12 = plVar8;
          lVar2 = lVar6;
joined_r0x007107f4:
          lVar10 = lVar6;
          if (lVar9 <= lVar11) goto LAB_00710850;
        }
        *plVar5 = lVar11;
        *plVar12 = lVar9;
        lVar10 = lVar2;
LAB_00710850:
        if (lVar10 <= param_2[-1]) {
          return;
        }
        *plVar4 = param_2[-1];
        param_2[-1] = lVar10;
        lVar9 = *plVar4;
        lVar6 = *plVar8;
        if (lVar9 < lVar6) {
          lVar11 = *plVar7;
          plVar7[1] = lVar9;
          plVar7[2] = lVar6;
          if (lVar9 < lVar11) {
            *plVar7 = lVar9;
            plVar7[1] = lVar11;
            return;
          }
          return;
        }
        return;
      }
      if (uVar3 == 5) {
        FUN_00710b60(plVar7,plVar7 + 1,plVar7 + 2,plVar7 + 3,param_2 + -1);
        return;
      }
    }
    if ((long)uVar3 < 0x18) {
      plVar5 = plVar7 + 1;
      if ((param_5 & 1) == 0) {
        if (plVar7 != param_2 && plVar5 != param_2) {
          do {
            plVar8 = plVar5;
            lVar6 = *plVar7;
            lVar9 = plVar7[1];
            plVar7 = plVar8;
            if (lVar9 < lVar6) {
              do {
                *plVar7 = lVar6;
                lVar6 = plVar7[-2];
                plVar7 = plVar7 + -1;
              } while (lVar9 < lVar6);
              *plVar7 = lVar9;
            }
            plVar5 = plVar8 + 1;
            plVar7 = plVar8;
          } while (plVar8 + 1 != param_2);
          return;
        }
        return;
      }
      if (plVar7 == param_2 || plVar5 == param_2) {
        return;
      }
      lVar6 = 0;
      plVar8 = plVar7;
      do {
        plVar4 = plVar5;
        lVar9 = *plVar8;
        lVar11 = plVar8[1];
        lVar10 = lVar6;
        if (lVar11 < lVar9) {
          do {
            lVar2 = lVar10;
            *(long *)((long)plVar7 + lVar2 + 8) = lVar9;
            plVar5 = plVar7;
            if (lVar2 == 0) goto LAB_00710740;
            lVar9 = *(long *)((long)plVar7 + lVar2 + -8);
            lVar10 = lVar2 + -8;
          } while (lVar11 < lVar9);
          plVar5 = (long *)((long)plVar7 + lVar2);
LAB_00710740:
          *plVar5 = lVar11;
        }
        plVar5 = plVar4 + 1;
        lVar6 = lVar6 + 8;
        plVar8 = plVar4;
        if (plVar5 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_4 == 0) {
      if (plVar7 != param_2) {
        FUN_00710c88(plVar7,param_2,param_2,local_34);
        return;
      }
      return;
    }
    lVar6 = param_2[-1];
    plVar5 = plVar7 + (uVar3 >> 1);
    if (uVar3 < 0x81) {
      lVar11 = *plVar7;
      lVar9 = *plVar5;
      if (lVar11 < lVar9) {
        if (lVar6 < lVar11) {
          *plVar5 = lVar6;
        }
        else {
          *plVar5 = lVar11;
          *plVar7 = lVar9;
          if (lVar9 <= param_2[-1]) goto LAB_0071047c;
          *plVar7 = param_2[-1];
        }
        param_2[-1] = lVar9;
      }
      else if (lVar6 < lVar11) {
        *plVar7 = lVar6;
        param_2[-1] = lVar11;
        lVar6 = *plVar5;
        if (*plVar7 < lVar6) {
          *plVar5 = *plVar7;
          *plVar7 = lVar6;
        }
      }
    }
    else {
      lVar11 = *plVar5;
      lVar9 = *plVar7;
      if (lVar11 < lVar9) {
        if (lVar6 < lVar11) {
          *plVar7 = lVar6;
        }
        else {
          *plVar7 = lVar11;
          *plVar5 = lVar9;
          if (lVar9 <= param_2[-1]) goto LAB_00710310;
          *plVar5 = param_2[-1];
        }
        param_2[-1] = lVar9;
      }
      else if (lVar6 < lVar11) {
        *plVar5 = lVar6;
        param_2[-1] = lVar11;
        lVar6 = *plVar7;
        if (*plVar5 < lVar6) {
          *plVar7 = *plVar5;
          *plVar5 = lVar6;
        }
      }
LAB_00710310:
      lVar6 = plVar7[1];
      lVar11 = param_2[-2];
      plVar8 = plVar5 + -1;
      lVar9 = *plVar8;
      if (lVar9 < lVar6) {
        if (lVar11 < lVar9) {
          plVar7[1] = lVar11;
        }
        else {
          plVar7[1] = lVar9;
          *plVar8 = lVar6;
          if (lVar6 <= param_2[-2]) goto LAB_007103a0;
          *plVar8 = param_2[-2];
        }
        param_2[-2] = lVar6;
      }
      else if (lVar11 < lVar9) {
        *plVar8 = lVar11;
        param_2[-2] = lVar9;
        lVar6 = plVar7[1];
        if (*plVar8 < lVar6) {
          plVar7[1] = *plVar8;
          *plVar8 = lVar6;
        }
      }
LAB_007103a0:
      plVar4 = plVar5 + 1;
      lVar9 = *plVar4;
      lVar6 = plVar7[2];
      lVar11 = param_2[-3];
      if (lVar9 < lVar6) {
        if (lVar11 < lVar9) {
          plVar7[2] = lVar11;
        }
        else {
          plVar7[2] = lVar9;
          *plVar4 = lVar6;
          if (lVar6 <= param_2[-3]) goto LAB_0071040c;
          *plVar4 = param_2[-3];
        }
        param_2[-3] = lVar6;
      }
      else if (lVar11 < lVar9) {
        *plVar4 = lVar11;
        param_2[-3] = lVar9;
        lVar6 = plVar7[2];
        if (*plVar4 < lVar6) {
          plVar7[2] = *plVar4;
          *plVar4 = lVar6;
        }
      }
LAB_0071040c:
      lVar6 = *plVar5;
      lVar9 = *plVar8;
      lVar11 = *plVar4;
      if (lVar6 < lVar9) {
        lVar10 = lVar6;
        if (lVar6 <= lVar11) {
          *plVar8 = lVar6;
          *plVar5 = lVar9;
          plVar8 = plVar5;
          lVar6 = lVar9;
          lVar10 = lVar11;
          if (lVar9 <= lVar11) goto LAB_00710470;
        }
LAB_00710468:
        *plVar8 = lVar11;
        *plVar4 = lVar9;
        lVar6 = lVar10;
      }
      else if (lVar11 < lVar6) {
        *plVar4 = lVar6;
        *plVar5 = lVar11;
        plVar4 = plVar5;
        lVar6 = lVar11;
        lVar10 = lVar9;
        if (lVar11 < lVar9) goto LAB_00710468;
      }
LAB_00710470:
      lVar9 = *plVar7;
      *plVar7 = lVar6;
      *plVar5 = lVar9;
    }
LAB_0071047c:
    lVar6 = *plVar7;
    param_4 = param_4 + -1;
    param_1 = plVar7;
    if (((param_5 & 1) != 0) || (plVar7[-1] < lVar6)) {
      lVar9 = 0;
      do {
        lVar11 = lVar9 + 8;
        lVar10 = *(long *)((long)plVar7 + lVar9 + 8);
        lVar9 = lVar11;
      } while (lVar10 < lVar6);
      plVar5 = (long *)((long)plVar7 + lVar11);
      plVar8 = param_2;
      if (lVar11 == 8) {
        do {
          if (plVar8 <= plVar5) break;
          plVar8 = plVar8 + -1;
        } while (lVar6 <= *plVar8);
      }
      else {
        do {
          plVar8 = plVar8 + -1;
        } while (lVar6 <= *plVar8);
      }
      if (plVar5 < plVar8) {
        lVar9 = *plVar8;
        plVar12 = plVar5;
        plVar13 = plVar8;
        do {
          *plVar12 = lVar9;
          *plVar13 = lVar10;
          do {
            plVar4 = plVar12;
            plVar12 = plVar4 + 1;
            lVar10 = *plVar12;
          } while (lVar10 < lVar6);
          do {
            plVar13 = plVar13 + -1;
            lVar9 = *plVar13;
          } while (lVar6 <= lVar9);
        } while (plVar12 < plVar13);
      }
      else {
        plVar4 = plVar5 + -1;
      }
      if (plVar4 != plVar7) {
        *plVar7 = *plVar4;
      }
      *plVar4 = lVar6;
      if (plVar5 < plVar8) {
LAB_00710578:
        FUN_007101c8(plVar7,plVar4);
        param_5 = 0;
        param_1 = plVar4 + 1;
      }
      else {
        uVar3 = FUN_007108c0(plVar7,plVar4);
        uVar1 = FUN_007108c0(plVar4 + 1,param_2);
        if ((uVar1 & 1) == 0) {
          param_1 = plVar4 + 1;
          if ((uVar3 & 1) == 0) goto LAB_00710578;
        }
        else {
          param_2 = plVar4;
          if ((uVar3 & 1) != 0) {
            return;
          }
        }
      }
      goto LAB_007101fc;
    }
    if (lVar6 < param_2[-1]) {
      do {
        param_1 = param_1 + 1;
      } while (*param_1 <= lVar6);
    }
    else {
      do {
        param_1 = param_1 + 1;
        if (param_2 <= param_1) break;
      } while (*param_1 <= lVar6);
    }
    plVar5 = param_2;
    if (param_1 < param_2) {
      do {
        plVar5 = plVar5 + -1;
      } while (lVar6 < *plVar5);
    }
    if (param_1 < plVar5) {
      lVar9 = *param_1;
      lVar11 = *plVar5;
      do {
        *param_1 = lVar11;
        *plVar5 = lVar9;
        do {
          param_1 = param_1 + 1;
          lVar9 = *param_1;
        } while (lVar9 <= lVar6);
        do {
          plVar5 = plVar5 + -1;
          lVar11 = *plVar5;
        } while (lVar6 < lVar11);
      } while (param_1 < plVar5);
    }
    plVar5 = param_1 + -1;
    if (plVar5 != plVar7) {
      *plVar7 = *plVar5;
    }
    param_5 = 0;
    *plVar5 = lVar6;
  } while( true );
}


// ===== 007108c0  FUN_007108c0 =====

bool FUN_007108c0(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  
  uVar2 = (long)param_2 - (long)param_1 >> 3;
  if (2 < (long)uVar2) {
    if (uVar2 == 3) {
      lVar3 = *param_1;
      lVar5 = param_1[1];
      lVar9 = param_2[-1];
      if (lVar3 <= lVar5) {
        if (lVar5 <= lVar9) {
          return true;
        }
        param_1[1] = lVar9;
        param_2[-1] = lVar5;
        lVar3 = *param_1;
        if (param_1[1] < lVar3) {
          *param_1 = param_1[1];
          param_1[1] = lVar3;
          return true;
        }
        return true;
      }
      if (lVar9 < lVar5) {
        *param_1 = lVar9;
      }
      else {
        *param_1 = lVar5;
        param_1[1] = lVar3;
        if (lVar3 <= param_2[-1]) {
          return true;
        }
        param_1[1] = param_2[-1];
      }
      goto LAB_00710b34;
    }
    if (uVar2 != 4) {
      if (uVar2 == 5) {
        FUN_00710b60(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
        return true;
      }
      goto LAB_00710950;
    }
    lVar5 = *param_1;
    plVar8 = param_1 + 1;
    lVar3 = *plVar8;
    plVar6 = param_1 + 2;
    lVar9 = *plVar6;
    plVar7 = param_1;
    if (lVar3 < lVar5) {
      lVar1 = lVar5;
      plVar11 = plVar6;
      if (lVar3 <= lVar9) {
        *param_1 = lVar3;
        param_1[1] = lVar5;
        lVar3 = lVar9;
        plVar7 = plVar8;
        goto joined_r0x00710acc;
      }
    }
    else {
      lVar10 = lVar9;
      if (lVar3 <= lVar9) goto LAB_00710ae4;
      *plVar8 = lVar9;
      *plVar6 = lVar3;
      plVar11 = plVar8;
      lVar1 = lVar3;
joined_r0x00710acc:
      lVar10 = lVar3;
      if (lVar5 <= lVar9) goto LAB_00710ae4;
    }
    *plVar7 = lVar9;
    *plVar11 = lVar5;
    lVar10 = lVar1;
LAB_00710ae4:
    if (lVar10 <= param_2[-1]) {
      return true;
    }
    *plVar6 = param_2[-1];
    param_2[-1] = lVar10;
    lVar5 = *plVar6;
    lVar3 = *plVar8;
    if (lVar5 < lVar3) {
      lVar9 = *param_1;
      param_1[1] = lVar5;
      param_1[2] = lVar3;
      if (lVar5 < lVar9) {
        *param_1 = lVar5;
        param_1[1] = lVar9;
        return true;
      }
      return true;
    }
    return true;
  }
  if (uVar2 < 2) {
    return true;
  }
  if (uVar2 == 2) {
    lVar3 = *param_1;
    if (lVar3 <= param_2[-1]) {
      return true;
    }
    *param_1 = param_2[-1];
LAB_00710b34:
    param_2[-1] = lVar3;
    return true;
  }
LAB_00710950:
  lVar3 = *param_1;
  plVar6 = param_1 + 1;
  lVar9 = *plVar6;
  plVar8 = param_1 + 2;
  lVar5 = *plVar8;
  plVar7 = param_1;
  if (lVar9 < lVar3) {
    plVar11 = plVar8;
    if (lVar9 <= lVar5) {
      *param_1 = lVar9;
      param_1[1] = lVar3;
      plVar7 = plVar6;
      goto joined_r0x00710a20;
    }
  }
  else {
    if (lVar9 <= lVar5) goto LAB_00710a2c;
    *plVar6 = lVar5;
    *plVar8 = lVar9;
    plVar11 = plVar6;
joined_r0x00710a20:
    if (lVar3 <= lVar5) goto LAB_00710a2c;
  }
  *plVar7 = lVar5;
  *plVar11 = lVar3;
LAB_00710a2c:
  if (param_1 + 3 != param_2) {
    iVar4 = 0;
    lVar3 = 0x18;
    plVar7 = param_1 + 3;
    do {
      plVar6 = plVar7;
      lVar10 = *plVar6;
      lVar9 = *plVar8;
      lVar5 = lVar3;
      if (lVar10 < lVar9) {
        do {
          lVar1 = lVar5 + -8;
          *(long *)((long)param_1 + lVar5) = lVar9;
          plVar7 = param_1;
          if (lVar1 == 0) goto LAB_00710a48;
          lVar9 = *(long *)((long)param_1 + lVar5 + -0x10);
          lVar5 = lVar1;
        } while (lVar10 < lVar9);
        plVar7 = (long *)((long)param_1 + lVar1);
LAB_00710a48:
        iVar4 = iVar4 + 1;
        *plVar7 = lVar10;
        if (iVar4 == 8) {
          return plVar6 + 1 == param_2;
        }
      }
      lVar3 = lVar3 + 8;
      plVar7 = plVar6 + 1;
      plVar8 = plVar6;
    } while (plVar6 + 1 != param_2);
  }
  return true;
}


// ===== 00710b60  FUN_00710b60 =====

void FUN_00710b60(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_2;
  lVar2 = *param_1;
  lVar3 = *param_3;
  if (lVar1 < lVar2) {
    if (lVar3 < lVar1) {
      *param_1 = lVar3;
    }
    else {
      *param_1 = lVar1;
      *param_2 = lVar2;
      lVar3 = *param_3;
      if (lVar2 <= lVar3) goto LAB_00710be0;
      *param_2 = lVar3;
    }
    *param_3 = lVar2;
    lVar3 = lVar2;
  }
  else if (lVar3 < lVar1) {
    *param_2 = lVar3;
    *param_3 = lVar1;
    lVar2 = *param_1;
    lVar3 = lVar1;
    if (*param_2 < lVar2) {
      *param_1 = *param_2;
      *param_2 = lVar2;
      lVar3 = *param_3;
    }
  }
LAB_00710be0:
  if (*param_4 < lVar3) {
    *param_3 = *param_4;
    *param_4 = lVar3;
    lVar3 = *param_2;
    if (*param_3 < lVar3) {
      *param_2 = *param_3;
      *param_3 = lVar3;
      lVar3 = *param_1;
      if (*param_2 < lVar3) {
        *param_1 = *param_2;
        *param_2 = lVar3;
      }
    }
  }
  lVar3 = *param_4;
  if (*param_5 < lVar3) {
    *param_4 = *param_5;
    *param_5 = lVar3;
    lVar3 = *param_3;
    if (*param_4 < lVar3) {
      *param_3 = *param_4;
      *param_4 = lVar3;
      lVar3 = *param_2;
      if (*param_3 < lVar3) {
        *param_2 = *param_3;
        *param_3 = lVar3;
        lVar3 = *param_1;
        if (*param_2 < lVar3) {
          *param_1 = *param_2;
          *param_2 = lVar3;
        }
      }
    }
  }
  return;
}


// ===== 00710c88  FUN_00710c88 =====

long * FUN_00710c88(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  
  if (param_1 != param_2) {
    lVar7 = (long)param_2 - (long)param_1 >> 3;
    if (1 < lVar7) {
      uVar9 = lVar7 - 2U >> 1;
      uVar6 = uVar9;
      do {
        if ((long)uVar6 <= (long)uVar9) {
          uVar3 = (uVar6 & 0x1fffffffffffffff) << 1 | 1;
          uVar12 = (uVar6 & 0x1fffffffffffffff) * 2 + 2;
          plVar10 = param_1 + uVar3;
          if ((long)uVar12 < lVar7) {
            lVar16 = *plVar10;
            lVar4 = plVar10[1];
            lVar13 = lVar16;
            if (lVar16 <= lVar4) {
              lVar13 = lVar4;
            }
            plVar11 = plVar10 + 1;
            if (lVar4 <= lVar16) {
              plVar11 = plVar10;
              uVar12 = uVar3;
            }
          }
          else {
            lVar13 = *plVar10;
            plVar11 = plVar10;
            uVar12 = uVar3;
          }
          lVar4 = param_1[uVar6];
          plVar10 = param_1 + uVar6;
          if (lVar4 <= lVar13) {
            do {
              while( true ) {
                plVar8 = plVar11;
                *plVar10 = lVar13;
                if ((long)uVar9 < (long)uVar12) goto LAB_00710cb0;
                uVar3 = uVar12 << 1 | 1;
                uVar12 = uVar12 * 2 + 2;
                plVar5 = param_1 + uVar3;
                plVar10 = plVar8;
                if ((long)uVar12 < lVar7) break;
                lVar13 = *plVar5;
                plVar11 = plVar5;
                uVar12 = uVar3;
                if (lVar13 < lVar4) goto LAB_00710cb0;
              }
              lVar14 = *plVar5;
              lVar16 = plVar5[1];
              lVar13 = lVar14;
              if (lVar14 <= lVar16) {
                lVar13 = lVar16;
              }
              plVar11 = plVar5 + 1;
              if (lVar16 <= lVar14) {
                uVar12 = uVar3;
                plVar11 = plVar5;
              }
            } while (lVar4 <= lVar13);
LAB_00710cb0:
            *plVar8 = lVar4;
          }
        }
        bVar1 = 0 < (long)uVar6;
        uVar6 = uVar6 - 1;
      } while (bVar1);
    }
    plVar10 = param_2;
    if (param_2 != param_3) {
      plVar11 = param_1 + 1;
      plVar8 = param_2;
      do {
        lVar13 = *plVar8;
        if (lVar13 < *param_1) {
          *plVar8 = *param_1;
          *param_1 = lVar13;
          if (1 < lVar7) {
            lVar16 = *plVar11;
            lVar4 = lVar16;
            if ((long)param_2 - (long)param_1 == 0x10) {
              uVar6 = 1;
              plVar10 = plVar11;
            }
            else {
              lVar14 = param_1[2];
              if (lVar16 <= lVar14) {
                lVar4 = lVar14;
              }
              plVar10 = param_1 + 2;
              if (lVar14 <= lVar16) {
                plVar10 = plVar11;
              }
              uVar6 = 1;
              if (lVar16 < lVar14) {
                uVar6 = 2;
              }
            }
            plVar5 = param_1;
            if (lVar13 <= lVar4) {
              do {
                while( true ) {
                  plVar15 = plVar10;
                  *plVar5 = lVar4;
                  if ((long)(lVar7 - 2U >> 1) < (long)uVar6) goto LAB_00710da4;
                  uVar9 = uVar6 << 1 | 1;
                  uVar6 = uVar6 * 2 + 2;
                  plVar2 = param_1 + uVar9;
                  plVar5 = plVar15;
                  if ((long)uVar6 < lVar7) break;
                  lVar4 = *plVar2;
                  uVar6 = uVar9;
                  plVar10 = plVar2;
                  if (lVar4 < lVar13) goto LAB_00710da4;
                }
                lVar14 = *plVar2;
                lVar16 = plVar2[1];
                lVar4 = lVar14;
                if (lVar14 <= lVar16) {
                  lVar4 = lVar16;
                }
                plVar10 = plVar2 + 1;
                if (lVar16 <= lVar14) {
                  uVar6 = uVar9;
                  plVar10 = plVar2;
                }
              } while (lVar13 <= lVar4);
LAB_00710da4:
              *plVar15 = lVar13;
            }
          }
        }
        plVar8 = plVar8 + 1;
        plVar10 = param_3;
      } while (plVar8 != param_3);
    }
    param_3 = plVar10;
    if (1 < lVar7) {
      do {
        lVar13 = *param_1;
        uVar6 = 0;
        plVar10 = param_1;
        do {
          uVar12 = uVar6 << 1 | 1;
          uVar9 = uVar6 * 2 + 2;
          plVar11 = plVar10 + uVar6 + 1;
          if ((long)uVar9 < lVar7) {
            lVar16 = plVar10[uVar6 + 2];
            lVar14 = plVar10[uVar6 + 1];
            lVar4 = lVar14;
            if (lVar14 <= lVar16) {
              lVar4 = lVar16;
            }
            plVar8 = plVar10 + uVar6 + 2;
            uVar6 = uVar9;
            if (lVar16 <= lVar14) {
              plVar8 = plVar11;
              uVar6 = uVar12;
            }
          }
          else {
            lVar4 = *plVar11;
            plVar8 = plVar11;
            uVar6 = uVar12;
          }
          *plVar10 = lVar4;
          plVar10 = plVar8;
        } while ((long)uVar6 <= (long)(lVar7 - 2U >> 1));
        param_2 = param_2 + -1;
        if (plVar8 == param_2) {
          *plVar8 = lVar13;
        }
        else {
          lVar4 = (long)plVar8 + (8 - (long)param_1) >> 3;
          *plVar8 = *param_2;
          *param_2 = lVar13;
          if (1 < lVar4) {
            uVar6 = lVar4 - 2U >> 1;
            lVar13 = *plVar8;
            lVar4 = param_1[uVar6];
            plVar10 = param_1 + uVar6;
            if (lVar4 < lVar13) {
              do {
                plVar11 = plVar10;
                *plVar8 = lVar4;
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1 >> 1;
                lVar4 = param_1[uVar6];
                plVar8 = plVar11;
                plVar10 = param_1 + uVar6;
              } while (lVar4 < lVar13);
              *plVar11 = lVar13;
            }
          }
        }
        bVar1 = 2 < lVar7;
        lVar7 = lVar7 + -1;
      } while (bVar1);
    }
  }
  return param_3;
}


// ===== 00710f84  FUN_00710f84 =====

int FUN_00710f84(long *param_1,undefined8 param_2,code *param_3)

{
  int iVar1;
  long lVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_007afff4);
  lVar2 = *param_1;
  while (lVar2 == 1) {
    pthread_cond_wait((pthread_cond_t *)&DAT_007b001c,(pthread_mutex_t *)&DAT_007afff4);
    lVar2 = *param_1;
  }
  if (*param_1 != 0) {
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_007afff4);
    return iVar1;
  }
  *param_1 = 1;
                    /* try { // try from 00711028 to 00711067 has its CatchHandler @ 00711084 */
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_007afff4);
  (*param_3)(param_2);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_007afff4);
  *param_1 = -1;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_007afff4);
  iVar1 = pthread_cond_broadcast((pthread_cond_t *)&DAT_007b001c);
  return iVar1;
}


// ===== 00711098  FUN_00711098 =====

undefined8 * FUN_00711098(undefined8 *param_1)

{
  uint uVar1;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
                    /* try { // try from 007110b0 to 007110df has its CatchHandler @ 007110f0 */
    pthread_mutex_lock((pthread_mutex_t *)&DAT_007afff4);
    *(undefined8 *)*param_1 = 0;
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_007afff4);
    uVar1 = pthread_cond_broadcast((pthread_cond_t *)&DAT_007b001c);
    param_1 = (undefined8 *)(ulong)uVar1;
  }
  return param_1;
}


// ===== 007110f4  FUN_007110f4 =====

long FUN_007110f4(void)

{
  int iVar1;
  undefined4 *puVar2;
  timespec local_20;
  
                    /* try { // try from 00711104 to 00711167 has its CatchHandler @ 00711168 */
  iVar1 = clock_gettime(0,&local_20);
  if (iVar1 == 0) {
    return local_20.tv_nsec / 1000 + local_20.tv_sec * 1000000;
  }
  puVar2 = (undefined4 *)__errno();
  FUN_00715908(*puVar2,"clock_gettime(CLOCK_REALTIME) failed");
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00711104 with catch @ 00711168
                        */
  FUN_002fb198();
}


// ===== 0071116c  FUN_0071116c =====

long FUN_0071116c(long *param_1)

{
  return *param_1 / 1000000;
}


// ===== 00711194  FUN_00711194 =====

long FUN_00711194(void)

{
  int iVar1;
  undefined4 *puVar2;
  timespec local_20;
  
                    /* try { // try from 007111a4 to 007111e7 has its CatchHandler @ 007111e8 */
  iVar1 = clock_gettime(1,&local_20);
  if (iVar1 == 0) {
    return local_20.tv_nsec + local_20.tv_sec * 1000000000;
  }
  puVar2 = (undefined4 *)__errno();
  FUN_00715908(*puVar2,"clock_gettime(CLOCK_MONOTONIC) failed");
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 007111a4 with catch @ 007111e8
                        */
  FUN_002fb198();
}


// ===== 007111ec  FUN_007111ec =====

ulong * FUN_007111ec(ulong *param_1,byte *param_2)

{
  ulong uVar1;
  ulong __n;
  long lVar2;
  ulong uVar3;
  byte *__src;
  bool bVar4;
  ulong uVar5;
  
  __src = *(byte **)(param_2 + 0x10);
  bVar4 = (*param_2 & 1) == 0;
  if (bVar4) {
    __src = param_2 + 1;
  }
  uVar3 = *param_1;
  __n = (ulong)(*param_2 >> 1);
  if (!bVar4) {
    __n = *(ulong *)(param_2 + 8);
  }
  lVar2 = 0x16;
  if ((*param_1 & 1) != 0) {
    lVar2 = (uVar3 & 0xfffffffffffffffe) - 1;
  }
  uVar1 = uVar3 >> 1 & 0x7f;
  if ((uVar3 & 1) != 0) {
    uVar1 = param_1[1];
  }
  if (lVar2 - uVar1 < __n) {
    FUN_00712a34(param_1,lVar2,(__n - lVar2) + uVar1,uVar1,uVar1,0);
  }
  else if (__n != 0) {
    uVar5 = param_1[2];
    if ((uVar3 & 1) == 0) {
      uVar5 = (long)param_1 + 1;
    }
    memmove((void *)(uVar5 + uVar1),__src,__n);
    uVar1 = uVar1 + __n;
    if ((*param_1 & 1) == 0) {
      *(char *)param_1 = (char)((int)uVar1 << 1);
    }
    else {
      param_1[1] = uVar1;
    }
    *(undefined1 *)(uVar5 + uVar1) = 0;
  }
  return param_1;
}


// ===== 007112cc  FUN_007112cc =====

undefined1  [16] FUN_007112cc(byte *param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  byte *local_38;
  ulong uStack_30;
  char *local_28;
  undefined8 uStack_20;
  char local_18;
  
  local_38 = *(byte **)(param_1 + 0x10);
  local_28 = (char *)0x0;
  uStack_20 = 0;
  bVar1 = (*param_1 & 1) == 0;
  if (bVar1) {
    local_38 = param_1 + 1;
  }
  uStack_30 = (ulong)(*param_1 >> 1);
  if (!bVar1) {
    uStack_30 = *(ulong *)(param_1 + 8);
  }
  local_18 = '\x01';
  FUN_007118dc(&local_38);
  if (local_18 == '\x02') {
    FUN_007118dc(&local_38);
  }
  if (local_18 == '\x03') {
    uVar3 = 1;
    puVar2 = &DAT_001c7abb;
    if (*local_28 != '\\') {
      puVar2 = &DAT_001c55aa;
    }
  }
  else {
    uVar3 = 0;
    puVar2 = (undefined *)0x0;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = puVar2;
  return auVar4;
}


// ===== 0071136c  FUN_0071136c =====

undefined1  [16] FUN_0071136c(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined1 auVar4 [16];
  byte *local_48;
  ulong uStack_40;
  byte *local_38;
  long lStack_30;
  byte local_28;
  
  bVar1 = *param_1;
  uStack_40 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uStack_40 = *(ulong *)(param_1 + 8);
  }
  if (uStack_40 == 0) {
    return ZEXT816(0);
  }
  local_48 = *(byte **)(param_1 + 0x10);
  local_38 = (byte *)0x0;
  lStack_30 = 0;
  if ((bVar1 & 1) == 0) {
    local_48 = param_1 + 1;
  }
  local_28 = 1;
  FUN_007118dc(&local_48);
  while (local_28 < 4) {
    FUN_007118dc(&local_48);
  }
  pbVar2 = param_1 + 1;
  if (local_28 == 6) {
    pbVar3 = (byte *)(ulong)(*param_1 >> 1);
    if ((*param_1 & 1) != 0) {
      pbVar2 = *(byte **)(param_1 + 0x10);
      pbVar3 = *(byte **)(param_1 + 8);
    }
  }
  else {
    local_38 = (byte *)0x0;
    lStack_30 = 0;
    uStack_40 = (ulong)(*param_1 >> 1);
    local_48 = pbVar2;
    if ((*param_1 & 1) != 0) {
      uStack_40 = *(ulong *)(param_1 + 8);
      local_48 = *(byte **)(param_1 + 0x10);
    }
    local_28 = 6;
    FUN_00711ae4(&local_48);
    pbVar3 = pbVar2;
    if ((*param_1 & 1) != 0) {
      pbVar3 = *(byte **)(param_1 + 0x10);
    }
    if (local_38 == pbVar3) {
      pbVar2 = (byte *)0x0;
      pbVar3 = (byte *)0x0;
    }
    else {
      FUN_00711ae4(&local_48);
      if ((*param_1 & 1) != 0) {
        pbVar2 = *(byte **)(param_1 + 0x10);
      }
      pbVar3 = local_38 + (lStack_30 - (long)pbVar2);
    }
  }
  auVar4._8_8_ = pbVar3;
  auVar4._0_8_ = pbVar2;
  return auVar4;
}


// ===== 007114a8  FUN_007114a8 =====

undefined1  [16] FUN_007114a8(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  byte *local_48;
  ulong uStack_40;
  char *local_38;
  undefined8 uStack_30;
  byte local_28;
  
  bVar1 = *param_1;
  uStack_40 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uStack_40 = *(ulong *)(param_1 + 8);
  }
  if (uStack_40 == 0) {
    return ZEXT816(0);
  }
  local_48 = *(byte **)(param_1 + 0x10);
  local_38 = (char *)0x0;
  uStack_30 = 0;
  if ((bVar1 & 1) == 0) {
    local_48 = param_1 + 1;
  }
  local_28 = 1;
  FUN_007118dc(&local_48);
  while (local_28 < 4) {
    FUN_007118dc(&local_48);
  }
  if (local_28 == 6) {
    pcVar3 = (char *)0x0;
    uVar4 = 0;
  }
  else {
    local_38 = (char *)0x0;
    uStack_30 = 0;
    uStack_40 = (ulong)(*param_1 >> 1);
    local_48 = param_1 + 1;
    if ((*param_1 & 1) != 0) {
      uStack_40 = *(ulong *)(param_1 + 8);
      local_48 = *(byte **)(param_1 + 0x10);
    }
    local_28 = 6;
    FUN_00711ae4(&local_48);
    uVar2 = 1 << (ulong)(local_28 & 0x1f);
    pcVar3 = "";
    uVar4 = 0;
    if (((uVar2 & 0x62) == 0) && (pcVar3 = local_38, uVar4 = uStack_30, (uVar2 & 0x14) == 0)) {
      pcVar3 = "\\";
      uVar4 = 1;
      if (*local_38 != '\\') {
        pcVar3 = "/";
      }
    }
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = pcVar3;
  return auVar5;
}


// ===== 007115e4  FUN_007115e4 =====

/* WARNING: Type propagation algorithm not settling */

int FUN_007115e4(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  size_t sVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 local_90;
  undefined8 uStack_88;
  char *local_80;
  ulong uStack_78;
  byte local_70;
  byte *local_68;
  ulong uStack_60;
  char *local_58;
  ulong uStack_50;
  byte local_48;
  
  local_68 = *(byte **)(param_1 + 0x10);
  bVar3 = (*param_1 & 1) == 0;
  local_58 = (char *)0x0;
  uStack_50 = 0;
  if (bVar3) {
    local_68 = param_1 + 1;
  }
  local_48 = 1;
  uStack_60 = (ulong)(*param_1 >> 1);
  if (!bVar3) {
    uStack_60 = *(ulong *)(param_1 + 8);
  }
  FUN_007118dc(&local_68);
  local_80 = (char *)0x0;
  uStack_78 = 0;
  local_70 = 1;
  local_90 = param_2;
  uStack_88 = param_3;
  FUN_007118dc(&local_90);
  bVar2 = local_48;
  bVar8 = local_70;
  if (local_48 == 2) {
    pcVar5 = local_58;
    uVar10 = uStack_50;
    if (local_70 == 2) {
LAB_00711690:
      bVar8 = 2;
      pcVar6 = local_80;
      uVar9 = uStack_78;
    }
    else {
      pcVar6 = "";
      uVar9 = 0;
    }
    sVar1 = uVar9;
    if (uVar10 <= uVar9) {
      sVar1 = uVar10;
    }
    iVar4 = memcmp(pcVar5,pcVar6,sVar1);
    if (iVar4 == 0) {
      if (uVar10 == uVar9) {
        iVar4 = 0;
      }
      else {
        iVar4 = 1;
        if (uVar10 < uVar9) {
          iVar4 = -1;
        }
      }
    }
    while (bVar2 < 3) {
      FUN_007118dc(&local_68);
      bVar8 = local_70;
      bVar2 = local_48;
    }
    while (bVar8 < 3) {
      FUN_007118dc(&local_90);
      bVar8 = local_70;
    }
    if (iVar4 != 0) {
      return iVar4;
    }
  }
  else if (local_70 == 2) {
    uVar10 = 0;
    pcVar5 = "";
    goto LAB_00711690;
  }
  if (local_48 != 3) {
    if (bVar8 != 3) goto joined_r0x00711754;
    return -1;
  }
  if (bVar8 == 3) {
    do {
      FUN_007118dc(&local_68);
      bVar8 = local_70;
joined_r0x00711754:
    } while (local_48 < 4);
    while (bVar8 < 4) {
      FUN_007118dc(&local_90);
      bVar8 = local_70;
    }
    pcVar5 = "";
    while ((((local_48 != 1 && (local_48 != 6)) && (local_70 != 1)) && (local_70 != 6))) {
      pcVar6 = local_58;
      pcVar7 = local_80;
      uVar9 = uStack_78;
      uVar10 = uStack_50;
      if (local_48 < 4) {
        if ((local_48 != 2) && (uVar10 = 1, pcVar6 = "\\", *local_58 != '\\')) {
          pcVar6 = "/";
        }
joined_r0x0071181c:
        if (3 < local_70) goto LAB_007117f8;
LAB_00711820:
        if ((local_70 != 2) && (pcVar7 = "\\", uVar9 = 1, *local_80 != '\\')) {
          pcVar7 = "/";
        }
      }
      else {
        if (local_48 == 4) goto joined_r0x0071181c;
        uVar10 = 0;
        pcVar6 = pcVar5;
        if (local_70 < 4) goto LAB_00711820;
LAB_007117f8:
        if (local_70 != 4) {
          pcVar7 = pcVar5;
          uVar9 = 0;
        }
      }
      sVar1 = uVar9;
      if (uVar10 <= uVar9) {
        sVar1 = uVar10;
      }
      iVar4 = memcmp(pcVar6,pcVar7,sVar1);
      if (iVar4 != 0) {
        return iVar4;
      }
      if (uVar10 != uVar9) {
        if (uVar10 < uVar9) {
          return -1;
        }
        return 1;
      }
      FUN_007118dc(&local_68);
      FUN_007118dc(&local_90);
    }
    if (local_48 == 6) {
      if (local_70 != 6) {
        return -1;
      }
    }
    else if (local_70 == 6) goto LAB_007118a8;
    iVar4 = 0;
  }
  else {
LAB_007118a8:
    iVar4 = 1;
  }
  return iVar4;
}


// ===== 007118dc  FUN_007118dc =====

void FUN_007118dc(ulong *param_1)

{
  char *pcVar1;
  long lVar2;
  byte bVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  
  bVar3 = (byte)param_1[4];
  pcVar7 = (char *)*param_1;
  if (bVar3 - 2 < 3) {
    pcVar4 = (char *)(param_1[2] + param_1[3]);
  }
  else {
    pcVar4 = pcVar7;
    if (bVar3 - 5 < 2) goto LAB_00711974;
  }
  pcVar1 = pcVar7 + param_1[1];
  if (pcVar4 == pcVar1) {
LAB_00711974:
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 6;
    return;
  }
  uVar8 = (uint)bVar3;
  if (uVar8 - 1 < 2) {
    if (pcVar4 == (char *)0x0) {
LAB_007119d0:
      pcVar7 = (char *)0x0;
    }
    else {
      lVar2 = -1;
      if (pcVar4 < pcVar1) {
        lVar2 = 1;
      }
      pcVar5 = pcVar4;
      if (*pcVar4 == '/') {
        do {
          pcVar5 = pcVar5 + lVar2;
          if (pcVar5 == pcVar1) {
            pcVar5 = pcVar1;
            if (pcVar7 == (char *)0x0) goto LAB_00711a74;
            break;
          }
        } while (*pcVar5 == '/');
        *(undefined1 *)(param_1 + 4) = 3;
        uVar6 = (long)pcVar5 - (long)pcVar4;
        goto LAB_00711a94;
      }
      do {
        pcVar5 = pcVar5 + lVar2;
        pcVar7 = pcVar1;
        if (pcVar5 == pcVar1) break;
        pcVar7 = pcVar5;
      } while (*pcVar5 != '/');
    }
  }
  else {
    if (uVar8 != 3) {
      if (uVar8 != 4) {
        return;
      }
      pcVar5 = pcVar1;
      if (pcVar4 == (char *)0x0) {
        pcVar9 = (char *)0x0;
LAB_007119fc:
        if (pcVar9 != pcVar1) {
LAB_00711a2c:
          pcVar5 = pcVar9;
          if (pcVar5 == (char *)0x0) {
            pcVar5 = (char *)0x0;
          }
          else if (*pcVar5 != '/') {
            lVar2 = -1;
            pcVar9 = pcVar5;
            if (pcVar5 < pcVar1) {
              lVar2 = 1;
            }
            do {
              pcVar9 = pcVar9 + lVar2;
              if (pcVar9 == pcVar1) {
                pcVar9 = pcVar1;
                if (pcVar7 == (char *)0x0) goto LAB_00711a88;
                break;
              }
            } while (*pcVar9 != '/');
            *(undefined1 *)(param_1 + 4) = 4;
            param_1[2] = (ulong)pcVar5;
            param_1[3] = (long)pcVar9 - (long)pcVar5;
            return;
          }
        }
      }
      else {
        if (*pcVar4 == '/') {
          lVar2 = -1;
          pcVar9 = pcVar4;
          if (pcVar4 < pcVar1) {
            lVar2 = 1;
          }
          do {
            pcVar9 = pcVar9 + lVar2;
            if (pcVar9 == pcVar1) goto LAB_00711a88;
          } while (*pcVar9 == '/');
          goto LAB_007119fc;
        }
        pcVar9 = (char *)0x0;
        if (pcVar1 != (char *)0x0) goto LAB_00711a2c;
      }
LAB_00711a88:
      uVar6 = (long)pcVar5 - (long)pcVar4;
      *(undefined1 *)(param_1 + 4) = 5;
      goto LAB_00711a94;
    }
    if ((pcVar4 == (char *)0x0) || (*pcVar4 == '/')) goto LAB_007119d0;
    lVar2 = -1;
    pcVar5 = pcVar4;
    if (pcVar4 < pcVar1) {
      lVar2 = 1;
    }
    do {
      pcVar5 = pcVar5 + lVar2;
      pcVar7 = pcVar1;
      if (pcVar5 == pcVar1) break;
      pcVar7 = pcVar5;
    } while (*pcVar5 != '/');
  }
LAB_00711a74:
  *(undefined1 *)(param_1 + 4) = 4;
  uVar6 = (long)pcVar7 - (long)pcVar4;
LAB_00711a94:
  param_1[2] = (ulong)pcVar4;
  param_1[3] = uVar6;
  return;
}


// ===== 00711ae4  FUN_00711ae4 =====

void FUN_00711ae4(ulong *param_1)

{
  long lVar1;
  byte bVar2;
  undefined1 uVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  bVar2 = (byte)param_1[4];
  uVar10 = *param_1;
  if (bVar2 - 3 < 3) {
    uVar6 = param_1[2];
    uVar11 = uVar6 - uVar10;
  }
  else {
    if (bVar2 - 1 < 2) goto LAB_00711b18;
    uVar6 = uVar10 + param_1[1];
    uVar11 = uVar6 - uVar10;
  }
  if (uVar11 == 0) {
LAB_00711b18:
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 1;
    return;
  }
  pcVar4 = (char *)(uVar10 - 1);
  pcVar8 = (char *)(uVar6 - 1);
  if (bVar2 < 5) {
    if (bVar2 != 3) {
      if (bVar2 != 4) {
        return;
      }
      if (*pcVar8 == '/') {
        lVar1 = -1;
        if (uVar6 < uVar10) {
          lVar1 = 1;
        }
        do {
          pcVar8 = pcVar8 + lVar1;
          if (pcVar8 == pcVar4) {
            param_1[2] = uVar10;
            param_1[3] = uVar6 - uVar10;
            *(undefined1 *)(param_1 + 4) = 3;
            return;
          }
        } while (*pcVar8 == '/');
        lVar1 = -1;
        pcVar7 = pcVar8;
        if (pcVar8 < pcVar4) {
          lVar1 = 1;
        }
        do {
          pcVar7 = pcVar7 + lVar1;
          pcVar5 = pcVar4;
          if (pcVar7 == pcVar4) break;
          pcVar5 = pcVar7;
        } while (*pcVar7 != '/');
      }
      else {
        pcVar8 = (char *)0x0;
        pcVar5 = (char *)0x0;
      }
      *(undefined1 *)(param_1 + 4) = 4;
      param_1[2] = (ulong)(pcVar5 + 1);
      param_1[3] = (ulong)(pcVar8 + (1 - (long)(pcVar5 + 1)));
      return;
    }
    uVar3 = 2;
LAB_00711cd4:
    *(undefined1 *)(param_1 + 4) = uVar3;
    param_1[2] = uVar10;
    param_1[3] = uVar11;
    return;
  }
  if (bVar2 == 5) {
    if (*pcVar8 == '/') {
      pcVar5 = (char *)0x0;
    }
    else {
      lVar1 = -1;
      if (uVar6 < uVar10) {
        lVar1 = 1;
      }
      do {
        pcVar8 = pcVar8 + lVar1;
        pcVar5 = pcVar4;
        if (pcVar8 == pcVar4) break;
        pcVar5 = pcVar8;
      } while (*pcVar8 != '/');
    }
  }
  else {
    if (bVar2 != 6) {
      return;
    }
    uVar11 = uVar6 - uVar10;
    lVar1 = -1;
    if (uVar6 < uVar10) {
      lVar1 = 1;
    }
    if (*(char *)(uVar6 - 1) == '/') {
      lVar9 = 0;
      lVar12 = lVar1 + uVar6 + -1;
      while ((char *)(lVar12 + lVar9) != pcVar4) {
        pcVar8 = (char *)(lVar12 + lVar9);
        lVar9 = lVar9 + lVar1;
        if (*pcVar8 != '/') {
          *(undefined1 *)(param_1 + 4) = 5;
          param_1[2] = uVar6 + lVar9;
          param_1[3] = -lVar9;
          return;
        }
      }
      uVar3 = 3;
      goto LAB_00711cd4;
    }
    do {
      pcVar8 = pcVar8 + lVar1;
      pcVar5 = pcVar4;
      if (pcVar8 == pcVar4) break;
      pcVar5 = pcVar8;
    } while (*pcVar8 != '/');
  }
  *(undefined1 *)(param_1 + 4) = 4;
  param_1[2] = (ulong)(pcVar5 + 1);
  param_1[3] = uVar6 - (long)(pcVar5 + 1);
  return;
}


// ===== 00711ce0  FUN_00711ce0 =====

ulong FUN_00711ce0(ulong param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (param_1 < 0xd4) {
    uVar5 = 0x30;
    puVar4 = (uint *)&UNK_00211a4c;
    do {
      uVar6 = uVar5 >> 1;
      puVar1 = puVar4 + uVar6 + 1;
      uVar5 = uVar5 + ~uVar6;
      if (param_1 <= puVar4[uVar6]) {
        puVar1 = puVar4;
        uVar5 = uVar6;
      }
      puVar4 = puVar1;
    } while (uVar5 != 0);
    return (ulong)*puVar1;
  }
  if (0xffffffffffffffc5 < param_1) {
    uVar2 = FUN_00712400("__next_prime overflow");
    uVar3 = FUN_00753a74(0x10);
    FUN_00648b6c(uVar3,uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar3,PTR_PTR_007a2eb0,PTR_FUN_007a2eb8);
  }
  uVar6 = 0x30;
  uVar5 = param_1 / 0xd2;
  puVar4 = (uint *)&DAT_00211b0c;
  do {
    uVar9 = uVar6 >> 1;
    puVar1 = puVar4 + uVar9 + 1;
    uVar6 = uVar6 + ~uVar9;
    if (param_1 % 0xd2 <= (ulong)puVar4[uVar9]) {
      puVar1 = puVar4;
      uVar6 = uVar9;
    }
    puVar4 = puVar1;
  } while (uVar6 != 0);
  lVar8 = (long)(puVar1 + -0x846c3) >> 2;
  do {
    lVar7 = lVar8;
    uVar6 = uVar5 * 0xd2 + (ulong)*(uint *)(&DAT_00211b0c + lVar7 * 4);
    lVar8 = 0x14;
    do {
      uVar10 = (ulong)*(uint *)(&UNK_00211a4c + lVar8);
      uVar9 = 0;
      if (uVar10 != 0) {
        uVar9 = uVar6 / uVar10;
      }
      if (uVar9 < uVar10) {
        return uVar6;
      }
      if (uVar6 == uVar9 * uVar10) goto LAB_007123dc;
      lVar8 = lVar8 + 4;
    } while (lVar8 != 0xbc);
    uVar9 = 0x1a3;
    do {
      uVar11 = uVar9 - 0xd0;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar11) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0xc6;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0xc6) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0xc4;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0xc4) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0xc0;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0xc0) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0xbe;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0xbe) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0xba;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0xba) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0xb4;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0xb4) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0xb2;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0xb2) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0xac;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0xac) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0xa8;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0xa8) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0xa6;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0xa6) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0xa2;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0xa2) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x9c;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x9c) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x96;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x96) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x94;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x94) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x8e;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x8e) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x8a;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x8a) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x88;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x88) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x82;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x82) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x7e;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x7e) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x78;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x78) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x70;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x70) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x6c;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x6c) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x6a;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x6a) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x66;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x66) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 100;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 100) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x60;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x60) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x58;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x58) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x52;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x52) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x4e;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x4e) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x48;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x48) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x46;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x46) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x42;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x42) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x3c;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x3c) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x3a;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x3a) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x34;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x34) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x2e;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x2e) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x2a;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x2a) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x28;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x28) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x24;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x24) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x1e;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x1e) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x1c;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x1c) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x16;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x16) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x12;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x12) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x10;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x10) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0xc;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0xc) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 10;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 10) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar10 = 0;
      if (uVar9 != 0) {
        uVar10 = uVar6 / uVar9;
      }
      if (uVar10 < uVar9) {
        return uVar6;
      }
      uVar10 = uVar10 * uVar9;
      uVar9 = uVar9 + 0xd2;
    } while (uVar6 != uVar10);
LAB_007123dc:
    if (lVar7 == 0x2f) {
      uVar5 = uVar5 + 1;
    }
    lVar8 = 0;
    if (lVar7 != 0x2f) {
      lVar8 = lVar7 + 1;
    }
  } while( true );
}


// ===== 00712400  FUN_00712400 =====

void FUN_00712400(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00753a74(0x10);
                    /* try { // try from 00712420 to 00712427 has its CatchHandler @ 00712440 */
  FUN_00648b6c(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(uVar1,PTR_PTR_007a2eb0,PTR_FUN_007a2eb8);
}


// ===== 00712454  FUN_00712454 =====

void FUN_00712454(void)

{
  return;
}


// ===== 0071245c  FUN_0071245c =====

void FUN_0071245c(long *param_1)

{
  long lVar1;
  
  if ((param_1[2] != 0) && (lVar1 = FUN_00755c50(0xffffffffffffffff), lVar1 != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007124b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}


// ===== 007124b4  FUN_007124b4 =====

long FUN_007124b4(long param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  do {
    if (lVar1 == -1) {
      return 0;
    }
    lVar3 = FUN_00755b80(lVar1,lVar1 + 1,param_1 + 8);
    bVar2 = lVar3 != lVar1;
    lVar1 = lVar3;
  } while (bVar2);
  return param_1;
}


// ===== 00712514  FUN_00712514 =====

undefined8 FUN_00712514(void)

{
  return 0;
}


// ===== 00712520  FUN_00712520 =====

void FUN_00712520(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00753a74(8);
  FUN_0073a18c();
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(uVar1,PTR_PTR_007a1e50,PTR_FUN_007a22e8);
}


// ===== 00712558  thunk_FUN_0073a174 =====

void thunk_FUN_0073a174(void)

{
  FUN_0073a174();
  return;
}


// ===== 00712560  FUN_00712560 =====

void FUN_00712560(void *param_1)

{
  thunk_FUN_0073a174();
  free(param_1);
  return;
}


// ===== 0071258c  FUN_0071258c =====

char * FUN_0071258c(void)

{
  return "bad_optional_access";
}


// ===== 0071259c  FUN_0071259c =====

void FUN_0071259c(long *param_1,byte *param_2)

{
  size_t sVar1;
  size_t *psVar2;
  byte *__s;
  
  *param_1 = (long)(PTR_DAT_007a37c8 + 0x10);
  __s = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    __s = param_2 + 1;
  }
  sVar1 = strlen((char *)__s);
                    /* try { // try from 007125e0 to 007125e7 has its CatchHandler @ 0071261c */
  psVar2 = (size_t *)FUN_00759c3c(sVar1 + 0x19);
  *psVar2 = sVar1;
  psVar2[1] = sVar1;
  *(undefined4 *)(psVar2 + 2) = 0;
  memcpy(psVar2 + 3,__s,sVar1 + 1);
  param_1[1] = (long)(psVar2 + 3);
  return;
}


// ===== 00712630  FUN_00712630 =====

void FUN_00712630(long *param_1,char *param_2)

{
  size_t sVar1;
  size_t *psVar2;
  
  *param_1 = (long)(PTR_DAT_007a37c8 + 0x10);
  sVar1 = strlen(param_2);
                    /* try { // try from 00712668 to 0071266f has its CatchHandler @ 007126a4 */
  psVar2 = (size_t *)FUN_00759c3c(sVar1 + 0x19);
  *psVar2 = sVar1;
  psVar2[1] = sVar1;
  *(undefined4 *)(psVar2 + 2) = 0;
  memcpy(psVar2 + 3,param_2,sVar1 + 1);
  param_1[1] = (long)(psVar2 + 3);
  return;
}


// ===== 007126b8  FUN_007126b8 =====

void FUN_007126b8(long *param_1,byte *param_2)

{
  size_t sVar1;
  size_t *psVar2;
  byte *__s;
  
  *param_1 = (long)(PTR_DAT_007a37d0 + 0x10);
  __s = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    __s = param_2 + 1;
  }
  sVar1 = strlen((char *)__s);
                    /* try { // try from 007126fc to 00712703 has its CatchHandler @ 00712738 */
  psVar2 = (size_t *)FUN_00759c3c(sVar1 + 0x19);
  *psVar2 = sVar1;
  psVar2[1] = sVar1;
  *(undefined4 *)(psVar2 + 2) = 0;
  memcpy(psVar2 + 3,__s,sVar1 + 1);
  param_1[1] = (long)(psVar2 + 3);
  return;
}


// ===== 0071274c  FUN_0071274c =====

void FUN_0071274c(long *param_1,char *param_2)

{
  size_t sVar1;
  size_t *psVar2;
  
  *param_1 = (long)(PTR_DAT_007a37d0 + 0x10);
  sVar1 = strlen(param_2);
                    /* try { // try from 00712784 to 0071278b has its CatchHandler @ 007127c0 */
  psVar2 = (size_t *)FUN_00759c3c(sVar1 + 0x19);
  *psVar2 = sVar1;
  psVar2[1] = sVar1;
  *(undefined4 *)(psVar2 + 2) = 0;
  memcpy(psVar2 + 3,param_2,sVar1 + 1);
  param_1[1] = (long)(psVar2 + 3);
  return;
}


// ===== 007127d4  FUN_007127d4 =====

void FUN_007127d4(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 8);
  *param_1 = &PTR_FUN_0079dd98;
  param_1[1] = lVar1;
  FUN_00755bf0(1,lVar1 + -8);
  return;
}


// ===== 0071280c  FUN_0071280c =====

void FUN_0071280c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00753a74(0x10);
                    /* try { // try from 0071282c to 00712833 has its CatchHandler @ 0071284c */
  FUN_0071274c(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(uVar1,PTR_PTR_007a1030,PTR_FUN_007a1038);
}


// ===== 00712860  FUN_00712860 =====

ulong * FUN_00712860(ulong *param_1,ulong param_2,ulong param_3,byte *param_4,ulong param_5)

{
  byte *__dest;
  ulong uVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong __n;
  size_t __n_00;
  
  bVar3 = (byte)*param_1;
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = param_1[1];
  }
  uVar4 = uVar1 - param_2;
  if (uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0030b8f4(param_1);
  }
  __n = uVar4;
  if (param_3 <= uVar4) {
    __n = param_3;
  }
  lVar2 = 0x16;
  if ((bVar3 & 1) != 0) {
    lVar2 = (*param_1 & 0xfffffffffffffffe) - 1;
  }
  if ((__n - uVar1) + lVar2 < param_5) {
    FUN_00712a34(param_1,lVar2,((uVar1 + param_5) - lVar2) - __n,uVar1,param_2,__n,param_5,param_4);
    return param_1;
  }
  pbVar6 = (byte *)param_1[2];
  if ((*param_1 & 1) == 0) {
    pbVar6 = (byte *)((long)param_1 + 1);
  }
  uVar5 = param_5;
  if ((param_5 != __n) && (uVar5 = __n, param_3 < uVar4)) {
    uVar5 = param_5 - __n;
    __n_00 = uVar4 - __n;
    __dest = pbVar6 + param_2;
    if (param_5 < __n) {
      if (param_5 != 0) {
        memmove(__dest,param_4,param_5);
      }
      memmove(__dest + param_5,__dest + __n,__n_00);
      bVar3 = (byte)*param_1;
      goto joined_r0x007129f8;
    }
    if ((param_4 < pbVar6 + uVar1) && (__dest + 1 <= param_4)) {
      if (param_4 < __dest + __n) {
        if (param_3 != 0) {
          memmove(__dest,param_4,__n);
        }
        param_2 = __n + param_2;
        param_4 = param_4 + param_5;
        __n = 0;
        param_5 = uVar5;
      }
      else {
        param_4 = param_4 + uVar5;
      }
    }
    memmove(pbVar6 + param_5 + param_2,pbVar6 + __n + param_2,__n_00);
    uVar5 = __n;
  }
  if (param_5 != 0) {
    memmove(pbVar6 + param_2,param_4,param_5);
  }
  bVar3 = (byte)*param_1;
  uVar5 = param_5 - uVar5;
joined_r0x007129f8:
  uVar5 = uVar5 + uVar1;
  if ((bVar3 & 1) == 0) {
    *(byte *)param_1 = (byte)((int)uVar5 << 1);
  }
  else {
    param_1[1] = uVar5;
  }
  pbVar6[uVar5] = 0;
  return param_1;
}


// ===== 00712a34  FUN_00712a34 =====

void FUN_00712a34(ulong *param_1,ulong param_2,ulong param_3,long param_4,size_t param_5,
                 long param_6,size_t param_7,void *param_8)

{
  ulong uVar1;
  size_t __n;
  void *__dest;
  byte *__src;
  ulong uVar2;
  
  if (param_3 <= -param_2 - 10) {
    __src = (byte *)param_1[2];
    if ((*param_1 & 1) == 0) {
      __src = (byte *)((long)param_1 + 1);
    }
    if (param_2 < 0x7ffffffffffffff3) {
      uVar1 = param_3 + param_2;
      if (param_3 + param_2 <= param_2 * 2) {
        uVar1 = param_2 * 2;
      }
      if (uVar1 < 0x17) {
        uVar2 = 0x17;
      }
      else {
        uVar2 = (uVar1 & 0xfffffffffffffff8) + 8;
        if ((uVar1 | 7) != 0x17) {
          uVar2 = uVar1 | 7;
        }
        uVar2 = uVar2 + 1;
      }
    }
    else {
      uVar2 = 0xfffffffffffffff7;
    }
    __dest = (void *)FUN_00759c3c(uVar2);
    if (param_5 != 0) {
      memmove(__dest,__src,param_5);
    }
    if (param_7 != 0) {
      memcpy((void *)((long)__dest + param_5),param_8,param_7);
    }
    __n = param_4 - (param_6 + param_5);
    if (__n != 0) {
      memmove((void *)((long)__dest + param_7 + param_5),__src + param_6 + param_5,__n);
    }
    if (param_2 != 0x16) {
      free(__src);
    }
    uVar1 = param_7 + param_5 + __n;
    *param_1 = uVar2 | 1;
    param_1[1] = uVar1;
    param_1[2] = (ulong)__dest;
    *(undefined1 *)((long)__dest + uVar1) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_002fb400(param_1);
}


// ===== 00712b88  FUN_00712b88 =====

void FUN_00712b88(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  size_t sVar1;
  
  sVar1 = strlen(param_4);
  FUN_00712860(param_1,param_2,param_3,param_4,sVar1);
  return;
}


// ===== 00712bdc  FUN_00712bdc =====

void FUN_00712bdc(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    return;
  }
  free(*(void **)(param_1 + 0x10));
  return;
}


// ===== 00712bf4  FUN_00712bf4 =====

byte * FUN_00712bf4(byte *param_1,ulong param_2)

{
  ulong uVar1;
  byte bVar2;
  byte *pbVar3;
  
  bVar2 = *param_1;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (param_2 < uVar1) {
    pbVar3 = *(byte **)(param_1 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar3 = param_1 + 1;
    }
    return pbVar3 + param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0030b8f4();
}


// ===== 00712c38  FUN_00712c38 =====

ulong * FUN_00712c38(ulong *param_1,ulong param_2,byte *param_3,ulong param_4)

{
  byte *__src;
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  byte *pbVar5;
  
  bVar4 = (byte)*param_1;
  uVar1 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar1 = param_1[1];
  }
  if (param_2 <= uVar1) {
    lVar2 = 0x16;
    if ((bVar4 & 1) != 0) {
      lVar2 = (*param_1 & 0xfffffffffffffffe) - 1;
    }
    if (lVar2 - uVar1 < param_4) {
      FUN_00712a34(param_1,lVar2,(uVar1 + param_4) - lVar2,uVar1,param_2,0,param_4,param_3);
    }
    else if (param_4 != 0) {
      pbVar5 = (byte *)param_1[2];
      if ((*param_1 & 1) == 0) {
        pbVar5 = (byte *)((long)param_1 + 1);
      }
      if (uVar1 - param_2 != 0) {
        __src = pbVar5 + param_2;
        uVar3 = param_4;
        if (pbVar5 + uVar1 <= param_3 || param_3 < __src) {
          uVar3 = 0;
        }
        param_3 = param_3 + uVar3;
        memmove(__src + param_4,__src,uVar1 - param_2);
      }
      memmove(pbVar5 + param_2,param_3,param_4);
      uVar1 = uVar1 + param_4;
      if ((*param_1 & 1) == 0) {
        *(byte *)param_1 = (byte)((int)uVar1 << 1);
      }
      else {
        param_1[1] = uVar1;
      }
      pbVar5[uVar1] = 0;
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0030b8f4(param_1);
}


// ===== 00712d54  FUN_00712d54 =====

void FUN_00712d54(void)

{
  FUN_00712d5c();
  return;
}


// ===== 00712d5c  FUN_00712d5c =====

ulong * FUN_00712d5c(ulong *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  byte *__dest;
  uint uVar2;
  ulong uVar3;
  byte *__ptr;
  ulong uVar4;
  
  uVar3 = *param_1;
  uVar1 = *param_1;
  uVar2 = (uint)uVar3 & 0xff;
  uVar4 = 0x16;
  if ((uVar1 & 1) != 0) {
    uVar4 = (uVar3 & 0xfffffffffffffffe) - 1;
  }
  if (uVar4 < param_3) {
    if (-uVar4 - 10 < param_3 - uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(param_1);
    }
    __ptr = (byte *)param_1[2];
    if ((uVar3 & 1) == 0) {
      __ptr = (byte *)((long)param_1 + 1);
    }
    if (uVar4 < 0x7ffffffffffffff3) {
      uVar3 = param_3;
      if (param_3 <= uVar4 * 2) {
        uVar3 = uVar4 * 2;
      }
      if (uVar3 < 0x17) {
        uVar4 = 0x17;
      }
      else {
        uVar4 = (uVar3 & 0xfffffffffffffff8) + 8;
        if ((uVar3 | 7) != 0x17) {
          uVar4 = uVar3 | 7;
        }
        uVar4 = uVar4 + 1;
      }
    }
    else {
      uVar4 = 0xfffffffffffffff7;
    }
    __dest = (byte *)FUN_00759c3c(uVar4);
    memcpy(__dest,param_2,param_3);
    if ((uVar1 & 1) != 0) {
      free(__ptr);
    }
    param_1[2] = (ulong)__dest;
    *param_1 = uVar4 | 1;
  }
  else {
    __dest = (byte *)param_1[2];
    if ((uVar3 & 1) == 0) {
      __dest = (byte *)((long)param_1 + 1);
    }
    if (param_3 != 0) {
      memmove(__dest,param_2,param_3);
      uVar2 = (uint)(byte)*param_1;
    }
    if ((uVar2 & 1) == 0) {
      *(byte *)param_1 = (byte)((int)param_3 << 1);
      goto LAB_00712e7c;
    }
  }
  param_1[1] = param_3;
LAB_00712e7c:
  __dest[param_3] = 0;
  return param_1;
}


// ===== 00712ea8  FUN_00712ea8 =====

void FUN_00712ea8(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  byte *__dest;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte *__src;
  uint uVar7;
  
  if (0xfffffffffffffff7 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(param_1);
  }
  uVar5 = *param_1;
  uVar4 = (uVar5 & 0xfffffffffffffffe) - 1;
  uVar1 = 0x16;
  if ((*param_1 & 1) != 0) {
    uVar1 = uVar4;
  }
  if (param_2 <= uVar1) {
    return;
  }
  uVar1 = uVar5 >> 1 & 0x7f;
  if ((uVar5 & 1) != 0) {
    uVar1 = param_1[1];
  }
  uVar2 = uVar1;
  if (uVar1 <= param_2) {
    uVar2 = param_2;
  }
  if (uVar2 < 0x17) {
    if ((uVar5 & 1) == 0) {
      return;
    }
    uVar6 = 0x16;
  }
  else {
    uVar6 = (uVar2 & 0xfffffffffffffff8) + 8;
    if ((uVar2 | 7) != 0x17) {
      uVar6 = uVar2 | 7;
    }
    uVar2 = 0x16;
    if ((uVar5 & 1) != 0) {
      uVar2 = uVar4;
    }
    if (uVar6 == uVar2) {
      return;
    }
    if (0x16 < uVar6) {
      uVar4 = uVar6 + 1;
      if (uVar2 < uVar6) {
        __dest = (byte *)FUN_00759c3c(uVar4);
      }
      else {
                    /* try { // try from 00712fdc to 00712fe3 has its CatchHandler @ 0071300c */
        __dest = (byte *)FUN_00759c3c(uVar4);
      }
      __src = (byte *)param_1[2];
      uVar7 = (uint)uVar5 & 1;
      bVar3 = true;
      if ((uVar5 & 1) == 0) {
        __src = (byte *)((long)param_1 + 1);
      }
      goto joined_r0x00712ffc;
    }
  }
  __src = (byte *)param_1[2];
  bVar3 = false;
  __dest = (byte *)((long)param_1 + 1);
  uVar4 = uVar6 + 1;
  uVar7 = 1;
joined_r0x00712ffc:
  if (uVar1 != 0xffffffffffffffff) {
    memmove(__dest,__src,uVar1 + 1);
  }
  if (uVar7 != 0) {
    free(__src);
  }
  if (bVar3) {
    param_1[2] = (ulong)__dest;
    *param_1 = uVar4 | 1;
    param_1[1] = uVar1;
  }
  else {
    *(byte *)param_1 = (byte)((int)uVar1 << 1);
  }
  return;
}


// ===== 0071302c  FUN_0071302c =====

ulong * FUN_0071302c(ulong *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *param_1;
  lVar2 = 0x16;
  if ((*param_1 & 1) != 0) {
    lVar2 = (uVar3 & 0xfffffffffffffffe) - 1;
  }
  uVar1 = uVar3 >> 1 & 0x7f;
  if ((uVar3 & 1) != 0) {
    uVar1 = param_1[1];
  }
  if (lVar2 - uVar1 < param_3) {
    FUN_00712a34(param_1,lVar2,(param_3 - lVar2) + uVar1,uVar1,uVar1,0,param_3);
  }
  else if (param_3 != 0) {
    uVar4 = param_1[2];
    if ((uVar3 & 1) == 0) {
      uVar4 = (long)param_1 + 1;
    }
    memmove((void *)(uVar4 + uVar1),param_2,param_3);
    uVar1 = uVar1 + param_3;
    if ((*param_1 & 1) == 0) {
      *(char *)param_1 = (char)((int)uVar1 << 1);
    }
    else {
      param_1[1] = uVar1;
    }
    *(undefined1 *)(uVar4 + uVar1) = 0;
  }
  return param_1;
}


// ===== 00713100  FUN_00713100 =====

long FUN_00713100(byte *param_1,uint param_2,ulong param_3)

{
  ulong uVar1;
  byte bVar2;
  void *pvVar3;
  long lVar4;
  byte *pbVar5;
  
  bVar2 = *param_1;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (param_3 <= uVar1 && uVar1 - param_3 != 0) {
    pbVar5 = *(byte **)(param_1 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    pvVar3 = memchr(pbVar5 + param_3,param_2 & 0xff,uVar1 - param_3);
    lVar4 = (long)pvVar3 - (long)pbVar5;
    if (pvVar3 == (void *)0x0) {
      lVar4 = -1;
    }
    return lVar4;
  }
  return -1;
}


// ===== 00713170  FUN_00713170 =====

void FUN_00713170(undefined8 param_1,undefined8 param_2,char *param_3)

{
  size_t sVar1;
  
  sVar1 = strlen(param_3);
  FUN_00712c38(param_1,param_2,param_3,sVar1);
  return;
}


// ===== 007131bc  FUN_007131bc =====

void FUN_007131bc(ulong *param_1,ulong param_2,ulong param_3,long param_4,size_t param_5,
                 long param_6,long param_7)

{
  ulong uVar1;
  size_t __n;
  void *__dest;
  byte *__src;
  ulong uVar2;
  
  if (param_3 <= -param_2 - 9) {
    __src = (byte *)param_1[2];
    if ((*param_1 & 1) == 0) {
      __src = (byte *)((long)param_1 + 1);
    }
    if (param_2 < 0x7ffffffffffffff3) {
      uVar1 = param_3 + param_2;
      if (param_3 + param_2 <= param_2 * 2) {
        uVar1 = param_2 * 2;
      }
      if (uVar1 < 0x17) {
        uVar2 = 0x17;
      }
      else {
        uVar2 = (uVar1 & 0xfffffffffffffff8) + 8;
        if ((uVar1 | 7) != 0x17) {
          uVar2 = uVar1 | 7;
        }
        uVar2 = uVar2 + 1;
      }
    }
    else {
      uVar2 = 0xfffffffffffffff7;
    }
    __dest = (void *)FUN_00759c3c(uVar2);
    if (param_5 != 0) {
      memmove(__dest,__src,param_5);
    }
    __n = param_4 - (param_6 + param_5);
    if (__n != 0) {
      memmove((void *)((long)__dest + param_7 + param_5),__src + param_6 + param_5,__n);
    }
    if (param_2 != 0x16) {
      free(__src);
    }
    param_1[2] = (ulong)__dest;
    *param_1 = uVar2 | 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_002fb400(param_1);
}


// ===== 007132e8  FUN_007132e8 =====

void FUN_007132e8(ulong *param_1,undefined1 param_2)

{
  byte bVar1;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  void *__src;
  ulong uVar4;
  
  bVar1 = (byte)*param_1;
  if ((bVar1 & 1) == 0) {
    if (bVar1 != 0x2c) {
      uVar4 = (ulong)(bVar1 >> 1);
      uVar3 = (long)param_1 + 1;
      *(byte *)param_1 = bVar1 + 2;
      goto LAB_007133f0;
    }
    __src = (void *)((long)param_1 + 1);
    uVar3 = 0x16;
LAB_00713358:
    uVar2 = uVar3 * 2;
    if (uVar2 < uVar3 + 1) {
      uVar2 = uVar3 + 1;
    }
    if (uVar2 < 0x17) {
      uVar4 = 0x17;
    }
    else {
      uVar4 = (uVar2 & 0xfffffffffffffff8) + 8;
      if ((uVar2 | 7) != 0x17) {
        uVar4 = uVar2 | 7;
      }
      uVar4 = uVar4 + 1;
    }
LAB_007133b0:
    __dest = (void *)FUN_00759c3c(uVar4);
    memmove(__dest,__src,uVar3);
    if (uVar3 != 0x16) {
      free(__src);
    }
    param_1[2] = (ulong)__dest;
    *param_1 = uVar4 | 1;
    uVar4 = uVar3;
  }
  else {
    uVar4 = param_1[1];
    uVar3 = (*param_1 & 0xfffffffffffffffe) - 1;
    if (uVar4 == uVar3) {
      if ((*param_1 & 0xfffffffffffffffe) == 0xfffffffffffffff8) {
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(param_1);
      }
      __src = (void *)param_1[2];
      if (uVar3 < 0x7ffffffffffffff3) goto LAB_00713358;
      uVar4 = 0xfffffffffffffff7;
      goto LAB_007133b0;
    }
  }
  uVar3 = param_1[2];
  param_1[1] = uVar4 + 1;
LAB_007133f0:
  *(undefined1 *)(uVar3 + uVar4) = param_2;
  ((undefined1 *)(uVar3 + uVar4))[1] = 0;
  return;
}


// ===== 0071341c  FUN_0071341c =====

ulong * FUN_0071341c(ulong *param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  ulong uVar3;
  void *__dest;
  void *__src;
  ulong uVar4;
  
  if (param_2 != 0) {
    uVar2 = *param_1;
    uVar3 = *param_1;
    uVar4 = 0x16;
    if ((uVar3 & 1) != 0) {
      uVar4 = (uVar2 & 0xfffffffffffffffe) - 1;
    }
    __n = uVar2 >> 1 & 0x7f;
    if ((uVar2 & 1) != 0) {
      __n = param_1[1];
    }
    if (uVar4 - __n < param_2) {
      uVar1 = __n + param_2;
      if (-uVar4 - 9 < uVar1 - uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(param_1);
      }
      __src = (void *)param_1[2];
      if ((uVar2 & 1) == 0) {
        __src = (void *)((long)param_1 + 1);
      }
      if (uVar4 < 0x7ffffffffffffff3) {
        if (uVar1 <= uVar4 * 2) {
          uVar1 = uVar4 * 2;
        }
        if (uVar1 < 0x17) {
          uVar4 = 0x17;
        }
        else {
          uVar4 = (uVar1 & 0xfffffffffffffff8) + 8;
          if ((uVar1 | 7) != 0x17) {
            uVar4 = uVar1 | 7;
          }
          uVar4 = uVar4 + 1;
        }
      }
      else {
        uVar4 = 0xfffffffffffffff7;
      }
      __dest = (void *)FUN_00759c3c(uVar4);
      if (__n != 0) {
        memmove(__dest,__src,__n);
      }
      if ((uVar3 & 1) != 0) {
        free(__src);
      }
      param_1[1] = __n;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar4 | 1;
    }
    else {
      __dest = (void *)param_1[2];
      if ((uVar2 & 1) == 0) {
        __dest = (void *)((long)param_1 + 1);
      }
    }
    uVar4 = __n + param_2;
    memset((void *)((long)__dest + __n),param_3,param_2);
    if ((*param_1 & 1) == 0) {
      *(char *)param_1 = (char)((int)uVar4 << 1);
    }
    else {
      param_1[1] = uVar4;
    }
    *(undefined1 *)((long)__dest + uVar4) = 0;
  }
  return param_1;
}


// ===== 007135a0  FUN_007135a0 =====

ulong FUN_007135a0(byte *param_1,byte param_2,ulong param_3)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  pbVar1 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar1 = param_1 + 1;
    uVar3 = (ulong)(*param_1 >> 1);
  }
  if (uVar3 != 0) {
    if (param_3 < uVar3) {
      uVar3 = param_3 + 1;
    }
    while (uVar3 != 0) {
      lVar2 = uVar3 - 1;
      uVar3 = uVar3 - 1;
      if (pbVar1[lVar2] == param_2) {
        return uVar3;
      }
    }
  }
  return 0xffffffffffffffff;
}


// ===== 007135f0  FUN_007135f0 =====

byte * FUN_007135f0(byte *param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  byte *pbVar3;
  
  bVar2 = *param_1;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (param_2 <= uVar1) {
    if (param_3 == -1) {
      if ((bVar2 & 1) == 0) {
        pbVar3 = param_1 + 1;
        *param_1 = (byte)((int)param_2 << 1);
      }
      else {
        pbVar3 = *(byte **)(param_1 + 0x10);
        *(ulong *)(param_1 + 8) = param_2;
      }
      pbVar3[param_2] = 0;
    }
    else {
      FUN_00713668();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0030b8f4();
}


// ===== 00713668  FUN_00713668 =====

void FUN_00713668(byte *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_3 != 0) {
    bVar4 = *param_1;
    uVar2 = *(ulong *)(param_1 + 8);
    pbVar3 = *(byte **)(param_1 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar3 = param_1 + 1;
      uVar2 = (ulong)(bVar4 >> 1);
    }
    uVar5 = uVar2 - param_2;
    uVar1 = uVar5;
    if (param_3 <= uVar5) {
      uVar1 = param_3;
    }
    if (param_3 < uVar5) {
      memmove(pbVar3 + param_2,pbVar3 + param_2 + uVar1,uVar5 - uVar1);
      bVar4 = *param_1;
    }
    lVar6 = uVar2 - uVar1;
    if ((bVar4 & 1) == 0) {
      *param_1 = (byte)((int)lVar6 << 1);
    }
    else {
      *(long *)(param_1 + 8) = lVar6;
    }
    pbVar3[lVar6] = 0;
  }
  return;
}


// ===== 007136fc  FUN_007136fc =====

ulong * FUN_007136fc(ulong *param_1,byte *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong __n;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  byte *pbVar6;
  
  bVar4 = *param_2;
  uVar1 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (param_3 <= uVar1) {
    uVar3 = *param_1;
    pbVar6 = *(byte **)(param_2 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar6 = param_2 + 1;
    }
    __n = uVar1 - param_3;
    if (param_4 <= uVar1 - param_3) {
      __n = param_4;
    }
    lVar2 = 0x16;
    if ((*param_1 & 1) != 0) {
      lVar2 = (uVar3 & 0xfffffffffffffffe) - 1;
    }
    uVar1 = uVar3 >> 1 & 0x7f;
    if ((uVar3 & 1) != 0) {
      uVar1 = param_1[1];
    }
    if (lVar2 - uVar1 < __n) {
      FUN_00712a34(param_1,lVar2,(__n - lVar2) + uVar1,uVar1,uVar1,0,__n,pbVar6 + param_3);
    }
    else if (__n != 0) {
      uVar5 = param_1[2];
      if ((uVar3 & 1) == 0) {
        uVar5 = (long)param_1 + 1;
      }
      memmove((void *)(uVar5 + uVar1),pbVar6 + param_3,__n);
      uVar1 = uVar1 + __n;
      if ((*param_1 & 1) == 0) {
        *(char *)param_1 = (char)((int)uVar1 << 1);
      }
      else {
        param_1[1] = uVar1;
      }
      *(undefined1 *)(uVar5 + uVar1) = 0;
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0030b8f4(param_1);
}


// ===== 00713804  FUN_00713804 =====

uint FUN_00713804(byte *param_1,char *param_2)

{
  size_t __n;
  ulong uVar1;
  byte *__s1;
  uint uVar2;
  size_t sVar3;
  uint uVar4;
  
  sVar3 = strlen(param_2);
  if (sVar3 != 0xffffffffffffffff) {
    uVar1 = *(ulong *)(param_1 + 8);
    __s1 = *(byte **)(param_1 + 0x10);
    if ((*param_1 & 1) == 0) {
      __s1 = param_1 + 1;
      uVar1 = (ulong)(*param_1 >> 1);
    }
    __n = uVar1;
    if (sVar3 <= uVar1) {
      __n = sVar3;
    }
    uVar4 = (uint)(sVar3 < uVar1);
    if (sVar3 > uVar1) {
      uVar4 = 0xffffffff;
    }
    uVar2 = memcmp(__s1,param_2,__n);
    if (uVar2 != 0) {
      uVar4 = uVar2;
    }
    return uVar4;
  }
                    /* try { // try from 00713878 to 0071387f has its CatchHandler @ 00713880 */
                    /* WARNING: Subroutine does not return */
  FUN_0030b8f4(param_1);
}


// ===== 00713884  FUN_00713884 =====

uint FUN_00713884(byte *param_1,ulong param_2,ulong param_3,char *param_4)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  byte bVar3;
  uint uVar4;
  size_t sVar5;
  uint uVar6;
  byte *pbVar7;
  
  sVar5 = strlen(param_4);
  bVar3 = *param_1;
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if ((sVar5 != 0xffffffffffffffff) && (param_2 <= uVar1)) {
    pbVar7 = *(byte **)(param_1 + 0x10);
    uVar2 = uVar1 - param_2;
    if (param_3 <= uVar1 - param_2) {
      uVar2 = param_3;
    }
    if ((bVar3 & 1) == 0) {
      pbVar7 = param_1 + 1;
    }
    __n = uVar2;
    if (sVar5 <= uVar2) {
      __n = sVar5;
    }
    uVar6 = (uint)(sVar5 < uVar2);
    if (sVar5 > uVar2) {
      uVar6 = 0xffffffff;
    }
    uVar4 = memcmp(pbVar7 + param_2,param_4,__n);
    if (uVar4 != 0) {
      uVar6 = uVar4;
    }
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0030b8f4(param_1);
}


// ===== 00713928  FUN_00713928 =====

byte * FUN_00713928(byte *param_1,ulong param_2)

{
  ulong uVar1;
  byte bVar2;
  byte *pbVar3;
  
  bVar2 = *param_1;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (param_2 < uVar1) {
    pbVar3 = *(byte **)(param_1 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar3 = param_1 + 1;
    }
    return pbVar3 + param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0030b8f4();
}


// ===== 0071396c  FUN_0071396c =====

void FUN_0071396c(void)

{
  FUN_00713974();
  return;
}


// ===== 00713974  FUN_00713974 =====

void FUN_00713974(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  FUN_00712d5c(param_1,param_2,sVar1);
  return;
}


// ===== 007139b0  FUN_007139b0 =====

void FUN_007139b0(byte *param_1,byte *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 != param_2) {
    bVar3 = *param_2;
    if ((*param_1 & 1) != 0) {
      uVar1 = *(ulong *)(param_2 + 8);
      pbVar2 = *(byte **)(param_2 + 0x10);
      if ((bVar3 & 1) == 0) {
        pbVar2 = param_2 + 1;
        uVar1 = (ulong)(bVar3 >> 1);
      }
      FUN_00713ab8(param_1,pbVar2,uVar1);
      return;
    }
    if ((bVar3 & 1) != 0) {
      FUN_00713a04(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
      return;
    }
    uVar5 = *(undefined8 *)(param_2 + 8);
    uVar4 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar5;
    *(undefined8 *)param_1 = uVar4;
  }
  return;
}


// ===== 00713a04  FUN_00713a04 =====

long * FUN_00713a04(long *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  void *__dest;
  
  if (param_3 < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)param_3 << 1);
    if (param_3 != 0) {
      memmove(__dest,param_2,param_3);
    }
  }
  else {
    if (param_3 + 9 < 0x1f) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(param_1);
    }
    uVar1 = param_3;
    if (param_3 < 0x2d) {
      uVar1 = 0x2c;
    }
    __dest = (void *)FUN_00759c3c((uVar1 | 7) + 1);
    memcpy(__dest,param_2,param_3);
    param_1[1] = param_3;
    param_1[2] = (long)__dest;
    *param_1 = (uVar1 | 7) + 2;
  }
  *(undefined1 *)((long)__dest + param_3) = 0;
  return param_1;
}


// ===== 00713ab8  FUN_00713ab8 =====

ulong * FUN_00713ab8(ulong *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  void *__ptr;
  void *__dest;
  
  uVar2 = *param_1 & 0xfffffffffffffffe;
  if (param_3 < uVar2) {
    __dest = (void *)param_1[2];
    param_1[1] = param_3;
    if (param_3 != 0) {
      memmove(__dest,param_2,param_3);
    }
  }
  else {
    if (-uVar2 - 9 < (param_3 - uVar2) + 1) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(param_1);
    }
    __ptr = (void *)param_1[2];
    if ((*param_1 & 1) == 0) {
      __ptr = (void *)((long)param_1 + 1);
    }
    if (uVar2 - 1 < 0x7ffffffffffffff3) {
      uVar2 = (uVar2 - 1) * 2;
      uVar1 = param_3;
      if (param_3 <= uVar2) {
        uVar1 = uVar2;
      }
      if (uVar1 < 0x17) {
        uVar2 = 0x17;
      }
      else {
        uVar2 = (uVar1 & 0xfffffffffffffff8) + 8;
        if ((uVar1 | 7) != 0x17) {
          uVar2 = uVar1 | 7;
        }
        uVar2 = uVar2 + 1;
      }
    }
    else {
      uVar2 = 0xfffffffffffffff7;
    }
    __dest = (void *)FUN_00759c3c(uVar2);
    if (param_3 != 0) {
      memcpy(__dest,param_2,param_3);
    }
    free(__ptr);
    param_1[1] = param_3;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar2 | 1;
  }
  *(undefined1 *)((long)__dest + param_3) = 0;
  return param_1;
}


// ===== 00713bdc  FUN_00713bdc =====

ulong * FUN_00713bdc(ulong *param_1,char *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  size_t __n;
  ulong uVar4;
  
  __n = strlen(param_2);
  uVar3 = *param_1;
  lVar2 = 0x16;
  if ((*param_1 & 1) != 0) {
    lVar2 = (uVar3 & 0xfffffffffffffffe) - 1;
  }
  uVar1 = uVar3 >> 1 & 0x7f;
  if ((uVar3 & 1) != 0) {
    uVar1 = param_1[1];
  }
  if (lVar2 - uVar1 < __n) {
    FUN_00712a34(param_1,lVar2,(__n - lVar2) + uVar1,uVar1,uVar1,0,__n,param_2);
  }
  else if (__n != 0) {
    uVar4 = param_1[2];
    if ((uVar3 & 1) == 0) {
      uVar4 = (long)param_1 + 1;
    }
    memmove((void *)(uVar4 + uVar1),param_2,__n);
    uVar1 = uVar1 + __n;
    if ((*param_1 & 1) == 0) {
      *(char *)param_1 = (char)((int)uVar1 << 1);
    }
    else {
      param_1[1] = uVar1;
    }
    *(undefined1 *)(uVar4 + uVar1) = 0;
  }
  return param_1;
}


// ===== 00713cc0  FUN_00713cc0 =====

void FUN_00713cc0(byte *param_1,ulong param_2)

{
  ulong uVar1;
  byte bVar2;
  
  bVar2 = *param_1;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 <= param_2 && param_2 - uVar1 != 0) {
    FUN_0071341c(param_1,param_2 - uVar1);
    return;
  }
  if ((bVar2 & 1) == 0) {
    *param_1 = (byte)((int)param_2 << 1);
    param_1[param_2 + 1] = 0;
    return;
  }
  *(ulong *)(param_1 + 8) = param_2;
  *(undefined1 *)(*(long *)(param_1 + 0x10) + param_2) = 0;
  return;
}


// ===== 00713d0c  FUN_00713d0c =====

void FUN_00713d0c(ulong *param_1,ulong param_2,ulong param_3,long param_4,long param_5,long param_6,
                 long param_7,void *param_8)

{
  ulong uVar1;
  byte *__src;
  void *__dest;
  ulong uVar2;
  size_t __n;
  
  if (param_3 <= 0x3ffffffffffffff6 - param_2) {
    __src = (byte *)((long)param_1 + 4);
    if ((*param_1 & 1) != 0) {
      __src = (byte *)param_1[2];
    }
    if (param_2 < 0x1ffffffffffffff3) {
      uVar1 = param_3 + param_2;
      if (param_3 + param_2 <= param_2 * 2) {
        uVar1 = param_2 * 2;
      }
      if (uVar1 < 5) {
        uVar2 = 5;
      }
      else {
        uVar2 = (uVar1 & 0xfffffffffffffffe) + 2;
        if ((uVar1 | 1) != 5) {
          uVar2 = uVar1 | 1;
        }
        uVar2 = uVar2 + 1;
        if (uVar2 >> 0x3e != 0) goto LAB_00713e88;
      }
    }
    else {
      uVar2 = 0x3ffffffffffffff7;
    }
    __dest = (void *)FUN_00759c3c(uVar2 << 2);
    __n = param_5 * 4;
    if (param_5 != 0) {
      memmove(__dest,__src,__n);
    }
    if (param_7 != 0) {
      memcpy((void *)((long)__dest + param_5 * 4),param_8,param_7 << 2);
    }
    param_4 = param_4 - (param_6 + param_5);
    if (param_4 != 0) {
      memmove((void *)((long)__dest + param_7 * 4 + __n),__src + param_6 * 4 + __n,param_4 * 4);
    }
    if (param_2 != 4) {
      free(__src);
    }
    uVar1 = param_7 + param_5 + param_4;
    *param_1 = uVar2 | 1;
    param_1[1] = uVar1;
    param_1[2] = (ulong)__dest;
    *(undefined4 *)((long)__dest + uVar1 * 4) = 0;
    return;
  }
  FUN_002f9e4c(param_1);
LAB_00713e88:
                    /* WARNING: Subroutine does not return */
  FUN_002f9ee0();
}


// ===== 00713e8c  FUN_00713e8c =====

void FUN_00713e8c(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    return;
  }
  free(*(void **)(param_1 + 0x10));
  return;
}


// ===== 00713ea4  FUN_00713ea4 =====

ulong * FUN_00713ea4(ulong *param_1,void *param_2,ulong param_3)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar5 = *param_1;
  uVar2 = 4;
  if ((*param_1 & 1) != 0) {
    uVar2 = (uVar5 & 0xfffffffffffffffe) - 1;
  }
  uVar4 = (uint)uVar5 & 0xff;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    pbVar1 = (byte *)((long)param_1 + 4);
    if ((uVar5 & 1) != 0) {
      pbVar1 = (byte *)param_1[2];
    }
    if (param_3 != 0) {
      memmove(pbVar1,param_2,param_3 << 2);
      uVar4 = (uint)(byte)*param_1;
    }
    if ((uVar4 & 1) == 0) {
      *(byte *)param_1 = (byte)((int)param_3 << 1);
    }
    else {
      param_1[1] = param_3;
    }
    pbVar1 = pbVar1 + param_3 * 4;
    pbVar1[0] = 0;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
  }
  else {
    uVar3 = uVar5 >> 1 & 0x7f;
    if ((uVar5 & 1) != 0) {
      uVar3 = param_1[1];
    }
    FUN_00713d0c(param_1,uVar2,param_3 - uVar2,uVar3,0,uVar3,param_3);
  }
  return param_1;
}


// ===== 00713f6c  FUN_00713f6c =====

void FUN_00713f6c(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  byte bVar2;
  byte *__src;
  ulong *puVar3;
  byte *__dest;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  undefined1 auVar8 [16];
  
  if (0x3ffffffffffffff7 < param_2) {
    auVar8 = FUN_002f9e4c();
    uVar5 = auVar8._8_8_;
    puVar3 = auVar8._0_8_;
    bVar2 = (byte)*puVar3;
    uVar1 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar1 = puVar3[1];
    }
    if (uVar5 < 5) {
      __dest = (byte *)((long)puVar3 + 4);
      bVar7 = 1;
      __src = (byte *)puVar3[2];
    }
    else {
      uVar6 = uVar5 + 1;
      uVar4 = 4;
      if ((bVar2 & 1) != 0) {
        uVar4 = (*puVar3 & 0xfffffffffffffffe) - 1;
      }
      if (uVar4 < uVar5) {
        if (uVar6 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_002f9ee0();
        }
        __dest = (byte *)FUN_00759c3c(uVar6 * 4);
      }
      else {
        if (uVar6 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_002f9ee0();
        }
        __dest = (byte *)FUN_00759c3c(uVar6 * 4);
      }
      bVar7 = bVar2 & 1;
      __src = (byte *)((long)puVar3 + 4);
      if ((bVar2 & 1) != 0) {
        __src = (byte *)puVar3[2];
      }
    }
    if (uVar1 != 0xffffffffffffffff) {
      memmove(__dest,__src,(uVar1 + 1) * 4);
    }
    if (bVar7 != 0) {
      free(__src);
    }
    if (uVar5 < 5) {
      *(byte *)puVar3 = (byte)((int)uVar1 << 1);
    }
    else {
      puVar3[2] = (ulong)__dest;
      *puVar3 = uVar5 + 1 | 1;
      puVar3[1] = uVar1;
    }
    return;
  }
  uVar5 = *param_1;
  uVar6 = (uVar5 & 0xfffffffffffffffe) - 1;
  uVar1 = 4;
  if ((*param_1 & 1) != 0) {
    uVar1 = uVar6;
  }
  if (uVar1 < param_2) {
    uVar1 = uVar5 >> 1 & 0x7f;
    if ((uVar5 & 1) != 0) {
      uVar1 = param_1[1];
    }
    if (uVar1 <= param_2) {
      uVar1 = param_2;
    }
    if (uVar1 < 5) {
      uVar4 = 4;
    }
    else {
      uVar4 = (uVar1 & 0xfffffffffffffffe) + 2;
      if ((uVar1 | 1) != 5) {
        uVar4 = uVar1 | 1;
      }
    }
    uVar1 = 4;
    if ((uVar5 & 1) != 0) {
      uVar1 = uVar6;
    }
    if (uVar4 != uVar1) {
      FUN_00714008();
      return;
    }
  }
  return;
}


// ===== 00714008  FUN_00714008 =====

void FUN_00714008(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte *__src;
  byte *__dest;
  byte bVar5;
  
  bVar4 = (byte)*param_1;
  uVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar2 = param_1[1];
  }
  if (param_2 < 5) {
    __dest = (byte *)((long)param_1 + 4);
    bVar5 = 1;
    __src = (byte *)param_1[2];
  }
  else {
    uVar1 = param_2 + 1;
    uVar3 = 4;
    if ((bVar4 & 1) != 0) {
      uVar3 = (*param_1 & 0xfffffffffffffffe) - 1;
    }
    if (uVar3 < param_2) {
      if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_002f9ee0();
      }
      __dest = (byte *)FUN_00759c3c(uVar1 * 4);
    }
    else {
      if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00714128 to 0071412b has its CatchHandler @ 0071412c */
        FUN_002f9ee0();
      }
                    /* try { // try from 00714100 to 00714103 has its CatchHandler @ 0071412c */
      __dest = (byte *)FUN_00759c3c(uVar1 * 4);
    }
    bVar5 = bVar4 & 1;
    __src = (byte *)((long)param_1 + 4);
    if ((bVar4 & 1) != 0) {
      __src = (byte *)param_1[2];
    }
  }
  if (uVar2 != 0xffffffffffffffff) {
    memmove(__dest,__src,(uVar2 + 1) * 4);
  }
  if (bVar5 != 0) {
    free(__src);
  }
  if (param_2 < 5) {
    *(byte *)param_1 = (byte)((int)uVar2 << 1);
  }
  else {
    param_1[2] = (ulong)__dest;
    *param_1 = param_2 + 1 | 1;
    param_1[1] = uVar2;
  }
  return;
}


// ===== 0071414c  FUN_0071414c =====

void FUN_0071414c(ulong *param_1,ulong param_2,ulong param_3,long param_4,long param_5,long param_6,
                 long param_7)

{
  byte *__src;
  ulong uVar1;
  void *__dest;
  size_t __n;
  ulong uVar2;
  
  uVar2 = 0x3ffffffffffffff7;
  if (param_3 <= 0x3ffffffffffffff7 - param_2) {
    __src = (byte *)((long)param_1 + 4);
    if ((*param_1 & 1) != 0) {
      __src = (byte *)param_1[2];
    }
    if (param_2 < 0x1ffffffffffffff3) {
      uVar1 = param_3 + param_2;
      if (param_3 + param_2 <= param_2 * 2) {
        uVar1 = param_2 * 2;
      }
      if (uVar1 < 5) {
        uVar2 = 5;
      }
      else {
        uVar2 = (uVar1 & 0xfffffffffffffffe) + 2;
        if ((uVar1 | 1) != 5) {
          uVar2 = uVar1 | 1;
        }
        uVar2 = uVar2 + 1;
        if (uVar2 >> 0x3e != 0) goto LAB_00714288;
      }
    }
    __dest = (void *)FUN_00759c3c(uVar2 << 2);
    __n = param_5 * 4;
    if (param_5 != 0) {
      memmove(__dest,__src,__n);
    }
    param_4 = param_4 - (param_6 + param_5);
    if (param_4 != 0) {
      memmove((void *)((long)__dest + param_7 * 4 + __n),__src + param_6 * 4 + __n,param_4 * 4);
    }
    if (param_2 != 4) {
      free(__src);
    }
    param_1[2] = (ulong)__dest;
    *param_1 = uVar2 | 1;
    return;
  }
  FUN_002f9e4c(param_1);
LAB_00714288:
                    /* WARNING: Subroutine does not return */
  FUN_002f9ee0();
}


// ===== 0071428c  FUN_0071428c =====

void FUN_0071428c(ulong *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  
  bVar2 = (byte)*param_1;
  if ((bVar2 & 1) == 0) {
    if (bVar2 != 8) {
      uVar3 = (ulong)(bVar2 >> 1);
      uVar4 = (long)param_1 + 4;
      *(byte *)param_1 = bVar2 + 2;
      goto LAB_00714318;
    }
    uVar4 = 4;
LAB_007142d4:
    uVar3 = uVar4;
    FUN_0071414c(param_1,uVar3,1,uVar3,uVar3,0,0);
  }
  else {
    uVar3 = param_1[1];
    uVar4 = (*param_1 & 0xfffffffffffffffe) - 1;
    if (uVar3 == uVar4) goto LAB_007142d4;
  }
  uVar4 = param_1[2];
  param_1[1] = uVar3 + 1;
LAB_00714318:
  puVar1 = (undefined4 *)(uVar4 + uVar3 * 4);
  *puVar1 = param_2;
  puVar1[1] = 0;
  return;
}


// ===== 00714334  FUN_00714334 =====

void FUN_00714334(void)

{
  FUN_0071433c();
  return;
}


// ===== 0071433c  FUN_0071433c =====

void FUN_0071433c(undefined8 param_1,wchar_t *param_2)

{
  size_t sVar1;
  
  sVar1 = wcslen(param_2);
  FUN_00713ea4(param_1,param_2,sVar1);
  return;
}


// ===== 00714378  FUN_00714378 =====

void FUN_00714378(byte *param_1,byte *param_2)

{
  ulong uVar1;
  byte bVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 != param_2) {
    bVar2 = *param_2;
    if ((*param_1 & 1) != 0) {
      uVar1 = (ulong)(bVar2 >> 1);
      pbVar3 = param_2 + 4;
      if ((bVar2 & 1) != 0) {
        uVar1 = *(ulong *)(param_2 + 8);
        pbVar3 = *(byte **)(param_2 + 0x10);
      }
      FUN_007144a4(param_1,pbVar3,uVar1);
      return;
    }
    if ((bVar2 & 1) != 0) {
      FUN_007143d0(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
      return;
    }
    uVar5 = *(undefined8 *)(param_2 + 8);
    uVar4 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar5;
    *(undefined8 *)param_1 = uVar4;
  }
  return;
}


// ===== 007143d0  FUN_007143d0 =====

long * FUN_007143d0(long *param_1,void *param_2,ulong param_3)

{
  void *__dest;
  ulong uVar1;
  
  if (param_3 < 5) {
    __dest = (void *)((long)param_1 + 4);
    *(char *)param_1 = (char)((int)param_3 << 1);
    if (param_3 != 0) {
      memmove(__dest,param_2,param_3 << 2);
    }
LAB_00714478:
    *(undefined4 *)((long)__dest + param_3 * 4) = 0;
    return param_1;
  }
  if (param_3 + 0xc000000000000009 < 0xc00000000000000d) {
    FUN_002f9e4c(param_1);
  }
  else {
    uVar1 = param_3;
    if (param_3 < 9) {
      uVar1 = 8;
    }
    uVar1 = uVar1 | 1;
    if (uVar1 < 0x3fffffffffffffff) {
      __dest = (void *)FUN_00759c3c(uVar1 * 4 + 4);
      memcpy(__dest,param_2,param_3 << 2);
      param_1[1] = param_3;
      param_1[2] = (long)__dest;
      *param_1 = uVar1 + 2;
      goto LAB_00714478;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_002f9ee0();
}


// ===== 007144a4  FUN_007144a4 =====

ulong * FUN_007144a4(ulong *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  void *__dest;
  
  uVar1 = *param_1 & 0xfffffffffffffffe;
  if (param_3 < uVar1) {
    __dest = (void *)param_1[2];
    param_1[1] = param_3;
    if (param_3 != 0) {
      memmove(__dest,param_2,param_3 << 2);
    }
    *(undefined4 *)((long)__dest + param_3 * 4) = 0;
  }
  else {
    FUN_00713d0c(param_1,uVar1 - 1,(param_3 - uVar1) + 1,param_1[1],0,param_1[1],param_3);
  }
  return param_1;
}


// ===== 00714534  FUN_00714534 =====

void FUN_00714534(ulong *param_1,char *param_2,byte *param_3)

{
  ulong uVar1;
  size_t __n;
  byte bVar2;
  size_t __n_00;
  void *__dest;
  uint uVar3;
  ulong uVar4;
  byte *__src;
  
  __n_00 = strlen(param_2);
  bVar2 = *param_3;
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_3 + 8);
  }
  uVar1 = __n + __n_00;
  if (uVar1 < 0xfffffffffffffff8) {
    if (uVar1 < 0x17) {
      __dest = (void *)0x0;
      *param_1 = 0;
      param_1[1] = 0;
      uVar3 = ((uint)uVar1 & 0xff) << 1;
      param_1[2] = 0;
      *(char *)param_1 = (char)uVar3;
    }
    else {
      uVar4 = (uVar1 & 0xfffffffffffffff8) + 8;
      if ((uVar1 | 7) != 0x17) {
        uVar4 = uVar1 | 7;
      }
      __dest = (void *)FUN_00759c3c(uVar4 + 1);
      uVar4 = uVar4 + 1 | 1;
      param_1[1] = uVar1;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar4;
      uVar3 = (uint)uVar4 & 0xff;
    }
    if ((uVar3 & 1) == 0) {
      __dest = (void *)((long)param_1 + 1);
    }
    if (__n_00 != 0) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__n != 0) {
      __src = *(byte **)(param_3 + 0x10);
      if ((bVar2 & 1) == 0) {
        __src = param_3 + 1;
      }
      memmove((void *)((long)__dest + __n_00),__src,__n);
    }
    *(undefined1 *)((long)((long)__dest + __n_00) + __n) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_002fb400(param_1);
}


// ===== 0071463c  FUN_0071463c =====

ulong FUN_0071463c(byte *param_1,long *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  byte *__nptr;
  undefined1 local_70;
  undefined4 local_6f;
  undefined1 local_6b;
  byte local_58;
  undefined4 local_57;
  char local_53 [6];
  char acStack_4d [2];
  undefined3 uStack_4b;
  undefined3 local_48;
  undefined5 uStack_45;
  char *local_28;
  
  local_70 = 8;
  local_6b = 0;
  local_6f = 0x696f7473;
  __nptr = *(byte **)(param_1 + 0x10);
  local_28 = (char *)0x0;
  if ((*param_1 & 1) == 0) {
    __nptr = param_1 + 1;
  }
  piVar4 = (int *)__errno();
  iVar2 = *piVar4;
  *piVar4 = 0;
  uVar5 = strtol((char *)__nptr,&local_28,param_3);
  iVar3 = *piVar4;
  *piVar4 = iVar2;
  if (iVar3 == 0x22) {
                    /* try { // try from 00714704 to 0071471b has its CatchHandler @ 00714784 */
    FUN_00714e0c(&local_58,&local_70,": out of range");
    puVar1 = (undefined4 *)CONCAT53(uStack_45,local_48);
    if ((local_58 & 1) == 0) {
      puVar1 = &local_57;
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0071472c to 0071472f has its CatchHandler @ 00714770 */
    FUN_0030b908(puVar1);
  }
  if ((long)local_28 - (long)__nptr == 0) {
                    /* try { // try from 00714730 to 00714737 has its CatchHandler @ 00714784 */
    FUN_00714d68(&local_70);
  }
  else {
    if (param_2 != (long *)0x0) {
      *param_2 = (long)local_28 - (long)__nptr;
    }
    if (uVar5 == (long)(int)uVar5) {
      FUN_00712bdc(&local_70);
      return uVar5 & 0xffffffff;
    }
  }
  local_58 = 0x24;
  uStack_45 = 0;
  local_57 = local_6f;
  local_53[0] = s___out_of_range_001ec7df[0];
  local_53[1] = s___out_of_range_001ec7df[1];
  local_53[2] = s___out_of_range_001ec7df[2];
  local_53[3] = s___out_of_range_001ec7df[3];
  local_53[4] = s___out_of_range_001ec7df[4];
  local_53[5] = s___out_of_range_001ec7df[5];
  acStack_4d[0] = s___out_of_range_001ec7df[6];
  acStack_4d[1] = s___out_of_range_001ec7df[7];
  uStack_4b = (undefined3)s___out_of_range_001ec7df._8_6_;
  local_48 = SUB63(s___out_of_range_001ec7df._8_6_,3);
                    /* try { // try from 00714768 to 0071476f has its CatchHandler @ 00714774 */
                    /* WARNING: Subroutine does not return */
  FUN_0030b908((ulong)&local_58 | 1);
}


// ===== 00714798  FUN_00714798 =====

void FUN_00714798(ulong *param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong __n;
  undefined1 local_3c [11];
  undefined1 uStack_31;
  
  puVar3 = local_3c;
  puVar4 = &uStack_31;
  if ((int)param_2 < 0) {
    puVar3 = (undefined1 *)((ulong)puVar3 | 1);
    param_2 = -param_2;
    local_3c[0] = 0x2d;
  }
  if ((9 < (long)puVar4 - (long)puVar3) ||
     (uVar2 = (uint)((0x20 - (int)LZCOUNT(param_2 | 1)) * 0x4d1) >> 0xc,
     (long)(ulong)((uVar2 - (param_2 < *(uint *)(&DAT_00211c28 + (ulong)uVar2 * 4))) + 1) <=
     (long)puVar4 - (long)puVar3)) {
    puVar4 = (undefined1 *)FUN_00714f18();
  }
  __n = (long)puVar4 - (long)local_3c;
  if (__n < 0xfffffffffffffff8) {
    if (__n < 0x17) {
      puVar3 = (undefined1 *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)__n << 1);
    }
    else {
      uVar1 = (__n & 0xfffffffffffffff8) + 8;
      if ((__n | 7) != 0x17) {
        uVar1 = __n | 7;
      }
      puVar3 = (undefined1 *)FUN_00759c3c(uVar1 + 1);
      param_1[1] = __n;
      param_1[2] = (ulong)puVar3;
      *param_1 = uVar1 + 1 | 1;
    }
    if (local_3c != puVar4) {
      memcpy(puVar3,local_3c,__n);
      puVar3 = puVar3 + __n;
    }
    *puVar3 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_002fb400(param_1);
}


// ===== 007148c0  FUN_007148c0 =====

void FUN_007148c0(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 *__dest;
  ulong __n;
  undefined1 local_44 [20];
  
  puVar5 = (undefined2 *)local_44;
  puVar6 = (undefined2 *)&stack0xffffffffffffffd0;
  if ((long)param_2 < 0) {
    puVar5 = (undefined2 *)((ulong)puVar5 | 1);
    param_2 = -param_2;
    local_44[0] = 0x2d;
  }
  if ((0x13 < (long)puVar6 - (long)puVar5) ||
     (uVar2 = (uint)((0x40 - (int)LZCOUNT(param_2 | 1)) * 0x4d1) >> 0xc,
     (long)(ulong)((uVar2 - (param_2 < *(ulong *)(&DAT_00211d18 + (ulong)uVar2 * 8))) + 1) <=
     (long)puVar6 - (long)puVar5)) {
    if (param_2 >> 0x20 == 0) {
      puVar6 = (undefined2 *)FUN_00714f18(puVar5,param_2 & 0xffffffff);
    }
    else {
      if (9999999999 < param_2) {
        puVar5 = (undefined2 *)FUN_00714f18(puVar5,param_2 / 10000000000);
        param_2 = param_2 % 10000000000;
      }
      puVar6 = puVar5 + 5;
      uVar2 = (int)param_2 + (int)(param_2 / 100000000) * -100000000;
      uVar3 = uVar2 % 1000000;
      uVar4 = uVar3 % 10000;
      *puVar5 = *(undefined2 *)(&DAT_00211c50 + (param_2 / 100000000) * 2);
      puVar5[1] = *(undefined2 *)(&DAT_00211c50 + ((ulong)uVar2 / 1000000) * 2);
      puVar5[2] = *(undefined2 *)(&DAT_00211c50 + ((ulong)uVar3 / 10000) * 2);
      puVar5[3] = *(undefined2 *)(&DAT_00211c50 + (ulong)(uVar4 / 100) * 2);
      puVar5[4] = *(undefined2 *)(&DAT_00211c50 + (ulong)(uVar4 % 100) * 2);
    }
  }
  __n = (long)puVar6 - (long)local_44;
  if (__n < 0xfffffffffffffff8) {
    if (__n < 0x17) {
      __dest = (undefined1 *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)__n << 1);
    }
    else {
      uVar1 = (__n & 0xfffffffffffffff8) + 8;
      if ((__n | 7) != 0x17) {
        uVar1 = __n | 7;
      }
      __dest = (undefined1 *)FUN_00759c3c(uVar1 + 1);
      param_1[1] = __n;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar1 + 1 | 1;
    }
    if ((undefined2 *)local_44 != puVar6) {
      memcpy(__dest,local_44,__n);
      __dest = __dest + __n;
    }
    *__dest = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_002fb400(param_1);
}


// ===== 00714adc  FUN_00714adc =====

void FUN_00714adc(ulong *param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *__dest;
  ulong __n;
  undefined1 auStack_3b [11];
  
  puVar2 = (undefined1 *)FUN_00714f18(auStack_3b,param_2);
  __n = (long)puVar2 - (long)auStack_3b;
  if (__n < 0xfffffffffffffff8) {
    if (__n < 0x17) {
      __dest = (undefined1 *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)__n << 1);
    }
    else {
      uVar1 = (__n & 0xfffffffffffffff8) + 8;
      if ((__n | 7) != 0x17) {
        uVar1 = __n | 7;
      }
      __dest = (undefined1 *)FUN_00759c3c(uVar1 + 1);
      param_1[1] = __n;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar1 + 1 | 1;
    }
    if (auStack_3b != puVar2) {
      memcpy(__dest,auStack_3b,__n);
      __dest = __dest + __n;
    }
    *__dest = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_002fb400(param_1);
}


// ===== 00714ba0  FUN_00714ba0 =====

void FUN_00714ba0(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 *__dest;
  ulong uVar6;
  undefined2 local_45 [10];
  
  if (param_2 >> 0x20 == 0) {
    puVar4 = (undefined2 *)FUN_00714f18(local_45,param_2 & 0xffffffff);
  }
  else {
    if (param_2 < 10000000000) {
      puVar5 = local_45;
    }
    else {
      puVar5 = (undefined2 *)FUN_00714f18(local_45,param_2 / 10000000000);
      param_2 = param_2 % 10000000000;
    }
    puVar4 = puVar5 + 5;
    uVar6 = param_2 % 100000000;
    uVar2 = (int)uVar6 + (int)(uVar6 / 1000000) * -1000000;
    uVar3 = uVar2 % 10000;
    *puVar5 = *(undefined2 *)(&DAT_00211c50 + (param_2 / 100000000) * 2);
    puVar5[1] = *(undefined2 *)(&DAT_00211c50 + (uVar6 / 1000000) * 2);
    puVar5[2] = *(undefined2 *)(&DAT_00211c50 + ((ulong)uVar2 / 10000) * 2);
    puVar5[3] = *(undefined2 *)(&DAT_00211c50 + (ulong)(uVar3 / 100) * 2);
    puVar5[4] = *(undefined2 *)(&DAT_00211c50 + (ulong)(uVar3 % 100) * 2);
  }
  uVar6 = (long)puVar4 - (long)local_45;
  if (uVar6 < 0xfffffffffffffff8) {
    if (uVar6 < 0x17) {
      __dest = (undefined1 *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar6 << 1);
    }
    else {
      uVar1 = (uVar6 & 0xfffffffffffffff8) + 8;
      if ((uVar6 | 7) != 0x17) {
        uVar1 = uVar6 | 7;
      }
      __dest = (undefined1 *)FUN_00759c3c(uVar1 + 1);
      param_1[1] = uVar6;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar1 + 1 | 1;
    }
    if (local_45 != puVar4) {
      memcpy(__dest,local_45,uVar6);
      __dest = __dest + uVar6;
    }
    *__dest = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_002fb400(param_1);
}


// ===== 00714d68  FUN_00714d68 =====

void FUN_00714d68(undefined8 param_1)

{
  undefined8 uVar1;
  byte local_38;
  undefined1 auStack_37 [15];
  undefined1 *local_28;
  
  FUN_00714e0c(&local_38,param_1,": no conversion");
  if ((local_38 & 1) == 0) {
    local_28 = auStack_37;
  }
                    /* try { // try from 00714da0 to 00714da3 has its CatchHandler @ 00714da4 */
  uVar1 = FUN_00714db8(local_28);
                    /* catch() { ... } // from try @ 00714da0 with catch @ 00714da4 */
  FUN_00712bdc(&local_38);
                    /* WARNING: Subroutine does not return */
  FUN_00755eac(uVar1);
}


// ===== 00714db8  FUN_00714db8 =====

void FUN_00714db8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00753a74(0x10);
                    /* try { // try from 00714dd8 to 00714ddf has its CatchHandler @ 00714df8 */
  FUN_002fd1a0(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(uVar1,PTR_PTR_007a0fb8,PTR_FUN_007a0fc0);
}


// ===== 00714e0c  FUN_00714e0c =====

void FUN_00714e0c(ulong *param_1,byte *param_2,char *param_3)

{
  ulong uVar1;
  size_t __n;
  byte bVar2;
  size_t __n_00;
  void *__dest;
  uint uVar3;
  ulong uVar4;
  byte *__src;
  
  bVar2 = *param_2;
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  __n_00 = strlen(param_3);
  uVar1 = __n + __n_00;
  if (uVar1 < 0xfffffffffffffff8) {
    if (uVar1 < 0x17) {
      __dest = (void *)0x0;
      *param_1 = 0;
      param_1[1] = 0;
      uVar3 = ((uint)uVar1 & 0xff) << 1;
      param_1[2] = 0;
      *(char *)param_1 = (char)uVar3;
    }
    else {
      uVar4 = (uVar1 & 0xfffffffffffffff8) + 8;
      if ((uVar1 | 7) != 0x17) {
        uVar4 = uVar1 | 7;
      }
      __dest = (void *)FUN_00759c3c(uVar4 + 1);
      uVar4 = uVar4 + 1 | 1;
      param_1[1] = uVar1;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar4;
      uVar3 = (uint)uVar4 & 0xff;
    }
    if ((uVar3 & 1) == 0) {
      __dest = (void *)((long)param_1 + 1);
    }
    if (__n != 0) {
      __src = *(byte **)(param_2 + 0x10);
      if ((bVar2 & 1) == 0) {
        __src = param_2 + 1;
      }
      memmove(__dest,__src,__n);
    }
    if (__n_00 != 0) {
      memmove((void *)((long)__dest + __n),param_3,__n_00);
    }
    *(undefined1 *)((long)((long)__dest + __n) + __n_00) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_002fb400(param_1);
}


// ===== 00714f18  FUN_00714f18 =====

byte * FUN_00714f18(byte *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  if (999999 < param_2) {
    if (99999999 < param_2) {
      uVar1 = param_2 % 100000000;
      if (param_2 < 1000000000) {
        *param_1 = (byte)(param_2 / 100000000) | 0x30;
        uVar2 = (uVar1 % 1000000) % 10000;
        *(undefined2 *)(param_1 + 1) = *(undefined2 *)(&DAT_00211c50 + ((ulong)uVar1 / 1000000) * 2)
        ;
        *(undefined2 *)(param_1 + 3) =
             *(undefined2 *)(&DAT_00211c50 + ((ulong)(uVar1 % 1000000) / 10000) * 2);
        *(undefined2 *)(param_1 + 5) = *(undefined2 *)(&DAT_00211c50 + (ulong)(uVar2 / 100) * 2);
        *(undefined2 *)(param_1 + 7) = *(undefined2 *)(&DAT_00211c50 + (ulong)(uVar2 % 100) * 2);
        return param_1 + 9;
      }
      uVar2 = (uVar1 % 1000000) % 10000;
      *(undefined2 *)param_1 = *(undefined2 *)(&DAT_00211c50 + (ulong)(param_2 / 100000000) * 2);
      *(undefined2 *)(param_1 + 2) = *(undefined2 *)(&DAT_00211c50 + ((ulong)uVar1 / 1000000) * 2);
      *(undefined2 *)(param_1 + 4) =
           *(undefined2 *)(&DAT_00211c50 + ((ulong)(uVar1 % 1000000) / 10000) * 2);
      *(undefined2 *)(param_1 + 6) = *(undefined2 *)(&DAT_00211c50 + (ulong)(uVar2 / 100) * 2);
      *(undefined2 *)(param_1 + 8) = *(undefined2 *)(&DAT_00211c50 + (ulong)(uVar2 % 100) * 2);
      return param_1 + 10;
    }
    uVar1 = param_2 % 1000000;
    if (param_2 < 10000000) {
      *param_1 = (char)(param_2 / 1000000) + 0x30;
      *(undefined2 *)(param_1 + 1) = *(undefined2 *)(&DAT_00211c50 + ((ulong)uVar1 / 10000) * 2);
      *(undefined2 *)(param_1 + 3) =
           *(undefined2 *)(&DAT_00211c50 + (ulong)((uVar1 % 10000) / 100) * 2);
      *(undefined2 *)(param_1 + 5) =
           *(undefined2 *)(&DAT_00211c50 + (ulong)((uVar1 % 10000) % 100) * 2);
      return param_1 + 7;
    }
    *(undefined2 *)param_1 = *(undefined2 *)(&DAT_00211c50 + (ulong)(param_2 / 1000000) * 2);
    *(undefined2 *)(param_1 + 2) = *(undefined2 *)(&DAT_00211c50 + ((ulong)uVar1 / 10000) * 2);
    *(undefined2 *)(param_1 + 4) =
         *(undefined2 *)(&DAT_00211c50 + (ulong)((uVar1 % 10000) / 100) * 2);
    *(undefined2 *)(param_1 + 6) =
         *(undefined2 *)(&DAT_00211c50 + (ulong)((uVar1 % 10000) % 100) * 2);
    return param_1 + 8;
  }
  if (0x270 < param_2 >> 4) {
    if (param_2 >> 5 < 0xc35) {
      *param_1 = (byte)(param_2 / 10000) | 0x30;
      *(undefined2 *)(param_1 + 1) =
           *(undefined2 *)(&DAT_00211c50 + (ulong)((param_2 % 10000) / 100) * 2);
      *(undefined2 *)(param_1 + 3) =
           *(undefined2 *)(&DAT_00211c50 + (ulong)((param_2 % 10000) % 100) * 2);
      return param_1 + 5;
    }
    *(undefined2 *)param_1 = *(undefined2 *)(&DAT_00211c50 + (ulong)(param_2 / 10000) * 2);
    *(undefined2 *)(param_1 + 2) =
         *(undefined2 *)(&DAT_00211c50 + (ulong)((param_2 % 10000) / 100) * 2);
    *(undefined2 *)(param_1 + 4) =
         *(undefined2 *)(&DAT_00211c50 + (ulong)((param_2 % 10000) % 100) * 2);
    return param_1 + 6;
  }
  if (param_2 < 100) {
    if (param_2 < 10) {
      *param_1 = (byte)param_2 | 0x30;
      return param_1 + 1;
    }
    *(undefined2 *)param_1 = *(undefined2 *)(&DAT_00211c50 + (ulong)param_2 * 2);
    return param_1 + 2;
  }
  uVar1 = (param_2 >> 2 & 0x3fff) / 0x19;
  uVar3 = (ulong)(param_2 + uVar1 * -100);
  if (param_2 < 1000) {
    *param_1 = (byte)uVar1 | 0x30;
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)(&DAT_00211c50 + (uVar3 & 0xffff) * 2);
    return param_1 + 3;
  }
  *(undefined2 *)param_1 = *(undefined2 *)(&DAT_00211c50 + (ulong)uVar1 * 2);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(&DAT_00211c50 + (uVar3 & 0xffff) * 2);
  return param_1 + 4;
}


// ===== 007152d0  FUN_007152d0 =====

void FUN_007152d0(ulong *param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  size_t __n;
  undefined1 *__dest;
  char *__s;
  char acStack_440 [1024];
  
  __s = acStack_440;
  piVar4 = (int *)__errno();
  iVar2 = *piVar4;
  pcVar5 = strerror_r(param_3,acStack_440,0x400);
  iVar3 = (int)pcVar5;
  if (iVar3 != 0) {
    if (iVar3 == -1) {
      iVar3 = *piVar4;
    }
    if (iVar3 != 0x16) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __s = "";
  }
  if (*__s == '\0') {
    snprintf(acStack_440,0x400,"Unknown error %d",(ulong)param_3);
    __s = acStack_440;
  }
  *piVar4 = iVar2;
  __n = strlen(__s);
  if (0xfffffffffffffff7 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(param_1);
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_007153c8;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
    __dest = (undefined1 *)FUN_00759c3c(uVar1 + 1);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar1 + 1 | 1;
  }
  memmove(__dest,__s,__n);
LAB_007153c8:
  __dest[__n] = 0;
  return;
}


// ===== 007153f4  FUN_007153f4 =====

char * FUN_007153f4(void)

{
  return "generic";
}


// ===== 00715404  FUN_00715404 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00715404(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  if (0xfff < param_3) {
    pcVar7 = (char *)FUN_00759c3c(0x28);
    param_1[2] = pcVar7;
    uVar6 = _UNK_00200b78;
    uVar5 = _DAT_00200b70;
    uVar4 = s_unspecified_generic_category_err_001c7050._24_8_;
    uVar3 = s_unspecified_generic_category_err_001c7050._16_8_;
    uVar2 = s_unspecified_generic_category_err_001c7050._8_8_;
    uVar1 = s_unspecified_generic_category_err_001c7050._0_8_;
    pcVar7[0x20] = 'o';
    pcVar7[0x21] = 'r';
    param_1[1] = uVar6;
    *param_1 = uVar5;
    *(undefined8 *)(pcVar7 + 8) = uVar2;
    *(undefined8 *)pcVar7 = uVar1;
    *(undefined8 *)(pcVar7 + 0x18) = uVar4;
    *(undefined8 *)(pcVar7 + 0x10) = uVar3;
    pcVar7[0x22] = '\0';
    return;
  }
  FUN_007152d0();
  return;
}


// ===== 0071546c  FUN_0071546c =====

undefined ** FUN_0071546c(void)

{
  int iVar1;
  
  if (((DAT_007b0050 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007b0050), iVar1 != 0)) {
    FUN_00739d60(&DAT_007b0050);
  }
  return &PTR_PTR_FUN_007aaaa0;
}


// ===== 007154bc  FUN_007154bc =====

char * FUN_007154bc(void)

{
  return "system";
}


// ===== 007154cc  FUN_007154cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007154cc(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  if (0xfff < param_3) {
    pcVar7 = (char *)FUN_00759c3c(0x28);
    param_1[2] = pcVar7;
    uVar6 = _UNK_00200438;
    uVar5 = _DAT_00200430;
    uVar4 = s_unspecified_system_category_erro_001b9859._24_8_;
    uVar3 = s_unspecified_system_category_erro_001b9859._16_8_;
    uVar2 = s_unspecified_system_category_erro_001b9859._8_8_;
    uVar1 = s_unspecified_system_category_erro_001b9859._0_8_;
    pcVar7[0x20] = 'r';
    pcVar7[0x21] = '\0';
    param_1[1] = uVar6;
    *param_1 = uVar5;
    *(undefined8 *)(pcVar7 + 8) = uVar2;
    *(undefined8 *)pcVar7 = uVar1;
    *(undefined8 *)(pcVar7 + 0x18) = uVar4;
    *(undefined8 *)(pcVar7 + 0x10) = uVar3;
    return;
  }
  FUN_007152d0();
  return;
}


// ===== 00715530  FUN_00715530 =====

undefined4 FUN_00715530(undefined8 param_1,undefined4 param_2)

{
  return param_2;
}


// ===== 00715554  FUN_00715554 =====

undefined ** FUN_00715554(void)

{
  int iVar1;
  
  if (((DAT_007b0058 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007b0058), iVar1 != 0)) {
    FUN_00739d60(&DAT_007b0058);
  }
  return &PTR_PTR_FUN_007aaaa8;
}


// ===== 007155a4  FUN_007155a4 =====

void FUN_007155a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  byte local_48 [16];
  void *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = param_2;
  uStack_28 = param_3;
  if ((*param_4 & 1) == 0) {
    uStack_58 = param_4[1];
    local_60 = *param_4;
    local_50 = (void *)param_4[2];
  }
  else {
    FUN_002fb36c(&local_60,param_4[2],param_4[1]);
  }
                    /* try { // try from 007155e8 to 007155f7 has its CatchHandler @ 00715680 */
  FUN_0071569c(local_48,&local_30,&local_60);
                    /* try { // try from 007155f8 to 00715603 has its CatchHandler @ 00715650 */
  FUN_007126b8(param_1,local_48);
  if ((local_48[0] & 1) != 0) {
    free(local_38);
  }
  if ((local_60 & 1) != 0) {
    free(local_50);
  }
  *param_1 = &PTR_thunk_FUN_0073a2c4_0079ba48;
  param_1[3] = uStack_28;
  param_1[2] = local_30;
  return;
}


// ===== 0071569c  FUN_0071569c =====

void FUN_0071569c(undefined8 *param_1,int *param_2,byte *param_3)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte local_48 [16];
  void *local_38;
  
  iVar2 = *param_2;
  if (iVar2 != 0) {
    uVar1 = (ulong)(*param_3 >> 1);
    if ((*param_3 & 1) != 0) {
      uVar1 = *(ulong *)(param_3 + 8);
    }
    if (uVar1 != 0) {
      FUN_00713bdc(param_3,&DAT_001f2fbc);
      iVar2 = *param_2;
    }
    (**(code **)(**(long **)(param_2 + 2) + 0x30))(local_48,*(long **)(param_2 + 2),iVar2);
                    /* try { // try from 00715708 to 00715713 has its CatchHandler @ 00715754 */
    FUN_007111ec(param_3,local_48);
    if ((local_48[0] & 1) != 0) {
      free(local_38);
    }
  }
  uVar5 = *(undefined8 *)(param_3 + 8);
  uVar4 = *(undefined8 *)param_3;
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  param_3[0xe] = 0;
  param_3[0xf] = 0;
  param_3[0x10] = 0;
  param_3[0x11] = 0;
  param_3[0x12] = 0;
  param_3[0x13] = 0;
  param_3[0x14] = 0;
  param_3[0x15] = 0;
  param_3[0x16] = 0;
  param_3[0x17] = 0;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[2] = uVar3;
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  return;
}


// ===== 00715770  FUN_00715770 =====

void FUN_00715770(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  ulong uVar1;
  size_t __n;
  void *__dest;
  ulong local_80;
  size_t local_78;
  void *local_70;
  byte local_68 [16];
  void *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = param_2;
  uStack_48 = param_3;
  __n = strlen(param_4);
  if (0xfffffffffffffff7 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(&local_80);
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_80 | 1);
    local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_0071580c;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_80 = uVar1 + 1 | 1;
    local_78 = __n;
    local_70 = __dest;
  }
  memcpy(__dest,param_4,__n);
LAB_0071580c:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 00715810 to 0071581f has its CatchHandler @ 007158b8 */
  FUN_0071569c(local_68,&local_50,&local_80);
                    /* try { // try from 00715820 to 0071582b has its CatchHandler @ 00715888 */
  FUN_007126b8(param_1,local_68);
  if ((local_68[0] & 1) != 0) {
    free(local_58);
  }
  if ((local_80 & 1) != 0) {
    free(local_70);
  }
  *param_1 = &PTR_thunk_FUN_0073a2c4_0079ba48;
  param_1[3] = uStack_48;
  param_1[2] = local_50;
  return;
}


// ===== 007158d4  thunk_FUN_0073a2c4 =====

void thunk_FUN_0073a2c4(void)

{
  FUN_0073a2c4();
  return;
}


// ===== 007158dc  FUN_007158dc =====

void FUN_007158dc(void *param_1)

{
  thunk_FUN_0073a2c4();
  free(param_1);
  return;
}


// ===== 00715908  FUN_00715908 =====

void FUN_00715908(undefined4 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  auVar2 = FUN_00715928(param_1,&PTR_PTR_FUN_007aaaa8,param_2);
  uVar1 = FUN_00753a74(0x20);
  FUN_00715770(uVar1,auVar2._0_8_,auVar2._8_8_,param_2);
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(uVar1,PTR_PTR_007a37f0,PTR_thunk_FUN_0073a2c4_007a37e8);
}


// ===== 00715928  FUN_00715928 =====

void FUN_00715928(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00753a74(0x20);
                    /* try { // try from 00715954 to 00715963 has its CatchHandler @ 0071597c */
  FUN_00715770(uVar1,param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(uVar1,PTR_PTR_007a37f0,PTR_thunk_FUN_0073a2c4_007a37e8);
}


// ===== 00715990  FUN_00715990 =====

void FUN_00715990(void *param_1)

{
  FUN_007159e8();
  free(param_1);
  return;
}


// ===== 007159bc  FUN_007159bc =====

void FUN_007159bc(void *param_1)

{
  FUN_007159e8();
  free(param_1);
  return;
}


// ===== 007159e8  FUN_007159e8 =====

void FUN_007159e8(void)

{
  return;
}


// ===== 007159f0  FUN_007159f0 =====

undefined1  [16] FUN_007159f0(undefined8 param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = param_2 & 0xffffffff;
  auVar1._8_8_ = param_1;
  return auVar1;
}


// ===== 00715a04  FUN_00715a04 =====

bool FUN_00715a04(long *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  long extraout_x1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))();
  return *(long *)(param_3 + 2) == extraout_x1 && *param_3 == iVar1;
}


// ===== 00715a48  FUN_00715a48 =====

bool FUN_00715a48(long param_1,int *param_2,int param_3)

{
  return *(long *)(param_2 + 2) == param_1 && *param_2 == param_3;
}


// ===== 00715a64  FUN_00715a64 =====

char * FUN_00715a64(void)

{
  return "bad_variant_access";
}


// ===== 00715a74  FUN_00715a74 =====

void FUN_00715a74(void *param_1)

{
  FUN_0073a174();
  free(param_1);
  return;
}


// ===== 00715aa0  FUN_00715aa0 =====

int FUN_00715aa0(pthread_cond_t *param_1)

{
  int iVar1;
  
                    /* try { // try from 00715aac to 00715aaf has its CatchHandler @ 00715abc */
  iVar1 = pthread_cond_broadcast(param_1);
  return iVar1;
}


// ===== 00715ac0  FUN_00715ac0 =====

void FUN_00715ac0(pthread_cond_t *param_1,undefined8 *param_2)

{
  int iVar1;
  char *pcVar2;
  
  if (*(char *)(param_2 + 1) == '\0') {
    pcVar2 = "condition_variable::wait: mutex not locked";
    iVar1 = 1;
  }
  else {
                    /* try { // try from 00715ad8 to 00715b07 has its CatchHandler @ 00715b08 */
    iVar1 = pthread_cond_wait(param_1,(pthread_mutex_t *)*param_2);
    if (iVar1 == 0) {
      return;
    }
    pcVar2 = "condition_variable wait failed";
  }
  FUN_00715908(iVar1,pcVar2);
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00715ad8 with catch @ 00715b08
                        */
  FUN_002fb198();
}


// ===== 00715b0c  FUN_00715b0c =====

void FUN_00715b0c(pthread_cond_t *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  char *pcVar2;
  timespec local_20;
  
  if (*(char *)(param_2 + 1) == '\0') {
    pcVar2 = "condition_variable::timed wait: mutex not locked";
    iVar1 = 1;
  }
  else {
    if (0x59682f000000e940 < param_3) {
      param_3 = 0x59682f000000e941;
    }
    local_20.tv_sec = param_3 / 1000000000;
    local_20.tv_nsec = param_3 % 1000000000;
                    /* try { // try from 00715b68 to 00715ba7 has its CatchHandler @ 00715ba8 */
    iVar1 = pthread_cond_timedwait(param_1,(pthread_mutex_t *)*param_2,&local_20);
    if ((iVar1 == 0) || (iVar1 == 0x6e)) {
      return;
    }
    pcVar2 = "condition_variable timed_wait failed";
  }
  FUN_00715908(iVar1,pcVar2);
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00715b68 with catch @ 00715ba8
                        */
  FUN_002fb198();
}


// ===== 00715bac  FUN_00715bac =====

int FUN_00715bac(pthread_mutex_t *param_1)

{
  int iVar1;
  
                    /* try { // try from 00715bb8 to 00715bbb has its CatchHandler @ 00715bc8 */
  iVar1 = pthread_mutex_destroy(param_1);
  return iVar1;
}


// ===== 00715bcc  FUN_00715bcc =====

int FUN_00715bcc(pthread_mutex_t *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  
  iVar1 = pthread_mutex_lock(param_1);
  if (iVar1 == 0) {
    return iVar1;
  }
  __mutex = (pthread_mutex_t *)FUN_00715908(iVar1,"mutex lock failed");
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}


// ===== 00715bf8  FUN_00715bf8 =====

int FUN_00715bf8(pthread_mutex_t *param_1)

{
  int iVar1;
  
                    /* try { // try from 00715c04 to 00715c07 has its CatchHandler @ 00715c14 */
  iVar1 = pthread_mutex_unlock(param_1);
  return iVar1;
}


// ===== 00715c18  FUN_00715c18 =====

uint FUN_00715c18(void)

{
  long lVar1;
  
                    /* try { // try from 00715c24 to 00715c2b has its CatchHandler @ 00715c40 */
  lVar1 = sysconf(0x61);
  return (uint)lVar1 & ((uint)(lVar1 >> 0x3f) ^ 0xffffffff);
}


// ===== 00715c44  FUN_00715c44 =====

bool FUN_00715c44(void)

{
  int iVar1;
  
  iVar1 = FUN_00753eac();
  return 0 < iVar1;
}


// ===== 00715c68  FUN_00715c68 =====

char * FUN_00715c68(void)

{
  return "iostream";
}


// ===== 00715c78  FUN_00715c78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00715c78(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  if ((param_3 != 1) && (param_3 < 0x1000)) {
    FUN_007152d0();
    return;
  }
  pcVar7 = (char *)FUN_00759c3c(0x28);
  param_1[2] = pcVar7;
  uVar6 = _UNK_00200458;
  uVar5 = _DAT_00200450;
  uVar4 = s_unspecified_iostream_category_er_001f525b._24_8_;
  uVar3 = s_unspecified_iostream_category_er_001f525b._16_8_;
  uVar2 = s_unspecified_iostream_category_er_001f525b._8_8_;
  uVar1 = s_unspecified_iostream_category_er_001f525b._0_8_;
  pcVar7[0x1f] = 'r';
  pcVar7[0x20] = 'r';
  pcVar7[0x21] = 'o';
  pcVar7[0x22] = 'r';
  param_1[1] = uVar6;
  *param_1 = uVar5;
  *(undefined8 *)(pcVar7 + 8) = uVar2;
  *(undefined8 *)pcVar7 = uVar1;
  *(undefined8 *)(pcVar7 + 0x18) = uVar4;
  *(undefined8 *)(pcVar7 + 0x10) = uVar3;
  pcVar7[0x23] = '\0';
  return;
}


// ===== 00715cec  FUN_00715cec =====

void FUN_00715cec(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_00715770(param_1,*param_3,param_3[1],param_2);
  *param_1 = &PTR_thunk_FUN_0073a2c4_0079bb68;
  return;
}


// ===== 00715d2c  thunk_FUN_0073a2c4 =====

void thunk_FUN_0073a2c4(void)

{
  thunk_FUN_0073a2c4();
  return;
}


// ===== 00715d34  FUN_00715d34 =====

void FUN_00715d34(void *param_1)

{
  thunk_FUN_0073a2c4();
  free(param_1);
  return;
}


// ===== 00715d60  FUN_00715d60 =====

void FUN_00715d60(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  FUN_00732054(param_1,param_2 + 0x30);
  FUN_007320f4(param_2 + 0x30,param_3);
  if (*(long *)(param_2 + 0x48) != 0) {
    lVar1 = *(long *)(param_2 + 0x48) + -1;
    do {
                    /* try { // try from 00715db0 to 00715dbb has its CatchHandler @ 00715ddc */
      (**(code **)(*(long *)(param_2 + 0x38) + lVar1 * 8))
                (1,param_2,*(undefined4 *)(*(long *)(param_2 + 0x40) + lVar1 * 4));
      lVar1 = lVar1 + -1;
    } while (lVar1 != -1);
  }
  return;
}


// ===== 00715df0  FUN_00715df0 =====

void FUN_00715df0(undefined8 param_1,long param_2)

{
  FUN_00732054(param_1,param_2 + 0x30);
  return;
}


// ===== 00715e00  FUN_00715e00 =====

void FUN_00715e00(long *param_1)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_007a3808 + 0x10);
  if (param_1[6] != 0) {
    if (param_1[9] != 0) {
      lVar1 = param_1[9] + -1;
      do {
                    /* try { // try from 00715e4c to 00715e57 has its CatchHandler @ 00715eb0 */
        (**(code **)(param_1[7] + lVar1 * 8))(0,param_1,*(undefined4 *)(param_1[8] + lVar1 * 4));
        lVar1 = lVar1 + -1;
      } while (lVar1 != -1);
    }
    FUN_00732094(param_1 + 6);
    free((void *)param_1[7]);
    free((void *)param_1[8]);
    free((void *)param_1[0xb]);
    free((void *)param_1[0xe]);
    return;
  }
  return;
}


// ===== 00715eb4  FUN_00715eb4 =====

void FUN_00715eb4(void *param_1)

{
  FUN_00715e00();
  free(param_1);
  return;
}


// ===== 00715ee0  FUN_00715ee0 =====

void FUN_00715ee0(long param_1,uint param_2)

{
  param_2 = *(long *)(param_1 + 0x28) == 0 | param_2;
  *(uint *)(param_1 + 0x20) = param_2;
  if ((*(uint *)(param_1 + 0x24) & param_2) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00715f20("ios_base::clear");
}


// ===== 00715f20  FUN_00715f20 =====

void FUN_00715f20(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined **ppuStack_28;
  
  uVar2 = FUN_00753a74(0x20);
  if (((DAT_007b0060 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007b0060), iVar1 != 0)) {
    FUN_00739d60(&DAT_007b0060);
  }
  local_30 = 1;
  ppuStack_28 = &PTR_PTR_FUN_007aaab0;
                    /* try { // try from 00715f64 to 00715f73 has its CatchHandler @ 00715fac */
  FUN_00715cec(uVar2,param_1,&local_30);
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(uVar2,PTR_PTR_007a3810,PTR_thunk_FUN_0073a2c4_007a3800);
}


// ===== 00715fc0  FUN_00715fc0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00715fc0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_002009d8;
  uVar1 = _DAT_002009d0;
  *(long *)(param_1 + 0x28) = param_2;
  *(uint *)(param_1 + 0x20) = (uint)(param_2 == 0);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0x1002;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_00731fac(param_1 + 0x30);
  return;
}


// ===== 0071600c  FUN_0071600c =====

void FUN_0071600c(long param_1)

{
  void *__ptr;
  
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
    return;
  }
  __ptr = (void *)FUN_00753dc8();
  FUN_007159e8();
  free(__ptr);
  return;
}


// ===== 00716038  FUN_00716038 =====

void FUN_00716038(void *param_1)

{
  FUN_007159e8();
  free(param_1);
  return;
}


// ===== 00716064  thunk_FUN_00715e00 =====

void thunk_FUN_00715e00(void)

{
  FUN_00715e00();
  return;
}


// ===== 0071606c  FUN_0071606c =====

void FUN_0071606c(void *param_1)

{
  thunk_FUN_00715e00();
  free(param_1);
  return;
}


// ===== 00716098  FUN_00716098 =====

void FUN_00716098(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0079bbf0;
  FUN_00732094(param_1 + 1);
  return;
}


// ===== 007160b0  FUN_007160b0 =====

void FUN_007160b0(void *param_1)

{
  FUN_00716098();
  free(param_1);
  return;
}


// ===== 007160dc  FUN_007160dc =====

void FUN_007160dc(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a3818 + 0x10);
  FUN_00731fac(param_1 + 1);
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}


// ===== 00716120  FUN_00716120 =====

void FUN_00716120(void)

{
  return;
}


// ===== 00716128  FUN_00716128 =====

void FUN_00716128(void)

{
  return;
}


// ===== 00716130  FUN_00716130 =====

undefined1  [16] FUN_00716130(void)

{
  return ZEXT816(0xffffffffffffffff) << 0x40;
}


// ===== 00716140  FUN_00716140 =====

undefined1  [16] FUN_00716140(void)

{
  return ZEXT816(0xffffffffffffffff) << 0x40;
}


// ===== 00716150  FUN_00716150 =====

undefined8 FUN_00716150(void)

{
  return 0;
}


// ===== 0071615c  FUN_0071615c =====

undefined8 FUN_0071615c(void)

{
  return 0;
}


// ===== 00716168  FUN_00716168 =====

long FUN_00716168(long *param_1,undefined1 *param_2,long param_3)

{
  size_t sVar1;
  int iVar2;
  void *__src;
  size_t sVar3;
  long lVar4;
  undefined1 *puVar5;
  
  if (param_3 < 1) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    do {
      __src = (void *)param_1[3];
      if (__src < (void *)param_1[4]) {
        sVar3 = param_1[4] - (long)__src;
        sVar1 = param_3 - lVar4;
        if ((long)sVar3 <= param_3 - lVar4) {
          sVar1 = sVar3;
        }
        sVar3 = sVar1;
        if (0x7ffffffe < (long)sVar1) {
          sVar3 = 0x7fffffff;
        }
        if (sVar1 != 0) {
          memmove(param_2,__src,sVar3);
          __src = (void *)param_1[3];
        }
        puVar5 = param_2 + sVar3;
        param_1[3] = (long)__src + (long)(int)sVar3;
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x50))(param_1);
        if (iVar2 == -1) {
          return lVar4;
        }
        sVar3 = 1;
        puVar5 = param_2 + 1;
        *param_2 = (char)iVar2;
      }
      lVar4 = sVar3 + lVar4;
      param_2 = puVar5;
    } while (lVar4 < param_3);
  }
  return lVar4;
}


// ===== 00716238  FUN_00716238 =====

undefined8 FUN_00716238(void)

{
  return 0xffffffff;
}


// ===== 00716244  FUN_00716244 =====

ulong FUN_00716244(long *param_1)

{
  ulong uVar1;
  byte *pbVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x48))();
  if ((int)uVar1 != -1) {
    pbVar2 = (byte *)param_1[3];
    param_1[3] = (long)(pbVar2 + 1);
    uVar1 = (ulong)*pbVar2;
  }
  return uVar1;
}


// ===== 0071628c  FUN_0071628c =====

undefined8 FUN_0071628c(void)

{
  return 0xffffffff;
}


// ===== 00716298  FUN_00716298 =====

long FUN_00716298(long *param_1,undefined1 *param_2,long param_3)

{
  size_t __n;
  int iVar1;
  void *__dest;
  size_t sVar2;
  long lVar3;
  
  if (param_3 < 1) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      while( true ) {
        __dest = (void *)param_1[6];
        if ((void *)param_1[7] <= __dest) break;
        sVar2 = param_1[7] - (long)__dest;
        __n = param_3 - lVar3;
        if ((long)sVar2 <= param_3 - lVar3) {
          __n = sVar2;
        }
        if (__n != 0) {
          memmove(__dest,param_2,__n);
          __dest = (void *)param_1[6];
        }
        param_2 = param_2 + __n;
        lVar3 = __n + lVar3;
        param_1[6] = (long)__dest + __n;
        if (param_3 <= lVar3) {
          return lVar3;
        }
      }
      iVar1 = (**(code **)(*param_1 + 0x68))(param_1,*param_2);
      if (iVar1 == -1) {
        return lVar3;
      }
      param_2 = param_2 + 1;
      lVar3 = lVar3 + 1;
    } while (lVar3 < param_3);
  }
  return lVar3;
}


// ===== 00716368  FUN_00716368 =====

undefined8 FUN_00716368(void)

{
  return 0xffffffff;
}


// ===== 00716374  FUN_00716374 =====

void FUN_00716374(void)

{
  return;
}


// ===== 0071637c  FUN_0071637c =====

void FUN_0071637c(long param_1)

{
  FUN_00715e00(param_1 + 0x10);
  return;
}


// ===== 00716388  FUN_00716388 =====

void FUN_00716388(long *param_1)

{
  FUN_00715e00((long)param_1 + *(long *)(*param_1 + -0x18) + 0x10);
  return;
}


// ===== 007163a0  FUN_007163a0 =====

void FUN_007163a0(void *param_1)

{
  FUN_00715e00((long)param_1 + 0x10);
  free(param_1);
  return;
}


// ===== 007163d0  FUN_007163d0 =====

void FUN_007163d0(long *param_1)

{
  void *__ptr;
  
  __ptr = (void *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_00715e00((long)__ptr + 0x10);
  free(__ptr);
  return;
}


// ===== 00716408  FUN_00716408 =====

void FUN_00716408(undefined1 *param_1,long *param_2,ulong param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 auStack_38 [8];
  
  lVar4 = *param_2;
  *param_1 = 0;
  lVar3 = (long)param_2 + *(long *)(lVar4 + -0x18);
  if (*(uint *)(lVar3 + 0x20) != 0) {
    FUN_00715ee0(lVar3,*(uint *)(lVar3 + 0x20) | 4);
    return;
  }
  if (*(long *)(lVar3 + 0x88) != 0) {
    param_3 = param_3 & 0xffffffff;
    FUN_007165e0();
    lVar4 = *param_2;
  }
  if (((param_3 & 1) != 0) ||
     ((*(byte *)((long)param_2 + *(long *)(lVar4 + -0x18) + 9) >> 4 & 1) == 0)) {
LAB_0071657c:
    *param_1 = *(int *)((long)param_2 + *(long *)(lVar4 + -0x18) + 0x20) == 0;
    return;
  }
  FUN_00715df0(auStack_38);
                    /* try { // try from 00716490 to 0071649f has its CatchHandler @ 007165cc */
  lVar3 = FUN_0073220c(auStack_38,PTR_DAT_007a1108);
  FUN_00732094(auStack_38);
  plVar6 = *(long **)((long)param_2 + *(long *)(*param_2 + -0x18) + 0x28);
joined_r0x007164bc:
  if (plVar6 != (long *)0x0) {
    do {
      if ((plVar6[3] == plVar6[4]) && (iVar2 = (**(code **)(*plVar6 + 0x48))(plVar6), iVar2 == -1))
      break;
      if ((byte *)plVar6[3] == (byte *)plVar6[4]) {
        uVar5 = (**(code **)(*plVar6 + 0x48))(plVar6);
        uVar5 = uVar5 & 0xff;
        if ((uint)uVar5 >> 7 == 0) goto LAB_0071652c;
LAB_0071656c:
        if (plVar6[3] != plVar6[4]) goto LAB_00716578;
        iVar2 = (**(code **)(*plVar6 + 0x48))(plVar6);
        lVar4 = *param_2;
        if (iVar2 != -1) goto LAB_0071657c;
        goto LAB_00716554;
      }
      bVar1 = *(byte *)plVar6[3];
      uVar5 = (ulong)bVar1;
      if ((char)bVar1 < '\0') goto LAB_0071656c;
LAB_0071652c:
      if ((*(ulong *)(*(long *)(lVar3 + 0x10) + uVar5 * 8) & 1) == 0) goto LAB_0071656c;
      if (plVar6[3] != plVar6[4]) goto code_r0x00716544;
      (**(code **)(*plVar6 + 0x50))(plVar6);
      if (plVar6 == (long *)0x0) break;
    } while( true );
  }
  lVar4 = *param_2;
LAB_00716554:
  lVar3 = (long)param_2 + *(long *)(lVar4 + -0x18);
  FUN_00715ee0(lVar3,*(uint *)(lVar3 + 0x20) | 6);
LAB_00716578:
  lVar4 = *param_2;
  goto LAB_0071657c;
code_r0x00716544:
  plVar6[3] = plVar6[3] + 1;
  goto joined_r0x007164bc;
}


// ===== 007165e0  FUN_007165e0 =====

long * FUN_007165e0(long *param_1)

{
  long lVar1;
  int iVar2;
  char local_30 [16];
  
  if (*(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28) != 0) {
                    /* try { // try from 0071660c to 00716617 has its CatchHandler @ 0071668c */
    FUN_00716f78(local_30,param_1);
                    /* try { // try from 00716638 to 0071665b has its CatchHandler @ 0071667c */
    if ((local_30[0] != '\0') &&
       (iVar2 = (**(code **)(**(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28) + 0x30)
                )(), iVar2 == -1)) {
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
      FUN_00715ee0(lVar1,*(uint *)(lVar1 + 0x20) | 1);
    }
    FUN_00716fdc(local_30);
  }
  return param_1;
}


// ===== 007166c4  FUN_007166c4 =====

void FUN_007166c4(void)

{
  FUN_007166cc();
  return;
}


// ===== 007166cc  FUN_007166cc =====

long * FUN_007166cc(long *param_1,undefined2 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined2 uVar3;
  undefined1 auStack_38 [8];
  long local_30;
  char local_28 [4];
  uint local_24;
  
  local_24 = 0;
  FUN_00716408(local_28,param_1,0);
  if (local_28[0] == '\0') {
    return param_1;
  }
                    /* try { // try from 0071670c to 00716717 has its CatchHandler @ 007167cc */
  FUN_00715df0(auStack_38,(long)param_1 + *(long *)(*param_1 + -0x18));
                    /* try { // try from 00716718 to 0071674f has its CatchHandler @ 007167d4 */
  plVar2 = (long *)FUN_0073220c(auStack_38,PTR_DAT_007a3828);
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  (**(code **)(*plVar2 + 0x20))(plVar2,*(undefined8 *)(lVar1 + 0x28),0,lVar1,&local_24,&local_30);
  FUN_00732094(auStack_38);
  if (local_30 < -0x8000) {
    uVar3 = 0x8000;
  }
  else {
    if (local_30 < 0x8000) {
      *param_2 = (short)local_30;
      goto LAB_00716798;
    }
    uVar3 = 0x7fff;
  }
  local_24 = local_24 | 4;
  *param_2 = uVar3;
LAB_00716798:
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_00715ee0(lVar1,*(uint *)(lVar1 + 0x20) | local_24);
  return param_1;
}


// ===== 0071683c  FUN_0071683c =====

void FUN_0071683c(void)

{
  FUN_00716844();
  return;
}


// ===== 00716844  FUN_00716844 =====

long * FUN_00716844(long *param_1,undefined4 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [8];
  long local_30;
  char local_28 [4];
  uint local_24;
  
  local_24 = 0;
  FUN_00716408(local_28,param_1,0);
  if (local_28[0] == '\0') {
    return param_1;
  }
                    /* try { // try from 00716884 to 0071688f has its CatchHandler @ 00716948 */
  FUN_00715df0(auStack_38,(long)param_1 + *(long *)(*param_1 + -0x18));
                    /* try { // try from 00716890 to 007168c7 has its CatchHandler @ 00716950 */
  plVar2 = (long *)FUN_0073220c(auStack_38,PTR_DAT_007a3828);
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  (**(code **)(*plVar2 + 0x20))(plVar2,*(undefined8 *)(lVar1 + 0x28),0,lVar1,&local_24,&local_30);
  FUN_00732094(auStack_38);
  if (local_30 < -0x80000000) {
    uVar3 = 0x80000000;
  }
  else {
    if (local_30 < 0x80000000) {
      *param_2 = (int)local_30;
      goto LAB_00716914;
    }
    uVar3 = 0x7fffffff;
  }
  local_24 = local_24 | 4;
  *param_2 = uVar3;
LAB_00716914:
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_00715ee0(lVar1,*(uint *)(lVar1 + 0x20) | local_24);
  return param_1;
}


// ===== 007169b8  FUN_007169b8 =====

uint FUN_007169b8(long *param_1)

{
  long lVar1;
  byte *pbVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  char local_24 [4];
  
  param_1[1] = 0;
  FUN_00716408(local_24,param_1,1);
  if (local_24[0] == '\0') {
    return 0xffffffff;
  }
  plVar3 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28);
  pbVar2 = (byte *)plVar3[3];
  if (pbVar2 == (byte *)plVar3[4]) {
                    /* try { // try from 00716a28 to 00716a2b has its CatchHandler @ 00716a7c */
    uVar5 = (**(code **)(*plVar3 + 0x50))();
    if (uVar5 == 0xffffffff) {
      uVar4 = 6;
      goto LAB_00716a44;
    }
  }
  else {
    plVar3[3] = (long)(pbVar2 + 1);
    uVar5 = (uint)*pbVar2;
  }
  uVar4 = 0;
  param_1[1] = 1;
LAB_00716a44:
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_00715ee0(lVar1,*(uint *)(lVar1 + 0x20) | uVar4);
  return uVar5;
}


// ===== 00716ad0  FUN_00716ad0 =====

long * FUN_00716ad0(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  char local_14 [4];
  
  param_1[1] = 0;
  FUN_00716408(local_14,param_1,1);
  if (local_14[0] == '\0') {
    uVar3 = 4;
  }
  else {
    plVar1 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28);
                    /* try { // try from 00716b24 to 00716b2f has its CatchHandler @ 00716b78 */
    lVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3);
    param_1[1] = lVar2;
    uVar3 = 0;
    if (lVar2 != param_3) {
      uVar3 = 6;
    }
  }
  lVar2 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_00715ee0(lVar2,*(uint *)(lVar2 + 0x20) | uVar3);
  return param_1;
}


// ===== 00716bc8  FUN_00716bc8 =====

undefined1  [16] FUN_00716bc8(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  char local_14 [4];
  
  FUN_00716408(local_14,param_1,1);
  if (local_14[0] == '\0') {
    auVar3 = ZEXT816(0xffffffffffffffff) << 0x40;
  }
  else {
    plVar2 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28);
                    /* try { // try from 00716c10 to 00716c1f has its CatchHandler @ 00716c6c */
    auVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,0,1,8);
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    FUN_00715ee0(lVar1,*(undefined4 *)(lVar1 + 0x20));
  }
  return auVar3;
}


// ===== 00716cc4  FUN_00716cc4 =====

long * FUN_00716cc4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long extraout_x1;
  char local_34 [4];
  
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  uVar2 = *(uint *)(lVar1 + 0x20) & 0xfffffffd;
  FUN_00715ee0(lVar1,uVar2);
  FUN_00716408(local_34,param_1,1);
  if (local_34[0] != '\0') {
    plVar4 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28);
                    /* try { // try from 00716d34 to 00716d43 has its CatchHandler @ 00716d84 */
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2,param_3,8);
    uVar3 = uVar2 | 4;
    if (extraout_x1 != -1) {
      uVar3 = uVar2;
    }
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    FUN_00715ee0(lVar1,*(uint *)(lVar1 + 0x20) | uVar3);
  }
  return param_1;
}


// ===== 00716dd4  FUN_00716dd4 =====

long * FUN_00716dd4(long *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long extraout_x1;
  char local_34 [4];
  
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  uVar2 = *(uint *)(lVar1 + 0x20) & 0xfffffffd;
  FUN_00715ee0(lVar1,uVar2);
  FUN_00716408(local_34,param_1,1);
  if (local_34[0] != '\0') {
    plVar4 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28);
                    /* try { // try from 00716e44 to 00716e53 has its CatchHandler @ 00716e94 */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3,8);
    uVar3 = uVar2 | 4;
    if (extraout_x1 != -1) {
      uVar3 = uVar2;
    }
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    FUN_00715ee0(lVar1,*(uint *)(lVar1 + 0x20) | uVar3);
  }
  return param_1;
}


// ===== 00716ee4  FUN_00716ee4 =====

void FUN_00716ee4(void)

{
  return;
}


// ===== 00716eec  FUN_00716eec =====

void FUN_00716eec(long param_1)

{
  FUN_00715e00(param_1 + 8);
  return;
}


// ===== 00716ef8  FUN_00716ef8 =====

void FUN_00716ef8(long *param_1)

{
  FUN_00715e00((long)param_1 + *(long *)(*param_1 + -0x18) + 8);
  return;
}


// ===== 00716f10  FUN_00716f10 =====

void FUN_00716f10(void *param_1)

{
  FUN_00715e00((long)param_1 + 8);
  free(param_1);
  return;
}


// ===== 00716f40  FUN_00716f40 =====

void FUN_00716f40(long *param_1)

{
  void *__ptr;
  
  __ptr = (void *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_00715e00((long)__ptr + 8);
  free(__ptr);
  return;
}


// ===== 00716f78  FUN_00716f78 =====

void FUN_00716f78(undefined1 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = 0;
  *(long **)(param_1 + 8) = param_2;
  if (*(int *)((long)param_2 + *(long *)(lVar1 + -0x18) + 0x20) != 0) {
    return;
  }
  lVar1 = *(long *)((long)param_2 + *(long *)(lVar1 + -0x18) + 0x88);
  if (lVar1 != 0) {
    FUN_007165e0(lVar1);
  }
  *param_1 = 1;
  return;
}


// ===== 00716fdc  FUN_00716fdc =====

void FUN_00716fdc(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 8);
  lVar4 = *(long *)(*plVar3 + -0x18);
                    /* try { // try from 0071703c to 00717063 has its CatchHandler @ 00717074 */
  if ((((*(long *)((long)plVar3 + lVar4 + 0x28) != 0) &&
       (*(int *)((long)plVar3 + lVar4 + 0x20) == 0)) &&
      ((*(byte *)((long)plVar3 + lVar4 + 9) >> 5 & 1) != 0)) &&
     ((uVar2 = FUN_00715c44(), (uVar2 & 1) == 0 &&
      (iVar1 = (**(code **)(**(long **)((long)*(long **)(param_1 + 8) +
                                       *(long *)(**(long **)(param_1 + 8) + -0x18) + 0x28) + 0x30))
                         (), iVar1 == -1)))) {
    lVar4 = (long)*(long **)(param_1 + 8) + *(long *)(**(long **)(param_1 + 8) + -0x18);
    FUN_00715ee0(lVar4,*(uint *)(lVar4 + 0x20) | 1);
  }
  return;
}


// ===== 00717084  FUN_00717084 =====

long * FUN_00717084(long *param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  char local_58 [16];
  undefined1 auStack_48 [8];
  
                    /* try { // try from 007170a8 to 007170b3 has its CatchHandler @ 007171dc */
  FUN_00716f78(local_58,param_1);
  if (local_58[0] != '\0') {
                    /* try { // try from 007170c4 to 007170cf has its CatchHandler @ 007171c8 */
    FUN_00715df0(auStack_48,(long)param_1 + *(long *)(*param_1 + -0x18));
                    /* try { // try from 007170d0 to 007170df has its CatchHandler @ 007171b8 */
    plVar2 = (long *)FUN_0073220c(auStack_48,PTR_DAT_007a3838);
    FUN_00732094(auStack_48);
    lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
    uVar1 = *(uint *)(lVar4 + 0x90);
    uVar5 = *(undefined8 *)(lVar4 + 0x28);
    if (uVar1 == 0xffffffff) {
                    /* try { // try from 00717108 to 00717117 has its CatchHandler @ 007171cc */
      FUN_00715df0(auStack_48,lVar4);
                    /* try { // try from 00717118 to 00717137 has its CatchHandler @ 007171b4 */
      plVar3 = (long *)FUN_0073220c(auStack_48,PTR_DAT_007a1108);
      uVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,0x20);
      FUN_00732094(auStack_48);
      uVar1 = uVar1 & 0xff;
      *(uint *)(lVar4 + 0x90) = uVar1;
    }
                    /* try { // try from 00717158 to 00717167 has its CatchHandler @ 007171cc */
    lVar4 = (**(code **)(*plVar2 + 0x18))(plVar2,uVar5,lVar4,uVar1,param_2 & 1);
    if (lVar4 == 0) {
      lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 00717180 to 00717187 has its CatchHandler @ 007171b0 */
      FUN_00715ee0(lVar4,*(uint *)(lVar4 + 0x20) | 5);
    }
  }
  FUN_00716fdc(local_58);
  return param_1;
}


// ===== 00717214  FUN_00717214 =====

long * FUN_00717214(long *param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  char local_60 [16];
  undefined1 auStack_38 [8];
  
                    /* try { // try from 0071723c to 00717247 has its CatchHandler @ 00717394 */
  FUN_00716f78(local_60,param_1);
  if (local_60[0] != '\0') {
    uVar2 = *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 8);
                    /* try { // try from 00717260 to 00717267 has its CatchHandler @ 00717380 */
    FUN_00715df0(auStack_38);
                    /* try { // try from 00717268 to 00717277 has its CatchHandler @ 00717370 */
    plVar4 = (long *)FUN_0073220c(auStack_38,PTR_DAT_007a3838);
    FUN_00732094(auStack_38);
    lVar6 = (long)param_1 + *(long *)(*param_1 + -0x18);
    uVar3 = *(uint *)(lVar6 + 0x90);
    uVar7 = *(undefined8 *)(lVar6 + 0x28);
    if (uVar3 == 0xffffffff) {
                    /* try { // try from 007172a0 to 007172af has its CatchHandler @ 00717384 */
      FUN_00715df0(auStack_38,lVar6);
                    /* try { // try from 007172b0 to 007172cf has its CatchHandler @ 0071736c */
      plVar5 = (long *)FUN_0073220c(auStack_38,PTR_DAT_007a1108);
      uVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,0x20);
      FUN_00732094(auStack_38);
      uVar3 = uVar3 & 0xff;
      *(uint *)(lVar6 + 0x90) = uVar3;
    }
    uVar2 = uVar2 & 0x4a;
    uVar1 = (ulong)param_2;
    if (uVar2 != 8 && uVar2 != 0x40) {
      uVar1 = (long)(int)param_2;
    }
                    /* try { // try from 00717310 to 0071731b has its CatchHandler @ 00717384 */
    lVar6 = (**(code **)(*plVar4 + 0x20))(plVar4,uVar7,lVar6,uVar3,uVar1);
    if (lVar6 == 0) {
      lVar6 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 00717334 to 0071733b has its CatchHandler @ 00717368 */
      FUN_00715ee0(lVar6,*(uint *)(lVar6 + 0x20) | 5);
    }
  }
  FUN_00716fdc(local_60);
  return param_1;
}


// ===== 007173cc  FUN_007173cc =====

long * FUN_007173cc(long *param_1,undefined4 param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  char local_58 [16];
  undefined1 auStack_48 [8];
  
                    /* try { // try from 007173f0 to 007173fb has its CatchHandler @ 00717524 */
  FUN_00716f78(local_58,param_1);
  if (local_58[0] != '\0') {
                    /* try { // try from 0071740c to 00717417 has its CatchHandler @ 00717510 */
    FUN_00715df0(auStack_48,(long)param_1 + *(long *)(*param_1 + -0x18));
                    /* try { // try from 00717418 to 00717427 has its CatchHandler @ 00717500 */
    plVar2 = (long *)FUN_0073220c(auStack_48,PTR_DAT_007a3838);
    FUN_00732094(auStack_48);
    lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
    uVar1 = *(uint *)(lVar4 + 0x90);
    uVar5 = *(undefined8 *)(lVar4 + 0x28);
    if (uVar1 == 0xffffffff) {
                    /* try { // try from 00717450 to 0071745f has its CatchHandler @ 00717514 */
      FUN_00715df0(auStack_48,lVar4);
                    /* try { // try from 00717460 to 0071747f has its CatchHandler @ 007174fc */
      plVar3 = (long *)FUN_0073220c(auStack_48,PTR_DAT_007a1108);
      uVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,0x20);
      FUN_00732094(auStack_48);
      uVar1 = uVar1 & 0xff;
      *(uint *)(lVar4 + 0x90) = uVar1;
    }
                    /* try { // try from 007174a4 to 007174af has its CatchHandler @ 00717514 */
    lVar4 = (**(code **)(*plVar2 + 0x30))(plVar2,uVar5,lVar4,uVar1,param_2);
    if (lVar4 == 0) {
      lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 007174c8 to 007174cf has its CatchHandler @ 007174f8 */
      FUN_00715ee0(lVar4,*(uint *)(lVar4 + 0x20) | 5);
    }
  }
  FUN_00716fdc(local_58);
  return param_1;
}


// ===== 0071755c  FUN_0071755c =====

long * FUN_0071755c(long *param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  char local_58 [16];
  undefined1 auStack_48 [8];
  
                    /* try { // try from 00717580 to 0071758b has its CatchHandler @ 007176b4 */
  FUN_00716f78(local_58,param_1);
  if (local_58[0] != '\0') {
                    /* try { // try from 0071759c to 007175a7 has its CatchHandler @ 007176a0 */
    FUN_00715df0(auStack_48,(long)param_1 + *(long *)(*param_1 + -0x18));
                    /* try { // try from 007175a8 to 007175b7 has its CatchHandler @ 00717690 */
    plVar2 = (long *)FUN_0073220c(auStack_48,PTR_DAT_007a3838);
    FUN_00732094(auStack_48);
    lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
    uVar1 = *(uint *)(lVar4 + 0x90);
    uVar5 = *(undefined8 *)(lVar4 + 0x28);
    if (uVar1 == 0xffffffff) {
                    /* try { // try from 007175e0 to 007175ef has its CatchHandler @ 007176a4 */
      FUN_00715df0(auStack_48,lVar4);
                    /* try { // try from 007175f0 to 0071760f has its CatchHandler @ 0071768c */
      plVar3 = (long *)FUN_0073220c(auStack_48,PTR_DAT_007a1108);
      uVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,0x20);
      FUN_00732094(auStack_48);
      uVar1 = uVar1 & 0xff;
      *(uint *)(lVar4 + 0x90) = uVar1;
    }
                    /* try { // try from 00717630 to 0071763f has its CatchHandler @ 007176a4 */
    lVar4 = (**(code **)(*plVar2 + 0x20))(plVar2,uVar5,lVar4,uVar1,param_2);
    if (lVar4 == 0) {
      lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 00717658 to 0071765f has its CatchHandler @ 00717688 */
      FUN_00715ee0(lVar4,*(uint *)(lVar4 + 0x20) | 5);
    }
  }
  FUN_00716fdc(local_58);
  return param_1;
}


// ===== 007176ec  FUN_007176ec =====

long * FUN_007176ec(long *param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  char local_58 [16];
  undefined1 auStack_48 [8];
  
                    /* try { // try from 00717710 to 0071771b has its CatchHandler @ 00717844 */
  FUN_00716f78(local_58,param_1);
  if (local_58[0] != '\0') {
                    /* try { // try from 0071772c to 00717737 has its CatchHandler @ 00717830 */
    FUN_00715df0(auStack_48,(long)param_1 + *(long *)(*param_1 + -0x18));
                    /* try { // try from 00717738 to 00717747 has its CatchHandler @ 00717820 */
    plVar2 = (long *)FUN_0073220c(auStack_48,PTR_DAT_007a3838);
    FUN_00732094(auStack_48);
    lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
    uVar1 = *(uint *)(lVar4 + 0x90);
    uVar5 = *(undefined8 *)(lVar4 + 0x28);
    if (uVar1 == 0xffffffff) {
                    /* try { // try from 00717770 to 0071777f has its CatchHandler @ 00717834 */
      FUN_00715df0(auStack_48,lVar4);
                    /* try { // try from 00717780 to 0071779f has its CatchHandler @ 0071781c */
      plVar3 = (long *)FUN_0073220c(auStack_48,PTR_DAT_007a1108);
      uVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,0x20);
      FUN_00732094(auStack_48);
      uVar1 = uVar1 & 0xff;
      *(uint *)(lVar4 + 0x90) = uVar1;
    }
                    /* try { // try from 007177c0 to 007177cf has its CatchHandler @ 00717834 */
    lVar4 = (**(code **)(*plVar2 + 0x30))(plVar2,uVar5,lVar4,uVar1,param_2);
    if (lVar4 == 0) {
      lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 007177e8 to 007177ef has its CatchHandler @ 00717818 */
      FUN_00715ee0(lVar4,*(uint *)(lVar4 + 0x20) | 5);
    }
  }
  FUN_00716fdc(local_58);
  return param_1;
}


// ===== 0071787c  FUN_0071787c =====

long * FUN_0071787c(long *param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  char local_58 [16];
  undefined1 auStack_48 [8];
  
                    /* try { // try from 007178a0 to 007178ab has its CatchHandler @ 007179d4 */
  FUN_00716f78(local_58,param_1);
  if (local_58[0] != '\0') {
                    /* try { // try from 007178bc to 007178c7 has its CatchHandler @ 007179c0 */
    FUN_00715df0(auStack_48,(long)param_1 + *(long *)(*param_1 + -0x18));
                    /* try { // try from 007178c8 to 007178d7 has its CatchHandler @ 007179b0 */
    plVar2 = (long *)FUN_0073220c(auStack_48,PTR_DAT_007a3838);
    FUN_00732094(auStack_48);
    lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
    uVar1 = *(uint *)(lVar4 + 0x90);
    uVar5 = *(undefined8 *)(lVar4 + 0x28);
    if (uVar1 == 0xffffffff) {
                    /* try { // try from 00717900 to 0071790f has its CatchHandler @ 007179c4 */
      FUN_00715df0(auStack_48,lVar4);
                    /* try { // try from 00717910 to 0071792f has its CatchHandler @ 007179ac */
      plVar3 = (long *)FUN_0073220c(auStack_48,PTR_DAT_007a1108);
      uVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,0x20);
      FUN_00732094(auStack_48);
      uVar1 = uVar1 & 0xff;
      *(uint *)(lVar4 + 0x90) = uVar1;
    }
                    /* try { // try from 00717950 to 0071795f has its CatchHandler @ 007179c4 */
    lVar4 = (**(code **)(*plVar2 + 0x28))(plVar2,uVar5,lVar4,uVar1,param_2);
    if (lVar4 == 0) {
      lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 00717978 to 0071797f has its CatchHandler @ 007179a8 */
      FUN_00715ee0(lVar4,*(uint *)(lVar4 + 0x20) | 5);
    }
  }
  FUN_00716fdc(local_58);
  return param_1;
}


// ===== 00717a0c  FUN_00717a0c =====

long * FUN_00717a0c(long *param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  char local_58 [16];
  undefined1 auStack_48 [8];
  
                    /* try { // try from 00717a30 to 00717a3b has its CatchHandler @ 00717b64 */
  FUN_00716f78(local_58,param_1);
  if (local_58[0] != '\0') {
                    /* try { // try from 00717a4c to 00717a57 has its CatchHandler @ 00717b50 */
    FUN_00715df0(auStack_48,(long)param_1 + *(long *)(*param_1 + -0x18));
                    /* try { // try from 00717a58 to 00717a67 has its CatchHandler @ 00717b40 */
    plVar2 = (long *)FUN_0073220c(auStack_48,PTR_DAT_007a3838);
    FUN_00732094(auStack_48);
    lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
    uVar1 = *(uint *)(lVar4 + 0x90);
    uVar5 = *(undefined8 *)(lVar4 + 0x28);
    if (uVar1 == 0xffffffff) {
                    /* try { // try from 00717a90 to 00717a9f has its CatchHandler @ 00717b54 */
      FUN_00715df0(auStack_48,lVar4);
                    /* try { // try from 00717aa0 to 00717abf has its CatchHandler @ 00717b3c */
      plVar3 = (long *)FUN_0073220c(auStack_48,PTR_DAT_007a1108);
      uVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,0x20);
      FUN_00732094(auStack_48);
      uVar1 = uVar1 & 0xff;
      *(uint *)(lVar4 + 0x90) = uVar1;
    }
                    /* try { // try from 00717ae0 to 00717aef has its CatchHandler @ 00717b54 */
    lVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,uVar5,lVar4,uVar1,param_2);
    if (lVar4 == 0) {
      lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 00717b08 to 00717b0f has its CatchHandler @ 00717b38 */
      FUN_00715ee0(lVar4,*(uint *)(lVar4 + 0x20) | 5);
    }
  }
  FUN_00716fdc(local_58);
  return param_1;
}


// ===== 00717b9c  FUN_00717b9c =====

long * FUN_00717b9c(long *param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  char local_30 [16];
  
                    /* try { // try from 00717bb8 to 00717bc3 has its CatchHandler @ 00717c5c */
  FUN_00716f78(local_30,param_1);
  if (local_30[0] == '\0') goto LAB_00717c2c;
  lVar4 = *(long *)(*param_1 + -0x18);
  plVar3 = *(long **)((long)param_1 + lVar4 + 0x28);
  if (plVar3 != (long *)0x0) {
    puVar1 = (undefined1 *)plVar3[6];
    if (puVar1 != (undefined1 *)plVar3[7]) {
      plVar3[6] = (long)(puVar1 + 1);
      *puVar1 = param_2;
      goto LAB_00717c2c;
    }
                    /* try { // try from 00717c04 to 00717c2b has its CatchHandler @ 00717c4c */
    iVar2 = (**(code **)(*plVar3 + 0x68))(plVar3,param_2);
    if (iVar2 != -1) goto LAB_00717c2c;
    lVar4 = *(long *)(*param_1 + -0x18);
  }
  FUN_00715ee0((long)param_1 + lVar4,*(uint *)((long)param_1 + lVar4 + 0x20) | 1);
LAB_00717c2c:
  FUN_00716fdc(local_30);
  return param_1;
}


// ===== 00717c94  FUN_00717c94 =====

long * FUN_00717c94(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  char local_40 [16];
  
                    /* try { // try from 00717cb8 to 00717cc3 has its CatchHandler @ 00717d48 */
  FUN_00716f78(local_40,param_1);
                    /* try { // try from 00717ce8 to 00717d13 has its CatchHandler @ 00717d38 */
  if (((param_3 != 0) && (local_40[0] != '\0')) &&
     (plVar1 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28),
     lVar2 = (**(code **)(*plVar1 + 0x60))(plVar1,param_2,param_3), lVar2 != param_3)) {
    lVar2 = (long)param_1 + *(long *)(*param_1 + -0x18);
    FUN_00715ee0(lVar2,*(uint *)(lVar2 + 0x20) | 1);
  }
  FUN_00716fdc(local_40);
  return param_1;
}


// ===== 00717d80  FUN_00717d80 =====

void FUN_00717d80(void)

{
  return;
}


// ===== 00717d88  FUN_00717d88 =====

void FUN_00717d88(long param_1)

{
  FUN_00715e00(param_1 + 0x18);
  return;
}


// ===== 00717d94  FUN_00717d94 =====

void FUN_00717d94(long param_1)

{
  FUN_00715e00(param_1 + 8);
  return;
}


// ===== 00717da0  FUN_00717da0 =====

void FUN_00717da0(long *param_1)

{
  FUN_00715e00((long)param_1 + *(long *)(*param_1 + -0x18) + 0x18);
  return;
}


// ===== 00717db8  FUN_00717db8 =====

void FUN_00717db8(void *param_1)

{
  FUN_00715e00((long)param_1 + 0x18);
  free(param_1);
  return;
}


// ===== 00717de8  FUN_00717de8 =====

void FUN_00717de8(long param_1)

{
  FUN_00715e00(param_1 + 8);
  free((void *)(param_1 + -0x10));
  return;
}


// ===== 00717e18  FUN_00717e18 =====

void FUN_00717e18(long *param_1)

{
  void *__ptr;
  
  __ptr = (void *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_00715e00((long)__ptr + 0x18);
  free(__ptr);
  return;
}


// ===== 00717e50  thunk_FUN_00715e00 =====

void thunk_FUN_00715e00(void)

{
  FUN_00715e00();
  return;
}


// ===== 00717e58  FUN_00717e58 =====

void FUN_00717e58(void *param_1)

{
  thunk_FUN_00715e00();
  free(param_1);
  return;
}


// ===== 00717e84  FUN_00717e84 =====

void FUN_00717e84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0079bd10;
  FUN_00732094(param_1 + 1);
  return;
}


// ===== 00717e9c  FUN_00717e9c =====

void FUN_00717e9c(void *param_1)

{
  FUN_00717e84();
  free(param_1);
  return;
}


// ===== 00717ec8  FUN_00717ec8 =====

void FUN_00717ec8(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a3840 + 0x10);
  FUN_00731fac(param_1 + 1);
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}


// ===== 00717f0c  FUN_00717f0c =====

void FUN_00717f0c(void)

{
  return;
}


// ===== 00717f14  FUN_00717f14 =====

void FUN_00717f14(void)

{
  return;
}


// ===== 00717f1c  FUN_00717f1c =====

undefined1  [16] FUN_00717f1c(void)

{
  return ZEXT816(0xffffffffffffffff) << 0x40;
}


// ===== 00717f2c  FUN_00717f2c =====

undefined1  [16] FUN_00717f2c(void)

{
  return ZEXT816(0xffffffffffffffff) << 0x40;
}


// ===== 00717f3c  FUN_00717f3c =====

undefined8 FUN_00717f3c(void)

{
  return 0;
}


// ===== 00717f48  FUN_00717f48 =====

undefined8 FUN_00717f48(void)

{
  return 0;
}


// ===== 00717f54  FUN_00717f54 =====

long FUN_00717f54(long *param_1,int *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  void *__src;
  long lVar3;
  long lVar4;
  int *piVar5;
  
  if (param_3 < 1) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    do {
      __src = (void *)param_1[3];
      if (__src < (void *)param_1[4]) {
        lVar3 = param_1[4] - (long)__src >> 2;
        lVar1 = param_3 - lVar4;
        if (lVar3 <= param_3 - lVar4) {
          lVar1 = lVar3;
        }
        lVar3 = lVar1;
        if (0x7ffffffe < lVar1) {
          lVar3 = 0x7fffffff;
        }
        if (lVar1 != 0) {
          memmove(param_2,__src,lVar3 << 2);
          __src = (void *)param_1[3];
        }
        piVar5 = param_2 + lVar3;
        param_1[3] = (long)((long)__src + (long)(int)lVar3 * 4);
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x50))(param_1);
        if (iVar2 == -1) {
          return lVar4;
        }
        lVar3 = 1;
        piVar5 = param_2 + 1;
        *param_2 = iVar2;
      }
      lVar4 = lVar3 + lVar4;
      param_2 = piVar5;
    } while (lVar4 < param_3);
  }
  return lVar4;
}


// ===== 00718028  FUN_00718028 =====

undefined8 FUN_00718028(void)

{
  return 0xffffffff;
}


// ===== 00718034  FUN_00718034 =====

ulong FUN_00718034(long *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x48))();
  if ((int)uVar1 != -1) {
    uVar1 = (ulong)*(uint *)param_1[3];
    param_1[3] = (long)((uint *)param_1[3] + 1);
  }
  return uVar1;
}


// ===== 00718078  FUN_00718078 =====

undefined8 FUN_00718078(void)

{
  return 0xffffffff;
}


// ===== 00718084  FUN_00718084 =====

long FUN_00718084(long *param_1,undefined4 *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  void *__dest;
  long lVar3;
  long lVar4;
  
  if (param_3 < 1) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    do {
      while( true ) {
        __dest = (void *)param_1[6];
        if ((void *)param_1[7] <= __dest) break;
        lVar3 = param_1[7] - (long)__dest >> 2;
        lVar1 = param_3 - lVar4;
        if (lVar3 <= param_3 - lVar4) {
          lVar1 = lVar3;
        }
        if (lVar1 != 0) {
          memmove(__dest,param_2,lVar1 * 4);
          __dest = (void *)param_1[6];
        }
        param_2 = param_2 + lVar1;
        lVar4 = lVar1 + lVar4;
        param_1[6] = (long)((long)__dest + lVar1 * 4);
        if (param_3 <= lVar4) {
          return lVar4;
        }
      }
      iVar2 = (**(code **)(*param_1 + 0x68))(param_1,*param_2);
      if (iVar2 == -1) {
        return lVar4;
      }
      param_2 = param_2 + 1;
      lVar4 = lVar4 + 1;
    } while (lVar4 < param_3);
  }
  return lVar4;
}


// ===== 0071815c  FUN_0071815c =====

undefined8 FUN_0071815c(void)

{
  return 0xffffffff;
}


// ===== 00718168  FUN_00718168 =====

void FUN_00718168(long param_1)

{
  FUN_00715e00(param_1 + 0x10);
  return;
}


// ===== 00718174  FUN_00718174 =====

void FUN_00718174(long *param_1)

{
  FUN_00715e00((long)param_1 + *(long *)(*param_1 + -0x18) + 0x10);
  return;
}


// ===== 0071818c  FUN_0071818c =====

void FUN_0071818c(void *param_1)

{
  FUN_00715e00((long)param_1 + 0x10);
  free(param_1);
  return;
}


// ===== 007181bc  FUN_007181bc =====

void FUN_007181bc(long *param_1)

{
  void *__ptr;
  
  __ptr = (void *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_00715e00((long)__ptr + 0x10);
  free(__ptr);
  return;
}


// ===== 007181f4  FUN_007181f4 =====

long * FUN_007181f4(long *param_1)

{
  long lVar1;
  int iVar2;
  char local_30 [16];
  
  if (*(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28) != 0) {
                    /* try { // try from 00718220 to 0071822b has its CatchHandler @ 007182a0 */
    FUN_00718364(local_30,param_1);
                    /* try { // try from 0071824c to 0071826f has its CatchHandler @ 00718290 */
    if ((local_30[0] != '\0') &&
       (iVar2 = (**(code **)(**(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28) + 0x30)
                )(), iVar2 == -1)) {
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
      FUN_00715ee0(lVar1,*(uint *)(lVar1 + 0x20) | 1);
    }
    FUN_007183c8(local_30);
  }
  return param_1;
}


// ===== 007182d8  FUN_007182d8 =====

void FUN_007182d8(long param_1)

{
  FUN_00715e00(param_1 + 8);
  return;
}


// ===== 007182e4  FUN_007182e4 =====

void FUN_007182e4(long *param_1)

{
  FUN_00715e00((long)param_1 + *(long *)(*param_1 + -0x18) + 8);
  return;
}


// ===== 007182fc  FUN_007182fc =====

void FUN_007182fc(void *param_1)

{
  FUN_00715e00((long)param_1 + 8);
  free(param_1);
  return;
}


// ===== 0071832c  FUN_0071832c =====

void FUN_0071832c(long *param_1)

{
  void *__ptr;
  
  __ptr = (void *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_00715e00((long)__ptr + 8);
  free(__ptr);
  return;
}


// ===== 00718364  FUN_00718364 =====

void FUN_00718364(undefined1 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = 0;
  *(long **)(param_1 + 8) = param_2;
  if (*(int *)((long)param_2 + *(long *)(lVar1 + -0x18) + 0x20) != 0) {
    return;
  }
  lVar1 = *(long *)((long)param_2 + *(long *)(lVar1 + -0x18) + 0x88);
  if (lVar1 != 0) {
    FUN_007181f4(lVar1);
  }
  *param_1 = 1;
  return;
}


// ===== 007183c8  FUN_007183c8 =====

void FUN_007183c8(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 8);
  lVar4 = *(long *)(*plVar3 + -0x18);
                    /* try { // try from 00718428 to 0071844f has its CatchHandler @ 00718460 */
  if ((((*(long *)((long)plVar3 + lVar4 + 0x28) != 0) &&
       (*(int *)((long)plVar3 + lVar4 + 0x20) == 0)) &&
      ((*(byte *)((long)plVar3 + lVar4 + 9) >> 5 & 1) != 0)) &&
     ((uVar2 = FUN_00715c44(), (uVar2 & 1) == 0 &&
      (iVar1 = (**(code **)(**(long **)((long)*(long **)(param_1 + 8) +
                                       *(long *)(**(long **)(param_1 + 8) + -0x18) + 0x28) + 0x30))
                         (), iVar1 == -1)))) {
    lVar4 = (long)*(long **)(param_1 + 8) + *(long *)(**(long **)(param_1 + 8) + -0x18);
    FUN_00715ee0(lVar4,*(uint *)(lVar4 + 0x20) | 1);
  }
  return;
}


// ===== 00718470  FUN_00718470 =====

void FUN_00718470(ulong *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if ((*(uint *)(param_2 + 0x60) >> 4 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x60) >> 3 & 1) == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    puVar12 = *(undefined1 **)(param_2 + 0x10);
    puVar10 = *(undefined1 **)(param_2 + 0x20);
    uVar11 = (long)puVar10 - (long)puVar12;
    if (uVar11 < 0xfffffffffffffff8) {
      if (uVar11 < 0x17) {
        puVar3 = (undefined1 *)((long)param_1 + 1);
        *(char *)param_1 = (char)((int)uVar11 << 1);
      }
      else {
        uVar9 = (uVar11 & 0xfffffffffffffff8) + 8;
        if ((uVar11 | 7) != 0x17) {
          uVar9 = uVar11 | 7;
        }
        puVar3 = (undefined1 *)FUN_00759c3c(uVar9 + 1);
        param_1[1] = uVar11;
        param_1[2] = (ulong)puVar3;
        *param_1 = uVar9 + 1 | 1;
      }
      puVar5 = puVar3;
      if (puVar12 != puVar10) {
        if ((0x1f < uVar11) && (0x1f < (ulong)((long)puVar3 - (long)puVar12))) {
          uVar7 = uVar11 & 0xffffffffffffffe0;
          puVar8 = (undefined8 *)(puVar12 + 0x10);
          puVar4 = (undefined8 *)(puVar3 + 0x10);
          uVar9 = uVar7;
          do {
            puVar1 = puVar8 + -1;
            uVar13 = puVar8[-2];
            uVar15 = puVar8[1];
            uVar14 = *puVar8;
            uVar9 = uVar9 - 0x20;
            puVar8 = puVar8 + 4;
            puVar4[-1] = *puVar1;
            puVar4[-2] = uVar13;
            puVar4[1] = uVar15;
            *puVar4 = uVar14;
            puVar4 = puVar4 + 4;
          } while (uVar9 != 0);
          puVar5 = puVar3 + uVar7;
          puVar3 = puVar3 + uVar7;
          puVar12 = puVar12 + uVar7;
          if (uVar11 == uVar7) goto LAB_0071867c;
        }
        do {
          puVar6 = puVar12 + 1;
          *puVar3 = *puVar12;
          puVar5 = puVar3 + 1;
          puVar3 = puVar3 + 1;
          puVar12 = puVar6;
        } while (puVar6 != puVar10);
      }
      goto LAB_0071867c;
    }
  }
  else {
    puVar12 = *(undefined1 **)(param_2 + 0x58);
    puVar3 = *(undefined1 **)(param_2 + 0x30);
    puVar10 = puVar12;
    if (puVar12 < puVar3) {
      *(undefined1 **)(param_2 + 0x58) = puVar3;
      puVar10 = puVar3;
    }
    puVar6 = *(undefined1 **)(param_2 + 0x28);
    uVar11 = (long)puVar10 - (long)puVar6;
    if (uVar11 < 0xfffffffffffffff8) {
      if (uVar11 < 0x17) {
        puVar2 = (undefined1 *)((long)param_1 + 1);
        *(char *)param_1 = (char)((int)uVar11 << 1);
      }
      else {
        uVar9 = (uVar11 & 0xfffffffffffffff8) + 8;
        if ((uVar11 | 7) != 0x17) {
          uVar9 = uVar11 | 7;
        }
        puVar2 = (undefined1 *)FUN_00759c3c(uVar9 + 1);
        param_1[1] = uVar11;
        param_1[2] = (ulong)puVar2;
        *param_1 = uVar9 + 1 | 1;
      }
      puVar5 = puVar2;
      if (puVar6 != puVar10) {
        if (puVar12 <= puVar3) {
          puVar12 = puVar3;
        }
        uVar11 = (long)puVar12 - (long)puVar6;
        if ((0x1f < uVar11) && (0x1f < (ulong)((long)puVar2 - (long)puVar6))) {
          uVar7 = uVar11 & 0xffffffffffffffe0;
          puVar8 = (undefined8 *)(puVar6 + 0x10);
          puVar5 = puVar2 + uVar7;
          puVar4 = (undefined8 *)(puVar2 + 0x10);
          uVar9 = uVar7;
          do {
            puVar1 = puVar8 + -1;
            uVar13 = puVar8[-2];
            uVar15 = puVar8[1];
            uVar14 = *puVar8;
            uVar9 = uVar9 - 0x20;
            puVar8 = puVar8 + 4;
            puVar4[-1] = *puVar1;
            puVar4[-2] = uVar13;
            puVar4[1] = uVar15;
            *puVar4 = uVar14;
            puVar4 = puVar4 + 4;
          } while (uVar9 != 0);
          puVar2 = puVar5;
          puVar6 = puVar6 + uVar7;
          if (uVar11 == uVar7) goto LAB_0071867c;
        }
        do {
          puVar12 = puVar6 + 1;
          puVar5 = puVar2 + 1;
          *puVar2 = *puVar6;
          puVar2 = puVar5;
          puVar6 = puVar12;
        } while (puVar12 != puVar10);
      }
LAB_0071867c:
      *puVar5 = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_002fb400(param_1);
}


// ===== 007186a4  FUN_007186a4 =====

ulong FUN_007186a4(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(param_1 + 0x30);
  pbVar1 = *(byte **)(param_1 + 0x58);
  if (*(byte **)(param_1 + 0x58) < pbVar2) {
    *(byte **)(param_1 + 0x58) = pbVar2;
    pbVar1 = pbVar2;
  }
  if ((*(byte *)(param_1 + 0x60) >> 3 & 1) != 0) {
    pbVar2 = *(byte **)(param_1 + 0x20);
    if (*(byte **)(param_1 + 0x20) < pbVar1) {
      *(byte **)(param_1 + 0x20) = pbVar1;
      pbVar2 = pbVar1;
    }
    if (*(byte **)(param_1 + 0x18) < pbVar2) {
      return (ulong)**(byte **)(param_1 + 0x18);
    }
  }
  return 0xffffffff;
}


// ===== 007186f8  FUN_007186f8 =====

uint FUN_007186f8(long param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x30);
  uVar1 = *(ulong *)(param_1 + 0x58);
  if (*(ulong *)(param_1 + 0x58) < uVar2) {
    *(ulong *)(param_1 + 0x58) = uVar2;
    uVar1 = uVar2;
  }
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (*(ulong *)(param_1 + 0x10) < uVar2) {
    if (param_2 == 0xffffffff) {
      *(ulong *)(param_1 + 0x18) = uVar2 - 1;
      *(ulong *)(param_1 + 0x20) = uVar1;
      return 0;
    }
    if (((*(byte *)(param_1 + 0x60) >> 4 & 1) != 0) ||
       ((uint)*(byte *)(uVar2 - 1) == (param_2 & 0xff))) {
      *(ulong *)(param_1 + 0x18) = uVar2 - 1;
      *(ulong *)(param_1 + 0x20) = uVar1;
      *(char *)(uVar2 - 1) = (char)param_2;
      return param_2;
    }
  }
  return 0xffffffff;
}


// ===== 0071876c  FUN_0071876c =====

ulong FUN_0071876c(long *param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  
  if (param_2 == 0xffffffff) {
    uVar5 = 0;
  }
  else {
    puVar9 = (undefined1 *)param_1[6];
    puVar6 = (undefined1 *)param_1[7];
    lVar2 = param_1[2];
    lVar4 = param_1[3];
    if (puVar9 == puVar6) {
      if ((*(byte *)(param_1 + 0xc) >> 4 & 1) == 0) {
        return 0xffffffff;
      }
      lVar10 = param_1[5];
      lVar11 = param_1[0xb];
                    /* try { // try from 007187cc to 0071881f has its CatchHandler @ 00718914 */
      FUN_007132e8(param_1 + 8,0);
      uVar3 = param_1[8];
      uVar5 = 0x16;
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        uVar5 = (uVar3 & 0xfffffffffffffffe) - 1;
      }
      uVar1 = uVar3 >> 1 & 0x7f;
      if ((uVar3 & 1) != 0) {
        uVar1 = param_1[9];
      }
      if (uVar5 < uVar1 || uVar5 - uVar1 == 0) {
        if ((uVar3 & 1) == 0) {
          lVar7 = (long)param_1 + 0x41;
          *(char *)(param_1 + 8) = (char)((int)uVar5 << 1);
        }
        else {
          lVar7 = param_1[10];
          param_1[9] = uVar5;
        }
        *(undefined1 *)(lVar7 + uVar5) = 0;
      }
      else {
        FUN_0071341c(param_1 + 8,uVar5 - uVar1,0);
      }
      uVar5 = (ulong)(*(byte *)(param_1 + 8) >> 1);
      lVar7 = (long)param_1 + 0x41;
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        uVar5 = param_1[9];
        lVar7 = param_1[10];
      }
      puVar6 = (undefined1 *)(lVar7 + uVar5);
      puVar9 = puVar9 + (lVar7 - lVar10);
      puVar8 = (undefined1 *)(lVar7 + (lVar11 - lVar10));
      param_1[5] = lVar7;
      param_1[6] = (long)puVar9;
      param_1[7] = (long)puVar6;
    }
    else {
      puVar8 = (undefined1 *)param_1[0xb];
    }
    if (puVar8 <= puVar9 + 1) {
      puVar8 = puVar9 + 1;
    }
    param_1[0xb] = (long)puVar8;
    if ((*(byte *)(param_1 + 0xc) >> 3 & 1) != 0) {
      param_1[4] = (long)puVar8;
      lVar10 = (long)param_1 + 0x41;
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        lVar10 = param_1[10];
      }
      param_1[2] = lVar10;
      param_1[3] = lVar10 + (lVar4 - lVar2);
    }
    if (puVar9 == puVar6) {
                    /* WARNING: Could not recover jumptable at 0x00718910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(*param_1 + 0x68))(param_1,param_2 & 0xff);
      return uVar5;
    }
    param_1[6] = (long)(puVar9 + 1);
    uVar5 = (ulong)(param_2 & 0xff);
    *puVar9 = (char)param_2;
  }
  return uVar5;
}


// ===== 00718924  FUN_00718924 =====

undefined1  [16] FUN_00718924(long param_1,long param_2,int param_3,uint param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar5 = *(ulong *)(param_1 + 0x30);
  uVar4 = *(ulong *)(param_1 + 0x58);
  if (*(ulong *)(param_1 + 0x58) < uVar5) {
    *(ulong *)(param_1 + 0x58) = uVar5;
    uVar4 = uVar5;
  }
  if (((param_4 & 0x18) != 0) && ((param_3 != 1 || ((param_4 & 0x18) != 0x18)))) {
    if (uVar4 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = param_1 + 0x41;
      if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
        lVar6 = *(long *)(param_1 + 0x50);
      }
      lVar6 = uVar4 - lVar6;
    }
    if (param_3 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar6;
      if (param_3 != 2) {
        if (param_3 != 1) goto LAB_00718958;
        if ((param_4 >> 3 & 1) == 0) {
          lVar7 = uVar5 - *(long *)(param_1 + 0x28);
        }
        else {
          lVar7 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
        }
      }
    }
    uVar1 = lVar7 + param_2;
    uVar3 = 0xffffffffffffffff;
    if (((-1 < (long)uVar1) && ((long)uVar1 <= lVar6)) &&
       ((uVar1 == 0 ||
        ((((param_4 >> 3 & 1) == 0 || (*(long *)(param_1 + 0x18) != 0)) &&
         (((param_4 >> 4 & 1) == 0 || (uVar5 != 0)))))))) {
      if ((param_4 >> 3 & 1) != 0) {
        *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x10) + uVar1;
        *(ulong *)(param_1 + 0x20) = uVar4;
      }
      uVar3 = uVar1;
      if ((param_4 >> 4 & 1) != 0) {
        *(ulong *)(param_1 + 0x30) = *(long *)(param_1 + 0x28) + uVar1;
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    return auVar2 << 0x40;
  }
LAB_00718958:
  return ZEXT816(0xffffffffffffffff) << 0x40;
}


// ===== 00718a1c  FUN_00718a1c =====

char * FUN_00718a1c(char *param_1,char *param_2,uint param_3)

{
  int iVar1;
  char *__modes;
  FILE *__stream;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    return (char *)0x0;
  }
  __modes = (char *)FUN_00718e2c(param_3);
  if (__modes != (char *)0x0) {
    __stream = fopen(param_2,__modes);
    *(FILE **)(param_1 + 0x78) = __stream;
    if (__stream != (FILE *)0x0) {
      *(uint *)(param_1 + 0x98) = param_3;
      if ((param_3 >> 1 & 1) == 0) {
        return param_1;
      }
      iVar1 = fseek(__stream,0,2);
      if (iVar1 == 0) {
        return param_1;
      }
      fclose(*(FILE **)(param_1 + 0x78));
      param_1[0x78] = '\0';
      param_1[0x79] = '\0';
      param_1[0x7a] = '\0';
      param_1[0x7b] = '\0';
      param_1[0x7c] = '\0';
      param_1[0x7d] = '\0';
      param_1[0x7e] = '\0';
      param_1[0x7f] = '\0';
    }
    __modes = (char *)0x0;
  }
  return __modes;
}


// ===== 00718ac0  FUN_00718ac0 =====

void FUN_00718ac0(long *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  char *__modes;
  FILE *__stream;
  byte *__filename;
  
  __filename = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    __filename = param_2 + 1;
  }
  if (param_1[0x10] == 0) {
    __modes = (char *)FUN_00718e2c(param_3 | 0x10);
    if (__modes != (char *)0x0) {
      __stream = fopen((char *)__filename,__modes);
      param_1[0x10] = (long)__stream;
      if (__stream != (FILE *)0x0) {
        *(uint *)(param_1 + 0x14) = param_3 | 0x10;
        if (((param_3 >> 1 & 1) == 0) || (iVar2 = fseek(__stream,0,2), iVar2 == 0)) {
          lVar3 = (long)param_1 + *(long *)(*param_1 + -0x18);
          uVar1 = 0;
          goto LAB_00718b04;
        }
        fclose((FILE *)param_1[0x10]);
        param_1[0x10] = 0;
      }
    }
  }
  lVar3 = (long)param_1 + *(long *)(*param_1 + -0x18);
  uVar1 = *(uint *)(lVar3 + 0x20) | 4;
LAB_00718b04:
  FUN_00715ee0(lVar3,uVar1);
  return;
}


// ===== 00718b7c  FUN_00718b7c =====

void FUN_00718b7c(long *param_1)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_18 [8];
  
  *param_1 = (long)(PTR_DAT_007a3818 + 0x10);
  FUN_00731fac(param_1 + 1);
  puVar1 = PTR_DAT_007a3868;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)((long)param_1 + 0x9f) = 0;
  FUN_00732054(auStack_18,param_1 + 1);
                    /* try { // try from 00718be4 to 00718bf3 has its CatchHandler @ 00718c9c */
  uVar3 = FUN_0073217c(auStack_18,PTR_DAT_007a3870);
  FUN_00732094(auStack_18);
  if ((uVar3 & 1) != 0) {
    FUN_00732054(auStack_18,param_1 + 1);
                    /* try { // try from 00718c10 to 00718c1f has its CatchHandler @ 00718c70 */
    lVar4 = FUN_0073220c(auStack_18,PTR_DAT_007a3870);
    param_1[0x10] = lVar4;
    FUN_00732094(auStack_18);
    bVar2 = (**(code **)(*(long *)param_1[0x10] + 0x38))();
    *(byte *)((long)param_1 + 0xa2) = bVar2 & 1;
  }
                    /* try { // try from 00718c4c to 00718c5b has its CatchHandler @ 00718c80 */
  (**(code **)(*param_1 + 0x18))(param_1,0,0x1000);
  return;
}


// ===== 00718ca0  FUN_00718ca0 =====

void FUN_00718ca0(long *param_1)

{
  FILE *__stream;
  
  __stream = (FILE *)param_1[0xf];
  *param_1 = (long)(PTR_DAT_007a3868 + 0x10);
  if (__stream != (FILE *)0x0) {
                    /* try { // try from 00718cd0 to 00718cd7 has its CatchHandler @ 00718d54 */
    FUN_00719680(param_1);
    fclose(__stream);
    param_1[0xf] = 0;
                    /* try { // try from 00718cec to 00718cfb has its CatchHandler @ 00718d4c */
    (**(code **)(*param_1 + 0x18))(param_1,0,0);
  }
  if (((char)param_1[0x14] != '\0') && ((void *)param_1[8] != (void *)0x0)) {
    free((void *)param_1[8]);
  }
  if ((*(char *)((long)param_1 + 0xa1) != '\0') && ((void *)param_1[0xd] != (void *)0x0)) {
    free((void *)param_1[0xd]);
  }
  *param_1 = (long)&PTR_FUN_0079bbf0;
  FUN_00732094(param_1 + 1);
  return;
}


// ===== 00718d74  FUN_00718d74 =====

FILE * FUN_00718d74(FILE *param_1)

{
  int iVar1;
  int iVar2;
  FILE *__stream;
  
  __stream = (FILE *)param_1->_old_offset;
  if (__stream != (FILE *)0x0) {
                    /* try { // try from 00718d9c to 00718d9f has its CatchHandler @ 00718dec */
    iVar1 = (**(code **)(*(long *)param_1 + 0x30))();
    iVar2 = fclose(__stream);
    param_1->_old_offset = 0;
    __stream = param_1;
    if (iVar2 != 0 || iVar1 != 0) {
      __stream = (FILE *)0x0;
    }
    (**(code **)(*(long *)param_1 + 0x18))(param_1,0,0);
  }
  return __stream;
}


// ===== 00718e00  FUN_00718e00 =====

void FUN_00718e00(void *param_1)

{
  FUN_00718ca0();
  free(param_1);
  return;
}


// ===== 00718e2c  FUN_00718e2c =====

char * FUN_00718e2c(uint param_1)

{
  char *pcVar1;
  
  pcVar1 = "we";
  switch(param_1 & 0xfffffffd) {
  case 1:
  case 0x11:
    return "ae";
  default:
    pcVar1 = (char *)0x0;
code_r0x00718f5c:
    return pcVar1;
  case 5:
  case 0x15:
    return "abe";
  case 8:
    return "re";
  case 9:
  case 0x19:
    return "a+e";
  case 0xc:
    return "rbe";
  case 0xd:
  case 0x1d:
    return "a+be";
  case 0x10:
  case 0x30:
    goto code_r0x00718f5c;
  case 0x14:
  case 0x34:
    return "wbe";
  case 0x18:
    return "r+e";
  case 0x1c:
    return "r+be";
  case 0x38:
    return "w+e";
  case 0x3c:
    return "w+be";
  case 0x50:
  case 0x70:
    return "wxe";
  case 0x54:
  case 0x74:
    return "wbxe";
  case 0x78:
    return "w+xe";
  case 0x7c:
    return "w+bxe";
  }
}


// ===== 00718f60  FUN_00718f60 =====

ulong FUN_00718f60(long param_1)

{
  void *pvVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  ulong uVar14;
  byte *local_40;
  undefined1 uStack_31;
  
  pbVar9 = &stack0xffffffffffffffd0;
  if (*(long *)(param_1 + 0x78) == 0) {
    return 0xffffffff;
  }
  uVar2 = *(uint *)(param_1 + 0x9c);
  if ((uVar2 >> 3 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    bVar3 = *(char *)(param_1 + 0xa2) != '\0';
    lVar7 = 0x68;
    if (bVar3) {
      lVar7 = 0x40;
    }
    lVar8 = 0x70;
    if (bVar3) {
      lVar8 = 0x60;
    }
    pbVar10 = (byte *)(*(long *)(param_1 + lVar7) + *(long *)(param_1 + lVar8));
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + lVar7);
    *(byte **)(param_1 + 0x18) = pbVar10;
    *(byte **)(param_1 + 0x20) = pbVar10;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 8;
    if (pbVar10 != (byte *)0x0) goto LAB_00718fd0;
LAB_00718ffc:
    *(undefined1 **)(param_1 + 0x10) = &uStack_31;
    *(byte **)(param_1 + 0x18) = pbVar9;
    *(byte **)(param_1 + 0x20) = pbVar9;
    pbVar12 = *(byte **)(param_1 + 0x20);
    if ((uVar2 >> 3 & 1) != 0) goto LAB_00719014;
LAB_00718fd8:
    uVar14 = 0;
    if (pbVar9 == pbVar12) {
LAB_0071903c:
      memmove(*(void **)(param_1 + 0x10),pbVar9 + -uVar14,uVar14);
      if (*(char *)(param_1 + 0xa2) == '\0') {
        pvVar1 = *(void **)(param_1 + 0x48);
        lVar7 = *(long *)(param_1 + 0x50);
        sVar5 = lVar7 - (long)pvVar1;
        lVar8 = lVar7;
        if (sVar5 != 0) {
          memmove(*(void **)(param_1 + 0x40),pvVar1,sVar5);
          lVar7 = *(long *)(param_1 + 0x48);
          lVar8 = *(long *)(param_1 + 0x50);
        }
        lVar13 = *(long *)(param_1 + 0x40);
        pvVar1 = (void *)(lVar13 + (lVar8 - lVar7));
        lVar7 = 8;
        if (lVar13 != param_1 + 0x58) {
          lVar7 = *(long *)(param_1 + 0x60);
        }
        *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x88);
        sVar5 = (lVar13 + lVar7) - (long)pvVar1;
        *(void **)(param_1 + 0x48) = pvVar1;
        *(long *)(param_1 + 0x50) = lVar13 + lVar7;
        uVar11 = *(long *)(param_1 + 0x70) - uVar14;
        if (uVar11 <= sVar5) {
          sVar5 = uVar11;
        }
        sVar5 = fread(pvVar1,1,sVar5,*(FILE **)(param_1 + 0x78));
        if (sVar5 != 0) {
          plVar6 = *(long **)(param_1 + 0x80);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_007191ac();
          }
          lVar7 = *(long *)(param_1 + 0x48) + sVar5;
          lVar8 = *plVar6;
          *(long *)(param_1 + 0x50) = lVar7;
          iVar4 = (**(code **)(lVar8 + 0x20))
                            (plVar6,(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x40),
                             lVar7,(undefined8 *)(param_1 + 0x48),*(long *)(param_1 + 0x10) + uVar14
                             ,*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x70),&local_40);
          if (iVar4 == 3) {
            pbVar9 = *(byte **)(param_1 + 0x40);
            local_40 = *(byte **)(param_1 + 0x50);
            *(byte **)(param_1 + 0x10) = pbVar9;
          }
          else {
            pbVar9 = (byte *)(*(long *)(param_1 + 0x10) + uVar14);
            if (local_40 == pbVar9) goto LAB_00719174;
          }
LAB_00719168:
          *(byte **)(param_1 + 0x18) = pbVar9;
          *(byte **)(param_1 + 0x20) = local_40;
          uVar14 = (ulong)*pbVar9;
          goto LAB_00719178;
        }
      }
      else {
        pvVar1 = (void *)(uVar14 + *(long *)(param_1 + 0x10));
        sVar5 = fread(pvVar1,1,*(long *)(param_1 + 0x20) - (long)pvVar1,*(FILE **)(param_1 + 0x78));
        if (sVar5 != 0) {
          pbVar9 = (byte *)(*(long *)(param_1 + 0x10) + uVar14);
          local_40 = pbVar9 + sVar5;
          goto LAB_00719168;
        }
      }
LAB_00719174:
      uVar14 = 0xffffffff;
      goto LAB_00719178;
    }
  }
  else {
    pbVar10 = *(byte **)(param_1 + 0x18);
    if (pbVar10 == (byte *)0x0) goto LAB_00718ffc;
LAB_00718fd0:
    pbVar12 = *(byte **)(param_1 + 0x20);
    pbVar9 = pbVar10;
    if ((uVar2 >> 3 & 1) == 0) goto LAB_00718fd8;
LAB_00719014:
    lVar7 = (long)pbVar12 - *(long *)(param_1 + 0x10);
    if (lVar7 < 0) {
      lVar7 = lVar7 + 1;
    }
    uVar14 = lVar7 >> 1;
    if (3 < uVar14) {
      uVar14 = 4;
    }
    if (pbVar9 == pbVar12) goto LAB_0071903c;
  }
  uVar14 = (ulong)*pbVar9;
LAB_00719178:
  if (*(undefined1 **)(param_1 + 0x10) == &uStack_31) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return uVar14;
}


// ===== 007191ac  FUN_007191ac =====

void FUN_007191ac(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00753a74(8);
  FUN_0073a40c();
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(uVar1,PTR_PTR_007a3878,PTR_thunk_FUN_0073a174_007a3880);
}


// ===== 007191e4  FUN_007191e4 =====

uint FUN_007191e4(long param_1,uint param_2)

{
  ulong uVar1;
  
  if ((*(long *)(param_1 + 0x78) != 0) &&
     (uVar1 = *(ulong *)(param_1 + 0x18), *(ulong *)(param_1 + 0x10) < uVar1)) {
    if (param_2 == 0xffffffff) {
      *(ulong *)(param_1 + 0x18) = uVar1 - 1;
      return 0;
    }
    if (((*(byte *)(param_1 + 0x98) >> 4 & 1) != 0) ||
       ((uint)*(byte *)(uVar1 - 1) == (param_2 & 0xff))) {
      *(ulong *)(param_1 + 0x18) = uVar1 - 1;
      *(char *)(uVar1 - 1) = (char)param_2;
      return param_2;
    }
  }
  return 0xffffffff;
}


// ===== 00719248  FUN_00719248 =====

int FUN_00719248(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  long *plVar4;
  size_t sVar5;
  undefined1 *puVar6;
  FILE *__s;
  ulong uVar7;
  void *__ptr;
  void *pvVar8;
  long lVar9;
  void *local_58;
  long local_50;
  undefined1 local_41;
  
  if (*(long *)(param_1 + 0x78) == 0) {
LAB_00719400:
    iVar2 = -1;
  }
  else {
    if ((*(byte *)(param_1 + 0x9c) >> 4 & 1) == 0) {
      uVar7 = *(ulong *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      if (uVar7 < 9) {
        lVar9 = 0;
        pvVar8 = (void *)0x0;
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      else {
        if (*(char *)(param_1 + 0xa2) == '\0') {
          pvVar8 = *(void **)(param_1 + 0x68);
          uVar7 = *(ulong *)(param_1 + 0x70);
        }
        else {
          pvVar8 = *(void **)(param_1 + 0x40);
        }
        *(void **)(param_1 + 0x28) = pvVar8;
        *(void **)(param_1 + 0x30) = pvVar8;
        lVar9 = (long)pvVar8 + (uVar7 - 1);
        *(long *)(param_1 + 0x38) = lVar9;
      }
      *(undefined4 *)(param_1 + 0x9c) = 0x10;
    }
    else {
      pvVar8 = *(void **)(param_1 + 0x28);
      lVar9 = *(long *)(param_1 + 0x38);
    }
    puVar6 = *(undefined1 **)(param_1 + 0x30);
    if (param_2 == -1) {
      sVar5 = (long)puVar6 - (long)pvVar8;
      __ptr = pvVar8;
    }
    else {
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &local_41;
        *(undefined1 **)(param_1 + 0x28) = puVar6;
        *(undefined1 **)(param_1 + 0x30) = puVar6;
        *(undefined1 **)(param_1 + 0x38) = &stack0xffffffffffffffc0;
      }
      *puVar6 = (char)param_2;
      __ptr = *(void **)(param_1 + 0x28);
      puVar6 = (undefined1 *)(*(long *)(param_1 + 0x30) + 1);
      *(undefined1 **)(param_1 + 0x30) = puVar6;
      sVar5 = (long)puVar6 - (long)__ptr;
    }
    if (sVar5 != 0) {
      if (*(char *)(param_1 + 0xa2) == '\0') {
        local_50 = *(long *)(param_1 + 0x40);
        plVar4 = *(long **)(param_1 + 0x80);
        while( true ) {
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_007191ac();
          }
          uVar1 = (**(code **)(*plVar4 + 0x18))
                            (plVar4,param_1 + 0x88,__ptr,puVar6,&local_58,*(long *)(param_1 + 0x40),
                             *(long *)(param_1 + 0x40) + *(long *)(param_1 + 0x60),&local_50);
          __ptr = *(void **)(param_1 + 0x28);
          if (local_58 == __ptr) goto LAB_00719400;
          if (uVar1 == 3) break;
          if ((1 < uVar1) ||
             (sVar3 = local_50 - (long)*(void **)(param_1 + 0x40),
             sVar5 = fwrite(*(void **)(param_1 + 0x40),1,sVar3,*(FILE **)(param_1 + 0x78)),
             sVar5 != sVar3)) goto LAB_00719400;
          if (uVar1 != 1) goto LAB_00719348;
          puVar6 = *(undefined1 **)(param_1 + 0x30);
          plVar4 = *(long **)(param_1 + 0x80);
          *(void **)(param_1 + 0x28) = local_58;
          *(undefined1 **)(param_1 + 0x38) = puVar6;
          __ptr = local_58;
        }
        __s = *(FILE **)(param_1 + 0x78);
        sVar5 = *(long *)(param_1 + 0x30) - (long)__ptr;
      }
      else {
        __s = *(FILE **)(param_1 + 0x78);
      }
      sVar3 = fwrite(__ptr,1,sVar5,__s);
      if (sVar3 != sVar5) goto LAB_00719400;
LAB_00719348:
      *(void **)(param_1 + 0x28) = pvVar8;
      *(void **)(param_1 + 0x30) = pvVar8;
      *(long *)(param_1 + 0x38) = lVar9;
    }
    iVar2 = 0;
    if (param_2 != -1) {
      iVar2 = param_2;
    }
  }
  return iVar2;
}


// ===== 00719434  FUN_00719434 =====

long FUN_00719434(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  char cVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if ((*(char *)(param_1 + 0xa0) != '\0') && (*(void **)(param_1 + 0x40) != (void *)0x0)) {
    free(*(void **)(param_1 + 0x40));
  }
  if ((*(char *)(param_1 + 0xa1) != '\0') && (*(void **)(param_1 + 0x68) != (void *)0x0)) {
    free(*(void **)(param_1 + 0x68));
  }
  *(ulong *)(param_1 + 0x60) = param_3;
  if (param_3 < 9) {
    cVar2 = *(char *)(param_1 + 0xa2);
    *(long *)(param_1 + 0x40) = param_1 + 0x58;
    *(undefined8 *)(param_1 + 0x60) = 8;
    *(undefined1 *)(param_1 + 0xa0) = 0;
  }
  else {
    cVar2 = *(char *)(param_1 + 0xa2);
    if ((param_2 != 0) && (cVar2 != '\0')) {
      *(long *)(param_1 + 0x40) = param_2;
      *(undefined1 *)(param_1 + 0xa0) = 0;
      goto LAB_007194c8;
    }
    uVar3 = thunk_FUN_00759c3c(param_3);
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    *(undefined1 *)(param_1 + 0xa0) = 1;
  }
  if (cVar2 == '\0') {
    uVar1 = param_3;
    if ((long)param_3 < 9) {
      uVar1 = 8;
    }
    *(ulong *)(param_1 + 0x70) = uVar1;
    if ((param_2 != 0) && (8 < (long)param_3)) {
      *(long *)(param_1 + 0x68) = param_2;
      *(undefined1 *)(param_1 + 0xa1) = 0;
      return param_1;
    }
    uVar3 = thunk_FUN_00759c3c();
    *(undefined8 *)(param_1 + 0x68) = uVar3;
    *(undefined1 *)(param_1 + 0xa1) = 1;
    return param_1;
  }
LAB_007194c8:
  *(undefined1 *)(param_1 + 0xa1) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  return param_1;
}


// ===== 0071953c  FUN_0071953c =====

undefined1  [16] FUN_0071953c(long *param_1,long param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  __off_t _Var4;
  undefined1 auVar5 [16];
  
  if ((long *)param_1[0x10] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_007191ac();
  }
  uVar1 = (**(code **)(*(long *)param_1[0x10] + 0x30))();
  if ((param_1[0xf] != 0) && ((param_2 == 0 || (0 < (int)uVar1)))) {
    iVar2 = (**(code **)(*param_1 + 0x30))(param_1);
    lVar3 = 0;
    _Var4 = -1;
    if ((2 < param_3) || (iVar2 != 0)) goto LAB_007195d8;
    _Var4 = (ulong)uVar1 * param_2;
    if ((int)uVar1 < 1) {
      _Var4 = 0;
    }
    iVar2 = fseeko((FILE *)param_1[0xf],_Var4,param_3);
    if (iVar2 == 0) {
      _Var4 = ftello((FILE *)param_1[0xf]);
      lVar3 = param_1[0x11];
      goto LAB_007195d8;
    }
  }
  lVar3 = 0;
  _Var4 = -1;
LAB_007195d8:
  auVar5._8_8_ = _Var4;
  auVar5._0_8_ = lVar3;
  return auVar5;
}


// ===== 00719608  FUN_00719608 =====

undefined1  [16] FUN_00719608(long *param_1,long param_2,__off_t param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  
  if (((param_1[0xf] == 0) || (iVar1 = (**(code **)(*param_1 + 0x30))(), iVar1 != 0)) ||
     (iVar1 = fseeko((FILE *)param_1[0xf],param_3,0), iVar1 != 0)) {
    param_2 = 0;
    param_3 = -1;
  }
  else {
    param_1[0x11] = param_2;
  }
  auVar2._8_8_ = param_3;
  auVar2._0_8_ = param_2;
  return auVar2;
}


// ===== 00719680  FUN_00719680 =====

ulong FUN_00719680(long *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  size_t sVar5;
  long lVar6;
  size_t __n;
  long local_18;
  
  if (param_1[0xf] == 0) {
LAB_007196b4:
    uVar4 = 0;
  }
  else {
    if ((long *)param_1[0x10] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_007191ac();
    }
    if ((*(uint *)((long)param_1 + 0x9c) >> 4 & 1) == 0) {
      if ((*(uint *)((long)param_1 + 0x9c) >> 3 & 1) == 0) goto LAB_007196b4;
      local_18 = param_1[0x12];
      if (*(char *)((long)param_1 + 0xa2) == '\0') {
        uVar2 = (**(code **)(*(long *)param_1[0x10] + 0x30))();
        lVar6 = param_1[10] - param_1[9];
        if ((int)uVar2 < 1) {
          if (param_1[3] == param_1[4]) {
            bVar1 = false;
          }
          else {
            iVar3 = (**(code **)(*(long *)param_1[0x10] + 0x40))
                              ((long *)param_1[0x10],&local_18,param_1[8],param_1[9],
                               param_1[3] - param_1[2]);
            bVar1 = true;
            lVar6 = (lVar6 + param_1[9]) - (param_1[8] + (long)iVar3);
          }
        }
        else {
          bVar1 = false;
          lVar6 = lVar6 + (param_1[4] - param_1[3]) * (ulong)uVar2;
        }
      }
      else {
        bVar1 = false;
        lVar6 = param_1[4] - param_1[3];
      }
      iVar3 = fseeko((FILE *)param_1[0xf],-lVar6,1);
      if (iVar3 == 0) {
        if (bVar1) {
          param_1[0x11] = local_18;
        }
        *(undefined4 *)((long)param_1 + 0x9c) = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[9] = param_1[8];
        param_1[10] = param_1[8];
        param_1[2] = 0;
        return 0;
      }
    }
    else {
      if ((param_1[6] != param_1[5]) &&
         (uVar4 = (**(code **)(*param_1 + 0x68))(param_1,0xffffffff), (int)uVar4 == -1)) {
        return uVar4;
      }
      do {
        iVar3 = (**(code **)(*(long *)param_1[0x10] + 0x28))
                          ((long *)param_1[0x10],param_1 + 0x11,param_1[8],param_1[8] + param_1[0xc]
                           ,&local_18);
        __n = local_18 - param_1[8];
        sVar5 = fwrite((void *)param_1[8],1,__n,(FILE *)param_1[0xf]);
        if (sVar5 != __n) goto LAB_00719800;
      } while (iVar3 == 1);
      if (iVar3 != 2) {
        uVar2 = fflush((FILE *)param_1[0xf]);
        if (uVar2 == 0) {
          return (ulong)uVar2;
        }
      }
    }
LAB_00719800:
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


// ===== 00719844  FUN_00719844 =====

void FUN_00719844(long *param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  long *plVar5;
  long lVar6;
  
  (**(code **)(*param_1 + 0x30))();
  plVar5 = (long *)FUN_0073220c(param_2,PTR_DAT_007a3870);
  lVar6 = *plVar5;
  param_1[0x10] = (long)plVar5;
  bVar2 = *(byte *)((long)param_1 + 0xa2);
  bVar4 = (**(code **)(lVar6 + 0x38))();
  *(byte *)((long)param_1 + 0xa2) = bVar4 & 1;
  if (bVar2 != (bVar4 & 1)) {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    if ((bVar4 & 1) == 0) {
      if (((*(byte *)(param_1 + 0x14) & 1) == 0) && ((long *)param_1[8] != param_1 + 0xb)) {
        *(undefined1 *)((long)param_1 + 0xa1) = 0;
        param_1[0xd] = param_1[8];
        param_1[0xe] = param_1[0xc];
        lVar6 = thunk_FUN_00759c3c();
        param_1[8] = lVar6;
        *(undefined1 *)(param_1 + 0x14) = 1;
      }
      else {
        param_1[0xe] = param_1[0xc];
        lVar6 = thunk_FUN_00759c3c();
        param_1[0xd] = lVar6;
        *(undefined1 *)((long)param_1 + 0xa1) = 1;
      }
    }
    else {
      if ((*(byte *)(param_1 + 0x14) != 0) && ((void *)param_1[8] != (void *)0x0)) {
        free((void *)param_1[8]);
      }
      uVar3 = *(undefined1 *)((long)param_1 + 0xa1);
      *(undefined1 *)((long)param_1 + 0xa1) = 0;
      *(undefined1 *)(param_1 + 0x14) = uVar3;
      lVar6 = param_1[0xd];
      lVar1 = param_1[0xe];
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[8] = lVar6;
      param_1[0xc] = lVar1;
    }
  }
  return;
}


// ===== 0071993c  FUN_0071993c =====

void FUN_0071993c(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_007a1428 + 0x40;
  *param_1 = (long)(PTR_DAT_007a1428 + 0x18);
  param_1[0x17] = (long)puVar1;
  FUN_00718ca0(param_1 + 2);
  FUN_00715e00(param_1 + 0x17);
  free(param_1);
  return;
}


// ===== 0071998c  FUN_0071998c =====

void FUN_0071998c(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1[0x17] = &PTR_FUN_0079bf60;
  *puVar1 = &PTR_FUN_0079bf38;
  FUN_00718ca0(puVar1 + 2);
  FUN_00715e00(puVar1 + 0x17);
  return;
}


// ===== 007199dc  FUN_007199dc =====

void FUN_007199dc(long *param_1)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *__ptr = &PTR_FUN_0079bf38;
  __ptr[0x17] = &PTR_FUN_0079bf60;
  FUN_00718ca0(__ptr + 2);
  FUN_00715e00(__ptr + 0x17);
  free(__ptr);
  return;
}


// ===== 00719a38  FUN_00719a38 =====

void FUN_00719a38(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_007a1918 + 0x40;
  *param_1 = (long)(PTR_DAT_007a1918 + 0x18);
  param_1[0x16] = (long)puVar1;
  FUN_00718ca0(param_1 + 1);
  FUN_00715e00(param_1 + 0x16);
  free(param_1);
  return;
}


// ===== 00719a88  FUN_00719a88 =====

void FUN_00719a88(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1[0x16] = &PTR_FUN_0079c078;
  *puVar1 = &PTR_FUN_0079c050;
  FUN_00718ca0(puVar1 + 1);
  FUN_00715e00(puVar1 + 0x16);
  return;
}


// ===== 00719ad8  FUN_00719ad8 =====

void FUN_00719ad8(long *param_1)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *__ptr = &PTR_FUN_0079c050;
  __ptr[0x16] = &PTR_FUN_0079c078;
  FUN_00718ca0(__ptr + 1);
  FUN_00715e00(__ptr + 0x16);
  free(__ptr);
  return;
}


// ===== 00719b34  FUN_00719b34 =====

void FUN_00719b34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0079be30;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    free((void *)param_1[10]);
  }
  *param_1 = &PTR_FUN_0079bbf0;
  FUN_00732094(param_1 + 1);
  return;
}


// ===== 00719b94  FUN_00719b94 =====

void FUN_00719b94(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a10f8 + 0x10);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    free((void *)param_1[10]);
  }
  *param_1 = (long)(PTR_DAT_007a3818 + 0x10);
  FUN_00732094(param_1 + 1);
  free(param_1);
  return;
}


// ===== 00719bf4  FUN_00719bf4 =====

void FUN_00719bf4(long *param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00719c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,param_3,0);
  return;
}


// ===== 00719c0c  FUN_00719c0c =====

void FUN_00719c0c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_007a10f8;
  puVar1 = PTR_DAT_007a1100 + 0x68;
  puVar2 = PTR_DAT_007a1100 + 0x40;
  *param_1 = (long)(PTR_DAT_007a1100 + 0x18);
  param_1[0x10] = (long)puVar1;
  param_1[2] = (long)puVar2;
  param_1[3] = (long)(puVar3 + 0x10);
  if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
    free((void *)param_1[0xd]);
  }
  param_1[3] = (long)(PTR_DAT_007a3818 + 0x10);
  FUN_00732094(param_1 + 4);
  FUN_00715e00(param_1 + 0x10);
  free(param_1);
  return;
}


// ===== 00719c94  FUN_00719c94 =====

void FUN_00719c94(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_007a10f8;
  puVar1 = PTR_DAT_007a1100 + 0x68;
  puVar2 = PTR_DAT_007a1100 + 0x40;
  param_1[-2] = (long)(PTR_DAT_007a1100 + 0x18);
  param_1[0xe] = (long)puVar1;
  *param_1 = (long)puVar2;
  param_1[1] = (long)(puVar3 + 0x10);
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    free((void *)param_1[0xb]);
  }
  param_1[1] = (long)(PTR_DAT_007a3818 + 0x10);
  FUN_00732094(param_1 + 2);
  FUN_00715e00(param_1 + 0xe);
  return;
}


// ===== 00719d14  FUN_00719d14 =====

void FUN_00719d14(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_007a1100 + 0x68;
  puVar2 = PTR_DAT_007a1100 + 0x40;
  param_1[-2] = (long)(PTR_DAT_007a1100 + 0x18);
  param_1[0xe] = (long)puVar1;
  puVar1 = PTR_DAT_007a10f8 + 0x10;
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar1;
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    free((void *)param_1[0xb]);
  }
  param_1[1] = (long)(PTR_DAT_007a3818 + 0x10);
  FUN_00732094(param_1 + 2);
  FUN_00715e00(param_1 + 0xe);
  free(param_1 + -2);
  return;
}


// ===== 00719da8  FUN_00719da8 =====

void FUN_00719da8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  param_1 = (long *)((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1 = PTR_DAT_007a1100 + 0x68;
  puVar2 = PTR_DAT_007a1100 + 0x40;
  puVar3 = PTR_DAT_007a10f8 + 0x10;
  *param_1 = (long)(PTR_DAT_007a1100 + 0x18);
  param_1[0x10] = (long)puVar1;
  param_1[2] = (long)puVar2;
  param_1[3] = (long)puVar3;
  if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
    free((void *)param_1[0xd]);
  }
  param_1[3] = (long)(PTR_DAT_007a3818 + 0x10);
  FUN_00732094(param_1 + 4);
  FUN_00715e00(param_1 + 0x10);
  return;
}


// ===== 00719e30  FUN_00719e30 =====

void FUN_00719e30(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  param_1 = (long *)((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1 = PTR_DAT_007a1100 + 0x68;
  puVar2 = PTR_DAT_007a1100 + 0x40;
  puVar3 = PTR_DAT_007a10f8 + 0x10;
  *param_1 = (long)(PTR_DAT_007a1100 + 0x18);
  param_1[0x10] = (long)puVar1;
  param_1[2] = (long)puVar2;
  param_1[3] = (long)puVar3;
  if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
    free((void *)param_1[0xd]);
  }
  param_1[3] = (long)(PTR_DAT_007a3818 + 0x10);
  FUN_00732094(param_1 + 4);
  FUN_00715e00(param_1 + 0x10);
  free(param_1);
  return;
}


// ===== 00719ec0  FUN_00719ec0 =====

void FUN_00719ec0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_007a1e40 + 0x18;
  puVar2 = PTR_DAT_007a10f8 + 0x10;
  param_1[0xe] = (long)(PTR_DAT_007a1e40 + 0x40);
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar2;
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    free((void *)param_1[0xb]);
  }
  param_1[1] = (long)(PTR_DAT_007a3818 + 0x10);
  FUN_00732094(param_1 + 2);
  FUN_00715e00(param_1 + 0xe);
  free(param_1);
  return;
}


// ===== 00719f40  FUN_00719f40 =====

void FUN_00719f40(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a10f8;
  param_1 = (long *)((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1 = PTR_DAT_007a1e40 + 0x18;
  param_1[0xe] = (long)(PTR_DAT_007a1e40 + 0x40);
  *param_1 = (long)puVar1;
  param_1[1] = (long)(puVar2 + 0x10);
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    free((void *)param_1[0xb]);
  }
  param_1[1] = (long)(PTR_DAT_007a3818 + 0x10);
  FUN_00732094(param_1 + 2);
  FUN_00715e00(param_1 + 0xe);
  return;
}


// ===== 00719fc0  FUN_00719fc0 =====

void FUN_00719fc0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a10f8;
  param_1 = (long *)((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1 = PTR_DAT_007a1e40 + 0x18;
  param_1[0xe] = (long)(PTR_DAT_007a1e40 + 0x40);
  *param_1 = (long)puVar1;
  param_1[1] = (long)(puVar2 + 0x10);
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    free((void *)param_1[0xb]);
  }
  param_1[1] = (long)(PTR_DAT_007a3818 + 0x10);
  FUN_00732094(param_1 + 2);
  FUN_00715e00(param_1 + 0xe);
  free(param_1);
  return;
}


// ===== 0071a048  FUN_0071a048 =====

void FUN_0071a048(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a10f8;
  puVar1 = PTR_DAT_007a1f68 + 0x18;
  param_1[0xf] = (long)(PTR_DAT_007a1f68 + 0x40);
  *param_1 = (long)puVar1;
  param_1[2] = (long)(puVar2 + 0x10);
  if ((*(byte *)(param_1 + 10) & 1) != 0) {
    free((void *)param_1[0xc]);
  }
  param_1[2] = (long)(PTR_DAT_007a3818 + 0x10);
  FUN_00732094(param_1 + 3);
  FUN_00715e00(param_1 + 0xf);
  free(param_1);
  return;
}


// ===== 0071a0cc  FUN_0071a0cc =====

void FUN_0071a0cc(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_0079c480;
  puVar1[0xf] = &PTR_FUN_0079c4a8;
  puVar1[2] = &PTR_FUN_0079be30;
  if ((*(byte *)(puVar1 + 10) & 1) != 0) {
    free((void *)puVar1[0xc]);
  }
  puVar1[2] = PTR_DAT_007a3818 + 0x10;
  FUN_00732094(puVar1 + 3);
  FUN_00715e00(puVar1 + 0xf);
  return;
}


// ===== 0071a150  FUN_0071a150 =====

void FUN_0071a150(long *param_1)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *__ptr = &PTR_FUN_0079c480;
  __ptr[0xf] = &PTR_FUN_0079c4a8;
  __ptr[2] = &PTR_FUN_0079be30;
  if ((*(byte *)(__ptr + 10) & 1) != 0) {
    free((void *)__ptr[0xc]);
  }
  __ptr[2] = PTR_DAT_007a3818 + 0x10;
  FUN_00732094(__ptr + 3);
  FUN_00715e00(__ptr + 0xf);
  free(__ptr);
  return;
}


// ===== 0071a1dc  FUN_0071a1dc =====

void FUN_0071a1dc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_58 [8];
  
  FUN_007160dc(&DAT_007b0580);
  puVar7 = PTR___sF_007a3898;
  DAT_007b0580 = &PTR_FUN_0079c5e0;
  DAT_007b05d0 = &DAT_007b05e8;
  DAT_007b05dc = 0xffffffff;
  DAT_007b05c0 = PTR___sF_007a3898;
  DAT_007b05e0 = 0;
  FUN_00732054(auStack_58,&DAT_007b0588);
                    /* try { // try from 0071a250 to 0071a25b has its CatchHandler @ 0071a608 */
  (*(code *)DAT_007b0580[2])(&DAT_007b0580,auStack_58);
  FUN_00732094(auStack_58);
  puVar5 = PTR_DAT_007a3888;
  puVar1 = PTR_DAT_007a3820 + 0x40;
  puVar2 = PTR_DAT_007a3820 + 0x18;
  *(undefined8 *)(PTR_DAT_007a3888 + 0x40) = 0;
  *(undefined **)(puVar5 + 0x10) = puVar1;
  *(undefined **)puVar5 = puVar2;
  *(undefined8 *)(puVar5 + 8) = 0;
                    /* try { // try from 0071a28c to 0071a297 has its CatchHandler @ 0071a5f4 */
  FUN_00715fc0(puVar5 + 0x10,&DAT_007b0580);
  *(undefined8 *)(puVar5 + 0x98) = 0;
  *(undefined4 *)(puVar5 + 0xa0) = 0xffffffff;
  FUN_0071a628(&DAT_007b05f0,puVar7 + 0x98,&DAT_007b0650);
  puVar6 = PTR_DAT_007a3890;
  puVar4 = PTR_DAT_007a3830;
  puVar1 = PTR_DAT_007a3830 + 0x18;
  puVar2 = PTR_DAT_007a3830 + 0x40;
  *(undefined8 *)(PTR_DAT_007a3890 + 0x38) = 0;
  *(undefined **)puVar6 = puVar1;
  *(undefined **)(puVar6 + 8) = puVar2;
                    /* try { // try from 0071a2e8 to 0071a2ef has its CatchHandler @ 0071a5e8 */
  FUN_00715fc0(puVar6 + 8,&DAT_007b05f0);
  *(undefined8 *)(puVar6 + 0x90) = 0;
  *(undefined4 *)(puVar6 + 0x98) = 0xffffffff;
  FUN_0071a628(&DAT_007b0658,puVar7 + 0x130,&DAT_007b06b8);
  puVar3 = PTR_DAT_007a37a8;
  *(undefined8 *)(PTR_DAT_007a37a8 + 0x38) = 0;
  *(undefined **)puVar3 = puVar1;
  *(undefined **)(puVar3 + 8) = puVar2;
                    /* try { // try from 0071a32c to 0071a333 has its CatchHandler @ 0071a5dc */
  FUN_00715fc0(puVar3 + 8,&DAT_007b0658);
  *(undefined8 *)(puVar3 + 0x90) = 0;
  *(undefined4 *)(puVar3 + 0x98) = 0xffffffff;
  puVar1 = PTR_DAT_007a38a0;
  lVar9 = *(long *)(*(long *)puVar3 + -0x18);
  *(undefined8 *)(PTR_DAT_007a38a0 + 0x38) = 0;
  uVar8 = *(undefined8 *)(puVar3 + lVar9 + 0x28);
  *(undefined **)puVar1 = puVar4 + 0x18;
  *(undefined **)(puVar1 + 8) = puVar4 + 0x40;
                    /* try { // try from 0071a370 to 0071a373 has its CatchHandler @ 0071a5d0 */
  FUN_00715fc0(puVar1 + 8,uVar8);
  lVar9 = *(long *)puVar5;
  *(undefined8 *)(puVar1 + 0x90) = 0;
  *(undefined4 *)(puVar1 + 0x98) = 0xffffffff;
  lVar10 = *(long *)puVar3;
  *(undefined **)(puVar5 + *(long *)(lVar9 + -0x18) + 0x88) = puVar6;
  lVar9 = *(long *)(lVar10 + -0x18);
  *(uint *)(puVar3 + lVar9 + 8) = *(uint *)(puVar3 + lVar9 + 8) | 0x2000;
  *(undefined **)(puVar3 + *(long *)(lVar10 + -0x18) + 0x88) = puVar6;
  FUN_00717ec8(&DAT_007b06c0);
  DAT_007b06c0 = &PTR_FUN_0079c710;
  DAT_007b0700 = puVar7;
  DAT_007b0710 = &DAT_007b0728;
  DAT_007b071c = 0xffffffff;
  DAT_007b0720 = 0;
  FUN_00732054(auStack_58,&DAT_007b06c8);
                    /* try { // try from 0071a3f8 to 0071a403 has its CatchHandler @ 0071a5b0 */
  (*(code *)DAT_007b06c0[2])(&DAT_007b06c0,auStack_58);
  FUN_00732094(auStack_58);
  puVar4 = PTR_DAT_007a38a8;
  puVar1 = PTR_DAT_007a3848 + 0x40;
  puVar2 = PTR_DAT_007a3848 + 0x18;
  *(undefined8 *)(PTR_DAT_007a38a8 + 0x40) = 0;
  *(undefined **)(puVar4 + 0x10) = puVar1;
  *(undefined **)puVar4 = puVar2;
  *(undefined8 *)(puVar4 + 8) = 0;
                    /* try { // try from 0071a434 to 0071a43f has its CatchHandler @ 0071a59c */
  FUN_00715fc0(puVar4 + 0x10,&DAT_007b06c0);
  *(undefined8 *)(puVar4 + 0x98) = 0;
  *(undefined4 *)(puVar4 + 0xa0) = 0xffffffff;
  FUN_0071a6d0(&DAT_007b0730,puVar7 + 0x98,&DAT_007b0790);
  puVar5 = PTR_DAT_007a38b0;
  puVar3 = PTR_DAT_007a3858;
  puVar1 = PTR_DAT_007a3858 + 0x18;
  puVar2 = PTR_DAT_007a3858 + 0x40;
  *(undefined8 *)(PTR_DAT_007a38b0 + 0x38) = 0;
  *(undefined **)puVar5 = puVar1;
  *(undefined **)(puVar5 + 8) = puVar2;
                    /* try { // try from 0071a490 to 0071a497 has its CatchHandler @ 0071a590 */
  FUN_00715fc0(puVar5 + 8,&DAT_007b0730);
  *(undefined8 *)(puVar5 + 0x90) = 0;
  *(undefined4 *)(puVar5 + 0x98) = 0xffffffff;
  FUN_0071a6d0(&DAT_007b0798,puVar7 + 0x130,&DAT_007b07f8);
  puVar6 = PTR_DAT_007a38b8;
  *(undefined8 *)(PTR_DAT_007a38b8 + 0x38) = 0;
  *(undefined **)puVar6 = puVar1;
  *(undefined **)(puVar6 + 8) = puVar2;
                    /* try { // try from 0071a4d4 to 0071a4db has its CatchHandler @ 0071a584 */
  FUN_00715fc0(puVar6 + 8,&DAT_007b0798);
  *(undefined8 *)(puVar6 + 0x90) = 0;
  *(undefined4 *)(puVar6 + 0x98) = 0xffffffff;
  puVar1 = PTR_DAT_007a38c0;
  lVar9 = *(long *)(*(long *)puVar6 + -0x18);
  *(undefined8 *)(PTR_DAT_007a38c0 + 0x38) = 0;
  uVar8 = *(undefined8 *)(puVar6 + lVar9 + 0x28);
  *(undefined **)puVar1 = puVar3 + 0x18;
  *(undefined **)(puVar1 + 8) = puVar3 + 0x40;
                    /* try { // try from 0071a518 to 0071a51b has its CatchHandler @ 0071a578 */
  FUN_00715fc0(puVar1 + 8,uVar8);
  lVar9 = *(long *)puVar4;
  *(undefined4 *)(puVar1 + 0x98) = 0xffffffff;
  lVar10 = *(long *)puVar6;
  *(undefined8 *)(puVar1 + 0x90) = 0;
  *(undefined **)(puVar4 + *(long *)(lVar9 + -0x18) + 0x88) = puVar5;
  lVar9 = *(long *)(lVar10 + -0x18);
  *(uint *)(puVar6 + lVar9 + 8) = *(uint *)(puVar6 + lVar9 + 8) | 0x2000;
  *(undefined **)(puVar6 + *(long *)(lVar10 + -0x18) + 0x88) = puVar5;
  return;
}


// ===== 0071a628  FUN_0071a628 =====

void FUN_0071a628(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_18 [8];
  
  FUN_007160dc();
  *param_1 = &PTR_FUN_0079c678;
  param_1[8] = param_2;
  FUN_00732054(auStack_18,param_1 + 1);
                    /* try { // try from 0071a668 to 0071a677 has its CatchHandler @ 0071a6b4 */
  plVar2 = (long *)FUN_0073220c(auStack_18,PTR_DAT_007a3870);
  FUN_00732094(auStack_18);
  lVar3 = *plVar2;
  param_1[9] = plVar2;
  param_1[10] = param_3;
  bVar1 = (**(code **)(lVar3 + 0x38))(plVar2);
  *(byte *)(param_1 + 0xb) = bVar1 & 1;
  return;
}


// ===== 0071a6d0  FUN_0071a6d0 =====

void FUN_0071a6d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_18 [8];
  
  FUN_00717ec8();
  *param_1 = &PTR_FUN_0079c7a8;
  param_1[8] = param_2;
  FUN_00732054(auStack_18,param_1 + 1);
                    /* try { // try from 0071a710 to 0071a71f has its CatchHandler @ 0071a75c */
  plVar2 = (long *)FUN_0073220c(auStack_18,PTR_DAT_007a38c8);
  FUN_00732094(auStack_18);
  lVar3 = *plVar2;
  param_1[9] = plVar2;
  param_1[10] = param_3;
  bVar1 = (**(code **)(lVar3 + 0x38))(plVar2);
  *(byte *)(param_1 + 0xb) = bVar1 & 1;
  return;
}


// ===== 0071a778  FUN_0071a778 =====

void FUN_0071a778(void)

{
                    /* try { // try from 0071a784 to 0071a7b3 has its CatchHandler @ 0071a7c0 */
  FUN_007165e0(&DAT_007b01b8);
  FUN_007165e0(&DAT_007b0438);
  FUN_007181f4(&DAT_007b0258);
  FUN_007181f4(&DAT_007b04d8);
  return;
}


// ===== 0071a7c4  FUN_0071a7c4 =====

void FUN_0071a7c4(void)

{
  int iVar1;
  
  if (((DAT_007b0808 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007b0808), iVar1 != 0)) {
                    /* try { // try from 0071a804 to 0071a807 has its CatchHandler @ 0071a83c */
    FUN_0071a1dc();
    __cxa_atexit(FUN_0071a778,&DAT_007b0800,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007b0808);
    return;
  }
  return;
}


// ===== 0071a854  FUN_0071a854 =====

void FUN_0071a854(void)

{
  return;
}


// ===== 0071a85c  FUN_0071a85c =====

void FUN_0071a85c(void *param_1)

{
  FUN_00716098();
  free(param_1);
  return;
}


// ===== 0071a888  FUN_0071a888 =====

void FUN_0071a888(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  plVar3 = (long *)FUN_0073220c(param_2,PTR_DAT_007a3870);
  lVar5 = *plVar3;
  *(long **)(param_1 + 0x48) = plVar3;
  uVar2 = (**(code **)(lVar5 + 0x30))();
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  bVar1 = (**(code **)(**(long **)(param_1 + 0x48) + 0x38))(*(long **)(param_1 + 0x48));
  *(byte *)(param_1 + 0x61) = bVar1 & 1;
  if (*(int *)(param_1 + 0x58) < 9) {
    return;
  }
  uVar4 = FUN_0071280c("unsupported locale for standard input");
  FUN_0071aa48(uVar4,0);
  return;
}


// ===== 0071a908  FUN_0071a908 =====

void FUN_0071a908(undefined8 param_1)

{
  FUN_0071aa48(param_1,0);
  return;
}


// ===== 0071a914  FUN_0071a914 =====

void FUN_0071a914(undefined8 param_1)

{
  FUN_0071aa48(param_1,1);
  return;
}


// ===== 0071a920  FUN_0071a920 =====

int FUN_0071a920(long param_1,int param_2)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  undefined1 auStack_48 [12];
  undefined1 local_3c [4];
  undefined1 *local_38;
  undefined1 local_18 [8];
  
  if (param_2 == -1) {
    if ((*(byte *)(param_1 + 0x60) & 1) != 0) goto LAB_0071aa18;
    param_2 = *(int *)(param_1 + 0x5c);
    bVar2 = param_2 != -1;
LAB_0071aa28:
    *(bool *)(param_1 + 0x60) = bVar2;
  }
  else {
    if ((*(char *)(param_1 + 0x61) == '\0') || (*(char *)(param_1 + 0x60) == '\0')) {
      if (*(char *)(param_1 + 0x60) == '\0') goto LAB_0071aa20;
      local_3c[0] = (undefined1)*(undefined4 *)(param_1 + 0x5c);
      iVar3 = (**(code **)(**(long **)(param_1 + 0x48) + 0x18))
                        (*(long **)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),local_3c,
                         (ulong)local_3c | 1,auStack_48,local_18,&stack0xfffffffffffffff0,&local_38)
      ;
      if (1 < iVar3 - 1U) {
        if (iVar3 == 3) {
          local_38 = (undefined1 *)((ulong)local_18 | 1);
          local_18[0] = (undefined1)*(undefined4 *)(param_1 + 0x5c);
        }
        do {
          if (local_38 <= local_18) goto LAB_0071aa20;
          pbVar1 = local_38 + -1;
          local_38 = local_38 + -1;
          iVar3 = ungetc((uint)*pbVar1,*(FILE **)(param_1 + 0x40));
        } while (iVar3 != -1);
      }
    }
    else {
      iVar3 = ungetc(*(int *)(param_1 + 0x5c),*(FILE **)(param_1 + 0x40));
      if (iVar3 != -1) {
LAB_0071aa20:
        bVar2 = true;
        *(int *)(param_1 + 0x5c) = param_2;
        goto LAB_0071aa28;
      }
    }
LAB_0071aa18:
    param_2 = -1;
  }
  return param_2;
}


// ===== 0071aa48  FUN_0071aa48 =====

uint FUN_0071aa48(long param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [12];
  byte local_4c [3];
  byte abStack_49 [9];
  
  if (*(char *)(param_1 + 0x60) == '\0') {
    if (*(char *)(param_1 + 0x61) == '\0') {
      uVar1 = *(uint *)(param_1 + 0x58);
      uVar4 = 0;
      if ((int)uVar1 < 2) {
        uVar1 = 1;
      }
      uVar3 = (ulong)uVar1;
      do {
        iVar2 = getc(*(FILE **)(param_1 + 0x40));
        if (iVar2 == -1) {
          return 0xffffffff;
        }
        abStack_49[uVar4 + 1] = (byte)iVar2;
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
      while( true ) {
        uVar5 = **(undefined8 **)(param_1 + 0x50);
        iVar2 = (**(code **)(**(long **)(param_1 + 0x48) + 0x20))
                          (*(long **)(param_1 + 0x48),*(undefined8 **)(param_1 + 0x50),
                           abStack_49 + 1,abStack_49 + uVar3 + 1,auStack_58,local_4c,
                           (ulong)local_4c | 1,auStack_60);
        if (iVar2 != 1) break;
        **(undefined8 **)(param_1 + 0x50) = uVar5;
        if (uVar3 == 8) goto LAB_0071ab98;
        iVar2 = getc(*(FILE **)(param_1 + 0x40));
        if (iVar2 == -1) {
          return 0xffffffff;
        }
        abStack_49[uVar3 + 1] = (byte)iVar2;
        uVar3 = uVar3 + 1;
      }
      if (iVar2 == 2) {
LAB_0071ab98:
        uVar1 = 0xffffffff;
      }
      else {
        if (iVar2 == 3) {
          local_4c[0] = abStack_49[1];
        }
        if ((param_2 & 1) == 0) {
          uVar4 = uVar3 & 0xffffffff;
          do {
            if ((long)uVar4 < 1) {
              return (uint)local_4c[0];
            }
            iVar2 = ungetc((uint)abStack_49[uVar4],*(FILE **)(param_1 + 0x40));
            uVar4 = uVar4 - 1;
          } while (iVar2 != -1);
          uVar1 = 0xffffffff;
        }
        else {
          uVar1 = (uint)local_4c[0];
          *(uint *)(param_1 + 0x5c) = (uint)local_4c[0];
        }
      }
    }
    else {
      uVar1 = getc(*(FILE **)(param_1 + 0x40));
      if (uVar1 != 0xffffffff) {
        uVar1 = uVar1 & 0xff;
        if ((param_2 & 1) == 0) {
          iVar2 = ungetc(uVar1,*(FILE **)(param_1 + 0x40));
          if (iVar2 == -1) {
            uVar1 = 0xffffffff;
          }
        }
        else {
          *(uint *)(param_1 + 0x5c) = uVar1;
        }
      }
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x5c);
    if ((param_2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
    }
  }
  return uVar1;
}


// ===== 0071abf0  FUN_0071abf0 =====

void FUN_0071abf0(void *param_1)

{
  FUN_00716098();
  free(param_1);
  return;
}


// ===== 0071ac1c  FUN_0071ac1c =====

void FUN_0071ac1c(long *param_1,undefined8 param_2)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  
  (**(code **)(*param_1 + 0x30))();
  plVar2 = (long *)FUN_0073220c(param_2,PTR_DAT_007a3870);
  lVar3 = *plVar2;
  param_1[9] = (long)plVar2;
  bVar1 = (**(code **)(lVar3 + 0x38))();
  *(byte *)(param_1 + 0xb) = bVar1 & 1;
  return;
}


// ===== 0071ac78  FUN_0071ac78 =====

int FUN_0071ac78(long param_1)

{
  int iVar1;
  size_t sVar2;
  size_t __n;
  long local_40;
  undefined1 auStack_38 [8];
  
  do {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x48) + 0x28))
                      (*(long **)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),auStack_38,
                       &stack0xffffffffffffffd0,&local_40);
    __n = local_40 - (long)auStack_38;
    sVar2 = fwrite(auStack_38,1,__n,*(FILE **)(param_1 + 0x40));
    if (sVar2 != __n) goto LAB_0071acec;
  } while (iVar1 == 1);
  if (iVar1 == 2) {
LAB_0071acec:
    iVar1 = -1;
  }
  else {
    iVar1 = fflush(*(FILE **)(param_1 + 0x40));
    iVar1 = -(uint)(iVar1 != 0);
  }
  return iVar1;
}


// ===== 0071ad1c  FUN_0071ad1c =====

size_t FUN_0071ad1c(long *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  size_t sVar2;
  
  if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
    sVar2 = fwrite(param_2,1,param_3,(FILE *)param_1[8]);
    return sVar2;
  }
  if ((long)param_3 < 1) {
    param_3 = 0;
  }
  else {
    sVar2 = 0;
    do {
      iVar1 = (**(code **)(*param_1 + 0x68))(param_1,*(undefined1 *)((long)param_2 + sVar2));
      if (iVar1 == -1) {
        return sVar2;
      }
      sVar2 = sVar2 + 1;
    } while (param_3 != sVar2);
  }
  return param_3;
}


// ===== 0071adc0  FUN_0071adc0 =====

int FUN_0071adc0(long param_1,int param_2)

{
  uint uVar1;
  size_t sVar2;
  undefined1 *__ptr;
  size_t __n;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 local_4c [4];
  undefined1 local_48 [8];
  
  if (param_2 == -1) {
    param_2 = 0;
  }
  else {
    local_4c[0] = (undefined1)param_2;
    if (*(char *)(param_1 + 0x58) == '\0') {
      __ptr = local_4c;
      local_58 = local_48;
      do {
        uVar1 = (**(code **)(**(long **)(param_1 + 0x48) + 0x18))
                          (*(long **)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),__ptr,
                           (ulong)local_4c | 1,&local_60,local_48,&stack0xffffffffffffffc0,&local_58
                          );
        if (local_60 == __ptr) {
          return -1;
        }
        if (uVar1 == 3) {
          sVar2 = fwrite(__ptr,1,1,*(FILE **)(param_1 + 0x40));
          if (sVar2 != 1) {
            return -1;
          }
          return param_2;
        }
        if (1 < uVar1) {
          return -1;
        }
        __n = (long)local_58 - (long)local_48;
        sVar2 = fwrite(local_48,1,__n,*(FILE **)(param_1 + 0x40));
        if (sVar2 != __n) {
          return -1;
        }
        __ptr = local_60;
      } while (uVar1 == 1);
    }
    else {
      local_48[0] = local_4c[0];
      sVar2 = fwrite(local_48,1,1,*(FILE **)(param_1 + 0x40));
      if (sVar2 != 1) {
        param_2 = -1;
      }
    }
  }
  return param_2;
}


// ===== 0071aef0  FUN_0071aef0 =====

void FUN_0071aef0(void *param_1)

{
  FUN_00717e84();
  free(param_1);
  return;
}


// ===== 0071af1c  FUN_0071af1c =====

void FUN_0071af1c(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  plVar3 = (long *)FUN_0073220c(param_2,PTR_DAT_007a38c8);
  lVar5 = *plVar3;
  *(long **)(param_1 + 0x48) = plVar3;
  uVar2 = (**(code **)(lVar5 + 0x30))();
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  bVar1 = (**(code **)(**(long **)(param_1 + 0x48) + 0x38))(*(long **)(param_1 + 0x48));
  *(byte *)(param_1 + 0x61) = bVar1 & 1;
  if (*(int *)(param_1 + 0x58) < 9) {
    return;
  }
  uVar4 = FUN_0071280c("unsupported locale for standard input");
  FUN_0071b0dc(uVar4,0);
  return;
}


// ===== 0071af9c  FUN_0071af9c =====

void FUN_0071af9c(undefined8 param_1)

{
  FUN_0071b0dc(param_1,0);
  return;
}


// ===== 0071afa8  FUN_0071afa8 =====

void FUN_0071afa8(undefined8 param_1)

{
  FUN_0071b0dc(param_1,1);
  return;
}


// ===== 0071afb4  FUN_0071afb4 =====

int FUN_0071afb4(long param_1,int param_2)

{
  byte *pbVar1;
  bool bVar2;
  wint_t wVar3;
  int iVar4;
  undefined1 auStack_48 [12];
  undefined4 local_3c;
  undefined1 *local_38;
  undefined1 local_18 [8];
  
  if (param_2 == -1) {
    if ((*(byte *)(param_1 + 0x60) & 1) != 0) goto LAB_0071b0ac;
    param_2 = *(int *)(param_1 + 0x5c);
    bVar2 = param_2 != -1;
LAB_0071b0bc:
    *(bool *)(param_1 + 0x60) = bVar2;
  }
  else {
    if ((*(char *)(param_1 + 0x61) == '\0') || (*(char *)(param_1 + 0x60) == '\0')) {
      if (*(char *)(param_1 + 0x60) == '\0') goto LAB_0071b0b4;
      local_3c = *(undefined4 *)(param_1 + 0x5c);
      iVar4 = (**(code **)(**(long **)(param_1 + 0x48) + 0x18))
                        (*(long **)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),&local_3c,
                         &local_38,auStack_48,local_18,&stack0xfffffffffffffff0,&local_38);
      if (1 < iVar4 - 1U) {
        if (iVar4 == 3) {
          local_38 = (undefined1 *)((ulong)local_18 | 1);
          local_18[0] = (undefined1)*(undefined4 *)(param_1 + 0x5c);
        }
        do {
          if (local_38 <= local_18) goto LAB_0071b0b4;
          pbVar1 = local_38 + -1;
          local_38 = local_38 + -1;
          iVar4 = ungetc((uint)*pbVar1,*(FILE **)(param_1 + 0x40));
        } while (iVar4 != -1);
      }
    }
    else {
      wVar3 = ungetwc(*(wint_t *)(param_1 + 0x5c),*(__FILE **)(param_1 + 0x40));
      if (wVar3 != 0xffffffff) {
LAB_0071b0b4:
        bVar2 = true;
        *(int *)(param_1 + 0x5c) = param_2;
        goto LAB_0071b0bc;
      }
    }
LAB_0071b0ac:
    param_2 = -1;
  }
  return param_2;
}


// ===== 0071b0dc  FUN_0071b0dc =====

wint_t FUN_0071b0dc(long param_1,ulong param_2)

{
  uint uVar1;
  wint_t __wc;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [12];
  undefined4 local_4c;
  byte local_48 [8];
  
  if (*(char *)(param_1 + 0x60) == '\0') {
    if (*(char *)(param_1 + 0x61) == '\0') {
      uVar1 = *(uint *)(param_1 + 0x58);
      uVar4 = 0;
      if ((int)uVar1 < 2) {
        uVar1 = 1;
      }
      uVar3 = (ulong)uVar1;
      do {
        iVar2 = getc(*(FILE **)(param_1 + 0x40));
        if (iVar2 == -1) {
          return 0xffffffff;
        }
        local_48[uVar4] = (byte)iVar2;
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
      while( true ) {
        uVar5 = **(undefined8 **)(param_1 + 0x50);
        iVar2 = (**(code **)(**(long **)(param_1 + 0x48) + 0x20))
                          (*(long **)(param_1 + 0x48),*(undefined8 **)(param_1 + 0x50),local_48,
                           local_48 + uVar3,auStack_58,&local_4c,local_48,auStack_60);
        if (iVar2 != 1) break;
        **(undefined8 **)(param_1 + 0x50) = uVar5;
        if (uVar3 == 8) goto LAB_0071b224;
        iVar2 = getc(*(FILE **)(param_1 + 0x40));
        if (iVar2 == -1) {
          return 0xffffffff;
        }
        local_48[uVar3] = (byte)iVar2;
        uVar3 = uVar3 + 1;
      }
      if (iVar2 == 2) {
LAB_0071b224:
        local_4c = 0xffffffff;
      }
      else {
        if (iVar2 == 3) {
          local_4c = (wint_t)local_48[0];
        }
        if ((param_2 & 1) == 0) {
          uVar4 = uVar3 & 0xffffffff;
          do {
            if ((long)uVar4 < 1) {
              return local_4c;
            }
            iVar2 = ungetc((uint)local_48[uVar4 - 1],*(FILE **)(param_1 + 0x40));
            uVar4 = uVar4 - 1;
          } while (iVar2 != -1);
          local_4c = 0xffffffff;
        }
        else {
          *(wint_t *)(param_1 + 0x5c) = local_4c;
        }
      }
    }
    else {
      __wc = getwc(*(__FILE **)(param_1 + 0x40));
      local_4c = __wc;
      if (__wc != 0xffffffff) {
        if ((param_2 & 1) == 0) {
          local_4c = ungetwc(__wc,*(__FILE **)(param_1 + 0x40));
          if (local_4c != 0xffffffff) {
            local_4c = __wc;
          }
        }
        else {
          *(wint_t *)(param_1 + 0x5c) = __wc;
        }
      }
    }
  }
  else {
    local_4c = *(wint_t *)(param_1 + 0x5c);
    if ((param_2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
    }
  }
  return local_4c;
}


// ===== 0071b27c  FUN_0071b27c =====

void FUN_0071b27c(void *param_1)

{
  FUN_00717e84();
  free(param_1);
  return;
}


// ===== 0071b2a8  FUN_0071b2a8 =====

void FUN_0071b2a8(long *param_1,undefined8 param_2)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  
  (**(code **)(*param_1 + 0x30))();
  plVar2 = (long *)FUN_0073220c(param_2,PTR_DAT_007a38c8);
  lVar3 = *plVar2;
  param_1[9] = (long)plVar2;
  bVar1 = (**(code **)(lVar3 + 0x38))();
  *(byte *)(param_1 + 0xb) = bVar1 & 1;
  return;
}


// ===== 0071b304  FUN_0071b304 =====

int FUN_0071b304(long param_1)

{
  int iVar1;
  size_t sVar2;
  size_t __n;
  long local_40;
  undefined1 auStack_38 [8];
  
  do {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x48) + 0x28))
                      (*(long **)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),auStack_38,
                       &stack0xffffffffffffffd0,&local_40);
    __n = local_40 - (long)auStack_38;
    sVar2 = fwrite(auStack_38,1,__n,*(FILE **)(param_1 + 0x40));
    if (sVar2 != __n) goto LAB_0071b378;
  } while (iVar1 == 1);
  if (iVar1 == 2) {
LAB_0071b378:
    iVar1 = -1;
  }
  else {
    iVar1 = fflush(*(FILE **)(param_1 + 0x40));
    iVar1 = -(uint)(iVar1 != 0);
  }
  return iVar1;
}


// ===== 0071b3a8  FUN_0071b3a8 =====

size_t FUN_0071b3a8(long *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  size_t sVar2;
  
  if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
    sVar2 = fwrite(param_2,4,param_3,(FILE *)param_1[8]);
    return sVar2;
  }
  if ((long)param_3 < 1) {
    param_3 = 0;
  }
  else {
    sVar2 = 0;
    do {
      iVar1 = (**(code **)(*param_1 + 0x68))(param_1,*(undefined4 *)((long)param_2 + sVar2 * 4));
      if (iVar1 == -1) {
        return sVar2;
      }
      sVar2 = sVar2 + 1;
    } while (param_3 != sVar2);
  }
  return param_3;
}


// ===== 0071b44c  FUN_0071b44c =====

wchar_t FUN_0071b44c(long param_1,wchar_t param_2)

{
  wint_t wVar1;
  uint uVar2;
  size_t sVar3;
  wchar_t *__ptr;
  size_t __n;
  wchar_t *local_60;
  undefined1 *local_58;
  wchar_t local_4c;
  undefined1 auStack_48 [8];
  
  if (param_2 == L'\xffffffff') {
    param_2 = L'\0';
  }
  else {
    local_4c = param_2;
    if (*(char *)(param_1 + 0x58) == '\0') {
      __ptr = &local_4c;
      local_58 = auStack_48;
      do {
        uVar2 = (**(code **)(**(long **)(param_1 + 0x48) + 0x18))
                          (*(long **)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),__ptr,
                           auStack_48,&local_60,auStack_48,&stack0xffffffffffffffc0,&local_58);
        if (local_60 == __ptr) {
          return L'\xffffffff';
        }
        if (uVar2 == 3) {
          sVar3 = fwrite(__ptr,1,1,*(FILE **)(param_1 + 0x40));
          if (sVar3 != 1) {
            return L'\xffffffff';
          }
          return param_2;
        }
        if (1 < uVar2) {
          return L'\xffffffff';
        }
        __n = (long)local_58 - (long)auStack_48;
        sVar3 = fwrite(auStack_48,1,__n,*(FILE **)(param_1 + 0x40));
        if (sVar3 != __n) {
          return L'\xffffffff';
        }
        __ptr = local_60;
      } while (uVar2 == 1);
    }
    else {
      wVar1 = fputwc(param_2,*(__FILE **)(param_1 + 0x40));
      if (wVar1 == 0xffffffff) {
        param_2 = L'\xffffffff';
      }
    }
  }
  return param_2;
}


// ===== 0071b570  _INIT_2 =====

void _INIT_2(void)

{
  FUN_0071a7c4(&DAT_007b0578);
  __cxa_atexit(PTR_FUN_007a38d0,&DAT_007b0578,&PTR_LOOP_0075ec90);
  return;
}


// ===== 0071b5b4  thunk_FUN_00712454 =====

void thunk_FUN_00712454(void)

{
  FUN_00712454();
  return;
}


// ===== 0071b5bc  FUN_0071b5bc =====

void FUN_0071b5bc(void *param_1)

{
  thunk_FUN_00712454();
  free(param_1);
  return;
}


// ===== 0071b5e8  FUN_0071b5e8 =====

ulong FUN_0071b5e8(undefined8 param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5)

{
  byte *pbVar1;
  
  pbVar1 = param_2;
  if (param_4 != param_5) {
    pbVar1 = param_2 + ((long)param_5 - (long)param_4);
    do {
      if (param_2 == param_3) {
        return 0xffffffff;
      }
      if (*param_2 < *param_4) {
        return 0xffffffff;
      }
      if (*param_4 < *param_2) {
        return 1;
      }
      param_4 = param_4 + 1;
      param_2 = param_2 + 1;
    } while (param_4 != param_5);
  }
  return (ulong)(pbVar1 != param_3);
}


// ===== 0071b64c  FUN_0071b64c =====

void FUN_0071b64c(ulong *param_1,undefined8 param_2,void *param_3,void *param_4)

{
  ulong uVar1;
  undefined1 *__dest;
  ulong __n;
  
  __n = (long)param_4 - (long)param_3;
  if (__n < 0xfffffffffffffff8) {
    if (__n < 0x17) {
      __dest = (undefined1 *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)__n << 1);
    }
    else {
      uVar1 = (__n & 0xfffffffffffffff8) + 8;
      if ((__n | 7) != 0x17) {
        uVar1 = __n | 7;
      }
      __dest = (undefined1 *)FUN_00759c3c(uVar1 + 1);
      param_1[1] = __n;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar1 + 1 | 1;
    }
    if (param_3 != param_4) {
      memcpy(__dest,param_3,__n);
      __dest = __dest + __n;
    }
    *__dest = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_002fb400(param_1);
}


// ===== 0071b708  FUN_0071b708 =====

ulong FUN_0071b708(undefined8 param_1,byte *param_2,byte *param_3)

{
  ulong uVar1;
  byte *pbVar2;
  ulong uVar3;
  
  if (param_2 != param_3) {
    uVar1 = 0;
    do {
      pbVar2 = param_2 + 1;
      uVar1 = (ulong)*param_2 + uVar1 * 0x10;
      uVar3 = uVar1 & 0xf000000000000000;
      uVar1 = (uVar3 | uVar3 >> 0x38) ^ uVar1;
      param_2 = pbVar2;
    } while (pbVar2 != param_3);
    return uVar1;
  }
  return 0;
}


// ===== 0071b740  thunk_FUN_00712454 =====

void thunk_FUN_00712454(void)

{
  FUN_00712454();
  return;
}


// ===== 0071b748  FUN_0071b748 =====

void FUN_0071b748(void *param_1)

{
  thunk_FUN_00712454();
  free(param_1);
  return;
}


// ===== 0071b774  FUN_0071b774 =====

ulong FUN_0071b774(undefined8 param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  if (param_4 != param_5) {
    do {
      if (param_2 == param_3) {
        return 0xffffffff;
      }
      if (*param_2 < *param_4) {
        return 0xffffffff;
      }
      if (*param_4 < *param_2) {
        return 1;
      }
      param_4 = param_4 + 1;
      param_2 = param_2 + 1;
    } while (param_4 != param_5);
  }
  return (ulong)(param_2 != param_3);
}


// ===== 0071b7cc  FUN_0071b7cc =====

byte * FUN_0071b7cc(ulong *param_1,byte *param_2,uint *param_3,uint *param_4)

{
  size_t __n;
  ulong uVar1;
  uint *extraout_x1;
  uint *puVar2;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar3;
  
  uVar5 = (long)param_4 - (long)param_3;
  uVar6 = (long)uVar5 >> 2;
  if (uVar6 < 0x3ffffffffffffff8) {
    if (uVar6 < 5) {
      pbVar4 = (byte *)((long)param_1 + 4);
      *(byte *)param_1 = (byte)(uVar5 >> 1) & 0xfe;
    }
    else {
      uVar1 = (uVar6 & 0x3ffffffffffffffe) + 2;
      if ((uVar6 | 1) != 5) {
        uVar1 = uVar6 | 1;
      }
      pbVar4 = (byte *)FUN_00759c3c((uVar1 + 1) * 4);
      param_1[1] = uVar6;
      param_1[2] = (ulong)pbVar4;
      *param_1 = uVar1 + 1 | 1;
      param_2 = pbVar4;
    }
    if (param_3 != param_4) {
      __n = (uVar5 - 4 & 0xfffffffffffffffc) + 4;
      param_2 = (byte *)memcpy(pbVar4,param_3,__n);
      pbVar4 = pbVar4 + __n;
    }
    pbVar4[0] = 0;
    pbVar4[1] = 0;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    return param_2;
  }
  FUN_002f9e4c(param_1);
  if (extraout_x1 != param_4) {
    pbVar4 = (byte *)0x0;
    puVar2 = extraout_x1;
    do {
      puVar3 = puVar2 + 1;
      uVar5 = (ulong)*puVar2 + (long)pbVar4 * 0x10;
      uVar6 = uVar5 & 0xf000000000000000;
      pbVar4 = (byte *)((uVar6 | uVar6 >> 0x38) ^ uVar5);
      puVar2 = puVar3;
    } while (puVar3 != param_4);
    return pbVar4;
  }
  return (byte *)0x0;
}


// ===== 0071b8a0  FUN_0071b8a0 =====

ulong FUN_0071b8a0(undefined8 param_1,uint *param_2,uint *param_3)

{
  ulong uVar1;
  uint *puVar2;
  ulong uVar3;
  
  if (param_2 != param_3) {
    uVar1 = 0;
    do {
      puVar2 = param_2 + 1;
      uVar1 = (ulong)*param_2 + uVar1 * 0x10;
      uVar3 = uVar1 & 0xf000000000000000;
      uVar1 = (uVar3 | uVar3 >> 0x38) ^ uVar1;
      param_2 = puVar2;
    } while (puVar2 != param_3);
    return uVar1;
  }
  return 0;
}


// ===== 0071b8d8  FUN_0071b8d8 =====

undefined8
FUN_0071b8d8(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 *param_5,
            undefined1 *param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  long *plVar6;
  undefined **local_90 [2];
  void *local_80;
  byte local_78 [16];
  void *local_68;
  long local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined1 *local_48;
  
  local_58 = param_2;
  if ((*(byte *)(param_4 + 8) & 1) == 0) {
    local_90[0] = (undefined **)0xffffffffffffffff;
    uVar3 = (**(code **)(*param_1 + 0x20))();
    if (local_90[0] == (undefined **)0x1) {
      *param_6 = 1;
    }
    else if (local_90[0] == (undefined **)0x0) {
      *param_6 = 0;
    }
    else {
      *param_6 = 1;
      *param_5 = 4;
    }
  }
  else {
    FUN_00715df0(&local_60,param_4);
    lVar5 = local_60;
    puVar2 = PTR_DAT_007a1108;
    local_50 = PTR_DAT_007a1108;
    if (*(long *)PTR_DAT_007a1108 != -1) {
      local_90[0] = &local_50;
                    /* try { // try from 0071b97c to 0071b993 has its CatchHandler @ 0071bb50 */
      local_48 = (undefined1 *)local_90;
      FUN_00710f84(PTR_DAT_007a1108,&local_48,FUN_007374a0);
    }
    lVar1 = *(long *)(lVar5 + 0x10);
    if (((ulong)(*(long *)(lVar5 + 0x18) - lVar1 >> 3) <= (long)*(int *)(puVar2 + 8) - 1U) ||
       (lVar5 = *(long *)(lVar1 + ((long)*(int *)(puVar2 + 8) - 1U) * 8), lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0071bb04 to 0071bb07 has its CatchHandler @ 0071bb50 */
      FUN_007191ac();
    }
    FUN_00732094(&local_60);
    FUN_00715df0(&local_60,param_4);
    puVar2 = PTR_DAT_007a38d8;
    local_50 = PTR_DAT_007a38d8;
    if (*(long *)PTR_DAT_007a38d8 != -1) {
      local_90[0] = &local_50;
                    /* try { // try from 0071b9f4 to 0071ba0b has its CatchHandler @ 0071bb4c */
      local_48 = (undefined1 *)local_90;
      FUN_00710f84(PTR_DAT_007a38d8,&local_48,FUN_007374a0);
    }
    if (((ulong)(*(long *)(local_60 + 0x18) - *(long *)(local_60 + 0x10) >> 3) <=
         (long)*(int *)(puVar2 + 8) - 1U) ||
       (plVar6 = *(long **)(*(long *)(local_60 + 0x10) + ((long)*(int *)(puVar2 + 8) - 1U) * 8),
       plVar6 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0071bb08 to 0071bb0b has its CatchHandler @ 0071bb4c */
      FUN_007191ac();
    }
    FUN_00732094(&local_60);
                    /* try { // try from 0071ba3c to 0071ba4b has its CatchHandler @ 0071bb48 */
    (**(code **)(*plVar6 + 0x30))(local_90,plVar6);
                    /* try { // try from 0071ba54 to 0071ba5f has its CatchHandler @ 0071bb2c */
    (**(code **)(*plVar6 + 0x38))(local_78,plVar6);
                    /* try { // try from 0071ba64 to 0071ba83 has its CatchHandler @ 0071bb0c */
    puVar4 = (undefined1 *)FUN_0071bb64(&local_58,param_3,local_90,&local_60,lVar5,param_5,1);
    uVar3 = local_58;
    *param_6 = (undefined ***)puVar4 == local_90;
    if ((local_78[0] & 1) != 0) {
      free(local_68);
    }
    if (((ulong)local_90[0] & 1) != 0) {
      free(local_80);
    }
  }
  return uVar3;
}


// ===== 0071bb64  FUN_0071bb64 =====

byte * FUN_0071bb64(long *param_1,long *param_2,byte *param_3,byte *param_4,long *param_5,
                   uint *param_6,uint param_7)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  char *__ptr;
  long *plVar7;
  char cVar8;
  byte *pbVar9;
  byte *pbVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  long lVar14;
  ulong __size;
  char local_c4 [100];
  
  __size = ((long)param_4 - (long)param_3 >> 3) * -0x5555555555555555;
  if (100 < __size) {
    __ptr = (char *)malloc(__size);
    pcVar11 = __ptr;
    if (__ptr != (char *)0x0) goto LAB_0071bbdc;
    FUN_00712520();
  }
  __ptr = (char *)0x0;
  pcVar11 = local_c4;
LAB_0071bbdc:
  lVar14 = 0;
  pbVar10 = param_3;
  pcVar12 = pcVar11;
  if (param_3 != param_4) {
    do {
      pbVar9 = pbVar10 + 0x18;
      uVar1 = (ulong)(*pbVar10 >> 1);
      if ((*pbVar10 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar10 + 8);
      }
      cVar8 = '\x01';
      if (uVar1 == 0) {
        cVar8 = '\x02';
        lVar14 = lVar14 + 1;
      }
      __size = __size - (uVar1 == 0);
      *pcVar12 = cVar8;
      pbVar10 = pbVar9;
      pcVar12 = pcVar12 + 1;
    } while (pbVar9 != param_4);
  }
  lVar13 = 0;
  plVar7 = (long *)*param_1;
  if (plVar7 != (long *)0x0) goto LAB_0071bc50;
LAB_0071bc98:
  bVar2 = true;
  plVar7 = param_2;
  if (param_2 == (long *)0x0) goto LAB_0071bc64;
LAB_0071bca0:
  if (plVar7[3] == plVar7[4]) {
    iVar6 = (**(code **)(*plVar7 + 0x48))(plVar7);
    bVar3 = iVar6 == -1;
    param_2 = (long *)0x0;
    if (!bVar3) {
      param_2 = plVar7;
    }
  }
  else {
    bVar3 = false;
    param_2 = plVar7;
  }
  do {
    plVar7 = (long *)*param_1;
    if ((bVar2 == bVar3) || (__size == 0)) {
      if (plVar7 == (long *)0x0) {
        bVar2 = true;
joined_r0x0071bf30:
        if (param_2 != (long *)0x0) goto LAB_0071bea4;
LAB_0071bf34:
        if (bVar2 != false) goto LAB_0071beb4;
      }
      else {
        if (plVar7[3] != plVar7[4]) {
          bVar2 = false;
          goto joined_r0x0071bf30;
        }
                    /* try { // try from 0071bf50 to 0071bf7f has its CatchHandler @ 0071bfa4 */
        iVar6 = (**(code **)(*plVar7 + 0x48))();
        if (iVar6 != -1) {
          bVar2 = *param_1 == 0;
          goto joined_r0x0071bf30;
        }
        bVar2 = true;
        *param_1 = 0;
        if (param_2 == (long *)0x0) goto LAB_0071bf34;
LAB_0071bea4:
        if (param_2[3] == param_2[4]) {
          iVar6 = (**(code **)(*param_2 + 0x48))(param_2);
          if (bVar2 == (iVar6 == -1)) {
LAB_0071beb4:
            *param_6 = *param_6 | 2;
          }
        }
        else if (bVar2 == false) goto LAB_0071beb4;
      }
      if (param_3 != param_4) break;
      goto LAB_0071bee8;
    }
    if ((byte *)plVar7[3] == (byte *)plVar7[4]) {
                    /* try { // try from 0071bcfc to 0071bd1f has its CatchHandler @ 0071bfb0 */
      bVar4 = (**(code **)(*plVar7 + 0x48))();
    }
    else {
      bVar4 = *(byte *)plVar7[3];
    }
    if ((param_7 & 1) == 0) {
      bVar4 = (**(code **)(*param_5 + 0x18))(param_5);
    }
    if (param_3 == param_4) {
LAB_0071bc44:
      plVar7 = (long *)*param_1;
    }
    else {
      bVar2 = false;
      pbVar10 = param_3;
      pcVar12 = pcVar11;
      do {
        if (*pcVar12 == '\x01') {
          pbVar9 = *(byte **)(pbVar10 + 0x10);
          if ((*pbVar10 & 1) == 0) {
            pbVar9 = pbVar10 + 1;
          }
          bVar5 = pbVar9[lVar13];
          if ((param_7 & 1) == 0) {
                    /* try { // try from 0071bd8c to 0071bd97 has its CatchHandler @ 0071bfb4 */
            bVar5 = (**(code **)(*param_5 + 0x18))(param_5);
          }
          if (bVar4 == bVar5) {
            uVar1 = (ulong)(*pbVar10 >> 1);
            if ((*pbVar10 & 1) != 0) {
              uVar1 = *(ulong *)(pbVar10 + 8);
            }
            if (uVar1 == lVar13 + 1U) {
              __size = __size - 1;
              lVar14 = lVar14 + 1;
              *pcVar12 = '\x02';
            }
            bVar2 = true;
          }
          else {
            __size = __size - 1;
            *pcVar12 = '\0';
          }
        }
        pbVar10 = pbVar10 + 0x18;
        pcVar12 = pcVar12 + 1;
      } while (pbVar10 != param_4);
      if (bVar2) {
        plVar7 = (long *)*param_1;
        if (plVar7[3] == plVar7[4]) {
                    /* try { // try from 0071be18 to 0071be1b has its CatchHandler @ 0071bfa8 */
          (**(code **)(*plVar7 + 0x50))();
        }
        else {
          plVar7[3] = plVar7[3] + 1;
        }
        if ((1 < lVar14 + __size) && (param_3 != param_4)) {
          pbVar10 = param_3;
          pcVar12 = pcVar11;
          do {
            if (*pcVar12 == '\x02') {
              uVar1 = (ulong)(*pbVar10 >> 1);
              if ((*pbVar10 & 1) != 0) {
                uVar1 = *(ulong *)(pbVar10 + 8);
              }
              if (uVar1 != lVar13 + 1U) {
                lVar14 = lVar14 + -1;
                *pcVar12 = '\0';
              }
            }
            pbVar10 = pbVar10 + 0x18;
            pcVar12 = pcVar12 + 1;
          } while (pbVar10 != param_4);
        }
        goto LAB_0071bc44;
      }
      plVar7 = (long *)*param_1;
    }
    lVar13 = lVar13 + 1;
    if (plVar7 == (long *)0x0) goto LAB_0071bc98;
LAB_0071bc50:
    if (plVar7[3] == plVar7[4]) {
                    /* try { // try from 0071bc74 to 0071bcc3 has its CatchHandler @ 0071bfac */
      iVar6 = (**(code **)(*plVar7 + 0x48))();
      if (iVar6 == -1) {
        *param_1 = 0;
        goto LAB_0071bc98;
      }
      bVar2 = *param_1 == 0;
    }
    else {
      bVar2 = false;
    }
    plVar7 = param_2;
    if (param_2 != (long *)0x0) goto LAB_0071bca0;
LAB_0071bc64:
    bVar3 = true;
  } while( true );
  while( true ) {
    param_3 = param_3 + 0x18;
    pcVar11 = pcVar11 + 1;
    if (param_3 == param_4) break;
    if (*pcVar11 == '\x02') goto joined_r0x0071bf40;
  }
LAB_0071bee8:
  *param_6 = *param_6 | 4;
  param_3 = param_4;
joined_r0x0071bf40:
  if (__ptr != (char *)0x0) {
    free(__ptr);
  }
  return param_3;
}


// ===== 0071bfd0  FUN_0071bfd0 =====

void FUN_0071bfd0(void)

{
  FUN_0071bfd8();
  return;
}


// ===== 0071bfd8  FUN_0071bfd8 =====

long * FUN_0071bfd8(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                   undefined8 *param_6)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  void *pvVar8;
  ulong uVar9;
  long *plVar10;
  undefined4 uVar11;
  void *pvVar12;
  undefined4 local_16c;
  undefined4 *local_168;
  undefined4 auStack_160 [40];
  void *local_c0;
  undefined8 local_b8;
  ulong local_b0;
  void *local_a8;
  byte local_a0 [8];
  ulong local_98;
  void *local_90;
  undefined1 auStack_86 [26];
  undefined1 local_6c [12];
  
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar11 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar11 = 8;
  }
  else if (uVar1 == 8) {
    uVar11 = 0x10;
  }
  else {
    uVar11 = 10;
  }
  FUN_00722464(local_a0,param_4,auStack_86,local_6c);
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = (void *)0x0;
                    /* try { // try from 0071c06c to 0071c07f has its CatchHandler @ 0071c3c4 */
  FUN_0071341c(&local_b8,0x16,0);
  local_168 = auStack_160;
  pvVar12 = (void *)((ulong)&local_b8 | 1);
  pvVar8 = local_a8;
  if ((local_b8 & 1) == 0) {
    pvVar8 = (void *)((long)&local_b8 + 1);
  }
  local_16c = 0;
  local_c0 = pvVar8;
LAB_0071c0bc:
  plVar10 = param_3;
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    plVar3 = param_2;
joined_r0x0071c0dc:
    param_2 = plVar3;
    if (param_3 != (long *)0x0) goto LAB_0071c0e0;
LAB_0071c114:
    if (bVar4 != false) goto LAB_0071c284;
  }
  else {
    if (param_2[3] == param_2[4]) {
                    /* try { // try from 0071c0fc to 0071c12b has its CatchHandler @ 0071c3d0 */
      iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar4 = iVar5 == -1;
      plVar3 = (long *)0x0;
      if (!bVar4) {
        plVar3 = param_2;
      }
      goto joined_r0x0071c0dc;
    }
    bVar4 = false;
    if (param_3 == (long *)0x0) goto LAB_0071c114;
LAB_0071c0e0:
    if (param_3[3] == param_3[4]) {
      iVar5 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar10 = (long *)0x0;
      if (iVar5 != -1) {
        plVar10 = param_3;
      }
      param_3 = plVar10;
      if (bVar4 == (iVar5 == -1)) goto LAB_0071c284;
    }
    else if (bVar4 == false) goto LAB_0071c284;
  }
  uVar6 = local_b8 >> 1 & 0x7f;
  if ((local_b8 & 1) != 0) {
    uVar6 = local_b0;
  }
  if (local_c0 == (void *)((long)pvVar8 + uVar6)) {
    if ((long)uVar6 < 1) {
      uVar9 = uVar6 * 2;
      pvVar8 = local_a8;
      uVar2 = uVar9;
      if ((local_b8 & 1) == 0) {
        local_b8 = CONCAT71(local_b8._1_7_,(char)((int)uVar9 << 1));
        pvVar8 = pvVar12;
        uVar2 = local_b0;
      }
      local_b0 = uVar2;
      *(undefined1 *)((long)pvVar8 + uVar9) = 0;
    }
    else {
                    /* try { // try from 0071c16c to 0071c1db has its CatchHandler @ 0071c3cc */
      FUN_0071341c(&local_b8,uVar6,0);
    }
    uVar2 = 0x16;
    if ((local_b8 & 1) != 0) {
      uVar2 = (local_b8 & 0xfffffffffffffffe) - 1;
    }
    uVar9 = local_b8 >> 1 & 0x7f;
    if ((local_b8 & 1) != 0) {
      uVar9 = local_b0;
    }
    if (uVar2 < uVar9 || uVar2 - uVar9 == 0) {
      pvVar8 = local_a8;
      uVar9 = uVar2;
      if ((local_b8 & 1) == 0) {
        local_b8 = CONCAT71(local_b8._1_7_,(char)((int)uVar2 << 1));
        pvVar8 = pvVar12;
        uVar9 = local_b0;
      }
      local_b0 = uVar9;
      *(undefined1 *)((long)pvVar8 + uVar2) = 0;
    }
    else {
      FUN_0071341c(&local_b8,uVar2 - uVar9,0);
    }
    pvVar8 = pvVar12;
    if ((local_b8 & 1) != 0) {
      pvVar8 = local_a8;
    }
    local_c0 = (void *)((long)pvVar8 + uVar6);
  }
  if ((byte *)param_2[3] == (byte *)param_2[4]) {
                    /* try { // try from 0071c234 to 0071c27f has its CatchHandler @ 0071c3d0 */
    uVar6 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar6 = (ulong)*(byte *)param_2[3];
  }
  iVar5 = FUN_0071eab4(uVar6,uVar11,pvVar8,&local_c0,&local_16c,local_6c[0],local_a0,auStack_160,
                       &local_168,auStack_86);
  param_3 = plVar10;
  if (iVar5 != 0) goto LAB_0071c284;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 1;
  }
  goto LAB_0071c0bc;
LAB_0071c284:
  uVar6 = (ulong)(local_a0[0] >> 1);
  if ((local_a0[0] & 1) != 0) {
    uVar6 = local_98;
  }
  if ((uVar6 != 0) && ((long)local_168 - (long)auStack_160 < 0xa0)) {
    *local_168 = local_16c;
    local_168 = local_168 + 1;
  }
                    /* try { // try from 0071c2c4 to 0071c3af has its CatchHandler @ 0071c3c8 */
  uVar7 = FUN_007374e4(pvVar8,local_c0,param_5,uVar11);
  *param_6 = uVar7;
  FUN_0072c15c(local_a0,auStack_160,local_168,param_5);
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    plVar10 = param_2;
joined_r0x0071c310:
    param_2 = plVar10;
    if (param_3 != (long *)0x0) goto LAB_0071c314;
LAB_0071c398:
    if (bVar4 == false) goto LAB_0071c330;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar4 = iVar5 == -1;
      plVar10 = (long *)0x0;
      if (!bVar4) {
        plVar10 = param_2;
      }
      goto joined_r0x0071c310;
    }
    bVar4 = false;
    if (param_3 == (long *)0x0) goto LAB_0071c398;
LAB_0071c314:
    if (param_3[3] == param_3[4]) {
      iVar5 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar4 != (iVar5 == -1)) goto LAB_0071c330;
    }
    else if (bVar4 != false) goto LAB_0071c330;
  }
  *param_5 = *param_5 | 2;
LAB_0071c330:
  if ((local_b8 & 1) != 0) {
    free(local_a8);
  }
  if ((local_a0[0] & 1) != 0) {
    free(local_90);
  }
  return param_2;
}


// ===== 0071c40c  FUN_0071c40c =====

void FUN_0071c40c(void)

{
  FUN_0071c414();
  return;
}


// ===== 0071c414  FUN_0071c414 =====

long * FUN_0071c414(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                   undefined8 *param_6)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  void *pvVar8;
  ulong uVar9;
  long *plVar10;
  undefined4 uVar11;
  void *pvVar12;
  undefined4 local_16c;
  undefined4 *local_168;
  undefined4 auStack_160 [40];
  void *local_c0;
  undefined8 local_b8;
  ulong local_b0;
  void *local_a8;
  byte local_a0 [8];
  ulong local_98;
  void *local_90;
  undefined1 auStack_86 [26];
  undefined1 local_6c [12];
  
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar11 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar11 = 8;
  }
  else if (uVar1 == 8) {
    uVar11 = 0x10;
  }
  else {
    uVar11 = 10;
  }
  FUN_00722464(local_a0,param_4,auStack_86,local_6c);
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = (void *)0x0;
                    /* try { // try from 0071c4a8 to 0071c4bb has its CatchHandler @ 0071c800 */
  FUN_0071341c(&local_b8,0x16,0);
  local_168 = auStack_160;
  pvVar12 = (void *)((ulong)&local_b8 | 1);
  pvVar8 = local_a8;
  if ((local_b8 & 1) == 0) {
    pvVar8 = (void *)((long)&local_b8 + 1);
  }
  local_16c = 0;
  local_c0 = pvVar8;
LAB_0071c4f8:
  plVar10 = param_3;
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    plVar3 = param_2;
joined_r0x0071c518:
    param_2 = plVar3;
    if (param_3 != (long *)0x0) goto LAB_0071c51c;
LAB_0071c550:
    if (bVar4 != false) goto LAB_0071c6c0;
  }
  else {
    if (param_2[3] == param_2[4]) {
                    /* try { // try from 0071c538 to 0071c567 has its CatchHandler @ 0071c80c */
      iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar4 = iVar5 == -1;
      plVar3 = (long *)0x0;
      if (!bVar4) {
        plVar3 = param_2;
      }
      goto joined_r0x0071c518;
    }
    bVar4 = false;
    if (param_3 == (long *)0x0) goto LAB_0071c550;
LAB_0071c51c:
    if (param_3[3] == param_3[4]) {
      iVar5 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar10 = (long *)0x0;
      if (iVar5 != -1) {
        plVar10 = param_3;
      }
      param_3 = plVar10;
      if (bVar4 == (iVar5 == -1)) goto LAB_0071c6c0;
    }
    else if (bVar4 == false) goto LAB_0071c6c0;
  }
  uVar6 = local_b8 >> 1 & 0x7f;
  if ((local_b8 & 1) != 0) {
    uVar6 = local_b0;
  }
  if (local_c0 == (void *)((long)pvVar8 + uVar6)) {
    if ((long)uVar6 < 1) {
      uVar9 = uVar6 * 2;
      pvVar8 = local_a8;
      uVar2 = uVar9;
      if ((local_b8 & 1) == 0) {
        local_b8 = CONCAT71(local_b8._1_7_,(char)((int)uVar9 << 1));
        pvVar8 = pvVar12;
        uVar2 = local_b0;
      }
      local_b0 = uVar2;
      *(undefined1 *)((long)pvVar8 + uVar9) = 0;
    }
    else {
                    /* try { // try from 0071c5a8 to 0071c617 has its CatchHandler @ 0071c808 */
      FUN_0071341c(&local_b8,uVar6,0);
    }
    uVar2 = 0x16;
    if ((local_b8 & 1) != 0) {
      uVar2 = (local_b8 & 0xfffffffffffffffe) - 1;
    }
    uVar9 = local_b8 >> 1 & 0x7f;
    if ((local_b8 & 1) != 0) {
      uVar9 = local_b0;
    }
    if (uVar2 < uVar9 || uVar2 - uVar9 == 0) {
      pvVar8 = local_a8;
      uVar9 = uVar2;
      if ((local_b8 & 1) == 0) {
        local_b8 = CONCAT71(local_b8._1_7_,(char)((int)uVar2 << 1));
        pvVar8 = pvVar12;
        uVar9 = local_b0;
      }
      local_b0 = uVar9;
      *(undefined1 *)((long)pvVar8 + uVar2) = 0;
    }
    else {
      FUN_0071341c(&local_b8,uVar2 - uVar9,0);
    }
    pvVar8 = pvVar12;
    if ((local_b8 & 1) != 0) {
      pvVar8 = local_a8;
    }
    local_c0 = (void *)((long)pvVar8 + uVar6);
  }
  if ((byte *)param_2[3] == (byte *)param_2[4]) {
                    /* try { // try from 0071c670 to 0071c6bb has its CatchHandler @ 0071c80c */
    uVar6 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar6 = (ulong)*(byte *)param_2[3];
  }
  iVar5 = FUN_0071eab4(uVar6,uVar11,pvVar8,&local_c0,&local_16c,local_6c[0],local_a0,auStack_160,
                       &local_168,auStack_86);
  param_3 = plVar10;
  if (iVar5 != 0) goto LAB_0071c6c0;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 1;
  }
  goto LAB_0071c4f8;
LAB_0071c6c0:
  uVar6 = (ulong)(local_a0[0] >> 1);
  if ((local_a0[0] & 1) != 0) {
    uVar6 = local_98;
  }
  if ((uVar6 != 0) && ((long)local_168 - (long)auStack_160 < 0xa0)) {
    *local_168 = local_16c;
    local_168 = local_168 + 1;
  }
                    /* try { // try from 0071c700 to 0071c7eb has its CatchHandler @ 0071c804 */
  uVar7 = FUN_0073760c(pvVar8,local_c0,param_5,uVar11);
  *param_6 = uVar7;
  FUN_0072c15c(local_a0,auStack_160,local_168,param_5);
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    plVar10 = param_2;
joined_r0x0071c74c:
    param_2 = plVar10;
    if (param_3 != (long *)0x0) goto LAB_0071c750;
LAB_0071c7d4:
    if (bVar4 == false) goto LAB_0071c76c;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar4 = iVar5 == -1;
      plVar10 = (long *)0x0;
      if (!bVar4) {
        plVar10 = param_2;
      }
      goto joined_r0x0071c74c;
    }
    bVar4 = false;
    if (param_3 == (long *)0x0) goto LAB_0071c7d4;
LAB_0071c750:
    if (param_3[3] == param_3[4]) {
      iVar5 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar4 != (iVar5 == -1)) goto LAB_0071c76c;
    }
    else if (bVar4 != false) goto LAB_0071c76c;
  }
  *param_5 = *param_5 | 2;
LAB_0071c76c:
  if ((local_b8 & 1) != 0) {
    free(local_a8);
  }
  if ((local_a0[0] & 1) != 0) {
    free(local_90);
  }
  return param_2;
}


// ===== 0071c848  FUN_0071c848 =====

void FUN_0071c848(void)

{
  FUN_0071c850();
  return;
}


// ===== 0071c850  FUN_0071c850 =====

long * FUN_0071c850(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                   undefined2 *param_6)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  bool bVar4;
  undefined2 uVar5;
  int iVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  long *plVar10;
  undefined4 uVar11;
  void *pvVar12;
  undefined4 local_16c;
  undefined4 *local_168;
  undefined4 auStack_160 [40];
  void *local_c0;
  undefined8 local_b8;
  ulong local_b0;
  void *local_a8;
  byte local_a0 [8];
  ulong local_98;
  void *local_90;
  undefined1 auStack_86 [26];
  undefined1 local_6c [12];
  
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar11 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar11 = 8;
  }
  else if (uVar1 == 8) {
    uVar11 = 0x10;
  }
  else {
    uVar11 = 10;
  }
  FUN_00722464(local_a0,param_4,auStack_86,local_6c);
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = (void *)0x0;
                    /* try { // try from 0071c8e4 to 0071c8f7 has its CatchHandler @ 0071cc3c */
  FUN_0071341c(&local_b8,0x16,0);
  local_168 = auStack_160;
  pvVar12 = (void *)((ulong)&local_b8 | 1);
  pvVar8 = local_a8;
  if ((local_b8 & 1) == 0) {
    pvVar8 = (void *)((long)&local_b8 + 1);
  }
  local_16c = 0;
  local_c0 = pvVar8;
LAB_0071c934:
  plVar10 = param_3;
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    plVar3 = param_2;
joined_r0x0071c954:
    param_2 = plVar3;
    if (param_3 != (long *)0x0) goto LAB_0071c958;
LAB_0071c98c:
    if (bVar4 != false) goto LAB_0071cafc;
  }
  else {
    if (param_2[3] == param_2[4]) {
                    /* try { // try from 0071c974 to 0071c9a3 has its CatchHandler @ 0071cc48 */
      iVar6 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar4 = iVar6 == -1;
      plVar3 = (long *)0x0;
      if (!bVar4) {
        plVar3 = param_2;
      }
      goto joined_r0x0071c954;
    }
    bVar4 = false;
    if (param_3 == (long *)0x0) goto LAB_0071c98c;
LAB_0071c958:
    if (param_3[3] == param_3[4]) {
      iVar6 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar10 = (long *)0x0;
      if (iVar6 != -1) {
        plVar10 = param_3;
      }
      param_3 = plVar10;
      if (bVar4 == (iVar6 == -1)) goto LAB_0071cafc;
    }
    else if (bVar4 == false) goto LAB_0071cafc;
  }
  uVar7 = local_b8 >> 1 & 0x7f;
  if ((local_b8 & 1) != 0) {
    uVar7 = local_b0;
  }
  if (local_c0 == (void *)((long)pvVar8 + uVar7)) {
    if ((long)uVar7 < 1) {
      uVar9 = uVar7 * 2;
      pvVar8 = local_a8;
      uVar2 = uVar9;
      if ((local_b8 & 1) == 0) {
        local_b8 = CONCAT71(local_b8._1_7_,(char)((int)uVar9 << 1));
        pvVar8 = pvVar12;
        uVar2 = local_b0;
      }
      local_b0 = uVar2;
      *(undefined1 *)((long)pvVar8 + uVar9) = 0;
    }
    else {
                    /* try { // try from 0071c9e4 to 0071ca53 has its CatchHandler @ 0071cc44 */
      FUN_0071341c(&local_b8,uVar7,0);
    }
    uVar2 = 0x16;
    if ((local_b8 & 1) != 0) {
      uVar2 = (local_b8 & 0xfffffffffffffffe) - 1;
    }
    uVar9 = local_b8 >> 1 & 0x7f;
    if ((local_b8 & 1) != 0) {
      uVar9 = local_b0;
    }
    if (uVar2 < uVar9 || uVar2 - uVar9 == 0) {
      pvVar8 = local_a8;
      uVar9 = uVar2;
      if ((local_b8 & 1) == 0) {
        local_b8 = CONCAT71(local_b8._1_7_,(char)((int)uVar2 << 1));
        pvVar8 = pvVar12;
        uVar9 = local_b0;
      }
      local_b0 = uVar9;
      *(undefined1 *)((long)pvVar8 + uVar2) = 0;
    }
    else {
      FUN_0071341c(&local_b8,uVar2 - uVar9,0);
    }
    pvVar8 = pvVar12;
    if ((local_b8 & 1) != 0) {
      pvVar8 = local_a8;
    }
    local_c0 = (void *)((long)pvVar8 + uVar7);
  }
  if ((byte *)param_2[3] == (byte *)param_2[4]) {
                    /* try { // try from 0071caac to 0071caf7 has its CatchHandler @ 0071cc48 */
    uVar7 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar7 = (ulong)*(byte *)param_2[3];
  }
  iVar6 = FUN_0071eab4(uVar7,uVar11,pvVar8,&local_c0,&local_16c,local_6c[0],local_a0,auStack_160,
                       &local_168,auStack_86);
  param_3 = plVar10;
  if (iVar6 != 0) goto LAB_0071cafc;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 1;
  }
  goto LAB_0071c934;
LAB_0071cafc:
  uVar7 = (ulong)(local_a0[0] >> 1);
  if ((local_a0[0] & 1) != 0) {
    uVar7 = local_98;
  }
  if ((uVar7 != 0) && ((long)local_168 - (long)auStack_160 < 0xa0)) {
    *local_168 = local_16c;
    local_168 = local_168 + 1;
  }
                    /* try { // try from 0071cb3c to 0071cc27 has its CatchHandler @ 0071cc40 */
  uVar5 = FUN_00737734(pvVar8,local_c0,param_5,uVar11);
  *param_6 = uVar5;
  FUN_0072c15c(local_a0,auStack_160,local_168,param_5);
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    plVar10 = param_2;
joined_r0x0071cb88:
    param_2 = plVar10;
    if (param_3 != (long *)0x0) goto LAB_0071cb8c;
LAB_0071cc10:
    if (bVar4 == false) goto LAB_0071cba8;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar6 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar4 = iVar6 == -1;
      plVar10 = (long *)0x0;
      if (!bVar4) {
        plVar10 = param_2;
      }
      goto joined_r0x0071cb88;
    }
    bVar4 = false;
    if (param_3 == (long *)0x0) goto LAB_0071cc10;
LAB_0071cb8c:
    if (param_3[3] == param_3[4]) {
      iVar6 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar4 != (iVar6 == -1)) goto LAB_0071cba8;
    }
    else if (bVar4 != false) goto LAB_0071cba8;
  }
  *param_5 = *param_5 | 2;
LAB_0071cba8:
  if ((local_b8 & 1) != 0) {
    free(local_a8);
  }
  if ((local_a0[0] & 1) != 0) {
    free(local_90);
  }
  return param_2;
}


// ===== 0071cc84  FUN_0071cc84 =====

void FUN_0071cc84(void)

{
  FUN_0071cc8c();
  return;
}


// ===== 0071cc8c  FUN_0071cc8c =====

long * FUN_0071cc8c(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                   undefined4 *param_6)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  long *plVar10;
  void *pvVar11;
  undefined4 local_16c;
  undefined4 *local_168;
  undefined4 auStack_160 [40];
  void *local_c0;
  undefined8 local_b8;
  ulong local_b0;
  void *local_a8;
  byte local_a0 [8];
  ulong local_98;
  void *local_90;
  undefined1 auStack_86 [26];
  undefined1 local_6c [12];
  
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar5 = 8;
  }
  else if (uVar1 == 8) {
    uVar5 = 0x10;
  }
  else {
    uVar5 = 10;
  }
  FUN_00722464(local_a0,param_4,auStack_86,local_6c);
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = (void *)0x0;
                    /* try { // try from 0071cd20 to 0071cd33 has its CatchHandler @ 0071d078 */
  FUN_0071341c(&local_b8,0x16,0);
  local_168 = auStack_160;
  pvVar11 = (void *)((ulong)&local_b8 | 1);
  pvVar8 = local_a8;
  if ((local_b8 & 1) == 0) {
    pvVar8 = (void *)((long)&local_b8 + 1);
  }
  local_16c = 0;
  local_c0 = pvVar8;
LAB_0071cd70:
  plVar10 = param_3;
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    plVar3 = param_2;
joined_r0x0071cd90:
    param_2 = plVar3;
    if (param_3 != (long *)0x0) goto LAB_0071cd94;
LAB_0071cdc8:
    if (bVar4 != false) goto LAB_0071cf38;
  }
  else {
    if (param_2[3] == param_2[4]) {
                    /* try { // try from 0071cdb0 to 0071cddf has its CatchHandler @ 0071d084 */
      iVar6 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar4 = iVar6 == -1;
      plVar3 = (long *)0x0;
      if (!bVar4) {
        plVar3 = param_2;
      }
      goto joined_r0x0071cd90;
    }
    bVar4 = false;
    if (param_3 == (long *)0x0) goto LAB_0071cdc8;
LAB_0071cd94:
    if (param_3[3] == param_3[4]) {
      iVar6 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar10 = (long *)0x0;
      if (iVar6 != -1) {
        plVar10 = param_3;
      }
      param_3 = plVar10;
      if (bVar4 == (iVar6 == -1)) goto LAB_0071cf38;
    }
    else if (bVar4 == false) goto LAB_0071cf38;
  }
  uVar7 = local_b8 >> 1 & 0x7f;
  if ((local_b8 & 1) != 0) {
    uVar7 = local_b0;
  }
  if (local_c0 == (void *)((long)pvVar8 + uVar7)) {
    if ((long)uVar7 < 1) {
      uVar9 = uVar7 * 2;
      pvVar8 = local_a8;
      uVar2 = uVar9;
      if ((local_b8 & 1) == 0) {
        local_b8 = CONCAT71(local_b8._1_7_,(char)((int)uVar9 << 1));
        pvVar8 = pvVar11;
        uVar2 = local_b0;
      }
      local_b0 = uVar2;
      *(undefined1 *)((long)pvVar8 + uVar9) = 0;
    }
    else {
                    /* try { // try from 0071ce20 to 0071ce8f has its CatchHandler @ 0071d080 */
      FUN_0071341c(&local_b8,uVar7,0);
    }
    uVar2 = 0x16;
    if ((local_b8 & 1) != 0) {
      uVar2 = (local_b8 & 0xfffffffffffffffe) - 1;
    }
    uVar9 = local_b8 >> 1 & 0x7f;
    if ((local_b8 & 1) != 0) {
      uVar9 = local_b0;
    }
    if (uVar2 < uVar9 || uVar2 - uVar9 == 0) {
      pvVar8 = local_a8;
      uVar9 = uVar2;
      if ((local_b8 & 1) == 0) {
        local_b8 = CONCAT71(local_b8._1_7_,(char)((int)uVar2 << 1));
        pvVar8 = pvVar11;
        uVar9 = local_b0;
      }
      local_b0 = uVar9;
      *(undefined1 *)((long)pvVar8 + uVar2) = 0;
    }
    else {
      FUN_0071341c(&local_b8,uVar2 - uVar9,0);
    }
    pvVar8 = pvVar11;
    if ((local_b8 & 1) != 0) {
      pvVar8 = local_a8;
    }
    local_c0 = (void *)((long)pvVar8 + uVar7);
  }
  if ((byte *)param_2[3] == (byte *)param_2[4]) {
                    /* try { // try from 0071cee8 to 0071cf33 has its CatchHandler @ 0071d084 */
    uVar7 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar7 = (ulong)*(byte *)param_2[3];
  }
  iVar6 = FUN_0071eab4(uVar7,uVar5,pvVar8,&local_c0,&local_16c,local_6c[0],local_a0,auStack_160,
                       &local_168,auStack_86);
  param_3 = plVar10;
  if (iVar6 != 0) goto LAB_0071cf38;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 1;
  }
  goto LAB_0071cd70;
LAB_0071cf38:
  uVar7 = (ulong)(local_a0[0] >> 1);
  if ((local_a0[0] & 1) != 0) {
    uVar7 = local_98;
  }
  if ((uVar7 != 0) && ((long)local_168 - (long)auStack_160 < 0xa0)) {
    *local_168 = local_16c;
    local_168 = local_168 + 1;
  }
                    /* try { // try from 0071cf78 to 0071d063 has its CatchHandler @ 0071d07c */
  uVar5 = FUN_0073788c(pvVar8,local_c0,param_5,uVar5);
  *param_6 = uVar5;
  FUN_0072c15c(local_a0,auStack_160,local_168,param_5);
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    plVar10 = param_2;
joined_r0x0071cfc4:
    param_2 = plVar10;
    if (param_3 != (long *)0x0) goto LAB_0071cfc8;
LAB_0071d04c:
    if (bVar4 == false) goto LAB_0071cfe4;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar6 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar4 = iVar6 == -1;
      plVar10 = (long *)0x0;
      if (!bVar4) {
        plVar10 = param_2;
      }
      goto joined_r0x0071cfc4;
    }
    bVar4 = false;
    if (param_3 == (long *)0x0) goto LAB_0071d04c;
LAB_0071cfc8:
    if (param_3[3] == param_3[4]) {
      iVar6 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar4 != (iVar6 == -1)) goto LAB_0071cfe4;
    }
    else if (bVar4 != false) goto LAB_0071cfe4;
  }
  *param_5 = *param_5 | 2;
LAB_0071cfe4:
  if ((local_b8 & 1) != 0) {
    free(local_a8);
  }
  if ((local_a0[0] & 1) != 0) {
    free(local_90);
  }
  return param_2;
}


// ===== 0071d0c0  FUN_0071d0c0 =====

void FUN_0071d0c0(void)

{
  FUN_0071d0c8();
  return;
}


// ===== 0071d0c8  FUN_0071d0c8 =====

long * FUN_0071d0c8(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                   undefined8 *param_6)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  void *pvVar8;
  ulong uVar9;
  long *plVar10;
  undefined4 uVar11;
  void *pvVar12;
  undefined4 local_16c;
  undefined4 *local_168;
  undefined4 auStack_160 [40];
  void *local_c0;
  undefined8 local_b8;
  ulong local_b0;
  void *local_a8;
  byte local_a0 [8];
  ulong local_98;
  void *local_90;
  undefined1 auStack_86 [26];
  undefined1 local_6c [12];
  
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar11 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar11 = 8;
  }
  else if (uVar1 == 8) {
    uVar11 = 0x10;
  }
  else {
    uVar11 = 10;
  }
  FUN_00722464(local_a0,param_4,auStack_86,local_6c);
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = (void *)0x0;
                    /* try { // try from 0071d15c to 0071d16f has its CatchHandler @ 0071d4b4 */
  FUN_0071341c(&local_b8,0x16,0);
  local_168 = auStack_160;
  pvVar12 = (void *)((ulong)&local_b8 | 1);
  pvVar8 = local_a8;
  if ((local_b8 & 1) == 0) {
    pvVar8 = (void *)((long)&local_b8 + 1);
  }
  local_16c = 0;
  local_c0 = pvVar8;
LAB_0071d1ac:
  plVar10 = param_3;
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    plVar3 = param_2;
joined_r0x0071d1cc:
    param_2 = plVar3;
    if (param_3 != (long *)0x0) goto LAB_0071d1d0;
LAB_0071d204:
    if (bVar4 != false) goto LAB_0071d374;
  }
  else {
    if (param_2[3] == param_2[4]) {
                    /* try { // try from 0071d1ec to 0071d21b has its CatchHandler @ 0071d4c0 */
      iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar4 = iVar5 == -1;
      plVar3 = (long *)0x0;
      if (!bVar4) {
        plVar3 = param_2;
      }
      goto joined_r0x0071d1cc;
    }
    bVar4 = false;
    if (param_3 == (long *)0x0) goto LAB_0071d204;
LAB_0071d1d0:
    if (param_3[3] == param_3[4]) {
      iVar5 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar10 = (long *)0x0;
      if (iVar5 != -1) {
        plVar10 = param_3;
      }
      param_3 = plVar10;
      if (bVar4 == (iVar5 == -1)) goto LAB_0071d374;
    }
    else if (bVar4 == false) goto LAB_0071d374;
  }
  uVar6 = local_b8 >> 1 & 0x7f;
  if ((local_b8 & 1) != 0) {
    uVar6 = local_b0;
  }
  if (local_c0 == (void *)((long)pvVar8 + uVar6)) {
    if ((long)uVar6 < 1) {
      uVar9 = uVar6 * 2;
      pvVar8 = local_a8;
      uVar2 = uVar9;
      if ((local_b8 & 1) == 0) {
        local_b8 = CONCAT71(local_b8._1_7_,(char)((int)uVar9 << 1));
        pvVar8 = pvVar12;
        uVar2 = local_b0;
      }
      local_b0 = uVar2;
      *(undefined1 *)((long)pvVar8 + uVar9) = 0;
    }
    else {
                    /* try { // try from 0071d25c to 0071d2cb has its CatchHandler @ 0071d4bc */
      FUN_0071341c(&local_b8,uVar6,0);
    }
    uVar2 = 0x16;
    if ((local_b8 & 1) != 0) {
      uVar2 = (local_b8 & 0xfffffffffffffffe) - 1;
    }
    uVar9 = local_b8 >> 1 & 0x7f;
    if ((local_b8 & 1) != 0) {
      uVar9 = local_b0;
    }
    if (uVar2 < uVar9 || uVar2 - uVar9 == 0) {
      pvVar8 = local_a8;
      uVar9 = uVar2;
      if ((local_b8 & 1) == 0) {
        local_b8 = CONCAT71(local_b8._1_7_,(char)((int)uVar2 << 1));
        pvVar8 = pvVar12;
        uVar9 = local_b0;
      }
      local_b0 = uVar9;
      *(undefined1 *)((long)pvVar8 + uVar2) = 0;
    }
    else {
      FUN_0071341c(&local_b8,uVar2 - uVar9,0);
    }
    pvVar8 = pvVar12;
    if ((local_b8 & 1) != 0) {
      pvVar8 = local_a8;
    }
    local_c0 = (void *)((long)pvVar8 + uVar6);
  }
  if ((byte *)param_2[3] == (byte *)param_2[4]) {
                    /* try { // try from 0071d324 to 0071d36f has its CatchHandler @ 0071d4c0 */
    uVar6 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar6 = (ulong)*(byte *)param_2[3];
  }
  iVar5 = FUN_0071eab4(uVar6,uVar11,pvVar8,&local_c0,&local_16c,local_6c[0],local_a0,auStack_160,
                       &local_168,auStack_86);
  param_3 = plVar10;
  if (iVar5 != 0) goto LAB_0071d374;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 1;
  }
  goto LAB_0071d1ac;
LAB_0071d374:
  uVar6 = (ulong)(local_a0[0] >> 1);
  if ((local_a0[0] & 1) != 0) {
    uVar6 = local_98;
  }
  if ((uVar6 != 0) && ((long)local_168 - (long)auStack_160 < 0xa0)) {
    *local_168 = local_16c;
    local_168 = local_168 + 1;
  }
                    /* try { // try from 0071d3b4 to 0071d49f has its CatchHandler @ 0071d4b8 */
  uVar7 = FUN_007379e0(pvVar8,local_c0,param_5,uVar11);
  *param_6 = uVar7;
  FUN_0072c15c(local_a0,auStack_160,local_168,param_5);
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    plVar10 = param_2;
joined_r0x0071d400:
    param_2 = plVar10;
    if (param_3 != (long *)0x0) goto LAB_0071d404;
LAB_0071d488:
    if (bVar4 == false) goto LAB_0071d420;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar4 = iVar5 == -1;
      plVar10 = (long *)0x0;
      if (!bVar4) {
        plVar10 = param_2;
      }
      goto joined_r0x0071d400;
    }
    bVar4 = false;
    if (param_3 == (long *)0x0) goto LAB_0071d488;
LAB_0071d404:
    if (param_3[3] == param_3[4]) {
      iVar5 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar4 != (iVar5 == -1)) goto LAB_0071d420;
    }
    else if (bVar4 != false) goto LAB_0071d420;
  }
  *param_5 = *param_5 | 2;
LAB_0071d420:
  if ((local_b8 & 1) != 0) {
    free(local_a8);
  }
  if ((local_a0[0] & 1) != 0) {
    free(local_90);
  }
  return param_2;
}


// ===== 0071d4fc  FUN_0071d4fc =====

void FUN_0071d4fc(void)

{
  FUN_0071d504();
  return;
}


// ===== 0071d504  FUN_0071d504 =====

long * FUN_0071d504(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                   undefined8 *param_6)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  void *pvVar8;
  ulong uVar9;
  long *plVar10;
  undefined4 uVar11;
  void *pvVar12;
  undefined4 local_16c;
  undefined4 *local_168;
  undefined4 auStack_160 [40];
  void *local_c0;
  undefined8 local_b8;
  ulong local_b0;
  void *local_a8;
  byte local_a0 [8];
  ulong local_98;
  void *local_90;
  undefined1 auStack_86 [26];
  undefined1 local_6c [12];
  
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar11 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar11 = 8;
  }
  else if (uVar1 == 8) {
    uVar11 = 0x10;
  }
  else {
    uVar11 = 10;
  }
  FUN_00722464(local_a0,param_4,auStack_86,local_6c);
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = (void *)0x0;
                    /* try { // try from 0071d598 to 0071d5ab has its CatchHandler @ 0071d8f0 */
  FUN_0071341c(&local_b8,0x16,0);
  local_168 = auStack_160;
  pvVar12 = (void *)((ulong)&local_b8 | 1);
  pvVar8 = local_a8;
  if ((local_b8 & 1) == 0) {
    pvVar8 = (void *)((long)&local_b8 + 1);
  }
  local_16c = 0;
  local_c0 = pvVar8;
LAB_0071d5e8:
  plVar10 = param_3;
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    plVar3 = param_2;
joined_r0x0071d608:
    param_2 = plVar3;
    if (param_3 != (long *)0x0) goto LAB_0071d60c;
LAB_0071d640:
    if (bVar4 != false) goto LAB_0071d7b0;
  }
  else {
    if (param_2[3] == param_2[4]) {
                    /* try { // try from 0071d628 to 0071d657 has its CatchHandler @ 0071d8fc */
      iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar4 = iVar5 == -1;
      plVar3 = (long *)0x0;
      if (!bVar4) {
        plVar3 = param_2;
      }
      goto joined_r0x0071d608;
    }
    bVar4 = false;
    if (param_3 == (long *)0x0) goto LAB_0071d640;
LAB_0071d60c:
    if (param_3[3] == param_3[4]) {
      iVar5 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar10 = (long *)0x0;
      if (iVar5 != -1) {
        plVar10 = param_3;
      }
      param_3 = plVar10;
      if (bVar4 == (iVar5 == -1)) goto LAB_0071d7b0;
    }
    else if (bVar4 == false) goto LAB_0071d7b0;
  }
  uVar6 = local_b8 >> 1 & 0x7f;
  if ((local_b8 & 1) != 0) {
    uVar6 = local_b0;
  }
  if (local_c0 == (void *)((long)pvVar8 + uVar6)) {
    if ((long)uVar6 < 1) {
      uVar9 = uVar6 * 2;
      pvVar8 = local_a8;
      uVar2 = uVar9;
      if ((local_b8 & 1) == 0) {
        local_b8 = CONCAT71(local_b8._1_7_,(char)((int)uVar9 << 1));
        pvVar8 = pvVar12;
        uVar2 = local_b0;
      }
      local_b0 = uVar2;
      *(undefined1 *)((long)pvVar8 + uVar9) = 0;
    }
    else {
                    /* try { // try from 0071d698 to 0071d707 has its CatchHandler @ 0071d8f8 */
      FUN_0071341c(&local_b8,uVar6,0);
    }
    uVar2 = 0x16;
    if ((local_b8 & 1) != 0) {
      uVar2 = (local_b8 & 0xfffffffffffffffe) - 1;
    }
    uVar9 = local_b8 >> 1 & 0x7f;
    if ((local_b8 & 1) != 0) {
      uVar9 = local_b0;
    }
    if (uVar2 < uVar9 || uVar2 - uVar9 == 0) {
      pvVar8 = local_a8;
      uVar9 = uVar2;
      if ((local_b8 & 1) == 0) {
        local_b8 = CONCAT71(local_b8._1_7_,(char)((int)uVar2 << 1));
        pvVar8 = pvVar12;
        uVar9 = local_b0;
      }
      local_b0 = uVar9;
      *(undefined1 *)((long)pvVar8 + uVar2) = 0;
    }
    else {
      FUN_0071341c(&local_b8,uVar2 - uVar9,0);
    }
    pvVar8 = pvVar12;
    if ((local_b8 & 1) != 0) {
      pvVar8 = local_a8;
    }
    local_c0 = (void *)((long)pvVar8 + uVar6);
  }
  if ((byte *)param_2[3] == (byte *)param_2[4]) {
                    /* try { // try from 0071d760 to 0071d7ab has its CatchHandler @ 0071d8fc */
    uVar6 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar6 = (ulong)*(byte *)param_2[3];
  }
  iVar5 = FUN_0071eab4(uVar6,uVar11,pvVar8,&local_c0,&local_16c,local_6c[0],local_a0,auStack_160,
                       &local_168,auStack_86);
  param_3 = plVar10;
  if (iVar5 != 0) goto LAB_0071d7b0;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 1;
  }
  goto LAB_0071d5e8;
LAB_0071d7b0:
  uVar6 = (ulong)(local_a0[0] >> 1);
  if ((local_a0[0] & 1) != 0) {
    uVar6 = local_98;
  }
  if ((uVar6 != 0) && ((long)local_168 - (long)auStack_160 < 0xa0)) {
    *local_168 = local_16c;
    local_168 = local_168 + 1;
  }
                    /* try { // try from 0071d7f0 to 0071d8db has its CatchHandler @ 0071d8f4 */
  uVar7 = FUN_00737b28(pvVar8,local_c0,param_5,uVar11);
  *param_6 = uVar7;
  FUN_0072c15c(local_a0,auStack_160,local_168,param_5);
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    plVar10 = param_2;
joined_r0x0071d83c:
    param_2 = plVar10;
    if (param_3 != (long *)0x0) goto LAB_0071d840;
LAB_0071d8c4:
    if (bVar4 == false) goto LAB_0071d85c;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar4 = iVar5 == -1;
      plVar10 = (long *)0x0;
      if (!bVar4) {
        plVar10 = param_2;
      }
      goto joined_r0x0071d83c;
    }
    bVar4 = false;
    if (param_3 == (long *)0x0) goto LAB_0071d8c4;
LAB_0071d840:
    if (param_3[3] == param_3[4]) {
      iVar5 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar4 != (iVar5 == -1)) goto LAB_0071d85c;
    }
    else if (bVar4 != false) goto LAB_0071d85c;
  }
  *param_5 = *param_5 | 2;
LAB_0071d85c:
  if ((local_b8 & 1) != 0) {
    free(local_a8);
  }
  if ((local_a0[0] & 1) != 0) {
    free(local_90);
  }
  return param_2;
}


// ===== 0071d938  FUN_0071d938 =====

void FUN_0071d938(void)

{
  FUN_0071d940();
  return;
}


// ===== 0071d940  FUN_0071d940 =====

long * FUN_0071d940(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,uint *param_5,
                   undefined4 *param_6)

{
  ulong uVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  long *plVar8;
  void *pvVar9;
  undefined4 uVar10;
  undefined1 local_17c [4];
  char local_178 [4];
  undefined4 local_174;
  undefined4 *local_170;
  undefined4 auStack_168 [40];
  void *local_c8;
  undefined8 local_c0;
  ulong local_b8;
  void *local_b0;
  byte local_a8 [8];
  ulong local_a0;
  void *local_98;
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  undefined1 auStack_88 [40];
  
  FUN_00722050(local_a8,param_4,auStack_88,local_8c,local_90);
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = (void *)0x0;
                    /* try { // try from 0071d998 to 0071d9ab has its CatchHandler @ 0071dd08 */
  FUN_0071341c(&local_c0,0x16,0);
  pvVar9 = (void *)((ulong)&local_c0 | 1);
  local_174 = 0;
  pvVar6 = local_b0;
  if ((local_c0 & 1) == 0) {
    pvVar6 = (void *)((long)&local_c0 + 1);
  }
  local_178[0] = '\x01';
  local_17c[0] = 0x45;
  local_170 = auStack_168;
  local_c8 = pvVar6;
LAB_0071d9f4:
  plVar8 = param_3;
  if (param_2 == (long *)0x0) {
    bVar3 = true;
    plVar2 = param_2;
joined_r0x0071da14:
    param_2 = plVar2;
    if (param_3 != (long *)0x0) goto LAB_0071da18;
LAB_0071da4c:
    if (bVar3 != false) goto LAB_0071dbc4;
  }
  else {
    if (param_2[3] == param_2[4]) {
                    /* try { // try from 0071da34 to 0071da63 has its CatchHandler @ 0071dd14 */
      iVar4 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar3 = iVar4 == -1;
      plVar2 = (long *)0x0;
      if (!bVar3) {
        plVar2 = param_2;
      }
      goto joined_r0x0071da14;
    }
    bVar3 = false;
    if (param_3 == (long *)0x0) goto LAB_0071da4c;
LAB_0071da18:
    if (param_3[3] == param_3[4]) {
      iVar4 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar8 = (long *)0x0;
      if (iVar4 != -1) {
        plVar8 = param_3;
      }
      param_3 = plVar8;
      if (bVar3 == (iVar4 == -1)) goto LAB_0071dbc4;
    }
    else if (bVar3 == false) goto LAB_0071dbc4;
  }
  uVar5 = local_c0 >> 1 & 0x7f;
  if ((local_c0 & 1) != 0) {
    uVar5 = local_b8;
  }
  if (local_c8 == (void *)((long)pvVar6 + uVar5)) {
    if ((long)uVar5 < 1) {
      uVar7 = uVar5 * 2;
      pvVar6 = local_b0;
      uVar1 = uVar7;
      if ((local_c0 & 1) == 0) {
        local_c0 = CONCAT71(local_c0._1_7_,(char)((int)uVar7 << 1));
        pvVar6 = pvVar9;
        uVar1 = local_b8;
      }
      local_b8 = uVar1;
      *(undefined1 *)((long)pvVar6 + uVar7) = 0;
    }
    else {
                    /* try { // try from 0071daa4 to 0071db17 has its CatchHandler @ 0071dd10 */
      FUN_0071341c(&local_c0,uVar5,0);
    }
    uVar1 = 0x16;
    if ((local_c0 & 1) != 0) {
      uVar1 = (local_c0 & 0xfffffffffffffffe) - 1;
    }
    uVar7 = local_c0 >> 1 & 0x7f;
    if ((local_c0 & 1) != 0) {
      uVar7 = local_b8;
    }
    if (uVar1 < uVar7 || uVar1 - uVar7 == 0) {
      pvVar6 = local_b0;
      uVar7 = uVar1;
      if ((local_c0 & 1) == 0) {
        local_c0 = CONCAT71(local_c0._1_7_,(char)((int)uVar1 << 1));
        pvVar6 = pvVar9;
        uVar7 = local_b8;
      }
      local_b8 = uVar7;
      *(undefined1 *)((long)pvVar6 + uVar1) = 0;
    }
    else {
      FUN_0071341c(&local_c0,uVar1 - uVar7,0);
    }
    pvVar6 = pvVar9;
    if ((local_c0 & 1) != 0) {
      pvVar6 = local_b0;
    }
    local_c8 = (void *)((long)pvVar6 + uVar5);
  }
  if ((byte *)param_2[3] == (byte *)param_2[4]) {
                    /* try { // try from 0071db70 to 0071dbbf has its CatchHandler @ 0071dd14 */
    uVar5 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar5 = (ulong)*(byte *)param_2[3];
  }
  iVar4 = FUN_007221e8(uVar5,local_178,local_17c,pvVar6,&local_c8,local_8c[0],local_90[0],local_a8,
                       auStack_168,&local_170,&local_174,auStack_88);
  param_3 = plVar8;
  if (iVar4 != 0) goto LAB_0071dbc4;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 1;
  }
  goto LAB_0071d9f4;
LAB_0071dbc4:
  uVar5 = (ulong)(local_a8[0] >> 1);
  if ((local_a8[0] & 1) != 0) {
    uVar5 = local_a0;
  }
  if (((uVar5 != 0) && (local_178[0] != '\0')) && ((long)local_170 - (long)auStack_168 < 0xa0)) {
    *local_170 = local_174;
    local_170 = local_170 + 1;
  }
                    /* try { // try from 0071dc0c to 0071dcf3 has its CatchHandler @ 0071dd0c */
  uVar10 = FUN_00737c70(pvVar6,local_c8,param_5);
  *param_6 = uVar10;
  FUN_0072c15c(local_a8,auStack_168,local_170,param_5);
  if (param_2 == (long *)0x0) {
    bVar3 = true;
    plVar8 = param_2;
joined_r0x0071dc54:
    param_2 = plVar8;
    if (param_3 != (long *)0x0) goto LAB_0071dc58;
LAB_0071dcdc:
    if (bVar3 == false) goto LAB_0071dc74;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar4 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar3 = iVar4 == -1;
      plVar8 = (long *)0x0;
      if (!bVar3) {
        plVar8 = param_2;
      }
      goto joined_r0x0071dc54;
    }
    bVar3 = false;
    if (param_3 == (long *)0x0) goto LAB_0071dcdc;
LAB_0071dc58:
    if (param_3[3] == param_3[4]) {
      iVar4 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar3 != (iVar4 == -1)) goto LAB_0071dc74;
    }
    else if (bVar3 != false) goto LAB_0071dc74;
  }
  *param_5 = *param_5 | 2;
LAB_0071dc74:
  if ((local_c0 & 1) != 0) {
    free(local_b0);
  }
  if ((local_a8[0] & 1) != 0) {
    free(local_98);
  }
  return param_2;
}


// ===== 0071dd50  FUN_0071dd50 =====

void FUN_0071dd50(void)

{
  FUN_0071dd58();
  return;
}


// ===== 0071dd58  FUN_0071dd58 =====

long * FUN_0071dd58(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,uint *param_5,
                   undefined8 *param_6)

{
  ulong uVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  long *plVar8;
  void *pvVar9;
  undefined8 uVar10;
  undefined1 local_17c [4];
  char local_178 [4];
  undefined4 local_174;
  undefined4 *local_170;
  undefined4 auStack_168 [40];
  void *local_c8;
  undefined8 local_c0;
  ulong local_b8;
  void *local_b0;
  byte local_a8 [8];
  ulong local_a0;
  void *local_98;
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  undefined1 auStack_88 [40];
  
  FUN_00722050(local_a8,param_4,auStack_88,local_8c,local_90);
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = (void *)0x0;
                    /* try { // try from 0071ddb0 to 0071ddc3 has its CatchHandler @ 0071e120 */
  FUN_0071341c(&local_c0,0x16,0);
  pvVar9 = (void *)((ulong)&local_c0 | 1);
  local_174 = 0;
  pvVar6 = local_b0;
  if ((local_c0 & 1) == 0) {
    pvVar6 = (void *)((long)&local_c0 + 1);
  }
  local_178[0] = '\x01';
  local_17c[0] = 0x45;
  local_170 = auStack_168;
  local_c8 = pvVar6;
LAB_0071de0c:
  plVar8 = param_3;
  if (param_2 == (long *)0x0) {
    bVar3 = true;
    plVar2 = param_2;
joined_r0x0071de2c:
    param_2 = plVar2;
    if (param_3 != (long *)0x0) goto LAB_0071de30;
LAB_0071de64:
    if (bVar3 != false) goto LAB_0071dfdc;
  }
  else {
    if (param_2[3] == param_2[4]) {
                    /* try { // try from 0071de4c to 0071de7b has its CatchHandler @ 0071e12c */
      iVar4 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar3 = iVar4 == -1;
      plVar2 = (long *)0x0;
      if (!bVar3) {
        plVar2 = param_2;
      }
      goto joined_r0x0071de2c;
    }
    bVar3 = false;
    if (param_3 == (long *)0x0) goto LAB_0071de64;
LAB_0071de30:
    if (param_3[3] == param_3[4]) {
      iVar4 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar8 = (long *)0x0;
      if (iVar4 != -1) {
        plVar8 = param_3;
      }
      param_3 = plVar8;
      if (bVar3 == (iVar4 == -1)) goto LAB_0071dfdc;
    }
    else if (bVar3 == false) goto LAB_0071dfdc;
  }
  uVar5 = local_c0 >> 1 & 0x7f;
  if ((local_c0 & 1) != 0) {
    uVar5 = local_b8;
  }
  if (local_c8 == (void *)((long)pvVar6 + uVar5)) {
    if ((long)uVar5 < 1) {
      uVar7 = uVar5 * 2;
      pvVar6 = local_b0;
      uVar1 = uVar7;
      if ((local_c0 & 1) == 0) {
        local_c0 = CONCAT71(local_c0._1_7_,(char)((int)uVar7 << 1));
        pvVar6 = pvVar9;
        uVar1 = local_b8;
      }
      local_b8 = uVar1;
      *(undefined1 *)((long)pvVar6 + uVar7) = 0;
    }
    else {
                    /* try { // try from 0071debc to 0071df2f has its CatchHandler @ 0071e128 */
      FUN_0071341c(&local_c0,uVar5,0);
    }
    uVar1 = 0x16;
    if ((local_c0 & 1) != 0) {
      uVar1 = (local_c0 & 0xfffffffffffffffe) - 1;
    }
    uVar7 = local_c0 >> 1 & 0x7f;
    if ((local_c0 & 1) != 0) {
      uVar7 = local_b8;
    }
    if (uVar1 < uVar7 || uVar1 - uVar7 == 0) {
      pvVar6 = local_b0;
      uVar7 = uVar1;
      if ((local_c0 & 1) == 0) {
        local_c0 = CONCAT71(local_c0._1_7_,(char)((int)uVar1 << 1));
        pvVar6 = pvVar9;
        uVar7 = local_b8;
      }
      local_b8 = uVar7;
      *(undefined1 *)((long)pvVar6 + uVar1) = 0;
    }
    else {
      FUN_0071341c(&local_c0,uVar1 - uVar7,0);
    }
    pvVar6 = pvVar9;
    if ((local_c0 & 1) != 0) {
      pvVar6 = local_b0;
    }
    local_c8 = (void *)((long)pvVar6 + uVar5);
  }
  if ((byte *)param_2[3] == (byte *)param_2[4]) {
                    /* try { // try from 0071df88 to 0071dfd7 has its CatchHandler @ 0071e12c */
    uVar5 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar5 = (ulong)*(byte *)param_2[3];
  }
  iVar4 = FUN_007221e8(uVar5,local_178,local_17c,pvVar6,&local_c8,local_8c[0],local_90[0],local_a8,
                       auStack_168,&local_170,&local_174,auStack_88);
  param_3 = plVar8;
  if (iVar4 != 0) goto LAB_0071dfdc;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 1;
  }
  goto LAB_0071de0c;
LAB_0071dfdc:
  uVar5 = (ulong)(local_a8[0] >> 1);
  if ((local_a8[0] & 1) != 0) {
    uVar5 = local_a0;
  }
  if (((uVar5 != 0) && (local_178[0] != '\0')) && ((long)local_170 - (long)auStack_168 < 0xa0)) {
    *local_170 = local_174;
    local_170 = local_170 + 1;
  }
                    /* try { // try from 0071e024 to 0071e10b has its CatchHandler @ 0071e124 */
  uVar10 = FUN_00737d88(pvVar6,local_c8,param_5);
  *param_6 = uVar10;
  FUN_0072c15c(local_a8,auStack_168,local_170,param_5);
  if (param_2 == (long *)0x0) {
    bVar3 = true;
    plVar8 = param_2;
joined_r0x0071e06c:
    param_2 = plVar8;
    if (param_3 != (long *)0x0) goto LAB_0071e070;
LAB_0071e0f4:
    if (bVar3 == false) goto LAB_0071e08c;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar4 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar3 = iVar4 == -1;
      plVar8 = (long *)0x0;
      if (!bVar3) {
        plVar8 = param_2;
      }
      goto joined_r0x0071e06c;
    }
    bVar3 = false;
    if (param_3 == (long *)0x0) goto LAB_0071e0f4;
LAB_0071e070:
    if (param_3[3] == param_3[4]) {
      iVar4 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar3 != (iVar4 == -1)) goto LAB_0071e08c;
    }
    else if (bVar3 != false) goto LAB_0071e08c;
  }
  *param_5 = *param_5 | 2;
LAB_0071e08c:
  if ((local_c0 & 1) != 0) {
    free(local_b0);
  }
  if ((local_a8[0] & 1) != 0) {
    free(local_98);
  }
  return param_2;
}


// ===== 0071e168  FUN_0071e168 =====

void FUN_0071e168(void)

{
  FUN_0071e170();
  return;
}


// ===== 0071e170  FUN_0071e170 =====

long * FUN_0071e170(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,uint *param_5,
                   undefined1 (*param_6) [16])

{
  ulong uVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  long *plVar8;
  void *pvVar9;
  undefined1 auVar10 [16];
  undefined1 local_17c [4];
  char local_178 [4];
  undefined4 local_174;
  undefined4 *local_170;
  undefined4 auStack_168 [40];
  void *local_c8;
  undefined8 local_c0;
  ulong local_b8;
  void *local_b0;
  byte local_a8 [8];
  ulong local_a0;
  void *local_98;
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  undefined1 auStack_88 [40];
  
  FUN_00722050(local_a8,param_4,auStack_88,local_8c,local_90);
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = (void *)0x0;
                    /* try { // try from 0071e1c8 to 0071e1db has its CatchHandler @ 0071e538 */
  FUN_0071341c(&local_c0,0x16,0);
  pvVar9 = (void *)((ulong)&local_c0 | 1);
  local_174 = 0;
  pvVar6 = local_b0;
  if ((local_c0 & 1) == 0) {
    pvVar6 = (void *)((long)&local_c0 + 1);
  }
  local_178[0] = '\x01';
  local_17c[0] = 0x45;
  local_170 = auStack_168;
  local_c8 = pvVar6;
LAB_0071e224:
  plVar8 = param_3;
  if (param_2 == (long *)0x0) {
    bVar3 = true;
    plVar2 = param_2;
joined_r0x0071e244:
    param_2 = plVar2;
    if (param_3 != (long *)0x0) goto LAB_0071e248;
LAB_0071e27c:
    if (bVar3 != false) goto LAB_0071e3f4;
  }
  else {
    if (param_2[3] == param_2[4]) {
                    /* try { // try from 0071e264 to 0071e293 has its CatchHandler @ 0071e544 */
      iVar4 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar3 = iVar4 == -1;
      plVar2 = (long *)0x0;
      if (!bVar3) {
        plVar2 = param_2;
      }
      goto joined_r0x0071e244;
    }
    bVar3 = false;
    if (param_3 == (long *)0x0) goto LAB_0071e27c;
LAB_0071e248:
    if (param_3[3] == param_3[4]) {
      iVar4 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar8 = (long *)0x0;
      if (iVar4 != -1) {
        plVar8 = param_3;
      }
      param_3 = plVar8;
      if (bVar3 == (iVar4 == -1)) goto LAB_0071e3f4;
    }
    else if (bVar3 == false) goto LAB_0071e3f4;
  }
  uVar5 = local_c0 >> 1 & 0x7f;
  if ((local_c0 & 1) != 0) {
    uVar5 = local_b8;
  }
  if (local_c8 == (void *)((long)pvVar6 + uVar5)) {
    if ((long)uVar5 < 1) {
      uVar7 = uVar5 * 2;
      pvVar6 = local_b0;
      uVar1 = uVar7;
      if ((local_c0 & 1) == 0) {
        local_c0 = CONCAT71(local_c0._1_7_,(char)((int)uVar7 << 1));
        pvVar6 = pvVar9;
        uVar1 = local_b8;
      }
      local_b8 = uVar1;
      *(undefined1 *)((long)pvVar6 + uVar7) = 0;
    }
    else {
                    /* try { // try from 0071e2d4 to 0071e347 has its CatchHandler @ 0071e540 */
      FUN_0071341c(&local_c0,uVar5,0);
    }
    uVar1 = 0x16;
    if ((local_c0 & 1) != 0) {
      uVar1 = (local_c0 & 0xfffffffffffffffe) - 1;
    }
    uVar7 = local_c0 >> 1 & 0x7f;
    if ((local_c0 & 1) != 0) {
      uVar7 = local_b8;
    }
    if (uVar1 < uVar7 || uVar1 - uVar7 == 0) {
      pvVar6 = local_b0;
      uVar7 = uVar1;
      if ((local_c0 & 1) == 0) {
        local_c0 = CONCAT71(local_c0._1_7_,(char)((int)uVar1 << 1));
        pvVar6 = pvVar9;
        uVar7 = local_b8;
      }
      local_b8 = uVar7;
      *(undefined1 *)((long)pvVar6 + uVar1) = 0;
    }
    else {
      FUN_0071341c(&local_c0,uVar1 - uVar7,0);
    }
    pvVar6 = pvVar9;
    if ((local_c0 & 1) != 0) {
      pvVar6 = local_b0;
    }
    local_c8 = (void *)((long)pvVar6 + uVar5);
  }
  if ((byte *)param_2[3] == (byte *)param_2[4]) {
                    /* try { // try from 0071e3a0 to 0071e3ef has its CatchHandler @ 0071e544 */
    uVar5 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar5 = (ulong)*(byte *)param_2[3];
  }
  iVar4 = FUN_007221e8(uVar5,local_178,local_17c,pvVar6,&local_c8,local_8c[0],local_90[0],local_a8,
                       auStack_168,&local_170,&local_174,auStack_88);
  param_3 = plVar8;
  if (iVar4 != 0) goto LAB_0071e3f4;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 1;
  }
  goto LAB_0071e224;
LAB_0071e3f4:
  uVar5 = (ulong)(local_a8[0] >> 1);
  if ((local_a8[0] & 1) != 0) {
    uVar5 = local_a0;
  }
  if (((uVar5 != 0) && (local_178[0] != '\0')) && ((long)local_170 - (long)auStack_168 < 0xa0)) {
    *local_170 = local_174;
    local_170 = local_170 + 1;
  }
                    /* try { // try from 0071e43c to 0071e523 has its CatchHandler @ 0071e53c */
  auVar10 = FUN_00737ea0(pvVar6,local_c8,param_5);
  *param_6 = auVar10;
  FUN_0072c15c(local_a8,auStack_168,local_170,param_5);
  if (param_2 == (long *)0x0) {
    bVar3 = true;
    plVar8 = param_2;
joined_r0x0071e484:
    param_2 = plVar8;
    if (param_3 != (long *)0x0) goto LAB_0071e488;
LAB_0071e50c:
    if (bVar3 == false) goto LAB_0071e4a4;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar4 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar3 = iVar4 == -1;
      plVar8 = (long *)0x0;
      if (!bVar3) {
        plVar8 = param_2;
      }
      goto joined_r0x0071e484;
    }
    bVar3 = false;
    if (param_3 == (long *)0x0) goto LAB_0071e50c;
LAB_0071e488:
    if (param_3[3] == param_3[4]) {
      iVar4 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar3 != (iVar4 == -1)) goto LAB_0071e4a4;
    }
    else if (bVar3 != false) goto LAB_0071e4a4;
  }
  *param_5 = *param_5 | 2;
LAB_0071e4a4:
  if ((local_c0 & 1) != 0) {
    free(local_b0);
  }
  if ((local_a8[0] & 1) != 0) {
    free(local_98);
  }
  return param_2;
}


// ===== 0071e580  FUN_0071e580 =====

long * FUN_0071e580(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,uint *param_5,
                   undefined8 param_6)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  undefined **ppuVar9;
  uint uVar10;
  undefined1 uVar11;
  undefined1 *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 local_b0;
  ulong local_a8;
  undefined1 *local_a0;
  long local_98;
  undefined1 auStack_8a [24];
  byte local_72;
  byte local_71;
  undefined *local_70;
  undefined8 *local_68;
  
                    /* try { // try from 0071e5b8 to 0071e5bf has its CatchHandler @ 0071ea78 */
  FUN_00715df0(&local_98,param_4);
  puVar3 = PTR_DAT_007a1108;
  local_70 = PTR_DAT_007a1108;
  if (*(long *)PTR_DAT_007a1108 != -1) {
    local_b0 = &local_70;
    local_68 = &local_b0;
                    /* try { // try from 0071e5ec to 0071e643 has its CatchHandler @ 0071ea80 */
    FUN_00710f84(PTR_DAT_007a1108,&local_68,FUN_007374a0);
  }
  puVar4 = PTR_s_0123456789abcdefABCDEFxX__pPiInN_007a38e0;
  if (((ulong)(*(long *)(local_98 + 0x18) - *(long *)(local_98 + 0x10) >> 3) <=
       (long)*(int *)(puVar3 + 8) - 1U) ||
     (plVar8 = *(long **)(*(long *)(local_98 + 0x10) + ((long)*(int *)(puVar3 + 8) - 1U) * 8),
     plVar8 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0071ea20 to 0071ea23 has its CatchHandler @ 0071ea80 */
    FUN_007191ac();
  }
  (**(code **)(*plVar8 + 0x40))
            (plVar8,PTR_s_0123456789abcdefABCDEFxX__pPiInN_007a38e0,
             PTR_s_0123456789abcdefABCDEFxX__pPiInN_007a38e0 + 0x1a,auStack_8a);
  FUN_00732094(&local_98);
  local_b0 = (undefined **)0x0;
  local_a8 = 0;
  local_a0 = (undefined1 *)0x0;
                    /* try { // try from 0071e658 to 0071e66b has its CatchHandler @ 0071ea74 */
  FUN_0071341c(&local_b0,0x16,0);
  puVar17 = (undefined1 *)((ulong)&local_b0 | 1);
  puVar16 = local_a0;
  puVar12 = local_a0;
  if (((ulong)local_b0 & 1) == 0) {
    puVar16 = (undefined1 *)((long)&local_b0 + 1);
    puVar12 = puVar16;
  }
LAB_0071e69c:
  plVar8 = param_3;
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar5 = param_2;
joined_r0x0071e6bc:
    param_2 = plVar5;
    if (param_3 != (long *)0x0) goto LAB_0071e6c0;
LAB_0071e6f4:
    if (bVar6 != false) goto LAB_0071e8bc;
  }
  else {
    if (param_2[3] == param_2[4]) {
                    /* try { // try from 0071e6dc to 0071e70b has its CatchHandler @ 0071ea98 */
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar7 == -1;
      plVar5 = (long *)0x0;
      if (!bVar6) {
        plVar5 = param_2;
      }
      goto joined_r0x0071e6bc;
    }
    bVar6 = false;
    if (param_3 == (long *)0x0) goto LAB_0071e6f4;
LAB_0071e6c0:
    if (param_3[3] == param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar8 = (long *)0x0;
      if (iVar7 != -1) {
        plVar8 = param_3;
      }
      param_3 = plVar8;
      if (bVar6 == (iVar7 == -1)) goto LAB_0071e8bc;
    }
    else if (bVar6 == false) goto LAB_0071e8bc;
  }
  uVar2 = (ulong)local_b0 >> 1 & 0x7f;
  if (((ulong)local_b0 & 1) != 0) {
    uVar2 = local_a8;
  }
  if (puVar12 == puVar16 + uVar2) {
    if ((long)uVar2 < 1) {
      uVar15 = uVar2 * 2;
      puVar12 = local_a0;
      uVar14 = uVar15;
      if (((ulong)local_b0 & 1) == 0) {
        local_b0 = (undefined **)CONCAT71(local_b0._1_7_,(char)((int)uVar15 << 1));
        puVar12 = puVar17;
        uVar14 = local_a8;
      }
      local_a8 = uVar14;
      puVar12[uVar15] = 0;
    }
    else {
                    /* try { // try from 0071e748 to 0071e7b7 has its CatchHandler @ 0071ea94 */
      FUN_0071341c(&local_b0,uVar2,0);
    }
    uVar14 = 0x16;
    if (((ulong)local_b0 & 1) != 0) {
      uVar14 = ((ulong)local_b0 & 0xfffffffffffffffe) - 1;
    }
    uVar15 = (ulong)local_b0 >> 1 & 0x7f;
    if (((ulong)local_b0 & 1) != 0) {
      uVar15 = local_a8;
    }
    if (uVar14 < uVar15 || uVar14 - uVar15 == 0) {
      puVar12 = local_a0;
      uVar15 = uVar14;
      if (((ulong)local_b0 & 1) == 0) {
        local_b0 = (undefined **)CONCAT71(local_b0._1_7_,(char)((int)uVar14 << 1));
        puVar12 = puVar17;
        uVar15 = local_a8;
      }
      local_a8 = uVar15;
      puVar12[uVar14] = 0;
    }
    else {
      FUN_0071341c(&local_b0,uVar14 - uVar15,0);
    }
    puVar16 = puVar17;
    if (((ulong)local_b0 & 1) != 0) {
      puVar16 = local_a0;
    }
    puVar12 = puVar16 + uVar2;
  }
  param_3 = plVar8;
  if ((byte *)param_2[3] == (byte *)param_2[4]) {
                    /* try { // try from 0071e814 to 0071e8b7 has its CatchHandler @ 0071ea98 */
    uVar10 = (**(code **)(*param_2 + 0x48))(param_2);
    uVar10 = uVar10 & 0xff;
    if (puVar12 == puVar16) goto LAB_0071e828;
LAB_0071e850:
    ppuVar9 = (undefined **)memchr(auStack_8a,uVar10,0x1a);
    ppuVar1 = &local_70;
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar1 = ppuVar9;
    }
    lVar13 = (long)ppuVar1 - (long)auStack_8a;
    if ((0x17 < lVar13) ||
       ((0x15 < lVar13 &&
        (((puVar12 == puVar16 || (2 < (long)puVar12 - (long)puVar16)) || (puVar12[-1] != '0'))))))
    goto LAB_0071e8bc;
    uVar11 = puVar4[lVar13];
  }
  else {
    uVar10 = (uint)*(byte *)param_2[3];
    if (puVar12 != puVar16) goto LAB_0071e850;
LAB_0071e828:
    if (local_72 == uVar10) {
      uVar11 = 0x2b;
    }
    else {
      if (local_71 != uVar10) goto LAB_0071e850;
      uVar11 = 0x2d;
    }
  }
  *puVar12 = uVar11;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
    puVar12 = puVar12 + 1;
  }
  else {
    param_2[3] = param_2[3] + 1;
    puVar12 = puVar12 + 1;
  }
  goto LAB_0071e69c;
LAB_0071e8bc:
  uVar14 = (long)puVar12 - (long)puVar16;
  uVar2 = (ulong)local_b0 >> 1 & 0x7f;
  if (((ulong)local_b0 & 1) != 0) {
    uVar2 = local_a8;
  }
  if (uVar14 < uVar2 || uVar14 - uVar2 == 0) {
    puVar12 = local_a0;
    uVar2 = uVar14;
    if (((ulong)local_b0 & 1) == 0) {
      local_b0 = (undefined **)CONCAT71(local_b0._1_7_,(char)((int)uVar14 << 1));
      puVar12 = puVar17;
      uVar2 = local_a8;
    }
    local_a8 = uVar2;
    puVar12[uVar14] = 0;
  }
  else {
                    /* try { // try from 0071e8e0 to 0071ea0b has its CatchHandler @ 0071ea7c */
    FUN_0071341c(&local_b0,uVar14 - uVar2,0);
  }
  if (((ulong)local_b0 & 1) != 0) {
    puVar17 = local_a0;
  }
  if (((DAT_007b0958 & 1) == 0) && (iVar7 = FUN_00739c1c(&DAT_007b0958), iVar7 != 0)) {
                    /* try { // try from 0071ea34 to 0071ea47 has its CatchHandler @ 0071ea60 */
    DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    FUN_00739d60(&DAT_007b0958);
  }
  iVar7 = FUN_0071ec74(puVar17,DAT_007b0950,&DAT_001c7073,param_6);
  if (iVar7 != 1) {
    *param_5 = 4;
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar8 = param_2;
joined_r0x0071e97c:
    param_2 = plVar8;
    if (param_3 != (long *)0x0) goto LAB_0071e980;
LAB_0071e9f4:
    if (bVar6 == false) goto LAB_0071e99c;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar7 == -1;
      plVar8 = (long *)0x0;
      if (!bVar6) {
        plVar8 = param_2;
      }
      goto joined_r0x0071e97c;
    }
    bVar6 = false;
    if (param_3 == (long *)0x0) goto LAB_0071e9f4;
LAB_0071e980:
    if (param_3[3] == param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar6 != (iVar7 == -1)) goto LAB_0071e99c;
    }
    else if (bVar6 != false) goto LAB_0071e99c;
  }
  *param_5 = *param_5 | 2;
LAB_0071e99c:
  if (((ulong)local_b0 & 1) != 0) {
    free(local_a0);
  }
  return param_2;
}


// ===== 0071eab4  FUN_0071eab4 =====

undefined8
FUN_0071eab4(byte param_1,uint param_2,undefined1 *param_3,long *param_4,int *param_5,byte param_6,
            byte *param_7,long param_8,undefined8 *param_9,void *param_10)

{
  ulong uVar1;
  void *pvVar2;
  undefined *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  int *piVar8;
  undefined1 *puVar9;
  
  puVar9 = (undefined1 *)*param_4;
  if (puVar9 == param_3) {
    if (*(byte *)((long)param_10 + 0x18) == param_1) {
      uVar6 = 0x2b;
LAB_0071eb98:
      *param_4 = (long)(param_3 + 1);
      *param_3 = uVar6;
      *param_5 = 0;
      return 0;
    }
    if (*(byte *)((long)param_10 + 0x19) == param_1) {
      uVar6 = 0x2d;
      goto LAB_0071eb98;
    }
  }
  uVar1 = (ulong)(*param_7 >> 1);
  if ((*param_7 & 1) != 0) {
    uVar1 = *(ulong *)(param_7 + 8);
  }
  if ((param_1 == param_6) && (uVar1 != 0)) {
    piVar8 = (int *)*param_9;
    if ((long)piVar8 - param_8 < 0xa0) {
      *piVar8 = *param_5;
      *param_9 = piVar8 + 1;
      *param_5 = 0;
      return 0;
    }
    return 0;
  }
  pvVar4 = memchr(param_10,(uint)param_1,0x1a);
  puVar3 = PTR_s_0123456789abcdefABCDEFxX__pPiInN_007a38e0;
  pvVar2 = (void *)((long)param_10 + 0x1a);
  if (pvVar4 != (void *)0x0) {
    pvVar2 = pvVar4;
  }
  lVar7 = (long)pvVar2 - (long)param_10;
  if (lVar7 < 0x18) {
    if (param_2 == 8) {
LAB_0071ebd0:
      if ((long)(ulong)param_2 <= lVar7) goto LAB_0071eb80;
    }
    else if (param_2 == 0x10) {
      if (0x15 < lVar7) {
        if (puVar9 == param_3) {
          return 0xffffffff;
        }
        if (2 < (long)puVar9 - (long)param_3) {
          return 0xffffffff;
        }
        if (puVar9[-1] != '0') {
          return 0xffffffff;
        }
        *param_5 = 0;
        uVar6 = puVar3[lVar7];
        *param_4 = (long)(puVar9 + 1);
        *puVar9 = uVar6;
        return 0;
      }
    }
    else if (param_2 == 10) goto LAB_0071ebd0;
    uVar5 = 0;
    uVar6 = PTR_s_0123456789abcdefABCDEFxX__pPiInN_007a38e0[lVar7];
    *param_4 = (long)(puVar9 + 1);
    *puVar9 = uVar6;
    *param_5 = *param_5 + 1;
  }
  else {
LAB_0071eb80:
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


// ===== 0071ec74  FUN_0071ec74 =====

int FUN_0071ec74(char *param_1,__locale_t param_2,char *param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  __locale_t __dataset;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  local_98 = param_4;
  uStack_90 = param_5;
  local_88 = param_6;
  uStack_80 = param_7;
  local_78 = param_8;
  __dataset = uselocale(param_2);
  uStack_58 = 0xffffff80ffffffd8;
  local_70 = (undefined1 *)register0x00000008;
  ppuStack_68 = &local_70;
  puStack_60 = auStack_a0;
  iVar1 = vsscanf(param_1,param_3,&local_70);
  if (__dataset != (__locale_t)0x0) {
                    /* try { // try from 0071ed00 to 0071ed07 has its CatchHandler @ 0071ed24 */
    uselocale(__dataset);
  }
  return iVar1;
}


// ===== 0071ed28  FUN_0071ed28 =====

undefined8
FUN_0071ed28(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 *param_5,
            undefined1 *param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  long *plVar6;
  undefined **local_90 [2];
  void *local_80;
  byte local_78 [16];
  void *local_68;
  long local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined1 *local_48;
  
  local_58 = param_2;
  if ((*(byte *)(param_4 + 8) & 1) == 0) {
    local_90[0] = (undefined **)0xffffffffffffffff;
    uVar3 = (**(code **)(*param_1 + 0x20))();
    if (local_90[0] == (undefined **)0x1) {
      *param_6 = 1;
    }
    else if (local_90[0] == (undefined **)0x0) {
      *param_6 = 0;
    }
    else {
      *param_6 = 1;
      *param_5 = 4;
    }
  }
  else {
    FUN_00715df0(&local_60,param_4);
    lVar5 = local_60;
    puVar2 = PTR_DAT_007a2640;
    local_50 = PTR_DAT_007a2640;
    if (*(long *)PTR_DAT_007a2640 != -1) {
      local_90[0] = &local_50;
                    /* try { // try from 0071edcc to 0071ede3 has its CatchHandler @ 0071efa0 */
      local_48 = (undefined1 *)local_90;
      FUN_00710f84(PTR_DAT_007a2640,&local_48,FUN_007374a0);
    }
    lVar1 = *(long *)(lVar5 + 0x10);
    if (((ulong)(*(long *)(lVar5 + 0x18) - lVar1 >> 3) <= (long)*(int *)(puVar2 + 8) - 1U) ||
       (lVar5 = *(long *)(lVar1 + ((long)*(int *)(puVar2 + 8) - 1U) * 8), lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0071ef54 to 0071ef57 has its CatchHandler @ 0071efa0 */
      FUN_007191ac();
    }
    FUN_00732094(&local_60);
    FUN_00715df0(&local_60,param_4);
    puVar2 = PTR_DAT_007a38e8;
    local_50 = PTR_DAT_007a38e8;
    if (*(long *)PTR_DAT_007a38e8 != -1) {
      local_90[0] = &local_50;
                    /* try { // try from 0071ee44 to 0071ee5b has its CatchHandler @ 0071ef9c */
      local_48 = (undefined1 *)local_90;
      FUN_00710f84(PTR_DAT_007a38e8,&local_48,FUN_007374a0);
    }
    if (((ulong)(*(long *)(local_60 + 0x18) - *(long *)(local_60 + 0x10) >> 3) <=
         (long)*(int *)(puVar2 + 8) - 1U) ||
       (plVar6 = *(long **)(*(long *)(local_60 + 0x10) + ((long)*(int *)(puVar2 + 8) - 1U) * 8),
       plVar6 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0071ef58 to 0071ef5b has its CatchHandler @ 0071ef9c */
      FUN_007191ac();
    }
    FUN_00732094(&local_60);
                    /* try { // try from 0071ee8c to 0071ee9b has its CatchHandler @ 0071ef98 */
    (**(code **)(*plVar6 + 0x30))(local_90,plVar6);
                    /* try { // try from 0071eea4 to 0071eeaf has its CatchHandler @ 0071ef7c */
    (**(code **)(*plVar6 + 0x38))(local_78,plVar6);
                    /* try { // try from 0071eeb4 to 0071eed3 has its CatchHandler @ 0071ef5c */
    puVar4 = (undefined1 *)FUN_0071efb4(&local_58,param_3,local_90,&local_60,lVar5,param_5,1);
    uVar3 = local_58;
    *param_6 = (undefined ***)puVar4 == local_90;
    if ((local_78[0] & 1) != 0) {
      free(local_68);
    }
    if (((ulong)local_90[0] & 1) != 0) {
      free(local_80);
    }
  }
  return uVar3;
}


// ===== 0071efb4  FUN_0071efb4 =====

byte * FUN_0071efb4(long *param_1,long *param_2,byte *param_3,byte *param_4,long *param_5,
                   uint *param_6,uint param_7)

{
  byte *pbVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  char *__ptr;
  long *plVar7;
  char cVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  long lVar13;
  ulong __size;
  char local_c4 [100];
  
  __size = ((long)param_4 - (long)param_3 >> 3) * -0x5555555555555555;
  if (100 < __size) {
    __ptr = (char *)malloc(__size);
    pcVar10 = __ptr;
    if (__ptr != (char *)0x0) goto LAB_0071f02c;
    FUN_00712520();
  }
  __ptr = (char *)0x0;
  pcVar10 = local_c4;
LAB_0071f02c:
  lVar13 = 0;
  pbVar9 = param_3;
  pcVar11 = pcVar10;
  if (param_3 != param_4) {
    do {
      pbVar1 = pbVar9 + 0x18;
      uVar2 = (ulong)(*pbVar9 >> 1);
      if ((*pbVar9 & 1) != 0) {
        uVar2 = *(ulong *)(pbVar9 + 8);
      }
      cVar8 = '\x01';
      if (uVar2 == 0) {
        cVar8 = '\x02';
        lVar13 = lVar13 + 1;
      }
      __size = __size - (uVar2 == 0);
      *pcVar11 = cVar8;
      pbVar9 = pbVar1;
      pcVar11 = pcVar11 + 1;
    } while (pbVar1 != param_4);
  }
  lVar12 = 0;
  do {
    plVar7 = (long *)*param_1;
    if (plVar7 == (long *)0x0) {
LAB_0071f0e4:
      bVar3 = true;
      if (param_2 == (long *)0x0) goto LAB_0071f0d8;
LAB_0071f0ec:
      if ((int *)param_2[3] == (int *)param_2[4]) {
        iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
      }
      else {
        iVar5 = *(int *)param_2[3];
      }
      bVar4 = iVar5 == -1;
      plVar7 = (long *)0x0;
      if (!bVar4) {
        plVar7 = param_2;
      }
    }
    else {
      if ((int *)plVar7[3] == (int *)plVar7[4]) {
                    /* try { // try from 0071f0bc to 0071f10f has its CatchHandler @ 0071f404 */
        iVar5 = (**(code **)(*plVar7 + 0x48))();
      }
      else {
        iVar5 = *(int *)plVar7[3];
      }
      if (iVar5 == -1) {
        *param_1 = 0;
        goto LAB_0071f0e4;
      }
      bVar3 = *param_1 == 0;
      if (param_2 != (long *)0x0) goto LAB_0071f0ec;
LAB_0071f0d8:
      bVar4 = true;
      plVar7 = param_2;
    }
    param_2 = plVar7;
    plVar7 = (long *)*param_1;
    if ((bVar3 == bVar4) || (__size == 0)) break;
    if ((int *)plVar7[3] == (int *)plVar7[4]) {
                    /* try { // try from 0071f150 to 0071f173 has its CatchHandler @ 0071f408 */
      iVar5 = (**(code **)(*plVar7 + 0x48))();
    }
    else {
      iVar5 = *(int *)plVar7[3];
    }
    if ((param_7 & 1) == 0) {
      iVar5 = (**(code **)(*param_5 + 0x38))(param_5,iVar5);
    }
    if (param_3 == param_4) {
      lVar12 = lVar12 + 1;
    }
    else {
      bVar3 = false;
      pbVar9 = param_3;
      pcVar11 = pcVar10;
      do {
        if (*pcVar11 == '\x01') {
          pbVar1 = pbVar9 + 4;
          if ((*pbVar9 & 1) != 0) {
            pbVar1 = *(byte **)(pbVar9 + 0x10);
          }
          iVar6 = *(int *)(pbVar1 + lVar12 * 4);
          if ((param_7 & 1) == 0) {
                    /* try { // try from 0071f1e4 to 0071f1ef has its CatchHandler @ 0071f40c */
            iVar6 = (**(code **)(*param_5 + 0x38))(param_5);
          }
          if (iVar5 == iVar6) {
            uVar2 = (ulong)(*pbVar9 >> 1);
            if ((*pbVar9 & 1) != 0) {
              uVar2 = *(ulong *)(pbVar9 + 8);
            }
            if (uVar2 == lVar12 + 1U) {
              __size = __size - 1;
              lVar13 = lVar13 + 1;
              *pcVar11 = '\x02';
            }
            bVar3 = true;
          }
          else {
            __size = __size - 1;
            *pcVar11 = '\0';
          }
        }
        pbVar9 = pbVar9 + 0x18;
        pcVar11 = pcVar11 + 1;
      } while (pbVar9 != param_4);
      if (bVar3) {
        plVar7 = (long *)*param_1;
        if (plVar7[3] == plVar7[4]) {
                    /* try { // try from 0071f26c to 0071f26f has its CatchHandler @ 0071f400 */
          (**(code **)(*plVar7 + 0x50))();
        }
        else {
          plVar7[3] = plVar7[3] + 4;
        }
        if ((1 < lVar13 + __size) && (param_3 != param_4)) {
          pbVar9 = param_3;
          pcVar11 = pcVar10;
          do {
            if (*pcVar11 == '\x02') {
              uVar2 = (ulong)(*pbVar9 >> 1);
              if ((*pbVar9 & 1) != 0) {
                uVar2 = *(ulong *)(pbVar9 + 8);
              }
              if (uVar2 != lVar12 + 1U) {
                lVar13 = lVar13 + -1;
                *pcVar11 = '\0';
              }
            }
            pbVar9 = pbVar9 + 0x18;
            pcVar11 = pcVar11 + 1;
          } while (pbVar9 != param_4);
        }
        lVar12 = lVar12 + 1;
      }
      else {
        lVar12 = lVar12 + 1;
      }
    }
  } while( true );
  if (plVar7 == (long *)0x0) {
joined_r0x0071f308:
    bVar3 = true;
    if (param_2 != (long *)0x0) goto LAB_0071f338;
LAB_0071f30c:
    if (!bVar3) goto LAB_0071f378;
  }
  else {
    if ((int *)plVar7[3] == (int *)plVar7[4]) {
                    /* try { // try from 0071f31c to 0071f35b has its CatchHandler @ 0071f3fc */
      iVar5 = (**(code **)(*plVar7 + 0x48))();
    }
    else {
      iVar5 = *(int *)plVar7[3];
    }
    if (iVar5 == -1) {
      *param_1 = 0;
      goto joined_r0x0071f308;
    }
    bVar3 = *param_1 == 0;
    if (param_2 == (long *)0x0) goto LAB_0071f30c;
LAB_0071f338:
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar5 = *(int *)param_2[3];
    }
    if (bVar3 != (iVar5 == -1)) goto LAB_0071f378;
  }
  *param_6 = *param_6 | 2;
LAB_0071f378:
  if (param_3 != param_4) {
    do {
      if (*pcVar10 == '\x02') goto joined_r0x0071f3e4;
      param_3 = param_3 + 0x18;
      pcVar10 = pcVar10 + 1;
    } while (param_3 != param_4);
  }
  *param_6 = *param_6 | 4;
  param_3 = param_4;
joined_r0x0071f3e4:
  if (__ptr != (char *)0x0) {
    free(__ptr);
  }
  return param_3;
}


// ===== 0071f428  FUN_0071f428 =====

void FUN_0071f428(void)

{
  FUN_0071f430();
  return;
}


// ===== 0071f430  FUN_0071f430 =====

long * FUN_0071f430(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                   undefined8 *param_6)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  void *pvVar8;
  ulong uVar9;
  undefined4 uVar10;
  void *pvVar11;
  undefined4 local_1bc;
  undefined4 *local_1b8;
  undefined4 auStack_1b0 [40];
  void *local_110;
  undefined8 local_108;
  ulong local_100;
  void *local_f8;
  byte local_f0 [8];
  ulong local_e8;
  void *local_e0;
  undefined1 auStack_d4 [104];
  undefined4 local_6c [3];
  
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar10 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar10 = 8;
  }
  else if (uVar1 == 8) {
    uVar10 = 0x10;
  }
  else {
    uVar10 = 10;
  }
  FUN_007229e4(local_f0,param_4,auStack_d4,local_6c);
  local_108 = 0;
  local_100 = 0;
  local_f8 = (void *)0x0;
                    /* try { // try from 0071f4c4 to 0071f4d7 has its CatchHandler @ 0071f810 */
  FUN_0071341c(&local_108,0x16,0);
  local_1b8 = auStack_1b0;
  pvVar11 = (void *)((ulong)&local_108 | 1);
  local_1bc = 0;
  pvVar8 = local_f8;
  if ((local_108 & 1) == 0) {
    pvVar8 = (void *)((long)&local_108 + 1);
  }
  local_110 = pvVar8;
LAB_0071f510:
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    if (param_3 != (long *)0x0) goto LAB_0071f558;
LAB_0071f530:
    if (bVar4 != false) goto LAB_0071f6d4;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
                    /* try { // try from 0071f540 to 0071f57b has its CatchHandler @ 0071f81c */
      iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar5 = *(int *)param_2[3];
    }
    bVar4 = iVar5 == -1;
    plVar3 = (long *)0x0;
    if (!bVar4) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_0071f530;
LAB_0071f558:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar5 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar5 = *(int *)param_3[3];
    }
    plVar3 = (long *)0x0;
    if (iVar5 != -1) {
      plVar3 = param_3;
    }
    param_3 = plVar3;
    if (bVar4 == (iVar5 == -1)) goto LAB_0071f6d4;
  }
  uVar6 = local_108 >> 1 & 0x7f;
  if ((local_108 & 1) != 0) {
    uVar6 = local_100;
  }
  if (local_110 == (void *)((long)pvVar8 + uVar6)) {
    if ((long)uVar6 < 1) {
      uVar9 = uVar6 * 2;
      pvVar8 = local_f8;
      uVar2 = uVar9;
      if ((local_108 & 1) == 0) {
        local_108 = CONCAT71(local_108._1_7_,(char)((int)uVar9 << 1));
        pvVar8 = pvVar11;
        uVar2 = local_100;
      }
      local_100 = uVar2;
      *(undefined1 *)((long)pvVar8 + uVar9) = 0;
    }
    else {
                    /* try { // try from 0071f5bc to 0071f62b has its CatchHandler @ 0071f818 */
      FUN_0071341c(&local_108,uVar6,0);
    }
    uVar2 = 0x16;
    if ((local_108 & 1) != 0) {
      uVar2 = (local_108 & 0xfffffffffffffffe) - 1;
    }
    uVar9 = local_108 >> 1 & 0x7f;
    if ((local_108 & 1) != 0) {
      uVar9 = local_100;
    }
    if (uVar2 < uVar9 || uVar2 - uVar9 == 0) {
      pvVar8 = local_f8;
      uVar9 = uVar2;
      if ((local_108 & 1) == 0) {
        local_108 = CONCAT71(local_108._1_7_,(char)((int)uVar2 << 1));
        pvVar8 = pvVar11;
        uVar9 = local_100;
      }
      local_100 = uVar9;
      *(undefined1 *)((long)pvVar8 + uVar2) = 0;
    }
    else {
      FUN_0071341c(&local_108,uVar2 - uVar9,0);
    }
    pvVar8 = pvVar11;
    if ((local_108 & 1) != 0) {
      pvVar8 = local_f8;
    }
    local_110 = (void *)((long)pvVar8 + uVar6);
  }
  if ((uint *)param_2[3] == (uint *)param_2[4]) {
                    /* try { // try from 0071f684 to 0071f6cf has its CatchHandler @ 0071f81c */
    uVar6 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar6 = (ulong)*(uint *)param_2[3];
  }
  iVar5 = FUN_00721e94(uVar6,uVar10,pvVar8,&local_110,&local_1bc,local_6c[0],local_f0,auStack_1b0,
                       &local_1b8,auStack_d4);
  if (iVar5 != 0) goto LAB_0071f6d4;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_0071f510;
LAB_0071f6d4:
  uVar6 = (ulong)(local_f0[0] >> 1);
  if ((local_f0[0] & 1) != 0) {
    uVar6 = local_e8;
  }
  if ((uVar6 != 0) && ((long)local_1b8 - (long)auStack_1b0 < 0xa0)) {
    *local_1b8 = local_1bc;
    local_1b8 = local_1b8 + 1;
  }
                    /* try { // try from 0071f714 to 0071f7ab has its CatchHandler @ 0071f814 */
  uVar7 = FUN_007374e4(pvVar8,local_110,param_5,uVar10);
  *param_6 = uVar7;
  FUN_0072c15c(local_f0,auStack_1b0,local_1b8,param_5);
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    if (param_3 != (long *)0x0) goto LAB_0071f788;
LAB_0071f760:
    if (!bVar4) goto LAB_0071f7c8;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar5 = *(int *)param_2[3];
    }
    bVar4 = iVar5 == -1;
    plVar3 = (long *)0x0;
    if (!bVar4) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_0071f760;
LAB_0071f788:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar5 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar5 = *(int *)param_3[3];
    }
    if (bVar4 != (iVar5 == -1)) goto LAB_0071f7c8;
  }
  *param_5 = *param_5 | 2;
LAB_0071f7c8:
  if ((local_108 & 1) != 0) {
    free(local_f8);
  }
  if ((local_f0[0] & 1) != 0) {
    free(local_e0);
  }
  return param_2;
}


// ===== 0071f858  FUN_0071f858 =====

void FUN_0071f858(void)

{
  FUN_0071f860();
  return;
}


// ===== 0071f860  FUN_0071f860 =====

long * FUN_0071f860(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                   undefined8 *param_6)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  void *pvVar8;
  ulong uVar9;
  undefined4 uVar10;
  void *pvVar11;
  undefined4 local_1bc;
  undefined4 *local_1b8;
  undefined4 auStack_1b0 [40];
  void *local_110;
  undefined8 local_108;
  ulong local_100;
  void *local_f8;
  byte local_f0 [8];
  ulong local_e8;
  void *local_e0;
  undefined1 auStack_d4 [104];
  undefined4 local_6c [3];
  
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar10 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar10 = 8;
  }
  else if (uVar1 == 8) {
    uVar10 = 0x10;
  }
  else {
    uVar10 = 10;
  }
  FUN_007229e4(local_f0,param_4,auStack_d4,local_6c);
  local_108 = 0;
  local_100 = 0;
  local_f8 = (void *)0x0;
                    /* try { // try from 0071f8f4 to 0071f907 has its CatchHandler @ 0071fc40 */
  FUN_0071341c(&local_108,0x16,0);
  local_1b8 = auStack_1b0;
  pvVar11 = (void *)((ulong)&local_108 | 1);
  local_1bc = 0;
  pvVar8 = local_f8;
  if ((local_108 & 1) == 0) {
    pvVar8 = (void *)((long)&local_108 + 1);
  }
  local_110 = pvVar8;
LAB_0071f940:
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    if (param_3 != (long *)0x0) goto LAB_0071f988;
LAB_0071f960:
    if (bVar4 != false) goto LAB_0071fb04;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
                    /* try { // try from 0071f970 to 0071f9ab has its CatchHandler @ 0071fc4c */
      iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar5 = *(int *)param_2[3];
    }
    bVar4 = iVar5 == -1;
    plVar3 = (long *)0x0;
    if (!bVar4) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_0071f960;
LAB_0071f988:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar5 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar5 = *(int *)param_3[3];
    }
    plVar3 = (long *)0x0;
    if (iVar5 != -1) {
      plVar3 = param_3;
    }
    param_3 = plVar3;
    if (bVar4 == (iVar5 == -1)) goto LAB_0071fb04;
  }
  uVar6 = local_108 >> 1 & 0x7f;
  if ((local_108 & 1) != 0) {
    uVar6 = local_100;
  }
  if (local_110 == (void *)((long)pvVar8 + uVar6)) {
    if ((long)uVar6 < 1) {
      uVar9 = uVar6 * 2;
      pvVar8 = local_f8;
      uVar2 = uVar9;
      if ((local_108 & 1) == 0) {
        local_108 = CONCAT71(local_108._1_7_,(char)((int)uVar9 << 1));
        pvVar8 = pvVar11;
        uVar2 = local_100;
      }
      local_100 = uVar2;
      *(undefined1 *)((long)pvVar8 + uVar9) = 0;
    }
    else {
                    /* try { // try from 0071f9ec to 0071fa5b has its CatchHandler @ 0071fc48 */
      FUN_0071341c(&local_108,uVar6,0);
    }
    uVar2 = 0x16;
    if ((local_108 & 1) != 0) {
      uVar2 = (local_108 & 0xfffffffffffffffe) - 1;
    }
    uVar9 = local_108 >> 1 & 0x7f;
    if ((local_108 & 1) != 0) {
      uVar9 = local_100;
    }
    if (uVar2 < uVar9 || uVar2 - uVar9 == 0) {
      pvVar8 = local_f8;
      uVar9 = uVar2;
      if ((local_108 & 1) == 0) {
        local_108 = CONCAT71(local_108._1_7_,(char)((int)uVar2 << 1));
        pvVar8 = pvVar11;
        uVar9 = local_100;
      }
      local_100 = uVar9;
      *(undefined1 *)((long)pvVar8 + uVar2) = 0;
    }
    else {
      FUN_0071341c(&local_108,uVar2 - uVar9,0);
    }
    pvVar8 = pvVar11;
    if ((local_108 & 1) != 0) {
      pvVar8 = local_f8;
    }
    local_110 = (void *)((long)pvVar8 + uVar6);
  }
  if ((uint *)param_2[3] == (uint *)param_2[4]) {
                    /* try { // try from 0071fab4 to 0071faff has its CatchHandler @ 0071fc4c */
    uVar6 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar6 = (ulong)*(uint *)param_2[3];
  }
  iVar5 = FUN_00721e94(uVar6,uVar10,pvVar8,&local_110,&local_1bc,local_6c[0],local_f0,auStack_1b0,
                       &local_1b8,auStack_d4);
  if (iVar5 != 0) goto LAB_0071fb04;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_0071f940;
LAB_0071fb04:
  uVar6 = (ulong)(local_f0[0] >> 1);
  if ((local_f0[0] & 1) != 0) {
    uVar6 = local_e8;
  }
  if ((uVar6 != 0) && ((long)local_1b8 - (long)auStack_1b0 < 0xa0)) {
    *local_1b8 = local_1bc;
    local_1b8 = local_1b8 + 1;
  }
                    /* try { // try from 0071fb44 to 0071fbdb has its CatchHandler @ 0071fc44 */
  uVar7 = FUN_0073760c(pvVar8,local_110,param_5,uVar10);
  *param_6 = uVar7;
  FUN_0072c15c(local_f0,auStack_1b0,local_1b8,param_5);
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    if (param_3 != (long *)0x0) goto LAB_0071fbb8;
LAB_0071fb90:
    if (!bVar4) goto LAB_0071fbf8;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar5 = *(int *)param_2[3];
    }
    bVar4 = iVar5 == -1;
    plVar3 = (long *)0x0;
    if (!bVar4) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_0071fb90;
LAB_0071fbb8:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar5 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar5 = *(int *)param_3[3];
    }
    if (bVar4 != (iVar5 == -1)) goto LAB_0071fbf8;
  }
  *param_5 = *param_5 | 2;
LAB_0071fbf8:
  if ((local_108 & 1) != 0) {
    free(local_f8);
  }
  if ((local_f0[0] & 1) != 0) {
    free(local_e0);
  }
  return param_2;
}


// ===== 0071fc88  FUN_0071fc88 =====

void FUN_0071fc88(void)

{
  FUN_0071fc90();
  return;
}


// ===== 0071fc90  FUN_0071fc90 =====

long * FUN_0071fc90(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                   undefined2 *param_6)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  bool bVar4;
  undefined2 uVar5;
  int iVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  undefined4 uVar10;
  void *pvVar11;
  undefined4 local_1bc;
  undefined4 *local_1b8;
  undefined4 auStack_1b0 [40];
  void *local_110;
  undefined8 local_108;
  ulong local_100;
  void *local_f8;
  byte local_f0 [8];
  ulong local_e8;
  void *local_e0;
  undefined1 auStack_d4 [104];
  undefined4 local_6c [3];
  
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar10 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar10 = 8;
  }
  else if (uVar1 == 8) {
    uVar10 = 0x10;
  }
  else {
    uVar10 = 10;
  }
  FUN_007229e4(local_f0,param_4,auStack_d4,local_6c);
  local_108 = 0;
  local_100 = 0;
  local_f8 = (void *)0x0;
                    /* try { // try from 0071fd24 to 0071fd37 has its CatchHandler @ 00720070 */
  FUN_0071341c(&local_108,0x16,0);
  local_1b8 = auStack_1b0;
  pvVar11 = (void *)((ulong)&local_108 | 1);
  local_1bc = 0;
  pvVar8 = local_f8;
  if ((local_108 & 1) == 0) {
    pvVar8 = (void *)((long)&local_108 + 1);
  }
  local_110 = pvVar8;
LAB_0071fd70:
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    if (param_3 != (long *)0x0) goto LAB_0071fdb8;
LAB_0071fd90:
    if (bVar4 != false) goto LAB_0071ff34;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
                    /* try { // try from 0071fda0 to 0071fddb has its CatchHandler @ 0072007c */
      iVar6 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar6 = *(int *)param_2[3];
    }
    bVar4 = iVar6 == -1;
    plVar3 = (long *)0x0;
    if (!bVar4) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_0071fd90;
LAB_0071fdb8:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar6 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar6 = *(int *)param_3[3];
    }
    plVar3 = (long *)0x0;
    if (iVar6 != -1) {
      plVar3 = param_3;
    }
    param_3 = plVar3;
    if (bVar4 == (iVar6 == -1)) goto LAB_0071ff34;
  }
  uVar7 = local_108 >> 1 & 0x7f;
  if ((local_108 & 1) != 0) {
    uVar7 = local_100;
  }
  if (local_110 == (void *)((long)pvVar8 + uVar7)) {
    if ((long)uVar7 < 1) {
      uVar9 = uVar7 * 2;
      pvVar8 = local_f8;
      uVar2 = uVar9;
      if ((local_108 & 1) == 0) {
        local_108 = CONCAT71(local_108._1_7_,(char)((int)uVar9 << 1));
        pvVar8 = pvVar11;
        uVar2 = local_100;
      }
      local_100 = uVar2;
      *(undefined1 *)((long)pvVar8 + uVar9) = 0;
    }
    else {
                    /* try { // try from 0071fe1c to 0071fe8b has its CatchHandler @ 00720078 */
      FUN_0071341c(&local_108,uVar7,0);
    }
    uVar2 = 0x16;
    if ((local_108 & 1) != 0) {
      uVar2 = (local_108 & 0xfffffffffffffffe) - 1;
    }
    uVar9 = local_108 >> 1 & 0x7f;
    if ((local_108 & 1) != 0) {
      uVar9 = local_100;
    }
    if (uVar2 < uVar9 || uVar2 - uVar9 == 0) {
      pvVar8 = local_f8;
      uVar9 = uVar2;
      if ((local_108 & 1) == 0) {
        local_108 = CONCAT71(local_108._1_7_,(char)((int)uVar2 << 1));
        pvVar8 = pvVar11;
        uVar9 = local_100;
      }
      local_100 = uVar9;
      *(undefined1 *)((long)pvVar8 + uVar2) = 0;
    }
    else {
      FUN_0071341c(&local_108,uVar2 - uVar9,0);
    }
    pvVar8 = pvVar11;
    if ((local_108 & 1) != 0) {
      pvVar8 = local_f8;
    }
    local_110 = (void *)((long)pvVar8 + uVar7);
  }
  if ((uint *)param_2[3] == (uint *)param_2[4]) {
                    /* try { // try from 0071fee4 to 0071ff2f has its CatchHandler @ 0072007c */
    uVar7 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar7 = (ulong)*(uint *)param_2[3];
  }
  iVar6 = FUN_00721e94(uVar7,uVar10,pvVar8,&local_110,&local_1bc,local_6c[0],local_f0,auStack_1b0,
                       &local_1b8,auStack_d4);
  if (iVar6 != 0) goto LAB_0071ff34;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_0071fd70;
LAB_0071ff34:
  uVar7 = (ulong)(local_f0[0] >> 1);
  if ((local_f0[0] & 1) != 0) {
    uVar7 = local_e8;
  }
  if ((uVar7 != 0) && ((long)local_1b8 - (long)auStack_1b0 < 0xa0)) {
    *local_1b8 = local_1bc;
    local_1b8 = local_1b8 + 1;
  }
                    /* try { // try from 0071ff74 to 0072000b has its CatchHandler @ 00720074 */
  uVar5 = FUN_00737734(pvVar8,local_110,param_5,uVar10);
  *param_6 = uVar5;
  FUN_0072c15c(local_f0,auStack_1b0,local_1b8,param_5);
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    if (param_3 != (long *)0x0) goto LAB_0071ffe8;
LAB_0071ffc0:
    if (!bVar4) goto LAB_00720028;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar6 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar6 = *(int *)param_2[3];
    }
    bVar4 = iVar6 == -1;
    plVar3 = (long *)0x0;
    if (!bVar4) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_0071ffc0;
LAB_0071ffe8:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar6 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar6 = *(int *)param_3[3];
    }
    if (bVar4 != (iVar6 == -1)) goto LAB_00720028;
  }
  *param_5 = *param_5 | 2;
LAB_00720028:
  if ((local_108 & 1) != 0) {
    free(local_f8);
  }
  if ((local_f0[0] & 1) != 0) {
    free(local_e0);
  }
  return param_2;
}


// ===== 007200b8  FUN_007200b8 =====

void FUN_007200b8(void)

{
  FUN_007200c0();
  return;
}


// ===== 007200c0  FUN_007200c0 =====

long * FUN_007200c0(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                   undefined4 *param_6)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  void *pvVar10;
  undefined4 local_1bc;
  undefined4 *local_1b8;
  undefined4 auStack_1b0 [40];
  void *local_110;
  undefined8 local_108;
  ulong local_100;
  void *local_f8;
  byte local_f0 [8];
  ulong local_e8;
  void *local_e0;
  undefined1 auStack_d4 [104];
  undefined4 local_6c [3];
  
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar6 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar6 = 8;
  }
  else if (uVar1 == 8) {
    uVar6 = 0x10;
  }
  else {
    uVar6 = 10;
  }
  FUN_007229e4(local_f0,param_4,auStack_d4,local_6c);
  local_108 = 0;
  local_100 = 0;
  local_f8 = (void *)0x0;
                    /* try { // try from 00720154 to 00720167 has its CatchHandler @ 007204a0 */
  FUN_0071341c(&local_108,0x16,0);
  local_1b8 = auStack_1b0;
  pvVar10 = (void *)((ulong)&local_108 | 1);
  local_1bc = 0;
  pvVar8 = local_f8;
  if ((local_108 & 1) == 0) {
    pvVar8 = (void *)((long)&local_108 + 1);
  }
  local_110 = pvVar8;
LAB_007201a0:
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    if (param_3 != (long *)0x0) goto LAB_007201e8;
LAB_007201c0:
    if (bVar4 != false) goto LAB_00720364;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
                    /* try { // try from 007201d0 to 0072020b has its CatchHandler @ 007204ac */
      iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar5 = *(int *)param_2[3];
    }
    bVar4 = iVar5 == -1;
    plVar3 = (long *)0x0;
    if (!bVar4) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_007201c0;
LAB_007201e8:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar5 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar5 = *(int *)param_3[3];
    }
    plVar3 = (long *)0x0;
    if (iVar5 != -1) {
      plVar3 = param_3;
    }
    param_3 = plVar3;
    if (bVar4 == (iVar5 == -1)) goto LAB_00720364;
  }
  uVar7 = local_108 >> 1 & 0x7f;
  if ((local_108 & 1) != 0) {
    uVar7 = local_100;
  }
  if (local_110 == (void *)((long)pvVar8 + uVar7)) {
    if ((long)uVar7 < 1) {
      uVar9 = uVar7 * 2;
      pvVar8 = local_f8;
      uVar2 = uVar9;
      if ((local_108 & 1) == 0) {
        local_108 = CONCAT71(local_108._1_7_,(char)((int)uVar9 << 1));
        pvVar8 = pvVar10;
        uVar2 = local_100;
      }
      local_100 = uVar2;
      *(undefined1 *)((long)pvVar8 + uVar9) = 0;
    }
    else {
                    /* try { // try from 0072024c to 007202bb has its CatchHandler @ 007204a8 */
      FUN_0071341c(&local_108,uVar7,0);
    }
    uVar2 = 0x16;
    if ((local_108 & 1) != 0) {
      uVar2 = (local_108 & 0xfffffffffffffffe) - 1;
    }
    uVar9 = local_108 >> 1 & 0x7f;
    if ((local_108 & 1) != 0) {
      uVar9 = local_100;
    }
    if (uVar2 < uVar9 || uVar2 - uVar9 == 0) {
      pvVar8 = local_f8;
      uVar9 = uVar2;
      if ((local_108 & 1) == 0) {
        local_108 = CONCAT71(local_108._1_7_,(char)((int)uVar2 << 1));
        pvVar8 = pvVar10;
        uVar9 = local_100;
      }
      local_100 = uVar9;
      *(undefined1 *)((long)pvVar8 + uVar2) = 0;
    }
    else {
      FUN_0071341c(&local_108,uVar2 - uVar9,0);
    }
    pvVar8 = pvVar10;
    if ((local_108 & 1) != 0) {
      pvVar8 = local_f8;
    }
    local_110 = (void *)((long)pvVar8 + uVar7);
  }
  if ((uint *)param_2[3] == (uint *)param_2[4]) {
                    /* try { // try from 00720314 to 0072035f has its CatchHandler @ 007204ac */
    uVar7 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar7 = (ulong)*(uint *)param_2[3];
  }
  iVar5 = FUN_00721e94(uVar7,uVar6,pvVar8,&local_110,&local_1bc,local_6c[0],local_f0,auStack_1b0,
                       &local_1b8,auStack_d4);
  if (iVar5 != 0) goto LAB_00720364;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_007201a0;
LAB_00720364:
  uVar7 = (ulong)(local_f0[0] >> 1);
  if ((local_f0[0] & 1) != 0) {
    uVar7 = local_e8;
  }
  if ((uVar7 != 0) && ((long)local_1b8 - (long)auStack_1b0 < 0xa0)) {
    *local_1b8 = local_1bc;
    local_1b8 = local_1b8 + 1;
  }
                    /* try { // try from 007203a4 to 0072043b has its CatchHandler @ 007204a4 */
  uVar6 = FUN_0073788c(pvVar8,local_110,param_5,uVar6);
  *param_6 = uVar6;
  FUN_0072c15c(local_f0,auStack_1b0,local_1b8,param_5);
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    if (param_3 != (long *)0x0) goto LAB_00720418;
LAB_007203f0:
    if (!bVar4) goto LAB_00720458;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar5 = *(int *)param_2[3];
    }
    bVar4 = iVar5 == -1;
    plVar3 = (long *)0x0;
    if (!bVar4) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_007203f0;
LAB_00720418:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar5 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar5 = *(int *)param_3[3];
    }
    if (bVar4 != (iVar5 == -1)) goto LAB_00720458;
  }
  *param_5 = *param_5 | 2;
LAB_00720458:
  if ((local_108 & 1) != 0) {
    free(local_f8);
  }
  if ((local_f0[0] & 1) != 0) {
    free(local_e0);
  }
  return param_2;
}


// ===== 007204e8  FUN_007204e8 =====

void FUN_007204e8(void)

{
  FUN_007204f0();
  return;
}


// ===== 007204f0  FUN_007204f0 =====

long * FUN_007204f0(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                   undefined8 *param_6)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  void *pvVar8;
  ulong uVar9;
  undefined4 uVar10;
  void *pvVar11;
  undefined4 local_1bc;
  undefined4 *local_1b8;
  undefined4 auStack_1b0 [40];
  void *local_110;
  undefined8 local_108;
  ulong local_100;
  void *local_f8;
  byte local_f0 [8];
  ulong local_e8;
  void *local_e0;
  undefined1 auStack_d4 [104];
  undefined4 local_6c [3];
  
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar10 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar10 = 8;
  }
  else if (uVar1 == 8) {
    uVar10 = 0x10;
  }
  else {
    uVar10 = 10;
  }
  FUN_007229e4(local_f0,param_4,auStack_d4,local_6c);
  local_108 = 0;
  local_100 = 0;
  local_f8 = (void *)0x0;
                    /* try { // try from 00720584 to 00720597 has its CatchHandler @ 007208d0 */
  FUN_0071341c(&local_108,0x16,0);
  local_1b8 = auStack_1b0;
  pvVar11 = (void *)((ulong)&local_108 | 1);
  local_1bc = 0;
  pvVar8 = local_f8;
  if ((local_108 & 1) == 0) {
    pvVar8 = (void *)((long)&local_108 + 1);
  }
  local_110 = pvVar8;
LAB_007205d0:
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    if (param_3 != (long *)0x0) goto LAB_00720618;
LAB_007205f0:
    if (bVar4 != false) goto LAB_00720794;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
                    /* try { // try from 00720600 to 0072063b has its CatchHandler @ 007208dc */
      iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar5 = *(int *)param_2[3];
    }
    bVar4 = iVar5 == -1;
    plVar3 = (long *)0x0;
    if (!bVar4) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_007205f0;
LAB_00720618:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar5 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar5 = *(int *)param_3[3];
    }
    plVar3 = (long *)0x0;
    if (iVar5 != -1) {
      plVar3 = param_3;
    }
    param_3 = plVar3;
    if (bVar4 == (iVar5 == -1)) goto LAB_00720794;
  }
  uVar6 = local_108 >> 1 & 0x7f;
  if ((local_108 & 1) != 0) {
    uVar6 = local_100;
  }
  if (local_110 == (void *)((long)pvVar8 + uVar6)) {
    if ((long)uVar6 < 1) {
      uVar9 = uVar6 * 2;
      pvVar8 = local_f8;
      uVar2 = uVar9;
      if ((local_108 & 1) == 0) {
        local_108 = CONCAT71(local_108._1_7_,(char)((int)uVar9 << 1));
        pvVar8 = pvVar11;
        uVar2 = local_100;
      }
      local_100 = uVar2;
      *(undefined1 *)((long)pvVar8 + uVar9) = 0;
    }
    else {
                    /* try { // try from 0072067c to 007206eb has its CatchHandler @ 007208d8 */
      FUN_0071341c(&local_108,uVar6,0);
    }
    uVar2 = 0x16;
    if ((local_108 & 1) != 0) {
      uVar2 = (local_108 & 0xfffffffffffffffe) - 1;
    }
    uVar9 = local_108 >> 1 & 0x7f;
    if ((local_108 & 1) != 0) {
      uVar9 = local_100;
    }
    if (uVar2 < uVar9 || uVar2 - uVar9 == 0) {
      pvVar8 = local_f8;
      uVar9 = uVar2;
      if ((local_108 & 1) == 0) {
        local_108 = CONCAT71(local_108._1_7_,(char)((int)uVar2 << 1));
        pvVar8 = pvVar11;
        uVar9 = local_100;
      }
      local_100 = uVar9;
      *(undefined1 *)((long)pvVar8 + uVar2) = 0;
    }
    else {
      FUN_0071341c(&local_108,uVar2 - uVar9,0);
    }
    pvVar8 = pvVar11;
    if ((local_108 & 1) != 0) {
      pvVar8 = local_f8;
    }
    local_110 = (void *)((long)pvVar8 + uVar6);
  }
  if ((uint *)param_2[3] == (uint *)param_2[4]) {
                    /* try { // try from 00720744 to 0072078f has its CatchHandler @ 007208dc */
    uVar6 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar6 = (ulong)*(uint *)param_2[3];
  }
  iVar5 = FUN_00721e94(uVar6,uVar10,pvVar8,&local_110,&local_1bc,local_6c[0],local_f0,auStack_1b0,
                       &local_1b8,auStack_d4);
  if (iVar5 != 0) goto LAB_00720794;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_007205d0;
LAB_00720794:
  uVar6 = (ulong)(local_f0[0] >> 1);
  if ((local_f0[0] & 1) != 0) {
    uVar6 = local_e8;
  }
  if ((uVar6 != 0) && ((long)local_1b8 - (long)auStack_1b0 < 0xa0)) {
    *local_1b8 = local_1bc;
    local_1b8 = local_1b8 + 1;
  }
                    /* try { // try from 007207d4 to 0072086b has its CatchHandler @ 007208d4 */
  uVar7 = FUN_007379e0(pvVar8,local_110,param_5,uVar10);
  *param_6 = uVar7;
  FUN_0072c15c(local_f0,auStack_1b0,local_1b8,param_5);
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    if (param_3 != (long *)0x0) goto LAB_00720848;
LAB_00720820:
    if (!bVar4) goto LAB_00720888;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar5 = *(int *)param_2[3];
    }
    bVar4 = iVar5 == -1;
    plVar3 = (long *)0x0;
    if (!bVar4) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_00720820;
LAB_00720848:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar5 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar5 = *(int *)param_3[3];
    }
    if (bVar4 != (iVar5 == -1)) goto LAB_00720888;
  }
  *param_5 = *param_5 | 2;
LAB_00720888:
  if ((local_108 & 1) != 0) {
    free(local_f8);
  }
  if ((local_f0[0] & 1) != 0) {
    free(local_e0);
  }
  return param_2;
}


// ===== 00720918  FUN_00720918 =====

void FUN_00720918(void)

{
  FUN_00720920();
  return;
}


// ===== 00720920  FUN_00720920 =====

long * FUN_00720920(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                   undefined8 *param_6)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  void *pvVar8;
  ulong uVar9;
  undefined4 uVar10;
  void *pvVar11;
  undefined4 local_1bc;
  undefined4 *local_1b8;
  undefined4 auStack_1b0 [40];
  void *local_110;
  undefined8 local_108;
  ulong local_100;
  void *local_f8;
  byte local_f0 [8];
  ulong local_e8;
  void *local_e0;
  undefined1 auStack_d4 [104];
  undefined4 local_6c [3];
  
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar10 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar10 = 8;
  }
  else if (uVar1 == 8) {
    uVar10 = 0x10;
  }
  else {
    uVar10 = 10;
  }
  FUN_007229e4(local_f0,param_4,auStack_d4,local_6c);
  local_108 = 0;
  local_100 = 0;
  local_f8 = (void *)0x0;
                    /* try { // try from 007209b4 to 007209c7 has its CatchHandler @ 00720d00 */
  FUN_0071341c(&local_108,0x16,0);
  local_1b8 = auStack_1b0;
  pvVar11 = (void *)((ulong)&local_108 | 1);
  local_1bc = 0;
  pvVar8 = local_f8;
  if ((local_108 & 1) == 0) {
    pvVar8 = (void *)((long)&local_108 + 1);
  }
  local_110 = pvVar8;
LAB_00720a00:
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    if (param_3 != (long *)0x0) goto LAB_00720a48;
LAB_00720a20:
    if (bVar4 != false) goto LAB_00720bc4;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
                    /* try { // try from 00720a30 to 00720a6b has its CatchHandler @ 00720d0c */
      iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar5 = *(int *)param_2[3];
    }
    bVar4 = iVar5 == -1;
    plVar3 = (long *)0x0;
    if (!bVar4) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_00720a20;
LAB_00720a48:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar5 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar5 = *(int *)param_3[3];
    }
    plVar3 = (long *)0x0;
    if (iVar5 != -1) {
      plVar3 = param_3;
    }
    param_3 = plVar3;
    if (bVar4 == (iVar5 == -1)) goto LAB_00720bc4;
  }
  uVar6 = local_108 >> 1 & 0x7f;
  if ((local_108 & 1) != 0) {
    uVar6 = local_100;
  }
  if (local_110 == (void *)((long)pvVar8 + uVar6)) {
    if ((long)uVar6 < 1) {
      uVar9 = uVar6 * 2;
      pvVar8 = local_f8;
      uVar2 = uVar9;
      if ((local_108 & 1) == 0) {
        local_108 = CONCAT71(local_108._1_7_,(char)((int)uVar9 << 1));
        pvVar8 = pvVar11;
        uVar2 = local_100;
      }
      local_100 = uVar2;
      *(undefined1 *)((long)pvVar8 + uVar9) = 0;
    }
    else {
                    /* try { // try from 00720aac to 00720b1b has its CatchHandler @ 00720d08 */
      FUN_0071341c(&local_108,uVar6,0);
    }
    uVar2 = 0x16;
    if ((local_108 & 1) != 0) {
      uVar2 = (local_108 & 0xfffffffffffffffe) - 1;
    }
    uVar9 = local_108 >> 1 & 0x7f;
    if ((local_108 & 1) != 0) {
      uVar9 = local_100;
    }
    if (uVar2 < uVar9 || uVar2 - uVar9 == 0) {
      pvVar8 = local_f8;
      uVar9 = uVar2;
      if ((local_108 & 1) == 0) {
        local_108 = CONCAT71(local_108._1_7_,(char)((int)uVar2 << 1));
        pvVar8 = pvVar11;
        uVar9 = local_100;
      }
      local_100 = uVar9;
      *(undefined1 *)((long)pvVar8 + uVar2) = 0;
    }
    else {
      FUN_0071341c(&local_108,uVar2 - uVar9,0);
    }
    pvVar8 = pvVar11;
    if ((local_108 & 1) != 0) {
      pvVar8 = local_f8;
    }
    local_110 = (void *)((long)pvVar8 + uVar6);
  }
  if ((uint *)param_2[3] == (uint *)param_2[4]) {
                    /* try { // try from 00720b74 to 00720bbf has its CatchHandler @ 00720d0c */
    uVar6 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar6 = (ulong)*(uint *)param_2[3];
  }
  iVar5 = FUN_00721e94(uVar6,uVar10,pvVar8,&local_110,&local_1bc,local_6c[0],local_f0,auStack_1b0,
                       &local_1b8,auStack_d4);
  if (iVar5 != 0) goto LAB_00720bc4;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_00720a00;
LAB_00720bc4:
  uVar6 = (ulong)(local_f0[0] >> 1);
  if ((local_f0[0] & 1) != 0) {
    uVar6 = local_e8;
  }
  if ((uVar6 != 0) && ((long)local_1b8 - (long)auStack_1b0 < 0xa0)) {
    *local_1b8 = local_1bc;
    local_1b8 = local_1b8 + 1;
  }
                    /* try { // try from 00720c04 to 00720c9b has its CatchHandler @ 00720d04 */
  uVar7 = FUN_00737b28(pvVar8,local_110,param_5,uVar10);
  *param_6 = uVar7;
  FUN_0072c15c(local_f0,auStack_1b0,local_1b8,param_5);
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    if (param_3 != (long *)0x0) goto LAB_00720c78;
LAB_00720c50:
    if (!bVar4) goto LAB_00720cb8;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar5 = *(int *)param_2[3];
    }
    bVar4 = iVar5 == -1;
    plVar3 = (long *)0x0;
    if (!bVar4) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_00720c50;
LAB_00720c78:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar5 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar5 = *(int *)param_3[3];
    }
    if (bVar4 != (iVar5 == -1)) goto LAB_00720cb8;
  }
  *param_5 = *param_5 | 2;
LAB_00720cb8:
  if ((local_108 & 1) != 0) {
    free(local_f8);
  }
  if ((local_f0[0] & 1) != 0) {
    free(local_e0);
  }
  return param_2;
}


// ===== 00720d48  FUN_00720d48 =====

void FUN_00720d48(void)

{
  FUN_00720d50();
  return;
}


// ===== 00720d50  FUN_00720d50 =====

long * FUN_00720d50(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,uint *param_5,
                   undefined4 *param_6)

{
  ulong uVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  void *pvVar8;
  undefined4 uVar9;
  undefined1 local_1dc [4];
  char local_1d8 [4];
  undefined4 local_1d4;
  undefined4 *local_1d0;
  undefined4 auStack_1c8 [40];
  void *local_128;
  undefined8 local_120;
  ulong local_118;
  void *local_110;
  byte local_108 [8];
  ulong local_100;
  void *local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined1 auStack_e8 [136];
  
  FUN_007225e4(local_108,param_4,auStack_e8,&uStack_ec,&local_f0);
  local_120 = 0;
  local_118 = 0;
  local_110 = (void *)0x0;
                    /* try { // try from 00720da8 to 00720dbb has its CatchHandler @ 0072110c */
  FUN_0071341c(&local_120,0x16,0);
  pvVar8 = (void *)((ulong)&local_120 | 1);
  local_1d4 = 0;
  pvVar6 = local_110;
  if ((local_120 & 1) == 0) {
    pvVar6 = (void *)((long)&local_120 + 1);
  }
  local_1d8[0] = '\x01';
  local_1dc[0] = 0x45;
  local_1d0 = auStack_1c8;
  local_128 = pvVar6;
LAB_00720e04:
  if (param_2 == (long *)0x0) {
    bVar3 = true;
    if (param_3 != (long *)0x0) goto LAB_00720e4c;
LAB_00720e24:
    if (bVar3 != false) goto LAB_00720fcc;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
                    /* try { // try from 00720e34 to 00720e6f has its CatchHandler @ 00721118 */
      iVar4 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar4 = *(int *)param_2[3];
    }
    bVar3 = iVar4 == -1;
    plVar2 = (long *)0x0;
    if (!bVar3) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    if (param_3 == (long *)0x0) goto LAB_00720e24;
LAB_00720e4c:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar4 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar4 = *(int *)param_3[3];
    }
    plVar2 = (long *)0x0;
    if (iVar4 != -1) {
      plVar2 = param_3;
    }
    param_3 = plVar2;
    if (bVar3 == (iVar4 == -1)) goto LAB_00720fcc;
  }
  uVar5 = local_120 >> 1 & 0x7f;
  if ((local_120 & 1) != 0) {
    uVar5 = local_118;
  }
  if (local_128 == (void *)((long)pvVar6 + uVar5)) {
    if ((long)uVar5 < 1) {
      uVar7 = uVar5 * 2;
      pvVar6 = local_110;
      uVar1 = uVar7;
      if ((local_120 & 1) == 0) {
        local_120 = CONCAT71(local_120._1_7_,(char)((int)uVar7 << 1));
        pvVar6 = pvVar8;
        uVar1 = local_118;
      }
      local_118 = uVar1;
      *(undefined1 *)((long)pvVar6 + uVar7) = 0;
    }
    else {
                    /* try { // try from 00720eb0 to 00720f23 has its CatchHandler @ 00721114 */
      FUN_0071341c(&local_120,uVar5,0);
    }
    uVar1 = 0x16;
    if ((local_120 & 1) != 0) {
      uVar1 = (local_120 & 0xfffffffffffffffe) - 1;
    }
    uVar7 = local_120 >> 1 & 0x7f;
    if ((local_120 & 1) != 0) {
      uVar7 = local_118;
    }
    if (uVar1 < uVar7 || uVar1 - uVar7 == 0) {
      pvVar6 = local_110;
      uVar7 = uVar1;
      if ((local_120 & 1) == 0) {
        local_120 = CONCAT71(local_120._1_7_,(char)((int)uVar1 << 1));
        pvVar6 = pvVar8;
        uVar7 = local_118;
      }
      local_118 = uVar7;
      *(undefined1 *)((long)pvVar6 + uVar1) = 0;
    }
    else {
      FUN_0071341c(&local_120,uVar1 - uVar7,0);
    }
    pvVar6 = pvVar8;
    if ((local_120 & 1) != 0) {
      pvVar6 = local_110;
    }
    local_128 = (void *)((long)pvVar6 + uVar5);
  }
  if ((uint *)param_2[3] == (uint *)param_2[4]) {
                    /* try { // try from 00720f7c to 00720fc7 has its CatchHandler @ 00721118 */
    uVar5 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar5 = (ulong)*(uint *)param_2[3];
  }
  iVar4 = FUN_0072277c(uVar5,local_1d8,local_1dc,pvVar6,&local_128,uStack_ec,local_f0,local_108,
                       auStack_1c8,&local_1d0,&local_1d4,auStack_e8);
  if (iVar4 != 0) goto LAB_00720fcc;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_00720e04;
LAB_00720fcc:
  uVar5 = (ulong)(local_108[0] >> 1);
  if ((local_108[0] & 1) != 0) {
    uVar5 = local_100;
  }
  if (((uVar5 != 0) && (local_1d8[0] != '\0')) && ((long)local_1d0 - (long)auStack_1c8 < 0xa0)) {
    *local_1d0 = local_1d4;
    local_1d0 = local_1d0 + 1;
  }
                    /* try { // try from 00721014 to 007210a7 has its CatchHandler @ 00721110 */
  uVar9 = FUN_00737c70(pvVar6,local_128,param_5);
  *param_6 = uVar9;
  FUN_0072c15c(local_108,auStack_1c8,local_1d0,param_5);
  if (param_2 == (long *)0x0) {
    bVar3 = true;
    if (param_3 != (long *)0x0) goto LAB_00721084;
LAB_0072105c:
    if (!bVar3) goto LAB_007210c4;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar4 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar4 = *(int *)param_2[3];
    }
    bVar3 = iVar4 == -1;
    plVar2 = (long *)0x0;
    if (!bVar3) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    if (param_3 == (long *)0x0) goto LAB_0072105c;
LAB_00721084:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar4 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar4 = *(int *)param_3[3];
    }
    if (bVar3 != (iVar4 == -1)) goto LAB_007210c4;
  }
  *param_5 = *param_5 | 2;
LAB_007210c4:
  if ((local_120 & 1) != 0) {
    free(local_110);
  }
  if ((local_108[0] & 1) != 0) {
    free(local_f8);
  }
  return param_2;
}


// ===== 00721154  FUN_00721154 =====

void FUN_00721154(void)

{
  FUN_0072115c();
  return;
}


// ===== 0072115c  FUN_0072115c =====

long * FUN_0072115c(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,uint *param_5,
                   undefined8 *param_6)

{
  ulong uVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined1 local_1dc [4];
  char local_1d8 [4];
  undefined4 local_1d4;
  undefined4 *local_1d0;
  undefined4 auStack_1c8 [40];
  void *local_128;
  undefined8 local_120;
  ulong local_118;
  void *local_110;
  byte local_108 [8];
  ulong local_100;
  void *local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined1 auStack_e8 [136];
  
  FUN_007225e4(local_108,param_4,auStack_e8,&uStack_ec,&local_f0);
  local_120 = 0;
  local_118 = 0;
  local_110 = (void *)0x0;
                    /* try { // try from 007211b4 to 007211c7 has its CatchHandler @ 00721518 */
  FUN_0071341c(&local_120,0x16,0);
  pvVar8 = (void *)((ulong)&local_120 | 1);
  local_1d4 = 0;
  pvVar6 = local_110;
  if ((local_120 & 1) == 0) {
    pvVar6 = (void *)((long)&local_120 + 1);
  }
  local_1d8[0] = '\x01';
  local_1dc[0] = 0x45;
  local_1d0 = auStack_1c8;
  local_128 = pvVar6;
LAB_00721210:
  if (param_2 == (long *)0x0) {
    bVar3 = true;
    if (param_3 != (long *)0x0) goto LAB_00721258;
LAB_00721230:
    if (bVar3 != false) goto LAB_007213d8;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
                    /* try { // try from 00721240 to 0072127b has its CatchHandler @ 00721524 */
      iVar4 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar4 = *(int *)param_2[3];
    }
    bVar3 = iVar4 == -1;
    plVar2 = (long *)0x0;
    if (!bVar3) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    if (param_3 == (long *)0x0) goto LAB_00721230;
LAB_00721258:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar4 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar4 = *(int *)param_3[3];
    }
    plVar2 = (long *)0x0;
    if (iVar4 != -1) {
      plVar2 = param_3;
    }
    param_3 = plVar2;
    if (bVar3 == (iVar4 == -1)) goto LAB_007213d8;
  }
  uVar5 = local_120 >> 1 & 0x7f;
  if ((local_120 & 1) != 0) {
    uVar5 = local_118;
  }
  if (local_128 == (void *)((long)pvVar6 + uVar5)) {
    if ((long)uVar5 < 1) {
      uVar7 = uVar5 * 2;
      pvVar6 = local_110;
      uVar1 = uVar7;
      if ((local_120 & 1) == 0) {
        local_120 = CONCAT71(local_120._1_7_,(char)((int)uVar7 << 1));
        pvVar6 = pvVar8;
        uVar1 = local_118;
      }
      local_118 = uVar1;
      *(undefined1 *)((long)pvVar6 + uVar7) = 0;
    }
    else {
                    /* try { // try from 007212bc to 0072132f has its CatchHandler @ 00721520 */
      FUN_0071341c(&local_120,uVar5,0);
    }
    uVar1 = 0x16;
    if ((local_120 & 1) != 0) {
      uVar1 = (local_120 & 0xfffffffffffffffe) - 1;
    }
    uVar7 = local_120 >> 1 & 0x7f;
    if ((local_120 & 1) != 0) {
      uVar7 = local_118;
    }
    if (uVar1 < uVar7 || uVar1 - uVar7 == 0) {
      pvVar6 = local_110;
      uVar7 = uVar1;
      if ((local_120 & 1) == 0) {
        local_120 = CONCAT71(local_120._1_7_,(char)((int)uVar1 << 1));
        pvVar6 = pvVar8;
        uVar7 = local_118;
      }
      local_118 = uVar7;
      *(undefined1 *)((long)pvVar6 + uVar1) = 0;
    }
    else {
      FUN_0071341c(&local_120,uVar1 - uVar7,0);
    }
    pvVar6 = pvVar8;
    if ((local_120 & 1) != 0) {
      pvVar6 = local_110;
    }
    local_128 = (void *)((long)pvVar6 + uVar5);
  }
  if ((uint *)param_2[3] == (uint *)param_2[4]) {
                    /* try { // try from 00721388 to 007213d3 has its CatchHandler @ 00721524 */
    uVar5 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar5 = (ulong)*(uint *)param_2[3];
  }
  iVar4 = FUN_0072277c(uVar5,local_1d8,local_1dc,pvVar6,&local_128,uStack_ec,local_f0,local_108,
                       auStack_1c8,&local_1d0,&local_1d4,auStack_e8);
  if (iVar4 != 0) goto LAB_007213d8;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_00721210;
LAB_007213d8:
  uVar5 = (ulong)(local_108[0] >> 1);
  if ((local_108[0] & 1) != 0) {
    uVar5 = local_100;
  }
  if (((uVar5 != 0) && (local_1d8[0] != '\0')) && ((long)local_1d0 - (long)auStack_1c8 < 0xa0)) {
    *local_1d0 = local_1d4;
    local_1d0 = local_1d0 + 1;
  }
                    /* try { // try from 00721420 to 007214b3 has its CatchHandler @ 0072151c */
  uVar9 = FUN_00737d88(pvVar6,local_128,param_5);
  *param_6 = uVar9;
  FUN_0072c15c(local_108,auStack_1c8,local_1d0,param_5);
  if (param_2 == (long *)0x0) {
    bVar3 = true;
    if (param_3 != (long *)0x0) goto LAB_00721490;
LAB_00721468:
    if (!bVar3) goto LAB_007214d0;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar4 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar4 = *(int *)param_2[3];
    }
    bVar3 = iVar4 == -1;
    plVar2 = (long *)0x0;
    if (!bVar3) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    if (param_3 == (long *)0x0) goto LAB_00721468;
LAB_00721490:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar4 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar4 = *(int *)param_3[3];
    }
    if (bVar3 != (iVar4 == -1)) goto LAB_007214d0;
  }
  *param_5 = *param_5 | 2;
LAB_007214d0:
  if ((local_120 & 1) != 0) {
    free(local_110);
  }
  if ((local_108[0] & 1) != 0) {
    free(local_f8);
  }
  return param_2;
}


// ===== 00721560  FUN_00721560 =====

void FUN_00721560(void)

{
  FUN_00721568();
  return;
}


// ===== 00721568  FUN_00721568 =====

long * FUN_00721568(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,uint *param_5,
                   undefined1 (*param_6) [16])

{
  ulong uVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  void *pvVar8;
  undefined1 auVar9 [16];
  undefined1 local_1dc [4];
  char local_1d8 [4];
  undefined4 local_1d4;
  undefined4 *local_1d0;
  undefined4 auStack_1c8 [40];
  void *local_128;
  undefined8 local_120;
  ulong local_118;
  void *local_110;
  byte local_108 [8];
  ulong local_100;
  void *local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined1 auStack_e8 [136];
  
  FUN_007225e4(local_108,param_4,auStack_e8,&uStack_ec,&local_f0);
  local_120 = 0;
  local_118 = 0;
  local_110 = (void *)0x0;
                    /* try { // try from 007215c0 to 007215d3 has its CatchHandler @ 00721924 */
  FUN_0071341c(&local_120,0x16,0);
  pvVar8 = (void *)((ulong)&local_120 | 1);
  local_1d4 = 0;
  pvVar6 = local_110;
  if ((local_120 & 1) == 0) {
    pvVar6 = (void *)((long)&local_120 + 1);
  }
  local_1d8[0] = '\x01';
  local_1dc[0] = 0x45;
  local_1d0 = auStack_1c8;
  local_128 = pvVar6;
LAB_0072161c:
  if (param_2 == (long *)0x0) {
    bVar3 = true;
    if (param_3 != (long *)0x0) goto LAB_00721664;
LAB_0072163c:
    if (bVar3 != false) goto LAB_007217e4;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
                    /* try { // try from 0072164c to 00721687 has its CatchHandler @ 00721930 */
      iVar4 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar4 = *(int *)param_2[3];
    }
    bVar3 = iVar4 == -1;
    plVar2 = (long *)0x0;
    if (!bVar3) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    if (param_3 == (long *)0x0) goto LAB_0072163c;
LAB_00721664:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar4 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar4 = *(int *)param_3[3];
    }
    plVar2 = (long *)0x0;
    if (iVar4 != -1) {
      plVar2 = param_3;
    }
    param_3 = plVar2;
    if (bVar3 == (iVar4 == -1)) goto LAB_007217e4;
  }
  uVar5 = local_120 >> 1 & 0x7f;
  if ((local_120 & 1) != 0) {
    uVar5 = local_118;
  }
  if (local_128 == (void *)((long)pvVar6 + uVar5)) {
    if ((long)uVar5 < 1) {
      uVar7 = uVar5 * 2;
      pvVar6 = local_110;
      uVar1 = uVar7;
      if ((local_120 & 1) == 0) {
        local_120 = CONCAT71(local_120._1_7_,(char)((int)uVar7 << 1));
        pvVar6 = pvVar8;
        uVar1 = local_118;
      }
      local_118 = uVar1;
      *(undefined1 *)((long)pvVar6 + uVar7) = 0;
    }
    else {
                    /* try { // try from 007216c8 to 0072173b has its CatchHandler @ 0072192c */
      FUN_0071341c(&local_120,uVar5,0);
    }
    uVar1 = 0x16;
    if ((local_120 & 1) != 0) {
      uVar1 = (local_120 & 0xfffffffffffffffe) - 1;
    }
    uVar7 = local_120 >> 1 & 0x7f;
    if ((local_120 & 1) != 0) {
      uVar7 = local_118;
    }
    if (uVar1 < uVar7 || uVar1 - uVar7 == 0) {
      pvVar6 = local_110;
      uVar7 = uVar1;
      if ((local_120 & 1) == 0) {
        local_120 = CONCAT71(local_120._1_7_,(char)((int)uVar1 << 1));
        pvVar6 = pvVar8;
        uVar7 = local_118;
      }
      local_118 = uVar7;
      *(undefined1 *)((long)pvVar6 + uVar1) = 0;
    }
    else {
      FUN_0071341c(&local_120,uVar1 - uVar7,0);
    }
    pvVar6 = pvVar8;
    if ((local_120 & 1) != 0) {
      pvVar6 = local_110;
    }
    local_128 = (void *)((long)pvVar6 + uVar5);
  }
  if ((uint *)param_2[3] == (uint *)param_2[4]) {
                    /* try { // try from 00721794 to 007217df has its CatchHandler @ 00721930 */
    uVar5 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar5 = (ulong)*(uint *)param_2[3];
  }
  iVar4 = FUN_0072277c(uVar5,local_1d8,local_1dc,pvVar6,&local_128,uStack_ec,local_f0,local_108,
                       auStack_1c8,&local_1d0,&local_1d4,auStack_e8);
  if (iVar4 != 0) goto LAB_007217e4;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_0072161c;
LAB_007217e4:
  uVar5 = (ulong)(local_108[0] >> 1);
  if ((local_108[0] & 1) != 0) {
    uVar5 = local_100;
  }
  if (((uVar5 != 0) && (local_1d8[0] != '\0')) && ((long)local_1d0 - (long)auStack_1c8 < 0xa0)) {
    *local_1d0 = local_1d4;
    local_1d0 = local_1d0 + 1;
  }
                    /* try { // try from 0072182c to 007218bf has its CatchHandler @ 00721928 */
  auVar9 = FUN_00737ea0(pvVar6,local_128,param_5);
  *param_6 = auVar9;
  FUN_0072c15c(local_108,auStack_1c8,local_1d0,param_5);
  if (param_2 == (long *)0x0) {
    bVar3 = true;
    if (param_3 != (long *)0x0) goto LAB_0072189c;
LAB_00721874:
    if (!bVar3) goto LAB_007218dc;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar4 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar4 = *(int *)param_2[3];
    }
    bVar3 = iVar4 == -1;
    plVar2 = (long *)0x0;
    if (!bVar3) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    if (param_3 == (long *)0x0) goto LAB_00721874;
LAB_0072189c:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar4 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar4 = *(int *)param_3[3];
    }
    if (bVar3 != (iVar4 == -1)) goto LAB_007218dc;
  }
  *param_5 = *param_5 | 2;
LAB_007218dc:
  if ((local_120 & 1) != 0) {
    free(local_110);
  }
  if ((local_108[0] & 1) != 0) {
    free(local_f8);
  }
  return param_2;
}


// ===== 0072196c  FUN_0072196c =====

long * FUN_0072196c(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,uint *param_5,
                   undefined8 param_6)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  wchar_t __c;
  int iVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined1 uVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined8 local_100;
  ulong local_f8;
  undefined1 *local_f0;
  long local_e8;
  wchar_t awStack_e0 [24];
  wchar_t local_80;
  wchar_t local_7c;
  undefined *local_78;
  undefined8 *local_70 [2];
  
                    /* try { // try from 007219a4 to 007219ab has its CatchHandler @ 00721e58 */
  FUN_00715df0(&local_e8,param_4);
  puVar3 = PTR_DAT_007a2640;
  local_78 = PTR_DAT_007a2640;
  if (*(long *)PTR_DAT_007a2640 != -1) {
    local_100 = &local_78;
    local_70[0] = &local_100;
                    /* try { // try from 007219d8 to 00721a2f has its CatchHandler @ 00721e60 */
    FUN_00710f84(PTR_DAT_007a2640,local_70,FUN_007374a0);
  }
  puVar4 = PTR_s_0123456789abcdefABCDEFxX__pPiInN_007a38e0;
  if (((ulong)(*(long *)(local_e8 + 0x18) - *(long *)(local_e8 + 0x10) >> 3) <=
       (long)*(int *)(puVar3 + 8) - 1U) ||
     (plVar7 = *(long **)(*(long *)(local_e8 + 0x10) + ((long)*(int *)(puVar3 + 8) - 1U) * 8),
     plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00721e00 to 00721e03 has its CatchHandler @ 00721e60 */
    FUN_007191ac();
  }
  (**(code **)(*plVar7 + 0x60))
            (plVar7,PTR_s_0123456789abcdefABCDEFxX__pPiInN_007a38e0,
             PTR_s_0123456789abcdefABCDEFxX__pPiInN_007a38e0 + 0x1a,awStack_e0);
  FUN_00732094(&local_e8);
  local_100 = (undefined **)0x0;
  local_f8 = 0;
  local_f0 = (undefined1 *)0x0;
                    /* try { // try from 00721a44 to 00721a57 has its CatchHandler @ 00721e54 */
  FUN_0071341c(&local_100,0x16,0);
  puVar15 = (undefined1 *)((ulong)&local_100 | 1);
  puVar14 = local_f0;
  puVar10 = local_f0;
  if (((ulong)local_100 & 1) == 0) {
    puVar14 = (undefined1 *)((long)&local_100 + 1);
    puVar10 = puVar14;
  }
LAB_00721a88:
  if (param_2 == (long *)0x0) {
    bVar5 = true;
    if (param_3 != (long *)0x0) goto LAB_00721ad0;
LAB_00721aa8:
    if (bVar5 != false) goto LAB_00721ca0;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
                    /* try { // try from 00721ab8 to 00721af3 has its CatchHandler @ 00721e78 */
      iVar6 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar6 = *(int *)param_2[3];
    }
    bVar5 = iVar6 == -1;
    plVar7 = (long *)0x0;
    if (!bVar5) {
      plVar7 = param_2;
    }
    param_2 = plVar7;
    if (param_3 == (long *)0x0) goto LAB_00721aa8;
LAB_00721ad0:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar6 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar6 = *(int *)param_3[3];
    }
    plVar7 = (long *)0x0;
    if (iVar6 != -1) {
      plVar7 = param_3;
    }
    param_3 = plVar7;
    if (bVar5 == (iVar6 == -1)) goto LAB_00721ca0;
  }
  uVar2 = (ulong)local_100 >> 1 & 0x7f;
  if (((ulong)local_100 & 1) != 0) {
    uVar2 = local_f8;
  }
  if (puVar10 == puVar14 + uVar2) {
    if ((long)uVar2 < 1) {
      uVar13 = uVar2 * 2;
      puVar10 = local_f0;
      uVar12 = uVar13;
      if (((ulong)local_100 & 1) == 0) {
        local_100 = (undefined **)CONCAT71(local_100._1_7_,(char)((int)uVar13 << 1));
        puVar10 = puVar15;
        uVar12 = local_f8;
      }
      local_f8 = uVar12;
      puVar10[uVar13] = 0;
    }
    else {
                    /* try { // try from 00721b30 to 00721b9f has its CatchHandler @ 00721e74 */
      FUN_0071341c(&local_100,uVar2,0);
    }
    uVar12 = 0x16;
    if (((ulong)local_100 & 1) != 0) {
      uVar12 = ((ulong)local_100 & 0xfffffffffffffffe) - 1;
    }
    uVar13 = (ulong)local_100 >> 1 & 0x7f;
    if (((ulong)local_100 & 1) != 0) {
      uVar13 = local_f8;
    }
    if (uVar12 < uVar13 || uVar12 - uVar13 == 0) {
      puVar10 = local_f0;
      uVar13 = uVar12;
      if (((ulong)local_100 & 1) == 0) {
        local_100 = (undefined **)CONCAT71(local_100._1_7_,(char)((int)uVar12 << 1));
        puVar10 = puVar15;
        uVar13 = local_f8;
      }
      local_f8 = uVar13;
      puVar10[uVar12] = 0;
    }
    else {
      FUN_0071341c(&local_100,uVar12 - uVar13,0);
    }
    puVar14 = puVar15;
    if (((ulong)local_100 & 1) != 0) {
      puVar14 = local_f0;
    }
    puVar10 = puVar14 + uVar2;
  }
  if ((wchar_t *)param_2[3] == (wchar_t *)param_2[4]) {
                    /* try { // try from 00721bf4 to 00721c9b has its CatchHandler @ 00721e78 */
    __c = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    __c = *(wchar_t *)param_2[3];
  }
  if (puVar10 == puVar14) {
    if (local_80 == __c) {
      uVar9 = 0x2b;
    }
    else {
      if (local_7c != __c) goto LAB_00721c08;
      uVar9 = 0x2d;
    }
  }
  else {
LAB_00721c08:
    ppuVar8 = (undefined **)wmemchr(awStack_e0,__c,0x1a);
    ppuVar1 = &local_78;
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar1 = ppuVar8;
    }
    lVar11 = (long)ppuVar1 - (long)awStack_e0 >> 2;
    if ((0x17 < lVar11) ||
       ((0x15 < lVar11 &&
        (((puVar10 == puVar14 || (2 < (long)puVar10 - (long)puVar14)) || (puVar10[-1] != '0'))))))
    goto LAB_00721ca0;
    uVar9 = puVar4[lVar11];
  }
  *puVar10 = uVar9;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
    puVar10 = puVar10 + 1;
  }
  else {
    param_2[3] = param_2[3] + 4;
    puVar10 = puVar10 + 1;
  }
  goto LAB_00721a88;
LAB_00721ca0:
  uVar12 = (long)puVar10 - (long)puVar14;
  uVar2 = (ulong)local_100 >> 1 & 0x7f;
  if (((ulong)local_100 & 1) != 0) {
    uVar2 = local_f8;
  }
  if (uVar12 < uVar2 || uVar12 - uVar2 == 0) {
    puVar10 = local_f0;
    uVar2 = uVar12;
    if (((ulong)local_100 & 1) == 0) {
      local_100 = (undefined **)CONCAT71(local_100._1_7_,(char)((int)uVar12 << 1));
      puVar10 = puVar15;
      uVar2 = local_f8;
    }
    local_f8 = uVar2;
    puVar10[uVar12] = 0;
  }
  else {
                    /* try { // try from 00721cc4 to 00721dab has its CatchHandler @ 00721e5c */
    FUN_0071341c(&local_100,uVar12 - uVar2,0);
  }
  if (((ulong)local_100 & 1) != 0) {
    puVar15 = local_f0;
  }
  if (((DAT_007b0958 & 1) == 0) && (iVar6 = FUN_00739c1c(&DAT_007b0958), iVar6 != 0)) {
                    /* try { // try from 00721e14 to 00721e27 has its CatchHandler @ 00721e40 */
    DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    FUN_00739d60(&DAT_007b0958);
  }
  iVar6 = FUN_0071ec74(puVar15,DAT_007b0950,&DAT_001c7073,param_6);
  if (iVar6 != 1) {
    *param_5 = 4;
  }
  if (param_2 == (long *)0x0) {
    bVar5 = true;
    if (param_3 != (long *)0x0) goto LAB_00721d88;
LAB_00721d60:
    if (!bVar5) goto LAB_00721dc8;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar6 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar6 = *(int *)param_2[3];
    }
    bVar5 = iVar6 == -1;
    plVar7 = (long *)0x0;
    if (!bVar5) {
      plVar7 = param_2;
    }
    param_2 = plVar7;
    if (param_3 == (long *)0x0) goto LAB_00721d60;
LAB_00721d88:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar6 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar6 = *(int *)param_3[3];
    }
    if (bVar5 != (iVar6 == -1)) goto LAB_00721dc8;
  }
  *param_5 = *param_5 | 2;
LAB_00721dc8:
  if (((ulong)local_100 & 1) != 0) {
    free(local_f0);
  }
  return param_2;
}


// ===== 00721e94  FUN_00721e94 =====

undefined8
FUN_00721e94(wchar_t param_1,uint param_2,undefined1 *param_3,long *param_4,int *param_5,
            wchar_t param_6,byte *param_7,long param_8,undefined8 *param_9,wchar_t *param_10)

{
  ulong uVar1;
  wchar_t *pwVar2;
  undefined *puVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  int *piVar8;
  undefined1 *puVar9;
  
  if ((undefined1 *)*param_4 == param_3) {
    if (param_10[0x18] == param_1) {
      uVar6 = 0x2b;
LAB_00721f70:
      *param_4 = (long)(param_3 + 1);
      *param_3 = uVar6;
      *param_5 = 0;
      return 0;
    }
    if (param_10[0x19] == param_1) {
      uVar6 = 0x2d;
      goto LAB_00721f70;
    }
  }
  uVar1 = (ulong)(*param_7 >> 1);
  if ((*param_7 & 1) != 0) {
    uVar1 = *(ulong *)(param_7 + 8);
  }
  if ((param_1 == param_6) && (uVar1 != 0)) {
    piVar8 = (int *)*param_9;
    if ((long)piVar8 - param_8 < 0xa0) {
      *piVar8 = *param_5;
      *param_9 = piVar8 + 1;
      *param_5 = 0;
      return 0;
    }
    return 0;
  }
  pwVar4 = wmemchr(param_10,param_1,0x1a);
  puVar3 = PTR_s_0123456789abcdefABCDEFxX__pPiInN_007a38e0;
  pwVar2 = param_10 + 0x1a;
  if (pwVar4 != (wchar_t *)0x0) {
    pwVar2 = pwVar4;
  }
  lVar7 = (long)pwVar2 - (long)param_10 >> 2;
  if (lVar7 < 0x18) {
    if (param_2 == 8) {
LAB_00721fa8:
      if ((long)(ulong)param_2 <= lVar7) goto LAB_00721f58;
    }
    else if (param_2 == 0x10) {
      if (0x15 < lVar7) {
        puVar9 = (undefined1 *)*param_4;
        if (puVar9 == param_3) {
          return 0xffffffff;
        }
        if (2 < (long)puVar9 - (long)param_3) {
          return 0xffffffff;
        }
        if (puVar9[-1] != '0') {
          return 0xffffffff;
        }
        *param_5 = 0;
        uVar6 = puVar3[lVar7];
        *param_4 = (long)(puVar9 + 1);
        *puVar9 = uVar6;
        return 0;
      }
    }
    else if (param_2 == 10) goto LAB_00721fa8;
    uVar5 = 0;
    puVar9 = (undefined1 *)*param_4;
    uVar6 = PTR_s_0123456789abcdefABCDEFxX__pPiInN_007a38e0[lVar7];
    *param_4 = (long)(puVar9 + 1);
    *puVar9 = uVar6;
    *param_5 = *param_5 + 1;
  }
  else {
LAB_00721f58:
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


// ===== 00722050  FUN_00722050 =====

void FUN_00722050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                 undefined1 *param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 uVar4;
  long *plVar5;
  long local_60;
  undefined *local_58;
  undefined8 **local_50;
  undefined **local_48;
  
  FUN_00715df0(&local_60);
  lVar3 = local_60;
  puVar2 = PTR_DAT_007a1108;
  local_58 = PTR_DAT_007a1108;
  if (*(long *)PTR_DAT_007a1108 != -1) {
    local_48 = &local_58;
    local_50 = &local_48;
                    /* try { // try from 007220b0 to 00722103 has its CatchHandler @ 007221d0 */
    FUN_00710f84(PTR_DAT_007a1108,&local_50,FUN_007374a0);
  }
  lVar1 = *(long *)(lVar3 + 0x10);
  if (((ulong)(*(long *)(lVar3 + 0x18) - lVar1 >> 3) <= (long)*(int *)(puVar2 + 8) - 1U) ||
     (plVar5 = *(long **)(lVar1 + ((long)*(int *)(puVar2 + 8) - 1U) * 8), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 007221c8 to 007221cb has its CatchHandler @ 007221d0 */
    FUN_007191ac();
  }
  (**(code **)(*plVar5 + 0x40))
            (plVar5,PTR_s_0123456789abcdefABCDEFxX__pPiInN_007a38e0,
             PTR_s_0123456789abcdefABCDEFxX__pPiInN_007a38e0 + 0x20,param_3);
  puVar2 = PTR_DAT_007a38d8;
  local_58 = PTR_DAT_007a38d8;
  if (*(long *)PTR_DAT_007a38d8 != -1) {
    local_48 = &local_58;
    local_50 = &local_48;
                    /* try { // try from 00722130 to 007221a3 has its CatchHandler @ 007221d4 */
    FUN_00710f84(PTR_DAT_007a38d8,&local_50,FUN_007374a0);
  }
  if (((long)*(int *)(puVar2 + 8) - 1U <
       (ulong)(*(long *)(local_60 + 0x18) - *(long *)(local_60 + 0x10) >> 3)) &&
     (plVar5 = *(long **)(*(long *)(local_60 + 0x10) + ((long)*(int *)(puVar2 + 8) - 1U) * 8),
     plVar5 != (long *)0x0)) {
    uVar4 = (**(code **)(*plVar5 + 0x18))(plVar5);
    *param_4 = uVar4;
    uVar4 = (**(code **)(*plVar5 + 0x20))(plVar5);
    *param_5 = uVar4;
    (**(code **)(*plVar5 + 0x28))(param_1,plVar5);
    FUN_00732094(&local_60);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 007221cc to 007221cf has its CatchHandler @ 007221d4 */
  FUN_007191ac();
}


// ===== 007221e8  FUN_007221e8 =====

undefined8
FUN_007221e8(byte param_1,char *param_2,byte *param_3,byte *param_4,long *param_5,byte param_6,
            byte param_7,byte *param_8,long param_9,undefined8 *param_10,int *param_11,
            void *param_12)

{
  void *pvVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  void *pvVar6;
  undefined1 *puVar7;
  int *piVar8;
  ulong uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  
  if (param_1 == param_6) {
    if (*param_2 != '\0') {
      puVar7 = (undefined1 *)*param_5;
      *param_2 = '\0';
      *param_5 = (long)(puVar7 + 1);
      *puVar7 = 0x2e;
      uVar9 = (ulong)(*param_8 >> 1);
      if ((*param_8 & 1) != 0) {
        uVar9 = *(ulong *)(param_8 + 8);
      }
      if ((uVar9 != 0) && (piVar8 = (int *)*param_10, (long)piVar8 - param_9 < 0xa0)) {
        *piVar8 = *param_11;
        *param_10 = piVar8 + 1;
        return 0;
      }
      return 0;
    }
  }
  else {
    if (param_1 == param_7) {
      uVar9 = (ulong)(*param_8 >> 1);
      if ((*param_8 & 1) != 0) {
        uVar9 = *(ulong *)(param_8 + 8);
      }
      if (uVar9 != 0) {
        if (*param_2 == '\0') {
          return 0xffffffff;
        }
        piVar8 = (int *)*param_10;
        if (0x9f < (long)piVar8 - param_9) {
          return 0;
        }
        *piVar8 = *param_11;
        *param_10 = piVar8 + 1;
        *param_11 = 0;
        return 0;
      }
    }
    pvVar6 = memchr(param_12,(uint)param_1,0x20);
    pvVar1 = (void *)((long)param_12 + 0x20);
    if (pvVar6 != (void *)0x0) {
      pvVar1 = pvVar6;
    }
    uVar9 = (long)pvVar1 - (long)param_12;
    if ((long)uVar9 < 0x20) {
      bVar4 = PTR_s_0123456789abcdefABCDEFxX__pPiInN_007a38e0[uVar9];
      uVar11 = (uint)bVar4;
      if ((uVar9 & 0xfffffffffffffffe) == 0x16) {
        *param_3 = 0x50;
        pbVar10 = (byte *)*param_5;
        *param_5 = (long)(pbVar10 + 1);
        *pbVar10 = bVar4;
        return 0;
      }
      if ((uVar9 & 0xfffffffffffffffe) == 0x18) {
        pbVar10 = (byte *)*param_5;
        if (pbVar10 != param_4) {
          bVar5 = pbVar10[-1];
          bVar3 = *param_3;
          uVar11 = bVar5 ^ 0x20;
          if (0x19 < bVar5 - 0x61) {
            uVar11 = (uint)bVar5;
          }
          uVar12 = bVar3 ^ 0x20;
          if (0x19 < bVar3 - 0x61) {
            uVar12 = (uint)bVar3;
          }
          if (uVar11 != uVar12) {
            return 0xffffffff;
          }
        }
        *param_5 = (long)(pbVar10 + 1);
        *pbVar10 = bVar4;
        return 0;
      }
      bVar3 = *param_3;
      uVar12 = uVar11 ^ 0x20;
      if (0x19 < uVar11 - 0x61) {
        uVar12 = uVar11;
      }
      if (uVar12 == bVar3) {
        bVar5 = bVar3 | 0x20;
        if (0x19 < uVar12 - 0x41) {
          bVar5 = bVar3;
        }
        *param_3 = bVar5;
        if (*param_2 != '\0') {
          *param_2 = '\0';
          uVar2 = (ulong)(*param_8 >> 1);
          if ((*param_8 & 1) != 0) {
            uVar2 = *(ulong *)(param_8 + 8);
          }
          if ((uVar2 != 0) && (piVar8 = (int *)*param_10, (long)piVar8 - param_9 < 0xa0)) {
            *piVar8 = *param_11;
            *param_10 = piVar8 + 1;
          }
        }
      }
      pbVar10 = (byte *)*param_5;
      *param_5 = (long)(pbVar10 + 1);
      *pbVar10 = bVar4;
      if ((long)uVar9 < 0x16) {
        *param_11 = *param_11 + 1;
        return 0;
      }
      return 0;
    }
  }
  return 0xffffffff;
}


// ===== 00722464  FUN_00722464 =====

void FUN_00722464(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 uVar4;
  long *plVar5;
  long local_58;
  undefined *local_50;
  undefined8 **local_48;
  undefined **local_28;
  
  FUN_00715df0(&local_58);
  lVar3 = local_58;
  puVar2 = PTR_DAT_007a1108;
  local_50 = PTR_DAT_007a1108;
  if (*(long *)PTR_DAT_007a1108 != -1) {
    local_28 = &local_50;
    local_48 = &local_28;
                    /* try { // try from 007224c0 to 00722513 has its CatchHandler @ 007225cc */
    FUN_00710f84(PTR_DAT_007a1108,&local_48,FUN_007374a0);
  }
  lVar1 = *(long *)(lVar3 + 0x10);
  if (((ulong)(*(long *)(lVar3 + 0x18) - lVar1 >> 3) <= (long)*(int *)(puVar2 + 8) - 1U) ||
     (plVar5 = *(long **)(lVar1 + ((long)*(int *)(puVar2 + 8) - 1U) * 8), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 007225c4 to 007225c7 has its CatchHandler @ 007225cc */
    FUN_007191ac();
  }
  (**(code **)(*plVar5 + 0x40))
            (plVar5,PTR_s_0123456789abcdefABCDEFxX__pPiInN_007a38e0,
             PTR_s_0123456789abcdefABCDEFxX__pPiInN_007a38e0 + 0x1a,param_3);
  puVar2 = PTR_DAT_007a38d8;
  local_50 = PTR_DAT_007a38d8;
  if (*(long *)PTR_DAT_007a38d8 != -1) {
    local_28 = &local_50;
    local_48 = &local_28;
                    /* try { // try from 00722540 to 0072259f has its CatchHandler @ 007225d0 */
    FUN_00710f84(PTR_DAT_007a38d8,&local_48,FUN_007374a0);
  }
  if (((long)*(int *)(puVar2 + 8) - 1U <
       (ulong)(*(long *)(local_58 + 0x18) - *(long *)(local_58 + 0x10) >> 3)) &&
     (plVar5 = *(long **)(*(long *)(local_58 + 0x10) + ((long)*(int *)(puVar2 + 8) - 1U) * 8),
     plVar5 != (long *)0x0)) {
    uVar4 = (**(code **)(*plVar5 + 0x20))(plVar5);
    *param_4 = uVar4;
    (**(code **)(*plVar5 + 0x28))(param_1,plVar5);
    FUN_00732094(&local_58);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 007225c8 to 007225cb has its CatchHandler @ 007225d0 */
  FUN_007191ac();
}


// ===== 007225e4  FUN_007225e4 =====

void FUN_007225e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  long local_60;
  undefined *local_58;
  undefined8 **local_50;
  undefined **local_48;
  
  FUN_00715df0(&local_60);
  lVar3 = local_60;
  puVar2 = PTR_DAT_007a2640;
  local_58 = PTR_DAT_007a2640;
  if (*(long *)PTR_DAT_007a2640 != -1) {
    local_48 = &local_58;
    local_50 = &local_48;
                    /* try { // try from 00722644 to 00722697 has its CatchHandler @ 00722764 */
    FUN_00710f84(PTR_DAT_007a2640,&local_50,FUN_007374a0);
  }
  lVar1 = *(long *)(lVar3 + 0x10);
  if (((ulong)(*(long *)(lVar3 + 0x18) - lVar1 >> 3) <= (long)*(int *)(puVar2 + 8) - 1U) ||
     (plVar5 = *(long **)(lVar1 + ((long)*(int *)(puVar2 + 8) - 1U) * 8), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0072275c to 0072275f has its CatchHandler @ 00722764 */
    FUN_007191ac();
  }
  (**(code **)(*plVar5 + 0x60))
            (plVar5,PTR_s_0123456789abcdefABCDEFxX__pPiInN_007a38e0,
             PTR_s_0123456789abcdefABCDEFxX__pPiInN_007a38e0 + 0x20,param_3);
  puVar2 = PTR_DAT_007a38e8;
  local_58 = PTR_DAT_007a38e8;
  if (*(long *)PTR_DAT_007a38e8 != -1) {
    local_48 = &local_58;
    local_50 = &local_48;
                    /* try { // try from 007226c4 to 00722737 has its CatchHandler @ 00722768 */
    FUN_00710f84(PTR_DAT_007a38e8,&local_50,FUN_007374a0);
  }
  if (((long)*(int *)(puVar2 + 8) - 1U <
       (ulong)(*(long *)(local_60 + 0x18) - *(long *)(local_60 + 0x10) >> 3)) &&
     (plVar5 = *(long **)(*(long *)(local_60 + 0x10) + ((long)*(int *)(puVar2 + 8) - 1U) * 8),
     plVar5 != (long *)0x0)) {
    uVar4 = (**(code **)(*plVar5 + 0x18))(plVar5);
    *param_4 = uVar4;
    uVar4 = (**(code **)(*plVar5 + 0x20))(plVar5);
    *param_5 = uVar4;
    (**(code **)(*plVar5 + 0x28))(param_1,plVar5);
    FUN_00732094(&local_60);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00722760 to 00722763 has its CatchHandler @ 00722768 */
  FUN_007191ac();
}


// ===== 0072277c  FUN_0072277c =====

undefined8
FUN_0072277c(wchar_t param_1,char *param_2,byte *param_3,byte *param_4,long *param_5,wchar_t param_6
            ,wchar_t param_7,byte *param_8,long param_9,undefined8 *param_10,int *param_11,
            wchar_t *param_12)

{
  wchar_t *pwVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  wchar_t *pwVar5;
  undefined1 *puVar6;
  int *piVar7;
  long lVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  
  if (param_1 == param_6) {
    if (*param_2 != '\0') {
      puVar6 = (undefined1 *)*param_5;
      *param_2 = '\0';
      *param_5 = (long)(puVar6 + 1);
      *puVar6 = 0x2e;
      uVar11 = (ulong)(*param_8 >> 1);
      if ((*param_8 & 1) != 0) {
        uVar11 = *(ulong *)(param_8 + 8);
      }
      if ((uVar11 != 0) && (piVar7 = (int *)*param_10, (long)piVar7 - param_9 < 0xa0)) {
        *piVar7 = *param_11;
        *param_10 = piVar7 + 1;
        return 0;
      }
      return 0;
    }
  }
  else {
    if (param_1 == param_7) {
      uVar11 = (ulong)(*param_8 >> 1);
      if ((*param_8 & 1) != 0) {
        uVar11 = *(ulong *)(param_8 + 8);
      }
      if (uVar11 != 0) {
        if (*param_2 == '\0') {
          return 0xffffffff;
        }
        piVar7 = (int *)*param_10;
        if (0x9f < (long)piVar7 - param_9) {
          return 0;
        }
        *piVar7 = *param_11;
        *param_10 = piVar7 + 1;
        *param_11 = 0;
        return 0;
      }
    }
    pwVar5 = wmemchr(param_12,param_1,0x20);
    pwVar1 = param_12 + 0x20;
    if (pwVar5 != (wchar_t *)0x0) {
      pwVar1 = pwVar5;
    }
    lVar8 = (long)pwVar1 - (long)param_12 >> 2;
    if (lVar8 < 0x20) {
      uVar11 = (long)pwVar1 - (long)param_12 & 0xfffffffffffffffb;
      bVar3 = PTR_s_0123456789abcdefABCDEFxX__pPiInN_007a38e0[lVar8];
      uVar10 = (uint)bVar3;
      if (uVar11 == 0x58) {
        *param_3 = 0x50;
      }
      else {
        if (uVar11 == 0x60) {
          pbVar9 = (byte *)*param_5;
          if (pbVar9 != param_4) {
            bVar4 = pbVar9[-1];
            bVar2 = *param_3;
            uVar10 = bVar4 ^ 0x20;
            if (0x19 < bVar4 - 0x61) {
              uVar10 = (uint)bVar4;
            }
            uVar12 = bVar2 ^ 0x20;
            if (0x19 < bVar2 - 0x61) {
              uVar12 = (uint)bVar2;
            }
            if (uVar10 != uVar12) {
              return 0xffffffff;
            }
          }
          *param_5 = (long)(pbVar9 + 1);
          *pbVar9 = bVar3;
          return 0;
        }
        bVar2 = *param_3;
        uVar12 = uVar10 ^ 0x20;
        if (0x19 < uVar10 - 0x61) {
          uVar12 = uVar10;
        }
        if (uVar12 == bVar2) {
          bVar4 = bVar2 | 0x20;
          if (0x19 < uVar12 - 0x41) {
            bVar4 = bVar2;
          }
          *param_3 = bVar4;
          if (*param_2 != '\0') {
            *param_2 = '\0';
            uVar11 = (ulong)(*param_8 >> 1);
            if ((*param_8 & 1) != 0) {
              uVar11 = *(ulong *)(param_8 + 8);
            }
            if ((uVar11 != 0) && (piVar7 = (int *)*param_10, (long)piVar7 - param_9 < 0xa0)) {
              *piVar7 = *param_11;
              *param_10 = piVar7 + 1;
            }
          }
        }
      }
      pbVar9 = (byte *)*param_5;
      *param_5 = (long)(pbVar9 + 1);
      *pbVar9 = bVar3;
      if (lVar8 < 0x16) {
        *param_11 = *param_11 + 1;
        return 0;
      }
      return 0;
    }
  }
  return 0xffffffff;
}


// ===== 007229e4  FUN_007229e4 =====

void FUN_007229e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  long local_58;
  undefined *local_50;
  undefined8 **local_48;
  undefined **local_28;
  
  FUN_00715df0(&local_58);
  lVar3 = local_58;
  puVar2 = PTR_DAT_007a2640;
  local_50 = PTR_DAT_007a2640;
  if (*(long *)PTR_DAT_007a2640 != -1) {
    local_28 = &local_50;
    local_48 = &local_28;
                    /* try { // try from 00722a40 to 00722a93 has its CatchHandler @ 00722b4c */
    FUN_00710f84(PTR_DAT_007a2640,&local_48,FUN_007374a0);
  }
  lVar1 = *(long *)(lVar3 + 0x10);
  if (((ulong)(*(long *)(lVar3 + 0x18) - lVar1 >> 3) <= (long)*(int *)(puVar2 + 8) - 1U) ||
     (plVar5 = *(long **)(lVar1 + ((long)*(int *)(puVar2 + 8) - 1U) * 8), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00722b44 to 00722b47 has its CatchHandler @ 00722b4c */
    FUN_007191ac();
  }
  (**(code **)(*plVar5 + 0x60))
            (plVar5,PTR_s_0123456789abcdefABCDEFxX__pPiInN_007a38e0,
             PTR_s_0123456789abcdefABCDEFxX__pPiInN_007a38e0 + 0x1a,param_3);
  puVar2 = PTR_DAT_007a38e8;
  local_50 = PTR_DAT_007a38e8;
  if (*(long *)PTR_DAT_007a38e8 != -1) {
    local_28 = &local_50;
    local_48 = &local_28;
                    /* try { // try from 00722ac0 to 00722b1f has its CatchHandler @ 00722b50 */
    FUN_00710f84(PTR_DAT_007a38e8,&local_48,FUN_007374a0);
  }
  if (((long)*(int *)(puVar2 + 8) - 1U <
       (ulong)(*(long *)(local_58 + 0x18) - *(long *)(local_58 + 0x10) >> 3)) &&
     (plVar5 = *(long **)(*(long *)(local_58 + 0x10) + ((long)*(int *)(puVar2 + 8) - 1U) * 8),
     plVar5 != (long *)0x0)) {
    uVar4 = (**(code **)(*plVar5 + 0x20))(plVar5);
    *param_4 = uVar4;
    (**(code **)(*plVar5 + 0x28))(param_1,plVar5);
    FUN_00732094(&local_58);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00722b48 to 00722b4b has its CatchHandler @ 00722b50 */
  FUN_007191ac();
}


// ===== 00722b64  FUN_00722b64 =====

long * FUN_00722b64(long *param_1,long *param_2,long param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined **local_60;
  ulong local_58;
  undefined1 *puStack_50;
  long local_48;
  undefined *local_40;
  undefined1 *local_38;
  
  if ((*(byte *)(param_3 + 8) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00722bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar8 = (long *)(**(code **)(*param_1 + 0x30))(param_1,param_2,param_3,param_4,param_5 & 1);
    return plVar8;
  }
  FUN_00715df0(&local_48,param_3);
  puVar5 = PTR_DAT_007a38d8;
  local_40 = PTR_DAT_007a38d8;
  if (*(long *)PTR_DAT_007a38d8 != -1) {
    local_60 = &local_40;
                    /* try { // try from 00722bec to 00722c03 has its CatchHandler @ 00722d04 */
    local_38 = (undefined1 *)&local_60;
    FUN_00710f84(PTR_DAT_007a38d8,&local_38,FUN_007374a0);
  }
  if (((long)*(int *)(puVar5 + 8) - 1U <
       (ulong)(*(long *)(local_48 + 0x18) - *(long *)(local_48 + 0x10) >> 3)) &&
     (plVar8 = *(long **)(*(long *)(local_48 + 0x10) + ((long)*(int *)(puVar5 + 8) - 1U) * 8),
     plVar8 != (long *)0x0)) {
    FUN_00732094(&local_48);
    lVar1 = 0x30;
    if ((param_5 & 1) == 0) {
      lVar1 = 0x38;
    }
    (**(code **)(*plVar8 + lVar1))(&local_60,plVar8);
    bVar6 = ((ulong)local_60 & 1) != 0;
    uVar2 = (ulong)((byte)local_60 >> 1);
    if (bVar6) {
      uVar2 = local_58;
    }
    if (uVar2 != 0) {
      plVar8 = param_2;
      puVar9 = (undefined1 *)((ulong)&local_60 | 1);
      if (bVar6) {
        puVar9 = puStack_50;
      }
      do {
        param_2 = plVar8;
        if (plVar8 != (long *)0x0) {
          puVar3 = (undefined1 *)plVar8[6];
          uVar4 = *puVar9;
          if (puVar3 == (undefined1 *)plVar8[7]) {
                    /* try { // try from 00722cc8 to 00722ccf has its CatchHandler @ 00722d18 */
            iVar7 = (**(code **)(*plVar8 + 0x68))(plVar8);
            param_2 = (long *)0x0;
            if (iVar7 != -1) {
              param_2 = plVar8;
            }
          }
          else {
            plVar8[6] = (long)(puVar3 + 1);
            *puVar3 = uVar4;
          }
        }
        puVar9 = puVar9 + 1;
        uVar2 = (ulong)((byte)local_60 >> 1);
        puVar3 = (undefined1 *)((ulong)&local_60 | 1);
        if (((ulong)local_60 & 1) != 0) {
          uVar2 = local_58;
          puVar3 = puStack_50;
        }
        plVar8 = param_2;
      } while (puVar9 != puVar3 + uVar2);
    }
    if (((byte)local_60 & 1) != 0) {
      free(puStack_50);
    }
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00722d00 to 00722d03 has its CatchHandler @ 00722d04 */
  FUN_007191ac();
}


// ===== 00722d34  FUN_00722d34 =====

void FUN_00722d34(void)

{
  FUN_00722d44();
  return;
}


// ===== 00722d44  FUN_00722d44 =====

void FUN_00722d44(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined8 param_5,char *param_6)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 auStack_85 [45];
  char local_58 [24];
  undefined8 local_28;
  
  uVar1 = *(uint *)(param_3 + 8);
  local_28 = 0x25;
  pcVar3 = (char *)((ulong)&local_28 | 1);
  if ((((uVar1 >> 0xb & 1) != 0) && ((uVar1 & 0x4a) != 8)) && ((uVar1 & 0x4a) != 0x40)) {
    pcVar3 = (char *)((ulong)&local_28 | 2);
    local_28 = 0x2b25;
  }
  pcVar4 = pcVar3;
  if ((uVar1 >> 9 & 1) != 0) {
    pcVar4 = pcVar3 + 1;
    *pcVar3 = '#';
  }
  cVar5 = *param_6;
  if (cVar5 != '\0') {
    pcVar3 = pcVar4;
    pcVar6 = param_6 + 1;
    do {
      pcVar4 = pcVar3 + 1;
      *pcVar3 = cVar5;
      cVar5 = *pcVar6;
      pcVar3 = pcVar4;
      pcVar6 = pcVar6 + 1;
    } while (cVar5 != '\0');
  }
  if ((uVar1 & 0x4a) == 0x40) {
    cVar5 = 'o';
  }
  else if ((uVar1 & 0x4a) == 8) {
    cVar5 = 'x';
    if ((uVar1 & 0x4000) != 0) {
      cVar5 = 'X';
    }
  }
  else {
    cVar5 = 'd';
  }
  *pcVar4 = cVar5;
  if (((DAT_007b0958 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007b0958), iVar2 != 0)) {
                    /* try { // try from 00722f2c to 00722f3f has its CatchHandler @ 00722f54 */
    DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    FUN_00739d60(&DAT_007b0958);
  }
  iVar2 = FUN_00724168(local_58,0x18,DAT_007b0950,&local_28,param_5);
  uVar1 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar3 = local_58 + iVar2;
  if (uVar1 == 0x20) goto LAB_00722eb4;
  if (uVar1 == 0x10) {
    if ((local_58[0] == '-') || (local_58[0] == '+')) {
      pcVar3 = (char *)((ulong)local_58 | 1);
      goto LAB_00722eb4;
    }
    if (((1 < iVar2) && (local_58[0] == '0')) && ((byte)(local_58[1] | 0x20U) == 0x78)) {
      pcVar3 = (char *)((ulong)local_58 | 2);
      goto LAB_00722eb4;
    }
  }
  pcVar3 = local_58;
LAB_00722eb4:
  FUN_00715df0(auStack_a0,param_3);
                    /* try { // try from 00722ec0 to 00722edf has its CatchHandler @ 00722f6c */
  FUN_00725a38(local_58,pcVar3,local_58 + iVar2,auStack_85,&uStack_90,&local_98,auStack_a0);
  FUN_00732094(auStack_a0);
  FUN_00303fb0(param_2,auStack_85,uStack_90,local_98,param_3,param_4);
  return;
}


// ===== 00722f80  FUN_00722f80 =====

void FUN_00722f80(void)

{
  FUN_00722f90();
  return;
}


// ===== 00722f90  FUN_00722f90 =====

void FUN_00722f90(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined8 param_5,char *param_6)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 auStack_85 [45];
  char local_58 [24];
  undefined8 local_28;
  
  uVar1 = *(uint *)(param_3 + 8);
  local_28 = 0x25;
  pcVar3 = (char *)((ulong)&local_28 | 1);
  if ((((uVar1 >> 0xb & 1) != 0) && ((uVar1 & 0x4a) != 8)) && ((uVar1 & 0x4a) != 0x40)) {
    pcVar3 = (char *)((ulong)&local_28 | 2);
    local_28 = 0x2b25;
  }
  pcVar4 = pcVar3;
  if ((uVar1 >> 9 & 1) != 0) {
    pcVar4 = pcVar3 + 1;
    *pcVar3 = '#';
  }
  cVar5 = *param_6;
  if (cVar5 != '\0') {
    pcVar3 = pcVar4;
    pcVar6 = param_6 + 1;
    do {
      pcVar4 = pcVar3 + 1;
      *pcVar3 = cVar5;
      cVar5 = *pcVar6;
      pcVar3 = pcVar4;
      pcVar6 = pcVar6 + 1;
    } while (cVar5 != '\0');
  }
  if ((uVar1 & 0x4a) == 0x40) {
    cVar5 = 'o';
  }
  else if ((uVar1 & 0x4a) == 8) {
    cVar5 = 'x';
    if ((uVar1 & 0x4000) != 0) {
      cVar5 = 'X';
    }
  }
  else {
    cVar5 = 'd';
  }
  *pcVar4 = cVar5;
  if (((DAT_007b0958 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007b0958), iVar2 != 0)) {
                    /* try { // try from 00723178 to 0072318b has its CatchHandler @ 007231a0 */
    DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    FUN_00739d60(&DAT_007b0958);
  }
  iVar2 = FUN_00724168(local_58,0x18,DAT_007b0950,&local_28,param_5);
  uVar1 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar3 = local_58 + iVar2;
  if (uVar1 == 0x20) goto LAB_00723100;
  if (uVar1 == 0x10) {
    if ((local_58[0] == '-') || (local_58[0] == '+')) {
      pcVar3 = (char *)((ulong)local_58 | 1);
      goto LAB_00723100;
    }
    if (((1 < iVar2) && (local_58[0] == '0')) && ((byte)(local_58[1] | 0x20U) == 0x78)) {
      pcVar3 = (char *)((ulong)local_58 | 2);
      goto LAB_00723100;
    }
  }
  pcVar3 = local_58;
LAB_00723100:
  FUN_00715df0(auStack_a0,param_3);
                    /* try { // try from 0072310c to 0072312b has its CatchHandler @ 007231b8 */
  FUN_00725a38(local_58,pcVar3,local_58 + iVar2,auStack_85,&uStack_90,&local_98,auStack_a0);
  FUN_00732094(auStack_a0);
  FUN_00303fb0(param_2,auStack_85,uStack_90,local_98,param_3,param_4);
  return;
}


// ===== 007231cc  FUN_007231cc =====

void FUN_007231cc(void)

{
  FUN_007231dc();
  return;
}


// ===== 007231dc  FUN_007231dc =====

void FUN_007231dc(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined8 param_5,char *param_6)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 auStack_85 [45];
  char local_58 [24];
  undefined8 local_28;
  
  uVar1 = *(uint *)(param_3 + 8);
  local_28 = 0x25;
  if ((uVar1 >> 9 & 1) == 0) {
    pcVar3 = (char *)((ulong)&local_28 | 1);
    cVar5 = *param_6;
  }
  else {
    pcVar3 = (char *)((ulong)&local_28 | 2);
    local_28 = 0x2325;
    cVar5 = *param_6;
  }
  if (cVar5 != '\0') {
    pcVar4 = pcVar3;
    pcVar6 = param_6 + 1;
    do {
      pcVar3 = pcVar4 + 1;
      *pcVar4 = cVar5;
      cVar5 = *pcVar6;
      pcVar4 = pcVar3;
      pcVar6 = pcVar6 + 1;
    } while (cVar5 != '\0');
  }
  if ((uVar1 & 0x4a) == 0x40) {
    cVar5 = 'o';
  }
  else if ((uVar1 & 0x4a) == 8) {
    cVar5 = 'x';
    if ((uVar1 & 0x4000) != 0) {
      cVar5 = 'X';
    }
  }
  else {
    cVar5 = 'u';
  }
  *pcVar3 = cVar5;
  if (((DAT_007b0958 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007b0958), iVar2 != 0)) {
                    /* try { // try from 007233a8 to 007233bb has its CatchHandler @ 007233d0 */
    DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    FUN_00739d60(&DAT_007b0958);
  }
  iVar2 = FUN_00724168(local_58,0x18,DAT_007b0950,&local_28,param_5);
  uVar1 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar3 = local_58 + iVar2;
  if (uVar1 == 0x20) goto LAB_00723330;
  if (uVar1 == 0x10) {
    if ((local_58[0] == '-') || (local_58[0] == '+')) {
      pcVar3 = (char *)((ulong)local_58 | 1);
      goto LAB_00723330;
    }
    if (((1 < iVar2) && (local_58[0] == '0')) && ((byte)(local_58[1] | 0x20U) == 0x78)) {
      pcVar3 = (char *)((ulong)local_58 | 2);
      goto LAB_00723330;
    }
  }
  pcVar3 = local_58;
LAB_00723330:
  FUN_00715df0(auStack_a0,param_3);
                    /* try { // try from 0072333c to 0072335b has its CatchHandler @ 007233e8 */
  FUN_00725a38(local_58,pcVar3,local_58 + iVar2,auStack_85,&uStack_90,&local_98,auStack_a0);
  FUN_00732094(auStack_a0);
  FUN_00303fb0(param_2,auStack_85,uStack_90,local_98,param_3,param_4);
  return;
}


// ===== 007233fc  FUN_007233fc =====

void FUN_007233fc(void)

{
  FUN_0072340c();
  return;
}


// ===== 0072340c  FUN_0072340c =====

void FUN_0072340c(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined8 param_5,char *param_6)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 auStack_85 [45];
  char local_58 [24];
  undefined8 local_28;
  
  uVar1 = *(uint *)(param_3 + 8);
  local_28 = 0x25;
  if ((uVar1 >> 9 & 1) == 0) {
    pcVar3 = (char *)((ulong)&local_28 | 1);
    cVar5 = *param_6;
  }
  else {
    pcVar3 = (char *)((ulong)&local_28 | 2);
    local_28 = 0x2325;
    cVar5 = *param_6;
  }
  if (cVar5 != '\0') {
    pcVar4 = pcVar3;
    pcVar6 = param_6 + 1;
    do {
      pcVar3 = pcVar4 + 1;
      *pcVar4 = cVar5;
      cVar5 = *pcVar6;
      pcVar4 = pcVar3;
      pcVar6 = pcVar6 + 1;
    } while (cVar5 != '\0');
  }
  if ((uVar1 & 0x4a) == 0x40) {
    cVar5 = 'o';
  }
  else if ((uVar1 & 0x4a) == 8) {
    cVar5 = 'x';
    if ((uVar1 & 0x4000) != 0) {
      cVar5 = 'X';
    }
  }
  else {
    cVar5 = 'u';
  }
  *pcVar3 = cVar5;
  if (((DAT_007b0958 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007b0958), iVar2 != 0)) {
                    /* try { // try from 007235d8 to 007235eb has its CatchHandler @ 00723600 */
    DAT_007b0950 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    FUN_00739d60(&DAT_007b0958);
  }
  iVar2 = FUN_00724168(local_58,0x18,DAT_007b0950,&local_28,param_5);
  uVar1 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar3 = local_58 + iVar2;
  if (uVar1 == 0x20) goto LAB_00723560;
  if (uVar1 == 0x10) {
    if ((local_58[0] == '-') || (local_58[0] == '+')) {
      pcVar3 = (char *)((ulong)local_58 | 1);
      goto LAB_00723560;
    }
    if (((1 < iVar2) && (local_58[0] == '0')) && ((byte)(local_58[1] | 0x20U) == 0x78)) {
      pcVar3 = (char *)((ulong)local_58 | 2);
      goto LAB_00723560;
    }
  }
  pcVar3 = local_58;
LAB_00723560:
  FUN_00715df0(auStack_a0,param_3);
                    /* try { // try from 0072356c to 0072358b has its CatchHandler @ 00723618 */
  FUN_00725a38(local_58,pcVar3,local_58 + iVar2,auStack_85,&uStack_90,&local_98,auStack_a0);
  FUN_00732094(auStack_a0);
  FUN_00303fb0(param_2,auStack_85,uStack_90,local_98,param_3,param_4);
  return;
}


