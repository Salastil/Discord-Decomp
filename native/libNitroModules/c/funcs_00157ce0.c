// ===== 00157ce0  _FINI_1 =====

void _FINI_1(void)

{
  __cxa_finalize(&PTR_LOOP_001b6ad0);
  return;
}


// ===== 00157cf0  FUN_00157cf0 =====

void FUN_00157cf0(void)

{
  return;
}


// ===== 00157cf8  _FINI_0 =====

void _FINI_0(void)

{
  FUN_00157cf0();
  return;
}


// ===== 00157d00  FUN_00157d00 =====

void FUN_00157d00(code *UNRECOVERED_JUMPTABLE)

{
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00157d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


// ===== 00157d14  FUN_00157d14 =====

void FUN_00157d14(undefined8 param_1)

{
  __cxa_atexit(FUN_00157d00,param_1,&PTR_LOOP_001b6ad0);
  return;
}


// ===== 00157d30  FUN_00157d30 =====

void FUN_00157d30(void)

{
  __register_atfork();
  return;
}


// ===== 00157d40  FUN_00157d40 =====

undefined8 FUN_00157d40(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_80 [24];
  code *local_68;
  long local_38;
  
  FUN_00158088(param_2,param_1);
  iVar2 = FUN_001581ac(param_2);
  while( true ) {
    if (iVar2 == 0) {
      return 5;
    }
    if (iVar2 < 0) break;
    FUN_00158130(param_2,0xfffffffe,&local_38);
    iVar2 = FUN_001581c0(param_2,auStack_80);
    if (iVar2 != 0) {
      return 2;
    }
    if (local_68 != (code *)0x0) {
      uVar3 = 6;
      if (local_38 != param_3[3]) {
        uVar3 = 2;
      }
      iVar2 = (*local_68)(1,uVar3,*param_3,param_3,param_2);
      puVar1 = PTR___sF_001baa60;
      if (iVar2 != 8) {
        if (iVar2 != 7) {
          return 2;
        }
        FUN_00158200(param_2);
        return 2;
      }
      if (local_38 == param_3[3]) {
        fprintf((FILE *)(PTR___sF_001baa60 + 0x130),"libunwind: %s - %s\n","unwind_phase2",
                "during phase1 personality function said it would stop here, but now in phase2 it did not stop here"
               );
        fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    iVar2 = FUN_001581ac(param_2);
  }
  return 2;
}


// ===== 00157e74  FUN_00157e74 =====

void FUN_00157e74(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_4a0 [624];
  undefined1 auStack_230 [528];
  
  FUN_00157fec(auStack_230);
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_00157d40(auStack_230,auStack_4a0,param_1);
  }
  else {
    FUN_00157ef8(auStack_230,auStack_4a0,param_1,*(long *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = PTR___sF_001baa60;
  fprintf((FILE *)(PTR___sF_001baa60 + 0x130),"libunwind: %s - %s\n","_Unwind_Resume",
          "_Unwind_Resume() can\'t return");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00157ef8  FUN_00157ef8 =====

void FUN_00157ef8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,code *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_78 [24];
  code *local_60;
  
  FUN_00158088(param_2,param_1);
  iVar1 = FUN_001581ac(param_2);
  while( true ) {
    if (iVar1 < 1) {
      (*param_4)(1,0x1a,*param_3,param_3,param_2,param_5);
      return;
    }
    iVar1 = FUN_001581c0(param_2,auStack_78);
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
      FUN_00158200(param_2);
    }
    iVar1 = FUN_001581ac(param_2);
  }
  return;
}


// ===== 00157fec  FUN_00157fec =====

undefined8
FUN_00157fec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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


// ===== 00158088  FUN_00158088 =====

undefined8 FUN_00158088(undefined8 *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = &PTR_FUN_001b6ae8;
  param_1[1] = &DAT_001bf360;
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
  FUN_00158a50(param_1,0);
  return 0;
}


// ===== 00158130  FUN_00158130 =====

undefined8 FUN_00158130(long *param_1,undefined4 param_2,undefined8 *param_3)

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


// ===== 001581ac  FUN_001581ac =====

void FUN_001581ac(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001581bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,1);
  return;
}


// ===== 001581c0  FUN_001581c0 =====

undefined4 FUN_001581c0(long *param_1,long param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x48))();
  uVar1 = 0xffffe66b;
  if (*(long *)(param_2 + 8) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 00158200  FUN_00158200 =====

undefined8 FUN_00158200(long *param_1)

{
  (**(code **)(*param_1 + 0x50))();
  return 0xffffe674;
}


// ===== 00158228  FUN_00158228 =====

char * FUN_00158228(undefined8 param_1,uint *param_2,undefined8 *param_3,long *param_4,ulong param_5
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
      pcVar7 = (char *)FUN_001583b8(param_1,lVar8,param_4);
      if (pcVar7 != (char *)0x0) {
        return pcVar7;
      }
    }
    else if (*param_4 != lVar8) {
      return "CIE start does not match";
    }
    lVar8 = (long)puVar10 + uVar9;
    local_48 = puVar10 + 1;
    lVar3 = FUN_0015a210(param_1,&local_48,lVar8,(char)param_4[3],0);
    lVar4 = FUN_0015a210(param_1,&local_48,lVar8,*(byte *)(param_4 + 3) & 0xf,0);
    cVar1 = *(char *)((long)param_4 + 0x31);
    param_3[5] = 0;
    puVar10 = local_48;
    if (cVar1 != '\0') {
      lVar5 = FUN_0015a59c(&local_48,lVar8);
      puVar2 = local_48;
      puVar10 = (uint *)((long)local_48 + lVar5);
      if ((*(byte *)((long)param_4 + 0x19) != 0xff) &&
         (lVar5 = FUN_0015a210(param_1,&local_48,lVar8,*(byte *)((long)param_4 + 0x19) & 0xf,0),
         lVar5 != 0)) {
        local_48 = puVar2;
        uVar6 = FUN_0015a210(param_1,&local_48,lVar8,*(undefined1 *)((long)param_4 + 0x19),0);
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


// ===== 001583b8  FUN_001583b8 =====

char * FUN_001583b8(undefined8 param_1,uint *param_2,long *param_3)

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
      uVar7 = FUN_0015a59c(&local_48,pbVar1);
      uVar13 = 0;
      uVar14 = 0;
      *(undefined4 *)(param_3 + 5) = uVar7;
      puVar5 = PTR___sF_001baa60;
      pbVar11 = local_48;
      pbVar15 = local_48;
      do {
        pbVar12 = pbVar11;
        if (pbVar15 == pbVar1) {
          fprintf((FILE *)(PTR___sF_001baa60 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
        uVar6 = FUN_0015a59c(&local_48,pbVar1);
        *(undefined1 *)((long)param_3 + 0x32) = uVar6;
        bVar2 = *pbVar18;
      }
      if (bVar2 == 0x7a) {
        FUN_0015a59c(&local_48,pbVar1);
LAB_00158538:
        bVar2 = *pbVar18;
        if (bVar2 < 0x50) {
          if (bVar2 < 0x47) {
            if (bVar2 != 0x42) {
              if (bVar2 != 0) goto LAB_001585d8;
              goto LAB_0015861c;
            }
            *(undefined1 *)((long)param_3 + 0x33) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_00158538;
          }
          if (bVar2 == 0x47) {
            *(undefined1 *)((long)param_3 + 0x34) = 1;
            goto LAB_001585d8;
          }
          if (bVar2 == 0x4c) {
            pbVar18 = pbVar18 + 1;
            *(byte *)((long)param_3 + 0x19) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_00158538;
          }
        }
        else if (bVar2 < 0x53) {
          if (bVar2 == 0x50) {
            bVar2 = *local_48;
            *(byte *)((long)param_3 + 0x1a) = bVar2;
            *(char *)((long)param_3 + 0x1b) = (char)(local_48 + 1) - (char)param_2;
            local_48 = local_48 + 1;
            lVar8 = FUN_0015a210(param_1,&local_48,pbVar1,bVar2,0);
            param_3[4] = lVar8;
            pbVar18 = pbVar18 + 1;
            goto LAB_00158538;
          }
          if (bVar2 == 0x52) {
            pbVar18 = pbVar18 + 1;
            *(byte *)(param_3 + 3) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_00158538;
          }
        }
        else {
          if (bVar2 == 0x53) {
            *(undefined1 *)(param_3 + 6) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_00158538;
          }
          if (bVar2 == 0x7a) {
            *(undefined1 *)((long)param_3 + 0x31) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_00158538;
          }
        }
LAB_001585d8:
        pbVar18 = pbVar18 + 1;
        goto LAB_00158538;
      }
LAB_0015861c:
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


// ===== 00158680  FUN_00158680 =====

void FUN_00158680(void)

{
  return;
}


// ===== 00158688  FUN_00158688 =====

void FUN_00158688(void)

{
  return;
}


// ===== 00158690  FUN_00158690 =====

bool FUN_00158690(undefined8 param_1,uint param_2)

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


// ===== 001586d4  FUN_001586d4 =====

undefined8 FUN_001586d4(long param_1,uint param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_001baa60;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_0015873c:
      return *(undefined8 *)(param_1 + 0x108);
    }
    if (param_2 == 0xffffffff) goto LAB_00158730;
    if (param_2 == 0x1d) {
      return *(undefined8 *)(param_1 + 0xf8);
    }
  }
  else if ((int)param_2 < 0x20) {
    if (param_2 == 0x1e) {
      return *(undefined8 *)(param_1 + 0x100);
    }
    if (param_2 == 0x1f) goto LAB_0015873c;
  }
  else {
    if (param_2 == 0x22) {
      return *(undefined8 *)(param_1 + 0x118);
    }
    if (param_2 == 0x20) {
LAB_00158730:
      return *(undefined8 *)(param_1 + 0x110);
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_001baa60 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8);
}


// ===== 001587bc  FUN_001587bc =====

void FUN_001587bc(long param_1,uint param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_001baa60;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_00158824:
      *(undefined8 *)(param_1 + 0x108) = param_3;
      return;
    }
    if (param_2 == 0xffffffff) goto LAB_00158818;
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
    if (param_2 == 0x1f) goto LAB_00158824;
  }
  else {
    if (param_2 == 0x22) {
      *(undefined8 *)(param_1 + 0x118) = param_3;
      return;
    }
    if (param_2 == 0x20) {
LAB_00158818:
      *(undefined8 *)(param_1 + 0x110) = param_3;
      return;
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_001baa60 + 0x130),"libunwind: %s - %s\n","setRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8) = param_3;
  return;
}


// ===== 001588a4  FUN_001588a4 =====

bool FUN_001588a4(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffffffe0) == 0x40;
}


// ===== 001588b8  FUN_001588b8 =====

undefined1  [16] FUN_001588b8(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + (long)param_2 * 8 + -0xe0);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 001588c8  FUN_001588c8 =====

void FUN_001588c8(undefined8 param_1,long param_2,int param_3)

{
  *(undefined8 *)(param_2 + (long)param_3 * 8 + -0xe0) = param_1;
  return;
}


// ===== 001588d8  FUN_001588d8 =====

ulong FUN_001588d8(long *param_1,uint param_2)

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
    uVar3 = FUN_00158dfc(lVar1,uVar4,param_1[0x4b],param_1 + 2,(long)param_1 + 0x269,param_2 & 1);
    iVar2 = (int)uVar3;
  }
  else {
    memset(auStack_240,0,0x210);
    uVar3 = FUN_00158cdc(param_1,auStack_240);
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


// ===== 001589c8  FUN_001589c8 =====

void FUN_001589c8(long param_1,undefined8 *param_2)

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


// ===== 00158a0c  FUN_00158a0c =====

void FUN_00158a0c(long param_1)

{
  FUN_0015baa4(param_1 + 0x10);
  return;
}


// ===== 00158a18  FUN_00158a18 =====

undefined1 FUN_00158a18(long param_1)

{
  return *(undefined1 *)(param_1 + 0x269);
}


// ===== 00158a24  FUN_00158a24 =====

undefined8 FUN_00158a24(long *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  return 0;
}


// ===== 00158a50  FUN_00158a50 =====

void FUN_00158a50(long *param_1,ulong param_2)

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
  iVar1 = dl_iterate_phdr(FUN_0015b3f4,&local_648);
  if (((iVar1 == 0) || (local_668 == 0)) ||
     (uVar4 = FUN_0015b120(param_1,uVar7,auStack_678,0), (uVar4 & 1) == 0)) {
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_001bf364);
    for (puVar6 = PTR_DAT_001bf338; puVar6 < PTR_DAT_001bf340; puVar6 = puVar6 + 0x20) {
      if ((*(ulong *)(puVar6 + 8) <= uVar7) && (uVar7 < *(ulong *)(puVar6 + 0x10))) {
        lVar3 = *(long *)(puVar6 + 0x18);
        pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001bf364);
        if ((lVar3 != 0) &&
           (lVar3 = FUN_00158228(param_1[1],lVar3,&local_6a8,local_6e0,0), lVar3 == 0)) {
          memset(&local_648,0,0x618);
          uVar7 = FUN_00159284(param_1[1],&local_6a8,local_6e0,uVar7,4,&local_648);
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
        goto LAB_00158bd8;
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001bf364);
LAB_00158bd8:
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


// ===== 00158cd0  FUN_00158cd0 =====

void FUN_00158cd0(undefined8 param_1,undefined4 param_2)

{
  FUN_0015ba74(param_2);
  return;
}


// ===== 00158cdc  FUN_00158cdc =====

undefined8 FUN_00158cdc(long param_1)

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


// ===== 00158dfc  FUN_00158dfc =====

undefined8
FUN_00158dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,
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
  
  lVar7 = FUN_00158228(param_1,param_3,auStack_b0,auStack_e8,0);
  if (lVar7 == 0) {
    memset(auStack_700,0,0x618);
    uVar8 = FUN_00159284(param_1,auStack_b0,auStack_e8,param_2,4,auStack_700);
    if ((uVar8 & 1) != 0) {
      uVar8 = FUN_00159ecc(param_1,auStack_700,param_4);
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
        puVar3 = PTR___sF_001baa60;
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
              goto LAB_001590dc;
            }
            else {
              puVar13 = (undefined8 *)((long)param_4 + 0x108);
              if ((local_b6 != 0x22) &&
                 ((puVar13 = (undefined8 *)((long)param_4 + 0x100), local_b6 != 0x20 &&
                  (puVar13 = (undefined8 *)((long)param_4 + 0xf8), local_b6 != 0x1f)))) {
LAB_001590dc:
                if (0x1c < local_b6) {
                  fprintf((FILE *)(PTR___sF_001baa60 + 0x130),"libunwind: %s - %s\n","getRegister",
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
LAB_001591e8:
                  fprintf((FILE *)(PTR___sF_001baa60 + 0x130),"libunwind: %s - %s\n",
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
              if (iVar2 != 6) goto LAB_001591e8;
              puVar9 = (ulong *)FUN_0015a764(*(undefined8 *)(piVar15 + 2),param_1,param_4,uVar8);
              uVar18 = *puVar9;
            }
            local_a00[uVar12] = uVar18;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == local_b6) {
            uVar14 = FUN_0015a000(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == 0x22) {
            uVar10 = FUN_0015a000(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
          }
          else {
            if (0xffffffe0 < uVar16 - 0x40) {
              return 0xffffe672;
            }
            uVar11 = FUN_0015a000(param_1,param_4,uVar8,piVar15);
            puVar3 = PTR___sF_001baa60;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
            if ((int)uVar16 < 0x1f) {
              uVar5 = uVar11;
              if ((uVar16 != 0x1d) && (uVar5 = local_a00[0x3b], uVar6 = uVar11, uVar16 != 0x1e))
              goto LAB_00159130;
            }
            else {
              uVar18 = uVar11;
              if ((uVar16 != 0x1f) &&
                 ((uVar18 = local_a00[0x3d], uVar10 = uVar11, uVar16 != 0x22 &&
                  (uVar10 = local_a00[0x3f], uVar16 != 0x20)))) {
LAB_00159130:
                if (0x1c < uVar12) {
                  fprintf((FILE *)(PTR___sF_001baa60 + 0x130),"libunwind: %s - %s\n","setRegister",
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
            FUN_0015a000(param_1,auStack_b20,uVar8,&local_80);
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


// ===== 00159284  FUN_00159284 =====

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_00159284(undefined8 param_1,long *param_2,long *param_3,long param_4,int param_5,
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
LAB_00159308:
    lVar20 = lVar20 + 0x18;
    if (lVar20 == 0x30) {
      return 1;
    }
  }
  uVar17 = 0;
LAB_00159338:
  puVar18 = local_6c0;
  puVar5 = PTR___sF_001baa60;
  pbVar10 = pbVar21 + 1;
  bVar3 = *pbVar21;
  apbStack_6a0[0xc0] = pbVar10;
  switch((ulong)bVar3) {
  case 0:
    goto code_r0x00159c0c;
  case 1:
    uVar17 = FUN_0015a210(local_6c8,apbStack_6a0 + 0xc0,pbVar2,(char)param_3[3],0);
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 2:
    uVar9 = (uint)pbVar21[1];
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 2;
    goto LAB_001597c0;
  case 3:
    uVar9 = (uint)*(ushort *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 3;
    goto LAB_001597c0;
  case 4:
    uVar9 = *(uint *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 5;
LAB_001597c0:
    uVar17 = uVar17 + iVar13 * uVar9;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 5:
    uVar19 = FUN_0015a59c(apbStack_6a0 + 0xc0,pbVar2);
    lVar8 = FUN_0015a59c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended DWARF unwind, reg too big\n";
      __size = 0x46;
      __s = (FILE *)(PTR___sF_001baa60 + 0x130);
      goto LAB_00159dbc;
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
LAB_0015975c:
    puVar12[6] = 2;
    *(long *)(puVar12 + 8) = lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 6:
    uVar19 = FUN_0015a59c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_restore_extended DWARF unwind, reg too big\n";
LAB_00159cac:
      __s = (FILE *)(PTR___sF_001baa60 + 0x130);
      __size = 0x47;
      goto LAB_00159dbc;
    }
    cVar4 = *(char *)(param_6 + uVar19 * 4 + 7);
joined_r0x00159bec:
    if (cVar4 != '\0') {
      pbVar21 = apbStack_6a0[uVar19 * 2];
      *(byte **)(param_6 + uVar19 * 4 + 8) = apbStack_6a0[uVar19 * 2 + 1];
      *(byte **)(param_6 + uVar19 * 4 + 6) = pbVar21;
    }
    goto code_r0x00159c0c;
  case 7:
    uVar19 = FUN_0015a59c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_undefined DWARF unwind, reg too big\n";
LAB_00159db0:
      __s = (FILE *)(PTR___sF_001baa60 + 0x130);
      __size = 0x40;
      goto LAB_00159dbc;
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
    uVar19 = FUN_0015a59c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_same_value DWARF unwind, reg too big\n";
LAB_00159d94:
      __s = (FILE *)(PTR___sF_001baa60 + 0x130);
      __size = 0x41;
      goto LAB_00159dbc;
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
    uVar19 = FUN_0015a59c(apbStack_6a0 + 0xc0,pbVar2);
    uVar14 = FUN_0015a59c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg too big\n";
      __size = 0x3f;
      __s = (FILE *)(PTR___sF_001baa60 + 0x130);
      goto LAB_00159dbc;
    }
    if (0x5f < uVar14) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg2 too big\n";
      goto LAB_00159db0;
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
    uVar19 = FUN_0015a59c(apbStack_6a0 + 0xc0,pbVar2);
    uVar7 = FUN_0015a59c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa DWARF unwind, reg too big\n";
      __size = 0x3e;
      __s = (FILE *)(PTR___sF_001baa60 + 0x130);
      goto LAB_00159dbc;
    }
    *param_6 = (int)uVar19;
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xd:
    uVar19 = FUN_0015a59c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa_register DWARF unwind, reg too big\n";
      goto LAB_00159cac;
    }
    *param_6 = (int)uVar19;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xe:
    uVar7 = FUN_0015a59c(apbStack_6a0 + 0xc0,pbVar2);
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xf:
    *param_6 = 0;
    *(byte **)(param_6 + 2) = pbVar10;
    goto LAB_00159b40;
  case 0x10:
    uVar19 = FUN_0015a59c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_expression DWARF unwind, reg too big\n";
      goto LAB_00159d94;
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
LAB_00159b38:
    puVar12[6] = uVar7;
    *(byte **)(puVar12 + 8) = apbStack_6a0[0xc0];
LAB_00159b40:
    lVar8 = FUN_0015a59c(apbStack_6a0 + 0xc0,pbVar2);
    apbStack_6a0[0xc0] = apbStack_6a0[0xc0] + lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x11:
    uVar19 = FUN_0015a59c(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_001baa60;
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended_sf DWARF unwind, reg too big\n";
      __size = 0x49;
      __s = (FILE *)(PTR___sF_001baa60 + 0x130);
      goto LAB_00159dbc;
    }
    uVar14 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_001baa60 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
LAB_00159acc:
    puVar12[6] = uVar7;
    *(ulong *)(puVar12 + 8) = uVar11 * (long)iVar13;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x12:
    uVar14 = FUN_0015a59c(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_001baa60;
    uVar19 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_001baa60 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      goto LAB_00159d94;
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
        fprintf((FILE *)(PTR___sF_001baa60 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
    uVar19 = FUN_0015a59c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      fprintf((FILE *)(PTR___sF_001baa60 + 0x130),
              "libunwind: malformed DW_CFA_val_offset DWARF unwind, reg (%lu) out of range\n\n",
              uVar19);
      goto LAB_00159dc4;
    }
    lVar8 = FUN_0015a59c(apbStack_6a0 + 0xc0,pbVar2);
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
    uVar19 = FUN_0015a59c(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_001baa60;
    if (uVar19 < 0x60) {
      uVar14 = 0;
      uVar11 = 0;
      pbVar21 = apbStack_6a0[0xc0];
      pbVar10 = apbStack_6a0[0xc0];
      do {
        if (pbVar10 == pbVar2) {
          fprintf((FILE *)(PTR___sF_001baa60 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      goto LAB_00159acc;
    }
    __ptr = "libunwind: malformed DW_CFA_val_offset_sf DWARF unwind, reg too big\n";
    __size = 0x44;
    __s = (FILE *)(PTR___sF_001baa60 + 0x130);
    goto LAB_00159dbc;
  case 0x16:
    uVar19 = FUN_0015a59c(apbStack_6a0 + 0xc0,pbVar2);
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
      goto LAB_00159b38;
    }
    __ptr = "libunwind: malformed DW_CFA_val_expression DWARF unwind, reg too big\n";
    __size = 0x45;
    __s = (FILE *)(PTR___sF_001baa60 + 0x130);
    goto LAB_00159dbc;
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
        goto joined_r0x00159bec;
      }
      if (bVar1 != 0x80) {
        return 0;
      }
      local_6dc = param_5;
      lVar8 = FUN_0015a59c(apbStack_6a0 + 0xc0,pbVar2);
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
    if (param_5 != 4) goto code_r0x00159c0c;
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
    uVar7 = FUN_0015a59c(apbStack_6a0 + 0xc0,pbVar2);
    param_6[4] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x2f:
    uVar19 = FUN_0015a59c(apbStack_6a0 + 0xc0,pbVar2);
    if (uVar19 < 0x60) {
      lVar8 = FUN_0015a59c(apbStack_6a0 + 0xc0,pbVar2);
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
      goto LAB_0015975c;
    }
    __ptr = "libunwind: malformed DW_CFA_GNU_negative_offset_extended DWARF unwind, reg too big\n";
    __size = 0x53;
    __s = (FILE *)(PTR___sF_001baa60 + 0x130);
LAB_00159dbc:
    fwrite(__ptr,__size,1,__s);
LAB_00159dc4:
    fflush((FILE *)(PTR___sF_001baa60 + 0x130));
    return 0;
  }
joined_r0x001596f4:
  if ((pbVar2 <= pbVar21) || (uVar16 <= uVar17)) goto LAB_00159308;
  goto LAB_00159338;
code_r0x00159c0c:
  pbVar21 = apbStack_6a0[0xc0];
  goto joined_r0x001596f4;
}


// ===== 00159ecc  FUN_00159ecc =====

long FUN_00159ecc(undefined8 param_1,uint *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR___sF_001baa60;
  uVar1 = *param_2;
  if ((int)uVar1 < 0x1e) {
    if ((int)uVar1 < 0) {
      if (uVar1 == 0xfffffffe) {
LAB_00159f0c:
        return *(long *)(param_3 + 0xf8) + (long)(int)param_2[1];
      }
      if (uVar1 == 0xffffffff) goto LAB_00159f50;
    }
    else {
      if (uVar1 == 0) {
        lVar3 = FUN_0015a764(*(undefined8 *)(param_2 + 2),param_1,param_3,0);
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
    if (uVar1 == 0x1f) goto LAB_00159f0c;
  }
  else {
    if (uVar1 == 0x22) {
      return *(long *)(param_3 + 0x108) + (long)(int)param_2[1];
    }
    if (uVar1 == 0x20) {
LAB_00159f50:
      return *(long *)(param_3 + 0x100) + (long)(int)param_2[1];
    }
  }
  if (0x1c < uVar1) {
    fprintf((FILE *)(PTR___sF_001baa60 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(long *)(param_3 + (ulong)uVar1 * 8) + (long)(int)param_2[1];
}


// ===== 0015a000  FUN_0015a000 =====

undefined8 FUN_0015a000(undefined8 param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  puVar2 = PTR___sF_001baa60;
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
LAB_0015a13c:
          return *(undefined8 *)(param_2 + 0xf8);
        }
        if (uVar5 == 0xffffffff) goto LAB_0015a124;
        if (uVar5 == 0x1d) {
          return *(undefined8 *)(param_2 + 0xe8);
        }
      }
      else if ((int)uVar5 < 0x20) {
        if (uVar5 == 0x1e) {
          return *(undefined8 *)(param_2 + 0xf0);
        }
        if (uVar5 == 0x1f) goto LAB_0015a13c;
      }
      else {
        if (uVar5 == 0x22) {
          return *(undefined8 *)(param_2 + 0x108);
        }
        if (uVar5 == 0x20) {
LAB_0015a124:
          return *(undefined8 *)(param_2 + 0x100);
        }
      }
      if (0x1c < uVar5) {
        fprintf((FILE *)(PTR___sF_001baa60 + 0x130),"libunwind: %s - %s\n","getRegister",
                "unsupported arm64 register");
        fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      return *(undefined8 *)(param_2 + (*(ulong *)(param_4 + 2) & 0xffffffff) * 8);
    }
    if (iVar1 == 6) {
      puVar4 = (undefined8 *)FUN_0015a764(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return *puVar4;
    }
    if (iVar1 == 7) {
      uVar3 = FUN_0015a764(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return uVar3;
    }
  }
  fprintf((FILE *)(PTR___sF_001baa60 + 0x130),"libunwind: %s - %s\n","getSavedRegister",
          "unsupported restore location for register");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0015a210  FUN_0015a210 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_0015a210(undefined8 param_1,long *param_2,ulong *param_3,uint param_4,long param_5)

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
  
  puVar3 = PTR___sF_001baa60;
  uVar1 = param_4 & 0xf;
  puVar10 = (ulong *)*param_2;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if ((param_4 & 0xf) == 0) goto LAB_0015a35c;
      if (uVar1 != 1) {
LAB_0015a568:
        fprintf((FILE *)(PTR___sF_001baa60 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "unknown pointer encoding");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar4 = (undefined8 *)FUN_0015a59c(param_2,param_3);
      puVar3 = PTR___sF_001baa60;
    }
    else if (uVar1 == 2) {
      puVar4 = (undefined8 *)(ulong)(ushort)*puVar10;
      *param_2 = (long)puVar10 + 2;
      puVar3 = PTR___sF_001baa60;
    }
    else {
      if (uVar1 != 3) goto LAB_0015a568;
      puVar4 = (undefined8 *)(ulong)(uint)*puVar10;
      *param_2 = (long)((long)puVar10 + 4);
      puVar3 = PTR___sF_001baa60;
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 4) {
LAB_0015a35c:
      puVar4 = (undefined8 *)*puVar10;
      *param_2 = (long)(puVar10 + 1);
      puVar3 = PTR___sF_001baa60;
    }
    else {
      if (uVar1 != 9) goto LAB_0015a568;
      uVar7 = 0;
      uVar5 = 0;
      puVar6 = puVar10;
      puVar9 = puVar10;
      do {
        if (puVar9 == param_3) {
          fprintf((FILE *)(PTR___sF_001baa60 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      puVar3 = PTR___sF_001baa60;
    }
  }
  else if (uVar1 == 10) {
    puVar4 = (undefined8 *)(long)(short)*puVar10;
    *param_2 = (long)puVar10 + 2;
    puVar3 = PTR___sF_001baa60;
  }
  else {
    if (uVar1 != 0xb) {
      if (uVar1 != 0xc) goto LAB_0015a568;
      goto LAB_0015a35c;
    }
    puVar4 = (undefined8 *)(long)(int)(uint)*puVar10;
    *param_2 = (long)((long)puVar10 + 4);
    puVar3 = PTR___sF_001baa60;
  }
  uVar1 = (param_4 & 0xff) >> 4 & 7;
  PTR___sF_001baa60 = puVar3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      if (uVar1 != 1) goto LAB_0015a534;
      puVar4 = (undefined8 *)((long)puVar4 + (long)puVar10);
    }
LAB_0015a3e8:
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
      goto LAB_0015a3e8;
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
LAB_0015a534:
  fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP","unknown pointer encoding");
  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0015a59c  FUN_0015a59c =====

ulong FUN_0015a59c(long *param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  puVar2 = PTR___sF_001baa60;
  pbVar4 = (byte *)*param_1;
  if (pbVar4 != param_2) {
    pbVar5 = pbVar4 + 1;
    uVar3 = (ulong)*pbVar4 & 0x7f;
    if (-1 < (char)*pbVar4) {
LAB_0015a5cc:
      *param_1 = (long)pbVar5;
      return uVar3;
    }
    if (pbVar5 != param_2) {
      uVar3 = uVar3 | (ulong)((int)(char)pbVar4[1] & 0x7f) << 7;
      pbVar5 = pbVar4 + 2;
      if (-1 < (char)pbVar4[1]) goto LAB_0015a5cc;
      if (pbVar5 != param_2) {
        uVar3 = uVar3 | (ulong)((int)(char)pbVar4[2] & 0x7f) << 0xe;
        pbVar5 = pbVar4 + 3;
        if (-1 < (char)pbVar4[2]) goto LAB_0015a5cc;
        if (pbVar5 != param_2) {
          uVar3 = uVar3 | (ulong)((int)(char)pbVar4[3] & 0x7f) << 0x15;
          pbVar5 = pbVar4 + 4;
          if (-1 < (char)pbVar4[3]) goto LAB_0015a5cc;
          if (pbVar5 != param_2) {
            uVar3 = uVar3 | (ulong)((int)(char)pbVar4[4] & 0x7f) << 0x1c;
            pbVar5 = pbVar4 + 5;
            if (-1 < (char)pbVar4[4]) goto LAB_0015a5cc;
            if (pbVar5 != param_2) {
              uVar3 = uVar3 | (ulong)((int)(char)pbVar4[5] & 0x7f) << 0x23;
              pbVar5 = pbVar4 + 6;
              if (-1 < (char)pbVar4[5]) goto LAB_0015a5cc;
              if (pbVar5 != param_2) {
                uVar3 = uVar3 | (ulong)((int)(char)pbVar4[6] & 0x7f) << 0x2a;
                pbVar5 = pbVar4 + 7;
                if (-1 < (char)pbVar4[6]) goto LAB_0015a5cc;
                if (pbVar5 != param_2) {
                  uVar3 = uVar3 | (ulong)((int)(char)pbVar4[7] & 0x7f) << 0x31;
                  pbVar5 = pbVar4 + 8;
                  if (-1 < (char)pbVar4[7]) goto LAB_0015a5cc;
                  if (pbVar5 != param_2) {
                    uVar3 = uVar3 | (ulong)((int)(char)pbVar4[8] & 0x7f) << 0x38;
                    pbVar5 = pbVar4 + 9;
                    if (-1 < (char)pbVar4[8]) goto LAB_0015a5cc;
                    if (pbVar5 != param_2) {
                      bVar1 = *pbVar5;
                      if ((bVar1 & 0x7e) == 0) {
                        if (-1 < (char)bVar1) {
                          *param_1 = (long)(pbVar4 + 10);
                          return uVar3 | (ulong)bVar1 << 0x3f;
                        }
                        if (pbVar4 + 10 == param_2) goto LAB_0015a6fc;
                      }
                      fprintf((FILE *)(PTR___sF_001baa60 + 0x130),"libunwind: %s - %s\n",
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
LAB_0015a6fc:
  fprintf((FILE *)(PTR___sF_001baa60 + 0x130),"libunwind: %s - %s\n","getULEB128",
          "truncated uleb128 expression");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0015a764  FUN_0015a764 =====

ulong FUN_0015a764(byte *param_1,undefined8 param_2,long param_3,ulong param_4)

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
  lVar11 = FUN_0015a59c(&local_68,param_1 + 0x14);
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
      puVar9 = PTR___sF_001baa60;
      pbVar13 = pbVar18 + 1;
      local_68 = pbVar13;
      bVar8 = *pbVar18;
      uVar10 = (uint)bVar8;
      if (0x91 < uVar10 - 3) {
code_r0x0015afe0:
        fprintf((FILE *)(PTR___sF_001baa60 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
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
        goto LAB_0015ac4c;
      case 4:
      case 5:
      case 7:
        goto code_r0x0015afe0;
      case 6:
        puVar14 = (ulong *)*puVar19;
LAB_0015abdc:
        *puVar19 = *puVar14;
        goto LAB_0015a7e8;
      case 8:
        uVar16 = (ulong)pbVar18[1];
        goto LAB_0015abb0;
      case 9:
        uVar16 = (ulong)(char)pbVar18[1];
LAB_0015abb0:
        local_68 = pbVar18 + 2;
        goto LAB_0015ac4c;
      case 10:
        uVar16 = (ulong)*(ushort *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_0015ac4c;
      case 0xb:
        uVar16 = (ulong)*(short *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_0015ac4c;
      case 0xc:
        uVar16 = (ulong)*(uint *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_0015ac4c;
      case 0xd:
        uVar16 = (ulong)*(int *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_0015ac4c;
      case 0x10:
        uVar16 = FUN_0015a59c(&local_68,pbVar6);
        puVar19 = puVar19 + 1;
        *puVar19 = uVar16;
        goto LAB_0015a7e8;
      case 0x11:
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = pbVar13;
        do {
          if (pbVar18 == pbVar6) {
            fprintf((FILE *)(PTR___sF_001baa60 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
        goto LAB_0015a7e8;
      case 0x12:
        uVar16 = *puVar19;
        goto LAB_0015a7e4;
      case 0x13:
        puVar19 = puVar19 + -1;
        goto LAB_0015a7e8;
      case 0x14:
        uVar16 = puVar19[-1];
        goto LAB_0015a7e4;
      case 0x15:
        local_68 = pbVar18 + 2;
        uVar16 = puVar19[-(ulong)pbVar18[1]];
LAB_0015ac4c:
LAB_0015a7e4:
        puVar19[1] = uVar16;
        puVar19 = puVar19 + 1;
        goto LAB_0015a7e8;
      case 0x16:
        auVar20 = NEON_ext(*(undefined1 (*) [16])(puVar19 + -1),*(undefined1 (*) [16])(puVar19 + -1)
                           ,8,1);
        *puVar19 = auVar20._8_8_;
        puVar19[-1] = auVar20._0_8_;
        goto LAB_0015a7e8;
      case 0x17:
        uVar16 = *puVar19;
        *puVar19 = SUB168(*(undefined1 (*) [16])(puVar19 + -2),8);
        puVar19[-1] = SUB168(*(undefined1 (*) [16])(puVar19 + -2),0);
        puVar19[-2] = uVar16;
        goto LAB_0015a7e8;
      case 0x18:
        puVar14 = (ulong *)*puVar19;
        puVar19 = puVar19 + -1;
        *puVar19 = *puVar14;
        goto LAB_0015a7e8;
      case 0x19:
        uVar16 = *puVar19;
        if ((long)uVar16 < 0) goto LAB_0015ad84;
        goto LAB_0015a7e8;
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
LAB_0015ad84:
        *puVar19 = -uVar16;
        goto LAB_0015a7e8;
      case 0x20:
        *puVar19 = ~*puVar19;
        goto LAB_0015a7e8;
      case 0x21:
        uVar16 = puVar19[-1] | *puVar19;
        break;
      case 0x22:
        uVar16 = puVar19[-1] + *puVar19;
        break;
      case 0x23:
        lVar11 = FUN_0015a59c(&local_68,pbVar6);
        *puVar19 = *puVar19 + lVar11;
        goto LAB_0015a7e8;
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
        goto LAB_0015a7e8;
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
        goto LAB_0015a7e8;
      default:
        uVar16 = (ulong)(uVar15 - 0x30);
        goto LAB_0015a7e4;
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
        goto LAB_0015a7e0;
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
            fprintf((FILE *)(PTR___sF_001baa60 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
             (puVar14 = puVar2, bVar8 != 0x8d)) goto LAB_0015a920;
        }
        else if (bVar8 < 0x90) {
          puVar14 = puVar1;
          if ((bVar8 != 0x8e) && (puVar14 = puVar4, uVar15 != 0x8f)) {
LAB_0015a920:
            if (0x1c < uVar10 - 0x70) {
              fprintf((FILE *)(PTR___sF_001baa60 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((bVar8 != 0x90) && (puVar14 = puVar3, bVar8 != 0x92)) goto LAB_0015a920;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_0015a7e4;
      case 0x90:
        uVar10 = FUN_0015a59c(&local_68,pbVar6);
        puVar9 = PTR___sF_001baa60;
        if ((int)uVar10 < 0x1e) {
          if (((uVar10 != 0xfffffffe) && (puVar14 = puVar5, uVar10 != 0xffffffff)) &&
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_0015ae84;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_0015ae84:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_001baa60 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_0015ae84;
        }
LAB_0015a7e0:
        uVar16 = *puVar14;
        goto LAB_0015a7e4;
      case 0x91:
        fprintf((FILE *)(PTR___sF_001baa60 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_fbreg not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x92:
        uVar10 = FUN_0015a59c(&local_68,pbVar6);
        puVar9 = PTR___sF_001baa60;
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = local_68;
        pbVar13 = local_68;
        do {
          if (pbVar13 == pbVar6) {
            fprintf((FILE *)(PTR___sF_001baa60 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_0015aeac;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_0015aeac:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_001baa60 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_0015aeac;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_0015a7e4;
      case 0x93:
        fprintf((FILE *)(PTR___sF_001baa60 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
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
LAB_0015b084:
              fprintf((FILE *)(PTR___sF_001baa60 + 0x130),"libunwind: %s - %s\n",
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
            if (bVar8 != 8) goto LAB_0015b084;
            goto LAB_0015abdc;
          }
          *puVar19 = (ulong)(uint)*puVar14;
        }
        goto LAB_0015a7e8;
      }
      puVar19[-1] = uVar16;
      puVar19 = puVar19 + -1;
LAB_0015a7e8:
      pbVar18 = local_68;
    } while (local_68 < pbVar6);
    param_4 = *puVar19;
  }
  return param_4;
}


// ===== 0015b120  FUN_0015b120 =====

undefined8 FUN_0015b120(long param_1,ulong param_2,long *param_3,uint param_4)

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
      (uVar3 = FUN_0015b648(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],
                            param_3[2] + (ulong)param_4,&local_6b0,auStack_6e8), (uVar3 & 1) == 0))
     && ((param_3[4] == 0 ||
         (uVar3 = FUN_0015b810(*(undefined8 *)(param_1 + 8),param_2,param_3[4],(int)param_3[5],
                               &local_6b0,auStack_6e8), (uVar3 & 1) == 0)))) {
    lVar5 = *param_3;
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_001bf364);
    if (PTR_DAT_001bf338 < PTR_DAT_001bf340) {
      plVar4 = (long *)PTR_DAT_001bf338;
      if (lVar5 == -1) {
        do {
          if (((ulong)plVar4[1] <= param_2) && (param_2 < (ulong)plVar4[2])) goto LAB_0015b228;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_001bf340);
      }
      else {
        do {
          if (((*plVar4 == lVar5) && ((ulong)plVar4[1] <= param_2)) && (param_2 < (ulong)plVar4[2]))
          goto LAB_0015b228;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_001bf340);
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001bf364);
    goto LAB_0015b270;
  }
LAB_0015b290:
  bVar2 = 1;
LAB_0015b294:
  lVar5 = *param_3;
  memset(auStack_680,0,0x618);
  uVar3 = FUN_00159284(*(undefined8 *)(param_1 + 8),&local_6b0,auStack_6e8,param_2,4,auStack_680);
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
      pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_001bf364);
      __src = PTR_DAT_001bf338;
      if (PTR_DAT_001bf348 <= PTR_DAT_001bf340) {
        __n = (long)PTR_DAT_001bf348 - (long)PTR_DAT_001bf338;
        __dest = (undefined *)malloc(__n * 4);
        memcpy(__dest,__src,__n);
        if ((undefined8 *)__src != &DAT_001bf3a0) {
          free(__src);
        }
        PTR_DAT_001bf348 = __dest + ((long)__n >> 3) * 0x20;
        PTR_DAT_001bf340 = __dest + __n;
        PTR_DAT_001bf338 = __dest;
      }
      *(long *)PTR_DAT_001bf340 = lVar5;
      *(long *)((long)PTR_DAT_001bf340 + 8) = local_698;
      *(long *)((long)PTR_DAT_001bf340 + 0x18) = local_6b0;
      *(long *)((long)PTR_DAT_001bf340 + 0x10) = local_690;
      PTR_DAT_001bf340 = (undefined *)((long)PTR_DAT_001bf340 + 0x20);
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001bf364);
      return 1;
    }
    return 1;
  }
  return 1;
LAB_0015b228:
  lVar5 = plVar4[3];
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001bf364);
  if ((lVar5 != 0) &&
     (uVar3 = FUN_0015b648(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],lVar5,
                           &local_6b0,auStack_6e8), (uVar3 & 1) != 0)) {
    bVar2 = 0;
    goto LAB_0015b294;
  }
LAB_0015b270:
  uVar3 = FUN_0015b648(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],0,&local_6b0,
                       auStack_6e8);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  goto LAB_0015b290;
}


// ===== 0015b3f4  FUN_0015b3f4 =====

undefined8 FUN_0015b3f4(ulong *param_1,undefined8 param_2,undefined8 *param_3)

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
              uVar5 = FUN_0015b528(uVar2,lVar8,lVar9 + lVar8,local_70);
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


// ===== 0015b528  FUN_0015b528 =====

undefined8 FUN_0015b528(undefined8 param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte *local_28;
  
  puVar3 = PTR___sF_001baa60;
  if ((ulong)((long)param_3 - (long)param_2) < 4) {
    if (param_3 == param_2) {
      return 0;
    }
    fprintf((FILE *)(PTR___sF_001baa60 + 0x130),
            "libunwind: unsupported .eh_frame_hdr at %lx: need at least 4 bytes of data but only got %zd\n"
            ,param_2);
  }
  else {
    if (*param_2 == 1) {
      local_28 = param_2 + 4;
      bVar1 = param_2[2];
      bVar2 = param_2[1];
      *(byte *)(param_4 + 3) = param_2[3];
      uVar4 = FUN_0015a210(param_1,&local_28,param_3,bVar2,param_2);
      *param_4 = uVar4;
      if (bVar1 == 0xff) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_0015a210(param_1,&local_28,param_3,bVar1,param_2);
      }
      param_4[1] = uVar4;
      param_4[2] = local_28;
      return 1;
    }
    fprintf((FILE *)(PTR___sF_001baa60 + 0x130),
            "libunwind: unsupported .eh_frame_hdr version: %u at %lx\n",(ulong)(uint)*param_2,
            param_2);
  }
  fflush((FILE *)(puVar3 + 0x130));
  return 0;
}


// ===== 0015b648  FUN_0015b648 =====

undefined8
FUN_0015b648(undefined8 param_1,ulong param_2,uint *param_3,long param_4,uint *param_5,
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
        (puVar7 < puVar9)) && (lVar4 = FUN_001583b8(param_1,puVar7,param_7), lVar4 == 0)) {
      local_68 = local_68 + 1;
      uVar8 = FUN_0015a210(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x18),0);
      lVar4 = FUN_0015a210(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x18) & 0xf,0);
      if ((uVar8 < param_2) && (param_2 <= lVar4 + uVar8)) {
        cVar2 = *(char *)(param_7 + 0x31);
        param_6[5] = 0;
        puVar9 = local_68;
        if (cVar2 != '\0') {
          lVar5 = FUN_0015a59c(&local_68,puVar1);
          puVar7 = local_68;
          puVar9 = (uint *)((long)local_68 + lVar5);
          if ((*(byte *)(param_7 + 0x19) != 0xff) &&
             (lVar5 = FUN_0015a210(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x19) & 0xf,0),
             lVar5 != 0)) {
            local_68 = puVar7;
            uVar6 = FUN_0015a210(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x19),0);
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


// ===== 0015b810  FUN_0015b810 =====

undefined8
FUN_0015b810(undefined8 param_1,ulong param_2,long param_3,ulong param_4,long param_5,
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
  uVar1 = FUN_0015b528(param_1,param_3,lVar4,auStack_80);
  if (((uVar1 & 1) != 0) && (local_78 != 0)) {
    lVar2 = FUN_0015b978(local_68);
    lVar7 = 0;
    do {
      if (local_78 < 2) {
        lVar8 = lVar7 * lVar2;
        break;
      }
      uVar6 = local_78 >> 1;
      lVar8 = (uVar6 + lVar7) * lVar2;
      local_88 = local_70 + lVar8;
      uVar1 = FUN_0015a210(param_1,&local_88,lVar4,local_68,param_3);
      uVar5 = local_78 - uVar6;
      local_78 = uVar6;
      if (uVar1 < param_2) {
        local_78 = uVar5;
        lVar7 = uVar6 + lVar7;
      }
    } while (uVar1 != param_2);
    local_88 = local_70 + lVar8;
    FUN_0015a210(param_1,&local_88,lVar4,local_68,param_3);
    uVar3 = FUN_0015a210(param_1,&local_88,lVar4,local_68,param_3);
    lVar4 = FUN_00158228(param_1,uVar3,param_5,param_6,0);
    if (((lVar4 == 0) && (*(ulong *)(param_5 + 0x18) <= param_2)) &&
       (param_2 < *(ulong *)(param_5 + 0x20))) {
      return 1;
    }
  }
  return 0;
}


// ===== 0015b978  FUN_0015b978 =====

undefined8 FUN_0015b978(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_001baa60;
  param_1 = param_1 & 0xf;
  if (param_1 < 9) {
    if (param_1 < 3) {
      if (param_1 == 2) {
        return 4;
      }
      if (param_1 == 1) {
LAB_0015ba40:
        fprintf((FILE *)(PTR___sF_001baa60 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
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
    if (param_1 == 9) goto LAB_0015ba40;
  }
  else {
    if (param_1 == 0xc) {
      return 0x10;
    }
    if (param_1 == 0xb) {
      return 8;
    }
  }
  fprintf((FILE *)(PTR___sF_001baa60 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
          "Unknown DWARF encoding for search table.");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0015ba74  FUN_0015ba74 =====

char * FUN_0015ba74(int param_1)

{
  if (param_1 + 2U < 0x62) {
    return &DAT_00138a54 + *(int *)(&DAT_00138a54 + (ulong)(param_1 + 2U) * 4);
  }
  return "unknown register";
}


// ===== 0015baa4  FUN_0015baa4 =====

undefined1  [16] FUN_0015baa4(undefined1 (*param_1) [16])

{
  return *param_1;
}


// ===== 0015bb40  FUN_0015bb40 =====

long FUN_0015bb40(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_001bfba0 == '\0') {
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


// ===== 0015bb70  _INIT_0 =====

void _INIT_0(void)

{
  uint uVar1;
  int iVar2;
  char acStack_6c [92];
  
  uVar1 = getauxval(0x10);
  if ((uVar1 >> 8 & 1) == 0) {
    DAT_001bfba0 = 0;
    return;
  }
  iVar2 = __system_property_get("ro.arch",acStack_6c);
  if (0 < iVar2) {
    iVar2 = strncmp(acStack_6c,"exynos9810",10);
    DAT_001bfba0 = iVar2 != 0;
    return;
  }
  DAT_001bfba0 = 1;
  return;
}


// ===== 0015bc08  FUN_0015bc08 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0015bc08(ulong param_1,long param_2)

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
    DAT_001bfba8 = DAT_001bfba8 | 0x400;
  }
  uVar2 = (uint)uVar4;
  if ((uVar3 >> 4 & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x8000;
  }
  if ((uVar3 >> 0x1b & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 2;
  }
  if ((uVar2 >> 7 & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 6;
  }
  if ((~uVar3 & 0xc0000) == 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x20;
  }
  if ((uVar3 >> 0x14 & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x10;
  }
  if ((uVar3 >> 0x17 & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 8;
  }
  if ((uVar3 >> 9 & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x10100;
  }
  if ((uVar3 >> 0x18 & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x20000;
  }
  if ((uVar3 >> 0xc & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x40;
  }
  if ((uVar3 >> 0x1a & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x800000;
  }
  if ((uVar3 >> 3 & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x4000;
  }
  if ((uVar3 >> 5 & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x800;
  }
  if ((uVar3 >> 6 & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x1000;
  }
  if ((uVar3 >> 0xd & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x100000;
  }
  if ((uVar3 >> 0xe & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x200000;
  }
  if ((uVar3 >> 0x1d & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x400000000000;
  }
  if ((uVar3 >> 0x1c & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x2000000000000;
  }
  if ((uVar2 >> 0x12 & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x180000000000;
  }
  if ((uVar2 >> 0x16 & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x380000000000;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x2000000000;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x6000000000;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x8000000000;
  }
  if ((uVar2 >> 5 & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x10000000000;
  }
  if ((uVar2 >> 6 & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x20000000000;
  }
  if ((uVar4 & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x80000;
  }
  if ((uVar3 >> 8 & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x80;
  }
  if ((uVar2 >> 0x10 & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 1;
  }
  if ((uVar2 >> 0xd & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x4000000;
  }
  if ((uVar4 >> 0x20 & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x10000000;
  }
  if ((uVar4 >> 0x21 & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x100000000;
  }
  if ((uVar2 >> 0xf & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x2000000;
  }
  if ((uVar2 >> 8 & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x1000000;
  }
  if ((uVar2 >> 9 & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x200000000;
  }
  if ((uVar2 >> 10 & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x400000000;
  }
  if ((uVar2 >> 0xb & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x800000000;
  }
  if ((uVar2 >> 0x11 & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x4000000000000;
  }
  if ((uVar2 >> 0x15 & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x20000000;
  }
  if ((int)uVar2 < 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x40000000000000;
  }
  if ((uVar2 >> 0x17 & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x40000000000;
  }
  if ((uVar2 >> 0x18 & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x100000000000000;
  }
  if ((uVar2 >> 0x19 & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x80000000000000;
  }
  if ((uVar4 >> 0x2b & 1) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x800000000000000;
  }
  if ((uVar3 >> 0xb & 1) == 0) {
    if ((param_1 & 0x201) != 0) {
      DAT_001bfba8 = DAT_001bfba8 | 0x300;
    }
    if ((uVar4 & 1) != 0 || (param_1 & 0x10000) != 0) {
      DAT_001bfba8 = DAT_001bfba8 | 0x40000;
    }
    if ((param_1 & 0x4008000) != 0) {
      DAT_001bfba8 = DAT_001bfba8 | 0x400000;
    }
    if ((uVar4 & 0x100004000) != 0) {
      DAT_001bfba8 = DAT_001bfba8 | 0x8000000;
    }
    uVar5 = DAT_001bfba8 | (ulong)(uVar2 << 0x13) & 0x80000000;
    if ((uVar4 & 2) != 0 && (param_1 & 0x400000) != 0) {
      uVar5 = uVar5 | 0x1000000000;
    }
    uVar5 = uVar5 | (param_1 & 0x20000) >> 4;
    goto LAB_0015bd70;
  }
  uVar4 = id_aa64pfr1_el1;
  if ((uVar4 & 0xf00) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x80000000000;
  }
  if ((uVar4 & 0xf0) == 0x10) {
    DAT_001bfba8 = DAT_001bfba8 | 0x1000000000000;
    if ((uVar4 & 0xf000000) != 0x2000000) goto LAB_0015c060;
LAB_0015c0b4:
    DAT_001bfba8 = DAT_001bfba8 | 0x200000000000000;
    uVar4 = id_aa64pfr0_el1;
    uVar3 = (uint)uVar4;
  }
  else {
    if ((uVar4 & 0xf000000) == 0x2000000) goto LAB_0015c0b4;
LAB_0015c060:
    uVar4 = id_aa64pfr0_el1;
    uVar3 = (uint)uVar4;
  }
  if ((~uVar3 & 0xf0000) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x300;
  }
  if ((uVar4 & 0xf00000000) != 0) {
    uVar4 = UnkSytemRegRead(3,0,0,4,4);
    if ((uVar4 & 0xf) == 1) {
      DAT_001bfba8 = DAT_001bfba8 | 0x1000000000;
    }
    else if ((uVar4 & 0xf) == 0) {
      DAT_001bfba8 = DAT_001bfba8 | 0x40000000;
    }
    if ((uVar4 & 0xf00000) != 0) {
      DAT_001bfba8 = DAT_001bfba8 | 0x80000000;
    }
  }
  uVar4 = id_aa64isar0_el1;
  if ((uVar4 & 0xf00000000) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x2000;
  }
  uVar4 = id_aa64isar1_el1;
  uVar5 = uVar4 >> 0x14 & 0xf;
  if ((uVar4 & 0xf) != 0) {
    DAT_001bfba8 = DAT_001bfba8 | 0x40000;
  }
  if (uVar5 != 0) {
    if (uVar5 == 3) {
      DAT_001bfba8 = DAT_001bfba8 | 0x400000000400000;
    }
    else {
      DAT_001bfba8 = DAT_001bfba8 | 0x400000;
    }
  }
  uVar5 = DAT_001bfba8 | 0x800000000000;
  if ((uVar4 & 0xf0000000000) != 0x20000000000) {
    uVar5 = DAT_001bfba8;
  }
  if ((uVar4 & 0xf00000000000) != 0) {
    uVar5 = uVar5 | 0x8000000;
  }
  if (uVar4 >> 0x3c != 0) {
    if (uVar4 >> 0x3d == 0) {
      DAT_001bfba8 = uVar5 | 0x8008000000000000;
      return;
    }
    uVar1 = 0x38000000000000;
    if (uVar4 >> 0x3c < 3) {
      uVar1 = 0x18000000000000;
    }
    DAT_001bfba8 = uVar5 | uVar1 | 0x8000000000000000;
    return;
  }
LAB_0015bd70:
  DAT_001bfba8 = uVar5 | 0x8000000000000000;
  return;
}


// ===== 0015c1a4  _INIT_1 =====

void _INIT_1(void)

{
  int iVar1;
  ulong uVar2;
  char local_70 [8];
  ulong uStack_68;
  undefined8 local_60;
  
  if (DAT_001bfba8 != 0) {
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
    FUN_0015bc08(uVar2 | 0x4000000000000000,local_70);
  }
  return;
}


// ===== 0015c230  FUN_0015c230 =====

long FUN_0015c230(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_001bfba0 == '\0') {
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


// ===== 0015c260  margelo::nitro::AnyMap::contains =====

/* margelo::nitro::AnyMap::contains(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

bool __thiscall margelo::nitro::AnyMap::contains(AnyMap *this,basic_string *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    lVar1 = FUN_0015c2b8(*(undefined8 *)this,*(undefined8 *)(this + 8),param_1);
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)this);
}


// ===== 0015c2b8  FUN_0015c2b8 =====

long * FUN_0015c2b8(long param_1,ulong param_2,byte *param_3)

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
  uVar7 = FUN_0015c450(__s2,sVar2);
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
                  if (bVar3 >> 1 == uVar10) goto LAB_0015c418;
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
            if (uVar10 != uVar12) goto LAB_0015c414;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      goto LAB_0015c418;
    }
  }
LAB_0015c414:
  plVar9 = (long *)0x0;
LAB_0015c418:
  if (*(long *)(lVar5 + 0x28) == lVar8) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015c450  FUN_0015c450 =====

void FUN_0015c450(ulong *param_1,ulong param_2)

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
        goto LAB_0015c804;
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
        goto LAB_0015c804;
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
      goto LAB_0015c804;
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
LAB_0015c804:
  if (*(long *)(lVar10 + 0x28) != *(long *)(lVar10 + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar13);
  }
  return;
}


// ===== 0015c8c8  FUN_0015c8c8 =====

void FUN_0015c8c8(void)

{
  __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 0015c8d8  margelo::nitro::AnyMap::remove =====

/* margelo::nitro::AnyMap::remove(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall margelo::nitro::AnyMap::remove(AnyMap *this,basic_string *param_1)

{
  size_t sVar1;
  size_t sVar2;
  AnyMap *pAVar3;
  uint uVar4;
  AnyMap AVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  AnyMap *pAVar12;
  ulong uVar13;
  AnyMap *pAVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  AnyMap *pAVar18;
  ulong uVar19;
  ulong uVar20;
  undefined2 uVar21;
  undefined8 uVar22;
  undefined1 uStack_69;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  sVar2 = *(size_t *)(param_1 + 8);
  pAVar3 = *(AnyMap **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pAVar3 = (AnyMap *)(param_1 + 1);
    sVar2 = (ulong)((byte)*param_1 >> 1);
  }
  uVar9 = FUN_0015c450(pAVar3,sVar2);
  uVar19 = *(ulong *)(this + 8);
  if (uVar19 != 0) {
    uVar22 = NEON_cnt(uVar19,1);
    uVar21 = NEON_uaddlv(uVar22,1);
    uVar17 = CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar21) & 0xffffffff;
    if (uVar17 < 2) {
      uVar13 = uVar19 - 1 & uVar9;
    }
    else {
      uVar13 = uVar9;
      if (uVar19 <= uVar9) {
        uVar13 = 0;
        if (uVar19 != 0) {
          uVar13 = uVar9 / uVar19;
        }
        uVar13 = uVar9 - uVar13 * uVar19;
      }
    }
    lVar16 = *(long *)this;
    puVar10 = *(undefined8 **)(lVar16 + uVar13 * 8);
    if ((puVar10 != (undefined8 *)0x0) && (pAVar18 = (AnyMap *)*puVar10, pAVar18 != (AnyMap *)0x0))
    {
      uVar20 = uVar19 - 1;
      do {
        uVar11 = *(ulong *)(pAVar18 + 8);
        if (uVar11 == uVar9) {
          AVar5 = pAVar18[0x10];
          uVar11 = (ulong)((byte)AVar5 >> 1);
          sVar1 = uVar11;
          if (((byte)AVar5 & 1) != 0) {
            sVar1 = *(size_t *)(pAVar18 + 0x18);
          }
          if (sVar1 == sVar2) {
            if (((byte)AVar5 & 1) == 0) {
              if ((byte)AVar5 < 2) {
LAB_0015ca54:
                if (uVar17 < 2) {
                  uVar9 = uVar20 & uVar9;
                }
                else if (uVar19 <= uVar9) {
                  uVar13 = 0;
                  if (uVar19 != 0) {
                    uVar13 = uVar9 / uVar19;
                  }
                  uVar9 = uVar9 - uVar13 * uVar19;
                }
                pAVar3 = *(AnyMap **)(lVar16 + uVar9 * 8);
                do {
                  pAVar12 = pAVar3;
                  pAVar3 = *(AnyMap **)pAVar12;
                } while (*(AnyMap **)pAVar12 != pAVar18);
                if (pAVar12 == this + 0x10) {
LAB_0015cac0:
                  if (*(long *)pAVar18 != 0) {
                    uVar13 = *(ulong *)(*(long *)pAVar18 + 8);
                    if (uVar17 < 2) {
                      uVar13 = uVar13 & uVar20;
                    }
                    else if (uVar19 <= uVar13) {
                      uVar11 = 0;
                      if (uVar19 != 0) {
                        uVar11 = uVar13 / uVar19;
                      }
                      uVar13 = uVar13 - uVar11 * uVar19;
                    }
                    if (uVar13 == uVar9) goto LAB_0015caf8;
                  }
                  *(undefined8 *)(lVar16 + uVar9 * 8) = 0;
                }
                else {
                  uVar13 = *(ulong *)(pAVar12 + 8);
                  if (uVar17 < 2) {
                    uVar13 = uVar13 & uVar20;
                  }
                  else if (uVar19 <= uVar13) {
                    uVar11 = 0;
                    if (uVar19 != 0) {
                      uVar11 = uVar13 / uVar19;
                    }
                    uVar13 = uVar13 - uVar11 * uVar19;
                  }
                  if (uVar13 != uVar9) goto LAB_0015cac0;
                }
LAB_0015caf8:
                lVar16 = *(long *)pAVar18;
                if (lVar16 != 0) {
                  uVar13 = *(ulong *)(lVar16 + 8);
                  if (uVar17 < 2) {
                    uVar13 = uVar13 & uVar20;
                  }
                  else if (uVar19 <= uVar13) {
                    uVar17 = 0;
                    if (uVar19 != 0) {
                      uVar17 = uVar13 / uVar19;
                    }
                    uVar13 = uVar13 - uVar17 * uVar19;
                  }
                  if (uVar13 != uVar9) {
                    *(AnyMap **)(*(long *)this + uVar13 * 8) = pAVar12;
                    lVar16 = *(long *)pAVar18;
                  }
                }
                lVar15 = *(long *)(this + 0x18);
                uVar4 = *(uint *)(pAVar18 + 0x50);
                *(long *)pAVar12 = lVar16;
                *(undefined8 *)pAVar18 = 0;
                *(long *)(this + 0x18) = lVar15 + -1;
                if (uVar4 != 0xffffffff) {
                    /* try { // try from 0015cb64 to 0015cb6f has its CatchHandler @ 0015cbc4 */
                  (*(code *)(&PTR_FUN_001b9458)[uVar4])(&uStack_69,pAVar18 + 0x28);
                }
                *(undefined4 *)(pAVar18 + 0x50) = 0xffffffff;
                if (((byte)pAVar18[0x10] & 1) != 0) {
                  operator_delete(*(void **)(pAVar18 + 0x20));
                }
                operator_delete(pAVar18);
                break;
              }
              pAVar12 = pAVar18 + 0x11;
              pAVar14 = pAVar3;
              while (*pAVar12 == *pAVar14) {
                uVar11 = uVar11 - 1;
                pAVar12 = pAVar12 + 1;
                pAVar14 = pAVar14 + 1;
                if (uVar11 == 0) goto LAB_0015ca54;
              }
            }
            else {
              iVar8 = memcmp(*(void **)(pAVar18 + 0x20),pAVar3,*(size_t *)(pAVar18 + 0x18));
              if (iVar8 == 0) goto LAB_0015ca54;
            }
          }
        }
        else {
          if (uVar17 < 2) {
            uVar11 = uVar11 & uVar20;
          }
          else if (uVar19 <= uVar11) {
            uVar6 = 0;
            if (uVar19 != 0) {
              uVar6 = uVar11 / uVar19;
            }
            uVar11 = uVar11 - uVar6 * uVar19;
          }
          if (uVar11 != uVar13) break;
        }
        pAVar18 = *(AnyMap **)pAVar18;
      } while (pAVar18 != (AnyMap *)0x0);
    }
  }
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015cbc8  FUN_0015cbc8 =====

void FUN_0015cbc8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015cc00  FUN_0015cc00 =====

void FUN_0015cc00(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015cc38  FUN_0015cc38 =====

void FUN_0015cc38(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015cc70  FUN_0015cc70 =====

void FUN_0015cc70(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015cca8  FUN_0015cca8 =====

void FUN_0015cca8(undefined8 param_1,byte *param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if ((*param_2 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(*(void **)(param_2 + 0x10));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015cd08  FUN_0015cd08 =====

void FUN_0015cd08(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  undefined1 uStack_59;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pvVar3 = (void *)*param_2;
  if (pvVar3 != (void *)0x0) {
    pvVar4 = (void *)param_2[1];
    pvVar2 = pvVar3;
    if (pvVar4 != pvVar3) {
      do {
        pvVar2 = (void *)((long)pvVar4 + -0x30);
        if (*(uint *)((long)pvVar4 + -8) != 0xffffffff) {
                    /* try { // try from 0015cd80 to 0015cd8b has its CatchHandler @ 0015cdcc */
          (*(code *)(&PTR_FUN_001b9458)[*(uint *)((long)pvVar4 + -8)])(&uStack_59,pvVar2);
        }
        *(undefined4 *)((long)pvVar4 + -8) = 0xffffffff;
        pvVar4 = pvVar2;
      } while (pvVar2 != pvVar3);
      pvVar2 = (void *)*param_2;
    }
    param_2[1] = pvVar3;
    operator_delete(pvVar2);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0015cdd0  FUN_0015cdd0 =====

void FUN_0015cdd0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_0015ce0c(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015ce0c  FUN_0015ce0c =====

void FUN_0015ce0c(undefined8 *param_1)

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
    if (*(uint *)(puVar2 + 10) != 0xffffffff) {
                    /* try { // try from 0015ce70 to 0015ce7b has its CatchHandler @ 0015ced0 */
      (*(code *)(&PTR_FUN_001b9458)[*(uint *)(puVar2 + 10)])(&uStack_49,puVar2 + 5);
    }
    *(undefined4 *)(puVar2 + 10) = 0xffffffff;
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


// ===== 0015ced4  margelo::nitro::AnyMap::clear =====

/* margelo::nitro::AnyMap::clear() */

void margelo::nitro::AnyMap::clear(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_0015cf0c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015cf0c  FUN_0015cf0c =====

void FUN_0015cf0c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  undefined1 uStack_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1[3] != 0) {
    puVar2 = (undefined8 *)param_1[2];
    while (puVar2 != (undefined8 *)0x0) {
      pvVar5 = (void *)*puVar2;
      if (*(uint *)(puVar2 + 10) != 0xffffffff) {
                    /* try { // try from 0015cf78 to 0015cf83 has its CatchHandler @ 0015cff0 */
        (*(code *)(&PTR_FUN_001b9458)[*(uint *)(puVar2 + 10)])(&uStack_49,puVar2 + 5);
      }
      *(undefined4 *)(puVar2 + 10) = 0xffffffff;
      if ((*(byte *)(puVar2 + 2) & 1) != 0) {
        operator_delete((void *)puVar2[4]);
      }
      operator_delete(puVar2);
      puVar2 = (undefined8 *)pvVar5;
    }
    lVar3 = param_1[1];
    param_1[2] = 0;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    param_1[3] = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015cff4  margelo::nitro::AnyMap::getAllKeys =====

/* margelo::nitro::AnyMap::getAllKeys() const */

void margelo::nitro::AnyMap::getAllKeys(void)

{
  long lVar1;
  long in_x0;
  undefined8 *in_x8;
  long lVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
                    /* try { // try from 0015d028 to 0015d02f has its CatchHandler @ 0015d0c0 */
  FUN_0015d0f8();
  plVar3 = *(long **)(in_x0 + 0x10);
  if (plVar3 != (long *)0x0) {
    this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           in_x8[1];
    do {
      if (this < (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 in_x8[2]) {
        if ((*(byte *)(plVar3 + 2) & 1) == 0) {
          lVar5 = plVar3[3];
          lVar4 = plVar3[2];
          *(long *)(this + 0x10) = plVar3[4];
          *(long *)(this + 8) = lVar5;
          *(long *)this = lVar4;
        }
        else {
                    /* try { // try from 0015d07c to 0015d083 has its CatchHandler @ 0015d0c4 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external(this,(char *)plVar3[4],plVar3[3]);
        }
        this = this + 0x18;
        in_x8[1] = this;
      }
      else {
                    /* try { // try from 0015d088 to 0015d093 has its CatchHandler @ 0015d0d0 */
        this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               FUN_0015d30c();
      }
      plVar3 = (long *)*plVar3;
      in_x8[1] = this;
    } while (plVar3 != (long *)0x0);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015d0f8  FUN_0015d0f8 =====

void FUN_0015d0f8(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  pbVar7 = (byte *)*param_1;
  if ((ulong)((param_1[2] - (long)pbVar7 >> 3) * -0x5555555555555555) < param_2) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      if (*(long *)(lVar2 + 0x28) == lVar4) {
        FUN_0015d5dc();
      }
      goto LAB_0015d25c;
    }
    pbVar8 = (byte *)param_1[1];
    pvVar3 = operator_new(param_2 * 0x18);
    lVar1 = (long)pvVar3 + ((long)pbVar8 - (long)pbVar7);
    pvVar3 = (void *)((long)pvVar3 + param_2 * 0x18);
    lVar5 = lVar1;
    if ((long)pbVar8 - (long)pbVar7 == 0) {
      *param_1 = lVar1;
      param_1[1] = lVar1;
      param_1[2] = (long)pvVar3;
    }
    else {
      do {
        uVar10 = *(undefined8 *)(pbVar8 + -0x10);
        uVar9 = *(undefined8 *)(pbVar8 + -0x18);
        *(undefined8 *)(lVar5 + -8) = *(undefined8 *)(pbVar8 + -8);
        pbVar6 = pbVar8 + -0x18;
        *(undefined8 *)(lVar5 + -0x10) = uVar10;
        *(undefined8 *)(lVar5 + -0x18) = uVar9;
        lVar5 = lVar5 + -0x18;
        pbVar8[-0x10] = 0;
        pbVar8[-0xf] = 0;
        pbVar8[-0xe] = 0;
        pbVar8[-0xd] = 0;
        pbVar8[-0xc] = 0;
        pbVar8[-0xb] = 0;
        pbVar8[-10] = 0;
        pbVar8[-9] = 0;
        pbVar8[-8] = 0;
        pbVar8[-7] = 0;
        pbVar8[-6] = 0;
        pbVar8[-5] = 0;
        pbVar8[-4] = 0;
        pbVar8[-3] = 0;
        pbVar8[-2] = 0;
        pbVar8[-1] = 0;
        pbVar8[-0x18] = 0;
        pbVar8[-0x17] = 0;
        pbVar8[-0x16] = 0;
        pbVar8[-0x15] = 0;
        pbVar8[-0x14] = 0;
        pbVar8[-0x13] = 0;
        pbVar8[-0x12] = 0;
        pbVar8[-0x11] = 0;
        pbVar8 = pbVar6;
      } while (pbVar6 != pbVar7);
      pbVar7 = (byte *)*param_1;
      pbVar8 = (byte *)param_1[1];
      *param_1 = lVar5;
      param_1[1] = lVar1;
      param_1[2] = (long)pvVar3;
      while (pbVar6 = pbVar8, pbVar6 != pbVar7) {
        pbVar8 = pbVar6 + -0x18;
        if ((*pbVar8 & 1) != 0) {
          operator_delete(*(void **)(pbVar6 + -8));
        }
      }
    }
    if (pbVar7 != (byte *)0x0) {
      if (*(long *)(lVar2 + 0x28) == lVar4) {
        operator_delete(pbVar7);
        return;
      }
      goto LAB_0015d25c;
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
LAB_0015d25c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015d260  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init_copy_ctor_external =====

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
        FUN_0015d7fc();
      }
      goto LAB_0015d308;
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
LAB_0015d308:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015d30c  FUN_0015d30c =====

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
FUN_0015d30c(long *param_1,byte *param_2)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  long lVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  long lVar5;
  undefined8 uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar7;
  long lVar8;
  ulong uVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar11;
  undefined8 uVar12;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_80;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_78;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_70;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_68;
  long *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pbVar10 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            *param_1;
  pbVar11 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            param_1[1];
  lVar5 = (long)pbVar11 - (long)pbVar10 >> 3;
  uVar1 = lVar5 * -0x5555555555555555 + 1;
  if (uVar1 < 0xaaaaaaaaaaaaaab) {
    local_60 = param_1 + 2;
    lVar8 = *local_60 - (long)pbVar10 >> 3;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar1 || uVar9 - uVar1 == 0) {
      uVar9 = uVar1;
    }
    if (0x555555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar9 == 0) {
      local_80 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar9) goto LAB_0015d4e8;
      local_80 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 operator_new(uVar9 * 0x18);
    }
    local_78 = local_80 + lVar5 * 8;
    local_68 = local_80 + uVar9 * 0x18;
    local_70 = local_78;
    if ((*param_2 & 1) == 0) {
      uVar12 = *(undefined8 *)param_2;
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(local_78 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)local_78 = uVar12;
      *(undefined8 *)(local_78 + 0x10) = uVar6;
    }
    else {
                    /* try { // try from 0015d3f8 to 0015d3fb has its CatchHandler @ 0015d4fc */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external(local_78,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
      pbVar10 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                *param_1;
      pbVar11 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                param_1[1];
    }
    pbVar2 = local_70 + 0x18;
    pbVar7 = pbVar10;
    if (pbVar11 != pbVar10) {
      do {
        uVar12 = *(undefined8 *)(pbVar11 + -0x10);
        uVar6 = *(undefined8 *)(pbVar11 + -0x18);
        *(undefined8 *)(local_78 + -8) = *(undefined8 *)(pbVar11 + -8);
        pbVar7 = pbVar11 + -0x18;
        *(undefined8 *)(local_78 + -0x10) = uVar12;
        *(undefined8 *)(local_78 + -0x18) = uVar6;
        local_78 = local_78 + -0x18;
        *(undefined8 *)(pbVar11 + -0x10) = 0;
        *(undefined8 *)(pbVar11 + -8) = 0;
        *(undefined8 *)(pbVar11 + -0x18) = 0;
        pbVar11 = pbVar7;
      } while (pbVar7 != pbVar10);
      pbVar10 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                param_1[1];
      pbVar7 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               *param_1;
    }
    lVar5 = param_1[2];
    *param_1 = (long)local_78;
    param_1[1] = (long)pbVar2;
    param_1[2] = (long)local_68;
    local_68 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               lVar5;
    pbVar11 = pbVar10;
    local_80 = pbVar7;
    local_78 = pbVar7;
    while (pbVar4 = pbVar10, pbVar4 != pbVar7) {
      pbVar10 = pbVar4 + -0x18;
      pbVar11 = pbVar7;
      local_70 = pbVar10;
      if (((byte)*pbVar10 & 1) != 0) {
        operator_delete(*(void **)(pbVar4 + -8));
      }
    }
    if (pbVar11 !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0) {
      operator_delete(pbVar11);
    }
    if (*(long *)(lVar3 + 0x28) == local_58) {
      return pbVar2;
    }
  }
  else {
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_0015d520;
    FUN_0015d5dc();
LAB_0015d4e8:
    if (*(long *)(lVar3 + 0x28) == local_58) {
      uVar6 = FUN_0015d614();
                    /* catch() { ... } // from try @ 0015d3f8 with catch @ 0015d4fc */
      FUN_0015d66c(&local_80);
      if (*(long *)(lVar3 + 0x28) == local_58) {
        FUN_00157e74(uVar6);
      }
    }
  }
LAB_0015d520:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015d524  FUN_0015d524 =====

void FUN_0015d524(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  pbVar4 = (byte *)*param_1;
  if (pbVar4 == (byte *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else {
    pbVar3 = (byte *)param_1[1];
    pbVar5 = pbVar4;
    if (pbVar3 != pbVar4) {
      do {
        pbVar5 = pbVar3 + -0x18;
        if ((*pbVar5 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -8));
        }
        pbVar3 = pbVar5;
      } while (pbVar5 != pbVar4);
      pbVar5 = (byte *)*param_1;
    }
    param_1[1] = pbVar4;
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pbVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015d5dc  FUN_0015d5dc =====

void FUN_0015d5dc(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_0015d71c("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015d614  FUN_0015d614 =====

void FUN_0015d614(void)

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
    __cxa_throw(this,PTR_typeinfo_001b9e80,PTR__bad_array_new_length_001b9e60);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015d66c  FUN_0015d66c =====

void FUN_0015d66c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  lVar1 = param_1[1];
  lVar4 = param_1[2];
  while (lVar3 = lVar4, lVar3 != lVar1) {
    param_1[2] = lVar3 + -0x18;
    lVar4 = lVar3 + -0x18;
    if ((*(byte *)(lVar3 + -0x18) & 1) != 0) {
      operator_delete(*(void **)(lVar3 + -8));
      lVar4 = param_1[2];
    }
  }
  if ((void *)*param_1 == (void *)0x0) {
    if (*(long *)(lVar2 + 0x28) == lVar5) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == lVar5) {
    operator_delete((void *)*param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015d71c  FUN_0015d71c =====

void FUN_0015d71c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar2 = __cxa_allocate_exception(0x10);
                    /* try { // try from 0015d74c to 0015d753 has its CatchHandler @ 0015d77c */
  FUN_0015d7a4(uVar2,param_1);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Subroutine does not return */
    __cxa_throw(uVar2,PTR_typeinfo_001b9e70,PTR__length_error_001b9e58);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015d7a4  FUN_0015d7a4 =====

void FUN_0015d7a4(logic_error *param_1,char *param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    std::logic_error::logic_error(param_1,param_2);
    *(undefined **)param_1 = PTR_vtable_001b9e78 + 0x10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015d7fc  FUN_0015d7fc =====

void FUN_0015d7fc(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_0015d71c("basic_string");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015d834  margelo::nitro::AnyMap::isNull =====

/* margelo::nitro::AnyMap::isNull(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

void __thiscall margelo::nitro::AnyMap::isNull(AnyMap *this,basic_string *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_0015c2b8(*(undefined8 *)this,*(undefined8 *)(this + 8),param_1);
  if (uVar2 != 0) {
    uVar2 = (ulong)(*(int *)(uVar2 + 0x50) == 0);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0015d898  margelo::nitro::AnyMap::isDouble =====

/* margelo::nitro::AnyMap::isDouble(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

void __thiscall margelo::nitro::AnyMap::isDouble(AnyMap *this,basic_string *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_0015c2b8(*(undefined8 *)this,*(undefined8 *)(this + 8),param_1);
  if (uVar2 != 0) {
    uVar2 = (ulong)(*(int *)(uVar2 + 0x50) == 2);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0015d8fc  margelo::nitro::AnyMap::isBoolean =====

/* margelo::nitro::AnyMap::isBoolean(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

void __thiscall margelo::nitro::AnyMap::isBoolean(AnyMap *this,basic_string *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_0015c2b8(*(undefined8 *)this,*(undefined8 *)(this + 8),param_1);
  if (uVar2 != 0) {
    uVar2 = (ulong)(*(int *)(uVar2 + 0x50) == 1);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0015d960  margelo::nitro::AnyMap::isInt64 =====

/* margelo::nitro::AnyMap::isInt64(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

void __thiscall margelo::nitro::AnyMap::isInt64(AnyMap *this,basic_string *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_0015c2b8(*(undefined8 *)this,*(undefined8 *)(this + 8),param_1);
  if (uVar2 != 0) {
    uVar2 = (ulong)(*(int *)(uVar2 + 0x50) == 3);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0015d9c4  margelo::nitro::AnyMap::isString =====

/* margelo::nitro::AnyMap::isString(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

void __thiscall margelo::nitro::AnyMap::isString(AnyMap *this,basic_string *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_0015c2b8(*(undefined8 *)this,*(undefined8 *)(this + 8),param_1);
  if (uVar2 != 0) {
    uVar2 = (ulong)(*(int *)(uVar2 + 0x50) == 4);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0015da28  margelo::nitro::AnyMap::isArray =====

/* margelo::nitro::AnyMap::isArray(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

void __thiscall margelo::nitro::AnyMap::isArray(AnyMap *this,basic_string *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_0015c2b8(*(undefined8 *)this,*(undefined8 *)(this + 8),param_1);
  if (uVar2 != 0) {
    uVar2 = (ulong)(*(int *)(uVar2 + 0x50) == 5);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0015da8c  margelo::nitro::AnyMap::isObject =====

/* margelo::nitro::AnyMap::isObject(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

void __thiscall margelo::nitro::AnyMap::isObject(AnyMap *this,basic_string *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_0015c2b8(*(undefined8 *)this,*(undefined8 *)(this + 8),param_1);
  if (uVar2 != 0) {
    uVar2 = (ulong)(*(int *)(uVar2 + 0x50) == 6);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0015daf0  margelo::nitro::AnyMap::getNull =====

/* margelo::nitro::AnyMap::getNull(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

void __thiscall margelo::nitro::AnyMap::getNull(AnyMap *this,basic_string *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  runtime_error *prVar4;
  undefined1 auStack_68 [24];
  basic_string abStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_0015c2b8(*(undefined8 *)this,*(undefined8 *)(this + 8),param_1);
  if (lVar2 == 0) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0015db6c to 0015db7f has its CatchHandler @ 0015dcd0 */
    std::__ndk1::operator+("The key \"",param_1);
                    /* try { // try from 0015db80 to 0015db93 has its CatchHandler @ 0015dcb4 */
    FUN_0015dcfc(abStack_50,auStack_68,"\" does not exist in this Map!");
                    /* try { // try from 0015db98 to 0015dbd3 has its CatchHandler @ 0015dc78 */
    uVar3 = std::runtime_error::runtime_error(prVar4,abStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
    }
  }
  else if (*(int *)(lVar2 + 0x50) == 0) {
    uVar3 = (ulong)*(uint *)(lVar2 + 0x28);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0015dbe8 to 0015dbfb has its CatchHandler @ 0015dccc */
    std::__ndk1::operator+("The value at key \"",param_1);
                    /* try { // try from 0015dbfc to 0015dc0f has its CatchHandler @ 0015dc74 */
    FUN_0015dcfc(abStack_50,auStack_68,"\" is not a null!");
                    /* try { // try from 0015dc14 to 0015dc4f has its CatchHandler @ 0015dc50 */
    uVar3 = std::runtime_error::runtime_error(prVar4,abStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 0015dcfc  FUN_0015dcfc =====

void FUN_0015dcfc(undefined8 *param_1,char *param_2,char *param_3)

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


// ===== 0015dd80  margelo::nitro::AnyMap::getDouble =====

/* margelo::nitro::AnyMap::getDouble(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

void __thiscall margelo::nitro::AnyMap::getDouble(AnyMap *this,basic_string *param_1)

{
  long lVar1;
  long lVar2;
  runtime_error *prVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [24];
  basic_string abStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_0015c2b8(*(undefined8 *)this,*(undefined8 *)(this + 8),param_1);
  if (lVar2 == 0) {
    prVar3 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0015de00 to 0015de13 has its CatchHandler @ 0015df64 */
    std::__ndk1::operator+("The key \"",param_1);
                    /* try { // try from 0015de14 to 0015de27 has its CatchHandler @ 0015df48 */
    FUN_0015dcfc(abStack_50,auStack_68,"\" does not exist in this Map!");
                    /* try { // try from 0015de2c to 0015de67 has its CatchHandler @ 0015df0c */
    uVar4 = std::runtime_error::runtime_error(prVar3,abStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar3,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
    }
  }
  else if (*(int *)(lVar2 + 0x50) == 2) {
    uVar4 = *(undefined8 *)(lVar2 + 0x28);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
    prVar3 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0015de7c to 0015de8f has its CatchHandler @ 0015df60 */
    std::__ndk1::operator+("The value at key \"",param_1);
                    /* try { // try from 0015de90 to 0015dea3 has its CatchHandler @ 0015df08 */
    FUN_0015dcfc(abStack_50,auStack_68,"\" is not a double!");
                    /* try { // try from 0015dea8 to 0015dee3 has its CatchHandler @ 0015dee4 */
    uVar4 = std::runtime_error::runtime_error(prVar3,abStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar3,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 0015df90  margelo::nitro::AnyMap::getBoolean =====

/* margelo::nitro::AnyMap::getBoolean(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

void __thiscall margelo::nitro::AnyMap::getBoolean(AnyMap *this,basic_string *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  runtime_error *prVar4;
  undefined1 auStack_68 [24];
  basic_string abStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_0015c2b8(*(undefined8 *)this,*(undefined8 *)(this + 8),param_1);
  if (lVar2 == 0) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0015e018 to 0015e02b has its CatchHandler @ 0015e17c */
    std::__ndk1::operator+("The key \"",param_1);
                    /* try { // try from 0015e02c to 0015e03f has its CatchHandler @ 0015e160 */
    FUN_0015dcfc(abStack_50,auStack_68,"\" does not exist in this Map!");
                    /* try { // try from 0015e044 to 0015e07f has its CatchHandler @ 0015e124 */
    uVar3 = std::runtime_error::runtime_error(prVar4,abStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
    }
  }
  else if (*(int *)(lVar2 + 0x50) == 1) {
    uVar3 = (ulong)(*(char *)(lVar2 + 0x28) != '\0');
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0015e094 to 0015e0a7 has its CatchHandler @ 0015e178 */
    std::__ndk1::operator+("The value at key \"",param_1);
                    /* try { // try from 0015e0a8 to 0015e0bb has its CatchHandler @ 0015e120 */
    FUN_0015dcfc(abStack_50,auStack_68,"\" is not a bool!");
                    /* try { // try from 0015e0c0 to 0015e0fb has its CatchHandler @ 0015e0fc */
    uVar3 = std::runtime_error::runtime_error(prVar4,abStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 0015e1a8  margelo::nitro::AnyMap::getInt64 =====

/* margelo::nitro::AnyMap::getInt64(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

void __thiscall margelo::nitro::AnyMap::getInt64(AnyMap *this,basic_string *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  runtime_error *prVar4;
  undefined1 auStack_68 [24];
  basic_string abStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_0015c2b8(*(undefined8 *)this,*(undefined8 *)(this + 8),param_1);
  if (lVar2 == 0) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0015e228 to 0015e23b has its CatchHandler @ 0015e38c */
    std::__ndk1::operator+("The key \"",param_1);
                    /* try { // try from 0015e23c to 0015e24f has its CatchHandler @ 0015e370 */
    FUN_0015dcfc(abStack_50,auStack_68,"\" does not exist in this Map!");
                    /* try { // try from 0015e254 to 0015e28f has its CatchHandler @ 0015e334 */
    uVar3 = std::runtime_error::runtime_error(prVar4,abStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
    }
  }
  else if (*(int *)(lVar2 + 0x50) == 3) {
    uVar3 = *(undefined8 *)(lVar2 + 0x28);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0015e2a4 to 0015e2b7 has its CatchHandler @ 0015e388 */
    std::__ndk1::operator+("The value at key \"",param_1);
                    /* try { // try from 0015e2b8 to 0015e2cb has its CatchHandler @ 0015e330 */
    FUN_0015dcfc(abStack_50,auStack_68,"\" is not a int64!");
                    /* try { // try from 0015e2d0 to 0015e30b has its CatchHandler @ 0015e30c */
    uVar3 = std::runtime_error::runtime_error(prVar4,abStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 0015e3b8  margelo::nitro::AnyMap::getString =====

/* margelo::nitro::AnyMap::getString(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

void margelo::nitro::AnyMap::getString(basic_string *param_1)

{
  long lVar1;
  long lVar2;
  runtime_error *prVar3;
  basic_string *in_x1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [24];
  basic_string abStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_0015c2b8(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  if (lVar2 == 0) {
    prVar3 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0015e474 to 0015e487 has its CatchHandler @ 0015e5cc */
    std::__ndk1::operator+("The key \"",in_x1);
                    /* try { // try from 0015e488 to 0015e49b has its CatchHandler @ 0015e5b0 */
    FUN_0015dcfc(abStack_50,auStack_68,"\" does not exist in this Map!");
                    /* try { // try from 0015e4a0 to 0015e4d7 has its CatchHandler @ 0015e574 */
    std::runtime_error::runtime_error(prVar3,abStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar3,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
    }
  }
  else if (*(int *)(lVar2 + 0x50) == 4) {
    if ((*(byte *)(lVar2 + 0x28) & 1) == 0) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
        uVar5 = *(undefined8 *)(lVar2 + 0x30);
        uVar4 = *(undefined8 *)(lVar2 + 0x28);
        *(undefined8 *)(in_x8 + 0x10) = *(undefined8 *)(lVar2 + 0x38);
        *(undefined8 *)(in_x8 + 8) = uVar5;
        *(undefined8 *)in_x8 = uVar4;
        return;
      }
    }
    else if (*(long *)(lVar1 + 0x28) == local_38) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external(in_x8,*(char **)(lVar2 + 0x38),*(ulong *)(lVar2 + 0x30));
      return;
    }
  }
  else {
    prVar3 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0015e4e8 to 0015e4fb has its CatchHandler @ 0015e5c8 */
    std::__ndk1::operator+("The value at key \"",in_x1);
                    /* try { // try from 0015e4fc to 0015e50f has its CatchHandler @ 0015e570 */
    FUN_0015dcfc(abStack_50,auStack_68,"\" is not a string!");
                    /* try { // try from 0015e514 to 0015e54b has its CatchHandler @ 0015e54c */
    std::runtime_error::runtime_error(prVar3,abStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar3,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015e5f4  margelo::nitro::AnyMap::getArray =====

/* margelo::nitro::AnyMap::getArray(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

void margelo::nitro::AnyMap::getArray(basic_string *param_1)

{
  long lVar1;
  long lVar2;
  runtime_error *prVar3;
  basic_string *in_x1;
  undefined8 *in_x8;
  undefined1 auStack_68 [24];
  basic_string abStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_0015c2b8(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  if (lVar2 == 0) {
    prVar3 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0015e690 to 0015e6a3 has its CatchHandler @ 0015e7e8 */
    std::__ndk1::operator+("The key \"",in_x1);
                    /* try { // try from 0015e6a4 to 0015e6b7 has its CatchHandler @ 0015e7cc */
    FUN_0015dcfc(abStack_50,auStack_68,"\" does not exist in this Map!");
                    /* try { // try from 0015e6bc to 0015e6f3 has its CatchHandler @ 0015e790 */
    std::runtime_error::runtime_error(prVar3,abStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar3,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
    }
  }
  else if (*(int *)(lVar2 + 0x50) == 5) {
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      FUN_0015e810();
      return;
    }
  }
  else {
    prVar3 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0015e704 to 0015e717 has its CatchHandler @ 0015e7e4 */
    std::__ndk1::operator+("The value at key \"",in_x1);
                    /* try { // try from 0015e718 to 0015e72b has its CatchHandler @ 0015e78c */
    FUN_0015dcfc(abStack_50,auStack_68,"\" is not an array!");
                    /* try { // try from 0015e730 to 0015e767 has its CatchHandler @ 0015e768 */
    std::runtime_error::runtime_error(prVar3,abStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar3,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015e810  FUN_0015e810 =====

void FUN_0015e810(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 uStack_89;
  undefined8 *local_88;
  undefined1 local_80;
  undefined8 *local_78;
  undefined1 *puStack_70;
  undefined1 **local_68;
  undefined1 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_80 = 0;
  local_88 = param_1;
  if (param_4 != 0) {
    if (0x555555555555555 < param_4) {
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 0015e950 to 0015e953 has its CatchHandler @ 0015e954 */
        uVar4 = FUN_0015e998();
                    /* catch() { ... } // from try @ 0015e870 with catch @ 0015e954
                       catch() { ... } // from try @ 0015e950 with catch @ 0015e954 */
        FUN_0015eaf8(&local_88);
        if (*(long *)(lVar1 + 0x28) == local_58) {
          FUN_00157e74(uVar4);
        }
      }
      goto LAB_0015e994;
    }
                    /* try { // try from 0015e870 to 0015e873 has its CatchHandler @ 0015e954 */
    puVar3 = (undefined1 *)operator_new(param_4 * 0x30);
    *param_1 = puVar3;
    param_1[1] = puVar3;
    local_60 = 0;
    local_78 = param_1 + 2;
    *local_78 = puVar3 + param_4 * 0x30;
    local_68 = &local_98;
    local_a0 = puVar3;
    puStack_70 = (undefined1 *)&local_a0;
    ppuVar2 = &local_a0;
    if (param_2 != param_3) {
      do {
        puStack_70 = (undefined1 *)ppuVar2;
        *puVar3 = 0;
        *(undefined4 *)(puVar3 + 0x28) = 0xffffffff;
        local_98 = puVar3;
        if (*(uint *)(param_2 + 0x28) != 0xffffffff) {
                    /* try { // try from 0015e8ec to 0015e8fb has its CatchHandler @ 0015e95c */
          (*(code *)(&
                    PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<margelo_nitro_NullType,bool,double,long,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<margelo_nitro_AnyValue,std___ndk1_allocator<margelo_nitro_AnyValue>>,std___ndk1_unordered_map<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,margelo_nitro_AnyValue,std___ndk1_hash<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_equal_to<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_allocator<std___ndk1_pair<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___copy_constructor<std___ndk1___variant_detail___traits<marge___td___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>const_>_001b9490
                    )[*(uint *)(param_2 + 0x28)])(&uStack_89,puVar3,param_2);
          *(undefined4 *)(puVar3 + 0x28) = *(undefined4 *)(param_2 + 0x28);
        }
        param_2 = param_2 + 0x30;
        puVar3 = local_98 + 0x30;
        ppuVar2 = (undefined1 **)puStack_70;
      } while (param_2 != param_3);
    }
    param_1[1] = puVar3;
    local_98 = puVar3;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_0015e994:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015e998  FUN_0015e998 =====

void FUN_0015e998(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_0015d71c("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015e9d0  FUN_0015e9d0 =====

void FUN_0015e9d0(long param_1)

{
  long lVar1;
  undefined1 uStack_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(param_1 + 0x28) != 0xffffffff) {
                    /* try { // try from 0015ea08 to 0015ea13 has its CatchHandler @ 0015ea40 */
    (*(code *)(&PTR_FUN_001b9458)[*(uint *)(param_1 + 0x28)])(&uStack_29,param_1);
  }
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015ea44  FUN_0015ea44 =====

void FUN_0015ea44(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uStack_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x18) == '\0') {
    lVar3 = **(long **)(param_1 + 8);
    lVar2 = **(long **)(param_1 + 0x10);
    while (lVar2 != lVar3) {
      if (*(uint *)(lVar2 + -8) != 0xffffffff) {
                    /* try { // try from 0015eae0 to 0015eaeb has its CatchHandler @ 0015eaf4 */
        (*(code *)(&PTR_FUN_001b9458)[*(uint *)(lVar2 + -8)])(&uStack_49,lVar2 + -0x30);
      }
      *(undefined4 *)(lVar2 + -8) = 0xffffffff;
      lVar2 = lVar2 + -0x30;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015eaf8  FUN_0015eaf8 =====

void FUN_0015eaf8(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  undefined1 uStack_59;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 1) == '\0') {
    puVar3 = (undefined8 *)*param_1;
    pvVar4 = (void *)*puVar3;
    if (pvVar4 != (void *)0x0) {
      pvVar5 = (void *)puVar3[1];
      pvVar2 = pvVar4;
      if (pvVar5 != pvVar4) {
        do {
          pvVar2 = (void *)((long)pvVar5 + -0x30);
          if (*(uint *)((long)pvVar5 + -8) != 0xffffffff) {
                    /* try { // try from 0015eb7c to 0015eb87 has its CatchHandler @ 0015ebcc */
            (*(code *)(&PTR_FUN_001b9458)[*(uint *)((long)pvVar5 + -8)])(&uStack_59,pvVar2);
          }
          *(undefined4 *)((long)pvVar5 + -8) = 0xffffffff;
          pvVar5 = pvVar2;
        } while (pvVar2 != pvVar4);
        pvVar2 = *(void **)*param_1;
      }
      puVar3[1] = pvVar4;
      operator_delete(pvVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0015ebd0  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<marge...td::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>const&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,
   0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > >&,
   std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > >&,
   std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,0ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<marge___td::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>const_>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)param_2 = *(undefined4 *)param_3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return (_func_decltype_auto *)param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015ec10  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<marge...td::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>const&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,
   1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > >&,
   std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > >&,
   std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,1ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<marge___td::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>const_>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = *param_3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return (_func_decltype_auto *)param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015ec50  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul,2ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<marge...td::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>const&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul,
   2ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > >&,
   std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > >&,
   std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul,2ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<marge___td::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>const_>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return (_func_decltype_auto *)param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015ec90  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<3ul,3ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<marge...td::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>const&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<3ul,
   3ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > >&,
   std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > >&,
   std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<3ul,3ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<marge___td::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>const_>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return (_func_decltype_auto *)param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015ecd0  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<4ul,4ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<marge...td::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>const&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<4ul,
   4ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > >&,
   std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > >&,
   std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<4ul,4ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<marge___td::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>const_>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  long lVar1;
  _func_decltype_auto *p_Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  if (((byte)*param_3 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      uVar4 = *(undefined8 *)(param_3 + 8);
      uVar3 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 8) = uVar4;
      *(undefined8 *)param_2 = uVar3;
      return (_func_decltype_auto *)param_1;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    p_Var2 = (_func_decltype_auto *)
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
             __init_copy_ctor_external
                       ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)param_2,*(char **)(param_3 + 0x10),*(ulong *)(param_3 + 8));
    return p_Var2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015ed48  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<5ul,5ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<marge...td::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>const&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<5ul,
   5ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > >&,
   std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > >&,
   std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<5ul,5ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<marge___td::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>const_>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  long lVar1;
  _func_decltype_auto *p_Var2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    p_Var2 = (_func_decltype_auto *)
             FUN_0015e810(param_2,*(long *)param_3,*(long *)(param_3 + 8),
                          (*(long *)(param_3 + 8) - *(long *)param_3 >> 4) * -0x5555555555555555);
    return p_Var2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015eda8  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<6ul,6ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<marge...td::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>const&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<6ul,
   6ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > >&,
   std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > >&,
   std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<6ul,6ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<marge___td::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>const_>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  long lVar1;
  _func_decltype_auto *p_Var2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    p_Var2 = (_func_decltype_auto *)FUN_0015ede8(param_2,param_3);
    return p_Var2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015ede8  FUN_0015ede8 =====

void FUN_0015ede8(long *param_1,ulong param_2)

{
  long *plVar1;
  size_t sVar2;
  size_t sVar3;
  char *__s2;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  byte *pbVar16;
  long *plVar17;
  undefined2 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined1 uStack_81;
  long *local_80;
  long *plStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  uVar14 = *(ulong *)(param_2 + 8);
  if (uVar14 - 1 == 0) {
    uVar14 = 2;
  }
  else if ((uVar14 & uVar14 - 1) == 0) {
    uVar15 = 0;
    bVar7 = true;
    if (uVar14 == 0) {
LAB_0015ee74:
      if (bVar7) goto LAB_0015eeec;
      uVar11 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar15 < 3) {
LAB_0015eecc:
        uVar11 = std::__ndk1::__next_prime(uVar11);
      }
      else {
        uVar19 = NEON_cnt(uVar15,1);
        uVar18 = NEON_uaddlv(uVar19,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18)) goto LAB_0015eecc;
        if (1 < uVar11) {
          uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
        }
      }
      if (uVar14 <= uVar11) {
        uVar14 = uVar11;
      }
      if (uVar15 <= uVar14) goto LAB_0015eeec;
    }
  }
  else {
                    /* try { // try from 0015ee5c to 0015eeeb has its CatchHandler @ 0015f2b0 */
    uVar14 = std::__ndk1::__next_prime(uVar14);
    uVar15 = param_1[1];
    bVar7 = uVar15 <= uVar14;
    if (uVar14 <= uVar15) goto LAB_0015ee74;
  }
  FUN_0015f314(param_1,uVar14);
LAB_0015eeec:
  plVar17 = *(long **)(param_2 + 0x10);
  if (plVar17 != (long *)0x0) {
    plVar1 = param_1 + 2;
    do {
      pbVar16 = (byte *)(plVar17 + 2);
      sVar3 = plVar17[3];
      __s2 = (char *)plVar17[4];
      if ((*pbVar16 & 1) == 0) {
        __s2 = (char *)((long)plVar17 + 0x11);
        sVar3 = (ulong)(*pbVar16 >> 1);
      }
      uVar14 = FUN_0015c450(__s2,sVar3);
      uVar15 = param_1[1];
      if (uVar15 != 0) {
        uVar19 = NEON_cnt(uVar15,1);
        uVar18 = NEON_uaddlv(uVar19,1);
        uVar11 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
        if (uVar11 < 2) {
          param_2 = uVar15 - 1 & uVar14;
        }
        else {
          param_2 = uVar14;
          if (uVar15 <= uVar14) {
            uVar10 = 0;
            if (uVar15 != 0) {
              uVar10 = uVar14 / uVar15;
            }
            param_2 = uVar14 - uVar10 * uVar15;
          }
        }
        plVar9 = *(long **)(*param_1 + param_2 * 8);
        if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
          do {
            uVar10 = plVar9[1];
            if (uVar10 == uVar14) {
              bVar4 = *(byte *)(plVar9 + 2);
              uVar10 = (ulong)(bVar4 >> 1);
              sVar2 = uVar10;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar9[3];
              }
              if (sVar2 == sVar3) {
                if ((bVar4 & 1) == 0) {
                  if (bVar4 < 2) goto LAB_0015ef18;
                  pcVar12 = (char *)((long)plVar9 + 0x11);
                  pcVar13 = __s2;
                  while (*pcVar12 == *pcVar13) {
                    uVar10 = uVar10 - 1;
                    pcVar12 = pcVar12 + 1;
                    pcVar13 = pcVar13 + 1;
                    if (uVar10 == 0) goto LAB_0015ef18;
                  }
                }
                else {
                  iVar8 = memcmp((void *)plVar9[4],__s2,plVar9[3]);
                  if (iVar8 == 0) goto LAB_0015ef18;
                }
              }
            }
            else {
              if (uVar11 < 2) {
                uVar10 = uVar10 & uVar15 - 1;
              }
              else if (uVar15 <= uVar10) {
                uVar5 = 0;
                if (uVar15 != 0) {
                  uVar5 = uVar10 / uVar15;
                }
                uVar10 = uVar10 - uVar5 * uVar15;
              }
              if (uVar10 != param_2) break;
            }
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
      }
                    /* try { // try from 0015f058 to 0015f05f has its CatchHandler @ 0015f2e8 */
      plVar9 = (long *)operator_new(0x58);
      *plVar9 = 0;
      plVar9[1] = uVar14;
      local_70 = 0;
      local_80 = plVar9;
      plStack_78 = plVar1;
      if ((*pbVar16 & 1) == 0) {
        lVar21 = plVar17[3];
        lVar20 = *(long *)pbVar16;
        plVar9[4] = plVar17[4];
        plVar9[3] = lVar21;
        plVar9[2] = lVar20;
      }
      else {
                    /* try { // try from 0015f094 to 0015f09b has its CatchHandler @ 0015f2b4 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(plVar9 + 2),(char *)plVar17[4],plVar17[3]);
      }
      *(undefined1 *)(plVar9 + 5) = 0;
      *(undefined4 *)(plVar9 + 10) = 0xffffffff;
      if (*(uint *)(plVar17 + 10) != 0xffffffff) {
                    /* try { // try from 0015f0c4 to 0015f0d3 has its CatchHandler @ 0015f2c0 */
        (*(code *)(&
                  PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<margelo_nitro_NullType,bool,double,long,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<margelo_nitro_AnyValue,std___ndk1_allocator<margelo_nitro_AnyValue>>,std___ndk1_unordered_map<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,margelo_nitro_AnyValue,std___ndk1_hash<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_equal_to<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_allocator<std___ndk1_pair<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___copy_constructor<std___ndk1___variant_detail___traits<marge___td___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>const_>_001b9490
                  )[*(uint *)(plVar17 + 10)])(&uStack_81,plVar9 + 5,plVar17 + 5);
        *(int *)(plVar9 + 10) = (int)plVar17[10];
      }
      local_70 = 1;
      if ((uVar15 == 0) || (*(float *)(param_1 + 4) * (float)uVar15 < (float)(param_1[3] + 1))) {
        if (uVar15 < 3) {
          uVar11 = 1;
        }
        else {
          uVar11 = (ulong)((uVar15 & uVar15 - 1) != 0);
        }
        uVar11 = uVar11 | uVar15 << 1;
        uVar15 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar11 <= uVar15) {
          uVar11 = uVar15;
        }
        if (uVar11 - 1 == 0) {
          uVar11 = 2;
        }
        else if ((uVar11 & uVar11 - 1) != 0) {
                    /* try { // try from 0015f154 to 0015f1d7 has its CatchHandler @ 0015f2b8 */
          uVar11 = std::__ndk1::__next_prime(uVar11);
        }
        uVar15 = param_1[1];
        if (uVar15 < uVar11) {
LAB_0015f16c:
          FUN_0015f314(param_1,uVar11);
        }
        else if (uVar11 < uVar15) {
          uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
          if (uVar15 < 3) {
LAB_0015f1d4:
            uVar10 = std::__ndk1::__next_prime(uVar10);
          }
          else {
            uVar19 = NEON_cnt(uVar15,1);
            uVar18 = NEON_uaddlv(uVar19,1);
            if (1 < (uint)CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18)) goto LAB_0015f1d4;
            if (1 < uVar10) {
              uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
            }
          }
          if (uVar11 <= uVar10) {
            uVar11 = uVar10;
          }
          if (uVar11 < uVar15) goto LAB_0015f16c;
        }
        uVar15 = param_1[1];
        if ((uVar15 & uVar15 - 1) == 0) {
          param_2 = uVar15 - 1 & uVar14;
        }
        else {
          param_2 = uVar14;
          if (uVar15 <= uVar14) {
            uVar11 = 0;
            if (uVar15 != 0) {
              uVar11 = uVar14 / uVar15;
            }
            param_2 = uVar14 - uVar11 * uVar15;
          }
        }
      }
      plVar9 = *(long **)(*param_1 + param_2 * 8);
      if (plVar9 == (long *)0x0) {
        *local_80 = param_1[2];
        param_1[2] = (long)local_80;
        *(long **)(*param_1 + param_2 * 8) = plVar1;
        if (*local_80 != 0) {
          uVar14 = *(ulong *)(*local_80 + 8);
          if ((uVar15 & uVar15 - 1) == 0) {
            uVar14 = uVar14 & uVar15 - 1;
          }
          else if (uVar15 <= uVar14) {
            uVar11 = 0;
            if (uVar15 != 0) {
              uVar11 = uVar14 / uVar15;
            }
            uVar14 = uVar14 - uVar11 * uVar15;
          }
          plVar9 = (long *)(*param_1 + uVar14 * 8);
          goto LAB_0015ef08;
        }
      }
      else {
        *local_80 = *plVar9;
LAB_0015ef08:
        *plVar9 = (long)local_80;
      }
      param_1[3] = param_1[3] + 1;
LAB_0015ef18:
      plVar17 = (long *)*plVar17;
    } while (plVar17 != (long *)0x0);
  }
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0015f314  FUN_0015f314 =====

void FUN_0015f314(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  if (param_2 == 0) {
    pvVar3 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      if (*(long *)(lVar2 + 0x28) == lVar4) {
        FUN_0015d614();
      }
      goto LAB_0015f4ac;
    }
    pvVar3 = operator_new(param_2 << 3);
    pvVar5 = (void *)*param_1;
    *param_1 = (long)pvVar3;
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
    }
    uVar6 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar6 * 8) = 0;
      uVar6 = uVar6 + 1;
    } while (param_2 != uVar6);
    plVar7 = (long *)param_1[2];
    if (plVar7 != (long *)0x0) {
      uVar6 = plVar7[1];
      uVar12 = NEON_cnt(param_2,1);
      uVar11 = NEON_uaddlv(uVar12,1);
      uVar8 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
      if (uVar8 < 2) {
        uVar6 = uVar6 & param_2 - 1;
      }
      else if (param_2 <= uVar6) {
        uVar10 = 0;
        if (param_2 != 0) {
          uVar10 = uVar6 / param_2;
        }
        uVar6 = uVar6 - uVar10 * param_2;
      }
      *(long **)(*param_1 + uVar6 * 8) = param_1 + 2;
      plVar9 = (long *)*plVar7;
      if (plVar9 != (long *)0x0) {
        do {
          uVar10 = plVar9[1];
          if (uVar8 < 2) {
            uVar10 = uVar10 & param_2 - 1;
          }
          else if (param_2 <= uVar10) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar10 / param_2;
            }
            uVar10 = uVar10 - uVar1 * param_2;
          }
          if (uVar10 != uVar6) {
            if (*(long *)(*param_1 + uVar10 * 8) == 0) {
              *(long **)(*param_1 + uVar10 * 8) = plVar7;
              uVar6 = uVar10;
            }
            else {
              *plVar7 = *plVar9;
              *plVar9 = **(long **)(*param_1 + uVar10 * 8);
              **(undefined8 **)(*param_1 + uVar10 * 8) = plVar9;
              plVar9 = plVar7;
            }
          }
          plVar7 = plVar9;
          plVar9 = (long *)*plVar7;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
LAB_0015f4ac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015f4b0  FUN_0015f4b0 =====

void FUN_0015f4b0(undefined8 *param_1)

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
      if (*(uint *)((long)pvVar2 + 0x50) != 0xffffffff) {
                    /* try { // try from 0015f4f8 to 0015f503 has its CatchHandler @ 0015f548 */
        (*(code *)(&PTR_FUN_001b9458)[*(uint *)((long)pvVar2 + 0x50)])
                  (&uStack_29,(long)pvVar2 + 0x28);
      }
      *(undefined4 *)((long)pvVar2 + 0x50) = 0xffffffff;
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


// ===== 0015f54c  margelo::nitro::AnyMap::getObject =====

/* margelo::nitro::AnyMap::getObject(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

void margelo::nitro::AnyMap::getObject(basic_string *param_1)

{
  long lVar1;
  long lVar2;
  runtime_error *prVar3;
  basic_string *in_x1;
  undefined1 auStack_68 [24];
  basic_string abStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_0015c2b8(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  if (lVar2 == 0) {
    prVar3 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0015f5cc to 0015f5df has its CatchHandler @ 0015f724 */
    std::__ndk1::operator+("The key \"",in_x1);
                    /* try { // try from 0015f5e0 to 0015f5f3 has its CatchHandler @ 0015f708 */
    FUN_0015dcfc(abStack_50,auStack_68,"\" does not exist in this Map!");
                    /* try { // try from 0015f5f8 to 0015f62f has its CatchHandler @ 0015f6cc */
    std::runtime_error::runtime_error(prVar3,abStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar3,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
    }
  }
  else if (*(int *)(lVar2 + 0x50) == 6) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      FUN_0015ede8();
      return;
    }
  }
  else {
    prVar3 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0015f640 to 0015f653 has its CatchHandler @ 0015f720 */
    std::__ndk1::operator+("The value at key \"",in_x1);
                    /* try { // try from 0015f654 to 0015f667 has its CatchHandler @ 0015f6c8 */
    FUN_0015dcfc(abStack_50,auStack_68,"\" is not an object!");
                    /* try { // try from 0015f66c to 0015f6a3 has its CatchHandler @ 0015f6a4 */
    std::runtime_error::runtime_error(prVar3,abStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar3,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015f74c  margelo::nitro::AnyMap::getAny =====

/* margelo::nitro::AnyMap::getAny(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

void margelo::nitro::AnyMap::getAny(basic_string *param_1)

{
  long lVar1;
  long lVar2;
  runtime_error *this;
  basic_string *in_x1;
  undefined1 *in_x8;
  undefined1 auStack_68 [24];
  basic_string abStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_0015c2b8(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  if (lVar2 == 0) {
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0015f7f8 to 0015f80b has its CatchHandler @ 0015f8a8 */
    std::__ndk1::operator+("The key \"",in_x1);
                    /* try { // try from 0015f80c to 0015f81f has its CatchHandler @ 0015f890 */
    FUN_0015dcfc(abStack_50,auStack_68,"\" does not exist in this Map!");
                    /* try { // try from 0015f824 to 0015f85b has its CatchHandler @ 0015f85c */
    std::runtime_error::runtime_error(this,abStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
    }
  }
  else {
    *in_x8 = 0;
    *(undefined4 *)(in_x8 + 0x28) = 0xffffffff;
    if (*(uint *)(lVar2 + 0x50) != 0xffffffff) {
                    /* try { // try from 0015f7b0 to 0015f7bf has its CatchHandler @ 0015f8b8 */
      (*(code *)(&
                PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<margelo_nitro_NullType,bool,double,long,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<margelo_nitro_AnyValue,std___ndk1_allocator<margelo_nitro_AnyValue>>,std___ndk1_unordered_map<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,margelo_nitro_AnyValue,std___ndk1_hash<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_equal_to<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_allocator<std___ndk1_pair<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___copy_constructor<std___ndk1___variant_detail___traits<marge___td___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>const_>_001b9490
                )[*(uint *)(lVar2 + 0x50)])(abStack_50);
      *(undefined4 *)(in_x8 + 0x28) = *(undefined4 *)(lVar2 + 0x50);
    }
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015f8e0  margelo::nitro::AnyMap::setNull =====

/* margelo::nitro::AnyMap::setNull(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall margelo::nitro::AnyMap::setNull(AnyMap *this,basic_string *param_1)

{
  AnyMap *pAVar1;
  basic_string *pbVar2;
  uint uVar3;
  basic_string bVar4;
  byte bVar5;
  long lVar6;
  basic_string *__s2;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  basic_string *pbVar15;
  ulong uVar16;
  basic_string *pbVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong unaff_x28;
  undefined2 uVar21;
  undefined8 uVar22;
  float fVar23;
  long *local_80;
  AnyMap *pAStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  bVar4 = *param_1;
  uVar18 = *(ulong *)(param_1 + 8);
  pbVar2 = *(basic_string **)(param_1 + 0x10);
  uVar16 = uVar18;
  __s2 = pbVar2;
  if (((byte)bVar4 & 1) == 0) {
    uVar16 = (ulong)((byte)bVar4 >> 1);
    __s2 = param_1 + 1;
  }
  uVar8 = FUN_0015c450(__s2,uVar16);
  uVar20 = *(ulong *)(this + 8);
  if (uVar20 != 0) {
    uVar22 = NEON_cnt(uVar20,1);
    uVar21 = NEON_uaddlv(uVar22,1);
    uVar19 = CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar21) & 0xffffffff;
    if (uVar19 < 2) {
      unaff_x28 = uVar20 - 1 & uVar8;
    }
    else {
      unaff_x28 = uVar8;
      if (uVar20 <= uVar8) {
        uVar10 = 0;
        if (uVar20 != 0) {
          uVar10 = uVar8 / uVar20;
        }
        unaff_x28 = uVar8 - uVar10 * uVar20;
      }
    }
    plVar9 = *(long **)(*(long *)this + unaff_x28 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar8) {
          bVar5 = *(byte *)(plVar9 + 2);
          uVar11 = (ulong)(bVar5 >> 1);
          uVar10 = uVar11;
          if ((bVar5 & 1) != 0) {
            uVar10 = plVar9[3];
          }
          if (uVar10 == uVar16) {
            if ((bVar5 & 1) == 0) {
              if (bVar5 < 2) {
LAB_0015fa80:
                uVar3 = *(uint *)(plVar9 + 10);
                if (uVar3 != 0xffffffff) {
                  if (uVar3 == 0) {
                    *(undefined4 *)(plVar9 + 5) = 0;
                    goto LAB_0015fca0;
                  }
                    /* try { // try from 0015fcdc to 0015fce7 has its CatchHandler @ 0015fcf4 */
                  (*(code *)(&PTR_FUN_001b9458)[uVar3])(&local_80,plVar9 + 5);
                }
                *(undefined4 *)(plVar9 + 5) = 0;
                *(undefined4 *)(plVar9 + 10) = 0;
                goto LAB_0015fca0;
              }
              pbVar15 = (basic_string *)((long)plVar9 + 0x11);
              pbVar17 = __s2;
              while (*pbVar15 == *pbVar17) {
                uVar11 = uVar11 - 1;
                pbVar15 = pbVar15 + 1;
                pbVar17 = pbVar17 + 1;
                if (uVar11 == 0) goto LAB_0015fa80;
              }
            }
            else {
              iVar7 = memcmp((void *)plVar9[4],__s2,plVar9[3]);
              if (iVar7 == 0) goto LAB_0015fa80;
            }
          }
        }
        else {
          if (uVar19 < 2) {
            uVar10 = uVar10 & uVar20 - 1;
          }
          else if (uVar20 <= uVar10) {
            uVar11 = 0;
            if (uVar20 != 0) {
              uVar11 = uVar10 / uVar20;
            }
            uVar10 = uVar10 - uVar11 * uVar20;
          }
          if (uVar10 != unaff_x28) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  pAVar1 = this + 0x10;
  plVar9 = (long *)operator_new(0x58);
  local_70 = 0;
  *plVar9 = 0;
  plVar9[1] = uVar8;
  local_80 = plVar9;
  pAStack_78 = pAVar1;
  if (((byte)bVar4 & 1) == 0) {
    lVar14 = *(long *)param_1;
    lVar12 = *(long *)(param_1 + 0x10);
    plVar9[3] = *(long *)(param_1 + 8);
    plVar9[2] = lVar14;
    plVar9[4] = lVar12;
  }
  else {
                    /* try { // try from 0015fadc to 0015faeb has its CatchHandler @ 0015fcfc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (plVar9 + 2),(char *)pbVar2,uVar18);
  }
  lVar12 = *(long *)(this + 0x18);
  fVar23 = *(float *)(this + 0x20);
  *(undefined4 *)(plVar9 + 5) = 0;
  *(undefined4 *)(plVar9 + 10) = 0;
  local_70 = 1;
  if ((uVar20 == 0) || (fVar23 * (float)uVar20 < (float)(lVar12 + 1))) {
    if (uVar20 < 3) {
      uVar16 = 1;
    }
    else {
      uVar16 = (ulong)((uVar20 & uVar20 - 1) != 0);
    }
    uVar16 = uVar16 | uVar20 << 1;
    uVar18 = (ulong)((float)(lVar12 + 1) / fVar23);
    if (uVar16 <= uVar18) {
      uVar16 = uVar18;
    }
    if (uVar16 - 1 == 0) {
      uVar16 = 2;
    }
    else if ((uVar16 & uVar16 - 1) != 0) {
                    /* try { // try from 0015fb6c to 0015fbef has its CatchHandler @ 0015fcf8 */
      uVar16 = std::__ndk1::__next_prime(uVar16);
    }
    uVar18 = *(ulong *)(this + 8);
    if (uVar18 < uVar16) {
LAB_0015fb84:
      FUN_0015f314(this,uVar16);
    }
    else if (uVar16 < uVar18) {
      uVar20 = (ulong)((float)*(ulong *)(this + 0x18) / *(float *)(this + 0x20));
      if (uVar18 < 3) {
LAB_0015fbec:
        uVar20 = std::__ndk1::__next_prime(uVar20);
      }
      else {
        uVar22 = NEON_cnt(uVar18,1);
        uVar21 = NEON_uaddlv(uVar22,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar21)) goto LAB_0015fbec;
        if (1 < uVar20) {
          uVar20 = 1L << (-LZCOUNT(uVar20 - 1) & 0x3fU);
        }
      }
      if (uVar16 <= uVar20) {
        uVar16 = uVar20;
      }
      if (uVar16 < uVar18) goto LAB_0015fb84;
    }
    uVar20 = *(ulong *)(this + 8);
    if ((uVar20 & uVar20 - 1) == 0) {
      unaff_x28 = uVar20 - 1 & uVar8;
    }
    else {
      unaff_x28 = uVar8;
      if (uVar20 <= uVar8) {
        uVar16 = 0;
        if (uVar20 != 0) {
          uVar16 = uVar8 / uVar20;
        }
        unaff_x28 = uVar8 - uVar16 * uVar20;
      }
    }
  }
  lVar12 = *(long *)this;
  plVar13 = *(long **)(lVar12 + unaff_x28 * 8);
  if (plVar13 == (long *)0x0) {
    lVar14 = *(long *)pAVar1;
    *(long **)pAVar1 = plVar9;
    *plVar9 = lVar14;
    *(AnyMap **)(lVar12 + unaff_x28 * 8) = pAVar1;
    if (*plVar9 == 0) goto LAB_0015fc94;
    uVar16 = *(ulong *)(*plVar9 + 8);
    if ((uVar20 & uVar20 - 1) == 0) {
      uVar16 = uVar16 & uVar20 - 1;
    }
    else if (uVar20 <= uVar16) {
      uVar18 = 0;
      if (uVar20 != 0) {
        uVar18 = uVar16 / uVar20;
      }
      uVar16 = uVar16 - uVar18 * uVar20;
    }
    plVar13 = (long *)(*(long *)this + uVar16 * 8);
  }
  else {
    *plVar9 = *plVar13;
  }
  *plVar13 = (long)plVar9;
LAB_0015fc94:
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
LAB_0015fca0:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0015fd24  margelo::nitro::AnyMap::setDouble =====

/* margelo::nitro::AnyMap::setDouble(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, double) */

void __thiscall margelo::nitro::AnyMap::setDouble(AnyMap *this,basic_string *param_1,double param_2)

{
  AnyMap *pAVar1;
  basic_string *pbVar2;
  uint uVar3;
  basic_string bVar4;
  byte bVar5;
  long lVar6;
  basic_string *__s2;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  basic_string *pbVar15;
  ulong uVar16;
  basic_string *pbVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong unaff_x28;
  undefined2 uVar21;
  undefined8 uVar22;
  float fVar23;
  long *local_90;
  AnyMap *pAStack_88;
  undefined1 local_80;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  bVar4 = *param_1;
  uVar18 = *(ulong *)(param_1 + 8);
  pbVar2 = *(basic_string **)(param_1 + 0x10);
  uVar16 = uVar18;
  __s2 = pbVar2;
  if (((byte)bVar4 & 1) == 0) {
    uVar16 = (ulong)((byte)bVar4 >> 1);
    __s2 = param_1 + 1;
  }
  uVar8 = FUN_0015c450(__s2,uVar16);
  uVar20 = *(ulong *)(this + 8);
  if (uVar20 != 0) {
    uVar22 = NEON_cnt(uVar20,1);
    uVar21 = NEON_uaddlv(uVar22,1);
    uVar19 = CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar21) & 0xffffffff;
    if (uVar19 < 2) {
      unaff_x28 = uVar20 - 1 & uVar8;
    }
    else {
      unaff_x28 = uVar8;
      if (uVar20 <= uVar8) {
        uVar10 = 0;
        if (uVar20 != 0) {
          uVar10 = uVar8 / uVar20;
        }
        unaff_x28 = uVar8 - uVar10 * uVar20;
      }
    }
    plVar9 = *(long **)(*(long *)this + unaff_x28 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar8) {
          bVar5 = *(byte *)(plVar9 + 2);
          uVar11 = (ulong)(bVar5 >> 1);
          uVar10 = uVar11;
          if ((bVar5 & 1) != 0) {
            uVar10 = plVar9[3];
          }
          if (uVar10 == uVar16) {
            if ((bVar5 & 1) == 0) {
              if (bVar5 < 2) {
LAB_0015fecc:
                uVar3 = *(uint *)(plVar9 + 10);
                if (uVar3 != 0xffffffff) {
                  if (uVar3 == 2) {
                    plVar9[5] = (long)param_2;
                    goto LAB_001600ec;
                  }
                    /* try { // try from 0016012c to 00160137 has its CatchHandler @ 0016014c */
                  (*(code *)(&PTR_FUN_001b9458)[uVar3])(&local_90,plVar9 + 5);
                }
                plVar9[5] = (long)param_2;
                *(undefined4 *)(plVar9 + 10) = 2;
                goto LAB_001600ec;
              }
              pbVar15 = (basic_string *)((long)plVar9 + 0x11);
              pbVar17 = __s2;
              while (*pbVar15 == *pbVar17) {
                uVar11 = uVar11 - 1;
                pbVar15 = pbVar15 + 1;
                pbVar17 = pbVar17 + 1;
                if (uVar11 == 0) goto LAB_0015fecc;
              }
            }
            else {
              iVar7 = memcmp((void *)plVar9[4],__s2,plVar9[3]);
              if (iVar7 == 0) goto LAB_0015fecc;
            }
          }
        }
        else {
          if (uVar19 < 2) {
            uVar10 = uVar10 & uVar20 - 1;
          }
          else if (uVar20 <= uVar10) {
            uVar11 = 0;
            if (uVar20 != 0) {
              uVar11 = uVar10 / uVar20;
            }
            uVar10 = uVar10 - uVar11 * uVar20;
          }
          if (uVar10 != unaff_x28) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  pAVar1 = this + 0x10;
  plVar9 = (long *)operator_new(0x58);
  local_80 = 0;
  *plVar9 = 0;
  plVar9[1] = uVar8;
  local_90 = plVar9;
  pAStack_88 = pAVar1;
  if (((byte)bVar4 & 1) == 0) {
    lVar14 = *(long *)param_1;
    lVar12 = *(long *)(param_1 + 0x10);
    plVar9[3] = *(long *)(param_1 + 8);
    plVar9[2] = lVar14;
    plVar9[4] = lVar12;
  }
  else {
                    /* try { // try from 0015ff24 to 0015ff33 has its CatchHandler @ 00160154 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (plVar9 + 2),(char *)pbVar2,uVar18);
  }
  lVar12 = *(long *)(this + 0x18);
  fVar23 = *(float *)(this + 0x20);
  plVar9[5] = (long)param_2;
  *(undefined4 *)(plVar9 + 10) = 2;
  local_80 = 1;
  if ((uVar20 == 0) || (fVar23 * (float)uVar20 < (float)(lVar12 + 1))) {
    if (uVar20 < 3) {
      uVar16 = 1;
    }
    else {
      uVar16 = (ulong)((uVar20 & uVar20 - 1) != 0);
    }
    uVar16 = uVar16 | uVar20 << 1;
    uVar18 = (ulong)((float)(lVar12 + 1) / fVar23);
    if (uVar16 <= uVar18) {
      uVar16 = uVar18;
    }
    if (uVar16 - 1 == 0) {
      uVar16 = 2;
    }
    else if ((uVar16 & uVar16 - 1) != 0) {
                    /* try { // try from 0015ffb8 to 0016003b has its CatchHandler @ 00160150 */
      uVar16 = std::__ndk1::__next_prime(uVar16);
    }
    uVar18 = *(ulong *)(this + 8);
    if (uVar18 < uVar16) {
LAB_0015ffd0:
      FUN_0015f314(this,uVar16);
    }
    else if (uVar16 < uVar18) {
      uVar20 = (ulong)((float)*(ulong *)(this + 0x18) / *(float *)(this + 0x20));
      if (uVar18 < 3) {
LAB_00160038:
        uVar20 = std::__ndk1::__next_prime(uVar20);
      }
      else {
        uVar22 = NEON_cnt(uVar18,1);
        uVar21 = NEON_uaddlv(uVar22,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar21)) goto LAB_00160038;
        if (1 < uVar20) {
          uVar20 = 1L << (-LZCOUNT(uVar20 - 1) & 0x3fU);
        }
      }
      if (uVar16 <= uVar20) {
        uVar16 = uVar20;
      }
      if (uVar16 < uVar18) goto LAB_0015ffd0;
    }
    uVar20 = *(ulong *)(this + 8);
    if ((uVar20 & uVar20 - 1) == 0) {
      unaff_x28 = uVar20 - 1 & uVar8;
    }
    else {
      unaff_x28 = uVar8;
      if (uVar20 <= uVar8) {
        uVar16 = 0;
        if (uVar20 != 0) {
          uVar16 = uVar8 / uVar20;
        }
        unaff_x28 = uVar8 - uVar16 * uVar20;
      }
    }
  }
  lVar12 = *(long *)this;
  plVar13 = *(long **)(lVar12 + unaff_x28 * 8);
  if (plVar13 == (long *)0x0) {
    lVar14 = *(long *)pAVar1;
    *(long **)pAVar1 = plVar9;
    *plVar9 = lVar14;
    *(AnyMap **)(lVar12 + unaff_x28 * 8) = pAVar1;
    if (*plVar9 == 0) goto LAB_001600e0;
    uVar16 = *(ulong *)(*plVar9 + 8);
    if ((uVar20 & uVar20 - 1) == 0) {
      uVar16 = uVar16 & uVar20 - 1;
    }
    else if (uVar20 <= uVar16) {
      uVar18 = 0;
      if (uVar20 != 0) {
        uVar18 = uVar16 / uVar20;
      }
      uVar16 = uVar16 - uVar18 * uVar20;
    }
    plVar13 = (long *)(*(long *)this + uVar16 * 8);
  }
  else {
    *plVar9 = *plVar13;
  }
  *plVar13 = (long)plVar9;
LAB_001600e0:
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
LAB_001600ec:
  if (*(long *)(lVar6 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0016017c  margelo::nitro::AnyMap::setBoolean =====

/* margelo::nitro::AnyMap::setBoolean(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool) */

void __thiscall margelo::nitro::AnyMap::setBoolean(AnyMap *this,basic_string *param_1,bool param_2)

{
  AnyMap *pAVar1;
  basic_string *pbVar2;
  uint uVar3;
  basic_string bVar4;
  byte bVar5;
  long lVar6;
  basic_string *__s2;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  basic_string *pbVar15;
  ulong uVar16;
  basic_string *pbVar17;
  ulong uVar18;
  ulong uVar19;
  ulong unaff_x20;
  ulong uVar20;
  undefined2 uVar21;
  undefined8 uVar22;
  float fVar23;
  long *local_80;
  AnyMap *pAStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  bVar4 = *param_1;
  uVar18 = *(ulong *)(param_1 + 8);
  pbVar2 = *(basic_string **)(param_1 + 0x10);
  uVar16 = uVar18;
  __s2 = pbVar2;
  if (((byte)bVar4 & 1) == 0) {
    uVar16 = (ulong)((byte)bVar4 >> 1);
    __s2 = param_1 + 1;
  }
  uVar8 = FUN_0015c450(__s2,uVar16);
  uVar20 = *(ulong *)(this + 8);
  if (uVar20 != 0) {
    uVar22 = NEON_cnt(uVar20,1);
    uVar21 = NEON_uaddlv(uVar22,1);
    uVar19 = CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar21) & 0xffffffff;
    if (uVar19 < 2) {
      unaff_x20 = uVar20 - 1 & uVar8;
    }
    else {
      unaff_x20 = uVar8;
      if (uVar20 <= uVar8) {
        uVar10 = 0;
        if (uVar20 != 0) {
          uVar10 = uVar8 / uVar20;
        }
        unaff_x20 = uVar8 - uVar10 * uVar20;
      }
    }
    plVar9 = *(long **)(*(long *)this + unaff_x20 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar8) {
          bVar5 = *(byte *)(plVar9 + 2);
          uVar11 = (ulong)(bVar5 >> 1);
          uVar10 = uVar11;
          if ((bVar5 & 1) != 0) {
            uVar10 = plVar9[3];
          }
          if (uVar10 == uVar16) {
            if ((bVar5 & 1) == 0) {
              if (bVar5 < 2) {
LAB_00160320:
                uVar3 = *(uint *)(plVar9 + 10);
                if (uVar3 != 0xffffffff) {
                  if (uVar3 == 1) {
                    *(bool *)(plVar9 + 5) = param_2;
                    goto LAB_0016053c;
                  }
                    /* try { // try from 00160578 to 00160583 has its CatchHandler @ 00160598 */
                  (*(code *)(&PTR_FUN_001b9458)[uVar3])(&local_80,plVar9 + 5);
                }
                *(bool *)(plVar9 + 5) = param_2;
                *(undefined4 *)(plVar9 + 10) = 1;
                goto LAB_0016053c;
              }
              pbVar15 = (basic_string *)((long)plVar9 + 0x11);
              pbVar17 = __s2;
              while (*pbVar15 == *pbVar17) {
                uVar11 = uVar11 - 1;
                pbVar15 = pbVar15 + 1;
                pbVar17 = pbVar17 + 1;
                if (uVar11 == 0) goto LAB_00160320;
              }
            }
            else {
              iVar7 = memcmp((void *)plVar9[4],__s2,plVar9[3]);
              if (iVar7 == 0) goto LAB_00160320;
            }
          }
        }
        else {
          if (uVar19 < 2) {
            uVar10 = uVar10 & uVar20 - 1;
          }
          else if (uVar20 <= uVar10) {
            uVar11 = 0;
            if (uVar20 != 0) {
              uVar11 = uVar10 / uVar20;
            }
            uVar10 = uVar10 - uVar11 * uVar20;
          }
          if (uVar10 != unaff_x20) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  pAVar1 = this + 0x10;
  plVar9 = (long *)operator_new(0x58);
  local_70 = 0;
  *plVar9 = 0;
  plVar9[1] = uVar8;
  local_80 = plVar9;
  pAStack_78 = pAVar1;
  if (((byte)bVar4 & 1) == 0) {
    lVar14 = *(long *)param_1;
    lVar12 = *(long *)(param_1 + 0x10);
    plVar9[3] = *(long *)(param_1 + 8);
    plVar9[2] = lVar14;
    plVar9[4] = lVar12;
  }
  else {
                    /* try { // try from 0016037c to 00160387 has its CatchHandler @ 001605a0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (plVar9 + 2),(char *)pbVar2,uVar18);
  }
  lVar12 = *(long *)(this + 0x18);
  fVar23 = *(float *)(this + 0x20);
  *(bool *)(plVar9 + 5) = param_2;
  *(undefined4 *)(plVar9 + 10) = 1;
  local_70 = 1;
  if ((uVar20 == 0) || (fVar23 * (float)uVar20 < (float)(lVar12 + 1))) {
    if (uVar20 < 3) {
      uVar16 = 1;
    }
    else {
      uVar16 = (ulong)((uVar20 & uVar20 - 1) != 0);
    }
    uVar16 = uVar16 | uVar20 << 1;
    uVar18 = (ulong)((float)(lVar12 + 1) / fVar23);
    if (uVar16 <= uVar18) {
      uVar16 = uVar18;
    }
    if (uVar16 - 1 == 0) {
      uVar16 = 2;
    }
    else if ((uVar16 & uVar16 - 1) != 0) {
                    /* try { // try from 00160408 to 0016048b has its CatchHandler @ 0016059c */
      uVar16 = std::__ndk1::__next_prime(uVar16);
    }
    uVar18 = *(ulong *)(this + 8);
    if (uVar18 < uVar16) {
LAB_00160420:
      FUN_0015f314(this,uVar16);
    }
    else if (uVar16 < uVar18) {
      uVar20 = (ulong)((float)*(ulong *)(this + 0x18) / *(float *)(this + 0x20));
      if (uVar18 < 3) {
LAB_00160488:
        uVar20 = std::__ndk1::__next_prime(uVar20);
      }
      else {
        uVar22 = NEON_cnt(uVar18,1);
        uVar21 = NEON_uaddlv(uVar22,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar21)) goto LAB_00160488;
        if (1 < uVar20) {
          uVar20 = 1L << (-LZCOUNT(uVar20 - 1) & 0x3fU);
        }
      }
      if (uVar16 <= uVar20) {
        uVar16 = uVar20;
      }
      if (uVar16 < uVar18) goto LAB_00160420;
    }
    uVar20 = *(ulong *)(this + 8);
    if ((uVar20 & uVar20 - 1) == 0) {
      unaff_x20 = uVar20 - 1 & uVar8;
    }
    else {
      unaff_x20 = uVar8;
      if (uVar20 <= uVar8) {
        uVar16 = 0;
        if (uVar20 != 0) {
          uVar16 = uVar8 / uVar20;
        }
        unaff_x20 = uVar8 - uVar16 * uVar20;
      }
    }
  }
  lVar12 = *(long *)this;
  plVar13 = *(long **)(lVar12 + unaff_x20 * 8);
  if (plVar13 == (long *)0x0) {
    lVar14 = *(long *)pAVar1;
    *(long **)pAVar1 = plVar9;
    *plVar9 = lVar14;
    *(AnyMap **)(lVar12 + unaff_x20 * 8) = pAVar1;
    if (*plVar9 == 0) goto LAB_00160530;
    uVar16 = *(ulong *)(*plVar9 + 8);
    if ((uVar20 & uVar20 - 1) == 0) {
      uVar16 = uVar16 & uVar20 - 1;
    }
    else if (uVar20 <= uVar16) {
      uVar18 = 0;
      if (uVar20 != 0) {
        uVar18 = uVar16 / uVar20;
      }
      uVar16 = uVar16 - uVar18 * uVar20;
    }
    plVar13 = (long *)(*(long *)this + uVar16 * 8);
  }
  else {
    *plVar9 = *plVar13;
  }
  *plVar13 = (long)plVar9;
LAB_00160530:
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
LAB_0016053c:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001605c8  margelo::nitro::AnyMap::setInt64 =====

/* margelo::nitro::AnyMap::setInt64(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, long) */

void __thiscall margelo::nitro::AnyMap::setInt64(AnyMap *this,basic_string *param_1,long param_2)

{
  AnyMap *pAVar1;
  basic_string *pbVar2;
  uint uVar3;
  basic_string bVar4;
  byte bVar5;
  long lVar6;
  basic_string *__s2;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  basic_string *pbVar15;
  ulong uVar16;
  basic_string *pbVar17;
  ulong uVar18;
  ulong uVar19;
  ulong unaff_x20;
  ulong uVar20;
  undefined2 uVar21;
  undefined8 uVar22;
  float fVar23;
  long *local_80;
  AnyMap *pAStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  bVar4 = *param_1;
  uVar18 = *(ulong *)(param_1 + 8);
  pbVar2 = *(basic_string **)(param_1 + 0x10);
  uVar16 = uVar18;
  __s2 = pbVar2;
  if (((byte)bVar4 & 1) == 0) {
    uVar16 = (ulong)((byte)bVar4 >> 1);
    __s2 = param_1 + 1;
  }
  uVar8 = FUN_0015c450(__s2,uVar16);
  uVar20 = *(ulong *)(this + 8);
  if (uVar20 != 0) {
    uVar22 = NEON_cnt(uVar20,1);
    uVar21 = NEON_uaddlv(uVar22,1);
    uVar19 = CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar21) & 0xffffffff;
    if (uVar19 < 2) {
      unaff_x20 = uVar20 - 1 & uVar8;
    }
    else {
      unaff_x20 = uVar8;
      if (uVar20 <= uVar8) {
        uVar10 = 0;
        if (uVar20 != 0) {
          uVar10 = uVar8 / uVar20;
        }
        unaff_x20 = uVar8 - uVar10 * uVar20;
      }
    }
    plVar9 = *(long **)(*(long *)this + unaff_x20 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar8) {
          bVar5 = *(byte *)(plVar9 + 2);
          uVar11 = (ulong)(bVar5 >> 1);
          uVar10 = uVar11;
          if ((bVar5 & 1) != 0) {
            uVar10 = plVar9[3];
          }
          if (uVar10 == uVar16) {
            if ((bVar5 & 1) == 0) {
              if (bVar5 < 2) {
LAB_0016076c:
                uVar3 = *(uint *)(plVar9 + 10);
                if (uVar3 != 0xffffffff) {
                  if (uVar3 == 3) {
                    plVar9[5] = param_2;
                    goto LAB_0016098c;
                  }
                    /* try { // try from 001609c8 to 001609d3 has its CatchHandler @ 001609e8 */
                  (*(code *)(&PTR_FUN_001b9458)[uVar3])(&local_80,plVar9 + 5);
                }
                plVar9[5] = param_2;
                *(undefined4 *)(plVar9 + 10) = 3;
                goto LAB_0016098c;
              }
              pbVar15 = (basic_string *)((long)plVar9 + 0x11);
              pbVar17 = __s2;
              while (*pbVar15 == *pbVar17) {
                uVar11 = uVar11 - 1;
                pbVar15 = pbVar15 + 1;
                pbVar17 = pbVar17 + 1;
                if (uVar11 == 0) goto LAB_0016076c;
              }
            }
            else {
              iVar7 = memcmp((void *)plVar9[4],__s2,plVar9[3]);
              if (iVar7 == 0) goto LAB_0016076c;
            }
          }
        }
        else {
          if (uVar19 < 2) {
            uVar10 = uVar10 & uVar20 - 1;
          }
          else if (uVar20 <= uVar10) {
            uVar11 = 0;
            if (uVar20 != 0) {
              uVar11 = uVar10 / uVar20;
            }
            uVar10 = uVar10 - uVar11 * uVar20;
          }
          if (uVar10 != unaff_x20) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  pAVar1 = this + 0x10;
  plVar9 = (long *)operator_new(0x58);
  local_70 = 0;
  *plVar9 = 0;
  plVar9[1] = uVar8;
  local_80 = plVar9;
  pAStack_78 = pAVar1;
  if (((byte)bVar4 & 1) == 0) {
    lVar14 = *(long *)param_1;
    lVar12 = *(long *)(param_1 + 0x10);
    plVar9[3] = *(long *)(param_1 + 8);
    plVar9[2] = lVar14;
    plVar9[4] = lVar12;
  }
  else {
                    /* try { // try from 001607c8 to 001607d3 has its CatchHandler @ 001609f0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (plVar9 + 2),(char *)pbVar2,uVar18);
  }
  lVar12 = *(long *)(this + 0x18);
  fVar23 = *(float *)(this + 0x20);
  plVar9[5] = param_2;
  *(undefined4 *)(plVar9 + 10) = 3;
  local_70 = 1;
  if ((uVar20 == 0) || (fVar23 * (float)uVar20 < (float)(lVar12 + 1))) {
    if (uVar20 < 3) {
      uVar16 = 1;
    }
    else {
      uVar16 = (ulong)((uVar20 & uVar20 - 1) != 0);
    }
    uVar16 = uVar16 | uVar20 << 1;
    uVar18 = (ulong)((float)(lVar12 + 1) / fVar23);
    if (uVar16 <= uVar18) {
      uVar16 = uVar18;
    }
    if (uVar16 - 1 == 0) {
      uVar16 = 2;
    }
    else if ((uVar16 & uVar16 - 1) != 0) {
                    /* try { // try from 00160858 to 001608db has its CatchHandler @ 001609ec */
      uVar16 = std::__ndk1::__next_prime(uVar16);
    }
    uVar18 = *(ulong *)(this + 8);
    if (uVar18 < uVar16) {
LAB_00160870:
      FUN_0015f314(this,uVar16);
    }
    else if (uVar16 < uVar18) {
      uVar20 = (ulong)((float)*(ulong *)(this + 0x18) / *(float *)(this + 0x20));
      if (uVar18 < 3) {
LAB_001608d8:
        uVar20 = std::__ndk1::__next_prime(uVar20);
      }
      else {
        uVar22 = NEON_cnt(uVar18,1);
        uVar21 = NEON_uaddlv(uVar22,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar21)) goto LAB_001608d8;
        if (1 < uVar20) {
          uVar20 = 1L << (-LZCOUNT(uVar20 - 1) & 0x3fU);
        }
      }
      if (uVar16 <= uVar20) {
        uVar16 = uVar20;
      }
      if (uVar16 < uVar18) goto LAB_00160870;
    }
    uVar20 = *(ulong *)(this + 8);
    if ((uVar20 & uVar20 - 1) == 0) {
      unaff_x20 = uVar20 - 1 & uVar8;
    }
    else {
      unaff_x20 = uVar8;
      if (uVar20 <= uVar8) {
        uVar16 = 0;
        if (uVar20 != 0) {
          uVar16 = uVar8 / uVar20;
        }
        unaff_x20 = uVar8 - uVar16 * uVar20;
      }
    }
  }
  lVar12 = *(long *)this;
  plVar13 = *(long **)(lVar12 + unaff_x20 * 8);
  if (plVar13 == (long *)0x0) {
    lVar14 = *(long *)pAVar1;
    *(long **)pAVar1 = plVar9;
    *plVar9 = lVar14;
    *(AnyMap **)(lVar12 + unaff_x20 * 8) = pAVar1;
    if (*plVar9 == 0) goto LAB_00160980;
    uVar16 = *(ulong *)(*plVar9 + 8);
    if ((uVar20 & uVar20 - 1) == 0) {
      uVar16 = uVar16 & uVar20 - 1;
    }
    else if (uVar20 <= uVar16) {
      uVar18 = 0;
      if (uVar20 != 0) {
        uVar18 = uVar16 / uVar20;
      }
      uVar16 = uVar16 - uVar18 * uVar20;
    }
    plVar13 = (long *)(*(long *)this + uVar16 * 8);
  }
  else {
    *plVar9 = *plVar13;
  }
  *plVar13 = (long)plVar9;
LAB_00160980:
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
LAB_0016098c:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00160a18  margelo::nitro::AnyMap::setString =====

/* margelo::nitro::AnyMap::setString(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::AnyMap::setString(AnyMap *this,basic_string *param_1,basic_string *param_2)

{
  AnyMap *pAVar1;
  basic_string *pbVar2;
  uint uVar3;
  basic_string bVar4;
  byte bVar5;
  long lVar6;
  basic_string *__s2;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  basic_string *pbVar15;
  ulong uVar16;
  basic_string *pbVar17;
  ulong uVar18;
  ulong uVar19;
  ulong unaff_x20;
  ulong uVar20;
  undefined2 uVar21;
  undefined8 uVar22;
  float fVar23;
  undefined1 uStack_a1;
  long *local_a0;
  AnyMap *pAStack_98;
  ulong local_90;
  uint local_78;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  bVar4 = *param_1;
  uVar18 = *(ulong *)(param_1 + 8);
  pbVar2 = *(basic_string **)(param_1 + 0x10);
  uVar16 = uVar18;
  __s2 = pbVar2;
  if (((byte)bVar4 & 1) == 0) {
    uVar16 = (ulong)((byte)bVar4 >> 1);
    __s2 = param_1 + 1;
  }
  uVar8 = FUN_0015c450(__s2,uVar16);
  uVar20 = *(ulong *)(this + 8);
  if (uVar20 != 0) {
    uVar22 = NEON_cnt(uVar20,1);
    uVar21 = NEON_uaddlv(uVar22,1);
    uVar19 = CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar21) & 0xffffffff;
    if (uVar19 < 2) {
      unaff_x20 = uVar20 - 1 & uVar8;
    }
    else {
      unaff_x20 = uVar8;
      if (uVar20 <= uVar8) {
        uVar10 = 0;
        if (uVar20 != 0) {
          uVar10 = uVar8 / uVar20;
        }
        unaff_x20 = uVar8 - uVar10 * uVar20;
      }
    }
    plVar9 = *(long **)(*(long *)this + unaff_x20 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar8) {
          bVar5 = *(byte *)(plVar9 + 2);
          uVar11 = (ulong)(bVar5 >> 1);
          uVar10 = uVar11;
          if ((bVar5 & 1) != 0) {
            uVar10 = plVar9[3];
          }
          if (uVar10 == uVar16) {
            if ((bVar5 & 1) == 0) {
              if (bVar5 < 2) {
LAB_00160bb8:
                if (((byte)*param_2 & 1) == 0) {
                  pAStack_98 = *(AnyMap **)(param_2 + 8);
                  local_a0 = *(long **)param_2;
                  local_90 = *(ulong *)(param_2 + 0x10);
                }
                else {
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  __init_copy_ctor_external
                            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              *)&local_a0,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
                }
                uVar3 = *(uint *)(plVar9 + 10);
                local_78 = 4;
                if (uVar3 == 0xffffffff) {
LAB_00160e8c:
                  uVar16 = local_90;
                  pAVar1 = pAStack_98;
                  plVar13 = local_a0;
                  pAStack_98 = (AnyMap *)0x0;
                  local_90 = 0;
                  local_a0 = (long *)0x0;
                  plVar9[6] = (long)pAVar1;
                  plVar9[5] = (long)plVar13;
                  plVar9[7] = uVar16;
                  *(undefined4 *)(plVar9 + 10) = 4;
                }
                else {
                  if (uVar3 != 4) {
                    /* try { // try from 00160e80 to 00160e8b has its CatchHandler @ 00160ed4 */
                    (*(code *)(&PTR_FUN_001b9458)[uVar3])(&uStack_a1,plVar9 + 5);
                    goto LAB_00160e8c;
                  }
                  if ((*(byte *)(plVar9 + 5) & 1) != 0) {
                    operator_delete((void *)plVar9[7]);
                  }
                  plVar13 = local_a0;
                  local_a0 = (long *)((ulong)local_a0 & 0xffffffffffff0000);
                  plVar9[6] = (long)pAStack_98;
                  plVar9[5] = (long)plVar13;
                  plVar9[7] = local_90;
                }
                if (local_78 != 0xffffffff) {
                    /* try { // try from 00160ec4 to 00160ecf has its CatchHandler @ 00160ed8 */
                  (*(code *)(&PTR_FUN_001b9458)[local_78])(&uStack_a1,&local_a0);
                }
                goto LAB_00160e44;
              }
              pbVar15 = (basic_string *)((long)plVar9 + 0x11);
              pbVar17 = __s2;
              while (*pbVar15 == *pbVar17) {
                uVar11 = uVar11 - 1;
                pbVar15 = pbVar15 + 1;
                pbVar17 = pbVar17 + 1;
                if (uVar11 == 0) goto LAB_00160bb8;
              }
            }
            else {
              iVar7 = memcmp((void *)plVar9[4],__s2,plVar9[3]);
              if (iVar7 == 0) goto LAB_00160bb8;
            }
          }
        }
        else {
          if (uVar19 < 2) {
            uVar10 = uVar10 & uVar20 - 1;
          }
          else if (uVar20 <= uVar10) {
            uVar11 = 0;
            if (uVar20 != 0) {
              uVar11 = uVar10 / uVar20;
            }
            uVar10 = uVar10 - uVar11 * uVar20;
          }
          if (uVar10 != unaff_x20) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  pAVar1 = this + 0x10;
  plVar9 = (long *)operator_new(0x58);
  local_90 = local_90 & 0xffffffffffffff00;
  *plVar9 = 0;
  plVar9[1] = uVar8;
  local_a0 = plVar9;
  pAStack_98 = pAVar1;
  if (((byte)bVar4 & 1) == 0) {
    lVar14 = *(long *)param_1;
    lVar12 = *(long *)(param_1 + 0x10);
    plVar9[3] = *(long *)(param_1 + 8);
    plVar9[2] = lVar14;
    plVar9[4] = lVar12;
  }
  else {
                    /* try { // try from 00160c0c to 00160c17 has its CatchHandler @ 00160ef8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (plVar9 + 2),(char *)pbVar2,uVar18);
  }
  if (((byte)*param_2 & 1) == 0) {
    lVar14 = *(long *)param_2;
    lVar12 = *(long *)(param_2 + 0x10);
    plVar9[6] = *(long *)(param_2 + 8);
    plVar9[5] = lVar14;
    plVar9[7] = lVar12;
  }
  else {
                    /* try { // try from 00160c38 to 00160c3f has its CatchHandler @ 00160ee0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (plVar9 + 5),*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  lVar12 = *(long *)(this + 0x18);
  fVar23 = *(float *)(this + 0x20);
  *(undefined4 *)(plVar9 + 10) = 4;
  local_90 = CONCAT71(local_90._1_7_,1);
  if ((uVar20 == 0) || (fVar23 * (float)uVar20 < (float)(lVar12 + 1))) {
    if (uVar20 < 3) {
      uVar16 = 1;
    }
    else {
      uVar16 = (ulong)((uVar20 & uVar20 - 1) != 0);
    }
    uVar16 = uVar16 | uVar20 << 1;
    uVar18 = (ulong)((float)(lVar12 + 1) / fVar23);
    if (uVar16 <= uVar18) {
      uVar16 = uVar18;
    }
    if (uVar16 - 1 == 0) {
      uVar16 = 2;
    }
    else if ((uVar16 & uVar16 - 1) != 0) {
                    /* try { // try from 00160cc0 to 00160ce3 has its CatchHandler @ 00160edc */
      uVar16 = std::__ndk1::__next_prime(uVar16);
    }
    uVar18 = *(ulong *)(this + 8);
    if (uVar18 < uVar16) {
LAB_00160cd8:
      FUN_0015f314(this,uVar16);
    }
    else if (uVar16 < uVar18) {
      uVar20 = (ulong)((float)*(ulong *)(this + 0x18) / *(float *)(this + 0x20));
      if (uVar18 < 3) {
LAB_00160d90:
                    /* try { // try from 00160d90 to 00160d93 has its CatchHandler @ 00160edc */
        uVar20 = std::__ndk1::__next_prime(uVar20);
      }
      else {
        uVar22 = NEON_cnt(uVar18,1);
        uVar21 = NEON_uaddlv(uVar22,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar21)) goto LAB_00160d90;
        if (1 < uVar20) {
          uVar20 = 1L << (-LZCOUNT(uVar20 - 1) & 0x3fU);
        }
      }
      if (uVar16 <= uVar20) {
        uVar16 = uVar20;
      }
      if (uVar16 < uVar18) goto LAB_00160cd8;
    }
    uVar20 = *(ulong *)(this + 8);
    if ((uVar20 & uVar20 - 1) == 0) {
      unaff_x20 = uVar20 - 1 & uVar8;
    }
    else {
      unaff_x20 = uVar8;
      if (uVar20 <= uVar8) {
        uVar16 = 0;
        if (uVar20 != 0) {
          uVar16 = uVar8 / uVar20;
        }
        unaff_x20 = uVar8 - uVar16 * uVar20;
      }
    }
  }
  lVar12 = *(long *)this;
  plVar13 = *(long **)(lVar12 + unaff_x20 * 8);
  if (plVar13 == (long *)0x0) {
    lVar14 = *(long *)pAVar1;
    *(long **)pAVar1 = plVar9;
    *plVar9 = lVar14;
    *(AnyMap **)(lVar12 + unaff_x20 * 8) = pAVar1;
    if (*plVar9 == 0) goto LAB_00160e38;
    uVar16 = *(ulong *)(*plVar9 + 8);
    if ((uVar20 & uVar20 - 1) == 0) {
      uVar16 = uVar16 & uVar20 - 1;
    }
    else if (uVar20 <= uVar16) {
      uVar18 = 0;
      if (uVar20 != 0) {
        uVar18 = uVar16 / uVar20;
      }
      uVar16 = uVar16 - uVar18 * uVar20;
    }
    plVar13 = (long *)(*(long *)this + uVar16 * 8);
  }
  else {
    *plVar9 = *plVar13;
  }
  *plVar13 = (long)plVar9;
LAB_00160e38:
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
LAB_00160e44:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00160f20  margelo::nitro::AnyMap::setArray =====

/* margelo::nitro::AnyMap::setArray(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> > const&) */

void __thiscall margelo::nitro::AnyMap::setArray(AnyMap *this,basic_string *param_1,vector *param_2)

{
  AnyMap *pAVar1;
  basic_string *pbVar2;
  uint uVar3;
  basic_string bVar4;
  byte bVar5;
  long lVar6;
  basic_string *__s2;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  basic_string *pbVar15;
  ulong uVar16;
  basic_string *pbVar17;
  ulong uVar18;
  ulong uVar19;
  void *pvVar20;
  ulong unaff_x20;
  void *pvVar21;
  void *pvVar22;
  ulong uVar23;
  undefined2 uVar24;
  undefined8 uVar25;
  float fVar26;
  undefined1 uStack_a1;
  long *local_a0;
  AnyMap *pAStack_98;
  ulong local_90;
  uint local_78;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  bVar4 = *param_1;
  uVar18 = *(ulong *)(param_1 + 8);
  pbVar2 = *(basic_string **)(param_1 + 0x10);
  uVar16 = uVar18;
  __s2 = pbVar2;
  if (((byte)bVar4 & 1) == 0) {
    uVar16 = (ulong)((byte)bVar4 >> 1);
    __s2 = param_1 + 1;
  }
  uVar8 = FUN_0015c450(__s2,uVar16);
  uVar23 = *(ulong *)(this + 8);
  if (uVar23 != 0) {
    uVar25 = NEON_cnt(uVar23,1);
    uVar24 = NEON_uaddlv(uVar25,1);
    uVar19 = CONCAT62((int6)((ulong)uVar25 >> 0x10),uVar24) & 0xffffffff;
    if (uVar19 < 2) {
      unaff_x20 = uVar23 - 1 & uVar8;
    }
    else {
      unaff_x20 = uVar8;
      if (uVar23 <= uVar8) {
        uVar10 = 0;
        if (uVar23 != 0) {
          uVar10 = uVar8 / uVar23;
        }
        unaff_x20 = uVar8 - uVar10 * uVar23;
      }
    }
    plVar9 = *(long **)(*(long *)this + unaff_x20 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar8) {
          bVar5 = *(byte *)(plVar9 + 2);
          uVar11 = (ulong)(bVar5 >> 1);
          uVar10 = uVar11;
          if ((bVar5 & 1) != 0) {
            uVar10 = plVar9[3];
          }
          if (uVar10 == uVar16) {
            if ((bVar5 & 1) == 0) {
              if (bVar5 < 2) {
LAB_001610cc:
                local_a0 = (long *)0x0;
                pAStack_98 = (AnyMap *)0x0;
                local_90 = 0;
                FUN_0015e810(&local_a0,*(long *)param_2,*(long *)(param_2 + 8),
                             (*(long *)(param_2 + 8) - *(long *)param_2 >> 4) * -0x5555555555555555)
                ;
                uVar3 = *(uint *)(plVar9 + 10);
                local_78 = 5;
                if (uVar3 != 0xffffffff) {
                  if (uVar3 == 5) {
                    pvVar21 = (void *)plVar9[5];
                    if (pvVar21 != (void *)0x0) {
                      pvVar22 = (void *)plVar9[6];
                      pvVar20 = pvVar21;
                      if (pvVar22 != pvVar21) {
                        do {
                          pvVar20 = (void *)((long)pvVar22 + -0x30);
                          if (*(uint *)((long)pvVar22 + -8) != 0xffffffff) {
                    /* try { // try from 00161160 to 0016116b has its CatchHandler @ 0016145c */
                            (*(code *)(&PTR_FUN_001b9458)[*(uint *)((long)pvVar22 + -8)])
                                      (&uStack_a1,pvVar20);
                          }
                          *(undefined4 *)((long)pvVar22 + -8) = 0xffffffff;
                          pvVar22 = pvVar20;
                        } while (pvVar20 != pvVar21);
                        pvVar20 = (void *)plVar9[5];
                      }
                      plVar9[6] = (long)pvVar21;
                      operator_delete(pvVar20);
                      plVar9[5] = 0;
                      plVar9[6] = 0;
                      plVar9[7] = 0;
                    }
                    plVar9[6] = (long)pAStack_98;
                    plVar9[5] = (long)local_a0;
                    plVar9[7] = local_90;
LAB_00161428:
                    local_90 = 0;
                    pAStack_98 = (AnyMap *)0x0;
                    local_a0 = (long *)0x0;
                    if (local_78 != 0xffffffff) {
                    /* try { // try from 00161444 to 0016144f has its CatchHandler @ 00161458 */
                      (*(code *)(&PTR_FUN_001b9458)[local_78])(&uStack_a1,&local_a0);
                    }
                    goto LAB_00161394;
                  }
                    /* try { // try from 001613d0 to 001613db has its CatchHandler @ 00161454 */
                  (*(code *)(&PTR_FUN_001b9458)[uVar3])(&uStack_a1,plVar9 + 5);
                }
                plVar9[6] = (long)pAStack_98;
                plVar9[5] = (long)local_a0;
                plVar9[7] = local_90;
                *(undefined4 *)(plVar9 + 10) = 5;
                goto LAB_00161428;
              }
              pbVar15 = (basic_string *)((long)plVar9 + 0x11);
              pbVar17 = __s2;
              while (*pbVar15 == *pbVar17) {
                uVar11 = uVar11 - 1;
                pbVar15 = pbVar15 + 1;
                pbVar17 = pbVar17 + 1;
                if (uVar11 == 0) goto LAB_001610cc;
              }
            }
            else {
              iVar7 = memcmp((void *)plVar9[4],__s2,plVar9[3]);
              if (iVar7 == 0) goto LAB_001610cc;
            }
          }
        }
        else {
          if (uVar19 < 2) {
            uVar10 = uVar10 & uVar23 - 1;
          }
          else if (uVar23 <= uVar10) {
            uVar11 = 0;
            if (uVar23 != 0) {
              uVar11 = uVar10 / uVar23;
            }
            uVar10 = uVar10 - uVar11 * uVar23;
          }
          if (uVar10 != unaff_x20) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  pAVar1 = this + 0x10;
  plVar9 = (long *)operator_new(0x58);
  local_90 = local_90 & 0xffffffffffffff00;
  *plVar9 = 0;
  plVar9[1] = uVar8;
  local_a0 = plVar9;
  pAStack_98 = pAVar1;
  if (((byte)bVar4 & 1) == 0) {
    lVar14 = *(long *)param_1;
    lVar12 = *(long *)(param_1 + 0x10);
    plVar9[3] = *(long *)(param_1 + 8);
    plVar9[2] = lVar14;
    plVar9[4] = lVar12;
  }
  else {
                    /* try { // try from 001611ac to 001611b7 has its CatchHandler @ 00161464 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (plVar9 + 2),(char *)pbVar2,uVar18);
  }
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9[7] = 0;
                    /* try { // try from 001611dc to 001611df has its CatchHandler @ 0016146c */
  FUN_0015e810();
  lVar12 = *(long *)(this + 0x18);
  fVar26 = *(float *)(this + 0x20);
  *(undefined4 *)(plVar9 + 10) = 5;
  local_90 = CONCAT71(local_90._1_7_,1);
  if ((uVar23 == 0) || (fVar26 * (float)uVar23 < (float)(lVar12 + 1))) {
    if (uVar23 < 3) {
      uVar16 = 1;
    }
    else {
      uVar16 = (ulong)((uVar23 & uVar23 - 1) != 0);
    }
    uVar16 = uVar16 | uVar23 << 1;
    uVar18 = (ulong)((float)(lVar12 + 1) / fVar26);
    if (uVar16 <= uVar18) {
      uVar16 = uVar18;
    }
    if (uVar16 - 1 == 0) {
      uVar16 = 2;
    }
    else if ((uVar16 & uVar16 - 1) != 0) {
                    /* try { // try from 00161260 to 001612e3 has its CatchHandler @ 00161460 */
      uVar16 = std::__ndk1::__next_prime(uVar16);
    }
    uVar18 = *(ulong *)(this + 8);
    if (uVar18 < uVar16) {
LAB_00161278:
      FUN_0015f314(this,uVar16);
    }
    else if (uVar16 < uVar18) {
      uVar23 = (ulong)((float)*(ulong *)(this + 0x18) / *(float *)(this + 0x20));
      if (uVar18 < 3) {
LAB_001612e0:
        uVar23 = std::__ndk1::__next_prime(uVar23);
      }
      else {
        uVar25 = NEON_cnt(uVar18,1);
        uVar24 = NEON_uaddlv(uVar25,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar25 >> 0x10),uVar24)) goto LAB_001612e0;
        if (1 < uVar23) {
          uVar23 = 1L << (-LZCOUNT(uVar23 - 1) & 0x3fU);
        }
      }
      if (uVar16 <= uVar23) {
        uVar16 = uVar23;
      }
      if (uVar16 < uVar18) goto LAB_00161278;
    }
    uVar23 = *(ulong *)(this + 8);
    if ((uVar23 & uVar23 - 1) == 0) {
      unaff_x20 = uVar23 - 1 & uVar8;
    }
    else {
      unaff_x20 = uVar8;
      if (uVar23 <= uVar8) {
        uVar16 = 0;
        if (uVar23 != 0) {
          uVar16 = uVar8 / uVar23;
        }
        unaff_x20 = uVar8 - uVar16 * uVar23;
      }
    }
  }
  lVar12 = *(long *)this;
  plVar13 = *(long **)(lVar12 + unaff_x20 * 8);
  if (plVar13 == (long *)0x0) {
    lVar14 = *(long *)pAVar1;
    *(long **)pAVar1 = plVar9;
    *plVar9 = lVar14;
    *(AnyMap **)(lVar12 + unaff_x20 * 8) = pAVar1;
    if (*plVar9 == 0) goto LAB_00161388;
    uVar16 = *(ulong *)(*plVar9 + 8);
    if ((uVar23 & uVar23 - 1) == 0) {
      uVar16 = uVar16 & uVar23 - 1;
    }
    else if (uVar23 <= uVar16) {
      uVar18 = 0;
      if (uVar23 != 0) {
        uVar18 = uVar16 / uVar23;
      }
      uVar16 = uVar16 - uVar18 * uVar23;
    }
    plVar13 = (long *)(*(long *)this + uVar16 * 8);
  }
  else {
    *plVar9 = *plVar13;
  }
  *plVar13 = (long)plVar9;
LAB_00161388:
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
LAB_00161394:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001614a4  margelo::nitro::AnyMap::setObject =====

/* margelo::nitro::AnyMap::setObject(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::unordered_map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > const&) */

void __thiscall
margelo::nitro::AnyMap::setObject(AnyMap *this,basic_string *param_1,unordered_map *param_2)

{
  AnyMap *pAVar1;
  basic_string *pbVar2;
  uint uVar3;
  basic_string bVar4;
  byte bVar5;
  long lVar6;
  basic_string *__s2;
  int iVar7;
  ulong uVar8;
  void *pvVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  basic_string *pbVar16;
  basic_string *pbVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong unaff_x20;
  ulong uVar21;
  undefined2 uVar22;
  undefined8 uVar23;
  float fVar24;
  undefined1 uStack_99;
  long *local_98;
  AnyMap *local_90;
  ulong local_88;
  long local_80;
  undefined4 local_78;
  uint local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  bVar4 = *param_1;
  uVar18 = *(ulong *)(param_1 + 8);
  pbVar2 = *(basic_string **)(param_1 + 0x10);
  uVar19 = uVar18;
  __s2 = pbVar2;
  if (((byte)bVar4 & 1) == 0) {
    uVar19 = (ulong)((byte)bVar4 >> 1);
    __s2 = param_1 + 1;
  }
  uVar8 = FUN_0015c450(__s2,uVar19);
  uVar21 = *(ulong *)(this + 8);
  if (uVar21 != 0) {
    uVar23 = NEON_cnt(uVar21,1);
    uVar22 = NEON_uaddlv(uVar23,1);
    uVar20 = CONCAT62((int6)((ulong)uVar23 >> 0x10),uVar22) & 0xffffffff;
    if (uVar20 < 2) {
      unaff_x20 = uVar21 - 1 & uVar8;
    }
    else {
      unaff_x20 = uVar8;
      if (uVar21 <= uVar8) {
        uVar11 = 0;
        if (uVar21 != 0) {
          uVar11 = uVar8 / uVar21;
        }
        unaff_x20 = uVar8 - uVar11 * uVar21;
      }
    }
    plVar10 = *(long **)(*(long *)this + unaff_x20 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      do {
        uVar11 = plVar10[1];
        if (uVar11 == uVar8) {
          bVar5 = *(byte *)(plVar10 + 2);
          uVar12 = (ulong)(bVar5 >> 1);
          uVar11 = uVar12;
          if ((bVar5 & 1) != 0) {
            uVar11 = plVar10[3];
          }
          if (uVar11 == uVar19) {
            if ((bVar5 & 1) == 0) {
              if (bVar5 < 2) {
LAB_00161648:
                FUN_0015ede8(&local_98,param_2);
                uVar3 = *(uint *)(plVar10 + 10);
                local_70 = 6;
                if (uVar3 == 0xffffffff) {
LAB_00161928:
                  plVar14 = local_98;
                  plVar10[7] = local_88;
                  *(undefined4 *)(plVar10 + 10) = 0xffffffff;
                  local_98 = (long *)0x0;
                  plVar10[8] = local_80;
                  plVar10[5] = (long)plVar14;
                  plVar10[6] = (long)local_90;
                  *(undefined4 *)(plVar10 + 9) = local_78;
                  if (local_80 != 0) {
                    uVar19 = *(ulong *)(local_88 + 8);
                    if (((ulong)local_90 & (long)local_90 - 1U) == 0) {
                      uVar19 = (long)local_90 - 1U & uVar19;
                    }
                    else if (local_90 <= uVar19) {
                      uVar18 = 0;
                      if (local_90 != (AnyMap *)0x0) {
                        uVar18 = uVar19 / (ulong)local_90;
                      }
                      uVar19 = uVar19 - uVar18 * (long)local_90;
                    }
                    plVar14[uVar19] = (long)(plVar10 + 7);
                    local_88 = 0;
                    local_80 = 0;
                  }
                  *(undefined4 *)(plVar10 + 10) = 6;
                }
                else {
                  if (uVar3 != 6) {
                    /* try { // try from 0016191c to 00161927 has its CatchHandler @ 001619dc */
                    (*(code *)(&PTR_FUN_001b9458)[uVar3])(&uStack_99,plVar10 + 5);
                    goto LAB_00161928;
                  }
                  FUN_0015cf0c(plVar10 + 5);
                  plVar14 = local_98;
                  pvVar9 = (void *)plVar10[5];
                  local_98 = (long *)0x0;
                  plVar10[5] = (long)plVar14;
                  if (pvVar9 != (void *)0x0) {
                    operator_delete(pvVar9);
                  }
                  plVar10[7] = local_88;
                  plVar10[6] = (long)local_90;
                  plVar10[8] = local_80;
                  *(undefined4 *)(plVar10 + 9) = local_78;
                  if (local_80 != 0) {
                    uVar19 = *(ulong *)(local_88 + 8);
                    if (((ulong)local_90 & (long)local_90 - 1U) == 0) {
                      uVar19 = (long)local_90 - 1U & uVar19;
                    }
                    else if (local_90 <= uVar19) {
                      uVar18 = 0;
                      if (local_90 != (AnyMap *)0x0) {
                        uVar18 = uVar19 / (ulong)local_90;
                      }
                      uVar19 = uVar19 - uVar18 * (long)local_90;
                    }
                    *(long **)(plVar10[5] + uVar19 * 8) = plVar10 + 7;
                    local_88 = 0;
                    local_80 = 0;
                  }
                }
                local_90 = (AnyMap *)0x0;
                if (local_70 != 0xffffffff) {
                    /* try { // try from 001619cc to 001619d7 has its CatchHandler @ 001619e0 */
                  (*(code *)(&PTR_FUN_001b9458)[local_70])(&uStack_99,&local_98);
                }
                goto LAB_001618e0;
              }
              pbVar16 = (basic_string *)((long)plVar10 + 0x11);
              pbVar17 = __s2;
              while (*pbVar16 == *pbVar17) {
                uVar12 = uVar12 - 1;
                pbVar16 = pbVar16 + 1;
                pbVar17 = pbVar17 + 1;
                if (uVar12 == 0) goto LAB_00161648;
              }
            }
            else {
              iVar7 = memcmp((void *)plVar10[4],__s2,plVar10[3]);
              if (iVar7 == 0) goto LAB_00161648;
            }
          }
        }
        else {
          if (uVar20 < 2) {
            uVar11 = uVar11 & uVar21 - 1;
          }
          else if (uVar21 <= uVar11) {
            uVar12 = 0;
            if (uVar21 != 0) {
              uVar12 = uVar11 / uVar21;
            }
            uVar11 = uVar11 - uVar12 * uVar21;
          }
          if (uVar11 != unaff_x20) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  pAVar1 = this + 0x10;
  plVar10 = (long *)operator_new(0x58);
  local_88 = local_88 & 0xffffffffffffff00;
  *plVar10 = 0;
  plVar10[1] = uVar8;
  local_98 = plVar10;
  local_90 = pAVar1;
  if (((byte)bVar4 & 1) == 0) {
    lVar15 = *(long *)param_1;
    lVar13 = *(long *)(param_1 + 0x10);
    plVar10[3] = *(long *)(param_1 + 8);
    plVar10[2] = lVar15;
    plVar10[4] = lVar13;
  }
  else {
                    /* try { // try from 00161714 to 0016171f has its CatchHandler @ 001619e8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (plVar10 + 2),(char *)pbVar2,uVar18);
  }
                    /* try { // try from 00161720 to 0016172b has its CatchHandler @ 001619f0 */
  FUN_0015ede8(plVar10 + 5,param_2);
  lVar13 = *(long *)(this + 0x18);
  fVar24 = *(float *)(this + 0x20);
  *(undefined4 *)(plVar10 + 10) = 6;
  local_88 = CONCAT71(local_88._1_7_,1);
  if ((uVar21 == 0) || (fVar24 * (float)uVar21 < (float)(lVar13 + 1))) {
    if (uVar21 < 3) {
      uVar19 = 1;
    }
    else {
      uVar19 = (ulong)((uVar21 & uVar21 - 1) != 0);
    }
    uVar19 = uVar19 | uVar21 << 1;
    uVar18 = (ulong)((float)(lVar13 + 1) / fVar24);
    if (uVar19 <= uVar18) {
      uVar19 = uVar18;
    }
    if (uVar19 - 1 == 0) {
      uVar19 = 2;
    }
    else if ((uVar19 & uVar19 - 1) != 0) {
                    /* try { // try from 001617ac to 0016182f has its CatchHandler @ 001619e4 */
      uVar19 = std::__ndk1::__next_prime(uVar19);
    }
    uVar18 = *(ulong *)(this + 8);
    if (uVar18 < uVar19) {
LAB_001617c4:
      FUN_0015f314(this,uVar19);
    }
    else if (uVar19 < uVar18) {
      uVar21 = (ulong)((float)*(ulong *)(this + 0x18) / *(float *)(this + 0x20));
      if (uVar18 < 3) {
LAB_0016182c:
        uVar21 = std::__ndk1::__next_prime(uVar21);
      }
      else {
        uVar23 = NEON_cnt(uVar18,1);
        uVar22 = NEON_uaddlv(uVar23,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar23 >> 0x10),uVar22)) goto LAB_0016182c;
        if (1 < uVar21) {
          uVar21 = 1L << (-LZCOUNT(uVar21 - 1) & 0x3fU);
        }
      }
      if (uVar19 <= uVar21) {
        uVar19 = uVar21;
      }
      if (uVar19 < uVar18) goto LAB_001617c4;
    }
    uVar21 = *(ulong *)(this + 8);
    if ((uVar21 & uVar21 - 1) == 0) {
      unaff_x20 = uVar21 - 1 & uVar8;
    }
    else {
      unaff_x20 = uVar8;
      if (uVar21 <= uVar8) {
        uVar19 = 0;
        if (uVar21 != 0) {
          uVar19 = uVar8 / uVar21;
        }
        unaff_x20 = uVar8 - uVar19 * uVar21;
      }
    }
  }
  lVar13 = *(long *)this;
  plVar14 = *(long **)(lVar13 + unaff_x20 * 8);
  if (plVar14 == (long *)0x0) {
    lVar15 = *(long *)pAVar1;
    *(long **)pAVar1 = plVar10;
    *plVar10 = lVar15;
    *(AnyMap **)(lVar13 + unaff_x20 * 8) = pAVar1;
    if (*plVar10 == 0) goto LAB_001618d4;
    uVar19 = *(ulong *)(*plVar10 + 8);
    if ((uVar21 & uVar21 - 1) == 0) {
      uVar19 = uVar19 & uVar21 - 1;
    }
    else if (uVar21 <= uVar19) {
      uVar18 = 0;
      if (uVar21 != 0) {
        uVar18 = uVar19 / uVar21;
      }
      uVar19 = uVar19 - uVar18 * uVar21;
    }
    plVar14 = (long *)(*(long *)this + uVar19 * 8);
  }
  else {
    *plVar10 = *plVar14;
  }
  *plVar14 = (long)plVar10;
LAB_001618d4:
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
LAB_001618e0:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00161a28  margelo::nitro::AnyMap::setAny =====

/* margelo::nitro::AnyMap::setAny(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, margelo::nitro::AnyValue const&) */

void __thiscall margelo::nitro::AnyMap::setAny(AnyMap *this,basic_string *param_1,AnyValue *param_2)

{
  AnyMap *pAVar1;
  basic_string *pbVar2;
  uint uVar3;
  basic_string bVar4;
  byte bVar5;
  long lVar6;
  basic_string *__s2;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  basic_string *pbVar15;
  ulong uVar16;
  basic_string *pbVar17;
  ulong uVar18;
  ulong uVar19;
  ulong unaff_x20;
  ulong uVar20;
  undefined2 uVar21;
  undefined8 uVar22;
  undefined1 uStack_81;
  long *local_80;
  AnyMap *pAStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  bVar4 = *param_1;
  uVar18 = *(ulong *)(param_1 + 8);
  pbVar2 = *(basic_string **)(param_1 + 0x10);
  uVar16 = uVar18;
  __s2 = pbVar2;
  if (((byte)bVar4 & 1) == 0) {
    uVar16 = (ulong)((byte)bVar4 >> 1);
    __s2 = param_1 + 1;
  }
  uVar8 = FUN_0015c450(__s2,uVar16);
  uVar20 = *(ulong *)(this + 8);
  if (uVar20 != 0) {
    uVar22 = NEON_cnt(uVar20,1);
    uVar21 = NEON_uaddlv(uVar22,1);
    uVar19 = CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar21) & 0xffffffff;
    if (uVar19 < 2) {
      unaff_x20 = uVar20 - 1 & uVar8;
    }
    else {
      unaff_x20 = uVar8;
      if (uVar20 <= uVar8) {
        uVar10 = 0;
        if (uVar20 != 0) {
          uVar10 = uVar8 / uVar20;
        }
        unaff_x20 = uVar8 - uVar10 * uVar20;
      }
    }
    plVar9 = *(long **)(*(long *)this + unaff_x20 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar8) {
          bVar5 = *(byte *)(plVar9 + 2);
          uVar11 = (ulong)(bVar5 >> 1);
          uVar10 = uVar11;
          if ((bVar5 & 1) != 0) {
            uVar10 = plVar9[3];
          }
          if (uVar10 == uVar16) {
            if ((bVar5 & 1) == 0) {
              if (bVar5 < 2) {
LAB_00161bd4:
                uVar3 = *(uint *)(param_2 + 0x28);
                if (*(uint *)(plVar9 + 10) == 0xffffffff) {
                  if (uVar3 == 0xffffffff) goto LAB_00161e7c;
                }
                else if (uVar3 == 0xffffffff) {
                    /* try { // try from 00161c04 to 00161c0b has its CatchHandler @ 00161eac */
                  (*(code *)(&PTR_FUN_001b9458)[*(uint *)(plVar9 + 10)])(&local_80);
                  *(undefined4 *)(plVar9 + 10) = 0xffffffff;
                  goto LAB_00161e7c;
                }
                local_80 = plVar9 + 5;
                (*(code *)(&
                          PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___assignment<std___ndk1___variant_detail___traits<margelo_nitro_NullType,bool,double,long,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<margelo_nitro_AnyValue,std___ndk1_allocator<margelo_nitro_AnyValue>>,std___ndk1_unordered_map<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,margelo_nitro_AnyValue,std___ndk1_hash<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_equal_to<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_allocator<std___ndk1_pair<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>>___generic_assign[abi:ne180000]<std___ndk1___variant_detail___copy_assignment<std___ndk1___variant_detail___traits<mar___td___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>const_>_001b6b60
                          )[uVar3])(&local_80,plVar9 + 5,param_2);
                goto LAB_00161e7c;
              }
              pbVar15 = (basic_string *)((long)plVar9 + 0x11);
              pbVar17 = __s2;
              while (*pbVar15 == *pbVar17) {
                uVar11 = uVar11 - 1;
                pbVar15 = pbVar15 + 1;
                pbVar17 = pbVar17 + 1;
                if (uVar11 == 0) goto LAB_00161bd4;
              }
            }
            else {
              iVar7 = memcmp((void *)plVar9[4],__s2,plVar9[3]);
              if (iVar7 == 0) goto LAB_00161bd4;
            }
          }
        }
        else {
          if (uVar19 < 2) {
            uVar10 = uVar10 & uVar20 - 1;
          }
          else if (uVar20 <= uVar10) {
            uVar11 = 0;
            if (uVar20 != 0) {
              uVar11 = uVar10 / uVar20;
            }
            uVar10 = uVar10 - uVar11 * uVar20;
          }
          if (uVar10 != unaff_x20) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  pAVar1 = this + 0x10;
  plVar9 = (long *)operator_new(0x58);
  local_70 = 0;
  *plVar9 = 0;
  plVar9[1] = uVar8;
  local_80 = plVar9;
  pAStack_78 = pAVar1;
  if (((byte)bVar4 & 1) == 0) {
    lVar14 = *(long *)param_1;
    lVar12 = *(long *)(param_1 + 0x10);
    plVar9[3] = *(long *)(param_1 + 8);
    plVar9[2] = lVar14;
    plVar9[4] = lVar12;
  }
  else {
                    /* try { // try from 00161c58 to 00161c63 has its CatchHandler @ 00161eb4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (plVar9 + 2),(char *)pbVar2,uVar18);
  }
  uVar3 = *(uint *)(param_2 + 0x28);
  *(undefined1 *)(plVar9 + 5) = 0;
  *(undefined4 *)(plVar9 + 10) = 0xffffffff;
  if (uVar3 != 0xffffffff) {
                    /* try { // try from 00161c8c to 00161c9b has its CatchHandler @ 00161ebc */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<margelo_nitro_NullType,bool,double,long,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<margelo_nitro_AnyValue,std___ndk1_allocator<margelo_nitro_AnyValue>>,std___ndk1_unordered_map<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,margelo_nitro_AnyValue,std___ndk1_hash<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_equal_to<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_allocator<std___ndk1_pair<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___copy_constructor<std___ndk1___variant_detail___traits<marge___td___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>const_>_001b9490
              )[uVar3])(&uStack_81,plVar9 + 5,param_2);
    *(undefined4 *)(plVar9 + 10) = *(undefined4 *)(param_2 + 0x28);
  }
  local_70 = 1;
  if ((uVar20 == 0) ||
     (*(float *)(this + 0x20) * (float)uVar20 < (float)(*(long *)(this + 0x18) + 1))) {
    if (uVar20 < 3) {
      uVar16 = 1;
    }
    else {
      uVar16 = (ulong)((uVar20 & uVar20 - 1) != 0);
    }
    uVar16 = uVar16 | uVar20 << 1;
    uVar18 = (ulong)((float)(*(long *)(this + 0x18) + 1) / *(float *)(this + 0x20));
    if (uVar16 <= uVar18) {
      uVar16 = uVar18;
    }
    if (uVar16 - 1 == 0) {
      uVar16 = 2;
    }
    else if ((uVar16 & uVar16 - 1) != 0) {
                    /* try { // try from 00161d1c to 00161d3f has its CatchHandler @ 00161eb0 */
      uVar16 = std::__ndk1::__next_prime(uVar16);
    }
    uVar18 = *(ulong *)(this + 8);
    if (uVar18 < uVar16) {
LAB_00161d34:
      FUN_0015f314(this,uVar16);
    }
    else if (uVar16 < uVar18) {
      uVar20 = (ulong)((float)*(ulong *)(this + 0x18) / *(float *)(this + 0x20));
      if (uVar18 < 3) {
LAB_00161dc8:
                    /* try { // try from 00161dc8 to 00161dcb has its CatchHandler @ 00161eb0 */
        uVar20 = std::__ndk1::__next_prime(uVar20);
      }
      else {
        uVar22 = NEON_cnt(uVar18,1);
        uVar21 = NEON_uaddlv(uVar22,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar21)) goto LAB_00161dc8;
        if (1 < uVar20) {
          uVar20 = 1L << (-LZCOUNT(uVar20 - 1) & 0x3fU);
        }
      }
      if (uVar16 <= uVar20) {
        uVar16 = uVar20;
      }
      if (uVar16 < uVar18) goto LAB_00161d34;
    }
    uVar20 = *(ulong *)(this + 8);
    if ((uVar20 & uVar20 - 1) == 0) {
      unaff_x20 = uVar20 - 1 & uVar8;
    }
    else {
      unaff_x20 = uVar8;
      if (uVar20 <= uVar8) {
        uVar16 = 0;
        if (uVar20 != 0) {
          uVar16 = uVar8 / uVar20;
        }
        unaff_x20 = uVar8 - uVar16 * uVar20;
      }
    }
  }
  lVar12 = *(long *)this;
  plVar13 = *(long **)(lVar12 + unaff_x20 * 8);
  if (plVar13 == (long *)0x0) {
    lVar14 = *(long *)pAVar1;
    *(long **)pAVar1 = plVar9;
    *plVar9 = lVar14;
    *(AnyMap **)(lVar12 + unaff_x20 * 8) = pAVar1;
    if (*plVar9 == 0) goto LAB_00161e70;
    uVar16 = *(ulong *)(*plVar9 + 8);
    if ((uVar20 & uVar20 - 1) == 0) {
      uVar16 = uVar16 & uVar20 - 1;
    }
    else if (uVar20 <= uVar16) {
      uVar18 = 0;
      if (uVar20 != 0) {
        uVar18 = uVar16 / uVar20;
      }
      uVar16 = uVar16 - uVar18 * uVar20;
    }
    plVar13 = (long *)(*(long *)this + uVar16 * 8);
  }
  else {
    *plVar9 = *plVar13;
  }
  *plVar13 = (long)plVar9;
LAB_00161e70:
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
LAB_00161e7c:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00161efc  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<mar...td::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>const&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,
   0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   const&>(std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,0ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<mar___td::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>const_>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined1 uStack_39;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  puVar4 = *(undefined4 **)param_1;
  uVar1 = puVar4[10];
  if (uVar1 != 0xffffffff) {
    if (uVar1 == 0) {
      *(undefined4 *)param_2 = *(undefined4 *)param_3;
      goto LAB_00161f68;
    }
                    /* try { // try from 00161f4c to 00161f57 has its CatchHandler @ 00161f90 */
    param_1 = (_lambda_auto_1__auto_2____1_ *)
              (*(code *)(&PTR_FUN_001b9458)[uVar1])(&uStack_39,puVar4);
  }
  uVar2 = *(undefined4 *)param_3;
  puVar4[10] = 0;
  *puVar4 = uVar2;
LAB_00161f68:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return (_func_decltype_auto *)param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00161f94  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<mar...td::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>const&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,
   1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   const&>(std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,1ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<mar___td::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>const_>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  uint uVar1;
  __base _Var2;
  long lVar3;
  __base *p_Var4;
  undefined1 uStack_39;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  p_Var4 = *(__base **)param_1;
  uVar1 = *(uint *)(p_Var4 + 0x28);
  if (uVar1 != 0xffffffff) {
    if (uVar1 == 1) {
      *param_2 = *param_3;
      goto LAB_00162008;
    }
                    /* try { // try from 00161fe8 to 00161ff3 has its CatchHandler @ 00162030 */
    param_1 = (_lambda_auto_1__auto_2____1_ *)
              (*(code *)(&PTR_FUN_001b9458)[uVar1])(&uStack_39,p_Var4);
  }
  _Var2 = *param_3;
  *(undefined4 *)(p_Var4 + 0x28) = 1;
  *p_Var4 = _Var2;
LAB_00162008:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return (_func_decltype_auto *)param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00162034  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul,2ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<mar...td::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>const&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul,
   2ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   const&>(std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul,2ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<mar___td::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>const_>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 uStack_39;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puVar3 = *(undefined8 **)param_1;
  uVar1 = *(uint *)(puVar3 + 5);
  if (uVar1 != 0xffffffff) {
    if (uVar1 == 2) {
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      goto LAB_001620a8;
    }
                    /* try { // try from 00162088 to 00162093 has its CatchHandler @ 001620d0 */
    param_1 = (_lambda_auto_1__auto_2____1_ *)
              (*(code *)(&PTR_FUN_001b9458)[uVar1])(&uStack_39,puVar3);
  }
  uVar4 = *(undefined8 *)param_3;
  *(undefined4 *)(puVar3 + 5) = 2;
  *puVar3 = uVar4;
LAB_001620a8:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return (_func_decltype_auto *)param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001620d4  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<3ul,3ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<mar...td::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>const&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<3ul,
   3ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   const&>(std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<3ul,3ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<mar___td::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>const_>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 uStack_39;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puVar4 = *(undefined8 **)param_1;
  uVar1 = *(uint *)(puVar4 + 5);
  if (uVar1 != 0xffffffff) {
    if (uVar1 == 3) {
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      goto LAB_00162148;
    }
                    /* try { // try from 00162128 to 00162133 has its CatchHandler @ 00162170 */
    param_1 = (_lambda_auto_1__auto_2____1_ *)
              (*(code *)(&PTR_FUN_001b9458)[uVar1])(&uStack_39,puVar4);
  }
  uVar3 = *(undefined8 *)param_3;
  *(undefined4 *)(puVar4 + 5) = 3;
  *puVar4 = uVar3;
LAB_00162148:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return (_func_decltype_auto *)param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00162174  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<4ul,4ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<mar...td::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>const&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<4ul,
   4ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   const&>(std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<4ul,4ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<mar___td::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>const_>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  ulong uVar1;
  __base *p_Var2;
  uint uVar3;
  __base _Var4;
  long lVar5;
  _func_decltype_auto *p_Var6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 uStack_29;
  long local_28;
  
  lVar5 = tpidr_el0;
  local_28 = *(long *)(lVar5 + 0x28);
  puVar7 = *(undefined8 **)param_1;
  uVar3 = *(uint *)(puVar7 + 5);
  if (uVar3 == 4) {
    if (param_2 != param_3) {
      _Var4 = *param_3;
      if (((byte)*param_2 & 1) == 0) {
        if (((byte)_Var4 & 1) == 0) {
          if (*(long *)(lVar5 + 0x28) == local_28) {
            uVar9 = *(undefined8 *)(param_3 + 8);
            uVar8 = *(undefined8 *)param_3;
            *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
            *(undefined8 *)(param_2 + 8) = uVar9;
            *(undefined8 *)param_2 = uVar8;
            return (_func_decltype_auto *)param_1;
          }
        }
        else if (*(long *)(lVar5 + 0x28) == local_28) {
          p_Var6 = (_func_decltype_auto *)
                   FUN_001632d4(param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8)
                               );
          return p_Var6;
        }
      }
      else {
        uVar1 = *(ulong *)(param_3 + 8);
        p_Var2 = *(__base **)(param_3 + 0x10);
        if (((byte)_Var4 & 1) == 0) {
          p_Var2 = param_3 + 1;
          uVar1 = (ulong)((byte)_Var4 >> 1);
        }
        if (*(long *)(lVar5 + 0x28) == local_28) {
          p_Var6 = (_func_decltype_auto *)FUN_001633b4(param_2,p_Var2,uVar1);
          return p_Var6;
        }
      }
      goto LAB_001622d0;
    }
  }
  else {
    if (((byte)*param_3 & 1) == 0) {
      uStack_48 = *(undefined8 *)(param_3 + 8);
      local_50 = *(undefined8 *)param_3;
      local_40 = *(undefined8 *)(param_3 + 0x10);
    }
    else {
      param_1 = (_lambda_auto_1__auto_2____1_ *)
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                __init_copy_ctor_external
                          ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_50,*(char **)(param_3 + 0x10),*(ulong *)(param_3 + 8));
      uVar3 = *(uint *)(puVar7 + 5);
    }
    if (uVar3 != 0xffffffff) {
                    /* try { // try from 00162224 to 0016222f has its CatchHandler @ 001622d4 */
      param_1 = (_lambda_auto_1__auto_2____1_ *)
                (*(code *)(&PTR_FUN_001b9458)[uVar3])(&uStack_29,puVar7);
    }
    puVar7[2] = local_40;
    puVar7[1] = uStack_48;
    *puVar7 = local_50;
    *(undefined4 *)(puVar7 + 5) = 4;
  }
  if (*(long *)(lVar5 + 0x28) == local_28) {
    return (_func_decltype_auto *)param_1;
  }
LAB_001622d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001622d8  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<5ul,5ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<mar...td::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>const&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<5ul,
   5ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   const&>(std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<5ul,5ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<mar___td::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>const_>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  _lambda_auto_1__auto_2____1_ *p_Var8;
  long lVar9;
  _lambda_auto_1__auto_2____1_ *p_Var10;
  long lVar11;
  _lambda_auto_1__auto_2____1_ *p_Var12;
  _lambda_auto_1__auto_2____1_ *p_Var13;
  ulong uVar14;
  _lambda_auto_1__auto_2____1_ *local_a8;
  _lambda_auto_1__auto_2____1_ *local_a0;
  undefined1 uStack_91;
  _lambda_auto_1__auto_2____1_ *local_90;
  _lambda_auto_1__auto_2____1_ **pp_Stack_88;
  _lambda_auto_1__auto_2____1_ **local_80;
  undefined1 local_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  puVar7 = *(undefined8 **)param_1;
  if (*(int *)(puVar7 + 5) == 5) {
    if (param_2 != param_3) {
      lVar9 = *(long *)param_3;
      lVar1 = *(long *)(param_3 + 8);
      p_Var8 = *(_lambda_auto_1__auto_2____1_ **)param_2;
      p_Var12 = (_lambda_auto_1__auto_2____1_ *)(param_2 + 0x10);
      lVar4 = *(long *)p_Var12;
      lVar5 = lVar1 - lVar9 >> 4;
      uVar14 = lVar5 * -0x5555555555555555;
      if ((ulong)((lVar4 - (long)p_Var8 >> 4) * -0x5555555555555555) < uVar14) {
        if (p_Var8 != (_lambda_auto_1__auto_2____1_ *)0x0) {
          p_Var13 = *(_lambda_auto_1__auto_2____1_ **)(param_2 + 8);
          p_Var10 = p_Var8;
          if (p_Var13 != p_Var8) {
            do {
              p_Var10 = p_Var13 + -0x30;
              if (*(uint *)(p_Var13 + -8) != 0xffffffff) {
                    /* try { // try from 001623a4 to 001623af has its CatchHandler @ 00162798 */
                (*(code *)(&PTR_FUN_001b9458)[*(uint *)(p_Var13 + -8)])(&local_90,p_Var10);
              }
              *(undefined4 *)(p_Var13 + -8) = 0xffffffff;
              p_Var13 = p_Var10;
            } while (p_Var10 != p_Var8);
            p_Var10 = *(_lambda_auto_1__auto_2____1_ **)param_2;
          }
          *(_lambda_auto_1__auto_2____1_ **)(param_2 + 8) = p_Var8;
          operator_delete(p_Var10);
          lVar4 = 0;
          *(undefined8 *)param_2 = 0;
          *(undefined8 *)(param_2 + 8) = 0;
          *(undefined8 *)(param_2 + 0x10) = 0;
        }
        if (uVar14 < 0x555555555555556) {
          uVar6 = (lVar4 >> 4) * 0x5555555555555556;
          if (uVar6 < uVar14 || uVar6 + lVar5 * 0x5555555555555555 == 0) {
            uVar6 = uVar14;
          }
          if (0x2aaaaaaaaaaaaa9 < (ulong)((lVar4 >> 4) * -0x5555555555555555)) {
            uVar6 = 0x555555555555555;
          }
          if (uVar6 < 0x555555555555556) {
            param_1 = (_lambda_auto_1__auto_2____1_ *)operator_new(uVar6 * 0x30);
            pp_Stack_88 = &local_a8;
            *(_lambda_auto_1__auto_2____1_ **)(param_2 + 0x10) = param_1 + uVar6 * 0x30;
            local_80 = &local_a0;
            *(_lambda_auto_1__auto_2____1_ **)param_2 = param_1;
            *(_lambda_auto_1__auto_2____1_ **)(param_2 + 8) = param_1;
            local_78 = 0;
            p_Var8 = param_1;
            local_a8 = param_1;
            local_90 = p_Var12;
            if (lVar9 == lVar1) {
              *(_lambda_auto_1__auto_2____1_ **)(param_2 + 8) = param_1;
              local_a0 = param_1;
            }
            else {
              do {
                *p_Var8 = (_lambda_auto_1__auto_2____1_)0x0;
                *(undefined4 *)(p_Var8 + 0x28) = 0xffffffff;
                local_a0 = p_Var8;
                if (*(uint *)(lVar9 + 0x28) != 0xffffffff) {
                    /* try { // try from 00162648 to 00162657 has its CatchHandler @ 0016279c */
                  param_1 = (_lambda_auto_1__auto_2____1_ *)
                            (*(code *)(&
                                      PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<margelo_nitro_NullType,bool,double,long,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<margelo_nitro_AnyValue,std___ndk1_allocator<margelo_nitro_AnyValue>>,std___ndk1_unordered_map<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,margelo_nitro_AnyValue,std___ndk1_hash<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_equal_to<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_allocator<std___ndk1_pair<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___copy_constructor<std___ndk1___variant_detail___traits<marge___td___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>const_>_001b9490
                                      )[*(uint *)(lVar9 + 0x28)])(&uStack_91,p_Var8,lVar9);
                  *(undefined4 *)(p_Var8 + 0x28) = *(undefined4 *)(lVar9 + 0x28);
                }
                lVar9 = lVar9 + 0x30;
                p_Var8 = local_a0 + 0x30;
              } while (lVar9 != lVar1);
              *(_lambda_auto_1__auto_2____1_ **)(param_2 + 8) = p_Var8;
              local_a0 = p_Var8;
            }
            goto LAB_00162418;
          }
        }
        if (*(long *)(lVar3 + 0x28) == local_68) {
          FUN_0015e998();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 001623f4 with catch @ 00162784
                        */
          FUN_0015c8c8();
        }
        goto LAB_001627cc;
      }
      p_Var10 = *(_lambda_auto_1__auto_2____1_ **)(param_2 + 8);
      lVar4 = (long)p_Var10 - (long)p_Var8;
      if ((ulong)((lVar4 >> 4) * -0x5555555555555555) < uVar14) {
        lVar11 = lVar9;
        lVar5 = lVar4;
        if (p_Var10 != p_Var8) {
          do {
            uVar2 = *(uint *)(lVar11 + 0x28);
            if (*(uint *)(p_Var8 + 0x28) == 0xffffffff) {
              if (uVar2 != 0xffffffff) goto LAB_00162484;
            }
            else if (uVar2 == 0xffffffff) {
                    /* try { // try from 001624d0 to 001624db has its CatchHandler @ 0016278c */
              param_1 = (_lambda_auto_1__auto_2____1_ *)
                        (*(code *)(&PTR_FUN_001b9458)[*(uint *)(p_Var8 + 0x28)])(&local_90,p_Var8);
              *(undefined4 *)(p_Var8 + 0x28) = 0xffffffff;
            }
            else {
LAB_00162484:
              local_90 = p_Var8;
              param_1 = (_lambda_auto_1__auto_2____1_ *)
                        (*(code *)(&
                                  PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___assignment<std___ndk1___variant_detail___traits<margelo_nitro_NullType,bool,double,long,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<margelo_nitro_AnyValue,std___ndk1_allocator<margelo_nitro_AnyValue>>,std___ndk1_unordered_map<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,margelo_nitro_AnyValue,std___ndk1_hash<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_equal_to<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_allocator<std___ndk1_pair<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>>___generic_assign[abi:ne180000]<std___ndk1___variant_detail___copy_assignment<std___ndk1___variant_detail___traits<mar___td___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>const_>_001b6b60
                                  )[uVar2])(&local_90,p_Var8,lVar11);
            }
            lVar5 = lVar5 + -0x30;
            p_Var8 = p_Var8 + 0x30;
            lVar11 = lVar11 + 0x30;
          } while (lVar5 != 0);
          p_Var8 = *(_lambda_auto_1__auto_2____1_ **)(param_2 + 8);
        }
        pp_Stack_88 = &local_a8;
        local_80 = &local_a0;
        local_78 = 0;
        local_90 = p_Var12;
        local_a8 = p_Var8;
        for (lVar9 = lVar9 + lVar4; local_a0 = p_Var8, lVar9 != lVar1; lVar9 = lVar9 + 0x30) {
          *p_Var8 = (_lambda_auto_1__auto_2____1_)0x0;
          *(undefined4 *)(p_Var8 + 0x28) = 0xffffffff;
          if (*(uint *)(lVar9 + 0x28) != 0xffffffff) {
                    /* try { // try from 001626f4 to 00162703 has its CatchHandler @ 00162794 */
            param_1 = (_lambda_auto_1__auto_2____1_ *)
                      (*(code *)(&
                                PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<margelo_nitro_NullType,bool,double,long,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<margelo_nitro_AnyValue,std___ndk1_allocator<margelo_nitro_AnyValue>>,std___ndk1_unordered_map<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,margelo_nitro_AnyValue,std___ndk1_hash<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_equal_to<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_allocator<std___ndk1_pair<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___copy_constructor<std___ndk1___variant_detail___traits<marge___td___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>const_>_001b9490
                                )[*(uint *)(lVar9 + 0x28)])(&uStack_91,p_Var8,lVar9);
            *(undefined4 *)(p_Var8 + 0x28) = *(undefined4 *)(lVar9 + 0x28);
          }
          p_Var8 = local_a0 + 0x30;
        }
        *(_lambda_auto_1__auto_2____1_ **)(param_2 + 8) = p_Var8;
      }
      else {
        if (lVar9 != lVar1) {
          do {
            uVar2 = *(uint *)(lVar9 + 0x28);
            if (*(uint *)(p_Var8 + 0x28) == 0xffffffff) {
              if (uVar2 != 0xffffffff) goto LAB_00162510;
            }
            else if (uVar2 == 0xffffffff) {
                    /* try { // try from 00162554 to 0016255f has its CatchHandler @ 00162788 */
              param_1 = (_lambda_auto_1__auto_2____1_ *)
                        (*(code *)(&PTR_FUN_001b9458)[*(uint *)(p_Var8 + 0x28)])(&local_90,p_Var8);
              *(undefined4 *)(p_Var8 + 0x28) = 0xffffffff;
            }
            else {
LAB_00162510:
              local_90 = p_Var8;
              param_1 = (_lambda_auto_1__auto_2____1_ *)
                        (*(code *)(&
                                  PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___assignment<std___ndk1___variant_detail___traits<margelo_nitro_NullType,bool,double,long,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<margelo_nitro_AnyValue,std___ndk1_allocator<margelo_nitro_AnyValue>>,std___ndk1_unordered_map<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,margelo_nitro_AnyValue,std___ndk1_hash<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_equal_to<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_allocator<std___ndk1_pair<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>>___generic_assign[abi:ne180000]<std___ndk1___variant_detail___copy_assignment<std___ndk1___variant_detail___traits<mar___td___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>const_>_001b6b60
                                  )[uVar2])(&local_90,p_Var8,lVar9);
            }
            lVar9 = lVar9 + 0x30;
            p_Var8 = p_Var8 + 0x30;
          } while (lVar9 != lVar1);
          p_Var10 = *(_lambda_auto_1__auto_2____1_ **)(param_2 + 8);
        }
        while (p_Var10 != p_Var8) {
          if (*(uint *)(p_Var10 + -8) != 0xffffffff) {
                    /* try { // try from 00162758 to 00162763 has its CatchHandler @ 00162790 */
            param_1 = (_lambda_auto_1__auto_2____1_ *)
                      (*(code *)(&PTR_FUN_001b9458)[*(uint *)(p_Var10 + -8)])
                                (&local_90,p_Var10 + -0x30);
          }
          *(undefined4 *)(p_Var10 + -8) = 0xffffffff;
          p_Var10 = p_Var10 + -0x30;
        }
        *(_lambda_auto_1__auto_2____1_ **)(param_2 + 8) = p_Var8;
      }
    }
  }
  else {
    local_90 = (_lambda_auto_1__auto_2____1_ *)0x0;
    pp_Stack_88 = (_lambda_auto_1__auto_2____1_ **)0x0;
    local_80 = (_lambda_auto_1__auto_2____1_ **)0x0;
    param_1 = (_lambda_auto_1__auto_2____1_ *)
              FUN_0015e810(&local_90,*(long *)param_3,*(long *)(param_3 + 8),
                           (*(long *)(param_3 + 8) - *(long *)param_3 >> 4) * -0x5555555555555555);
    if (*(uint *)(puVar7 + 5) != 0xffffffff) {
                    /* try { // try from 001623f4 to 001623ff has its CatchHandler @ 00162784 */
      param_1 = (_lambda_auto_1__auto_2____1_ *)
                (*(code *)(&PTR_FUN_001b9458)[*(uint *)(puVar7 + 5)])(&local_a0,puVar7);
    }
    *(undefined4 *)(puVar7 + 5) = 5;
    puVar7[1] = pp_Stack_88;
    *puVar7 = local_90;
    puVar7[2] = local_80;
  }
LAB_00162418:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return (_func_decltype_auto *)param_1;
  }
LAB_001627cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001627d0  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<6ul,6ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<mar...td::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>const&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<6ul,
   6ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   const&>(std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<6ul,6ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__copy_assignment<std::__ndk1::__variant_detail::__traits<mar___td::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>const_>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  uint uVar1;
  _lambda_auto_1__auto_2____1_ _Var2;
  ulong uVar3;
  long lVar4;
  _lambda_auto_1__auto_2____1_ *p_Var5;
  __base *p_Var6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  __base *p_Var10;
  undefined8 *puVar11;
  _lambda_auto_1__auto_2____1_ *p_Var12;
  void *pvVar13;
  _lambda_auto_1__auto_2____1_ *p_Var14;
  _lambda_auto_1__auto_2____1_ *p_Var15;
  undefined8 uVar16;
  undefined1 uStack_91;
  _lambda_auto_1__auto_2____1_ *local_90;
  __base *local_88;
  void *local_80;
  long local_78;
  undefined4 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puVar11 = *(undefined8 **)param_1;
  if (*(int *)(puVar11 + 5) == 6) {
    if (param_2 != param_3) {
      lVar8 = *(long *)(param_2 + 8);
      *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
      p_Var14 = *(_lambda_auto_1__auto_2____1_ **)(param_3 + 0x10);
      if (lVar8 != 0) {
        lVar9 = 0;
        do {
          *(undefined8 *)(*(long *)param_2 + lVar9 * 8) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar8 != lVar9);
        p_Var12 = *(_lambda_auto_1__auto_2____1_ **)(param_2 + 0x10);
        *(undefined8 *)(param_2 + 0x10) = 0;
        *(undefined8 *)(param_2 + 0x18) = 0;
        while (p_Var12 != (_lambda_auto_1__auto_2____1_ *)0x0) {
          if (p_Var14 == (_lambda_auto_1__auto_2____1_ *)0x0) goto LAB_00162b64;
          if (p_Var12 != p_Var14) {
            _Var2 = p_Var14[0x10];
            if (((byte)p_Var12[0x10] & 1) == 0) {
              if (((byte)_Var2 & 1) == 0) {
                uVar16 = *(undefined8 *)(p_Var14 + 0x18);
                uVar7 = *(undefined8 *)(p_Var14 + 0x10);
                *(undefined8 *)(p_Var12 + 0x20) = *(undefined8 *)(p_Var14 + 0x20);
                *(undefined8 *)(p_Var12 + 0x18) = uVar16;
                *(undefined8 *)(p_Var12 + 0x10) = uVar7;
              }
              else {
                FUN_001632d4(p_Var12 + 0x10,*(undefined8 *)(p_Var14 + 0x20),
                             *(undefined8 *)(p_Var14 + 0x18));
              }
            }
            else {
              uVar3 = (ulong)((byte)_Var2 >> 1);
              p_Var15 = p_Var14 + 0x11;
              if (((byte)_Var2 & 1) != 0) {
                uVar3 = *(ulong *)(p_Var14 + 0x18);
                p_Var15 = *(_lambda_auto_1__auto_2____1_ **)(p_Var14 + 0x20);
              }
                    /* try { // try from 001628ac to 001628c3 has its CatchHandler @ 00162bac */
              FUN_001633b4(p_Var12 + 0x10,p_Var15,uVar3);
            }
          }
          uVar1 = *(uint *)(p_Var14 + 0x50);
          if (*(uint *)(p_Var12 + 0x50) == 0xffffffff) {
            if (uVar1 != 0xffffffff) goto LAB_001628fc;
          }
          else if (uVar1 == 0xffffffff) {
                    /* try { // try from 001628e4 to 001628eb has its CatchHandler @ 00162ba0 */
            (*(code *)(&PTR_FUN_001b9458)[*(uint *)(p_Var12 + 0x50)])(&local_90);
            *(undefined4 *)(p_Var12 + 0x50) = 0xffffffff;
          }
          else {
LAB_001628fc:
                    /* try { // try from 00162904 to 0016290f has its CatchHandler @ 00162bac */
            local_90 = p_Var12 + 0x28;
            (*(code *)(&
                      PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___assignment<std___ndk1___variant_detail___traits<margelo_nitro_NullType,bool,double,long,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<margelo_nitro_AnyValue,std___ndk1_allocator<margelo_nitro_AnyValue>>,std___ndk1_unordered_map<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,margelo_nitro_AnyValue,std___ndk1_hash<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_equal_to<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_allocator<std___ndk1_pair<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>>___generic_assign[abi:ne180000]<std___ndk1___variant_detail___copy_assignment<std___ndk1___variant_detail___traits<mar___td___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>const_>_001b6b60
                      )[uVar1])(&local_90,p_Var12 + 0x28,p_Var14 + 0x28);
          }
          p_Var15 = *(_lambda_auto_1__auto_2____1_ **)p_Var12;
                    /* try { // try from 00162914 to 0016291f has its CatchHandler @ 00162ba8 */
          param_1 = (_lambda_auto_1__auto_2____1_ *)FUN_00162c2c(param_2,p_Var12);
          p_Var14 = *(_lambda_auto_1__auto_2____1_ **)p_Var14;
          p_Var12 = p_Var15;
        }
      }
      if (p_Var14 != (_lambda_auto_1__auto_2____1_ *)0x0) {
        do {
          p_Var12 = (_lambda_auto_1__auto_2____1_ *)operator_new(0x58);
          *(undefined8 *)p_Var12 = 0;
          *(undefined8 *)(p_Var12 + 8) = 0;
          local_80 = (void *)((ulong)local_80 & 0xffffffffffffff00);
          local_90 = p_Var12;
          local_88 = param_2 + 0x10;
          if (((byte)p_Var14[0x10] & 1) == 0) {
            uVar16 = *(undefined8 *)(p_Var14 + 0x18);
            uVar7 = *(undefined8 *)(p_Var14 + 0x10);
            *(undefined8 *)(p_Var12 + 0x20) = *(undefined8 *)(p_Var14 + 0x20);
            *(undefined8 *)(p_Var12 + 0x18) = uVar16;
            *(undefined8 *)(p_Var12 + 0x10) = uVar7;
          }
          else {
                    /* try { // try from 00162980 to 00162987 has its CatchHandler @ 00162bd0 */
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            __init_copy_ctor_external
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)(p_Var12 + 0x10),*(char **)(p_Var14 + 0x20),*(ulong *)(p_Var14 + 0x18));
          }
          p_Var12[0x28] = (_lambda_auto_1__auto_2____1_)0x0;
          *(undefined4 *)(p_Var12 + 0x50) = 0xffffffff;
          p_Var15 = p_Var12;
          if (*(uint *)(p_Var14 + 0x50) != 0xffffffff) {
                    /* try { // try from 001629a8 to 001629b7 has its CatchHandler @ 00162bd4 */
            (*(code *)(&
                      PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<margelo_nitro_NullType,bool,double,long,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<margelo_nitro_AnyValue,std___ndk1_allocator<margelo_nitro_AnyValue>>,std___ndk1_unordered_map<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,margelo_nitro_AnyValue,std___ndk1_hash<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_equal_to<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_allocator<std___ndk1_pair<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___copy_constructor<std___ndk1___variant_detail___traits<marge___td___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>const_>_001b9490
                      )[*(uint *)(p_Var14 + 0x50)])(&uStack_91,p_Var12 + 0x28,p_Var14 + 0x28);
            *(undefined4 *)(p_Var12 + 0x50) = *(undefined4 *)(p_Var14 + 0x50);
            p_Var15 = local_90;
          }
          local_80 = (void *)CONCAT71(local_80._1_7_,1);
          uVar3 = (ulong)((byte)p_Var12[0x10] >> 1);
          p_Var5 = p_Var12 + 0x11;
          if (((byte)p_Var12[0x10] & 1) != 0) {
            uVar3 = *(ulong *)(p_Var12 + 0x18);
            p_Var5 = *(_lambda_auto_1__auto_2____1_ **)(p_Var12 + 0x20);
          }
          uVar7 = FUN_0015c450(p_Var5,uVar3);
          *(undefined8 *)(p_Var12 + 8) = uVar7;
                    /* try { // try from 001629ec to 001629f7 has its CatchHandler @ 00162c04 */
          param_1 = (_lambda_auto_1__auto_2____1_ *)FUN_00162c2c(param_2,p_Var15);
          p_Var14 = *(_lambda_auto_1__auto_2____1_ **)p_Var14;
        } while (p_Var14 != (_lambda_auto_1__auto_2____1_ *)0x0);
      }
    }
  }
  else {
    FUN_0015ede8(&local_90,param_3);
    if (*(uint *)(puVar11 + 5) != 0xffffffff) {
                    /* try { // try from 00162a2c to 00162a37 has its CatchHandler @ 00162b9c */
      (*(code *)(&PTR_FUN_001b9458)[*(uint *)(puVar11 + 5)])(&uStack_91,puVar11);
    }
    p_Var6 = local_88;
    p_Var14 = local_90;
    local_90 = (_lambda_auto_1__auto_2____1_ *)0x0;
    *puVar11 = p_Var14;
    puVar11[1] = local_88;
    local_88 = (__base *)0x0;
    puVar11[2] = local_80;
    puVar11[3] = local_78;
    *(undefined4 *)(puVar11 + 4) = local_70;
    if (local_78 == 0) {
      *(undefined4 *)(puVar11 + 5) = 6;
      local_78 = 0;
      puVar11 = (undefined8 *)local_80;
      while (puVar11 != (undefined8 *)0x0) {
        pvVar13 = (void *)*puVar11;
        if (*(uint *)(puVar11 + 10) != 0xffffffff) {
                    /* try { // try from 00162ac8 to 00162ad3 has its CatchHandler @ 00162bcc */
          (*(code *)(&PTR_FUN_001b9458)[*(uint *)(puVar11 + 10)])(&uStack_91,puVar11 + 5);
        }
        *(undefined4 *)(puVar11 + 10) = 0xffffffff;
        if ((*(byte *)(puVar11 + 2) & 1) != 0) {
          operator_delete((void *)puVar11[4]);
        }
        operator_delete(puVar11);
        puVar11 = (undefined8 *)pvVar13;
      }
    }
    else {
      p_Var10 = *(__base **)((long)local_80 + 8);
      if (((ulong)p_Var6 & (ulong)(p_Var6 + -1)) == 0) {
        p_Var10 = (__base *)((ulong)(p_Var6 + -1) & (ulong)p_Var10);
      }
      else if (p_Var6 <= p_Var10) {
        uVar3 = 0;
        if (p_Var6 != (__base *)0x0) {
          uVar3 = (ulong)p_Var10 / (ulong)p_Var6;
        }
        p_Var10 = p_Var10 + -(uVar3 * (long)p_Var6);
      }
      *(undefined8 **)(p_Var14 + (long)p_Var10 * 8) = puVar11 + 2;
      local_80 = (void *)0x0;
      local_78 = 0;
      *(undefined4 *)(puVar11 + 5) = 6;
    }
    param_1 = local_90;
    local_90 = (_lambda_auto_1__auto_2____1_ *)0x0;
    if (param_1 != (_lambda_auto_1__auto_2____1_ *)0x0) {
      operator_delete(param_1);
    }
  }
LAB_00162b1c:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (_func_decltype_auto *)param_1;
LAB_00162b64:
  do {
    param_1 = p_Var12;
    p_Var12 = *(_lambda_auto_1__auto_2____1_ **)param_1;
    if (*(uint *)(param_1 + 0x50) != 0xffffffff) {
                    /* try { // try from 00162b78 to 00162b83 has its CatchHandler @ 00162ba4 */
      (*(code *)(&PTR_FUN_001b9458)[*(uint *)(param_1 + 0x50)])(&local_90,param_1 + 0x28);
    }
    *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
    if (((byte)param_1[0x10] & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x20));
    }
    operator_delete(param_1);
  } while (p_Var12 != (_lambda_auto_1__auto_2____1_ *)0x0);
  goto LAB_00162b1c;
}


// ===== 00162c2c  FUN_00162c2c =====

void FUN_00162c2c(long *param_1,long *param_2)

{
  bool bVar1;
  size_t sVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  void *pvVar10;
  char *pcVar11;
  long lVar12;
  void *pvVar13;
  char *pcVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  char *pcVar19;
  long *plVar20;
  ulong uVar21;
  size_t sVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  byte bVar26;
  ulong uVar27;
  undefined2 uVar28;
  undefined8 uVar29;
  
  lVar5 = tpidr_el0;
  lVar12 = *(long *)(lVar5 + 0x28);
  uVar21 = (ulong)(*(byte *)(param_2 + 2) >> 1);
  pcVar11 = (char *)((long)param_2 + 0x11);
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    uVar21 = param_2[3];
    pcVar11 = (char *)param_2[4];
  }
  uVar9 = FUN_0015c450(pcVar11,uVar21);
  param_2[1] = uVar9;
  uVar21 = param_1[1];
  if ((uVar21 == 0) || (*(float *)(param_1 + 4) * (float)uVar21 < (float)(param_1[3] + 1))) {
    if (uVar21 < 3) {
      uVar16 = 1;
    }
    else {
      uVar16 = (ulong)((uVar21 & uVar21 - 1) != 0);
    }
    uVar16 = uVar21 << 1 | uVar16;
    uVar18 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar16 <= uVar18) {
      uVar16 = uVar18;
    }
    if (uVar16 - 1 == 0) {
      uVar16 = 2;
    }
    else if ((uVar16 & uVar16 - 1) != 0) {
      uVar16 = std::__ndk1::__next_prime(uVar16);
      uVar21 = param_1[1];
    }
    if (uVar21 <= uVar16 && uVar16 != uVar21) {
LAB_00162d20:
      if (uVar16 >> 0x3d != 0) {
        if (*(long *)(lVar5 + 0x28) == lVar12) {
          FUN_0015d614();
        }
        goto LAB_00163220;
      }
      pvVar10 = operator_new(uVar16 << 3);
      pvVar13 = (void *)*param_1;
      *param_1 = (long)pvVar10;
      if (pvVar13 != (void *)0x0) {
        operator_delete(pvVar13);
      }
      uVar21 = 0;
      param_1[1] = uVar16;
      do {
        *(undefined8 *)(*param_1 + uVar21 * 8) = 0;
        uVar21 = uVar21 + 1;
      } while (uVar16 != uVar21);
      plVar24 = (long *)param_1[2];
      uVar21 = uVar16;
      if (plVar24 != (long *)0x0) {
        uVar18 = plVar24[1];
        uVar29 = NEON_cnt(uVar16,1);
        uVar28 = NEON_uaddlv(uVar29,1);
        uVar15 = CONCAT62((int6)((ulong)uVar29 >> 0x10),uVar28) & 0xffffffff;
        if (uVar15 < 2) {
          uVar18 = uVar18 & uVar16 - 1;
        }
        else if (uVar16 <= uVar18) {
          uVar27 = 0;
          if (uVar16 != 0) {
            uVar27 = uVar18 / uVar16;
          }
          uVar18 = uVar18 - uVar27 * uVar16;
        }
        *(long **)(*param_1 + uVar18 * 8) = param_1 + 2;
        if ((long *)*plVar24 != (long *)0x0) {
          plVar23 = (long *)*plVar24;
          do {
            uVar27 = plVar23[1];
            if (uVar15 < 2) {
              uVar27 = uVar27 & uVar16 - 1;
            }
            else if (uVar16 <= uVar27) {
              uVar4 = 0;
              if (uVar16 != 0) {
                uVar4 = uVar27 / uVar16;
              }
              uVar27 = uVar27 - uVar4 * uVar16;
            }
            if (uVar27 != uVar18) {
              if (*(long *)(*param_1 + uVar27 * 8) == 0) {
                *(long **)(*param_1 + uVar27 * 8) = plVar24;
                uVar18 = uVar27;
              }
              else {
                plVar25 = plVar23;
                if ((long *)*plVar23 == (long *)0x0) {
                  plVar20 = (long *)0x0;
                }
                else {
                  bVar26 = *(byte *)(plVar23 + 2);
                  sVar22 = plVar23[3];
                  uVar4 = (ulong)(bVar26 >> 1);
                  if ((bVar26 & 1) != 0) {
                    uVar4 = sVar22;
                  }
                  plVar6 = (long *)*plVar23;
                  do {
                    plVar20 = plVar6;
                    bVar3 = *(byte *)(plVar20 + 2);
                    uVar17 = (ulong)(bVar3 >> 1);
                    if ((bVar3 & 1) != 0) {
                      uVar17 = plVar20[3];
                    }
                    if (uVar4 != uVar17) goto LAB_00162f48;
                    pcVar11 = (char *)((long)plVar20 + 0x11);
                    if ((bVar3 & 1) != 0) {
                      pcVar11 = (char *)plVar20[4];
                    }
                    if ((bVar26 & 1) == 0) {
                      pcVar14 = (char *)((long)plVar23 + 0x11);
                      uVar17 = (ulong)(bVar26 >> 1);
                      if (1 < bVar26) {
                        do {
                          if (*pcVar14 != *pcVar11) goto LAB_00162f48;
                          uVar17 = uVar17 - 1;
                          pcVar11 = pcVar11 + 1;
                          pcVar14 = pcVar14 + 1;
                        } while (uVar17 != 0);
                      }
                    }
                    else {
                      iVar8 = memcmp((void *)plVar23[4],pcVar11,sVar22);
                      if (iVar8 != 0) goto LAB_00162f48;
                    }
                    plVar6 = (long *)*plVar20;
                    plVar25 = plVar20;
                  } while ((long *)*plVar20 != (long *)0x0);
                  plVar20 = (long *)0x0;
                }
LAB_00162f48:
                *plVar24 = (long)plVar20;
                *plVar25 = **(long **)(*param_1 + uVar27 * 8);
                **(undefined8 **)(*param_1 + uVar27 * 8) = plVar23;
                plVar23 = plVar24;
              }
            }
            plVar25 = (long *)*plVar23;
            plVar24 = plVar23;
            plVar23 = plVar25;
          } while (plVar25 != (long *)0x0);
        }
      }
    }
    else {
      if (uVar21 <= uVar16) goto LAB_00162f78;
      uVar18 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar21 < 3) {
LAB_001631c4:
        uVar18 = std::__ndk1::__next_prime(uVar18);
      }
      else {
        uVar29 = NEON_cnt(uVar21,1);
        uVar28 = NEON_uaddlv(uVar29,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar29 >> 0x10),uVar28)) goto LAB_001631c4;
        if (1 < uVar18) {
          uVar18 = 1L << (-LZCOUNT(uVar18 - 1) & 0x3fU);
        }
      }
      if (uVar16 <= uVar18) {
        uVar16 = uVar18;
      }
      if (uVar16 < uVar21) {
        if (uVar16 != 0) goto LAB_00162d20;
        pvVar10 = (void *)*param_1;
        *param_1 = 0;
        if (pvVar10 != (void *)0x0) {
          operator_delete(pvVar10);
        }
        param_1[1] = 0;
        uVar21 = 0;
      }
      else {
        uVar21 = param_1[1];
      }
    }
  }
LAB_00162f78:
  uVar29 = NEON_cnt(uVar21,1);
  uVar28 = NEON_uaddlv(uVar29,1);
  uVar16 = CONCAT62((int6)((ulong)uVar29 >> 0x10),uVar28) & 0xffffffff;
  if (uVar16 < 2) {
    uVar18 = uVar21 - 1 & uVar9;
  }
  else {
    uVar18 = uVar9;
    if (uVar21 <= uVar9) {
      uVar18 = 0;
      if (uVar21 != 0) {
        uVar18 = uVar9 / uVar21;
      }
      uVar18 = uVar9 - uVar18 * uVar21;
    }
  }
  plVar24 = *(long **)(*param_1 + uVar18 * 8);
  if (plVar24 == (long *)0x0) {
    plVar23 = (long *)0x0;
  }
  else {
    bVar26 = 0;
    pcVar11 = (char *)((long)param_2 + 0x11);
    sVar22 = (ulong)(*(byte *)(param_2 + 2) >> 1);
    if ((*(byte *)(param_2 + 2) & 1) != 0) {
      pcVar11 = (char *)param_2[4];
      sVar22 = param_2[3];
    }
    do {
      plVar23 = plVar24;
      plVar24 = (long *)*plVar23;
      if (plVar24 == (long *)0x0) break;
      uVar15 = plVar24[1];
      if (uVar16 < 2) {
        uVar27 = uVar15 & uVar21 - 1;
      }
      else {
        uVar27 = uVar15;
        if (uVar21 <= uVar15) {
          uVar27 = 0;
          if (uVar21 != 0) {
            uVar27 = uVar15 / uVar21;
          }
          uVar27 = uVar15 - uVar27 * uVar21;
        }
      }
      if (uVar27 != uVar18) break;
      if (uVar15 == uVar9) {
        bVar3 = *(byte *)(plVar24 + 2);
        uVar15 = (ulong)(bVar3 >> 1);
        sVar2 = uVar15;
        if ((bVar3 & 1) != 0) {
          sVar2 = plVar24[3];
        }
        if (sVar2 != sVar22) goto LAB_00162fe0;
        if ((bVar3 & 1) == 0) {
          if (bVar3 < 2) {
            bVar7 = true;
          }
          else {
            pcVar14 = (char *)((long)plVar24 + 0x11);
            pcVar19 = pcVar11;
            do {
              uVar15 = uVar15 - 1;
              bVar7 = *pcVar14 == *pcVar19;
              if (!bVar7) break;
              pcVar14 = pcVar14 + 1;
              pcVar19 = pcVar19 + 1;
            } while (uVar15 != 0);
          }
        }
        else {
          iVar8 = memcmp((void *)plVar24[4],pcVar11,plVar24[3]);
          bVar7 = iVar8 == 0;
        }
      }
      else {
LAB_00162fe0:
        bVar7 = false;
      }
      bVar1 = (bool)(bVar26 & (bVar7 ^ 1U));
      bVar26 = bVar26 | bVar7;
    } while (!bVar1);
  }
  uVar9 = param_2[1];
  if (uVar16 < 2) {
    uVar9 = uVar21 - 1 & uVar9;
  }
  else if (uVar21 <= uVar9) {
    uVar18 = 0;
    if (uVar21 != 0) {
      uVar18 = uVar9 / uVar21;
    }
    uVar9 = uVar9 - uVar18 * uVar21;
  }
  if (plVar23 == (long *)0x0) {
    plVar24 = param_1 + 2;
    *param_2 = *plVar24;
    *plVar24 = (long)param_2;
    *(long **)(*param_1 + uVar9 * 8) = plVar24;
    if (*param_2 != 0) {
      uVar18 = *(ulong *)(*param_2 + 8);
      if (uVar16 < 2) {
        uVar18 = uVar18 & uVar21 - 1;
      }
      else if (uVar21 <= uVar18) {
        uVar9 = 0;
        if (uVar21 != 0) {
          uVar9 = uVar18 / uVar21;
        }
        uVar18 = uVar18 - uVar9 * uVar21;
      }
LAB_0016317c:
      *(long **)(*param_1 + uVar18 * 8) = param_2;
    }
  }
  else {
    *param_2 = *plVar23;
    *plVar23 = (long)param_2;
    if (*param_2 != 0) {
      uVar18 = *(ulong *)(*param_2 + 8);
      if (uVar16 < 2) {
        uVar18 = uVar18 & uVar21 - 1;
      }
      else if (uVar21 <= uVar18) {
        uVar16 = 0;
        if (uVar21 != 0) {
          uVar16 = uVar18 / uVar21;
        }
        uVar18 = uVar18 - uVar16 * uVar21;
      }
      if (uVar18 != uVar9) goto LAB_0016317c;
    }
  }
  param_1[3] = param_1[3] + 1;
  if (*(long *)(lVar5 + 0x28) == lVar12) {
    return;
  }
LAB_00163220:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00163224  FUN_00163224 =====

void FUN_00163224(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined1 uStack_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  do {
    pvVar2 = (void *)*param_1;
    if (*(uint *)(param_1 + 10) != 0xffffffff) {
                    /* try { // try from 00163280 to 0016328b has its CatchHandler @ 001632d0 */
      (*(code *)(&PTR_FUN_001b9458)[*(uint *)(param_1 + 10)])(&uStack_49,param_1 + 5);
    }
    *(undefined4 *)(param_1 + 10) = 0xffffffff;
    if ((*(byte *)(param_1 + 2) & 1) != 0) {
      operator_delete((void *)param_1[4]);
    }
    operator_delete(param_1);
    param_1 = (undefined8 *)pvVar2;
  } while (pvVar2 != (void *)0x0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001632d4  FUN_001632d4 =====

long * FUN_001632d4(long *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  void *__dest;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  if (param_3 < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)param_3 << 1);
    if (param_3 != 0) {
      memmove(__dest,param_2,param_3);
    }
  }
  else {
    if (param_3 + 0x11 < 0x27) {
      if (*(long *)(lVar2 + 0x28) == lVar3) {
        FUN_0015d7fc();
      }
      goto LAB_001633b0;
    }
    uVar1 = param_3;
    if (param_3 < 0x2d) {
      uVar1 = 0x2c;
    }
    __dest = operator_new((uVar1 | 0xf) + 1);
    memcpy(__dest,param_2,param_3);
    param_1[1] = param_3;
    param_1[2] = (long)__dest;
    *param_1 = (uVar1 | 0xf) + 2;
  }
  *(undefined1 *)((long)__dest + param_3) = 0;
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return param_1;
  }
LAB_001633b0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001633b4  FUN_001633b4 =====

ulong * FUN_001633b4(ulong *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  void *__dest;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  uVar4 = *param_1 & 0xfffffffffffffffe;
  if (param_3 < uVar4) {
    __dest = (void *)param_1[2];
    param_1[1] = param_3;
    if (param_3 != 0) {
      memmove(__dest,param_2,param_3);
    }
  }
  else {
    if (-uVar4 - 0x11 < (param_3 - uVar4) + 1) {
      if (*(long *)(lVar2 + 0x28) == lVar3) {
        FUN_0015d7fc();
      }
      goto LAB_001634ec;
    }
    pvVar5 = (void *)param_1[2];
    if ((*param_1 & 1) == 0) {
      pvVar5 = (void *)((long)param_1 + 1);
    }
    if (uVar4 - 1 < 0x7fffffffffffffe7) {
      uVar4 = (uVar4 - 1) * 2;
      uVar1 = param_3;
      if (param_3 <= uVar4) {
        uVar1 = uVar4;
      }
      uVar4 = 0x17;
      if (0x16 < uVar1) {
        uVar4 = (uVar1 | 0xf) + 1;
      }
    }
    else {
      uVar4 = 0xffffffffffffffef;
    }
    __dest = operator_new(uVar4);
    if (param_3 != 0) {
      memcpy(__dest,param_2,param_3);
    }
    operator_delete(pvVar5);
    param_1[1] = param_3;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar4 | 1;
  }
  *(undefined1 *)((long)__dest + param_3) = 0;
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return param_1;
  }
LAB_001634ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001634f0  margelo::nitro::AnyMap::getMap =====

/* margelo::nitro::AnyMap::getMap() */

void margelo::nitro::AnyMap::getMap(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00163528  margelo::nitro::AnyMap::merge =====

/* margelo::nitro::AnyMap::merge(std::__ndk1::shared_ptr<margelo::nitro::AnyMap> const&) */

void __thiscall margelo::nitro::AnyMap::merge(AnyMap *this,shared_ptr *param_1)

{
  AnyMap *pAVar1;
  size_t sVar2;
  size_t sVar3;
  void *__s2;
  uint uVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  ulong unaff_x21;
  byte *pbVar17;
  long *plVar18;
  ulong uVar19;
  undefined2 uVar20;
  undefined8 uVar21;
  long *local_80;
  AnyMap *pAStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  plVar18 = *(long **)(*(long *)param_1 + 0x10);
  if (plVar18 != (long *)0x0) {
    pAVar1 = this + 0x10;
    do {
      pbVar17 = (byte *)(plVar18 + 2);
      sVar3 = plVar18[3];
      __s2 = (void *)plVar18[4];
      if ((*pbVar17 & 1) == 0) {
        __s2 = (void *)((long)plVar18 + 0x11);
        sVar3 = (ulong)(*pbVar17 >> 1);
      }
      uVar9 = FUN_0015c450(__s2,sVar3);
      uVar19 = *(ulong *)(this + 8);
      if (uVar19 != 0) {
        uVar21 = NEON_cnt(uVar19,1);
        uVar20 = NEON_uaddlv(uVar21,1);
        uVar13 = CONCAT62((int6)((ulong)uVar21 >> 0x10),uVar20) & 0xffffffff;
        if (uVar13 < 2) {
          unaff_x21 = uVar19 - 1 & uVar9;
        }
        else {
          unaff_x21 = uVar9;
          if (uVar19 <= uVar9) {
            uVar11 = 0;
            if (uVar19 != 0) {
              uVar11 = uVar9 / uVar19;
            }
            unaff_x21 = uVar9 - uVar11 * uVar19;
          }
        }
        puVar10 = *(undefined8 **)(*(long *)this + unaff_x21 * 8);
        if ((puVar10 != (undefined8 *)0x0) && (plVar16 = (long *)*puVar10, plVar16 != (long *)0x0))
        {
          do {
            uVar11 = plVar16[1];
            if (uVar11 == uVar9) {
              bVar5 = *(byte *)(plVar16 + 2);
              sVar2 = (ulong)(bVar5 >> 1);
              if ((bVar5 & 1) != 0) {
                sVar2 = plVar16[3];
              }
              if (sVar2 == sVar3) {
                if ((bVar5 & 1) == 0) {
                  if (bVar5 < 2) goto LAB_001638f4;
                  uVar11 = 0;
                  while (*(char *)((long)plVar16 + uVar11 + 0x11) == *(char *)((long)__s2 + uVar11))
                  {
                    uVar11 = uVar11 + 1;
                    if (bVar5 >> 1 == uVar11) goto LAB_001638f4;
                  }
                }
                else {
                  iVar8 = memcmp((void *)plVar16[4],__s2,plVar16[3]);
                  if (iVar8 == 0) goto LAB_001638f4;
                }
              }
            }
            else {
              if (uVar13 < 2) {
                uVar11 = uVar11 & uVar19 - 1;
              }
              else if (uVar19 <= uVar11) {
                uVar6 = 0;
                if (uVar19 != 0) {
                  uVar6 = uVar11 / uVar19;
                }
                uVar11 = uVar11 - uVar6 * uVar19;
              }
              if (uVar11 != unaff_x21) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
      plVar16 = (long *)operator_new(0x58);
      local_70 = 0;
      *plVar16 = 0;
      plVar16[1] = uVar9;
      local_80 = plVar16;
      pAStack_78 = pAVar1;
      if ((*pbVar17 & 1) == 0) {
        lVar15 = plVar18[3];
        lVar12 = *(long *)pbVar17;
        plVar16[4] = plVar18[4];
        plVar16[3] = lVar15;
        plVar16[2] = lVar12;
      }
      else {
                    /* try { // try from 0016372c to 00163733 has its CatchHandler @ 0016396c */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(plVar16 + 2),(char *)plVar18[4],plVar18[3]);
      }
      lVar12 = *(long *)(this + 0x18);
      plVar16[10] = 0;
      plVar16[9] = 0;
      plVar16[8] = 0;
      plVar16[7] = 0;
      plVar16[6] = 0;
      plVar16[5] = 0;
      local_70 = 1;
      if ((uVar19 == 0) || (*(float *)(this + 0x20) * (float)uVar19 < (float)(lVar12 + 1))) {
        if (uVar19 < 3) {
          uVar13 = 1;
        }
        else {
          uVar13 = (ulong)((uVar19 & uVar19 - 1) != 0);
        }
        uVar13 = uVar13 | uVar19 << 1;
        uVar19 = (ulong)((float)(lVar12 + 1) / *(float *)(this + 0x20));
        if (uVar13 <= uVar19) {
          uVar13 = uVar19;
        }
        if (uVar13 - 1 == 0) {
          uVar13 = 2;
        }
        else if ((uVar13 & uVar13 - 1) != 0) {
                    /* try { // try from 001637bc to 0016383f has its CatchHandler @ 00163968 */
          uVar13 = std::__ndk1::__next_prime(uVar13);
        }
        uVar19 = *(ulong *)(this + 8);
        if (uVar19 < uVar13) {
LAB_001637d4:
          FUN_0015f314(this,uVar13);
        }
        else if (uVar13 < uVar19) {
          uVar11 = (ulong)((float)*(ulong *)(this + 0x18) / *(float *)(this + 0x20));
          if (uVar19 < 3) {
LAB_0016383c:
            uVar11 = std::__ndk1::__next_prime(uVar11);
          }
          else {
            uVar21 = NEON_cnt(uVar19,1);
            uVar20 = NEON_uaddlv(uVar21,1);
            if (1 < (uint)CONCAT62((int6)((ulong)uVar21 >> 0x10),uVar20)) goto LAB_0016383c;
            if (1 < uVar11) {
              uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
            }
          }
          if (uVar13 <= uVar11) {
            uVar13 = uVar11;
          }
          if (uVar13 < uVar19) goto LAB_001637d4;
        }
        uVar19 = *(ulong *)(this + 8);
        if ((uVar19 & uVar19 - 1) == 0) {
          unaff_x21 = uVar19 - 1 & uVar9;
        }
        else {
          unaff_x21 = uVar9;
          if (uVar19 <= uVar9) {
            uVar13 = 0;
            if (uVar19 != 0) {
              uVar13 = uVar9 / uVar19;
            }
            unaff_x21 = uVar9 - uVar13 * uVar19;
          }
        }
      }
      lVar12 = *(long *)this;
      plVar14 = *(long **)(lVar12 + unaff_x21 * 8);
      if (plVar14 == (long *)0x0) {
        lVar15 = *(long *)pAVar1;
        *(long **)pAVar1 = plVar16;
        *plVar16 = lVar15;
        *(AnyMap **)(lVar12 + unaff_x21 * 8) = pAVar1;
        if (*plVar16 != 0) {
          uVar9 = *(ulong *)(*plVar16 + 8);
          if ((uVar19 & uVar19 - 1) == 0) {
            uVar9 = uVar9 & uVar19 - 1;
          }
          else if (uVar19 <= uVar9) {
            uVar13 = 0;
            if (uVar19 != 0) {
              uVar13 = uVar9 / uVar19;
            }
            uVar9 = uVar9 - uVar13 * uVar19;
          }
          plVar14 = (long *)(*(long *)this + uVar9 * 8);
          goto LAB_001638e4;
        }
      }
      else {
        *plVar16 = *plVar14;
LAB_001638e4:
        *plVar14 = (long)plVar16;
      }
      *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
LAB_001638f4:
      uVar4 = *(uint *)(plVar18 + 10);
      if (*(uint *)(plVar16 + 10) == 0xffffffff) {
        if (uVar4 != 0xffffffff) goto code_r0x00163580;
      }
      else if (uVar4 == 0xffffffff) {
                    /* try { // try from 0016391c to 00163923 has its CatchHandler @ 00163964 */
        (*(code *)(&PTR_FUN_001b9458)[*(uint *)(plVar16 + 10)])(&local_80);
        *(undefined4 *)(plVar16 + 10) = 0xffffffff;
      }
      else {
code_r0x00163580:
        local_80 = plVar16 + 5;
        (*(code *)(&
                  PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___assignment<std___ndk1___variant_detail___traits<margelo_nitro_NullType,bool,double,long,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<margelo_nitro_AnyValue,std___ndk1_allocator<margelo_nitro_AnyValue>>,std___ndk1_unordered_map<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,margelo_nitro_AnyValue,std___ndk1_hash<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_equal_to<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_allocator<std___ndk1_pair<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>>___generic_assign[abi:ne180000]<std___ndk1___variant_detail___copy_assignment<std___ndk1___variant_detail___traits<mar___td___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>const_>_001b6b60
                  )[uVar4])(&local_80,plVar16 + 5,plVar18 + 5);
      }
      plVar18 = (long *)*plVar18;
    } while (plVar18 != (long *)0x0);
  }
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00163998  margelo::nitro::ArrayBuffer::wrap =====

/* margelo::nitro::ArrayBuffer::wrap(unsigned char*, unsigned long, std::__ndk1::function<void
   ()>&&) */

void __thiscall
margelo::nitro::ArrayBuffer::wrap(ArrayBuffer *this,uchar *param_1,ulong param_2,function *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *in_x8;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x70);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_001b6bf8;
                    /* try { // try from 001639f0 to 00163a03 has its CatchHandler @ 00163a34 */
  NativeArrayBuffer::NativeArrayBuffer
            ((NativeArrayBuffer *)(puVar2 + 4),(uchar *)this,(ulong)param_1,(function *)param_2);
  *in_x8 = (NativeArrayBuffer *)(puVar2 + 4);
  in_x8[1] = puVar2;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00163a64  margelo::nitro::NativeArrayBuffer::NativeArrayBuffer =====

/* margelo::nitro::NativeArrayBuffer::NativeArrayBuffer(unsigned char*, unsigned long,
   std::__ndk1::function<void ()>&&) */

void __thiscall
margelo::nitro::NativeArrayBuffer::NativeArrayBuffer
          (NativeArrayBuffer *this,uchar *param_1,ulong param_2,function *param_3)

{
  long lVar1;
  long lVar2;
  NativeArrayBuffer *pNVar3;
  function *pfVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  pNVar3 = (NativeArrayBuffer *)(param_3 + 0x20);
  pfVar4 = *(function **)pNVar3;
  *(undefined **)this = PTR_vtable_001b9e88 + 0x10;
  *(uchar **)(this + 8) = param_1;
  *(ulong *)(this + 0x10) = param_2;
  if (pfVar4 == (function *)0x0) {
    pNVar3 = this + 0x40;
  }
  else {
    if (pfVar4 == param_3) {
      *(NativeArrayBuffer **)(this + 0x40) = this + 0x20;
                    /* try { // try from 00163ad0 to 00163ad3 has its CatchHandler @ 00163af8 */
      (**(code **)(**(long **)pNVar3 + 0x18))();
      goto LAB_00163ad4;
    }
    *(function **)(this + 0x40) = pfVar4;
  }
  *(undefined8 *)pNVar3 = 0;
LAB_00163ad4:
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00163afc  margelo::nitro::NativeArrayBuffer::~NativeArrayBuffer =====

/* margelo::nitro::NativeArrayBuffer::~NativeArrayBuffer() */

void __thiscall margelo::nitro::NativeArrayBuffer::~NativeArrayBuffer(NativeArrayBuffer *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ~NativeArrayBuffer(this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00163b48  margelo::nitro::NativeArrayBuffer::size =====

/* margelo::nitro::NativeArrayBuffer::size() const */

void __thiscall margelo::nitro::NativeArrayBuffer::size(NativeArrayBuffer *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(this + 0x10));
}


// ===== 00163b84  margelo::nitro::NativeArrayBuffer::data =====

/* margelo::nitro::NativeArrayBuffer::data() */

void __thiscall margelo::nitro::NativeArrayBuffer::data(NativeArrayBuffer *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(this + 8));
}


// ===== 00163bc0  margelo::nitro::NativeArrayBuffer::isOwner =====

/* margelo::nitro::NativeArrayBuffer::isOwner() const */

void __thiscall margelo::nitro::NativeArrayBuffer::isOwner(NativeArrayBuffer *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(long *)(this + 0x40) != 0);
}


// ===== 00163c04  margelo::nitro::NativeArrayBuffer::~NativeArrayBuffer =====

/* margelo::nitro::NativeArrayBuffer::~NativeArrayBuffer() */

void __thiscall margelo::nitro::NativeArrayBuffer::~NativeArrayBuffer(NativeArrayBuffer *this)

{
  long lVar1;
  NativeArrayBuffer *pNVar2;
  NativeArrayBuffer *pNVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  if (*(long **)(this + 0x40) != (long *)0x0) {
                    /* try { // try from 00163c34 to 00163c37 has its CatchHandler @ 00163c90 */
    (**(code **)(**(long **)(this + 0x40) + 0x30))();
    pNVar2 = *(NativeArrayBuffer **)(this + 0x40);
    pNVar3 = this + 0x20;
    if (pNVar2 == pNVar3) {
      lVar5 = 4;
    }
    else {
      if (pNVar2 == (NativeArrayBuffer *)0x0) goto LAB_00163c68;
      lVar5 = 5;
      pNVar3 = pNVar2;
    }
    (**(code **)(*(long *)pNVar3 + lVar5 * 8))();
  }
LAB_00163c68:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jsi::MutableBuffer::~MutableBuffer((MutableBuffer *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00163c94  FUN_00163c94 =====

void FUN_00163c94(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_001b6bf8;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00163cd8  FUN_00163cd8 =====

void FUN_00163cd8(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_001b6bf8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00163d30  FUN_00163d30 =====

void FUN_00163d30(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    margelo::nitro::NativeArrayBuffer::~NativeArrayBuffer((NativeArrayBuffer *)(param_1 + 0x20));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00163d6c  FUN_00163d6c =====

void FUN_00163d6c(void *param_1)

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


// ===== 00163da4  margelo::nitro::ArrayBuffer::copy =====

/* margelo::nitro::ArrayBuffer::copy(unsigned char const*, unsigned long) */

void __thiscall margelo::nitro::ArrayBuffer::copy(ArrayBuffer *this,uchar *param_1,ulong param_2)

{
  long lVar1;
  uchar *__dest;
  undefined8 *puVar2;
  undefined ***pppuVar3;
  undefined8 *in_x8;
  long lVar4;
  undefined **local_80;
  uchar *puStack_78;
  long *local_60;
  long local_48;
  
  pppuVar3 = &local_80;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __dest = (uchar *)operator_new__((ulong)param_1);
  memcpy(__dest,this,(size_t)param_1);
  local_80 = &PTR_FUN_001b6c48;
  puStack_78 = __dest;
  local_60 = (long *)&local_80;
                    /* try { // try from 00163e00 to 00163e07 has its CatchHandler @ 00163ec8 */
  puVar2 = (undefined8 *)operator_new(0x70);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_001b6bf8;
                    /* try { // try from 00163e20 to 00163e37 has its CatchHandler @ 00163e90 */
  NativeArrayBuffer::NativeArrayBuffer
            ((NativeArrayBuffer *)(puVar2 + 4),__dest,(ulong)param_1,(function *)&local_80);
  *in_x8 = (NativeArrayBuffer *)(puVar2 + 4);
  in_x8[1] = puVar2;
  if ((undefined ***)local_60 == &local_80) {
    lVar4 = 4;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00163e68;
    lVar4 = 5;
    pppuVar3 = (undefined ***)local_60;
  }
  (**(code **)((long)*pppuVar3 + lVar4 * 8))();
LAB_00163e68:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00163efc  FUN_00163efc =====

void FUN_00163efc(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00163f34  FUN_00163f34 =====

void FUN_00163f34(void *param_1)

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


// ===== 00163f6c  FUN_00163f6c =====

void FUN_00163f6c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_001b6c48;
  puVar2[1] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00163fc8  FUN_00163fc8 =====

void FUN_00163fc8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_001b6c48;
  param_2[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00164010  FUN_00164010 =====

void FUN_00164010(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00164048  FUN_00164048 =====

void FUN_00164048(void *param_1)

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


// ===== 00164080  FUN_00164080 =====

void FUN_00164080(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(void **)(param_1 + 8) == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete__(*(void **)(param_1 + 8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001640dc  FUN_001640dc =====

void FUN_001640dc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) != "ZN7margelo5nitro11ArrayBuffer4copyEPKhmE3$_0") {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0016412c  FUN_0016412c =====

pointer_____offset_0x10___ * FUN_0016412c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_001b6ca8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016416c  margelo::nitro::ArrayBuffer::copy =====

/* margelo::nitro::ArrayBuffer::copy(std::__ndk1::vector<unsigned char,
   std::__ndk1::allocator<unsigned char> > const&) */

void margelo::nitro::ArrayBuffer::copy(vector *param_1)

{
  long lVar1;
  ulong in_x2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    copy(*(ArrayBuffer **)param_1,(uchar *)(*(long *)(param_1 + 8) - (long)*(ArrayBuffer **)param_1)
         ,in_x2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001641b4  margelo::nitro::ArrayBuffer::move =====

/* margelo::nitro::ArrayBuffer::move(std::__ndk1::vector<unsigned char,
   std::__ndk1::allocator<unsigned char> >&&) */

void __thiscall margelo::nitro::ArrayBuffer::move(ArrayBuffer *this,vector *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined ***pppuVar3;
  undefined8 *in_x8;
  long lVar4;
  uchar *puVar5;
  undefined8 uVar6;
  undefined **local_80;
  undefined8 *puStack_78;
  undefined ***local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puStack_78 = (undefined8 *)operator_new(0x18);
  puVar5 = *(uchar **)this;
  uVar6 = *(undefined8 *)(this + 0x10);
  lVar4 = *(long *)(this + 8);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  local_80 = &PTR_FUN_001b6cc8;
  local_60 = &local_80;
  *puStack_78 = puVar5;
  puStack_78[2] = uVar6;
  puStack_78[1] = lVar4;
  *(undefined8 *)(this + 0x10) = 0;
                    /* try { // try from 00164218 to 0016421f has its CatchHandler @ 001642e8 */
  puVar2 = (undefined8 *)operator_new(0x70);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_001b6bf8;
                    /* try { // try from 00164244 to 00164257 has its CatchHandler @ 001642b0 */
  NativeArrayBuffer::NativeArrayBuffer
            ((NativeArrayBuffer *)(puVar2 + 4),puVar5,lVar4 - (long)puVar5,(function *)&local_80);
  *in_x8 = (NativeArrayBuffer *)(puVar2 + 4);
  in_x8[1] = puVar2;
  if (local_60 == &local_80) {
    lVar4 = 4;
    pppuVar3 = &local_80;
  }
  else {
    if (local_60 == (undefined ***)0x0) goto LAB_00164288;
    lVar4 = 5;
    pppuVar3 = local_60;
  }
  (*(code *)(*pppuVar3)[lVar4])();
LAB_00164288:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016431c  FUN_0016431c =====

void FUN_0016431c(void *param_1)

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


// ===== 00164354  FUN_00164354 =====

void FUN_00164354(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_001b6cc8;
  puVar2[1] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001643b0  FUN_001643b0 =====

void FUN_001643b0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_001b6cc8;
  param_2[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001643f8  FUN_001643f8 =====

void FUN_001643f8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00164430  FUN_00164430 =====

void FUN_00164430(void *param_1)

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


// ===== 00164468  FUN_00164468 =====

void FUN_00164468(long param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar4 = *(undefined8 **)(param_1 + 8);
  if (puVar4 == (undefined8 *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    pvVar2 = (void *)*puVar4;
    if (pvVar2 != (void *)0x0) {
      puVar4[1] = pvVar2;
      operator_delete(pvVar2);
    }
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      operator_delete(puVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001644e4  FUN_001644e4 =====

void FUN_001644e4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZN7margelo5nitro11ArrayBuffer4moveEONSt6__ndk16vectorIhNS2_9allocatorIhEEEEE3$_0") {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00164534  FUN_00164534 =====

pointer_____offset_0x10___ * FUN_00164534(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_001b6d28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00164574  margelo::nitro::ArrayBuffer::copy =====

/* margelo::nitro::ArrayBuffer::copy(std::__ndk1::shared_ptr<margelo::nitro::ArrayBuffer> const&) */

void margelo::nitro::ArrayBuffer::copy(shared_ptr *param_1)

{
  long lVar1;
  ArrayBuffer *this;
  uchar *puVar2;
  ulong in_x2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  this = (ArrayBuffer *)(**(code **)(**(long **)param_1 + 0x18))();
  puVar2 = (uchar *)(**(code **)(**(long **)param_1 + 0x10))(*(long **)param_1);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    copy(this,puVar2,in_x2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001645f8  margelo::nitro::ArrayBuffer::allocate =====

/* margelo::nitro::ArrayBuffer::allocate(unsigned long) */

void __thiscall margelo::nitro::ArrayBuffer::allocate(ArrayBuffer *this,ulong param_1)

{
  long lVar1;
  uchar *puVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  undefined8 *in_x8;
  long lVar5;
  undefined **local_80;
  uchar *puStack_78;
  long *local_60;
  long local_48;
  
  pppuVar4 = &local_80;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar2 = (uchar *)operator_new__((ulong)this);
  local_80 = &PTR_FUN_001b6d48;
  puStack_78 = puVar2;
  local_60 = (long *)&local_80;
                    /* try { // try from 00164640 to 00164647 has its CatchHandler @ 00164708 */
  puVar3 = (undefined8 *)operator_new(0x70);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_001b6bf8;
                    /* try { // try from 00164660 to 00164677 has its CatchHandler @ 001646d0 */
  NativeArrayBuffer::NativeArrayBuffer
            ((NativeArrayBuffer *)(puVar3 + 4),puVar2,(ulong)this,(function *)&local_80);
  *in_x8 = (NativeArrayBuffer *)(puVar3 + 4);
  in_x8[1] = puVar3;
  if ((undefined ***)local_60 == &local_80) {
    lVar5 = 4;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_001646a8;
    lVar5 = 5;
    pppuVar4 = (undefined ***)local_60;
  }
  (**(code **)((long)*pppuVar4 + lVar5 * 8))();
LAB_001646a8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016473c  FUN_0016473c =====

void FUN_0016473c(void *param_1)

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


// ===== 00164774  FUN_00164774 =====

void FUN_00164774(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_001b6d48;
  puVar2[1] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001647d0  FUN_001647d0 =====

void FUN_001647d0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_001b6d48;
  param_2[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00164818  FUN_00164818 =====

void FUN_00164818(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00164850  FUN_00164850 =====

void FUN_00164850(void *param_1)

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


// ===== 00164888  FUN_00164888 =====

void FUN_00164888(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(void **)(param_1 + 8) == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete__(*(void **)(param_1 + 8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001648e4  FUN_001648e4 =====

void FUN_001648e4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) != "ZN7margelo5nitro11ArrayBuffer8allocateEmE3$_0") {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00164934  FUN_00164934 =====

pointer_____offset_0x10___ * FUN_00164934(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_001b6da8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00164974  margelo::nitro::JSArrayBuffer::JSArrayBuffer =====

/* margelo::nitro::JSArrayBuffer::JSArrayBuffer(facebook::jsi::Runtime&,
   margelo::nitro::BorrowingReference<facebook::jsi::ArrayBuffer>) */

void __thiscall
margelo::nitro::JSArrayBuffer::JSArrayBuffer
          (JSArrayBuffer *this,undefined8 param_1,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  pthread_t pVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_vtable_001b9e90 + 0x10;
  *(undefined8 *)(this + 8) = param_1;
  uVar6 = *param_3;
  lVar4 = param_3[1];
  *(undefined **)this = puVar1;
  *(undefined8 *)(this + 0x10) = uVar6;
  *(long *)(this + 0x18) = lVar4;
  if (lVar4 != 0) {
    FUN_0015bb40(1);
  }
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    pVar3 = pthread_self();
    *(pthread_t *)(this + 0x20) = pVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001649ec  margelo::nitro::JSArrayBuffer::~JSArrayBuffer =====

/* margelo::nitro::JSArrayBuffer::~JSArrayBuffer() */

void __thiscall margelo::nitro::JSArrayBuffer::~JSArrayBuffer(JSArrayBuffer *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ~JSArrayBuffer(this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00164a38  margelo::nitro::JSArrayBuffer::size =====

/* margelo::nitro::JSArrayBuffer::size() const */

undefined8 __thiscall margelo::nitro::JSArrayBuffer::size(JSArrayBuffer *this)

{
  long lVar1;
  pthread_t pVar2;
  undefined8 uVar3;
  runtime_error *this_00;
  long lVar4;
  pthread_t pVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  pVar5 = *(pthread_t *)(this + 0x20);
  pVar2 = pthread_self();
  if (pVar2 == pVar5) {
    if ((*(long *)(this + 0x10) == 0) || ((*(byte *)(*(long *)(this + 0x18) + 0x10) & 1) != 0)) {
      if (*(long *)(lVar1 + 0x28) == lVar4) {
        return 0;
      }
    }
    else if (*(long *)(lVar1 + 0x28) == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00164ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(**(long **)(this + 8) + 0x248))
                        (*(long **)(this + 8),*(undefined8 *)(this + 0x10));
      return uVar3;
    }
  }
  else {
    this_00 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00164ac0 to 00164acb has its CatchHandler @ 00164b1c */
    std::runtime_error::runtime_error
              (this_00,
               "`size()` can only be accessed synchronously on the JS Thread! If you want to access it elsewhere, copy it first."
              );
    if (*(long *)(lVar1 + 0x28) == lVar4) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00164b44  margelo::nitro::JSArrayBuffer::data =====

/* margelo::nitro::JSArrayBuffer::data() */

undefined8 __thiscall margelo::nitro::JSArrayBuffer::data(JSArrayBuffer *this)

{
  long lVar1;
  pthread_t pVar2;
  undefined8 uVar3;
  runtime_error *this_00;
  long lVar4;
  pthread_t pVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  pVar5 = *(pthread_t *)(this + 0x20);
  pVar2 = pthread_self();
  if (pVar2 == pVar5) {
    if ((*(long *)(this + 0x10) == 0) || ((*(byte *)(*(long *)(this + 0x18) + 0x10) & 1) != 0)) {
      if (*(long *)(lVar1 + 0x28) == lVar4) {
        return 0;
      }
    }
    else if (*(long *)(lVar1 + 0x28) == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00164bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(**(long **)(this + 8) + 0x250))
                        (*(long **)(this + 8),*(undefined8 *)(this + 0x10));
      return uVar3;
    }
  }
  else {
    this_00 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00164bcc to 00164bd7 has its CatchHandler @ 00164c28 */
    std::runtime_error::runtime_error
              (this_00,
               "`data()` can only be accessed synchronously on the JS Thread! If you want to access it elsewhere, copy it first."
              );
    if (*(long *)(lVar1 + 0x28) == lVar4) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00164c50  margelo::nitro::JSArrayBuffer::isOwner =====

/* margelo::nitro::JSArrayBuffer::isOwner() const */

undefined8 margelo::nitro::JSArrayBuffer::isOwner(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00164c8c  margelo::nitro::JSArrayBuffer::~JSArrayBuffer =====

/* margelo::nitro::JSArrayBuffer::~JSArrayBuffer() */

void __thiscall margelo::nitro::JSArrayBuffer::~JSArrayBuffer(JSArrayBuffer *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00164cdc(this + 0x10);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::MutableBuffer::~MutableBuffer((MutableBuffer *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00164cdc  FUN_00164cdc =====

void FUN_00164cdc(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (param_1[1] != 0) {
    uVar2 = FUN_0015bb40(0xffffffffffffffff);
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


// ===== 00164dc0  _INIT_2 =====

void _INIT_2(void)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  if (((*PTR__globalCache_001b9ea8 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR__globalCache_001b9ea8), puVar2 = PTR__globalCache_001b9ea0,
     iVar3 != 0)) {
    *(undefined4 *)(PTR__globalCache_001b9ea0 + 0x20) = 0x3f800000;
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined8 *)puVar2 = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    __cxa_atexit(FUN_00164e74,puVar2,&PTR_LOOP_001b6ad0);
    if (*(long *)(lVar1 + 0x28) == lVar4) {
      __cxa_guard_release(PTR__globalCache_001b9ea8);
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00164e74  FUN_00164e74 =====

void FUN_00164e74(undefined8 *param_1)

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


// ===== 00164f1c  margelo::nitro::BoxedHybridObject::getPropertyNames =====

/* margelo::nitro::BoxedHybridObject::getPropertyNames(facebook::jsi::Runtime&) */

void margelo::nitro::BoxedHybridObject::getPropertyNames(Runtime *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  Runtime *in_x1;
  undefined8 *in_x8;
  basic_string local_60;
  undefined4 local_5f;
  undefined2 local_5b;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = (basic_string)0xa;
  local_5f = 0x6f626e75;
  local_5b = 0x78;
  in_x8[1] = 0;
  in_x8[2] = 0;
  *in_x8 = 0;
                    /* try { // try from 00164f6c to 00164f8f has its CatchHandler @ 00164ff0 */
  puVar2 = (undefined8 *)operator_new(8);
  *in_x8 = puVar2;
  in_x8[1] = puVar2;
  in_x8[2] = puVar2 + 1;
  PropNameIDCache::get(in_x1,&local_60);
                    /* try { // try from 00164f9c to 00164fa3 has its CatchHandler @ 00164fe4 */
  uVar3 = (**(code **)(*(long *)in_x1 + 0x90))();
  *puVar2 = uVar3;
  in_x8[1] = puVar2 + 1;
  if (((byte)local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00165028  FUN_00165028 =====

void FUN_00165028(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)*param_1;
  if (plVar4 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    plVar5 = (long *)param_1[1];
    plVar2 = plVar4;
    if (plVar5 != plVar4) {
      do {
        plVar5 = plVar5 + -1;
        if ((undefined8 *)*plVar5 != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)*plVar5)();
        }
      } while (plVar5 != plVar4);
      plVar2 = (long *)*param_1;
    }
    param_1[1] = plVar4;
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      operator_delete(plVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001650dc  margelo::nitro::BoxedHybridObject::get =====

/* margelo::nitro::BoxedHybridObject::get(facebook::jsi::Runtime&, facebook::jsi::PropNameID const&)
    */

void margelo::nitro::BoxedHybridObject::get(Runtime *param_1,PropNameID *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  undefined4 *in_x8;
  long lVar5;
  basic_string local_d0;
  undefined4 local_cf;
  undefined2 local_cb;
  void *local_c0;
  undefined8 local_b8;
  undefined **local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  undefined ***local_90;
  undefined **local_80;
  undefined8 uStack_78;
  void *local_70;
  undefined ***local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_80 = (undefined **)CONCAT17(local_80._7_1_,0x786f626e750a);
                    /* try { // try from 0016512c to 0016514f has its CatchHandler @ 00165338 */
  PropNameIDCache::get((Runtime *)param_2,(basic_string *)&local_80);
  uVar2 = (**(code **)(*(long *)param_2 + 200))(param_2);
  if (((ulong)local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((uVar2 & 1) == 0) {
    *in_x8 = 0;
    goto LAB_0016528c;
  }
  local_d0 = (basic_string)0xa;
  local_cf = 0x6f626e75;
  local_cb = 0x78;
                    /* try { // try from 00165184 to 0016518f has its CatchHandler @ 00165324 */
  uVar3 = PropNameIDCache::get((Runtime *)param_2,&local_d0);
  uStack_a8 = *(undefined8 *)(param_1 + 8);
  local_a0 = *(void **)(param_1 + 0x10);
  if (local_a0 != (void *)0x0) {
    FUN_0015c230(1,(long)local_a0 + 8);
  }
  local_90 = &local_b0;
  local_b0 = &PTR_FUN_001b6dc8;
  local_80 = &PTR_FUN_001b6dc8;
  local_60 = &local_80;
  uStack_78 = uStack_a8;
  local_70 = local_a0;
  if (local_a0 != (void *)0x0) {
    FUN_0015c230(1,(long)local_a0 + 8);
  }
                    /* try { // try from 001651e8 to 00165203 has its CatchHandler @ 001652b4 */
  (**(code **)(*(long *)param_2 + 0x278))(&local_b8,param_2,uVar3,0,&local_80);
  if (local_60 == &local_80) {
    lVar5 = 4;
    pppuVar4 = &local_80;
LAB_0016522c:
    (*(code *)(*pppuVar4)[lVar5])();
  }
  else if (local_60 != (undefined ***)0x0) {
    lVar5 = 5;
    pppuVar4 = local_60;
    goto LAB_0016522c;
  }
  *in_x8 = 7;
  *(undefined8 *)(in_x8 + 2) = local_b8;
  local_b8 = 0;
  if (local_90 == &local_b0) {
    lVar5 = 4;
    pppuVar4 = &local_b0;
LAB_00165270:
    (*(code *)(*pppuVar4)[lVar5])();
  }
  else if (local_90 != (undefined ***)0x0) {
    lVar5 = 5;
    pppuVar4 = local_90;
    goto LAB_00165270;
  }
  if (((byte)local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
LAB_0016528c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00165368  FUN_00165368 =====

void FUN_00165368(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_0015bb40(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 001653f4  FUN_001653f4 =====

void FUN_001653f4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_001b6dc8;
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
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


// ===== 0016548c  FUN_0016548c =====

void FUN_0016548c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_001b6dc8;
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
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


// ===== 00165518  FUN_00165518 =====

void FUN_00165518(long param_1)

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
  *puVar4 = &PTR_FUN_001b6dc8;
  puVar4[1] = uVar1;
  puVar4[2] = lVar2;
  if (lVar2 != 0) {
    FUN_0015c230(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


// ===== 00165590  FUN_00165590 =====

void FUN_00165590(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_001b6dc8;
  param_2[1] = uVar1;
  param_2[2] = lVar2;
  if (lVar2 != 0) {
    FUN_0015c230(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001655f4  FUN_001655f4 =====

void FUN_001655f4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x10);
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
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


// ===== 00165680  FUN_00165680 =====

void FUN_00165680(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)((long)param_1 + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
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


// ===== 00165700  FUN_00165700 =====

void FUN_00165700(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    margelo::nitro::HybridObject::toObject(*(Runtime **)(param_1 + 8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016573c  FUN_0016573c =====

void FUN_0016573c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZN7margelo5nitro17BoxedHybridObject3getERN8facebook3jsi7RuntimeERKNS3_10PropNameIDEE3$_0") {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0016578c  FUN_0016578c =====

pointer_____offset_0x10___ * FUN_0016578c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_001b6e28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001657cc  FUN_001657cc =====

void FUN_001657cc(HostObject *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    facebook::jsi::HostObject::~HostObject(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016584c  FUN_0016584c =====

void FUN_0016584c(HostObject *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  facebook::jsi::HostObject::~HostObject(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001658d4  margelo::nitro::HybridObject::HybridObject =====

/* margelo::nitro::HybridObject::HybridObject(char const*) */

void __thiscall margelo::nitro::HybridObject::HybridObject(HybridObject *this,char *param_1)

{
  long lVar1;
  undefined8 in_x2;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR___cxa_pure_virtual_001b9858;
  this[0x18] = (HybridObject)0x0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  lVar3 = *(long *)param_1;
  *(long *)this = lVar3;
  lVar3 = *(long *)(lVar3 + -0x18);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x30) = in_x2;
  *(undefined8 *)(this + lVar3) = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x58) = 0x3f800000;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00165950  margelo::nitro::HybridObject::HybridObject =====

/* margelo::nitro::HybridObject::HybridObject(char const*) */

void __thiscall margelo::nitro::HybridObject::HybridObject(HybridObject *this,char *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  puVar2 = PTR_vtable_001b9ed0;
  this[0x18] = (HybridObject)0x0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(char **)(this + 0x30) = param_1;
  *(undefined **)this = puVar2 + 0x18;
  *(undefined **)(this + 0x60) = puVar2 + 0x70;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x58) = 0x3f800000;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001659c4  margelo::nitro::HybridObject::loadHybridMethods =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::HybridObject::loadHybridMethods() */

void __thiscall margelo::nitro::HybridObject::loadHybridMethods(HybridObject *this)

{
  long lVar1;
  long lVar2;
  long **pplVar3;
  runtime_error *prVar4;
  long *plVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  uint local_160;
  undefined4 uStack_15c;
  undefined1 uStack_158;
  undefined7 uStack_157;
  long *local_150;
  basic_string local_148;
  undefined8 local_147;
  undefined1 local_13f;
  void *local_138;
  basic_string local_130;
  undefined4 uStack_12f;
  undefined2 uStack_12b;
  undefined1 uStack_129;
  long *plStack_128;
  long *local_120;
  basic_string local_118;
  undefined4 local_117;
  undefined1 local_113;
  void *local_108;
  undefined *local_100;
  long *plStack_f8;
  long *local_f0;
  long *local_e8;
  long *plStack_e0;
  undefined4 local_d8;
  long *local_d0;
  long *plStack_c8;
  long **local_b0;
  undefined8 local_a0;
  ulong local_98;
  long *plStack_90;
  long *local_88;
  long *local_80;
  long *plStack_78;
  long **local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar5 = *(long **)(this + 8);
  if (plVar5 == (long *)0x0) {
    local_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    local_100 = PTR_typeinfo_001b9ee8;
                    /* try { // try from 00165a04 to 00165a13 has its CatchHandler @ 00166604 */
    FUN_0016a8d8(&local_d0,&local_100,&local_80);
    plVar8 = plStack_c8;
    plVar5 = local_d0;
    plVar7 = *(long **)(this + 0x10);
    local_d0 = (long *)0x0;
    plStack_c8 = (long *)0x0;
    *(long **)(this + 0x10) = plVar8;
    *(long **)(this + 8) = plVar5;
    if ((plVar7 != (long *)0x0) && (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar7 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar5 = plStack_c8;
    if ((plStack_c8 != (long *)0x0) &&
       (lVar2 = FUN_0015bb40(0xffffffffffffffff,plStack_c8 + 1), lVar2 == 0)) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar5 = plStack_78;
    if ((plStack_78 != (long *)0x0) &&
       (lVar2 = FUN_0015bb40(0xffffffffffffffff,plStack_78 + 1), lVar2 == 0)) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar5 = *(long **)(this + 8);
  }
  puVar6 = *(undefined **)(*plVar5 + 8);
  plVar8 = plVar5;
  while (puVar6 != PTR_typeinfo_name_001b9ee0) {
    plVar8 = (long *)plVar8[1];
    if (plVar8 == (long *)0x0) {
      plStack_c8 = *(long **)(this + 0x10);
      local_d0 = plVar5;
      if (plStack_c8 != (long *)0x0) {
        FUN_0015c230(1,plStack_c8 + 1);
      }
      local_100 = PTR_typeinfo_001b9ee8;
                    /* try { // try from 00165b20 to 00165b2f has its CatchHandler @ 001665f8 */
      FUN_0016a8d8(&local_80,&local_100,&local_d0);
      plVar8 = plStack_78;
      plVar5 = local_80;
      plVar7 = *(long **)(this + 0x10);
      local_80 = (long *)0x0;
      plStack_78 = (long *)0x0;
      *(long **)(this + 0x10) = plVar8;
      *(long **)(this + 8) = plVar5;
      if ((plVar7 != (long *)0x0) &&
         (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar7 + 1), lVar2 == 0)) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar5 = plStack_78;
      if ((plStack_78 != (long *)0x0) &&
         (lVar2 = FUN_0015bb40(0xffffffffffffffff,plStack_78 + 1), lVar2 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar5 = plStack_c8;
      if ((plStack_c8 != (long *)0x0) &&
         (lVar2 = FUN_0015bb40(0xffffffffffffffff,plStack_c8 + 1), lVar2 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar8 = *(long **)(this + 8);
      lVar2 = plVar8[6];
      goto joined_r0x00165bd4;
    }
    puVar6 = *(undefined **)(*plVar8 + 8);
  }
  lVar2 = plVar8[6];
joined_r0x00165bd4:
  if (((lVar2 == 0) && (plVar8[0xb] == 0)) && (plVar8[0x10] == 0)) {
    local_118 = (basic_string)0x8;
    local_117 = 0x656d616e;
    local_113 = 0;
    lVar2 = FUN_001673e0(plVar8[8],plVar8[9],&local_118);
    if (lVar2 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001662d0 to 001662e3 has its CatchHandler @ 00166854 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_118);
                    /* try { // try from 001662e4 to 001662f7 has its CatchHandler @ 00166778 */
      FUN_0015dcfc(&local_d0,&local_80,"\" - a getter with that name already exists!");
                    /* try { // try from 001662fc to 00166333 has its CatchHandler @ 00166754 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
      }
      goto LAB_001668e0;
    }
    plVar5 = plVar8 + 3;
    lVar2 = FUN_001673e0(*plVar5,plVar8[4],&local_118);
    if (lVar2 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00166344 to 00166357 has its CatchHandler @ 00166850 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_118);
                    /* try { // try from 00166358 to 0016636b has its CatchHandler @ 00166750 */
      FUN_0015dcfc(&local_d0,&local_80,"\" - a method with that name already exists!");
                    /* try { // try from 00166370 to 001663a7 has its CatchHandler @ 00166724 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
      }
      goto LAB_001668e0;
    }
                    /* try { // try from 00165c28 to 00165c43 has its CatchHandler @ 0016668c */
    FUN_00168268(&local_d0,&local_118,PTR_getName_001b9ec0,0,1);
                    /* try { // try from 00165c44 to 00165c57 has its CatchHandler @ 0016667c */
    FUN_00167578(plVar8 + 8,&local_118,&local_118,&local_d0);
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_b0 == &local_d0) {
      lVar2 = 4;
      pplVar3 = &local_d0;
LAB_00165c8c:
      (*(code *)(*pplVar3)[lVar2])();
    }
    else if (local_b0 != (long **)0x0) {
      lVar2 = 5;
      pplVar3 = local_b0;
      goto LAB_00165c8c;
    }
    if (((byte)local_118 & 1) != 0) {
      operator_delete(local_108);
    }
    uStack_129 = 0;
    local_130 = (basic_string)0xc;
    uStack_12f = 0x61757165;
    uStack_12b = 0x736c;
    lVar2 = FUN_001673e0(plVar8[8],plVar8[9],&local_130);
    if ((lVar2 != 0) || (lVar2 = FUN_001673e0(plVar8[0xd],plVar8[0xe],&local_130), lVar2 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00166174 to 00166187 has its CatchHandler @ 001668a8 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_130);
                    /* try { // try from 00166188 to 0016619b has its CatchHandler @ 00166838 */
      FUN_0015dcfc(&local_d0,&local_80,"\" - a property with that name already exists!");
                    /* try { // try from 001661a0 to 001661d7 has its CatchHandler @ 00166814 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
      }
      goto LAB_001668e0;
    }
    lVar2 = FUN_001673e0(plVar8[3],plVar8[4],&local_130);
    if (lVar2 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001663b4 to 001663c7 has its CatchHandler @ 00166810 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_130);
                    /* try { // try from 001663c8 to 001663db has its CatchHandler @ 00166720 */
      FUN_0015dcfc(&local_d0,&local_80,"\" - a method with that name already exists!");
                    /* try { // try from 001663e0 to 00166417 has its CatchHandler @ 001666f4 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
      }
      goto LAB_001668e0;
    }
    local_100 = (undefined *)
                CONCAT17(uStack_129,CONCAT25(uStack_12b,CONCAT41(uStack_12f,local_130)));
    local_d8 = 0;
    plStack_f8 = plStack_128;
    local_f0 = local_120;
    plStack_e0 = _UNK_00138c18;
    local_e8 = _DAT_00138c10;
                    /* try { // try from 00165d18 to 00165d1f has its CatchHandler @ 00166664 */
    local_60 = (long **)operator_new(0x38);
    *local_60 = (long *)&PTR_FUN_001b6f68;
    if (((ulong)local_100 & 1) == 0) {
      local_60[2] = plStack_f8;
      *(undefined **)(local_60 + 1) = local_100;
      local_60[3] = local_f0;
    }
    else {
                    /* try { // try from 00165d50 to 00165d53 has its CatchHandler @ 001665e8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (local_60 + 1),(char *)local_f0,(ulong)plStack_f8);
    }
    local_60[5] = plStack_e0;
    local_60[4] = local_e8;
    *(undefined4 *)(local_60 + 6) = local_d8;
    if (((byte)local_100 & 1) == 0) {
LAB_00165d90:
      pplVar3 = &local_80;
      local_b0 = local_60;
LAB_00165da0:
      pplVar3[4] = (long *)0x0;
    }
    else {
      operator_delete(local_f0);
      if (local_60 == (long **)0x0) {
        pplVar3 = &local_d0;
        goto LAB_00165da0;
      }
      if (local_60 != &local_80) goto LAB_00165d90;
      local_b0 = &local_d0;
                    /* try { // try from 00166138 to 00166143 has its CatchHandler @ 001664fc */
      (*(code *)local_80[3])(&local_80,&local_d0);
    }
    local_a0 = 1;
    if (((byte)local_130 & 1) == 0) {
      plStack_90 = plStack_128;
      local_98 = CONCAT17(uStack_129,CONCAT25(uStack_12b,CONCAT41(uStack_12f,local_130)));
      local_88 = local_120;
    }
    else {
                    /* try { // try from 00165dd4 to 00165ddb has its CatchHandler @ 0016657c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_98,(char *)local_120,(ulong)plStack_128);
    }
    if (local_60 == &local_80) {
      lVar2 = 4;
      pplVar3 = &local_80;
LAB_00165e00:
      (*(code *)(*pplVar3)[lVar2])();
    }
    else if (local_60 != (long **)0x0) {
      lVar2 = 5;
      pplVar3 = local_60;
      goto LAB_00165e00;
    }
                    /* try { // try from 00165e0c to 00165e1f has its CatchHandler @ 00166654 */
    FUN_00167578(plVar5,&local_130,&local_130,&local_d0);
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_b0 == &local_d0) {
      lVar2 = 4;
      pplVar3 = &local_d0;
LAB_00165e54:
      (*(code *)(*pplVar3)[lVar2])();
    }
    else if (local_b0 != (long **)0x0) {
      lVar2 = 5;
      pplVar3 = local_b0;
      goto LAB_00165e54;
    }
    if (((byte)local_130 & 1) != 0) {
      operator_delete(local_120);
    }
    local_13f = 0;
    local_148 = (basic_string)0x10;
    local_147 = 0x676e697274536f74;
    lVar2 = FUN_001673e0(plVar8[8],plVar8[9],&local_148);
    if ((lVar2 != 0) || (lVar2 = FUN_001673e0(plVar8[0xd],plVar8[0xe],&local_148), lVar2 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001661e8 to 001661fb has its CatchHandler @ 0016688c */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_148);
                    /* try { // try from 001661fc to 0016620f has its CatchHandler @ 001667f8 */
      FUN_0015dcfc(&local_d0,&local_80,"\" - a property with that name already exists!");
                    /* try { // try from 00166214 to 0016624b has its CatchHandler @ 001667d4 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
      }
      goto LAB_001668e0;
    }
    lVar2 = FUN_001673e0(plVar8[3],plVar8[4],&local_148);
    if (lVar2 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00166424 to 00166437 has its CatchHandler @ 001667d0 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_148);
                    /* try { // try from 00166438 to 0016644b has its CatchHandler @ 001666f0 */
      FUN_0015dcfc(&local_d0,&local_80,"\" - a method with that name already exists!");
                    /* try { // try from 00166450 to 00166487 has its CatchHandler @ 001666c4 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
      }
      goto LAB_001668e0;
    }
                    /* try { // try from 00165ec0 to 00165ed7 has its CatchHandler @ 0016664c */
    FUN_00168268(&local_d0,&local_148,0x28,1,0);
                    /* try { // try from 00165ed8 to 00165eeb has its CatchHandler @ 0016663c */
    FUN_00167578(plVar5,&local_148,&local_148,&local_d0);
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_b0 == &local_d0) {
      lVar2 = 4;
      pplVar3 = &local_d0;
LAB_00165f20:
      (*(code *)(*pplVar3)[lVar2])();
    }
    else if (local_b0 != (long **)0x0) {
      lVar2 = 5;
      pplVar3 = local_b0;
      goto LAB_00165f20;
    }
    if (((byte)local_148 & 1) != 0) {
      operator_delete(local_138);
    }
    uStack_158 = 0;
    local_160 = 0x7369640e;
    uStack_15c = 0x65736f70;
    lVar2 = FUN_001673e0(plVar8[8],plVar8[9],&local_160);
    if ((lVar2 != 0) || (lVar2 = FUN_001673e0(plVar8[0xd],plVar8[0xe],&local_160), lVar2 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0016625c to 0016626f has its CatchHandler @ 00166870 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",(basic_string *)&local_160);
                    /* try { // try from 00166270 to 00166283 has its CatchHandler @ 001667b8 */
      FUN_0015dcfc(&local_d0,&local_80,"\" - a property with that name already exists!");
                    /* try { // try from 00166288 to 001662bf has its CatchHandler @ 00166794 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
      }
      goto LAB_001668e0;
    }
    lVar2 = FUN_001673e0(plVar8[3],plVar8[4],&local_160);
    if (lVar2 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00166494 to 001664a7 has its CatchHandler @ 00166790 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",(basic_string *)&local_160);
                    /* try { // try from 001664a8 to 001664bb has its CatchHandler @ 001666c0 */
      FUN_0015dcfc(&local_d0,&local_80,"\" - a method with that name already exists!");
                    /* try { // try from 001664c0 to 001664f7 has its CatchHandler @ 00166694 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
      }
      goto LAB_001668e0;
    }
    plStack_f8 = (long *)CONCAT71(uStack_157,uStack_158);
    local_100 = (undefined *)CONCAT44(uStack_15c,local_160);
    plStack_e0 = (long *)0x0;
    local_f0 = local_150;
    local_e8 = (long *)PTR_disposeRaw_001b9ec8;
                    /* try { // try from 00165fac to 00165fb3 has its CatchHandler @ 00166624 */
    pplVar3 = (long **)operator_new(0x30);
    *pplVar3 = (long *)&PTR_FUN_001b6fe8;
    plVar8 = (long *)PTR_disposeRaw_001b9ec8;
    if (((ulong)local_100 & 1) == 0) {
      pplVar3[2] = plStack_f8;
      *(undefined **)(pplVar3 + 1) = local_100;
      pplVar3[3] = local_f0;
      plVar7 = (long *)0x0;
    }
    else {
                    /* try { // try from 00165ff0 to 00165ff3 has its CatchHandler @ 0016656c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_f0,(ulong)plStack_f8);
      plVar7 = plStack_e0;
      plVar8 = local_e8;
    }
    pplVar3[4] = plVar8;
    pplVar3[5] = plVar7;
    local_60 = pplVar3;
    if (((byte)local_100 & 1) == 0) {
LAB_00166024:
      pplVar3 = &local_80;
      local_b0 = local_60;
LAB_00166034:
      pplVar3[4] = (long *)0x0;
    }
    else {
      operator_delete(local_f0);
      if (local_60 == (long **)0x0) {
        pplVar3 = &local_d0;
        goto LAB_00166034;
      }
      if (local_60 != &local_80) goto LAB_00166024;
      local_b0 = &local_d0;
                    /* try { // try from 00166158 to 00166163 has its CatchHandler @ 001664f8 */
      (*(code *)local_80[3])(&local_80,&local_d0);
    }
    local_a0 = 0;
    if ((local_160 & 1) == 0) {
      plStack_90 = (long *)CONCAT71(uStack_157,uStack_158);
      local_98 = CONCAT44(uStack_15c,local_160);
      local_88 = local_150;
    }
    else {
                    /* try { // try from 00166064 to 0016606b has its CatchHandler @ 00166500 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_98,(char *)local_150,CONCAT71(uStack_157,uStack_158));
    }
    if (local_60 == &local_80) {
      lVar2 = 4;
      pplVar3 = &local_80;
LAB_00166090:
      (*(code *)(*pplVar3)[lVar2])();
    }
    else if (local_60 != (long **)0x0) {
      lVar2 = 5;
      pplVar3 = local_60;
      goto LAB_00166090;
    }
                    /* try { // try from 0016609c to 001660af has its CatchHandler @ 00166614 */
    FUN_00167578(plVar5,&local_160,&local_160,&local_d0);
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_b0 == &local_d0) {
      lVar2 = 4;
      pplVar3 = &local_d0;
LAB_001660e4:
      (*(code *)(*pplVar3)[lVar2])();
    }
    else if (local_b0 != (long **)0x0) {
      lVar2 = 5;
      pplVar3 = local_b0;
      goto LAB_001660e4;
    }
    if ((local_160 & 1) != 0) {
      operator_delete(local_150);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_001668e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001668e4  margelo::nitro::HybridObject::~HybridObject =====

/* margelo::nitro::HybridObject::~HybridObject() */

void __thiscall margelo::nitro::HybridObject::~HybridObject(HybridObject *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ~HybridObject(this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState((NativeState *)(this + 0x60));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00166938  margelo::nitro::HybridObject::~HybridObject =====

/* margelo::nitro::HybridObject::~HybridObject() */

void __thiscall margelo::nitro::HybridObject::~HybridObject(HybridObject *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ~HybridObject(this);
  facebook::jsi::NativeState::~NativeState((NativeState *)(this + 0x60));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00166994  margelo::nitro::HybridObject::shared =====

/* margelo::nitro::HybridObject::shared() */

void margelo::nitro::HybridObject::shared(void)

{
  long lVar1;
  long in_x0;
  long lVar2;
  runtime_error *this;
  long *in_x8;
  long lVar3;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  basic_string abStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(in_x0 + 0x28) == 0) {
    lVar2 = 0;
    *in_x8 = 0;
    in_x8[1] = 0;
  }
  else {
    lVar3 = *(long *)(in_x0 + 0x20);
    FUN_0015c230(1,*(long *)(in_x0 + 0x28) + 0x10);
    *in_x8 = 0;
    lVar2 = std::__ndk1::__shared_weak_count::lock();
    in_x8[1] = lVar2;
    if ((lVar2 != 0) && (*in_x8 = lVar3, lVar3 != 0)) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
        std::__ndk1::__shared_weak_count::__release_weak();
        return;
      }
      goto LAB_00166b58;
    }
  }
  FUN_0016704c(lVar2);
  this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00166a38 to 00166a47 has its CatchHandler @ 00166b28 */
  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc
            (auStack_90,"HybridObject \"");
                    /* try { // try from 00166a4c to 00166a57 has its CatchHandler @ 00166b10 */
  FUN_0015dcfc(auStack_78,auStack_90,*(undefined8 *)(in_x0 + 0x30));
                    /* try { // try from 00166a58 to 00166a6b has its CatchHandler @ 00166ae0 */
  FUN_0015dcfc(abStack_60,auStack_78,
               "\" is not managed inside a std::shared_ptr - cannot access shared()!");
                    /* try { // try from 00166a70 to 00166aa7 has its CatchHandler @ 00166aa8 */
  std::runtime_error::runtime_error(this,abStack_60);
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
  }
LAB_00166b58:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00166b5c  margelo::nitro::HybridObject::equals =====

/* margelo::nitro::HybridObject::equals(std::__ndk1::shared_ptr<margelo::nitro::HybridObject>
   const&) */

void __thiscall margelo::nitro::HybridObject::equals(HybridObject *this,shared_ptr *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(HybridObject **)param_1 == this);
}


// ===== 00166ba0  margelo::nitro::HybridObject::toString =====

/* margelo::nitro::HybridObject::toString() */

void margelo::nitro::HybridObject::toString(void)

{
  long lVar1;
  long in_x0;
  size_t __n;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 *in_x8;
  undefined8 uVar4;
  char *__s;
  void *__dest;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong local_78;
  size_t local_70;
  void *local_68;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __s = *(char **)(in_x0 + 0x30);
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      uVar4 = FUN_0015d7fc();
                    /* catch() { ... } // from try @ 00166c60 with catch @ 00166ce8 */
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
      }
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
      if (*(long *)(lVar1 + 0x28) == local_48) {
        FUN_00157e74(uVar4);
      }
    }
    goto LAB_00166d2c;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_78 | 1);
    local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00166c1c;
  }
  else {
    __dest = operator_new((__n | 0xf) + 1);
    local_78 = (__n | 0xf) + 2;
    local_70 = __n;
    local_68 = __dest;
LAB_00166c1c:
    memmove(__dest,__s,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 00166c30 to 00166c47 has its CatchHandler @ 00166d00 */
  puVar2 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((ulong)&local_78,(char *)0x0,0x136fd3);
  local_50 = (void *)puVar2[2];
  uStack_58 = puVar2[1];
  local_60 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
                    /* try { // try from 00166c60 to 00166c73 has its CatchHandler @ 00166ce8 */
  puVar3 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((char *)&local_60,0x137c3e);
  uVar4 = puVar3[2];
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  in_x8[1] = uVar6;
  *in_x8 = uVar5;
  in_x8[2] = uVar4;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00166d2c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00166d30  FUN_00166d30 =====

void FUN_00166d30(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00166d68  FUN_00166d68 =====

undefined8 FUN_00166d68(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00166da4  margelo::nitro::HybridObject::~HybridObject =====

/* virtual thunk to margelo::nitro::HybridObject::~HybridObject() */

void __thiscall margelo::nitro::HybridObject::~HybridObject(HybridObject *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(*(long *)this + -0x18);
  ~HybridObject(this + lVar3);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState((NativeState *)(this + lVar3 + 0x60));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00166e04  margelo::nitro::HybridObject::~HybridObject =====

/* virtual thunk to margelo::nitro::HybridObject::~HybridObject() */

void __thiscall margelo::nitro::HybridObject::~HybridObject(HybridObject *this)

{
  HybridObject *this_00;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this_00 = this + *(long *)(*(long *)this + -0x18);
  ~HybridObject(this_00);
  facebook::jsi::NativeState::~NativeState((NativeState *)(this_00 + 0x60));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00166e6c  margelo::nitro::HybridObject::~HybridObject =====

/* margelo::nitro::HybridObject::~HybridObject() */

void __thiscall margelo::nitro::HybridObject::~HybridObject(HybridObject *this)

{
  long lVar1;
  long *in_x1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  void *pvVar6;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  lVar3 = *in_x1;
  puVar4 = *(undefined8 **)(this + 0x48);
  *(long *)this = lVar3;
  *(long *)(this + *(long *)(lVar3 + -0x18)) = in_x1[1];
  while (puVar4 != (undefined8 *)0x0) {
    pvVar6 = (void *)*puVar4;
    FUN_00166f68(puVar4 + 3);
    operator_delete(puVar4);
    puVar4 = (undefined8 *)pvVar6;
  }
  pvVar6 = *(void **)(this + 0x38);
  *(undefined8 *)(this + 0x38) = 0;
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  if (*(long *)(this + 0x28) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = *(long **)(this + 0x10);
  *(undefined ***)this = &PTR___cxa_pure_virtual_001b9858;
  if ((plVar5 == (long *)0x0) || (lVar3 = FUN_0015bb40(0xffffffffffffffff,plVar5 + 1), lVar3 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00166f68  FUN_00166f68 =====

void FUN_00166f68(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (param_1[1] != 0) {
    uVar2 = FUN_0015bb40(0xffffffffffffffff);
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


// ===== 0016704c  FUN_0016704c =====

void FUN_0016704c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_0015bb40(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 001670d8  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc =====

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
      FUN_0015d7fc();
    }
    goto LAB_0016719c;
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n != 0) goto LAB_0016714c;
  }
  else {
    __dest = operator_new((__n | 0xf) + 1);
    param_1[1] = __n;
    param_1[2] = (long)__dest;
    *param_1 = (__n | 0xf) + 2;
LAB_0016714c:
    memmove(__dest,param_2,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
LAB_0016719c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001671a0  margelo::nitro::HybridObject::getName =====

/* margelo::nitro::HybridObject::getName() */

void margelo::nitro::HybridObject::getName(void)

{
  long lVar1;
  long in_x0;
  size_t __n;
  long *in_x8;
  long lVar2;
  void *__dest;
  char *__s;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  __s = *(char **)(in_x0 + 0x30);
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      FUN_0015d7fc();
    }
    goto LAB_00167264;
  }
  if (__n < 0x17) {
    __dest = (void *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n != 0) goto LAB_00167214;
  }
  else {
    __dest = operator_new((__n | 0xf) + 1);
    in_x8[1] = __n;
    in_x8[2] = (long)__dest;
    *in_x8 = (__n | 0xf) + 2;
LAB_00167214:
    memmove(__dest,__s,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
LAB_00167264:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00167268  margelo::nitro::HybridObject::disposeRaw =====

/* margelo::nitro::HybridObject::disposeRaw(facebook::jsi::Runtime&, facebook::jsi::Value const&,
   facebook::jsi::Value const*, unsigned long) */

void margelo::nitro::HybridObject::disposeRaw
               (Runtime *param_1,Value *param_2,Value *param_3,ulong param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined4 *in_x8;
  long lVar5;
  void *pvVar6;
  undefined8 *local_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)param_1 + 0x30))();
  facebook::jsi::Value::asObject((IRuntime *)param_3);
  local_58 = 0;
  local_50 = (long *)0x0;
                    /* try { // try from 001672c4 to 001672d3 has its CatchHandler @ 00167398 */
  (**(code **)(*(long *)param_2 + 0x168))(param_2,&local_60,&local_58);
  plVar3 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar4 = FUN_0015bb40(0xffffffffffffffff,local_50 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    puVar2 = (undefined8 *)*(void **)(param_1 + 0x48);
    while (puVar2 != (undefined8 *)0x0) {
      pvVar6 = (void *)*puVar2;
      FUN_00166f68(puVar2 + 3);
      operator_delete(puVar2);
      puVar2 = (undefined8 *)pvVar6;
    }
    lVar4 = *(long *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x38) + lVar5 * 8) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *in_x8 = 0;
  if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)();
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001673e0  FUN_001673e0 =====

long * FUN_001673e0(long param_1,ulong param_2,byte *param_3)

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
  uVar7 = FUN_0015c450(__s2,sVar2);
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
                  if (bVar3 >> 1 == uVar10) goto LAB_00167540;
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
            if (uVar10 != uVar12) goto LAB_0016753c;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      goto LAB_00167540;
    }
  }
LAB_0016753c:
  plVar9 = (long *)0x0;
LAB_00167540:
  if (*(long *)(lVar5 + 0x28) == lVar8) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00167578  FUN_00167578 =====

void FUN_00167578(long *param_1,byte *param_2,byte *param_3,long *param_4)

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
  uVar7 = FUN_0015c450(__s2,sVar2);
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
              if (bVar3 < 2) goto LAB_00167a60;
              pbVar16 = (byte *)((long)plVar12 + 0x11);
              pbVar20 = __s2;
              while (*pbVar16 == *pbVar20) {
                uVar13 = uVar13 - 1;
                pbVar16 = pbVar16 + 1;
                pbVar20 = pbVar20 + 1;
                if (uVar13 == 0) goto LAB_00167a60;
              }
            }
            else {
              iVar6 = memcmp((void *)plVar12[4],__s2,plVar12[3]);
              if (iVar6 == 0) goto LAB_00167a60;
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
                    /* try { // try from 0016774c to 00167753 has its CatchHandler @ 00167aec */
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
                    /* try { // try from 00167790 to 00167797 has its CatchHandler @ 00167ae8 */
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
                    /* try { // try from 00167830 to 00167ae7 has its CatchHandler @ 00167af0 */
      uVar19 = std::__ndk1::__next_prime(uVar19);
    }
    uVar24 = param_1[1];
    if (uVar24 < uVar19) {
LAB_00167848:
      if (uVar19 >> 0x3d != 0) {
        if (*(long *)(lVar5 + 0x28) == lVar11) {
          FUN_0015d614();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00167790 with catch @ 00167ae8
                        */
          FUN_0015c8c8();
        }
        goto LAB_00167b18;
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
LAB_00167a94:
        uVar13 = std::__ndk1::__next_prime(uVar13);
      }
      else {
        uVar26 = NEON_cnt(uVar24,1);
        uVar25 = NEON_uaddlv(uVar26,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar26 >> 0x10),uVar25)) goto LAB_00167a94;
        if (1 < uVar13) {
          uVar13 = 1L << (-LZCOUNT(uVar13 - 1) & 0x3fU);
        }
      }
      if (uVar19 <= uVar13) {
        uVar19 = uVar13;
      }
      if (uVar19 < uVar24) {
        if (uVar19 != 0) goto LAB_00167848;
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
      goto LAB_00167a50;
    }
  }
  else {
    *plVar8 = *plVar17;
LAB_00167a50:
    *plVar17 = (long)plVar8;
  }
  param_1[3] = param_1[3] + 1;
LAB_00167a60:
  if (*(long *)(lVar5 + 0x28) == lVar11) {
    return;
  }
LAB_00167b18:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00167b1c  FUN_00167b1c =====

void FUN_00167b1c(long *param_1)

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
      goto LAB_00167bbc;
    }
    lVar3 = 5;
    param_1 = plVar4;
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00167b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + lVar3 * 8))();
    return;
  }
LAB_00167bbc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00167bc0  FUN_00167bc0 =====

void FUN_00167bc0(undefined8 *param_1)

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
    goto LAB_00167c90;
  }
  if (*(char *)(param_1 + 2) != '\0') {
    plVar3 = (long *)((long)pvVar6 + 0x30);
    if ((*(byte *)((long)pvVar6 + 0x68) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar6 + 0x78));
    }
    plVar2 = *(long **)((long)pvVar6 + 0x50);
    if (plVar2 == plVar3) {
      lVar5 = 4;
LAB_00167c4c:
      (**(code **)(*plVar3 + lVar5 * 8))();
    }
    else if (plVar2 != (long *)0x0) {
      lVar5 = 5;
      plVar3 = plVar2;
      goto LAB_00167c4c;
    }
    if ((*(byte *)((long)pvVar6 + 0x10) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar6 + 0x20));
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(pvVar6);
    return;
  }
LAB_00167c90:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00167c94  FUN_00167c94 =====

void FUN_00167c94(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b6fe8;
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


// ===== 00167d00  FUN_00167d00 =====

void FUN_00167d00(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b6fe8;
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


// ===== 00167d68  FUN_00167d68 =====

undefined8 * FUN_00167d68(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined8 *)operator_new(0x30);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar3 = &PTR_FUN_001b6fe8;
  if ((bVar1 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 8);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    puVar3[2] = *(undefined8 *)(param_1 + 0x10);
    puVar3[1] = uVar6;
    puVar3[3] = uVar5;
  }
  else {
                    /* try { // try from 00167dc8 to 00167dcb has its CatchHandler @ 00167dfc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar3 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  puVar3[5] = *(undefined8 *)(param_1 + 0x28);
  puVar3[4] = uVar5;
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00167e24  FUN_00167e24 =====

void FUN_00167e24(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_001b6fe8;
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
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00167eb4  FUN_00167eb4 =====

void FUN_00167eb4(long param_1)

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


// ===== 00167f14  FUN_00167f14 =====

void FUN_00167f14(void *param_1)

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


// ===== 00167f70  FUN_00167f70 =====

void FUN_00167f70(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 undefined8 *param_6)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *local_80;
  long local_78;
  long *plStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar6 = *param_5;
  uVar7 = *param_6;
  local_80 = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 00167fd4 to 00167fe3 has its CatchHandler @ 00168114 */
  (**(code **)(*param_3 + 0x160))(&local_78,param_3,&local_80);
  if ((local_78 == 0) ||
     (lVar3 = __dynamic_cast(local_78,PTR_typeinfo_001b9f70,PTR_typeinfo_001b9ee8,0xffffffffffffffff
                            ), lVar3 == 0)) {
    lVar3 = 0;
    plVar8 = (long *)0x0;
    if (plStack_70 == (long *)0x0) goto joined_r0x0016805c;
  }
  else {
    if (plStack_70 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x0016805c;
    }
    FUN_0015c230(1,plStack_70 + 1);
    plVar8 = plStack_70;
  }
  lVar4 = FUN_0015bb40(0xffffffffffffffff,plStack_70 + 1);
  if (lVar4 == 0) {
    (**(code **)(*plStack_70 + 0x10))(plStack_70);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x0016805c:
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)();
  }
  pcVar5 = *(code **)(param_2 + 0x20);
  plVar1 = (long *)(lVar3 + ((long)*(ulong *)(param_2 + 0x28) >> 1));
  if ((*(ulong *)(param_2 + 0x28) & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *plVar1);
  }
                    /* try { // try from 00168080 to 00168097 has its CatchHandler @ 00168104 */
  (*pcVar5)(param_1,plVar1,param_3,param_4,uVar6,uVar7);
  if ((plVar8 != (long *)0x0) && (lVar3 = FUN_0015bb40(0xffffffffffffffff,plVar8 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0016814c  FUN_0016814c =====

void FUN_0016814c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_001b9f30) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0016819c  FUN_0016819c =====

undefined * FUN_0016819c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_001b9f38;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001681dc  FUN_001681dc =====

void FUN_001681dc(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_0015bb40(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 00168268  FUN_00168268 =====

void FUN_00168268(long param_1,ulong *param_2,long param_3,long param_4,undefined4 param_5)

{
  long lVar1;
  long *plVar2;
  long **pplVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_b0;
  ulong uStack_a8;
  char *local_a0;
  long local_98;
  long lStack_90;
  undefined4 local_88;
  long local_80 [4];
  long *local_60 [3];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*param_2 & 1) == 0) {
    uStack_a8 = param_2[1];
    local_b0 = *param_2;
    local_a0 = (char *)param_2[2];
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_b0,(char *)param_2[2],param_2[1]);
  }
  local_98 = param_3;
  lStack_90 = param_4;
  local_88 = param_5;
                    /* try { // try from 001682d0 to 001682d7 has its CatchHandler @ 0016847c */
  local_60[0] = (long *)operator_new(0x38);
  *local_60[0] = (long)&PTR_FUN_001b6ee8;
  if ((local_b0 & 1) == 0) {
    local_60[0][2] = uStack_a8;
    *(ulong *)(local_60[0] + 1) = local_b0;
    local_60[0][3] = (long)local_a0;
  }
  else {
                    /* try { // try from 00168308 to 0016830b has its CatchHandler @ 0016846c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (local_60[0] + 1),local_a0,uStack_a8);
  }
  local_60[0][5] = lStack_90;
  local_60[0][4] = local_98;
  *(undefined4 *)(local_60[0] + 6) = local_88;
  if (((byte)local_b0._0_1_ & 1) == 0) {
LAB_00168348:
    *(long **)(param_1 + 0x20) = local_60[0];
    pplVar3 = local_60;
LAB_0016835c:
    *pplVar3 = (long *)0x0;
  }
  else {
    operator_delete(local_a0);
    if (local_60[0] == (long *)0x0) {
      pplVar3 = (long **)(param_1 + 0x20);
      goto LAB_0016835c;
    }
    if (local_60[0] != local_80) goto LAB_00168348;
    *(long *)(param_1 + 0x20) = param_1;
                    /* try { // try from 001683f0 to 001683fb has its CatchHandler @ 00168400 */
    (**(code **)(local_80[0] + 0x18))(local_80,param_1);
  }
  uVar4 = *param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  if ((uVar4 & 1) == 0) {
    uVar6 = *param_2;
    uVar4 = param_2[2];
    *(ulong *)(param_1 + 0x40) = param_2[1];
    *(ulong *)(param_1 + 0x38) = uVar6;
    *(ulong *)(param_1 + 0x48) = uVar4;
  }
  else {
                    /* try { // try from 00168384 to 0016838b has its CatchHandler @ 00168404 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x38),(char *)param_2[2],param_2[1]);
  }
  if (local_60[0] == local_80) {
    lVar5 = 4;
    plVar2 = local_80;
  }
  else {
    if (local_60[0] == (long *)0x0) goto LAB_001683bc;
    lVar5 = 5;
    plVar2 = local_60[0];
  }
  (**(code **)(*plVar2 + lVar5 * 8))();
LAB_001683bc:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001684ac  FUN_001684ac =====

void FUN_001684ac(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b6ee8;
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


// ===== 00168518  FUN_00168518 =====

void FUN_00168518(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b6ee8;
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


// ===== 00168580  FUN_00168580 =====

undefined8 * FUN_00168580(long param_1)

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
  *puVar4 = &PTR_FUN_001b6ee8;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 001685e0 to 001685e3 has its CatchHandler @ 0016861c */
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


// ===== 00168644  FUN_00168644 =====

void FUN_00168644(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_001b6ee8;
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


// ===== 001686dc  FUN_001686dc =====

void FUN_001686dc(long param_1)

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


// ===== 0016873c  FUN_0016873c =====

void FUN_0016873c(void *param_1)

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


// ===== 00168798  FUN_00168798 =====

void FUN_00168798(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  JSError *pJVar8;
  long *plVar9;
  ulong uVar10;
  code *pcVar11;
  undefined1 auStack_140 [24];
  undefined8 local_128 [3];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  basic_string local_80;
  undefined7 uStack_7f;
  long *local_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar10 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 001687f4 to 00168803 has its CatchHandler @ 00168dbc */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  plVar1 = local_78;
  if ((CONCAT71(uStack_7f,local_80) == 0) ||
     (lVar6 = __dynamic_cast(CONCAT71(uStack_7f,local_80),PTR_typeinfo_001b9f70,
                             PTR_typeinfo_001b9ee8,0xffffffffffffffff), lVar6 == 0)) {
    lVar6 = 0;
    plVar9 = (long *)0x0;
    if (plVar1 == (long *)0x0) goto joined_r0x0016887c;
  }
  else {
    if (plVar1 == (long *)0x0) {
      plVar9 = (long *)0x0;
      goto joined_r0x0016887c;
    }
    FUN_0015c230(1,plVar1 + 1);
    plVar9 = plVar1;
  }
  lVar7 = FUN_0015bb40(0xffffffffffffffff,plVar1 + 1);
  if (lVar7 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x0016887c:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar10 == 0) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar10 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_12HybridObjectENSt6__ndk112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS4_16integer_sequenceImJXspT2_EEEEE12defaultValue_001b9ef8
         & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_12HybridObjectENSt6__ndk112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS4_16integer_sequenceImJXspT2_EEEEE12defaultValue_001b9ef8
                                   ),
       puVar4 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_12HybridObjectENSt6__ndk112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS4_16integer_sequenceImJXspT2_EEEEE12defaultValue_001b9ef0
       , iVar5 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_12HybridObjectENSt6__ndk112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS4_16integer_sequenceImJXspT2_EEEEE12defaultValue_001b9ef0
           = 0;
      __cxa_atexit(PTR__Value_001b9f60,puVar4,&PTR_LOOP_001b6ad0);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_12HybridObjectENSt6__ndk112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS4_16integer_sequenceImJXspT2_EEEEE12defaultValue_001b9ef8
                         );
    }
    if ((uVar10 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *(long *)(lVar6 + ((long)uVar10 >> 1)));
    }
                    /* try { // try from 001688b4 to 001688bf has its CatchHandler @ 00168ac4 */
    (*pcVar11)(&local_80);
    plVar1 = (long *)(ulong)((byte)local_80 >> 1);
    pvVar3 = (void *)((ulong)&local_80 | 1);
    if (((byte)local_80 & 1) != 0) {
      plVar1 = local_78;
      pvVar3 = local_70;
    }
                    /* try { // try from 001688e4 to 001688ef has its CatchHandler @ 00168aa8 */
    (**(code **)(*param_3 + 0x110))(local_128,param_3,pvVar3,plVar1);
    *param_1 = 6;
    *(undefined8 *)(param_1 + 2) = local_128[0];
    if (((byte)local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if ((plVar9 != (long *)0x0) && (lVar6 = FUN_0015bb40(0xffffffffffffffff,plVar9 + 1), lVar6 == 0)
       ) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 00168980 to 0016898f has its CatchHandler @ 00168f58 */
    FUN_00169010(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar6);
    pJVar8 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0016899c to 001689af has its CatchHandler @ 00168f38 */
    std::__ndk1::operator+("`",&local_80);
                    /* try { // try from 001689b0 to 001689c3 has its CatchHandler @ 00168f20 */
    FUN_0015dcfc(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 001689c4 to 001689cf has its CatchHandler @ 00168ef0 */
    std::__ndk1::to_string(0);
                    /* try { // try from 001689d0 to 001689df has its CatchHandler @ 00168ecc */
    FUN_001693b0(auStack_e0,auStack_f8,local_128);
                    /* try { // try from 001689e0 to 001689f3 has its CatchHandler @ 00168ea8 */
    FUN_0015dcfc(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 001689f4 to 001689ff has its CatchHandler @ 00168e84 */
    std::__ndk1::to_string(uVar10);
                    /* try { // try from 00168a00 to 00168a0f has its CatchHandler @ 00168e60 */
    FUN_001693b0(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 00168a10 to 00168a23 has its CatchHandler @ 00168e3c */
    FUN_0015dcfc(local_98,auStack_b0,&DAT_001374e6);
                    /* try { // try from 00168a28 to 00168a63 has its CatchHandler @ 00168ddc */
    facebook::jsi::JSError::JSError(pJVar8,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar8,PTR_typeinfo_001b9f78,PTR__JSError_001b9f68);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00168f80  FUN_00168f80 =====

void FUN_00168f80(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_001b9f00) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00168fd0  FUN_00168fd0 =====

undefined * FUN_00168fd0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_001b9f08;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00169010  FUN_00169010 =====

void FUN_00169010(undefined8 *param_1,int param_2,byte *param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  size_t sVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  void *pvVar10;
  char *__s;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong local_a8;
  ulong local_a0;
  void *local_98;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  ulong local_70;
  size_t local_68;
  undefined1 *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (param_4 == 0) {
    FUN_001695dc(&local_70,PTR_typeinfo_name_001b9ee0,1);
    if (param_2 != 0) goto LAB_00169084;
LAB_0016911c:
    uVar5 = local_70;
    sVar6 = local_70 >> 1 & 0x7f;
    if ((local_70 & 1) != 0) {
      sVar6 = local_68;
    }
    uVar1 = sVar6 + 1;
    if (uVar1 < 0xfffffffffffffff0) {
      if (uVar1 < 0x17) {
        local_a0 = 0;
        pvVar10 = (void *)((ulong)&local_a8 | 1);
        local_98 = (void *)0x0;
        local_a8 = (ulong)(byte)((int)uVar1 << 1);
        if (sVar6 != 0) goto LAB_00169214;
      }
      else {
        uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 001691fc to 00169203 has its CatchHandler @ 00169364 */
        pvVar10 = operator_new(uVar2);
        local_a8 = uVar2 | 1;
        local_a0 = uVar1;
        local_98 = pvVar10;
LAB_00169214:
        puVar11 = (undefined1 *)((ulong)&local_70 | 1);
        if ((uVar5 & 1) != 0) {
          puVar11 = local_60;
        }
        memmove(pvVar10,puVar11,sVar6);
      }
      *(undefined2 *)((long)pvVar10 + sVar6) = 0x2e;
      pbVar3 = *(byte **)(param_3 + 0x10);
      if ((*param_3 & 1) == 0) {
        pbVar3 = param_3 + 1;
      }
                    /* try { // try from 00169254 to 0016925b has its CatchHandler @ 00169350 */
      puVar8 = (ulong *)std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::append((char *)&local_a8,(ulong)pbVar3);
      local_80 = (void *)puVar8[2];
      uStack_88 = puVar8[1];
      local_90 = *puVar8;
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
                    /* try { // try from 00169274 to 00169287 has its CatchHandler @ 00169338 */
      puVar7 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append((char *)&local_90,0x1377c5);
      uVar9 = puVar7[2];
      uVar13 = puVar7[1];
      uVar12 = *puVar7;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      param_1[1] = uVar13;
      *param_1 = uVar12;
      param_1[2] = uVar9;
      pvVar10 = local_98;
      uVar5 = local_a8;
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
        pvVar10 = local_98;
        uVar5 = local_a8;
      }
      goto joined_r0x001692b4;
    }
  }
  else {
    __s = *(char **)(param_4 + 0x30);
    sVar6 = strlen(__s);
    if (sVar6 < 0xfffffffffffffff0) {
      if (sVar6 < 0x17) {
        puVar11 = (undefined1 *)((ulong)&local_70 | 1);
        local_70 = CONCAT71(local_70._1_7_,(char)((int)sVar6 << 1));
        if (sVar6 != 0) goto LAB_00169104;
        *puVar11 = 0;
      }
      else {
        puVar11 = (undefined1 *)operator_new((sVar6 | 0xf) + 1);
        local_70 = (sVar6 | 0xf) + 2;
        local_68 = sVar6;
        local_60 = puVar11;
LAB_00169104:
        memmove(puVar11,__s,sVar6);
        puVar11[sVar6] = 0;
      }
      if (param_2 == 0) goto LAB_0016911c;
LAB_00169084:
      uVar5 = local_70;
      sVar6 = local_70 >> 1 & 0x7f;
      if ((local_70 & 1) != 0) {
        sVar6 = local_68;
      }
      uVar1 = sVar6 + 1;
      if (uVar1 < 0xfffffffffffffff0) {
        if (uVar1 < 0x17) {
          uStack_88 = 0;
          pvVar10 = (void *)((ulong)&local_90 | 1);
          local_80 = (void *)0x0;
          local_90 = (ulong)(byte)((int)uVar1 << 1);
          if (sVar6 != 0) goto LAB_00169184;
        }
        else {
          uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 0016916c to 00169173 has its CatchHandler @ 00169380 */
          pvVar10 = operator_new(uVar2);
          local_90 = uVar2 | 1;
          uStack_88 = uVar1;
          local_80 = pvVar10;
LAB_00169184:
          puVar11 = (undefined1 *)((ulong)&local_70 | 1);
          if ((uVar5 & 1) != 0) {
            puVar11 = local_60;
          }
          memmove(pvVar10,puVar11,sVar6);
        }
        *(undefined2 *)((long)pvVar10 + sVar6) = 0x2e;
        pbVar3 = *(byte **)(param_3 + 0x10);
        if ((*param_3 & 1) == 0) {
          pbVar3 = param_3 + 1;
        }
                    /* try { // try from 001691c4 to 001691cb has its CatchHandler @ 00169368 */
        puVar7 = (undefined8 *)
                 std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 append((char *)&local_90,(ulong)pbVar3);
        uVar9 = puVar7[2];
        uVar13 = puVar7[1];
        uVar12 = *puVar7;
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        param_1[1] = uVar13;
        *param_1 = uVar12;
        param_1[2] = uVar9;
        pvVar10 = local_80;
        uVar5 = local_90;
joined_r0x001692b4:
        if ((uVar5 & 1) != 0) {
          operator_delete(pvVar10);
        }
        if ((local_70 & 1) != 0) {
          operator_delete(local_60);
        }
        if (*(long *)(lVar4 + 0x28) == local_58) {
          return;
        }
        goto LAB_001693ac;
      }
    }
    else {
      if (*(long *)(lVar4 + 0x28) != local_58) goto LAB_001693ac;
      FUN_0015d7fc();
    }
    if (*(long *)(lVar4 + 0x28) != local_58) goto LAB_001693ac;
                    /* try { // try from 00169320 to 00169323 has its CatchHandler @ 00169380 */
    FUN_0015d7fc();
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* try { // try from 00169334 to 00169337 has its CatchHandler @ 00169364 */
    uVar9 = FUN_0015d7fc();
                    /* catch() { ... } // from try @ 00169274 with catch @ 00169338 */
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if (*(long *)(lVar4 + 0x28) == local_58) {
      FUN_00157e74(uVar9);
    }
  }
LAB_001693ac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001693b0  FUN_001693b0 =====

void FUN_001693b0(undefined8 *param_1,char *param_2,byte *param_3)

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


// ===== 00169430  FUN_00169430 =====

void FUN_00169430(long *param_1,byte *param_2,char *param_3)

{
  long lVar1;
  ulong uVar2;
  size_t __n;
  byte bVar3;
  long lVar4;
  size_t __n_00;
  void *__dest;
  uint uVar5;
  long lVar6;
  byte *__src;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  bVar3 = *param_2;
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  __n_00 = strlen(param_3);
  uVar2 = __n + __n_00;
  if (uVar2 < 0xfffffffffffffff0) {
    if (uVar2 < 0x17) {
      __dest = (void *)0x0;
      *param_1 = 0;
      param_1[1] = 0;
      uVar5 = ((uint)uVar2 & 0xff) << 1;
      param_1[2] = 0;
      *(char *)param_1 = (char)uVar5;
    }
    else {
      __dest = operator_new((uVar2 | 0xf) + 1);
      lVar1 = (uVar2 | 0xf) + 2;
      param_1[1] = uVar2;
      param_1[2] = (long)__dest;
      *param_1 = lVar1;
      uVar5 = (uint)lVar1 & 0xff;
    }
    if ((uVar5 & 1) == 0) {
      __dest = (void *)((long)param_1 + 1);
    }
    if (__n != 0) {
      __src = *(byte **)(param_2 + 0x10);
      if ((bVar3 & 1) == 0) {
        __src = param_2 + 1;
      }
      memmove(__dest,__src,__n);
    }
    if (__n_00 != 0) {
      memmove((void *)((long)__dest + __n),param_3,__n_00);
    }
    *(undefined1 *)((long)((long)__dest + __n) + __n_00) = 0;
    if (*(long *)(lVar4 + 0x28) == lVar6) {
      return;
    }
  }
  else if (*(long *)(lVar4 + 0x28) == lVar6) {
    FUN_0015d7fc();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016955c  FUN_0016955c =====

void FUN_0016955c(undefined8 *param_1,char *param_2,byte *param_3)

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


// ===== 001695dc  FUN_001695dc =====

void FUN_001695dc(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,char *param_2)

{
  long lVar1;
  size_t __n;
  undefined8 uVar2;
  char *__dest;
  ulong local_60;
  size_t sStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      uVar2 = FUN_0015d7fc();
                    /* catch() { ... } // from try @ 001696b0 with catch @ 001696fc */
      operator_delete(param_2);
      if (*(long *)(lVar1 + 0x28) == local_48) {
        FUN_00157e74(uVar2);
      }
    }
    goto LAB_00169720;
  }
  if (__n < 0x17) {
    __dest = (char *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00169658;
  }
  else {
    __dest = (char *)operator_new((__n | 0xf) + 1);
    local_60 = (__n | 0xf) + 2;
    sStack_58 = __n;
    local_50 = __dest;
LAB_00169658:
    memcpy(__dest,param_2,__n);
  }
  __dest[__n] = '\0';
  if ((local_60 & 1) == 0) {
    *(size_t *)(param_1 + 8) = sStack_58;
    *(ulong *)param_1 = local_60;
    *(char **)(param_1 + 0x10) = local_50;
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else {
                    /* try { // try from 001696b0 to 001696bb has its CatchHandler @ 001696fc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1,local_50,sStack_58);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      operator_delete(local_50);
      return;
    }
  }
LAB_00169720:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00169724  FUN_00169724 =====

void FUN_00169724(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b6f68;
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


// ===== 00169790  FUN_00169790 =====

void FUN_00169790(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b6f68;
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


// ===== 001697f8  FUN_001697f8 =====

undefined8 * FUN_001697f8(long param_1)

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
  *puVar4 = &PTR_FUN_001b6f68;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00169858 to 0016985b has its CatchHandler @ 00169894 */
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


// ===== 001698bc  FUN_001698bc =====

void FUN_001698bc(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_001b6f68;
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


// ===== 00169954  FUN_00169954 =====

void FUN_00169954(long param_1)

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


// ===== 001699b4  FUN_001699b4 =====

void FUN_001699b4(void *param_1)

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


// ===== 00169a10  FUN_00169a10 =====

void FUN_00169a10(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  JSError *pJVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [8];
  long *local_108;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  long local_80;
  long *plStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar11 = *param_5;
  uVar10 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 00169a70 to 00169a7f has its CatchHandler @ 0016a048 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar6 = __dynamic_cast(local_80,PTR_typeinfo_001b9f70,PTR_typeinfo_001b9ee8,0xffffffffffffffff
                            ), lVar6 == 0)) {
    lVar6 = 0;
    plVar9 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x00169af8;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar9 = (long *)0x0;
      goto joined_r0x00169af8;
    }
    FUN_0015c230(1,plStack_78 + 1);
    plVar9 = plStack_78;
  }
  lVar7 = FUN_0015bb40(0xffffffffffffffff,plStack_78 + 1);
  if (lVar7 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x00169af8:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar10 == 1) {
    pcVar12 = *(code **)(param_2 + 0x20);
    uVar10 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_001b9f18 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_defaultValue_001b9f18), puVar3 = PTR_defaultValue_001b9f10,
       iVar5 != 0)) {
      *(undefined4 *)PTR_defaultValue_001b9f10 = 0;
      __cxa_atexit(PTR__Value_001b9f60,puVar3,&PTR_LOOP_001b6ad0);
      __cxa_guard_release(PTR_defaultValue_001b9f18);
    }
    plVar1 = (long *)(lVar6 + ((long)uVar10 >> 1));
    if ((uVar10 & 1) != 0) {
      pcVar12 = *(code **)(pcVar12 + *plVar1);
    }
                    /* try { // try from 00169b34 to 00169b43 has its CatchHandler @ 00169d50 */
    FUN_0016a29c(auStack_110,param_3,uVar11);
                    /* try { // try from 00169b44 to 00169b4f has its CatchHandler @ 00169d38 */
    bVar4 = (*pcVar12)(plVar1,auStack_110);
    if ((local_108 != (long *)0x0) &&
       (lVar6 = FUN_0015bb40(0xffffffffffffffff,local_108 + 1), lVar6 == 0)) {
      (**(code **)(*local_108 + 0x10))(local_108);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    *param_1 = 2;
    *(byte *)(param_1 + 2) = bVar4 & 1;
    if ((plVar9 != (long *)0x0) && (lVar6 = FUN_0015bb40(0xffffffffffffffff,plVar9 + 1), lVar6 == 0)
       ) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 00169c04 to 00169c13 has its CatchHandler @ 0016a1e4 */
    FUN_00169010(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar6);
    pJVar8 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00169c20 to 00169c33 has its CatchHandler @ 0016a1c4 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 00169c34 to 00169c47 has its CatchHandler @ 0016a1ac */
    FUN_0015dcfc(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 00169c48 to 00169c53 has its CatchHandler @ 0016a17c */
    std::__ndk1::to_string(1);
                    /* try { // try from 00169c54 to 00169c63 has its CatchHandler @ 0016a158 */
    FUN_001693b0(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 00169c64 to 00169c77 has its CatchHandler @ 0016a134 */
    FUN_0015dcfc(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 00169c78 to 00169c83 has its CatchHandler @ 0016a110 */
    std::__ndk1::to_string(uVar10);
                    /* try { // try from 00169c84 to 00169c93 has its CatchHandler @ 0016a0ec */
    FUN_001693b0(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 00169c94 to 00169ca7 has its CatchHandler @ 0016a0c8 */
    FUN_0015dcfc(local_98,auStack_b0,&DAT_001374e6);
                    /* try { // try from 00169cac to 00169ce7 has its CatchHandler @ 0016a068 */
    facebook::jsi::JSError::JSError(pJVar8,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar8,PTR_typeinfo_001b9f78,PTR__JSError_001b9f68);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016a20c  FUN_0016a20c =====

void FUN_0016a20c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_001b9f20) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0016a25c  FUN_0016a25c =====

undefined * FUN_0016a25c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_001b9f28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016a29c  FUN_0016a29c =====

void FUN_0016a29c(long *param_1,long *param_2,IRuntime *param_3)

{
  long lVar1;
  long lVar2;
  JSError *pJVar3;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 *local_80 [3];
  long local_68;
  long *plStack_60;
  undefined8 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  facebook::jsi::Value::asObject(param_3);
                    /* try { // try from 0016a2e0 to 0016a2ef has its CatchHandler @ 0016a554 */
  (**(code **)(*param_2 + 0x160))(&local_68,param_2,&local_50);
  if ((local_68 == 0) ||
     (lVar2 = __dynamic_cast(local_68,PTR_typeinfo_001b9f70,PTR_typeinfo_001b9ee8,0xffffffffffffffff
                            ), lVar2 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
                    /* try { // try from 0016a390 to 0016a39f has its CatchHandler @ 0016a53c */
    facebook::jsi::Value::toString(param_3);
                    /* try { // try from 0016a3a8 to 0016a3b7 has its CatchHandler @ 0016a51c */
    (**(code **)(*param_2 + 0x120))(&local_68,param_2,local_80);
    if (local_80[0] != (undefined8 *)0x0) {
      (**(code **)*local_80[0])();
    }
                    /* try { // try from 0016a3cc to 0016a3df has its CatchHandler @ 0016a504 */
    FUN_001695dc(local_80,PTR_typeinfo_name_001b9ee0,0);
    pJVar3 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0016a3ec to 0016a3ff has its CatchHandler @ 0016a4e4 */
    std::__ndk1::operator+
              ("Downcasting failed - It has a different NativeState<T>!\n- Did you accidentally pass a different type?\n- Is react-native-nitro-modules linked multiple times? Ensure you don\'t have any duplicate symbols for `"
               ,(basic_string *)local_80);
                    /* try { // try from 0016a400 to 0016a413 has its CatchHandler @ 0016a4cc */
    FUN_0015dcfc(auStack_b0,auStack_c8,"` in your app\'s binary.");
                    /* try { // try from 0016a414 to 0016a423 has its CatchHandler @ 0016a49c */
    FUN_0016a588(auStack_98,&local_68,auStack_b0);
                    /* try { // try from 0016a428 to 0016a463 has its CatchHandler @ 0016a464 */
    facebook::jsi::JSError::JSError(pJVar3,param_2,auStack_98);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar3,PTR_typeinfo_001b9f78,PTR__JSError_001b9f68);
    }
  }
  else {
    *param_1 = lVar2;
    param_1[1] = (long)plStack_60;
    if (plStack_60 != (long *)0x0) {
      FUN_0015c230(1,plStack_60 + 1);
      lVar2 = FUN_0015bb40(0xffffffffffffffff,plStack_60 + 1);
      if (lVar2 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
    if (local_50 != (undefined8 *)0x0) {
      (**(code **)*local_50)();
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016a588  FUN_0016a588 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0016a588(undefined8 *param_1,byte *param_2,byte *param_3)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  char *__dest;
  byte bVar3;
  long lVar4;
  char *pcVar5;
  void *pvVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  byte *pbVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong local_e8;
  ulong local_e0;
  undefined8 local_d8;
  ulong local_d0;
  ulong uStack_c8;
  void *local_c0;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_001695dc(local_70,PTR_typeinfo_name_001b9ee0,0);
  bVar3 = *param_2;
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  uVar1 = __n + 0x10;
  if (uVar1 < 0xfffffffffffffff0) {
    if (uVar1 < 0x17) {
      local_e0 = 0;
      uVar9 = ((uint)uVar1 & 0xff) << 1;
      local_d8 = (char *)0x0;
      local_e8 = (ulong)(byte)uVar9;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 0016a61c to 0016a623 has its CatchHandler @ 0016a8c8 */
      local_d8 = (char *)operator_new(uVar2);
      local_e8 = uVar2 | 1;
      uVar9 = (uint)local_e8 & 0xff;
      local_e0 = uVar1;
    }
    uVar11 = s_Cannot_convert___0013810c._0_8_;
    __dest = (char *)((long)&local_d8 + 1);
    pcVar5 = (char *)((ulong)&local_e8 | 1);
    if ((uVar9 & 1) != 0) {
      __dest = local_d8 + 0x10;
      pcVar5 = local_d8;
    }
    *(undefined8 *)(pcVar5 + 8) = s_Cannot_convert___0013810c._8_8_;
    *(undefined8 *)pcVar5 = uVar11;
    if (__n != 0) {
      pbVar10 = *(byte **)(param_2 + 0x10);
      if ((bVar3 & 1) == 0) {
        pbVar10 = param_2 + 1;
      }
      memmove(__dest,pbVar10,__n);
    }
    __dest[__n] = '\0';
                    /* try { // try from 0016a680 to 0016a693 has its CatchHandler @ 0016a8a8 */
    puVar7 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_e8,0x13856c);
    local_c0 = (void *)puVar7[2];
    uStack_c8 = puVar7[1];
    local_d0 = *puVar7;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    pvVar6 = (void *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      pvVar6 = local_60;
    }
                    /* try { // try from 0016a6cc to 0016a6d3 has its CatchHandler @ 0016a888 */
    puVar7 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_d0,(ulong)pvVar6);
    local_a0 = (void *)puVar7[2];
    uStack_a8 = puVar7[1];
    local_b0 = *puVar7;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
                    /* try { // try from 0016a6ec to 0016a6ff has its CatchHandler @ 0016a868 */
    puVar7 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_b0,0x137982);
    local_80 = (void *)puVar7[2];
    uStack_88 = puVar7[1];
    local_90 = *puVar7;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    pbVar10 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar10 = param_3 + 1;
    }
                    /* try { // try from 0016a730 to 0016a737 has its CatchHandler @ 0016a804 */
    puVar8 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       ((char *)&local_90,(ulong)pbVar10);
    uVar11 = puVar8[2];
    uVar13 = puVar8[1];
    uVar12 = *puVar8;
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    param_1[1] = uVar13;
    *param_1 = uVar12;
    param_1[2] = uVar11;
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    if ((local_d0 & 1) != 0) {
      operator_delete(local_c0);
    }
    if ((local_e8 & 1) != 0) {
      operator_delete(local_d8);
    }
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    if (*(long *)(lVar4 + 0x28) == local_58) {
      return;
    }
  }
  else if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* try { // try from 0016a800 to 0016a803 has its CatchHandler @ 0016a8c8 */
    uVar11 = FUN_0015d7fc();
                    /* catch() { ... } // from try @ 0016a730 with catch @ 0016a804 */
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    if ((local_d0 & 1) != 0) {
      operator_delete(local_c0);
    }
    if ((local_e8 & 1) != 0) {
      operator_delete(local_d8);
    }
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    if (*(long *)(lVar4 + 0x28) == local_58) {
      FUN_00157e74(uVar11);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016a8d8  FUN_0016a8d8 =====

void FUN_0016a8d8(long *param_1,long *param_2,long *param_3)

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
  
  puVar3 = PTR__prototypesCache_001b9f48;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (((*PTR__prototypesCache_001b9f50 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR__prototypesCache_001b9f50), iVar4 != 0)) {
    *(undefined4 *)(puVar3 + 0x20) = 0x3f800000;
    *(undefined8 *)(puVar3 + 8) = 0;
    *(undefined8 *)puVar3 = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    __cxa_atexit(FUN_0016aef4,puVar3,&PTR_LOOP_001b6ad0);
    __cxa_guard_release(PTR__prototypesCache_001b9f50);
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
          if (*(ulong *)(plVar15[2] + 8) == uVar16) goto LAB_0016ad48;
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
                    /* try { // try from 0016aa74 to 0016aa9b has its CatchHandler @ 0016ae30 */
      uVar10 = std::__ndk1::__next_prime(uVar10);
      uVar17 = *(ulong *)(puVar3 + 8);
    }
    if (uVar17 < uVar10) {
LAB_0016aa8c:
      if (uVar10 >> 0x3d != 0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
          uVar20 = FUN_0015d614();
                    /* catch() { ... } // from try @ 0016aa74 with catch @ 0016ae30
                       catch() { ... } // from try @ 0016ad98 with catch @ 0016ae30 */
          FUN_0016b310(&local_80);
          if (*(long *)(lVar2 + 0x28) == local_68) {
            FUN_00157e74(uVar20);
          }
        }
        goto LAB_0016ae64;
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
LAB_0016ad98:
                    /* try { // try from 0016ad98 to 0016ae2f has its CatchHandler @ 0016ae30 */
        uVar12 = std::__ndk1::__next_prime(uVar12);
      }
      else {
        uVar20 = NEON_cnt(uVar17,1);
        uVar19 = NEON_uaddlv(uVar20,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar20 >> 0x10),uVar19)) goto LAB_0016ad98;
        if (1 < uVar12) {
          uVar12 = 1L << (-LZCOUNT(uVar12 - 1) & 0x3fU);
        }
      }
      if (uVar10 <= uVar12) {
        uVar10 = uVar12;
      }
      if (uVar10 < uVar17) {
        if (uVar10 != 0) goto LAB_0016aa8c;
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
      goto LAB_0016ac94;
    }
  }
  else {
    *plVar15 = *plVar11;
LAB_0016ac94:
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
    FUN_0015c230(1,lVar7 + 8);
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
                    /* try { // try from 0016acfc to 0016ad03 has its CatchHandler @ 0016ae40 */
  puVar9 = (undefined8 *)operator_new(0x20);
  plVar13 = (long *)plVar15[4];
  *puVar9 = &PTR____shared_weak_count_001b7980;
  puVar9[1] = 0;
  puVar9[2] = 0;
  puVar9[3] = plVar11;
  plVar15[3] = (long)plVar11;
  plVar15[4] = (long)puVar9;
  if ((plVar13 != (long *)0x0) &&
     (lVar18 = FUN_0015bb40(0xffffffffffffffff,plVar13 + 1), lVar18 == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
LAB_0016ad48:
  *param_1 = plVar15[3];
  lVar18 = plVar15[4];
  param_1[1] = lVar18;
  if (lVar18 != 0) {
    FUN_0015c230(1,lVar18 + 8);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0016ae64:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016ae68  FUN_0016ae68 =====

void FUN_0016ae68(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_0015bb40(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 0016aef4  FUN_0016aef4 =====

void FUN_0016aef4(undefined8 *param_1)

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
    if ((plVar6 != (long *)0x0) && (lVar4 = FUN_0015bb40(0xffffffffffffffff,plVar6 + 1), lVar4 == 0)
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


// ===== 0016afcc  FUN_0016afcc =====

void FUN_0016afcc(undefined8 *param_1)

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
    FUN_0016b224((long)pvVar4 + 0x68);
    FUN_0016b224((long)pvVar4 + 0x40);
    FUN_0016b224((long)pvVar4 + 0x18);
    plVar5 = *(long **)((long)pvVar4 + 0x10);
    if ((plVar5 != (long *)0x0) && (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar5 + 1), lVar2 == 0)
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


// ===== 0016b090  FUN_0016b090 =====

void FUN_0016b090(__shared_weak_count *param_1)

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


// ===== 0016b0dc  FUN_0016b0dc =====

void FUN_0016b0dc(long param_1)

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
    FUN_0016b224((long)pvVar4 + 0x68);
    FUN_0016b224((long)pvVar4 + 0x40);
    FUN_0016b224((long)pvVar4 + 0x18);
    plVar5 = *(long **)((long)pvVar4 + 0x10);
    if ((plVar5 != (long *)0x0) && (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar5 + 1), lVar2 == 0)
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


// ===== 0016b19c  FUN_0016b19c =====

void FUN_0016b19c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_001b9f58) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0016b1ec  FUN_0016b1ec =====

void FUN_0016b1ec(void *param_1)

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


// ===== 0016b224  FUN_0016b224 =====

void FUN_0016b224(undefined8 *param_1)

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
LAB_0016b2c8:
      (**(code **)(*plVar5 + lVar7 * 8))();
    }
    else if (plVar4 != (long *)0x0) {
      lVar7 = 5;
      plVar5 = plVar4;
      goto LAB_0016b2c8;
    }
    if ((*(byte *)(puVar2 + 2) & 1) != 0) {
      operator_delete((void *)puVar2[4]);
    }
    operator_delete(puVar2);
    puVar2 = (undefined8 *)pvVar3;
  } while( true );
}


// ===== 0016b310  FUN_0016b310 =====

void FUN_0016b310(undefined8 *param_1)

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
       (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar5 + 1), lVar2 == 0)) {
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


// ===== 0016b3c4  FUN_0016b3c4 =====

void FUN_0016b3c4(undefined8 *param_1,char *param_2,ulong param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  strlen(param_2);
  puVar2 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                     (param_3,(char *)0x0,(ulong)param_2);
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


// ===== 0016b44c  margelo::nitro::HybridObject::toObject =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::HybridObject::toObject(facebook::jsi::Runtime&) */

void margelo::nitro::HybridObject::toObject(Runtime *param_1)

{
  Runtime *pRVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  Runtime *pRVar5;
  void *pvVar6;
  void *pvVar7;
  runtime_error *this;
  HybridObjectPrototype *in_x1;
  Runtime *extraout_x1;
  shared_ptr *in_x2;
  Value *in_x8;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *unaff_x27;
  undefined2 uVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 local_b8;
  long *local_b0;
  long *local_a8;
  Value aVStack_98 [24];
  long *local_80;
  Runtime *pRStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  uVar10 = (((((ulong)in_x1 & 0xffffffff) >> 3 & 0x3ffffff) << 6 | 8) ^ (ulong)in_x1 >> 0x20) *
           -0x622015f714c7d297;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar10 = ((ulong)in_x1 >> 0x20 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
  puVar20 = (undefined8 *)((uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297);
  puVar11 = *(undefined8 **)(param_1 + 0x40);
  if (puVar11 != (undefined8 *)0x0) {
    uVar22 = NEON_cnt(puVar11,1);
    uVar21 = NEON_uaddlv(uVar22,1);
    uVar10 = CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar21) & 0xffffffff;
    if (uVar10 < 2) {
      puVar12 = (undefined8 *)((long)puVar11 - 1U & (ulong)puVar20);
    }
    else {
      puVar12 = puVar20;
      if (puVar11 <= puVar20) {
        uVar14 = 0;
        if (puVar11 != (undefined8 *)0x0) {
          uVar14 = (ulong)puVar20 / (ulong)puVar11;
        }
        puVar12 = (undefined8 *)((long)puVar20 - uVar14 * (long)puVar11);
      }
    }
    plVar15 = *(long **)(*(long *)(param_1 + 0x38) + (long)puVar12 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      do {
        puVar17 = (undefined8 *)plVar15[1];
        if (puVar17 == puVar20) {
          if ((HybridObjectPrototype *)plVar15[2] == in_x1) {
            if ((plVar15[3] == 0) || ((*(byte *)(plVar15[4] + 0x10) & 1) != 0)) {
              this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0016be98 to 0016bea3 has its CatchHandler @ 0016c0dc */
              getName();
                    /* try { // try from 0016bea4 to 0016beb7 has its CatchHandler @ 0016c0c4 */
              FUN_0016b3c4(aVStack_98,"HybridObject \"",&local_b0);
                    /* try { // try from 0016beb8 to 0016becb has its CatchHandler @ 0016c094 */
              FUN_0015dcfc(&local_80,aVStack_98,"\" was cached, but the reference got destroyed!");
                    /* try { // try from 0016bed0 to 0016bf0b has its CatchHandler @ 0016c05c */
              std::runtime_error::runtime_error(this,(basic_string *)&local_80);
              if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                __cxa_throw(this,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
              }
              goto LAB_0016c104;
            }
            (**(code **)(*(long *)in_x1 + 0x228))();
            if (*(int *)in_x8 != 0) {
                    /* try { // try from 0016b5b0 to 0016b5b7 has its CatchHandler @ 0016bf70 */
              local_80 = (long *)(**(code **)(*(long *)in_x1 + 0x88))();
              (**(code **)(*(long *)param_1 + 0x38))(param_1);
                    /* try { // try from 0016b5d8 to 0016b5e3 has its CatchHandler @ 0016bf48 */
              (**(code **)(*(long *)in_x1 + 0x2c8))();
              if (local_80 != (long *)0x0) {
                (**(code **)*local_80)();
              }
              goto LAB_0016be0c;
            }
            facebook::jsi::Value::~Value(in_x8);
            break;
          }
        }
        else {
          if (uVar10 < 2) {
            puVar17 = (undefined8 *)((ulong)puVar17 & (long)puVar11 - 1U);
          }
          else if (puVar11 <= puVar17) {
            uVar14 = 0;
            if (puVar11 != (undefined8 *)0x0) {
              uVar14 = (ulong)puVar17 / (ulong)puVar11;
            }
            puVar17 = (undefined8 *)((long)puVar17 - uVar14 * (long)puVar11);
          }
          if (puVar17 != puVar12) break;
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
  HybridObjectPrototype::ensureInitialized((HybridObjectPrototype *)param_1);
  HybridObjectPrototype::createPrototype(in_x1,param_1 + 8,in_x2);
                    /* try { // try from 0016b624 to 0016b633 has its CatchHandler @ 0016c010 */
  (**(code **)(*(long *)in_x1 + 0x150))(&local_b8);
                    /* try { // try from 0016b63c to 0016b647 has its CatchHandler @ 0016c004 */
  (**(code **)(*(long *)param_1 + 0x18))(&local_b0,param_1);
  plVar15 = local_a8;
  local_80 = local_b0;
  if (local_b0 != (long *)0x0) {
    local_80 = (long *)((long)local_b0 + *(long *)(*local_b0 + -0x18));
  }
  local_b0 = (long *)0x0;
  local_a8 = (long *)0x0;
  pRStack_78 = (Runtime *)plVar15;
  if (plVar15 != (long *)0x0) {
    FUN_0015c230(1,plVar15 + 1);
  }
                    /* try { // try from 0016b680 to 0016b68f has its CatchHandler @ 0016bfdc */
  (**(code **)(*(long *)in_x1 + 0x168))();
  pRVar5 = pRStack_78;
  if ((pRStack_78 != (Runtime *)0x0) &&
     (lVar3 = FUN_0015bb40(0xffffffffffffffff,(long *)((long)pRStack_78 + 8)), lVar3 == 0)) {
    (**(code **)(*(long *)pRVar5 + 0x10))(pRVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if ((plVar15 != (long *)0x0) && (lVar3 = FUN_0015bb40(0xffffffffffffffff,plVar15 + 1), lVar3 == 0)
     ) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar15 = local_a8;
  if ((local_a8 != (long *)0x0) &&
     (lVar3 = FUN_0015bb40(0xffffffffffffffff,local_a8 + 1), lVar3 == 0)) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  (**(code **)(*(long *)param_1 + 0x38))(param_1);
                    /* try { // try from 0016b738 to 0016b743 has its CatchHandler @ 0016bfd8 */
  (**(code **)(*(long *)in_x1 + 0x2c8))();
                    /* try { // try from 0016b744 to 0016b74f has its CatchHandler @ 0016bfd4 */
  JSICache::getOrCreateCache((JSICache *)in_x1,extraout_x1);
                    /* try { // try from 0016b758 to 0016b767 has its CatchHandler @ 0016bfc8 */
  (**(code **)(*(long *)in_x1 + 0x220))(&local_80);
  plVar15 = local_80;
                    /* try { // try from 0016b76c to 0016b773 has its CatchHandler @ 0016bfa8 */
  plVar4 = (long *)operator_new(8);
  *plVar4 = (long)plVar15;
                    /* try { // try from 0016b780 to 0016b787 has its CatchHandler @ 0016bfa4 */
  pRVar5 = (Runtime *)operator_new(0x40);
  plVar15 = local_b0;
  pRVar5[0x10] = (Runtime)0x0;
  lVar9 = _UNK_00138c28;
  lVar3 = _DAT_00138c20;
  *(undefined8 *)(pRVar5 + 0x34) = 0;
  *(long *)(pRVar5 + 8) = lVar9;
  *(long *)pRVar5 = lVar3;
  *(undefined8 *)(pRVar5 + 0x1c) = 0;
  *(undefined8 *)(pRVar5 + 0x14) = 0;
  *(undefined8 *)(pRVar5 + 0x2c) = 0;
  *(undefined8 *)(pRVar5 + 0x24) = 0;
  local_80 = plVar4;
  pRStack_78 = pRVar5;
  FUN_0015bb40(1,pRVar5 + 8);
  puVar11 = (undefined8 *)plVar15[0x10];
  if ((undefined8 *)plVar15[0x11] <= puVar11) {
    lVar9 = (long)puVar11 - plVar15[0xf];
    lVar3 = lVar9 >> 4;
    uVar10 = lVar3 + 1;
    if (uVar10 >> 0x3c == 0) {
      uVar8 = plVar15[0x11] - plVar15[0xf];
      uVar14 = (long)uVar8 >> 3;
      if (uVar14 <= uVar10) {
        uVar14 = uVar10;
      }
      if (0x7fffffffffffffef < uVar8) {
        uVar14 = 0xfffffffffffffff;
      }
      if (uVar14 >> 0x3c == 0) {
                    /* try { // try from 0016b824 to 0016b827 has its CatchHandler @ 0016c01c */
        pvVar7 = operator_new(uVar14 << 4);
        pRVar1 = pRStack_78;
        plVar13 = local_80;
        puVar11 = (undefined8 *)((long)pvVar7 + lVar9);
        pvVar6 = (void *)((long)pvVar7 + uVar14 * 0x10);
        local_80 = (long *)0x0;
        pRStack_78 = (Runtime *)0x0;
        unaff_x27 = puVar11 + 2;
        *puVar11 = plVar13;
        *(Runtime **)((long)pvVar7 + lVar3 * 0x10 + 8) = pRVar1;
        puVar12 = (undefined8 *)plVar15[0xf];
        puVar17 = (undefined8 *)plVar15[0x10];
        if (puVar17 == puVar12) {
          plVar15[0xf] = (long)puVar11;
          plVar15[0x10] = (long)unaff_x27;
          plVar15[0x11] = (long)pvVar6;
        }
        else {
          do {
            puVar18 = puVar17 + -2;
            puVar19 = puVar11 + -2;
            *puVar19 = *puVar18;
            lVar3 = puVar17[-1];
            puVar11[-1] = lVar3;
            if (lVar3 != 0) {
              FUN_0015bb40(1,lVar3 + 8);
            }
            puVar17 = puVar18;
            puVar11 = puVar19;
          } while (puVar18 != puVar12);
          puVar17 = (undefined8 *)plVar15[0xf];
          puVar11 = (undefined8 *)plVar15[0x10];
          plVar15[0xf] = (long)puVar19;
          plVar15[0x10] = (long)unaff_x27;
          plVar15[0x11] = (long)pvVar6;
          while (puVar11 != puVar17) {
            plVar13 = puVar11 + -1;
            puVar11 = puVar11 + -2;
            if (*plVar13 != 0) {
              FUN_0015bb40(0xffffffffffffffff,*plVar13 + 8);
                    /* try { // try from 0016b8d0 to 0016b8d7 has its CatchHandler @ 0016c058 */
              FUN_0016c224(puVar11);
            }
          }
        }
        if (puVar17 != (undefined8 *)0x0) {
          operator_delete(puVar17);
        }
        plVar15[0x10] = (long)unaff_x27;
        if (pRStack_78 != (Runtime *)0x0) {
          FUN_0015bb40(0xffffffffffffffff,pRStack_78 + 8);
                    /* try { // try from 0016b904 to 0016b90b has its CatchHandler @ 0016bf80 */
          FUN_0016c224(&local_80);
        }
        goto LAB_0016b90c;
      }
    }
    else {
      if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_0016c104;
                    /* try { // try from 0016bf1c to 0016bf33 has its CatchHandler @ 0016c01c */
      FUN_0016c4b4();
    }
    if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_0016c104;
    FUN_0015d614();
LAB_0016bf34:
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0016bf44 to 0016bf47 has its CatchHandler @ 0016bf84 */
      uVar22 = FUN_0015d614();
                    /* catch() { ... } // from try @ 0016b5d8 with catch @ 0016bf48 */
      if (local_80 != (long *)0x0) {
        (**(code **)*local_80)(local_80);
      }
      facebook::jsi::Value::~Value(in_x8);
      if (*(long *)(lVar2 + 0x28) == local_68) {
        FUN_00157e74(uVar22);
      }
    }
    goto LAB_0016c104;
  }
  puVar11[1] = pRStack_78;
  *puVar11 = local_80;
  plVar15[0x10] = (long)(puVar11 + 2);
LAB_0016b90c:
  puVar11 = *(undefined8 **)(param_1 + 0x40);
  if (puVar11 != (undefined8 *)0x0) {
    uVar22 = NEON_cnt(puVar11,1);
    uVar21 = NEON_uaddlv(uVar22,1);
    uVar10 = CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar21) & 0xffffffff;
    if (uVar10 < 2) {
      unaff_x27 = (undefined8 *)((ulong)puVar20 & (long)puVar11 - 1U);
    }
    else {
      unaff_x27 = puVar20;
      if (puVar11 <= puVar20) {
        uVar14 = 0;
        if (puVar11 != (undefined8 *)0x0) {
          uVar14 = (ulong)puVar20 / (ulong)puVar11;
        }
        unaff_x27 = (undefined8 *)((long)puVar20 - uVar14 * (long)puVar11);
      }
    }
    puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x38) + (long)unaff_x27 * 8);
    if ((puVar12 != (undefined8 *)0x0) && (plVar15 = (long *)*puVar12, plVar15 != (long *)0x0)) {
      do {
        puVar12 = (undefined8 *)plVar15[1];
        if (puVar12 == puVar20) {
          if ((HybridObjectPrototype *)plVar15[2] == in_x1) goto LAB_0016bc7c;
        }
        else {
          if (uVar10 < 2) {
            puVar12 = (undefined8 *)((ulong)puVar12 & (long)puVar11 - 1U);
          }
          else if (puVar11 <= puVar12) {
            uVar14 = 0;
            if (puVar11 != (undefined8 *)0x0) {
              uVar14 = (ulong)puVar12 / (ulong)puVar11;
            }
            puVar12 = (undefined8 *)((long)puVar12 - uVar14 * (long)puVar11);
          }
          if (puVar12 != unaff_x27) break;
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
                    /* try { // try from 0016b9b8 to 0016b9bf has its CatchHandler @ 0016bf98 */
  plVar15 = (long *)operator_new(0x28);
  lVar3 = *(long *)(param_1 + 0x50);
  fVar23 = *(float *)(param_1 + 0x58);
  pRVar1 = param_1 + 0x48;
  *plVar15 = 0;
  plVar15[1] = (long)puVar20;
  plVar15[3] = 0;
  plVar15[4] = 0;
  plVar15[2] = (long)in_x1;
  local_70 = 1;
  local_80 = plVar15;
  pRStack_78 = pRVar1;
  if ((puVar11 == (undefined8 *)0x0) || (fVar23 * (float)puVar11 < (float)(lVar3 + 1))) {
    if (puVar11 < (undefined8 *)0x3) {
      uVar10 = 1;
    }
    else {
      uVar10 = (ulong)(((ulong)puVar11 & (long)puVar11 - 1U) != 0);
    }
    puVar12 = (undefined8 *)(uVar10 | (long)puVar11 << 1);
    puVar17 = (undefined8 *)(long)((float)(lVar3 + 1) / fVar23);
    if (puVar12 <= puVar17) {
      puVar12 = puVar17;
    }
    if ((long)puVar12 - 1U == 0) {
      puVar12 = (undefined8 *)0x2;
    }
    else if (((ulong)puVar12 & (long)puVar12 - 1U) != 0) {
                    /* try { // try from 0016ba50 to 0016ba77 has its CatchHandler @ 0016bf84 */
      puVar12 = (undefined8 *)std::__ndk1::__next_prime((ulong)puVar12);
      puVar11 = *(undefined8 **)(param_1 + 0x40);
    }
    if (puVar11 < puVar12) {
LAB_0016ba68:
      if ((ulong)puVar12 >> 0x3d != 0) goto LAB_0016bf34;
      pvVar6 = operator_new((long)puVar12 << 3);
      pvVar7 = *(void **)(param_1 + 0x38);
      *(void **)(param_1 + 0x38) = pvVar6;
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
      }
      puVar11 = (undefined8 *)0x0;
      *(undefined8 **)(param_1 + 0x40) = puVar12;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x38) + (long)puVar11 * 8) = 0;
        puVar11 = (undefined8 *)((long)puVar11 + 1);
      } while (puVar12 != puVar11);
      plVar13 = *(long **)pRVar1;
      puVar11 = puVar12;
      if (plVar13 != (long *)0x0) {
        puVar17 = (undefined8 *)plVar13[1];
        uVar22 = NEON_cnt(puVar12,1);
        uVar21 = NEON_uaddlv(uVar22,1);
        uVar10 = CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar21) & 0xffffffff;
        if (uVar10 < 2) {
          puVar17 = (undefined8 *)((ulong)puVar17 & (long)puVar12 - 1U);
        }
        else if (puVar12 <= puVar17) {
          uVar14 = 0;
          if (puVar12 != (undefined8 *)0x0) {
            uVar14 = (ulong)puVar17 / (ulong)puVar12;
          }
          puVar17 = (undefined8 *)((long)puVar17 - uVar14 * (long)puVar12);
        }
        *(Runtime **)(*(long *)(param_1 + 0x38) + (long)puVar17 * 8) = pRVar1;
        plVar16 = (long *)*plVar13;
        if (plVar16 != (long *)0x0) {
          do {
            puVar18 = (undefined8 *)plVar16[1];
            if (uVar10 < 2) {
              puVar18 = (undefined8 *)((ulong)puVar18 & (long)puVar12 - 1U);
            }
            else if (puVar12 <= puVar18) {
              uVar14 = 0;
              if (puVar12 != (undefined8 *)0x0) {
                uVar14 = (ulong)puVar18 / (ulong)puVar12;
              }
              puVar18 = (undefined8 *)((long)puVar18 - uVar14 * (long)puVar12);
            }
            if (puVar18 != puVar17) {
              if (*(long *)(*(long *)(param_1 + 0x38) + (long)puVar18 * 8) == 0) {
                *(long **)(*(long *)(param_1 + 0x38) + (long)puVar18 * 8) = plVar13;
                puVar17 = puVar18;
              }
              else {
                *plVar13 = *plVar16;
                *plVar16 = **(long **)(*(long *)(param_1 + 0x38) + (long)puVar18 * 8);
                **(undefined8 **)(*(long *)(param_1 + 0x38) + (long)puVar18 * 8) = plVar16;
                plVar16 = plVar13;
              }
            }
            plVar13 = plVar16;
            plVar16 = (long *)*plVar13;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    else if (puVar12 < puVar11) {
      puVar17 = (undefined8 *)(long)((float)*(ulong *)(param_1 + 0x50) / *(float *)(param_1 + 0x58))
      ;
      if (puVar11 < (undefined8 *)0x3) {
LAB_0016be3c:
                    /* try { // try from 0016be3c to 0016be3f has its CatchHandler @ 0016bf84 */
        puVar17 = (undefined8 *)std::__ndk1::__next_prime((ulong)puVar17);
      }
      else {
        uVar22 = NEON_cnt(puVar11,1);
        uVar21 = NEON_uaddlv(uVar22,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar21)) goto LAB_0016be3c;
        if ((undefined8 *)0x1 < puVar17) {
          puVar17 = (undefined8 *)(1L << (-LZCOUNT((long)puVar17 + -1) & 0x3fU));
        }
      }
      if (puVar12 <= puVar17) {
        puVar12 = puVar17;
      }
      if (puVar12 < puVar11) {
        if (puVar12 != (undefined8 *)0x0) goto LAB_0016ba68;
        pvVar6 = *(void **)(param_1 + 0x38);
        *(undefined8 *)(param_1 + 0x38) = 0;
        if (pvVar6 != (void *)0x0) {
          operator_delete(pvVar6);
        }
        *(undefined8 *)(param_1 + 0x40) = 0;
        puVar11 = (undefined8 *)0x0;
      }
      else {
        puVar11 = *(undefined8 **)(param_1 + 0x40);
      }
    }
    if (((ulong)puVar11 & (long)puVar11 - 1U) == 0) {
      unaff_x27 = (undefined8 *)((long)puVar11 - 1U & (ulong)puVar20);
    }
    else {
      unaff_x27 = puVar20;
      if (puVar11 <= puVar20) {
        uVar10 = 0;
        if (puVar11 != (undefined8 *)0x0) {
          uVar10 = (ulong)puVar20 / (ulong)puVar11;
        }
        unaff_x27 = (undefined8 *)((long)puVar20 - uVar10 * (long)puVar11);
      }
    }
  }
  lVar3 = *(long *)(param_1 + 0x38);
  plVar13 = *(long **)(lVar3 + (long)unaff_x27 * 8);
  if (plVar13 == (long *)0x0) {
    lVar9 = *(long *)pRVar1;
    *(long **)pRVar1 = plVar15;
    *plVar15 = lVar9;
    *(Runtime **)(lVar3 + (long)unaff_x27 * 8) = pRVar1;
    if (*plVar15 != 0) {
      puVar20 = *(undefined8 **)(*plVar15 + 8);
      if (((ulong)puVar11 & (long)puVar11 - 1U) == 0) {
        puVar20 = (undefined8 *)((ulong)puVar20 & (long)puVar11 - 1U);
      }
      else if (puVar11 <= puVar20) {
        uVar10 = 0;
        if (puVar11 != (undefined8 *)0x0) {
          uVar10 = (ulong)puVar20 / (ulong)puVar11;
        }
        puVar20 = (undefined8 *)((long)puVar20 - uVar10 * (long)puVar11);
      }
      plVar13 = (long *)(*(long *)(param_1 + 0x38) + (long)puVar20 * 8);
      goto LAB_0016bc6c;
    }
  }
  else {
    *plVar15 = *plVar13;
LAB_0016bc6c:
    *plVar13 = (long)plVar15;
  }
  *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
LAB_0016bc7c:
  if (plVar15[4] != 0) {
    uVar10 = FUN_0015bb40(0xffffffffffffffff);
    if ((uVar10 < 2) && ((*(byte *)(plVar15[4] + 0x10) & 1) == 0)) {
      plVar13 = (long *)plVar15[3];
      if (plVar13 != (long *)0x0) {
        if ((undefined8 *)*plVar13 != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)*plVar13)();
        }
        operator_delete(plVar13);
      }
      plVar15[3] = 0;
      *(undefined4 *)(plVar15[4] + 0x10) = 1;
    }
    if ((*(long *)plVar15[4] == 0) && (*(long *)(plVar15[4] + 8) == 0)) {
      pvVar6 = (void *)plVar15[4];
      if (pvVar6 != (void *)0x0) {
        std::__ndk1::mutex::~mutex((mutex *)((long)pvVar6 + 0x14));
        operator_delete(pvVar6);
      }
      plVar15[4] = 0;
    }
  }
  plVar15[3] = (long)plVar4;
  plVar15[4] = (long)pRVar5;
  if ((pRVar5 != (Runtime *)0x0) && (FUN_0015bb40(1), pRVar5 != (Runtime *)0x0)) {
    uVar10 = FUN_0015bb40(0xffffffffffffffff);
    if (uVar10 < 2) {
      if (((byte)pRVar5[0x10] & 1) == 0) {
        if (plVar4 != (long *)0x0) {
          if ((undefined8 *)*plVar4 != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)*plVar4)();
          }
          operator_delete(plVar4);
        }
        *(undefined4 *)(pRVar5 + 0x10) = 1;
        goto LAB_0016bd88;
      }
      lVar3 = *(long *)pRVar5;
    }
    else {
LAB_0016bd88:
      lVar3 = *(long *)pRVar5;
    }
    if (((lVar3 == 0) && (*(long *)(pRVar5 + 8) == 0)) && (pRVar5 != (Runtime *)0x0)) {
      std::__ndk1::mutex::~mutex((mutex *)(pRVar5 + 0x14));
      operator_delete(pRVar5);
    }
  }
  std::__ndk1::mutex::unlock();
  plVar15 = local_a8;
  if ((local_a8 != (long *)0x0) &&
     (lVar3 = FUN_0015bb40(0xffffffffffffffff,local_a8 + 1), lVar3 == 0)) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined4 *)in_x8 = 7;
  *(undefined8 *)(in_x8 + 8) = local_b8;
  facebook::jsi::Value::~Value(aVStack_98);
LAB_0016be0c:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0016c104:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016c108  FUN_0016c108 =====

void FUN_0016c108(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  std::__ndk1::mutex::unlock();
  plVar4 = *(long **)(param_1 + 8);
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
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


// ===== 0016c1a4  FUN_0016c1a4 =====

void FUN_0016c1a4(undefined8 *param_1)

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
    if (*(char *)(param_1 + 2) != '\0') {
      FUN_00166f68((long)pvVar3 + 0x18);
    }
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016c224  FUN_0016c224 =====

void FUN_0016c224(long param_1)

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
      FUN_001695dc(abStack_50,PTR_typeinfo_name_001b9f40,1);
      this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0016c2dc to 0016c2ef has its CatchHandler @ 0016c414 */
      std::__ndk1::operator+("WeakReference<",abStack_50);
                    /* try { // try from 0016c2f0 to 0016c303 has its CatchHandler @ 0016c3fc */
      FUN_0015dcfc(auStack_98,auStack_b0,"> encountered a stale `_value` - BorrowingReference<");
                    /* try { // try from 0016c304 to 0016c313 has its CatchHandler @ 0016c3cc */
      FUN_0016955c(auStack_80,auStack_98,abStack_50);
                    /* try { // try from 0016c314 to 0016c327 has its CatchHandler @ 0016c3a8 */
      FUN_0015dcfc(abStack_68,auStack_80,"> should\'ve already deleted this!");
                    /* try { // try from 0016c32c to 0016c367 has its CatchHandler @ 0016c368 */
      std::runtime_error::runtime_error(this,abStack_68);
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
      }
      goto LAB_0016c44c;
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
LAB_0016c44c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016c450  FUN_0016c450 =====

void FUN_0016c450(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_0015bb40(0xffffffffffffffff,*(long *)(param_1 + 8) + 8);
                    /* try { // try from 0016c484 to 0016c48b has its CatchHandler @ 0016c4b0 */
    FUN_0016c224(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016c4b4  FUN_0016c4b4 =====

void FUN_0016c4b4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_0015d71c("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016c4ec  margelo::nitro::Promise<void>::~Promise =====

/* margelo::nitro::Promise<void>::~Promise() */

void __thiscall margelo::nitro::Promise<void>::~Promise(Promise<void> *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  runtime_error arStack_60 [16];
  exception_ptr aeStack_50 [8];
  undefined8 local_48 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0x28] == (Promise<void>)0x0) {
    lVar3 = *(long *)(this + 0x30);
    local_48[0] = 0;
    std::exception_ptr::~exception_ptr((exception_ptr *)local_48);
    if (lVar3 == 0) {
                    /* try { // try from 0016c620 to 0016c653 has its CatchHandler @ 0016c67c */
      std::runtime_error::runtime_error
                ((runtime_error *)local_48,"Timeouted: Promise<void> was destroyed!");
      std::runtime_error::runtime_error(arStack_60,(runtime_error *)local_48);
      FUN_0016c680(aeStack_50,arStack_60);
      reject(this,aeStack_50);
      std::exception_ptr::~exception_ptr(aeStack_50);
      std::runtime_error::~runtime_error(arStack_60);
      std::runtime_error::~runtime_error((runtime_error *)local_48);
      plVar4 = *(long **)(this + 0x50);
      goto joined_r0x0016c530;
    }
  }
  plVar4 = *(long **)(this + 0x50);
joined_r0x0016c530:
  if (plVar4 != (long *)0x0) {
    plVar5 = *(long **)(this + 0x58);
    plVar2 = plVar4;
    if (plVar5 != plVar4) {
      do {
        plVar2 = (long *)plVar5[-2];
        plVar5 = plVar5 + -6;
        if (plVar5 == plVar2) {
          lVar3 = 4;
          plVar2 = plVar5;
LAB_0016c550:
          (**(code **)(*plVar2 + lVar3 * 8))();
        }
        else if (plVar2 != (long *)0x0) {
          lVar3 = 5;
          goto LAB_0016c550;
        }
      } while (plVar5 != plVar4);
      plVar2 = *(long **)(this + 0x50);
    }
    *(long **)(this + 0x58) = plVar4;
    operator_delete(plVar2);
  }
  plVar4 = *(long **)(this + 0x38);
  if (plVar4 != (long *)0x0) {
    plVar5 = *(long **)(this + 0x40);
    plVar2 = plVar4;
    if (plVar5 != plVar4) {
      do {
        plVar2 = (long *)plVar5[-2];
        plVar5 = plVar5 + -6;
        if (plVar5 == plVar2) {
          lVar3 = 4;
          plVar2 = plVar5;
LAB_0016c5b0:
          (**(code **)(*plVar2 + lVar3 * 8))();
        }
        else if (plVar2 != (long *)0x0) {
          lVar3 = 5;
          goto LAB_0016c5b0;
        }
      } while (plVar5 != plVar4);
      plVar2 = *(long **)(this + 0x38);
    }
    *(long **)(this + 0x40) = plVar4;
    operator_delete(plVar2);
  }
  std::exception_ptr::~exception_ptr((exception_ptr *)(this + 0x30));
  std::__ndk1::mutex::~mutex((mutex *)this);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016c680  FUN_0016c680 =====

void FUN_0016c680(undefined8 param_1,runtime_error *param_2)

{
  long lVar1;
  runtime_error *this;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (runtime_error *)__cxa_allocate_exception(0x10);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::runtime_error::runtime_error(this,param_2);
                    /* try { // try from 0016c6cc to 0016c6e3 has its CatchHandler @ 0016c6e4 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016c720  margelo::nitro::Promise<void>::reject =====

/* margelo::nitro::Promise<void>::reject(std::exception_ptr const&) */

void __thiscall margelo::nitro::Promise<void>::reject(Promise<void> *this,exception_ptr *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  runtime_error *this_00;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar6 = *(long *)param_1;
  local_50 = 0;
  std::exception_ptr::~exception_ptr((exception_ptr *)&local_50);
  if (lVar6 == 0) {
    this_00 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0016c870 to 0016c87b has its CatchHandler @ 0016c8cc */
    std::runtime_error::runtime_error
              (this_00,"Cannot reject Promise<void> with a null exception_ptr!");
    if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
    }
  }
  else {
    std::__ndk1::mutex::lock();
    std::exception_ptr::operator=((exception_ptr *)(this + 0x30),param_1);
    lVar1 = *(long *)(this + 0x58);
    for (lVar6 = *(long *)(this + 0x50); lVar6 != lVar1; lVar6 = lVar6 + 0x30) {
      plVar3 = *(long **)(lVar6 + 0x20);
      if (plVar3 == (long *)0x0) {
        if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 0016c8b4 to 0016c8b7 has its CatchHandler @ 0016c8bc */
          uVar5 = FUN_0016c8f4();
                    /* catch() { ... } // from try @ 0016c790 with catch @ 0016c8b8 */
                    /* catch() { ... } // from try @ 0016c8b4 with catch @ 0016c8bc */
          std::__ndk1::mutex::unlock();
          if (*(long *)(lVar2 + 0x28) == local_48) {
            FUN_00157e74(uVar5);
          }
        }
        goto LAB_0016c8f0;
      }
                    /* try { // try from 0016c790 to 0016c797 has its CatchHandler @ 0016c8b8 */
      (**(code **)(*plVar3 + 0x30))(plVar3,param_1);
    }
    plVar3 = *(long **)(this + 0x38);
    plVar7 = *(long **)(this + 0x40);
LAB_0016c7c0:
    if (plVar7 != plVar3) {
      plVar4 = (long *)plVar7[-2];
      plVar7 = plVar7 + -6;
      if (plVar7 != plVar4) goto code_r0x0016c7d8;
      lVar6 = 4;
      plVar4 = plVar7;
      goto LAB_0016c7b4;
    }
    plVar7 = *(long **)(this + 0x50);
    plVar4 = *(long **)(this + 0x58);
    *(long **)(this + 0x40) = plVar3;
joined_r0x0016c7f0:
    if (plVar4 != plVar7) {
      plVar3 = (long *)plVar4[-2];
      plVar4 = plVar4 + -6;
      if (plVar4 != plVar3) goto code_r0x0016c858;
      lVar6 = 4;
      plVar3 = plVar4;
      goto LAB_0016c830;
    }
    *(long **)(this + 0x58) = plVar7;
    std::__ndk1::mutex::unlock();
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return;
    }
  }
LAB_0016c8f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0016c7d8:
  if (plVar4 != (long *)0x0) {
    lVar6 = 5;
LAB_0016c7b4:
    (**(code **)(*plVar4 + lVar6 * 8))();
  }
  goto LAB_0016c7c0;
code_r0x0016c858:
  if (plVar3 != (long *)0x0) {
    lVar6 = 5;
LAB_0016c830:
    (**(code **)(*plVar3 + lVar6 * 8))();
  }
  goto joined_r0x0016c7f0;
}


// ===== 0016c8f4  FUN_0016c8f4 =====

void FUN_0016c8f4(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    plVar2 = (long *)__cxa_allocate_exception(8);
    *plVar2 = (long)(PTR_vtable_001b9f90 + 0x10);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar2,PTR_typeinfo_001b9f88,PTR__exception_001b9f98);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016c94c  FUN_0016c94c =====

void FUN_0016c94c(exception *param_1)

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


// ===== 0016c998  margelo::nitro::Promise<void>::create =====

/* margelo::nitro::Promise<void>::create() */

void __thiscall margelo::nitro::Promise<void>::create(Promise<void> *this)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *in_x8;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x68);
  puVar2[0xc] = 0;
  *in_x8 = puVar2;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
                    /* try { // try from 0016c9e0 to 0016c9e7 has its CatchHandler @ 0016ca20 */
  puVar3 = (undefined8 *)operator_new(0x20);
  puVar3[2] = 0;
  puVar3[3] = puVar2;
  *puVar3 = &PTR____shared_weak_count_001b7068;
  puVar3[1] = 0;
  in_x8[1] = puVar3;
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016ca50  FUN_0016ca50 =====

void FUN_0016ca50(__shared_weak_count *param_1)

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


// ===== 0016ca9c  FUN_0016ca9c =====

void FUN_0016ca9c(long param_1)

{
  long lVar1;
  long lVar2;
  Promise<void> *this;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = *(Promise<void> **)(param_1 + 0x18);
  if (this == (Promise<void> *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else {
    margelo::nitro::Promise<void>::~Promise(this);
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(this);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016cb10  FUN_0016cb10 =====

void FUN_0016cb10(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_001b9f80) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0016cb60  FUN_0016cb60 =====

void FUN_0016cb60(void *param_1)

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


// ===== 0016cb98  margelo::nitro::Promise<void>::async =====

/* margelo::nitro::Promise<void>::async(std::__ndk1::function<void ()>&&) */

void __thiscall margelo::nitro::Promise<void>::async(Promise<void> *this,function *param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  function *pfVar6;
  Promise<void> *pPVar7;
  undefined8 *in_x8;
  Promise<void> *pPVar8;
  long lVar9;
  Promise<void> *pPVar10;
  function *pfVar11;
  long local_c0 [4];
  Promise<void> *local_a0 [2];
  undefined8 *local_90;
  long *local_88;
  function local_80 [32];
  function *local_60;
  long local_48;
  
  pPVar7 = (Promise<void> *)local_c0;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x68);
  puVar4[0xc] = 0;
  *in_x8 = puVar4;
  puVar4[1] = 0;
  *puVar4 = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
                    /* try { // try from 0016cbe8 to 0016cbef has its CatchHandler @ 0016ce74 */
  puVar5 = (undefined8 *)operator_new(0x20);
  puVar5[2] = 0;
  puVar5[3] = puVar4;
  *puVar5 = &PTR____shared_weak_count_001b7068;
  puVar5[1] = 0;
  in_x8[1] = puVar5;
  if (((DAT_001bfe48 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_001bfe48), iVar3 != 0)) {
    ThreadPool::ThreadPool((ThreadPool *)&DAT_001bfd88,"nitro-thread",3,10);
    __cxa_atexit(PTR__ThreadPool_001ba188,&DAT_001bfd88,&PTR_LOOP_001b6ad0);
    __cxa_guard_release(&DAT_001bfe48);
  }
  pPVar8 = this + 0x20;
  pPVar10 = *(Promise<void> **)pPVar8;
  if (pPVar10 == (Promise<void> *)0x0) {
    pPVar8 = (Promise<void> *)local_a0;
LAB_0016cc3c:
    *(Promise<void> **)pPVar8 = (Promise<void> *)0x0;
  }
  else {
    local_a0[0] = pPVar10;
    if (pPVar10 != this) goto LAB_0016cc3c;
    local_a0[0] = (Promise<void> *)local_c0;
                    /* try { // try from 0016cc54 to 0016cc5f has its CatchHandler @ 0016ce20 */
    (**(code **)(*(long *)this + 0x18))(this,local_c0);
  }
  local_90 = puVar4;
  local_88 = puVar5;
  FUN_0015c230(1,puVar5 + 1);
  local_60 = (function *)0x0;
                    /* try { // try from 0016cc74 to 0016cc7b has its CatchHandler @ 0016ce5c */
  pfVar6 = (function *)operator_new(0x50);
  *(undefined ***)pfVar6 = &PTR_FUN_001b70b8;
  if (local_a0[0] == (Promise<void> *)0x0) {
    pfVar11 = pfVar6 + 0x30;
LAB_0016ccb4:
    *(Promise<void> **)pfVar11 = (Promise<void> *)0x0;
    local_90 = puVar4;
    local_88 = puVar5;
  }
  else {
    if (local_a0[0] != (Promise<void> *)local_c0) {
      pfVar11 = (function *)local_a0;
      *(Promise<void> **)(pfVar6 + 0x30) = local_a0[0];
      goto LAB_0016ccb4;
    }
    *(function **)(pfVar6 + 0x30) = pfVar6 + 0x10;
                    /* try { // try from 0016cccc to 0016ccd3 has its CatchHandler @ 0016ce1c */
    (**(code **)(local_c0[0] + 0x18))(local_c0);
  }
  *(undefined8 **)(pfVar6 + 0x40) = local_90;
  *(long **)(pfVar6 + 0x48) = local_88;
  local_90 = (undefined8 *)0x0;
  local_88 = (long *)0x0;
                    /* try { // try from 0016cce8 to 0016ccfb has its CatchHandler @ 0016ce24 */
  local_60 = pfVar6;
  ThreadPool::run((ThreadPool *)&DAT_001bfd88,local_80);
  if (local_60 == local_80) {
    lVar9 = 4;
    pfVar6 = local_80;
LAB_0016cd1c:
    (**(code **)(*(long *)pfVar6 + lVar9 * 8))();
  }
  else if (local_60 != (function *)0x0) {
    lVar9 = 5;
    pfVar6 = local_60;
    goto LAB_0016cd1c;
  }
  plVar2 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar9 = FUN_0015bb40(0xffffffffffffffff,local_88 + 1), lVar9 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (local_a0[0] == (Promise<void> *)local_c0) {
    lVar9 = 4;
  }
  else {
    if (local_a0[0] == (Promise<void> *)0x0) goto LAB_0016cd88;
    lVar9 = 5;
    pPVar7 = local_a0[0];
  }
  (**(code **)(*(long *)pPVar7 + lVar9 * 8))();
LAB_0016cd88:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0016cea4  FUN_0016cea4 =====

void FUN_0016cea4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[7];
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = (long *)param_1[4];
  if (plVar4 == param_1) {
    lVar2 = 4;
  }
  else {
    if (plVar4 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == lVar3) {
        return;
      }
      goto LAB_0016cf6c;
    }
    lVar2 = 5;
    param_1 = plVar4;
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x0016cf44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + lVar2 * 8))(param_1);
    return;
  }
LAB_0016cf6c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016cf70  FUN_0016cf70 =====

void FUN_0016cf70(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_0015bb40(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 0016cffc  FUN_0016cffc =====

void FUN_0016cffc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  lVar1 = tpidr_el0;
  plVar3 = param_1 + 2;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar5 = (long *)param_1[9];
  *param_1 = &PTR_FUN_001b70b8;
  if ((plVar5 != (long *)0x0) && (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar5 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = (long *)param_1[6];
  if (plVar5 == plVar3) {
    lVar2 = 4;
  }
  else {
    if (plVar5 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == lVar4) {
        return;
      }
      goto LAB_0016d0d0;
    }
    lVar2 = 5;
    plVar3 = plVar5;
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x0016d0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar2 * 8))();
    return;
  }
LAB_0016d0d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016d0d4  FUN_0016d0d4 =====

void FUN_0016d0d4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  lVar1 = tpidr_el0;
  plVar3 = param_1 + 2;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar5 = (long *)param_1[9];
  *param_1 = &PTR_FUN_001b70b8;
  if ((plVar5 != (long *)0x0) && (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar5 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = (long *)param_1[6];
  if (plVar5 == plVar3) {
    lVar2 = 4;
  }
  else {
    if (plVar5 == (long *)0x0) goto LAB_0016d164;
    lVar2 = 5;
    plVar3 = plVar5;
  }
  (**(code **)(*plVar3 + lVar2 * 8))();
LAB_0016d164:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016d190  FUN_0016d190 =====

undefined8 * FUN_0016d190(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x50);
  plVar3 = *(long **)(param_1 + 0x30);
  *puVar2 = &PTR_FUN_001b70b8;
  if (plVar3 != (long *)0x0) {
    if (plVar3 == (long *)(param_1 + 0x10)) {
      lVar5 = *plVar3;
      puVar2[6] = puVar2 + 2;
      (**(code **)(lVar5 + 0x18))();
      goto LAB_0016d208;
    }
                    /* try { // try from 0016d1ec to 0016d207 has its CatchHandler @ 0016d248 */
    plVar3 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  puVar2[6] = plVar3;
LAB_0016d208:
  lVar5 = *(long *)(param_1 + 0x48);
  puVar2[8] = *(undefined8 *)(param_1 + 0x40);
  puVar2[9] = lVar5;
  if (lVar5 != 0) {
    FUN_0015c230(1,lVar5 + 8);
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016d270  FUN_0016d270 =====

void FUN_0016d270(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  plVar3 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_001b70b8;
  if (plVar3 == (long *)0x0) {
    param_2[6] = 0;
  }
  else if (plVar3 == (long *)(param_1 + 0x10)) {
    param_2[6] = param_2 + 2;
    (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
  }
  else {
    uVar4 = (**(code **)(*plVar3 + 0x10))();
    param_2[6] = uVar4;
  }
  lVar1 = *(long *)(param_1 + 0x48);
  param_2[8] = *(undefined8 *)(param_1 + 0x40);
  param_2[9] = lVar1;
  if (lVar1 != 0) {
    FUN_0015c230(1,lVar1 + 8);
  }
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016d328  FUN_0016d328 =====

void FUN_0016d328(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  lVar1 = tpidr_el0;
  plVar3 = (long *)(param_1 + 0x10);
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar5 = *(long **)(param_1 + 0x48);
  if ((plVar5 != (long *)0x0) && (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar5 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = *(long **)(param_1 + 0x30);
  if (plVar5 == plVar3) {
    lVar2 = 4;
  }
  else {
    if (plVar5 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == lVar4) {
        return;
      }
      goto LAB_0016d3f0;
    }
    lVar2 = 5;
    plVar3 = plVar5;
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x0016d3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar2 * 8))();
    return;
  }
LAB_0016d3f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016d3f4  FUN_0016d3f4 =====

void FUN_0016d3f4(void *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  lVar1 = tpidr_el0;
  plVar3 = (long *)((long)param_1 + 0x10);
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar5 = *(long **)((long)param_1 + 0x48);
  if ((plVar5 != (long *)0x0) && (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar5 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = *(long **)((long)param_1 + 0x30);
  if (plVar5 == plVar3) {
    lVar2 = 4;
  }
  else {
    if (plVar5 == (long *)0x0) goto LAB_0016d478;
    lVar2 = 5;
    plVar3 = plVar5;
  }
  (**(code **)(*plVar3 + lVar2 * 8))();
LAB_0016d478:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016d4a4  FUN_0016d4a4 =====

void FUN_0016d4a4(long param_1)

{
  long lVar1;
  Promise<void> *this;
  exception_ptr aeStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(long **)(param_1 + 0x30) == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_0016d568;
    FUN_0016c8f4();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0016d4d4 with catch @ 0016d514
                        */
    __cxa_begin_catch();
    this = *(Promise<void> **)(param_1 + 0x40);
    std::current_exception();
                    /* try { // try from 0016d524 to 0016d52f has its CatchHandler @ 0016d540 */
    margelo::nitro::Promise<void>::reject(this,aeStack_30);
    std::exception_ptr::~exception_ptr(aeStack_30);
    __cxa_end_catch();
  }
  else {
                    /* try { // try from 0016d4d4 to 0016d513 has its CatchHandler @ 0016d514 */
    (**(code **)(**(long **)(param_1 + 0x30) + 0x30))();
    margelo::nitro::Promise<void>::resolve(*(Promise<void> **)(param_1 + 0x40));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_0016d568:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016d570  FUN_0016d570 =====

void FUN_0016d570(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x10;
  if (*(char **)(param_2 + 8) !=
      "ZN7margelo5nitro7PromiseIvE5asyncEONSt6__ndk18functionIFvvEEEE3$_0") {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0016d5c0  FUN_0016d5c0 =====

pointer_____offset_0x10___ * FUN_0016d5c0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_001b7118;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016d600  margelo::nitro::Promise<void>::resolve =====

/* margelo::nitro::Promise<void>::resolve() */

void __thiscall margelo::nitro::Promise<void>::resolve(Promise<void> *this)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  std::__ndk1::mutex::lock();
  plVar4 = *(long **)(this + 0x38);
  plVar1 = *(long **)(this + 0x40);
  this[0x28] = (Promise<void>)0x1;
  if (plVar4 != plVar1) {
    do {
      if ((long *)plVar4[4] == (long *)0x0) {
                    /* try { // try from 0016d730 to 0016d733 has its CatchHandler @ 0016d734 */
                    /* catch() { ... } // from try @ 0016d730 with catch @ 0016d734 */
                    /* catch() { ... } // from try @ 0016d64c with catch @ 0016d738 */
        if ((*(long *)(lVar2 + 0x28) == lVar6) &&
           (uVar5 = FUN_0016c8f4(), *(long *)(lVar2 + 0x28) == lVar6)) {
          std::__ndk1::mutex::unlock();
          FUN_00157e74(uVar5);
        }
        goto LAB_0016d75c;
      }
                    /* try { // try from 0016d64c to 0016d64f has its CatchHandler @ 0016d738 */
      (**(code **)(*(long *)plVar4[4] + 0x30))();
      plVar4 = plVar4 + 6;
    } while (plVar4 != plVar1);
    plVar1 = *(long **)(this + 0x38);
    plVar8 = *(long **)(this + 0x40);
    plVar4 = plVar8;
joined_r0x0016d664:
    if (plVar8 != plVar1) {
      plVar3 = (long *)plVar8[-2];
      plVar8 = plVar8 + -6;
      plVar4 = plVar1;
      if (plVar8 != plVar3) goto code_r0x0016d698;
      lVar7 = 4;
      plVar3 = plVar8;
      goto LAB_0016d674;
    }
  }
  plVar1 = *(long **)(this + 0x50);
  plVar8 = *(long **)(this + 0x58);
  *(long **)(this + 0x40) = plVar4;
joined_r0x0016d6b4:
  if (plVar8 == plVar1) {
    *(long **)(this + 0x58) = plVar1;
    if (*(long *)(lVar2 + 0x28) == lVar6) {
      std::__ndk1::mutex::unlock();
      return;
    }
LAB_0016d75c:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  plVar4 = (long *)plVar8[-2];
  plVar8 = plVar8 + -6;
  if (plVar8 != plVar4) goto code_r0x0016d714;
  lVar7 = 4;
  plVar4 = plVar8;
  goto LAB_0016d6ec;
code_r0x0016d698:
  if (plVar3 != (long *)0x0) {
    lVar7 = 5;
LAB_0016d674:
    (**(code **)(*plVar3 + lVar7 * 8))();
  }
  goto joined_r0x0016d664;
code_r0x0016d714:
  if (plVar4 != (long *)0x0) {
    lVar7 = 5;
LAB_0016d6ec:
    (**(code **)(*plVar4 + lVar7 * 8))();
  }
  goto joined_r0x0016d6b4;
}


// ===== 0016d760  margelo::nitro::Promise<void>::awaitFuture =====

/* margelo::nitro::Promise<void>::awaitFuture(std::__ndk1::future<void>&&) */

void __thiscall margelo::nitro::Promise<void>::awaitFuture(Promise<void> *this,future *param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **local_70;
  undefined8 *puStack_68;
  undefined8 *local_60;
  long *local_50;
  long local_38;
  
  pppuVar2 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_60 = (undefined8 *)operator_new(0x20);
  uVar4 = *(undefined8 *)this;
  *local_60 = &PTR_FUN_001b7138;
  puStack_68 = local_60 + 3;
  *puStack_68 = uVar4;
  *(undefined8 *)this = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_70 = &PTR_FUN_001b7188;
  local_50 = (long *)&local_70;
                    /* try { // try from 0016d7c8 to 0016d7d3 has its CatchHandler @ 0016d824 */
  async((Promise<void> *)&local_70,(function *)param_1);
  if ((undefined ***)local_50 == &local_70) {
    lVar3 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0016d800;
    lVar3 = 5;
    pppuVar2 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar2 + lVar3 * 8))();
LAB_0016d800:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016d884  FUN_0016d884 =====

void FUN_0016d884(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_0015bb40(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 0016d910  FUN_0016d910 =====

void FUN_0016d910(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_0015bb40(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 0016d99c  FUN_0016d99c =====

void FUN_0016d99c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_001b7188;
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
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


// ===== 0016da34  FUN_0016da34 =====

void FUN_0016da34(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_001b7188;
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
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


// ===== 0016dac0  FUN_0016dac0 =====

void FUN_0016dac0(long param_1)

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
  *puVar4 = &PTR_FUN_001b7188;
  puVar4[1] = uVar1;
  puVar4[2] = lVar2;
  if (lVar2 != 0) {
    FUN_0015c230(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


// ===== 0016db38  FUN_0016db38 =====

void FUN_0016db38(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_001b7188;
  param_2[1] = uVar1;
  param_2[2] = lVar2;
  if (lVar2 != 0) {
    FUN_0015c230(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016db9c  FUN_0016db9c =====

void FUN_0016db9c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x10);
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
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


// ===== 0016dc28  FUN_0016dc28 =====

void FUN_0016dc28(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)((long)param_1 + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
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


// ===== 0016dca8  FUN_0016dca8 =====

void FUN_0016dca8(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    std::__ndk1::future<void>::get();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(param_1 + 8));
}


// ===== 0016dce4  FUN_0016dce4 =====

void FUN_0016dce4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZN7margelo5nitro7PromiseIvE11awaitFutureEONSt6__ndk16futureIvEEE3$_0") {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0016dd34  FUN_0016dd34 =====

pointer_____offset_0x10___ * FUN_0016dd34(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_001b71e8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016dd74  FUN_0016dd74 =====

void FUN_0016dd74(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_001b7138;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016ddb8  FUN_0016ddb8 =====

void FUN_0016ddb8(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_001b7138;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016de10  FUN_0016de10 =====

void FUN_0016de10(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    std::__ndk1::future<void>::~future((future<void> *)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016de4c  FUN_0016de4c =====

void FUN_0016de4c(void *param_1)

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


// ===== 0016de84  margelo::nitro::Promise<void>::resolved =====

/* margelo::nitro::Promise<void>::resolved() */

void __thiscall margelo::nitro::Promise<void>::resolved(Promise<void> *this)

{
  long lVar1;
  Promise<void> *this_00;
  undefined8 *puVar2;
  undefined8 *in_x8;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  this_00 = (Promise<void> *)operator_new(0x68);
  *(undefined8 *)(this_00 + 0x60) = 0;
  *in_x8 = this_00;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
                    /* try { // try from 0016decc to 0016ded3 has its CatchHandler @ 0016df28 */
  puVar2 = (undefined8 *)operator_new(0x20);
  *puVar2 = &PTR____shared_weak_count_001b7068;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = this_00;
  in_x8[1] = puVar2;
                    /* try { // try from 0016deec to 0016def3 has its CatchHandler @ 0016df18 */
  resolve(this_00);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016df58  margelo::nitro::Promise<void>::rejected =====

/* margelo::nitro::Promise<void>::rejected(std::exception_ptr const&) */

void __thiscall margelo::nitro::Promise<void>::rejected(Promise<void> *this,exception_ptr *param_1)

{
  long lVar1;
  Promise<void> *this_00;
  undefined8 *puVar2;
  undefined8 *in_x8;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  this_00 = (Promise<void> *)operator_new(0x68);
  *(undefined8 *)(this_00 + 0x60) = 0;
  *in_x8 = this_00;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
                    /* try { // try from 0016dfa8 to 0016dfaf has its CatchHandler @ 0016e00c */
  puVar2 = (undefined8 *)operator_new(0x20);
  *puVar2 = &PTR____shared_weak_count_001b7068;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = this_00;
  in_x8[1] = puVar2;
                    /* try { // try from 0016dfc8 to 0016dfd3 has its CatchHandler @ 0016dffc */
  reject(this_00,(exception_ptr *)this);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016e03c  margelo::nitro::Promise<void>::didFinish =====

/* margelo::nitro::Promise<void>::didFinish() */

void __thiscall margelo::nitro::Promise<void>::didFinish(Promise<void> *this)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar3 = *(long **)(this + 0x38);
  plVar6 = *(long **)(this + 0x40);
LAB_0016e07c:
  if (plVar6 != plVar3) {
    plVar2 = (long *)plVar6[-2];
    plVar6 = plVar6 + -6;
    if (plVar6 != plVar2) goto code_r0x0016e094;
    lVar5 = 4;
    plVar2 = plVar6;
    goto LAB_0016e070;
  }
  plVar6 = *(long **)(this + 0x50);
  plVar2 = *(long **)(this + 0x58);
  *(long **)(this + 0x40) = plVar3;
joined_r0x0016e0ac:
  if (plVar2 == plVar6) {
    *(long **)(this + 0x58) = plVar6;
    if (*(long *)(lVar1 + 0x28) == lVar4) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  plVar3 = (long *)plVar2[-2];
  plVar2 = plVar2 + -6;
  if (plVar2 != plVar3) goto code_r0x0016e108;
  lVar5 = 4;
  plVar3 = plVar2;
  goto LAB_0016e0e0;
code_r0x0016e094:
  if (plVar2 != (long *)0x0) {
    lVar5 = 5;
LAB_0016e070:
    (**(code **)(*plVar2 + lVar5 * 8))();
  }
  goto LAB_0016e07c;
code_r0x0016e108:
  if (plVar3 != (long *)0x0) {
    lVar5 = 5;
LAB_0016e0e0:
    (**(code **)(*plVar3 + lVar5 * 8))();
  }
  goto joined_r0x0016e0ac;
}


// ===== 0016e118  margelo::nitro::Promise<void>::addOnResolvedListener =====

/* margelo::nitro::Promise<void>::addOnResolvedListener(std::__ndk1::function<void ()>&&) */

void __thiscall
margelo::nitro::Promise<void>::addOnResolvedListener(Promise<void> *this,function *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  long lVar6;
  function *pfVar7;
  long lVar8;
  function *pfVar9;
  long lVar10;
  void *pvVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  void *pvVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  std::__ndk1::mutex::lock();
  if (this[0x28] == (Promise<void>)0x0) {
    uVar14 = *(ulong *)(this + 0x40);
    if (uVar14 < *(ulong *)(this + 0x48)) {
      pfVar7 = param_1 + 0x20;
      pfVar9 = *(function **)pfVar7;
      if (pfVar9 == (function *)0x0) {
        pfVar7 = (function *)(uVar14 + 0x20);
LAB_0016e210:
        *(undefined8 *)pfVar7 = 0;
      }
      else {
        if (pfVar9 != param_1) {
          *(function **)(uVar14 + 0x20) = pfVar9;
          goto LAB_0016e210;
        }
        *(ulong *)(uVar14 + 0x20) = uVar14;
                    /* try { // try from 0016e25c to 0016e263 has its CatchHandler @ 0016e3e0 */
        (**(code **)(**(long **)pfVar7 + 0x18))(*(long **)pfVar7,uVar14);
      }
      lVar8 = uVar14 + 0x30;
    }
    else {
      uVar17 = *(ulong *)(this + 0x38);
      lVar8 = (long)(uVar14 - uVar17) >> 4;
      uVar18 = lVar8 * -0x5555555555555555 + 1;
      if (0x555555555555555 < uVar18) goto LAB_0016e3b4;
      lVar10 = (long)(*(ulong *)(this + 0x48) - uVar17) >> 4;
      uVar13 = lVar10 * 0x5555555555555556;
      if (uVar13 < uVar18 || uVar13 - uVar18 == 0) {
        uVar13 = uVar18;
      }
      if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar10 * -0x5555555555555555)) {
        uVar13 = 0x555555555555555;
      }
      if (uVar13 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        if (0x555555555555555 < uVar13) goto LAB_0016e3c8;
        pvVar4 = operator_new(uVar13 * 0x30);
      }
      pvVar15 = (void *)((long)pvVar4 + lVar8 * 0x10);
      pfVar7 = param_1 + 0x20;
      pfVar9 = *(function **)pfVar7;
      if (pfVar9 == (function *)0x0) {
        pfVar7 = (function *)((long)pvVar15 + 0x20);
LAB_0016e244:
        *(undefined8 *)pfVar7 = 0;
      }
      else {
        if (pfVar9 != param_1) {
          *(function **)((long)pvVar15 + 0x20) = pfVar9;
          goto LAB_0016e244;
        }
        lVar8 = *(long *)param_1;
        *(void **)((long)pvVar15 + 0x20) = pvVar15;
                    /* try { // try from 0016e278 to 0016e283 has its CatchHandler @ 0016e3dc */
        (**(code **)(lVar8 + 0x18))(param_1,pvVar15);
        uVar17 = *(ulong *)(this + 0x38);
        uVar14 = *(ulong *)(this + 0x40);
      }
      pvVar11 = pvVar15;
      if (uVar14 != uVar17) {
        lVar8 = 0;
        uVar18 = uVar14;
        do {
          lVar10 = uVar14 + lVar8;
          uVar1 = (long)pvVar15 + lVar8;
          lVar12 = *(long *)(lVar10 + -0x10);
          if (lVar12 == 0) {
LAB_0016e2a4:
            *(undefined8 *)(uVar1 - 0x10) = 0;
          }
          else {
            if (lVar10 + -0x30 != lVar12) {
              *(long *)(uVar1 - 0x10) = lVar12;
              uVar1 = uVar18;
              goto LAB_0016e2a4;
            }
            *(ulong *)(uVar1 - 0x10) = uVar1 - 0x30;
                    /* try { // try from 0016e2f8 to 0016e2fb has its CatchHandler @ 0016e3e4 */
            (**(code **)(**(long **)(lVar10 + -0x10) + 0x18))();
          }
          lVar8 = lVar8 + -0x30;
          uVar18 = uVar18 - 0x30;
        } while (uVar14 + lVar8 != uVar17);
        pvVar11 = (void *)((long)pvVar15 + lVar8);
      }
      plVar2 = *(long **)(this + 0x38);
      plVar16 = *(long **)(this + 0x40);
      lVar8 = (long)pvVar15 + 0x30;
      *(void **)(this + 0x38) = pvVar11;
      *(long *)(this + 0x40) = lVar8;
      *(void **)(this + 0x48) = (void *)((long)pvVar4 + uVar13 * 0x30);
joined_r0x0016e31c:
      if (plVar16 != plVar2) {
        plVar5 = (long *)plVar16[-2];
        plVar16 = plVar16 + -6;
        if (plVar16 != plVar5) goto code_r0x0016e394;
        lVar10 = 4;
        plVar5 = plVar16;
        goto LAB_0016e36c;
      }
      if (plVar2 != (long *)0x0) {
        operator_delete(plVar2);
      }
    }
    *(long *)(this + 0x40) = lVar8;
  }
  else {
    if (*(long **)(param_1 + 0x20) == (long *)0x0) {
      if (*(long *)(lVar3 + 0x28) != lVar6) goto LAB_0016e40c;
                    /* try { // try from 0016e3b0 to 0016e3db has its CatchHandler @ 0016e3e8 */
      FUN_0016c8f4();
LAB_0016e3b4:
      if (*(long *)(lVar3 + 0x28) != lVar6) goto LAB_0016e40c;
      FUN_0016e410();
LAB_0016e3c8:
      if (*(long *)(lVar3 + 0x28) == lVar6) {
        FUN_0015d614();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0016e278 with catch @ 0016e3dc
                        */
        FUN_0015c8c8();
      }
      goto LAB_0016e40c;
    }
                    /* try { // try from 0016e168 to 0016e203 has its CatchHandler @ 0016e3e8 */
    (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
  }
  if (*(long *)(lVar3 + 0x28) == lVar6) {
    std::__ndk1::mutex::unlock();
    return;
  }
LAB_0016e40c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0016e394:
  if (plVar5 != (long *)0x0) {
    lVar10 = 5;
LAB_0016e36c:
    (**(code **)(*plVar5 + lVar10 * 8))();
  }
  goto joined_r0x0016e31c;
}


// ===== 0016e410  FUN_0016e410 =====

void FUN_0016e410(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_0015d71c("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016e448  margelo::nitro::Promise<void>::addOnResolvedListener =====

/* margelo::nitro::Promise<void>::addOnResolvedListener(std::__ndk1::function<void ()> const&) */

void __thiscall
margelo::nitro::Promise<void>::addOnResolvedListener(Promise<void> *this,function *param_1)

{
  long lVar1;
  function *pfVar2;
  undefined8 uVar3;
  Promise<void> *pPVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  void *pvVar12;
  void *pvVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  void *local_80;
  void *local_78;
  void *local_70;
  void *pvStack_68;
  Promise<void> *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  std::__ndk1::mutex::lock();
  if (this[0x28] == (Promise<void>)0x0) {
    pPVar4 = this + 0x48;
    uVar11 = *(ulong *)(this + 0x40);
    if (uVar11 < *(ulong *)pPVar4) {
      pfVar2 = *(function **)(param_1 + 0x20);
      if (pfVar2 == (function *)0x0) {
LAB_0016e4cc:
        *(function **)(uVar11 + 0x20) = pfVar2;
      }
      else {
        if (pfVar2 != param_1) {
                    /* try { // try from 0016e4c8 to 0016e4cb has its CatchHandler @ 0016e738 */
          pfVar2 = (function *)(**(code **)(*(long *)pfVar2 + 0x10))();
          goto LAB_0016e4cc;
        }
        *(ulong *)(uVar11 + 0x20) = uVar11;
                    /* try { // try from 0016e5a0 to 0016e5a7 has its CatchHandler @ 0016e738 */
        (**(code **)(**(long **)(param_1 + 0x20) + 0x18))(*(long **)(param_1 + 0x20),uVar11);
      }
      pvVar12 = (void *)(uVar11 + 0x30);
      *(void **)(this + 0x40) = pvVar12;
    }
    else {
      lVar5 = (long)(uVar11 - *(long *)(this + 0x38)) >> 4;
      uVar11 = lVar5 * -0x5555555555555555 + 1;
      if (0x555555555555555 < uVar11) goto LAB_0016e700;
      lVar7 = (long)(*(ulong *)pPVar4 - *(long *)(this + 0x38)) >> 4;
      uVar9 = lVar7 * 0x5555555555555556;
      if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
        uVar9 = uVar11;
      }
      if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
        uVar9 = 0x555555555555555;
      }
      local_60 = pPVar4;
      if (uVar9 == 0) {
        local_80 = (void *)0x0;
      }
      else {
        if (0x555555555555555 < uVar9) goto LAB_0016e714;
                    /* try { // try from 0016e540 to 0016e543 has its CatchHandler @ 0016e748 */
        local_80 = operator_new(uVar9 * 0x30);
      }
      pvVar12 = (void *)((long)local_80 + lVar5 * 0x10);
      pvStack_68 = (void *)((long)local_80 + uVar9 * 0x30);
      pfVar2 = *(function **)(param_1 + 0x20);
      pvVar13 = pvVar12;
      local_78 = pvVar12;
      if (pfVar2 == (function *)0x0) {
        *(undefined8 *)((long)pvVar12 + 0x20) = 0;
      }
      else {
        local_70 = pvVar12;
        if (pfVar2 == param_1) {
          lVar5 = *(long *)param_1;
          *(void **)((long)pvVar12 + 0x20) = pvVar12;
                    /* try { // try from 0016e5c0 to 0016e5cb has its CatchHandler @ 0016e728 */
          (**(code **)(lVar5 + 0x18))(param_1,pvVar12);
          pvVar12 = local_70;
          pvVar13 = local_78;
        }
        else {
                    /* try { // try from 0016e578 to 0016e57b has its CatchHandler @ 0016e728 */
          uVar3 = (**(code **)(*(long *)pfVar2 + 0x10))();
          *(undefined8 *)((long)pvVar12 + 0x20) = uVar3;
        }
      }
      plVar15 = *(long **)(this + 0x38);
      plVar10 = *(long **)(this + 0x40);
      pvVar12 = (void *)((long)pvVar12 + 0x30);
      local_70 = pvVar12;
      if (plVar10 == plVar15) {
        *(void **)(this + 0x38) = pvVar13;
        *(void **)(this + 0x40) = pvVar12;
        *(void **)(this + 0x48) = pvStack_68;
      }
      else {
        plVar16 = (long *)((long)pvVar13 + -0x10);
        do {
          plVar14 = plVar16 + -4;
          plVar6 = (long *)plVar10[-2];
          plVar17 = plVar10 + -6;
          plVar8 = plVar16;
          if (plVar6 == (long *)0x0) {
LAB_0016e5f4:
            *plVar8 = 0;
          }
          else {
            if (plVar17 != plVar6) {
              *plVar16 = (long)plVar6;
              plVar8 = plVar10 + -2;
              goto LAB_0016e5f4;
            }
            *plVar16 = (long)plVar14;
                    /* try { // try from 0016e638 to 0016e63f has its CatchHandler @ 0016e744 */
            (**(code **)(*(long *)plVar10[-2] + 0x18))((long *)plVar10[-2],plVar14);
          }
          pvVar12 = local_70;
          plVar16 = plVar16 + -6;
          plVar10 = plVar17;
        } while (plVar17 != plVar15);
        plVar10 = *(long **)(this + 0x38);
        plVar15 = *(long **)(this + 0x40);
        *(long **)(this + 0x38) = plVar14;
        *(void **)(this + 0x48) = pvStack_68;
        *(void **)(this + 0x40) = local_70;
joined_r0x0016e65c:
        if (plVar15 != plVar10) {
          plVar16 = (long *)plVar15[-2];
          plVar15 = plVar15 + -6;
          if (plVar15 != plVar16) goto code_r0x0016e694;
          lVar5 = 4;
          plVar16 = plVar15;
          goto LAB_0016e66c;
        }
      }
      if (plVar10 != (long *)0x0) {
        operator_delete(plVar10);
      }
    }
    *(void **)(this + 0x40) = pvVar12;
  }
  else {
    if (*(long **)(param_1 + 0x20) == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) != local_58) goto LAB_0016e76c;
                    /* try { // try from 0016e6fc to 0016e727 has its CatchHandler @ 0016e748 */
      FUN_0016c8f4();
LAB_0016e700:
      if (*(long *)(lVar1 + 0x28) != local_58) goto LAB_0016e76c;
      FUN_0016e410();
LAB_0016e714:
      if (*(long *)(lVar1 + 0x28) == local_58) {
        uVar3 = FUN_0015d614();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0016e578 with catch @ 0016e728
                       catch(type#1 @ 00000000) { ... } // from try @ 0016e5c0 with catch @ 0016e728
                        */
        FUN_0016e770(&local_80);
        if (*(long *)(lVar1 + 0x28) == local_58) {
          std::__ndk1::mutex::unlock();
          FUN_00157e74(uVar3);
        }
      }
      goto LAB_0016e76c;
    }
                    /* try { // try from 0016e494 to 0016e497 has its CatchHandler @ 0016e748 */
    (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    std::__ndk1::mutex::unlock();
    return;
  }
LAB_0016e76c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0016e694:
  if (plVar16 != (long *)0x0) {
    lVar5 = 5;
LAB_0016e66c:
    (**(code **)(*plVar16 + lVar5 * 8))();
  }
  goto joined_r0x0016e65c;
}


// ===== 0016e770  FUN_0016e770 =====

void FUN_0016e770(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  plVar1 = (long *)param_1[1];
  plVar3 = (long *)param_1[2];
LAB_0016e7b0:
  if (plVar3 == plVar1) {
    if ((void *)*param_1 == (void *)0x0) {
      if (*(long *)(lVar2 + 0x28) == lVar4) {
        return;
      }
    }
    else if (*(long *)(lVar2 + 0x28) == lVar4) {
      operator_delete((void *)*param_1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  plVar5 = (long *)plVar3[-2];
  plVar3 = plVar3 + -6;
  param_1[2] = plVar3;
  if (plVar5 != plVar3) goto code_r0x0016e7cc;
  lVar6 = 4;
  goto LAB_0016e7a0;
code_r0x0016e7cc:
  if (plVar5 != (long *)0x0) {
    lVar6 = 5;
    plVar3 = plVar5;
LAB_0016e7a0:
    (**(code **)(*plVar3 + lVar6 * 8))();
    plVar3 = (long *)param_1[2];
  }
  goto LAB_0016e7b0;
}


// ===== 0016e830  margelo::nitro::Promise<void>::addOnRejectedListener =====

/* margelo::nitro::Promise<void>::addOnRejectedListener(std::__ndk1::function<void
   (std::exception_ptr const&)>&&) */

void __thiscall
margelo::nitro::Promise<void>::addOnRejectedListener(Promise<void> *this,function *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  long lVar6;
  function *pfVar7;
  long lVar8;
  function *pfVar9;
  long lVar10;
  void *pvVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  void *pvVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  std::__ndk1::mutex::lock();
  if (*(long *)(this + 0x30) == 0) {
    uVar14 = *(ulong *)(this + 0x58);
    if (uVar14 < *(ulong *)(this + 0x60)) {
      pfVar7 = param_1 + 0x20;
      pfVar9 = *(function **)pfVar7;
      if (pfVar9 == (function *)0x0) {
        pfVar7 = (function *)(uVar14 + 0x20);
LAB_0016e92c:
        *(undefined8 *)pfVar7 = 0;
      }
      else {
        if (pfVar9 != param_1) {
          *(function **)(uVar14 + 0x20) = pfVar9;
          goto LAB_0016e92c;
        }
        *(ulong *)(uVar14 + 0x20) = uVar14;
                    /* try { // try from 0016e978 to 0016e97f has its CatchHandler @ 0016eafc */
        (**(code **)(**(long **)pfVar7 + 0x18))(*(long **)pfVar7,uVar14);
      }
      lVar8 = uVar14 + 0x30;
    }
    else {
      uVar17 = *(ulong *)(this + 0x50);
      lVar8 = (long)(uVar14 - uVar17) >> 4;
      uVar18 = lVar8 * -0x5555555555555555 + 1;
      if (0x555555555555555 < uVar18) goto LAB_0016ead0;
      lVar10 = (long)(*(ulong *)(this + 0x60) - uVar17) >> 4;
      uVar13 = lVar10 * 0x5555555555555556;
      if (uVar13 < uVar18 || uVar13 - uVar18 == 0) {
        uVar13 = uVar18;
      }
      if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar10 * -0x5555555555555555)) {
        uVar13 = 0x555555555555555;
      }
      if (uVar13 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        if (0x555555555555555 < uVar13) goto LAB_0016eae4;
        pvVar4 = operator_new(uVar13 * 0x30);
      }
      pvVar15 = (void *)((long)pvVar4 + lVar8 * 0x10);
      pfVar7 = param_1 + 0x20;
      pfVar9 = *(function **)pfVar7;
      if (pfVar9 == (function *)0x0) {
        pfVar7 = (function *)((long)pvVar15 + 0x20);
LAB_0016e960:
        *(undefined8 *)pfVar7 = 0;
      }
      else {
        if (pfVar9 != param_1) {
          *(function **)((long)pvVar15 + 0x20) = pfVar9;
          goto LAB_0016e960;
        }
        lVar8 = *(long *)param_1;
        *(void **)((long)pvVar15 + 0x20) = pvVar15;
                    /* try { // try from 0016e994 to 0016e99f has its CatchHandler @ 0016eaf8 */
        (**(code **)(lVar8 + 0x18))(param_1,pvVar15);
        uVar17 = *(ulong *)(this + 0x50);
        uVar14 = *(ulong *)(this + 0x58);
      }
      pvVar11 = pvVar15;
      if (uVar14 != uVar17) {
        lVar8 = 0;
        uVar18 = uVar14;
        do {
          lVar10 = uVar14 + lVar8;
          uVar1 = (long)pvVar15 + lVar8;
          lVar12 = *(long *)(lVar10 + -0x10);
          if (lVar12 == 0) {
LAB_0016e9c0:
            *(undefined8 *)(uVar1 - 0x10) = 0;
          }
          else {
            if (lVar10 + -0x30 != lVar12) {
              *(long *)(uVar1 - 0x10) = lVar12;
              uVar1 = uVar18;
              goto LAB_0016e9c0;
            }
            *(ulong *)(uVar1 - 0x10) = uVar1 - 0x30;
                    /* try { // try from 0016ea14 to 0016ea17 has its CatchHandler @ 0016eb00 */
            (**(code **)(**(long **)(lVar10 + -0x10) + 0x18))();
          }
          lVar8 = lVar8 + -0x30;
          uVar18 = uVar18 - 0x30;
        } while (uVar14 + lVar8 != uVar17);
        pvVar11 = (void *)((long)pvVar15 + lVar8);
      }
      plVar2 = *(long **)(this + 0x50);
      plVar16 = *(long **)(this + 0x58);
      lVar8 = (long)pvVar15 + 0x30;
      *(void **)(this + 0x50) = pvVar11;
      *(long *)(this + 0x58) = lVar8;
      *(void **)(this + 0x60) = (void *)((long)pvVar4 + uVar13 * 0x30);
joined_r0x0016ea38:
      if (plVar16 != plVar2) {
        plVar5 = (long *)plVar16[-2];
        plVar16 = plVar16 + -6;
        if (plVar16 != plVar5) goto code_r0x0016eab0;
        lVar10 = 4;
        plVar5 = plVar16;
        goto LAB_0016ea88;
      }
      if (plVar2 != (long *)0x0) {
        operator_delete(plVar2);
      }
    }
    *(long *)(this + 0x58) = lVar8;
  }
  else {
    if (*(long **)(param_1 + 0x20) == (long *)0x0) {
      if (*(long *)(lVar3 + 0x28) != lVar6) goto LAB_0016eb28;
                    /* try { // try from 0016eacc to 0016eaf7 has its CatchHandler @ 0016eb04 */
      FUN_0016c8f4();
LAB_0016ead0:
      if (*(long *)(lVar3 + 0x28) != lVar6) goto LAB_0016eb28;
      FUN_0016eb2c();
LAB_0016eae4:
      if (*(long *)(lVar3 + 0x28) == lVar6) {
        FUN_0015d614();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0016e994 with catch @ 0016eaf8
                        */
        FUN_0015c8c8();
      }
      goto LAB_0016eb28;
    }
                    /* try { // try from 0016e884 to 0016e91f has its CatchHandler @ 0016eb04 */
    (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
  }
  if (*(long *)(lVar3 + 0x28) == lVar6) {
    std::__ndk1::mutex::unlock();
    return;
  }
LAB_0016eb28:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0016eab0:
  if (plVar5 != (long *)0x0) {
    lVar10 = 5;
LAB_0016ea88:
    (**(code **)(*plVar5 + lVar10 * 8))();
  }
  goto joined_r0x0016ea38;
}


// ===== 0016eb2c  FUN_0016eb2c =====

void FUN_0016eb2c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_0015d71c("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016eb64  margelo::nitro::Promise<void>::addOnRejectedListener =====

/* margelo::nitro::Promise<void>::addOnRejectedListener(std::__ndk1::function<void
   (std::exception_ptr const&)> const&) */

void __thiscall
margelo::nitro::Promise<void>::addOnRejectedListener(Promise<void> *this,function *param_1)

{
  long lVar1;
  function *pfVar2;
  undefined8 uVar3;
  Promise<void> *pPVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  void *pvVar12;
  void *pvVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  void *local_80;
  void *local_78;
  void *local_70;
  void *pvStack_68;
  Promise<void> *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  std::__ndk1::mutex::lock();
  if (*(long *)(this + 0x30) == 0) {
    pPVar4 = this + 0x60;
    uVar11 = *(ulong *)(this + 0x58);
    if (uVar11 < *(ulong *)pPVar4) {
      pfVar2 = *(function **)(param_1 + 0x20);
      if (pfVar2 == (function *)0x0) {
LAB_0016ebec:
        *(function **)(uVar11 + 0x20) = pfVar2;
      }
      else {
        if (pfVar2 != param_1) {
                    /* try { // try from 0016ebe8 to 0016ebeb has its CatchHandler @ 0016ee58 */
          pfVar2 = (function *)(**(code **)(*(long *)pfVar2 + 0x10))();
          goto LAB_0016ebec;
        }
        *(ulong *)(uVar11 + 0x20) = uVar11;
                    /* try { // try from 0016ecc0 to 0016ecc7 has its CatchHandler @ 0016ee58 */
        (**(code **)(**(long **)(param_1 + 0x20) + 0x18))(*(long **)(param_1 + 0x20),uVar11);
      }
      pvVar12 = (void *)(uVar11 + 0x30);
      *(void **)(this + 0x58) = pvVar12;
    }
    else {
      lVar5 = (long)(uVar11 - *(long *)(this + 0x50)) >> 4;
      uVar11 = lVar5 * -0x5555555555555555 + 1;
      if (0x555555555555555 < uVar11) goto LAB_0016ee20;
      lVar7 = (long)(*(ulong *)pPVar4 - *(long *)(this + 0x50)) >> 4;
      uVar9 = lVar7 * 0x5555555555555556;
      if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
        uVar9 = uVar11;
      }
      if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
        uVar9 = 0x555555555555555;
      }
      local_60 = pPVar4;
      if (uVar9 == 0) {
        local_80 = (void *)0x0;
      }
      else {
        if (0x555555555555555 < uVar9) goto LAB_0016ee34;
                    /* try { // try from 0016ec60 to 0016ec63 has its CatchHandler @ 0016ee68 */
        local_80 = operator_new(uVar9 * 0x30);
      }
      pvVar12 = (void *)((long)local_80 + lVar5 * 0x10);
      pvStack_68 = (void *)((long)local_80 + uVar9 * 0x30);
      pfVar2 = *(function **)(param_1 + 0x20);
      pvVar13 = pvVar12;
      local_78 = pvVar12;
      if (pfVar2 == (function *)0x0) {
        *(undefined8 *)((long)pvVar12 + 0x20) = 0;
      }
      else {
        local_70 = pvVar12;
        if (pfVar2 == param_1) {
          lVar5 = *(long *)param_1;
          *(void **)((long)pvVar12 + 0x20) = pvVar12;
                    /* try { // try from 0016ece0 to 0016eceb has its CatchHandler @ 0016ee48 */
          (**(code **)(lVar5 + 0x18))(param_1,pvVar12);
          pvVar12 = local_70;
          pvVar13 = local_78;
        }
        else {
                    /* try { // try from 0016ec98 to 0016ec9b has its CatchHandler @ 0016ee48 */
          uVar3 = (**(code **)(*(long *)pfVar2 + 0x10))();
          *(undefined8 *)((long)pvVar12 + 0x20) = uVar3;
        }
      }
      plVar15 = *(long **)(this + 0x50);
      plVar10 = *(long **)(this + 0x58);
      pvVar12 = (void *)((long)pvVar12 + 0x30);
      local_70 = pvVar12;
      if (plVar10 == plVar15) {
        *(void **)(this + 0x50) = pvVar13;
        *(void **)(this + 0x58) = pvVar12;
        *(void **)(this + 0x60) = pvStack_68;
      }
      else {
        plVar16 = (long *)((long)pvVar13 + -0x10);
        do {
          plVar14 = plVar16 + -4;
          plVar6 = (long *)plVar10[-2];
          plVar17 = plVar10 + -6;
          plVar8 = plVar16;
          if (plVar6 == (long *)0x0) {
LAB_0016ed14:
            *plVar8 = 0;
          }
          else {
            if (plVar17 != plVar6) {
              *plVar16 = (long)plVar6;
              plVar8 = plVar10 + -2;
              goto LAB_0016ed14;
            }
            *plVar16 = (long)plVar14;
                    /* try { // try from 0016ed58 to 0016ed5f has its CatchHandler @ 0016ee64 */
            (**(code **)(*(long *)plVar10[-2] + 0x18))((long *)plVar10[-2],plVar14);
          }
          pvVar12 = local_70;
          plVar16 = plVar16 + -6;
          plVar10 = plVar17;
        } while (plVar17 != plVar15);
        plVar10 = *(long **)(this + 0x50);
        plVar15 = *(long **)(this + 0x58);
        *(long **)(this + 0x50) = plVar14;
        *(void **)(this + 0x60) = pvStack_68;
        *(void **)(this + 0x58) = local_70;
joined_r0x0016ed7c:
        if (plVar15 != plVar10) {
          plVar16 = (long *)plVar15[-2];
          plVar15 = plVar15 + -6;
          if (plVar15 != plVar16) goto code_r0x0016edb4;
          lVar5 = 4;
          plVar16 = plVar15;
          goto LAB_0016ed8c;
        }
      }
      if (plVar10 != (long *)0x0) {
        operator_delete(plVar10);
      }
    }
    *(void **)(this + 0x58) = pvVar12;
  }
  else {
    if (*(long **)(param_1 + 0x20) == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) != local_58) goto LAB_0016ee8c;
                    /* try { // try from 0016ee1c to 0016ee47 has its CatchHandler @ 0016ee68 */
      FUN_0016c8f4();
LAB_0016ee20:
      if (*(long *)(lVar1 + 0x28) != local_58) goto LAB_0016ee8c;
      FUN_0016eb2c();
LAB_0016ee34:
      if (*(long *)(lVar1 + 0x28) == local_58) {
        uVar3 = FUN_0015d614();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0016ec98 with catch @ 0016ee48
                       catch(type#1 @ 00000000) { ... } // from try @ 0016ece0 with catch @ 0016ee48
                        */
        FUN_0016ee90(&local_80);
        if (*(long *)(lVar1 + 0x28) == local_58) {
          std::__ndk1::mutex::unlock();
          FUN_00157e74(uVar3);
        }
      }
      goto LAB_0016ee8c;
    }
                    /* try { // try from 0016ebb4 to 0016ebb7 has its CatchHandler @ 0016ee68 */
    (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    std::__ndk1::mutex::unlock();
    return;
  }
LAB_0016ee8c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0016edb4:
  if (plVar16 != (long *)0x0) {
    lVar5 = 5;
LAB_0016ed8c:
    (**(code **)(*plVar16 + lVar5 * 8))();
  }
  goto joined_r0x0016ed7c;
}


// ===== 0016ee90  FUN_0016ee90 =====

void FUN_0016ee90(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  plVar1 = (long *)param_1[1];
  plVar3 = (long *)param_1[2];
LAB_0016eed0:
  if (plVar3 == plVar1) {
    if ((void *)*param_1 == (void *)0x0) {
      if (*(long *)(lVar2 + 0x28) == lVar4) {
        return;
      }
    }
    else if (*(long *)(lVar2 + 0x28) == lVar4) {
      operator_delete((void *)*param_1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  plVar5 = (long *)plVar3[-2];
  plVar3 = plVar3 + -6;
  param_1[2] = plVar3;
  if (plVar5 != plVar3) goto code_r0x0016eeec;
  lVar6 = 4;
  goto LAB_0016eec0;
code_r0x0016eeec:
  if (plVar5 != (long *)0x0) {
    lVar6 = 5;
    plVar3 = plVar5;
LAB_0016eec0:
    (**(code **)(*plVar3 + lVar6 * 8))();
    plVar3 = (long *)param_1[2];
  }
  goto LAB_0016eed0;
}


// ===== 0016ef50  margelo::nitro::Promise<void>::await =====

/* margelo::nitro::Promise<void>::await() */

void __thiscall margelo::nitro::Promise<void>::await(Promise<void> *this)

{
  long lVar1;
  long *plVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  long lVar5;
  undefined **local_90;
  long *plStack_88;
  long *local_80;
  long *local_70;
  long local_58;
  
  pppuVar3 = &local_90;
  pppuVar4 = &local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)operator_new(0x20);
  plVar2[2] = 0;
  plVar2[1] = 0;
  *plVar2 = (long)&PTR_FUN_001b7208;
                    /* try { // try from 0016efa8 to 0016efaf has its CatchHandler @ 0016f158 */
  std::__ndk1::promise<void>::promise();
  FUN_0015c230(1,plVar2 + 1);
  local_90 = &PTR_FUN_001b7258;
  plStack_88 = plVar2 + 3;
  local_80 = plVar2;
  local_70 = (long *)&local_90;
                    /* try { // try from 0016efd4 to 0016efdf has its CatchHandler @ 0016f110 */
  addOnResolvedListener(this,(function *)&local_90);
  if ((undefined ***)local_70 == &local_90) {
    lVar5 = 4;
LAB_0016f000:
    (**(code **)((long)*pppuVar3 + lVar5 * 8))();
  }
  else if (local_70 != (long *)0x0) {
    lVar5 = 5;
    pppuVar3 = (undefined ***)local_70;
    goto LAB_0016f000;
  }
  FUN_0015c230(1,plVar2 + 1);
  local_90 = &PTR_FUN_001b72d8;
  plStack_88 = plVar2 + 3;
  local_80 = plVar2;
  local_70 = (long *)&local_90;
                    /* try { // try from 0016f030 to 0016f03b has its CatchHandler @ 0016f0d0 */
  addOnRejectedListener(this,(function *)&local_90);
  if ((undefined ***)local_70 == &local_90) {
    lVar5 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_0016f068;
    lVar5 = 5;
    pppuVar4 = (undefined ***)local_70;
  }
  (**(code **)((long)*pppuVar4 + lVar5 * 8))();
LAB_0016f068:
                    /* try { // try from 0016f068 to 0016f073 has its CatchHandler @ 0016f0c8 */
  std::__ndk1::promise<void>::get_future();
  lVar5 = FUN_0015bb40(0xffffffffffffffff,plVar2 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016f188  FUN_0016f188 =====

void FUN_0016f188(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_0015bb40(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 0016f214  FUN_0016f214 =====

void FUN_0016f214(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_0015bb40(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 0016f2a0  FUN_0016f2a0 =====

void FUN_0016f2a0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_0015bb40(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 0016f32c  FUN_0016f32c =====

void FUN_0016f32c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_001b72d8;
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
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


// ===== 0016f3c4  FUN_0016f3c4 =====

void FUN_0016f3c4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_001b72d8;
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
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


// ===== 0016f450  FUN_0016f450 =====

void FUN_0016f450(long param_1)

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
  *puVar4 = &PTR_FUN_001b72d8;
  puVar4[1] = uVar1;
  puVar4[2] = lVar2;
  if (lVar2 != 0) {
    FUN_0015c230(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


// ===== 0016f4c8  FUN_0016f4c8 =====

void FUN_0016f4c8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_001b72d8;
  param_2[1] = uVar1;
  param_2[2] = lVar2;
  if (lVar2 != 0) {
    FUN_0015c230(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016f52c  FUN_0016f52c =====

void FUN_0016f52c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x10);
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
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


// ===== 0016f5b8  FUN_0016f5b8 =====

void FUN_0016f5b8(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)((long)param_1 + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
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


// ===== 0016f638  FUN_0016f638 =====

void FUN_0016f638(long param_1,exception_ptr *param_2)

{
  long lVar1;
  undefined8 uVar2;
  exception_ptr aeStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 8);
  std::exception_ptr::exception_ptr(aeStack_30,param_2);
                    /* try { // try from 0016f660 to 0016f66b has its CatchHandler @ 0016f694 */
  std::__ndk1::promise<void>::set_exception(uVar2,aeStack_30);
  std::exception_ptr::~exception_ptr(aeStack_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016f6bc  FUN_0016f6bc =====

void FUN_0016f6bc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) != "ZN7margelo5nitro7PromiseIvE5awaitEvE3$_1") {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0016f70c  FUN_0016f70c =====

pointer_____offset_0x10___ * FUN_0016f70c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_001b7348;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016f74c  FUN_0016f74c =====

void FUN_0016f74c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_001b7258;
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
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


// ===== 0016f7e4  FUN_0016f7e4 =====

void FUN_0016f7e4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_001b7258;
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
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


// ===== 0016f870  FUN_0016f870 =====

void FUN_0016f870(long param_1)

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
  *puVar4 = &PTR_FUN_001b7258;
  puVar4[1] = uVar1;
  puVar4[2] = lVar2;
  if (lVar2 != 0) {
    FUN_0015c230(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


// ===== 0016f8e8  FUN_0016f8e8 =====

void FUN_0016f8e8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_001b7258;
  param_2[1] = uVar1;
  param_2[2] = lVar2;
  if (lVar2 != 0) {
    FUN_0015c230(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016f94c  FUN_0016f94c =====

void FUN_0016f94c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x10);
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
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


// ===== 0016f9d8  FUN_0016f9d8 =====

void FUN_0016f9d8(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)((long)param_1 + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
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


// ===== 0016fa58  FUN_0016fa58 =====

void FUN_0016fa58(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    std::__ndk1::promise<void>::set_value();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(param_1 + 8));
}


// ===== 0016fa94  FUN_0016fa94 =====

void FUN_0016fa94(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) != "ZN7margelo5nitro7PromiseIvE5awaitEvE3$_0") {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0016fae4  FUN_0016fae4 =====

pointer_____offset_0x10___ * FUN_0016fae4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_001b72b8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016fb24  FUN_0016fb24 =====

void FUN_0016fb24(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_001b7208;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016fb68  FUN_0016fb68 =====

void FUN_0016fb68(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_001b7208;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016fbc0  FUN_0016fbc0 =====

void FUN_0016fbc0(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    std::__ndk1::promise<void>::~promise((promise<void> *)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016fbfc  FUN_0016fbfc =====

void FUN_0016fbfc(void *param_1)

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


// ===== 0016fc34  margelo::nitro::Promise<void>::getError =====

/* margelo::nitro::Promise<void>::getError() const */

Promise<void> * __thiscall margelo::nitro::Promise<void>::getError(Promise<void> *this)

{
  long lVar1;
  runtime_error *this_00;
  long lVar2;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(this + 0x30);
  local_40 = 0;
  std::exception_ptr::~exception_ptr((exception_ptr *)&local_40);
  if (lVar2 == 0) {
    this_00 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0016fca0 to 0016fcab has its CatchHandler @ 0016fcd4 */
    std::runtime_error::runtime_error
              (this_00,"Cannot get error when Promise<void> is not yet rejected!");
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_38) {
    return this + 0x30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016fcfc  margelo::nitro::HybridNitroModulesProxy::loadHybridMethods =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::HybridNitroModulesProxy::loadHybridMethods() */

void __thiscall
margelo::nitro::HybridNitroModulesProxy::loadHybridMethods(HybridNitroModulesProxy *this)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long **pplVar8;
  long *plVar9;
  runtime_error *prVar10;
  long *plVar11;
  undefined *puVar12;
  long *plVar13;
  long *plVar14;
  ulong local_220;
  long *plStack_218;
  long *local_210;
  byte local_208;
  undefined4 local_207;
  undefined3 uStack_203;
  undefined1 local_200;
  void *local_1f8;
  byte local_1f0;
  char local_1ef [8];
  undefined2 local_1e7;
  void *local_1e0;
  byte local_1d8;
  char local_1d7 [6];
  char acStack_1d1 [2];
  char acStack_1cf [6];
  undefined1 local_1c9;
  void *local_1c8;
  ulong local_1c0;
  long *plStack_1b8;
  long *local_1b0;
  basic_string local_1a0;
  undefined7 uStack_19f;
  char cStack_198;
  undefined7 uStack_197;
  char cStack_190;
  undefined1 uStack_18f;
  undefined6 uStack_18e;
  basic_string local_188;
  undefined4 uStack_187;
  undefined3 uStack_183;
  long *plStack_180;
  long *local_178;
  ulong local_170;
  long *plStack_168;
  long *local_160;
  byte local_158;
  char local_157 [6];
  char acStack_151 [2];
  char acStack_14f [6];
  undefined1 local_149;
  void *local_148;
  basic_string local_140;
  char acStack_13f [7];
  char cStack_138;
  char acStack_137 [7];
  undefined1 local_130;
  undefined7 uStack_12f;
  basic_string local_128;
  undefined7 uStack_127;
  char cStack_120;
  undefined7 uStack_11f;
  char cStack_118;
  undefined2 uStack_117;
  undefined1 uStack_115;
  undefined4 uStack_114;
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
  long *plStack_a0;
  long *local_98;
  long *local_90;
  long *plStack_88;
  long **local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  HybridObject::loadHybridMethods((HybridObject *)this);
  plVar11 = *(long **)(this + 8);
  if (plVar11 == (long *)0x0) {
    local_90 = (long *)0x0;
    plStack_88 = (long *)0x0;
    local_110 = PTR_typeinfo_001ba010;
                    /* try { // try from 0016fd44 to 0016fd53 has its CatchHandler @ 001717f4 */
    FUN_0016a8d8(&local_e0,&local_110,&local_90);
    plVar14 = plStack_d8;
    plVar11 = local_e0;
    plVar13 = *(long **)(this + 0x10);
    local_e0 = (long *)0x0;
    plStack_d8 = (long *)0x0;
    *(long **)(this + 0x10) = plVar14;
    *(long **)(this + 8) = plVar11;
    if ((plVar13 != (long *)0x0) &&
       (lVar7 = FUN_0015bb40(0xffffffffffffffff,plVar13 + 1), lVar7 == 0)) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar11 = plStack_d8;
    if ((plStack_d8 != (long *)0x0) &&
       (lVar7 = FUN_0015bb40(0xffffffffffffffff,plStack_d8 + 1), lVar7 == 0)) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar11 = plStack_88;
    if ((plStack_88 != (long *)0x0) &&
       (lVar7 = FUN_0015bb40(0xffffffffffffffff,plStack_88 + 1), lVar7 == 0)) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar11 = *(long **)(this + 8);
  }
  puVar12 = *(undefined **)(*plVar11 + 8);
  plVar14 = plVar11;
  while (puVar12 != PTR_typeinfo_name_001ba008) {
    plVar14 = (long *)plVar14[1];
    if (plVar14 == (long *)0x0) {
      plStack_d8 = *(long **)(this + 0x10);
      local_e0 = plVar11;
      if (plStack_d8 != (long *)0x0) {
        FUN_0015c230(1,plStack_d8 + 1);
      }
      local_110 = PTR_typeinfo_001ba010;
                    /* try { // try from 0016fe60 to 0016fe6f has its CatchHandler @ 001717e8 */
      FUN_0016a8d8(&local_90,&local_110,&local_e0);
      plVar14 = plStack_88;
      plVar11 = local_90;
      plVar13 = *(long **)(this + 0x10);
      local_90 = (long *)0x0;
      plStack_88 = (long *)0x0;
      *(long **)(this + 0x10) = plVar14;
      *(long **)(this + 8) = plVar11;
      if ((plVar13 != (long *)0x0) &&
         (lVar7 = FUN_0015bb40(0xffffffffffffffff,plVar13 + 1), lVar7 == 0)) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar11 = plStack_88;
      if ((plStack_88 != (long *)0x0) &&
         (lVar7 = FUN_0015bb40(0xffffffffffffffff,plStack_88 + 1), lVar7 == 0)) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar11 = plStack_d8;
      if ((plStack_d8 != (long *)0x0) &&
         (lVar7 = FUN_0015bb40(0xffffffffffffffff,plStack_d8 + 1), lVar7 == 0)) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar14 = *(long **)(this + 8);
      lVar7 = plVar14[6];
      goto joined_r0x0016ff14;
    }
    puVar12 = *(undefined **)(*plVar14 + 8);
  }
  lVar7 = plVar14[6];
joined_r0x0016ff14:
  if (((lVar7 == 0) && (plVar14[0xb] == 0)) && (plVar14[0x10] == 0)) {
    local_128 = (basic_string)0x24;
    uStack_117 = 0x7463;
    uStack_11f = (undefined7)s_createHybridObject_001372f4._8_8_;
    cStack_118 = SUB81(s_createHybridObject_001372f4._8_8_,7);
    uStack_127 = (undefined7)s_createHybridObject_001372f4._0_8_;
    cStack_120 = SUB81(s_createHybridObject_001372f4._0_8_,7);
    uStack_115 = 0;
    lVar7 = FUN_001673e0(plVar14[8],plVar14[9],&local_128);
    if ((lVar7 != 0) || (lVar7 = FUN_001673e0(plVar14[0xd],plVar14[0xe],&local_128), lVar7 != 0)) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00170e38 to 00170e4b has its CatchHandler @ 00171d34 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_128);
                    /* try { // try from 00170e4c to 00170e5f has its CatchHandler @ 00171c7c */
      FUN_0015dcfc(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 00170e64 to 00170e9b has its CatchHandler @ 00171c58 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
      }
      goto LAB_00171d70;
    }
    plVar11 = plVar14 + 3;
    lVar7 = FUN_001673e0(*plVar11,plVar14[4],&local_128);
    if (lVar7 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00171164 to 00171177 has its CatchHandler @ 00171c54 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_128);
                    /* try { // try from 00171178 to 0017118b has its CatchHandler @ 00171ad0 */
      FUN_0015dcfc(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 00171190 to 001711c7 has its CatchHandler @ 00171aa4 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
      }
      goto LAB_00171d70;
    }
    plStack_108 = (long *)CONCAT71(uStack_11f,cStack_120);
    local_110 = (undefined *)CONCAT71(uStack_127,local_128);
    local_100 = (long *)CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT21(uStack_117,cStack_118)));
    plStack_f0 = (long *)0x0;
    local_f8 = (long *)PTR_createHybridObject_001b9fa0;
    local_e8 = 0;
                    /* try { // try from 0016ffa4 to 0016ffab has its CatchHandler @ 0017196c */
    local_70 = (long **)operator_new(0x38);
    *local_70 = (long *)&PTR_FUN_001b7400;
    if (((ulong)local_110 & 1) == 0) {
      local_70[2] = plStack_108;
      *(undefined **)(local_70 + 1) = local_110;
      local_70[3] = local_100;
    }
    else {
                    /* try { // try from 0016ffdc to 0016ffdf has its CatchHandler @ 001717d8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (local_70 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70[5] = plStack_f0;
    local_70[4] = local_f8;
    *(undefined4 *)(local_70 + 6) = local_e8;
    if (((byte)local_110._0_1_ & 1) == 0) {
LAB_0017001c:
      lVar7 = -0x40;
      local_c0 = local_70;
LAB_0017002c:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar7) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar7 = -0x90;
        goto LAB_0017002c;
      }
      if (local_70 != &local_90) goto LAB_0017001c;
      local_c0 = &local_e0;
                    /* try { // try from 00170d5c to 00170d67 has its CatchHandler @ 00171480 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_128 & 1) == 0) {
      plStack_a0 = (long *)CONCAT71(uStack_11f,cStack_120);
      local_a8 = CONCAT71(uStack_127,local_128);
      local_98 = (long *)CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT21(uStack_117,cStack_118)));
    }
    else {
                    /* try { // try from 00170060 to 00170067 has its CatchHandler @ 0017176c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,
                 (char *)CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT21(uStack_117,cStack_118))),
                 CONCAT71(uStack_11f,cStack_120));
    }
    if (local_70 == &local_90) {
      lVar7 = 4;
      pplVar8 = &local_90;
LAB_0017008c:
      (*(code *)(*pplVar8)[lVar7])();
    }
    else if (local_70 != (long **)0x0) {
      lVar7 = 5;
      pplVar8 = local_70;
      goto LAB_0017008c;
    }
                    /* try { // try from 00170098 to 001700ab has its CatchHandler @ 0017195c */
    FUN_00167578(plVar11,&local_128,&local_128,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar7 = 4;
      pplVar8 = &local_e0;
LAB_001700e0:
      (*(code *)(*pplVar8)[lVar7])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar7 = 5;
      pplVar8 = local_c0;
      goto LAB_001700e0;
    }
    if (((byte)local_128 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_114,
                                       CONCAT13(uStack_115,CONCAT21(uStack_117,cStack_118))));
    }
    local_140 = (basic_string)0x1e;
    local_130 = 0;
    acStack_13f[0] = s_hasHybridObject_00138765[0];
    acStack_13f[1] = s_hasHybridObject_00138765[1];
    acStack_13f[2] = s_hasHybridObject_00138765[2];
    acStack_13f[3] = s_hasHybridObject_00138765[3];
    acStack_13f[4] = s_hasHybridObject_00138765[4];
    acStack_13f[5] = s_hasHybridObject_00138765[5];
    acStack_13f[6] = s_hasHybridObject_00138765[6];
    cStack_138 = s_hasHybridObject_00138765[7];
    acStack_137[0] = s_hasHybridObject_00138765[8];
    acStack_137[1] = s_hasHybridObject_00138765[9];
    acStack_137[2] = s_hasHybridObject_00138765[10];
    acStack_137[3] = s_hasHybridObject_00138765[0xb];
    acStack_137[4] = s_hasHybridObject_00138765[0xc];
    acStack_137[5] = s_hasHybridObject_00138765[0xd];
    acStack_137[6] = s_hasHybridObject_00138765[0xe];
    lVar7 = FUN_001673e0(plVar14[8],plVar14[9],&local_140);
    if ((lVar7 != 0) || (lVar7 = FUN_001673e0(plVar14[0xd],plVar14[0xe],&local_140), lVar7 != 0)) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00170eac to 00170ebf has its CatchHandler @ 00171d18 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_140);
                    /* try { // try from 00170ec0 to 00170ed3 has its CatchHandler @ 00171c3c */
      FUN_0015dcfc(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 00170ed8 to 00170f0f has its CatchHandler @ 00171c18 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
      }
      goto LAB_00171d70;
    }
    lVar7 = FUN_001673e0(plVar14[3],plVar14[4],&local_140);
    if (lVar7 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001711d4 to 001711e7 has its CatchHandler @ 00171c14 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_140);
                    /* try { // try from 001711e8 to 001711fb has its CatchHandler @ 00171aa0 */
      FUN_0015dcfc(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 00171200 to 00171237 has its CatchHandler @ 00171a74 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
      }
      goto LAB_00171d70;
    }
    plStack_108 = (long *)CONCAT71(acStack_137,cStack_138);
    local_110 = (undefined *)CONCAT71(acStack_13f,local_140);
    local_100 = (long *)CONCAT71(uStack_12f,local_130);
    plStack_f0 = (long *)0x0;
    local_f8 = (long *)PTR_hasHybridObject_001b9fa8;
    local_e8 = 0;
                    /* try { // try from 00170174 to 0017017b has its CatchHandler @ 00171944 */
    pplVar8 = (long **)operator_new(0x38);
    *pplVar8 = (long *)&PTR_FUN_001b7490;
    if (((ulong)local_110 & 1) == 0) {
      pplVar8[2] = plStack_108;
      *(undefined **)(pplVar8 + 1) = local_110;
      pplVar8[3] = local_100;
    }
    else {
                    /* try { // try from 001701ac to 001701af has its CatchHandler @ 0017175c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar8 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar8;
    pplVar8[5] = plStack_f0;
    pplVar8[4] = local_f8;
    *(undefined4 *)(pplVar8 + 6) = local_e8;
    if (((byte)local_110._0_1_ & 1) == 0) {
LAB_001701ec:
      lVar7 = -0x40;
      local_c0 = local_70;
LAB_001701fc:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar7) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar7 = -0x90;
        goto LAB_001701fc;
      }
      if (local_70 != &local_90) goto LAB_001701ec;
      local_c0 = &local_e0;
                    /* try { // try from 00170d7c to 00170d87 has its CatchHandler @ 0017147c */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_140 & 1) == 0) {
      plStack_a0 = (long *)CONCAT71(acStack_137,cStack_138);
      local_a8 = CONCAT71(acStack_13f,local_140);
      local_98 = (long *)CONCAT71(uStack_12f,local_130);
    }
    else {
                    /* try { // try from 00170230 to 00170237 has its CatchHandler @ 001716f0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)CONCAT71(uStack_12f,local_130),CONCAT71(acStack_137,cStack_138));
    }
    if (local_70 == &local_90) {
      lVar7 = 4;
      pplVar8 = &local_90;
LAB_0017025c:
      (*(code *)(*pplVar8)[lVar7])();
    }
    else if (local_70 != (long **)0x0) {
      lVar7 = 5;
      pplVar8 = local_70;
      goto LAB_0017025c;
    }
                    /* try { // try from 00170268 to 0017027b has its CatchHandler @ 00171934 */
    FUN_00167578(plVar11,&local_140,&local_140,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar7 = 4;
      pplVar8 = &local_e0;
LAB_001702b0:
      (*(code *)(*pplVar8)[lVar7])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar7 = 5;
      pplVar8 = local_c0;
      goto LAB_001702b0;
    }
    if (((byte)local_140 & 1) != 0) {
      operator_delete((void *)CONCAT71(uStack_12f,local_130));
    }
    local_158 = 0x1c;
    local_149 = 0;
    local_157[0] = s_isHybridObject_0013756e[0];
    local_157[1] = s_isHybridObject_0013756e[1];
    local_157[2] = s_isHybridObject_0013756e[2];
    local_157[3] = s_isHybridObject_0013756e[3];
    local_157[4] = s_isHybridObject_0013756e[4];
    local_157[5] = s_isHybridObject_0013756e[5];
    acStack_151[0] = s_isHybridObject_0013756e[6];
    acStack_151[1] = s_isHybridObject_0013756e[7];
    acStack_14f[0] = s_isHybridObject_0013756e[8];
    acStack_14f[1] = s_isHybridObject_0013756e[9];
    acStack_14f[2] = s_isHybridObject_0013756e[10];
    acStack_14f[3] = s_isHybridObject_0013756e[0xb];
    acStack_14f[4] = s_isHybridObject_0013756e[0xc];
    acStack_14f[5] = s_isHybridObject_0013756e[0xd];
                    /* try { // try from 001702f0 to 00170307 has its CatchHandler @ 00171920 */
    FUN_00171fc4(plVar14,&local_158,PTR_isHybridObject_001b9fc8,0);
    if ((local_158 & 1) != 0) {
      operator_delete(local_148);
    }
    plVar9 = (long *)operator_new(0x20);
    plVar13 = _UNK_00138c38;
    uVar6 = _DAT_00138c30;
    uVar3 = s_getAllHybridObjectNames_00136ea1._0_8_;
    uVar2 = CONCAT71(s_getAllHybridObjectNames_00136ea1._16_7_,
                     s_getAllHybridObjectNames_00136ea1[0xf]);
    plVar9[1] = CONCAT17(s_getAllHybridObjectNames_00136ea1[0xf],
                         s_getAllHybridObjectNames_00136ea1._8_7_);
    *plVar9 = uVar3;
    *(undefined8 *)((long)plVar9 + 0xf) = uVar2;
    plStack_168 = plVar13;
    local_170 = uVar6;
    *(undefined1 *)((long)plVar9 + 0x17) = 0;
    local_160 = plVar9;
    lVar7 = FUN_001673e0(plVar14[8],plVar14[9],&local_170);
    if ((lVar7 != 0) || (lVar7 = FUN_001673e0(plVar14[0xd],plVar14[0xe],&local_170), lVar7 != 0)) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00170f20 to 00170f33 has its CatchHandler @ 00171d00 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",(basic_string *)&local_170);
                    /* try { // try from 00170f34 to 00170f47 has its CatchHandler @ 00171bfc */
      FUN_0015dcfc(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 00170f4c to 00170f83 has its CatchHandler @ 00171bd8 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
      }
      goto LAB_00171d70;
    }
    lVar7 = FUN_001673e0(plVar14[3],plVar14[4],&local_170);
    if (lVar7 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00171244 to 00171257 has its CatchHandler @ 00171bd4 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",(basic_string *)&local_170);
                    /* try { // try from 00171258 to 0017126b has its CatchHandler @ 00171a70 */
      FUN_0015dcfc(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 00171270 to 001712a7 has its CatchHandler @ 00171a44 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
      }
      goto LAB_00171d70;
    }
                    /* try { // try from 00170388 to 0017039b has its CatchHandler @ 00171918 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_110,(char *)plVar9,0x17);
    local_e8 = 0;
    local_f8 = (long *)PTR_getAllHybridObjectNames_001b9fb0;
    plStack_f0 = (long *)0x0;
                    /* try { // try from 001703ac to 001703b3 has its CatchHandler @ 00171900 */
    pplVar8 = (long **)operator_new(0x38);
    *pplVar8 = (long *)&PTR_FUN_001b7590;
    if (((ulong)local_110 & 1) == 0) {
      pplVar8[2] = plStack_108;
      *(undefined **)(pplVar8 + 1) = local_110;
      pplVar8[3] = local_100;
    }
    else {
                    /* try { // try from 001703e4 to 001703e7 has its CatchHandler @ 001716e0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar8 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar8;
    pplVar8[5] = plStack_f0;
    pplVar8[4] = local_f8;
    *(undefined4 *)(pplVar8 + 6) = local_e8;
    if (((byte)local_110._0_1_ & 1) == 0) {
LAB_00170420:
      lVar7 = -0x40;
      local_c0 = local_70;
LAB_00170430:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar7) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar7 = -0x90;
        goto LAB_00170430;
      }
      if (local_70 != &local_90) goto LAB_00170420;
      local_c0 = &local_e0;
                    /* try { // try from 00170d9c to 00170da7 has its CatchHandler @ 00171478 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 0;
    if ((local_170 & 1) == 0) {
      plStack_a0 = plStack_168;
      local_a8 = local_170;
      local_98 = local_160;
    }
    else {
                    /* try { // try from 00170460 to 00170467 has its CatchHandler @ 00171674 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_160,(ulong)plStack_168);
    }
    if (local_70 == &local_90) {
      lVar7 = 4;
      pplVar8 = &local_90;
LAB_0017048c:
      (*(code *)(*pplVar8)[lVar7])();
    }
    else if (local_70 != (long **)0x0) {
      lVar7 = 5;
      pplVar8 = local_70;
      goto LAB_0017048c;
    }
                    /* try { // try from 00170498 to 001704ab has its CatchHandler @ 001718f0 */
    FUN_00167578(plVar11,&local_170,&local_170,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar7 = 4;
      pplVar8 = &local_e0;
LAB_001704e0:
      (*(code *)(*pplVar8)[lVar7])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar7 = 5;
      pplVar8 = local_c0;
      goto LAB_001704e0;
    }
    if ((local_170 & 1) != 0) {
      operator_delete(local_160);
    }
    local_188 = (basic_string)0x6;
    uStack_187 = 0x786f62;
    lVar7 = FUN_001673e0(plVar14[8],plVar14[9],&local_188);
    if ((lVar7 != 0) || (lVar7 = FUN_001673e0(plVar14[0xd],plVar14[0xe],&local_188), lVar7 != 0)) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00170f94 to 00170fa7 has its CatchHandler @ 00171ce4 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_188);
                    /* try { // try from 00170fa8 to 00170fbb has its CatchHandler @ 00171bbc */
      FUN_0015dcfc(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 00170fc0 to 00170ff7 has its CatchHandler @ 00171b98 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
      }
      goto LAB_00171d70;
    }
    lVar7 = FUN_001673e0(plVar14[3],plVar14[4],&local_188);
    if (lVar7 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001712b4 to 001712c7 has its CatchHandler @ 00171b94 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_188);
                    /* try { // try from 001712c8 to 001712db has its CatchHandler @ 00171a40 */
      FUN_0015dcfc(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 001712e0 to 00171317 has its CatchHandler @ 00171a14 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
      }
      goto LAB_00171d70;
    }
    local_110 = (undefined *)CONCAT35(uStack_183,CONCAT41(uStack_187,local_188));
    plStack_f0 = (long *)0x0;
    plStack_108 = plStack_180;
    local_100 = local_178;
    local_f8 = (long *)PTR_box_001b9fb8;
    local_e8 = 0;
                    /* try { // try from 00170560 to 00170567 has its CatchHandler @ 001718d8 */
    pplVar8 = (long **)operator_new(0x38);
    *pplVar8 = (long *)&PTR_FUN_001b7610;
    if (((ulong)local_110 & 1) == 0) {
      pplVar8[2] = plStack_108;
      *(undefined **)(pplVar8 + 1) = local_110;
      pplVar8[3] = local_100;
    }
    else {
                    /* try { // try from 00170598 to 0017059b has its CatchHandler @ 00171664 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar8 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar8;
    pplVar8[5] = plStack_f0;
    pplVar8[4] = local_f8;
    *(undefined4 *)(pplVar8 + 6) = local_e8;
    if (((byte)local_110._0_1_ & 1) == 0) {
LAB_001705d8:
      lVar7 = -0x40;
      local_c0 = local_70;
LAB_001705e8:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar7) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar7 = -0x90;
        goto LAB_001705e8;
      }
      if (local_70 != &local_90) goto LAB_001705d8;
      local_c0 = &local_e0;
                    /* try { // try from 00170dbc to 00170dc7 has its CatchHandler @ 00171474 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_188 & 1) == 0) {
      plStack_a0 = plStack_180;
      local_a8 = CONCAT35(uStack_183,CONCAT41(uStack_187,local_188));
      local_98 = local_178;
    }
    else {
                    /* try { // try from 0017061c to 00170623 has its CatchHandler @ 001715f8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_178,(ulong)plStack_180);
    }
    if (local_70 == &local_90) {
      lVar7 = 4;
      pplVar8 = &local_90;
LAB_00170648:
      (*(code *)(*pplVar8)[lVar7])();
    }
    else if (local_70 != (long **)0x0) {
      lVar7 = 5;
      pplVar8 = local_70;
      goto LAB_00170648;
    }
                    /* try { // try from 00170654 to 00170667 has its CatchHandler @ 001718c8 */
    FUN_00167578(plVar11,&local_188,&local_188,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar7 = 4;
      pplVar8 = &local_e0;
LAB_0017069c:
      (*(code *)(*pplVar8)[lVar7])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar7 = 5;
      pplVar8 = local_c0;
      goto LAB_0017069c;
    }
    if (((byte)local_188 & 1) != 0) {
      operator_delete(local_178);
    }
    local_1a0 = (basic_string)0x20;
    uStack_18f = 0;
    uStack_197 = (undefined7)s_updateMemorySize_00136c3b._8_8_;
    cStack_190 = SUB81(s_updateMemorySize_00136c3b._8_8_,7);
    uStack_19f = (undefined7)s_updateMemorySize_00136c3b._0_8_;
    cStack_198 = SUB81(s_updateMemorySize_00136c3b._0_8_,7);
    lVar7 = FUN_001673e0(plVar14[8],plVar14[9],&local_1a0);
    if ((lVar7 != 0) || (lVar7 = FUN_001673e0(plVar14[0xd],plVar14[0xe],&local_1a0), lVar7 != 0)) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00171008 to 0017101b has its CatchHandler @ 00171cc8 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1a0);
                    /* try { // try from 0017101c to 0017102f has its CatchHandler @ 00171b7c */
      FUN_0015dcfc(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 00171034 to 0017106b has its CatchHandler @ 00171b58 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
      }
      goto LAB_00171d70;
    }
    lVar7 = FUN_001673e0(plVar14[3],plVar14[4],&local_1a0);
    if (lVar7 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00171324 to 00171337 has its CatchHandler @ 00171b54 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1a0);
                    /* try { // try from 00171338 to 0017134b has its CatchHandler @ 00171a10 */
      FUN_0015dcfc(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 00171350 to 00171387 has its CatchHandler @ 001719e4 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
      }
      goto LAB_00171d70;
    }
    plStack_108 = (long *)CONCAT71(uStack_197,cStack_198);
    local_110 = (undefined *)CONCAT71(uStack_19f,local_1a0);
    local_100 = (long *)CONCAT62(uStack_18e,CONCAT11(uStack_18f,cStack_190));
    plStack_f0 = (long *)0x0;
    local_f8 = (long *)PTR_updateMemorySize_001b9fd0;
    local_e8 = 0;
                    /* try { // try from 00170724 to 0017072b has its CatchHandler @ 001718b0 */
    pplVar8 = (long **)operator_new(0x38);
    *pplVar8 = (long *)&PTR_FUN_001b76a8;
    if (((ulong)local_110 & 1) == 0) {
      pplVar8[2] = plStack_108;
      *(undefined **)(pplVar8 + 1) = local_110;
      pplVar8[3] = local_100;
    }
    else {
                    /* try { // try from 0017075c to 0017075f has its CatchHandler @ 001715e8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar8 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar8;
    pplVar8[5] = plStack_f0;
    pplVar8[4] = local_f8;
    *(undefined4 *)(pplVar8 + 6) = local_e8;
    if (((byte)local_110._0_1_ & 1) == 0) {
LAB_0017079c:
      lVar7 = -0x40;
      local_c0 = local_70;
LAB_001707ac:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar7) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar7 = -0x90;
        goto LAB_001707ac;
      }
      if (local_70 != &local_90) goto LAB_0017079c;
      local_c0 = &local_e0;
                    /* try { // try from 00170ddc to 00170de7 has its CatchHandler @ 00171470 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_1a0 & 1) == 0) {
      plStack_a0 = (long *)CONCAT71(uStack_197,cStack_198);
      local_a8 = CONCAT71(uStack_19f,local_1a0);
      local_98 = (long *)CONCAT62(uStack_18e,CONCAT11(uStack_18f,cStack_190));
    }
    else {
                    /* try { // try from 001707e0 to 001707e7 has its CatchHandler @ 0017157c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)CONCAT62(uStack_18e,CONCAT11(uStack_18f,cStack_190)),
                 CONCAT71(uStack_197,cStack_198));
    }
    if (local_70 == &local_90) {
      lVar7 = 4;
      pplVar8 = &local_90;
LAB_0017080c:
      (*(code *)(*pplVar8)[lVar7])();
    }
    else if (local_70 != (long **)0x0) {
      lVar7 = 5;
      pplVar8 = local_70;
      goto LAB_0017080c;
    }
                    /* try { // try from 00170818 to 0017082b has its CatchHandler @ 001718a0 */
    FUN_00167578(plVar11,&local_1a0,&local_1a0,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar7 = 4;
      pplVar8 = &local_e0;
LAB_00170860:
      (*(code *)(*pplVar8)[lVar7])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar7 = 5;
      pplVar8 = local_c0;
      goto LAB_00170860;
    }
    if (((byte)local_1a0 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_18e,CONCAT11(uStack_18f,cStack_190)));
    }
    plVar9 = (long *)operator_new(0x20);
    uVar3 = s_createNativeArrayBuffer_001374ce._0_8_;
    plStack_1b8 = plVar13;
    local_1c0 = uVar6;
    lVar7 = CONCAT17(s_createNativeArrayBuffer_001374ce[0xf],
                     s_createNativeArrayBuffer_001374ce._8_7_);
    uVar2 = CONCAT71(s_createNativeArrayBuffer_001374ce._16_7_,
                     s_createNativeArrayBuffer_001374ce[0xf]);
    *(undefined1 *)((long)plVar9 + 0x17) = 0;
    plVar9[1] = lVar7;
    *plVar9 = uVar3;
    *(undefined8 *)((long)plVar9 + 0xf) = uVar2;
    local_1b0 = plVar9;
    lVar7 = FUN_001673e0(plVar14[8],plVar14[9],&local_1c0);
    if ((lVar7 != 0) || (lVar7 = FUN_001673e0(plVar14[0xd],plVar14[0xe],&local_1c0), lVar7 != 0)) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0017107c to 0017108f has its CatchHandler @ 00171cac */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",(basic_string *)&local_1c0);
                    /* try { // try from 00171090 to 001710a3 has its CatchHandler @ 00171b3c */
      FUN_0015dcfc(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 001710a8 to 001710df has its CatchHandler @ 00171b18 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
      }
      goto LAB_00171d70;
    }
    lVar7 = FUN_001673e0(plVar14[3],plVar14[4],&local_1c0);
    if (lVar7 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00171394 to 001713a7 has its CatchHandler @ 00171b14 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",(basic_string *)&local_1c0);
                    /* try { // try from 001713a8 to 001713bb has its CatchHandler @ 001719e0 */
      FUN_0015dcfc(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 001713c0 to 001713f7 has its CatchHandler @ 001719b4 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
      }
      goto LAB_00171d70;
    }
                    /* try { // try from 001708e4 to 001708f7 has its CatchHandler @ 00171898 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_110,(char *)plVar9,0x17);
    local_e8 = 0;
    local_f8 = (long *)PTR_createNativeArrayBuffer_001b9fd8;
    plStack_f0 = (long *)0x0;
                    /* try { // try from 00170908 to 0017090f has its CatchHandler @ 00171880 */
    pplVar8 = (long **)operator_new(0x38);
    *pplVar8 = (long *)&PTR_FUN_001b7728;
    if (((ulong)local_110 & 1) == 0) {
      pplVar8[2] = plStack_108;
      *(undefined **)(pplVar8 + 1) = local_110;
      pplVar8[3] = local_100;
    }
    else {
                    /* try { // try from 00170940 to 00170943 has its CatchHandler @ 0017156c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar8 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar8;
    pplVar8[5] = plStack_f0;
    pplVar8[4] = local_f8;
    *(undefined4 *)(pplVar8 + 6) = local_e8;
    if (((byte)local_110._0_1_ & 1) == 0) {
LAB_0017097c:
      lVar7 = -0x40;
      local_c0 = local_70;
LAB_0017098c:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar7) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar7 = -0x90;
        goto LAB_0017098c;
      }
      if (local_70 != &local_90) goto LAB_0017097c;
      local_c0 = &local_e0;
                    /* try { // try from 00170dfc to 00170e07 has its CatchHandler @ 0017146c */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if ((local_1c0 & 1) == 0) {
      plStack_a0 = plStack_1b8;
      local_a8 = local_1c0;
      local_98 = local_1b0;
    }
    else {
                    /* try { // try from 001709c0 to 001709c7 has its CatchHandler @ 00171500 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_1b0,(ulong)plStack_1b8);
    }
    if (local_70 == &local_90) {
      lVar7 = 4;
      pplVar8 = &local_90;
LAB_001709ec:
      (*(code *)(*pplVar8)[lVar7])();
    }
    else if (local_70 != (long **)0x0) {
      lVar7 = 5;
      pplVar8 = local_70;
      goto LAB_001709ec;
    }
                    /* try { // try from 001709f8 to 00170a0b has its CatchHandler @ 00171870 */
    FUN_00167578(plVar11,&local_1c0,&local_1c0,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar7 = 4;
      pplVar8 = &local_e0;
LAB_00170a40:
      (*(code *)(*pplVar8)[lVar7])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar7 = 5;
      pplVar8 = local_c0;
      goto LAB_00170a40;
    }
    if ((local_1c0 & 1) != 0) {
      operator_delete(local_1b0);
    }
    local_1d8 = 0x1c;
    local_1c9 = 0;
    local_1d7[0] = s_hasNativeState_00138511[0];
    local_1d7[1] = s_hasNativeState_00138511[1];
    local_1d7[2] = s_hasNativeState_00138511[2];
    local_1d7[3] = s_hasNativeState_00138511[3];
    local_1d7[4] = s_hasNativeState_00138511[4];
    local_1d7[5] = s_hasNativeState_00138511[5];
    acStack_1d1[0] = s_hasNativeState_00138511[6];
    acStack_1d1[1] = s_hasNativeState_00138511[7];
    acStack_1cf[0] = s_hasNativeState_00138511[8];
    acStack_1cf[1] = s_hasNativeState_00138511[9];
    acStack_1cf[2] = s_hasNativeState_00138511[10];
    acStack_1cf[3] = s_hasNativeState_00138511[0xb];
    acStack_1cf[4] = s_hasNativeState_00138511[0xc];
    acStack_1cf[5] = s_hasNativeState_00138511[0xd];
                    /* try { // try from 00170a80 to 00170a97 has its CatchHandler @ 0017185c */
    FUN_00171fc4(plVar14,&local_1d8,PTR_hasNativeState_001b9fc0,0);
    if ((local_1d8 & 1) != 0) {
      operator_delete(local_1c8);
    }
    local_1f0 = 0x12;
    local_1e7 = 0x65;
    local_1ef[0] = s_buildType_0013866b[0];
    local_1ef[1] = s_buildType_0013866b[1];
    local_1ef[2] = s_buildType_0013866b[2];
    local_1ef[3] = s_buildType_0013866b[3];
    local_1ef[4] = s_buildType_0013866b[4];
    local_1ef[5] = s_buildType_0013866b[5];
    local_1ef[6] = s_buildType_0013866b[6];
    local_1ef[7] = s_buildType_0013866b[7];
                    /* try { // try from 00170ac8 to 00170adf has its CatchHandler @ 00171848 */
    FUN_001726d0(plVar14,&local_1f0,PTR_getBuildType_001b9fe0,0);
    if ((local_1f0 & 1) != 0) {
      operator_delete(local_1e0);
    }
    local_200 = 0;
    local_208 = 0xe;
    local_207 = 0x73726576;
    uStack_203 = 0x6e6f69;
                    /* try { // try from 00170b14 to 00170b2b has its CatchHandler @ 00171834 */
    FUN_001726d0(plVar14,&local_208,PTR_getVersion_001b9fe8,0);
    if ((local_208 & 1) != 0) {
      operator_delete(local_1f8);
    }
    plVar13 = (long *)operator_new(0x30);
    plStack_218 = _UNK_00138bf8;
    local_220 = _DAT_00138bf0;
    *(undefined1 *)((long)plVar13 + 0x24) = 0;
    uVar5 = s_debug_getTotalAllocatedHybridObj_00138520._24_8_;
    uVar4 = s_debug_getTotalAllocatedHybridObj_00138520._16_8_;
    uVar3 = s_debug_getTotalAllocatedHybridObj_00138520._8_8_;
    uVar2 = s_debug_getTotalAllocatedHybridObj_00138520._0_8_;
    *(undefined4 *)(plVar13 + 4) = 0x73746365;
    plVar13[1] = uVar3;
    *plVar13 = uVar2;
    plVar13[3] = uVar5;
    plVar13[2] = uVar4;
    local_210 = plVar13;
    lVar7 = FUN_001673e0(plVar14[8],plVar14[9],&local_220);
    if ((lVar7 != 0) || (lVar7 = FUN_001673e0(plVar14[0xd],plVar14[0xe],&local_220), lVar7 != 0)) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001710f0 to 00171103 has its CatchHandler @ 00171c94 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",(basic_string *)&local_220);
                    /* try { // try from 00171104 to 00171117 has its CatchHandler @ 00171afc */
      FUN_0015dcfc(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 0017111c to 00171153 has its CatchHandler @ 00171ad8 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
      }
      goto LAB_00171d70;
    }
    lVar7 = FUN_001673e0(plVar14[3],plVar14[4],&local_220);
    if (lVar7 != 0) {
      prVar10 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00171404 to 00171417 has its CatchHandler @ 00171ad4 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",(basic_string *)&local_220);
                    /* try { // try from 00171418 to 0017142b has its CatchHandler @ 001719b0 */
      FUN_0015dcfc(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 00171430 to 00171467 has its CatchHandler @ 00171984 */
      std::runtime_error::runtime_error(prVar10,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar10,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
      }
      goto LAB_00171d70;
    }
                    /* try { // try from 00170bac to 00170bbf has its CatchHandler @ 0017182c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_110,(char *)plVar13,0x24);
    local_e8 = 0;
    local_f8 = (long *)PTR_debug_getTotalAllocatedHybridObjects_001b9ff0;
    plStack_f0 = (long *)0x0;
                    /* try { // try from 00170bd0 to 00170bd7 has its CatchHandler @ 00171814 */
    pplVar8 = (long **)operator_new(0x38);
    *pplVar8 = (long *)&PTR_FUN_001b7900;
    if (((ulong)local_110 & 1) == 0) {
      pplVar8[2] = plStack_108;
      *(undefined **)(pplVar8 + 1) = local_110;
      pplVar8[3] = local_100;
    }
    else {
                    /* try { // try from 00170c08 to 00170c0b has its CatchHandler @ 001714f0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar8 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar8;
    pplVar8[5] = plStack_f0;
    pplVar8[4] = local_f8;
    *(undefined4 *)(pplVar8 + 6) = local_e8;
    if (((byte)local_110._0_1_ & 1) == 0) {
LAB_00170c44:
      lVar7 = -0x40;
      local_c0 = local_70;
LAB_00170c54:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar7) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar7 = -0x90;
        goto LAB_00170c54;
      }
      if (local_70 != &local_90) goto LAB_00170c44;
      local_c0 = &local_e0;
                    /* try { // try from 00170e1c to 00170e27 has its CatchHandler @ 00171468 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 0;
    if ((local_220 & 1) == 0) {
      plStack_a0 = plStack_218;
      local_a8 = local_220;
      local_98 = local_210;
    }
    else {
                    /* try { // try from 00170c84 to 00170c8b has its CatchHandler @ 00171484 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_210,(ulong)plStack_218);
    }
    if (local_70 == &local_90) {
      lVar7 = 4;
      pplVar8 = &local_90;
LAB_00170cb0:
      (*(code *)(*pplVar8)[lVar7])();
    }
    else if (local_70 != (long **)0x0) {
      lVar7 = 5;
      pplVar8 = local_70;
      goto LAB_00170cb0;
    }
                    /* try { // try from 00170cbc to 00170ccf has its CatchHandler @ 00171804 */
    FUN_00167578(plVar11,&local_220,&local_220,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar7 = 4;
      pplVar8 = &local_e0;
LAB_00170d04:
      (*(code *)(*pplVar8)[lVar7])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar7 = 5;
      pplVar8 = local_c0;
      goto LAB_00170d04;
    }
    if ((local_220 & 1) != 0) {
      operator_delete(local_210);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_00171d70:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00171d74  margelo::nitro::HybridNitroModulesProxy::createHybridObject =====

/* margelo::nitro::HybridNitroModulesProxy::createHybridObject(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::HybridNitroModulesProxy::createHybridObject
          (HybridNitroModulesProxy *this,basic_string *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    HybridObjectRegistry::createHybridObject((HybridObjectRegistry *)param_1,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00171db0  margelo::nitro::HybridNitroModulesProxy::hasHybridObject =====

/* margelo::nitro::HybridNitroModulesProxy::hasHybridObject(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::HybridNitroModulesProxy::hasHybridObject
          (HybridNitroModulesProxy *this,basic_string *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    HybridObjectRegistry::hasHybridObject(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00171dec  margelo::nitro::HybridNitroModulesProxy::isHybridObject =====

/* margelo::nitro::HybridNitroModulesProxy::isHybridObject(facebook::jsi::Runtime&,
   facebook::jsi::Value const&, facebook::jsi::Value const*, unsigned long) */

void margelo::nitro::HybridNitroModulesProxy::isHybridObject
               (Runtime *param_1,Value *param_2,Value *param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long in_x4;
  undefined4 *in_x8;
  Runtime *local_50;
  long local_48;
  long *plStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((in_x4 != 1) || (*(int *)param_4 != 7)) {
    *(undefined1 *)(in_x8 + 2) = 0;
    *in_x8 = 2;
    goto LAB_00171ef4;
  }
  local_50 = (Runtime *)(**(code **)(*(long *)param_2 + 0x88))(param_2,*(undefined8 *)(param_4 + 8))
  ;
                    /* try { // try from 00171e4c to 00171e5b has its CatchHandler @ 00171f90 */
  uVar2 = (**(code **)(*(long *)param_2 + 0x158))(param_2,&local_50);
  if ((uVar2 & 1) == 0) {
    *(undefined1 *)(in_x8 + 2) = 0;
    *in_x8 = 2;
  }
  else {
                    /* try { // try from 00171e6c to 00171e77 has its CatchHandler @ 00171f8c */
    (**(code **)(*(long *)param_2 + 0x160))(&local_48,param_2,&local_50);
    if ((local_48 == 0) ||
       (lVar3 = __dynamic_cast(local_48,PTR_typeinfo_001b9f70,PTR_typeinfo_001b9ee8,
                               0xffffffffffffffff), lVar3 == 0)) {
      *(undefined1 *)(in_x8 + 2) = 0;
      *in_x8 = 2;
      if (plStack_40 != (long *)0x0) goto LAB_00171f38;
    }
    else if (plStack_40 == (long *)0x0) {
      *in_x8 = 2;
      *(undefined1 *)(in_x8 + 2) = 1;
    }
    else {
      FUN_0015c230(1,plStack_40 + 1);
      *in_x8 = 2;
      *(undefined1 *)(in_x8 + 2) = 1;
      lVar3 = FUN_0015bb40(0xffffffffffffffff,plStack_40 + 1);
      if (lVar3 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
LAB_00171f38:
      lVar3 = FUN_0015bb40(0xffffffffffffffff,plStack_40 + 1);
      if (lVar3 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
  }
  param_1 = local_50;
  if (local_50 != (Runtime *)0x0) {
    param_1 = (Runtime *)(*(code *)**(undefined8 **)local_50)();
  }
LAB_00171ef4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00171fc4  FUN_00171fc4 =====

void FUN_00171fc4(long param_1,basic_string *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  basic_string *pbVar3;
  runtime_error *prVar4;
  ulong local_100;
  ulong uStack_f8;
  char *local_f0;
  long local_e8;
  long lStack_e0;
  basic_string local_d0 [32];
  basic_string *local_b0;
  undefined8 local_a0;
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  long local_80 [4];
  basic_string *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_001673e0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),param_2);
  if ((lVar2 != 0) ||
     (lVar2 = FUN_001673e0(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),param_2),
     lVar2 != 0)) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001721ec to 001721ff has its CatchHandler @ 001723dc */
    std::__ndk1::operator+("Cannot add Hybrid Method \"",param_2);
                    /* try { // try from 00172200 to 00172213 has its CatchHandler @ 001723c4 */
    FUN_0015dcfc(local_d0,local_80,"\" - a property with that name already exists!");
                    /* try { // try from 00172218 to 0017224f has its CatchHandler @ 001723a0 */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
    }
    goto LAB_00172400;
  }
  lVar2 = FUN_001673e0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),param_2);
  if (lVar2 != 0) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00172260 to 00172273 has its CatchHandler @ 0017239c */
    std::__ndk1::operator+("Cannot add Hybrid Method \"",param_2);
                    /* try { // try from 00172274 to 00172287 has its CatchHandler @ 00172398 */
    FUN_0015dcfc(local_d0,local_80,"\" - a method with that name already exists!");
                    /* try { // try from 0017228c to 001722c3 has its CatchHandler @ 0017236c */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
    }
    goto LAB_00172400;
  }
  if (((byte)*param_2 & 1) == 0) {
    uStack_f8 = *(ulong *)(param_2 + 8);
    local_100 = *(ulong *)param_2;
    local_f0 = *(char **)(param_2 + 0x10);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_100,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  local_e8 = param_3;
  lStack_e0 = param_4;
                    /* try { // try from 0017205c to 00172063 has its CatchHandler @ 00172354 */
  local_60 = (basic_string *)operator_new(0x30);
  *(undefined ***)local_60 = &PTR_FUN_001b7510;
  if ((local_100 & 1) == 0) {
    *(ulong *)(local_60 + 0x10) = uStack_f8;
    *(ulong *)(local_60 + 8) = local_100;
    *(char **)(local_60 + 0x18) = local_f0;
  }
  else {
                    /* try { // try from 00172094 to 00172097 has its CatchHandler @ 00172334 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (local_60 + 8),local_f0,uStack_f8);
    param_4 = lStack_e0;
    param_3 = local_e8;
  }
  *(long *)(local_60 + 0x20) = param_3;
  *(long *)(local_60 + 0x28) = param_4;
  if (((byte)local_100._0_1_ & 1) == 0) {
LAB_001720c8:
    pbVar3 = (basic_string *)local_80;
    local_b0 = local_60;
LAB_001720d8:
    *(long *)(pbVar3 + 0x20) = 0;
  }
  else {
    operator_delete(local_f0);
    if (local_60 == (basic_string *)0x0) {
      pbVar3 = local_d0;
      goto LAB_001720d8;
    }
    if (local_60 != (basic_string *)local_80) goto LAB_001720c8;
    local_b0 = local_d0;
                    /* try { // try from 001721d0 to 001721db has its CatchHandler @ 001722c4 */
    (**(code **)(local_80[0] + 0x18))(local_80,local_d0);
  }
  local_a0 = 1;
  if (((byte)*param_2 & 1) == 0) {
    uStack_90 = *(undefined8 *)(param_2 + 8);
    local_98 = *(ulong *)param_2;
    local_88 = *(void **)(param_2 + 0x10);
  }
  else {
                    /* try { // try from 0017210c to 00172113 has its CatchHandler @ 001722c8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_98,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  if (local_60 == (basic_string *)local_80) {
    lVar2 = 4;
    pbVar3 = (basic_string *)local_80;
LAB_00172138:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_60 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_60;
    goto LAB_00172138;
  }
                    /* try { // try from 00172144 to 00172157 has its CatchHandler @ 00172344 */
  FUN_00167578((undefined8 *)(param_1 + 0x18),param_2,param_2,local_d0);
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (local_b0 == local_d0) {
    lVar2 = 4;
    pbVar3 = local_d0;
LAB_0017218c:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_b0 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_b0;
    goto LAB_0017218c;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00172400:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00172404  margelo::nitro::HybridNitroModulesProxy::getAllHybridObjectNames =====

/* margelo::nitro::HybridNitroModulesProxy::getAllHybridObjectNames() */

void __thiscall
margelo::nitro::HybridNitroModulesProxy::getAllHybridObjectNames(HybridNitroModulesProxy *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    HybridObjectRegistry::getAllHybridObjectNames((HybridObjectRegistry *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017243c  margelo::nitro::HybridNitroModulesProxy::box =====

/* margelo::nitro::HybridNitroModulesProxy::box(std::__ndk1::shared_ptr<margelo::nitro::HybridObject>
   const&) */

void margelo::nitro::HybridNitroModulesProxy::box(shared_ptr *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *in_x1;
  undefined8 *in_x8;
  long lVar5;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x30);
  puVar4[2] = 0;
  puVar3 = PTR_vtable_001b9eb0;
  *puVar4 = &PTR_FUN_001b79d0;
  puVar4[1] = 0;
  puVar4[3] = puVar3 + 0x10;
  lVar1 = in_x1[1];
  puVar4[4] = *in_x1;
  puVar4[5] = lVar1;
  if (lVar1 != 0) {
    FUN_0015c230(1,lVar1 + 8);
  }
  *in_x8 = puVar4 + 3;
  in_x8[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001724e0  margelo::nitro::HybridNitroModulesProxy::updateMemorySize =====

/* margelo::nitro::HybridNitroModulesProxy::updateMemorySize(std::__ndk1::shared_ptr<margelo::nitro::HybridObject>
   const&) */

void margelo::nitro::HybridNitroModulesProxy::updateMemorySize(shared_ptr *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *in_x1;
  undefined8 *in_x8;
  long lVar3;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  lVar1 = in_x1[1];
  *in_x8 = *in_x1;
  in_x8[1] = lVar1;
  if (lVar1 != 0) {
    param_1 = (shared_ptr *)FUN_0015c230(1,lVar1 + 8);
  }
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00172538  margelo::nitro::HybridNitroModulesProxy::createNativeArrayBuffer =====

/* margelo::nitro::HybridNitroModulesProxy::createNativeArrayBuffer(double) */

void margelo::nitro::HybridNitroModulesProxy::createNativeArrayBuffer(double param_1)

{
  long lVar1;
  ulong in_x1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    ArrayBuffer::allocate((ArrayBuffer *)(long)param_1,in_x1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00172574  margelo::nitro::HybridNitroModulesProxy::hasNativeState =====

/* margelo::nitro::HybridNitroModulesProxy::hasNativeState(facebook::jsi::Runtime&,
   facebook::jsi::Value const&, facebook::jsi::Value const*, unsigned long) */

void margelo::nitro::HybridNitroModulesProxy::hasNativeState
               (Runtime *param_1,Value *param_2,Value *param_3,ulong param_4)

{
  long lVar1;
  byte bVar2;
  long in_x4;
  undefined4 *in_x8;
  Runtime *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((in_x4 == 1) && (*(int *)param_4 == 7)) {
    local_40 = (Runtime *)
               (**(code **)(*(long *)param_2 + 0x88))(param_2,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 001725d4 to 001725df has its CatchHandler @ 0017263c */
    bVar2 = (**(code **)(*(long *)param_2 + 0x158))(param_2,&local_40);
    *in_x8 = 2;
    *(byte *)(in_x8 + 2) = bVar2 & 1;
    param_1 = local_40;
    if (local_40 != (Runtime *)0x0) {
      param_1 = (Runtime *)(*(code *)**(undefined8 **)local_40)();
    }
  }
  else {
    *(undefined1 *)(in_x8 + 2) = 0;
    *in_x8 = 2;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00172674  margelo::nitro::HybridNitroModulesProxy::getBuildType =====

/* margelo::nitro::HybridNitroModulesProxy::getBuildType() */

void __thiscall margelo::nitro::HybridNitroModulesProxy::getBuildType(HybridNitroModulesProxy *this)

{
  long lVar1;
  undefined1 *in_x8;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *in_x8 = 0xe;
  *(undefined4 *)(in_x8 + 1) = 0x656c6572;
  *(undefined4 *)(in_x8 + 4) = 0x65736165;
  in_x8[8] = 0;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001726d0  FUN_001726d0 =====

void FUN_001726d0(long param_1,basic_string *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  basic_string *pbVar3;
  runtime_error *prVar4;
  ulong local_100;
  ulong uStack_f8;
  char *local_f0;
  long local_e8;
  long lStack_e0;
  undefined4 local_d8;
  basic_string local_d0 [32];
  basic_string *local_b0;
  undefined8 local_a0;
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  long local_80 [4];
  basic_string *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_001673e0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),param_2);
  if (lVar2 != 0) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001728f8 to 0017290b has its CatchHandler @ 00172ae8 */
    std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",param_2);
                    /* try { // try from 0017290c to 0017291f has its CatchHandler @ 00172acc */
    FUN_0015dcfc(local_d0,local_80,"\" - a getter with that name already exists!");
                    /* try { // try from 00172924 to 0017295b has its CatchHandler @ 00172aa8 */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
    }
    goto LAB_00172b0c;
  }
  lVar2 = FUN_001673e0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),param_2);
  if (lVar2 != 0) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0017296c to 0017297f has its CatchHandler @ 00172ae4 */
    std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",param_2);
                    /* try { // try from 00172980 to 00172993 has its CatchHandler @ 00172aa4 */
    FUN_0015dcfc(local_d0,local_80,"\" - a method with that name already exists!");
                    /* try { // try from 00172998 to 001729cf has its CatchHandler @ 00172a78 */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
    }
    goto LAB_00172b0c;
  }
  if (((byte)*param_2 & 1) == 0) {
    uStack_f8 = *(ulong *)(param_2 + 8);
    local_100 = *(ulong *)param_2;
    local_f0 = *(char **)(param_2 + 0x10);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_100,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  local_d8 = 1;
  local_e8 = param_3;
  lStack_e0 = param_4;
                    /* try { // try from 00172760 to 00172767 has its CatchHandler @ 00172a60 */
  local_60 = (basic_string *)operator_new(0x38);
  *(undefined ***)local_60 = &PTR_FUN_001b7880;
  if ((local_100 & 1) == 0) {
    *(ulong *)(local_60 + 0x10) = uStack_f8;
    *(ulong *)(local_60 + 8) = local_100;
    *(char **)(local_60 + 0x18) = local_f0;
  }
  else {
                    /* try { // try from 00172798 to 0017279b has its CatchHandler @ 00172a40 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (local_60 + 8),local_f0,uStack_f8);
  }
  *(long *)(local_60 + 0x28) = lStack_e0;
  *(long *)(local_60 + 0x20) = local_e8;
  *(undefined4 *)(local_60 + 0x30) = local_d8;
  if (((byte)local_100._0_1_ & 1) == 0) {
LAB_001727d8:
    pbVar3 = (basic_string *)local_80;
    local_b0 = local_60;
LAB_001727e8:
    *(long *)(pbVar3 + 0x20) = 0;
  }
  else {
    operator_delete(local_f0);
    if (local_60 == (basic_string *)0x0) {
      pbVar3 = local_d0;
      goto LAB_001727e8;
    }
    if (local_60 != (basic_string *)local_80) goto LAB_001727d8;
    local_b0 = local_d0;
                    /* try { // try from 001728dc to 001728e7 has its CatchHandler @ 001729d0 */
    (**(code **)(local_80[0] + 0x18))(local_80,local_d0);
  }
  local_a0 = 0;
  if (((byte)*param_2 & 1) == 0) {
    uStack_90 = *(undefined8 *)(param_2 + 8);
    local_98 = *(ulong *)param_2;
    local_88 = *(void **)(param_2 + 0x10);
  }
  else {
                    /* try { // try from 00172818 to 0017281f has its CatchHandler @ 001729d4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_98,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  if (local_60 == (basic_string *)local_80) {
    lVar2 = 4;
    pbVar3 = (basic_string *)local_80;
LAB_00172844:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_60 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_60;
    goto LAB_00172844;
  }
                    /* try { // try from 00172850 to 00172863 has its CatchHandler @ 00172a50 */
  FUN_00167578((undefined8 *)(param_1 + 0x40),param_2,param_2,local_d0);
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (local_b0 == local_d0) {
    lVar2 = 4;
    pbVar3 = local_d0;
LAB_00172898:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_b0 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_b0;
    goto LAB_00172898;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00172b0c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00172b10  margelo::nitro::HybridNitroModulesProxy::getVersion =====

/* margelo::nitro::HybridNitroModulesProxy::getVersion() */

void __thiscall margelo::nitro::HybridNitroModulesProxy::getVersion(HybridNitroModulesProxy *this)

{
  long lVar1;
  undefined1 *in_x8;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *in_x8 = 0xc;
  *(undefined4 *)(in_x8 + 1) = 0x35332e30;
  *(undefined2 *)(in_x8 + 5) = 0x342e;
  in_x8[7] = 0;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00172b68  margelo::nitro::HybridNitroModulesProxy::debug_getTotalAllocatedHybridObjects =====

/* margelo::nitro::HybridNitroModulesProxy::debug_getTotalAllocatedHybridObjects() */

undefined1  [16] margelo::nitro::HybridNitroModulesProxy::debug_getTotalAllocatedHybridObjects(void)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    auVar2._0_8_ = (double)DAT_001bfca0;
    auVar2._8_8_ = 0;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00172bac  FUN_00172bac =====

void FUN_00172bac(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b7900;
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


// ===== 00172c18  FUN_00172c18 =====

void FUN_00172c18(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b7900;
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


// ===== 00172c80  FUN_00172c80 =====

undefined8 * FUN_00172c80(long param_1)

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
  *puVar4 = &PTR_FUN_001b7900;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00172ce0 to 00172ce3 has its CatchHandler @ 00172d1c */
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


// ===== 00172d44  FUN_00172d44 =====

void FUN_00172d44(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_001b7900;
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


// ===== 00172ddc  FUN_00172ddc =====

void FUN_00172ddc(long param_1)

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


// ===== 00172e3c  FUN_00172e3c =====

void FUN_00172e3c(void *param_1)

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


// ===== 00172e98  FUN_00172e98 =====

void FUN_00172e98(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  JSError *pJVar5;
  long *plVar6;
  ulong uVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  undefined8 *local_80;
  long *plStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar7 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 00172ef4 to 00172f03 has its CatchHandler @ 00173448 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == (undefined8 *)0x0) || ((undefined *)*local_80 != PTR_vtable_001b9ff8 + 0x70)) {
    puVar9 = (undefined8 *)0x0;
    plVar6 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x00172f78;
  }
  else {
    puVar9 = local_80 + -0xc;
    if (plStack_78 == (long *)0x0) {
      plVar6 = (long *)0x0;
      goto joined_r0x00172f78;
    }
    FUN_0015c230(1,plStack_78 + 1);
    plVar6 = plStack_78;
  }
  lVar4 = FUN_0015bb40(0xffffffffffffffff,plStack_78 + 1);
  if (lVar4 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x00172f78:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar7 == 0) {
    pcVar8 = *(code **)(param_2 + 0x20);
    uVar7 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_23HybridNitroModulesProxyEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS7_FT0_DpT1_ERNS5_7RuntimeEPKS6_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_001ba110
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_23HybridNitroModulesProxyEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS7_FT0_DpT1_ERNS5_7RuntimeEPKS6_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_001ba110
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_23HybridNitroModulesProxyEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS7_FT0_DpT1_ERNS5_7RuntimeEPKS6_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_001ba108
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_23HybridNitroModulesProxyEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS7_FT0_DpT1_ERNS5_7RuntimeEPKS6_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_001ba108
           = 0;
      __cxa_atexit(PTR__Value_001b9f60,puVar2,&PTR_LOOP_001b6ad0);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_23HybridNitroModulesProxyEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS7_FT0_DpT1_ERNS5_7RuntimeEPKS6_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_001ba110
                         );
    }
    if ((uVar7 & 1) != 0) {
      pcVar8 = *(code **)(pcVar8 + *(long *)((long)puVar9 + ((long)uVar7 >> 1)));
    }
                    /* try { // try from 00172fb0 to 00172fb3 has its CatchHandler @ 00173158 */
    uVar10 = (*pcVar8)();
    *(undefined8 *)(param_1 + 2) = uVar10;
    *param_1 = 3;
    if ((plVar6 != (long *)0x0) && (lVar4 = FUN_0015bb40(0xffffffffffffffff,plVar6 + 1), lVar4 == 0)
       ) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 00173030 to 0017303f has its CatchHandler @ 001735e4 */
    FUN_0017369c(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,puVar9);
    pJVar5 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0017304c to 0017305f has its CatchHandler @ 001735c4 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 00173060 to 00173073 has its CatchHandler @ 001735ac */
    FUN_0015dcfc(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 00173074 to 0017307f has its CatchHandler @ 0017357c */
    std::__ndk1::to_string(0);
                    /* try { // try from 00173080 to 0017308f has its CatchHandler @ 00173558 */
    FUN_001693b0(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 00173090 to 001730a3 has its CatchHandler @ 00173534 */
    FUN_0015dcfc(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 001730a4 to 001730af has its CatchHandler @ 00173510 */
    std::__ndk1::to_string(uVar7);
                    /* try { // try from 001730b0 to 001730bf has its CatchHandler @ 001734ec */
    FUN_001693b0(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 001730c0 to 001730d3 has its CatchHandler @ 001734c8 */
    FUN_0015dcfc(local_98,auStack_b0,&DAT_001374e6);
                    /* try { // try from 001730d8 to 00173113 has its CatchHandler @ 00173468 */
    facebook::jsi::JSError::JSError(pJVar5,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar5,PTR_typeinfo_001b9f78,PTR__JSError_001b9f68);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017360c  FUN_0017360c =====

void FUN_0017360c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_001ba118) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0017365c  FUN_0017365c =====

undefined * FUN_0017365c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_001ba120;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017369c  FUN_0017369c =====

void FUN_0017369c(undefined8 *param_1,int param_2,byte *param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  size_t sVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  void *pvVar10;
  char *__s;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong local_a8;
  ulong local_a0;
  void *local_98;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  ulong local_70;
  size_t local_68;
  undefined1 *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (param_4 == 0) {
    FUN_001695dc(&local_70,PTR_typeinfo_name_001ba008,1);
    if (param_2 != 0) goto LAB_00173710;
LAB_001737a8:
    uVar5 = local_70;
    sVar6 = local_70 >> 1 & 0x7f;
    if ((local_70 & 1) != 0) {
      sVar6 = local_68;
    }
    uVar1 = sVar6 + 1;
    if (uVar1 < 0xfffffffffffffff0) {
      if (uVar1 < 0x17) {
        local_a0 = 0;
        pvVar10 = (void *)((ulong)&local_a8 | 1);
        local_98 = (void *)0x0;
        local_a8 = (ulong)(byte)((int)uVar1 << 1);
        if (sVar6 != 0) goto LAB_001738a0;
      }
      else {
        uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 00173888 to 0017388f has its CatchHandler @ 001739f0 */
        pvVar10 = operator_new(uVar2);
        local_a8 = uVar2 | 1;
        local_a0 = uVar1;
        local_98 = pvVar10;
LAB_001738a0:
        puVar11 = (undefined1 *)((ulong)&local_70 | 1);
        if ((uVar5 & 1) != 0) {
          puVar11 = local_60;
        }
        memmove(pvVar10,puVar11,sVar6);
      }
      *(undefined2 *)((long)pvVar10 + sVar6) = 0x2e;
      pbVar3 = *(byte **)(param_3 + 0x10);
      if ((*param_3 & 1) == 0) {
        pbVar3 = param_3 + 1;
      }
                    /* try { // try from 001738e0 to 001738e7 has its CatchHandler @ 001739dc */
      puVar8 = (ulong *)std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::append((char *)&local_a8,(ulong)pbVar3);
      local_80 = (void *)puVar8[2];
      uStack_88 = puVar8[1];
      local_90 = *puVar8;
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
                    /* try { // try from 00173900 to 00173913 has its CatchHandler @ 001739c4 */
      puVar7 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append((char *)&local_90,0x1377c5);
      uVar9 = puVar7[2];
      uVar13 = puVar7[1];
      uVar12 = *puVar7;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      param_1[1] = uVar13;
      *param_1 = uVar12;
      param_1[2] = uVar9;
      pvVar10 = local_98;
      uVar5 = local_a8;
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
        pvVar10 = local_98;
        uVar5 = local_a8;
      }
      goto joined_r0x00173940;
    }
  }
  else {
    __s = *(char **)(param_4 + 0x30);
    sVar6 = strlen(__s);
    if (sVar6 < 0xfffffffffffffff0) {
      if (sVar6 < 0x17) {
        puVar11 = (undefined1 *)((ulong)&local_70 | 1);
        local_70 = CONCAT71(local_70._1_7_,(char)((int)sVar6 << 1));
        if (sVar6 != 0) goto LAB_00173790;
        *puVar11 = 0;
      }
      else {
        puVar11 = (undefined1 *)operator_new((sVar6 | 0xf) + 1);
        local_70 = (sVar6 | 0xf) + 2;
        local_68 = sVar6;
        local_60 = puVar11;
LAB_00173790:
        memmove(puVar11,__s,sVar6);
        puVar11[sVar6] = 0;
      }
      if (param_2 == 0) goto LAB_001737a8;
LAB_00173710:
      uVar5 = local_70;
      sVar6 = local_70 >> 1 & 0x7f;
      if ((local_70 & 1) != 0) {
        sVar6 = local_68;
      }
      uVar1 = sVar6 + 1;
      if (uVar1 < 0xfffffffffffffff0) {
        if (uVar1 < 0x17) {
          uStack_88 = 0;
          pvVar10 = (void *)((ulong)&local_90 | 1);
          local_80 = (void *)0x0;
          local_90 = (ulong)(byte)((int)uVar1 << 1);
          if (sVar6 != 0) goto LAB_00173810;
        }
        else {
          uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 001737f8 to 001737ff has its CatchHandler @ 00173a0c */
          pvVar10 = operator_new(uVar2);
          local_90 = uVar2 | 1;
          uStack_88 = uVar1;
          local_80 = pvVar10;
LAB_00173810:
          puVar11 = (undefined1 *)((ulong)&local_70 | 1);
          if ((uVar5 & 1) != 0) {
            puVar11 = local_60;
          }
          memmove(pvVar10,puVar11,sVar6);
        }
        *(undefined2 *)((long)pvVar10 + sVar6) = 0x2e;
        pbVar3 = *(byte **)(param_3 + 0x10);
        if ((*param_3 & 1) == 0) {
          pbVar3 = param_3 + 1;
        }
                    /* try { // try from 00173850 to 00173857 has its CatchHandler @ 001739f4 */
        puVar7 = (undefined8 *)
                 std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 append((char *)&local_90,(ulong)pbVar3);
        uVar9 = puVar7[2];
        uVar13 = puVar7[1];
        uVar12 = *puVar7;
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        param_1[1] = uVar13;
        *param_1 = uVar12;
        param_1[2] = uVar9;
        pvVar10 = local_80;
        uVar5 = local_90;
joined_r0x00173940:
        if ((uVar5 & 1) != 0) {
          operator_delete(pvVar10);
        }
        if ((local_70 & 1) != 0) {
          operator_delete(local_60);
        }
        if (*(long *)(lVar4 + 0x28) == local_58) {
          return;
        }
        goto LAB_00173a38;
      }
    }
    else {
      if (*(long *)(lVar4 + 0x28) != local_58) goto LAB_00173a38;
      FUN_0015d7fc();
    }
    if (*(long *)(lVar4 + 0x28) != local_58) goto LAB_00173a38;
                    /* try { // try from 001739ac to 001739af has its CatchHandler @ 00173a0c */
    FUN_0015d7fc();
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* try { // try from 001739c0 to 001739c3 has its CatchHandler @ 001739f0 */
    uVar9 = FUN_0015d7fc();
                    /* catch() { ... } // from try @ 00173900 with catch @ 001739c4 */
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if (*(long *)(lVar4 + 0x28) == local_58) {
      FUN_00157e74(uVar9);
    }
  }
LAB_00173a38:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00173a3c  FUN_00173a3c =====

void FUN_00173a3c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_0015bb40(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 00173ac8  FUN_00173ac8 =====

void FUN_00173ac8(HybridObject *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  margelo::nitro::HybridObject::~HybridObject(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState((NativeState *)(param_1 + 0x60));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00173b20  FUN_00173b20 =====

void FUN_00173b20(HybridObject *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  margelo::nitro::HybridObject::~HybridObject(param_1);
  facebook::jsi::NativeState::~NativeState((NativeState *)(param_1 + 0x60));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00173b80  FUN_00173b80 =====

void FUN_00173b80(long *param_1)

{
  HybridObject *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (HybridObject *)((long)param_1 + *(long *)(*param_1 + -0x18));
  margelo::nitro::HybridObject::~HybridObject(this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState((NativeState *)(this + 0x60));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00173be4  FUN_00173be4 =====

void FUN_00173be4(long *param_1)

{
  HybridObject *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (HybridObject *)((long)param_1 + *(long *)(*param_1 + -0x18));
  margelo::nitro::HybridObject::~HybridObject(this);
  facebook::jsi::NativeState::~NativeState((NativeState *)(this + 0x60));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00173c50  FUN_00173c50 =====

void FUN_00173c50(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b7880;
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


// ===== 00173cbc  FUN_00173cbc =====

void FUN_00173cbc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b7880;
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


// ===== 00173d24  FUN_00173d24 =====

undefined8 * FUN_00173d24(long param_1)

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
  *puVar4 = &PTR_FUN_001b7880;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00173d84 to 00173d87 has its CatchHandler @ 00173dc0 */
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


// ===== 00173de8  FUN_00173de8 =====

void FUN_00173de8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_001b7880;
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


// ===== 00173e80  FUN_00173e80 =====

void FUN_00173e80(long param_1)

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


// ===== 00173ee0  FUN_00173ee0 =====

void FUN_00173ee0(void *param_1)

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


// ===== 00173f3c  FUN_00173f3c =====

void FUN_00173f3c(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  JSError *pJVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  code *pcVar11;
  undefined1 auStack_140 [24];
  undefined8 local_128 [3];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  basic_string local_80;
  undefined7 uStack_7f;
  long *local_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar10 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 00173f98 to 00173fa7 has its CatchHandler @ 0017455c */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  plVar1 = local_78;
  puVar9 = (undefined8 *)CONCAT71(uStack_7f,local_80);
  if ((puVar9 == (undefined8 *)0x0) || ((undefined *)*puVar9 != PTR_vtable_001b9ff8 + 0x70)) {
    puVar9 = (undefined8 *)0x0;
    plVar8 = (long *)0x0;
    if (local_78 == (long *)0x0) goto joined_r0x0017401c;
  }
  else {
    puVar9 = puVar9 + -0xc;
    if (local_78 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x0017401c;
    }
    FUN_0015c230(1,local_78 + 1);
    plVar8 = plVar1;
  }
  lVar6 = FUN_0015bb40(0xffffffffffffffff,plVar1 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x0017401c:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar10 == 0) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar10 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_23HybridNitroModulesProxyENSt6__ndk112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS4_16integer_sequenceImJXspT2_EEEEE12defaultValue_001ba0f0
         & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_23HybridNitroModulesProxyENSt6__ndk112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS4_16integer_sequenceImJXspT2_EEEEE12defaultValue_001ba0f0
                                   ),
       puVar4 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_23HybridNitroModulesProxyENSt6__ndk112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS4_16integer_sequenceImJXspT2_EEEEE12defaultValue_001ba0e8
       , iVar5 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_23HybridNitroModulesProxyENSt6__ndk112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS4_16integer_sequenceImJXspT2_EEEEE12defaultValue_001ba0e8
           = 0;
      __cxa_atexit(PTR__Value_001b9f60,puVar4,&PTR_LOOP_001b6ad0);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_23HybridNitroModulesProxyENSt6__ndk112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS4_16integer_sequenceImJXspT2_EEEEE12defaultValue_001ba0f0
                         );
    }
    if ((uVar10 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *(long *)((long)puVar9 + ((long)uVar10 >> 1)));
    }
                    /* try { // try from 00174054 to 0017405f has its CatchHandler @ 00174264 */
    (*pcVar11)(&local_80);
    plVar1 = (long *)(ulong)((byte)local_80 >> 1);
    pvVar3 = (void *)((ulong)&local_80 | 1);
    if (((byte)local_80 & 1) != 0) {
      plVar1 = local_78;
      pvVar3 = local_70;
    }
                    /* try { // try from 00174084 to 0017408f has its CatchHandler @ 00174248 */
    (**(code **)(*param_3 + 0x110))(local_128,param_3,pvVar3,plVar1);
    *param_1 = 6;
    *(undefined8 *)(param_1 + 2) = local_128[0];
    if (((byte)local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if ((plVar8 != (long *)0x0) && (lVar6 = FUN_0015bb40(0xffffffffffffffff,plVar8 + 1), lVar6 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 00174120 to 0017412f has its CatchHandler @ 001746f8 */
    FUN_0017369c(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,puVar9);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0017413c to 0017414f has its CatchHandler @ 001746d8 */
    std::__ndk1::operator+("`",&local_80);
                    /* try { // try from 00174150 to 00174163 has its CatchHandler @ 001746c0 */
    FUN_0015dcfc(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 00174164 to 0017416f has its CatchHandler @ 00174690 */
    std::__ndk1::to_string(0);
                    /* try { // try from 00174170 to 0017417f has its CatchHandler @ 0017466c */
    FUN_001693b0(auStack_e0,auStack_f8,local_128);
                    /* try { // try from 00174180 to 00174193 has its CatchHandler @ 00174648 */
    FUN_0015dcfc(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 00174194 to 0017419f has its CatchHandler @ 00174624 */
    std::__ndk1::to_string(uVar10);
                    /* try { // try from 001741a0 to 001741af has its CatchHandler @ 00174600 */
    FUN_001693b0(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 001741b0 to 001741c3 has its CatchHandler @ 001745dc */
    FUN_0015dcfc(local_98,auStack_b0,&DAT_001374e6);
                    /* try { // try from 001741c8 to 00174203 has its CatchHandler @ 0017457c */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_001b9f78,PTR__JSError_001b9f68);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00174720  FUN_00174720 =====

void FUN_00174720(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_001ba0f8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00174770  FUN_00174770 =====

undefined * FUN_00174770(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_001ba100;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001747b0  FUN_001747b0 =====

void FUN_001747b0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b7728;
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


// ===== 0017481c  FUN_0017481c =====

void FUN_0017481c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b7728;
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


// ===== 00174884  FUN_00174884 =====

undefined8 * FUN_00174884(long param_1)

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
  *puVar4 = &PTR_FUN_001b7728;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 001748e4 to 001748e7 has its CatchHandler @ 00174920 */
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


// ===== 00174948  FUN_00174948 =====

void FUN_00174948(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_001b7728;
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


// ===== 001749e0  FUN_001749e0 =====

void FUN_001749e0(long param_1)

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


// ===== 00174a40  FUN_00174a40 =====

void FUN_00174a40(void *param_1)

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


// ===== 00174a9c  FUN_00174a9c =====

void FUN_00174a9c(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  JSError *pJVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  code *pcVar13;
  long *plVar14;
  undefined1 auStack_158 [24];
  long *local_140;
  long *plStack_138;
  long *local_120;
  long *plStack_118;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  long *local_a0 [3];
  long *local_88;
  long *local_80;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  uVar12 = *param_6;
  local_a0[0] = (long *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 00174afc to 00174b0b has its CatchHandler @ 0017516c */
  (**(code **)(*param_3 + 0x160))(&local_88,param_3,local_a0);
  plVar4 = local_80;
  if ((local_88 == (long *)0x0) || ((undefined *)*local_88 != PTR_vtable_001b9ff8 + 0x70)) {
    plVar11 = (long *)0x0;
    plVar10 = (long *)0x0;
    if (local_80 != (long *)0x0) goto LAB_00174b54;
  }
  else {
    plVar11 = local_88 + -0xc;
    if (local_80 == (long *)0x0) {
      plVar10 = (long *)0x0;
    }
    else {
      FUN_0015c230(1,local_80 + 1);
      plVar10 = plVar4;
LAB_00174b54:
      lVar9 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1);
      if (lVar9 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
  }
  if (local_a0[0] != (long *)0x0) {
    (**(code **)*local_a0[0])();
  }
  if (uVar12 != 1) {
                    /* try { // try from 00174f84 to 00174f93 has its CatchHandler @ 00175600 */
    FUN_0017369c(&local_88,*(undefined4 *)(param_2 + 0x30),param_2 + 8,plVar11);
    pJVar8 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00174fa0 to 00174fb3 has its CatchHandler @ 001755e0 */
    std::__ndk1::operator+("`",(basic_string *)&local_88);
                    /* try { // try from 00174fb4 to 00174fc7 has its CatchHandler @ 001755c8 */
    FUN_0015dcfc(auStack_100,&local_120,"` expected ");
                    /* try { // try from 00174fc8 to 00174fd3 has its CatchHandler @ 00175598 */
    std::__ndk1::to_string(1);
                    /* try { // try from 00174fd4 to 00174fe3 has its CatchHandler @ 00175574 */
    FUN_001693b0(auStack_e8,auStack_100,&local_140);
                    /* try { // try from 00174fe4 to 00174ff7 has its CatchHandler @ 00175550 */
    FUN_0015dcfc(auStack_d0,auStack_e8," arguments, but received ");
                    /* try { // try from 00174ff8 to 00175003 has its CatchHandler @ 0017552c */
    std::__ndk1::to_string(uVar12);
                    /* try { // try from 00175004 to 00175013 has its CatchHandler @ 00175504 */
    FUN_001693b0(auStack_b8,auStack_d0,auStack_158);
                    /* try { // try from 00175014 to 00175027 has its CatchHandler @ 001751ec */
    FUN_0015dcfc(local_a0,auStack_b8,&DAT_001374e6);
                    /* try { // try from 0017502c to 00175067 has its CatchHandler @ 0017518c */
    facebook::jsi::JSError::JSError(pJVar8,param_3,local_a0);
    if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar8,PTR_typeinfo_001b9f78,PTR__JSError_001b9f68);
    }
    goto LAB_00175624;
  }
  pcVar13 = *(code **)(param_2 + 0x20);
  uVar12 = *(ulong *)(param_2 + 0x28);
  if (((*PTR_defaultValue_001ba0d0 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_defaultValue_001ba0d0), puVar3 = PTR_defaultValue_001ba0c8,
     iVar5 != 0)) {
    *(undefined4 *)PTR_defaultValue_001ba0c8 = 0;
    __cxa_atexit(PTR__Value_001b9f60,puVar3,&PTR_LOOP_001b6ad0);
    __cxa_guard_release(PTR_defaultValue_001ba0d0);
  }
  plVar11 = (long *)((long)plVar11 + ((long)uVar12 >> 1));
  if ((uVar12 & 1) != 0) {
    pcVar13 = *(code **)(pcVar13 + *plVar11);
  }
                    /* try { // try from 00174bbc to 00174bcf has its CatchHandler @ 00175210 */
  facebook::jsi::Value::asNumber();
  (*pcVar13)(&local_140,plVar11);
  plVar11 = plStack_138;
  plVar4 = local_140;
  local_140 = (long *)0x0;
  plStack_138 = (long *)0x0;
  if ((plVar4 == (long *)0x0) || ((undefined *)*plVar4 != PTR_vtable_001b9e90 + 0x10)) {
LAB_00174d24:
    if (plVar11 != (long *)0x0) {
      FUN_0015c230(1,plVar11 + 1);
    }
    plStack_118 = plVar11;
    local_120 = plVar4;
                    /* try { // try from 00174d44 to 00174d53 has its CatchHandler @ 0017513c */
    (**(code **)(*param_3 + 0x238))(&local_88,param_3,&local_120);
    local_a0[0] = local_88;
    plVar7 = plStack_118;
    local_88 = (long *)0x0;
    if ((plStack_118 != (long *)0x0) &&
       (lVar9 = FUN_0015bb40(0xffffffffffffffff,plStack_118 + 1), lVar9 == 0)) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
                    /* try { // try from 00174d90 to 00174d97 has its CatchHandler @ 0017511c */
    plVar7 = (long *)operator_new(0x30);
    *plVar7 = (long)&PTR_FUN_001b77e8;
    plVar7[2] = 0;
    plVar14 = plVar7 + 1;
    *plVar14 = 0;
    plVar7[3] = (long)&PTR_FUN_001b7838;
    plVar7[5] = (long)plVar11;
    plVar7[4] = (long)plVar4;
    if (plVar11 != (long *)0x0) {
      FUN_0015c230(1,plVar11 + 1);
    }
    FUN_0015c230(1,plVar7 + 1);
    local_120 = plVar7 + 3;
    plStack_118 = plVar7;
    FUN_0015c230(1,plVar7 + 1);
                    /* try { // try from 00174e00 to 00174e0f has its CatchHandler @ 001750f4 */
    (**(code **)(*param_3 + 0x168))(param_3,local_a0,&local_120);
    plVar4 = plStack_118;
    if ((plStack_118 != (long *)0x0) &&
       (lVar9 = FUN_0015bb40(0xffffffffffffffff,plStack_118 + 1), lVar9 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    lVar9 = FUN_0015bb40(0xffffffffffffffff,plVar14);
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    *param_1 = 7;
    *(long **)(param_1 + 2) = local_a0[0];
    local_a0[0] = (long *)0x0;
    lVar9 = FUN_0015bb40(0xffffffffffffffff,plVar14);
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (local_a0[0] != (long *)0x0) {
      (**(code **)*local_a0[0])();
    }
  }
  else {
    if (plVar11 != (long *)0x0) {
      FUN_0015c230(1,plVar11 + 1);
    }
    local_88 = (long *)plVar4[2];
    local_80 = (long *)plVar4[3];
    if (local_80 != (long *)0x0) {
      FUN_0015bb40(1);
    }
    if ((local_88 == (long *)0x0) || ((*(byte *)(local_80 + 2) & 1) != 0)) {
      FUN_00164cdc(&local_88);
      bVar2 = true;
    }
    else {
      lVar9 = *param_3;
      *param_1 = 7;
                    /* try { // try from 00174c54 to 00174c5b has its CatchHandler @ 001750d0 */
      uVar6 = (**(code **)(lVar9 + 0x88))(param_3,*local_88);
      *(undefined8 *)(param_1 + 2) = uVar6;
      if (local_80 != (long *)0x0) {
        uVar12 = FUN_0015bb40(0xffffffffffffffff);
        plVar7 = local_88;
        if (uVar12 < 2) {
          if ((*(byte *)(local_80 + 2) & 1) == 0) {
            if (local_88 != (long *)0x0) {
              if ((undefined8 *)*local_88 != (undefined8 *)0x0) {
                (*(code *)**(undefined8 **)*local_88)();
              }
              operator_delete(plVar7);
            }
            local_88 = (long *)0x0;
            *(undefined4 *)(local_80 + 2) = 1;
            goto LAB_00174cc0;
          }
          lVar9 = *local_80;
          plVar7 = local_80;
        }
        else {
LAB_00174cc0:
          lVar9 = *local_80;
          plVar7 = local_80;
        }
        local_80 = plVar7;
        if (((lVar9 == 0) && (plVar7[1] == 0)) && (plVar7 != (long *)0x0)) {
          std::__ndk1::mutex::~mutex((mutex *)((long)plVar7 + 0x14));
          operator_delete(plVar7);
        }
      }
      bVar2 = false;
    }
    if ((plVar11 != (long *)0x0) &&
       (lVar9 = FUN_0015bb40(0xffffffffffffffff,plVar11 + 1), lVar9 == 0)) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (bVar2) goto LAB_00174d24;
  }
  if ((plVar11 != (long *)0x0) && (lVar9 = FUN_0015bb40(0xffffffffffffffff,plVar11 + 1), lVar9 == 0)
     ) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_138;
  if ((plStack_138 != (long *)0x0) &&
     (lVar9 = FUN_0015bb40(0xffffffffffffffff,plStack_138 + 1), lVar9 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if ((plVar10 != (long *)0x0) && (lVar9 = FUN_0015bb40(0xffffffffffffffff,plVar10 + 1), lVar9 == 0)
     ) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
LAB_00175624:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00175628  FUN_00175628 =====

void FUN_00175628(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_001ba0d8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00175678  FUN_00175678 =====

undefined * FUN_00175678(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_001ba0e0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001756b8  FUN_001756b8 =====

void FUN_001756b8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_0015bb40(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 00175744  FUN_00175744 =====

void FUN_00175744(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_0015bb40(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 001757d0  FUN_001757d0 =====

void FUN_001757d0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_0015bb40(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 0017585c  FUN_0017585c =====

void FUN_0017585c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_0015bb40(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 001758e8  FUN_001758e8 =====

void FUN_001758e8(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    facebook::jsi::NativeState::~NativeState(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


