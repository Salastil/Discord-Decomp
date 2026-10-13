// ===== 0011e470  _FINI_1 =====

void _FINI_1(void)

{
  __cxa_finalize(&PTR_LOOP_0013c2c0);
  return;
}


// ===== 0011e480  FUN_0011e480 =====

void FUN_0011e480(void)

{
  return;
}


// ===== 0011e488  _FINI_0 =====

void _FINI_0(void)

{
  FUN_0011e480();
  return;
}


// ===== 0011e490  FUN_0011e490 =====

void FUN_0011e490(code *UNRECOVERED_JUMPTABLE)

{
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0011e49c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


// ===== 0011e4a4  FUN_0011e4a4 =====

void FUN_0011e4a4(undefined8 param_1)

{
  __cxa_atexit(FUN_0011e490,param_1,&PTR_LOOP_0013c2c0);
  return;
}


// ===== 0011e4c0  FUN_0011e4c0 =====

void FUN_0011e4c0(void)

{
  __register_atfork();
  return;
}


// ===== 0011e4d0  FUN_0011e4d0 =====

undefined8 FUN_0011e4d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_80 [24];
  code *local_68;
  long local_38;
  
  FUN_0011e818(param_2,param_1);
  iVar2 = FUN_0011e93c(param_2);
  while( true ) {
    if (iVar2 == 0) {
      return 5;
    }
    if (iVar2 < 0) break;
    FUN_0011e8c0(param_2,0xfffffffe,&local_38);
    iVar2 = FUN_0011e950(param_2,auStack_80);
    if (iVar2 != 0) {
      return 2;
    }
    if (local_68 != (code *)0x0) {
      uVar3 = 6;
      if (local_38 != param_3[3]) {
        uVar3 = 2;
      }
      iVar2 = (*local_68)(1,uVar3,*param_3,param_3,param_2);
      puVar1 = PTR___sF_0013e070;
      if (iVar2 != 8) {
        if (iVar2 != 7) {
          return 2;
        }
        FUN_0011e990(param_2);
        return 2;
      }
      if (local_38 == param_3[3]) {
        fprintf((FILE *)(PTR___sF_0013e070 + 0x130),"libunwind: %s - %s\n","unwind_phase2",
                "during phase1 personality function said it would stop here, but now in phase2 it did not stop here"
               );
        fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    iVar2 = FUN_0011e93c(param_2);
  }
  return 2;
}


// ===== 0011e604  FUN_0011e604 =====

void FUN_0011e604(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_4a0 [624];
  undefined1 auStack_230 [528];
  
  FUN_0011e77c(auStack_230);
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_0011e4d0(auStack_230,auStack_4a0,param_1);
  }
  else {
    FUN_0011e688(auStack_230,auStack_4a0,param_1,*(long *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = PTR___sF_0013e070;
  fprintf((FILE *)(PTR___sF_0013e070 + 0x130),"libunwind: %s - %s\n","_Unwind_Resume",
          "_Unwind_Resume() can\'t return");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0011e688  FUN_0011e688 =====

void FUN_0011e688(undefined8 param_1,undefined8 param_2,undefined8 *param_3,code *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_78 [24];
  code *local_60;
  
  FUN_0011e818(param_2,param_1);
  iVar1 = FUN_0011e93c(param_2);
  while( true ) {
    if (iVar1 < 1) {
      (*param_4)(1,0x1a,*param_3,param_3,param_2,param_5);
      return;
    }
    iVar1 = FUN_0011e950(param_2,auStack_78);
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
      FUN_0011e990(param_2);
    }
    iVar1 = FUN_0011e93c(param_2);
  }
  return;
}


// ===== 0011e77c  FUN_0011e77c =====

undefined8
FUN_0011e77c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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


// ===== 0011e818  FUN_0011e818 =====

undefined8 FUN_0011e818(undefined8 *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = &PTR_FUN_0013c2d8;
  param_1[1] = &DAT_001424e0;
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
  FUN_0011f1e0(param_1,0);
  return 0;
}


// ===== 0011e8c0  FUN_0011e8c0 =====

undefined8 FUN_0011e8c0(long *param_1,undefined4 param_2,undefined8 *param_3)

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


// ===== 0011e93c  FUN_0011e93c =====

void FUN_0011e93c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0011e94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,1);
  return;
}


// ===== 0011e950  FUN_0011e950 =====

undefined4 FUN_0011e950(long *param_1,long param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x48))();
  uVar1 = 0xffffe66b;
  if (*(long *)(param_2 + 8) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 0011e990  FUN_0011e990 =====

undefined8 FUN_0011e990(long *param_1)

{
  (**(code **)(*param_1 + 0x50))();
  return 0xffffe674;
}


// ===== 0011e9b8  FUN_0011e9b8 =====

char * FUN_0011e9b8(undefined8 param_1,uint *param_2,undefined8 *param_3,long *param_4,ulong param_5
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
      pcVar7 = (char *)FUN_0011eb48(param_1,lVar8,param_4);
      if (pcVar7 != (char *)0x0) {
        return pcVar7;
      }
    }
    else if (*param_4 != lVar8) {
      return "CIE start does not match";
    }
    lVar8 = (long)puVar10 + uVar9;
    local_48 = puVar10 + 1;
    lVar3 = FUN_001209a0(param_1,&local_48,lVar8,(char)param_4[3],0);
    lVar4 = FUN_001209a0(param_1,&local_48,lVar8,*(byte *)(param_4 + 3) & 0xf,0);
    cVar1 = *(char *)((long)param_4 + 0x31);
    param_3[5] = 0;
    puVar10 = local_48;
    if (cVar1 != '\0') {
      lVar5 = FUN_00120d2c(&local_48,lVar8);
      puVar2 = local_48;
      puVar10 = (uint *)((long)local_48 + lVar5);
      if ((*(byte *)((long)param_4 + 0x19) != 0xff) &&
         (lVar5 = FUN_001209a0(param_1,&local_48,lVar8,*(byte *)((long)param_4 + 0x19) & 0xf,0),
         lVar5 != 0)) {
        local_48 = puVar2;
        uVar6 = FUN_001209a0(param_1,&local_48,lVar8,*(undefined1 *)((long)param_4 + 0x19),0);
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


// ===== 0011eb48  FUN_0011eb48 =====

char * FUN_0011eb48(undefined8 param_1,uint *param_2,long *param_3)

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
      uVar7 = FUN_00120d2c(&local_48,pbVar1);
      uVar13 = 0;
      uVar14 = 0;
      *(undefined4 *)(param_3 + 5) = uVar7;
      puVar5 = PTR___sF_0013e070;
      pbVar11 = local_48;
      pbVar15 = local_48;
      do {
        pbVar12 = pbVar11;
        if (pbVar15 == pbVar1) {
          fprintf((FILE *)(PTR___sF_0013e070 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
        uVar6 = FUN_00120d2c(&local_48,pbVar1);
        *(undefined1 *)((long)param_3 + 0x32) = uVar6;
        bVar2 = *pbVar18;
      }
      if (bVar2 == 0x7a) {
        FUN_00120d2c(&local_48,pbVar1);
LAB_0011ecc8:
        bVar2 = *pbVar18;
        if (bVar2 < 0x50) {
          if (bVar2 < 0x47) {
            if (bVar2 != 0x42) {
              if (bVar2 != 0) goto LAB_0011ed68;
              goto LAB_0011edac;
            }
            *(undefined1 *)((long)param_3 + 0x33) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_0011ecc8;
          }
          if (bVar2 == 0x47) {
            *(undefined1 *)((long)param_3 + 0x34) = 1;
            goto LAB_0011ed68;
          }
          if (bVar2 == 0x4c) {
            pbVar18 = pbVar18 + 1;
            *(byte *)((long)param_3 + 0x19) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_0011ecc8;
          }
        }
        else if (bVar2 < 0x53) {
          if (bVar2 == 0x50) {
            bVar2 = *local_48;
            *(byte *)((long)param_3 + 0x1a) = bVar2;
            *(char *)((long)param_3 + 0x1b) = (char)(local_48 + 1) - (char)param_2;
            local_48 = local_48 + 1;
            lVar8 = FUN_001209a0(param_1,&local_48,pbVar1,bVar2,0);
            param_3[4] = lVar8;
            pbVar18 = pbVar18 + 1;
            goto LAB_0011ecc8;
          }
          if (bVar2 == 0x52) {
            pbVar18 = pbVar18 + 1;
            *(byte *)(param_3 + 3) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_0011ecc8;
          }
        }
        else {
          if (bVar2 == 0x53) {
            *(undefined1 *)(param_3 + 6) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_0011ecc8;
          }
          if (bVar2 == 0x7a) {
            *(undefined1 *)((long)param_3 + 0x31) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_0011ecc8;
          }
        }
LAB_0011ed68:
        pbVar18 = pbVar18 + 1;
        goto LAB_0011ecc8;
      }
LAB_0011edac:
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


// ===== 0011ee10  FUN_0011ee10 =====

void FUN_0011ee10(void)

{
  return;
}


// ===== 0011ee18  FUN_0011ee18 =====

void FUN_0011ee18(void)

{
  return;
}


// ===== 0011ee20  FUN_0011ee20 =====

bool FUN_0011ee20(undefined8 param_1,uint param_2)

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


// ===== 0011ee64  FUN_0011ee64 =====

undefined8 FUN_0011ee64(long param_1,uint param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_0013e070;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_0011eecc:
      return *(undefined8 *)(param_1 + 0x108);
    }
    if (param_2 == 0xffffffff) goto LAB_0011eec0;
    if (param_2 == 0x1d) {
      return *(undefined8 *)(param_1 + 0xf8);
    }
  }
  else if ((int)param_2 < 0x20) {
    if (param_2 == 0x1e) {
      return *(undefined8 *)(param_1 + 0x100);
    }
    if (param_2 == 0x1f) goto LAB_0011eecc;
  }
  else {
    if (param_2 == 0x22) {
      return *(undefined8 *)(param_1 + 0x118);
    }
    if (param_2 == 0x20) {
LAB_0011eec0:
      return *(undefined8 *)(param_1 + 0x110);
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_0013e070 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8);
}


// ===== 0011ef4c  FUN_0011ef4c =====

void FUN_0011ef4c(long param_1,uint param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_0013e070;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_0011efb4:
      *(undefined8 *)(param_1 + 0x108) = param_3;
      return;
    }
    if (param_2 == 0xffffffff) goto LAB_0011efa8;
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
    if (param_2 == 0x1f) goto LAB_0011efb4;
  }
  else {
    if (param_2 == 0x22) {
      *(undefined8 *)(param_1 + 0x118) = param_3;
      return;
    }
    if (param_2 == 0x20) {
LAB_0011efa8:
      *(undefined8 *)(param_1 + 0x110) = param_3;
      return;
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_0013e070 + 0x130),"libunwind: %s - %s\n","setRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8) = param_3;
  return;
}


// ===== 0011f034  FUN_0011f034 =====

bool FUN_0011f034(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffffffe0) == 0x40;
}


// ===== 0011f048  FUN_0011f048 =====

undefined1  [16] FUN_0011f048(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + (long)param_2 * 8 + -0xe0);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 0011f058  FUN_0011f058 =====

void FUN_0011f058(undefined8 param_1,long param_2,int param_3)

{
  *(undefined8 *)(param_2 + (long)param_3 * 8 + -0xe0) = param_1;
  return;
}


// ===== 0011f068  FUN_0011f068 =====

ulong FUN_0011f068(long *param_1,uint param_2)

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
    uVar3 = FUN_0011f58c(lVar1,uVar4,param_1[0x4b],param_1 + 2,(long)param_1 + 0x269,param_2 & 1);
    iVar2 = (int)uVar3;
  }
  else {
    memset(auStack_240,0,0x210);
    uVar3 = FUN_0011f46c(param_1,auStack_240);
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


// ===== 0011f158  FUN_0011f158 =====

void FUN_0011f158(long param_1,undefined8 *param_2)

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


// ===== 0011f19c  FUN_0011f19c =====

void FUN_0011f19c(long param_1)

{
  FUN_00122234(param_1 + 0x10);
  return;
}


// ===== 0011f1a8  FUN_0011f1a8 =====

undefined1 FUN_0011f1a8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x269);
}


// ===== 0011f1b4  FUN_0011f1b4 =====

undefined8 FUN_0011f1b4(long *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  return 0;
}


// ===== 0011f1e0  FUN_0011f1e0 =====

void FUN_0011f1e0(long *param_1,ulong param_2)

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
  iVar1 = dl_iterate_phdr(FUN_00121b84,&local_648);
  if (((iVar1 == 0) || (local_668 == 0)) ||
     (uVar4 = FUN_001218b0(param_1,uVar7,auStack_678,0), (uVar4 & 1) == 0)) {
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_001424e4);
    for (puVar6 = PTR_DAT_001424b8; puVar6 < PTR_DAT_001424c0; puVar6 = puVar6 + 0x20) {
      if ((*(ulong *)(puVar6 + 8) <= uVar7) && (uVar7 < *(ulong *)(puVar6 + 0x10))) {
        lVar3 = *(long *)(puVar6 + 0x18);
        pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001424e4);
        if ((lVar3 != 0) &&
           (lVar3 = FUN_0011e9b8(param_1[1],lVar3,&local_6a8,local_6e0,0), lVar3 == 0)) {
          memset(&local_648,0,0x618);
          uVar7 = FUN_0011fa14(param_1[1],&local_6a8,local_6e0,uVar7,4,&local_648);
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
        goto LAB_0011f368;
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001424e4);
LAB_0011f368:
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


// ===== 0011f460  FUN_0011f460 =====

void FUN_0011f460(undefined8 param_1,undefined4 param_2)

{
  FUN_00122204(param_2);
  return;
}


// ===== 0011f46c  FUN_0011f46c =====

undefined8 FUN_0011f46c(long param_1)

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


// ===== 0011f58c  FUN_0011f58c =====

undefined8
FUN_0011f58c(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,
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
  
  lVar7 = FUN_0011e9b8(param_1,param_3,auStack_b0,auStack_e8,0);
  if (lVar7 == 0) {
    memset(auStack_700,0,0x618);
    uVar8 = FUN_0011fa14(param_1,auStack_b0,auStack_e8,param_2,4,auStack_700);
    if ((uVar8 & 1) != 0) {
      uVar8 = FUN_0012065c(param_1,auStack_700,param_4);
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
        puVar3 = PTR___sF_0013e070;
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
              goto LAB_0011f86c;
            }
            else {
              puVar13 = (undefined8 *)((long)param_4 + 0x108);
              if ((local_b6 != 0x22) &&
                 ((puVar13 = (undefined8 *)((long)param_4 + 0x100), local_b6 != 0x20 &&
                  (puVar13 = (undefined8 *)((long)param_4 + 0xf8), local_b6 != 0x1f)))) {
LAB_0011f86c:
                if (0x1c < local_b6) {
                  fprintf((FILE *)(PTR___sF_0013e070 + 0x130),"libunwind: %s - %s\n","getRegister",
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
LAB_0011f978:
                  fprintf((FILE *)(PTR___sF_0013e070 + 0x130),"libunwind: %s - %s\n",
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
              if (iVar2 != 6) goto LAB_0011f978;
              puVar9 = (ulong *)FUN_00120ef4(*(undefined8 *)(piVar15 + 2),param_1,param_4,uVar8);
              uVar18 = *puVar9;
            }
            local_a00[uVar12] = uVar18;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == local_b6) {
            uVar14 = FUN_00120790(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == 0x22) {
            uVar10 = FUN_00120790(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
          }
          else {
            if (0xffffffe0 < uVar16 - 0x40) {
              return 0xffffe672;
            }
            uVar11 = FUN_00120790(param_1,param_4,uVar8,piVar15);
            puVar3 = PTR___sF_0013e070;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
            if ((int)uVar16 < 0x1f) {
              uVar5 = uVar11;
              if ((uVar16 != 0x1d) && (uVar5 = local_a00[0x3b], uVar6 = uVar11, uVar16 != 0x1e))
              goto LAB_0011f8c0;
            }
            else {
              uVar18 = uVar11;
              if ((uVar16 != 0x1f) &&
                 ((uVar18 = local_a00[0x3d], uVar10 = uVar11, uVar16 != 0x22 &&
                  (uVar10 = local_a00[0x3f], uVar16 != 0x20)))) {
LAB_0011f8c0:
                if (0x1c < uVar12) {
                  fprintf((FILE *)(PTR___sF_0013e070 + 0x130),"libunwind: %s - %s\n","setRegister",
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
            FUN_00120790(param_1,auStack_b20,uVar8,&local_80);
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


// ===== 0011fa14  FUN_0011fa14 =====

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_0011fa14(undefined8 param_1,long *param_2,long *param_3,long param_4,int param_5,
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
LAB_0011fa98:
    lVar20 = lVar20 + 0x18;
    if (lVar20 == 0x30) {
      return 1;
    }
  }
  uVar17 = 0;
LAB_0011fac8:
  puVar18 = local_6c0;
  puVar5 = PTR___sF_0013e070;
  pbVar10 = pbVar21 + 1;
  bVar3 = *pbVar21;
  apbStack_6a0[0xc0] = pbVar10;
  switch((ulong)bVar3) {
  case 0:
    goto code_r0x0012039c;
  case 1:
    uVar17 = FUN_001209a0(local_6c8,apbStack_6a0 + 0xc0,pbVar2,(char)param_3[3],0);
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 2:
    uVar9 = (uint)pbVar21[1];
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 2;
    goto LAB_0011ff50;
  case 3:
    uVar9 = (uint)*(ushort *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 3;
    goto LAB_0011ff50;
  case 4:
    uVar9 = *(uint *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 5;
LAB_0011ff50:
    uVar17 = uVar17 + iVar13 * uVar9;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 5:
    uVar19 = FUN_00120d2c(apbStack_6a0 + 0xc0,pbVar2);
    lVar8 = FUN_00120d2c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended DWARF unwind, reg too big\n";
      __size = 0x46;
      __s = (FILE *)(PTR___sF_0013e070 + 0x130);
      goto LAB_0012054c;
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
LAB_0011feec:
    puVar12[6] = 2;
    *(long *)(puVar12 + 8) = lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 6:
    uVar19 = FUN_00120d2c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_restore_extended DWARF unwind, reg too big\n";
LAB_0012043c:
      __s = (FILE *)(PTR___sF_0013e070 + 0x130);
      __size = 0x47;
      goto LAB_0012054c;
    }
    cVar4 = *(char *)(param_6 + uVar19 * 4 + 7);
joined_r0x0012037c:
    if (cVar4 != '\0') {
      pbVar21 = apbStack_6a0[uVar19 * 2];
      *(byte **)(param_6 + uVar19 * 4 + 8) = apbStack_6a0[uVar19 * 2 + 1];
      *(byte **)(param_6 + uVar19 * 4 + 6) = pbVar21;
    }
    goto code_r0x0012039c;
  case 7:
    uVar19 = FUN_00120d2c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_undefined DWARF unwind, reg too big\n";
LAB_00120540:
      __s = (FILE *)(PTR___sF_0013e070 + 0x130);
      __size = 0x40;
      goto LAB_0012054c;
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
    uVar19 = FUN_00120d2c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_same_value DWARF unwind, reg too big\n";
LAB_00120524:
      __s = (FILE *)(PTR___sF_0013e070 + 0x130);
      __size = 0x41;
      goto LAB_0012054c;
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
    uVar19 = FUN_00120d2c(apbStack_6a0 + 0xc0,pbVar2);
    uVar14 = FUN_00120d2c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg too big\n";
      __size = 0x3f;
      __s = (FILE *)(PTR___sF_0013e070 + 0x130);
      goto LAB_0012054c;
    }
    if (0x5f < uVar14) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg2 too big\n";
      goto LAB_00120540;
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
    uVar19 = FUN_00120d2c(apbStack_6a0 + 0xc0,pbVar2);
    uVar7 = FUN_00120d2c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa DWARF unwind, reg too big\n";
      __size = 0x3e;
      __s = (FILE *)(PTR___sF_0013e070 + 0x130);
      goto LAB_0012054c;
    }
    *param_6 = (int)uVar19;
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xd:
    uVar19 = FUN_00120d2c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa_register DWARF unwind, reg too big\n";
      goto LAB_0012043c;
    }
    *param_6 = (int)uVar19;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xe:
    uVar7 = FUN_00120d2c(apbStack_6a0 + 0xc0,pbVar2);
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xf:
    *param_6 = 0;
    *(byte **)(param_6 + 2) = pbVar10;
    goto LAB_001202d0;
  case 0x10:
    uVar19 = FUN_00120d2c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_expression DWARF unwind, reg too big\n";
      goto LAB_00120524;
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
LAB_001202c8:
    puVar12[6] = uVar7;
    *(byte **)(puVar12 + 8) = apbStack_6a0[0xc0];
LAB_001202d0:
    lVar8 = FUN_00120d2c(apbStack_6a0 + 0xc0,pbVar2);
    apbStack_6a0[0xc0] = apbStack_6a0[0xc0] + lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x11:
    uVar19 = FUN_00120d2c(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_0013e070;
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended_sf DWARF unwind, reg too big\n";
      __size = 0x49;
      __s = (FILE *)(PTR___sF_0013e070 + 0x130);
      goto LAB_0012054c;
    }
    uVar14 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_0013e070 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
LAB_0012025c:
    puVar12[6] = uVar7;
    *(ulong *)(puVar12 + 8) = uVar11 * (long)iVar13;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x12:
    uVar14 = FUN_00120d2c(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_0013e070;
    uVar19 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_0013e070 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      goto LAB_00120524;
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
        fprintf((FILE *)(PTR___sF_0013e070 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
    uVar19 = FUN_00120d2c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      fprintf((FILE *)(PTR___sF_0013e070 + 0x130),
              "libunwind: malformed DW_CFA_val_offset DWARF unwind, reg (%lu) out of range\n\n",
              uVar19);
      goto LAB_00120554;
    }
    lVar8 = FUN_00120d2c(apbStack_6a0 + 0xc0,pbVar2);
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
    uVar19 = FUN_00120d2c(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_0013e070;
    if (uVar19 < 0x60) {
      uVar14 = 0;
      uVar11 = 0;
      pbVar21 = apbStack_6a0[0xc0];
      pbVar10 = apbStack_6a0[0xc0];
      do {
        if (pbVar10 == pbVar2) {
          fprintf((FILE *)(PTR___sF_0013e070 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      goto LAB_0012025c;
    }
    __ptr = "libunwind: malformed DW_CFA_val_offset_sf DWARF unwind, reg too big\n";
    __size = 0x44;
    __s = (FILE *)(PTR___sF_0013e070 + 0x130);
    goto LAB_0012054c;
  case 0x16:
    uVar19 = FUN_00120d2c(apbStack_6a0 + 0xc0,pbVar2);
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
      goto LAB_001202c8;
    }
    __ptr = "libunwind: malformed DW_CFA_val_expression DWARF unwind, reg too big\n";
    __size = 0x45;
    __s = (FILE *)(PTR___sF_0013e070 + 0x130);
    goto LAB_0012054c;
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
        goto joined_r0x0012037c;
      }
      if (bVar1 != 0x80) {
        return 0;
      }
      local_6dc = param_5;
      lVar8 = FUN_00120d2c(apbStack_6a0 + 0xc0,pbVar2);
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
    if (param_5 != 4) goto code_r0x0012039c;
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
    uVar7 = FUN_00120d2c(apbStack_6a0 + 0xc0,pbVar2);
    param_6[4] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x2f:
    uVar19 = FUN_00120d2c(apbStack_6a0 + 0xc0,pbVar2);
    if (uVar19 < 0x60) {
      lVar8 = FUN_00120d2c(apbStack_6a0 + 0xc0,pbVar2);
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
      goto LAB_0011feec;
    }
    __ptr = "libunwind: malformed DW_CFA_GNU_negative_offset_extended DWARF unwind, reg too big\n";
    __size = 0x53;
    __s = (FILE *)(PTR___sF_0013e070 + 0x130);
LAB_0012054c:
    fwrite(__ptr,__size,1,__s);
LAB_00120554:
    fflush((FILE *)(PTR___sF_0013e070 + 0x130));
    return 0;
  }
joined_r0x0011fe84:
  if ((pbVar2 <= pbVar21) || (uVar16 <= uVar17)) goto LAB_0011fa98;
  goto LAB_0011fac8;
code_r0x0012039c:
  pbVar21 = apbStack_6a0[0xc0];
  goto joined_r0x0011fe84;
}


// ===== 0012065c  FUN_0012065c =====

long FUN_0012065c(undefined8 param_1,uint *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR___sF_0013e070;
  uVar1 = *param_2;
  if ((int)uVar1 < 0x1e) {
    if ((int)uVar1 < 0) {
      if (uVar1 == 0xfffffffe) {
LAB_0012069c:
        return *(long *)(param_3 + 0xf8) + (long)(int)param_2[1];
      }
      if (uVar1 == 0xffffffff) goto LAB_001206e0;
    }
    else {
      if (uVar1 == 0) {
        lVar3 = FUN_00120ef4(*(undefined8 *)(param_2 + 2),param_1,param_3,0);
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
    if (uVar1 == 0x1f) goto LAB_0012069c;
  }
  else {
    if (uVar1 == 0x22) {
      return *(long *)(param_3 + 0x108) + (long)(int)param_2[1];
    }
    if (uVar1 == 0x20) {
LAB_001206e0:
      return *(long *)(param_3 + 0x100) + (long)(int)param_2[1];
    }
  }
  if (0x1c < uVar1) {
    fprintf((FILE *)(PTR___sF_0013e070 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(long *)(param_3 + (ulong)uVar1 * 8) + (long)(int)param_2[1];
}


// ===== 00120790  FUN_00120790 =====

undefined8 FUN_00120790(undefined8 param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  puVar2 = PTR___sF_0013e070;
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
LAB_001208cc:
          return *(undefined8 *)(param_2 + 0xf8);
        }
        if (uVar5 == 0xffffffff) goto LAB_001208b4;
        if (uVar5 == 0x1d) {
          return *(undefined8 *)(param_2 + 0xe8);
        }
      }
      else if ((int)uVar5 < 0x20) {
        if (uVar5 == 0x1e) {
          return *(undefined8 *)(param_2 + 0xf0);
        }
        if (uVar5 == 0x1f) goto LAB_001208cc;
      }
      else {
        if (uVar5 == 0x22) {
          return *(undefined8 *)(param_2 + 0x108);
        }
        if (uVar5 == 0x20) {
LAB_001208b4:
          return *(undefined8 *)(param_2 + 0x100);
        }
      }
      if (0x1c < uVar5) {
        fprintf((FILE *)(PTR___sF_0013e070 + 0x130),"libunwind: %s - %s\n","getRegister",
                "unsupported arm64 register");
        fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      return *(undefined8 *)(param_2 + (*(ulong *)(param_4 + 2) & 0xffffffff) * 8);
    }
    if (iVar1 == 6) {
      puVar4 = (undefined8 *)FUN_00120ef4(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return *puVar4;
    }
    if (iVar1 == 7) {
      uVar3 = FUN_00120ef4(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return uVar3;
    }
  }
  fprintf((FILE *)(PTR___sF_0013e070 + 0x130),"libunwind: %s - %s\n","getSavedRegister",
          "unsupported restore location for register");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 001209a0  FUN_001209a0 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_001209a0(undefined8 param_1,long *param_2,ulong *param_3,uint param_4,long param_5)

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
  
  puVar3 = PTR___sF_0013e070;
  uVar1 = param_4 & 0xf;
  puVar10 = (ulong *)*param_2;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if ((param_4 & 0xf) == 0) goto LAB_00120aec;
      if (uVar1 != 1) {
LAB_00120cf8:
        fprintf((FILE *)(PTR___sF_0013e070 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "unknown pointer encoding");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar4 = (undefined8 *)FUN_00120d2c(param_2,param_3);
      puVar3 = PTR___sF_0013e070;
    }
    else if (uVar1 == 2) {
      puVar4 = (undefined8 *)(ulong)(ushort)*puVar10;
      *param_2 = (long)puVar10 + 2;
      puVar3 = PTR___sF_0013e070;
    }
    else {
      if (uVar1 != 3) goto LAB_00120cf8;
      puVar4 = (undefined8 *)(ulong)(uint)*puVar10;
      *param_2 = (long)((long)puVar10 + 4);
      puVar3 = PTR___sF_0013e070;
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 4) {
LAB_00120aec:
      puVar4 = (undefined8 *)*puVar10;
      *param_2 = (long)(puVar10 + 1);
      puVar3 = PTR___sF_0013e070;
    }
    else {
      if (uVar1 != 9) goto LAB_00120cf8;
      uVar7 = 0;
      uVar5 = 0;
      puVar6 = puVar10;
      puVar9 = puVar10;
      do {
        if (puVar9 == param_3) {
          fprintf((FILE *)(PTR___sF_0013e070 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      puVar3 = PTR___sF_0013e070;
    }
  }
  else if (uVar1 == 10) {
    puVar4 = (undefined8 *)(long)(short)*puVar10;
    *param_2 = (long)puVar10 + 2;
    puVar3 = PTR___sF_0013e070;
  }
  else {
    if (uVar1 != 0xb) {
      if (uVar1 != 0xc) goto LAB_00120cf8;
      goto LAB_00120aec;
    }
    puVar4 = (undefined8 *)(long)(int)(uint)*puVar10;
    *param_2 = (long)((long)puVar10 + 4);
    puVar3 = PTR___sF_0013e070;
  }
  uVar1 = (param_4 & 0xff) >> 4 & 7;
  PTR___sF_0013e070 = puVar3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      if (uVar1 != 1) goto LAB_00120cc4;
      puVar4 = (undefined8 *)((long)puVar4 + (long)puVar10);
    }
LAB_00120b78:
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
      goto LAB_00120b78;
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
LAB_00120cc4:
  fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP","unknown pointer encoding");
  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00120d2c  FUN_00120d2c =====

ulong FUN_00120d2c(long *param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  puVar2 = PTR___sF_0013e070;
  pbVar4 = (byte *)*param_1;
  if (pbVar4 != param_2) {
    pbVar5 = pbVar4 + 1;
    uVar3 = (ulong)*pbVar4 & 0x7f;
    if (-1 < (char)*pbVar4) {
LAB_00120d5c:
      *param_1 = (long)pbVar5;
      return uVar3;
    }
    if (pbVar5 != param_2) {
      uVar3 = uVar3 | (ulong)((int)(char)pbVar4[1] & 0x7f) << 7;
      pbVar5 = pbVar4 + 2;
      if (-1 < (char)pbVar4[1]) goto LAB_00120d5c;
      if (pbVar5 != param_2) {
        uVar3 = uVar3 | (ulong)((int)(char)pbVar4[2] & 0x7f) << 0xe;
        pbVar5 = pbVar4 + 3;
        if (-1 < (char)pbVar4[2]) goto LAB_00120d5c;
        if (pbVar5 != param_2) {
          uVar3 = uVar3 | (ulong)((int)(char)pbVar4[3] & 0x7f) << 0x15;
          pbVar5 = pbVar4 + 4;
          if (-1 < (char)pbVar4[3]) goto LAB_00120d5c;
          if (pbVar5 != param_2) {
            uVar3 = uVar3 | (ulong)((int)(char)pbVar4[4] & 0x7f) << 0x1c;
            pbVar5 = pbVar4 + 5;
            if (-1 < (char)pbVar4[4]) goto LAB_00120d5c;
            if (pbVar5 != param_2) {
              uVar3 = uVar3 | (ulong)((int)(char)pbVar4[5] & 0x7f) << 0x23;
              pbVar5 = pbVar4 + 6;
              if (-1 < (char)pbVar4[5]) goto LAB_00120d5c;
              if (pbVar5 != param_2) {
                uVar3 = uVar3 | (ulong)((int)(char)pbVar4[6] & 0x7f) << 0x2a;
                pbVar5 = pbVar4 + 7;
                if (-1 < (char)pbVar4[6]) goto LAB_00120d5c;
                if (pbVar5 != param_2) {
                  uVar3 = uVar3 | (ulong)((int)(char)pbVar4[7] & 0x7f) << 0x31;
                  pbVar5 = pbVar4 + 8;
                  if (-1 < (char)pbVar4[7]) goto LAB_00120d5c;
                  if (pbVar5 != param_2) {
                    uVar3 = uVar3 | (ulong)((int)(char)pbVar4[8] & 0x7f) << 0x38;
                    pbVar5 = pbVar4 + 9;
                    if (-1 < (char)pbVar4[8]) goto LAB_00120d5c;
                    if (pbVar5 != param_2) {
                      bVar1 = *pbVar5;
                      if ((bVar1 & 0x7e) == 0) {
                        if (-1 < (char)bVar1) {
                          *param_1 = (long)(pbVar4 + 10);
                          return uVar3 | (ulong)bVar1 << 0x3f;
                        }
                        if (pbVar4 + 10 == param_2) goto LAB_00120e8c;
                      }
                      fprintf((FILE *)(PTR___sF_0013e070 + 0x130),"libunwind: %s - %s\n",
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
LAB_00120e8c:
  fprintf((FILE *)(PTR___sF_0013e070 + 0x130),"libunwind: %s - %s\n","getULEB128",
          "truncated uleb128 expression");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00120ef4  FUN_00120ef4 =====

ulong FUN_00120ef4(byte *param_1,undefined8 param_2,long param_3,ulong param_4)

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
  lVar11 = FUN_00120d2c(&local_68,param_1 + 0x14);
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
      puVar9 = PTR___sF_0013e070;
      pbVar13 = pbVar18 + 1;
      local_68 = pbVar13;
      bVar8 = *pbVar18;
      uVar10 = (uint)bVar8;
      if (0x91 < uVar10 - 3) {
code_r0x00121770:
        fprintf((FILE *)(PTR___sF_0013e070 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
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
        goto LAB_001213dc;
      case 4:
      case 5:
      case 7:
        goto code_r0x00121770;
      case 6:
        puVar14 = (ulong *)*puVar19;
LAB_0012136c:
        *puVar19 = *puVar14;
        goto LAB_00120f78;
      case 8:
        uVar16 = (ulong)pbVar18[1];
        goto LAB_00121340;
      case 9:
        uVar16 = (ulong)(char)pbVar18[1];
LAB_00121340:
        local_68 = pbVar18 + 2;
        goto LAB_001213dc;
      case 10:
        uVar16 = (ulong)*(ushort *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_001213dc;
      case 0xb:
        uVar16 = (ulong)*(short *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_001213dc;
      case 0xc:
        uVar16 = (ulong)*(uint *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_001213dc;
      case 0xd:
        uVar16 = (ulong)*(int *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_001213dc;
      case 0x10:
        uVar16 = FUN_00120d2c(&local_68,pbVar6);
        puVar19 = puVar19 + 1;
        *puVar19 = uVar16;
        goto LAB_00120f78;
      case 0x11:
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = pbVar13;
        do {
          if (pbVar18 == pbVar6) {
            fprintf((FILE *)(PTR___sF_0013e070 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
        goto LAB_00120f78;
      case 0x12:
        uVar16 = *puVar19;
        goto LAB_00120f74;
      case 0x13:
        puVar19 = puVar19 + -1;
        goto LAB_00120f78;
      case 0x14:
        uVar16 = puVar19[-1];
        goto LAB_00120f74;
      case 0x15:
        local_68 = pbVar18 + 2;
        uVar16 = puVar19[-(ulong)pbVar18[1]];
LAB_001213dc:
LAB_00120f74:
        puVar19[1] = uVar16;
        puVar19 = puVar19 + 1;
        goto LAB_00120f78;
      case 0x16:
        auVar20 = NEON_ext(*(undefined1 (*) [16])(puVar19 + -1),*(undefined1 (*) [16])(puVar19 + -1)
                           ,8,1);
        *puVar19 = auVar20._8_8_;
        puVar19[-1] = auVar20._0_8_;
        goto LAB_00120f78;
      case 0x17:
        uVar16 = *puVar19;
        *puVar19 = SUB168(*(undefined1 (*) [16])(puVar19 + -2),8);
        puVar19[-1] = SUB168(*(undefined1 (*) [16])(puVar19 + -2),0);
        puVar19[-2] = uVar16;
        goto LAB_00120f78;
      case 0x18:
        puVar14 = (ulong *)*puVar19;
        puVar19 = puVar19 + -1;
        *puVar19 = *puVar14;
        goto LAB_00120f78;
      case 0x19:
        uVar16 = *puVar19;
        if ((long)uVar16 < 0) goto LAB_00121514;
        goto LAB_00120f78;
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
LAB_00121514:
        *puVar19 = -uVar16;
        goto LAB_00120f78;
      case 0x20:
        *puVar19 = ~*puVar19;
        goto LAB_00120f78;
      case 0x21:
        uVar16 = puVar19[-1] | *puVar19;
        break;
      case 0x22:
        uVar16 = puVar19[-1] + *puVar19;
        break;
      case 0x23:
        lVar11 = FUN_00120d2c(&local_68,pbVar6);
        *puVar19 = *puVar19 + lVar11;
        goto LAB_00120f78;
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
        goto LAB_00120f78;
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
        goto LAB_00120f78;
      default:
        uVar16 = (ulong)(uVar15 - 0x30);
        goto LAB_00120f74;
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
        goto LAB_00120f70;
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
            fprintf((FILE *)(PTR___sF_0013e070 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
             (puVar14 = puVar2, bVar8 != 0x8d)) goto LAB_001210b0;
        }
        else if (bVar8 < 0x90) {
          puVar14 = puVar1;
          if ((bVar8 != 0x8e) && (puVar14 = puVar4, uVar15 != 0x8f)) {
LAB_001210b0:
            if (0x1c < uVar10 - 0x70) {
              fprintf((FILE *)(PTR___sF_0013e070 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((bVar8 != 0x90) && (puVar14 = puVar3, bVar8 != 0x92)) goto LAB_001210b0;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_00120f74;
      case 0x90:
        uVar10 = FUN_00120d2c(&local_68,pbVar6);
        puVar9 = PTR___sF_0013e070;
        if ((int)uVar10 < 0x1e) {
          if (((uVar10 != 0xfffffffe) && (puVar14 = puVar5, uVar10 != 0xffffffff)) &&
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_00121614;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_00121614:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_0013e070 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_00121614;
        }
LAB_00120f70:
        uVar16 = *puVar14;
        goto LAB_00120f74;
      case 0x91:
        fprintf((FILE *)(PTR___sF_0013e070 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_fbreg not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x92:
        uVar10 = FUN_00120d2c(&local_68,pbVar6);
        puVar9 = PTR___sF_0013e070;
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = local_68;
        pbVar13 = local_68;
        do {
          if (pbVar13 == pbVar6) {
            fprintf((FILE *)(PTR___sF_0013e070 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_0012163c;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_0012163c:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_0013e070 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_0012163c;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_00120f74;
      case 0x93:
        fprintf((FILE *)(PTR___sF_0013e070 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
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
LAB_00121814:
              fprintf((FILE *)(PTR___sF_0013e070 + 0x130),"libunwind: %s - %s\n",
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
            if (bVar8 != 8) goto LAB_00121814;
            goto LAB_0012136c;
          }
          *puVar19 = (ulong)(uint)*puVar14;
        }
        goto LAB_00120f78;
      }
      puVar19[-1] = uVar16;
      puVar19 = puVar19 + -1;
LAB_00120f78:
      pbVar18 = local_68;
    } while (local_68 < pbVar6);
    param_4 = *puVar19;
  }
  return param_4;
}


// ===== 001218b0  FUN_001218b0 =====

undefined8 FUN_001218b0(long param_1,ulong param_2,long *param_3,uint param_4)

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
      (uVar3 = FUN_00121dd8(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],
                            param_3[2] + (ulong)param_4,&local_6b0,auStack_6e8), (uVar3 & 1) == 0))
     && ((param_3[4] == 0 ||
         (uVar3 = FUN_00121fa0(*(undefined8 *)(param_1 + 8),param_2,param_3[4],(int)param_3[5],
                               &local_6b0,auStack_6e8), (uVar3 & 1) == 0)))) {
    lVar5 = *param_3;
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_001424e4);
    if (PTR_DAT_001424b8 < PTR_DAT_001424c0) {
      plVar4 = (long *)PTR_DAT_001424b8;
      if (lVar5 == -1) {
        do {
          if (((ulong)plVar4[1] <= param_2) && (param_2 < (ulong)plVar4[2])) goto LAB_001219b8;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_001424c0);
      }
      else {
        do {
          if (((*plVar4 == lVar5) && ((ulong)plVar4[1] <= param_2)) && (param_2 < (ulong)plVar4[2]))
          goto LAB_001219b8;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_001424c0);
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001424e4);
    goto LAB_00121a00;
  }
LAB_00121a20:
  bVar2 = 1;
LAB_00121a24:
  lVar5 = *param_3;
  memset(auStack_680,0,0x618);
  uVar3 = FUN_0011fa14(*(undefined8 *)(param_1 + 8),&local_6b0,auStack_6e8,param_2,4,auStack_680);
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
      pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_001424e4);
      __src = PTR_DAT_001424b8;
      if (PTR_DAT_001424c8 <= PTR_DAT_001424c0) {
        __n = (long)PTR_DAT_001424c8 - (long)PTR_DAT_001424b8;
        __dest = (undefined *)malloc(__n * 4);
        memcpy(__dest,__src,__n);
        if ((undefined8 *)__src != &DAT_00142520) {
          free(__src);
        }
        PTR_DAT_001424c8 = __dest + ((long)__n >> 3) * 0x20;
        PTR_DAT_001424c0 = __dest + __n;
        PTR_DAT_001424b8 = __dest;
      }
      *(long *)PTR_DAT_001424c0 = lVar5;
      *(long *)((long)PTR_DAT_001424c0 + 8) = local_698;
      *(long *)((long)PTR_DAT_001424c0 + 0x18) = local_6b0;
      *(long *)((long)PTR_DAT_001424c0 + 0x10) = local_690;
      PTR_DAT_001424c0 = (undefined *)((long)PTR_DAT_001424c0 + 0x20);
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001424e4);
      return 1;
    }
    return 1;
  }
  return 1;
LAB_001219b8:
  lVar5 = plVar4[3];
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001424e4);
  if ((lVar5 != 0) &&
     (uVar3 = FUN_00121dd8(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],lVar5,
                           &local_6b0,auStack_6e8), (uVar3 & 1) != 0)) {
    bVar2 = 0;
    goto LAB_00121a24;
  }
LAB_00121a00:
  uVar3 = FUN_00121dd8(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],0,&local_6b0,
                       auStack_6e8);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  goto LAB_00121a20;
}


// ===== 00121b84  FUN_00121b84 =====

undefined8 FUN_00121b84(ulong *param_1,undefined8 param_2,undefined8 *param_3)

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
              uVar5 = FUN_00121cb8(uVar2,lVar8,lVar9 + lVar8,local_70);
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


// ===== 00121cb8  FUN_00121cb8 =====

undefined8 FUN_00121cb8(undefined8 param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte *local_28;
  
  puVar3 = PTR___sF_0013e070;
  if ((ulong)((long)param_3 - (long)param_2) < 4) {
    if (param_3 == param_2) {
      return 0;
    }
    fprintf((FILE *)(PTR___sF_0013e070 + 0x130),
            "libunwind: unsupported .eh_frame_hdr at %lx: need at least 4 bytes of data but only got %zd\n"
            ,param_2);
  }
  else {
    if (*param_2 == 1) {
      local_28 = param_2 + 4;
      bVar1 = param_2[2];
      bVar2 = param_2[1];
      *(byte *)(param_4 + 3) = param_2[3];
      uVar4 = FUN_001209a0(param_1,&local_28,param_3,bVar2,param_2);
      *param_4 = uVar4;
      if (bVar1 == 0xff) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_001209a0(param_1,&local_28,param_3,bVar1,param_2);
      }
      param_4[1] = uVar4;
      param_4[2] = local_28;
      return 1;
    }
    fprintf((FILE *)(PTR___sF_0013e070 + 0x130),
            "libunwind: unsupported .eh_frame_hdr version: %u at %lx\n",(ulong)(uint)*param_2,
            param_2);
  }
  fflush((FILE *)(puVar3 + 0x130));
  return 0;
}


// ===== 00121dd8  FUN_00121dd8 =====

undefined8
FUN_00121dd8(undefined8 param_1,ulong param_2,uint *param_3,long param_4,uint *param_5,
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
        (puVar7 < puVar9)) && (lVar4 = FUN_0011eb48(param_1,puVar7,param_7), lVar4 == 0)) {
      local_68 = local_68 + 1;
      uVar8 = FUN_001209a0(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x18),0);
      lVar4 = FUN_001209a0(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x18) & 0xf,0);
      if ((uVar8 < param_2) && (param_2 <= lVar4 + uVar8)) {
        cVar2 = *(char *)(param_7 + 0x31);
        param_6[5] = 0;
        puVar9 = local_68;
        if (cVar2 != '\0') {
          lVar5 = FUN_00120d2c(&local_68,puVar1);
          puVar7 = local_68;
          puVar9 = (uint *)((long)local_68 + lVar5);
          if ((*(byte *)(param_7 + 0x19) != 0xff) &&
             (lVar5 = FUN_001209a0(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x19) & 0xf,0),
             lVar5 != 0)) {
            local_68 = puVar7;
            uVar6 = FUN_001209a0(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x19),0);
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


// ===== 00121fa0  FUN_00121fa0 =====

undefined8
FUN_00121fa0(undefined8 param_1,ulong param_2,long param_3,ulong param_4,long param_5,
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
  uVar1 = FUN_00121cb8(param_1,param_3,lVar4,auStack_80);
  if (((uVar1 & 1) != 0) && (local_78 != 0)) {
    lVar2 = FUN_00122108(local_68);
    lVar7 = 0;
    do {
      if (local_78 < 2) {
        lVar8 = lVar7 * lVar2;
        break;
      }
      uVar6 = local_78 >> 1;
      lVar8 = (uVar6 + lVar7) * lVar2;
      local_88 = local_70 + lVar8;
      uVar1 = FUN_001209a0(param_1,&local_88,lVar4,local_68,param_3);
      uVar5 = local_78 - uVar6;
      local_78 = uVar6;
      if (uVar1 < param_2) {
        local_78 = uVar5;
        lVar7 = uVar6 + lVar7;
      }
    } while (uVar1 != param_2);
    local_88 = local_70 + lVar8;
    FUN_001209a0(param_1,&local_88,lVar4,local_68,param_3);
    uVar3 = FUN_001209a0(param_1,&local_88,lVar4,local_68,param_3);
    lVar4 = FUN_0011e9b8(param_1,uVar3,param_5,param_6,0);
    if (((lVar4 == 0) && (*(ulong *)(param_5 + 0x18) <= param_2)) &&
       (param_2 < *(ulong *)(param_5 + 0x20))) {
      return 1;
    }
  }
  return 0;
}


// ===== 00122108  FUN_00122108 =====

undefined8 FUN_00122108(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_0013e070;
  param_1 = param_1 & 0xf;
  if (param_1 < 9) {
    if (param_1 < 3) {
      if (param_1 == 2) {
        return 4;
      }
      if (param_1 == 1) {
LAB_001221d0:
        fprintf((FILE *)(PTR___sF_0013e070 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
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
    if (param_1 == 9) goto LAB_001221d0;
  }
  else {
    if (param_1 == 0xc) {
      return 0x10;
    }
    if (param_1 == 0xb) {
      return 8;
    }
  }
  fprintf((FILE *)(PTR___sF_0013e070 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
          "Unknown DWARF encoding for search table.");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00122204  FUN_00122204 =====

char * FUN_00122204(int param_1)

{
  if (param_1 + 2U < 0x62) {
    return &DAT_0011405c + *(int *)(&DAT_0011405c + (ulong)(param_1 + 2U) * 4);
  }
  return "unknown register";
}


// ===== 00122234  FUN_00122234 =====

undefined1  [16] FUN_00122234(undefined1 (*param_1) [16])

{
  return *param_1;
}


// ===== 001222d0  FUN_001222d0 =====

long FUN_001222d0(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_00142d20 == '\0') {
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


// ===== 00122300  _INIT_0 =====

void _INIT_0(void)

{
  uint uVar1;
  int iVar2;
  char acStack_6c [92];
  
  uVar1 = getauxval(0x10);
  if ((uVar1 >> 8 & 1) == 0) {
    DAT_00142d20 = 0;
    return;
  }
  iVar2 = __system_property_get("ro.arch",acStack_6c);
  if (0 < iVar2) {
    iVar2 = strncmp(acStack_6c,"exynos9810",10);
    DAT_00142d20 = iVar2 != 0;
    return;
  }
  DAT_00142d20 = 1;
  return;
}


// ===== 00122398  FUN_00122398 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00122398(ulong param_1,long param_2)

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
    DAT_00142d28 = DAT_00142d28 | 0x400;
  }
  uVar2 = (uint)uVar4;
  if ((uVar3 >> 4 & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x8000;
  }
  if ((uVar3 >> 0x1b & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 2;
  }
  if ((uVar2 >> 7 & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 6;
  }
  if ((~uVar3 & 0xc0000) == 0) {
    DAT_00142d28 = DAT_00142d28 | 0x20;
  }
  if ((uVar3 >> 0x14 & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x10;
  }
  if ((uVar3 >> 0x17 & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 8;
  }
  if ((uVar3 >> 9 & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x10100;
  }
  if ((uVar3 >> 0x18 & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x20000;
  }
  if ((uVar3 >> 0xc & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x40;
  }
  if ((uVar3 >> 0x1a & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x800000;
  }
  if ((uVar3 >> 3 & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x4000;
  }
  if ((uVar3 >> 5 & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x800;
  }
  if ((uVar3 >> 6 & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x1000;
  }
  if ((uVar3 >> 0xd & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x100000;
  }
  if ((uVar3 >> 0xe & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x200000;
  }
  if ((uVar3 >> 0x1d & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x400000000000;
  }
  if ((uVar3 >> 0x1c & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x2000000000000;
  }
  if ((uVar2 >> 0x12 & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x180000000000;
  }
  if ((uVar2 >> 0x16 & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x380000000000;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x2000000000;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x6000000000;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x8000000000;
  }
  if ((uVar2 >> 5 & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x10000000000;
  }
  if ((uVar2 >> 6 & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x20000000000;
  }
  if ((uVar4 & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x80000;
  }
  if ((uVar3 >> 8 & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x80;
  }
  if ((uVar2 >> 0x10 & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 1;
  }
  if ((uVar2 >> 0xd & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x4000000;
  }
  if ((uVar4 >> 0x20 & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x10000000;
  }
  if ((uVar4 >> 0x21 & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x100000000;
  }
  if ((uVar2 >> 0xf & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x2000000;
  }
  if ((uVar2 >> 8 & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x1000000;
  }
  if ((uVar2 >> 9 & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x200000000;
  }
  if ((uVar2 >> 10 & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x400000000;
  }
  if ((uVar2 >> 0xb & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x800000000;
  }
  if ((uVar2 >> 0x11 & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x4000000000000;
  }
  if ((uVar2 >> 0x15 & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x20000000;
  }
  if ((int)uVar2 < 0) {
    DAT_00142d28 = DAT_00142d28 | 0x40000000000000;
  }
  if ((uVar2 >> 0x17 & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x40000000000;
  }
  if ((uVar2 >> 0x18 & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x100000000000000;
  }
  if ((uVar2 >> 0x19 & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x80000000000000;
  }
  if ((uVar4 >> 0x2b & 1) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x800000000000000;
  }
  if ((uVar3 >> 0xb & 1) == 0) {
    if ((param_1 & 0x201) != 0) {
      DAT_00142d28 = DAT_00142d28 | 0x300;
    }
    if ((uVar4 & 1) != 0 || (param_1 & 0x10000) != 0) {
      DAT_00142d28 = DAT_00142d28 | 0x40000;
    }
    if ((param_1 & 0x4008000) != 0) {
      DAT_00142d28 = DAT_00142d28 | 0x400000;
    }
    if ((uVar4 & 0x100004000) != 0) {
      DAT_00142d28 = DAT_00142d28 | 0x8000000;
    }
    uVar5 = DAT_00142d28 | (ulong)(uVar2 << 0x13) & 0x80000000;
    if ((uVar4 & 2) != 0 && (param_1 & 0x400000) != 0) {
      uVar5 = uVar5 | 0x1000000000;
    }
    uVar5 = uVar5 | (param_1 & 0x20000) >> 4;
    goto LAB_00122500;
  }
  uVar4 = id_aa64pfr1_el1;
  if ((uVar4 & 0xf00) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x80000000000;
  }
  if ((uVar4 & 0xf0) == 0x10) {
    DAT_00142d28 = DAT_00142d28 | 0x1000000000000;
    if ((uVar4 & 0xf000000) != 0x2000000) goto LAB_001227f0;
LAB_00122844:
    DAT_00142d28 = DAT_00142d28 | 0x200000000000000;
    uVar4 = id_aa64pfr0_el1;
    uVar3 = (uint)uVar4;
  }
  else {
    if ((uVar4 & 0xf000000) == 0x2000000) goto LAB_00122844;
LAB_001227f0:
    uVar4 = id_aa64pfr0_el1;
    uVar3 = (uint)uVar4;
  }
  if ((~uVar3 & 0xf0000) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x300;
  }
  if ((uVar4 & 0xf00000000) != 0) {
    uVar4 = UnkSytemRegRead(3,0,0,4,4);
    if ((uVar4 & 0xf) == 1) {
      DAT_00142d28 = DAT_00142d28 | 0x1000000000;
    }
    else if ((uVar4 & 0xf) == 0) {
      DAT_00142d28 = DAT_00142d28 | 0x40000000;
    }
    if ((uVar4 & 0xf00000) != 0) {
      DAT_00142d28 = DAT_00142d28 | 0x80000000;
    }
  }
  uVar4 = id_aa64isar0_el1;
  if ((uVar4 & 0xf00000000) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x2000;
  }
  uVar4 = id_aa64isar1_el1;
  uVar5 = uVar4 >> 0x14 & 0xf;
  if ((uVar4 & 0xf) != 0) {
    DAT_00142d28 = DAT_00142d28 | 0x40000;
  }
  if (uVar5 != 0) {
    if (uVar5 == 3) {
      DAT_00142d28 = DAT_00142d28 | 0x400000000400000;
    }
    else {
      DAT_00142d28 = DAT_00142d28 | 0x400000;
    }
  }
  uVar5 = DAT_00142d28 | 0x800000000000;
  if ((uVar4 & 0xf0000000000) != 0x20000000000) {
    uVar5 = DAT_00142d28;
  }
  if ((uVar4 & 0xf00000000000) != 0) {
    uVar5 = uVar5 | 0x8000000;
  }
  if (uVar4 >> 0x3c != 0) {
    if (uVar4 >> 0x3d == 0) {
      DAT_00142d28 = uVar5 | 0x8008000000000000;
      return;
    }
    uVar1 = 0x38000000000000;
    if (uVar4 >> 0x3c < 3) {
      uVar1 = 0x18000000000000;
    }
    DAT_00142d28 = uVar5 | uVar1 | 0x8000000000000000;
    return;
  }
LAB_00122500:
  DAT_00142d28 = uVar5 | 0x8000000000000000;
  return;
}


// ===== 00122934  _INIT_1 =====

void _INIT_1(void)

{
  int iVar1;
  ulong uVar2;
  char local_70 [8];
  ulong uStack_68;
  undefined8 local_60;
  
  if (DAT_00142d28 != 0) {
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
    FUN_00122398(uVar2 | 0x4000000000000000,local_70);
  }
  return;
}


// ===== 001229c0  FUN_001229c0 =====

long FUN_001229c0(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_00142d20 == '\0') {
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


// ===== 001229f0  JNI_OnLoad =====

undefined4 JNI_OnLoad(_JavaVM *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined ***pppuVar3;
  long lVar4;
  undefined **local_60 [4];
  long *local_40;
  long local_28;
  
  local_40 = (long *)local_60;
  pppuVar3 = local_60;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60[0] = &PTR_FUN_0013c360;
  uVar2 = facebook::jni::initialize(param_1,(function *)local_60);
  if ((undefined ***)local_40 == local_60) {
    lVar4 = 4;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_00122a5c;
    lVar4 = 5;
    pppuVar3 = (undefined ***)local_40;
  }
  (**(code **)((long)*pppuVar3 + lVar4 * 8))(pppuVar3);
LAB_00122a5c:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00122a84  _INIT_2 =====

void _INIT_2(void)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  if (((*PTR__globalCache_0013db08 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR__globalCache_0013db08), puVar2 = PTR__globalCache_0013db00,
     iVar3 != 0)) {
    *(undefined4 *)(PTR__globalCache_0013db00 + 0x20) = 0x3f800000;
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined8 *)puVar2 = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    __cxa_atexit(FUN_00122b38,puVar2,&PTR_LOOP_0013c2c0);
    if (*(long *)(lVar1 + 0x28) == lVar4) {
      __cxa_guard_release(PTR__globalCache_0013db08);
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00122b38  FUN_00122b38 =====

void FUN_00122b38(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)param_1[2];
  while (puVar2 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar2;
    if (puVar2[4] != 0) {
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    operator_delete(puVar2);
    puVar2 = (undefined8 *)pvVar3;
  }
  pvVar3 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar3 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar4) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(pvVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00122be0  margelo::nitro::playagerangedeclaration::initialize =====

/* margelo::nitro::playagerangedeclaration::initialize(_JavaVM*) */

undefined4 margelo::nitro::playagerangedeclaration::initialize(_JavaVM *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined ***pppuVar3;
  long lVar4;
  undefined **local_60 [4];
  long *local_40;
  long local_28;
  
  local_40 = (long *)local_60;
  pppuVar3 = local_60;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60[0] = &PTR_FUN_0013c360;
  uVar2 = facebook::jni::initialize(param_1,(function *)local_60);
  if ((undefined ***)local_40 == local_60) {
    lVar4 = 4;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_00122c4c;
    lVar4 = 5;
    pppuVar3 = (undefined ***)local_40;
  }
  (**(code **)((long)*pppuVar3 + lVar4 * 8))(pppuVar3);
LAB_00122c4c:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00122c74  FUN_00122c74 =====

void FUN_00122c74(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00122cac  FUN_00122cac =====

void FUN_00122cac(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00122ce4  FUN_00122ce4 =====

void FUN_00122ce4(void)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    puVar2 = (undefined8 *)operator_new(0x10);
    *puVar2 = &PTR_FUN_0013c360;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00122d30  FUN_00122d30 =====

void FUN_00122d30(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0013c360;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00122d74  FUN_00122d74 =====

void FUN_00122d74(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00122dac  FUN_00122dac =====

void FUN_00122dac(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00122de4  FUN_00122de4 =====

void FUN_00122de4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    margelo::nitro::playagerangedeclaration::registerAllNatives();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00122e1c  FUN_00122e1c =====

void FUN_00122e1c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZN7margelo5nitro23playagerangedeclaration10initializeEP7_JavaVME3$_0") {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00122e6c  FUN_00122e6c =====

pointer_____offset_0x10___ * FUN_00122e6c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0013c3c0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00122eac  margelo::nitro::playagerangedeclaration::registerAllNatives =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::playagerangedeclaration::registerAllNatives() */

void margelo::nitro::playagerangedeclaration::registerAllNatives(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  long lVar5;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  JHybridPlayAgeRangeDeclarationSpec::CxxPart::registerNatives();
  local_70 = (char *)operator_new(0x20);
  uVar3 = s_PlayAgeRangeDeclaration_00112f23._0_8_;
  uVar2 = CONCAT71(s_PlayAgeRangeDeclaration_00112f23._16_7_,s_PlayAgeRangeDeclaration_00112f23[0xf]
                  );
  *(ulong *)(local_70 + 8) =
       CONCAT17(s_PlayAgeRangeDeclaration_00112f23[0xf],s_PlayAgeRangeDeclaration_00112f23._8_7_);
  *(undefined8 *)local_70 = uVar3;
  uStack_78 = _UNK_00114258;
  local_80 = _DAT_00114250;
  *(undefined8 *)(local_70 + 0xf) = uVar2;
  local_70[0x17] = '\0';
  local_60[0] = &PTR_FUN_0013c3e0;
                    /* try { // try from 00122f14 to 00122f1f has its CatchHandler @ 00122f7c */
  local_40 = local_60;
  margelo::nitro::HybridObjectRegistry::registerHybridObjectConstructor
            ((basic_string *)&local_80,(function *)local_60);
  if (local_40 == local_60) {
    lVar5 = 4;
    pppuVar4 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00122f4c;
    lVar5 = 5;
    pppuVar4 = local_40;
  }
  (*(code *)(*pppuVar4)[lVar5])();
LAB_00122f4c:
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00122fdc  FUN_00122fdc =====

void FUN_00122fdc(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00123014  FUN_00123014 =====

void FUN_00123014(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012304c  FUN_0012304c =====

void FUN_0012304c(void)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    puVar2 = (undefined8 *)operator_new(0x10);
    *puVar2 = &PTR_FUN_0013c3e0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00123098  FUN_00123098 =====

void FUN_00123098(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0013c3e0;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001230dc  FUN_001230dc =====

void FUN_001230dc(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00123114  FUN_00123114 =====

void FUN_00123114(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012314c  FUN_0012314c =====

void FUN_0012314c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  _jclass *p_Var4;
  long lVar5;
  long *plVar6;
  _jmethodID *p_Var7;
  undefined8 uVar8;
  long *local_50;
  long local_48;
  long local_40;
  long local_38;
  
  puVar2 = PTR_constructorFn_0013db10;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_constructorFn_0013db18 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_constructorFn_0013db18), iVar3 != 0)) {
                    /* try { // try from 00123244 to 00123253 has its CatchHandler @ 001232ac */
    FUN_0012337c(&local_50);
    uVar8 = FUN_0012343c(&local_50);
    *(undefined8 *)puVar2 = uVar8;
    __cxa_guard_release(PTR_constructorFn_0013db18);
  }
  if (((*PTR_cls_0013db28 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_cls_0013db28), iVar3 != 0))
  {
                    /* try { // try from 00123278 to 0012328b has its CatchHandler @ 0012329c */
    facebook::jni::findClassStatic(PTR_kBaseName_0013db30);
    __cxa_guard_release(PTR_cls_0013db28);
  }
  uVar8 = *(undefined8 *)puVar2;
  p_Var7 = *(_jmethodID **)PTR_cls_0013db20;
  p_Var4 = (_jclass *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::NewObject(p_Var4,p_Var7,uVar8);
  facebook::jni::throwCppExceptionIf(lVar5 == 0);
                    /* try { // try from 001231cc to 001231d7 has its CatchHandler @ 001232c0 */
  local_40 = lVar5;
  margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::JavaPart::
  getJHybridPlayAgeRangeDeclarationSpec((JavaPart *)&local_40);
  lVar5 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 001231e0 to 001231f3 has its CatchHandler @ 001232e8 */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,lVar5);
  }
  if (local_50 != (long *)0x0) {
    local_50 = (long *)((long)local_50 + *(long *)(*local_50 + -0x20));
  }
  *param_1 = (long)local_50;
  param_1[1] = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001232ec  FUN_001232ec =====

void FUN_001232ec(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZN7margelo5nitro23playagerangedeclaration18registerAllNativesEvE3$_0") {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0012333c  FUN_0012333c =====

pointer_____offset_0x10___ * FUN_0012333c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0013c450;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012337c  FUN_0012337c =====

void FUN_0012337c(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_0013db28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_0013db28), iVar2 != 0))
  {
                    /* try { // try from 001233ec to 001233ff has its CatchHandler @ 00123410 */
    facebook::jni::findClassStatic(PTR_kBaseName_0013db30);
    __cxa_guard_release(PTR_cls_0013db28);
  }
  *param_1 = *(undefined8 *)PTR_cls_0013db20;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012343c  FUN_0012343c =====

long FUN_0012343c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"<init>",PTR_kConstructorDescriptor_0013db38);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001234b8  _JNIEnv::NewObject =====

/* _JNIEnv::NewObject(_jclass*, _jmethodID*, ...) */

void _JNIEnv::NewObject(_jclass *param_1,_jmethodID *param_2,...)

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
  (**(code **)(*(long *)param_1 + 0xe8))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00123554  FUN_00123554 =====

void FUN_00123554(void)

{
  __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 00123564  FUN_00123564 =====

void FUN_00123564(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00123590 to 001235a3 has its CatchHandler @ 001235d0 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001235d4  margelo::nitro::playagerangedeclaration::HybridPlayAgeRangeDeclarationSpec::loadHybridMethods =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::playagerangedeclaration::HybridPlayAgeRangeDeclarationSpec::loadHybridMethods()
    */

void __thiscall
margelo::nitro::playagerangedeclaration::HybridPlayAgeRangeDeclarationSpec::loadHybridMethods
          (HybridPlayAgeRangeDeclarationSpec *this)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  long **pplVar7;
  runtime_error *prVar8;
  long lVar9;
  long *plVar10;
  undefined *puVar11;
  long *plVar12;
  long *plVar13;
  ulong local_150;
  ulong uStack_148;
  char *local_140;
  ulong local_130;
  ulong uStack_128;
  char *local_120;
  undefined *local_110;
  long *plStack_108;
  long *local_100;
  long *local_f8;
  long *plStack_f0;
  undefined4 local_e8;
  long *local_e0;
  long *plStack_d8;
  long **local_c0;
  undefined8 local_b0;
  ulong local_a8;
  ulong uStack_a0;
  char *local_98;
  long *local_90;
  long *plStack_88;
  long **local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  margelo::nitro::HybridObject::loadHybridMethods();
  lVar9 = *(long *)(*(long *)this + -0x20);
  plVar10 = *(long **)(this + lVar9 + 8);
  if (plVar10 == (long *)0x0) {
    local_90 = (long *)0x0;
    plStack_88 = (long *)0x0;
    local_110 = PTR_typeinfo_0013db48;
                    /* try { // try from 00123634 to 00123643 has its CatchHandler @ 00123f20 */
    FUN_0012f378(&local_e0,&local_110,&local_90);
    plVar13 = plStack_d8;
    plVar10 = local_e0;
    plVar12 = *(long **)(this + lVar9 + 0x10);
    local_e0 = (long *)0x0;
    plStack_d8 = (long *)0x0;
    *(long **)(this + lVar9 + 0x10) = plVar13;
    *(long **)(this + lVar9 + 8) = plVar10;
    if ((plVar12 != (long *)0x0) &&
       (lVar5 = FUN_001222d0(0xffffffffffffffff,plVar12 + 1), lVar5 == 0)) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar10 = plStack_d8;
    if ((plStack_d8 != (long *)0x0) &&
       (lVar5 = FUN_001222d0(0xffffffffffffffff,plStack_d8 + 1), lVar5 == 0)) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar10 = plStack_88;
    if ((plStack_88 != (long *)0x0) &&
       (lVar5 = FUN_001222d0(0xffffffffffffffff,plStack_88 + 1), lVar5 == 0)) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar10 = *(long **)(this + lVar9 + 8);
  }
  puVar11 = *(undefined **)(*plVar10 + 8);
  plVar13 = plVar10;
  while (puVar11 != PTR_typeinfo_name_0013db40) {
    plVar13 = (long *)plVar13[1];
    if (plVar13 == (long *)0x0) {
      plStack_d8 = *(long **)(this + lVar9 + 0x10);
      local_e0 = plVar10;
      if (plStack_d8 != (long *)0x0) {
        FUN_001229c0(1,plStack_d8 + 1);
      }
      local_110 = PTR_typeinfo_0013db48;
                    /* try { // try from 00123750 to 0012375f has its CatchHandler @ 00123f14 */
      FUN_0012f378(&local_90,&local_110,&local_e0);
      plVar13 = plStack_88;
      plVar10 = local_90;
      plVar12 = *(long **)(this + lVar9 + 0x10);
      local_90 = (long *)0x0;
      plStack_88 = (long *)0x0;
      *(long **)(this + lVar9 + 0x10) = plVar13;
      *(long **)(this + lVar9 + 8) = plVar10;
      if ((plVar12 != (long *)0x0) &&
         (lVar5 = FUN_001222d0(0xffffffffffffffff,plVar12 + 1), lVar5 == 0)) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar10 = plStack_88;
      if ((plStack_88 != (long *)0x0) &&
         (lVar5 = FUN_001222d0(0xffffffffffffffff,plStack_88 + 1), lVar5 == 0)) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar10 = plStack_d8;
      if ((plStack_d8 != (long *)0x0) &&
         (lVar5 = FUN_001222d0(0xffffffffffffffff,plStack_d8 + 1), lVar5 == 0)) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar13 = *(long **)(this + lVar9 + 8);
      lVar9 = plVar13[6];
      goto joined_r0x00123804;
    }
    puVar11 = *(undefined **)(*plVar13 + 8);
  }
  lVar9 = plVar13[6];
joined_r0x00123804:
  if (((lVar9 == 0) && (plVar13[0xb] == 0)) && (plVar13[0x10] == 0)) {
    pcVar6 = (char *)operator_new(0x20);
    uStack_128 = _UNK_00114228;
    local_130 = _DAT_00114220;
    uVar4 = s_getPlayAgeRangeDeclaration_00113e9b._18_8_;
    uVar3 = s_getPlayAgeRangeDeclaration_00113e9b._0_8_;
    uVar2 = CONCAT26(s_getPlayAgeRangeDeclaration_00113e9b._16_2_,
                     s_getPlayAgeRangeDeclaration_00113e9b._10_6_);
    *(ulong *)(pcVar6 + 8) =
         CONCAT62(s_getPlayAgeRangeDeclaration_00113e9b._10_6_,
                  s_getPlayAgeRangeDeclaration_00113e9b._8_2_);
    *(undefined8 *)pcVar6 = uVar3;
    *(undefined8 *)(pcVar6 + 0x12) = uVar4;
    *(undefined8 *)(pcVar6 + 10) = uVar2;
    pcVar6[0x1a] = '\0';
    local_120 = pcVar6;
    lVar9 = FUN_001240c4(plVar13[8],plVar13[9],&local_130);
    if ((lVar9 != 0) || (lVar9 = FUN_001240c4(plVar13[0xd],plVar13[0xe],&local_130), lVar9 != 0)) {
      prVar8 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00123c58 to 00123c6b has its CatchHandler @ 00124088 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",(basic_string *)&local_130);
                    /* try { // try from 00123c6c to 00123c7f has its CatchHandler @ 00124058 */
      FUN_0012425c(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 00123c84 to 00123cbb has its CatchHandler @ 00124034 */
      std::runtime_error::runtime_error(prVar8,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar8,PTR_typeinfo_0013dcd0,PTR__runtime_error_0013dc98);
      }
      goto LAB_001240c0;
    }
    plVar10 = plVar13 + 3;
    lVar9 = FUN_001240c4(*plVar10,plVar13[4],&local_130);
    if (lVar9 != 0) {
      prVar8 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00123d40 to 00123d53 has its CatchHandler @ 00124030 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",(basic_string *)&local_130);
                    /* try { // try from 00123d54 to 00123d67 has its CatchHandler @ 00123fec */
      FUN_0012425c(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 00123d6c to 00123da3 has its CatchHandler @ 00123fc0 */
      std::runtime_error::runtime_error(prVar8,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar8,PTR_typeinfo_0013dcd0,PTR__runtime_error_0013dc98);
      }
      goto LAB_001240c0;
    }
                    /* try { // try from 00123888 to 0012389b has its CatchHandler @ 00123f88 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_110,pcVar6,0x1a);
    local_e8 = 0;
    plStack_f0 = _UNK_00114248;
    local_f8 = _DAT_00114240;
                    /* try { // try from 001238ac to 001238b3 has its CatchHandler @ 00123f70 */
    local_70 = (long **)operator_new(0x38);
    *local_70 = (long *)&PTR_FUN_0013c630;
    if (((ulong)local_110 & 1) == 0) {
      local_70[2] = plStack_108;
      *(undefined **)(local_70 + 1) = local_110;
      local_70[3] = local_100;
    }
    else {
                    /* try { // try from 001238e4 to 001238e7 has its CatchHandler @ 00123f04 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (local_70 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70[5] = plStack_f0;
    local_70[4] = local_f8;
    *(undefined4 *)(local_70 + 6) = local_e8;
    if (((byte)local_110._0_1_ & 1) == 0) {
LAB_00123920:
      pplVar7 = &local_90;
      local_c0 = local_70;
LAB_00123930:
      pplVar7[4] = (long *)0x0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        pplVar7 = &local_e0;
        goto LAB_00123930;
      }
      if (local_70 != &local_90) goto LAB_00123920;
      local_c0 = &local_e0;
                    /* try { // try from 00123c1c to 00123c27 has its CatchHandler @ 00123e18 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 0;
    if ((local_130 & 1) == 0) {
      uStack_a0 = uStack_128;
      local_a8 = local_130;
      local_98 = local_120;
    }
    else {
                    /* try { // try from 00123960 to 00123967 has its CatchHandler @ 00123e98 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,local_120,uStack_128);
    }
    if (local_70 == &local_90) {
      lVar9 = 4;
      pplVar7 = &local_90;
LAB_0012398c:
      (*(code *)(*pplVar7)[lVar9])();
    }
    else if (local_70 != (long **)0x0) {
      lVar9 = 5;
      pplVar7 = local_70;
      goto LAB_0012398c;
    }
                    /* try { // try from 00123998 to 001239ab has its CatchHandler @ 00123f60 */
    FUN_001242e0(plVar10,&local_130,&local_130,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar9 = 4;
      pplVar7 = &local_e0;
LAB_001239e0:
      (*(code *)(*pplVar7)[lVar9])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar9 = 5;
      pplVar7 = local_c0;
      goto LAB_001239e0;
    }
    if ((local_130 & 1) != 0) {
      operator_delete(local_120);
    }
    pcVar6 = (char *)operator_new(0x20);
    uStack_148 = _UNK_00114258;
    local_150 = _DAT_00114250;
    uVar3 = s_requestDeclaredAgeRange_001136a9._0_8_;
    uVar2 = CONCAT71(s_requestDeclaredAgeRange_001136a9._16_7_,
                     s_requestDeclaredAgeRange_001136a9[0xf]);
    *(ulong *)(pcVar6 + 8) =
         CONCAT17(s_requestDeclaredAgeRange_001136a9[0xf],s_requestDeclaredAgeRange_001136a9._8_7_);
    *(undefined8 *)pcVar6 = uVar3;
    *(undefined8 *)(pcVar6 + 0xf) = uVar2;
    pcVar6[0x17] = '\0';
    local_140 = pcVar6;
    lVar9 = FUN_001240c4(plVar13[8],plVar13[9],&local_150);
    if ((lVar9 != 0) || (lVar9 = FUN_001240c4(plVar13[0xd],plVar13[0xe],&local_150), lVar9 != 0)) {
      prVar8 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00123ccc to 00123cdf has its CatchHandler @ 00124070 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",(basic_string *)&local_150);
                    /* try { // try from 00123ce0 to 00123cf3 has its CatchHandler @ 00124018 */
      FUN_0012425c(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 00123cf8 to 00123d2f has its CatchHandler @ 00123ff4 */
      std::runtime_error::runtime_error(prVar8,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar8,PTR_typeinfo_0013dcd0,PTR__runtime_error_0013dc98);
      }
      goto LAB_001240c0;
    }
    lVar9 = FUN_001240c4(plVar13[3],plVar13[4],&local_150);
    if (lVar9 != 0) {
      prVar8 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00123db0 to 00123dc3 has its CatchHandler @ 00123ff0 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",(basic_string *)&local_150);
                    /* try { // try from 00123dc4 to 00123dd7 has its CatchHandler @ 00123fbc */
      FUN_0012425c(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 00123ddc to 00123e13 has its CatchHandler @ 00123f90 */
      std::runtime_error::runtime_error(prVar8,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar8,PTR_typeinfo_0013dcd0,PTR__runtime_error_0013dc98);
      }
      goto LAB_001240c0;
    }
                    /* try { // try from 00123a68 to 00123a7b has its CatchHandler @ 00123f58 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_110,pcVar6,0x17);
    local_e8 = 0;
    plStack_f0 = _UNK_00114238;
    local_f8 = _DAT_00114230;
                    /* try { // try from 00123a8c to 00123a93 has its CatchHandler @ 00123f40 */
    pplVar7 = (long **)operator_new(0x38);
    *pplVar7 = (long *)&PTR_FUN_0013cba0;
    if (((ulong)local_110 & 1) == 0) {
      pplVar7[2] = plStack_108;
      *(undefined **)(pplVar7 + 1) = local_110;
      pplVar7[3] = local_100;
    }
    else {
                    /* try { // try from 00123ac4 to 00123ac7 has its CatchHandler @ 00123e88 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar7 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar7;
    pplVar7[5] = plStack_f0;
    pplVar7[4] = local_f8;
    *(undefined4 *)(pplVar7 + 6) = local_e8;
    if (((byte)local_110._0_1_ & 1) == 0) {
LAB_00123b00:
      pplVar7 = &local_90;
      local_c0 = local_70;
LAB_00123b10:
      pplVar7[4] = (long *)0x0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        pplVar7 = &local_e0;
        goto LAB_00123b10;
      }
      if (local_70 != &local_90) goto LAB_00123b00;
      local_c0 = &local_e0;
                    /* try { // try from 00123c3c to 00123c47 has its CatchHandler @ 00123e14 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 3;
    if ((local_150 & 1) == 0) {
      uStack_a0 = uStack_148;
      local_a8 = local_150;
      local_98 = local_140;
    }
    else {
                    /* try { // try from 00123b44 to 00123b4b has its CatchHandler @ 00123e1c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,local_140,uStack_148);
    }
    if (local_70 == &local_90) {
      lVar9 = 4;
      pplVar7 = &local_90;
LAB_00123b70:
      (*(code *)(*pplVar7)[lVar9])();
    }
    else if (local_70 != (long **)0x0) {
      lVar9 = 5;
      pplVar7 = local_70;
      goto LAB_00123b70;
    }
                    /* try { // try from 00123b7c to 00123b8f has its CatchHandler @ 00123f30 */
    FUN_001242e0(plVar10,&local_150,&local_150,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar9 = 4;
      pplVar7 = &local_e0;
LAB_00123bc4:
      (*(code *)(*pplVar7)[lVar9])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar9 = 5;
      pplVar7 = local_c0;
      goto LAB_00123bc4;
    }
    if ((local_150 & 1) != 0) {
      operator_delete(local_140);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_001240c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001240c4  FUN_001240c4 =====

long * FUN_001240c4(long param_1,ulong param_2,byte *param_3)

{
  size_t sVar1;
  size_t sVar2;
  byte *__s2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined2 uVar13;
  undefined8 uVar14;
  
  lVar5 = tpidr_el0;
  lVar8 = *(long *)(lVar5 + 0x28);
  sVar2 = *(size_t *)(param_3 + 8);
  __s2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    __s2 = param_3 + 1;
    sVar2 = (ulong)(*param_3 >> 1);
  }
  uVar7 = FUN_00124928(__s2,sVar2);
  if (param_2 != 0) {
    uVar14 = NEON_cnt(param_2,1);
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar11 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    if (uVar11 < 2) {
      uVar12 = param_2 - 1 & uVar7;
    }
    else {
      uVar12 = uVar7;
      if (param_2 <= uVar7) {
        uVar12 = 0;
        if (param_2 != 0) {
          uVar12 = uVar7 / param_2;
        }
        uVar12 = uVar7 - uVar12 * param_2;
      }
    }
    plVar9 = *(long **)(param_1 + uVar12 * 8);
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)*plVar9;
      if (plVar9 != (long *)0x0) {
        do {
          uVar10 = plVar9[1];
          if (uVar7 == uVar10) {
            bVar3 = *(byte *)(plVar9 + 2);
            sVar1 = (ulong)(bVar3 >> 1);
            if ((bVar3 & 1) != 0) {
              sVar1 = plVar9[3];
            }
            if (sVar1 == sVar2) {
              if ((bVar3 & 1) == 0) {
                if (bVar3 < 2) break;
                uVar10 = 0;
                while (*(byte *)((long)plVar9 + uVar10 + 0x11) == __s2[uVar10]) {
                  uVar10 = uVar10 + 1;
                  if (bVar3 >> 1 == uVar10) goto LAB_00124224;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar9[4],__s2,plVar9[3]);
                if (iVar6 == 0) break;
              }
            }
          }
          else {
            if (uVar11 < 2) {
              uVar10 = uVar10 & param_2 - 1;
            }
            else if (param_2 <= uVar10) {
              uVar4 = 0;
              if (param_2 != 0) {
                uVar4 = uVar10 / param_2;
              }
              uVar10 = uVar10 - uVar4 * param_2;
            }
            if (uVar10 != uVar12) goto LAB_00124220;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      goto LAB_00124224;
    }
  }
LAB_00124220:
  plVar9 = (long *)0x0;
LAB_00124224:
  if (*(long *)(lVar5 + 0x28) == lVar8) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012425c  FUN_0012425c =====

void FUN_0012425c(undefined8 *param_1,char *param_2,char *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  strlen(param_3);
  puVar2 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     (param_2,(ulong)param_3);
  uVar5 = *puVar2;
  uVar4 = puVar2[2];
  param_1[1] = puVar2[1];
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001242e0  FUN_001242e0 =====

void FUN_001242e0(long *param_1,byte *param_2,byte *param_3,long *param_4)

{
  size_t sVar1;
  size_t sVar2;
  byte *__s2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  void *pvVar9;
  void *pvVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  byte *pbVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  byte *pbVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  ulong uVar24;
  ulong unaff_x27;
  undefined2 uVar25;
  undefined8 uVar26;
  float fVar27;
  long lVar28;
  long lVar29;
  
  lVar5 = tpidr_el0;
  lVar11 = *(long *)(lVar5 + 0x28);
  sVar2 = *(size_t *)(param_2 + 8);
  __s2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    __s2 = param_2 + 1;
    sVar2 = (ulong)(*param_2 >> 1);
  }
  uVar7 = FUN_00124928(__s2,sVar2);
  uVar24 = param_1[1];
  if (uVar24 != 0) {
    uVar26 = NEON_cnt(uVar24,1);
    uVar25 = NEON_uaddlv(uVar26,1);
    uVar19 = CONCAT62((int6)((ulong)uVar26 >> 0x10),uVar25) & 0xffffffff;
    if (uVar19 < 2) {
      unaff_x27 = uVar24 - 1 & uVar7;
    }
    else {
      unaff_x27 = uVar7;
      if (uVar24 <= uVar7) {
        uVar13 = 0;
        if (uVar24 != 0) {
          uVar13 = uVar7 / uVar24;
        }
        unaff_x27 = uVar7 - uVar13 * uVar24;
      }
    }
    plVar12 = *(long **)(*param_1 + unaff_x27 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      do {
        uVar13 = plVar12[1];
        if (uVar13 == uVar7) {
          bVar3 = *(byte *)(plVar12 + 2);
          uVar13 = (ulong)(bVar3 >> 1);
          sVar1 = uVar13;
          if ((bVar3 & 1) != 0) {
            sVar1 = plVar12[3];
          }
          if (sVar1 == sVar2) {
            if ((bVar3 & 1) == 0) {
              if (bVar3 < 2) goto LAB_001247c8;
              pbVar16 = (byte *)((long)plVar12 + 0x11);
              pbVar20 = __s2;
              while (*pbVar16 == *pbVar20) {
                uVar13 = uVar13 - 1;
                pbVar16 = pbVar16 + 1;
                pbVar20 = pbVar20 + 1;
                if (uVar13 == 0) goto LAB_001247c8;
              }
            }
            else {
              iVar6 = memcmp((void *)plVar12[4],__s2,plVar12[3]);
              if (iVar6 == 0) goto LAB_001247c8;
            }
          }
        }
        else {
          if (uVar19 < 2) {
            uVar13 = uVar13 & uVar24 - 1;
          }
          else if (uVar24 <= uVar13) {
            uVar15 = 0;
            if (uVar24 != 0) {
              uVar15 = uVar13 / uVar24;
            }
            uVar13 = uVar13 - uVar15 * uVar24;
          }
          if (uVar13 != unaff_x27) break;
        }
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
    }
  }
  plVar12 = param_1 + 2;
  plVar8 = (long *)operator_new(0x80);
  bVar3 = *param_3;
  *plVar8 = 0;
  plVar8[1] = uVar7;
  if ((bVar3 & 1) == 0) {
    lVar18 = *(long *)param_3;
    lVar14 = *(long *)(param_3 + 0x10);
    plVar8[3] = *(long *)(param_3 + 8);
    plVar8[2] = lVar18;
    plVar8[4] = lVar14;
  }
  else {
                    /* try { // try from 001244b4 to 001244bb has its CatchHandler @ 00124854 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (plVar8 + 2),*(char **)(param_3 + 0x10),*(ulong *)(param_3 + 8));
  }
  plVar17 = (long *)param_4[4];
  if (plVar17 == (long *)0x0) {
    plVar8[10] = 0;
  }
  else if (plVar17 == param_4) {
    lVar14 = *param_4;
    plVar8[10] = (long)(plVar8 + 6);
                    /* try { // try from 001244f8 to 001244ff has its CatchHandler @ 00124850 */
    (**(code **)(lVar14 + 0x18))(param_4);
  }
  else {
    plVar8[10] = (long)plVar17;
    param_4[4] = 0;
  }
  lVar14 = param_4[9];
  lVar29 = param_4[8];
  lVar28 = param_4[7];
  param_4[7] = 0;
  param_4[8] = 0;
  param_4[9] = 0;
  lVar21 = param_4[6];
  lVar18 = param_1[3];
  plVar8[0xe] = lVar29;
  plVar8[0xd] = lVar28;
  fVar27 = *(float *)(param_1 + 4);
  plVar8[0xf] = lVar14;
  plVar8[0xc] = lVar21;
  if ((uVar24 == 0) || (fVar27 * (float)uVar24 < (float)(lVar18 + 1))) {
    if (uVar24 < 3) {
      uVar19 = 1;
    }
    else {
      uVar19 = (ulong)((uVar24 & uVar24 - 1) != 0);
    }
    uVar19 = uVar19 | uVar24 << 1;
    uVar24 = (ulong)((float)(lVar18 + 1) / fVar27);
    if (uVar19 <= uVar24) {
      uVar19 = uVar24;
    }
    if (uVar19 - 1 == 0) {
      uVar19 = 2;
    }
    else if ((uVar19 & uVar19 - 1) != 0) {
                    /* try { // try from 00124598 to 0012484f has its CatchHandler @ 00124858 */
      uVar19 = std::__ndk1::__next_prime(uVar19);
    }
    uVar24 = param_1[1];
    if (uVar24 < uVar19) {
LAB_001245b0:
      if (uVar19 >> 0x3d != 0) {
        if (*(long *)(lVar5 + 0x28) == lVar11) {
          FUN_00124e74();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 001244f8 with catch @ 00124850
                        */
          FUN_00123554();
        }
        goto LAB_00124880;
      }
      pvVar9 = operator_new(uVar19 << 3);
      pvVar10 = (void *)*param_1;
      *param_1 = (long)pvVar9;
      if (pvVar10 != (void *)0x0) {
        operator_delete(pvVar10);
      }
      uVar24 = 0;
      param_1[1] = uVar19;
      do {
        *(undefined8 *)(*param_1 + uVar24 * 8) = 0;
        uVar24 = uVar24 + 1;
      } while (uVar19 != uVar24);
      plVar17 = (long *)*plVar12;
      uVar24 = uVar19;
      if (plVar17 != (long *)0x0) {
        uVar13 = plVar17[1];
        uVar26 = NEON_cnt(uVar19,1);
        uVar25 = NEON_uaddlv(uVar26,1);
        uVar15 = CONCAT62((int6)((ulong)uVar26 >> 0x10),uVar25) & 0xffffffff;
        if (uVar15 < 2) {
          uVar13 = uVar13 & uVar19 - 1;
        }
        else if (uVar19 <= uVar13) {
          uVar23 = 0;
          if (uVar19 != 0) {
            uVar23 = uVar13 / uVar19;
          }
          uVar13 = uVar13 - uVar23 * uVar19;
        }
        *(long **)(*param_1 + uVar13 * 8) = plVar12;
        plVar22 = (long *)*plVar17;
        if (plVar22 != (long *)0x0) {
          do {
            uVar23 = plVar22[1];
            if (uVar15 < 2) {
              uVar23 = uVar23 & uVar19 - 1;
            }
            else if (uVar19 <= uVar23) {
              uVar4 = 0;
              if (uVar19 != 0) {
                uVar4 = uVar23 / uVar19;
              }
              uVar23 = uVar23 - uVar4 * uVar19;
            }
            if (uVar23 != uVar13) {
              if (*(long *)(*param_1 + uVar23 * 8) == 0) {
                *(long **)(*param_1 + uVar23 * 8) = plVar17;
                uVar13 = uVar23;
              }
              else {
                *plVar17 = *plVar22;
                *plVar22 = **(long **)(*param_1 + uVar23 * 8);
                **(undefined8 **)(*param_1 + uVar23 * 8) = plVar22;
                plVar22 = plVar17;
              }
            }
            plVar17 = plVar22;
            plVar22 = (long *)*plVar17;
          } while (plVar22 != (long *)0x0);
        }
      }
    }
    else if (uVar19 < uVar24) {
      uVar13 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar24 < 3) {
LAB_001247fc:
        uVar13 = std::__ndk1::__next_prime(uVar13);
      }
      else {
        uVar26 = NEON_cnt(uVar24,1);
        uVar25 = NEON_uaddlv(uVar26,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar26 >> 0x10),uVar25)) goto LAB_001247fc;
        if (1 < uVar13) {
          uVar13 = 1L << (-LZCOUNT(uVar13 - 1) & 0x3fU);
        }
      }
      if (uVar19 <= uVar13) {
        uVar19 = uVar13;
      }
      if (uVar19 < uVar24) {
        if (uVar19 != 0) goto LAB_001245b0;
        pvVar9 = (void *)*param_1;
        *param_1 = 0;
        if (pvVar9 != (void *)0x0) {
          operator_delete(pvVar9);
        }
        param_1[1] = 0;
        uVar24 = 0;
      }
      else {
        uVar24 = param_1[1];
      }
    }
    if ((uVar24 & uVar24 - 1) == 0) {
      unaff_x27 = uVar24 - 1 & uVar7;
    }
    else {
      unaff_x27 = uVar7;
      if (uVar24 <= uVar7) {
        uVar19 = 0;
        if (uVar24 != 0) {
          uVar19 = uVar7 / uVar24;
        }
        unaff_x27 = uVar7 - uVar19 * uVar24;
      }
    }
  }
  plVar17 = *(long **)(*param_1 + unaff_x27 * 8);
  if (plVar17 == (long *)0x0) {
    *plVar8 = param_1[2];
    param_1[2] = (long)plVar8;
    *(long **)(*param_1 + unaff_x27 * 8) = plVar12;
    if (*plVar8 != 0) {
      uVar7 = *(ulong *)(*plVar8 + 8);
      if ((uVar24 & uVar24 - 1) == 0) {
        uVar7 = uVar7 & uVar24 - 1;
      }
      else if (uVar24 <= uVar7) {
        uVar19 = 0;
        if (uVar24 != 0) {
          uVar19 = uVar7 / uVar24;
        }
        uVar7 = uVar7 - uVar19 * uVar24;
      }
      plVar17 = (long *)(*param_1 + uVar7 * 8);
      goto LAB_001247b8;
    }
  }
  else {
    *plVar8 = *plVar17;
LAB_001247b8:
    *plVar17 = (long)plVar8;
  }
  param_1[3] = param_1[3] + 1;
LAB_001247c8:
  if (*(long *)(lVar5 + 0x28) == lVar11) {
    return;
  }
LAB_00124880:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00124884  FUN_00124884 =====

void FUN_00124884(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    operator_delete((void *)param_1[9]);
  }
  plVar4 = (long *)param_1[4];
  if (plVar4 == param_1) {
    lVar3 = 4;
  }
  else {
    if (plVar4 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == lVar2) {
        return;
      }
      goto LAB_00124924;
    }
    lVar3 = 5;
    param_1 = plVar4;
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00124900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + lVar3 * 8))();
    return;
  }
LAB_00124924:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00124928  FUN_00124928 =====

void FUN_00124928(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  
  lVar10 = tpidr_el0;
  if (param_2 < 0x21) {
    if (param_2 < 0x11) {
      if (8 < param_2) {
        uVar13 = *(ulong *)((long)param_1 + (param_2 - 8));
        uVar14 = uVar13 + param_2;
        uVar14 = uVar14 >> (param_2 & 0x3f) | uVar14 << 0x40 - (param_2 & 0x3f);
        uVar15 = (uVar14 ^ *param_1) * -0x622015f714c7d297;
        uVar14 = (uVar14 ^ uVar15 >> 0x2f ^ uVar15) * -0x622015f714c7d297;
        uVar13 = (uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297 ^ uVar13;
        goto LAB_00124cdc;
      }
      if (param_2 < 4) {
        uVar13 = 0x9ae16a3b2f90404f;
        if (param_2 != 0) {
          uVar13 = (param_2 | (ulong)*(byte *)((long)param_1 + (param_2 - 1)) << 2) *
                   -0x36b62838af619aa9 ^
                   (ulong)CONCAT11(*(undefined1 *)((long)param_1 + (param_2 >> 1)),(char)*param_1) *
                   -0x651e95c4d06fbfb1;
          uVar13 = (uVar13 ^ uVar13 >> 0x2f) * -0x651e95c4d06fbfb1;
        }
        goto LAB_00124cdc;
      }
      uVar14 = (ulong)*(uint *)((long)param_1 + (param_2 - 4));
      uVar13 = ((uint)((int)*param_1 << 3) + param_2 ^ uVar14) * -0x622015f714c7d297;
      uVar13 = uVar14 ^ uVar13 >> 0x2f ^ uVar13;
    }
    else {
      lVar19 = *(long *)((long)param_1 + (param_2 - 8));
      uVar13 = lVar19 * -0x651e95c4d06fbfb1;
      uVar15 = *param_1 * -0x4b6d499041670d8d - param_1[1];
      uVar14 = param_1[1] ^ 0xc949d7c7509e6557;
      uVar14 = *param_1 * -0x4b6d499041670d8d + param_2 + (uVar14 >> 0x14 | uVar14 << 0x2c) +
               lVar19 * 0x651e95c4d06fbfb1;
      uVar13 = ((uVar13 >> 0x1e | uVar13 << 0x22) + (uVar15 >> 0x2b | uVar15 * 0x200000) +
                *(long *)((long)param_1 + (param_2 - 0x10)) * -0x3c5a37a36834ced9 ^ uVar14) *
               -0x622015f714c7d297;
      uVar13 = uVar14 ^ uVar13 >> 0x2f ^ uVar13;
    }
    lVar16 = -0x622015f714c7d297;
    uVar13 = uVar13 * -0x622015f714c7d297;
  }
  else {
    if (0x40 < param_2) {
      lVar3 = *(long *)((long)param_1 + (param_2 - 0x38));
      lVar17 = *(long *)((long)param_1 + (param_2 - 0x30));
      uVar21 = *(ulong *)((long)param_1 + (param_2 - 0x18));
      lVar12 = *(long *)((long)param_1 + (param_2 - 0x28));
      lVar16 = *(long *)((long)param_1 + (param_2 - 0x10));
      lVar9 = *(long *)((long)param_1 + (param_2 - 8));
      uVar15 = (uVar21 ^ lVar17 + param_2) * -0x622015f714c7d297;
      lVar19 = *(long *)((long)param_1 + (param_2 - 0x40)) + param_2;
      uVar13 = lVar19 + lVar3 + lVar17;
      uVar14 = uVar13 + lVar12;
      puVar11 = param_1 + 4;
      uVar15 = (uVar21 ^ uVar15 >> 0x2f ^ uVar15) * -0x622015f714c7d297;
      uVar18 = (uVar15 ^ uVar15 >> 0x2f) * -0x622015f714c7d297;
      uVar15 = lVar3 + lVar16;
      lVar3 = uVar15 + *(long *)((long)param_1 + (param_2 - 0x20)) + -0x4b6d499041670d8d;
      lVar17 = *param_1 + lVar12 * -0x4b6d499041670d8d;
      uVar21 = lVar3 + uVar21 + lVar16;
      uVar20 = lVar3 + lVar12 + lVar9;
      uVar22 = uVar21 + lVar9;
      uVar8 = lVar12 + lVar19 + uVar18;
      uVar13 = (uVar13 >> 0x2c | uVar13 * 0x100000) + lVar19 + (uVar8 >> 0x15 | uVar8 << 0x2b);
      uVar21 = (uVar21 >> 0x2c | uVar21 * 0x100000) + lVar3 + (uVar20 >> 0x15 | uVar20 << 0x2b);
      lVar19 = -(param_2 - 1 & 0xffffffffffffffc0);
      do {
        puVar4 = puVar11 + -3;
        lVar16 = puVar11[-4] + uVar13 * -0x4b6d499041670d8d;
        puVar1 = puVar11 + 2;
        puVar5 = puVar11 + 3;
        uVar20 = lVar17 + uVar14 + uVar15 + *puVar4;
        lVar19 = lVar19 + 0x40;
        lVar17 = (uVar18 + uVar22 >> 0x21 | (uVar18 + uVar22) * 0x80000000) * -0x4b6d499041670d8d;
        uVar8 = *puVar11;
        puVar6 = puVar11 + 1;
        uVar13 = uVar15 + uVar13 + *puVar1;
        uVar15 = *puVar6 + uVar14 + (uVar13 >> 0x2a | uVar13 * 0x400000) * -0x4b6d499041670d8d;
        puVar2 = puVar11 + -2;
        puVar7 = puVar11 + -1;
        puVar11 = puVar11 + 8;
        lVar3 = lVar17 + uVar21 + uVar8;
        uVar13 = lVar16 + *puVar4 + *puVar2;
        uVar14 = uVar13 + *puVar7;
        uVar18 = (uVar20 >> 0x25 | uVar20 * 0x8000000) * -0x4b6d499041670d8d ^ uVar21;
        uVar21 = lVar3 + *puVar6 + *puVar1;
        uVar20 = lVar16 + uVar22 + *puVar7 + uVar18;
        uVar8 = uVar15 + *puVar2 + lVar3 + *puVar5;
        uVar22 = uVar21 + *puVar5;
        uVar13 = (uVar13 >> 0x2c | uVar13 * 0x100000) + lVar16 + (uVar20 >> 0x15 | uVar20 << 0x2b);
        uVar21 = (uVar21 >> 0x2c | uVar21 * 0x100000) + lVar3 + (uVar8 >> 0x15 | uVar8 << 0x2b);
      } while (lVar19 != 0);
      uVar14 = (uVar22 ^ uVar14) * -0x622015f714c7d297;
      uVar20 = (uVar21 ^ uVar13) * -0x622015f714c7d297;
      uVar13 = (uVar22 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
      uVar14 = (uVar21 ^ uVar20 >> 0x2f ^ uVar20) * -0x622015f714c7d297;
      uVar14 = lVar17 + (uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297;
      uVar13 = (uVar14 ^ uVar18 + (uVar15 ^ uVar15 >> 0x2f) * -0x4b6d499041670d8d +
                         (uVar13 ^ uVar13 >> 0x2f) * -0x622015f714c7d297) * -0x622015f714c7d297;
      uVar13 = (uVar14 ^ uVar13 >> 0x2f ^ uVar13) * -0x622015f714c7d297;
      uVar13 = (uVar13 ^ uVar13 >> 0x2f) * -0x622015f714c7d297;
      goto LAB_00124cdc;
    }
    lVar3 = *(long *)((long)param_1 + (param_2 - 0x10));
    uVar18 = *param_1 + (lVar3 + param_2) * -0x3c5a37a36834ced9;
    uVar8 = param_1[3];
    lVar19 = *(long *)((long)param_1 + (param_2 - 8)) + uVar8;
    uVar13 = *(long *)((long)param_1 + (param_2 - 0x20)) + param_1[2];
    uVar14 = uVar18 + param_1[1];
    uVar15 = uVar14 + param_1[2];
    uVar21 = *(long *)((long)param_1 + (param_2 - 0x18)) + uVar13;
    uVar20 = uVar21 + lVar3;
    uVar22 = lVar19 + uVar13;
    lVar3 = (uVar14 >> 7 | uVar14 << 0x39) + (uVar18 >> 0x25 | uVar18 * 0x8000000) +
            (uVar18 + uVar8 >> 0x34 | (uVar18 + uVar8) * 0x1000) + (uVar15 >> 0x1f | uVar15 << 0x21)
    ;
    lVar16 = -0x651e95c4d06fbfb1;
    uVar13 = (uVar20 + lVar19 + lVar3) * -0x3c5a37a36834ced9 +
             (uVar15 + uVar8 + (uVar13 >> 0x25 | uVar13 * 0x8000000) +
                       (uVar21 >> 7 | uVar21 << 0x39) + (uVar22 >> 0x34 | uVar22 * 0x1000) +
                       (uVar20 >> 0x1f | uVar20 << 0x21)) * -0x651e95c4d06fbfb1;
    uVar13 = lVar3 + (uVar13 ^ uVar13 >> 0x2f) * -0x3c5a37a36834ced9;
  }
  uVar13 = (uVar13 ^ uVar13 >> 0x2f) * lVar16;
LAB_00124cdc:
  if (*(long *)(lVar10 + 0x28) != *(long *)(lVar10 + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar13);
  }
  return;
}


// ===== 00124da0  FUN_00124da0 =====

void FUN_00124da0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  pvVar6 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar6 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar4) {
      return;
    }
    goto LAB_00124e70;
  }
  if (*(char *)(param_1 + 2) != '\0') {
    plVar3 = (long *)((long)pvVar6 + 0x30);
    if ((*(byte *)((long)pvVar6 + 0x68) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar6 + 0x78));
    }
    plVar2 = *(long **)((long)pvVar6 + 0x50);
    if (plVar2 == plVar3) {
      lVar5 = 4;
LAB_00124e2c:
      (**(code **)(*plVar3 + lVar5 * 8))();
    }
    else if (plVar2 != (long *)0x0) {
      lVar5 = 5;
      plVar3 = plVar2;
      goto LAB_00124e2c;
    }
    if ((*(byte *)((long)pvVar6 + 0x10) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar6 + 0x20));
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(pvVar6);
    return;
  }
LAB_00124e70:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00124e74  FUN_00124e74 =====

void FUN_00124e74(void)

{
  long lVar1;
  bad_array_new_length *this;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (bad_array_new_length *)__cxa_allocate_exception(8);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::bad_array_new_length::bad_array_new_length(this);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,PTR_typeinfo_0013dce8,PTR__bad_array_new_length_0013dca8);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00124ecc  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init_copy_ctor_external =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::__init_copy_ctor_external(char const*, unsigned long) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
__init_copy_ctor_external
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (param_2 < 0x17) {
    __dest = this + 1;
    *this = SUB41((int)param_2 << 1,0);
  }
  else {
    if (0xffffffffffffffef < param_2) {
      if (*(long *)(lVar1 + 0x28) == lVar2) {
        FUN_00124f78();
      }
      goto LAB_00124f74;
    }
    __dest = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             operator_new((param_2 | 0xf) + 1);
    *(ulong *)(this + 8) = param_2;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x10) = __dest;
    *(ulong *)this = (param_2 | 0xf) + 2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    memmove(__dest,param_1,param_2 + 1);
    return;
  }
LAB_00124f74:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00124f78  FUN_00124f78 =====

void FUN_00124f78(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_00124fb0("basic_string");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00124fb0  FUN_00124fb0 =====

void FUN_00124fb0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar2 = __cxa_allocate_exception(0x10);
                    /* try { // try from 00124fe0 to 00124fe7 has its CatchHandler @ 00125010 */
  FUN_00125038(uVar2,param_1);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Subroutine does not return */
    __cxa_throw(uVar2,PTR_typeinfo_0013dcd8,PTR__length_error_0013dca0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00125038  FUN_00125038 =====

void FUN_00125038(logic_error *param_1,char *param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    std::logic_error::logic_error(param_1,param_2);
    *(undefined **)param_1 = PTR_vtable_0013dce0 + 0x10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00125090  FUN_00125090 =====

void FUN_00125090(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0013cba0;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete((void *)param_1[3]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001250fc  FUN_001250fc =====

void FUN_001250fc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0013cba0;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00125164  FUN_00125164 =====

undefined8 * FUN_00125164(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x38);
  bVar2 = *(byte *)(param_1 + 8);
  *puVar4 = &PTR_FUN_0013cba0;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 001251c4 to 001251c7 has its CatchHandler @ 00125200 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar4 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    puVar4[5] = *(undefined8 *)(param_1 + 0x28);
    puVar4[4] = uVar6;
    *(undefined4 *)(puVar4 + 6) = uVar1;
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00125228  FUN_00125228 =====

void FUN_00125228(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0013cba0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar4;
    param_2[1] = uVar3;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x30);
    param_2[5] = uVar4;
    param_2[4] = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001252c0  FUN_001252c0 =====

void FUN_001252c0(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00125320  FUN_00125320 =====

void FUN_00125320(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012537c  FUN_0012537c =====

void FUN_0012537c(long param_1,Runtime *param_2,long param_3,long *param_4,ulong *param_5)

{
  long *plVar1;
  int *piVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined ***pppuVar10;
  JSError *pJVar11;
  runtime_error *this;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *local_1c8;
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  long *local_158;
  long *local_150;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined8 *local_c8 [3];
  undefined **local_b0;
  long *plStack_a8;
  long *local_a0;
  undefined ***local_90;
  long local_80;
  
  lVar5 = tpidr_el0;
  local_80 = *(long *)(lVar5 + 0x28);
  lVar12 = *param_4;
  uVar14 = *param_5;
  local_c8[0] = (undefined8 *)
                (**(code **)(*(long *)param_2 + 0x88))(param_2,*(undefined8 *)(param_3 + 8));
                    /* try { // try from 001253e4 to 001253f3 has its CatchHandler @ 00125aa4 */
  (**(code **)(*(long *)param_2 + 0x160))(&local_b0,param_2,local_c8);
  plVar1 = plStack_a8;
  if ((local_b0 == (undefined **)0x0) ||
     (lVar8 = __dynamic_cast(local_b0,PTR_typeinfo_0013dcf8,PTR_typeinfo_0013db48,0xffffffffffffffff
                            ), lVar8 == 0)) {
    lVar8 = 0;
    local_1c8 = (long *)0x0;
    if (plVar1 != (long *)0x0) goto LAB_00125440;
  }
  else if (plVar1 == (long *)0x0) {
    local_1c8 = (long *)0x0;
  }
  else {
    FUN_001229c0(1,plVar1 + 1);
    local_1c8 = plVar1;
LAB_00125440:
    lVar9 = FUN_001222d0(0xffffffffffffffff,plVar1 + 1);
    if (lVar9 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (local_c8[0] != (undefined8 *)0x0) {
    (**(code **)*local_c8[0])();
  }
  puVar6 = PTR_defaultValue_0013dc10;
  if (2 < uVar14 - 1) {
                    /* try { // try from 00125700 to 0012570f has its CatchHandler @ 00125ee0 */
    FUN_00125f9c(&local_b0,*(undefined4 *)(param_1 + 0x30),param_1 + 8,lVar8);
    pJVar11 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0012571c to 0012572f has its CatchHandler @ 00125ec0 */
    std::__ndk1::operator+("`",(basic_string *)&local_b0);
                    /* try { // try from 00125730 to 00125743 has its CatchHandler @ 00125ea8 */
    FUN_0012425c(&local_158,auStack_170,"` expected between ");
                    /* try { // try from 00125744 to 0012574f has its CatchHandler @ 00125e78 */
    std::__ndk1::to_string(1);
                    /* try { // try from 00125750 to 0012575f has its CatchHandler @ 00125e54 */
    FUN_00126328(auStack_140,&local_158,auStack_188);
                    /* try { // try from 00125760 to 00125773 has its CatchHandler @ 00125e30 */
    FUN_0012425c(auStack_128,auStack_140," and ");
                    /* try { // try from 00125774 to 0012577f has its CatchHandler @ 00125e0c */
    std::__ndk1::to_string(3);
                    /* try { // try from 00125780 to 0012578f has its CatchHandler @ 00125ae8 */
    FUN_00126328(auStack_110,auStack_128,auStack_1a0);
                    /* try { // try from 00125790 to 001257a3 has its CatchHandler @ 00125ac4 */
    FUN_0012425c(auStack_f8,auStack_110," arguments, but received ");
                    /* try { // try from 001257a4 to 001257af has its CatchHandler @ 00125a6c */
    std::__ndk1::to_string(uVar14);
                    /* try { // try from 001257b0 to 001257bf has its CatchHandler @ 001259f4 */
    FUN_00126328(auStack_e0,auStack_f8,auStack_1b8);
                    /* try { // try from 001257c0 to 001257d3 has its CatchHandler @ 001259d0 */
    FUN_0012425c(local_c8,auStack_e0,&DAT_0011349f);
                    /* try { // try from 001257d8 to 00125817 has its CatchHandler @ 00125958 */
    facebook::jsi::JSError::JSError(pJVar11,param_2,local_c8);
    if (*(long *)(lVar5 + 0x28) == local_80) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar11,PTR_typeinfo_0013dcf0,PTR__JSError_0013dcb0);
    }
    goto LAB_00125f08;
  }
  pcVar13 = *(code **)(param_1 + 0x20);
  uVar3 = *(ulong *)(param_1 + 0x28);
  if (((*PTR_defaultValue_0013dc18 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_defaultValue_0013dc18), iVar7 != 0)) {
    *(undefined4 *)puVar6 = 0;
    __cxa_atexit(PTR__Value_0013dcb8,puVar6,&PTR_LOOP_0013c2c0);
    __cxa_guard_release(PTR_defaultValue_0013dc18);
  }
  plVar1 = (long *)(lVar8 + ((long)uVar3 >> 1));
  if ((uVar3 & 1) != 0) {
    pcVar13 = *(code **)(pcVar13 + *plVar1);
  }
                    /* try { // try from 001254c0 to 00125537 has its CatchHandler @ 00125b0c */
  uVar15 = facebook::jsi::Value::asNumber();
  piVar2 = (int *)(lVar12 + 0x10);
  if (uVar14 < 2) {
    piVar2 = (int *)puVar6;
  }
  iVar7 = *piVar2;
  if (iVar7 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = facebook::jsi::Value::asNumber();
  }
  piVar2 = (int *)(lVar12 + 0x20);
  if (uVar14 < 3) {
    piVar2 = (int *)puVar6;
  }
  iVar4 = *piVar2;
  if (iVar4 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = facebook::jsi::Value::asNumber();
  }
  (*pcVar13)(&local_158,uVar15,plVar1,uVar16,iVar7 != 0,uVar17,iVar4 != 0);
  plVar1 = local_150;
  iVar7 = (int)local_158[10];
  if (iVar7 == 2) {
                    /* try { // try from 001255dc to 001255e7 has its CatchHandler @ 00125a90 */
    FUN_00126f94(&local_b0,param_2);
                    /* try { // try from 001255e8 to 001255f7 has its CatchHandler @ 00125a18 */
    margelo::nitro::CommonGlobals::Promise::rejected(param_2,(Value *)&local_b0);
LAB_001255f8:
    facebook::jsi::Value::~Value((Value *)&local_b0);
  }
  else {
    if (iVar7 == 1) {
                    /* try { // try from 001255bc to 001255c7 has its CatchHandler @ 00125a90 */
      FUN_00126704(&local_b0,param_2);
                    /* try { // try from 001255c8 to 001255d7 has its CatchHandler @ 00125a1c */
      margelo::nitro::CommonGlobals::Promise::resolved(param_2,(Value *)&local_b0);
      goto LAB_001255f8;
    }
    if (iVar7 != 0) {
                    /* try { // try from 00125858 to 0012586b has its CatchHandler @ 00125a90 */
      FUN_0012739c(&local_b0,PTR_typeinfo_name_0013dc68,1);
      this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00125878 to 0012588b has its CatchHandler @ 00125934 */
      std::__ndk1::operator+("Promise<",(basic_string *)&local_b0);
                    /* try { // try from 0012588c to 0012589f has its CatchHandler @ 00125918 */
      FUN_0012425c(local_c8,auStack_e0,"> has invalid state!");
                    /* try { // try from 001258a4 to 001258df has its CatchHandler @ 001258e0 */
      std::runtime_error::runtime_error(this,(basic_string *)local_c8);
      if (*(long *)(lVar5 + 0x28) == local_80) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,PTR_typeinfo_0013dcd0,PTR__runtime_error_0013dc98);
      }
      goto LAB_00125f08;
    }
    if (local_150 == (long *)0x0) {
      local_90 = &local_b0;
      local_b0 = &PTR_FUN_0013cc10;
      plStack_a8 = local_158;
      local_a0 = (long *)0x0;
    }
    else {
      FUN_001229c0(1,local_150 + 1);
      local_b0 = &PTR_FUN_0013cc10;
      plStack_a8 = local_158;
      local_a0 = plVar1;
      FUN_001229c0(1,plVar1 + 1);
      local_90 = &local_b0;
      lVar12 = FUN_001222d0(0xffffffffffffffff,plVar1 + 1);
      if (lVar12 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
                    /* try { // try from 00125624 to 00125637 has its CatchHandler @ 00125a30 */
    margelo::nitro::CommonGlobals::Promise::callConstructor(param_2,(function *)&local_b0);
    if (local_90 == &local_b0) {
      lVar12 = 4;
      pppuVar10 = &local_b0;
LAB_00125658:
      (*(code *)(*pppuVar10)[lVar12])();
    }
    else if (local_90 != (undefined ***)0x0) {
      lVar12 = 5;
      pppuVar10 = local_90;
      goto LAB_00125658;
    }
  }
  if ((local_150 != (long *)0x0) &&
     (lVar12 = FUN_001222d0(0xffffffffffffffff,local_150 + 1), lVar12 == 0)) {
    (**(code **)(*local_150 + 0x10))(local_150);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if ((local_1c8 != (long *)0x0) &&
     (lVar12 = FUN_001222d0(0xffffffffffffffff,local_1c8 + 1), lVar12 == 0)) {
    (**(code **)(*local_1c8 + 0x10))(local_1c8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar5 + 0x28) == local_80) {
    return;
  }
LAB_00125f08:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00125f0c  FUN_00125f0c =====

void FUN_00125f0c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0013dc70) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00125f5c  FUN_00125f5c =====

undefined * FUN_00125f5c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_0013dc78;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00125f9c  FUN_00125f9c =====

void FUN_00125f9c(undefined8 *param_1,int param_2,byte *param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  void *pvVar4;
  byte *pbVar5;
  long lVar6;
  byte bVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  undefined8 uVar10;
  void *pvVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uStack_a0;
  ulong uStack_98;
  void *pvStack_90;
  byte abStack_88 [8];
  size_t sStack_80;
  void *pvStack_78;
  ulong uStack_70;
  ulong uStack_68;
  void *pvStack_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  if (param_4 == 0) {
    operator_new(0x50);
    FUN_00137a48(&USHORT_00114000);
    return;
  }
  margelo::nitro::HybridObject::getName();
  bVar7 = abStack_88[0];
  if (param_2 == 0) {
    sVar3 = (ulong)(abStack_88[0] >> 1);
    if ((abStack_88[0] & 1) != 0) {
      sVar3 = sStack_80;
    }
    uVar1 = sVar3 + 1;
    if (0xffffffffffffffef < uVar1) goto LAB_00126288;
    if (uVar1 < 0x17) {
      uStack_98 = 0;
      pvVar11 = (void *)((ulong)&uStack_a0 | 1);
      pvStack_90 = (void *)0x0;
      uStack_a0 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_0012618c;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
      pvVar11 = operator_new(uVar2);
      uStack_a0 = uVar2 | 1;
      uStack_98 = uVar1;
      pvStack_90 = pvVar11;
LAB_0012618c:
      pvVar4 = (void *)((ulong)abStack_88 | 1);
      if ((bVar7 & 1) != 0) {
        pvVar4 = pvStack_78;
      }
      memmove(pvVar11,pvVar4,sVar3);
    }
    *(undefined2 *)((long)pvVar11 + sVar3) = 0x2e;
    pbVar5 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar5 = param_3 + 1;
    }
    puVar9 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&uStack_a0,(ulong)pbVar5);
    pvStack_60 = (void *)puVar9[2];
    uStack_68 = puVar9[1];
    uStack_70 = *puVar9;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    puVar8 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       ((char *)&uStack_70,0x11364e);
    uVar10 = puVar8[2];
    uVar13 = puVar8[1];
    uVar12 = *puVar8;
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    param_1[1] = uVar13;
    *param_1 = uVar12;
    param_1[2] = uVar10;
    pvVar11 = pvStack_90;
    uVar1 = uStack_a0;
    if ((uStack_70 & 1) != 0) {
      operator_delete(pvStack_60);
      pvVar11 = pvStack_90;
      uVar1 = uStack_a0;
    }
  }
  else {
    sVar3 = (ulong)(abStack_88[0] >> 1);
    if ((abStack_88[0] & 1) != 0) {
      sVar3 = sStack_80;
    }
    uVar1 = sVar3 + 1;
    if (0xffffffffffffffef < uVar1) {
      if (*(long *)(lVar6 + 0x28) != local_58) goto LAB_00126324;
      FUN_00124f78();
LAB_00126288:
      if (*(long *)(lVar6 + 0x28) == local_58) {
        uVar10 = FUN_00124f78();
        if ((uStack_70 & 1) != 0) {
          operator_delete(pvStack_60);
        }
        if ((uStack_a0 & 1) != 0) {
          operator_delete(pvStack_90);
        }
        if ((abStack_88[0] & 1) != 0) {
          operator_delete(pvStack_78);
        }
        if (*(long *)(lVar6 + 0x28) == local_58) {
          FUN_0011e604(uVar10);
        }
      }
      goto LAB_00126324;
    }
    if (uVar1 < 0x17) {
      uStack_68 = 0;
      pvVar11 = (void *)((ulong)&uStack_70 | 1);
      pvStack_60 = (void *)0x0;
      uStack_70 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_001260fc;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
      pvVar11 = operator_new(uVar2);
      uStack_70 = uVar2 | 1;
      uStack_68 = uVar1;
      pvStack_60 = pvVar11;
LAB_001260fc:
      pvVar4 = (void *)((ulong)abStack_88 | 1);
      if ((bVar7 & 1) != 0) {
        pvVar4 = pvStack_78;
      }
      memmove(pvVar11,pvVar4,sVar3);
    }
    *(undefined2 *)((long)pvVar11 + sVar3) = 0x2e;
    pbVar5 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar5 = param_3 + 1;
    }
    puVar8 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       ((char *)&uStack_70,(ulong)pbVar5);
    uVar10 = puVar8[2];
    uVar13 = puVar8[1];
    uVar12 = *puVar8;
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    param_1[1] = uVar13;
    *param_1 = uVar12;
    param_1[2] = uVar10;
    pvVar11 = pvStack_60;
    uVar1 = uStack_70;
  }
  if ((uVar1 & 1) != 0) {
    operator_delete(pvVar11);
  }
  if ((abStack_88[0] & 1) != 0) {
    operator_delete(pvStack_78);
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
LAB_00126324:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00126004  FUN_00126004 =====

void FUN_00126004(undefined1 param_1 [16],undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  void *pvVar4;
  byte *pbVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *in_x9;
  undefined8 *unaff_x19;
  byte *unaff_x20;
  int unaff_w21;
  void *pvVar9;
  long unaff_x24;
  long unaff_x29;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong in_stack_00000000;
  ulong in_stack_00000008;
  void *in_stack_00000010;
  byte in_stack_00000018;
  size_t in_stack_00000020;
  void *in_stack_00000028;
  
  *(undefined8 **)(unaff_x29 + -0x10) = param_2;
  *(undefined1 *)((long)param_2 + 0x4c) = 0;
  uVar12 = in_x9[5];
  uVar11 = in_x9[4];
  uVar14 = in_x9[7];
  uVar13 = in_x9[6];
  *(long *)(unaff_x29 + -0x18) = param_1._8_8_;
  *(long *)(unaff_x29 + -0x20) = param_1._0_8_;
  uVar10 = *(undefined8 *)((long)in_x9 + 0x44);
  uVar8 = *(undefined8 *)((long)in_x9 + 0x3c);
  param_2[5] = uVar12;
  param_2[4] = uVar11;
  param_2[7] = uVar14;
  param_2[6] = uVar13;
  *(undefined8 *)((long)param_2 + 0x44) = uVar10;
  *(undefined8 *)((long)param_2 + 0x3c) = uVar8;
  uVar8 = *in_x9;
  uVar11 = in_x9[3];
  uVar10 = in_x9[2];
  param_2[1] = in_x9[1];
  *param_2 = uVar8;
  param_2[3] = uVar11;
  param_2[2] = uVar10;
                    /* try { // try from 00126028 to 00126037 has its CatchHandler @ 001262c8 */
  margelo::nitro::TypeInfo::demangleName((basic_string *)(unaff_x29 + -0x20),true);
  if ((*(byte *)(unaff_x29 + -0x20) & 1) != 0) {
    operator_delete(*(void **)(unaff_x29 + -0x10));
  }
  bVar6 = in_stack_00000018;
  if (unaff_w21 == 0) {
    sVar3 = (ulong)(in_stack_00000018 >> 1);
    if ((in_stack_00000018 & 1) != 0) {
      sVar3 = in_stack_00000020;
    }
    uVar1 = sVar3 + 1;
    if (0xffffffffffffffef < uVar1) goto LAB_00126288;
    if (uVar1 < 0x17) {
      in_stack_00000008 = 0;
      pvVar9 = (void *)((ulong)&stack0x00000000 | 1);
      in_stack_00000010 = (void *)0x0;
      in_stack_00000000 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_0012618c;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 00126174 to 0012617b has its CatchHandler @ 001262dc */
      pvVar9 = operator_new(uVar2);
      in_stack_00000000 = uVar2 | 1;
      in_stack_00000008 = uVar1;
      in_stack_00000010 = pvVar9;
LAB_0012618c:
      pvVar4 = (void *)((ulong)&stack0x00000018 | 1);
      if ((bVar6 & 1) != 0) {
        pvVar4 = in_stack_00000028;
      }
      memmove(pvVar9,pvVar4,sVar3);
    }
    *(undefined2 *)((long)pvVar9 + sVar3) = 0x2e;
    pbVar5 = *(byte **)(unaff_x20 + 0x10);
    if ((*unaff_x20 & 1) == 0) {
      pbVar5 = unaff_x20 + 1;
    }
                    /* try { // try from 001261cc to 001261d3 has its CatchHandler @ 001262b4 */
    puVar7 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       ((char *)&stack0x00000000,(ulong)pbVar5);
    uVar10 = puVar7[1];
    uVar8 = *puVar7;
    *(undefined8 *)(unaff_x29 + -0x10) = puVar7[2];
    *(undefined8 *)(unaff_x29 + -0x18) = uVar10;
    *(undefined8 *)(unaff_x29 + -0x20) = uVar8;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
                    /* try { // try from 001261ec to 001261ff has its CatchHandler @ 0012629c */
    puVar7 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       ((char *)(unaff_x29 + -0x20),0x11364e);
    uVar8 = puVar7[2];
    uVar11 = puVar7[1];
    uVar10 = *puVar7;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    bVar6 = *(byte *)(unaff_x29 + -0x20);
    unaff_x19[1] = uVar11;
    *unaff_x19 = uVar10;
    unaff_x19[2] = uVar8;
    if ((bVar6 & 1) != 0) {
      operator_delete(*(void **)(unaff_x29 + -0x10));
    }
    pvVar9 = in_stack_00000010;
    if ((in_stack_00000000 & 1) != 0) goto LAB_00126234;
  }
  else {
    sVar3 = (ulong)(in_stack_00000018 >> 1);
    if ((in_stack_00000018 & 1) != 0) {
      sVar3 = in_stack_00000020;
    }
    uVar1 = sVar3 + 1;
    if (0xffffffffffffffef < uVar1) {
      if (*(long *)(unaff_x24 + 0x28) != *(long *)(unaff_x29 + -8)) goto LAB_00126324;
                    /* try { // try from 00126284 to 00126287 has its CatchHandler @ 001262f8 */
      FUN_00124f78();
LAB_00126288:
      if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* try { // try from 00126298 to 0012629b has its CatchHandler @ 001262dc */
        uVar8 = FUN_00124f78();
                    /* catch() { ... } // from try @ 001261ec with catch @ 0012629c */
        if ((*(byte *)(unaff_x29 + -0x20) & 1) != 0) {
          operator_delete(*(void **)(unaff_x29 + -0x10));
        }
        if ((in_stack_00000000 & 1) != 0) {
          operator_delete(in_stack_00000010);
        }
        if ((in_stack_00000018 & 1) != 0) {
          operator_delete(in_stack_00000028);
        }
        if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
          FUN_0011e604(uVar8);
        }
      }
      goto LAB_00126324;
    }
    if (uVar1 < 0x17) {
      *(undefined8 *)(unaff_x29 + -0x20) = 0;
      *(undefined8 *)(unaff_x29 + -0x18) = 0;
      pvVar9 = (void *)(unaff_x29 - 0x20U | 1);
      *(undefined8 *)(unaff_x29 + -0x10) = 0;
      *(char *)(unaff_x29 + -0x20) = (char)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_001260fc;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 001260e4 to 001260eb has its CatchHandler @ 001262f8 */
      pvVar9 = operator_new(uVar2);
      *(ulong *)(unaff_x29 + -0x18) = uVar1;
      *(void **)(unaff_x29 + -0x10) = pvVar9;
      *(ulong *)(unaff_x29 + -0x20) = uVar2 | 1;
LAB_001260fc:
      pvVar4 = (void *)((ulong)&stack0x00000018 | 1);
      if ((bVar6 & 1) != 0) {
        pvVar4 = in_stack_00000028;
      }
      memmove(pvVar9,pvVar4,sVar3);
    }
    *(undefined2 *)((long)pvVar9 + sVar3) = 0x2e;
    pbVar5 = *(byte **)(unaff_x20 + 0x10);
    if ((*unaff_x20 & 1) == 0) {
      pbVar5 = unaff_x20 + 1;
    }
                    /* try { // try from 0012613c to 00126143 has its CatchHandler @ 001262e0 */
    puVar7 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       ((char *)(unaff_x29 + -0x20),(ulong)pbVar5);
    uVar8 = puVar7[2];
    uVar11 = puVar7[1];
    uVar10 = *puVar7;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    bVar6 = *(byte *)(unaff_x29 + -0x20);
    unaff_x19[1] = uVar11;
    *unaff_x19 = uVar10;
    unaff_x19[2] = uVar8;
    if ((bVar6 & 1) != 0) {
      pvVar9 = *(void **)(unaff_x29 + -0x10);
LAB_00126234:
      operator_delete(pvVar9);
    }
  }
  if ((in_stack_00000018 & 1) != 0) {
    operator_delete(in_stack_00000028);
  }
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_00126324:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00126328  FUN_00126328 =====

void FUN_00126328(undefined8 *param_1,char *param_2,byte *param_3)

{
  byte *pbVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  pbVar1 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar1 = param_3 + 1;
  }
  puVar3 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     (param_2,(ulong)pbVar1);
  uVar6 = *puVar3;
  uVar4 = puVar3[2];
  param_1[1] = puVar3[1];
  *param_1 = uVar6;
  param_1[2] = uVar4;
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001263a8  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc =====

void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc
               (long *param_1,char *param_2)

{
  long lVar1;
  size_t __n;
  long lVar2;
  void *__dest;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      FUN_00124f78();
    }
    goto LAB_0012646c;
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n != 0) goto LAB_0012641c;
  }
  else {
    __dest = operator_new((__n | 0xf) + 1);
    param_1[1] = __n;
    param_1[2] = (long)__dest;
    *param_1 = (__n | 0xf) + 2;
LAB_0012641c:
    memmove(__dest,param_2,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
LAB_0012646c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00126470  FUN_00126470 =====

void FUN_00126470(long *param_1,byte *param_2)

{
  ulong uVar1;
  size_t __n;
  byte bVar2;
  long lVar3;
  void *__dest;
  long lVar4;
  byte *__src;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  bVar2 = *param_2;
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  uVar1 = __n + 2;
  if (0xffffffffffffffef < uVar1) {
    if (*(long *)(lVar3 + 0x28) == lVar4) {
      FUN_00124f78();
    }
    goto LAB_00126568;
  }
  if (uVar1 < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(char *)param_1 = (char)((int)uVar1 << 1);
    if (__n != 0) goto LAB_00126500;
  }
  else {
    __dest = operator_new((uVar1 | 0xf) + 1);
    param_1[1] = uVar1;
    param_1[2] = (long)__dest;
    *param_1 = (uVar1 | 0xf) + 2;
LAB_00126500:
    __src = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      __src = param_2 + 1;
    }
    memmove(__dest,__src,__n);
  }
  *(undefined2 *)((long)__dest + __n) = 0x203a;
  *(undefined1 *)((undefined2 *)((long)__dest + __n) + 1) = 0;
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
LAB_00126568:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012656c  FUN_0012656c =====

void FUN_0012656c(undefined8 *param_1,char *param_2,byte *param_3)

{
  byte *pbVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  pbVar1 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar1 = param_3 + 1;
  }
  puVar3 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     (param_2,(ulong)pbVar1);
  uVar6 = *puVar3;
  uVar4 = puVar3[2];
  param_1[1] = puVar3[1];
  *param_1 = uVar6;
  param_1[2] = uVar4;
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001265ec  FUN_001265ec =====

void FUN_001265ec(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_001222d0(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
     ) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00126678  FUN_00126678 =====

void FUN_00126678(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_001222d0(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
     ) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00126704  FUN_00126704 =====

void FUN_00126704(undefined4 *param_1,Runtime *param_2,undefined1 *param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  logic_error *this;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  undefined4 local_c8 [2];
  undefined8 local_c0;
  basic_string local_b8;
  undefined4 local_b7;
  undefined2 local_b3;
  undefined1 local_b1;
  void *local_a8;
  undefined8 local_a0;
  undefined8 local_98 [3];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  uint local_60;
  char cStack_5c;
  undefined2 uStack_5b;
  char cStack_59;
  char cStack_58;
  char cStack_57;
  char cStack_56;
  char cStack_55;
  char cStack_54;
  char cStack_53;
  char cStack_52;
  char cStack_51;
  char cStack_50;
  char cStack_4f;
  undefined2 uStack_4e;
  char cStack_4c;
  char cStack_4b;
  char cStack_4a;
  undefined1 uStack_49;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  (**(code **)(*(long *)param_2 + 0x130))(&local_a0,param_2);
  cStack_57 = 'l';
  cStack_56 = 'e';
  local_60._1_3_ = (undefined3)s_isEligible_001133af._0_8_;
  local_60 = CONCAT31(local_60._1_3_,0x14);
  cStack_5c = SUB81(s_isEligible_001133af._0_8_,3);
  uStack_5b = SUB82(s_isEligible_001133af._0_8_,4);
  cStack_59 = SUB81(s_isEligible_001133af._0_8_,6);
  cStack_58 = SUB81(s_isEligible_001133af._0_8_,7);
  cStack_55 = '\0';
                    /* try { // try from 0012676c to 00126777 has its CatchHandler @ 00126f50 */
  uVar8 = margelo::nitro::PropNameIDCache::get(param_2,(basic_string *)&local_60);
  local_80 = CONCAT44(local_80._4_4_,2);
  uStack_78 = CONCAT71(uStack_78._1_7_,*param_3);
                    /* try { // try from 00126794 to 001267a3 has its CatchHandler @ 00126f40 */
  (**(code **)(*(long *)param_2 + 0x1b0))(param_2,&local_a0,uVar8,&local_80);
  facebook::jsi::Value::~Value((Value *)&local_80);
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,
                                                       CONCAT14(cStack_4c,
                                                                CONCAT22(uStack_4e,
                                                                         CONCAT11(cStack_4f,
                                                                                  cStack_50)))))));
  }
  local_b1 = 0;
  local_b8 = (basic_string)0xc;
  local_b7 = 0x74617473;
  local_b3 = 0x7375;
                    /* try { // try from 001267dc to 001267e7 has its CatchHandler @ 00126f2c */
  uVar8 = margelo::nitro::PropNameIDCache::get(param_2,&local_b8);
  if (param_3[8] == '\0') {
    local_c8[0] = 0;
  }
  else {
    iVar2 = *(int *)(param_3 + 4);
    if (iVar2 < 5) {
      if (iVar2 < 2) {
        if (iVar2 == 0) {
          cStack_4f = 't';
          uStack_4e = 0x6f68;
          cStack_4c = 'd';
          cStack_57 = (char)s_checkedByOtherMethod_001139be._8_8_;
          cStack_56 = SUB81(s_checkedByOtherMethod_001139be._8_8_,1);
          cStack_55 = SUB81(s_checkedByOtherMethod_001139be._8_8_,2);
          cStack_54 = SUB81(s_checkedByOtherMethod_001139be._8_8_,3);
          cStack_53 = SUB81(s_checkedByOtherMethod_001139be._8_8_,4);
          cStack_52 = SUB81(s_checkedByOtherMethod_001139be._8_8_,5);
          cStack_51 = SUB81(s_checkedByOtherMethod_001139be._8_8_,6);
          cStack_50 = SUB81(s_checkedByOtherMethod_001139be._8_8_,7);
          local_60._1_3_ = (undefined3)s_checkedByOtherMethod_001139be._0_8_;
          local_60 = CONCAT31(local_60._1_3_,0x28);
          cStack_5c = SUB81(s_checkedByOtherMethod_001139be._0_8_,3);
          uStack_5b = SUB82(s_checkedByOtherMethod_001139be._0_8_,4);
          cStack_59 = SUB81(s_checkedByOtherMethod_001139be._0_8_,6);
          cStack_58 = SUB81(s_checkedByOtherMethod_001139be._0_8_,7);
          cStack_4b = '\0';
                    /* try { // try from 001269bc to 001269cf has its CatchHandler @ 00126ee4 */
          (**(code **)(*(long *)param_2 + 0x110))(&local_80,param_2,(ulong)&local_60 | 1,0x14);
        }
        else {
          if (iVar2 != 1) {
LAB_00126d78:
            this = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00126d88 to 00126d93 has its CatchHandler @ 00126ea4 */
            std::__ndk1::to_string(iVar2);
                    /* try { // try from 00126d94 to 00126dab has its CatchHandler @ 00126e8c */
            puVar10 = (undefined8 *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::insert((ulong)local_98,(char *)0x0,0x11335f);
            local_70 = puVar10[2];
            uStack_78 = puVar10[1];
            local_80 = *puVar10;
            puVar10[1] = 0;
            puVar10[2] = 0;
            *puVar10 = 0;
                    /* try { // try from 00126dc4 to 00126dd7 has its CatchHandler @ 00126e5c */
            FUN_0012425c(&local_60,&local_80,&DAT_0011349f);
                    /* try { // try from 00126ddc to 00126e23 has its CatchHandler @ 00126e24 */
            std::logic_error::logic_error(this,(basic_string *)&local_60);
            *(undefined **)this = PTR_vtable_0013dd08 + 0x10;
            if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
              __cxa_throw(this,PTR_typeinfo_0013dd00,PTR__invalid_argument_0013dcc8);
            }
            goto LAB_00126f90;
          }
          cStack_4f = 'k';
          uStack_4e = 0x6465;
          cStack_57 = (char)s_governmentIDChecked_00112fe6._8_8_;
          cStack_56 = SUB81(s_governmentIDChecked_00112fe6._8_8_,1);
          cStack_55 = SUB81(s_governmentIDChecked_00112fe6._8_8_,2);
          cStack_54 = SUB81(s_governmentIDChecked_00112fe6._8_8_,3);
          cStack_53 = SUB81(s_governmentIDChecked_00112fe6._8_8_,4);
          cStack_52 = SUB81(s_governmentIDChecked_00112fe6._8_8_,5);
          cStack_51 = SUB81(s_governmentIDChecked_00112fe6._8_8_,6);
          cStack_50 = SUB81(s_governmentIDChecked_00112fe6._8_8_,7);
          local_60._1_3_ = (undefined3)s_governmentIDChecked_00112fe6._0_8_;
          local_60 = CONCAT31(local_60._1_3_,0x26);
          cStack_5c = SUB81(s_governmentIDChecked_00112fe6._0_8_,3);
          uStack_5b = SUB82(s_governmentIDChecked_00112fe6._0_8_,4);
          cStack_59 = SUB81(s_governmentIDChecked_00112fe6._0_8_,6);
          cStack_58 = SUB81(s_governmentIDChecked_00112fe6._0_8_,7);
          cStack_4c = '\0';
                    /* try { // try from 00126918 to 0012692b has its CatchHandler @ 00126edc */
          (**(code **)(*(long *)param_2 + 0x110))(&local_80,param_2,(ulong)&local_60 | 1,0x13);
        }
        goto LAB_00126b44;
      }
      if (iVar2 == 2) {
                    /* try { // try from 00126aa0 to 00126aa7 has its CatchHandler @ 00126efc */
        pcVar9 = (char *)operator_new(0x20);
        pcVar9[0x1c] = '\0';
        uVar7 = s_guardianCheckedByOtherMethod_0011380a._20_8_;
        uVar6 = s_guardianCheckedByOtherMethod_0011380a._0_8_;
        uVar5 = CONCAT44(s_guardianCheckedByOtherMethod_0011380a._16_4_,
                         s_guardianCheckedByOtherMethod_0011380a._12_4_);
        lVar12 = *(long *)param_2;
        *(ulong *)(pcVar9 + 8) =
             CONCAT44(s_guardianCheckedByOtherMethod_0011380a._12_4_,
                      s_guardianCheckedByOtherMethod_0011380a._8_4_);
        *(undefined8 *)pcVar9 = uVar6;
        *(undefined8 *)(pcVar9 + 0x14) = uVar7;
        *(undefined8 *)(pcVar9 + 0xc) = uVar5;
                    /* try { // try from 00126ad0 to 00126ae3 has its CatchHandler @ 00126eb4 */
        (**(code **)(lVar12 + 0x110))(&local_60,param_2,pcVar9,0x1c);
      }
      else {
        if (iVar2 == 3) {
          cStack_4f = '\0';
          cStack_57 = (char)s_guardianDeclared_00113654._8_8_;
          cStack_56 = SUB81(s_guardianDeclared_00113654._8_8_,1);
          cStack_55 = SUB81(s_guardianDeclared_00113654._8_8_,2);
          cStack_54 = SUB81(s_guardianDeclared_00113654._8_8_,3);
          cStack_53 = SUB81(s_guardianDeclared_00113654._8_8_,4);
          cStack_52 = SUB81(s_guardianDeclared_00113654._8_8_,5);
          cStack_51 = SUB81(s_guardianDeclared_00113654._8_8_,6);
          cStack_50 = SUB81(s_guardianDeclared_00113654._8_8_,7);
          local_60._1_3_ = (undefined3)s_guardianDeclared_00113654._0_8_;
          local_60 = CONCAT31(local_60._1_3_,0x20);
          cStack_5c = SUB81(s_guardianDeclared_00113654._0_8_,3);
          uStack_5b = SUB82(s_guardianDeclared_00113654._0_8_,4);
          cStack_59 = SUB81(s_guardianDeclared_00113654._0_8_,6);
          cStack_58 = SUB81(s_guardianDeclared_00113654._0_8_,7);
                    /* try { // try from 00126a44 to 00126a57 has its CatchHandler @ 00126ed4 */
          (**(code **)(*(long *)param_2 + 0x110))(&local_80,param_2,(ulong)&local_60 | 1,0x10);
          goto LAB_00126b44;
        }
        if (iVar2 != 4) goto LAB_00126d78;
                    /* try { // try from 00126820 to 00126827 has its CatchHandler @ 00126efc */
        pcVar9 = (char *)operator_new(0x20);
        pcVar9[0x1b] = '\0';
        uVar7 = s_guardianGovernmentIDChecked_00113a49._19_8_;
        uVar6 = s_guardianGovernmentIDChecked_00113a49._0_8_;
        uVar5 = CONCAT35(s_guardianGovernmentIDChecked_00113a49._16_3_,
                         s_guardianGovernmentIDChecked_00113a49._11_5_);
        lVar12 = *(long *)param_2;
        *(ulong *)(pcVar9 + 8) =
             CONCAT53(s_guardianGovernmentIDChecked_00113a49._11_5_,
                      s_guardianGovernmentIDChecked_00113a49._8_3_);
        *(undefined8 *)pcVar9 = uVar6;
        *(undefined8 *)(pcVar9 + 0x13) = uVar7;
        *(undefined8 *)(pcVar9 + 0xb) = uVar5;
                    /* try { // try from 00126850 to 00126863 has its CatchHandler @ 00126eb8 */
        (**(code **)(lVar12 + 0x110))(&local_60,param_2,pcVar9,0x1b);
      }
      local_c0 = CONCAT17(cStack_59,CONCAT25(uStack_5b,CONCAT14(cStack_5c,local_60)));
    }
    else {
      if (iVar2 < 7) {
        if (iVar2 == 5) {
          uStack_49 = 0;
          cStack_57 = (char)s_guardianPaymentChecked_00112f87._8_6_;
          cStack_56 = SUB61(s_guardianPaymentChecked_00112f87._8_6_,1);
          cStack_55 = SUB61(s_guardianPaymentChecked_00112f87._8_6_,2);
          cStack_54 = SUB61(s_guardianPaymentChecked_00112f87._8_6_,3);
          cStack_53 = SUB61(s_guardianPaymentChecked_00112f87._8_6_,4);
          cStack_52 = SUB61(s_guardianPaymentChecked_00112f87._8_6_,5);
          local_60._1_3_ = (undefined3)s_guardianPaymentChecked_00112f87._0_8_;
          local_60 = CONCAT31(local_60._1_3_,0x2c);
          cStack_5c = SUB81(s_guardianPaymentChecked_00112f87._0_8_,3);
          uStack_5b = SUB82(s_guardianPaymentChecked_00112f87._0_8_,4);
          cStack_59 = SUB81(s_guardianPaymentChecked_00112f87._0_8_,6);
          cStack_58 = SUB81(s_guardianPaymentChecked_00112f87._0_8_,7);
          cStack_51 = (char)s_guardianPaymentChecked_00112f87._14_2_;
          cStack_50 = SUB21(s_guardianPaymentChecked_00112f87._14_2_,1);
          cStack_4f = (char)s_guardianPaymentChecked_00112f87._16_6_;
          uStack_4e = SUB62(s_guardianPaymentChecked_00112f87._16_6_,1);
          cStack_4c = SUB61(s_guardianPaymentChecked_00112f87._16_6_,3);
          cStack_4b = SUB61(s_guardianPaymentChecked_00112f87._16_6_,4);
          cStack_4a = SUB61(s_guardianPaymentChecked_00112f87._16_6_,5);
                    /* try { // try from 00126a04 to 00126a17 has its CatchHandler @ 00126ee0 */
          (**(code **)(*(long *)param_2 + 0x110))(&local_80,param_2,(ulong)&local_60 | 1,0x16);
        }
        else {
          if (iVar2 != 6) goto LAB_00126d78;
          cStack_51 = '\0';
          local_60._1_3_ = (undefined3)s_paymentChecked_00113435._0_6_;
          local_60 = CONCAT31(local_60._1_3_,0x1c);
          cStack_5c = SUB61(s_paymentChecked_00113435._0_6_,3);
          uStack_5b = SUB62(s_paymentChecked_00113435._0_6_,4);
          cStack_59 = (char)s_paymentChecked_00113435._6_2_;
          cStack_58 = SUB21(s_paymentChecked_00113435._6_2_,1);
          cStack_57 = (char)s_paymentChecked_00113435._8_6_;
          cStack_56 = SUB61(s_paymentChecked_00113435._8_6_,1);
          cStack_55 = SUB61(s_paymentChecked_00113435._8_6_,2);
          cStack_54 = SUB61(s_paymentChecked_00113435._8_6_,3);
          cStack_53 = SUB61(s_paymentChecked_00113435._8_6_,4);
          cStack_52 = SUB61(s_paymentChecked_00113435._8_6_,5);
                    /* try { // try from 00126970 to 00126983 has its CatchHandler @ 00126ed8 */
          (**(code **)(*(long *)param_2 + 0x110))(&local_80,param_2,(ulong)&local_60 | 1,0xe);
        }
      }
      else if (iVar2 == 7) {
        cStack_53 = '\0';
        cStack_57 = 'a';
        cStack_56 = 'r';
        cStack_55 = 'e';
        cStack_54 = 'd';
        local_60._1_3_ = (undefined3)s_selfDeclared_00113243._0_8_;
        local_60 = CONCAT31(local_60._1_3_,0x18);
        cStack_5c = SUB81(s_selfDeclared_00113243._0_8_,3);
        uStack_5b = SUB82(s_selfDeclared_00113243._0_8_,4);
        cStack_59 = SUB81(s_selfDeclared_00113243._0_8_,6);
        cStack_58 = SUB81(s_selfDeclared_00113243._0_8_,7);
                    /* try { // try from 00126b30 to 00126b43 has its CatchHandler @ 00126ec8 */
        (**(code **)(*(long *)param_2 + 0x110))(&local_80,param_2,(ulong)&local_60 | 1,0xc);
      }
      else if (iVar2 == 8) {
        cStack_57 = '\0';
        local_60 = 0x63656410;
        cStack_5c = 'l';
        uStack_5b = 0x6e69;
        cStack_59 = 'e';
        cStack_58 = 'd';
                    /* try { // try from 00126a88 to 00126a9b has its CatchHandler @ 00126ed0 */
        (**(code **)(*(long *)param_2 + 0x110))(&local_80,param_2,(ulong)&local_60 | 1,8);
      }
      else {
        if (iVar2 != 9) goto LAB_00126d78;
        local_60 = 0x6b6e750e;
        cStack_5c = 'n';
        uStack_5b = 0x776f;
        cStack_59 = 'n';
        cStack_58 = '\0';
                    /* try { // try from 001268c0 to 001268d3 has its CatchHandler @ 00126ecc */
        (**(code **)(*(long *)param_2 + 0x110))(&local_80,param_2,(ulong)&local_60 | 1,7);
      }
LAB_00126b44:
      local_c8[0] = 6;
      local_c0 = local_80;
      if ((local_60 & 1) == 0) goto LAB_00126b64;
      pcVar9 = (char *)CONCAT17(uStack_49,
                                CONCAT16(cStack_4a,
                                         CONCAT15(cStack_4b,
                                                  CONCAT14(cStack_4c,
                                                           CONCAT22(uStack_4e,
                                                                    CONCAT11(cStack_4f,cStack_50))))
                                        ));
    }
    local_c8[0] = 6;
    operator_delete(pcVar9);
  }
LAB_00126b64:
                    /* try { // try from 00126b6c to 00126b7f has its CatchHandler @ 00126f1c */
  (**(code **)(*(long *)param_2 + 0x1b0))(param_2,&local_a0,uVar8,local_c8);
  facebook::jsi::Value::~Value((Value *)local_c8);
  if (((byte)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  cStack_51 = '\0';
  local_60._1_3_ = (undefined3)s_parentControls_00113bcf._0_6_;
  local_60 = CONCAT31(local_60._1_3_,0x1c);
  cStack_5c = SUB61(s_parentControls_00113bcf._0_6_,3);
  uStack_5b = SUB62(s_parentControls_00113bcf._0_6_,4);
  cStack_59 = (char)s_parentControls_00113bcf._6_2_;
  cStack_58 = SUB21(s_parentControls_00113bcf._6_2_,1);
  cStack_57 = (char)s_parentControls_00113bcf._8_6_;
  cStack_56 = SUB61(s_parentControls_00113bcf._8_6_,1);
  cStack_55 = SUB61(s_parentControls_00113bcf._8_6_,2);
  cStack_54 = SUB61(s_parentControls_00113bcf._8_6_,3);
  cStack_53 = SUB61(s_parentControls_00113bcf._8_6_,4);
  cStack_52 = SUB61(s_parentControls_00113bcf._8_6_,5);
                    /* try { // try from 00126bbc to 00126bc7 has its CatchHandler @ 00126f18 */
  uVar8 = margelo::nitro::PropNameIDCache::get(param_2,(basic_string *)&local_60);
  uVar11 = (uint)(byte)param_3[0x28];
  if (param_3[0x28] != 0) {
    uVar1 = (ulong)((byte)param_3[0x10] >> 1);
    puVar4 = param_3 + 0x11;
    if ((param_3[0x10] & 1) != 0) {
      uVar1 = *(ulong *)(param_3 + 0x18);
      puVar4 = *(undefined1 **)(param_3 + 0x20);
    }
                    /* try { // try from 00126bf8 to 00126c03 has its CatchHandler @ 00126f00 */
    (**(code **)(*(long *)param_2 + 0x110))(local_98,param_2,puVar4,uVar1);
    uStack_78 = local_98[0];
    uVar11 = 6;
  }
  local_80 = CONCAT44(local_80._4_4_,uVar11);
                    /* try { // try from 00126c1c to 00126c2f has its CatchHandler @ 00126f14 */
  (**(code **)(*(long *)param_2 + 0x1b0))(param_2,&local_a0,uVar8,&local_80);
  facebook::jsi::Value::~Value((Value *)&local_80);
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,
                                                       CONCAT14(cStack_4c,
                                                                CONCAT22(uStack_4e,
                                                                         CONCAT11(cStack_4f,
                                                                                  cStack_50)))))));
  }
  cStack_57 = 0x6e;
  cStack_56 = 100;
  local_60._1_3_ = (undefined3)s_lowerBound_00113cdd._0_8_;
  local_60 = CONCAT31(local_60._1_3_,0x14);
  cStack_5c = SUB81(s_lowerBound_00113cdd._0_8_,3);
  uStack_5b = SUB82(s_lowerBound_00113cdd._0_8_,4);
  cStack_59 = SUB81(s_lowerBound_00113cdd._0_8_,6);
  cStack_58 = SUB81(s_lowerBound_00113cdd._0_8_,7);
  cStack_55 = 0;
                    /* try { // try from 00126c6c to 00126c77 has its CatchHandler @ 00126f10 */
  uVar8 = margelo::nitro::PropNameIDCache::get(param_2,(basic_string *)&local_60);
  uVar11 = (uint)(byte)param_3[0x38];
  if (param_3[0x38] != 0) {
    uStack_78 = *(undefined8 *)(param_3 + 0x30);
    uVar11 = 3;
  }
  local_80 = CONCAT44(local_80._4_4_,uVar11);
                    /* try { // try from 00126c9c to 00126cab has its CatchHandler @ 00126f0c */
  (**(code **)(*(long *)param_2 + 0x1b0))(param_2,&local_a0,uVar8,&local_80);
  facebook::jsi::Value::~Value((Value *)&local_80);
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,
                                                       CONCAT14(cStack_4c,
                                                                CONCAT22(uStack_4e,
                                                                         CONCAT11(cStack_4f,
                                                                                  cStack_50)))))));
  }
  cStack_57 = 'n';
  cStack_56 = 'd';
  local_60._1_3_ = (undefined3)s_upperBound_00113665._0_8_;
  local_60 = CONCAT31(local_60._1_3_,0x14);
  cStack_5c = SUB81(s_upperBound_00113665._0_8_,3);
  uStack_5b = SUB82(s_upperBound_00113665._0_8_,4);
  cStack_59 = SUB81(s_upperBound_00113665._0_8_,6);
  cStack_58 = SUB81(s_upperBound_00113665._0_8_,7);
  cStack_55 = '\0';
                    /* try { // try from 00126ce8 to 00126cf3 has its CatchHandler @ 00126f08 */
  uVar8 = margelo::nitro::PropNameIDCache::get(param_2,(basic_string *)&local_60);
  uVar11 = (uint)(byte)param_3[0x48];
  if (param_3[0x48] != 0) {
    uStack_78 = *(undefined8 *)(param_3 + 0x40);
    uVar11 = 3;
  }
  local_80 = CONCAT44(local_80._4_4_,uVar11);
                    /* try { // try from 00126d18 to 00126d27 has its CatchHandler @ 00126f04 */
  (**(code **)(*(long *)param_2 + 0x1b0))(param_2,&local_a0,uVar8,&local_80);
  facebook::jsi::Value::~Value((Value *)&local_80);
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,
                                     CONCAT16(cStack_4a,
                                              CONCAT15(cStack_4b,
                                                       CONCAT14(cStack_4c,
                                                                CONCAT22(uStack_4e,
                                                                         CONCAT11(cStack_4f,
                                                                                  cStack_50)))))));
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_a0;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_00126f90:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00126f94  FUN_00126f94 =====

void FUN_00126f94(undefined8 param_1,undefined8 param_2,exception_ptr *param_3)

{
  long lVar1;
  runtime_error *this;
  long lVar2;
  undefined8 local_e8 [12];
  exception_ptr aeStack_88 [32];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)param_3;
  local_e8[0] = 0;
  std::exception_ptr::~exception_ptr((exception_ptr *)local_e8);
  if (lVar2 != 0) {
    std::exception_ptr::exception_ptr(aeStack_88,param_3);
    if (*(long *)(lVar1 + 0x28) != local_68) goto LAB_001272d0;
                    /* try { // try from 00126ffc to 00127003 has its CatchHandler @ 00127068 */
    std::rethrow_exception(aeStack_88);
  }
  this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00127010 to 0012701b has its CatchHandler @ 00127044 */
  std::runtime_error::runtime_error(this,"Cannot convert a nullptr exception_ptr to a JS Error!");
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,PTR_typeinfo_0013dcd0,PTR__runtime_error_0013dc98);
  }
LAB_001272d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012739c  FUN_0012739c =====

void FUN_0012739c(undefined8 param_1,char *param_2,byte param_3)

{
  long lVar1;
  size_t __n;
  undefined8 uVar2;
  void *__dest;
  ulong local_70;
  size_t local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
      uVar2 = FUN_00124f78();
                    /* catch() { ... } // from try @ 00127434 with catch @ 00127494 */
      if ((local_70 & 1) != 0) {
        operator_delete(local_60);
      }
      if (*(long *)(lVar1 + 0x28) == local_58) {
        FUN_0011e604(uVar2);
      }
    }
    goto LAB_001274c0;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00127420;
  }
  else {
    __dest = operator_new((__n | 0xf) + 1);
    local_70 = (__n | 0xf) + 2;
    local_68 = __n;
    local_60 = __dest;
LAB_00127420:
    memcpy(__dest,param_2,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 00127434 to 00127443 has its CatchHandler @ 00127494 */
  margelo::nitro::TypeInfo::demangleName((basic_string *)&local_70,(bool)(param_3 & 1));
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_001274c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001274c4  FUN_001274c4 =====

void FUN_001274c4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0013cc10;
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_001222d0(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012755c  FUN_0012755c =====

void FUN_0012755c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0013cc10;
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_001222d0(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001275e8  FUN_001275e8 =====

void FUN_001275e8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x18);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_0013cc10;
  puVar4[1] = uVar1;
  puVar4[2] = lVar2;
  if (lVar2 != 0) {
    FUN_001229c0(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


// ===== 00127660  FUN_00127660 =====

void FUN_00127660(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0013cc10;
  param_2[1] = uVar1;
  param_2[2] = lVar2;
  if (lVar2 != 0) {
    FUN_001229c0(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001276c4  FUN_001276c4 =====

void FUN_001276c4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x10);
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_001222d0(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00127750  FUN_00127750 =====

void FUN_00127750(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)((long)param_1 + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_001222d0(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001277d0  FUN_001277d0 =====

void FUN_001277d0(undefined4 *param_1,long param_2,Runtime *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  Runtime *pRVar4;
  ulong uVar5;
  Runtime **ppRVar6;
  void *pvVar7;
  long *plVar8;
  long lVar9;
  Runtime *pRVar10;
  long lVar11;
  long lVar12;
  void *pvVar13;
  Runtime ***pppRVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  IRuntime *pIVar19;
  ulong uVar20;
  void *pvVar21;
  Runtime *local_148;
  Runtime *local_140;
  undefined8 *local_138;
  Runtime *local_130;
  Runtime *local_128;
  Runtime *local_110 [2];
  Runtime *local_100;
  Runtime *local_f8;
  Runtime *local_f0;
  Runtime *local_e0 [2];
  Runtime *local_d0;
  Runtime *local_c8;
  Runtime *local_c0;
  undefined8 local_b8;
  Runtime **local_b0 [2];
  long local_a0 [4];
  Runtime *local_80 [2];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  pIVar19 = (IRuntime *)*param_5;
  facebook::jsi::Value::asObject(pIVar19);
                    /* try { // try from 0012781c to 0012782b has its CatchHandler @ 00128218 */
  facebook::jsi::Object::asFunction((IRuntime *)&local_d0);
  if (local_d0 != (Runtime *)0x0) {
    (*(code *)**(undefined8 **)local_d0)();
  }
  local_130 = (Runtime *)0x0;
  local_128 = (Runtime *)0x0;
                    /* try { // try from 00127844 to 0012784f has its CatchHandler @ 001281f8 */
  margelo::nitro::JSICache::getOrCreateCache(param_3);
                    /* try { // try from 00127854 to 0012785f has its CatchHandler @ 001281e8 */
  FUN_0012902c(&local_100,local_d0,&local_138);
                    /* try { // try from 00127860 to 0012786b has its CatchHandler @ 001281d8 */
  FUN_00129270(&local_130,&local_100);
  if (local_f8 != (Runtime *)0x0) {
    uVar5 = FUN_001222d0(0xffffffffffffffff);
    if (uVar5 < 2) {
      if ((*(byte *)((long)local_f8 + 0x10) & 1) == 0) {
        if (local_100 != (Runtime *)0x0) {
          if (*(undefined8 **)local_100 != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)local_100)();
          }
          operator_delete(local_100);
        }
        local_100 = (Runtime *)0x0;
        *(undefined4 *)((long)local_f8 + 0x10) = 1;
        goto LAB_001278cc;
      }
      lVar11 = *(long *)local_f8;
      pRVar10 = local_f8;
    }
    else {
LAB_001278cc:
      lVar11 = *(long *)local_f8;
      pRVar10 = local_f8;
    }
    if (((lVar11 == 0) && (*(long *)((long)pRVar10 + 8) == 0)) && (pRVar10 != (Runtime *)0x0)) {
      std::__ndk1::mutex::~mutex((mutex *)((long)pRVar10 + 0x14));
      operator_delete(pRVar10);
    }
  }
  std::__ndk1::mutex::unlock();
  if ((local_c8 != (Runtime *)0x0) &&
     (lVar11 = FUN_001222d0(0xffffffffffffffff,(long *)((long)local_c8 + 8)), lVar11 == 0)) {
    (**(code **)(*(long *)local_c8 + 0x10))(local_c8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar4 = local_128;
  pRVar10 = local_130;
  local_130 = (Runtime *)0x0;
  local_128 = (Runtime *)0x0;
  local_f8 = pRVar10;
  local_f0 = pRVar4;
  local_100 = param_3;
                    /* try { // try from 0012794c to 00127957 has its CatchHandler @ 001281c8 */
  margelo::nitro::Dispatcher::getRuntimeGlobalDispatcher(param_3);
  if (local_140 != (Runtime *)0x0) {
    FUN_001229c0(1,local_140 + 0x10);
  }
  local_c8 = pRVar10;
  local_f8 = (Runtime *)0x0;
  local_f0 = (Runtime *)0x0;
  local_c0 = pRVar4;
  local_d0 = param_3;
  if (local_140 != (Runtime *)0x0) {
    FUN_001229c0(1,local_140 + 0x10);
  }
  local_80[0] = (Runtime *)0x0;
                    /* try { // try from 00127990 to 00127997 has its CatchHandler @ 001281a4 */
  local_80[0] = (Runtime *)operator_new(0x30);
  *(Runtime **)(local_80[0] + 0x10) = pRVar10;
  *(Runtime **)(local_80[0] + 0x18) = pRVar4;
  *(undefined ***)local_80[0] = &PTR_FUN_0013cc80;
  *(Runtime **)(local_80[0] + 8) = param_3;
  local_c8 = (Runtime *)0x0;
  local_c0 = (Runtime *)0x0;
  *(Runtime **)(local_80[0] + 0x20) = local_148;
  *(Runtime **)(local_80[0] + 0x28) = local_140;
  local_b8 = 0;
  local_b0[0] = (Runtime **)0x0;
  if (((local_140 != (Runtime *)0x0) &&
      (std::__ndk1::__shared_weak_count::__release_weak(), local_140 != (Runtime *)0x0)) &&
     (lVar11 = FUN_001222d0(0xffffffffffffffff,local_140 + 8), lVar11 == 0)) {
    (**(code **)(*(long *)local_140 + 0x10))(local_140);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (local_f0 != (Runtime *)0x0) {
    uVar5 = FUN_001222d0(0xffffffffffffffff);
    pRVar10 = local_f8;
    if (uVar5 < 2) {
      if ((*(byte *)((long)local_f0 + 0x10) & 1) == 0) {
        if (local_f8 != (Runtime *)0x0) {
          if (*(undefined8 **)local_f8 != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)local_f8)();
          }
          operator_delete(pRVar10);
        }
        local_f8 = (Runtime *)0x0;
        *(undefined4 *)((long)local_f0 + 0x10) = 1;
        goto LAB_00127a58;
      }
      lVar11 = *(long *)local_f0;
      pRVar10 = local_f0;
    }
    else {
LAB_00127a58:
      lVar11 = *(long *)local_f0;
      pRVar10 = local_f0;
    }
    local_f0 = pRVar10;
    if (((lVar11 == 0) && (*(long *)((long)pRVar10 + 8) == 0)) && (pRVar10 != (Runtime *)0x0)) {
      std::__ndk1::mutex::~mutex((mutex *)((long)pRVar10 + 0x14));
      operator_delete(pRVar10);
    }
  }
  if (local_128 != (Runtime *)0x0) {
    uVar5 = FUN_001222d0(0xffffffffffffffff);
    pRVar10 = local_130;
    if (uVar5 < 2) {
      if ((*(byte *)((long)local_128 + 0x10) & 1) == 0) {
        if (local_130 != (Runtime *)0x0) {
          if (*(undefined8 **)local_130 != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)local_130)();
          }
          operator_delete(pRVar10);
        }
        local_130 = (Runtime *)0x0;
        *(undefined4 *)((long)local_128 + 0x10) = 1;
        goto LAB_00127ae8;
      }
      lVar11 = *(long *)local_128;
      pRVar10 = local_128;
    }
    else {
LAB_00127ae8:
      lVar11 = *(long *)local_128;
      pRVar10 = local_128;
    }
    local_128 = pRVar10;
    if (((lVar11 == 0) && (*(long *)((long)pRVar10 + 8) == 0)) && (pRVar10 != (Runtime *)0x0)) {
      std::__ndk1::mutex::~mutex((mutex *)((long)pRVar10 + 0x14));
      operator_delete(pRVar10);
    }
  }
  if (local_138 != (undefined8 *)0x0) {
    (**(code **)*local_138)();
  }
  lVar11 = *(long *)(param_2 + 8);
  if (local_80[0] == (Runtime *)0x0) {
    ppRVar6 = local_e0;
LAB_00127b58:
    *ppRVar6 = (Runtime *)0x0;
  }
  else {
    if (local_80[0] != (Runtime *)local_a0) {
      ppRVar6 = local_80;
      local_e0[0] = local_80[0];
      goto LAB_00127b58;
    }
    local_e0[0] = (Runtime *)&local_100;
                    /* try { // try from 00127b70 to 00127b7b has its CatchHandler @ 00128180 */
    (**(code **)(local_a0[0] + 0x18))(local_a0,&local_100);
  }
  pRVar10 = local_e0[0];
  local_b0[0] = (Runtime **)0x0;
  if (local_e0[0] != (Runtime *)0x0) {
                    /* try { // try from 00127b88 to 00127b8f has its CatchHandler @ 0012818c */
    ppRVar6 = (Runtime **)operator_new(0x40);
    *ppRVar6 = (Runtime *)&PTR_FUN_0013cda0;
    if (pRVar10 == (Runtime *)&local_100) {
      ppRVar6[6] = (Runtime *)(ppRVar6 + 2);
                    /* try { // try from 00127bc4 to 00127bd3 has its CatchHandler @ 0012817c */
      (**(code **)(local_100 + 0x18))(&local_100);
      local_b0[0] = ppRVar6;
    }
    else {
      ppRVar6[6] = pRVar10;
      local_e0[0] = (Runtime *)0x0;
      local_b0[0] = ppRVar6;
    }
  }
                    /* try { // try from 00127bd8 to 00127bdf has its CatchHandler @ 0012819c */
  std::__ndk1::mutex::lock();
  if (*(int *)(lVar11 + 0x50) == 1) {
    if (local_b0[0] != (Runtime **)0x0) {
                    /* try { // try from 00127c00 to 00127ca3 has its CatchHandler @ 001282a8 */
      (**(code **)(*local_b0[0] + 0x30))(local_b0[0],lVar11);
LAB_00127ddc:
      std::__ndk1::mutex::unlock();
      if (local_b0[0] == &local_d0) {
        lVar11 = 4;
        ppRVar6 = &local_d0;
LAB_00127e40:
        (**(code **)(*ppRVar6 + lVar11 * 8))();
      }
      else if (local_b0[0] != (Runtime **)0x0) {
        lVar11 = 5;
        ppRVar6 = local_b0[0];
        goto LAB_00127e40;
      }
      if (local_e0[0] == (Runtime *)&local_100) {
        lVar11 = 4;
        pRVar10 = (Runtime *)&local_100;
LAB_00127e70:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_e0[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_e0[0];
        goto LAB_00127e70;
      }
      if (local_80[0] == (Runtime *)local_a0) {
        lVar11 = 4;
        pRVar10 = (Runtime *)local_a0;
LAB_00127ea0:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_80[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_80[0];
        goto LAB_00127ea0;
      }
      FUN_001283f8(local_a0,param_3,pIVar19 + 0x10);
      lVar11 = *(long *)(param_2 + 8);
      if (local_80[0] == (Runtime *)0x0) {
        ppRVar6 = local_110;
LAB_00127ee8:
        *ppRVar6 = (Runtime *)0x0;
      }
      else {
        if (local_80[0] != (Runtime *)local_a0) {
          ppRVar6 = local_80;
          local_110[0] = local_80[0];
          goto LAB_00127ee8;
        }
        local_110[0] = (Runtime *)&local_130;
                    /* try { // try from 00127f00 to 00127f0b has its CatchHandler @ 00128178 */
        (**(code **)(local_a0[0] + 0x18))(local_a0,&local_130);
      }
      pRVar10 = local_110[0];
      local_b0[0] = (Runtime **)0x0;
      if (local_110[0] != (Runtime *)0x0) {
                    /* try { // try from 00127f18 to 00127f1f has its CatchHandler @ 00128184 */
        ppRVar6 = (Runtime **)operator_new(0x40);
        *ppRVar6 = (Runtime *)&PTR_FUN_0013ca90;
        if (pRVar10 == (Runtime *)&local_130) {
          ppRVar6[6] = (Runtime *)(ppRVar6 + 2);
                    /* try { // try from 00127f54 to 00127f63 has its CatchHandler @ 00128174 */
          (**(code **)(local_130 + 0x18))(&local_130);
          local_b0[0] = ppRVar6;
        }
        else {
          ppRVar6[6] = pRVar10;
          local_110[0] = (Runtime *)0x0;
          local_b0[0] = ppRVar6;
        }
      }
                    /* try { // try from 00127f68 to 00127f6f has its CatchHandler @ 00128194 */
      std::__ndk1::mutex::lock();
      if (*(int *)(lVar11 + 0x50) == 2) {
        if (local_b0[0] == (Runtime **)0x0) goto LAB_00128120;
                    /* try { // try from 00127f8c to 00127fcf has its CatchHandler @ 0012823c */
        (**(code **)(*local_b0[0] + 0x30))(local_b0[0],lVar11);
      }
      else {
        uVar5 = *(ulong *)(lVar11 + 0x78);
        if (uVar5 < *(ulong *)(lVar11 + 0x80)) {
          if (local_b0[0] == (Runtime **)0x0) {
            pppRVar14 = (Runtime ***)(uVar5 + 0x20);
LAB_00127fd8:
            *pppRVar14 = (Runtime **)0x0;
          }
          else {
            if (local_b0[0] != &local_d0) {
              pppRVar14 = local_b0;
              *(Runtime ***)(uVar5 + 0x20) = local_b0[0];
              goto LAB_00127fd8;
            }
            *(ulong *)(uVar5 + 0x20) = uVar5;
                    /* try { // try from 00127ff0 to 00127ff7 has its CatchHandler @ 00128168 */
            (**(code **)(*local_b0[0] + 0x18))(local_b0[0],uVar5);
          }
          lVar9 = uVar5 + 0x30;
        }
        else {
          lVar9 = FUN_001288a8(lVar11 + 0x70,&local_d0);
        }
        *(long *)(lVar11 + 0x78) = lVar9;
      }
      std::__ndk1::mutex::unlock();
      if (local_b0[0] == &local_d0) {
        lVar11 = 4;
        ppRVar6 = &local_d0;
LAB_00128034:
        (**(code **)(*ppRVar6 + lVar11 * 8))();
      }
      else if (local_b0[0] != (Runtime **)0x0) {
        lVar11 = 5;
        ppRVar6 = local_b0[0];
        goto LAB_00128034;
      }
      if (local_110[0] == (Runtime *)&local_130) {
        lVar11 = 4;
        pRVar10 = (Runtime *)&local_130;
LAB_00128064:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_110[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_110[0];
        goto LAB_00128064;
      }
      *param_1 = 0;
      if (local_80[0] == (Runtime *)local_a0) {
        lVar11 = 4;
        pRVar10 = (Runtime *)local_a0;
LAB_00128098:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_80[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_80[0];
        goto LAB_00128098;
      }
      if (*(long *)(lVar3 + 0x28) == local_70) {
        return;
      }
      goto LAB_00128364;
    }
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_00128364;
                    /* try { // try from 0012811c to 0012811f has its CatchHandler @ 001282a8 */
    FUN_00128850();
LAB_00128120:
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_00128364;
                    /* try { // try from 00128134 to 00128137 has its CatchHandler @ 0012823c */
    FUN_00128850();
LAB_00128138:
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_00128364;
                    /* try { // try from 0012814c to 00128167 has its CatchHandler @ 001282a8 */
    FUN_0012a424();
  }
  else {
    uVar5 = *(ulong *)(lVar11 + 0x60);
    pppRVar14 = local_b0;
    if (uVar5 < *(ulong *)(lVar11 + 0x68)) {
      if (local_b0[0] == (Runtime **)0x0) {
        pppRVar14 = (Runtime ***)(uVar5 + 0x20);
LAB_00127cac:
        *pppRVar14 = (Runtime **)0x0;
      }
      else {
        if (local_b0[0] != &local_d0) {
          *(Runtime ***)(uVar5 + 0x20) = local_b0[0];
          goto LAB_00127cac;
        }
        *(ulong *)(uVar5 + 0x20) = uVar5;
                    /* try { // try from 00127d00 to 00127d07 has its CatchHandler @ 00128170 */
        (**(code **)(*local_b0[0] + 0x18))(local_b0[0],uVar5);
      }
      lVar9 = uVar5 + 0x30;
LAB_00127dd8:
      *(long *)(lVar11 + 0x60) = lVar9;
      goto LAB_00127ddc;
    }
    uVar17 = *(ulong *)(lVar11 + 0x58);
    lVar9 = (long)(uVar5 - uVar17) >> 4;
    uVar20 = lVar9 * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar20) goto LAB_00128138;
    lVar12 = (long)(*(ulong *)(lVar11 + 0x68) - uVar17) >> 4;
    uVar16 = lVar12 * 0x5555555555555556;
    if (uVar16 < uVar20 || uVar16 - uVar20 == 0) {
      uVar16 = uVar20;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar12 * -0x5555555555555555)) {
      uVar16 = 0x555555555555555;
    }
    if (uVar16 == 0) {
      pvVar7 = (void *)0x0;
LAB_00127cb8:
      pvVar21 = (void *)((long)pvVar7 + lVar9 * 0x10);
      if (local_b0[0] == (Runtime **)0x0) {
        pppRVar14 = (Runtime ***)((long)pvVar21 + 0x20);
LAB_00127ce8:
        *pppRVar14 = (Runtime **)0x0;
      }
      else {
        if (local_b0[0] != &local_d0) {
          *(Runtime ***)((long)pvVar21 + 0x20) = local_b0[0];
          goto LAB_00127ce8;
        }
        *(void **)((long)pvVar21 + 0x20) = pvVar21;
                    /* try { // try from 00127d1c to 00127d27 has its CatchHandler @ 0012816c */
        (**(code **)(local_d0 + 0x18))(&local_d0,pvVar21);
        uVar17 = *(ulong *)(lVar11 + 0x58);
        uVar5 = *(ulong *)(lVar11 + 0x60);
      }
      pvVar13 = pvVar21;
      if (uVar5 != uVar17) {
        lVar9 = 0;
        uVar20 = uVar5;
        do {
          lVar12 = uVar5 + lVar9;
          uVar1 = (long)pvVar21 + lVar9;
          lVar15 = *(long *)(lVar12 + -0x10);
          if (lVar15 == 0) {
LAB_00127d48:
            *(undefined8 *)(uVar1 - 0x10) = 0;
          }
          else {
            if (lVar12 + -0x30 != lVar15) {
              *(long *)(uVar1 - 0x10) = lVar15;
              uVar1 = uVar20;
              goto LAB_00127d48;
            }
            *(ulong *)(uVar1 - 0x10) = uVar1 - 0x30;
                    /* try { // try from 00127d9c to 00127d9f has its CatchHandler @ 00128238 */
            (**(code **)(**(long **)(lVar12 + -0x10) + 0x18))();
          }
          lVar9 = lVar9 + -0x30;
          uVar20 = uVar20 - 0x30;
        } while (uVar5 + lVar9 != uVar17);
        pvVar13 = (void *)((long)pvVar21 + lVar9);
      }
      lVar9 = (long)pvVar21 + 0x30;
      plVar2 = *(long **)(lVar11 + 0x58);
      plVar18 = *(long **)(lVar11 + 0x60);
      *(void **)(lVar11 + 0x58) = pvVar13;
      *(long *)(lVar11 + 0x60) = lVar9;
      *(void **)(lVar11 + 0x68) = (void *)((long)pvVar7 + uVar16 * 0x30);
joined_r0x00127dc8:
      if (plVar18 != plVar2) {
        plVar8 = (long *)plVar18[-2];
        plVar18 = plVar18 + -6;
        if (plVar18 != plVar8) goto code_r0x00127e2c;
        lVar12 = 4;
        plVar8 = plVar18;
        goto LAB_00127e08;
      }
      if (plVar2 != (long *)0x0) {
        operator_delete(plVar2);
      }
      goto LAB_00127dd8;
    }
    if (uVar16 < 0x555555555555556) {
      pvVar7 = operator_new(uVar16 * 0x30);
      goto LAB_00127cb8;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    FUN_00124e74();
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00127ff0 with catch @ 00128168 */
    FUN_00123554();
  }
LAB_00128364:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00127e2c:
  if (plVar8 != (long *)0x0) {
    lVar12 = 5;
LAB_00127e08:
    (**(code **)(*plVar8 + lVar12 * 8))();
  }
  goto joined_r0x00127dc8;
}


// ===== 00128368  FUN_00128368 =====

void FUN_00128368(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0013dc58) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 001283b8  FUN_001283b8 =====

undefined * FUN_001283b8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_0013dc60;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001283f8  FUN_001283f8 =====

void FUN_001283f8(long param_1,Runtime *param_2,IRuntime *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  Runtime *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  undefined8 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  facebook::jsi::Value::asObject(param_3);
                    /* try { // try from 00128434 to 00128443 has its CatchHandler @ 00128830 */
  facebook::jsi::Object::asFunction((IRuntime *)&local_98);
  if (local_98 != (Runtime *)0x0) {
    (*(code *)**(undefined8 **)local_98)();
  }
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
                    /* try { // try from 0012845c to 00128467 has its CatchHandler @ 001287f4 */
  margelo::nitro::JSICache::getOrCreateCache(param_2);
                    /* try { // try from 0012846c to 00128477 has its CatchHandler @ 001287e4 */
  FUN_0012902c(&local_80,local_98,&local_60);
                    /* try { // try from 00128478 to 00128483 has its CatchHandler @ 001287d4 */
  FUN_00129270(&local_70,&local_80);
  if (local_78 != (long *)0x0) {
    uVar6 = FUN_001222d0(0xffffffffffffffff);
    if (uVar6 < 2) {
      if ((*(byte *)(local_78 + 2) & 1) == 0) {
        if (local_80 != (long *)0x0) {
          if ((undefined8 *)*local_80 != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)*local_80)();
          }
          operator_delete(local_80);
        }
        local_80 = (long *)0x0;
        *(undefined4 *)(local_78 + 2) = 1;
        goto LAB_001284e4;
      }
      lVar8 = *local_78;
      plVar2 = local_78;
    }
    else {
LAB_001284e4:
      lVar8 = *local_78;
      plVar2 = local_78;
    }
    local_78 = plVar2;
    if (((lVar8 == 0) && (plVar2[1] == 0)) && (plVar2 != (long *)0x0)) {
      std::__ndk1::mutex::~mutex((mutex *)((long)plVar2 + 0x14));
      operator_delete(plVar2);
    }
  }
  std::__ndk1::mutex::unlock();
  if ((local_90 != (long *)0x0) &&
     (lVar8 = FUN_001222d0(0xffffffffffffffff,local_90 + 1), lVar8 == 0)) {
    (**(code **)(*local_90 + 0x10))(local_90);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_68;
  plVar4 = local_70;
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  local_90 = plVar4;
  local_88 = plVar5;
  local_98 = param_2;
                    /* try { // try from 00128564 to 0012856f has its CatchHandler @ 001287c4 */
  margelo::nitro::Dispatcher::getRuntimeGlobalDispatcher(param_2);
  plVar3 = local_78;
  plVar2 = local_80;
  if (local_78 != (long *)0x0) {
    FUN_001229c0(1,local_78 + 2);
  }
  local_90 = (long *)0x0;
  local_88 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    FUN_001229c0(1,plVar3 + 2);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* try { // try from 001285a8 to 001285af has its CatchHandler @ 001287a0 */
  puVar7 = (undefined8 *)operator_new(0x30);
  puVar7[2] = plVar4;
  puVar7[3] = plVar5;
  *puVar7 = &PTR_FUN_0013c970;
  puVar7[1] = param_2;
  puVar7[4] = plVar2;
  puVar7[5] = plVar3;
  *(undefined8 **)(param_1 + 0x20) = puVar7;
  if (((plVar3 != (long *)0x0) &&
      (std::__ndk1::__shared_weak_count::__release_weak(), local_78 != (long *)0x0)) &&
     (lVar8 = FUN_001222d0(0xffffffffffffffff,local_78 + 1), lVar8 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (local_88 != (long *)0x0) {
    uVar6 = FUN_001222d0(0xffffffffffffffff);
    plVar2 = local_90;
    if (uVar6 < 2) {
      if ((*(byte *)(local_88 + 2) & 1) == 0) {
        if (local_90 != (long *)0x0) {
          if ((undefined8 *)*local_90 != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)*local_90)();
          }
          operator_delete(plVar2);
        }
        local_90 = (long *)0x0;
        *(undefined4 *)(local_88 + 2) = 1;
        goto LAB_00128670;
      }
      lVar8 = *local_88;
      plVar2 = local_88;
    }
    else {
LAB_00128670:
      lVar8 = *local_88;
      plVar2 = local_88;
    }
    local_88 = plVar2;
    if (((lVar8 == 0) && (plVar2[1] == 0)) && (plVar2 != (long *)0x0)) {
      std::__ndk1::mutex::~mutex((mutex *)((long)plVar2 + 0x14));
      operator_delete(plVar2);
    }
  }
  if (local_68 == (long *)0x0) goto LAB_00128730;
  uVar6 = FUN_001222d0(0xffffffffffffffff);
  plVar2 = local_70;
  if (uVar6 < 2) {
    if ((*(byte *)(local_68 + 2) & 1) == 0) {
      if (local_70 != (long *)0x0) {
        if ((undefined8 *)*local_70 != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)*local_70)();
        }
        operator_delete(plVar2);
      }
      local_70 = (long *)0x0;
      *(undefined4 *)(local_68 + 2) = 1;
      goto LAB_00128700;
    }
    lVar8 = *local_68;
    plVar2 = local_68;
  }
  else {
LAB_00128700:
    lVar8 = *local_68;
    plVar2 = local_68;
  }
  local_68 = plVar2;
  if (((lVar8 == 0) && (plVar2[1] == 0)) && (plVar2 != (long *)0x0)) {
    std::__ndk1::mutex::~mutex((mutex *)((long)plVar2 + 0x14));
    operator_delete(plVar2);
  }
LAB_00128730:
  if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)();
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00128850  FUN_00128850 =====

void FUN_00128850(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    plVar2 = (long *)__cxa_allocate_exception(8);
    *plVar2 = (long)(PTR_vtable_0013db98 + 0x10);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar2,PTR_typeinfo_0013db90,PTR__exception_0013dcc0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001288a8  FUN_001288a8 =====

long FUN_001288a8(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  void *pvVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  void *pvVar16;
  long lVar17;
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  lVar10 = *param_1;
  lVar17 = param_1[1];
  lVar8 = lVar17 - lVar10 >> 4;
  uVar1 = lVar8 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar1) {
    if (*(long *)(lVar4 + 0x28) != lVar7) goto LAB_00128ae0;
    FUN_00128aec();
LAB_00128acc:
    if (*(long *)(lVar4 + 0x28) == lVar7) {
      FUN_00124e74();
    }
    goto LAB_00128ae0;
  }
  lVar14 = param_1[2] - lVar10 >> 4;
  uVar15 = lVar14 * 0x5555555555555556;
  if (uVar15 < uVar1 || uVar15 - uVar1 == 0) {
    uVar15 = uVar1;
  }
  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar14 * -0x5555555555555555)) {
    uVar15 = 0x555555555555555;
  }
  if (uVar15 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    if (0x555555555555555 < uVar15) goto LAB_00128acc;
    pvVar5 = operator_new(uVar15 * 0x30);
  }
  pvVar16 = (void *)((long)pvVar5 + lVar8 * 0x10);
  plVar9 = param_2 + 4;
  plVar11 = (long *)*plVar9;
  if (plVar11 == (long *)0x0) {
    plVar9 = (long *)((long)pvVar16 + 0x20);
LAB_00128980:
    *plVar9 = 0;
  }
  else {
    if (plVar11 != param_2) {
      *(long **)((long)pvVar16 + 0x20) = plVar11;
      goto LAB_00128980;
    }
    lVar10 = *param_2;
    *(void **)((long)pvVar16 + 0x20) = pvVar16;
                    /* try { // try from 00128994 to 0012899f has its CatchHandler @ 00128ae4 */
    (**(code **)(lVar10 + 0x18))(param_2,pvVar16);
    lVar10 = *param_1;
    lVar17 = param_1[1];
  }
  pvVar12 = pvVar16;
  if (lVar17 != lVar10) {
    lVar14 = 0;
    lVar8 = lVar17;
    do {
      lVar2 = lVar17 + lVar14;
      lVar3 = (long)pvVar16 + lVar14;
      lVar13 = *(long *)(lVar2 + -0x10);
      if (lVar13 == 0) {
LAB_001289c0:
        *(undefined8 *)(lVar3 + -0x10) = 0;
      }
      else {
        if (lVar2 + -0x30 != lVar13) {
          *(long *)(lVar3 + -0x10) = lVar13;
          lVar3 = lVar8;
          goto LAB_001289c0;
        }
        *(long *)(lVar3 + -0x10) = lVar3 + -0x30;
                    /* try { // try from 00128a14 to 00128a17 has its CatchHandler @ 00128ae8 */
        (**(code **)(**(long **)(lVar2 + -0x10) + 0x18))();
      }
      lVar14 = lVar14 + -0x30;
      lVar8 = lVar8 + -0x30;
    } while (lVar17 + lVar14 != lVar10);
    pvVar12 = (void *)((long)pvVar16 + lVar14);
  }
  plVar9 = (long *)*param_1;
  plVar11 = (long *)param_1[1];
  *param_1 = (long)pvVar12;
  param_1[1] = (long)pvVar16 + 0x30;
  param_1[2] = (long)((long)pvVar5 + uVar15 * 0x30);
joined_r0x00128a38:
  if (plVar11 != plVar9) {
    plVar6 = (long *)plVar11[-2];
    plVar11 = plVar11 + -6;
    if (plVar11 != plVar6) goto code_r0x00128aac;
    lVar10 = 4;
    plVar6 = plVar11;
    goto LAB_00128a84;
  }
  if (plVar9 != (long *)0x0) {
    operator_delete(plVar9);
  }
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return (long)pvVar16 + 0x30;
  }
LAB_00128ae0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00128aac:
  if (plVar6 != (long *)0x0) {
    lVar10 = 5;
LAB_00128a84:
    (**(code **)(*plVar6 + lVar10 * 8))();
  }
  goto joined_r0x00128a38;
}


// ===== 00128aec  FUN_00128aec =====

void FUN_00128aec(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_00124fb0("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00128b24  FUN_00128b24 =====

void FUN_00128b24(exception *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  std::exception::~exception(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00128b70  FUN_00128b70 =====

void FUN_00128b70(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  plVar3 = param_1 + 2;
  plVar2 = (long *)param_1[6];
  *param_1 = &PTR_FUN_0013ca90;
  if (plVar2 == plVar3) {
    lVar4 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == lVar5) {
        return;
      }
      goto LAB_00128bfc;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00128bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_00128bfc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00128c00  FUN_00128c00 =====

void FUN_00128c00(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar3 = param_1 + 2;
  plVar2 = (long *)param_1[6];
  *param_1 = &PTR_FUN_0013ca90;
  if (plVar2 == plVar3) {
    lVar5 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_00128c5c;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_00128c5c:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00128c84  FUN_00128c84 =====

undefined8 * FUN_00128c84(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x40);
  plVar3 = *(long **)(param_1 + 0x30);
  *puVar2 = &PTR_FUN_0013ca90;
  if (plVar3 != (long *)0x0) {
    if (plVar3 == (long *)(param_1 + 0x10)) {
      lVar5 = *plVar3;
      puVar2[6] = puVar2 + 2;
      (**(code **)(lVar5 + 0x18))();
      goto LAB_00128cfc;
    }
                    /* try { // try from 00128ce0 to 00128cfb has its CatchHandler @ 00128d24 */
    plVar3 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  puVar2[6] = plVar3;
LAB_00128cfc:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00128d4c  FUN_00128d4c =====

void FUN_00128d4c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_0013ca90;
  if (plVar4 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar4 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
      if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00128df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
        return;
      }
      goto LAB_00128df8;
    }
    uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
    param_2[6] = uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
LAB_00128df8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00128dfc  FUN_00128dfc =====

void FUN_00128dfc(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  plVar3 = (long *)(param_1 + 0x10);
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == plVar3) {
    lVar4 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
        return;
      }
      goto LAB_00128e7c;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00128e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_00128e7c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00128e80  FUN_00128e80 =====

void FUN_00128e80(void *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)((long)param_1 + 0x10);
  plVar2 = *(long **)((long)param_1 + 0x30);
  if (plVar2 == plVar3) {
    lVar5 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_00128ed0;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_00128ed0:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00128ef8  FUN_00128ef8 =====

void FUN_00128ef8(long param_1,exception_ptr *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  exception_ptr aeStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  std::exception_ptr::exception_ptr(aeStack_30,param_2);
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      uVar3 = FUN_00128850();
                    /* catch() { ... } // from try @ 00128f30 with catch @ 00128f74 */
      std::exception_ptr::~exception_ptr(aeStack_30);
      if (*(long *)(lVar1 + 0x28) == local_28) {
        FUN_0011e604(uVar3);
      }
    }
  }
  else {
                    /* try { // try from 00128f30 to 00128f73 has its CatchHandler @ 00128f74 */
    (**(code **)(*plVar2 + 0x30))(plVar2,aeStack_30);
    std::exception_ptr::~exception_ptr(aeStack_30);
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00128f9c  FUN_00128f9c =====

void FUN_00128f9c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0013dbd8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00128fec  FUN_00128fec =====

undefined * FUN_00128fec(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_0013dbe0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012902c  FUN_0012902c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012902c(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *local_70;
  undefined8 *puStack_68;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  puVar6 = (undefined8 *)operator_new(8);
  uVar8 = *param_3;
  *param_1 = puVar6;
  *param_3 = 0;
  *puVar6 = uVar8;
  puStack_68 = (undefined8 *)operator_new(0x40);
  *(undefined1 *)(puStack_68 + 2) = 0;
  uVar5 = _UNK_00114218;
  uVar8 = _DAT_00114210;
  *(undefined8 *)((long)puStack_68 + 0x34) = 0;
  param_1[1] = puStack_68;
  puStack_68[1] = uVar5;
  *puStack_68 = uVar8;
  *(undefined8 *)((long)puStack_68 + 0x1c) = 0;
  *(undefined8 *)((long)puStack_68 + 0x14) = 0;
  *(undefined8 *)((long)puStack_68 + 0x2c) = 0;
  *(undefined8 *)((long)puStack_68 + 0x24) = 0;
  local_70 = puVar6;
  FUN_001222d0(1,puStack_68 + 1);
  puVar6 = *(undefined8 **)(param_2 + 0x68);
  if (puVar6 < *(undefined8 **)(param_2 + 0x70)) {
    puVar6[1] = puStack_68;
    *puVar6 = local_70;
    *(undefined8 **)(param_2 + 0x68) = puVar6 + 2;
LAB_001291b4:
    if (*(long *)(lVar4 + 0x28) == local_58) {
      return;
    }
  }
  else {
    puVar16 = *(undefined8 **)(param_2 + 0x60);
    lVar14 = (long)puVar6 - (long)puVar16 >> 4;
    uVar2 = lVar14 + 1;
    if (uVar2 >> 0x3c == 0) {
      uVar9 = (long)*(undefined8 **)(param_2 + 0x70) - (long)puVar16;
      uVar10 = (long)uVar9 >> 3;
      if (uVar10 <= uVar2) {
        uVar10 = uVar2;
      }
      if (0x7fffffffffffffef < uVar9) {
        uVar10 = 0xfffffffffffffff;
      }
      if (uVar10 >> 0x3c == 0) {
                    /* try { // try from 00129118 to 0012911b has its CatchHandler @ 0012923c */
        pvVar7 = operator_new(uVar10 << 4);
        puVar13 = puStack_68;
        puVar11 = local_70;
        puVar12 = (undefined8 *)((long)pvVar7 + ((long)puVar6 - (long)puVar16));
        pvVar3 = (void *)((long)pvVar7 + uVar10 * 0x10);
        local_70 = (undefined8 *)0x0;
        puStack_68 = (undefined8 *)0x0;
        puVar15 = puVar12 + 2;
        *puVar12 = puVar11;
        *(undefined8 **)((long)pvVar7 + lVar14 * 0x10 + 8) = puVar13;
        if (puVar6 == puVar16) {
          *(undefined8 **)(param_2 + 0x60) = puVar12;
          *(undefined8 **)(param_2 + 0x68) = puVar15;
          *(void **)(param_2 + 0x70) = pvVar3;
        }
        else {
          do {
            puVar11 = puVar6 + -2;
            lVar14 = puVar6[-1];
            puVar13 = puVar12 + -2;
            *puVar13 = *puVar11;
            puVar12[-1] = lVar14;
            if (lVar14 != 0) {
              FUN_001222d0(1,lVar14 + 8);
            }
            puVar6 = puVar11;
            puVar12 = puVar13;
          } while (puVar11 != puVar16);
          puVar6 = *(undefined8 **)(param_2 + 0x60);
          puVar16 = *(undefined8 **)(param_2 + 0x68);
          *(undefined8 **)(param_2 + 0x60) = puVar13;
          *(undefined8 **)(param_2 + 0x68) = puVar15;
          *(void **)(param_2 + 0x70) = pvVar3;
          while (puVar16 != puVar6) {
            plVar1 = puVar16 + -1;
            puVar16 = puVar16 + -2;
            if (*plVar1 != 0) {
              FUN_001222d0(0xffffffffffffffff,*plVar1 + 8);
                    /* try { // try from 00129204 to 0012920b has its CatchHandler @ 0012926c */
              FUN_0012a15c(puVar16);
            }
          }
        }
        if (puVar6 != (undefined8 *)0x0) {
          operator_delete(puVar6);
        }
        *(undefined8 **)(param_2 + 0x68) = puVar15;
        if (puStack_68 != (undefined8 *)0x0) {
          FUN_001222d0(0xffffffffffffffff,puStack_68 + 1);
                    /* try { // try from 001291ac to 001291b3 has its CatchHandler @ 00129238 */
          FUN_0012a15c(&local_70);
        }
        goto LAB_001291b4;
      }
    }
    else {
      if (*(long *)(lVar4 + 0x28) != local_58) goto LAB_00129268;
                    /* try { // try from 00129220 to 00129237 has its CatchHandler @ 0012923c */
      FUN_0012a3ec();
    }
    if (*(long *)(lVar4 + 0x28) == local_58) {
      FUN_00124e74();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 001291ac with catch @ 00129238
                        */
      FUN_00123554();
    }
  }
LAB_00129268:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00129270  FUN_00129270 =====

undefined8 * FUN_00129270(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  if (param_1 != param_2) {
    if (param_1[1] != 0) {
      uVar3 = FUN_001222d0(0xffffffffffffffff);
      if ((uVar3 < 2) && ((*(byte *)(param_1[1] + 0x10) & 1) == 0)) {
        plVar5 = (long *)*param_1;
        if (plVar5 != (long *)0x0) {
          if ((undefined8 *)*plVar5 != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)*plVar5)();
          }
          operator_delete(plVar5);
        }
        *param_1 = 0;
        *(undefined4 *)(param_1[1] + 0x10) = 1;
      }
      if ((*(long *)param_1[1] == 0) && (*(long *)(param_1[1] + 8) == 0)) {
        pvVar6 = (void *)param_1[1];
        if (pvVar6 != (void *)0x0) {
          std::__ndk1::mutex::~mutex((mutex *)((long)pvVar6 + 0x14));
          operator_delete(pvVar6);
        }
        param_1[1] = 0;
      }
    }
    lVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      FUN_001222d0(1);
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00129378  FUN_00129378 =====

void FUN_00129378(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (param_1[1] != 0) {
    uVar2 = FUN_001222d0(0xffffffffffffffff);
    if ((uVar2 < 2) && ((*(byte *)(param_1[1] + 0x10) & 1) == 0)) {
      plVar4 = (long *)*param_1;
      if (plVar4 != (long *)0x0) {
        if ((undefined8 *)*plVar4 != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)*plVar4)();
        }
        operator_delete(plVar4);
      }
      *param_1 = 0;
      *(undefined4 *)(param_1[1] + 0x10) = 1;
    }
    if ((*(long *)param_1[1] == 0) && (*(long *)(param_1[1] + 8) == 0)) {
      pvVar5 = (void *)param_1[1];
      if (pvVar5 != (void *)0x0) {
        std::__ndk1::mutex::~mutex((mutex *)((long)pvVar5 + 0x14));
        operator_delete(pvVar5);
      }
      param_1[1] = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012945c  FUN_0012945c =====

void FUN_0012945c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  std::__ndk1::mutex::unlock();
  plVar4 = *(long **)(param_1 + 8);
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_001222d0(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001294f8  FUN_001294f8 =====

void FUN_001294f8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_00129378(param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012954c  FUN_0012954c =====

void FUN_0012954c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_001222d0(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
     ) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001295d8  FUN_001295d8 =====

void FUN_001295d8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0013c970;
  if (param_1[5] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_00129378(param_1 + 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00129638  FUN_00129638 =====

void FUN_00129638(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0013c970;
  if (param_1[5] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_00129378(param_1 + 2);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001296a0  FUN_001296a0 =====

undefined8 * FUN_001296a0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x18);
  *puVar2 = &PTR_FUN_0013c970;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = lVar3;
  if (lVar3 != 0) {
    FUN_001222d0(1);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = lVar3;
  if (lVar3 != 0) {
    FUN_001229c0(1,lVar3 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012973c  FUN_0012973c =====

void FUN_0012973c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0013c970;
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[2] = uVar4;
  param_2[3] = lVar2;
  if (lVar2 != 0) {
    FUN_001222d0(1);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = lVar2;
  if (lVar2 != 0) {
    FUN_001229c0(1,lVar2 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001297d0  FUN_001297d0 =====

void FUN_001297d0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x28) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_00129378(param_1 + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00129824  FUN_00129824 =====

void FUN_00129824(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)((long)param_1 + 0x28) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_00129378((long)param_1 + 0x10);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00129880  FUN_00129880 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00129880(long param_1,exception_ptr *param_2)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  exception_ptr aeStack_b0 [8];
  exception_ptr aeStack_a8 [8];
  ulong local_a0;
  long *plStack_98;
  long *local_90;
  exception_ptr aeStack_88 [8];
  ulong local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  ulong *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  std::exception_ptr::exception_ptr(aeStack_b0,param_2);
  std::exception_ptr::exception_ptr(aeStack_a8,aeStack_b0);
  if (*(long *)(param_1 + 0x28) == 0) {
    plVar3 = (long *)0x0;
LAB_0012997c:
                    /* try { // try from 0012997c to 00129983 has its CatchHandler @ 00129b7c */
    local_70 = (undefined8 *)operator_new(0x40);
    puVar2 = PTR_typeinfo_name_0013dbb0;
    uStack_78 = _UNK_001141f8;
    local_80 = _DAT_001141f0;
    *(undefined1 *)((long)local_70 + 0x37) = 0;
    uVar11 = *(undefined8 *)puVar2;
    uVar13 = *(undefined8 *)(puVar2 + 0x18);
    uVar12 = *(undefined8 *)(puVar2 + 0x10);
    uVar10 = *(undefined8 *)(puVar2 + 0x28);
    uVar9 = *(undefined8 *)(puVar2 + 0x20);
    uVar7 = *(undefined8 *)(puVar2 + 0x2f);
    local_70[1] = *(undefined8 *)(puVar2 + 8);
    *local_70 = uVar11;
    local_70[3] = uVar13;
    local_70[2] = uVar12;
    local_70[5] = uVar10;
    local_70[4] = uVar9;
    *(undefined8 *)((long)local_70 + 0x2f) = uVar7;
                    /* try { // try from 001299b8 to 001299c7 has its CatchHandler @ 00129b64 */
    margelo::nitro::TypeInfo::demangleName((basic_string *)&local_80,true);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    if (plVar3 == (long *)0x0) goto LAB_00129adc;
  }
  else {
    plVar3 = (long *)std::__ndk1::__shared_weak_count::lock();
    if ((plVar3 == (long *)0x0) || (plVar8 = *(long **)(param_1 + 0x20), plVar8 == (long *)0x0))
    goto LAB_0012997c;
    plStack_98 = *(long **)(param_1 + 0x10);
    local_a0 = *(ulong *)(param_1 + 8);
    local_90 = *(long **)(param_1 + 0x18);
    if (local_90 != (long *)0x0) {
      FUN_001222d0(1);
    }
    std::exception_ptr::exception_ptr(aeStack_88,aeStack_a8);
    local_60 = (ulong *)0x0;
                    /* try { // try from 0012990c to 00129913 has its CatchHandler @ 00129b4c */
    puVar4 = (ulong *)operator_new(0x28);
    *puVar4 = (ulong)&PTR_FUN_0013ca00;
    puVar4[2] = (ulong)plStack_98;
    puVar4[1] = local_a0;
    puVar4[3] = (ulong)local_90;
    *(undefined8 *)((ulong)&local_a0 | 8) = 0;
    ((undefined8 *)((ulong)&local_a0 | 8))[1] = 0;
    std::exception_ptr::exception_ptr((exception_ptr *)(puVar4 + 4),aeStack_88);
                    /* try { // try from 00129950 to 0012995f has its CatchHandler @ 00129b14 */
    local_60 = puVar4;
    (**(code **)(*plVar8 + 0x18))(plVar8,&local_80);
    if (local_60 == &local_80) {
      lVar6 = 4;
      puVar4 = &local_80;
LAB_00129a08:
      (**(code **)(*puVar4 + lVar6 * 8))();
    }
    else if (local_60 != (ulong *)0x0) {
      lVar6 = 5;
      puVar4 = local_60;
      goto LAB_00129a08;
    }
    std::exception_ptr::~exception_ptr(aeStack_88);
    if (local_90 != (long *)0x0) {
      uVar5 = FUN_001222d0(0xffffffffffffffff);
      plVar8 = plStack_98;
      if ((uVar5 < 2) && ((*(byte *)(local_90 + 2) & 1) == 0)) {
        if (plStack_98 != (long *)0x0) {
          if ((undefined8 *)*plStack_98 != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)*plStack_98)();
          }
          operator_delete(plVar8);
        }
        plStack_98 = (long *)0x0;
        *(undefined4 *)(local_90 + 2) = 1;
      }
      plVar8 = local_90;
      if ((*local_90 == 0) && (local_90[1] == 0)) {
        if (local_90 != (long *)0x0) {
          std::__ndk1::mutex::~mutex((mutex *)((long)local_90 + 0x14));
          operator_delete(plVar8);
        }
        local_90 = (long *)0x0;
      }
    }
  }
  lVar6 = FUN_001222d0(0xffffffffffffffff,plVar3 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
LAB_00129adc:
  std::exception_ptr::~exception_ptr(aeStack_a8);
  std::exception_ptr::~exception_ptr(aeStack_b0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00129bb4  FUN_00129bb4 =====

void FUN_00129bb4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0013dbb0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00129c04  FUN_00129c04 =====

undefined * FUN_00129c04(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_0013dbb8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00129c44  FUN_00129c44 =====

void FUN_00129c44(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0013ca00;
  std::exception_ptr::~exception_ptr((exception_ptr *)(param_1 + 4));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_00129378(param_1 + 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00129c9c  FUN_00129c9c =====

void FUN_00129c9c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0013ca00;
  std::exception_ptr::~exception_ptr((exception_ptr *)(param_1 + 4));
  FUN_00129378(param_1 + 2);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00129cfc  FUN_00129cfc =====

undefined8 * FUN_00129cfc(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x18);
  *puVar2 = &PTR_FUN_0013ca00;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = lVar3;
  if (lVar3 != 0) {
    FUN_001222d0(1);
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    std::exception_ptr::exception_ptr
              ((exception_ptr *)(puVar2 + 4),(exception_ptr *)(param_1 + 0x20));
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00129d8c  FUN_00129d8c =====

void FUN_00129d8c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0013ca00;
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[2] = uVar4;
  param_2[3] = lVar2;
  if (lVar2 != 0) {
    FUN_001222d0(1);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    std::exception_ptr::exception_ptr
              ((exception_ptr *)(param_2 + 4),(exception_ptr *)(param_1 + 0x20));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00129e10  FUN_00129e10 =====

void FUN_00129e10(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  std::exception_ptr::~exception_ptr((exception_ptr *)(param_1 + 0x20));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_00129378(param_1 + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00129e60  FUN_00129e60 =====

void FUN_00129e60(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  std::exception_ptr::~exception_ptr((exception_ptr *)((long)param_1 + 0x20));
  FUN_00129378((long)param_1 + 0x10);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00129eb8  FUN_00129eb8 =====

void FUN_00129eb8(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  runtime_error *this;
  exception_ptr aeStack_98 [8];
  Value aVStack_90 [16];
  Value aVStack_80 [24];
  undefined4 local_68 [6];
  Value aVStack_50 [24];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  std::exception_ptr::exception_ptr(aeStack_98,(exception_ptr *)(param_1 + 0x20));
  if ((*(long *)(param_1 + 0x10) == 0) || ((*(byte *)(*(long *)(param_1 + 0x18) + 0x10) & 1) != 0))
  {
                    /* try { // try from 00129f94 to 00129fa7 has its CatchHandler @ 0012a0a4 */
    FUN_0012739c(local_68,PTR_typeinfo_name_0013dbc0,1);
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00129fb4 to 00129fc7 has its CatchHandler @ 0012a084 */
    std::__ndk1::operator+("Cannot call ",(basic_string *)local_68);
                    /* try { // try from 00129fc8 to 00129fdb has its CatchHandler @ 0012a06c */
    FUN_0012425c(aVStack_50,aVStack_80," - the underlying `jsi::Function` has already been deleted!"
                );
                    /* try { // try from 00129fe0 to 0012a017 has its CatchHandler @ 0012a038 */
    std::runtime_error::runtime_error(this,(basic_string *)aVStack_50);
    if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_0013dcd0,PTR__runtime_error_0013dc98);
    }
  }
  else {
    plVar1 = *(long **)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 00129f04 to 00129f13 has its CatchHandler @ 0012a0a4 */
    FUN_00126f94(aVStack_90,plVar1,aeStack_98);
    facebook::jsi::Value::Value(aVStack_50,aVStack_90);
    local_68[0] = 0;
                    /* try { // try from 00129f2c to 00129f47 has its CatchHandler @ 0012a018 */
    (**(code **)(*plVar1 + 0x280))(aVStack_80,plVar1,uVar2,local_68,aVStack_50,1);
    facebook::jsi::Value::~Value((Value *)local_68);
    facebook::jsi::Value::~Value(aVStack_50);
    facebook::jsi::Value::~Value(aVStack_90);
    facebook::jsi::Value::~Value(aVStack_80);
    std::exception_ptr::~exception_ptr(aeStack_98);
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012a0cc  FUN_0012a0cc =====

void FUN_0012a0cc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0013dbc8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0012a11c  FUN_0012a11c =====

undefined * FUN_0012a11c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_0013dbd0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012a15c  FUN_0012a15c =====

void FUN_0012a15c(long param_1)

{
  long lVar1;
  runtime_error *this;
  void *pvVar2;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  basic_string abStack_68 [24];
  basic_string abStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((**(long **)(param_1 + 8) == 0) && (*(long *)(*(long *)(param_1 + 8) + 8) == 0)) {
    if ((*(byte *)(*(long *)(param_1 + 8) + 0x10) & 1) == 0) {
      FUN_0012739c(abStack_50,PTR_typeinfo_name_0013db60,1);
      this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0012a214 to 0012a227 has its CatchHandler @ 0012a34c */
      std::__ndk1::operator+("WeakReference<",abStack_50);
                    /* try { // try from 0012a228 to 0012a23b has its CatchHandler @ 0012a334 */
      FUN_0012425c(auStack_98,auStack_b0,"> encountered a stale `_value` - BorrowingReference<");
                    /* try { // try from 0012a23c to 0012a24b has its CatchHandler @ 0012a304 */
      FUN_0012656c(auStack_80,auStack_98,abStack_50);
                    /* try { // try from 0012a24c to 0012a25f has its CatchHandler @ 0012a2e0 */
      FUN_0012425c(abStack_68,auStack_80,"> should\'ve already deleted this!");
                    /* try { // try from 0012a264 to 0012a29f has its CatchHandler @ 0012a2a0 */
      std::runtime_error::runtime_error(this,abStack_68);
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,PTR_typeinfo_0013dcd0,PTR__runtime_error_0013dc98);
      }
      goto LAB_0012a384;
    }
    pvVar2 = *(void **)(param_1 + 8);
    if (pvVar2 != (void *)0x0) {
      std::__ndk1::mutex::~mutex((mutex *)((long)pvVar2 + 0x14));
      operator_delete(pvVar2);
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0012a384:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012a388  FUN_0012a388 =====

void FUN_0012a388(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_001222d0(0xffffffffffffffff,*(long *)(param_1 + 8) + 8);
                    /* try { // try from 0012a3bc to 0012a3c3 has its CatchHandler @ 0012a3e8 */
    FUN_0012a15c(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012a3ec  FUN_0012a3ec =====

void FUN_0012a3ec(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_00124fb0("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012a424  FUN_0012a424 =====

void FUN_0012a424(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_00124fb0("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012a45c  FUN_0012a45c =====

void FUN_0012a45c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  plVar3 = param_1 + 2;
  plVar2 = (long *)param_1[6];
  *param_1 = &PTR_FUN_0013cda0;
  if (plVar2 == plVar3) {
    lVar4 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == lVar5) {
        return;
      }
      goto LAB_0012a4e8;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x0012a4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_0012a4e8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012a4ec  FUN_0012a4ec =====

void FUN_0012a4ec(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar3 = param_1 + 2;
  plVar2 = (long *)param_1[6];
  *param_1 = &PTR_FUN_0013cda0;
  if (plVar2 == plVar3) {
    lVar5 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_0012a548;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_0012a548:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012a570  FUN_0012a570 =====

undefined8 * FUN_0012a570(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x40);
  plVar3 = *(long **)(param_1 + 0x30);
  *puVar2 = &PTR_FUN_0013cda0;
  if (plVar3 != (long *)0x0) {
    if (plVar3 == (long *)(param_1 + 0x10)) {
      lVar5 = *plVar3;
      puVar2[6] = puVar2 + 2;
      (**(code **)(lVar5 + 0x18))();
      goto LAB_0012a5e8;
    }
                    /* try { // try from 0012a5cc to 0012a5e7 has its CatchHandler @ 0012a610 */
    plVar3 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  puVar2[6] = plVar3;
LAB_0012a5e8:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012a638  FUN_0012a638 =====

void FUN_0012a638(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_0013cda0;
  if (plVar4 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar4 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
      if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x0012a6e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
        return;
      }
      goto LAB_0012a6e4;
    }
    uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
    param_2[6] = uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
LAB_0012a6e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012a6e8  FUN_0012a6e8 =====

void FUN_0012a6e8(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  plVar3 = (long *)(param_1 + 0x10);
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == plVar3) {
    lVar4 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
        return;
      }
      goto LAB_0012a768;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0012a748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_0012a768:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012a76c  FUN_0012a76c =====

void FUN_0012a76c(void *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)((long)param_1 + 0x10);
  plVar2 = *(long **)((long)param_1 + 0x30);
  if (plVar2 == plVar3) {
    lVar5 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_0012a7bc;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_0012a7bc:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012a7e4  FUN_0012a7e4 =====

void FUN_0012a7e4(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 local_88;
  undefined1 local_80;
  ulong local_78;
  undefined8 uStack_70;
  void *local_68;
  char local_60;
  undefined8 local_58;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined8 uStack_47;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_88 = *param_2;
  local_80 = *(undefined1 *)(param_2 + 1);
  local_78 = local_78 & 0xffffffffffffff00;
  local_60 = '\0';
  if (*(char *)(param_2 + 5) != '\0') {
    if ((*(byte *)(param_2 + 2) & 1) == 0) {
      uStack_70 = param_2[3];
      local_78 = param_2[2];
      local_68 = (void *)param_2[4];
    }
    else {
                    /* try { // try from 0012a848 to 0012a863 has its CatchHandler @ 0012a8e4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_78,(char *)param_2[4],param_2[3]);
    }
    local_60 = '\x01';
  }
  local_58 = param_2[6];
  uStack_47 = *(undefined8 *)((long)param_2 + 0x41);
  plVar2 = *(long **)(param_1 + 0x30);
  uStack_50 = (undefined1)param_2[7];
  uStack_4f = (undefined7)*(undefined8 *)((long)param_2 + 0x39);
  uStack_48 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x39) >> 0x38);
  if (plVar2 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      uVar3 = FUN_00128850();
                    /* catch() { ... } // from try @ 0012a848 with catch @ 0012a8e4 */
                    /* catch() { ... } // from try @ 0012a88c with catch @ 0012a8e8 */
      if ((local_60 != '\0') && ((local_78 & 1) != 0)) {
        operator_delete(local_68);
      }
      if (*(long *)(lVar1 + 0x28) == local_38) {
        FUN_0011e604(uVar3);
      }
    }
  }
  else {
                    /* try { // try from 0012a88c to 0012a8e3 has its CatchHandler @ 0012a8e8 */
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_88);
    if ((local_60 != '\0') && ((local_78 & 1) != 0)) {
      operator_delete(local_68);
    }
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012a920  FUN_0012a920 =====

void FUN_0012a920(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0013dc48) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0012a970  FUN_0012a970 =====

undefined * FUN_0012a970(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_0013dc50;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012a9b0  FUN_0012a9b0 =====

void FUN_0012a9b0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_00129378(param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012aa04  FUN_0012aa04 =====

void FUN_0012aa04(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0013cc80;
  if (param_1[5] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_00129378(param_1 + 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012aa64  FUN_0012aa64 =====

void FUN_0012aa64(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0013cc80;
  if (param_1[5] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_00129378(param_1 + 2);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012aacc  FUN_0012aacc =====

undefined8 * FUN_0012aacc(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x18);
  *puVar2 = &PTR_FUN_0013cc80;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = lVar3;
  if (lVar3 != 0) {
    FUN_001222d0(1);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = lVar3;
  if (lVar3 != 0) {
    FUN_001229c0(1,lVar3 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012ab68  FUN_0012ab68 =====

void FUN_0012ab68(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0013cc80;
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[2] = uVar4;
  param_2[3] = lVar2;
  if (lVar2 != 0) {
    FUN_001222d0(1);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = lVar2;
  if (lVar2 != 0) {
    FUN_001229c0(1,lVar2 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012abfc  FUN_0012abfc =====

void FUN_0012abfc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x28) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_00129378(param_1 + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012ac50  FUN_0012ac50 =====

void FUN_0012ac50(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)((long)param_1 + 0x28) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_00129378((long)param_1 + 0x10);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012acac  FUN_0012acac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012acac(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  undefined5 uVar4;
  undefined *puVar5;
  ulong uVar6;
  char *pcVar7;
  char cVar8;
  long *plVar9;
  byte *pbVar10;
  long lVar11;
  char *unaff_x19;
  long *plVar12;
  byte bVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 local_190;
  byte local_188;
  ulong local_180;
  ulong uStack_178;
  char *local_170;
  char local_168;
  undefined8 local_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined8 uStack_14f;
  ulong local_140;
  undefined8 uStack_138;
  undefined8 *local_130;
  undefined8 local_128;
  byte local_120;
  ulong local_118;
  ulong uStack_110;
  char *local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined8 uStack_e7;
  undefined8 local_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  byte local_b0 [16];
  void *local_a0;
  byte *local_90;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  cVar2 = *(char *)(param_2 + 5);
  if (cVar2 == '\0') {
    local_d0 = param_2[6];
    uStack_bf = *(undefined8 *)((long)param_2 + 0x41);
    bVar13 = 0;
    local_190 = *param_2;
    local_188 = *(byte *)(param_2 + 1);
    local_180 = (ulong)local_180._1_7_ << 8;
    uStack_c8 = (undefined1)param_2[7];
    uStack_c7 = (undefined7)*(undefined8 *)((long)param_2 + 0x39);
    uStack_c0 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x39) >> 0x38);
    local_168 = '\0';
  }
  else {
    local_d0 = param_2[6];
    uVar1 = param_2[3];
    unaff_x19 = (char *)param_2[4];
    bVar13 = *(byte *)(param_2 + 2);
    uVar4 = *(undefined5 *)(param_2 + 2);
    local_190 = *param_2;
    local_188 = *(byte *)(param_2 + 1);
    uStack_c8 = (undefined1)param_2[7];
    uStack_bf = *(undefined8 *)((long)param_2 + 0x41);
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[2] = 0;
    uStack_c7 = (undefined7)*(undefined8 *)((long)param_2 + 0x39);
    uStack_c0 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x39) >> 0x38);
    local_180 = (ulong)local_180._1_7_ << 8;
    local_168 = 0;
    if ((bVar13 & 1) == 0) {
      local_180 = CONCAT44(*(undefined4 *)((long)param_2 + 0x14),(int)uVar4);
      uStack_178 = uVar1;
      local_170 = unaff_x19;
    }
    else {
                    /* try { // try from 0012ad80 to 0012ad8f has its CatchHandler @ 0012b020 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_180,unaff_x19,uVar1);
    }
    local_168 = '\x01';
  }
  uStack_158 = uStack_c8;
  local_160 = local_d0;
  uStack_14f = uStack_bf;
  uStack_157 = uStack_c7;
  uStack_150 = uStack_c0;
  if (*(long *)(param_1 + 0x28) == 0) {
    plVar9 = (long *)0x0;
LAB_0012aeec:
                    /* try { // try from 0012aeec to 0012aef3 has its CatchHandler @ 0012b098 */
    local_130 = (undefined8 *)operator_new(0x60);
    puVar5 = PTR_typeinfo_name_0013dc20;
    uStack_138 = _UNK_00114208;
    local_140 = _DAT_00114200;
    *(undefined1 *)((long)local_130 + 0x5c) = 0;
    uVar16 = *(undefined8 *)(puVar5 + 0x20);
    uVar18 = *(undefined8 *)(puVar5 + 0x38);
    uVar17 = *(undefined8 *)(puVar5 + 0x30);
    uVar15 = *(undefined8 *)(puVar5 + 0x48);
    uVar14 = *(undefined8 *)(puVar5 + 0x40);
    local_130[5] = *(undefined8 *)(puVar5 + 0x28);
    local_130[4] = uVar16;
    local_130[7] = uVar18;
    local_130[6] = uVar17;
    uVar17 = *(undefined8 *)(puVar5 + 0x54);
    uVar16 = *(undefined8 *)(puVar5 + 0x4c);
    local_130[9] = uVar15;
    local_130[8] = uVar14;
    *(undefined8 *)((long)local_130 + 0x54) = uVar17;
    *(undefined8 *)((long)local_130 + 0x4c) = uVar16;
    uVar14 = *(undefined8 *)puVar5;
    uVar16 = *(undefined8 *)(puVar5 + 0x18);
    uVar15 = *(undefined8 *)(puVar5 + 0x10);
    local_130[1] = *(undefined8 *)(puVar5 + 8);
    *local_130 = uVar14;
    local_130[3] = uVar16;
    local_130[2] = uVar15;
                    /* try { // try from 0012af30 to 0012af3f has its CatchHandler @ 0012b080 */
    margelo::nitro::TypeInfo::demangleName((basic_string *)&local_140,true);
    if ((local_140 & 1) != 0) {
      operator_delete(local_130);
    }
    if ((local_b0[0] & 1) != 0) {
      operator_delete(local_a0);
    }
    if (plVar9 == (long *)0x0) goto LAB_0012afc8;
  }
  else {
    plVar9 = (long *)std::__ndk1::__shared_weak_count::lock();
    if ((plVar9 == (long *)0x0) || (plVar12 = *(long **)(param_1 + 0x20), plVar12 == (long *)0x0))
    goto LAB_0012aeec;
    uStack_138 = *(undefined8 *)(param_1 + 0x10);
    local_140 = *(ulong *)(param_1 + 8);
    local_130 = *(undefined8 **)(param_1 + 0x18);
    if (local_130 != (undefined8 *)0x0) {
      FUN_001222d0(1);
    }
    cVar8 = local_168;
    pcVar7 = local_170;
    uVar6 = uStack_178;
    uVar1 = local_180;
    local_118 = local_118 & 0xffffffffffffff00;
    local_128 = local_190;
    local_120 = local_188;
    local_100 = local_168 != '\0';
    if ((bool)local_100) {
      uStack_178 = 0;
      local_170 = (char *)0x0;
      local_180 = 0;
      local_108 = pcVar7;
      uStack_110 = uVar6;
      local_118 = uVar1;
    }
    local_90 = (byte *)0x0;
    uStack_f0 = uStack_158;
    local_f8 = local_160;
    uStack_e7 = uStack_14f;
    uStack_ef = uStack_157;
    uStack_e8 = uStack_150;
                    /* try { // try from 0012ae3c to 0012ae43 has its CatchHandler @ 0012b070 */
    local_90 = (byte *)operator_new(0x70);
    pcVar7 = local_108;
    uVar6 = uStack_110;
    uVar1 = local_118;
    *(undefined ***)local_90 = &PTR_FUN_0013cd10;
    *(undefined8 *)((ulong)&local_140 | 8) = 0;
    ((undefined8 *)((ulong)&local_140 | 8))[1] = 0;
    *(undefined8 *)(local_90 + 0x10) = uStack_138;
    *(ulong *)(local_90 + 8) = local_140;
    *(undefined8 **)(local_90 + 0x18) = local_130;
    *(undefined8 *)(local_90 + 0x20) = local_190;
    local_90[0x28] = local_188;
    local_90[0x30] = 0;
    local_90[0x48] = 0;
    if (cVar8 != '\0') {
      uStack_110 = 0;
      local_108 = (char *)0x0;
      local_118 = 0;
      *(ulong *)(local_90 + 0x38) = uVar6;
      *(ulong *)(local_90 + 0x30) = uVar1;
      *(char **)(local_90 + 0x40) = pcVar7;
      local_90[0x48] = 1;
    }
    *(undefined8 *)(local_90 + 0x61) = uStack_14f;
    *(ulong *)(local_90 + 0x59) = CONCAT17(uStack_150,uStack_157);
    *(ulong *)(local_90 + 0x58) = CONCAT71(uStack_157,uStack_158);
    *(undefined8 *)(local_90 + 0x50) = local_160;
                    /* try { // try from 0012aec0 to 0012aecf has its CatchHandler @ 0012b038 */
    (**(code **)(*plVar12 + 0x18))(plVar12,local_b0);
    if (local_90 == local_b0) {
      lVar11 = 4;
      pbVar10 = local_b0;
LAB_0012af80:
      (**(code **)(*(long *)pbVar10 + lVar11 * 8))();
    }
    else if (local_90 != (byte *)0x0) {
      lVar11 = 5;
      pbVar10 = local_90;
      goto LAB_0012af80;
    }
    if ((cVar8 != '\0') && ((local_118 & 1) != 0)) {
      operator_delete(local_108);
    }
  }
  lVar11 = FUN_001222d0(0xffffffffffffffff,plVar9 + 1);
  if (lVar11 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
LAB_0012afc8:
  if ((local_168 != '\0') && ((local_180 & 1) != 0)) {
    operator_delete(local_170);
  }
  if ((cVar2 != '\0') && ((bVar13 & 1) != 0)) {
    operator_delete(unaff_x19);
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012b0e8  FUN_0012b0e8 =====

void FUN_0012b0e8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0013dc20) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0012b138  FUN_0012b138 =====

undefined * FUN_0012b138(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_0013dc28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012b178  FUN_0012b178 =====

void FUN_0012b178(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(char *)(param_1 + 0x40) != '\0') && ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x38));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_00129378(param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012b1e0  FUN_0012b1e0 =====

void FUN_0012b1e0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0013cd10;
  if ((*(char *)(param_1 + 9) != '\0') && ((*(byte *)(param_1 + 6) & 1) != 0)) {
    operator_delete((void *)param_1[8]);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_00129378(param_1 + 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012b254  FUN_0012b254 =====

void FUN_0012b254(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0013cd10;
  if ((*(char *)(param_1 + 9) != '\0') && ((*(byte *)(param_1 + 6) & 1) != 0)) {
    operator_delete((void *)param_1[8]);
  }
  FUN_00129378(param_1 + 2);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012b2c8  FUN_0012b2c8 =====

undefined8 * FUN_0012b2c8(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x70);
  *puVar2 = &PTR_FUN_0013cd10;
                    /* try { // try from 0012b304 to 0012b30b has its CatchHandler @ 0012b334 */
  FUN_0012b784(puVar2 + 1,param_1 + 8);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012b35c  FUN_0012b35c =====

void FUN_0012b35c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0013cd10;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0012b784(param_2 + 1,param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012b3ac  FUN_0012b3ac =====

void FUN_0012b3ac(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(char *)(param_1 + 0x48) != '\0') && ((*(byte *)(param_1 + 0x30) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x40));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_00129378(param_1 + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012b414  FUN_0012b414 =====

void FUN_0012b414(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(char *)((long)param_1 + 0x48) != '\0') && ((*(byte *)((long)param_1 + 0x30) & 1) != 0)) {
    operator_delete(*(void **)((long)param_1 + 0x40));
  }
  FUN_00129378((long)param_1 + 0x10);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012b47c  FUN_0012b47c =====

void FUN_0012b47c(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  runtime_error *this;
  Value aVStack_e0 [16];
  Value aVStack_d0 [24];
  undefined4 local_b8 [6];
  undefined8 local_a0;
  undefined1 local_98;
  ulong local_90;
  undefined8 uStack_88;
  void *local_80;
  char local_78;
  undefined8 local_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  Value aVStack_50 [24];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_a0 = *(undefined8 *)(param_1 + 0x20);
  local_98 = *(undefined1 *)(param_1 + 0x28);
  local_90 = local_90 & 0xffffffffffffff00;
  local_78 = *(char *)(param_1 + 0x48) != '\0';
  if ((bool)local_78) {
    uStack_88 = *(undefined8 *)(param_1 + 0x38);
    local_90 = *(ulong *)(param_1 + 0x30);
    local_80 = *(void **)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  local_70 = *(undefined8 *)(param_1 + 0x50);
  uStack_5f = *(undefined8 *)(param_1 + 0x61);
  uStack_68 = (undefined1)*(undefined8 *)(param_1 + 0x58);
  uStack_67 = (undefined7)*(undefined8 *)(param_1 + 0x59);
  uStack_60 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x59) >> 0x38);
  if ((*(long *)(param_1 + 0x10) == 0) || ((*(byte *)(*(long *)(param_1 + 0x18) + 0x10) & 1) != 0))
  {
                    /* try { // try from 0012b5ac to 0012b5bf has its CatchHandler @ 0012b6bc */
    FUN_0012739c(local_b8,PTR_typeinfo_name_0013dc30,1);
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0012b5cc to 0012b5df has its CatchHandler @ 0012b69c */
    std::__ndk1::operator+("Cannot call ",(basic_string *)local_b8);
                    /* try { // try from 0012b5e0 to 0012b5f3 has its CatchHandler @ 0012b684 */
    FUN_0012425c(aVStack_50,aVStack_d0," - the underlying `jsi::Function` has already been deleted!"
                );
                    /* try { // try from 0012b5f8 to 0012b62f has its CatchHandler @ 0012b650 */
    std::runtime_error::runtime_error(this,(basic_string *)aVStack_50);
    if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_0013dcd0,PTR__runtime_error_0013dc98);
    }
  }
  else {
    plVar1 = *(long **)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 0012b50c to 0012b51b has its CatchHandler @ 0012b6bc */
    FUN_00126704(aVStack_e0,plVar1,&local_a0);
    facebook::jsi::Value::Value(aVStack_50,aVStack_e0);
    local_b8[0] = 0;
                    /* try { // try from 0012b534 to 0012b54f has its CatchHandler @ 0012b630 */
    (**(code **)(*plVar1 + 0x280))(aVStack_d0,plVar1,uVar2,local_b8,aVStack_50,1);
    facebook::jsi::Value::~Value((Value *)local_b8);
    facebook::jsi::Value::~Value(aVStack_50);
    facebook::jsi::Value::~Value(aVStack_e0);
    facebook::jsi::Value::~Value(aVStack_d0);
    if ((local_78 != '\0') && ((local_90 & 1) != 0)) {
      operator_delete(local_80);
    }
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012b6f4  FUN_0012b6f4 =====

void FUN_0012b6f4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0013dc38) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0012b744  FUN_0012b744 =====

undefined * FUN_0012b744(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_0013dc40;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012b784  FUN_0012b784 =====

void FUN_0012b784(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  *param_1 = *param_2;
  lVar1 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    FUN_001222d0(1);
  }
  uVar2 = *(undefined1 *)(param_2 + 4);
  uVar5 = param_2[3];
  this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (param_1 + 5);
  *this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  *(undefined1 *)(param_1 + 4) = uVar2;
  param_1[3] = uVar5;
  *(undefined1 *)(param_1 + 8) = 0;
  if (*(char *)(param_2 + 8) != '\0') {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      uVar6 = param_2[6];
      uVar5 = param_2[5];
      param_1[7] = param_2[7];
      param_1[6] = uVar6;
      *(undefined8 *)this = uVar5;
    }
    else {
                    /* try { // try from 0012b814 to 0012b81b has its CatchHandler @ 0012b85c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external(this,(char *)param_2[7],param_2[6]);
    }
    *(undefined1 *)(param_1 + 8) = 1;
  }
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    uVar5 = *(undefined8 *)((long)param_2 + 0x51);
    uVar7 = param_2[10];
    uVar6 = param_2[9];
    *(undefined8 *)((long)param_1 + 0x59) = *(undefined8 *)((long)param_2 + 0x59);
    *(undefined8 *)((long)param_1 + 0x51) = uVar5;
    param_1[10] = uVar7;
    param_1[9] = uVar6;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012b89c  FUN_0012b89c =====

void FUN_0012b89c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0013c630;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete((void *)param_1[3]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012b908  FUN_0012b908 =====

void FUN_0012b908(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0013c630;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012b970  FUN_0012b970 =====

undefined8 * FUN_0012b970(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x38);
  bVar2 = *(byte *)(param_1 + 8);
  *puVar4 = &PTR_FUN_0013c630;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 0012b9d0 to 0012b9d3 has its CatchHandler @ 0012ba0c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar4 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    puVar4[5] = *(undefined8 *)(param_1 + 0x28);
    puVar4[4] = uVar6;
    *(undefined4 *)(puVar4 + 6) = uVar1;
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012ba34  FUN_0012ba34 =====

void FUN_0012ba34(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0013c630;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar4;
    param_2[1] = uVar3;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x30);
    param_2[5] = uVar4;
    param_2[4] = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012bacc  FUN_0012bacc =====

void FUN_0012bacc(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012bb2c  FUN_0012bb2c =====

void FUN_0012bb2c(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012bb88  FUN_0012bb88 =====

void FUN_0012bb88(long param_1,Runtime *param_2,long param_3,undefined8 param_4,ulong *param_5)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined ***pppuVar7;
  JSError *pJVar8;
  runtime_error *this;
  long *plVar9;
  ulong uVar10;
  code *pcVar11;
  undefined1 auStack_160 [24];
  long *local_148;
  long *local_140;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 *local_b8 [3];
  undefined **local_a0;
  long *plStack_98;
  long *local_90;
  undefined ***local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar10 = *param_5;
  local_b8[0] = (undefined8 *)
                (**(code **)(*(long *)param_2 + 0x88))(param_2,*(undefined8 *)(param_3 + 8));
                    /* try { // try from 0012bbe4 to 0012bbf3 has its CatchHandler @ 0012c3e0 */
  (**(code **)(*(long *)param_2 + 0x160))(&local_a0,param_2,local_b8);
  plVar3 = plStack_98;
  if ((local_a0 == (undefined **)0x0) ||
     (lVar5 = __dynamic_cast(local_a0,PTR_typeinfo_0013dcf8,PTR_typeinfo_0013db48,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar9 = (long *)0x0;
    if (plVar3 != (long *)0x0) goto LAB_0012bc40;
  }
  else if (plVar3 == (long *)0x0) {
    plVar9 = (long *)0x0;
  }
  else {
    FUN_001229c0(1,plVar3 + 1);
    plVar9 = plVar3;
LAB_0012bc40:
    lVar6 = FUN_001222d0(0xffffffffffffffff,plVar3 + 1);
    if (lVar6 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (local_b8[0] != (undefined8 *)0x0) {
    (**(code **)*local_b8[0])();
  }
  if (uVar10 != 0) {
                    /* try { // try from 0012be68 to 0012be77 has its CatchHandler @ 0012c580 */
    FUN_00125f9c(&local_a0,*(undefined4 *)(param_1 + 0x30),param_1 + 8,lVar5);
    pJVar8 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0012be84 to 0012be97 has its CatchHandler @ 0012c560 */
    std::__ndk1::operator+("`",(basic_string *)&local_a0);
                    /* try { // try from 0012be98 to 0012beab has its CatchHandler @ 0012c548 */
    FUN_0012425c(auStack_118,auStack_130,"` expected ");
                    /* try { // try from 0012beac to 0012beb7 has its CatchHandler @ 0012c518 */
    std::__ndk1::to_string(0);
                    /* try { // try from 0012beb8 to 0012bec7 has its CatchHandler @ 0012c4f4 */
    FUN_00126328(auStack_100,auStack_118,&local_148);
                    /* try { // try from 0012bec8 to 0012bedb has its CatchHandler @ 0012c4d0 */
    FUN_0012425c(auStack_e8,auStack_100," arguments, but received ");
                    /* try { // try from 0012bedc to 0012bee7 has its CatchHandler @ 0012c4ac */
    std::__ndk1::to_string(uVar10);
                    /* try { // try from 0012bee8 to 0012bef7 has its CatchHandler @ 0012c488 */
    FUN_00126328(auStack_d0,auStack_e8,auStack_160);
                    /* try { // try from 0012bef8 to 0012bf0b has its CatchHandler @ 0012c460 */
    FUN_0012425c(local_b8,auStack_d0,&DAT_0011349f);
                    /* try { // try from 0012bf10 to 0012bf4b has its CatchHandler @ 0012c400 */
    facebook::jsi::JSError::JSError(pJVar8,param_2,local_b8);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar8,PTR_typeinfo_0013dcf0,PTR__JSError_0013dcb0);
    }
    goto LAB_0012c5a4;
  }
  pcVar11 = *(code **)(param_1 + 0x20);
  uVar10 = *(ulong *)(param_1 + 0x28);
  if (((*
        PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_23playagerangedeclaration33HybridPlayAgeRangeDeclarationSpecENSt6__ndk110shared_ptrINS0_7PromiseINS3_29PlayAgeRangeDeclarationResultEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_0013db58
       & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(
                                 PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_23playagerangedeclaration33HybridPlayAgeRangeDeclarationSpecENSt6__ndk110shared_ptrINS0_7PromiseINS3_29PlayAgeRangeDeclarationResultEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_0013db58
                                 ),
     puVar2 = 
     PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_23playagerangedeclaration33HybridPlayAgeRangeDeclarationSpecENSt6__ndk110shared_ptrINS0_7PromiseINS3_29PlayAgeRangeDeclarationResultEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_0013db50
     , iVar4 != 0)) {
    *(undefined4 *)
     PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_23playagerangedeclaration33HybridPlayAgeRangeDeclarationSpecENSt6__ndk110shared_ptrINS0_7PromiseINS3_29PlayAgeRangeDeclarationResultEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_0013db50
         = 0;
    __cxa_atexit(PTR__Value_0013dcb8,puVar2,&PTR_LOOP_0013c2c0);
    __cxa_guard_release(
                       PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_23playagerangedeclaration33HybridPlayAgeRangeDeclarationSpecENSt6__ndk110shared_ptrINS0_7PromiseINS3_29PlayAgeRangeDeclarationResultEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_0013db58
                       );
  }
  if ((uVar10 & 1) != 0) {
    pcVar11 = *(code **)(pcVar11 + *(long *)(lVar5 + ((long)uVar10 >> 1)));
  }
                    /* try { // try from 0012bca4 to 0012bcab has its CatchHandler @ 0012c0f4 */
  (*pcVar11)(&local_148);
  plVar3 = local_140;
  iVar4 = (int)local_148[0x12];
  if (iVar4 == 2) {
                    /* try { // try from 0012bd50 to 0012bd5b has its CatchHandler @ 0012c0e0 */
    FUN_00126f94(&local_a0,param_2);
                    /* try { // try from 0012bd5c to 0012bd6b has its CatchHandler @ 0012c08c */
    margelo::nitro::CommonGlobals::Promise::rejected(param_2,(Value *)&local_a0);
LAB_0012bd6c:
    facebook::jsi::Value::~Value((Value *)&local_a0);
  }
  else {
    if (iVar4 == 1) {
                    /* try { // try from 0012bd30 to 0012bd3b has its CatchHandler @ 0012c0e0 */
      FUN_0012c6c4(&local_a0,param_2);
                    /* try { // try from 0012bd3c to 0012bd4b has its CatchHandler @ 0012c090 */
      margelo::nitro::CommonGlobals::Promise::resolved(param_2,(Value *)&local_a0);
      goto LAB_0012bd6c;
    }
    if (iVar4 != 0) {
                    /* try { // try from 0012bf90 to 0012bfa3 has its CatchHandler @ 0012c0e0 */
      FUN_0012739c(&local_a0,PTR_typeinfo_name_0013dbf8,1);
      this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0012bfb0 to 0012bfc3 has its CatchHandler @ 0012c068 */
      std::__ndk1::operator+("Promise<",(basic_string *)&local_a0);
                    /* try { // try from 0012bfc4 to 0012bfd7 has its CatchHandler @ 0012c04c */
      FUN_0012425c(local_b8,auStack_d0,"> has invalid state!");
                    /* try { // try from 0012bfdc to 0012c013 has its CatchHandler @ 0012c014 */
      std::runtime_error::runtime_error(this,(basic_string *)local_b8);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,PTR_typeinfo_0013dcd0,PTR__runtime_error_0013dc98);
      }
      goto LAB_0012c5a4;
    }
    if (local_140 == (long *)0x0) {
      local_80 = &local_a0;
      local_a0 = &PTR_FUN_0013c6b0;
      plStack_98 = local_148;
      local_90 = (long *)0x0;
    }
    else {
      FUN_001229c0(1,local_140 + 1);
      local_a0 = &PTR_FUN_0013c6b0;
      plStack_98 = local_148;
      local_90 = plVar3;
      FUN_001229c0(1,plVar3 + 1);
      local_80 = &local_a0;
      lVar5 = FUN_001222d0(0xffffffffffffffff,plVar3 + 1);
      if (lVar5 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
                    /* try { // try from 0012bd98 to 0012bdab has its CatchHandler @ 0012c0a4 */
    margelo::nitro::CommonGlobals::Promise::callConstructor(param_2,(function *)&local_a0);
    if (local_80 == &local_a0) {
      lVar5 = 4;
      pppuVar7 = &local_a0;
LAB_0012bdcc:
      (*(code *)(*pppuVar7)[lVar5])();
    }
    else if (local_80 != (undefined ***)0x0) {
      lVar5 = 5;
      pppuVar7 = local_80;
      goto LAB_0012bdcc;
    }
  }
  if ((local_140 != (long *)0x0) &&
     (lVar5 = FUN_001222d0(0xffffffffffffffff,local_140 + 1), lVar5 == 0)) {
    (**(code **)(*local_140 + 0x10))(local_140);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if ((plVar9 != (long *)0x0) && (lVar5 = FUN_001222d0(0xffffffffffffffff,plVar9 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
LAB_0012c5a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012c5a8  FUN_0012c5a8 =====

void FUN_0012c5a8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0013dc00) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0012c5f8  FUN_0012c5f8 =====

undefined * FUN_0012c5f8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_0013dc08;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012c638  FUN_0012c638 =====

void FUN_0012c638(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_001222d0(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
     ) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012c6c4  FUN_0012c6c4 =====

void FUN_0012c6c4(undefined4 *param_1,Runtime *param_2,undefined1 *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  uint local_80 [2];
  double local_78;
  basic_string local_70;
  undefined8 local_6f;
  char cStack_67;
  char cStack_66;
  uint uStack_65;
  char cStack_61;
  char cStack_60;
  undefined6 uStack_5f;
  undefined1 uStack_59;
  undefined8 local_58;
  double local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  (**(code **)(*(long *)param_2 + 0x130))(&local_58,param_2);
  local_70 = (basic_string)0x14;
  cStack_67 = 0x6c;
  cStack_66 = 0x65;
  local_6f._0_1_ = s_isEligible_001133af[0];
  local_6f._1_1_ = s_isEligible_001133af[1];
  local_6f._2_1_ = s_isEligible_001133af[2];
  local_6f._3_1_ = s_isEligible_001133af[3];
  local_6f._4_1_ = s_isEligible_001133af[4];
  local_6f._5_1_ = s_isEligible_001133af[5];
  local_6f._6_1_ = s_isEligible_001133af[6];
  local_6f._7_1_ = s_isEligible_001133af[7];
  uStack_65 = uStack_65 & 0xffffff00;
                    /* try { // try from 0012c72c to 0012c737 has its CatchHandler @ 0012cb7c */
  uVar5 = margelo::nitro::PropNameIDCache::get(param_2,&local_70);
  local_80[0] = 2;
  local_78 = (double)CONCAT71(local_78._1_7_,*param_3);
                    /* try { // try from 0012c754 to 0012c763 has its CatchHandler @ 0012cb64 */
  (**(code **)(*(long *)param_2 + 0x1b0))(param_2,&local_58,uVar5,local_80);
  facebook::jsi::Value::~Value((Value *)local_80);
  if (((byte)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_59,CONCAT61(uStack_5f,cStack_60)));
  }
  local_70 = (basic_string)0x12;
  cStack_67 = 100;
  cStack_66 = 0;
  local_6f._0_1_ = s_installId_001133ba[0];
  local_6f._1_1_ = s_installId_001133ba[1];
  local_6f._2_1_ = s_installId_001133ba[2];
  local_6f._3_1_ = s_installId_001133ba[3];
  local_6f._4_1_ = s_installId_001133ba[4];
  local_6f._5_1_ = s_installId_001133ba[5];
  local_6f._6_1_ = s_installId_001133ba[6];
  local_6f._7_1_ = s_installId_001133ba[7];
                    /* try { // try from 0012c79c to 0012c7a7 has its CatchHandler @ 0012cb60 */
  uVar5 = margelo::nitro::PropNameIDCache::get(param_2,&local_70);
  uVar4 = (uint)(byte)param_3[0x20];
  if (param_3[0x20] != 0) {
    uVar1 = (ulong)((byte)param_3[8] >> 1);
    puVar3 = param_3 + 9;
    if ((param_3[8] & 1) != 0) {
      uVar1 = *(ulong *)(param_3 + 0x10);
      puVar3 = *(undefined1 **)(param_3 + 0x18);
    }
                    /* try { // try from 0012c7d8 to 0012c7e3 has its CatchHandler @ 0012cb30 */
    (**(code **)(*(long *)param_2 + 0x110))(&local_50,param_2,puVar3,uVar1);
    local_78 = local_50;
    uVar4 = 6;
  }
  local_80[0] = uVar4;
                    /* try { // try from 0012c7fc to 0012c80f has its CatchHandler @ 0012cb5c */
  (**(code **)(*(long *)param_2 + 0x1b0))(param_2,&local_58,uVar5,local_80);
  facebook::jsi::Value::~Value((Value *)local_80);
  if (((byte)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_59,CONCAT61(uStack_5f,cStack_60)));
  }
  local_70 = (basic_string)0x14;
  cStack_67 = 0x75;
  cStack_66 = 0x73;
  local_6f._0_1_ = s_userStatus_00113d4e[0];
  local_6f._1_1_ = s_userStatus_00113d4e[1];
  local_6f._2_1_ = s_userStatus_00113d4e[2];
  local_6f._3_1_ = s_userStatus_00113d4e[3];
  local_6f._4_1_ = s_userStatus_00113d4e[4];
  local_6f._5_1_ = s_userStatus_00113d4e[5];
  local_6f._6_1_ = s_userStatus_00113d4e[6];
  local_6f._7_1_ = s_userStatus_00113d4e[7];
  uStack_65 = uStack_65 & 0xffffff00;
                    /* try { // try from 0012c84c to 0012c857 has its CatchHandler @ 0012cb58 */
  uVar5 = margelo::nitro::PropNameIDCache::get(param_2,&local_70);
  local_80[0] = (uint)(byte)param_3[0x2c];
  if (param_3[0x2c] != 0) {
    local_78 = (double)*(int *)(param_3 + 0x28);
    local_80[0] = 3;
  }
                    /* try { // try from 0012c880 to 0012c88f has its CatchHandler @ 0012cb54 */
  (**(code **)(*(long *)param_2 + 0x1b0))(param_2,&local_58,uVar5,local_80);
  facebook::jsi::Value::~Value((Value *)local_80);
  if (((byte)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_59,CONCAT61(uStack_5f,cStack_60)));
  }
  local_70 = (basic_string)0xa;
  local_6f = CONCAT26(local_6f._6_2_,0x726f727265);
                    /* try { // try from 0012c8c4 to 0012c8cf has its CatchHandler @ 0012cb50 */
  uVar5 = margelo::nitro::PropNameIDCache::get(param_2,&local_70);
  uVar4 = (uint)(byte)param_3[0x48];
  if (param_3[0x48] != 0) {
    uVar1 = (ulong)((byte)param_3[0x30] >> 1);
    puVar3 = param_3 + 0x31;
    if ((param_3[0x30] & 1) != 0) {
      uVar1 = *(ulong *)(param_3 + 0x38);
      puVar3 = *(undefined1 **)(param_3 + 0x40);
    }
                    /* try { // try from 0012c900 to 0012c90b has its CatchHandler @ 0012cb2c */
    (**(code **)(*(long *)param_2 + 0x110))(&local_50,param_2,puVar3,uVar1);
    local_78 = local_50;
    uVar4 = 6;
  }
  local_80[0] = uVar4;
                    /* try { // try from 0012c924 to 0012c937 has its CatchHandler @ 0012cb4c */
  (**(code **)(*(long *)param_2 + 0x1b0))(param_2,&local_58,uVar5,local_80);
  facebook::jsi::Value::~Value((Value *)local_80);
  if (((byte)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_59,CONCAT61(uStack_5f,cStack_60)));
  }
  cStack_67 = 0;
  local_70 = (basic_string)0x10;
  local_6f = 0x7265776f4c656761;
                    /* try { // try from 0012c970 to 0012c97b has its CatchHandler @ 0012cb48 */
  uVar5 = margelo::nitro::PropNameIDCache::get(param_2,&local_70);
  local_80[0] = (uint)(byte)param_3[0x58];
  if (param_3[0x58] != 0) {
    local_78 = *(double *)(param_3 + 0x50);
    local_80[0] = 3;
  }
                    /* try { // try from 0012c9a0 to 0012c9af has its CatchHandler @ 0012cb44 */
  (**(code **)(*(long *)param_2 + 0x1b0))(param_2,&local_58,uVar5,local_80);
  facebook::jsi::Value::~Value((Value *)local_80);
  if (((byte)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_59,CONCAT61(uStack_5f,cStack_60)));
  }
  cStack_67 = 0;
  local_70 = (basic_string)0x10;
  local_6f = 0x7265707055656761;
                    /* try { // try from 0012c9e8 to 0012c9f3 has its CatchHandler @ 0012cb40 */
  uVar5 = margelo::nitro::PropNameIDCache::get(param_2,&local_70);
  local_80[0] = (uint)(byte)param_3[0x68];
  if (param_3[0x68] != 0) {
    local_78 = *(double *)(param_3 + 0x60);
    local_80[0] = 3;
  }
                    /* try { // try from 0012ca18 to 0012ca27 has its CatchHandler @ 0012cb3c */
  (**(code **)(*(long *)param_2 + 0x1b0))(param_2,&local_58,uVar5,local_80);
  facebook::jsi::Value::~Value((Value *)local_80);
  if (((byte)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_59,CONCAT61(uStack_5f,cStack_60)));
  }
  local_70 = (basic_string)0x2c;
  uStack_59 = 0;
  cStack_67 = (char)s_mostRecentApprovalDate_001139d3._8_6_;
  cStack_66 = SUB61(s_mostRecentApprovalDate_001139d3._8_6_,1);
  uStack_65 = SUB64(s_mostRecentApprovalDate_001139d3._8_6_,2);
  local_6f._0_1_ = s_mostRecentApprovalDate_001139d3[0];
  local_6f._1_1_ = s_mostRecentApprovalDate_001139d3[1];
  local_6f._2_1_ = s_mostRecentApprovalDate_001139d3[2];
  local_6f._3_1_ = s_mostRecentApprovalDate_001139d3[3];
  local_6f._4_1_ = s_mostRecentApprovalDate_001139d3[4];
  local_6f._5_1_ = s_mostRecentApprovalDate_001139d3[5];
  local_6f._6_1_ = s_mostRecentApprovalDate_001139d3[6];
  local_6f._7_1_ = s_mostRecentApprovalDate_001139d3[7];
  cStack_61 = (char)s_mostRecentApprovalDate_001139d3._14_2_;
  cStack_60 = SUB21(s_mostRecentApprovalDate_001139d3._14_2_,1);
  uStack_5f._0_1_ = s_mostRecentApprovalDate_001139d3[0x10];
  uStack_5f._1_1_ = s_mostRecentApprovalDate_001139d3[0x11];
  uStack_5f._2_1_ = s_mostRecentApprovalDate_001139d3[0x12];
  uStack_5f._3_1_ = s_mostRecentApprovalDate_001139d3[0x13];
  uStack_5f._4_1_ = s_mostRecentApprovalDate_001139d3[0x14];
  uStack_5f._5_1_ = s_mostRecentApprovalDate_001139d3[0x15];
                    /* try { // try from 0012ca64 to 0012ca6f has its CatchHandler @ 0012cb38 */
  uVar5 = margelo::nitro::PropNameIDCache::get(param_2,&local_70);
  uVar4 = (uint)(byte)param_3[0x88];
  if (param_3[0x88] != 0) {
    uVar1 = (ulong)((byte)param_3[0x70] >> 1);
    puVar3 = param_3 + 0x71;
    if ((param_3[0x70] & 1) != 0) {
      uVar1 = *(ulong *)(param_3 + 0x78);
      puVar3 = *(undefined1 **)(param_3 + 0x80);
    }
                    /* try { // try from 0012caa0 to 0012caab has its CatchHandler @ 0012cb28 */
    (**(code **)(*(long *)param_2 + 0x110))(&local_50,param_2,puVar3,uVar1);
    local_78 = local_50;
    uVar4 = 6;
  }
  local_80[0] = uVar4;
                    /* try { // try from 0012cac4 to 0012cad7 has its CatchHandler @ 0012cb34 */
  (**(code **)(*(long *)param_2 + 0x1b0))(param_2,&local_58,uVar5,local_80);
  facebook::jsi::Value::~Value((Value *)local_80);
  if (((byte)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_59,CONCAT61(uStack_5f,cStack_60)));
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_58;
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0012cbc0  FUN_0012cbc0 =====

void FUN_0012cbc0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0013c6b0;
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_001222d0(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012cc58  FUN_0012cc58 =====

void FUN_0012cc58(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0013c6b0;
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_001222d0(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012cce4  FUN_0012cce4 =====

void FUN_0012cce4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x18);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_0013c6b0;
  puVar4[1] = uVar1;
  puVar4[2] = lVar2;
  if (lVar2 != 0) {
    FUN_001229c0(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


// ===== 0012cd5c  FUN_0012cd5c =====

void FUN_0012cd5c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0013c6b0;
  param_2[1] = uVar1;
  param_2[2] = lVar2;
  if (lVar2 != 0) {
    FUN_001229c0(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012cdc0  FUN_0012cdc0 =====

void FUN_0012cdc0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x10);
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_001222d0(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012ce4c  FUN_0012ce4c =====

void FUN_0012ce4c(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)((long)param_1 + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_001222d0(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012cecc  FUN_0012cecc =====

void FUN_0012cecc(undefined4 *param_1,long param_2,Runtime *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  Runtime *pRVar4;
  ulong uVar5;
  Runtime **ppRVar6;
  void *pvVar7;
  long *plVar8;
  long lVar9;
  Runtime *pRVar10;
  long lVar11;
  long lVar12;
  void *pvVar13;
  Runtime ***pppRVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  IRuntime *pIVar19;
  ulong uVar20;
  void *pvVar21;
  Runtime *local_148;
  Runtime *local_140;
  undefined8 *local_138;
  Runtime *local_130;
  Runtime *local_128;
  Runtime *local_110 [2];
  Runtime *local_100;
  Runtime *local_f8;
  Runtime *local_f0;
  Runtime *local_e0 [2];
  Runtime *local_d0;
  Runtime *local_c8;
  Runtime *local_c0;
  undefined8 local_b8;
  Runtime **local_b0 [2];
  long local_a0 [4];
  Runtime *local_80 [2];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  pIVar19 = (IRuntime *)*param_5;
  facebook::jsi::Value::asObject(pIVar19);
                    /* try { // try from 0012cf18 to 0012cf27 has its CatchHandler @ 0012d914 */
  facebook::jsi::Object::asFunction((IRuntime *)&local_d0);
  if (local_d0 != (Runtime *)0x0) {
    (*(code *)**(undefined8 **)local_d0)();
  }
  local_130 = (Runtime *)0x0;
  local_128 = (Runtime *)0x0;
                    /* try { // try from 0012cf40 to 0012cf4b has its CatchHandler @ 0012d8f4 */
  margelo::nitro::JSICache::getOrCreateCache(param_3);
                    /* try { // try from 0012cf50 to 0012cf5b has its CatchHandler @ 0012d8e4 */
  FUN_0012902c(&local_100,local_d0,&local_138);
                    /* try { // try from 0012cf5c to 0012cf67 has its CatchHandler @ 0012d8d4 */
  FUN_00129270(&local_130,&local_100);
  if (local_f8 != (Runtime *)0x0) {
    uVar5 = FUN_001222d0(0xffffffffffffffff);
    if (uVar5 < 2) {
      if ((*(byte *)((long)local_f8 + 0x10) & 1) == 0) {
        if (local_100 != (Runtime *)0x0) {
          if (*(undefined8 **)local_100 != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)local_100)();
          }
          operator_delete(local_100);
        }
        local_100 = (Runtime *)0x0;
        *(undefined4 *)((long)local_f8 + 0x10) = 1;
        goto LAB_0012cfc8;
      }
      lVar11 = *(long *)local_f8;
      pRVar10 = local_f8;
    }
    else {
LAB_0012cfc8:
      lVar11 = *(long *)local_f8;
      pRVar10 = local_f8;
    }
    if (((lVar11 == 0) && (*(long *)((long)pRVar10 + 8) == 0)) && (pRVar10 != (Runtime *)0x0)) {
      std::__ndk1::mutex::~mutex((mutex *)((long)pRVar10 + 0x14));
      operator_delete(pRVar10);
    }
  }
  std::__ndk1::mutex::unlock();
  if ((local_c8 != (Runtime *)0x0) &&
     (lVar11 = FUN_001222d0(0xffffffffffffffff,(long *)((long)local_c8 + 8)), lVar11 == 0)) {
    (**(code **)(*(long *)local_c8 + 0x10))(local_c8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar4 = local_128;
  pRVar10 = local_130;
  local_130 = (Runtime *)0x0;
  local_128 = (Runtime *)0x0;
  local_f8 = pRVar10;
  local_f0 = pRVar4;
  local_100 = param_3;
                    /* try { // try from 0012d048 to 0012d053 has its CatchHandler @ 0012d8c4 */
  margelo::nitro::Dispatcher::getRuntimeGlobalDispatcher(param_3);
  if (local_140 != (Runtime *)0x0) {
    FUN_001229c0(1,local_140 + 0x10);
  }
  local_c8 = pRVar10;
  local_f8 = (Runtime *)0x0;
  local_f0 = (Runtime *)0x0;
  local_c0 = pRVar4;
  local_d0 = param_3;
  if (local_140 != (Runtime *)0x0) {
    FUN_001229c0(1,local_140 + 0x10);
  }
  local_80[0] = (Runtime *)0x0;
                    /* try { // try from 0012d08c to 0012d093 has its CatchHandler @ 0012d8a0 */
  local_80[0] = (Runtime *)operator_new(0x30);
  *(Runtime **)(local_80[0] + 0x10) = pRVar10;
  *(Runtime **)(local_80[0] + 0x18) = pRVar4;
  *(undefined ***)local_80[0] = &PTR_FUN_0013c760;
  *(Runtime **)(local_80[0] + 8) = param_3;
  local_c8 = (Runtime *)0x0;
  local_c0 = (Runtime *)0x0;
  *(Runtime **)(local_80[0] + 0x20) = local_148;
  *(Runtime **)(local_80[0] + 0x28) = local_140;
  local_b8 = 0;
  local_b0[0] = (Runtime **)0x0;
  if (((local_140 != (Runtime *)0x0) &&
      (std::__ndk1::__shared_weak_count::__release_weak(), local_140 != (Runtime *)0x0)) &&
     (lVar11 = FUN_001222d0(0xffffffffffffffff,local_140 + 8), lVar11 == 0)) {
    (**(code **)(*(long *)local_140 + 0x10))(local_140);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (local_f0 != (Runtime *)0x0) {
    uVar5 = FUN_001222d0(0xffffffffffffffff);
    pRVar10 = local_f8;
    if (uVar5 < 2) {
      if ((*(byte *)((long)local_f0 + 0x10) & 1) == 0) {
        if (local_f8 != (Runtime *)0x0) {
          if (*(undefined8 **)local_f8 != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)local_f8)();
          }
          operator_delete(pRVar10);
        }
        local_f8 = (Runtime *)0x0;
        *(undefined4 *)((long)local_f0 + 0x10) = 1;
        goto LAB_0012d154;
      }
      lVar11 = *(long *)local_f0;
      pRVar10 = local_f0;
    }
    else {
LAB_0012d154:
      lVar11 = *(long *)local_f0;
      pRVar10 = local_f0;
    }
    local_f0 = pRVar10;
    if (((lVar11 == 0) && (*(long *)((long)pRVar10 + 8) == 0)) && (pRVar10 != (Runtime *)0x0)) {
      std::__ndk1::mutex::~mutex((mutex *)((long)pRVar10 + 0x14));
      operator_delete(pRVar10);
    }
  }
  if (local_128 != (Runtime *)0x0) {
    uVar5 = FUN_001222d0(0xffffffffffffffff);
    pRVar10 = local_130;
    if (uVar5 < 2) {
      if ((*(byte *)((long)local_128 + 0x10) & 1) == 0) {
        if (local_130 != (Runtime *)0x0) {
          if (*(undefined8 **)local_130 != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)local_130)();
          }
          operator_delete(pRVar10);
        }
        local_130 = (Runtime *)0x0;
        *(undefined4 *)((long)local_128 + 0x10) = 1;
        goto LAB_0012d1e4;
      }
      lVar11 = *(long *)local_128;
      pRVar10 = local_128;
    }
    else {
LAB_0012d1e4:
      lVar11 = *(long *)local_128;
      pRVar10 = local_128;
    }
    local_128 = pRVar10;
    if (((lVar11 == 0) && (*(long *)((long)pRVar10 + 8) == 0)) && (pRVar10 != (Runtime *)0x0)) {
      std::__ndk1::mutex::~mutex((mutex *)((long)pRVar10 + 0x14));
      operator_delete(pRVar10);
    }
  }
  if (local_138 != (undefined8 *)0x0) {
    (**(code **)*local_138)();
  }
  lVar11 = *(long *)(param_2 + 8);
  if (local_80[0] == (Runtime *)0x0) {
    ppRVar6 = local_e0;
LAB_0012d254:
    *ppRVar6 = (Runtime *)0x0;
  }
  else {
    if (local_80[0] != (Runtime *)local_a0) {
      ppRVar6 = local_80;
      local_e0[0] = local_80[0];
      goto LAB_0012d254;
    }
    local_e0[0] = (Runtime *)&local_100;
                    /* try { // try from 0012d26c to 0012d277 has its CatchHandler @ 0012d87c */
    (**(code **)(local_a0[0] + 0x18))(local_a0,&local_100);
  }
  pRVar10 = local_e0[0];
  local_b0[0] = (Runtime **)0x0;
  if (local_e0[0] != (Runtime *)0x0) {
                    /* try { // try from 0012d284 to 0012d28b has its CatchHandler @ 0012d888 */
    ppRVar6 = (Runtime **)operator_new(0x40);
    *ppRVar6 = (Runtime *)&PTR_FUN_0013c880;
    if (pRVar10 == (Runtime *)&local_100) {
      ppRVar6[6] = (Runtime *)(ppRVar6 + 2);
                    /* try { // try from 0012d2c0 to 0012d2cf has its CatchHandler @ 0012d878 */
      (**(code **)(local_100 + 0x18))(&local_100);
      local_b0[0] = ppRVar6;
    }
    else {
      ppRVar6[6] = pRVar10;
      local_e0[0] = (Runtime *)0x0;
      local_b0[0] = ppRVar6;
    }
  }
                    /* try { // try from 0012d2d4 to 0012d2db has its CatchHandler @ 0012d898 */
  std::__ndk1::mutex::lock();
  if (*(int *)(lVar11 + 0x90) == 1) {
    if (local_b0[0] != (Runtime **)0x0) {
                    /* try { // try from 0012d2fc to 0012d39f has its CatchHandler @ 0012d9a4 */
      (**(code **)(*local_b0[0] + 0x30))(local_b0[0],lVar11);
LAB_0012d4d8:
      std::__ndk1::mutex::unlock();
      if (local_b0[0] == &local_d0) {
        lVar11 = 4;
        ppRVar6 = &local_d0;
LAB_0012d53c:
        (**(code **)(*ppRVar6 + lVar11 * 8))();
      }
      else if (local_b0[0] != (Runtime **)0x0) {
        lVar11 = 5;
        ppRVar6 = local_b0[0];
        goto LAB_0012d53c;
      }
      if (local_e0[0] == (Runtime *)&local_100) {
        lVar11 = 4;
        pRVar10 = (Runtime *)&local_100;
LAB_0012d56c:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_e0[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_e0[0];
        goto LAB_0012d56c;
      }
      if (local_80[0] == (Runtime *)local_a0) {
        lVar11 = 4;
        pRVar10 = (Runtime *)local_a0;
LAB_0012d59c:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_80[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_80[0];
        goto LAB_0012d59c;
      }
      FUN_001283f8(local_a0,param_3,pIVar19 + 0x10);
      lVar11 = *(long *)(param_2 + 8);
      if (local_80[0] == (Runtime *)0x0) {
        ppRVar6 = local_110;
LAB_0012d5e4:
        *ppRVar6 = (Runtime *)0x0;
      }
      else {
        if (local_80[0] != (Runtime *)local_a0) {
          ppRVar6 = local_80;
          local_110[0] = local_80[0];
          goto LAB_0012d5e4;
        }
        local_110[0] = (Runtime *)&local_130;
                    /* try { // try from 0012d5fc to 0012d607 has its CatchHandler @ 0012d874 */
        (**(code **)(local_a0[0] + 0x18))(local_a0,&local_130);
      }
      pRVar10 = local_110[0];
      local_b0[0] = (Runtime **)0x0;
      if (local_110[0] != (Runtime *)0x0) {
                    /* try { // try from 0012d614 to 0012d61b has its CatchHandler @ 0012d880 */
        ppRVar6 = (Runtime **)operator_new(0x40);
        *ppRVar6 = (Runtime *)&PTR_FUN_0013ca90;
        if (pRVar10 == (Runtime *)&local_130) {
          ppRVar6[6] = (Runtime *)(ppRVar6 + 2);
                    /* try { // try from 0012d650 to 0012d65f has its CatchHandler @ 0012d870 */
          (**(code **)(local_130 + 0x18))(&local_130);
          local_b0[0] = ppRVar6;
        }
        else {
          ppRVar6[6] = pRVar10;
          local_110[0] = (Runtime *)0x0;
          local_b0[0] = ppRVar6;
        }
      }
                    /* try { // try from 0012d664 to 0012d66b has its CatchHandler @ 0012d890 */
      std::__ndk1::mutex::lock();
      if (*(int *)(lVar11 + 0x90) == 2) {
        if (local_b0[0] == (Runtime **)0x0) goto LAB_0012d81c;
                    /* try { // try from 0012d688 to 0012d6cb has its CatchHandler @ 0012d938 */
        (**(code **)(*local_b0[0] + 0x30))(local_b0[0],lVar11);
      }
      else {
        uVar5 = *(ulong *)(lVar11 + 0xb8);
        if (uVar5 < *(ulong *)(lVar11 + 0xc0)) {
          if (local_b0[0] == (Runtime **)0x0) {
            pppRVar14 = (Runtime ***)(uVar5 + 0x20);
LAB_0012d6d4:
            *pppRVar14 = (Runtime **)0x0;
          }
          else {
            if (local_b0[0] != &local_d0) {
              pppRVar14 = local_b0;
              *(Runtime ***)(uVar5 + 0x20) = local_b0[0];
              goto LAB_0012d6d4;
            }
            *(ulong *)(uVar5 + 0x20) = uVar5;
                    /* try { // try from 0012d6ec to 0012d6f3 has its CatchHandler @ 0012d864 */
            (**(code **)(*local_b0[0] + 0x18))(local_b0[0],uVar5);
          }
          lVar9 = uVar5 + 0x30;
        }
        else {
          lVar9 = FUN_001288a8(lVar11 + 0xb0,&local_d0);
        }
        *(long *)(lVar11 + 0xb8) = lVar9;
      }
      std::__ndk1::mutex::unlock();
      if (local_b0[0] == &local_d0) {
        lVar11 = 4;
        ppRVar6 = &local_d0;
LAB_0012d730:
        (**(code **)(*ppRVar6 + lVar11 * 8))();
      }
      else if (local_b0[0] != (Runtime **)0x0) {
        lVar11 = 5;
        ppRVar6 = local_b0[0];
        goto LAB_0012d730;
      }
      if (local_110[0] == (Runtime *)&local_130) {
        lVar11 = 4;
        pRVar10 = (Runtime *)&local_130;
LAB_0012d760:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_110[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_110[0];
        goto LAB_0012d760;
      }
      *param_1 = 0;
      if (local_80[0] == (Runtime *)local_a0) {
        lVar11 = 4;
        pRVar10 = (Runtime *)local_a0;
LAB_0012d794:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_80[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_80[0];
        goto LAB_0012d794;
      }
      if (*(long *)(lVar3 + 0x28) == local_70) {
        return;
      }
      goto LAB_0012da60;
    }
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_0012da60;
                    /* try { // try from 0012d818 to 0012d81b has its CatchHandler @ 0012d9a4 */
    FUN_00128850();
LAB_0012d81c:
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_0012da60;
                    /* try { // try from 0012d830 to 0012d833 has its CatchHandler @ 0012d938 */
    FUN_00128850();
LAB_0012d834:
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_0012da60;
                    /* try { // try from 0012d848 to 0012d863 has its CatchHandler @ 0012d9a4 */
    FUN_0012daf4();
  }
  else {
    uVar5 = *(ulong *)(lVar11 + 0xa0);
    pppRVar14 = local_b0;
    if (uVar5 < *(ulong *)(lVar11 + 0xa8)) {
      if (local_b0[0] == (Runtime **)0x0) {
        pppRVar14 = (Runtime ***)(uVar5 + 0x20);
LAB_0012d3a8:
        *pppRVar14 = (Runtime **)0x0;
      }
      else {
        if (local_b0[0] != &local_d0) {
          *(Runtime ***)(uVar5 + 0x20) = local_b0[0];
          goto LAB_0012d3a8;
        }
        *(ulong *)(uVar5 + 0x20) = uVar5;
                    /* try { // try from 0012d3fc to 0012d403 has its CatchHandler @ 0012d86c */
        (**(code **)(*local_b0[0] + 0x18))(local_b0[0],uVar5);
      }
      lVar9 = uVar5 + 0x30;
LAB_0012d4d4:
      *(long *)(lVar11 + 0xa0) = lVar9;
      goto LAB_0012d4d8;
    }
    uVar17 = *(ulong *)(lVar11 + 0x98);
    lVar9 = (long)(uVar5 - uVar17) >> 4;
    uVar20 = lVar9 * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar20) goto LAB_0012d834;
    lVar12 = (long)(*(ulong *)(lVar11 + 0xa8) - uVar17) >> 4;
    uVar16 = lVar12 * 0x5555555555555556;
    if (uVar16 < uVar20 || uVar16 - uVar20 == 0) {
      uVar16 = uVar20;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar12 * -0x5555555555555555)) {
      uVar16 = 0x555555555555555;
    }
    if (uVar16 == 0) {
      pvVar7 = (void *)0x0;
LAB_0012d3b4:
      pvVar21 = (void *)((long)pvVar7 + lVar9 * 0x10);
      if (local_b0[0] == (Runtime **)0x0) {
        pppRVar14 = (Runtime ***)((long)pvVar21 + 0x20);
LAB_0012d3e4:
        *pppRVar14 = (Runtime **)0x0;
      }
      else {
        if (local_b0[0] != &local_d0) {
          *(Runtime ***)((long)pvVar21 + 0x20) = local_b0[0];
          goto LAB_0012d3e4;
        }
        *(void **)((long)pvVar21 + 0x20) = pvVar21;
                    /* try { // try from 0012d418 to 0012d423 has its CatchHandler @ 0012d868 */
        (**(code **)(local_d0 + 0x18))(&local_d0,pvVar21);
        uVar17 = *(ulong *)(lVar11 + 0x98);
        uVar5 = *(ulong *)(lVar11 + 0xa0);
      }
      pvVar13 = pvVar21;
      if (uVar5 != uVar17) {
        lVar9 = 0;
        uVar20 = uVar5;
        do {
          lVar12 = uVar5 + lVar9;
          uVar1 = (long)pvVar21 + lVar9;
          lVar15 = *(long *)(lVar12 + -0x10);
          if (lVar15 == 0) {
LAB_0012d444:
            *(undefined8 *)(uVar1 - 0x10) = 0;
          }
          else {
            if (lVar12 + -0x30 != lVar15) {
              *(long *)(uVar1 - 0x10) = lVar15;
              uVar1 = uVar20;
              goto LAB_0012d444;
            }
            *(ulong *)(uVar1 - 0x10) = uVar1 - 0x30;
                    /* try { // try from 0012d498 to 0012d49b has its CatchHandler @ 0012d934 */
            (**(code **)(**(long **)(lVar12 + -0x10) + 0x18))();
          }
          lVar9 = lVar9 + -0x30;
          uVar20 = uVar20 - 0x30;
        } while (uVar5 + lVar9 != uVar17);
        pvVar13 = (void *)((long)pvVar21 + lVar9);
      }
      lVar9 = (long)pvVar21 + 0x30;
      plVar2 = *(long **)(lVar11 + 0x98);
      plVar18 = *(long **)(lVar11 + 0xa0);
      *(void **)(lVar11 + 0x98) = pvVar13;
      *(long *)(lVar11 + 0xa0) = lVar9;
      *(void **)(lVar11 + 0xa8) = (void *)((long)pvVar7 + uVar16 * 0x30);
joined_r0x0012d4c4:
      if (plVar18 != plVar2) {
        plVar8 = (long *)plVar18[-2];
        plVar18 = plVar18 + -6;
        if (plVar18 != plVar8) goto code_r0x0012d528;
        lVar12 = 4;
        plVar8 = plVar18;
        goto LAB_0012d504;
      }
      if (plVar2 != (long *)0x0) {
        operator_delete(plVar2);
      }
      goto LAB_0012d4d4;
    }
    if (uVar16 < 0x555555555555556) {
      pvVar7 = operator_new(uVar16 * 0x30);
      goto LAB_0012d3b4;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    FUN_00124e74();
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0012d6ec with catch @ 0012d864 */
    FUN_00123554();
  }
LAB_0012da60:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0012d528:
  if (plVar8 != (long *)0x0) {
    lVar12 = 5;
LAB_0012d504:
    (**(code **)(*plVar8 + lVar12 * 8))();
  }
  goto joined_r0x0012d4c4;
}


// ===== 0012da64  FUN_0012da64 =====

void FUN_0012da64(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0013dbe8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0012dab4  FUN_0012dab4 =====

undefined * FUN_0012dab4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_0013dbf0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012daf4  FUN_0012daf4 =====

void FUN_0012daf4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_00124fb0("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012db2c  FUN_0012db2c =====

void FUN_0012db2c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  plVar3 = param_1 + 2;
  plVar2 = (long *)param_1[6];
  *param_1 = &PTR_FUN_0013c880;
  if (plVar2 == plVar3) {
    lVar4 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == lVar5) {
        return;
      }
      goto LAB_0012dbb8;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x0012db98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_0012dbb8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012dbbc  FUN_0012dbbc =====

void FUN_0012dbbc(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar3 = param_1 + 2;
  plVar2 = (long *)param_1[6];
  *param_1 = &PTR_FUN_0013c880;
  if (plVar2 == plVar3) {
    lVar5 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_0012dc18;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_0012dc18:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012dc40  FUN_0012dc40 =====

undefined8 * FUN_0012dc40(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x40);
  plVar3 = *(long **)(param_1 + 0x30);
  *puVar2 = &PTR_FUN_0013c880;
  if (plVar3 != (long *)0x0) {
    if (plVar3 == (long *)(param_1 + 0x10)) {
      lVar5 = *plVar3;
      puVar2[6] = puVar2 + 2;
      (**(code **)(lVar5 + 0x18))();
      goto LAB_0012dcb8;
    }
                    /* try { // try from 0012dc9c to 0012dcb7 has its CatchHandler @ 0012dce0 */
    plVar3 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  puVar2[6] = plVar3;
LAB_0012dcb8:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012dd08  FUN_0012dd08 =====

void FUN_0012dd08(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_0013c880;
  if (plVar4 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar4 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
      if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x0012ddb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
        return;
      }
      goto LAB_0012ddb4;
    }
    uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
    param_2[6] = uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
LAB_0012ddb4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012ddb8  FUN_0012ddb8 =====

void FUN_0012ddb8(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  plVar3 = (long *)(param_1 + 0x10);
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == plVar3) {
    lVar4 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
        return;
      }
      goto LAB_0012de38;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0012de18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_0012de38:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012de3c  FUN_0012de3c =====

void FUN_0012de3c(void *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)((long)param_1 + 0x10);
  plVar2 = *(long **)((long)param_1 + 0x30);
  if (plVar2 == plVar3) {
    lVar5 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_0012de8c;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_0012de8c:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012deb4  FUN_0012deb4 =====

void FUN_0012deb4(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [8];
  byte local_b0;
  void *local_a0;
  char local_98;
  byte local_88;
  void *local_78;
  char local_70;
  byte local_48;
  void *local_38;
  char local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0012e028(auStack_b8);
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      uVar3 = FUN_00128850();
                    /* catch() { ... } // from try @ 0012deec with catch @ 0012df70 */
      FUN_0012e1f0(auStack_b8);
      if (*(long *)(lVar1 + 0x28) == local_28) {
        FUN_0011e604(uVar3);
      }
    }
  }
  else {
                    /* try { // try from 0012deec to 0012df6f has its CatchHandler @ 0012df70 */
    (**(code **)(*plVar2 + 0x30))(plVar2,auStack_b8);
    if ((local_30 != '\0') && ((local_48 & 1) != 0)) {
      operator_delete(local_38);
    }
    if ((local_70 != '\0') && ((local_88 & 1) != 0)) {
      operator_delete(local_78);
    }
    if ((local_98 != '\0') && ((local_b0 & 1) != 0)) {
      operator_delete(local_a0);
    }
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012df98  FUN_0012df98 =====

void FUN_0012df98(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0013dba0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0012dfe8  FUN_0012dfe8 =====

undefined * FUN_0012dfe8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_0013dba8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012e028  FUN_0012e028 =====

void FUN_0012e028(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *param_2;
  pbVar6 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_1 + 8);
  *pbVar6 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  param_1[0x20] = 0;
  cVar2 = param_2[0x20];
  *param_1 = uVar1;
  if (cVar2 != '\0') {
    if ((param_2[8] & 1) == 0) {
      uVar7 = *(undefined8 *)(param_2 + 0x10);
      uVar5 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x10) = uVar7;
      *(undefined8 *)pbVar6 = uVar5;
    }
    else {
                    /* try { // try from 0012e090 to 0012e097 has its CatchHandler @ 0012e1b8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external(pbVar6,*(char **)(param_2 + 0x18),*(ulong *)(param_2 + 0x10));
    }
    param_1[0x20] = 1;
  }
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  pbVar6 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_1 + 0x30);
  *pbVar6 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  param_1[0x48] = 0;
  if (param_2[0x48] != '\0') {
    if ((param_2[0x30] & 1) == 0) {
      uVar7 = *(undefined8 *)(param_2 + 0x38);
      uVar5 = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar7;
      *(undefined8 *)pbVar6 = uVar5;
    }
    else {
                    /* try { // try from 0012e0dc to 0012e0e3 has its CatchHandler @ 0012e190 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external(pbVar6,*(char **)(param_2 + 0x40),*(ulong *)(param_2 + 0x38));
    }
    param_1[0x48] = 1;
  }
  uVar7 = *(undefined8 *)(param_2 + 0x61);
  uVar5 = *(undefined8 *)(param_2 + 0x59);
  uVar9 = *(undefined8 *)(param_2 + 0x58);
  uVar8 = *(undefined8 *)(param_2 + 0x50);
  pbVar6 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_1 + 0x70);
  *pbVar6 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  *(undefined8 *)(param_1 + 0x61) = uVar7;
  *(undefined8 *)(param_1 + 0x59) = uVar5;
  *(undefined8 *)(param_1 + 0x58) = uVar9;
  *(undefined8 *)(param_1 + 0x50) = uVar8;
  param_1[0x88] = 0;
  if (param_2[0x88] != '\0') {
    if ((param_2[0x70] & 1) == 0) {
      uVar7 = *(undefined8 *)(param_2 + 0x78);
      uVar5 = *(undefined8 *)(param_2 + 0x70);
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
      *(undefined8 *)(param_1 + 0x78) = uVar7;
      *(undefined8 *)pbVar6 = uVar5;
    }
    else {
                    /* try { // try from 0012e130 to 0012e137 has its CatchHandler @ 0012e168 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external(pbVar6,*(char **)(param_2 + 0x80),*(ulong *)(param_2 + 0x78));
    }
    param_1[0x88] = 1;
  }
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012e1f0  FUN_0012e1f0 =====

void FUN_0012e1f0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(char *)(param_1 + 0x88) != '\0') && ((*(byte *)(param_1 + 0x70) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x80));
  }
  if ((*(char *)(param_1 + 0x48) != '\0') && ((*(byte *)(param_1 + 0x30) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x40));
  }
  if ((*(char *)(param_1 + 0x20) == '\0') || ((*(byte *)(param_1 + 8) & 1) == 0)) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012e298  FUN_0012e298 =====

void FUN_0012e298(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_00129378(param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012e2ec  FUN_0012e2ec =====

void FUN_0012e2ec(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0013c760;
  if (param_1[5] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_00129378(param_1 + 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012e34c  FUN_0012e34c =====

void FUN_0012e34c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0013c760;
  if (param_1[5] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_00129378(param_1 + 2);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012e3b4  FUN_0012e3b4 =====

undefined8 * FUN_0012e3b4(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x18);
  *puVar2 = &PTR_FUN_0013c760;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = lVar3;
  if (lVar3 != 0) {
    FUN_001222d0(1);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = lVar3;
  if (lVar3 != 0) {
    FUN_001229c0(1,lVar3 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012e450  FUN_0012e450 =====

void FUN_0012e450(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0013c760;
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[2] = uVar4;
  param_2[3] = lVar2;
  if (lVar2 != 0) {
    FUN_001222d0(1);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = lVar2;
  if (lVar2 != 0) {
    FUN_001229c0(1,lVar2 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012e4e4  FUN_0012e4e4 =====

void FUN_0012e4e4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x28) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_00129378(param_1 + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012e538  FUN_0012e538 =====

void FUN_0012e538(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)((long)param_1 + 0x28) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_00129378((long)param_1 + 0x10);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012e594  FUN_0012e594 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012e594(long param_1,undefined1 *param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  void *pvVar4;
  char cVar5;
  ulong uVar6;
  void *pvVar7;
  char cVar8;
  ulong uVar9;
  void *pvVar10;
  char cVar11;
  long *plVar12;
  byte *pbVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 local_280 [8];
  ulong local_278;
  undefined8 uStack_270;
  void *local_268;
  char local_260;
  undefined8 local_258;
  ulong local_250;
  undefined8 uStack_248;
  void *local_240;
  char local_238;
  undefined8 local_230;
  undefined1 uStack_228;
  undefined7 uStack_227;
  undefined1 uStack_220;
  undefined8 uStack_21f;
  ulong local_210;
  undefined8 uStack_208;
  void *local_200;
  char local_1f8;
  byte local_1f0 [8];
  ulong local_1e8;
  undefined8 uStack_1e0;
  void *local_1d8;
  char local_1d0;
  undefined8 local_1c8;
  ulong local_1c0;
  undefined8 uStack_1b8;
  void *local_1b0;
  char local_1a8;
  undefined8 local_1a0;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined8 uStack_18f;
  ulong local_180;
  undefined8 uStack_178;
  void *local_170;
  char local_168;
  ulong local_160;
  undefined8 uStack_158;
  undefined8 *local_150;
  byte local_148;
  ulong local_140;
  undefined8 uStack_138;
  void *local_130;
  undefined1 local_128;
  undefined8 local_120;
  ulong local_118;
  undefined8 uStack_110;
  void *local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined8 uStack_e7;
  ulong local_d8;
  undefined8 uStack_d0;
  void *local_c8;
  undefined1 local_c0;
  byte local_b0 [16];
  void *local_a0;
  byte *local_90;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  local_280[0] = *param_2;
  local_278 = local_278 & 0xffffffffffffff00;
  local_260 = param_2[0x20] != '\0';
  if ((bool)local_260) {
    local_268 = *(void **)(param_2 + 0x18);
    uStack_270 = *(undefined8 *)(param_2 + 0x10);
    local_278 = *(ulong *)(param_2 + 8);
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
  }
  local_258 = *(undefined8 *)(param_2 + 0x28);
  local_250 = local_250 & 0xffffffffffffff00;
  local_238 = param_2[0x48] != '\0';
  if ((bool)local_238) {
    uStack_248 = *(undefined8 *)(param_2 + 0x38);
    local_250 = *(ulong *)(param_2 + 0x30);
    local_240 = *(void **)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
  }
  local_230 = *(undefined8 *)(param_2 + 0x50);
  uStack_21f = *(undefined8 *)(param_2 + 0x61);
  local_210 = local_210 & 0xffffffffffffff00;
  uStack_228 = (undefined1)*(undefined8 *)(param_2 + 0x58);
  uStack_227 = (undefined7)*(undefined8 *)(param_2 + 0x59);
  uStack_220 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0x59) >> 0x38);
  local_1f8 = param_2[0x88] != '\0';
  if ((bool)local_1f8) {
    uStack_208 = *(undefined8 *)(param_2 + 0x78);
    local_210 = *(ulong *)(param_2 + 0x70);
    local_200 = *(void **)(param_2 + 0x80);
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
  }
                    /* try { // try from 0012e67c to 0012e687 has its CatchHandler @ 0012ead0 */
  FUN_0012e028(local_1f0,local_280);
  if (*(long *)(param_1 + 0x28) == 0) {
    plVar12 = (long *)0x0;
LAB_0012e890:
                    /* try { // try from 0012e890 to 0012e897 has its CatchHandler @ 0012eab8 */
    local_150 = (undefined8 *)operator_new(0x70);
    puVar2 = PTR_typeinfo_name_0013db68;
    uStack_158 = _UNK_00114278;
    local_160 = _DAT_00114270;
    *(undefined4 *)((long)local_150 + 0x5f) = 0x45454545;
    uVar17 = *(undefined8 *)(puVar2 + 0x28);
    uVar16 = *(undefined8 *)(puVar2 + 0x20);
    uVar19 = *(undefined8 *)(puVar2 + 0x38);
    uVar18 = *(undefined8 *)(puVar2 + 0x30);
    *(undefined1 *)((long)local_150 + 99) = 0;
    local_150[5] = uVar17;
    local_150[4] = uVar16;
    local_150[7] = uVar19;
    local_150[6] = uVar18;
    uVar16 = *(undefined8 *)(puVar2 + 0x40);
    uVar18 = *(undefined8 *)(puVar2 + 0x58);
    uVar17 = *(undefined8 *)(puVar2 + 0x50);
    local_150[9] = *(undefined8 *)(puVar2 + 0x48);
    local_150[8] = uVar16;
    local_150[0xb] = uVar18;
    local_150[10] = uVar17;
    uVar18 = *(undefined8 *)puVar2;
    uVar17 = *(undefined8 *)(puVar2 + 0x18);
    uVar16 = *(undefined8 *)(puVar2 + 0x10);
    local_150[1] = *(undefined8 *)(puVar2 + 8);
    *local_150 = uVar18;
    local_150[3] = uVar17;
    local_150[2] = uVar16;
                    /* try { // try from 0012e8d8 to 0012e8e7 has its CatchHandler @ 0012eaa0 */
    margelo::nitro::TypeInfo::demangleName((basic_string *)&local_160,true);
    if ((local_160 & 1) != 0) {
      operator_delete(local_150);
    }
    if ((local_b0[0] & 1) != 0) {
      operator_delete(local_a0);
    }
    if (plVar12 == (long *)0x0) goto LAB_0012e998;
  }
  else {
    plVar12 = (long *)std::__ndk1::__shared_weak_count::lock();
    if ((plVar12 == (long *)0x0) || (plVar15 = *(long **)(param_1 + 0x20), plVar15 == (long *)0x0))
    goto LAB_0012e890;
    uStack_158 = *(undefined8 *)(param_1 + 0x10);
    local_160 = *(ulong *)(param_1 + 8);
    local_150 = *(undefined8 **)(param_1 + 0x18);
    if (local_150 != (undefined8 *)0x0) {
      FUN_001222d0(1);
    }
    cVar11 = local_168;
    pvVar10 = local_170;
    uVar18 = uStack_178;
    uVar9 = local_180;
    cVar8 = local_1a8;
    pvVar7 = local_1b0;
    uVar17 = uStack_1b8;
    uVar6 = local_1c0;
    cVar5 = local_1d0;
    pvVar4 = local_1d8;
    uVar16 = uStack_1e0;
    uVar3 = local_1e8;
    local_140 = local_140 & 0xffffffffffffff00;
    local_148 = local_1f0[0];
    local_128 = local_1d0 != '\0';
    if ((bool)local_128) {
      uStack_1e0 = 0;
      local_1d8 = (void *)0x0;
      local_1e8 = 0;
      local_130 = pvVar4;
      uStack_138 = uVar16;
      local_140 = uVar3;
    }
    local_118 = local_118 & 0xffffffffffffff00;
    local_120 = local_1c8;
    local_100 = local_1a8 != '\0';
    if ((bool)local_100) {
      uStack_1b8 = 0;
      local_1b0 = (void *)0x0;
      local_1c0 = 0;
      local_108 = pvVar7;
      uStack_110 = uVar17;
      local_118 = uVar6;
    }
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_f8 = local_1a0;
    uStack_e7 = uStack_18f;
    local_c0 = local_168 != '\0';
    if ((bool)local_c0) {
      uStack_178 = 0;
      local_170 = (void *)0x0;
      local_180 = 0;
      local_c8 = pvVar10;
      uStack_d0 = uVar18;
      local_d8 = uVar9;
    }
    local_90 = (byte *)0x0;
                    /* try { // try from 0012e780 to 0012e787 has its CatchHandler @ 0012ea90 */
    local_90 = (byte *)operator_new(0xb0);
    pvVar10 = local_c8;
    uVar18 = uStack_d0;
    uVar9 = local_d8;
    pvVar7 = local_108;
    uVar17 = uStack_110;
    uVar6 = local_118;
    pvVar4 = local_130;
    uVar16 = uStack_138;
    uVar3 = local_140;
    *(undefined ***)local_90 = &PTR_FUN_0013c7f0;
    *(undefined8 *)(local_90 + 0x10) = uStack_158;
    *(ulong *)(local_90 + 8) = local_160;
    *(undefined8 **)(local_90 + 0x18) = local_150;
    *(undefined8 *)((ulong)&local_160 | 8) = 0;
    ((undefined8 *)((ulong)&local_160 | 8))[1] = 0;
    local_90[0x20] = local_1f0[0];
    local_90[0x28] = 0;
    local_90[0x40] = 0;
    if (cVar5 != '\0') {
      uStack_138 = 0;
      local_130 = (void *)0x0;
      local_140 = 0;
      *(undefined8 *)(local_90 + 0x30) = uVar16;
      *(ulong *)(local_90 + 0x28) = uVar3;
      *(void **)(local_90 + 0x38) = pvVar4;
      local_90[0x40] = 1;
    }
    local_90[0x50] = 0;
    *(undefined8 *)(local_90 + 0x48) = local_1c8;
    local_90[0x68] = 0;
    if (cVar8 != '\0') {
      uStack_110 = 0;
      local_108 = (void *)0x0;
      local_118 = 0;
      *(undefined8 *)(local_90 + 0x58) = uVar17;
      *(ulong *)(local_90 + 0x50) = uVar6;
      *(void **)(local_90 + 0x60) = pvVar7;
      local_90[0x68] = 1;
    }
    local_90[0x90] = 0;
    *(ulong *)(local_90 + 0x78) = CONCAT71(uStack_197,uStack_198);
    *(undefined8 *)(local_90 + 0x70) = local_1a0;
    *(undefined8 *)(local_90 + 0x81) = uStack_18f;
    *(ulong *)(local_90 + 0x79) = CONCAT17(uStack_190,uStack_197);
    local_90[0xa8] = 0;
    if (cVar11 != '\0') {
      uStack_d0 = 0;
      local_c8 = (void *)0x0;
      local_d8 = 0;
      *(void **)(local_90 + 0xa0) = pvVar10;
      *(undefined8 *)(local_90 + 0x98) = uVar18;
      *(ulong *)(local_90 + 0x90) = uVar9;
      local_90[0xa8] = 1;
    }
                    /* try { // try from 0012e864 to 0012e873 has its CatchHandler @ 0012ea58 */
    (**(code **)(*plVar15 + 0x18))(plVar15,local_b0);
    if (local_90 == local_b0) {
      lVar14 = 4;
      pbVar13 = local_b0;
LAB_0012e928:
      (**(code **)(*(long *)pbVar13 + lVar14 * 8))();
    }
    else if (local_90 != (byte *)0x0) {
      lVar14 = 5;
      pbVar13 = local_90;
      goto LAB_0012e928;
    }
    if ((cVar11 != '\0') && ((local_d8 & 1) != 0)) {
      operator_delete(local_c8);
    }
    if ((cVar8 != '\0') && ((local_118 & 1) != 0)) {
      operator_delete(local_108);
    }
    if ((cVar5 != '\0') && ((local_140 & 1) != 0)) {
      operator_delete(local_130);
    }
  }
  lVar14 = FUN_001222d0(0xffffffffffffffff,plVar12 + 1);
  if (lVar14 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
LAB_0012e998:
  if ((local_168 != '\0') && ((local_180 & 1) != 0)) {
    operator_delete(local_170);
  }
  if ((local_1a8 != '\0') && ((local_1c0 & 1) != 0)) {
    operator_delete(local_1b0);
  }
  if ((local_1d0 != '\0') && ((local_1e8 & 1) != 0)) {
    operator_delete(local_1d8);
  }
  if ((local_1f8 != '\0') && ((local_210 & 1) != 0)) {
    operator_delete(local_200);
  }
  if ((local_238 != '\0') && ((local_250 & 1) != 0)) {
    operator_delete(local_240);
  }
  if ((local_260 != '\0') && ((local_278 & 1) != 0)) {
    operator_delete(local_268);
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012eaf8  FUN_0012eaf8 =====

void FUN_0012eaf8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0013db68) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0012eb48  FUN_0012eb48 =====

undefined * FUN_0012eb48(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_0013db70;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012eb88  FUN_0012eb88 =====

void FUN_0012eb88(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(char *)(param_1 + 0xa0) != '\0') && ((*(byte *)(param_1 + 0x88) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x98));
  }
  if ((*(char *)(param_1 + 0x60) != '\0') && ((*(byte *)(param_1 + 0x48) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x58));
  }
  if ((*(char *)(param_1 + 0x38) != '\0') && ((*(byte *)(param_1 + 0x20) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_00129378(param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012ec18  FUN_0012ec18 =====

void FUN_0012ec18(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0013c7f0;
  if ((*(char *)(param_1 + 0x15) != '\0') && ((*(byte *)(param_1 + 0x12) & 1) != 0)) {
    operator_delete((void *)param_1[0x14]);
  }
  if ((*(char *)(param_1 + 0xd) != '\0') && ((*(byte *)(param_1 + 10) & 1) != 0)) {
    operator_delete((void *)param_1[0xc]);
  }
  if ((*(char *)(param_1 + 8) != '\0') && ((*(byte *)(param_1 + 5) & 1) != 0)) {
    operator_delete((void *)param_1[7]);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_00129378(param_1 + 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012ecb4  FUN_0012ecb4 =====

void FUN_0012ecb4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0013c7f0;
  if ((*(char *)(param_1 + 0x15) != '\0') && ((*(byte *)(param_1 + 0x12) & 1) != 0)) {
    operator_delete((void *)param_1[0x14]);
  }
  if ((*(char *)(param_1 + 0xd) != '\0') && ((*(byte *)(param_1 + 10) & 1) != 0)) {
    operator_delete((void *)param_1[0xc]);
  }
  if ((*(char *)(param_1 + 8) != '\0') && ((*(byte *)(param_1 + 5) & 1) != 0)) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00129378(param_1 + 2);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012ed58  FUN_0012ed58 =====

undefined8 * FUN_0012ed58(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0xb0);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x18);
  *puVar2 = &PTR_FUN_0013c7f0;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = lVar3;
  if (lVar3 != 0) {
    FUN_001222d0(1);
  }
                    /* try { // try from 0012edb0 to 0012edbb has its CatchHandler @ 0012ede4 */
  FUN_0012e028(puVar2 + 4,param_1 + 0x20);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012ee14  FUN_0012ee14 =====

void FUN_0012ee14(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0013c7f0;
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[2] = uVar4;
  param_2[3] = lVar2;
  if (lVar2 != 0) {
    FUN_001222d0(1);
  }
                    /* try { // try from 0012ee70 to 0012ee7b has its CatchHandler @ 0012eea0 */
  FUN_0012e028(param_2 + 4,param_1 + 0x20);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012eec8  FUN_0012eec8 =====

void FUN_0012eec8(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_0012f2e8(param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012ef04  FUN_0012ef04 =====

void FUN_0012ef04(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0012f2e8((long)param_1 + 8);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012ef54  FUN_0012ef54 =====

void FUN_0012ef54(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  runtime_error *this;
  Value aVStack_130 [16];
  Value aVStack_120 [24];
  undefined4 local_108 [6];
  undefined1 local_f0 [8];
  ulong local_e8;
  undefined8 uStack_e0;
  void *local_d8;
  char local_d0;
  undefined8 local_c8;
  ulong local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  char local_a8;
  undefined8 local_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  ulong local_80;
  undefined8 uStack_78;
  void *local_70;
  char local_68;
  Value aVStack_60 [24];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_f0[0] = *(undefined1 *)(param_1 + 0x20);
  local_e8 = local_e8 & 0xffffffffffffff00;
  local_d0 = *(char *)(param_1 + 0x40) != '\0';
  if ((bool)local_d0) {
    local_d8 = *(void **)(param_1 + 0x38);
    uStack_e0 = *(undefined8 *)(param_1 + 0x30);
    local_e8 = *(ulong *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  local_c8 = *(undefined8 *)(param_1 + 0x48);
  local_c0 = local_c0 & 0xffffffffffffff00;
  local_a8 = *(char *)(param_1 + 0x68) != '\0';
  if ((bool)local_a8) {
    uStack_b8 = *(undefined8 *)(param_1 + 0x58);
    local_c0 = *(ulong *)(param_1 + 0x50);
    local_b0 = *(void **)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  local_a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_8f = *(undefined8 *)(param_1 + 0x81);
  local_80 = local_80 & 0xffffffffffffff00;
  uStack_98 = (undefined1)*(undefined8 *)(param_1 + 0x78);
  uStack_97 = (undefined7)*(undefined8 *)(param_1 + 0x79);
  uStack_90 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x79) >> 0x38);
  local_68 = *(char *)(param_1 + 0xa8) != '\0';
  if ((bool)local_68) {
    uStack_78 = *(undefined8 *)(param_1 + 0x98);
    local_80 = *(ulong *)(param_1 + 0x90);
    local_70 = *(void **)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if ((*(long *)(param_1 + 0x10) == 0) || ((*(byte *)(*(long *)(param_1 + 0x18) + 0x10) & 1) != 0))
  {
                    /* try { // try from 0012f120 to 0012f133 has its CatchHandler @ 0012f230 */
    FUN_0012739c(local_108,PTR_typeinfo_name_0013db78,1);
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0012f140 to 0012f153 has its CatchHandler @ 0012f210 */
    std::__ndk1::operator+("Cannot call ",(basic_string *)local_108);
                    /* try { // try from 0012f154 to 0012f167 has its CatchHandler @ 0012f1f8 */
    FUN_0012425c(aVStack_60,aVStack_120,
                 " - the underlying `jsi::Function` has already been deleted!");
                    /* try { // try from 0012f16c to 0012f1a3 has its CatchHandler @ 0012f1c4 */
    std::runtime_error::runtime_error(this,(basic_string *)aVStack_60);
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_0013dcd0,PTR__runtime_error_0013dc98);
    }
  }
  else {
    plVar1 = *(long **)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 0012f04c to 0012f05b has its CatchHandler @ 0012f230 */
    FUN_0012c6c4(aVStack_130,plVar1,local_f0);
    facebook::jsi::Value::Value(aVStack_60,aVStack_130);
    local_108[0] = 0;
                    /* try { // try from 0012f074 to 0012f08f has its CatchHandler @ 0012f1a4 */
    (**(code **)(*plVar1 + 0x280))(aVStack_120,plVar1,uVar2,local_108,aVStack_60,1);
    facebook::jsi::Value::~Value((Value *)local_108);
    facebook::jsi::Value::~Value(aVStack_60);
    facebook::jsi::Value::~Value(aVStack_130);
    facebook::jsi::Value::~Value(aVStack_120);
    if ((local_68 != '\0') && ((local_80 & 1) != 0)) {
      operator_delete(local_70);
    }
    if ((local_a8 != '\0') && ((local_c0 & 1) != 0)) {
      operator_delete(local_b0);
    }
    if ((local_d0 != '\0') && ((local_e8 & 1) != 0)) {
      operator_delete(local_d8);
    }
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012f258  FUN_0012f258 =====

void FUN_0012f258(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0013db80) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0012f2a8  FUN_0012f2a8 =====

undefined * FUN_0012f2a8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_0013db88;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012f2e8  FUN_0012f2e8 =====

void FUN_0012f2e8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(char *)(param_1 + 0xa0) != '\0') && ((*(byte *)(param_1 + 0x88) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x98));
  }
  if ((*(char *)(param_1 + 0x60) != '\0') && ((*(byte *)(param_1 + 0x48) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x58));
  }
  if ((*(char *)(param_1 + 0x38) != '\0') && ((*(byte *)(param_1 + 0x20) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_00129378(param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012f378  FUN_0012f378 =====

void FUN_0012f378(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  ulong unaff_x24;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined2 uVar19;
  undefined8 uVar20;
  float fVar21;
  long *local_80;
  undefined *puStack_78;
  undefined1 local_70;
  long local_68;
  
  puVar3 = PTR__prototypesCache_0013dc80;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (((*PTR__prototypesCache_0013dc88 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR__prototypesCache_0013dc88), iVar4 != 0)) {
    *(undefined4 *)(puVar3 + 0x20) = 0x3f800000;
    *(undefined8 *)(puVar3 + 8) = 0;
    *(undefined8 *)puVar3 = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    __cxa_atexit(FUN_0012f994,puVar3,&PTR_LOOP_0013c2c0);
    __cxa_guard_release(PTR__prototypesCache_0013dc88);
  }
  lVar18 = *param_2;
  uVar17 = *(ulong *)(puVar3 + 8);
  uVar16 = *(ulong *)(lVar18 + 8);
  if (uVar17 != 0) {
    uVar20 = NEON_cnt(uVar17,1);
    uVar19 = NEON_uaddlv(uVar20,1);
    uVar10 = CONCAT62((int6)((ulong)uVar20 >> 0x10),uVar19) & 0xffffffff;
    if (uVar10 < 2) {
      unaff_x24 = uVar17 - 1 & uVar16;
    }
    else {
      unaff_x24 = uVar16;
      if (uVar17 <= uVar16) {
        uVar12 = 0;
        if (uVar17 != 0) {
          uVar12 = uVar16 / uVar17;
        }
        unaff_x24 = uVar16 - uVar12 * uVar17;
      }
    }
    puVar9 = *(undefined8 **)(*(long *)puVar3 + unaff_x24 * 8);
    if ((puVar9 != (undefined8 *)0x0) && (plVar15 = (long *)*puVar9, plVar15 != (long *)0x0)) {
      do {
        uVar12 = plVar15[1];
        if (uVar12 == uVar16) {
          if (*(ulong *)(plVar15[2] + 8) == uVar16) goto LAB_0012f7e8;
        }
        else {
          if (uVar10 < 2) {
            uVar12 = uVar12 & uVar17 - 1;
          }
          else if (uVar17 <= uVar12) {
            uVar8 = 0;
            if (uVar17 != 0) {
              uVar8 = uVar12 / uVar17;
            }
            uVar12 = uVar12 - uVar8 * uVar17;
          }
          if (uVar12 != unaff_x24) break;
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
  plVar15 = (long *)operator_new(0x28);
  puStack_78 = puVar3 + 0x10;
  fVar21 = *(float *)(puVar3 + 0x20);
  lVar7 = *(long *)(puVar3 + 0x18);
  *plVar15 = 0;
  plVar15[1] = uVar16;
  plVar15[3] = 0;
  plVar15[4] = 0;
  plVar15[2] = lVar18;
  local_70 = 1;
  local_80 = plVar15;
  if ((uVar17 == 0) || (fVar21 * (float)uVar17 < (float)(lVar7 + 1))) {
    if (uVar17 < 3) {
      uVar10 = 1;
    }
    else {
      uVar10 = (ulong)((uVar17 & uVar17 - 1) != 0);
    }
    uVar10 = uVar10 | uVar17 << 1;
    uVar12 = (ulong)((float)(lVar7 + 1) / fVar21);
    if (uVar10 <= uVar12) {
      uVar10 = uVar12;
    }
    if (uVar10 - 1 == 0) {
      uVar10 = 2;
    }
    else if ((uVar10 & uVar10 - 1) != 0) {
                    /* try { // try from 0012f514 to 0012f53b has its CatchHandler @ 0012f8d0 */
      uVar10 = std::__ndk1::__next_prime(uVar10);
      uVar17 = *(ulong *)(puVar3 + 8);
    }
    if (uVar17 < uVar10) {
LAB_0012f52c:
      if (uVar10 >> 0x3d != 0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
          uVar20 = FUN_00124e74();
                    /* catch() { ... } // from try @ 0012f514 with catch @ 0012f8d0
                       catch() { ... } // from try @ 0012f838 with catch @ 0012f8d0 */
          FUN_0012fdb0(&local_80);
          if (*(long *)(lVar2 + 0x28) == local_68) {
            FUN_0011e604(uVar20);
          }
        }
        goto LAB_0012f904;
      }
      pvVar5 = operator_new(uVar10 << 3);
      pvVar6 = *(void **)puVar3;
      *(void **)puVar3 = pvVar5;
      if (pvVar6 != (void *)0x0) {
        operator_delete(pvVar6);
      }
      uVar17 = 0;
      *(ulong *)(puVar3 + 8) = uVar10;
      do {
        *(undefined8 *)(*(long *)puVar3 + uVar17 * 8) = 0;
        uVar17 = uVar17 + 1;
      } while (uVar10 != uVar17);
      plVar11 = *(long **)(puVar3 + 0x10);
      uVar17 = uVar10;
      if (plVar11 != (long *)0x0) {
        uVar12 = plVar11[1];
        uVar20 = NEON_cnt(uVar10,1);
        uVar19 = NEON_uaddlv(uVar20,1);
        uVar8 = CONCAT62((int6)((ulong)uVar20 >> 0x10),uVar19) & 0xffffffff;
        if (uVar8 < 2) {
          uVar12 = uVar12 & uVar10 - 1;
        }
        else if (uVar10 <= uVar12) {
          uVar14 = 0;
          if (uVar10 != 0) {
            uVar14 = uVar12 / uVar10;
          }
          uVar12 = uVar12 - uVar14 * uVar10;
        }
        *(undefined **)(*(long *)puVar3 + uVar12 * 8) = puVar3 + 0x10;
        plVar13 = (long *)*plVar11;
        if (plVar13 != (long *)0x0) {
          do {
            uVar14 = plVar13[1];
            if (uVar8 < 2) {
              uVar14 = uVar14 & uVar10 - 1;
            }
            else if (uVar10 <= uVar14) {
              uVar1 = 0;
              if (uVar10 != 0) {
                uVar1 = uVar14 / uVar10;
              }
              uVar14 = uVar14 - uVar1 * uVar10;
            }
            if (uVar14 != uVar12) {
              if (*(long *)(*(long *)puVar3 + uVar14 * 8) == 0) {
                *(long **)(*(long *)puVar3 + uVar14 * 8) = plVar11;
                uVar12 = uVar14;
              }
              else {
                *plVar11 = *plVar13;
                *plVar13 = **(long **)(*(long *)puVar3 + uVar14 * 8);
                **(undefined8 **)(*(long *)puVar3 + uVar14 * 8) = plVar13;
                plVar13 = plVar11;
              }
            }
            plVar11 = plVar13;
            plVar13 = (long *)*plVar11;
          } while (plVar13 != (long *)0x0);
        }
      }
    }
    else if (uVar10 < uVar17) {
      uVar12 = (ulong)((float)*(ulong *)(puVar3 + 0x18) / *(float *)(puVar3 + 0x20));
      if (uVar17 < 3) {
LAB_0012f838:
                    /* try { // try from 0012f838 to 0012f8cf has its CatchHandler @ 0012f8d0 */
        uVar12 = std::__ndk1::__next_prime(uVar12);
      }
      else {
        uVar20 = NEON_cnt(uVar17,1);
        uVar19 = NEON_uaddlv(uVar20,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar20 >> 0x10),uVar19)) goto LAB_0012f838;
        if (1 < uVar12) {
          uVar12 = 1L << (-LZCOUNT(uVar12 - 1) & 0x3fU);
        }
      }
      if (uVar10 <= uVar12) {
        uVar10 = uVar12;
      }
      if (uVar10 < uVar17) {
        if (uVar10 != 0) goto LAB_0012f52c;
        pvVar5 = *(void **)puVar3;
        *(undefined8 *)puVar3 = 0;
        if (pvVar5 != (void *)0x0) {
          operator_delete(pvVar5);
        }
        *(undefined8 *)(puVar3 + 8) = 0;
        uVar17 = 0;
      }
      else {
        uVar17 = *(ulong *)(puVar3 + 8);
      }
    }
    if ((uVar17 & uVar17 - 1) == 0) {
      unaff_x24 = uVar17 - 1 & uVar16;
    }
    else {
      unaff_x24 = uVar16;
      if (uVar17 <= uVar16) {
        uVar10 = 0;
        if (uVar17 != 0) {
          uVar10 = uVar16 / uVar17;
        }
        unaff_x24 = uVar16 - uVar10 * uVar17;
      }
    }
  }
  lVar18 = *(long *)puVar3;
  plVar11 = *(long **)(lVar18 + unaff_x24 * 8);
  if (plVar11 == (long *)0x0) {
    plVar11 = (long *)(puVar3 + 0x10);
    lVar7 = *plVar11;
    *plVar11 = (long)plVar15;
    *plVar15 = lVar7;
    *(long **)(lVar18 + unaff_x24 * 8) = plVar11;
    if (*plVar15 != 0) {
      uVar16 = *(ulong *)(*plVar15 + 8);
      if ((uVar17 & uVar17 - 1) == 0) {
        uVar16 = uVar16 & uVar17 - 1;
      }
      else if (uVar17 <= uVar16) {
        uVar10 = 0;
        if (uVar17 != 0) {
          uVar10 = uVar16 / uVar17;
        }
        uVar16 = uVar16 - uVar10 * uVar17;
      }
      plVar11 = (long *)(*(long *)puVar3 + uVar16 * 8);
      goto LAB_0012f734;
    }
  }
  else {
    *plVar15 = *plVar11;
LAB_0012f734:
    *plVar11 = (long)plVar15;
  }
  *(long *)(puVar3 + 0x18) = *(long *)(puVar3 + 0x18) + 1;
  plVar11 = (long *)operator_new(0x90);
  lVar18 = *param_3;
  lVar7 = param_3[1];
  *plVar11 = *param_2;
  plVar11[1] = lVar18;
  plVar11[2] = lVar7;
  if (lVar7 != 0) {
    FUN_001229c0(1,lVar7 + 8);
  }
  *(undefined4 *)(plVar11 + 7) = 0x3f800000;
  *(undefined4 *)(plVar11 + 0xc) = 0x3f800000;
  *(undefined4 *)(plVar11 + 0x11) = 0x3f800000;
  plVar11[6] = 0;
  plVar11[5] = 0;
  plVar11[4] = 0;
  plVar11[3] = 0;
  plVar11[9] = 0;
  plVar11[8] = 0;
  plVar11[0xb] = 0;
  plVar11[10] = 0;
  plVar11[0xe] = 0;
  plVar11[0xd] = 0;
  plVar11[0x10] = 0;
  plVar11[0xf] = 0;
  local_80 = plVar11;
                    /* try { // try from 0012f79c to 0012f7a3 has its CatchHandler @ 0012f8e0 */
  puVar9 = (undefined8 *)operator_new(0x20);
  plVar13 = (long *)plVar15[4];
  *puVar9 = &PTR____shared_weak_count_0013ceb0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  puVar9[3] = plVar11;
  plVar15[3] = (long)plVar11;
  plVar15[4] = (long)puVar9;
  if ((plVar13 != (long *)0x0) &&
     (lVar18 = FUN_001222d0(0xffffffffffffffff,plVar13 + 1), lVar18 == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
LAB_0012f7e8:
  *param_1 = plVar15[3];
  lVar18 = plVar15[4];
  param_1[1] = lVar18;
  if (lVar18 != 0) {
    FUN_001229c0(1,lVar18 + 8);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0012f904:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012f908  FUN_0012f908 =====

void FUN_0012f908(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_001222d0(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
     ) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012f994  FUN_0012f994 =====

void FUN_0012f994(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)param_1[2];
  while (puVar2 != (undefined8 *)0x0) {
    plVar6 = (long *)puVar2[4];
    pvVar3 = (void *)*puVar2;
    if ((plVar6 != (long *)0x0) && (lVar4 = FUN_001222d0(0xffffffffffffffff,plVar6 + 1), lVar4 == 0)
       ) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    operator_delete(puVar2);
    puVar2 = (undefined8 *)pvVar3;
  }
  pvVar3 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar3 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar5) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar5) {
    operator_delete(pvVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012fa6c  FUN_0012fa6c =====

void FUN_0012fa6c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  pvVar4 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar4 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    FUN_0012fcc4((long)pvVar4 + 0x68);
    FUN_0012fcc4((long)pvVar4 + 0x40);
    FUN_0012fcc4((long)pvVar4 + 0x18);
    plVar5 = *(long **)((long)pvVar4 + 0x10);
    if ((plVar5 != (long *)0x0) && (lVar2 = FUN_001222d0(0xffffffffffffffff,plVar5 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      operator_delete(pvVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012fb30  FUN_0012fb30 =====

void FUN_0012fb30(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012fb7c  FUN_0012fb7c =====

void FUN_0012fb7c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  pvVar4 = *(void **)(param_1 + 0x18);
  if (pvVar4 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    FUN_0012fcc4((long)pvVar4 + 0x68);
    FUN_0012fcc4((long)pvVar4 + 0x40);
    FUN_0012fcc4((long)pvVar4 + 0x18);
    plVar5 = *(long **)((long)pvVar4 + 0x10);
    if ((plVar5 != (long *)0x0) && (lVar2 = FUN_001222d0(0xffffffffffffffff,plVar5 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      operator_delete(pvVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012fc3c  FUN_0012fc3c =====

void FUN_0012fc3c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0013dc90) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0012fc8c  FUN_0012fc8c =====

void FUN_0012fc8c(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012fcc4  FUN_0012fcc4 =====

void FUN_0012fcc4(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)param_1[2];
  do {
    if (puVar2 == (undefined8 *)0x0) {
      pvVar3 = (void *)*param_1;
      *param_1 = 0;
      if (pvVar3 == (void *)0x0) {
        if (*(long *)(lVar1 + 0x28) == lVar6) {
          return;
        }
      }
      else if (*(long *)(lVar1 + 0x28) == lVar6) {
        operator_delete(pvVar3);
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pvVar3 = (void *)*puVar2;
    if ((*(byte *)(puVar2 + 0xd) & 1) != 0) {
      operator_delete((void *)puVar2[0xf]);
    }
    plVar4 = (long *)puVar2[10];
    plVar5 = puVar2 + 6;
    if (plVar4 == plVar5) {
      lVar7 = 4;
LAB_0012fd68:
      (**(code **)(*plVar5 + lVar7 * 8))();
    }
    else if (plVar4 != (long *)0x0) {
      lVar7 = 5;
      plVar5 = plVar4;
      goto LAB_0012fd68;
    }
    if ((*(byte *)(puVar2 + 2) & 1) != 0) {
      operator_delete((void *)puVar2[4]);
    }
    operator_delete(puVar2);
    puVar2 = (undefined8 *)pvVar3;
  } while( true );
}


// ===== 0012fdb0  FUN_0012fdb0 =====

void FUN_0012fdb0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  pvVar4 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar4 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    if (((*(char *)(param_1 + 2) != '\0') &&
        (plVar5 = *(long **)((long)pvVar4 + 0x20), plVar5 != (long *)0x0)) &&
       (lVar2 = FUN_001222d0(0xffffffffffffffff,plVar5 + 1), lVar2 == 0)) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      operator_delete(pvVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012fe64  margelo::nitro::playagerangedeclaration::HybridPlayAgeRangeDeclarationSpec::loadHybridMethods =====

/* virtual thunk to
   margelo::nitro::playagerangedeclaration::HybridPlayAgeRangeDeclarationSpec::loadHybridMethods()
    */

void __thiscall
margelo::nitro::playagerangedeclaration::HybridPlayAgeRangeDeclarationSpec::loadHybridMethods
          (HybridPlayAgeRangeDeclarationSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    loadHybridMethods(this + *(long *)(*(long *)this + -0x20));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012fea8  FUN_0012fea8 =====

void FUN_0012fea8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012fee0  FUN_0012fee0 =====

undefined8 FUN_0012fee0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012ff1c  FUN_0012ff1c =====

void FUN_0012ff1c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x12ff20);
  (*pcVar1)();
}


// ===== 0012ff20  FUN_0012ff20 =====

void FUN_0012ff20(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x12ff24);
  (*pcVar1)();
}


// ===== 0012ff24  FUN_0012ff24 =====

void FUN_0012ff24(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x12ff28);
  (*pcVar1)();
}


// ===== 0012ff28  FUN_0012ff28 =====

void FUN_0012ff28(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x12ff2c);
  (*pcVar1)();
}


// ===== 0012ff2c  margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::JavaPart::getJHybridPlayAgeRangeDeclarationSpec =====

/* margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::JavaPart::getJHybridPlayAgeRangeDeclarationSpec()
    */

void __thiscall
margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::JavaPart::
getJHybridPlayAgeRangeDeclarationSpec(JavaPart *this)

{
  long lVar1;
  long lVar2;
  runtime_error *this_00;
  long *in_x8;
  long lVar3;
  long local_38;
  long *local_30;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  margelo::nitro::JHybridObject::JavaPart::getJHybridObject();
  if ((local_38 == 0) ||
     (lVar2 = __dynamic_cast(local_38,PTR_typeinfo_0013e038,PTR_typeinfo_0013dd28,0xffffffffffffffff
                            ), lVar2 == 0)) {
    *in_x8 = 0;
    in_x8[1] = 0;
    this_00 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0012fff4 to 0012ffff has its CatchHandler @ 00130034 */
    std::runtime_error::runtime_error
              (this_00,"Failed to downcast JHybridObject to JHybridPlayAgeRangeDeclarationSpec!");
    if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* try { // try from 00130014 to 0013002b has its CatchHandler @ 0013002c */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,PTR_typeinfo_0013dcd0,PTR__runtime_error_0013dc98);
    }
  }
  else {
    *in_x8 = lVar2;
    in_x8[1] = (long)local_30;
    if (local_30 != (long *)0x0) {
      FUN_001229c0(1,local_30 + 1);
      if ((local_30 != (long *)0x0) &&
         (lVar2 = FUN_001222d0(0xffffffffffffffff,local_30 + 1), lVar2 == 0)) {
        (**(code **)(*local_30 + 0x10))(local_30);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00130070  FUN_00130070 =====

void FUN_00130070(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_001222d0(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
     ) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001300fc  FUN_001300fc =====

void FUN_001300fc(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_001222d0(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
     ) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00130188  margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::CxxPart::initHybrid =====

/* margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::CxxPart::initHybrid(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*>) */

void __thiscall
margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::CxxPart::initHybrid
          (undefined8 *param_1,CxxPart *this)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_001301e0(&local_30,*(undefined8 *)this);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001301e0  FUN_001301e0 =====

void FUN_001301e0(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  CxxPart *pCVar2;
  long *plVar3;
  long lVar4;
  HybridData *extraout_x1;
  undefined8 uVar5;
  CxxPart *local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pCVar2 = (CxxPart *)operator_new(0x20);
                    /* try { // try from 00130218 to 0013021f has its CatchHandler @ 00130344 */
  local_50 = param_2;
  margelo::nitro::JHybridObject::CxxPart::CxxPart(pCVar2,&local_50);
  *(undefined **)pCVar2 = PTR_vtable_0013dd30 + 0x10;
                    /* try { // try from 00130230 to 00130237 has its CatchHandler @ 0013033c */
  facebook::jni::detail::HybridData::create();
  uVar5 = *param_1;
                    /* try { // try from 0013023c to 00130257 has its CatchHandler @ 0013035c */
  plVar3 = (long *)facebook::jni::Environment::current();
  lVar4 = (**(code **)(*plVar3 + 200))(plVar3,uVar5);
  facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0013025c to 00130267 has its CatchHandler @ 00130314 */
  local_48 = lVar4;
  facebook::jni::detail::getHolder<facebook::jni::detail::HybridData>
            ((detail *)&local_48,extraout_x1);
                    /* try { // try from 0013026c to 00130277 has its CatchHandler @ 001302ec */
  local_58 = pCVar2;
  facebook::jni::detail::HybridDestructor::setNativePointer(&local_40,&local_58);
  pCVar2 = local_58;
  local_58 = (CxxPart *)0x0;
  if (pCVar2 != (CxxPart *)0x0) {
    (**(code **)(*(long *)pCVar2 + 8))();
  }
  if (local_40 != 0) {
                    /* try { // try from 00130298 to 001302ab has its CatchHandler @ 00130358 */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb8))(plVar3,local_40);
  }
  lVar4 = local_48;
  if (local_48 != 0) {
                    /* try { // try from 001302b4 to 001302c7 has its CatchHandler @ 00130354 */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb8))(plVar3,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00130394  FUN_00130394 =====

void FUN_00130394(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 001303c0 to 001303d3 has its CatchHandler @ 00130400 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00130404  facebook::jni::detail::getHolder<facebook::jni::detail::HybridData> =====

/* facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   facebook::jni::detail::getHolder<facebook::jni::detail::HybridData>(facebook::jni::detail::HybridData
   const*) */

void __thiscall
facebook::jni::detail::getHolder<facebook::jni::detail::HybridData>
          (detail *this,HybridData *param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *in_x8;
  undefined8 uVar5;
  undefined8 uVar6;
  base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> abStack_40 [8];
  long local_38;
  
  puVar2 = PTR_holderField_0013dda0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_holderField_0013dda8 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_holderField_0013dda8), iVar3 != 0)) {
    JObject::getClass();
                    /* try { // try from 001304b0 to 001304b7 has its CatchHandler @ 001304d8 */
    uVar5 = getDestructorField(abStack_40);
    *(undefined8 *)puVar2 = uVar5;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              (abStack_40);
    __cxa_guard_release(PTR_holderField_0013dda8);
  }
  uVar5 = *(undefined8 *)puVar2;
  uVar6 = *(undefined8 *)this;
                    /* try { // try from 00130448 to 0013045f has its CatchHandler @ 0013050c */
  plVar4 = (long *)facebook::jni::Environment::current();
  uVar5 = (**(code **)(*plVar4 + 0x2f8))(plVar4,uVar6,uVar5);
  *in_x8 = uVar5;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00130510  facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

/* facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>::~base_owned_ref() */

void __thiscall
facebook::jni::
base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
::~base_owned_ref(base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
                  *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)this;
  if (lVar4 != 0) {
                    /* try { // try from 0013053c to 0013054f has its CatchHandler @ 0013057c */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  *(undefined8 *)this = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00130580  facebook::jni::JObject::getClass =====

/* facebook::jni::JObject::getClass() const */

void facebook::jni::JObject::getClass(void)

{
  long lVar1;
  undefined8 *in_x0;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *in_x8;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 001305a8 to 001305bb has its CatchHandler @ 001305e8 */
  plVar2 = (long *)facebook::jni::Environment::current();
  uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2,*in_x0);
  *in_x8 = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001305ec  facebook::jni::detail::getDestructorField =====

/* facebook::jni::detail::getDestructorField(facebook::jni::basic_strong_ref<facebook::jni::JClass,
   facebook::jni::LocalReferenceAllocator> const&) */

long facebook::jni::detail::getDestructorField(basic_strong_ref *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x2f0))
                    (plVar2,*(undefined8 *)param_1,"mDestructor",PTR_kDescriptor_0013dd98);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00130668  facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

/* facebook::jni::base_owned_ref<facebook::jni::JClass,
   facebook::jni::LocalReferenceAllocator>::~base_owned_ref() */

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)this;
  if (lVar4 != 0) {
                    /* try { // try from 00130694 to 001306a7 has its CatchHandler @ 001306d4 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  *(undefined8 *)this = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001306d8  FUN_001306d8 =====

void FUN_001306d8(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = param_1[3];
  *param_1 = (long)(PTR_vtable_0013e058 + 0x10);
  if (lVar4 != 0) {
                    /* try { // try from 00130714 to 00130727 has its CatchHandler @ 00130780 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  param_1[3] = 0;
  if (param_1[2] == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar3) {
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00130784  FUN_00130784 =====

void FUN_00130784(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = param_1[3];
  *param_1 = (long)(PTR_vtable_0013e058 + 0x10);
  if (lVar4 != 0) {
                    /* try { // try from 001307c0 to 001307d3 has its CatchHandler @ 00130810 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  param_1[3] = 0;
  if (param_1[2] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00130814  margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::CxxPart::createHybridObject =====

/* margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::CxxPart::createHybridObject(facebook::jni::basic_strong_ref<margelo::nitro::JHybridObject::JavaPart,
   facebook::jni::LocalReferenceAllocator> const&) */

void margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::CxxPart::
     createHybridObject(basic_strong_ref *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  runtime_error *this;
  bad_alloc *pbVar9;
  long *in_x1;
  long *in_x8;
  long lVar10;
  long *plVar11;
  long local_88;
  ulong local_80 [2];
  ulong local_70;
  long local_68;
  undefined8 local_60;
  long local_58;
  
  puVar1 = PTR_target_class_0013dfd0;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (*in_x1 == 0) {
LAB_00130ad0:
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00130adc to 00130ae7 has its CatchHandler @ 00130c44 */
    std::runtime_error::runtime_error
              (this,
               "Failed to cast JHybridObject::JavaPart to JHybridPlayAgeRangeDeclarationSpec::JavaPart!"
              );
    if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 00130af8 to 00130b0f has its CatchHandler @ 00130c40 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_0013dcd0,PTR__runtime_error_0013dc98);
    }
    goto LAB_00130ce8;
  }
  if (((*PTR_target_class_0013dfd8 & 1) == 0) &&
     (param_1 = (basic_strong_ref *)__cxa_guard_acquire(PTR_target_class_0013dfd8),
     (int)param_1 != 0)) {
                    /* try { // try from 00130b20 to 00130b2f has its CatchHandler @ 00130c04 */
    facebook::jni::findClassStatic(PTR_kBaseName_0013dfe0);
    *(undefined8 *)puVar1 = local_60;
    param_1 = (basic_strong_ref *)__cxa_guard_release(PTR_target_class_0013dfd8);
  }
  if (*(long *)puVar1 == 0) {
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_00130ce8;
    FUN_001373ec(param_1);
LAB_00130b5c:
                    /* try { // try from 00130b5c to 00130b6b has its CatchHandler @ 00130c30 */
    FUN_00137444(local_80,&local_68);
    uVar8 = (ulong)local_80 | 1;
    if ((local_80[0] & 1) != 0) {
      uVar8 = local_70;
    }
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_00130ce8;
                    /* try { // try from 00130b90 to 00130b93 has its CatchHandler @ 00130c18 */
    FUN_0013758c(uVar8);
  }
  else {
                    /* try { // try from 0013086c to 0013087f has its CatchHandler @ 00130c84 */
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5,*in_x1);
    local_68 = lVar6;
                    /* try { // try from 00130888 to 0013089f has its CatchHandler @ 00130c80 */
    plVar5 = (long *)facebook::jni::Environment::current();
    cVar4 = (**(code **)(*plVar5 + 0x58))(plVar5,lVar6,*(undefined8 *)puVar1);
    if (cVar4 == '\0') goto LAB_00130b5c;
    lVar10 = *in_x1;
    if (lVar10 == 0) {
      local_88 = 0;
    }
    else {
                    /* try { // try from 001308b0 to 001308cb has its CatchHandler @ 00130c88 */
      plVar5 = (long *)facebook::jni::Environment::current();
      local_88 = (**(code **)(*plVar5 + 200))(plVar5,lVar10);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (local_88 == 0) {
        pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
        std::bad_alloc::bad_alloc(pbVar9);
        if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 00130bec to 00130c03 has its CatchHandler @ 00130c88 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pbVar9,PTR_typeinfo_0013e060,PTR__bad_alloc_0013e030);
        }
        goto LAB_00130ce8;
      }
    }
    if (lVar6 != 0) {
                    /* try { // try from 001308e8 to 001308fb has its CatchHandler @ 00130c7c */
      plVar5 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar5 + 0xb8))(plVar5,lVar6);
    }
    if (local_88 == 0) goto LAB_00130ad0;
                    /* try { // try from 00130900 to 00130907 has its CatchHandler @ 00130c6c */
    plVar5 = (long *)operator_new(0x98);
    puVar1 = PTR_vtable_0013e068;
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_0013d878;
    plVar11 = plVar5 + 3;
    *plVar11 = (long)(puVar1 + 0x10);
    puVar2 = PTR_PTR_0013dd18;
                    /* try { // try from 00130938 to 00130953 has its CatchHandler @ 00130c64 */
    margelo::nitro::HybridObject::HybridObject((HybridObject *)(plVar5 + 5),PTR_PTR_0013dd18 + 0x40)
    ;
    puVar1 = PTR_construction_vtable_0013dd20 + 0x40;
    plVar5[5] = (long)(PTR_construction_vtable_0013dd20 + 0xb8);
    plVar5[3] = (long)puVar1;
                    /* try { // try from 0013096c to 00130987 has its CatchHandler @ 00130c8c */
    plVar7 = (long *)facebook::jni::Environment::current();
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0013098c to 0013099b has its CatchHandler @ 00130c54 */
    local_80[0] = uVar8;
    margelo::nitro::JHybridObject::JHybridObject((JHybridObject *)(plVar5 + 0x11),puVar2 + 0x50);
    uVar8 = local_80[0];
    if (local_80[0] != 0) {
                    /* try { // try from 001309a4 to 001309b7 has its CatchHandler @ 00130c78 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,uVar8);
    }
    puVar1 = PTR_vtable_0013dd10 + 0x50;
    puVar2 = PTR_vtable_0013dd10 + 0x150;
    plVar5[5] = (long)(PTR_vtable_0013dd10 + 200);
    *plVar11 = (long)puVar1;
    plVar5[0x11] = (long)puVar2;
                    /* try { // try from 001309d8 to 001309f3 has its CatchHandler @ 00130c94 */
    plVar7 = (long *)facebook::jni::Environment::current();
    lVar6 = (**(code **)(*plVar7 + 0xa8))(plVar7,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
    if (lVar6 != 0) {
      plVar5[4] = lVar6;
      lVar6 = (long)plVar11 + *(long *)(plVar5[3] + -0x20);
      if ((lVar6 != -0x20) &&
         ((*(long *)(lVar6 + 0x28) == 0 || (*(long *)(*(long *)(lVar6 + 0x28) + 8) == -1)))) {
        FUN_001229c0(1,plVar5 + 1);
        FUN_001229c0(1,plVar5 + 2);
        lVar10 = *(long *)(lVar6 + 0x28);
        *(long *)(lVar6 + 0x20) = lVar6;
        *(long **)(lVar6 + 0x28) = plVar5;
        if (lVar10 != 0) {
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        lVar6 = FUN_001222d0(0xffffffffffffffff,plVar5 + 1);
        if (lVar6 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      *in_x8 = (long)plVar11 + *(long *)(plVar5[3] + -0x50);
      in_x8[1] = (long)plVar5;
      if (local_88 != 0) {
                    /* try { // try from 00130a8c to 00130a9f has its CatchHandler @ 00130c74 */
        plVar5 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar5 + 0xb8))(plVar5,local_88);
      }
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return;
      }
      goto LAB_00130ce8;
    }
  }
  pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
  std::bad_alloc::bad_alloc(pbVar9);
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 00130bb4 to 00130bcb has its CatchHandler @ 00130c94 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pbVar9,PTR_typeinfo_0013e060,PTR__bad_alloc_0013e030);
  }
LAB_00130ce8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00130cec  FUN_00130cec =====

void FUN_00130cec(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00130d18 to 00130d2b has its CatchHandler @ 00130d58 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00130d5c  FUN_00130d5c =====

void FUN_00130d5c(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_001318bc();
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00130dd0  FUN_00130dd0 =====

void FUN_00130dd0(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_001318bc();
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  facebook::jsi::NativeState::~NativeState(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00130e4c  margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::getPlayAgeRangeDeclaration =====

/* margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::getPlayAgeRangeDeclaration()
    */

void margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::
     getPlayAgeRangeDeclaration(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long in_x0;
  _jobject *p_Var5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined ***pppuVar11;
  long *plVar12;
  undefined8 *in_x8;
  _jmethodID *p_Var13;
  long local_98;
  undefined **local_90;
  undefined8 uStack_88;
  long local_80;
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_00142de8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_00142de8), iVar4 != 0)) {
                    /* try { // try from 0013106c to 0013107b has its CatchHandler @ 00131138 */
    FUN_00131be4(&local_90);
    DAT_00142de0 = FUN_00135058(&local_90);
    __cxa_guard_release(&DAT_00142de8);
  }
  p_Var13 = *(_jmethodID **)(in_x0 + 8);
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var13,DAT_00142de0);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
                    /* try { // try from 00130eb0 to 00130eb7 has its CatchHandler @ 001311dc */
  ppuVar7 = (undefined **)operator_new(0xf0);
  *in_x8 = ppuVar7;
  ppuVar7[3] = (undefined *)0x0;
  ppuVar7[2] = (undefined *)0x0;
  ppuVar7[5] = (undefined *)0x0;
  ppuVar7[4] = (undefined *)0x0;
  ppuVar7[7] = (undefined *)0x0;
  ppuVar7[6] = (undefined *)0x0;
  ppuVar7[9] = (undefined *)0x0;
  ppuVar7[8] = (undefined *)0x0;
  ppuVar7[0xb] = (undefined *)0x0;
  ppuVar7[10] = (undefined *)0x0;
  ppuVar7[0xd] = (undefined *)0x0;
  ppuVar7[0xc] = (undefined *)0x0;
  ppuVar7[0xf] = (undefined *)0x0;
  ppuVar7[0xe] = (undefined *)0x0;
  ppuVar7[0x11] = (undefined *)0x0;
  ppuVar7[0x10] = (undefined *)0x0;
  ppuVar7[0x13] = (undefined *)0x0;
  ppuVar7[0x12] = (undefined *)0x0;
  ppuVar7[0x15] = (undefined *)0x0;
  ppuVar7[0x14] = (undefined *)0x0;
  ppuVar7[0x17] = (undefined *)0x0;
  ppuVar7[0x16] = (undefined *)0x0;
  ppuVar7[0x19] = (undefined *)0x0;
  ppuVar7[0x18] = (undefined *)0x0;
  ppuVar7[0x1b] = (undefined *)0x0;
  ppuVar7[0x1a] = (undefined *)0x0;
  ppuVar7[0x1d] = (undefined *)0x0;
  ppuVar7[0x1c] = (undefined *)0x0;
  ppuVar7[1] = (undefined *)0x0;
  *ppuVar7 = (undefined *)0x0;
  local_90 = ppuVar7;
                    /* try { // try from 00130ee8 to 00130eef has its CatchHandler @ 001311cc */
  puVar8 = (undefined8 *)operator_new(0x20);
  puVar8[2] = 0;
  *puVar8 = &PTR____shared_weak_count_0013d498;
  puVar8[1] = 0;
  puVar3 = PTR_hybridDataField_0013dd48;
  puVar8[3] = ppuVar7;
  in_x8[1] = puVar8;
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_0013dd48), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 001310b0 to 001310b3 has its CatchHandler @ 0013111c */
    uVar9 = FUN_00131f6c(local_90);
    *(undefined8 *)PTR_hybridDataField_0013dd40 = uVar9;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_0013dd48);
  }
                    /* try { // try from 00130f18 to 00130f2b has its CatchHandler @ 001311e8 */
  puVar2 = PTR_hybridDataField_0013dd40;
  uVar9 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_0013dd40);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_001229c0(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_0013d550;
                    /* try { // try from 00130f60 to 00130f67 has its CatchHandler @ 0013118c */
  local_70 = &local_90;
  FUN_001321f0(uVar9,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar11 = &local_90;
LAB_00130f88:
    (*(code *)(*pppuVar11)[lVar6])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar11 = local_70;
    goto LAB_00130f88;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_0013dd48), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 001310f8 to 001310fb has its CatchHandler @ 00131118 */
    uVar9 = FUN_00131f6c(local_90);
    *(undefined8 *)puVar2 = uVar9;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_0013dd48);
  }
                    /* try { // try from 00130f9c to 00130fab has its CatchHandler @ 001311e8 */
  uVar10 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_0013dd40);
  uVar9 = *in_x8;
  lVar6 = in_x8[1];
  if (lVar6 != 0) {
    FUN_001229c0(1,lVar6 + 8);
  }
  local_90 = &PTR_FUN_0013d5e0;
                    /* try { // try from 00130fe0 to 00130fe7 has its CatchHandler @ 0013114c */
  uStack_88 = uVar9;
  local_80 = lVar6;
  local_70 = &local_90;
  FUN_00132500(uVar10,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar11 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_00131014;
    lVar6 = 5;
    pppuVar11 = local_70;
  }
  (*(code *)(*pppuVar11)[lVar6])();
LAB_00131014:
  lVar6 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 0013101c to 0013102f has its CatchHandler @ 001311e4 */
    plVar12 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar12 + 0xb8))(plVar12,lVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00131218  margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::requestDeclaredAgeRange =====

/* margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::requestDeclaredAgeRange(double,
   std::__ndk1::optional<double>, std::__ndk1::optional<double>) */

void margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::
     requestDeclaredAgeRange
               (undefined8 *param_1_00,undefined8 param_1,long param_3,undefined8 param_4,
               char param_5,undefined8 param_6,char param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  _jobject *p_Var5;
  long lVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined ***pppuVar12;
  long lVar13;
  _jmethodID *p_Var14;
  long local_a0;
  long local_98;
  undefined **local_90;
  undefined8 uStack_88;
  long local_80;
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_00142df8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_00142df8), iVar4 != 0)) {
                    /* try { // try from 001314d4 to 001314e3 has its CatchHandler @ 001315a4 */
    FUN_00131be4(&local_90);
    DAT_00142df0 = FUN_00131ca4(&local_90);
    __cxa_guard_release(&DAT_00142df8);
  }
  p_Var14 = *(_jmethodID **)(param_3 + 8);
  if (param_5 == '\0') {
    local_90 = (undefined **)0x0;
    if (param_7 == '\0') goto LAB_001312b8;
LAB_00131294:
    ppuVar8 = local_90;
                    /* try { // try from 00131298 to 0013129f has its CatchHandler @ 001315b8 */
    FUN_00131d20(param_6,&local_a0);
  }
  else {
    FUN_00131d20(param_4,&local_90);
    if (param_7 != '\0') goto LAB_00131294;
LAB_001312b8:
    local_a0 = 0;
    ppuVar8 = local_90;
  }
  lVar13 = local_a0;
                    /* try { // try from 001312c0 to 001312e7 has its CatchHandler @ 0013167c */
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var14,param_1,DAT_00142df0,ppuVar8,lVar13);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
  if (lVar13 != 0) {
                    /* try { // try from 001312f0 to 00131303 has its CatchHandler @ 00131660 */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,lVar13);
  }
  if (ppuVar8 != (undefined **)0x0) {
                    /* try { // try from 00131308 to 0013131b has its CatchHandler @ 0013165c */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,ppuVar8);
  }
                    /* try { // try from 0013131c to 00131323 has its CatchHandler @ 00131650 */
  ppuVar8 = (undefined **)operator_new(0xb0);
  *param_1_00 = ppuVar8;
  ppuVar8[3] = (undefined *)0x0;
  ppuVar8[2] = (undefined *)0x0;
  ppuVar8[5] = (undefined *)0x0;
  ppuVar8[4] = (undefined *)0x0;
  ppuVar8[7] = (undefined *)0x0;
  ppuVar8[6] = (undefined *)0x0;
  ppuVar8[9] = (undefined *)0x0;
  ppuVar8[8] = (undefined *)0x0;
  ppuVar8[0xb] = (undefined *)0x0;
  ppuVar8[10] = (undefined *)0x0;
  ppuVar8[0xd] = (undefined *)0x0;
  ppuVar8[0xc] = (undefined *)0x0;
  ppuVar8[0xf] = (undefined *)0x0;
  ppuVar8[0xe] = (undefined *)0x0;
  ppuVar8[0x11] = (undefined *)0x0;
  ppuVar8[0x10] = (undefined *)0x0;
  ppuVar8[0x13] = (undefined *)0x0;
  ppuVar8[0x12] = (undefined *)0x0;
  ppuVar8[0x15] = (undefined *)0x0;
  ppuVar8[0x14] = (undefined *)0x0;
  ppuVar8[1] = (undefined *)0x0;
  *ppuVar8 = (undefined *)0x0;
  local_90 = ppuVar8;
                    /* try { // try from 0013134c to 00131353 has its CatchHandler @ 00131640 */
  puVar9 = (undefined8 *)operator_new(0x20);
  puVar9[2] = 0;
  *puVar9 = &PTR____shared_weak_count_0013d670;
  puVar9[1] = 0;
  puVar3 = PTR_hybridDataField_0013dd48;
  puVar9[3] = ppuVar8;
  param_1_00[1] = puVar9;
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_0013dd48), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0013151c to 0013151f has its CatchHandler @ 00131588 */
    uVar10 = FUN_00131f6c(local_90);
    *(undefined8 *)PTR_hybridDataField_0013dd40 = uVar10;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_0013dd48);
  }
                    /* try { // try from 0013137c to 0013138f has its CatchHandler @ 00131664 */
  puVar2 = PTR_hybridDataField_0013dd40;
  uVar10 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_0013dd40);
  uStack_88 = *param_1_00;
  local_80 = param_1_00[1];
  if (local_80 != 0) {
    FUN_001229c0(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_0013d6e8;
                    /* try { // try from 001313c4 to 001313cb has its CatchHandler @ 00131600 */
  local_70 = &local_90;
  FUN_001321f0(uVar10,&local_90);
  if (local_70 == &local_90) {
    lVar13 = 4;
    pppuVar12 = &local_90;
LAB_001313ec:
    (*(code *)(*pppuVar12)[lVar13])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar13 = 5;
    pppuVar12 = local_70;
    goto LAB_001313ec;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_0013dd48), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 00131564 to 00131567 has its CatchHandler @ 00131584 */
    uVar10 = FUN_00131f6c(local_90);
    *(undefined8 *)puVar2 = uVar10;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_0013dd48);
  }
                    /* try { // try from 00131400 to 0013140f has its CatchHandler @ 00131664 */
  uVar11 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_0013dd40);
  uVar10 = *param_1_00;
  lVar13 = param_1_00[1];
  if (lVar13 != 0) {
    FUN_001229c0(1,lVar13 + 8);
  }
  local_90 = &PTR_FUN_0013d768;
                    /* try { // try from 00131444 to 0013144b has its CatchHandler @ 001315c0 */
  uStack_88 = uVar10;
  local_80 = lVar13;
  local_70 = &local_90;
  FUN_00132500(uVar11,&local_90);
  if (local_70 == &local_90) {
    lVar13 = 4;
    pppuVar12 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_00131478;
    lVar13 = 5;
    pppuVar12 = local_70;
  }
  (*(code *)(*pppuVar12)[lVar13])();
LAB_00131478:
  lVar13 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 00131480 to 00131493 has its CatchHandler @ 00131658 */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,lVar13);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001316ac  FUN_001316ac =====

void FUN_001316ac(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_001318bc(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013172c  FUN_0013172c =====

void FUN_0013172c(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_001318bc(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  facebook::jsi::NativeState::~NativeState(this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001317b4  FUN_001317b4 =====

void FUN_001317b4(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_001318bc(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00131834  FUN_00131834 =====

void FUN_00131834(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_001318bc(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  facebook::jsi::NativeState::~NativeState(this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001318bc  FUN_001318bc =====

void FUN_001318bc(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined ***pppuVar3;
  long *plVar4;
  long lVar5;
  undefined **local_70;
  long *plStack_68;
  long *local_50;
  long local_38;
  
  puVar2 = PTR_vtable_0013dd10;
  local_50 = (long *)&local_70;
  pppuVar3 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1[2] = (long)(PTR_vtable_0013dd10 + 200);
  param_1[0xe] = (long)(puVar2 + 0x150);
  *param_1 = (long)(puVar2 + 0x50);
  local_70 = &PTR_FUN_0013d7e8;
  plStack_68 = param_1;
                    /* try { // try from 00131914 to 0013191b has its CatchHandler @ 00131990 */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar5 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00131948;
    lVar5 = 5;
    pppuVar3 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar3 + lVar5 * 8))();
LAB_00131948:
  lVar5 = param_1[1];
  if (lVar5 != 0) {
                    /* try { // try from 00131950 to 00131963 has its CatchHandler @ 00131994 */
    plVar4 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar4 + 0xb0))(plVar4,lVar5);
  }
  param_1[1] = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00131998  FUN_00131998 =====

void FUN_00131998(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001319d0  FUN_001319d0 =====

void FUN_001319d0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_0013d7e8;
  puVar2[1] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00131a2c  FUN_00131a2c =====

void FUN_00131a2c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_0013d7e8;
  param_2[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00131a74  FUN_00131a74 =====

void FUN_00131a74(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00131aac  FUN_00131aac =====

void FUN_00131aac(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00131ae4  FUN_00131ae4 =====

void FUN_00131ae4(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(lVar5 + 8);
  if (lVar4 != 0) {
                    /* try { // try from 00131b10 to 00131b23 has its CatchHandler @ 00131b50 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  *(undefined8 *)(lVar5 + 8) = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00131b54  FUN_00131b54 =====

void FUN_00131b54(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0013df98) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00131ba4  FUN_00131ba4 =====

undefined * FUN_00131ba4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_0013dfa0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00131be4  FUN_00131be4 =====

void FUN_00131be4(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_0013e008 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_0013e008), iVar2 != 0))
  {
                    /* try { // try from 00131c54 to 00131c67 has its CatchHandler @ 00131c78 */
    facebook::jni::findClassStatic(PTR_kBaseName_0013e010);
    __cxa_guard_release(PTR_cls_0013e008);
  }
  *param_1 = *(undefined8 *)PTR_cls_0013e000;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00131ca4  FUN_00131ca4 =====

long FUN_00131ca4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"requestDeclaredAgeRange",PTR_kDescriptor_0013e020);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00131d20  FUN_00131d20 =====

void FUN_00131d20(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  _jclass *p_Var4;
  undefined8 uVar5;
  long lVar6;
  _jmethodID *p_Var7;
  
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_0013dfb0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_cls_0013dfb0), iVar3 != 0))
  {
                    /* try { // try from 00131dd8 to 00131de3 has its CatchHandler @ 00131e28 */
    FUN_00134570(PTR_cls_0013dfa8);
    __cxa_guard_release(PTR_cls_0013dfb0);
  }
  puVar2 = PTR_method_0013dfb8;
  if (((*PTR_method_0013dfc0 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_method_0013dfc0), iVar3 != 0)) {
                    /* try { // try from 00131e04 to 00131e07 has its CatchHandler @ 00131e1c */
    uVar5 = FUN_00134f3c();
    *(undefined8 *)puVar2 = uVar5;
    __cxa_guard_release(PTR_method_0013dfc0);
  }
  p_Var7 = *(_jmethodID **)PTR_cls_0013dfa8;
  p_Var4 = (_jclass *)facebook::jni::Environment::current();
  uVar5 = _JNIEnv::CallStaticObjectMethod(p_Var4,p_Var7,param_1,*(undefined8 *)puVar2);
  if (*(long *)(lVar1 + 0x28) == lVar6) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    *param_2 = uVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00131e58  _JNIEnv::CallObjectMethod =====

/* _JNIEnv::CallObjectMethod(_jobject*, _jmethodID*, ...) */

void _JNIEnv::CallObjectMethod(_jobject *param_1,_jmethodID *param_2,...)

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
  (**(code **)(*(long *)param_1 + 0x118))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00131ef4  FUN_00131ef4 =====

void FUN_00131ef4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  pvVar3 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar3 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else {
    FUN_00134c78(pvVar3);
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00131f6c  FUN_00131f6c =====

void FUN_00131f6c(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1;
  uVar3 = facebook::jni::detail::HybridClassBase::isHybridClassBase(&local_30);
  if ((uVar3 & 1) == 0) {
    if (((*PTR_cls_0013dd70 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_cls_0013dd70), iVar2 != 0)) {
                    /* try { // try from 00132028 to 0013203b has its CatchHandler @ 00132060 */
      facebook::jni::findClassStatic(PTR_kBaseName_0013dd78);
      __cxa_guard_release(PTR_cls_0013dd70);
    }
    uVar6 = *(undefined8 *)PTR_cls_0013dd68;
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar4 = (**(code **)(*plVar5 + 0x2f0))(plVar5,uVar6,"mHybridData",PTR_kDescriptor_0013dd80);
    facebook::jni::throwCppExceptionIf(lVar4 == 0);
    if (lVar4 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_28) {
        uVar6 = facebook::jni::throwNPE();
                    /* catch() { ... } // from try @ 00132028 with catch @ 00132060 */
        lVar4 = __cxa_guard_abort(PTR_cls_0013dd70);
        if (*(long *)(lVar1 + 0x28) == local_28) {
          lVar4 = FUN_0011e604(uVar6);
        }
      }
      goto LAB_00132088;
    }
  }
  else {
    lVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_00132088:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


// ===== 0013208c  facebook::jni::getHybridDataFromField =====

/* facebook::jni::getHybridDataFromField(facebook::jni::JObject const*,
   facebook::jni::JField<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*> const&) */

undefined8 facebook::jni::getHybridDataFromField(JObject *param_1,JField *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  long local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)param_2;
  if (lVar3 == 0) {
    detail::getHolder<facebook::jni::JObject>((detail *)param_1,(JObject *)param_2);
                    /* try { // try from 00132134 to 0013213b has its CatchHandler @ 00132198 */
    uVar4 = facebook::jni::detail::HybridDestructor::getNativePointer();
    if (local_40 != 0) {
                    /* try { // try from 00132148 to 0013215b has its CatchHandler @ 001321a8 */
      plVar2 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar2 + 0xb8))(plVar2,local_40);
    }
  }
  else {
    uVar4 = *(undefined8 *)param_1;
                    /* try { // try from 001320b8 to 001320cf has its CatchHandler @ 001321ec */
    plVar2 = (long *)facebook::jni::Environment::current();
    auVar5 = (**(code **)(*plVar2 + 0x2f8))(plVar2,uVar4,lVar3);
    local_48 = auVar5._0_8_;
    if (local_48 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00132194 to 00132197 has its CatchHandler @ 001321c4 */
        uVar4 = throwNPE();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00132134 with catch @ 00132198
                        */
        base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
        ::~base_owned_ref((base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
                           *)&local_40);
        if (*(long *)(lVar1 + 0x28) == local_38) {
          FUN_0011e604(uVar4);
        }
      }
      goto LAB_001321e8;
    }
                    /* try { // try from 001320d8 to 001320e3 has its CatchHandler @ 001321c4 */
    detail::getHolder<facebook::jni::detail::HybridData>((detail *)&local_48,auVar5._8_8_);
                    /* try { // try from 001320e4 to 001320eb has its CatchHandler @ 001321ac */
    uVar4 = facebook::jni::detail::HybridDestructor::getNativePointer();
    if (local_40 != 0) {
                    /* try { // try from 001320f8 to 0013210b has its CatchHandler @ 001321c0 */
      plVar2 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar2 + 0xb8))(plVar2,local_40);
    }
    lVar3 = local_48;
    if (local_48 != 0) {
                    /* try { // try from 00132114 to 00132127 has its CatchHandler @ 001321bc */
      plVar2 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar2 + 0xb8))(plVar2,lVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
LAB_001321e8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001321f0  FUN_001321f0 =====

void FUN_001321f0(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  void *pvVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  std::__ndk1::mutex::lock();
  if (*(int *)(param_1 + 0x10) == 1) {
    local_70 = *(undefined8 *)(param_1 + 8);
    plVar3 = (long *)param_2[4];
    if (plVar3 == (long *)0x0) {
      if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_001324fc;
                    /* try { // try from 001324a0 to 001324cb has its CatchHandler @ 001324d8 */
      FUN_00128850();
LAB_001324a4:
      if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_001324fc;
      FUN_00133304();
LAB_001324b8:
      if (*(long *)(lVar2 + 0x28) == local_68) {
        FUN_00124e74();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00132364 with catch @ 001324cc
                        */
        FUN_00123554();
      }
      goto LAB_001324fc;
    }
                    /* try { // try from 00132250 to 001322ef has its CatchHandler @ 001324d8 */
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_70);
  }
  else {
    uVar12 = *(ulong *)(param_1 + 0x20);
    if (uVar12 < *(ulong *)(param_1 + 0x28)) {
      plVar3 = param_2 + 4;
      plVar7 = (long *)*plVar3;
      if (plVar7 == (long *)0x0) {
        plVar3 = (long *)(uVar12 + 0x20);
LAB_001322fc:
        *plVar3 = 0;
      }
      else {
        if (plVar7 != param_2) {
          *(long **)(uVar12 + 0x20) = plVar7;
          goto LAB_001322fc;
        }
        *(ulong *)(uVar12 + 0x20) = uVar12;
                    /* try { // try from 00132348 to 0013234f has its CatchHandler @ 001324d0 */
        (**(code **)(*(long *)*plVar3 + 0x18))((long *)*plVar3,uVar12);
      }
      lVar6 = uVar12 + 0x30;
    }
    else {
      uVar14 = *(ulong *)(param_1 + 0x18);
      lVar6 = (long)(uVar12 - uVar14) >> 4;
      uVar15 = lVar6 * -0x5555555555555555 + 1;
      if (0x555555555555555 < uVar15) goto LAB_001324a4;
      lVar8 = (long)(*(ulong *)(param_1 + 0x28) - uVar14) >> 4;
      uVar11 = lVar8 * 0x5555555555555556;
      if (uVar11 < uVar15 || uVar11 - uVar15 == 0) {
        uVar11 = uVar15;
      }
      if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar11 = 0x555555555555555;
      }
      if (uVar11 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        if (0x555555555555555 < uVar11) goto LAB_001324b8;
        pvVar4 = operator_new(uVar11 * 0x30);
      }
      pvVar13 = (void *)((long)pvVar4 + lVar6 * 0x10);
      plVar3 = param_2 + 4;
      plVar7 = (long *)*plVar3;
      if (plVar7 == (long *)0x0) {
        plVar3 = (long *)((long)pvVar13 + 0x20);
LAB_00132330:
        *plVar3 = 0;
      }
      else {
        if (plVar7 != param_2) {
          *(long **)((long)pvVar13 + 0x20) = plVar7;
          goto LAB_00132330;
        }
        lVar6 = *param_2;
        *(void **)((long)pvVar13 + 0x20) = pvVar13;
                    /* try { // try from 00132364 to 0013236f has its CatchHandler @ 001324cc */
        (**(code **)(lVar6 + 0x18))(param_2,pvVar13);
        uVar14 = *(ulong *)(param_1 + 0x18);
        uVar12 = *(ulong *)(param_1 + 0x20);
      }
      pvVar9 = pvVar13;
      if (uVar12 != uVar14) {
        lVar6 = 0;
        uVar15 = uVar12;
        do {
          lVar8 = uVar12 + lVar6;
          uVar1 = (long)pvVar13 + lVar6;
          lVar10 = *(long *)(lVar8 + -0x10);
          if (lVar10 == 0) {
LAB_00132390:
            *(undefined8 *)(uVar1 - 0x10) = 0;
          }
          else {
            if (lVar8 + -0x30 != lVar10) {
              *(long *)(uVar1 - 0x10) = lVar10;
              uVar1 = uVar15;
              goto LAB_00132390;
            }
            *(ulong *)(uVar1 - 0x10) = uVar1 - 0x30;
                    /* try { // try from 001323e4 to 001323e7 has its CatchHandler @ 001324d4 */
            (**(code **)(**(long **)(lVar8 + -0x10) + 0x18))();
          }
          lVar6 = lVar6 + -0x30;
          uVar15 = uVar15 - 0x30;
        } while (uVar12 + lVar6 != uVar14);
        pvVar9 = (void *)((long)pvVar13 + lVar6);
      }
      plVar3 = *(long **)(param_1 + 0x18);
      plVar7 = *(long **)(param_1 + 0x20);
      lVar6 = (long)pvVar13 + 0x30;
      *(void **)(param_1 + 0x18) = pvVar9;
      *(long *)(param_1 + 0x20) = lVar6;
      *(void **)(param_1 + 0x28) = (void *)((long)pvVar4 + uVar11 * 0x30);
joined_r0x00132408:
      if (plVar7 != plVar3) {
        plVar5 = (long *)plVar7[-2];
        plVar7 = plVar7 + -6;
        if (plVar7 != plVar5) goto code_r0x00132484;
        lVar8 = 4;
        plVar5 = plVar7;
        goto LAB_0013245c;
      }
      if (plVar3 != (long *)0x0) {
        operator_delete(plVar3);
      }
    }
    *(long *)(param_1 + 0x20) = lVar6;
  }
  std::__ndk1::mutex::unlock();
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_001324fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00132484:
  if (plVar5 != (long *)0x0) {
    lVar8 = 5;
LAB_0013245c:
    (**(code **)(*plVar5 + lVar8 * 8))();
  }
  goto joined_r0x00132408;
}


// ===== 00132500  FUN_00132500 =====

void FUN_00132500(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  void *pvVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  std::__ndk1::mutex::lock();
  if (*(int *)(param_1 + 0x10) == 2) {
    local_70 = *(undefined8 *)(param_1 + 8);
    plVar3 = (long *)param_2[4];
    if (plVar3 == (long *)0x0) {
      if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_0013280c;
                    /* try { // try from 001327b0 to 001327db has its CatchHandler @ 001327e8 */
      FUN_00128850();
LAB_001327b4:
      if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_0013280c;
      FUN_00132a08();
LAB_001327c8:
      if (*(long *)(lVar2 + 0x28) == local_68) {
        FUN_00124e74();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00132674 with catch @ 001327dc
                        */
        FUN_00123554();
      }
      goto LAB_0013280c;
    }
                    /* try { // try from 00132560 to 001325ff has its CatchHandler @ 001327e8 */
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_70);
  }
  else {
    uVar12 = *(ulong *)(param_1 + 0x38);
    if (uVar12 < *(ulong *)(param_1 + 0x40)) {
      plVar3 = param_2 + 4;
      plVar7 = (long *)*plVar3;
      if (plVar7 == (long *)0x0) {
        plVar3 = (long *)(uVar12 + 0x20);
LAB_0013260c:
        *plVar3 = 0;
      }
      else {
        if (plVar7 != param_2) {
          *(long **)(uVar12 + 0x20) = plVar7;
          goto LAB_0013260c;
        }
        *(ulong *)(uVar12 + 0x20) = uVar12;
                    /* try { // try from 00132658 to 0013265f has its CatchHandler @ 001327e0 */
        (**(code **)(*(long *)*plVar3 + 0x18))((long *)*plVar3,uVar12);
      }
      lVar6 = uVar12 + 0x30;
    }
    else {
      uVar14 = *(ulong *)(param_1 + 0x30);
      lVar6 = (long)(uVar12 - uVar14) >> 4;
      uVar15 = lVar6 * -0x5555555555555555 + 1;
      if (0x555555555555555 < uVar15) goto LAB_001327b4;
      lVar8 = (long)(*(ulong *)(param_1 + 0x40) - uVar14) >> 4;
      uVar11 = lVar8 * 0x5555555555555556;
      if (uVar11 < uVar15 || uVar11 - uVar15 == 0) {
        uVar11 = uVar15;
      }
      if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar11 = 0x555555555555555;
      }
      if (uVar11 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        if (0x555555555555555 < uVar11) goto LAB_001327c8;
        pvVar4 = operator_new(uVar11 * 0x30);
      }
      pvVar13 = (void *)((long)pvVar4 + lVar6 * 0x10);
      plVar3 = param_2 + 4;
      plVar7 = (long *)*plVar3;
      if (plVar7 == (long *)0x0) {
        plVar3 = (long *)((long)pvVar13 + 0x20);
LAB_00132640:
        *plVar3 = 0;
      }
      else {
        if (plVar7 != param_2) {
          *(long **)((long)pvVar13 + 0x20) = plVar7;
          goto LAB_00132640;
        }
        lVar6 = *param_2;
        *(void **)((long)pvVar13 + 0x20) = pvVar13;
                    /* try { // try from 00132674 to 0013267f has its CatchHandler @ 001327dc */
        (**(code **)(lVar6 + 0x18))(param_2,pvVar13);
        uVar14 = *(ulong *)(param_1 + 0x30);
        uVar12 = *(ulong *)(param_1 + 0x38);
      }
      pvVar9 = pvVar13;
      if (uVar12 != uVar14) {
        lVar6 = 0;
        uVar15 = uVar12;
        do {
          lVar8 = uVar12 + lVar6;
          uVar1 = (long)pvVar13 + lVar6;
          lVar10 = *(long *)(lVar8 + -0x10);
          if (lVar10 == 0) {
LAB_001326a0:
            *(undefined8 *)(uVar1 - 0x10) = 0;
          }
          else {
            if (lVar8 + -0x30 != lVar10) {
              *(long *)(uVar1 - 0x10) = lVar10;
              uVar1 = uVar15;
              goto LAB_001326a0;
            }
            *(ulong *)(uVar1 - 0x10) = uVar1 - 0x30;
                    /* try { // try from 001326f4 to 001326f7 has its CatchHandler @ 001327e4 */
            (**(code **)(**(long **)(lVar8 + -0x10) + 0x18))();
          }
          lVar6 = lVar6 + -0x30;
          uVar15 = uVar15 - 0x30;
        } while (uVar12 + lVar6 != uVar14);
        pvVar9 = (void *)((long)pvVar13 + lVar6);
      }
      plVar3 = *(long **)(param_1 + 0x30);
      plVar7 = *(long **)(param_1 + 0x38);
      lVar6 = (long)pvVar13 + 0x30;
      *(void **)(param_1 + 0x30) = pvVar9;
      *(long *)(param_1 + 0x38) = lVar6;
      *(void **)(param_1 + 0x40) = (void *)((long)pvVar4 + uVar11 * 0x30);
joined_r0x00132718:
      if (plVar7 != plVar3) {
        plVar5 = (long *)plVar7[-2];
        plVar7 = plVar7 + -6;
        if (plVar7 != plVar5) goto code_r0x00132794;
        lVar8 = 4;
        plVar5 = plVar7;
        goto LAB_0013276c;
      }
      if (plVar3 != (long *)0x0) {
        operator_delete(plVar3);
      }
    }
    *(long *)(param_1 + 0x38) = lVar6;
  }
  std::__ndk1::mutex::unlock();
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0013280c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00132794:
  if (plVar5 != (long *)0x0) {
    lVar8 = 5;
LAB_0013276c:
    (**(code **)(*plVar5 + lVar8 * 8))();
  }
  goto joined_r0x00132718;
}


// ===== 00132810  FUN_00132810 =====

void FUN_00132810(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_001222d0(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
     ) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013289c  FUN_0013289c =====

void FUN_0013289c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_001222d0(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
     ) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00132928  FUN_00132928 =====

void FUN_00132928(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00132954 to 00132967 has its CatchHandler @ 00132994 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00132998  FUN_00132998 =====

void FUN_00132998(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 001329c4 to 001329d7 has its CatchHandler @ 00132a04 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00132a08  FUN_00132a08 =====

void FUN_00132a08(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_00124fb0("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00132a40  FUN_00132a40 =====

void FUN_00132a40(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0013d768;
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_001222d0(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00132ad8  FUN_00132ad8 =====

void FUN_00132ad8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0013d768;
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_001222d0(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00132b64  FUN_00132b64 =====

void FUN_00132b64(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x18);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_0013d768;
  puVar4[1] = uVar1;
  puVar4[2] = lVar2;
  if (lVar2 != 0) {
    FUN_001229c0(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


// ===== 00132bdc  FUN_00132bdc =====

void FUN_00132bdc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0013d768;
  param_2[1] = uVar1;
  param_2[2] = lVar2;
  if (lVar2 != 0) {
    FUN_001229c0(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00132c40  FUN_00132c40 =====

void FUN_00132c40(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x10);
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_001222d0(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00132ccc  FUN_00132ccc =====

void FUN_00132ccc(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)((long)param_1 + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_001222d0(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00132d4c  FUN_00132d4c =====

void FUN_00132d4c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  exception_ptr aeStack_98 [8];
  JniException aJStack_90 [48];
  undefined8 local_60;
  JniException aJStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60 = *param_2;
  facebook::jni::JniException::JniException(aJStack_58,&local_60);
  uVar2 = *(undefined8 *)(param_1 + 8);
                    /* try { // try from 00132d84 to 00132d8f has its CatchHandler @ 00132df8 */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_00132eb0(aeStack_98,aJStack_90);
                    /* try { // try from 00132d9c to 00132da7 has its CatchHandler @ 00132de0 */
  FUN_00132f64(uVar2,aeStack_98);
  std::exception_ptr::~exception_ptr(aeStack_98);
  facebook::jni::JniException::~JniException(aJStack_90);
  facebook::jni::JniException::~JniException(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00132e20  FUN_00132e20 =====

void FUN_00132e20(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro23playagerangedeclaration34JHybridPlayAgeRangeDeclarationSpec23requestDeclaredAgeRangeEdNSt6__ndk18optionalIdEES5_ENK3$_0clEvEUlRKN8facebook3jni9alias_refINS8_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00132e70  FUN_00132e70 =====

pointer_____offset_0x10___ * FUN_00132e70(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0013d7c8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00132eb0  FUN_00132eb0 =====

void FUN_00132eb0(undefined8 param_1,JniException *param_2)

{
  long lVar1;
  JniException *this;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (JniException *)__cxa_allocate_exception(0x30);
                    /* try { // try from 00132ee4 to 00132eeb has its CatchHandler @ 00132f18 */
  facebook::jni::JniException::JniException(this,param_2);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* try { // try from 00132efc to 00132f13 has its CatchHandler @ 00132f14 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,PTR_typeinfo_0013e050,PTR__JniException_0013e028);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00132f64  FUN_00132f64 =====

void FUN_00132f64(exception_ptr *param_1,exception_ptr *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  runtime_error *this;
  long lVar6;
  long *plVar7;
  undefined1 auStack_90 [24];
  basic_string abStack_78 [24];
  undefined8 local_60 [3];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)param_2;
  local_60[0] = 0;
  std::exception_ptr::~exception_ptr((exception_ptr *)local_60);
  if (lVar6 == 0) {
    FUN_0012739c(local_60,PTR_typeinfo_name_0013dc68,1);
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00133114 to 00133127 has its CatchHandler @ 001331f0 */
    std::__ndk1::operator+("Cannot reject Promise<",(basic_string *)local_60);
                    /* try { // try from 00133128 to 0013313b has its CatchHandler @ 001331d8 */
    FUN_0012425c(abStack_78,auStack_90,"> with a null exception_ptr!");
                    /* try { // try from 00133140 to 00133177 has its CatchHandler @ 001331a4 */
    std::runtime_error::runtime_error(this,abStack_78);
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_0013dcd0,PTR__runtime_error_0013dc98);
    }
    goto LAB_00133224;
  }
  std::__ndk1::mutex::lock();
  uVar2 = *(uint *)(param_1 + 0x50);
  if (uVar2 == 0xffffffff) {
LAB_00132fe8:
    *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
    std::exception_ptr::exception_ptr(param_1,param_2);
    *(undefined4 *)(param_1 + 0x50) = 2;
  }
  else {
    if (uVar2 != 2) {
                    /* try { // try from 00132fdc to 00132fe7 has its CatchHandler @ 0013318c */
      (*(code *)(&PTR_FUN_0013d6c0)[uVar2])(local_60,param_1);
      goto LAB_00132fe8;
    }
    std::exception_ptr::operator=(param_1,param_2);
  }
  lVar1 = *(long *)(param_1 + 0x78);
  for (lVar6 = *(long *)(param_1 + 0x70); lVar6 != lVar1; lVar6 = lVar6 + 0x30) {
    plVar4 = *(long **)(lVar6 + 0x20);
    if (plVar4 == (long *)0x0) {
      if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 00133188 to 0013318b has its CatchHandler @ 00133194 */
        FUN_00128850();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00132fdc with catch @ 0013318c
                        */
        FUN_00123554();
      }
      goto LAB_00133224;
    }
                    /* try { // try from 00133020 to 00133027 has its CatchHandler @ 00133190 */
    (**(code **)(*plVar4 + 0x30))(plVar4,param_2);
  }
  plVar4 = *(long **)(param_1 + 0x58);
  plVar7 = *(long **)(param_1 + 0x60);
LAB_00133050:
  if (plVar7 != plVar4) {
    plVar5 = (long *)plVar7[-2];
    plVar7 = plVar7 + -6;
    if (plVar7 != plVar5) goto code_r0x00133068;
    lVar6 = 4;
    plVar5 = plVar7;
    goto LAB_00133044;
  }
  plVar7 = *(long **)(param_1 + 0x70);
  plVar5 = *(long **)(param_1 + 0x78);
  *(long **)(param_1 + 0x60) = plVar4;
joined_r0x00133080:
  if (plVar5 != plVar7) {
    plVar4 = (long *)plVar5[-2];
    plVar5 = plVar5 + -6;
    if (plVar5 != plVar4) goto code_r0x001330e8;
    lVar6 = 4;
    plVar4 = plVar5;
    goto LAB_001330c0;
  }
  *(long **)(param_1 + 0x78) = plVar7;
  std::__ndk1::mutex::unlock();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_00133224:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00133068:
  if (plVar5 != (long *)0x0) {
    lVar6 = 5;
LAB_00133044:
    (**(code **)(*plVar5 + lVar6 * 8))();
  }
  goto LAB_00133050;
code_r0x001330e8:
  if (plVar4 != (long *)0x0) {
    lVar6 = 5;
LAB_001330c0:
    (**(code **)(*plVar4 + lVar6 * 8))();
  }
  goto joined_r0x00133080;
}


// ===== 00133228  FUN_00133228 =====

void FUN_00133228(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00133260  FUN_00133260 =====

void FUN_00133260(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if ((*(char *)(param_2 + 0x28) == '\0') || ((*(byte *)(param_2 + 0x10) & 1) == 0)) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(*(void **)(param_2 + 0x20));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001332c8  FUN_001332c8 =====

void FUN_001332c8(undefined8 param_1,exception_ptr *param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    std::exception_ptr::~exception_ptr(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00133304  FUN_00133304 =====

void FUN_00133304(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_00124fb0("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013333c  FUN_0013333c =====

void FUN_0013333c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0013d6e8;
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_001222d0(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001333d4  FUN_001333d4 =====

void FUN_001333d4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0013d6e8;
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_001222d0(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00133460  FUN_00133460 =====

void FUN_00133460(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x18);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_0013d6e8;
  puVar4[1] = uVar1;
  puVar4[2] = lVar2;
  if (lVar2 != 0) {
    FUN_001229c0(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


// ===== 001334d8  FUN_001334d8 =====

void FUN_001334d8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0013d6e8;
  param_2[1] = uVar1;
  param_2[2] = lVar2;
  if (lVar2 != 0) {
    FUN_001229c0(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013353c  FUN_0013353c =====

void FUN_0013353c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x10);
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_001222d0(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001335c8  FUN_001335c8 =====

void FUN_001335c8(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)((long)param_1 + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_001222d0(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00133648  FUN_00133648 =====

void FUN_00133648(long param_1,long *param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined7 uVar10;
  undefined7 uVar11;
  long lVar12;
  long lVar13;
  char cVar14;
  int iVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  uint uVar22;
  undefined8 uVar23;
  long *plVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  ulong local_138;
  char *pcStack_130;
  undefined8 local_100;
  ulong local_f8;
  char *local_f0;
  undefined4 local_e8;
  uint uStack_e4;
  undefined8 local_d8;
  ulong uStack_d0;
  char *local_c8;
  char local_c0;
  ulong local_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined4 local_98;
  undefined3 uStack_94;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  param_2 = (long *)*param_2;
  puVar21 = *(undefined8 **)(param_1 + 8);
  if ((*PTR_clazz_0013dee8 & 1) == 0) goto LAB_00133c80;
  do {
    puVar7 = PTR_fieldIsEligible_0013def0;
    if (((*PTR_fieldIsEligible_0013def8 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_fieldIsEligible_0013def8), iVar15 != 0)) {
                    /* try { // try from 00133cb4 to 00133cbf has its CatchHandler @ 00133e6c */
      uVar23 = FUN_00134134(PTR_clazz_0013dee0);
      *(undefined8 *)puVar7 = uVar23;
      __cxa_guard_release(PTR_fieldIsEligible_0013def8);
    }
    uVar23 = *(undefined8 *)puVar7;
                    /* try { // try from 001336ac to 001336c3 has its CatchHandler @ 00133f3c */
    plVar16 = (long *)facebook::jni::Environment::current();
    cVar14 = (**(code **)(*plVar16 + 0x300))(plVar16,param_2,uVar23);
    puVar7 = PTR_fieldStatus_0013df00;
    if (((*PTR_fieldStatus_0013df08 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_fieldStatus_0013df08), iVar15 != 0)) {
                    /* try { // try from 00133ce4 to 00133ce7 has its CatchHandler @ 00133e58 */
      uVar23 = FUN_001341b0();
      *(undefined8 *)puVar7 = uVar23;
      __cxa_guard_release(PTR_fieldStatus_0013df08);
    }
    uVar23 = *(undefined8 *)puVar7;
                    /* try { // try from 001336e4 to 001336fb has its CatchHandler @ 00133f38 */
    plVar16 = (long *)facebook::jni::Environment::current();
    local_78 = (**(code **)(*plVar16 + 0x2f8))(plVar16,param_2,uVar23);
    puVar7 = PTR_fieldParentControls_0013df10;
    if (((*PTR_fieldParentControls_0013df18 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_fieldParentControls_0013df18), iVar15 != 0)) {
                    /* try { // try from 00133d0c to 00133d1f has its CatchHandler @ 00133e44 */
      uVar23 = FUN_00134230(PTR_clazz_0013dee0,"parentControls");
      *(undefined8 *)puVar7 = uVar23;
      __cxa_guard_release(PTR_fieldParentControls_0013df18);
    }
    uVar23 = *(undefined8 *)puVar7;
                    /* try { // try from 0013371c to 00133733 has its CatchHandler @ 00133f34 */
    plVar16 = (long *)facebook::jni::Environment::current();
    local_80 = (**(code **)(*plVar16 + 0x2f8))(plVar16,param_2,uVar23);
    puVar7 = PTR_fieldLowerBound_0013df20;
    if (((*PTR_fieldLowerBound_0013df28 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_fieldLowerBound_0013df28), iVar15 != 0)) {
                    /* try { // try from 00133d44 to 00133d57 has its CatchHandler @ 00133e30 */
      uVar23 = FUN_001342b4(PTR_clazz_0013dee0,"lowerBound");
      *(undefined8 *)puVar7 = uVar23;
      __cxa_guard_release(PTR_fieldLowerBound_0013df28);
    }
    uVar23 = *(undefined8 *)puVar7;
                    /* try { // try from 00133754 to 0013376b has its CatchHandler @ 00133f30 */
    plVar16 = (long *)facebook::jni::Environment::current();
    local_88 = (**(code **)(*plVar16 + 0x2f8))(plVar16,param_2,uVar23);
    puVar7 = PTR_fieldUpperBound_0013df30;
    if (((*PTR_fieldUpperBound_0013df38 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_fieldUpperBound_0013df38), iVar15 != 0)) {
                    /* try { // try from 00133d7c to 00133d8f has its CatchHandler @ 00133e1c */
      uVar23 = FUN_001342b4(PTR_clazz_0013dee0,"upperBound");
      *(undefined8 *)puVar7 = uVar23;
      __cxa_guard_release(PTR_fieldUpperBound_0013df38);
    }
    uVar23 = *(undefined8 *)puVar7;
                    /* try { // try from 0013378c to 001337a3 has its CatchHandler @ 00133f2c */
    plVar16 = (long *)facebook::jni::Environment::current();
    local_90 = (**(code **)(*plVar16 + 0x2f8))(plVar16,param_2,uVar23);
    if (local_78 == 0) {
      lVar20 = 0;
      uVar25 = 0;
      uVar6 = 0;
      uVar22 = 0;
      uVar3 = 0;
      if (local_80 == 0) goto LAB_00133860;
LAB_0013380c:
                    /* try { // try from 0013380c to 00133817 has its CatchHandler @ 00133ee8 */
      lVar26 = local_80;
      facebook::jni::JString::toStdString();
      local_98 = local_100._1_4_;
      uStack_94 = (undefined3)(local_100 >> 0x28);
      local_138 = local_f8;
      pcStack_130 = local_f0;
      bVar5 = (byte)local_100;
      local_f8 = 0;
      local_f0 = (char *)0x0;
      local_100 = 0;
    }
    else {
      if (((*PTR_clazz_0013df68 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_clazz_0013df68), iVar15 != 0)) {
                    /* try { // try from 00133db4 to 00133db7 has its CatchHandler @ 00133e04 */
        FUN_00134748();
        __cxa_guard_release(PTR_clazz_0013df68);
      }
      puVar7 = PTR_fieldOrdinal_0013df70;
      if (((*PTR_fieldOrdinal_0013df78 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_fieldOrdinal_0013df78), iVar15 != 0)) {
                    /* try { // try from 00133dd8 to 00133de3 has its CatchHandler @ 00133df8 */
        uVar23 = FUN_0013480c(PTR_clazz_0013df60);
        *(undefined8 *)puVar7 = uVar23;
        __cxa_guard_release(PTR_fieldOrdinal_0013df78);
      }
      lVar20 = local_78;
      uVar23 = *(undefined8 *)puVar7;
                    /* try { // try from 001337e0 to 001337f7 has its CatchHandler @ 00133f28 */
      plVar16 = (long *)facebook::jni::Environment::current();
      uVar17 = (**(code **)(*plVar16 + 800))(plVar16,lVar20,uVar23);
      uVar25 = uVar17 >> 8 & 0xffffff;
      uVar22 = (uint)uVar17;
      uVar6 = 1;
      uVar3 = uVar22;
      if (local_80 != 0) goto LAB_0013380c;
LAB_00133860:
      uVar22 = uVar3;
      bVar5 = 0;
      lVar26 = local_80;
    }
    lVar13 = local_88;
    bVar1 = local_88 == 0;
    if (bVar1) {
      uVar17 = 0;
      uVar27 = 0;
    }
    else {
                    /* try { // try from 00133870 to 00133877 has its CatchHandler @ 00133ebc */
      uVar27 = FUN_00134338(&local_88);
      uVar17 = uVar27 & 0xffffffffffffff00;
    }
    lVar12 = local_90;
    bVar1 = !bVar1;
    bVar2 = local_90 == 0;
    if (bVar2) {
      uVar19 = 0;
      uVar28 = 0;
    }
    else {
                    /* try { // try from 001338a4 to 001338ab has its CatchHandler @ 00133eb8 */
      uVar28 = FUN_00134338(&local_90);
      uVar19 = uVar28 & 0xffffffffffffff00;
    }
    uVar10 = uStack_a7;
    uVar8 = uStack_a8;
    bVar2 = !bVar2;
    uStack_e4 = (uint)(uVar25 << 8) | uVar22 & 0xff;
    uVar17 = uVar27 & 0xff | uVar17;
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_e8 = CONCAT31(local_e8._1_3_,cVar14 != '\0');
    local_c0 = '\0';
    uStack_a8 = (undefined1)uVar28;
    uVar9 = uStack_a8;
    uStack_a7 = (undefined7)(uVar19 >> 8);
    uVar11 = uStack_a7;
    if (lVar26 == 0) {
      uStack_9f = 0;
      uStack_af = 0;
      local_b8 = uVar17;
      uStack_b0 = bVar1;
      uStack_a0 = bVar2;
    }
    else {
      if ((bVar5 & 1) == 0) {
        uStack_9f = 0;
        local_d8._0_5_ = CONCAT41(local_98,bVar5);
        local_d8 = CONCAT44(CONCAT31(uStack_94,local_98._3_1_),(undefined4)local_d8);
        uStack_d0 = local_138;
        local_c8 = pcStack_130;
        local_c0 = '\x01';
        uStack_af = 0;
        local_b8 = uVar17;
        uStack_b0 = bVar1;
        uStack_a0 = bVar2;
      }
      else {
                    /* try { // try from 00133954 to 00133963 has its CatchHandler @ 00133e94 */
        uStack_a8 = uVar8;
        uStack_a7 = uVar10;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_d8,pcStack_130,local_138);
        uStack_9f = 0;
        local_c0 = '\x01';
        uStack_af = 0;
        local_b8 = uVar17;
        uStack_b0 = bVar1;
        uStack_a8 = uVar9;
        uStack_a7 = uVar11;
        uStack_a0 = bVar2;
        operator_delete(pcStack_130);
      }
      if ((local_100 & 1) != 0) {
        operator_delete(local_f0);
      }
    }
    if (lVar12 != 0) {
                    /* try { // try from 00133998 to 001339ab has its CatchHandler @ 00133f24 */
      plVar16 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar16 + 0xb8))(plVar16,lVar12);
    }
    if (lVar13 != 0) {
                    /* try { // try from 001339b0 to 001339c3 has its CatchHandler @ 00133f20 */
      plVar16 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar16 + 0xb8))(plVar16,lVar13);
    }
    lVar26 = local_80;
    if (local_80 != 0) {
                    /* try { // try from 001339cc to 001339df has its CatchHandler @ 00133f1c */
      plVar16 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar16 + 0xb8))(plVar16,lVar26);
    }
    if (lVar20 != 0) {
                    /* try { // try from 001339e4 to 001339f7 has its CatchHandler @ 00133f18 */
      plVar16 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar16 + 0xb8))(plVar16,lVar20);
    }
                    /* try { // try from 001339f8 to 001339ff has its CatchHandler @ 00133f10 */
    std::__ndk1::mutex::lock();
    uVar3 = *(uint *)(puVar21 + 10);
    if (uVar3 == 0xffffffff) {
LAB_00133a78:
      *(undefined1 *)(puVar21 + 2) = 0;
      *puVar21 = CONCAT44(uStack_e4,local_e8);
      *(undefined1 *)(puVar21 + 1) = uVar6;
      *(undefined1 *)(puVar21 + 5) = 0;
      *(undefined4 *)(puVar21 + 10) = 0xffffffff;
      if (local_c0 != '\0') {
        puVar21[4] = local_c8;
        puVar21[3] = uStack_d0;
        puVar21[2] = local_d8;
        uStack_d0 = 0;
        local_c8 = (char *)0x0;
        local_d8 = 0;
        *(undefined1 *)(puVar21 + 5) = 1;
      }
      uVar30 = CONCAT17(uStack_a0,uStack_a7);
      uVar29 = CONCAT17(uStack_a8,uStack_af);
      uVar23 = CONCAT71(uStack_af,uStack_b0);
      *(undefined4 *)(puVar21 + 10) = 1;
    }
    else {
      if (uVar3 != 1) {
                    /* try { // try from 00133a6c to 00133a77 has its CatchHandler @ 00133eb4 */
        (*(code *)(&PTR_FUN_0013d6c0)[uVar3])(&local_78,puVar21);
        goto LAB_00133a78;
      }
      *(undefined1 *)(puVar21 + 1) = uVar6;
      cVar14 = *(char *)(puVar21 + 5);
      *puVar21 = CONCAT44(uStack_e4,local_e8);
      if (cVar14 == local_c0) {
        if (cVar14 != '\0') {
          if ((*(byte *)(puVar21 + 2) & 1) != 0) {
            operator_delete((void *)puVar21[4]);
          }
          puVar21[4] = local_c8;
          puVar21[3] = uStack_d0;
          puVar21[2] = local_d8;
          local_d8 = local_d8 & 0xffffffffffff0000;
        }
      }
      else if (cVar14 == '\0') {
        puVar21[4] = local_c8;
        puVar21[3] = uStack_d0;
        puVar21[2] = local_d8;
        uStack_d0 = 0;
        local_c8 = (char *)0x0;
        local_d8 = 0;
        *(undefined1 *)(puVar21 + 5) = 1;
      }
      else {
        if ((*(byte *)(puVar21 + 2) & 1) != 0) {
          operator_delete((void *)puVar21[4]);
        }
        *(undefined1 *)(puVar21 + 5) = 0;
      }
      uVar30 = CONCAT17(uStack_a0,uStack_a7);
      uVar29 = CONCAT17(uStack_a8,uStack_af);
      uVar23 = CONCAT71(uStack_af,uStack_b0);
    }
    *(undefined8 *)((long)puVar21 + 0x41) = uVar30;
    *(undefined8 *)((long)puVar21 + 0x39) = uVar29;
    puVar21[7] = uVar23;
    puVar21[6] = local_b8;
    plVar16 = (long *)puVar21[0xb];
    param_2 = (long *)puVar21[0xc];
    if (plVar16 == param_2) goto LAB_00133bac;
    while (*(int *)(puVar21 + 10) == 1) {
      plVar18 = (long *)plVar16[4];
      if (plVar18 == (long *)0x0) {
        if (*(long *)(lVar4 + 0x28) != local_70) goto LAB_00133f84;
                    /* try { // try from 00133c64 to 00133c7f has its CatchHandler @ 00133f44 */
        FUN_00128850();
        break;
      }
                    /* try { // try from 00133b4c to 00133b53 has its CatchHandler @ 00133f40 */
      (**(code **)(*plVar18 + 0x30))(plVar18,puVar21);
      plVar16 = plVar16 + 6;
      if (plVar16 == param_2) {
        plVar18 = (long *)puVar21[0xb];
        plVar16 = (long *)puVar21[0xc];
        plVar24 = plVar16;
        if (plVar16 == plVar18) goto LAB_00133bac;
        goto LAB_00133b8c;
      }
    }
    if (*(long *)(lVar4 + 0x28) != local_70) goto LAB_00133f84;
    FUN_00134018();
LAB_00133c80:
    iVar15 = __cxa_guard_acquire(PTR_clazz_0013dee8);
    if (iVar15 != 0) {
                    /* try { // try from 00133c90 to 00133c93 has its CatchHandler @ 00133e80 */
      FUN_00134070();
      __cxa_guard_release(PTR_clazz_0013dee8);
    }
  } while( true );
LAB_00133b8c:
  do {
    plVar16 = (long *)plVar24[-2];
    plVar24 = plVar24 + -6;
    if (plVar24 == plVar16) {
      lVar20 = 4;
      plVar16 = plVar24;
LAB_00133b78:
      (**(code **)(*plVar16 + lVar20 * 8))();
    }
    else if (plVar16 != (long *)0x0) {
      lVar20 = 5;
      goto LAB_00133b78;
    }
    plVar16 = plVar18;
  } while (plVar24 != plVar18);
LAB_00133bac:
  plVar18 = (long *)puVar21[0xe];
  plVar24 = (long *)puVar21[0xf];
  puVar21[0xc] = plVar16;
joined_r0x00133bb8:
  if (plVar24 == plVar18) {
    puVar21[0xf] = plVar18;
    std::__ndk1::mutex::unlock();
    if ((local_c0 != '\0') && ((local_d8 & 1) != 0)) {
      operator_delete(local_c8);
    }
    if (*(long *)(lVar4 + 0x28) == local_70) {
      return;
    }
LAB_00133f84:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  plVar16 = (long *)plVar24[-2];
  plVar24 = plVar24 + -6;
  if (plVar24 != plVar16) goto code_r0x00133c44;
  lVar20 = 4;
  plVar16 = plVar24;
  goto LAB_00133c1c;
code_r0x00133c44:
  if (plVar16 != (long *)0x0) {
    lVar20 = 5;
LAB_00133c1c:
    (**(code **)(*plVar16 + lVar20 * 8))();
  }
  goto joined_r0x00133bb8;
}


// ===== 00133f88  FUN_00133f88 =====

void FUN_00133f88(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro23playagerangedeclaration34JHybridPlayAgeRangeDeclarationSpec23requestDeclaredAgeRangeEdNSt6__ndk18optionalIdEES5_ENK3$_0clEvEUlRKN8facebook3jni9alias_refINS8_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00133fd8  FUN_00133fd8 =====

pointer_____offset_0x10___ * FUN_00133fd8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0013d748;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00134018  FUN_00134018 =====

void FUN_00134018(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    plVar2 = (long *)__cxa_allocate_exception(8);
    *plVar2 = (long)(PTR_vtable_0013e048 + 0x10);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar2,PTR_typeinfo_0013e040,PTR__exception_0013dcc0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00134070  FUN_00134070 =====

void FUN_00134070(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_0013df48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_0013df48), iVar2 != 0))
  {
                    /* try { // try from 001340e4 to 001340f7 has its CatchHandler @ 00134108 */
    facebook::jni::findClassStatic(PTR_kBaseName_0013df50);
    __cxa_guard_release(PTR_cls_0013df48);
  }
  *(undefined8 *)PTR_clazz_0013dee0 = *(undefined8 *)PTR_cls_0013df40;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00134134  FUN_00134134 =====

long FUN_00134134(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x2f0))(plVar2,*param_1,"isEligible",PTR_kDescriptor_0013de48);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001341b0  FUN_001341b0 =====

long FUN_001341b0(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x2f0))
                    (plVar2,*(undefined8 *)PTR_clazz_0013dee0,"status",PTR_kDescriptor_0013df58);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00134230  FUN_00134230 =====

long FUN_00134230(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x2f0))(plVar2,*param_1,param_2,PTR_kDescriptor_0013de50);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001342b4  FUN_001342b4 =====

long FUN_001342b4(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x2f0))(plVar2,*param_1,param_2,PTR_kDescriptor_0013de60);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00134338  FUN_00134338 =====

undefined1  [16] FUN_00134338(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_40 [8];
  long local_38;
  
  puVar2 = PTR_method_0013dea8;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_method_0013deb0 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_method_0013deb0), iVar3 != 0)) {
                    /* try { // try from 001343d0 to 001343df has its CatchHandler @ 001343f4 */
    FUN_00134570(auStack_40);
    uVar4 = FUN_00134630(auStack_40);
    *(undefined8 *)puVar2 = uVar4;
    __cxa_guard_release(PTR_method_0013deb0);
  }
  uVar5 = *param_1;
  uVar4 = facebook::jni::Environment::current();
  auVar6._0_8_ = FUN_001346ac(uVar4,uVar5,*(undefined8 *)puVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    auVar6._8_8_ = 0;
    return auVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00134420  FUN_00134420 =====

void FUN_00134420(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0013444c to 0013445f has its CatchHandler @ 0013448c */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00134490  facebook::jni::base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

/* facebook::jni::base_owned_ref<facebook::jni::JString,
   facebook::jni::LocalReferenceAllocator>::~base_owned_ref() */

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator> *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)this;
  if (lVar4 != 0) {
                    /* try { // try from 001344bc to 001344cf has its CatchHandler @ 001344fc */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  *(undefined8 *)this = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00134500  FUN_00134500 =====

void FUN_00134500(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0013452c to 0013453f has its CatchHandler @ 0013456c */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00134570  FUN_00134570 =====

void FUN_00134570(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_0013dec0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_0013dec0), iVar2 != 0))
  {
                    /* try { // try from 001345e0 to 001345f3 has its CatchHandler @ 00134604 */
    facebook::jni::findClassStatic(PTR_kBaseName_0013dec8);
    __cxa_guard_release(PTR_cls_0013dec0);
  }
  *param_1 = *(undefined8 *)PTR_cls_0013deb8;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00134630  FUN_00134630 =====

long FUN_00134630(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"doubleValue",PTR_kDescriptor_0013ded0);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001346ac  FUN_001346ac =====

void FUN_001346ac(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  (**(code **)(*param_1 + 0x1d8))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00134748  FUN_00134748 =====

void FUN_00134748(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_0013df88 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_0013df88), iVar2 != 0))
  {
                    /* try { // try from 001347bc to 001347cf has its CatchHandler @ 001347e0 */
    facebook::jni::findClassStatic(PTR_kBaseName_0013df90);
    __cxa_guard_release(PTR_cls_0013df88);
  }
  *(undefined8 *)PTR_clazz_0013df60 = *(undefined8 *)PTR_cls_0013df80;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013480c  FUN_0013480c =====

long FUN_0013480c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x2f0))(plVar2,*param_1,"value",PTR_kDescriptor_0013dea0);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00134888  facebook::jni::detail::getHolder<facebook::jni::JObject> =====

/* facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   facebook::jni::detail::getHolder<facebook::jni::JObject>(facebook::jni::JObject const*) */

void __thiscall
facebook::jni::detail::getHolder<facebook::jni::JObject>(detail *this,JObject *param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *in_x8;
  undefined8 uVar5;
  undefined8 uVar6;
  base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> abStack_40 [8];
  long local_38;
  
  puVar2 = PTR_holderField_0013dd88;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_holderField_0013dd90 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_holderField_0013dd90), iVar3 != 0)) {
    JObject::getClass();
                    /* try { // try from 00134934 to 0013493b has its CatchHandler @ 0013495c */
    uVar5 = getDestructorField(abStack_40);
    *(undefined8 *)puVar2 = uVar5;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              (abStack_40);
    __cxa_guard_release(PTR_holderField_0013dd90);
  }
  uVar5 = *(undefined8 *)puVar2;
  uVar6 = *(undefined8 *)this;
                    /* try { // try from 001348cc to 001348e3 has its CatchHandler @ 00134990 */
  plVar4 = (long *)facebook::jni::Environment::current();
  uVar5 = (**(code **)(*plVar4 + 0x2f8))(plVar4,uVar6,uVar5);
  *in_x8 = uVar5;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00134994  facebook::jni::throwNPE =====

/* facebook::jni::throwNPE() */

void facebook::jni::throwNPE(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    facebook::jni::throwNewJavaException
              ("java/lang/NullPointerException","java.lang.NullPointerException");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001349d4  facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

/* facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>::~base_owned_ref() */

void __thiscall
facebook::jni::
base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
::~base_owned_ref(base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
                  *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)this;
  if (lVar4 != 0) {
                    /* try { // try from 00134a00 to 00134a13 has its CatchHandler @ 00134a40 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  *(undefined8 *)this = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00134a44  facebook::jni::detail::HybridClassBase::isHybridClassBase =====

/* facebook::jni::detail::HybridClassBase::isHybridClassBase(facebook::jni::alias_ref<_jclass*>) */

void facebook::jni::detail::HybridClassBase::isHybridClassBase(undefined8 *param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_0013dd58 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_cls_0013dd58), iVar3 != 0))
  {
                    /* try { // try from 00134adc to 00134aef has its CatchHandler @ 00134b00 */
    facebook::jni::findClassStatic(PTR_kBaseName_0013dd60);
    __cxa_guard_release(PTR_cls_0013dd58);
  }
  uVar6 = *param_1;
  uVar7 = *(undefined8 *)PTR_cls_0013dd50;
                    /* try { // try from 00134a88 to 00134a9f has its CatchHandler @ 00134b2c */
  plVar4 = (long *)facebook::jni::Environment::current();
  cVar2 = (**(code **)(*plVar4 + 0x58))(plVar4,uVar6,uVar7);
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2 != '\0');
}


// ===== 00134b30  FUN_00134b30 =====

void FUN_00134b30(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00134b7c  FUN_00134b7c =====

void FUN_00134b7c(long param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  pvVar3 = *(void **)(param_1 + 0x18);
  if (pvVar3 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else {
    FUN_00134c78(pvVar3);
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00134bf0  FUN_00134bf0 =====

void FUN_00134bf0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0013ded8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00134c40  FUN_00134c40 =====

void FUN_00134c40(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00134c78  FUN_00134c78 =====

void FUN_00134c78(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  runtime_error arStack_a8 [16];
  byte local_98 [16];
  void *local_88;
  byte local_80 [16];
  void *local_70;
  exception_ptr local_68 [16];
  void *local_58;
  basic_string local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x50) == 0) {
                    /* try { // try from 00134dbc to 00134e47 has its CatchHandler @ 00134e94 */
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc
              (local_80,"Timeouted: Promise<");
    FUN_0012739c(local_98,PTR_typeinfo_name_0013dc68,0);
    FUN_00126328(local_68,local_80,local_98);
    FUN_0012425c(local_50,local_68,"> was destroyed!");
    if (((byte)local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
    if ((local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    std::runtime_error::runtime_error(arStack_a8,local_50);
    FUN_00134e9c(local_68,arStack_a8);
    FUN_00132f64(param_1,local_68);
    std::exception_ptr::~exception_ptr(local_68);
    std::runtime_error::~runtime_error(arStack_a8);
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  std::__ndk1::mutex::~mutex((mutex *)(param_1 + 0x88));
  plVar4 = *(long **)(param_1 + 0x70);
  if (plVar4 != (long *)0x0) {
    plVar5 = *(long **)(param_1 + 0x78);
    plVar2 = plVar4;
    if (plVar5 != plVar4) {
      do {
        plVar2 = (long *)plVar5[-2];
        plVar5 = plVar5 + -6;
        if (plVar5 == plVar2) {
          lVar3 = 4;
          plVar2 = plVar5;
LAB_00134cd0:
          (**(code **)(*plVar2 + lVar3 * 8))();
        }
        else if (plVar2 != (long *)0x0) {
          lVar3 = 5;
          goto LAB_00134cd0;
        }
      } while (plVar5 != plVar4);
      plVar2 = *(long **)(param_1 + 0x70);
    }
    *(long **)(param_1 + 0x78) = plVar4;
    operator_delete(plVar2);
  }
  plVar4 = *(long **)(param_1 + 0x58);
  if (plVar4 != (long *)0x0) {
    plVar5 = *(long **)(param_1 + 0x60);
    plVar2 = plVar4;
    if (plVar5 != plVar4) {
      do {
        plVar2 = (long *)plVar5[-2];
        plVar5 = plVar5 + -6;
        if (plVar5 == plVar2) {
          lVar3 = 4;
          plVar2 = plVar5;
LAB_00134d30:
          (**(code **)(*plVar2 + lVar3 * 8))();
        }
        else if (plVar2 != (long *)0x0) {
          lVar3 = 5;
          goto LAB_00134d30;
        }
      } while (plVar5 != plVar4);
      plVar2 = *(long **)(param_1 + 0x58);
    }
    *(long **)(param_1 + 0x60) = plVar4;
    operator_delete(plVar2);
  }
  if (*(uint *)(param_1 + 0x50) != 0xffffffff) {
                    /* try { // try from 00134d84 to 00134d8f has its CatchHandler @ 00134e98 */
    (*(code *)(&PTR_FUN_0013d6c0)[*(uint *)(param_1 + 0x50)])(local_50,param_1);
  }
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00134e9c  FUN_00134e9c =====

void FUN_00134e9c(undefined8 param_1,runtime_error *param_2)

{
  long lVar1;
  runtime_error *this;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (runtime_error *)__cxa_allocate_exception(0x10);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::runtime_error::runtime_error(this,param_2);
                    /* try { // try from 00134ee8 to 00134eff has its CatchHandler @ 00134f00 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,PTR_typeinfo_0013dcd0,PTR__runtime_error_0013dc98);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00134f3c  FUN_00134f3c =====

long FUN_00134f3c(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x388))
                    (plVar2,*(undefined8 *)PTR_cls_0013dfa8,"valueOf",PTR_kDescriptor_0013dfc8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00134fbc  _JNIEnv::CallStaticObjectMethod =====

/* _JNIEnv::CallStaticObjectMethod(_jclass*, _jmethodID*, ...) */

void _JNIEnv::CallStaticObjectMethod(_jclass *param_1,_jmethodID *param_2,...)

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
  (**(code **)(*(long *)param_1 + 0x398))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00135058  FUN_00135058 =====

long FUN_00135058(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"getPlayAgeRangeDeclaration",PTR_kDescriptor_0013e018);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001350d4  FUN_001350d4 =====

void FUN_001350d4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  pvVar3 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar3 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else {
    FUN_001370b4(pvVar3);
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013514c  FUN_0013514c =====

void FUN_0013514c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_001222d0(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
     ) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001351d8  FUN_001351d8 =====

void FUN_001351d8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_001222d0(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
     ) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00135264  FUN_00135264 =====

void FUN_00135264(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0013d5e0;
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_001222d0(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001352fc  FUN_001352fc =====

void FUN_001352fc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0013d5e0;
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_001222d0(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00135388  FUN_00135388 =====

void FUN_00135388(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x18);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_0013d5e0;
  puVar4[1] = uVar1;
  puVar4[2] = lVar2;
  if (lVar2 != 0) {
    FUN_001229c0(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


// ===== 00135400  FUN_00135400 =====

void FUN_00135400(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0013d5e0;
  param_2[1] = uVar1;
  param_2[2] = lVar2;
  if (lVar2 != 0) {
    FUN_001229c0(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00135464  FUN_00135464 =====

void FUN_00135464(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x10);
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_001222d0(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001354f0  FUN_001354f0 =====

void FUN_001354f0(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)((long)param_1 + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_001222d0(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00135570  FUN_00135570 =====

void FUN_00135570(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  exception_ptr aeStack_98 [8];
  JniException aJStack_90 [48];
  undefined8 local_60;
  JniException aJStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60 = *param_2;
  facebook::jni::JniException::JniException(aJStack_58,&local_60);
  uVar2 = *(undefined8 *)(param_1 + 8);
                    /* try { // try from 001355a8 to 001355b3 has its CatchHandler @ 0013561c */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_00132eb0(aeStack_98,aJStack_90);
                    /* try { // try from 001355c0 to 001355cb has its CatchHandler @ 00135604 */
  FUN_001356d4(uVar2,aeStack_98);
  std::exception_ptr::~exception_ptr(aeStack_98);
  facebook::jni::JniException::~JniException(aJStack_90);
  facebook::jni::JniException::~JniException(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00135644  FUN_00135644 =====

void FUN_00135644(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro23playagerangedeclaration34JHybridPlayAgeRangeDeclarationSpec26getPlayAgeRangeDeclarationEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00135694  FUN_00135694 =====

pointer_____offset_0x10___ * FUN_00135694(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0013d650;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001356d4  FUN_001356d4 =====

void FUN_001356d4(exception_ptr *param_1,exception_ptr *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  runtime_error *this;
  long lVar6;
  long *plVar7;
  undefined1 auStack_90 [24];
  basic_string abStack_78 [24];
  undefined8 local_60 [3];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)param_2;
  local_60[0] = 0;
  std::exception_ptr::~exception_ptr((exception_ptr *)local_60);
  if (lVar6 == 0) {
    FUN_0012739c(local_60,PTR_typeinfo_name_0013dbf8,1);
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00135884 to 00135897 has its CatchHandler @ 00135960 */
    std::__ndk1::operator+("Cannot reject Promise<",(basic_string *)local_60);
                    /* try { // try from 00135898 to 001358ab has its CatchHandler @ 00135948 */
    FUN_0012425c(abStack_78,auStack_90,"> with a null exception_ptr!");
                    /* try { // try from 001358b0 to 001358e7 has its CatchHandler @ 00135914 */
    std::runtime_error::runtime_error(this,abStack_78);
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_0013dcd0,PTR__runtime_error_0013dc98);
    }
    goto LAB_00135994;
  }
  std::__ndk1::mutex::lock();
  uVar2 = *(uint *)(param_1 + 0x90);
  if (uVar2 == 0xffffffff) {
LAB_00135758:
    *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
    std::exception_ptr::exception_ptr(param_1,param_2);
    *(undefined4 *)(param_1 + 0x90) = 2;
  }
  else {
    if (uVar2 != 2) {
                    /* try { // try from 0013574c to 00135757 has its CatchHandler @ 001358fc */
      (*(code *)(&PTR_FUN_0013d4e8)[uVar2])(local_60,param_1);
      goto LAB_00135758;
    }
    std::exception_ptr::operator=(param_1,param_2);
  }
  lVar1 = *(long *)(param_1 + 0xb8);
  for (lVar6 = *(long *)(param_1 + 0xb0); lVar6 != lVar1; lVar6 = lVar6 + 0x30) {
    plVar4 = *(long **)(lVar6 + 0x20);
    if (plVar4 == (long *)0x0) {
      if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 001358f8 to 001358fb has its CatchHandler @ 00135904 */
        FUN_00128850();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0013574c with catch @ 001358fc
                        */
        FUN_00123554();
      }
      goto LAB_00135994;
    }
                    /* try { // try from 00135790 to 00135797 has its CatchHandler @ 00135900 */
    (**(code **)(*plVar4 + 0x30))(plVar4,param_2);
  }
  plVar4 = *(long **)(param_1 + 0x98);
  plVar7 = *(long **)(param_1 + 0xa0);
LAB_001357c0:
  if (plVar7 != plVar4) {
    plVar5 = (long *)plVar7[-2];
    plVar7 = plVar7 + -6;
    if (plVar7 != plVar5) goto code_r0x001357d8;
    lVar6 = 4;
    plVar5 = plVar7;
    goto LAB_001357b4;
  }
  plVar7 = *(long **)(param_1 + 0xb0);
  plVar5 = *(long **)(param_1 + 0xb8);
  *(long **)(param_1 + 0xa0) = plVar4;
joined_r0x001357f0:
  if (plVar5 != plVar7) {
    plVar4 = (long *)plVar5[-2];
    plVar5 = plVar5 + -6;
    if (plVar5 != plVar4) goto code_r0x00135858;
    lVar6 = 4;
    plVar4 = plVar5;
    goto LAB_00135830;
  }
  *(long **)(param_1 + 0xb8) = plVar7;
  std::__ndk1::mutex::unlock();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_00135994:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x001357d8:
  if (plVar5 != (long *)0x0) {
    lVar6 = 5;
LAB_001357b4:
    (**(code **)(*plVar5 + lVar6 * 8))();
  }
  goto LAB_001357c0;
code_r0x00135858:
  if (plVar4 != (long *)0x0) {
    lVar6 = 5;
LAB_00135830:
    (**(code **)(*plVar4 + lVar6 * 8))();
  }
  goto joined_r0x001357f0;
}


// ===== 00135998  FUN_00135998 =====

void FUN_00135998(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001359d0  FUN_001359d0 =====

void FUN_001359d0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(char *)(param_2 + 0x88) != '\0') && ((*(byte *)(param_2 + 0x70) & 1) != 0)) {
    operator_delete(*(void **)(param_2 + 0x80));
  }
  if ((*(char *)(param_2 + 0x48) != '\0') && ((*(byte *)(param_2 + 0x30) & 1) != 0)) {
    operator_delete(*(void **)(param_2 + 0x40));
  }
  if ((*(char *)(param_2 + 0x20) == '\0') || ((*(byte *)(param_2 + 8) & 1) == 0)) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(*(void **)(param_2 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00135a78  FUN_00135a78 =====

void FUN_00135a78(undefined8 param_1,exception_ptr *param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    std::exception_ptr::~exception_ptr(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00135ab4  FUN_00135ab4 =====

void FUN_00135ab4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0013d550;
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_001222d0(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00135b4c  FUN_00135b4c =====

void FUN_00135b4c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0013d550;
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_001222d0(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00135bd8  FUN_00135bd8 =====

void FUN_00135bd8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x18);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_0013d550;
  puVar4[1] = uVar1;
  puVar4[2] = lVar2;
  if (lVar2 != 0) {
    FUN_001229c0(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


// ===== 00135c50  FUN_00135c50 =====

void FUN_00135c50(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0013d550;
  param_2[1] = uVar1;
  param_2[2] = lVar2;
  if (lVar2 != 0) {
    FUN_001229c0(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00135cb4  FUN_00135cb4 =====

void FUN_00135cb4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x10);
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_001222d0(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00135d40  FUN_00135d40 =====

void FUN_00135d40(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)((long)param_1 + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_001222d0(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00135dc0  FUN_00135dc0 =====

void FUN_00135dc0(long param_1,long *param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  byte bVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  char cVar11;
  int iVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  byte bVar17;
  byte bVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  long *plVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  ulong local_220;
  char *pcStack_218;
  ulong local_210;
  ulong local_208;
  char *local_200;
  char *local_1f8;
  ulong local_1c8;
  undefined8 local_190;
  ulong local_188;
  char *local_180;
  undefined8 local_178;
  ulong local_170;
  char *local_168;
  undefined8 local_160;
  ulong local_158;
  char *local_150;
  undefined8 local_140;
  ulong uStack_138;
  char *local_130;
  char local_128;
  undefined8 local_120;
  undefined8 local_118;
  ulong uStack_110;
  char *local_108;
  char local_100;
  ulong local_f8;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined8 local_d8;
  ulong uStack_d0;
  char *local_c8;
  char local_c0;
  undefined4 local_b8;
  undefined3 uStack_b4;
  undefined4 local_b0;
  undefined3 uStack_ac;
  undefined4 local_a8;
  undefined3 uStack_a4;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  param_2 = (long *)*param_2;
  lVar19 = *(long *)(param_1 + 8);
  if ((*PTR_clazz_0013ddb8 & 1) == 0) goto LAB_001367fc;
  do {
    puVar6 = PTR_fieldIsEligible_0013ddc0;
    if (((*PTR_fieldIsEligible_0013ddc8 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_fieldIsEligible_0013ddc8), iVar12 != 0)) {
                    /* try { // try from 00136830 to 0013683b has its CatchHandler @ 00136a88 */
      uVar20 = FUN_00134134(PTR_clazz_0013ddb0);
      *(undefined8 *)puVar6 = uVar20;
      __cxa_guard_release(PTR_fieldIsEligible_0013ddc8);
    }
    uVar20 = *(undefined8 *)puVar6;
                    /* try { // try from 00135e24 to 00135e3b has its CatchHandler @ 00136c28 */
    plVar13 = (long *)facebook::jni::Environment::current();
    cVar11 = (**(code **)(*plVar13 + 0x300))(plVar13,param_2,uVar20);
    puVar6 = PTR_fieldInstallId_0013ddd0;
    if (((*PTR_fieldInstallId_0013ddd8 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_fieldInstallId_0013ddd8), iVar12 != 0)) {
                    /* try { // try from 00136860 to 00136873 has its CatchHandler @ 00136a74 */
      uVar20 = FUN_00134230(PTR_clazz_0013ddb0,"installId");
      *(undefined8 *)puVar6 = uVar20;
      __cxa_guard_release(PTR_fieldInstallId_0013ddd8);
    }
    uVar20 = *(undefined8 *)puVar6;
                    /* try { // try from 00135e5c to 00135e73 has its CatchHandler @ 00136c24 */
    plVar13 = (long *)facebook::jni::Environment::current();
    local_78 = (**(code **)(*plVar13 + 0x2f8))(plVar13,param_2,uVar20);
    puVar6 = PTR_fieldUserStatus_0013dde0;
    if (((*PTR_fieldUserStatus_0013dde8 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_fieldUserStatus_0013dde8), iVar12 != 0)) {
                    /* try { // try from 00136898 to 0013689b has its CatchHandler @ 00136a60 */
      uVar20 = FUN_00136db8();
      *(undefined8 *)puVar6 = uVar20;
      __cxa_guard_release(PTR_fieldUserStatus_0013dde8);
    }
    uVar20 = *(undefined8 *)puVar6;
                    /* try { // try from 00135e94 to 00135eab has its CatchHandler @ 00136c20 */
    plVar13 = (long *)facebook::jni::Environment::current();
    local_80 = (**(code **)(*plVar13 + 0x2f8))(plVar13,param_2,uVar20);
    puVar6 = PTR_fieldError_0013ddf0;
    if (((*PTR_fieldError_0013ddf8 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_fieldError_0013ddf8), iVar12 != 0)) {
                    /* try { // try from 001368c0 to 001368d3 has its CatchHandler @ 00136a4c */
      uVar20 = FUN_00134230(PTR_clazz_0013ddb0,"error");
      *(undefined8 *)puVar6 = uVar20;
      __cxa_guard_release(PTR_fieldError_0013ddf8);
    }
    uVar20 = *(undefined8 *)puVar6;
                    /* try { // try from 00135ecc to 00135ee3 has its CatchHandler @ 00136c1c */
    plVar13 = (long *)facebook::jni::Environment::current();
    local_88 = (**(code **)(*plVar13 + 0x2f8))(plVar13,param_2,uVar20);
    puVar6 = PTR_fieldAgeLower_0013de00;
    if (((*PTR_fieldAgeLower_0013de08 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_fieldAgeLower_0013de08), iVar12 != 0)) {
                    /* try { // try from 001368f8 to 0013690b has its CatchHandler @ 00136a38 */
      uVar20 = FUN_001342b4(PTR_clazz_0013ddb0,"ageLower");
      *(undefined8 *)puVar6 = uVar20;
      __cxa_guard_release(PTR_fieldAgeLower_0013de08);
    }
    uVar20 = *(undefined8 *)puVar6;
                    /* try { // try from 00135f04 to 00135f1b has its CatchHandler @ 00136c18 */
    plVar13 = (long *)facebook::jni::Environment::current();
    local_90 = (**(code **)(*plVar13 + 0x2f8))(plVar13,param_2,uVar20);
    puVar6 = PTR_fieldAgeUpper_0013de10;
    if (((*PTR_fieldAgeUpper_0013de18 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_fieldAgeUpper_0013de18), iVar12 != 0)) {
                    /* try { // try from 00136930 to 00136943 has its CatchHandler @ 00136a24 */
      uVar20 = FUN_001342b4(PTR_clazz_0013ddb0,"ageUpper");
      *(undefined8 *)puVar6 = uVar20;
      __cxa_guard_release(PTR_fieldAgeUpper_0013de18);
    }
    uVar20 = *(undefined8 *)puVar6;
                    /* try { // try from 00135f3c to 00135f53 has its CatchHandler @ 00136c14 */
    plVar13 = (long *)facebook::jni::Environment::current();
    local_98 = (**(code **)(*plVar13 + 0x2f8))(plVar13,param_2,uVar20);
    puVar6 = PTR_fieldMostRecentApprovalDate_0013de20;
    if (((*PTR_fieldMostRecentApprovalDate_0013de28 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_fieldMostRecentApprovalDate_0013de28), iVar12 != 0)) {
                    /* try { // try from 00136968 to 0013697b has its CatchHandler @ 00136a10 */
      uVar20 = FUN_00134230(PTR_clazz_0013ddb0,"mostRecentApprovalDate");
      *(undefined8 *)puVar6 = uVar20;
      __cxa_guard_release(PTR_fieldMostRecentApprovalDate_0013de28);
    }
    uVar20 = *(undefined8 *)puVar6;
                    /* try { // try from 00135f74 to 00135f8b has its CatchHandler @ 00136c10 */
    plVar13 = (long *)facebook::jni::Environment::current();
    local_a0 = (**(code **)(*plVar13 + 0x2f8))(plVar13,param_2,uVar20);
    lVar16 = local_78;
    if (local_78 == 0) {
      bVar17 = 0;
    }
    else {
                    /* try { // try from 00135fa0 to 00135fab has its CatchHandler @ 00136bb4 */
      facebook::jni::JString::toStdString();
      local_a8 = local_160._1_4_;
      uStack_a4 = (undefined3)(local_160 >> 0x28);
      bVar17 = (byte)local_160;
      local_1f8 = local_150;
      local_208 = local_158;
      local_158 = 0;
      local_150 = (char *)0x0;
      local_160 = 0;
    }
    if (local_80 == 0) {
      lVar25 = 0;
      uVar24 = 0;
      uVar23 = 0;
      uVar14 = 0;
    }
    else {
      if (((*PTR_clazz_0013de70 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_clazz_0013de70), iVar12 != 0)) {
                    /* try { // try from 001369a0 to 001369a3 has its CatchHandler @ 001369f8 */
        FUN_00136ea8();
        __cxa_guard_release(PTR_clazz_0013de70);
      }
      puVar6 = PTR_fieldOrdinal_0013de78;
      if (((*PTR_fieldOrdinal_0013de80 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_fieldOrdinal_0013de80), iVar12 != 0)) {
                    /* try { // try from 001369c8 to 001369d3 has its CatchHandler @ 001369ec */
        uVar20 = FUN_0013480c(PTR_clazz_0013de68);
        *(undefined8 *)puVar6 = uVar20;
        __cxa_guard_release(PTR_fieldOrdinal_0013de80);
      }
      lVar25 = local_80;
      uVar20 = *(undefined8 *)puVar6;
                    /* try { // try from 0013601c to 00136033 has its CatchHandler @ 00136c0c */
      plVar13 = (long *)facebook::jni::Environment::current();
      uVar14 = (**(code **)(*plVar13 + 800))(plVar13,lVar25,uVar20);
      uVar24 = uVar14 >> 8 & 0xffffff;
      uVar14 = uVar14 & 0xffffffff;
      uVar23 = 0x100000000;
    }
    lVar10 = local_88;
    if (local_88 == 0) {
      bVar18 = 0;
    }
    else {
                    /* try { // try from 00136060 to 0013606b has its CatchHandler @ 00136b84 */
      facebook::jni::JString::toStdString();
      local_b0 = local_178._1_4_;
      uStack_ac = (undefined3)(local_178 >> 0x28);
      bVar18 = (byte)local_178;
      local_200 = local_168;
      local_210 = local_170;
      local_170 = 0;
      local_168 = (char *)0x0;
      local_178 = 0;
    }
    lVar9 = local_90;
    bVar1 = local_90 == 0;
    if (bVar1) {
      local_1c8 = 0;
      uVar26 = 0;
    }
    else {
                    /* try { // try from 001360b0 to 001360b7 has its CatchHandler @ 00136b54 */
      uVar26 = FUN_00134338(&local_90);
      local_1c8 = uVar26 & 0xffffffffffffff00;
    }
    lVar8 = local_98;
    bVar1 = !bVar1;
    bVar2 = local_98 == 0;
    if (bVar2) {
      uVar21 = 0;
      uVar27 = 0;
    }
    else {
                    /* try { // try from 001360e0 to 001360eb has its CatchHandler @ 00136b50 */
      uVar27 = FUN_00134338(&local_98);
      uVar21 = uVar27 & 0xffffffffffffff00;
    }
    lVar7 = local_a0;
    bVar2 = !bVar2;
    if (local_a0 == 0) {
      bVar5 = 0;
    }
    else {
                    /* try { // try from 00136128 to 00136133 has its CatchHandler @ 00136b4c */
      facebook::jni::JString::toStdString();
      local_b8 = local_190._1_4_;
      uStack_b4 = (undefined3)(local_190 >> 0x28);
      local_220 = local_188;
      pcStack_218 = local_180;
      bVar5 = (byte)local_190;
      local_188 = 0;
      local_180 = (char *)0x0;
      local_190 = 0;
    }
    local_140 = local_140 & 0xffffffffffffff00;
    local_128 = '\0';
    if (lVar16 != 0) {
      if ((bVar17 & 1) == 0) {
        local_140._0_5_ = CONCAT41(local_a8,bVar17);
        local_140 = CONCAT44(CONCAT31(uStack_a4,local_a8._3_1_),(undefined4)local_140);
        uStack_138 = local_208;
        local_130 = local_1f8;
      }
      else {
                    /* try { // try from 001361b4 to 001361c3 has its CatchHandler @ 00136b00 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_140,local_1f8,local_208);
      }
      local_128 = '\x01';
    }
    local_118 = local_118 & 0xffffffffffffff00;
    local_100 = '\0';
    local_120 = uVar23 | uVar24 << 8 | uVar14 & 0xff;
    if (lVar10 != 0) {
      if ((bVar18 & 1) == 0) {
        local_118._0_5_ = CONCAT41(local_b0,bVar18);
        local_118 = CONCAT44(CONCAT31(uStack_ac,local_b0._3_1_),(undefined4)local_118);
        uStack_110 = local_210;
        local_108 = local_200;
      }
      else {
                    /* try { // try from 0013621c to 0013622b has its CatchHandler @ 00136ad8 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_118,local_200,local_210);
      }
      local_100 = '\x01';
    }
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_f8 = uVar26 & 0xff | local_1c8;
    local_c0 = '\0';
    uStack_ef = 0;
    uStack_e8 = (undefined1)uVar27;
    uStack_e7 = (undefined7)(uVar21 >> 8);
    uStack_df = 0;
    uStack_f0 = bVar1;
    uStack_e0 = bVar2;
    if (lVar7 != 0) {
      if ((bVar5 & 1) == 0) {
        local_d8._0_5_ = CONCAT41(local_b8,bVar5);
        local_d8 = CONCAT44(CONCAT31(uStack_b4,local_b8._3_1_),(undefined4)local_d8);
        uStack_d0 = local_220;
        local_c8 = pcStack_218;
      }
      else {
                    /* try { // try from 0013629c to 001362ab has its CatchHandler @ 00136ab0 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_d8,pcStack_218,local_220);
      }
      local_c0 = '\x01';
      if ((bVar5 & 1) != 0) {
        operator_delete(pcStack_218);
      }
      if ((local_190 & 1) != 0) {
        operator_delete(local_180);
      }
    }
    if (lVar10 != 0) {
      if ((bVar18 & 1) != 0) {
        operator_delete(local_200);
      }
      if ((local_178 & 1) != 0) {
        operator_delete(local_168);
      }
    }
    if (lVar16 != 0) {
      if ((bVar17 & 1) != 0) {
        operator_delete(local_1f8);
      }
      if ((local_160 & 1) != 0) {
        operator_delete(local_150);
      }
    }
    lVar16 = local_a0;
    if (local_a0 != 0) {
                    /* try { // try from 00136328 to 0013633b has its CatchHandler @ 00136c08 */
      plVar13 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar13 + 0xb8))(plVar13,lVar16);
    }
    if (lVar8 != 0) {
                    /* try { // try from 00136344 to 00136357 has its CatchHandler @ 00136c04 */
      plVar13 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar13 + 0xb8))(plVar13,lVar8);
    }
    if (lVar9 != 0) {
                    /* try { // try from 0013635c to 0013636f has its CatchHandler @ 00136c00 */
      plVar13 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar13 + 0xb8))(plVar13,lVar9);
    }
    lVar16 = local_88;
    if (local_88 != 0) {
                    /* try { // try from 00136378 to 0013638b has its CatchHandler @ 00136bfc */
      plVar13 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar13 + 0xb8))(plVar13,lVar16);
    }
    if (lVar25 != 0) {
                    /* try { // try from 00136390 to 001363a3 has its CatchHandler @ 00136bf8 */
      plVar13 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar13 + 0xb8))(plVar13,lVar25);
    }
    lVar16 = local_78;
    if (local_78 != 0) {
                    /* try { // try from 001363ac to 001363bf has its CatchHandler @ 00136bf4 */
      plVar13 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar13 + 0xb8))(plVar13,lVar16);
    }
                    /* try { // try from 001363c0 to 001363c7 has its CatchHandler @ 00136bec */
    std::__ndk1::mutex::lock();
    uVar3 = *(uint *)(lVar19 + 0x90);
    if (uVar3 == 0xffffffff) {
LAB_0013643c:
      *(undefined1 *)(lVar19 + 0x20) = 0;
      *(undefined1 *)(lVar19 + 8) = 0;
      *(bool *)lVar19 = cVar11 != '\0';
      *(undefined4 *)(lVar19 + 0x90) = 0xffffffff;
      if (local_128 != '\0') {
        *(char **)(lVar19 + 0x18) = local_130;
        *(ulong *)(lVar19 + 0x10) = uStack_138;
        *(ulong *)(lVar19 + 8) = local_140;
        uStack_138 = 0;
        local_130 = (char *)0x0;
        local_140 = 0;
        *(undefined1 *)(lVar19 + 0x20) = 1;
      }
      *(undefined1 *)(lVar19 + 0x30) = 0;
      *(ulong *)(lVar19 + 0x28) = local_120;
      *(undefined1 *)(lVar19 + 0x48) = 0;
      if (local_100 != '\0') {
        *(char **)(lVar19 + 0x40) = local_108;
        *(ulong *)(lVar19 + 0x38) = uStack_110;
        *(ulong *)(lVar19 + 0x30) = local_118;
        uStack_110 = 0;
        local_108 = (char *)0x0;
        local_118 = 0;
        *(undefined1 *)(lVar19 + 0x48) = 1;
      }
      *(undefined1 *)(lVar19 + 0x70) = 0;
      *(ulong *)(lVar19 + 0x61) = CONCAT17(uStack_e0,uStack_e7);
      *(ulong *)(lVar19 + 0x59) = CONCAT17(uStack_e8,uStack_ef);
      *(ulong *)(lVar19 + 0x58) = CONCAT71(uStack_ef,uStack_f0);
      *(ulong *)(lVar19 + 0x50) = local_f8;
      *(undefined1 *)(lVar19 + 0x88) = 0;
      if (local_c0 != '\0') {
        *(char **)(lVar19 + 0x80) = local_c8;
        *(ulong *)(lVar19 + 0x78) = uStack_d0;
        *(ulong *)(lVar19 + 0x70) = local_d8;
        uStack_d0 = 0;
        local_c8 = (char *)0x0;
        local_d8 = 0;
        *(undefined1 *)(lVar19 + 0x88) = 1;
      }
      *(undefined4 *)(lVar19 + 0x90) = 1;
    }
    else {
      if (uVar3 != 1) {
                    /* try { // try from 00136430 to 0013643b has its CatchHandler @ 00136b48 */
        (*(code *)(&PTR_FUN_0013d4e8)[uVar3])(&local_78,lVar19);
        goto LAB_0013643c;
      }
      *(bool *)lVar19 = cVar11 != '\0';
      cVar11 = *(char *)(lVar19 + 0x20);
      if (cVar11 == local_128) {
        if (cVar11 != '\0') {
          if ((*(byte *)(lVar19 + 8) & 1) != 0) {
            operator_delete(*(void **)(lVar19 + 0x18));
          }
          *(char **)(lVar19 + 0x18) = local_130;
          *(ulong *)(lVar19 + 0x10) = uStack_138;
          *(ulong *)(lVar19 + 8) = local_140;
          local_140 = local_140 & 0xffffffffffff0000;
        }
      }
      else if (cVar11 == '\0') {
        *(char **)(lVar19 + 0x18) = local_130;
        *(ulong *)(lVar19 + 0x10) = uStack_138;
        *(ulong *)(lVar19 + 8) = local_140;
        uStack_138 = 0;
        local_130 = (char *)0x0;
        local_140 = 0;
        *(undefined1 *)(lVar19 + 0x20) = 1;
      }
      else {
        if ((*(byte *)(lVar19 + 8) & 1) != 0) {
          operator_delete(*(void **)(lVar19 + 0x18));
        }
        *(undefined1 *)(lVar19 + 0x20) = 0;
      }
      *(undefined4 *)(lVar19 + 0x28) = (undefined4)local_120;
      cVar11 = *(char *)(lVar19 + 0x48);
      *(undefined1 *)(lVar19 + 0x2c) = local_120._4_1_;
      if (cVar11 == local_100) {
        if (cVar11 != '\0') {
          if ((*(byte *)(lVar19 + 0x30) & 1) != 0) {
            operator_delete(*(void **)(lVar19 + 0x40));
          }
          *(char **)(lVar19 + 0x40) = local_108;
          *(ulong *)(lVar19 + 0x38) = uStack_110;
          *(ulong *)(lVar19 + 0x30) = local_118;
          local_118 = local_118 & 0xffffffffffff0000;
        }
      }
      else if (cVar11 == '\0') {
        *(char **)(lVar19 + 0x40) = local_108;
        *(ulong *)(lVar19 + 0x38) = uStack_110;
        *(ulong *)(lVar19 + 0x30) = local_118;
        uStack_110 = 0;
        local_108 = (char *)0x0;
        local_118 = 0;
        *(undefined1 *)(lVar19 + 0x48) = 1;
      }
      else {
        if ((*(byte *)(lVar19 + 0x30) & 1) != 0) {
          operator_delete(*(void **)(lVar19 + 0x40));
        }
        *(undefined1 *)(lVar19 + 0x48) = 0;
      }
      cVar11 = *(char *)(lVar19 + 0x88);
      *(ulong *)(lVar19 + 0x61) = CONCAT17(uStack_e0,uStack_e7);
      *(ulong *)(lVar19 + 0x59) = CONCAT17(uStack_e8,uStack_ef);
      *(ulong *)(lVar19 + 0x58) = CONCAT71(uStack_ef,uStack_f0);
      *(ulong *)(lVar19 + 0x50) = local_f8;
      if (cVar11 == local_c0) {
        if (cVar11 != '\0') {
          if ((*(byte *)(lVar19 + 0x70) & 1) != 0) {
            operator_delete(*(void **)(lVar19 + 0x80));
          }
          *(char **)(lVar19 + 0x80) = local_c8;
          *(ulong *)(lVar19 + 0x78) = uStack_d0;
          *(ulong *)(lVar19 + 0x70) = local_d8;
          local_d8 = local_d8 & 0xffffffffffff0000;
        }
      }
      else if (cVar11 == '\0') {
        *(char **)(lVar19 + 0x80) = local_c8;
        *(ulong *)(lVar19 + 0x78) = uStack_d0;
        *(ulong *)(lVar19 + 0x70) = local_d8;
        uStack_d0 = 0;
        local_c8 = (char *)0x0;
        local_d8 = 0;
        *(undefined1 *)(lVar19 + 0x88) = 1;
      }
      else {
        if ((*(byte *)(lVar19 + 0x70) & 1) != 0) {
          operator_delete(*(void **)(lVar19 + 0x80));
        }
        *(undefined1 *)(lVar19 + 0x88) = 0;
      }
    }
    plVar13 = *(long **)(lVar19 + 0x98);
    param_2 = *(long **)(lVar19 + 0xa0);
    if (plVar13 == param_2) goto LAB_00136598;
    while (*(int *)(lVar19 + 0x90) == 1) {
      plVar15 = (long *)plVar13[4];
      if (plVar15 == (long *)0x0) {
        if (*(long *)(lVar4 + 0x28) != local_70) goto LAB_00136c60;
                    /* try { // try from 001367e0 to 001367fb has its CatchHandler @ 00136c30 */
        FUN_00128850();
        break;
      }
                    /* try { // try from 00136538 to 0013653f has its CatchHandler @ 00136c2c */
      (**(code **)(*plVar15 + 0x30))(plVar15,lVar19);
      plVar13 = plVar13 + 6;
      if (plVar13 == param_2) {
        plVar15 = *(long **)(lVar19 + 0x98);
        plVar13 = *(long **)(lVar19 + 0xa0);
        plVar22 = plVar13;
        if (plVar13 == plVar15) goto LAB_00136598;
        goto LAB_00136578;
      }
    }
    if (*(long *)(lVar4 + 0x28) != local_70) goto LAB_00136c60;
    FUN_00134018();
LAB_001367fc:
    iVar12 = __cxa_guard_acquire(PTR_clazz_0013ddb8);
    if (iVar12 != 0) {
                    /* try { // try from 0013680c to 0013680f has its CatchHandler @ 00136a9c */
      FUN_00136cf4();
      __cxa_guard_release(PTR_clazz_0013ddb8);
    }
  } while( true );
LAB_00136578:
  do {
    plVar13 = (long *)plVar22[-2];
    plVar22 = plVar22 + -6;
    if (plVar22 == plVar13) {
      lVar16 = 4;
      plVar13 = plVar22;
LAB_00136564:
      (**(code **)(*plVar13 + lVar16 * 8))();
    }
    else if (plVar13 != (long *)0x0) {
      lVar16 = 5;
      goto LAB_00136564;
    }
    plVar13 = plVar15;
  } while (plVar22 != plVar15);
LAB_00136598:
  plVar15 = *(long **)(lVar19 + 0xb0);
  plVar22 = *(long **)(lVar19 + 0xb8);
  *(long **)(lVar19 + 0xa0) = plVar13;
joined_r0x001365a4:
  if (plVar22 == plVar15) {
    *(long **)(lVar19 + 0xb8) = plVar15;
    std::__ndk1::mutex::unlock();
    if ((local_c0 != '\0') && ((local_d8 & 1) != 0)) {
      operator_delete(local_c8);
    }
    if ((local_100 != '\0') && ((local_118 & 1) != 0)) {
      operator_delete(local_108);
    }
    if ((local_128 != '\0') && ((local_140 & 1) != 0)) {
      operator_delete(local_130);
    }
    if (*(long *)(lVar4 + 0x28) == local_70) {
      return;
    }
LAB_00136c60:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  plVar13 = (long *)plVar22[-2];
  plVar22 = plVar22 + -6;
  if (plVar22 != plVar13) goto code_r0x00136660;
  lVar16 = 4;
  plVar13 = plVar22;
  goto LAB_00136638;
code_r0x00136660:
  if (plVar13 != (long *)0x0) {
    lVar16 = 5;
LAB_00136638:
    (**(code **)(*plVar13 + lVar16 * 8))();
  }
  goto joined_r0x001365a4;
}


// ===== 00136c64  FUN_00136c64 =====

void FUN_00136c64(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro23playagerangedeclaration34JHybridPlayAgeRangeDeclarationSpec26getPlayAgeRangeDeclarationEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00136cb4  FUN_00136cb4 =====

pointer_____offset_0x10___ * FUN_00136cb4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0013d5c0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00136cf4  FUN_00136cf4 =====

void FUN_00136cf4(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_0013de38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_0013de38), iVar2 != 0))
  {
                    /* try { // try from 00136d68 to 00136d7b has its CatchHandler @ 00136d8c */
    facebook::jni::findClassStatic(PTR_kBaseName_0013de40);
    __cxa_guard_release(PTR_cls_0013de38);
  }
  *(undefined8 *)PTR_clazz_0013ddb0 = *(undefined8 *)PTR_cls_0013de30;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00136db8  FUN_00136db8 =====

long FUN_00136db8(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x2f0))
                    (plVar2,*(undefined8 *)PTR_clazz_0013ddb0,"userStatus",PTR_kDescriptor_0013de58)
  ;
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00136e38  FUN_00136e38 =====

void FUN_00136e38(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00136e64 to 00136e77 has its CatchHandler @ 00136ea4 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00136ea8  FUN_00136ea8 =====

void FUN_00136ea8(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_0013de90 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_0013de90), iVar2 != 0))
  {
                    /* try { // try from 00136f1c to 00136f2f has its CatchHandler @ 00136f40 */
    facebook::jni::findClassStatic(PTR_kBaseName_0013de98);
    __cxa_guard_release(PTR_cls_0013de90);
  }
  *(undefined8 *)PTR_clazz_0013de68 = *(undefined8 *)PTR_cls_0013de88;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00136f6c  FUN_00136f6c =====

void FUN_00136f6c(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00136fb8  FUN_00136fb8 =====

void FUN_00136fb8(long param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  pvVar3 = *(void **)(param_1 + 0x18);
  if (pvVar3 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else {
    FUN_001370b4(pvVar3);
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013702c  FUN_0013702c =====

void FUN_0013702c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0013dd38) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0013707c  FUN_0013707c =====

void FUN_0013707c(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001370b4  FUN_001370b4 =====

void FUN_001370b4(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  runtime_error arStack_a8 [16];
  byte local_98 [16];
  void *local_88;
  byte local_80 [16];
  void *local_70;
  exception_ptr local_68 [16];
  void *local_58;
  basic_string local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x90) == 0) {
                    /* try { // try from 001371f8 to 00137283 has its CatchHandler @ 001372d0 */
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc
              (local_80,"Timeouted: Promise<");
    FUN_0012739c(local_98,PTR_typeinfo_name_0013dbf8,0);
    FUN_00126328(local_68,local_80,local_98);
    FUN_0012425c(local_50,local_68,"> was destroyed!");
    if (((byte)local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
    if ((local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    std::runtime_error::runtime_error(arStack_a8,local_50);
    FUN_00134e9c(local_68,arStack_a8);
    FUN_001356d4(param_1,local_68);
    std::exception_ptr::~exception_ptr(local_68);
    std::runtime_error::~runtime_error(arStack_a8);
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  std::__ndk1::mutex::~mutex((mutex *)(param_1 + 200));
  plVar4 = *(long **)(param_1 + 0xb0);
  if (plVar4 != (long *)0x0) {
    plVar5 = *(long **)(param_1 + 0xb8);
    plVar2 = plVar4;
    if (plVar5 != plVar4) {
      do {
        plVar2 = (long *)plVar5[-2];
        plVar5 = plVar5 + -6;
        if (plVar5 == plVar2) {
          lVar3 = 4;
          plVar2 = plVar5;
LAB_0013710c:
          (**(code **)(*plVar2 + lVar3 * 8))();
        }
        else if (plVar2 != (long *)0x0) {
          lVar3 = 5;
          goto LAB_0013710c;
        }
      } while (plVar5 != plVar4);
      plVar2 = *(long **)(param_1 + 0xb0);
    }
    *(long **)(param_1 + 0xb8) = plVar4;
    operator_delete(plVar2);
  }
  plVar4 = *(long **)(param_1 + 0x98);
  if (plVar4 != (long *)0x0) {
    plVar5 = *(long **)(param_1 + 0xa0);
    plVar2 = plVar4;
    if (plVar5 != plVar4) {
      do {
        plVar2 = (long *)plVar5[-2];
        plVar5 = plVar5 + -6;
        if (plVar5 == plVar2) {
          lVar3 = 4;
          plVar2 = plVar5;
LAB_0013716c:
          (**(code **)(*plVar2 + lVar3 * 8))();
        }
        else if (plVar2 != (long *)0x0) {
          lVar3 = 5;
          goto LAB_0013716c;
        }
      } while (plVar5 != plVar4);
      plVar2 = *(long **)(param_1 + 0x98);
    }
    *(long **)(param_1 + 0xa0) = plVar4;
    operator_delete(plVar2);
  }
  if (*(uint *)(param_1 + 0x90) != 0xffffffff) {
                    /* try { // try from 001371c0 to 001371cb has its CatchHandler @ 001372d4 */
    (*(code *)(&PTR_FUN_0013d4e8)[*(uint *)(param_1 + 0x90)])(local_50,param_1);
  }
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001372d8  FUN_001372d8 =====

void FUN_001372d8(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_0013d878;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013731c  FUN_0013731c =====

void FUN_0013731c(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_0013d878;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00137374  FUN_00137374 =====

void FUN_00137374(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001373ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x18))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001373b4  FUN_001373b4 =====

void FUN_001373b4(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


