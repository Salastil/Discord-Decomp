// ===== 0010a0d0  _FINI_1 =====

void _FINI_1(void)

{
  __cxa_finalize(&PTR_LOOP_00116b00);
  return;
}


// ===== 0010a0e0  FUN_0010a0e0 =====

void FUN_0010a0e0(void)

{
  return;
}


// ===== 0010a0e8  _FINI_0 =====

void _FINI_0(void)

{
  FUN_0010a0e0();
  return;
}


// ===== 0010a0f0  FUN_0010a0f0 =====

void FUN_0010a0f0(code *UNRECOVERED_JUMPTABLE)

{
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010a0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


// ===== 0010a104  FUN_0010a104 =====

void FUN_0010a104(undefined8 param_1)

{
  __cxa_atexit(FUN_0010a0f0,param_1,&PTR_LOOP_00116b00);
  return;
}


// ===== 0010a120  FUN_0010a120 =====

void FUN_0010a120(void)

{
  __register_atfork();
  return;
}


// ===== 0010a130  FUN_0010a130 =====

undefined8 FUN_0010a130(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_80 [24];
  code *local_68;
  long local_38;
  
  FUN_0010a478(param_2,param_1);
  iVar2 = FUN_0010a59c(param_2);
  while( true ) {
    if (iVar2 == 0) {
      return 5;
    }
    if (iVar2 < 0) break;
    FUN_0010a520(param_2,0xfffffffe,&local_38);
    iVar2 = FUN_0010a5b0(param_2,auStack_80);
    if (iVar2 != 0) {
      return 2;
    }
    if (local_68 != (code *)0x0) {
      uVar3 = 6;
      if (local_38 != param_3[3]) {
        uVar3 = 2;
      }
      iVar2 = (*local_68)(1,uVar3,*param_3,param_3,param_2);
      puVar1 = PTR___sF_00117388;
      if (iVar2 != 8) {
        if (iVar2 != 7) {
          return 2;
        }
        FUN_0010a5f0(param_2);
        return 2;
      }
      if (local_38 == param_3[3]) {
        fprintf((FILE *)(PTR___sF_00117388 + 0x130),"libunwind: %s - %s\n","unwind_phase2",
                "during phase1 personality function said it would stop here, but now in phase2 it did not stop here"
               );
        fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    iVar2 = FUN_0010a59c(param_2);
  }
  return 2;
}


// ===== 0010a264  FUN_0010a264 =====

void FUN_0010a264(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_4a0 [624];
  undefined1 auStack_230 [528];
  
  FUN_0010a3dc(auStack_230);
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_0010a130(auStack_230,auStack_4a0,param_1);
  }
  else {
    FUN_0010a2e8(auStack_230,auStack_4a0,param_1,*(long *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = PTR___sF_00117388;
  fprintf((FILE *)(PTR___sF_00117388 + 0x130),"libunwind: %s - %s\n","_Unwind_Resume",
          "_Unwind_Resume() can\'t return");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0010a2e8  FUN_0010a2e8 =====

void FUN_0010a2e8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,code *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_78 [24];
  code *local_60;
  
  FUN_0010a478(param_2,param_1);
  iVar1 = FUN_0010a59c(param_2);
  while( true ) {
    if (iVar1 < 1) {
      (*param_4)(1,0x1a,*param_3,param_3,param_2,param_5);
      return;
    }
    iVar1 = FUN_0010a5b0(param_2,auStack_78);
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
      FUN_0010a5f0(param_2);
    }
    iVar1 = FUN_0010a59c(param_2);
  }
  return;
}


// ===== 0010a3dc  FUN_0010a3dc =====

undefined8
FUN_0010a3dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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


// ===== 0010a478  FUN_0010a478 =====

undefined8 FUN_0010a478(undefined8 *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = &PTR_FUN_00116b18;
  param_1[1] = &DAT_0011b690;
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
  FUN_0010ae40(param_1,0);
  return 0;
}


// ===== 0010a520  FUN_0010a520 =====

undefined8 FUN_0010a520(long *param_1,undefined4 param_2,undefined8 *param_3)

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


// ===== 0010a59c  FUN_0010a59c =====

void FUN_0010a59c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010a5ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,1);
  return;
}


// ===== 0010a5b0  FUN_0010a5b0 =====

undefined4 FUN_0010a5b0(long *param_1,long param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x48))();
  uVar1 = 0xffffe66b;
  if (*(long *)(param_2 + 8) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 0010a5f0  FUN_0010a5f0 =====

undefined8 FUN_0010a5f0(long *param_1)

{
  (**(code **)(*param_1 + 0x50))();
  return 0xffffe674;
}


// ===== 0010a618  FUN_0010a618 =====

char * FUN_0010a618(undefined8 param_1,uint *param_2,undefined8 *param_3,long *param_4,ulong param_5
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
      pcVar7 = (char *)FUN_0010a7a8(param_1,lVar8,param_4);
      if (pcVar7 != (char *)0x0) {
        return pcVar7;
      }
    }
    else if (*param_4 != lVar8) {
      return "CIE start does not match";
    }
    lVar8 = (long)puVar10 + uVar9;
    local_48 = puVar10 + 1;
    lVar3 = FUN_0010c600(param_1,&local_48,lVar8,(char)param_4[3],0);
    lVar4 = FUN_0010c600(param_1,&local_48,lVar8,*(byte *)(param_4 + 3) & 0xf,0);
    cVar1 = *(char *)((long)param_4 + 0x31);
    param_3[5] = 0;
    puVar10 = local_48;
    if (cVar1 != '\0') {
      lVar5 = FUN_0010c98c(&local_48,lVar8);
      puVar2 = local_48;
      puVar10 = (uint *)((long)local_48 + lVar5);
      if ((*(byte *)((long)param_4 + 0x19) != 0xff) &&
         (lVar5 = FUN_0010c600(param_1,&local_48,lVar8,*(byte *)((long)param_4 + 0x19) & 0xf,0),
         lVar5 != 0)) {
        local_48 = puVar2;
        uVar6 = FUN_0010c600(param_1,&local_48,lVar8,*(undefined1 *)((long)param_4 + 0x19),0);
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


// ===== 0010a7a8  FUN_0010a7a8 =====

char * FUN_0010a7a8(undefined8 param_1,uint *param_2,long *param_3)

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
      uVar7 = FUN_0010c98c(&local_48,pbVar1);
      uVar13 = 0;
      uVar14 = 0;
      *(undefined4 *)(param_3 + 5) = uVar7;
      puVar5 = PTR___sF_00117388;
      pbVar11 = local_48;
      pbVar15 = local_48;
      do {
        pbVar12 = pbVar11;
        if (pbVar15 == pbVar1) {
          fprintf((FILE *)(PTR___sF_00117388 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
        uVar6 = FUN_0010c98c(&local_48,pbVar1);
        *(undefined1 *)((long)param_3 + 0x32) = uVar6;
        bVar2 = *pbVar18;
      }
      if (bVar2 == 0x7a) {
        FUN_0010c98c(&local_48,pbVar1);
LAB_0010a928:
        bVar2 = *pbVar18;
        if (bVar2 < 0x50) {
          if (bVar2 < 0x47) {
            if (bVar2 != 0x42) {
              if (bVar2 != 0) goto LAB_0010a9c8;
              goto LAB_0010aa0c;
            }
            *(undefined1 *)((long)param_3 + 0x33) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_0010a928;
          }
          if (bVar2 == 0x47) {
            *(undefined1 *)((long)param_3 + 0x34) = 1;
            goto LAB_0010a9c8;
          }
          if (bVar2 == 0x4c) {
            pbVar18 = pbVar18 + 1;
            *(byte *)((long)param_3 + 0x19) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_0010a928;
          }
        }
        else if (bVar2 < 0x53) {
          if (bVar2 == 0x50) {
            bVar2 = *local_48;
            *(byte *)((long)param_3 + 0x1a) = bVar2;
            *(char *)((long)param_3 + 0x1b) = (char)(local_48 + 1) - (char)param_2;
            local_48 = local_48 + 1;
            lVar8 = FUN_0010c600(param_1,&local_48,pbVar1,bVar2,0);
            param_3[4] = lVar8;
            pbVar18 = pbVar18 + 1;
            goto LAB_0010a928;
          }
          if (bVar2 == 0x52) {
            pbVar18 = pbVar18 + 1;
            *(byte *)(param_3 + 3) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_0010a928;
          }
        }
        else {
          if (bVar2 == 0x53) {
            *(undefined1 *)(param_3 + 6) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_0010a928;
          }
          if (bVar2 == 0x7a) {
            *(undefined1 *)((long)param_3 + 0x31) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_0010a928;
          }
        }
LAB_0010a9c8:
        pbVar18 = pbVar18 + 1;
        goto LAB_0010a928;
      }
LAB_0010aa0c:
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


// ===== 0010aa70  FUN_0010aa70 =====

void FUN_0010aa70(void)

{
  return;
}


// ===== 0010aa78  FUN_0010aa78 =====

void FUN_0010aa78(void)

{
  return;
}


// ===== 0010aa80  FUN_0010aa80 =====

bool FUN_0010aa80(undefined8 param_1,uint param_2)

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


// ===== 0010aac4  FUN_0010aac4 =====

undefined8 FUN_0010aac4(long param_1,uint param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_00117388;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_0010ab2c:
      return *(undefined8 *)(param_1 + 0x108);
    }
    if (param_2 == 0xffffffff) goto LAB_0010ab20;
    if (param_2 == 0x1d) {
      return *(undefined8 *)(param_1 + 0xf8);
    }
  }
  else if ((int)param_2 < 0x20) {
    if (param_2 == 0x1e) {
      return *(undefined8 *)(param_1 + 0x100);
    }
    if (param_2 == 0x1f) goto LAB_0010ab2c;
  }
  else {
    if (param_2 == 0x22) {
      return *(undefined8 *)(param_1 + 0x118);
    }
    if (param_2 == 0x20) {
LAB_0010ab20:
      return *(undefined8 *)(param_1 + 0x110);
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_00117388 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8);
}


// ===== 0010abac  FUN_0010abac =====

void FUN_0010abac(long param_1,uint param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_00117388;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_0010ac14:
      *(undefined8 *)(param_1 + 0x108) = param_3;
      return;
    }
    if (param_2 == 0xffffffff) goto LAB_0010ac08;
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
    if (param_2 == 0x1f) goto LAB_0010ac14;
  }
  else {
    if (param_2 == 0x22) {
      *(undefined8 *)(param_1 + 0x118) = param_3;
      return;
    }
    if (param_2 == 0x20) {
LAB_0010ac08:
      *(undefined8 *)(param_1 + 0x110) = param_3;
      return;
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_00117388 + 0x130),"libunwind: %s - %s\n","setRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8) = param_3;
  return;
}


// ===== 0010ac94  FUN_0010ac94 =====

bool FUN_0010ac94(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffffffe0) == 0x40;
}


// ===== 0010aca8  FUN_0010aca8 =====

undefined1  [16] FUN_0010aca8(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + (long)param_2 * 8 + -0xe0);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 0010acb8  FUN_0010acb8 =====

void FUN_0010acb8(undefined8 param_1,long param_2,int param_3)

{
  *(undefined8 *)(param_2 + (long)param_3 * 8 + -0xe0) = param_1;
  return;
}


// ===== 0010acc8  FUN_0010acc8 =====

ulong FUN_0010acc8(long *param_1,uint param_2)

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
    uVar3 = FUN_0010b1ec(lVar1,uVar4,param_1[0x4b],param_1 + 2,(long)param_1 + 0x269,param_2 & 1);
    iVar2 = (int)uVar3;
  }
  else {
    memset(auStack_240,0,0x210);
    uVar3 = FUN_0010b0cc(param_1,auStack_240);
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


// ===== 0010adb8  FUN_0010adb8 =====

void FUN_0010adb8(long param_1,undefined8 *param_2)

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


// ===== 0010adfc  FUN_0010adfc =====

void FUN_0010adfc(long param_1)

{
  FUN_0010de94(param_1 + 0x10);
  return;
}


// ===== 0010ae08  FUN_0010ae08 =====

undefined1 FUN_0010ae08(long param_1)

{
  return *(undefined1 *)(param_1 + 0x269);
}


// ===== 0010ae14  FUN_0010ae14 =====

undefined8 FUN_0010ae14(long *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  return 0;
}


// ===== 0010ae40  FUN_0010ae40 =====

void FUN_0010ae40(long *param_1,ulong param_2)

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
  iVar1 = dl_iterate_phdr(FUN_0010d7e4,&local_648);
  if (((iVar1 == 0) || (local_668 == 0)) ||
     (uVar4 = FUN_0010d510(param_1,uVar7,auStack_678,0), (uVar4 & 1) == 0)) {
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_0011b694);
    for (puVar6 = PTR_DAT_0011b670; puVar6 < PTR_DAT_0011b678; puVar6 = puVar6 + 0x20) {
      if ((*(ulong *)(puVar6 + 8) <= uVar7) && (uVar7 < *(ulong *)(puVar6 + 0x10))) {
        lVar3 = *(long *)(puVar6 + 0x18);
        pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0011b694);
        if ((lVar3 != 0) &&
           (lVar3 = FUN_0010a618(param_1[1],lVar3,&local_6a8,local_6e0,0), lVar3 == 0)) {
          memset(&local_648,0,0x618);
          uVar7 = FUN_0010b674(param_1[1],&local_6a8,local_6e0,uVar7,4,&local_648);
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
        goto LAB_0010afc8;
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0011b694);
LAB_0010afc8:
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


// ===== 0010b0c0  FUN_0010b0c0 =====

void FUN_0010b0c0(undefined8 param_1,undefined4 param_2)

{
  FUN_0010de64(param_2);
  return;
}


// ===== 0010b0cc  FUN_0010b0cc =====

undefined8 FUN_0010b0cc(long param_1)

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


// ===== 0010b1ec  FUN_0010b1ec =====

undefined8
FUN_0010b1ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,
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
  
  lVar7 = FUN_0010a618(param_1,param_3,auStack_b0,auStack_e8,0);
  if (lVar7 == 0) {
    memset(auStack_700,0,0x618);
    uVar8 = FUN_0010b674(param_1,auStack_b0,auStack_e8,param_2,4,auStack_700);
    if ((uVar8 & 1) != 0) {
      uVar8 = FUN_0010c2bc(param_1,auStack_700,param_4);
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
        puVar3 = PTR___sF_00117388;
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
              goto LAB_0010b4cc;
            }
            else {
              puVar13 = (undefined8 *)((long)param_4 + 0x108);
              if ((local_b6 != 0x22) &&
                 ((puVar13 = (undefined8 *)((long)param_4 + 0x100), local_b6 != 0x20 &&
                  (puVar13 = (undefined8 *)((long)param_4 + 0xf8), local_b6 != 0x1f)))) {
LAB_0010b4cc:
                if (0x1c < local_b6) {
                  fprintf((FILE *)(PTR___sF_00117388 + 0x130),"libunwind: %s - %s\n","getRegister",
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
LAB_0010b5d8:
                  fprintf((FILE *)(PTR___sF_00117388 + 0x130),"libunwind: %s - %s\n",
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
              if (iVar2 != 6) goto LAB_0010b5d8;
              puVar9 = (ulong *)FUN_0010cb54(*(undefined8 *)(piVar15 + 2),param_1,param_4,uVar8);
              uVar18 = *puVar9;
            }
            local_a00[uVar12] = uVar18;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == local_b6) {
            uVar14 = FUN_0010c3f0(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == 0x22) {
            uVar10 = FUN_0010c3f0(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
          }
          else {
            if (0xffffffe0 < uVar16 - 0x40) {
              return 0xffffe672;
            }
            uVar11 = FUN_0010c3f0(param_1,param_4,uVar8,piVar15);
            puVar3 = PTR___sF_00117388;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
            if ((int)uVar16 < 0x1f) {
              uVar5 = uVar11;
              if ((uVar16 != 0x1d) && (uVar5 = local_a00[0x3b], uVar6 = uVar11, uVar16 != 0x1e))
              goto LAB_0010b520;
            }
            else {
              uVar18 = uVar11;
              if ((uVar16 != 0x1f) &&
                 ((uVar18 = local_a00[0x3d], uVar10 = uVar11, uVar16 != 0x22 &&
                  (uVar10 = local_a00[0x3f], uVar16 != 0x20)))) {
LAB_0010b520:
                if (0x1c < uVar12) {
                  fprintf((FILE *)(PTR___sF_00117388 + 0x130),"libunwind: %s - %s\n","setRegister",
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
            FUN_0010c3f0(param_1,auStack_b20,uVar8,&local_80);
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


// ===== 0010b674  FUN_0010b674 =====

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_0010b674(undefined8 param_1,long *param_2,long *param_3,long param_4,int param_5,
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
LAB_0010b6f8:
    lVar20 = lVar20 + 0x18;
    if (lVar20 == 0x30) {
      return 1;
    }
  }
  uVar17 = 0;
LAB_0010b728:
  puVar18 = local_6c0;
  puVar5 = PTR___sF_00117388;
  pbVar10 = pbVar21 + 1;
  bVar3 = *pbVar21;
  apbStack_6a0[0xc0] = pbVar10;
  switch((ulong)bVar3) {
  case 0:
    goto code_r0x0010bffc;
  case 1:
    uVar17 = FUN_0010c600(local_6c8,apbStack_6a0 + 0xc0,pbVar2,(char)param_3[3],0);
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 2:
    uVar9 = (uint)pbVar21[1];
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 2;
    goto LAB_0010bbb0;
  case 3:
    uVar9 = (uint)*(ushort *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 3;
    goto LAB_0010bbb0;
  case 4:
    uVar9 = *(uint *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 5;
LAB_0010bbb0:
    uVar17 = uVar17 + iVar13 * uVar9;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 5:
    uVar19 = FUN_0010c98c(apbStack_6a0 + 0xc0,pbVar2);
    lVar8 = FUN_0010c98c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended DWARF unwind, reg too big\n";
      __size = 0x46;
      __s = (FILE *)(PTR___sF_00117388 + 0x130);
      goto LAB_0010c1ac;
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
LAB_0010bb4c:
    puVar12[6] = 2;
    *(long *)(puVar12 + 8) = lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 6:
    uVar19 = FUN_0010c98c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_restore_extended DWARF unwind, reg too big\n";
LAB_0010c09c:
      __s = (FILE *)(PTR___sF_00117388 + 0x130);
      __size = 0x47;
      goto LAB_0010c1ac;
    }
    cVar4 = *(char *)(param_6 + uVar19 * 4 + 7);
joined_r0x0010bfdc:
    if (cVar4 != '\0') {
      pbVar21 = apbStack_6a0[uVar19 * 2];
      *(byte **)(param_6 + uVar19 * 4 + 8) = apbStack_6a0[uVar19 * 2 + 1];
      *(byte **)(param_6 + uVar19 * 4 + 6) = pbVar21;
    }
    goto code_r0x0010bffc;
  case 7:
    uVar19 = FUN_0010c98c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_undefined DWARF unwind, reg too big\n";
LAB_0010c1a0:
      __s = (FILE *)(PTR___sF_00117388 + 0x130);
      __size = 0x40;
      goto LAB_0010c1ac;
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
    uVar19 = FUN_0010c98c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_same_value DWARF unwind, reg too big\n";
LAB_0010c184:
      __s = (FILE *)(PTR___sF_00117388 + 0x130);
      __size = 0x41;
      goto LAB_0010c1ac;
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
    uVar19 = FUN_0010c98c(apbStack_6a0 + 0xc0,pbVar2);
    uVar14 = FUN_0010c98c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg too big\n";
      __size = 0x3f;
      __s = (FILE *)(PTR___sF_00117388 + 0x130);
      goto LAB_0010c1ac;
    }
    if (0x5f < uVar14) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg2 too big\n";
      goto LAB_0010c1a0;
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
    uVar19 = FUN_0010c98c(apbStack_6a0 + 0xc0,pbVar2);
    uVar7 = FUN_0010c98c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa DWARF unwind, reg too big\n";
      __size = 0x3e;
      __s = (FILE *)(PTR___sF_00117388 + 0x130);
      goto LAB_0010c1ac;
    }
    *param_6 = (int)uVar19;
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xd:
    uVar19 = FUN_0010c98c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa_register DWARF unwind, reg too big\n";
      goto LAB_0010c09c;
    }
    *param_6 = (int)uVar19;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xe:
    uVar7 = FUN_0010c98c(apbStack_6a0 + 0xc0,pbVar2);
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xf:
    *param_6 = 0;
    *(byte **)(param_6 + 2) = pbVar10;
    goto LAB_0010bf30;
  case 0x10:
    uVar19 = FUN_0010c98c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_expression DWARF unwind, reg too big\n";
      goto LAB_0010c184;
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
LAB_0010bf28:
    puVar12[6] = uVar7;
    *(byte **)(puVar12 + 8) = apbStack_6a0[0xc0];
LAB_0010bf30:
    lVar8 = FUN_0010c98c(apbStack_6a0 + 0xc0,pbVar2);
    apbStack_6a0[0xc0] = apbStack_6a0[0xc0] + lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x11:
    uVar19 = FUN_0010c98c(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_00117388;
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended_sf DWARF unwind, reg too big\n";
      __size = 0x49;
      __s = (FILE *)(PTR___sF_00117388 + 0x130);
      goto LAB_0010c1ac;
    }
    uVar14 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_00117388 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
LAB_0010bebc:
    puVar12[6] = uVar7;
    *(ulong *)(puVar12 + 8) = uVar11 * (long)iVar13;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x12:
    uVar14 = FUN_0010c98c(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_00117388;
    uVar19 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_00117388 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      goto LAB_0010c184;
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
        fprintf((FILE *)(PTR___sF_00117388 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
    uVar19 = FUN_0010c98c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      fprintf((FILE *)(PTR___sF_00117388 + 0x130),
              "libunwind: malformed DW_CFA_val_offset DWARF unwind, reg (%lu) out of range\n\n",
              uVar19);
      goto LAB_0010c1b4;
    }
    lVar8 = FUN_0010c98c(apbStack_6a0 + 0xc0,pbVar2);
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
    uVar19 = FUN_0010c98c(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_00117388;
    if (uVar19 < 0x60) {
      uVar14 = 0;
      uVar11 = 0;
      pbVar21 = apbStack_6a0[0xc0];
      pbVar10 = apbStack_6a0[0xc0];
      do {
        if (pbVar10 == pbVar2) {
          fprintf((FILE *)(PTR___sF_00117388 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      goto LAB_0010bebc;
    }
    __ptr = "libunwind: malformed DW_CFA_val_offset_sf DWARF unwind, reg too big\n";
    __size = 0x44;
    __s = (FILE *)(PTR___sF_00117388 + 0x130);
    goto LAB_0010c1ac;
  case 0x16:
    uVar19 = FUN_0010c98c(apbStack_6a0 + 0xc0,pbVar2);
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
      goto LAB_0010bf28;
    }
    __ptr = "libunwind: malformed DW_CFA_val_expression DWARF unwind, reg too big\n";
    __size = 0x45;
    __s = (FILE *)(PTR___sF_00117388 + 0x130);
    goto LAB_0010c1ac;
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
        goto joined_r0x0010bfdc;
      }
      if (bVar1 != 0x80) {
        return 0;
      }
      local_6dc = param_5;
      lVar8 = FUN_0010c98c(apbStack_6a0 + 0xc0,pbVar2);
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
    if (param_5 != 4) goto code_r0x0010bffc;
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
    uVar7 = FUN_0010c98c(apbStack_6a0 + 0xc0,pbVar2);
    param_6[4] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x2f:
    uVar19 = FUN_0010c98c(apbStack_6a0 + 0xc0,pbVar2);
    if (uVar19 < 0x60) {
      lVar8 = FUN_0010c98c(apbStack_6a0 + 0xc0,pbVar2);
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
      goto LAB_0010bb4c;
    }
    __ptr = "libunwind: malformed DW_CFA_GNU_negative_offset_extended DWARF unwind, reg too big\n";
    __size = 0x53;
    __s = (FILE *)(PTR___sF_00117388 + 0x130);
LAB_0010c1ac:
    fwrite(__ptr,__size,1,__s);
LAB_0010c1b4:
    fflush((FILE *)(PTR___sF_00117388 + 0x130));
    return 0;
  }
joined_r0x0010bae4:
  if ((pbVar2 <= pbVar21) || (uVar16 <= uVar17)) goto LAB_0010b6f8;
  goto LAB_0010b728;
code_r0x0010bffc:
  pbVar21 = apbStack_6a0[0xc0];
  goto joined_r0x0010bae4;
}


// ===== 0010c2bc  FUN_0010c2bc =====

long FUN_0010c2bc(undefined8 param_1,uint *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR___sF_00117388;
  uVar1 = *param_2;
  if ((int)uVar1 < 0x1e) {
    if ((int)uVar1 < 0) {
      if (uVar1 == 0xfffffffe) {
LAB_0010c2fc:
        return *(long *)(param_3 + 0xf8) + (long)(int)param_2[1];
      }
      if (uVar1 == 0xffffffff) goto LAB_0010c340;
    }
    else {
      if (uVar1 == 0) {
        lVar3 = FUN_0010cb54(*(undefined8 *)(param_2 + 2),param_1,param_3,0);
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
    if (uVar1 == 0x1f) goto LAB_0010c2fc;
  }
  else {
    if (uVar1 == 0x22) {
      return *(long *)(param_3 + 0x108) + (long)(int)param_2[1];
    }
    if (uVar1 == 0x20) {
LAB_0010c340:
      return *(long *)(param_3 + 0x100) + (long)(int)param_2[1];
    }
  }
  if (0x1c < uVar1) {
    fprintf((FILE *)(PTR___sF_00117388 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(long *)(param_3 + (ulong)uVar1 * 8) + (long)(int)param_2[1];
}


// ===== 0010c3f0  FUN_0010c3f0 =====

undefined8 FUN_0010c3f0(undefined8 param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  puVar2 = PTR___sF_00117388;
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
LAB_0010c52c:
          return *(undefined8 *)(param_2 + 0xf8);
        }
        if (uVar5 == 0xffffffff) goto LAB_0010c514;
        if (uVar5 == 0x1d) {
          return *(undefined8 *)(param_2 + 0xe8);
        }
      }
      else if ((int)uVar5 < 0x20) {
        if (uVar5 == 0x1e) {
          return *(undefined8 *)(param_2 + 0xf0);
        }
        if (uVar5 == 0x1f) goto LAB_0010c52c;
      }
      else {
        if (uVar5 == 0x22) {
          return *(undefined8 *)(param_2 + 0x108);
        }
        if (uVar5 == 0x20) {
LAB_0010c514:
          return *(undefined8 *)(param_2 + 0x100);
        }
      }
      if (0x1c < uVar5) {
        fprintf((FILE *)(PTR___sF_00117388 + 0x130),"libunwind: %s - %s\n","getRegister",
                "unsupported arm64 register");
        fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      return *(undefined8 *)(param_2 + (*(ulong *)(param_4 + 2) & 0xffffffff) * 8);
    }
    if (iVar1 == 6) {
      puVar4 = (undefined8 *)FUN_0010cb54(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return *puVar4;
    }
    if (iVar1 == 7) {
      uVar3 = FUN_0010cb54(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return uVar3;
    }
  }
  fprintf((FILE *)(PTR___sF_00117388 + 0x130),"libunwind: %s - %s\n","getSavedRegister",
          "unsupported restore location for register");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0010c600  FUN_0010c600 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_0010c600(undefined8 param_1,long *param_2,ulong *param_3,uint param_4,long param_5)

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
  
  puVar3 = PTR___sF_00117388;
  uVar1 = param_4 & 0xf;
  puVar10 = (ulong *)*param_2;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if ((param_4 & 0xf) == 0) goto LAB_0010c74c;
      if (uVar1 != 1) {
LAB_0010c958:
        fprintf((FILE *)(PTR___sF_00117388 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "unknown pointer encoding");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar4 = (undefined8 *)FUN_0010c98c(param_2,param_3);
      puVar3 = PTR___sF_00117388;
    }
    else if (uVar1 == 2) {
      puVar4 = (undefined8 *)(ulong)(ushort)*puVar10;
      *param_2 = (long)puVar10 + 2;
      puVar3 = PTR___sF_00117388;
    }
    else {
      if (uVar1 != 3) goto LAB_0010c958;
      puVar4 = (undefined8 *)(ulong)(uint)*puVar10;
      *param_2 = (long)((long)puVar10 + 4);
      puVar3 = PTR___sF_00117388;
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 4) {
LAB_0010c74c:
      puVar4 = (undefined8 *)*puVar10;
      *param_2 = (long)(puVar10 + 1);
      puVar3 = PTR___sF_00117388;
    }
    else {
      if (uVar1 != 9) goto LAB_0010c958;
      uVar7 = 0;
      uVar5 = 0;
      puVar6 = puVar10;
      puVar9 = puVar10;
      do {
        if (puVar9 == param_3) {
          fprintf((FILE *)(PTR___sF_00117388 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      puVar3 = PTR___sF_00117388;
    }
  }
  else if (uVar1 == 10) {
    puVar4 = (undefined8 *)(long)(short)*puVar10;
    *param_2 = (long)puVar10 + 2;
    puVar3 = PTR___sF_00117388;
  }
  else {
    if (uVar1 != 0xb) {
      if (uVar1 != 0xc) goto LAB_0010c958;
      goto LAB_0010c74c;
    }
    puVar4 = (undefined8 *)(long)(int)(uint)*puVar10;
    *param_2 = (long)((long)puVar10 + 4);
    puVar3 = PTR___sF_00117388;
  }
  uVar1 = (param_4 & 0xff) >> 4 & 7;
  PTR___sF_00117388 = puVar3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      if (uVar1 != 1) goto LAB_0010c924;
      puVar4 = (undefined8 *)((long)puVar4 + (long)puVar10);
    }
LAB_0010c7d8:
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
      goto LAB_0010c7d8;
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
LAB_0010c924:
  fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP","unknown pointer encoding");
  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0010c98c  FUN_0010c98c =====

ulong FUN_0010c98c(long *param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  puVar2 = PTR___sF_00117388;
  pbVar4 = (byte *)*param_1;
  if (pbVar4 != param_2) {
    pbVar5 = pbVar4 + 1;
    uVar3 = (ulong)*pbVar4 & 0x7f;
    if (-1 < (char)*pbVar4) {
LAB_0010c9bc:
      *param_1 = (long)pbVar5;
      return uVar3;
    }
    if (pbVar5 != param_2) {
      uVar3 = uVar3 | (ulong)((int)(char)pbVar4[1] & 0x7f) << 7;
      pbVar5 = pbVar4 + 2;
      if (-1 < (char)pbVar4[1]) goto LAB_0010c9bc;
      if (pbVar5 != param_2) {
        uVar3 = uVar3 | (ulong)((int)(char)pbVar4[2] & 0x7f) << 0xe;
        pbVar5 = pbVar4 + 3;
        if (-1 < (char)pbVar4[2]) goto LAB_0010c9bc;
        if (pbVar5 != param_2) {
          uVar3 = uVar3 | (ulong)((int)(char)pbVar4[3] & 0x7f) << 0x15;
          pbVar5 = pbVar4 + 4;
          if (-1 < (char)pbVar4[3]) goto LAB_0010c9bc;
          if (pbVar5 != param_2) {
            uVar3 = uVar3 | (ulong)((int)(char)pbVar4[4] & 0x7f) << 0x1c;
            pbVar5 = pbVar4 + 5;
            if (-1 < (char)pbVar4[4]) goto LAB_0010c9bc;
            if (pbVar5 != param_2) {
              uVar3 = uVar3 | (ulong)((int)(char)pbVar4[5] & 0x7f) << 0x23;
              pbVar5 = pbVar4 + 6;
              if (-1 < (char)pbVar4[5]) goto LAB_0010c9bc;
              if (pbVar5 != param_2) {
                uVar3 = uVar3 | (ulong)((int)(char)pbVar4[6] & 0x7f) << 0x2a;
                pbVar5 = pbVar4 + 7;
                if (-1 < (char)pbVar4[6]) goto LAB_0010c9bc;
                if (pbVar5 != param_2) {
                  uVar3 = uVar3 | (ulong)((int)(char)pbVar4[7] & 0x7f) << 0x31;
                  pbVar5 = pbVar4 + 8;
                  if (-1 < (char)pbVar4[7]) goto LAB_0010c9bc;
                  if (pbVar5 != param_2) {
                    uVar3 = uVar3 | (ulong)((int)(char)pbVar4[8] & 0x7f) << 0x38;
                    pbVar5 = pbVar4 + 9;
                    if (-1 < (char)pbVar4[8]) goto LAB_0010c9bc;
                    if (pbVar5 != param_2) {
                      bVar1 = *pbVar5;
                      if ((bVar1 & 0x7e) == 0) {
                        if (-1 < (char)bVar1) {
                          *param_1 = (long)(pbVar4 + 10);
                          return uVar3 | (ulong)bVar1 << 0x3f;
                        }
                        if (pbVar4 + 10 == param_2) goto LAB_0010caec;
                      }
                      fprintf((FILE *)(PTR___sF_00117388 + 0x130),"libunwind: %s - %s\n",
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
LAB_0010caec:
  fprintf((FILE *)(PTR___sF_00117388 + 0x130),"libunwind: %s - %s\n","getULEB128",
          "truncated uleb128 expression");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0010cb54  FUN_0010cb54 =====

ulong FUN_0010cb54(byte *param_1,undefined8 param_2,long param_3,ulong param_4)

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
  lVar11 = FUN_0010c98c(&local_68,param_1 + 0x14);
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
      puVar9 = PTR___sF_00117388;
      pbVar13 = pbVar18 + 1;
      local_68 = pbVar13;
      bVar8 = *pbVar18;
      uVar10 = (uint)bVar8;
      if (0x91 < uVar10 - 3) {
code_r0x0010d3d0:
        fprintf((FILE *)(PTR___sF_00117388 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
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
        goto LAB_0010d03c;
      case 4:
      case 5:
      case 7:
        goto code_r0x0010d3d0;
      case 6:
        puVar14 = (ulong *)*puVar19;
LAB_0010cfcc:
        *puVar19 = *puVar14;
        goto LAB_0010cbd8;
      case 8:
        uVar16 = (ulong)pbVar18[1];
        goto LAB_0010cfa0;
      case 9:
        uVar16 = (ulong)(char)pbVar18[1];
LAB_0010cfa0:
        local_68 = pbVar18 + 2;
        goto LAB_0010d03c;
      case 10:
        uVar16 = (ulong)*(ushort *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_0010d03c;
      case 0xb:
        uVar16 = (ulong)*(short *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_0010d03c;
      case 0xc:
        uVar16 = (ulong)*(uint *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_0010d03c;
      case 0xd:
        uVar16 = (ulong)*(int *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_0010d03c;
      case 0x10:
        uVar16 = FUN_0010c98c(&local_68,pbVar6);
        puVar19 = puVar19 + 1;
        *puVar19 = uVar16;
        goto LAB_0010cbd8;
      case 0x11:
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = pbVar13;
        do {
          if (pbVar18 == pbVar6) {
            fprintf((FILE *)(PTR___sF_00117388 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
        goto LAB_0010cbd8;
      case 0x12:
        uVar16 = *puVar19;
        goto LAB_0010cbd4;
      case 0x13:
        puVar19 = puVar19 + -1;
        goto LAB_0010cbd8;
      case 0x14:
        uVar16 = puVar19[-1];
        goto LAB_0010cbd4;
      case 0x15:
        local_68 = pbVar18 + 2;
        uVar16 = puVar19[-(ulong)pbVar18[1]];
LAB_0010d03c:
LAB_0010cbd4:
        puVar19[1] = uVar16;
        puVar19 = puVar19 + 1;
        goto LAB_0010cbd8;
      case 0x16:
        auVar20 = NEON_ext(*(undefined1 (*) [16])(puVar19 + -1),*(undefined1 (*) [16])(puVar19 + -1)
                           ,8,1);
        *puVar19 = auVar20._8_8_;
        puVar19[-1] = auVar20._0_8_;
        goto LAB_0010cbd8;
      case 0x17:
        uVar16 = *puVar19;
        *puVar19 = SUB168(*(undefined1 (*) [16])(puVar19 + -2),8);
        puVar19[-1] = SUB168(*(undefined1 (*) [16])(puVar19 + -2),0);
        puVar19[-2] = uVar16;
        goto LAB_0010cbd8;
      case 0x18:
        puVar14 = (ulong *)*puVar19;
        puVar19 = puVar19 + -1;
        *puVar19 = *puVar14;
        goto LAB_0010cbd8;
      case 0x19:
        uVar16 = *puVar19;
        if ((long)uVar16 < 0) goto LAB_0010d174;
        goto LAB_0010cbd8;
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
LAB_0010d174:
        *puVar19 = -uVar16;
        goto LAB_0010cbd8;
      case 0x20:
        *puVar19 = ~*puVar19;
        goto LAB_0010cbd8;
      case 0x21:
        uVar16 = puVar19[-1] | *puVar19;
        break;
      case 0x22:
        uVar16 = puVar19[-1] + *puVar19;
        break;
      case 0x23:
        lVar11 = FUN_0010c98c(&local_68,pbVar6);
        *puVar19 = *puVar19 + lVar11;
        goto LAB_0010cbd8;
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
        goto LAB_0010cbd8;
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
        goto LAB_0010cbd8;
      default:
        uVar16 = (ulong)(uVar15 - 0x30);
        goto LAB_0010cbd4;
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
        goto LAB_0010cbd0;
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
            fprintf((FILE *)(PTR___sF_00117388 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
             (puVar14 = puVar2, bVar8 != 0x8d)) goto LAB_0010cd10;
        }
        else if (bVar8 < 0x90) {
          puVar14 = puVar1;
          if ((bVar8 != 0x8e) && (puVar14 = puVar4, uVar15 != 0x8f)) {
LAB_0010cd10:
            if (0x1c < uVar10 - 0x70) {
              fprintf((FILE *)(PTR___sF_00117388 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((bVar8 != 0x90) && (puVar14 = puVar3, bVar8 != 0x92)) goto LAB_0010cd10;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_0010cbd4;
      case 0x90:
        uVar10 = FUN_0010c98c(&local_68,pbVar6);
        puVar9 = PTR___sF_00117388;
        if ((int)uVar10 < 0x1e) {
          if (((uVar10 != 0xfffffffe) && (puVar14 = puVar5, uVar10 != 0xffffffff)) &&
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_0010d274;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_0010d274:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_00117388 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_0010d274;
        }
LAB_0010cbd0:
        uVar16 = *puVar14;
        goto LAB_0010cbd4;
      case 0x91:
        fprintf((FILE *)(PTR___sF_00117388 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_fbreg not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x92:
        uVar10 = FUN_0010c98c(&local_68,pbVar6);
        puVar9 = PTR___sF_00117388;
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = local_68;
        pbVar13 = local_68;
        do {
          if (pbVar13 == pbVar6) {
            fprintf((FILE *)(PTR___sF_00117388 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_0010d29c;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_0010d29c:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_00117388 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_0010d29c;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_0010cbd4;
      case 0x93:
        fprintf((FILE *)(PTR___sF_00117388 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
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
LAB_0010d474:
              fprintf((FILE *)(PTR___sF_00117388 + 0x130),"libunwind: %s - %s\n",
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
            if (bVar8 != 8) goto LAB_0010d474;
            goto LAB_0010cfcc;
          }
          *puVar19 = (ulong)(uint)*puVar14;
        }
        goto LAB_0010cbd8;
      }
      puVar19[-1] = uVar16;
      puVar19 = puVar19 + -1;
LAB_0010cbd8:
      pbVar18 = local_68;
    } while (local_68 < pbVar6);
    param_4 = *puVar19;
  }
  return param_4;
}


// ===== 0010d510  FUN_0010d510 =====

undefined8 FUN_0010d510(long param_1,ulong param_2,long *param_3,uint param_4)

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
      (uVar3 = FUN_0010da38(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],
                            param_3[2] + (ulong)param_4,&local_6b0,auStack_6e8), (uVar3 & 1) == 0))
     && ((param_3[4] == 0 ||
         (uVar3 = FUN_0010dc00(*(undefined8 *)(param_1 + 8),param_2,param_3[4],(int)param_3[5],
                               &local_6b0,auStack_6e8), (uVar3 & 1) == 0)))) {
    lVar5 = *param_3;
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_0011b694);
    if (PTR_DAT_0011b670 < PTR_DAT_0011b678) {
      plVar4 = (long *)PTR_DAT_0011b670;
      if (lVar5 == -1) {
        do {
          if (((ulong)plVar4[1] <= param_2) && (param_2 < (ulong)plVar4[2])) goto LAB_0010d618;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_0011b678);
      }
      else {
        do {
          if (((*plVar4 == lVar5) && ((ulong)plVar4[1] <= param_2)) && (param_2 < (ulong)plVar4[2]))
          goto LAB_0010d618;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_0011b678);
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0011b694);
    goto LAB_0010d660;
  }
LAB_0010d680:
  bVar2 = 1;
LAB_0010d684:
  lVar5 = *param_3;
  memset(auStack_680,0,0x618);
  uVar3 = FUN_0010b674(*(undefined8 *)(param_1 + 8),&local_6b0,auStack_6e8,param_2,4,auStack_680);
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
      pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_0011b694);
      __src = PTR_DAT_0011b670;
      if (PTR_DAT_0011b680 <= PTR_DAT_0011b678) {
        __n = (long)PTR_DAT_0011b680 - (long)PTR_DAT_0011b670;
        __dest = (undefined *)malloc(__n * 4);
        memcpy(__dest,__src,__n);
        if ((undefined8 *)__src != &DAT_0011b6d0) {
          free(__src);
        }
        PTR_DAT_0011b680 = __dest + ((long)__n >> 3) * 0x20;
        PTR_DAT_0011b678 = __dest + __n;
        PTR_DAT_0011b670 = __dest;
      }
      *(long *)PTR_DAT_0011b678 = lVar5;
      *(long *)((long)PTR_DAT_0011b678 + 8) = local_698;
      *(long *)((long)PTR_DAT_0011b678 + 0x18) = local_6b0;
      *(long *)((long)PTR_DAT_0011b678 + 0x10) = local_690;
      PTR_DAT_0011b678 = (undefined *)((long)PTR_DAT_0011b678 + 0x20);
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0011b694);
      return 1;
    }
    return 1;
  }
  return 1;
LAB_0010d618:
  lVar5 = plVar4[3];
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0011b694);
  if ((lVar5 != 0) &&
     (uVar3 = FUN_0010da38(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],lVar5,
                           &local_6b0,auStack_6e8), (uVar3 & 1) != 0)) {
    bVar2 = 0;
    goto LAB_0010d684;
  }
LAB_0010d660:
  uVar3 = FUN_0010da38(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],0,&local_6b0,
                       auStack_6e8);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  goto LAB_0010d680;
}


// ===== 0010d7e4  FUN_0010d7e4 =====

undefined8 FUN_0010d7e4(ulong *param_1,undefined8 param_2,undefined8 *param_3)

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
              uVar5 = FUN_0010d918(uVar2,lVar8,lVar9 + lVar8,local_70);
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


// ===== 0010d918  FUN_0010d918 =====

undefined8 FUN_0010d918(undefined8 param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte *local_28;
  
  puVar3 = PTR___sF_00117388;
  if ((ulong)((long)param_3 - (long)param_2) < 4) {
    if (param_3 == param_2) {
      return 0;
    }
    fprintf((FILE *)(PTR___sF_00117388 + 0x130),
            "libunwind: unsupported .eh_frame_hdr at %lx: need at least 4 bytes of data but only got %zd\n"
            ,param_2);
  }
  else {
    if (*param_2 == 1) {
      local_28 = param_2 + 4;
      bVar1 = param_2[2];
      bVar2 = param_2[1];
      *(byte *)(param_4 + 3) = param_2[3];
      uVar4 = FUN_0010c600(param_1,&local_28,param_3,bVar2,param_2);
      *param_4 = uVar4;
      if (bVar1 == 0xff) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_0010c600(param_1,&local_28,param_3,bVar1,param_2);
      }
      param_4[1] = uVar4;
      param_4[2] = local_28;
      return 1;
    }
    fprintf((FILE *)(PTR___sF_00117388 + 0x130),
            "libunwind: unsupported .eh_frame_hdr version: %u at %lx\n",(ulong)(uint)*param_2,
            param_2);
  }
  fflush((FILE *)(puVar3 + 0x130));
  return 0;
}


// ===== 0010da38  FUN_0010da38 =====

undefined8
FUN_0010da38(undefined8 param_1,ulong param_2,uint *param_3,long param_4,uint *param_5,
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
        (puVar7 < puVar9)) && (lVar4 = FUN_0010a7a8(param_1,puVar7,param_7), lVar4 == 0)) {
      local_68 = local_68 + 1;
      uVar8 = FUN_0010c600(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x18),0);
      lVar4 = FUN_0010c600(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x18) & 0xf,0);
      if ((uVar8 < param_2) && (param_2 <= lVar4 + uVar8)) {
        cVar2 = *(char *)(param_7 + 0x31);
        param_6[5] = 0;
        puVar9 = local_68;
        if (cVar2 != '\0') {
          lVar5 = FUN_0010c98c(&local_68,puVar1);
          puVar7 = local_68;
          puVar9 = (uint *)((long)local_68 + lVar5);
          if ((*(byte *)(param_7 + 0x19) != 0xff) &&
             (lVar5 = FUN_0010c600(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x19) & 0xf,0),
             lVar5 != 0)) {
            local_68 = puVar7;
            uVar6 = FUN_0010c600(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x19),0);
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


// ===== 0010dc00  FUN_0010dc00 =====

undefined8
FUN_0010dc00(undefined8 param_1,ulong param_2,long param_3,ulong param_4,long param_5,
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
  uVar1 = FUN_0010d918(param_1,param_3,lVar4,auStack_80);
  if (((uVar1 & 1) != 0) && (local_78 != 0)) {
    lVar2 = FUN_0010dd68(local_68);
    lVar7 = 0;
    do {
      if (local_78 < 2) {
        lVar8 = lVar7 * lVar2;
        break;
      }
      uVar6 = local_78 >> 1;
      lVar8 = (uVar6 + lVar7) * lVar2;
      local_88 = local_70 + lVar8;
      uVar1 = FUN_0010c600(param_1,&local_88,lVar4,local_68,param_3);
      uVar5 = local_78 - uVar6;
      local_78 = uVar6;
      if (uVar1 < param_2) {
        local_78 = uVar5;
        lVar7 = uVar6 + lVar7;
      }
    } while (uVar1 != param_2);
    local_88 = local_70 + lVar8;
    FUN_0010c600(param_1,&local_88,lVar4,local_68,param_3);
    uVar3 = FUN_0010c600(param_1,&local_88,lVar4,local_68,param_3);
    lVar4 = FUN_0010a618(param_1,uVar3,param_5,param_6,0);
    if (((lVar4 == 0) && (*(ulong *)(param_5 + 0x18) <= param_2)) &&
       (param_2 < *(ulong *)(param_5 + 0x20))) {
      return 1;
    }
  }
  return 0;
}


// ===== 0010dd68  FUN_0010dd68 =====

undefined8 FUN_0010dd68(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_00117388;
  param_1 = param_1 & 0xf;
  if (param_1 < 9) {
    if (param_1 < 3) {
      if (param_1 == 2) {
        return 4;
      }
      if (param_1 == 1) {
LAB_0010de30:
        fprintf((FILE *)(PTR___sF_00117388 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
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
    if (param_1 == 9) goto LAB_0010de30;
  }
  else {
    if (param_1 == 0xc) {
      return 0x10;
    }
    if (param_1 == 0xb) {
      return 8;
    }
  }
  fprintf((FILE *)(PTR___sF_00117388 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
          "Unknown DWARF encoding for search table.");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0010de64  FUN_0010de64 =====

char * FUN_0010de64(int param_1)

{
  if (param_1 + 2U < 0x62) {
    return &DAT_00106d20 + *(int *)(&DAT_00106d20 + (ulong)(param_1 + 2U) * 4);
  }
  return "unknown register";
}


// ===== 0010de94  FUN_0010de94 =====

undefined1  [16] FUN_0010de94(undefined1 (*param_1) [16])

{
  return *param_1;
}


// ===== 0010df30  FUN_0010df30 =====

long FUN_0010df30(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_0011bed0 == '\0') {
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


// ===== 0010df60  _INIT_0 =====

void _INIT_0(void)

{
  uint uVar1;
  int iVar2;
  char acStack_6c [92];
  
  uVar1 = getauxval(0x10);
  if ((uVar1 >> 8 & 1) == 0) {
    DAT_0011bed0 = 0;
    return;
  }
  iVar2 = __system_property_get("ro.arch",acStack_6c);
  if (0 < iVar2) {
    iVar2 = strncmp(acStack_6c,"exynos9810",10);
    DAT_0011bed0 = iVar2 != 0;
    return;
  }
  DAT_0011bed0 = 1;
  return;
}


// ===== 0010dff8  FUN_0010dff8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0010dff8(ulong param_1,long param_2)

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
    DAT_0011bed8 = DAT_0011bed8 | 0x400;
  }
  uVar2 = (uint)uVar4;
  if ((uVar3 >> 4 & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x8000;
  }
  if ((uVar3 >> 0x1b & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 2;
  }
  if ((uVar2 >> 7 & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 6;
  }
  if ((~uVar3 & 0xc0000) == 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x20;
  }
  if ((uVar3 >> 0x14 & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x10;
  }
  if ((uVar3 >> 0x17 & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 8;
  }
  if ((uVar3 >> 9 & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x10100;
  }
  if ((uVar3 >> 0x18 & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x20000;
  }
  if ((uVar3 >> 0xc & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x40;
  }
  if ((uVar3 >> 0x1a & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x800000;
  }
  if ((uVar3 >> 3 & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x4000;
  }
  if ((uVar3 >> 5 & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x800;
  }
  if ((uVar3 >> 6 & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x1000;
  }
  if ((uVar3 >> 0xd & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x100000;
  }
  if ((uVar3 >> 0xe & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x200000;
  }
  if ((uVar3 >> 0x1d & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x400000000000;
  }
  if ((uVar3 >> 0x1c & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x2000000000000;
  }
  if ((uVar2 >> 0x12 & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x180000000000;
  }
  if ((uVar2 >> 0x16 & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x380000000000;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x2000000000;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x6000000000;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x8000000000;
  }
  if ((uVar2 >> 5 & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x10000000000;
  }
  if ((uVar2 >> 6 & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x20000000000;
  }
  if ((uVar4 & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x80000;
  }
  if ((uVar3 >> 8 & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x80;
  }
  if ((uVar2 >> 0x10 & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 1;
  }
  if ((uVar2 >> 0xd & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x4000000;
  }
  if ((uVar4 >> 0x20 & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x10000000;
  }
  if ((uVar4 >> 0x21 & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x100000000;
  }
  if ((uVar2 >> 0xf & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x2000000;
  }
  if ((uVar2 >> 8 & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x1000000;
  }
  if ((uVar2 >> 9 & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x200000000;
  }
  if ((uVar2 >> 10 & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x400000000;
  }
  if ((uVar2 >> 0xb & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x800000000;
  }
  if ((uVar2 >> 0x11 & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x4000000000000;
  }
  if ((uVar2 >> 0x15 & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x20000000;
  }
  if ((int)uVar2 < 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x40000000000000;
  }
  if ((uVar2 >> 0x17 & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x40000000000;
  }
  if ((uVar2 >> 0x18 & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x100000000000000;
  }
  if ((uVar2 >> 0x19 & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x80000000000000;
  }
  if ((uVar4 >> 0x2b & 1) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x800000000000000;
  }
  if ((uVar3 >> 0xb & 1) == 0) {
    if ((param_1 & 0x201) != 0) {
      DAT_0011bed8 = DAT_0011bed8 | 0x300;
    }
    if ((uVar4 & 1) != 0 || (param_1 & 0x10000) != 0) {
      DAT_0011bed8 = DAT_0011bed8 | 0x40000;
    }
    if ((param_1 & 0x4008000) != 0) {
      DAT_0011bed8 = DAT_0011bed8 | 0x400000;
    }
    if ((uVar4 & 0x100004000) != 0) {
      DAT_0011bed8 = DAT_0011bed8 | 0x8000000;
    }
    uVar5 = DAT_0011bed8 | (ulong)(uVar2 << 0x13) & 0x80000000;
    if ((uVar4 & 2) != 0 && (param_1 & 0x400000) != 0) {
      uVar5 = uVar5 | 0x1000000000;
    }
    uVar5 = uVar5 | (param_1 & 0x20000) >> 4;
    goto LAB_0010e160;
  }
  uVar4 = id_aa64pfr1_el1;
  if ((uVar4 & 0xf00) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x80000000000;
  }
  if ((uVar4 & 0xf0) == 0x10) {
    DAT_0011bed8 = DAT_0011bed8 | 0x1000000000000;
    if ((uVar4 & 0xf000000) != 0x2000000) goto LAB_0010e450;
LAB_0010e4a4:
    DAT_0011bed8 = DAT_0011bed8 | 0x200000000000000;
    uVar4 = id_aa64pfr0_el1;
    uVar3 = (uint)uVar4;
  }
  else {
    if ((uVar4 & 0xf000000) == 0x2000000) goto LAB_0010e4a4;
LAB_0010e450:
    uVar4 = id_aa64pfr0_el1;
    uVar3 = (uint)uVar4;
  }
  if ((~uVar3 & 0xf0000) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x300;
  }
  if ((uVar4 & 0xf00000000) != 0) {
    uVar4 = UnkSytemRegRead(3,0,0,4,4);
    if ((uVar4 & 0xf) == 1) {
      DAT_0011bed8 = DAT_0011bed8 | 0x1000000000;
    }
    else if ((uVar4 & 0xf) == 0) {
      DAT_0011bed8 = DAT_0011bed8 | 0x40000000;
    }
    if ((uVar4 & 0xf00000) != 0) {
      DAT_0011bed8 = DAT_0011bed8 | 0x80000000;
    }
  }
  uVar4 = id_aa64isar0_el1;
  if ((uVar4 & 0xf00000000) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x2000;
  }
  uVar4 = id_aa64isar1_el1;
  uVar5 = uVar4 >> 0x14 & 0xf;
  if ((uVar4 & 0xf) != 0) {
    DAT_0011bed8 = DAT_0011bed8 | 0x40000;
  }
  if (uVar5 != 0) {
    if (uVar5 == 3) {
      DAT_0011bed8 = DAT_0011bed8 | 0x400000000400000;
    }
    else {
      DAT_0011bed8 = DAT_0011bed8 | 0x400000;
    }
  }
  uVar5 = DAT_0011bed8 | 0x800000000000;
  if ((uVar4 & 0xf0000000000) != 0x20000000000) {
    uVar5 = DAT_0011bed8;
  }
  if ((uVar4 & 0xf00000000000) != 0) {
    uVar5 = uVar5 | 0x8000000;
  }
  if (uVar4 >> 0x3c != 0) {
    if (uVar4 >> 0x3d == 0) {
      DAT_0011bed8 = uVar5 | 0x8008000000000000;
      return;
    }
    uVar1 = 0x38000000000000;
    if (uVar4 >> 0x3c < 3) {
      uVar1 = 0x18000000000000;
    }
    DAT_0011bed8 = uVar5 | uVar1 | 0x8000000000000000;
    return;
  }
LAB_0010e160:
  DAT_0011bed8 = uVar5 | 0x8000000000000000;
  return;
}


// ===== 0010e594  _INIT_1 =====

void _INIT_1(void)

{
  int iVar1;
  ulong uVar2;
  char local_70 [8];
  ulong uStack_68;
  undefined8 local_60;
  
  if (DAT_0011bed8 != 0) {
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
    FUN_0010dff8(uVar2 | 0x4000000000000000,local_70);
  }
  return;
}


// ===== 0010e620  FUN_0010e620 =====

long FUN_0010e620(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_0011bed0 == '\0') {
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


// ===== 0010e650  JNI_OnLoad =====

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
  local_60[0] = &PTR_FUN_00116ba0;
  uVar2 = facebook::jni::initialize(param_1,(function *)local_60);
  if ((undefined ***)local_40 == local_60) {
    lVar4 = 4;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_0010e6bc;
    lVar4 = 5;
    pppuVar3 = (undefined ***)local_40;
  }
  (**(code **)((long)*pppuVar3 + lVar4 * 8))(pppuVar3);
LAB_0010e6bc:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0010e6e4  FUN_0010e6e4 =====

void FUN_0010e6e4(void)

{
  return;
}


// ===== 0010e6e8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001173c8)();
  return;
}


// ===== 0010e6ec  FUN_0010e6ec =====

void FUN_0010e6ec(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_00116ba0;
  return;
}


// ===== 0010e710  FUN_0010e710 =====

void FUN_0010e710(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00116ba0;
  return;
}


// ===== 0010e720  FUN_0010e720 =====

void FUN_0010e720(void)

{
  return;
}


// ===== 0010e724  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001173c8)();
  return;
}


// ===== 0010e728  gesturehandler::RNGestureHandlerModule::registerNatives =====

void gesturehandler::RNGestureHandlerModule::registerNatives(void)

{
  (*(code *)PTR_registerNatives_001173d8)();
  return;
}


// ===== 0010e72c  FUN_0010e72c =====

long FUN_0010e72c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) != "Z10JNI_OnLoadE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0010e748  FUN_0010e748 =====

pointer_____offset_0x10___ * FUN_0010e748(void)

{
  return &PTR_vtable_00116c10;
}


// ===== 0010e754  gesturehandler::RNGestureHandlerModule::RNGestureHandlerModule =====

/* gesturehandler::RNGestureHandlerModule::RNGestureHandlerModule(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<gesturehandler::RNGestureHandlerModule,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

void __thiscall
gesturehandler::RNGestureHandlerModule::RNGestureHandlerModule
          (RNGestureHandlerModule *this,long *param_2)

{
  long *plVar1;
  bad_alloc *this_00;
  long lVar2;
  
  lVar2 = *param_2;
  *(undefined **)this = PTR_vtable_00117260 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)facebook::jni::Environment::current();
    lVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1,lVar2);
    facebook::jni::throwPendingJniExceptionAsCppException();
    if (lVar2 == 0) {
      this_00 = (bad_alloc *)__cxa_allocate_exception(8);
      std::bad_alloc::bad_alloc(this_00);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,PTR_typeinfo_00117328,PTR__bad_alloc_00117320);
    }
  }
  *(long *)(this + 0x10) = lVar2;
  return;
}


// ===== 0010e7d4  gesturehandler::RNGestureHandlerModule::~RNGestureHandlerModule =====

/* gesturehandler::RNGestureHandlerModule::~RNGestureHandlerModule() */

void __thiscall
gesturehandler::RNGestureHandlerModule::~RNGestureHandlerModule(RNGestureHandlerModule *this)

{
  ~RNGestureHandlerModule(this);
  operator_delete(this);
  return;
}


// ===== 0010e7f8  gesturehandler::RNGestureHandlerModule::~RNGestureHandlerModule =====

/* gesturehandler::RNGestureHandlerModule::~RNGestureHandlerModule() */

void __thiscall
gesturehandler::RNGestureHandlerModule::~RNGestureHandlerModule(RNGestureHandlerModule *this)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x10);
  *(undefined **)this = PTR_vtable_00117260 + 0x10;
  if (lVar2 != 0) {
                    /* try { // try from 0010e820 to 0010e833 has its CatchHandler @ 0010e844 */
    plVar1 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb0))(plVar1,lVar2);
  }
  *(undefined8 *)(this + 0x10) = 0;
  return;
}


// ===== 0010e848  FUN_0010e848 =====

void FUN_0010e848(void)

{
  __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 0010e858  FUN_0010e858 =====

void FUN_0010e858(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
                    /* try { // try from 0010e870 to 0010e883 has its CatchHandler @ 0010e894 */
    plVar1 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb0))(plVar1,lVar2);
  }
  *param_1 = 0;
  return;
}


// ===== 0010e898  gesturehandler::RNGestureHandlerModule::registerNatives =====

/* gesturehandler::RNGestureHandlerModule::registerNatives() */

void gesturehandler::RNGestureHandlerModule::registerNatives(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  char *pcVar9;
  long *plVar10;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puStack_78 = PTR_call_00116c68;
  local_80 = PTR_kDescriptor_00116c60;
  puStack_68 = PTR_kDescriptor_00116c78;
  puStack_70 = PTR_s_decorateUIRuntime_00116c70;
  puStack_58 = PTR_s_invalidateNative_00116c88;
  local_60 = PTR_call_00116c80;
  puStack_48 = PTR_call_00116c98;
  puStack_50 = PTR_kDescriptor_00116c90;
  puStack_98 = PTR_kDescriptor_00116c48;
  local_a0 = PTR_s_initHybrid_00116c40;
  puStack_88 = PTR_s_getBindingsInstallerCxx_00116c58;
  puStack_90 = PTR_call_00116c50;
  pcVar9 = (char *)operator_new(0x40);
  uVar7 = s_Lcom_swmansion_gesturehandler_re_00106576._33_8_;
  uVar6 = s_Lcom_swmansion_gesturehandler_re_00106576._25_8_;
  uVar5 = s_Lcom_swmansion_gesturehandler_re_00106576._17_8_;
  uVar4 = s_Lcom_swmansion_gesturehandler_re_00106576._9_8_;
  uVar3 = s_Lcom_swmansion_gesturehandler_re_00106576._1_8_;
  uVar2 = CONCAT71(s_Lcom_swmansion_gesturehandler_re_00106576._42_7_,
                   s_Lcom_swmansion_gesturehandler_re_00106576[0x29]);
  pcVar9[0x39] = '\0';
  *(undefined8 *)(pcVar9 + 0x28) = uVar2;
  *(undefined8 *)(pcVar9 + 0x20) = uVar7;
  *(undefined8 *)(pcVar9 + 8) = uVar4;
  *(undefined8 *)pcVar9 = uVar3;
  *(undefined8 *)(pcVar9 + 0x18) = uVar6;
  *(undefined8 *)(pcVar9 + 0x10) = uVar5;
  uVar2 = CONCAT17(s_Lcom_swmansion_gesturehandler_re_00106576[0x31],
                   s_Lcom_swmansion_gesturehandler_re_00106576._42_7_);
  *(undefined8 *)(pcVar9 + 0x31) = s_Lcom_swmansion_gesturehandler_re_00106576._50_8_;
  *(undefined8 *)(pcVar9 + 0x29) = uVar2;
                    /* try { // try from 0010e90c to 0010e913 has its CatchHandler @ 0010e984 */
  facebook::jni::findClassLocal(pcVar9);
  operator_delete(pcVar9);
                    /* try { // try from 0010e91c to 0010e943 has its CatchHandler @ 0010e998 */
  plVar10 = (long *)facebook::jni::Environment::current();
  iVar8 = (**(code **)(*plVar10 + 0x6b8))(plVar10,local_40,&local_a0,4);
  facebook::jni::throwCppExceptionIf(iVar8 != 0);
  if (local_40 != 0) {
                    /* try { // try from 0010e94c to 0010e95f has its CatchHandler @ 0010e994 */
    plVar10 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0010e9c0  facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

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
                    /* try { // try from 0010e9d8 to 0010e9eb has its CatchHandler @ 0010e9fc */
    plVar1 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb8))(plVar1,lVar2);
  }
  *(undefined8 *)this = 0;
  return;
}


// ===== 0010ea00  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<gesturehandler::RNGestureHandlerModule,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>),&gesturehandler::RNGestureHandlerModule::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<gesturehandler::RNGestureHandlerModule,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<gesturehandler::RNGestureHandlerModule,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>),
   &gesturehandler::RNGestureHandlerModule::initHybrid,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<gesturehandler::RNGestureHandlerModule,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<gesturehandler::RNGestureHandlerModule,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>),&gesturehandler::RNGestureHandlerModule::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<gesturehandler::RNGestureHandlerModule,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>
::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  JniEnvCacher aJStack_50 [24];
  _jobject *local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_50,param_1);
                    /* try { // try from 0010ea30 to 0010ea3b has its CatchHandler @ 0010ea6c */
  local_38 = param_2;
  gesturehandler::RNGestureHandlerModule::initHybrid((RNGestureHandlerModule *)&local_30,&local_38);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0010eab8  facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::BindingsInstallerHolder,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(gesturehandler::RNGestureHandlerModule::*)(),&gesturehandler::RNGestureHandlerModule::getBindingsInstallerCxx,gesturehandler::RNGestureHandlerModule,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::BindingsInstallerHolder,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::BindingsInstallerHolder,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator> (gesturehandler::RNGestureHandlerModule::*)(),
   &gesturehandler::RNGestureHandlerModule::getBindingsInstallerCxx,
   gesturehandler::RNGestureHandlerModule,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::BindingsInstallerHolder,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::BindingsInstallerHolder,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(gesturehandler::RNGestureHandlerModule::*)(),&gesturehandler::RNGestureHandlerModule::getBindingsInstallerCxx,gesturehandler::RNGestureHandlerModule,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::BindingsInstallerHolder,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>
::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  JniEnvCacher aJStack_50 [24];
  _jobject *local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_50,param_1);
                    /* try { // try from 0010eae8 to 0010eaf3 has its CatchHandler @ 0010eb24 */
  local_38 = param_2;
  dispatch(&local_30,&local_38);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0010eb70  facebook::jni::detail::MethodWrapper<bool(gesturehandler::RNGestureHandlerModule::*)(),&gesturehandler::RNGestureHandlerModule::decorateUIRuntime,gesturehandler::RNGestureHandlerModule,bool>::call =====

/* facebook::jni::detail::MethodWrapper<bool (gesturehandler::RNGestureHandlerModule::*)(),
   &gesturehandler::RNGestureHandlerModule::decorateUIRuntime,
   gesturehandler::RNGestureHandlerModule, bool>::call(_JNIEnv*, _jobject*) */

uint facebook::jni::detail::
     MethodWrapper<bool(gesturehandler::RNGestureHandlerModule::*)(),&gesturehandler::RNGestureHandlerModule::decorateUIRuntime,gesturehandler::RNGestureHandlerModule,bool>
     ::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  uint uVar2;
  JniEnvCacher aJStack_48 [24];
  _jobject *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_48,param_1);
                    /* try { // try from 0010eba0 to 0010eba7 has its CatchHandler @ 0010ebd8 */
  local_30 = param_2;
  uVar2 = dispatch(&local_30);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0010ec24  facebook::jni::detail::MethodWrapper<void(gesturehandler::RNGestureHandlerModule::*)(),&gesturehandler::RNGestureHandlerModule::invalidateNative,gesturehandler::RNGestureHandlerModule,void>::call =====

/* facebook::jni::detail::MethodWrapper<void (gesturehandler::RNGestureHandlerModule::*)(),
   &gesturehandler::RNGestureHandlerModule::invalidateNative,
   gesturehandler::RNGestureHandlerModule, void>::call(_JNIEnv*, _jobject*) */

void facebook::jni::detail::
     MethodWrapper<void(gesturehandler::RNGestureHandlerModule::*)(),&gesturehandler::RNGestureHandlerModule::invalidateNative,gesturehandler::RNGestureHandlerModule,void>
     ::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  JniEnvCacher aJStack_48 [24];
  _jobject *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_48,param_1);
                    /* try { // try from 0010ec54 to 0010ec5b has its CatchHandler @ 0010ec84 */
  local_30 = param_2;
  dispatch(&local_30);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0010eccc  facebook::jni::detail::MethodWrapper<void(gesturehandler::RNGestureHandlerModule::*)(),&gesturehandler::RNGestureHandlerModule::invalidateNative,gesturehandler::RNGestureHandlerModule,void>::dispatch =====

/* facebook::jni::detail::MethodWrapper<void (gesturehandler::RNGestureHandlerModule::*)(),
   &gesturehandler::RNGestureHandlerModule::invalidateNative,
   gesturehandler::RNGestureHandlerModule,
   void>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<gesturehandler::RNGestureHandlerModule,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

void facebook::jni::detail::
     MethodWrapper<void(gesturehandler::RNGestureHandlerModule::*)(),&gesturehandler::RNGestureHandlerModule::invalidateNative,gesturehandler::RNGestureHandlerModule,void>
     ::dispatch(JObject *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_hybridDataField_00117270 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_hybridDataField_00117270), iVar2 != 0)) {
    JObject::getClass();
                    /* try { // try from 0010ed7c to 0010ed7f has its CatchHandler @ 0010eda8 */
    uVar5 = FUN_0010ee5c(local_40);
    *(undefined8 *)PTR_hybridDataField_00117268 = uVar5;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_40);
    __cxa_guard_release(PTR_hybridDataField_00117270);
  }
                    /* try { // try from 0010ecfc to 0010ed07 has its CatchHandler @ 0010edc4 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_00117268);
  lVar6 = *(long *)(lVar3 + 0x10);
  if (lVar6 != 0) {
                    /* try { // try from 0010ed14 to 0010ed27 has its CatchHandler @ 0010ee1c */
    plVar4 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar4 + 0xb0))(plVar4,lVar6);
  }
  *(undefined8 *)(lVar3 + 0x10) = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0010ee20  facebook::jni::JObject::getClass =====

/* facebook::jni::JObject::getClass() const */

void facebook::jni::JObject::getClass(void)

{
  undefined8 *in_x0;
  long *plVar1;
  undefined8 uVar2;
  undefined8 *in_x8;
  
                    /* try { // try from 0010ee34 to 0010ee47 has its CatchHandler @ 0010ee58 */
  plVar1 = (long *)facebook::jni::Environment::current();
  uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1,*in_x0);
  *in_x8 = uVar2;
  return;
}


// ===== 0010ee5c  FUN_0010ee5c =====

void FUN_0010ee5c(undefined8 param_1)

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
    if (((*PTR_cls_00117298 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_cls_00117298), iVar2 != 0)) {
                    /* try { // try from 0010ef18 to 0010ef2b has its CatchHandler @ 0010ef50 */
      facebook::jni::findClassStatic(PTR_kBaseName_001172a0);
      __cxa_guard_release(PTR_cls_00117298);
    }
    uVar6 = *(undefined8 *)PTR_cls_00117290;
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar4 = (**(code **)(*plVar5 + 0x2f0))(plVar5,uVar6,"mHybridData",PTR_kDescriptor_001172a8);
    facebook::jni::throwCppExceptionIf(lVar4 == 0);
    if (lVar4 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_28) {
        uVar6 = facebook::jni::throwNPE();
                    /* catch() { ... } // from try @ 0010ef18 with catch @ 0010ef50 */
        lVar4 = __cxa_guard_abort(PTR_cls_00117298);
        if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
          FUN_0010a264(uVar6);
        }
      }
      goto LAB_0010ef78;
    }
  }
  else {
    lVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_0010ef78:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


// ===== 0010ef7c  facebook::jni::getHybridDataFromField =====

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
                    /* try { // try from 0010f024 to 0010f02b has its CatchHandler @ 0010f088 */
    uVar4 = facebook::jni::detail::HybridDestructor::getNativePointer();
    if (local_40 != 0) {
                    /* try { // try from 0010f038 to 0010f04b has its CatchHandler @ 0010f098 */
      plVar2 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar2 + 0xb8))(plVar2,local_40);
    }
  }
  else {
    uVar4 = *(undefined8 *)param_1;
                    /* try { // try from 0010efa8 to 0010efbf has its CatchHandler @ 0010f0dc */
    plVar2 = (long *)facebook::jni::Environment::current();
    auVar5 = (**(code **)(*plVar2 + 0x2f8))(plVar2,uVar4,lVar3);
    local_48 = auVar5._0_8_;
    if (local_48 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0010f084 to 0010f087 has its CatchHandler @ 0010f0b4 */
        uVar4 = throwNPE();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0010f024 with catch @ 0010f088
                        */
        base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
        ::~base_owned_ref((base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
                           *)&local_40);
        if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_0010a264(uVar4);
        }
      }
      goto LAB_0010f0d8;
    }
                    /* try { // try from 0010efc8 to 0010efd3 has its CatchHandler @ 0010f0b4 */
    detail::getHolder<facebook::jni::detail::HybridData>((detail *)&local_48,auVar5._8_8_);
                    /* try { // try from 0010efd4 to 0010efdb has its CatchHandler @ 0010f09c */
    uVar4 = facebook::jni::detail::HybridDestructor::getNativePointer();
    if (local_40 != 0) {
                    /* try { // try from 0010efe8 to 0010effb has its CatchHandler @ 0010f0b0 */
      plVar2 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar2 + 0xb8))(plVar2,local_40);
    }
    lVar3 = local_48;
    if (local_48 != 0) {
                    /* try { // try from 0010f004 to 0010f017 has its CatchHandler @ 0010f0ac */
      plVar2 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar2 + 0xb8))(plVar2,lVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
LAB_0010f0d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0010f0e0  facebook::jni::detail::getHolder<facebook::jni::JObject> =====

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
  
  puVar2 = PTR_holderField_001172b0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_holderField_001172b8 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_holderField_001172b8), iVar3 != 0)) {
    JObject::getClass();
                    /* try { // try from 0010f18c to 0010f193 has its CatchHandler @ 0010f1b4 */
    uVar5 = getDestructorField(abStack_40);
    *(undefined8 *)puVar2 = uVar5;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              (abStack_40);
    __cxa_guard_release(PTR_holderField_001172b8);
  }
  uVar5 = *(undefined8 *)puVar2;
  uVar6 = *(undefined8 *)this;
                    /* try { // try from 0010f124 to 0010f13b has its CatchHandler @ 0010f1e8 */
  plVar4 = (long *)facebook::jni::Environment::current();
  uVar5 = (**(code **)(*plVar4 + 0x2f8))(plVar4,uVar6,uVar5);
  *in_x8 = uVar5;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0010f1ec  facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

/* facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>::~base_owned_ref() */

void __thiscall
facebook::jni::
base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
::~base_owned_ref(base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
                  *this)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)this;
  if (lVar2 != 0) {
                    /* try { // try from 0010f204 to 0010f217 has its CatchHandler @ 0010f228 */
    plVar1 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb8))(plVar1,lVar2);
  }
  *(undefined8 *)this = 0;
  return;
}


// ===== 0010f22c  facebook::jni::throwNPE =====

/* facebook::jni::throwNPE() */

void facebook::jni::throwNPE(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)facebook::jni::throwNewJavaException
                             ("java/lang/NullPointerException","java.lang.NullPointerException");
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar3);
  }
  *plVar1 = 0;
  return;
}


// ===== 0010f248  facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

/* facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>::~base_owned_ref() */

void __thiscall
facebook::jni::
base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
::~base_owned_ref(base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
                  *this)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)this;
  if (lVar2 != 0) {
                    /* try { // try from 0010f260 to 0010f273 has its CatchHandler @ 0010f284 */
    plVar1 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb8))(plVar1,lVar2);
  }
  *(undefined8 *)this = 0;
  return;
}


// ===== 0010f288  facebook::jni::detail::getHolder<facebook::jni::detail::HybridData> =====

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
  
  puVar2 = PTR_holderField_001172c8;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_holderField_001172d0 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_holderField_001172d0), iVar3 != 0)) {
    JObject::getClass();
                    /* try { // try from 0010f334 to 0010f33b has its CatchHandler @ 0010f35c */
    uVar5 = getDestructorField(abStack_40);
    *(undefined8 *)puVar2 = uVar5;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              (abStack_40);
    __cxa_guard_release(PTR_holderField_001172d0);
  }
  uVar5 = *(undefined8 *)puVar2;
  uVar6 = *(undefined8 *)this;
                    /* try { // try from 0010f2cc to 0010f2e3 has its CatchHandler @ 0010f390 */
  plVar4 = (long *)facebook::jni::Environment::current();
  uVar5 = (**(code **)(*plVar4 + 0x2f8))(plVar4,uVar6,uVar5);
  *in_x8 = uVar5;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0010f394  facebook::jni::detail::getDestructorField =====

/* facebook::jni::detail::getDestructorField(facebook::jni::basic_strong_ref<facebook::jni::JClass,
   facebook::jni::LocalReferenceAllocator> const&) */

long facebook::jni::detail::getDestructorField(basic_strong_ref *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)facebook::jni::Environment::current();
  lVar2 = (**(code **)(*plVar1 + 0x2f0))
                    (plVar1,*(undefined8 *)param_1,"mDestructor",PTR_kDescriptor_001172c0);
  facebook::jni::throwCppExceptionIf(lVar2 == 0);
  return lVar2;
}


// ===== 0010f3e8  facebook::jni::detail::HybridClassBase::isHybridClassBase =====

/* facebook::jni::detail::HybridClassBase::isHybridClassBase(facebook::jni::alias_ref<_jclass*>) */

bool facebook::jni::detail::HybridClassBase::isHybridClassBase(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (((*PTR_cls_00117280 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00117280), iVar2 != 0))
  {
                    /* try { // try from 0010f454 to 0010f467 has its CatchHandler @ 0010f478 */
    facebook::jni::findClassStatic(PTR_kBaseName_00117288);
    __cxa_guard_release(PTR_cls_00117280);
  }
  uVar4 = *param_1;
  uVar5 = *(undefined8 *)PTR_cls_00117278;
                    /* try { // try from 0010f418 to 0010f42f has its CatchHandler @ 0010f490 */
  plVar3 = (long *)facebook::jni::Environment::current();
  cVar1 = (**(code **)(*plVar3 + 0x58))(plVar3,uVar4,uVar5);
  return cVar1 != '\0';
}


// ===== 0010f494  facebook::jni::detail::MethodWrapper<bool(gesturehandler::RNGestureHandlerModule::*)(),&gesturehandler::RNGestureHandlerModule::decorateUIRuntime,gesturehandler::RNGestureHandlerModule,bool>::dispatch =====

/* facebook::jni::detail::MethodWrapper<bool (gesturehandler::RNGestureHandlerModule::*)(),
   &gesturehandler::RNGestureHandlerModule::decorateUIRuntime,
   gesturehandler::RNGestureHandlerModule,
   bool>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<gesturehandler::RNGestureHandlerModule,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

uint facebook::jni::detail::
     MethodWrapper<bool(gesturehandler::RNGestureHandlerModule::*)(),&gesturehandler::RNGestureHandlerModule::decorateUIRuntime,gesturehandler::RNGestureHandlerModule,bool>
     ::dispatch(JObject *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  RNGestureHandlerModule *this;
  undefined ***pppuVar4;
  undefined8 uVar5;
  long lVar6;
  Runtime *pRVar7;
  undefined **local_70;
  RNGestureHandlerModule *pRStack_68;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_hybridDataField_00117270 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_hybridDataField_00117270), iVar2 != 0)) {
    JObject::getClass();
                    /* try { // try from 0010f584 to 0010f587 has its CatchHandler @ 0010f5b0 */
    uVar5 = FUN_0010ee5c(local_70);
    *(undefined8 *)PTR_hybridDataField_00117268 = uVar5;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_70);
    __cxa_guard_release(PTR_hybridDataField_00117270);
  }
                    /* try { // try from 0010f4c4 to 0010f4df has its CatchHandler @ 0010f604 */
  this = (RNGestureHandlerModule *)
         getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_00117268);
  pRVar7 = *(Runtime **)(this + 8);
  iVar2 = gesturehandler::RNGestureHandlerModule::getModuleId(this);
  local_70 = &PTR_FUN_00116e10;
                    /* try { // try from 0010f4f4 to 0010f4ff has its CatchHandler @ 0010f5cc */
  pRStack_68 = this;
  local_50 = &local_70;
  uVar3 = gesturehandler::RNGHRuntimeDecorator::installUIRuntimeBindings
                    (pRVar7,iVar2,(function *)&local_70);
  if (local_50 == &local_70) {
    lVar6 = 4;
    pppuVar4 = &local_70;
  }
  else {
    if (local_50 == (undefined ***)0x0) goto LAB_0010f530;
    lVar6 = 5;
    pppuVar4 = local_50;
  }
  (*(code *)(*pppuVar4)[lVar6])();
LAB_0010f530:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0010f65c  gesturehandler::RNGestureHandlerModule::getModuleId =====

/* gesturehandler::RNGestureHandlerModule::getModuleId() */

undefined4 __thiscall
gesturehandler::RNGestureHandlerModule::getModuleId(RNGestureHandlerModule *this)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar1 = tpidr_el0;
  lVar7 = *(long *)(lVar1 + 0x28);
  uVar8 = *(undefined8 *)(this + 0x10);
  plVar3 = (long *)facebook::jni::Environment::current();
  lVar4 = (**(code **)(*plVar3 + 0xa8))(plVar3,uVar8);
  facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0010f6a0 to 0010f6b3 has its CatchHandler @ 0010f770 */
  plVar3 = (long *)facebook::jni::Environment::current();
  lVar5 = (**(code **)(*plVar3 + 0xf8))(plVar3,lVar4);
                    /* try { // try from 0010f6bc to 0010f6ef has its CatchHandler @ 0010f774 */
  plVar3 = (long *)facebook::jni::Environment::current();
  lVar6 = (**(code **)(*plVar3 + 0x2f0))(plVar3,lVar5,"moduleId",PTR_kDescriptor_00117318);
  facebook::jni::throwCppExceptionIf(lVar6 == 0);
                    /* try { // try from 0010f6f0 to 0010f707 has its CatchHandler @ 0010f76c */
  plVar3 = (long *)facebook::jni::Environment::current();
  uVar2 = (**(code **)(*plVar3 + 800))(plVar3,lVar4,lVar6);
  if (lVar5 != 0) {
                    /* try { // try from 0010f710 to 0010f723 has its CatchHandler @ 0010f768 */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb8))(plVar3,lVar5);
  }
  if (lVar4 != 0) {
                    /* try { // try from 0010f728 to 0010f73b has its CatchHandler @ 0010f764 */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb0))(plVar3,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == lVar7) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0010f7a4  FUN_0010f7a4 =====

void FUN_0010f7a4(void)

{
  return;
}


// ===== 0010f7a8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001173c8)();
  return;
}


// ===== 0010f7ac  FUN_0010f7ac =====

void FUN_0010f7ac(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00116e10;
  puVar1[1] = uVar2;
  return;
}


// ===== 0010f7e0  FUN_0010f7e0 =====

void FUN_0010f7e0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00116e10;
  param_2[1] = uVar1;
  return;
}


// ===== 0010f7f4  FUN_0010f7f4 =====

void FUN_0010f7f4(void)

{
  return;
}


// ===== 0010f7f8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001173c8)();
  return;
}


// ===== 0010f7fc  FUN_0010f7fc =====

void FUN_0010f7fc(long param_1,int *param_2,int *param_3)

{
  gesturehandler::RNGestureHandlerModule::setGestureState
            (*(RNGestureHandlerModule **)(param_1 + 8),*param_2,*param_3);
  return;
}


// ===== 0010f80c  FUN_0010f80c =====

long FUN_0010f80c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZN14gesturehandler22RNGestureHandlerModule17decorateUIRuntimeEvE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0010f828  FUN_0010f828 =====

pointer_____offset_0x10___ * FUN_0010f828(void)

{
  return &PTR_vtable_00116e70;
}


// ===== 0010f834  gesturehandler::RNGestureHandlerModule::setGestureState =====

/* gesturehandler::RNGestureHandlerModule::setGestureState(int, int) */

void __thiscall
gesturehandler::RNGestureHandlerModule::setGestureState
          (RNGestureHandlerModule *this,int param_1,int param_2)

{
  long lVar1;
  int iVar2;
  _jobject *p_Var3;
  _jmethodID *p_Var4;
  base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> abStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((DAT_0011bee8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&DAT_0011bee8,(ulong)(uint)param_1,(ulong)(uint)param_2),
     iVar2 != 0)) {
                    /* try { // try from 0010f8d0 to 0010f8d7 has its CatchHandler @ 0010f90c */
    FUN_0010f938(abStack_50);
                    /* try { // try from 0010f8d8 to 0010f8df has its CatchHandler @ 0010f8fc */
    DAT_0011bee0 = FUN_0010f9a4(abStack_50);
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref(abStack_50);
    __cxa_guard_release(&DAT_0011bee8);
  }
  p_Var4 = *(_jmethodID **)(this + 0x10);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var3,p_Var4,DAT_0011bee0,(ulong)(uint)param_1,(ulong)(uint)param_2);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0010f938  FUN_0010f938 =====

void FUN_0010f938(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  pcVar7 = (char *)operator_new(0x40);
  uVar6 = s_Lcom_swmansion_gesturehandler_re_00106576._33_8_;
  uVar5 = s_Lcom_swmansion_gesturehandler_re_00106576._25_8_;
  uVar4 = s_Lcom_swmansion_gesturehandler_re_00106576._17_8_;
  uVar3 = s_Lcom_swmansion_gesturehandler_re_00106576._9_8_;
  uVar2 = s_Lcom_swmansion_gesturehandler_re_00106576._1_8_;
  uVar1 = CONCAT71(s_Lcom_swmansion_gesturehandler_re_00106576._42_7_,
                   s_Lcom_swmansion_gesturehandler_re_00106576[0x29]);
  pcVar7[0x39] = '\0';
  *(undefined8 *)(pcVar7 + 0x28) = uVar1;
  *(undefined8 *)(pcVar7 + 0x20) = uVar6;
  *(undefined8 *)(pcVar7 + 8) = uVar3;
  *(undefined8 *)pcVar7 = uVar2;
  *(undefined8 *)(pcVar7 + 0x18) = uVar5;
  *(undefined8 *)(pcVar7 + 0x10) = uVar4;
  uVar1 = CONCAT17(s_Lcom_swmansion_gesturehandler_re_00106576[0x31],
                   s_Lcom_swmansion_gesturehandler_re_00106576._42_7_);
  *(undefined8 *)(pcVar7 + 0x31) = s_Lcom_swmansion_gesturehandler_re_00106576._50_8_;
  *(undefined8 *)(pcVar7 + 0x29) = uVar1;
                    /* try { // try from 0010f978 to 0010f97f has its CatchHandler @ 0010f990 */
  facebook::jni::findClassLocal(pcVar7);
  operator_delete(pcVar7);
  return;
}


// ===== 0010f9a4  FUN_0010f9a4 =====

long FUN_0010f9a4(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)facebook::jni::Environment::current();
  lVar2 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,*param_1,"setGestureHandlerState",PTR_kDescriptor_00117310);
  facebook::jni::throwCppExceptionIf(lVar2 == 0);
  return lVar2;
}


// ===== 0010f9f8  _JNIEnv::CallVoidMethod =====

/* _JNIEnv::CallVoidMethod(_jobject*, _jmethodID*, ...) */

void _JNIEnv::CallVoidMethod(_jobject *param_1,_jmethodID *param_2,...)

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
  (**(code **)(*(long *)param_1 + 0x1f0))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0010fa94  facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::BindingsInstallerHolder,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(gesturehandler::RNGestureHandlerModule::*)(),&gesturehandler::RNGestureHandlerModule::getBindingsInstallerCxx,gesturehandler::RNGestureHandlerModule,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::BindingsInstallerHolder,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>::dispatch =====

/* facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::BindingsInstallerHolder,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator> (gesturehandler::RNGestureHandlerModule::*)(),
   &gesturehandler::RNGestureHandlerModule::getBindingsInstallerCxx,
   gesturehandler::RNGestureHandlerModule,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::BindingsInstallerHolder,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<gesturehandler::RNGestureHandlerModule,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

void facebook::jni::detail::
     MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::BindingsInstallerHolder,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(gesturehandler::RNGestureHandlerModule::*)(),&gesturehandler::RNGestureHandlerModule::getBindingsInstallerCxx,gesturehandler::RNGestureHandlerModule,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::BindingsInstallerHolder,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>
     ::dispatch(JObject *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_00117270 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_00117270);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 0010fb24 to 0010fb27 has its CatchHandler @ 0010fb50 */
      uVar3 = FUN_0010ee5c(local_30);
      *(undefined8 *)PTR_hybridDataField_00117268 = uVar3;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_30);
      __cxa_guard_release(PTR_hybridDataField_00117270);
    }
  }
                    /* try { // try from 0010fac4 to 0010fad7 has its CatchHandler @ 0010fb6c */
  getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_00117268);
  gesturehandler::RNGestureHandlerModule::getBindingsInstallerCxx();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0010fbc4  gesturehandler::RNGestureHandlerModule::getBindingsInstallerCxx =====

/* gesturehandler::RNGestureHandlerModule::getBindingsInstallerCxx() */

void gesturehandler::RNGestureHandlerModule::getBindingsInstallerCxx(void)

{
  long lVar1;
  undefined *puVar2;
  _jmethodID *p_Var3;
  byte bVar4;
  int iVar5;
  BindingsInstallerHolder *pBVar6;
  undefined ***pppuVar7;
  _jclass *p_Var8;
  long *plVar9;
  BindingsInstallerHolder *pBVar10;
  long lVar11;
  bad_alloc *this;
  long *in_x8;
  long lVar12;
  undefined8 uVar13;
  long local_c8;
  long local_b8;
  undefined **local_b0 [4];
  undefined ***local_90;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  BindingsInstallerHolder *local_68;
  BindingsInstallerHolder *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_0011bf48 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0011bf48), iVar5 != 0)) {
                    /* try { // try from 0010ffd0 to 0010ffe7 has its CatchHandler @ 001101a0 */
    FUN_00110334(&local_80);
    local_78 = local_80;
    bVar4 = facebook::jni::detail::HybridClassBase::isHybridClassBase(&local_78);
    DAT_0011bf40 = bVar4 & 1;
    __cxa_guard_release(&DAT_0011bf48);
  }
  pBVar6 = (BindingsInstallerHolder *)operator_new(0x40);
  local_b0[0] = &PTR_FUN_00116cf0;
                    /* try { // try from 0010fc24 to 0010fc2b has its CatchHandler @ 00110240 */
  local_90 = local_b0;
  facebook::react::BindingsInstallerHolder::BindingsInstallerHolder(pBVar6,local_b0);
  if (local_90 == local_b0) {
    lVar12 = 4;
    pppuVar7 = local_b0;
LAB_0010fc4c:
    (*(code *)(*pppuVar7)[lVar12])();
  }
  else if (local_90 != (undefined ***)0x0) {
    lVar12 = 5;
    pppuVar7 = local_90;
    goto LAB_0010fc4c;
  }
  if (DAT_0011bf40 == 0) {
                    /* try { // try from 0010fd74 to 0010fd7b has its CatchHandler @ 001101e8 */
    facebook::jni::detail::HybridData::create();
                    /* try { // try from 0010fd80 to 0010fd9b has its CatchHandler @ 00110298 */
    plVar9 = (long *)facebook::jni::Environment::current();
    pBVar10 = (BindingsInstallerHolder *)(**(code **)(*plVar9 + 200))(plVar9,local_b8);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0010fda0 to 0010fdab has its CatchHandler @ 001101c4 */
    local_68 = pBVar6;
    local_60 = pBVar10;
    FUN_001105b4(&local_60,&local_68);
    pBVar6 = local_68;
    local_68 = (BindingsInstallerHolder *)0x0;
    if (pBVar6 != (BindingsInstallerHolder *)0x0) {
      (**(code **)(*(long *)pBVar6 + 8))();
    }
    pBVar6 = local_60;
    if (local_60 != (BindingsInstallerHolder *)0x0) {
                    /* try { // try from 0010fdcc to 0010fddf has its CatchHandler @ 00110204 */
      plVar9 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar9 + 0xb8))(plVar9,pBVar6);
    }
                    /* try { // try from 0010fde4 to 0010fdff has its CatchHandler @ 00110290 */
    plVar9 = (long *)facebook::jni::Environment::current();
    lVar12 = (**(code **)(*plVar9 + 200))(plVar9,local_b8);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0010fe04 to 0010fe1f has its CatchHandler @ 00110288 */
    plVar9 = (long *)facebook::jni::Environment::current();
    lVar11 = (**(code **)(*plVar9 + 200))(plVar9,lVar12);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_70 = lVar11;
    if (((DAT_0011bf98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0011bf98), iVar5 != 0)) {
      FUN_0011043c(&DAT_0011bf90);
      __cxa_guard_release(&DAT_0011bf98);
    }
    if (((DAT_0011bfa8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0011bfa8), iVar5 != 0)) {
                    /* try { // try from 0011010c to 0011010f has its CatchHandler @ 00110124 */
      DAT_0011bfa0 = FUN_001104c4();
      __cxa_guard_release(&DAT_0011bfa8);
    }
    lVar11 = local_70;
    uVar13 = DAT_0011bfa0;
                    /* try { // try from 0010fe50 to 0010fe6b has its CatchHandler @ 00110280 */
    plVar9 = (long *)facebook::jni::Environment::current();
    pBVar6 = (BindingsInstallerHolder *)(**(code **)(*plVar9 + 200))(plVar9,lVar11);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_68 = pBVar6;
                    /* try { // try from 0010fe70 to 0010fe9b has its CatchHandler @ 001102c0 */
    p_Var8 = (_jclass *)facebook::jni::Environment::current();
    p_Var3 = DAT_0011bf90;
    plVar9 = (long *)facebook::jni::Environment::current();
    pBVar10 = (BindingsInstallerHolder *)(**(code **)(*plVar9 + 200))(plVar9,pBVar6);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_60 = pBVar10;
                    /* try { // try from 0010fea0 to 0010feb3 has its CatchHandler @ 001101b4 */
    local_c8 = _JNIEnv::NewObject(p_Var8,p_Var3,uVar13,pBVar10);
    if (pBVar10 != (BindingsInstallerHolder *)0x0) {
                    /* try { // try from 0010febc to 0010fecf has its CatchHandler @ 00110200 */
      plVar9 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar9 + 0xb8))(plVar9,pBVar10);
    }
                    /* try { // try from 0010fed8 to 0010fedb has its CatchHandler @ 001102c0 */
    facebook::jni::throwCppExceptionIf(local_c8 == 0);
    if (pBVar6 != (BindingsInstallerHolder *)0x0) {
                    /* try { // try from 0010fee0 to 0010fef3 has its CatchHandler @ 001101fc */
      plVar9 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar9 + 0xb8))(plVar9,pBVar6);
    }
    if (lVar11 != 0) {
                    /* try { // try from 0010fef8 to 0010ff0b has its CatchHandler @ 001101f8 */
      plVar9 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar9 + 0xb8))(plVar9,lVar11);
    }
    if (lVar12 != 0) {
                    /* try { // try from 0010ff18 to 0010ff2b has its CatchHandler @ 001101f4 */
      plVar9 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar9 + 0xb8))(plVar9,lVar12);
    }
    if (local_b8 != 0) {
                    /* try { // try from 0010ff38 to 0010ff4b has its CatchHandler @ 001101f0 */
      plVar9 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar9 + 0xb8))(plVar9,local_b8);
    }
  }
  else {
    if (((DAT_0011bf68 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0011bf68), iVar5 != 0)) {
      FUN_0011043c(&DAT_0011bf60);
      __cxa_guard_release(&DAT_0011bf68);
    }
    if (((DAT_0011bf78 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0011bf78), iVar5 != 0)) {
                    /* try { // try from 00110040 to 00110043 has its CatchHandler @ 00110178 */
      DAT_0011bf70 = FUN_0011068c();
      __cxa_guard_release(&DAT_0011bf78);
    }
    uVar13 = DAT_0011bf70;
                    /* try { // try from 0010fc90 to 0010fcb3 has its CatchHandler @ 001102ec */
    p_Var8 = (_jclass *)facebook::jni::Environment::current();
    local_c8 = _JNIEnv::NewObject(p_Var8,DAT_0011bf60,uVar13);
    facebook::jni::throwCppExceptionIf(local_c8 == 0);
                    /* try { // try from 0010fcb8 to 0010fcd3 has its CatchHandler @ 001102e8 */
    plVar9 = (long *)facebook::jni::Environment::current();
    lVar12 = (**(code **)(*plVar9 + 200))(plVar9,local_c8);
    facebook::jni::throwPendingJniExceptionAsCppException();
    puVar2 = PTR_holderField_001172f8;
    local_70 = lVar12;
    if (((*PTR_holderField_00117300 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_holderField_00117300), iVar5 != 0)) {
      facebook::jni::JObject::getClass();
                    /* try { // try from 00110074 to 0011007b has its CatchHandler @ 0011014c */
      uVar13 = facebook::jni::detail::getDestructorField((basic_strong_ref *)&local_60);
      *(undefined8 *)puVar2 = uVar13;
      facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
      ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                       *)&local_60);
      __cxa_guard_release(PTR_holderField_00117300);
    }
    lVar12 = local_70;
    uVar13 = *(undefined8 *)puVar2;
                    /* try { // try from 0010fcf8 to 0010fd0f has its CatchHandler @ 001102bc */
    plVar9 = (long *)facebook::jni::Environment::current();
    local_68 = (BindingsInstallerHolder *)(**(code **)(*plVar9 + 0x2f8))(plVar9,lVar12,uVar13);
                    /* try { // try from 0010fd14 to 0010fd1f has its CatchHandler @ 00110208 */
    local_60 = pBVar6;
    facebook::jni::detail::HybridDestructor::setNativePointer(&local_68,&local_60);
    pBVar6 = local_60;
    local_60 = (BindingsInstallerHolder *)0x0;
    if (pBVar6 != (BindingsInstallerHolder *)0x0) {
      (**(code **)(*(long *)pBVar6 + 8))();
    }
    pBVar6 = local_68;
    if (local_68 != (BindingsInstallerHolder *)0x0) {
                    /* try { // try from 0010fd40 to 0010fd53 has its CatchHandler @ 0011023c */
      plVar9 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar9 + 0xb8))(plVar9,pBVar6);
    }
    lVar12 = local_70;
    if (local_70 != 0) {
                    /* try { // try from 0010fd5c to 0010fd6f has its CatchHandler @ 00110238 */
      plVar9 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar9 + 0xb8))(plVar9,lVar12);
    }
  }
  if (local_c8 == 0) {
    *in_x8 = 0;
  }
  else {
                    /* try { // try from 0010ff54 to 0010ff6f has its CatchHandler @ 0011030c */
    plVar9 = (long *)facebook::jni::Environment::current();
    lVar12 = (**(code **)(*plVar9 + 200))(plVar9,local_c8);
    facebook::jni::throwPendingJniExceptionAsCppException();
    if (lVar12 == 0) {
      this = (bad_alloc *)__cxa_allocate_exception(8);
      std::bad_alloc::bad_alloc(this);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 001100b8 to 001100cf has its CatchHandler @ 0011030c */
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,PTR_typeinfo_00117328,PTR__bad_alloc_00117320);
      }
      goto LAB_00110330;
    }
    *in_x8 = lVar12;
                    /* try { // try from 0010ff78 to 0010ff8b has its CatchHandler @ 001102b8 */
    plVar9 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar9 + 0xb8))(plVar9,local_c8);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_00110330:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00110334  FUN_00110334 =====

