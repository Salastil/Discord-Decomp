// ===== 00110270  _FINI_1 =====

void _FINI_1(void)

{
  __cxa_finalize(&PTR_LOOP_0012f080);
  return;
}


// ===== 00110280  FUN_00110280 =====

void FUN_00110280(void)

{
  return;
}


// ===== 00110288  _FINI_0 =====

void _FINI_0(void)

{
  FUN_00110280();
  return;
}


// ===== 00110290  FUN_00110290 =====

void FUN_00110290(code *UNRECOVERED_JUMPTABLE)

{
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0011029c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


// ===== 001102a4  FUN_001102a4 =====

void FUN_001102a4(undefined8 param_1)

{
  __cxa_atexit(FUN_00110290,param_1,&PTR_LOOP_0012f080);
  return;
}


// ===== 001102c0  FUN_001102c0 =====

void FUN_001102c0(void)

{
  __register_atfork();
  return;
}


// ===== 001102d0  FUN_001102d0 =====

undefined8 FUN_001102d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_80 [24];
  code *local_68;
  long local_38;
  
  FUN_00110618(param_2,param_1);
  iVar2 = FUN_0011073c(param_2);
  while( true ) {
    if (iVar2 == 0) {
      return 5;
    }
    if (iVar2 < 0) break;
    FUN_001106c0(param_2,0xfffffffe,&local_38);
    iVar2 = FUN_00110750(param_2,auStack_80);
    if (iVar2 != 0) {
      return 2;
    }
    if (local_68 != (code *)0x0) {
      uVar3 = 6;
      if (local_38 != param_3[3]) {
        uVar3 = 2;
      }
      iVar2 = (*local_68)(1,uVar3,*param_3,param_3,param_2);
      puVar1 = PTR___sF_0012fcc8;
      if (iVar2 != 8) {
        if (iVar2 != 7) {
          return 2;
        }
        FUN_00110790(param_2);
        return 2;
      }
      if (local_38 == param_3[3]) {
        fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),"libunwind: %s - %s\n","unwind_phase2",
                "during phase1 personality function said it would stop here, but now in phase2 it did not stop here"
               );
        fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    iVar2 = FUN_0011073c(param_2);
  }
  return 2;
}


// ===== 00110404  FUN_00110404 =====

void FUN_00110404(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_4a0 [624];
  undefined1 auStack_230 [528];
  
  FUN_0011057c(auStack_230);
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_001102d0(auStack_230,auStack_4a0,param_1);
  }
  else {
    FUN_00110488(auStack_230,auStack_4a0,param_1,*(long *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = PTR___sF_0012fcc8;
  fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),"libunwind: %s - %s\n","_Unwind_Resume",
          "_Unwind_Resume() can\'t return");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00110488  FUN_00110488 =====

void FUN_00110488(undefined8 param_1,undefined8 param_2,undefined8 *param_3,code *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_78 [24];
  code *local_60;
  
  FUN_00110618(param_2,param_1);
  iVar1 = FUN_0011073c(param_2);
  while( true ) {
    if (iVar1 < 1) {
      (*param_4)(1,0x1a,*param_3,param_3,param_2,param_5);
      return;
    }
    iVar1 = FUN_00110750(param_2,auStack_78);
    if (iVar1 != 0) break;
    iVar1 = (*param_4)(1,10,*param_3,param_3,param_2,param_5);
    if (iVar1 != 0) {
      return;
    }
    if ((local_60 != (code *)0x0) &&
       (iVar1 = (*local_60)(1,10,*param_3,param_3,param_2), iVar1 != 8)) {
      if (iVar1 != 7) {
        return;
      }
      FUN_00110790(param_2);
    }
    iVar1 = FUN_0011073c(param_2);
  }
  return;
}


// ===== 0011057c  FUN_0011057c =====

undefined8
FUN_0011057c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,long param_10,undefined8 param_11,undefined8 param_12,
            undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
            undefined8 param_17)

{
  undefined8 in_x9;
  undefined8 in_x10;
  undefined8 in_x11;
  undefined8 in_x12;
  undefined8 in_x13;
  undefined8 in_x14;
  undefined8 in_x15;
  undefined8 in_x16;
  undefined8 in_x17;
  undefined8 in_x18;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined8 in_d16;
  undefined8 in_d17;
  undefined8 in_d18;
  undefined8 in_d19;
  undefined8 in_d20;
  undefined8 in_d21;
  undefined8 in_d22;
  undefined8 in_d23;
  undefined8 in_d24;
  undefined8 in_d25;
  undefined8 in_d26;
  undefined8 in_d27;
  undefined8 in_d28;
  undefined8 in_d29;
  undefined8 in_d30;
  undefined8 in_d31;
  
  *(long *)param_10 = param_10;
  *(undefined8 *)(param_10 + 8) = param_11;
  *(undefined8 *)(param_10 + 0x10) = param_12;
  *(undefined8 *)(param_10 + 0x18) = param_13;
  *(undefined8 *)(param_10 + 0x20) = param_14;
  *(undefined8 *)(param_10 + 0x28) = param_15;
  *(undefined8 *)(param_10 + 0x30) = param_16;
  *(undefined8 *)(param_10 + 0x38) = param_17;
  *(undefined8 *)(param_10 + 0x40) = param_1;
  *(undefined8 *)(param_10 + 0x48) = in_x9;
  *(undefined8 *)(param_10 + 0x50) = in_x10;
  *(undefined8 *)(param_10 + 0x58) = in_x11;
  *(undefined8 *)(param_10 + 0x60) = in_x12;
  *(undefined8 *)(param_10 + 0x68) = in_x13;
  *(undefined8 *)(param_10 + 0x70) = in_x14;
  *(undefined8 *)(param_10 + 0x78) = in_x15;
  *(undefined8 *)(param_10 + 0x80) = in_x16;
  *(undefined8 *)(param_10 + 0x88) = in_x17;
  *(undefined8 *)(param_10 + 0x90) = in_x18;
  *(undefined8 *)(param_10 + 0x98) = unaff_x19;
  *(undefined8 *)(param_10 + 0xa0) = unaff_x20;
  *(undefined8 *)(param_10 + 0xa8) = unaff_x21;
  *(undefined8 *)(param_10 + 0xb0) = unaff_x22;
  *(undefined8 *)(param_10 + 0xb8) = unaff_x23;
  *(undefined8 *)(param_10 + 0xc0) = unaff_x24;
  *(undefined8 *)(param_10 + 200) = unaff_x25;
  *(undefined8 *)(param_10 + 0xd0) = unaff_x26;
  *(undefined8 *)(param_10 + 0xd8) = unaff_x27;
  *(undefined8 *)(param_10 + 0xe0) = unaff_x28;
  *(undefined8 *)(param_10 + 0xe8) = unaff_x29;
  *(undefined8 *)(param_10 + 0xf0) = unaff_x30;
  *(BADSPACEBASE **)(param_10 + 0xf8) = register0x00000008;
  *(undefined8 *)(param_10 + 0x100) = unaff_x30;
  *(undefined8 *)(param_10 + 0x110) = param_2;
  *(undefined8 *)(param_10 + 0x118) = param_3;
  *(undefined8 *)(param_10 + 0x120) = param_4;
  *(undefined8 *)(param_10 + 0x128) = param_5;
  *(undefined8 *)(param_10 + 0x130) = param_6;
  *(undefined8 *)(param_10 + 0x138) = param_7;
  *(undefined8 *)(param_10 + 0x140) = param_8;
  *(undefined8 *)(param_10 + 0x148) = param_9;
  *(undefined8 *)(param_10 + 0x150) = unaff_d8;
  *(undefined8 *)(param_10 + 0x158) = unaff_d9;
  *(undefined8 *)(param_10 + 0x160) = unaff_d10;
  *(undefined8 *)(param_10 + 0x168) = unaff_d11;
  *(undefined8 *)(param_10 + 0x170) = unaff_d12;
  *(undefined8 *)(param_10 + 0x178) = unaff_d13;
  *(undefined8 *)(param_10 + 0x180) = unaff_d14;
  *(undefined8 *)(param_10 + 0x188) = unaff_d15;
  *(undefined8 *)(param_10 + 400) = in_d16;
  *(undefined8 *)(param_10 + 0x198) = in_d17;
  *(undefined8 *)(param_10 + 0x1a0) = in_d18;
  *(undefined8 *)(param_10 + 0x1a8) = in_d19;
  *(undefined8 *)(param_10 + 0x1b0) = in_d20;
  *(undefined8 *)(param_10 + 0x1b8) = in_d21;
  *(undefined8 *)(param_10 + 0x1c0) = in_d22;
  *(undefined8 *)(param_10 + 0x1c8) = in_d23;
  *(undefined8 *)(param_10 + 0x1d0) = in_d24;
  *(undefined8 *)(param_10 + 0x1d8) = in_d25;
  *(undefined8 *)(param_10 + 0x1e0) = in_d26;
  *(undefined8 *)(param_10 + 0x1e8) = in_d27;
  *(undefined8 *)(param_10 + 0x1f0) = in_d28;
  *(undefined8 *)(param_10 + 0x1f8) = in_d29;
  *(undefined8 *)(param_10 + 0x200) = in_d30;
  *(undefined8 *)(param_10 + 0x208) = in_d31;
  return 0;
}


// ===== 00110618  FUN_00110618 =====

undefined8 FUN_00110618(undefined8 *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = &PTR_FUN_0012f098;
  param_1[1] = &DAT_00134070;
  memcpy(param_1 + 2,param_2,0x110);
  uVar3 = *(undefined8 *)((long)param_2 + 0x130);
  uVar2 = *(undefined8 *)((long)param_2 + 0x148);
  uVar1 = *(undefined8 *)((long)param_2 + 0x140);
  uVar7 = *(undefined8 *)((long)param_2 + 0x118);
  uVar6 = *(undefined8 *)((long)param_2 + 0x110);
  uVar5 = *(undefined8 *)((long)param_2 + 0x128);
  uVar4 = *(undefined8 *)((long)param_2 + 0x120);
  param_1[0x29] = *(undefined8 *)((long)param_2 + 0x138);
  param_1[0x28] = uVar3;
  param_1[0x2b] = uVar2;
  param_1[0x2a] = uVar1;
  param_1[0x25] = uVar7;
  param_1[0x24] = uVar6;
  param_1[0x27] = uVar5;
  param_1[0x26] = uVar4;
  uVar3 = *(undefined8 *)((long)param_2 + 0x170);
  uVar2 = *(undefined8 *)((long)param_2 + 0x188);
  uVar1 = *(undefined8 *)((long)param_2 + 0x180);
  uVar7 = *(undefined8 *)((long)param_2 + 0x158);
  uVar6 = *(undefined8 *)((long)param_2 + 0x150);
  uVar5 = *(undefined8 *)((long)param_2 + 0x168);
  uVar4 = *(undefined8 *)((long)param_2 + 0x160);
  param_1[0x31] = *(undefined8 *)((long)param_2 + 0x178);
  param_1[0x30] = uVar3;
  param_1[0x33] = uVar2;
  param_1[0x32] = uVar1;
  param_1[0x2d] = uVar7;
  param_1[0x2c] = uVar6;
  param_1[0x2f] = uVar5;
  param_1[0x2e] = uVar4;
  uVar3 = *(undefined8 *)((long)param_2 + 0x1b0);
  uVar2 = *(undefined8 *)((long)param_2 + 0x1c8);
  uVar1 = *(undefined8 *)((long)param_2 + 0x1c0);
  uVar7 = *(undefined8 *)((long)param_2 + 0x198);
  uVar6 = *(undefined8 *)((long)param_2 + 400);
  uVar5 = *(undefined8 *)((long)param_2 + 0x1a8);
  uVar4 = *(undefined8 *)((long)param_2 + 0x1a0);
  param_1[0x39] = *(undefined8 *)((long)param_2 + 0x1b8);
  param_1[0x38] = uVar3;
  param_1[0x3b] = uVar2;
  param_1[0x3a] = uVar1;
  param_1[0x35] = uVar7;
  param_1[0x34] = uVar6;
  param_1[0x37] = uVar5;
  param_1[0x36] = uVar4;
  uVar3 = *(undefined8 *)((long)param_2 + 0x1f0);
  uVar2 = *(undefined8 *)((long)param_2 + 0x208);
  uVar1 = *(undefined8 *)((long)param_2 + 0x200);
  uVar7 = *(undefined8 *)((long)param_2 + 0x1d8);
  uVar6 = *(undefined8 *)((long)param_2 + 0x1d0);
  uVar5 = *(undefined8 *)((long)param_2 + 0x1e8);
  uVar4 = *(undefined8 *)((long)param_2 + 0x1e0);
  param_1[0x41] = *(undefined8 *)((long)param_2 + 0x1f8);
  param_1[0x40] = uVar3;
  param_1[0x43] = uVar2;
  param_1[0x42] = uVar1;
  param_1[0x3d] = uVar7;
  param_1[0x3c] = uVar6;
  param_1[0x3f] = uVar5;
  param_1[0x3e] = uVar4;
  *(undefined8 *)((long)param_1 + 0x263) = 0;
  *(undefined8 *)((long)param_1 + 0x25b) = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  FUN_00110fe0(param_1,0);
  return 0;
}


// ===== 001106c0  FUN_001106c0 =====

undefined8 FUN_001106c0(long *param_1,undefined4 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
  if ((uVar1 & 1) != 0) {
    uVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
    *param_3 = uVar2;
    return 0;
  }
  return 0xffffe672;
}


// ===== 0011073c  FUN_0011073c =====

void FUN_0011073c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0011074c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,1);
  return;
}


// ===== 00110750  FUN_00110750 =====

undefined4 FUN_00110750(long *param_1,long param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x48))();
  uVar1 = 0xffffe66b;
  if (*(long *)(param_2 + 8) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 00110790  FUN_00110790 =====

undefined8 FUN_00110790(long *param_1)

{
  (**(code **)(*param_1 + 0x50))();
  return 0xffffe674;
}


// ===== 001107b8  FUN_001107b8 =====

char * FUN_001107b8(undefined8 param_1,uint *param_2,undefined8 *param_3,long *param_4,ulong param_5
                   )

{
  char cVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  uint *local_48;
  
  puVar10 = param_2 + 1;
  uVar9 = (ulong)*param_2;
  if (*param_2 == 0xffffffff) {
    uVar9 = *(ulong *)(param_2 + 1);
    puVar10 = param_2 + 3;
  }
  if (uVar9 == 0) {
    pcVar7 = "FDE has zero length";
  }
  else if (*puVar10 == 0) {
    pcVar7 = "FDE is really a CIE";
  }
  else {
    lVar8 = (long)puVar10 - (ulong)*puVar10;
    if ((param_5 & 1) == 0) {
      pcVar7 = (char *)FUN_00110948(param_1,lVar8,param_4);
      if (pcVar7 != (char *)0x0) {
        return pcVar7;
      }
    }
    else if (*param_4 != lVar8) {
      return "CIE start does not match";
    }
    lVar8 = (long)puVar10 + uVar9;
    local_48 = puVar10 + 1;
    lVar3 = FUN_001127a0(param_1,&local_48,lVar8,(char)param_4[3],0);
    lVar4 = FUN_001127a0(param_1,&local_48,lVar8,*(byte *)(param_4 + 3) & 0xf,0);
    cVar1 = *(char *)((long)param_4 + 0x31);
    param_3[5] = 0;
    puVar10 = local_48;
    if (cVar1 != '\0') {
      lVar5 = FUN_00112b2c(&local_48,lVar8);
      puVar2 = local_48;
      puVar10 = (uint *)((long)local_48 + lVar5);
      if ((*(byte *)((long)param_4 + 0x19) != 0xff) &&
         (lVar5 = FUN_001127a0(param_1,&local_48,lVar8,*(byte *)((long)param_4 + 0x19) & 0xf,0),
         lVar5 != 0)) {
        local_48 = puVar2;
        uVar6 = FUN_001127a0(param_1,&local_48,lVar8,*(undefined1 *)((long)param_4 + 0x19),0);
        param_3[5] = uVar6;
      }
    }
    pcVar7 = (char *)0x0;
    param_3[2] = puVar10;
    param_3[3] = lVar3;
    *param_3 = param_2;
    param_3[1] = lVar8 - (long)param_2;
    param_3[4] = lVar4 + lVar3;
  }
  return pcVar7;
}


// ===== 00110948  FUN_00110948 =====

char * FUN_00110948(undefined8 param_1,uint *param_2,long *param_3)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  long lVar8;
  char *pcVar9;
  uint *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  byte *pbVar18;
  byte *local_48;
  
  *(undefined2 *)((long)param_3 + 0x33) = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  *(undefined2 *)(param_3 + 6) = 0;
  *param_3 = (long)param_2;
  *(undefined4 *)(param_3 + 3) = 0xff00;
  puVar10 = param_2 + 1;
  uVar13 = (ulong)*param_2;
  if (*param_2 == 0xffffffff) {
    uVar13 = *(ulong *)(param_2 + 1);
    puVar10 = param_2 + 3;
    pbVar1 = (byte *)(uVar13 + (long)puVar10);
  }
  else {
    pbVar1 = (byte *)((long)puVar10 + uVar13);
  }
  if (uVar13 == 0) {
    pcVar9 = (char *)0x0;
  }
  else if (*puVar10 == 0) {
    uVar4 = puVar10[1];
    if (((byte)uVar4 & 0xfd) == 1) {
      pbVar18 = (byte *)((long)puVar10 + 5);
      pbVar11 = pbVar18;
      do {
        local_48 = pbVar11 + 1;
        bVar2 = *pbVar11;
        pbVar11 = local_48;
      } while (bVar2 != 0);
      uVar7 = FUN_00112b2c(&local_48,pbVar1);
      uVar13 = 0;
      uVar14 = 0;
      *(undefined4 *)(param_3 + 5) = uVar7;
      puVar5 = PTR___sF_0012fcc8;
      pbVar11 = local_48;
      pbVar15 = local_48;
      do {
        pbVar12 = pbVar11;
        if (pbVar15 == pbVar1) {
          fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                  "truncated sleb128 expression");
          fflush((FILE *)(puVar5 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        pbVar16 = pbVar15 + 1;
        bVar2 = *pbVar15;
        pbVar11 = pbVar12 + 1;
        uVar3 = uVar13 & 0x3f;
        uVar13 = uVar13 + 7;
        uVar14 = ((ulong)bVar2 & 0x7f) << uVar3 | uVar14;
        pbVar15 = pbVar16;
      } while ((char)bVar2 < '\0');
      uVar17 = (uint)(-1L << (uVar13 & 0x3f));
      if (0x38 < (int)uVar13 - 7U || bVar2 < 0x40) {
        uVar17 = 0;
      }
      *(uint *)((long)param_3 + 0x2c) = (uint)uVar14 | uVar17;
      if ((byte)uVar4 == 1) {
        local_48 = pbVar12 + 2;
        *(byte *)((long)param_3 + 0x32) = *pbVar16;
        bVar2 = *pbVar18;
      }
      else {
        local_48 = pbVar11;
        uVar6 = FUN_00112b2c(&local_48,pbVar1);
        *(undefined1 *)((long)param_3 + 0x32) = uVar6;
        bVar2 = *pbVar18;
      }
      if (bVar2 == 0x7a) {
        FUN_00112b2c(&local_48,pbVar1);
LAB_00110ac8:
        bVar2 = *pbVar18;
        if (bVar2 < 0x50) {
          if (bVar2 < 0x47) {
            if (bVar2 != 0x42) {
              if (bVar2 != 0) goto LAB_00110b68;
              goto LAB_00110bac;
            }
            *(undefined1 *)((long)param_3 + 0x33) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_00110ac8;
          }
          if (bVar2 == 0x47) {
            *(undefined1 *)((long)param_3 + 0x34) = 1;
            goto LAB_00110b68;
          }
          if (bVar2 == 0x4c) {
            pbVar18 = pbVar18 + 1;
            *(byte *)((long)param_3 + 0x19) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_00110ac8;
          }
        }
        else if (bVar2 < 0x53) {
          if (bVar2 == 0x50) {
            bVar2 = *local_48;
            *(byte *)((long)param_3 + 0x1a) = bVar2;
            *(char *)((long)param_3 + 0x1b) = (char)(local_48 + 1) - (char)param_2;
            local_48 = local_48 + 1;
            lVar8 = FUN_001127a0(param_1,&local_48,pbVar1,bVar2,0);
            param_3[4] = lVar8;
            pbVar18 = pbVar18 + 1;
            goto LAB_00110ac8;
          }
          if (bVar2 == 0x52) {
            pbVar18 = pbVar18 + 1;
            *(byte *)(param_3 + 3) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_00110ac8;
          }
        }
        else {
          if (bVar2 == 0x53) {
            *(undefined1 *)(param_3 + 6) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_00110ac8;
          }
          if (bVar2 == 0x7a) {
            *(undefined1 *)((long)param_3 + 0x31) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_00110ac8;
          }
        }
LAB_00110b68:
        pbVar18 = pbVar18 + 1;
        goto LAB_00110ac8;
      }
LAB_00110bac:
      pcVar9 = (char *)0x0;
      param_3[1] = (long)pbVar1 - *param_3;
      param_3[2] = (long)local_48;
    }
    else {
      pcVar9 = "CIE version is not 1 or 3";
    }
  }
  else {
    pcVar9 = "CIE ID is not zero";
  }
  return pcVar9;
}


// ===== 00110c10  FUN_00110c10 =====

void FUN_00110c10(void)

{
  return;
}


// ===== 00110c18  FUN_00110c18 =====

void FUN_00110c18(void)

{
  return;
}


// ===== 00110c20  FUN_00110c20 =====

bool FUN_00110c20(undefined8 param_1,uint param_2)

{
  if (0xfffffffd < param_2) {
    return true;
  }
  if (0x5f < param_2) {
    return false;
  }
  if (param_2 == 0x22) {
    return true;
  }
  return param_2 - 0x40 < 0xffffffe1;
}


// ===== 00110c64  FUN_00110c64 =====

undefined8 FUN_00110c64(long param_1,uint param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_0012fcc8;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_00110ccc:
      return *(undefined8 *)(param_1 + 0x108);
    }
    if (param_2 == 0xffffffff) goto LAB_00110cc0;
    if (param_2 == 0x1d) {
      return *(undefined8 *)(param_1 + 0xf8);
    }
  }
  else if ((int)param_2 < 0x20) {
    if (param_2 == 0x1e) {
      return *(undefined8 *)(param_1 + 0x100);
    }
    if (param_2 == 0x1f) goto LAB_00110ccc;
  }
  else {
    if (param_2 == 0x22) {
      return *(undefined8 *)(param_1 + 0x118);
    }
    if (param_2 == 0x20) {
LAB_00110cc0:
      return *(undefined8 *)(param_1 + 0x110);
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8);
}


// ===== 00110d4c  FUN_00110d4c =====

void FUN_00110d4c(long param_1,uint param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_0012fcc8;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_00110db4:
      *(undefined8 *)(param_1 + 0x108) = param_3;
      return;
    }
    if (param_2 == 0xffffffff) goto LAB_00110da8;
    if (param_2 == 0x1d) {
      *(undefined8 *)(param_1 + 0xf8) = param_3;
      return;
    }
  }
  else if ((int)param_2 < 0x20) {
    if (param_2 == 0x1e) {
      *(undefined8 *)(param_1 + 0x100) = param_3;
      return;
    }
    if (param_2 == 0x1f) goto LAB_00110db4;
  }
  else {
    if (param_2 == 0x22) {
      *(undefined8 *)(param_1 + 0x118) = param_3;
      return;
    }
    if (param_2 == 0x20) {
LAB_00110da8:
      *(undefined8 *)(param_1 + 0x110) = param_3;
      return;
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),"libunwind: %s - %s\n","setRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8) = param_3;
  return;
}


// ===== 00110e34  FUN_00110e34 =====

bool FUN_00110e34(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffffffe0) == 0x40;
}


// ===== 00110e48  FUN_00110e48 =====

undefined1  [16] FUN_00110e48(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + (long)param_2 * 8 + -0xe0);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 00110e58  FUN_00110e58 =====

void FUN_00110e58(undefined8 param_1,long param_2,int param_3)

{
  *(undefined8 *)(param_2 + (long)param_3 * 8 + -0xe0) = param_1;
  return;
}


// ===== 00110e68  FUN_00110e68 =====

ulong FUN_00110e68(long *param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_240 [528];
  
  if ((char)param_1[0x4d] != '\0') {
    return 0;
  }
  if (*(char *)((long)param_1 + 0x26a) == '\0') {
    lVar1 = param_1[1];
    uVar4 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    uVar3 = FUN_0011138c(lVar1,uVar4,param_1[0x4b],param_1 + 2,(long)param_1 + 0x269,param_2 & 1);
    iVar2 = (int)uVar3;
  }
  else {
    memset(auStack_240,0,0x210);
    uVar3 = FUN_0011126c(param_1,auStack_240);
    iVar2 = (int)uVar3;
  }
  if (iVar2 == 1) {
    uVar3 = uVar3 & 0xffffffff;
    (**(code **)(*param_1 + 0x68))(param_1,1);
    if ((char)param_1[0x4d] != '\0') {
      return 0;
    }
  }
  return uVar3;
}


// ===== 00110f58  FUN_00110f58 =====

void FUN_00110f58(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)(param_1 + 0x268) != '\0') {
    param_2[8] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x220);
  param_2[1] = *(undefined8 *)(param_1 + 0x228);
  *param_2 = uVar1;
  uVar6 = *(undefined8 *)(param_1 + 0x248);
  uVar5 = *(undefined8 *)(param_1 + 0x240);
  uVar2 = *(undefined8 *)(param_1 + 600);
  uVar1 = *(undefined8 *)(param_1 + 0x250);
  uVar4 = *(undefined8 *)(param_1 + 0x238);
  uVar3 = *(undefined8 *)(param_1 + 0x230);
  param_2[8] = *(undefined8 *)(param_1 + 0x260);
  param_2[5] = uVar6;
  param_2[4] = uVar5;
  param_2[7] = uVar2;
  param_2[6] = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return;
}


// ===== 00110f9c  FUN_00110f9c =====

void FUN_00110f9c(long param_1)

{
  FUN_00114034(param_1 + 0x10);
  return;
}


// ===== 00110fa8  FUN_00110fa8 =====

undefined1 FUN_00110fa8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x269);
}


// ===== 00110fb4  FUN_00110fb4 =====

undefined8 FUN_00110fb4(long *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  return 0;
}


// ===== 00110fe0  FUN_00110fe0 =====

void FUN_00110fe0(long *param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long local_6e0 [4];
  long local_6c0;
  int local_6a8;
  int iStack_6a4;
  undefined4 uStack_6a0;
  long local_690;
  long lStack_688;
  long local_680;
  undefined1 auStack_678 [16];
  long local_668;
  int *local_648;
  undefined1 *puStack_640;
  ulong local_638;
  
  *(undefined1 *)((long)param_1 + 0x26a) = 0;
  lVar3 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  if (lVar3 == 0) {
    *(undefined1 *)(param_1 + 0x4d) = 1;
    return;
  }
  local_648 = (int *)param_1[1];
  puStack_640 = auStack_678;
  uVar7 = lVar3 - (param_2 & 1);
  local_638 = uVar7;
  iVar1 = dl_iterate_phdr(FUN_00113984,&local_648);
  if (((iVar1 == 0) || (local_668 == 0)) ||
     (uVar4 = FUN_001136b0(param_1,uVar7,auStack_678,0), (uVar4 & 1) == 0)) {
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00134074);
    for (puVar6 = PTR_DAT_00134038; puVar6 < PTR_DAT_00134040; puVar6 = puVar6 + 0x20) {
      if ((*(ulong *)(puVar6 + 8) <= uVar7) && (uVar7 < *(ulong *)(puVar6 + 0x10))) {
        lVar3 = *(long *)(puVar6 + 0x18);
        pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00134074);
        if ((lVar3 != 0) &&
           (lVar3 = FUN_001107b8(param_1[1],lVar3,&local_6a8,local_6e0,0), lVar3 == 0)) {
          memset(&local_648,0,0x618);
          uVar7 = FUN_00111814(param_1[1],&local_6a8,local_6e0,uVar7,4,&local_648);
          if ((uVar7 & 1) != 0) {
            param_1[0x49] = 0;
            param_1[0x46] = local_680;
            param_1[0x47] = local_6c0;
            param_1[0x48] = local_638 & 0xffffffff;
            *(undefined4 *)(param_1 + 0x4a) = 0x3000000;
            param_1[0x45] = lStack_688;
            param_1[0x44] = local_690;
            param_1[0x4c] = 0;
            param_1[0x4b] = CONCAT44(iStack_6a4,local_6a8);
            *(undefined4 *)((long)param_1 + 0x254) = uStack_6a0;
            return;
          }
        }
        goto LAB_00111168;
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00134074);
LAB_00111168:
    lVar3 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    local_648 = &local_6a8;
    puStack_640 = (undefined1 *)0x8;
    local_6e0[1] = 8;
    local_6e0[0] = lVar3;
    uVar2 = getpid();
    lVar5 = syscall(0x10e,(ulong)uVar2,&local_648,1,local_6e0,1,0);
    if (((lVar5 != 8) || (local_6a8 != -0x2d7fee98)) || (iStack_6a4 != -0x2bffffff)) {
      *(undefined1 *)(param_1 + 0x4d) = 1;
      return;
    }
    param_1[0x4c] = 0;
    param_1[0x45] = lVar3 + 4;
    param_1[0x44] = lVar3;
    *(undefined1 *)((long)param_1 + 0x26a) = 1;
    param_1[0x49] = 0;
    param_1[0x48] = 0;
    param_1[0x4b] = 0;
    param_1[0x4a] = 0;
    param_1[0x47] = 0;
    param_1[0x46] = 0;
  }
  return;
}


// ===== 00111260  FUN_00111260 =====

void FUN_00111260(undefined8 param_1,undefined4 param_2)

{
  FUN_00114004(param_2);
  return;
}


// ===== 0011126c  FUN_0011126c =====

undefined8 FUN_0011126c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar1 + 0x138);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar1 + 0x140);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar1 + 0x148);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar1 + 0x150);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar1 + 0x158);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar1 + 0x160);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar1 + 0x168);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar1 + 0x170);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(lVar1 + 0x178);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar1 + 0x180);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar1 + 0x188);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar1 + 400);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar1 + 0x198);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(lVar1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(lVar1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(lVar1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(lVar1 + 0x1c0);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar1 + 0x1c8);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(lVar1 + 0x1d0);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(lVar1 + 0x1d8);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(lVar1 + 0x1e0);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(lVar1 + 0x1e8);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(lVar1 + 0x1f0);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(lVar1 + 0x1f8);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(lVar1 + 0x200);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(lVar1 + 0x208);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(lVar1 + 0x210);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(lVar1 + 0x218);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(lVar1 + 0x220);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(lVar1 + 0x228);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(lVar1 + 0x230);
  uVar2 = *(undefined8 *)(lVar1 + 0x238);
  *(undefined1 *)(param_1 + 0x269) = 1;
  *(undefined8 *)(param_1 + 0x110) = uVar2;
  return 1;
}


// ===== 0011138c  FUN_0011138c =====

undefined8
FUN_0011138c(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,
            undefined1 *param_5,ulong param_6)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  int *piVar15;
  uint uVar16;
  ulong *puVar17;
  ulong uVar18;
  undefined1 auStack_b20 [288];
  ulong local_a00 [96];
  undefined1 auStack_700 [24];
  int local_6e8 [2];
  long local_6e0 [67];
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined1 auStack_e8 [48];
  undefined1 local_b8;
  byte local_b6;
  char local_b4;
  undefined1 auStack_b0 [48];
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar7 = FUN_001107b8(param_1,param_3,auStack_b0,auStack_e8,0);
  if (lVar7 == 0) {
    memset(auStack_700,0,0x618);
    uVar8 = FUN_00111814(param_1,auStack_b0,auStack_e8,param_2,4,auStack_700);
    if ((uVar8 & 1) != 0) {
      uVar8 = FUN_0011245c(param_1,auStack_700,param_4);
      if (((param_6 & 1) != 0) && (local_b4 != '\0')) {
        for (uVar12 = *(ulong *)((long)param_4 + 0xf8) & 0xfffffffffffffff0; uVar12 < uVar8;
            uVar12 = uVar12 + 0x10) {
        }
      }
      memcpy(local_a00 + 0x1e,param_4,0x210);
      uVar12 = 0;
      uVar14 = 0;
      piVar15 = local_6e8;
      puVar17 = local_a00 + 0x1e;
      local_a00[0x3d] = uVar8;
      do {
        puVar3 = PTR___sF_0012fcc8;
        iVar2 = *piVar15;
        if (iVar2 == 0) {
          uVar18 = local_a00[0x3d];
          uVar5 = local_a00[0x3b];
          uVar6 = local_a00[0x3c];
          uVar10 = local_a00[0x3f];
          if (uVar12 == local_b6) {
            if (local_b6 < 0x1f) {
              puVar13 = (undefined8 *)((long)param_4 + 0xe8);
              if ((local_b6 != 0x1d) &&
                 (puVar13 = (undefined8 *)((long)param_4 + 0xf0), local_b6 != 0x1e))
              goto LAB_0011166c;
            }
            else {
              puVar13 = (undefined8 *)((long)param_4 + 0x108);
              if ((local_b6 != 0x22) &&
                 ((puVar13 = (undefined8 *)((long)param_4 + 0x100), local_b6 != 0x20 &&
                  (puVar13 = (undefined8 *)((long)param_4 + 0xf8), local_b6 != 0x1f)))) {
LAB_0011166c:
                if (0x1c < local_b6) {
                  fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),"libunwind: %s - %s\n","getRegister",
                          "unsupported arm64 register");
                  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                puVar13 = (undefined8 *)((long)param_4 + (ulong)local_b6 * 8);
              }
            }
            uVar14 = *puVar13;
          }
        }
        else {
          uVar16 = (uint)uVar12;
          if ((uVar16 & 0x60) == 0x40) {
            if (iVar2 < 5) {
              uVar18 = 0;
              if (iVar2 != 1) {
                if (iVar2 != 2) {
LAB_00111778:
                  fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),"libunwind: %s - %s\n",
                          "getSavedFloatRegister","unsupported restore location for float register")
                  ;
                  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                uVar18 = *(ulong *)(*(long *)(piVar15 + 2) + uVar8);
              }
            }
            else if (iVar2 == 5) {
              uVar18 = *(ulong *)((long)param_4 +
                                 ((*(long *)(piVar15 + 2) << 0x20) + -0x4000000000 >> 0x1d) + 0x110)
              ;
            }
            else {
              if (iVar2 != 6) goto LAB_00111778;
              puVar9 = (ulong *)FUN_00112cf4(*(undefined8 *)(piVar15 + 2),param_1,param_4,uVar8);
              uVar18 = *puVar9;
            }
            local_a00[uVar12] = uVar18;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == local_b6) {
            uVar14 = FUN_00112590(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == 0x22) {
            uVar10 = FUN_00112590(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
          }
          else {
            if (0xffffffe0 < uVar16 - 0x40) {
              return 0xffffe672;
            }
            uVar11 = FUN_00112590(param_1,param_4,uVar8,piVar15);
            puVar3 = PTR___sF_0012fcc8;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
            if ((int)uVar16 < 0x1f) {
              uVar5 = uVar11;
              if ((uVar16 != 0x1d) && (uVar5 = local_a00[0x3b], uVar6 = uVar11, uVar16 != 0x1e))
              goto LAB_001116c0;
            }
            else {
              uVar18 = uVar11;
              if ((uVar16 != 0x1f) &&
                 ((uVar18 = local_a00[0x3d], uVar10 = uVar11, uVar16 != 0x22 &&
                  (uVar10 = local_a00[0x3f], uVar16 != 0x20)))) {
LAB_001116c0:
                if (0x1c < uVar12) {
                  fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),"libunwind: %s - %s\n","setRegister",
                          "unsupported arm64 register");
                  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                *puVar17 = uVar11;
                uVar18 = local_a00[0x3d];
                uVar5 = local_a00[0x3b];
                uVar6 = local_a00[0x3c];
                uVar10 = local_a00[0x3f];
              }
            }
          }
        }
        local_a00[0x3f] = uVar10;
        local_a00[0x3c] = uVar6;
        local_a00[0x3b] = uVar5;
        local_a00[0x3d] = uVar18;
        uVar12 = uVar12 + 1;
        piVar15 = piVar15 + 4;
        puVar17 = puVar17 + 1;
        if (uVar12 == 0x60) {
          *param_5 = local_b8;
          memcpy(auStack_b20,param_4,0x210);
          uStack_78 = uStack_4c0;
          local_80 = local_4c8;
          uVar4 = local_80;
          local_80._0_4_ = (int)local_4c8;
          bVar1 = (int)local_80 != 0;
          if (bVar1) {
            local_80 = uVar4;
            FUN_00112590(param_1,auStack_b20,uVar8,&local_80);
          }
          local_a00[0x3e] = uVar14;
          memcpy(param_4,local_a00 + 0x1e,0x210);
          return 1;
        }
      } while( true );
    }
  }
  return 0xffffe66e;
}


// ===== 00111814  FUN_00111814 =====

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_00111814(undefined8 param_1,long *param_2,long *param_3,long param_4,int param_5,
            undefined4 *param_6)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  long lVar8;
  char *__ptr;
  size_t __size;
  FILE *__s;
  uint uVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined4 *puVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  byte *pbVar21;
  undefined1 auStack_6e0 [4];
  int local_6dc;
  byte **local_6d8;
  undefined8 *puStack_6d0;
  undefined8 local_6c8;
  undefined8 *local_6c0;
  byte *apbStack_6a0 [193];
  ulong local_98 [7];
  
  puVar6 = (undefined8 *)auStack_6e0;
  lVar20 = 0;
  local_98[0] = param_3[2];
  local_98[1] = param_3[1] + *param_3;
  local_98[2] = 0xffffffffffffffff;
  local_98[3] = param_2[2];
  local_6c8 = param_1;
  local_6c0 = (undefined8 *)0x0;
  local_98[4] = param_2[1] + *param_2;
  local_98[5] = param_4 - param_2[3];
  local_6d8 = apbStack_6a0 + 0x44;
  puStack_6d0 = (undefined8 *)(param_6 + 0x8e);
  while( true ) {
    pbVar21 = *(byte **)((long)local_98 + lVar20);
    pbVar2 = *(byte **)((long)local_98 + lVar20 + 8);
    uVar16 = *(ulong *)((long)local_98 + lVar20 + 0x10);
    apbStack_6a0[0xc0] = pbVar21;
    if (pbVar21 < pbVar2 && uVar16 != 0) break;
LAB_00111898:
    lVar20 = lVar20 + 0x18;
    if (lVar20 == 0x30) {
      return 1;
    }
  }
  uVar17 = 0;
LAB_001118c8:
  puVar18 = local_6c0;
  puVar5 = PTR___sF_0012fcc8;
  pbVar10 = pbVar21 + 1;
  bVar3 = *pbVar21;
  apbStack_6a0[0xc0] = pbVar10;
  switch((ulong)bVar3) {
  case 0:
    goto code_r0x0011219c;
  case 1:
    uVar17 = FUN_001127a0(local_6c8,apbStack_6a0 + 0xc0,pbVar2,(char)param_3[3],0);
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 2:
    uVar9 = (uint)pbVar21[1];
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 2;
    goto LAB_00111d50;
  case 3:
    uVar9 = (uint)*(ushort *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 3;
    goto LAB_00111d50;
  case 4:
    uVar9 = *(uint *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 5;
LAB_00111d50:
    uVar17 = uVar17 + iVar13 * uVar9;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 5:
    uVar19 = FUN_00112b2c(apbStack_6a0 + 0xc0,pbVar2);
    lVar8 = FUN_00112b2c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended DWARF unwind, reg too big\n";
      __size = 0x46;
      __s = (FILE *)(PTR___sF_0012fcc8 + 0x130);
      goto LAB_0011234c;
    }
    puVar12 = param_6 + uVar19 * 4;
    iVar13 = *(int *)((long)param_3 + 0x2c);
    if (*(char *)(puVar12 + 7) == '\0') {
      pbVar10 = *(byte **)(param_6 + uVar19 * 4 + 8);
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(puVar12 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = pbVar10;
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    lVar8 = lVar8 * iVar13;
LAB_00111cec:
    puVar12[6] = 2;
    *(long *)(puVar12 + 8) = lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 6:
    uVar19 = FUN_00112b2c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_restore_extended DWARF unwind, reg too big\n";
LAB_0011223c:
      __s = (FILE *)(PTR___sF_0012fcc8 + 0x130);
      __size = 0x47;
      goto LAB_0011234c;
    }
    cVar4 = *(char *)(param_6 + uVar19 * 4 + 7);
joined_r0x0011217c:
    if (cVar4 != '\0') {
      pbVar21 = apbStack_6a0[uVar19 * 2];
      *(byte **)(param_6 + uVar19 * 4 + 8) = apbStack_6a0[uVar19 * 2 + 1];
      *(byte **)(param_6 + uVar19 * 4 + 6) = pbVar21;
    }
    goto code_r0x0011219c;
  case 7:
    uVar19 = FUN_00112b2c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_undefined DWARF unwind, reg too big\n";
LAB_00112340:
      __s = (FILE *)(PTR___sF_0012fcc8 + 0x130);
      __size = 0x40;
      goto LAB_0011234c;
    }
    if (*(char *)(param_6 + uVar19 * 4 + 7) == '\0') {
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(param_6 + uVar19 * 4 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    param_6[uVar19 * 4 + 6] = 1;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 8:
    uVar19 = FUN_00112b2c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_same_value DWARF unwind, reg too big\n";
LAB_00112324:
      __s = (FILE *)(PTR___sF_0012fcc8 + 0x130);
      __size = 0x41;
      goto LAB_0011234c;
    }
    if (*(char *)(param_6 + uVar19 * 4 + 7) == '\0') {
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(param_6 + uVar19 * 4 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    param_6[uVar19 * 4 + 6] = 0;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 9:
    uVar19 = FUN_00112b2c(apbStack_6a0 + 0xc0,pbVar2);
    uVar14 = FUN_00112b2c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg too big\n";
      __size = 0x3f;
      __s = (FILE *)(PTR___sF_0012fcc8 + 0x130);
      goto LAB_0011234c;
    }
    if (0x5f < uVar14) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg2 too big\n";
      goto LAB_00112340;
    }
    if (*(char *)(param_6 + uVar19 * 4 + 7) == '\0') {
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(param_6 + uVar19 * 4 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    *(ulong *)(param_6 + uVar19 * 4 + 8) = uVar14;
    param_6[uVar19 * 4 + 6] = 5;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 10:
    puVar18 = (undefined8 *)((long)puVar6 + 0xfffffffffffff9e0);
    *puVar18 = local_6c0;
    memcpy((undefined1 *)((long)puVar6 + 0xfffffffffffff9e8),param_6,0x618);
    local_6c0 = puVar18;
    puVar6 = puVar18;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xb:
    if (local_6c0 == (undefined8 *)0x0) {
      return 0;
    }
    memcpy(param_6,local_6c0 + 1,0x618);
    local_6c0 = (undefined8 *)*puVar18;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xc:
    uVar19 = FUN_00112b2c(apbStack_6a0 + 0xc0,pbVar2);
    uVar7 = FUN_00112b2c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa DWARF unwind, reg too big\n";
      __size = 0x3e;
      __s = (FILE *)(PTR___sF_0012fcc8 + 0x130);
      goto LAB_0011234c;
    }
    *param_6 = (int)uVar19;
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xd:
    uVar19 = FUN_00112b2c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa_register DWARF unwind, reg too big\n";
      goto LAB_0011223c;
    }
    *param_6 = (int)uVar19;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xe:
    uVar7 = FUN_00112b2c(apbStack_6a0 + 0xc0,pbVar2);
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xf:
    *param_6 = 0;
    *(byte **)(param_6 + 2) = pbVar10;
    goto LAB_001120d0;
  case 0x10:
    uVar19 = FUN_00112b2c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_expression DWARF unwind, reg too big\n";
      goto LAB_00112324;
    }
    puVar12 = param_6 + uVar19 * 4;
    if (*(char *)(puVar12 + 7) == '\0') {
      pbVar10 = *(byte **)(param_6 + uVar19 * 4 + 8);
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(puVar12 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = pbVar10;
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    uVar7 = 6;
LAB_001120c8:
    puVar12[6] = uVar7;
    *(byte **)(puVar12 + 8) = apbStack_6a0[0xc0];
LAB_001120d0:
    lVar8 = FUN_00112b2c(apbStack_6a0 + 0xc0,pbVar2);
    apbStack_6a0[0xc0] = apbStack_6a0[0xc0] + lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x11:
    uVar19 = FUN_00112b2c(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_0012fcc8;
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended_sf DWARF unwind, reg too big\n";
      __size = 0x49;
      __s = (FILE *)(PTR___sF_0012fcc8 + 0x130);
      goto LAB_0011234c;
    }
    uVar14 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                "truncated sleb128 expression");
        fflush((FILE *)(puVar5 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      bVar3 = *pbVar10;
      pbVar21 = pbVar21 + 1;
      uVar15 = uVar14 & 0x3f;
      uVar14 = uVar14 + 7;
      uVar11 = ((ulong)bVar3 & 0x7f) << uVar15 | uVar11;
      pbVar10 = pbVar10 + 1;
    } while ((char)bVar3 < '\0');
    puVar12 = param_6 + uVar19 * 4;
    uVar15 = -1L << (uVar14 & 0x3f);
    iVar13 = *(int *)((long)param_3 + 0x2c);
    if (0x38 < (int)uVar14 - 7U || bVar3 < 0x40) {
      uVar15 = 0;
    }
    apbStack_6a0[0xc0] = pbVar21;
    if (*(char *)(puVar12 + 7) == '\0') {
      pbVar10 = *(byte **)(param_6 + uVar19 * 4 + 8);
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(puVar12 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = pbVar10;
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    uVar11 = uVar11 | uVar15;
    uVar7 = 2;
LAB_0011205c:
    puVar12[6] = uVar7;
    *(ulong *)(puVar12 + 8) = uVar11 * (long)iVar13;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x12:
    uVar14 = FUN_00112b2c(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_0012fcc8;
    uVar19 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                "truncated sleb128 expression");
        fflush((FILE *)(puVar5 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      bVar3 = *pbVar10;
      pbVar21 = pbVar21 + 1;
      uVar15 = uVar19 & 0x3f;
      uVar19 = uVar19 + 7;
      uVar11 = ((ulong)bVar3 & 0x7f) << uVar15 | uVar11;
      pbVar10 = pbVar10 + 1;
    } while ((char)bVar3 < '\0');
    apbStack_6a0[0xc0] = pbVar21;
    if (0x5f < uVar14) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa_sf DWARF unwind, reg too big\n";
      goto LAB_00112324;
    }
    iVar13 = *(int *)((long)param_3 + 0x2c);
    uVar9 = (uint)(-1L << (uVar19 & 0x3f));
    if (0x38 < (int)uVar19 - 7U || bVar3 < 0x40) {
      uVar9 = 0;
    }
    *param_6 = (int)uVar14;
    param_6[1] = iVar13 * ((uint)uVar11 | uVar9);
    break;
  case 0x13:
    uVar19 = 0;
    uVar14 = 0;
    pbVar21 = pbVar10;
    do {
      if (pbVar21 == pbVar2) {
        fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                "truncated sleb128 expression");
        fflush((FILE *)(puVar5 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      bVar3 = *pbVar21;
      pbVar10 = pbVar10 + 1;
      uVar11 = uVar19 & 0x3f;
      uVar19 = uVar19 + 7;
      uVar14 = ((ulong)bVar3 & 0x7f) << uVar11 | uVar14;
      pbVar21 = pbVar21 + 1;
    } while ((char)bVar3 < '\0');
    apbStack_6a0[0xc0] = pbVar10;
    uVar9 = (uint)(-1L << (uVar19 & 0x3f));
    if (0x38 < (int)uVar19 - 7U || bVar3 < 0x40) {
      uVar9 = 0;
    }
    param_6[1] = *(int *)((long)param_3 + 0x2c) * ((uint)uVar14 | uVar9);
    pbVar21 = pbVar10;
    break;
  case 0x14:
    uVar19 = FUN_00112b2c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),
              "libunwind: malformed DW_CFA_val_offset DWARF unwind, reg (%lu) out of range\n\n",
              uVar19);
      goto LAB_00112354;
    }
    lVar8 = FUN_00112b2c(apbStack_6a0 + 0xc0,pbVar2);
    iVar13 = *(int *)((long)param_3 + 0x2c);
    if (*(char *)(param_6 + uVar19 * 4 + 7) == '\0') {
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(param_6 + uVar19 * 4 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    param_6[uVar19 * 4 + 6] = 4;
    *(long *)(param_6 + uVar19 * 4 + 8) = lVar8 * iVar13;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x15:
    uVar19 = FUN_00112b2c(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_0012fcc8;
    if (uVar19 < 0x60) {
      uVar14 = 0;
      uVar11 = 0;
      pbVar21 = apbStack_6a0[0xc0];
      pbVar10 = apbStack_6a0[0xc0];
      do {
        if (pbVar10 == pbVar2) {
          fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                  "truncated sleb128 expression");
          fflush((FILE *)(puVar5 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        bVar3 = *pbVar10;
        pbVar21 = pbVar21 + 1;
        uVar15 = uVar14 & 0x3f;
        uVar14 = uVar14 + 7;
        uVar11 = ((ulong)bVar3 & 0x7f) << uVar15 | uVar11;
        pbVar10 = pbVar10 + 1;
      } while ((char)bVar3 < '\0');
      puVar12 = param_6 + uVar19 * 4;
      uVar15 = -1L << (uVar14 & 0x3f);
      iVar13 = *(int *)((long)param_3 + 0x2c);
      if (0x38 < (int)uVar14 - 7U || bVar3 < 0x40) {
        uVar15 = 0;
      }
      apbStack_6a0[0xc0] = pbVar21;
      if (*(char *)(puVar12 + 7) == '\0') {
        pbVar10 = *(byte **)(param_6 + uVar19 * 4 + 8);
        pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
        *(char *)(puVar12 + 7) = '\x01';
        apbStack_6a0[uVar19 * 2 + 1] = pbVar10;
        apbStack_6a0[uVar19 * 2] = pbVar21;
      }
      uVar11 = uVar11 | uVar15;
      uVar7 = 4;
      goto LAB_0011205c;
    }
    __ptr = "libunwind: malformed DW_CFA_val_offset_sf DWARF unwind, reg too big\n";
    __size = 0x44;
    __s = (FILE *)(PTR___sF_0012fcc8 + 0x130);
    goto LAB_0011234c;
  case 0x16:
    uVar19 = FUN_00112b2c(apbStack_6a0 + 0xc0,pbVar2);
    if (uVar19 < 0x60) {
      puVar12 = param_6 + uVar19 * 4;
      if (*(char *)(puVar12 + 7) == '\0') {
        pbVar10 = *(byte **)(param_6 + uVar19 * 4 + 8);
        pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
        *(char *)(puVar12 + 7) = '\x01';
        apbStack_6a0[uVar19 * 2 + 1] = pbVar10;
        apbStack_6a0[uVar19 * 2] = pbVar21;
      }
      uVar7 = 7;
      goto LAB_001120c8;
    }
    __ptr = "libunwind: malformed DW_CFA_val_expression DWARF unwind, reg too big\n";
    __size = 0x45;
    __s = (FILE *)(PTR___sF_0012fcc8 + 0x130);
    goto LAB_0011234c;
  default:
    bVar1 = bVar3 & 0xc0;
    uVar19 = (ulong)bVar3 & 0x3f;
    if (bVar1 == 0x40) {
      uVar17 = uVar17 + (uint)((int)param_3[5] * (int)uVar19);
      pbVar21 = pbVar10;
    }
    else {
      if (bVar1 == 0xc0) {
        cVar4 = *(char *)(param_6 + uVar19 * 4 + 7);
        goto joined_r0x0011217c;
      }
      if (bVar1 != 0x80) {
        return 0;
      }
      local_6dc = param_5;
      lVar8 = FUN_00112b2c(apbStack_6a0 + 0xc0,pbVar2);
      iVar13 = *(int *)((long)param_3 + 0x2c);
      if (*(char *)(param_6 + uVar19 * 4 + 7) == '\0') {
        pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
        apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
        apbStack_6a0[uVar19 * 2] = pbVar21;
        *(char *)(param_6 + uVar19 * 4 + 7) = '\x01';
      }
      param_6[uVar19 * 4 + 6] = 2;
      *(long *)(param_6 + uVar19 * 4 + 8) = lVar8 * iVar13;
      param_5 = local_6dc;
      pbVar21 = apbStack_6a0[0xc0];
    }
    break;
  case 0x2d:
    if (param_5 != 4) goto code_r0x0011219c;
    if (*(char *)(param_6 + 0x8f) == '\0') {
      pbVar10 = (byte *)puStack_6d0[1];
      pbVar21 = (byte *)*puStack_6d0;
      *(undefined1 *)(param_6 + 0x8f) = 1;
      local_6d8[1] = pbVar10;
      *local_6d8 = pbVar21;
    }
    *(ulong *)(param_6 + 0x90) = *(ulong *)(param_6 + 0x90) ^ 1;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x2e:
    uVar7 = FUN_00112b2c(apbStack_6a0 + 0xc0,pbVar2);
    param_6[4] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x2f:
    uVar19 = FUN_00112b2c(apbStack_6a0 + 0xc0,pbVar2);
    if (uVar19 < 0x60) {
      lVar8 = FUN_00112b2c(apbStack_6a0 + 0xc0,pbVar2);
      puVar12 = param_6 + uVar19 * 4;
      iVar13 = *(int *)((long)param_3 + 0x2c);
      if (*(char *)(puVar12 + 7) == '\0') {
        pbVar10 = *(byte **)(param_6 + uVar19 * 4 + 8);
        pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
        *(char *)(puVar12 + 7) = '\x01';
        apbStack_6a0[uVar19 * 2 + 1] = pbVar10;
        apbStack_6a0[uVar19 * 2] = pbVar21;
      }
      lVar8 = -(lVar8 * iVar13);
      goto LAB_00111cec;
    }
    __ptr = "libunwind: malformed DW_CFA_GNU_negative_offset_extended DWARF unwind, reg too big\n";
    __size = 0x53;
    __s = (FILE *)(PTR___sF_0012fcc8 + 0x130);
LAB_0011234c:
    fwrite(__ptr,__size,1,__s);
LAB_00112354:
    fflush((FILE *)(PTR___sF_0012fcc8 + 0x130));
    return 0;
  }
joined_r0x00111c84:
  if ((pbVar2 <= pbVar21) || (uVar16 <= uVar17)) goto LAB_00111898;
  goto LAB_001118c8;
code_r0x0011219c:
  pbVar21 = apbStack_6a0[0xc0];
  goto joined_r0x00111c84;
}


// ===== 0011245c  FUN_0011245c =====

long FUN_0011245c(undefined8 param_1,uint *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR___sF_0012fcc8;
  uVar1 = *param_2;
  if ((int)uVar1 < 0x1e) {
    if ((int)uVar1 < 0) {
      if (uVar1 == 0xfffffffe) {
LAB_0011249c:
        return *(long *)(param_3 + 0xf8) + (long)(int)param_2[1];
      }
      if (uVar1 == 0xffffffff) goto LAB_001124e0;
    }
    else {
      if (uVar1 == 0) {
        lVar3 = FUN_00112cf4(*(undefined8 *)(param_2 + 2),param_1,param_3,0);
        return lVar3;
      }
      if (uVar1 == 0x1d) {
        return *(long *)(param_3 + 0xe8) + (long)(int)param_2[1];
      }
    }
  }
  else if ((int)uVar1 < 0x20) {
    if (uVar1 == 0x1e) {
      return *(long *)(param_3 + 0xf0) + (long)(int)param_2[1];
    }
    if (uVar1 == 0x1f) goto LAB_0011249c;
  }
  else {
    if (uVar1 == 0x22) {
      return *(long *)(param_3 + 0x108) + (long)(int)param_2[1];
    }
    if (uVar1 == 0x20) {
LAB_001124e0:
      return *(long *)(param_3 + 0x100) + (long)(int)param_2[1];
    }
  }
  if (0x1c < uVar1) {
    fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(long *)(param_3 + (ulong)uVar1 * 8) + (long)(int)param_2[1];
}


// ===== 00112590  FUN_00112590 =====

undefined8 FUN_00112590(undefined8 param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  puVar2 = PTR___sF_0012fcc8;
  iVar1 = *param_4;
  if (iVar1 < 5) {
    if (iVar1 == 1) {
      return 0;
    }
    if ((iVar1 == 2) || (iVar1 == 3)) {
      return *(undefined8 *)(*(long *)(param_4 + 2) + param_3);
    }
  }
  else {
    if (iVar1 == 5) {
      uVar5 = (uint)*(ulong *)(param_4 + 2);
      if ((int)uVar5 < 0x1e) {
        if (uVar5 == 0xfffffffe) {
LAB_001126cc:
          return *(undefined8 *)(param_2 + 0xf8);
        }
        if (uVar5 == 0xffffffff) goto LAB_001126b4;
        if (uVar5 == 0x1d) {
          return *(undefined8 *)(param_2 + 0xe8);
        }
      }
      else if ((int)uVar5 < 0x20) {
        if (uVar5 == 0x1e) {
          return *(undefined8 *)(param_2 + 0xf0);
        }
        if (uVar5 == 0x1f) goto LAB_001126cc;
      }
      else {
        if (uVar5 == 0x22) {
          return *(undefined8 *)(param_2 + 0x108);
        }
        if (uVar5 == 0x20) {
LAB_001126b4:
          return *(undefined8 *)(param_2 + 0x100);
        }
      }
      if (0x1c < uVar5) {
        fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),"libunwind: %s - %s\n","getRegister",
                "unsupported arm64 register");
        fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      return *(undefined8 *)(param_2 + (*(ulong *)(param_4 + 2) & 0xffffffff) * 8);
    }
    if (iVar1 == 6) {
      puVar4 = (undefined8 *)FUN_00112cf4(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return *puVar4;
    }
    if (iVar1 == 7) {
      uVar3 = FUN_00112cf4(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return uVar3;
    }
  }
  fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),"libunwind: %s - %s\n","getSavedRegister",
          "unsupported restore location for register");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 001127a0  FUN_001127a0 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_001127a0(undefined8 param_1,long *param_2,ulong *param_3,uint param_4,long param_5)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  
  puVar3 = PTR___sF_0012fcc8;
  uVar1 = param_4 & 0xf;
  puVar10 = (ulong *)*param_2;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if ((param_4 & 0xf) == 0) goto LAB_001128ec;
      if (uVar1 != 1) {
LAB_00112af8:
        fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "unknown pointer encoding");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar4 = (undefined8 *)FUN_00112b2c(param_2,param_3);
      puVar3 = PTR___sF_0012fcc8;
    }
    else if (uVar1 == 2) {
      puVar4 = (undefined8 *)(ulong)(ushort)*puVar10;
      *param_2 = (long)puVar10 + 2;
      puVar3 = PTR___sF_0012fcc8;
    }
    else {
      if (uVar1 != 3) goto LAB_00112af8;
      puVar4 = (undefined8 *)(ulong)(uint)*puVar10;
      *param_2 = (long)((long)puVar10 + 4);
      puVar3 = PTR___sF_0012fcc8;
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 4) {
LAB_001128ec:
      puVar4 = (undefined8 *)*puVar10;
      *param_2 = (long)(puVar10 + 1);
      puVar3 = PTR___sF_0012fcc8;
    }
    else {
      if (uVar1 != 9) goto LAB_00112af8;
      uVar7 = 0;
      uVar5 = 0;
      puVar6 = puVar10;
      puVar9 = puVar10;
      do {
        if (puVar9 == param_3) {
          fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                  "truncated sleb128 expression");
          fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        bVar2 = (byte)*puVar9;
        puVar6 = (ulong *)((long)puVar6 + 1);
        uVar8 = uVar7 & 0x3f;
        uVar7 = uVar7 + 7;
        uVar5 = ((ulong)bVar2 & 0x7f) << uVar8 | uVar5;
        puVar9 = (ulong *)((long)puVar9 + 1);
      } while ((char)bVar2 < '\0');
      *param_2 = (long)puVar6;
      uVar8 = -1L << (uVar7 & 0x3f);
      if (0x38 < (int)uVar7 - 7U || bVar2 < 0x40) {
        uVar8 = 0;
      }
      puVar4 = (undefined8 *)(uVar5 | uVar8);
      puVar3 = PTR___sF_0012fcc8;
    }
  }
  else if (uVar1 == 10) {
    puVar4 = (undefined8 *)(long)(short)*puVar10;
    *param_2 = (long)puVar10 + 2;
    puVar3 = PTR___sF_0012fcc8;
  }
  else {
    if (uVar1 != 0xb) {
      if (uVar1 != 0xc) goto LAB_00112af8;
      goto LAB_001128ec;
    }
    puVar4 = (undefined8 *)(long)(int)(uint)*puVar10;
    *param_2 = (long)((long)puVar10 + 4);
    puVar3 = PTR___sF_0012fcc8;
  }
  uVar1 = (param_4 & 0xff) >> 4 & 7;
  PTR___sF_0012fcc8 = puVar3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      if (uVar1 != 1) goto LAB_00112ac4;
      puVar4 = (undefined8 *)((long)puVar4 + (long)puVar10);
    }
LAB_00112978:
    if ((param_4 >> 7 & 1) != 0) {
      return (undefined8 *)*puVar4;
    }
    return puVar4;
  }
  if (uVar1 < 4) {
    if (uVar1 == 3) {
      if (param_5 == 0) {
        fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "DW_EH_PE_datarel is invalid with a datarelBase of 0");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar4 = (undefined8 *)((long)puVar4 + param_5);
      goto LAB_00112978;
    }
    if (uVar1 == 2) {
      fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP",
              "DW_EH_PE_textrel pointer encoding not supported");
      fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    if (uVar1 == 4) {
      fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP",
              "DW_EH_PE_funcrel pointer encoding not supported");
      fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (uVar1 == 5) {
      fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP",
              "DW_EH_PE_aligned pointer encoding not supported");
      fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
LAB_00112ac4:
  fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP","unknown pointer encoding");
  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00112b2c  FUN_00112b2c =====

ulong FUN_00112b2c(long *param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  puVar2 = PTR___sF_0012fcc8;
  pbVar4 = (byte *)*param_1;
  if (pbVar4 != param_2) {
    pbVar5 = pbVar4 + 1;
    uVar3 = (ulong)*pbVar4 & 0x7f;
    if (-1 < (char)*pbVar4) {
LAB_00112b5c:
      *param_1 = (long)pbVar5;
      return uVar3;
    }
    if (pbVar5 != param_2) {
      uVar3 = uVar3 | (ulong)((int)(char)pbVar4[1] & 0x7f) << 7;
      pbVar5 = pbVar4 + 2;
      if (-1 < (char)pbVar4[1]) goto LAB_00112b5c;
      if (pbVar5 != param_2) {
        uVar3 = uVar3 | (ulong)((int)(char)pbVar4[2] & 0x7f) << 0xe;
        pbVar5 = pbVar4 + 3;
        if (-1 < (char)pbVar4[2]) goto LAB_00112b5c;
        if (pbVar5 != param_2) {
          uVar3 = uVar3 | (ulong)((int)(char)pbVar4[3] & 0x7f) << 0x15;
          pbVar5 = pbVar4 + 4;
          if (-1 < (char)pbVar4[3]) goto LAB_00112b5c;
          if (pbVar5 != param_2) {
            uVar3 = uVar3 | (ulong)((int)(char)pbVar4[4] & 0x7f) << 0x1c;
            pbVar5 = pbVar4 + 5;
            if (-1 < (char)pbVar4[4]) goto LAB_00112b5c;
            if (pbVar5 != param_2) {
              uVar3 = uVar3 | (ulong)((int)(char)pbVar4[5] & 0x7f) << 0x23;
              pbVar5 = pbVar4 + 6;
              if (-1 < (char)pbVar4[5]) goto LAB_00112b5c;
              if (pbVar5 != param_2) {
                uVar3 = uVar3 | (ulong)((int)(char)pbVar4[6] & 0x7f) << 0x2a;
                pbVar5 = pbVar4 + 7;
                if (-1 < (char)pbVar4[6]) goto LAB_00112b5c;
                if (pbVar5 != param_2) {
                  uVar3 = uVar3 | (ulong)((int)(char)pbVar4[7] & 0x7f) << 0x31;
                  pbVar5 = pbVar4 + 8;
                  if (-1 < (char)pbVar4[7]) goto LAB_00112b5c;
                  if (pbVar5 != param_2) {
                    uVar3 = uVar3 | (ulong)((int)(char)pbVar4[8] & 0x7f) << 0x38;
                    pbVar5 = pbVar4 + 9;
                    if (-1 < (char)pbVar4[8]) goto LAB_00112b5c;
                    if (pbVar5 != param_2) {
                      bVar1 = *pbVar5;
                      if ((bVar1 & 0x7e) == 0) {
                        if (-1 < (char)bVar1) {
                          *param_1 = (long)(pbVar4 + 10);
                          return uVar3 | (ulong)bVar1 << 0x3f;
                        }
                        if (pbVar4 + 10 == param_2) goto LAB_00112c8c;
                      }
                      fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),"libunwind: %s - %s\n",
                              "getULEB128","malformed uleb128 expression");
                      fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
                      abort();
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
LAB_00112c8c:
  fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),"libunwind: %s - %s\n","getULEB128",
          "truncated uleb128 expression");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00112cf4  FUN_00112cf4 =====

ulong FUN_00112cf4(byte *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  byte *pbVar6;
  byte bVar7;
  byte bVar8;
  undefined *puVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong *puVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  byte *pbVar18;
  ulong *puVar19;
  undefined1 auVar20 [16];
  ulong local_380 [99];
  byte *local_68;
  
  local_68 = param_1;
  lVar11 = FUN_00112b2c(&local_68,param_1 + 0x14);
  local_380[0] = param_4;
  pbVar6 = local_68 + lVar11;
  if (local_68 < pbVar6) {
    puVar1 = (ulong *)(param_3 + 0xf0);
    puVar2 = (ulong *)(param_3 + 0xe8);
    puVar3 = (ulong *)(param_3 + 0x108);
    puVar4 = (ulong *)(param_3 + 0xf8);
    puVar19 = local_380;
    puVar5 = (ulong *)(param_3 + 0x100);
    pbVar18 = local_68;
    do {
      puVar9 = PTR___sF_0012fcc8;
      pbVar13 = pbVar18 + 1;
      local_68 = pbVar13;
      bVar8 = *pbVar18;
      uVar10 = (uint)bVar8;
      if (0x91 < uVar10 - 3) {
code_r0x00113570:
        fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DWARF opcode not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar15 = (uint)bVar8;
      puVar14 = puVar4;
      switch(uVar10) {
      case 3:
      case 0xe:
      case 0xf:
        uVar16 = *(ulong *)(pbVar18 + 1);
        local_68 = pbVar18 + 9;
        goto LAB_001131dc;
      case 4:
      case 5:
      case 7:
        goto code_r0x00113570;
      case 6:
        puVar14 = (ulong *)*puVar19;
LAB_0011316c:
        *puVar19 = *puVar14;
        goto LAB_00112d78;
      case 8:
        uVar16 = (ulong)pbVar18[1];
        goto LAB_00113140;
      case 9:
        uVar16 = (ulong)(char)pbVar18[1];
LAB_00113140:
        local_68 = pbVar18 + 2;
        goto LAB_001131dc;
      case 10:
        uVar16 = (ulong)*(ushort *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_001131dc;
      case 0xb:
        uVar16 = (ulong)*(short *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_001131dc;
      case 0xc:
        uVar16 = (ulong)*(uint *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_001131dc;
      case 0xd:
        uVar16 = (ulong)*(int *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_001131dc;
      case 0x10:
        uVar16 = FUN_00112b2c(&local_68,pbVar6);
        puVar19 = puVar19 + 1;
        *puVar19 = uVar16;
        goto LAB_00112d78;
      case 0x11:
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = pbVar13;
        do {
          if (pbVar18 == pbVar6) {
            fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                    "truncated sleb128 expression");
            fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar8 = *pbVar18;
          pbVar13 = pbVar13 + 1;
          uVar17 = uVar16 & 0x3f;
          uVar16 = uVar16 + 7;
          uVar12 = ((ulong)bVar8 & 0x7f) << uVar17 | uVar12;
          pbVar18 = pbVar18 + 1;
        } while ((char)bVar8 < '\0');
        local_68 = pbVar13;
        uVar17 = -1L << (uVar16 & 0x3f);
        if (0x38 < (int)uVar16 - 7U || bVar8 < 0x40) {
          uVar17 = 0;
        }
        puVar19 = puVar19 + 1;
        *puVar19 = uVar12 | uVar17;
        goto LAB_00112d78;
      case 0x12:
        uVar16 = *puVar19;
        goto LAB_00112d74;
      case 0x13:
        puVar19 = puVar19 + -1;
        goto LAB_00112d78;
      case 0x14:
        uVar16 = puVar19[-1];
        goto LAB_00112d74;
      case 0x15:
        local_68 = pbVar18 + 2;
        uVar16 = puVar19[-(ulong)pbVar18[1]];
LAB_001131dc:
LAB_00112d74:
        puVar19[1] = uVar16;
        puVar19 = puVar19 + 1;
        goto LAB_00112d78;
      case 0x16:
        auVar20 = NEON_ext(*(undefined1 (*) [16])(puVar19 + -1),*(undefined1 (*) [16])(puVar19 + -1)
                           ,8,1);
        *puVar19 = auVar20._8_8_;
        puVar19[-1] = auVar20._0_8_;
        goto LAB_00112d78;
      case 0x17:
        uVar16 = *puVar19;
        *puVar19 = SUB168(*(undefined1 (*) [16])(puVar19 + -2),8);
        puVar19[-1] = SUB168(*(undefined1 (*) [16])(puVar19 + -2),0);
        puVar19[-2] = uVar16;
        goto LAB_00112d78;
      case 0x18:
        puVar14 = (ulong *)*puVar19;
        puVar19 = puVar19 + -1;
        *puVar19 = *puVar14;
        goto LAB_00112d78;
      case 0x19:
        uVar16 = *puVar19;
        if ((long)uVar16 < 0) goto LAB_00113314;
        goto LAB_00112d78;
      case 0x1a:
        uVar16 = puVar19[-1] & *puVar19;
        break;
      case 0x1b:
        uVar16 = 0;
        if (*puVar19 != 0) {
          uVar16 = (long)puVar19[-1] / (long)*puVar19;
        }
        break;
      case 0x1c:
        uVar16 = puVar19[-1] - *puVar19;
        break;
      case 0x1d:
        uVar16 = *puVar19;
        lVar11 = 0;
        if (uVar16 != 0) {
          lVar11 = (long)puVar19[-1] / (long)uVar16;
        }
        uVar16 = puVar19[-1] - lVar11 * uVar16;
        break;
      case 0x1e:
        uVar16 = puVar19[-1] * *puVar19;
        break;
      case 0x1f:
        uVar16 = *puVar19;
LAB_00113314:
        *puVar19 = -uVar16;
        goto LAB_00112d78;
      case 0x20:
        *puVar19 = ~*puVar19;
        goto LAB_00112d78;
      case 0x21:
        uVar16 = puVar19[-1] | *puVar19;
        break;
      case 0x22:
        uVar16 = puVar19[-1] + *puVar19;
        break;
      case 0x23:
        lVar11 = FUN_00112b2c(&local_68,pbVar6);
        *puVar19 = *puVar19 + lVar11;
        goto LAB_00112d78;
      case 0x24:
        uVar16 = puVar19[-1] << (*puVar19 & 0x3f);
        break;
      case 0x25:
        uVar16 = puVar19[-1] >> (*puVar19 & 0x3f);
        break;
      case 0x26:
        uVar16 = (long)puVar19[-1] >> (*puVar19 & 0x3f);
        break;
      case 0x27:
        uVar16 = puVar19[-1] ^ *puVar19;
        break;
      case 0x28:
        puVar14 = puVar19 + -1;
        uVar16 = *puVar19;
        local_68 = pbVar18 + 3;
        puVar19 = puVar14;
        if (uVar16 != 0) {
          local_68 = pbVar18 + 3 + *(short *)(pbVar18 + 1);
        }
        goto LAB_00112d78;
      case 0x29:
        uVar16 = (ulong)(puVar19[-1] == *puVar19);
        break;
      case 0x2a:
        uVar16 = (ulong)(*puVar19 <= puVar19[-1]);
        break;
      case 0x2b:
        uVar16 = (ulong)(*puVar19 < puVar19[-1]);
        break;
      case 0x2c:
        uVar16 = (ulong)(puVar19[-1] <= *puVar19);
        break;
      case 0x2d:
        uVar16 = (ulong)(puVar19[-1] < *puVar19);
        break;
      case 0x2e:
        uVar16 = (ulong)(puVar19[-1] != *puVar19);
        break;
      case 0x2f:
        local_68 = pbVar18 + (long)*(short *)(pbVar18 + 1) + 3;
        goto LAB_00112d78;
      default:
        uVar16 = (ulong)(uVar15 - 0x30);
        goto LAB_00112d74;
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
      case 0x5c:
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
        if (((uVar15 != 0x6f) && (puVar14 = puVar1, bVar8 != 0x6e)) &&
           (puVar14 = puVar2, bVar8 != 0x6d)) {
          puVar14 = (ulong *)(param_3 + (ulong)(uVar15 - 0x50) * 8);
        }
        goto LAB_00112d70;
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7a:
      case 0x7b:
      case 0x7c:
      case 0x7d:
      case 0x7e:
      case 0x7f:
      case 0x80:
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x84:
      case 0x85:
      case 0x86:
      case 0x87:
      case 0x88:
      case 0x89:
      case 0x8a:
      case 0x8b:
      case 0x8c:
      case 0x8d:
      case 0x8e:
      case 0x8f:
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = pbVar13;
        do {
          if (pbVar18 == pbVar6) {
            fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                    "truncated sleb128 expression");
            fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar7 = *pbVar18;
          pbVar13 = pbVar13 + 1;
          uVar17 = uVar16 & 0x3f;
          uVar16 = uVar16 + 7;
          uVar12 = ((ulong)bVar7 & 0x7f) << uVar17 | uVar12;
          pbVar18 = pbVar18 + 1;
        } while ((char)bVar7 < '\0');
        local_68 = pbVar13;
        uVar17 = -1L << (uVar16 & 0x3f);
        if (0x38 < (int)uVar16 - 7U || bVar7 < 0x40) {
          uVar17 = 0;
        }
        if (bVar8 < 0x8e) {
          if (((bVar8 != 0x6e) && (puVar14 = puVar5, bVar8 != 0x6f)) &&
             (puVar14 = puVar2, bVar8 != 0x8d)) goto LAB_00112eb0;
        }
        else if (bVar8 < 0x90) {
          puVar14 = puVar1;
          if ((bVar8 != 0x8e) && (puVar14 = puVar4, uVar15 != 0x8f)) {
LAB_00112eb0:
            if (0x1c < uVar10 - 0x70) {
              fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),"libunwind: %s - %s\n","getRegister",
                      "unsupported arm64 register");
              fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar14 = (ulong *)(param_3 + (ulong)(uVar10 - 0x70) * 8);
          }
        }
        else {
          puVar14 = puVar5;
          if ((bVar8 != 0x90) && (puVar14 = puVar3, bVar8 != 0x92)) goto LAB_00112eb0;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_00112d74;
      case 0x90:
        uVar10 = FUN_00112b2c(&local_68,pbVar6);
        puVar9 = PTR___sF_0012fcc8;
        if ((int)uVar10 < 0x1e) {
          if (((uVar10 != 0xfffffffe) && (puVar14 = puVar5, uVar10 != 0xffffffff)) &&
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_00113414;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_00113414:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),"libunwind: %s - %s\n","getRegister",
                      "unsupported arm64 register");
              fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar14 = (ulong *)(param_3 + (ulong)uVar10 * 8);
          }
        }
        else {
          puVar14 = puVar5;
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_00113414;
        }
LAB_00112d70:
        uVar16 = *puVar14;
        goto LAB_00112d74;
      case 0x91:
        fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_fbreg not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x92:
        uVar10 = FUN_00112b2c(&local_68,pbVar6);
        puVar9 = PTR___sF_0012fcc8;
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = local_68;
        pbVar13 = local_68;
        do {
          if (pbVar13 == pbVar6) {
            fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                    "truncated sleb128 expression");
            fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar8 = *pbVar13;
          pbVar18 = pbVar18 + 1;
          uVar17 = uVar16 & 0x3f;
          uVar16 = uVar16 + 7;
          uVar12 = ((ulong)bVar8 & 0x7f) << uVar17 | uVar12;
          pbVar13 = pbVar13 + 1;
        } while ((char)bVar8 < '\0');
        local_68 = pbVar18;
        uVar17 = -1L << (uVar16 & 0x3f);
        if (0x38 < (int)uVar16 - 7U || bVar8 < 0x40) {
          uVar17 = 0;
        }
        if ((int)uVar10 < 0x1e) {
          if (((uVar10 != 0xfffffffe) && (puVar14 = puVar5, uVar10 != 0xffffffff)) &&
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_0011343c;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_0011343c:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),"libunwind: %s - %s\n","getRegister",
                      "unsupported arm64 register");
              fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar14 = (ulong *)(param_3 + (ulong)uVar10 * 8);
          }
        }
        else {
          puVar14 = puVar5;
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_0011343c;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_00112d74;
      case 0x93:
        fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_piece not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x94:
        local_68 = pbVar18 + 2;
        puVar14 = (ulong *)*puVar19;
        bVar8 = pbVar18[1];
        if (bVar8 < 4) {
          if (bVar8 == 1) {
            *puVar19 = (ulong)(byte)*puVar14;
          }
          else {
            if (bVar8 != 2) {
LAB_00113614:
              fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),"libunwind: %s - %s\n",
                      "evaluateExpression","DW_OP_deref_size with bad size");
              fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *puVar19 = (ulong)(ushort)*puVar14;
          }
        }
        else {
          if (bVar8 != 4) {
            if (bVar8 != 8) goto LAB_00113614;
            goto LAB_0011316c;
          }
          *puVar19 = (ulong)(uint)*puVar14;
        }
        goto LAB_00112d78;
      }
      puVar19[-1] = uVar16;
      puVar19 = puVar19 + -1;
LAB_00112d78:
      pbVar18 = local_68;
    } while (local_68 < pbVar6);
    param_4 = *puVar19;
  }
  return param_4;
}


// ===== 001136b0  FUN_001136b0 =====

undefined8 FUN_001136b0(long param_1,ulong param_2,long *param_3,uint param_4)

{
  bool bVar1;
  byte bVar2;
  undefined *__src;
  ulong uVar3;
  undefined *__dest;
  long *plVar4;
  size_t __n;
  long lVar5;
  undefined1 auStack_6e8 [32];
  undefined8 local_6c8;
  long local_6b0;
  undefined4 uStack_6a8;
  long local_698;
  long local_690;
  undefined8 uStack_688;
  undefined1 auStack_680 [16];
  uint local_670;
  
  if (((param_4 == 0) ||
      (uVar3 = FUN_00113bd8(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],
                            param_3[2] + (ulong)param_4,&local_6b0,auStack_6e8), (uVar3 & 1) == 0))
     && ((param_3[4] == 0 ||
         (uVar3 = FUN_00113da0(*(undefined8 *)(param_1 + 8),param_2,param_3[4],(int)param_3[5],
                               &local_6b0,auStack_6e8), (uVar3 & 1) == 0)))) {
    lVar5 = *param_3;
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00134074);
    if (PTR_DAT_00134038 < PTR_DAT_00134040) {
      plVar4 = (long *)PTR_DAT_00134038;
      if (lVar5 == -1) {
        do {
          if (((ulong)plVar4[1] <= param_2) && (param_2 < (ulong)plVar4[2])) goto LAB_001137b8;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_00134040);
      }
      else {
        do {
          if (((*plVar4 == lVar5) && ((ulong)plVar4[1] <= param_2)) && (param_2 < (ulong)plVar4[2]))
          goto LAB_001137b8;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_00134040);
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00134074);
    goto LAB_00113800;
  }
LAB_00113820:
  bVar2 = 1;
LAB_00113824:
  lVar5 = *param_3;
  memset(auStack_680,0,0x618);
  uVar3 = FUN_00111814(*(undefined8 *)(param_1 + 8),&local_6b0,auStack_6e8,param_2,4,auStack_680);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x230) = uStack_688;
  *(long *)(param_1 + 0x228) = local_690;
  *(undefined8 *)(param_1 + 0x238) = local_6c8;
  bVar1 = (bool)(bVar2 ^ 1);
  *(ulong *)(param_1 + 0x240) = (ulong)local_670;
  *(undefined4 *)(param_1 + 0x250) = 0x3000000;
  *(long *)(param_1 + 0x220) = local_698;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x254) = uStack_6a8;
  if (param_4 != 0) {
    bVar1 = true;
  }
  *(long *)(param_1 + 600) = local_6b0;
  *(long *)(param_1 + 0x260) = lVar5;
  if (!bVar1) {
    if (param_3[4] == 0) {
      lVar5 = *param_3;
      pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_00134074);
      __src = PTR_DAT_00134038;
      if (PTR_DAT_00134048 <= PTR_DAT_00134040) {
        __n = (long)PTR_DAT_00134048 - (long)PTR_DAT_00134038;
        __dest = (undefined *)malloc(__n * 4);
        memcpy(__dest,__src,__n);
        if ((undefined8 *)__src != &DAT_001340b0) {
          free(__src);
        }
        PTR_DAT_00134048 = __dest + ((long)__n >> 3) * 0x20;
        PTR_DAT_00134040 = __dest + __n;
        PTR_DAT_00134038 = __dest;
      }
      *(long *)PTR_DAT_00134040 = lVar5;
      *(long *)((long)PTR_DAT_00134040 + 8) = local_698;
      *(long *)((long)PTR_DAT_00134040 + 0x18) = local_6b0;
      *(long *)((long)PTR_DAT_00134040 + 0x10) = local_690;
      PTR_DAT_00134040 = (undefined *)((long)PTR_DAT_00134040 + 0x20);
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00134074);
      return 1;
    }
    return 1;
  }
  return 1;
LAB_001137b8:
  lVar5 = plVar4[3];
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00134074);
  if ((lVar5 != 0) &&
     (uVar3 = FUN_00113bd8(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],lVar5,
                           &local_6b0,auStack_6e8), (uVar3 & 1) != 0)) {
    bVar2 = 0;
    goto LAB_00113824;
  }
LAB_00113800:
  uVar3 = FUN_00113bd8(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],0,&local_6b0,
                       auStack_6e8);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  goto LAB_00113820;
}


// ===== 00113984  FUN_00113984 =====

undefined8 FUN_00113984(ulong *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 local_70 [4];
  
  uVar12 = (ulong)(ushort)param_1[3];
  if (uVar12 != 0) {
    uVar6 = param_3[2];
    uVar13 = *param_1;
    if (uVar13 <= uVar6) {
      uVar5 = uVar12;
      piVar10 = (int *)param_1[2];
      do {
        if (((*piVar10 == 1) && (uVar1 = *(long *)(piVar10 + 4) + uVar13, uVar1 <= uVar6)) &&
           (uVar11 = *(ulong *)(piVar10 + 10), uVar6 < uVar11 + uVar1)) {
          puVar7 = (ulong *)param_3[1];
          uVar6 = uVar12 + 0xffffffff;
          *puVar7 = uVar1;
          puVar7[1] = uVar11;
          do {
            if (*(int *)(param_1[2] + (uVar6 & 0xffffffff) * 0x38) == 0x6474e550) {
              lVar8 = param_1[2] + (uVar6 & 0xffffffff) * 0x38;
              uVar2 = *param_3;
              lVar3 = param_3[1];
              lVar9 = *(long *)(lVar8 + 0x28);
              lVar8 = *(long *)(lVar8 + 0x10) + uVar13;
              *(long *)(lVar3 + 0x20) = lVar8;
              *(long *)(lVar3 + 0x28) = lVar9;
              uVar5 = FUN_00113ab8(uVar2,lVar8,lVar9 + lVar8,local_70);
              if ((uVar5 & 1) != 0) {
                lVar8 = param_3[1];
                *(undefined8 *)(lVar8 + 0x10) = local_70[0];
                *(undefined8 *)(lVar8 + 0x18) = 0xffffffffffffffff;
                return 1;
              }
            }
            uVar4 = (int)uVar12 - 1;
            uVar12 = (ulong)uVar4;
            uVar6 = uVar6 - 1;
          } while ((uVar4 & 0xffff) != 0);
          return 0;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 0xe;
      } while (uVar5 != 0);
    }
  }
  return 0;
}


// ===== 00113ab8  FUN_00113ab8 =====

undefined8 FUN_00113ab8(undefined8 param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte *local_28;
  
  puVar3 = PTR___sF_0012fcc8;
  if ((ulong)((long)param_3 - (long)param_2) < 4) {
    if (param_3 == param_2) {
      return 0;
    }
    fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),
            "libunwind: unsupported .eh_frame_hdr at %lx: need at least 4 bytes of data but only got %zd\n"
            ,param_2);
  }
  else {
    if (*param_2 == 1) {
      local_28 = param_2 + 4;
      bVar1 = param_2[2];
      bVar2 = param_2[1];
      *(byte *)(param_4 + 3) = param_2[3];
      uVar4 = FUN_001127a0(param_1,&local_28,param_3,bVar2,param_2);
      *param_4 = uVar4;
      if (bVar1 == 0xff) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_001127a0(param_1,&local_28,param_3,bVar1,param_2);
      }
      param_4[1] = uVar4;
      param_4[2] = local_28;
      return 1;
    }
    fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),
            "libunwind: unsupported .eh_frame_hdr version: %u at %lx\n",(ulong)(uint)*param_2,
            param_2);
  }
  fflush((FILE *)(puVar3 + 0x130));
  return 0;
}


// ===== 00113bd8  FUN_00113bd8 =====

undefined8
FUN_00113bd8(undefined8 param_1,ulong param_2,uint *param_3,long param_4,uint *param_5,
            undefined8 *param_6,long param_7)

{
  uint *puVar1;
  char cVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint *puVar7;
  ulong uVar8;
  uint *puVar9;
  uint *local_68;
  
  puVar9 = (uint *)(param_4 + (long)param_3);
  puVar1 = param_3;
  if (param_5 != (uint *)0x0) {
    puVar1 = param_5;
  }
  if (param_4 == -1) {
    puVar9 = (uint *)0xffffffffffffffff;
  }
  while( true ) {
    puVar3 = puVar1;
    if (puVar9 <= puVar3) {
      return 0;
    }
    local_68 = puVar3 + 1;
    uVar8 = (ulong)*puVar3;
    if (*puVar3 == 0xffffffff) {
      uVar8 = *(ulong *)(puVar3 + 1);
      local_68 = puVar3 + 3;
    }
    if (uVar8 == 0) break;
    puVar1 = (uint *)((long)local_68 + uVar8);
    if ((((*local_68 != 0) &&
         (puVar7 = (uint *)((long)local_68 - (ulong)*local_68), param_3 <= puVar7)) &&
        (puVar7 < puVar9)) && (lVar4 = FUN_00110948(param_1,puVar7,param_7), lVar4 == 0)) {
      local_68 = local_68 + 1;
      uVar8 = FUN_001127a0(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x18),0);
      lVar4 = FUN_001127a0(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x18) & 0xf,0);
      if ((uVar8 < param_2) && (param_2 <= lVar4 + uVar8)) {
        cVar2 = *(char *)(param_7 + 0x31);
        param_6[5] = 0;
        puVar9 = local_68;
        if (cVar2 != '\0') {
          lVar5 = FUN_00112b2c(&local_68,puVar1);
          puVar7 = local_68;
          puVar9 = (uint *)((long)local_68 + lVar5);
          if ((*(byte *)(param_7 + 0x19) != 0xff) &&
             (lVar5 = FUN_001127a0(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x19) & 0xf,0),
             lVar5 != 0)) {
            local_68 = puVar7;
            uVar6 = FUN_001127a0(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x19),0);
            param_6[5] = uVar6;
          }
        }
        param_6[2] = puVar9;
        param_6[3] = uVar8;
        *param_6 = puVar3;
        param_6[1] = (long)puVar1 - (long)puVar3;
        param_6[4] = lVar4 + uVar8;
        return 1;
      }
    }
  }
  return 0;
}


// ===== 00113da0  FUN_00113da0 =====

undefined8
FUN_00113da0(undefined8 param_1,ulong param_2,long param_3,ulong param_4,long param_5,
            undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long local_88;
  undefined1 auStack_80 [8];
  ulong local_78;
  long local_70;
  undefined1 local_68;
  
  lVar4 = param_3 + (param_4 & 0xffffffff);
  uVar1 = FUN_00113ab8(param_1,param_3,lVar4,auStack_80);
  if (((uVar1 & 1) != 0) && (local_78 != 0)) {
    lVar2 = FUN_00113f08(local_68);
    lVar7 = 0;
    do {
      if (local_78 < 2) {
        lVar8 = lVar7 * lVar2;
        break;
      }
      uVar6 = local_78 >> 1;
      lVar8 = (uVar6 + lVar7) * lVar2;
      local_88 = local_70 + lVar8;
      uVar1 = FUN_001127a0(param_1,&local_88,lVar4,local_68,param_3);
      uVar5 = local_78 - uVar6;
      local_78 = uVar6;
      if (uVar1 < param_2) {
        local_78 = uVar5;
        lVar7 = uVar6 + lVar7;
      }
    } while (uVar1 != param_2);
    local_88 = local_70 + lVar8;
    FUN_001127a0(param_1,&local_88,lVar4,local_68,param_3);
    uVar3 = FUN_001127a0(param_1,&local_88,lVar4,local_68,param_3);
    lVar4 = FUN_001107b8(param_1,uVar3,param_5,param_6,0);
    if (((lVar4 == 0) && (*(ulong *)(param_5 + 0x18) <= param_2)) &&
       (param_2 < *(ulong *)(param_5 + 0x20))) {
      return 1;
    }
  }
  return 0;
}


// ===== 00113f08  FUN_00113f08 =====

undefined8 FUN_00113f08(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_0012fcc8;
  param_1 = param_1 & 0xf;
  if (param_1 < 9) {
    if (param_1 < 3) {
      if (param_1 == 2) {
        return 4;
      }
      if (param_1 == 1) {
LAB_00113fd0:
        fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
                "Can\'t binary search on variable length encoded data.");
        fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else {
      if (param_1 == 3) {
        return 8;
      }
      if (param_1 == 4) {
        return 0x10;
      }
    }
  }
  else if (param_1 < 0xb) {
    if (param_1 == 10) {
      return 4;
    }
    if (param_1 == 9) goto LAB_00113fd0;
  }
  else {
    if (param_1 == 0xc) {
      return 0x10;
    }
    if (param_1 == 0xb) {
      return 8;
    }
  }
  fprintf((FILE *)(PTR___sF_0012fcc8 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
          "Unknown DWARF encoding for search table.");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00114004  FUN_00114004 =====

char * FUN_00114004(int param_1)

{
  if (param_1 + 2U < 0x62) {
    return &DAT_001084d4 + *(int *)(&DAT_001084d4 + (ulong)(param_1 + 2U) * 4);
  }
  return "unknown register";
}


// ===== 00114034  FUN_00114034 =====

undefined1  [16] FUN_00114034(undefined1 (*param_1) [16])

{
  return *param_1;
}


// ===== 001140c4  facebook::react::RNCSliderMeasurementsManager::measure =====

/* facebook::react::RNCSliderMeasurementsManager::measure(int, facebook::react::LayoutConstraints)
   const */

undefined4 __thiscall
facebook::react::RNCSliderMeasurementsManager::measure
          (RNCSliderMeasurementsManager *this,undefined4 param_1,float *param_3)

{
  RNCSliderMeasurementsManager RVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  byte local_88;
  char acStack_87 [7];
  char cStack_80;
  char acStack_7f [7];
  undefined1 local_78;
  undefined7 uStack_77;
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  std::__ndk1::mutex::lock();
  uVar8 = *(undefined4 *)(this + 0x3c);
  RVar1 = this[0x38];
  std::__ndk1::mutex::unlock();
  if (RVar1 == (RNCSliderMeasurementsManager)0x0) {
    local_88 = 0x1e;
    acStack_87[0] = s_FabricUIManager_00107833[0];
    acStack_87[1] = s_FabricUIManager_00107833[1];
    acStack_87[2] = s_FabricUIManager_00107833[2];
    acStack_87[3] = s_FabricUIManager_00107833[3];
    acStack_87[4] = s_FabricUIManager_00107833[4];
    acStack_87[5] = s_FabricUIManager_00107833[5];
    acStack_87[6] = s_FabricUIManager_00107833[6];
    cStack_80 = s_FabricUIManager_00107833[7];
    acStack_7f[0] = s_FabricUIManager_00107833[8];
    acStack_7f[1] = s_FabricUIManager_00107833[9];
    acStack_7f[2] = s_FabricUIManager_00107833[10];
    acStack_7f[3] = s_FabricUIManager_00107833[0xb];
    acStack_7f[4] = s_FabricUIManager_00107833[0xc];
    acStack_7f[5] = s_FabricUIManager_00107833[0xd];
    acStack_7f[6] = s_FabricUIManager_00107833[0xe];
    local_78 = 0;
                    /* try { // try from 00114140 to 0011414b has its CatchHandler @ 001142c4 */
    FUN_00114314(&local_70,*(undefined8 *)this,&local_88);
    if ((local_88 & 1) != 0) {
      operator_delete((void *)CONCAT71(uStack_77,local_78));
    }
    if (((DAT_001348b8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_001348b8), iVar4 != 0)) {
                    /* try { // try from 00114274 to 0011428b has its CatchHandler @ 001142a4 */
      facebook::jni::findClassStatic("com/facebook/react/fabric/FabricUIManager");
      DAT_001348b0 = FUN_001143fc(&local_88);
      __cxa_guard_release(&DAT_001348b8);
    }
    fVar10 = *param_3;
    fVar9 = param_3[1];
    fVar12 = param_3[2];
    fVar11 = param_3[3];
                    /* try { // try from 00114174 to 00114183 has its CatchHandler @ 001142bc */
    facebook::jni::make_jstring("RNCSlider");
    lVar3 = local_70;
    uVar6 = CONCAT71(acStack_87,local_88);
                    /* try { // try from 0011418c to 001141cb has its CatchHandler @ 001142e4 */
    uVar5 = facebook::jni::Environment::current();
    uVar6 = FUN_00114b78((double)fVar10,(double)fVar12,(double)fVar9,(double)fVar11,uVar5,lVar3,
                         DAT_001348b0,param_1,uVar6,0,0,0);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 001141cc to 001141d3 has its CatchHandler @ 001142b8 */
    std::__ndk1::mutex::lock();
    this[0x38] = (RNCSliderMeasurementsManager)0x1;
    uVar8 = (undefined4)((ulong)uVar6 >> 0x20);
    *(undefined4 *)(this + 0x3c) = uVar8;
    *(int *)(this + 0x40) = (int)uVar6;
    std::__ndk1::mutex::unlock();
    lVar3 = CONCAT71(acStack_87,local_88);
    if (lVar3 != 0) {
                    /* try { // try from 001141f4 to 00114207 has its CatchHandler @ 001142e0 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,lVar3);
    }
    if (local_70 != 0) {
                    /* try { // try from 00114210 to 00114223 has its CatchHandler @ 001142dc */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb0))(plVar7,local_70);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}


// ===== 00114314  FUN_00114314 =====

void FUN_00114314(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  std::__ndk1::__shared_mutex_base::lock_shared();
                    /* try { // try from 00114350 to 00114383 has its CatchHandler @ 001143d4 */
  lVar2 = FUN_00114554(param_2 + 0x90,param_3);
  if (lVar2 == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar4) {
                    /* try { // try from 001143c4 to 001143cf has its CatchHandler @ 001143d4 */
                    /* WARNING: Subroutine does not return */
      FUN_00114504("unordered_map::at: key not found");
    }
  }
  else {
    uVar5 = **(undefined8 **)(lVar2 + 0x28);
    plVar3 = (long *)facebook::jni::Environment::current();
    uVar5 = (**(code **)(*plVar3 + 0xa8))(plVar3,uVar5);
    facebook::jni::throwPendingJniExceptionAsCppException();
    *param_1 = uVar5;
                    /* try { // try from 00114388 to 0011438f has its CatchHandler @ 001143d0 */
    std::__ndk1::__shared_mutex_base::unlock_shared();
    if (*(long *)(lVar1 + 0x28) == lVar4) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001143fc  FUN_001143fc =====

long FUN_001143fc(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)facebook::jni::Environment::current();
  lVar2 = (**(code **)(*plVar1 + 0x108))(plVar1,*param_1,"measure",PTR_kDescriptor_0012fb30);
  facebook::jni::throwCppExceptionIf(lVar2 == 0);
  return lVar2;
}


// ===== 00114450  facebook::jni::base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

/* facebook::jni::base_owned_ref<facebook::jni::JString,
   facebook::jni::LocalReferenceAllocator>::~base_owned_ref() */

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator> *this)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)this;
  if (lVar2 != 0) {
                    /* try { // try from 00114468 to 0011447b has its CatchHandler @ 0011448c */
    plVar1 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb8))(plVar1,lVar2);
  }
  *(undefined8 *)this = 0;
  return;
}


// ===== 00114490  FUN_00114490 =====

void FUN_00114490(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
                    /* try { // try from 001144a8 to 001144bb has its CatchHandler @ 001144cc */
    plVar1 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb0))(plVar1,lVar2);
  }
  *param_1 = 0;
  return;
}


// ===== 001144d0  FUN_001144d0 =====

void FUN_001144d0(void)

{
  __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 001144e0  FUN_001144e0 =====

void FUN_001144e0(long param_1)

{
  if (*(char *)(param_1 + 8) != '\0') {
                    /* try { // try from 001144f4 to 001144f7 has its CatchHandler @ 00114500 */
    std::__ndk1::__shared_mutex_base::unlock_shared();
  }
  return;
}


// ===== 00114504  FUN_00114504 =====

void FUN_00114504(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 00114520 to 00114527 has its CatchHandler @ 00114540 */
  FUN_00114b48(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_typeinfo_0012fb40,PTR__out_of_range_0012fb38);
}


// ===== 00114554  FUN_00114554 =====

long * FUN_00114554(long *param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  undefined1 uStack_69;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar8 = *(ulong *)(param_2 + 8);
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
    uVar8 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 001145a0 to 001145a7 has its CatchHandler @ 0011470c */
  uVar8 = FUN_00114710(&uStack_69,pbVar3,uVar8);
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar15 = NEON_cnt(uVar11,1);
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar12 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar8;
    }
    else {
      uVar13 = uVar8;
      if (uVar11 <= uVar8) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = uVar8 / uVar11;
        }
        uVar13 = uVar8 - uVar13 * uVar11;
      }
    }
    plVar9 = *(long **)(*param_1 + uVar13 * 8);
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)*plVar9;
      if (plVar9 != (long *)0x0) {
        pbVar3 = param_2 + 1;
        sVar1 = (ulong)(*param_2 >> 1);
        if ((*param_2 & 1) != 0) {
          pbVar3 = *(byte **)(param_2 + 0x10);
          sVar1 = *(size_t *)(param_2 + 8);
        }
        do {
          uVar10 = plVar9[1];
          if (uVar10 == uVar8) {
            bVar4 = *(byte *)(plVar9 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar9[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) break;
                uVar10 = 0;
                while (*(byte *)((long)plVar9 + uVar10 + 0x11) == pbVar3[uVar10]) {
                  uVar10 = uVar10 + 1;
                  if (bVar4 >> 1 == uVar10) goto LAB_001146d4;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar9[4],pbVar3,plVar9[3]);
                if (iVar7 == 0) break;
              }
            }
          }
          else {
            if (uVar12 < 2) {
              uVar10 = uVar10 & uVar11 - 1;
            }
            else if (uVar11 <= uVar10) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar10 / uVar11;
              }
              uVar10 = uVar10 - uVar5 * uVar11;
            }
            if (uVar10 != uVar13) goto LAB_001146d0;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      goto LAB_001146d4;
    }
  }
LAB_001146d0:
  plVar9 = (long *)0x0;
LAB_001146d4:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00114710  FUN_00114710 =====

ulong FUN_00114710(undefined8 param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  
  if (param_3 < 0x21) {
    if (param_3 < 0x11) {
      if (8 < param_3) {
        uVar12 = *(ulong *)((long)param_2 + (param_3 - 8));
        uVar13 = uVar12 + param_3;
        uVar13 = uVar13 >> (param_3 & 0x3f) | uVar13 << 0x40 - (param_3 & 0x3f);
        uVar14 = (uVar13 ^ *param_2) * -0x622015f714c7d297;
        uVar13 = (uVar13 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
        return (uVar13 ^ uVar13 >> 0x2f) * -0x622015f714c7d297 ^ uVar12;
      }
      if (param_3 < 4) {
        if (param_3 == 0) {
          return 0x9ae16a3b2f90404f;
        }
        uVar13 = (param_3 | (ulong)*(byte *)((long)param_2 + (param_3 - 1)) << 2) *
                 -0x36b62838af619aa9 ^
                 (ulong)CONCAT11(*(undefined1 *)((long)param_2 + (param_3 >> 1)),(char)*param_2) *
                 -0x651e95c4d06fbfb1;
        return (uVar13 ^ uVar13 >> 0x2f) * -0x651e95c4d06fbfb1;
      }
      uVar12 = (ulong)*(uint *)((long)param_2 + (param_3 - 4));
      uVar13 = ((uint)((int)*param_2 << 3) + param_3 ^ uVar12) * -0x622015f714c7d297;
      uVar13 = uVar12 ^ uVar13 >> 0x2f ^ uVar13;
    }
    else {
      lVar19 = *(long *)((long)param_2 + (param_3 - 8));
      uVar13 = lVar19 * -0x651e95c4d06fbfb1;
      uVar14 = *param_2 * -0x4b6d499041670d8d - param_2[1];
      uVar12 = param_2[1] ^ 0xc949d7c7509e6557;
      uVar12 = *param_2 * -0x4b6d499041670d8d + param_3 + (uVar12 >> 0x14 | uVar12 << 0x2c) +
               lVar19 * 0x651e95c4d06fbfb1;
      uVar13 = ((uVar13 >> 0x1e | uVar13 << 0x22) + (uVar14 >> 0x2b | uVar14 * 0x200000) +
                *(long *)((long)param_2 + (param_3 - 0x10)) * -0x3c5a37a36834ced9 ^ uVar12) *
               -0x622015f714c7d297;
      uVar13 = uVar12 ^ uVar13 >> 0x2f ^ uVar13;
    }
    lVar15 = -0x622015f714c7d297;
    uVar13 = uVar13 * -0x622015f714c7d297;
  }
  else {
    if (0x40 < param_3) {
      lVar4 = *(long *)((long)param_2 + (param_3 - 0x38));
      lVar16 = *(long *)((long)param_2 + (param_3 - 0x30));
      uVar14 = *(ulong *)((long)param_2 + (param_3 - 0x18));
      lVar11 = *(long *)((long)param_2 + (param_3 - 0x28));
      lVar15 = *(long *)((long)param_2 + (param_3 - 0x10));
      lVar9 = *(long *)((long)param_2 + (param_3 - 8));
      uVar13 = (uVar14 ^ lVar16 + param_3) * -0x622015f714c7d297;
      lVar19 = *(long *)((long)param_2 + (param_3 - 0x40)) + param_3;
      puVar10 = param_2 + 4;
      uVar13 = (uVar14 ^ uVar13 >> 0x2f ^ uVar13) * -0x622015f714c7d297;
      uVar21 = (uVar13 ^ uVar13 >> 0x2f) * -0x622015f714c7d297;
      uVar13 = lVar4 + lVar15;
      uVar12 = lVar16 + lVar4 + lVar19;
      lVar4 = uVar13 + *(long *)((long)param_2 + (param_3 - 0x20)) + -0x4b6d499041670d8d;
      lVar16 = *param_2 + lVar11 * -0x4b6d499041670d8d;
      uVar14 = uVar14 + lVar15 + lVar4;
      uVar18 = uVar12 + lVar11;
      uVar3 = lVar4 + lVar11 + lVar9;
      uVar20 = lVar19 + lVar11 + uVar21;
      uVar12 = (uVar12 >> 0x2c | uVar12 * 0x100000) + lVar19 + (uVar20 >> 0x15 | uVar20 << 0x2b);
      uVar20 = uVar14 + lVar9;
      uVar14 = (uVar14 >> 0x2c | uVar14 * 0x100000) + lVar4 + (uVar3 >> 0x15 | uVar3 << 0x2b);
      lVar19 = -(param_3 - 1 & 0xffffffffffffffc0);
      do {
        puVar5 = puVar10 + -3;
        lVar15 = puVar10[-4] + uVar12 * -0x4b6d499041670d8d;
        lVar19 = lVar19 + 0x40;
        uVar3 = lVar16 + uVar18 + uVar13 + *puVar5;
        puVar6 = puVar10 + 1;
        lVar16 = (uVar21 + uVar20 >> 0x21 | (uVar21 + uVar20) * 0x80000000) * -0x4b6d499041670d8d;
        puVar1 = puVar10 + 2;
        puVar7 = puVar10 + 3;
        uVar13 = uVar13 + uVar12 + *puVar1;
        lVar4 = lVar16 + uVar14 + *puVar10;
        uVar13 = *puVar6 + uVar18 + (uVar13 >> 0x2a | uVar13 * 0x400000) * -0x4b6d499041670d8d;
        puVar2 = puVar10 + -2;
        puVar8 = puVar10 + -1;
        puVar10 = puVar10 + 8;
        uVar12 = lVar15 + *puVar5 + *puVar2;
        uVar18 = uVar12 + *puVar8;
        uVar21 = (uVar3 >> 0x25 | uVar3 * 0x8000000) * -0x4b6d499041670d8d ^ uVar14;
        uVar14 = *puVar6 + *puVar1 + lVar4;
        uVar3 = lVar15 + uVar20 + *puVar8 + uVar21;
        uVar17 = uVar13 + *puVar2 + lVar4 + *puVar7;
        uVar20 = uVar14 + *puVar7;
        uVar12 = (uVar12 >> 0x2c | uVar12 * 0x100000) + lVar15 + (uVar3 >> 0x15 | uVar3 << 0x2b);
        uVar14 = (uVar14 >> 0x2c | uVar14 * 0x100000) + lVar4 + (uVar17 >> 0x15 | uVar17 << 0x2b);
      } while (lVar19 != 0);
      uVar18 = (uVar20 ^ uVar18) * -0x622015f714c7d297;
      uVar12 = (uVar14 ^ uVar12) * -0x622015f714c7d297;
      uVar18 = (uVar20 ^ uVar18 >> 0x2f ^ uVar18) * -0x622015f714c7d297;
      uVar12 = (uVar14 ^ uVar12 >> 0x2f ^ uVar12) * -0x622015f714c7d297;
      uVar12 = lVar16 + (uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297;
      uVar13 = (uVar12 ^ uVar21 + (uVar13 ^ uVar13 >> 0x2f) * -0x4b6d499041670d8d +
                         (uVar18 ^ uVar18 >> 0x2f) * -0x622015f714c7d297) * -0x622015f714c7d297;
      uVar13 = (uVar12 ^ uVar13 >> 0x2f ^ uVar13) * -0x622015f714c7d297;
      return (uVar13 ^ uVar13 >> 0x2f) * -0x622015f714c7d297;
    }
    lVar4 = *(long *)((long)param_2 + (param_3 - 0x10));
    uVar17 = *param_2 + (lVar4 + param_3) * -0x3c5a37a36834ced9;
    uVar21 = param_2[3];
    uVar13 = *(long *)((long)param_2 + (param_3 - 0x20)) + param_2[2];
    lVar19 = *(long *)((long)param_2 + (param_3 - 8)) + uVar21;
    uVar12 = *(long *)((long)param_2 + (param_3 - 0x18)) + uVar13;
    uVar14 = uVar17 + param_2[1];
    uVar18 = uVar14 + param_2[2];
    uVar3 = uVar12 + lVar4;
    uVar20 = lVar19 + uVar13;
    lVar4 = (uVar14 >> 7 | uVar14 << 0x39) + (uVar17 >> 0x25 | uVar17 * 0x8000000) +
            (uVar17 + uVar21 >> 0x34 | (uVar17 + uVar21) * 0x1000) +
            (uVar18 >> 0x1f | uVar18 << 0x21);
    lVar15 = -0x651e95c4d06fbfb1;
    uVar13 = (uVar3 + lVar19 + lVar4) * -0x3c5a37a36834ced9 +
             (uVar18 + uVar21 + (uVar13 >> 0x25 | uVar13 * 0x8000000) +
                       (uVar12 >> 7 | uVar12 << 0x39) + (uVar20 >> 0x34 | uVar20 * 0x1000) +
                       (uVar3 >> 0x1f | uVar3 << 0x21)) * -0x651e95c4d06fbfb1;
    uVar13 = lVar4 + (uVar13 ^ uVar13 >> 0x2f) * -0x3c5a37a36834ced9;
  }
  return (uVar13 ^ uVar13 >> 0x2f) * lVar15;
}


// ===== 00114b48  FUN_00114b48 =====

void FUN_00114b48(logic_error *param_1,char *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  *(undefined **)param_1 = PTR_vtable_0012fb48 + 0x10;
  return;
}


// ===== 00114b78  FUN_00114b78 =====

void FUN_00114b78(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
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
  
  puStack_60 = auStack_a0;
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffd8;
  local_98 = param_4;
  uStack_90 = param_5;
  local_88 = param_6;
  uStack_80 = param_7;
  local_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  (**(code **)(*param_1 + 0x1a8))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00114c20  FUN_00114c20 =====

long FUN_00114c20(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_001348c0 == '\0') {
    do {
      lVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = lVar3 + param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return lVar3;
  }
  lVar3 = *param_2;
  *param_2 = lVar3 + param_1;
  return lVar3;
}


// ===== 00114c50  _INIT_0 =====

void _INIT_0(void)

{
  uint uVar1;
  int iVar2;
  char acStack_6c [92];
  
  uVar1 = getauxval(0x10);
  if ((uVar1 >> 8 & 1) == 0) {
    DAT_001348c0 = 0;
    return;
  }
  iVar2 = __system_property_get("ro.arch",acStack_6c);
  if (0 < iVar2) {
    iVar2 = strncmp(acStack_6c,"exynos9810",10);
    DAT_001348c0 = iVar2 != 0;
    return;
  }
  DAT_001348c0 = 1;
  return;
}


// ===== 00114ce8  FUN_00114ce8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00114ce8(ulong param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = (uint)param_1;
  if (((uint)(param_1 >> 0x3e) & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(ulong *)(param_2 + 0x10);
  }
  if ((uVar3 >> 7 & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x400;
  }
  uVar2 = (uint)uVar4;
  if ((uVar3 >> 4 & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x8000;
  }
  if ((uVar3 >> 0x1b & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 2;
  }
  if ((uVar2 >> 7 & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 6;
  }
  if ((~uVar3 & 0xc0000) == 0) {
    DAT_001348c8 = DAT_001348c8 | 0x20;
  }
  if ((uVar3 >> 0x14 & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x10;
  }
  if ((uVar3 >> 0x17 & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 8;
  }
  if ((uVar3 >> 9 & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x10100;
  }
  if ((uVar3 >> 0x18 & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x20000;
  }
  if ((uVar3 >> 0xc & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x40;
  }
  if ((uVar3 >> 0x1a & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x800000;
  }
  if ((uVar3 >> 3 & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x4000;
  }
  if ((uVar3 >> 5 & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x800;
  }
  if ((uVar3 >> 6 & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x1000;
  }
  if ((uVar3 >> 0xd & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x100000;
  }
  if ((uVar3 >> 0xe & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x200000;
  }
  if ((uVar3 >> 0x1d & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x400000000000;
  }
  if ((uVar3 >> 0x1c & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x2000000000000;
  }
  if ((uVar2 >> 0x12 & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x180000000000;
  }
  if ((uVar2 >> 0x16 & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x380000000000;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x2000000000;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x6000000000;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x8000000000;
  }
  if ((uVar2 >> 5 & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x10000000000;
  }
  if ((uVar2 >> 6 & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x20000000000;
  }
  if ((uVar4 & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x80000;
  }
  if ((uVar3 >> 8 & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x80;
  }
  if ((uVar2 >> 0x10 & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 1;
  }
  if ((uVar2 >> 0xd & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x4000000;
  }
  if ((uVar4 >> 0x20 & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x10000000;
  }
  if ((uVar4 >> 0x21 & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x100000000;
  }
  if ((uVar2 >> 0xf & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x2000000;
  }
  if ((uVar2 >> 8 & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x1000000;
  }
  if ((uVar2 >> 9 & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x200000000;
  }
  if ((uVar2 >> 10 & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x400000000;
  }
  if ((uVar2 >> 0xb & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x800000000;
  }
  if ((uVar2 >> 0x11 & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x4000000000000;
  }
  if ((uVar2 >> 0x15 & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x20000000;
  }
  if ((int)uVar2 < 0) {
    DAT_001348c8 = DAT_001348c8 | 0x40000000000000;
  }
  if ((uVar2 >> 0x17 & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x40000000000;
  }
  if ((uVar2 >> 0x18 & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x100000000000000;
  }
  if ((uVar2 >> 0x19 & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x80000000000000;
  }
  if ((uVar4 >> 0x2b & 1) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x800000000000000;
  }
  if ((uVar3 >> 0xb & 1) == 0) {
    if ((param_1 & 0x201) != 0) {
      DAT_001348c8 = DAT_001348c8 | 0x300;
    }
    if ((uVar4 & 1) != 0 || (param_1 & 0x10000) != 0) {
      DAT_001348c8 = DAT_001348c8 | 0x40000;
    }
    if ((param_1 & 0x4008000) != 0) {
      DAT_001348c8 = DAT_001348c8 | 0x400000;
    }
    if ((uVar4 & 0x100004000) != 0) {
      DAT_001348c8 = DAT_001348c8 | 0x8000000;
    }
    uVar5 = DAT_001348c8 | (ulong)(uVar2 << 0x13) & 0x80000000;
    if ((uVar4 & 2) != 0 && (param_1 & 0x400000) != 0) {
      uVar5 = uVar5 | 0x1000000000;
    }
    uVar5 = uVar5 | (param_1 & 0x20000) >> 4;
    goto LAB_00114e50;
  }
  uVar4 = id_aa64pfr1_el1;
  if ((uVar4 & 0xf00) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x80000000000;
  }
  if ((uVar4 & 0xf0) == 0x10) {
    DAT_001348c8 = DAT_001348c8 | 0x1000000000000;
    if ((uVar4 & 0xf000000) != 0x2000000) goto LAB_00115140;
LAB_00115194:
    DAT_001348c8 = DAT_001348c8 | 0x200000000000000;
    uVar4 = id_aa64pfr0_el1;
    uVar3 = (uint)uVar4;
  }
  else {
    if ((uVar4 & 0xf000000) == 0x2000000) goto LAB_00115194;
LAB_00115140:
    uVar4 = id_aa64pfr0_el1;
    uVar3 = (uint)uVar4;
  }
  if ((~uVar3 & 0xf0000) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x300;
  }
  if ((uVar4 & 0xf00000000) != 0) {
    uVar4 = UnkSytemRegRead(3,0,0,4,4);
    if ((uVar4 & 0xf) == 1) {
      DAT_001348c8 = DAT_001348c8 | 0x1000000000;
    }
    else if ((uVar4 & 0xf) == 0) {
      DAT_001348c8 = DAT_001348c8 | 0x40000000;
    }
    if ((uVar4 & 0xf00000) != 0) {
      DAT_001348c8 = DAT_001348c8 | 0x80000000;
    }
  }
  uVar4 = id_aa64isar0_el1;
  if ((uVar4 & 0xf00000000) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x2000;
  }
  uVar4 = id_aa64isar1_el1;
  uVar5 = uVar4 >> 0x14 & 0xf;
  if ((uVar4 & 0xf) != 0) {
    DAT_001348c8 = DAT_001348c8 | 0x40000;
  }
  if (uVar5 != 0) {
    if (uVar5 == 3) {
      DAT_001348c8 = DAT_001348c8 | 0x400000000400000;
    }
    else {
      DAT_001348c8 = DAT_001348c8 | 0x400000;
    }
  }
  uVar5 = DAT_001348c8 | 0x800000000000;
  if ((uVar4 & 0xf0000000000) != 0x20000000000) {
    uVar5 = DAT_001348c8;
  }
  if ((uVar4 & 0xf00000000000) != 0) {
    uVar5 = uVar5 | 0x8000000;
  }
  if (uVar4 >> 0x3c != 0) {
    if (uVar4 >> 0x3d == 0) {
      DAT_001348c8 = uVar5 | 0x8008000000000000;
      return;
    }
    uVar1 = 0x38000000000000;
    if (uVar4 >> 0x3c < 3) {
      uVar1 = 0x18000000000000;
    }
    DAT_001348c8 = uVar5 | uVar1 | 0x8000000000000000;
    return;
  }
LAB_00114e50:
  DAT_001348c8 = uVar5 | 0x8000000000000000;
  return;
}


// ===== 00115284  _INIT_1 =====

void _INIT_1(void)

{
  int iVar1;
  ulong uVar2;
  char local_70 [8];
  ulong uStack_68;
  undefined8 local_60;
  
  if (DAT_001348c8 != 0) {
    return;
  }
  iVar1 = __system_property_get("ro.arch",local_70);
  if ((iVar1 < 1) || (iVar1 = strncmp(local_70,"exynos9810",10), iVar1 != 0)) {
    uVar2 = getauxval(0x10);
    local_60 = getauxval(0x1a);
    local_70[0] = '\x18';
    local_70[1] = '\0';
    local_70[2] = '\0';
    local_70[3] = '\0';
    local_70[4] = '\0';
    local_70[5] = '\0';
    local_70[6] = '\0';
    local_70[7] = '\0';
    uStack_68 = uVar2;
    FUN_00114ce8(uVar2 | 0x4000000000000000,local_70);
  }
  return;
}


// ===== 00115310  FUN_00115310 =====

long FUN_00115310(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_001348c0 == '\0') {
    do {
      lVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = lVar3 + param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return lVar3;
  }
  LOAcquire();
  lVar3 = *param_2;
  *param_2 = lVar3 + param_1;
  LORelease();
  return lVar3;
}


// ===== 00115340  facebook::react::RNCSliderShadowNode::setSliderMeasurementsManager =====

/* facebook::react::RNCSliderShadowNode::setSliderMeasurementsManager(std::__ndk1::shared_ptr<facebook::react::RNCSliderMeasurementsManager>
   const&) */

void __thiscall
facebook::react::RNCSliderShadowNode::setSliderMeasurementsManager
          (RNCSliderShadowNode *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = *(undefined8 *)param_1;
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    FUN_00114c20(1,lVar2 + 8);
  }
  plVar3 = *(long **)(this + 0x3f0);
  *(undefined8 *)(this + 1000) = uVar1;
  *(long *)(this + 0x3f0) = lVar2;
  if ((plVar3 != (long *)0x0) && (lVar2 = FUN_00115310(0xffffffffffffffff,plVar3 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001153bc  facebook::react::RNCSliderShadowNode::measureContent =====

/* facebook::react::RNCSliderShadowNode::measureContent(facebook::react::LayoutContext const&,
   facebook::react::LayoutConstraints const&) const */

void __thiscall
facebook::react::RNCSliderShadowNode::measureContent
          (RNCSliderShadowNode *this,LayoutContext *param_1,LayoutConstraints *param_2)

{
  long lVar1;
  undefined4 uVar2;
  RNCSliderMeasurementsManager *pRVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pRVar3 = *(RNCSliderMeasurementsManager **)(this + 1000);
  uVar2 = facebook::react::ShadowNode::getSurfaceId();
  uStack_48 = *(undefined8 *)(param_2 + 8);
  local_50 = *(undefined8 *)param_2;
  local_40 = *(undefined4 *)(param_2 + 0x10);
  RNCSliderMeasurementsManager::measure(pRVar3,uVar2,&local_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00115430  FUN_00115430 =====

void FUN_00115430(NativeState *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  plVar3 = *(long **)(param_1 + 0x3f0);
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00115310(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pvVar4 = *(void **)(param_1 + 0x3c8);
  *(undefined **)param_1 = PTR_vtable_0012fb50 + 0x10;
  if (pvVar4 != (void *)0x0) {
    pvVar5 = *(void **)(param_1 + 0x3d0);
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00115310(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = *(void **)(param_1 + 0x3c8);
    }
    *(void **)(param_1 + 0x3d0) = pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = *(void **)(param_1 + 0x398);
  if (pvVar4 != (void *)0x0) {
    *(void **)(param_1 + 0x3a0) = pvVar4;
    operator_delete(pvVar4);
  }
  FUN_001156b0(param_1 + 0x118);
  *(undefined **)param_1 = PTR_vtable_0012fb58 + 0x10;
  if (*(long *)(param_1 + 0x60) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = *(long **)(param_1 + 0x48);
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00115310(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = *(long **)(param_1 + 0x30);
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00115310(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = *(long **)(param_1 + 0x20);
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00115310(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = *(long **)(param_1 + 0x10);
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00115310(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  facebook::jsi::NativeState::~NativeState(param_1);
  return;
}


// ===== 001155f4  FUN_001155f4 =====

void FUN_001155f4(void *param_1)

{
  FUN_00115430();
  operator_delete(param_1);
  return;
}


// ===== 00115618  FUN_00115618 =====

void FUN_00115618(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  facebook::react::LayoutableShadowNode::getLayoutMetrics();
  facebook::react::BaseViewProps::resolveTransform(*(LayoutMetrics **)(param_1 + 8));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00115680  FUN_00115680 =====

bool FUN_00115680(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 00115698  FUN_00115698 =====

bool FUN_00115698(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 001156b0  FUN_001156b0 =====

void FUN_001156b0(long param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    if ((void *)puVar2[3] != (void *)0x0) {
      operator_delete((void *)puVar2[3]);
    }
    pvVar1 = (void *)*puVar2;
    if (pvVar1 != (void *)0x0) {
      puVar2[1] = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(puVar2);
  }
  pvVar1 = *(void **)(param_1 + 0xb8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0xc0) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0xa0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0xa8) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x88);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x90) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x70);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x78) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00115744  facebook::react::RNCSlider_ModuleProvider =====

/* facebook::react::RNCSlider_ModuleProvider(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   facebook::react::JavaTurboModule::InitParams const&) */

void facebook::react::RNCSlider_ModuleProvider(basic_string *param_1,InitParams *param_2)

{
  undefined8 *in_x8;
  
  *in_x8 = 0;
  in_x8[1] = 0;
  return;
}


// ===== 0011574c  facebook::react::RNCSlider_registerComponentDescriptorsFromCodegen =====

/* facebook::react::RNCSlider_registerComponentDescriptorsFromCodegen(std::__ndk1::shared_ptr<facebook::react::ComponentDescriptorProviderRegistry
   const>) */

void facebook::react::RNCSlider_registerComponentDescriptorsFromCodegen(void)

{
  return;
}


// ===== 00115750  facebook::react::RNCSliderEventEmitter::onChange =====

/* facebook::react::RNCSliderEventEmitter::onChange(facebook::react::RNCSliderEventEmitter::OnChange)
   const */

void __thiscall
facebook::react::RNCSliderEventEmitter::onChange(RNCSliderEventEmitter *this,undefined8 param_2)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78 [16];
  void *local_68;
  undefined **local_60;
  undefined8 uStack_58;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78[0] = 0xc;
  local_78[7] = 0;
  local_78[1] = 99;
  local_78[2] = 0x68;
  local_78[3] = 0x61;
  local_78[4] = 0x6e;
  local_78[5] = 0x67;
  local_78[6] = 0x65;
  local_60 = &PTR_FUN_0012f200;
                    /* try { // try from 001157a0 to 001157af has its CatchHandler @ 0011580c */
  uStack_58 = param_2;
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(this,local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_001157dc;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_001157dc:
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011586c  facebook::react::RNCSliderEventEmitter::onRNCSliderSlidingStart =====

/* facebook::react::RNCSliderEventEmitter::onRNCSliderSlidingStart(facebook::react::RNCSliderEventEmitter::OnRNCSliderSlidingStart)
   const */

void __thiscall
facebook::react::RNCSliderEventEmitter::onRNCSliderSlidingStart
          (RNCSliderEventEmitter *this,undefined8 param_2)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  char acStack_6f [5];
  undefined2 uStack_6a;
  char cStack_68;
  char acStack_67 [5];
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined **local_60;
  undefined8 uStack_58;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x2a;
  uStack_62 = 0;
  acStack_6f = (char  [5])s_rNCSliderSlidingStart_00107f85._8_5_;
  local_77 = (char  [8])s_rNCSliderSlidingStart_00107f85._0_8_;
  uStack_6a = (undefined2)s_rNCSliderSlidingStart_00107f85._13_3_;
  cStack_68 = SUB31(s_rNCSliderSlidingStart_00107f85._13_3_,2);
  acStack_67 = (char  [5])s_rNCSliderSlidingStart_00107f85._16_5_;
  local_60 = &PTR_FUN_0012f290;
                    /* try { // try from 001158c0 to 001158cf has its CatchHandler @ 0011592c */
  uStack_58 = param_2;
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(this,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_001158fc;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_001158fc:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_61,CONCAT16(uStack_62,CONCAT51(acStack_67,cStack_68))));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011598c  facebook::react::RNCSliderEventEmitter::onRNCSliderSlidingComplete =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::RNCSliderEventEmitter::onRNCSliderSlidingComplete(facebook::react::RNCSliderEventEmitter::OnRNCSliderSlidingComplete)
   const */

void __thiscall
facebook::react::RNCSliderEventEmitter::onRNCSliderSlidingComplete
          (RNCSliderEventEmitter *this,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  long lVar6;
  ulong local_90;
  undefined8 uStack_88;
  char *local_80;
  undefined **local_70;
  undefined8 uStack_68;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80 = (char *)operator_new(0x20);
  uVar4 = s_rNCSliderSlidingComplete_00107e58._16_8_;
  uVar3 = s_rNCSliderSlidingComplete_00107e58._8_8_;
  uVar2 = s_rNCSliderSlidingComplete_00107e58._0_8_;
  local_80[0x18] = '\0';
  *(undefined8 *)(local_80 + 8) = uVar3;
  *(undefined8 *)local_80 = uVar2;
  uStack_88 = _UNK_00108888;
  local_90 = _DAT_00108880;
  *(undefined8 *)(local_80 + 0x10) = uVar4;
  local_70 = &PTR_FUN_0012f310;
                    /* try { // try from 001159fc to 00115a0f has its CatchHandler @ 00115a70 */
  uStack_68 = param_2;
  local_50 = &local_70;
  facebook::react::EventEmitter::dispatchEvent(this,&local_90,&local_70,2);
  if (local_50 == &local_70) {
    lVar6 = 4;
    pppuVar5 = &local_70;
  }
  else {
    if (local_50 == (undefined ***)0x0) goto LAB_00115a3c;
    lVar6 = 5;
    pppuVar5 = local_50;
  }
  (*(code *)(*pppuVar5)[lVar6])();
LAB_00115a3c:
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00115ad0  facebook::react::RNCSliderEventEmitter::onRNCSliderValueChange =====

/* facebook::react::RNCSliderEventEmitter::onRNCSliderValueChange(facebook::react::RNCSliderEventEmitter::OnRNCSliderValueChange)
   const */

void __thiscall
facebook::react::RNCSliderEventEmitter::onRNCSliderValueChange
          (RNCSliderEventEmitter *this,undefined8 param_2)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined7 uStack_6f;
  char cStack_68;
  undefined4 uStack_67;
  undefined1 uStack_63;
  undefined2 uStack_62;
  undefined **local_60;
  undefined8 uStack_58;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x28;
  uStack_63 = 0;
  uStack_67 = 0x65676e61;
  uStack_6f = (undefined7)s_rNCSliderValueChange_00107ffe._8_8_;
  cStack_68 = SUB81(s_rNCSliderValueChange_00107ffe._8_8_,7);
  local_77 = (char  [8])s_rNCSliderValueChange_00107ffe._0_8_;
  local_60 = &PTR_FUN_0012f390;
                    /* try { // try from 00115b28 to 00115b37 has its CatchHandler @ 00115b94 */
  uStack_58 = param_2;
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(this,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00115b64;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00115b64:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_62,CONCAT15(uStack_63,CONCAT41(uStack_67,cStack_68))));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00115bf4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0012fd68)();
  return;
}


// ===== 00115bf8  FUN_00115bf8 =====

void FUN_00115bf8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_0012f200;
  puVar1[1] = uVar2;
  return;
}


// ===== 00115c2c  FUN_00115c2c =====

void FUN_00115c2c(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_0012f200;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return;
}


// ===== 00115c44  FUN_00115c44 =====

void FUN_00115c44(void)

{
  return;
}


// ===== 00115c48  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0012fd68)();
  return;
}


// ===== 00115c4c  FUN_00115c4c =====

void FUN_00115c4c(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 local_48 [2];
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_58,param_3);
                    /* try { // try from 00115c94 to 00115cab has its CatchHandler @ 00115dbc */
  (**(code **)(*param_3 + 0x108))(&local_50,param_3,"value",5);
  local_48[0] = 3;
  local_40 = (double)*(float *)(param_2 + 8);
                    /* try { // try from 00115cc8 to 00115cdb has its CatchHandler @ 00115d98 */
  (**(code **)(*param_3 + 0x1b8))(param_3,&local_58,&local_50,local_48);
  facebook::jsi::Value::~Value((Value *)local_48);
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)();
  }
                    /* try { // try from 00115d00 to 00115d17 has its CatchHandler @ 00115dbc */
  (**(code **)(*param_3 + 0x108))(&local_50,param_3,"fromUser",8);
  local_48[0] = 2;
  local_40 = (double)CONCAT71(local_40._1_7_,*(undefined1 *)(param_2 + 0xc));
                    /* try { // try from 00115d30 to 00115d43 has its CatchHandler @ 00115d94 */
  (**(code **)(*param_3 + 0x1b8))(param_3,&local_58,&local_50,local_48);
  facebook::jsi::Value::~Value((Value *)local_48);
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)();
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_58;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00115df0  FUN_00115df0 =====

long FUN_00115df0(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react21RNCSliderEventEmitter8onChangeENS1_8OnChangeEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00115e0c  FUN_00115e0c =====

pointer_____offset_0x10___ * FUN_00115e0c(void)

{
  return &PTR_vtable_0012f270;
}


// ===== 00115e18  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0012fd68)();
  return;
}


// ===== 00115e1c  FUN_00115e1c =====

void FUN_00115e1c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_0012f290;
  puVar1[1] = uVar2;
  return;
}


// ===== 00115e50  FUN_00115e50 =====

void FUN_00115e50(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_0012f290;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return;
}


// ===== 00115e68  FUN_00115e68 =====

void FUN_00115e68(void)

{
  return;
}


// ===== 00115e6c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0012fd68)();
  return;
}


// ===== 00115e70  FUN_00115e70 =====

void FUN_00115e70(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 local_48 [2];
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_58,param_3);
                    /* try { // try from 00115eb8 to 00115ecf has its CatchHandler @ 00115fe0 */
  (**(code **)(*param_3 + 0x108))(&local_50,param_3,"value",5);
  local_48[0] = 3;
  local_40 = (double)*(float *)(param_2 + 8);
                    /* try { // try from 00115eec to 00115eff has its CatchHandler @ 00115fbc */
  (**(code **)(*param_3 + 0x1b8))(param_3,&local_58,&local_50,local_48);
  facebook::jsi::Value::~Value((Value *)local_48);
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)();
  }
                    /* try { // try from 00115f24 to 00115f3b has its CatchHandler @ 00115fe0 */
  (**(code **)(*param_3 + 0x108))(&local_50,param_3,"fromUser",8);
  local_48[0] = 2;
  local_40 = (double)CONCAT71(local_40._1_7_,*(undefined1 *)(param_2 + 0xc));
                    /* try { // try from 00115f54 to 00115f67 has its CatchHandler @ 00115fb8 */
  (**(code **)(*param_3 + 0x1b8))(param_3,&local_58,&local_50,local_48);
  facebook::jsi::Value::~Value((Value *)local_48);
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)();
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_58;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00116014  FUN_00116014 =====

long FUN_00116014(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react21RNCSliderEventEmitter23onRNCSliderSlidingStartENS1_23OnRNCSliderSlidingStartEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00116030  FUN_00116030 =====

pointer_____offset_0x10___ * FUN_00116030(void)

{
  return &PTR_vtable_0012f2f0;
}


// ===== 0011603c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0012fd68)();
  return;
}


// ===== 00116040  FUN_00116040 =====

void FUN_00116040(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_0012f310;
  puVar1[1] = uVar2;
  return;
}


// ===== 00116074  FUN_00116074 =====

void FUN_00116074(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_0012f310;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return;
}


// ===== 0011608c  FUN_0011608c =====

void FUN_0011608c(void)

{
  return;
}


// ===== 00116090  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0012fd68)();
  return;
}


// ===== 00116094  FUN_00116094 =====

void FUN_00116094(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 local_48 [2];
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_58,param_3);
                    /* try { // try from 001160dc to 001160f3 has its CatchHandler @ 00116204 */
  (**(code **)(*param_3 + 0x108))(&local_50,param_3,"value",5);
  local_48[0] = 3;
  local_40 = (double)*(float *)(param_2 + 8);
                    /* try { // try from 00116110 to 00116123 has its CatchHandler @ 001161e0 */
  (**(code **)(*param_3 + 0x1b8))(param_3,&local_58,&local_50,local_48);
  facebook::jsi::Value::~Value((Value *)local_48);
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)();
  }
                    /* try { // try from 00116148 to 0011615f has its CatchHandler @ 00116204 */
  (**(code **)(*param_3 + 0x108))(&local_50,param_3,"fromUser",8);
  local_48[0] = 2;
  local_40 = (double)CONCAT71(local_40._1_7_,*(undefined1 *)(param_2 + 0xc));
                    /* try { // try from 00116178 to 0011618b has its CatchHandler @ 001161dc */
  (**(code **)(*param_3 + 0x1b8))(param_3,&local_58,&local_50,local_48);
  facebook::jsi::Value::~Value((Value *)local_48);
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)();
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_58;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00116238  FUN_00116238 =====

long FUN_00116238(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react21RNCSliderEventEmitter26onRNCSliderSlidingCompleteENS1_26OnRNCSliderSlidingCompleteEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00116254  FUN_00116254 =====

pointer_____offset_0x10___ * FUN_00116254(void)

{
  return &PTR_vtable_0012f370;
}


// ===== 00116260  FUN_00116260 =====

void FUN_00116260(void)

{
  return;
}


// ===== 00116264  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0012fd68)();
  return;
}


// ===== 00116268  FUN_00116268 =====

void FUN_00116268(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_0012f390;
  puVar1[1] = uVar2;
  return;
}


// ===== 0011629c  FUN_0011629c =====

void FUN_0011629c(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_0012f390;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return;
}


// ===== 001162b4  FUN_001162b4 =====

void FUN_001162b4(void)

{
  return;
}


// ===== 001162b8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0012fd68)();
  return;
}


// ===== 001162bc  FUN_001162bc =====

void FUN_001162bc(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 local_48 [2];
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_58,param_3);
                    /* try { // try from 00116304 to 0011631b has its CatchHandler @ 0011642c */
  (**(code **)(*param_3 + 0x108))(&local_50,param_3,"value",5);
  local_48[0] = 3;
  local_40 = (double)*(float *)(param_2 + 8);
                    /* try { // try from 00116338 to 0011634b has its CatchHandler @ 00116408 */
  (**(code **)(*param_3 + 0x1b8))(param_3,&local_58,&local_50,local_48);
  facebook::jsi::Value::~Value((Value *)local_48);
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)();
  }
                    /* try { // try from 00116370 to 00116387 has its CatchHandler @ 0011642c */
  (**(code **)(*param_3 + 0x108))(&local_50,param_3,"fromUser",8);
  local_48[0] = 2;
  local_40 = (double)CONCAT71(local_40._1_7_,*(undefined1 *)(param_2 + 0xc));
                    /* try { // try from 001163a0 to 001163b3 has its CatchHandler @ 00116404 */
  (**(code **)(*param_3 + 0x1b8))(param_3,&local_58,&local_50,local_48);
  facebook::jsi::Value::~Value((Value *)local_48);
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)();
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_58;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00116460  FUN_00116460 =====

long FUN_00116460(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react21RNCSliderEventEmitter22onRNCSliderValueChangeENS1_22OnRNCSliderValueChangeEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0011647c  FUN_0011647c =====

pointer_____offset_0x10___ * FUN_0011647c(void)

{
  return &PTR_vtable_0012f3f0;
}


// ===== 00116488  facebook::react::RNCSliderProps::RNCSliderProps =====

/* facebook::react::RNCSliderProps::RNCSliderProps(facebook::react::PropsParserContext const&,
   facebook::react::RNCSliderProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::RNCSliderProps::RNCSliderProps
          (RNCSliderProps *this,PropsParserContext *param_1,RNCSliderProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined4 uVar4;
  ulong *puVar5;
  function *in_x4;
  long lVar6;
  undefined8 uVar7;
  ulong local_100 [4];
  long *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  puVar5 = local_100;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_e0 = (long *)0x0;
                    /* try { // try from 001164cc to 001164db has its CatchHandler @ 00116a08 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if ((ulong *)local_e0 == local_100) {
    lVar6 = 4;
  }
  else {
    if (local_e0 == (long *)0x0) goto LAB_00116508;
    lVar6 = 5;
    puVar5 = (ulong *)local_e0;
  }
  (**(code **)(*puVar5 + lVar6 * 8))();
LAB_00116508:
  local_100[0] = 0;
  local_100[1] = 0;
  local_100[2] = 0;
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 00116518 to 00116533 has its CatchHandler @ 00116a00 */
  FUN_00116a40(this + 0x6e0);
  local_100[0] = 0;
  local_100[1] = 0;
  local_100[2] = 0;
                    /* try { // try from 0011653c to 0011654f has its CatchHandler @ 001169f4 */
  FUN_00116cb0(this + 0x6f8);
  local_100[0] = local_100[0] & 0xffffffffffffff00;
                    /* try { // try from 00116554 to 0011656b has its CatchHandler @ 001169ec */
  bVar3 = FUN_00116f64();
  local_100[0] = local_100[0] & 0xffffffffffffff00;
  this[0x710] = (RNCSliderProps)(bVar3 & 1);
                    /* try { // try from 00116578 to 0011658f has its CatchHandler @ 001169e4 */
  bVar3 = FUN_00116f64();
  local_100[0] = local_100[0] & 0xffffffffffffff00;
  this[0x711] = (RNCSliderProps)(bVar3 & 1);
                    /* try { // try from 0011659c to 001165b3 has its CatchHandler @ 001169dc */
  bVar3 = FUN_00116f64();
  local_100[0] = local_100[0] & 0xffffffffffffff00;
  this[0x712] = (RNCSliderProps)(bVar3 & 1);
                    /* try { // try from 001165c0 to 001165d7 has its CatchHandler @ 001169d4 */
  bVar3 = FUN_00116f64();
  local_100[0] = local_100[0] & 0xffffffff00000000;
  this[0x713] = (RNCSliderProps)(bVar3 & 1);
  uVar2 = DAT_00108d90;
  local_d0 = 0;
  uStack_c8 = 0;
  local_d8 = 0;
  local_100[2] = 0;
  local_100[3] = 0;
  local_100[1] = 0;
  local_e0 = (long *)((ulong)local_e0 & 0xffffffffffffff00);
  local_c0 = DAT_00108d90;
  local_b8 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_80 = 0;
                    /* try { // try from 00116620 to 0011663b has its CatchHandler @ 001169c8 */
  FUN_00117114(this + 0x718);
  FUN_00117358(local_100);
  local_100[0] = local_100[0] & 0xffffffff00000000;
                    /* try { // try from 00116648 to 00116663 has its CatchHandler @ 001169c0 */
  uVar4 = FUN_00117438(param_2);
  *(undefined4 *)(this + 0x7b8) = uVar4;
  local_100[0] = 0;
                    /* try { // try from 0011666c to 00116683 has its CatchHandler @ 001169b8 */
  uVar7 = FUN_00117604();
  *(undefined8 *)(this + 0x7c0) = uVar7;
  local_100[0] = local_100[0] & 0xffffffff00000000;
  local_d0 = 0;
  uStack_c8 = 0;
  local_d8 = 0;
  local_100[2] = 0;
  local_100[3] = 0;
  local_100[1] = 0;
  local_e0 = (long *)((ulong)local_e0 & 0xffffffffffffff00);
  local_c0 = uVar2;
  local_b8 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_80 = 0;
                    /* try { // try from 001166c0 to 001166db has its CatchHandler @ 001169ac */
  FUN_00117114(this + 0x7c8);
  FUN_00117358(local_100);
  local_100[0] = local_100[0] & 0xffffffff00000000;
                    /* try { // try from 001166e8 to 00116703 has its CatchHandler @ 00116958 */
  uVar4 = FUN_00117438(param_2);
  *(undefined4 *)(this + 0x868) = uVar4;
  local_100[0] = 0;
                    /* try { // try from 0011670c to 00116723 has its CatchHandler @ 00116954 */
  uVar7 = FUN_00117604();
  *(undefined8 *)(this + 0x870) = uVar7;
  local_100[0] = 0;
                    /* try { // try from 0011672c to 00116743 has its CatchHandler @ 00116950 */
  uVar7 = FUN_00117604();
  *(undefined8 *)(this + 0x878) = uVar7;
  local_100[0] = 0;
  local_100[1] = 0;
  local_100[2] = 0;
                    /* try { // try from 00116750 to 0011676b has its CatchHandler @ 0011694c */
  FUN_00116a40(this + 0x880);
  local_100[0] = local_100[0] & 0xffffffff00000000;
  local_d0 = 0;
  uStack_c8 = 0;
  local_d8 = 0;
  local_100[2] = 0;
  local_100[3] = 0;
  local_100[1] = 0;
  local_e0 = (long *)((ulong)local_e0 & 0xffffffffffffff00);
  local_c0 = uVar2;
  local_b8 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_80 = 0;
                    /* try { // try from 001167a4 to 001167bf has its CatchHandler @ 00116940 */
  FUN_00117114(this + 0x898);
  FUN_00117358(local_100);
  local_100[0] = local_100[0] & 0xffffffff00000000;
                    /* try { // try from 001167cc to 001167e7 has its CatchHandler @ 00116920 */
  uVar4 = FUN_00117438(param_2);
  *(undefined4 *)(this + 0x938) = uVar4;
  local_100[0] = local_100[0] & 0xffffffff00000000;
                    /* try { // try from 001167f0 to 00116807 has its CatchHandler @ 0011691c */
  uVar4 = FUN_001177b0();
  *(undefined4 *)(this + 0x93c) = uVar4;
  local_100[0] = local_100[0] & 0xffffffff00000000;
  local_d0 = 0;
  uStack_c8 = 0;
  local_d8 = 0;
  local_100[2] = 0;
  local_100[3] = 0;
  local_100[1] = 0;
  local_e0 = (long *)((ulong)local_e0 & 0xffffffffffffff00);
  local_c0 = uVar2;
  local_b8 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_80 = 0;
                    /* try { // try from 00116844 to 0011685f has its CatchHandler @ 0011690c */
  FUN_00117114(this + 0x940);
  FUN_00117358(local_100);
  local_100[0] = local_100[0] & 0xffffffff00000000;
                    /* try { // try from 0011686c to 00116883 has its CatchHandler @ 00116900 */
  uVar4 = FUN_001177b0();
  *(undefined4 *)(this + 0x9e0) = uVar4;
  local_100[0] = local_100[0] & 0xffffffff00000000;
                    /* try { // try from 0011688c to 001168a3 has its CatchHandler @ 001168fc */
  uVar4 = FUN_001177b0();
  *(undefined4 *)(this + 0x9e4) = uVar4;
  local_100[0] = local_100[0] & 0xffffffff00000000;
                    /* try { // try from 001168ac to 001168c3 has its CatchHandler @ 001168f8 */
  uVar4 = FUN_001177b0();
  *(undefined4 *)(this + 0x9e8) = uVar4;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00116a40  FUN_00116a40 =====

void FUN_00116a40(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,char *param_2,char *param_3,byte *param_4,byte *param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_2,param_3,(char *)0x0);
  if (lVar2 == 0) {
    if ((*param_4 & 1) == 0) {
      if (*(long *)(lVar1 + 0x28) == lVar5) {
        uVar8 = *(undefined8 *)(param_4 + 8);
        uVar7 = *(undefined8 *)param_4;
        uVar6 = *(undefined8 *)(param_4 + 0x10);
LAB_00116aa4:
        *(undefined8 *)(param_1 + 8) = uVar8;
        *(undefined8 *)param_1 = uVar7;
        *(undefined8 *)(param_1 + 0x10) = uVar6;
        return;
      }
      goto LAB_00116ca8;
    }
    uVar3 = *(ulong *)(param_4 + 8);
    pcVar4 = *(char **)(param_4 + 0x10);
  }
  else {
    uVar3 = FUN_0011a60c();
    if ((uVar3 & 1) != 0) {
      *(undefined8 *)param_1 = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
                    /* try { // try from 00116b08 to 00116b13 has its CatchHandler @ 00116b54 */
      FUN_0011a648(lVar2,param_1);
      if (*(long *)(lVar1 + 0x28) == lVar5) {
        return;
      }
      goto LAB_00116ca8;
    }
    if ((*param_5 & 1) == 0) {
      if (*(long *)(lVar1 + 0x28) == lVar5) {
        uVar8 = *(undefined8 *)(param_5 + 8);
        uVar7 = *(undefined8 *)param_5;
        uVar6 = *(undefined8 *)(param_5 + 0x10);
        goto LAB_00116aa4;
      }
      goto LAB_00116ca8;
    }
    uVar3 = *(ulong *)(param_5 + 8);
    pcVar4 = *(char **)(param_5 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1,pcVar4,uVar3);
    return;
  }
LAB_00116ca8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00116cb0  FUN_00116cb0 =====

void FUN_00116cb0(undefined8 *param_1,char *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_2,"accessibilityIncrements",(char *)0x0);
  if (lVar2 == 0) {
    lVar2 = *param_3;
    lVar4 = param_3[1];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uVar3 = FUN_0011a60c();
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 00116d5c to 00116d67 has its CatchHandler @ 00116d98 */
      FUN_0011ab1c(lVar2,param_1);
      if (*(long *)(lVar1 + 0x28) == lVar5) {
        return;
      }
      goto LAB_00116ee0;
    }
    lVar2 = *param_4;
    lVar4 = param_4[1];
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    FUN_0011b298(param_1,lVar2,lVar4,(lVar4 - lVar2 >> 3) * -0x5555555555555555);
    return;
  }
LAB_00116ee0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00116ee8  FUN_00116ee8 =====

void FUN_00116ee8(undefined8 *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)*param_1;
  if (pbVar2 == (byte *)0x0) {
    return;
  }
  pbVar1 = (byte *)param_1[1];
  pbVar3 = pbVar2;
  if (pbVar1 != pbVar2) {
    do {
      pbVar3 = pbVar1 + -0x18;
      if ((*pbVar3 & 1) != 0) {
        operator_delete(*(void **)(pbVar1 + -8));
      }
      pbVar1 = pbVar3;
    } while (pbVar3 != pbVar2);
    pbVar3 = (byte *)*param_1;
  }
  param_1[1] = pbVar2;
  operator_delete(pbVar3);
  return;
}


// ===== 00116f64  FUN_00116f64 =====

void FUN_00116f64(char *param_1,char *param_2,char *param_3,char *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  char local_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_1,param_2,(char *)0x0);
  if (lVar2 == 0) {
    local_50[0] = *param_3;
  }
  else {
    uVar3 = FUN_0011a60c();
    if ((uVar3 & 1) == 0) {
      local_50[0] = *param_4;
    }
    else {
                    /* try { // try from 00116fdc to 00116fe7 has its CatchHandler @ 00116ff8 */
      FUN_0011be34(lVar2,local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_50[0] != '\0');
}


// ===== 00117114  FUN_00117114 =====

void FUN_00117114(undefined4 *param_1,char *param_2,char *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = tpidr_el0;
  lVar4 = *(long *)(lVar5 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_2,param_3,(char *)0x0);
  if (lVar2 == 0) {
    lVar5 = *(long *)(lVar5 + 0x28);
  }
  else {
    uVar3 = FUN_0011a60c();
    if ((uVar3 & 1) != 0) {
      *param_1 = 0;
      uVar1 = DAT_00108d90;
      *(undefined8 *)(param_1 + 0xc) = 0;
      *(undefined8 *)(param_1 + 0xe) = 0;
      *(undefined8 *)(param_1 + 10) = 0;
      *(undefined8 *)(param_1 + 0x10) = uVar1;
      *(undefined8 *)(param_1 + 4) = 0;
      *(undefined8 *)(param_1 + 6) = 0;
      *(undefined8 *)(param_1 + 2) = 0;
      *(undefined1 *)(param_1 + 8) = 0;
      param_1[0x12] = 0;
      *(undefined8 *)(param_1 + 0x24) = 0;
      *(undefined8 *)(param_1 + 0x26) = 0;
      *(undefined8 *)(param_1 + 0x22) = 0;
      *(undefined8 *)(param_1 + 0x16) = 0;
      *(undefined8 *)(param_1 + 0x14) = 0;
      *(undefined8 *)(param_1 + 0x1a) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x1e) = 0;
      *(undefined8 *)(param_1 + 0x1c) = 0;
      param_1[0x20] = 0;
                    /* try { // try from 001171d4 to 001171df has its CatchHandler @ 00117224 */
      FUN_0011c1c4(lVar2,param_1);
      if (*(long *)(lVar5 + 0x28) == lVar4) {
        return;
      }
      goto LAB_00117350;
    }
    lVar5 = *(long *)(lVar5 + 0x28);
    param_4 = param_5;
  }
  if (lVar5 == lVar4) {
    FUN_0011bea0(param_1,param_4);
    return;
  }
LAB_00117350:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00117358  FUN_00117358 =====

void FUN_00117358(long param_1)

{
  byte bVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar3 = *(void **)(param_1 + 0x88);
  if (pvVar3 != (void *)0x0) {
    pvVar4 = *(void **)(param_1 + 0x90);
    pvVar2 = pvVar3;
    if (pvVar4 != pvVar3) {
      do {
        if ((*(byte *)((long)pvVar4 + -0x18) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar4 + -8));
        }
        if ((*(byte *)((long)pvVar4 + -0x30) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar4 + -0x20));
        }
        pvVar4 = (void *)((long)pvVar4 + -0x30);
      } while (pvVar4 != pvVar3);
      pvVar2 = *(void **)(param_1 + 0x88);
    }
    *(void **)(param_1 + 0x90) = pvVar3;
    operator_delete(pvVar2);
  }
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x50);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x78));
    bVar1 = *(byte *)(param_1 + 0x50);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x28);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x60));
    bVar1 = *(byte *)(param_1 + 0x28);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x38));
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 00117438  FUN_00117438 =====

void FUN_00117438(undefined4 *param_1,char *param_2,char *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = facebook::react::RawProps::at(param_2,param_3,(char *)0x0);
  if (lVar3 == 0) {
    uVar2 = *param_4;
  }
  else {
    uVar4 = FUN_0011a60c();
    if ((uVar4 & 1) == 0) {
      uVar2 = *param_5;
    }
    else {
      local_4c = 0;
                    /* try { // try from 001174c8 to 001174d3 has its CatchHandler @ 001174e4 */
      FUN_00120a84(*(undefined8 *)(param_1 + 2),*param_1,lVar3,&local_4c);
      uVar2 = local_4c;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 00117604  FUN_00117604 =====

void FUN_00117604(char *param_1,char *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_1,param_2,(char *)0x0);
  if (lVar2 == 0) {
    uVar5 = *param_3;
  }
  else {
    uVar3 = FUN_0011a60c();
    if ((uVar3 & 1) == 0) {
      uVar5 = *param_4;
    }
    else {
                    /* try { // try from 0011767c to 00117683 has its CatchHandler @ 00117690 */
      uVar5 = FUN_0012a7f4(lVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 001177b0  FUN_001177b0 =====

void FUN_001177b0(char *param_1,char *param_2,undefined4 *param_3,undefined4 *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_1,param_2,(char *)0x0);
  if (lVar2 == 0) {
    uVar5 = *param_3;
  }
  else {
    uVar3 = FUN_0011a60c();
    if ((uVar3 & 1) == 0) {
      uVar5 = *param_4;
    }
    else {
                    /* try { // try from 00117828 to 0011782f has its CatchHandler @ 0011783c */
      uVar5 = FUN_0011e924(lVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 0011795c  FUN_0011795c =====

void FUN_0011795c(undefined8 *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  *param_1 = *param_2;
  if (*(char *)(param_1 + 0xd5) != '\0') {
    if ((*(char *)(param_1 + 0xd0) != '\0') &&
       (pbVar2 = (byte *)param_1[0xcd], pbVar2 != (byte *)0x0)) {
      pbVar1 = (byte *)param_1[0xce];
      pbVar3 = pbVar2;
      if (pbVar1 != pbVar2) {
        do {
          pbVar3 = pbVar1 + -0x18;
          if ((*pbVar3 & 1) != 0) {
            operator_delete(*(void **)(pbVar1 + -8));
          }
          pbVar1 = pbVar3;
        } while (pbVar3 != pbVar2);
        pbVar3 = (byte *)param_1[0xcd];
      }
      param_1[0xce] = pbVar2;
      operator_delete(pbVar3);
    }
    if ((*(byte *)(param_1 + 0xc9) & 1) != 0) {
      operator_delete((void *)param_1[0xcb]);
    }
  }
  if (*(char *)(param_1 + 200) != '\0') {
    if ((*(char *)(param_1 + 0xc3) != '\0') &&
       (pbVar2 = (byte *)param_1[0xc0], pbVar2 != (byte *)0x0)) {
      pbVar1 = (byte *)param_1[0xc1];
      pbVar3 = pbVar2;
      if (pbVar1 != pbVar2) {
        do {
          pbVar3 = pbVar1 + -0x18;
          if ((*pbVar3 & 1) != 0) {
            operator_delete(*(void **)(pbVar1 + -8));
          }
          pbVar1 = pbVar3;
        } while (pbVar3 != pbVar2);
        pbVar3 = (byte *)param_1[0xc0];
      }
      param_1[0xc1] = pbVar2;
      operator_delete(pbVar3);
    }
    if ((*(byte *)(param_1 + 0xbc) & 1) != 0) {
      operator_delete((void *)param_1[0xbe]);
    }
  }
  FUN_001196b4(param_1,param_2 + 1);
  return;
}


// ===== 00117a6c  facebook::react::RNCSliderProps::RNCSliderProps =====

/* facebook::react::RNCSliderProps::RNCSliderProps(facebook::react::PropsParserContext const&,
   facebook::react::RNCSliderProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::RNCSliderProps::RNCSliderProps
          (RNCSliderProps *this,PropsParserContext *param_1,RNCSliderProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined4 uVar4;
  ulong *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong local_100 [4];
  long *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  puVar5 = local_100;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_e0 = (long *)0x0;
                    /* try { // try from 00117aac to 00117acf has its CatchHandler @ 00118004 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0012fb68 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if ((ulong *)local_e0 == local_100) {
    lVar6 = 4;
  }
  else {
    if (local_e0 == (long *)0x0) goto LAB_00117afc;
    lVar6 = 5;
    puVar5 = (ulong *)local_e0;
  }
  (**(code **)(*puVar5 + lVar6 * 8))();
LAB_00117afc:
  local_100[0] = 0;
  local_100[1] = 0;
  local_100[2] = 0;
  *(undefined **)this = PTR_vtable_0012fb60 + 0x20;
                    /* try { // try from 00117b14 to 00117b2f has its CatchHandler @ 00117ffc */
  FUN_00116a40(this + 0x6e0,param_3,"accessibilityUnits",param_2 + 0x6e0,local_100);
  local_100[0] = 0;
  local_100[1] = 0;
  local_100[2] = 0;
                    /* try { // try from 00117b38 to 00117b4b has its CatchHandler @ 00117ff0 */
  FUN_00116cb0(this + 0x6f8,param_3,param_2 + 0x6f8,local_100);
  local_100[0] = local_100[0] & 0xffffffffffffff00;
                    /* try { // try from 00117b50 to 00117b67 has its CatchHandler @ 00117fe8 */
  bVar3 = FUN_00116f64(param_3,"disabled",param_2 + 0x710,local_100);
  local_100[0] = local_100[0] & 0xffffffffffffff00;
  this[0x710] = (RNCSliderProps)(bVar3 & 1);
                    /* try { // try from 00117b74 to 00117b8b has its CatchHandler @ 00117fe0 */
  bVar3 = FUN_00116f64(param_3,"inverted",param_2 + 0x711,local_100);
  local_100[0] = local_100[0] & 0xffffffffffffff00;
  this[0x711] = (RNCSliderProps)(bVar3 & 1);
                    /* try { // try from 00117b98 to 00117baf has its CatchHandler @ 00117fd8 */
  bVar3 = FUN_00116f64(param_3,"vertical",param_2 + 0x712,local_100);
  local_100[0] = local_100[0] & 0xffffffffffffff00;
  this[0x712] = (RNCSliderProps)(bVar3 & 1);
                    /* try { // try from 00117bbc to 00117bd3 has its CatchHandler @ 00117fd0 */
  bVar3 = FUN_00116f64(param_3,"tapToSeek",param_2 + 0x713,local_100);
  local_100[0] = local_100[0] & 0xffffffff00000000;
  this[0x713] = (RNCSliderProps)(bVar3 & 1);
  uVar2 = DAT_00108d90;
  local_d0 = 0;
  uStack_c8 = 0;
  local_d8 = 0;
  local_100[2] = 0;
  local_100[3] = 0;
  local_100[1] = 0;
  local_e0 = (long *)((ulong)local_e0 & 0xffffffffffffff00);
  local_c0 = DAT_00108d90;
  local_b8 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_80 = 0;
                    /* try { // try from 00117c1c to 00117c37 has its CatchHandler @ 00117fc4 */
  FUN_00117114(this + 0x718,param_3,"maximumTrackImage",param_2 + 0x718,local_100);
  FUN_00117358(local_100);
  local_100[0] = local_100[0] & 0xffffffff00000000;
                    /* try { // try from 00117c44 to 00117c5f has its CatchHandler @ 00117fbc */
  uVar4 = FUN_00117438(param_1,param_3,"maximumTrackTintColor",param_2 + 0x7b8,local_100);
  *(undefined4 *)(this + 0x7b8) = uVar4;
  local_100[0] = 0;
                    /* try { // try from 00117c68 to 00117c7f has its CatchHandler @ 00117fb4 */
  uVar7 = FUN_00117604(param_3,"maximumValue",param_2 + 0x7c0,local_100);
  *(undefined8 *)(this + 0x7c0) = uVar7;
  local_100[0] = local_100[0] & 0xffffffff00000000;
  local_d0 = 0;
  uStack_c8 = 0;
  local_d8 = 0;
  local_100[2] = 0;
  local_100[3] = 0;
  local_100[1] = 0;
  local_e0 = (long *)((ulong)local_e0 & 0xffffffffffffff00);
  local_c0 = uVar2;
  local_b8 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_80 = 0;
                    /* try { // try from 00117cbc to 00117cd7 has its CatchHandler @ 00117fa8 */
  FUN_00117114(this + 0x7c8,param_3,"minimumTrackImage",param_2 + 0x7c8,local_100);
  FUN_00117358(local_100);
  local_100[0] = local_100[0] & 0xffffffff00000000;
                    /* try { // try from 00117ce4 to 00117cff has its CatchHandler @ 00117f54 */
  uVar4 = FUN_00117438(param_1,param_3,"minimumTrackTintColor",param_2 + 0x868,local_100);
  *(undefined4 *)(this + 0x868) = uVar4;
  local_100[0] = 0;
                    /* try { // try from 00117d08 to 00117d1f has its CatchHandler @ 00117f50 */
  uVar7 = FUN_00117604(param_3,"minimumValue",param_2 + 0x870,local_100);
  *(undefined8 *)(this + 0x870) = uVar7;
  local_100[0] = 0;
                    /* try { // try from 00117d28 to 00117d3f has its CatchHandler @ 00117f4c */
  uVar7 = FUN_00117604(param_3,&DAT_0010781d,param_2 + 0x878,local_100);
  *(undefined8 *)(this + 0x878) = uVar7;
  local_100[0] = 0;
  local_100[1] = 0;
  local_100[2] = 0;
                    /* try { // try from 00117d4c to 00117d67 has its CatchHandler @ 00117f48 */
  FUN_00116a40(this + 0x880,param_3,"testID",param_2 + 0x880,local_100);
  local_100[0] = local_100[0] & 0xffffffff00000000;
  local_d0 = 0;
  uStack_c8 = 0;
  local_d8 = 0;
  local_100[2] = 0;
  local_100[3] = 0;
  local_100[1] = 0;
  local_e0 = (long *)((ulong)local_e0 & 0xffffffffffffff00);
  local_c0 = uVar2;
  local_b8 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_80 = 0;
                    /* try { // try from 00117da0 to 00117dbb has its CatchHandler @ 00117f3c */
  FUN_00117114(this + 0x898,param_3,"thumbImage",param_2 + 0x898,local_100);
  FUN_00117358(local_100);
  local_100[0] = local_100[0] & 0xffffffff00000000;
                    /* try { // try from 00117dc8 to 00117de3 has its CatchHandler @ 00117f1c */
  uVar4 = FUN_00117438(param_1,param_3,"thumbTintColor",param_2 + 0x938,local_100);
  *(undefined4 *)(this + 0x938) = uVar4;
  local_100[0] = local_100[0] & 0xffffffff00000000;
                    /* try { // try from 00117dec to 00117e03 has its CatchHandler @ 00117f18 */
  uVar4 = FUN_001177b0(param_3,"thumbSize",param_2 + 0x93c,local_100);
  *(undefined4 *)(this + 0x93c) = uVar4;
  local_100[0] = local_100[0] & 0xffffffff00000000;
  local_d0 = 0;
  uStack_c8 = 0;
  local_d8 = 0;
  local_100[2] = 0;
  local_100[3] = 0;
  local_100[1] = 0;
  local_e0 = (long *)((ulong)local_e0 & 0xffffffffffffff00);
  local_c0 = uVar2;
  local_b8 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_80 = 0;
                    /* try { // try from 00117e40 to 00117e5b has its CatchHandler @ 00117f08 */
  FUN_00117114(this + 0x940,param_3,"trackImage",param_2 + 0x940,local_100);
  FUN_00117358(local_100);
  local_100[0] = local_100[0] & 0xffffffff00000000;
                    /* try { // try from 00117e68 to 00117e7f has its CatchHandler @ 00117efc */
  uVar4 = FUN_001177b0(param_3,"value",param_2 + 0x9e0,local_100);
  *(undefined4 *)(this + 0x9e0) = uVar4;
  local_100[0] = local_100[0] & 0xffffffff00000000;
                    /* try { // try from 00117e88 to 00117e9f has its CatchHandler @ 00117ef8 */
  uVar4 = FUN_001177b0(param_3,"lowerLimit",param_2 + 0x9e4,local_100);
  *(undefined4 *)(this + 0x9e4) = uVar4;
  local_100[0] = local_100[0] & 0xffffffff00000000;
                    /* try { // try from 00117ea8 to 00117ebf has its CatchHandler @ 00117ef4 */
  uVar4 = FUN_001177b0(param_3,"upperLimit",param_2 + 0x9e8,local_100);
  *(undefined4 *)(this + 0x9e8) = uVar4;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011803c  facebook::react::RNCSliderProps::getDiffPropsImplementationTarget =====

/* facebook::react::RNCSliderProps::getDiffPropsImplementationTarget() const */

char * facebook::react::RNCSliderProps::getDiffPropsImplementationTarget(void)

{
  return "RNCSlider";
}


// ===== 00118048  facebook::react::RNCSliderProps::getDiffProps =====

/* facebook::react::RNCSliderProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::RNCSliderProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  ulong uVar2;
  size_t sVar3;
  Props PVar4;
  Props PVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  ulong *puVar9;
  dynamic *pdVar10;
  dynamic *pdVar11;
  int iVar12;
  void *pvVar13;
  int *piVar14;
  dynamic *pdVar15;
  Props *in_x1;
  Props *pPVar16;
  undefined4 *in_x8;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  Props *pPVar21;
  byte *__s2;
  byte *pbVar22;
  size_t sVar23;
  dynamic *this;
  dynamic *this_00;
  char *pcVar24;
  dynamic *this_01;
  dynamic *pdVar25;
  dynamic *pdVar26;
  ulong *puVar27;
  ulong *puVar28;
  float fVar29;
  double dVar30;
  ulong local_140;
  ulong uStack_138;
  void *local_130;
  ulong local_120;
  ulong uStack_118;
  void *local_110;
  ulong local_100;
  ulong uStack_f8;
  void *local_f0;
  undefined4 local_e8 [2];
  dynamic *local_e0;
  dynamic *local_d8;
  dynamic *local_d0;
  undefined4 local_b8 [2];
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  
  lVar8 = tpidr_el0;
  local_88 = *(long *)(lVar8 + 0x28);
  if (((DAT_001352c0 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_001352c0), iVar12 != 0)) {
    memset(&DAT_001348d0,0,0x9f0);
    FUN_00118ef0();
    __cxa_atexit(thunk_FUN_00119a10,&DAT_001348d0,&PTR_LOOP_0012f080);
    __cxa_guard_release(&DAT_001352c0);
  }
  pPVar1 = (Props *)&DAT_001348d0;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    local_98 = 0;
    local_b8[0] = 5;
    uStack_a8 = 0;
    local_a0 = (void *)0x0;
    local_90 = 0x3f800000;
    *in_x8 = 5;
    local_b0 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
    folly::dynamic::destroy();
    goto LAB_00118d48;
  }
  facebook::react::HostPlatformViewProps::getDiffProps(param_1);
  PVar4 = param_1[0x6e0];
  PVar5 = pPVar1[0x6e0];
  sVar23 = *(size_t *)(param_1 + 0x6e8);
  uVar18 = (ulong)((byte)PVar4 >> 1);
  uVar19 = uVar18;
  if (((byte)PVar4 & 1) != 0) {
    uVar19 = sVar23;
  }
  uVar2 = (ulong)((byte)PVar5 >> 1);
  if (((byte)PVar5 & 1) != 0) {
    uVar2 = *(ulong *)(pPVar1 + 0x6e8);
  }
  if (uVar19 == uVar2) {
    pPVar16 = pPVar1 + 0x6e1;
    if (((byte)PVar5 & 1) != 0) {
      pPVar16 = *(Props **)(pPVar1 + 0x6f0);
    }
    if (((byte)PVar4 & 1) == 0) {
      if (1 < (byte)PVar4) {
        pPVar21 = param_1 + 0x6e1;
        do {
          if (*pPVar21 != *pPVar16) goto LAB_00118168;
          uVar18 = uVar18 - 1;
          pPVar21 = pPVar21 + 1;
          pPVar16 = pPVar16 + 1;
        } while (uVar18 != 0);
      }
    }
    else {
      pcVar24 = *(char **)(param_1 + 0x6f0);
      iVar12 = memcmp(pcVar24,pPVar16,sVar23);
      if (iVar12 != 0) goto LAB_001181a0;
    }
  }
  else {
LAB_00118168:
    if (((byte)PVar4 & 1) == 0) {
      uStack_118 = *(ulong *)(param_1 + 0x6e8);
      local_120 = *(ulong *)(param_1 + 0x6e0);
      local_110 = *(void **)(param_1 + 0x6f0);
    }
    else {
      pcVar24 = *(char **)(param_1 + 0x6f0);
LAB_001181a0:
                    /* try { // try from 001181a0 to 001181af has its CatchHandler @ 00118e10 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_120,pcVar24,sVar23);
    }
    local_b8[0] = 6;
    uStack_a8 = uStack_118;
    local_b0 = local_120;
    local_a0 = local_110;
    local_120 = 0;
    uStack_118 = 0;
    local_110 = (void *)0x0;
                    /* try { // try from 001181d0 to 001181e3 has its CatchHandler @ 00118e38 */
    pdVar15 = (dynamic *)folly::dynamic::operator[]();
    folly::dynamic::operator=(pdVar15,(dynamic *)local_b8);
    folly::dynamic::destroy();
    if ((local_120 & 1) != 0) {
      operator_delete(local_110);
    }
  }
  puVar28 = *(ulong **)(param_1 + 0x700);
  puVar27 = *(ulong **)(param_1 + 0x6f8);
  pbVar22 = *(byte **)(pPVar1 + 0x6f8);
  puVar9 = puVar27;
  if ((long)puVar28 - (long)puVar27 == *(long *)(pPVar1 + 0x700) - (long)pbVar22) {
    for (; puVar9 != puVar28; puVar9 = puVar9 + 3) {
      bVar6 = (byte)*puVar9;
      bVar7 = *pbVar22;
      sVar23 = (ulong)(bVar6 >> 1);
      if ((bVar6 & 1) != 0) {
        sVar23 = puVar9[1];
      }
      sVar3 = (ulong)(bVar7 >> 1);
      if ((bVar7 & 1) != 0) {
        sVar3 = *(size_t *)(pbVar22 + 8);
      }
      if (sVar23 != sVar3) goto LAB_001182c0;
      __s2 = *(byte **)(pbVar22 + 0x10);
      if ((bVar7 & 1) == 0) {
        __s2 = pbVar22 + 1;
      }
      if ((bVar6 & 1) == 0) {
        if (1 < bVar6) {
          uVar19 = 0;
          do {
            if (*(byte *)((long)puVar9 + uVar19 + 1) != __s2[uVar19]) goto LAB_001182c0;
            uVar19 = uVar19 + 1;
          } while (bVar6 >> 1 != uVar19);
        }
      }
      else {
        iVar12 = memcmp((void *)puVar9[2],__s2,puVar9[1]);
        if (iVar12 != 0) goto LAB_001182c0;
      }
      pbVar22 = pbVar22 + 0x18;
    }
  }
  else {
LAB_001182c0:
    local_d8 = (dynamic *)0x0;
    local_d0 = (dynamic *)0x0;
    local_e8[0] = 1;
    local_e0 = (dynamic *)0x0;
    if (puVar27 != puVar28) {
      this = (dynamic *)0x0;
      pdVar15 = (dynamic *)0x0;
      pdVar26 = (dynamic *)0x0;
      do {
        if ((*puVar27 & 1) == 0) {
          local_f0 = (void *)puVar27[2];
          uStack_f8 = puVar27[1];
          local_100 = *puVar27;
        }
        else {
                    /* try { // try from 00118334 to 0011833b has its CatchHandler @ 00118e9c */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_100,(char *)puVar27[2],puVar27[1]);
        }
        local_b8[0] = 6;
        uStack_a8 = uStack_f8;
        local_b0 = local_100;
        local_a0 = local_f0;
        local_100 = 0;
        uStack_f8 = 0;
        local_f0 = (void *)0x0;
        if (this < pdVar26) {
          folly::dynamic::dynamic(this,(dynamic *)local_b8);
          this_00 = this;
        }
        else {
          lVar17 = (long)this - (long)pdVar15 >> 4;
          uVar19 = lVar17 * -0x5555555555555555 + 1;
          if (0x555555555555555 < uVar19) {
            if (*(long *)(lVar8 + 0x28) == local_88) {
                    /* try { // try from 00118d90 to 00118dab has its CatchHandler @ 00118ea4 */
              FUN_00119dac();
LAB_00118d94:
              if (*(long *)(lVar8 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                FUN_00119bd0();
              }
            }
            goto LAB_00118eec;
          }
          lVar20 = (long)pdVar26 - (long)pdVar15 >> 4;
          uVar18 = lVar20 * 0x5555555555555556;
          if (uVar18 < uVar19 || uVar18 - uVar19 == 0) {
            uVar18 = uVar19;
          }
          if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar20 * -0x5555555555555555)) {
            uVar18 = 0x555555555555555;
          }
          if (uVar18 == 0) {
            pvVar13 = (void *)0x0;
          }
          else {
            if (0x555555555555555 < uVar18) goto LAB_00118d94;
                    /* try { // try from 001183c8 to 001183cb has its CatchHandler @ 00118e8c */
            pvVar13 = operator_new(uVar18 * 0x30);
          }
          this_00 = (dynamic *)((long)pvVar13 + lVar17 * 0x10);
          pdVar26 = (dynamic *)((long)pvVar13 + uVar18 * 0x30);
          folly::dynamic::dynamic(this_00,(dynamic *)local_b8);
          this_01 = this_00;
          pdVar25 = this;
          pdVar10 = this_00;
          pdVar11 = pdVar26;
          if (this != pdVar15) {
            do {
              this_01 = this_01 + -0x30;
              pdVar25 = pdVar25 + -0x30;
              folly::dynamic::dynamic(this_01,pdVar25);
              pdVar10 = this_01;
            } while (pdVar25 != pdVar15);
            do {
              local_d0 = pdVar11;
              local_e0 = pdVar10;
              this = this + -0x30;
              folly::dynamic::destroy();
              pdVar10 = local_e0;
              pdVar11 = local_d0;
              pdVar25 = pdVar15;
            } while (this != pdVar15);
          }
          local_d0 = pdVar11;
          local_e0 = pdVar10;
          pdVar15 = this_01;
          if (pdVar25 != (dynamic *)0x0) {
            operator_delete(pdVar25);
          }
        }
        this = this_00 + 0x30;
        local_d8 = this;
        folly::dynamic::destroy();
        if ((local_100 & 1) != 0) {
          operator_delete(local_f0);
        }
        puVar27 = puVar27 + 3;
      } while (puVar27 != puVar28);
    }
                    /* try { // try from 00118494 to 001184a7 has its CatchHandler @ 00118e5c */
    pdVar15 = (dynamic *)folly::dynamic::operator[](in_x8,"accessibilityIncrements","");
    folly::dynamic::operator=(pdVar15,(dynamic *)local_e8);
    folly::dynamic::destroy();
  }
  PVar4 = param_1[0x710];
  if (PVar4 != pPVar1[0x710]) {
                    /* try { // try from 001184d8 to 001185c3 has its CatchHandler @ 00118e90 */
    piVar14 = (int *)folly::dynamic::operator[](in_x8,"disabled","");
    if (*piVar14 != 2) {
      folly::dynamic::destroy();
      *piVar14 = 2;
    }
    *(Props *)(piVar14 + 2) = PVar4;
  }
  PVar4 = param_1[0x711];
  if (PVar4 != pPVar1[0x711]) {
    piVar14 = (int *)folly::dynamic::operator[](in_x8,"inverted","");
    if (*piVar14 != 2) {
      folly::dynamic::destroy();
      *piVar14 = 2;
    }
    *(Props *)(piVar14 + 2) = PVar4;
  }
  PVar4 = param_1[0x712];
  if (PVar4 != pPVar1[0x712]) {
    piVar14 = (int *)folly::dynamic::operator[](in_x8,"vertical","");
    if (*piVar14 != 2) {
      folly::dynamic::destroy();
      *piVar14 = 2;
    }
    *(Props *)(piVar14 + 2) = PVar4;
  }
  PVar4 = param_1[0x713];
  if (PVar4 != pPVar1[0x713]) {
    piVar14 = (int *)folly::dynamic::operator[](in_x8,"tapToSeek","");
    if (*piVar14 != 2) {
      folly::dynamic::destroy();
      *piVar14 = 2;
    }
    *(Props *)(piVar14 + 2) = PVar4;
  }
  if (*(int *)(param_1 + 0x718) == *(int *)(pPVar1 + 0x718)) {
    PVar4 = param_1[0x720];
    PVar5 = pPVar1[0x720];
    uVar19 = (ulong)((byte)PVar4 >> 1);
    sVar23 = uVar19;
    if (((byte)PVar4 & 1) != 0) {
      sVar23 = *(size_t *)(param_1 + 0x728);
    }
    sVar3 = (ulong)((byte)PVar5 >> 1);
    if (((byte)PVar5 & 1) != 0) {
      sVar3 = *(size_t *)(pPVar1 + 0x728);
    }
    if (sVar23 != sVar3) goto LAB_00118678;
    pPVar16 = pPVar1 + 0x721;
    if (((byte)PVar5 & 1) != 0) {
      pPVar16 = *(Props **)(pPVar1 + 0x730);
    }
    if (((byte)PVar4 & 1) == 0) {
      if (1 < (byte)PVar4) {
        pPVar21 = param_1 + 0x721;
        do {
          if (*pPVar21 != *pPVar16) goto LAB_00118678;
          uVar19 = uVar19 - 1;
          pPVar21 = pPVar21 + 1;
          pPVar16 = pPVar16 + 1;
        } while (uVar19 != 0);
      }
    }
    else {
      iVar12 = memcmp(*(void **)(param_1 + 0x730),pPVar16,*(size_t *)(param_1 + 0x728));
      if (iVar12 != 0) goto LAB_00118678;
    }
  }
  else {
LAB_00118678:
                    /* try { // try from 00118678 to 00118683 has its CatchHandler @ 00118e88 */
    FUN_00119dc0(local_b8,param_1 + 0x718);
                    /* try { // try from 00118684 to 00118697 has its CatchHandler @ 00118e78 */
    pdVar15 = (dynamic *)folly::dynamic::operator[](in_x8,"maximumTrackImage","");
    folly::dynamic::operator=(pdVar15,(dynamic *)local_b8);
    folly::dynamic::destroy();
  }
  iVar12 = *(int *)(param_1 + 0x7b8);
  if (iVar12 != *(int *)(pPVar1 + 0x7b8)) {
                    /* try { // try from 001186b8 to 00118723 has its CatchHandler @ 00118e90 */
    piVar14 = (int *)folly::dynamic::operator[](in_x8,"maximumTrackTintColor","");
    if (*piVar14 != 4) {
      folly::dynamic::destroy();
      *piVar14 = 4;
    }
    *(long *)(piVar14 + 2) = (long)iVar12;
  }
  dVar30 = *(double *)(param_1 + 0x7c0);
  if ((dVar30 != *(double *)(pPVar1 + 0x7c0)) &&
     ((!NAN(dVar30) || (!NAN(*(double *)(pPVar1 + 0x7c0)))))) {
    piVar14 = (int *)folly::dynamic::operator[](in_x8,"maximumValue","");
    if (*piVar14 != 3) {
      folly::dynamic::destroy();
      *piVar14 = 3;
    }
    *(double *)(piVar14 + 2) = dVar30;
  }
  if (*(int *)(param_1 + 0x7c8) == *(int *)(pPVar1 + 0x7c8)) {
    PVar4 = param_1[2000];
    PVar5 = pPVar1[2000];
    uVar19 = (ulong)((byte)PVar4 >> 1);
    sVar23 = uVar19;
    if (((byte)PVar4 & 1) != 0) {
      sVar23 = *(size_t *)(param_1 + 0x7d8);
    }
    sVar3 = (ulong)((byte)PVar5 >> 1);
    if (((byte)PVar5 & 1) != 0) {
      sVar3 = *(size_t *)(pPVar1 + 0x7d8);
    }
    if (sVar23 != sVar3) goto LAB_001187d8;
    pPVar16 = pPVar1 + 0x7d1;
    if (((byte)PVar5 & 1) != 0) {
      pPVar16 = *(Props **)(pPVar1 + 0x7e0);
    }
    if (((byte)PVar4 & 1) == 0) {
      if (1 < (byte)PVar4) {
        pPVar21 = param_1 + 0x7d1;
        do {
          if (*pPVar21 != *pPVar16) goto LAB_001187d8;
          uVar19 = uVar19 - 1;
          pPVar21 = pPVar21 + 1;
          pPVar16 = pPVar16 + 1;
        } while (uVar19 != 0);
      }
    }
    else {
      iVar12 = memcmp(*(void **)(param_1 + 0x7e0),pPVar16,*(size_t *)(param_1 + 0x7d8));
      if (iVar12 != 0) goto LAB_001187d8;
    }
  }
  else {
LAB_001187d8:
                    /* try { // try from 001187d8 to 001187e3 has its CatchHandler @ 00118e74 */
    FUN_00119dc0(local_b8,param_1 + 0x7c8);
                    /* try { // try from 001187e4 to 001187f7 has its CatchHandler @ 00118e70 */
    pdVar15 = (dynamic *)folly::dynamic::operator[](in_x8,"minimumTrackImage","");
    folly::dynamic::operator=(pdVar15,(dynamic *)local_b8);
    folly::dynamic::destroy();
  }
  iVar12 = *(int *)(param_1 + 0x868);
  if (iVar12 != *(int *)(pPVar1 + 0x868)) {
                    /* try { // try from 00118818 to 001188db has its CatchHandler @ 00118e90 */
    piVar14 = (int *)folly::dynamic::operator[](in_x8,"minimumTrackTintColor","");
    if (*piVar14 != 4) {
      folly::dynamic::destroy();
      *piVar14 = 4;
    }
    *(long *)(piVar14 + 2) = (long)iVar12;
  }
  dVar30 = *(double *)(param_1 + 0x870);
  if ((dVar30 != *(double *)(pPVar1 + 0x870)) &&
     ((!NAN(dVar30) || (!NAN(*(double *)(pPVar1 + 0x870)))))) {
    piVar14 = (int *)folly::dynamic::operator[](in_x8,"minimumValue","");
    if (*piVar14 != 3) {
      folly::dynamic::destroy();
      *piVar14 = 3;
    }
    *(double *)(piVar14 + 2) = dVar30;
  }
  dVar30 = *(double *)(param_1 + 0x878);
  if ((dVar30 != *(double *)(pPVar1 + 0x878)) &&
     ((!NAN(dVar30) || (!NAN(*(double *)(pPVar1 + 0x878)))))) {
    piVar14 = (int *)folly::dynamic::operator[](in_x8,&DAT_0010781d,&DAT_00107821);
    if (*piVar14 != 3) {
      folly::dynamic::destroy();
      *piVar14 = 3;
    }
    *(double *)(piVar14 + 2) = dVar30;
  }
  PVar4 = param_1[0x880];
  PVar5 = pPVar1[0x880];
  sVar23 = *(size_t *)(param_1 + 0x888);
  uVar18 = (ulong)((byte)PVar4 >> 1);
  uVar19 = uVar18;
  if (((byte)PVar4 & 1) != 0) {
    uVar19 = sVar23;
  }
  uVar2 = (ulong)((byte)PVar5 >> 1);
  if (((byte)PVar5 & 1) != 0) {
    uVar2 = *(ulong *)(pPVar1 + 0x888);
  }
  if (uVar19 == uVar2) {
    pPVar16 = pPVar1 + 0x881;
    if (((byte)PVar5 & 1) != 0) {
      pPVar16 = *(Props **)(pPVar1 + 0x890);
    }
    if (((byte)PVar4 & 1) == 0) {
      if (1 < (byte)PVar4) {
        pPVar21 = param_1 + 0x881;
        do {
          if (*pPVar21 != *pPVar16) goto LAB_00118974;
          uVar18 = uVar18 - 1;
          pPVar21 = pPVar21 + 1;
          pPVar16 = pPVar16 + 1;
        } while (uVar18 != 0);
      }
    }
    else {
      pcVar24 = *(char **)(param_1 + 0x890);
      iVar12 = memcmp(pcVar24,pPVar16,sVar23);
      if (iVar12 != 0) goto LAB_001189ac;
    }
  }
  else {
LAB_00118974:
    if (((byte)PVar4 & 1) == 0) {
      uStack_138 = *(ulong *)(param_1 + 0x888);
      local_140 = *(ulong *)(param_1 + 0x880);
      local_130 = *(void **)(param_1 + 0x890);
    }
    else {
      pcVar24 = *(char **)(param_1 + 0x890);
LAB_001189ac:
                    /* try { // try from 001189ac to 001189bb has its CatchHandler @ 00118e0c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_140,pcVar24,sVar23);
    }
    local_b8[0] = 6;
    uStack_a8 = uStack_138;
    local_b0 = local_140;
    local_a0 = local_130;
    local_140 = 0;
    uStack_138 = 0;
    local_130 = (void *)0x0;
                    /* try { // try from 001189dc to 001189ef has its CatchHandler @ 00118e14 */
    pdVar15 = (dynamic *)folly::dynamic::operator[](in_x8,"testID","");
    folly::dynamic::operator=(pdVar15,(dynamic *)local_b8);
    folly::dynamic::destroy();
    if ((local_140 & 1) != 0) {
      operator_delete(local_130);
    }
  }
  if (*(int *)(param_1 + 0x898) == *(int *)(pPVar1 + 0x898)) {
    PVar4 = param_1[0x8a0];
    PVar5 = pPVar1[0x8a0];
    uVar19 = (ulong)((byte)PVar4 >> 1);
    sVar23 = uVar19;
    if (((byte)PVar4 & 1) != 0) {
      sVar23 = *(size_t *)(param_1 + 0x8a8);
    }
    sVar3 = (ulong)((byte)PVar5 >> 1);
    if (((byte)PVar5 & 1) != 0) {
      sVar3 = *(size_t *)(pPVar1 + 0x8a8);
    }
    if (sVar23 != sVar3) goto LAB_00118aa0;
    pPVar16 = pPVar1 + 0x8a1;
    if (((byte)PVar5 & 1) != 0) {
      pPVar16 = *(Props **)(pPVar1 + 0x8b0);
    }
    if (((byte)PVar4 & 1) == 0) {
      if (1 < (byte)PVar4) {
        pPVar21 = param_1 + 0x8a1;
        do {
          if (*pPVar21 != *pPVar16) goto LAB_00118aa0;
          uVar19 = uVar19 - 1;
          pPVar21 = pPVar21 + 1;
          pPVar16 = pPVar16 + 1;
        } while (uVar19 != 0);
      }
    }
    else {
      iVar12 = memcmp(*(void **)(param_1 + 0x8b0),pPVar16,*(size_t *)(param_1 + 0x8a8));
      if (iVar12 != 0) goto LAB_00118aa0;
    }
  }
  else {
LAB_00118aa0:
                    /* try { // try from 00118aa0 to 00118aab has its CatchHandler @ 00118e6c */
    FUN_00119dc0(local_b8,param_1 + 0x898);
                    /* try { // try from 00118aac to 00118abf has its CatchHandler @ 00118e68 */
    pdVar15 = (dynamic *)folly::dynamic::operator[](in_x8,"thumbImage","");
    folly::dynamic::operator=(pdVar15,(dynamic *)local_b8);
    folly::dynamic::destroy();
  }
  iVar12 = *(int *)(param_1 + 0x938);
  if (iVar12 != *(int *)(pPVar1 + 0x938)) {
                    /* try { // try from 00118ae0 to 00118b4b has its CatchHandler @ 00118e90 */
    piVar14 = (int *)folly::dynamic::operator[](in_x8,"thumbTintColor","");
    if (*piVar14 != 4) {
      folly::dynamic::destroy();
      *piVar14 = 4;
    }
    *(long *)(piVar14 + 2) = (long)iVar12;
  }
  fVar29 = *(float *)(param_1 + 0x93c);
  if ((fVar29 != *(float *)(pPVar1 + 0x93c)) &&
     ((!NAN(fVar29) || (!NAN(*(float *)(pPVar1 + 0x93c)))))) {
    piVar14 = (int *)folly::dynamic::operator[](in_x8,"thumbSize","");
    if (*piVar14 != 3) {
      folly::dynamic::destroy();
      *piVar14 = 3;
    }
    *(double *)(piVar14 + 2) = (double)fVar29;
  }
  if (*(int *)(param_1 + 0x940) == *(int *)(pPVar1 + 0x940)) {
    PVar4 = param_1[0x948];
    PVar5 = pPVar1[0x948];
    uVar19 = (ulong)((byte)PVar4 >> 1);
    sVar23 = uVar19;
    if (((byte)PVar4 & 1) != 0) {
      sVar23 = *(size_t *)(param_1 + 0x950);
    }
    sVar3 = (ulong)((byte)PVar5 >> 1);
    if (((byte)PVar5 & 1) != 0) {
      sVar3 = *(size_t *)(pPVar1 + 0x950);
    }
    if (sVar23 != sVar3) goto LAB_00118c04;
    pPVar16 = pPVar1 + 0x949;
    if (((byte)PVar5 & 1) != 0) {
      pPVar16 = *(Props **)(pPVar1 + 0x958);
    }
    if (((byte)PVar4 & 1) == 0) {
      if (1 < (byte)PVar4) {
        pPVar21 = param_1 + 0x949;
        do {
          if (*pPVar21 != *pPVar16) goto LAB_00118c04;
          uVar19 = uVar19 - 1;
          pPVar21 = pPVar21 + 1;
          pPVar16 = pPVar16 + 1;
        } while (uVar19 != 0);
      }
    }
    else {
      iVar12 = memcmp(*(void **)(param_1 + 0x958),pPVar16,*(size_t *)(param_1 + 0x950));
      if (iVar12 != 0) goto LAB_00118c04;
    }
  }
  else {
LAB_00118c04:
                    /* try { // try from 00118c04 to 00118c0f has its CatchHandler @ 00118e64 */
    FUN_00119dc0(local_b8,param_1 + 0x940);
                    /* try { // try from 00118c10 to 00118c23 has its CatchHandler @ 00118e60 */
    pdVar15 = (dynamic *)folly::dynamic::operator[](in_x8,"trackImage","");
    folly::dynamic::operator=(pdVar15,(dynamic *)local_b8);
    folly::dynamic::destroy();
  }
  fVar29 = *(float *)(param_1 + 0x9e0);
  if ((fVar29 != *(float *)(pPVar1 + 0x9e0)) &&
     ((!NAN(fVar29) || (!NAN(*(float *)(pPVar1 + 0x9e0)))))) {
                    /* try { // try from 00118c54 to 00118d1f has its CatchHandler @ 00118e90 */
    piVar14 = (int *)folly::dynamic::operator[](in_x8,"value","");
    if (*piVar14 != 3) {
      folly::dynamic::destroy();
      *piVar14 = 3;
    }
    *(double *)(piVar14 + 2) = (double)fVar29;
  }
  fVar29 = *(float *)(param_1 + 0x9e4);
  if ((fVar29 != *(float *)(pPVar1 + 0x9e4)) &&
     ((!NAN(fVar29) || (!NAN(*(float *)(pPVar1 + 0x9e4)))))) {
    piVar14 = (int *)folly::dynamic::operator[](in_x8,"lowerLimit","");
    if (*piVar14 != 3) {
      folly::dynamic::destroy();
      *piVar14 = 3;
    }
    *(double *)(piVar14 + 2) = (double)fVar29;
  }
  fVar29 = *(float *)(param_1 + 0x9e8);
  if ((fVar29 != *(float *)(pPVar1 + 0x9e8)) &&
     ((!NAN(fVar29) || (!NAN(*(float *)(pPVar1 + 0x9e8)))))) {
    piVar14 = (int *)folly::dynamic::operator[](in_x8,"upperLimit","");
    if (*piVar14 != 3) {
      folly::dynamic::destroy();
      *piVar14 = 3;
    }
    *(double *)(piVar14 + 2) = (double)fVar29;
  }
LAB_00118d48:
  if (*(long *)(lVar8 + 0x28) == local_88) {
    return;
  }
LAB_00118eec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00118ef0  FUN_00118ef0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00118ef0(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  DAT_001348d0 = PTR_construction_vtable_0012fb70 + 0x20;
  DAT_001348d8 = 0;
  uRam00000000001348e8 = 0;
  _DAT_001348e0 = 0;
  DAT_001348f0 = 5;
  uRam0000000000134900 = 0;
  _DAT_001348f8 = 0;
  uRam0000000000134910 = 0;
  _DAT_00134908 = 0;
  DAT_00134918 = 0x3f800000;
  folly::dynamic::destroy();
  DAT_00134924 = 0;
  DAT_0013497f = 0;
  uRam0000000000134e60 = _UNK_00108eec;
  _DAT_00134e58 = _DAT_00108ee4;
  DAT_00134925 = DAT_00108da0;
  uRam0000000000134d68 = _UNK_00108898;
  _DAT_00134d60 = _DAT_00108890;
  uRam0000000000134e50 = _UNK_00108edc;
  _DAT_00134e48 = _DAT_00108ed4;
  DAT_00134a3c = 0;
  uRam0000000000134e40 = _UNK_00108ecc;
  _DAT_00134e38 = _DAT_00108ec4;
  uRam0000000000134e30 = _UNK_00108ebc;
  _DAT_00134e28 = _DAT_00108eb4;
  DAT_00134e76._2_6_ = 0;
  DAT_00134a44 = 0;
  uRam0000000000134989 = 0;
  uRam0000000000134a10 = 0;
  _DAT_00134a08 = 0;
  uRam0000000000134a24 = 0;
  uRam0000000000134a00 = 0;
  _DAT_001349f8 = 0;
  uRam0000000000134c08 = 0;
  _DAT_00134c00 = 0;
  DAT_00134920 = 0x10410710;
  DAT_0013497b = 0x40004;
  uRam0000000000134a30 = 0;
  _DAT_00134a28 = 0;
  DAT_00134a38 = 0x7fc00000;
  DAT_00134a40 = 0x7fc00000;
  DAT_00134a48 = 0x7fc00000;
  DAT_00134a50 = 0x7fc00000;
  DAT_00134a58 = 0x7fc00000;
  DAT_00134a60 = 0x7fc00000;
  DAT_00134a68 = 0x7fc00000;
  DAT_00134a70 = 0x7fc00000;
  DAT_00134a78 = 0x7fc00000;
  DAT_00134a80 = 0x7fc00000;
  DAT_00134a88 = 0x7fc00000;
  DAT_00134a90 = 0x7fc00000;
  DAT_00134a98 = 0x7fc00000;
  DAT_00134aa0 = 0x7fc00000;
  DAT_00134aa8 = 0x7fc00000;
  DAT_00134ab0 = 0x7fc00000;
  uRam0000000000134b11 = 0;
  uRam0000000000134b10 = 0;
  uRam0000000000134b24 = 0;
  _DAT_00134b1c = 0;
  uRam0000000000134b34 = 0;
  _DAT_00134b2c = 0;
  uRam0000000000134b44 = 0;
  _DAT_00134b3c = 0;
  uRam0000000000134b54 = 0;
  _DAT_00134b4c = 0;
  uRam0000000000134b64 = 0;
  _DAT_00134b5c = 0;
  uRam0000000000134b74 = 0;
  _DAT_00134b6c = 0;
  DAT_00134b79._0_3_ = 0;
  DAT_00134b79._3_5_ = 0;
  uRam0000000000134bc0 = 0;
  _DAT_00134bb8 = 0;
  DAT_00134bd4 = 1;
  DAT_00134bd5 = 0;
  DAT_00134bda = 0x23;
  DAT_00134c0f = 0;
  DAT_00134c14 = 0x3f800000;
  uRam0000000000134d30 = 0;
  _DAT_00134d28 = 0;
  uRam0000000000134d40 = 0;
  _DAT_00134d38 = 0;
  uRam0000000000134d20 = 0;
  _DAT_00134d18 = 0;
  uRam0000000000134e70 = 0;
  DAT_00134e76._0_2_ = 0;
  _DAT_00134e68 = 0;
  DAT_00134d4c = 0;
  uRam0000000000134e94 = 0;
  _DAT_00134e8c = 0;
  uRam0000000000134935 = 0;
  _DAT_0013492d = 0;
  uRam0000000000134945 = 0;
  _DAT_0013493d = 0;
  uRam0000000000134955 = 0;
  _DAT_0013494d = 0;
  uRam0000000000134965 = 0;
  _DAT_0013495d = 0;
  uRam0000000000134973 = 0;
  _DAT_0013496b = 0;
  uRam000000000013496d = 0;
  DAT_00134987._0_1_ = 0;
  DAT_00134987._1_1_ = 0;
  uRam0000000000134a1c = 0;
  uRam0000000000134a20 = 0;
  _DAT_00134a14 = 0;
  _DAT_00134a18 = 0;
  _DAT_00134998 = 0;
  _DAT_00134990 = 0;
  _DAT_001349a8 = 0;
  _DAT_001349a0 = 0;
  _DAT_001349b8 = 0;
  _DAT_001349b0 = 0;
  _DAT_001349c8 = 0;
  _DAT_001349c0 = 0;
  _DAT_001349d8 = 0;
  _DAT_001349d0 = 0;
  _DAT_001349e8 = 0;
  _DAT_001349e0 = 0;
  _DAT_001349f0 = 0;
  DAT_00134a4c = 0;
  DAT_00134a54 = 0;
  DAT_00134a5c = 0;
  DAT_00134a64 = 0;
  DAT_00134a6c = 0;
  DAT_00134a74 = 0;
  DAT_00134a7c = 0;
  DAT_00134a84 = 0;
  DAT_00134a8c = 0;
  DAT_00134a94 = 0;
  DAT_00134a9c = 0;
  DAT_00134aa4 = 0;
  DAT_00134aac = 0;
  DAT_00134ab4 = 0;
  DAT_00134ab8 = 0;
  DAT_00134abc = 0;
  DAT_00134ac8 = 0;
  DAT_00134b84 = 0;
  DAT_00134b88 = 0;
  DAT_00134b8c = 0;
  DAT_00134b90 = 0;
  DAT_00134b94 = 0;
  DAT_00134b98 = 0;
  DAT_00134bb0 = 0;
  uRam0000000000134ad8 = 0;
  _DAT_00134ad0 = 0;
  uRam0000000000134ae8 = 0;
  _DAT_00134ae0 = 0;
  uRam0000000000134af8 = 0;
  _DAT_00134af0 = 0;
  uRam0000000000134b08 = 0;
  _DAT_00134b09 = 0;
  _DAT_00134b00 = 0;
  DAT_00134bc8 = 0;
  DAT_00134bd0 = 0;
  DAT_00134bd9 = 0;
  uRam0000000000134be8 = 0;
  _DAT_00134be0 = 0;
  uRam0000000000134bf8 = 0;
  _DAT_00134bf0 = 0;
  DAT_00134c1c = 0;
  DAT_00134c24 = 0;
  DAT_00134c28 = 0;
  DAT_00134c30 = 0;
  DAT_00134c34 = 0;
  DAT_00134c3c = 0;
  DAT_00134c40 = 0;
  DAT_00134c48 = 0;
  DAT_00134c4c = 0;
  DAT_00134c54 = 0;
  DAT_00134c58 = 0;
  DAT_00134c60 = 0;
  DAT_00134c64 = 0;
  DAT_00134c6c = 0;
  DAT_00134c70 = 0;
  DAT_00134c78 = 0;
  DAT_00134c7c = 0;
  DAT_00134c84 = 0;
  DAT_00134c88 = 0;
  DAT_00134c90 = 0;
  DAT_00134c94 = 0;
  DAT_00134c9c = 0;
  DAT_00134ca0 = 0;
  DAT_00134ca8 = 0;
  DAT_00134cac = 0;
  DAT_00134cb4 = 0;
  DAT_00134cb8 = 0;
  DAT_00134cbc = 0;
  DAT_00134cc0 = 0;
  DAT_00134cc4 = 0;
  DAT_00134cc8 = 0;
  DAT_00134ccc = 0;
  DAT_00134cd0 = 0;
  DAT_00134cd4 = 0;
  DAT_00134cd8 = 0;
  DAT_00134cdc = 0;
  DAT_00134ce0 = 0;
  DAT_00134ce4 = 0;
  DAT_00134ce8 = 0;
  DAT_00134cec = 0;
  DAT_00134cf0 = 0;
  DAT_00134cf4 = 0;
  DAT_00134cf8 = 0;
  DAT_00134cfc = 0;
  DAT_00134d00 = 0;
  DAT_00134d04 = 0;
  DAT_00134d08 = 0;
  DAT_00134d0c = 0;
  DAT_00134d10 = 0;
  DAT_00134d14 = 0;
  DAT_00134d58 = 0;
  DAT_00134d48 = 0;
  DAT_00134d54 = 0;
  DAT_00134d70 = 0;
  uRam0000000000134d80 = 0;
  _DAT_00134d78 = 0;
  uRam0000000000134d90 = 0;
  _DAT_00134d88 = 0;
  uRam0000000000134da0 = 0;
  _DAT_00134d98 = 0;
  uRam0000000000134db0 = 0;
  _DAT_00134da8 = 0;
  uRam0000000000134dc0 = 0;
  _DAT_00134db8 = 0;
  uRam0000000000134dd0 = 0;
  _DAT_00134dc8 = 0;
  uRam0000000000134de0 = 0;
  _DAT_00134dd8 = 0;
  uRam0000000000134df0 = 0;
  _DAT_00134de8 = 0;
  uRam0000000000134e00 = 0;
  _DAT_00134df8 = 0;
  uRam0000000000134e10 = 0;
  _DAT_00134e08 = 0;
  uRam0000000000134e20 = 0;
  _DAT_00134e18 = 0;
  DAT_00134e80 = 0;
  DAT_00134e84 = 0;
  DAT_00134e88 = 0;
  DAT_00134ea0 = 0;
  DAT_00134e9c = 0;
  DAT_00134ea8 = 0x101;
  DAT_00134eaa = 0;
  DAT_00134eac = 0;
  DAT_00134eb0 = 0;
  DAT_00134f10 = 0;
  DAT_00134f18 = 0;
  DAT_00134f78 = 0;
  DAT_00134f88 = 0;
  DAT_00134f8c = 0;
  DAT_00134f90 = 0;
  DAT_00134f94 = 0;
  DAT_00134f98 = 0;
  DAT_00134f9c = 0;
  DAT_00134fa0 = 0;
  DAT_00134fa4 = 0;
  DAT_00134fa8 = 0;
  DAT_00134fac = 0;
  DAT_00134f84 = 0;
  DAT_00134f80 = 0;
  DAT_001348d0 = PTR_vtable_0012fb60 + 0x20;
  DAT_00134fe8 = 0;
  DAT_00135020 = 0;
  uRam0000000000135050 = 0;
  _DAT_00135048 = 0;
  uRam0000000000135060 = 0;
  _DAT_00135058 = 0;
  uRam0000000000135040 = 0;
  _DAT_00135038 = 0;
  uRam0000000000135100 = 0;
  _DAT_001350f8 = 0;
  uRam0000000000135110 = 0;
  _DAT_00135108 = 0;
  uRam00000000001350f0 = 0;
  _DAT_001350e8 = 0;
  uRam0000000000135164 = 0;
  uRam0000000000135160 = 0;
  uRam00000000001351d0 = 0;
  _DAT_001351c8 = 0;
  uRam00000000001351e0 = 0;
  _DAT_001351d8 = 0;
  uRam00000000001351c0 = 0;
  _DAT_001351b8 = 0;
  DAT_00135010 = 0;
  DAT_00135018 = 0;
  uRam0000000000134fb8 = 0;
  _DAT_00134fb0 = 0;
  uRam0000000000134fc8 = 0;
  _DAT_00134fc0 = 0;
  uRam0000000000134fd8 = 0;
  _DAT_00134fd0 = 0;
  DAT_00134fe0 = 0;
  DAT_00135000 = 0;
  DAT_00134ff0 = 0;
  DAT_00134ff8 = 0;
  DAT_00135008 = 0;
  DAT_00135028 = DAT_00108d90;
  DAT_00135030 = 0;
  DAT_00135090 = 0;
  DAT_00135098 = 0;
  DAT_001350c8 = 0;
  DAT_001350c0 = 0;
  DAT_001350d0 = 0;
  DAT_00135068 = 0;
  DAT_00135078 = 0;
  DAT_00135070 = 0;
  DAT_00135088 = 0;
  DAT_00135080 = 0;
  DAT_001350b8 = 0;
  DAT_001350a8 = 0;
  DAT_001350a0 = 0;
  DAT_001350b0 = 0;
  DAT_001350d8 = DAT_00108d90;
  DAT_001350e0 = 0;
  DAT_001351a0 = 0;
  DAT_00135190 = 0;
  DAT_00135198 = 0;
  DAT_00135118 = 0;
  DAT_00135128 = 0;
  DAT_00135120 = 0;
  DAT_00135138 = 0;
  DAT_00135130 = 0;
  uRam0000000000135158 = 0;
  _DAT_0013515c = 0;
  _DAT_00135150 = 0;
  uRam0000000000135148 = 0;
  _DAT_00135140 = 0;
  DAT_00135178 = 0;
  DAT_00135170 = 0;
  DAT_00135188 = 0;
  DAT_00135180 = 0;
  DAT_001351a8 = DAT_00108d90;
  DAT_001351b0 = 0;
  DAT_00135240 = 0;
  DAT_00135238 = 0;
  DAT_00135248 = 0;
  DAT_001351e8 = 0;
  DAT_00135210 = 0;
  uRam0000000000135208 = 0;
  _DAT_00135200 = 0;
  uRam00000000001351f8 = 0;
  _DAT_001351f0 = 0;
  DAT_00135220 = 0;
  DAT_00135218 = 0;
  DAT_00135230 = 0;
  DAT_00135228 = 0;
  DAT_00135250 = DAT_00108d90;
  DAT_00135258 = 0;
  DAT_00135290 = 0;
  uRam0000000000135288 = 0;
  _DAT_00135280 = 0;
  uRam0000000000135278 = 0;
  _DAT_00135270 = 0;
  uRam0000000000135268 = 0;
  _DAT_00135260 = 0;
  uRam00000000001352b0 = 0;
  _DAT_001352a8 = 0;
  DAT_001352b8 = 0;
  uRam00000000001352a0 = 0;
  _DAT_00135298 = 0;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011942c  thunk_FUN_00119a10 =====

void thunk_FUN_00119a10(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  FUN_00117358(param_1 + 0x940);
  FUN_00117358(param_1 + 0x898);
  if ((*(byte *)(param_1 + 0x880) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x890));
  }
  FUN_00117358(param_1 + 0x7c8);
  FUN_00117358(param_1 + 0x718);
  pbVar2 = *(byte **)(param_1 + 0x6f8);
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = *(byte **)(param_1 + 0x700);
    pbVar3 = pbVar2;
    if (pbVar1 != pbVar2) {
      do {
        pbVar3 = pbVar1 + -0x18;
        if ((*pbVar3 & 1) != 0) {
          operator_delete(*(void **)(pbVar1 + -8));
        }
        pbVar1 = pbVar3;
      } while (pbVar3 != pbVar2);
      pbVar3 = *(byte **)(param_1 + 0x6f8);
    }
    *(byte **)(param_1 + 0x700) = pbVar2;
    operator_delete(pbVar3);
  }
  if ((*(byte *)(param_1 + 0x6e0) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x6f0));
  }
  FUN_0011795c(param_1,PTR_PTR_0012fb68 + 8);
  return;
}


// ===== 00119430  FUN_00119430 =====

void FUN_00119430(undefined8 param_1)

{
  FUN_0011795c(param_1,PTR_VTT_0012fc78);
  return;
}


// ===== 0011943c  FUN_0011943c =====

void FUN_0011943c(void *param_1)

{
  FUN_0011795c(param_1,PTR_VTT_0012fc78);
  operator_delete(param_1);
  return;
}


// ===== 00119468  FUN_00119468 =====

void FUN_00119468(undefined8 param_1)

{
  FUN_001196b4(param_1,&PTR_PTR_FUN_0012f670);
  return;
}


// ===== 00119474  FUN_00119474 =====

void FUN_00119474(void *param_1)

{
  FUN_001196b4(param_1,&PTR_PTR_FUN_0012f670);
  operator_delete(param_1);
  return;
}


// ===== 001194a0  FUN_001194a0 =====

void FUN_001194a0(undefined4 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = 5;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[10] = 0x3f800000;
  folly::dynamic::destroy();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00119514  FUN_00119514 =====

void FUN_00119514(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0012f728;
  FUN_001156b0(param_1 + 10);
  *param_1 = &PTR_FUN_0012f768;
  folly::dynamic::destroy();
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 0011956c  FUN_0011956c =====

void FUN_0011956c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0012f728;
  FUN_001156b0(param_1 + 10);
  *param_1 = &PTR_FUN_0012f768;
  folly::dynamic::destroy();
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 001195c0  FUN_001195c0 =====

void FUN_001195c0(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0012fc80 + 0x20);
  folly::dynamic::destroy();
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 00119608  FUN_00119608 =====

void FUN_00119608(long *param_1)

{
  *param_1 = (long)(PTR_vtable_0012fc80 + 0x20);
  folly::dynamic::destroy();
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0011964c  FUN_0011964c =====

void FUN_0011964c(void *param_1)

{
  FUN_00119a10();
  operator_delete(param_1);
  return;
}


// ===== 00119670  FUN_00119670 =====

void FUN_00119670(byte *param_1)

{
  if ((param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 001196b4  FUN_001196b4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_001196b4(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  byte *pbVar6;
  byte *pbVar7;
  void *pvVar8;
  byte *pbVar9;
  undefined1 uStack_59;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pvVar4 = (void *)param_1[0xa8];
  *param_1 = *param_2;
  if (pvVar4 != (void *)0x0) {
    param_1[0xa9] = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = (void *)param_1[0xa4];
  if (pvVar4 != (void *)0x0) {
    param_1[0xa5] = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = (void *)param_1[0xa1];
  if (pvVar4 != (void *)0x0) {
    param_1[0xa2] = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = (void *)param_1[0x9e];
  if (pvVar4 != (void *)0x0) {
    param_1[0x9f] = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = (void *)param_1[0x9b];
  if (pvVar4 != (void *)0x0) {
    pvVar8 = (void *)param_1[0x9c];
    pvVar5 = pvVar4;
    if (pvVar8 != pvVar4) {
      do {
        if (*(uint *)((long)pvVar8 + -8) != 0xffffffff) {
                    /* try { // try from 0011977c to 00119783 has its CatchHandler @ 001199e4 */
          (*(code *)(&PTR_FUN_0012f5e0)[*(uint *)((long)pvVar8 + -8)])
                    (&uStack_59,(long)pvVar8 + -0x68);
        }
        pvVar5 = (void *)((long)pvVar8 + -0x70);
        *(undefined4 *)((long)pvVar8 + -8) = 0xffffffff;
        pvVar8 = pvVar5;
      } while (pvVar5 != pvVar4);
      pvVar5 = (void *)param_1[0x9b];
    }
    param_1[0x9c] = pvVar4;
    operator_delete(pvVar5);
  }
  pvVar4 = (void *)param_1[0x98];
  if (pvVar4 != (void *)0x0) {
    param_1[0x99] = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = (void *)param_1[0x95];
  if (pvVar4 != (void *)0x0) {
    param_1[0x96] = pvVar4;
    operator_delete(pvVar4);
  }
  if ((*(byte *)(param_1 + 0x65) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x62);
  }
  else {
    operator_delete((void *)param_1[0x67]);
    bVar1 = *(byte *)(param_1 + 0x62);
  }
  if ((bVar1 & 1) == 0) {
    pvVar4 = (void *)param_1[0x5d];
  }
  else {
    operator_delete((void *)param_1[100]);
    pvVar4 = (void *)param_1[0x5d];
  }
  if (pvVar4 == (void *)0x0) {
    cVar2 = *(char *)(param_1 + 0x5c);
  }
  else {
    pvVar8 = (void *)param_1[0x5e];
    pvVar5 = pvVar4;
    if (pvVar8 != pvVar4) {
      do {
        if ((*(char *)((long)pvVar8 + -8) != '\0') && ((*(byte *)((long)pvVar8 + -0x20) & 1) != 0))
        {
          operator_delete(*(void **)((long)pvVar8 + -0x10));
        }
        if ((*(byte *)((long)pvVar8 + -0x38) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar8 + -0x28));
        }
        pvVar8 = (void *)((long)pvVar8 + -0x38);
      } while (pvVar8 != pvVar4);
      pvVar5 = (void *)param_1[0x5d];
    }
    param_1[0x5e] = pvVar4;
    operator_delete(pvVar5);
    cVar2 = *(char *)(param_1 + 0x5c);
  }
  if ((cVar2 != '\0') && ((*(byte *)(param_1 + 0x59) & 1) != 0)) {
    operator_delete((void *)param_1[0x5b]);
  }
  if ((*(byte *)(param_1 + 0x53) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x50);
  }
  else {
    operator_delete((void *)param_1[0x55]);
    bVar1 = *(byte *)(param_1 + 0x50);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x4d);
  }
  else {
    operator_delete((void *)param_1[0x52]);
    bVar1 = *(byte *)(param_1 + 0x4d);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x4a);
  }
  else {
    operator_delete((void *)param_1[0x4f]);
    bVar1 = *(byte *)(param_1 + 0x4a);
  }
  if ((bVar1 & 1) == 0) {
    pbVar7 = (byte *)param_1[0x46];
  }
  else {
    operator_delete((void *)param_1[0x4c]);
    pbVar7 = (byte *)param_1[0x46];
  }
  if (pbVar7 == (byte *)0x0) {
    pbVar7 = (byte *)param_1[0x43];
  }
  else {
    pbVar6 = (byte *)param_1[0x47];
    pbVar9 = pbVar7;
    if (pbVar6 != pbVar7) {
      do {
        pbVar9 = pbVar6 + -0x18;
        if ((*pbVar9 & 1) != 0) {
          operator_delete(*(void **)(pbVar6 + -8));
        }
        pbVar6 = pbVar9;
      } while (pbVar9 != pbVar7);
      pbVar9 = (byte *)param_1[0x46];
    }
    param_1[0x47] = pbVar7;
    operator_delete(pbVar9);
    pbVar7 = (byte *)param_1[0x43];
  }
  if (pbVar7 == (byte *)0x0) {
    bVar1 = *(byte *)(param_1 + 0x40);
  }
  else {
    pbVar6 = (byte *)param_1[0x44];
    pbVar9 = pbVar7;
    if (pbVar6 != pbVar7) {
      do {
        pbVar9 = pbVar6 + -0x18;
        if ((*pbVar9 & 1) != 0) {
          operator_delete(*(void **)(pbVar6 + -8));
        }
        pbVar6 = pbVar9;
      } while (pbVar9 != pbVar7);
      pbVar9 = (byte *)param_1[0x43];
    }
    param_1[0x44] = pbVar7;
    operator_delete(pbVar9);
    bVar1 = *(byte *)(param_1 + 0x40);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete((void *)param_1[0x42]);
  }
  *param_1 = param_2[1];
  FUN_001156b0(param_1 + 10);
  *param_1 = param_2[2];
  folly::dynamic::destroy();
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001199e8  FUN_001199e8 =====

void FUN_001199e8(undefined8 param_1,long param_2)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_2 + 8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_2 + 0x10) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 001199fc  FUN_001199fc =====

void FUN_001199fc(undefined8 param_1,long param_2)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_2 + 0x48);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_2 + 0x50) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00119a10  FUN_00119a10 =====

void FUN_00119a10(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  FUN_00117358(param_1 + 0x940);
  FUN_00117358(param_1 + 0x898);
  if ((*(byte *)(param_1 + 0x880) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x890));
  }
  FUN_00117358(param_1 + 0x7c8);
  FUN_00117358(param_1 + 0x718);
  pbVar2 = *(byte **)(param_1 + 0x6f8);
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = *(byte **)(param_1 + 0x700);
    pbVar3 = pbVar2;
    if (pbVar1 != pbVar2) {
      do {
        pbVar3 = pbVar1 + -0x18;
        if ((*pbVar3 & 1) != 0) {
          operator_delete(*(void **)(pbVar1 + -8));
        }
        pbVar1 = pbVar3;
      } while (pbVar3 != pbVar2);
      pbVar3 = *(byte **)(param_1 + 0x6f8);
    }
    *(byte **)(param_1 + 0x700) = pbVar2;
    operator_delete(pbVar3);
  }
  if ((*(byte *)(param_1 + 0x6e0) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x6f0));
  }
  FUN_0011795c(param_1,PTR_PTR_0012fb68 + 8);
  return;
}


// ===== 00119ad0  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init_copy_ctor_external =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::__init_copy_ctor_external(char const*, unsigned long) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
__init_copy_ctor_external
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  
  if (param_2 < 0x17) {
    __dest = this + 1;
    *this = SUB41((int)param_2 << 1,0);
  }
  else {
    if (0xffffffffffffffef < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_00119b3c();
    }
    __dest = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             operator_new((param_2 | 0xf) + 1);
    *(ulong *)(this + 8) = param_2;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x10) = __dest;
    *(ulong *)this = (param_2 | 0xf) + 2;
  }
  memmove(__dest,param_1,param_2 + 1);
  return;
}


// ===== 00119b3c  FUN_00119b3c =====

void FUN_00119b3c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00119b50("basic_string");
}


// ===== 00119b50  FUN_00119b50 =====

void FUN_00119b50(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 00119b6c to 00119b73 has its CatchHandler @ 00119b8c */
  FUN_00119ba0(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_typeinfo_0012fc58,PTR__length_error_0012fc20);
}


// ===== 00119ba0  FUN_00119ba0 =====

void FUN_00119ba0(logic_error *param_1,char *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  *(undefined **)param_1 = PTR_vtable_0012fc60 + 0x10;
  return;
}


// ===== 00119bd0  FUN_00119bd0 =====

void FUN_00119bd0(void)

{
  bad_array_new_length *this;
  
  this = (bad_array_new_length *)__cxa_allocate_exception(8);
  std::bad_array_new_length::bad_array_new_length(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_typeinfo_0012fc68,PTR__bad_array_new_length_0012fc28);
}


// ===== 00119c04  FUN_00119c04 =====

void FUN_00119c04(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  byte local_50 [16];
  void *local_40;
  TypeError aTStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc
            (local_50,param_1);
                    /* try { // try from 00119c30 to 00119c3f has its CatchHandler @ 00119c68 */
  folly::TypeError::TypeError(aTStack_38,local_50,param_2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00119c50 to 00119c57 has its CatchHandler @ 00119c58 */
    uVar2 = FUN_00119c98(aTStack_38);
                    /* catch() { ... } // from try @ 00119c50 with catch @ 00119c58 */
    std::runtime_error::~runtime_error((runtime_error *)aTStack_38);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00110404(uVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00119c98  FUN_00119c98 =====

void FUN_00119c98(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
  FUN_00119d5c(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_typeinfo_0012fb78,PTR__runtime_error_0012fc30);
}


// ===== 00119cd4  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc =====

void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc
               (long *param_1,char *param_2)

{
  size_t __n;
  void *__dest;
  
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_00119b3c();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00119d44;
  }
  else {
    __dest = operator_new((__n | 0xf) + 1);
    param_1[1] = __n;
    param_1[2] = (long)__dest;
    *param_1 = (__n | 0xf) + 2;
  }
  memmove(__dest,param_2,__n);
LAB_00119d44:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


// ===== 00119d5c  FUN_00119d5c =====

void FUN_00119d5c(runtime_error *param_1,runtime_error *param_2)

{
  std::runtime_error::runtime_error(param_1,param_2);
  *(undefined ***)param_1 = &PTR__runtime_error_0012f618;
  return;
}


// ===== 00119d88  FUN_00119d88 =====

void FUN_00119d88(runtime_error *param_1)

{
  std::runtime_error::~runtime_error(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00119dac  FUN_00119dac =====

void FUN_00119dac(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00119b50("vector");
}


// ===== 00119dc0  FUN_00119dc0 =====

void FUN_00119dc0(undefined4 *param_1,int *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  int iVar6;
  dynamic *pdVar7;
  int *piVar8;
  float fVar9;
  ulong local_180;
  undefined8 uStack_178;
  void *local_170;
  ulong local_160;
  undefined8 uStack_158;
  void *local_150;
  ulong local_140;
  undefined8 uStack_138;
  void *local_130;
  ulong local_120;
  undefined8 uStack_118;
  void *local_110;
  ulong local_100;
  undefined8 uStack_f8;
  void *local_f0;
  undefined4 local_e8 [2];
  ulong local_e0;
  undefined8 uStack_d8;
  void *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8 [2];
  undefined4 local_b0;
  char cStack_ac;
  undefined2 uStack_ab;
  char cStack_a9;
  uint uStack_a8;
  char cStack_a4;
  undefined2 uStack_a3;
  undefined1 uStack_a1;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  local_88[0] = 5;
  local_68 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_60 = 0x3f800000;
  *param_1 = 5;
  local_80 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[10] = 0x3f800000;
  folly::dynamic::destroy();
  if (*param_2 == 2) {
    local_88[0] = 6;
    local_80 = 0x6c61636f6c0a;
                    /* try { // try from 00119ea8 to 00119ebb has its CatchHandler @ 0011a4f0 */
    pdVar7 = (dynamic *)folly::dynamic::operator[](param_1,&DAT_00108036,&DAT_0010803a);
  }
  else if (*param_2 == 1) {
    local_88[0] = 6;
    local_80 = 0x65746f6d65720c;
                    /* try { // try from 00119e68 to 00119e7b has its CatchHandler @ 0011a4f8 */
    pdVar7 = (dynamic *)folly::dynamic::operator[](param_1,&DAT_00108036,&DAT_0010803a);
  }
  else {
    uStack_78 = uStack_78 & 0xffffffffffffff00;
    local_88[0] = 6;
    local_80 = 0x64696c61766e690e;
                    /* try { // try from 00119eec to 00119eff has its CatchHandler @ 0011a4e8 */
    pdVar7 = (dynamic *)folly::dynamic::operator[](param_1,&DAT_00108036,&DAT_0010803a);
  }
  folly::dynamic::operator=(pdVar7,(dynamic *)local_88);
  folly::dynamic::destroy();
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    uStack_f8 = *(undefined8 *)(param_2 + 4);
    local_100 = *(ulong *)(param_2 + 2);
    local_f0 = *(void **)(param_2 + 6);
  }
  else {
                    /* try { // try from 00119f34 to 00119f3b has its CatchHandler @ 0011a518 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_100,*(char **)(param_2 + 6),*(ulong *)(param_2 + 4));
  }
  local_88[0] = 6;
  uStack_78 = uStack_f8;
  local_80 = local_100;
  local_70 = local_f0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = (void *)0x0;
                    /* try { // try from 00119f5c to 00119f6f has its CatchHandler @ 0011a580 */
  pdVar7 = (dynamic *)folly::dynamic::operator[](param_1,&DAT_00107db4,&DAT_00107db7);
  folly::dynamic::operator=(pdVar7,(dynamic *)local_88);
  folly::dynamic::destroy();
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
  iVar6 = param_2[8];
                    /* try { // try from 00119f94 to 00119fa7 has its CatchHandler @ 0011a5a4 */
  piVar8 = (int *)folly::dynamic::operator[](param_1,"isForceCached","");
  if (*piVar8 != 2) {
    folly::dynamic::destroy();
    *piVar8 = 2;
  }
  *(char *)(piVar8 + 2) = (char)iVar6;
  if ((*(byte *)(param_2 + 10) & 1) == 0) {
    uStack_118 = *(undefined8 *)(param_2 + 0xc);
    local_120 = *(ulong *)(param_2 + 10);
    local_110 = *(void **)(param_2 + 0xe);
  }
  else {
                    /* try { // try from 00119ff0 to 00119ff7 has its CatchHandler @ 0011a510 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_120,*(char **)(param_2 + 0xe),*(ulong *)(param_2 + 0xc));
  }
  local_88[0] = 6;
  uStack_78 = uStack_118;
  local_80 = local_120;
  local_70 = local_110;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = (void *)0x0;
                    /* try { // try from 0011a018 to 0011a02b has its CatchHandler @ 0011a560 */
  pdVar7 = (dynamic *)folly::dynamic::operator[](param_1,"bundle","");
  folly::dynamic::operator=(pdVar7,(dynamic *)local_88);
  folly::dynamic::destroy();
  if ((local_120 & 1) != 0) {
    operator_delete(local_110);
  }
  fVar9 = (float)param_2[0x10];
                    /* try { // try from 0011a050 to 0011a063 has its CatchHandler @ 0011a5a4 */
  piVar8 = (int *)folly::dynamic::operator[](param_1,"scale","");
  if (*piVar8 != 3) {
    folly::dynamic::destroy();
    *piVar8 = 3;
  }
  local_b8[0] = 5;
  local_88[0] = 5;
  *(double *)(piVar8 + 2) = (double)fVar9;
  local_98 = 0;
  uStack_a8 = 0;
  cStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a1 = 0;
  local_a0 = 0;
  local_90 = 0x3f800000;
  local_b0 = 0;
  cStack_ac = 0;
  uStack_ab = 0;
  cStack_a9 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = CONCAT44(local_60._4_4_,0x3f800000);
  folly::dynamic::destroy();
  fVar9 = (float)param_2[0x11];
                    /* try { // try from 0011a0c4 to 0011a15b has its CatchHandler @ 0011a5ac */
  piVar8 = (int *)folly::dynamic::operator[](local_88,"width","");
  if (*piVar8 != 3) {
    folly::dynamic::destroy();
    *piVar8 = 3;
  }
  *(double *)(piVar8 + 2) = (double)fVar9;
  fVar9 = (float)param_2[0x12];
  piVar8 = (int *)folly::dynamic::operator[](local_88,"height","");
  if (*piVar8 != 3) {
    folly::dynamic::destroy();
    *piVar8 = 3;
  }
  *(double *)(piVar8 + 2) = (double)fVar9;
  pdVar7 = (dynamic *)folly::dynamic::operator[](param_1,&DAT_00108193,&DAT_00108197);
  folly::dynamic::operator=(pdVar7,(dynamic *)local_88);
  if ((*(byte *)(param_2 + 0x14) & 1) == 0) {
    uStack_138 = *(undefined8 *)(param_2 + 0x16);
    local_140 = *(ulong *)(param_2 + 0x14);
    local_130 = *(void **)(param_2 + 0x18);
  }
  else {
                    /* try { // try from 0011a180 to 0011a187 has its CatchHandler @ 0011a508 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_140,*(char **)(param_2 + 0x18),*(ulong *)(param_2 + 0x16));
  }
  local_b8[0] = 6;
  uStack_a8 = (uint)uStack_138;
  cStack_a4 = (char)((ulong)uStack_138 >> 0x20);
  uStack_a3 = (undefined2)((ulong)uStack_138 >> 0x28);
  uStack_a1 = (undefined1)((ulong)uStack_138 >> 0x38);
  local_b0 = (undefined4)local_140;
  cStack_ac = (char)(local_140 >> 0x20);
  uStack_ab = (undefined2)(local_140 >> 0x28);
  cStack_a9 = (char)(local_140 >> 0x38);
  local_a0 = local_130;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = (void *)0x0;
                    /* try { // try from 0011a1a8 to 0011a1bb has its CatchHandler @ 0011a540 */
  pdVar7 = (dynamic *)folly::dynamic::operator[](param_1,&DAT_001076c7,&DAT_001076cb);
  folly::dynamic::operator=(pdVar7,(dynamic *)local_b8);
  folly::dynamic::destroy();
  if ((local_140 & 1) != 0) {
    operator_delete(local_130);
  }
  if ((*(byte *)(param_2 + 0x1a) & 1) == 0) {
    uStack_158 = *(undefined8 *)(param_2 + 0x1c);
    local_160 = *(ulong *)(param_2 + 0x1a);
    local_150 = *(void **)(param_2 + 0x1e);
  }
  else {
                    /* try { // try from 0011a200 to 0011a207 has its CatchHandler @ 0011a500 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_160,*(char **)(param_2 + 0x1e),*(ulong *)(param_2 + 0x1c));
  }
  local_b8[0] = 6;
  uStack_a8 = (uint)uStack_158;
  cStack_a4 = (char)((ulong)uStack_158 >> 0x20);
  uStack_a3 = (undefined2)((ulong)uStack_158 >> 0x28);
  uStack_a1 = (undefined1)((ulong)uStack_158 >> 0x38);
  local_b0 = (undefined4)local_160;
  cStack_ac = (char)(local_160 >> 0x20);
  uStack_ab = (undefined2)(local_160 >> 0x28);
  cStack_a9 = (char)(local_160 >> 0x38);
  local_a0 = local_150;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = (void *)0x0;
                    /* try { // try from 0011a228 to 0011a23b has its CatchHandler @ 0011a520 */
  pdVar7 = (dynamic *)folly::dynamic::operator[](param_1,"method","");
  folly::dynamic::operator=(pdVar7,(dynamic *)local_b8);
  folly::dynamic::destroy();
  if ((local_160 & 1) != 0) {
    operator_delete(local_150);
  }
  iVar6 = param_2[0x20];
  if (iVar6 == 1) {
    cStack_a9 = '\0';
    local_b8[0] = 6;
    local_b0 = 0x6c65720c;
    cStack_ac = 'o';
    uStack_ab = 0x6461;
                    /* try { // try from 0011a32c to 0011a33f has its CatchHandler @ 0011a4dc */
    pdVar7 = (dynamic *)folly::dynamic::operator[](param_1,"cache","");
  }
  else if (iVar6 == 2) {
    cStack_a4 = '\0';
    local_b8[0] = 6;
    local_b0._1_3_ = (undefined3)s_force_cache_00107674._0_8_;
    local_b0 = CONCAT31(local_b0._1_3_,0x16);
    cStack_ac = SUB81(s_force_cache_00107674._0_8_,3);
    uStack_ab = SUB82(s_force_cache_00107674._0_8_,4);
    cStack_a9 = SUB81(s_force_cache_00107674._0_8_,6);
    uStack_a8 = CONCAT31(0x656863,SUB81(s_force_cache_00107674._0_8_,7));
                    /* try { // try from 0011a2ec to 0011a2ff has its CatchHandler @ 0011a4e0 */
    pdVar7 = (dynamic *)folly::dynamic::operator[](param_1,"cache","");
  }
  else if (iVar6 == 3) {
    local_b8[0] = 6;
    uStack_a1 = 0;
    local_b0._1_3_ = (undefined3)s_only_if_cached_00107f9b._0_6_;
    local_b0 = CONCAT31(local_b0._1_3_,0x1c);
    cStack_ac = SUB61(s_only_if_cached_00107f9b._0_6_,3);
    uStack_ab = SUB62(s_only_if_cached_00107f9b._0_6_,4);
    cStack_a9 = (char)s_only_if_cached_00107f9b._6_2_;
    uStack_a8 = (uint)(CONCAT62(s_only_if_cached_00107f9b._8_6_,s_only_if_cached_00107f9b._6_2_) >>
                      8);
    cStack_a4 = SUB61(s_only_if_cached_00107f9b._8_6_,3);
    uStack_a3 = SUB62(s_only_if_cached_00107f9b._8_6_,4);
                    /* try { // try from 0011a2a4 to 0011a2b7 has its CatchHandler @ 0011a4e4 */
    pdVar7 = (dynamic *)folly::dynamic::operator[](param_1,"cache","");
  }
  else {
    uStack_a8 = uStack_a8 & 0xffffff00;
    local_b8[0] = 6;
    local_b0 = 0x6665640e;
    cStack_ac = 'a';
    uStack_ab = 0x6c75;
    cStack_a9 = 't';
                    /* try { // try from 0011a370 to 0011a383 has its CatchHandler @ 0011a4d8 */
    pdVar7 = (dynamic *)folly::dynamic::operator[](param_1,"cache","");
  }
  folly::dynamic::operator=(pdVar7,(dynamic *)local_b8);
  folly::dynamic::destroy();
  local_c8 = 0;
  local_e8[0] = 5;
  uStack_d8 = 0;
  local_d0 = (void *)0x0;
  local_c0 = 0x3f800000;
  local_b8[0] = 5;
  local_e0 = 0;
  local_b0 = 0;
  cStack_ac = 0;
  uStack_ab = 0;
  cStack_a9 = 0;
  uStack_a8 = 0;
  cStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a1 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = CONCAT44(local_90._4_4_,0x3f800000);
  folly::dynamic::destroy();
  pbVar3 = *(byte **)(param_2 + 0x24);
  for (pbVar1 = *(byte **)(param_2 + 0x22); pbVar1 != pbVar3; pbVar1 = pbVar1 + 0x30) {
    if ((*(ulong *)(pbVar1 + 0x18) & 1) == 0) {
      local_170 = *(void **)(pbVar1 + 0x28);
      uStack_178 = *(undefined8 *)(pbVar1 + 0x20);
      local_180 = *(ulong *)(pbVar1 + 0x18);
    }
    else {
                    /* try { // try from 0011a410 to 0011a417 has its CatchHandler @ 0011a5b4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_180,*(char **)(pbVar1 + 0x28),*(ulong *)(pbVar1 + 0x20));
    }
    uStack_d8 = uStack_178;
    local_e0 = local_180;
    local_e8[0] = 6;
    local_180 = 0;
    uStack_178 = 0;
    local_d0 = local_170;
    local_170 = (void *)0x0;
    uVar2 = *(ulong *)(pbVar1 + 8);
    pbVar4 = *(byte **)(pbVar1 + 0x10);
    if ((*pbVar1 & 1) == 0) {
      pbVar4 = pbVar1 + 1;
      uVar2 = (ulong)(*pbVar1 >> 1);
    }
                    /* try { // try from 0011a44c to 0011a457 has its CatchHandler @ 0011a5bc */
    pdVar7 = (dynamic *)folly::dynamic::operator[](local_b8,pbVar4,pbVar4 + uVar2);
    folly::dynamic::operator=(pdVar7,(dynamic *)local_e8);
    folly::dynamic::destroy();
    if ((local_180 & 1) != 0) {
      operator_delete(local_170);
    }
  }
                    /* try { // try from 0011a47c to 0011a497 has its CatchHandler @ 0011a5a0 */
  pdVar7 = (dynamic *)folly::dynamic::operator[](param_1,"headers","");
  folly::dynamic::operator=(pdVar7,(dynamic *)local_b8);
  folly::dynamic::destroy();
  folly::dynamic::destroy();
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0011a60c  FUN_0011a60c =====

bool FUN_0011a60c(int *param_1)

{
  if (param_1[0xc] == 1) {
    return 1 < (uint)param_1[2];
  }
  if (param_1[0xc] == 0) {
    return *param_1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0011a6d0();
}


// ===== 0011a648  FUN_0011a648 =====

void FUN_0011a648(undefined8 param_1,byte *param_2)

{
  long lVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0011a704(&local_40);
  if ((*param_2 & 1) != 0) {
    operator_delete(*(void **)(param_2 + 0x10));
  }
  *(undefined8 *)(param_2 + 8) = uStack_38;
  *(undefined8 *)param_2 = local_40;
  *(undefined8 *)(param_2 + 0x10) = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011a6b4  FUN_0011a6b4 =====

void FUN_0011a6b4(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  
  uVar1 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar1 = (ulong)(*param_2 >> 1);
  }
  FUN_0011a86c(param_1,pbVar2,uVar1);
  return;
}


// ===== 0011a6d0  FUN_0011a6d0 =====

void FUN_0011a6d0(void)

{
  long *plVar1;
  
  plVar1 = (long *)__cxa_allocate_exception(8);
  *plVar1 = (long)(PTR_vtable_0012fc90 + 0x10);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar1,PTR_typeinfo_0012fc88,PTR__exception_0012fc50);
}


// ===== 0011a704  FUN_0011a704 =====

void FUN_0011a704(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,int *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2[0xc] == 1) {
    plVar3 = *(long **)param_2;
    facebook::jsi::Value::asString((IRuntime *)(param_2 + 2));
                    /* try { // try from 0011a78c to 0011a79b has its CatchHandler @ 0011a834 */
    (**(code **)(*plVar3 + 0x120))(param_1,plVar3,&local_40);
    if (local_40 != (undefined8 *)0x0) {
      (**(code **)*local_40)();
    }
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else if (param_2[0xc] == 0) {
    if (*param_2 == 6) {
      if ((*(byte *)(param_2 + 2) & 1) == 0) {
        if (*(long *)(lVar1 + 0x28) == local_38) {
          uVar4 = *(undefined8 *)(param_2 + 2);
          uVar2 = *(undefined8 *)(param_2 + 6);
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 4);
          *(undefined8 *)param_1 = uVar4;
          *(undefined8 *)(param_1 + 0x10) = uVar2;
          return;
        }
      }
      else if (*(long *)(lVar1 + 0x28) == local_38) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external(param_1,*(char **)(param_2 + 6),*(ulong *)(param_2 + 4));
        return;
      }
    }
    else if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00119c04(*(undefined8 *)PTR_name_0012fc98);
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_0011a6d0();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011a86c  FUN_0011a86c =====

basic_ostream * FUN_0011a86c(basic_ostream *param_1,long param_2,long param_3)

{
  uint uVar1;
  ulong __n;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  void *pvVar10;
  long lVar11;
  sentry local_90 [16];
  ulong local_80;
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 0011a8a4 to 0011a8af has its CatchHandler @ 0011aad0 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry(local_90,param_1);
  if (local_90[0] == (sentry)0x0) goto LAB_0011aa58;
  lVar8 = *(long *)(*(long *)param_1 + -0x18);
  uVar3 = *(uint *)(param_1 + lVar8 + 0x90);
  plVar9 = *(long **)(param_1 + lVar8 + 0x28);
  uVar1 = *(uint *)(param_1 + lVar8 + 8);
  if (uVar3 == 0xffffffff) {
                    /* try { // try from 0011a8d8 to 0011a8e3 has its CatchHandler @ 0011aac0 */
    std::__ndk1::ios_base::getloc();
                    /* try { // try from 0011a8e4 to 0011a903 has its CatchHandler @ 0011aaac */
    plVar4 = (long *)std::__ndk1::locale::use_facet((id *)&local_80);
    uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
    std::__ndk1::locale::~locale((locale *)&local_80);
    uVar3 = uVar3 & 0xff;
    *(uint *)(param_1 + lVar8 + 0x90) = uVar3;
  }
  lVar7 = param_2 + param_3;
  if ((uVar1 & 0xb0) != 0x20) {
    lVar7 = param_2;
  }
  if (plVar9 != (long *)0x0) {
    lVar11 = lVar7 - param_2;
    __n = *(long *)(param_1 + lVar8 + 0x18) - param_3;
    if (__n == 0 || *(long *)(param_1 + lVar8 + 0x18) < param_3) {
      __n = 0;
    }
                    /* try { // try from 0011a950 to 0011a99b has its CatchHandler @ 0011aac0 */
    if ((lVar11 < 1) ||
       (lVar5 = (**(code **)(*plVar9 + 0x60))(plVar9,param_2,lVar11), lVar5 == lVar11)) {
      if (0 < (long)__n) {
        if (__n < 0x17) {
          pvVar10 = (void *)((ulong)&local_80 | 1);
          local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
        }
        else {
          uVar6 = (__n | 0xf) + 1;
          pvVar10 = operator_new(uVar6);
          local_80 = uVar6 | 1;
          local_78 = __n;
          local_70 = pvVar10;
        }
        memset(pvVar10,uVar3,__n);
        *(undefined1 *)((long)pvVar10 + __n) = 0;
        pvVar10 = (void *)((ulong)&local_80 | 1);
        if ((local_80 & 1) != 0) {
          pvVar10 = local_70;
        }
                    /* try { // try from 0011a9e0 to 0011a9eb has its CatchHandler @ 0011aa94 */
        uVar6 = (**(code **)(*plVar9 + 0x60))(plVar9,pvVar10,__n);
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
        if (uVar6 != __n) goto LAB_0011aa3c;
      }
      lVar11 = (param_2 + param_3) - lVar7;
                    /* try { // try from 0011aa1c to 0011aa2b has its CatchHandler @ 0011aac0 */
      if ((lVar11 < 1) ||
         (lVar7 = (**(code **)(*plVar9 + 0x60))(plVar9,lVar7,lVar11), lVar7 == lVar11)) {
        *(undefined8 *)(param_1 + lVar8 + 0x18) = 0;
        goto LAB_0011aa58;
      }
    }
  }
LAB_0011aa3c:
                    /* try { // try from 0011aa50 to 0011aa57 has its CatchHandler @ 0011aabc */
  std::__ndk1::ios_base::clear((int)param_1 + (int)*(undefined8 *)(*(long *)param_1 + -0x18));
LAB_0011aa58:
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(local_90);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011ab1c  FUN_0011ab1c =====

/* WARNING: Removing unreachable block (ram,0x0011ac2c) */

void FUN_0011ab1c(int *param_1,long *param_2)

{
  dynamic *pdVar1;
  byte *pbVar2;
  dynamic *pdVar3;
  long lVar4;
  byte *pbVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar11;
  char *pcVar12;
  long lVar13;
  IRuntime *pIVar14;
  char *pcVar15;
  long *plVar16;
  long lVar17;
  byte *pbVar18;
  char *local_100;
  char *local_f8;
  char *local_f0;
  Value aVStack_e8 [16];
  undefined8 *local_d8;
  Value aVStack_d0 [16];
  IRuntime *local_c0;
  ulong uStack_b8;
  char *local_b0;
  IRuntime *local_a0;
  ulong uStack_98;
  char *local_90;
  uint local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (param_1[0xc] == 1) {
    if (param_1[2] == 7) {
      plVar16 = *(long **)param_1;
                    /* try { // try from 0011ac70 to 0011ace3 has its CatchHandler @ 0011b1d4 */
      local_c0 = (IRuntime *)(**(code **)(*plVar16 + 0x88))(plVar16,*(undefined8 *)(param_1 + 4));
      uVar9 = (**(code **)(*plVar16 + 0x1e0))(plVar16,&local_c0);
      if ((uVar9 & 1) != 0) {
        local_100 = (char *)(**(code **)(*plVar16 + 0x88))(plVar16,local_c0);
        lVar13 = (**(code **)(*plVar16 + 0x240))(plVar16,&local_100);
        if (lVar13 != 0) {
          (**(code **)(*plVar16 + 0x260))(&local_a0,plVar16,&local_100,0);
          facebook::jsi::Value::~Value((Value *)&local_a0);
        }
        if (local_100 != (char *)0x0) {
          (*(code *)**(undefined8 **)local_100)();
        }
      }
      if (local_c0 != (IRuntime *)0x0) {
        (*(code *)**(undefined8 **)local_c0)();
      }
      if ((uVar9 & 1) != 0) {
        if (param_1[0xc] == 1) {
          pIVar14 = *(IRuntime **)param_1;
          puVar10 = (undefined8 *)
                    (**(code **)(*(long *)pIVar14 + 0x88))(pIVar14,*(undefined8 *)(param_1 + 4));
                    /* try { // try from 0011ae3c to 0011ae4b has its CatchHandler @ 0011b190 */
          local_d8 = (undefined8 *)(**(code **)(*(long *)pIVar14 + 0x88))(pIVar14,puVar10);
                    /* try { // try from 0011ae58 to 0011ae63 has its CatchHandler @ 0011b188 */
          lVar13 = (**(code **)(*(long *)pIVar14 + 0x240))(pIVar14,&local_d8);
          local_100 = (char *)0x0;
          local_f8 = (char *)0x0;
          local_f0 = (char *)0x0;
                    /* try { // try from 0011ae70 to 0011ae7b has its CatchHandler @ 0011b184 */
          FUN_0011b6cc(&local_100,lVar13);
          if (lVar13 != 0) {
            lVar17 = 0;
            do {
                    /* try { // try from 0011aeb4 to 0011aec7 has its CatchHandler @ 0011b1f4 */
              (**(code **)(*(long *)pIVar14 + 0x260))(aVStack_e8,pIVar14,&local_d8,lVar17);
                    /* try { // try from 0011aec8 to 0011aed7 has its CatchHandler @ 0011b230 */
              facebook::jsi::Value::Value(aVStack_d0,pIVar14,aVStack_e8);
              local_c0 = pIVar14;
              facebook::jsi::Value::Value((Value *)&uStack_b8,aVStack_d0);
              local_a0 = local_c0;
              facebook::jsi::Value::Value((Value *)&uStack_98,(Value *)&uStack_b8);
              local_70 = 1;
              facebook::jsi::Value::~Value((Value *)&uStack_b8);
              facebook::jsi::Value::~Value(aVStack_d0);
              pcVar12 = local_f8;
              if (local_f8 < local_f0) {
                *local_f8 = '\0';
                local_f8[0x30] = -1;
                local_f8[0x31] = -1;
                local_f8[0x32] = -1;
                local_f8[0x33] = -1;
                if (local_70 == 0xffffffff) {
                  uVar9 = 0xffffffff;
                  local_f8 = local_f8 + 0x38;
                }
                else {
                    /* try { // try from 0011af3c to 0011af4b has its CatchHandler @ 0011b1ac */
                  (*(code *)(&
                            PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>&&>_0012f798
                            )[local_70])(&local_c0,local_f8,&local_a0);
                  uVar9 = (ulong)local_70;
                  local_f8 = pcVar12 + 0x38;
                  *(uint *)(pcVar12 + 0x30) = local_70;
                }
              }
              else {
                    /* try { // try from 0011af5c to 0011af67 has its CatchHandler @ 0011b1b0 */
                local_f8 = (char *)FUN_0011b944(&local_100,&local_a0);
                uVar9 = (ulong)local_70;
              }
              if (uVar9 != 0xffffffff) {
                    /* try { // try from 0011af90 to 0011af9b has its CatchHandler @ 0011b1c8 */
                (*(code *)(&PTR_FUN_0012f788)[uVar9])(&local_c0,&local_a0);
              }
              facebook::jsi::Value::~Value(aVStack_e8);
              lVar17 = lVar17 + 1;
            } while (lVar13 != lVar17);
          }
          if (local_d8 != (undefined8 *)0x0) {
            (**(code **)*local_d8)();
          }
          if (puVar10 != (undefined8 *)0x0) {
            (**(code **)*puVar10)();
          }
          goto LAB_0011afc8;
        }
        if (param_1[0xc] == 0) goto LAB_0011ab6c;
        goto LAB_0011ad28;
      }
    }
LAB_0011ad3c:
    pbVar2 = (byte *)*param_2;
    pbVar18 = (byte *)param_2[1];
    while (pbVar5 = pbVar18, pbVar5 != pbVar2) {
      pbVar18 = pbVar5 + -0x18;
      if ((*pbVar18 & 1) != 0) {
        operator_delete(*(void **)(pbVar5 + -8));
      }
    }
    param_2[1] = (long)pbVar2;
    FUN_0011b4f4(param_2,1);
    local_c0 = (IRuntime *)0x0;
    uStack_b8 = 0;
    local_b0 = (char *)0x0;
                    /* try { // try from 0011ad88 to 0011add7 has its CatchHandler @ 0011b1d8 */
    FUN_0011a704(&local_a0,param_1);
    pIVar14 = local_a0;
    pbVar11 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              param_2[1];
    uStack_b8 = uStack_98;
    local_c0 = local_a0;
    local_b0 = local_90;
    if (pbVar11 < (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  param_2[2]) {
      if (((ulong)local_a0 & 1) == 0) {
        *(ulong *)(pbVar11 + 8) = uStack_98;
        *(IRuntime **)pbVar11 = local_a0;
        *(char **)(pbVar11 + 0x10) = local_90;
      }
      else {
                    /* try { // try from 0011adf0 to 0011adfb has its CatchHandler @ 0011b198 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external(pbVar11,local_90,uStack_98);
      }
      param_2[1] = (long)(pbVar11 + 0x18);
      param_2[1] = (long)(pbVar11 + 0x18);
    }
    else {
      lVar13 = FUN_0011bc1c(param_2,&local_c0);
      param_2[1] = lVar13;
      pIVar14 = local_c0;
    }
    pcVar7 = (char *)((ulong)pIVar14 & 1);
    pcVar12 = local_b0;
joined_r0x0011ade4:
    if (pcVar7 != (char *)0x0) {
LAB_0011b130:
      operator_delete(pcVar12);
    }
  }
  else {
    if (param_1[0xc] != 0) {
LAB_0011ad28:
      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_0011a6d0();
      }
      goto LAB_0011b294;
    }
    if (*param_1 != 1) goto LAB_0011ad3c;
LAB_0011ab6c:
    local_100 = (char *)0x0;
    local_f8 = (char *)0x0;
    local_f0 = (char *)0x0;
                    /* try { // try from 0011ab74 to 0011ab87 has its CatchHandler @ 0011b1cc */
    uVar8 = folly::dynamic::size();
    FUN_0011b6cc(&local_100,uVar8);
    if (*param_1 != 1) {
      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 0011b174 to 0011b183 has its CatchHandler @ 0011b1a4 */
                    /* WARNING: Subroutine does not return */
        FUN_00119c04(*(undefined8 *)PTR_name_0012fc70);
      }
      goto LAB_0011b294;
    }
    pdVar3 = *(dynamic **)(param_1 + 4);
    for (pdVar1 = *(dynamic **)(param_1 + 2); pdVar1 != pdVar3; pdVar1 = pdVar1 + 0x30) {
                    /* try { // try from 0011abc4 to 0011abcf has its CatchHandler @ 0011b25c */
      folly::dynamic::dynamic((dynamic *)&local_a0,pdVar1);
      pcVar12 = local_f8;
      local_70 = 0;
      if (local_f8 < local_f0) {
        *local_f8 = '\0';
        local_f8[0x30] = -1;
        local_f8[0x31] = -1;
        local_f8[0x32] = -1;
        local_f8[0x33] = -1;
                    /* try { // try from 0011abf8 to 0011ac07 has its CatchHandler @ 0011b244 */
        (*(code *)
          PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>&&>_0012f798
        )(&local_c0,local_f8,&local_a0);
        local_f8 = pcVar12 + 0x38;
        *(uint *)(pcVar12 + 0x30) = local_70;
      }
      else {
                    /* try { // try from 0011ac18 to 0011ac23 has its CatchHandler @ 0011b248 */
        local_f8 = (char *)FUN_0011b944(&local_100,&local_a0);
      }
      if ((ulong)local_70 != 0xffffffff) {
                    /* try { // try from 0011ac44 to 0011ac4f has its CatchHandler @ 0011b258 */
        (*(code *)(&PTR_FUN_0012f788)[local_70])(&local_c0,&local_a0);
      }
    }
LAB_0011afc8:
    pcVar6 = local_f8;
    pcVar7 = local_100;
    lVar13 = (long)local_f8 - (long)local_100;
    pbVar2 = (byte *)*param_2;
    pbVar18 = (byte *)param_2[1];
    while (pbVar5 = pbVar18, pbVar5 != pbVar2) {
      pbVar18 = pbVar5 + -0x18;
      if ((*pbVar18 & 1) != 0) {
        operator_delete(*(void **)(pbVar5 + -8));
      }
    }
    param_2[1] = (long)pbVar2;
                    /* try { // try from 0011b020 to 0011b02b has its CatchHandler @ 0011b1a8 */
    FUN_0011b4f4(param_2,(lVar13 >> 3) * 0x6db6db6db6db6db7);
    pcVar15 = pcVar7;
    pcVar12 = pcVar6;
    if (pcVar7 == pcVar6) goto joined_r0x0011ade4;
    do {
      local_c0 = (IRuntime *)0x0;
      uStack_b8 = 0;
      local_b0 = (char *)0x0;
                    /* try { // try from 0011b050 to 0011b09f has its CatchHandler @ 0011b260 */
      FUN_0011a704(&local_a0,pcVar15);
      pbVar11 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                param_2[1];
      uStack_b8 = uStack_98;
      local_c0 = local_a0;
      local_b0 = local_90;
      if (pbVar11 < (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)param_2[2]) {
        if (((ulong)local_a0 & 1) == 0) {
          *(ulong *)(pbVar11 + 8) = uStack_98;
          *(IRuntime **)pbVar11 = local_a0;
          *(char **)(pbVar11 + 0x10) = local_90;
        }
        else {
                    /* try { // try from 0011b0a8 to 0011b0af has its CatchHandler @ 0011b238 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external(pbVar11,local_90,uStack_98);
        }
        pbVar11 = pbVar11 + 0x18;
        param_2[1] = (long)pbVar11;
      }
      else {
        pbVar11 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  FUN_0011bc1c(param_2,&local_c0);
      }
      param_2[1] = (long)pbVar11;
      if (((ulong)local_c0 & 1) != 0) {
        operator_delete(local_b0);
      }
      pcVar15 = pcVar15 + 0x38;
    } while (pcVar15 != pcVar6);
    if (pcVar7 != (char *)0x0) {
      while (pcVar7 != pcVar6) {
        if (*(uint *)(pcVar6 + -8) != 0xffffffff) {
                    /* try { // try from 0011b110 to 0011b11b has its CatchHandler @ 0011b234 */
          (*(code *)(&PTR_FUN_0012f788)[*(uint *)(pcVar6 + -8)])(&local_a0,pcVar6 + -0x38);
        }
        pcVar6[-8] = -1;
        pcVar6[-7] = -1;
        pcVar6[-6] = -1;
        pcVar6[-5] = -1;
        pcVar6 = pcVar6 + -0x38;
        pcVar12 = local_100;
      }
      goto LAB_0011b130;
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
LAB_0011b294:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011b298  FUN_0011b298 =====

void FUN_0011b298(undefined8 *param_1,byte *param_2,byte *param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_80;
  undefined8 *local_78;
  undefined1 local_70;
  undefined8 *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **ppbStack_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **local_58;
  undefined1 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_70 = 0;
  local_78 = param_1;
  if (param_4 != 0) {
    if (0xaaaaaaaaaaaaaaa < param_4) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 0011b3b4 to 0011b3b7 has its CatchHandler @ 0011b3b8 */
        uVar2 = FUN_0011b480();
                    /* catch() { ... } // from try @ 0011b2f4 with catch @ 0011b3b8
                       catch() { ... } // from try @ 0011b3b4 with catch @ 0011b3b8 */
        FUN_0011b3f4(&local_78);
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00110404(uVar2);
        }
      }
      goto LAB_0011b3f0;
    }
                    /* try { // try from 0011b2f4 to 0011b2f7 has its CatchHandler @ 0011b3b8 */
    local_80 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               operator_new(param_4 * 0x18);
    *param_1 = local_80;
    param_1[1] = local_80;
    local_50 = 0;
    local_68 = param_1 + 2;
    *local_68 = local_80 + param_4 * 0x18;
    ppbStack_60 = &local_88;
    local_58 = &local_80;
    local_88 = local_80;
    if (param_2 != param_3) {
      do {
        if ((*param_2 & 1) == 0) {
          uVar3 = *(undefined8 *)(param_2 + 8);
          uVar2 = *(undefined8 *)param_2;
          *(undefined8 *)(local_80 + 0x10) = *(undefined8 *)(param_2 + 0x10);
          *(undefined8 *)(local_80 + 8) = uVar3;
          *(undefined8 *)local_80 = uVar2;
        }
        else {
                    /* try { // try from 0011b368 to 0011b36b has its CatchHandler @ 0011b3c0 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external(local_80,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
        }
        param_2 = param_2 + 0x18;
        local_80 = local_80 + 0x18;
      } while (param_2 != param_3);
    }
    param_1[1] = local_80;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_0011b3f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011b3f4  FUN_0011b3f4 =====

void FUN_0011b3f4(undefined8 *param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (*(char *)(param_1 + 1) == '\0') {
    puVar2 = (undefined8 *)*param_1;
    pbVar3 = (byte *)*puVar2;
    if (pbVar3 != (byte *)0x0) {
      pbVar1 = (byte *)puVar2[1];
      pbVar4 = pbVar3;
      if (pbVar1 != pbVar3) {
        do {
          pbVar4 = pbVar1 + -0x18;
          if ((*pbVar4 & 1) != 0) {
            operator_delete(*(void **)(pbVar1 + -8));
          }
          pbVar1 = pbVar4;
        } while (pbVar4 != pbVar3);
        pbVar4 = *(byte **)*param_1;
      }
      puVar2[1] = pbVar3;
      operator_delete(pbVar4);
      return;
    }
  }
  return;
}


// ===== 0011b480  FUN_0011b480 =====

void FUN_0011b480(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00119b50("vector");
}


// ===== 0011b494  FUN_0011b494 =====

void FUN_0011b494(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    pbVar2 = (byte *)**(undefined8 **)(param_1 + 8);
    pbVar3 = (byte *)**(undefined8 **)(param_1 + 0x10);
    while (pbVar1 = pbVar3, pbVar1 != pbVar2) {
      pbVar3 = pbVar1 + -0x18;
      if ((*pbVar3 & 1) != 0) {
        operator_delete(*(void **)(pbVar1 + -8));
      }
    }
    return;
  }
  return;
}


// ===== 0011b4f4  FUN_0011b4f4 =====

void FUN_0011b4f4(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  void *pvVar8;
  byte *pbVar9;
  void *pvVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 uStack_89;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  
  pbVar7 = (byte *)*param_1;
  if ((ulong)((param_1[2] - (long)pbVar7 >> 3) * -0x5555555555555555) < param_2) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      puVar4 = (undefined8 *)FUN_0011b480();
      pcStack_78 = FUN_0011b604;
      lVar1 = tpidr_el0;
      lStack_88 = *(long *)(lVar1 + 0x28);
      pvVar3 = (void *)*puVar4;
      puStack_80 = &stack0xffffffffffffffd0;
      if (pvVar3 != (void *)0x0) {
        pvVar10 = (void *)puVar4[1];
        pvVar8 = pvVar3;
        puStack_80 = &stack0xffffffffffffffd0;
        puVar2 = &stack0xffffffffffffffd0;
        if (pvVar10 != pvVar3) {
          do {
            pvVar8 = (void *)((long)pvVar10 + -0x38);
            if (*(uint *)((long)pvVar10 + -8) != 0xffffffff) {
              (*(code *)(&PTR_FUN_0012f788)[*(uint *)((long)pvVar10 + -8)])(&uStack_89,pvVar8);
            }
            *(undefined4 *)((long)pvVar10 + -8) = 0xffffffff;
            pvVar10 = pvVar8;
          } while (pvVar8 != pvVar3);
          pvVar8 = (void *)*puVar4;
          puVar2 = puStack_80;
        }
        puStack_80 = puVar2;
        puVar4[1] = pvVar3;
        operator_delete(pvVar8);
      }
      if (*(long *)(lVar1 + 0x28) != lStack_88) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    pbVar9 = (byte *)param_1[1];
    pvVar3 = operator_new(param_2 * 0x18);
    lVar1 = (long)pvVar3 + ((long)pbVar9 - (long)pbVar7);
    pvVar3 = (void *)((long)pvVar3 + param_2 * 0x18);
    lVar5 = lVar1;
    if ((long)pbVar9 - (long)pbVar7 == 0) {
      *param_1 = lVar1;
      param_1[1] = lVar1;
      param_1[2] = (long)pvVar3;
    }
    else {
      do {
        uVar12 = *(undefined8 *)(pbVar9 + -0x10);
        uVar11 = *(undefined8 *)(pbVar9 + -0x18);
        *(undefined8 *)(lVar5 + -8) = *(undefined8 *)(pbVar9 + -8);
        pbVar6 = pbVar9 + -0x18;
        *(undefined8 *)(lVar5 + -0x10) = uVar12;
        *(undefined8 *)(lVar5 + -0x18) = uVar11;
        lVar5 = lVar5 + -0x18;
        pbVar9[-0x10] = 0;
        pbVar9[-0xf] = 0;
        pbVar9[-0xe] = 0;
        pbVar9[-0xd] = 0;
        pbVar9[-0xc] = 0;
        pbVar9[-0xb] = 0;
        pbVar9[-10] = 0;
        pbVar9[-9] = 0;
        pbVar9[-8] = 0;
        pbVar9[-7] = 0;
        pbVar9[-6] = 0;
        pbVar9[-5] = 0;
        pbVar9[-4] = 0;
        pbVar9[-3] = 0;
        pbVar9[-2] = 0;
        pbVar9[-1] = 0;
        pbVar9[-0x18] = 0;
        pbVar9[-0x17] = 0;
        pbVar9[-0x16] = 0;
        pbVar9[-0x15] = 0;
        pbVar9[-0x14] = 0;
        pbVar9[-0x13] = 0;
        pbVar9[-0x12] = 0;
        pbVar9[-0x11] = 0;
        pbVar9 = pbVar6;
      } while (pbVar6 != pbVar7);
      pbVar7 = (byte *)*param_1;
      pbVar9 = (byte *)param_1[1];
      *param_1 = lVar5;
      param_1[1] = lVar1;
      param_1[2] = (long)pvVar3;
      while (pbVar6 = pbVar9, pbVar6 != pbVar7) {
        pbVar9 = pbVar6 + -0x18;
        if ((*pbVar9 & 1) != 0) {
          operator_delete(*(void **)(pbVar6 + -8));
        }
      }
    }
    if (pbVar7 != (byte *)0x0) {
      operator_delete(pbVar7);
      return;
    }
  }
  return;
}


// ===== 0011b604  FUN_0011b604 =====

void FUN_0011b604(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  undefined1 uStack_59;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    pvVar4 = (void *)param_1[1];
    pvVar2 = pvVar3;
    if (pvVar4 != pvVar3) {
      do {
        pvVar2 = (void *)((long)pvVar4 + -0x38);
        if (*(uint *)((long)pvVar4 + -8) != 0xffffffff) {
                    /* try { // try from 0011b67c to 0011b687 has its CatchHandler @ 0011b6c8 */
          (*(code *)(&PTR_FUN_0012f788)[*(uint *)((long)pvVar4 + -8)])(&uStack_59,pvVar2);
        }
        *(undefined4 *)((long)pvVar4 + -8) = 0xffffffff;
        pvVar4 = pvVar2;
      } while (pvVar2 != pvVar3);
      pvVar2 = (void *)*param_1;
    }
    param_1[1] = pvVar3;
    operator_delete(pvVar2);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0011b6cc  FUN_0011b6cc =====

void FUN_0011b6cc(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pvVar7 = (void *)*param_1;
  if ((ulong)((param_1[2] - (long)pvVar7 >> 3) * 0x6db6db6db6db6db7) < param_2) {
    if (0x492492492492492 < param_2) {
      if (*(long *)(lVar5 + 0x28) == local_68) {
        FUN_0011b900();
      }
      goto LAB_0011b880;
    }
    lVar8 = param_1[1];
    pvVar6 = operator_new(param_2 * 0x38);
    lVar1 = (long)pvVar6 + (lVar8 - (long)pvVar7);
    pvVar6 = (void *)((long)pvVar6 + param_2 * 0x38);
    if (lVar8 - (long)pvVar7 == 0) {
      *param_1 = lVar1;
      param_1[1] = lVar1;
      param_1[2] = (long)pvVar6;
    }
    else {
      lVar9 = 0;
      do {
        lVar2 = lVar1 + lVar9;
        lVar3 = lVar8 + lVar9;
        *(undefined4 *)(lVar2 + -8) = 0xffffffff;
        *(undefined1 *)(lVar2 + -0x38) = 0;
        if (*(uint *)(lVar3 + -8) != 0xffffffff) {
                    /* try { // try from 0011b7b4 to 0011b7bb has its CatchHandler @ 0011b888 */
          (*(code *)(&
                    PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>&&>_0012f798
                    )[*(uint *)(lVar3 + -8)])
                    (&uStack_6a,(undefined1 *)(lVar2 + -0x38),lVar3 + -0x38);
          *(undefined4 *)(lVar2 + -8) = *(undefined4 *)(lVar3 + -8);
        }
        lVar9 = lVar9 + -0x38;
      } while ((void *)(lVar8 + lVar9) != pvVar7);
      pvVar7 = (void *)*param_1;
      pvVar4 = (void *)param_1[1];
      *param_1 = lVar1 + lVar9;
      param_1[1] = lVar1;
      param_1[2] = (long)pvVar6;
      while (pvVar4 != pvVar7) {
        if (*(uint *)((long)pvVar4 + -8) != 0xffffffff) {
                    /* try { // try from 0011b818 to 0011b823 has its CatchHandler @ 0011b884 */
          (*(code *)(&PTR_FUN_0012f788)[*(uint *)((long)pvVar4 + -8)])
                    (&uStack_69,(void *)((long)pvVar4 + -0x38));
        }
        *(undefined4 *)((long)pvVar4 + -8) = 0xffffffff;
        pvVar4 = (void *)((long)pvVar4 + -0x38);
      }
    }
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
LAB_0011b880:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011b88c  FUN_0011b88c =====

void FUN_0011b88c(long param_1)

{
  long lVar1;
  undefined1 uStack_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
                    /* try { // try from 0011b8c4 to 0011b8cf has its CatchHandler @ 0011b8fc */
    (*(code *)(&PTR_FUN_0012f788)[*(uint *)(param_1 + 0x30)])(&uStack_29,param_1);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011b900  FUN_0011b900 =====

void FUN_0011b900(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00119b50("vector");
}


// ===== 0011b914  FUN_0011b914 =====

void FUN_0011b914(void)

{
  folly::dynamic::destroy();
  return;
}


// ===== 0011b91c  FUN_0011b91c =====

void FUN_0011b91c(undefined8 param_1,long param_2)

{
  facebook::jsi::Value::~Value((Value *)(param_2 + 8));
  return;
}


// ===== 0011b924  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>,(std::__ndk1::__variant_detail::_Trait)1>>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>>&,std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>,(std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&,auto:2&&)#1}&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>&&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,
   0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >,
   (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> > >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value>
   >&&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >,
   (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> > >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >&&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,0ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>,(std::__ndk1::__variant_detail::_Trait)1>>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>>&,std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>,(std::__ndk1::__variant_detail::_Trait)1>&&)::_lambda(auto:1&,auto:2&&)_1_&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>&&>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  _func_decltype_auto *p_Var1;
  
  p_Var1 = (_func_decltype_auto *)folly::dynamic::dynamic((dynamic *)param_2,(dynamic *)param_3);
  return p_Var1;
}


// ===== 0011b930  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>,(std::__ndk1::__variant_detail::_Trait)1>>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>>&,std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>,(std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&,auto:2&&)#1}&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>&&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,
   1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >,
   (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> > >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value>
   >&&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >,
   (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> > >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >&&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,1ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>,(std::__ndk1::__variant_detail::_Trait)1>>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>>&,std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>,(std::__ndk1::__variant_detail::_Trait)1>&&)::_lambda(auto:1&,auto:2&&)_1_&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>&&>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  _func_decltype_auto *p_Var1;
  
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  p_Var1 = (_func_decltype_auto *)
           facebook::jsi::Value::Value((Value *)(param_2 + 8),(Value *)(param_3 + 8));
  return p_Var1;
}


// ===== 0011b944  FUN_0011b944 =====

undefined1 * FUN_0011b944(long *param_1,long param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  uint uVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  void *pvVar9;
  undefined1 *puVar10;
  void *pvVar11;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pvVar9 = (void *)*param_1;
  pvVar11 = (void *)param_1[1];
  lVar6 = (long)pvVar11 - (long)pvVar9 >> 3;
  uVar1 = lVar6 * 0x6db6db6db6db6db7 + 1;
  if (uVar1 < 0x492492492492493) {
    lVar7 = param_1[2] - (long)pvVar9 >> 3;
    uVar8 = lVar7 * -0x2492492492492492;
    if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
      uVar8 = uVar1;
    }
    if (0x249249249249248 < (ulong)(lVar7 * 0x6db6db6db6db6db7)) {
      uVar8 = 0x492492492492492;
    }
    if (uVar8 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (0x492492492492492 < uVar8) goto LAB_0011bb90;
      pvVar5 = operator_new(uVar8 * 0x38);
    }
    uVar3 = *(uint *)(param_2 + 0x30);
    puVar10 = (undefined1 *)((long)pvVar5 + lVar6 * 8);
    *puVar10 = 0;
    *(undefined4 *)(puVar10 + 0x30) = 0xffffffff;
    if (uVar3 != 0xffffffff) {
                    /* try { // try from 0011ba38 to 0011ba47 has its CatchHandler @ 0011bba8 */
      (*(code *)(&
                PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>&&>_0012f798
                )[uVar3])(&uStack_6b,puVar10,param_2);
      pvVar9 = (void *)*param_1;
      pvVar11 = (void *)param_1[1];
      *(undefined4 *)(puVar10 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    }
    pvVar5 = (void *)((long)pvVar5 + uVar8 * 0x38);
    puVar2 = puVar10 + 0x38;
    if (pvVar11 == pvVar9) {
      *param_1 = (long)puVar10;
      param_1[1] = (long)puVar2;
      param_1[2] = (long)pvVar5;
    }
    else {
      lVar6 = 0;
      do {
        *(undefined4 *)(puVar10 + lVar6 + -8) = 0xffffffff;
        puVar10[lVar6 + -0x38] = 0;
        uVar3 = *(uint *)((long)pvVar11 + lVar6 + -8);
        if (uVar3 != 0xffffffff) {
                    /* try { // try from 0011bab0 to 0011bab7 has its CatchHandler @ 0011bbb0 */
          (*(code *)(&
                    PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>&&>_0012f798
                    )[uVar3])(&uStack_6a,puVar10 + lVar6 + -0x38,(long)pvVar11 + lVar6 + -0x38);
          *(undefined4 *)(puVar10 + lVar6 + -8) = *(undefined4 *)((long)pvVar11 + lVar6 + -8);
        }
        lVar6 = lVar6 + -0x38;
      } while ((void *)((long)pvVar11 + lVar6) != pvVar9);
      pvVar9 = (void *)*param_1;
      pvVar11 = (void *)param_1[1];
      param_1[2] = (long)pvVar5;
      *param_1 = (long)(puVar10 + lVar6);
      param_1[1] = (long)puVar2;
      while (pvVar11 != pvVar9) {
        if (*(uint *)((long)pvVar11 + -8) != 0xffffffff) {
                    /* try { // try from 0011bb18 to 0011bb23 has its CatchHandler @ 0011bbac */
          (*(code *)(&PTR_FUN_0012f788)[*(uint *)((long)pvVar11 + -8)])
                    (&uStack_69,(void *)((long)pvVar11 + -0x38));
        }
        *(undefined4 *)((long)pvVar11 + -8) = 0xffffffff;
        pvVar11 = (void *)((long)pvVar11 + -0x38);
      }
    }
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
    if (*(long *)(lVar4 + 0x28) == local_68) {
      return puVar2;
    }
  }
  else {
    if (*(long *)(lVar4 + 0x28) != local_68) goto LAB_0011bba4;
    FUN_0011b900();
LAB_0011bb90:
    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00119bd0();
    }
  }
LAB_0011bba4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011bbb4  FUN_0011bbb4 =====

void FUN_0011bbb4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar2 = lVar3, lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x18;
    lVar3 = lVar2 + -0x18;
    if ((*(byte *)(lVar2 + -0x18) & 1) != 0) {
      operator_delete(*(void **)(lVar2 + -8));
      lVar3 = param_1[2];
    }
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 0011bc1c  FUN_0011bc1c =====

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
FUN_0011bc1c(long *param_1,byte *param_2)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  long lVar3;
  byte *pbVar4;
  void *pvVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 uVar14;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  pbVar12 = (byte *)*param_1;
  pbVar13 = (byte *)param_1[1];
  lVar7 = (long)pbVar13 - (long)pbVar12 >> 3;
  uVar1 = lVar7 * -0x5555555555555555 + 1;
  if (uVar1 < 0xaaaaaaaaaaaaaab) {
    lVar10 = param_1[2] - (long)pbVar12 >> 3;
    uVar11 = lVar10 * 0x5555555555555556;
    if (uVar11 < uVar1 || uVar11 - uVar1 == 0) {
      uVar11 = uVar1;
    }
    if (0x555555555555554 < (ulong)(lVar10 * -0x5555555555555555)) {
      uVar11 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar11 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar11) goto LAB_0011bdf8;
      pvVar5 = operator_new(uVar11 * 0x18);
    }
    this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           ((long)pvVar5 + lVar7 * 8);
    if ((*param_2 & 1) == 0) {
      uVar14 = *(undefined8 *)param_2;
      uVar8 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(this + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)this = uVar14;
      *(undefined8 *)(this + 0x10) = uVar8;
    }
    else {
                    /* try { // try from 0011bd08 to 0011bd0b has its CatchHandler @ 0011be0c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external(this,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
      pbVar12 = (byte *)*param_1;
      pbVar13 = (byte *)param_1[1];
    }
    pbVar2 = this + 0x18;
    pbVar9 = pbVar12;
    if (pbVar13 != pbVar12) {
      do {
        uVar14 = *(undefined8 *)(pbVar13 + -0x10);
        uVar8 = *(undefined8 *)(pbVar13 + -0x18);
        *(undefined8 *)(this + -8) = *(undefined8 *)(pbVar13 + -8);
        pbVar9 = pbVar13 + -0x18;
        *(undefined8 *)(this + -0x10) = uVar14;
        *(undefined8 *)(this + -0x18) = uVar8;
        this = this + -0x18;
        pbVar13[-0x10] = 0;
        pbVar13[-0xf] = 0;
        pbVar13[-0xe] = 0;
        pbVar13[-0xd] = 0;
        pbVar13[-0xc] = 0;
        pbVar13[-0xb] = 0;
        pbVar13[-10] = 0;
        pbVar13[-9] = 0;
        pbVar13[-8] = 0;
        pbVar13[-7] = 0;
        pbVar13[-6] = 0;
        pbVar13[-5] = 0;
        pbVar13[-4] = 0;
        pbVar13[-3] = 0;
        pbVar13[-2] = 0;
        pbVar13[-1] = 0;
        pbVar13[-0x18] = 0;
        pbVar13[-0x17] = 0;
        pbVar13[-0x16] = 0;
        pbVar13[-0x15] = 0;
        pbVar13[-0x14] = 0;
        pbVar13[-0x13] = 0;
        pbVar13[-0x12] = 0;
        pbVar13[-0x11] = 0;
        pbVar13 = pbVar9;
      } while (pbVar9 != pbVar12);
      pbVar12 = (byte *)param_1[1];
      pbVar9 = (byte *)*param_1;
    }
    *param_1 = (long)this;
    param_1[1] = (long)pbVar2;
    param_1[2] = (long)((long)pvVar5 + uVar11 * 0x18);
    pbVar13 = pbVar12;
    while (pbVar4 = pbVar12, pbVar4 != pbVar9) {
      pbVar12 = pbVar4 + -0x18;
      pbVar13 = pbVar9;
      if ((*pbVar12 & 1) != 0) {
        operator_delete(*(void **)(pbVar4 + -8));
      }
    }
    if (pbVar13 != (byte *)0x0) {
      operator_delete(pbVar13);
    }
    if (*(long *)(lVar3 + 0x28) == lVar6) {
      return pbVar2;
    }
  }
  else {
    if (*(long *)(lVar3 + 0x28) != lVar6) goto LAB_0011be30;
    FUN_0011b480();
LAB_0011bdf8:
    if (*(long *)(lVar3 + 0x28) == lVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00119bd0();
    }
  }
LAB_0011be30:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011be34  FUN_0011be34 =====

void FUN_0011be34(int *param_1,byte *param_2)

{
  byte bVar1;
  
  if (param_1[0xc] == 1) {
    bVar1 = facebook::jsi::Value::asBool();
  }
  else {
    if (param_1[0xc] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0011a6d0();
    }
    if (*param_1 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00119c04(*(undefined8 *)PTR_name_0012fca8);
    }
    bVar1 = (char)param_1[2] != '\0';
  }
  *param_2 = bVar1 & 1;
  return;
}


// ===== 0011bea0  FUN_0011bea0 =====

void FUN_0011bea0(undefined4 *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  ulong uVar4;
  long lVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  undefined8 uVar7;
  byte *pbVar8;
  undefined8 uVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_98;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_90;
  undefined8 *local_88;
  undefined1 local_80;
  undefined8 *local_78;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **ppbStack_70;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **local_68;
  undefined1 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  pbVar6 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_1 + 2);
  *param_1 = *param_2;
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    uVar9 = *(undefined8 *)(param_2 + 4);
    uVar7 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar9;
    *(undefined8 *)pbVar6 = uVar7;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(pbVar6,*(char **)(param_2 + 6),*(ulong *)(param_2 + 4));
  }
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  if ((*(byte *)(param_2 + 10) & 1) == 0) {
    uVar9 = *(undefined8 *)(param_2 + 0xc);
    uVar7 = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0xc) = uVar9;
    *(undefined8 *)(param_1 + 10) = uVar7;
  }
  else {
                    /* try { // try from 0011bf34 to 0011bf3b has its CatchHandler @ 0011c100 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 10),*(char **)(param_2 + 0xe),*(ulong *)(param_2 + 0xc));
  }
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  param_1[0x12] = param_2[0x12];
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  if ((*(byte *)(param_2 + 0x14) & 1) == 0) {
    uVar9 = *(undefined8 *)(param_2 + 0x16);
    uVar7 = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x16) = uVar9;
    *(undefined8 *)(param_1 + 0x14) = uVar7;
  }
  else {
                    /* try { // try from 0011bf70 to 0011bf77 has its CatchHandler @ 0011c0f0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x14),*(char **)(param_2 + 0x18),*(ulong *)(param_2 + 0x16));
  }
  if ((*(byte *)(param_2 + 0x1a) & 1) == 0) {
    uVar9 = *(undefined8 *)(param_2 + 0x1c);
    uVar7 = *(undefined8 *)(param_2 + 0x1a);
    *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
    *(undefined8 *)(param_1 + 0x1c) = uVar9;
    *(undefined8 *)(param_1 + 0x1a) = uVar7;
  }
  else {
                    /* try { // try from 0011bf9c to 0011bfa3 has its CatchHandler @ 0011c0e0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x1a),*(char **)(param_2 + 0x1e),*(ulong *)(param_2 + 0x1c));
  }
  uVar2 = param_2[0x20];
  local_80 = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  local_88 = (undefined8 *)(param_1 + 0x22);
  *local_88 = 0;
  pbVar8 = *(byte **)(param_2 + 0x22);
  pbVar1 = *(byte **)(param_2 + 0x24);
  param_1[0x20] = uVar2;
  uVar4 = (long)pbVar1 - (long)pbVar8;
  if (uVar4 != 0) {
    if (0x555555555555555 < (ulong)(((long)uVar4 >> 4) * -0x5555555555555555)) {
      if (*(long *)(lVar5 + 0x28) != local_58) goto LAB_0011c1c0;
                    /* try { // try from 0011c0dc to 0011c0df has its CatchHandler @ 0011c110 */
      uVar7 = FUN_0011e730();
                    /* catch() { ... } // from try @ 0011bf9c with catch @ 0011c0e0 */
      if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
        if ((*(byte *)(param_1 + 10) & 1) == 0) goto LAB_0011c164;
LAB_0011c1ac:
        operator_delete(*(void **)(param_1 + 0xe));
        bVar3 = *pbVar6;
      }
      else {
        operator_delete(*(void **)(param_1 + 0x18));
        if ((*(byte *)(param_1 + 10) & 1) != 0) goto LAB_0011c1ac;
LAB_0011c164:
        bVar3 = *pbVar6;
      }
      if (((byte)bVar3 & 1) != 0) {
        operator_delete(*(void **)(param_1 + 6));
      }
      if (*(long *)(lVar5 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00110404(uVar7);
      }
      goto LAB_0011c1c0;
    }
                    /* try { // try from 0011bff8 to 0011bfff has its CatchHandler @ 0011c110 */
    pbVar6 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             operator_new(uVar4);
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (param_1 + 0x26) = pbVar6 + uVar4;
    ppbStack_70 = &local_98;
    local_68 = &local_90;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (param_1 + 0x22) = pbVar6;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (param_1 + 0x24) = pbVar6;
    local_60 = 0;
    local_98 = pbVar6;
    local_78 = (undefined8 *)(param_1 + 0x26);
    do {
      local_90 = pbVar6;
      if ((*pbVar8 & 1) == 0) {
        uVar9 = *(undefined8 *)(pbVar8 + 8);
        uVar7 = *(undefined8 *)pbVar8;
        *(undefined8 *)(pbVar6 + 0x10) = *(undefined8 *)(pbVar8 + 0x10);
        *(undefined8 *)(pbVar6 + 8) = uVar9;
        *(undefined8 *)pbVar6 = uVar7;
      }
      else {
                    /* try { // try from 0011c078 to 0011c07f has its CatchHandler @ 0011c118 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external(pbVar6,*(char **)(pbVar8 + 0x10),*(ulong *)(pbVar8 + 8));
      }
      if ((pbVar8[0x18] & 1) == 0) {
        uVar9 = *(undefined8 *)(pbVar8 + 0x20);
        uVar7 = *(undefined8 *)(pbVar8 + 0x18);
        *(undefined8 *)(pbVar6 + 0x28) = *(undefined8 *)(pbVar8 + 0x28);
        *(undefined8 *)(pbVar6 + 0x20) = uVar9;
        *(undefined8 *)(pbVar6 + 0x18) = uVar7;
      }
      else {
                    /* try { // try from 0011c090 to 0011c097 has its CatchHandler @ 0011c120 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  (pbVar6 + 0x18,*(char **)(pbVar8 + 0x28),*(ulong *)(pbVar8 + 0x20));
      }
      pbVar8 = pbVar8 + 0x30;
      pbVar6 = local_90 + 0x30;
    } while (pbVar8 != pbVar1);
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (param_1 + 0x24) = pbVar6;
    local_90 = pbVar6;
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
LAB_0011c1c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011c1c4  FUN_0011c1c4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0011c1c4(int *param_1,undefined4 *param_2)

{
  size_t sVar1;
  size_t sVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined5 uVar6;
  undefined5 uVar7;
  undefined5 uVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  undefined2 uVar15;
  char cVar16;
  undefined2 uVar17;
  undefined1 uVar18;
  bool bVar19;
  byte bVar20;
  int iVar21;
  long lVar22;
  undefined4 *puVar23;
  ulong uVar24;
  void *pvVar25;
  undefined8 *puVar26;
  undefined4 *puVar27;
  ulong uVar28;
  long *plVar29;
  undefined4 *puVar30;
  undefined8 *puVar31;
  long lVar32;
  int *piVar33;
  ulong uVar34;
  char *pcVar35;
  undefined8 *puVar36;
  char *pcVar37;
  undefined8 *puVar38;
  long *plVar39;
  long *plVar40;
  void *pvVar41;
  long *plVar42;
  undefined4 *puVar43;
  undefined8 *puVar44;
  byte *pbVar45;
  undefined2 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  uint local_200;
  undefined4 uStack_1fc;
  undefined1 local_1f8;
  void *local_1f0;
  undefined8 *local_1e8;
  long lStack_1e0;
  void *local_1d8;
  ulong local_1d0;
  undefined8 *puStack_1c8;
  char *local_1c0;
  int local_1b8 [4];
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined8 local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  uint local_180;
  char cStack_17c;
  char cStack_17b;
  char cStack_17a;
  char cStack_179;
  char cStack_178;
  char acStack_177 [7];
  long *local_170;
  ulong local_168;
  float local_160;
  void *local_158 [2];
  undefined8 *local_148;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_130;
  char cStack_12f;
  undefined2 uStack_12e;
  char cStack_12c;
  char cStack_12b;
  char cStack_12a;
  char cStack_129;
  char cStack_128;
  undefined2 uStack_127;
  char cStack_125;
  undefined2 uStack_124;
  char cStack_122;
  char cStack_121;
  char cStack_120;
  undefined1 uStack_11f;
  undefined6 uStack_11e;
  ulong local_118;
  ulong uStack_110;
  void *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_88;
  
  plVar40 = (long *)tpidr_el0;
  local_88 = plVar40[5];
  iVar21 = param_1[0xc];
  piVar33 = param_1;
  if (iVar21 != 0) {
    if (iVar21 == 1) {
      piVar33 = param_1 + 2;
      goto LAB_0011c210;
    }
    goto LAB_0011df0c;
  }
LAB_0011c210:
  if (*piVar33 == 6) {
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1;
    cStack_12f = '\0';
    uStack_12e = 0;
    FUN_0011a704(&cStack_128);
    uStack_110 = uStack_110 & 0xffffffffffffff00;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = DAT_00108d90;
    local_108 = (void *)0x0;
    local_e8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_a8 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    local_b0 = 0;
    FUN_0011e7a8(param_2,&local_130);
    FUN_00117358(&local_130);
  }
  else if (iVar21 == 1) {
    uVar28 = FUN_0011eb40(*(undefined8 *)param_1,param_1 + 2);
    if ((uVar28 & 1) != 0) {
      if (param_1[0xc] == 1) {
        FUN_0011f268(local_158,*(undefined8 *)param_1,param_1 + 2);
        goto LAB_0011c344;
      }
      if (param_1[0xc] == 0) goto LAB_0011c2cc;
      goto LAB_0011df0c;
    }
LAB_0011c2d8:
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    cStack_12f = '\0';
    uStack_12e = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = DAT_00108d90;
    local_108 = (void *)0x0;
    cStack_120 = '\0';
    uStack_11f = 0;
    uStack_11e = 0;
    local_118 = 0;
    cStack_128 = '\0';
    uStack_127 = 0;
    cStack_125 = '\0';
    uStack_124 = 0;
    cStack_122 = '\0';
    cStack_121 = '\0';
    uStack_110 = uStack_110 & 0xffffffffffffff00;
    local_e8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_a8 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    local_b0 = 0;
    FUN_0011e7a8(param_2,&local_130);
    FUN_00117358(&local_130);
    *param_2 = 0;
  }
  else {
    if (iVar21 != 0) {
LAB_0011df0c:
      if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
        FUN_0011a6d0();
      }
      goto LAB_0011e690;
    }
    if (*param_1 != 5) goto LAB_0011c2d8;
LAB_0011c2cc:
    FUN_0011ed04(local_158);
LAB_0011c344:
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    cStack_12f = 0;
    uStack_12e = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = DAT_00108d90;
    local_108 = (void *)0x0;
    cStack_120 = 0;
    uStack_11f = 0;
    uStack_11e = 0;
    local_118 = 0;
    cStack_128 = '\0';
    uStack_127 = 0;
    cStack_125 = 0;
    uStack_124 = 0;
    cStack_122 = 0;
    cStack_121 = 0;
    uStack_110 = uStack_110 & 0xffffffffffffff00;
    local_e8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_a8 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    local_b0 = 0;
    FUN_0011e7a8(param_2,&local_130);
    FUN_00117358(&local_130);
    uVar50 = s___packager_asset_001075e6._8_8_;
    uVar49 = s___packager_asset_001075e6._0_8_;
    *param_2 = 1;
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x20
    ;
    uStack_127 = (undefined2)uVar50;
    cStack_125 = SUB81(uVar50,2);
    uStack_124 = SUB82(uVar50,3);
    cStack_122 = SUB81(uVar50,5);
    cStack_121 = SUB81(uVar50,6);
    cStack_120 = SUB81(uVar50,7);
    cStack_12f = (char)uVar49;
    uStack_12e = SUB82(uVar49,1);
    cStack_12c = SUB81(uVar49,3);
    cStack_12b = SUB81(uVar49,4);
    cStack_12a = SUB81(uVar49,5);
    cStack_129 = SUB81(uVar49,6);
    cStack_128 = SUB81(uVar49,7);
    uStack_11f = 0;
    lVar22 = FUN_0011fca0(local_158,&local_130);
    if (((byte)local_130 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
    }
    if (lVar22 != 0) {
      *param_2 = 2;
    }
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xa;
    cStack_12f = 'w';
    uStack_12e = 0x6469;
    cStack_12c = 't';
    cStack_12b = 'h';
    cStack_12a = '\0';
    lVar22 = FUN_0011fca0(local_158,&local_130);
    if (lVar22 == 0) {
      uVar18 = false;
joined_r0x0011c4c0:
      if (((byte)local_130 & 1) == 0) goto LAB_0011c598;
LAB_0011c4c4:
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
      if ((bool)uVar18) goto LAB_0011c59c;
    }
    else {
      local_180 = 0x6965680c;
      cStack_17c = 'g';
      cStack_17b = 'h';
      cStack_17a = 't';
      cStack_179 = '\0';
      lVar22 = FUN_0011fca0(local_158,&local_180);
      if (lVar22 == 0) {
        uVar18 = false;
      }
      else {
        local_1d0 = CONCAT17(local_1d0._7_1_,0x68746469770a);
        lVar22 = FUN_0011fca0(local_158,&local_1d0);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 0011e1c0 to 0011e1cb has its CatchHandler @ 0011e418 */
                    /* WARNING: Subroutine does not return */
            FUN_00114504("unordered_map::at: key not found");
          }
          goto LAB_0011e690;
        }
        if (*(int *)(lVar22 + 0x58) == 1) {
          if (*(int *)(lVar22 + 0x30) != 3) goto LAB_0011c498;
LAB_0011c500:
          local_1e8 = (undefined8 *)0x7468676965680c;
          lVar22 = FUN_0011fca0(local_158,&local_1e8);
          if (lVar22 == 0) {
            if (plVar40[5] == local_88) {
                    /* try { // try from 0011e340 to 0011e35f has its CatchHandler @ 0011e400 */
                    /* WARNING: Subroutine does not return */
              FUN_00114504("unordered_map::at: key not found");
            }
            goto LAB_0011e690;
          }
          if (*(int *)(lVar22 + 0x58) == 1) {
            uVar18 = *(int *)(lVar22 + 0x30) == 3;
          }
          else {
            if (*(int *)(lVar22 + 0x58) != 0) {
              if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                FUN_0011a6d0();
              }
              goto LAB_0011e690;
            }
            uVar18 = *(int *)(lVar22 + 0x28) - 3U < 2;
          }
          if (((ulong)local_1e8 & 1) != 0) {
            operator_delete(local_1d8);
          }
        }
        else {
          if (*(int *)(lVar22 + 0x58) != 0) {
            if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0011e32c to 0011e32f has its CatchHandler @ 0011e418 */
              FUN_0011a6d0();
            }
            goto LAB_0011e690;
          }
          if (*(int *)(lVar22 + 0x28) - 3U < 2) goto LAB_0011c500;
LAB_0011c498:
          uVar18 = false;
        }
        if ((local_1d0 & 1) != 0) {
          operator_delete(local_1c0);
        }
      }
      if ((local_180 & 1) == 0) goto joined_r0x0011c4c0;
      operator_delete(local_170);
      if (((byte)local_130 & 1) != 0) goto LAB_0011c4c4;
LAB_0011c598:
      if ((bool)uVar18) {
LAB_0011c59c:
        local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                    0xa;
        cStack_12f = 'w';
        uStack_12e = 0x6469;
        cStack_12c = 't';
        cStack_12b = 'h';
        cStack_12a = '\0';
        lVar22 = FUN_0011fca0(local_158,&local_130);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 0011e068 to 0011e073 has its CatchHandler @ 0011e4a0 */
                    /* WARNING: Subroutine does not return */
            FUN_00114504("unordered_map::at: key not found");
          }
          goto LAB_0011e690;
        }
                    /* try { // try from 0011c5c8 to 0011c5cf has its CatchHandler @ 0011e4a0 */
        uVar47 = FUN_0011e924(lVar22 + 0x28);
        local_180 = 0x6965680c;
        cStack_17c = 'g';
        cStack_17b = 'h';
        cStack_17a = 't';
        cStack_179 = '\0';
        lVar22 = FUN_0011fca0(local_158,&local_180);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 0011e084 to 0011e08f has its CatchHandler @ 0011e490 */
                    /* WARNING: Subroutine does not return */
            FUN_00114504("unordered_map::at: key not found");
          }
          goto LAB_0011e690;
        }
                    /* try { // try from 0011c604 to 0011c60b has its CatchHandler @ 0011e490 */
        uVar48 = FUN_0011e924(lVar22 + 0x28);
        param_2[0x11] = uVar47;
        param_2[0x12] = uVar48;
        if ((local_180 & 1) != 0) {
          operator_delete(local_170);
        }
        if (((byte)local_130 & 1) != 0) {
          operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
        }
      }
    }
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xa;
    cStack_12f = 's';
    uStack_12e = 0x6163;
    cStack_12c = 'l';
    cStack_12b = 'e';
    cStack_12a = '\0';
    lVar22 = FUN_0011fca0(local_158,&local_130);
    if (lVar22 == 0) {
      bVar19 = false;
    }
    else {
      local_180 = 0x6163730a;
      cStack_17c = 'l';
      cStack_17b = 'e';
      cStack_17a = '\0';
      lVar22 = FUN_0011fca0(local_158,&local_180);
      if (lVar22 == 0) {
        if (plVar40[5] == local_88) {
                    /* try { // try from 0011df4c to 0011df57 has its CatchHandler @ 0011e44c */
                    /* WARNING: Subroutine does not return */
          FUN_00114504("unordered_map::at: key not found");
        }
        goto LAB_0011e690;
      }
      if (*(int *)(lVar22 + 0x58) == 1) {
        bVar19 = *(int *)(lVar22 + 0x30) == 3;
      }
      else {
        if (*(int *)(lVar22 + 0x58) != 0) {
          if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0011e1e0 to 0011e1e3 has its CatchHandler @ 0011e44c */
            FUN_0011a6d0();
          }
          goto LAB_0011e690;
        }
        bVar19 = *(int *)(lVar22 + 0x28) - 3U < 2;
      }
      if ((local_180 & 1) != 0) {
        operator_delete(local_170);
      }
    }
    if (((byte)local_130 & 1) == 0) {
      if (bVar19) goto LAB_0011c6d4;
LAB_0011c718:
      local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                  0x14;
      uStack_127 = 0x6465;
      cStack_12f = (char)s_deprecated_00107b61._0_8_;
      uStack_12e = SUB82(s_deprecated_00107b61._0_8_,1);
      cStack_12c = SUB81(s_deprecated_00107b61._0_8_,3);
      cStack_12b = SUB81(s_deprecated_00107b61._0_8_,4);
      cStack_12a = SUB81(s_deprecated_00107b61._0_8_,5);
      cStack_129 = SUB81(s_deprecated_00107b61._0_8_,6);
      cStack_128 = SUB81(s_deprecated_00107b61._0_8_,7);
      cStack_125 = '\0';
      lVar22 = FUN_0011fca0(local_158,&local_130);
      uVar47 = 0x3f800000;
      if (lVar22 != 0) {
        uVar47 = 0;
      }
    }
    else {
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
      if (!bVar19) goto LAB_0011c718;
LAB_0011c6d4:
      local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                  0xa;
      cStack_12f = 's';
      uStack_12e = 0x6163;
      cStack_12c = 'l';
      cStack_12b = 'e';
      cStack_12a = '\0';
      lVar22 = FUN_0011fca0(local_158,&local_130);
      if (lVar22 == 0) {
        if (plVar40[5] == local_88) {
                    /* try { // try from 0011e0a4 to 0011e0af has its CatchHandler @ 0011e48c */
                    /* WARNING: Subroutine does not return */
          FUN_00114504("unordered_map::at: key not found");
        }
        goto LAB_0011e690;
      }
                    /* try { // try from 0011c700 to 0011c707 has its CatchHandler @ 0011e48c */
      uVar47 = FUN_0011e924(lVar22 + 0x28);
    }
    param_2[0x10] = uVar47;
    if (((byte)local_130 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
    }
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x6;
    cStack_12f = 'u';
    uStack_12e = 0x6c72;
    cStack_12c = '\0';
    lVar22 = FUN_0011fca0(local_158,&local_130);
    if (lVar22 == 0) {
      bVar19 = false;
joined_r0x0011c7c8:
      if (((byte)local_130 & 1) == 0) goto LAB_0011c7fc;
LAB_0011c7cc:
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
      if (bVar19) goto LAB_0011c800;
    }
    else {
      local_180 = 0x6c727506;
      cStack_17c = '\0';
      lVar22 = FUN_0011fca0(local_158,&local_180);
      if (lVar22 == 0) {
        if (plVar40[5] == local_88) {
                    /* try { // try from 0011df6c to 0011df77 has its CatchHandler @ 0011e448 */
                    /* WARNING: Subroutine does not return */
          FUN_00114504("unordered_map::at: key not found");
        }
        goto LAB_0011e690;
      }
      if (*(int *)(lVar22 + 0x58) == 0) {
        piVar33 = (int *)(lVar22 + 0x28);
      }
      else {
        if (*(int *)(lVar22 + 0x58) != 1) {
          if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0011e1f8 to 0011e1fb has its CatchHandler @ 0011e448 */
            FUN_0011a6d0();
          }
          goto LAB_0011e690;
        }
        piVar33 = (int *)(lVar22 + 0x30);
      }
      bVar19 = *piVar33 == 6;
      if ((local_180 & 1) != 0) {
        operator_delete(local_170);
        goto joined_r0x0011c7c8;
      }
      if (((byte)local_130 & 1) != 0) goto LAB_0011c7cc;
LAB_0011c7fc:
      if (bVar19) {
LAB_0011c800:
        local_180 = 0x6c727506;
        cStack_17c = '\0';
        lVar22 = FUN_0011fca0(local_158,&local_180);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 0011e0c4 to 0011e0cf has its CatchHandler @ 0011e474 */
                    /* WARNING: Subroutine does not return */
            FUN_00114504("unordered_map::at: key not found");
          }
          goto LAB_0011e690;
        }
                    /* try { // try from 0011c824 to 0011c82f has its CatchHandler @ 0011e474 */
        FUN_0011a704(&local_130,lVar22 + 0x28);
        if ((*(byte *)(param_2 + 2) & 1) != 0) {
          operator_delete(*(void **)(param_2 + 6));
        }
        uVar46 = CONCAT11(cStack_12f,local_130);
        local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                    0x0;
        cStack_12f = 0;
        *(ulong *)(param_2 + 4) =
             CONCAT17(cStack_121,
                      CONCAT16(cStack_122,
                               CONCAT24(uStack_124,
                                        CONCAT13(cStack_125,CONCAT21(uStack_127,cStack_128)))));
        *(ulong *)(param_2 + 2) =
             CONCAT17(cStack_129,
                      CONCAT16(cStack_12a,
                               CONCAT15(cStack_12b,CONCAT14(cStack_12c,CONCAT22(uStack_12e,uVar46)))
                              ));
        *(ulong *)(param_2 + 6) = CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120));
        if ((local_180 & 1) != 0) {
          operator_delete(local_170);
        }
      }
    }
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x6;
    cStack_12f = 'u';
    uStack_12e = 0x6972;
    cStack_12c = '\0';
    lVar22 = FUN_0011fca0(local_158,&local_130);
    if (lVar22 == 0) {
      bVar19 = false;
joined_r0x0011c8c4:
      if (((byte)local_130 & 1) == 0) goto LAB_0011c90c;
LAB_0011c8c8:
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
      if (bVar19) goto LAB_0011c910;
    }
    else {
      local_180 = 0x69727506;
      cStack_17c = '\0';
      lVar22 = FUN_0011fca0(local_158,&local_180);
      if (lVar22 == 0) {
        if (plVar40[5] == local_88) {
                    /* try { // try from 0011df8c to 0011df97 has its CatchHandler @ 0011e444 */
                    /* WARNING: Subroutine does not return */
          FUN_00114504("unordered_map::at: key not found");
        }
        goto LAB_0011e690;
      }
      if (*(int *)(lVar22 + 0x58) == 0) {
        piVar33 = (int *)(lVar22 + 0x28);
      }
      else {
        if (*(int *)(lVar22 + 0x58) != 1) {
          if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0011e210 to 0011e213 has its CatchHandler @ 0011e444 */
            FUN_0011a6d0();
          }
          goto LAB_0011e690;
        }
        piVar33 = (int *)(lVar22 + 0x30);
      }
      bVar19 = *piVar33 == 6;
      if ((local_180 & 1) != 0) {
        operator_delete(local_170);
        goto joined_r0x0011c8c4;
      }
      if (((byte)local_130 & 1) != 0) goto LAB_0011c8c8;
LAB_0011c90c:
      if (bVar19) {
LAB_0011c910:
        local_180 = 0x69727506;
        cStack_17c = '\0';
        lVar22 = FUN_0011fca0(local_158,&local_180);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 0011e0e4 to 0011e0ef has its CatchHandler @ 0011e470 */
                    /* WARNING: Subroutine does not return */
            FUN_00114504("unordered_map::at: key not found");
          }
          goto LAB_0011e690;
        }
                    /* try { // try from 0011c934 to 0011c93f has its CatchHandler @ 0011e470 */
        FUN_0011a704(&local_130,lVar22 + 0x28);
        if ((*(byte *)(param_2 + 2) & 1) != 0) {
          operator_delete(*(void **)(param_2 + 6));
        }
        uVar46 = CONCAT11(cStack_12f,local_130);
        local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                    0x0;
        cStack_12f = 0;
        *(ulong *)(param_2 + 4) =
             CONCAT17(cStack_121,
                      CONCAT16(cStack_122,
                               CONCAT24(uStack_124,
                                        CONCAT13(cStack_125,CONCAT21(uStack_127,cStack_128)))));
        *(ulong *)(param_2 + 2) =
             CONCAT17(cStack_129,
                      CONCAT16(cStack_12a,
                               CONCAT15(cStack_12b,CONCAT14(cStack_12c,CONCAT22(uStack_12e,uVar46)))
                              ));
        *(ulong *)(param_2 + 6) = CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120));
        if ((local_180 & 1) != 0) {
          operator_delete(local_170);
        }
      }
    }
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xc;
    cStack_12f = 'b';
    uStack_12e = 0x6e75;
    cStack_12c = 'd';
    cStack_12b = 'l';
    cStack_12a = 'e';
    cStack_129 = '\0';
    lVar22 = FUN_0011fca0(local_158,&local_130);
    if (lVar22 == 0) {
      bVar19 = false;
joined_r0x0011c9e8:
      if (((byte)local_130 & 1) == 0) goto LAB_0011ca30;
LAB_0011c9ec:
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
      if (bVar19) goto LAB_0011ca34;
    }
    else {
      local_180 = 0x6e75620c;
      cStack_17c = 'd';
      cStack_17b = 'l';
      cStack_17a = 'e';
      cStack_179 = '\0';
      lVar22 = FUN_0011fca0(local_158,&local_180);
      if (lVar22 == 0) {
        if (plVar40[5] == local_88) {
                    /* try { // try from 0011dfac to 0011dfb7 has its CatchHandler @ 0011e440 */
                    /* WARNING: Subroutine does not return */
          FUN_00114504("unordered_map::at: key not found");
        }
        goto LAB_0011e690;
      }
      if (*(int *)(lVar22 + 0x58) == 0) {
        piVar33 = (int *)(lVar22 + 0x28);
      }
      else {
        if (*(int *)(lVar22 + 0x58) != 1) {
          if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0011e228 to 0011e22b has its CatchHandler @ 0011e440 */
            FUN_0011a6d0();
          }
          goto LAB_0011e690;
        }
        piVar33 = (int *)(lVar22 + 0x30);
      }
      bVar19 = *piVar33 == 6;
      if ((local_180 & 1) != 0) {
        operator_delete(local_170);
        goto joined_r0x0011c9e8;
      }
      if (((byte)local_130 & 1) != 0) goto LAB_0011c9ec;
LAB_0011ca30:
      if (bVar19) {
LAB_0011ca34:
        local_180 = 0x6e75620c;
        cStack_17c = 'd';
        cStack_17b = 'l';
        cStack_17a = 'e';
        cStack_179 = '\0';
        lVar22 = FUN_0011fca0(local_158,&local_180);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 0011e104 to 0011e10f has its CatchHandler @ 0011e46c */
                    /* WARNING: Subroutine does not return */
            FUN_00114504("unordered_map::at: key not found");
          }
          goto LAB_0011e690;
        }
                    /* try { // try from 0011ca64 to 0011ca6f has its CatchHandler @ 0011e46c */
        FUN_0011a704(&local_130,lVar22 + 0x28);
        if ((*(byte *)(param_2 + 10) & 1) != 0) {
          operator_delete(*(void **)(param_2 + 0xe));
        }
        uVar46 = CONCAT11(cStack_12f,local_130);
        local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                    0x0;
        cStack_12f = 0;
        *(ulong *)(param_2 + 0xc) =
             CONCAT17(cStack_121,
                      CONCAT16(cStack_122,
                               CONCAT24(uStack_124,
                                        CONCAT13(cStack_125,CONCAT21(uStack_127,cStack_128)))));
        *(ulong *)(param_2 + 10) =
             CONCAT17(cStack_129,
                      CONCAT16(cStack_12a,
                               CONCAT15(cStack_12b,CONCAT14(cStack_12c,CONCAT22(uStack_12e,uVar46)))
                              ));
        *(ulong *)(param_2 + 0xe) = CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120));
        if ((local_180 & 1) != 0) {
          operator_delete(local_170);
        }
        *param_2 = 2;
      }
    }
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xe;
    cStack_12f = 'h';
    uStack_12e = 0x6165;
    cStack_12c = 'd';
    cStack_12b = 'e';
    cStack_12a = 'r';
    cStack_129 = 's';
    cStack_128 = '\0';
    lVar22 = FUN_0011fca0(local_158,&local_130);
    if (lVar22 == 0) {
      bVar19 = false;
joined_r0x0011cb40:
      if (((byte)local_130 & 1) == 0) goto LAB_0011cc84;
LAB_0011cb44:
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
      if (bVar19) goto LAB_0011cc88;
    }
    else {
      local_180 = 0x6165680e;
      cStack_17c = 'd';
      cStack_17b = 'e';
      cStack_17a = 'r';
      cStack_179 = 's';
      cStack_178 = '\0';
      lVar22 = FUN_0011fca0(local_158,&local_180);
      if (lVar22 == 0) {
        if (plVar40[5] == local_88) {
                    /* try { // try from 0011dfcc to 0011dfd7 has its CatchHandler @ 0011e4a8 */
                    /* WARNING: Subroutine does not return */
          FUN_00114504("unordered_map::at: key not found");
        }
        goto LAB_0011e690;
      }
      if (*(int *)(lVar22 + 0x58) == 1) {
        if (*(int *)(lVar22 + 0x30) == 7) {
          plVar42 = *(long **)(lVar22 + 0x28);
                    /* try { // try from 0011cb84 to 0011cb8b has its CatchHandler @ 0011e4a8 */
          local_1e8 = (undefined8 *)
                      (**(code **)(*plVar42 + 0x88))(plVar42,*(undefined8 *)(lVar22 + 0x38));
                    /* try { // try from 0011cb98 to 0011cba7 has its CatchHandler @ 0011e3c4 */
          (**(code **)(*plVar42 + 0x218))(&local_200,plVar42,&local_1e8);
                    /* try { // try from 0011cbb0 to 0011cbbb has its CatchHandler @ 0011e3a0 */
          lVar22 = (**(code **)(*plVar42 + 0x240))(plVar42,&local_200);
          if (lVar22 == 0) {
            bVar19 = true;
          }
          else {
                    /* try { // try from 0011cbc8 to 0011cbdb has its CatchHandler @ 0011e39c */
            (**(code **)(*plVar42 + 0x260))(&local_1d0,plVar42,&local_200,0);
            local_1a0 = puStack_1c8;
            puStack_1c8 = (undefined8 *)0x0;
            facebook::jsi::Value::~Value((Value *)&local_1d0);
                    /* try { // try from 0011cbf8 to 0011cc0b has its CatchHandler @ 0011e360 */
            (**(code **)(*plVar42 + 0x188))(&local_1d0,plVar42,&local_1e8,&local_1a0);
            bVar19 = (int)local_1d0 == 6;
            facebook::jsi::Value::~Value((Value *)&local_1d0);
            if (local_1a0 != (undefined8 *)0x0) {
              (**(code **)*local_1a0)();
            }
          }
          if ((undefined8 *)CONCAT44(uStack_1fc,local_200) != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)CONCAT44(uStack_1fc,local_200))();
          }
          if (local_1e8 != (undefined8 *)0x0) {
            (**(code **)*local_1e8)();
          }
        }
        else {
LAB_0011cc38:
          bVar19 = false;
        }
      }
      else {
        if (*(int *)(lVar22 + 0x58) != 0) {
          if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0011e240 to 0011e243 has its CatchHandler @ 0011e4a8 */
            FUN_0011a6d0();
          }
          goto LAB_0011e690;
        }
        if (*(int *)(lVar22 + 0x28) != 5) goto LAB_0011cc38;
        if (*(long *)(lVar22 + 0x40) == 0) {
          bVar19 = true;
        }
        else {
          bVar19 = *(int *)(*(long *)(lVar22 + 0x40) + 0x40) == 6;
        }
      }
      if ((local_180 & 1) != 0) {
        operator_delete(local_170);
        goto joined_r0x0011cb40;
      }
      if (((byte)local_130 & 1) != 0) goto LAB_0011cb44;
LAB_0011cc84:
      if (bVar19) {
LAB_0011cc88:
        local_200 = 0x6165680e;
        uStack_1fc = 0x73726564;
        local_1f8 = 0;
        lVar22 = FUN_0011fca0(local_158,&local_200);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 0011e124 to 0011e12f has its CatchHandler @ 0011e45c */
                    /* WARNING: Subroutine does not return */
            FUN_00114504("unordered_map::at: key not found");
          }
          goto LAB_0011e690;
        }
        if (*(int *)(lVar22 + 0x58) == 1) {
          plVar42 = *(long **)(lVar22 + 0x28);
                    /* try { // try from 0011d0e0 to 0011d0e7 has its CatchHandler @ 0011e45c */
          local_188 = (undefined8 *)
                      (**(code **)(*plVar42 + 0x88))(plVar42,*(undefined8 *)(lVar22 + 0x38));
                    /* try { // try from 0011d0f4 to 0011d103 has its CatchHandler @ 0011e3f0 */
          (**(code **)(*plVar42 + 0x218))(&local_190,plVar42,&local_188);
                    /* try { // try from 0011d10c to 0011d117 has its CatchHandler @ 0011e3e0 */
          lVar22 = (**(code **)(*plVar42 + 0x240))(plVar42,&local_190);
          local_160 = 1.0;
          cStack_178 = '\0';
          acStack_177[0] = '\0';
          acStack_177[1] = '\0';
          acStack_177[2] = '\0';
          acStack_177[3] = '\0';
          acStack_177[4] = '\0';
          acStack_177[5] = 0;
          acStack_177[6] = 0;
          local_180 = 0;
          cStack_17c = '\0';
          cStack_17b = '\0';
          cStack_17a = '\0';
          cStack_179 = '\0';
          local_168 = 0;
          local_170 = (long *)0x0;
          if (lVar22 != 0) {
            lVar32 = 0;
            do {
                    /* try { // try from 0011d16c to 0011d17f has its CatchHandler @ 0011e57c */
              (**(code **)(*plVar42 + 0x260))(&local_1a0,plVar42,&local_190,lVar32);
                    /* try { // try from 0011d18c to 0011d193 has its CatchHandler @ 0011e584 */
              local_1a8 = (undefined8 *)(**(code **)(*plVar42 + 0x80))(plVar42,local_198);
                    /* try { // try from 0011d1a0 to 0011d1b3 has its CatchHandler @ 0011e58c */
              (**(code **)(*plVar42 + 0x188))(local_1b8,plVar42,&local_188,&local_1a8);
              if (local_1b8[0] != 0) {
                    /* try { // try from 0011d1c4 to 0011d1d3 has its CatchHandler @ 0011e550 */
                (**(code **)(*plVar42 + 0x120))(&local_1d0,plVar42,&local_1a8);
                    /* try { // try from 0011d1d4 to 0011d1e3 has its CatchHandler @ 0011e558 */
                facebook::jsi::Value::asString((IRuntime *)local_1b8);
                    /* try { // try from 0011d1ec to 0011d1fb has its CatchHandler @ 0011e528 */
                (**(code **)(*plVar42 + 0x120))(&local_1e8,plVar42,&local_130);
                puVar26 = (undefined8 *)
                          CONCAT17(cStack_129,
                                   CONCAT16(cStack_12a,
                                            CONCAT15(cStack_12b,
                                                     CONCAT14(cStack_12c,
                                                              CONCAT22(uStack_12e,
                                                                       CONCAT11(cStack_12f,local_130
                                                                               ))))));
                if (puVar26 != (undefined8 *)0x0) {
                  (**(code **)*puVar26)();
                }
                puVar26 = (undefined8 *)(local_1d0 >> 1 & 0x7f);
                pcVar3 = (char *)((ulong)&local_1d0 | 1);
                if ((local_1d0 & 1) != 0) {
                  puVar26 = puStack_1c8;
                  pcVar3 = local_1c0;
                }
                    /* try { // try from 0011d22c to 0011d233 has its CatchHandler @ 0011e548 */
                puVar23 = (undefined4 *)FUN_00114710(&local_130,pcVar3,puVar26);
                puVar43 = (undefined4 *)
                          CONCAT17(acStack_177[6],
                                   CONCAT16(acStack_177[5],CONCAT51(acStack_177._0_5_,cStack_178)));
                puVar30 = param_2;
                if (puVar43 != (undefined4 *)0x0) {
                  uVar49 = NEON_cnt(puVar43,1);
                  uVar46 = NEON_uaddlv(uVar49,1);
                  uVar28 = CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar46) & 0xffffffff;
                  if (uVar28 < 2) {
                    puVar30 = (undefined4 *)((long)puVar43 - 1U & (ulong)puVar23);
                  }
                  else {
                    puVar30 = puVar23;
                    if (puVar43 <= puVar23) {
                      uVar34 = 0;
                      if (puVar43 != (undefined4 *)0x0) {
                        uVar34 = (ulong)puVar23 / (ulong)puVar43;
                      }
                      puVar30 = (undefined4 *)((long)puVar23 - uVar34 * (long)puVar43);
                    }
                  }
                  plVar39 = *(long **)(CONCAT17(cStack_179,
                                                CONCAT16(cStack_17a,
                                                         CONCAT15(cStack_17b,
                                                                  CONCAT14(cStack_17c,local_180))))
                                      + (long)puVar30 * 8);
                  if ((plVar39 != (long *)0x0) &&
                     (plVar39 = (long *)*plVar39, plVar39 != (long *)0x0)) {
                    puVar26 = (undefined8 *)(local_1d0 >> 1 & 0x7f);
                    pcVar3 = (char *)((ulong)&local_1d0 | 1);
                    if ((local_1d0 & 1) != 0) {
                      puVar26 = puStack_1c8;
                      pcVar3 = local_1c0;
                    }
                    do {
                      puVar27 = (undefined4 *)plVar39[1];
                      if (puVar27 == puVar23) {
                        bVar20 = *(byte *)(plVar39 + 2);
                        puVar31 = (undefined8 *)(ulong)(bVar20 >> 1);
                        puVar44 = puVar31;
                        if ((bVar20 & 1) != 0) {
                          puVar44 = (undefined8 *)plVar39[3];
                        }
                        if (puVar44 == puVar26) {
                          if ((bVar20 & 1) == 0) {
                            if (bVar20 < 2) goto LAB_0011d560;
                            pcVar35 = (char *)((long)plVar39 + 0x11);
                            pcVar37 = pcVar3;
                            while (*pcVar35 == *pcVar37) {
                              puVar31 = (undefined8 *)((long)puVar31 + -1);
                              pcVar35 = pcVar35 + 1;
                              pcVar37 = pcVar37 + 1;
                              if (puVar31 == (undefined8 *)0x0) goto LAB_0011d560;
                            }
                          }
                          else {
                            iVar21 = memcmp((void *)plVar39[4],pcVar3,(size_t)plVar39[3]);
                            if (iVar21 == 0) goto LAB_0011d560;
                          }
                        }
                      }
                      else {
                        if (uVar28 < 2) {
                          puVar27 = (undefined4 *)((ulong)puVar27 & (long)puVar43 - 1U);
                        }
                        else if (puVar43 <= puVar27) {
                          uVar34 = 0;
                          if (puVar43 != (undefined4 *)0x0) {
                            uVar34 = (ulong)puVar27 / (ulong)puVar43;
                          }
                          puVar27 = (undefined4 *)((long)puVar27 - uVar34 * (long)puVar43);
                        }
                        if (puVar27 != puVar30) break;
                      }
                      plVar39 = (long *)*plVar39;
                    } while (plVar39 != (long *)0x0);
                  }
                }
                    /* try { // try from 0011d354 to 0011d35b has its CatchHandler @ 0011e510 */
                plVar39 = (long *)operator_new(0x40);
                cStack_120 = 0;
                *plVar39 = 0;
                plVar39[1] = (long)puVar23;
                local_130 = SUB81(plVar39,0);
                cStack_12f = (char)((ulong)plVar39 >> 8);
                uStack_12e = (undefined2)((ulong)plVar39 >> 0x10);
                cStack_12c = (char)((ulong)plVar39 >> 0x20);
                cStack_12b = (char)((ulong)plVar39 >> 0x28);
                cStack_12a = (char)((ulong)plVar39 >> 0x30);
                cStack_129 = (char)((ulong)plVar39 >> 0x38);
                cStack_128 = (char)&local_170;
                uStack_127 = (undefined2)((ulong)&local_170 >> 8);
                cStack_125 = (char)((ulong)&local_170 >> 0x18);
                uStack_124 = (undefined2)((ulong)&local_170 >> 0x20);
                cStack_122 = (char)((ulong)&local_170 >> 0x30);
                cStack_121 = (char)((ulong)&local_170 >> 0x38);
                if ((local_1d0 & 1) == 0) {
                  plVar39[3] = (long)puStack_1c8;
                  plVar39[2] = local_1d0;
                  plVar39[4] = (long)local_1c0;
                }
                else {
                    /* try { // try from 0011d390 to 0011d397 has its CatchHandler @ 0011e4e4 */
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  __init_copy_ctor_external
                            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              *)(plVar39 + 2),local_1c0,(ulong)puStack_1c8);
                }
                pvVar25 = local_1d8;
                lVar4 = lStack_1e0;
                lStack_1e0 = 0;
                local_1d8 = (void *)0x0;
                plVar39[7] = (long)pvVar25;
                plVar39[6] = lVar4;
                plVar39[5] = (long)local_1e8;
                local_1e8 = (undefined8 *)0x0;
                cStack_120 = '\x01';
                if ((puVar43 == (undefined4 *)0x0) ||
                   (local_160 * (float)puVar43 < (float)(local_168 + 1))) {
                  if (puVar43 < (undefined4 *)0x3) {
                    uVar28 = 1;
                  }
                  else {
                    uVar28 = (ulong)(((ulong)puVar43 & (long)puVar43 - 1U) != 0);
                  }
                  uVar28 = uVar28 | (long)puVar43 << 1;
                  uVar34 = (ulong)((float)(local_168 + 1) / local_160);
                  if (uVar28 <= uVar34) {
                    uVar28 = uVar34;
                  }
                  if (uVar28 - 1 == 0) {
                    uVar28 = 2;
                  }
                  else if ((uVar28 & uVar28 - 1) != 0) {
                    /* try { // try from 0011d428 to 0011d4ab has its CatchHandler @ 0011e4e0 */
                    uVar28 = std::__ndk1::__next_prime(uVar28);
                  }
                  uVar34 = CONCAT17(acStack_177[6],
                                    CONCAT16(acStack_177[5],CONCAT51(acStack_177._0_5_,cStack_178)))
                  ;
                  if (uVar34 < uVar28) {
LAB_0011d440:
                    FUN_00120860(&local_180,uVar28);
                  }
                  else if (uVar28 < uVar34) {
                    uVar24 = (ulong)((float)local_168 / local_160);
                    if (uVar34 < 3) {
LAB_0011d4a8:
                      uVar24 = std::__ndk1::__next_prime(uVar24);
                    }
                    else {
                      uVar49 = NEON_cnt(uVar34,1);
                      uVar46 = NEON_uaddlv(uVar49,1);
                      if (1 < (uint)CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar46))
                      goto LAB_0011d4a8;
                      if (1 < uVar24) {
                        uVar24 = 1L << (-LZCOUNT(uVar24 - 1) & 0x3fU);
                      }
                    }
                    if (uVar28 <= uVar24) {
                      uVar28 = uVar24;
                    }
                    if (uVar28 < uVar34) goto LAB_0011d440;
                  }
                  puVar43 = (undefined4 *)
                            CONCAT17(acStack_177[6],
                                     CONCAT16(acStack_177[5],CONCAT51(acStack_177._0_5_,cStack_178))
                                    );
                  if (((ulong)puVar43 & (long)puVar43 - 1U) == 0) {
                    puVar30 = (undefined4 *)((long)puVar43 - 1U & (ulong)puVar23);
                  }
                  else {
                    puVar30 = puVar23;
                    if (puVar43 <= puVar23) {
                      uVar28 = 0;
                      if (puVar43 != (undefined4 *)0x0) {
                        uVar28 = (ulong)puVar23 / (ulong)puVar43;
                      }
                      puVar30 = (undefined4 *)((long)puVar23 - uVar28 * (long)puVar43);
                    }
                  }
                }
                lVar4 = CONCAT17(cStack_179,
                                 CONCAT16(cStack_17a,
                                          CONCAT15(cStack_17b,CONCAT14(cStack_17c,local_180))));
                plVar29 = *(long **)(lVar4 + (long)puVar30 * 8);
                if (plVar29 == (long *)0x0) {
                  *plVar39 = (long)local_170;
                  *(long ***)(lVar4 + (long)puVar30 * 8) = &local_170;
                  local_170 = plVar39;
                  if (*plVar39 != 0) {
                    puVar30 = *(undefined4 **)(*plVar39 + 8);
                    if (((ulong)puVar43 & (long)puVar43 - 1U) == 0) {
                      puVar30 = (undefined4 *)((ulong)puVar30 & (long)puVar43 - 1U);
                    }
                    else if (puVar43 <= puVar30) {
                      uVar28 = 0;
                      if (puVar43 != (undefined4 *)0x0) {
                        uVar28 = (ulong)puVar30 / (ulong)puVar43;
                      }
                      puVar30 = (undefined4 *)((long)puVar30 - uVar28 * (long)puVar43);
                    }
                    plVar29 = (long *)(CONCAT17(cStack_179,
                                                CONCAT16(cStack_17a,
                                                         CONCAT15(cStack_17b,
                                                                  CONCAT14(cStack_17c,local_180))))
                                      + (long)puVar30 * 8);
                    goto LAB_0011d550;
                  }
                }
                else {
                  *plVar39 = *plVar29;
LAB_0011d550:
                  *plVar29 = (long)plVar39;
                }
                local_168 = local_168 + 1;
LAB_0011d560:
                if (((ulong)local_1e8 & 1) != 0) {
                  operator_delete(local_1d8);
                }
                if ((local_1d0 & 1) != 0) {
                  operator_delete(local_1c0);
                }
              }
              facebook::jsi::Value::~Value((Value *)local_1b8);
              if (local_1a8 != (undefined8 *)0x0) {
                (**(code **)*local_1a8)();
              }
              facebook::jsi::Value::~Value((Value *)&local_1a0);
              lVar32 = lVar32 + 1;
            } while (lVar32 != lVar22);
          }
          if (local_190 != (undefined8 *)0x0) {
            (**(code **)*local_190)();
          }
          if (local_188 != (undefined8 *)0x0) {
            (**(code **)*local_188)();
          }
        }
        else {
          if (*(int *)(lVar22 + 0x58) != 0) {
            if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0011e2b8 to 0011e2bb has its CatchHandler @ 0011e45c */
              FUN_0011a6d0();
            }
            goto LAB_0011e690;
          }
          local_160 = 1.0;
          cStack_178 = '\0';
          acStack_177[0] = '\0';
          acStack_177[1] = '\0';
          acStack_177[2] = '\0';
          acStack_177[3] = '\0';
          acStack_177[4] = '\0';
          acStack_177[5] = 0;
          acStack_177[6] = 0;
          local_180 = 0;
          cStack_17c = '\0';
          cStack_17b = '\0';
          cStack_17a = '\0';
          cStack_179 = '\0';
          local_168 = 0;
          local_170 = (long *)0x0;
          if (*(int *)(lVar22 + 0x28) != 5) {
            if (plVar40[5] == local_88) {
                    /* try { // try from 0011e2d0 to 0011e2df has its CatchHandler @ 0011e3e8 */
                    /* WARNING: Subroutine does not return */
              FUN_00119c04(*(undefined8 *)PTR_name_0012fcb0);
            }
            goto LAB_0011e690;
          }
          plVar42 = *(long **)(lVar22 + 0x40);
          if (plVar42 != (long *)0x0) {
            do {
              if ((int)plVar42[8] != 6) {
                if (plVar40[5] == local_88) {
                    /* try { // try from 0011dee4 to 0011def3 has its CatchHandler @ 0011e61c */
                    /* WARNING: Subroutine does not return */
                  FUN_00119c04(*(undefined8 *)PTR_name_0012fc98);
                }
                goto LAB_0011e690;
              }
              if ((plVar42[9] & 1U) == 0) {
                puStack_1c8 = (undefined8 *)plVar42[10];
                local_1d0 = plVar42[9];
                local_1c0 = (char *)plVar42[0xb];
              }
              else {
                    /* try { // try from 0011cd4c to 0011cd53 has its CatchHandler @ 0011e508 */
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                __init_copy_ctor_external
                          ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_1d0,(char *)plVar42[0xb],plVar42[10]);
              }
              if ((int)plVar42[2] != 6) {
                if (plVar40[5] == local_88) {
                    /* try { // try from 0011dec0 to 0011decf has its CatchHandler @ 0011e624 */
                    /* WARNING: Subroutine does not return */
                  FUN_00119c04(*(undefined8 *)PTR_name_0012fc98);
                }
                goto LAB_0011e690;
              }
              pbVar45 = (byte *)(plVar42 + 3);
              uVar28 = plVar42[4];
              lVar22 = plVar42[5];
              if ((*pbVar45 & 1) == 0) {
                lVar22 = (long)plVar42 + 0x19;
                uVar28 = (ulong)(*pbVar45 >> 1);
              }
                    /* try { // try from 0011cd7c to 0011cd83 has its CatchHandler @ 0011e654 */
              puVar23 = (undefined4 *)FUN_00114710(&local_130,lVar22,uVar28);
              puVar43 = (undefined4 *)
                        CONCAT17(acStack_177[6],
                                 CONCAT16(acStack_177[5],CONCAT51(acStack_177._0_5_,cStack_178)));
              puVar30 = param_2;
              if (puVar43 != (undefined4 *)0x0) {
                uVar49 = NEON_cnt(puVar43,1);
                uVar46 = NEON_uaddlv(uVar49,1);
                uVar28 = CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar46) & 0xffffffff;
                if (uVar28 < 2) {
                  puVar30 = (undefined4 *)((long)puVar43 - 1U & (ulong)puVar23);
                }
                else {
                  puVar30 = puVar23;
                  if (puVar43 <= puVar23) {
                    uVar34 = 0;
                    if (puVar43 != (undefined4 *)0x0) {
                      uVar34 = (ulong)puVar23 / (ulong)puVar43;
                    }
                    puVar30 = (undefined4 *)((long)puVar23 - uVar34 * (long)puVar43);
                  }
                }
                puVar26 = *(undefined8 **)
                           (CONCAT17(cStack_179,
                                     CONCAT16(cStack_17a,
                                              CONCAT15(cStack_17b,CONCAT14(cStack_17c,local_180))))
                           + (long)puVar30 * 8);
                if ((puVar26 != (undefined8 *)0x0) &&
                   (plVar39 = (long *)*puVar26, plVar39 != (long *)0x0)) {
                  pvVar25 = (void *)((long)plVar42 + 0x19);
                  sVar1 = (ulong)(*(byte *)(plVar42 + 3) >> 1);
                  if ((*(byte *)(plVar42 + 3) & 1) != 0) {
                    pvVar25 = (void *)plVar42[5];
                    sVar1 = plVar42[4];
                  }
                  do {
                    puVar27 = (undefined4 *)plVar39[1];
                    if (puVar27 == puVar23) {
                      bVar20 = *(byte *)(plVar39 + 2);
                      sVar2 = (ulong)(bVar20 >> 1);
                      if ((bVar20 & 1) != 0) {
                        sVar2 = plVar39[3];
                      }
                      if (sVar2 == sVar1) {
                        if ((bVar20 & 1) == 0) {
                          if (bVar20 < 2) goto LAB_0011d0a4;
                          uVar34 = 0;
                          while (*(char *)((long)plVar39 + uVar34 + 0x11) ==
                                 *(char *)((long)pvVar25 + uVar34)) {
                            uVar34 = uVar34 + 1;
                            if (bVar20 >> 1 == uVar34) goto LAB_0011d0a4;
                          }
                        }
                        else {
                          iVar21 = memcmp((void *)plVar39[4],pvVar25,plVar39[3]);
                          if (iVar21 == 0) goto LAB_0011d0a4;
                        }
                      }
                    }
                    else {
                      if (uVar28 < 2) {
                        puVar27 = (undefined4 *)((ulong)puVar27 & (long)puVar43 - 1U);
                      }
                      else if (puVar43 <= puVar27) {
                        uVar34 = 0;
                        if (puVar43 != (undefined4 *)0x0) {
                          uVar34 = (ulong)puVar27 / (ulong)puVar43;
                        }
                        puVar27 = (undefined4 *)((long)puVar27 - uVar34 * (long)puVar43);
                      }
                      if (puVar27 != puVar30) break;
                    }
                    plVar39 = (long *)*plVar39;
                  } while (plVar39 != (long *)0x0);
                }
              }
                    /* try { // try from 0011cea8 to 0011ceaf has its CatchHandler @ 0011e578 */
              plVar39 = (long *)operator_new(0x40);
              *plVar39 = 0;
              plVar39[1] = (long)puVar23;
              local_130 = SUB81(plVar39,0);
              cStack_12f = (char)((ulong)plVar39 >> 8);
              uStack_12e = (undefined2)((ulong)plVar39 >> 0x10);
              cStack_12c = (char)((ulong)plVar39 >> 0x20);
              cStack_12b = (char)((ulong)plVar39 >> 0x28);
              cStack_12a = (char)((ulong)plVar39 >> 0x30);
              cStack_129 = (char)((ulong)plVar39 >> 0x38);
              cStack_128 = (char)&local_170;
              uStack_127 = (undefined2)((ulong)&local_170 >> 8);
              cStack_125 = (char)((ulong)&local_170 >> 0x18);
              uStack_124 = (undefined2)((ulong)&local_170 >> 0x20);
              cStack_122 = (char)((ulong)&local_170 >> 0x30);
              cStack_121 = (char)((ulong)&local_170 >> 0x38);
              cStack_120 = 0;
              if ((*pbVar45 & 1) == 0) {
                lVar32 = plVar42[4];
                lVar22 = *(long *)pbVar45;
                plVar39[4] = plVar42[5];
                plVar39[3] = lVar32;
                plVar39[2] = lVar22;
              }
              else {
                    /* try { // try from 0011cee0 to 0011cee7 has its CatchHandler @ 0011e4f4 */
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                __init_copy_ctor_external
                          ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)(plVar39 + 2),(char *)plVar42[5],plVar42[4]);
              }
              plVar39[5] = 0;
              plVar39[6] = 0;
              plVar39[7] = 0;
              cStack_120 = '\x01';
              if ((puVar43 == (undefined4 *)0x0) ||
                 (local_160 * (float)puVar43 < (float)(local_168 + 1))) {
                if (puVar43 < (undefined4 *)0x3) {
                  uVar28 = 1;
                }
                else {
                  uVar28 = (ulong)(((ulong)puVar43 & (long)puVar43 - 1U) != 0);
                }
                uVar28 = uVar28 | (long)puVar43 << 1;
                uVar34 = (ulong)((float)(local_168 + 1) / local_160);
                if (uVar28 <= uVar34) {
                  uVar28 = uVar34;
                }
                if (uVar28 - 1 == 0) {
                  uVar28 = 2;
                }
                else if ((uVar28 & uVar28 - 1) != 0) {
                    /* try { // try from 0011cf68 to 0011cfeb has its CatchHandler @ 0011e4f8 */
                  uVar28 = std::__ndk1::__next_prime(uVar28);
                }
                uVar34 = CONCAT17(acStack_177[6],
                                  CONCAT16(acStack_177[5],CONCAT51(acStack_177._0_5_,cStack_178)));
                if (uVar34 < uVar28) {
LAB_0011cf80:
                  FUN_00120860(&local_180,uVar28);
                }
                else if (uVar28 < uVar34) {
                  uVar24 = (ulong)((float)local_168 / local_160);
                  if (uVar34 < 3) {
LAB_0011cfe8:
                    uVar24 = std::__ndk1::__next_prime(uVar24);
                  }
                  else {
                    uVar49 = NEON_cnt(uVar34,1);
                    uVar46 = NEON_uaddlv(uVar49,1);
                    if (1 < (uint)CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar46)) goto LAB_0011cfe8;
                    if (1 < uVar24) {
                      uVar24 = 1L << (-LZCOUNT(uVar24 - 1) & 0x3fU);
                    }
                  }
                  if (uVar28 <= uVar24) {
                    uVar28 = uVar24;
                  }
                  if (uVar28 < uVar34) goto LAB_0011cf80;
                }
                puVar43 = (undefined4 *)
                          CONCAT17(acStack_177[6],
                                   CONCAT16(acStack_177[5],CONCAT51(acStack_177._0_5_,cStack_178)));
                if (((ulong)puVar43 & (long)puVar43 - 1U) == 0) {
                  puVar30 = (undefined4 *)((long)puVar43 - 1U & (ulong)puVar23);
                }
                else {
                  puVar30 = puVar23;
                  if (puVar43 <= puVar23) {
                    uVar28 = 0;
                    if (puVar43 != (undefined4 *)0x0) {
                      uVar28 = (ulong)puVar23 / (ulong)puVar43;
                    }
                    puVar30 = (undefined4 *)((long)puVar23 - uVar28 * (long)puVar43);
                  }
                }
              }
              lVar22 = CONCAT17(cStack_179,
                                CONCAT16(cStack_17a,
                                         CONCAT15(cStack_17b,CONCAT14(cStack_17c,local_180))));
              plVar29 = *(long **)(lVar22 + (long)puVar30 * 8);
              if (plVar29 == (long *)0x0) {
                *plVar39 = (long)local_170;
                *(long ***)(lVar22 + (long)puVar30 * 8) = &local_170;
                local_170 = plVar39;
                if (*plVar39 != 0) {
                  puVar30 = *(undefined4 **)(*plVar39 + 8);
                  if (((ulong)puVar43 & (long)puVar43 - 1U) == 0) {
                    puVar30 = (undefined4 *)((ulong)puVar30 & (long)puVar43 - 1U);
                  }
                  else if (puVar43 <= puVar30) {
                    uVar28 = 0;
                    if (puVar43 != (undefined4 *)0x0) {
                      uVar28 = (ulong)puVar30 / (ulong)puVar43;
                    }
                    puVar30 = (undefined4 *)((long)puVar30 - uVar28 * (long)puVar43);
                  }
                  plVar29 = (long *)(CONCAT17(cStack_179,
                                              CONCAT16(cStack_17a,
                                                       CONCAT15(cStack_17b,
                                                                CONCAT14(cStack_17c,local_180)))) +
                                    (long)puVar30 * 8);
                  goto LAB_0011d094;
                }
              }
              else {
                *plVar39 = *plVar29;
LAB_0011d094:
                *plVar29 = (long)plVar39;
              }
              local_168 = local_168 + 1;
LAB_0011d0a4:
              if ((plVar39[5] & 1U) != 0) {
                operator_delete((void *)plVar39[7]);
              }
              plVar39[6] = (long)puStack_1c8;
              plVar39[5] = local_1d0;
              plVar39[7] = (long)local_1c0;
              plVar42 = (long *)*plVar42;
            } while (plVar42 != (long *)0x0);
          }
        }
        if ((local_200 & 1) != 0) {
          operator_delete(local_1f0);
        }
        if (local_170 != (long *)0x0) {
          plVar42 = local_170;
          do {
            if ((*(byte *)(plVar42 + 2) & 1) == 0) {
              lVar32 = plVar42[3];
              uVar49 = plVar42[2];
              lVar22 = plVar42[4];
              cStack_128 = (char)lVar32;
              uStack_127 = (undefined2)((ulong)lVar32 >> 8);
              cStack_125 = (char)((ulong)lVar32 >> 0x18);
              uStack_124 = (undefined2)((ulong)lVar32 >> 0x20);
              cStack_122 = (char)((ulong)lVar32 >> 0x30);
              cStack_121 = (char)((ulong)lVar32 >> 0x38);
              local_130 = SUB81(uVar49,0);
              cStack_12f = (char)((ulong)uVar49 >> 8);
              uStack_12e = (undefined2)((ulong)uVar49 >> 0x10);
              cStack_12c = (char)((ulong)uVar49 >> 0x20);
              cStack_12b = (char)((ulong)uVar49 >> 0x28);
              cStack_12a = (char)((ulong)uVar49 >> 0x30);
              cStack_129 = (char)((ulong)uVar49 >> 0x38);
              cStack_120 = (char)lVar22;
              uStack_11f = (undefined1)((ulong)lVar22 >> 8);
              uStack_11e = (undefined6)((ulong)lVar22 >> 0x10);
            }
            else {
                    /* try { // try from 0011d63c to 0011d643 has its CatchHandler @ 0011e614 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              __init_copy_ctor_external(&local_130,(char *)plVar42[4],plVar42[3]);
            }
            if ((plVar42[5] & 1U) == 0) {
              uStack_110 = plVar42[6];
              local_118 = plVar42[5];
              local_108 = (void *)plVar42[7];
            }
            else {
                    /* try { // try from 0011d668 to 0011d66f has its CatchHandler @ 0011e5fc */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              __init_copy_ctor_external
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_118,(char *)plVar42[7],plVar42[6]);
            }
            puVar26 = *(undefined8 **)(param_2 + 0x24);
            if (puVar26 < *(undefined8 **)(param_2 + 0x26)) {
              puVar26[2] = CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120));
              puVar26[1] = CONCAT17(cStack_121,
                                    CONCAT16(cStack_122,
                                             CONCAT24(uStack_124,
                                                      CONCAT13(cStack_125,
                                                               CONCAT21(uStack_127,cStack_128)))));
              *puVar26 = CONCAT17(cStack_129,
                                  CONCAT16(cStack_12a,
                                           CONCAT15(cStack_12b,
                                                    CONCAT14(cStack_12c,
                                                             CONCAT22(uStack_12e,
                                                                      CONCAT11(cStack_12f,local_130)
                                                                     )))));
              cStack_128 = '\0';
              uStack_127 = 0;
              cStack_125 = '\0';
              uStack_124 = 0;
              cStack_122 = '\0';
              cStack_121 = '\0';
              cStack_120 = '\0';
              uStack_11f = 0;
              uStack_11e = 0;
              local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           )0x0;
              cStack_12f = '\0';
              uStack_12e = 0;
              cStack_12c = '\0';
              cStack_12b = '\0';
              cStack_12a = '\0';
              cStack_129 = '\0';
              puVar26[5] = local_108;
              puVar26[4] = uStack_110;
              puVar26[3] = local_118;
              uStack_110 = 0;
              local_108 = (void *)0x0;
              local_118 = 0;
              *(undefined8 **)(param_2 + 0x24) = puVar26 + 6;
            }
            else {
              puVar44 = *(undefined8 **)(param_2 + 0x22);
              lVar22 = (long)puVar26 - (long)puVar44 >> 4;
              uVar28 = lVar22 * -0x5555555555555555 + 1;
              if (0x555555555555555 < uVar28) {
                if (plVar40[5] != local_88) goto LAB_0011e690;
                    /* try { // try from 0011df08 to 0011df0b has its CatchHandler @ 0011e658 */
                FUN_0011e730();
                plVar40 = plVar42;
                goto LAB_0011df0c;
              }
              lVar32 = (long)*(undefined8 **)(param_2 + 0x26) - (long)puVar44 >> 4;
              uVar34 = lVar32 * 0x5555555555555556;
              if (uVar34 < uVar28 || uVar34 - uVar28 == 0) {
                uVar34 = uVar28;
              }
              if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar32 * -0x5555555555555555)) {
                uVar34 = 0x555555555555555;
              }
              if (uVar34 == 0) {
                pvVar25 = (void *)0x0;
              }
              else {
                if (0x555555555555555 < uVar34) {
                  if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0011df34 to 0011df37 has its CatchHandler @ 0011e658 */
                    FUN_00119bd0();
                  }
                  goto LAB_0011e690;
                }
                    /* try { // try from 0011d708 to 0011d70b has its CatchHandler @ 0011e54c */
                pvVar25 = operator_new(uVar34 * 0x30);
              }
              pvVar41 = local_108;
              puVar36 = (undefined8 *)((long)pvVar25 + lVar22 * 0x10);
              uVar5 = CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120));
              uVar50 = CONCAT17(cStack_121,
                                CONCAT16(cStack_122,
                                         CONCAT24(uStack_124,
                                                  CONCAT13(cStack_125,
                                                           CONCAT21(uStack_127,cStack_128)))));
              uVar49 = CONCAT17(cStack_129,
                                CONCAT16(cStack_12a,
                                         CONCAT15(cStack_12b,
                                                  CONCAT14(cStack_12c,
                                                           CONCAT22(uStack_12e,
                                                                    CONCAT11(cStack_12f,local_130)))
                                                 )));
              local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           )0x0;
              cStack_12f = '\0';
              uStack_12e = 0;
              cStack_12c = '\0';
              cStack_12b = '\0';
              cStack_12a = '\0';
              cStack_129 = '\0';
              cStack_128 = '\0';
              uStack_127 = 0;
              cStack_125 = '\0';
              uStack_124 = 0;
              cStack_122 = '\0';
              cStack_121 = '\0';
              cStack_120 = '\0';
              uStack_11f = 0;
              uStack_11e = 0;
              local_108 = (void *)0x0;
              puVar36[2] = uVar5;
              pvVar25 = (void *)((long)pvVar25 + uVar34 * 0x30);
              puVar31 = puVar36 + 6;
              puVar36[1] = uVar50;
              *puVar36 = uVar49;
              puVar36[5] = pvVar41;
              puVar36[4] = uStack_110;
              puVar36[3] = local_118;
              local_118 = 0;
              uStack_110 = 0;
              if (puVar26 == puVar44) {
                *(undefined8 **)(param_2 + 0x22) = puVar36;
                *(undefined8 **)(param_2 + 0x24) = puVar31;
                *(void **)(param_2 + 0x26) = pvVar25;
              }
              else {
                do {
                  uVar50 = puVar26[-5];
                  uVar49 = puVar26[-6];
                  puVar36[-4] = puVar26[-4];
                  puVar36[-5] = uVar50;
                  puVar36[-6] = uVar49;
                  uVar50 = puVar26[-2];
                  uVar49 = puVar26[-3];
                  puVar26[-5] = 0;
                  puVar26[-4] = 0;
                  puVar26[-6] = 0;
                  puVar36[-1] = puVar26[-1];
                  puVar38 = puVar26 + -6;
                  puVar36[-2] = uVar50;
                  puVar36[-3] = uVar49;
                  puVar36 = puVar36 + -6;
                  puVar26[-2] = 0;
                  puVar26[-1] = 0;
                  puVar26[-3] = 0;
                  puVar26 = puVar38;
                } while (puVar38 != puVar44);
                puVar26 = *(undefined8 **)(param_2 + 0x22);
                puVar44 = *(undefined8 **)(param_2 + 0x24);
                *(undefined8 **)(param_2 + 0x22) = puVar36;
                *(undefined8 **)(param_2 + 0x24) = puVar31;
                *(void **)(param_2 + 0x26) = pvVar25;
                for (; puVar44 != puVar26; puVar44 = puVar44 + -6) {
                  if ((*(byte *)(puVar44 + -3) & 1) != 0) {
                    operator_delete((void *)puVar44[-1]);
                  }
                  if ((*(byte *)(puVar44 + -6) & 1) != 0) {
                    operator_delete((void *)puVar44[-4]);
                  }
                }
              }
              if (puVar26 != (undefined8 *)0x0) {
                operator_delete(puVar26);
              }
              *(undefined8 **)(param_2 + 0x24) = puVar31;
              if ((local_118 & 1) != 0) {
                operator_delete(local_108);
              }
            }
            if (((byte)local_130 & 1) != 0) {
              operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
            }
            plVar42 = (long *)*plVar42;
            plVar39 = local_170;
          } while (plVar42 != (long *)0x0);
          while (plVar39 != (long *)0x0) {
            plVar42 = (long *)*plVar39;
            if ((*(byte *)(plVar39 + 5) & 1) != 0) {
              operator_delete((void *)plVar39[7]);
            }
            if ((*(byte *)(plVar39 + 2) & 1) != 0) {
              operator_delete((void *)plVar39[4]);
            }
            operator_delete(plVar39);
            plVar39 = plVar42;
          }
        }
        pvVar25 = (void *)CONCAT17(cStack_179,
                                   CONCAT16(cStack_17a,
                                            CONCAT15(cStack_17b,CONCAT14(cStack_17c,local_180))));
        local_180 = 0;
        cStack_17c = '\0';
        cStack_17b = '\0';
        cStack_17a = '\0';
        cStack_179 = '\0';
        if (pvVar25 != (void *)0x0) {
          operator_delete(pvVar25);
        }
      }
    }
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x8;
    cStack_12f = 'b';
    uStack_12e = 0x646f;
    cStack_12c = 'y';
    cStack_12b = '\0';
    lVar22 = FUN_0011fca0(local_158,&local_130);
    if (lVar22 == 0) {
      bVar19 = false;
joined_r0x0011d8e4:
      if (((byte)local_130 & 1) == 0) goto LAB_0011d918;
LAB_0011d8e8:
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
      if (bVar19) goto LAB_0011d91c;
    }
    else {
      local_180 = 0x646f6208;
      cStack_17c = 'y';
      cStack_17b = '\0';
      lVar22 = FUN_0011fca0(local_158,&local_180);
      if (lVar22 == 0) {
        if (plVar40[5] == local_88) {
                    /* try { // try from 0011dfec to 0011dff7 has its CatchHandler @ 0011e43c */
                    /* WARNING: Subroutine does not return */
          FUN_00114504("unordered_map::at: key not found");
        }
        goto LAB_0011e690;
      }
      if (*(int *)(lVar22 + 0x58) == 0) {
        piVar33 = (int *)(lVar22 + 0x28);
      }
      else {
        if (*(int *)(lVar22 + 0x58) != 1) {
          if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0011e258 to 0011e25b has its CatchHandler @ 0011e43c */
            FUN_0011a6d0();
          }
          goto LAB_0011e690;
        }
        piVar33 = (int *)(lVar22 + 0x30);
      }
      bVar19 = *piVar33 == 6;
      if ((local_180 & 1) != 0) {
        operator_delete(local_170);
        goto joined_r0x0011d8e4;
      }
      if (((byte)local_130 & 1) != 0) goto LAB_0011d8e8;
LAB_0011d918:
      if (bVar19) {
LAB_0011d91c:
        cStack_17c = 'y';
        local_180 = 0x646f6208;
        cStack_17b = '\0';
        lVar22 = FUN_0011fca0(local_158,&local_180);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 0011e144 to 0011e14f has its CatchHandler @ 0011e458 */
                    /* WARNING: Subroutine does not return */
            FUN_00114504("unordered_map::at: key not found");
          }
          goto LAB_0011e690;
        }
                    /* try { // try from 0011d93c to 0011d947 has its CatchHandler @ 0011e458 */
        FUN_0011a704(&local_130,lVar22 + 0x28);
        if ((*(byte *)(param_2 + 0x14) & 1) != 0) {
          operator_delete(*(void **)(param_2 + 0x18));
        }
        uVar46 = CONCAT11(cStack_12f,local_130);
        local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                    0x0;
        cStack_12f = 0;
        *(ulong *)(param_2 + 0x16) =
             CONCAT17(cStack_121,
                      CONCAT16(cStack_122,
                               CONCAT24(uStack_124,
                                        CONCAT13(cStack_125,CONCAT21(uStack_127,cStack_128)))));
        *(ulong *)(param_2 + 0x14) =
             CONCAT17(cStack_129,
                      CONCAT16(cStack_12a,
                               CONCAT15(cStack_12b,CONCAT14(cStack_12c,CONCAT22(uStack_12e,uVar46)))
                              ));
        *(ulong *)(param_2 + 0x18) = CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120));
        if ((local_180 & 1) != 0) {
          operator_delete(local_170);
        }
      }
    }
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xc;
    cStack_12f = 'm';
    uStack_12e = 0x7465;
    cStack_12c = 'h';
    cStack_12b = 'o';
    cStack_12a = 'd';
    cStack_129 = '\0';
    lVar22 = FUN_0011fca0(local_158,&local_130);
    if (lVar22 == 0) {
      bVar19 = false;
joined_r0x0011d9f0:
      if (((byte)local_130 & 1) == 0) goto LAB_0011da38;
LAB_0011d9f4:
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
      if (bVar19) goto LAB_0011da3c;
    }
    else {
      local_180 = 0x74656d0c;
      cStack_17c = 'h';
      cStack_17b = 'o';
      cStack_17a = 'd';
      cStack_179 = '\0';
      lVar22 = FUN_0011fca0(local_158,&local_180);
      if (lVar22 == 0) {
        if (plVar40[5] == local_88) {
                    /* try { // try from 0011e00c to 0011e017 has its CatchHandler @ 0011e438 */
                    /* WARNING: Subroutine does not return */
          FUN_00114504("unordered_map::at: key not found");
        }
        goto LAB_0011e690;
      }
      if (*(int *)(lVar22 + 0x58) == 0) {
        piVar33 = (int *)(lVar22 + 0x28);
      }
      else {
        if (*(int *)(lVar22 + 0x58) != 1) {
          if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0011e270 to 0011e273 has its CatchHandler @ 0011e438 */
            FUN_0011a6d0();
          }
          goto LAB_0011e690;
        }
        piVar33 = (int *)(lVar22 + 0x30);
      }
      bVar19 = *piVar33 == 6;
      if ((local_180 & 1) != 0) {
        operator_delete(local_170);
        goto joined_r0x0011d9f0;
      }
      if (((byte)local_130 & 1) != 0) goto LAB_0011d9f4;
LAB_0011da38:
      if (bVar19) {
LAB_0011da3c:
        local_180 = 0x74656d0c;
        cStack_17c = 'h';
        cStack_17b = 'o';
        cStack_17a = 'd';
        cStack_179 = '\0';
        lVar22 = FUN_0011fca0(local_158,&local_180);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 0011e164 to 0011e16f has its CatchHandler @ 0011e454 */
                    /* WARNING: Subroutine does not return */
            FUN_00114504("unordered_map::at: key not found");
          }
          goto LAB_0011e690;
        }
                    /* try { // try from 0011da6c to 0011da77 has its CatchHandler @ 0011e454 */
        FUN_0011a704(&local_130,lVar22 + 0x28);
        if ((*(byte *)(param_2 + 0x1a) & 1) != 0) {
          operator_delete(*(void **)(param_2 + 0x1e));
        }
        uVar46 = CONCAT11(cStack_12f,local_130);
        local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                    0x0;
        cStack_12f = 0;
        *(ulong *)(param_2 + 0x1c) =
             CONCAT17(cStack_121,
                      CONCAT16(cStack_122,
                               CONCAT24(uStack_124,
                                        CONCAT13(cStack_125,CONCAT21(uStack_127,cStack_128)))));
        *(ulong *)(param_2 + 0x1a) =
             CONCAT17(cStack_129,
                      CONCAT16(cStack_12a,
                               CONCAT15(cStack_12b,CONCAT14(cStack_12c,CONCAT22(uStack_12e,uVar46)))
                              ));
        *(ulong *)(param_2 + 0x1e) = CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120));
        if ((local_180 & 1) != 0) {
          operator_delete(local_170);
        }
      }
    }
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xa;
    cStack_12f = 'c';
    uStack_12e = 0x6361;
    cStack_12c = 'h';
    cStack_12b = 'e';
    cStack_12a = '\0';
    lVar22 = FUN_0011fca0(local_158,&local_130);
    if (lVar22 == 0) {
      bVar19 = false;
joined_r0x0011db18:
      if (((byte)local_130 & 1) == 0) goto LAB_0011db60;
LAB_0011db1c:
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
      if (bVar19) goto LAB_0011db64;
    }
    else {
      local_180 = 0x6361630a;
      cStack_17c = 'h';
      cStack_17b = 'e';
      cStack_17a = '\0';
      lVar22 = FUN_0011fca0(local_158,&local_180);
      if (lVar22 == 0) {
        if (plVar40[5] == local_88) {
                    /* try { // try from 0011e02c to 0011e037 has its CatchHandler @ 0011e434 */
                    /* WARNING: Subroutine does not return */
          FUN_00114504("unordered_map::at: key not found");
        }
        goto LAB_0011e690;
      }
      if (*(int *)(lVar22 + 0x58) == 0) {
        piVar33 = (int *)(lVar22 + 0x28);
      }
      else {
        if (*(int *)(lVar22 + 0x58) != 1) {
          if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0011e288 to 0011e28b has its CatchHandler @ 0011e434 */
            FUN_0011a6d0();
          }
          goto LAB_0011e690;
        }
        piVar33 = (int *)(lVar22 + 0x30);
      }
      bVar19 = *piVar33 == 6;
      if ((local_180 & 1) != 0) {
        operator_delete(local_170);
        goto joined_r0x0011db18;
      }
      if (((byte)local_130 & 1) != 0) goto LAB_0011db1c;
LAB_0011db60:
      if (bVar19) {
LAB_0011db64:
        local_180 = 0x6361630a;
        cStack_17c = 'h';
        cStack_17b = 'e';
        cStack_17a = '\0';
        lVar22 = FUN_0011fca0(local_158,&local_180);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 0011e184 to 0011e18f has its CatchHandler @ 0011e450 */
                    /* WARNING: Subroutine does not return */
            FUN_00114504("unordered_map::at: key not found");
          }
          goto LAB_0011e690;
        }
                    /* try { // try from 0011db90 to 0011db9b has its CatchHandler @ 0011e450 */
        FUN_0011a704(&local_130,lVar22 + 0x28);
        if ((local_180 & 1) != 0) {
          operator_delete(local_170);
        }
        uVar28 = (ulong)((byte)local_130 >> 1);
        if (((byte)local_130 & 1) != 0) {
          uVar28 = CONCAT17(cStack_121,
                            CONCAT16(cStack_122,
                                     CONCAT24(uStack_124,
                                              CONCAT13(cStack_125,CONCAT21(uStack_127,cStack_128))))
                           );
        }
        if (uVar28 == 0xe) {
          plVar42 = (long *)((ulong)&local_130 | 1);
          if (((byte)local_130 & 1) != 0) {
            plVar42 = (long *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120));
          }
          if (*plVar42 == 0x2d66692d796c6e6f && *(long *)((long)plVar42 + 6) == 0x6465686361632d66)
          {
            uVar47 = 3;
LAB_0011dcc4:
            param_2[0x20] = uVar47;
          }
        }
        else if (uVar28 == 0xb) {
          plVar42 = (long *)((ulong)&local_130 | 1);
          if (((byte)local_130 & 1) != 0) {
            plVar42 = (long *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120));
          }
          if (*plVar42 == 0x61632d6563726f66 && *(long *)((long)plVar42 + 3) == 0x65686361632d6563)
          {
            uVar47 = 2;
            goto LAB_0011dcc4;
          }
        }
        else if (uVar28 == 6) {
          piVar33 = (int *)((ulong)&local_130 | 1);
          if (((byte)local_130 & 1) != 0) {
            piVar33 = (int *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120));
          }
          if (*piVar33 == 0x6f6c6572 && (short)piVar33[1] == 0x6461) {
            uVar47 = 1;
            goto LAB_0011dcc4;
          }
        }
        if (((byte)local_130 & 1) != 0) {
          operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
        }
      }
    }
    uVar7 = s_isForceCached_00107b95._8_5_;
    uVar6 = s_isForceCached_00107b95._0_5_;
    local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1a
    ;
    cStack_12f = (char)s_isForceCached_00107b95._0_5_;
    cVar9 = cStack_12f;
    uStack_12e = SUB52(s_isForceCached_00107b95._0_5_,1);
    uVar46 = uStack_12e;
    cStack_12c = SUB51(s_isForceCached_00107b95._0_5_,3);
    cVar10 = cStack_12c;
    cStack_12b = SUB51(s_isForceCached_00107b95._0_5_,4);
    cVar11 = cStack_12b;
    cStack_12a = (char)s_isForceCached_00107b95._5_3_;
    cVar12 = cStack_12a;
    cStack_129 = SUB31(s_isForceCached_00107b95._5_3_,1);
    cVar13 = cStack_129;
    cStack_128 = SUB31(s_isForceCached_00107b95._5_3_,2);
    cVar14 = cStack_128;
    uStack_127 = (undefined2)s_isForceCached_00107b95._8_5_;
    uVar15 = uStack_127;
    cStack_125 = SUB51(s_isForceCached_00107b95._8_5_,2);
    cVar16 = cStack_125;
    uStack_124 = SUB52(s_isForceCached_00107b95._8_5_,3);
    uVar17 = uStack_124;
    cStack_122 = '\0';
    lVar22 = FUN_0011fca0(local_158,&local_130);
    uVar8 = s_isForceCached_00107b95._8_5_;
    if (lVar22 == 0) {
      bVar19 = false;
joined_r0x0011dd48:
      if (((byte)local_130 & 1) == 0) goto LAB_0011dd7c;
LAB_0011dd4c:
      operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
      pvVar25 = local_158[0];
      puVar26 = local_148;
      if (bVar19) goto LAB_0011dd80;
    }
    else {
      local_180 = CONCAT31((int3)uVar6,0x1a);
      s_isForceCached_00107b95[8] = (char)uVar7;
      s_isForceCached_00107b95[9] = SUB51(uVar7,1);
      s_isForceCached_00107b95[10] = SUB51(uVar7,2);
      s_isForceCached_00107b95[0xb] = SUB51(uVar7,3);
      s_isForceCached_00107b95[0xc] = SUB51(uVar7,4);
      acStack_177[0] = s_isForceCached_00107b95[8];
      acStack_177[1] = s_isForceCached_00107b95[9];
      acStack_177[2] = s_isForceCached_00107b95[10];
      acStack_177[3] = s_isForceCached_00107b95[0xb];
      acStack_177[4] = s_isForceCached_00107b95[0xc];
      acStack_177[5] = 0;
      s_isForceCached_00107b95._8_5_ = uVar8;
      cStack_17c = cVar10;
      cStack_17b = cVar11;
      cStack_17a = cVar12;
      cStack_179 = cVar13;
      cStack_178 = cVar14;
      lVar22 = FUN_0011fca0(local_158,&local_180);
      if (lVar22 == 0) {
        if (plVar40[5] == local_88) {
                    /* try { // try from 0011e04c to 0011e057 has its CatchHandler @ 0011e430 */
                    /* WARNING: Subroutine does not return */
          FUN_00114504("unordered_map::at: key not found");
        }
        goto LAB_0011e690;
      }
      if (*(int *)(lVar22 + 0x58) == 0) {
        piVar33 = (int *)(lVar22 + 0x28);
      }
      else {
        if (*(int *)(lVar22 + 0x58) != 1) {
          if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0011e2a0 to 0011e2a3 has its CatchHandler @ 0011e430 */
            FUN_0011a6d0();
          }
          goto LAB_0011e690;
        }
        piVar33 = (int *)(lVar22 + 0x30);
      }
      bVar19 = *piVar33 == 2;
      if ((local_180 & 1) != 0) {
        operator_delete(local_170);
        goto joined_r0x0011dd48;
      }
      if (((byte)local_130 & 1) != 0) goto LAB_0011dd4c;
LAB_0011dd7c:
      pvVar25 = local_158[0];
      puVar26 = local_148;
      if (bVar19) {
LAB_0011dd80:
        local_130 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                    0x1a;
        cStack_122 = '\0';
        cStack_12f = cVar9;
        uStack_12e = uVar46;
        cStack_12c = cVar10;
        cStack_12b = cVar11;
        cStack_12a = cVar12;
        cStack_129 = cVar13;
        cStack_128 = cVar14;
        uStack_127 = uVar15;
        cStack_125 = cVar16;
        uStack_124 = uVar17;
        lVar22 = FUN_0011fca0(local_158,&local_130);
        if (lVar22 == 0) {
          if (plVar40[5] == local_88) {
                    /* try { // try from 0011e1a4 to 0011e1af has its CatchHandler @ 0011e4d0 */
                    /* WARNING: Subroutine does not return */
            FUN_00114504("unordered_map::at: key not found");
          }
          goto LAB_0011e690;
        }
        if (*(int *)(lVar22 + 0x58) == 1) {
                    /* try { // try from 0011dde4 to 0011ddeb has its CatchHandler @ 0011e4d0 */
          bVar20 = facebook::jsi::Value::asBool();
        }
        else {
          if (*(int *)(lVar22 + 0x58) != 0) {
            if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0011e2f4 to 0011e31b has its CatchHandler @ 0011e4d0 */
              FUN_0011a6d0();
            }
            goto LAB_0011e690;
          }
          if (*(int *)(lVar22 + 0x28) != 2) {
            if (plVar40[5] == local_88) {
                    /* WARNING: Subroutine does not return */
              FUN_00119c04(*(undefined8 *)PTR_name_0012fca8);
            }
            goto LAB_0011e690;
          }
          bVar20 = *(char *)(lVar22 + 0x30) != '\0';
        }
        *(byte *)(param_2 + 8) = bVar20 & 1;
        pvVar25 = local_158[0];
        puVar26 = local_148;
        if (((byte)local_130 & 1) != 0) {
          operator_delete((void *)CONCAT62(uStack_11e,CONCAT11(uStack_11f,cStack_120)));
          pvVar25 = local_158[0];
          puVar26 = local_148;
        }
      }
    }
    while (puVar26 != (undefined8 *)0x0) {
      pvVar41 = (void *)*puVar26;
      local_158[0] = pvVar25;
      if (*(uint *)(puVar26 + 0xb) != 0xffffffff) {
                    /* try { // try from 0011de40 to 0011de4b has its CatchHandler @ 0011e694 */
        (*(code *)(&PTR_FUN_0012f788)[*(uint *)(puVar26 + 0xb)])(&local_130,puVar26 + 5);
      }
      *(undefined4 *)(puVar26 + 0xb) = 0xffffffff;
      if ((*(byte *)(puVar26 + 2) & 1) != 0) {
        operator_delete((void *)puVar26[4]);
      }
      operator_delete(puVar26);
      pvVar25 = local_158[0];
      puVar26 = (undefined8 *)pvVar41;
    }
    local_158[0] = (void *)0x0;
    if (pvVar25 != (void *)0x0) {
      operator_delete(pvVar25);
    }
  }
  if (plVar40[5] == local_88) {
    return;
  }
LAB_0011e690:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011e698  FUN_0011e698 =====

void FUN_0011e698(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  
  if (*(char *)(param_1 + 1) == '\0') {
    puVar2 = (undefined8 *)*param_1;
    pvVar3 = (void *)*puVar2;
    if (pvVar3 != (void *)0x0) {
      pvVar4 = (void *)puVar2[1];
      pvVar1 = pvVar3;
      if (pvVar4 != pvVar3) {
        do {
          if ((*(byte *)((long)pvVar4 + -0x18) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar4 + -8));
          }
          if ((*(byte *)((long)pvVar4 + -0x30) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar4 + -0x20));
          }
          pvVar4 = (void *)((long)pvVar4 + -0x30);
        } while (pvVar4 != pvVar3);
        pvVar1 = *(void **)*param_1;
      }
      puVar2[1] = pvVar3;
      operator_delete(pvVar1);
      return;
    }
  }
  return;
}


// ===== 0011e730  FUN_0011e730 =====

void FUN_0011e730(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00119b50("vector");
}


// ===== 0011e744  FUN_0011e744 =====

void FUN_0011e744(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    return;
  }
  lVar2 = **(long **)(param_1 + 8);
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x30) {
    if ((*(byte *)(lVar1 + -0x18) & 1) != 0) {
      operator_delete(*(void **)(lVar1 + -8));
    }
    if ((*(byte *)(lVar1 + -0x30) & 1) != 0) {
      operator_delete(*(void **)(lVar1 + -0x20));
    }
  }
  return;
}


// ===== 0011e7a8  FUN_0011e7a8 =====

undefined4 * FUN_0011e7a8(undefined4 *param_1,undefined4 *param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 6));
  }
  uVar6 = *(undefined8 *)(param_2 + 4);
  uVar2 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = uVar6;
  *(undefined8 *)(param_1 + 2) = uVar2;
  *(undefined2 *)(param_2 + 2) = 0;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  if ((*(byte *)(param_1 + 10) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xe));
  }
  uVar6 = *(undefined8 *)(param_2 + 0xc);
  uVar2 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = uVar6;
  *(undefined8 *)(param_1 + 10) = uVar2;
  *(undefined2 *)(param_2 + 10) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  param_1[0x12] = param_2[0x12];
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  if ((*(byte *)(param_1 + 0x14) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  uVar6 = *(undefined8 *)(param_2 + 0x16);
  uVar2 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x16) = uVar6;
  *(undefined8 *)(param_1 + 0x14) = uVar2;
  *(undefined2 *)(param_2 + 0x14) = 0;
  if ((*(byte *)(param_1 + 0x1a) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x1e));
  }
  uVar6 = *(undefined8 *)(param_2 + 0x1c);
  uVar2 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x1c) = uVar6;
  *(undefined8 *)(param_1 + 0x1a) = uVar2;
  *(undefined2 *)(param_2 + 0x1a) = 0;
  puVar3 = (undefined8 *)(param_1 + 0x22);
  pvVar4 = (void *)*puVar3;
  param_1[0x20] = param_2[0x20];
  if (pvVar4 != (void *)0x0) {
    pvVar5 = *(void **)(param_1 + 0x24);
    pvVar1 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        if ((*(byte *)((long)pvVar5 + -0x18) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar5 + -8));
        }
        if ((*(byte *)((long)pvVar5 + -0x30) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar5 + -0x20));
        }
        pvVar5 = (void *)((long)pvVar5 + -0x30);
      } while (pvVar5 != pvVar4);
      pvVar1 = (void *)*puVar3;
    }
    *(void **)(param_1 + 0x24) = pvVar4;
    operator_delete(pvVar1);
    *puVar3 = 0;
    *(undefined8 *)(param_1 + 0x24) = 0;
    *(undefined8 *)(param_1 + 0x26) = 0;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x22) = uVar2;
  *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_2 + 0x22) = 0;
  *(undefined8 *)(param_2 + 0x24) = 0;
  *(undefined8 *)(param_2 + 0x26) = 0;
  return param_1;
}


// ===== 0011e924  FUN_0011e924 =====

float FUN_0011e924(int *param_1)

{
  byte ****ppppbVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  double dVar5;
  undefined1 auVar6 [16];
  byte ***local_68;
  byte ***local_60;
  byte ***pppbStack_58;
  byte ***local_50;
  byte ***pppbStack_48;
  byte ***local_40;
  byte ***pppbStack_38;
  undefined1 local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  if (param_1[0xc] == 1) {
    dVar5 = (double)facebook::jsi::Value::asNumber();
  }
  else {
    if (param_1[0xc] != 0) {
LAB_0011ea8c:
      if (*(long *)(lVar3 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
        FUN_0011a6d0();
      }
      goto LAB_0011eabc;
    }
    iVar2 = *param_1;
    if (iVar2 < 4) {
      if (iVar2 == 2) {
        dVar5 = (double)NEON_ucvtf((ulong)*(byte *)(param_1 + 2));
      }
      else {
        if (iVar2 != 3) {
LAB_0011eaa0:
          if (*(long *)(lVar3 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
            FUN_00119c04("int/double/bool/string");
          }
          goto LAB_0011eabc;
        }
        dVar5 = *(double *)(param_1 + 2);
      }
    }
    else if (iVar2 == 6) {
      uVar4 = (ulong)(*(byte *)(param_1 + 2) >> 1);
      local_60 = (byte ***)((long)param_1 + 9);
      if ((*(byte *)(param_1 + 2) & 1) != 0) {
        uVar4 = *(ulong *)(param_1 + 4);
        local_60 = (byte ***)*(byte *****)(param_1 + 6);
      }
      pppbStack_58 = (byte ***)((long)local_60 + uVar4);
      local_50 = local_60;
      pppbStack_48 = pppbStack_58;
      auVar6 = folly::detail::str_to_floating<double>((Range *)&local_50);
      dVar5 = auVar6._8_8_;
      uVar4 = auVar6._0_8_;
      if ((uVar4 & 0xff) != 1) {
LAB_0011ea68:
        local_50 = (byte ***)&local_60;
        if (*(long *)(lVar3 + 0x28) != local_28) goto LAB_0011eabc;
        FUN_00120610(&local_50,uVar4 >> 8);
        goto LAB_0011ea8c;
      }
      local_40 = local_50;
      pppbStack_38 = pppbStack_48;
      local_30 = 1;
      for (ppppbVar1 = (byte ****)local_50; (byte ****)pppbStack_48 != ppppbVar1;
          ppppbVar1 = (byte ****)((long)ppppbVar1 + 1)) {
        if ((*(byte *)ppppbVar1 != 0x20) && (4 < *(byte *)ppppbVar1 - 9)) {
          local_68 = (byte ***)&local_40;
          if (*(long *)(lVar3 + 0x28) != local_28) goto LAB_0011eabc;
          uVar4 = FUN_00120754(&local_68);
          goto LAB_0011ea68;
        }
      }
    }
    else {
      if (iVar2 != 4) goto LAB_0011eaa0;
      dVar5 = (double)FUN_0011fe5c(param_1 + 2);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return (float)dVar5;
  }
LAB_0011eabc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011eac0  FUN_0011eac0 =====

void FUN_0011eac0(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = (undefined8 *)param_1[2];
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 5) & 1) != 0) {
      operator_delete((void *)puVar1[7]);
    }
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}


// ===== 0011eb40  FUN_0011eb40 =====

void FUN_0011eb40(long *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  Value aVStack_60 [8];
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar1 = *param_2;
  if (iVar1 == 7) {
    local_40 = (undefined8 *)(**(code **)(*param_1 + 0x88))(param_1,*(undefined8 *)(param_2 + 2));
                    /* try { // try from 0011eb8c to 0011eb9b has its CatchHandler @ 0011ecf4 */
    (**(code **)(*param_1 + 0x218))(&local_48,param_1,&local_40);
                    /* try { // try from 0011eba4 to 0011ebaf has its CatchHandler @ 0011ecd0 */
    lVar3 = (**(code **)(*param_1 + 0x240))(param_1,&local_48);
    if (lVar3 != 0) {
                    /* try { // try from 0011ebbc to 0011ebcf has its CatchHandler @ 0011eccc */
      (**(code **)(*param_1 + 0x260))(aVStack_60,param_1,&local_48,0);
      local_50 = local_58;
      local_58 = (undefined8 *)0x0;
      facebook::jsi::Value::~Value(aVStack_60);
                    /* try { // try from 0011ebe8 to 0011ebfb has its CatchHandler @ 0011ec6c */
      (**(code **)(*param_1 + 0x188))(aVStack_60,param_1,&local_40,&local_50);
      facebook::jsi::Value::~Value(aVStack_60);
      if (local_50 != (undefined8 *)0x0) {
        (**(code **)*local_50)();
      }
    }
    if (local_48 != (undefined8 *)0x0) {
      (**(code **)*local_48)();
    }
    if (local_40 != (undefined8 *)0x0) {
      (**(code **)*local_40)();
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 7);
}


// ===== 0011ed04  FUN_0011ed04 =====

void FUN_0011ed04(long *param_1,int *param_2)

{
  long *plVar1;
  dynamic *pdVar2;
  size_t sVar3;
  size_t sVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  void *__s2;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  byte *pbVar18;
  long *plVar19;
  ulong unaff_x28;
  undefined2 uVar20;
  undefined8 uVar21;
  dynamic adStack_d0 [48];
  uint local_a0;
  dynamic *local_98;
  undefined8 local_90;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  iVar8 = *param_2;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (iVar8 == 5) {
    plVar19 = *(long **)(param_2 + 6);
    if (plVar19 != (long *)0x0) {
      plVar1 = param_1 + 2;
      do {
                    /* try { // try from 0011ed74 to 0011ed7f has its CatchHandler @ 0011f260 */
        folly::dynamic::dynamic(adStack_d0,(dynamic *)(plVar19 + 8));
        local_a0 = 0;
        if ((int)plVar19[2] != 6) {
          if (*(long *)(lVar7 + 0x28) == local_68) {
                    /* try { // try from 0011f1cc to 0011f1db has its CatchHandler @ 0011f22c */
                    /* WARNING: Subroutine does not return */
            FUN_00119c04(*(undefined8 *)PTR_name_0012fc98);
          }
          goto LAB_0011f25c;
        }
        pbVar18 = (byte *)(plVar19 + 3);
        uVar9 = plVar19[4];
        lVar15 = plVar19[5];
        if ((*pbVar18 & 1) == 0) {
          lVar15 = (long)plVar19 + 0x19;
          uVar9 = (ulong)(*pbVar18 >> 1);
        }
                    /* try { // try from 0011edac to 0011edb3 has its CatchHandler @ 0011f264 */
        uVar9 = FUN_00114710(&local_98,lVar15,uVar9);
        uVar17 = param_1[1];
        if (uVar17 != 0) {
          uVar21 = NEON_cnt(uVar17,1);
          uVar20 = NEON_uaddlv(uVar21,1);
          uVar12 = CONCAT62((int6)((ulong)uVar21 >> 0x10),uVar20) & 0xffffffff;
          if (uVar12 < 2) {
            unaff_x28 = uVar17 - 1 & uVar9;
          }
          else {
            unaff_x28 = uVar9;
            if (uVar17 <= uVar9) {
              uVar11 = 0;
              if (uVar17 != 0) {
                uVar11 = uVar9 / uVar17;
              }
              unaff_x28 = uVar9 - uVar11 * uVar17;
            }
          }
          puVar10 = *(undefined8 **)(*param_1 + unaff_x28 * 8);
          if ((puVar10 != (undefined8 *)0x0) && (plVar16 = (long *)*puVar10, plVar16 != (long *)0x0)
             ) {
            __s2 = (void *)((long)plVar19 + 0x19);
            sVar3 = (ulong)(*(byte *)(plVar19 + 3) >> 1);
            if ((*(byte *)(plVar19 + 3) & 1) != 0) {
              __s2 = (void *)plVar19[5];
              sVar3 = plVar19[4];
            }
            do {
              uVar11 = plVar16[1];
              if (uVar11 == uVar9) {
                bVar5 = *(byte *)(plVar16 + 2);
                sVar4 = (ulong)(bVar5 >> 1);
                if ((bVar5 & 1) != 0) {
                  sVar4 = plVar16[3];
                }
                if (sVar4 == sVar3) {
                  if ((bVar5 & 1) == 0) {
                    if (bVar5 < 2) goto LAB_0011f0f0;
                    uVar11 = 0;
                    while (*(char *)((long)plVar16 + uVar11 + 0x11) ==
                           *(char *)((long)__s2 + uVar11)) {
                      uVar11 = uVar11 + 1;
                      if (bVar5 >> 1 == uVar11) goto LAB_0011f0f0;
                    }
                  }
                  else {
                    iVar8 = memcmp((void *)plVar16[4],__s2,plVar16[3]);
                    if (iVar8 == 0) goto LAB_0011f0f0;
                  }
                }
              }
              else {
                if (uVar12 < 2) {
                  uVar11 = uVar11 & uVar17 - 1;
                }
                else if (uVar17 <= uVar11) {
                  uVar6 = 0;
                  if (uVar17 != 0) {
                    uVar6 = uVar11 / uVar17;
                  }
                  uVar11 = uVar11 - uVar6 * uVar17;
                }
                if (uVar11 != unaff_x28) break;
              }
              plVar16 = (long *)*plVar16;
            } while (plVar16 != (long *)0x0);
          }
        }
                    /* try { // try from 0011eee4 to 0011eeeb has its CatchHandler @ 0011f228 */
        plVar16 = (long *)operator_new(0x60);
        *plVar16 = 0;
        plVar16[1] = uVar9;
        if ((*pbVar18 & 1) == 0) {
          lVar14 = plVar19[4];
          lVar15 = *(long *)pbVar18;
          plVar16[4] = plVar19[5];
          plVar16[3] = lVar14;
          plVar16[2] = lVar15;
        }
        else {
                    /* try { // try from 0011ef1c to 0011ef23 has its CatchHandler @ 0011f210 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(plVar16 + 2),(char *)plVar19[5],plVar19[4]);
        }
        local_98 = (dynamic *)((ulong)local_98 & 0xffffffff00000000);
        local_90 = 0;
        folly::dynamic::dynamic((dynamic *)(plVar16 + 5),(dynamic *)&local_98);
        *(undefined4 *)(plVar16 + 0xb) = 0;
        folly::dynamic::destroy();
        if ((uVar17 == 0) || (*(float *)(param_1 + 4) * (float)uVar17 < (float)(param_1[3] + 1))) {
          if (uVar17 < 3) {
            uVar12 = 1;
          }
          else {
            uVar12 = (ulong)((uVar17 & uVar17 - 1) != 0);
          }
          uVar12 = uVar12 | uVar17 << 1;
          uVar17 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
          if (uVar12 <= uVar17) {
            uVar12 = uVar17;
          }
          if (uVar12 - 1 == 0) {
            uVar12 = 2;
          }
          else if ((uVar12 & uVar12 - 1) != 0) {
                    /* try { // try from 0011efbc to 0011f03f has its CatchHandler @ 0011f214 */
            uVar12 = std::__ndk1::__next_prime(uVar12);
          }
          uVar17 = param_1[1];
          if (uVar17 < uVar12) {
LAB_0011efd4:
            FUN_0011f99c(param_1,uVar12);
          }
          else if (uVar12 < uVar17) {
            uVar11 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
            if (uVar17 < 3) {
LAB_0011f03c:
              uVar11 = std::__ndk1::__next_prime(uVar11);
            }
            else {
              uVar21 = NEON_cnt(uVar17,1);
              uVar20 = NEON_uaddlv(uVar21,1);
              if (1 < (uint)CONCAT62((int6)((ulong)uVar21 >> 0x10),uVar20)) goto LAB_0011f03c;
              if (1 < uVar11) {
                uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
              }
            }
            if (uVar12 <= uVar11) {
              uVar12 = uVar11;
            }
            if (uVar12 < uVar17) goto LAB_0011efd4;
          }
          uVar17 = param_1[1];
          if ((uVar17 & uVar17 - 1) == 0) {
            unaff_x28 = uVar17 - 1 & uVar9;
          }
          else {
            unaff_x28 = uVar9;
            if (uVar17 <= uVar9) {
              uVar12 = 0;
              if (uVar17 != 0) {
                uVar12 = uVar9 / uVar17;
              }
              unaff_x28 = uVar9 - uVar12 * uVar17;
            }
          }
        }
        lVar15 = *param_1;
        plVar13 = *(long **)(lVar15 + unaff_x28 * 8);
        if (plVar13 == (long *)0x0) {
          lVar14 = *plVar1;
          *plVar1 = (long)plVar16;
          *plVar16 = lVar14;
          *(long **)(lVar15 + unaff_x28 * 8) = plVar1;
          if (*plVar16 != 0) {
            uVar9 = *(ulong *)(*plVar16 + 8);
            if ((uVar17 & uVar17 - 1) == 0) {
              uVar9 = uVar9 & uVar17 - 1;
            }
            else if (uVar17 <= uVar9) {
              uVar12 = 0;
              if (uVar17 != 0) {
                uVar12 = uVar9 / uVar17;
              }
              uVar9 = uVar9 - uVar12 * uVar17;
            }
            plVar13 = (long *)(*param_1 + uVar9 * 8);
            goto LAB_0011f0e0;
          }
        }
        else {
          *plVar16 = *plVar13;
LAB_0011f0e0:
          *plVar13 = (long)plVar16;
        }
        param_1[3] = param_1[3] + 1;
LAB_0011f0f0:
        pdVar2 = (dynamic *)(plVar16 + 5);
        if (pdVar2 == adStack_d0) {
LAB_0011f15c:
          if (local_a0 != 0xffffffff) {
                    /* try { // try from 0011f174 to 0011f17f has its CatchHandler @ 0011f224 */
            (*(code *)(&PTR_FUN_0012f788)[local_a0])(&local_98,adStack_d0);
          }
        }
        else {
          if (*(uint *)(plVar16 + 0xb) != 0xffffffff) {
            if (local_a0 != 0xffffffff) goto code_r0x0011f144;
                    /* try { // try from 0011f124 to 0011f12b has its CatchHandler @ 0011f208 */
            (*(code *)(&PTR_FUN_0012f788)[*(uint *)(plVar16 + 0xb)])(&local_98);
            *(undefined4 *)(plVar16 + 0xb) = 0xffffffff;
            goto LAB_0011f15c;
          }
          if (local_a0 != 0xffffffff) {
code_r0x0011f144:
                    /* try { // try from 0011f150 to 0011f15b has its CatchHandler @ 0011f20c */
            local_98 = pdVar2;
            (*(code *)(&
                      PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___assignment<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>>___generic_assign[abi:ne180000]<std___ndk1___variant_detail___move_assignment<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___move_assignment<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>&&>_0012f7a8
                      )[local_a0])(&local_98,pdVar2,adStack_d0);
            goto LAB_0011f15c;
          }
        }
        plVar19 = (long *)*plVar19;
      } while (plVar19 != (long *)0x0);
    }
    if (*(long *)(lVar7 + 0x28) == local_68) {
      return;
    }
  }
  else if (*(long *)(lVar7 + 0x28) == local_68) {
                    /* try { // try from 0011f1f0 to 0011f1ff has its CatchHandler @ 0011f200 */
                    /* WARNING: Subroutine does not return */
    FUN_00119c04(*(undefined8 *)PTR_name_0012fcb0);
  }
LAB_0011f25c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011f268  FUN_0011f268 =====

void FUN_0011f268(long *param_1,IRuntime *param_2,long param_3)

{
  long *plVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  IRuntime *pIVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  char *pcVar17;
  long lVar18;
  char *pcVar19;
  long lVar20;
  ulong uVar21;
  ulong unaff_x28;
  undefined2 uVar22;
  undefined8 uVar23;
  byte local_120;
  undefined7 uStack_11f;
  size_t sStack_118;
  char *local_110;
  int local_108 [4];
  undefined8 *local_f8;
  Value aVStack_f0 [8];
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  Value aVStack_d0 [16];
  IRuntime *local_c0;
  long *plStack_b8;
  undefined1 local_b0;
  IRuntime *local_a8;
  Value aVStack_a0 [40];
  uint local_78;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  local_d8 = (undefined8 *)
             (**(code **)(*(long *)param_2 + 0x88))(param_2,*(undefined8 *)(param_3 + 8));
                    /* try { // try from 0011f2bc to 0011f2cb has its CatchHandler @ 0011f824 */
  (**(code **)(*(long *)param_2 + 0x218))(&local_e0,param_2,&local_d8);
                    /* try { // try from 0011f2d4 to 0011f2df has its CatchHandler @ 0011f81c */
  lVar9 = (**(code **)(*(long *)param_2 + 0x240))(param_2,&local_e0);
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if (lVar9 != 0) {
    lVar20 = 0;
    plVar1 = param_1 + 2;
    do {
                    /* try { // try from 0011f330 to 0011f343 has its CatchHandler @ 0011f880 */
      (**(code **)(*(long *)param_2 + 0x260))(aVStack_f0,param_2,&local_e0,lVar20);
                    /* try { // try from 0011f350 to 0011f357 has its CatchHandler @ 0011f888 */
      local_f8 = (undefined8 *)(**(code **)(*(long *)param_2 + 0x80))(param_2,local_e8);
                    /* try { // try from 0011f364 to 0011f377 has its CatchHandler @ 0011f890 */
      (**(code **)(*(long *)param_2 + 0x188))(local_108,param_2,&local_d8,&local_f8);
      if (local_108[0] != 0) {
                    /* try { // try from 0011f388 to 0011f397 has its CatchHandler @ 0011f870 */
        (**(code **)(*(long *)param_2 + 0x120))(&local_120,param_2,&local_f8);
                    /* try { // try from 0011f398 to 0011f3a7 has its CatchHandler @ 0011f868 */
        facebook::jsi::Value::Value(aVStack_d0,param_2,(Value *)local_108);
        local_c0 = param_2;
        facebook::jsi::Value::Value((Value *)&plStack_b8,aVStack_d0);
        local_a8 = local_c0;
        facebook::jsi::Value::Value(aVStack_a0,(Value *)&plStack_b8);
        local_78 = 1;
        facebook::jsi::Value::~Value((Value *)&plStack_b8);
        facebook::jsi::Value::~Value(aVStack_d0);
        sVar2 = (ulong)(local_120 >> 1);
        pcVar7 = (char *)((ulong)&local_120 | 1);
        if ((local_120 & 1) != 0) {
          sVar2 = sStack_118;
          pcVar7 = local_110;
        }
                    /* try { // try from 0011f408 to 0011f40f has its CatchHandler @ 0011f86c */
        uVar10 = FUN_00114710(&local_c0,pcVar7,sVar2);
        uVar21 = param_1[1];
        if (uVar21 != 0) {
          uVar23 = NEON_cnt(uVar21,1);
          uVar22 = NEON_uaddlv(uVar23,1);
          uVar14 = CONCAT62((int6)((ulong)uVar23 >> 0x10),uVar22) & 0xffffffff;
          if (uVar14 < 2) {
            unaff_x28 = uVar21 - 1 & uVar10;
          }
          else {
            unaff_x28 = uVar10;
            if (uVar21 <= uVar10) {
              uVar13 = 0;
              if (uVar21 != 0) {
                uVar13 = uVar10 / uVar21;
              }
              unaff_x28 = uVar10 - uVar13 * uVar21;
            }
          }
          plVar12 = *(long **)(*param_1 + unaff_x28 * 8);
          if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
            sVar2 = (ulong)(local_120 >> 1);
            pcVar7 = (char *)((ulong)&local_120 | 1);
            if ((local_120 & 1) != 0) {
              sVar2 = sStack_118;
              pcVar7 = local_110;
            }
            do {
              uVar13 = plVar12[1];
              if (uVar13 == uVar10) {
                bVar4 = *(byte *)(plVar12 + 2);
                uVar13 = (ulong)(bVar4 >> 1);
                sVar3 = uVar13;
                if ((bVar4 & 1) != 0) {
                  sVar3 = plVar12[3];
                }
                if (sVar3 == sVar2) {
                  if ((bVar4 & 1) == 0) {
                    if (bVar4 < 2) goto LAB_0011f764;
                    pcVar17 = (char *)((long)plVar12 + 0x11);
                    pcVar19 = pcVar7;
                    while (*pcVar17 == *pcVar19) {
                      uVar13 = uVar13 - 1;
                      pcVar17 = pcVar17 + 1;
                      pcVar19 = pcVar19 + 1;
                      if (uVar13 == 0) goto LAB_0011f764;
                    }
                  }
                  else {
                    iVar8 = memcmp((void *)plVar12[4],pcVar7,plVar12[3]);
                    if (iVar8 == 0) goto LAB_0011f764;
                  }
                }
              }
              else {
                if (uVar14 < 2) {
                  uVar13 = uVar13 & uVar21 - 1;
                }
                else if (uVar21 <= uVar13) {
                  uVar5 = 0;
                  if (uVar21 != 0) {
                    uVar5 = uVar13 / uVar21;
                  }
                  uVar13 = uVar13 - uVar5 * uVar21;
                }
                if (uVar13 != unaff_x28) break;
              }
              plVar12 = (long *)*plVar12;
            } while (plVar12 != (long *)0x0);
          }
        }
                    /* try { // try from 0011f534 to 0011f53b has its CatchHandler @ 0011f848 */
        pIVar11 = (IRuntime *)operator_new(0x60);
        local_b0 = 0;
        *(undefined8 *)pIVar11 = 0;
        *(ulong *)(pIVar11 + 8) = uVar10;
        local_c0 = pIVar11;
        plStack_b8 = plVar1;
        if ((local_120 & 1) == 0) {
          *(size_t *)(pIVar11 + 0x18) = sStack_118;
          *(ulong *)(pIVar11 + 0x10) = CONCAT71(uStack_11f,local_120);
          *(char **)(pIVar11 + 0x20) = local_110;
        }
        else {
                    /* try { // try from 0011f570 to 0011f577 has its CatchHandler @ 0011f82c */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(pIVar11 + 0x10),local_110,sStack_118);
        }
        pIVar11[0x28] = (IRuntime)0x0;
        *(undefined4 *)(pIVar11 + 0x58) = 0xffffffff;
        if (local_78 != 0xffffffff) {
                    /* try { // try from 0011f5a0 to 0011f5ab has its CatchHandler @ 0011f840 */
          (*(code *)(&
                    PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>&&>_0012f798
                    )[local_78])(aVStack_d0,pIVar11 + 0x28,&local_a8);
          *(uint *)(pIVar11 + 0x58) = local_78;
        }
        local_b0 = 1;
        if ((uVar21 == 0) || (*(float *)(param_1 + 4) * (float)uVar21 < (float)(param_1[3] + 1))) {
          if (uVar21 < 3) {
            uVar14 = 1;
          }
          else {
            uVar14 = (ulong)((uVar21 & uVar21 - 1) != 0);
          }
          uVar14 = uVar14 | uVar21 << 1;
          uVar21 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
          if (uVar14 <= uVar21) {
            uVar14 = uVar21;
          }
          if (uVar14 - 1 == 0) {
            uVar14 = 2;
          }
          else if ((uVar14 & uVar14 - 1) != 0) {
                    /* try { // try from 0011f62c to 0011f6af has its CatchHandler @ 0011f830 */
            uVar14 = std::__ndk1::__next_prime(uVar14);
          }
          uVar21 = param_1[1];
          if (uVar21 < uVar14) {
LAB_0011f644:
            FUN_0011f99c(param_1,uVar14);
          }
          else if (uVar14 < uVar21) {
            uVar13 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
            if (uVar21 < 3) {
LAB_0011f6ac:
              uVar13 = std::__ndk1::__next_prime(uVar13);
            }
            else {
              uVar23 = NEON_cnt(uVar21,1);
              uVar22 = NEON_uaddlv(uVar23,1);
              if (1 < (uint)CONCAT62((int6)((ulong)uVar23 >> 0x10),uVar22)) goto LAB_0011f6ac;
              if (1 < uVar13) {
                uVar13 = 1L << (-LZCOUNT(uVar13 - 1) & 0x3fU);
              }
            }
            if (uVar14 <= uVar13) {
              uVar14 = uVar13;
            }
            if (uVar14 < uVar21) goto LAB_0011f644;
          }
          uVar21 = param_1[1];
          if ((uVar21 & uVar21 - 1) == 0) {
            unaff_x28 = uVar21 - 1 & uVar10;
          }
          else {
            unaff_x28 = uVar10;
            if (uVar21 <= uVar10) {
              uVar14 = 0;
              if (uVar21 != 0) {
                uVar14 = uVar10 / uVar21;
              }
              unaff_x28 = uVar10 - uVar14 * uVar21;
            }
          }
        }
        lVar18 = *param_1;
        puVar15 = *(undefined8 **)(lVar18 + unaff_x28 * 8);
        if (puVar15 == (undefined8 *)0x0) {
          lVar16 = *plVar1;
          *plVar1 = (long)pIVar11;
          *(long *)pIVar11 = lVar16;
          *(long **)(lVar18 + unaff_x28 * 8) = plVar1;
          if (*(long *)pIVar11 != 0) {
            uVar10 = *(ulong *)(*(long *)pIVar11 + 8);
            if ((uVar21 & uVar21 - 1) == 0) {
              uVar10 = uVar10 & uVar21 - 1;
            }
            else if (uVar21 <= uVar10) {
              uVar14 = 0;
              if (uVar21 != 0) {
                uVar14 = uVar10 / uVar21;
              }
              uVar10 = uVar10 - uVar14 * uVar21;
            }
            puVar15 = (undefined8 *)(*param_1 + uVar10 * 8);
            goto LAB_0011f754;
          }
        }
        else {
          *(undefined8 *)pIVar11 = *puVar15;
LAB_0011f754:
          *puVar15 = pIVar11;
        }
        param_1[3] = param_1[3] + 1;
LAB_0011f764:
        if (local_78 != 0xffffffff) {
                    /* try { // try from 0011f780 to 0011f78b has its CatchHandler @ 0011f844 */
          (*(code *)(&PTR_FUN_0012f788)[local_78])(&local_c0,&local_a8);
        }
        if ((local_120 & 1) != 0) {
          operator_delete(local_110);
        }
      }
      facebook::jsi::Value::~Value((Value *)local_108);
      if (local_f8 != (undefined8 *)0x0) {
        (**(code **)*local_f8)();
      }
      facebook::jsi::Value::~Value(aVStack_f0);
      lVar20 = lVar20 + 1;
    } while (lVar20 != lVar9);
  }
  if (local_e0 != (undefined8 *)0x0) {
    (**(code **)*local_e0)();
  }
  if (local_d8 != (undefined8 *)0x0) {
    (**(code **)*local_d8)();
  }
  if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0011f900  FUN_0011f900 =====

void FUN_0011f900(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined1 uStack_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 != (void *)0x0) {
    if (*(char *)(param_1 + 2) != '\0') {
      if (*(uint *)((long)pvVar2 + 0x58) != 0xffffffff) {
                    /* try { // try from 0011f948 to 0011f953 has its CatchHandler @ 0011f998 */
        (*(code *)(&PTR_FUN_0012f788)[*(uint *)((long)pvVar2 + 0x58)])
                  (&uStack_29,(long)pvVar2 + 0x28);
      }
      *(undefined4 *)((long)pvVar2 + 0x58) = 0xffffffff;
      if ((*(byte *)((long)pvVar2 + 0x10) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + 0x20));
      }
    }
    operator_delete(pvVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011f99c  FUN_0011f99c =====

void FUN_0011f99c(long *param_1,ulong param_2)

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
      FUN_00119bd0();
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


// ===== 0011faf8  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>>::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__move_assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>,(std::__ndk1::__variant_detail::_Trait)1>>(std::__ndk1::__variant_detail::__move_assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>,(std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&,auto:2&&)#1}&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>&&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,
   0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >
   >::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__move_assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >,
   (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__move_assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value>
   >&&>(std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >
   >::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__move_assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >,
   (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__move_assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >&&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,0ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>>::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__move_assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>,(std::__ndk1::__variant_detail::_Trait)1>>(std::__ndk1::__variant_detail::__move_assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>,(std::__ndk1::__variant_detail::_Trait)1>&&)::_lambda(auto:1&,auto:2&&)_1_&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>&&>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  uint uVar1;
  long lVar2;
  _func_decltype_auto *p_Var3;
  dynamic *this;
  undefined1 uStack_39;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this = *(dynamic **)param_1;
  uVar1 = *(uint *)(this + 0x30);
  if (uVar1 != 0xffffffff) {
    if (uVar1 == 0) {
      if (*(long *)(lVar2 + 0x28) == local_38) {
        p_Var3 = (_func_decltype_auto *)
                 folly::dynamic::operator=((dynamic *)param_2,(dynamic *)param_3);
        return p_Var3;
      }
      goto LAB_0011fbb4;
    }
                    /* try { // try from 0011fb68 to 0011fb73 has its CatchHandler @ 0011fbb8 */
    (*(code *)(&PTR_FUN_0012f788)[uVar1])(&uStack_39,this);
  }
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  p_Var3 = (_func_decltype_auto *)folly::dynamic::dynamic(this,(dynamic *)param_3);
  *(undefined4 *)(this + 0x30) = 0;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return p_Var3;
  }
LAB_0011fbb4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011fbbc  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>>::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__move_assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>,(std::__ndk1::__variant_detail::_Trait)1>>(std::__ndk1::__variant_detail::__move_assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>,(std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&,auto:2&&)#1}&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>&&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,
   1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >
   >::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__move_assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >,
   (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__move_assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value>
   >&&>(std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >
   >::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__move_assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >,
   (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__move_assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >,
   (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, folly::dynamic,
   std::__ndk1::pair<facebook::jsi::Runtime*, facebook::jsi::Value> >&&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,1ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>>::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__move_assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>,(std::__ndk1::__variant_detail::_Trait)1>>(std::__ndk1::__variant_detail::__move_assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>,(std::__ndk1::__variant_detail::_Trait)1>&&)::_lambda(auto:1&,auto:2&&)_1_&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>&&>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  uint uVar1;
  long lVar2;
  _func_decltype_auto *p_Var3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 uStack_39;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puVar5 = *(undefined8 **)param_1;
  uVar1 = *(uint *)(puVar5 + 6);
  if (uVar1 != 0xffffffff) {
    if (uVar1 == 1) {
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      facebook::jsi::Value::~Value((Value *)(param_2 + 8));
      if (*(long *)(lVar2 + 0x28) == local_38) {
        p_Var3 = (_func_decltype_auto *)
                 facebook::jsi::Value::Value((Value *)(param_2 + 8),(Value *)(param_3 + 8));
        return p_Var3;
      }
      goto LAB_0011fc98;
    }
                    /* try { // try from 0011fc44 to 0011fc4f has its CatchHandler @ 0011fc9c */
    (*(code *)(&PTR_FUN_0012f788)[uVar1])(&uStack_39,puVar5);
  }
  uVar4 = *(undefined8 *)param_3;
  *(undefined4 *)(puVar5 + 6) = 0xffffffff;
  *puVar5 = uVar4;
  p_Var3 = (_func_decltype_auto *)
           facebook::jsi::Value::Value((Value *)(puVar5 + 1),(Value *)(param_3 + 8));
  *(undefined4 *)(puVar5 + 6) = 1;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return p_Var3;
  }
LAB_0011fc98:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011fca0  FUN_0011fca0 =====

long * FUN_0011fca0(long *param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  undefined1 uStack_69;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar8 = *(ulong *)(param_2 + 8);
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
    uVar8 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 0011fcec to 0011fcf3 has its CatchHandler @ 0011fe58 */
  uVar8 = FUN_00114710(&uStack_69,pbVar3,uVar8);
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar15 = NEON_cnt(uVar11,1);
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar12 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar8;
    }
    else {
      uVar13 = uVar8;
      if (uVar11 <= uVar8) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = uVar8 / uVar11;
        }
        uVar13 = uVar8 - uVar13 * uVar11;
      }
    }
    plVar9 = *(long **)(*param_1 + uVar13 * 8);
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)*plVar9;
      if (plVar9 != (long *)0x0) {
        pbVar3 = param_2 + 1;
        sVar1 = (ulong)(*param_2 >> 1);
        if ((*param_2 & 1) != 0) {
          pbVar3 = *(byte **)(param_2 + 0x10);
          sVar1 = *(size_t *)(param_2 + 8);
        }
        do {
          uVar10 = plVar9[1];
          if (uVar10 == uVar8) {
            bVar4 = *(byte *)(plVar9 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar9[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) break;
                uVar10 = 0;
                while (*(byte *)((long)plVar9 + uVar10 + 0x11) == pbVar3[uVar10]) {
                  uVar10 = uVar10 + 1;
                  if (bVar4 >> 1 == uVar10) goto LAB_0011fe20;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar9[4],pbVar3,plVar9[3]);
                if (iVar7 == 0) break;
              }
            }
          }
          else {
            if (uVar12 < 2) {
              uVar10 = uVar10 & uVar11 - 1;
            }
            else if (uVar11 <= uVar10) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar10 / uVar11;
              }
              uVar10 = uVar10 - uVar5 * uVar11;
            }
            if (uVar10 != uVar13) goto LAB_0011fe1c;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      goto LAB_0011fe20;
    }
  }
LAB_0011fe1c:
  plVar9 = (long *)0x0;
LAB_0011fe20:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011fe5c  FUN_0011fe5c =====

undefined1  [16] FUN_0011fe5c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  long *local_58;
  range_error arStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *param_1;
  dVar6 = (double)lVar3;
  if (9.223372036854776e+18 <= dVar6) {
    if ((dVar6 <= 9.223372036854776e+18) &&
       (dVar4 = nextafter(9.223372036854776e+18,0.0),
       (long)(dVar6 - dVar4) <= (long)((long)dVar4 ^ 0x7fffffffffffffffU))) goto LAB_0011ff14;
  }
  else if ((-9.223372036854776e+18 < dVar6) ||
          ((-9.223372036854776e+18 <= dVar6 &&
           (dVar4 = nextafter(-9.223372036854776e+18,0.0),
           -0x8000000000000000 - (long)dVar4 <= (long)(dVar6 - dVar4))))) {
LAB_0011ff14:
    if (lVar3 == (long)dVar6) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = dVar6;
        return auVar5;
      }
      goto LAB_0011ff98;
    }
  }
  local_58 = param_1;
  FUN_0012009c(arStack_50,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0011ff6c to 0011ff73 has its CatchHandler @ 0011ff74 */
    uVar2 = FUN_00120060(arStack_50);
                    /* catch() { ... } // from try @ 0011ff6c with catch @ 0011ff74 */
    std::range_error::~range_error(arStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00110404(uVar2);
    }
  }
LAB_0011ff98:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011ff9c  FUN_0011ff9c =====

void FUN_0011ff9c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = &PTR__exception_0012f7e0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0011ffd4 to 0011ffd7 has its CatchHandler @ 0011ffd8 */
    uVar2 = FUN_00120000();
                    /* catch() { ... } // from try @ 0011ffd4 with catch @ 0011ffd8 */
    std::exception::~exception((exception *)&local_30);
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00110404(uVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00120000  FUN_00120000 =====

void FUN_00120000(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar1 = &PTR__exception_0012f7e0;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,PTR_typeinfo_0012fb80,PTR__exception_0012fc50);
}


// ===== 00120030  FUN_00120030 =====

void FUN_00120030(exception *param_1)

{
  std::exception::~exception(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00120054  FUN_00120054 =====

char * FUN_00120054(void)

{
  return "bad expected access";
}


// ===== 00120060  FUN_00120060 =====

void FUN_00120060(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x18);
  FUN_001205b4(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_typeinfo_0012fb88,PTR__range_error_0012fc38);
}


// ===== 0012009c  FUN_0012009c =====

void FUN_0012009c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  void *pvVar2;
  undefined *puVar3;
  undefined2 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong local_68;
  ulong local_60;
  void *local_58;
  undefined2 uStack_4e;
  undefined2 local_4c [10];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puVar8 = (ulong *)*param_2;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_68 = 0;
                    /* try { // try from 001200cc to 001203bb has its CatchHandler @ 00120584 */
  __strlen_chk(PTR_zarray_0012fb90,7);
  puVar3 = PTR_data_0012fcb8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  reserve((ulong)&local_68);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_68,0x107ba3);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_68,(ulong)PTR_zarray_0012fb90);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_68,0x107e90);
  uVar9 = *puVar8;
  if ((long)uVar9 < 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back((char)&local_68);
  }
  uVar6 = -uVar9;
  if (-1 < (long)uVar9) {
    uVar6 = uVar9;
  }
  if (uVar6 < *(ulong *)puVar3) {
    uVar9 = 0;
LAB_00120568:
    if (uVar6 < *(ulong *)puVar3) {
      uVar9 = uVar9 + 1;
    }
    uVar5 = uVar6;
    uVar7 = uVar9;
    if (uVar9 < 3) goto LAB_00120398;
  }
  else {
    if (uVar6 < *(ulong *)(puVar3 + 8)) {
      uVar9 = 1;
      goto LAB_00120568;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x10)) {
      uVar9 = 2;
      goto LAB_00120568;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x18)) {
      uVar9 = 3;
      goto LAB_00120568;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x20)) {
      uVar9 = 4;
      goto LAB_00120568;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x28)) {
      uVar9 = 5;
      goto LAB_00120568;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x30)) {
      uVar9 = 6;
      goto LAB_00120568;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x38)) {
      uVar9 = 7;
      goto LAB_00120568;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x40)) {
      uVar9 = 8;
      goto LAB_00120568;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x48)) {
      uVar9 = 9;
      goto LAB_00120568;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x50)) {
      uVar9 = 10;
      goto LAB_00120568;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x58)) {
      uVar9 = 0xb;
      goto LAB_00120568;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x60)) {
      uVar9 = 0xc;
      goto LAB_00120568;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x68)) {
      uVar9 = 0xd;
      goto LAB_00120568;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x70)) {
      uVar9 = 0xe;
      goto LAB_00120568;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x78)) {
      uVar9 = 0xf;
      goto LAB_00120568;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x80)) {
      uVar9 = 0x10;
      goto LAB_00120568;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x88)) {
      uVar9 = 0x11;
      goto LAB_00120568;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x90)) {
      uVar9 = 0x12;
      goto LAB_00120568;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x98)) {
      uVar9 = 0x13;
      goto LAB_00120568;
    }
    uVar5 = uVar6;
    uVar7 = 0x14;
  }
  do {
    uVar9 = uVar7 - 2;
    uVar6 = uVar5 / 100;
    *(undefined2 *)((long)&uStack_4e + uVar7) =
         *(undefined2 *)(PTR_data_0012fcc0 + (uVar5 % 100) * 2);
    uVar5 = uVar6;
    uVar7 = uVar9;
  } while (2 < uVar9);
LAB_00120398:
  uVar4 = *(undefined2 *)(PTR_data_0012fcc0 + uVar6 * 2);
  if (uVar9 != 2) {
    local_4c[0] = CONCAT11(local_4c[0]._1_1_,
                           (char)((ushort)*(undefined2 *)(PTR_data_0012fcc0 + uVar6 * 2) >> 8));
    uVar4 = local_4c[0];
  }
  local_4c[0] = uVar4;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_68,(ulong)local_4c);
  uVar9 = local_68 >> 1 & 0x7f;
  pvVar2 = (void *)((ulong)&local_68 | 1);
  if ((local_68 & 1) != 0) {
    uVar9 = local_60;
    pvVar2 = local_58;
  }
                    /* try { // try from 001203d8 to 001203e7 has its CatchHandler @ 00120580 */
  folly::makeConversionError(param_1,0xd,pvVar2,(long)pvVar2 + uVar9);
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001205b4  FUN_001205b4 =====

void FUN_001205b4(runtime_error *param_1,runtime_error *param_2)

{
  runtime_error rVar1;
  
  std::runtime_error::runtime_error(param_1,param_2);
  rVar1 = param_2[0x10];
  *(undefined ***)param_1 = &PTR__range_error_0012f838;
  param_1[0x10] = rVar1;
  return;
}


// ===== 001205ec  FUN_001205ec =====

void FUN_001205ec(range_error *param_1)

{
  std::range_error::~range_error(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00120610  FUN_00120610 =====

void FUN_00120610(undefined8 *param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  range_error arStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  folly::makeConversionError(arStack_40,param_2,*(undefined8 *)*param_1,((undefined8 *)*param_1)[1])
  ;
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00120654 to 0012065b has its CatchHandler @ 0012065c */
    uVar2 = FUN_00120060(arStack_40);
                    /* catch() { ... } // from try @ 00120654 with catch @ 0012065c */
    std::range_error::~range_error(arStack_40);
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00110404(uVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00120684  FUN_00120684 =====

void FUN_00120684(undefined1 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_38;
  undefined1 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = &PTR__exception_0012f878;
  local_30 = param_1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 001206c0 to 001206c7 has its CatchHandler @ 001206c8 */
    uVar2 = FUN_001206f0(&local_38);
                    /* catch() { ... } // from try @ 001206c0 with catch @ 001206c8 */
    std::exception::~exception((exception *)&local_38);
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00110404(uVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001206f0  FUN_001206f0 =====

void FUN_001206f0(long param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)__cxa_allocate_exception(0x10);
  uVar1 = *(undefined1 *)(param_1 + 8);
  *puVar2 = &PTR__exception_0012f878;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar2,PTR_typeinfo_0012fb98,PTR__exception_0012fc50);
}


// ===== 00120730  FUN_00120730 =====

void FUN_00120730(exception *param_1)

{
  std::exception::~exception(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00120754  FUN_00120754 =====

void FUN_00120754(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *extraout_x8;
  uint uVar3;
  uint extraout_w9;
  range_error arStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  param_1 = (undefined8 *)*param_1;
  uVar3 = (uint)*(byte *)(param_1 + 2);
  if (*(byte *)(param_1 + 2) == 1) {
    folly::makeConversionError(arStack_40,10,*param_1,param_1[1]);
    if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_00120800;
                    /* try { // try from 001207a0 to 001207a7 has its CatchHandler @ 001207dc */
    FUN_00120060(arStack_40);
    param_1 = extraout_x8;
    uVar3 = extraout_w9;
  }
  if (uVar3 == 2) {
    if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_00120800;
    FUN_00120684(*(undefined1 *)param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    uVar2 = FUN_0011ff9c();
                    /* catch() { ... } // from try @ 001207a0 with catch @ 001207dc */
    std::range_error::~range_error(arStack_40);
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00110404(uVar2);
    }
  }
LAB_00120800:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00120804  FUN_00120804 =====

void FUN_00120804(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    if (*(char *)(param_1 + 2) != '\0') {
      if ((*(byte *)((long)pvVar1 + 0x28) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar1 + 0x38));
      }
      if ((*(byte *)((long)pvVar1 + 0x10) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar1 + 0x20));
      }
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00120860  FUN_00120860 =====

void FUN_00120860(long *param_1,ulong param_2)

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
      FUN_00119bd0();
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


// ===== 001209bc  FUN_001209bc =====

void FUN_001209bc(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined1 uStack_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)param_1[2];
  while (puVar2 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar2;
    if (*(uint *)(puVar2 + 0xb) != 0xffffffff) {
                    /* try { // try from 00120a20 to 00120a2b has its CatchHandler @ 00120a80 */
      (*(code *)(&PTR_FUN_0012f788)[*(uint *)(puVar2 + 0xb)])(&uStack_49,puVar2 + 5);
    }
    *(undefined4 *)(puVar2 + 0xb) = 0xffffffff;
    if ((*(byte *)(puVar2 + 2) & 1) != 0) {
      operator_delete((void *)puVar2[4]);
    }
    operator_delete(puVar2);
    puVar2 = (undefined8 *)pvVar3;
  }
  pvVar3 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00120a84  FUN_00120a84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00120a84(ContextContainer *param_1,ulong param_2,ContextContainer *param_3,
                 ContextContainer *param_4)

{
  ContextContainer *pCVar1;
  ContextContainer CVar2;
  ContextContainer CVar3;
  ContextContainer *pCVar4;
  ContextContainer *pCVar5;
  undefined1 auVar6 [16];
  byte *pbVar7;
  undefined5 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 uVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float extraout_w0;
  float extraout_w0_00;
  uint uVar17;
  ulong uVar18;
  ContextContainer *pCVar19;
  void *pvVar20;
  int extraout_var;
  int extraout_var_00;
  uint extraout_w8;
  uint uVar21;
  ulong extraout_x9;
  ulong extraout_x9_00;
  uint uVar22;
  int iVar23;
  undefined8 *puVar24;
  ulong uVar25;
  int iVar26;
  long extraout_x16;
  long extraout_x16_00;
  long lVar27;
  int iVar28;
  ContextContainer *pCVar29;
  long lVar30;
  ulong uVar31;
  RawValue *pRVar32;
  long *plVar33;
  ContextContainer **ppCVar34;
  ContextContainer *pCVar35;
  ContextContainer *pCVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  double dVar41;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  ContextContainer *pCVar42;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar40;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined8 uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  int iVar58;
  ulong uVar59;
  float fVar60;
  undefined8 uVar61;
  ulong uVar62;
  undefined8 in_d4;
  undefined7 uVar63;
  int iVar64;
  int iVar65;
  ulong uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  float fVar71;
  ContextContainer *pCVar72;
  float fVar73;
  float fVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 *local_2a0;
  long local_288;
  float local_280;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  uint local_254;
  uint uStack_250;
  uint local_24c;
  uint uStack_248;
  undefined4 local_244;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined4 local_230;
  byte local_228 [8];
  ContextContainer *local_220;
  ContextContainer *local_218;
  byte *local_210 [6];
  ContextContainer *local_1e0;
  ContextContainer *pCStack_1d8;
  long *local_1d0;
  undefined8 local_1c8;
  ContextContainer *pCStack_1c0;
  ulong local_1b8;
  undefined8 uStack_1b0;
  ContextContainer *local_1a8;
  ulong uStack_1a0;
  int local_198;
  undefined4 uStack_194;
  ContextContainer *local_190;
  ContextContainer *pCStack_188;
  long *local_180;
  undefined8 uStack_178;
  ContextContainer *local_170;
  ulong uStack_168;
  undefined8 uStack_160;
  ContextContainer *pCStack_158;
  ulong local_150;
  undefined8 uStack_148;
  byte local_140;
  undefined1 uStack_13f;
  undefined1 uStack_13e;
  undefined2 uStack_13d;
  undefined2 uStack_13b;
  undefined1 uStack_139;
  ContextContainer *pCStack_138;
  long *local_130;
  int local_128;
  undefined4 uStack_124;
  ContextContainer *pCStack_120;
  ulong local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined8 local_f0;
  ContextContainer *pCStack_e8;
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined8 uStack_d8;
  ContextContainer *local_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  long local_98;
  undefined3 uVar66;
  
  lVar27 = tpidr_el0;
  local_98 = *(long *)(lVar27 + 0x28);
  pCVar29 = (ContextContainer *)(param_2 & 0xffffffff);
  iVar28 = (int)param_2;
  pCVar72 = (ContextContainer *)&local_1e0;
  uVar15 = facebook::react::getDefaultColorSpace();
  uVar18 = facebook::react::ReactNativeFeatureFlags::enableNativeCSSParsing();
  iVar58 = *(int *)((RawValue *)param_3 + 0x30);
  if ((uVar18 & 1) == 0) {
LAB_00120bb4:
    if (iVar58 == 1) {
      pRVar32 = (RawValue *)param_3 + 8;
      if (*(int *)pRVar32 != 3) {
        if (*(int *)pRVar32 == 7) {
          plVar33 = *(long **)param_3;
                    /* try { // try from 00120c24 to 00120c93 has its CatchHandler @ 001242b4 */
          uVar53 = (**(code **)(*plVar33 + 0x88))
                             (plVar33,*(undefined8 *)((RawValue *)param_3 + 0x10));
          local_140 = (byte)uVar53;
          uStack_13f = (undefined1)((ulong)uVar53 >> 8);
          uStack_13e = (undefined1)((ulong)uVar53 >> 0x10);
          uStack_13d = (undefined2)((ulong)uVar53 >> 0x18);
          uStack_13b = (undefined2)((ulong)uVar53 >> 0x28);
          uStack_139 = (undefined1)((ulong)uVar53 >> 0x38);
          uVar18 = (**(code **)(*plVar33 + 0x1e0))(plVar33,&local_140);
          if ((uVar18 & 1) == 0) {
            bVar14 = false;
          }
          else {
            local_190 = (ContextContainer *)
                        (**(code **)(*plVar33 + 0x88))
                                  (plVar33,CONCAT17(uStack_139,
                                                    CONCAT25(uStack_13b,
                                                             CONCAT23(uStack_13d,
                                                                      CONCAT12(uStack_13e,
                                                                               CONCAT11(uStack_13f,
                                                                                        local_140)))
                                                            )));
            lVar30 = (**(code **)(*plVar33 + 0x240))(plVar33,&local_190);
            if (lVar30 == 0) {
              bVar14 = true;
            }
            else {
              (**(code **)(*plVar33 + 0x260))(&local_f0,plVar33,&local_190,0);
              bVar14 = (int)local_f0 == 3;
              facebook::jsi::Value::~Value((Value *)&local_f0);
            }
            if (local_190 != (ContextContainer *)0x0) {
              (*(code *)**(undefined8 **)local_190)();
            }
          }
          puVar24 = (undefined8 *)
                    CONCAT17(uStack_139,
                             CONCAT25(uStack_13b,
                                      CONCAT23(uStack_13d,
                                               CONCAT12(uStack_13e,CONCAT11(uStack_13f,local_140))))
                            );
          if (puVar24 != (undefined8 *)0x0) {
            (**(code **)*puVar24)();
          }
          iVar58 = *(int *)((RawValue *)param_3 + 0x30);
          if (bVar14) {
            if (iVar58 == 1) {
              plVar33 = *(long **)param_3;
              local_2a0 = (undefined8 *)
                          (**(code **)(*plVar33 + 0x88))
                                    (plVar33,*(undefined8 *)((RawValue *)param_3 + 0x10));
                    /* try { // try from 00121854 to 00121867 has its CatchHandler @ 00124230 */
              uVar53 = (**(code **)(*plVar33 + 0x88))(plVar33,local_2a0);
              local_140 = (byte)uVar53;
              uStack_13f = (undefined1)((ulong)uVar53 >> 8);
              uStack_13e = (undefined1)((ulong)uVar53 >> 0x10);
              uStack_13d = (undefined2)((ulong)uVar53 >> 0x18);
              uStack_13b = (undefined2)((ulong)uVar53 >> 0x28);
              uStack_139 = (undefined1)((ulong)uVar53 >> 0x38);
                    /* try { // try from 00121874 to 0012187f has its CatchHandler @ 0012422c */
              uVar18 = (**(code **)(*plVar33 + 0x240))(plVar33,&local_140);
              if (uVar18 == 0) {
                pCVar42 = (ContextContainer *)0x0;
                pCVar19 = (ContextContainer *)0x0;
              }
              else {
                if (uVar18 >> 0x3e != 0) goto LAB_00124218;
                    /* try { // try from 00121898 to 0012189b has its CatchHandler @ 00124240 */
                param_3 = (ContextContainer *)operator_new(uVar18 << 2);
                pCVar72 = param_3 + uVar18 * 4;
                uVar31 = 0;
                pCVar29 = param_3;
                pCVar42 = param_3;
                do {
                    /* try { // try from 001218dc to 001218ef has its CatchHandler @ 001242c4 */
                  (**(code **)(*plVar33 + 0x260))(&local_f0,plVar33,&local_140,uVar31);
                    /* try { // try from 001218f0 to 0012194b has its CatchHandler @ 001242d0 */
                  dVar41 = (double)facebook::jsi::Value::asNumber();
                  if (param_3 < pCVar72) {
                    *(float *)param_3 = (float)dVar41;
                    pCVar35 = pCVar29;
                    pCVar19 = param_3;
                  }
                  else {
                    lVar30 = (long)param_3 - (long)pCVar29;
                    uVar59 = (lVar30 >> 2) + 1;
                    local_288 = lVar27;
                    if (uVar59 >> 0x3e != 0) goto LAB_00124104;
                    uVar62 = (long)pCVar72 - (long)pCVar29 >> 1;
                    if (uVar62 <= uVar59) {
                      uVar62 = uVar59;
                    }
                    if (0x7ffffffffffffffb < (ulong)((long)pCVar72 - (long)pCVar29)) {
                      uVar62 = 0x3fffffffffffffff;
                    }
                    if (uVar62 == 0) {
                      pvVar20 = (void *)0x0;
                    }
                    else {
                      if (uVar62 >> 0x3e != 0) goto LAB_0012411c;
                      pvVar20 = operator_new(uVar62 << 2);
                    }
                    pCVar19 = (ContextContainer *)((long)pvVar20 + (lVar30 >> 2) * 4);
                    *(float *)pCVar19 = (float)dVar41;
                    pCVar35 = pCVar19;
                    if ((long)param_3 - (long)pCVar29 != 0) {
                      uVar59 = ((long)param_3 - (long)pCVar29) - 4;
                      if (0xab < uVar59) {
                        pCVar72 = param_3 + -4;
                        uVar25 = (long)pvVar20 + lVar30 + -4;
                        uVar67 = (long)pCVar72 - (long)pCVar29 & 0xfffffffffffffffc;
                        if (((uVar25 - uVar67 <= uVar25) && (pCVar72 + -uVar67 <= pCVar72)) &&
                           ((ContextContainer *)0x1f < param_3 + (-lVar30 - (long)pvVar20))) {
                          uVar59 = (uVar59 >> 2) + 1;
                          uVar25 = uVar59 & 0x7ffffffffffffff8;
                          pCVar35 = pCVar19 + uVar25 * -4;
                          puVar24 = (undefined8 *)((long)pvVar20 + lVar30 + -0x10);
                          pCVar72 = param_3 + -0x10;
                          uVar67 = uVar25;
                          do {
                            pCVar42 = *(ContextContainer **)(pCVar72 + -0x10);
                            pCVar36 = pCVar72 + -8;
                            pCVar1 = *(ContextContainer **)pCVar72;
                            pCVar4 = *(ContextContainer **)(pCVar72 + 8);
                            uVar67 = uVar67 - 8;
                            pCVar72 = pCVar72 + -0x20;
                            puVar24[-1] = *(ContextContainer **)pCVar36;
                            puVar24[-2] = pCVar42;
                            puVar24[1] = pCVar4;
                            *puVar24 = pCVar1;
                            puVar24 = puVar24 + -4;
                          } while (uVar67 != 0);
                          param_3 = param_3 + uVar25 * -4;
                          if (uVar59 == uVar25) goto LAB_00121988;
                        }
                      }
                      do {
                        param_3 = param_3 + -4;
                        pCVar35 = pCVar35 + -4;
                        *(uint *)pCVar35 = *(uint *)param_3;
                      } while (param_3 != pCVar29);
                    }
LAB_00121988:
                    pCVar72 = (ContextContainer *)((long)pvVar20 + uVar62 * 4);
                    pCVar42 = pCVar35;
                    if (pCVar29 != (ContextContainer *)0x0) {
                      operator_delete(pCVar29);
                    }
                  }
                  param_3 = pCVar19 + 4;
                  facebook::jsi::Value::~Value((Value *)&local_f0);
                  uVar31 = uVar31 + 1;
                  pCVar29 = pCVar35;
                  pCVar19 = param_3;
                } while (uVar31 != uVar18);
              }
              puVar24 = (undefined8 *)
                        CONCAT17(uStack_139,
                                 CONCAT25(uStack_13b,
                                          CONCAT23(uStack_13d,
                                                   CONCAT12(uStack_13e,
                                                            CONCAT11(uStack_13f,local_140)))));
              if (puVar24 != (undefined8 *)0x0) {
                (**(code **)*puVar24)();
              }
              if (local_2a0 != (undefined8 *)0x0) {
                (**(code **)*local_2a0)();
              }
LAB_00121a78:
              uVar18 = (long)pCVar19 - (long)pCVar42;
              if (((pCVar19 == pCVar42) || (uVar18 < 5)) || (uVar18 == 8)) goto LAB_001240c4;
              uStack_248 = 0x3f800000;
              local_254 = *(uint *)pCVar42;
              uStack_250 = *(uint *)(pCVar42 + 4);
              local_24c = *(uint *)(pCVar42 + 8);
              if (uVar18 == 0x10) {
                uStack_248 = *(uint *)(pCVar42 + 0xc);
              }
                    /* try { // try from 00121ac0 to 00121ac7 has its CatchHandler @ 00124260 */
              local_244 = uVar15;
              uVar17 = facebook::react::colorFromComponents(&local_254);
              *(uint *)param_4 = uVar17;
              operator_delete(pCVar42);
              goto LAB_00121734;
            }
            if (iVar58 == 0) goto LAB_001211f0;
          }
          else {
            if (iVar58 == 1) goto LAB_00121238;
            if (iVar58 == 0) {
              iVar58 = *(int *)param_3;
              goto LAB_0012122c;
            }
          }
        }
        else {
LAB_00121238:
          uVar18 = FUN_0011eb40(*(undefined8 *)param_3,pRVar32);
          if ((uVar18 & 1) == 0) goto LAB_00121720;
          if (*(int *)((RawValue *)param_3 + 0x30) == 1) {
            FUN_0011f268(&local_f0,*(undefined8 *)param_3,pRVar32);
            goto LAB_001214d4;
          }
          if (*(int *)((RawValue *)param_3 + 0x30) == 0) goto LAB_00121258;
        }
LAB_00124090:
        if (*(long *)(lVar27 + 0x28) == local_98) {
                    /* WARNING: Subroutine does not return */
          FUN_0011a6d0();
        }
        goto LAB_00124368;
      }
      dVar41 = (double)facebook::jsi::Value::asNumber();
      uVar18 = (ulong)dVar41;
LAB_00120e80:
      auVar43._8_8_ = uVar18;
      auVar43._0_8_ = uVar18;
      auVar43 = NEON_ushl(auVar43,_DAT_001088c0,8);
      auVar55[0] = auVar43[0];
      auVar55._1_7_ = 0;
      auVar55[8] = auVar43[8];
      auVar55._9_7_ = 0;
      auVar43 = NEON_scvtf(auVar55,8);
      auVar54._0_8_ = uVar18 & 0xff;
      auVar54[8] = (undefined1)(uVar18 >> 0x18);
      auVar54._9_7_ = 0;
      auVar55 = NEON_scvtf(auVar54,8);
      auVar44._0_8_ = CONCAT44((float)auVar43._8_8_ / 255.0,(float)auVar43._0_8_ / 255.0);
      auVar44._8_4_ = (float)auVar55._0_8_ / 255.0;
      auVar44._12_4_ = (float)auVar55._8_8_ / 255.0;
      uStack_238 = auVar44._8_8_;
      local_240 = auVar44._0_8_;
      local_230 = uVar15;
      uVar17 = facebook::react::colorFromComponents(&local_240);
    }
    else {
      if (iVar58 != 0) goto LAB_00124090;
      iVar58 = *(int *)param_3;
      if (iVar58 - 3U < 2) {
        if (iVar58 != 3) {
          if (iVar58 != 4) {
            local_1c8 = (byte *)CONCAT44(local_1c8._4_4_,(int)local_1c8);
            if (*(long *)(lVar27 + 0x28) == local_98) {
                    /* WARNING: Subroutine does not return */
              FUN_00119c04("int/double/bool/string");
            }
            goto LAB_00124368;
          }
          uVar18 = *(ulong *)((RawValue *)param_3 + 8);
          goto LAB_00120e80;
        }
        param_3 = (ContextContainer *)((RawValue *)param_3 + 8);
        pCVar72 = *(ContextContainer **)param_3;
        if (9.223372036854776e+18 <= (double)pCVar72) {
          if (((double)pCVar72 <= 9.223372036854776e+18) &&
             (dVar41 = nextafter(9.223372036854776e+18,0.0),
             (long)((double)pCVar72 - dVar41) <= (long)((long)dVar41 ^ 0x7fffffffffffffffU)))
          goto LAB_00120e6c;
        }
        else if ((-9.223372036854776e+18 < (double)pCVar72) ||
                ((-9.223372036854776e+18 <= (double)pCVar72 &&
                 (dVar41 = nextafter(-9.223372036854776e+18,0.0),
                 -0x8000000000000000 - (long)dVar41 <= (long)((double)pCVar72 - dVar41))))) {
LAB_00120e6c:
          if ((double)pCVar72 == (double)(long)(double)pCVar72) {
            uVar18 = (ulong)(double)pCVar72;
            goto LAB_00120e80;
          }
        }
LAB_001240dc:
        local_140 = (byte)param_3;
        uStack_13f = (undefined1)((ulong)param_3 >> 8);
        uStack_13e = (undefined1)((ulong)param_3 >> 0x10);
        uStack_13d = (undefined2)((ulong)param_3 >> 0x18);
        uStack_13b = (undefined2)((ulong)param_3 >> 0x28);
        uStack_139 = (undefined1)((ulong)param_3 >> 0x38);
        FUN_00129608(&local_f0,&local_140);
        local_1c8 = (byte *)CONCAT44(local_1c8._4_4_,(int)local_1c8);
        if (*(long *)(lVar27 + 0x28) == local_98) {
                    /* try { // try from 001240fc to 00124103 has its CatchHandler @ 001242a4 */
          FUN_00120060(&local_f0);
LAB_00124104:
          local_1c8 = (byte *)CONCAT44(local_1c8._4_4_,(int)local_1c8);
          if (*(long *)(local_288 + 0x28) == local_98) {
                    /* try { // try from 00124118 to 00124133 has its CatchHandler @ 001242b8 */
            FUN_001297ec();
LAB_0012411c:
            local_1c8 = (byte *)CONCAT44(local_1c8._4_4_,(int)local_1c8);
            if (*(long *)(local_288 + 0x28) == local_98) {
                    /* WARNING: Subroutine does not return */
              FUN_00119bd0();
            }
          }
        }
        goto LAB_00124368;
      }
      if (iVar58 == 1) {
        if ((*(int **)((RawValue *)param_3 + 8) == *(int **)((RawValue *)param_3 + 0x10)) ||
           (**(int **)((RawValue *)param_3 + 8) - 3U < 2)) {
LAB_001211f0:
          uVar18 = folly::dynamic::size();
          if (uVar18 == 0) {
            pCVar35 = (ContextContainer *)0x0;
            pCVar19 = (ContextContainer *)0x0;
          }
          else {
            if (uVar18 >> 0x3e != 0) {
              if (*(long *)(lVar27 + 0x28) != local_98) goto LAB_00124368;
              FUN_001297ec();
LAB_00124218:
              if (*(long *)(lVar27 + 0x28) == local_98) {
                    /* try { // try from 00124228 to 0012422b has its CatchHandler @ 00124240 */
                uVar53 = FUN_001297ec();
                    /* catch() { ... } // from try @ 00121874 with catch @ 0012422c */
                    /* catch() { ... } // from try @ 00121898 with catch @ 00124240
                       catch() { ... } // from try @ 00124228 with catch @ 00124240 */
                puVar24 = (undefined8 *)
                          CONCAT17(uStack_139,
                                   CONCAT25(uStack_13b,
                                            CONCAT23(uStack_13d,
                                                     CONCAT12(uStack_13e,
                                                              CONCAT11(uStack_13f,local_140)))));
                if (puVar24 != (undefined8 *)0x0) {
                  (**(code **)*puVar24)();
                }
                if (local_2a0 != (undefined8 *)0x0) {
                  (**(code **)*local_2a0)();
                }
                if (*(long *)(lVar27 + 0x28) == local_98) {
                    /* WARNING: Subroutine does not return */
                  FUN_00110404(uVar53);
                }
              }
              goto LAB_00124368;
            }
            pCVar19 = (ContextContainer *)operator_new(uVar18 * 4);
            pCVar35 = pCVar19 + uVar18 * 4;
          }
          if (*(int *)param_3 != 1) {
            if (*(long *)(lVar27 + 0x28) == local_98) {
                    /* try { // try from 00124164 to 00124173 has its CatchHandler @ 0012425c */
                    /* WARNING: Subroutine does not return */
              FUN_00119c04(*(undefined8 *)PTR_name_0012fc70);
            }
            goto LAB_00124368;
          }
          param_1 = *(ContextContainer **)((RawValue *)param_3 + 8);
          param_3 = *(ContextContainer **)((RawValue *)param_3 + 0x10);
          if (param_1 != param_3) {
            ppCVar34 = (ContextContainer **)0x3fffffffffffffff;
            pCVar72 = pCVar19;
            pCVar36 = param_4;
            do {
              iVar28 = (int)pCVar29;
              uVar17 = *(uint *)param_1;
              if ((int)uVar17 < 4) {
                if (uVar17 == 2) {
                  pCVar42 = (ContextContainer *)NEON_ucvtf((ulong)(byte)param_1[8]);
                }
                else {
                  if (uVar17 != 3) {
LAB_001240a4:
                    local_1c8 = (byte *)CONCAT44(local_1c8._4_4_,(int)local_1c8);
                    if (*(long *)(lVar27 + 0x28) == local_98) {
                    /* try { // try from 001240b8 to 001240c3 has its CatchHandler @ 0012433c */
                    /* WARNING: Subroutine does not return */
                      FUN_00119c04("int/double/bool/string");
                    }
                    goto LAB_00124368;
                  }
                  pCVar42 = *(ContextContainer **)(param_1 + 8);
                }
              }
              else if (uVar17 == 6) {
                pCStack_188 = (ContextContainer *)(ulong)((byte)param_1[8] >> 1);
                local_190 = param_1 + 9;
                if (((byte)param_1[8] & 1) != 0) {
                  pCStack_188 = *(ContextContainer **)(param_1 + 0x10);
                  local_190 = *(ContextContainer **)(param_1 + 0x18);
                }
                pCStack_188 = local_190 + (long)pCStack_188;
                local_140 = (byte)local_190;
                uStack_13f = (undefined1)((ulong)local_190 >> 8);
                uStack_13e = (undefined1)((ulong)local_190 >> 0x10);
                uStack_13d = (undefined2)((ulong)local_190 >> 0x18);
                uStack_13b = (undefined2)((ulong)local_190 >> 0x28);
                uStack_139 = (undefined1)((ulong)local_190 >> 0x38);
                pCStack_138 = pCStack_188;
                auVar43 = folly::detail::str_to_floating<double>(&local_140);
                pCVar42 = auVar43._8_8_;
                if ((auVar43._0_8_ & 0xff) != 1) {
                  local_140 = (byte)&local_190;
                  uStack_13f = (undefined1)((ulong)&local_190 >> 8);
                  uStack_13e = (undefined1)((ulong)&local_190 >> 0x10);
                  uStack_13d = (undefined2)((ulong)&local_190 >> 0x18);
                  uStack_13b = (undefined2)((ulong)&local_190 >> 0x28);
                  uStack_139 = (undefined1)((ulong)&local_190 >> 0x38);
                  if (*(long *)(lVar27 + 0x28) != local_98) goto LAB_00124368;
                    /* try { // try from 001226b8 to 001226c3 has its CatchHandler @ 00124340 */
                  FUN_00120610(&local_140,auVar43._0_8_ >> 8);
                  lVar27 = extraout_x16;
                  uVar17 = extraout_w8;
                  goto LAB_001226c4;
                }
                uVar8 = CONCAT23(uStack_13d,CONCAT12(uStack_13e,CONCAT11(uStack_13f,local_140)));
                pCVar1 = (ContextContainer *)CONCAT17(uStack_139,CONCAT25(uStack_13b,uVar8));
                local_e0 = 1;
                local_f0._0_4_ = (int)uVar8;
                local_f0._4_4_ = (undefined4)((ulong)pCVar1 >> 0x20);
                pCStack_e8 = pCStack_138;
                for (; pCStack_138 != pCVar1; pCVar1 = pCVar1 + 1) {
                  if (((byte)*pCVar1 != 0x20) && (4 < (byte)*pCVar1 - 9)) {
                    local_1e0 = (ContextContainer *)&local_f0;
                    local_1c8 = (byte *)CONCAT44(local_1c8._4_4_,(int)local_1c8);
                    if (*(long *)(lVar27 + 0x28) != local_98) goto LAB_00124368;
                    /* try { // try from 00123b28 to 00123b2f has its CatchHandler @ 00124340 */
                    FUN_00120754(&local_1e0);
                    lVar27 = extraout_x16_00;
                    goto LAB_00123b30;
                  }
                }
              }
              else {
                if (uVar17 != 4) goto LAB_001240a4;
                    /* try { // try from 001212ec to 001213a7 has its CatchHandler @ 00124334 */
                pCVar42 = (ContextContainer *)FUN_0011fe5c(param_1 + 8);
              }
              if (pCVar19 < pCVar35) {
                *(float *)pCVar19 = (float)(double)pCVar42;
                pCVar42 = pCVar72;
                pCVar36 = pCVar19;
              }
              else {
                lVar30 = (long)pCVar19 - (long)pCVar72;
                uVar18 = (lVar30 >> 2) + 1;
                if (uVar18 >> 0x3e != 0) {
                  local_1c8 = (byte *)CONCAT44(local_1c8._4_4_,(int)local_1c8);
                  if (*(long *)(lVar27 + 0x28) == local_98) {
                    /* try { // try from 00124074 to 0012408f has its CatchHandler @ 0012433c */
                    FUN_001297ec();
LAB_00124078:
                    local_1c8 = (byte *)CONCAT44(local_1c8._4_4_,(int)local_1c8);
                    if (*(long *)(lVar27 + 0x28) == local_98) {
                    /* WARNING: Subroutine does not return */
                      FUN_00119bd0();
                    }
                  }
                  goto LAB_00124368;
                }
                uVar31 = (long)pCVar35 - (long)pCVar72 >> 1;
                if (uVar31 <= uVar18) {
                  uVar31 = uVar18;
                }
                if (0x7ffffffffffffffb < (ulong)((long)pCVar35 - (long)pCVar72)) {
                  uVar31 = 0x3fffffffffffffff;
                }
                if (uVar31 == 0) {
                  pvVar20 = (void *)0x0;
                }
                else {
                  if (uVar31 >> 0x3e != 0) goto LAB_00124078;
                  pvVar20 = operator_new(uVar31 << 2);
                }
                pCVar36 = (ContextContainer *)((long)pvVar20 + (lVar30 >> 2) * 4);
                *(float *)pCVar36 = (float)(double)pCVar42;
                pCVar29 = pCVar36;
                if ((long)pCVar19 - (long)pCVar72 != 0) {
                  uVar18 = ((long)pCVar19 - (long)pCVar72) - 4;
                  if (0xab < uVar18) {
                    pCVar42 = pCVar19 + -4;
                    uVar62 = (long)pvVar20 + lVar30 + -4;
                    uVar59 = (long)pCVar42 - (long)pCVar72 & 0xfffffffffffffffc;
                    if (((uVar62 - uVar59 <= uVar62) && (pCVar42 + -uVar59 <= pCVar42)) &&
                       ((ContextContainer *)0x1f < pCVar19 + (-lVar30 - (long)pvVar20))) {
                      uVar18 = (uVar18 >> 2) + 1;
                      uVar62 = uVar18 & 0x7ffffffffffffff8;
                      pCVar29 = pCVar36 + uVar62 * -4;
                      puVar24 = (undefined8 *)((long)pvVar20 + lVar30 + -0x10);
                      pCVar42 = pCVar19 + -0x10;
                      uVar59 = uVar62;
                      do {
                        pCVar4 = *(ContextContainer **)(pCVar42 + -0x10);
                        pCVar5 = pCVar42 + -8;
                        pCVar35 = *(ContextContainer **)pCVar42;
                        pCVar1 = *(ContextContainer **)(pCVar42 + 8);
                        uVar59 = uVar59 - 8;
                        pCVar42 = pCVar42 + -0x20;
                        puVar24[-1] = *(ContextContainer **)pCVar5;
                        puVar24[-2] = pCVar4;
                        puVar24[1] = pCVar1;
                        *puVar24 = pCVar35;
                        puVar24 = puVar24 + -4;
                      } while (uVar59 != 0);
                      pCVar19 = pCVar19 + uVar62 * -4;
                      if (uVar18 == uVar62) goto LAB_0012140c;
                    }
                  }
                  do {
                    pCVar19 = pCVar19 + -4;
                    pCVar29 = pCVar29 + -4;
                    *(uint *)pCVar29 = *(uint *)pCVar19;
                  } while (pCVar19 != pCVar72);
                }
LAB_0012140c:
                pCVar35 = (ContextContainer *)((long)pvVar20 + uVar31 * 4);
                pCVar42 = pCVar29;
                if (pCVar72 != (ContextContainer *)0x0) {
                  operator_delete(pCVar72);
                }
              }
              pCVar19 = pCVar36 + 4;
              param_1 = param_1 + 0x30;
              pCVar72 = pCVar42;
              pCVar36 = pCVar19;
            } while (param_1 != param_3);
            goto LAB_00121a78;
          }
LAB_001240c4:
          local_1c8 = (byte *)CONCAT44(local_1c8._4_4_,(int)local_1c8);
          if (*(long *)(lVar27 + 0x28) != local_98) goto LAB_00124368;
                    /* try { // try from 001240d8 to 001240db has its CatchHandler @ 001242bc */
          FUN_00129800();
          local_288 = lVar27;
          goto LAB_001240dc;
        }
      }
      else {
LAB_0012122c:
        if (iVar58 == 5) {
LAB_00121258:
          FUN_0011ed04(&local_f0,param_3);
LAB_001214d4:
          local_140 = 10;
          uStack_13f = 0x73;
          uStack_13e = 0x70;
          uStack_13d = 0x6361;
          uStack_13b = 0x65;
          lVar30 = FUN_00129814(&local_f0,&local_140);
          if ((local_140 & 1) != 0) {
            operator_delete(local_130);
          }
          if (lVar30 != 0) {
            local_140 = 2;
            uStack_13f = 0x72;
            uStack_13e = 0;
            lVar30 = FUN_00129814(&local_f0,&local_140);
            if (lVar30 == 0) {
              if (*(long *)(lVar27 + 0x28) == local_98) {
                    /* try { // try from 00124184 to 0012418f has its CatchHandler @ 00124284 */
                    /* WARNING: Subroutine does not return */
                FUN_00114504("unordered_map::at: key not found");
              }
              goto LAB_00124368;
            }
                    /* try { // try from 00121530 to 00121537 has its CatchHandler @ 00124284 */
            uVar15 = FUN_0011e924(lVar30 + 0x28);
            if ((local_140 & 1) != 0) {
              operator_delete(local_130);
            }
            local_140 = 2;
            uStack_13f = 0x67;
            uStack_13e = 0;
            lVar30 = FUN_00129814(&local_f0,&local_140);
            if (lVar30 == 0) {
              if (*(long *)(lVar27 + 0x28) == local_98) {
                    /* try { // try from 001241a0 to 001241ab has its CatchHandler @ 00124280 */
                    /* WARNING: Subroutine does not return */
                FUN_00114504("unordered_map::at: key not found");
              }
              goto LAB_00124368;
            }
                    /* try { // try from 00121568 to 0012156f has its CatchHandler @ 00124280 */
            uVar37 = FUN_0011e924(lVar30 + 0x28);
            if ((local_140 & 1) != 0) {
              operator_delete(local_130);
            }
            local_140 = 2;
            uStack_13f = 0x62;
            uStack_13e = 0;
            lVar30 = FUN_00129814(&local_f0,&local_140);
            if (lVar30 == 0) {
              if (*(long *)(lVar27 + 0x28) == local_98) {
                    /* try { // try from 001241bc to 001241c7 has its CatchHandler @ 0012427c */
                    /* WARNING: Subroutine does not return */
                FUN_00114504("unordered_map::at: key not found");
              }
              goto LAB_00124368;
            }
                    /* try { // try from 001215a0 to 001215a7 has its CatchHandler @ 0012427c */
            uVar38 = FUN_0011e924(lVar30 + 0x28);
            if ((local_140 & 1) != 0) {
              operator_delete(local_130);
            }
            local_140 = 2;
            uStack_13f = 0x61;
            uStack_13e = 0;
            lVar30 = FUN_00129814(&local_f0,&local_140);
            if (lVar30 == 0) {
              if (*(long *)(lVar27 + 0x28) == local_98) {
                    /* try { // try from 001241d8 to 001241e3 has its CatchHandler @ 00124278 */
                    /* WARNING: Subroutine does not return */
                FUN_00114504("unordered_map::at: key not found");
              }
              goto LAB_00124368;
            }
                    /* try { // try from 001215d8 to 001215df has its CatchHandler @ 00124278 */
            uVar39 = FUN_0011e924(lVar30 + 0x28);
            if ((local_140 & 1) != 0) {
              operator_delete(local_130);
            }
                    /* try { // try from 001215f4 to 001215f7 has its CatchHandler @ 00124254 */
            uVar16 = facebook::react::getDefaultColorSpace();
            local_190 = (ContextContainer *)CONCAT17(local_190._7_1_,0x65636170730a);
            lVar30 = FUN_00129814(&local_f0,&local_190);
            if (lVar30 == 0) {
              if (*(long *)(lVar27 + 0x28) == local_98) {
                    /* try { // try from 001241f4 to 001241ff has its CatchHandler @ 00124264 */
                    /* WARNING: Subroutine does not return */
                FUN_00114504("unordered_map::at: key not found");
              }
              goto LAB_00124368;
            }
                    /* try { // try from 00121628 to 00121633 has its CatchHandler @ 00124264 */
            FUN_0011a704(&local_140,lVar30 + 0x28);
            if (((ulong)local_190 & 1) != 0) {
              operator_delete(local_180);
            }
            pCVar72 = (ContextContainer *)(ulong)(local_140 >> 1);
            if ((local_140 & 1) != 0) {
              pCVar72 = pCStack_138;
            }
            if (pCVar72 == (ContextContainer *)0x4) {
              plVar33 = (long *)((ulong)&local_140 | 1);
              if ((local_140 & 1) != 0) {
                plVar33 = local_130;
              }
              if ((int)*plVar33 == 0x62677273) {
                uVar16 = 0;
              }
            }
            else if (pCVar72 == (ContextContainer *)0xa) {
              plVar33 = (long *)((ulong)&local_140 | 1);
              if ((local_140 & 1) != 0) {
                plVar33 = local_130;
              }
              if (*plVar33 == 0x2d79616c70736964 && (short)plVar33[1] == 0x3370) {
                uVar16 = 1;
              }
            }
                    /* try { // try from 001217a0 to 001217a7 has its CatchHandler @ 00124250 */
            local_268 = uVar15;
            uStack_264 = uVar37;
            local_260 = uVar38;
            uStack_25c = uVar39;
            local_258 = uVar16;
            uVar17 = facebook::react::colorFromComponents(&local_268);
            *(uint *)param_4 = uVar17;
            if ((local_140 & 1) != 0) {
              operator_delete(local_130);
            }
            puVar24 = (undefined8 *)CONCAT71(uStack_df,local_e0);
            while (puVar24 != (undefined8 *)0x0) {
              pvVar20 = (void *)*puVar24;
              if (*(uint *)(puVar24 + 0xb) != 0xffffffff) {
                    /* try { // try from 001217f8 to 00121803 has its CatchHandler @ 00124330 */
                (*(code *)(&PTR_FUN_0012f788)[*(uint *)(puVar24 + 0xb)])(&local_140,puVar24 + 5);
              }
              *(undefined4 *)(puVar24 + 0xb) = 0xffffffff;
              if ((*(byte *)(puVar24 + 2) & 1) != 0) {
                operator_delete((void *)puVar24[4]);
              }
              operator_delete(puVar24);
              puVar24 = (undefined8 *)pvVar20;
            }
            pvVar20 = (void *)CONCAT44(local_f0._4_4_,(int)local_f0);
            local_f0._0_4_ = 0;
            local_f0._4_4_ = 0;
            local_f0 = (byte *)0x0;
            if (pvVar20 != (void *)0x0) {
              operator_delete(pvVar20);
            }
            goto LAB_00121734;
          }
          puVar24 = (undefined8 *)CONCAT71(uStack_df,local_e0);
          while (puVar24 != (undefined8 *)0x0) {
            pvVar20 = (void *)*puVar24;
            if (*(uint *)(puVar24 + 0xb) != 0xffffffff) {
                    /* try { // try from 001216ec to 001216f7 has its CatchHandler @ 001242cc */
              (*(code *)(&PTR_FUN_0012f788)[*(uint *)(puVar24 + 0xb)])(&local_140,puVar24 + 5);
            }
            *(undefined4 *)(puVar24 + 0xb) = 0xffffffff;
            if ((*(byte *)(puVar24 + 2) & 1) != 0) {
              operator_delete((void *)puVar24[4]);
            }
            operator_delete(puVar24);
            puVar24 = (undefined8 *)pvVar20;
          }
          pvVar20 = (void *)CONCAT44(local_f0._4_4_,(int)local_f0);
          local_f0._0_4_ = 0;
          local_f0._4_4_ = 0;
          if (pvVar20 != (void *)0x0) {
            operator_delete(pvVar20);
          }
        }
      }
LAB_00121720:
      uVar17 = facebook::react::parsePlatformColor(param_1,iVar28,(RawValue *)param_3);
    }
    *(uint *)param_4 = uVar17;
  }
  else {
    pRVar32 = (RawValue *)param_3;
    if (iVar58 != 0) {
      if (iVar58 == 1) {
        pRVar32 = (RawValue *)param_3 + 8;
        goto LAB_00120af4;
      }
      goto LAB_00124090;
    }
LAB_00120af4:
    if (*(int *)pRVar32 != 6) goto LAB_00120bb4;
    FUN_0011a704(local_228,param_3);
    ppCVar34 = &local_1e0;
    local_1d0 = (long *)0x0;
    pCStack_1d8 = (ContextContainer *)(ulong)(local_228[0] >> 1);
    local_1e0 = (ContextContainer *)((ulong)local_228 | 1);
    if ((local_228[0] & 1) != 0) {
      pCStack_1d8 = local_220;
      local_1e0 = local_218;
    }
    FUN_00126264(&local_1c8,&local_1e0);
    local_198 = 6;
    if ((int)local_1c8 == 0xe) {
      FUN_00126264(&local_f0,&local_1e0);
      local_1b8 = CONCAT71(uStack_df,local_e0);
      pCStack_1c0 = pCStack_e8;
      local_1c8._0_4_ = (int)local_f0;
      local_1c8._4_4_ = local_f0._4_4_;
      uStack_1a0 = uStack_c8;
      local_1a8 = local_d0;
      uStack_1b0 = uStack_d8;
    }
    uVar18 = local_1b8;
    pCVar29 = pCStack_1c0;
    iVar58 = (int)local_1c8;
    uStack_148 = CONCAT44(uStack_194,local_198);
    pCVar36 = (ContextContainer *)&local_f0;
    uStack_168 = local_1b8;
    local_170 = pCStack_1c0;
    pCStack_158 = local_1a8;
    uStack_160 = uStack_1b0;
    auVar6._8_4_ = (int)local_1c8;
    auVar6._0_8_ = local_1d0;
    auVar6._12_4_ = local_1c8._4_4_;
    local_150 = uStack_1a0;
    pCStack_188 = pCStack_1d8;
    local_190 = local_1e0;
    uStack_178 = auVar6._8_8_;
    local_180 = local_1d0;
    if ((int)local_1c8 == local_198) {
      uVar18 = 0;
      uVar31 = 0;
      local_1c8 = (byte *)CONCAT44(local_1c8._4_4_,(int)local_1c8);
    }
    else {
      if ((int)local_1c8 < 0xb) {
        if ((int)local_1c8 == 7) {
          FUN_00126264(&local_f0,&local_1e0);
          local_1b8 = CONCAT71(uStack_df,local_e0);
          pCStack_1c0 = pCStack_e8;
          local_1a8 = local_d0;
          uVar31 = extraout_x9;
          if ((int)local_f0 == 0xe) {
            FUN_00126264(&local_f0,&local_1e0);
            local_1b8 = CONCAT71(uStack_df,local_e0);
            uVar31 = extraout_x9_00;
          }
          uVar63 = uStack_df;
          uVar13 = local_e0;
          uVar15 = local_f0._4_4_;
          iVar58 = (int)local_f0;
          pbVar7 = (byte *)CONCAT44(local_f0._4_4_,(int)local_f0);
          pCStack_138 = pCStack_1d8;
          local_140 = (byte)local_1e0;
          uStack_13f = (undefined1)((ulong)local_1e0 >> 8);
          uStack_13e = (undefined1)((ulong)local_1e0 >> 0x10);
          uStack_13d = (undefined2)((ulong)local_1e0 >> 0x18);
          uStack_13b = (undefined2)((ulong)local_1e0 >> 0x28);
          uStack_139 = (undefined1)((ulong)local_1e0 >> 0x38);
          pCStack_120 = pCStack_e8;
          local_128 = (int)local_f0;
          uStack_124 = local_f0._4_4_;
          local_130 = local_1d0;
          uStack_c0 = uStack_d8;
          uStack_110 = uStack_d8;
          local_118 = local_1b8;
          uStack_100 = (undefined4)uStack_c8;
          uStack_fc = (undefined4)(uStack_c8 >> 0x20);
          local_108 = SUB84(local_d0,0);
          uStack_104 = (undefined4)((ulong)local_d0 >> 0x20);
          local_f8 = 1;
          if (uVar18 == 0) {
            uVar18 = 0;
            lVar30 = 0;
          }
          else {
            uVar17 = 0x811c9dc5;
            do {
              CVar2 = *pCVar29;
              CVar3 = (ContextContainer)((byte)CVar2 | 0x20);
              if (0x19 < (byte)CVar2 - 0x41) {
                CVar3 = CVar2;
              }
              uVar18 = uVar18 - 1;
              uVar17 = (uVar17 ^ (int)(char)CVar3) * 0x1000193;
              pCVar29 = pCVar29 + 1;
            } while (uVar18 != 0);
            local_f0._0_4_ = (int)local_1e0;
            local_f0._4_4_ = (undefined4)((ulong)local_1e0 >> 0x20);
            local_e0 = SUB81(local_1d0,0);
            uStack_df = (undefined7)((ulong)local_1d0 >> 8);
            lVar30 = 0;
            if ((int)uVar17 < -0x196e1ac0) {
              if (uVar17 == 0xd70632a7) {
LAB_00121d18:
                local_210[0] = &local_140;
                uStack_c8 = local_1b8;
                local_d0 = pCStack_e8;
                auVar10._8_4_ = iVar58;
                auVar10._0_8_ = local_1d0;
                auVar10._12_4_ = uVar15;
                uStack_a8 = 1;
                pCStack_e8 = pCStack_1d8;
                uStack_d8 = auVar10._8_8_;
                uStack_b8 = local_108;
                uStack_b4 = uStack_104;
                local_b0 = uStack_100;
                uStack_ac = uStack_fc;
                uVar18 = FUN_00128994(local_210,6);
                if (uVar18 >> 0x20 == 0) {
                  local_130 = (long *)CONCAT71(uStack_df,local_e0);
                  local_140 = (byte)(int)local_f0;
                  uStack_13f = (undefined1)((uint)(int)local_f0 >> 8);
                  uStack_13e = (undefined1)((uint)(int)local_f0 >> 0x10);
                  uStack_13d = (undefined2)(CONCAT44(local_f0._4_4_,(int)local_f0) >> 0x18);
                  uStack_13b = (undefined2)((uint)local_f0._4_4_ >> 8);
                  uStack_139 = (undefined1)((uint)local_f0._4_4_ >> 0x18);
                  local_128 = (int)uStack_d8;
                  uStack_124 = (undefined4)((ulong)uStack_d8 >> 0x20);
LAB_00121fa8:
                  local_f0 = &local_140;
                  pCStack_138 = pCStack_e8;
                  pCStack_120 = local_d0;
                  local_118 = uStack_c8;
                  uStack_110 = uStack_c0;
                  local_108 = uStack_b8;
                  uStack_104 = uStack_b4;
                  uStack_100 = local_b0;
                  uStack_fc = uStack_ac;
                  local_f8 = uStack_a8;
                  uVar53 = FUN_00128994(&local_f0,6);
                  iVar58 = (int)((ulong)uVar53 >> 0x20);
                  fVar73 = (float)uVar53;
                  if (iVar58 == 1) {
LAB_001221ac:
                    local_f0 = &local_140;
                    uVar53 = FUN_00128994(&local_f0,0);
                    iVar58 = (int)((ulong)uVar53 >> 0x20);
                    fVar71 = (float)uVar53;
                    if (iVar58 != 1) {
                      if (iVar58 != 2) goto LAB_001228a8;
                      fVar71 = (fVar71 / 100.0) * 255.0;
                    }
                    local_f0 = &local_140;
                    uVar53 = FUN_00128994(&local_f0,0);
                    iVar58 = (int)((ulong)uVar53 >> 0x20);
                    fVar74 = (float)uVar53;
                    if (iVar58 != 1) {
                      if (iVar58 != 2) goto LAB_001228a8;
                      fVar74 = (fVar74 / 100.0) * 255.0;
                    }
                    local_f0 = &local_140;
                    FUN_00128994(&local_f0,3);
                    if (extraout_var == 1) {
                      bVar14 = false;
                      fVar40 = extraout_w0;
                    }
                    else if (extraout_var == 2) {
                      bVar14 = false;
                      fVar40 = extraout_w0 / 100.0;
                    }
                    else {
                      fVar40 = 0.0;
                      bVar14 = true;
                    }
                    uVar17 = (uint)fVar73;
                    fVar60 = (float)(int)fVar73;
                    uVar53 = NEON_scvtf(CONCAT44((int)fVar71,(int)fVar74),4);
                    if (fVar73 != fVar60 && fVar73 < fVar60 == (NAN(fVar73) || NAN(fVar60))) {
                      uVar17 = uVar17 + 1;
                    }
                    if (0xfe < (int)uVar17) {
                      uVar17 = 0xff;
                    }
                    uVar53 = NEON_fcmgt(CONCAT44(fVar71,fVar74),uVar53,4);
                    uVar17 = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
                    uVar53 = NEON_smin(CONCAT44((int)fVar71 - (int)((ulong)uVar53 >> 0x20),
                                                (int)fVar74 - (int)uVar53),0xff000000ff,4);
                    uVar53 = NEON_smax(uVar53,0,4);
joined_r0x00122eb4:
                    if (bVar14) {
                      uVar21 = 0xff000000;
                    }
                    else {
                      fVar40 = fVar40 * 255.0;
                      uVar21 = (uint)fVar40;
                      fVar73 = (float)(int)fVar40;
                      if (fVar40 != fVar73 && fVar40 < fVar73 == (NAN(fVar40) || NAN(fVar73))) {
                        uVar21 = uVar21 + 1;
                      }
                      if (0xfe < (int)uVar21) {
                        uVar21 = 0xff;
                      }
                      uVar21 = (uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU)) << 0x18;
                    }
                    lVar30 = 1;
                    uVar18 = NEON_ushl(uVar53,DAT_00108d68,4);
                    uVar21 = (uint)CONCAT11((char)((uVar18 & 0xff0000ff0000) >> 0x10),
                                            (char)((uVar18 & 0xff0000ff0000) >> 0x28)) << 8 | uVar21
                    ;
                  }
                  else {
                    if (iVar58 == 2) {
                      fVar73 = (fVar73 / 100.0) * 255.0;
                      goto LAB_001221ac;
                    }
LAB_001228a8:
                    lVar30 = 0;
                    uVar17 = 0;
                    uVar21 = 0;
                  }
                }
                else {
                  if (local_128 == 0xe) {
                    FUN_00126264(local_210,&local_140);
                    local_128 = (int)local_210[0];
                  }
                  bVar14 = local_128 != 3;
                  local_118 = uStack_c8;
                  pCStack_120 = local_d0;
                  local_108 = uStack_b8;
                  uStack_110 = uStack_c0;
                  local_130 = (long *)CONCAT71(uStack_df,local_e0);
                  uStack_fc = uStack_ac;
                  local_f8 = uStack_a8;
                  uStack_104 = uStack_b4;
                  uStack_100 = local_b0;
                  pCStack_138 = pCStack_e8;
                  local_140 = (byte)(int)local_f0;
                  uStack_13f = (undefined1)((uint)(int)local_f0 >> 8);
                  uStack_13e = (undefined1)((uint)(int)local_f0 >> 0x10);
                  uStack_13d = (undefined2)(CONCAT44(local_f0._4_4_,(int)local_f0) >> 0x18);
                  uStack_13b = (undefined2)((uint)local_f0._4_4_ >> 8);
                  uStack_139 = (undefined1)((uint)local_f0._4_4_ >> 0x18);
                  local_128 = (int)uStack_d8;
                  uStack_124 = (undefined4)((ulong)uStack_d8 >> 0x20);
                  if (bVar14) goto LAB_00121fa8;
                  local_f0 = &local_140;
                  uVar53 = FUN_00128994(&local_f0,6);
                  iVar58 = (int)((ulong)uVar53 >> 0x20);
                  fVar73 = (float)uVar53;
                  if (iVar58 == 1) {
                    local_f0 = &local_140;
                    uVar18 = FUN_00128b58(&local_f0);
                    uVar17 = (uint)(uVar18 >> 0x20);
                    if (uVar18 >> 0x20 == 0) goto LAB_001225cc;
                    local_280 = (float)uVar18;
                    local_f0 = &local_140;
                    uVar31 = FUN_00128b58(&local_f0);
                    uVar18 = 0;
                    if (uVar31 >> 0x20 != 0) {
                      uVar18 = uVar31 | 0x100000000;
                    }
LAB_0012285c:
                    if ((uVar18 & 0xff00000000) == 0) goto LAB_001228a8;
                    local_f0 = &local_140;
                    FUN_00128994(&local_f0,4);
                    if (extraout_var_00 == 1) {
                      bVar14 = false;
                      fVar40 = extraout_w0_00;
                    }
                    else if (extraout_var_00 == 2) {
                      bVar14 = false;
                      fVar40 = extraout_w0_00 / 100.0;
                    }
                    else {
                      fVar40 = 0.0;
                      bVar14 = true;
                    }
                    uVar17 = (uint)fVar73;
                    iVar58 = (int)(float)uVar18;
                    uVar53 = NEON_scvtf(CONCAT44((int)local_280,iVar58),4);
                    uVar53 = NEON_fcmgt(CONCAT44(local_280,(float)uVar18),uVar53,4);
                    fVar71 = (float)(int)fVar73;
                    uVar53 = NEON_smin(CONCAT44((int)local_280 - (int)((ulong)uVar53 >> 0x20),
                                                iVar58 - (int)uVar53),0xff000000ff,4);
                    if (fVar73 != fVar71 && fVar73 < fVar71 == (NAN(fVar73) || NAN(fVar71))) {
                      uVar17 = uVar17 + 1;
                    }
                    if (0xfe < (int)uVar17) {
                      uVar17 = 0xff;
                    }
                    uVar17 = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
                    uVar53 = NEON_smax(uVar53,0,4);
                    goto joined_r0x00122eb4;
                  }
                  if (iVar58 != 2) goto LAB_001228a8;
                  local_f0 = &local_140;
                  uVar18 = FUN_00128d74(&local_f0);
                  uVar17 = (uint)(uVar18 >> 0x20);
                  if (uVar18 >> 0x20 != 0) {
                    local_f0 = &local_140;
                    uVar31 = FUN_00128d74(&local_f0);
                    uVar17 = (uint)(uVar31 >> 0x20);
                    if (uVar31 >> 0x20 != 0) {
                      fVar73 = (fVar73 / 100.0) * 255.0;
                      local_280 = ((float)uVar18 / 100.0) * 255.0;
                      uVar18 = (ulong)(uint)(((float)uVar31 / 100.0) * 255.0) | 0x100000000;
                      goto LAB_0012285c;
                    }
                  }
LAB_001225cc:
                  lVar30 = 0;
                  uVar21 = 0;
                }
                uVar18 = (ulong)(uVar21 | uVar17);
                uVar31 = (ulong)((uVar21 | uVar17) >> 8);
                uVar13 = local_e0;
                uVar63 = uStack_df;
                pbVar7 = local_f0;
                goto LAB_00122f18;
              }
              uVar31 = 0xdc874826;
              uVar18 = 0;
              if (uVar17 != 0xdc874826) goto LAB_00122f18;
              local_e0 = uVar13;
              uStack_df = uVar63;
              local_f0 = &local_140;
              uVar53 = FUN_00128f90(&local_f0);
              if (1 < (int)((ulong)uVar53 >> 0x20) - 1U) goto LAB_0012261c;
              fVar40 = remainderf((float)uVar53,360.0);
              fVar73 = fVar40 + 360.0;
              if (0.0 <= fVar40) {
                fVar73 = fVar40;
              }
              local_f0 = &local_140;
              uVar53 = FUN_00128994(&local_f0,0);
              iVar58 = (int)((ulong)uVar53 >> 0x20);
              fVar40 = (float)uVar53;
              if (iVar58 != 1) {
                if (iVar58 != 2) goto LAB_0012261c;
                fVar40 = (fVar40 / 100.0) * 100.0;
              }
              local_f0 = &local_140;
              uVar53 = FUN_00128994(&local_f0,0);
              iVar58 = (int)((ulong)uVar53 >> 0x20);
              fVar71 = (float)uVar53;
              if (iVar58 != 1) {
                if (iVar58 != 2) goto LAB_0012261c;
                fVar71 = (fVar71 / 100.0) * 100.0;
              }
              local_f0 = &local_140;
              uVar53 = FUN_00128994(&local_f0,3);
              iVar58 = (int)((ulong)uVar53 >> 0x20);
              fVar74 = (float)uVar53;
              if (iVar58 == 1) {
LAB_001228bc:
                uVar17 = FUN_00129434(fVar73 / 360.0,fVar40,fVar71);
                goto LAB_001228cc;
              }
              if (iVar58 == 2) {
                fVar74 = fVar74 / 100.0;
                goto LAB_001228bc;
              }
              uVar17 = FUN_00129434(fVar73 / 360.0,fVar40,fVar71);
              uVar21 = 0xff000000;
LAB_00122900:
              lVar30 = 1;
              uVar21 = uVar21 | uVar17 & 0xffff00;
              uVar17 = uVar17 & 0xff;
            }
            else {
              if (uVar17 != 0xe691e540 && uVar17 != 0x18abb2f3) {
                uVar31 = 0x46f9077c;
                uVar18 = 0;
                if (uVar17 == 0x46f9077c) goto LAB_00121d18;
                goto LAB_00122f18;
              }
              local_210[0] = &local_140;
              uStack_c8 = local_1b8;
              local_d0 = pCStack_e8;
              auVar9._8_4_ = iVar58;
              auVar9._0_8_ = local_1d0;
              auVar9._12_4_ = uVar15;
              uStack_a8 = 1;
              pCStack_e8 = pCStack_1d8;
              uStack_d8 = auVar9._8_8_;
              uStack_b8 = local_108;
              uStack_b4 = uStack_104;
              local_b0 = uStack_100;
              uStack_ac = uStack_fc;
              uVar18 = FUN_00128f90(local_210);
              if (uVar18 >> 0x20 == 0) {
                local_130 = (long *)CONCAT71(uStack_df,local_e0);
                local_140 = (byte)(int)local_f0;
                uStack_13f = (undefined1)((uint)(int)local_f0 >> 8);
                uStack_13e = (undefined1)((uint)(int)local_f0 >> 0x10);
                uStack_13d = (undefined2)(CONCAT44(local_f0._4_4_,(int)local_f0) >> 0x18);
                uStack_13b = (undefined2)((uint)local_f0._4_4_ >> 8);
                uStack_139 = (undefined1)((uint)local_f0._4_4_ >> 0x18);
                local_128 = (int)uStack_d8;
                uStack_124 = (undefined4)((ulong)uStack_d8 >> 0x20);
LAB_00121e34:
                pCStack_138 = pCStack_e8;
                pCStack_120 = local_d0;
                local_118 = uStack_c8;
                uStack_110 = uStack_c0;
                local_108 = uStack_b8;
                uStack_104 = uStack_b4;
                uStack_100 = local_b0;
                uStack_fc = uStack_ac;
                local_f8 = uStack_a8;
                local_f0 = &local_140;
                uVar53 = FUN_00128f90(&local_f0);
                if ((int)((ulong)uVar53 >> 0x20) - 1U < 2) {
                  fVar40 = remainderf((float)uVar53,360.0);
                  fVar73 = fVar40 + 360.0;
                  if (0.0 <= fVar40) {
                    fVar73 = fVar40;
                  }
                  local_f0 = &local_140;
                  uVar53 = FUN_00128994(&local_f0,0);
                  iVar58 = (int)((ulong)uVar53 >> 0x20);
                  fVar71 = (float)uVar53;
                  if (iVar58 != 1) {
                    if (iVar58 != 2) goto LAB_0012261c;
                    fVar71 = (fVar71 / 100.0) * 100.0;
                  }
                  local_f0 = &local_140;
                  uVar53 = FUN_00128994(&local_f0,0);
                  iVar58 = (int)((ulong)uVar53 >> 0x20);
                  fVar40 = (float)uVar53;
                  if (iVar58 != 1) {
                    if (iVar58 != 2) goto LAB_0012261c;
                    fVar40 = (fVar40 / 100.0) * 100.0;
                  }
                  local_f0 = &local_140;
                  fVar73 = fVar73 / 360.0;
                  uVar53 = FUN_00128994(&local_f0,3);
                  iVar58 = (int)((ulong)uVar53 >> 0x20);
                  fVar74 = (float)uVar53;
                  if (iVar58 != 1) {
                    if (iVar58 != 2) {
LAB_00122824:
                      uVar17 = FUN_001291ec(fVar73,fVar71,fVar40);
                      uVar21 = 0xff000000;
                      goto LAB_00122900;
                    }
                    fVar74 = fVar74 / 100.0;
                  }
LAB_001227cc:
                  uVar17 = FUN_001291ec(fVar73,fVar71,fVar40);
LAB_001228cc:
                  fVar74 = fVar74 * 255.0;
                  uVar21 = (uint)fVar74;
                  fVar73 = (float)(int)fVar74;
                  if (fVar74 != fVar73 && fVar74 < fVar73 == (NAN(fVar74) || NAN(fVar73))) {
                    uVar21 = uVar21 + 1;
                  }
                  if (0xfe < (int)uVar21) {
                    uVar21 = 0xff;
                  }
                  uVar21 = (uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU)) << 0x18;
                  goto LAB_00122900;
                }
LAB_0012261c:
                lVar30 = 0;
                uVar17 = 0;
                uVar21 = 0;
              }
              else {
                if (local_128 == 0xe) {
                  FUN_00126264(local_210,&local_140);
                  local_128 = (int)local_210[0];
                }
                bVar14 = local_128 != 3;
                local_118 = uStack_c8;
                pCStack_120 = local_d0;
                local_108 = uStack_b8;
                uStack_110 = uStack_c0;
                local_130 = (long *)CONCAT71(uStack_df,local_e0);
                uStack_fc = uStack_ac;
                local_f8 = uStack_a8;
                uStack_104 = uStack_b4;
                uStack_100 = local_b0;
                pCStack_138 = pCStack_e8;
                local_140 = (byte)(int)local_f0;
                uStack_13f = (undefined1)((uint)(int)local_f0 >> 8);
                uStack_13e = (undefined1)((uint)(int)local_f0 >> 0x10);
                uStack_13d = (undefined2)(CONCAT44(local_f0._4_4_,(int)local_f0) >> 0x18);
                uStack_13b = (undefined2)((uint)local_f0._4_4_ >> 8);
                uStack_139 = (undefined1)((uint)local_f0._4_4_ >> 0x18);
                local_128 = (int)uStack_d8;
                uStack_124 = (undefined4)((ulong)uStack_d8 >> 0x20);
                if (bVar14) goto LAB_00121e34;
                local_f0 = &local_140;
                uVar53 = FUN_00128f90(&local_f0);
                if (1 < (int)((ulong)uVar53 >> 0x20) - 1U) goto LAB_0012261c;
                fVar40 = remainderf((float)uVar53,360.0);
                fVar73 = fVar40 + 360.0;
                if (0.0 <= fVar40) {
                  fVar73 = fVar40;
                }
                local_f0 = &local_140;
                uVar18 = FUN_00128d74(&local_f0);
                uVar17 = (uint)(uVar18 >> 0x20);
                if (uVar18 >> 0x20 != 0) {
                  local_f0 = &local_140;
                  uVar31 = FUN_00128d74(&local_f0);
                  uVar17 = (uint)(uVar31 >> 0x20);
                  if (uVar31 >> 0x20 == 0) goto LAB_00121e28;
                  fVar73 = fVar73 / 360.0;
                  fVar71 = ((float)uVar18 / 100.0) * 100.0;
                  fVar40 = ((float)uVar31 / 100.0) * 100.0;
                  local_f0 = &local_140;
                  uVar53 = FUN_00128994(&local_f0,4);
                  iVar58 = (int)((ulong)uVar53 >> 0x20);
                  fVar74 = (float)uVar53;
                  if (iVar58 != 1) {
                    if (iVar58 == 2) {
                      fVar74 = fVar74 / 100.0;
                      goto LAB_001227cc;
                    }
                    goto LAB_00122824;
                  }
                  goto LAB_001227cc;
                }
LAB_00121e28:
                lVar30 = 0;
                uVar21 = 0;
              }
            }
            uVar31 = (ulong)(uVar21 >> 8);
            uVar18 = (ulong)uVar17;
            uVar13 = local_e0;
            uVar63 = uStack_df;
            pbVar7 = local_f0;
          }
LAB_00122f18:
          uStack_df = uVar63;
          local_e0 = uVar13;
          local_1a8 = (ContextContainer *)CONCAT44(uStack_104,local_108);
          uStack_1a0 = CONCAT44(uStack_fc,uStack_100);
          uStack_1b0 = uStack_110;
          local_1b8 = local_118;
          pCStack_1c0 = pCStack_120;
          local_1c8._0_4_ = local_128;
          local_1c8._4_4_ = uStack_124;
          local_1e0 = (ContextContainer *)
                      CONCAT17(uStack_139,
                               CONCAT25(uStack_13b,
                                        CONCAT23(uStack_13d,
                                                 CONCAT12(uStack_13e,CONCAT11(uStack_13f,local_140))
                                                )));
          uVar31 = (uVar31 & 0xffffff) << 8 | lVar30 << 0x20 | uVar18 & 0xff;
          local_1d0 = local_130;
          pCStack_1d8 = pCStack_138;
          if (uVar31 < 0x100000001) {
            uVar31 = 0;
          }
          local_f0 = pbVar7;
          if (local_128 == 0xe) {
            FUN_00126264(&local_f0,&local_1e0);
            local_1b8 = CONCAT71(uStack_df,local_e0);
            pCStack_1c0 = pCStack_e8;
            local_1c8._4_4_ = local_f0._4_4_;
            uStack_1a0 = uStack_c8;
            local_1a8 = local_d0;
            uStack_1b0 = uStack_d8;
            local_1c8._0_4_ = (int)local_f0;
          }
          uVar18 = local_1b8;
          if (((int)local_1c8 == 1) && (lVar30 != 0)) {
            uVar18 = lVar30 << 0x21;
            FUN_00126264(&local_f0,&local_1e0);
            local_1b8 = CONCAT71(uStack_df,local_e0);
            uVar31 = uVar31 & 0xffffffff;
            pCStack_1c0 = pCStack_e8;
            uStack_1b0 = uStack_d8;
            uStack_1a0 = uStack_c8;
            local_1a8 = local_d0;
            local_1c8 = local_f0;
            goto LAB_00123a28;
          }
        }
        else {
          if ((int)local_1c8 != 10) goto LAB_00120ee4;
          FUN_00126264(&local_f0,&local_1e0);
          pCStack_1c0 = pCStack_e8;
          local_1c8._0_4_ = (int)local_f0;
          local_1c8._4_4_ = local_f0._4_4_;
          uStack_1a0 = uStack_c8;
          local_1a8 = local_d0;
          uStack_1b0 = uStack_d8;
          uVar18 = CONCAT71(uStack_df,local_e0);
          if ((int)local_f0 == 0xe) {
            FUN_00126264(&local_f0,&local_1e0);
            pCStack_1c0 = pCStack_e8;
            local_1c8._0_4_ = (int)local_f0;
            local_1c8._4_4_ = local_f0._4_4_;
            uStack_1a0 = uStack_c8;
            local_1a8 = local_d0;
            uStack_1b0 = uStack_d8;
            uVar18 = CONCAT71(uStack_df,local_e0);
            if ((int)local_f0 == 0xe) {
              FUN_00126264(&local_f0,&local_1e0);
              uStack_1a0 = uStack_c8;
              local_1a8 = local_d0;
              pCStack_1c0 = pCStack_e8;
              local_1c8._0_4_ = (int)local_f0;
              local_1c8._4_4_ = local_f0._4_4_;
              uStack_1b0 = uStack_d8;
              uVar18 = CONCAT71(uStack_df,local_e0);
            }
          }
        }
      }
      else if (((int)local_1c8 == 0xb) || ((int)local_1c8 == 0xc)) {
        FUN_00126264(&local_f0,&local_1e0);
        pCStack_1c0 = pCStack_e8;
        local_1c8._0_4_ = (int)local_f0;
        local_1c8._4_4_ = local_f0._4_4_;
        uStack_1a0 = uStack_c8;
        local_1a8 = local_d0;
        uStack_1b0 = uStack_d8;
        uVar18 = CONCAT71(uStack_df,local_e0);
        if ((int)local_f0 == 0xe) {
          FUN_00126264(&local_f0,&local_1e0);
          local_1b8 = CONCAT71(uStack_df,local_e0);
          pCStack_1c0 = pCStack_e8;
          local_1c8._0_4_ = (int)local_f0;
          local_1c8._4_4_ = local_f0._4_4_;
          uStack_1a0 = uStack_c8;
          local_1a8 = local_d0;
          uStack_1b0 = uStack_d8;
          uVar18 = local_1b8;
          if ((int)local_f0 == 0xe) {
            FUN_00126264(&local_f0,&local_1e0);
            uVar18 = local_1b8;
          }
        }
      }
      else {
LAB_00120ee4:
        FUN_00126264(&local_f0,&local_1e0);
        auVar11._8_8_ = pCStack_e8;
        auVar11._0_8_ = local_f0;
        uVar18 = CONCAT71(uStack_df,local_e0);
        auVar12._8_8_ = uStack_d8;
        auVar12._0_8_ = uVar18;
        bVar14 = (int)local_1c8 == 0xf;
        pCStack_1c0 = pCStack_e8;
        local_1c8._0_4_ = (int)local_f0;
        local_1c8._4_4_ = local_f0._4_4_;
        uStack_1b0 = uStack_d8;
        uStack_1a0 = uStack_c8;
        local_1a8 = local_d0;
        if (bVar14) {
          bVar14 = false;
          if (local_1b8 < 9) {
            uVar21 = 0;
            uVar17 = 0;
            if ((1L << (local_1b8 & 0x3f) & 0x158U) != 0) {
              uVar31 = 0;
              do {
                CVar3 = pCVar29[uVar31];
                if (9 < (byte)CVar3 - 0x30) {
                  uVar17 = (byte)CVar3 | 0x20;
                  if (0x19 < (byte)CVar3 - 0x41) {
                    uVar17 = (uint)(byte)CVar3;
                  }
                  if (5 < uVar17 - 0x61) {
                    bVar14 = false;
                    uVar21 = 0;
                    uVar17 = 0;
                    goto LAB_00122404;
                  }
                }
                uVar31 = uVar31 + 1;
              } while (local_1b8 != uVar31);
              bVar14 = false;
              auVar45._1_15_ = auVar11._1_15_;
              auVar46._5_11_ = auVar11._5_11_;
              if ((long)local_1b8 < 6) {
                iVar58 = (int)((ulong)DAT_00108d60 >> 0x20);
                if (local_1b8 == 3) {
                  auVar49[0] = pCVar29[1];
                  auVar49._1_15_ = auVar45._1_15_;
                  auVar50._0_4_ = auVar49._0_4_;
                  auVar50[4] = pCVar29[2];
                  auVar50._5_11_ = auVar46._5_11_;
                  iVar23 = auVar50._4_4_;
                  uVar53 = NEON_cmhi(0x1a0000001a,
                                     CONCAT44(iVar23 + 0xbf,auVar50._0_4_ + 0xbf) & 0xff000000ff,4);
                  uVar53 = NEON_bsl(uVar53,CONCAT44(iVar23,auVar50._0_4_) | 0x2000000020,
                                    auVar50._0_8_,1);
                  uVar61 = NEON_cmhi(0xa0000000a,
                                     CONCAT44(iVar23 + 0xd0,auVar50._0_4_ + 0xd0) & 0xff000000ff,4);
                  uVar31 = NEON_bif(auVar50._0_8_,uVar53,uVar61,1);
                  uVar53 = NEON_bit(DAT_00108da8,DAT_00108d70,uVar61,1);
                  CVar3 = *pCVar29;
                  uVar21 = (uint)(byte)CVar3;
                  uVar17 = uVar21 | 0x20;
                  if (0x19 < (byte)CVar3 - 0x41) {
                    uVar17 = uVar21;
                  }
                  bVar14 = 9 < (byte)CVar3 - 0x30;
                  if (bVar14) {
                    uVar21 = uVar17;
                  }
                  iVar23 = -0x30;
                  if (bVar14) {
                    iVar23 = -0x57;
                  }
                  uVar17 = ((int)((ulong)uVar53 >> 0x20) + (int)((uVar31 & 0xff000000ff) >> 0x20)) *
                           iVar58 | 0xff000000;
                  uVar21 = uVar17 | (iVar23 + uVar21) * 0x11;
                  uVar17 = uVar17 | ((int)uVar53 + (int)(uVar31 & 0xff000000ff)) * (int)DAT_00108d60
                                    & 0xff00U;
                }
                else {
                  uVar21 = 0;
                  uVar17 = 0;
                  if (local_1b8 != 4) goto LAB_00122404;
                  auVar45[0] = pCVar29[1];
                  auVar46._0_4_ = auVar45._0_4_;
                  auVar46[4] = pCVar29[2];
                  iVar23 = auVar46._4_4_;
                  uVar53 = NEON_cmhi(0x1a0000001a,
                                     CONCAT44(iVar23 + 0xbf,auVar46._0_4_ + 0xbf) & 0xff000000ff,4);
                  uVar53 = NEON_bsl(uVar53,CONCAT44(iVar23,auVar46._0_4_) | 0x2000000020,
                                    auVar46._0_8_,1);
                  uVar61 = NEON_cmhi(0xa0000000a,
                                     CONCAT44(iVar23 + 0xd0,auVar46._0_4_ + 0xd0) & 0xff000000ff,4);
                  uVar31 = NEON_bif(auVar46._0_8_,uVar53,uVar61,1);
                  uVar53 = NEON_bit(DAT_00108da8,DAT_00108d70,uVar61,1);
                  CVar3 = *pCVar29;
                  uVar21 = (uint)(byte)CVar3;
                  uVar17 = uVar21 | 0x20;
                  if (0x19 < (byte)CVar3 - 0x41) {
                    uVar17 = uVar21;
                  }
                  bVar14 = 9 < (byte)CVar3 - 0x30;
                  CVar3 = pCVar29[3];
                  if (bVar14) {
                    uVar21 = uVar17;
                  }
                  iVar26 = -0x30;
                  iVar23 = iVar26;
                  if (bVar14) {
                    iVar23 = -0x57;
                  }
                  uVar31 = CONCAT44(((int)((ulong)uVar53 >> 0x20) +
                                    (int)((uVar31 & 0xff000000ff) >> 0x20)) * iVar58,
                                    ((int)uVar53 + (int)(uVar31 & 0xff000000ff)) * (int)DAT_00108d60
                                   ) & 0xff00000000ff00;
                  uVar22 = (uint)(byte)CVar3;
                  uVar17 = uVar22 | 0x20;
                  if (0x19 < (byte)CVar3 - 0x41) {
                    uVar17 = uVar22;
                  }
                  if (9 < (byte)CVar3 - 0x30) {
                    iVar26 = -0x57;
                    uVar22 = uVar17;
                  }
                  uVar21 = (iVar23 + uVar21) * 0x11;
                  uVar17 = (uint)CONCAT11((char)(uVar31 >> 0x30),(char)(uVar31 >> 8)) << 8 |
                           (iVar26 + uVar22) * 0x11000000;
                }
              }
              else {
                uVar63 = (undefined7)((ulong)in_d4 >> 8);
                uVar66 = (undefined3)((ulong)in_d4 >> 0x28);
                if (local_1b8 == 6) {
                  auVar51[0] = pCVar29[2];
                  auVar51._1_15_ = auVar45._1_15_;
                  auVar56._1_15_ = auVar12._1_15_;
                  auVar56[0] = pCVar29[4];
                  auVar52._0_4_ = auVar51._0_4_;
                  auVar52[4] = pCVar29[3];
                  auVar52._5_11_ = auVar46._5_11_;
                  auVar57._5_11_ = auVar12._5_11_;
                  auVar57._0_4_ = auVar56._0_4_;
                  auVar57[4] = pCVar29[5];
                  iVar26 = (int)CONCAT71(uVar63,*pCVar29);
                  uVar61 = CONCAT35(uVar66,CONCAT14(pCVar29[1],iVar26));
                  iVar58 = auVar52._4_4_;
                  iVar23 = auVar57._4_4_;
                  iVar65 = (int)((ulong)uVar61 >> 0x20);
                  uVar69 = NEON_cmhi(0x1a0000001a,
                                     CONCAT44(iVar58 + 0xbf,auVar52._0_4_ + 0xbf) & 0xff000000ff,4);
                  uVar68 = NEON_cmhi(0x1a0000001a,
                                     CONCAT44(iVar23 + 0xbf,auVar57._0_4_ + 0xbf) & 0xff000000ff,4);
                  uVar70 = NEON_cmhi(0xa0000000a,
                                     CONCAT44(iVar58 + 0xd0,auVar52._0_4_ + 0xd0) & 0xff000000ff,4);
                  uVar53 = NEON_cmhi(0x1a0000001a,
                                     CONCAT44(iVar65 + 0xbf,iVar26 + 0xbf) & 0xff000000ff,4);
                  uVar67 = NEON_cmhi(0xa0000000a,
                                     CONCAT44(iVar65 + 0xd0,iVar26 + 0xd0) & 0xff000000ff,4);
                  uVar69 = NEON_bsl(uVar69,CONCAT44(iVar58,auVar52._0_4_) | 0x2000000020,
                                    auVar52._0_8_,1);
                  uVar75 = NEON_cmhi(0xa0000000a,
                                     CONCAT44(iVar23 + 0xd0,auVar57._0_4_ + 0xd0) & 0xff000000ff,4);
                  uVar68 = NEON_bsl(uVar68,CONCAT44(iVar23,auVar57._0_4_) | 0x2000000020,
                                    auVar57._0_8_,1);
                  uVar31 = NEON_bif(auVar52._0_8_,uVar69,uVar70,1);
                  uVar59 = NEON_bif(auVar57._0_8_,uVar68,uVar75,1);
                  uVar53 = NEON_bsl(uVar53,CONCAT44(iVar65,iVar26) | 0x2000000020,uVar61,1);
                  uVar68 = NEON_bsl(uVar70,DAT_00108d78,DAT_00108d80,1);
                  uVar69 = NEON_bit(DAT_00108d80,DAT_00108d78,uVar75,1);
                  uVar62 = NEON_bit(uVar53,uVar61,uVar67,1);
                  uVar25 = (ulong)(CONCAT14(~(byte)(uVar67 >> 0x20),(uint)(byte)~(byte)uVar67) &
                                  0xffffffffa9) & 0xffffffa9ffffffff;
                  uVar61 = NEON_ushl(CONCAT44((int)((ulong)uVar69 >> 0x20) +
                                              (int)((uVar59 & 0xff000000ff) >> 0x20),
                                              (int)uVar69 + (int)(uVar59 & 0xff000000ff)),
                                     DAT_00108d98,4);
                  uVar53 = NEON_ushl(CONCAT44((int)((ulong)uVar68 >> 0x20) +
                                              (int)((uVar31 & 0xff000000ff) >> 0x20),
                                              (int)uVar68 + (int)(uVar31 & 0xff000000ff)),
                                     DAT_00108d88,4);
                  uVar17 = (int)((ulong)uVar61 >> 0x20) + (int)uVar61 | 0xff000000;
                  uVar22 = (int)((ulong)uVar53 >> 0x20) + (int)uVar53 & 0xff00;
                  uVar21 = uVar17 | (uint)(byte)((byte)((uVar67 & 0xffffffd0ffffffd0) >> 0x20) |
                                                (byte)(uVar25 >> 0x20)) +
                                    (int)((uVar62 & 0xff000000ff) >> 0x20) +
                                    ((uint)(byte)((byte)(uVar67 & 0xffffffd0ffffffd0) | (byte)uVar25
                                                 ) + (int)(uVar62 & 0xff000000ff)) * 0x10;
                }
                else {
                  uVar21 = 0;
                  uVar17 = 0;
                  if (local_1b8 != 8) goto LAB_00122404;
                  auVar47[0] = pCVar29[2];
                  auVar47._1_15_ = auVar45._1_15_;
                  auVar48._0_4_ = auVar47._0_4_;
                  auVar48[4] = pCVar29[3];
                  auVar48._5_11_ = auVar46._5_11_;
                  iVar23 = (int)CONCAT71((int7)((ulong)local_d0 >> 8),pCVar29[4]);
                  uVar53 = CONCAT35((int3)((ulong)local_d0 >> 0x28),CONCAT14(pCVar29[5],iVar23));
                  iVar65 = (int)CONCAT71(uVar63,*pCVar29);
                  uVar69 = CONCAT35(uVar66,CONCAT14(pCVar29[1],iVar65));
                  iVar58 = auVar48._4_4_;
                  iVar26 = (int)((ulong)uVar53 >> 0x20);
                  iVar64 = (int)((ulong)uVar69 >> 0x20);
                  uVar68 = NEON_cmhi(0x1a0000001a,
                                     CONCAT44(iVar58 + 0xbf,auVar48._0_4_ + 0xbf) & 0xff000000ff,4);
                  uVar70 = NEON_cmhi(0x1a0000001a,
                                     CONCAT44(iVar26 + 0xbf,iVar23 + 0xbf) & 0xff000000ff,4);
                  uVar61 = NEON_cmhi(0x1a0000001a,
                                     CONCAT44(iVar64 + 0xbf,iVar65 + 0xbf) & 0xff000000ff,4);
                  uVar75 = NEON_cmhi(0xa0000000a,
                                     CONCAT44(iVar58 + 0xd0,auVar48._0_4_ + 0xd0) & 0xff000000ff,4);
                  uVar67 = NEON_cmhi(0xa0000000a,
                                     CONCAT44(iVar64 + 0xd0,iVar65 + 0xd0) & 0xff000000ff,4);
                  uVar68 = NEON_bsl(uVar68,CONCAT44(iVar58,auVar48._0_4_) | 0x2000000020,
                                    auVar48._0_8_,1);
                  uVar70 = NEON_bsl(uVar70,CONCAT44(iVar26,iVar23) | 0x2000000020,uVar53,1);
                  uVar76 = NEON_cmhi(0xa0000000a,
                                     CONCAT44(iVar26 + 0xd0,iVar23 + 0xd0) & 0xff000000ff,4);
                  uVar31 = NEON_bif(auVar48._0_8_,uVar68,uVar75,1);
                  uVar59 = NEON_bif(uVar53,uVar70,uVar76,1);
                  uVar53 = NEON_bsl(uVar61,CONCAT44(iVar64,iVar65) | 0x2000000020,uVar69,1);
                  uVar68 = NEON_bsl(uVar75,DAT_00108d78,DAT_00108d80,1);
                  uVar61 = NEON_bit(DAT_00108d80,DAT_00108d78,uVar76,1);
                  uVar62 = NEON_bit(uVar53,uVar69,uVar67,1);
                  uVar25 = (ulong)CONCAT14(~(byte)(uVar67 >> 0x20),(uint)(byte)~(byte)uVar67) &
                           0xffffffa9ffffffa9;
                  CVar3 = pCVar29[7];
                  iVar58 = 0;
                  if (9 < (byte)pCVar29[6] - 0x30) {
                    iVar58 = 9;
                  }
                  uVar53 = NEON_ushl(CONCAT44((int)((ulong)uVar68 >> 0x20) +
                                              (int)((uVar31 & 0xff000000ff) >> 0x20),
                                              (int)uVar68 + (int)(uVar31 & 0xff000000ff)),
                                     DAT_00108d88,4);
                  uVar61 = NEON_ushl(CONCAT44((int)((ulong)uVar61 >> 0x20) +
                                              (int)((uVar59 & 0xff000000ff) >> 0x20),
                                              (int)uVar61 + (int)(uVar59 & 0xff000000ff)),
                                     DAT_00108d98,4);
                  uVar21 = (uint)(byte)CVar3;
                  uVar17 = uVar21 | 0x20;
                  if (0x19 < (byte)CVar3 - 0x41) {
                    uVar17 = uVar21;
                  }
                  bVar14 = 9 < (byte)CVar3 - 0x30;
                  if (bVar14) {
                    uVar21 = uVar17;
                  }
                  iVar23 = 0xd0;
                  if (bVar14) {
                    iVar23 = 0xa9;
                  }
                  uVar17 = (iVar23 + uVar21) * 0x1000000 +
                           (iVar58 + (uint)(byte)pCVar29[6]) * 0x10000000;
                  uVar21 = (uint)(byte)((byte)((uVar67 & 0xffffffd0ffffffd0) >> 0x20) |
                                       (byte)(uVar25 >> 0x20)) +
                           (int)((uVar62 & 0xff000000ff) >> 0x20) +
                           ((uint)(byte)((byte)(uVar67 & 0xffffffd0ffffffd0) | (byte)uVar25) +
                           (int)(uVar62 & 0xff000000ff)) * 0x10;
                  uVar22 = (int)((ulong)uVar53 >> 0x20) + (int)uVar53 & 0xff00U |
                           (int)((ulong)uVar61 >> 0x20) + (int)uVar61 & 0xff0000U;
                }
                uVar17 = uVar17 | uVar22;
              }
              bVar14 = true;
            }
          }
          else {
            uVar21 = 0;
            uVar17 = 0;
          }
LAB_00122404:
          uVar17 = uVar17 | uVar21 & 0xff;
          local_1b8 = uVar18;
LAB_001239f8:
          uVar18 = local_1b8;
          if (bVar14) {
            uVar31 = (ulong)uVar17 | 0x200000000;
LAB_00123ac0:
            local_1b8 = uVar18;
            uVar18 = uVar31 & 0x300000000;
            local_1c8 = (byte *)CONCAT44(local_1c8._4_4_,(int)local_1c8);
            goto LAB_00123a28;
          }
        }
        else if (iVar58 == 8) {
          if (local_1b8 == 0) goto LAB_001239e4;
          uVar17 = 0x811c9dc5;
          uVar21 = 0x811c9dc5;
          uVar31 = local_1b8;
          pCVar19 = pCVar29;
          do {
            CVar2 = *pCVar19;
            CVar3 = (ContextContainer)((byte)CVar2 | 0x20);
            if (0x19 < (byte)CVar2 - 0x41) {
              CVar3 = CVar2;
            }
            uVar31 = uVar31 - 1;
            uVar21 = (uVar21 ^ (int)(char)CVar3) * 0x1000193;
            pCVar19 = pCVar19 + 1;
          } while (uVar31 != 0);
          uVar31 = 0x10000001b;
          if (uVar21 == 0x96285d7a) {
            uVar31 = 0x10000005b;
          }
          else if (uVar21 != 0xca04efe0) {
            if (uVar21 != 0x2b251de3) {
              do {
                CVar2 = *pCVar29;
                CVar3 = (ContextContainer)((byte)CVar2 | 0x20);
                if (0x19 < (byte)CVar2 - 0x41) {
                  CVar3 = CVar2;
                }
                local_1b8 = local_1b8 - 1;
                uVar17 = (uVar17 ^ (int)(char)CVar3) * 0x1000193;
                pCVar29 = pCVar29 + 1;
              } while (local_1b8 != 0);
              if ((int)uVar17 < 0x817f94d) {
                if ((int)uVar17 < -0x4715782d) {
                  if ((int)uVar17 < -0x6308cb68) {
                    if ((int)uVar17 < -0x6fb63289) {
                      if ((int)uVar17 < -0x78580dab) {
                        if ((int)uVar17 < -0x7ca32c34) {
                          if (uVar17 == 0x82e33fb4) {
                            uVar17 = 0xfff0fa00;
                            local_1b8 = uVar18;
                            goto LAB_00123fc4;
                          }
                          if (uVar17 != 0x82fbf5cd) goto LAB_001239e4;
                          uVar21 = 0;
                          uVar17 = 0xffff0000;
                          bVar14 = true;
                          local_1b8 = uVar18;
                        }
                        else {
                          if (uVar17 != 0x835cd3cc) {
                            if (uVar17 == 0x848317f2) {
                              uVar17 = 64000;
                              uVar21 = 0xff;
                              goto LAB_00123db0;
                            }
                            goto LAB_001239e4;
                          }
                          uVar21 = 0x80;
LAB_00123d98:
                          uVar17 = 0x8000;
                          local_1b8 = uVar18;
LAB_00123d9c:
                          bVar14 = true;
                          uVar17 = uVar17 | 0xff000000;
                        }
                      }
                      else if ((int)uVar17 < -0x744d546a) {
                        if (uVar17 == 0x87a7f255) {
LAB_00123ac8:
                          uVar21 = 0x2f;
                          bVar14 = true;
                          uVar17 = 0xff4f4f00;
                          local_1b8 = uVar18;
                        }
                        else {
                          if (uVar17 != 0x8989e5fe) goto LAB_001239e4;
                          uVar17 = 0xffdec400;
LAB_001237b4:
                          uVar21 = 0xb0;
                          bVar14 = true;
                          local_1b8 = uVar18;
                        }
                      }
                      else if (uVar17 == 0x8bb2ab96) {
                        uVar21 = 0x7c;
                        bVar14 = true;
                        uVar17 = 0xff00fc00;
                        local_1b8 = uVar18;
                      }
                      else {
                        if (uVar17 == 0x8c361729) {
                          uVar17 = 0xffd5ef00;
                          local_1b8 = uVar18;
                          goto LAB_00123fc4;
                        }
                        if (uVar17 != 0x8e1fedcc) goto LAB_001239e4;
                        uVar21 = 0x98;
                        bVar14 = true;
                        uVar17 = 0xff98fb00;
                        local_1b8 = uVar18;
                      }
                    }
                    else if ((int)uVar17 < -0x681f67a6) {
                      if ((int)uVar17 < -0x6c17ff8a) {
                        if (uVar17 == 0x9049cd77) {
                          uVar17 = 0x6b00;
                          uVar21 = 0x55;
                          local_1b8 = uVar18;
                          goto LAB_00123d68;
                        }
                        if (uVar17 != 0x907d3a11) goto LAB_001239e4;
                        uVar21 = 0xdb;
                        bVar14 = true;
                        uVar17 = 0xff937000;
                        local_1b8 = uVar18;
                      }
                      else {
                        if (uVar17 == 0x93e80076) {
                          uVar17 = 0x5a00;
                          uVar21 = 0x6a;
                          local_1b8 = uVar18;
                          goto LAB_00123dc4;
                        }
                        if (uVar17 != 0x952635e8) goto LAB_001239e4;
                        uVar21 = 0xde;
                        bVar14 = true;
                        uVar17 = 0xff87b800;
                        local_1b8 = uVar18;
                      }
                    }
                    else if ((int)uVar17 < -0x6591fd01) {
                      if (uVar17 == 0x97e0985a) {
                        uVar17 = 0xff004500;
                        local_1b8 = uVar18;
                        goto LAB_00123fc4;
                      }
                      if (uVar17 != 0x9807620d) goto LAB_001239e4;
                      uVar17 = 0xff5c5c00;
LAB_00123814:
                      uVar21 = 0xcd;
                      bVar14 = true;
                      local_1b8 = uVar18;
                    }
                    else if (uVar17 == 0x9a6e02ff) {
                      uVar17 = 0xff800000;
LAB_0012402c:
                      uVar21 = 0x80;
                      bVar14 = true;
                      local_1b8 = uVar18;
                    }
                    else {
                      if (uVar17 != 0x9b55348d) {
                        if (uVar17 == 0x9c3f19c6) {
                          uVar17 = 0xee00;
                          uVar21 = 0x90;
                          local_1b8 = uVar18;
                          goto LAB_00122c14;
                        }
                        goto LAB_001239e4;
                      }
                      bVar14 = true;
                      uVar17 = 0xffe6f500;
                      uVar21 = 0xfd;
                      local_1b8 = uVar18;
                    }
                  }
                  else if ((int)uVar17 < -0x55c1c5e1) {
                    if ((int)uVar17 < -0x5c028161) {
                      if ((int)uVar17 < -0x5f000e2f) {
                        if (uVar17 == 0x9cf73498) {
                          uVar17 = 0xff8cb400;
                          goto LAB_00123e98;
                        }
                        if (uVar17 == 0x9dea06b6) {
                          uVar21 = 0xff;
                          goto LAB_001233c4;
                        }
                      }
                      else {
                        if (uVar17 == 0xa0fff1d1) {
                          uVar21 = 0;
                          uVar17 = 0xff800000;
                          bVar14 = true;
                          local_1b8 = uVar18;
                          goto LAB_001239f0;
                        }
                        if (uVar17 == 0xa124f36b) {
                          uVar17 = 0xffe0ff00;
                          local_1b8 = uVar18;
                          goto LAB_00123fc4;
                        }
                      }
                      goto LAB_001239e4;
                    }
                    if ((int)uVar17 < -0x57abc477) {
                      if (uVar17 == 0xa3fd7e9f) {
                        uVar21 = 0;
                        local_1b8 = uVar18;
                        goto LAB_00123f40;
                      }
                      if (uVar17 != 0xa60f29ba) goto LAB_001239e4;
                      uVar21 = 0x99;
                      bVar14 = true;
                      uVar17 = 0xffcc3200;
                      local_1b8 = uVar18;
                    }
                    else if (uVar17 == 0xa8543b89) {
                      uVar17 = 0xff20a500;
LAB_00123e74:
                      uVar21 = 0xda;
                      bVar14 = true;
                      local_1b8 = uVar18;
                    }
                    else {
                      if (uVar17 != 0xa9362f24) {
                        if (uVar17 == 0xa9ddfd93) {
                          uVar17 = 0xffcdfa00;
                          local_1b8 = uVar18;
                          goto LAB_00123fc4;
                        }
                        goto LAB_001239e4;
                      }
                      uVar21 = 0x93;
                      bVar14 = true;
                      uVar17 = 0xffdb7000;
                      local_1b8 = uVar18;
                    }
                  }
                  else if ((int)uVar17 < -0x4d08d6c1) {
                    if ((int)uVar17 < -0x5277da49) {
                      if (uVar17 == 0xaa3e3a1f) {
                        uVar17 = 0xfff5f000;
                        local_1b8 = uVar18;
                        goto LAB_00123cd4;
                      }
                      if (uVar17 == 0xace6ba3a) {
                        uVar17 = 0xffd67000;
                        goto LAB_00123e74;
                      }
                      goto LAB_001239e4;
                    }
                    if (uVar17 == 0xad8825b7) {
                      uVar21 = 0x2e;
                      bVar14 = true;
                      uVar17 = 0xff578b00;
                      local_1b8 = uVar18;
                    }
                    else {
                      if (uVar17 != 0xafe34731) {
                        iVar58 = -0x4d6fe65a;
                        goto LAB_001236f0;
                      }
                      uVar21 = 0;
                      uVar17 = 0;
                      bVar14 = true;
                      local_1b8 = uVar18;
                    }
                  }
                  else if ((int)uVar17 < -0x4aab06e0) {
                    if (uVar17 == 0xb2f7293f) {
                      uVar21 = 0xfa;
                      bVar14 = true;
                      uVar17 = 0xffd2fa00;
                      local_1b8 = uVar18;
                    }
                    else {
                      if (uVar17 != 0xb351bdbd) goto LAB_001239e4;
                      uVar21 = 0x6b;
                      bVar14 = true;
                      uVar17 = 0xff238e00;
                      local_1b8 = uVar18;
                    }
                  }
                  else if (uVar17 == 0xb554f920) {
                    uVar21 = 0xc0;
                    bVar14 = true;
                    uVar17 = 0xffc0c000;
                    local_1b8 = uVar18;
                  }
                  else {
                    if (uVar17 != 0xb6adb06b) {
                      if (uVar17 == 0xb6b77908) {
                        uVar21 = 0x9a;
                        goto LAB_00123108;
                      }
                      goto LAB_001239e4;
                    }
                    uVar21 = 0xdd;
                    bVar14 = true;
                    uVar17 = 0xffdda000;
                    local_1b8 = uVar18;
                  }
                }
                else {
                  if ((int)uVar17 < -0x1dbc198f) {
                    if ((int)uVar17 < -0x336e1036) {
                      if (-0x40420b95 < (int)uVar17) {
                        if ((int)uVar17 < -0x3c8f41c5) {
                          if (uVar17 != 0xbfbdf46c) {
                            if (uVar17 == 0xc17f9b3a) {
                              uVar17 = 0xffc4e400;
                              local_1b8 = uVar18;
                              goto LAB_00123fc4;
                            }
                            goto LAB_001239e4;
                          }
                          uVar21 = 0x41;
                          bVar14 = true;
                          uVar17 = 0xffe16900;
                          local_1b8 = uVar18;
                        }
                        else if (uVar17 == 0xc370be3b) {
                          uVar17 = 0xd800;
                          uVar21 = 0xad;
LAB_00123d14:
                          bVar14 = true;
                          uVar17 = uVar17 | 0xffe60000;
                          local_1b8 = uVar18;
                        }
                        else {
                          if (uVar17 == 0xcbdc3f67) {
                            uVar17 = 0xffccd100;
                            goto LAB_00123fd8;
                          }
                          if (uVar17 != 0xcc8e0751) goto LAB_001239e4;
                          uVar21 = 0x19;
                          bVar14 = true;
                          uVar17 = 0xff701900;
                          local_1b8 = uVar18;
                        }
                        goto LAB_001239f0;
                      }
                      if ((int)uVar17 < -0x46d74c12) {
                        if (uVar17 == 0xb8ea87d3) {
                          uVar17 = 0x8b00;
                          uVar21 = 0x22;
                          goto LAB_00123ecc;
                        }
                        if (uVar17 == 0xb8f04003) {
                          uVar17 = 0xff3f8500;
                          goto LAB_00123814;
                        }
                      }
                      else {
                        if (uVar17 == 0xb928b3ee) {
                          uVar17 = 0xe600;
                          uVar21 = 0xe6;
LAB_00123db0:
                          bVar14 = true;
                          uVar17 = uVar17 | 0xfffa0000;
                          local_1b8 = uVar18;
                          goto LAB_001239f0;
                        }
                        iVar58 = -0x45654c66;
LAB_001236f0:
                        if (uVar17 - iVar58 == 0) {
                          uVar21 = 0x80;
                          local_1b8 = uVar18;
                          goto LAB_00123f40;
                        }
                      }
                    }
                    else if ((int)uVar17 < -0x2a6e5cb4) {
                      if (-0x3182a947 < (int)uVar17) {
                        if (uVar17 == 0xce7d56ba) {
                          uVar21 = 0;
                          bVar14 = true;
                          uVar17 = 0xff8b8b00;
                          local_1b8 = uVar18;
                        }
                        else {
                          if (uVar17 != 0xd57e7bfd) goto LAB_001239e4;
                          uVar17 = 0xfffff800;
                          uVar21 = 0xf8;
                          bVar14 = true;
                          local_1b8 = uVar18;
                        }
                        goto LAB_001239f0;
                      }
                      if (uVar17 == 0xcc91efca) {
                        uVar17 = 0xee00;
                        uVar21 = 0xaf;
                        goto LAB_00123d7c;
                      }
                      if (uVar17 == 0xcd4bddcf) {
                        uVar17 = 0xffd7eb00;
                        local_1b8 = uVar18;
                        goto LAB_00123ba4;
                      }
                    }
                    else {
                      if (-0x21fdf89b < (int)uVar17) {
                        if (uVar17 == 0xde020766) {
                          uVar17 = 0xffffff00;
                          local_1b8 = uVar18;
                        }
                        else {
                          if (uVar17 == 0xe15092fb) {
                            uVar17 = 0xffdcdc00;
                            goto LAB_00124008;
                          }
                          if (uVar17 != 0xe1858adc) goto LAB_001239e4;
                          uVar17 = 0xffe1e400;
                          local_1b8 = uVar18;
                        }
                        goto LAB_00123fc4;
                      }
                      if (uVar17 == 0xd591a34c) {
                        uVar21 = 0xff;
                        bVar14 = true;
                        uVar17 = 0xfff5f000;
                        local_1b8 = uVar18;
                        goto LAB_001239f0;
                      }
                      if (uVar17 == 0xd6e414eb) {
                        uVar17 = 0xf000;
                        uVar21 = 0xfa;
                        goto LAB_00123d14;
                      }
                    }
                    goto LAB_001239e4;
                  }
                  if ((int)uVar17 < -0x72e0a5a) {
                    if ((int)uVar17 < -0x142760a4) {
                      if (-0x17ff7b67 < (int)uVar17) {
                        if (uVar17 == 0xe800849a) {
                          uVar17 = 0xff134500;
                          goto LAB_00123f54;
                        }
                        if (uVar17 == 0xe92d961d) {
                          uVar17 = 0xffb9da00;
                          local_1b8 = uVar18;
                          goto LAB_00123fc4;
                        }
                        goto LAB_001239e4;
                      }
                      if (uVar17 == 0xe243e671) {
                        uVar21 = 0x20;
                        bVar14 = true;
                        uVar17 = 0xffaab200;
                        local_1b8 = uVar18;
                      }
                      else {
                        if (uVar17 != 0xe707aada) goto LAB_001239e4;
                        uVar21 = 0;
                        bVar14 = true;
                        uVar17 = 0xffd1ce00;
                        local_1b8 = uVar18;
                      }
                    }
                    else if ((int)uVar17 < -0xf9f466c) {
                      if (uVar17 != 0xebd89f5c) {
                        if (uVar17 == 0xec66d793) {
                          uVar17 = 0xff00d700;
                          local_1b8 = uVar18;
                          goto LAB_00123fc4;
                        }
                        goto LAB_001239e4;
                      }
                      uVar17 = 0xff000000;
LAB_00123f54:
                      uVar21 = 0x8b;
                      bVar14 = true;
                      local_1b8 = uVar18;
                    }
                    else if (uVar17 == 0xf060b994) {
                      uVar17 = 0xffffff00;
                      uVar21 = 0xe0;
                      bVar14 = true;
                      local_1b8 = uVar18;
                    }
                    else if (uVar17 == 0xf3aa9557) {
                      uVar21 = 0x7f;
                      bVar14 = true;
                      uVar17 = 0xffd4ff00;
                      local_1b8 = uVar18;
                    }
                    else {
                      if (uVar17 != 0xf79b7417) goto LAB_001239e4;
                      uVar21 = 0;
                      bVar14 = true;
                      uVar17 = 0xff7fff00;
                      local_1b8 = uVar18;
                    }
                  }
                  else {
                    if ((int)uVar17 < 0x42602ee) {
                      if ((int)uVar17 < 0x11decbc) {
                        if (uVar17 == 0xf8d1f5a6) {
                          uVar17 = 0x8f00;
                          uVar21 = 0xbc;
LAB_00123f78:
                          bVar14 = true;
                          uVar17 = uVar17 | 0xff8f0000;
                          local_1b8 = uVar18;
                          goto LAB_001239f0;
                        }
                        if (uVar17 == 0xfdec2a8e) {
                          uVar21 = 0;
                          uVar17 = 0xffcd0000;
                          bVar14 = true;
                          local_1b8 = uVar18;
                          goto LAB_001239f0;
                        }
                      }
                      else {
                        if (uVar17 == 0x11decbc) {
                          uVar21 = 0;
                          goto LAB_00123d98;
                        }
                        if (uVar17 == 0x340e137) {
                          uVar17 = 0xbc00;
                          uVar21 = 0x8f;
                          goto LAB_00123f78;
                        }
                        if (uVar17 == 0x3e1343a) goto LAB_00123af0;
                      }
                      goto LAB_001239e4;
                    }
                    if ((int)uVar17 < 0x5b72af6) {
                      if (uVar17 != 0x42602ee) {
                        if (uVar17 == 0x43cb490) {
                          uVar17 = 0xffb3de00;
                          local_1b8 = uVar18;
                          goto LAB_00123cd8;
                        }
                        goto LAB_001239e4;
                      }
                      uVar17 = 0xff3c1400;
LAB_00124008:
                      uVar21 = 0xdc;
                      bVar14 = true;
                      local_1b8 = uVar18;
                    }
                    else if (uVar17 == 0x5b72af6) {
                      uVar17 = 0xff8b3d00;
LAB_00123fd8:
                      uVar21 = 0x48;
                      bVar14 = true;
                      local_1b8 = uVar18;
                    }
                    else {
                      if (uVar17 == 0x5bf6449) {
                        uVar21 = 0xff;
                      }
                      else {
                        if (uVar17 != 0x7e34bbc) goto LAB_001239e4;
                        uVar21 = 0;
                      }
LAB_00123fac:
                      bVar14 = true;
                      uVar17 = 0xff00ff00;
                      local_1b8 = uVar18;
                    }
                  }
                }
              }
              else {
                local_1b8 = uVar18;
                if ((int)uVar17 < 0x419e5a8a) {
LAB_001226c4:
                  uVar18 = local_1b8;
                  if ((int)uVar17 < 0x225e036d) {
                    if ((int)uVar17 < 0x16ee77b1) {
                      if ((int)uVar17 < 0xba64a14) {
                        if ((int)uVar17 < 0x920e031) {
                          if (uVar17 == 0x817f94d) {
                            uVar21 = 0;
LAB_00123f88:
                            bVar14 = true;
                            uVar17 = 0xff8b0000;
                          }
                          else {
                            if (uVar17 != 0x8a71a94) goto LAB_001239e4;
                            uVar21 = 0xd8;
                            bVar14 = true;
                            uVar17 = 0xffd8bf00;
                          }
                        }
                        else if (uVar17 == 0x920e031) {
                          uVar17 = 0xfffafa00;
LAB_00123cd4:
                          uVar17 = uVar17 | 0x500;
LAB_00123cd8:
                          uVar21 = 0xf5;
                          bVar14 = true;
                        }
                        else {
                          if (uVar17 != 0x9357b30) goto LAB_001239e4;
                          uVar17 = 0xffface00;
LAB_0012366c:
                          uVar21 = 0x87;
                          bVar14 = true;
                        }
                      }
                      else if ((int)uVar17 < 0xd8329fc) {
                        if (uVar17 != 0xba64a14) {
                          if (uVar17 == 0xc376f3c) {
                            uVar17 = 0x6400;
                            uVar21 = 0;
                            goto LAB_00123d9c;
                          }
                          goto LAB_001239e4;
                        }
                        uVar21 = 0x3c;
                        bVar14 = true;
                        uVar17 = 0xff71b300;
                      }
                      else if (uVar17 == 0xd8329fc) {
                        uVar17 = 0xff00;
                        uVar21 = 0xad;
LAB_00123d68:
                        bVar14 = true;
                        uVar17 = uVar17 | 0xff2f0000;
                      }
                      else {
                        if ((uVar17 != 0xde1b599) && (uVar17 != 0x15d8c7d5)) goto LAB_001239e4;
                        uVar17 = 0x8000;
                        uVar21 = 0x70;
LAB_00122c14:
                        bVar14 = true;
                        uVar17 = uVar17 | 0xff900000;
                      }
                    }
                    else if ((int)uVar17 < 0x1bdaa4b0) {
                      if ((int)uVar17 < 0x1a0e44ad) {
                        if (uVar17 != 0x16ee77b1) {
                          if (uVar17 == 0x17c1a698) {
                            uVar17 = 0xffb46900;
                            goto LAB_00123fc4;
                          }
                          goto LAB_001239e4;
                        }
                        uVar17 = 0xeb00;
                        uVar21 = 0xff;
LAB_00123dc4:
                        bVar14 = true;
                        uVar17 = uVar17 | 0xffcd0000;
                      }
                      else {
                        if (uVar17 == 0x1a0e44ad) {
                          uVar17 = 0x5500;
                          uVar21 = 0xba;
                          goto LAB_00123cec;
                        }
                        if (uVar17 != 0x1a236609) goto LAB_001239e4;
                        uVar21 = 0xb8;
                        bVar14 = true;
                        uVar17 = 0xff0b8600;
                      }
                    }
                    else if ((int)uVar17 < 0x1e17dfe8) {
                      if (uVar17 != 0x1bdaa4b0) {
                        if (uVar17 == 0x1c96ce4e) {
                          uVar17 = 0xffebce00;
                          goto LAB_0012366c;
                        }
                        goto LAB_001239e4;
                      }
                      uVar21 = 199;
                      bVar14 = true;
                      uVar17 = 0xff851500;
                    }
                    else {
                      if (uVar17 != 0x1e17dfe8) {
                        if (uVar17 == 0x1e8db068) {
                          uVar21 = 0x8b;
                          goto LAB_00123f88;
                        }
                        if (uVar17 == 0x1ed7a4ea) {
                          uVar17 = 0xffdcf800;
                          goto LAB_00123fc4;
                        }
                        goto LAB_001239e4;
                      }
                      uVar17 = 0xff993300;
LAB_00123c24:
                      uVar21 = 0x66;
                      bVar14 = true;
                    }
                  }
                  else if ((int)uVar17 < 0x32db86df) {
                    if ((int)uVar17 < 0x29f41e26) {
                      if ((int)uVar17 < 0x23b55208) {
                        if (uVar17 == 0x225e036d) {
                          uVar17 = 0xffcbc000;
                          goto LAB_00123fc4;
                        }
                        if (uVar17 == 0x22d8ff1c) {
                          uVar17 = 0xffaacd00;
                          goto LAB_00123c24;
                        }
                      }
                      else {
                        if (uVar17 == 0x23b55208) {
LAB_0012386c:
                          uVar17 = 0xd300;
                          uVar21 = 0xd3;
LAB_00123cec:
                          bVar14 = true;
                          uVar17 = uVar17 | 0xffd30000;
                          goto LAB_001239f0;
                        }
                        if (uVar17 == 0x262562c3) {
                          uVar17 = 0xfffff800;
                          goto LAB_00123b48;
                        }
                      }
                      goto LAB_001239e4;
                    }
                    if ((int)uVar17 < 0x30be372f) {
                      if (uVar17 != 0x29f41e26) {
                        if (uVar17 == 0x2bbe58fc) goto LAB_0012386c;
                        goto LAB_001239e4;
                      }
LAB_00123af8:
                      uVar21 = 0x69;
                      bVar14 = true;
                      uVar17 = 0xff696900;
                    }
                    else if (uVar17 == 0x30be372f) {
                      uVar21 = 0xa5;
                      bVar14 = true;
                      uVar17 = 0xff2a2a00;
                    }
                    else {
                      if (uVar17 == 0x31feb81a) goto LAB_00123af8;
                      if (uVar17 != 0x3227246b) goto LAB_001239e4;
                      uVar21 = 0xa0;
                      bVar14 = true;
                      uVar17 = 0xff2d5200;
                    }
                  }
                  else if ((int)uVar17 < 0x39b3175f) {
                    if ((int)uVar17 < 0x3758c2e0) {
                      if (uVar17 != 0x32db86df) {
                        if (uVar17 != 0x35a2e5c3) goto LAB_001239e4;
                        uVar17 = 0xff476300;
                        goto LAB_00123fc4;
                      }
                      uVar21 = 0xe9;
                      bVar14 = true;
                      uVar17 = 0xff7a9600;
                    }
                    else if (uVar17 == 0x3758c2e0) {
                      uVar17 = 0xffffff00;
LAB_00123b48:
                      uVar21 = 0xf0;
                      bVar14 = true;
                    }
                    else if (uVar17 == 0x37ac1d26) {
LAB_00123adc:
                      uVar21 = 0xa9;
                      bVar14 = true;
                      uVar17 = 0xffa9a900;
                    }
                    else {
                      if (uVar17 != 0x38540573) goto LAB_001239e4;
                      uVar21 = 0xf5;
                      bVar14 = true;
                      uVar17 = 0xffdcf500;
                    }
                  }
                  else {
                    if (0x3edce36a < (int)uVar17) {
                      if (uVar17 == 0x3edce36b) {
                        uVar17 = 0xff008c00;
                      }
                      else {
                        if (uVar17 == 0x3fb6b71a) goto LAB_00123adc;
                        if (uVar17 != 0x40f480dc) goto LAB_001239e4;
                        uVar17 = 0xff000000;
                      }
                      goto LAB_00123fc4;
                    }
                    if (uVar17 != 0x39b3175f) {
                      uVar21 = 0x3bb34073;
                      goto LAB_00123890;
                    }
                    uVar17 = 0xff728000;
LAB_00123ba4:
                    uVar21 = 0xfa;
                    bVar14 = true;
                  }
                }
                else if ((int)uVar17 < 0x6021b659) {
                  if ((int)uVar17 < 0x4c7a1b8f) {
                    if ((int)uVar17 < 0x45658504) {
                      if ((int)uVar17 < 0x429bb099) {
                        if (uVar17 == 0x419e5a8a) {
                          uVar21 = 0x8a;
                          bVar14 = true;
                          uVar17 = 0xffe22b00;
                        }
                        else {
                          uVar21 = 0x42374f95;
LAB_00123340:
                          if (uVar17 != uVar21) goto LAB_001239e4;
                          uVar21 = 0;
                          uVar17 = 0xffffff00;
                          bVar14 = true;
                        }
                      }
                      else if (uVar17 == 0x429bb099) {
                        uVar17 = 0xff1e6900;
LAB_00123e98:
                        uVar21 = 0xd2;
                        bVar14 = true;
                        local_1b8 = uVar18;
                      }
                      else {
                        uVar21 = 0x43bdda67;
LAB_00123890:
                        uVar18 = local_1b8;
                        if (uVar17 != uVar21) goto LAB_001239e4;
                        uVar21 = 0x77;
                        bVar14 = true;
                        uVar17 = 0xff998800;
                      }
                    }
                    else {
                      if ((int)uVar17 < 0x46aadbde) {
                        if (uVar17 == 0x45658504) {
                          uVar17 = 0xffb5e400;
                        }
                        else {
                          if (uVar17 != 0x45b473eb) goto LAB_001239e4;
                          uVar17 = 0xff00a500;
                        }
                      }
                      else {
                        if (uVar17 != 0x46aadbde) {
                          if (uVar17 != 0x480fb75e) {
                            uVar21 = 0x4961533a;
                            goto LAB_00123340;
                          }
                          uVar21 = 0x5f;
                          bVar14 = true;
                          uVar17 = 0xffa09e00;
                          goto LAB_001239f0;
                        }
                        uVar17 = 0xffeef500;
                      }
LAB_00123fc4:
                      uVar21 = 0xff;
                      bVar14 = true;
                    }
                  }
                  else if ((int)uVar17 < 0x54408ac8) {
                    if ((int)uVar17 < 0x4efa960c) {
                      if (uVar17 == 0x4c7a1b8f) {
                        uVar21 = 0xff;
                        bVar14 = true;
                        uVar17 = 0xffadde00;
                      }
                      else {
                        if (uVar17 != 0x4d77512b) goto LAB_001239e4;
                        uVar21 = 0x4b;
                        bVar14 = true;
                        uVar17 = 0xff820000;
                      }
                    }
                    else if (uVar17 == 0x4efa960c) {
LAB_00123b30:
                      uVar21 = 0xf0;
LAB_00123f40:
                      bVar14 = true;
                      uVar17 = 0xff808000;
                    }
                    else {
                      if (uVar17 == 0x4f9530f7) {
                        uVar17 = 0xff931400;
                        goto LAB_00123fc4;
                      }
                      if (uVar17 != 0x51b1437e) goto LAB_001239e4;
                      uVar17 = 0xffff9000;
                      uVar21 = 0x1e;
                      bVar14 = true;
                    }
                  }
                  else if ((int)uVar17 < 0x568f4ba4) {
                    if (uVar17 == 0x54408ac8) {
                      uVar21 = 0x46;
                      bVar14 = true;
                      uVar17 = 0xffb48200;
                    }
                    else {
                      if (uVar17 != 0x559a4808) goto LAB_001239e4;
                      uVar21 = 100;
                      bVar14 = true;
                      uVar17 = 0xffed9500;
                    }
                  }
                  else if (uVar17 == 0x568f4ba4) {
                    uVar21 = 0;
                    uVar17 = 0xff000000;
                    bVar14 = true;
                  }
                  else if (uVar17 == 0x5cabe370) {
                    uVar21 = 0;
                    uVar17 = 0xffffbf00;
                    bVar14 = true;
                  }
                  else {
                    if (uVar17 != 0x5f247ea7) goto LAB_001239e4;
                    uVar21 = 0x32;
LAB_00123108:
                    bVar14 = true;
                    uVar17 = 0xff32cd00;
                    local_1b8 = uVar18;
                  }
                }
                else if ((int)uVar17 < 0x714b1745) {
                  if ((int)uVar17 < 0x677785b6) {
                    if ((int)uVar17 < 0x63e629e8) {
                      if (uVar17 == 0x6021b659) {
                        uVar17 = 0xffaae800;
LAB_00123e54:
                        uVar21 = 0xee;
                        bVar14 = true;
                      }
                      else {
                        if (uVar17 != 0x60605b18) goto LAB_001239e4;
                        uVar21 = 0xf0;
LAB_001233c4:
                        bVar14 = true;
                        uVar17 = 0xfff0ff00;
                        local_1b8 = uVar18;
                      }
                      goto LAB_001239f0;
                    }
                    if (uVar17 == 0x63e629e8) {
LAB_00123af0:
                      uVar17 = 0xffff0000;
                      local_1b8 = uVar18;
                      goto LAB_00123fc4;
                    }
                    if (uVar17 == 0x66bc38dd) {
                      uVar21 = 0x7f;
                      goto LAB_00123fac;
                    }
                  }
                  else if ((int)uVar17 < 0x6d9b9752) {
                    if (uVar17 == 0x677785b6) {
                      uVar17 = 0x2200;
                      uVar21 = 0xb2;
LAB_00123ecc:
                      bVar14 = true;
                      uVar17 = uVar17 | 0xff220000;
                      local_1b8 = uVar18;
                      goto LAB_001239f0;
                    }
                    if (uVar17 == 0x699ce1b7) {
                      uVar17 = 0xffc1b600;
                      goto LAB_00123fc4;
                    }
                  }
                  else {
                    if (uVar17 == 0x6d9b9752) {
                      uVar17 = 0xff507f00;
                      goto LAB_00123fc4;
                    }
                    if (uVar17 == 0x6e32ccf5) {
                      uVar17 = 0xff000000;
                      goto LAB_0012402c;
                    }
                    if (uVar17 == 0x6fdd84bc) {
                      uVar17 = 0xffe6e000;
                      goto LAB_001237b4;
                    }
                  }
LAB_001239e4:
                  local_1b8 = uVar18;
                  bVar14 = false;
                  uVar21 = 0;
                  uVar17 = 0;
                }
                else if ((int)uVar17 < 0x772890e7) {
                  if ((int)uVar17 < 0x719339b9) {
                    if (uVar17 == 0x714b1745) {
                      uVar17 = 0xff7aa000;
                      goto LAB_00123fc4;
                    }
                    if (uVar17 != 0x71780822) goto LAB_001239e4;
                    uVar21 = 0;
                    bVar14 = true;
                    uVar17 = 0xff9afa00;
                  }
                  else {
                    if (uVar17 == 0x719339b9) {
                      uVar17 = 0xff8ce600;
                      goto LAB_00123b48;
                    }
                    if (uVar17 == 0x7495c772) {
                      uVar21 = 0x94;
                      bVar14 = true;
                      uVar17 = 0xffd30000;
                    }
                    else {
                      if (uVar17 != 0x7538805a) goto LAB_001239e4;
                      uVar21 = 0x40;
                      bVar14 = true;
                      uVar17 = 0xffd0e000;
                    }
                  }
                }
                else if ((int)uVar17 < 0x7b75476a) {
                  if (uVar17 != 0x772890e7) {
                    if (uVar17 == 0x7b6d57f2) {
                      uVar17 = 0xffee8200;
                      goto LAB_00123e54;
                    }
                    goto LAB_001239e4;
                  }
                  uVar17 = 0x6800;
                  uVar21 = 0x7b;
LAB_00123d7c:
                  bVar14 = true;
                  uVar17 = uVar17 | 0xffee0000;
                  local_1b8 = uVar18;
                }
                else if (uVar17 == 0x7b75476a) {
                  uVar21 = 0xf4;
                  bVar14 = true;
                  uVar17 = 0xff60a400;
                }
                else {
                  if (uVar17 != 0x7cacbc39) {
                    if (uVar17 == 0x7fb0e019) goto LAB_00123ac8;
                    goto LAB_001239e4;
                  }
                  uVar21 = 0xbd;
                  bVar14 = true;
                  uVar17 = 0xff6bb700;
                }
              }
LAB_001239f0:
              uVar17 = uVar17 | uVar21;
              goto LAB_001239f8;
            }
            uVar31 = 0x10000001c;
          }
          goto LAB_00123ac0;
        }
      }
      local_1b8 = uVar18;
      uVar18 = 0;
      uVar31 = 0;
      *(ContextContainer **)(pCVar72 + 0x28) = *(ContextContainer **)(pCVar72 + 0x78);
      *(ContextContainer **)(pCVar72 + 0x20) = *(ContextContainer **)(pCVar72 + 0x70);
      *(ContextContainer **)(pCVar72 + 0x38) = *(ContextContainer **)(pCVar72 + 0x88);
      *(ContextContainer **)(pCVar72 + 0x30) = *(ContextContainer **)(pCVar72 + 0x80);
      *(undefined8 *)(pCVar72 + 0x44) = *(undefined8 *)(pCVar72 + 0x94);
      *(undefined8 *)(pCVar72 + 0x3c) = *(undefined8 *)(pCVar72 + 0x8c);
      *(ContextContainer **)(pCVar72 + 8) = *(ContextContainer **)(pCVar72 + 0x58);
      *(ContextContainer **)pCVar72 = *(ContextContainer **)(pCVar72 + 0x50);
      *(ContextContainer **)(pCVar72 + 0x18) = SUB168(*(undefined1 (*) [16])(pCVar72 + 0x60),8);
      *(ContextContainer **)(pCVar72 + 0x10) = SUB168(*(undefined1 (*) [16])(pCVar72 + 0x60),0);
      local_1c8 = (byte *)CONCAT44(local_1c8._4_4_,(int)local_1c8);
    }
LAB_00123a28:
    if ((int)local_1c8 == 0xe) {
      FUN_00126264(&local_f0,&local_1e0);
      pCVar19 = *(ContextContainer **)(pCVar36 + 0x10);
      pCVar42 = *(ContextContainer **)(pCVar36 + 0x18);
      pCVar72 = *(ContextContainer **)(pCVar36 + 0x20);
      pCVar29 = *(ContextContainer **)(pCVar36 + 0x28);
      pCVar35 = *(ContextContainer **)pCVar36;
      ppCVar34[4] = *(ContextContainer **)(pCVar36 + 8);
      ppCVar34[3] = pCVar35;
      ppCVar34[8] = pCVar29;
      ppCVar34[7] = pCVar72;
      ppCVar34[6] = pCVar42;
      ppCVar34[5] = pCVar19;
    }
    uVar18 = uVar31 & 0xffffffff | uVar18;
    if ((int)local_1c8 != 6) {
      uVar18 = 0;
    }
    if ((local_228[0] & 1) != 0) {
      operator_delete(local_218);
    }
    if ((uVar18 & 0x300000000) == 0x200000000) {
      uVar17 = (uint)uVar18;
      *(uint *)param_4 =
           uVar17 & 0xff000000 | uVar17 & 0xff00 | (uVar17 & 0xff) << 0x10 | uVar17 >> 0x10 & 0xff;
    }
    else {
      uVar17 = facebook::react::parsePlatformColor(param_1,iVar28,(RawValue *)param_3);
      *(uint *)param_4 = uVar17;
    }
  }
LAB_00121734:
  if (*(long *)(lVar27 + 0x28) == local_98) {
    return;
  }
LAB_00124368:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012436c  facebook::react::parsePlatformColor =====

/* facebook::react::parsePlatformColor(facebook::react::ContextContainer const&, int,
   facebook::react::RawValue const&) */

undefined4
facebook::react::parsePlatformColor(ContextContainer *param_1,int param_2,RawValue *param_3)

{
  size_t sVar1;
  int *piVar2;
  byte bVar3;
  long lVar4;
  size_t sVar5;
  void *__s2;
  _jmethodID *p_Var6;
  undefined *puVar7;
  _jmethodID *p_Var8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  byte *pbVar12;
  _jobject *p_Var13;
  uint *puVar14;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  long *plVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  byte *pbVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  long *plVar28;
  _jmethodID *p_Var29;
  long lVar30;
  byte *unaff_x20;
  int *piVar31;
  byte *pbVar32;
  long *plVar33;
  ulong uVar34;
  uint uVar35;
  byte *pbVar36;
  byte *unaff_x26;
  byte *pbVar37;
  byte *unaff_x27;
  undefined2 uVar38;
  float fVar39;
  float fVar40;
  undefined8 *local_1b8;
  undefined8 local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined8 local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  byte *pbStack_168;
  long *local_160;
  ulong local_158;
  float local_150;
  long local_140 [4];
  long *local_120;
  undefined8 local_110;
  char cStack_108;
  char acStack_107 [7];
  byte *local_100;
  uint *local_f0;
  _jmethodID *local_e0;
  _jmethodID *p_Stack_d8;
  _jmethodID *local_d0;
  undefined8 *local_c0 [2];
  uint local_b0;
  undefined4 uStack_ac;
  char cStack_a8;
  char acStack_a7 [7];
  void *local_a0;
  uint *local_90;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  if (*(int *)(param_3 + 0x30) == 1) {
    if (*(int *)(param_3 + 8) == 7) {
      plVar28 = *(long **)param_3;
      local_c0[0] = (undefined8 *)
                    (**(code **)(*plVar28 + 0x88))(plVar28,*(undefined8 *)(param_3 + 0x10));
                    /* try { // try from 0012443c to 0012444b has its CatchHandler @ 00125f8c */
      (**(code **)(*plVar28 + 0x218))(&local_1a0,plVar28,local_c0);
                    /* try { // try from 00124454 to 0012445f has its CatchHandler @ 00125f68 */
      lVar15 = (**(code **)(*plVar28 + 0x240))(plVar28,&local_1a0);
      if (lVar15 != 0) {
                    /* try { // try from 00124470 to 00124483 has its CatchHandler @ 00125f44 */
        (**(code **)(*plVar28 + 0x260))(&local_b0,plVar28,&local_1a0,0);
        local_1b8 = (undefined8 *)CONCAT71(acStack_a7,cStack_a8);
        cStack_a8 = '\0';
        acStack_a7[0] = '\0';
        acStack_a7[1] = '\0';
        acStack_a7[2] = '\0';
        acStack_a7[3] = '\0';
        acStack_a7[4] = '\0';
        acStack_a7[5] = '\0';
        acStack_a7[6] = '\0';
        facebook::jsi::Value::~Value((Value *)&local_b0);
                    /* try { // try from 001244a0 to 001244b3 has its CatchHandler @ 00125f08 */
        (**(code **)(*plVar28 + 0x188))(&local_110,plVar28,local_c0,&local_1b8);
        if ((uint)local_110 == 7) {
                    /* try { // try from 001244cc to 0012453b has its CatchHandler @ 00125fb4 */
          local_170 = (undefined8 *)
                      (**(code **)(*plVar28 + 0x88))
                                (plVar28,CONCAT17(acStack_107[6],
                                                  CONCAT61(acStack_107._0_6_,cStack_108)));
          uVar34 = (**(code **)(*plVar28 + 0x1e0))(plVar28,&local_170);
          if ((uVar34 & 1) == 0) {
            unaff_x20 = (byte *)0x0;
          }
          else {
            local_e0 = (_jmethodID *)(**(code **)(*plVar28 + 0x88))(plVar28,local_170);
            lVar30 = (**(code **)(*plVar28 + 0x240))(plVar28,&local_e0);
            if (lVar30 == 0) {
              unaff_x20 = (byte *)0x1;
            }
            else {
              (**(code **)(*plVar28 + 0x260))(&local_b0,plVar28,&local_e0,0);
              unaff_x20 = (byte *)(ulong)(local_b0 == 6);
              facebook::jsi::Value::~Value((Value *)&local_b0);
            }
            if (local_e0 != (_jmethodID *)0x0) {
              (*(code *)**(undefined8 **)local_e0)();
            }
          }
          if (local_170 != (undefined8 *)0x0) {
            (**(code **)*local_170)();
          }
        }
        else {
          unaff_x20 = (byte *)0x0;
        }
        facebook::jsi::Value::~Value((Value *)&local_110);
        if (local_1b8 != (undefined8 *)0x0) {
          (**(code **)*local_1b8)();
        }
      }
      if (local_1a0 != (undefined8 *)0x0) {
        (**(code **)*local_1a0)();
      }
      pbVar19 = (byte *)(ulong)((uint)(lVar15 == 0) | (uint)unaff_x20);
      if (local_c0[0] != (undefined8 *)0x0) {
        (**(code **)*local_c0[0])();
      }
      if ((lVar15 == 0) != 0 || ((ulong)unaff_x20 & 1) != 0) {
        if (*(int *)(param_3 + 0x30) == 1) {
          plVar28 = *(long **)param_3;
          local_188 = (undefined8 *)
                      (**(code **)(*plVar28 + 0x88))(plVar28,*(undefined8 *)(param_3 + 0x10));
                    /* try { // try from 00124aec to 00124afb has its CatchHandler @ 00125ea8 */
          (**(code **)(*plVar28 + 0x218))(&local_190,plVar28,&local_188);
                    /* try { // try from 00124b04 to 00124b0f has its CatchHandler @ 00125ea0 */
          pbVar12 = (byte *)(**(code **)(*plVar28 + 0x240))(plVar28,&local_190);
          local_150 = 1.0;
          pbStack_168 = (byte *)0x0;
          local_170 = (undefined8 *)0x0;
          local_158 = 0;
          local_160 = (long *)0x0;
          if (pbVar12 != (byte *)0x0) {
            unaff_x27 = (byte *)0x0;
            do {
                    /* try { // try from 00124b68 to 00124b7b has its CatchHandler @ 001260a4 */
              (**(code **)(*plVar28 + 0x260))(&local_1a0,plVar28,&local_190,unaff_x27);
                    /* try { // try from 00124b88 to 00124b8f has its CatchHandler @ 001260ac */
              local_1a8 = (undefined8 *)(**(code **)(*plVar28 + 0x80))(plVar28,local_198);
                    /* try { // try from 00124b9c to 00124baf has its CatchHandler @ 001260b4 */
              (**(code **)(*plVar28 + 0x188))(&local_1b8,plVar28,&local_188,&local_1a8);
              if ((int)local_1b8 != 0) {
                    /* try { // try from 00124bc0 to 00124bcf has its CatchHandler @ 00126074 */
                (**(code **)(*plVar28 + 0x120))(&local_110,plVar28,&local_1a8);
                    /* try { // try from 00124bdc to 00124be3 has its CatchHandler @ 0012607c */
                puVar27 = (undefined8 *)(**(code **)(*plVar28 + 0x88))(plVar28,local_1b0);
                    /* try { // try from 00124bf0 to 00124bfb has its CatchHandler @ 0012608c */
                local_180 = (undefined8 *)(**(code **)(*plVar28 + 0x88))(plVar28,puVar27);
                    /* try { // try from 00124c08 to 00124c13 has its CatchHandler @ 00126098 */
                lVar15 = (**(code **)(*plVar28 + 0x240))(plVar28,&local_180);
                local_e0 = (_jmethodID *)0x0;
                p_Stack_d8 = (_jmethodID *)0x0;
                local_d0 = (_jmethodID *)0x0;
                    /* try { // try from 00124c20 to 00124c2b has its CatchHandler @ 001260a0 */
                FUN_0011b4f4(&local_e0,lVar15);
                if (lVar15 != 0) {
                  lVar30 = 0;
                  do {
                    /* try { // try from 00124c6c to 00124c7f has its CatchHandler @ 00126138 */
                    (**(code **)(*plVar28 + 0x260))(local_c0,plVar28,&local_180,lVar30);
                    /* try { // try from 00124c80 to 00124c8f has its CatchHandler @ 00126140 */
                    facebook::jsi::Value::asString((IRuntime *)local_c0);
                    /* try { // try from 00124c98 to 00124ca7 has its CatchHandler @ 00126148 */
                    (**(code **)(*plVar28 + 0x120))(&local_b0,plVar28,&local_178);
                    if (local_178 != (undefined8 *)0x0) {
                      (**(code **)*local_178)();
                    }
                    if (p_Stack_d8 < local_d0) {
                      *(void **)(p_Stack_d8 + 0x10) = local_a0;
                      *(ulong *)(p_Stack_d8 + 8) = CONCAT71(acStack_a7,cStack_a8);
                      *(ulong *)p_Stack_d8 = CONCAT44(uStack_ac,local_b0);
                      p_Stack_d8 = p_Stack_d8 + 0x18;
                    }
                    else {
                    /* try { // try from 00124cc8 to 00124cd3 has its CatchHandler @ 001260f0 */
                      p_Stack_d8 = (_jmethodID *)FUN_00129d04(&local_e0,&local_b0);
                      if ((local_b0 & 1) != 0) {
                        operator_delete(local_a0);
                      }
                    }
                    facebook::jsi::Value::~Value((Value *)local_c0);
                    lVar30 = lVar30 + 1;
                  } while (lVar15 != lVar30);
                }
                if (local_180 != (undefined8 *)0x0) {
                  (**(code **)*local_180)();
                }
                if (puVar27 != (undefined8 *)0x0) {
                  (**(code **)*puVar27)(puVar27);
                }
                uVar34 = (ulong)((byte)local_110._0_1_ >> 1);
                pbVar32 = (byte *)((ulong)&local_110 | 1);
                if (((uint)local_110 & 1) != 0) {
                  uVar34 = CONCAT17(acStack_107[6],CONCAT61(acStack_107._0_6_,cStack_108));
                  pbVar32 = local_100;
                }
                    /* try { // try from 00124d30 to 00124d37 has its CatchHandler @ 00126070 */
                pbVar37 = (byte *)FUN_00114710(&local_b0,pbVar32,uVar34);
                pbVar32 = pbStack_168;
                pbVar16 = pbVar12;
                if (pbStack_168 != (byte *)0x0) {
                  uVar11 = NEON_cnt(pbStack_168,1);
                  uVar38 = NEON_uaddlv(uVar11,1);
                  uVar34 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar38) & 0xffffffff;
                  if (uVar34 < 2) {
                    pbVar16 = (byte *)((ulong)(pbStack_168 + -1) & (ulong)pbVar37);
                  }
                  else {
                    pbVar16 = pbVar37;
                    if (pbStack_168 <= pbVar37) {
                      uVar21 = 0;
                      if (pbStack_168 != (byte *)0x0) {
                        uVar21 = (ulong)pbVar37 / (ulong)pbStack_168;
                      }
                      pbVar16 = pbVar37 + -(uVar21 * (long)pbStack_168);
                    }
                  }
                  if (((undefined8 *)local_170[(long)pbVar16] != (undefined8 *)0x0) &&
                     (pbVar19 = *(byte **)local_170[(long)pbVar16], pbVar19 != (byte *)0x0)) {
                    pbVar36 = pbStack_168 + -1;
                    sVar5 = (ulong)((byte)local_110._0_1_ >> 1);
                    pbVar18 = (byte *)((ulong)&local_110 | 1);
                    if (((uint)local_110 & 1) != 0) {
                      sVar5 = CONCAT17(acStack_107[6],CONCAT61(acStack_107._0_6_,cStack_108));
                      pbVar18 = local_100;
                    }
                    do {
                      pbVar17 = *(byte **)(pbVar19 + 8);
                      if (pbVar17 == pbVar37) {
                        bVar3 = pbVar19[0x10];
                        uVar21 = (ulong)(bVar3 >> 1);
                        sVar1 = uVar21;
                        if ((bVar3 & 1) != 0) {
                          sVar1 = *(size_t *)(pbVar19 + 0x18);
                        }
                        if (sVar1 == sVar5) {
                          if ((bVar3 & 1) == 0) {
                            if (bVar3 < 2) goto LAB_0012507c;
                            pbVar17 = pbVar19 + 0x11;
                            pbVar24 = pbVar18;
                            while (*pbVar17 == *pbVar24) {
                              uVar21 = uVar21 - 1;
                              pbVar17 = pbVar17 + 1;
                              pbVar24 = pbVar24 + 1;
                              if (uVar21 == 0) goto LAB_0012507c;
                            }
                          }
                          else {
                            iVar10 = memcmp(*(void **)(pbVar19 + 0x20),pbVar18,
                                            *(size_t *)(pbVar19 + 0x18));
                            if (iVar10 == 0) goto LAB_0012507c;
                          }
                        }
                      }
                      else {
                        if (uVar34 < 2) {
                          pbVar17 = (byte *)((ulong)pbVar17 & (ulong)pbVar36);
                        }
                        else if (pbVar32 <= pbVar17) {
                          uVar21 = 0;
                          if (pbVar32 != (byte *)0x0) {
                            uVar21 = (ulong)pbVar17 / (ulong)pbVar32;
                          }
                          pbVar17 = pbVar17 + -(uVar21 * (long)pbVar32);
                        }
                        if (pbVar17 != pbVar16) break;
                      }
                      pbVar19 = *(byte **)pbVar19;
                    } while (pbVar19 != (byte *)0x0);
                  }
                }
                    /* try { // try from 00124e70 to 00124e77 has its CatchHandler @ 00126048 */
                plVar33 = (long *)operator_new(0x40);
                local_a0 = (void *)((ulong)local_a0 & 0xffffffffffffff00);
                *plVar33 = 0;
                plVar33[1] = (long)pbVar37;
                local_b0 = (uint)plVar33;
                uStack_ac = (undefined4)((ulong)plVar33 >> 0x20);
                cStack_a8 = (char)&local_160;
                acStack_a7 = SUB87((ulong)&local_160 >> 8,0);
                if (((uint)local_110 & 1) == 0) {
                  plVar33[3] = CONCAT17(acStack_107[6],CONCAT61(acStack_107._0_6_,cStack_108));
                  plVar33[2] = CONCAT44(local_110._4_4_,(uint)local_110);
                  plVar33[4] = (long)local_100;
                }
                else {
                    /* try { // try from 00124eac to 00124eb3 has its CatchHandler @ 00125fd0 */
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  __init_copy_ctor_external
                            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              *)(plVar33 + 2),(char *)local_100,
                             CONCAT17(acStack_107[6],CONCAT61(acStack_107._0_6_,cStack_108)));
                }
                p_Var29 = local_d0;
                p_Var8 = p_Stack_d8;
                p_Stack_d8 = (_jmethodID *)0x0;
                local_d0 = (_jmethodID *)0x0;
                plVar33[7] = (long)p_Var29;
                plVar33[6] = (long)p_Var8;
                plVar33[5] = (long)local_e0;
                local_e0 = (_jmethodID *)0x0;
                local_a0 = (void *)CONCAT71(local_a0._1_7_,1);
                if ((pbVar32 == (byte *)0x0) ||
                   (local_150 * (float)pbVar32 < (float)(local_158 + 1))) {
                  if (pbVar32 < (byte *)0x3) {
                    uVar34 = 1;
                  }
                  else {
                    uVar34 = (ulong)(((ulong)pbVar32 & (ulong)(pbVar32 + -1)) != 0);
                  }
                  pbVar32 = (byte *)(uVar34 | (long)pbVar32 << 1);
                  pbVar16 = (byte *)(long)((float)(local_158 + 1) / local_150);
                  if (pbVar32 <= pbVar16) {
                    pbVar32 = pbVar16;
                  }
                  if (pbVar32 + -1 == (byte *)0x0) {
                    pbVar32 = (byte *)0x2;
                  }
                  else if (((ulong)pbVar32 & (ulong)(pbVar32 + -1)) != 0) {
                    /* try { // try from 00124f44 to 00124fc7 has its CatchHandler @ 00125fcc */
                    pbVar32 = (byte *)std::__ndk1::__next_prime((ulong)pbVar32);
                  }
                  pbVar16 = pbStack_168;
                  if (pbStack_168 < pbVar32) {
LAB_00124f5c:
                    FUN_00129e68(&local_170,pbVar32);
                  }
                  else if (pbVar32 < pbStack_168) {
                    pbVar18 = (byte *)(long)((float)local_158 / local_150);
                    if (pbStack_168 < (byte *)0x3) {
LAB_00124fc4:
                      pbVar18 = (byte *)std::__ndk1::__next_prime((ulong)pbVar18);
                    }
                    else {
                      uVar11 = NEON_cnt(pbStack_168,1);
                      uVar38 = NEON_uaddlv(uVar11,1);
                      if (1 < (uint)CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar38))
                      goto LAB_00124fc4;
                      if ((byte *)0x1 < pbVar18) {
                        pbVar18 = (byte *)(1L << (-LZCOUNT(pbVar18 + -1) & 0x3fU));
                      }
                    }
                    if (pbVar32 <= pbVar18) {
                      pbVar32 = pbVar18;
                    }
                    if (pbVar32 < pbVar16) goto LAB_00124f5c;
                  }
                  pbVar32 = pbStack_168;
                  if (((ulong)pbStack_168 & (ulong)(pbStack_168 + -1)) == 0) {
                    pbVar16 = (byte *)((ulong)(pbStack_168 + -1) & (ulong)pbVar37);
                  }
                  else {
                    pbVar16 = pbVar37;
                    if (pbStack_168 <= pbVar37) {
                      uVar34 = 0;
                      if (pbStack_168 != (byte *)0x0) {
                        uVar34 = (ulong)pbVar37 / (ulong)pbStack_168;
                      }
                      pbVar16 = pbVar37 + -(uVar34 * (long)pbStack_168);
                    }
                  }
                }
                plVar20 = (long *)local_170[(long)pbVar16];
                if (plVar20 == (long *)0x0) {
                  *plVar33 = (long)local_160;
                  local_170[(long)pbVar16] = &local_160;
                  local_160 = plVar33;
                  if (*plVar33 != 0) {
                    pbVar16 = *(byte **)(*plVar33 + 8);
                    if (((ulong)pbVar32 & (ulong)(pbVar32 + -1)) == 0) {
                      pbVar16 = (byte *)((ulong)pbVar16 & (ulong)(pbVar32 + -1));
                    }
                    else if (pbVar32 <= pbVar16) {
                      uVar34 = 0;
                      if (pbVar32 != (byte *)0x0) {
                        uVar34 = (ulong)pbVar16 / (ulong)pbVar32;
                      }
                      pbVar16 = pbVar16 + -(uVar34 * (long)pbVar32);
                    }
                    plVar20 = local_170 + (long)pbVar16;
                    goto LAB_0012506c;
                  }
                }
                else {
                  *plVar33 = *plVar20;
LAB_0012506c:
                  *plVar20 = (long)plVar33;
                }
                local_158 = local_158 + 1;
LAB_0012507c:
                p_Var8 = local_e0;
                p_Var29 = p_Stack_d8;
                if (local_e0 != (_jmethodID *)0x0) {
                  while (p_Var6 = p_Var29, p_Var6 != p_Var8) {
                    p_Var29 = p_Var6 + -0x18;
                    if (((byte)*p_Var29 & 1) != 0) {
                      operator_delete(*(void **)(p_Var6 + -8));
                    }
                  }
                  operator_delete(p_Var8);
                }
                if (((uint)local_110 & 1) != 0) {
                  operator_delete(local_100);
                }
              }
              facebook::jsi::Value::~Value((Value *)&local_1b8);
              if (local_1a8 != (undefined8 *)0x0) {
                (**(code **)*local_1a8)();
              }
              facebook::jsi::Value::~Value((Value *)&local_1a0);
              unaff_x27 = unaff_x27 + 1;
            } while (unaff_x27 != pbVar12);
          }
          if (local_190 != (undefined8 *)0x0) {
            (**(code **)*local_190)();
          }
          if (local_188 != (undefined8 *)0x0) {
            (**(code **)*local_188)();
          }
          goto LAB_0012511c;
        }
        if (*(int *)(param_3 + 0x30) == 0) {
          local_150 = 1.0;
          pbStack_168 = (byte *)0x0;
          local_170 = (undefined8 *)0x0;
          local_158 = 0;
          local_160 = (long *)0x0;
          if (*(int *)param_3 != 5) {
            if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* try { // try from 00125e44 to 00125e53 has its CatchHandler @ 00125e98 */
                    /* WARNING: Subroutine does not return */
              FUN_00119c04(*(undefined8 *)PTR_name_0012fcb0);
            }
            goto LAB_00126260;
          }
          goto LAB_00124624;
        }
        goto LAB_00125d24;
      }
      uVar9 = 0;
    }
    else {
LAB_00124554:
      uVar9 = 0;
    }
  }
  else {
    if (*(int *)(param_3 + 0x30) != 0) {
LAB_00125d24:
      if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_0011a6d0();
      }
      goto LAB_00126260;
    }
    if ((*(int *)param_3 != 5) ||
       ((lVar15 = *(long *)(param_3 + 0x18), pbVar19 = unaff_x20, lVar15 != 0 &&
        ((*(int *)(lVar15 + 0x40) != 1 ||
         ((*(int **)(lVar15 + 0x48) != *(int **)(lVar15 + 0x50) && (**(int **)(lVar15 + 0x48) != 6))
         )))))) goto LAB_00124554;
LAB_00124624:
    local_150 = 1.0;
    local_158 = 0;
    local_160 = (long *)0x0;
    pbStack_168 = (byte *)0x0;
    local_170 = (undefined8 *)0x0;
    plVar28 = *(long **)(param_3 + 0x18);
    if (plVar28 != (long *)0x0) {
      do {
        local_110._0_4_ = 0;
        local_110._4_4_ = 0;
        cStack_108 = '\0';
        acStack_107[0] = '\0';
        acStack_107[1] = '\0';
        acStack_107[2] = '\0';
        acStack_107[3] = '\0';
        acStack_107[4] = '\0';
        acStack_107[5] = '\0';
        acStack_107[6] = 0;
        local_100 = (byte *)0x0;
                    /* try { // try from 00124674 to 00124687 has its CatchHandler @ 00126108 */
        uVar11 = folly::dynamic::size();
        FUN_0011b4f4(&local_110,uVar11);
        if ((int)plVar28[8] != 1) {
          if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* try { // try from 00125cf0 to 00125cff has its CatchHandler @ 001260dc */
                    /* WARNING: Subroutine does not return */
            FUN_00119c04(*(undefined8 *)PTR_name_0012fc70);
          }
          goto LAB_00126260;
        }
        piVar31 = (int *)plVar28[9];
        piVar2 = (int *)plVar28[10];
        while( true ) {
          if (piVar31 == piVar2) break;
          if (*piVar31 != 6) {
            local_110 = (uint *)CONCAT44(local_110._4_4_,(uint)local_110);
            if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* try { // try from 00125ccc to 00125cdb has its CatchHandler @ 00126230 */
                    /* WARNING: Subroutine does not return */
              FUN_00119c04(*(undefined8 *)PTR_name_0012fc98);
            }
            goto LAB_00126260;
          }
          if ((*(byte *)(piVar31 + 2) & 1) == 0) {
            local_a0 = *(void **)(piVar31 + 6);
            uVar11 = *(undefined8 *)(piVar31 + 2);
            cStack_a8 = (char)*(undefined8 *)(piVar31 + 4);
            acStack_a7 = SUB87((ulong)*(undefined8 *)(piVar31 + 4) >> 8,0);
            local_b0 = (uint)uVar11;
            uStack_ac = (undefined4)((ulong)uVar11 >> 0x20);
          }
          else {
                    /* try { // try from 001246f0 to 001246f7 has its CatchHandler @ 00126214 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            __init_copy_ctor_external
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_b0,*(char **)(piVar31 + 6),*(ulong *)(piVar31 + 4));
          }
          pbVar19 = (byte *)CONCAT17(acStack_107[6],CONCAT61(acStack_107._0_6_,cStack_108));
          if (pbVar19 < local_100) {
            *(void **)(pbVar19 + 0x10) = local_a0;
            pbVar12 = pbVar19 + 0x18;
            *(ulong *)(pbVar19 + 8) = CONCAT71(acStack_a7,cStack_a8);
            *(ulong *)pbVar19 = CONCAT44(uStack_ac,local_b0);
            cStack_108 = (char)pbVar12;
            acStack_107._0_6_ = (undefined6)((ulong)pbVar12 >> 8);
            acStack_107[6] = (char)((ulong)pbVar12 >> 0x38);
          }
          else {
                    /* try { // try from 00124704 to 0012470f has its CatchHandler @ 00126218 */
            uVar11 = FUN_00129d04(&local_110,&local_b0);
            cStack_108 = (char)uVar11;
            acStack_107._0_6_ = (undefined6)((ulong)uVar11 >> 8);
            acStack_107[6] = (char)((ulong)uVar11 >> 0x38);
            if ((local_b0 & 1) != 0) {
              operator_delete(local_a0);
            }
          }
          piVar31 = piVar31 + 0xc;
        }
        if ((int)plVar28[2] != 6) {
          if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* try { // try from 00125d14 to 00125d23 has its CatchHandler @ 001260d4 */
                    /* WARNING: Subroutine does not return */
            FUN_00119c04(*(undefined8 *)PTR_name_0012fc98);
          }
          goto LAB_00126260;
        }
        unaff_x27 = (byte *)(plVar28 + 3);
        uVar34 = plVar28[4];
        lVar15 = plVar28[5];
        if ((*unaff_x27 & 1) == 0) {
          lVar15 = (long)plVar28 + 0x19;
          uVar34 = (ulong)(*unaff_x27 >> 1);
        }
                    /* try { // try from 00124750 to 00124757 has its CatchHandler @ 001260d8 */
        pbVar12 = (byte *)FUN_00114710(&local_b0,lVar15,uVar34);
        pbVar19 = pbStack_168;
        if (pbStack_168 != (byte *)0x0) {
          uVar11 = NEON_cnt(pbStack_168,1);
          uVar38 = NEON_uaddlv(uVar11,1);
          uVar34 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar38) & 0xffffffff;
          if (uVar34 < 2) {
            unaff_x26 = (byte *)((ulong)(pbStack_168 + -1) & (ulong)pbVar12);
          }
          else {
            unaff_x26 = pbVar12;
            if (pbStack_168 <= pbVar12) {
              uVar21 = 0;
              if (pbStack_168 != (byte *)0x0) {
                uVar21 = (ulong)pbVar12 / (ulong)pbStack_168;
              }
              unaff_x26 = pbVar12 + -(uVar21 * (long)pbStack_168);
            }
          }
          if (((undefined8 *)local_170[(long)unaff_x26] != (undefined8 *)0x0) &&
             (plVar33 = *(long **)local_170[(long)unaff_x26], plVar33 != (long *)0x0)) {
            pbVar32 = pbStack_168 + -1;
            __s2 = (void *)((long)plVar28 + 0x19);
            sVar5 = (ulong)(*(byte *)(plVar28 + 3) >> 1);
            if ((*(byte *)(plVar28 + 3) & 1) != 0) {
              __s2 = (void *)plVar28[5];
              sVar5 = plVar28[4];
            }
            do {
              pbVar16 = (byte *)plVar33[1];
              if (pbVar16 == pbVar12) {
                bVar3 = *(byte *)(plVar33 + 2);
                sVar1 = (ulong)(bVar3 >> 1);
                if ((bVar3 & 1) != 0) {
                  sVar1 = plVar33[3];
                }
                if (sVar1 == sVar5) {
                  if ((bVar3 & 1) == 0) {
                    if (bVar3 < 2) goto LAB_00124a7c;
                    uVar21 = 0;
                    while (*(char *)((long)plVar33 + uVar21 + 0x11) ==
                           *(char *)((long)__s2 + uVar21)) {
                      uVar21 = uVar21 + 1;
                      if (bVar3 >> 1 == uVar21) goto LAB_00124a7c;
                    }
                  }
                  else {
                    iVar10 = memcmp((void *)plVar33[4],__s2,plVar33[3]);
                    if (iVar10 == 0) goto LAB_00124a7c;
                  }
                }
              }
              else {
                if (uVar34 < 2) {
                  pbVar16 = (byte *)((ulong)pbVar16 & (ulong)pbVar32);
                }
                else if (pbVar19 <= pbVar16) {
                  uVar21 = 0;
                  if (pbVar19 != (byte *)0x0) {
                    uVar21 = (ulong)pbVar16 / (ulong)pbVar19;
                  }
                  pbVar16 = pbVar16 + -(uVar21 * (long)pbVar19);
                }
                if (pbVar16 != unaff_x26) break;
              }
              plVar33 = (long *)*plVar33;
            } while (plVar33 != (long *)0x0);
          }
        }
                    /* try { // try from 00124878 to 0012487f has its CatchHandler @ 001260d0 */
        plVar33 = (long *)operator_new(0x40);
        *plVar33 = 0;
        plVar33[1] = (long)pbVar12;
        local_a0 = (void *)((ulong)local_a0 & 0xffffffffffffff00);
        local_b0 = (uint)plVar33;
        uStack_ac = (undefined4)((ulong)plVar33 >> 0x20);
        cStack_a8 = (char)&local_160;
        acStack_a7 = SUB87((ulong)&local_160 >> 8,0);
        if ((*unaff_x27 & 1) == 0) {
          lVar30 = plVar28[4];
          lVar15 = *(long *)unaff_x27;
          plVar33[4] = plVar28[5];
          plVar33[3] = lVar30;
          plVar33[2] = lVar15;
        }
        else {
                    /* try { // try from 001248b8 to 001248bf has its CatchHandler @ 001260c0 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(plVar33 + 2),(char *)plVar28[5],plVar28[4]);
        }
        plVar33[5] = 0;
        plVar33[6] = 0;
        plVar33[7] = 0;
        local_a0 = (void *)CONCAT71(local_a0._1_7_,1);
        if ((pbVar19 == (byte *)0x0) || (local_150 * (float)pbVar19 < (float)(local_158 + 1))) {
          if (pbVar19 < (byte *)0x3) {
            uVar34 = 1;
          }
          else {
            uVar34 = (ulong)(((ulong)pbVar19 & (ulong)(pbVar19 + -1)) != 0);
          }
          pbVar19 = (byte *)(uVar34 | (long)pbVar19 << 1);
          pbVar32 = (byte *)(long)((float)(local_158 + 1) / local_150);
          if (pbVar19 <= pbVar32) {
            pbVar19 = pbVar32;
          }
          if (pbVar19 + -1 == (byte *)0x0) {
            pbVar19 = (byte *)0x2;
          }
          else if (((ulong)pbVar19 & (ulong)(pbVar19 + -1)) != 0) {
                    /* try { // try from 00124944 to 001249c7 has its CatchHandler @ 001260bc */
            pbVar19 = (byte *)std::__ndk1::__next_prime((ulong)pbVar19);
          }
          pbVar32 = pbStack_168;
          if (pbStack_168 < pbVar19) {
LAB_0012495c:
            FUN_00129e68(&local_170,pbVar19);
          }
          else if (pbVar19 < pbStack_168) {
            pbVar16 = (byte *)(long)((float)local_158 / local_150);
            if (pbStack_168 < (byte *)0x3) {
LAB_001249c4:
              pbVar16 = (byte *)std::__ndk1::__next_prime((ulong)pbVar16);
            }
            else {
              uVar11 = NEON_cnt(pbStack_168,1);
              uVar38 = NEON_uaddlv(uVar11,1);
              if (1 < (uint)CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar38)) goto LAB_001249c4;
              if ((byte *)0x1 < pbVar16) {
                pbVar16 = (byte *)(1L << (-LZCOUNT(pbVar16 + -1) & 0x3fU));
              }
            }
            if (pbVar19 <= pbVar16) {
              pbVar19 = pbVar16;
            }
            if (pbVar19 < pbVar32) goto LAB_0012495c;
          }
          pbVar19 = pbStack_168;
          if (((ulong)pbStack_168 & (ulong)(pbStack_168 + -1)) == 0) {
            unaff_x26 = (byte *)((ulong)(pbStack_168 + -1) & (ulong)pbVar12);
          }
          else {
            unaff_x26 = pbVar12;
            if (pbStack_168 <= pbVar12) {
              uVar34 = 0;
              if (pbStack_168 != (byte *)0x0) {
                uVar34 = (ulong)pbVar12 / (ulong)pbStack_168;
              }
              unaff_x26 = pbVar12 + -(uVar34 * (long)pbStack_168);
            }
          }
        }
        plVar20 = (long *)local_170[(long)unaff_x26];
        if (plVar20 == (long *)0x0) {
          *plVar33 = (long)local_160;
          local_170[(long)unaff_x26] = &local_160;
          local_160 = plVar33;
          if (*plVar33 != 0) {
            pbVar12 = *(byte **)(*plVar33 + 8);
            if (((ulong)pbVar19 & (ulong)(pbVar19 + -1)) == 0) {
              pbVar12 = (byte *)((ulong)pbVar12 & (ulong)(pbVar19 + -1));
            }
            else if (pbVar19 <= pbVar12) {
              uVar34 = 0;
              if (pbVar19 != (byte *)0x0) {
                uVar34 = (ulong)pbVar12 / (ulong)pbVar19;
              }
              pbVar12 = pbVar12 + -(uVar34 * (long)pbVar19);
            }
            plVar20 = local_170 + (long)pbVar12;
            goto LAB_00124a6c;
          }
        }
        else {
          *plVar33 = *plVar20;
LAB_00124a6c:
          *plVar20 = (long)plVar33;
        }
        local_158 = local_158 + 1;
LAB_00124a7c:
        pbVar19 = (byte *)(plVar33 + 5);
        pbVar12 = *(byte **)pbVar19;
        if (pbVar12 != (byte *)0x0) {
          pbVar16 = (byte *)plVar33[6];
          pbVar32 = pbVar12;
          if (pbVar16 != pbVar12) {
            do {
              pbVar32 = pbVar16 + -0x18;
              if ((*pbVar32 & 1) != 0) {
                operator_delete(*(void **)(pbVar16 + -8));
              }
              pbVar16 = pbVar32;
            } while (pbVar32 != pbVar12);
            pbVar32 = *(byte **)pbVar19;
          }
          plVar33[6] = (long)pbVar12;
          operator_delete(pbVar32);
          pbVar19[0] = 0;
          pbVar19[1] = 0;
          pbVar19[2] = 0;
          pbVar19[3] = 0;
          pbVar19[4] = 0;
          pbVar19[5] = 0;
          pbVar19[6] = 0;
          pbVar19[7] = 0;
          plVar33[6] = 0;
          plVar33[7] = 0;
        }
        plVar33[6] = CONCAT17(acStack_107[6],CONCAT61(acStack_107._0_6_,cStack_108));
        plVar33[5] = CONCAT44(local_110._4_4_,(uint)local_110);
        plVar33[7] = (long)local_100;
        plVar28 = (long *)*plVar28;
      } while (plVar28 != (long *)0x0);
    }
LAB_0012511c:
    acStack_107[6] = 0;
    local_110._0_4_ = CONCAT31((int3)s_resource_paths_00107d95._0_6_,0x1c);
    local_110._4_3_ = SUB63(s_resource_paths_00107d95._0_6_,3);
    local_110._7_1_ = (char)s_resource_paths_00107d95._6_2_;
    cStack_108 = SUB21(s_resource_paths_00107d95._6_2_,1);
    acStack_107[0] = s_resource_paths_00107d95[8];
    acStack_107[1] = s_resource_paths_00107d95[9];
    acStack_107[2] = s_resource_paths_00107d95[10];
    acStack_107[3] = s_resource_paths_00107d95[0xb];
    acStack_107[4] = s_resource_paths_00107d95[0xc];
    acStack_107[5] = s_resource_paths_00107d95[0xd];
                    /* try { // try from 00125148 to 00125157 has its CatchHandler @ 00125fc0 */
    pbVar32 = (byte *)FUN_00114710(&local_b0,(byte *)((ulong)&local_110 | 1),0xe);
    pbVar12 = pbStack_168;
    if (pbStack_168 != (byte *)0x0) {
      uVar11 = NEON_cnt(pbStack_168,1);
      uVar38 = NEON_uaddlv(uVar11,1);
      uVar34 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar38) & 0xffffffff;
      if (uVar34 < 2) {
        pbVar19 = (byte *)((ulong)(pbStack_168 + -1) & (ulong)pbVar32);
      }
      else {
        pbVar19 = pbVar32;
        if (pbStack_168 <= pbVar32) {
          uVar21 = 0;
          if (pbStack_168 != (byte *)0x0) {
            uVar21 = (ulong)pbVar32 / (ulong)pbStack_168;
          }
          pbVar19 = pbVar32 + -(uVar21 * (long)pbStack_168);
        }
      }
      if (((undefined8 *)local_170[(long)pbVar19] != (undefined8 *)0x0) &&
         (plVar28 = *(long **)local_170[(long)pbVar19], plVar28 != (long *)0x0)) {
        pbVar37 = pbStack_168 + -1;
        uVar35 = (uint)local_110 & 1;
        pbVar16 = (byte *)((ulong)&local_110 | 1);
        unaff_x27 = (byte *)(ulong)((byte)local_110._0_1_ >> 1);
        if (((uint)local_110 & 1) != 0) {
          pbVar16 = local_100;
          unaff_x27 = (byte *)CONCAT17(acStack_107[6],CONCAT61(acStack_107._0_6_,cStack_108));
        }
        do {
          pbVar18 = (byte *)plVar28[1];
          if (pbVar18 == pbVar32) {
            bVar3 = *(byte *)(plVar28 + 2);
            pbVar18 = (byte *)(ulong)(bVar3 >> 1);
            if ((bVar3 & 1) != 0) {
              pbVar18 = (byte *)plVar28[3];
            }
            if (pbVar18 == unaff_x27) {
              if ((bVar3 & 1) == 0) {
                if (bVar3 < 2) goto LAB_00125460;
                pbVar18 = (byte *)0x0;
                while (((byte *)((long)plVar28 + (long)pbVar18))[0x11] == pbVar16[(long)pbVar18]) {
                  pbVar18 = pbVar18 + 1;
                  if ((byte *)(ulong)(bVar3 >> 1) == pbVar18) goto LAB_00125460;
                }
              }
              else {
                iVar10 = memcmp((void *)plVar28[4],pbVar16,(size_t)plVar28[3]);
                if (iVar10 == 0) goto LAB_00125460;
              }
            }
          }
          else {
            if (uVar34 < 2) {
              pbVar18 = (byte *)((ulong)pbVar18 & (ulong)pbVar37);
            }
            else if (pbVar12 <= pbVar18) {
              uVar21 = 0;
              if (pbVar12 != (byte *)0x0) {
                uVar21 = (ulong)pbVar18 / (ulong)pbVar12;
              }
              pbVar18 = pbVar18 + -(uVar21 * (long)pbVar12);
            }
            if (pbVar18 != pbVar19) break;
          }
          plVar28 = (long *)*plVar28;
        } while (plVar28 != (long *)0x0);
      }
    }
                    /* try { // try from 00125274 to 0012527b has its CatchHandler @ 00125f50 */
    plVar28 = (long *)operator_new(0x40);
    plVar28[3] = CONCAT17(acStack_107[6],CONCAT61(acStack_107._0_6_,cStack_108));
    plVar28[2] = CONCAT44(local_110._4_4_,(uint)local_110);
    plVar28[4] = (long)local_100;
    plVar28[5] = 0;
    local_b0 = (uint)plVar28;
    uStack_ac = (undefined4)((ulong)plVar28 >> 0x20);
    cStack_a8 = (char)&local_160;
    acStack_a7 = SUB87((ulong)&local_160 >> 8,0);
    *plVar28 = 0;
    plVar28[1] = (long)pbVar32;
    local_110._0_4_ = 0;
    local_110._4_4_ = 0;
    cStack_108 = '\0';
    acStack_107[0] = '\0';
    acStack_107[1] = '\0';
    acStack_107[2] = '\0';
    acStack_107[3] = '\0';
    acStack_107[4] = '\0';
    acStack_107[5] = '\0';
    acStack_107[6] = 0;
    local_100 = (byte *)0x0;
    plVar28[6] = 0;
    plVar28[7] = 0;
    local_a0 = (void *)CONCAT71(local_a0._1_7_,1);
    if ((pbVar12 == (byte *)0x0) || (local_150 * (float)pbVar12 < (float)(local_158 + 1))) {
      if (pbVar12 < (byte *)0x3) {
        uVar34 = 1;
      }
      else {
        uVar34 = (ulong)(((ulong)pbVar12 & (ulong)(pbVar12 + -1)) != 0);
      }
      pbVar19 = (byte *)(uVar34 | (long)pbVar12 << 1);
      pbVar16 = (byte *)(long)((float)(local_158 + 1) / local_150);
      if (pbVar19 <= pbVar16) {
        pbVar19 = pbVar16;
      }
      if (pbVar19 + -1 == (byte *)0x0) {
        pbVar19 = (byte *)0x2;
      }
      else if (((ulong)pbVar19 & (ulong)(pbVar19 + -1)) != 0) {
                    /* try { // try from 00125324 to 001253a7 has its CatchHandler @ 00125ec0 */
        pbVar19 = (byte *)std::__ndk1::__next_prime((ulong)pbVar19);
        pbVar12 = pbStack_168;
      }
      if (pbVar12 < pbVar19) {
LAB_0012533c:
        FUN_00129e68(&local_170,pbVar19);
      }
      else if (pbVar19 < pbVar12) {
        pbVar16 = (byte *)(long)((float)local_158 / local_150);
        if (pbVar12 < (byte *)0x3) {
LAB_001253a4:
          pbVar16 = (byte *)std::__ndk1::__next_prime((ulong)pbVar16);
        }
        else {
          uVar11 = NEON_cnt(pbVar12,1);
          uVar38 = NEON_uaddlv(uVar11,1);
          if (1 < (uint)CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar38)) goto LAB_001253a4;
          if ((byte *)0x1 < pbVar16) {
            pbVar16 = (byte *)(1L << (-LZCOUNT(pbVar16 + -1) & 0x3fU));
          }
        }
        if (pbVar19 <= pbVar16) {
          pbVar19 = pbVar16;
        }
        if (pbVar19 < pbVar12) goto LAB_0012533c;
      }
      pbVar12 = pbStack_168;
      if (((ulong)pbStack_168 & (ulong)(pbStack_168 + -1)) == 0) {
        pbVar19 = (byte *)((ulong)(pbStack_168 + -1) & (ulong)pbVar32);
      }
      else {
        pbVar19 = pbVar32;
        if (pbStack_168 <= pbVar32) {
          uVar34 = 0;
          if (pbStack_168 != (byte *)0x0) {
            uVar34 = (ulong)pbVar32 / (ulong)pbStack_168;
          }
          pbVar19 = pbVar32 + -(uVar34 * (long)pbStack_168);
        }
      }
    }
    plVar33 = (long *)local_170[(long)pbVar19];
    if (plVar33 == (long *)0x0) {
      *plVar28 = (long)local_160;
      local_170[(long)pbVar19] = &local_160;
      local_160 = plVar28;
      if (*plVar28 != 0) {
        pbVar19 = *(byte **)(*plVar28 + 8);
        if (((ulong)pbVar12 & (ulong)(pbVar12 + -1)) == 0) {
          pbVar19 = (byte *)((ulong)pbVar19 & (ulong)(pbVar12 + -1));
        }
        else if (pbVar12 <= pbVar19) {
          uVar34 = 0;
          if (pbVar12 != (byte *)0x0) {
            uVar34 = (ulong)pbVar19 / (ulong)pbVar12;
          }
          pbVar19 = pbVar19 + -(uVar34 * (long)pbVar12);
        }
        plVar33 = local_170 + (long)pbVar19;
        goto LAB_00125448;
      }
    }
    else {
      *plVar28 = *plVar33;
LAB_00125448:
      *plVar33 = (long)plVar28;
    }
    local_158 = local_158 + 1;
    uVar35 = (uint)local_110 & 1;
LAB_00125460:
    if (uVar35 != 0) {
      operator_delete(local_100);
    }
    if (((*PTR_getColorCacheMutex_0012fbc0 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_getColorCacheMutex_0012fbc0), iVar10 != 0)) {
      __cxa_atexit(PTR__mutex_0012fc40,PTR_getColorCacheMutex_0012fbb8,&PTR_LOOP_0012f080);
      __cxa_guard_release(PTR_getColorCacheMutex_0012fbc0);
    }
    if (((*PTR_getColorCache_0012fbd0 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_getColorCache_0012fbd0), iVar10 != 0)) {
                    /* try { // try from 00125d84 to 00125d87 has its CatchHandler @ 00125e84 */
      FUN_001299d0();
      __cxa_atexit(FUN_00129b00,PTR_getColorCache_0012fbc8,&PTR_LOOP_0012f080);
      __cxa_guard_release(PTR_getColorCache_0012fbd0);
    }
    if (*(long *)PTR_setupCacheInvalidation_0012fbd8 != -1) {
      local_b0 = (uint)PTR_configurePlatformColorCacheInvalidationHook_0012fc48;
      uStack_ac = (undefined4)
                  ((ulong)PTR_configurePlatformColorCacheInvalidationHook_0012fc48 >> 0x20);
      cStack_a8 = (char)&local_e0;
      acStack_a7 = SUB87((ulong)&local_e0 >> 8,0);
      local_110 = &local_b0;
                    /* try { // try from 001254b8 to 001254cf has its CatchHandler @ 00125f48 */
      std::__ndk1::__call_once((ulong *)PTR_setupCacheInvalidation_0012fbd8,&local_110,FUN_0012a220)
      ;
    }
    pbVar12 = (byte *)plVar28[6];
    pbVar32 = (byte *)(long)param_2;
    for (pbVar19 = (byte *)plVar28[5]; pbVar19 != pbVar12; pbVar19 = pbVar19 + 0x18) {
      uVar34 = *(ulong *)(pbVar19 + 8);
      pbVar16 = *(byte **)(pbVar19 + 0x10);
      if ((*pbVar19 & 1) == 0) {
        pbVar16 = pbVar19 + 1;
        uVar34 = (ulong)(*pbVar19 >> 1);
      }
                    /* try { // try from 00125504 to 0012550b has its CatchHandler @ 001260e8 */
      lVar15 = FUN_00114710(&local_b0,pbVar16,uVar34);
      pbVar32 = (byte *)((long)pbVar32 * 0x40 + ((ulong)pbVar32 >> 2) + 0x9e3779b9 + lVar15 ^
                        (ulong)pbVar32);
    }
                    /* try { // try from 00125530 to 0012553b has its CatchHandler @ 00125fb8 */
    std::__ndk1::mutex::lock();
    puVar7 = PTR_getColorCache_0012fbc8;
    if (*(long *)(PTR_getColorCache_0012fbc8 + 0x50) != 0) {
      pbVar19 = *(byte **)(PTR_getColorCache_0012fbc8 + 0x40);
      uVar11 = NEON_cnt(pbVar19,1);
      uVar38 = NEON_uaddlv(uVar11,1);
      uVar34 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar38) & 0xffffffff;
      if (uVar34 < 2) {
        pbVar12 = (byte *)((ulong)(pbVar19 + -1) & (ulong)pbVar32);
      }
      else {
        pbVar12 = pbVar32;
        if (pbVar19 <= pbVar32) {
          uVar21 = 0;
          if (pbVar19 != (byte *)0x0) {
            uVar21 = (ulong)pbVar32 / (ulong)pbVar19;
          }
          pbVar12 = pbVar32 + -(uVar21 * (long)pbVar19);
        }
      }
      plVar33 = *(long **)(*(long *)(PTR_getColorCache_0012fbc8 + 0x38) + (long)pbVar12 * 8);
      if ((plVar33 != (long *)0x0) && (plVar33 = (long *)*plVar33, plVar33 != (long *)0x0)) {
        do {
          puVar27 = (undefined8 *)plVar33[2];
          if (pbVar32 == (byte *)puVar27[2]) {
            puVar23 = *(undefined8 **)(PTR_getColorCache_0012fbc8 + 0x70);
            if ((puVar27 != puVar23) && (puVar22 = (undefined8 *)*puVar27, puVar22 != puVar23)) {
              puVar25 = (undefined8 *)puVar23[1];
              puVar26 = (undefined8 *)puVar27[1];
              *puVar25 = puVar27;
              *puVar27 = puVar23;
              puVar27[1] = puVar25;
              puVar23[1] = puVar27;
              puVar22[1] = puVar26;
              *puVar26 = puVar22;
            }
            if (puVar27 != (undefined8 *)(puVar7 + 0x70)) {
              uVar9 = *(undefined4 *)(puVar27 + 3);
              goto LAB_00125c5c;
            }
            break;
          }
          plVar33 = (long *)*plVar33;
          if (plVar33 == (long *)0x0) break;
          pbVar16 = (byte *)plVar33[1];
          if (uVar34 < 2) {
            pbVar16 = (byte *)((ulong)pbVar16 & (ulong)(pbVar19 + -1));
          }
          else if (pbVar19 <= pbVar16) {
            uVar21 = 0;
            if (pbVar19 != (byte *)0x0) {
              uVar21 = (ulong)pbVar16 / (ulong)pbVar19;
            }
            pbVar16 = pbVar16 + -(uVar21 * (long)pbVar19);
          }
        } while (pbVar16 == pbVar12);
      }
    }
    local_a0 = (void *)((ulong)local_a0 & 0xffffffffffffff00);
    local_b0 = CONCAT31((int3)s_FabricUIManager_00107833._0_7_,0x1e);
    uStack_ac = SUB74(s_FabricUIManager_00107833._0_7_,3);
    cStack_a8 = s_FabricUIManager_00107833[7];
    acStack_a7[0] = s_FabricUIManager_00107833[8];
    acStack_a7[1] = s_FabricUIManager_00107833[9];
    acStack_a7[2] = s_FabricUIManager_00107833[10];
    acStack_a7[3] = s_FabricUIManager_00107833[0xb];
    acStack_a7[4] = s_FabricUIManager_00107833[0xc];
    acStack_a7[5] = s_FabricUIManager_00107833[0xd];
    acStack_a7[6] = s_FabricUIManager_00107833[0xe];
                    /* try { // try from 00125654 to 00125663 has its CatchHandler @ 00125f9c */
    FUN_00114314(&local_e0,param_1,&local_b0);
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    if ((*PTR_getColorFromJava_0012fbe8 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_getColorFromJava_0012fbe8);
      if (iVar10 != 0) {
        jni::JObject::getClass();
                    /* try { // try from 00125dd4 to 00125ddb has its CatchHandler @ 00125e68 */
        uVar11 = FUN_00129bf4(&local_b0);
        *(undefined8 *)PTR_getColorFromJava_0012fbe0 = uVar11;
        jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
        ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                         *)&local_b0);
        __cxa_guard_release(PTR_getColorFromJava_0012fbe8);
      }
    }
    lVar15 = plVar28[5];
    lVar30 = plVar28[6];
    if ((*PTR_elementClass_0012fc10 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_elementClass_0012fc10);
      if (iVar10 != 0) {
                    /* try { // try from 00125e10 to 00125e23 has its CatchHandler @ 00125e54 */
        facebook::jni::findClassStatic(PTR_kBaseName_0012fc18);
        __cxa_guard_release(PTR_elementClass_0012fc10);
      }
    }
                    /* try { // try from 00125698 to 001256db has its CatchHandler @ 00126068 */
    plVar33 = (long *)facebook::jni::Environment::current();
    puVar27 = (undefined8 *)
              (**(code **)(*plVar33 + 0x560))
                        (plVar33,(lVar30 - lVar15 >> 3) * -0x5555555555555555,
                         *(undefined8 *)PTR_elementClass_0012fc08,0);
    facebook::jni::throwCppExceptionIf(puVar27 == (undefined8 *)0x0);
    lVar15 = plVar28[5];
    local_c0[0] = puVar27;
    if (plVar28[6] != lVar15) {
      lVar30 = 0;
      uVar34 = 0;
      do {
        pbVar19 = (byte *)(lVar15 + lVar30);
        pbVar12 = *(byte **)(pbVar19 + 0x10);
        if ((*pbVar19 & 1) == 0) {
          pbVar12 = pbVar19 + 1;
        }
                    /* try { // try from 00125734 to 0012573b has its CatchHandler @ 001260e0 */
        facebook::jni::make_jstring((char *)pbVar12);
        uVar11 = CONCAT44(uStack_ac,local_b0);
                    /* try { // try from 00125740 to 0012575f has its CatchHandler @ 0012610c */
        plVar33 = (long *)facebook::jni::Environment::current();
        puVar27 = local_c0[0];
        (**(code **)(*plVar33 + 0x570))(plVar33,local_c0[0],uVar34 & 0xffffffff,uVar11);
        lVar15 = CONCAT44(uStack_ac,local_b0);
        if (lVar15 != 0) {
                    /* try { // try from 00125768 to 0012577b has its CatchHandler @ 001260ec */
          plVar33 = (long *)facebook::jni::Environment::current();
          (**(code **)(*plVar33 + 0xb8))(plVar33,lVar15);
        }
        lVar15 = plVar28[5];
        uVar34 = uVar34 + 1;
        lVar30 = lVar30 + 0x18;
        uVar21 = (plVar28[6] - lVar15 >> 3) * -0x5555555555555555;
      } while (uVar34 <= uVar21 && uVar21 - uVar34 != 0);
    }
    p_Var8 = local_e0;
                    /* try { // try from 00125784 to 001257ab has its CatchHandler @ 00126060 */
    p_Var13 = (_jobject *)facebook::jni::Environment::current();
    uVar9 = _JNIEnv::CallIntMethod
                      (p_Var13,p_Var8,*(undefined8 *)PTR_getColorFromJava_0012fbe0,
                       (ulong)(uint)param_2,puVar27);
    facebook::jni::throwPendingJniExceptionAsCppException();
    lVar15 = *(long *)(puVar7 + 0x50);
    local_120 = (long *)0x0;
    local_f0 = (uint *)0x0;
    if (lVar15 == 0) {
      pbVar19 = *(byte **)(puVar7 + 0x40);
    }
    else {
      pbVar19 = *(byte **)(puVar7 + 0x40);
      uVar11 = NEON_cnt(pbVar19,1);
      uVar38 = NEON_uaddlv(uVar11,1);
      uVar34 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar38) & 0xffffffff;
      if (uVar34 < 2) {
        pbVar12 = (byte *)((ulong)(pbVar19 + -1) & (ulong)pbVar32);
      }
      else {
        pbVar12 = pbVar32;
        if (pbVar19 <= pbVar32) {
          uVar21 = 0;
          if (pbVar19 != (byte *)0x0) {
            uVar21 = (ulong)pbVar32 / (ulong)pbVar19;
          }
          pbVar12 = pbVar32 + -(uVar21 * (long)pbVar19);
        }
      }
      plVar28 = *(long **)(*(long *)(puVar7 + 0x38) + (long)pbVar12 * 8);
      if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
        do {
          plVar33 = (long *)plVar28[2];
          if (pbVar32 == (byte *)plVar33[2]) {
            *(undefined4 *)(plVar33 + 3) = uVar9;
            plVar28 = *(long **)(puVar7 + 0x70);
            if ((plVar33 != plVar28) && (lVar15 = *plVar33, (long *)lVar15 != plVar28)) {
              puVar23 = (undefined8 *)plVar28[1];
              plVar20 = (long *)plVar33[1];
              *puVar23 = plVar33;
              *plVar33 = (long)plVar28;
              plVar33[1] = (long)puVar23;
              plVar28[1] = (long)plVar33;
              *(long **)(lVar15 + 8) = plVar20;
              *plVar20 = lVar15;
            }
            goto LAB_00125bc8;
          }
          plVar28 = (long *)*plVar28;
          if (plVar28 == (long *)0x0) break;
          pbVar16 = (byte *)plVar28[1];
          if (uVar34 < 2) {
            pbVar16 = (byte *)((ulong)pbVar16 & (ulong)(pbVar19 + -1));
          }
          else if (pbVar19 <= pbVar16) {
            uVar21 = 0;
            if (pbVar19 != (byte *)0x0) {
              uVar21 = (ulong)pbVar16 / (ulong)pbVar19;
            }
            pbVar16 = pbVar16 + -(uVar21 * (long)pbVar19);
          }
        } while (pbVar16 == pbVar12);
      }
    }
                    /* try { // try from 00125860 to 00125927 has its CatchHandler @ 00125fe0 */
    plVar28 = (long *)operator_new(0x20);
    *plVar28 = 0;
    plVar28[1] = 0;
    plVar28[2] = (long)pbVar32;
    *(undefined4 *)(plVar28 + 3) = uVar9;
    if (pbVar19 != (byte *)0x0) {
      uVar11 = NEON_cnt(pbVar19,1);
      uVar38 = NEON_uaddlv(uVar11,1);
      uVar34 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar38) & 0xffffffff;
      if (uVar34 < 2) {
        unaff_x27 = (byte *)((ulong)(pbVar19 + -1) & (ulong)pbVar32);
      }
      else {
        unaff_x27 = pbVar32;
        if (pbVar19 <= pbVar32) {
          uVar21 = 0;
          if (pbVar19 != (byte *)0x0) {
            uVar21 = (ulong)pbVar32 / (ulong)pbVar19;
          }
          unaff_x27 = pbVar32 + -(uVar21 * (long)pbVar19);
        }
      }
      plVar33 = *(long **)(*(long *)(puVar7 + 0x38) + (long)unaff_x27 * 8);
      if ((plVar33 != (long *)0x0) && (plVar33 = (long *)*plVar33, plVar33 != (long *)0x0)) {
        do {
          pbVar12 = (byte *)plVar33[1];
          if (pbVar12 == pbVar32) {
            if (*(byte **)(plVar33[2] + 0x10) == pbVar32) goto LAB_00125b10;
          }
          else {
            if (uVar34 < 2) {
              pbVar12 = (byte *)((ulong)pbVar12 & (ulong)(pbVar19 + -1));
            }
            else if (pbVar19 <= pbVar12) {
              uVar21 = 0;
              if (pbVar19 != (byte *)0x0) {
                uVar21 = (ulong)pbVar12 / (ulong)pbVar19;
              }
              pbVar12 = pbVar12 + -(uVar21 * (long)pbVar19);
            }
            if (pbVar12 != unaff_x27) break;
          }
          plVar33 = (long *)*plVar33;
        } while (plVar33 != (long *)0x0);
      }
    }
    plVar33 = (long *)operator_new(0x18);
    fVar40 = *(float *)(puVar7 + 0x60);
    fVar39 = (float)(lVar15 + 1);
    *plVar33 = 0;
    plVar33[1] = (long)pbVar32;
    plVar33[2] = (long)plVar28;
    if ((pbVar19 == (byte *)0x0) || (fVar40 * (float)pbVar19 < fVar39)) {
      if (pbVar19 < (byte *)0x3) {
        uVar34 = 1;
      }
      else {
        uVar34 = (ulong)(((ulong)pbVar19 & (ulong)(pbVar19 + -1)) != 0);
      }
      pbVar12 = (byte *)(uVar34 | (long)pbVar19 << 1);
      pbVar16 = (byte *)(long)(fVar39 / fVar40);
      if (pbVar12 <= pbVar16) {
        pbVar12 = pbVar16;
      }
      if (pbVar12 + -1 == (byte *)0x0) {
        pbVar12 = (byte *)0x2;
      }
      else if (((ulong)pbVar12 & (ulong)(pbVar12 + -1)) != 0) {
                    /* try { // try from 001259a8 to 00125a63 has its CatchHandler @ 00125eb0 */
        pbVar12 = (byte *)std::__ndk1::__next_prime((ulong)pbVar12);
        pbVar19 = *(byte **)(puVar7 + 0x40);
      }
      if (pbVar19 < pbVar12) {
LAB_001259c0:
        FUN_0012a0b8(pbVar12);
      }
      else if (pbVar12 < pbVar19) {
        pbVar16 = (byte *)(long)((float)*(ulong *)(puVar7 + 0x50) / *(float *)(puVar7 + 0x60));
        if (pbVar19 < (byte *)0x3) {
LAB_00125a60:
          pbVar16 = (byte *)std::__ndk1::__next_prime((ulong)pbVar16);
        }
        else {
          uVar11 = NEON_cnt(pbVar19,1);
          uVar38 = NEON_uaddlv(uVar11,1);
          if (1 < (uint)CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar38)) goto LAB_00125a60;
          if ((byte *)0x1 < pbVar16) {
            pbVar16 = (byte *)(1L << (-LZCOUNT(pbVar16 + -1) & 0x3fU));
          }
        }
        if (pbVar12 <= pbVar16) {
          pbVar12 = pbVar16;
        }
        if (pbVar12 < pbVar19) goto LAB_001259c0;
      }
      pbVar19 = *(byte **)(puVar7 + 0x40);
      if (((ulong)pbVar19 & (ulong)(pbVar19 + -1)) == 0) {
        unaff_x27 = (byte *)((ulong)(pbVar19 + -1) & (ulong)pbVar32);
      }
      else {
        unaff_x27 = pbVar32;
        if (pbVar19 <= pbVar32) {
          uVar34 = 0;
          if (pbVar19 != (byte *)0x0) {
            uVar34 = (ulong)pbVar32 / (ulong)pbVar19;
          }
          unaff_x27 = pbVar32 + -(uVar34 * (long)pbVar19);
        }
      }
    }
    lVar15 = *(long *)(puVar7 + 0x38);
    plVar20 = *(long **)(lVar15 + (long)unaff_x27 * 8);
    if (plVar20 == (long *)0x0) {
      plVar20 = (long *)(puVar7 + 0x48);
      lVar30 = *plVar20;
      *plVar20 = (long)plVar33;
      *plVar33 = lVar30;
      *(long **)(lVar15 + (long)unaff_x27 * 8) = plVar20;
      if (*plVar33 != 0) {
        pbVar12 = *(byte **)(*plVar33 + 8);
        if (((ulong)pbVar19 & (ulong)(pbVar19 + -1)) == 0) {
          pbVar12 = (byte *)((ulong)pbVar12 & (ulong)(pbVar19 + -1));
        }
        else if (pbVar19 <= pbVar12) {
          uVar34 = 0;
          if (pbVar19 != (byte *)0x0) {
            uVar34 = (ulong)pbVar12 / (ulong)pbVar19;
          }
          pbVar12 = pbVar12 + -(uVar34 * (long)pbVar19);
        }
        plVar20 = (long *)(*(long *)(puVar7 + 0x38) + (long)pbVar12 * 8);
        goto LAB_00125b00;
      }
    }
    else {
      *plVar33 = *plVar20;
LAB_00125b00:
      *plVar20 = (long)plVar33;
    }
    *(long *)(puVar7 + 0x50) = *(long *)(puVar7 + 0x50) + 1;
LAB_00125b10:
    lVar15 = *(long *)(puVar7 + 0x70);
    puVar23 = *(undefined8 **)(lVar15 + 8);
    *plVar28 = lVar15;
    plVar28[1] = (long)puVar23;
    *(long **)(lVar15 + 8) = plVar28;
    *puVar23 = plVar28;
    *(long *)(puVar7 + 0x68) = *(long *)(puVar7 + 0x68) + 1;
    if ((*(ulong *)(puVar7 + 0x80) != 0) && (*(ulong *)(puVar7 + 0x80) < *(ulong *)(puVar7 + 0x50)))
    {
      uVar11 = *(undefined8 *)(puVar7 + 0x88);
      local_90 = local_f0;
      if (local_f0 != (uint *)0x0) {
        if (local_f0 == (uint *)&local_110) {
          local_90 = &local_b0;
          (**(code **)(local_110 + 6))(&local_110,&local_b0);
        }
        else {
                    /* try { // try from 00125b64 to 00125b8b has its CatchHandler @ 00125fe0 */
          local_90 = (uint *)(**(code **)(*(long *)local_f0 + 0x10))();
        }
      }
                    /* try { // try from 00125b8c to 00125b9b has its CatchHandler @ 00125ed0 */
      FUN_0012a3fc(uVar11,&local_b0);
      if (local_90 == &local_b0) {
        lVar15 = 4;
        puVar14 = &local_b0;
      }
      else {
        if (local_90 == (uint *)0x0) goto LAB_00125bc8;
        lVar15 = 5;
        puVar14 = local_90;
      }
      (**(code **)(*(long *)puVar14 + lVar15 * 8))();
    }
LAB_00125bc8:
    if (local_f0 == (uint *)&local_110) {
      lVar15 = 4;
      puVar14 = (uint *)&local_110;
LAB_00125bec:
      (**(code **)(*(long *)puVar14 + lVar15 * 8))();
      if (local_120 == local_140) {
        lVar15 = 4;
        plVar28 = local_140;
      }
      else {
        if (local_120 == (long *)0x0) goto LAB_00125c28;
        lVar15 = 5;
        plVar28 = local_120;
      }
      (**(code **)(*plVar28 + lVar15 * 8))();
    }
    else if (local_f0 != (uint *)0x0) {
      lVar15 = 5;
      puVar14 = local_f0;
      goto LAB_00125bec;
    }
LAB_00125c28:
    if (puVar27 != (undefined8 *)0x0) {
                    /* try { // try from 00125c2c to 00125c3f has its CatchHandler @ 00125fc8 */
      plVar28 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar28 + 0xb8))(plVar28,puVar27);
    }
    p_Var8 = local_e0;
    if (local_e0 != (_jmethodID *)0x0) {
                    /* try { // try from 00125c48 to 00125c5b has its CatchHandler @ 00125fc4 */
      plVar28 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar28 + 0xb0))(plVar28,p_Var8);
    }
LAB_00125c5c:
    std::__ndk1::mutex::unlock();
    FUN_0012a754(local_160);
    puVar27 = local_170;
    local_170 = (undefined8 *)0x0;
    if (puVar27 != (undefined8 *)0x0) {
      operator_delete(puVar27);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return uVar9;
  }
LAB_00126260:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00126264  FUN_00126264 =====

/* WARNING: Removing unreachable block (ram,0x00126668) */
/* WARNING: Removing unreachable block (ram,0x001265cc) */

void FUN_00126264(undefined4 *param_1,long *param_2)

{
  char *pcVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint local_2c;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar5 = param_2[1];
  uVar9 = param_2[2];
  uVar8 = uVar5;
  if (uVar5 <= uVar9) {
    uVar10 = 0;
LAB_00126314:
    if (((0x80 < uVar10) || (uVar10 == 0x5f)) || (uVar10 - 0x41 < 0x1a)) {
      lVar6 = *param_2;
LAB_00126610:
      do {
        if (uVar9 < uVar5) {
          bVar2 = *(byte *)(lVar6 + uVar9);
          uVar10 = (uint)bVar2;
          if ((0x19 < bVar2 - 0x61) && (bVar2 < 0x81)) goto LAB_00126630;
        }
        else {
          uVar10 = 0;
LAB_00126630:
          if ((uVar10 != 0x5f) &&
             (((0x19 < uVar10 - 0x41 && (uVar10 != 0x2d)) && (9 < uVar10 - 0x30))))
          goto LAB_0012666c;
        }
        uVar9 = uVar9 + 1;
        param_2[2] = uVar9;
      } while( true );
    }
    if (uVar10 != 0) {
      lVar6 = *param_2;
      uVar8 = uVar5;
      if (uVar9 + 1 <= uVar5) {
        uVar8 = uVar9 + 1;
      }
      *param_1 = 4;
      *(long *)(param_1 + 2) = lVar6;
      *(ulong *)(param_1 + 4) = uVar8;
      *param_2 = lVar6 + uVar8;
      param_2[1] = uVar5 - uVar8;
      param_2[2] = 0;
      goto LAB_001266b8;
    }
    *param_1 = 6;
    goto LAB_00126374;
  }
  lVar6 = *param_2;
  bVar2 = *(byte *)(lVar6 + uVar9);
  uVar10 = (uint)bVar2;
  switch((uint)bVar2) {
  case 9:
  case 10:
  case 0xd:
  case 0x20:
    do {
      uVar7 = uVar9;
      if (0x20 < *(byte *)(lVar6 + uVar9) ||
          (1L << ((ulong)*(byte *)(lVar6 + uVar9) & 0x3f) & 0x100002600U) == 0) break;
      uVar9 = uVar9 + 1;
      param_2[2] = uVar9;
      uVar7 = uVar5;
    } while (uVar5 != uVar9);
    uVar11 = 0xe;
    param_2[2] = 0;
    if (uVar7 <= uVar5) {
      uVar8 = uVar7;
    }
    break;
  default:
    if (bVar2 - 0x30 < 10) {
      lVar3 = *(long *)(lVar3 + 0x28);
joined_r0x001264d0:
      if (lVar3 == lVar4) {
        FUN_00126714();
        return;
      }
      goto LAB_00126710;
    }
    if (uVar10 - 0x61 < 0x1a) goto LAB_00126610;
    goto LAB_00126314;
  case 0x23:
    uVar7 = uVar9 + 1;
    if (uVar7 < uVar5) {
      uVar10 = (uint)*(byte *)(lVar6 + uVar7);
      if (*(byte *)(lVar6 + uVar7) - 0x61 < 0x1a) goto LAB_00126550;
    }
    else {
      uVar10 = 0;
    }
    if ((((0x80 < uVar10) || (uVar10 == 0x5f)) || (uVar10 - 0x41 < 0x1a)) ||
       ((uVar10 == 0x2d || (uVar10 - 0x30 < 10)))) {
LAB_00126550:
      uVar9 = 0;
      uVar8 = uVar5;
      if (uVar7 <= uVar5) {
        uVar8 = uVar7;
      }
      lVar6 = lVar6 + uVar8;
      uVar5 = uVar5 - uVar8;
      *param_2 = lVar6;
      param_2[1] = uVar5;
      do {
        param_2[2] = uVar9;
        if (uVar9 < uVar5) {
          bVar2 = *(byte *)(lVar6 + uVar9);
          uVar10 = (uint)bVar2;
          if ((0x19 < bVar2 - 0x61) && (bVar2 < 0x81)) goto LAB_00126594;
        }
        else {
          uVar10 = 0;
LAB_00126594:
          if ((uVar10 != 0x5f) &&
             (((0x19 < uVar10 - 0x41 && (uVar10 != 0x2d)) && (9 < uVar10 - 0x30))))
          goto LAB_001265d0;
        }
        uVar9 = uVar9 + 1;
      } while( true );
    }
    goto LAB_0012652c;
  case 0x28:
    param_2[2] = 0;
    uVar11 = 0xb;
    if (uVar9 + 1 <= uVar5) {
      uVar8 = uVar9 + 1;
    }
    break;
  case 0x29:
    param_2[2] = 0;
    uVar11 = 1;
    if (uVar9 + 1 <= uVar5) {
      uVar8 = uVar9 + 1;
    }
    break;
  case 0x2b:
  case 0x2d:
    if (uVar9 + 1 < uVar5) {
      uVar10 = (uint)*(byte *)(lVar6 + uVar9 + 1);
      if (uVar10 - 0x30 < 10) goto LAB_001264c4;
      if ((uVar10 == 0x2e) && (uVar9 + 2 < uVar5)) {
        bVar2 = *(byte *)(lVar6 + uVar9 + 2);
        goto joined_r0x001264c0;
      }
    }
    goto LAB_0012652c;
  case 0x2c:
    param_2[2] = 0;
    uVar11 = 3;
    if (uVar9 + 1 <= uVar5) {
      uVar8 = uVar9 + 1;
    }
    break;
  case 0x2e:
    if (uVar9 + 1 < uVar5) {
      bVar2 = *(byte *)(lVar6 + uVar9 + 1);
joined_r0x001264c0:
      if (bVar2 - 0x30 < 10) {
LAB_001264c4:
        lVar3 = *(long *)(lVar3 + 0x28);
        goto joined_r0x001264d0;
      }
    }
LAB_0012652c:
    if (uVar9 + 1 <= uVar5) {
      uVar8 = uVar9 + 1;
    }
    *param_1 = 4;
    *param_2 = lVar6 + uVar8;
    param_2[1] = uVar5 - uVar8;
    param_2[2] = 0;
LAB_001266b4:
    *(long *)(param_1 + 2) = lVar6;
    *(ulong *)(param_1 + 4) = uVar8;
LAB_001266b8:
    param_1[6] = 0;
    if (*(long *)(lVar3 + 0x28) == lVar4) {
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 10) = 0;
      return;
    }
    goto LAB_00126710;
  case 0x5b:
    param_2[2] = 0;
    uVar11 = 0xc;
    if (uVar9 + 1 <= uVar5) {
      uVar8 = uVar9 + 1;
    }
    break;
  case 0x5d:
    param_2[2] = 0;
    uVar11 = 2;
    if (uVar9 + 1 <= uVar5) {
      uVar8 = uVar9 + 1;
    }
    break;
  case 0x7b:
    param_2[2] = 0;
    uVar11 = 10;
    if (uVar9 + 1 <= uVar5) {
      uVar8 = uVar9 + 1;
    }
    break;
  case 0x7d:
    param_2[2] = 0;
    *param_1 = 0;
    if (uVar9 + 1 <= uVar5) {
      uVar8 = uVar9 + 1;
    }
    goto LAB_00126300;
  }
  *param_1 = uVar11;
LAB_00126300:
  *param_2 = lVar6 + uVar8;
  param_2[1] = uVar5 - uVar8;
LAB_00126374:
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    param_1[6] = 0;
    return;
  }
LAB_00126710:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001265d0:
  uVar8 = uVar5;
  if (uVar9 <= uVar5) {
    uVar8 = uVar9;
  }
  *param_1 = 0xf;
  *(long *)(param_1 + 2) = lVar6;
  *(ulong *)(param_1 + 4) = uVar8;
  *param_2 = lVar6 + uVar8;
  param_2[1] = uVar5 - uVar8;
  param_2[2] = 0;
  goto LAB_001266b8;
LAB_0012666c:
  if (uVar9 <= uVar5) {
    uVar8 = uVar9;
  }
  pcVar1 = (char *)(lVar6 + uVar8);
  *param_2 = (long)pcVar1;
  param_2[1] = uVar5 - uVar8;
  param_2[2] = 0;
  if ((uVar5 <= uVar9) || (*pcVar1 != '(')) {
    *(long *)(param_1 + 2) = lVar6;
    *(ulong *)(param_1 + 4) = uVar8;
    *param_1 = 8;
    param_1[6] = 0;
    *(undefined8 *)(param_1 + 9) = 0;
    *(ulong *)(param_1 + 7) = (ulong)local_2c;
    param_1[0xb] = 0;
    if (*(long *)(lVar3 + 0x28) == lVar4) {
      return;
    }
    goto LAB_00126710;
  }
  param_2[2] = 0;
  *param_2 = (long)(pcVar1 + 1);
  param_2[1] = (uVar5 - uVar8) + -1;
  *param_1 = 7;
  goto LAB_001266b4;
}


// ===== 00126714  FUN_00126714 =====

void FUN_00126714(undefined4 *param_1,float param_2,long *param_3)

{
  long *plVar1;
  ulong *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
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
  long lVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  ushort uVar33;
  bool bVar34;
  bool bVar35;
  undefined8 *__dest;
  long lVar36;
  undefined8 *__src;
  byte *pbVar37;
  byte *pbVar38;
  long lVar39;
  ulong uVar40;
  ulong *puVar41;
  byte *pbVar42;
  int iVar43;
  byte *pbVar44;
  byte *pbVar45;
  ulong uVar46;
  int iVar47;
  uint uVar48;
  uint uVar49;
  ulong uVar50;
  ulong uVar51;
  byte *pbVar52;
  byte *pbVar53;
  undefined1 (*pauVar54) [16];
  long lVar55;
  long lVar56;
  byte *pbVar57;
  ulong uVar58;
  ulong uVar59;
  ulong uVar60;
  undefined8 *__s;
  byte *pbVar61;
  ulong uVar62;
  ulong uVar63;
  ulong uVar64;
  ulong uVar65;
  float fVar66;
  undefined4 uVar67;
  undefined4 uVar68;
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
  long lStack_490;
  ulong *local_488;
  ulong local_480;
  byte *local_478;
  undefined8 local_470;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined8 uStack_460;
  ulong uStack_458;
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
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  ulong local_280;
  ulong uStack_278;
  undefined8 local_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined8 uStack_260;
  ulong local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong local_80;
  long local_78;
  
  lVar26 = tpidr_el0;
  local_78 = *(long *)(lVar26 + 0x28);
  pbVar3 = (byte *)*param_3;
  pbVar4 = (byte *)param_3[1];
  pbVar57 = pbVar3 + (long)pbVar4;
  pbVar38 = pbVar57;
  if (pbVar4 != (byte *)0x0) {
    bVar5 = *pbVar3;
    if ((bVar5 == 0x2d) || (pbVar52 = pbVar3, bVar5 == 0x2b)) {
      if (pbVar4 != (byte *)0x1) {
        pbVar52 = pbVar3 + 1;
        if ((*pbVar52 == 0x2e) || (*pbVar52 - 0x30 < 10)) goto LAB_0012678c;
      }
    }
    else {
LAB_0012678c:
      lVar55 = 0;
      uVar59 = 0;
      lVar56 = (long)pbVar57 - (long)pbVar52;
      do {
        bVar7 = pbVar52[lVar55];
        if (9 < bVar7 - 0x30) {
          pbVar53 = pbVar52 + lVar55;
          if (bVar7 != 0x2e) {
            pbVar44 = (byte *)0x0;
            pbVar61 = (byte *)0x0;
            pbVar42 = (byte *)0x0;
            pbVar38 = pbVar53;
            lVar56 = lVar55;
            goto joined_r0x001269b4;
          }
          pbVar61 = pbVar3 + (long)(pbVar4 + (~(ulong)pbVar52 - lVar55));
          pbVar44 = pbVar53 + 1;
          pbVar45 = pbVar44;
          pbVar42 = pbVar44;
          if ((long)pbVar61 < 8) goto joined_r0x00126aec;
          lVar56 = ~(ulong)pbVar52 - lVar55;
          goto LAB_001268f4;
        }
        lVar55 = lVar55 + 1;
        uVar59 = ((ulong)bVar7 + uVar59 * 10) - 0x30;
      } while (pbVar52 + lVar55 != pbVar57);
      pbVar44 = (byte *)0x0;
      pbVar61 = (byte *)0x0;
      pbVar42 = (byte *)0x0;
      lVar55 = lVar56;
      pbVar53 = pbVar57;
      if (lVar56 != 0) goto LAB_001267e4;
    }
LAB_00126b08:
    pbVar52 = pbVar3;
    if (bVar5 == 0x2d || bVar5 == 0x2b) {
      pbVar52 = pbVar3 + 1;
    }
    pbVar38 = pbVar3;
    if (2 < (long)pbVar57 - (long)pbVar52) {
      if ((*pbVar52 & 0xdf) == 0x49) {
        if (((pbVar52[1] & 0xdf) == 0x4e) && ((pbVar52[2] & 0xdf) == 0x46)) {
          if (((ulong)((long)pbVar57 - (long)pbVar52) < 8) ||
             (((((pbVar52[3] & 0xdf) != 0x49 || ((pbVar52[4] & 0xdf) != 0x4e)) ||
               ((pbVar52[5] & 0xdf) != 0x49)) ||
              (((pbVar52[6] & 0xdf) != 0x54 || ((pbVar52[7] & 0xdf) != 0x59)))))) {
            lVar55 = 3;
          }
          else {
            lVar55 = 8;
          }
          param_2 = -INFINITY;
          pbVar38 = pbVar52 + lVar55;
          if (bVar5 != 0x2d) {
            param_2 = INFINITY;
          }
        }
      }
      else if ((((*pbVar52 & 0xdf) == 0x4e) && ((pbVar52[1] & 0xdf) == 0x41)) &&
              ((pbVar52[2] & 0xdf) == 0x4e)) {
        pbVar53 = pbVar52 + 3;
        param_2 = -NAN;
        if (bVar5 != 0x2d) {
          param_2 = NAN;
        }
        pbVar38 = pbVar57;
        if (((pbVar53 != pbVar57) && (pbVar38 = pbVar53, pbVar52[3] == 0x28)) &&
           (pbVar52 = pbVar52 + 4, pbVar52 != pbVar57)) {
          uVar49 = (uint)*pbVar52;
          if (*pbVar52 != 0x29) {
            do {
              if (((0x19 < (uVar49 & 0xdf) - 0x41) && (uVar49 - 0x3a < 0xfffffff6 && uVar49 != 0x5f)
                  ) || (pbVar52 = pbVar52 + 1, pbVar52 == pbVar57)) goto LAB_001281c4;
              uVar49 = (uint)*pbVar52;
            } while (uVar49 != 0x29);
          }
          pbVar38 = pbVar52 + 1;
        }
      }
    }
  }
  goto LAB_001281c4;
  while( true ) {
    lVar56 = lVar56 + -8;
    pbVar42 = pbVar42 + 8;
    uVar50 = uVar50 * 10 + (uVar50 >> 8);
    uVar59 = uVar59 * 100000000 +
             ((uVar50 & 0xff000000ff) * 0xf424000000064 +
              (uVar50 >> 0x10 & 0xff000000ff) * 0x271000000001 >> 0x20);
    if ((long)(pbVar57 + lVar56) < 8) break;
LAB_001268f4:
    uVar50 = *(long *)pbVar42 + 0xcfcfcfcfcfcfcfd0;
    if (((*(long *)pbVar42 + 0x4646464646464646U | uVar50) & 0x8080808080808080) != 0) break;
  }
  pbVar45 = (byte *)-lVar56;
joined_r0x00126aec:
  if (pbVar42 != pbVar57) {
    pbVar61 = pbVar42 + ((long)pbVar57 - (long)pbVar45);
    do {
      bVar7 = *pbVar42;
      pbVar38 = pbVar42;
      if (9 < bVar7 - 0x30) break;
      pbVar42 = pbVar42 + 1;
      uVar59 = uVar59 * 10 + (ulong)(byte)(bVar7 - 0x30);
      pbVar38 = pbVar61;
    } while (pbVar42 != pbVar57);
    pbVar61 = pbVar38 + (~(ulong)pbVar52 - lVar55);
  }
  pbVar42 = pbVar52 + (lVar55 - (long)pbVar38) + 1;
  lVar56 = lVar55 - (long)pbVar42;
joined_r0x001269b4:
  if (lVar56 == 0) goto LAB_00126b08;
LAB_001267e4:
  pbVar45 = pbVar52;
  if (pbVar38 == pbVar57) {
    lVar36 = 0;
    pbVar38 = pbVar57;
joined_r0x001269c8:
    if (0x13 < lVar56) goto LAB_001269ec;
LAB_00126a8c:
    if ((byte *)0x14 < pbVar42 + 10) {
LAB_00126c94:
      bVar35 = true;
      goto LAB_00126cd4;
    }
    if (*(float *)PTR_fmin_0012fba0 + 1.0 == 1.0 - *(float *)PTR_fmin_0012fba0) {
      if (0x1000000 < uVar59) goto LAB_00126c94;
      if ((long)pbVar42 < 0) {
        fVar66 = (float)uVar59 / *(float *)(&DAT_00108f98 + (long)pbVar42 * -4);
      }
      else {
        fVar66 = *(float *)(&DAT_00108f98 + (long)pbVar42 * 4) * (float)uVar59;
      }
      param_2 = -fVar66;
      if (bVar5 != 0x2d) {
        param_2 = fVar66;
      }
    }
    else {
      if (((long)pbVar42 < 0) || (*(ulong *)(&DAT_00108fc8 + (long)pbVar42 * 8) < uVar59))
      goto LAB_00126c94;
      if (uVar59 == 0) {
        param_2 = -0.0;
        if (bVar5 != 0x2d) {
          param_2 = 0.0;
        }
      }
      else {
        param_2 = -(*(float *)(&DAT_00108f98 + (long)pbVar42 * 4) * (float)uVar59);
        if (bVar5 != 0x2d) {
          param_2 = *(float *)(&DAT_00108f98 + (long)pbVar42 * 4) * (float)uVar59;
        }
      }
    }
  }
  else {
    if (((*pbVar38 | 0x20) == 0x65) && (pbVar37 = pbVar38 + 1, pbVar37 != pbVar57)) {
      bVar7 = *pbVar37;
      if (bVar7 == 0x2d || bVar7 == 0x2b) {
        pbVar37 = pbVar38 + 2;
      }
      if ((pbVar37 != pbVar57) && (*pbVar37 - 0x30 < 10)) {
        lVar36 = 0;
        do {
          bVar6 = *pbVar37;
          pbVar38 = pbVar37;
          lVar39 = lVar36;
          if (9 < bVar6 - 0x30) break;
          pbVar37 = pbVar37 + 1;
          lVar39 = lVar36 * 10 + (ulong)(byte)(bVar6 - 0x30);
          if (0xfffffff < lVar36) {
            lVar39 = lVar36;
          }
          pbVar38 = pbVar57;
          lVar36 = lVar39;
        } while (pbVar37 != pbVar57);
        lVar36 = -lVar39;
        if (bVar7 != 0x2d) {
          lVar36 = lVar39;
        }
        pbVar42 = pbVar42 + lVar36;
        goto joined_r0x001269c8;
      }
    }
    lVar36 = 0;
    if (lVar56 < 0x14) goto LAB_00126a8c;
LAB_001269ec:
    do {
      bVar7 = *pbVar45;
      if ((bVar7 != 0x30) && (bVar7 != 0x2e)) break;
      pbVar45 = pbVar45 + 1;
      lVar56 = lVar56 - (ulong)(bVar7 == 0x30);
    } while (pbVar45 != pbVar57);
    if (lVar56 < 0x14) goto LAB_00126a8c;
    uVar59 = 0;
    pbVar57 = pbVar52;
    lVar56 = lVar55;
    if (lVar55 == 0) {
LAB_00126a58:
      pbVar42 = pbVar44;
      pbVar37 = pbVar44;
      pbVar45 = pbVar44;
      pbVar57 = pbVar61;
      if (pbVar61 != (byte *)0x0) {
        do {
          pbVar57 = pbVar57 + -1;
          pbVar45 = pbVar37 + 1;
          uVar59 = ((ulong)*pbVar37 + uVar59 * 10) - 0x30;
          pbVar37 = pbVar45;
        } while (uVar59 < 1000000000000000000 && pbVar57 != (byte *)0x0);
      }
    }
    else {
      do {
        lVar56 = lVar56 + -1;
        pbVar45 = pbVar57 + 1;
        uVar59 = ((ulong)*pbVar57 + uVar59 * 10) - 0x30;
        pbVar57 = pbVar45;
      } while (uVar59 < 1000000000000000000 && lVar56 != 0);
      pbVar42 = pbVar53;
      if (uVar59 < 1000000000000000000) goto LAB_00126a58;
    }
    bVar35 = false;
    pbVar42 = pbVar42 + (lVar36 - (long)pbVar45);
LAB_00126cd4:
    uVar46 = 0;
    uVar50 = 0;
    iVar47 = (int)pbVar42;
    if (((long)(pbVar42 + 0x40) < 0 == SCARRY8((long)pbVar42,0x40)) && (uVar59 != 0)) {
      if ((long)pbVar42 < 0x27) {
        uVar58 = uVar59 << (LZCOUNT(uVar59) & 0x3fU);
        auVar70._8_8_ = 0;
        auVar70._0_8_ = *(ulong *)(&DAT_00109028 + (long)(iVar47 * 2 + 0x2ac) * 8);
        auVar73._8_8_ = 0;
        auVar73._0_8_ = uVar58;
        uVar46 = SUB168(auVar70 * auVar73,8);
        uVar50 = *(ulong *)(&DAT_00109028 + (long)(iVar47 * 2 + 0x2ac) * 8) * uVar58;
        if ((((uVar46 ^ 0xffffffffffffffff) & 0x3fffffffff) == 0) &&
           (auVar75._8_8_ = 0,
           auVar75._0_8_ = *(ulong *)(&DAT_00109028 + (long)(iVar47 * 2 + 0x2ad) * 8),
           auVar78._8_8_ = 0, auVar78._0_8_ = uVar58, uVar58 = SUB168(auVar75 * auVar78,8),
           bVar34 = CARRY8(uVar58,uVar50), uVar50 = uVar58 + uVar50, bVar34)) {
          uVar46 = uVar46 + 1;
        }
        uVar64 = uVar46 >> 0x3f | 0x26;
        iVar43 = (-(int)LZCOUNT(uVar59) - (int)((long)uVar46 >> 0x3f)) + (iVar47 * 0x3526a >> 0x10);
        uVar58 = uVar46 >> uVar64;
        uVar49 = iVar43 + 0xbe;
        if ((int)uVar49 < 1) {
          if (1 - uVar49 < 0x40) {
            uVar58 = uVar58 >> ((ulong)(1 - uVar49) & 0x3f);
            uVar58 = (uVar58 & 1) + uVar58;
            uVar50 = uVar58 >> 1;
            uVar46 = (ulong)((uVar58 & 0x7000000) != 0);
          }
          else {
            uVar46 = 0;
            uVar50 = 0;
          }
        }
        else {
          uVar62 = uVar58;
          if ((((byte *)0xffffffffffffffe3 < pbVar42 + -0xb) && (uVar50 < 2)) &&
             (uVar62 = uVar58 & 0x3fffffc, uVar58 << uVar64 != uVar46 || (uVar58 & 3) != 1)) {
            uVar62 = uVar58;
          }
          uVar62 = (uVar62 & 1) + uVar62;
          bVar34 = uVar62 >> 0x19 != 0;
          uVar50 = uVar62 >> 1 & 0xffffffffff7fffff;
          if (bVar34) {
            uVar49 = iVar43 + 0xbf;
          }
          if (bVar34 || 0xfe < uVar49) {
            uVar50 = 0;
          }
          if (0xfe < (int)uVar49) {
            uVar49 = 0xff;
          }
          uVar46 = (ulong)uVar49;
        }
      }
      else {
        uVar50 = 0;
        uVar46 = 0xff;
      }
    }
    if (!bVar35) {
      uVar58 = 0;
      uVar49 = 0;
      if (((long)(pbVar42 + 0x40) < 0 == SCARRY8((long)pbVar42,0x40)) &&
         (uVar59 != 0xffffffffffffffff)) {
        if ((long)pbVar42 < 0x27) {
          uVar62 = LZCOUNT(uVar59 + 1);
          uVar65 = uVar59 + 1 << (uVar62 & 0x3f);
          auVar79._8_8_ = 0;
          auVar79._0_8_ = *(ulong *)(&DAT_00109028 + (long)(iVar47 * 2 + 0x2ac) * 8);
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar65;
          uVar64 = SUB168(auVar79 * auVar18,8);
          uVar58 = *(ulong *)(&DAT_00109028 + (long)(iVar47 * 2 + 0x2ac) * 8) * uVar65;
          if ((((uVar64 ^ 0xffffffffffffffff) & 0x3fffffffff) == 0) &&
             (auVar9._8_8_ = 0,
             auVar9._0_8_ = *(ulong *)(&DAT_00109028 + (long)(iVar47 * 2 + 0x2ad) * 8),
             auVar19._8_8_ = 0, auVar19._0_8_ = uVar65, uVar65 = SUB168(auVar9 * auVar19,8),
             bVar35 = CARRY8(uVar65,uVar58), uVar58 = uVar65 + uVar58, bVar35)) {
            uVar64 = uVar64 + 1;
          }
          uVar65 = uVar64 >> 0x3f | 0x26;
          iVar43 = (-(int)uVar62 - (int)((long)uVar64 >> 0x3f)) + (iVar47 * 0x3526a >> 0x10);
          uVar62 = uVar64 >> uVar65;
          uVar49 = iVar43 + 0xbe;
          if ((int)uVar49 < 1) {
            if (1 - uVar49 < 0x40) {
              uVar62 = uVar62 >> ((ulong)(1 - uVar49) & 0x3f);
              uVar62 = (uVar62 & 1) + uVar62;
              uVar58 = uVar62 >> 1;
              uVar49 = (uint)((uVar62 & 0x7000000) != 0);
            }
            else {
              uVar49 = 0;
              uVar58 = 0;
            }
          }
          else {
            uVar60 = uVar62;
            if ((((byte *)0xffffffffffffffe3 < pbVar42 + -0xb) && (uVar58 < 2)) &&
               (uVar60 = uVar62 & 0x3fffffc, uVar62 << uVar65 != uVar64 || (uVar62 & 3) != 1)) {
              uVar60 = uVar62;
            }
            uVar60 = (uVar60 & 1) + uVar60;
            bVar35 = uVar60 >> 0x19 != 0;
            uVar58 = uVar60 >> 1 & 0xffffffffff7fffff;
            if (bVar35) {
              uVar49 = iVar43 + 0xbf;
            }
            if (bVar35 || 0xfe < uVar49) {
              uVar58 = 0;
            }
            if (0xfe < (int)uVar49) {
              uVar49 = 0xff;
            }
          }
        }
        else {
          uVar58 = 0;
          uVar49 = 0xff;
        }
      }
      if ((uVar50 != uVar58) || (uVar49 != (uint)uVar46)) {
        uVar50 = uVar59 << (LZCOUNT(uVar59) & 0x3fU);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = *(ulong *)(&DAT_00109028 + (long)(iVar47 * 2 + 0x2ac) * 8);
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar50;
        uVar46 = SUB168(auVar10 * auVar20,8);
        if ((((uVar46 ^ 0xffffffffffffffff) & 0x3fffffffff) == 0) &&
           (auVar11._8_8_ = 0,
           auVar11._0_8_ = *(ulong *)(&DAT_00109028 + (long)(iVar47 * 2 + 0x2ad) * 8),
           auVar21._8_8_ = 0, auVar21._0_8_ = uVar50,
           CARRY8(SUB168(auVar11 * auVar21,8),
                  *(ulong *)(&DAT_00109028 + (long)(iVar47 * 2 + 0x2ac) * 8) * uVar50))) {
          uVar46 = uVar46 + 1;
        }
        uVar50 = uVar46 << (uVar46 >> 0x3f ^ 1);
        uVar46 = (ulong)(((-(int)LZCOUNT(uVar59) - (int)((long)uVar46 >> 0x3f)) +
                         (iVar47 * 0x3526a >> 0x10)) - 0x7f6a);
      }
    }
    if ((int)uVar46 < 0) {
      uVar58 = uVar59;
      if (uVar59 >> 4 < 0x271) {
        if (uVar59 < 100) goto LAB_0012709c;
LAB_00127064:
        do {
          uVar58 = uVar59 >> 4;
          uVar49 = (int)pbVar42 + 2;
          pbVar42 = (byte *)(ulong)uVar49;
          uVar59 = uVar59 / 100;
        } while (0x270 < uVar58);
      }
      else {
        do {
          pbVar42 = (byte *)(ulong)((int)pbVar42 + 4);
          uVar59 = uVar58 / 10000;
          bVar35 = 99999999 < uVar58;
          uVar58 = uVar59;
        } while (bVar35);
        if (99 < uVar59) goto LAB_00127064;
LAB_0012709c:
        uVar49 = (uint)pbVar42;
      }
      if (9 < uVar59) {
        do {
          uVar49 = (int)pbVar42 + 1;
          pbVar42 = (byte *)(ulong)uVar49;
          bVar35 = 99 < uVar59;
          uVar59 = uVar59 / 10;
        } while (bVar35);
      }
      pbVar42 = pbVar52 + lVar55;
      local_280 = 0;
      uStack_458 = 0;
      uStack_460._0_4_ = 0;
      uStack_460._4_4_ = 0;
      uStack_448 = 0;
      uStack_450 = 0;
      uStack_438 = 0;
      local_440 = 0;
      uStack_428 = 0;
      uStack_430 = 0;
      uStack_418 = 0;
      local_420 = 0;
      uStack_408 = 0;
      uStack_410 = 0;
      uStack_3f8 = 0;
      local_400 = 0;
      uStack_3e8 = 0;
      uStack_3f0 = 0;
      uStack_3d8 = 0;
      local_3e0 = 0;
      uStack_3c8 = 0;
      uStack_3d0 = 0;
      uStack_3b8 = 0;
      local_3c0 = 0;
      uStack_3a8 = 0;
      uStack_3b0 = 0;
      uStack_398 = 0;
      local_3a0 = 0;
      uStack_388 = 0;
      uStack_390 = 0;
      uStack_378 = 0;
      local_380 = 0;
      uStack_368 = 0;
      uStack_370 = 0;
      uStack_358 = 0;
      local_360 = 0;
      uStack_348 = 0;
      uStack_350 = 0;
      uStack_338 = 0;
      local_340 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      uStack_318 = 0;
      local_320 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_2f8 = 0;
      local_300 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_2d8 = 0;
      local_2e0 = 0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2b8 = 0;
      local_2c0 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_298 = 0;
      local_2a0 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_468 = 0;
      uStack_464 = 0;
      local_470._0_4_ = 0;
      local_470._4_4_ = 0;
      uVar59 = 0;
      pbVar57 = pbVar52;
      for (; (7 < lVar55 && (*(long *)pbVar52 == 0x3030303030303030)); pbVar52 = pbVar52 + 8) {
        lVar55 = lVar55 + -8;
        pbVar57 = pbVar57 + 8;
      }
      local_480 = uVar50;
      local_478 = pbVar61;
      if (pbVar52 != pbVar42) {
        pbVar57 = pbVar52 + ((long)pbVar53 - (long)pbVar57);
        do {
          pbVar53 = pbVar52;
          if (*pbVar52 != 0x30) break;
          pbVar52 = pbVar52 + 1;
          pbVar53 = pbVar57;
        } while (pbVar52 != pbVar42);
        if (pbVar53 != pbVar42) {
          uVar62 = 0;
          uVar58 = 0;
          local_488 = (ulong *)((ulong)&local_470 | 8);
          uVar64 = 0;
LAB_001271e0:
          uVar65 = 0;
          if ((uVar58 - 0x73 < 0xfffffffffffffff8) && (7 < (long)pbVar42 - (long)pbVar53)) {
            uVar65 = (*(long *)pbVar53 + 0xcfcfcfcfcfcfcfd0U) * 10 +
                     (*(long *)pbVar53 + 0xcfcfcfcfcfcfcfd0U >> 8);
            uVar60 = (uVar65 & 0xff000000ff) * 0xf424000000064 +
                     (uVar65 >> 0x10 & 0xff000000ff) * 0x271000000001 >> 0x20;
            if ((uVar58 - 0x6b < 0xfffffffffffffff8) && (7 < (long)pbVar42 - (long)(pbVar53 + 8))) {
              uVar65 = 0x10;
              uVar63 = (*(long *)(pbVar53 + 8) + 0xcfcfcfcfcfcfcfd0U) * 10 +
                       (*(long *)(pbVar53 + 8) + 0xcfcfcfcfcfcfcfd0U >> 8);
              uVar60 = ((uVar63 & 0xff000000ff) * 0xf424000000064 +
                        (uVar63 >> 0x10 & 0xff000000ff) * 0x271000000001 >> 0x20) +
                       uVar60 * 100000000;
              pbVar53 = pbVar53 + 0x10;
              uVar58 = uVar58 + 0x10;
            }
            else {
              uVar65 = 8;
              pbVar53 = pbVar53 + 8;
              uVar58 = uVar58 + 8;
            }
          }
          else {
            uVar60 = 0;
          }
          if ((uVar58 < 0x72) &&
             (pbVar57 = pbVar53, uVar63 = uVar65, uVar51 = uVar58, pbVar53 != pbVar42)) {
            while( true ) {
              pbVar53 = pbVar57 + 1;
              uVar65 = uVar63 + 1;
              uVar60 = ((ulong)*pbVar57 + uVar60 * 10) - 0x30;
              uVar58 = uVar51 + 1;
              if (0x11 < uVar63) break;
              if ((pbVar53 == pbVar42) ||
                 (bVar35 = 0x70 < uVar51, pbVar57 = pbVar53, uVar63 = uVar65, uVar51 = uVar58,
                 bVar35)) break;
            }
          }
          local_470 = uVar59;
          if (uVar58 != 0x72) goto code_r0x001272fc;
          uVar48 = (uint)uVar62;
          uVar58 = uVar62;
          if (uVar48 == 0) {
            if (uVar60 == 0) goto LAB_001277ac;
            uVar58 = 0;
            goto LAB_0012779c;
          }
          uVar64 = *(ulong *)(&UNK_0010b8d8 + uVar65 * 8);
          lVar55 = 0;
          uVar59 = 0;
          do {
            uVar63 = *(ulong *)((long)&local_470 + lVar55) * uVar64;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = *(ulong *)((long)&local_470 + lVar55);
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar64;
            uVar65 = SUB168(auVar14 * auVar24,8);
            *(ulong *)((long)&local_470 + lVar55) = uVar63 + uVar59;
            lVar55 = lVar55 + 8;
            if (CARRY8(uVar63,uVar59)) {
              uVar65 = uVar65 + 1;
            }
            uVar59 = uVar65;
          } while (uVar62 * 8 - lVar55 != 0);
          if ((uVar48 < 0x3e) && (uVar65 != 0)) {
            uVar58 = (ulong)(uVar48 + 1);
            (&local_470)[uVar62] = uVar65;
            local_280 = CONCAT62(local_280._2_6_,(short)(uVar48 + 1));
          }
          uVar59 = local_470;
          if (uVar60 != 0) {
            bVar35 = CARRY8(local_470,uVar60);
            uVar59 = local_470 + uVar60;
            local_470._0_4_ = (uint)uVar59;
            local_470._4_4_ = (undefined4)(uVar59 >> 0x20);
            if (bVar35) {
              puVar41 = (ulong *)((ulong)&local_470 | 8);
              uVar64 = uVar58;
              do {
                uVar64 = uVar64 - 1;
                if (uVar64 == 0) {
                  if ((uint)uVar58 < 0x3e) {
                    uVar60 = 1;
                    uVar62 = uVar58;
LAB_0012779c:
                    uVar48 = (int)uVar62 + 1;
                    local_470 = uVar59;
                    (&local_470)[uVar58] = uVar60;
                    local_280 = CONCAT62(local_280._2_6_,(short)uVar48);
                    uVar58 = (ulong)uVar48;
                    uVar59 = local_470;
                  }
                  break;
                }
                uVar62 = *puVar41;
                *puVar41 = uVar62 + 1;
                puVar41 = puVar41 + 1;
              } while (0xfffffffffffffffe < uVar62);
            }
          }
LAB_001277ac:
          lVar55 = (long)pbVar42 - (long)pbVar53;
          do {
            uVar64 = uVar58;
            pbVar57 = pbVar44;
            pbVar52 = pbVar61;
            if (lVar55 < 8) {
              for (; pbVar53 != pbVar42; pbVar53 = pbVar53 + 1) {
                if (*pbVar53 != 0x30) goto LAB_00127804;
              }
              if (pbVar44 != (byte *)0x0) {
                bVar35 = false;
                goto joined_r0x00127818;
              }
LAB_00127918:
              uVar58 = 0x72;
              goto LAB_00127a50;
            }
            if (*(long *)pbVar53 != 0x3030303030303030) goto LAB_00127804;
            lVar55 = lVar55 + -8;
            pbVar53 = pbVar53 + 8;
          } while( true );
        }
      }
      uVar62 = 0;
      uVar58 = 0;
      uVar59 = 0;
LAB_001273b4:
      uVar64 = uVar62;
      if (pbVar44 != (byte *)0x0) {
        pbVar52 = pbVar44 + (long)pbVar61;
        pbVar57 = pbVar44;
        pbVar53 = pbVar44;
        pbVar42 = pbVar61;
        if (uVar58 == 0) {
          for (; (7 < (long)pbVar42 && (*(long *)pbVar57 == 0x3030303030303030));
              pbVar57 = pbVar57 + 8) {
            pbVar53 = pbVar53 + 8;
            pbVar42 = pbVar42 + -8;
          }
          if (pbVar57 == pbVar52) {
            uVar58 = 0;
            goto LAB_00127a50;
          }
          pbVar53 = pbVar57 + (long)(pbVar44 + ((long)pbVar61 - (long)pbVar53));
          do {
            pbVar44 = pbVar57;
            if (*pbVar57 != 0x30) break;
            pbVar57 = pbVar57 + 1;
            pbVar44 = pbVar53;
          } while (pbVar57 != pbVar52);
        }
        if (pbVar44 != pbVar52) {
          uVar65 = uVar62;
LAB_0012741c:
          uVar60 = 0;
          if ((uVar58 - 0x73 < 0xfffffffffffffff8) && (7 < (long)pbVar52 - (long)pbVar44)) {
            uVar64 = (*(long *)pbVar44 + 0xcfcfcfcfcfcfcfd0U) * 10 +
                     (*(long *)pbVar44 + 0xcfcfcfcfcfcfcfd0U >> 8);
            uVar63 = (uVar64 & 0xff000000ff) * 0xf424000000064 +
                     (uVar64 >> 0x10 & 0xff000000ff) * 0x271000000001 >> 0x20;
            if ((uVar58 - 0x6b < 0xfffffffffffffff8) && (7 < (long)pbVar52 - (long)(pbVar44 + 8))) {
              uVar64 = (*(long *)(pbVar44 + 8) + 0xcfcfcfcfcfcfcfd0U) * 10 +
                       (*(long *)(pbVar44 + 8) + 0xcfcfcfcfcfcfcfd0U >> 8);
              uVar63 = ((uVar64 & 0xff000000ff) * 0xf424000000064 +
                        (uVar64 >> 0x10 & 0xff000000ff) * 0x271000000001 >> 0x20) +
                       uVar63 * 100000000;
              uVar60 = 0x10;
              pbVar44 = pbVar44 + 0x10;
              uVar58 = uVar58 + 0x10;
            }
            else {
              uVar60 = 8;
              pbVar44 = pbVar44 + 8;
              uVar58 = uVar58 + 8;
            }
          }
          else {
            uVar63 = 0;
          }
          if ((uVar58 < 0x72) &&
             (uVar64 = uVar60, pbVar57 = pbVar44, uVar51 = uVar58, pbVar44 != pbVar52)) {
            while( true ) {
              pbVar44 = pbVar57 + 1;
              uVar60 = uVar64 + 1;
              uVar63 = ((ulong)*pbVar57 + uVar63 * 10) - 0x30;
              uVar58 = uVar51 + 1;
              if (0x11 < uVar64) break;
              if ((pbVar44 == pbVar52) ||
                 (bVar35 = 0x70 < uVar51, uVar64 = uVar60, pbVar57 = pbVar44, uVar51 = uVar58,
                 bVar35)) break;
            }
          }
          local_470 = uVar59;
          if (uVar58 != 0x72) goto code_r0x00127538;
          uVar48 = (uint)uVar62;
          uVar64 = uVar62;
          if (uVar48 == 0) {
            if (uVar63 == 0) goto LAB_00127940;
            uVar64 = 0;
            goto LAB_00127930;
          }
          uVar58 = *(ulong *)(&UNK_0010b8d8 + uVar60 * 8);
          lVar55 = 0;
          uVar59 = 0;
          do {
            uVar60 = *(ulong *)((long)&local_470 + lVar55) * uVar58;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = *(ulong *)((long)&local_470 + lVar55);
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar58;
            uVar65 = SUB168(auVar15 * auVar25,8);
            *(ulong *)((long)&local_470 + lVar55) = uVar60 + uVar59;
            lVar55 = lVar55 + 8;
            if (CARRY8(uVar60,uVar59)) {
              uVar65 = uVar65 + 1;
            }
            uVar59 = uVar65;
          } while (uVar62 * 8 - lVar55 != 0);
          if ((uVar48 < 0x3e) && (uVar65 != 0)) {
            uVar64 = (ulong)(uVar48 + 1);
            (&local_470)[uVar62] = uVar65;
            local_280 = CONCAT62(local_280._2_6_,(short)(uVar48 + 1));
          }
          uVar59 = local_470;
          if (uVar63 != 0) {
            bVar35 = CARRY8(local_470,uVar63);
            uVar59 = local_470 + uVar63;
            local_470._0_4_ = (uint)uVar59;
            local_470._4_4_ = (undefined4)(uVar59 >> 0x20);
            if (bVar35) {
              puVar41 = (ulong *)((ulong)&local_470 | 8);
              uVar58 = uVar64;
              do {
                uVar58 = uVar58 - 1;
                if (uVar58 == 0) {
                  if ((uint)uVar64 < 0x3e) {
                    uVar63 = 1;
                    uVar62 = uVar64;
LAB_00127930:
                    uVar48 = (int)uVar62 + 1;
                    local_470 = uVar59;
                    (&local_470)[uVar64] = uVar63;
                    local_280 = CONCAT62(local_280._2_6_,(short)uVar48);
                    uVar64 = (ulong)uVar48;
                    uVar59 = local_470;
                  }
                  break;
                }
                uVar62 = *puVar41;
                *puVar41 = uVar62 + 1;
                puVar41 = puVar41 + 1;
              } while (0xfffffffffffffffe < uVar62);
            }
          }
LAB_00127940:
          lVar55 = (long)pbVar52 - (long)pbVar44;
          while( true ) {
            if (lVar55 < 8) {
              uVar58 = 0x72;
              for (; pbVar44 != pbVar52; pbVar44 = pbVar44 + 1) {
                if (*pbVar44 != 0x30) goto LAB_00127994;
              }
              goto LAB_00127a50;
            }
            if (*(long *)pbVar44 != 0x3030303030303030) break;
            lVar55 = lVar55 + -8;
            pbVar44 = pbVar44 + 8;
          }
LAB_00127994:
          uVar48 = (uint)uVar64;
          uVar58 = uVar64;
          if (uVar48 == 0) {
LAB_00127a34:
            uVar64 = 0;
LAB_00127a38:
            uVar48 = (int)uVar58 + 1;
            local_470 = uVar59;
            (&local_470)[uVar64] = 1;
            local_280 = CONCAT62(local_280._2_6_,(short)uVar48);
            uVar64 = (ulong)uVar48;
            uVar59 = local_470;
          }
          else {
            lVar55 = 0;
            uVar58 = 0;
            local_470 = uVar59;
            do {
              auVar17._8_8_ = 0;
              auVar17._0_8_ = *(ulong *)((long)&local_470 + lVar55);
              uVar62 = SUB168(auVar17 * ZEXT816(10),8);
              uVar59 = *(ulong *)((long)&local_470 + lVar55) * 10;
              *(ulong *)((long)&local_470 + lVar55) = uVar58 + uVar59;
              lVar55 = lVar55 + 8;
              if (CARRY8(uVar58,uVar59)) {
                uVar62 = uVar62 + 1;
              }
              uVar58 = uVar62;
            } while (uVar64 * 8 - lVar55 != 0);
            if ((uVar48 < 0x3e) && (uVar62 != 0)) {
              (&local_470)[uVar64] = uVar62;
              uVar64 = (ulong)(uVar48 + 1);
              local_280 = CONCAT62(local_280._2_6_,(short)(uVar48 + 1));
            }
            bVar35 = local_470 == 0xffffffffffffffff;
            uVar59 = local_470 + 1;
            local_470._0_4_ = (uint)uVar59;
            local_470._4_4_ = (undefined4)(uVar59 >> 0x20);
            if (bVar35) {
              uVar58 = 0x73;
              uVar62 = 1;
              while (uVar64 != uVar62) {
                lVar55 = (&local_470)[uVar62];
                (&local_470)[uVar62] = lVar55 + 1;
                uVar62 = uVar62 + 1;
                if (lVar55 != -1) goto LAB_00127a50;
              }
LAB_00127fa8:
              uVar58 = uVar64;
              if ((uint)uVar64 < 0x3e) goto LAB_00127a38;
            }
          }
LAB_00127a4c:
          uVar58 = 0x73;
        }
      }
LAB_00127a50:
      uVar49 = (uVar49 - (int)uVar58) + 1;
      local_470 = uVar59;
      if ((int)uVar49 < 0) {
        local_478 = (byte *)(uVar46 + 0x8000);
        iVar47 = (int)local_478;
        if (iVar47 == -0x28 || iVar47 + 0x28 < 0 != SCARRY4(iVar47,0x28)) {
          uVar8 = 1 - iVar47;
          uVar48 = uVar8;
          if (0x3f < (int)uVar8) {
            uVar48 = 0;
          }
          uVar59 = 0;
          if ((int)uVar8 < 0x40) {
            uVar59 = uVar50 >> ((ulong)uVar48 & 0x3f);
          }
          uVar48 = (uint)((uVar59 & 0xffffffffff800000) != 0);
        }
        else {
          uVar48 = iVar47 + 0x28;
          uVar59 = uVar50 >> 0x28 & 0x7fffff;
          if (0xfe < (int)uVar48) {
            uVar48 = 0xff;
            uVar59 = 0;
          }
        }
        uVar48 = ((uint)uVar59 | uVar48 << 0x17) & 0x7f800000;
        if (uVar48 == 0) {
          uVar59 = uVar59 & 0x7fffff;
          iVar47 = -0x95;
        }
        else {
          uVar59 = uVar59 & 0x7fffff | 0x800000;
          iVar47 = (uVar48 >> 0x17) - 0x96;
        }
        uStack_150 = 0;
        local_158 = 0;
        uStack_140 = 0;
        uStack_148 = 0;
        uStack_130 = 0;
        local_138 = 0;
        uStack_120 = 0;
        uStack_128 = 0;
        uStack_110 = 0;
        local_118 = 0;
        uStack_100 = 0;
        uStack_108 = 0;
        uStack_f0 = 0;
        local_f8 = 0;
        uStack_e0 = 0;
        uStack_e8 = 0;
        uStack_d0 = 0;
        local_d8 = 0;
        uStack_c0 = 0;
        uStack_c8 = 0;
        uStack_b0 = 0;
        local_b8 = 0;
        uStack_a0 = 0;
        uStack_a8 = 0;
        uStack_90 = 0;
        local_98 = 0;
        uStack_88 = 0;
        uStack_160 = 0;
        local_168 = 0;
        local_270._0_4_ = (uint)(uVar59 << 1) | 1;
        uStack_170 = 0;
        local_178 = 0;
        uStack_180 = 0;
        local_188 = 0;
        local_270._4_4_ = 0;
        uStack_190 = 0;
        local_198 = 0;
        uVar48 = iVar47 + ~uVar49;
        uStack_1a0 = 0;
        local_1a8 = 0;
        uStack_1b0 = 0;
        local_1b8 = 0;
        uStack_1c0 = 0;
        local_1c8 = 0;
        uStack_1d0 = 0;
        local_1d8 = 0;
        uStack_1e0 = 0;
        local_1e8 = 0;
        uStack_1f0 = 0;
        local_1f8 = 0;
        uStack_200 = 0;
        local_208 = 0;
        uStack_210 = 0;
        local_218 = 0;
        uStack_220 = 0;
        local_228 = 0;
        uStack_230 = 0;
        local_238 = 0;
        uStack_240 = 0;
        local_248 = 0;
        uStack_250 = 0;
        local_258 = 0;
        uStack_260._0_4_ = 0;
        uStack_260._4_4_ = 0;
        uStack_268 = 0;
        uStack_264 = 0;
        local_80 = 1;
        FUN_001283b8(&local_270,-uVar49);
        uVar59 = uVar64;
        if ((int)uVar48 < 1) {
          if ((int)uVar48 < 0) {
            uVar48 = -uVar48;
            uVar50 = (ulong)uVar48 & 0x3f;
            if (((uVar48 & 0x3f) != 0) && (uVar49 = (uint)uVar64, uVar49 != 0)) {
              uVar46 = 0x40 - uVar50;
              if (uVar49 < 4) {
                uVar62 = 0;
                uVar65 = 0;
LAB_0012804c:
                lVar55 = uVar64 - uVar65;
                puVar41 = &local_470 + uVar65;
                uVar58 = uVar62;
                do {
                  uVar62 = *puVar41;
                  lVar55 = lVar55 + -1;
                  *puVar41 = uVar62 << uVar50 | uVar58 >> (uVar46 & 0x3f);
                  puVar41 = puVar41 + 1;
                  uVar58 = uVar62;
                } while (lVar55 != 0);
              }
              else {
                auVar72._8_8_ = uVar46;
                auVar72._0_8_ = uVar46;
                uVar67 = 0;
                uVar68 = 0;
                uVar62 = 0;
                uVar65 = uVar64 & 0xfffc;
                pauVar54 = (undefined1 (*) [16])&uStack_460;
                auVar70 = NEON_neg(auVar72,8);
                uVar58 = uVar65;
                do {
                  auVar77._4_4_ = uVar68;
                  auVar77._0_4_ = uVar67;
                  auVar77._8_8_ = uVar62;
                  auVar73 = pauVar54[-1];
                  uVar62 = *(ulong *)(*pauVar54 + 8);
                  uVar67 = (undefined4)*(undefined8 *)*pauVar54;
                  uVar68 = (undefined4)((ulong)*(undefined8 *)*pauVar54 >> 0x20);
                  uVar58 = uVar58 - 4;
                  auVar75 = NEON_ext(auVar77,auVar73,8,1);
                  auVar78 = NEON_ext(auVar73,*pauVar54,8,1);
                  auVar31._8_8_ = uVar50;
                  auVar31._0_8_ = uVar50;
                  auVar73 = NEON_ushl(auVar73,auVar31,8);
                  auVar32._8_8_ = uVar50;
                  auVar32._0_8_ = uVar50;
                  auVar79 = NEON_ushl(*pauVar54,auVar32,8);
                  auVar75 = NEON_ushl(auVar75,auVar70,8);
                  auVar78 = NEON_ushl(auVar78,auVar70,8);
                  (*pauVar54)[0] = auVar73[8] | auVar75[8];
                  (*pauVar54)[1] = auVar73[9] | auVar75[9];
                  (*pauVar54)[2] = auVar73[10] | auVar75[10];
                  (*pauVar54)[3] = auVar73[0xb] | auVar75[0xb];
                  (*pauVar54)[4] = auVar73[0xc] | auVar75[0xc];
                  (*pauVar54)[5] = auVar73[0xd] | auVar75[0xd];
                  (*pauVar54)[6] = auVar73[0xe] | auVar75[0xe];
                  (*pauVar54)[7] = auVar73[0xf] | auVar75[0xf];
                  pauVar54[-1][0] = auVar73[0] | auVar75[0];
                  pauVar54[-1][1] = auVar73[1] | auVar75[1];
                  pauVar54[-1][2] = auVar73[2] | auVar75[2];
                  pauVar54[-1][3] = auVar73[3] | auVar75[3];
                  pauVar54[-1][4] = auVar73[4] | auVar75[4];
                  pauVar54[-1][5] = auVar73[5] | auVar75[5];
                  pauVar54[-1][6] = auVar73[6] | auVar75[6];
                  pauVar54[-1][7] = auVar73[7] | auVar75[7];
                  pauVar54[1][0] = auVar79[8] | auVar78[8];
                  pauVar54[1][1] = auVar79[9] | auVar78[9];
                  pauVar54[1][2] = auVar79[10] | auVar78[10];
                  pauVar54[1][3] = auVar79[0xb] | auVar78[0xb];
                  pauVar54[1][4] = auVar79[0xc] | auVar78[0xc];
                  pauVar54[1][5] = auVar79[0xd] | auVar78[0xd];
                  pauVar54[1][6] = auVar79[0xe] | auVar78[0xe];
                  pauVar54[1][7] = auVar79[0xf] | auVar78[0xf];
                  (*pauVar54)[0] = auVar79[0] | auVar78[0];
                  (*pauVar54)[1] = auVar79[1] | auVar78[1];
                  (*pauVar54)[2] = auVar79[2] | auVar78[2];
                  (*pauVar54)[3] = auVar79[3] | auVar78[3];
                  (*pauVar54)[4] = auVar79[4] | auVar78[4];
                  (*pauVar54)[5] = auVar79[5] | auVar78[5];
                  (*pauVar54)[6] = auVar79[6] | auVar78[6];
                  (*pauVar54)[7] = auVar79[7] | auVar78[7];
                  pauVar54 = pauVar54 + 2;
                } while (uVar58 != 0);
                if (uVar65 != uVar64) goto LAB_0012804c;
              }
              uVar62 = uVar62 >> (uVar46 & 0x3f);
              if (uVar62 != 0) {
                if (0x3d < uVar49) goto LAB_001280a4;
                uVar59 = (ulong)(uVar49 + 1);
                (&local_470)[uVar64] = uVar62;
                local_280 = CONCAT62(local_280._2_6_,(short)(uVar49 + 1));
              }
            }
            if (((0x3f < uVar48) && ((int)uVar59 != 0)) &&
               (uVar50 = (ulong)(uVar48 >> 6), uVar50 + uVar59 < 0x3f)) {
              __s = &local_470;
              __dest = __s + uVar50;
              __src = &local_470;
              goto LAB_00127f38;
            }
          }
        }
        else {
          uVar50 = (ulong)uVar48 & 0x3f;
          if ((uVar48 & 0x3f) != 0) {
            uVar33 = (ushort)local_80;
            uVar46 = local_80 & 0xffff;
            if ((ushort)local_80 != 0) {
              uVar58 = 0x40 - uVar50;
              if ((ushort)local_80 < 4) {
                uVar62 = 0;
                uVar65 = 0;
LAB_00127eb0:
                lVar55 = uVar46 - uVar65;
                puVar41 = &local_270 + uVar65;
                uVar64 = uVar62;
                do {
                  uVar62 = *puVar41;
                  lVar55 = lVar55 + -1;
                  *puVar41 = uVar62 << uVar50 | uVar64 >> (uVar58 & 0x3f);
                  puVar41 = puVar41 + 1;
                  uVar64 = uVar62;
                } while (lVar55 != 0);
              }
              else {
                auVar71._8_8_ = uVar58;
                auVar71._0_8_ = uVar58;
                uVar67 = 0;
                uVar68 = 0;
                uVar62 = 0;
                uVar65 = local_80 & 0xfffc;
                pauVar54 = (undefined1 (*) [16])&uStack_260;
                auVar70 = NEON_neg(auVar71,8);
                uVar64 = uVar65;
                do {
                  auVar76._4_4_ = uVar68;
                  auVar76._0_4_ = uVar67;
                  auVar76._8_8_ = uVar62;
                  auVar73 = pauVar54[-1];
                  uVar62 = *(ulong *)(*pauVar54 + 8);
                  uVar67 = (undefined4)*(undefined8 *)*pauVar54;
                  uVar68 = (undefined4)((ulong)*(undefined8 *)*pauVar54 >> 0x20);
                  uVar64 = uVar64 - 4;
                  auVar75 = NEON_ext(auVar76,auVar73,8,1);
                  auVar78 = NEON_ext(auVar73,*pauVar54,8,1);
                  auVar29._8_8_ = uVar50;
                  auVar29._0_8_ = uVar50;
                  auVar73 = NEON_ushl(auVar73,auVar29,8);
                  auVar30._8_8_ = uVar50;
                  auVar30._0_8_ = uVar50;
                  auVar79 = NEON_ushl(*pauVar54,auVar30,8);
                  auVar75 = NEON_ushl(auVar75,auVar70,8);
                  auVar78 = NEON_ushl(auVar78,auVar70,8);
                  (*pauVar54)[0] = auVar73[8] | auVar75[8];
                  (*pauVar54)[1] = auVar73[9] | auVar75[9];
                  (*pauVar54)[2] = auVar73[10] | auVar75[10];
                  (*pauVar54)[3] = auVar73[0xb] | auVar75[0xb];
                  (*pauVar54)[4] = auVar73[0xc] | auVar75[0xc];
                  (*pauVar54)[5] = auVar73[0xd] | auVar75[0xd];
                  (*pauVar54)[6] = auVar73[0xe] | auVar75[0xe];
                  (*pauVar54)[7] = auVar73[0xf] | auVar75[0xf];
                  pauVar54[-1][0] = auVar73[0] | auVar75[0];
                  pauVar54[-1][1] = auVar73[1] | auVar75[1];
                  pauVar54[-1][2] = auVar73[2] | auVar75[2];
                  pauVar54[-1][3] = auVar73[3] | auVar75[3];
                  pauVar54[-1][4] = auVar73[4] | auVar75[4];
                  pauVar54[-1][5] = auVar73[5] | auVar75[5];
                  pauVar54[-1][6] = auVar73[6] | auVar75[6];
                  pauVar54[-1][7] = auVar73[7] | auVar75[7];
                  pauVar54[1][0] = auVar79[8] | auVar78[8];
                  pauVar54[1][1] = auVar79[9] | auVar78[9];
                  pauVar54[1][2] = auVar79[10] | auVar78[10];
                  pauVar54[1][3] = auVar79[0xb] | auVar78[0xb];
                  pauVar54[1][4] = auVar79[0xc] | auVar78[0xc];
                  pauVar54[1][5] = auVar79[0xd] | auVar78[0xd];
                  pauVar54[1][6] = auVar79[0xe] | auVar78[0xe];
                  pauVar54[1][7] = auVar79[0xf] | auVar78[0xf];
                  (*pauVar54)[0] = auVar79[0] | auVar78[0];
                  (*pauVar54)[1] = auVar79[1] | auVar78[1];
                  (*pauVar54)[2] = auVar79[2] | auVar78[2];
                  (*pauVar54)[3] = auVar79[3] | auVar78[3];
                  (*pauVar54)[4] = auVar79[4] | auVar78[4];
                  (*pauVar54)[5] = auVar79[5] | auVar78[5];
                  (*pauVar54)[6] = auVar79[6] | auVar78[6];
                  (*pauVar54)[7] = auVar79[7] | auVar78[7];
                  pauVar54 = pauVar54 + 2;
                } while (uVar64 != 0);
                if (uVar65 != uVar46) goto LAB_00127eb0;
              }
              uVar62 = uVar62 >> (uVar58 & 0x3f);
              if (uVar62 != 0) {
                if (0x3d < uVar33) goto LAB_001280a4;
                (&local_270)[uVar46] = uVar62;
                local_80 = CONCAT62(local_80._2_6_,uVar33 + 1);
              }
            }
          }
          if (((0x3f < uVar48) && (uVar46 = local_80 & 0xffff, uVar46 != 0)) &&
             (uVar50 = (ulong)(uVar48 >> 6), uVar50 + uVar46 < 0x3f)) {
            __s = &local_270;
            __dest = __s + uVar50;
            __src = &local_270;
            uVar59 = uVar46;
LAB_00127f38:
            memmove(__dest,__src,uVar59 << 3);
            memset(__s,0,uVar50 << 3);
            *(short *)(__s + 0x3e) = *(short *)(__s + 0x3e) + (short)uVar50;
            uVar59 = local_280 & 0xffff;
          }
        }
LAB_001280a4:
        uVar49 = (uint)(ushort)local_80;
        uVar48 = (uint)uVar59;
        if (uVar49 <= uVar48 && uVar48 != uVar49) {
          uVar49 = 0;
          lVar55 = 1;
        }
        else if (uVar49 <= uVar48) {
          lVar55 = uVar59 << 3;
          do {
            uVar49 = (uint)(lVar55 == 0);
            if (lVar55 == 0) goto LAB_00128130;
            puVar41 = (ulong *)((long)&local_478 + lVar55);
            puVar2 = (ulong *)((long)&uStack_278 + lVar55);
            if (*puVar2 < *puVar41) {
              lVar55 = 1;
              goto LAB_00128130;
            }
            lVar55 = lVar55 + -8;
          } while (*puVar2 <= *puVar41);
          lVar55 = 0;
        }
        else {
          lVar55 = 0;
          uVar49 = 0;
        }
LAB_00128130:
        iVar47 = (int)local_478;
        if (iVar47 == -0x28 || iVar47 + 0x28 < 0 != SCARRY4(iVar47,0x28)) {
          uVar8 = 1 - iVar47;
          uVar48 = uVar8;
          if (0x3f < (int)uVar8) {
            uVar48 = 0;
          }
          uVar50 = 0;
          if ((int)uVar8 < 0x40) {
            uVar50 = local_480 >> ((ulong)uVar48 & 0x3f);
          }
          uVar50 = uVar50 + ((uint)lVar55 | (uint)uVar50 & uVar49);
          uVar49 = (uint)((uVar50 & 0xffffffffff800000) != 0);
        }
        else {
          uVar59 = (local_480 >> 0x28) + (ulong)((uint)lVar55 | (uint)(local_480 >> 0x28) & uVar49);
          uVar50 = uVar59 & 0xffffffffff7fffff;
          bVar35 = uVar59 >> 0x18 != 0;
          iVar43 = 0x28;
          if (bVar35) {
            iVar43 = 0x29;
          }
          uVar49 = iVar43 + iVar47;
          if (bVar35 || 0xfe < uVar49) {
            uVar50 = 0;
          }
          if (0xfe < (int)uVar49) {
            uVar49 = 0xff;
          }
        }
      }
      else {
        uVar59 = FUN_001283b8(&local_470,(ulong)uVar49);
        if ((uVar59 & 1) != 0) {
          uVar59 = (ulong)uVar49 & 0x3f;
          if ((uVar49 & 0x3f) != 0) {
            uVar33 = (ushort)local_280;
            uVar50 = local_280 & 0xffff;
            if ((ushort)local_280 != 0) {
              uVar46 = 0x40 - uVar59;
              if ((ushort)local_280 < 4) {
                uVar64 = 0;
                uVar62 = 0;
LAB_00127cb0:
                lVar55 = uVar50 - uVar62;
                puVar41 = &local_470 + uVar62;
                uVar58 = uVar64;
                do {
                  uVar64 = *puVar41;
                  lVar55 = lVar55 + -1;
                  *puVar41 = uVar64 << uVar59 | uVar58 >> (uVar46 & 0x3f);
                  puVar41 = puVar41 + 1;
                  uVar58 = uVar64;
                } while (lVar55 != 0);
              }
              else {
                auVar69._8_8_ = uVar46;
                auVar69._0_8_ = uVar46;
                uVar67 = 0;
                uVar68 = 0;
                uVar64 = 0;
                uVar62 = local_280 & 0xfffc;
                pauVar54 = (undefined1 (*) [16])&uStack_460;
                auVar70 = NEON_neg(auVar69,8);
                uVar58 = uVar62;
                do {
                  auVar74._4_4_ = uVar68;
                  auVar74._0_4_ = uVar67;
                  auVar74._8_8_ = uVar64;
                  auVar73 = pauVar54[-1];
                  uVar64 = *(ulong *)(*pauVar54 + 8);
                  uVar67 = (undefined4)*(undefined8 *)*pauVar54;
                  uVar68 = (undefined4)((ulong)*(undefined8 *)*pauVar54 >> 0x20);
                  uVar58 = uVar58 - 4;
                  auVar75 = NEON_ext(auVar74,auVar73,8,1);
                  auVar78 = NEON_ext(auVar73,*pauVar54,8,1);
                  auVar27._8_8_ = uVar59;
                  auVar27._0_8_ = uVar59;
                  auVar73 = NEON_ushl(auVar73,auVar27,8);
                  auVar28._8_8_ = uVar59;
                  auVar28._0_8_ = uVar59;
                  auVar79 = NEON_ushl(*pauVar54,auVar28,8);
                  auVar75 = NEON_ushl(auVar75,auVar70,8);
                  auVar78 = NEON_ushl(auVar78,auVar70,8);
                  (*pauVar54)[0] = auVar73[8] | auVar75[8];
                  (*pauVar54)[1] = auVar73[9] | auVar75[9];
                  (*pauVar54)[2] = auVar73[10] | auVar75[10];
                  (*pauVar54)[3] = auVar73[0xb] | auVar75[0xb];
                  (*pauVar54)[4] = auVar73[0xc] | auVar75[0xc];
                  (*pauVar54)[5] = auVar73[0xd] | auVar75[0xd];
                  (*pauVar54)[6] = auVar73[0xe] | auVar75[0xe];
                  (*pauVar54)[7] = auVar73[0xf] | auVar75[0xf];
                  pauVar54[-1][0] = auVar73[0] | auVar75[0];
                  pauVar54[-1][1] = auVar73[1] | auVar75[1];
                  pauVar54[-1][2] = auVar73[2] | auVar75[2];
                  pauVar54[-1][3] = auVar73[3] | auVar75[3];
                  pauVar54[-1][4] = auVar73[4] | auVar75[4];
                  pauVar54[-1][5] = auVar73[5] | auVar75[5];
                  pauVar54[-1][6] = auVar73[6] | auVar75[6];
                  pauVar54[-1][7] = auVar73[7] | auVar75[7];
                  pauVar54[1][0] = auVar79[8] | auVar78[8];
                  pauVar54[1][1] = auVar79[9] | auVar78[9];
                  pauVar54[1][2] = auVar79[10] | auVar78[10];
                  pauVar54[1][3] = auVar79[0xb] | auVar78[0xb];
                  pauVar54[1][4] = auVar79[0xc] | auVar78[0xc];
                  pauVar54[1][5] = auVar79[0xd] | auVar78[0xd];
                  pauVar54[1][6] = auVar79[0xe] | auVar78[0xe];
                  pauVar54[1][7] = auVar79[0xf] | auVar78[0xf];
                  (*pauVar54)[0] = auVar79[0] | auVar78[0];
                  (*pauVar54)[1] = auVar79[1] | auVar78[1];
                  (*pauVar54)[2] = auVar79[2] | auVar78[2];
                  (*pauVar54)[3] = auVar79[3] | auVar78[3];
                  (*pauVar54)[4] = auVar79[4] | auVar78[4];
                  (*pauVar54)[5] = auVar79[5] | auVar78[5];
                  (*pauVar54)[6] = auVar79[6] | auVar78[6];
                  (*pauVar54)[7] = auVar79[7] | auVar78[7];
                  pauVar54 = pauVar54 + 2;
                } while (uVar58 != 0);
                if (uVar62 != uVar50) goto LAB_00127cb0;
              }
              uVar64 = uVar64 >> (uVar46 & 0x3f);
              if (uVar64 != 0) {
                if (0x3d < uVar33) goto LAB_00127d5c;
                (&local_470)[uVar50] = uVar64;
                local_280 = CONCAT62(local_280._2_6_,uVar33 + 1);
              }
            }
          }
          if (((0x3f < uVar49) && (uVar59 = local_280 & 0xffff, uVar59 != 0)) &&
             (uVar50 = (ulong)(uVar49 >> 6), uVar50 + uVar59 < 0x3f)) {
            memmove(&local_470 + uVar50,&local_470,uVar59 << 3);
            memset(&local_470,0,uVar50 * 8);
            local_280 = CONCAT62(local_280._2_6_,(ushort)local_280 + (short)(uVar49 >> 6));
          }
        }
LAB_00127d5c:
        uVar59 = local_280 & 0xffff;
        if ((ushort)local_280 == 0) {
          uVar48 = 0;
          uVar49 = 0;
          uVar50 = uVar59;
LAB_00127dfc:
          uVar8 = 0;
          if (uVar50 == 0x8000000000) {
            uVar8 = uVar48 | (uint)(uVar59 >> 0x28) & 1;
          }
          uVar50 = (ulong)uVar8;
        }
        else {
          if ((ushort)local_280 == 1) {
            uVar48 = 0;
            uVar50 = LZCOUNT((&local_478)[uVar59]);
            uVar49 = (uint)uVar50;
            uVar46 = (long)(&local_478)[uVar59] << (uVar50 & 0x3f);
          }
          else {
            uVar50 = LZCOUNT((&local_478)[uVar59]);
            uVar49 = (uint)uVar50;
            lVar55 = (&local_480)[uVar59] << (uVar50 & 0x3f);
            uVar46 = (long)(&local_478)[uVar59] << (uVar50 & 0x3f) |
                     ((&local_480)[uVar59] >> 1) >> ((ulong)~uVar49 & 0x3f);
            if (((ushort)local_280 < 3) || ((&local_488)[uVar59] != (ulong *)0x0)) {
              uVar48 = (uint)(2 < (ushort)local_280 || lVar55 != 0);
            }
            else {
              lVar56 = uVar59 << 3;
              uVar50 = 2;
              do {
                uVar58 = uVar59;
                if (lVar56 == 0x18) break;
                plVar1 = (long *)((long)&lStack_490 + lVar56);
                lVar56 = lVar56 + -8;
                uVar58 = uVar50 + 1;
                uVar50 = uVar58;
              } while (*plVar1 == 0);
              uVar48 = (uint)(lVar55 != 0 || uVar58 < uVar59);
            }
          }
          uVar59 = uVar46;
          uVar50 = uVar46 & 0xffffffffff;
          if ((uVar46 & 0xffffffffff) < 0x8000000001) goto LAB_00127dfc;
          uVar50 = 1;
        }
        uVar50 = uVar50 + (uVar59 >> 0x28);
        uVar59 = uVar50 >> 0x18;
        uVar50 = uVar50 & 0xffffffffff7fffff;
        iVar47 = 0x7e;
        if (uVar59 != 0) {
          iVar47 = 0x7f;
        }
        uVar49 = (iVar47 - uVar49) + (uint)(ushort)local_280 * 0x40;
        if (uVar59 != 0 || 0xfe < uVar49) {
          uVar50 = 0;
        }
        if (0xfe < uVar49) {
          uVar49 = 0xff;
        }
      }
      uVar46 = (ulong)uVar49;
    }
    param_2 = (float)((uint)uVar50 | (uint)(bVar5 == 0x2d) << 0x1f | (int)uVar46 << 0x17);
  }
LAB_001281c4:
  uStack_264 = 0;
  uStack_260._0_4_ = 0;
  local_270._4_4_ = 0;
  uStack_268 = 0;
  pbVar38 = pbVar38 + (param_3[2] - (long)pbVar3);
  uStack_464 = 0;
  uStack_460._0_4_ = 0;
  local_470._4_4_ = 0;
  uStack_468 = 0;
  pbVar57 = pbVar4;
  if (pbVar38 <= pbVar4) {
    pbVar57 = pbVar38;
  }
  pbVar3 = pbVar3 + (long)pbVar57;
  uVar59 = (long)pbVar4 - (long)pbVar57;
  *param_3 = (long)pbVar3;
  param_3[1] = uVar59;
  param_3[2] = 0;
  if (pbVar38 < pbVar4) {
    bVar5 = *pbVar3;
    uVar49 = (uint)bVar5;
    if ((bVar5 - 0x61 < 0x1a) || (0x80 < bVar5)) goto LAB_0012828c;
  }
  else {
    uVar49 = 0;
  }
  if ((uVar49 != 0x5f) && (((0x19 < uVar49 - 0x41 && (uVar49 != 0x2d)) && (9 < uVar49 - 0x30)))) {
    if ((pbVar38 < pbVar4) && (*pbVar3 == 0x25)) {
      param_3[2] = 0;
      *param_3 = (long)(pbVar3 + 1);
      param_3[1] = uVar59 - 1;
      *param_1 = 0xd;
      *(undefined8 *)(param_1 + 2) = 0;
      *(undefined8 *)(param_1 + 4) = 0;
      param_1[6] = param_2;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 10) = 0;
    }
    else {
      *param_1 = 9;
      *(undefined8 *)(param_1 + 3) = 0;
      *(ulong *)(param_1 + 1) = (ulong)(uint)local_270;
      param_1[5] = 0;
      param_1[6] = param_2;
      *(undefined8 *)(param_1 + 9) = 0;
      *(ulong *)(param_1 + 7) = (ulong)(uint)local_470;
      param_1[0xb] = 0;
    }
LAB_00128320:
    if (*(long *)(lVar26 + 0x28) == local_78) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_0012828c:
  uVar50 = 0;
  do {
    if (uVar50 < uVar59) {
      bVar5 = pbVar3[uVar50];
      uVar49 = (uint)bVar5;
      if ((0x19 < bVar5 - 0x61) && (bVar5 < 0x81)) goto LAB_001282cc;
    }
    else {
      uVar49 = 0;
LAB_001282cc:
      if ((uVar49 != 0x5f) && (((0x19 < uVar49 - 0x41 && (uVar49 != 0x2d)) && (9 < uVar49 - 0x30))))
      goto code_r0x001282f4;
    }
    uVar50 = uVar50 + 1;
    param_3[2] = uVar50;
  } while( true );
code_r0x001272fc:
  uVar48 = (uint)uVar64;
  uVar63 = uVar64;
  if (uVar48 == 0) {
    if (uVar60 != 0) {
      uVar63 = 0;
LAB_001271c8:
      uVar48 = (int)uVar64 + 1;
      uVar62 = (ulong)uVar48;
      local_470 = uVar59;
      (&local_470)[uVar63] = uVar60;
      local_280 = CONCAT62(local_280._2_6_,(short)uVar48);
      uVar63 = uVar62;
      uVar59 = local_470;
    }
  }
  else {
    uVar65 = *(ulong *)(&UNK_0010b8d8 + uVar65 * 8);
    lVar55 = 0;
    uVar59 = 0;
    do {
      uVar51 = *(ulong *)((long)&local_470 + lVar55);
      uVar40 = uVar51 * uVar65;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar51;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar65;
      uVar51 = SUB168(auVar12 * auVar22,8);
      *(ulong *)((long)&local_470 + lVar55) = uVar40 + uVar59;
      lVar55 = lVar55 + 8;
      if (CARRY8(uVar40,uVar59)) {
        uVar51 = uVar51 + 1;
      }
      uVar59 = uVar51;
    } while (uVar64 * 8 - lVar55 != 0);
    if ((uVar48 < 0x3e) && (uVar51 != 0)) {
      uVar63 = (ulong)(uVar48 + 1);
      (&local_470)[uVar64] = uVar51;
      local_280 = CONCAT62(local_280._2_6_,(short)(uVar48 + 1));
      uVar62 = uVar63;
    }
    uVar59 = local_470;
    if (uVar60 != 0) {
      bVar35 = CARRY8(local_470,uVar60);
      uVar59 = local_470 + uVar60;
      local_470._0_4_ = (uint)uVar59;
      local_470._4_4_ = (undefined4)(uVar59 >> 0x20);
      puVar41 = local_488;
      uVar64 = uVar63;
      if (bVar35) {
        do {
          if (uVar64 - 1 == 0) {
            if ((uint)uVar63 < 0x3e) {
              uVar60 = 1;
              uVar64 = uVar63;
              goto LAB_001271c8;
            }
            break;
          }
          uVar65 = *puVar41;
          *puVar41 = uVar65 + 1;
          puVar41 = puVar41 + 1;
          uVar64 = uVar64 - 1;
        } while (0xfffffffffffffffe < uVar65);
      }
    }
  }
  uVar64 = uVar63;
  if (pbVar53 == pbVar42) goto LAB_001273b4;
  goto LAB_001271e0;
LAB_00127804:
  if (pbVar44 != (byte *)0x0) {
    bVar35 = true;
joined_r0x00127818:
    do {
      if ((long)pbVar52 < 8) goto LAB_00127844;
      if (*(long *)pbVar57 != 0x3030303030303030) break;
      pbVar57 = pbVar57 + 8;
      pbVar52 = pbVar52 + -8;
    } while( true );
  }
  goto LAB_00127870;
LAB_00127844:
  for (; pbVar57 != pbVar44 + (long)pbVar61; pbVar57 = pbVar57 + 1) {
    if (*pbVar57 != 0x30) goto LAB_00127870;
  }
  if (!bVar35) goto LAB_00127918;
LAB_00127870:
  uVar48 = (uint)uVar58;
  if (uVar48 == 0) goto LAB_00127a34;
  lVar55 = 0;
  uVar62 = 0;
  local_470 = uVar59;
  do {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = *(ulong *)((long)&local_470 + lVar55);
    uVar65 = SUB168(auVar16 * ZEXT816(10),8);
    uVar59 = *(ulong *)((long)&local_470 + lVar55) * 10;
    *(ulong *)((long)&local_470 + lVar55) = uVar62 + uVar59;
    lVar55 = lVar55 + 8;
    if (CARRY8(uVar62,uVar59)) {
      uVar65 = uVar65 + 1;
    }
    uVar62 = uVar65;
  } while (uVar58 * 8 - lVar55 != 0);
  if ((uVar48 < 0x3e) && (uVar65 != 0)) {
    uVar64 = (ulong)(uVar48 + 1);
    (&local_470)[uVar58] = uVar65;
    local_280 = CONCAT62(local_280._2_6_,(short)(uVar48 + 1));
  }
  bVar35 = local_470 == 0xffffffffffffffff;
  uVar59 = local_470 + 1;
  local_470._0_4_ = (uint)uVar59;
  local_470._4_4_ = (undefined4)(uVar59 >> 0x20);
  if (bVar35) {
    uVar58 = 0x73;
    uVar62 = 1;
    while (uVar64 != uVar62) {
      lVar55 = (&local_470)[uVar62];
      (&local_470)[uVar62] = lVar55 + 1;
      uVar62 = uVar62 + 1;
      if (lVar55 != -1) goto LAB_00127a50;
    }
    goto LAB_00127fa8;
  }
  goto LAB_00127a4c;
code_r0x00127538:
  uVar48 = (uint)uVar65;
  uVar64 = uVar65;
  if (uVar48 == 0) {
    if (uVar63 != 0) {
      uVar64 = 0;
LAB_00127404:
      uVar48 = (int)uVar65 + 1;
      uVar62 = (ulong)uVar48;
      local_470 = uVar59;
      (&local_470)[uVar64] = uVar63;
      local_280 = CONCAT62(local_280._2_6_,(short)uVar48);
      uVar64 = uVar62;
      uVar59 = local_470;
    }
  }
  else {
    uVar60 = *(ulong *)(&UNK_0010b8d8 + uVar60 * 8);
    lVar55 = 0;
    uVar59 = 0;
    do {
      uVar51 = *(ulong *)((long)&local_470 + lVar55);
      uVar40 = uVar51 * uVar60;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar51;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar60;
      uVar51 = SUB168(auVar13 * auVar23,8);
      *(ulong *)((long)&local_470 + lVar55) = uVar40 + uVar59;
      lVar55 = lVar55 + 8;
      if (CARRY8(uVar40,uVar59)) {
        uVar51 = uVar51 + 1;
      }
      uVar59 = uVar51;
    } while (uVar65 * 8 - lVar55 != 0);
    if ((uVar48 < 0x3e) && (uVar51 != 0)) {
      uVar64 = (ulong)(uVar48 + 1);
      (&local_470)[uVar65] = uVar51;
      local_280 = CONCAT62(local_280._2_6_,(short)(uVar48 + 1));
      uVar62 = uVar64;
    }
    uVar59 = local_470;
    if (uVar63 != 0) {
      bVar35 = CARRY8(local_470,uVar63);
      uVar59 = local_470 + uVar63;
      local_470._0_4_ = (uint)uVar59;
      local_470._4_4_ = (undefined4)(uVar59 >> 0x20);
      puVar41 = (ulong *)((ulong)&local_470 | 8);
      uVar65 = uVar64;
      if (bVar35) {
        do {
          if (uVar65 - 1 == 0) {
            if ((uint)uVar64 < 0x3e) {
              uVar63 = 1;
              uVar65 = uVar64;
              goto LAB_00127404;
            }
            break;
          }
          uVar60 = *puVar41;
          *puVar41 = uVar60 + 1;
          puVar41 = puVar41 + 1;
          uVar65 = uVar65 - 1;
        } while (0xfffffffffffffffe < uVar60);
      }
    }
  }
  uVar65 = uVar64;
  uVar64 = uVar62;
  if (pbVar44 == pbVar52) goto LAB_00127a50;
  goto LAB_0012741c;
code_r0x001282f4:
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  uVar46 = uVar59;
  if (uVar50 <= uVar59) {
    uVar46 = uVar50;
  }
  *param_1 = 5;
  param_1[6] = param_2;
  *param_3 = (long)(pbVar3 + uVar46);
  param_3[1] = uVar59 - uVar46;
  param_3[2] = 0;
  *(byte **)(param_1 + 8) = pbVar3;
  *(ulong *)(param_1 + 10) = uVar46;
  goto LAB_00128320;
}


// ===== 001283b8  FUN_001283b8 =====

void FUN_001283b8(ulong *param_1,uint param_2)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  size_t __n;
  uint uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined *puVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong local_460 [62];
  ushort local_270;
  undefined1 auStack_268 [496];
  ushort local_78;
  long local_70;
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  if (0x86 < param_2) {
    uVar28 = (ulong)(ushort)param_1[0x3e];
    puVar22 = PTR_large_power_of_5_0012fba8;
    do {
      uVar12 = (uint)uVar28;
      uVar27 = 0;
      uVar23 = uVar28 & 0xffff;
      local_78 = 0;
      if ((uVar12 & 0xffff) < 0x3f) {
        if ((uVar28 & 0xffff) != 0) {
          memcpy(auStack_268,param_1,uVar23 << 3);
          uVar27 = (ulong)(local_78 + uVar12);
          local_78 = (ushort)(local_78 + uVar12);
          puVar22 = PTR_large_power_of_5_0012fba8;
          goto LAB_00128460;
        }
        uVar28 = 0;
        uVar27 = 0;
      }
      else {
LAB_00128460:
        uVar24 = 0;
        puVar13 = param_1;
        uVar26 = uVar23;
        do {
          uVar18 = *puVar13 * 0x13a1d71cff1b172d;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = *puVar13;
          uVar17 = SUB168(auVar2 * ZEXT816(0x13a1d71cff1b172d),8);
          *puVar13 = uVar18 + uVar24;
          if (CARRY8(uVar18,uVar24)) {
            uVar17 = uVar17 + 1;
          }
          uVar26 = uVar26 - 1;
          uVar24 = uVar17;
          puVar13 = puVar13 + 1;
        } while (uVar26 != 0);
        if (uVar17 != 0) {
          if (0x3d < (uVar12 & 0xffff)) goto LAB_00128760;
          uVar28 = (ulong)(uVar12 + 1);
          param_1[uVar23] = uVar17;
          *(short *)(param_1 + 0x3e) = (short)(uVar12 + 1);
        }
      }
      lVar25 = -1;
      uVar23 = 1;
      uVar26 = uVar28 & 0xffffffff;
      puVar13 = param_1 + 1;
      do {
        uVar24 = *(ulong *)(puVar22 + uVar23 * 8);
        if (uVar24 != 0) {
          local_270 = 0;
          if (0x3e < ((uint)uVar27 & 0xffff)) goto LAB_00128760;
          if ((uVar27 & 0xffff) == 0) {
            uVar12 = 0;
          }
          else {
            memcpy(local_460,auStack_268,(uVar27 & 0x1fff) << 3);
            uVar12 = (uint)local_270;
            puVar22 = PTR_large_power_of_5_0012fba8;
          }
          uVar12 = uVar12 + (uint)uVar27;
          uVar17 = (ulong)uVar12;
          if ((uVar12 & 0xffff) == 0) {
            uVar17 = 0;
          }
          else {
            uVar15 = uVar17 & 0xffff;
            uVar20 = 0;
            puVar14 = local_460;
            uVar18 = uVar15;
            do {
              uVar21 = *puVar14 * uVar24;
              auVar3._8_8_ = 0;
              auVar3._0_8_ = *puVar14;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = uVar24;
              uVar19 = SUB168(auVar3 * auVar6,8);
              *puVar14 = uVar21 + uVar20;
              if (CARRY8(uVar21,uVar20)) {
                uVar19 = uVar19 + 1;
              }
              uVar18 = uVar18 - 1;
              uVar20 = uVar19;
              puVar14 = puVar14 + 1;
            } while (uVar18 != 0);
            if (uVar19 != 0) {
              if (0x3d < (uVar12 & 0xffff)) goto LAB_00128760;
              uVar17 = (ulong)(uVar12 + 1);
              local_460[uVar15] = uVar19;
            }
          }
          uVar24 = uVar26 & 0xffff;
          uVar17 = uVar17 & 0xffff;
          if ((uVar24 < uVar23) || (uVar24 - uVar23 < uVar17)) {
            uVar28 = uVar23 + uVar17;
            if (0x3e < uVar28) goto LAB_00128760;
            if (uVar24 < uVar28) {
              __n = (long)param_1 + (uVar28 * 8 - (long)(param_1 + uVar24));
              if (0 < (long)__n) {
                memset(param_1 + uVar24,0,__n);
                puVar22 = PTR_large_power_of_5_0012fba8;
              }
            }
            uVar26 = uVar28 & 0xffffffff;
            *(short *)(param_1 + 0x3e) = (short)uVar28;
          }
          if ((int)uVar17 != 0) {
            puVar14 = local_460;
            puVar16 = puVar13;
            uVar24 = uVar17;
            bVar9 = false;
            do {
              uVar18 = *puVar16;
              uVar20 = *puVar14;
              bVar10 = (bool)(bVar9 & 0xfffffffffffffffe < uVar18 + uVar20);
              if (CARRY8(uVar18,uVar20)) {
                bVar10 = true;
              }
              uVar15 = uVar18 + uVar20 + 1;
              if (!bVar9) {
                uVar15 = uVar18 + uVar20;
              }
              uVar24 = uVar24 - 1;
              *puVar16 = uVar15;
              puVar14 = puVar14 + 1;
              puVar16 = puVar16 + 1;
              bVar9 = bVar10;
            } while (uVar24 != 0);
            if (bVar10) {
              uVar18 = uVar26 & 0xffff;
              uVar24 = uVar23 + uVar17;
              if (uVar23 + uVar17 <= uVar18) {
                uVar24 = uVar18;
              }
              do {
                if (uVar24 + lVar25 == uVar17) {
                  if (0x3d < ((uint)uVar26 & 0xffff)) goto LAB_00128760;
                  uVar12 = (uint)uVar26 + 1;
                  uVar26 = (ulong)uVar12;
                  param_1[uVar18] = 1;
                  *(short *)(param_1 + 0x3e) = (short)uVar12;
                  uVar28 = uVar26;
                  break;
                }
                uVar20 = puVar13[uVar17];
                puVar13[uVar17] = uVar20 + 1;
                uVar17 = uVar17 + 1;
              } while (0xfffffffffffffffe < uVar20);
            }
          }
        }
        uVar23 = uVar23 + 1;
        puVar13 = puVar13 + 1;
        lVar25 = lVar25 + -1;
      } while (uVar23 != 5);
      if (((uVar26 & 0xffff) != 0) && (param_1[(uVar26 & 0xffff) - 1] == 0)) {
        do {
          uVar12 = (int)uVar26 - 1;
          uVar26 = (ulong)uVar12;
          if ((uVar12 & 0xffff) == 0) {
            uVar28 = 0;
            goto LAB_001286d4;
          }
        } while (param_1[(ulong)(ushort)uVar12 - 1] == 0);
        uVar28 = (ulong)uVar12;
LAB_001286d4:
        *(ushort *)(param_1 + 0x3e) = (ushort)uVar12;
      }
      param_2 = param_2 - 0x87;
    } while (0x86 < param_2);
  }
  if (0x1a < param_2) {
    uVar28 = (ulong)(ushort)param_1[0x3e];
    do {
      if (uVar28 != 0) {
        uVar27 = 0;
        puVar13 = param_1;
        uVar23 = uVar28;
        do {
          uVar24 = *puVar13 * 0x6765c793fa10079d;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = *puVar13;
          uVar26 = SUB168(auVar4 * ZEXT816(0x6765c793fa10079d),8);
          *puVar13 = uVar24 + uVar27;
          if (CARRY8(uVar24,uVar27)) {
            uVar26 = uVar26 + 1;
          }
          uVar23 = uVar23 - 1;
          uVar27 = uVar26;
          puVar13 = puVar13 + 1;
        } while (uVar23 != 0);
        if (uVar26 != 0) {
          if (0x3d < uVar28) goto LAB_00128760;
          param_1[uVar28] = uVar26;
          uVar28 = uVar28 + 1;
          *(short *)(param_1 + 0x3e) = (short)uVar28;
        }
      }
      param_2 = param_2 - 0x1b;
    } while (0x1a < param_2);
  }
  if (param_2 != 0) {
    uVar1 = (ushort)param_1[0x3e];
    if (uVar1 != 0) {
      uVar27 = *(ulong *)(&DAT_0010b9a0 + (ulong)param_2 * 8);
      uVar23 = 0;
      puVar13 = param_1;
      uVar28 = (ulong)uVar1;
      do {
        uVar24 = *puVar13 * uVar27;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = *puVar13;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar27;
        uVar26 = SUB168(auVar5 * auVar7,8);
        *puVar13 = uVar24 + uVar23;
        if (CARRY8(uVar24,uVar23)) {
          uVar26 = uVar26 + 1;
        }
        uVar28 = uVar28 - 1;
        uVar23 = uVar26;
        puVar13 = puVar13 + 1;
      } while (uVar28 != 0);
      if (uVar26 != 0) {
        if (0x3d < uVar1) {
LAB_00128760:
          uVar11 = 0;
          goto LAB_001287c8;
        }
        param_1[uVar1] = uVar26;
        *(ushort *)(param_1 + 0x3e) = uVar1 + 1;
      }
    }
  }
  uVar11 = 1;
LAB_001287c8:
  if (*(long *)(lVar8 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar11);
  }
  return;
}


// ===== 001287fc  FUN_001287fc =====

void FUN_001287fc(long param_1,int param_2)

{
  long lVar1;
  bool bVar2;
  int *piVar3;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_2 != 6) {
    piVar3 = (int *)(param_1 + 0x18);
    bVar2 = *piVar3 == 0xe;
    if (bVar2) {
      FUN_00126264(&local_78,param_1);
      *(undefined8 *)(param_1 + 0x20) = uStack_70;
      *(undefined8 *)piVar3 = local_78;
      *(undefined8 *)(param_1 + 0x30) = uStack_60;
      *(undefined8 *)(param_1 + 0x28) = local_68;
      *(undefined8 *)(param_1 + 0x40) = uStack_50;
      *(undefined8 *)(param_1 + 0x38) = local_58;
    }
    if (param_2 < 3) {
      if (param_2 == 0) goto LAB_0012882c;
      if (param_2 == 1) goto LAB_00128828;
      bVar2 = false;
      if ((*(int *)(param_1 + 0x18) != 4) || (*(long *)(param_1 + 0x28) != 1)) goto LAB_0012882c;
      if (**(char **)(param_1 + 0x20) != '/') goto LAB_00128988;
    }
    else if (param_2 == 3) {
      if (((*(int *)(param_1 + 0x18) != 4) || (*(long *)(param_1 + 0x28) != 1)) ||
         (**(char **)(param_1 + 0x20) != '/')) goto LAB_0012882c;
    }
    else if (param_2 == 5) {
      if (*piVar3 != 3) goto LAB_0012882c;
    }
    else if (*piVar3 != 3) {
LAB_00128988:
      bVar2 = false;
      goto LAB_0012882c;
    }
    FUN_00126264(&local_78,param_1);
    *(undefined8 *)(param_1 + 0x20) = uStack_70;
    *(undefined8 *)piVar3 = local_78;
    *(undefined8 *)(param_1 + 0x30) = uStack_60;
    *(undefined8 *)(param_1 + 0x28) = local_68;
    *(undefined8 *)(param_1 + 0x40) = uStack_50;
    *(undefined8 *)(param_1 + 0x38) = local_58;
    if (*(int *)(param_1 + 0x18) == 0xe) {
      FUN_00126264(&local_78,param_1);
      *(undefined8 *)(param_1 + 0x20) = uStack_70;
      *(undefined8 *)piVar3 = local_78;
      *(undefined8 *)(param_1 + 0x30) = uStack_60;
      *(undefined8 *)(param_1 + 0x28) = local_68;
      *(undefined8 *)(param_1 + 0x40) = uStack_50;
      *(undefined8 *)(param_1 + 0x38) = local_58;
    }
  }
LAB_00128828:
  bVar2 = true;
LAB_0012882c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


// ===== 00128994  FUN_00128994 =====

ulong FUN_00128994(long *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined8 *)*param_1;
  uStack_78 = puVar3[5];
  local_80 = puVar3[4];
  uStack_70 = puVar3[6];
  uStack_58 = (undefined4)puVar3[9];
  uStack_54 = (undefined4)((ulong)puVar3[9] >> 0x20);
  local_60 = (undefined4)puVar3[8];
  uStack_5c = (undefined4)((ulong)puVar3[8] >> 0x20);
  uStack_68 = (undefined4)puVar3[7];
  uStack_64 = (undefined4)((ulong)puVar3[7] >> 0x20);
  uStack_98 = puVar3[1];
  local_a0 = *puVar3;
  uStack_88 = puVar3[3];
  uStack_90 = puVar3[2];
  uVar4 = FUN_001287fc();
  puVar3 = (undefined8 *)*param_1;
  if ((uVar4 & 1) != 0) {
    puVar7 = (uint *)(puVar3 + 3);
    uVar1 = *puVar7;
    if (uVar1 != *(uint *)(puVar3 + 9)) {
      if ((int)uVar1 < 0xb) {
        if ((uVar1 == 7) || (uVar1 == 10)) goto LAB_00128a4c;
LAB_00128ac0:
        uVar4 = (ulong)*(uint *)(puVar3 + 6);
        FUN_00126264(&local_d0);
        puVar3[4] = uStack_c8;
        *(undefined8 *)puVar7 = local_d0;
        puVar3[6] = uStack_b8;
        puVar3[5] = uStack_c0;
        puVar3[8] = uStack_a8;
        puVar3[7] = local_b0;
        if ((uVar1 | 4) == 0xd) {
          uVar6 = 0x100000000;
          if (uVar1 != 9) {
            uVar6 = (ulong)(uVar1 == 0xd) << 0x21;
          }
          goto LAB_00128b28;
        }
      }
      else {
        if ((uVar1 != 0xb) && (uVar1 != 0xc)) goto LAB_00128ac0;
LAB_00128a4c:
        FUN_00126264(&local_d0);
        puVar3[8] = uStack_a8;
        puVar3[7] = local_b0;
        puVar3[4] = uStack_c8;
        *(undefined8 *)puVar7 = local_d0;
        puVar3[6] = uStack_b8;
        puVar3[5] = uStack_c0;
        lVar5 = *param_1;
        if (*(int *)(lVar5 + 0x18) == 0xe) {
          FUN_00126264(&local_d0);
          *(undefined8 *)(lVar5 + 0x40) = uStack_a8;
          *(undefined8 *)(lVar5 + 0x38) = local_b0;
          *(undefined8 *)(lVar5 + 0x20) = uStack_c8;
          *(undefined8 *)(lVar5 + 0x18) = local_d0;
          *(undefined8 *)(lVar5 + 0x30) = uStack_b8;
          *(undefined8 *)(lVar5 + 0x28) = uStack_c0;
          lVar5 = *param_1;
          if (*(int *)(lVar5 + 0x18) == 0xe) {
            FUN_00126264(&local_d0);
            *(undefined8 *)(lVar5 + 0x40) = uStack_a8;
            *(undefined8 *)(lVar5 + 0x38) = local_b0;
            *(undefined8 *)(lVar5 + 0x20) = uStack_c8;
            *(undefined8 *)(lVar5 + 0x18) = local_d0;
            *(undefined8 *)(lVar5 + 0x30) = uStack_b8;
            *(undefined8 *)(lVar5 + 0x28) = uStack_c0;
          }
        }
      }
      uVar4 = 0;
      puVar3 = (undefined8 *)*param_1;
      puVar3[5] = uStack_78;
      puVar3[4] = local_80;
      puVar3[7] = CONCAT44(uStack_64,uStack_68);
      puVar3[6] = uStack_70;
      *(ulong *)((long)puVar3 + 0x44) = CONCAT44(uStack_58,uStack_5c);
      *(ulong *)((long)puVar3 + 0x3c) = CONCAT44(local_60,uStack_64);
      puVar3[1] = uStack_98;
      *puVar3 = local_a0;
      puVar3[3] = uStack_88;
      puVar3[2] = uStack_90;
      uVar6 = 0;
      goto LAB_00128b28;
    }
  }
  uVar4 = 0;
  puVar3[5] = uStack_78;
  puVar3[4] = local_80;
  puVar3[7] = CONCAT44(uStack_64,uStack_68);
  puVar3[6] = uStack_70;
  *(ulong *)((long)puVar3 + 0x44) = CONCAT44(uStack_58,uStack_5c);
  *(ulong *)((long)puVar3 + 0x3c) = CONCAT44(local_60,uStack_64);
  puVar3[1] = uStack_98;
  *puVar3 = local_a0;
  puVar3[3] = uStack_88;
  puVar3[2] = uStack_90;
  uVar6 = 0;
LAB_00128b28:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6 | uVar4;
}


// ===== 00128b58  FUN_00128b58 =====

ulong FUN_00128b58(long *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int *piVar6;
  ulong uVar7;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar5 = (undefined8 *)*param_1;
  uStack_78 = puVar5[5];
  local_80 = puVar5[4];
  uStack_70 = puVar5[6];
  piVar6 = (int *)(puVar5 + 3);
  iVar3 = *piVar6;
  uStack_68 = (undefined4)puVar5[7];
  uStack_64 = (undefined4)((ulong)puVar5[7] >> 0x20);
  uStack_98 = puVar5[1];
  local_a0 = *puVar5;
  uStack_88 = puVar5[3];
  uStack_90 = puVar5[2];
  uStack_58 = (undefined4)puVar5[9];
  uStack_54 = (undefined4)((ulong)puVar5[9] >> 0x20);
  local_60 = (undefined4)puVar5[8];
  uStack_5c = (undefined4)((ulong)puVar5[8] >> 0x20);
  if (iVar3 == 0xe) {
    FUN_00126264(&local_d0,puVar5);
    puVar5[8] = uStack_a8;
    puVar5[7] = local_b0;
    puVar5[4] = uStack_c8;
    *(undefined8 *)piVar6 = local_d0;
    puVar5[6] = uStack_b8;
    puVar5[5] = uStack_c0;
    iVar3 = *(int *)(puVar5 + 3);
  }
  if (iVar3 == 3) {
    FUN_00126264(&local_d0,puVar5);
    puVar5[8] = uStack_a8;
    puVar5[7] = local_b0;
    puVar5[4] = uStack_c8;
    *(undefined8 *)piVar6 = local_d0;
    puVar5[6] = uStack_b8;
    puVar5[5] = uStack_c0;
    if (*(int *)(puVar5 + 3) == 0xe) {
      FUN_00126264(&local_d0,puVar5);
      puVar5[8] = uStack_a8;
      puVar5[7] = local_b0;
      puVar5[4] = uStack_c8;
      *(undefined8 *)piVar6 = local_d0;
      puVar5[6] = uStack_b8;
      puVar5[5] = uStack_c0;
    }
    puVar5 = (undefined8 *)*param_1;
    piVar6 = (int *)(puVar5 + 3);
    iVar3 = *piVar6;
    if (iVar3 == *(int *)(puVar5 + 9)) {
      uVar7 = 0;
      uVar4 = 0;
      puVar5[5] = uStack_78;
      puVar5[4] = local_80;
      puVar5[7] = CONCAT44(uStack_64,uStack_68);
      puVar5[6] = uStack_70;
      *(ulong *)((long)puVar5 + 0x44) = CONCAT44(uStack_58,uStack_5c);
      *(ulong *)((long)puVar5 + 0x3c) = CONCAT44(local_60,uStack_64);
      puVar5[1] = uStack_98;
      *puVar5 = local_a0;
      puVar5[3] = uStack_88;
      puVar5[2] = uStack_90;
      goto LAB_00128d44;
    }
    if (iVar3 < 0xb) {
      if ((iVar3 == 7) || (iVar3 == 10)) {
LAB_00128c80:
        FUN_00126264(&local_d0);
        puVar5[8] = uStack_a8;
        puVar5[7] = local_b0;
        puVar5[4] = uStack_c8;
        *(undefined8 *)piVar6 = local_d0;
        puVar5[6] = uStack_b8;
        puVar5[5] = uStack_c0;
        lVar2 = *param_1;
        if (*(int *)(lVar2 + 0x18) == 0xe) {
          FUN_00126264(&local_d0);
          *(undefined8 *)(lVar2 + 0x40) = uStack_a8;
          *(undefined8 *)(lVar2 + 0x38) = local_b0;
          *(undefined8 *)(lVar2 + 0x20) = uStack_c8;
          *(undefined8 *)(lVar2 + 0x18) = local_d0;
          *(undefined8 *)(lVar2 + 0x30) = uStack_b8;
          *(undefined8 *)(lVar2 + 0x28) = uStack_c0;
          lVar2 = *param_1;
          if (*(int *)(lVar2 + 0x18) == 0xe) {
            FUN_00126264(&local_d0);
            *(undefined8 *)(lVar2 + 0x40) = uStack_a8;
            *(undefined8 *)(lVar2 + 0x38) = local_b0;
            *(undefined8 *)(lVar2 + 0x20) = uStack_c8;
            *(undefined8 *)(lVar2 + 0x18) = local_d0;
            *(undefined8 *)(lVar2 + 0x30) = uStack_b8;
            *(undefined8 *)(lVar2 + 0x28) = uStack_c0;
          }
        }
        goto LAB_00128d20;
      }
    }
    else if ((iVar3 == 0xb) || (iVar3 == 0xc)) goto LAB_00128c80;
    uVar7 = (ulong)*(uint *)(puVar5 + 6);
    FUN_00126264(&local_d0);
    puVar5[4] = uStack_c8;
    *(undefined8 *)piVar6 = local_d0;
    puVar5[6] = uStack_b8;
    puVar5[5] = uStack_c0;
    puVar5[8] = uStack_a8;
    puVar5[7] = local_b0;
    if (iVar3 == 9) {
      uVar4 = 0x100000000;
      goto LAB_00128d44;
    }
  }
LAB_00128d20:
  uVar7 = 0;
  puVar5 = (undefined8 *)*param_1;
  uVar4 = 0;
  puVar5[5] = uStack_78;
  puVar5[4] = local_80;
  puVar5[7] = CONCAT44(uStack_64,uStack_68);
  puVar5[6] = uStack_70;
  *(ulong *)((long)puVar5 + 0x44) = CONCAT44(uStack_58,uStack_5c);
  *(ulong *)((long)puVar5 + 0x3c) = CONCAT44(local_60,uStack_64);
  puVar5[1] = uStack_98;
  *puVar5 = local_a0;
  puVar5[3] = uStack_88;
  puVar5[2] = uStack_90;
LAB_00128d44:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4 | uVar7;
}


// ===== 00128d74  FUN_00128d74 =====

ulong FUN_00128d74(long *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int *piVar6;
  ulong uVar7;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar5 = (undefined8 *)*param_1;
  uStack_78 = puVar5[5];
  local_80 = puVar5[4];
  uStack_70 = puVar5[6];
  piVar6 = (int *)(puVar5 + 3);
  iVar3 = *piVar6;
  uStack_68 = (undefined4)puVar5[7];
  uStack_64 = (undefined4)((ulong)puVar5[7] >> 0x20);
  uStack_98 = puVar5[1];
  local_a0 = *puVar5;
  uStack_88 = puVar5[3];
  uStack_90 = puVar5[2];
  uStack_58 = (undefined4)puVar5[9];
  uStack_54 = (undefined4)((ulong)puVar5[9] >> 0x20);
  local_60 = (undefined4)puVar5[8];
  uStack_5c = (undefined4)((ulong)puVar5[8] >> 0x20);
  if (iVar3 == 0xe) {
    FUN_00126264(&local_d0,puVar5);
    puVar5[8] = uStack_a8;
    puVar5[7] = local_b0;
    puVar5[4] = uStack_c8;
    *(undefined8 *)piVar6 = local_d0;
    puVar5[6] = uStack_b8;
    puVar5[5] = uStack_c0;
    iVar3 = *(int *)(puVar5 + 3);
  }
  if (iVar3 == 3) {
    FUN_00126264(&local_d0,puVar5);
    puVar5[8] = uStack_a8;
    puVar5[7] = local_b0;
    puVar5[4] = uStack_c8;
    *(undefined8 *)piVar6 = local_d0;
    puVar5[6] = uStack_b8;
    puVar5[5] = uStack_c0;
    if (*(int *)(puVar5 + 3) == 0xe) {
      FUN_00126264(&local_d0,puVar5);
      puVar5[8] = uStack_a8;
      puVar5[7] = local_b0;
      puVar5[4] = uStack_c8;
      *(undefined8 *)piVar6 = local_d0;
      puVar5[6] = uStack_b8;
      puVar5[5] = uStack_c0;
    }
    puVar5 = (undefined8 *)*param_1;
    piVar6 = (int *)(puVar5 + 3);
    iVar3 = *piVar6;
    if (iVar3 == *(int *)(puVar5 + 9)) {
      uVar7 = 0;
      uVar4 = 0;
      puVar5[5] = uStack_78;
      puVar5[4] = local_80;
      puVar5[7] = CONCAT44(uStack_64,uStack_68);
      puVar5[6] = uStack_70;
      *(ulong *)((long)puVar5 + 0x44) = CONCAT44(uStack_58,uStack_5c);
      *(ulong *)((long)puVar5 + 0x3c) = CONCAT44(local_60,uStack_64);
      puVar5[1] = uStack_98;
      *puVar5 = local_a0;
      puVar5[3] = uStack_88;
      puVar5[2] = uStack_90;
      goto LAB_00128f60;
    }
    if (iVar3 < 0xb) {
      if ((iVar3 == 7) || (iVar3 == 10)) {
LAB_00128e9c:
        FUN_00126264(&local_d0);
        puVar5[8] = uStack_a8;
        puVar5[7] = local_b0;
        puVar5[4] = uStack_c8;
        *(undefined8 *)piVar6 = local_d0;
        puVar5[6] = uStack_b8;
        puVar5[5] = uStack_c0;
        lVar2 = *param_1;
        if (*(int *)(lVar2 + 0x18) == 0xe) {
          FUN_00126264(&local_d0);
          *(undefined8 *)(lVar2 + 0x40) = uStack_a8;
          *(undefined8 *)(lVar2 + 0x38) = local_b0;
          *(undefined8 *)(lVar2 + 0x20) = uStack_c8;
          *(undefined8 *)(lVar2 + 0x18) = local_d0;
          *(undefined8 *)(lVar2 + 0x30) = uStack_b8;
          *(undefined8 *)(lVar2 + 0x28) = uStack_c0;
          lVar2 = *param_1;
          if (*(int *)(lVar2 + 0x18) == 0xe) {
            FUN_00126264(&local_d0);
            *(undefined8 *)(lVar2 + 0x40) = uStack_a8;
            *(undefined8 *)(lVar2 + 0x38) = local_b0;
            *(undefined8 *)(lVar2 + 0x20) = uStack_c8;
            *(undefined8 *)(lVar2 + 0x18) = local_d0;
            *(undefined8 *)(lVar2 + 0x30) = uStack_b8;
            *(undefined8 *)(lVar2 + 0x28) = uStack_c0;
          }
        }
        goto LAB_00128f3c;
      }
    }
    else if ((iVar3 == 0xb) || (iVar3 == 0xc)) goto LAB_00128e9c;
    uVar7 = (ulong)*(uint *)(puVar5 + 6);
    FUN_00126264(&local_d0);
    puVar5[4] = uStack_c8;
    *(undefined8 *)piVar6 = local_d0;
    puVar5[6] = uStack_b8;
    puVar5[5] = uStack_c0;
    puVar5[8] = uStack_a8;
    puVar5[7] = local_b0;
    if (iVar3 == 0xd) {
      uVar4 = 0x100000000;
      goto LAB_00128f60;
    }
  }
LAB_00128f3c:
  uVar7 = 0;
  puVar5 = (undefined8 *)*param_1;
  uVar4 = 0;
  puVar5[5] = uStack_78;
  puVar5[4] = local_80;
  puVar5[7] = CONCAT44(uStack_64,uStack_68);
  puVar5[6] = uStack_70;
  *(ulong *)((long)puVar5 + 0x44) = CONCAT44(uStack_58,uStack_5c);
  *(ulong *)((long)puVar5 + 0x3c) = CONCAT44(local_60,uStack_64);
  puVar5[1] = uStack_98;
  *puVar5 = local_a0;
  puVar5[3] = uStack_88;
  puVar5[2] = uStack_90;
LAB_00128f60:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4 | uVar7;
}


// ===== 00128f90  FUN_00128f90 =====

ulong FUN_00128f90(long *param_1)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  float fVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  byte *pbVar12;
  float fVar13;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  puVar5 = (undefined8 *)*param_1;
  uStack_88 = puVar5[5];
  local_90 = puVar5[4];
  uStack_80 = puVar5[6];
  piVar11 = (int *)(puVar5 + 3);
  iVar2 = *piVar11;
  uStack_78 = (undefined4)puVar5[7];
  uStack_74 = (undefined4)((ulong)puVar5[7] >> 0x20);
  uStack_a8 = puVar5[1];
  local_b0 = *puVar5;
  uStack_98 = puVar5[3];
  uStack_a0 = puVar5[2];
  uStack_68 = (undefined4)puVar5[9];
  uStack_64 = (undefined4)((ulong)puVar5[9] >> 0x20);
  local_70 = (undefined4)puVar5[8];
  uStack_6c = (undefined4)((ulong)puVar5[8] >> 0x20);
  if (iVar2 == *(int *)(puVar5 + 9)) {
    uVar10 = 0;
    uVar9 = 0;
    goto LAB_0012919c;
  }
  if (10 < iVar2) {
    if ((iVar2 != 0xb) && (iVar2 != 0xc)) goto LAB_00129098;
LAB_00129024:
    FUN_00126264(&local_e0);
    puVar5[8] = uStack_b8;
    puVar5[7] = local_c0;
    puVar5[4] = uStack_d8;
    *(undefined8 *)piVar11 = local_e0;
    puVar5[6] = uStack_c8;
    puVar5[5] = uStack_d0;
    lVar6 = *param_1;
    if (*(int *)(lVar6 + 0x18) == 0xe) {
      FUN_00126264(&local_e0);
      *(undefined8 *)(lVar6 + 0x40) = uStack_b8;
      *(undefined8 *)(lVar6 + 0x38) = local_c0;
      *(undefined8 *)(lVar6 + 0x20) = uStack_d8;
      *(undefined8 *)(lVar6 + 0x18) = local_e0;
      *(undefined8 *)(lVar6 + 0x30) = uStack_c8;
      *(undefined8 *)(lVar6 + 0x28) = uStack_d0;
      lVar6 = *param_1;
      if (*(int *)(lVar6 + 0x18) == 0xe) {
        FUN_00126264(&local_e0);
        *(undefined8 *)(lVar6 + 0x40) = uStack_b8;
        *(undefined8 *)(lVar6 + 0x38) = local_c0;
        *(undefined8 *)(lVar6 + 0x20) = uStack_d8;
        *(undefined8 *)(lVar6 + 0x18) = local_e0;
        *(undefined8 *)(lVar6 + 0x30) = uStack_c8;
        *(undefined8 *)(lVar6 + 0x28) = uStack_d0;
      }
    }
LAB_00129178:
    uVar10 = 0;
    puVar5 = (undefined8 *)*param_1;
    uVar9 = 0;
    puVar5[5] = uStack_88;
    puVar5[4] = local_90;
    puVar5[7] = CONCAT44(uStack_74,uStack_78);
    puVar5[6] = uStack_80;
    *(ulong *)((long)puVar5 + 0x44) = CONCAT44(uStack_68,uStack_6c);
    *(ulong *)((long)puVar5 + 0x3c) = CONCAT44(local_70,uStack_74);
    puVar5[1] = uStack_a8;
    *puVar5 = local_b0;
    puVar5[3] = uStack_98;
    puVar5[2] = uStack_a0;
    goto LAB_0012919c;
  }
  if ((iVar2 == 7) || (iVar2 == 10)) goto LAB_00129024;
LAB_00129098:
  pbVar12 = (byte *)puVar5[7];
  lVar6 = puVar5[8];
  fVar13 = *(float *)(puVar5 + 6);
  FUN_00126264(&local_e0);
  puVar5[4] = uStack_d8;
  *(undefined8 *)piVar11 = local_e0;
  puVar5[6] = uStack_c8;
  puVar5[5] = uStack_d0;
  puVar5[8] = uStack_b8;
  puVar5[7] = local_c0;
  if (iVar2 == 9) {
    uVar9 = 0x100000000;
  }
  else {
    if ((iVar2 != 5) || (lVar6 == 0)) goto LAB_00129178;
    uVar7 = 0x811c9dc5;
    do {
      bVar3 = *pbVar12;
      bVar1 = bVar3 | 0x20;
      if (0x19 < bVar3 - 0x41) {
        bVar1 = bVar3;
      }
      lVar6 = lVar6 + -1;
      uVar7 = (uVar7 ^ (int)(char)bVar1) * 0x1000193;
      pbVar12 = pbVar12 + 1;
    } while (lVar6 != 0);
    if ((int)uVar7 < -0x39a67fe1) {
      if (uVar7 == 0x914bd27a) {
        fVar8 = 360.0;
      }
      else {
        if (uVar7 != 0x9f9a8919) goto LAB_00129178;
        fVar8 = 0.9;
      }
LAB_001291d0:
      fVar13 = fVar13 * fVar8;
    }
    else if (uVar7 != 0xc659801f) {
      if (uVar7 != 0x50ff2768) goto LAB_00129178;
      fVar8 = 57.29578;
      goto LAB_001291d0;
    }
    uVar9 = 0x200000000;
  }
  uVar10 = (ulong)(uint)fVar13;
LAB_0012919c:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9 | uVar10;
}


// ===== 001291ec  FUN_001291ec =====

uint FUN_001291ec(float param_1,float param_2,float param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  param_2 = param_2 / 100.0;
  fVar7 = param_1 + 0.33333334;
  param_3 = param_3 / 100.0;
  fVar2 = 1.0;
  if (param_2 == 1.0 || param_2 < 1.0 != NAN(param_2)) {
    fVar2 = param_2;
  }
  fVar4 = 0.0;
  if (0.0 <= param_2) {
    fVar4 = fVar2;
  }
  fVar2 = 1.0;
  if (param_3 == 1.0 || param_3 < 1.0 != NAN(param_3)) {
    fVar2 = param_3;
  }
  fVar5 = 0.0;
  if (0.0 <= param_3) {
    fVar5 = fVar2;
  }
  fVar2 = (float)NEON_fmsub(fVar5,fVar4,fVar4 + fVar5);
  if (fVar5 < 0.5) {
    fVar2 = fVar5 * (fVar4 + 1.0);
  }
  fVar4 = fVar7 + 1.0;
  if (0.0 <= fVar7) {
    fVar4 = fVar7;
  }
  fVar5 = (float)NEON_fnmsub(fVar5,0x40000000,fVar2);
  fVar7 = fVar4 + -1.0;
  if (fVar4 == 1.0 || fVar4 < 1.0 != NAN(fVar4)) {
    fVar7 = fVar4;
  }
  if (0.16666667 <= fVar7) {
    fVar4 = fVar2;
    if ((0.5 <= fVar7) && (fVar4 = fVar5, fVar7 < 0.6666667)) {
      fVar3 = fVar2 - fVar5;
      fVar4 = 0.6666667 - fVar7;
      fVar7 = 6.0;
      goto LAB_00129290;
    }
  }
  else {
    fVar4 = fVar2 - fVar5;
    fVar3 = 6.0;
LAB_00129290:
    fVar4 = (float)NEON_fmadd(fVar4 * fVar3,fVar7,fVar5);
  }
  fVar7 = param_1 + 1.0;
  if (0.0 <= param_1) {
    fVar7 = param_1;
  }
  fVar3 = fVar7 + -1.0;
  if (fVar7 == 1.0 || fVar7 < 1.0 != NAN(fVar7)) {
    fVar3 = fVar7;
  }
  if (0.16666667 <= fVar3) {
    fVar7 = fVar2;
    if ((fVar3 < 0.5) || (fVar7 = fVar5, 0.6666667 <= fVar3)) goto LAB_00129358;
    fVar6 = fVar2 - fVar5;
    fVar7 = 0.6666667 - fVar3;
    fVar3 = 6.0;
  }
  else {
    fVar7 = fVar2 - fVar5;
    fVar6 = 6.0;
  }
  fVar7 = (float)NEON_fmadd(fVar7 * fVar6,fVar3,fVar5);
LAB_00129358:
  param_1 = param_1 + -0.33333334;
  fVar3 = param_1 + 1.0;
  if (0.0 <= param_1) {
    fVar3 = param_1;
  }
  fVar6 = fVar3 + -1.0;
  if (fVar3 == 1.0 || fVar3 < 1.0 != NAN(fVar3)) {
    fVar6 = fVar3;
  }
  if (0.16666667 <= fVar6) {
    fVar3 = fVar2;
    if ((0.5 <= fVar6) && (fVar3 = fVar5, fVar6 < 0.6666667)) {
      fVar3 = (float)NEON_fmadd((0.6666667 - fVar6) * (fVar2 - fVar5),0x40c00000,fVar5);
    }
  }
  else {
    fVar3 = (float)NEON_fmadd((fVar2 - fVar5) * 6.0,fVar6,fVar5);
  }
  uVar1 = NEON_ushl(CONCAT44((int)(float)(int)(fVar7 * 255.0),(int)(float)(int)(fVar3 * 255.0)),
                    DAT_00108d68,4);
  return CONCAT13((byte)((ulong)uVar1 >> 0x18) | (byte)((ulong)uVar1 >> 0x38),
                  CONCAT12((byte)((ulong)uVar1 >> 0x10) | (byte)((ulong)uVar1 >> 0x30),
                           CONCAT11((byte)((ulong)uVar1 >> 8) | (byte)((ulong)uVar1 >> 0x28),
                                    (byte)uVar1 | (byte)((ulong)uVar1 >> 0x20)))) |
         (int)(fVar4 * 255.0);
}


// ===== 00129434  FUN_00129434 =====

uint FUN_00129434(float param_1,float param_2,float param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  uVar6 = CONCAT44(param_3 / 100.0,param_2 / 100.0);
  uVar7 = NEON_fmov(0x3f800000,4);
  uVar11 = NEON_fcmgt(uVar6,uVar7,4);
  uVar12 = NEON_fcmlt(uVar6,0,4);
  uVar6 = NEON_bit(uVar6,uVar7,uVar11,1);
  fVar5 = (float)CONCAT13((byte)((ulong)uVar6 >> 0x18) & ~(byte)((ulong)uVar12 >> 0x18),
                          CONCAT12((byte)((ulong)uVar6 >> 0x10) & ~(byte)((ulong)uVar12 >> 0x10),
                                   CONCAT11((byte)((ulong)uVar6 >> 8) & ~(byte)((ulong)uVar12 >> 8),
                                            (byte)uVar6 & ~(byte)uVar12)));
  fVar4 = (float)(CONCAT17((byte)((ulong)uVar6 >> 0x38) & ~(byte)((ulong)uVar12 >> 0x38),
                           CONCAT16((byte)((ulong)uVar6 >> 0x30) & ~(byte)((ulong)uVar12 >> 0x30),
                                    CONCAT15((byte)((ulong)uVar6 >> 0x28) &
                                             ~(byte)((ulong)uVar12 >> 0x28),
                                             CONCAT14((byte)((ulong)uVar6 >> 0x20) &
                                                      ~(byte)((ulong)uVar12 >> 0x20),fVar5)))) >>
                 0x20);
  fVar8 = fVar5 + fVar4;
  if (fVar8 < 1.0 == NAN(fVar8)) {
    uVar1 = (uint)((fVar5 / fVar8) * 255.0);
    uVar2 = uVar1;
    uVar3 = uVar1;
  }
  else {
    fVar9 = param_1 + 0.33333334;
    fVar8 = fVar9 + 1.0;
    if (0.0 <= fVar9) {
      fVar8 = fVar9;
    }
    fVar9 = fVar8 + -1.0;
    if (fVar8 == 1.0 || fVar8 < 1.0 != NAN(fVar8)) {
      fVar9 = fVar8;
    }
    uVar15 = NEON_fmadd(fVar9,0x40c00000,0);
    uVar14 = NEON_fmadd(0.6666667 - fVar9,0x40c00000,0);
    uVar13 = 0;
    if (fVar9 < 0.6666667) {
      uVar13 = uVar14;
    }
    uVar14 = 0x3f800000;
    if (0.5 <= fVar9) {
      uVar14 = uVar13;
    }
    if (fVar9 < 0.16666667) {
      uVar14 = uVar15;
    }
    fVar8 = param_1 + 1.0;
    if (0.0 <= param_1) {
      fVar8 = param_1;
    }
    fVar9 = fVar8 + -1.0;
    if (fVar8 == 1.0 || fVar8 < 1.0 != NAN(fVar8)) {
      fVar9 = fVar8;
    }
    uVar16 = NEON_fmadd(fVar9,0x40c00000,0);
    param_1 = param_1 + -0.33333334;
    uVar15 = NEON_fmadd(0.6666667 - fVar9,0x40c00000,0);
    uVar13 = 0;
    if (fVar9 < 0.6666667) {
      uVar13 = uVar15;
    }
    uVar15 = 0x3f800000;
    if (0.5 <= fVar9) {
      uVar15 = uVar13;
    }
    if (fVar9 < 0.16666667) {
      uVar15 = uVar16;
    }
    fVar8 = param_1 + 1.0;
    if (0.0 <= param_1) {
      fVar8 = param_1;
    }
    fVar9 = fVar8 + -1.0;
    if (fVar8 == 1.0 || fVar8 < 1.0 != NAN(fVar8)) {
      fVar9 = fVar8;
    }
    uVar16 = NEON_fmadd(0.6666667 - fVar9,0x40c00000,0);
    uVar13 = 0;
    if (fVar9 < 0.6666667) {
      uVar13 = uVar16;
    }
    uVar10 = NEON_fmadd(fVar9,0x40c00000,0);
    uVar16 = 0x3f800000;
    if (0.5 <= fVar9) {
      uVar16 = uVar13;
    }
    fVar4 = (1.0 - fVar5) - fVar4;
    if (fVar9 < 0.16666667) {
      uVar16 = uVar10;
    }
    fVar8 = (float)NEON_fmadd(uVar14,fVar4,fVar5);
    fVar9 = (float)NEON_fmadd(uVar15,fVar4,fVar5);
    fVar4 = (float)NEON_fmadd(uVar16,fVar4,fVar5);
    uVar1 = (uint)(fVar8 * 255.0);
    uVar2 = (int)(fVar9 * 255.0);
    uVar3 = (int)(fVar4 * 255.0);
  }
  return uVar2 << 8 | uVar3 << 0x10 | uVar1;
}


// ===== 00129608  FUN_00129608 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00129608(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong local_198;
  ulong local_190;
  void *local_188;
  undefined1 *local_180;
  undefined4 local_178;
  uint local_170;
  undefined4 local_168 [2];
  char *local_160;
  undefined *puStack_158;
  undefined1 local_150;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined1 auStack_138 [256];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  param_2 = (undefined8 *)*param_2;
  local_190 = 0;
  local_188 = (void *)0x0;
  local_198 = 0;
                    /* try { // try from 00129638 to 001296a7 has its CatchHandler @ 001297bc */
  __strlen_chk(PTR_zarray_0012fbb0,5);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  reserve((ulong)&local_198);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_198,0x107ba3);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_198,(ulong)PTR_zarray_0012fbb0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_198,0x107e90);
  local_168[0] = 0;
  local_160 = "Infinity";
  puStack_158 = &DAT_00107c5f;
  local_170 = 0;
  local_150 = 0x45;
  local_180 = auStack_138;
  uStack_144 = _UNK_001088a8;
  local_14c = _DAT_001088a0;
  local_178 = 0x100;
                    /* try { // try from 001296ec to 001296fb has its CatchHandler @ 001297a4 */
  double_conversion::DoubleToStringConverter::ToShortestIeeeNumber(*param_2,local_168,&local_180,0);
  local_180[(int)local_170] = 0;
  local_170 = 0xffffffff;
                    /* try { // try from 00129710 to 0012971b has its CatchHandler @ 001297a0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_198,(ulong)auStack_138);
  if (-1 < (int)local_170) {
    local_180[local_170] = 0;
  }
  uVar1 = local_198 >> 1 & 0x7f;
  pvVar3 = (void *)((ulong)&local_198 | 1);
  if ((local_198 & 1) != 0) {
    uVar1 = local_190;
    pvVar3 = local_188;
  }
                    /* try { // try from 0012974c to 0012975b has its CatchHandler @ 00129790 */
  folly::makeConversionError(param_1,0xd,pvVar3,(long)pvVar3 + uVar1);
  if ((local_198 & 1) != 0) {
    operator_delete(local_188);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001297ec  FUN_001297ec =====

void FUN_001297ec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00119b50("vector");
}


// ===== 00129800  FUN_00129800 =====

void FUN_00129800(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00114504("vector");
}


// ===== 00129814  FUN_00129814 =====

long * FUN_00129814(long *param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  undefined1 uStack_69;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar8 = *(ulong *)(param_2 + 8);
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
    uVar8 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 00129860 to 00129867 has its CatchHandler @ 001299cc */
  uVar8 = FUN_00114710(&uStack_69,pbVar3,uVar8);
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar15 = NEON_cnt(uVar11,1);
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar12 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar8;
    }
    else {
      uVar13 = uVar8;
      if (uVar11 <= uVar8) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = uVar8 / uVar11;
        }
        uVar13 = uVar8 - uVar13 * uVar11;
      }
    }
    plVar9 = *(long **)(*param_1 + uVar13 * 8);
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)*plVar9;
      if (plVar9 != (long *)0x0) {
        pbVar3 = param_2 + 1;
        sVar1 = (ulong)(*param_2 >> 1);
        if ((*param_2 & 1) != 0) {
          pbVar3 = *(byte **)(param_2 + 0x10);
          sVar1 = *(size_t *)(param_2 + 8);
        }
        do {
          uVar10 = plVar9[1];
          if (uVar8 == uVar10) {
            bVar4 = *(byte *)(plVar9 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar9[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) break;
                uVar10 = 0;
                while (*(byte *)((long)plVar9 + uVar10 + 0x11) == pbVar3[uVar10]) {
                  uVar10 = uVar10 + 1;
                  if (bVar4 >> 1 == uVar10) goto LAB_00129994;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar9[4],pbVar3,plVar9[3]);
                if (iVar7 == 0) break;
              }
            }
          }
          else {
            if (uVar12 < 2) {
              uVar10 = uVar10 & uVar11 - 1;
            }
            else if (uVar11 <= uVar10) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar10 / uVar11;
              }
              uVar10 = uVar10 - uVar5 * uVar11;
            }
            if (uVar10 != uVar13) goto LAB_00129990;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      goto LAB_00129994;
    }
  }
LAB_00129990:
  plVar9 = (long *)0x0;
LAB_00129994:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001299d0  FUN_001299d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001299d0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_getColorCache_0012fbc8;
  *(undefined4 *)(PTR_getColorCache_0012fbc8 + 0x60) = 0x3f800000;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(puVar2 + 0x50) = 0;
  *(undefined8 *)(puVar2 + 0x48) = 0;
  puVar2[0x58] = puVar2[0x30];
  puVar2[100] = puVar2[0x31];
                    /* try { // try from 00129a10 to 00129a8f has its CatchHandler @ 00129ac8 */
  uVar3 = std::__ndk1::__next_prime(0x41);
  uVar5 = *(ulong *)(puVar2 + 0x40);
  if (uVar5 > uVar3 || uVar3 == uVar5) {
    if (uVar5 <= uVar3) goto LAB_00129aa0;
    uVar4 = (ulong)((float)*(ulong *)(puVar2 + 0x50) / *(float *)(puVar2 + 0x60));
    if (uVar5 < 3) {
LAB_00129a8c:
      uVar4 = std::__ndk1::__next_prime(uVar4);
    }
    else {
      uVar7 = NEON_cnt(uVar5,1);
      uVar6 = NEON_uaddlv(uVar7,1);
      if (1 < (uint)CONCAT62((int6)((ulong)uVar7 >> 0x10),uVar6)) goto LAB_00129a8c;
      if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
    }
    if (uVar3 <= uVar4) {
      uVar3 = uVar4;
    }
    if (uVar5 <= uVar3) goto LAB_00129aa0;
  }
  FUN_0012a0b8(uVar3);
LAB_00129aa0:
  uVar1 = _UNK_001088b8;
  uVar7 = _DAT_001088b0;
  *(undefined8 *)(puVar2 + 0x68) = 0;
  *(undefined **)(puVar2 + 0x70) = puVar2 + 0x70;
  *(undefined **)(puVar2 + 0x78) = puVar2 + 0x70;
  *(undefined8 *)(puVar2 + 0x88) = uVar1;
  *(undefined8 *)(puVar2 + 0x80) = uVar7;
  return;
}


// ===== 00129b00  FUN_00129b00 =====

void FUN_00129b00(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = param_1 + 0xe;
  plVar3 = (long *)*plVar5;
  while (plVar3 != plVar5) {
    plVar6 = (long *)*plVar3;
    operator_delete(plVar3);
    plVar3 = plVar6;
  }
  param_1[0xd] = 0;
  *plVar5 = 0;
  param_1[0xf] = 0;
  puVar1 = (undefined8 *)param_1[9];
  while (puVar1 != (undefined8 *)0x0) {
    pvVar4 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar4;
  }
  pvVar4 = (void *)param_1[7];
  param_1[7] = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  plVar3 = (long *)param_1[4];
  if (plVar3 == param_1) {
    lVar2 = 4;
  }
  else {
    if (plVar3 == (long *)0x0) {
      return;
    }
    lVar2 = 5;
    param_1 = plVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00129ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + lVar2 * 8))(param_1);
  return;
}


// ===== 00129bb8  facebook::jni::JObject::getClass =====

/* facebook::jni::JObject::getClass() const */

void facebook::jni::JObject::getClass(void)

{
  undefined8 *in_x0;
  long *plVar1;
  undefined8 uVar2;
  undefined8 *in_x8;
  
                    /* try { // try from 00129bcc to 00129bdf has its CatchHandler @ 00129bf0 */
  plVar1 = (long *)facebook::jni::Environment::current();
  uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1,*in_x0);
  *in_x8 = uVar2;
  return;
}


// ===== 00129bf4  FUN_00129bf4 =====

long FUN_00129bf4(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)facebook::jni::Environment::current();
  lVar2 = (**(code **)(*plVar1 + 0x108))(plVar1,*param_1,"getColor",PTR_kDescriptor_0012fc00);
  facebook::jni::throwCppExceptionIf(lVar2 == 0);
  return lVar2;
}


// ===== 00129c48  facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

/* facebook::jni::base_owned_ref<facebook::jni::JClass,
   facebook::jni::LocalReferenceAllocator>::~base_owned_ref() */

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *this)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)this;
  if (lVar2 != 0) {
                    /* try { // try from 00129c60 to 00129c73 has its CatchHandler @ 00129c84 */
    plVar1 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb8))(plVar1,lVar2);
  }
  *(undefined8 *)this = 0;
  return;
}


// ===== 00129c88  FUN_00129c88 =====

void FUN_00129c88(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
                    /* try { // try from 00129ca0 to 00129cb3 has its CatchHandler @ 00129cc4 */
    plVar1 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb8))(plVar1,lVar2);
  }
  *param_1 = 0;
  return;
}


// ===== 00129cc8  FUN_00129cc8 =====

void FUN_00129cc8(undefined8 *param_1)

{
  void *pvVar1;
  
  FUN_0012a754(param_1[2]);
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00129d04  FUN_00129d04 =====

undefined8 * FUN_00129d04(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar4 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar4 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
    FUN_0011b480();
LAB_00129e64:
                    /* WARNING: Subroutine does not return */
    FUN_00119bd0();
  }
  lVar6 = param_1[2] - *param_1 >> 3;
  uVar7 = lVar6 * 0x5555555555555556;
  if (uVar7 < uVar1 || uVar7 - uVar1 == 0) {
    uVar7 = uVar1;
  }
  if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
    uVar7 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar7 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar7) goto LAB_00129e64;
    pvVar3 = operator_new(uVar7 * 0x18);
  }
  uVar8 = param_2[2];
  uVar13 = param_2[1];
  uVar12 = *param_2;
  puVar5 = (undefined8 *)((long)pvVar3 + lVar4 * 8);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  pvVar3 = (void *)((long)pvVar3 + uVar7 * 0x18);
  pbVar10 = (byte *)*param_1;
  pbVar11 = (byte *)param_1[1];
  puVar2 = puVar5 + 3;
  puVar5[1] = uVar13;
  *puVar5 = uVar12;
  puVar5[2] = uVar8;
  if (pbVar11 == pbVar10) {
    *param_1 = (long)puVar5;
    param_1[1] = (long)puVar2;
    param_1[2] = (long)pvVar3;
  }
  else {
    do {
      uVar12 = *(undefined8 *)(pbVar11 + -0x10);
      uVar8 = *(undefined8 *)(pbVar11 + -0x18);
      puVar5[-1] = *(undefined8 *)(pbVar11 + -8);
      pbVar9 = pbVar11 + -0x18;
      puVar5[-2] = uVar12;
      puVar5[-3] = uVar8;
      puVar5 = puVar5 + -3;
      pbVar11[-0x10] = 0;
      pbVar11[-0xf] = 0;
      pbVar11[-0xe] = 0;
      pbVar11[-0xd] = 0;
      pbVar11[-0xc] = 0;
      pbVar11[-0xb] = 0;
      pbVar11[-10] = 0;
      pbVar11[-9] = 0;
      pbVar11[-8] = 0;
      pbVar11[-7] = 0;
      pbVar11[-6] = 0;
      pbVar11[-5] = 0;
      pbVar11[-4] = 0;
      pbVar11[-3] = 0;
      pbVar11[-2] = 0;
      pbVar11[-1] = 0;
      pbVar11[-0x18] = 0;
      pbVar11[-0x17] = 0;
      pbVar11[-0x16] = 0;
      pbVar11[-0x15] = 0;
      pbVar11[-0x14] = 0;
      pbVar11[-0x13] = 0;
      pbVar11[-0x12] = 0;
      pbVar11[-0x11] = 0;
      pbVar11 = pbVar9;
    } while (pbVar9 != pbVar10);
    pbVar11 = (byte *)*param_1;
    pbVar10 = (byte *)param_1[1];
    *param_1 = (long)puVar5;
    param_1[1] = (long)puVar2;
    param_1[2] = (long)pvVar3;
    while (pbVar9 = pbVar10, pbVar9 != pbVar11) {
      pbVar10 = pbVar9 + -0x18;
      if ((*pbVar10 & 1) != 0) {
        operator_delete(*(void **)(pbVar9 + -8));
      }
    }
  }
  if (pbVar11 != (byte *)0x0) {
    operator_delete(pbVar11);
  }
  return puVar2;
}


// ===== 00129e68  FUN_00129e68 =====

void FUN_00129e68(long *param_1,ulong param_2)

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
      FUN_00119bd0();
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


// ===== 00129fc4  FUN_00129fc4 =====

void FUN_00129fc4(undefined8 *param_1)

{
  byte *pbVar1;
  void *pvVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  if (*(char *)(param_1 + 2) != '\0') {
    pbVar3 = *(byte **)((long)pvVar2 + 0x28);
    if (pbVar3 != (byte *)0x0) {
      pbVar1 = *(byte **)((long)pvVar2 + 0x30);
      pbVar4 = pbVar3;
      if (pbVar1 != pbVar3) {
        do {
          pbVar4 = pbVar1 + -0x18;
          if ((*pbVar4 & 1) != 0) {
            operator_delete(*(void **)(pbVar1 + -8));
          }
          pbVar1 = pbVar4;
        } while (pbVar4 != pbVar3);
        pbVar4 = *(byte **)((long)pvVar2 + 0x28);
      }
      *(byte **)((long)pvVar2 + 0x30) = pbVar3;
      operator_delete(pbVar4);
    }
    if ((*(byte *)((long)pvVar2 + 0x10) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar2 + 0x20));
    }
  }
  operator_delete(pvVar2);
  return;
}


// ===== 0012a068  FUN_0012a068 =====

void FUN_0012a068(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  void *pvVar3;
  
  puVar2 = PTR_getColorCache_0012fbc8;
  puVar1 = (undefined8 *)*(void **)(PTR_getColorCache_0012fbc8 + 0x48);
  while (puVar1 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar3;
  }
  pvVar3 = *(void **)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = 0;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar3);
  return;
}


// ===== 0012a0b8  FUN_0012a0b8 =====

void FUN_0012a0b8(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  puVar2 = PTR_getColorCache_0012fbc8;
  if (param_1 == 0) {
    pvVar3 = *(void **)(PTR_getColorCache_0012fbc8 + 0x38);
    *(undefined8 *)(PTR_getColorCache_0012fbc8 + 0x38) = 0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    *(undefined8 *)(puVar2 + 0x40) = 0;
  }
  else {
    if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00119bd0();
    }
    pvVar3 = operator_new(param_1 << 3);
    puVar2 = PTR_getColorCache_0012fbc8;
    pvVar4 = *(void **)(PTR_getColorCache_0012fbc8 + 0x38);
    *(void **)(PTR_getColorCache_0012fbc8 + 0x38) = pvVar3;
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
    uVar5 = 0;
    *(ulong *)(puVar2 + 0x40) = param_1;
    do {
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (param_1 != uVar5);
    plVar7 = *(long **)(puVar2 + 0x48);
    if (plVar7 != (long *)0x0) {
      uVar5 = plVar7[1];
      uVar11 = NEON_cnt(param_1,1);
      uVar10 = NEON_uaddlv(uVar11,1);
      uVar6 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
      if (uVar6 < 2) {
        uVar5 = uVar5 & param_1 - 1;
      }
      else if (param_1 <= uVar5) {
        uVar9 = 0;
        if (param_1 != 0) {
          uVar9 = uVar5 / param_1;
        }
        uVar5 = uVar5 - uVar9 * param_1;
      }
      *(undefined **)(*(long *)(puVar2 + 0x38) + uVar5 * 8) = puVar2 + 0x48;
      plVar8 = (long *)*plVar7;
      if (plVar8 != (long *)0x0) {
        do {
          uVar9 = plVar8[1];
          if (uVar6 < 2) {
            uVar9 = uVar9 & param_1 - 1;
          }
          else if (param_1 <= uVar9) {
            uVar1 = 0;
            if (param_1 != 0) {
              uVar1 = uVar9 / param_1;
            }
            uVar9 = uVar9 - uVar1 * param_1;
          }
          if (uVar9 != uVar5) {
            if (*(long *)(*(long *)(puVar2 + 0x38) + uVar9 * 8) == 0) {
              *(long **)(*(long *)(puVar2 + 0x38) + uVar9 * 8) = plVar7;
              uVar5 = uVar9;
            }
            else {
              *plVar7 = *plVar8;
              *plVar8 = **(long **)(*(long *)(puVar2 + 0x38) + uVar9 * 8);
              **(undefined8 **)(*(long *)(puVar2 + 0x38) + uVar9 * 8) = plVar8;
              plVar8 = plVar7;
            }
          }
          plVar7 = plVar8;
          plVar8 = (long *)*plVar7;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  return;
}


// ===== 0012a220  FUN_0012a220 =====

void FUN_0012a220(undefined8 *param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  undefined **local_60 [4];
  long *local_40;
  long local_28;
  
  local_40 = (long *)local_60;
  pppuVar2 = local_60;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60[0] = &PTR_FUN_0012f8a0;
                    /* try { // try from 0012a258 to 0012a25f has its CatchHandler @ 0012a2ac */
  (**(code **)*param_1)(local_60);
  if ((undefined ***)local_40 == local_60) {
    lVar3 = 4;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_0012a28c;
    lVar3 = 5;
    pppuVar2 = (undefined ***)local_40;
  }
  (**(code **)((long)*pppuVar2 + lVar3 * 8))();
LAB_0012a28c:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012a2fc  FUN_0012a2fc =====

void FUN_0012a2fc(void)

{
  return;
}


// ===== 0012a300  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0012fd68)();
  return;
}


// ===== 0012a304  FUN_0012a304 =====

void FUN_0012a304(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_0012f8a0;
  return;
}


// ===== 0012a328  FUN_0012a328 =====

void FUN_0012a328(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_0012f8a0;
  return;
}


// ===== 0012a338  FUN_0012a338 =====

void FUN_0012a338(void)

{
  return;
}


// ===== 0012a33c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0012fd68)();
  return;
}


// ===== 0012a340  FUN_0012a340 =====

void FUN_0012a340(void)

{
  long lVar1;
  undefined1 auStack_60 [32];
  undefined8 local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  std::__ndk1::mutex::lock();
  local_40 = 0;
                    /* try { // try from 0012a378 to 0012a37f has its CatchHandler @ 0012a3a8 */
  FUN_0012a3fc(*(undefined8 *)(PTR_getColorCache_0012fbc8 + 0x50),auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    std::__ndk1::mutex::unlock();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012a3d4  FUN_0012a3d4 =====

long FUN_0012a3d4(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0012fbf0) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0012a3f0  FUN_0012a3f0 =====

undefined * FUN_0012a3f0(void)

{
  return PTR_typeinfo_0012fbf8;
}


// ===== 0012a3fc  FUN_0012a3fc =====

void FUN_0012a3fc(long param_1,undefined *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  undefined2 uVar19;
  undefined8 uVar20;
  long local_50;
  long local_48;
  
  puVar4 = PTR_getColorCache_0012fbc8;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (param_1 != 0) {
    lVar18 = 0;
    puVar1 = PTR_getColorCache_0012fbc8;
    if (*(long *)(param_2 + 0x20) != 0) {
      puVar1 = param_2;
    }
    do {
      if (*(undefined **)(puVar4 + 0x70) == (undefined *)0x0 ||
          *(undefined **)(puVar4 + 0x70) == puVar4 + 0x70) break;
      plVar17 = *(long **)(puVar4 + 0x78);
      lVar11 = *plVar17;
      plVar6 = (long *)plVar17[1];
      *(long *)(puVar4 + 0x68) = *(long *)(puVar4 + 0x68) + -1;
      *plVar6 = lVar11;
      *(long **)(lVar11 + 8) = plVar6;
      *plVar17 = 0;
      plVar17[1] = 0;
      uVar7 = *(ulong *)(puVar4 + 0x40);
      if (uVar7 != 0) {
        uVar9 = plVar17[2];
        uVar20 = NEON_cnt(uVar7,1);
        uVar19 = NEON_uaddlv(uVar20,1);
        uVar10 = CONCAT62((int6)((ulong)uVar20 >> 0x10),uVar19) & 0xffffffff;
        if (uVar10 < 2) {
          uVar16 = uVar7 - 1 & uVar9;
        }
        else {
          uVar16 = uVar9;
          if (uVar7 <= uVar9) {
            uVar16 = 0;
            if (uVar7 != 0) {
              uVar16 = uVar9 / uVar7;
            }
            uVar16 = uVar9 - uVar16 * uVar7;
          }
        }
        lVar11 = *(long *)(puVar4 + 0x38);
        puVar12 = *(undefined8 **)(lVar11 + uVar16 * 8);
        if ((puVar12 != (undefined8 *)0x0) && (plVar6 = (long *)*puVar12, plVar6 != (long *)0x0)) {
          uVar13 = uVar7 - 1;
LAB_0012a504:
          uVar14 = plVar6[1];
          if (uVar14 == uVar9) {
            if (*(ulong *)(plVar6[2] + 0x10) != uVar9) goto LAB_0012a4fc;
            if (uVar10 < 2) {
              uVar9 = uVar13 & uVar9;
            }
            else if (uVar7 <= uVar9) {
              uVar16 = 0;
              if (uVar7 != 0) {
                uVar16 = uVar9 / uVar7;
              }
              uVar9 = uVar9 - uVar16 * uVar7;
            }
            plVar5 = *(long **)(lVar11 + uVar9 * 8);
            do {
              plVar15 = plVar5;
              plVar5 = (long *)*plVar15;
            } while ((long *)*plVar15 != plVar6);
            if (plVar15 == (long *)(puVar4 + 0x48)) {
LAB_0012a5cc:
              if (*plVar6 != 0) {
                uVar16 = *(ulong *)(*plVar6 + 8);
                if (uVar10 < 2) {
                  uVar16 = uVar16 & uVar13;
                }
                else if (uVar7 <= uVar16) {
                  uVar14 = 0;
                  if (uVar7 != 0) {
                    uVar14 = uVar16 / uVar7;
                  }
                  uVar16 = uVar16 - uVar14 * uVar7;
                }
                if (uVar16 == uVar9) goto LAB_0012a604;
              }
              *(undefined8 *)(lVar11 + uVar9 * 8) = 0;
            }
            else {
              uVar16 = plVar15[1];
              if (uVar10 < 2) {
                uVar16 = uVar16 & uVar13;
              }
              else if (uVar7 <= uVar16) {
                uVar14 = 0;
                if (uVar7 != 0) {
                  uVar14 = uVar16 / uVar7;
                }
                uVar16 = uVar16 - uVar14 * uVar7;
              }
              if (uVar16 != uVar9) goto LAB_0012a5cc;
            }
LAB_0012a604:
            lVar11 = *plVar6;
            if (lVar11 != 0) {
              uVar16 = *(ulong *)(lVar11 + 8);
              if (uVar10 < 2) {
                uVar16 = uVar16 & uVar13;
              }
              else if (uVar7 <= uVar16) {
                uVar10 = 0;
                if (uVar7 != 0) {
                  uVar10 = uVar16 / uVar7;
                }
                uVar16 = uVar16 - uVar10 * uVar7;
              }
              if (uVar16 != uVar9) {
                *(long **)(*(long *)(puVar4 + 0x38) + uVar16 * 8) = plVar15;
                lVar11 = *plVar6;
              }
            }
            lVar8 = *(long *)(puVar4 + 0x50);
            *plVar15 = lVar11;
            *plVar6 = 0;
            *(long *)(puVar4 + 0x50) = lVar8 + -1;
            operator_delete(plVar6);
            plVar6 = *(long **)(puVar1 + 0x20);
            goto joined_r0x0012a660;
          }
          if (uVar10 < 2) {
            uVar14 = uVar14 & uVar13;
          }
          else if (uVar7 <= uVar14) {
            uVar2 = 0;
            if (uVar7 != 0) {
              uVar2 = uVar14 / uVar7;
            }
            uVar14 = uVar14 - uVar2 * uVar7;
          }
          if (uVar14 == uVar16) goto LAB_0012a4fc;
        }
      }
LAB_0012a538:
      plVar6 = *(long **)(puVar1 + 0x20);
joined_r0x0012a660:
      if (plVar6 != (long *)0x0) {
        local_50 = plVar17[2];
                    /* try { // try from 0012a550 to 0012a55b has its CatchHandler @ 0012a690 */
        (**(code **)(*plVar6 + 0x30))(plVar6,&local_50,plVar17 + 3);
      }
      operator_delete(plVar17);
      lVar18 = lVar18 + 1;
    } while (lVar18 != param_1);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0012a4fc:
  plVar6 = (long *)*plVar6;
  if (plVar6 == (long *)0x0) goto LAB_0012a538;
  goto LAB_0012a504;
}


// ===== 0012a6b8  _JNIEnv::CallIntMethod =====

/* _JNIEnv::CallIntMethod(_jobject*, _jmethodID*, ...) */

void _JNIEnv::CallIntMethod(_jobject *param_1,_jmethodID *param_2,...)

{
  long lVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
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
  
  puStack_60 = auStack_a0;
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffd8;
  local_98 = in_x3;
  uStack_90 = in_x4;
  local_88 = in_x5;
  uStack_80 = in_x6;
  local_78 = in_x7;
  local_70 = (undefined1 *)register0x00000008;
  (**(code **)(*(long *)param_1 + 400))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012a754  FUN_0012a754 =====

void FUN_0012a754(undefined8 *param_1)

{
  byte *pbVar1;
  void *pvVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    do {
      pbVar3 = (byte *)param_1[5];
      pvVar2 = (void *)*param_1;
      if (pbVar3 != (byte *)0x0) {
        pbVar1 = (byte *)param_1[6];
        pbVar4 = pbVar3;
        if (pbVar1 != pbVar3) {
          do {
            pbVar4 = pbVar1 + -0x18;
            if ((*pbVar4 & 1) != 0) {
              operator_delete(*(void **)(pbVar1 + -8));
            }
            pbVar1 = pbVar4;
          } while (pbVar4 != pbVar3);
          pbVar4 = (byte *)param_1[5];
        }
        param_1[6] = pbVar3;
        operator_delete(pbVar4);
      }
      if ((*(byte *)(param_1 + 2) & 1) != 0) {
        operator_delete((void *)param_1[4]);
      }
      operator_delete(param_1);
      param_1 = (undefined8 *)pvVar2;
    } while (pvVar2 != (void *)0x0);
  }
  return;
}


// ===== 0012a7f4  FUN_0012a7f4 =====

void FUN_0012a7f4(undefined8 param_1,int *param_2)

{
  byte ****ppppbVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined1 auVar6 [16];
  byte ***local_68;
  byte ***local_60;
  byte ***pppbStack_58;
  byte ***local_50;
  byte ***pppbStack_48;
  byte ***local_40;
  byte ***pppbStack_38;
  undefined1 local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  if (param_2[0xc] == 1) {
    if (*(long *)(lVar3 + 0x28) == local_28) {
      facebook::jsi::Value::asNumber();
      return;
    }
    goto LAB_0012a9b8;
  }
  if (param_2[0xc] != 0) {
LAB_0012a988:
    if (*(long *)(lVar3 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_0011a6d0();
    }
    goto LAB_0012a9b8;
  }
  iVar2 = *param_2;
  if (iVar2 < 4) {
    if (iVar2 == 2) {
      uVar5 = NEON_ucvtf((ulong)*(byte *)(param_2 + 2));
    }
    else {
      if (iVar2 != 3) goto LAB_0012a99c;
      uVar5 = *(undefined8 *)(param_2 + 2);
    }
  }
  else {
    if (iVar2 != 6) {
      if (iVar2 == 4) {
        if (*(long *)(lVar3 + 0x28) == local_28) {
          FUN_0011fe5c(param_2 + 2);
          return;
        }
        goto LAB_0012a9b8;
      }
LAB_0012a99c:
      if (*(long *)(lVar3 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
        FUN_00119c04("int/double/bool/string");
      }
      goto LAB_0012a9b8;
    }
    uVar4 = (ulong)(*(byte *)(param_2 + 2) >> 1);
    local_60 = (byte ***)((long)param_2 + 9);
    if ((*(byte *)(param_2 + 2) & 1) != 0) {
      uVar4 = *(ulong *)(param_2 + 4);
      local_60 = (byte ***)*(byte *****)(param_2 + 6);
    }
    pppbStack_58 = (byte ***)((long)local_60 + uVar4);
    local_50 = local_60;
    pppbStack_48 = pppbStack_58;
    auVar6 = folly::detail::str_to_floating<double>((Range *)&local_50);
    uVar5 = auVar6._8_8_;
    uVar4 = auVar6._0_8_;
    param_1 = extraout_d0;
    if ((uVar4 & 0xff) != 1) {
LAB_0012a964:
      local_50 = (byte ***)&local_60;
      if (*(long *)(lVar3 + 0x28) != local_28) goto LAB_0012a9b8;
      param_1 = FUN_00120610(&local_50,uVar4 >> 8);
      goto LAB_0012a988;
    }
    local_30 = 1;
    local_40 = local_50;
    pppbStack_38 = pppbStack_48;
    for (ppppbVar1 = (byte ****)local_50; (byte ****)pppbStack_48 != ppppbVar1;
        ppppbVar1 = (byte ****)((long)ppppbVar1 + 1)) {
      if ((*(byte *)ppppbVar1 != 0x20) && (4 < *(byte *)ppppbVar1 - 9)) {
        local_68 = (byte ***)&local_40;
        if (*(long *)(lVar3 + 0x28) != local_28) goto LAB_0012a9b8;
        uVar4 = FUN_00120754(&local_68);
        param_1 = extraout_d0_00;
        goto LAB_0012a964;
      }
    }
  }
  param_1 = uVar5;
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
LAB_0012a9b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0012a9c0  FUN_0012a9c0 =====

void FUN_0012a9c0(void)

{
  (*(code *)PTR_0012fce0)();
  return;
}


// ===== 0012a9e0  <EXTERNAL>::__cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0012fce8)();
  return;
}


// ===== 0012a9f0  <EXTERNAL>::__cxa_atexit =====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_0012fcf0)();
  return;
}


// ===== 0012aa00  <EXTERNAL>::__register_atfork =====

void __register_atfork(void)

{
  (*(code *)PTR___register_atfork_0012fcf8)();
  return;
}


// ===== 0012aa10  facebook::react::RNCSliderMeasurementsManager::measure =====

void __thiscall facebook::react::RNCSliderMeasurementsManager::measure(void)

{
  (*(code *)PTR_measure_0012fd00)();
  return;
}


// ===== 0012aa20  facebook::jni::base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator> *this)

{
  (*(code *)PTR__base_owned_ref_0012fd08)();
  return;
}


// ===== 0012aa30  <EXTERNAL>::__cxa_guard_acquire =====

void __cxa_guard_acquire(void)

{
  (*(code *)PTR___cxa_guard_acquire_0012fd10)();
  return;
}


// ===== 0012aa40  <EXTERNAL>::facebook::jni::findClassStatic =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::findClassStatic(char *param_1)

{
  (*(code *)PTR_findClassStatic_0012fd18)();
  return;
}


// ===== 0012aa50  <EXTERNAL>::__cxa_guard_abort =====

void __cxa_guard_abort(void)

{
  (*(code *)PTR___cxa_guard_abort_0012fd20)();
  return;
}


// ===== 0012aa60  <EXTERNAL>::__cxa_guard_release =====

void __cxa_guard_release(void)

{
  (*(code *)PTR___cxa_guard_release_0012fd28)();
  return;
}


// ===== 0012aa70  <EXTERNAL>::facebook::jni::make_jstring =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::make_jstring(char *param_1)

{
  (*(code *)PTR_make_jstring_0012fd30)();
  return;
}


// ===== 0012aa80  <EXTERNAL>::__cxa_allocate_exception =====

void __cxa_allocate_exception(void)

{
  (*(code *)PTR___cxa_allocate_exception_0012fd38)();
  return;
}


// ===== 0012aa90  <EXTERNAL>::__cxa_free_exception =====

void __cxa_free_exception(void)

{
  (*(code *)PTR___cxa_free_exception_0012fd40)();
  return;
}


// ===== 0012aaa0  <EXTERNAL>::__cxa_throw =====

void __cxa_throw(void)

{
  (*(code *)PTR___cxa_throw_0012fd48)();
  return;
}


// ===== 0012aab0  <EXTERNAL>::std::logic_error::logic_error =====

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
  (*(code *)PTR_logic_error_0012fd50)();
  return;
}


// ===== 0012aac0  <EXTERNAL>::__cxa_begin_catch =====

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_0012fd58)();
  return;
}


// ===== 0012aad0  <EXTERNAL>::std::terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
  (*(code *)PTR_terminate_0012fd60)();
  return;
}


// ===== 0012aae0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0012fd68)();
  return;
}


// ===== 0012aaf0  <EXTERNAL>::facebook::jni::Environment::current =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::Environment::current(void)

{
  (*(code *)PTR_current_0012fd70)();
  return;
}


// ===== 0012ab00  <EXTERNAL>::std::__ndk1::mutex::lock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::lock(void)

{
  (*(code *)PTR_lock_0012fd78)();
  return;
}


// ===== 0012ab10  <EXTERNAL>::std::__ndk1::mutex::unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::unlock(void)

{
  (*(code *)PTR_unlock_0012fd80)();
  return;
}


// ===== 0012ab20  <EXTERNAL>::std::__ndk1::__shared_mutex_base::lock_shared =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_mutex_base::lock_shared(void)

{
  (*(code *)PTR_lock_shared_0012fd88)();
  return;
}


// ===== 0012ab30  <EXTERNAL>::memcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_0012fd90)((int)__s1);
  return iVar1;
}


// ===== 0012ab40  <EXTERNAL>::facebook::jni::throwPendingJniExceptionAsCppException =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwPendingJniExceptionAsCppException(void)

{
  (*(code *)PTR_throwPendingJniExceptionAsCppException_0012fd98)();
  return;
}


// ===== 0012ab50  <EXTERNAL>::std::__ndk1::__shared_mutex_base::unlock_shared =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_mutex_base::unlock_shared(void)

{
  (*(code *)PTR_unlock_shared_0012fda0)();
  return;
}


// ===== 0012ab60  <EXTERNAL>::facebook::jni::throwCppExceptionIf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwCppExceptionIf(bool param_1)

{
  (*(code *)PTR_throwCppExceptionIf_0012fda8)(param_1);
  return;
}


// ===== 0012ab70  <EXTERNAL>::facebook::react::ShadowNode::getSurfaceId =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::getSurfaceId(void)

{
  (*(code *)PTR_getSurfaceId_0012fdb0)();
  return;
}


// ===== 0012ab80  <EXTERNAL>::std::__ndk1::__shared_weak_count::__release_weak =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__release_weak(void)

{
  (*(code *)PTR___release_weak_0012fdb8)();
  return;
}


// ===== 0012ab90  <EXTERNAL>::facebook::jsi::NativeState::~NativeState =====

void __thiscall facebook::jsi::NativeState::~NativeState(NativeState *this)

{
  (*(code *)PTR__NativeState_0012fdc0)();
  return;
}


// ===== 0012aba0  <EXTERNAL>::facebook::react::LayoutableShadowNode::getLayoutMetrics =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::getLayoutMetrics(void)

{
  (*(code *)PTR_getLayoutMetrics_0012fdc8)();
  return;
}


// ===== 0012abb0  <EXTERNAL>::facebook::react::BaseViewProps::resolveTransform =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::BaseViewProps::resolveTransform(LayoutMetrics *param_1)

{
  (*(code *)PTR_resolveTransform_0012fdd0)();
  return;
}


// ===== 0012abc0  <EXTERNAL>::facebook::react::EventEmitter::dispatchEvent =====

void facebook::react::EventEmitter::dispatchEvent(void)

{
  (*(code *)PTR_dispatchEvent_0012fdd8)();
  return;
}


// ===== 0012abd0  <EXTERNAL>::operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_0012fde0)();
  return pvVar1;
}


// ===== 0012abe0  <EXTERNAL>::facebook::jsi::Value::~Value =====

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
  (*(code *)PTR__Value_0012fde8)();
  return;
}


// ===== 0012abf0  <EXTERNAL>::__strlen_chk =====

void __strlen_chk(void)

{
  (*(code *)PTR___strlen_chk_0012fdf0)();
  return;
}


// ===== 0012ac00  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init_copy_ctor_external =====

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
__init_copy_ctor_external
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  (*(code *)PTR___init_copy_ctor_external_0012fdf8)();
  return;
}


// ===== 0012ac10  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc =====

void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc(void)

{
  (*(code *)
    PTR__ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc_0012fe00
  )();
  return;
}


// ===== 0012ac20  facebook::react::parsePlatformColor =====

void facebook::react::parsePlatformColor(ContextContainer *param_1,int param_2,RawValue *param_3)

{
  (*(code *)PTR_parsePlatformColor_0012fe08)(param_1,param_2);
  return;
}


// ===== 0012ac30  facebook::jni::JObject::getClass =====

void facebook::jni::JObject::getClass(void)

{
  (*(code *)PTR_getClass_0012fe10)();
  return;
}


// ===== 0012ac40  facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *this)

{
  (*(code *)PTR__base_owned_ref_0012fe18)();
  return;
}


// ===== 0012ac50  _JNIEnv::CallIntMethod =====

void _JNIEnv::CallIntMethod(_jobject *param_1,_jmethodID *param_2,...)

{
  (*(code *)PTR_CallIntMethod_0012fe20)();
  return;
}


// ===== 0012ac60  <EXTERNAL>::facebook::react::HostPlatformViewProps::HostPlatformViewProps =====

void __thiscall
facebook::react::HostPlatformViewProps::HostPlatformViewProps
          (HostPlatformViewProps *this,PropsParserContext *param_1,HostPlatformViewProps *param_2,
          RawProps *param_3,function *param_4)

{
  (*(code *)PTR_HostPlatformViewProps_0012fe28)();
  return;
}


// ===== 0012ac70  <EXTERNAL>::facebook::react::HostPlatformViewProps::getDiffProps =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::HostPlatformViewProps::getDiffProps(Props *param_1)

{
  (*(code *)PTR_getDiffProps_0012fe30)();
  return;
}


// ===== 0012ac80  <EXTERNAL>::folly::dynamic::operator[] =====

void folly::dynamic::operator[](void)

{
  (*(code *)PTR_operator___0012fe38)();
  return;
}


// ===== 0012ac90  <EXTERNAL>::folly::dynamic::operator= =====

void __thiscall folly::dynamic::operator=(dynamic *this,dynamic *param_1)

{
  (*(code *)PTR_operator__0012fe40)();
  return;
}


// ===== 0012aca0  <EXTERNAL>::std::bad_array_new_length::bad_array_new_length =====

void __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
  (*(code *)PTR_bad_array_new_length_0012fe48)();
  return;
}


// ===== 0012acb0  <EXTERNAL>::strlen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0012fe50)();
  return sVar1;
}


// ===== 0012acc0  <EXTERNAL>::folly::dynamic::destroy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::dynamic::destroy(void)

{
  (*(code *)PTR_destroy_0012fe58)();
  return;
}


// ===== 0012acd0  <EXTERNAL>::folly::TypeError::TypeError =====

void __thiscall folly::TypeError::TypeError(void)

{
  (*(code *)PTR_TypeError_0012fe60)();
  return;
}


// ===== 0012ace0  <EXTERNAL>::std::runtime_error::~runtime_error =====

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
  (*(code *)PTR__runtime_error_0012fe68)();
  return;
}


// ===== 0012acf0  <EXTERNAL>::std::runtime_error::runtime_error =====

void __thiscall std::runtime_error::runtime_error(runtime_error *this,runtime_error *param_1)

{
  (*(code *)PTR_runtime_error_0012fe70)();
  return;
}


// ===== 0012ad00  <EXTERNAL>::folly::dynamic::dynamic =====

void __thiscall folly::dynamic::dynamic(dynamic *this,dynamic *param_1)

{
  (*(code *)PTR_dynamic_0012fe78)();
  return;
}


// ===== 0012ad10  <EXTERNAL>::folly::dynamic::operator= =====

void __thiscall folly::dynamic::operator=(dynamic *this,dynamic *param_1)

{
  (*(code *)PTR_operator__0012fe80)();
  return;
}


// ===== 0012ad20  <EXTERNAL>::facebook::react::RawProps::at =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::at(char *param_1,char *param_2,char *param_3)

{
  (*(code *)PTR_at_0012fe88)();
  return;
}


// ===== 0012ad30  <EXTERNAL>::google::LogMessage::LogMessage =====

void __thiscall
google::LogMessage::LogMessage(LogMessage *this,char *param_1,int param_2,int param_3)

{
  (*(code *)PTR_LogMessage_0012fe90)(this,param_1,param_2,param_3);
  return;
}


// ===== 0012ad40  <EXTERNAL>::google::LogMessage::stream =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void google::LogMessage::stream(void)

{
  (*(code *)PTR_stream_0012fe98)();
  return;
}


// ===== 0012ad50  <EXTERNAL>::facebook::react::RawPropsKey::operator.cast.to.basic_string =====

void __thiscall facebook::react::RawPropsKey::operator_cast_to_basic_string(RawPropsKey *this)

{
  (*(code *)PTR_operator_cast_to_basic_string_0012fea0)();
  return;
}


// ===== 0012ad60  <EXTERNAL>::google::LogMessage::~LogMessage =====

void __thiscall google::LogMessage::~LogMessage(LogMessage *this)

{
  (*(code *)PTR__LogMessage_0012fea8)();
  return;
}


// ===== 0012ad70  <EXTERNAL>::__cxa_end_catch =====

void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_0012feb0)();
  return;
}


// ===== 0012ad80  <EXTERNAL>::facebook::jsi::Value::asString =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asString(IRuntime *param_1)

{
  (*(code *)PTR_asString_0012feb8)();
  return;
}


// ===== 0012ad90  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry =====

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry
          (sentry *this,basic_ostream *param_1)

{
  (*(code *)PTR_sentry_0012fec0)();
  return;
}


// ===== 0012ada0  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry =====

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(sentry *this)

{
  (*(code *)PTR__sentry_0012fec8)();
  return;
}


// ===== 0012adb0  <EXTERNAL>::std::__ndk1::ios_base::__set_badbit_and_consider_rethrow =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::__set_badbit_and_consider_rethrow(void)

{
  (*(code *)PTR___set_badbit_and_consider_rethrow_0012fed0)();
  return;
}


// ===== 0012adc0  <EXTERNAL>::std::__ndk1::ios_base::getloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::getloc(void)

{
  (*(code *)PTR_getloc_0012fed8)();
  return;
}


// ===== 0012add0  <EXTERNAL>::std::__ndk1::locale::~locale =====

void __thiscall std::__ndk1::locale::~locale(locale *this)

{
  (*(code *)PTR__locale_0012fee0)();
  return;
}


// ===== 0012ade0  <EXTERNAL>::std::__ndk1::locale::use_facet =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::locale::use_facet(id *param_1)

{
  (*(code *)PTR_use_facet_0012fee8)();
  return;
}


// ===== 0012adf0  <EXTERNAL>::std::__ndk1::ios_base::clear =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::clear(uint param_1)

{
  (*(code *)PTR_clear_0012fef0)(param_1);
  return;
}


// ===== 0012ae00  <EXTERNAL>::folly::dynamic::size =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::dynamic::size(void)

{
  (*(code *)PTR_size_0012fef8)();
  return;
}


// ===== 0012ae10  <EXTERNAL>::facebook::jsi::Value::Value =====

void __thiscall facebook::jsi::Value::Value(Value *this,Value *param_1)

{
  (*(code *)PTR_Value_0012ff00)();
  return;
}


// ===== 0012ae20  <EXTERNAL>::folly::dynamic::dynamic =====

void __thiscall folly::dynamic::dynamic(dynamic *this,dynamic *param_1)

{
  (*(code *)PTR_dynamic_0012ff08)();
  return;
}


// ===== 0012ae30  <EXTERNAL>::facebook::jsi::Value::Value =====

void __thiscall facebook::jsi::Value::Value(Value *this,IRuntime *param_1,Value *param_2)

{
  (*(code *)PTR_Value_0012ff10)();
  return;
}


// ===== 0012ae40  <EXTERNAL>::facebook::jsi::Value::asBool =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asBool(void)

{
  (*(code *)PTR_asBool_0012ff18)();
  return;
}


// ===== 0012ae50  <EXTERNAL>::std::__ndk1::__next_prime =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__next_prime(ulong param_1)

{
  (*(code *)PTR___next_prime_0012ff20)();
  return;
}


// ===== 0012ae60  <EXTERNAL>::nextafter =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double nextafter(double __x,double __y)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_nextafter_0012ff28)();
  return dVar1;
}


// ===== 0012ae70  <EXTERNAL>::std::range_error::~range_error =====

void __thiscall std::range_error::~range_error(range_error *this)

{
  (*(code *)PTR__range_error_0012ff30)();
  return;
}


// ===== 0012ae80  <EXTERNAL>::folly::makeConversionError =====

void folly::makeConversionError(void)

{
  (*(code *)PTR_makeConversionError_0012ff38)();
  return;
}


// ===== 0012ae90  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::reserve =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     reserve(ulong param_1)

{
  (*(code *)PTR_reserve_0012ff40)();
  return;
}


// ===== 0012aea0  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     append(char *param_1,ulong param_2)

{
  (*(code *)PTR_append_0012ff48)();
  return;
}


// ===== 0012aeb0  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     push_back(char param_1)

{
  (*(code *)PTR_push_back_0012ff50)(param_1);
  return;
}


// ===== 0012aec0  <EXTERNAL>::folly::detail::str_to_floating<double> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::detail::str_to_floating<double>(Range *param_1)

{
  (*(code *)PTR_str_to_floating<double>_0012ff58)();
  return;
}


// ===== 0012aed0  <EXTERNAL>::facebook::jsi::Value::asNumber =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asNumber(void)

{
  (*(code *)PTR_asNumber_0012ff60)();
  return;
}


// ===== 0012aee0  <EXTERNAL>::facebook::react::getDefaultColorSpace =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::getDefaultColorSpace(void)

{
  (*(code *)PTR_getDefaultColorSpace_0012ff68)();
  return;
}


// ===== 0012aef0  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableNativeCSSParsing =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableNativeCSSParsing(void)

{
  (*(code *)PTR_enableNativeCSSParsing_0012ff70)();
  return;
}


// ===== 0012af00  <EXTERNAL>::facebook::react::colorFromComponents =====

void facebook::react::colorFromComponents(void)

{
  (*(code *)PTR_colorFromComponents_0012ff78)();
  return;
}


// ===== 0012af10  <EXTERNAL>::remainderf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float remainderf(float __x,float __y)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_remainderf_0012ff80)();
  return fVar1;
}


// ===== 0012af20  <EXTERNAL>::double_conversion::DoubleToStringConverter::ToShortestIeeeNumber =====

void double_conversion::DoubleToStringConverter::ToShortestIeeeNumber(void)

{
  (*(code *)PTR_ToShortestIeeeNumber_0012ff88)();
  return;
}


// ===== 0012af30  <EXTERNAL>::std::__ndk1::__call_once =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__call_once(ulong *param_1,void *param_2,_func_void_void_ptr *param_3)

{
  (*(code *)PTR___call_once_0012ff90)();
  return;
}


// ===== 0012af40  <EXTERNAL>::std::exception::~exception =====

void __thiscall std::exception::~exception(exception *this)

{
  (*(code *)PTR__exception_0012ff98)();
  return;
}


// ===== 0012af50  <EXTERNAL>::dl_iterate_phdr =====

void dl_iterate_phdr(void)

{
  (*(code *)PTR_dl_iterate_phdr_0012ffa0)();
  return;
}


// ===== 0012af60  <EXTERNAL>::fwrite =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0012ffa8)();
  return sVar1;
}


// ===== 0012af70  <EXTERNAL>::memmove =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0012ffb0)();
  return pvVar1;
}


// ===== 0012af80  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0012ffb8)();
  return;
}


// ===== 0012af90  <EXTERNAL>::malloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0012ffc0)();
  return pvVar1;
}


// ===== 0012afa0  <EXTERNAL>::strncmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0012ffc8)((int)__s1);
  return iVar1;
}


// ===== 0012afb0  <EXTERNAL>::fprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0012ffd0)((int)__stream);
  return iVar1;
}


// ===== 0012afc0  <EXTERNAL>::__stack_chk_fail =====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_0012ffd8)();
  return;
}


// ===== 0012afd0  <EXTERNAL>::pthread_rwlock_wrlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_wrlock_0012ffe0)((int)__rwlock);
  return iVar1;
}


// ===== 0012afe0  <EXTERNAL>::syscall =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_syscall_0012ffe8)();
  return lVar1;
}


// ===== 0012aff0  <EXTERNAL>::pthread_rwlock_unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_unlock_0012fff0)((int)__rwlock);
  return iVar1;
}


// ===== 0012b000  <EXTERNAL>::memcpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0012fff8)();
  return pvVar1;
}


// ===== 0012b010  <EXTERNAL>::getauxval =====

void getauxval(void)

{
  (*(code *)PTR_getauxval_00130000)();
  return;
}


// ===== 0012b020  <EXTERNAL>::abort =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00130008)();
  return;
}


// ===== 0012b030  <EXTERNAL>::__system_property_get =====

void __system_property_get(void)

{
  (*(code *)PTR___system_property_get_00130010)();
  return;
}


// ===== 0012b040  <EXTERNAL>::getpid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_00130018)();
  return _Var1;
}


// ===== 0012b050  <EXTERNAL>::pthread_rwlock_rdlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_rdlock_00130020)((int)__rwlock);
  return iVar1;
}


// ===== 0012b060  <EXTERNAL>::memset =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00130028)(__s,__c);
  return pvVar1;
}


// ===== 0012b070  <EXTERNAL>::fflush =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00130030)((int)__stream);
  return iVar1;
}


// ===== 00136000  <EXTERNAL>::__cxa_finalize =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00136008  <EXTERNAL>::__cxa_atexit =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00136010  <EXTERNAL>::__register_atfork =====

/* WARNING: Control flow encountered bad instruction data */

void __register_atfork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00136018  <EXTERNAL>::__gxx_personality_v0 =====

/* WARNING: Control flow encountered bad instruction data */

void __gxx_personality_v0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00136020  <EXTERNAL>::__cxa_guard_acquire =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_acquire(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00136028  <EXTERNAL>::facebook::jni::findClassStatic =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::findClassStatic(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00136030  <EXTERNAL>::__cxa_guard_abort =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00136038  <EXTERNAL>::__cxa_guard_release =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00136040  <EXTERNAL>::facebook::jni::make_jstring =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::make_jstring(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00136048  <EXTERNAL>::__cxa_allocate_exception =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_allocate_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00136050  <EXTERNAL>::__cxa_free_exception =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_free_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00136058  <EXTERNAL>::__cxa_throw =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_throw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00136060  <EXTERNAL>::std::logic_error::logic_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00136068  <EXTERNAL>::__cxa_begin_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_begin_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00136070  <EXTERNAL>::std::terminate =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00136078  <EXTERNAL>::operator.delete =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00136080  <EXTERNAL>::facebook::jni::Environment::current =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::Environment::current(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00136088  <EXTERNAL>::std::__ndk1::mutex::lock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00136090  <EXTERNAL>::std::__ndk1::mutex::unlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::unlock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00136098  <EXTERNAL>::std::__ndk1::__shared_mutex_base::lock_shared =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_mutex_base::lock_shared(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001360a0  <EXTERNAL>::memcmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001360a8  <EXTERNAL>::std::out_of_range::~out_of_range =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::out_of_range::~out_of_range(out_of_range *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001360b0  <EXTERNAL>::facebook::jni::throwPendingJniExceptionAsCppException =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwPendingJniExceptionAsCppException(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001360b8  <EXTERNAL>::std::__ndk1::__shared_mutex_base::unlock_shared =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_mutex_base::unlock_shared(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001360c0  <EXTERNAL>::facebook::jni::throwCppExceptionIf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwCppExceptionIf(bool param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001360d8  <EXTERNAL>::facebook::react::ShadowNode::getSurfaceId =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::getSurfaceId(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001360e0  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::completeClone =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::completeClone
               (ShadowNode *param_1,ShadowNodeFragment *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001360e8  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::appendChild =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::appendChild(shared_ptr *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001360f0  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::replaceChild =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::replaceChild
               (ShadowNode *param_1,shared_ptr *param_2,ulong param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001360f8  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::layoutTree =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::YogaLayoutableShadowNode::layoutTree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00136100  <EXTERNAL>::facebook::react::LayoutableShadowNode::measure =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::measure
               (LayoutContext *param_1,LayoutConstraints *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00136108  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::layout =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::YogaLayoutableShadowNode::layout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00136110  <EXTERNAL>::facebook::react::LayoutableShadowNode::getContentOriginOffset =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::getContentOriginOffset(bool param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00136118  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::dirtyLayout =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::dirtyLayout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00136120  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::getIsLayoutClean =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::getIsLayoutClean(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00136128  <EXTERNAL>::facebook::react::LayoutableShadowNode::baseline =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::LayoutableShadowNode::baseline(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00136130  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::shouldNewRevisionDirtyMeasurement =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::shouldNewRevisionDirtyMeasurement
               (ShadowNode *param_1,ShadowNodeFragment *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00136138  <EXTERNAL>::std::__ndk1::__shared_weak_count::__release_weak =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__release_weak(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00136140  <EXTERNAL>::facebook::jsi::NativeState::~NativeState =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::NativeState::~NativeState(NativeState *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


