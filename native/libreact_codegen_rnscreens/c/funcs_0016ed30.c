// ===== 0016ed30  _FINI_1 =====

void _FINI_1(void)

{
  __cxa_finalize(&PTR_LOOP_001e77b0);
  return;
}


// ===== 0016ed40  FUN_0016ed40 =====

void FUN_0016ed40(void)

{
  return;
}


// ===== 0016ed48  _FINI_0 =====

void _FINI_0(void)

{
  FUN_0016ed40();
  return;
}


// ===== 0016ed50  FUN_0016ed50 =====

void FUN_0016ed50(code *UNRECOVERED_JUMPTABLE)

{
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0016ed5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


// ===== 0016ed64  FUN_0016ed64 =====

void FUN_0016ed64(undefined8 param_1)

{
  __cxa_atexit(FUN_0016ed50,param_1,&PTR_LOOP_001e77b0);
  return;
}


// ===== 0016ed80  FUN_0016ed80 =====

void FUN_0016ed80(void)

{
  __register_atfork();
  return;
}


// ===== 0016ed90  FUN_0016ed90 =====

undefined8 FUN_0016ed90(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_80 [24];
  code *local_68;
  long local_38;
  
  FUN_0016f0d8(param_2,param_1);
  iVar2 = FUN_0016f1fc(param_2);
  while( true ) {
    if (iVar2 == 0) {
      return 5;
    }
    if (iVar2 < 0) break;
    FUN_0016f180(param_2,0xfffffffe,&local_38);
    iVar2 = FUN_0016f210(param_2,auStack_80);
    if (iVar2 != 0) {
      return 2;
    }
    if (local_68 != (code *)0x0) {
      uVar3 = 6;
      if (local_38 != param_3[3]) {
        uVar3 = 2;
      }
      iVar2 = (*local_68)(1,uVar3,*param_3,param_3,param_2);
      puVar1 = PTR___sF_001f0f78;
      if (iVar2 != 8) {
        if (iVar2 != 7) {
          return 2;
        }
        FUN_0016f250(param_2);
        return 2;
      }
      if (local_38 == param_3[3]) {
        fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),"libunwind: %s - %s\n","unwind_phase2",
                "during phase1 personality function said it would stop here, but now in phase2 it did not stop here"
               );
        fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    iVar2 = FUN_0016f1fc(param_2);
  }
  return 2;
}


// ===== 0016eec4  FUN_0016eec4 =====

void FUN_0016eec4(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_4a0 [624];
  undefined1 auStack_230 [528];
  
  FUN_0016f03c(auStack_230);
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_0016ed90(auStack_230,auStack_4a0,param_1);
  }
  else {
    FUN_0016ef48(auStack_230,auStack_4a0,param_1,*(long *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = PTR___sF_001f0f78;
  fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),"libunwind: %s - %s\n","_Unwind_Resume",
          "_Unwind_Resume() can\'t return");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0016ef48  FUN_0016ef48 =====

void FUN_0016ef48(undefined8 param_1,undefined8 param_2,undefined8 *param_3,code *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_78 [24];
  code *local_60;
  
  FUN_0016f0d8(param_2,param_1);
  iVar1 = FUN_0016f1fc(param_2);
  while( true ) {
    if (iVar1 < 1) {
      (*param_4)(1,0x1a,*param_3,param_3,param_2,param_5);
      return;
    }
    iVar1 = FUN_0016f210(param_2,auStack_78);
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
      FUN_0016f250(param_2);
    }
    iVar1 = FUN_0016f1fc(param_2);
  }
  return;
}


// ===== 0016f03c  FUN_0016f03c =====

undefined8
FUN_0016f03c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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


// ===== 0016f0d8  FUN_0016f0d8 =====

undefined8 FUN_0016f0d8(undefined8 *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = &PTR_FUN_001e77c8;
  param_1[1] = &DAT_001f5510;
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
  FUN_0016faa0(param_1,0);
  return 0;
}


// ===== 0016f180  FUN_0016f180 =====

undefined8 FUN_0016f180(long *param_1,undefined4 param_2,undefined8 *param_3)

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


// ===== 0016f1fc  FUN_0016f1fc =====

void FUN_0016f1fc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0016f20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,1);
  return;
}


// ===== 0016f210  FUN_0016f210 =====

undefined4 FUN_0016f210(long *param_1,long param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x48))();
  uVar1 = 0xffffe66b;
  if (*(long *)(param_2 + 8) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 0016f250  FUN_0016f250 =====

undefined8 FUN_0016f250(long *param_1)

{
  (**(code **)(*param_1 + 0x50))();
  return 0xffffe674;
}


// ===== 0016f278  FUN_0016f278 =====

char * FUN_0016f278(undefined8 param_1,uint *param_2,undefined8 *param_3,long *param_4,ulong param_5
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
      pcVar7 = (char *)FUN_0016f408(param_1,lVar8,param_4);
      if (pcVar7 != (char *)0x0) {
        return pcVar7;
      }
    }
    else if (*param_4 != lVar8) {
      return "CIE start does not match";
    }
    lVar8 = (long)puVar10 + uVar9;
    local_48 = puVar10 + 1;
    lVar3 = FUN_00171260(param_1,&local_48,lVar8,(char)param_4[3],0);
    lVar4 = FUN_00171260(param_1,&local_48,lVar8,*(byte *)(param_4 + 3) & 0xf,0);
    cVar1 = *(char *)((long)param_4 + 0x31);
    param_3[5] = 0;
    puVar10 = local_48;
    if (cVar1 != '\0') {
      lVar5 = FUN_001715ec(&local_48,lVar8);
      puVar2 = local_48;
      puVar10 = (uint *)((long)local_48 + lVar5);
      if ((*(byte *)((long)param_4 + 0x19) != 0xff) &&
         (lVar5 = FUN_00171260(param_1,&local_48,lVar8,*(byte *)((long)param_4 + 0x19) & 0xf,0),
         lVar5 != 0)) {
        local_48 = puVar2;
        uVar6 = FUN_00171260(param_1,&local_48,lVar8,*(undefined1 *)((long)param_4 + 0x19),0);
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


// ===== 0016f408  FUN_0016f408 =====

char * FUN_0016f408(undefined8 param_1,uint *param_2,long *param_3)

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
      uVar7 = FUN_001715ec(&local_48,pbVar1);
      uVar13 = 0;
      uVar14 = 0;
      *(undefined4 *)(param_3 + 5) = uVar7;
      puVar5 = PTR___sF_001f0f78;
      pbVar11 = local_48;
      pbVar15 = local_48;
      do {
        pbVar12 = pbVar11;
        if (pbVar15 == pbVar1) {
          fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
        uVar6 = FUN_001715ec(&local_48,pbVar1);
        *(undefined1 *)((long)param_3 + 0x32) = uVar6;
        bVar2 = *pbVar18;
      }
      if (bVar2 == 0x7a) {
        FUN_001715ec(&local_48,pbVar1);
LAB_0016f588:
        bVar2 = *pbVar18;
        if (bVar2 < 0x50) {
          if (bVar2 < 0x47) {
            if (bVar2 != 0x42) {
              if (bVar2 != 0) goto LAB_0016f628;
              goto LAB_0016f66c;
            }
            *(undefined1 *)((long)param_3 + 0x33) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_0016f588;
          }
          if (bVar2 == 0x47) {
            *(undefined1 *)((long)param_3 + 0x34) = 1;
            goto LAB_0016f628;
          }
          if (bVar2 == 0x4c) {
            pbVar18 = pbVar18 + 1;
            *(byte *)((long)param_3 + 0x19) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_0016f588;
          }
        }
        else if (bVar2 < 0x53) {
          if (bVar2 == 0x50) {
            bVar2 = *local_48;
            *(byte *)((long)param_3 + 0x1a) = bVar2;
            *(char *)((long)param_3 + 0x1b) = (char)(local_48 + 1) - (char)param_2;
            local_48 = local_48 + 1;
            lVar8 = FUN_00171260(param_1,&local_48,pbVar1,bVar2,0);
            param_3[4] = lVar8;
            pbVar18 = pbVar18 + 1;
            goto LAB_0016f588;
          }
          if (bVar2 == 0x52) {
            pbVar18 = pbVar18 + 1;
            *(byte *)(param_3 + 3) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_0016f588;
          }
        }
        else {
          if (bVar2 == 0x53) {
            *(undefined1 *)(param_3 + 6) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_0016f588;
          }
          if (bVar2 == 0x7a) {
            *(undefined1 *)((long)param_3 + 0x31) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_0016f588;
          }
        }
LAB_0016f628:
        pbVar18 = pbVar18 + 1;
        goto LAB_0016f588;
      }
LAB_0016f66c:
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


// ===== 0016f6d0  FUN_0016f6d0 =====

void FUN_0016f6d0(void)

{
  return;
}


// ===== 0016f6d8  FUN_0016f6d8 =====

void FUN_0016f6d8(void)

{
  return;
}


// ===== 0016f6e0  FUN_0016f6e0 =====

bool FUN_0016f6e0(undefined8 param_1,uint param_2)

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


// ===== 0016f724  FUN_0016f724 =====

undefined8 FUN_0016f724(long param_1,uint param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_001f0f78;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_0016f78c:
      return *(undefined8 *)(param_1 + 0x108);
    }
    if (param_2 == 0xffffffff) goto LAB_0016f780;
    if (param_2 == 0x1d) {
      return *(undefined8 *)(param_1 + 0xf8);
    }
  }
  else if ((int)param_2 < 0x20) {
    if (param_2 == 0x1e) {
      return *(undefined8 *)(param_1 + 0x100);
    }
    if (param_2 == 0x1f) goto LAB_0016f78c;
  }
  else {
    if (param_2 == 0x22) {
      return *(undefined8 *)(param_1 + 0x118);
    }
    if (param_2 == 0x20) {
LAB_0016f780:
      return *(undefined8 *)(param_1 + 0x110);
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8);
}


// ===== 0016f80c  FUN_0016f80c =====

void FUN_0016f80c(long param_1,uint param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_001f0f78;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_0016f874:
      *(undefined8 *)(param_1 + 0x108) = param_3;
      return;
    }
    if (param_2 == 0xffffffff) goto LAB_0016f868;
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
    if (param_2 == 0x1f) goto LAB_0016f874;
  }
  else {
    if (param_2 == 0x22) {
      *(undefined8 *)(param_1 + 0x118) = param_3;
      return;
    }
    if (param_2 == 0x20) {
LAB_0016f868:
      *(undefined8 *)(param_1 + 0x110) = param_3;
      return;
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),"libunwind: %s - %s\n","setRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8) = param_3;
  return;
}


// ===== 0016f8f4  FUN_0016f8f4 =====

bool FUN_0016f8f4(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffffffe0) == 0x40;
}


// ===== 0016f908  FUN_0016f908 =====

undefined1  [16] FUN_0016f908(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + (long)param_2 * 8 + -0xe0);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 0016f918  FUN_0016f918 =====

void FUN_0016f918(undefined8 param_1,long param_2,int param_3)

{
  *(undefined8 *)(param_2 + (long)param_3 * 8 + -0xe0) = param_1;
  return;
}


// ===== 0016f928  FUN_0016f928 =====

ulong FUN_0016f928(long *param_1,uint param_2)

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
    uVar3 = FUN_0016fe4c(lVar1,uVar4,param_1[0x4b],param_1 + 2,(long)param_1 + 0x269,param_2 & 1);
    iVar2 = (int)uVar3;
  }
  else {
    memset(auStack_240,0,0x210);
    uVar3 = FUN_0016fd2c(param_1,auStack_240);
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


// ===== 0016fa18  FUN_0016fa18 =====

void FUN_0016fa18(long param_1,undefined8 *param_2)

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


// ===== 0016fa5c  FUN_0016fa5c =====

void FUN_0016fa5c(long param_1)

{
  FUN_00172af4(param_1 + 0x10);
  return;
}


// ===== 0016fa68  FUN_0016fa68 =====

undefined1 FUN_0016fa68(long param_1)

{
  return *(undefined1 *)(param_1 + 0x269);
}


// ===== 0016fa74  FUN_0016fa74 =====

undefined8 FUN_0016fa74(long *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  return 0;
}


// ===== 0016faa0  FUN_0016faa0 =====

void FUN_0016faa0(long *param_1,ulong param_2)

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
  iVar1 = dl_iterate_phdr(FUN_00172444,&local_648);
  if (((iVar1 == 0) || (local_668 == 0)) ||
     (uVar4 = FUN_00172170(param_1,uVar7,auStack_678,0), (uVar4 & 1) == 0)) {
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_001f5514);
    for (puVar6 = PTR_DAT_001f54d8; puVar6 < PTR_DAT_001f54e0; puVar6 = puVar6 + 0x20) {
      if ((*(ulong *)(puVar6 + 8) <= uVar7) && (uVar7 < *(ulong *)(puVar6 + 0x10))) {
        lVar3 = *(long *)(puVar6 + 0x18);
        pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001f5514);
        if ((lVar3 != 0) &&
           (lVar3 = FUN_0016f278(param_1[1],lVar3,&local_6a8,local_6e0,0), lVar3 == 0)) {
          memset(&local_648,0,0x618);
          uVar7 = FUN_001702d4(param_1[1],&local_6a8,local_6e0,uVar7,4,&local_648);
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
        goto LAB_0016fc28;
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001f5514);
LAB_0016fc28:
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


// ===== 0016fd20  FUN_0016fd20 =====

void FUN_0016fd20(undefined8 param_1,undefined4 param_2)

{
  FUN_00172ac4(param_2);
  return;
}


// ===== 0016fd2c  FUN_0016fd2c =====

undefined8 FUN_0016fd2c(long param_1)

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


// ===== 0016fe4c  FUN_0016fe4c =====

undefined8
FUN_0016fe4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,
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
  
  lVar7 = FUN_0016f278(param_1,param_3,auStack_b0,auStack_e8,0);
  if (lVar7 == 0) {
    memset(auStack_700,0,0x618);
    uVar8 = FUN_001702d4(param_1,auStack_b0,auStack_e8,param_2,4,auStack_700);
    if ((uVar8 & 1) != 0) {
      uVar8 = FUN_00170f1c(param_1,auStack_700,param_4);
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
        puVar3 = PTR___sF_001f0f78;
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
              goto LAB_0017012c;
            }
            else {
              puVar13 = (undefined8 *)((long)param_4 + 0x108);
              if ((local_b6 != 0x22) &&
                 ((puVar13 = (undefined8 *)((long)param_4 + 0x100), local_b6 != 0x20 &&
                  (puVar13 = (undefined8 *)((long)param_4 + 0xf8), local_b6 != 0x1f)))) {
LAB_0017012c:
                if (0x1c < local_b6) {
                  fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),"libunwind: %s - %s\n","getRegister",
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
LAB_00170238:
                  fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),"libunwind: %s - %s\n",
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
              if (iVar2 != 6) goto LAB_00170238;
              puVar9 = (ulong *)FUN_001717b4(*(undefined8 *)(piVar15 + 2),param_1,param_4,uVar8);
              uVar18 = *puVar9;
            }
            local_a00[uVar12] = uVar18;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == local_b6) {
            uVar14 = FUN_00171050(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == 0x22) {
            uVar10 = FUN_00171050(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
          }
          else {
            if (0xffffffe0 < uVar16 - 0x40) {
              return 0xffffe672;
            }
            uVar11 = FUN_00171050(param_1,param_4,uVar8,piVar15);
            puVar3 = PTR___sF_001f0f78;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
            if ((int)uVar16 < 0x1f) {
              uVar5 = uVar11;
              if ((uVar16 != 0x1d) && (uVar5 = local_a00[0x3b], uVar6 = uVar11, uVar16 != 0x1e))
              goto LAB_00170180;
            }
            else {
              uVar18 = uVar11;
              if ((uVar16 != 0x1f) &&
                 ((uVar18 = local_a00[0x3d], uVar10 = uVar11, uVar16 != 0x22 &&
                  (uVar10 = local_a00[0x3f], uVar16 != 0x20)))) {
LAB_00170180:
                if (0x1c < uVar12) {
                  fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),"libunwind: %s - %s\n","setRegister",
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
            FUN_00171050(param_1,auStack_b20,uVar8,&local_80);
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


// ===== 001702d4  FUN_001702d4 =====

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_001702d4(undefined8 param_1,long *param_2,long *param_3,long param_4,int param_5,
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
LAB_00170358:
    lVar20 = lVar20 + 0x18;
    if (lVar20 == 0x30) {
      return 1;
    }
  }
  uVar17 = 0;
LAB_00170388:
  puVar18 = local_6c0;
  puVar5 = PTR___sF_001f0f78;
  pbVar10 = pbVar21 + 1;
  bVar3 = *pbVar21;
  apbStack_6a0[0xc0] = pbVar10;
  switch((ulong)bVar3) {
  case 0:
    goto code_r0x00170c5c;
  case 1:
    uVar17 = FUN_00171260(local_6c8,apbStack_6a0 + 0xc0,pbVar2,(char)param_3[3],0);
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 2:
    uVar9 = (uint)pbVar21[1];
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 2;
    goto LAB_00170810;
  case 3:
    uVar9 = (uint)*(ushort *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 3;
    goto LAB_00170810;
  case 4:
    uVar9 = *(uint *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 5;
LAB_00170810:
    uVar17 = uVar17 + iVar13 * uVar9;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 5:
    uVar19 = FUN_001715ec(apbStack_6a0 + 0xc0,pbVar2);
    lVar8 = FUN_001715ec(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended DWARF unwind, reg too big\n";
      __size = 0x46;
      __s = (FILE *)(PTR___sF_001f0f78 + 0x130);
      goto LAB_00170e0c;
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
LAB_001707ac:
    puVar12[6] = 2;
    *(long *)(puVar12 + 8) = lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 6:
    uVar19 = FUN_001715ec(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_restore_extended DWARF unwind, reg too big\n";
LAB_00170cfc:
      __s = (FILE *)(PTR___sF_001f0f78 + 0x130);
      __size = 0x47;
      goto LAB_00170e0c;
    }
    cVar4 = *(char *)(param_6 + uVar19 * 4 + 7);
joined_r0x00170c3c:
    if (cVar4 != '\0') {
      pbVar21 = apbStack_6a0[uVar19 * 2];
      *(byte **)(param_6 + uVar19 * 4 + 8) = apbStack_6a0[uVar19 * 2 + 1];
      *(byte **)(param_6 + uVar19 * 4 + 6) = pbVar21;
    }
    goto code_r0x00170c5c;
  case 7:
    uVar19 = FUN_001715ec(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_undefined DWARF unwind, reg too big\n";
LAB_00170e00:
      __s = (FILE *)(PTR___sF_001f0f78 + 0x130);
      __size = 0x40;
      goto LAB_00170e0c;
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
    uVar19 = FUN_001715ec(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_same_value DWARF unwind, reg too big\n";
LAB_00170de4:
      __s = (FILE *)(PTR___sF_001f0f78 + 0x130);
      __size = 0x41;
      goto LAB_00170e0c;
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
    uVar19 = FUN_001715ec(apbStack_6a0 + 0xc0,pbVar2);
    uVar14 = FUN_001715ec(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg too big\n";
      __size = 0x3f;
      __s = (FILE *)(PTR___sF_001f0f78 + 0x130);
      goto LAB_00170e0c;
    }
    if (0x5f < uVar14) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg2 too big\n";
      goto LAB_00170e00;
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
    uVar19 = FUN_001715ec(apbStack_6a0 + 0xc0,pbVar2);
    uVar7 = FUN_001715ec(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa DWARF unwind, reg too big\n";
      __size = 0x3e;
      __s = (FILE *)(PTR___sF_001f0f78 + 0x130);
      goto LAB_00170e0c;
    }
    *param_6 = (int)uVar19;
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xd:
    uVar19 = FUN_001715ec(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa_register DWARF unwind, reg too big\n";
      goto LAB_00170cfc;
    }
    *param_6 = (int)uVar19;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xe:
    uVar7 = FUN_001715ec(apbStack_6a0 + 0xc0,pbVar2);
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xf:
    *param_6 = 0;
    *(byte **)(param_6 + 2) = pbVar10;
    goto LAB_00170b90;
  case 0x10:
    uVar19 = FUN_001715ec(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_expression DWARF unwind, reg too big\n";
      goto LAB_00170de4;
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
LAB_00170b88:
    puVar12[6] = uVar7;
    *(byte **)(puVar12 + 8) = apbStack_6a0[0xc0];
LAB_00170b90:
    lVar8 = FUN_001715ec(apbStack_6a0 + 0xc0,pbVar2);
    apbStack_6a0[0xc0] = apbStack_6a0[0xc0] + lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x11:
    uVar19 = FUN_001715ec(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_001f0f78;
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended_sf DWARF unwind, reg too big\n";
      __size = 0x49;
      __s = (FILE *)(PTR___sF_001f0f78 + 0x130);
      goto LAB_00170e0c;
    }
    uVar14 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
LAB_00170b1c:
    puVar12[6] = uVar7;
    *(ulong *)(puVar12 + 8) = uVar11 * (long)iVar13;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x12:
    uVar14 = FUN_001715ec(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_001f0f78;
    uVar19 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      goto LAB_00170de4;
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
        fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
    uVar19 = FUN_001715ec(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),
              "libunwind: malformed DW_CFA_val_offset DWARF unwind, reg (%lu) out of range\n\n",
              uVar19);
      goto LAB_00170e14;
    }
    lVar8 = FUN_001715ec(apbStack_6a0 + 0xc0,pbVar2);
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
    uVar19 = FUN_001715ec(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_001f0f78;
    if (uVar19 < 0x60) {
      uVar14 = 0;
      uVar11 = 0;
      pbVar21 = apbStack_6a0[0xc0];
      pbVar10 = apbStack_6a0[0xc0];
      do {
        if (pbVar10 == pbVar2) {
          fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      goto LAB_00170b1c;
    }
    __ptr = "libunwind: malformed DW_CFA_val_offset_sf DWARF unwind, reg too big\n";
    __size = 0x44;
    __s = (FILE *)(PTR___sF_001f0f78 + 0x130);
    goto LAB_00170e0c;
  case 0x16:
    uVar19 = FUN_001715ec(apbStack_6a0 + 0xc0,pbVar2);
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
      goto LAB_00170b88;
    }
    __ptr = "libunwind: malformed DW_CFA_val_expression DWARF unwind, reg too big\n";
    __size = 0x45;
    __s = (FILE *)(PTR___sF_001f0f78 + 0x130);
    goto LAB_00170e0c;
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
        goto joined_r0x00170c3c;
      }
      if (bVar1 != 0x80) {
        return 0;
      }
      local_6dc = param_5;
      lVar8 = FUN_001715ec(apbStack_6a0 + 0xc0,pbVar2);
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
    if (param_5 != 4) goto code_r0x00170c5c;
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
    uVar7 = FUN_001715ec(apbStack_6a0 + 0xc0,pbVar2);
    param_6[4] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x2f:
    uVar19 = FUN_001715ec(apbStack_6a0 + 0xc0,pbVar2);
    if (uVar19 < 0x60) {
      lVar8 = FUN_001715ec(apbStack_6a0 + 0xc0,pbVar2);
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
      goto LAB_001707ac;
    }
    __ptr = "libunwind: malformed DW_CFA_GNU_negative_offset_extended DWARF unwind, reg too big\n";
    __size = 0x53;
    __s = (FILE *)(PTR___sF_001f0f78 + 0x130);
LAB_00170e0c:
    fwrite(__ptr,__size,1,__s);
LAB_00170e14:
    fflush((FILE *)(PTR___sF_001f0f78 + 0x130));
    return 0;
  }
joined_r0x00170744:
  if ((pbVar2 <= pbVar21) || (uVar16 <= uVar17)) goto LAB_00170358;
  goto LAB_00170388;
code_r0x00170c5c:
  pbVar21 = apbStack_6a0[0xc0];
  goto joined_r0x00170744;
}


// ===== 00170f1c  FUN_00170f1c =====

long FUN_00170f1c(undefined8 param_1,uint *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR___sF_001f0f78;
  uVar1 = *param_2;
  if ((int)uVar1 < 0x1e) {
    if ((int)uVar1 < 0) {
      if (uVar1 == 0xfffffffe) {
LAB_00170f5c:
        return *(long *)(param_3 + 0xf8) + (long)(int)param_2[1];
      }
      if (uVar1 == 0xffffffff) goto LAB_00170fa0;
    }
    else {
      if (uVar1 == 0) {
        lVar3 = FUN_001717b4(*(undefined8 *)(param_2 + 2),param_1,param_3,0);
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
    if (uVar1 == 0x1f) goto LAB_00170f5c;
  }
  else {
    if (uVar1 == 0x22) {
      return *(long *)(param_3 + 0x108) + (long)(int)param_2[1];
    }
    if (uVar1 == 0x20) {
LAB_00170fa0:
      return *(long *)(param_3 + 0x100) + (long)(int)param_2[1];
    }
  }
  if (0x1c < uVar1) {
    fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(long *)(param_3 + (ulong)uVar1 * 8) + (long)(int)param_2[1];
}


// ===== 00171050  FUN_00171050 =====

undefined8 FUN_00171050(undefined8 param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  puVar2 = PTR___sF_001f0f78;
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
LAB_0017118c:
          return *(undefined8 *)(param_2 + 0xf8);
        }
        if (uVar5 == 0xffffffff) goto LAB_00171174;
        if (uVar5 == 0x1d) {
          return *(undefined8 *)(param_2 + 0xe8);
        }
      }
      else if ((int)uVar5 < 0x20) {
        if (uVar5 == 0x1e) {
          return *(undefined8 *)(param_2 + 0xf0);
        }
        if (uVar5 == 0x1f) goto LAB_0017118c;
      }
      else {
        if (uVar5 == 0x22) {
          return *(undefined8 *)(param_2 + 0x108);
        }
        if (uVar5 == 0x20) {
LAB_00171174:
          return *(undefined8 *)(param_2 + 0x100);
        }
      }
      if (0x1c < uVar5) {
        fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),"libunwind: %s - %s\n","getRegister",
                "unsupported arm64 register");
        fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      return *(undefined8 *)(param_2 + (*(ulong *)(param_4 + 2) & 0xffffffff) * 8);
    }
    if (iVar1 == 6) {
      puVar4 = (undefined8 *)FUN_001717b4(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return *puVar4;
    }
    if (iVar1 == 7) {
      uVar3 = FUN_001717b4(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return uVar3;
    }
  }
  fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),"libunwind: %s - %s\n","getSavedRegister",
          "unsupported restore location for register");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00171260  FUN_00171260 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00171260(undefined8 param_1,long *param_2,ulong *param_3,uint param_4,long param_5)

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
  
  puVar3 = PTR___sF_001f0f78;
  uVar1 = param_4 & 0xf;
  puVar10 = (ulong *)*param_2;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if ((param_4 & 0xf) == 0) goto LAB_001713ac;
      if (uVar1 != 1) {
LAB_001715b8:
        fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "unknown pointer encoding");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar4 = (undefined8 *)FUN_001715ec(param_2,param_3);
      puVar3 = PTR___sF_001f0f78;
    }
    else if (uVar1 == 2) {
      puVar4 = (undefined8 *)(ulong)(ushort)*puVar10;
      *param_2 = (long)puVar10 + 2;
      puVar3 = PTR___sF_001f0f78;
    }
    else {
      if (uVar1 != 3) goto LAB_001715b8;
      puVar4 = (undefined8 *)(ulong)(uint)*puVar10;
      *param_2 = (long)((long)puVar10 + 4);
      puVar3 = PTR___sF_001f0f78;
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 4) {
LAB_001713ac:
      puVar4 = (undefined8 *)*puVar10;
      *param_2 = (long)(puVar10 + 1);
      puVar3 = PTR___sF_001f0f78;
    }
    else {
      if (uVar1 != 9) goto LAB_001715b8;
      uVar7 = 0;
      uVar5 = 0;
      puVar6 = puVar10;
      puVar9 = puVar10;
      do {
        if (puVar9 == param_3) {
          fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      puVar3 = PTR___sF_001f0f78;
    }
  }
  else if (uVar1 == 10) {
    puVar4 = (undefined8 *)(long)(short)*puVar10;
    *param_2 = (long)puVar10 + 2;
    puVar3 = PTR___sF_001f0f78;
  }
  else {
    if (uVar1 != 0xb) {
      if (uVar1 != 0xc) goto LAB_001715b8;
      goto LAB_001713ac;
    }
    puVar4 = (undefined8 *)(long)(int)(uint)*puVar10;
    *param_2 = (long)((long)puVar10 + 4);
    puVar3 = PTR___sF_001f0f78;
  }
  uVar1 = (param_4 & 0xff) >> 4 & 7;
  PTR___sF_001f0f78 = puVar3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      if (uVar1 != 1) goto LAB_00171584;
      puVar4 = (undefined8 *)((long)puVar4 + (long)puVar10);
    }
LAB_00171438:
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
      goto LAB_00171438;
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
LAB_00171584:
  fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP","unknown pointer encoding");
  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 001715ec  FUN_001715ec =====

ulong FUN_001715ec(long *param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  puVar2 = PTR___sF_001f0f78;
  pbVar4 = (byte *)*param_1;
  if (pbVar4 != param_2) {
    pbVar5 = pbVar4 + 1;
    uVar3 = (ulong)*pbVar4 & 0x7f;
    if (-1 < (char)*pbVar4) {
LAB_0017161c:
      *param_1 = (long)pbVar5;
      return uVar3;
    }
    if (pbVar5 != param_2) {
      uVar3 = uVar3 | (ulong)((int)(char)pbVar4[1] & 0x7f) << 7;
      pbVar5 = pbVar4 + 2;
      if (-1 < (char)pbVar4[1]) goto LAB_0017161c;
      if (pbVar5 != param_2) {
        uVar3 = uVar3 | (ulong)((int)(char)pbVar4[2] & 0x7f) << 0xe;
        pbVar5 = pbVar4 + 3;
        if (-1 < (char)pbVar4[2]) goto LAB_0017161c;
        if (pbVar5 != param_2) {
          uVar3 = uVar3 | (ulong)((int)(char)pbVar4[3] & 0x7f) << 0x15;
          pbVar5 = pbVar4 + 4;
          if (-1 < (char)pbVar4[3]) goto LAB_0017161c;
          if (pbVar5 != param_2) {
            uVar3 = uVar3 | (ulong)((int)(char)pbVar4[4] & 0x7f) << 0x1c;
            pbVar5 = pbVar4 + 5;
            if (-1 < (char)pbVar4[4]) goto LAB_0017161c;
            if (pbVar5 != param_2) {
              uVar3 = uVar3 | (ulong)((int)(char)pbVar4[5] & 0x7f) << 0x23;
              pbVar5 = pbVar4 + 6;
              if (-1 < (char)pbVar4[5]) goto LAB_0017161c;
              if (pbVar5 != param_2) {
                uVar3 = uVar3 | (ulong)((int)(char)pbVar4[6] & 0x7f) << 0x2a;
                pbVar5 = pbVar4 + 7;
                if (-1 < (char)pbVar4[6]) goto LAB_0017161c;
                if (pbVar5 != param_2) {
                  uVar3 = uVar3 | (ulong)((int)(char)pbVar4[7] & 0x7f) << 0x31;
                  pbVar5 = pbVar4 + 8;
                  if (-1 < (char)pbVar4[7]) goto LAB_0017161c;
                  if (pbVar5 != param_2) {
                    uVar3 = uVar3 | (ulong)((int)(char)pbVar4[8] & 0x7f) << 0x38;
                    pbVar5 = pbVar4 + 9;
                    if (-1 < (char)pbVar4[8]) goto LAB_0017161c;
                    if (pbVar5 != param_2) {
                      bVar1 = *pbVar5;
                      if ((bVar1 & 0x7e) == 0) {
                        if (-1 < (char)bVar1) {
                          *param_1 = (long)(pbVar4 + 10);
                          return uVar3 | (ulong)bVar1 << 0x3f;
                        }
                        if (pbVar4 + 10 == param_2) goto LAB_0017174c;
                      }
                      fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),"libunwind: %s - %s\n",
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
LAB_0017174c:
  fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),"libunwind: %s - %s\n","getULEB128",
          "truncated uleb128 expression");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 001717b4  FUN_001717b4 =====

ulong FUN_001717b4(byte *param_1,undefined8 param_2,long param_3,ulong param_4)

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
  ulong auStack_380 [99];
  byte *local_68;
  
  local_68 = param_1;
  lVar11 = FUN_001715ec(&local_68,param_1 + 0x14);
  auStack_380[0] = param_4;
  pbVar6 = local_68 + lVar11;
  if (local_68 < pbVar6) {
    puVar1 = (ulong *)(param_3 + 0xf0);
    puVar2 = (ulong *)(param_3 + 0xe8);
    puVar3 = (ulong *)(param_3 + 0x108);
    puVar4 = (ulong *)(param_3 + 0xf8);
    puVar19 = auStack_380;
    puVar5 = (ulong *)(param_3 + 0x100);
    pbVar18 = local_68;
    do {
      puVar9 = PTR___sF_001f0f78;
      pbVar13 = pbVar18 + 1;
      local_68 = pbVar13;
      bVar8 = *pbVar18;
      uVar10 = (uint)bVar8;
      if (0x91 < uVar10 - 3) {
code_r0x00172030:
        fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
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
        goto LAB_00171c9c;
      case 4:
      case 5:
      case 7:
        goto code_r0x00172030;
      case 6:
        puVar14 = (ulong *)*puVar19;
LAB_00171c2c:
        *puVar19 = *puVar14;
        goto LAB_00171838;
      case 8:
        uVar16 = (ulong)pbVar18[1];
        goto LAB_00171c00;
      case 9:
        uVar16 = (ulong)(char)pbVar18[1];
LAB_00171c00:
        local_68 = pbVar18 + 2;
        goto LAB_00171c9c;
      case 10:
        uVar16 = (ulong)*(ushort *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_00171c9c;
      case 0xb:
        uVar16 = (ulong)*(short *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_00171c9c;
      case 0xc:
        uVar16 = (ulong)*(uint *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_00171c9c;
      case 0xd:
        uVar16 = (ulong)*(int *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_00171c9c;
      case 0x10:
        uVar16 = FUN_001715ec(&local_68,pbVar6);
        puVar19 = puVar19 + 1;
        *puVar19 = uVar16;
        goto LAB_00171838;
      case 0x11:
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = pbVar13;
        do {
          if (pbVar18 == pbVar6) {
            fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
        goto LAB_00171838;
      case 0x12:
        uVar16 = *puVar19;
        goto LAB_00171834;
      case 0x13:
        puVar19 = puVar19 + -1;
        goto LAB_00171838;
      case 0x14:
        uVar16 = puVar19[-1];
        goto LAB_00171834;
      case 0x15:
        local_68 = pbVar18 + 2;
        uVar16 = puVar19[-(ulong)pbVar18[1]];
LAB_00171c9c:
LAB_00171834:
        puVar19[1] = uVar16;
        puVar19 = puVar19 + 1;
        goto LAB_00171838;
      case 0x16:
        auVar20 = NEON_ext(*(undefined1 (*) [16])(puVar19 + -1),*(undefined1 (*) [16])(puVar19 + -1)
                           ,8,1);
        *puVar19 = auVar20._8_8_;
        puVar19[-1] = auVar20._0_8_;
        goto LAB_00171838;
      case 0x17:
        uVar16 = *puVar19;
        *puVar19 = SUB168(*(undefined1 (*) [16])(puVar19 + -2),8);
        puVar19[-1] = SUB168(*(undefined1 (*) [16])(puVar19 + -2),0);
        puVar19[-2] = uVar16;
        goto LAB_00171838;
      case 0x18:
        puVar14 = (ulong *)*puVar19;
        puVar19 = puVar19 + -1;
        *puVar19 = *puVar14;
        goto LAB_00171838;
      case 0x19:
        uVar16 = *puVar19;
        if ((long)uVar16 < 0) goto LAB_00171dd4;
        goto LAB_00171838;
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
LAB_00171dd4:
        *puVar19 = -uVar16;
        goto LAB_00171838;
      case 0x20:
        *puVar19 = ~*puVar19;
        goto LAB_00171838;
      case 0x21:
        uVar16 = puVar19[-1] | *puVar19;
        break;
      case 0x22:
        uVar16 = puVar19[-1] + *puVar19;
        break;
      case 0x23:
        lVar11 = FUN_001715ec(&local_68,pbVar6);
        *puVar19 = *puVar19 + lVar11;
        goto LAB_00171838;
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
        goto LAB_00171838;
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
        goto LAB_00171838;
      default:
        uVar16 = (ulong)(uVar15 - 0x30);
        goto LAB_00171834;
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
        goto LAB_00171830;
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
            fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
             (puVar14 = puVar2, bVar8 != 0x8d)) goto LAB_00171970;
        }
        else if (bVar8 < 0x90) {
          puVar14 = puVar1;
          if ((bVar8 != 0x8e) && (puVar14 = puVar4, uVar15 != 0x8f)) {
LAB_00171970:
            if (0x1c < uVar10 - 0x70) {
              fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((bVar8 != 0x90) && (puVar14 = puVar3, bVar8 != 0x92)) goto LAB_00171970;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_00171834;
      case 0x90:
        uVar10 = FUN_001715ec(&local_68,pbVar6);
        puVar9 = PTR___sF_001f0f78;
        if ((int)uVar10 < 0x1e) {
          if (((uVar10 != 0xfffffffe) && (puVar14 = puVar5, uVar10 != 0xffffffff)) &&
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_00171ed4;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_00171ed4:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_00171ed4;
        }
LAB_00171830:
        uVar16 = *puVar14;
        goto LAB_00171834;
      case 0x91:
        fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_fbreg not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x92:
        uVar10 = FUN_001715ec(&local_68,pbVar6);
        puVar9 = PTR___sF_001f0f78;
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = local_68;
        pbVar13 = local_68;
        do {
          if (pbVar13 == pbVar6) {
            fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_00171efc;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_00171efc:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_00171efc;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_00171834;
      case 0x93:
        fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
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
LAB_001720d4:
              fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),"libunwind: %s - %s\n",
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
            if (bVar8 != 8) goto LAB_001720d4;
            goto LAB_00171c2c;
          }
          *puVar19 = (ulong)(uint)*puVar14;
        }
        goto LAB_00171838;
      }
      puVar19[-1] = uVar16;
      puVar19 = puVar19 + -1;
LAB_00171838:
      pbVar18 = local_68;
    } while (local_68 < pbVar6);
    param_4 = *puVar19;
  }
  return param_4;
}


// ===== 00172170  FUN_00172170 =====

undefined8 FUN_00172170(long param_1,ulong param_2,long *param_3,uint param_4)

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
      (uVar3 = FUN_00172698(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],
                            param_3[2] + (ulong)param_4,&local_6b0,auStack_6e8), (uVar3 & 1) == 0))
     && ((param_3[4] == 0 ||
         (uVar3 = FUN_00172860(*(undefined8 *)(param_1 + 8),param_2,param_3[4],(int)param_3[5],
                               &local_6b0,auStack_6e8), (uVar3 & 1) == 0)))) {
    lVar5 = *param_3;
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_001f5514);
    if (PTR_DAT_001f54d8 < PTR_DAT_001f54e0) {
      plVar4 = (long *)PTR_DAT_001f54d8;
      if (lVar5 == -1) {
        do {
          if (((ulong)plVar4[1] <= param_2) && (param_2 < (ulong)plVar4[2])) goto LAB_00172278;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_001f54e0);
      }
      else {
        do {
          if (((*plVar4 == lVar5) && ((ulong)plVar4[1] <= param_2)) && (param_2 < (ulong)plVar4[2]))
          goto LAB_00172278;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_001f54e0);
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001f5514);
    goto LAB_001722c0;
  }
LAB_001722e0:
  bVar2 = 1;
LAB_001722e4:
  lVar5 = *param_3;
  memset(auStack_680,0,0x618);
  uVar3 = FUN_001702d4(*(undefined8 *)(param_1 + 8),&local_6b0,auStack_6e8,param_2,4,auStack_680);
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
      pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_001f5514);
      __src = PTR_DAT_001f54d8;
      if (PTR_DAT_001f54e8 <= PTR_DAT_001f54e0) {
        __n = (long)PTR_DAT_001f54e8 - (long)PTR_DAT_001f54d8;
        __dest = (undefined *)malloc(__n * 4);
        memcpy(__dest,__src,__n);
        if ((undefined8 *)__src != &DAT_001f5550) {
          free(__src);
        }
        PTR_DAT_001f54e8 = __dest + ((long)__n >> 3) * 0x20;
        PTR_DAT_001f54e0 = __dest + __n;
        PTR_DAT_001f54d8 = __dest;
      }
      *(long *)PTR_DAT_001f54e0 = lVar5;
      *(long *)((long)PTR_DAT_001f54e0 + 8) = local_698;
      *(long *)((long)PTR_DAT_001f54e0 + 0x18) = local_6b0;
      *(long *)((long)PTR_DAT_001f54e0 + 0x10) = local_690;
      PTR_DAT_001f54e0 = (undefined *)((long)PTR_DAT_001f54e0 + 0x20);
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001f5514);
      return 1;
    }
    return 1;
  }
  return 1;
LAB_00172278:
  lVar5 = plVar4[3];
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001f5514);
  if ((lVar5 != 0) &&
     (uVar3 = FUN_00172698(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],lVar5,
                           &local_6b0,auStack_6e8), (uVar3 & 1) != 0)) {
    bVar2 = 0;
    goto LAB_001722e4;
  }
LAB_001722c0:
  uVar3 = FUN_00172698(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],0,&local_6b0,
                       auStack_6e8);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  goto LAB_001722e0;
}


// ===== 00172444  FUN_00172444 =====

undefined8 FUN_00172444(ulong *param_1,undefined8 param_2,undefined8 *param_3)

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
              uVar5 = FUN_00172578(uVar2,lVar8,lVar9 + lVar8,local_70);
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


// ===== 00172578  FUN_00172578 =====

undefined8 FUN_00172578(undefined8 param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte *local_28;
  
  puVar3 = PTR___sF_001f0f78;
  if ((ulong)((long)param_3 - (long)param_2) < 4) {
    if (param_3 == param_2) {
      return 0;
    }
    fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),
            "libunwind: unsupported .eh_frame_hdr at %lx: need at least 4 bytes of data but only got %zd\n"
            ,param_2);
  }
  else {
    if (*param_2 == 1) {
      local_28 = param_2 + 4;
      bVar1 = param_2[2];
      bVar2 = param_2[1];
      *(byte *)(param_4 + 3) = param_2[3];
      uVar4 = FUN_00171260(param_1,&local_28,param_3,bVar2,param_2);
      *param_4 = uVar4;
      if (bVar1 == 0xff) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00171260(param_1,&local_28,param_3,bVar1,param_2);
      }
      param_4[1] = uVar4;
      param_4[2] = local_28;
      return 1;
    }
    fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),
            "libunwind: unsupported .eh_frame_hdr version: %u at %lx\n",(ulong)(uint)*param_2,
            param_2);
  }
  fflush((FILE *)(puVar3 + 0x130));
  return 0;
}


// ===== 00172698  FUN_00172698 =====

undefined8
FUN_00172698(undefined8 param_1,ulong param_2,uint *param_3,long param_4,uint *param_5,
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
        (puVar7 < puVar9)) && (lVar4 = FUN_0016f408(param_1,puVar7,param_7), lVar4 == 0)) {
      local_68 = local_68 + 1;
      uVar8 = FUN_00171260(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x18),0);
      lVar4 = FUN_00171260(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x18) & 0xf,0);
      if ((uVar8 < param_2) && (param_2 <= lVar4 + uVar8)) {
        cVar2 = *(char *)(param_7 + 0x31);
        param_6[5] = 0;
        puVar9 = local_68;
        if (cVar2 != '\0') {
          lVar5 = FUN_001715ec(&local_68,puVar1);
          puVar7 = local_68;
          puVar9 = (uint *)((long)local_68 + lVar5);
          if ((*(byte *)(param_7 + 0x19) != 0xff) &&
             (lVar5 = FUN_00171260(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x19) & 0xf,0),
             lVar5 != 0)) {
            local_68 = puVar7;
            uVar6 = FUN_00171260(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x19),0);
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


// ===== 00172860  FUN_00172860 =====

undefined8
FUN_00172860(undefined8 param_1,ulong param_2,long param_3,ulong param_4,long param_5,
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
  uVar1 = FUN_00172578(param_1,param_3,lVar4,auStack_80);
  if (((uVar1 & 1) != 0) && (local_78 != 0)) {
    lVar2 = FUN_001729c8(local_68);
    lVar7 = 0;
    do {
      if (local_78 < 2) {
        lVar8 = lVar7 * lVar2;
        break;
      }
      uVar6 = local_78 >> 1;
      lVar8 = (uVar6 + lVar7) * lVar2;
      local_88 = local_70 + lVar8;
      uVar1 = FUN_00171260(param_1,&local_88,lVar4,local_68,param_3);
      uVar5 = local_78 - uVar6;
      local_78 = uVar6;
      if (uVar1 < param_2) {
        local_78 = uVar5;
        lVar7 = uVar6 + lVar7;
      }
    } while (uVar1 != param_2);
    local_88 = local_70 + lVar8;
    FUN_00171260(param_1,&local_88,lVar4,local_68,param_3);
    uVar3 = FUN_00171260(param_1,&local_88,lVar4,local_68,param_3);
    lVar4 = FUN_0016f278(param_1,uVar3,param_5,param_6,0);
    if (((lVar4 == 0) && (*(ulong *)(param_5 + 0x18) <= param_2)) &&
       (param_2 < *(ulong *)(param_5 + 0x20))) {
      return 1;
    }
  }
  return 0;
}


// ===== 001729c8  FUN_001729c8 =====

undefined8 FUN_001729c8(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_001f0f78;
  param_1 = param_1 & 0xf;
  if (param_1 < 9) {
    if (param_1 < 3) {
      if (param_1 == 2) {
        return 4;
      }
      if (param_1 == 1) {
LAB_00172a90:
        fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
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
    if (param_1 == 9) goto LAB_00172a90;
  }
  else {
    if (param_1 == 0xc) {
      return 0x10;
    }
    if (param_1 == 0xb) {
      return 8;
    }
  }
  fprintf((FILE *)(PTR___sF_001f0f78 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
          "Unknown DWARF encoding for search table.");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00172ac4  FUN_00172ac4 =====

char * FUN_00172ac4(int param_1)

{
  if (param_1 + 2U < 0x62) {
    return &DAT_00140c58 + *(int *)(&DAT_00140c58 + (ulong)(param_1 + 2U) * 4);
  }
  return "unknown register";
}


// ===== 00172af4  FUN_00172af4 =====

undefined1  [16] FUN_00172af4(undefined1 (*param_1) [16])

{
  return *param_1;
}


// ===== 00172b84  facebook::react::RNSFormSheetHostState::getDynamic =====

/* facebook::react::RNSFormSheetHostState::getDynamic() const */

void facebook::react::RNSFormSheetHostState::getDynamic(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  float *in_x0;
  long lVar4;
  undefined4 *in_x8;
  ulong uVar5;
  undefined1 uStack_151;
  undefined4 *local_150;
  undefined4 local_148 [2];
  double local_140;
  undefined4 local_118 [2];
  undefined1 local_110;
  undefined7 local_10f;
  char cStack_108;
  undefined3 uStack_107;
  undefined1 local_104;
  undefined4 local_e8 [2];
  double local_e0;
  undefined4 local_b8 [2];
  undefined1 local_b0;
  char local_af [8];
  undefined2 local_a7;
  undefined1 local_a5;
  int local_88 [2];
  long local_80;
  ulong uStack_78;
  long local_70;
  long lStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_a7 = 0x6874;
  local_b0 = 0x14;
  local_e0 = (double)*in_x0;
  local_b8[0] = 6;
  local_a5 = 0;
  local_af = (char  [8])s_frameWidth_0013ee38._0_8_;
  local_e8[0] = 3;
                    /* try { // try from 00172bf8 to 00172c07 has its CatchHandler @ 00172d58 */
  FUN_00172da8(local_88,local_b8,local_e8);
  local_110 = 0x16;
  local_140 = (double)in_x0[1];
  local_118[0] = 6;
  local_10f = (undefined7)s_frameHeight_0013ed04._0_8_;
  _cStack_108 = CONCAT31(0x746867,SUB81(s_frameHeight_0013ed04._0_8_,7));
  local_104 = 0;
  local_148[0] = 3;
  if (local_88[0] == 5) {
    local_150 = local_118;
                    /* try { // try from 00172c5c to 00172d57 has its CatchHandler @ 00172d60 */
    lVar4 = FUN_00173118(&local_80,local_118,PTR_piecewise_construct_001f09a8,&local_150,&uStack_151
                        );
    folly::dynamic::operator=((dynamic *)(lVar4 + 0x40),(dynamic *)local_148);
    uVar3 = uStack_78;
    lVar4 = local_80;
    *in_x8 = 5;
    local_80 = 0;
    uStack_78 = 0;
    *(long *)(in_x8 + 6) = local_70;
    *(long *)(in_x8 + 2) = lVar4;
    *(ulong *)(in_x8 + 4) = uVar3;
    *(long *)(in_x8 + 8) = lStack_68;
    in_x8[10] = local_60;
    if (lStack_68 != 0) {
      uVar5 = *(ulong *)(local_70 + 8);
      if ((uVar3 & uVar3 - 1) == 0) {
        uVar5 = uVar5 & uVar3 - 1;
      }
      else if (uVar3 <= uVar5) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar5 / uVar3;
        }
        uVar5 = uVar5 - uVar1 * uVar3;
      }
      *(undefined4 **)(lVar4 + uVar5 * 8) = in_x8 + 6;
      local_70 = 0;
      lStack_68 = 0;
    }
    folly::dynamic::destroy();
    folly::dynamic::destroy();
    folly::dynamic::destroy();
    folly::dynamic::destroy();
    folly::dynamic::destroy();
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00172da8  FUN_00172da8 =====

void FUN_00172da8(undefined4 *param_1,dynamic *param_2,dynamic *param_3)

{
  long lVar1;
  long lVar2;
  undefined1 uStack_a1;
  dynamic *local_a0;
  dynamic adStack_98 [48];
  dynamic adStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  folly::dynamic::dynamic(adStack_68,param_2);
  folly::dynamic::dynamic(adStack_98,param_3);
  *(undefined8 *)(param_1 + 10) = 0;
  *param_1 = 5;
  param_1[10] = 0x3f800000;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
                    /* try { // try from 00172e14 to 00172e2b has its CatchHandler @ 00172e6c */
  local_a0 = adStack_68;
  lVar2 = FUN_00173118(param_1 + 2,adStack_68,PTR_piecewise_construct_001f09a8,&local_a0,&uStack_a1)
  ;
  folly::dynamic::operator=((dynamic *)(lVar2 + 0x40),adStack_98);
  folly::dynamic::destroy();
  folly::dynamic::destroy();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00172ea4  FUN_00172ea4 =====

void FUN_00172ea4(undefined8 param_1,undefined4 param_2)

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
                    /* try { // try from 00172ed0 to 00172edf has its CatchHandler @ 00172f08 */
  folly::TypeError::TypeError(aTStack_38,local_50,param_2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00172ef0 to 00172ef7 has its CatchHandler @ 00172ef8 */
    uVar2 = FUN_00172f38(aTStack_38);
                    /* catch() { ... } // from try @ 00172ef0 with catch @ 00172ef8 */
    std::runtime_error::~runtime_error((runtime_error *)aTStack_38);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_0016eec4(uVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00172f38  FUN_00172f38 =====

void FUN_00172f38(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
  FUN_00173000(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_typeinfo_001f09a0,PTR__runtime_error_001f09b0);
}


// ===== 00172f74  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc =====

void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc
               (long *param_1,char *param_2)

{
  size_t __n;
  void *__dest;
  
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_00173050(param_1);
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00172fe4;
  }
  else {
    __dest = operator_new((__n | 0xf) + 1);
    param_1[1] = __n;
    param_1[2] = (long)__dest;
    *param_1 = (__n | 0xf) + 2;
  }
  memmove(__dest,param_2,__n);
LAB_00172fe4:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


// ===== 00173000  FUN_00173000 =====

void FUN_00173000(runtime_error *param_1,runtime_error *param_2)

{
  std::runtime_error::runtime_error(param_1,param_2);
  *(undefined ***)param_1 = &PTR__runtime_error_001e7868;
  return;
}


// ===== 0017302c  FUN_0017302c =====

void FUN_0017302c(runtime_error *param_1)

{
  std::runtime_error::~runtime_error(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00173050  FUN_00173050 =====

void FUN_00173050(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00173064("basic_string");
}


// ===== 00173064  FUN_00173064 =====

void FUN_00173064(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 00173080 to 00173087 has its CatchHandler @ 001730a0 */
  FUN_001730b4(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_typeinfo_001f09d0,PTR__length_error_001f09b8);
}


// ===== 001730b4  FUN_001730b4 =====

void FUN_001730b4(logic_error *param_1,char *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  *(undefined **)param_1 = PTR_vtable_001f09d8 + 0x10;
  return;
}


// ===== 001730e4  FUN_001730e4 =====

void FUN_001730e4(void)

{
  bad_array_new_length *this;
  
  this = (bad_array_new_length *)__cxa_allocate_exception(8);
  std::bad_array_new_length::bad_array_new_length(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_typeinfo_001f09e0,PTR__bad_array_new_length_001f09c0);
}


// ===== 00173118  FUN_00173118 =====

long * FUN_00173118(long *param_1,dynamic *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  dynamic *pdVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  ulong unaff_x26;
  undefined2 uVar15;
  undefined8 uVar16;
  float fVar17;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  uVar4 = folly::dynamic::hash();
  uVar14 = param_1[1];
  if (uVar14 != 0) {
    uVar16 = NEON_cnt(uVar14,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar12 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar12 < 2) {
      unaff_x26 = uVar14 - 1 & uVar4;
    }
    else {
      unaff_x26 = uVar4;
      if (uVar14 <= uVar4) {
        uVar8 = 0;
        if (uVar14 != 0) {
          uVar8 = uVar4 / uVar14;
        }
        unaff_x26 = uVar4 - uVar8 * uVar14;
      }
    }
    puVar7 = *(undefined8 **)(*param_1 + unaff_x26 * 8);
    if ((puVar7 != (undefined8 *)0x0) && (plVar13 = (long *)*puVar7, plVar13 != (long *)0x0)) {
      do {
        uVar8 = plVar13[1];
        if (uVar8 == uVar4) {
          uVar8 = folly::operator==((dynamic *)(plVar13 + 2),param_2);
          if ((uVar8 & 1) != 0) {
            uVar16 = 0;
            goto LAB_001733e8;
          }
        }
        else {
          if (uVar12 < 2) {
            uVar8 = uVar8 & uVar14 - 1;
          }
          else if (uVar14 <= uVar8) {
            uVar2 = 0;
            if (uVar14 != 0) {
              uVar2 = uVar8 / uVar14;
            }
            uVar8 = uVar8 - uVar2 * uVar14;
          }
          if (uVar8 != unaff_x26) break;
        }
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
  }
  plVar1 = param_1 + 2;
  plVar13 = (long *)operator_new(0x70);
  pdVar5 = (dynamic *)*param_4;
  *plVar13 = 0;
  plVar13[1] = uVar4;
  uVar8 = folly::dynamic::dynamic((dynamic *)(plVar13 + 2),pdVar5);
  lVar9 = param_1[3];
  fVar17 = *(float *)(param_1 + 4);
  *(undefined4 *)(plVar13 + 8) = 0;
  plVar13[9] = 0;
  if ((uVar14 == 0) || (fVar17 * (float)uVar14 < (float)(lVar9 + 1))) {
    if (uVar14 < 3) {
      uVar12 = 1;
    }
    else {
      uVar12 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar12 = uVar12 | uVar14 << 1;
    uVar14 = (ulong)((float)(lVar9 + 1) / fVar17);
    if (uVar12 <= uVar14) {
      uVar12 = uVar14;
    }
    if (uVar12 - 1 == 0) {
      uVar12 = 2;
    }
    else if ((uVar12 & uVar12 - 1) != 0) {
                    /* try { // try from 001732a8 to 00173333 has its CatchHandler @ 0017341c */
      uVar8 = std::__ndk1::__next_prime(uVar12);
      uVar12 = uVar8;
    }
    uVar14 = param_1[1];
    if (uVar14 < uVar12) {
LAB_001732c0:
      uVar8 = FUN_00173490(param_1,uVar12);
    }
    else if (uVar12 < uVar14) {
      uVar8 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar14 < 3) {
LAB_00173330:
        uVar8 = std::__ndk1::__next_prime(uVar8);
      }
      else {
        uVar16 = NEON_cnt(uVar14,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15)) goto LAB_00173330;
        if (1 < uVar8) {
          uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
        }
      }
      if (uVar12 <= uVar8) {
        uVar12 = uVar8;
      }
      if (uVar12 < uVar14) goto LAB_001732c0;
    }
    uVar14 = param_1[1];
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x26 = uVar14 - 1 & uVar4;
    }
    else {
      unaff_x26 = uVar4;
      if (uVar14 <= uVar4) {
        uVar12 = 0;
        if (uVar14 != 0) {
          uVar12 = uVar4 / uVar14;
        }
        unaff_x26 = uVar4 - uVar12 * uVar14;
      }
    }
  }
  lVar9 = *param_1;
  plVar10 = *(long **)(lVar9 + unaff_x26 * 8);
  if (plVar10 == (long *)0x0) {
    lVar11 = *plVar1;
    *plVar1 = (long)plVar13;
    *plVar13 = lVar11;
    *(long **)(lVar9 + unaff_x26 * 8) = plVar1;
    if (*plVar13 == 0) goto LAB_001733d8;
    uVar4 = *(ulong *)(*plVar13 + 8);
    if ((uVar14 & uVar14 - 1) == 0) {
      uVar4 = uVar4 & uVar14 - 1;
    }
    else if (uVar14 <= uVar4) {
      uVar12 = 0;
      if (uVar14 != 0) {
        uVar12 = uVar4 / uVar14;
      }
      uVar4 = uVar4 - uVar12 * uVar14;
    }
    plVar10 = (long *)(*param_1 + uVar4 * 8);
  }
  else {
    *plVar13 = *plVar10;
  }
  *plVar10 = (long)plVar13;
LAB_001733d8:
  uVar16 = 1;
  param_1[3] = param_1[3] + 1;
LAB_001733e8:
  if (*(long *)(lVar3 + 0x28) == lVar6) {
    return plVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8,uVar16);
}


// ===== 00173444  FUN_00173444 =====

void FUN_00173444(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    if (*(char *)(param_1 + 2) != '\0') {
      folly::dynamic::destroy();
      folly::dynamic::destroy();
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00173490  FUN_00173490 =====

void FUN_00173490(long *param_1,ulong param_2)

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
      FUN_001730e4();
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


// ===== 001735f0  FUN_001735f0 =====

long FUN_001735f0(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_001f5d50 == '\0') {
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


// ===== 00173620  _INIT_0 =====

void _INIT_0(void)

{
  uint uVar1;
  int iVar2;
  char acStack_6c [92];
  
  uVar1 = getauxval(0x10);
  if ((uVar1 >> 8 & 1) == 0) {
    DAT_001f5d50 = 0;
    return;
  }
  iVar2 = __system_property_get("ro.arch",acStack_6c);
  if (0 < iVar2) {
    iVar2 = strncmp(acStack_6c,"exynos9810",10);
    DAT_001f5d50 = iVar2 != 0;
    return;
  }
  DAT_001f5d50 = 1;
  return;
}


// ===== 001736b8  FUN_001736b8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_001736b8(ulong param_1,long param_2)

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
    DAT_001f5d58 = DAT_001f5d58 | 0x400;
  }
  uVar2 = (uint)uVar4;
  if ((uVar3 >> 4 & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x8000;
  }
  if ((uVar3 >> 0x1b & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 2;
  }
  if ((uVar2 >> 7 & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 6;
  }
  if ((~uVar3 & 0xc0000) == 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x20;
  }
  if ((uVar3 >> 0x14 & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x10;
  }
  if ((uVar3 >> 0x17 & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 8;
  }
  if ((uVar3 >> 9 & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x10100;
  }
  if ((uVar3 >> 0x18 & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x20000;
  }
  if ((uVar3 >> 0xc & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x40;
  }
  if ((uVar3 >> 0x1a & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x800000;
  }
  if ((uVar3 >> 3 & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x4000;
  }
  if ((uVar3 >> 5 & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x800;
  }
  if ((uVar3 >> 6 & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x1000;
  }
  if ((uVar3 >> 0xd & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x100000;
  }
  if ((uVar3 >> 0xe & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x200000;
  }
  if ((uVar3 >> 0x1d & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x400000000000;
  }
  if ((uVar3 >> 0x1c & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x2000000000000;
  }
  if ((uVar2 >> 0x12 & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x180000000000;
  }
  if ((uVar2 >> 0x16 & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x380000000000;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x2000000000;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x6000000000;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x8000000000;
  }
  if ((uVar2 >> 5 & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x10000000000;
  }
  if ((uVar2 >> 6 & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x20000000000;
  }
  if ((uVar4 & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x80000;
  }
  if ((uVar3 >> 8 & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x80;
  }
  if ((uVar2 >> 0x10 & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 1;
  }
  if ((uVar2 >> 0xd & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x4000000;
  }
  if ((uVar4 >> 0x20 & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x10000000;
  }
  if ((uVar4 >> 0x21 & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x100000000;
  }
  if ((uVar2 >> 0xf & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x2000000;
  }
  if ((uVar2 >> 8 & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x1000000;
  }
  if ((uVar2 >> 9 & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x200000000;
  }
  if ((uVar2 >> 10 & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x400000000;
  }
  if ((uVar2 >> 0xb & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x800000000;
  }
  if ((uVar2 >> 0x11 & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x4000000000000;
  }
  if ((uVar2 >> 0x15 & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x20000000;
  }
  if ((int)uVar2 < 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x40000000000000;
  }
  if ((uVar2 >> 0x17 & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x40000000000;
  }
  if ((uVar2 >> 0x18 & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x100000000000000;
  }
  if ((uVar2 >> 0x19 & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x80000000000000;
  }
  if ((uVar4 >> 0x2b & 1) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x800000000000000;
  }
  if ((uVar3 >> 0xb & 1) == 0) {
    if ((param_1 & 0x201) != 0) {
      DAT_001f5d58 = DAT_001f5d58 | 0x300;
    }
    if ((uVar4 & 1) != 0 || (param_1 & 0x10000) != 0) {
      DAT_001f5d58 = DAT_001f5d58 | 0x40000;
    }
    if ((param_1 & 0x4008000) != 0) {
      DAT_001f5d58 = DAT_001f5d58 | 0x400000;
    }
    if ((uVar4 & 0x100004000) != 0) {
      DAT_001f5d58 = DAT_001f5d58 | 0x8000000;
    }
    uVar5 = DAT_001f5d58 | (ulong)(uVar2 << 0x13) & 0x80000000;
    if ((uVar4 & 2) != 0 && (param_1 & 0x400000) != 0) {
      uVar5 = uVar5 | 0x1000000000;
    }
    uVar5 = uVar5 | (param_1 & 0x20000) >> 4;
    goto LAB_00173820;
  }
  uVar4 = id_aa64pfr1_el1;
  if ((uVar4 & 0xf00) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x80000000000;
  }
  if ((uVar4 & 0xf0) == 0x10) {
    DAT_001f5d58 = DAT_001f5d58 | 0x1000000000000;
    if ((uVar4 & 0xf000000) != 0x2000000) goto LAB_00173b10;
LAB_00173b64:
    DAT_001f5d58 = DAT_001f5d58 | 0x200000000000000;
    uVar4 = id_aa64pfr0_el1;
    uVar3 = (uint)uVar4;
  }
  else {
    if ((uVar4 & 0xf000000) == 0x2000000) goto LAB_00173b64;
LAB_00173b10:
    uVar4 = id_aa64pfr0_el1;
    uVar3 = (uint)uVar4;
  }
  if ((~uVar3 & 0xf0000) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x300;
  }
  if ((uVar4 & 0xf00000000) != 0) {
    uVar4 = UnkSytemRegRead(3,0,0,4,4);
    if ((uVar4 & 0xf) == 1) {
      DAT_001f5d58 = DAT_001f5d58 | 0x1000000000;
    }
    else if ((uVar4 & 0xf) == 0) {
      DAT_001f5d58 = DAT_001f5d58 | 0x40000000;
    }
    if ((uVar4 & 0xf00000) != 0) {
      DAT_001f5d58 = DAT_001f5d58 | 0x80000000;
    }
  }
  uVar4 = id_aa64isar0_el1;
  if ((uVar4 & 0xf00000000) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x2000;
  }
  uVar4 = id_aa64isar1_el1;
  uVar5 = uVar4 >> 0x14 & 0xf;
  if ((uVar4 & 0xf) != 0) {
    DAT_001f5d58 = DAT_001f5d58 | 0x40000;
  }
  if (uVar5 != 0) {
    if (uVar5 == 3) {
      DAT_001f5d58 = DAT_001f5d58 | 0x400000000400000;
    }
    else {
      DAT_001f5d58 = DAT_001f5d58 | 0x400000;
    }
  }
  uVar5 = DAT_001f5d58 | 0x800000000000;
  if ((uVar4 & 0xf0000000000) != 0x20000000000) {
    uVar5 = DAT_001f5d58;
  }
  if ((uVar4 & 0xf00000000000) != 0) {
    uVar5 = uVar5 | 0x8000000;
  }
  if (uVar4 >> 0x3c != 0) {
    if (uVar4 >> 0x3d == 0) {
      DAT_001f5d58 = uVar5 | 0x8008000000000000;
      return;
    }
    uVar1 = 0x38000000000000;
    if (uVar4 >> 0x3c < 3) {
      uVar1 = 0x18000000000000;
    }
    DAT_001f5d58 = uVar5 | uVar1 | 0x8000000000000000;
    return;
  }
LAB_00173820:
  DAT_001f5d58 = uVar5 | 0x8000000000000000;
  return;
}


// ===== 00173c54  _INIT_1 =====

void _INIT_1(void)

{
  int iVar1;
  ulong uVar2;
  char local_70 [8];
  ulong uStack_68;
  undefined8 local_60;
  
  if (DAT_001f5d58 != 0) {
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
    FUN_001736b8(uVar2 | 0x4000000000000000,local_70);
  }
  return;
}


// ===== 00173ce0  facebook::react::RNSModalScreenShadowNode::getContentOriginOffset =====

/* facebook::react::RNSModalScreenShadowNode::getContentOriginOffset(bool) const */

undefined4 facebook::react::RNSModalScreenShadowNode::getContentOriginOffset(bool param_1)

{
  return *(undefined4 *)(*(long *)(*(long *)((ulong)param_1 + 0x28) + 0x18) + 8);
}


// ===== 00173cf0  FUN_00173cf0 =====

void FUN_00173cf0(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_001f09e8 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_00173ffc(param_1 + 0x23);
  FUN_00173f00(param_1);
  return;
}


// ===== 00173da8  FUN_00173da8 =====

void FUN_00173da8(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_001f09e8 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_00173ffc(param_1 + 0x23);
  FUN_00173f00(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00173e68  FUN_00173e68 =====

void FUN_00173e68(long param_1)

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


// ===== 00173ed0  FUN_00173ed0 =====

bool FUN_00173ed0(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 00173ee8  FUN_00173ee8 =====

bool FUN_00173ee8(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 00173f00  FUN_00173f00 =====

void FUN_00173f00(NativeState *param_1)

{
  long lVar1;
  long *plVar2;
  
  *(undefined **)param_1 = PTR_vtable_001f09f0 + 0x10;
  if (*(long *)(param_1 + 0x60) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = *(long **)(param_1 + 0x48);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = *(long **)(param_1 + 0x30);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = *(long **)(param_1 + 0x20);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = *(long **)(param_1 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  facebook::jsi::NativeState::~NativeState(param_1);
  return;
}


// ===== 00173ffc  FUN_00173ffc =====

void FUN_00173ffc(long param_1)

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


// ===== 00174090  FUN_00174090 =====

long FUN_00174090(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_001f5d50 == '\0') {
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


// ===== 001740c0  facebook::react::RNSSafeAreaViewShadowNode::adjustLayoutWithState =====

/* facebook::react::RNSSafeAreaViewShadowNode::adjustLayoutWithState() */

void __thiscall
facebook::react::RNSSafeAreaViewShadowNode::adjustLayoutWithState(RNSSafeAreaViewShadowNode *this)

{
  RNSSafeAreaViewShadowNode RVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  uint uVar9;
  long *plVar10;
  RNSSafeAreaViewShadowNode *pRVar11;
  void *pvVar12;
  long lVar13;
  undefined8 uVar14;
  float *pfVar15;
  ulong extraout_x8;
  ulong uVar16;
  ulong uVar17;
  RNSSafeAreaViewShadowNode *pRVar18;
  ulong uVar19;
  RNSSafeAreaViewShadowNode *pRVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  long local_2e8;
  long *plStack_2e0;
  undefined1 auStack_2d8 [13];
  ushort local_2cb;
  ushort local_2c9;
  ushort local_2c7;
  ushort local_2c5;
  void *local_268;
  void *local_260;
  void *local_250;
  void *local_248;
  void *local_238;
  void *local_230;
  void *local_220;
  void *local_218;
  float afStack_1e4 [7];
  long *local_1c8;
  RNSSafeAreaViewShadowNode local_1c0 [13];
  ushort uStack_1b3;
  ushort uStack_1b1;
  ushort local_1af;
  ushort local_1ad [46];
  void *local_150;
  void *local_148;
  void *local_138;
  void *local_130;
  void *local_120;
  void *local_118;
  void *local_108;
  void *local_100;
  undefined1 auStack_d0 [4];
  float afStack_cc [7];
  long *local_b0;
  long local_a8;
  
  lVar6 = tpidr_el0;
  local_a8 = *(long *)(lVar6 + 0x28);
  pRVar20 = *(RNSSafeAreaViewShadowNode **)(this + 8);
  plVar10 = (long *)facebook::react::ShadowNode::getState();
  lVar13 = *plVar10;
  plVar10 = (long *)plVar10[1];
  local_2e8 = lVar13;
  plStack_2e0 = plVar10;
  if (plVar10 != (long *)0x0) {
    FUN_00174090(1,plVar10 + 1);
  }
  pfVar15 = *(float **)(lVar13 + 0x18);
  uVar2 = *(ushort *)(pRVar20 + 0x6d);
  RVar1 = pRVar20[0x6e0];
  pRVar18 = (RNSSafeAreaViewShadowNode *)(ulong)(byte)RVar1;
  uVar19 = 0x37fc00000;
  fVar34 = pfVar15[1];
  if ((uVar2 & 7) == 0) {
    fVar23 = NAN;
LAB_0017422c:
    uVar2 = *(ushort *)(pRVar20 + 0x5f);
    if ((uVar2 & 7) != 0) {
      if ((uVar2 & 7) == 4) {
        uVar16 = 0x37fc00000;
        goto LAB_00174314;
      }
      if ((uVar2 >> 3 & 1) == 0) {
        uVar5 = uVar2 >> 4 & 0x7ff;
        uVar9 = -uVar5;
        if (-1 < (short)uVar2) {
          uVar9 = uVar5;
        }
        fVar28 = (float)(int)uVar9;
LAB_001742a8:
        fVar29 = ABS(fVar28);
        if ((uVar2 & 7) == 1) {
          bVar8 = fVar29 < INFINITY;
          fVar30 = fVar28;
          if (!bVar8) {
            fVar30 = NAN;
          }
          uVar9 = (uint)bVar8;
          if (fVar29 != INFINITY && bVar8 == NAN(fVar29)) {
            uVar9 = 1;
            fVar30 = fVar28;
          }
          uVar16 = CONCAT44(uVar9,fVar30);
        }
        else {
          fVar30 = NAN;
          if (fVar29 != INFINITY) {
            fVar30 = fVar28;
          }
          uVar9 = (uint)(fVar29 < INFINITY);
          if (fVar29 != INFINITY && fVar29 < INFINITY == NAN(fVar29)) {
            uVar9 = 1;
          }
          fVar28 = NAN;
          if (!NAN(fVar29)) {
            fVar28 = fVar30;
          }
          uVar16 = (ulong)(uint)fVar28 | (ulong)uVar9 << 0x21;
        }
        goto LAB_00174314;
      }
      if (uVar2 < 0x40) {
        pRVar11 = pRVar20 + (ulong)(uVar2 >> 4) * 4 + 0x144;
LAB_001742a4:
        fVar28 = *(float *)pRVar11;
        goto LAB_001742a8;
      }
      uVar16 = (ulong)(uVar2 >> 4) - 4;
      lVar13 = **(long **)(pRVar20 + 0x160);
      if (uVar16 < (ulong)((*(long **)(pRVar20 + 0x160))[1] - lVar13 >> 2)) {
        pRVar11 = (RNSSafeAreaViewShadowNode *)(lVar13 + uVar16 * 4);
        goto LAB_001742a4;
      }
LAB_0017557c:
      if (*(long *)(lVar6 + 0x28) != local_a8) goto LAB_00175724;
                    /* try { // try from 0017558c to 0017558f has its CatchHandler @ 001756d0 */
      FUN_00175a08();
LAB_00175590:
      if (*(long *)(lVar6 + 0x28) != local_a8) goto LAB_00175724;
                    /* try { // try from 001755a0 to 001755a3 has its CatchHandler @ 001756c8 */
      FUN_00175a08();
LAB_001755a4:
      if (*(long *)(lVar6 + 0x28) != local_a8) goto LAB_00175724;
                    /* try { // try from 001755b4 to 001755b7 has its CatchHandler @ 001756c0 */
      FUN_00175a08();
LAB_001755b8:
      if (*(long *)(lVar6 + 0x28) != local_a8) goto LAB_00175724;
                    /* try { // try from 001755c8 to 001755cb has its CatchHandler @ 001756b8 */
      FUN_00175a08();
      goto LAB_001755cc;
    }
    uVar16 = 0x7fc00000;
LAB_00174314:
    uVar2 = *(ushort *)(pRVar20 + 0x6b);
    if ((uVar2 & 7) == 0) {
      uVar17 = 0x7fc00000;
    }
    else if ((uVar2 & 7) == 4) {
      uVar17 = 0x37fc00000;
    }
    else {
      if ((uVar2 >> 3 & 1) == 0) {
        uVar5 = uVar2 >> 4 & 0x7ff;
        uVar9 = -uVar5;
        if (-1 < (short)uVar2) {
          uVar9 = uVar5;
        }
        fVar28 = (float)(int)uVar9;
      }
      else {
        if (uVar2 < 0x40) {
          pRVar11 = pRVar20 + (ulong)(uVar2 >> 4) * 4 + 0x144;
        }
        else {
          uVar17 = (ulong)(uVar2 >> 4) - 4;
          lVar13 = **(long **)(pRVar20 + 0x160);
          if ((ulong)((*(long **)(pRVar20 + 0x160))[1] - lVar13 >> 2) <= uVar17) goto LAB_0017557c;
          pRVar11 = (RNSSafeAreaViewShadowNode *)(lVar13 + uVar17 * 4);
        }
        fVar28 = *(float *)pRVar11;
      }
      fVar29 = ABS(fVar28);
      if ((uVar2 & 7) == 1) {
        bVar8 = fVar29 < INFINITY;
        fVar30 = fVar28;
        if (!bVar8) {
          fVar30 = NAN;
        }
        uVar9 = (uint)bVar8;
        if (fVar29 != INFINITY && bVar8 == NAN(fVar29)) {
          uVar9 = 1;
          fVar30 = fVar28;
        }
        uVar17 = CONCAT44(uVar9,fVar30);
      }
      else {
        fVar30 = NAN;
        if (fVar29 != INFINITY) {
          fVar30 = fVar28;
        }
        uVar9 = (uint)(fVar29 < INFINITY);
        if (fVar29 != INFINITY && fVar29 < INFINITY == NAN(fVar29)) {
          uVar9 = 1;
        }
        fVar28 = NAN;
        if (!NAN(fVar29)) {
          fVar28 = fVar30;
        }
        uVar17 = (ulong)(uint)fVar28 | (ulong)uVar9 << 0x21;
      }
    }
    uVar3 = *(ushort *)(pRVar20 + 0x5d);
    fVar28 = fVar23;
    if ((uVar17 & 0x300000000) != 0) {
      fVar28 = (float)uVar17;
    }
    if ((uVar16 & 0x300000000) != 0) {
      fVar28 = (float)uVar16;
    }
    if ((uVar3 & 7) == 0) {
      uVar16 = 0x7fc00000;
    }
    else if ((uVar3 & 7) == 4) {
      uVar16 = 0x37fc00000;
    }
    else {
      if ((uVar3 >> 3 & 1) == 0) {
        uVar5 = uVar3 >> 4 & 0x7ff;
        uVar9 = -uVar5;
        if (-1 < (short)uVar3) {
          uVar9 = uVar5;
        }
        fVar29 = (float)(int)uVar9;
      }
      else {
        if (uVar3 < 0x40) {
          pRVar11 = pRVar20 + (ulong)(uVar3 >> 4) * 4 + 0x144;
        }
        else {
          uVar16 = (ulong)(uVar3 >> 4) - 4;
          lVar13 = **(long **)(pRVar20 + 0x160);
          if ((ulong)((*(long **)(pRVar20 + 0x160))[1] - lVar13 >> 2) <= uVar16) goto LAB_00175590;
          pRVar11 = (RNSSafeAreaViewShadowNode *)(lVar13 + uVar16 * 4);
        }
        fVar29 = *(float *)pRVar11;
      }
      fVar30 = ABS(fVar29);
      if ((uVar3 & 7) == 1) {
        bVar8 = fVar30 < INFINITY;
        fVar31 = fVar29;
        if (!bVar8) {
          fVar31 = NAN;
        }
        uVar9 = (uint)bVar8;
        if (fVar30 != INFINITY && bVar8 == NAN(fVar30)) {
          uVar9 = 1;
          fVar31 = fVar29;
        }
        uVar16 = CONCAT44(uVar9,fVar31);
      }
      else {
        fVar31 = NAN;
        if (fVar30 != INFINITY) {
          fVar31 = fVar29;
        }
        uVar9 = (uint)(fVar30 < INFINITY);
        if (fVar30 != INFINITY && fVar30 < INFINITY == NAN(fVar30)) {
          uVar9 = 1;
        }
        fVar29 = NAN;
        if (!NAN(fVar30)) {
          fVar29 = fVar31;
        }
        uVar16 = (ulong)(uint)fVar29 | (ulong)uVar9 << 0x21;
      }
    }
    uVar3 = *(ushort *)(pRVar20 + 0x69);
    if ((uVar3 & 7) == 0) {
      uVar17 = 0x7fc00000;
    }
    else if ((uVar3 & 7) == 4) {
      uVar17 = 0x37fc00000;
    }
    else {
      if ((uVar3 >> 3 & 1) == 0) {
        uVar5 = uVar3 >> 4 & 0x7ff;
        uVar9 = -uVar5;
        if (-1 < (short)uVar3) {
          uVar9 = uVar5;
        }
        fVar29 = (float)(int)uVar9;
      }
      else {
        if (uVar3 < 0x40) {
          pRVar11 = pRVar20 + (ulong)(uVar3 >> 4) * 4 + 0x144;
        }
        else {
          uVar17 = (ulong)(uVar3 >> 4) - 4;
          lVar13 = **(long **)(pRVar20 + 0x160);
          if ((ulong)((*(long **)(pRVar20 + 0x160))[1] - lVar13 >> 2) <= uVar17) goto LAB_00175590;
          pRVar11 = (RNSSafeAreaViewShadowNode *)(lVar13 + uVar17 * 4);
        }
        fVar29 = *(float *)pRVar11;
      }
      fVar30 = ABS(fVar29);
      if ((uVar3 & 7) == 1) {
        bVar8 = fVar30 < INFINITY;
        fVar31 = fVar29;
        if (!bVar8) {
          fVar31 = NAN;
        }
        uVar9 = (uint)bVar8;
        if (fVar30 != INFINITY && bVar8 == NAN(fVar30)) {
          uVar9 = 1;
          fVar31 = fVar29;
        }
        uVar17 = CONCAT44(uVar9,fVar31);
      }
      else {
        fVar31 = NAN;
        if (fVar30 != INFINITY) {
          fVar31 = fVar29;
        }
        uVar9 = (uint)(fVar30 < INFINITY);
        if (fVar30 != INFINITY && fVar30 < INFINITY == NAN(fVar30)) {
          uVar9 = 1;
        }
        fVar29 = NAN;
        if (!NAN(fVar30)) {
          fVar29 = fVar31;
        }
        uVar17 = (ulong)(uint)fVar29 | (ulong)uVar9 << 0x21;
      }
    }
    uVar4 = *(ushort *)(pRVar20 + 99);
    fVar29 = fVar23;
    if ((uVar17 & 0x300000000) != 0) {
      fVar29 = (float)uVar17;
    }
    if ((uVar16 & 0x300000000) != 0) {
      fVar29 = (float)uVar16;
    }
    if ((uVar4 & 7) == 0) {
      uVar16 = 0x7fc00000;
joined_r0x00174624:
      if ((uVar2 & 7) == 0) goto LAB_00174628;
LAB_0017460c:
      if ((uVar2 & 7) == 4) {
        uVar17 = 0x37fc00000;
      }
      else {
        if ((uVar2 >> 3 & 1) == 0) {
          uVar5 = uVar2 >> 4 & 0x7ff;
          uVar9 = -uVar5;
          if (-1 < (short)uVar2) {
            uVar9 = uVar5;
          }
          fVar30 = (float)(int)uVar9;
        }
        else {
          if (uVar2 < 0x40) {
            pRVar11 = pRVar20 + (ulong)(uVar2 >> 4) * 4 + 0x144;
          }
          else {
            uVar17 = (ulong)(uVar2 >> 4) - 4;
            lVar13 = **(long **)(pRVar20 + 0x160);
            if ((ulong)((*(long **)(pRVar20 + 0x160))[1] - lVar13 >> 2) <= uVar17)
            goto LAB_001755a4;
            pRVar11 = (RNSSafeAreaViewShadowNode *)(lVar13 + uVar17 * 4);
          }
          fVar30 = *(float *)pRVar11;
        }
        fVar31 = ABS(fVar30);
        if ((uVar2 & 7) == 1) {
          bVar8 = fVar31 < INFINITY;
          fVar33 = fVar30;
          if (!bVar8) {
            fVar33 = NAN;
          }
          uVar9 = (uint)bVar8;
          if (fVar31 != INFINITY && bVar8 == NAN(fVar31)) {
            uVar9 = 1;
            fVar33 = fVar30;
          }
          uVar17 = CONCAT44(uVar9,fVar33);
        }
        else {
          fVar33 = NAN;
          if (fVar31 != INFINITY) {
            fVar33 = fVar30;
          }
          uVar9 = (uint)(fVar31 < INFINITY);
          if (fVar31 != INFINITY && fVar31 < INFINITY == NAN(fVar31)) {
            uVar9 = 1;
          }
          fVar30 = NAN;
          if (!NAN(fVar31)) {
            fVar30 = fVar33;
          }
          uVar17 = (ulong)(uint)fVar30 | (ulong)uVar9 << 0x21;
        }
      }
    }
    else {
      if ((uVar4 & 7) == 4) {
        uVar16 = 0x37fc00000;
        goto joined_r0x00174624;
      }
      if ((uVar4 >> 3 & 1) == 0) {
        uVar5 = uVar4 >> 4 & 0x7ff;
        uVar9 = -uVar5;
        if (-1 < (short)uVar4) {
          uVar9 = uVar5;
        }
        fVar30 = (float)(int)uVar9;
      }
      else {
        if (uVar4 < 0x40) {
          pRVar11 = pRVar20 + (ulong)(uVar4 >> 4) * 4 + 0x144;
        }
        else {
          uVar16 = (ulong)(uVar4 >> 4) - 4;
          lVar13 = **(long **)(pRVar20 + 0x160);
          if ((ulong)((*(long **)(pRVar20 + 0x160))[1] - lVar13 >> 2) <= uVar16) goto LAB_001755a4;
          pRVar11 = (RNSSafeAreaViewShadowNode *)(lVar13 + uVar16 * 4);
        }
        fVar30 = *(float *)pRVar11;
      }
      fVar31 = ABS(fVar30);
      if ((uVar4 & 7) == 1) {
        bVar8 = fVar31 < INFINITY;
        fVar33 = fVar30;
        if (!bVar8) {
          fVar33 = NAN;
        }
        uVar9 = (uint)bVar8;
        if (fVar31 != INFINITY && bVar8 == NAN(fVar31)) {
          uVar9 = 1;
          fVar33 = fVar30;
        }
        uVar16 = CONCAT44(uVar9,fVar33);
        goto joined_r0x00174624;
      }
      fVar33 = NAN;
      if (fVar31 != INFINITY) {
        fVar33 = fVar30;
      }
      uVar9 = (uint)(fVar31 < INFINITY);
      if (fVar31 != INFINITY && fVar31 < INFINITY == NAN(fVar31)) {
        uVar9 = 1;
      }
      fVar30 = NAN;
      if (!NAN(fVar31)) {
        fVar30 = fVar33;
      }
      uVar16 = (ulong)(uint)fVar30 | (ulong)uVar9 << 0x21;
      if ((uVar2 & 7) != 0) goto LAB_0017460c;
LAB_00174628:
      uVar17 = 0x7fc00000;
    }
    uVar2 = *(ushort *)(pRVar20 + 0x61);
    fVar30 = fVar23;
    if ((uVar17 & 0x300000000) != 0) {
      fVar30 = (float)uVar17;
    }
    if ((uVar16 & 0x300000000) != 0) {
      fVar30 = (float)uVar16;
    }
    if ((uVar2 & 7) == 0) {
      uVar16 = 0x7fc00000;
joined_r0x00174804:
      if ((uVar3 & 7) == 0) goto LAB_00174808;
LAB_001747ec:
      if ((uVar3 & 7) == 4) {
        uVar17 = 0x37fc00000;
      }
      else {
        if ((uVar3 >> 3 & 1) == 0) {
          uVar5 = uVar3 >> 4 & 0x7ff;
          uVar9 = -uVar5;
          if (-1 < (short)uVar3) {
            uVar9 = uVar5;
          }
          fVar31 = (float)(int)uVar9;
        }
        else {
          if (uVar3 < 0x40) {
            pRVar18 = pRVar20 + (ulong)(uVar3 >> 4) * 4 + 0x144;
          }
          else {
            uVar17 = (ulong)(uVar3 >> 4) - 4;
            lVar13 = **(long **)(pRVar20 + 0x160);
            if ((ulong)((*(long **)(pRVar20 + 0x160))[1] - lVar13 >> 2) <= uVar17)
            goto LAB_001755b8;
            pRVar18 = (RNSSafeAreaViewShadowNode *)(lVar13 + uVar17 * 4);
          }
          fVar31 = *(float *)pRVar18;
        }
        fVar33 = ABS(fVar31);
        if ((uVar3 & 7) == 1) {
          bVar8 = fVar33 < INFINITY;
          fVar32 = fVar31;
          if (!bVar8) {
            fVar32 = NAN;
          }
          uVar9 = (uint)bVar8;
          if (fVar33 != INFINITY && bVar8 == NAN(fVar33)) {
            uVar9 = 1;
            fVar32 = fVar31;
          }
          uVar17 = CONCAT44(uVar9,fVar32);
        }
        else {
          fVar32 = NAN;
          if (fVar33 != INFINITY) {
            fVar32 = fVar31;
          }
          uVar9 = (uint)(fVar33 < INFINITY);
          if (fVar33 != INFINITY && fVar33 < INFINITY == NAN(fVar33)) {
            uVar9 = 1;
          }
          fVar31 = NAN;
          if (!NAN(fVar33)) {
            fVar31 = fVar32;
          }
          uVar17 = (ulong)(uint)fVar31 | (ulong)uVar9 << 0x21;
        }
      }
    }
    else {
      if ((uVar2 & 7) == 4) {
        uVar16 = 0x37fc00000;
        goto joined_r0x00174804;
      }
      if ((uVar2 >> 3 & 1) == 0) {
        uVar5 = uVar2 >> 4 & 0x7ff;
        uVar9 = -uVar5;
        if (-1 < (short)uVar2) {
          uVar9 = uVar5;
        }
        fVar31 = (float)(int)uVar9;
      }
      else {
        if (uVar2 < 0x40) {
          pRVar11 = pRVar20 + (ulong)(uVar2 >> 4) * 4 + 0x144;
        }
        else {
          uVar16 = (ulong)(uVar2 >> 4) - 4;
          lVar13 = **(long **)(pRVar20 + 0x160);
          if ((ulong)((*(long **)(pRVar20 + 0x160))[1] - lVar13 >> 2) <= uVar16) goto LAB_001755b8;
          pRVar11 = (RNSSafeAreaViewShadowNode *)(lVar13 + uVar16 * 4);
        }
        fVar31 = *(float *)pRVar11;
      }
      fVar33 = ABS(fVar31);
      if ((uVar2 & 7) == 1) {
        bVar8 = fVar33 < INFINITY;
        fVar32 = fVar31;
        if (!bVar8) {
          fVar32 = NAN;
        }
        uVar9 = (uint)bVar8;
        if (fVar33 != INFINITY && bVar8 == NAN(fVar33)) {
          uVar9 = 1;
          fVar32 = fVar31;
        }
        uVar16 = CONCAT44(uVar9,fVar32);
        goto joined_r0x00174804;
      }
      fVar32 = NAN;
      if (fVar33 != INFINITY) {
        fVar32 = fVar31;
      }
      uVar9 = (uint)(fVar33 < INFINITY);
      if (fVar33 != INFINITY && fVar33 < INFINITY == NAN(fVar33)) {
        uVar9 = 1;
      }
      fVar31 = NAN;
      if (!NAN(fVar33)) {
        fVar31 = fVar32;
      }
      uVar16 = (ulong)(uint)fVar31 | (ulong)uVar9 << 0x21;
      if ((uVar3 & 7) != 0) goto LAB_001747ec;
LAB_00174808:
      uVar17 = 0x7fc00000;
    }
    if ((uVar17 & 0x300000000) != 0) {
      fVar23 = (float)uVar17;
    }
    if ((uVar16 & 0x300000000) != 0) {
      fVar23 = (float)uVar16;
    }
    if (NAN(fVar29)) {
      fVar29 = 0.0;
    }
    fVar31 = -0.0;
    if (((byte)pRVar20[0x6e3] & 1) != 0) {
      fVar31 = *pfVar15;
    }
    if (NAN(fVar23)) {
      fVar23 = 0.0;
    }
    fVar33 = -0.0;
    if (((byte)pRVar20[0x6e1] & 1) != 0) {
      fVar33 = pfVar15[2];
    }
    if (NAN(fVar30)) {
      fVar30 = 0.0;
    }
    fVar32 = -0.0;
    if (((byte)pRVar20[0x6e2] & 1) != 0) {
      fVar32 = pfVar15[3];
    }
                    /* try { // try from 001749f4 to 00174a03 has its CatchHandler @ 001756e0 */
    FUN_00175728(local_1c0,*(long *)(this + 8) + 0x50);
    pRVar20 = local_1c0;
    fVar21 = -0.0;
    if (((byte)RVar1 & 1) != 0) {
      fVar21 = fVar34;
    }
    if (NAN(fVar28)) {
      fVar28 = 0.0;
    }
    fVar34 = ABS(fVar21 + fVar28);
    if ((fVar34 < INFINITY) || (fVar34 != INFINITY && fVar34 < INFINITY == NAN(fVar34))) {
                    /* try { // try from 00174a50 to 00174b0f has its CatchHandler @ 001756e8 */
      FUN_00175cf8(auStack_d0,&uStack_1b1);
    }
    else {
      uStack_1b1 = uStack_1b1 & 0xfff8;
    }
    fVar34 = ABS(fVar31 + fVar29);
    if ((fVar34 < INFINITY) || (fVar34 != INFINITY && fVar34 < INFINITY == NAN(fVar34))) {
      FUN_00175cf8(auStack_d0,&uStack_1b3);
    }
    else {
      uStack_1b3 = uStack_1b3 & 0xfff8;
    }
    fVar34 = ABS(fVar33 + fVar23);
    if ((fVar34 < INFINITY) || (fVar34 != INFINITY && fVar34 < INFINITY == NAN(fVar34))) {
      FUN_00175cf8(auStack_d0,&local_1af);
    }
    else {
      local_1af = local_1af & 0xfff8;
    }
    fVar34 = ABS(fVar32 + fVar30);
    if ((fVar34 < INFINITY) || (fVar34 != INFINITY && fVar34 < INFINITY == NAN(fVar34))) {
      FUN_00175cf8(auStack_d0,local_1ad);
    }
    else {
      local_1ad[0] = local_1ad[0] & 0xfff8;
    }
    pRVar18 = this + 0x118;
                    /* try { // try from 00174b14 to 00174b1f has its CatchHandler @ 001756d8 */
    FUN_00175728(auStack_2d8,pRVar18);
    if ((uStack_1b1 & 7) != 0) {
      if ((uStack_1b1 & 7) == 4) {
        uVar16 = 0x37fc00000;
        goto LAB_00174c0c;
      }
      if ((uStack_1b1 >> 3 & 1) == 0) {
        uVar5 = uStack_1b1 >> 4 & 0x7ff;
        uVar9 = -uVar5;
        if (-1 < (short)uStack_1b1) {
          uVar9 = uVar5;
        }
        fVar34 = (float)(int)uVar9;
LAB_00174ba0:
        fVar23 = ABS(fVar34);
        if ((uStack_1b1 & 7) == 1) {
          bVar8 = fVar23 < INFINITY;
          fVar28 = fVar34;
          if (!bVar8) {
            fVar28 = NAN;
          }
          uVar9 = (uint)bVar8;
          if (fVar23 != INFINITY && bVar8 == NAN(fVar23)) {
            uVar9 = 1;
            fVar28 = fVar34;
          }
          uVar16 = CONCAT44(uVar9,fVar28);
        }
        else {
          fVar28 = NAN;
          if (fVar23 != INFINITY) {
            fVar28 = fVar34;
          }
          uVar9 = (uint)(fVar23 < INFINITY);
          if (fVar23 != INFINITY && fVar23 < INFINITY == NAN(fVar23)) {
            uVar9 = 1;
          }
          fVar34 = NAN;
          if (!NAN(fVar23)) {
            fVar34 = fVar28;
          }
          uVar16 = (ulong)(uint)fVar34 | (ulong)uVar9 << 0x21;
        }
        goto LAB_00174c0c;
      }
      if (uStack_1b1 < 0x40) {
        fVar34 = afStack_cc[uStack_1b1 >> 4];
        goto LAB_00174ba0;
      }
      uVar16 = (ulong)(uStack_1b1 >> 4) - 4;
      if (uVar16 < (ulong)(local_b0[1] - *local_b0 >> 2)) {
        fVar34 = *(float *)(*local_b0 + uVar16 * 4);
        goto LAB_00174ba0;
      }
      goto LAB_001755e0;
    }
    uVar16 = 0x7fc00000;
LAB_00174c0c:
    if ((local_2c9 & 7) != 0) {
      if ((local_2c9 & 7) == 4) {
        uVar17 = 0x37fc00000;
        goto LAB_00174cf8;
      }
      if ((local_2c9 >> 3 & 1) == 0) {
        uVar5 = local_2c9 >> 4 & 0x7ff;
        uVar9 = -uVar5;
        if (-1 < (short)local_2c9) {
          uVar9 = uVar5;
        }
        fVar34 = (float)(int)uVar9;
LAB_00174c8c:
        fVar23 = ABS(fVar34);
        if ((local_2c9 & 7) == 1) {
          bVar8 = fVar23 < INFINITY;
          fVar28 = fVar34;
          if (!bVar8) {
            fVar28 = NAN;
          }
          uVar9 = (uint)bVar8;
          if (fVar23 != INFINITY && bVar8 == NAN(fVar23)) {
            uVar9 = 1;
            fVar28 = fVar34;
          }
          uVar17 = CONCAT44(uVar9,fVar28);
        }
        else {
          fVar28 = NAN;
          if (fVar23 != INFINITY) {
            fVar28 = fVar34;
          }
          uVar9 = (uint)(fVar23 < INFINITY);
          if (fVar23 != INFINITY && fVar23 < INFINITY == NAN(fVar23)) {
            uVar9 = 1;
          }
          fVar34 = NAN;
          if (!NAN(fVar23)) {
            fVar34 = fVar28;
          }
          uVar17 = (ulong)(uint)fVar34 | (ulong)uVar9 << 0x21;
        }
        goto LAB_00174cf8;
      }
      if (local_2c9 < 0x40) {
        fVar34 = afStack_1e4[local_2c9 >> 4];
        goto LAB_00174c8c;
      }
      uVar17 = (ulong)(local_2c9 >> 4) - 4;
      if (uVar17 < (ulong)(local_1c8[1] - *local_1c8 >> 2)) {
        fVar34 = *(float *)(*local_1c8 + uVar17 * 4);
        goto LAB_00174c8c;
      }
      goto LAB_001755f4;
    }
    uVar17 = 0x7fc00000;
LAB_00174cf8:
    if ((((float)uVar16 != (float)uVar17) && ((!NAN((float)uVar16) || (!NAN((float)uVar17))))) ||
       ((int)(uVar16 >> 0x20) != (int)(uVar17 >> 0x20))) goto LAB_00175368;
    if ((uStack_1b3 & 7) != 0) {
      if ((uStack_1b3 & 7) == 4) {
        uVar16 = 0x37fc00000;
        goto LAB_00174e24;
      }
      if ((uStack_1b3 >> 3 & 1) == 0) {
        uVar5 = uStack_1b3 >> 4 & 0x7ff;
        uVar9 = -uVar5;
        if (-1 < (short)uStack_1b3) {
          uVar9 = uVar5;
        }
        fVar34 = (float)(int)uVar9;
LAB_00174db8:
        fVar23 = ABS(fVar34);
        if ((uStack_1b3 & 7) == 1) {
          bVar8 = fVar23 < INFINITY;
          fVar28 = fVar34;
          if (!bVar8) {
            fVar28 = NAN;
          }
          uVar9 = (uint)bVar8;
          if (fVar23 != INFINITY && bVar8 == NAN(fVar23)) {
            uVar9 = 1;
            fVar28 = fVar34;
          }
          uVar16 = CONCAT44(uVar9,fVar28);
        }
        else {
          fVar28 = NAN;
          if (fVar23 != INFINITY) {
            fVar28 = fVar34;
          }
          uVar9 = (uint)(fVar23 < INFINITY);
          if (fVar23 != INFINITY && fVar23 < INFINITY == NAN(fVar23)) {
            uVar9 = 1;
          }
          fVar34 = NAN;
          if (!NAN(fVar23)) {
            fVar34 = fVar28;
          }
          uVar16 = (ulong)(uint)fVar34 | (ulong)uVar9 << 0x21;
        }
        goto LAB_00174e24;
      }
      if (uStack_1b3 < 0x40) {
        fVar34 = afStack_cc[uStack_1b3 >> 4];
        goto LAB_00174db8;
      }
      uVar16 = (ulong)(uStack_1b3 >> 4) - 4;
      if (uVar16 < (ulong)(local_b0[1] - *local_b0 >> 2)) {
        fVar34 = *(float *)(*local_b0 + uVar16 * 4);
        goto LAB_00174db8;
      }
      goto LAB_00175608;
    }
    uVar16 = 0x7fc00000;
LAB_00174e24:
    if ((local_2cb & 7) != 0) {
      if ((local_2cb & 7) == 4) {
        uVar17 = 0x37fc00000;
        goto LAB_00174f10;
      }
      if ((local_2cb >> 3 & 1) == 0) {
        uVar5 = local_2cb >> 4 & 0x7ff;
        uVar9 = -uVar5;
        if (-1 < (short)local_2cb) {
          uVar9 = uVar5;
        }
        fVar34 = (float)(int)uVar9;
LAB_00174ea4:
        fVar23 = ABS(fVar34);
        if ((local_2cb & 7) == 1) {
          bVar8 = fVar23 < INFINITY;
          fVar28 = fVar34;
          if (!bVar8) {
            fVar28 = NAN;
          }
          uVar9 = (uint)bVar8;
          if (fVar23 != INFINITY && bVar8 == NAN(fVar23)) {
            uVar9 = 1;
            fVar28 = fVar34;
          }
          uVar17 = CONCAT44(uVar9,fVar28);
        }
        else {
          fVar28 = NAN;
          if (fVar23 != INFINITY) {
            fVar28 = fVar34;
          }
          uVar9 = (uint)(fVar23 < INFINITY);
          if (fVar23 != INFINITY && fVar23 < INFINITY == NAN(fVar23)) {
            uVar9 = 1;
          }
          fVar34 = NAN;
          if (!NAN(fVar23)) {
            fVar34 = fVar28;
          }
          uVar17 = (ulong)(uint)fVar34 | (ulong)uVar9 << 0x21;
        }
        goto LAB_00174f10;
      }
      if (local_2cb < 0x40) {
        fVar34 = afStack_1e4[local_2cb >> 4];
        goto LAB_00174ea4;
      }
      uVar17 = (ulong)(local_2cb >> 4) - 4;
      if (uVar17 < (ulong)(local_1c8[1] - *local_1c8 >> 2)) {
        fVar34 = *(float *)(*local_1c8 + uVar17 * 4);
        goto LAB_00174ea4;
      }
      goto LAB_0017561c;
    }
    uVar17 = 0x7fc00000;
LAB_00174f10:
    if ((((float)uVar16 != (float)uVar17) && ((!NAN((float)uVar16) || (!NAN((float)uVar17))))) ||
       ((int)(uVar16 >> 0x20) != (int)(uVar17 >> 0x20))) goto LAB_00175368;
    if ((local_1af & 7) != 0) {
      if ((local_1af & 7) == 4) {
        uVar16 = 0x37fc00000;
        goto LAB_0017503c;
      }
      if ((local_1af >> 3 & 1) == 0) {
        uVar5 = local_1af >> 4 & 0x7ff;
        uVar9 = -uVar5;
        if (-1 < (short)local_1af) {
          uVar9 = uVar5;
        }
        fVar34 = (float)(int)uVar9;
LAB_00174fd0:
        fVar23 = ABS(fVar34);
        if ((local_1af & 7) == 1) {
          bVar8 = fVar23 < INFINITY;
          fVar28 = fVar34;
          if (!bVar8) {
            fVar28 = NAN;
          }
          uVar9 = (uint)bVar8;
          if (fVar23 != INFINITY && bVar8 == NAN(fVar23)) {
            uVar9 = 1;
            fVar28 = fVar34;
          }
          uVar16 = CONCAT44(uVar9,fVar28);
        }
        else {
          fVar28 = NAN;
          if (fVar23 != INFINITY) {
            fVar28 = fVar34;
          }
          uVar9 = (uint)(fVar23 < INFINITY);
          if (fVar23 != INFINITY && fVar23 < INFINITY == NAN(fVar23)) {
            uVar9 = 1;
          }
          fVar34 = NAN;
          if (!NAN(fVar23)) {
            fVar34 = fVar28;
          }
          uVar16 = (ulong)(uint)fVar34 | (ulong)uVar9 << 0x21;
        }
        goto LAB_0017503c;
      }
      if (local_1af < 0x40) {
        fVar34 = afStack_cc[local_1af >> 4];
        goto LAB_00174fd0;
      }
      uVar16 = (ulong)(local_1af >> 4) - 4;
      if (uVar16 < (ulong)(local_b0[1] - *local_b0 >> 2)) {
        fVar34 = *(float *)(*local_b0 + uVar16 * 4);
        goto LAB_00174fd0;
      }
      if (*(long *)(lVar6 + 0x28) != local_a8) goto LAB_00175724;
                    /* try { // try from 00175650 to 00175653 has its CatchHandler @ 0017569c */
      FUN_00175a08();
LAB_00175654:
      if (*(long *)(lVar6 + 0x28) != local_a8) goto LAB_00175724;
                    /* try { // try from 00175664 to 00175667 has its CatchHandler @ 00175698 */
      FUN_00175a08();
LAB_00175668:
      if (*(long *)(lVar6 + 0x28) != local_a8) goto LAB_00175724;
                    /* try { // try from 00175678 to 0017567b has its CatchHandler @ 00175694 */
      FUN_00175a08();
LAB_0017567c:
      if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* try { // try from 0017568c to 0017568f has its CatchHandler @ 00175690 */
        uVar14 = FUN_00175a08();
                    /* catch() { ... } // from try @ 0017568c with catch @ 00175690 */
                    /* catch() { ... } // from try @ 001753b4 with catch @ 001756f0 */
        FUN_00173ffc(auStack_2d8);
        FUN_00173ffc(local_1c0);
        FUN_001759b8(&local_2e8);
        if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
          FUN_0016eec4(uVar14);
        }
      }
      goto LAB_00175724;
    }
    uVar16 = 0x7fc00000;
LAB_0017503c:
    if ((local_2c7 & 7) == 0) {
      uVar17 = 0x7fc00000;
    }
    else if ((local_2c7 & 7) == 4) {
      uVar17 = 0x37fc00000;
    }
    else {
      if ((local_2c7 >> 3 & 1) == 0) {
        uVar5 = local_2c7 >> 4 & 0x7ff;
        uVar9 = -uVar5;
        if (-1 < (short)local_2c7) {
          uVar9 = uVar5;
        }
        fVar34 = (float)(int)uVar9;
      }
      else if (local_2c7 < 0x40) {
        fVar34 = afStack_1e4[local_2c7 >> 4];
      }
      else {
        uVar17 = (ulong)(local_2c7 >> 4) - 4;
        if ((ulong)(local_1c8[1] - *local_1c8 >> 2) <= uVar17) goto LAB_00175654;
        fVar34 = *(float *)(*local_1c8 + uVar17 * 4);
      }
      fVar23 = ABS(fVar34);
      if ((local_2c7 & 7) == 1) {
        bVar8 = fVar23 < INFINITY;
        fVar28 = fVar34;
        if (!bVar8) {
          fVar28 = NAN;
        }
        uVar9 = (uint)bVar8;
        if (fVar23 != INFINITY && bVar8 == NAN(fVar23)) {
          uVar9 = 1;
          fVar28 = fVar34;
        }
        uVar17 = CONCAT44(uVar9,fVar28);
      }
      else {
        fVar28 = NAN;
        if (fVar23 != INFINITY) {
          fVar28 = fVar34;
        }
        uVar9 = (uint)(fVar23 < INFINITY);
        if (fVar23 != INFINITY && fVar23 < INFINITY == NAN(fVar23)) {
          uVar9 = 1;
        }
        fVar34 = NAN;
        if (!NAN(fVar23)) {
          fVar34 = fVar28;
        }
        uVar17 = (ulong)(uint)fVar34 | (ulong)uVar9 << 0x21;
      }
    }
    if ((((float)uVar16 == (float)uVar17) || ((NAN((float)uVar16) && (NAN((float)uVar17))))) &&
       ((int)(uVar16 >> 0x20) == (int)(uVar17 >> 0x20))) {
      if ((local_1ad[0] & 7) == 0) {
        uVar16 = 0x7fc00000;
      }
      else if ((local_1ad[0] & 7) == 4) {
        uVar16 = 0x37fc00000;
      }
      else {
        if ((local_1ad[0] >> 3 & 1) == 0) {
          uVar5 = local_1ad[0] >> 4 & 0x7ff;
          uVar9 = -uVar5;
          if (-1 < (short)local_1ad[0]) {
            uVar9 = uVar5;
          }
          fVar34 = (float)(int)uVar9;
        }
        else if (local_1ad[0] < 0x40) {
          fVar34 = afStack_cc[local_1ad[0] >> 4];
        }
        else {
          uVar16 = (ulong)(local_1ad[0] >> 4) - 4;
          if ((ulong)(local_b0[1] - *local_b0 >> 2) <= uVar16) goto LAB_00175668;
          fVar34 = *(float *)(*local_b0 + uVar16 * 4);
        }
        fVar23 = ABS(fVar34);
        if ((local_1ad[0] & 7) == 1) {
          bVar8 = fVar23 < INFINITY;
          fVar28 = fVar34;
          if (!bVar8) {
            fVar28 = NAN;
          }
          uVar9 = (uint)bVar8;
          if (fVar23 != INFINITY && bVar8 == NAN(fVar23)) {
            uVar9 = 1;
            fVar28 = fVar34;
          }
          uVar16 = CONCAT44(uVar9,fVar28);
        }
        else {
          fVar28 = NAN;
          if (fVar23 != INFINITY) {
            fVar28 = fVar34;
          }
          uVar9 = (uint)(fVar23 < INFINITY);
          if (fVar23 != INFINITY && fVar23 < INFINITY == NAN(fVar23)) {
            uVar9 = 1;
          }
          fVar34 = NAN;
          if (!NAN(fVar23)) {
            fVar34 = fVar28;
          }
          uVar16 = (ulong)(uint)fVar34 | (ulong)uVar9 << 0x21;
        }
      }
      if ((local_2c5 & 7) == 0) {
        uVar19 = 0x7fc00000;
      }
      else if ((local_2c5 & 7) != 4) {
        if ((local_2c5 >> 3 & 1) == 0) {
          uVar5 = local_2c5 >> 4 & 0x7ff;
          uVar9 = -uVar5;
          if (-1 < (short)local_2c5) {
            uVar9 = uVar5;
          }
          fVar34 = (float)(int)uVar9;
        }
        else if (local_2c5 < 0x40) {
          fVar34 = afStack_1e4[local_2c5 >> 4];
        }
        else {
          uVar19 = (ulong)(local_2c5 >> 4) - 4;
          if ((ulong)(local_1c8[1] - *local_1c8 >> 2) <= uVar19) goto LAB_0017567c;
          fVar34 = *(float *)(*local_1c8 + uVar19 * 4);
        }
        fVar23 = ABS(fVar34);
        if ((local_2c5 & 7) == 1) {
          bVar8 = fVar23 < INFINITY;
          fVar28 = fVar34;
          if (!bVar8) {
            fVar28 = NAN;
          }
          uVar9 = (uint)bVar8;
          if (fVar23 != INFINITY && bVar8 == NAN(fVar23)) {
            uVar9 = 1;
            fVar28 = fVar34;
          }
          uVar19 = CONCAT44(uVar9,fVar28);
        }
        else {
          fVar28 = NAN;
          if (fVar23 != INFINITY) {
            fVar28 = fVar34;
          }
          uVar9 = (uint)(fVar23 < INFINITY);
          if (fVar23 != INFINITY && fVar23 < INFINITY == NAN(fVar23)) {
            uVar9 = 1;
          }
          fVar34 = NAN;
          if (!NAN(fVar23)) {
            fVar34 = fVar28;
          }
          uVar19 = (ulong)(uint)fVar34 | (ulong)uVar9 << 0x21;
        }
      }
      fVar34 = (float)uVar19;
      if ((float)uVar16 != fVar34) {
        if (!NAN((float)uVar16)) goto LAB_00175368;
        goto LAB_00175630;
      }
      goto LAB_0017534c;
    }
LAB_00175368:
    uVar14 = *(undefined8 *)(pRVar20 + 0x40);
    uVar24 = *(undefined8 *)(pRVar20 + 0x58);
    uVar22 = *(undefined8 *)(pRVar20 + 0x50);
    uVar27 = *(undefined8 *)(pRVar20 + 0x61);
    uVar26 = *(undefined8 *)(pRVar20 + 0x59);
    *(undefined8 *)(pRVar18 + 0x48) = *(undefined8 *)(pRVar20 + 0x48);
    *(undefined8 *)(pRVar18 + 0x40) = uVar14;
    *(undefined8 *)(pRVar18 + 0x58) = uVar24;
    *(undefined8 *)(pRVar18 + 0x50) = uVar22;
    uVar22 = *(undefined8 *)(pRVar20 + 8);
    uVar14 = *(undefined8 *)pRVar20;
    uVar25 = *(undefined8 *)(pRVar20 + 0x18);
    uVar24 = *(undefined8 *)(pRVar20 + 0x10);
    *(undefined8 *)(pRVar18 + 0x61) = uVar27;
    *(undefined8 *)(pRVar18 + 0x59) = uVar26;
    *(undefined8 *)(pRVar18 + 8) = uVar22;
    *(undefined8 *)pRVar18 = uVar14;
    *(undefined8 *)(pRVar18 + 0x18) = uVar25;
    *(undefined8 *)(pRVar18 + 0x10) = uVar24;
    uVar14 = *(undefined8 *)(pRVar20 + 0x20);
    uVar24 = *(undefined8 *)(pRVar20 + 0x38);
    uVar22 = *(undefined8 *)(pRVar20 + 0x30);
    *(undefined8 *)(pRVar18 + 0x28) = *(undefined8 *)(pRVar20 + 0x28);
    *(undefined8 *)(pRVar18 + 0x20) = uVar14;
    *(undefined8 *)(pRVar18 + 0x38) = uVar24;
    *(undefined8 *)(pRVar18 + 0x30) = uVar22;
    if (pRVar18 != local_1c0) {
                    /* try { // try from 001753b4 to 0017542f has its CatchHandler @ 001756f0 */
      FUN_001760dc(this + 0x188,local_150,local_148,
                   ((long)local_148 - (long)local_150 >> 2) * 0x6db6db6db6db6db7);
      FUN_001760dc(this + 0x1a0,local_138,local_130,
                   ((long)local_130 - (long)local_138 >> 2) * 0x6db6db6db6db6db7);
      FUN_001760dc(this + 0x1b8,local_120,local_118,
                   ((long)local_118 - (long)local_120 >> 2) * 0x6db6db6db6db6db7);
      FUN_001760dc(this + 0x1d0,local_108,local_100,
                   ((long)local_100 - (long)local_108 >> 2) * 0x6db6db6db6db6db7);
    }
    uVar14 = *(undefined8 *)(pRVar20 + 0xd0);
    uVar24 = *(undefined8 *)(pRVar20 + 0xe8);
    uVar22 = *(undefined8 *)(pRVar20 + 0xe0);
    *(undefined8 *)(this + 0x1f0) = *(undefined8 *)(pRVar20 + 0xd8);
    *(undefined8 *)(this + 0x1e8) = uVar14;
    *(undefined8 *)(this + 0x200) = uVar24;
    *(undefined8 *)(this + 0x1f8) = uVar22;
    FUN_00175ab0(this + 0x208,auStack_d0);
    facebook::yoga::Node::setDirty((bool)((char)this + -0x10));
  }
  else {
    if ((uVar2 & 7) == 4) {
      fVar23 = NAN;
      goto LAB_0017422c;
    }
    if ((uVar2 >> 3 & 1) == 0) {
      uVar5 = uVar2 >> 4 & 0x7ff;
      uVar9 = -uVar5;
      if (-1 < (short)uVar2) {
        uVar9 = uVar5;
      }
      fVar23 = (float)(int)uVar9;
LAB_001741c0:
      fVar28 = ABS(fVar23);
      if ((uVar2 & 7) == 1) {
        fVar29 = fVar23;
        if (fVar28 >= INFINITY) {
          fVar29 = NAN;
        }
        if (fVar28 == INFINITY || fVar28 < INFINITY != NAN(fVar28)) {
          fVar23 = fVar29;
        }
      }
      else {
        fVar29 = NAN;
        if (fVar28 != INFINITY) {
          fVar29 = fVar23;
        }
        fVar23 = NAN;
        if (!NAN(fVar28)) {
          fVar23 = fVar29;
        }
      }
      goto LAB_0017422c;
    }
    if (uVar2 < 0x40) {
      pRVar11 = pRVar20 + (ulong)(uVar2 >> 4) * 4 + 0x144;
LAB_001741bc:
      fVar23 = *(float *)pRVar11;
      goto LAB_001741c0;
    }
    uVar16 = (ulong)(uVar2 >> 4) - 4;
    lVar13 = **(long **)(pRVar20 + 0x160);
    if (uVar16 < (ulong)((*(long **)(pRVar20 + 0x160))[1] - lVar13 >> 2)) {
      pRVar11 = (RNSSafeAreaViewShadowNode *)(lVar13 + uVar16 * 4);
      goto LAB_001741bc;
    }
LAB_001755cc:
    if (*(long *)(lVar6 + 0x28) != local_a8) goto LAB_00175724;
                    /* try { // try from 001755dc to 001755df has its CatchHandler @ 001756b0 */
    FUN_00175a08();
LAB_001755e0:
    if (*(long *)(lVar6 + 0x28) != local_a8) goto LAB_00175724;
                    /* try { // try from 001755f0 to 001755f3 has its CatchHandler @ 001756ac */
    FUN_00175a08();
LAB_001755f4:
    if (*(long *)(lVar6 + 0x28) != local_a8) goto LAB_00175724;
                    /* try { // try from 00175604 to 00175607 has its CatchHandler @ 001756a8 */
    FUN_00175a08();
LAB_00175608:
    if (*(long *)(lVar6 + 0x28) != local_a8) goto LAB_00175724;
                    /* try { // try from 00175618 to 0017561b has its CatchHandler @ 001756a4 */
    FUN_00175a08();
LAB_0017561c:
    if (*(long *)(lVar6 + 0x28) != local_a8) goto LAB_00175724;
                    /* try { // try from 0017562c to 0017562f has its CatchHandler @ 001756a0 */
    fVar34 = (float)FUN_00175a08();
    uVar16 = extraout_x8;
LAB_00175630:
    if (!NAN(fVar34)) goto LAB_00175368;
LAB_0017534c:
    if ((int)(uVar16 >> 0x20) != (int)(uVar19 >> 0x20)) goto LAB_00175368;
  }
  plVar7 = local_1c8;
  local_1c8 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    if ((void *)plVar7[3] != (void *)0x0) {
      operator_delete((void *)plVar7[3]);
    }
    pvVar12 = (void *)*plVar7;
    if (pvVar12 != (void *)0x0) {
      plVar7[1] = (long)pvVar12;
      operator_delete(pvVar12);
    }
    operator_delete(plVar7);
  }
  if (local_220 != (void *)0x0) {
    local_218 = local_220;
    operator_delete(local_220);
  }
  if (local_238 != (void *)0x0) {
    local_230 = local_238;
    operator_delete(local_238);
  }
  if (local_250 != (void *)0x0) {
    local_248 = local_250;
    operator_delete(local_250);
  }
  if (local_268 != (void *)0x0) {
    local_260 = local_268;
    operator_delete(local_268);
  }
  plVar7 = local_b0;
  local_b0 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    if ((void *)plVar7[3] != (void *)0x0) {
      operator_delete((void *)plVar7[3]);
    }
    pvVar12 = (void *)*plVar7;
    if (pvVar12 != (void *)0x0) {
      plVar7[1] = (long)pvVar12;
      operator_delete(pvVar12);
    }
    operator_delete(plVar7);
  }
  if (local_108 != (void *)0x0) {
    local_100 = local_108;
    operator_delete(local_108);
  }
  if (local_120 != (void *)0x0) {
    local_118 = local_120;
    operator_delete(local_120);
  }
  if (local_138 != (void *)0x0) {
    local_130 = local_138;
    operator_delete(local_138);
  }
  if (local_150 != (void *)0x0) {
    local_148 = local_150;
    operator_delete(local_150);
  }
  if ((plVar10 != (long *)0x0) &&
     (lVar13 = FUN_001735f0(0xffffffffffffffff,plVar10 + 1), lVar13 == 0)) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar6 + 0x28) == local_a8) {
    return;
  }
LAB_00175724:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00175728  FUN_00175728 =====

void FUN_00175728(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar6 = param_2[2];
  uVar5 = param_2[5];
  uVar3 = param_2[4];
  uVar8 = param_2[1];
  uVar7 = *param_2;
  param_1[3] = param_2[3];
  param_1[2] = uVar6;
  param_1[5] = uVar5;
  param_1[4] = uVar3;
  param_1[1] = uVar8;
  *param_1 = uVar7;
  uVar11 = param_2[9];
  uVar10 = param_2[8];
  uVar7 = param_2[0xb];
  uVar6 = param_2[10];
  uVar5 = *(undefined8 *)((long)param_2 + 0x61);
  uVar3 = *(undefined8 *)((long)param_2 + 0x59);
  uVar9 = param_2[7];
  uVar8 = param_2[6];
  param_1[0xe] = 0;
  *(undefined8 *)((long)param_1 + 0x61) = uVar5;
  *(undefined8 *)((long)param_1 + 0x59) = uVar3;
  param_1[9] = uVar11;
  param_1[8] = uVar10;
  param_1[0xb] = uVar7;
  param_1[10] = uVar6;
  param_1[7] = uVar9;
  param_1[6] = uVar8;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  pvVar4 = (void *)param_2[0xe];
  uVar1 = param_2[0xf] - (long)pvVar4;
  if (uVar1 == 0) {
LAB_001757e0:
    unaff_x24 = param_1 + 0x11;
    *unaff_x24 = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    pvVar4 = (void *)param_2[0x11];
    uVar1 = param_2[0x12] - (long)pvVar4;
    if (uVar1 != 0) {
      if (0x924924924924924 < (ulong)(((long)uVar1 >> 2) * 0x6db6db6db6db6db7)) goto LAB_00175908;
                    /* try { // try from 00175808 to 0017580f has its CatchHandler @ 00175998 */
      pvVar2 = operator_new(uVar1);
      param_1[0x11] = pvVar2;
      param_1[0x12] = pvVar2;
      param_1[0x13] = (long)pvVar2 + uVar1;
      memcpy(pvVar2,pvVar4,uVar1 - 3);
      param_1[0x12] = (long)pvVar2 + uVar1;
    }
    unaff_x25 = param_1 + 0x14;
    *unaff_x25 = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    pvVar4 = (void *)param_2[0x14];
    uVar1 = param_2[0x15] - (long)pvVar4;
    if (uVar1 != 0) {
      if (0x924924924924924 < (ulong)(((long)uVar1 >> 2) * 0x6db6db6db6db6db7)) goto LAB_0017590c;
                    /* try { // try from 00175854 to 0017585b has its CatchHandler @ 00175988 */
      pvVar2 = operator_new(uVar1);
      param_1[0x14] = pvVar2;
      param_1[0x15] = pvVar2;
      param_1[0x16] = (long)pvVar2 + uVar1;
      memcpy(pvVar2,pvVar4,uVar1 - 3);
      param_1[0x15] = (long)pvVar2 + uVar1;
    }
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    pvVar4 = (void *)param_2[0x17];
    uVar1 = param_2[0x18] - (long)pvVar4;
    if (uVar1 != 0) {
      if (0x924924924924924 < (ulong)(((long)uVar1 >> 2) * 0x6db6db6db6db6db7)) goto LAB_00175910;
                    /* try { // try from 001758a0 to 001758a7 has its CatchHandler @ 0017592c */
      pvVar2 = operator_new(uVar1);
      param_1[0x17] = pvVar2;
      param_1[0x18] = pvVar2;
      param_1[0x19] = (long)pvVar2 + uVar1;
      memcpy(pvVar2,pvVar4,uVar1 - 3);
      param_1[0x18] = (long)pvVar2 + uVar1;
    }
    uVar7 = param_2[0x1b];
    uVar6 = param_2[0x1a];
    uVar5 = param_2[0x1d];
    uVar3 = param_2[0x1c];
    *(undefined2 *)(param_1 + 0x1e) = 0;
    *(undefined8 *)((long)param_1 + 0xfc) = 0;
    param_1[0x1b] = uVar7;
    param_1[0x1a] = uVar6;
    param_1[0x1d] = uVar5;
    param_1[0x1c] = uVar3;
    *(undefined8 *)((long)param_1 + 0xf4) = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
                    /* try { // try from 001758e0 to 001758e7 has its CatchHandler @ 00175914 */
    FUN_00175ab0(param_1 + 0x1e,param_2 + 0x1e);
    return;
  }
  if ((ulong)(((long)uVar1 >> 2) * 0x6db6db6db6db6db7) < 0x924924924924925) {
                    /* try { // try from 001757bc to 001757c3 has its CatchHandler @ 001759a8 */
    pvVar2 = operator_new(uVar1);
    param_1[0xe] = pvVar2;
    param_1[0xf] = pvVar2;
    param_1[0x10] = (long)pvVar2 + uVar1;
    memcpy(pvVar2,pvVar4,uVar1 - 3);
    param_1[0xf] = (long)pvVar2 + uVar1;
    goto LAB_001757e0;
  }
                    /* try { // try from 00175904 to 00175907 has its CatchHandler @ 001759a8 */
  FUN_00175a9c();
LAB_00175908:
                    /* try { // try from 00175908 to 0017590b has its CatchHandler @ 00175998 */
  FUN_00175a9c();
LAB_0017590c:
                    /* try { // try from 0017590c to 0017590f has its CatchHandler @ 00175988 */
  FUN_00175a9c();
LAB_00175910:
                    /* try { // try from 00175910 to 00175913 has its CatchHandler @ 0017592c */
  uVar3 = FUN_00175a9c();
                    /* catch() { ... } // from try @ 001758e0 with catch @ 00175914 */
  FUN_00175c80(param_1 + 0x22);
  pvVar4 = (void *)param_1[0x17];
  if (pvVar4 != (void *)0x0) {
    param_1[0x18] = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = (void *)*unaff_x25;
  if (pvVar4 != (void *)0x0) {
    param_1[0x15] = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = (void *)*unaff_x24;
  if (pvVar4 != (void *)0x0) {
    param_1[0x12] = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = (void *)param_1[0xe];
  if (pvVar4 != (void *)0x0) {
    param_1[0xf] = pvVar4;
    operator_delete(pvVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0016eec4(uVar3);
}


// ===== 001759b8  FUN_001759b8 =====

void FUN_001759b8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00175a08  FUN_00175a08 =====

void FUN_00175a08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00175a1c("vector");
}


// ===== 00175a1c  FUN_00175a1c =====

void FUN_00175a1c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 00175a38 to 00175a3f has its CatchHandler @ 00175a58 */
  FUN_00175a6c(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_typeinfo_001f0a00,PTR__out_of_range_001f09f8);
}


// ===== 00175a6c  FUN_00175a6c =====

void FUN_00175a6c(logic_error *param_1,char *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  *(undefined **)param_1 = PTR_vtable_001f0a08 + 0x10;
  return;
}


// ===== 00175a9c  FUN_00175a9c =====

void FUN_00175a9c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00173064("vector");
}


// ===== 00175ab0  FUN_00175ab0 =====

undefined2 * FUN_00175ab0(undefined2 *param_1,undefined2 *param_2)

{
  long lVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  void *__dest;
  ulong *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong *puVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  
  *param_1 = *param_2;
  uVar6 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 2) = uVar6;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  puVar14 = *(undefined8 **)(param_2 + 0x10);
  if (puVar14 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)operator_new(0x30);
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    pvVar5 = (void *)*puVar14;
    uVar12 = puVar14[1] - (long)pvVar5;
    if (uVar12 != 0) {
      if ((long)uVar12 < 0) {
                    /* try { // try from 00175c4c to 00175c4f has its CatchHandler @ 00175c58 */
        FUN_00175cd0();
        goto LAB_00175c50;
      }
                    /* try { // try from 00175b0c to 00175b13 has its CatchHandler @ 00175c58 */
      __dest = operator_new(uVar12);
      *puVar3 = __dest;
      puVar3[2] = (long)__dest + uVar12;
      memcpy(__dest,pvVar5,uVar12);
      puVar3[1] = (long)__dest + uVar12;
    }
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    uVar12 = puVar14[4];
    if (uVar12 != 0) {
      if ((long)uVar12 < 0) {
LAB_00175c50:
                    /* try { // try from 00175c50 to 00175c53 has its CatchHandler @ 00175c54 */
        uVar6 = FUN_00175ce4();
                    /* catch() { ... } // from try @ 00175b54 with catch @ 00175c54
                       catch() { ... } // from try @ 00175c50 with catch @ 00175c54 */
                    /* catch() { ... } // from try @ 00175b0c with catch @ 00175c58
                       catch() { ... } // from try @ 00175c4c with catch @ 00175c58 */
        pvVar5 = (void *)*puVar3;
        if (pvVar5 != (void *)0x0) {
          puVar3[1] = pvVar5;
          operator_delete(pvVar5);
        }
        operator_delete(puVar3);
                    /* WARNING: Subroutine does not return */
        FUN_0016eec4(uVar6);
      }
      uVar13 = uVar12 - 1 >> 6;
      lVar1 = uVar13 + 1;
                    /* try { // try from 00175b54 to 00175b57 has its CatchHandler @ 00175c54 */
      puVar4 = (ulong *)operator_new(lVar1 * 8);
      puVar3[3] = puVar4;
      puVar7 = (ulong *)puVar14[3];
      uVar10 = 0;
      if (0x40 < uVar12) {
        uVar10 = uVar13;
      }
      puVar3[5] = lVar1;
      puVar3[4] = uVar12;
      puVar4[uVar10] = 0;
      if ((0x3f < uVar12) || ((uVar12 & 0x3f) != 0)) {
        uVar13 = 0;
        uVar9 = 0;
        uVar10 = 0;
        puVar2 = puVar7 + (uVar12 >> 6);
        do {
          uVar11 = 1L << (uVar13 & 0x3f);
          if ((*puVar7 >> (uVar10 & 0x3f) & 1) == 0) {
            uVar11 = *puVar4 & (uVar11 ^ 0xffffffffffffffff);
          }
          else {
            uVar11 = *puVar4 | uVar11;
          }
          iVar8 = (int)uVar10;
          *puVar4 = uVar11;
          uVar10 = 0;
          if (uVar9 != 0x3f) {
            uVar10 = (ulong)(iVar8 + 1);
          }
          iVar8 = (int)uVar13;
          puVar7 = puVar7 + (uVar9 == 0x3f);
          uVar9 = 0;
          if (iVar8 != 0x3f) {
            uVar9 = iVar8 + 1;
          }
          uVar13 = (ulong)uVar9;
          puVar4 = puVar4 + (iVar8 == 0x3f);
          uVar9 = (uint)uVar10;
        } while ((puVar7 != puVar2) || (((uint)uVar12 & 0x3f) != uVar9));
      }
    }
  }
  puVar14 = *(undefined8 **)(param_1 + 0x10);
  *(undefined8 **)(param_1 + 0x10) = puVar3;
  if (puVar14 != (undefined8 *)0x0) {
    if ((void *)puVar14[3] != (void *)0x0) {
      operator_delete((void *)puVar14[3]);
    }
    pvVar5 = (void *)*puVar14;
    if (pvVar5 != (void *)0x0) {
      puVar14[1] = pvVar5;
      operator_delete(pvVar5);
    }
    operator_delete(puVar14);
  }
  return param_1;
}


// ===== 00175c80  FUN_00175c80 =====

void FUN_00175c80(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  *param_1 = 0;
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
    return;
  }
  return;
}


// ===== 00175cd0  FUN_00175cd0 =====

void FUN_00175cd0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00173064("vector");
}


// ===== 00175ce4  FUN_00175ce4 =====

void FUN_00175ce4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00173064("vector");
}


// ===== 00175cf8  FUN_00175cf8 =====

void FUN_00175cf8(float param_1,ushort *param_2,ushort *param_3)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  float *pfVar4;
  void *pvVar5;
  ulong *puVar6;
  ushort *extraout_x1;
  ushort *puVar7;
  ushort uVar8;
  uint uVar9;
  float *pfVar10;
  float *pfVar11;
  ulong uVar12;
  ulong *puVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  float *pfVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  float *pfVar23;
  ulong uVar24;
  float *pfVar25;
  float *pfVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  uVar3 = *param_3;
  uVar8 = uVar3 & 0xfff8 | 1;
  *param_3 = uVar8;
  if ((uVar3 >> 3 & 1) != 0) {
    if (uVar8 < 0x40) {
      *(float *)(param_2 + (ulong)(uVar3 >> 4) * 2 + 2) = param_1;
      goto LAB_001760ac;
    }
    uVar24 = (ulong)(uVar3 >> 4) - 4;
    lVar22 = **(long **)(param_2 + 0x10);
    if (uVar24 < (ulong)((*(long **)(param_2 + 0x10))[1] - lVar22 >> 2)) {
      *(float *)(lVar22 + uVar24 * 4) = param_1;
      goto LAB_001760ac;
    }
    FUN_00175a08();
LAB_001760d4:
    FUN_00175cd0();
LAB_001760d8:
                    /* WARNING: Subroutine does not return */
    FUN_001730e4();
  }
  if (((float)(int)param_1 == param_1) && (uVar9 = (uint)param_1, uVar9 + 0x7ff < 0xfff)) {
    uVar2 = -uVar9 | 0x800;
    if (0.0 <= param_1) {
      uVar2 = uVar9;
    }
    uVar8 = (ushort)(uVar2 << 4) | 1;
    goto LAB_001760ac;
  }
  uVar3 = *param_2;
  *param_2 = uVar3 + 1;
  puVar7 = param_3;
  if ((ulong)uVar3 < 4) {
    *(float *)(param_2 + (ulong)uVar3 * 2 + 2) = param_1;
    uVar8 = 1;
  }
  else {
    plVar21 = *(long **)(param_2 + 0x10);
    if (plVar21 == (long *)0x0) {
      plVar21 = (long *)operator_new(0x30);
      *(long **)(param_2 + 0x10) = plVar21;
      plVar21[1] = 0;
      *plVar21 = 0;
      plVar21[3] = 0;
      plVar21[2] = 0;
      plVar21[5] = 0;
      plVar21[4] = 0;
    }
    pfVar25 = (float *)plVar21[1];
    if (pfVar25 < (float *)plVar21[2]) {
      pfVar26 = pfVar25 + 1;
      *pfVar25 = param_1;
    }
    else {
      pfVar23 = (float *)*plVar21;
      lVar22 = (long)pfVar25 - (long)pfVar23 >> 2;
      uVar24 = lVar22 + 1;
      if (uVar24 >> 0x3e != 0) goto LAB_001760d4;
      uVar12 = plVar21[2] - (long)pfVar23;
      uVar15 = (long)uVar12 >> 1;
      if (uVar15 <= uVar24) {
        uVar15 = uVar24;
      }
      if (0x7ffffffffffffffb < uVar12) {
        uVar15 = 0x3fffffffffffffff;
      }
      if (uVar15 == 0) {
        pvVar5 = (void *)0x0;
      }
      else {
        if (uVar15 >> 0x3e != 0) goto LAB_001760d8;
        pvVar5 = operator_new(uVar15 << 2);
      }
      pfVar11 = (float *)((long)pvVar5 + lVar22 * 4);
      pfVar26 = pfVar11 + 1;
      *pfVar11 = param_1;
      if ((long)pfVar25 - (long)pfVar23 != 0) {
        uVar24 = ((long)pfVar25 - (long)pfVar23) - 4;
        pfVar10 = pfVar11;
        if ((0x1b < uVar24) &&
           (0x1f < (ulong)((long)pfVar25 + (-((long)pfVar25 - (long)pfVar23) - (long)pvVar5)))) {
          pfVar17 = pfVar25 + -4;
          uVar24 = (uVar24 >> 2) + 1;
          uVar20 = uVar24 & 0x7ffffffffffffff8;
          pfVar25 = pfVar25 + -uVar20;
          pfVar10 = pfVar11 + -uVar20;
          pfVar11 = pfVar11 + -4;
          uVar12 = uVar20;
          do {
            pfVar4 = pfVar17 + -2;
            uVar29 = *(undefined8 *)(pfVar17 + -4);
            uVar28 = *(undefined8 *)(pfVar17 + 2);
            uVar27 = *(undefined8 *)pfVar17;
            uVar12 = uVar12 - 8;
            pfVar17 = pfVar17 + -8;
            *(undefined8 *)(pfVar11 + -2) = *(undefined8 *)pfVar4;
            *(undefined8 *)(pfVar11 + -4) = uVar29;
            *(undefined8 *)(pfVar11 + 2) = uVar28;
            *(undefined8 *)pfVar11 = uVar27;
            pfVar11 = pfVar11 + -8;
          } while (uVar12 != 0);
          pfVar11 = pfVar10;
          if (uVar24 == uVar20) goto LAB_00175f24;
        }
        do {
          pfVar25 = pfVar25 + -1;
          pfVar11 = pfVar10 + -1;
          *pfVar11 = *pfVar25;
          pfVar10 = pfVar11;
        } while (pfVar25 != pfVar23);
      }
LAB_00175f24:
      *plVar21 = (long)pfVar11;
      plVar21[1] = (long)pfVar26;
      plVar21[2] = (long)((long)pvVar5 + uVar15 * 4);
      if (pfVar23 != (float *)0x0) {
        operator_delete(pfVar23);
      }
    }
    plVar21[1] = (long)pfVar26;
    lVar22 = *(long *)(param_2 + 0x10);
    uVar24 = *(ulong *)(lVar22 + 0x20);
    if (uVar24 == *(long *)(lVar22 + 0x28) * 0x40) {
      if ((long)(uVar24 + 1) < 0) {
LAB_00175f8c:
        FUN_00175ce4();
        puVar7 = extraout_x1;
LAB_00175f90:
        uVar12 = 0x7fffffffffffffff;
        if (0x7ffffffffffffffe < uVar24) {
          uVar24 = 0xffffffffffffffff;
          goto LAB_00176074;
        }
      }
      else {
        if (0x3ffffffffffffffe < uVar24) goto LAB_00175f90;
        uVar12 = *(long *)(lVar22 + 0x28) * 0x80;
        uVar15 = (uVar24 & 0x3fffffffffffffc0) + 0x40;
        if (uVar12 < uVar15 || uVar12 - uVar15 == 0) {
          uVar12 = uVar15;
        }
        if (uVar12 <= uVar24) goto LAB_00176074;
        if ((long)uVar12 < 0) goto LAB_00175f8c;
      }
      lVar1 = (uVar12 - 1 >> 6) + 1;
      puVar6 = (ulong *)operator_new(lVar1 * 8);
      puVar13 = *(ulong **)(lVar22 + 0x18);
      uVar15 = 0;
      if (0x40 < uVar24) {
        uVar15 = uVar24 - 1 >> 6;
      }
      puVar6[uVar15] = 0;
      if ((0x3f < uVar24) || ((uVar24 & 0x3f) != 0)) {
        uVar15 = 0;
        uVar12 = 0;
        puVar18 = puVar6;
        puVar19 = puVar13;
        do {
          uVar20 = 1L << (uVar15 & 0x3f);
          if ((*puVar19 >> (uVar12 & 0x3f) & 1) == 0) {
            uVar20 = *puVar18 & (uVar20 ^ 0xffffffffffffffff);
          }
          else {
            uVar20 = *puVar18 | uVar20;
          }
          iVar16 = (int)uVar12;
          *puVar18 = uVar20;
          uVar9 = 0;
          if (iVar16 != 0x3f) {
            uVar9 = iVar16 + 1;
          }
          uVar12 = (ulong)uVar9;
          iVar14 = (int)uVar15;
          puVar19 = puVar19 + (iVar16 == 0x3f);
          uVar2 = 0;
          if (iVar14 != 0x3f) {
            uVar2 = iVar14 + 1;
          }
          uVar15 = (ulong)uVar2;
          puVar18 = puVar18 + (iVar14 == 0x3f);
        } while ((uVar9 != ((uint)uVar24 & 0x3f)) || (puVar19 != puVar13 + (uVar24 >> 6)));
      }
      *(ulong **)(lVar22 + 0x18) = puVar6;
      *(long *)(lVar22 + 0x28) = lVar1;
      puVar7 = param_3;
      if (puVar13 != (ulong *)0x0) {
        operator_delete(puVar13);
        uVar24 = *(ulong *)(lVar22 + 0x20);
      }
    }
LAB_00176074:
    *(ulong *)(lVar22 + 0x20) = uVar24 + 1;
    uVar8 = *puVar7;
    uVar15 = uVar24 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(*(long *)(lVar22 + 0x18) + uVar15) =
         *(ulong *)(*(long *)(lVar22 + 0x18) + uVar15) &
         (1L << (uVar24 & 0x3f) ^ 0xffffffffffffffffU);
    uVar8 = uVar8 & 7;
  }
  uVar8 = uVar8 | uVar3 << 4 | 8;
  param_3 = puVar7;
LAB_001760ac:
  *param_3 = uVar8;
  return;
}


// ===== 001760dc  FUN_001760dc =====

void FUN_001760dc(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

{
  void *__src;
  float *pfVar1;
  int *piVar2;
  dynamic *this;
  long lVar3;
  undefined4 *extraout_x8;
  ulong uVar4;
  void *__dest;
  float fVar5;
  undefined4 auStack_b8 [2];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  long lStack_88;
  
  lVar3 = param_1[2];
  __dest = (void *)*param_1;
  if (param_4 <= (ulong)((lVar3 - (long)__dest >> 2) * 0x6db6db6db6db6db7)) {
    lVar3 = (long)param_1[1] - (long)__dest;
    if ((ulong)((lVar3 >> 2) * 0x6db6db6db6db6db7) < param_4) {
      __src = (void *)((long)param_2 + lVar3);
      if ((void *)param_1[1] != __dest) {
        memmove(__dest,param_2,lVar3 - 3);
        __dest = (void *)param_1[1];
      }
      lVar3 = -(long)__src;
    }
    else {
      lVar3 = -(long)param_2;
      __src = param_2;
    }
    param_3 = param_3 + lVar3;
    if (param_3 != 0) {
      memmove(__dest,__src,param_3 - 3);
    }
LAB_00176234:
    param_1[1] = (long)__dest + param_3;
    return;
  }
  if (__dest != (void *)0x0) {
    param_1[1] = __dest;
    operator_delete(__dest);
    lVar3 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 < 0x924924924924925) {
    uVar4 = (lVar3 >> 2) * -0x2492492492492492;
    if (uVar4 < param_4 || uVar4 - param_4 == 0) {
      uVar4 = param_4;
    }
    if (0x492492492492491 < (ulong)((lVar3 >> 2) * 0x6db6db6db6db6db7)) {
      uVar4 = 0x924924924924924;
    }
    if (uVar4 < 0x924924924924925) {
      __dest = operator_new(uVar4 * 0x1c);
      param_3 = param_3 - (long)param_2;
      *param_1 = __dest;
      param_1[1] = __dest;
      param_1[2] = (void *)((long)__dest + uVar4 * 0x1c);
      if (param_3 != 0) {
        memcpy(__dest,param_2,param_3 - 3);
      }
      goto LAB_00176234;
    }
  }
  pfVar1 = (float *)FUN_00175a9c();
  lVar3 = tpidr_el0;
  lStack_88 = *(long *)(lVar3 + 0x28);
  auStack_b8[0] = 5;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0x3f800000;
  folly::dynamic::destroy();
  fVar5 = pfVar1[1];
  piVar2 = (int *)folly::dynamic::operator[](auStack_b8,&DAT_0013ff1c,&DAT_0013ff1f);
  if (*piVar2 != 3) {
    folly::dynamic::destroy();
    *piVar2 = 3;
  }
  *(double *)(piVar2 + 2) = (double)fVar5;
  fVar5 = *pfVar1;
  piVar2 = (int *)folly::dynamic::operator[](auStack_b8,&DAT_0013f7ce,&DAT_0013f7d2);
  if (*piVar2 != 3) {
    folly::dynamic::destroy();
    *piVar2 = 3;
  }
  *(double *)(piVar2 + 2) = (double)fVar5;
  fVar5 = pfVar1[3];
  piVar2 = (int *)folly::dynamic::operator[](auStack_b8,"bottom","");
  if (*piVar2 != 3) {
    folly::dynamic::destroy();
    *piVar2 = 3;
  }
  *(double *)(piVar2 + 2) = (double)fVar5;
  fVar5 = pfVar1[2];
  piVar2 = (int *)folly::dynamic::operator[](auStack_b8,"right","");
  if (*piVar2 != 3) {
    folly::dynamic::destroy();
    *piVar2 = 3;
  }
  *(double *)(piVar2 + 2) = (double)fVar5;
  *extraout_x8 = 5;
  *(undefined8 *)(extraout_x8 + 2) = 0;
  *(undefined8 *)(extraout_x8 + 4) = 0;
  *(undefined8 *)(extraout_x8 + 6) = 0;
  *(undefined8 *)(extraout_x8 + 8) = 0;
  extraout_x8[10] = 0x3f800000;
  folly::dynamic::destroy();
  this = (dynamic *)folly::dynamic::operator[](extraout_x8,"insets","");
  folly::dynamic::operator=(this,(dynamic *)auStack_b8);
  folly::dynamic::destroy();
  if (*(long *)(lVar3 + 0x28) == lStack_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00176254  facebook::react::RNSSafeAreaViewState::getDynamic =====

/* facebook::react::RNSSafeAreaViewState::getDynamic() const */

void facebook::react::RNSSafeAreaViewState::getDynamic(void)

{
  long lVar1;
  float *in_x0;
  int *piVar2;
  dynamic *this;
  undefined4 *in_x8;
  float fVar3;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_78[0] = 5;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0x3f800000;
  folly::dynamic::destroy();
  fVar3 = in_x0[1];
                    /* try { // try from 001762b8 to 0017638b has its CatchHandler @ 00176444 */
  piVar2 = (int *)folly::dynamic::operator[](local_78,&DAT_0013ff1c,&DAT_0013ff1f);
  if (*piVar2 != 3) {
    folly::dynamic::destroy();
    *piVar2 = 3;
  }
  *(double *)(piVar2 + 2) = (double)fVar3;
  fVar3 = *in_x0;
  piVar2 = (int *)folly::dynamic::operator[](local_78,&DAT_0013f7ce,&DAT_0013f7d2);
  if (*piVar2 != 3) {
    folly::dynamic::destroy();
    *piVar2 = 3;
  }
  *(double *)(piVar2 + 2) = (double)fVar3;
  fVar3 = in_x0[3];
  piVar2 = (int *)folly::dynamic::operator[](local_78,"bottom","");
  if (*piVar2 != 3) {
    folly::dynamic::destroy();
    *piVar2 = 3;
  }
  *(double *)(piVar2 + 2) = (double)fVar3;
  fVar3 = in_x0[2];
  piVar2 = (int *)folly::dynamic::operator[](local_78,"right","");
  if (*piVar2 != 3) {
    folly::dynamic::destroy();
    *piVar2 = 3;
  }
  *(double *)(piVar2 + 2) = (double)fVar3;
  *in_x8 = 5;
  *(undefined8 *)(in_x8 + 2) = 0;
  *(undefined8 *)(in_x8 + 4) = 0;
  *(undefined8 *)(in_x8 + 6) = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  in_x8[10] = 0x3f800000;
  folly::dynamic::destroy();
                    /* try { // try from 001763e8 to 00176403 has its CatchHandler @ 00176434 */
  this = (dynamic *)folly::dynamic::operator[]();
  folly::dynamic::operator=(this,(dynamic *)local_78);
  folly::dynamic::destroy();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017646c  facebook::react::RNSScreenShadowNode::getContentOriginOffset =====

/* facebook::react::RNSScreenShadowNode::getContentOriginOffset(bool) const */

undefined4 facebook::react::RNSScreenShadowNode::getContentOriginOffset(bool param_1)

{
  return *(undefined4 *)(*(long *)(*(long *)((ulong)param_1 + 0x28) + 0x18) + 8);
}


// ===== 0017647c  facebook::react::findHeaderConfigChild =====

/* facebook::react::findHeaderConfigChild(facebook::react::YogaLayoutableShadowNode const&) */

undefined1  [16] facebook::react::findHeaderConfigChild(YogaLayoutableShadowNode *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  char *__s1;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  plVar3 = (long *)facebook::react::ShadowNode::getChildren();
  lVar4 = *plVar3;
  lVar1 = plVar3[1];
  if (lVar4 != lVar1) {
    uVar5 = 1;
    lVar6 = lVar4;
    do {
      __s1 = (char *)facebook::react::ShadowNode::getComponentName();
      iVar2 = strcmp(__s1,"RNSScreenStackHeaderConfig");
      if (iVar2 == 0) goto LAB_001764dc;
      lVar6 = lVar6 + 0x10;
      lVar4 = lVar4 + 0x10;
    } while (lVar6 != lVar1);
  }
  uVar5 = 0;
  lVar4 = 0;
LAB_001764dc:
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = lVar4;
  return auVar7;
}


// ===== 001764f8  facebook::react::findHeaderHeight =====

/* facebook::react::findHeaderHeight(int, bool, bool) */

ulong facebook::react::findHeaderHeight(int param_1,bool param_2,bool param_3)

{
  long lVar1;
  _jclass *p_Var2;
  _jmethodID *p_Var3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  LogMessage aLStack_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  p_Var2 = (_jclass *)facebook::jni::Environment::current();
  if (p_Var2 == (_jclass *)0x0) {
    google::LogMessage::LogMessage
              (aLStack_68,
               "/ci/build/discord/discord/discord_app/node_modules/react-native-screens/common/cpp/react/renderer/components/rnscreens/RNSScreenShadowNode.cpp"
               ,0x28,2);
                    /* try { // try from 001765fc to 00176613 has its CatchHandler @ 00176744 */
    uVar6 = google::LogMessage::stream();
    FUN_00176dbc(uVar6,"[RNScreens] Failed to retrieve env\n",0x23);
  }
  else {
    p_Var3 = (_jmethodID *)
             (**(code **)(*(long *)p_Var2 + 0x30))
                       (p_Var2,"com/swmansion/rnscreens/utils/ScreenDummyLayoutHelper");
    if (p_Var3 == (_jmethodID *)0x0) {
      google::LogMessage::LogMessage
                (aLStack_68,
                 "/ci/build/discord/discord/discord_app/node_modules/react-native-screens/common/cpp/react/renderer/components/rnscreens/RNSScreenShadowNode.cpp"
                 ,0x2f,2);
                    /* try { // try from 00176630 to 00176657 has its CatchHandler @ 00176740 */
      uVar6 = google::LogMessage::stream();
      uVar6 = FUN_00176dbc(uVar6,"[RNScreens] Failed to find class with id ",0x29);
      FUN_00176dbc(uVar6,"com/swmansion/rnscreens/utils/ScreenDummyLayoutHelper",0x35);
    }
    else {
      lVar4 = (**(code **)(*(long *)p_Var2 + 0x108))(p_Var2,p_Var3,"computeDummyLayout","(IZZ)F");
      if (lVar4 == 0) {
        google::LogMessage::LogMessage
                  (aLStack_68,
                   "/ci/build/discord/discord/discord_app/node_modules/react-native-screens/common/cpp/react/renderer/components/rnscreens/RNSScreenShadowNode.cpp"
                   ,0x38,2);
                    /* try { // try from 00176674 to 0017668b has its CatchHandler @ 0017673c */
        uVar6 = google::LogMessage::stream();
        FUN_00176dbc(uVar6,"[RNScreens] Failed to retrieve computeDummyLayout method ID",0x3b);
      }
      else {
        lVar5 = (**(code **)(*(long *)p_Var2 + 0x388))
                          (p_Var2,p_Var3,"getInstance",
                           "()Lcom/swmansion/rnscreens/utils/ScreenDummyLayoutHelper;");
        if (lVar5 == 0) {
          google::LogMessage::LogMessage
                    (aLStack_68,
                     "/ci/build/discord/discord/discord_app/node_modules/react-native-screens/common/cpp/react/renderer/components/rnscreens/RNSScreenShadowNode.cpp"
                     ,0x42,2);
                    /* try { // try from 001766a8 to 001766bf has its CatchHandler @ 00176738 */
          uVar6 = google::LogMessage::stream();
          FUN_00176dbc(uVar6,"[RNScreens] Failed to retrieve getInstanceMethodID",0x32);
        }
        else {
          lVar5 = _JNIEnv::CallStaticObjectMethod(p_Var2,p_Var3,lVar5);
          if (lVar5 != 0) {
            uVar9 = FUN_00176808(p_Var2,lVar5,lVar4,param_1,param_2,param_3);
            uVar8 = (ulong)uVar9;
            uVar7 = 0x100000000;
            goto LAB_00176704;
          }
          google::LogMessage::LogMessage
                    (aLStack_68,
                     "/ci/build/discord/discord/discord_app/node_modules/react-native-screens/common/cpp/react/renderer/components/rnscreens/RNSScreenShadowNode.cpp"
                     ,0x4a,2);
                    /* try { // try from 001766dc to 001766f3 has its CatchHandler @ 00176734 */
          uVar6 = google::LogMessage::stream();
          FUN_00176dbc(uVar6,
                       "[RNScreens] Failed to retrieve packageInstance or the package instance was null on JVM side"
                       ,0x5b);
        }
      }
    }
  }
  google::LogMessage::~LogMessage(aLStack_68);
  uVar7 = 0;
  uVar8 = 0;
LAB_00176704:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar8 | uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017676c  _JNIEnv::CallStaticObjectMethod =====

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


// ===== 00176808  FUN_00176808 =====

void FUN_00176808(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  (**(code **)(*param_1 + 0x1c0))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001768a4  facebook::react::RNSScreenShadowNode::appendChild =====

/* facebook::react::RNSScreenShadowNode::appendChild(std::__ndk1::shared_ptr<facebook::react::ShadowNode
   const> const&) */

void facebook::react::RNSScreenShadowNode::appendChild(shared_ptr *param_1)

{
  char cVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  char *__s1;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined4 uVar9;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  facebook::react::YogaLayoutableShadowNode::appendChild(param_1);
  if ((**(float **)(*(long *)(param_1 + 0x28) + 0x18) == 0.0) ||
     ((*(float **)(*(long *)(param_1 + 0x28) + 0x18))[1] == 0.0)) {
    plVar5 = (long *)facebook::react::ShadowNode::getChildren();
    lVar6 = plVar5[1];
    for (lVar8 = *plVar5; lVar8 != lVar6; lVar8 = lVar8 + 0x10) {
      __s1 = (char *)facebook::react::ShadowNode::getComponentName();
      iVar4 = strcmp(__s1,"RNSScreenStackHeaderConfig");
      if (iVar4 == 0) {
        plVar5 = (long *)facebook::react::ShadowNode::getProps();
        lVar8 = *plVar5;
        plVar5 = (long *)plVar5[1];
        if (plVar5 != (long *)0x0) {
          FUN_00174090(1,plVar5 + 1);
          lVar6 = FUN_001735f0(0xffffffffffffffff,plVar5 + 1);
          if (lVar6 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            std::__ndk1::__shared_weak_count::__release_weak();
          }
        }
        uVar9 = 0;
        if (*(char *)(lVar8 + 0x73c) == '\0' && *(char *)(lVar8 + 0x79c) == '\0') {
          cVar1 = *(char *)(lVar8 + 0x874);
          cVar2 = *(char *)(lVar8 + 0x870);
          iVar4 = *(int *)(lVar8 + 0x7e0);
          if (*(char *)(lVar8 + 0x7b8) == '\0') {
            local_60 = local_60 & 0xffffffffffff0000;
          }
          else if ((*(byte *)(lVar8 + 0x7a0) & 1) == 0) {
            uStack_58 = *(ulong *)(lVar8 + 0x7a8);
            local_60 = *(ulong *)(lVar8 + 0x7a0);
            local_50 = *(void **)(lVar8 + 0x7b0);
          }
          else {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            __init_copy_ctor_external
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_60,*(char **)(lVar8 + 0x7b0),*(ulong *)(lVar8 + 0x7a8));
          }
          uVar7 = local_60 >> 1 & 0x7f;
          if ((local_60 & 1) != 0) {
            uVar7 = uStack_58;
          }
                    /* try { // try from 00176a14 to 00176a17 has its CatchHandler @ 00176a98 */
          uVar7 = findHeaderHeight(iVar4,uVar7 == 0,cVar1 != '\0' || cVar2 != '\0');
          uVar9 = 0;
          if (uVar7 >> 0x20 != 0) {
            uVar9 = (int)uVar7;
          }
          if ((local_60 & 1) != 0) {
            operator_delete(local_50);
          }
        }
        facebook::react::YogaLayoutableShadowNode::setPadding(0,0,0,uVar9,param_1);
        lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 0x18);
        *(undefined4 *)(lVar8 + 0x10) = uVar9;
        *(byte *)(lVar8 + 0x14) = *(byte *)(lVar8 + 0x14) | 3;
        break;
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00176ac8  facebook::react::RNSScreenShadowNode::setHeaderHeight =====

/* facebook::react::RNSScreenShadowNode::setHeaderHeight(float) */

void __thiscall
facebook::react::RNSScreenShadowNode::setHeaderHeight(RNSScreenShadowNode *this,float param_1)

{
  *(float *)(*(long *)(*(long *)(this + 0x28) + 0x18) + 0x10) = param_1;
  return;
}


// ===== 00176ad8  facebook::react::RNSScreenShadowNode::getFrameCorrectionModes =====

/* facebook::react::RNSScreenShadowNode::getFrameCorrectionModes() */

long __thiscall
facebook::react::RNSScreenShadowNode::getFrameCorrectionModes(RNSScreenShadowNode *this)

{
  return *(long *)(*(long *)(this + 0x28) + 0x18) + 0x14;
}


// ===== 00176ae8  facebook::react::RNSScreenShadowNode::layout =====

/* facebook::react::RNSScreenShadowNode::layout(facebook::react::LayoutContext) */

void __thiscall
facebook::react::RNSScreenShadowNode::layout(RNSScreenShadowNode *this,undefined8 *param_2)

{
  byte bVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uStack_48 = param_2[1];
  local_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  local_30 = param_2[4];
  facebook::react::YogaLayoutableShadowNode::layout(this,&local_50);
  bVar1 = *(byte *)(*(long *)(*(long *)(this + 0x28) + 0x18) + 0x14);
  uVar4 = 0x3f800000;
  if ((bVar1 & 2) == 0) {
    uVar4 = 0;
  }
  uVar3 = 0x3f800000;
  if ((bVar1 & 1) == 0) {
    uVar3 = 0;
  }
  uVar5 = *(undefined4 *)(*(long *)(*(long *)(this + 0x28) + 0x18) + 0x10);
  uVar6 = NEON_fmadd(uVar5,uVar4,*(undefined4 *)(this + 0x6c));
  uVar4 = NEON_fmsub(uVar5,uVar3,*(undefined4 *)(this + 0x74));
  *(undefined4 *)(this + 0x6c) = uVar6;
  *(undefined4 *)(this + 0x74) = uVar4;
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00176b84  facebook::react::RNSScreenShadowNode::applyFrameCorrections =====

/* facebook::react::RNSScreenShadowNode::applyFrameCorrections() */

void __thiscall
facebook::react::RNSScreenShadowNode::applyFrameCorrections(RNSScreenShadowNode *this)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  bVar1 = *(byte *)(*(long *)(*(long *)(this + 0x28) + 0x18) + 0x14);
  uVar3 = 0x3f800000;
  if ((bVar1 & 2) == 0) {
    uVar3 = 0;
  }
  uVar2 = 0x3f800000;
  if ((bVar1 & 1) == 0) {
    uVar2 = 0;
  }
  uVar4 = *(undefined4 *)(*(long *)(*(long *)(this + 0x28) + 0x18) + 0x10);
  uVar5 = NEON_fmadd(uVar4,uVar3,*(undefined4 *)(this + 0x6c));
  uVar3 = NEON_fmsub(uVar4,uVar2,*(undefined4 *)(this + 0x74));
  *(undefined4 *)(this + 0x6c) = uVar5;
  *(undefined4 *)(this + 0x74) = uVar3;
  return;
}


// ===== 00176bc8  facebook::react::RNSScreenShadowNode::getStateDataMutable =====

/* facebook::react::RNSScreenShadowNode::getStateDataMutable() */

undefined8 __thiscall
facebook::react::RNSScreenShadowNode::getStateDataMutable(RNSScreenShadowNode *this)

{
  return *(undefined8 *)(*(long *)(this + 0x28) + 0x18);
}


// ===== 00176bd4  facebook::react::RNSScreenShadowNode::resetFrameSizeState =====

/* facebook::react::RNSScreenShadowNode::resetFrameSizeState() */

void __thiscall facebook::react::RNSScreenShadowNode::resetFrameSizeState(RNSScreenShadowNode *this)

{
  **(undefined8 **)(*(long *)(this + 0x28) + 0x18) = 0;
  return;
}


// ===== 00176be4  FUN_00176be4 =====

void FUN_00176be4(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_001f09e8 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_00173ffc(param_1 + 0x23);
  FUN_00173f00(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00176ca4  FUN_00176ca4 =====

void FUN_00176ca4(long param_1)

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


// ===== 00176d0c  FUN_00176d0c =====

bool FUN_00176d0c(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 00176d24  FUN_00176d24 =====

bool FUN_00176d24(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 00176d3c  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init_copy_ctor_external =====

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
      FUN_00173050(this);
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


// ===== 00176dac  FUN_00176dac =====

void FUN_00176dac(void)

{
  __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 00176dbc  FUN_00176dbc =====

basic_ostream * FUN_00176dbc(basic_ostream *param_1,long param_2,long param_3)

{
  basic_ostream *pbVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  sentry local_70 [16];
  id aiStack_60 [8];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00176df0 to 00176dfb has its CatchHandler @ 00176f08 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry(local_70,param_1);
  if (local_70[0] != (sentry)0x0) {
    pbVar1 = param_1 + *(long *)(*(long *)param_1 + -0x18);
    uVar7 = *(undefined8 *)(pbVar1 + 0x28);
    uVar2 = *(uint *)(pbVar1 + 8);
    if (*(int *)(pbVar1 + 0x90) == -1) {
                    /* try { // try from 00176e24 to 00176e33 has its CatchHandler @ 00176ef8 */
      std::__ndk1::ios_base::getloc();
                    /* try { // try from 00176e34 to 00176e53 has its CatchHandler @ 00176ee8 */
      plVar5 = (long *)std::__ndk1::locale::use_facet(aiStack_60);
      uVar4 = (**(code **)(*plVar5 + 0x38))(plVar5,0x20);
      std::__ndk1::locale::~locale((locale *)aiStack_60);
      *(uint *)(pbVar1 + 0x90) = uVar4 & 0xff;
    }
    lVar6 = param_2 + param_3;
    if ((uVar2 & 0xb0) != 0x20) {
      lVar6 = param_2;
    }
                    /* try { // try from 00176e80 to 00176e8b has its CatchHandler @ 00176ef8 */
    lVar6 = FUN_00176f54(uVar7,param_2,lVar6,param_2 + param_3,pbVar1);
    if (lVar6 == 0) {
                    /* try { // try from 00176ea4 to 00176eab has its CatchHandler @ 00176ee4 */
      std::__ndk1::ios_base::clear((int)param_1 + (int)*(undefined8 *)(*(long *)param_1 + -0x18));
    }
  }
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(local_70);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00176f54  FUN_00176f54 =====

long * FUN_00176f54(long *param_1,long param_2,long param_3,long param_4,long param_5,int param_6)

{
  ulong __n;
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  ulong local_80;
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_1 == (long *)0x0) goto LAB_001770a4;
  lVar4 = param_3 - param_2;
  __n = *(long *)(param_5 + 0x18) - (param_4 - param_2);
  if (__n == 0 || *(long *)(param_5 + 0x18) < param_4 - param_2) {
    __n = 0;
  }
  if ((lVar4 < 1) || (lVar2 = (**(code **)(*param_1 + 0x60))(param_1,param_2,lVar4), lVar2 == lVar4)
     ) {
    if (0 < (long)__n) {
      if (__n < 0x17) {
        pvVar5 = (void *)((ulong)&local_80 | 1);
        local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
      }
      else {
        pvVar5 = operator_new((__n | 0xf) + 1);
        local_80 = (__n | 0xf) + 2;
        local_78 = __n;
        local_70 = pvVar5;
      }
      memset(pvVar5,param_6,__n);
      *(undefined1 *)((long)pvVar5 + __n) = 0;
      pvVar5 = (void *)((ulong)&local_80 | 1);
      if ((local_80 & 1) != 0) {
        pvVar5 = local_70;
      }
                    /* try { // try from 00177044 to 0017704f has its CatchHandler @ 001770d8 */
      uVar3 = (**(code **)(*param_1 + 0x60))(param_1,pvVar5,__n);
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      if (uVar3 != __n) goto LAB_001770a0;
    }
    param_4 = param_4 - param_3;
    if ((param_4 < 1) ||
       (lVar4 = (**(code **)(*param_1 + 0x60))(param_1,param_3,param_4), lVar4 == param_4)) {
      *(undefined8 *)(param_5 + 0x18) = 0;
      goto LAB_001770a4;
    }
  }
LAB_001770a0:
  param_1 = (long *)0x0;
LAB_001770a4:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00177108  facebook::react::RNSScreenShadowNodeCommitHook::RNSScreenShadowNodeCommitHook =====

/* facebook::react::RNSScreenShadowNodeCommitHook::RNSScreenShadowNodeCommitHook(std::__ndk1::shared_ptr<facebook::react::ContextContainer
   const> const&) */

void __thiscall
facebook::react::RNSScreenShadowNodeCommitHook::RNSScreenShadowNodeCommitHook
          (RNSScreenShadowNodeCommitHook *this,shared_ptr *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  UIManagerCommitHook *local_38;
  long *local_30;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  *(undefined **)this = PTR_vtable_001f0a20 + 0x10;
  getUIManagerFromSharedContext((RNSScreenShadowNodeCommitHook *)param_1,param_1);
  if (local_38 != (UIManagerCommitHook *)0x0) {
                    /* try { // try from 0017714c to 00177153 has its CatchHandler @ 001771a4 */
    facebook::react::UIManager::registerCommitHook(local_38);
  }
  if ((local_30 != (long *)0x0) &&
     (lVar2 = FUN_001735f0(0xffffffffffffffff,local_30 + 1), lVar2 == 0)) {
    (**(code **)(*local_30 + 0x10))(local_30);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001771cc  facebook::react::RNSScreenShadowNodeCommitHook::getUIManagerFromSharedContext =====

/* facebook::react::RNSScreenShadowNodeCommitHook::getUIManagerFromSharedContext(std::__ndk1::shared_ptr<facebook::react::ContextContainer
   const> const&) */

void __thiscall
facebook::react::RNSScreenShadowNodeCommitHook::getUIManagerFromSharedContext
          (RNSScreenShadowNodeCommitHook *this,shared_ptr *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *in_x8;
  long lVar3;
  byte local_68;
  char acStack_67 [7];
  char cStack_60;
  char acStack_5f [7];
  undefined1 local_58;
  undefined7 uStack_57;
  long local_50;
  undefined1 local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      *in_x8 = 0;
      in_x8[1] = 0;
      return;
    }
  }
  else {
    local_68 = 0x1e;
    local_58 = 0;
    acStack_67 = (char  [7])s_FabricUIManager_0013eabb._0_7_;
    cStack_60 = s_FabricUIManager_0013eabb[7];
    acStack_5f = (char  [7])s_FabricUIManager_0013eabb._8_7_;
    local_48 = 1;
    local_50 = lVar3;
                    /* try { // try from 00177228 to 0017722f has its CatchHandler @ 00177340 */
    std::__ndk1::__shared_mutex_base::lock_shared();
                    /* try { // try from 00177230 to 0017723b has its CatchHandler @ 00177348 */
    lVar3 = FUN_00178720(lVar3 + 0x90,&local_68);
    if (lVar3 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00177320 to 0017732b has its CatchHandler @ 00177348 */
                    /* WARNING: Subroutine does not return */
        FUN_00175a1c("unordered_map::at: key not found");
      }
    }
    else {
      lVar3 = **(long **)(lVar3 + 0x28);
      local_40 = lVar3;
                    /* try { // try from 0017724c to 00177253 has its CatchHandler @ 0017733c */
      std::__ndk1::__shared_mutex_base::unlock_shared();
      if ((local_68 & 1) != 0) {
        operator_delete((void *)CONCAT71(uStack_57,local_58));
      }
      if ((lVar3 == 0) || (lVar3 = facebook::react::JFabricUIManager::getBinding(), lVar3 == 0)) {
        *in_x8 = 0;
        in_x8[1] = 0;
      }
      else {
        facebook::react::FabricUIManagerBinding::getScheduler();
        if (CONCAT71(acStack_67,local_68) == 0) {
          *in_x8 = 0;
          in_x8[1] = 0;
          plVar2 = (long *)CONCAT71(acStack_5f,cStack_60);
        }
        else {
                    /* try { // try from 00177284 to 0017728b has its CatchHandler @ 0017732c */
          facebook::react::Scheduler::getUIManager();
          plVar2 = (long *)CONCAT71(acStack_5f,cStack_60);
        }
        if ((plVar2 != (long *)0x0) &&
           (lVar3 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar3 == 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00177380  FUN_00177380 =====

void FUN_00177380(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001773d0  facebook::react::RNSScreenShadowNodeCommitHook::~RNSScreenShadowNodeCommitHook =====

/* facebook::react::RNSScreenShadowNodeCommitHook::~RNSScreenShadowNodeCommitHook() */

void __thiscall
facebook::react::RNSScreenShadowNodeCommitHook::~RNSScreenShadowNodeCommitHook
          (RNSScreenShadowNodeCommitHook *this)

{
  return;
}


// ===== 001773d4  facebook::react::RNSScreenShadowNodeCommitHook::~RNSScreenShadowNodeCommitHook =====

/* facebook::react::RNSScreenShadowNodeCommitHook::~RNSScreenShadowNodeCommitHook() */

void __thiscall
facebook::react::RNSScreenShadowNodeCommitHook::~RNSScreenShadowNodeCommitHook
          (RNSScreenShadowNodeCommitHook *this)

{
  ~RNSScreenShadowNodeCommitHook(this);
  operator_delete(this);
  return;
}


// ===== 001773f8  facebook::react::RNSScreenShadowNodeCommitHook::shadowTreeWillCommit =====

/* facebook::react::RNSScreenShadowNodeCommitHook::shadowTreeWillCommit(facebook::react::ShadowTree
   const&, std::__ndk1::shared_ptr<facebook::react::RootShadowNode const> const&,
   std::__ndk1::shared_ptr<facebook::react::RootShadowNode> const&,
   facebook::react::ShadowTreeCommitOptions const&) */

void facebook::react::RNSScreenShadowNodeCommitHook::shadowTreeWillCommit
               (ShadowTree *param_1,shared_ptr *param_2,shared_ptr *param_3,
               ShadowTreeCommitOptions *param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *in_x8;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 0017742c to 0017742f has its CatchHandler @ 001775ac */
  plVar4 = (long *)facebook::react::ShadowNode::getProps();
  lVar7 = *plVar4;
  plVar4 = (long *)plVar4[1];
  if (plVar4 != (long *)0x0) {
    FUN_00174090(1,plVar4 + 1);
  }
                    /* try { // try from 00177448 to 0017744b has its CatchHandler @ 001775ac */
  plVar5 = (long *)facebook::react::ShadowNode::getProps();
  lVar1 = *plVar5;
  plVar5 = (long *)plVar5[1];
  if (plVar5 != (long *)0x0) {
    FUN_00174090(1,plVar5 + 1);
  }
  uVar6 = *(undefined8 *)param_4;
  if ((*(float *)(lVar1 + 0x6e8) == *(float *)(lVar7 + 0x6e8)) &&
     (*(float *)(lVar1 + 0x6ec) == *(float *)(lVar7 + 0x6ec))) {
    lVar7 = *(long *)(param_4 + 8);
    *in_x8 = uVar6;
    in_x8[1] = lVar7;
    if (lVar7 != 0) {
      FUN_00174090(1,lVar7 + 8);
    }
  }
  else {
    local_60 = *(long **)(param_4 + 8);
    local_68 = uVar6;
    if (local_60 != (long *)0x0) {
      FUN_00174090(1,local_60 + 1);
    }
                    /* try { // try from 001774b8 to 001774c3 has its CatchHandler @ 001775ac */
    newRootShadowNodeWithScreenFrameSizesReset((RNSScreenShadowNodeCommitHook *)&local_68);
    plVar3 = local_60;
    if ((local_60 != (long *)0x0) &&
       (lVar7 = FUN_001735f0(0xffffffffffffffff,local_60 + 1), lVar7 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if ((plVar5 != (long *)0x0) && (lVar7 = FUN_001735f0(0xffffffffffffffff,plVar5 + 1), lVar7 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if ((plVar4 == (long *)0x0) || (lVar7 = FUN_001735f0(0xffffffffffffffff,plVar4 + 1), lVar7 != 0))
  {
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar2 + 0x28) == local_58) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001775b0  facebook::react::RNSScreenShadowNodeCommitHook::newRootShadowNodeWithScreenFrameSizesReset =====

/* facebook::react::RNSScreenShadowNodeCommitHook::newRootShadowNodeWithScreenFrameSizesReset(std::__ndk1::shared_ptr<facebook::react::RootShadowNode>)
    */

void __thiscall
facebook::react::RNSScreenShadowNodeCommitHook::newRootShadowNodeWithScreenFrameSizesReset
          (undefined8 *param_1,RNSScreenShadowNodeCommitHook *this)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  function *pfVar4;
  undefined ***pppuVar5;
  void *pvVar6;
  ShadowNodeFamily *pSVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long local_c8;
  long *local_c0;
  void *local_b8;
  void *pvStack_b0;
  undefined8 local_a8;
  undefined **local_a0;
  long *local_98;
  undefined ***local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_a0 = *(undefined ***)this;
  plVar8 = *(long **)(this + 8);
  local_b8 = (void *)0x0;
  pvStack_b0 = (void *)0x0;
  local_a8 = 0;
  local_98 = plVar8;
  if (plVar8 != (long *)0x0) {
    FUN_00174090(1,plVar8 + 1);
  }
                    /* try { // try from 00177604 to 0017760f has its CatchHandler @ 00177798 */
  findScreenNodes((shared_ptr *)&local_a0,(vector *)&local_b8);
  if ((plVar8 != (long *)0x0) && (lVar3 = FUN_001735f0(0xffffffffffffffff,plVar8 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pvVar2 = pvStack_b0;
  if (local_b8 != pvStack_b0) {
    pvVar6 = local_b8;
    do {
      pSVar7 = *(ShadowNodeFamily **)this;
                    /* try { // try from 0017766c to 00177673 has its CatchHandler @ 001777a8 */
      pfVar4 = (function *)facebook::react::ShadowNode::getFamily();
      local_a0 = &PTR_FUN_001e7ac8;
      local_80 = &local_a0;
                    /* try { // try from 0017767c to 0017768b has its CatchHandler @ 001777b0 */
      facebook::react::ShadowNode::cloneTree(pSVar7,pfVar4);
      if (local_80 == &local_a0) {
        pppuVar5 = &local_a0;
        lVar3 = 4;
LAB_001776b0:
        (*(code *)(*pppuVar5)[lVar3])();
      }
      else if (local_80 != (undefined ***)0x0) {
        lVar3 = 5;
        pppuVar5 = local_80;
        goto LAB_001776b0;
      }
      if (local_c8 != 0) {
        if (local_c0 != (long *)0x0) {
          FUN_00174090(1,local_c0 + 1);
        }
        plVar8 = *(long **)(this + 8);
        *(long *)this = local_c8;
        *(long **)(this + 8) = local_c0;
        if ((plVar8 != (long *)0x0) &&
           (lVar3 = FUN_001735f0(0xffffffffffffffff,plVar8 + 1), lVar3 == 0)) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      if ((local_c0 != (long *)0x0) &&
         (lVar3 = FUN_001735f0(0xffffffffffffffff,local_c0 + 1), lVar3 == 0)) {
        (**(code **)(*local_c0 + 0x10))(local_c0);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      pvVar6 = (void *)((long)pvVar6 + 8);
    } while (pvVar6 != pvVar2);
  }
  uVar10 = *(undefined8 *)(this + 8);
  uVar9 = *(undefined8 *)this;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  param_1[1] = uVar10;
  *param_1 = uVar9;
  if (local_b8 != (void *)0x0) {
    operator_delete(local_b8);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00177810  facebook::react::RNSScreenShadowNodeCommitHook::findScreenNodes =====

/* facebook::react::RNSScreenShadowNodeCommitHook::findScreenNodes(std::__ndk1::shared_ptr<facebook::react::ShadowNode
   const> const&, std::__ndk1::vector<facebook::react::RNSScreenShadowNode const*,
   std::__ndk1::allocator<facebook::react::RNSScreenShadowNode const*> >&) */

void facebook::react::RNSScreenShadowNodeCommitHook::findScreenNodes
               (shared_ptr *param_1,vector *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined *puVar6;
  void *pvVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  void *local_a0;
  undefined8 *puStack_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  long local_80;
  long local_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar15 = *(undefined8 *)param_1;
  uStack_88 = 0;
  local_90 = (undefined8 *)0x0;
  local_78 = 0;
  local_80 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_a0 = (void *)0x0;
                    /* try { // try from 00177854 to 0017785b has its CatchHandler @ 00177bbc */
  FUN_00177d24(&local_a0);
  lVar24 = local_78 + 1;
  *(undefined8 *)
   (*(long *)((long)puStack_98 + ((ulong)(local_78 + local_80) >> 6 & 0x3fffffffffffff8)) +
   (local_78 + local_80 & 0x1ffU) * 8) = uVar15;
  puVar4 = PTR_RNSScreenComponentName_001f0a10;
  puVar17 = puStack_98;
  lVar18 = local_80;
  puVar23 = local_90;
  if (local_78 != -1) {
    do {
      lVar19 = lVar24 + -1;
      lVar20 = 0;
      if (puVar23 != puVar17) {
        lVar20 = ((long)puVar23 - (long)puVar17) * 0x40 + -1;
      }
      uVar15 = *(undefined8 *)
                (*(long *)((long)puVar17 + ((ulong)(lVar18 + lVar19) >> 6 & 0x3fffffffffffff8)) +
                (lVar18 + lVar19 & 0x1ffU) * 8);
      local_78 = lVar19;
      if (0x3ff < (lVar20 - (lVar24 + lVar18)) + 1U) {
        puVar23 = puVar23 + -1;
        operator_delete((void *)*puVar23);
        local_90 = puVar23;
      }
                    /* try { // try from 00177960 to 00177967 has its CatchHandler @ 00177bc0 */
      plVar5 = (long *)facebook::react::ShadowNode::getChildren();
      puVar1 = (undefined8 *)plVar5[1];
      lVar24 = lVar19;
      for (puVar16 = (undefined8 *)*plVar5; puVar16 != puVar1; puVar16 = puVar16 + 2) {
                    /* try { // try from 001779a8 to 001779af has its CatchHandler @ 00177bd0 */
        puVar6 = (undefined *)facebook::react::ShadowNode::getComponentHandle();
        if (puVar6 == puVar4) {
          puVar17 = *(undefined8 **)(param_2 + 8);
          if (puVar17 < *(undefined8 **)(param_2 + 0x10)) {
            puVar21 = puVar17 + 1;
            *puVar17 = uVar15;
          }
          else {
            puVar23 = *(undefined8 **)param_2;
            lVar20 = (long)puVar17 - (long)puVar23 >> 3;
            uVar14 = lVar20 + 1;
            if (uVar14 >> 0x3d != 0) {
              if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00177ba0 to 00177bbb has its CatchHandler @ 00177bc8 */
                FUN_00178398();
LAB_00177ba4:
                if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_001730e4();
                }
              }
              goto LAB_00177bf8;
            }
            uVar8 = (long)*(undefined8 **)(param_2 + 0x10) - (long)puVar23;
            uVar11 = (long)uVar8 >> 2;
            if (uVar11 <= uVar14) {
              uVar11 = uVar14;
            }
            if (0x7ffffffffffffff7 < uVar8) {
              uVar11 = 0x1fffffffffffffff;
            }
            if (uVar11 == 0) {
              pvVar7 = (void *)0x0;
            }
            else {
              if (uVar11 >> 0x3d != 0) goto LAB_00177ba4;
                    /* try { // try from 00177a24 to 00177a27 has its CatchHandler @ 00177bc4 */
              pvVar7 = operator_new(uVar11 << 3);
            }
            puVar9 = (undefined8 *)((long)pvVar7 + lVar20 * 8);
            puVar21 = puVar9 + 1;
            *puVar9 = uVar15;
            if ((long)puVar17 - (long)puVar23 != 0) {
              uVar14 = ((long)puVar17 - (long)puVar23) - 8;
              if ((uVar14 < 0x38) ||
                 ((ulong)((long)puVar17 + (-((long)puVar17 - (long)puVar23) - (long)pvVar7)) < 0x20)
                 ) {
LAB_00177ae0:
                do {
                  puVar17 = puVar17 + -1;
                  puVar10 = puVar9 + -1;
                  *puVar10 = *puVar17;
                  puVar9 = puVar10;
                } while (puVar17 != puVar23);
              }
              else {
                puVar13 = puVar17 + -2;
                uVar14 = (uVar14 >> 3) + 1;
                uVar12 = uVar14 & 0x3ffffffffffffffc;
                puVar17 = puVar17 + -uVar12;
                puVar10 = puVar9 + -uVar12;
                puVar9 = puVar9 + -2;
                uVar8 = uVar12;
                do {
                  puVar3 = puVar13 + -1;
                  uVar26 = puVar13[-2];
                  uVar25 = puVar13[1];
                  uVar22 = *puVar13;
                  uVar8 = uVar8 - 4;
                  puVar13 = puVar13 + -4;
                  puVar9[-1] = *puVar3;
                  puVar9[-2] = uVar26;
                  puVar9[1] = uVar25;
                  *puVar9 = uVar22;
                  puVar9 = puVar9 + -4;
                } while (uVar8 != 0);
                puVar9 = puVar10;
                if (uVar14 != uVar12) goto LAB_00177ae0;
              }
              puVar17 = *(undefined8 **)param_2;
              puVar9 = puVar10;
            }
            *(undefined8 **)param_2 = puVar9;
            *(undefined8 **)(param_2 + 8) = puVar21;
            *(void **)(param_2 + 0x10) = (void *)((long)pvVar7 + uVar11 * 8);
            if (puVar17 != (undefined8 *)0x0) {
              operator_delete(puVar17);
            }
          }
          *(undefined8 **)(param_2 + 8) = puVar21;
          puVar17 = puStack_98;
          puVar23 = local_90;
        }
        uVar22 = *puVar16;
        uVar14 = 0;
        if (puVar23 != puVar17) {
          uVar14 = ((long)puVar23 - (long)puVar17) * 0x40 - 1;
        }
        uVar11 = lVar24 + lVar18;
        if (uVar14 == uVar11) {
                    /* try { // try from 00177b40 to 00177b47 has its CatchHandler @ 00177bcc */
          FUN_00177d24(&local_a0);
          uVar11 = local_80 + local_78;
          puVar17 = puStack_98;
          lVar18 = local_80;
          puVar23 = local_90;
          lVar24 = local_78;
        }
        lVar24 = lVar24 + 1;
        *(undefined8 *)
         (*(long *)((long)puVar17 + (uVar11 >> 6 & 0x3fffffffffffff8)) + (uVar11 & 0x1ff) * 8) =
             uVar22;
        local_78 = lVar24;
      }
    } while (lVar24 != 0);
  }
  uVar14 = (long)puVar23 - (long)puVar17;
  puVar16 = puStack_98;
  for (; 0x10 < uVar14; uVar14 = uVar14 - 8) {
    puVar16 = puVar17 + 1;
    operator_delete((void *)*puVar17);
    puVar17 = puVar16;
  }
  for (; puStack_98 = puVar16, puVar17 != puVar23; puVar17 = puVar17 + 1) {
    operator_delete((void *)*puVar17);
    puVar16 = puStack_98;
  }
  if (local_a0 == (void *)0x0) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_68) {
    operator_delete(local_a0);
    return;
  }
LAB_00177bf8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00177bfc  FUN_00177bfc =====

void FUN_00177bfc(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00177c4c  FUN_00177c4c =====

void FUN_00177c4c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00177c9c  FUN_00177c9c =====

void FUN_00177c9c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00177cec  FUN_00177cec =====

void FUN_00177cec(void)

{
  return;
}


// ===== 00177cf0  FUN_00177cf0 =====

void FUN_00177cf0(void)

{
  return;
}


// ===== 00177cf4  FUN_00177cf4 =====

void FUN_00177cf4(undefined8 *param_1)

{
  long lVar1;
  undefined8 *in_x3;
  
  lVar1 = in_x3[1];
  *param_1 = *in_x3;
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00174090(1,lVar1 + 8);
  }
  return;
}


// ===== 00177d1c  FUN_00177d1c =====

void FUN_00177d1c(void)

{
  return;
}


// ===== 00177d20  FUN_00177d20 =====

void FUN_00177d20(void)

{
  return;
}


// ===== 00177d24  FUN_00177d24 =====

void FUN_00177d24(long *param_1)

{
  long lVar1;
  size_t sVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  if ((ulong)param_1[4] < 0x200) {
    puVar14 = (undefined8 *)param_1[2];
    puVar15 = (undefined8 *)param_1[3];
    puVar17 = (undefined8 *)*param_1;
    puVar13 = (undefined8 *)param_1[1];
    uVar8 = (long)puVar14 - (long)puVar13;
    if ((ulong)((long)puVar15 - (long)puVar17) <= uVar8) {
      uVar18 = (long)puVar15 - (long)puVar17 >> 2;
      if (puVar15 == puVar17) {
        uVar18 = 1;
      }
      if (uVar18 >> 0x3d == 0) {
        puVar3 = (undefined8 *)operator_new(uVar18 << 3);
                    /* try { // try from 00177e10 to 00177e17 has its CatchHandler @ 00178374 */
        pvVar4 = operator_new(0x1000);
        puVar17 = (undefined8 *)((long)puVar3 + uVar8);
        puVar6 = puVar3;
        puVar10 = puVar17;
        puVar15 = puVar3 + uVar18;
        if (puVar17 == puVar3 + uVar18) {
          if ((long)uVar8 < 1) {
            uVar8 = (long)uVar8 >> 2;
            if (puVar14 == puVar13) {
              uVar8 = 1;
            }
            if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00178360 to 00178363 has its CatchHandler @ 00178364 */
              FUN_001730e4();
            }
                    /* try { // try from 00178038 to 0017803b has its CatchHandler @ 00178364 */
            puVar6 = (undefined8 *)operator_new(uVar8 << 3);
            puVar15 = puVar6 + uVar8;
            operator_delete(puVar3);
            puVar13 = (undefined8 *)param_1[1];
            puVar14 = (undefined8 *)param_1[2];
            puVar10 = puVar6;
          }
          else {
            puVar10 = (undefined8 *)((long)puVar17 - ((uVar8 >> 1) + 4 & 0xfffffffffffffff8));
            puVar15 = puVar17;
          }
        }
        puVar17 = puVar10 + 1;
        *puVar10 = pvVar4;
        puVar3 = puVar6;
        if (puVar14 != puVar13) {
          do {
            puVar6 = puVar3;
            if (puVar10 == puVar3) {
              if (puVar17 < puVar15) {
                lVar7 = (long)puVar15 - (long)puVar17 >> 3;
                lVar1 = lVar7 + 2;
                if (lVar7 + 1 < 0 == SCARRY8(lVar7,1)) {
                  lVar1 = lVar7 + 1;
                }
                puVar10 = puVar3 + (lVar1 >> 1);
                if ((long)puVar17 - (long)puVar3 != 0) {
                  memmove(puVar10,puVar3,(long)puVar17 - (long)puVar3);
                  puVar3 = puVar17;
                }
                puVar17 = puVar3 + (lVar1 >> 1);
              }
              else {
                uVar8 = (long)puVar15 - (long)puVar3 >> 2;
                if ((long)puVar15 - (long)puVar3 == 0) {
                  uVar8 = 1;
                }
                if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00178358 to 0017835b has its CatchHandler @ 0017837c */
                  FUN_001730e4();
                }
                    /* try { // try from 00178120 to 00178123 has its CatchHandler @ 00178380 */
                puVar6 = (undefined8 *)operator_new(uVar8 << 3);
                uVar18 = uVar8 + 3 >> 2;
                lVar1 = (long)puVar17 - (long)puVar3;
                puVar10 = puVar6 + uVar18;
                puVar17 = puVar10;
                if (lVar1 != 0) {
                  puVar17 = (undefined8 *)((long)puVar10 + lVar1);
                  puVar13 = puVar10;
                  puVar15 = puVar3;
                  if ((0x37 < lVar1 - 8U) && (0x1f < (long)puVar6 + (uVar18 * 8 - (long)puVar3))) {
                    puVar13 = puVar3 + 2;
                    puVar15 = puVar6 + uVar18 + 2;
                    uVar18 = (lVar1 - 8U >> 3) + 1;
                    uVar12 = uVar18 & 0x3ffffffffffffffc;
                    uVar11 = uVar12;
                    do {
                      puVar9 = puVar13 + -1;
                      uVar16 = puVar13[-2];
                      uVar20 = puVar13[1];
                      uVar19 = *puVar13;
                      uVar11 = uVar11 - 4;
                      puVar13 = puVar13 + 4;
                      puVar15[-1] = *puVar9;
                      puVar15[-2] = uVar16;
                      puVar15[1] = uVar20;
                      *puVar15 = uVar19;
                      puVar15 = puVar15 + 4;
                    } while (uVar11 != 0);
                    puVar13 = puVar10 + uVar12;
                    puVar15 = puVar3 + uVar12;
                    if (uVar18 == uVar12) goto LAB_0017808c;
                  }
                  do {
                    puVar9 = puVar13 + 1;
                    *puVar13 = *puVar15;
                    puVar13 = puVar9;
                    puVar15 = puVar15 + 1;
                  } while (puVar9 != puVar17);
                }
LAB_0017808c:
                puVar15 = puVar6 + uVar8;
                operator_delete(puVar3);
              }
            }
            puVar14 = puVar14 + -1;
            puVar10 = puVar10 + -1;
            *puVar10 = *puVar14;
            puVar3 = puVar6;
          } while (puVar14 != (undefined8 *)param_1[1]);
        }
        pvVar4 = (void *)*param_1;
        *param_1 = (long)puVar6;
        param_1[1] = (long)puVar10;
        param_1[2] = (long)puVar17;
        param_1[3] = (long)puVar15;
        if (pvVar4 == (void *)0x0) {
          return;
        }
        operator_delete(pvVar4);
        return;
      }
      goto LAB_0017835c;
    }
    pvVar4 = operator_new(0x1000);
    if (puVar15 != puVar14) {
      *puVar14 = pvVar4;
      goto LAB_00178258;
    }
    puVar10 = puVar13;
    if (puVar13 == puVar17) {
      uVar18 = (long)puVar15 - (long)puVar13 >> 2;
      if (puVar14 == puVar13) {
        uVar18 = 1;
      }
      if (uVar18 >> 0x3d != 0) goto LAB_0017835c;
      uVar11 = uVar18 + 3 >> 2;
      pvVar5 = operator_new(uVar18 * 8);
      puVar10 = (undefined8 *)((long)pvVar5 + uVar11 * 8);
      puVar17 = puVar10;
      if ((long)puVar14 - (long)puVar13 != 0) {
        uVar12 = ((long)puVar14 - (long)puVar13) - 8;
        puVar17 = (undefined8 *)((long)puVar10 + uVar8);
        puVar14 = puVar10;
        puVar15 = puVar13;
        if ((0x37 < uVar12) && (0x1f < (long)pvVar5 + (uVar11 * 8 - (long)puVar13))) {
          puVar14 = puVar13 + 2;
          puVar15 = (undefined8 *)((long)pvVar5 + uVar11 * 8 + 0x10);
          uVar8 = (uVar12 >> 3) + 1;
          uVar12 = uVar8 & 0x3ffffffffffffffc;
          uVar11 = uVar12;
          do {
            puVar6 = puVar14 + -1;
            uVar16 = puVar14[-2];
            uVar20 = puVar14[1];
            uVar19 = *puVar14;
            uVar11 = uVar11 - 4;
            puVar14 = puVar14 + 4;
            puVar15[-1] = *puVar6;
            puVar15[-2] = uVar16;
            puVar15[1] = uVar20;
            *puVar15 = uVar19;
            puVar15 = puVar15 + 4;
          } while (uVar11 != 0);
          puVar14 = puVar10 + uVar12;
          puVar15 = puVar13 + uVar12;
          if (uVar8 == uVar12) goto LAB_00177f88;
        }
        do {
          puVar6 = puVar14 + 1;
          *puVar14 = *puVar15;
          puVar14 = puVar6;
          puVar15 = puVar15 + 1;
        } while (puVar6 != puVar17);
      }
LAB_00177f88:
      *param_1 = (long)pvVar5;
      param_1[1] = (long)puVar10;
      param_1[2] = (long)puVar17;
      param_1[3] = (long)((long)pvVar5 + uVar18 * 8);
      if (puVar13 != (undefined8 *)0x0) {
        operator_delete(puVar13);
        puVar10 = (undefined8 *)param_1[1];
      }
    }
    puVar10[-1] = pvVar4;
    puVar14 = (undefined8 *)param_1[1];
    puVar17 = (undefined8 *)param_1[2];
    param_1[1] = (long)(puVar14 + -1);
    uVar16 = puVar14[-1];
    param_1[1] = (long)puVar14;
    if (puVar17 == (undefined8 *)param_1[3]) {
      puVar13 = (undefined8 *)*param_1;
      if (puVar13 <= puVar14 && (long)puVar14 - (long)puVar13 != 0) {
        lVar7 = (long)puVar14 - (long)puVar13 >> 3;
        lVar1 = lVar7 + 2;
        if (lVar7 + 1 < 0 == SCARRY8(lVar7,1)) {
          lVar1 = lVar7 + 1;
        }
        sVar2 = (long)puVar17 - (long)puVar14;
        puVar17 = puVar14 + -(lVar1 >> 1);
        if (sVar2 != 0) {
          memmove(puVar17,puVar14,sVar2);
          puVar14 = (undefined8 *)param_1[1];
        }
        puVar17 = (undefined8 *)((long)puVar17 + sVar2);
        param_1[1] = (long)(puVar14 + -(lVar1 >> 1));
        param_1[2] = (long)puVar17;
        *puVar17 = uVar16;
        goto LAB_00178258;
      }
      uVar8 = (long)puVar17 - (long)puVar13 >> 2;
      if ((long)puVar17 - (long)puVar13 == 0) {
        uVar8 = 1;
      }
      if (uVar8 >> 0x3d != 0) {
LAB_0017835c:
                    /* WARNING: Subroutine does not return */
        FUN_001730e4();
      }
      uVar18 = uVar8 >> 2;
      pvVar4 = operator_new(uVar8 * 8);
      puVar15 = (undefined8 *)((long)pvVar4 + uVar18 * 8);
      lVar1 = (long)puVar17 - (long)puVar14;
      puVar17 = puVar15;
      if (lVar1 != 0) {
        puVar17 = (undefined8 *)((long)puVar15 + lVar1);
        puVar10 = puVar15;
        if ((0x37 < lVar1 - 8U) && (0x1f < (long)pvVar4 + (uVar18 * 8 - (long)puVar14))) {
          puVar10 = puVar14 + 2;
          puVar6 = (undefined8 *)((long)pvVar4 + uVar18 * 8 + 0x10);
          uVar18 = (lVar1 - 8U >> 3) + 1;
          uVar12 = uVar18 & 0x3ffffffffffffffc;
          puVar14 = puVar14 + uVar12;
          uVar11 = uVar12;
          do {
            puVar3 = puVar10 + -1;
            uVar19 = puVar10[-2];
            uVar21 = puVar10[1];
            uVar20 = *puVar10;
            uVar11 = uVar11 - 4;
            puVar10 = puVar10 + 4;
            puVar6[-1] = *puVar3;
            puVar6[-2] = uVar19;
            puVar6[1] = uVar21;
            *puVar6 = uVar20;
            puVar6 = puVar6 + 4;
          } while (uVar11 != 0);
          puVar10 = puVar15 + uVar12;
          if (uVar18 == uVar12) goto LAB_0017833c;
        }
        do {
          puVar6 = puVar10 + 1;
          *puVar10 = *puVar14;
          puVar10 = puVar6;
          puVar14 = puVar14 + 1;
        } while (puVar6 != puVar17);
      }
LAB_0017833c:
      *param_1 = (long)pvVar4;
      param_1[1] = (long)puVar15;
      param_1[2] = (long)puVar17;
      param_1[3] = (long)((long)pvVar4 + uVar8 * 8);
      operator_delete(puVar13);
      puVar17 = (undefined8 *)param_1[2];
    }
    *puVar17 = uVar16;
    goto LAB_00178258;
  }
  puVar14 = (undefined8 *)param_1[1];
  puVar17 = (undefined8 *)param_1[2];
  param_1[4] = param_1[4] - 0x200;
  puVar13 = puVar14 + 1;
  uVar16 = *puVar14;
  param_1[1] = (long)puVar13;
  if (puVar17 == (undefined8 *)param_1[3]) {
    puVar15 = (undefined8 *)*param_1;
    if (puVar13 < puVar15 || (long)puVar13 - (long)puVar15 == 0) {
      uVar8 = (long)puVar17 - (long)puVar15 >> 2;
      if ((long)puVar17 - (long)puVar15 == 0) {
        uVar8 = 1;
      }
      if (uVar8 >> 0x3d != 0) goto LAB_0017835c;
      uVar18 = uVar8 >> 2;
      pvVar4 = operator_new(uVar8 * 8);
      puVar10 = (undefined8 *)((long)pvVar4 + uVar18 * 8);
      puVar6 = puVar10;
      if ((long)puVar17 - (long)puVar13 != 0) {
        uVar11 = (long)puVar17 + (-0x10 - (long)puVar14);
        puVar6 = (undefined8 *)((long)puVar10 + ((long)puVar17 - (long)puVar13));
        puVar17 = puVar10;
        if ((0x47 < uVar11) && (0x1f < (long)pvVar4 + (uVar18 * 8 - (long)puVar14) + -8)) {
          puVar17 = (undefined8 *)((long)pvVar4 + uVar18 * 8 + 0x10);
          uVar18 = (uVar11 >> 3) + 1;
          uVar12 = uVar18 & 0x3ffffffffffffffc;
          puVar13 = puVar13 + uVar12;
          puVar14 = puVar14 + 3;
          uVar11 = uVar12;
          do {
            puVar3 = puVar14 + -1;
            uVar19 = puVar14[-2];
            uVar21 = puVar14[1];
            uVar20 = *puVar14;
            uVar11 = uVar11 - 4;
            puVar14 = puVar14 + 4;
            puVar17[-1] = *puVar3;
            puVar17[-2] = uVar19;
            puVar17[1] = uVar21;
            *puVar17 = uVar20;
            puVar17 = puVar17 + 4;
          } while (uVar11 != 0);
          puVar17 = puVar10 + uVar12;
          if (uVar18 == uVar12) goto LAB_00178240;
        }
        do {
          puVar14 = puVar17 + 1;
          *puVar17 = *puVar13;
          puVar17 = puVar14;
          puVar13 = puVar13 + 1;
        } while (puVar14 != puVar6);
      }
LAB_00178240:
      *param_1 = (long)pvVar4;
      param_1[1] = (long)puVar10;
      param_1[2] = (long)puVar6;
      param_1[3] = (long)((long)pvVar4 + uVar8 * 8);
      operator_delete(puVar15);
      puVar17 = (undefined8 *)param_1[2];
    }
    else {
      lVar7 = (long)puVar13 - (long)puVar15 >> 3;
      lVar1 = lVar7 + 2;
      if (lVar7 + 1 < 0 == SCARRY8(lVar7,1)) {
        lVar1 = lVar7 + 1;
      }
      sVar2 = (long)puVar17 - (long)puVar13;
      puVar17 = puVar13 + -(lVar1 >> 1);
      if (sVar2 != 0) {
        memmove(puVar17,puVar13,sVar2);
        puVar13 = (undefined8 *)param_1[1];
      }
      puVar17 = (undefined8 *)((long)puVar17 + sVar2);
      param_1[1] = (long)(puVar13 + -(lVar1 >> 1));
      param_1[2] = (long)puVar17;
    }
  }
  *puVar17 = uVar16;
LAB_00178258:
  param_1[2] = param_1[2] + 8;
  return;
}


// ===== 00178398  FUN_00178398 =====

void FUN_00178398(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00173064("vector");
}


// ===== 001783ac  FUN_001783ac =====

void FUN_001783ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar5;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    operator_delete((void *)*puVar5);
    puVar1 = (undefined8 *)param_1[2];
    puVar5 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = puVar5;
    lVar3 = (long)puVar1 - (long)puVar5;
  }
  if (uVar2 == 1) {
    uVar4 = 0x100;
  }
  else {
    if (uVar2 != 2) goto LAB_0017841c;
    uVar4 = 0x200;
  }
  param_1[4] = uVar4;
LAB_0017841c:
  if (puVar5 != puVar1) {
    do {
      puVar6 = puVar5 + 1;
      operator_delete((void *)*puVar5);
      puVar5 = puVar6;
    } while (puVar6 != puVar1);
    lVar3 = param_1[2];
    if (lVar3 != param_1[1]) {
      param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
    }
  }
  if ((void *)*param_1 == (void *)0x0) {
    return;
  }
  operator_delete((void *)*param_1);
  return;
}


// ===== 0017847c  FUN_0017847c =====

void FUN_0017847c(void)

{
  return;
}


// ===== 00178480  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 00178484  FUN_00178484 =====

void FUN_00178484(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_001e7ac8;
  return;
}


// ===== 001784a8  FUN_001784a8 =====

void FUN_001784a8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_001e7ac8;
  return;
}


// ===== 001784b8  FUN_001784b8 =====

void FUN_001784b8(void)

{
  return;
}


// ===== 001784bc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 001784c0  FUN_001784c0 =====

void FUN_001784c0(long *param_1,undefined8 param_2,ShadowNodeFragment *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *local_60;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  facebook::react::ShadowNodeFragment::propsPlaceholder();
  facebook::react::ShadowNodeFragment::childrenPlaceholder();
  facebook::react::ShadowNode::getState();
  facebook::react::ShadowNode::clone(param_3);
  lVar3 = *param_1;
  plVar1 = (long *)param_1[1];
  if (plVar1 == (long *)0x0) {
    local_60 = (long *)0x0;
    lVar5 = lVar3;
  }
  else {
    FUN_00174090(1,plVar1 + 1);
    lVar5 = *param_1;
    local_60 = (long *)param_1[1];
    if (local_60 != (long *)0x0) {
      FUN_00174090(1,local_60 + 1);
    }
  }
  **(undefined8 **)(*(long *)(lVar3 + 0x28) + 0x18) = 0;
                    /* try { // try from 00178564 to 00178577 has its CatchHandler @ 001785fc */
  facebook::react::YogaLayoutableShadowNode::setSize(0x7fc00000,0x7fc00000,lVar5);
  if ((local_60 != (long *)0x0) &&
     (lVar3 = FUN_001735f0(0xffffffffffffffff,local_60 + 1), lVar3 == 0)) {
    (**(code **)(*local_60 + 0x10))(local_60);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if ((plVar1 != (long *)0x0) && (lVar3 = FUN_001735f0(0xffffffffffffffff,plVar1 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00178634  FUN_00178634 =====

long FUN_00178634(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZN8facebook5react29RNSScreenShadowNodeCommitHook42newRootShadowNodeWithScreenFrameSizesResetENSt6__ndk110shared_ptrINS0_14RootShadowNodeEEEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00178650  FUN_00178650 =====

pointer_____offset_0x10___ * FUN_00178650(void)

{
  return &PTR_vtable_001e7b38;
}


// ===== 0017865c  FUN_0017865c =====

void FUN_0017865c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001786ac  FUN_001786ac =====

void FUN_001786ac(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001786fc  FUN_001786fc =====

void FUN_001786fc(long param_1)

{
  if (*(char *)(param_1 + 8) != '\0') {
                    /* try { // try from 00178710 to 00178713 has its CatchHandler @ 0017871c */
    std::__ndk1::__shared_mutex_base::unlock_shared();
  }
  return;
}


// ===== 00178720  FUN_00178720 =====

long * FUN_00178720(long *param_1,byte *param_2)

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
                    /* try { // try from 0017876c to 00178773 has its CatchHandler @ 001788d8 */
  uVar8 = FUN_001788dc(&uStack_69,pbVar3,uVar8);
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
                  if (bVar4 >> 1 == uVar10) goto LAB_001788a0;
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
            if (uVar10 != uVar13) goto LAB_0017889c;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      goto LAB_001788a0;
    }
  }
LAB_0017889c:
  plVar9 = (long *)0x0;
LAB_001788a0:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001788dc  FUN_001788dc =====

ulong FUN_001788dc(undefined8 param_1,ulong *param_2,ulong param_3)

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


// ===== 00178d14  facebook::react::RNSScreenStackHeaderConfigShadowNode::layout =====

/* facebook::react::RNSScreenStackHeaderConfigShadowNode::layout(facebook::react::LayoutContext) */

void __thiscall
facebook::react::RNSScreenStackHeaderConfigShadowNode::layout
          (RNSScreenStackHeaderConfigShadowNode *this,undefined8 *param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uStack_58 = param_2[1];
  local_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  local_40 = param_2[4];
  facebook::react::YogaLayoutableShadowNode::layout(this,&local_60);
  plVar4 = (long *)facebook::react::ShadowNode::getProps();
  lVar1 = *plVar4;
  plVar4 = (long *)plVar4[1];
  if (plVar4 != (long *)0x0) {
    FUN_00174090(1,plVar4 + 1);
    lVar5 = FUN_001735f0(0xffffffffffffffff,plVar4 + 1);
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__ndk1::__shared_weak_count::__release_weak();
      cVar2 = *(char *)(lVar1 + 0x79c);
      goto joined_r0x00178d80;
    }
  }
  cVar2 = *(char *)(lVar1 + 0x79c);
joined_r0x00178d80:
  if (cVar2 == '\0') {
    *(float *)(this + 0x6c) = -*(float *)(*(long *)(*(long *)(this + 0x28) + 0x18) + 4);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00178de4  facebook::react::RNSScreenStackHeaderConfigShadowNode::applyFrameCorrections =====

/* facebook::react::RNSScreenStackHeaderConfigShadowNode::applyFrameCorrections() */

void __thiscall
facebook::react::RNSScreenStackHeaderConfigShadowNode::applyFrameCorrections
          (RNSScreenStackHeaderConfigShadowNode *this)

{
  *(float *)(this + 0x6c) = -*(float *)(*(long *)(*(long *)(this + 0x28) + 0x18) + 4);
  return;
}


// ===== 00178dfc  FUN_00178dfc =====

void FUN_00178dfc(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_001f09e8 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_00173ffc(param_1 + 0x23);
  FUN_00173f00(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00178ebc  FUN_00178ebc =====

void FUN_00178ebc(long param_1)

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


// ===== 00178f24  FUN_00178f24 =====

bool FUN_00178f24(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 00178f3c  FUN_00178f3c =====

bool FUN_00178f3c(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 00178f54  facebook::react::RNSScreenStackHeaderConfigState::getDynamic =====

/* facebook::react::RNSScreenStackHeaderConfigState::getDynamic() const */

void facebook::react::RNSScreenStackHeaderConfigState::getDynamic(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  float *in_x0;
  long lVar4;
  undefined4 *in_x8;
  ulong uVar5;
  undefined1 uStack_211;
  undefined4 *local_210;
  undefined4 local_208 [2];
  double local_200;
  undefined4 local_1d8 [2];
  undefined1 local_1d0;
  char local_1cf [8];
  undefined2 local_1c7;
  undefined1 local_1c5;
  undefined4 local_1a8 [2];
  double local_1a0;
  undefined4 local_178 [2];
  undefined1 local_170;
  char local_16f [8];
  undefined4 local_167;
  undefined1 local_163;
  undefined4 local_148 [2];
  double local_140;
  undefined4 local_118 [2];
  undefined1 local_110;
  undefined7 local_10f;
  char cStack_108;
  undefined3 uStack_107;
  undefined1 local_104;
  undefined4 local_e8 [2];
  double local_e0;
  undefined4 local_b8 [2];
  undefined1 local_b0;
  char local_af [8];
  undefined2 local_a7;
  undefined1 local_a5;
  int local_88 [2];
  long local_80;
  ulong uStack_78;
  long local_70;
  long lStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_a7 = 0x6874;
  local_b0 = 0x14;
  local_e0 = (double)*in_x0;
  local_b8[0] = 6;
  local_a5 = 0;
  local_af = (char  [8])s_frameWidth_0013ee38._0_8_;
  local_e8[0] = 3;
                    /* try { // try from 00178fc8 to 00178fd7 has its CatchHandler @ 00179288 */
  FUN_00172da8(local_88,local_b8,local_e8);
  local_110 = 0x16;
  local_140 = (double)in_x0[1];
  local_118[0] = 6;
  local_10f = (undefined7)s_frameHeight_0013ed04._0_8_;
  _cStack_108 = CONCAT31(0x746867,SUB81(s_frameHeight_0013ed04._0_8_,7));
  local_104 = 0;
  local_148[0] = 3;
  if (local_88[0] == 5) {
    local_210 = local_118;
                    /* try { // try from 0017902c to 00179047 has its CatchHandler @ 001792c0 */
    lVar4 = FUN_00173118(&local_80,local_118,PTR_piecewise_construct_001f09a8,&local_210,&uStack_211
                        );
    folly::dynamic::operator=((dynamic *)(lVar4 + 0x40),(dynamic *)local_148);
    local_178[0] = 6;
    local_1a0 = (double)in_x0[2];
    local_170 = 0x18;
    local_167 = 0x74726174;
    local_1a8[0] = 3;
    local_16f[0] = s_paddingStart_0013ea25[0];
    local_16f[1] = s_paddingStart_0013ea25[1];
    local_16f[2] = s_paddingStart_0013ea25[2];
    local_16f[3] = s_paddingStart_0013ea25[3];
    local_16f[4] = s_paddingStart_0013ea25[4];
    local_16f[5] = s_paddingStart_0013ea25[5];
    local_16f[6] = s_paddingStart_0013ea25[6];
    local_16f[7] = s_paddingStart_0013ea25[7];
    local_163 = 0;
    if (local_88[0] == 5) {
      local_210 = local_178;
                    /* try { // try from 001790ac to 001790c7 has its CatchHandler @ 001792a8 */
      lVar4 = FUN_00173118(&local_80,local_178,PTR_piecewise_construct_001f09a8,&local_210,
                           &uStack_211);
      folly::dynamic::operator=((dynamic *)(lVar4 + 0x40),(dynamic *)local_1a8);
      local_1d8[0] = 6;
      local_1d0 = 0x14;
      local_200 = (double)in_x0[3];
      local_1c7 = 0x646e;
      local_1cf[0] = s_paddingEnd_0013fcad[0];
      local_1cf[1] = s_paddingEnd_0013fcad[1];
      local_1cf[2] = s_paddingEnd_0013fcad[2];
      local_1cf[3] = s_paddingEnd_0013fcad[3];
      local_1cf[4] = s_paddingEnd_0013fcad[4];
      local_1cf[5] = s_paddingEnd_0013fcad[5];
      local_1cf[6] = s_paddingEnd_0013fcad[6];
      local_1cf[7] = s_paddingEnd_0013fcad[7];
      local_1c5 = 0;
      local_208[0] = 3;
      if (local_88[0] == 5) {
        local_210 = local_1d8;
                    /* try { // try from 00179128 to 00179143 has its CatchHandler @ 00179290 */
        lVar4 = FUN_00173118(&local_80,local_1d8,PTR_piecewise_construct_001f09a8,&local_210,
                             &uStack_211);
        folly::dynamic::operator=((dynamic *)(lVar4 + 0x40),(dynamic *)local_208);
        uVar3 = uStack_78;
        lVar4 = local_80;
        *in_x8 = 5;
        local_80 = 0;
        uStack_78 = 0;
        *(long *)(in_x8 + 6) = local_70;
        *(long *)(in_x8 + 2) = lVar4;
        *(ulong *)(in_x8 + 4) = uVar3;
        *(long *)(in_x8 + 8) = lStack_68;
        in_x8[10] = local_60;
        if (lStack_68 != 0) {
          uVar5 = *(ulong *)(local_70 + 8);
          if ((uVar3 & uVar3 - 1) == 0) {
            uVar5 = uVar5 & uVar3 - 1;
          }
          else if (uVar3 <= uVar5) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar5 / uVar3;
            }
            uVar5 = uVar5 - uVar1 * uVar3;
          }
          *(undefined4 **)(lVar4 + uVar5 * 8) = in_x8 + 6;
          local_70 = 0;
          lStack_68 = 0;
        }
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        if (*(long *)(lVar2 + 0x28) == local_58) {
          return;
        }
      }
      else if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 00179278 to 00179287 has its CatchHandler @ 00179290 */
                    /* WARNING: Subroutine does not return */
        FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
      }
    }
    else if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 00179258 to 00179267 has its CatchHandler @ 001792a8 */
                    /* WARNING: Subroutine does not return */
      FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 00179238 to 00179247 has its CatchHandler @ 001792c0 */
                    /* WARNING: Subroutine does not return */
    FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00179308  facebook::react::RNSScreenStackHeaderSubviewShadowNode::layout =====

/* facebook::react::RNSScreenStackHeaderSubviewShadowNode::layout(facebook::react::LayoutContext) */

void __thiscall
facebook::react::RNSScreenStackHeaderSubviewShadowNode::layout
          (RNSScreenStackHeaderSubviewShadowNode *this,undefined8 *param_2)

{
  long lVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_48 = param_2[1];
  local_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  local_30 = param_2[4];
  facebook::react::YogaLayoutableShadowNode::layout(this,&local_50);
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(*(long *)(*(long *)(this + 0x28) + 0x18) + 8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00179374  facebook::react::RNSScreenStackHeaderSubviewShadowNode::applyFrameCorrections =====

/* facebook::react::RNSScreenStackHeaderSubviewShadowNode::applyFrameCorrections() */

void __thiscall
facebook::react::RNSScreenStackHeaderSubviewShadowNode::applyFrameCorrections
          (RNSScreenStackHeaderSubviewShadowNode *this)

{
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(*(long *)(*(long *)(this + 0x28) + 0x18) + 8);
  return;
}


// ===== 00179388  FUN_00179388 =====

void FUN_00179388(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_001f09e8 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_00173ffc(param_1 + 0x23);
  FUN_00173f00(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00179448  FUN_00179448 =====

void FUN_00179448(long param_1)

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


// ===== 001794b0  FUN_001794b0 =====

bool FUN_001794b0(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 001794c8  FUN_001794c8 =====

bool FUN_001794c8(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 001794e0  facebook::react::RNSScreenStackHeaderSubviewState::getDynamic =====

/* facebook::react::RNSScreenStackHeaderSubviewState::getDynamic() const */

void facebook::react::RNSScreenStackHeaderSubviewState::getDynamic(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  float *in_x0;
  long lVar4;
  undefined4 *in_x8;
  ulong uVar5;
  undefined1 uStack_211;
  undefined4 *local_210;
  undefined4 local_208 [2];
  double local_200;
  undefined4 local_1d8 [2];
  undefined1 local_1d0;
  char local_1cf [6];
  char acStack_1c9 [2];
  char acStack_1c7 [6];
  undefined1 local_1c1;
  undefined4 local_1a8 [2];
  double local_1a0;
  undefined4 local_178 [2];
  undefined1 local_170;
  char local_16f [6];
  char acStack_169 [2];
  char acStack_167 [6];
  undefined1 local_161;
  undefined4 local_148 [2];
  double local_140;
  undefined4 local_118 [2];
  undefined1 local_110;
  undefined7 local_10f;
  char cStack_108;
  undefined3 uStack_107;
  undefined1 local_104;
  undefined4 local_e8 [2];
  double local_e0;
  undefined4 local_b8 [2];
  undefined1 local_b0;
  char local_af [8];
  undefined2 local_a7;
  undefined1 local_a5;
  int local_88 [2];
  long local_80;
  ulong uStack_78;
  long local_70;
  long lStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_a7 = 0x6874;
  local_b0 = 0x14;
  local_e0 = (double)*in_x0;
  local_b8[0] = 6;
  local_a5 = 0;
  local_af = (char  [8])s_frameWidth_0013ee38._0_8_;
  local_e8[0] = 3;
                    /* try { // try from 00179554 to 00179563 has its CatchHandler @ 00179810 */
  FUN_00172da8(local_88,local_b8,local_e8);
  local_110 = 0x16;
  local_140 = (double)in_x0[1];
  local_118[0] = 6;
  local_10f = (undefined7)s_frameHeight_0013ed04._0_8_;
  _cStack_108 = CONCAT31(0x746867,SUB81(s_frameHeight_0013ed04._0_8_,7));
  local_104 = 0;
  local_148[0] = 3;
  if (local_88[0] == 5) {
    local_210 = local_118;
                    /* try { // try from 001795b8 to 001795d3 has its CatchHandler @ 00179848 */
    lVar4 = FUN_00173118(&local_80,local_118,PTR_piecewise_construct_001f09a8,&local_210,&uStack_211
                        );
    folly::dynamic::operator=((dynamic *)(lVar4 + 0x40),(dynamic *)local_148);
    local_178[0] = 6;
    local_1a0 = (double)in_x0[2];
    local_170 = 0x1c;
    local_16f[0] = s_contentOffsetX_0013e69e[0];
    local_16f[1] = s_contentOffsetX_0013e69e[1];
    local_16f[2] = s_contentOffsetX_0013e69e[2];
    local_16f[3] = s_contentOffsetX_0013e69e[3];
    local_16f[4] = s_contentOffsetX_0013e69e[4];
    local_16f[5] = s_contentOffsetX_0013e69e[5];
    acStack_169[0] = s_contentOffsetX_0013e69e[6];
    acStack_169[1] = s_contentOffsetX_0013e69e[7];
    acStack_167[0] = s_contentOffsetX_0013e69e[8];
    acStack_167[1] = s_contentOffsetX_0013e69e[9];
    acStack_167[2] = s_contentOffsetX_0013e69e[10];
    acStack_167[3] = s_contentOffsetX_0013e69e[0xb];
    acStack_167[4] = s_contentOffsetX_0013e69e[0xc];
    acStack_167[5] = s_contentOffsetX_0013e69e[0xd];
    local_161 = 0;
    local_1a8[0] = 3;
    if (local_88[0] == 5) {
      local_210 = local_178;
                    /* try { // try from 00179634 to 0017964f has its CatchHandler @ 00179830 */
      lVar4 = FUN_00173118(&local_80,local_178,PTR_piecewise_construct_001f09a8,&local_210,
                           &uStack_211);
      folly::dynamic::operator=((dynamic *)(lVar4 + 0x40),(dynamic *)local_1a8);
      local_1d8[0] = 6;
      local_200 = (double)in_x0[3];
      local_1c1 = 0;
      local_1cf[0] = s_contentOffsetY_0013ff66[0];
      local_1cf[1] = s_contentOffsetY_0013ff66[1];
      local_1cf[2] = s_contentOffsetY_0013ff66[2];
      local_1cf[3] = s_contentOffsetY_0013ff66[3];
      local_1cf[4] = s_contentOffsetY_0013ff66[4];
      local_1cf[5] = s_contentOffsetY_0013ff66[5];
      local_1d0 = 0x1c;
      acStack_1c9[0] = s_contentOffsetY_0013ff66[6];
      acStack_1c9[1] = s_contentOffsetY_0013ff66[7];
      acStack_1c7[0] = s_contentOffsetY_0013ff66[8];
      acStack_1c7[1] = s_contentOffsetY_0013ff66[9];
      acStack_1c7[2] = s_contentOffsetY_0013ff66[10];
      acStack_1c7[3] = s_contentOffsetY_0013ff66[0xb];
      acStack_1c7[4] = s_contentOffsetY_0013ff66[0xc];
      acStack_1c7[5] = s_contentOffsetY_0013ff66[0xd];
      local_208[0] = 3;
      if (local_88[0] == 5) {
        local_210 = local_1d8;
                    /* try { // try from 001796b0 to 001796cb has its CatchHandler @ 00179818 */
        lVar4 = FUN_00173118(&local_80,local_1d8,PTR_piecewise_construct_001f09a8,&local_210,
                             &uStack_211);
        folly::dynamic::operator=((dynamic *)(lVar4 + 0x40),(dynamic *)local_208);
        uVar3 = uStack_78;
        lVar4 = local_80;
        *in_x8 = 5;
        local_80 = 0;
        uStack_78 = 0;
        *(long *)(in_x8 + 6) = local_70;
        *(long *)(in_x8 + 2) = lVar4;
        *(ulong *)(in_x8 + 4) = uVar3;
        *(long *)(in_x8 + 8) = lStack_68;
        in_x8[10] = local_60;
        if (lStack_68 != 0) {
          uVar5 = *(ulong *)(local_70 + 8);
          if ((uVar3 & uVar3 - 1) == 0) {
            uVar5 = uVar5 & uVar3 - 1;
          }
          else if (uVar3 <= uVar5) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar5 / uVar3;
            }
            uVar5 = uVar5 - uVar1 * uVar3;
          }
          *(undefined4 **)(lVar4 + uVar5 * 8) = in_x8 + 6;
          local_70 = 0;
          lStack_68 = 0;
        }
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        if (*(long *)(lVar2 + 0x28) == local_58) {
          return;
        }
      }
      else if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 00179800 to 0017980f has its CatchHandler @ 00179818 */
                    /* WARNING: Subroutine does not return */
        FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
      }
    }
    else if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 001797e0 to 001797ef has its CatchHandler @ 00179830 */
                    /* WARNING: Subroutine does not return */
      FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 001797c0 to 001797cf has its CatchHandler @ 00179848 */
                    /* WARNING: Subroutine does not return */
    FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00179890  facebook::react::RNSScreenState::getDynamic =====

/* facebook::react::RNSScreenState::getDynamic() const */

void facebook::react::RNSScreenState::getDynamic(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  float *in_x0;
  long lVar4;
  undefined4 *in_x8;
  ulong uVar5;
  undefined1 uStack_211;
  undefined4 *local_210;
  undefined4 local_208 [2];
  double local_200;
  undefined4 local_1d8 [2];
  undefined1 local_1d0;
  char local_1cf [6];
  char acStack_1c9 [2];
  char acStack_1c7 [6];
  undefined1 local_1c1;
  undefined4 local_1a8 [2];
  double local_1a0;
  undefined4 local_178 [2];
  undefined1 local_170;
  char local_16f [6];
  char acStack_169 [2];
  char acStack_167 [6];
  undefined1 local_161;
  undefined4 local_148 [2];
  double local_140;
  undefined4 local_118 [2];
  undefined1 local_110;
  undefined7 local_10f;
  char cStack_108;
  undefined3 uStack_107;
  undefined1 local_104;
  undefined4 local_e8 [2];
  double local_e0;
  undefined4 local_b8 [2];
  undefined1 local_b0;
  char local_af [8];
  undefined2 local_a7;
  undefined1 local_a5;
  int local_88 [2];
  long local_80;
  ulong uStack_78;
  long local_70;
  long lStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_a7 = 0x6874;
  local_b0 = 0x14;
  local_e0 = (double)*in_x0;
  local_b8[0] = 6;
  local_a5 = 0;
  local_af = (char  [8])s_frameWidth_0013ee38._0_8_;
  local_e8[0] = 3;
                    /* try { // try from 00179904 to 00179913 has its CatchHandler @ 00179bc0 */
  FUN_00172da8(local_88,local_b8,local_e8);
  local_110 = 0x16;
  local_140 = (double)in_x0[1];
  local_118[0] = 6;
  local_10f = (undefined7)s_frameHeight_0013ed04._0_8_;
  _cStack_108 = CONCAT31(0x746867,SUB81(s_frameHeight_0013ed04._0_8_,7));
  local_104 = 0;
  local_148[0] = 3;
  if (local_88[0] == 5) {
    local_210 = local_118;
                    /* try { // try from 00179968 to 00179983 has its CatchHandler @ 00179bf8 */
    lVar4 = FUN_00173118(&local_80,local_118,PTR_piecewise_construct_001f09a8,&local_210,&uStack_211
                        );
    folly::dynamic::operator=((dynamic *)(lVar4 + 0x40),(dynamic *)local_148);
    local_178[0] = 6;
    local_1a0 = (double)in_x0[2];
    local_170 = 0x1c;
    local_16f[0] = s_contentOffsetX_0013e69e[0];
    local_16f[1] = s_contentOffsetX_0013e69e[1];
    local_16f[2] = s_contentOffsetX_0013e69e[2];
    local_16f[3] = s_contentOffsetX_0013e69e[3];
    local_16f[4] = s_contentOffsetX_0013e69e[4];
    local_16f[5] = s_contentOffsetX_0013e69e[5];
    acStack_169[0] = s_contentOffsetX_0013e69e[6];
    acStack_169[1] = s_contentOffsetX_0013e69e[7];
    acStack_167[0] = s_contentOffsetX_0013e69e[8];
    acStack_167[1] = s_contentOffsetX_0013e69e[9];
    acStack_167[2] = s_contentOffsetX_0013e69e[10];
    acStack_167[3] = s_contentOffsetX_0013e69e[0xb];
    acStack_167[4] = s_contentOffsetX_0013e69e[0xc];
    acStack_167[5] = s_contentOffsetX_0013e69e[0xd];
    local_161 = 0;
    local_1a8[0] = 3;
    if (local_88[0] == 5) {
      local_210 = local_178;
                    /* try { // try from 001799e4 to 001799ff has its CatchHandler @ 00179be0 */
      lVar4 = FUN_00173118(&local_80,local_178,PTR_piecewise_construct_001f09a8,&local_210,
                           &uStack_211);
      folly::dynamic::operator=((dynamic *)(lVar4 + 0x40),(dynamic *)local_1a8);
      local_1d8[0] = 6;
      local_200 = (double)in_x0[3];
      local_1c1 = 0;
      local_1cf[0] = s_contentOffsetY_0013ff66[0];
      local_1cf[1] = s_contentOffsetY_0013ff66[1];
      local_1cf[2] = s_contentOffsetY_0013ff66[2];
      local_1cf[3] = s_contentOffsetY_0013ff66[3];
      local_1cf[4] = s_contentOffsetY_0013ff66[4];
      local_1cf[5] = s_contentOffsetY_0013ff66[5];
      local_1d0 = 0x1c;
      acStack_1c9[0] = s_contentOffsetY_0013ff66[6];
      acStack_1c9[1] = s_contentOffsetY_0013ff66[7];
      acStack_1c7[0] = s_contentOffsetY_0013ff66[8];
      acStack_1c7[1] = s_contentOffsetY_0013ff66[9];
      acStack_1c7[2] = s_contentOffsetY_0013ff66[10];
      acStack_1c7[3] = s_contentOffsetY_0013ff66[0xb];
      acStack_1c7[4] = s_contentOffsetY_0013ff66[0xc];
      acStack_1c7[5] = s_contentOffsetY_0013ff66[0xd];
      local_208[0] = 3;
      if (local_88[0] == 5) {
        local_210 = local_1d8;
                    /* try { // try from 00179a60 to 00179a7b has its CatchHandler @ 00179bc8 */
        lVar4 = FUN_00173118(&local_80,local_1d8,PTR_piecewise_construct_001f09a8,&local_210,
                             &uStack_211);
        folly::dynamic::operator=((dynamic *)(lVar4 + 0x40),(dynamic *)local_208);
        uVar3 = uStack_78;
        lVar4 = local_80;
        *in_x8 = 5;
        local_80 = 0;
        uStack_78 = 0;
        *(long *)(in_x8 + 6) = local_70;
        *(long *)(in_x8 + 2) = lVar4;
        *(ulong *)(in_x8 + 4) = uVar3;
        *(long *)(in_x8 + 8) = lStack_68;
        in_x8[10] = local_60;
        if (lStack_68 != 0) {
          uVar5 = *(ulong *)(local_70 + 8);
          if ((uVar3 & uVar3 - 1) == 0) {
            uVar5 = uVar5 & uVar3 - 1;
          }
          else if (uVar3 <= uVar5) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar5 / uVar3;
            }
            uVar5 = uVar5 - uVar1 * uVar3;
          }
          *(undefined4 **)(lVar4 + uVar5 * 8) = in_x8 + 6;
          local_70 = 0;
          lStack_68 = 0;
        }
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        if (*(long *)(lVar2 + 0x28) == local_58) {
          return;
        }
      }
      else if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 00179bb0 to 00179bbf has its CatchHandler @ 00179bc8 */
                    /* WARNING: Subroutine does not return */
        FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
      }
    }
    else if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 00179b90 to 00179b9f has its CatchHandler @ 00179be0 */
                    /* WARNING: Subroutine does not return */
      FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 00179b70 to 00179b7f has its CatchHandler @ 00179bf8 */
                    /* WARNING: Subroutine does not return */
    FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00179c40  facebook::react::RNSScreenState::setHeaderHeight =====

/* facebook::react::RNSScreenState::setHeaderHeight(float) */

void __thiscall facebook::react::RNSScreenState::setHeaderHeight(RNSScreenState *this,float param_1)

{
  *(float *)(this + 0x10) = param_1;
  return;
}


// ===== 00179c48  facebook::react::RNSScreenState::getLastKnownHeaderHeight =====

/* facebook::react::RNSScreenState::getLastKnownHeaderHeight() const */

undefined4 __thiscall
facebook::react::RNSScreenState::getLastKnownHeaderHeight(RNSScreenState *this)

{
  return *(undefined4 *)(this + 0x10);
}


// ===== 00179c50  facebook::react::RNSScreenState::getFrameCorrectionModes =====

/* facebook::react::RNSScreenState::getFrameCorrectionModes() */

RNSScreenState * __thiscall
facebook::react::RNSScreenState::getFrameCorrectionModes(RNSScreenState *this)

{
  return this + 0x14;
}


// ===== 00179c58  facebook::react::RNSScreenState::getHeaderCorrectionModes =====

/* facebook::react::RNSScreenState::getHeaderCorrectionModes() const */

RNSScreenState * __thiscall
facebook::react::RNSScreenState::getHeaderCorrectionModes(RNSScreenState *this)

{
  return this + 0x14;
}


// ===== 00179c60  facebook::react::RNSSplitScreenShadowNode::getContentOriginOffset =====

/* facebook::react::RNSSplitScreenShadowNode::getContentOriginOffset(bool) const */

undefined4 facebook::react::RNSSplitScreenShadowNode::getContentOriginOffset(bool param_1)

{
  return *(undefined4 *)(*(long *)(*(long *)((ulong)param_1 + 0x28) + 0x18) + 8);
}


// ===== 00179c70  FUN_00179c70 =====

void FUN_00179c70(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_001f09e8 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_00173ffc(param_1 + 0x23);
  FUN_00173f00(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00179d30  FUN_00179d30 =====

void FUN_00179d30(long param_1)

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


// ===== 00179d98  FUN_00179d98 =====

bool FUN_00179d98(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 00179db0  FUN_00179db0 =====

bool FUN_00179db0(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 00179dc8  facebook::react::RNSStackHeaderConfigShadowNode::getContentOriginOffset =====

/* facebook::react::RNSStackHeaderConfigShadowNode::getContentOriginOffset(bool) const */

undefined4 facebook::react::RNSStackHeaderConfigShadowNode::getContentOriginOffset(bool param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = *(long *)(*(long *)((ulong)param_1 + 0x28) + 0x18);
  uVar2 = *(undefined4 *)(lVar1 + 8);
  lVar1 = *(long *)(lVar1 + 0x18);
  if (lVar1 != 0) {
    FUN_00174090(1,lVar1 + 0x10);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  return uVar2;
}


// ===== 00179e18  FUN_00179e18 =====

void FUN_00179e18(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_001f09e8 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_00173ffc(param_1 + 0x23);
  FUN_00173f00(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00179ed8  FUN_00179ed8 =====

void FUN_00179ed8(long param_1)

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


// ===== 00179f40  FUN_00179f40 =====

bool FUN_00179f40(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 00179f58  FUN_00179f58 =====

bool FUN_00179f58(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 00179f70  facebook::react::RNSStackHeaderConfigState::setImageLoader =====

/* facebook::react::RNSStackHeaderConfigState::setImageLoader(std::__ndk1::weak_ptr<void>) */

void __thiscall
facebook::react::RNSStackHeaderConfigState::setImageLoader
          (RNSStackHeaderConfigState *this,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *param_2;
  lVar2 = param_2[1];
  if (lVar2 != 0) {
    FUN_00174090(1,lVar2 + 0x10);
  }
  lVar3 = *(long *)(this + 0x18);
  *(undefined8 *)(this + 0x10) = uVar1;
  *(long *)(this + 0x18) = lVar2;
  if (lVar3 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00179fc4  facebook::react::RNSStackHeaderConfigState::getImageLoader =====

/* facebook::react::RNSStackHeaderConfigState::getImageLoader() const */

void facebook::react::RNSStackHeaderConfigState::getImageLoader(void)

{
  long lVar1;
  long in_x0;
  undefined8 *in_x8;
  
  lVar1 = *(long *)(in_x0 + 0x18);
  *in_x8 = *(undefined8 *)(in_x0 + 0x10);
  in_x8[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00174090(1,lVar1 + 0x10);
  }
  return;
}


// ===== 00179fec  facebook::react::RNSStackHeaderConfigState::getDynamic =====

/* facebook::react::RNSStackHeaderConfigState::getDynamic() const */

void facebook::react::RNSStackHeaderConfigState::getDynamic(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  float *in_x0;
  long lVar4;
  undefined4 *in_x8;
  ulong uVar5;
  undefined1 uStack_211;
  undefined4 *local_210;
  undefined4 local_208 [2];
  double local_200;
  undefined4 local_1d8 [2];
  undefined1 local_1d0;
  char local_1cf [6];
  char acStack_1c9 [2];
  char acStack_1c7 [6];
  undefined1 local_1c1;
  undefined4 local_1a8 [2];
  double local_1a0;
  undefined4 local_178 [2];
  undefined1 local_170;
  char local_16f [6];
  char acStack_169 [2];
  char acStack_167 [6];
  undefined1 local_161;
  undefined4 local_148 [2];
  double local_140;
  undefined4 local_118 [2];
  undefined1 local_110;
  undefined7 local_10f;
  char cStack_108;
  undefined3 uStack_107;
  undefined1 local_104;
  undefined4 local_e8 [2];
  double local_e0;
  undefined4 local_b8 [2];
  undefined1 local_b0;
  char local_af [8];
  undefined2 local_a7;
  undefined1 local_a5;
  int local_88 [2];
  long local_80;
  ulong uStack_78;
  long local_70;
  long lStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_a7 = 0x6874;
  local_b0 = 0x14;
  local_e0 = (double)*in_x0;
  local_b8[0] = 6;
  local_a5 = 0;
  local_af = (char  [8])s_frameWidth_0013ee38._0_8_;
  local_e8[0] = 3;
                    /* try { // try from 0017a060 to 0017a06f has its CatchHandler @ 0017a31c */
  FUN_00172da8(local_88,local_b8,local_e8);
  local_110 = 0x16;
  local_140 = (double)in_x0[1];
  local_118[0] = 6;
  local_10f = (undefined7)s_frameHeight_0013ed04._0_8_;
  _cStack_108 = CONCAT31(0x746867,SUB81(s_frameHeight_0013ed04._0_8_,7));
  local_104 = 0;
  local_148[0] = 3;
  if (local_88[0] == 5) {
    local_210 = local_118;
                    /* try { // try from 0017a0c4 to 0017a0df has its CatchHandler @ 0017a354 */
    lVar4 = FUN_00173118(&local_80,local_118,PTR_piecewise_construct_001f09a8,&local_210,&uStack_211
                        );
    folly::dynamic::operator=((dynamic *)(lVar4 + 0x40),(dynamic *)local_148);
    local_178[0] = 6;
    local_1a0 = (double)in_x0[2];
    local_170 = 0x1c;
    local_16f[0] = s_contentOffsetX_0013e69e[0];
    local_16f[1] = s_contentOffsetX_0013e69e[1];
    local_16f[2] = s_contentOffsetX_0013e69e[2];
    local_16f[3] = s_contentOffsetX_0013e69e[3];
    local_16f[4] = s_contentOffsetX_0013e69e[4];
    local_16f[5] = s_contentOffsetX_0013e69e[5];
    acStack_169[0] = s_contentOffsetX_0013e69e[6];
    acStack_169[1] = s_contentOffsetX_0013e69e[7];
    acStack_167[0] = s_contentOffsetX_0013e69e[8];
    acStack_167[1] = s_contentOffsetX_0013e69e[9];
    acStack_167[2] = s_contentOffsetX_0013e69e[10];
    acStack_167[3] = s_contentOffsetX_0013e69e[0xb];
    acStack_167[4] = s_contentOffsetX_0013e69e[0xc];
    acStack_167[5] = s_contentOffsetX_0013e69e[0xd];
    local_161 = 0;
    local_1a8[0] = 3;
    if (local_88[0] == 5) {
      local_210 = local_178;
                    /* try { // try from 0017a140 to 0017a15b has its CatchHandler @ 0017a33c */
      lVar4 = FUN_00173118(&local_80,local_178,PTR_piecewise_construct_001f09a8,&local_210,
                           &uStack_211);
      folly::dynamic::operator=((dynamic *)(lVar4 + 0x40),(dynamic *)local_1a8);
      local_1d8[0] = 6;
      local_200 = (double)in_x0[3];
      local_1c1 = 0;
      local_1cf[0] = s_contentOffsetY_0013ff66[0];
      local_1cf[1] = s_contentOffsetY_0013ff66[1];
      local_1cf[2] = s_contentOffsetY_0013ff66[2];
      local_1cf[3] = s_contentOffsetY_0013ff66[3];
      local_1cf[4] = s_contentOffsetY_0013ff66[4];
      local_1cf[5] = s_contentOffsetY_0013ff66[5];
      local_1d0 = 0x1c;
      acStack_1c9[0] = s_contentOffsetY_0013ff66[6];
      acStack_1c9[1] = s_contentOffsetY_0013ff66[7];
      acStack_1c7[0] = s_contentOffsetY_0013ff66[8];
      acStack_1c7[1] = s_contentOffsetY_0013ff66[9];
      acStack_1c7[2] = s_contentOffsetY_0013ff66[10];
      acStack_1c7[3] = s_contentOffsetY_0013ff66[0xb];
      acStack_1c7[4] = s_contentOffsetY_0013ff66[0xc];
      acStack_1c7[5] = s_contentOffsetY_0013ff66[0xd];
      local_208[0] = 3;
      if (local_88[0] == 5) {
        local_210 = local_1d8;
                    /* try { // try from 0017a1bc to 0017a1d7 has its CatchHandler @ 0017a324 */
        lVar4 = FUN_00173118(&local_80,local_1d8,PTR_piecewise_construct_001f09a8,&local_210,
                             &uStack_211);
        folly::dynamic::operator=((dynamic *)(lVar4 + 0x40),(dynamic *)local_208);
        uVar3 = uStack_78;
        lVar4 = local_80;
        *in_x8 = 5;
        local_80 = 0;
        uStack_78 = 0;
        *(long *)(in_x8 + 6) = local_70;
        *(long *)(in_x8 + 2) = lVar4;
        *(ulong *)(in_x8 + 4) = uVar3;
        *(long *)(in_x8 + 8) = lStack_68;
        in_x8[10] = local_60;
        if (lStack_68 != 0) {
          uVar5 = *(ulong *)(local_70 + 8);
          if ((uVar3 & uVar3 - 1) == 0) {
            uVar5 = uVar5 & uVar3 - 1;
          }
          else if (uVar3 <= uVar5) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar5 / uVar3;
            }
            uVar5 = uVar5 - uVar1 * uVar3;
          }
          *(undefined4 **)(lVar4 + uVar5 * 8) = in_x8 + 6;
          local_70 = 0;
          lStack_68 = 0;
        }
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        if (*(long *)(lVar2 + 0x28) == local_58) {
          return;
        }
      }
      else if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0017a30c to 0017a31b has its CatchHandler @ 0017a324 */
                    /* WARNING: Subroutine does not return */
        FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
      }
    }
    else if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0017a2ec to 0017a2fb has its CatchHandler @ 0017a33c */
                    /* WARNING: Subroutine does not return */
      FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0017a2cc to 0017a2db has its CatchHandler @ 0017a354 */
                    /* WARNING: Subroutine does not return */
    FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017a39c  facebook::react::RNSStackHeaderItemShadowNode::layout =====

/* facebook::react::RNSStackHeaderItemShadowNode::layout(facebook::react::LayoutContext) */

void __thiscall
facebook::react::RNSStackHeaderItemShadowNode::layout
          (RNSStackHeaderItemShadowNode *this,undefined8 *param_2)

{
  long lVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_48 = param_2[1];
  local_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  local_30 = param_2[4];
  facebook::react::YogaLayoutableShadowNode::layout(this,&local_50);
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(*(long *)(*(long *)(this + 0x28) + 0x18) + 8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017a408  facebook::react::RNSStackHeaderItemShadowNode::applyFrameCorrections =====

/* facebook::react::RNSStackHeaderItemShadowNode::applyFrameCorrections() */

void __thiscall
facebook::react::RNSStackHeaderItemShadowNode::applyFrameCorrections
          (RNSStackHeaderItemShadowNode *this)

{
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(*(long *)(*(long *)(this + 0x28) + 0x18) + 8);
  return;
}


// ===== 0017a41c  FUN_0017a41c =====

void FUN_0017a41c(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_001f09e8 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_00173ffc(param_1 + 0x23);
  FUN_00173f00(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0017a4dc  FUN_0017a4dc =====

void FUN_0017a4dc(long param_1)

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


// ===== 0017a544  FUN_0017a544 =====

bool FUN_0017a544(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 0017a55c  FUN_0017a55c =====

bool FUN_0017a55c(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 0017a574  facebook::react::RNSStackHeaderSubviewShadowNode::getContentOriginOffset =====

/* facebook::react::RNSStackHeaderSubviewShadowNode::getContentOriginOffset(bool) const */

undefined4 facebook::react::RNSStackHeaderSubviewShadowNode::getContentOriginOffset(bool param_1)

{
  return **(undefined4 **)(*(long *)((ulong)param_1 + 0x28) + 0x18);
}


// ===== 0017a584  facebook::react::RNSStackHeaderSubviewShadowNode::layout =====

/* facebook::react::RNSStackHeaderSubviewShadowNode::layout(facebook::react::LayoutContext) */

void __thiscall
facebook::react::RNSStackHeaderSubviewShadowNode::layout
          (RNSStackHeaderSubviewShadowNode *this,undefined8 *param_2)

{
  long lVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_48 = param_2[1];
  local_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  local_30 = param_2[4];
  facebook::react::YogaLayoutableShadowNode::layout(this,&local_50);
  *(undefined4 *)(this + 0x68) = 0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017a5e4  facebook::react::RNSStackHeaderSubviewShadowNode::applyFrameCorrections =====

/* facebook::react::RNSStackHeaderSubviewShadowNode::applyFrameCorrections() */

void __thiscall
facebook::react::RNSStackHeaderSubviewShadowNode::applyFrameCorrections
          (RNSStackHeaderSubviewShadowNode *this)

{
  *(undefined4 *)(this + 0x68) = 0;
  return;
}


// ===== 0017a5ec  FUN_0017a5ec =====

void FUN_0017a5ec(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_001f09e8 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_00173ffc(param_1 + 0x23);
  FUN_00173f00(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0017a6ac  FUN_0017a6ac =====

void FUN_0017a6ac(long param_1)

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


// ===== 0017a714  FUN_0017a714 =====

bool FUN_0017a714(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 0017a72c  FUN_0017a72c =====

bool FUN_0017a72c(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 0017a744  facebook::react::RNSStackHeaderSubviewState::getDynamic =====

/* facebook::react::RNSStackHeaderSubviewState::getDynamic() const */

void facebook::react::RNSStackHeaderSubviewState::getDynamic(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  float *in_x0;
  long lVar4;
  undefined4 *in_x8;
  ulong uVar5;
  undefined1 uStack_151;
  undefined4 *local_150;
  undefined4 local_148 [2];
  double local_140;
  undefined4 local_118 [2];
  undefined1 local_110;
  char local_10f [6];
  char acStack_109 [2];
  char acStack_107 [6];
  undefined1 local_101;
  undefined4 local_e8 [2];
  double local_e0;
  undefined4 local_b8 [2];
  undefined1 local_b0;
  char local_af [6];
  char acStack_a9 [2];
  char acStack_a7 [6];
  undefined1 local_a1;
  int local_88 [2];
  long local_80;
  ulong uStack_78;
  long local_70;
  long lStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_b8[0] = 6;
  local_e0 = (double)*in_x0;
  local_b0 = 0x1c;
  local_af = (char  [6])s_contentOffsetX_0013e69e._0_6_;
  acStack_a9 = (char  [2])s_contentOffsetX_0013e69e._6_2_;
  acStack_a7 = (char  [6])s_contentOffsetX_0013e69e._8_6_;
  local_a1 = 0;
  local_e8[0] = 3;
                    /* try { // try from 0017a7b8 to 0017a7c7 has its CatchHandler @ 0017a910 */
  FUN_00172da8(local_88,local_b8,local_e8);
  local_140 = (double)in_x0[1];
  local_118[0] = 6;
  local_110 = 0x1c;
  local_10f[0] = s_contentOffsetY_0013ff66[0];
  local_10f[1] = s_contentOffsetY_0013ff66[1];
  local_10f[2] = s_contentOffsetY_0013ff66[2];
  local_10f[3] = s_contentOffsetY_0013ff66[3];
  local_10f[4] = s_contentOffsetY_0013ff66[4];
  local_10f[5] = s_contentOffsetY_0013ff66[5];
  acStack_109[0] = s_contentOffsetY_0013ff66[6];
  acStack_109[1] = s_contentOffsetY_0013ff66[7];
  acStack_107[0] = s_contentOffsetY_0013ff66[8];
  acStack_107[1] = s_contentOffsetY_0013ff66[9];
  acStack_107[2] = s_contentOffsetY_0013ff66[10];
  acStack_107[3] = s_contentOffsetY_0013ff66[0xb];
  acStack_107[4] = s_contentOffsetY_0013ff66[0xc];
  acStack_107[5] = s_contentOffsetY_0013ff66[0xd];
  local_101 = 0;
  local_148[0] = 3;
  if (local_88[0] == 5) {
    local_150 = local_118;
                    /* try { // try from 0017a814 to 0017a90f has its CatchHandler @ 0017a918 */
    lVar4 = FUN_00173118(&local_80,local_118,PTR_piecewise_construct_001f09a8,&local_150,&uStack_151
                        );
    folly::dynamic::operator=((dynamic *)(lVar4 + 0x40),(dynamic *)local_148);
    uVar3 = uStack_78;
    lVar4 = local_80;
    *in_x8 = 5;
    local_80 = 0;
    uStack_78 = 0;
    *(long *)(in_x8 + 6) = local_70;
    *(long *)(in_x8 + 2) = lVar4;
    *(ulong *)(in_x8 + 4) = uVar3;
    *(long *)(in_x8 + 8) = lStack_68;
    in_x8[10] = local_60;
    if (lStack_68 != 0) {
      uVar5 = *(ulong *)(local_70 + 8);
      if ((uVar3 & uVar3 - 1) == 0) {
        uVar5 = uVar5 & uVar3 - 1;
      }
      else if (uVar3 <= uVar5) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar5 / uVar3;
        }
        uVar5 = uVar5 - uVar1 * uVar3;
      }
      *(undefined4 **)(lVar4 + uVar5 * 8) = in_x8 + 6;
      local_70 = 0;
      lStack_68 = 0;
    }
    folly::dynamic::destroy();
    folly::dynamic::destroy();
    folly::dynamic::destroy();
    folly::dynamic::destroy();
    folly::dynamic::destroy();
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017a960  facebook::react::RNSStackScreenShadowNode::getContentOriginOffset =====

/* facebook::react::RNSStackScreenShadowNode::getContentOriginOffset(bool) const */

undefined4 facebook::react::RNSStackScreenShadowNode::getContentOriginOffset(bool param_1)

{
  return *(undefined4 *)(*(long *)(*(long *)((ulong)param_1 + 0x28) + 0x18) + 8);
}


// ===== 0017a970  FUN_0017a970 =====

void FUN_0017a970(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_001f09e8 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_00173ffc(param_1 + 0x23);
  FUN_00173f00(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0017aa30  FUN_0017aa30 =====

void FUN_0017aa30(long param_1)

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


// ===== 0017aa98  FUN_0017aa98 =====

bool FUN_0017aa98(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 0017aab0  FUN_0017aab0 =====

bool FUN_0017aab0(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 0017aac8  facebook::react::RNSStackScreenState::getDynamic =====

/* facebook::react::RNSStackScreenState::getDynamic() const */

void facebook::react::RNSStackScreenState::getDynamic(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  float *in_x0;
  long lVar4;
  undefined4 *in_x8;
  ulong uVar5;
  undefined1 uStack_211;
  undefined4 *local_210;
  undefined4 local_208 [2];
  double local_200;
  undefined4 local_1d8 [2];
  undefined1 local_1d0;
  char local_1cf [6];
  char acStack_1c9 [2];
  char acStack_1c7 [6];
  undefined1 local_1c1;
  undefined4 local_1a8 [2];
  double local_1a0;
  undefined4 local_178 [2];
  undefined1 local_170;
  char local_16f [6];
  char acStack_169 [2];
  char acStack_167 [6];
  undefined1 local_161;
  undefined4 local_148 [2];
  double local_140;
  undefined4 local_118 [2];
  undefined1 local_110;
  undefined7 local_10f;
  char cStack_108;
  undefined3 uStack_107;
  undefined1 local_104;
  undefined4 local_e8 [2];
  double local_e0;
  undefined4 local_b8 [2];
  undefined1 local_b0;
  char local_af [8];
  undefined2 local_a7;
  undefined1 local_a5;
  int local_88 [2];
  long local_80;
  ulong uStack_78;
  long local_70;
  long lStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_a7 = 0x6874;
  local_b0 = 0x14;
  local_e0 = (double)*in_x0;
  local_b8[0] = 6;
  local_a5 = 0;
  local_af = (char  [8])s_frameWidth_0013ee38._0_8_;
  local_e8[0] = 3;
                    /* try { // try from 0017ab3c to 0017ab4b has its CatchHandler @ 0017adf8 */
  FUN_00172da8(local_88,local_b8,local_e8);
  local_110 = 0x16;
  local_140 = (double)in_x0[1];
  local_118[0] = 6;
  local_10f = (undefined7)s_frameHeight_0013ed04._0_8_;
  _cStack_108 = CONCAT31(0x746867,SUB81(s_frameHeight_0013ed04._0_8_,7));
  local_104 = 0;
  local_148[0] = 3;
  if (local_88[0] == 5) {
    local_210 = local_118;
                    /* try { // try from 0017aba0 to 0017abbb has its CatchHandler @ 0017ae30 */
    lVar4 = FUN_00173118(&local_80,local_118,PTR_piecewise_construct_001f09a8,&local_210,&uStack_211
                        );
    folly::dynamic::operator=((dynamic *)(lVar4 + 0x40),(dynamic *)local_148);
    local_178[0] = 6;
    local_1a0 = (double)in_x0[2];
    local_170 = 0x1c;
    local_16f[0] = s_contentOffsetX_0013e69e[0];
    local_16f[1] = s_contentOffsetX_0013e69e[1];
    local_16f[2] = s_contentOffsetX_0013e69e[2];
    local_16f[3] = s_contentOffsetX_0013e69e[3];
    local_16f[4] = s_contentOffsetX_0013e69e[4];
    local_16f[5] = s_contentOffsetX_0013e69e[5];
    acStack_169[0] = s_contentOffsetX_0013e69e[6];
    acStack_169[1] = s_contentOffsetX_0013e69e[7];
    acStack_167[0] = s_contentOffsetX_0013e69e[8];
    acStack_167[1] = s_contentOffsetX_0013e69e[9];
    acStack_167[2] = s_contentOffsetX_0013e69e[10];
    acStack_167[3] = s_contentOffsetX_0013e69e[0xb];
    acStack_167[4] = s_contentOffsetX_0013e69e[0xc];
    acStack_167[5] = s_contentOffsetX_0013e69e[0xd];
    local_161 = 0;
    local_1a8[0] = 3;
    if (local_88[0] == 5) {
      local_210 = local_178;
                    /* try { // try from 0017ac1c to 0017ac37 has its CatchHandler @ 0017ae18 */
      lVar4 = FUN_00173118(&local_80,local_178,PTR_piecewise_construct_001f09a8,&local_210,
                           &uStack_211);
      folly::dynamic::operator=((dynamic *)(lVar4 + 0x40),(dynamic *)local_1a8);
      local_1d8[0] = 6;
      local_200 = (double)in_x0[3];
      local_1c1 = 0;
      local_1cf[0] = s_contentOffsetY_0013ff66[0];
      local_1cf[1] = s_contentOffsetY_0013ff66[1];
      local_1cf[2] = s_contentOffsetY_0013ff66[2];
      local_1cf[3] = s_contentOffsetY_0013ff66[3];
      local_1cf[4] = s_contentOffsetY_0013ff66[4];
      local_1cf[5] = s_contentOffsetY_0013ff66[5];
      local_1d0 = 0x1c;
      acStack_1c9[0] = s_contentOffsetY_0013ff66[6];
      acStack_1c9[1] = s_contentOffsetY_0013ff66[7];
      acStack_1c7[0] = s_contentOffsetY_0013ff66[8];
      acStack_1c7[1] = s_contentOffsetY_0013ff66[9];
      acStack_1c7[2] = s_contentOffsetY_0013ff66[10];
      acStack_1c7[3] = s_contentOffsetY_0013ff66[0xb];
      acStack_1c7[4] = s_contentOffsetY_0013ff66[0xc];
      acStack_1c7[5] = s_contentOffsetY_0013ff66[0xd];
      local_208[0] = 3;
      if (local_88[0] == 5) {
        local_210 = local_1d8;
                    /* try { // try from 0017ac98 to 0017acb3 has its CatchHandler @ 0017ae00 */
        lVar4 = FUN_00173118(&local_80,local_1d8,PTR_piecewise_construct_001f09a8,&local_210,
                             &uStack_211);
        folly::dynamic::operator=((dynamic *)(lVar4 + 0x40),(dynamic *)local_208);
        uVar3 = uStack_78;
        lVar4 = local_80;
        *in_x8 = 5;
        local_80 = 0;
        uStack_78 = 0;
        *(long *)(in_x8 + 6) = local_70;
        *(long *)(in_x8 + 2) = lVar4;
        *(ulong *)(in_x8 + 4) = uVar3;
        *(long *)(in_x8 + 8) = lStack_68;
        in_x8[10] = local_60;
        if (lStack_68 != 0) {
          uVar5 = *(ulong *)(local_70 + 8);
          if ((uVar3 & uVar3 - 1) == 0) {
            uVar5 = uVar5 & uVar3 - 1;
          }
          else if (uVar3 <= uVar5) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar5 / uVar3;
            }
            uVar5 = uVar5 - uVar1 * uVar3;
          }
          *(undefined4 **)(lVar4 + uVar5 * 8) = in_x8 + 6;
          local_70 = 0;
          lStack_68 = 0;
        }
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        folly::dynamic::destroy();
        if (*(long *)(lVar2 + 0x28) == local_58) {
          return;
        }
      }
      else if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0017ade8 to 0017adf7 has its CatchHandler @ 0017ae00 */
                    /* WARNING: Subroutine does not return */
        FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
      }
    }
    else if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0017adc8 to 0017add7 has its CatchHandler @ 0017ae18 */
                    /* WARNING: Subroutine does not return */
      FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0017ada8 to 0017adb7 has its CatchHandler @ 0017ae30 */
                    /* WARNING: Subroutine does not return */
    FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017ae78  facebook::react::RNSTabsBottomAccessoryShadowNode::getContentOriginOffset =====

/* facebook::react::RNSTabsBottomAccessoryShadowNode::getContentOriginOffset(bool) const */

undefined4 facebook::react::RNSTabsBottomAccessoryShadowNode::getContentOriginOffset(bool param_1)

{
  return *(undefined4 *)(*(long *)(*(long *)((ulong)param_1 + 0x28) + 0x18) + 8);
}


// ===== 0017ae88  facebook::react::RNSTabsBottomAccessoryShadowNode::layout =====

/* facebook::react::RNSTabsBottomAccessoryShadowNode::layout(facebook::react::LayoutContext) */

void __thiscall
facebook::react::RNSTabsBottomAccessoryShadowNode::layout
          (RNSTabsBottomAccessoryShadowNode *this,undefined8 *param_2)

{
  long lVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_48 = param_2[1];
  local_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  local_30 = param_2[4];
  facebook::react::YogaLayoutableShadowNode::layout(this,&local_50);
  *(undefined4 *)(this + 0x68) = 0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017aee8  facebook::react::RNSTabsBottomAccessoryShadowNode::applyFrameCorrections =====

/* facebook::react::RNSTabsBottomAccessoryShadowNode::applyFrameCorrections() */

void __thiscall
facebook::react::RNSTabsBottomAccessoryShadowNode::applyFrameCorrections
          (RNSTabsBottomAccessoryShadowNode *this)

{
  *(undefined4 *)(this + 0x68) = 0;
  return;
}


// ===== 0017aef0  FUN_0017aef0 =====

void FUN_0017aef0(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_001f09e8 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_00173ffc(param_1 + 0x23);
  FUN_00173f00(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0017afb0  FUN_0017afb0 =====

void FUN_0017afb0(long param_1)

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


// ===== 0017b018  FUN_0017b018 =====

bool FUN_0017b018(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 0017b030  FUN_0017b030 =====

bool FUN_0017b030(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 0017b048  facebook::react::RNSTabsHostState::getDynamic =====

/* facebook::react::RNSTabsHostState::getDynamic() const */

void __thiscall facebook::react::RNSTabsHostState::getDynamic(RNSTabsHostState *this)

{
  undefined4 *in_x8;
  
  *in_x8 = 0;
  *(undefined8 *)(in_x8 + 2) = 0;
  return;
}


// ===== 0017b054  facebook::react::rnscreens_ModuleProvider =====

/* facebook::react::rnscreens_ModuleProvider(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   facebook::react::JavaTurboModule::InitParams const&) */

void facebook::react::rnscreens_ModuleProvider(basic_string *param_1,InitParams *param_2)

{
  undefined8 *in_x8;
  
  *in_x8 = 0;
  in_x8[1] = 0;
  return;
}


// ===== 0017b05c  facebook::react::rnscreens_registerComponentDescriptorsFromCodegen =====

/* WARNING: Removing unreachable block (ram,0x0017b528) */
/* WARNING: Removing unreachable block (ram,0x0017b538) */
/* WARNING: Removing unreachable block (ram,0x0017b478) */
/* WARNING: Removing unreachable block (ram,0x0017b488) */
/* WARNING: Removing unreachable block (ram,0x0017b3c8) */
/* WARNING: Removing unreachable block (ram,0x0017b3d8) */
/* WARNING: Removing unreachable block (ram,0x0017b318) */
/* WARNING: Removing unreachable block (ram,0x0017b328) */
/* WARNING: Removing unreachable block (ram,0x0017b268) */
/* WARNING: Removing unreachable block (ram,0x0017b278) */
/* WARNING: Removing unreachable block (ram,0x0017b1b8) */
/* WARNING: Removing unreachable block (ram,0x0017b1c8) */
/* WARNING: Removing unreachable block (ram,0x0017b108) */
/* WARNING: Removing unreachable block (ram,0x0017b118) */
/* WARNING: Removing unreachable block (ram,0x0017b0b0) */
/* WARNING: Removing unreachable block (ram,0x0017b0c0) */
/* WARNING: Removing unreachable block (ram,0x0017b160) */
/* WARNING: Removing unreachable block (ram,0x0017b170) */
/* WARNING: Removing unreachable block (ram,0x0017b210) */
/* WARNING: Removing unreachable block (ram,0x0017b220) */
/* WARNING: Removing unreachable block (ram,0x0017b2c0) */
/* WARNING: Removing unreachable block (ram,0x0017b2d0) */
/* WARNING: Removing unreachable block (ram,0x0017b370) */
/* WARNING: Removing unreachable block (ram,0x0017b380) */
/* WARNING: Removing unreachable block (ram,0x0017b420) */
/* WARNING: Removing unreachable block (ram,0x0017b430) */
/* WARNING: Removing unreachable block (ram,0x0017b4d0) */
/* WARNING: Removing unreachable block (ram,0x0017b4e0) */
/* WARNING: Removing unreachable block (ram,0x0017b580) */
/* WARNING: Removing unreachable block (ram,0x0017b590) */
/* facebook::react::rnscreens_registerComponentDescriptorsFromCodegen(std::__ndk1::shared_ptr<facebook::react::ComponentDescriptorProviderRegistry
   const>) */

void facebook::react::rnscreens_registerComponentDescriptorsFromCodegen(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0017b0a0 to 0017b0a7 has its CatchHandler @ 0017b604 */
  facebook::react::ComponentDescriptorProviderRegistry::add((ComponentDescriptorProvider *)*param_1)
  ;
                    /* try { // try from 0017b0f8 to 0017b0ff has its CatchHandler @ 0017b600 */
  facebook::react::ComponentDescriptorProviderRegistry::add((ComponentDescriptorProvider *)*param_1)
  ;
                    /* try { // try from 0017b150 to 0017b157 has its CatchHandler @ 0017b5fc */
  facebook::react::ComponentDescriptorProviderRegistry::add((ComponentDescriptorProvider *)*param_1)
  ;
                    /* try { // try from 0017b1a8 to 0017b1af has its CatchHandler @ 0017b5f8 */
  facebook::react::ComponentDescriptorProviderRegistry::add((ComponentDescriptorProvider *)*param_1)
  ;
                    /* try { // try from 0017b200 to 0017b207 has its CatchHandler @ 0017b5f4 */
  facebook::react::ComponentDescriptorProviderRegistry::add((ComponentDescriptorProvider *)*param_1)
  ;
                    /* try { // try from 0017b258 to 0017b25f has its CatchHandler @ 0017b5f0 */
  facebook::react::ComponentDescriptorProviderRegistry::add((ComponentDescriptorProvider *)*param_1)
  ;
                    /* try { // try from 0017b2b0 to 0017b2b7 has its CatchHandler @ 0017b5ec */
  facebook::react::ComponentDescriptorProviderRegistry::add((ComponentDescriptorProvider *)*param_1)
  ;
                    /* try { // try from 0017b308 to 0017b30f has its CatchHandler @ 0017b5e8 */
  facebook::react::ComponentDescriptorProviderRegistry::add((ComponentDescriptorProvider *)*param_1)
  ;
                    /* try { // try from 0017b360 to 0017b367 has its CatchHandler @ 0017b5e4 */
  facebook::react::ComponentDescriptorProviderRegistry::add((ComponentDescriptorProvider *)*param_1)
  ;
                    /* try { // try from 0017b3b8 to 0017b3bf has its CatchHandler @ 0017b5e0 */
  facebook::react::ComponentDescriptorProviderRegistry::add((ComponentDescriptorProvider *)*param_1)
  ;
                    /* try { // try from 0017b410 to 0017b417 has its CatchHandler @ 0017b5dc */
  facebook::react::ComponentDescriptorProviderRegistry::add((ComponentDescriptorProvider *)*param_1)
  ;
                    /* try { // try from 0017b468 to 0017b46f has its CatchHandler @ 0017b5d8 */
  facebook::react::ComponentDescriptorProviderRegistry::add((ComponentDescriptorProvider *)*param_1)
  ;
                    /* try { // try from 0017b4c0 to 0017b4c7 has its CatchHandler @ 0017b5d4 */
  facebook::react::ComponentDescriptorProviderRegistry::add((ComponentDescriptorProvider *)*param_1)
  ;
                    /* try { // try from 0017b518 to 0017b51f has its CatchHandler @ 0017b5d0 */
  facebook::react::ComponentDescriptorProviderRegistry::add((ComponentDescriptorProvider *)*param_1)
  ;
                    /* try { // try from 0017b570 to 0017b577 has its CatchHandler @ 0017b5cc */
  facebook::react::ComponentDescriptorProviderRegistry::add((ComponentDescriptorProvider *)*param_1)
  ;
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0017b62c  FUN_0017b62c =====

void FUN_0017b62c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x18);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0017b67c  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ComponentDescriptor *this;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  undefined4 local_1010 [2];
  undefined8 *local_1008;
  void *local_1000;
  void *pvStack_ff8;
  undefined8 local_ff0;
  void *pvStack_fe8;
  void *local_fe0;
  undefined8 uStack_fd8;
  void *local_fd0;
  void *pvStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  undefined *local_fb0;
  undefined8 uStack_fa8;
  undefined8 local_fa0;
  undefined8 uStack_f98;
  undefined4 local_f90 [2];
  undefined8 local_f88;
  undefined8 uStack_f80;
  undefined8 local_f78;
  undefined8 uStack_f70;
  undefined4 local_f68;
  undefined4 local_f60;
  undefined1 local_f5c;
  undefined8 local_f5b;
  undefined8 local_f53;
  undefined8 uStack_f4b;
  undefined8 local_f43;
  undefined8 uStack_f3b;
  undefined8 local_f33;
  undefined8 uStack_f2b;
  undefined8 local_f23;
  undefined6 uStack_f1b;
  undefined2 uStack_f15;
  undefined6 uStack_f13;
  undefined8 uStack_f0d;
  undefined4 local_f05;
  undefined8 local_f01;
  undefined1 local_ef9;
  undefined1 uStack_ef8;
  undefined7 uStack_ef7;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 local_ed8;
  undefined8 uStack_ed0;
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined8 uStack_e98;
  undefined8 local_e90;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined8 local_e78;
  undefined4 uStack_e70;
  undefined4 uStack_e6c;
  undefined4 uStack_e68;
  undefined4 uStack_e64;
  undefined4 uStack_e60;
  undefined4 uStack_e5c;
  undefined8 local_e58;
  undefined8 uStack_e50;
  undefined4 local_e48;
  undefined1 local_e44;
  undefined4 local_e40;
  undefined1 local_e3c;
  undefined4 local_e38;
  undefined1 local_e34;
  undefined4 local_e30;
  undefined1 local_e2c;
  undefined4 local_e28;
  undefined1 local_e24;
  undefined4 local_e20;
  undefined1 local_e1c;
  undefined4 local_e18;
  undefined1 local_e14;
  undefined4 local_e10;
  undefined1 local_e0c;
  undefined4 local_e08;
  undefined1 local_e04;
  undefined4 local_e00;
  undefined1 local_dfc;
  undefined4 local_df8;
  undefined1 local_df4;
  undefined4 local_df0;
  undefined1 local_dec;
  undefined4 local_de8;
  undefined1 local_de4;
  undefined4 local_de0;
  undefined1 local_ddc;
  undefined4 local_dd8;
  undefined1 local_dd4;
  undefined4 local_dd0;
  undefined1 local_dcc;
  undefined1 local_dc8;
  undefined1 local_dc4;
  undefined1 local_db8;
  undefined8 local_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 local_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined1 uStack_d78;
  undefined7 local_d77;
  undefined1 uStack_d70;
  undefined8 uStack_d6f;
  undefined8 local_d64;
  undefined8 uStack_d5c;
  undefined8 uStack_d54;
  undefined8 uStack_d4c;
  undefined8 local_d44;
  undefined8 uStack_d3c;
  undefined8 uStack_d34;
  undefined8 uStack_d2c;
  undefined8 local_d24;
  undefined8 uStack_d1c;
  undefined8 uStack_d14;
  undefined5 uStack_d0c;
  undefined3 local_d07;
  undefined5 uStack_d04;
  undefined1 local_cfc;
  undefined1 local_cf8;
  undefined1 local_cf4;
  undefined1 local_cf0;
  undefined1 local_cec;
  undefined1 local_ce8;
  undefined1 local_cd0;
  undefined8 local_cc8;
  undefined8 uStack_cc0;
  undefined8 local_cb8;
  undefined4 local_cb0;
  undefined1 local_cac;
  undefined4 local_cab;
  undefined1 local_ca7;
  undefined1 local_ca6;
  undefined8 local_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 local_c80;
  undefined7 uStack_c78;
  undefined4 uStack_c71;
  undefined8 local_c6c;
  undefined1 local_c64;
  undefined1 local_c5c;
  undefined1 local_c58;
  undefined1 local_c50;
  undefined1 local_c4c;
  undefined1 local_c44;
  undefined1 local_c40;
  undefined1 local_c38;
  undefined1 local_c34;
  undefined1 local_c2c;
  undefined1 local_c28;
  undefined1 local_c20;
  undefined1 local_c1c;
  undefined1 local_c14;
  undefined1 local_c10;
  undefined1 local_c08;
  undefined1 local_c04;
  undefined1 local_bfc;
  undefined1 local_bf8;
  undefined1 local_bf0;
  undefined1 local_bec;
  undefined1 local_be4;
  undefined1 local_be0;
  undefined1 local_bd8;
  undefined1 local_bd4;
  undefined1 local_bcc;
  undefined1 local_bc8;
  undefined1 local_bc4;
  undefined1 local_bc0;
  undefined1 local_bbc;
  undefined1 local_bb8;
  undefined1 local_bb4;
  undefined1 local_bb0;
  undefined1 local_bac;
  undefined1 local_ba8;
  undefined1 local_ba4;
  undefined1 local_ba0;
  undefined1 local_b9c;
  undefined1 local_b98;
  undefined1 local_b94;
  undefined1 local_b90;
  undefined1 local_b8c;
  undefined1 local_b88;
  undefined1 local_b84;
  undefined1 local_b80;
  undefined1 local_b7c;
  undefined1 local_b78;
  undefined1 local_b74;
  undefined1 local_b70;
  undefined1 local_b6c;
  undefined8 local_b68;
  undefined8 uStack_b60;
  undefined8 local_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined2 local_b38;
  undefined8 local_b34;
  undefined1 local_b2c;
  undefined8 local_b28;
  undefined8 local_b20;
  undefined8 uStack_b18;
  undefined1 local_b10;
  undefined8 local_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined6 uStack_a10;
  undefined2 uStack_a0a;
  undefined6 uStack_a08;
  undefined1 local_a00;
  undefined1 local_9fc;
  undefined1 local_9f8;
  undefined8 local_9f4;
  undefined8 uStack_9ec;
  undefined1 local_9e4;
  undefined8 local_9e0;
  undefined2 local_9d8;
  undefined1 local_9d6;
  undefined4 local_9d4;
  undefined1 local_9d0;
  undefined1 local_970;
  undefined1 local_968;
  undefined1 local_908;
  undefined4 local_900;
  undefined2 local_8fc;
  undefined1 local_8f8;
  undefined1 local_8f4;
  undefined1 local_8f0;
  undefined1 local_8ec;
  undefined1 local_8e8;
  undefined1 local_8e4;
  undefined1 local_8e0;
  undefined1 local_8dc;
  undefined1 local_8d8;
  undefined1 local_8d4;
  undefined *local_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined8 local_8b8;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
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
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  void *local_160;
  undefined8 uStack_158;
  void *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118 [4];
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_d8;
  void *local_d0;
  void *pvStack_c8;
  undefined8 uStack_c0;
  void *local_b8;
  void *local_b0;
  undefined8 uStack_a8;
  long local_a0 [4];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_fe8 = (void *)0x0;
  local_ff0 = 0;
  uStack_fd8 = 0;
  local_fe0 = (void *)0x0;
  pvStack_fc8 = (void *)0x0;
  local_fd0 = (void *)0x0;
  uStack_fb8 = 0;
  uStack_fc0 = 0;
  pvStack_ff8 = (void *)0x0;
  local_1000 = (void *)0x0;
                    /* try { // try from 0017b6cc to 0017b6d7 has its CatchHandler @ 0017bd88 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_1000);
  local_130 = 0;
  *(undefined ***)this = &PTR_FUN_001e8258;
  local_128 = 0;
  local_120 = 0;
  local_118[0] = 0;
  local_108 = 0;
  local_100 = 0;
  local_d8 = 0;
  pvStack_c8 = (void *)0x0;
  local_d0 = (void *)0x0;
  local_b8 = (void *)0x0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = (void *)0x0;
  local_140 = 0;
  uStack_148 = 0;
  local_150 = (void *)0x0;
  uStack_158 = 0;
  local_160 = (void *)0x0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
                    /* try { // try from 0017b740 to 0017b74b has its CatchHandler @ 0017bd7c */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1f0);
  local_140 = CONCAT44(local_140._4_4_,0x3f800000);
  local_1010[0] = 0xffffffff;
  uStack_148 = 0;
  local_150 = (void *)0x0;
  uStack_158 = 0;
  local_160 = (void *)0x0;
  local_1008 = &local_1f0;
  facebook::react::RawProps::parse((RawPropsParser *)&local_130);
  memset(local_f90,0,0x6c0);
  local_8d0 = (undefined *)CONCAT44(local_8d0._4_4_,5);
  local_8b8 = 0;
  local_fb0 = PTR_construction_vtable_001f0e08 + 0x20;
  local_f90[0] = 5;
  uStack_fa8 = 0;
  uStack_f98 = 0;
  local_fa0 = 0;
  local_8b0 = 0;
  uStack_8a8 = 0x3f800000;
  uStack_8c0 = 0;
  local_8c8 = 0;
  uStack_f80 = 0;
  local_f88 = 0;
  uStack_f70 = 0;
  local_f78 = 0;
  local_f68 = 0x3f800000;
  folly::dynamic::destroy();
  puVar6 = PTR_PTR_001f0ba8;
  puVar5 = PTR_vtable_001f0ba0;
  local_f5c = 0;
  local_f01 = 0;
  uStack_a20 = _UNK_00142624;
  local_a28 = _DAT_0014261c;
  local_f5b = DAT_001423b8;
  uStack_b18 = _UNK_001423f8;
  local_b20 = _DAT_001423f0;
  uStack_a30 = _UNK_00142614;
  local_a38 = _DAT_0014260c;
  local_e44 = 0;
  uStack_a40 = _UNK_00142604;
  local_a48 = _DAT_001425fc;
  uStack_a50 = _UNK_001425f4;
  local_a58 = _DAT_001425ec;
  uStack_a08 = 0;
  local_e3c = 0;
  uStack_e70 = 0;
  local_e78 = 0;
  uStack_e5c = 0;
  uStack_e80 = 0;
  local_e88 = 0;
  uStack_a10 = 0;
  uStack_a0a = 0;
  local_a18 = 0;
  local_f60 = 0x10410710;
  local_f05 = 0x40004;
  uStack_e64 = 0;
  uStack_e60 = 0;
  uStack_e6c = 0;
  uStack_e68 = 0;
  uStack_e50 = 0;
  local_e58 = 0;
  local_e48 = 0x7fc00000;
  local_e40 = 0x7fc00000;
  local_e38 = 0x7fc00000;
  local_e30 = 0x7fc00000;
  local_e28 = 0x7fc00000;
  local_e20 = 0x7fc00000;
  local_e18 = 0x7fc00000;
  local_e10 = 0x7fc00000;
  local_e08 = 0x7fc00000;
  local_e00 = 0x7fc00000;
  local_df8 = 0x7fc00000;
  local_df0 = 0x7fc00000;
  local_de8 = 0x7fc00000;
  local_de0 = 0x7fc00000;
  local_dd8 = 0x7fc00000;
  local_dd0 = 0x7fc00000;
  uStack_d6f = 0;
  uStack_d70 = 0;
  uStack_d5c = 0;
  local_d64 = 0;
  uStack_d4c = 0;
  uStack_d54 = 0;
  uStack_d3c = 0;
  local_d44 = 0;
  uStack_d2c = 0;
  uStack_d34 = 0;
  uStack_d1c = 0;
  local_d24 = 0;
  uStack_d0c = 0;
  uStack_d14 = 0;
  local_d07 = 0;
  uStack_d04 = 0;
  local_cac = 1;
  local_cab = 0;
  local_ca6 = 0x23;
  local_c6c = 0x3f800000;
  uStack_b50 = 0;
  local_b58 = 0;
  uStack_b40 = 0;
  uStack_b48 = 0;
  uStack_b60 = 0;
  local_b68 = 0;
  local_b34 = 0;
  uStack_b00 = 0;
  local_b08 = 0;
  uStack_af0 = 0;
  uStack_af8 = 0;
  uStack_ae0 = 0;
  local_ae8 = 0;
  uStack_ad0 = 0;
  uStack_ad8 = 0;
  uStack_ac0 = 0;
  local_ac8 = 0;
  uStack_ab0 = 0;
  uStack_ab8 = 0;
  uStack_aa0 = 0;
  local_aa8 = 0;
  uStack_a90 = 0;
  uStack_a98 = 0;
  uStack_a80 = 0;
  local_a88 = 0;
  uStack_a70 = 0;
  uStack_a78 = 0;
  uStack_a60 = 0;
  local_a68 = 0;
  uStack_ef7 = 0;
  uStack_f4b = 0;
  local_f53 = 0;
  uStack_f3b = 0;
  local_f43 = 0;
  uStack_f2b = 0;
  local_f33 = 0;
  uStack_f1b = 0;
  local_f23 = 0;
  uStack_f0d = 0;
  uStack_f15 = 0;
  uStack_f13 = 0;
  local_ef9 = 0;
  uStack_ef8 = 0;
  uStack_ee8 = 0;
  uStack_ef0 = 0;
  local_ed8 = 0;
  uStack_ee0 = 0;
  local_ec8 = 0;
  uStack_ed0 = 0;
  local_eb8 = 0;
  uStack_ec0 = 0;
  local_ea8 = 0;
  uStack_eb0 = 0;
  uStack_e98 = 0;
  uStack_ea0 = 0;
  local_e90 = 0;
  local_e34 = 0;
  local_e2c = 0;
  local_e24 = 0;
  local_e1c = 0;
  local_e14 = 0;
  local_e0c = 0;
  local_e04 = 0;
  local_dfc = 0;
  local_df4 = 0;
  local_dec = 0;
  local_de4 = 0;
  local_ddc = 0;
  local_dd4 = 0;
  local_dcc = 0;
  local_dc8 = 0;
  local_dc4 = 0;
  local_db8 = 0;
  local_cfc = 0;
  local_cf8 = 0;
  local_cf4 = 0;
  local_cf0 = 0;
  local_cec = 0;
  local_ce8 = 0;
  local_cd0 = 0;
  uStack_da8 = 0;
  local_db0 = 0;
  uStack_d98 = 0;
  uStack_da0 = 0;
  uStack_d88 = 0;
  local_d90 = 0;
  uStack_d78 = 0;
  local_d77 = 0;
  uStack_d80 = 0;
  uStack_cc0 = 0;
  local_cc8 = 0;
  local_cb8 = 0;
  local_cb0 = 0;
  local_ca7 = 0;
  uStack_c98 = 0;
  local_ca0 = 0;
  uStack_c88 = 0;
  uStack_c90 = 0;
  uStack_c78 = 0;
  uStack_c71 = 0;
  local_c80 = 0;
  local_c64 = 0;
  local_c5c = 0;
  local_c58 = 0;
  local_c50 = 0;
  local_c4c = 0;
  local_c44 = 0;
  local_c40 = 0;
  local_c38 = 0;
  local_c34 = 0;
  local_c2c = 0;
  local_c28 = 0;
  local_c20 = 0;
  local_c1c = 0;
  local_c14 = 0;
  local_c10 = 0;
  local_c08 = 0;
  local_c04 = 0;
  local_bfc = 0;
  local_bf8 = 0;
  local_bf0 = 0;
  local_bec = 0;
  local_be4 = 0;
  local_be0 = 0;
  local_bd8 = 0;
  local_bd4 = 0;
  local_bcc = 0;
  local_bc8 = 0;
  local_bc4 = 0;
  local_bc0 = 0;
  local_bbc = 0;
  local_bb8 = 0;
  local_bb4 = 0;
  local_bb0 = 0;
  local_bac = 0;
  local_ba8 = 0;
  local_ba4 = 0;
  local_ba0 = 0;
  local_b9c = 0;
  local_b98 = 0;
  local_b94 = 0;
  local_b90 = 0;
  local_b8c = 0;
  local_b88 = 0;
  local_b84 = 0;
  local_b80 = 0;
  local_b7c = 0;
  local_b78 = 0;
  local_b74 = 0;
  local_b70 = 0;
  local_b6c = 0;
  local_b28 = 0;
  local_b38 = 0;
  local_b2c = 0;
  local_b10 = 0;
  local_a00 = 0;
  local_9fc = 0;
  local_9f8 = 0;
  local_9e0 = 0;
  uStack_9ec = 0;
  local_9f4 = 0;
  local_9e4 = 0;
  local_9d8 = 0x101;
  local_9d6 = 0;
  local_9d4 = 0;
  local_9d0 = 0;
  local_970 = 0;
  local_968 = 0;
  local_908 = 0;
  local_8f8 = 0;
  local_8f4 = 0;
  local_8f0 = 0;
  local_8ec = 0;
  local_8e8 = 0;
  local_8e4 = 0;
  local_8e0 = 0;
  local_8dc = 0;
  local_8d8 = 0;
  local_8d4 = 0;
  local_8fc = 0;
  local_900 = 0;
  local_fb0 = PTR_vtable_001f0ba0 + 0x20;
  local_80 = (long *)0x0;
                    /* try { // try from 0017bb3c to 0017bb63 has its CatchHandler @ 0017bd40 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)&local_8d0,(PropsParserContext *)(PTR_PTR_001f0ba8 + 8),
             (HostPlatformViewProps *)local_1010,(RawProps *)&local_fb0,(function *)&local_130);
  if (local_80 == local_a0) {
    lVar7 = 4;
    plVar8 = local_a0;
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_0017bb90;
    lVar7 = 5;
    plVar8 = local_80;
  }
  (**(code **)(*plVar8 + lVar7 * 8))();
LAB_0017bb90:
  local_8d0 = puVar5 + 0x20;
  FUN_0017d0e8(&local_8d0,puVar6 + 8);
  FUN_0017d0e8(&local_fb0,puVar6 + 8);
  facebook::react::RawPropsParser::postPrepare();
  pvVar3 = local_160;
  puVar4 = (undefined8 *)local_150;
  while (puVar4 != (undefined8 *)0x0) {
    plVar8 = (long *)puVar4[6];
    pvVar9 = (void *)*puVar4;
    local_160 = pvVar3;
    if ((plVar8 == (long *)0x0) || (lVar7 = FUN_001735f0(0xffffffffffffffff,plVar8 + 1), lVar7 != 0)
       ) {
      bVar1 = *(byte *)(puVar4 + 2);
    }
    else {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
      bVar1 = *(byte *)(puVar4 + 2);
    }
    if ((bVar1 & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
    operator_delete(puVar4);
    pvVar3 = local_160;
    puVar4 = (undefined8 *)pvVar9;
  }
  local_160 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_198);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_1c8);
  std::__ndk1::mutex::~mutex((mutex *)&local_1f0);
  pvVar9 = local_b8;
  pvVar3 = local_b0;
  if (local_b8 != (void *)0x0) {
    while (pvVar3 != pvVar9) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 0017bc9c to 0017bca7 has its CatchHandler @ 0017bdb8 */
        (*(code *)(&PTR_FUN_001e82f8)[*(uint *)((long)pvVar3 + -8)])
                  (&local_fb0,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_b0 = pvVar9;
    operator_delete(local_b8);
  }
  if (local_d0 != (void *)0x0) {
    pvStack_c8 = local_d0;
    operator_delete(local_d0);
  }
  folly::dynamic::destroy();
  facebook::jsi::Value::~Value((Value *)local_118);
  if (local_fd0 != (void *)0x0) {
    pvStack_fc8 = local_fd0;
    operator_delete(local_fd0);
  }
  if (pvStack_fe8 != (void *)0x0) {
    local_fe0 = pvStack_fe8;
    operator_delete(pvStack_fe8);
  }
  if (local_1000 != (void *)0x0) {
    pvStack_ff8 = local_1000;
    operator_delete(local_1000);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017bdbc  FUN_0017bdbc =====

void FUN_0017bdbc(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[6];
  if (pvVar1 != (void *)0x0) {
    param_1[7] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    param_1[4] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    param_1[1] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 0017be10  FUN_0017be10 =====

void FUN_0017be10(void *param_1)

{
  FUN_0019330c();
  operator_delete(param_1);
  return;
}


// ===== 0017be34  FUN_0017be34 =====

undefined * FUN_0017be34(void)

{
  return PTR_RNSScreenContainerComponentName_001f0b98;
}


// ===== 0017be40  FUN_0017be40 =====

undefined * FUN_0017be40(void)

{
  return PTR_RNSScreenContainerComponentName_001f0b98;
}


// ===== 0017be4c  FUN_0017be4c =====

undefined8 FUN_0017be4c(void)

{
  return 0x61;
}


// ===== 0017be54  FUN_0017be54 =====

void FUN_0017be54(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar4 = tpidr_el0;
  lVar9 = *(long *)(lVar4 + 0x28);
  uVar5 = (**(code **)(*param_2 + 0x20))();
  puVar6 = (undefined8 *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_001e8390;
                    /* try { // try from 0017bec0 to 0017becf has its CatchHandler @ 0017bfa8 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_001e83e0;
  uVar3 = *(uint *)((long)puVar6 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar5 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar5;
  lVar8 = *param_2;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar7 + 0x6b0) != '\0' || *(char *)(lVar7 + 0x6b1) != '\0') ||
             *(char *)(lVar7 + 0x1e8) != '\0') << 0xb;
                    /* try { // try from 0017bf5c to 0017bf67 has its CatchHandler @ 0017bf98 */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0017bfd8  FUN_0017bfd8 =====

void FUN_0017bfd8(undefined8 *param_1,long *param_2,shared_ptr *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  YogaLayoutableShadowNode *local_78;
  long *local_70;
  YogaLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar5 = (long *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_001e8390;
                    /* try { // try from 0017c030 to 0017c03f has its CatchHandler @ 0017c180 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            (pYVar1,(ShadowNode *)param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_001e83e0;
  uVar3 = *(uint *)((long)plVar5 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar6 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar5 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar6 + 0x50) & 0x30000000) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    if (*(char *)(lVar6 + 0x5b4) != '\0') {
      uVar7 = *(undefined4 *)(lVar6 + 0x5b0);
    }
  }
  *(undefined4 *)(plVar5 + 10) = uVar7;
  *(uint *)((long)plVar5 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar6 + 0x6b0) != '\0' || *(char *)(lVar6 + 0x6b1) != '\0') ||
             *(char *)(lVar6 + 0x1e8) != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar5;
                    /* try { // try from 0017c0c4 to 0017c0d3 has its CatchHandler @ 0017c198 */
  facebook::react::YogaLayoutableShadowNode::completeClone
            ((ShadowNode *)pYVar1,(ShadowNodeFragment *)param_3);
  local_78 = pYVar1;
  local_70 = plVar5;
  FUN_00174090(1,plVar5 + 1);
                    /* try { // try from 0017c0e4 to 0017c0f3 has its CatchHandler @ 0017c170 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar6 = FUN_001735f0(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 0017c130 to 0017c13b has its CatchHandler @ 0017c198 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0017c1c0  FUN_0017c1c0 =====

void FUN_0017c1c0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0017c1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 0017c1d4  FUN_0017c1d4 =====

void FUN_0017c1d4(undefined8 *param_1,ulong param_2,HostPlatformViewProps *param_3,long *param_4,
                 RawPropsParser *param_5)

{
  HostPlatformViewProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  RawValue *pRVar4;
  long *plVar5;
  RawValue *pRVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  char *__s2;
  dynamic *pdVar10;
  long lVar11;
  RawProps *pRVar12;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar8 = facebook::react::RawProps::isEmpty(), (uVar8 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0aa8
         & 1) == 0) &&
       (param_2 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0aa8
                                     ), (int)param_2 != 0)) {
                    /* try { // try from 0017c65c to 0017c65f has its CatchHandler @ 0017c68c */
      FUN_0017d6d4();
      __cxa_atexit(FUN_0017d684,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0aa0
                   ,&PTR_LOOP_001e77b0);
      param_2 = __cxa_guard_release(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0aa8
                                   );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0aa0
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0aa0
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      param_2 = FUN_00174090(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::parse(param_5);
    pRVar12 = (RawProps *)*param_4;
    if (pRVar12 == (RawProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0aa8
           & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0aa8
                                     ), iVar7 != 0)) {
                    /* try { // try from 0017c5dc to 0017c5df has its CatchHandler @ 0017c6a4 */
        FUN_0017d6d4();
        __cxa_atexit(FUN_0017d684,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0aa0
                     ,&PTR_LOOP_001e77b0);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0aa8
                           );
      }
      pRVar12 = *(RawProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0aa0
      ;
    }
    plVar9 = (long *)operator_new(0x6f8);
    this = (HostPlatformViewProps *)(plVar9 + 3);
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_001e84f8;
    local_b0 = (dynamic *)0x0;
                    /* try { // try from 0017c2b8 to 0017c2df has its CatchHandler @ 0017c718 */
    facebook::react::HostPlatformViewProps::HostPlatformViewProps
              (this,(PropsParserContext *)(PTR_PTR_001f0ba8 + 8),param_3,pRVar12,(function *)param_5
              );
    if (local_b0 == local_d0) {
      lVar11 = 4;
      pdVar10 = local_d0;
LAB_0017c300:
      (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
    }
    else if (local_b0 != (dynamic *)0x0) {
      lVar11 = 5;
      pdVar10 = local_b0;
      goto LAB_0017c300;
    }
    plVar9[3] = (long)(PTR_vtable_001f0ba0 + 0x20);
                    /* try { // try from 0017c320 to 0017c333 has its CatchHandler @ 0017c760 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid();
    if ((((uVar8 & 1) == 0) ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid
                           (), (uVar8 & 1) == 0)) ||
       (uVar8 = facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(),
       (uVar8 & 1) == 0)) {
LAB_0017c35c:
      FUN_00174090(1,plVar9 + 1);
      if ((RawProps *)*param_4 == (RawProps *)0x0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0aa8
             & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0aa8
                                       ), iVar7 != 0)) {
                    /* try { // try from 0017c61c to 0017c61f has its CatchHandler @ 0017c690 */
          FUN_0017d6d4();
          __cxa_atexit(FUN_0017d684,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0aa0
                       ,&PTR_LOOP_001e77b0);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0aa8
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0017c3c4 to 0017c3d7 has its CatchHandler @ 0017c6bc */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,
                   *(RawProps **)
                    PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0aa0
                   ,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_0017c410:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_0017c410;
        }
        if (plVar9 != (long *)0x0) goto LAB_0017c424;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0017c378 to 0017c38b has its CatchHandler @ 0017c6e4 */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,(RawProps *)*param_4,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_0017c424;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_0017c424:
        lVar11 = FUN_001735f0(0xffffffffffffffff,plVar9 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 0017c340 to 0017c34b has its CatchHandler @ 0017c6b8 */
      __s2 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar7 = strcmp(PTR_RNSScreenContainerComponentName_001f0b98,__s2);
      if (iVar7 != 0) goto LAB_0017c35c;
      bVar3 = false;
    }
                    /* try { // try from 0017c450 to 0017c453 has its CatchHandler @ 0017c760 */
    param_2 = facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter();
    if ((param_2 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 0017c460 to 0017c47b has its CatchHandler @ 0017c6e0 */
        param_2 = folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar9 + 7));
      }
      else {
        param_2 = facebook::react::RawProps::operator_cast_to_dynamic((RawProps *)param_5);
      }
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0017c5bc to 0017c5cb has its CatchHandler @ 0017c6d8 */
                    /* WARNING: Subroutine does not return */
          FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
        }
        goto LAB_0017c7ac;
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0017c59c to 0017c5ab has its CatchHandler @ 0017c76c */
                    /* WARNING: Subroutine does not return */
            FUN_00172ea4(*(undefined8 *)PTR_name_001f0bb0);
          }
          goto LAB_0017c7ac;
        }
        uVar1 = 0x811c9dc5;
        uVar8 = (ulong)(*(byte *)(plVar5 + 3) >> 1);
        pRVar6 = (RawValue *)((long)plVar5 + 0x19);
        pRVar4 = (RawValue *)((long)plVar5 + 0x19);
        if ((*(byte *)(plVar5 + 3) & 1) != 0) {
          uVar8 = plVar5[4];
          pRVar6 = (RawValue *)plVar5[5];
          pRVar4 = (RawValue *)plVar5[5];
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar1 = (uVar1 ^ (int)(char)*pRVar6) * 0x1000193;
          pRVar6 = pRVar6 + 1;
        }
                    /* try { // try from 0017c4fc to 0017c507 has its CatchHandler @ 0017c774 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 0017c50c to 0017c523 has its CatchHandler @ 0017c778 */
        param_2 = facebook::react::HostPlatformViewProps::setProp
                            ((PropsParserContext *)this,(uint)param_3,(char *)(ulong)uVar1,pRVar4);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 0017c534 to 0017c53f has its CatchHandler @ 0017c768 */
          param_2 = (*(code *)(&PTR_FUN_001e82f8)[local_a0])(&uStack_d1,local_d0);
        }
      }
      param_2 = folly::dynamic::destroy();
    }
    param_1[1] = plVar9;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0017c7ac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


// ===== 0017c7b0  FUN_0017c7b0 =====

void FUN_0017c7b0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0017c7b8  FUN_0017c7b8 =====

void FUN_0017c7b8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0017c7c0  FUN_0017c7c0 =====

void FUN_0017c7c0(undefined8 *param_1,long param_2,long param_3)

{
  EventEmitter *pEVar1;
  ShadowNodeFamily *pSVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ShadowNodeFamily *local_b0;
  undefined8 *local_a8;
  EventEmitter *local_a0;
  long *plStack_98;
  EventEmitter *local_90;
  long *local_88;
  undefined8 local_80;
  long local_78;
  EventEmitter *local_70;
  long *plStack_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_0017dbe4(&local_a0,param_3 + 8,param_3 + 4);
                    /* try { // try from 0017c804 to 0017c80b has its CatchHandler @ 0017cae4 */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_001e8548;
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  pEVar1 = (EventEmitter *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  plStack_68 = plStack_98;
  local_70 = local_a0;
  local_a0 = (EventEmitter *)0x0;
  plStack_98 = (long *)0x0;
  if (local_78 != 0) {
    FUN_00174090(1,local_78 + 0x10);
  }
                    /* try { // try from 0017c848 to 0017c857 has its CatchHandler @ 0017cab8 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_001e8610;
                    /* try { // try from 0017c864 to 0017c86b has its CatchHandler @ 0017caa8 */
  puVar6 = (undefined8 *)operator_new(0x58);
  *puVar6 = &PTR_FUN_001e8630;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[4] = 0;
  puVar6[3] = 0;
  plVar5[0xb] = (long)(puVar6 + 3);
  plVar5[0xc] = (long)puVar6;
  puVar6[6] = 0;
  puVar6[5] = 0;
  puVar6[8] = 0;
  puVar6[7] = 0;
  *(undefined8 *)((long)puVar6 + 0x4c) = 0;
  *(undefined8 *)((long)puVar6 + 0x44) = 0;
  plVar5[3] = (long)&PTR_FUN_001e8598;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0017c918 to 0017c91f has its CatchHandler @ 0017ca98 */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  *puVar6 = &PTR_FUN_001e86f0;
  pSVar2 = (ShadowNodeFamily *)(puVar6 + 4);
  puVar6[1] = 0;
  puVar6[2] = 0;
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00174090(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00174090(1,local_78 + 0x10);
  }
                    /* try { // try from 0017c968 to 0017c97f has its CatchHandler @ 0017ca68 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = puVar6;
  local_b0 = pSVar2;
  local_a8 = puVar6;
  FUN_00174090(1,puVar6 + 2);
                    /* try { // try from 0017c9d4 to 0017c9df has its CatchHandler @ 0017ca48 */
  facebook::react::EventEmitter::setShadowNodeFamily(pEVar1,&local_b0);
  if (local_a8 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017cb0c  FUN_0017cb0c =====

void FUN_0017cb0c(void)

{
  return;
}


// ===== 0017cb10  FUN_0017cb10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017cb10(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  uVar6 = param_2[2];
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 5;
  *param_1 = uVar6;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  folly::dynamic::destroy();
  uVar6 = param_2[1];
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  *param_1 = uVar6;
  *(undefined4 *)(param_1 + 10) = 0x10410710;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  uVar6 = DAT_001423b8;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  *(undefined4 *)((long)param_1 + 0xab) = 0x40004;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0x7fc00000;
  *(undefined4 *)(param_1 + 0x2e) = 0x7fc00000;
  *(undefined4 *)(param_1 + 0x2f) = 0x7fc00000;
  *(undefined4 *)(param_1 + 0x30) = 0x7fc00000;
  *(undefined4 *)(param_1 + 0x31) = 0x7fc00000;
  *(undefined4 *)(param_1 + 0x32) = 0x7fc00000;
  *(undefined4 *)(param_1 + 0x33) = 0x7fc00000;
  *(undefined4 *)(param_1 + 0x34) = 0x7fc00000;
  *(undefined4 *)(param_1 + 0x35) = 0x7fc00000;
  *(undefined4 *)(param_1 + 0x36) = 0x7fc00000;
  *(undefined4 *)(param_1 + 0x37) = 0x7fc00000;
  *(undefined4 *)(param_1 + 0x38) = 0x7fc00000;
  *(undefined4 *)(param_1 + 0x39) = 0x7fc00000;
  *(undefined4 *)(param_1 + 0x3a) = 0x7fc00000;
  *(undefined4 *)(param_1 + 0x3b) = 0x7fc00000;
  *(undefined4 *)(param_1 + 0x3c) = 0x7fc00000;
  *(undefined8 *)((long)param_1 + 0x241) = 0;
  *(undefined8 *)((long)param_1 + 0x239) = 0;
  *(undefined8 *)((long)param_1 + 0x254) = 0;
  *(undefined8 *)((long)param_1 + 0x24c) = 0;
  *(undefined8 *)((long)param_1 + 0x264) = 0;
  *(undefined8 *)((long)param_1 + 0x25c) = 0;
  *(undefined8 *)((long)param_1 + 0x274) = 0;
  *(undefined8 *)((long)param_1 + 0x26c) = 0;
  *(undefined8 *)((long)param_1 + 0x284) = 0;
  *(undefined8 *)((long)param_1 + 0x27c) = 0;
  *(undefined8 *)((long)param_1 + 0x294) = 0;
  *(undefined8 *)((long)param_1 + 0x28c) = 0;
  *(undefined8 *)((long)param_1 + 0x2a4) = 0;
  *(undefined8 *)((long)param_1 + 0x29c) = 0;
  *(undefined8 *)((long)param_1 + 0x2a9) = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  *(undefined1 *)((long)param_1 + 0x304) = 1;
  *(undefined4 *)((long)param_1 + 0x305) = 0;
  *(undefined1 *)((long)param_1 + 0x30a) = 0x23;
  *(undefined4 *)((long)param_1 + 0x33f) = 0;
  *(undefined8 *)((long)param_1 + 0x55) = uVar6;
  uVar2 = _UNK_001423f8;
  uVar6 = _DAT_001423f0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((long)param_1 + 0x65) = 0;
  *(undefined8 *)((long)param_1 + 0x5d) = 0;
  *(undefined8 *)((long)param_1 + 0x75) = 0;
  *(undefined8 *)((long)param_1 + 0x6d) = 0;
  *(undefined8 *)((long)param_1 + 0x85) = 0;
  *(undefined8 *)((long)param_1 + 0x7d) = 0;
  *(undefined8 *)((long)param_1 + 0x95) = 0;
  *(undefined8 *)((long)param_1 + 0x8d) = 0;
  *(undefined8 *)((long)param_1 + 0xa3) = 0;
  *(undefined8 *)((long)param_1 + 0x9b) = 0;
  *(undefined8 *)((long)param_1 + 0xaf) = 0;
  *(undefined2 *)((long)param_1 + 0xb7) = 0;
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined8 *)((long)param_1 + 0x14c) = 0;
  *(undefined8 *)((long)param_1 + 0x144) = 0;
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
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)((long)param_1 + 0x16c) = 0;
  *(undefined1 *)((long)param_1 + 0x174) = 0;
  *(undefined1 *)((long)param_1 + 0x17c) = 0;
  *(undefined1 *)((long)param_1 + 0x184) = 0;
  *(undefined1 *)((long)param_1 + 0x18c) = 0;
  *(undefined1 *)((long)param_1 + 0x194) = 0;
  *(undefined1 *)((long)param_1 + 0x19c) = 0;
  *(undefined1 *)((long)param_1 + 0x1a4) = 0;
  *(undefined1 *)((long)param_1 + 0x1ac) = 0;
  *(undefined1 *)((long)param_1 + 0x1b4) = 0;
  *(undefined1 *)((long)param_1 + 0x1bc) = 0;
  *(undefined1 *)((long)param_1 + 0x1c4) = 0;
  *(undefined1 *)((long)param_1 + 0x1cc) = 0;
  *(undefined1 *)((long)param_1 + 0x1d4) = 0;
  *(undefined1 *)((long)param_1 + 0x1dc) = 0;
  *(undefined1 *)((long)param_1 + 0x1e4) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)((long)param_1 + 0x1ec) = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined1 *)((long)param_1 + 0x2b4) = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  *(undefined1 *)((long)param_1 + 700) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)((long)param_1 + 0x2c4) = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined1 *)((long)param_1 + 0x309) = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  uVar7 = *param_2;
  param_1[0x93] = uVar2;
  param_1[0x92] = uVar6;
  uVar4 = _UNK_00142624;
  uVar3 = _DAT_0014261c;
  uVar2 = _UNK_00142614;
  uVar6 = _DAT_0014260c;
  *(undefined1 *)((long)param_1 + 0x34c) = 0;
  *param_1 = uVar7;
  *(undefined8 *)((long)param_1 + 0x344) = 0x3f800000;
  param_1[0xb2] = uVar4;
  param_1[0xb1] = uVar3;
  param_1[0xb0] = uVar2;
  param_1[0xaf] = uVar6;
  uVar4 = _UNK_00142604;
  uVar3 = _DAT_001425fc;
  uVar2 = _UNK_001425f4;
  uVar6 = _DAT_001425ec;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0xae] = uVar4;
  param_1[0xad] = uVar3;
  param_1[0xac] = uVar2;
  param_1[0xab] = uVar6;
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  param_1[0x98] = 0;
  param_1[0x97] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0xa2] = 0;
  param_1[0xa1] = 0;
  param_1[0xa4] = 0;
  param_1[0xa3] = 0;
  param_1[0xa6] = 0;
  param_1[0xa5] = 0;
  param_1[0xa8] = 0;
  param_1[0xa7] = 0;
  param_1[0xaa] = 0;
  param_1[0xa9] = 0;
  *(undefined8 *)((long)param_1 + 0x5a6) = 0;
  param_1[0xb4] = 0;
  param_1[0xb3] = 0;
  *(undefined1 *)((long)param_1 + 0x354) = 0;
  *(undefined1 *)(param_1 + 0x6b) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)((long)param_1 + 0x364) = 0;
  *(undefined1 *)((long)param_1 + 0x36c) = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  *(undefined1 *)((long)param_1 + 0x37c) = 0;
  *(undefined1 *)((long)param_1 + 900) = 0;
  *(undefined1 *)(param_1 + 0x71) = 0;
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(undefined1 *)((long)param_1 + 0x394) = 0;
  *(undefined1 *)((long)param_1 + 0x39c) = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  *(undefined1 *)((long)param_1 + 0x3ac) = 0;
  *(undefined1 *)((long)param_1 + 0x3b4) = 0;
  *(undefined1 *)(param_1 + 0x77) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined1 *)((long)param_1 + 0x3c4) = 0;
  *(undefined1 *)((long)param_1 + 0x3cc) = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  *(undefined1 *)((long)param_1 + 0x3dc) = 0;
  *(undefined1 *)((long)param_1 + 0x3e4) = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  *(undefined1 *)((long)param_1 + 0x3ec) = 0;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)((long)param_1 + 0x3f4) = 0;
  *(undefined1 *)(param_1 + 0x7f) = 0;
  *(undefined1 *)((long)param_1 + 0x3fc) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)((long)param_1 + 0x404) = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  *(undefined1 *)((long)param_1 + 0x40c) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)((long)param_1 + 0x414) = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  *(undefined1 *)((long)param_1 + 0x41c) = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  *(undefined1 *)((long)param_1 + 0x424) = 0;
  *(undefined1 *)(param_1 + 0x85) = 0;
  *(undefined1 *)((long)param_1 + 0x42c) = 0;
  *(undefined1 *)(param_1 + 0x86) = 0;
  *(undefined1 *)((long)param_1 + 0x434) = 0;
  *(undefined1 *)(param_1 + 0x87) = 0;
  *(undefined1 *)((long)param_1 + 0x43c) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined1 *)((long)param_1 + 0x444) = 0;
  param_1[0x91] = 0;
  *(undefined2 *)(param_1 + 0x8f) = 0;
  *(undefined8 *)((long)param_1 + 0x47c) = 0;
  *(undefined1 *)((long)param_1 + 0x484) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  *(undefined1 *)((long)param_1 + 0x5b4) = 0;
  *(undefined1 *)(param_1 + 0xb7) = 0;
  param_1[0xba] = 0;
  *(undefined1 *)((long)param_1 + 0x5cc) = 0;
  *(undefined8 *)((long)param_1 + 0x5c4) = 0;
  *(undefined8 *)((long)param_1 + 0x5bc) = 0;
  *(undefined2 *)(param_1 + 0xbb) = 0x101;
  *(undefined1 *)((long)param_1 + 0x5da) = 0;
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017cec4  FUN_0017cec4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0017cec4(long param_1)

{
  byte bVar1;
  char cVar2;
  void *pvVar3;
  byte *pbVar4;
  void *pvVar5;
  byte *pbVar6;
  void *pvVar7;
  byte *pbVar8;
  
  if ((*(byte *)(param_1 + 0x140) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x128);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x150));
    bVar1 = *(byte *)(param_1 + 0x128);
  }
  if ((bVar1 & 1) == 0) {
    pvVar5 = *(void **)(param_1 + 0x100);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x138));
    pvVar5 = *(void **)(param_1 + 0x100);
  }
  if (pvVar5 == (void *)0x0) {
    cVar2 = *(char *)(param_1 + 0xf8);
  }
  else {
    pvVar7 = *(void **)(param_1 + 0x108);
    pvVar3 = pvVar5;
    if (pvVar7 != pvVar5) {
      do {
        if ((*(char *)((long)pvVar7 + -8) != '\0') && ((*(byte *)((long)pvVar7 + -0x20) & 1) != 0))
        {
          operator_delete(*(void **)((long)pvVar7 + -0x10));
        }
        if ((*(byte *)((long)pvVar7 + -0x38) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar7 + -0x28));
        }
        pvVar7 = (void *)((long)pvVar7 + -0x38);
      } while (pvVar7 != pvVar5);
      pvVar3 = *(void **)(param_1 + 0x100);
    }
    *(void **)(param_1 + 0x108) = pvVar5;
    operator_delete(pvVar3);
    cVar2 = *(char *)(param_1 + 0xf8);
  }
  if ((cVar2 != '\0') && ((*(byte *)(param_1 + 0xe0) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0xf0));
  }
  if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x98);
  }
  else {
    operator_delete(*(void **)(param_1 + 0xc0));
    bVar1 = *(byte *)(param_1 + 0x98);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x80);
  }
  else {
    operator_delete(*(void **)(param_1 + 0xa8));
    bVar1 = *(byte *)(param_1 + 0x80);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x68);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x90));
    bVar1 = *(byte *)(param_1 + 0x68);
  }
  if ((bVar1 & 1) == 0) {
    pbVar6 = *(byte **)(param_1 + 0x48);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x78));
    pbVar6 = *(byte **)(param_1 + 0x48);
  }
  if (pbVar6 == (byte *)0x0) {
    pbVar6 = *(byte **)(param_1 + 0x30);
  }
  else {
    pbVar4 = *(byte **)(param_1 + 0x50);
    pbVar8 = pbVar6;
    if (pbVar4 != pbVar6) {
      do {
        pbVar8 = pbVar4 + -0x18;
        if ((*pbVar8 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -8));
        }
        pbVar4 = pbVar8;
      } while (pbVar8 != pbVar6);
      pbVar8 = *(byte **)(param_1 + 0x48);
    }
    *(byte **)(param_1 + 0x50) = pbVar6;
    operator_delete(pbVar8);
    pbVar6 = *(byte **)(param_1 + 0x30);
  }
  if (pbVar6 == (byte *)0x0) {
    bVar1 = *(byte *)(param_1 + 0x18);
  }
  else {
    pbVar4 = *(byte **)(param_1 + 0x38);
    pbVar8 = pbVar6;
    if (pbVar4 != pbVar6) {
      do {
        pbVar8 = pbVar4 + -0x18;
        if ((*pbVar8 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -8));
        }
        pbVar4 = pbVar8;
      } while (pbVar8 != pbVar6);
      pbVar8 = *(byte **)(param_1 + 0x30);
    }
    *(byte **)(param_1 + 0x38) = pbVar6;
    operator_delete(pbVar8);
    bVar1 = *(byte *)(param_1 + 0x18);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x28));
  return;
}


// ===== 0017d0c0  FUN_0017d0c0 =====

void FUN_0017d0c0(undefined8 param_1,long param_2)

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


// ===== 0017d0d4  FUN_0017d0d4 =====

void FUN_0017d0d4(undefined8 param_1,long param_2)

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


// ===== 0017d0e8  FUN_0017d0e8 =====

void FUN_0017d0e8(undefined8 *param_1,undefined8 *param_2)

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
  FUN_0017d1f8(param_1,param_2 + 1);
  return;
}


// ===== 0017d1f8  FUN_0017d1f8 =====

void FUN_0017d1f8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  undefined1 uStack_59;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pvVar2 = (void *)param_1[0xa8];
  *param_1 = *param_2;
  if (pvVar2 != (void *)0x0) {
    param_1[0xa9] = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0xa4];
  if (pvVar2 != (void *)0x0) {
    param_1[0xa5] = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0xa1];
  if (pvVar2 != (void *)0x0) {
    param_1[0xa2] = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x9e];
  if (pvVar2 != (void *)0x0) {
    param_1[0x9f] = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x9b];
  if (pvVar2 != (void *)0x0) {
    pvVar4 = (void *)param_1[0x9c];
    pvVar3 = pvVar2;
    if (pvVar4 != pvVar2) {
      do {
        if (*(uint *)((long)pvVar4 + -8) != 0xffffffff) {
                    /* try { // try from 0017d2c0 to 0017d2c7 has its CatchHandler @ 0017d360 */
          (*(code *)(&PTR_FUN_001e82e8)[*(uint *)((long)pvVar4 + -8)])
                    (&uStack_59,(long)pvVar4 + -0x68);
        }
        pvVar3 = (void *)((long)pvVar4 + -0x70);
        *(undefined4 *)((long)pvVar4 + -8) = 0xffffffff;
        pvVar4 = pvVar3;
      } while (pvVar3 != pvVar2);
      pvVar3 = (void *)param_1[0x9b];
    }
    param_1[0x9c] = pvVar2;
    operator_delete(pvVar3);
  }
  pvVar2 = (void *)param_1[0x98];
  if (pvVar2 != (void *)0x0) {
    param_1[0x99] = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x95];
  if (pvVar2 != (void *)0x0) {
    param_1[0x96] = pvVar2;
    operator_delete(pvVar2);
  }
  FUN_0017cec4(param_1 + 0x3d);
  *param_1 = param_2[1];
  FUN_00173ffc(param_1 + 10);
  *param_1 = param_2[2];
  folly::dynamic::destroy();
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0017d364  FUN_0017d364 =====

void FUN_0017d364(long param_1)

{
  long lVar1;
  undefined1 uStack_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
                    /* try { // try from 0017d39c to 0017d3a7 has its CatchHandler @ 0017d3d4 */
    (*(code *)(&PTR_FUN_001e82f8)[*(uint *)(param_1 + 0x30)])(&uStack_29,param_1);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017d3d8  FUN_0017d3d8 =====

void FUN_0017d3d8(void)

{
  folly::dynamic::destroy();
  return;
}


// ===== 0017d3e0  FUN_0017d3e0 =====

void FUN_0017d3e0(undefined8 param_1,long param_2)

{
  facebook::jsi::Value::~Value((Value *)(param_2 + 8));
  return;
}


// ===== 0017d3e8  FUN_0017d3e8 =====

void FUN_0017d3e8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x17d3ec);
  (*pcVar1)();
}


// ===== 0017d3ec  FUN_0017d3ec =====

void FUN_0017d3ec(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0017d43c  FUN_0017d43c =====

void FUN_0017d43c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e8390;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0017d44c  FUN_0017d44c =====

void FUN_0017d44c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e8390;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0017d47c  FUN_0017d47c =====

void FUN_0017d47c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0017d484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0017d488  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0017d48c  FUN_0017d48c =====

void FUN_0017d48c(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_001f09e8 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_00173ffc(param_1 + 0x23);
  FUN_00173f00(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0017d54c  FUN_0017d54c =====

void FUN_0017d54c(long param_1)

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


// ===== 0017d5b4  FUN_0017d5b4 =====

bool FUN_0017d5b4(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 0017d5cc  FUN_0017d5cc =====

bool FUN_0017d5cc(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 0017d5e4  FUN_0017d5e4 =====

void FUN_0017d5e4(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0017d634  FUN_0017d634 =====

void FUN_0017d634(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0017d684  FUN_0017d684 =====

void FUN_0017d684(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0017d6d4  FUN_0017d6d4 =====

void FUN_0017d6d4(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x6f8);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_001e84a8;
  memset(__s,0,0x6e0);
                    /* try { // try from 0017d710 to 0017d723 has its CatchHandler @ 0017d790 */
  FUN_0017cb10(__s,PTR_PTR_001f0ba8 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x5f4) = 0;
  *(undefined1 *)(puVar2 + 0xbf) = 0;
  *(undefined1 *)(puVar2 + 0xcb) = 0;
  *(undefined1 *)(puVar2 + 0xcc) = 0;
  *(undefined1 *)(puVar2 + 0xd8) = 0;
  *(undefined1 *)(puVar2 + 0xda) = 0;
  *(undefined1 *)((long)puVar2 + 0x6d4) = 0;
  *(undefined1 *)(puVar2 + 0xdb) = 0;
  *(undefined1 *)((long)puVar2 + 0x6dc) = 0;
  *(undefined1 *)(puVar2 + 0xdc) = 0;
  *(undefined1 *)((long)puVar2 + 0x6e4) = 0;
  *(undefined1 *)(puVar2 + 0xdd) = 0;
  *(undefined1 *)((long)puVar2 + 0x6ec) = 0;
  *(undefined1 *)(puVar2 + 0xde) = 0;
  puVar1 = PTR_vtable_001f0ba0;
  *(undefined1 *)((long)puVar2 + 0x6f4) = 0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0aa0
  ;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 0017d7ac  FUN_0017d7ac =====

void FUN_0017d7ac(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e84a8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0017d7bc  FUN_0017d7bc =====

void FUN_0017d7bc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e84a8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0017d7ec  FUN_0017d7ec =====

void FUN_0017d7ec(long param_1)

{
  FUN_0017d0e8(param_1 + 0x18,PTR_PTR_001f0ba8 + 8);
  return;
}


// ===== 0017d800  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0017d804  FUN_0017d804 =====

void FUN_0017d804(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e84f8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0017d814  FUN_0017d814 =====

void FUN_0017d814(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e84f8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0017d844  FUN_0017d844 =====

void FUN_0017d844(long param_1)

{
  FUN_0017d0e8(param_1 + 0x18,PTR_PTR_001f0ba8 + 8);
  return;
}


// ===== 0017d858  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0017d85c  FUN_0017d85c =====

void FUN_0017d85c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0017d8ac  FUN_0017d8ac =====

void FUN_0017d8ac(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0017d8fc  FUN_0017d8fc =====

void FUN_0017d8fc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e8548;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0017d90c  FUN_0017d90c =====

void FUN_0017d90c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e8548;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0017d93c  FUN_0017d93c =====

void FUN_0017d93c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0017d944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0017d948  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0017d94c  FUN_0017d94c =====

void FUN_0017d94c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_001e8610;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_001e8680;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 0017d9fc  FUN_0017d9fc =====

void FUN_0017d9fc(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_001e8610;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_001e8680;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 0017daac  FUN_0017daac =====

void FUN_0017daac(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e8630;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0017dabc  FUN_0017dabc =====

void FUN_0017dabc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e8630;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0017daec  FUN_0017daec =====

void FUN_0017daec(long param_1)

{
  std::__ndk1::mutex::~mutex((mutex *)(param_1 + 0x18));
  return;
}


// ===== 0017daf4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0017daf8  FUN_0017daf8 =====

void FUN_0017daf8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_001e8680;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0017db70  FUN_0017db70 =====

void FUN_0017db70(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_001e8680;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 0017dbe4  FUN_0017dbe4 =====

void FUN_0017dbe4(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar3 = (undefined8 *)operator_new(0x48);
  *puVar3 = &PTR_FUN_001e86a0;
  local_58 = *param_2;
  local_50 = (long *)param_2[1];
  puVar3[1] = 0;
  puVar3[2] = 0;
  if (local_50 != (long *)0x0) {
    FUN_00174090(1,local_50 + 1);
  }
                    /* try { // try from 0017dc50 to 0017dc5b has its CatchHandler @ 0017dcb8 */
  facebook::react::EventTarget::EventTarget((EventTarget *)(puVar3 + 3),&local_58,*param_3);
  plVar2 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar4 = FUN_001735f0(0xffffffffffffffff,local_50 + 1), lVar4 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = (EventTarget *)(puVar3 + 3);
  param_1[1] = puVar3;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017dcf0  FUN_0017dcf0 =====

void FUN_0017dcf0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e86a0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0017dd00  FUN_0017dd00 =====

void FUN_0017dd00(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e86a0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0017dd30  FUN_0017dd30 =====

void FUN_0017dd30(long param_1)

{
  long lVar1;
  long *plVar2;
  
  facebook::jsi::Value::~Value((Value *)(param_1 + 0x30));
  plVar2 = *(long **)(param_1 + 0x20);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0017dd8c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0017dd90  FUN_0017dd90 =====

void FUN_0017dd90(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0017dde0  FUN_0017dde0 =====

void FUN_0017dde0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e86f0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0017ddf0  FUN_0017ddf0 =====

void FUN_0017ddf0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e86f0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0017de20  FUN_0017de20 =====

void FUN_0017de20(long param_1)

{
  facebook::react::ShadowNodeFamily::~ShadowNodeFamily((ShadowNodeFamily *)(param_1 + 0x20));
  return;
}


// ===== 0017de28  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0017de2c  FUN_0017de2c =====

void FUN_0017de2c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0017de7c  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_36RNSScreenContentWrapperComponentNameEEEENS0_28RNSScreenContentWrapperPropsENS0_35RNSScreenContentWrapperEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_36RNSScreenContentWrapperComponentNameEEEENS0_28RNSScreenContentWrapperPropsENS0_35RNSScreenContentWrapperEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ComponentDescriptor *this;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  undefined4 local_1010 [2];
  undefined8 *local_1008;
  void *local_1000;
  void *pvStack_ff8;
  undefined8 local_ff0;
  void *pvStack_fe8;
  void *local_fe0;
  undefined8 uStack_fd8;
  void *local_fd0;
  void *pvStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  undefined *local_fb0;
  undefined8 uStack_fa8;
  undefined8 local_fa0;
  undefined8 uStack_f98;
  undefined4 local_f90 [2];
  undefined8 local_f88;
  undefined8 uStack_f80;
  undefined8 local_f78;
  undefined8 uStack_f70;
  undefined4 local_f68;
  undefined4 local_f60;
  undefined1 local_f5c;
  undefined8 local_f5b;
  undefined8 local_f53;
  undefined8 uStack_f4b;
  undefined8 local_f43;
  undefined8 uStack_f3b;
  undefined8 local_f33;
  undefined8 uStack_f2b;
  undefined8 local_f23;
  undefined6 uStack_f1b;
  undefined2 uStack_f15;
  undefined6 uStack_f13;
  undefined8 uStack_f0d;
  undefined4 local_f05;
  undefined8 local_f01;
  undefined1 local_ef9;
  undefined1 uStack_ef8;
  undefined7 uStack_ef7;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 local_ed8;
  undefined8 uStack_ed0;
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined8 uStack_e98;
  undefined8 local_e90;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined8 local_e78;
  undefined4 uStack_e70;
  undefined4 uStack_e6c;
  undefined4 uStack_e68;
  undefined4 uStack_e64;
  undefined4 uStack_e60;
  undefined4 uStack_e5c;
  undefined8 local_e58;
  undefined8 uStack_e50;
  undefined4 local_e48;
  undefined1 local_e44;
  undefined4 local_e40;
  undefined1 local_e3c;
  undefined4 local_e38;
  undefined1 local_e34;
  undefined4 local_e30;
  undefined1 local_e2c;
  undefined4 local_e28;
  undefined1 local_e24;
  undefined4 local_e20;
  undefined1 local_e1c;
  undefined4 local_e18;
  undefined1 local_e14;
  undefined4 local_e10;
  undefined1 local_e0c;
  undefined4 local_e08;
  undefined1 local_e04;
  undefined4 local_e00;
  undefined1 local_dfc;
  undefined4 local_df8;
  undefined1 local_df4;
  undefined4 local_df0;
  undefined1 local_dec;
  undefined4 local_de8;
  undefined1 local_de4;
  undefined4 local_de0;
  undefined1 local_ddc;
  undefined4 local_dd8;
  undefined1 local_dd4;
  undefined4 local_dd0;
  undefined1 local_dcc;
  undefined1 local_dc8;
  undefined1 local_dc4;
  undefined1 local_db8;
  undefined8 local_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 local_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined1 uStack_d78;
  undefined7 local_d77;
  undefined1 uStack_d70;
  undefined8 uStack_d6f;
  undefined8 local_d64;
  undefined8 uStack_d5c;
  undefined8 uStack_d54;
  undefined8 uStack_d4c;
  undefined8 local_d44;
  undefined8 uStack_d3c;
  undefined8 uStack_d34;
  undefined8 uStack_d2c;
  undefined8 local_d24;
  undefined8 uStack_d1c;
  undefined8 uStack_d14;
  undefined5 uStack_d0c;
  undefined3 local_d07;
  undefined5 uStack_d04;
  undefined1 local_cfc;
  undefined1 local_cf8;
  undefined1 local_cf4;
  undefined1 local_cf0;
  undefined1 local_cec;
  undefined1 local_ce8;
  undefined1 local_cd0;
  undefined8 local_cc8;
  undefined8 uStack_cc0;
  undefined8 local_cb8;
  undefined4 local_cb0;
  undefined1 local_cac;
  undefined4 local_cab;
  undefined1 local_ca7;
  undefined1 local_ca6;
  undefined8 local_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 local_c80;
  undefined7 uStack_c78;
  undefined4 uStack_c71;
  undefined8 local_c6c;
  undefined1 local_c64;
  undefined1 local_c5c;
  undefined1 local_c58;
  undefined1 local_c50;
  undefined1 local_c4c;
  undefined1 local_c44;
  undefined1 local_c40;
  undefined1 local_c38;
  undefined1 local_c34;
  undefined1 local_c2c;
  undefined1 local_c28;
  undefined1 local_c20;
  undefined1 local_c1c;
  undefined1 local_c14;
  undefined1 local_c10;
  undefined1 local_c08;
  undefined1 local_c04;
  undefined1 local_bfc;
  undefined1 local_bf8;
  undefined1 local_bf0;
  undefined1 local_bec;
  undefined1 local_be4;
  undefined1 local_be0;
  undefined1 local_bd8;
  undefined1 local_bd4;
  undefined1 local_bcc;
  undefined1 local_bc8;
  undefined1 local_bc4;
  undefined1 local_bc0;
  undefined1 local_bbc;
  undefined1 local_bb8;
  undefined1 local_bb4;
  undefined1 local_bb0;
  undefined1 local_bac;
  undefined1 local_ba8;
  undefined1 local_ba4;
  undefined1 local_ba0;
  undefined1 local_b9c;
  undefined1 local_b98;
  undefined1 local_b94;
  undefined1 local_b90;
  undefined1 local_b8c;
  undefined1 local_b88;
  undefined1 local_b84;
  undefined1 local_b80;
  undefined1 local_b7c;
  undefined1 local_b78;
  undefined1 local_b74;
  undefined1 local_b70;
  undefined1 local_b6c;
  undefined8 local_b68;
  undefined8 uStack_b60;
  undefined8 local_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined2 local_b38;
  undefined8 local_b34;
  undefined1 local_b2c;
  undefined8 local_b28;
  undefined8 local_b20;
  undefined8 uStack_b18;
  undefined1 local_b10;
  undefined8 local_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined6 uStack_a10;
  undefined2 uStack_a0a;
  undefined6 uStack_a08;
  undefined1 local_a00;
  undefined1 local_9fc;
  undefined1 local_9f8;
  undefined8 local_9f4;
  undefined8 uStack_9ec;
  undefined1 local_9e4;
  undefined8 local_9e0;
  undefined2 local_9d8;
  undefined1 local_9d6;
  undefined4 local_9d4;
  undefined1 local_9d0;
  undefined1 local_970;
  undefined1 local_968;
  undefined1 local_908;
  undefined4 local_900;
  undefined2 local_8fc;
  undefined1 local_8f8;
  undefined1 local_8f4;
  undefined1 local_8f0;
  undefined1 local_8ec;
  undefined1 local_8e8;
  undefined1 local_8e4;
  undefined1 local_8e0;
  undefined1 local_8dc;
  undefined1 local_8d8;
  undefined1 local_8d4;
  undefined *local_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined8 local_8b8;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
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
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  void *local_160;
  undefined8 uStack_158;
  void *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118 [4];
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_d8;
  void *local_d0;
  void *pvStack_c8;
  undefined8 uStack_c0;
  void *local_b8;
  void *local_b0;
  undefined8 uStack_a8;
  long local_a0 [4];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_fe8 = (void *)0x0;
  local_ff0 = 0;
  uStack_fd8 = 0;
  local_fe0 = (void *)0x0;
  pvStack_fc8 = (void *)0x0;
  local_fd0 = (void *)0x0;
  uStack_fb8 = 0;
  uStack_fc0 = 0;
  pvStack_ff8 = (void *)0x0;
  local_1000 = (void *)0x0;
                    /* try { // try from 0017decc to 0017ded7 has its CatchHandler @ 0017e588 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_1000);
  local_130 = 0;
  *(undefined ***)this = &PTR_FUN_001e8740;
  local_128 = 0;
  local_120 = 0;
  local_118[0] = 0;
  local_108 = 0;
  local_100 = 0;
  local_d8 = 0;
  pvStack_c8 = (void *)0x0;
  local_d0 = (void *)0x0;
  local_b8 = (void *)0x0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = (void *)0x0;
  local_140 = 0;
  uStack_148 = 0;
  local_150 = (void *)0x0;
  uStack_158 = 0;
  local_160 = (void *)0x0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
                    /* try { // try from 0017df40 to 0017df4b has its CatchHandler @ 0017e57c */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1f0);
  local_140 = CONCAT44(local_140._4_4_,0x3f800000);
  local_1010[0] = 0xffffffff;
  uStack_148 = 0;
  local_150 = (void *)0x0;
  uStack_158 = 0;
  local_160 = (void *)0x0;
  local_1008 = &local_1f0;
  facebook::react::RawProps::parse((RawPropsParser *)&local_130);
  memset(local_f90,0,0x6c0);
  local_8d0 = (undefined *)CONCAT44(local_8d0._4_4_,5);
  local_8b8 = 0;
  local_fb0 = PTR_construction_vtable_001f0e10 + 0x20;
  local_f90[0] = 5;
  uStack_fa8 = 0;
  uStack_f98 = 0;
  local_fa0 = 0;
  local_8b0 = 0;
  uStack_8a8 = 0x3f800000;
  uStack_8c0 = 0;
  local_8c8 = 0;
  uStack_f80 = 0;
  local_f88 = 0;
  uStack_f70 = 0;
  local_f78 = 0;
  local_f68 = 0x3f800000;
  folly::dynamic::destroy();
  puVar6 = PTR_PTR_001f0bc8;
  puVar5 = PTR_vtable_001f0bc0;
  local_f5c = 0;
  local_f01 = 0;
  uStack_a20 = _UNK_00142624;
  local_a28 = _DAT_0014261c;
  local_f5b = DAT_001423b8;
  uStack_b18 = _UNK_001423f8;
  local_b20 = _DAT_001423f0;
  uStack_a30 = _UNK_00142614;
  local_a38 = _DAT_0014260c;
  local_e44 = 0;
  uStack_a40 = _UNK_00142604;
  local_a48 = _DAT_001425fc;
  uStack_a50 = _UNK_001425f4;
  local_a58 = _DAT_001425ec;
  uStack_a08 = 0;
  local_e3c = 0;
  uStack_e70 = 0;
  local_e78 = 0;
  uStack_e5c = 0;
  uStack_e80 = 0;
  local_e88 = 0;
  uStack_a10 = 0;
  uStack_a0a = 0;
  local_a18 = 0;
  local_f60 = 0x10410710;
  local_f05 = 0x40004;
  uStack_e64 = 0;
  uStack_e60 = 0;
  uStack_e6c = 0;
  uStack_e68 = 0;
  uStack_e50 = 0;
  local_e58 = 0;
  local_e48 = 0x7fc00000;
  local_e40 = 0x7fc00000;
  local_e38 = 0x7fc00000;
  local_e30 = 0x7fc00000;
  local_e28 = 0x7fc00000;
  local_e20 = 0x7fc00000;
  local_e18 = 0x7fc00000;
  local_e10 = 0x7fc00000;
  local_e08 = 0x7fc00000;
  local_e00 = 0x7fc00000;
  local_df8 = 0x7fc00000;
  local_df0 = 0x7fc00000;
  local_de8 = 0x7fc00000;
  local_de0 = 0x7fc00000;
  local_dd8 = 0x7fc00000;
  local_dd0 = 0x7fc00000;
  uStack_d6f = 0;
  uStack_d70 = 0;
  uStack_d5c = 0;
  local_d64 = 0;
  uStack_d4c = 0;
  uStack_d54 = 0;
  uStack_d3c = 0;
  local_d44 = 0;
  uStack_d2c = 0;
  uStack_d34 = 0;
  uStack_d1c = 0;
  local_d24 = 0;
  uStack_d0c = 0;
  uStack_d14 = 0;
  local_d07 = 0;
  uStack_d04 = 0;
  local_cac = 1;
  local_cab = 0;
  local_ca6 = 0x23;
  local_c6c = 0x3f800000;
  uStack_b50 = 0;
  local_b58 = 0;
  uStack_b40 = 0;
  uStack_b48 = 0;
  uStack_b60 = 0;
  local_b68 = 0;
  local_b34 = 0;
  uStack_b00 = 0;
  local_b08 = 0;
  uStack_af0 = 0;
  uStack_af8 = 0;
  uStack_ae0 = 0;
  local_ae8 = 0;
  uStack_ad0 = 0;
  uStack_ad8 = 0;
  uStack_ac0 = 0;
  local_ac8 = 0;
  uStack_ab0 = 0;
  uStack_ab8 = 0;
  uStack_aa0 = 0;
  local_aa8 = 0;
  uStack_a90 = 0;
  uStack_a98 = 0;
  uStack_a80 = 0;
  local_a88 = 0;
  uStack_a70 = 0;
  uStack_a78 = 0;
  uStack_a60 = 0;
  local_a68 = 0;
  uStack_ef7 = 0;
  uStack_f4b = 0;
  local_f53 = 0;
  uStack_f3b = 0;
  local_f43 = 0;
  uStack_f2b = 0;
  local_f33 = 0;
  uStack_f1b = 0;
  local_f23 = 0;
  uStack_f0d = 0;
  uStack_f15 = 0;
  uStack_f13 = 0;
  local_ef9 = 0;
  uStack_ef8 = 0;
  uStack_ee8 = 0;
  uStack_ef0 = 0;
  local_ed8 = 0;
  uStack_ee0 = 0;
  local_ec8 = 0;
  uStack_ed0 = 0;
  local_eb8 = 0;
  uStack_ec0 = 0;
  local_ea8 = 0;
  uStack_eb0 = 0;
  uStack_e98 = 0;
  uStack_ea0 = 0;
  local_e90 = 0;
  local_e34 = 0;
  local_e2c = 0;
  local_e24 = 0;
  local_e1c = 0;
  local_e14 = 0;
  local_e0c = 0;
  local_e04 = 0;
  local_dfc = 0;
  local_df4 = 0;
  local_dec = 0;
  local_de4 = 0;
  local_ddc = 0;
  local_dd4 = 0;
  local_dcc = 0;
  local_dc8 = 0;
  local_dc4 = 0;
  local_db8 = 0;
  local_cfc = 0;
  local_cf8 = 0;
  local_cf4 = 0;
  local_cf0 = 0;
  local_cec = 0;
  local_ce8 = 0;
  local_cd0 = 0;
  uStack_da8 = 0;
  local_db0 = 0;
  uStack_d98 = 0;
  uStack_da0 = 0;
  uStack_d88 = 0;
  local_d90 = 0;
  uStack_d78 = 0;
  local_d77 = 0;
  uStack_d80 = 0;
  uStack_cc0 = 0;
  local_cc8 = 0;
  local_cb8 = 0;
  local_cb0 = 0;
  local_ca7 = 0;
  uStack_c98 = 0;
  local_ca0 = 0;
  uStack_c88 = 0;
  uStack_c90 = 0;
  uStack_c78 = 0;
  uStack_c71 = 0;
  local_c80 = 0;
  local_c64 = 0;
  local_c5c = 0;
  local_c58 = 0;
  local_c50 = 0;
  local_c4c = 0;
  local_c44 = 0;
  local_c40 = 0;
  local_c38 = 0;
  local_c34 = 0;
  local_c2c = 0;
  local_c28 = 0;
  local_c20 = 0;
  local_c1c = 0;
  local_c14 = 0;
  local_c10 = 0;
  local_c08 = 0;
  local_c04 = 0;
  local_bfc = 0;
  local_bf8 = 0;
  local_bf0 = 0;
  local_bec = 0;
  local_be4 = 0;
  local_be0 = 0;
  local_bd8 = 0;
  local_bd4 = 0;
  local_bcc = 0;
  local_bc8 = 0;
  local_bc4 = 0;
  local_bc0 = 0;
  local_bbc = 0;
  local_bb8 = 0;
  local_bb4 = 0;
  local_bb0 = 0;
  local_bac = 0;
  local_ba8 = 0;
  local_ba4 = 0;
  local_ba0 = 0;
  local_b9c = 0;
  local_b98 = 0;
  local_b94 = 0;
  local_b90 = 0;
  local_b8c = 0;
  local_b88 = 0;
  local_b84 = 0;
  local_b80 = 0;
  local_b7c = 0;
  local_b78 = 0;
  local_b74 = 0;
  local_b70 = 0;
  local_b6c = 0;
  local_b28 = 0;
  local_b38 = 0;
  local_b2c = 0;
  local_b10 = 0;
  local_a00 = 0;
  local_9fc = 0;
  local_9f8 = 0;
  local_9e0 = 0;
  uStack_9ec = 0;
  local_9f4 = 0;
  local_9e4 = 0;
  local_9d8 = 0x101;
  local_9d6 = 0;
  local_9d4 = 0;
  local_9d0 = 0;
  local_970 = 0;
  local_968 = 0;
  local_908 = 0;
  local_8f8 = 0;
  local_8f4 = 0;
  local_8f0 = 0;
  local_8ec = 0;
  local_8e8 = 0;
  local_8e4 = 0;
  local_8e0 = 0;
  local_8dc = 0;
  local_8d8 = 0;
  local_8d4 = 0;
  local_8fc = 0;
  local_900 = 0;
  local_fb0 = PTR_vtable_001f0bc0 + 0x20;
  local_80 = (long *)0x0;
                    /* try { // try from 0017e33c to 0017e363 has its CatchHandler @ 0017e540 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)&local_8d0,(PropsParserContext *)(PTR_PTR_001f0bc8 + 8),
             (HostPlatformViewProps *)local_1010,(RawProps *)&local_fb0,(function *)&local_130);
  if (local_80 == local_a0) {
    lVar7 = 4;
    plVar8 = local_a0;
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_0017e390;
    lVar7 = 5;
    plVar8 = local_80;
  }
  (**(code **)(*plVar8 + lVar7 * 8))();
LAB_0017e390:
  local_8d0 = puVar5 + 0x20;
  FUN_0017d0e8(&local_8d0,puVar6 + 8);
  FUN_0017d0e8(&local_fb0,puVar6 + 8);
  facebook::react::RawPropsParser::postPrepare();
  pvVar3 = local_160;
  puVar4 = (undefined8 *)local_150;
  while (puVar4 != (undefined8 *)0x0) {
    plVar8 = (long *)puVar4[6];
    pvVar9 = (void *)*puVar4;
    local_160 = pvVar3;
    if ((plVar8 == (long *)0x0) || (lVar7 = FUN_001735f0(0xffffffffffffffff,plVar8 + 1), lVar7 != 0)
       ) {
      bVar1 = *(byte *)(puVar4 + 2);
    }
    else {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
      bVar1 = *(byte *)(puVar4 + 2);
    }
    if ((bVar1 & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
    operator_delete(puVar4);
    pvVar3 = local_160;
    puVar4 = (undefined8 *)pvVar9;
  }
  local_160 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_198);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_1c8);
  std::__ndk1::mutex::~mutex((mutex *)&local_1f0);
  pvVar9 = local_b8;
  pvVar3 = local_b0;
  if (local_b8 != (void *)0x0) {
    while (pvVar3 != pvVar9) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 0017e49c to 0017e4a7 has its CatchHandler @ 0017e5b8 */
        (*(code *)(&PTR_FUN_001e82f8)[*(uint *)((long)pvVar3 + -8)])
                  (&local_fb0,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_b0 = pvVar9;
    operator_delete(local_b8);
  }
  if (local_d0 != (void *)0x0) {
    pvStack_c8 = local_d0;
    operator_delete(local_d0);
  }
  folly::dynamic::destroy();
  facebook::jsi::Value::~Value((Value *)local_118);
  if (local_fd0 != (void *)0x0) {
    pvStack_fc8 = local_fd0;
    operator_delete(local_fd0);
  }
  if (pvStack_fe8 != (void *)0x0) {
    local_fe0 = pvStack_fe8;
    operator_delete(pvStack_fe8);
  }
  if (local_1000 != (void *)0x0) {
    pvStack_ff8 = local_1000;
    operator_delete(local_1000);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017e5bc  FUN_0017e5bc =====

void FUN_0017e5bc(void *param_1)

{
  FUN_0019330c();
  operator_delete(param_1);
  return;
}


// ===== 0017e5e0  FUN_0017e5e0 =====

undefined * FUN_0017e5e0(void)

{
  return PTR_RNSScreenContentWrapperComponentName_001f0bb8;
}


// ===== 0017e5ec  FUN_0017e5ec =====

undefined * FUN_0017e5ec(void)

{
  return PTR_RNSScreenContentWrapperComponentName_001f0bb8;
}


// ===== 0017e5f8  FUN_0017e5f8 =====

undefined8 FUN_0017e5f8(void)

{
  return 0x61;
}


// ===== 0017e600  FUN_0017e600 =====

void FUN_0017e600(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar4 = tpidr_el0;
  lVar9 = *(long *)(lVar4 + 0x28);
  uVar5 = (**(code **)(*param_2 + 0x20))();
  puVar6 = (undefined8 *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_001e87d0;
                    /* try { // try from 0017e66c to 0017e67b has its CatchHandler @ 0017e754 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_001e8820;
  uVar3 = *(uint *)((long)puVar6 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar5 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar5;
  lVar8 = *param_2;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar7 + 0x6b0) != '\0' || *(char *)(lVar7 + 0x6b1) != '\0') ||
             *(char *)(lVar7 + 0x1e8) != '\0') << 0xb;
                    /* try { // try from 0017e708 to 0017e713 has its CatchHandler @ 0017e744 */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0017e784  FUN_0017e784 =====

void FUN_0017e784(undefined8 *param_1,long *param_2,shared_ptr *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  YogaLayoutableShadowNode *local_78;
  long *local_70;
  YogaLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar5 = (long *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_001e87d0;
                    /* try { // try from 0017e7dc to 0017e7eb has its CatchHandler @ 0017e92c */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            (pYVar1,(ShadowNode *)param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_001e8820;
  uVar3 = *(uint *)((long)plVar5 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar6 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar5 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar6 + 0x50) & 0x30000000) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    if (*(char *)(lVar6 + 0x5b4) != '\0') {
      uVar7 = *(undefined4 *)(lVar6 + 0x5b0);
    }
  }
  *(undefined4 *)(plVar5 + 10) = uVar7;
  *(uint *)((long)plVar5 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar6 + 0x6b0) != '\0' || *(char *)(lVar6 + 0x6b1) != '\0') ||
             *(char *)(lVar6 + 0x1e8) != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar5;
                    /* try { // try from 0017e870 to 0017e87f has its CatchHandler @ 0017e944 */
  facebook::react::YogaLayoutableShadowNode::completeClone
            ((ShadowNode *)pYVar1,(ShadowNodeFragment *)param_3);
  local_78 = pYVar1;
  local_70 = plVar5;
  FUN_00174090(1,plVar5 + 1);
                    /* try { // try from 0017e890 to 0017e89f has its CatchHandler @ 0017e91c */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar6 = FUN_001735f0(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 0017e8dc to 0017e8e7 has its CatchHandler @ 0017e944 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0017e96c  FUN_0017e96c =====

void FUN_0017e96c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0017e97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 0017e980  FUN_0017e980 =====

void FUN_0017e980(undefined8 *param_1,ulong param_2,HostPlatformViewProps *param_3,long *param_4,
                 RawPropsParser *param_5)

{
  HostPlatformViewProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  RawValue *pRVar4;
  long *plVar5;
  RawValue *pRVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  char *__s2;
  dynamic *pdVar10;
  long lVar11;
  RawProps *pRVar12;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar8 = facebook::react::RawProps::isEmpty(), (uVar8 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_36RNSScreenContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_28RNSScreenContentWrapperPropsENS0_35RNSScreenContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ab8
         & 1) == 0) &&
       (param_2 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_36RNSScreenContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_28RNSScreenContentWrapperPropsENS0_35RNSScreenContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ab8
                                     ), (int)param_2 != 0)) {
                    /* try { // try from 0017ee08 to 0017ee0b has its CatchHandler @ 0017ee38 */
      FUN_0017f554();
      __cxa_atexit(FUN_0017f504,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_36RNSScreenContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_28RNSScreenContentWrapperPropsENS0_35RNSScreenContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ab0
                   ,&PTR_LOOP_001e77b0);
      param_2 = __cxa_guard_release(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_36RNSScreenContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_28RNSScreenContentWrapperPropsENS0_35RNSScreenContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ab8
                                   );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_36RNSScreenContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_28RNSScreenContentWrapperPropsENS0_35RNSScreenContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ab0
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_36RNSScreenContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_28RNSScreenContentWrapperPropsENS0_35RNSScreenContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ab0
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      param_2 = FUN_00174090(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::parse(param_5);
    pRVar12 = (RawProps *)*param_4;
    if (pRVar12 == (RawProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_36RNSScreenContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_28RNSScreenContentWrapperPropsENS0_35RNSScreenContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ab8
           & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_36RNSScreenContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_28RNSScreenContentWrapperPropsENS0_35RNSScreenContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ab8
                                     ), iVar7 != 0)) {
                    /* try { // try from 0017ed88 to 0017ed8b has its CatchHandler @ 0017ee50 */
        FUN_0017f554();
        __cxa_atexit(FUN_0017f504,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_36RNSScreenContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_28RNSScreenContentWrapperPropsENS0_35RNSScreenContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ab0
                     ,&PTR_LOOP_001e77b0);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_36RNSScreenContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_28RNSScreenContentWrapperPropsENS0_35RNSScreenContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ab8
                           );
      }
      pRVar12 = *(RawProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_36RNSScreenContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_28RNSScreenContentWrapperPropsENS0_35RNSScreenContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ab0
      ;
    }
    plVar9 = (long *)operator_new(0x6f8);
    this = (HostPlatformViewProps *)(plVar9 + 3);
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_001e8938;
    local_b0 = (dynamic *)0x0;
                    /* try { // try from 0017ea64 to 0017ea8b has its CatchHandler @ 0017eec4 */
    facebook::react::HostPlatformViewProps::HostPlatformViewProps
              (this,(PropsParserContext *)(PTR_PTR_001f0bc8 + 8),param_3,pRVar12,(function *)param_5
              );
    if (local_b0 == local_d0) {
      lVar11 = 4;
      pdVar10 = local_d0;
LAB_0017eaac:
      (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
    }
    else if (local_b0 != (dynamic *)0x0) {
      lVar11 = 5;
      pdVar10 = local_b0;
      goto LAB_0017eaac;
    }
    plVar9[3] = (long)(PTR_vtable_001f0bc0 + 0x20);
                    /* try { // try from 0017eacc to 0017eadf has its CatchHandler @ 0017ef0c */
    uVar8 = facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid();
    if ((((uVar8 & 1) == 0) ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid
                           (), (uVar8 & 1) == 0)) ||
       (uVar8 = facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(),
       (uVar8 & 1) == 0)) {
LAB_0017eb08:
      FUN_00174090(1,plVar9 + 1);
      if ((RawProps *)*param_4 == (RawProps *)0x0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_36RNSScreenContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_28RNSScreenContentWrapperPropsENS0_35RNSScreenContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ab8
             & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_36RNSScreenContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_28RNSScreenContentWrapperPropsENS0_35RNSScreenContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ab8
                                       ), iVar7 != 0)) {
                    /* try { // try from 0017edc8 to 0017edcb has its CatchHandler @ 0017ee3c */
          FUN_0017f554();
          __cxa_atexit(FUN_0017f504,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_36RNSScreenContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_28RNSScreenContentWrapperPropsENS0_35RNSScreenContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ab0
                       ,&PTR_LOOP_001e77b0);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_36RNSScreenContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_28RNSScreenContentWrapperPropsENS0_35RNSScreenContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ab8
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0017eb70 to 0017eb83 has its CatchHandler @ 0017ee68 */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,
                   *(RawProps **)
                    PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_36RNSScreenContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_28RNSScreenContentWrapperPropsENS0_35RNSScreenContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ab0
                   ,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_0017ebbc:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_0017ebbc;
        }
        if (plVar9 != (long *)0x0) goto LAB_0017ebd0;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0017eb24 to 0017eb37 has its CatchHandler @ 0017ee90 */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,(RawProps *)*param_4,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_0017ebd0;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_0017ebd0:
        lVar11 = FUN_001735f0(0xffffffffffffffff,plVar9 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 0017eaec to 0017eaf7 has its CatchHandler @ 0017ee64 */
      __s2 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar7 = strcmp(PTR_RNSScreenContentWrapperComponentName_001f0bb8,__s2);
      if (iVar7 != 0) goto LAB_0017eb08;
      bVar3 = false;
    }
                    /* try { // try from 0017ebfc to 0017ebff has its CatchHandler @ 0017ef0c */
    param_2 = facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter();
    if ((param_2 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 0017ec0c to 0017ec27 has its CatchHandler @ 0017ee8c */
        param_2 = folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar9 + 7));
      }
      else {
        param_2 = facebook::react::RawProps::operator_cast_to_dynamic((RawProps *)param_5);
      }
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0017ed68 to 0017ed77 has its CatchHandler @ 0017ee84 */
                    /* WARNING: Subroutine does not return */
          FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
        }
        goto LAB_0017ef58;
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0017ed48 to 0017ed57 has its CatchHandler @ 0017ef18 */
                    /* WARNING: Subroutine does not return */
            FUN_00172ea4(*(undefined8 *)PTR_name_001f0bb0);
          }
          goto LAB_0017ef58;
        }
        uVar1 = 0x811c9dc5;
        uVar8 = (ulong)(*(byte *)(plVar5 + 3) >> 1);
        pRVar6 = (RawValue *)((long)plVar5 + 0x19);
        pRVar4 = (RawValue *)((long)plVar5 + 0x19);
        if ((*(byte *)(plVar5 + 3) & 1) != 0) {
          uVar8 = plVar5[4];
          pRVar6 = (RawValue *)plVar5[5];
          pRVar4 = (RawValue *)plVar5[5];
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar1 = (uVar1 ^ (int)(char)*pRVar6) * 0x1000193;
          pRVar6 = pRVar6 + 1;
        }
                    /* try { // try from 0017eca8 to 0017ecb3 has its CatchHandler @ 0017ef20 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 0017ecb8 to 0017eccf has its CatchHandler @ 0017ef24 */
        param_2 = facebook::react::HostPlatformViewProps::setProp
                            ((PropsParserContext *)this,(uint)param_3,(char *)(ulong)uVar1,pRVar4);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 0017ece0 to 0017eceb has its CatchHandler @ 0017ef14 */
          param_2 = (*(code *)(&PTR_FUN_001e82f8)[local_a0])(&uStack_d1,local_d0);
        }
      }
      param_2 = folly::dynamic::destroy();
    }
    param_1[1] = plVar9;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0017ef58:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


// ===== 0017ef5c  FUN_0017ef5c =====

void FUN_0017ef5c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0017ef64  FUN_0017ef64 =====

void FUN_0017ef64(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0017ef6c  FUN_0017ef6c =====

void FUN_0017ef6c(undefined8 *param_1,long param_2,long param_3)

{
  EventEmitter *pEVar1;
  ShadowNodeFamily *pSVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ShadowNodeFamily *local_b0;
  undefined8 *local_a8;
  EventEmitter *local_a0;
  long *plStack_98;
  EventEmitter *local_90;
  long *local_88;
  undefined8 local_80;
  long local_78;
  EventEmitter *local_70;
  long *plStack_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_0017dbe4(&local_a0,param_3 + 8,param_3 + 4);
                    /* try { // try from 0017efb0 to 0017efb7 has its CatchHandler @ 0017f290 */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_001e8988;
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  pEVar1 = (EventEmitter *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  plStack_68 = plStack_98;
  local_70 = local_a0;
  local_a0 = (EventEmitter *)0x0;
  plStack_98 = (long *)0x0;
  if (local_78 != 0) {
    FUN_00174090(1,local_78 + 0x10);
  }
                    /* try { // try from 0017eff4 to 0017f003 has its CatchHandler @ 0017f264 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_001e8610;
                    /* try { // try from 0017f010 to 0017f017 has its CatchHandler @ 0017f254 */
  puVar6 = (undefined8 *)operator_new(0x58);
  *puVar6 = &PTR_FUN_001e8630;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[4] = 0;
  puVar6[3] = 0;
  plVar5[0xb] = (long)(puVar6 + 3);
  plVar5[0xc] = (long)puVar6;
  puVar6[6] = 0;
  puVar6[5] = 0;
  puVar6[8] = 0;
  puVar6[7] = 0;
  *(undefined8 *)((long)puVar6 + 0x4c) = 0;
  *(undefined8 *)((long)puVar6 + 0x44) = 0;
  plVar5[3] = (long)&PTR_FUN_001e89d8;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0017f0c4 to 0017f0cb has its CatchHandler @ 0017f244 */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  *puVar6 = &PTR_FUN_001e86f0;
  pSVar2 = (ShadowNodeFamily *)(puVar6 + 4);
  puVar6[1] = 0;
  puVar6[2] = 0;
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00174090(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00174090(1,local_78 + 0x10);
  }
                    /* try { // try from 0017f114 to 0017f12b has its CatchHandler @ 0017f214 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = puVar6;
  local_b0 = pSVar2;
  local_a8 = puVar6;
  FUN_00174090(1,puVar6 + 2);
                    /* try { // try from 0017f180 to 0017f18b has its CatchHandler @ 0017f1f4 */
  facebook::react::EventEmitter::setShadowNodeFamily(pEVar1,&local_b0);
  if (local_a8 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017f2b8  FUN_0017f2b8 =====

void FUN_0017f2b8(void)

{
  return;
}


// ===== 0017f2bc  FUN_0017f2bc =====

void FUN_0017f2bc(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0017f30c  FUN_0017f30c =====

void FUN_0017f30c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e87d0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0017f31c  FUN_0017f31c =====

void FUN_0017f31c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e87d0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0017f34c  FUN_0017f34c =====

void FUN_0017f34c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0017f354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0017f358  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0017f35c  FUN_0017f35c =====

void FUN_0017f35c(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_001f09e8 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_00173ffc(param_1 + 0x23);
  FUN_00173f00(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0017f41c  FUN_0017f41c =====

void FUN_0017f41c(long param_1)

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


// ===== 0017f484  FUN_0017f484 =====

bool FUN_0017f484(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 0017f49c  FUN_0017f49c =====

bool FUN_0017f49c(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 0017f4b4  FUN_0017f4b4 =====

void FUN_0017f4b4(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0017f504  FUN_0017f504 =====

void FUN_0017f504(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0017f554  FUN_0017f554 =====

void FUN_0017f554(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x6f8);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_001e88e8;
  memset(__s,0,0x6e0);
                    /* try { // try from 0017f590 to 0017f5a3 has its CatchHandler @ 0017f610 */
  FUN_0017cb10(__s,PTR_PTR_001f0bc8 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x5f4) = 0;
  *(undefined1 *)(puVar2 + 0xbf) = 0;
  *(undefined1 *)(puVar2 + 0xcb) = 0;
  *(undefined1 *)(puVar2 + 0xcc) = 0;
  *(undefined1 *)(puVar2 + 0xd8) = 0;
  *(undefined1 *)(puVar2 + 0xda) = 0;
  *(undefined1 *)((long)puVar2 + 0x6d4) = 0;
  *(undefined1 *)(puVar2 + 0xdb) = 0;
  *(undefined1 *)((long)puVar2 + 0x6dc) = 0;
  *(undefined1 *)(puVar2 + 0xdc) = 0;
  *(undefined1 *)((long)puVar2 + 0x6e4) = 0;
  *(undefined1 *)(puVar2 + 0xdd) = 0;
  *(undefined1 *)((long)puVar2 + 0x6ec) = 0;
  *(undefined1 *)(puVar2 + 0xde) = 0;
  puVar1 = PTR_vtable_001f0bc0;
  *(undefined1 *)((long)puVar2 + 0x6f4) = 0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_36RNSScreenContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_28RNSScreenContentWrapperPropsENS0_35RNSScreenContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ab0
  ;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 0017f62c  FUN_0017f62c =====

void FUN_0017f62c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e88e8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0017f63c  FUN_0017f63c =====

void FUN_0017f63c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e88e8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0017f66c  FUN_0017f66c =====

void FUN_0017f66c(long param_1)

{
  FUN_0017d0e8(param_1 + 0x18,PTR_PTR_001f0bc8 + 8);
  return;
}


// ===== 0017f680  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0017f684  FUN_0017f684 =====

void FUN_0017f684(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e8938;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0017f694  FUN_0017f694 =====

void FUN_0017f694(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e8938;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0017f6c4  FUN_0017f6c4 =====

void FUN_0017f6c4(long param_1)

{
  FUN_0017d0e8(param_1 + 0x18,PTR_PTR_001f0bc8 + 8);
  return;
}


// ===== 0017f6d8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0017f6dc  FUN_0017f6dc =====

void FUN_0017f6dc(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0017f72c  FUN_0017f72c =====

void FUN_0017f72c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e8988;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0017f73c  FUN_0017f73c =====

void FUN_0017f73c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e8988;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0017f76c  FUN_0017f76c =====

void FUN_0017f76c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0017f774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0017f778  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0017f77c  FUN_0017f77c =====

void FUN_0017f77c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_001e8610;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_001e8680;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 0017f82c  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_28RNSScreenFooterComponentNameEEEENS0_20RNSScreenFooterPropsENS0_27RNSScreenFooterEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_28RNSScreenFooterComponentNameEEEENS0_20RNSScreenFooterPropsENS0_27RNSScreenFooterEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ComponentDescriptor *this;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  undefined4 local_1010 [2];
  undefined8 *local_1008;
  void *local_1000;
  void *pvStack_ff8;
  undefined8 local_ff0;
  void *pvStack_fe8;
  void *local_fe0;
  undefined8 uStack_fd8;
  void *local_fd0;
  void *pvStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  undefined *local_fb0;
  undefined8 uStack_fa8;
  undefined8 local_fa0;
  undefined8 uStack_f98;
  undefined4 local_f90 [2];
  undefined8 local_f88;
  undefined8 uStack_f80;
  undefined8 local_f78;
  undefined8 uStack_f70;
  undefined4 local_f68;
  undefined4 local_f60;
  undefined1 local_f5c;
  undefined8 local_f5b;
  undefined8 local_f53;
  undefined8 uStack_f4b;
  undefined8 local_f43;
  undefined8 uStack_f3b;
  undefined8 local_f33;
  undefined8 uStack_f2b;
  undefined8 local_f23;
  undefined6 uStack_f1b;
  undefined2 uStack_f15;
  undefined6 uStack_f13;
  undefined8 uStack_f0d;
  undefined4 local_f05;
  undefined8 local_f01;
  undefined1 local_ef9;
  undefined1 uStack_ef8;
  undefined7 uStack_ef7;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 local_ed8;
  undefined8 uStack_ed0;
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined8 uStack_e98;
  undefined8 local_e90;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined8 local_e78;
  undefined4 uStack_e70;
  undefined4 uStack_e6c;
  undefined4 uStack_e68;
  undefined4 uStack_e64;
  undefined4 uStack_e60;
  undefined4 uStack_e5c;
  undefined8 local_e58;
  undefined8 uStack_e50;
  undefined4 local_e48;
  undefined1 local_e44;
  undefined4 local_e40;
  undefined1 local_e3c;
  undefined4 local_e38;
  undefined1 local_e34;
  undefined4 local_e30;
  undefined1 local_e2c;
  undefined4 local_e28;
  undefined1 local_e24;
  undefined4 local_e20;
  undefined1 local_e1c;
  undefined4 local_e18;
  undefined1 local_e14;
  undefined4 local_e10;
  undefined1 local_e0c;
  undefined4 local_e08;
  undefined1 local_e04;
  undefined4 local_e00;
  undefined1 local_dfc;
  undefined4 local_df8;
  undefined1 local_df4;
  undefined4 local_df0;
  undefined1 local_dec;
  undefined4 local_de8;
  undefined1 local_de4;
  undefined4 local_de0;
  undefined1 local_ddc;
  undefined4 local_dd8;
  undefined1 local_dd4;
  undefined4 local_dd0;
  undefined1 local_dcc;
  undefined1 local_dc8;
  undefined1 local_dc4;
  undefined1 local_db8;
  undefined8 local_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 local_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined1 uStack_d78;
  undefined7 local_d77;
  undefined1 uStack_d70;
  undefined8 uStack_d6f;
  undefined8 local_d64;
  undefined8 uStack_d5c;
  undefined8 uStack_d54;
  undefined8 uStack_d4c;
  undefined8 local_d44;
  undefined8 uStack_d3c;
  undefined8 uStack_d34;
  undefined8 uStack_d2c;
  undefined8 local_d24;
  undefined8 uStack_d1c;
  undefined8 uStack_d14;
  undefined5 uStack_d0c;
  undefined3 local_d07;
  undefined5 uStack_d04;
  undefined1 local_cfc;
  undefined1 local_cf8;
  undefined1 local_cf4;
  undefined1 local_cf0;
  undefined1 local_cec;
  undefined1 local_ce8;
  undefined1 local_cd0;
  undefined8 local_cc8;
  undefined8 uStack_cc0;
  undefined8 local_cb8;
  undefined4 local_cb0;
  undefined1 local_cac;
  undefined4 local_cab;
  undefined1 local_ca7;
  undefined1 local_ca6;
  undefined8 local_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 local_c80;
  undefined7 uStack_c78;
  undefined4 uStack_c71;
  undefined8 local_c6c;
  undefined1 local_c64;
  undefined1 local_c5c;
  undefined1 local_c58;
  undefined1 local_c50;
  undefined1 local_c4c;
  undefined1 local_c44;
  undefined1 local_c40;
  undefined1 local_c38;
  undefined1 local_c34;
  undefined1 local_c2c;
  undefined1 local_c28;
  undefined1 local_c20;
  undefined1 local_c1c;
  undefined1 local_c14;
  undefined1 local_c10;
  undefined1 local_c08;
  undefined1 local_c04;
  undefined1 local_bfc;
  undefined1 local_bf8;
  undefined1 local_bf0;
  undefined1 local_bec;
  undefined1 local_be4;
  undefined1 local_be0;
  undefined1 local_bd8;
  undefined1 local_bd4;
  undefined1 local_bcc;
  undefined1 local_bc8;
  undefined1 local_bc4;
  undefined1 local_bc0;
  undefined1 local_bbc;
  undefined1 local_bb8;
  undefined1 local_bb4;
  undefined1 local_bb0;
  undefined1 local_bac;
  undefined1 local_ba8;
  undefined1 local_ba4;
  undefined1 local_ba0;
  undefined1 local_b9c;
  undefined1 local_b98;
  undefined1 local_b94;
  undefined1 local_b90;
  undefined1 local_b8c;
  undefined1 local_b88;
  undefined1 local_b84;
  undefined1 local_b80;
  undefined1 local_b7c;
  undefined1 local_b78;
  undefined1 local_b74;
  undefined1 local_b70;
  undefined1 local_b6c;
  undefined8 local_b68;
  undefined8 uStack_b60;
  undefined8 local_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined2 local_b38;
  undefined8 local_b34;
  undefined1 local_b2c;
  undefined8 local_b28;
  undefined8 local_b20;
  undefined8 uStack_b18;
  undefined1 local_b10;
  undefined8 local_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined6 uStack_a10;
  undefined2 uStack_a0a;
  undefined6 uStack_a08;
  undefined1 local_a00;
  undefined1 local_9fc;
  undefined1 local_9f8;
  undefined8 local_9f4;
  undefined8 uStack_9ec;
  undefined1 local_9e4;
  undefined8 local_9e0;
  undefined2 local_9d8;
  undefined1 local_9d6;
  undefined4 local_9d4;
  undefined1 local_9d0;
  undefined1 local_970;
  undefined1 local_968;
  undefined1 local_908;
  undefined4 local_900;
  undefined2 local_8fc;
  undefined1 local_8f8;
  undefined1 local_8f4;
  undefined1 local_8f0;
  undefined1 local_8ec;
  undefined1 local_8e8;
  undefined1 local_8e4;
  undefined1 local_8e0;
  undefined1 local_8dc;
  undefined1 local_8d8;
  undefined1 local_8d4;
  undefined *local_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined8 local_8b8;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
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
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  void *local_160;
  undefined8 uStack_158;
  void *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118 [4];
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_d8;
  void *local_d0;
  void *pvStack_c8;
  undefined8 uStack_c0;
  void *local_b8;
  void *local_b0;
  undefined8 uStack_a8;
  long local_a0 [4];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_fe8 = (void *)0x0;
  local_ff0 = 0;
  uStack_fd8 = 0;
  local_fe0 = (void *)0x0;
  pvStack_fc8 = (void *)0x0;
  local_fd0 = (void *)0x0;
  uStack_fb8 = 0;
  uStack_fc0 = 0;
  pvStack_ff8 = (void *)0x0;
  local_1000 = (void *)0x0;
                    /* try { // try from 0017f87c to 0017f887 has its CatchHandler @ 0017ff38 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_1000);
  local_130 = 0;
  *(undefined ***)this = &PTR_FUN_001e8a10;
  local_128 = 0;
  local_120 = 0;
  local_118[0] = 0;
  local_108 = 0;
  local_100 = 0;
  local_d8 = 0;
  pvStack_c8 = (void *)0x0;
  local_d0 = (void *)0x0;
  local_b8 = (void *)0x0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = (void *)0x0;
  local_140 = 0;
  uStack_148 = 0;
  local_150 = (void *)0x0;
  uStack_158 = 0;
  local_160 = (void *)0x0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
                    /* try { // try from 0017f8f0 to 0017f8fb has its CatchHandler @ 0017ff2c */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1f0);
  local_140 = CONCAT44(local_140._4_4_,0x3f800000);
  local_1010[0] = 0xffffffff;
  uStack_148 = 0;
  local_150 = (void *)0x0;
  uStack_158 = 0;
  local_160 = (void *)0x0;
  local_1008 = &local_1f0;
  facebook::react::RawProps::parse((RawPropsParser *)&local_130);
  memset(local_f90,0,0x6c0);
  local_8d0 = (undefined *)CONCAT44(local_8d0._4_4_,5);
  local_8b8 = 0;
  local_fb0 = PTR_construction_vtable_001f0e18 + 0x20;
  local_f90[0] = 5;
  uStack_fa8 = 0;
  uStack_f98 = 0;
  local_fa0 = 0;
  local_8b0 = 0;
  uStack_8a8 = 0x3f800000;
  uStack_8c0 = 0;
  local_8c8 = 0;
  uStack_f80 = 0;
  local_f88 = 0;
  uStack_f70 = 0;
  local_f78 = 0;
  local_f68 = 0x3f800000;
  folly::dynamic::destroy();
  puVar6 = PTR_PTR_001f0be0;
  puVar5 = PTR_vtable_001f0bd8;
  local_f5c = 0;
  local_f01 = 0;
  uStack_a20 = _UNK_00142624;
  local_a28 = _DAT_0014261c;
  local_f5b = DAT_001423b8;
  uStack_b18 = _UNK_001423f8;
  local_b20 = _DAT_001423f0;
  uStack_a30 = _UNK_00142614;
  local_a38 = _DAT_0014260c;
  local_e44 = 0;
  uStack_a40 = _UNK_00142604;
  local_a48 = _DAT_001425fc;
  uStack_a50 = _UNK_001425f4;
  local_a58 = _DAT_001425ec;
  uStack_a08 = 0;
  local_e3c = 0;
  uStack_e70 = 0;
  local_e78 = 0;
  uStack_e5c = 0;
  uStack_e80 = 0;
  local_e88 = 0;
  uStack_a10 = 0;
  uStack_a0a = 0;
  local_a18 = 0;
  local_f60 = 0x10410710;
  local_f05 = 0x40004;
  uStack_e64 = 0;
  uStack_e60 = 0;
  uStack_e6c = 0;
  uStack_e68 = 0;
  uStack_e50 = 0;
  local_e58 = 0;
  local_e48 = 0x7fc00000;
  local_e40 = 0x7fc00000;
  local_e38 = 0x7fc00000;
  local_e30 = 0x7fc00000;
  local_e28 = 0x7fc00000;
  local_e20 = 0x7fc00000;
  local_e18 = 0x7fc00000;
  local_e10 = 0x7fc00000;
  local_e08 = 0x7fc00000;
  local_e00 = 0x7fc00000;
  local_df8 = 0x7fc00000;
  local_df0 = 0x7fc00000;
  local_de8 = 0x7fc00000;
  local_de0 = 0x7fc00000;
  local_dd8 = 0x7fc00000;
  local_dd0 = 0x7fc00000;
  uStack_d6f = 0;
  uStack_d70 = 0;
  uStack_d5c = 0;
  local_d64 = 0;
  uStack_d4c = 0;
  uStack_d54 = 0;
  uStack_d3c = 0;
  local_d44 = 0;
  uStack_d2c = 0;
  uStack_d34 = 0;
  uStack_d1c = 0;
  local_d24 = 0;
  uStack_d0c = 0;
  uStack_d14 = 0;
  local_d07 = 0;
  uStack_d04 = 0;
  local_cac = 1;
  local_cab = 0;
  local_ca6 = 0x23;
  local_c6c = 0x3f800000;
  uStack_b50 = 0;
  local_b58 = 0;
  uStack_b40 = 0;
  uStack_b48 = 0;
  uStack_b60 = 0;
  local_b68 = 0;
  local_b34 = 0;
  uStack_b00 = 0;
  local_b08 = 0;
  uStack_af0 = 0;
  uStack_af8 = 0;
  uStack_ae0 = 0;
  local_ae8 = 0;
  uStack_ad0 = 0;
  uStack_ad8 = 0;
  uStack_ac0 = 0;
  local_ac8 = 0;
  uStack_ab0 = 0;
  uStack_ab8 = 0;
  uStack_aa0 = 0;
  local_aa8 = 0;
  uStack_a90 = 0;
  uStack_a98 = 0;
  uStack_a80 = 0;
  local_a88 = 0;
  uStack_a70 = 0;
  uStack_a78 = 0;
  uStack_a60 = 0;
  local_a68 = 0;
  uStack_ef7 = 0;
  uStack_f4b = 0;
  local_f53 = 0;
  uStack_f3b = 0;
  local_f43 = 0;
  uStack_f2b = 0;
  local_f33 = 0;
  uStack_f1b = 0;
  local_f23 = 0;
  uStack_f0d = 0;
  uStack_f15 = 0;
  uStack_f13 = 0;
  local_ef9 = 0;
  uStack_ef8 = 0;
  uStack_ee8 = 0;
  uStack_ef0 = 0;
  local_ed8 = 0;
  uStack_ee0 = 0;
  local_ec8 = 0;
  uStack_ed0 = 0;
  local_eb8 = 0;
  uStack_ec0 = 0;
  local_ea8 = 0;
  uStack_eb0 = 0;
  uStack_e98 = 0;
  uStack_ea0 = 0;
  local_e90 = 0;
  local_e34 = 0;
  local_e2c = 0;
  local_e24 = 0;
  local_e1c = 0;
  local_e14 = 0;
  local_e0c = 0;
  local_e04 = 0;
  local_dfc = 0;
  local_df4 = 0;
  local_dec = 0;
  local_de4 = 0;
  local_ddc = 0;
  local_dd4 = 0;
  local_dcc = 0;
  local_dc8 = 0;
  local_dc4 = 0;
  local_db8 = 0;
  local_cfc = 0;
  local_cf8 = 0;
  local_cf4 = 0;
  local_cf0 = 0;
  local_cec = 0;
  local_ce8 = 0;
  local_cd0 = 0;
  uStack_da8 = 0;
  local_db0 = 0;
  uStack_d98 = 0;
  uStack_da0 = 0;
  uStack_d88 = 0;
  local_d90 = 0;
  uStack_d78 = 0;
  local_d77 = 0;
  uStack_d80 = 0;
  uStack_cc0 = 0;
  local_cc8 = 0;
  local_cb8 = 0;
  local_cb0 = 0;
  local_ca7 = 0;
  uStack_c98 = 0;
  local_ca0 = 0;
  uStack_c88 = 0;
  uStack_c90 = 0;
  uStack_c78 = 0;
  uStack_c71 = 0;
  local_c80 = 0;
  local_c64 = 0;
  local_c5c = 0;
  local_c58 = 0;
  local_c50 = 0;
  local_c4c = 0;
  local_c44 = 0;
  local_c40 = 0;
  local_c38 = 0;
  local_c34 = 0;
  local_c2c = 0;
  local_c28 = 0;
  local_c20 = 0;
  local_c1c = 0;
  local_c14 = 0;
  local_c10 = 0;
  local_c08 = 0;
  local_c04 = 0;
  local_bfc = 0;
  local_bf8 = 0;
  local_bf0 = 0;
  local_bec = 0;
  local_be4 = 0;
  local_be0 = 0;
  local_bd8 = 0;
  local_bd4 = 0;
  local_bcc = 0;
  local_bc8 = 0;
  local_bc4 = 0;
  local_bc0 = 0;
  local_bbc = 0;
  local_bb8 = 0;
  local_bb4 = 0;
  local_bb0 = 0;
  local_bac = 0;
  local_ba8 = 0;
  local_ba4 = 0;
  local_ba0 = 0;
  local_b9c = 0;
  local_b98 = 0;
  local_b94 = 0;
  local_b90 = 0;
  local_b8c = 0;
  local_b88 = 0;
  local_b84 = 0;
  local_b80 = 0;
  local_b7c = 0;
  local_b78 = 0;
  local_b74 = 0;
  local_b70 = 0;
  local_b6c = 0;
  local_b28 = 0;
  local_b38 = 0;
  local_b2c = 0;
  local_b10 = 0;
  local_a00 = 0;
  local_9fc = 0;
  local_9f8 = 0;
  local_9e0 = 0;
  uStack_9ec = 0;
  local_9f4 = 0;
  local_9e4 = 0;
  local_9d8 = 0x101;
  local_9d6 = 0;
  local_9d4 = 0;
  local_9d0 = 0;
  local_970 = 0;
  local_968 = 0;
  local_908 = 0;
  local_8f8 = 0;
  local_8f4 = 0;
  local_8f0 = 0;
  local_8ec = 0;
  local_8e8 = 0;
  local_8e4 = 0;
  local_8e0 = 0;
  local_8dc = 0;
  local_8d8 = 0;
  local_8d4 = 0;
  local_8fc = 0;
  local_900 = 0;
  local_fb0 = PTR_vtable_001f0bd8 + 0x20;
  local_80 = (long *)0x0;
                    /* try { // try from 0017fcec to 0017fd13 has its CatchHandler @ 0017fef0 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)&local_8d0,(PropsParserContext *)(PTR_PTR_001f0be0 + 8),
             (HostPlatformViewProps *)local_1010,(RawProps *)&local_fb0,(function *)&local_130);
  if (local_80 == local_a0) {
    lVar7 = 4;
    plVar8 = local_a0;
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_0017fd40;
    lVar7 = 5;
    plVar8 = local_80;
  }
  (**(code **)(*plVar8 + lVar7 * 8))();
LAB_0017fd40:
  local_8d0 = puVar5 + 0x20;
  FUN_0017d0e8(&local_8d0,puVar6 + 8);
  FUN_0017d0e8(&local_fb0,puVar6 + 8);
  facebook::react::RawPropsParser::postPrepare();
  pvVar3 = local_160;
  puVar4 = (undefined8 *)local_150;
  while (puVar4 != (undefined8 *)0x0) {
    plVar8 = (long *)puVar4[6];
    pvVar9 = (void *)*puVar4;
    local_160 = pvVar3;
    if ((plVar8 == (long *)0x0) || (lVar7 = FUN_001735f0(0xffffffffffffffff,plVar8 + 1), lVar7 != 0)
       ) {
      bVar1 = *(byte *)(puVar4 + 2);
    }
    else {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
      bVar1 = *(byte *)(puVar4 + 2);
    }
    if ((bVar1 & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
    operator_delete(puVar4);
    pvVar3 = local_160;
    puVar4 = (undefined8 *)pvVar9;
  }
  local_160 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_198);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_1c8);
  std::__ndk1::mutex::~mutex((mutex *)&local_1f0);
  pvVar9 = local_b8;
  pvVar3 = local_b0;
  if (local_b8 != (void *)0x0) {
    while (pvVar3 != pvVar9) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 0017fe4c to 0017fe57 has its CatchHandler @ 0017ff68 */
        (*(code *)(&PTR_FUN_001e82f8)[*(uint *)((long)pvVar3 + -8)])
                  (&local_fb0,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_b0 = pvVar9;
    operator_delete(local_b8);
  }
  if (local_d0 != (void *)0x0) {
    pvStack_c8 = local_d0;
    operator_delete(local_d0);
  }
  folly::dynamic::destroy();
  facebook::jsi::Value::~Value((Value *)local_118);
  if (local_fd0 != (void *)0x0) {
    pvStack_fc8 = local_fd0;
    operator_delete(local_fd0);
  }
  if (pvStack_fe8 != (void *)0x0) {
    local_fe0 = pvStack_fe8;
    operator_delete(pvStack_fe8);
  }
  if (local_1000 != (void *)0x0) {
    pvStack_ff8 = local_1000;
    operator_delete(local_1000);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017ff6c  FUN_0017ff6c =====

void FUN_0017ff6c(void *param_1)

{
  FUN_0019330c();
  operator_delete(param_1);
  return;
}


// ===== 0017ff90  FUN_0017ff90 =====

undefined * FUN_0017ff90(void)

{
  return PTR_RNSScreenFooterComponentName_001f0bd0;
}


// ===== 0017ff9c  FUN_0017ff9c =====

undefined * FUN_0017ff9c(void)

{
  return PTR_RNSScreenFooterComponentName_001f0bd0;
}


// ===== 0017ffa8  FUN_0017ffa8 =====

undefined8 FUN_0017ffa8(void)

{
  return 0x61;
}


// ===== 0017ffb0  FUN_0017ffb0 =====

void FUN_0017ffb0(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar4 = tpidr_el0;
  lVar9 = *(long *)(lVar4 + 0x28);
  uVar5 = (**(code **)(*param_2 + 0x20))();
  puVar6 = (undefined8 *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_001e8aa0;
                    /* try { // try from 0018001c to 0018002b has its CatchHandler @ 00180104 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_001e8af0;
  uVar3 = *(uint *)((long)puVar6 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar5 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar5;
  lVar8 = *param_2;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar7 + 0x6b0) != '\0' || *(char *)(lVar7 + 0x6b1) != '\0') ||
             *(char *)(lVar7 + 0x1e8) != '\0') << 0xb;
                    /* try { // try from 001800b8 to 001800c3 has its CatchHandler @ 001800f4 */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00180134  FUN_00180134 =====

void FUN_00180134(undefined8 *param_1,long *param_2,shared_ptr *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  YogaLayoutableShadowNode *local_78;
  long *local_70;
  YogaLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar5 = (long *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_001e8aa0;
                    /* try { // try from 0018018c to 0018019b has its CatchHandler @ 001802dc */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            (pYVar1,(ShadowNode *)param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_001e8af0;
  uVar3 = *(uint *)((long)plVar5 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar6 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar5 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar6 + 0x50) & 0x30000000) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    if (*(char *)(lVar6 + 0x5b4) != '\0') {
      uVar7 = *(undefined4 *)(lVar6 + 0x5b0);
    }
  }
  *(undefined4 *)(plVar5 + 10) = uVar7;
  *(uint *)((long)plVar5 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar6 + 0x6b0) != '\0' || *(char *)(lVar6 + 0x6b1) != '\0') ||
             *(char *)(lVar6 + 0x1e8) != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar5;
                    /* try { // try from 00180220 to 0018022f has its CatchHandler @ 001802f4 */
  facebook::react::YogaLayoutableShadowNode::completeClone
            ((ShadowNode *)pYVar1,(ShadowNodeFragment *)param_3);
  local_78 = pYVar1;
  local_70 = plVar5;
  FUN_00174090(1,plVar5 + 1);
                    /* try { // try from 00180240 to 0018024f has its CatchHandler @ 001802cc */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar6 = FUN_001735f0(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 0018028c to 00180297 has its CatchHandler @ 001802f4 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0018031c  FUN_0018031c =====

void FUN_0018031c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0018032c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 00180330  FUN_00180330 =====

void FUN_00180330(undefined8 *param_1,ulong param_2,HostPlatformViewProps *param_3,long *param_4,
                 RawPropsParser *param_5)

{
  HostPlatformViewProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  RawValue *pRVar4;
  long *plVar5;
  RawValue *pRVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  char *__s2;
  dynamic *pdVar10;
  long lVar11;
  RawProps *pRVar12;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar8 = facebook::react::RawProps::isEmpty(), (uVar8 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSScreenFooterComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSScreenFooterPropsENS0_27RNSScreenFooterEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ac8
         & 1) == 0) &&
       (param_2 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSScreenFooterComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSScreenFooterPropsENS0_27RNSScreenFooterEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ac8
                                     ), (int)param_2 != 0)) {
                    /* try { // try from 001807b8 to 001807bb has its CatchHandler @ 001807e8 */
      FUN_00180f04();
      __cxa_atexit(FUN_00180eb4,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSScreenFooterComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSScreenFooterPropsENS0_27RNSScreenFooterEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ac0
                   ,&PTR_LOOP_001e77b0);
      param_2 = __cxa_guard_release(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSScreenFooterComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSScreenFooterPropsENS0_27RNSScreenFooterEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ac8
                                   );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSScreenFooterComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSScreenFooterPropsENS0_27RNSScreenFooterEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ac0
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSScreenFooterComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSScreenFooterPropsENS0_27RNSScreenFooterEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ac0
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      param_2 = FUN_00174090(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::parse(param_5);
    pRVar12 = (RawProps *)*param_4;
    if (pRVar12 == (RawProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSScreenFooterComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSScreenFooterPropsENS0_27RNSScreenFooterEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ac8
           & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSScreenFooterComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSScreenFooterPropsENS0_27RNSScreenFooterEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ac8
                                     ), iVar7 != 0)) {
                    /* try { // try from 00180738 to 0018073b has its CatchHandler @ 00180800 */
        FUN_00180f04();
        __cxa_atexit(FUN_00180eb4,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSScreenFooterComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSScreenFooterPropsENS0_27RNSScreenFooterEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ac0
                     ,&PTR_LOOP_001e77b0);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSScreenFooterComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSScreenFooterPropsENS0_27RNSScreenFooterEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ac8
                           );
      }
      pRVar12 = *(RawProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSScreenFooterComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSScreenFooterPropsENS0_27RNSScreenFooterEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ac0
      ;
    }
    plVar9 = (long *)operator_new(0x6f8);
    this = (HostPlatformViewProps *)(plVar9 + 3);
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_001e8c08;
    local_b0 = (dynamic *)0x0;
                    /* try { // try from 00180414 to 0018043b has its CatchHandler @ 00180874 */
    facebook::react::HostPlatformViewProps::HostPlatformViewProps
              (this,(PropsParserContext *)(PTR_PTR_001f0be0 + 8),param_3,pRVar12,(function *)param_5
              );
    if (local_b0 == local_d0) {
      lVar11 = 4;
      pdVar10 = local_d0;
LAB_0018045c:
      (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
    }
    else if (local_b0 != (dynamic *)0x0) {
      lVar11 = 5;
      pdVar10 = local_b0;
      goto LAB_0018045c;
    }
    plVar9[3] = (long)(PTR_vtable_001f0bd8 + 0x20);
                    /* try { // try from 0018047c to 0018048f has its CatchHandler @ 001808bc */
    uVar8 = facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid();
    if ((((uVar8 & 1) == 0) ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid
                           (), (uVar8 & 1) == 0)) ||
       (uVar8 = facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(),
       (uVar8 & 1) == 0)) {
LAB_001804b8:
      FUN_00174090(1,plVar9 + 1);
      if ((RawProps *)*param_4 == (RawProps *)0x0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSScreenFooterComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSScreenFooterPropsENS0_27RNSScreenFooterEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ac8
             & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSScreenFooterComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSScreenFooterPropsENS0_27RNSScreenFooterEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ac8
                                       ), iVar7 != 0)) {
                    /* try { // try from 00180778 to 0018077b has its CatchHandler @ 001807ec */
          FUN_00180f04();
          __cxa_atexit(FUN_00180eb4,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSScreenFooterComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSScreenFooterPropsENS0_27RNSScreenFooterEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ac0
                       ,&PTR_LOOP_001e77b0);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSScreenFooterComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSScreenFooterPropsENS0_27RNSScreenFooterEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ac8
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00180520 to 00180533 has its CatchHandler @ 00180818 */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,
                   *(RawProps **)
                    PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSScreenFooterComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSScreenFooterPropsENS0_27RNSScreenFooterEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ac0
                   ,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_0018056c:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_0018056c;
        }
        if (plVar9 != (long *)0x0) goto LAB_00180580;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 001804d4 to 001804e7 has its CatchHandler @ 00180840 */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,(RawProps *)*param_4,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_00180580;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_00180580:
        lVar11 = FUN_001735f0(0xffffffffffffffff,plVar9 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 0018049c to 001804a7 has its CatchHandler @ 00180814 */
      __s2 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar7 = strcmp(PTR_RNSScreenFooterComponentName_001f0bd0,__s2);
      if (iVar7 != 0) goto LAB_001804b8;
      bVar3 = false;
    }
                    /* try { // try from 001805ac to 001805af has its CatchHandler @ 001808bc */
    param_2 = facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter();
    if ((param_2 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 001805bc to 001805d7 has its CatchHandler @ 0018083c */
        param_2 = folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar9 + 7));
      }
      else {
        param_2 = facebook::react::RawProps::operator_cast_to_dynamic((RawProps *)param_5);
      }
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00180718 to 00180727 has its CatchHandler @ 00180834 */
                    /* WARNING: Subroutine does not return */
          FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
        }
        goto LAB_00180908;
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 001806f8 to 00180707 has its CatchHandler @ 001808c8 */
                    /* WARNING: Subroutine does not return */
            FUN_00172ea4(*(undefined8 *)PTR_name_001f0bb0);
          }
          goto LAB_00180908;
        }
        uVar1 = 0x811c9dc5;
        uVar8 = (ulong)(*(byte *)(plVar5 + 3) >> 1);
        pRVar6 = (RawValue *)((long)plVar5 + 0x19);
        pRVar4 = (RawValue *)((long)plVar5 + 0x19);
        if ((*(byte *)(plVar5 + 3) & 1) != 0) {
          uVar8 = plVar5[4];
          pRVar6 = (RawValue *)plVar5[5];
          pRVar4 = (RawValue *)plVar5[5];
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar1 = (uVar1 ^ (int)(char)*pRVar6) * 0x1000193;
          pRVar6 = pRVar6 + 1;
        }
                    /* try { // try from 00180658 to 00180663 has its CatchHandler @ 001808d0 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 00180668 to 0018067f has its CatchHandler @ 001808d4 */
        param_2 = facebook::react::HostPlatformViewProps::setProp
                            ((PropsParserContext *)this,(uint)param_3,(char *)(ulong)uVar1,pRVar4);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 00180690 to 0018069b has its CatchHandler @ 001808c4 */
          param_2 = (*(code *)(&PTR_FUN_001e82f8)[local_a0])(&uStack_d1,local_d0);
        }
      }
      param_2 = folly::dynamic::destroy();
    }
    param_1[1] = plVar9;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_00180908:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


// ===== 0018090c  FUN_0018090c =====

void FUN_0018090c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00180914  FUN_00180914 =====

void FUN_00180914(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0018091c  FUN_0018091c =====

void FUN_0018091c(undefined8 *param_1,long param_2,long param_3)

{
  EventEmitter *pEVar1;
  ShadowNodeFamily *pSVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ShadowNodeFamily *local_b0;
  undefined8 *local_a8;
  EventEmitter *local_a0;
  long *plStack_98;
  EventEmitter *local_90;
  long *local_88;
  undefined8 local_80;
  long local_78;
  EventEmitter *local_70;
  long *plStack_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_0017dbe4(&local_a0,param_3 + 8,param_3 + 4);
                    /* try { // try from 00180960 to 00180967 has its CatchHandler @ 00180c40 */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_001e8c58;
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  pEVar1 = (EventEmitter *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  plStack_68 = plStack_98;
  local_70 = local_a0;
  local_a0 = (EventEmitter *)0x0;
  plStack_98 = (long *)0x0;
  if (local_78 != 0) {
    FUN_00174090(1,local_78 + 0x10);
  }
                    /* try { // try from 001809a4 to 001809b3 has its CatchHandler @ 00180c14 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_001e8610;
                    /* try { // try from 001809c0 to 001809c7 has its CatchHandler @ 00180c04 */
  puVar6 = (undefined8 *)operator_new(0x58);
  *puVar6 = &PTR_FUN_001e8630;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[4] = 0;
  puVar6[3] = 0;
  plVar5[0xb] = (long)(puVar6 + 3);
  plVar5[0xc] = (long)puVar6;
  puVar6[6] = 0;
  puVar6[5] = 0;
  puVar6[8] = 0;
  puVar6[7] = 0;
  *(undefined8 *)((long)puVar6 + 0x4c) = 0;
  *(undefined8 *)((long)puVar6 + 0x44) = 0;
  plVar5[3] = (long)&PTR_FUN_001e8ca8;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00180a74 to 00180a7b has its CatchHandler @ 00180bf4 */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  *puVar6 = &PTR_FUN_001e86f0;
  pSVar2 = (ShadowNodeFamily *)(puVar6 + 4);
  puVar6[1] = 0;
  puVar6[2] = 0;
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00174090(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00174090(1,local_78 + 0x10);
  }
                    /* try { // try from 00180ac4 to 00180adb has its CatchHandler @ 00180bc4 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = puVar6;
  local_b0 = pSVar2;
  local_a8 = puVar6;
  FUN_00174090(1,puVar6 + 2);
                    /* try { // try from 00180b30 to 00180b3b has its CatchHandler @ 00180ba4 */
  facebook::react::EventEmitter::setShadowNodeFamily(pEVar1,&local_b0);
  if (local_a8 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00180c68  FUN_00180c68 =====

void FUN_00180c68(void)

{
  return;
}


// ===== 00180c6c  FUN_00180c6c =====

void FUN_00180c6c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00180cbc  FUN_00180cbc =====

void FUN_00180cbc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e8aa0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00180ccc  FUN_00180ccc =====

void FUN_00180ccc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e8aa0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00180cfc  FUN_00180cfc =====

void FUN_00180cfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00180d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00180d08  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 00180d0c  FUN_00180d0c =====

void FUN_00180d0c(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_001f09e8 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_00173ffc(param_1 + 0x23);
  FUN_00173f00(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00180dcc  FUN_00180dcc =====

void FUN_00180dcc(long param_1)

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


// ===== 00180e34  FUN_00180e34 =====

bool FUN_00180e34(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 00180e4c  FUN_00180e4c =====

bool FUN_00180e4c(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 00180e64  FUN_00180e64 =====

void FUN_00180e64(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00180eb4  FUN_00180eb4 =====

void FUN_00180eb4(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00180f04  FUN_00180f04 =====

void FUN_00180f04(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x6f8);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_001e8bb8;
  memset(__s,0,0x6e0);
                    /* try { // try from 00180f40 to 00180f53 has its CatchHandler @ 00180fc0 */
  FUN_0017cb10(__s,PTR_PTR_001f0be0 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x5f4) = 0;
  *(undefined1 *)(puVar2 + 0xbf) = 0;
  *(undefined1 *)(puVar2 + 0xcb) = 0;
  *(undefined1 *)(puVar2 + 0xcc) = 0;
  *(undefined1 *)(puVar2 + 0xd8) = 0;
  *(undefined1 *)(puVar2 + 0xda) = 0;
  *(undefined1 *)((long)puVar2 + 0x6d4) = 0;
  *(undefined1 *)(puVar2 + 0xdb) = 0;
  *(undefined1 *)((long)puVar2 + 0x6dc) = 0;
  *(undefined1 *)(puVar2 + 0xdc) = 0;
  *(undefined1 *)((long)puVar2 + 0x6e4) = 0;
  *(undefined1 *)(puVar2 + 0xdd) = 0;
  *(undefined1 *)((long)puVar2 + 0x6ec) = 0;
  *(undefined1 *)(puVar2 + 0xde) = 0;
  puVar1 = PTR_vtable_001f0bd8;
  *(undefined1 *)((long)puVar2 + 0x6f4) = 0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSScreenFooterComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSScreenFooterPropsENS0_27RNSScreenFooterEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ac0
  ;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 00180fdc  FUN_00180fdc =====

void FUN_00180fdc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e8bb8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00180fec  FUN_00180fec =====

void FUN_00180fec(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e8bb8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018101c  FUN_0018101c =====

void FUN_0018101c(long param_1)

{
  FUN_0017d0e8(param_1 + 0x18,PTR_PTR_001f0be0 + 8);
  return;
}


// ===== 00181030  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 00181034  FUN_00181034 =====

void FUN_00181034(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e8c08;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00181044  FUN_00181044 =====

void FUN_00181044(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e8c08;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00181074  FUN_00181074 =====

void FUN_00181074(long param_1)

{
  FUN_0017d0e8(param_1 + 0x18,PTR_PTR_001f0be0 + 8);
  return;
}


// ===== 00181088  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0018108c  FUN_0018108c =====

void FUN_0018108c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001810dc  FUN_001810dc =====

void FUN_001810dc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e8c58;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 001810ec  FUN_001810ec =====

void FUN_001810ec(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e8c58;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018111c  FUN_0018111c =====

void FUN_0018111c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00181124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00181128  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0018112c  FUN_0018112c =====

void FUN_0018112c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_001e8610;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_001e8680;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 001811dc  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ComponentDescriptor *this;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  undefined4 local_1010 [2];
  undefined8 *local_1008;
  void *local_1000;
  void *pvStack_ff8;
  undefined8 local_ff0;
  void *pvStack_fe8;
  void *local_fe0;
  undefined8 uStack_fd8;
  void *local_fd0;
  void *pvStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  undefined *local_fb0;
  undefined8 uStack_fa8;
  undefined8 local_fa0;
  undefined8 uStack_f98;
  undefined4 local_f90 [2];
  undefined8 local_f88;
  undefined8 uStack_f80;
  undefined8 local_f78;
  undefined8 uStack_f70;
  undefined4 local_f68;
  undefined4 local_f60;
  undefined1 local_f5c;
  undefined8 local_f5b;
  undefined8 local_f53;
  undefined8 uStack_f4b;
  undefined8 local_f43;
  undefined8 uStack_f3b;
  undefined8 local_f33;
  undefined8 uStack_f2b;
  undefined8 local_f23;
  undefined6 uStack_f1b;
  undefined2 uStack_f15;
  undefined6 uStack_f13;
  undefined8 uStack_f0d;
  undefined4 local_f05;
  undefined8 local_f01;
  undefined1 local_ef9;
  undefined1 uStack_ef8;
  undefined7 uStack_ef7;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 local_ed8;
  undefined8 uStack_ed0;
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined8 uStack_e98;
  undefined8 local_e90;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined8 local_e78;
  undefined4 uStack_e70;
  undefined4 uStack_e6c;
  undefined4 uStack_e68;
  undefined4 uStack_e64;
  undefined4 uStack_e60;
  undefined4 uStack_e5c;
  undefined8 local_e58;
  undefined8 uStack_e50;
  undefined4 local_e48;
  undefined1 local_e44;
  undefined4 local_e40;
  undefined1 local_e3c;
  undefined4 local_e38;
  undefined1 local_e34;
  undefined4 local_e30;
  undefined1 local_e2c;
  undefined4 local_e28;
  undefined1 local_e24;
  undefined4 local_e20;
  undefined1 local_e1c;
  undefined4 local_e18;
  undefined1 local_e14;
  undefined4 local_e10;
  undefined1 local_e0c;
  undefined4 local_e08;
  undefined1 local_e04;
  undefined4 local_e00;
  undefined1 local_dfc;
  undefined4 local_df8;
  undefined1 local_df4;
  undefined4 local_df0;
  undefined1 local_dec;
  undefined4 local_de8;
  undefined1 local_de4;
  undefined4 local_de0;
  undefined1 local_ddc;
  undefined4 local_dd8;
  undefined1 local_dd4;
  undefined4 local_dd0;
  undefined1 local_dcc;
  undefined1 local_dc8;
  undefined1 local_dc4;
  undefined1 local_db8;
  undefined8 local_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 local_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined1 uStack_d78;
  undefined7 local_d77;
  undefined1 uStack_d70;
  undefined8 uStack_d6f;
  undefined8 local_d64;
  undefined8 uStack_d5c;
  undefined8 uStack_d54;
  undefined8 uStack_d4c;
  undefined8 local_d44;
  undefined8 uStack_d3c;
  undefined8 uStack_d34;
  undefined8 uStack_d2c;
  undefined8 local_d24;
  undefined8 uStack_d1c;
  undefined8 uStack_d14;
  undefined5 uStack_d0c;
  undefined3 local_d07;
  undefined5 uStack_d04;
  undefined1 local_cfc;
  undefined1 local_cf8;
  undefined1 local_cf4;
  undefined1 local_cf0;
  undefined1 local_cec;
  undefined1 local_ce8;
  undefined1 local_cd0;
  undefined8 local_cc8;
  undefined8 uStack_cc0;
  undefined8 local_cb8;
  undefined4 local_cb0;
  undefined1 local_cac;
  undefined4 local_cab;
  undefined1 local_ca7;
  undefined1 local_ca6;
  undefined8 local_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 local_c80;
  undefined7 uStack_c78;
  undefined4 uStack_c71;
  undefined8 local_c6c;
  undefined1 local_c64;
  undefined1 local_c5c;
  undefined1 local_c58;
  undefined1 local_c50;
  undefined1 local_c4c;
  undefined1 local_c44;
  undefined1 local_c40;
  undefined1 local_c38;
  undefined1 local_c34;
  undefined1 local_c2c;
  undefined1 local_c28;
  undefined1 local_c20;
  undefined1 local_c1c;
  undefined1 local_c14;
  undefined1 local_c10;
  undefined1 local_c08;
  undefined1 local_c04;
  undefined1 local_bfc;
  undefined1 local_bf8;
  undefined1 local_bf0;
  undefined1 local_bec;
  undefined1 local_be4;
  undefined1 local_be0;
  undefined1 local_bd8;
  undefined1 local_bd4;
  undefined1 local_bcc;
  undefined1 local_bc8;
  undefined1 local_bc4;
  undefined1 local_bc0;
  undefined1 local_bbc;
  undefined1 local_bb8;
  undefined1 local_bb4;
  undefined1 local_bb0;
  undefined1 local_bac;
  undefined1 local_ba8;
  undefined1 local_ba4;
  undefined1 local_ba0;
  undefined1 local_b9c;
  undefined1 local_b98;
  undefined1 local_b94;
  undefined1 local_b90;
  undefined1 local_b8c;
  undefined1 local_b88;
  undefined1 local_b84;
  undefined1 local_b80;
  undefined1 local_b7c;
  undefined1 local_b78;
  undefined1 local_b74;
  undefined1 local_b70;
  undefined1 local_b6c;
  undefined8 local_b68;
  undefined8 uStack_b60;
  undefined8 local_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined2 local_b38;
  undefined8 local_b34;
  undefined1 local_b2c;
  undefined8 local_b28;
  undefined8 local_b20;
  undefined8 uStack_b18;
  undefined1 local_b10;
  undefined8 local_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined6 uStack_a10;
  undefined2 uStack_a0a;
  undefined6 uStack_a08;
  undefined1 local_a00;
  undefined1 local_9fc;
  undefined1 local_9f8;
  undefined8 local_9f4;
  undefined8 uStack_9ec;
  undefined1 local_9e4;
  undefined8 local_9e0;
  undefined2 local_9d8;
  undefined1 local_9d6;
  undefined4 local_9d4;
  undefined1 local_9d0;
  undefined1 local_970;
  undefined1 local_968;
  undefined1 local_908;
  undefined4 local_900;
  undefined2 local_8fc;
  undefined1 local_8f8;
  undefined1 local_8f4;
  undefined1 local_8f0;
  undefined1 local_8ec;
  undefined1 local_8e8;
  undefined1 local_8e4;
  undefined1 local_8e0;
  undefined1 local_8dc;
  undefined1 local_8d8;
  undefined1 local_8d4;
  undefined *local_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined8 local_8b8;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
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
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  void *local_160;
  undefined8 uStack_158;
  void *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118 [4];
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_d8;
  void *local_d0;
  void *pvStack_c8;
  undefined8 uStack_c0;
  void *local_b8;
  void *local_b0;
  undefined8 uStack_a8;
  long local_a0 [4];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_fe8 = (void *)0x0;
  local_ff0 = 0;
  uStack_fd8 = 0;
  local_fe0 = (void *)0x0;
  pvStack_fc8 = (void *)0x0;
  local_fd0 = (void *)0x0;
  uStack_fb8 = 0;
  uStack_fc0 = 0;
  pvStack_ff8 = (void *)0x0;
  local_1000 = (void *)0x0;
                    /* try { // try from 0018122c to 00181237 has its CatchHandler @ 001818e8 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_1000);
  local_130 = 0;
  *(undefined ***)this = &PTR_FUN_001e8ce0;
  local_128 = 0;
  local_120 = 0;
  local_118[0] = 0;
  local_108 = 0;
  local_100 = 0;
  local_d8 = 0;
  pvStack_c8 = (void *)0x0;
  local_d0 = (void *)0x0;
  local_b8 = (void *)0x0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = (void *)0x0;
  local_140 = 0;
  uStack_148 = 0;
  local_150 = (void *)0x0;
  uStack_158 = 0;
  local_160 = (void *)0x0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
                    /* try { // try from 001812a0 to 001812ab has its CatchHandler @ 001818dc */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1f0);
  local_140 = CONCAT44(local_140._4_4_,0x3f800000);
  local_1010[0] = 0xffffffff;
  uStack_148 = 0;
  local_150 = (void *)0x0;
  uStack_158 = 0;
  local_160 = (void *)0x0;
  local_1008 = &local_1f0;
  facebook::react::RawProps::parse((RawPropsParser *)&local_130);
  memset(local_f90,0,0x6c0);
  local_8d0 = (undefined *)CONCAT44(local_8d0._4_4_,5);
  local_8b8 = 0;
  local_fb0 = PTR_construction_vtable_001f0e20 + 0x20;
  local_f90[0] = 5;
  uStack_fa8 = 0;
  uStack_f98 = 0;
  local_fa0 = 0;
  local_8b0 = 0;
  uStack_8a8 = 0x3f800000;
  uStack_8c0 = 0;
  local_8c8 = 0;
  uStack_f80 = 0;
  local_f88 = 0;
  uStack_f70 = 0;
  local_f78 = 0;
  local_f68 = 0x3f800000;
  folly::dynamic::destroy();
  puVar6 = PTR_PTR_001f0bf8;
  puVar5 = PTR_vtable_001f0bf0;
  local_f5c = 0;
  local_f01 = 0;
  uStack_a20 = _UNK_00142624;
  local_a28 = _DAT_0014261c;
  local_f5b = DAT_001423b8;
  uStack_b18 = _UNK_001423f8;
  local_b20 = _DAT_001423f0;
  uStack_a30 = _UNK_00142614;
  local_a38 = _DAT_0014260c;
  local_e44 = 0;
  uStack_a40 = _UNK_00142604;
  local_a48 = _DAT_001425fc;
  uStack_a50 = _UNK_001425f4;
  local_a58 = _DAT_001425ec;
  uStack_a08 = 0;
  local_e3c = 0;
  uStack_e70 = 0;
  local_e78 = 0;
  uStack_e5c = 0;
  uStack_e80 = 0;
  local_e88 = 0;
  uStack_a10 = 0;
  uStack_a0a = 0;
  local_a18 = 0;
  local_f60 = 0x10410710;
  local_f05 = 0x40004;
  uStack_e64 = 0;
  uStack_e60 = 0;
  uStack_e6c = 0;
  uStack_e68 = 0;
  uStack_e50 = 0;
  local_e58 = 0;
  local_e48 = 0x7fc00000;
  local_e40 = 0x7fc00000;
  local_e38 = 0x7fc00000;
  local_e30 = 0x7fc00000;
  local_e28 = 0x7fc00000;
  local_e20 = 0x7fc00000;
  local_e18 = 0x7fc00000;
  local_e10 = 0x7fc00000;
  local_e08 = 0x7fc00000;
  local_e00 = 0x7fc00000;
  local_df8 = 0x7fc00000;
  local_df0 = 0x7fc00000;
  local_de8 = 0x7fc00000;
  local_de0 = 0x7fc00000;
  local_dd8 = 0x7fc00000;
  local_dd0 = 0x7fc00000;
  uStack_d6f = 0;
  uStack_d70 = 0;
  uStack_d5c = 0;
  local_d64 = 0;
  uStack_d4c = 0;
  uStack_d54 = 0;
  uStack_d3c = 0;
  local_d44 = 0;
  uStack_d2c = 0;
  uStack_d34 = 0;
  uStack_d1c = 0;
  local_d24 = 0;
  uStack_d0c = 0;
  uStack_d14 = 0;
  local_d07 = 0;
  uStack_d04 = 0;
  local_cac = 1;
  local_cab = 0;
  local_ca6 = 0x23;
  local_c6c = 0x3f800000;
  uStack_b50 = 0;
  local_b58 = 0;
  uStack_b40 = 0;
  uStack_b48 = 0;
  uStack_b60 = 0;
  local_b68 = 0;
  local_b34 = 0;
  uStack_b00 = 0;
  local_b08 = 0;
  uStack_af0 = 0;
  uStack_af8 = 0;
  uStack_ae0 = 0;
  local_ae8 = 0;
  uStack_ad0 = 0;
  uStack_ad8 = 0;
  uStack_ac0 = 0;
  local_ac8 = 0;
  uStack_ab0 = 0;
  uStack_ab8 = 0;
  uStack_aa0 = 0;
  local_aa8 = 0;
  uStack_a90 = 0;
  uStack_a98 = 0;
  uStack_a80 = 0;
  local_a88 = 0;
  uStack_a70 = 0;
  uStack_a78 = 0;
  uStack_a60 = 0;
  local_a68 = 0;
  uStack_ef7 = 0;
  uStack_f4b = 0;
  local_f53 = 0;
  uStack_f3b = 0;
  local_f43 = 0;
  uStack_f2b = 0;
  local_f33 = 0;
  uStack_f1b = 0;
  local_f23 = 0;
  uStack_f0d = 0;
  uStack_f15 = 0;
  uStack_f13 = 0;
  local_ef9 = 0;
  uStack_ef8 = 0;
  uStack_ee8 = 0;
  uStack_ef0 = 0;
  local_ed8 = 0;
  uStack_ee0 = 0;
  local_ec8 = 0;
  uStack_ed0 = 0;
  local_eb8 = 0;
  uStack_ec0 = 0;
  local_ea8 = 0;
  uStack_eb0 = 0;
  uStack_e98 = 0;
  uStack_ea0 = 0;
  local_e90 = 0;
  local_e34 = 0;
  local_e2c = 0;
  local_e24 = 0;
  local_e1c = 0;
  local_e14 = 0;
  local_e0c = 0;
  local_e04 = 0;
  local_dfc = 0;
  local_df4 = 0;
  local_dec = 0;
  local_de4 = 0;
  local_ddc = 0;
  local_dd4 = 0;
  local_dcc = 0;
  local_dc8 = 0;
  local_dc4 = 0;
  local_db8 = 0;
  local_cfc = 0;
  local_cf8 = 0;
  local_cf4 = 0;
  local_cf0 = 0;
  local_cec = 0;
  local_ce8 = 0;
  local_cd0 = 0;
  uStack_da8 = 0;
  local_db0 = 0;
  uStack_d98 = 0;
  uStack_da0 = 0;
  uStack_d88 = 0;
  local_d90 = 0;
  uStack_d78 = 0;
  local_d77 = 0;
  uStack_d80 = 0;
  uStack_cc0 = 0;
  local_cc8 = 0;
  local_cb8 = 0;
  local_cb0 = 0;
  local_ca7 = 0;
  uStack_c98 = 0;
  local_ca0 = 0;
  uStack_c88 = 0;
  uStack_c90 = 0;
  uStack_c78 = 0;
  uStack_c71 = 0;
  local_c80 = 0;
  local_c64 = 0;
  local_c5c = 0;
  local_c58 = 0;
  local_c50 = 0;
  local_c4c = 0;
  local_c44 = 0;
  local_c40 = 0;
  local_c38 = 0;
  local_c34 = 0;
  local_c2c = 0;
  local_c28 = 0;
  local_c20 = 0;
  local_c1c = 0;
  local_c14 = 0;
  local_c10 = 0;
  local_c08 = 0;
  local_c04 = 0;
  local_bfc = 0;
  local_bf8 = 0;
  local_bf0 = 0;
  local_bec = 0;
  local_be4 = 0;
  local_be0 = 0;
  local_bd8 = 0;
  local_bd4 = 0;
  local_bcc = 0;
  local_bc8 = 0;
  local_bc4 = 0;
  local_bc0 = 0;
  local_bbc = 0;
  local_bb8 = 0;
  local_bb4 = 0;
  local_bb0 = 0;
  local_bac = 0;
  local_ba8 = 0;
  local_ba4 = 0;
  local_ba0 = 0;
  local_b9c = 0;
  local_b98 = 0;
  local_b94 = 0;
  local_b90 = 0;
  local_b8c = 0;
  local_b88 = 0;
  local_b84 = 0;
  local_b80 = 0;
  local_b7c = 0;
  local_b78 = 0;
  local_b74 = 0;
  local_b70 = 0;
  local_b6c = 0;
  local_b28 = 0;
  local_b38 = 0;
  local_b2c = 0;
  local_b10 = 0;
  local_a00 = 0;
  local_9fc = 0;
  local_9f8 = 0;
  local_9e0 = 0;
  uStack_9ec = 0;
  local_9f4 = 0;
  local_9e4 = 0;
  local_9d8 = 0x101;
  local_9d6 = 0;
  local_9d4 = 0;
  local_9d0 = 0;
  local_970 = 0;
  local_968 = 0;
  local_908 = 0;
  local_8f8 = 0;
  local_8f4 = 0;
  local_8f0 = 0;
  local_8ec = 0;
  local_8e8 = 0;
  local_8e4 = 0;
  local_8e0 = 0;
  local_8dc = 0;
  local_8d8 = 0;
  local_8d4 = 0;
  local_8fc = 0;
  local_900 = 0;
  local_fb0 = PTR_vtable_001f0bf0 + 0x20;
  local_80 = (long *)0x0;
                    /* try { // try from 0018169c to 001816c3 has its CatchHandler @ 001818a0 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)&local_8d0,(PropsParserContext *)(PTR_PTR_001f0bf8 + 8),
             (HostPlatformViewProps *)local_1010,(RawProps *)&local_fb0,(function *)&local_130);
  if (local_80 == local_a0) {
    lVar7 = 4;
    plVar8 = local_a0;
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_001816f0;
    lVar7 = 5;
    plVar8 = local_80;
  }
  (**(code **)(*plVar8 + lVar7 * 8))();
LAB_001816f0:
  local_8d0 = puVar5 + 0x20;
  FUN_0017d0e8(&local_8d0,puVar6 + 8);
  FUN_0017d0e8(&local_fb0,puVar6 + 8);
  facebook::react::RawPropsParser::postPrepare();
  pvVar3 = local_160;
  puVar4 = (undefined8 *)local_150;
  while (puVar4 != (undefined8 *)0x0) {
    plVar8 = (long *)puVar4[6];
    pvVar9 = (void *)*puVar4;
    local_160 = pvVar3;
    if ((plVar8 == (long *)0x0) || (lVar7 = FUN_001735f0(0xffffffffffffffff,plVar8 + 1), lVar7 != 0)
       ) {
      bVar1 = *(byte *)(puVar4 + 2);
    }
    else {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
      bVar1 = *(byte *)(puVar4 + 2);
    }
    if ((bVar1 & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
    operator_delete(puVar4);
    pvVar3 = local_160;
    puVar4 = (undefined8 *)pvVar9;
  }
  local_160 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_198);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_1c8);
  std::__ndk1::mutex::~mutex((mutex *)&local_1f0);
  pvVar9 = local_b8;
  pvVar3 = local_b0;
  if (local_b8 != (void *)0x0) {
    while (pvVar3 != pvVar9) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 001817fc to 00181807 has its CatchHandler @ 00181918 */
        (*(code *)(&PTR_FUN_001e82f8)[*(uint *)((long)pvVar3 + -8)])
                  (&local_fb0,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_b0 = pvVar9;
    operator_delete(local_b8);
  }
  if (local_d0 != (void *)0x0) {
    pvStack_c8 = local_d0;
    operator_delete(local_d0);
  }
  folly::dynamic::destroy();
  facebook::jsi::Value::~Value((Value *)local_118);
  if (local_fd0 != (void *)0x0) {
    pvStack_fc8 = local_fd0;
    operator_delete(local_fd0);
  }
  if (pvStack_fe8 != (void *)0x0) {
    local_fe0 = pvStack_fe8;
    operator_delete(pvStack_fe8);
  }
  if (local_1000 != (void *)0x0) {
    pvStack_ff8 = local_1000;
    operator_delete(local_1000);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018191c  FUN_0018191c =====

void FUN_0018191c(void *param_1)

{
  FUN_0019330c();
  operator_delete(param_1);
  return;
}


// ===== 00181940  FUN_00181940 =====

undefined * FUN_00181940(void)

{
  return PTR_RNSScreenNavigationContainerComponentName_001f0be8;
}


// ===== 0018194c  FUN_0018194c =====

undefined * FUN_0018194c(void)

{
  return PTR_RNSScreenNavigationContainerComponentName_001f0be8;
}


// ===== 00181958  FUN_00181958 =====

undefined8 FUN_00181958(void)

{
  return 0x61;
}


// ===== 00181960  FUN_00181960 =====

void FUN_00181960(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar4 = tpidr_el0;
  lVar9 = *(long *)(lVar4 + 0x28);
  uVar5 = (**(code **)(*param_2 + 0x20))();
  puVar6 = (undefined8 *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_001e8d70;
                    /* try { // try from 001819cc to 001819db has its CatchHandler @ 00181ab4 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_001e8dc0;
  uVar3 = *(uint *)((long)puVar6 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar5 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar5;
  lVar8 = *param_2;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar7 + 0x6b0) != '\0' || *(char *)(lVar7 + 0x6b1) != '\0') ||
             *(char *)(lVar7 + 0x1e8) != '\0') << 0xb;
                    /* try { // try from 00181a68 to 00181a73 has its CatchHandler @ 00181aa4 */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00181ae4  FUN_00181ae4 =====

void FUN_00181ae4(undefined8 *param_1,long *param_2,shared_ptr *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  YogaLayoutableShadowNode *local_78;
  long *local_70;
  YogaLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar5 = (long *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_001e8d70;
                    /* try { // try from 00181b3c to 00181b4b has its CatchHandler @ 00181c8c */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            (pYVar1,(ShadowNode *)param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_001e8dc0;
  uVar3 = *(uint *)((long)plVar5 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar6 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar5 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar6 + 0x50) & 0x30000000) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    if (*(char *)(lVar6 + 0x5b4) != '\0') {
      uVar7 = *(undefined4 *)(lVar6 + 0x5b0);
    }
  }
  *(undefined4 *)(plVar5 + 10) = uVar7;
  *(uint *)((long)plVar5 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar6 + 0x6b0) != '\0' || *(char *)(lVar6 + 0x6b1) != '\0') ||
             *(char *)(lVar6 + 0x1e8) != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar5;
                    /* try { // try from 00181bd0 to 00181bdf has its CatchHandler @ 00181ca4 */
  facebook::react::YogaLayoutableShadowNode::completeClone
            ((ShadowNode *)pYVar1,(ShadowNodeFragment *)param_3);
  local_78 = pYVar1;
  local_70 = plVar5;
  FUN_00174090(1,plVar5 + 1);
                    /* try { // try from 00181bf0 to 00181bff has its CatchHandler @ 00181c7c */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar6 = FUN_001735f0(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 00181c3c to 00181c47 has its CatchHandler @ 00181ca4 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00181ccc  FUN_00181ccc =====

void FUN_00181ccc(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00181cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 00181ce0  FUN_00181ce0 =====

void FUN_00181ce0(undefined8 *param_1,ulong param_2,HostPlatformViewProps *param_3,long *param_4,
                 RawPropsParser *param_5)

{
  HostPlatformViewProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  RawValue *pRVar4;
  long *plVar5;
  RawValue *pRVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  char *__s2;
  dynamic *pdVar10;
  long lVar11;
  RawProps *pRVar12;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar8 = facebook::react::RawProps::isEmpty(), (uVar8 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ad8
         & 1) == 0) &&
       (param_2 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ad8
                                     ), (int)param_2 != 0)) {
                    /* try { // try from 00182168 to 0018216b has its CatchHandler @ 00182198 */
      FUN_001828b4();
      __cxa_atexit(FUN_00182864,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ad0
                   ,&PTR_LOOP_001e77b0);
      param_2 = __cxa_guard_release(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ad8
                                   );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ad0
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ad0
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      param_2 = FUN_00174090(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::parse(param_5);
    pRVar12 = (RawProps *)*param_4;
    if (pRVar12 == (RawProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ad8
           & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ad8
                                     ), iVar7 != 0)) {
                    /* try { // try from 001820e8 to 001820eb has its CatchHandler @ 001821b0 */
        FUN_001828b4();
        __cxa_atexit(FUN_00182864,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ad0
                     ,&PTR_LOOP_001e77b0);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ad8
                           );
      }
      pRVar12 = *(RawProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ad0
      ;
    }
    plVar9 = (long *)operator_new(0x6f8);
    this = (HostPlatformViewProps *)(plVar9 + 3);
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_001e8ed8;
    local_b0 = (dynamic *)0x0;
                    /* try { // try from 00181dc4 to 00181deb has its CatchHandler @ 00182224 */
    facebook::react::HostPlatformViewProps::HostPlatformViewProps
              (this,(PropsParserContext *)(PTR_PTR_001f0bf8 + 8),param_3,pRVar12,(function *)param_5
              );
    if (local_b0 == local_d0) {
      lVar11 = 4;
      pdVar10 = local_d0;
LAB_00181e0c:
      (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
    }
    else if (local_b0 != (dynamic *)0x0) {
      lVar11 = 5;
      pdVar10 = local_b0;
      goto LAB_00181e0c;
    }
    plVar9[3] = (long)(PTR_vtable_001f0bf0 + 0x20);
                    /* try { // try from 00181e2c to 00181e3f has its CatchHandler @ 0018226c */
    uVar8 = facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid();
    if ((((uVar8 & 1) == 0) ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid
                           (), (uVar8 & 1) == 0)) ||
       (uVar8 = facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(),
       (uVar8 & 1) == 0)) {
LAB_00181e68:
      FUN_00174090(1,plVar9 + 1);
      if ((RawProps *)*param_4 == (RawProps *)0x0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ad8
             & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ad8
                                       ), iVar7 != 0)) {
                    /* try { // try from 00182128 to 0018212b has its CatchHandler @ 0018219c */
          FUN_001828b4();
          __cxa_atexit(FUN_00182864,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ad0
                       ,&PTR_LOOP_001e77b0);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ad8
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00181ed0 to 00181ee3 has its CatchHandler @ 001821c8 */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,
                   *(RawProps **)
                    PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ad0
                   ,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_00181f1c:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_00181f1c;
        }
        if (plVar9 != (long *)0x0) goto LAB_00181f30;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00181e84 to 00181e97 has its CatchHandler @ 001821f0 */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,(RawProps *)*param_4,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_00181f30;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_00181f30:
        lVar11 = FUN_001735f0(0xffffffffffffffff,plVar9 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 00181e4c to 00181e57 has its CatchHandler @ 001821c4 */
      __s2 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar7 = strcmp(PTR_RNSScreenNavigationContainerComponentName_001f0be8,__s2);
      if (iVar7 != 0) goto LAB_00181e68;
      bVar3 = false;
    }
                    /* try { // try from 00181f5c to 00181f5f has its CatchHandler @ 0018226c */
    param_2 = facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter();
    if ((param_2 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 00181f6c to 00181f87 has its CatchHandler @ 001821ec */
        param_2 = folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar9 + 7));
      }
      else {
        param_2 = facebook::react::RawProps::operator_cast_to_dynamic((RawProps *)param_5);
      }
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 001820c8 to 001820d7 has its CatchHandler @ 001821e4 */
                    /* WARNING: Subroutine does not return */
          FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
        }
        goto LAB_001822b8;
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 001820a8 to 001820b7 has its CatchHandler @ 00182278 */
                    /* WARNING: Subroutine does not return */
            FUN_00172ea4(*(undefined8 *)PTR_name_001f0bb0);
          }
          goto LAB_001822b8;
        }
        uVar1 = 0x811c9dc5;
        uVar8 = (ulong)(*(byte *)(plVar5 + 3) >> 1);
        pRVar6 = (RawValue *)((long)plVar5 + 0x19);
        pRVar4 = (RawValue *)((long)plVar5 + 0x19);
        if ((*(byte *)(plVar5 + 3) & 1) != 0) {
          uVar8 = plVar5[4];
          pRVar6 = (RawValue *)plVar5[5];
          pRVar4 = (RawValue *)plVar5[5];
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar1 = (uVar1 ^ (int)(char)*pRVar6) * 0x1000193;
          pRVar6 = pRVar6 + 1;
        }
                    /* try { // try from 00182008 to 00182013 has its CatchHandler @ 00182280 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 00182018 to 0018202f has its CatchHandler @ 00182284 */
        param_2 = facebook::react::HostPlatformViewProps::setProp
                            ((PropsParserContext *)this,(uint)param_3,(char *)(ulong)uVar1,pRVar4);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 00182040 to 0018204b has its CatchHandler @ 00182274 */
          param_2 = (*(code *)(&PTR_FUN_001e82f8)[local_a0])(&uStack_d1,local_d0);
        }
      }
      param_2 = folly::dynamic::destroy();
    }
    param_1[1] = plVar9;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_001822b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


// ===== 001822bc  FUN_001822bc =====

void FUN_001822bc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 001822c4  FUN_001822c4 =====

void FUN_001822c4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 001822cc  FUN_001822cc =====

void FUN_001822cc(undefined8 *param_1,long param_2,long param_3)

{
  EventEmitter *pEVar1;
  ShadowNodeFamily *pSVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ShadowNodeFamily *local_b0;
  undefined8 *local_a8;
  EventEmitter *local_a0;
  long *plStack_98;
  EventEmitter *local_90;
  long *local_88;
  undefined8 local_80;
  long local_78;
  EventEmitter *local_70;
  long *plStack_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_0017dbe4(&local_a0,param_3 + 8,param_3 + 4);
                    /* try { // try from 00182310 to 00182317 has its CatchHandler @ 001825f0 */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_001e8f28;
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  pEVar1 = (EventEmitter *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  plStack_68 = plStack_98;
  local_70 = local_a0;
  local_a0 = (EventEmitter *)0x0;
  plStack_98 = (long *)0x0;
  if (local_78 != 0) {
    FUN_00174090(1,local_78 + 0x10);
  }
                    /* try { // try from 00182354 to 00182363 has its CatchHandler @ 001825c4 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_001e8610;
                    /* try { // try from 00182370 to 00182377 has its CatchHandler @ 001825b4 */
  puVar6 = (undefined8 *)operator_new(0x58);
  *puVar6 = &PTR_FUN_001e8630;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[4] = 0;
  puVar6[3] = 0;
  plVar5[0xb] = (long)(puVar6 + 3);
  plVar5[0xc] = (long)puVar6;
  puVar6[6] = 0;
  puVar6[5] = 0;
  puVar6[8] = 0;
  puVar6[7] = 0;
  *(undefined8 *)((long)puVar6 + 0x4c) = 0;
  *(undefined8 *)((long)puVar6 + 0x44) = 0;
  plVar5[3] = (long)&PTR_FUN_001e8f78;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00182424 to 0018242b has its CatchHandler @ 001825a4 */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  *puVar6 = &PTR_FUN_001e86f0;
  pSVar2 = (ShadowNodeFamily *)(puVar6 + 4);
  puVar6[1] = 0;
  puVar6[2] = 0;
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00174090(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00174090(1,local_78 + 0x10);
  }
                    /* try { // try from 00182474 to 0018248b has its CatchHandler @ 00182574 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = puVar6;
  local_b0 = pSVar2;
  local_a8 = puVar6;
  FUN_00174090(1,puVar6 + 2);
                    /* try { // try from 001824e0 to 001824eb has its CatchHandler @ 00182554 */
  facebook::react::EventEmitter::setShadowNodeFamily(pEVar1,&local_b0);
  if (local_a8 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00182618  FUN_00182618 =====

void FUN_00182618(void)

{
  return;
}


// ===== 0018261c  FUN_0018261c =====

void FUN_0018261c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0018266c  FUN_0018266c =====

void FUN_0018266c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e8d70;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0018267c  FUN_0018267c =====

void FUN_0018267c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e8d70;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001826ac  FUN_001826ac =====

void FUN_001826ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001826b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 001826b8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 001826bc  FUN_001826bc =====

void FUN_001826bc(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_001f09e8 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_00173ffc(param_1 + 0x23);
  FUN_00173f00(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018277c  FUN_0018277c =====

void FUN_0018277c(long param_1)

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


// ===== 001827e4  FUN_001827e4 =====

bool FUN_001827e4(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 001827fc  FUN_001827fc =====

bool FUN_001827fc(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 00182814  FUN_00182814 =====

void FUN_00182814(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00182864  FUN_00182864 =====

void FUN_00182864(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001828b4  FUN_001828b4 =====

void FUN_001828b4(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x6f8);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_001e8e88;
  memset(__s,0,0x6e0);
                    /* try { // try from 001828f0 to 00182903 has its CatchHandler @ 00182970 */
  FUN_0017cb10(__s,PTR_PTR_001f0bf8 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x5f4) = 0;
  *(undefined1 *)(puVar2 + 0xbf) = 0;
  *(undefined1 *)(puVar2 + 0xcb) = 0;
  *(undefined1 *)(puVar2 + 0xcc) = 0;
  *(undefined1 *)(puVar2 + 0xd8) = 0;
  *(undefined1 *)(puVar2 + 0xda) = 0;
  *(undefined1 *)((long)puVar2 + 0x6d4) = 0;
  *(undefined1 *)(puVar2 + 0xdb) = 0;
  *(undefined1 *)((long)puVar2 + 0x6dc) = 0;
  *(undefined1 *)(puVar2 + 0xdc) = 0;
  *(undefined1 *)((long)puVar2 + 0x6e4) = 0;
  *(undefined1 *)(puVar2 + 0xdd) = 0;
  *(undefined1 *)((long)puVar2 + 0x6ec) = 0;
  *(undefined1 *)(puVar2 + 0xde) = 0;
  puVar1 = PTR_vtable_001f0bf0;
  *(undefined1 *)((long)puVar2 + 0x6f4) = 0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ad0
  ;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 0018298c  FUN_0018298c =====

void FUN_0018298c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e8e88;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0018299c  FUN_0018299c =====

void FUN_0018299c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e8e88;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001829cc  FUN_001829cc =====

void FUN_001829cc(long param_1)

{
  FUN_0017d0e8(param_1 + 0x18,PTR_PTR_001f0bf8 + 8);
  return;
}


// ===== 001829e0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 001829e4  FUN_001829e4 =====

void FUN_001829e4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e8ed8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 001829f4  FUN_001829f4 =====

void FUN_001829f4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e8ed8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00182a24  FUN_00182a24 =====

void FUN_00182a24(long param_1)

{
  FUN_0017d0e8(param_1 + 0x18,PTR_PTR_001f0bf8 + 8);
  return;
}


// ===== 00182a38  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 00182a3c  FUN_00182a3c =====

void FUN_00182a3c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00182a8c  FUN_00182a8c =====

void FUN_00182a8c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e8f28;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00182a9c  FUN_00182a9c =====

void FUN_00182a9c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e8f28;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00182acc  FUN_00182acc =====

void FUN_00182acc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00182ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00182ad8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 00182adc  FUN_00182adc =====

void FUN_00182adc(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_001e8610;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_001e8680;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 00182b8c  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_27RNSScreenStackComponentNameEEEENS0_19RNSScreenStackPropsENS0_26RNSScreenStackEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_27RNSScreenStackComponentNameEEEENS0_19RNSScreenStackPropsENS0_26RNSScreenStackEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ComponentDescriptor *this;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined4 local_fe0 [2];
  undefined8 *local_fd8;
  void *local_fd0;
  void *pvStack_fc8;
  undefined8 local_fc0;
  void *pvStack_fb8;
  void *local_fb0;
  undefined8 uStack_fa8;
  void *local_fa0;
  void *pvStack_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined *local_f80;
  undefined8 uStack_f78;
  undefined8 local_f70;
  undefined8 uStack_f68;
  undefined4 local_f60 [2];
  undefined8 local_f58;
  undefined8 uStack_f50;
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined4 local_f38;
  undefined4 local_f30;
  undefined1 local_f2c;
  undefined8 local_f2b;
  undefined8 local_f23;
  undefined8 uStack_f1b;
  undefined8 local_f13;
  undefined8 uStack_f0b;
  undefined8 local_f03;
  undefined8 uStack_efb;
  undefined8 local_ef3;
  undefined6 uStack_eeb;
  undefined2 uStack_ee5;
  undefined6 uStack_ee3;
  undefined8 uStack_edd;
  undefined4 local_ed5;
  undefined8 local_ed1;
  undefined1 local_ec9;
  undefined1 uStack_ec8;
  undefined7 uStack_ec7;
  undefined8 uStack_ec0;
  undefined8 uStack_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined8 local_e78;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  undefined8 local_e60;
  undefined8 local_e58;
  undefined8 uStack_e50;
  undefined8 local_e48;
  undefined4 uStack_e40;
  undefined4 uStack_e3c;
  undefined4 uStack_e38;
  undefined4 uStack_e34;
  undefined4 uStack_e30;
  undefined4 uStack_e2c;
  undefined8 local_e28;
  undefined8 uStack_e20;
  undefined4 local_e18;
  undefined1 local_e14;
  undefined4 local_e10;
  undefined1 local_e0c;
  undefined4 local_e08;
  undefined1 local_e04;
  undefined4 local_e00;
  undefined1 local_dfc;
  undefined4 local_df8;
  undefined1 local_df4;
  undefined4 local_df0;
  undefined1 local_dec;
  undefined4 local_de8;
  undefined1 local_de4;
  undefined4 local_de0;
  undefined1 local_ddc;
  undefined4 local_dd8;
  undefined1 local_dd4;
  undefined4 local_dd0;
  undefined1 local_dcc;
  undefined4 local_dc8;
  undefined1 local_dc4;
  undefined4 local_dc0;
  undefined1 local_dbc;
  undefined4 local_db8;
  undefined1 local_db4;
  undefined4 local_db0;
  undefined1 local_dac;
  undefined4 local_da8;
  undefined1 local_da4;
  undefined4 local_da0;
  undefined1 local_d9c;
  undefined1 local_d98;
  undefined1 local_d94;
  undefined1 local_d88;
  undefined8 local_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 local_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined1 uStack_d48;
  undefined7 local_d47;
  undefined1 uStack_d40;
  undefined8 uStack_d3f;
  undefined8 local_d34;
  undefined8 uStack_d2c;
  undefined8 uStack_d24;
  undefined8 uStack_d1c;
  undefined8 local_d14;
  undefined8 uStack_d0c;
  undefined8 uStack_d04;
  undefined8 uStack_cfc;
  undefined8 local_cf4;
  undefined8 uStack_cec;
  undefined8 uStack_ce4;
  undefined5 uStack_cdc;
  undefined3 local_cd7;
  undefined5 uStack_cd4;
  undefined1 local_ccc;
  undefined1 local_cc8;
  undefined1 local_cc4;
  undefined1 local_cc0;
  undefined1 local_cbc;
  undefined1 local_cb8;
  undefined1 local_ca0;
  undefined8 local_c98;
  undefined8 uStack_c90;
  undefined8 local_c88;
  undefined4 local_c80;
  undefined1 local_c7c;
  undefined4 local_c7b;
  undefined1 local_c77;
  undefined1 local_c76;
  undefined8 local_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 local_c50;
  undefined7 uStack_c48;
  undefined4 uStack_c41;
  undefined8 local_c3c;
  undefined1 local_c34;
  undefined1 local_c2c;
  undefined1 local_c28;
  undefined1 local_c20;
  undefined1 local_c1c;
  undefined1 local_c14;
  undefined1 local_c10;
  undefined1 local_c08;
  undefined1 local_c04;
  undefined1 local_bfc;
  undefined1 local_bf8;
  undefined1 local_bf0;
  undefined1 local_bec;
  undefined1 local_be4;
  undefined1 local_be0;
  undefined1 local_bd8;
  undefined1 local_bd4;
  undefined1 local_bcc;
  undefined1 local_bc8;
  undefined1 local_bc0;
  undefined1 local_bbc;
  undefined1 local_bb4;
  undefined1 local_bb0;
  undefined1 local_ba8;
  undefined1 local_ba4;
  undefined1 local_b9c;
  undefined1 local_b98;
  undefined1 local_b94;
  undefined1 local_b90;
  undefined1 local_b8c;
  undefined1 local_b88;
  undefined1 local_b84;
  undefined1 local_b80;
  undefined1 local_b7c;
  undefined1 local_b78;
  undefined1 local_b74;
  undefined1 local_b70;
  undefined1 local_b6c;
  undefined1 local_b68;
  undefined1 local_b64;
  undefined1 local_b60;
  undefined1 local_b5c;
  undefined1 local_b58;
  undefined1 local_b54;
  undefined1 local_b50;
  undefined1 local_b4c;
  undefined1 local_b48;
  undefined1 local_b44;
  undefined1 local_b40;
  undefined1 local_b3c;
  undefined8 local_b38;
  undefined8 uStack_b30;
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined2 local_b08;
  undefined8 local_b04;
  undefined1 local_afc;
  undefined8 local_af8;
  undefined8 local_af0;
  undefined8 uStack_ae8;
  undefined1 local_ae0;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  undefined8 uStack_a00;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined6 uStack_9e0;
  undefined2 uStack_9da;
  undefined6 uStack_9d8;
  undefined1 local_9d0;
  undefined1 local_9cc;
  undefined1 local_9c8;
  undefined8 local_9c4;
  undefined8 uStack_9bc;
  undefined1 local_9b4;
  undefined8 local_9b0;
  undefined2 local_9a8;
  undefined1 local_9a6;
  undefined4 local_9a4;
  undefined1 local_9a0;
  undefined1 local_940;
  undefined1 local_938;
  undefined1 local_8d8;
  undefined4 local_8d0;
  undefined2 local_8cc;
  undefined1 local_8c8;
  undefined1 local_8c4;
  undefined1 local_8c0;
  undefined1 local_8bc;
  undefined1 local_8b8;
  undefined1 local_8b4;
  undefined1 local_8b0;
  undefined1 local_8ac;
  undefined1 local_8a8;
  undefined1 local_8a4;
  undefined4 local_8a0;
  undefined4 local_898 [2];
  undefined8 local_890;
  undefined8 uStack_888;
  undefined8 local_880;
  undefined8 local_878;
  undefined8 uStack_870;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  void *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0 [4];
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_a0;
  void *local_98;
  void *pvStack_90;
  undefined8 local_88;
  void *pvStack_80;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_fb8 = (void *)0x0;
  local_fc0 = 0;
  uStack_fa8 = 0;
  local_fb0 = (void *)0x0;
  pvStack_f98 = (void *)0x0;
  local_fa0 = (void *)0x0;
  uStack_f88 = 0;
  uStack_f90 = 0;
  pvStack_fc8 = (void *)0x0;
  local_fd0 = (void *)0x0;
                    /* try { // try from 00182bdc to 00182be7 has its CatchHandler @ 00183214 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_fd0);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_001e8fb0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0[0] = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_a0 = 0;
  pvStack_90 = (void *)0x0;
  local_98 = (void *)0x0;
  pvStack_80 = (void *)0x0;
  local_88 = 0;
  uStack_70 = 0;
  local_78 = (void *)0x0;
  local_100 = 0;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
                    /* try { // try from 00182c58 to 00182c63 has its CatchHandler @ 00183244 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_fe0[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_fd8 = &local_1b0;
  facebook::react::RawProps::parse((RawPropsParser *)&local_f8);
  memset(local_f60,0,0x6c8);
  local_898[0] = 5;
  local_880 = 0;
  local_f80 = PTR_construction_vtable_001f0e28 + 0x20;
  local_f60[0] = 5;
  uStack_f68 = 0;
  local_f70 = 0;
  uStack_f78 = 0;
  local_878 = 0;
  uStack_870 = 0x3f800000;
  uStack_888 = 0;
  local_890 = 0;
  uStack_f50 = 0;
  local_f58 = 0;
  uStack_f40 = 0;
  local_f48 = 0;
  local_f38 = 0x3f800000;
  folly::dynamic::destroy();
  local_f2c = 0;
  local_ed1 = 0;
  uStack_9f0 = _UNK_00142624;
  local_9f8 = _DAT_0014261c;
  local_f2b = DAT_001423b8;
  uStack_ae8 = _UNK_001423f8;
  local_af0 = _DAT_001423f0;
  uStack_a00 = _UNK_00142614;
  local_a08 = _DAT_0014260c;
  local_e14 = 0;
  uStack_a10 = _UNK_00142604;
  local_a18 = _DAT_001425fc;
  uStack_a20 = _UNK_001425f4;
  local_a28 = _DAT_001425ec;
  uStack_9d8 = 0;
  local_e0c = 0;
  uStack_e40 = 0;
  local_e48 = 0;
  uStack_e2c = 0;
  uStack_e50 = 0;
  local_e58 = 0;
  uStack_9e0 = 0;
  uStack_9da = 0;
  local_9e8 = 0;
  local_f30 = 0x10410710;
  local_ed5 = 0x40004;
  uStack_e34 = 0;
  uStack_e30 = 0;
  uStack_e3c = 0;
  uStack_e38 = 0;
  uStack_e20 = 0;
  local_e28 = 0;
  local_e18 = 0x7fc00000;
  local_e10 = 0x7fc00000;
  local_e08 = 0x7fc00000;
  local_e00 = 0x7fc00000;
  local_df8 = 0x7fc00000;
  local_df0 = 0x7fc00000;
  local_de8 = 0x7fc00000;
  local_de0 = 0x7fc00000;
  local_dd8 = 0x7fc00000;
  local_dd0 = 0x7fc00000;
  local_dc8 = 0x7fc00000;
  local_dc0 = 0x7fc00000;
  local_db8 = 0x7fc00000;
  local_db0 = 0x7fc00000;
  local_da8 = 0x7fc00000;
  local_da0 = 0x7fc00000;
  uStack_d3f = 0;
  uStack_d40 = 0;
  uStack_d2c = 0;
  local_d34 = 0;
  uStack_d1c = 0;
  uStack_d24 = 0;
  uStack_d0c = 0;
  local_d14 = 0;
  uStack_cfc = 0;
  uStack_d04 = 0;
  uStack_cec = 0;
  local_cf4 = 0;
  uStack_cdc = 0;
  uStack_ce4 = 0;
  local_cd7 = 0;
  uStack_cd4 = 0;
  local_c7c = 1;
  local_c7b = 0;
  local_c76 = 0x23;
  local_c3c = 0x3f800000;
  uStack_b20 = 0;
  local_b28 = 0;
  uStack_b10 = 0;
  uStack_b18 = 0;
  uStack_b30 = 0;
  local_b38 = 0;
  local_b04 = 0;
  uStack_ad0 = 0;
  local_ad8 = 0;
  uStack_ac0 = 0;
  uStack_ac8 = 0;
  uStack_ab0 = 0;
  local_ab8 = 0;
  uStack_aa0 = 0;
  uStack_aa8 = 0;
  uStack_a90 = 0;
  local_a98 = 0;
  uStack_a80 = 0;
  uStack_a88 = 0;
  uStack_a70 = 0;
  local_a78 = 0;
  uStack_a60 = 0;
  uStack_a68 = 0;
  uStack_a50 = 0;
  local_a58 = 0;
  uStack_a40 = 0;
  uStack_a48 = 0;
  uStack_a30 = 0;
  local_a38 = 0;
  uStack_ec7 = 0;
  uStack_f1b = 0;
  local_f23 = 0;
  uStack_f0b = 0;
  local_f13 = 0;
  uStack_efb = 0;
  local_f03 = 0;
  uStack_eeb = 0;
  local_ef3 = 0;
  uStack_edd = 0;
  uStack_ee5 = 0;
  uStack_ee3 = 0;
  local_ec9 = 0;
  uStack_ec8 = 0;
  uStack_eb8 = 0;
  uStack_ec0 = 0;
  local_ea8 = 0;
  uStack_eb0 = 0;
  local_e98 = 0;
  uStack_ea0 = 0;
  local_e88 = 0;
  uStack_e90 = 0;
  local_e78 = 0;
  uStack_e80 = 0;
  uStack_e68 = 0;
  uStack_e70 = 0;
  local_e60 = 0;
  local_e04 = 0;
  local_dfc = 0;
  local_df4 = 0;
  local_dec = 0;
  local_de4 = 0;
  local_ddc = 0;
  local_dd4 = 0;
  local_dcc = 0;
  local_dc4 = 0;
  local_dbc = 0;
  local_db4 = 0;
  local_dac = 0;
  local_da4 = 0;
  local_d9c = 0;
  local_d98 = 0;
  local_d94 = 0;
  local_d88 = 0;
  local_ccc = 0;
  local_cc8 = 0;
  local_cc4 = 0;
  local_cc0 = 0;
  local_cbc = 0;
  local_cb8 = 0;
  local_ca0 = 0;
  uStack_d78 = 0;
  local_d80 = 0;
  uStack_d68 = 0;
  uStack_d70 = 0;
  uStack_d58 = 0;
  local_d60 = 0;
  uStack_d48 = 0;
  local_d47 = 0;
  uStack_d50 = 0;
  uStack_c90 = 0;
  local_c98 = 0;
  local_c88 = 0;
  local_c80 = 0;
  local_c77 = 0;
  uStack_c68 = 0;
  local_c70 = 0;
  uStack_c58 = 0;
  uStack_c60 = 0;
  uStack_c48 = 0;
  uStack_c41 = 0;
  local_c50 = 0;
  local_c34 = 0;
  local_c2c = 0;
  local_c28 = 0;
  local_c20 = 0;
  local_c1c = 0;
  local_c14 = 0;
  local_c10 = 0;
  local_c08 = 0;
  local_c04 = 0;
  local_bfc = 0;
  local_bf8 = 0;
  local_bf0 = 0;
  local_bec = 0;
  local_be4 = 0;
  local_be0 = 0;
  local_bd8 = 0;
  local_bd4 = 0;
  local_bcc = 0;
  local_bc8 = 0;
  local_bc0 = 0;
  local_bbc = 0;
  local_bb4 = 0;
  local_bb0 = 0;
  local_ba8 = 0;
  local_ba4 = 0;
  local_b9c = 0;
  local_b98 = 0;
  local_b94 = 0;
  local_b90 = 0;
  local_b8c = 0;
  local_b88 = 0;
  local_b84 = 0;
  local_b80 = 0;
  local_b7c = 0;
  local_b78 = 0;
  local_b74 = 0;
  local_b70 = 0;
  local_b6c = 0;
  local_b68 = 0;
  local_b64 = 0;
  local_b60 = 0;
  local_b5c = 0;
  local_b58 = 0;
  local_b54 = 0;
  local_b50 = 0;
  local_b4c = 0;
  local_b48 = 0;
  local_b44 = 0;
  local_b40 = 0;
  local_b3c = 0;
  local_af8 = 0;
  local_b08 = 0;
  local_afc = 0;
  local_ae0 = 0;
  local_9d0 = 0;
  local_9cc = 0;
  local_9c8 = 0;
  local_9b0 = 0;
  uStack_9bc = 0;
  local_9c4 = 0;
  local_9b4 = 0;
  local_9a8 = 0x101;
  local_9a6 = 0;
  local_9a4 = 0;
  local_9a0 = 0;
  local_940 = 0;
  local_938 = 0;
  local_8d8 = 0;
  local_8c8 = 0;
  local_8c4 = 0;
  local_8c0 = 0;
  local_8bc = 0;
  local_8b8 = 0;
  local_8b4 = 0;
  local_8b0 = 0;
  local_8ac = 0;
  local_8a8 = 0;
  local_8a4 = 0;
  local_8cc = 0;
  local_8d0 = 0;
  local_f80 = PTR_vtable_001f0c08 + 0x20;
  local_8a0 = 0;
                    /* try { // try from 00183050 to 00183063 has its CatchHandler @ 00183244 */
  facebook::react::RNSScreenStackProps::RNSScreenStackProps
            ((RNSScreenStackProps *)local_898,(PropsParserContext *)local_fe0,
             (RNSScreenStackProps *)&local_f80,(RawProps *)&local_f8);
  puVar5 = PTR_PTR_001f0c10;
  FUN_0017d0e8(local_898,PTR_PTR_001f0c10 + 8);
  FUN_0017d0e8(&local_f80,puVar5 + 8);
  facebook::react::RawPropsParser::postPrepare();
  pvVar3 = local_120;
  puVar4 = (undefined8 *)local_110;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_120 = pvVar3;
    if ((plVar7 == (long *)0x0) || (lVar6 = FUN_001735f0(0xffffffffffffffff,plVar7 + 1), lVar6 != 0)
       ) {
      bVar1 = *(byte *)(puVar4 + 2);
    }
    else {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
      bVar1 = *(byte *)(puVar4 + 2);
    }
    if ((bVar1 & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
    operator_delete(puVar4);
    pvVar3 = local_120;
    puVar4 = (undefined8 *)pvVar8;
  }
  local_120 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_158);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_188);
  std::__ndk1::mutex::~mutex((mutex *)&local_1b0);
  pvVar8 = pvStack_80;
  pvVar3 = local_78;
  if (pvStack_80 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 00183170 to 0018317b has its CatchHandler @ 00183248 */
        (*(code *)(&PTR_FUN_001e82f8)[*(uint *)((long)pvVar3 + -8)])
                  (&local_f80,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_78 = pvVar8;
    operator_delete(pvStack_80);
  }
  if (local_98 != (void *)0x0) {
    pvStack_90 = local_98;
    operator_delete(local_98);
  }
  folly::dynamic::destroy();
  facebook::jsi::Value::~Value((Value *)local_e0);
  if (local_fa0 != (void *)0x0) {
    pvStack_f98 = local_fa0;
    operator_delete(local_fa0);
  }
  if (pvStack_fb8 != (void *)0x0) {
    local_fb0 = pvStack_fb8;
    operator_delete(pvStack_fb8);
  }
  if (local_fd0 != (void *)0x0) {
    pvStack_fc8 = local_fd0;
    operator_delete(local_fd0);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018324c  FUN_0018324c =====

void FUN_0018324c(void *param_1)

{
  FUN_0019330c();
  operator_delete(param_1);
  return;
}


// ===== 00183270  FUN_00183270 =====

undefined * FUN_00183270(void)

{
  return PTR_RNSScreenStackComponentName_001f0c00;
}


// ===== 0018327c  FUN_0018327c =====

undefined * FUN_0018327c(void)

{
  return PTR_RNSScreenStackComponentName_001f0c00;
}


// ===== 00183288  FUN_00183288 =====

undefined8 FUN_00183288(void)

{
  return 0x61;
}


// ===== 00183290  FUN_00183290 =====

void FUN_00183290(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar4 = tpidr_el0;
  lVar9 = *(long *)(lVar4 + 0x28);
  uVar5 = (**(code **)(*param_2 + 0x20))();
  puVar6 = (undefined8 *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_001e9040;
                    /* try { // try from 001832fc to 0018330b has its CatchHandler @ 001833e4 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_001e9090;
  uVar3 = *(uint *)((long)puVar6 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar5 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar5;
  lVar8 = *param_2;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar7 + 0x6b0) != '\0' || *(char *)(lVar7 + 0x6b1) != '\0') ||
             *(char *)(lVar7 + 0x1e8) != '\0') << 0xb;
                    /* try { // try from 00183398 to 001833a3 has its CatchHandler @ 001833d4 */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00183414  FUN_00183414 =====

void FUN_00183414(undefined8 *param_1,long *param_2,shared_ptr *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  YogaLayoutableShadowNode *local_78;
  long *local_70;
  YogaLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar5 = (long *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_001e9040;
                    /* try { // try from 0018346c to 0018347b has its CatchHandler @ 001835bc */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            (pYVar1,(ShadowNode *)param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_001e9090;
  uVar3 = *(uint *)((long)plVar5 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar6 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar5 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar6 + 0x50) & 0x30000000) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    if (*(char *)(lVar6 + 0x5b4) != '\0') {
      uVar7 = *(undefined4 *)(lVar6 + 0x5b0);
    }
  }
  *(undefined4 *)(plVar5 + 10) = uVar7;
  *(uint *)((long)plVar5 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar6 + 0x6b0) != '\0' || *(char *)(lVar6 + 0x6b1) != '\0') ||
             *(char *)(lVar6 + 0x1e8) != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar5;
                    /* try { // try from 00183500 to 0018350f has its CatchHandler @ 001835d4 */
  facebook::react::YogaLayoutableShadowNode::completeClone
            ((ShadowNode *)pYVar1,(ShadowNodeFragment *)param_3);
  local_78 = pYVar1;
  local_70 = plVar5;
  FUN_00174090(1,plVar5 + 1);
                    /* try { // try from 00183520 to 0018352f has its CatchHandler @ 001835ac */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar6 = FUN_001735f0(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 0018356c to 00183577 has its CatchHandler @ 001835d4 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001835fc  FUN_001835fc =====

void FUN_001835fc(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0018360c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