void FUN_00110334(undefined8 *param_1)

{
  int iVar1;
  
  if (((*PTR_cls_001172e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_cls_001172e0), iVar1 != 0))
  {
                    /* try { // try from 00110380 to 00110393 has its CatchHandler @ 001103a4 */
    facebook::jni::findClassStatic(PTR_kBaseName_001172e8);
    __cxa_guard_release(PTR_cls_001172e0);
  }
  *param_1 = *(undefined8 *)PTR_cls_001172d8;
  return;
}


// ===== 001103bc  FUN_001103bc =====

void FUN_001103bc(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
                    /* try { // try from 001103d4 to 001103e7 has its CatchHandler @ 001103f8 */
    plVar1 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb8))(plVar1,lVar2);
  }
  *param_1 = 0;
  return;
}


// ===== 001103fc  FUN_001103fc =====

void FUN_001103fc(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
                    /* try { // try from 00110414 to 00110427 has its CatchHandler @ 00110438 */
    plVar1 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb8))(plVar1,lVar2);
  }
  *param_1 = 0;
  return;
}


// ===== 0011043c  FUN_0011043c =====

void FUN_0011043c(undefined8 *param_1)

{
  int iVar1;
  
  if (((*PTR_cls_001172e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_cls_001172e0), iVar1 != 0))
  {
                    /* try { // try from 00110488 to 0011049b has its CatchHandler @ 001104ac */
    facebook::jni::findClassStatic(PTR_kBaseName_001172e8);
    __cxa_guard_release(PTR_cls_001172e0);
  }
  *param_1 = *(undefined8 *)PTR_cls_001172d8;
  return;
}


// ===== 001104c4  FUN_001104c4 =====

long FUN_001104c4(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)facebook::jni::Environment::current();
  lVar2 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,DAT_0011bf90,"<init>",PTR_kConstructorDescriptor_00117308);
  facebook::jni::throwCppExceptionIf(lVar2 == 0);
  return lVar2;
}


// ===== 00110518  _JNIEnv::NewObject =====

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


// ===== 001105b4  FUN_001105b4 =====

void FUN_001105b4(detail *param_1,HybridData *param_2)

{
  long lVar1;
  long *plVar2;
  long *local_38;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::getHolder<facebook::jni::detail::HybridData>(param_1,param_2);
  local_38 = *(long **)param_2;
  *(undefined8 *)param_2 = 0;
                    /* try { // try from 001105e8 to 001105f3 has its CatchHandler @ 00110648 */
  facebook::jni::detail::HybridDestructor::setNativePointer(&local_30,&local_38);
  plVar2 = local_38;
  local_38 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (local_30 != 0) {
                    /* try { // try from 00110614 to 00110627 has its CatchHandler @ 00110688 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011068c  FUN_0011068c =====

long FUN_0011068c(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)facebook::jni::Environment::current();
  lVar2 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,DAT_0011bf60,"<init>",PTR_kConstructorDescriptor_001172f0);
  facebook::jni::throwCppExceptionIf(lVar2 == 0);
  return lVar2;
}


// ===== 001106e0  FUN_001106e0 =====

void FUN_001106e0(void)

{
  return;
}


// ===== 001106e4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001173c8)();
  return;
}


// ===== 001106e8  FUN_001106e8 =====

void FUN_001106e8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00116cf0;
  puVar1[1] = uVar2;
  return;
}


// ===== 0011071c  FUN_0011071c =====

void FUN_0011071c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00116cf0;
  param_2[1] = uVar1;
  return;
}


// ===== 00110730  FUN_00110730 =====

void FUN_00110730(void)

{
  return;
}


// ===== 00110734  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001173c8)();
  return;
}


// ===== 00110738  FUN_00110738 =====

void FUN_00110738(long param_1,Runtime *param_2)

{
  long lVar1;
  int iVar2;
  undefined ***pppuVar3;
  long lVar4;
  RNGestureHandlerModule *this;
  undefined **local_70;
  RNGestureHandlerModule *pRStack_68;
  long *local_50;
  long local_38;
  
  pppuVar3 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = *(RNGestureHandlerModule **)(param_1 + 8);
  *(Runtime **)(this + 8) = param_2;
  iVar2 = gesturehandler::RNGestureHandlerModule::getModuleId(this);
  local_70 = &PTR_FUN_00116d70;
  pRStack_68 = this;
  local_50 = (long *)&local_70;
                    /* try { // try from 00110784 to 0011078f has its CatchHandler @ 001107e0 */
  gesturehandler::RNGHRuntimeDecorator::installRNRuntimeBindings
            (param_2,iVar2,(function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_001107bc;
    lVar4 = 5;
    pppuVar3 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar3 + lVar4 * 8))();
LAB_001107bc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00110830  FUN_00110830 =====

long FUN_00110830(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZN14gesturehandler22RNGestureHandlerModule23getBindingsInstallerCxxEvE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0011084c  FUN_0011084c =====

pointer_____offset_0x10___ * FUN_0011084c(void)

{
  return &PTR_vtable_00116df0;
}


// ===== 00110858  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001173c8)();
  return;
}


// ===== 0011085c  FUN_0011085c =====

void FUN_0011085c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00116d70;
  puVar1[1] = uVar2;
  return;
}


// ===== 00110890  FUN_00110890 =====

void FUN_00110890(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00116d70;
  param_2[1] = uVar1;
  return;
}


// ===== 001108a4  FUN_001108a4 =====

void FUN_001108a4(void)

{
  return;
}


// ===== 001108a8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001173c8)();
  return;
}


// ===== 001108ac  FUN_001108ac =====

void FUN_001108ac(long param_1,int *param_2,int *param_3)

{
  gesturehandler::RNGestureHandlerModule::setGestureState
            (*(RNGestureHandlerModule **)(param_1 + 8),*param_2,*param_3);
  return;
}


// ===== 001108bc  FUN_001108bc =====

long FUN_001108bc(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN14gesturehandler22RNGestureHandlerModule23getBindingsInstallerCxxEvENK3$_0clERN8facebook3jsi7RuntimeEEUliiE_"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 001108d8  FUN_001108d8 =====

pointer_____offset_0x10___ * FUN_001108d8(void)

{
  return &PTR_vtable_00116de0;
}


// ===== 001108e4  gesturehandler::RNGestureHandlerModule::initHybrid =====

/* gesturehandler::RNGestureHandlerModule::initHybrid(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<gesturehandler::RNGestureHandlerModule,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

void __thiscall
gesturehandler::RNGestureHandlerModule::initHybrid(undefined8 *param_1,RNGestureHandlerModule *this)

{
  long lVar1;
  undefined8 uVar2;
  RNGestureHandlerModule *pRVar3;
  long *plVar4;
  long lVar5;
  RNGestureHandlerModule *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pRVar3 = (RNGestureHandlerModule *)operator_new(0x18);
  local_48 = *(undefined8 *)this;
                    /* try { // try from 00110920 to 00110927 has its CatchHandler @ 001109fc */
  RNGestureHandlerModule(pRVar3,&local_48);
                    /* try { // try from 00110928 to 0011092f has its CatchHandler @ 001109f4 */
  facebook::jni::detail::HybridData::create();
  uVar2 = local_50;
                    /* try { // try from 00110934 to 0011094f has its CatchHandler @ 00110a10 */
  plVar4 = (long *)facebook::jni::Environment::current();
  lVar5 = (**(code **)(*plVar4 + 200))(plVar4,uVar2);
  facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 00110958 to 00110963 has its CatchHandler @ 001109c4 */
  local_58 = pRVar3;
  local_40 = lVar5;
  FUN_001105b4(&local_40,&local_58);
  pRVar3 = local_58;
  local_58 = (RNGestureHandlerModule *)0x0;
  if (pRVar3 != (RNGestureHandlerModule *)0x0) {
    (**(code **)(*(long *)pRVar3 + 8))();
  }
  lVar5 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 00110984 to 00110997 has its CatchHandler @ 00110a0c */
    plVar4 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar4 + 0xb8))(plVar4,lVar5);
  }
  *param_1 = local_50;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00110a48  gesturehandler::RNGestureHandlerModule::decorateUIRuntime =====

/* gesturehandler::RNGestureHandlerModule::decorateUIRuntime() */

uint __thiscall
gesturehandler::RNGestureHandlerModule::decorateUIRuntime(RNGestureHandlerModule *this)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined ***pppuVar4;
  long lVar5;
  Runtime *pRVar6;
  undefined **local_70;
  RNGestureHandlerModule *pRStack_68;
  long *local_50;
  long local_38;
  
  pppuVar4 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pRVar6 = *(Runtime **)(this + 8);
  iVar2 = getModuleId(this);
  local_70 = &PTR_FUN_00116e10;
  pRStack_68 = this;
  local_50 = (long *)&local_70;
                    /* try { // try from 00110a8c to 00110a97 has its CatchHandler @ 00110af0 */
  uVar3 = RNGHRuntimeDecorator::installUIRuntimeBindings(pRVar6,iVar2,(function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar5 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00110ac8;
    lVar5 = 5;
    pppuVar4 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar4 + lVar5 * 8))();
LAB_00110ac8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00110b40  gesturehandler::RNGestureHandlerModule::invalidateNative =====

/* gesturehandler::RNGestureHandlerModule::invalidateNative() */

void __thiscall
gesturehandler::RNGestureHandlerModule::invalidateNative(RNGestureHandlerModule *this)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x10);
  if (lVar2 != 0) {
                    /* try { // try from 00110b58 to 00110b6b has its CatchHandler @ 00110b7c */
    plVar1 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb0))(plVar1,lVar2);
  }
  *(undefined8 *)(this + 0x10) = 0;
  return;
}


// ===== 00110b80  gesturehandler::RNGHRuntimeDecorator::installRNRuntimeBindings =====

/* gesturehandler::RNGHRuntimeDecorator::installRNRuntimeBindings(facebook::jsi::Runtime&, int,
   std::__ndk1::function<void (int, int)>&&) */

void gesturehandler::RNGHRuntimeDecorator::installRNRuntimeBindings
               (Runtime *param_1,int param_2,function *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  long *plVar4;
  function *pfVar5;
  long lVar6;
  function **ppfVar7;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  long local_110 [4];
  function *local_f0 [2];
  long local_e0 [4];
  long *local_c0;
  undefined **local_b0 [4];
  undefined ***local_90;
  undefined **local_80;
  double local_78;
  undefined ***local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)param_1 + 0x98))(&local_118,param_1,"_isViewFlatteningDisabled",0x19);
  local_90 = local_b0;
  local_b0[0] = &PTR_FUN_00116e90;
  local_80 = &PTR_FUN_00116e90;
                    /* try { // try from 00110bf4 to 00110c0b has its CatchHandler @ 00111130 */
  local_60 = &local_80;
  (**(code **)(*(long *)param_1 + 0x278))(&local_120,param_1,&local_118,1,&local_80);
  if (local_60 == &local_80) {
    lVar6 = 4;
    pppuVar3 = &local_80;
LAB_00110c2c:
    (*(code *)(*pppuVar3)[lVar6])();
  }
  else if (local_60 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar3 = local_60;
    goto LAB_00110c2c;
  }
  if (local_90 == local_b0) {
    lVar6 = 4;
    pppuVar3 = local_b0;
LAB_00110c5c:
    (*(code *)(*pppuVar3)[lVar6])();
  }
  else if (local_90 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar3 = local_90;
    goto LAB_00110c5c;
  }
  if (local_118 != (undefined8 *)0x0) {
    (**(code **)*local_118)();
  }
                    /* try { // try from 00110c84 to 00110c8f has its CatchHandler @ 0011112c */
  (**(code **)(*(long *)param_1 + 0x30))(&local_128,param_1);
                    /* try { // try from 00110c98 to 00110caf has its CatchHandler @ 00111124 */
  (**(code **)(*(long *)param_1 + 0x108))(&local_118,param_1,"_isViewFlatteningDisabled",0x19);
  local_80 = (undefined **)CONCAT44(local_80._4_4_,7);
                    /* try { // try from 00110cc4 to 00110ccb has its CatchHandler @ 00111100 */
  local_78 = (double)(**(code **)(*(long *)param_1 + 0x88))(param_1,local_120);
                    /* try { // try from 00110cd8 to 00110ceb has its CatchHandler @ 001110f0 */
  (**(code **)(*(long *)param_1 + 0x1b8))(param_1,&local_128,&local_118,&local_80);
  facebook::jsi::Value::~Value((Value *)&local_80);
  if (local_118 != (undefined8 *)0x0) {
    (**(code **)*local_118)();
  }
  if (local_128 != (undefined8 *)0x0) {
    (**(code **)*local_128)();
  }
                    /* try { // try from 00110d1c to 00110d4b has its CatchHandler @ 001111d8 */
  uVar2 = __strlen_chk("_setGestureStateAsync",0x16);
  (**(code **)(*(long *)param_1 + 0x98))(&local_118,param_1,"_setGestureStateAsync",uVar2);
  local_f0[0] = *(function **)(param_3 + 0x20);
  if (local_f0[0] != (function *)0x0) {
    if (local_f0[0] == param_3) {
      local_f0[0] = (function *)local_110;
      (**(code **)(*(long *)param_3 + 0x18))(param_3,local_110);
    }
    else {
                    /* try { // try from 00110d64 to 00110d8b has its CatchHandler @ 00110ff0 */
      local_f0[0] = (function *)(**(code **)(*(undefined **)local_f0[0] + 0x10))();
    }
  }
  local_c0 = (long *)0x0;
                    /* try { // try from 00110d90 to 00110d97 has its CatchHandler @ 001110b0 */
  pppuVar3 = (undefined ***)operator_new(0x40);
  *pppuVar3 = &PTR_FUN_00116f20;
  if (local_f0[0] == (function *)0x0) {
    ppfVar7 = (function **)(pppuVar3 + 6);
LAB_00110dcc:
    *ppfVar7 = (function *)0x0;
  }
  else {
    if (local_f0[0] != (function *)local_110) {
      ppfVar7 = local_f0;
      pppuVar3[6] = (undefined **)local_f0[0];
      goto LAB_00110dcc;
    }
    pppuVar3[6] = (undefined **)(pppuVar3 + 2);
                    /* try { // try from 00110de0 to 00110def has its CatchHandler @ 00110fec */
    (**(code **)(local_110[0] + 0x18))(local_110);
  }
  local_c0 = (long *)0x0;
                    /* try { // try from 00110e00 to 00110e1b has its CatchHandler @ 00111048 */
  local_60 = pppuVar3;
  (**(code **)(*(long *)param_1 + 0x278))(&local_128,param_1,&local_118,2,&local_80);
  if (local_60 == &local_80) {
    lVar6 = 4;
    pppuVar3 = &local_80;
LAB_00110e3c:
    (*(code *)(*pppuVar3)[lVar6])();
  }
  else if (local_60 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar3 = local_60;
    goto LAB_00110e3c;
  }
  if (local_c0 == local_e0) {
    lVar6 = 4;
    plVar4 = local_e0;
LAB_00110e6c:
    (**(code **)(*plVar4 + lVar6 * 8))();
  }
  else if (local_c0 != (long *)0x0) {
    lVar6 = 5;
    plVar4 = local_c0;
    goto LAB_00110e6c;
  }
  if (local_f0[0] == (function *)local_110) {
    lVar6 = 4;
    pfVar5 = (function *)local_110;
  }
  else {
    if (local_f0[0] == (function *)0x0) goto LAB_00110ea8;
    lVar6 = 5;
    pfVar5 = local_f0[0];
  }
  (**(code **)(*(undefined **)pfVar5 + lVar6 * 8))();
LAB_00110ea8:
  if (local_118 != (undefined8 *)0x0) {
    (**(code **)*local_118)();
  }
                    /* try { // try from 00110ec4 to 00110ecf has its CatchHandler @ 00111040 */
  (**(code **)(*(long *)param_1 + 0x30))(&local_80,param_1);
                    /* try { // try from 00110ed0 to 00110ee7 has its CatchHandler @ 00111020 */
  FUN_0011120c(&local_80,param_1,"_setGestureStateAsync",&local_128);
  if (local_80 != (undefined **)0x0) {
    (**(code **)*local_80)();
  }
  local_78 = (double)param_2;
  local_80 = (undefined **)CONCAT44(local_80._4_4_,3);
                    /* try { // try from 00110f14 to 00110f1f has its CatchHandler @ 00111018 */
  (**(code **)(*(long *)param_1 + 0x30))(&local_130,param_1);
                    /* try { // try from 00110f20 to 00110f4f has its CatchHandler @ 001111a0 */
  uVar2 = __strlen_chk("_RNGH_MODULE_ID",0x10);
  (**(code **)(*(long *)param_1 + 0x108))(&local_118,param_1,"_RNGH_MODULE_ID",uVar2);
                    /* try { // try from 00110f58 to 00110f6b has its CatchHandler @ 00110ff8 */
  (**(code **)(*(long *)param_1 + 0x1b8))(param_1,&local_130,&local_118,&local_80);
  if (local_118 != (undefined8 *)0x0) {
    (**(code **)*local_118)();
  }
  if (local_130 != (undefined8 *)0x0) {
    (**(code **)*local_130)();
  }
  facebook::jsi::Value::~Value((Value *)&local_80);
  if (local_128 != (undefined8 *)0x0) {
    (**(code **)*local_128)();
  }
  if (local_120 != (undefined8 *)0x0) {
    (**(code **)*local_120)();
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0011120c  FUN_0011120c =====

void FUN_0011120c(undefined8 param_1,long *param_2,char *param_3,undefined8 *param_4)

{
  long lVar1;
  size_t sVar2;
  undefined8 *local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  sVar2 = strlen(param_3);
  (**(code **)(*param_2 + 0x108))(&local_60,param_2,param_3,sVar2);
  local_58[0] = 7;
                    /* try { // try from 00111278 to 0011127f has its CatchHandler @ 001112f4 */
  local_50 = (**(code **)(*param_2 + 0x88))(param_2,*param_4);
                    /* try { // try from 0011128c to 0011129f has its CatchHandler @ 001112e4 */
  (**(code **)(*param_2 + 0x1b8))(param_2,param_1,&local_60,local_58);
  facebook::jsi::Value::~Value((Value *)local_58);
  if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00111330  FUN_00111330 =====

void FUN_00111330(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_00116f20;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0011136c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 00111374  FUN_00111374 =====

void FUN_00111374(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_00116f20;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_001113c0;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_001113c0:
  operator_delete(param_1);
  return;
}


// ===== 001113d0  FUN_001113d0 =====

undefined8 * FUN_001113d0(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  plVar2 = *(long **)(param_1 + 0x30);
  *puVar1 = &PTR_FUN_00116f20;
  if (plVar2 != (long *)0x0) {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      lVar3 = *plVar2;
      puVar1[6] = puVar1 + 2;
      (**(code **)(lVar3 + 0x18))();
      return puVar1;
    }
                    /* try { // try from 00111418 to 00111433 has its CatchHandler @ 00111444 */
    plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  puVar1[6] = plVar2;
  return puVar1;
}


// ===== 00111458  FUN_00111458 =====

void FUN_00111458(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_00116f20;
  if (plVar2 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
                    /* WARNING: Could not recover jumptable at 0x001114c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
      return;
    }
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    param_2[6] = uVar1;
  }
  return;
}


// ===== 001114cc  FUN_001114cc =====

void FUN_001114cc(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x30);
  plVar2 = (long *)(param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x001114fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 00111504  FUN_00111504 =====

void FUN_00111504(void *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)((long)param_1 + 0x30);
  plVar2 = (long *)((long)param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00111544;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_00111544:
  operator_delete(param_1);
  return;
}


// ===== 00111554  FUN_00111554 =====

void FUN_00111554(undefined4 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *in_x4;
  int iVar3;
  double dVar4;
  int local_50;
  int iStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*in_x4 == 2) {
    dVar4 = (double)facebook::jsi::Value::asNumber();
    iVar3 = (int)dVar4;
    dVar4 = (double)facebook::jsi::Value::asNumber();
    local_50 = (int)dVar4;
    plVar2 = *(long **)(param_2 + 0x30);
    iStack_4c = iVar3;
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
        FUN_00111634();
      }
      goto LAB_00111608;
    }
    (**(code **)(*plVar2 + 0x30))(plVar2,&iStack_4c,&local_50);
  }
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00111608:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011160c  FUN_0011160c =====

long FUN_0011160c(long param_1,long param_2)

{
  param_1 = param_1 + 0x10;
  if (*(char **)(param_2 + 8) !=
      "ZN14gesturehandler20RNGHRuntimeDecorator24installRNRuntimeBindingsERN8facebook3jsi7RuntimeEiONSt6__ndk18functionIFviiEEEE3$_1"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00111628  FUN_00111628 =====

pointer_____offset_0x10___ * FUN_00111628(void)

{
  return &PTR_vtable_00116fc0;
}


// ===== 00111634  FUN_00111634 =====

void FUN_00111634(void)

{
  long *plVar1;
  
  plVar1 = (long *)__cxa_allocate_exception(8);
  *plVar1 = (long)(PTR_vtable_00117338 + 0x10);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar1,PTR_typeinfo_00117330,PTR__exception_00117350);
}


// ===== 00111668  FUN_00111668 =====

void FUN_00111668(exception *param_1)

{
  std::exception::~exception(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0011168c  FUN_0011168c =====

void FUN_0011168c(void)

{
  return;
}


// ===== 00111690  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001173c8)();
  return;
}


// ===== 00111694  FUN_00111694 =====

void FUN_00111694(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_00116e90;
  return;
}


// ===== 001116b8  FUN_001116b8 =====

void FUN_001116b8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00116e90;
  return;
}


// ===== 001116c8  FUN_001116c8 =====

void FUN_001116c8(void)

{
  return;
}


// ===== 001116cc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001173c8)();
  return;
}


// ===== 001116d0  FUN_001116d0 =====

void FUN_001116d0(undefined4 *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined7 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  char *__s1;
  long *plVar12;
  long *plVar13;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined1 local_70;
  undefined7 uStack_6f;
  long lStack_68;
  undefined8 *local_60 [3];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(int *)*param_5 == 7) {
    facebook::jsi::Value::asObject((IRuntime *)*param_5);
                    /* try { // try from 0011171c to 00111727 has its CatchHandler @ 00111a10 */
    uVar10 = (**(code **)(*param_3 + 0x158))(param_3,local_60);
    if ((uVar10 & 1) == 0) {
      plVar12 = (long *)__cxa_allocate_exception(0x20);
                    /* try { // try from 00111958 to 00111967 has its CatchHandler @ 001119e8 */
      _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc
                (&local_78,"Value is not a ShadowNode reference");
      lVar11 = lStack_68;
      uVar6 = uStack_6f;
      uVar5 = local_70;
      uVar4 = local_78;
      local_70 = 0;
      uStack_6f = 0;
      lStack_68 = 0;
      uVar2 = CONCAT17(uVar5,uStack_77);
      local_78 = 0;
      uStack_77 = 0;
      *(undefined1 *)(plVar12 + 1) = uVar4;
      *(undefined8 *)((long)plVar12 + 9) = uVar2;
      puVar3 = PTR_vtable_00117370;
      plVar12[2] = CONCAT71(uVar6,uVar5);
      plVar12[3] = lVar11;
      *plVar12 = (long)(puVar3 + 0x10);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 001119b8 to 001119cf has its CatchHandler @ 001119d0 */
                    /* WARNING: Subroutine does not return */
        __cxa_throw(plVar12,PTR_typeinfo_00117358,PTR__JSINativeException_00117340);
      }
      goto LAB_00111a78;
    }
                    /* try { // try from 00111734 to 00111743 has its CatchHandler @ 00111a0c */
    (**(code **)(*param_3 + 0x160))(&local_78,param_3,local_60);
    plVar12 = (long *)CONCAT71(uStack_6f,local_70);
    if ((CONCAT71(uStack_77,local_78) != 0) &&
       (lVar11 = __dynamic_cast(CONCAT71(uStack_77,local_78),PTR_typeinfo_00117378,
                                PTR_typeinfo_00117380,0), lVar11 != 0)) {
      if (plVar12 != (long *)0x0) {
        FUN_0010df30(1,plVar12 + 1);
      }
      if (*(long *)(lVar11 + 8) != 0) {
        plVar13 = *(long **)(lVar11 + 0x10);
        if (plVar13 != (long *)0x0) {
          FUN_0010df30(1,plVar13 + 1);
        }
        if (plVar12 != (long *)0x0) {
          lVar11 = FUN_0010e620(0xffffffffffffffff,plVar12 + 1);
          if (lVar11 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            std::__ndk1::__shared_weak_count::__release_weak();
          }
          lVar11 = FUN_0010e620(0xffffffffffffffff,plVar12 + 1);
          if (lVar11 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            std::__ndk1::__shared_weak_count::__release_weak();
          }
        }
        if (local_60[0] != (undefined8 *)0x0) {
          (**(code **)*local_60[0])();
        }
                    /* try { // try from 00111804 to 0011180b has its CatchHandler @ 001119fc */
        uVar8 = facebook::react::ShadowNode::getTraits();
                    /* try { // try from 0011180c to 00111817 has its CatchHandler @ 001119f8 */
        __s1 = (char *)facebook::react::ShadowNode::getComponentName();
        iVar9 = strcmp(__s1,"Paragraph");
        if (iVar9 == 0) {
          bVar7 = true;
        }
        else {
          iVar9 = strcmp(__s1,"Text");
          bVar7 = iVar9 == 0;
        }
        *param_1 = 2;
        *(byte *)(param_1 + 2) = bVar7 | (byte)((uVar8 & 0x20) >> 5);
        if ((plVar13 != (long *)0x0) &&
           (lVar11 = FUN_0010e620(0xffffffffffffffff,plVar13 + 1), lVar11 == 0)) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        goto LAB_00111898;
      }
    }
    plVar12 = (long *)__cxa_allocate_exception(0x20);
                    /* try { // try from 001118d0 to 001118df has its CatchHandler @ 00111a30 */
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc
              (&local_78,"Value state is nullptr, expected a ShadowNode reference");
    lVar11 = lStack_68;
    uVar6 = uStack_6f;
    uVar5 = local_70;
    uVar4 = local_78;
    local_70 = 0;
    uStack_6f = 0;
    lStack_68 = 0;
    uVar2 = CONCAT17(uVar5,uStack_77);
    local_78 = 0;
    uStack_77 = 0;
    *(undefined1 *)(plVar12 + 1) = uVar4;
    *(undefined8 *)((long)plVar12 + 9) = uVar2;
    puVar3 = PTR_vtable_00117370;
    plVar12[2] = CONCAT71(uVar6,uVar5);
    plVar12[3] = lVar11;
    *plVar12 = (long)(puVar3 + 0x10);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00111930 to 00111947 has its CatchHandler @ 00111a18 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(plVar12,PTR_typeinfo_00117358,PTR__JSINativeException_00117340);
    }
  }
  else {
    *param_1 = 1;
LAB_00111898:
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
LAB_00111a78:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00111a7c  FUN_00111a7c =====

long FUN_00111a7c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZN14gesturehandler20RNGHRuntimeDecorator24installRNRuntimeBindingsERN8facebook3jsi7RuntimeEiONSt6__ndk18functionIFviiEEEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00111a98  FUN_00111a98 =====

pointer_____offset_0x10___ * FUN_00111a98(void)

{
  return &PTR_vtable_00116f00;
}


// ===== 00111aa4  FUN_00111aa4 =====

void FUN_00111aa4(long *param_1)

{
  long lVar1;
  
  if ((param_1 != (long *)0x0) && (lVar1 = FUN_0010e620(0xffffffffffffffff,param_1 + 1), lVar1 == 0)
     ) {
    (**(code **)(*param_1 + 0x10))(param_1);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00111af4  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc =====

void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc
               (long *param_1,char *param_2)

{
  size_t __n;
  void *__dest;
  
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_00111c1c();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00111b64;
  }
  else {
    __dest = operator_new((__n | 0xf) + 1);
    param_1[1] = __n;
    param_1[2] = (long)__dest;
    *param_1 = (__n | 0xf) + 2;
  }
  memmove(__dest,param_2,__n);
LAB_00111b64:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


// ===== 00111b7c  FUN_00111b7c =====

void FUN_00111b7c(long *param_1)

{
  long lVar1;
  
  if ((param_1 != (long *)0x0) && (lVar1 = FUN_0010e620(0xffffffffffffffff,param_1 + 1), lVar1 == 0)
     ) {
    (**(code **)(*param_1 + 0x10))(param_1);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00111bcc  FUN_00111bcc =====

void FUN_00111bcc(long *param_1)

{
  long lVar1;
  
  if ((param_1 != (long *)0x0) && (lVar1 = FUN_0010e620(0xffffffffffffffff,param_1 + 1), lVar1 == 0)
     ) {
    (**(code **)(*param_1 + 0x10))(param_1);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00111c1c  FUN_00111c1c =====

void FUN_00111c1c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00111c28();
}


// ===== 00111c28  FUN_00111c28 =====

void FUN_00111c28(void)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 00111c40 to 00111c43 has its CatchHandler @ 00111c5c */
  FUN_00111c70();
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_typeinfo_00117360,PTR__length_error_00117348);
}


// ===== 00111c70  FUN_00111c70 =====

void FUN_00111c70(logic_error *param_1)

{
  std::logic_error::logic_error(param_1,"basic_string");
  *(undefined **)param_1 = PTR_vtable_00117368 + 0x10;
  return;
}


// ===== 00111ca8  gesturehandler::RNGHRuntimeDecorator::installUIRuntimeBindings =====

/* gesturehandler::RNGHRuntimeDecorator::installUIRuntimeBindings(facebook::jsi::Runtime&, int,
   std::__ndk1::function<void (int, int)>&&) */

bool gesturehandler::RNGHRuntimeDecorator::installUIRuntimeBindings
               (Runtime *param_1,int param_2,function *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  long *plVar5;
  function *pfVar6;
  long lVar7;
  function **ppfVar8;
  long *plVar9;
  undefined8 *local_118;
  undefined8 *local_110;
  int local_108 [2];
  undefined8 local_100;
  undefined8 *local_f8;
  long local_f0 [4];
  function *local_d0 [2];
  long local_c0 [4];
  long *local_a0;
  undefined8 *local_90;
  double local_88;
  undefined8 **local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)param_1 + 0x30))(&local_f8);
                    /* try { // try from 00111cec to 00111d1b has its CatchHandler @ 0011222c */
  uVar2 = __strlen_chk("_WORKLET_RUNTIME",0x11);
  (**(code **)(*(long *)param_1 + 0x108))(&local_90,param_1,"_WORKLET_RUNTIME",uVar2);
                    /* try { // try from 00111d24 to 00111d37 has its CatchHandler @ 001121ac */
  (**(code **)(*(long *)param_1 + 0x188))(local_108,param_1,&local_f8,&local_90);
  if (local_90 != (undefined8 *)0x0) {
    (**(code **)*local_90)();
  }
  if (local_f8 != (undefined8 *)0x0) {
    (**(code **)*local_f8)();
  }
  if (local_108[0] == 0) goto LAB_00112044;
                    /* try { // try from 00111d74 to 00111d7b has its CatchHandler @ 001121a8 */
  local_90 = (undefined8 *)(**(code **)(*(long *)param_1 + 0x88))(param_1,local_100);
                    /* try { // try from 00111d88 to 00111d93 has its CatchHandler @ 00112188 */
  puVar3 = (undefined8 *)(**(code **)(*(long *)param_1 + 0x250))(param_1,&local_90);
  if (local_90 != (undefined8 *)0x0) {
    (**(code **)*local_90)();
  }
  plVar9 = (long *)*puVar3;
                    /* try { // try from 00111db0 to 00111ddf has its CatchHandler @ 00112204 */
  uVar2 = __strlen_chk("_setGestureStateSync",0x15);
  (**(code **)(*plVar9 + 0x98))(&local_f8,plVar9,"_setGestureStateSync",uVar2);
  local_d0[0] = *(function **)(param_3 + 0x20);
  if (local_d0[0] != (function *)0x0) {
    if (local_d0[0] == param_3) {
      local_d0[0] = (function *)local_f0;
      (**(code **)(*(long *)param_3 + 0x18))(param_3,local_f0);
    }
    else {
                    /* try { // try from 00111df8 to 00111e1f has its CatchHandler @ 00112088 */
      local_d0[0] = (function *)(**(code **)(*(long *)local_d0[0] + 0x10))();
    }
  }
  local_a0 = (long *)0x0;
                    /* try { // try from 00111e24 to 00111e2b has its CatchHandler @ 00112148 */
  ppuVar4 = (undefined8 **)operator_new(0x40);
  *ppuVar4 = &PTR_FUN_00116fe0;
  if (local_d0[0] == (function *)0x0) {
    ppfVar8 = (function **)(ppuVar4 + 6);
LAB_00111e60:
    *ppfVar8 = (function *)0x0;
  }
  else {
    if (local_d0[0] != (function *)local_f0) {
      ppfVar8 = local_d0;
      ppuVar4[6] = (undefined8 *)local_d0[0];
      goto LAB_00111e60;
    }
    ppuVar4[6] = ppuVar4 + 2;
                    /* try { // try from 00111e74 to 00111e83 has its CatchHandler @ 00112084 */
    (**(code **)(local_f0[0] + 0x18))(local_f0);
  }
  local_a0 = (long *)0x0;
                    /* try { // try from 00111e94 to 00111eaf has its CatchHandler @ 001120e0 */
  local_70 = ppuVar4;
  (**(code **)(*plVar9 + 0x278))(&local_110,plVar9,&local_f8,2,&local_90);
  if (local_70 == &local_90) {
    lVar7 = 4;
    ppuVar4 = &local_90;
LAB_00111ed0:
    (*(code *)(*ppuVar4)[lVar7])();
  }
  else if (local_70 != (undefined8 **)0x0) {
    lVar7 = 5;
    ppuVar4 = local_70;
    goto LAB_00111ed0;
  }
  if (local_a0 == local_c0) {
    lVar7 = 4;
    plVar5 = local_c0;
LAB_00111f00:
    (**(code **)(*plVar5 + lVar7 * 8))();
  }
  else if (local_a0 != (long *)0x0) {
    lVar7 = 5;
    plVar5 = local_a0;
    goto LAB_00111f00;
  }
  if (local_d0[0] == (function *)local_f0) {
    lVar7 = 4;
    pfVar6 = (function *)local_f0;
LAB_00111f30:
    (**(code **)(*(long *)pfVar6 + lVar7 * 8))();
  }
  else if (local_d0[0] != (function *)0x0) {
    lVar7 = 5;
    pfVar6 = local_d0[0];
    goto LAB_00111f30;
  }
  if (local_f8 != (undefined8 *)0x0) {
    (**(code **)*local_f8)();
  }
                    /* try { // try from 00111f58 to 00111f63 has its CatchHandler @ 001120d8 */
  (**(code **)(*plVar9 + 0x30))(&local_90,plVar9);
                    /* try { // try from 00111f64 to 00111f7b has its CatchHandler @ 001120b8 */
  FUN_0011120c(&local_90,plVar9,"_setGestureStateSync",&local_110);
  if (local_90 != (undefined8 *)0x0) {
    (**(code **)*local_90)();
  }
  local_88 = (double)param_2;
  local_90 = (undefined8 *)CONCAT44(local_90._4_4_,3);
                    /* try { // try from 00111fa8 to 00111fb3 has its CatchHandler @ 001120b0 */
  (**(code **)(*(long *)param_1 + 0x30))(&local_118,param_1);
                    /* try { // try from 00111fb4 to 00111fe3 has its CatchHandler @ 001121cc */
  uVar2 = __strlen_chk("_RNGH_MODULE_ID",0x10);
  (**(code **)(*(long *)param_1 + 0x108))(&local_f8,param_1,"_RNGH_MODULE_ID",uVar2);
                    /* try { // try from 00111fec to 00111fff has its CatchHandler @ 00112090 */
  (**(code **)(*(long *)param_1 + 0x1b8))(param_1,&local_118,&local_f8,&local_90);
  if (local_f8 != (undefined8 *)0x0) {
    (**(code **)*local_f8)();
  }
  if (local_118 != (undefined8 *)0x0) {
    (**(code **)*local_118)();
  }
  facebook::jsi::Value::~Value((Value *)&local_90);
  if (local_110 != (undefined8 *)0x0) {
    (**(code **)*local_110)();
  }
LAB_00112044:
  facebook::jsi::Value::~Value((Value *)local_108);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_108[0] != 0;
}


// ===== 00112248  FUN_00112248 =====

void FUN_00112248(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_00116fe0;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00112284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 0011228c  FUN_0011228c =====

void FUN_0011228c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_00116fe0;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_001122d8;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_001122d8:
  operator_delete(param_1);
  return;
}


// ===== 001122e8  FUN_001122e8 =====

undefined8 * FUN_001122e8(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  plVar2 = *(long **)(param_1 + 0x30);
  *puVar1 = &PTR_FUN_00116fe0;
  if (plVar2 != (long *)0x0) {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      lVar3 = *plVar2;
      puVar1[6] = puVar1 + 2;
      (**(code **)(lVar3 + 0x18))();
      return puVar1;
    }
                    /* try { // try from 00112330 to 0011234b has its CatchHandler @ 0011235c */
    plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  puVar1[6] = plVar2;
  return puVar1;
}


// ===== 00112370  FUN_00112370 =====

void FUN_00112370(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_00116fe0;
  if (plVar2 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
                    /* WARNING: Could not recover jumptable at 0x001123e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
      return;
    }
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    param_2[6] = uVar1;
  }
  return;
}


// ===== 001123e4  FUN_001123e4 =====

void FUN_001123e4(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x30);
  plVar2 = (long *)(param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00112414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 0011241c  FUN_0011241c =====

void FUN_0011241c(void *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)((long)param_1 + 0x30);
  plVar2 = (long *)((long)param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0011245c;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_0011245c:
  operator_delete(param_1);
  return;
}


// ===== 0011246c  FUN_0011246c =====

void FUN_0011246c(undefined4 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *in_x4;
  int iVar3;
  double dVar4;
  int local_50;
  int iStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*in_x4 == 2) {
    dVar4 = (double)facebook::jsi::Value::asNumber();
    iVar3 = (int)dVar4;
    dVar4 = (double)facebook::jsi::Value::asNumber();
    local_50 = (int)dVar4;
    plVar2 = *(long **)(param_2 + 0x30);
    iStack_4c = iVar3;
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
        FUN_00111634();
      }
      goto LAB_00112520;
    }
    (**(code **)(*plVar2 + 0x30))(plVar2,&iStack_4c,&local_50);
  }
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00112520:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00112524  FUN_00112524 =====

long FUN_00112524(long param_1,long param_2)

{
  param_1 = param_1 + 0x10;
  if (*(char **)(param_2 + 8) !=
      "ZN14gesturehandler20RNGHRuntimeDecorator24installUIRuntimeBindingsERN8facebook3jsi7RuntimeEiONSt6__ndk18functionIFviiEEEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00112540  FUN_00112540 =====

pointer_____offset_0x10___ * FUN_00112540(void)

{
  return &PTR_vtable_00117040;
}


// ===== 00112550  FUN_00112550 =====

void FUN_00112550(void)

{
  (*(code *)PTR_001173a0)();
  return;
}


// ===== 00112570  <EXTERNAL>::__cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_001173a8)();
  return;
}


// ===== 00112580  <EXTERNAL>::__cxa_atexit =====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_001173b0)();
  return;
}


// ===== 00112590  <EXTERNAL>::__register_atfork =====

void __register_atfork(void)

{
  (*(code *)PTR___register_atfork_001173b8)();
  return;
}


// ===== 001125a0  <EXTERNAL>::facebook::jni::initialize =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::initialize(_JavaVM *param_1,function *param_2)

{
  (*(code *)PTR_initialize_001173c0)();
  return;
}


// ===== 001125b0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001173c8)();
  return;
}


// ===== 001125c0  <EXTERNAL>::operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_001173d0)();
  return pvVar1;
}


// ===== 001125d0  gesturehandler::RNGestureHandlerModule::registerNatives =====

void gesturehandler::RNGestureHandlerModule::registerNatives(void)

{
  (*(code *)PTR_registerNatives_001173d8)();
  return;
}


// ===== 001125e0  gesturehandler::RNGestureHandlerModule::initHybrid =====

void __thiscall gesturehandler::RNGestureHandlerModule::initHybrid(void)

{
  (*(code *)PTR_initHybrid_001173e0)();
  return;
}


// ===== 001125f0  gesturehandler::RNGestureHandlerModule::getBindingsInstallerCxx =====

void gesturehandler::RNGestureHandlerModule::getBindingsInstallerCxx(void)

{
  (*(code *)PTR_getBindingsInstallerCxx_001173e8)();
  return;
}


// ===== 00112600  gesturehandler::RNGestureHandlerModule::setGestureState =====

void __thiscall
gesturehandler::RNGestureHandlerModule::setGestureState
          (RNGestureHandlerModule *this,int param_1,int param_2)

{
  (*(code *)PTR_setGestureState_001173f0)(this,param_1,param_2);
  return;
}


// ===== 00112610  facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *this)

{
  (*(code *)PTR__base_owned_ref_001173f8)();
  return;
}


// ===== 00112620  gesturehandler::RNGestureHandlerModule::getModuleId =====

void __thiscall gesturehandler::RNGestureHandlerModule::getModuleId(RNGestureHandlerModule *this)

{
  (*(code *)PTR_getModuleId_00117400)();
  return;
}


// ===== 00112630  facebook::jni::JObject::getClass =====

void facebook::jni::JObject::getClass(void)

{
  (*(code *)PTR_getClass_00117408)();
  return;
}


// ===== 00112640  facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::
base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
::~base_owned_ref(base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
                  *this)

{
  (*(code *)PTR__base_owned_ref_00117410)();
  return;
}


// ===== 00112650  facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::BindingsInstallerHolder,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(gesturehandler::RNGestureHandlerModule::*)(),&gesturehandler::RNGestureHandlerModule::getBindingsInstallerCxx,gesturehandler::RNGestureHandlerModule,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::BindingsInstallerHolder,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>::dispatch =====

void facebook::jni::detail::
     MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::BindingsInstallerHolder,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(gesturehandler::RNGestureHandlerModule::*)(),&gesturehandler::RNGestureHandlerModule::getBindingsInstallerCxx,gesturehandler::RNGestureHandlerModule,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::BindingsInstallerHolder,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>
     ::dispatch(void)

{
  (*(code *)PTR_dispatch_00117418)();
  return;
}


// ===== 00112660  facebook::jni::getHybridDataFromField =====

void facebook::jni::getHybridDataFromField(JObject *param_1,JField *param_2)

{
  (*(code *)PTR_getHybridDataFromField_00117420)();
  return;
}


// ===== 00112670  facebook::jni::detail::HybridClassBase::isHybridClassBase =====

void facebook::jni::detail::HybridClassBase::isHybridClassBase(void)

{
  (*(code *)PTR_isHybridClassBase_00117428)();
  return;
}


// ===== 00112680  facebook::jni::throwNPE =====

void facebook::jni::throwNPE(void)

{
  (*(code *)PTR_throwNPE_00117430)();
  return;
}


// ===== 00112690  facebook::jni::detail::getHolder<facebook::jni::JObject> =====

void __thiscall
facebook::jni::detail::getHolder<facebook::jni::JObject>(detail *this,JObject *param_1)

{
  (*(code *)PTR_getHolder<facebook_jni_JObject>_00117438)();
  return;
}


// ===== 001126a0  facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::
base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
::~base_owned_ref(base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
                  *this)

{
  (*(code *)PTR__base_owned_ref_00117440)();
  return;
}


// ===== 001126b0  facebook::jni::detail::getDestructorField =====

void facebook::jni::detail::getDestructorField(basic_strong_ref *param_1)

{
  (*(code *)PTR_getDestructorField_00117448)();
  return;
}


// ===== 001126c0  facebook::jni::detail::getHolder<facebook::jni::detail::HybridData> =====

void __thiscall
facebook::jni::detail::getHolder<facebook::jni::detail::HybridData>
          (detail *this,HybridData *param_1)

{
  (*(code *)PTR_getHolder<facebook_jni_detail_HybridData>_00117450)();
  return;
}


// ===== 001126d0  facebook::jni::detail::MethodWrapper<bool(gesturehandler::RNGestureHandlerModule::*)(),&gesturehandler::RNGestureHandlerModule::decorateUIRuntime,gesturehandler::RNGestureHandlerModule,bool>::dispatch =====

void facebook::jni::detail::
     MethodWrapper<bool(gesturehandler::RNGestureHandlerModule::*)(),&gesturehandler::RNGestureHandlerModule::decorateUIRuntime,gesturehandler::RNGestureHandlerModule,bool>
     ::dispatch(void)

{
  (*(code *)PTR_dispatch_00117458)();
  return;
}


// ===== 001126e0  facebook::jni::detail::MethodWrapper<void(gesturehandler::RNGestureHandlerModule::*)(),&gesturehandler::RNGestureHandlerModule::invalidateNative,gesturehandler::RNGestureHandlerModule,void>::dispatch =====

void facebook::jni::detail::
     MethodWrapper<void(gesturehandler::RNGestureHandlerModule::*)(),&gesturehandler::RNGestureHandlerModule::invalidateNative,gesturehandler::RNGestureHandlerModule,void>
     ::dispatch(void)

{
  (*(code *)PTR_dispatch_00117460)();
  return;
}


// ===== 001126f0  _JNIEnv::NewObject =====

void _JNIEnv::NewObject(_jclass *param_1,_jmethodID *param_2,...)

{
  (*(code *)PTR_NewObject_00117468)();
  return;
}


// ===== 00112700  _JNIEnv::CallVoidMethod =====

void _JNIEnv::CallVoidMethod(_jobject *param_1,_jmethodID *param_2,...)

{
  (*(code *)PTR_CallVoidMethod_00117470)();
  return;
}


// ===== 00112710  gesturehandler::RNGestureHandlerModule::RNGestureHandlerModule =====

void __thiscall gesturehandler::RNGestureHandlerModule::RNGestureHandlerModule(void)

{
  (*(code *)PTR_RNGestureHandlerModule_00117478)();
  return;
}


// ===== 00112720  gesturehandler::RNGestureHandlerModule::~RNGestureHandlerModule =====

void __thiscall
gesturehandler::RNGestureHandlerModule::~RNGestureHandlerModule(RNGestureHandlerModule *this)

{
  (*(code *)PTR__RNGestureHandlerModule_00117480)();
  return;
}


// ===== 00112730  <EXTERNAL>::__cxa_guard_acquire =====

void __cxa_guard_acquire(void)

{
  (*(code *)PTR___cxa_guard_acquire_00117488)();
  return;
}


// ===== 00112740  <EXTERNAL>::__cxa_guard_abort =====

void __cxa_guard_abort(void)

{
  (*(code *)PTR___cxa_guard_abort_00117490)();
  return;
}


// ===== 00112750  <EXTERNAL>::__cxa_guard_release =====

void __cxa_guard_release(void)

{
  (*(code *)PTR___cxa_guard_release_00117498)();
  return;
}


// ===== 00112760  gesturehandler::RNGHRuntimeDecorator::installUIRuntimeBindings =====

void gesturehandler::RNGHRuntimeDecorator::installUIRuntimeBindings
               (Runtime *param_1,int param_2,function *param_3)

{
  (*(code *)PTR_installUIRuntimeBindings_001174a0)(param_1,param_2);
  return;
}


// ===== 00112770  <EXTERNAL>::__cxa_begin_catch =====

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_001174a8)();
  return;
}


// ===== 00112780  <EXTERNAL>::std::terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
  (*(code *)PTR_terminate_001174b0)();
  return;
}


// ===== 00112790  <EXTERNAL>::facebook::jni::Environment::current =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::Environment::current(void)

{
  (*(code *)PTR_current_001174b8)();
  return;
}


// ===== 001127a0  <EXTERNAL>::__cxa_allocate_exception =====

void __cxa_allocate_exception(void)

{
  (*(code *)PTR___cxa_allocate_exception_001174c0)();
  return;
}


// ===== 001127b0  <EXTERNAL>::std::bad_alloc::bad_alloc =====

void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  (*(code *)PTR_bad_alloc_001174c8)();
  return;
}


// ===== 001127c0  <EXTERNAL>::__cxa_throw =====

void __cxa_throw(void)

{
  (*(code *)PTR___cxa_throw_001174d0)();
  return;
}


// ===== 001127d0  <EXTERNAL>::facebook::jni::throwPendingJniExceptionAsCppException =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwPendingJniExceptionAsCppException(void)

{
  (*(code *)PTR_throwPendingJniExceptionAsCppException_001174d8)();
  return;
}


// ===== 001127e0  <EXTERNAL>::facebook::jni::throwCppExceptionIf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwCppExceptionIf(bool param_1)

{
  (*(code *)PTR_throwCppExceptionIf_001174e0)(param_1);
  return;
}


// ===== 001127f0  <EXTERNAL>::facebook::jni::detail::JniEnvCacher::JniEnvCacher =====

void __thiscall
facebook::jni::detail::JniEnvCacher::JniEnvCacher(JniEnvCacher *this,_JNIEnv *param_1)

{
  (*(code *)PTR_JniEnvCacher_001174e8)();
  return;
}


// ===== 00112800  <EXTERNAL>::facebook::jni::translatePendingCppExceptionToJavaException =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::translatePendingCppExceptionToJavaException(void)

{
  (*(code *)PTR_translatePendingCppExceptionToJavaException_001174f0)();
  return;
}


// ===== 00112810  <EXTERNAL>::__cxa_end_catch =====

void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_001174f8)();
  return;
}


// ===== 00112820  <EXTERNAL>::facebook::jni::detail::JniEnvCacher::~JniEnvCacher =====

void __thiscall facebook::jni::detail::JniEnvCacher::~JniEnvCacher(JniEnvCacher *this)

{
  (*(code *)PTR__JniEnvCacher_00117500)();
  return;
}


// ===== 00112830  <EXTERNAL>::std::current_exception =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::current_exception(void)

{
  (*(code *)PTR_current_exception_00117508)();
  return;
}


// ===== 00112840  <EXTERNAL>::std::exception_ptr::~exception_ptr =====

void __thiscall std::exception_ptr::~exception_ptr(exception_ptr *this)

{
  (*(code *)PTR__exception_ptr_00117510)();
  return;
}


// ===== 00112850  <EXTERNAL>::__cxa_rethrow =====

void __cxa_rethrow(void)

{
  (*(code *)PTR___cxa_rethrow_00117518)();
  return;
}


// ===== 00112860  <EXTERNAL>::facebook::jni::findClassStatic =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::findClassStatic(char *param_1)

{
  (*(code *)PTR_findClassStatic_00117520)();
  return;
}


// ===== 00112870  <EXTERNAL>::facebook::jni::throwNewJavaException =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwNewJavaException(char *param_1,char *param_2)

{
  (*(code *)PTR_throwNewJavaException_00117528)();
  return;
}


// ===== 00112880  <EXTERNAL>::facebook::jni::detail::HybridDestructor::getNativePointer =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::detail::HybridDestructor::getNativePointer(void)

{
  (*(code *)PTR_getNativePointer_00117530)();
  return;
}


// ===== 00112890  <EXTERNAL>::facebook::jni::detail::HybridData::create =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::detail::HybridData::create(void)

{
  (*(code *)PTR_create_00117538)();
  return;
}


// ===== 001128a0  <EXTERNAL>::facebook::jni::detail::HybridDestructor::setNativePointer =====

void facebook::jni::detail::HybridDestructor::setNativePointer(void)

{
  (*(code *)PTR_setNativePointer_00117540)();
  return;
}


// ===== 001128b0  <EXTERNAL>::facebook::react::BindingsInstallerHolder::BindingsInstallerHolder =====

void __thiscall facebook::react::BindingsInstallerHolder::BindingsInstallerHolder(void)

{
  (*(code *)PTR_BindingsInstallerHolder_00117548)();
  return;
}


// ===== 001128c0  gesturehandler::RNGHRuntimeDecorator::installRNRuntimeBindings =====

void gesturehandler::RNGHRuntimeDecorator::installRNRuntimeBindings
               (Runtime *param_1,int param_2,function *param_3)

{
  (*(code *)PTR_installRNRuntimeBindings_00117550)(param_1,param_2);
  return;
}


// ===== 001128d0  <EXTERNAL>::facebook::jni::findClassLocal =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::findClassLocal(char *param_1)

{
  (*(code *)PTR_findClassLocal_00117558)();
  return;
}


// ===== 001128e0  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc =====

void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc(void)

{
  (*(code *)
    PTR__ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc_00117560
  )();
  return;
}


// ===== 001128f0  <EXTERNAL>::facebook::jsi::Value::~Value =====

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
  (*(code *)PTR__Value_00117568)();
  return;
}


// ===== 00112900  <EXTERNAL>::__strlen_chk =====

void __strlen_chk(void)

{
  (*(code *)PTR___strlen_chk_00117570)();
  return;
}


// ===== 00112910  <EXTERNAL>::facebook::react::ShadowNode::getTraits =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::getTraits(void)

{
  (*(code *)PTR_getTraits_00117578)();
  return;
}


// ===== 00112920  <EXTERNAL>::facebook::react::ShadowNode::getComponentName =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::getComponentName(void)

{
  (*(code *)PTR_getComponentName_00117580)();
  return;
}


// ===== 00112930  <EXTERNAL>::strcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00117588)((int)__s1);
  return iVar1;
}


// ===== 00112940  <EXTERNAL>::facebook::jsi::Value::asObject =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asObject(IRuntime *param_1)

{
  (*(code *)PTR_asObject_00117590)();
  return;
}


// ===== 00112950  <EXTERNAL>::__cxa_free_exception =====

void __cxa_free_exception(void)

{
  (*(code *)PTR___cxa_free_exception_00117598)();
  return;
}


// ===== 00112960  <EXTERNAL>::std::logic_error::logic_error =====

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
  (*(code *)PTR_logic_error_001175a0)();
  return;
}


// ===== 00112970  <EXTERNAL>::strlen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_001175a8)();
  return sVar1;
}


// ===== 00112980  <EXTERNAL>::__dynamic_cast =====

void __dynamic_cast(void)

{
  (*(code *)PTR___dynamic_cast_001175b0)();
  return;
}


// ===== 00112990  <EXTERNAL>::std::__ndk1::__shared_weak_count::__release_weak =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__release_weak(void)

{
  (*(code *)PTR___release_weak_001175b8)();
  return;
}


// ===== 001129a0  <EXTERNAL>::facebook::jsi::Value::~Value =====

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
  (*(code *)PTR__Value_001175c0)();
  return;
}


// ===== 001129b0  <EXTERNAL>::facebook::jsi::Value::asNumber =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asNumber(void)

{
  (*(code *)PTR_asNumber_001175c8)();
  return;
}


// ===== 001129c0  <EXTERNAL>::std::exception::~exception =====

void __thiscall std::exception::~exception(exception *this)

{
  (*(code *)PTR__exception_001175d0)();
  return;
}


// ===== 001129d0  <EXTERNAL>::dl_iterate_phdr =====

void dl_iterate_phdr(void)

{
  (*(code *)PTR_dl_iterate_phdr_001175d8)();
  return;
}


// ===== 001129e0  <EXTERNAL>::fwrite =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_001175e0)();
  return sVar1;
}


// ===== 001129f0  <EXTERNAL>::memmove =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_001175e8)();
  return pvVar1;
}


// ===== 00112a00  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_001175f0)();
  return;
}


// ===== 00112a10  <EXTERNAL>::malloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_001175f8)();
  return pvVar1;
}


// ===== 00112a20  <EXTERNAL>::strncmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00117600)((int)__s1);
  return iVar1;
}


// ===== 00112a30  <EXTERNAL>::fprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00117608)((int)__stream);
  return iVar1;
}


// ===== 00112a40  <EXTERNAL>::__stack_chk_fail =====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00117610)();
  return;
}


// ===== 00112a50  <EXTERNAL>::pthread_rwlock_wrlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_wrlock_00117618)((int)__rwlock);
  return iVar1;
}


// ===== 00112a60  <EXTERNAL>::syscall =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_syscall_00117620)();
  return lVar1;
}


// ===== 00112a70  <EXTERNAL>::pthread_rwlock_unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_unlock_00117628)((int)__rwlock);
  return iVar1;
}


// ===== 00112a80  <EXTERNAL>::memcpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00117630)();
  return pvVar1;
}


// ===== 00112a90  <EXTERNAL>::getauxval =====

void getauxval(void)

{
  (*(code *)PTR_getauxval_00117638)();
  return;
}


// ===== 00112aa0  <EXTERNAL>::abort =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00117640)();
  return;
}


// ===== 00112ab0  <EXTERNAL>::__system_property_get =====

void __system_property_get(void)

{
  (*(code *)PTR___system_property_get_00117648)();
  return;
}


// ===== 00112ac0  <EXTERNAL>::getpid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_00117650)();
  return _Var1;
}


// ===== 00112ad0  <EXTERNAL>::pthread_rwlock_rdlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_rdlock_00117658)((int)__rwlock);
  return iVar1;
}


// ===== 00112ae0  <EXTERNAL>::memset =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00117660)(__s,__c);
  return pvVar1;
}


// ===== 00112af0  <EXTERNAL>::fflush =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00117668)((int)__stream);
  return iVar1;
}


// ===== 0011c000  <EXTERNAL>::__cxa_finalize =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c008  <EXTERNAL>::__cxa_atexit =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c010  <EXTERNAL>::__register_atfork =====

/* WARNING: Control flow encountered bad instruction data */

void __register_atfork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c018  <EXTERNAL>::facebook::jni::initialize =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::initialize(_JavaVM *param_1,function *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c020  <EXTERNAL>::__gxx_personality_v0 =====

/* WARNING: Control flow encountered bad instruction data */

void __gxx_personality_v0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c028  <EXTERNAL>::operator.delete =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c030  <EXTERNAL>::operator.new =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c048  <EXTERNAL>::__cxa_guard_acquire =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_acquire(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c050  <EXTERNAL>::__cxa_guard_abort =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c058  <EXTERNAL>::__cxa_guard_release =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c060  <EXTERNAL>::__cxa_begin_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_begin_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c068  <EXTERNAL>::std::terminate =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c070  <EXTERNAL>::facebook::jni::Environment::current =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::Environment::current(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c078  <EXTERNAL>::__cxa_allocate_exception =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_allocate_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c080  <EXTERNAL>::std::bad_alloc::bad_alloc =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c088  <EXTERNAL>::std::bad_alloc::~bad_alloc =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c090  <EXTERNAL>::__cxa_throw =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_throw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c098  <EXTERNAL>::facebook::jni::throwPendingJniExceptionAsCppException =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwPendingJniExceptionAsCppException(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c0a0  <EXTERNAL>::facebook::jni::throwCppExceptionIf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwCppExceptionIf(bool param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c0a8  <EXTERNAL>::facebook::jni::detail::JniEnvCacher::JniEnvCacher =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
facebook::jni::detail::JniEnvCacher::JniEnvCacher(JniEnvCacher *this,_JNIEnv *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c0b0  <EXTERNAL>::facebook::jni::translatePendingCppExceptionToJavaException =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::translatePendingCppExceptionToJavaException(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c0b8  <EXTERNAL>::__cxa_end_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_end_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c0c0  <EXTERNAL>::facebook::jni::detail::JniEnvCacher::~JniEnvCacher =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jni::detail::JniEnvCacher::~JniEnvCacher(JniEnvCacher *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c0c8  <EXTERNAL>::std::current_exception =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::current_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c0d0  <EXTERNAL>::std::exception_ptr::~exception_ptr =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::exception_ptr::~exception_ptr(exception_ptr *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c0d8  <EXTERNAL>::__cxa_rethrow =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_rethrow(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c0e0  <EXTERNAL>::facebook::jni::findClassStatic =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::findClassStatic(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c0e8  <EXTERNAL>::facebook::jni::throwNewJavaException =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwNewJavaException(char *param_1,char *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c0f0  <EXTERNAL>::facebook::jni::detail::HybridDestructor::getNativePointer =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::detail::HybridDestructor::getNativePointer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c0f8  <EXTERNAL>::facebook::jni::detail::HybridData::create =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::detail::HybridData::create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c100  <EXTERNAL>::facebook::jni::detail::HybridDestructor::setNativePointer =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::jni::detail::HybridDestructor::setNativePointer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c108  <EXTERNAL>::facebook::react::BindingsInstallerHolder::BindingsInstallerHolder =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::BindingsInstallerHolder::BindingsInstallerHolder(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c110  <EXTERNAL>::facebook::jni::findClassLocal =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::findClassLocal(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c120  <EXTERNAL>::facebook::jsi::Value::~Value =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c128  <EXTERNAL>::__strlen_chk =====

/* WARNING: Control flow encountered bad instruction data */

void __strlen_chk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c130  <EXTERNAL>::facebook::react::ShadowNode::getTraits =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::getTraits(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c138  <EXTERNAL>::facebook::react::ShadowNode::getComponentName =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::getComponentName(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c140  <EXTERNAL>::strcmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c148  <EXTERNAL>::facebook::jsi::Value::asObject =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asObject(IRuntime *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c150  <EXTERNAL>::facebook::jsi::JSINativeException::~JSINativeException =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::JSINativeException::~JSINativeException(JSINativeException *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c158  <EXTERNAL>::__cxa_free_exception =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_free_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c160  <EXTERNAL>::std::length_error::~length_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::length_error::~length_error(length_error *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c168  <EXTERNAL>::std::logic_error::logic_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c170  <EXTERNAL>::strlen =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c178  <EXTERNAL>::std::exception::what =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::exception::what(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c180  <EXTERNAL>::__dynamic_cast =====

/* WARNING: Control flow encountered bad instruction data */

void __dynamic_cast(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c188  <EXTERNAL>::std::__ndk1::__shared_weak_count::__release_weak =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__release_weak(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c190  <EXTERNAL>::facebook::jsi::Value::~Value =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c198  <EXTERNAL>::facebook::jsi::Value::asNumber =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asNumber(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c1a0  <EXTERNAL>::std::exception::~exception =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::exception::~exception(exception *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c1e0  <EXTERNAL>::dl_iterate_phdr =====

/* WARNING: Control flow encountered bad instruction data */

void dl_iterate_phdr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c1e8  <EXTERNAL>::fwrite =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c1f0  <EXTERNAL>::memmove =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c1f8  <EXTERNAL>::free =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c200  <EXTERNAL>::malloc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c208  <EXTERNAL>::strncmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c210  <EXTERNAL>::fprintf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c218  <EXTERNAL>::__stack_chk_fail =====

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c220  <EXTERNAL>::pthread_rwlock_wrlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c230  <EXTERNAL>::syscall =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c238  <EXTERNAL>::pthread_rwlock_unlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c240  <EXTERNAL>::memcpy =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c248  <EXTERNAL>::getauxval =====

/* WARNING: Control flow encountered bad instruction data */

void getauxval(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c250  <EXTERNAL>::abort =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c258  <EXTERNAL>::__system_property_get =====

/* WARNING: Control flow encountered bad instruction data */

void __system_property_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c260  <EXTERNAL>::getpid =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c268  <EXTERNAL>::pthread_rwlock_rdlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c270  <EXTERNAL>::memset =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011c278  <EXTERNAL>::fflush =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


