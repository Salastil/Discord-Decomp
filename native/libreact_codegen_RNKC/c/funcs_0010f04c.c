// ===== 0010f04c  _FINI_1 =====

void _FINI_1(void)

{
  __cxa_finalize(&PTR_LOOP_00120f70);
  return;
}


// ===== 0010f05c  FUN_0010f05c =====

void FUN_0010f05c(void)

{
  return;
}


// ===== 0010f064  _FINI_0 =====

void _FINI_0(void)

{
  FUN_0010f05c();
  return;
}


// ===== 0010f06c  FUN_0010f06c =====

void FUN_0010f06c(code *UNRECOVERED_JUMPTABLE)

{
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010f078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


// ===== 0010f080  FUN_0010f080 =====

void FUN_0010f080(undefined8 param_1)

{
  __cxa_atexit(FUN_0010f06c,param_1,&PTR_LOOP_00120f70);
  return;
}


// ===== 0010f09c  FUN_0010f09c =====

void FUN_0010f09c(void)

{
  __register_atfork();
  return;
}


// ===== 0010f0ac  FUN_0010f0ac =====

undefined8 FUN_0010f0ac(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_80 [24];
  code *local_68;
  long local_38;
  
  FUN_0010f3f4(param_2,param_1);
  iVar2 = FUN_0010f518(param_2);
  while( true ) {
    if (iVar2 == 0) {
      return 5;
    }
    if (iVar2 < 0) break;
    FUN_0010f49c(param_2,0xfffffffe,&local_38);
    iVar2 = FUN_0010f52c(param_2,auStack_80);
    if (iVar2 != 0) {
      return 2;
    }
    if (local_68 != (code *)0x0) {
      uVar3 = 6;
      if (local_38 != param_3[3]) {
        uVar3 = 2;
      }
      iVar2 = (*local_68)(1,uVar3,*param_3,param_3,param_2);
      puVar1 = PTR___sF_001225e8;
      if (iVar2 != 8) {
        if (iVar2 != 7) {
          return 2;
        }
        FUN_0010f56c(param_2);
        return 2;
      }
      if (local_38 == param_3[3]) {
        fprintf((FILE *)(PTR___sF_001225e8 + 0x130),"libunwind: %s - %s\n","unwind_phase2",
                "during phase1 personality function said it would stop here, but now in phase2 it did not stop here"
               );
        fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    iVar2 = FUN_0010f518(param_2);
  }
  return 2;
}


// ===== 0010f1e0  FUN_0010f1e0 =====

void FUN_0010f1e0(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_4a0 [624];
  undefined1 auStack_230 [528];
  
  FUN_0010f358(auStack_230);
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_0010f0ac(auStack_230,auStack_4a0,param_1);
  }
  else {
    FUN_0010f264(auStack_230,auStack_4a0,param_1,*(long *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = PTR___sF_001225e8;
  fprintf((FILE *)(PTR___sF_001225e8 + 0x130),"libunwind: %s - %s\n","_Unwind_Resume",
          "_Unwind_Resume() can\'t return");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0010f264  FUN_0010f264 =====

void FUN_0010f264(undefined8 param_1,undefined8 param_2,undefined8 *param_3,code *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_78 [24];
  code *local_60;
  
  FUN_0010f3f4(param_2,param_1);
  iVar1 = FUN_0010f518(param_2);
  while( true ) {
    if (iVar1 < 1) {
      (*param_4)(1,0x1a,*param_3,param_3,param_2,param_5);
      return;
    }
    iVar1 = FUN_0010f52c(param_2,auStack_78);
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
      FUN_0010f56c(param_2);
    }
    iVar1 = FUN_0010f518(param_2);
  }
  return;
}


// ===== 0010f358  FUN_0010f358 =====

undefined8
FUN_0010f358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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


// ===== 0010f3f4  FUN_0010f3f4 =====

undefined8 FUN_0010f3f4(undefined8 *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = &PTR_FUN_00120f88;
  param_1[1] = &DAT_001268c0;
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
  FUN_0010fdbc(param_1,0);
  return 0;
}


// ===== 0010f49c  FUN_0010f49c =====

undefined8 FUN_0010f49c(long *param_1,undefined4 param_2,undefined8 *param_3)

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


// ===== 0010f518  FUN_0010f518 =====

void FUN_0010f518(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010f528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,1);
  return;
}


// ===== 0010f52c  FUN_0010f52c =====

undefined4 FUN_0010f52c(long *param_1,long param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x48))();
  uVar1 = 0xffffe66b;
  if (*(long *)(param_2 + 8) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 0010f56c  FUN_0010f56c =====

undefined8 FUN_0010f56c(long *param_1)

{
  (**(code **)(*param_1 + 0x50))();
  return 0xffffe674;
}


// ===== 0010f594  FUN_0010f594 =====

char * FUN_0010f594(undefined8 param_1,uint *param_2,undefined8 *param_3,long *param_4,ulong param_5
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
      pcVar7 = (char *)FUN_0010f724(param_1,lVar8,param_4);
      if (pcVar7 != (char *)0x0) {
        return pcVar7;
      }
    }
    else if (*param_4 != lVar8) {
      return "CIE start does not match";
    }
    lVar8 = (long)puVar10 + uVar9;
    local_48 = puVar10 + 1;
    lVar3 = FUN_0011157c(param_1,&local_48,lVar8,(char)param_4[3],0);
    lVar4 = FUN_0011157c(param_1,&local_48,lVar8,*(byte *)(param_4 + 3) & 0xf,0);
    cVar1 = *(char *)((long)param_4 + 0x31);
    param_3[5] = 0;
    puVar10 = local_48;
    if (cVar1 != '\0') {
      lVar5 = FUN_00111908(&local_48,lVar8);
      puVar2 = local_48;
      puVar10 = (uint *)((long)local_48 + lVar5);
      if ((*(byte *)((long)param_4 + 0x19) != 0xff) &&
         (lVar5 = FUN_0011157c(param_1,&local_48,lVar8,*(byte *)((long)param_4 + 0x19) & 0xf,0),
         lVar5 != 0)) {
        local_48 = puVar2;
        uVar6 = FUN_0011157c(param_1,&local_48,lVar8,*(undefined1 *)((long)param_4 + 0x19),0);
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


// ===== 0010f724  FUN_0010f724 =====

char * FUN_0010f724(undefined8 param_1,uint *param_2,long *param_3)

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
      uVar7 = FUN_00111908(&local_48,pbVar1);
      uVar13 = 0;
      uVar14 = 0;
      *(undefined4 *)(param_3 + 5) = uVar7;
      puVar5 = PTR___sF_001225e8;
      pbVar11 = local_48;
      pbVar15 = local_48;
      do {
        pbVar12 = pbVar11;
        if (pbVar15 == pbVar1) {
          fprintf((FILE *)(PTR___sF_001225e8 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
        uVar6 = FUN_00111908(&local_48,pbVar1);
        *(undefined1 *)((long)param_3 + 0x32) = uVar6;
        bVar2 = *pbVar18;
      }
      if (bVar2 == 0x7a) {
        FUN_00111908(&local_48,pbVar1);
LAB_0010f8a4:
        bVar2 = *pbVar18;
        if (bVar2 < 0x50) {
          if (bVar2 < 0x47) {
            if (bVar2 != 0x42) {
              if (bVar2 != 0) goto LAB_0010f944;
              goto LAB_0010f988;
            }
            *(undefined1 *)((long)param_3 + 0x33) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_0010f8a4;
          }
          if (bVar2 == 0x47) {
            *(undefined1 *)((long)param_3 + 0x34) = 1;
            goto LAB_0010f944;
          }
          if (bVar2 == 0x4c) {
            pbVar18 = pbVar18 + 1;
            *(byte *)((long)param_3 + 0x19) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_0010f8a4;
          }
        }
        else if (bVar2 < 0x53) {
          if (bVar2 == 0x50) {
            bVar2 = *local_48;
            *(byte *)((long)param_3 + 0x1a) = bVar2;
            *(char *)((long)param_3 + 0x1b) = (char)(local_48 + 1) - (char)param_2;
            local_48 = local_48 + 1;
            lVar8 = FUN_0011157c(param_1,&local_48,pbVar1,bVar2,0);
            param_3[4] = lVar8;
            pbVar18 = pbVar18 + 1;
            goto LAB_0010f8a4;
          }
          if (bVar2 == 0x52) {
            pbVar18 = pbVar18 + 1;
            *(byte *)(param_3 + 3) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_0010f8a4;
          }
        }
        else {
          if (bVar2 == 0x53) {
            *(undefined1 *)(param_3 + 6) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_0010f8a4;
          }
          if (bVar2 == 0x7a) {
            *(undefined1 *)((long)param_3 + 0x31) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_0010f8a4;
          }
        }
LAB_0010f944:
        pbVar18 = pbVar18 + 1;
        goto LAB_0010f8a4;
      }
LAB_0010f988:
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


// ===== 0010f9ec  FUN_0010f9ec =====

void FUN_0010f9ec(void)

{
  return;
}


// ===== 0010f9f4  FUN_0010f9f4 =====

void FUN_0010f9f4(void)

{
  return;
}


// ===== 0010f9fc  FUN_0010f9fc =====

bool FUN_0010f9fc(undefined8 param_1,uint param_2)

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


// ===== 0010fa40  FUN_0010fa40 =====

undefined8 FUN_0010fa40(long param_1,uint param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_001225e8;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_0010faa8:
      return *(undefined8 *)(param_1 + 0x108);
    }
    if (param_2 == 0xffffffff) goto LAB_0010fa9c;
    if (param_2 == 0x1d) {
      return *(undefined8 *)(param_1 + 0xf8);
    }
  }
  else if ((int)param_2 < 0x20) {
    if (param_2 == 0x1e) {
      return *(undefined8 *)(param_1 + 0x100);
    }
    if (param_2 == 0x1f) goto LAB_0010faa8;
  }
  else {
    if (param_2 == 0x22) {
      return *(undefined8 *)(param_1 + 0x118);
    }
    if (param_2 == 0x20) {
LAB_0010fa9c:
      return *(undefined8 *)(param_1 + 0x110);
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_001225e8 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8);
}


// ===== 0010fb28  FUN_0010fb28 =====

void FUN_0010fb28(long param_1,uint param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_001225e8;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_0010fb90:
      *(undefined8 *)(param_1 + 0x108) = param_3;
      return;
    }
    if (param_2 == 0xffffffff) goto LAB_0010fb84;
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
    if (param_2 == 0x1f) goto LAB_0010fb90;
  }
  else {
    if (param_2 == 0x22) {
      *(undefined8 *)(param_1 + 0x118) = param_3;
      return;
    }
    if (param_2 == 0x20) {
LAB_0010fb84:
      *(undefined8 *)(param_1 + 0x110) = param_3;
      return;
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_001225e8 + 0x130),"libunwind: %s - %s\n","setRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8) = param_3;
  return;
}


// ===== 0010fc10  FUN_0010fc10 =====

bool FUN_0010fc10(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffffffe0) == 0x40;
}


// ===== 0010fc24  FUN_0010fc24 =====

undefined1  [16] FUN_0010fc24(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + (long)param_2 * 8 + -0xe0);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 0010fc34  FUN_0010fc34 =====

void FUN_0010fc34(undefined8 param_1,long param_2,int param_3)

{
  *(undefined8 *)(param_2 + (long)param_3 * 8 + -0xe0) = param_1;
  return;
}


// ===== 0010fc44  FUN_0010fc44 =====

ulong FUN_0010fc44(long *param_1,uint param_2)

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
    uVar3 = FUN_00110168(lVar1,uVar4,param_1[0x4b],param_1 + 2,(long)param_1 + 0x269,param_2 & 1);
    iVar2 = (int)uVar3;
  }
  else {
    memset(auStack_240,0,0x210);
    uVar3 = FUN_00110048(param_1,auStack_240);
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


// ===== 0010fd34  FUN_0010fd34 =====

void FUN_0010fd34(long param_1,undefined8 *param_2)

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


// ===== 0010fd78  FUN_0010fd78 =====

void FUN_0010fd78(long param_1)

{
  FUN_00112e10(param_1 + 0x10);
  return;
}


// ===== 0010fd84  FUN_0010fd84 =====

undefined1 FUN_0010fd84(long param_1)

{
  return *(undefined1 *)(param_1 + 0x269);
}


// ===== 0010fd90  FUN_0010fd90 =====

undefined8 FUN_0010fd90(long *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  return 0;
}


// ===== 0010fdbc  FUN_0010fdbc =====

void FUN_0010fdbc(long *param_1,ulong param_2)

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
  iVar1 = dl_iterate_phdr(FUN_00112760,&local_648);
  if (((iVar1 == 0) || (local_668 == 0)) ||
     (uVar4 = FUN_0011248c(param_1,uVar7,auStack_678,0), (uVar4 & 1) == 0)) {
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_001268c4);
    for (puVar6 = PTR_DAT_00126898; puVar6 < PTR_DAT_001268a0; puVar6 = puVar6 + 0x20) {
      if ((*(ulong *)(puVar6 + 8) <= uVar7) && (uVar7 < *(ulong *)(puVar6 + 0x10))) {
        lVar3 = *(long *)(puVar6 + 0x18);
        pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001268c4);
        if ((lVar3 != 0) &&
           (lVar3 = FUN_0010f594(param_1[1],lVar3,&local_6a8,local_6e0,0), lVar3 == 0)) {
          memset(&local_648,0,0x618);
          uVar7 = FUN_001105f0(param_1[1],&local_6a8,local_6e0,uVar7,4,&local_648);
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
        goto LAB_0010ff44;
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001268c4);
LAB_0010ff44:
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


// ===== 0011003c  FUN_0011003c =====

void FUN_0011003c(undefined8 param_1,undefined4 param_2)

{
  FUN_00112de0(param_2);
  return;
}


// ===== 00110048  FUN_00110048 =====

undefined8 FUN_00110048(long param_1)

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


// ===== 00110168  FUN_00110168 =====

undefined8
FUN_00110168(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,
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
  
  lVar7 = FUN_0010f594(param_1,param_3,auStack_b0,auStack_e8,0);
  if (lVar7 == 0) {
    memset(auStack_700,0,0x618);
    uVar8 = FUN_001105f0(param_1,auStack_b0,auStack_e8,param_2,4,auStack_700);
    if ((uVar8 & 1) != 0) {
      uVar8 = FUN_00111238(param_1,auStack_700,param_4);
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
        puVar3 = PTR___sF_001225e8;
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
              goto LAB_00110448;
            }
            else {
              puVar13 = (undefined8 *)((long)param_4 + 0x108);
              if ((local_b6 != 0x22) &&
                 ((puVar13 = (undefined8 *)((long)param_4 + 0x100), local_b6 != 0x20 &&
                  (puVar13 = (undefined8 *)((long)param_4 + 0xf8), local_b6 != 0x1f)))) {
LAB_00110448:
                if (0x1c < local_b6) {
                  fprintf((FILE *)(PTR___sF_001225e8 + 0x130),"libunwind: %s - %s\n","getRegister",
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
LAB_00110554:
                  fprintf((FILE *)(PTR___sF_001225e8 + 0x130),"libunwind: %s - %s\n",
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
              if (iVar2 != 6) goto LAB_00110554;
              puVar9 = (ulong *)FUN_00111ad0(*(undefined8 *)(piVar15 + 2),param_1,param_4,uVar8);
              uVar18 = *puVar9;
            }
            local_a00[uVar12] = uVar18;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == local_b6) {
            uVar14 = FUN_0011136c(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == 0x22) {
            uVar10 = FUN_0011136c(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
          }
          else {
            if (0xffffffe0 < uVar16 - 0x40) {
              return 0xffffe672;
            }
            uVar11 = FUN_0011136c(param_1,param_4,uVar8,piVar15);
            puVar3 = PTR___sF_001225e8;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
            if ((int)uVar16 < 0x1f) {
              uVar5 = uVar11;
              if ((uVar16 != 0x1d) && (uVar5 = local_a00[0x3b], uVar6 = uVar11, uVar16 != 0x1e))
              goto LAB_0011049c;
            }
            else {
              uVar18 = uVar11;
              if ((uVar16 != 0x1f) &&
                 ((uVar18 = local_a00[0x3d], uVar10 = uVar11, uVar16 != 0x22 &&
                  (uVar10 = local_a00[0x3f], uVar16 != 0x20)))) {
LAB_0011049c:
                if (0x1c < uVar12) {
                  fprintf((FILE *)(PTR___sF_001225e8 + 0x130),"libunwind: %s - %s\n","setRegister",
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
            FUN_0011136c(param_1,auStack_b20,uVar8,&local_80);
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


// ===== 001105f0  FUN_001105f0 =====

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_001105f0(undefined8 param_1,long *param_2,long *param_3,long param_4,int param_5,
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
LAB_00110674:
    lVar20 = lVar20 + 0x18;
    if (lVar20 == 0x30) {
      return 1;
    }
  }
  uVar17 = 0;
LAB_001106a4:
  puVar18 = local_6c0;
  puVar5 = PTR___sF_001225e8;
  pbVar10 = pbVar21 + 1;
  bVar3 = *pbVar21;
  apbStack_6a0[0xc0] = pbVar10;
  switch((ulong)bVar3) {
  case 0:
    goto code_r0x00110f78;
  case 1:
    uVar17 = FUN_0011157c(local_6c8,apbStack_6a0 + 0xc0,pbVar2,(char)param_3[3],0);
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 2:
    uVar9 = (uint)pbVar21[1];
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 2;
    goto LAB_00110b2c;
  case 3:
    uVar9 = (uint)*(ushort *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 3;
    goto LAB_00110b2c;
  case 4:
    uVar9 = *(uint *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 5;
LAB_00110b2c:
    uVar17 = uVar17 + iVar13 * uVar9;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 5:
    uVar19 = FUN_00111908(apbStack_6a0 + 0xc0,pbVar2);
    lVar8 = FUN_00111908(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended DWARF unwind, reg too big\n";
      __size = 0x46;
      __s = (FILE *)(PTR___sF_001225e8 + 0x130);
      goto LAB_00111128;
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
LAB_00110ac8:
    puVar12[6] = 2;
    *(long *)(puVar12 + 8) = lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 6:
    uVar19 = FUN_00111908(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_restore_extended DWARF unwind, reg too big\n";
LAB_00111018:
      __s = (FILE *)(PTR___sF_001225e8 + 0x130);
      __size = 0x47;
      goto LAB_00111128;
    }
    cVar4 = *(char *)(param_6 + uVar19 * 4 + 7);
joined_r0x00110f58:
    if (cVar4 != '\0') {
      pbVar21 = apbStack_6a0[uVar19 * 2];
      *(byte **)(param_6 + uVar19 * 4 + 8) = apbStack_6a0[uVar19 * 2 + 1];
      *(byte **)(param_6 + uVar19 * 4 + 6) = pbVar21;
    }
    goto code_r0x00110f78;
  case 7:
    uVar19 = FUN_00111908(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_undefined DWARF unwind, reg too big\n";
LAB_0011111c:
      __s = (FILE *)(PTR___sF_001225e8 + 0x130);
      __size = 0x40;
      goto LAB_00111128;
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
    uVar19 = FUN_00111908(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_same_value DWARF unwind, reg too big\n";
LAB_00111100:
      __s = (FILE *)(PTR___sF_001225e8 + 0x130);
      __size = 0x41;
      goto LAB_00111128;
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
    uVar19 = FUN_00111908(apbStack_6a0 + 0xc0,pbVar2);
    uVar14 = FUN_00111908(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg too big\n";
      __size = 0x3f;
      __s = (FILE *)(PTR___sF_001225e8 + 0x130);
      goto LAB_00111128;
    }
    if (0x5f < uVar14) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg2 too big\n";
      goto LAB_0011111c;
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
    uVar19 = FUN_00111908(apbStack_6a0 + 0xc0,pbVar2);
    uVar7 = FUN_00111908(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa DWARF unwind, reg too big\n";
      __size = 0x3e;
      __s = (FILE *)(PTR___sF_001225e8 + 0x130);
      goto LAB_00111128;
    }
    *param_6 = (int)uVar19;
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xd:
    uVar19 = FUN_00111908(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa_register DWARF unwind, reg too big\n";
      goto LAB_00111018;
    }
    *param_6 = (int)uVar19;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xe:
    uVar7 = FUN_00111908(apbStack_6a0 + 0xc0,pbVar2);
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xf:
    *param_6 = 0;
    *(byte **)(param_6 + 2) = pbVar10;
    goto LAB_00110eac;
  case 0x10:
    uVar19 = FUN_00111908(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_expression DWARF unwind, reg too big\n";
      goto LAB_00111100;
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
LAB_00110ea4:
    puVar12[6] = uVar7;
    *(byte **)(puVar12 + 8) = apbStack_6a0[0xc0];
LAB_00110eac:
    lVar8 = FUN_00111908(apbStack_6a0 + 0xc0,pbVar2);
    apbStack_6a0[0xc0] = apbStack_6a0[0xc0] + lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x11:
    uVar19 = FUN_00111908(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_001225e8;
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended_sf DWARF unwind, reg too big\n";
      __size = 0x49;
      __s = (FILE *)(PTR___sF_001225e8 + 0x130);
      goto LAB_00111128;
    }
    uVar14 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_001225e8 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
LAB_00110e38:
    puVar12[6] = uVar7;
    *(ulong *)(puVar12 + 8) = uVar11 * (long)iVar13;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x12:
    uVar14 = FUN_00111908(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_001225e8;
    uVar19 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_001225e8 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      goto LAB_00111100;
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
        fprintf((FILE *)(PTR___sF_001225e8 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
    uVar19 = FUN_00111908(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      fprintf((FILE *)(PTR___sF_001225e8 + 0x130),
              "libunwind: malformed DW_CFA_val_offset DWARF unwind, reg (%lu) out of range\n\n",
              uVar19);
      goto LAB_00111130;
    }
    lVar8 = FUN_00111908(apbStack_6a0 + 0xc0,pbVar2);
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
    uVar19 = FUN_00111908(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_001225e8;
    if (uVar19 < 0x60) {
      uVar14 = 0;
      uVar11 = 0;
      pbVar21 = apbStack_6a0[0xc0];
      pbVar10 = apbStack_6a0[0xc0];
      do {
        if (pbVar10 == pbVar2) {
          fprintf((FILE *)(PTR___sF_001225e8 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      goto LAB_00110e38;
    }
    __ptr = "libunwind: malformed DW_CFA_val_offset_sf DWARF unwind, reg too big\n";
    __size = 0x44;
    __s = (FILE *)(PTR___sF_001225e8 + 0x130);
    goto LAB_00111128;
  case 0x16:
    uVar19 = FUN_00111908(apbStack_6a0 + 0xc0,pbVar2);
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
      goto LAB_00110ea4;
    }
    __ptr = "libunwind: malformed DW_CFA_val_expression DWARF unwind, reg too big\n";
    __size = 0x45;
    __s = (FILE *)(PTR___sF_001225e8 + 0x130);
    goto LAB_00111128;
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
        goto joined_r0x00110f58;
      }
      if (bVar1 != 0x80) {
        return 0;
      }
      local_6dc = param_5;
      lVar8 = FUN_00111908(apbStack_6a0 + 0xc0,pbVar2);
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
    if (param_5 != 4) goto code_r0x00110f78;
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
    uVar7 = FUN_00111908(apbStack_6a0 + 0xc0,pbVar2);
    param_6[4] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x2f:
    uVar19 = FUN_00111908(apbStack_6a0 + 0xc0,pbVar2);
    if (uVar19 < 0x60) {
      lVar8 = FUN_00111908(apbStack_6a0 + 0xc0,pbVar2);
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
      goto LAB_00110ac8;
    }
    __ptr = "libunwind: malformed DW_CFA_GNU_negative_offset_extended DWARF unwind, reg too big\n";
    __size = 0x53;
    __s = (FILE *)(PTR___sF_001225e8 + 0x130);
LAB_00111128:
    fwrite(__ptr,__size,1,__s);
LAB_00111130:
    fflush((FILE *)(PTR___sF_001225e8 + 0x130));
    return 0;
  }
joined_r0x00110a60:
  if ((pbVar2 <= pbVar21) || (uVar16 <= uVar17)) goto LAB_00110674;
  goto LAB_001106a4;
code_r0x00110f78:
  pbVar21 = apbStack_6a0[0xc0];
  goto joined_r0x00110a60;
}


// ===== 00111238  FUN_00111238 =====

long FUN_00111238(undefined8 param_1,uint *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR___sF_001225e8;
  uVar1 = *param_2;
  if ((int)uVar1 < 0x1e) {
    if ((int)uVar1 < 0) {
      if (uVar1 == 0xfffffffe) {
LAB_00111278:
        return *(long *)(param_3 + 0xf8) + (long)(int)param_2[1];
      }
      if (uVar1 == 0xffffffff) goto LAB_001112bc;
    }
    else {
      if (uVar1 == 0) {
        lVar3 = FUN_00111ad0(*(undefined8 *)(param_2 + 2),param_1,param_3,0);
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
    if (uVar1 == 0x1f) goto LAB_00111278;
  }
  else {
    if (uVar1 == 0x22) {
      return *(long *)(param_3 + 0x108) + (long)(int)param_2[1];
    }
    if (uVar1 == 0x20) {
LAB_001112bc:
      return *(long *)(param_3 + 0x100) + (long)(int)param_2[1];
    }
  }
  if (0x1c < uVar1) {
    fprintf((FILE *)(PTR___sF_001225e8 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(long *)(param_3 + (ulong)uVar1 * 8) + (long)(int)param_2[1];
}


// ===== 0011136c  FUN_0011136c =====

undefined8 FUN_0011136c(undefined8 param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  puVar2 = PTR___sF_001225e8;
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
LAB_001114a8:
          return *(undefined8 *)(param_2 + 0xf8);
        }
        if (uVar5 == 0xffffffff) goto LAB_00111490;
        if (uVar5 == 0x1d) {
          return *(undefined8 *)(param_2 + 0xe8);
        }
      }
      else if ((int)uVar5 < 0x20) {
        if (uVar5 == 0x1e) {
          return *(undefined8 *)(param_2 + 0xf0);
        }
        if (uVar5 == 0x1f) goto LAB_001114a8;
      }
      else {
        if (uVar5 == 0x22) {
          return *(undefined8 *)(param_2 + 0x108);
        }
        if (uVar5 == 0x20) {
LAB_00111490:
          return *(undefined8 *)(param_2 + 0x100);
        }
      }
      if (0x1c < uVar5) {
        fprintf((FILE *)(PTR___sF_001225e8 + 0x130),"libunwind: %s - %s\n","getRegister",
                "unsupported arm64 register");
        fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      return *(undefined8 *)(param_2 + (*(ulong *)(param_4 + 2) & 0xffffffff) * 8);
    }
    if (iVar1 == 6) {
      puVar4 = (undefined8 *)FUN_00111ad0(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return *puVar4;
    }
    if (iVar1 == 7) {
      uVar3 = FUN_00111ad0(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return uVar3;
    }
  }
  fprintf((FILE *)(PTR___sF_001225e8 + 0x130),"libunwind: %s - %s\n","getSavedRegister",
          "unsupported restore location for register");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0011157c  FUN_0011157c =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_0011157c(undefined8 param_1,long *param_2,ulong *param_3,uint param_4,long param_5)

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
  
  puVar3 = PTR___sF_001225e8;
  uVar1 = param_4 & 0xf;
  puVar10 = (ulong *)*param_2;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if ((param_4 & 0xf) == 0) goto LAB_001116c8;
      if (uVar1 != 1) {
LAB_001118d4:
        fprintf((FILE *)(PTR___sF_001225e8 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "unknown pointer encoding");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar4 = (undefined8 *)FUN_00111908(param_2,param_3);
      puVar3 = PTR___sF_001225e8;
    }
    else if (uVar1 == 2) {
      puVar4 = (undefined8 *)(ulong)(ushort)*puVar10;
      *param_2 = (long)puVar10 + 2;
      puVar3 = PTR___sF_001225e8;
    }
    else {
      if (uVar1 != 3) goto LAB_001118d4;
      puVar4 = (undefined8 *)(ulong)(uint)*puVar10;
      *param_2 = (long)((long)puVar10 + 4);
      puVar3 = PTR___sF_001225e8;
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 4) {
LAB_001116c8:
      puVar4 = (undefined8 *)*puVar10;
      *param_2 = (long)(puVar10 + 1);
      puVar3 = PTR___sF_001225e8;
    }
    else {
      if (uVar1 != 9) goto LAB_001118d4;
      uVar7 = 0;
      uVar5 = 0;
      puVar6 = puVar10;
      puVar9 = puVar10;
      do {
        if (puVar9 == param_3) {
          fprintf((FILE *)(PTR___sF_001225e8 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      puVar3 = PTR___sF_001225e8;
    }
  }
  else if (uVar1 == 10) {
    puVar4 = (undefined8 *)(long)(short)*puVar10;
    *param_2 = (long)puVar10 + 2;
    puVar3 = PTR___sF_001225e8;
  }
  else {
    if (uVar1 != 0xb) {
      if (uVar1 != 0xc) goto LAB_001118d4;
      goto LAB_001116c8;
    }
    puVar4 = (undefined8 *)(long)(int)(uint)*puVar10;
    *param_2 = (long)((long)puVar10 + 4);
    puVar3 = PTR___sF_001225e8;
  }
  uVar1 = (param_4 & 0xff) >> 4 & 7;
  PTR___sF_001225e8 = puVar3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      if (uVar1 != 1) goto LAB_001118a0;
      puVar4 = (undefined8 *)((long)puVar4 + (long)puVar10);
    }
LAB_00111754:
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
      goto LAB_00111754;
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
LAB_001118a0:
  fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP","unknown pointer encoding");
  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00111908  FUN_00111908 =====

ulong FUN_00111908(long *param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  puVar2 = PTR___sF_001225e8;
  pbVar4 = (byte *)*param_1;
  if (pbVar4 != param_2) {
    pbVar5 = pbVar4 + 1;
    uVar3 = (ulong)*pbVar4 & 0x7f;
    if (-1 < (char)*pbVar4) {
LAB_00111938:
      *param_1 = (long)pbVar5;
      return uVar3;
    }
    if (pbVar5 != param_2) {
      uVar3 = uVar3 | (ulong)((int)(char)pbVar4[1] & 0x7f) << 7;
      pbVar5 = pbVar4 + 2;
      if (-1 < (char)pbVar4[1]) goto LAB_00111938;
      if (pbVar5 != param_2) {
        uVar3 = uVar3 | (ulong)((int)(char)pbVar4[2] & 0x7f) << 0xe;
        pbVar5 = pbVar4 + 3;
        if (-1 < (char)pbVar4[2]) goto LAB_00111938;
        if (pbVar5 != param_2) {
          uVar3 = uVar3 | (ulong)((int)(char)pbVar4[3] & 0x7f) << 0x15;
          pbVar5 = pbVar4 + 4;
          if (-1 < (char)pbVar4[3]) goto LAB_00111938;
          if (pbVar5 != param_2) {
            uVar3 = uVar3 | (ulong)((int)(char)pbVar4[4] & 0x7f) << 0x1c;
            pbVar5 = pbVar4 + 5;
            if (-1 < (char)pbVar4[4]) goto LAB_00111938;
            if (pbVar5 != param_2) {
              uVar3 = uVar3 | (ulong)((int)(char)pbVar4[5] & 0x7f) << 0x23;
              pbVar5 = pbVar4 + 6;
              if (-1 < (char)pbVar4[5]) goto LAB_00111938;
              if (pbVar5 != param_2) {
                uVar3 = uVar3 | (ulong)((int)(char)pbVar4[6] & 0x7f) << 0x2a;
                pbVar5 = pbVar4 + 7;
                if (-1 < (char)pbVar4[6]) goto LAB_00111938;
                if (pbVar5 != param_2) {
                  uVar3 = uVar3 | (ulong)((int)(char)pbVar4[7] & 0x7f) << 0x31;
                  pbVar5 = pbVar4 + 8;
                  if (-1 < (char)pbVar4[7]) goto LAB_00111938;
                  if (pbVar5 != param_2) {
                    uVar3 = uVar3 | (ulong)((int)(char)pbVar4[8] & 0x7f) << 0x38;
                    pbVar5 = pbVar4 + 9;
                    if (-1 < (char)pbVar4[8]) goto LAB_00111938;
                    if (pbVar5 != param_2) {
                      bVar1 = *pbVar5;
                      if ((bVar1 & 0x7e) == 0) {
                        if (-1 < (char)bVar1) {
                          *param_1 = (long)(pbVar4 + 10);
                          return uVar3 | (ulong)bVar1 << 0x3f;
                        }
                        if (pbVar4 + 10 == param_2) goto LAB_00111a68;
                      }
                      fprintf((FILE *)(PTR___sF_001225e8 + 0x130),"libunwind: %s - %s\n",
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
LAB_00111a68:
  fprintf((FILE *)(PTR___sF_001225e8 + 0x130),"libunwind: %s - %s\n","getULEB128",
          "truncated uleb128 expression");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00111ad0  FUN_00111ad0 =====

ulong FUN_00111ad0(byte *param_1,undefined8 param_2,long param_3,ulong param_4)

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
  lVar11 = FUN_00111908(&local_68,param_1 + 0x14);
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
      puVar9 = PTR___sF_001225e8;
      pbVar13 = pbVar18 + 1;
      local_68 = pbVar13;
      bVar8 = *pbVar18;
      uVar10 = (uint)bVar8;
      if (0x91 < uVar10 - 3) {
code_r0x0011234c:
        fprintf((FILE *)(PTR___sF_001225e8 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
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
        goto LAB_00111fb8;
      case 4:
      case 5:
      case 7:
        goto code_r0x0011234c;
      case 6:
        puVar14 = (ulong *)*puVar19;
LAB_00111f48:
        *puVar19 = *puVar14;
        goto LAB_00111b54;
      case 8:
        uVar16 = (ulong)pbVar18[1];
        goto LAB_00111f1c;
      case 9:
        uVar16 = (ulong)(char)pbVar18[1];
LAB_00111f1c:
        local_68 = pbVar18 + 2;
        goto LAB_00111fb8;
      case 10:
        uVar16 = (ulong)*(ushort *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_00111fb8;
      case 0xb:
        uVar16 = (ulong)*(short *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_00111fb8;
      case 0xc:
        uVar16 = (ulong)*(uint *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_00111fb8;
      case 0xd:
        uVar16 = (ulong)*(int *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_00111fb8;
      case 0x10:
        uVar16 = FUN_00111908(&local_68,pbVar6);
        puVar19 = puVar19 + 1;
        *puVar19 = uVar16;
        goto LAB_00111b54;
      case 0x11:
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = pbVar13;
        do {
          if (pbVar18 == pbVar6) {
            fprintf((FILE *)(PTR___sF_001225e8 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
        goto LAB_00111b54;
      case 0x12:
        uVar16 = *puVar19;
        goto LAB_00111b50;
      case 0x13:
        puVar19 = puVar19 + -1;
        goto LAB_00111b54;
      case 0x14:
        uVar16 = puVar19[-1];
        goto LAB_00111b50;
      case 0x15:
        local_68 = pbVar18 + 2;
        uVar16 = puVar19[-(ulong)pbVar18[1]];
LAB_00111fb8:
LAB_00111b50:
        puVar19[1] = uVar16;
        puVar19 = puVar19 + 1;
        goto LAB_00111b54;
      case 0x16:
        auVar20 = NEON_ext(*(undefined1 (*) [16])(puVar19 + -1),*(undefined1 (*) [16])(puVar19 + -1)
                           ,8,1);
        *puVar19 = auVar20._8_8_;
        puVar19[-1] = auVar20._0_8_;
        goto LAB_00111b54;
      case 0x17:
        uVar16 = *puVar19;
        *puVar19 = SUB168(*(undefined1 (*) [16])(puVar19 + -2),8);
        puVar19[-1] = SUB168(*(undefined1 (*) [16])(puVar19 + -2),0);
        puVar19[-2] = uVar16;
        goto LAB_00111b54;
      case 0x18:
        puVar14 = (ulong *)*puVar19;
        puVar19 = puVar19 + -1;
        *puVar19 = *puVar14;
        goto LAB_00111b54;
      case 0x19:
        uVar16 = *puVar19;
        if ((long)uVar16 < 0) goto LAB_001120f0;
        goto LAB_00111b54;
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
LAB_001120f0:
        *puVar19 = -uVar16;
        goto LAB_00111b54;
      case 0x20:
        *puVar19 = ~*puVar19;
        goto LAB_00111b54;
      case 0x21:
        uVar16 = puVar19[-1] | *puVar19;
        break;
      case 0x22:
        uVar16 = puVar19[-1] + *puVar19;
        break;
      case 0x23:
        lVar11 = FUN_00111908(&local_68,pbVar6);
        *puVar19 = *puVar19 + lVar11;
        goto LAB_00111b54;
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
        goto LAB_00111b54;
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
        goto LAB_00111b54;
      default:
        uVar16 = (ulong)(uVar15 - 0x30);
        goto LAB_00111b50;
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
        goto LAB_00111b4c;
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
            fprintf((FILE *)(PTR___sF_001225e8 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
             (puVar14 = puVar2, bVar8 != 0x8d)) goto LAB_00111c8c;
        }
        else if (bVar8 < 0x90) {
          puVar14 = puVar1;
          if ((bVar8 != 0x8e) && (puVar14 = puVar4, uVar15 != 0x8f)) {
LAB_00111c8c:
            if (0x1c < uVar10 - 0x70) {
              fprintf((FILE *)(PTR___sF_001225e8 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((bVar8 != 0x90) && (puVar14 = puVar3, bVar8 != 0x92)) goto LAB_00111c8c;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_00111b50;
      case 0x90:
        uVar10 = FUN_00111908(&local_68,pbVar6);
        puVar9 = PTR___sF_001225e8;
        if ((int)uVar10 < 0x1e) {
          if (((uVar10 != 0xfffffffe) && (puVar14 = puVar5, uVar10 != 0xffffffff)) &&
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_001121f0;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_001121f0:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_001225e8 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_001121f0;
        }
LAB_00111b4c:
        uVar16 = *puVar14;
        goto LAB_00111b50;
      case 0x91:
        fprintf((FILE *)(PTR___sF_001225e8 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_fbreg not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x92:
        uVar10 = FUN_00111908(&local_68,pbVar6);
        puVar9 = PTR___sF_001225e8;
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = local_68;
        pbVar13 = local_68;
        do {
          if (pbVar13 == pbVar6) {
            fprintf((FILE *)(PTR___sF_001225e8 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_00112218;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_00112218:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_001225e8 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_00112218;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_00111b50;
      case 0x93:
        fprintf((FILE *)(PTR___sF_001225e8 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
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
LAB_001123f0:
              fprintf((FILE *)(PTR___sF_001225e8 + 0x130),"libunwind: %s - %s\n",
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
            if (bVar8 != 8) goto LAB_001123f0;
            goto LAB_00111f48;
          }
          *puVar19 = (ulong)(uint)*puVar14;
        }
        goto LAB_00111b54;
      }
      puVar19[-1] = uVar16;
      puVar19 = puVar19 + -1;
LAB_00111b54:
      pbVar18 = local_68;
    } while (local_68 < pbVar6);
    param_4 = *puVar19;
  }
  return param_4;
}


// ===== 0011248c  FUN_0011248c =====

undefined8 FUN_0011248c(long param_1,ulong param_2,long *param_3,uint param_4)

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
      (uVar3 = FUN_001129b4(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],
                            param_3[2] + (ulong)param_4,&local_6b0,auStack_6e8), (uVar3 & 1) == 0))
     && ((param_3[4] == 0 ||
         (uVar3 = FUN_00112b7c(*(undefined8 *)(param_1 + 8),param_2,param_3[4],(int)param_3[5],
                               &local_6b0,auStack_6e8), (uVar3 & 1) == 0)))) {
    lVar5 = *param_3;
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_001268c4);
    if (PTR_DAT_00126898 < PTR_DAT_001268a0) {
      plVar4 = (long *)PTR_DAT_00126898;
      if (lVar5 == -1) {
        do {
          if (((ulong)plVar4[1] <= param_2) && (param_2 < (ulong)plVar4[2])) goto LAB_00112594;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_001268a0);
      }
      else {
        do {
          if (((*plVar4 == lVar5) && ((ulong)plVar4[1] <= param_2)) && (param_2 < (ulong)plVar4[2]))
          goto LAB_00112594;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_001268a0);
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001268c4);
    goto LAB_001125dc;
  }
LAB_001125fc:
  bVar2 = 1;
LAB_00112600:
  lVar5 = *param_3;
  memset(auStack_680,0,0x618);
  uVar3 = FUN_001105f0(*(undefined8 *)(param_1 + 8),&local_6b0,auStack_6e8,param_2,4,auStack_680);
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
      pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_001268c4);
      __src = PTR_DAT_00126898;
      if (PTR_DAT_001268a8 <= PTR_DAT_001268a0) {
        __n = (long)PTR_DAT_001268a8 - (long)PTR_DAT_00126898;
        __dest = (undefined *)malloc(__n * 4);
        memcpy(__dest,__src,__n);
        if ((undefined8 *)__src != &DAT_00126900) {
          free(__src);
        }
        PTR_DAT_001268a8 = __dest + ((long)__n >> 3) * 0x20;
        PTR_DAT_001268a0 = __dest + __n;
        PTR_DAT_00126898 = __dest;
      }
      *(long *)PTR_DAT_001268a0 = lVar5;
      *(long *)((long)PTR_DAT_001268a0 + 8) = local_698;
      *(long *)((long)PTR_DAT_001268a0 + 0x18) = local_6b0;
      *(long *)((long)PTR_DAT_001268a0 + 0x10) = local_690;
      PTR_DAT_001268a0 = (undefined *)((long)PTR_DAT_001268a0 + 0x20);
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001268c4);
      return 1;
    }
    return 1;
  }
  return 1;
LAB_00112594:
  lVar5 = plVar4[3];
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001268c4);
  if ((lVar5 != 0) &&
     (uVar3 = FUN_001129b4(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],lVar5,
                           &local_6b0,auStack_6e8), (uVar3 & 1) != 0)) {
    bVar2 = 0;
    goto LAB_00112600;
  }
LAB_001125dc:
  uVar3 = FUN_001129b4(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],0,&local_6b0,
                       auStack_6e8);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  goto LAB_001125fc;
}


// ===== 00112760  FUN_00112760 =====

undefined8 FUN_00112760(ulong *param_1,undefined8 param_2,undefined8 *param_3)

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
              uVar5 = FUN_00112894(uVar2,lVar8,lVar9 + lVar8,local_70);
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


// ===== 00112894  FUN_00112894 =====

undefined8 FUN_00112894(undefined8 param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte *local_28;
  
  puVar3 = PTR___sF_001225e8;
  if ((ulong)((long)param_3 - (long)param_2) < 4) {
    if (param_3 == param_2) {
      return 0;
    }
    fprintf((FILE *)(PTR___sF_001225e8 + 0x130),
            "libunwind: unsupported .eh_frame_hdr at %lx: need at least 4 bytes of data but only got %zd\n"
            ,param_2);
  }
  else {
    if (*param_2 == 1) {
      local_28 = param_2 + 4;
      bVar1 = param_2[2];
      bVar2 = param_2[1];
      *(byte *)(param_4 + 3) = param_2[3];
      uVar4 = FUN_0011157c(param_1,&local_28,param_3,bVar2,param_2);
      *param_4 = uVar4;
      if (bVar1 == 0xff) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_0011157c(param_1,&local_28,param_3,bVar1,param_2);
      }
      param_4[1] = uVar4;
      param_4[2] = local_28;
      return 1;
    }
    fprintf((FILE *)(PTR___sF_001225e8 + 0x130),
            "libunwind: unsupported .eh_frame_hdr version: %u at %lx\n",(ulong)(uint)*param_2,
            param_2);
  }
  fflush((FILE *)(puVar3 + 0x130));
  return 0;
}


// ===== 001129b4  FUN_001129b4 =====

undefined8
FUN_001129b4(undefined8 param_1,ulong param_2,uint *param_3,long param_4,uint *param_5,
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
        (puVar7 < puVar9)) && (lVar4 = FUN_0010f724(param_1,puVar7,param_7), lVar4 == 0)) {
      local_68 = local_68 + 1;
      uVar8 = FUN_0011157c(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x18),0);
      lVar4 = FUN_0011157c(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x18) & 0xf,0);
      if ((uVar8 < param_2) && (param_2 <= lVar4 + uVar8)) {
        cVar2 = *(char *)(param_7 + 0x31);
        param_6[5] = 0;
        puVar9 = local_68;
        if (cVar2 != '\0') {
          lVar5 = FUN_00111908(&local_68,puVar1);
          puVar7 = local_68;
          puVar9 = (uint *)((long)local_68 + lVar5);
          if ((*(byte *)(param_7 + 0x19) != 0xff) &&
             (lVar5 = FUN_0011157c(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x19) & 0xf,0),
             lVar5 != 0)) {
            local_68 = puVar7;
            uVar6 = FUN_0011157c(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x19),0);
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


// ===== 00112b7c  FUN_00112b7c =====

undefined8
FUN_00112b7c(undefined8 param_1,ulong param_2,long param_3,ulong param_4,long param_5,
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
  uVar1 = FUN_00112894(param_1,param_3,lVar4,auStack_80);
  if (((uVar1 & 1) != 0) && (local_78 != 0)) {
    lVar2 = FUN_00112ce4(local_68);
    lVar7 = 0;
    do {
      if (local_78 < 2) {
        lVar8 = lVar7 * lVar2;
        break;
      }
      uVar6 = local_78 >> 1;
      lVar8 = (uVar6 + lVar7) * lVar2;
      local_88 = local_70 + lVar8;
      uVar1 = FUN_0011157c(param_1,&local_88,lVar4,local_68,param_3);
      uVar5 = local_78 - uVar6;
      local_78 = uVar6;
      if (uVar1 < param_2) {
        local_78 = uVar5;
        lVar7 = uVar6 + lVar7;
      }
    } while (uVar1 != param_2);
    local_88 = local_70 + lVar8;
    FUN_0011157c(param_1,&local_88,lVar4,local_68,param_3);
    uVar3 = FUN_0011157c(param_1,&local_88,lVar4,local_68,param_3);
    lVar4 = FUN_0010f594(param_1,uVar3,param_5,param_6,0);
    if (((lVar4 == 0) && (*(ulong *)(param_5 + 0x18) <= param_2)) &&
       (param_2 < *(ulong *)(param_5 + 0x20))) {
      return 1;
    }
  }
  return 0;
}


// ===== 00112ce4  FUN_00112ce4 =====

undefined8 FUN_00112ce4(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_001225e8;
  param_1 = param_1 & 0xf;
  if (param_1 < 9) {
    if (param_1 < 3) {
      if (param_1 == 2) {
        return 4;
      }
      if (param_1 == 1) {
LAB_00112dac:
        fprintf((FILE *)(PTR___sF_001225e8 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
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
    if (param_1 == 9) goto LAB_00112dac;
  }
  else {
    if (param_1 == 0xc) {
      return 0x10;
    }
    if (param_1 == 0xb) {
      return 8;
    }
  }
  fprintf((FILE *)(PTR___sF_001225e8 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
          "Unknown DWARF encoding for search table.");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00112de0  FUN_00112de0 =====

char * FUN_00112de0(int param_1)

{
  if (param_1 + 2U < 0x62) {
    return &DAT_0010a314 + *(int *)(&DAT_0010a314 + (ulong)(param_1 + 2U) * 4);
  }
  return "unknown register";
}


// ===== 00112e10  FUN_00112e10 =====

undefined1  [16] FUN_00112e10(undefined1 (*param_1) [16])

{
  return *param_1;
}


// ===== 00112ea0  facebook::react::OverKeyboardViewState::getDynamic =====

/* facebook::react::OverKeyboardViewState::getDynamic() const */

void facebook::react::OverKeyboardViewState::getDynamic(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  float *in_x0;
  long lVar4;
  undefined4 *in_x8;
  ulong uVar5;
  undefined4 **local_1b0;
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
  int local_e8;
  long local_e0;
  ulong uStack_d8;
  long local_d0;
  long lStack_c8;
  undefined8 local_c0;
  dynamic adStack_b8 [48];
  undefined4 *local_88 [6];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_140 = (double)*in_x0;
  local_110 = 0x16;
  local_118[0] = 6;
  local_10f = (undefined7)s_screenWidth_00109609._0_8_;
  _cStack_108 = CONCAT31(0x687464,SUB81(s_screenWidth_00109609._0_8_,7));
  local_104 = 0;
  local_148[0] = 3;
  folly::dynamic::dynamic((dynamic *)local_88,(dynamic *)local_118);
  folly::dynamic::dynamic(adStack_b8,(dynamic *)local_148);
  local_e8 = 5;
  local_c0 = 0x3f800000;
  uStack_d8 = 0;
  local_e0 = 0;
  lStack_c8 = 0;
  local_d0 = 0;
                    /* try { // try from 00112f5c to 00112f6b has its CatchHandler @ 001130cc */
  local_1b0 = local_88;
  lVar4 = FUN_001133a4(&local_e0,local_88,&local_1b0);
  folly::dynamic::operator=((dynamic *)(lVar4 + 0x40),adStack_b8);
  folly::dynamic::destroy();
  folly::dynamic::destroy();
  local_170 = 0x18;
  local_1a0 = (double)in_x0[1];
  local_178[0] = 6;
  local_167 = 0x74686769;
  local_16f[0] = s_screenHeight_0010a063[0];
  local_16f[1] = s_screenHeight_0010a063[1];
  local_16f[2] = s_screenHeight_0010a063[2];
  local_16f[3] = s_screenHeight_0010a063[3];
  local_16f[4] = s_screenHeight_0010a063[4];
  local_16f[5] = s_screenHeight_0010a063[5];
  local_16f[6] = s_screenHeight_0010a063[6];
  local_16f[7] = s_screenHeight_0010a063[7];
  local_163 = 0;
  local_1a8[0] = 3;
  if (local_e8 == 5) {
    local_88[0] = local_178;
                    /* try { // try from 00112fd8 to 001130cb has its CatchHandler @ 001130e0 */
    lVar4 = FUN_001133a4(&local_e0,local_178,local_88);
    folly::dynamic::operator=((dynamic *)(lVar4 + 0x40),(dynamic *)local_1a8);
    uVar3 = uStack_d8;
    lVar4 = local_e0;
    *in_x8 = 5;
    local_e0 = 0;
    uStack_d8 = 0;
    *(long *)(in_x8 + 6) = local_d0;
    *(long *)(in_x8 + 2) = lVar4;
    *(ulong *)(in_x8 + 4) = uVar3;
    *(long *)(in_x8 + 8) = lStack_c8;
    in_x8[10] = (undefined4)local_c0;
    if (lStack_c8 != 0) {
      uVar5 = *(ulong *)(local_d0 + 8);
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
      local_d0 = 0;
      lStack_c8 = 0;
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
    FUN_00113130(*(undefined8 *)PTR_name_001224d0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00113130  FUN_00113130 =====

void FUN_00113130(undefined8 param_1,undefined4 param_2)

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
                    /* try { // try from 0011315c to 0011316b has its CatchHandler @ 00113194 */
  folly::TypeError::TypeError(aTStack_38,local_50,param_2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0011317c to 00113183 has its CatchHandler @ 00113184 */
    uVar2 = FUN_001131c4(aTStack_38);
                    /* catch() { ... } // from try @ 0011317c with catch @ 00113184 */
    std::runtime_error::~runtime_error((runtime_error *)aTStack_38);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_0010f1e0(uVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001131c4  FUN_001131c4 =====

void FUN_001131c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
  FUN_0011328c(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_typeinfo_001224b0,PTR__runtime_error_001224b8);
}


// ===== 00113200  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc =====

void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc
               (long *param_1,char *param_2)

{
  size_t __n;
  void *__dest;
  
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_001132dc(param_1);
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00113270;
  }
  else {
    __dest = operator_new((__n | 0xf) + 1);
    param_1[1] = __n;
    param_1[2] = (long)__dest;
    *param_1 = (__n | 0xf) + 2;
  }
  memmove(__dest,param_2,__n);
LAB_00113270:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


// ===== 0011328c  FUN_0011328c =====

void FUN_0011328c(runtime_error *param_1,runtime_error *param_2)

{
  std::runtime_error::runtime_error(param_1,param_2);
  *(undefined ***)param_1 = &PTR__runtime_error_00121028;
  return;
}


// ===== 001132b8  FUN_001132b8 =====

void FUN_001132b8(runtime_error *param_1)

{
  std::runtime_error::~runtime_error(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001132dc  FUN_001132dc =====

void FUN_001132dc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001132f0("basic_string");
}


// ===== 001132f0  FUN_001132f0 =====

void FUN_001132f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 0011330c to 00113313 has its CatchHandler @ 0011332c */
  FUN_00113340(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_typeinfo_001224d8,PTR__length_error_001224c0);
}


// ===== 00113340  FUN_00113340 =====

void FUN_00113340(logic_error *param_1,char *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  *(undefined **)param_1 = PTR_vtable_001224e0 + 0x10;
  return;
}


// ===== 00113370  FUN_00113370 =====

void FUN_00113370(void)

{
  bad_array_new_length *this;
  
  this = (bad_array_new_length *)__cxa_allocate_exception(8);
  std::bad_array_new_length::bad_array_new_length(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_typeinfo_001224e8,PTR__bad_array_new_length_001224c8);
}


// ===== 001133a4  FUN_001133a4 =====

long * FUN_001133a4(long *param_1,dynamic *param_2,undefined8 *param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  void *pvVar6;
  dynamic *pdVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  ulong unaff_x26;
  undefined2 uVar19;
  undefined8 uVar20;
  float fVar21;
  long *local_80;
  long *plStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar4 = folly::dynamic::hash();
  uVar18 = param_1[1];
  if (uVar18 != 0) {
    uVar20 = NEON_cnt(uVar18,1);
    uVar19 = NEON_uaddlv(uVar20,1);
    uVar13 = CONCAT62((int6)((ulong)uVar20 >> 0x10),uVar19) & 0xffffffff;
    if (uVar13 < 2) {
      unaff_x26 = uVar18 - 1 & uVar4;
    }
    else {
      unaff_x26 = uVar4;
      if (uVar18 <= uVar4) {
        uVar9 = 0;
        if (uVar18 != 0) {
          uVar9 = uVar4 / uVar18;
        }
        unaff_x26 = uVar4 - uVar9 * uVar18;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x26 * 8);
    if ((puVar8 != (undefined8 *)0x0) && (plVar17 = (long *)*puVar8, plVar17 != (long *)0x0)) {
      do {
        uVar9 = plVar17[1];
        if (uVar9 == uVar4) {
          uVar9 = folly::operator==((dynamic *)(plVar17 + 2),param_2);
          if ((uVar9 & 1) != 0) goto LAB_0011375c;
        }
        else {
          if (uVar13 < 2) {
            uVar9 = uVar9 & uVar18 - 1;
          }
          else if (uVar18 <= uVar9) {
            uVar11 = 0;
            if (uVar18 != 0) {
              uVar11 = uVar9 / uVar18;
            }
            uVar9 = uVar9 - uVar11 * uVar18;
          }
          if (uVar9 != unaff_x26) break;
        }
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
    }
  }
  plVar1 = param_1 + 2;
  plVar17 = (long *)operator_new(0x70);
  pdVar7 = (dynamic *)*param_3;
  *plVar17 = 0;
  plVar17[1] = uVar4;
  local_80 = plVar17;
  plStack_78 = plVar1;
  folly::dynamic::dynamic((dynamic *)(plVar17 + 2),pdVar7);
  lVar10 = param_1[3];
  fVar21 = *(float *)(param_1 + 4);
  *(undefined4 *)(plVar17 + 8) = 0;
  plVar17[9] = 0;
  local_70 = 1;
  if ((uVar18 == 0) || (fVar21 * (float)uVar18 < (float)(lVar10 + 1))) {
    if (uVar18 < 3) {
      uVar13 = 1;
    }
    else {
      uVar13 = (ulong)((uVar18 & uVar18 - 1) != 0);
    }
    uVar13 = uVar13 | uVar18 << 1;
    uVar18 = (ulong)((float)(lVar10 + 1) / fVar21);
    if (uVar13 <= uVar18) {
      uVar13 = uVar18;
    }
    if (uVar13 - 1 == 0) {
      uVar13 = 2;
    }
    else if ((uVar13 & uVar13 - 1) != 0) {
                    /* try { // try from 00113534 to 001137df has its CatchHandler @ 001137e0 */
      uVar13 = std::__ndk1::__next_prime(uVar13);
    }
    uVar18 = param_1[1];
    if (uVar18 < uVar13) {
LAB_0011354c:
      if (uVar13 >> 0x3d != 0) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
          uVar20 = FUN_00113370();
                    /* catch() { ... } // from try @ 00113534 with catch @ 001137e0 */
          FUN_00113808(&local_80);
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_0010f1e0(uVar20);
          }
        }
        goto LAB_00113804;
      }
      pvVar5 = operator_new(uVar13 << 3);
      pvVar6 = (void *)*param_1;
      *param_1 = (long)pvVar5;
      if (pvVar6 != (void *)0x0) {
        operator_delete(pvVar6);
      }
      uVar18 = 0;
      param_1[1] = uVar13;
      do {
        *(undefined8 *)(*param_1 + uVar18 * 8) = 0;
        uVar18 = uVar18 + 1;
      } while (uVar13 != uVar18);
      plVar14 = (long *)*plVar1;
      uVar18 = uVar13;
      if (plVar14 != (long *)0x0) {
        uVar9 = plVar14[1];
        uVar20 = NEON_cnt(uVar13,1);
        uVar19 = NEON_uaddlv(uVar20,1);
        uVar11 = CONCAT62((int6)((ulong)uVar20 >> 0x10),uVar19) & 0xffffffff;
        if (uVar11 < 2) {
          uVar9 = uVar9 & uVar13 - 1;
        }
        else if (uVar13 <= uVar9) {
          uVar16 = 0;
          if (uVar13 != 0) {
            uVar16 = uVar9 / uVar13;
          }
          uVar9 = uVar9 - uVar16 * uVar13;
        }
        *(long **)(*param_1 + uVar9 * 8) = plVar1;
        plVar15 = (long *)*plVar14;
        if (plVar15 != (long *)0x0) {
          do {
            uVar16 = plVar15[1];
            if (uVar11 < 2) {
              uVar16 = uVar16 & uVar13 - 1;
            }
            else if (uVar13 <= uVar16) {
              uVar2 = 0;
              if (uVar13 != 0) {
                uVar2 = uVar16 / uVar13;
              }
              uVar16 = uVar16 - uVar2 * uVar13;
            }
            if (uVar16 != uVar9) {
              if (*(long *)(*param_1 + uVar16 * 8) == 0) {
                *(long **)(*param_1 + uVar16 * 8) = plVar14;
                uVar9 = uVar16;
              }
              else {
                *plVar14 = *plVar15;
                *plVar15 = **(long **)(*param_1 + uVar16 * 8);
                **(undefined8 **)(*param_1 + uVar16 * 8) = plVar15;
                plVar15 = plVar14;
              }
            }
            plVar14 = plVar15;
            plVar15 = (long *)*plVar14;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    else if (uVar13 < uVar18) {
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar18 < 3) {
LAB_00113790:
        uVar9 = std::__ndk1::__next_prime(uVar9);
      }
      else {
        uVar20 = NEON_cnt(uVar18,1);
        uVar19 = NEON_uaddlv(uVar20,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar20 >> 0x10),uVar19)) goto LAB_00113790;
        if (1 < uVar9) {
          uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
        }
      }
      if (uVar13 <= uVar9) {
        uVar13 = uVar9;
      }
      if (uVar13 < uVar18) {
        if (uVar13 != 0) goto LAB_0011354c;
        pvVar5 = (void *)*param_1;
        *param_1 = 0;
        if (pvVar5 != (void *)0x0) {
          operator_delete(pvVar5);
        }
        param_1[1] = 0;
        uVar18 = 0;
      }
      else {
        uVar18 = param_1[1];
      }
    }
    if ((uVar18 & uVar18 - 1) == 0) {
      unaff_x26 = uVar18 - 1 & uVar4;
    }
    else {
      unaff_x26 = uVar4;
      if (uVar18 <= uVar4) {
        uVar13 = 0;
        if (uVar18 != 0) {
          uVar13 = uVar4 / uVar18;
        }
        unaff_x26 = uVar4 - uVar13 * uVar18;
      }
    }
  }
  lVar10 = *param_1;
  plVar14 = *(long **)(lVar10 + unaff_x26 * 8);
  if (plVar14 == (long *)0x0) {
    lVar12 = *plVar1;
    *plVar1 = (long)plVar17;
    *plVar17 = lVar12;
    *(long **)(lVar10 + unaff_x26 * 8) = plVar1;
    if (*plVar17 != 0) {
      uVar4 = *(ulong *)(*plVar17 + 8);
      if ((uVar18 & uVar18 - 1) == 0) {
        uVar4 = uVar4 & uVar18 - 1;
      }
      else if (uVar18 <= uVar4) {
        uVar13 = 0;
        if (uVar18 != 0) {
          uVar13 = uVar4 / uVar18;
        }
        uVar4 = uVar4 - uVar13 * uVar18;
      }
      plVar14 = (long *)(*param_1 + uVar4 * 8);
      goto LAB_0011374c;
    }
  }
  else {
    *plVar17 = *plVar14;
LAB_0011374c:
    *plVar14 = (long)plVar17;
  }
  param_1[3] = param_1[3] + 1;
LAB_0011375c:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return plVar17;
  }
LAB_00113804:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00113808  FUN_00113808 =====

void FUN_00113808(undefined8 *param_1)

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


// ===== 00113854  facebook::react::NativeKeyboardControllerSpecJSI::NativeKeyboardControllerSpecJSI =====

/* facebook::react::NativeKeyboardControllerSpecJSI::NativeKeyboardControllerSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeKeyboardControllerSpecJSI::NativeKeyboardControllerSpecJSI
          (NativeKeyboardControllerSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  long lVar2;
  NativeKeyboardControllerSpecJSI *pNVar3;
  byte local_58;
  undefined4 local_57;
  undefined2 uStack_53;
  char cStack_51;
  char cStack_50;
  undefined2 uStack_4f;
  char cStack_4d;
  char cStack_4c;
  char cStack_4b;
  char cStack_4a;
  char cStack_49;
  char cStack_48;
  undefined4 uStack_47;
  undefined1 uStack_43;
  undefined2 uStack_42;
  byte *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  pNVar3 = this + 0x30;
  *(undefined ***)this = &PTR__JavaTurboModule_00121050;
  local_58 = 0x18;
  cStack_4b = 0;
  uStack_4f = 0x6e61;
  cStack_4d = 0x74;
  cStack_4c = 0x73;
  local_40 = &local_58;
  local_57 = (undefined4)s_getConstants_00109a88._0_8_;
  uStack_53 = SUB82(s_getConstants_00109a88._0_8_,4);
  cStack_51 = SUB81(s_getConstants_00109a88._0_8_,6);
  cStack_50 = SUB81(s_getConstants_00109a88._0_8_,7);
                    /* try { // try from 001138bc to 001138cb has its CatchHandler @ 00113c10 */
  lVar2 = FUN_001156f8(pNVar3,&local_58,&local_40);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(code **)(lVar2 + 0x30) = FUN_00113c48;
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_42,CONCAT15(uStack_43,CONCAT41(uStack_47,cStack_48))));
  }
  local_58 = 0x18;
  local_40 = &local_58;
  cStack_4b = 0;
  uStack_4f = 0x6f4d;
  cStack_4d = 100;
  cStack_4c = 0x65;
  local_57 = (undefined4)s_setInputMode_001093f1._0_8_;
  uStack_53 = SUB82(s_setInputMode_001093f1._0_8_,4);
  cStack_51 = SUB81(s_setInputMode_001093f1._0_8_,6);
  cStack_50 = SUB81(s_setInputMode_001093f1._0_8_,7);
                    /* try { // try from 00113918 to 00113927 has its CatchHandler @ 00113c0c */
  lVar2 = FUN_001156f8(pNVar3,&local_58,&local_40);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_00113d58;
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_42,CONCAT15(uStack_43,CONCAT41(uStack_47,cStack_48))));
  }
  local_58 = 0x1c;
  local_40 = &local_58;
  cStack_49 = 0;
  local_57 = (undefined4)s_setDefaultMode_00109faa._0_6_;
  uStack_53 = SUB62(s_setDefaultMode_00109faa._0_6_,4);
  cStack_51 = (char)s_setDefaultMode_00109faa._6_2_;
  cStack_50 = SUB21(s_setDefaultMode_00109faa._6_2_,1);
  uStack_4f = (undefined2)s_setDefaultMode_00109faa._8_6_;
  cStack_4d = SUB61(s_setDefaultMode_00109faa._8_6_,2);
  cStack_4c = SUB61(s_setDefaultMode_00109faa._8_6_,3);
  cStack_4b = SUB61(s_setDefaultMode_00109faa._8_6_,4);
  cStack_4a = SUB61(s_setDefaultMode_00109faa._8_6_,5);
                    /* try { // try from 00113974 to 00113983 has its CatchHandler @ 00113c08 */
  lVar2 = FUN_001156f8(pNVar3,&local_58,&local_40);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(code **)(lVar2 + 0x30) = FUN_00113e60;
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_42,CONCAT15(uStack_43,CONCAT41(uStack_47,cStack_48))));
  }
  cStack_50 = 0;
  local_58 = 0xe;
  local_57 = 0x6c657270;
  uStack_53 = 0x616f;
  cStack_51 = 100;
  local_40 = &local_58;
                    /* try { // try from 001139cc to 001139db has its CatchHandler @ 00113c04 */
  lVar2 = FUN_001156f8(pNVar3,&local_58,&local_40);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(code **)(lVar2 + 0x30) = FUN_00113f60;
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_42,CONCAT15(uStack_43,CONCAT41(uStack_47,cStack_48))));
  }
  cStack_50 = 0;
  local_58 = 0xe;
  local_57 = 0x6d736964;
  uStack_53 = 0x7369;
  cStack_51 = 0x73;
  local_40 = &local_58;
                    /* try { // try from 00113a24 to 00113a33 has its CatchHandler @ 00113c00 */
  lVar2 = FUN_001156f8(pNVar3,&local_58,&local_40);
  *(undefined8 *)(lVar2 + 0x28) = 2;
  *(code **)(lVar2 + 0x30) = FUN_00114060;
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_42,CONCAT15(uStack_43,CONCAT41(uStack_47,cStack_48))));
  }
  local_58 = 0x14;
  local_40 = &local_58;
  uStack_4f = 0x6f54;
  local_57 = (undefined4)s_setFocusTo_00109de5._0_8_;
  uStack_53 = SUB82(s_setFocusTo_00109de5._0_8_,4);
  cStack_51 = SUB81(s_setFocusTo_00109de5._0_8_,6);
  cStack_50 = SUB81(s_setFocusTo_00109de5._0_8_,7);
  cStack_4d = 0;
                    /* try { // try from 00113a80 to 00113a8f has its CatchHandler @ 00113bfc */
  lVar2 = FUN_001156f8(pNVar3,&local_58,&local_40);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_00114168;
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_42,CONCAT15(uStack_43,CONCAT41(uStack_47,cStack_48))));
  }
  local_58 = 0x28;
  local_40 = &local_58;
  uStack_43 = 0;
  uStack_47 = 0x776f646e;
  uStack_4f = (undefined2)s_viewPositionInWindow_00109f2c._8_8_;
  cStack_4d = SUB81(s_viewPositionInWindow_00109f2c._8_8_,2);
  cStack_4c = SUB81(s_viewPositionInWindow_00109f2c._8_8_,3);
  cStack_4b = SUB81(s_viewPositionInWindow_00109f2c._8_8_,4);
  cStack_4a = SUB81(s_viewPositionInWindow_00109f2c._8_8_,5);
  cStack_49 = SUB81(s_viewPositionInWindow_00109f2c._8_8_,6);
  cStack_48 = SUB81(s_viewPositionInWindow_00109f2c._8_8_,7);
  local_57 = (undefined4)s_viewPositionInWindow_00109f2c._0_8_;
  uStack_53 = SUB82(s_viewPositionInWindow_00109f2c._0_8_,4);
  cStack_51 = SUB81(s_viewPositionInWindow_00109f2c._0_8_,6);
  cStack_50 = SUB81(s_viewPositionInWindow_00109f2c._0_8_,7);
                    /* try { // try from 00113ae0 to 00113aef has its CatchHandler @ 00113bf8 */
  lVar2 = FUN_001156f8(pNVar3,&local_58,&local_40);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_00114278;
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_42,CONCAT15(uStack_43,CONCAT41(uStack_47,cStack_48))));
  }
  local_58 = 0x16;
  local_40 = &local_58;
  cStack_4c = 0;
  uStack_4f = 0x656e;
  cStack_4d = 0x72;
  local_57 = (undefined4)s_addListener_00109d78._0_8_;
  uStack_53 = SUB82(s_addListener_00109d78._0_8_,4);
  cStack_51 = SUB81(s_addListener_00109d78._0_8_,6);
  cStack_50 = SUB81(s_addListener_00109d78._0_8_,7);
                    /* try { // try from 00113b40 to 00113b4f has its CatchHandler @ 00113bf4 */
  lVar2 = FUN_001156f8(pNVar3,&local_58,&local_40);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_001143c8;
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_42,CONCAT15(uStack_43,CONCAT41(uStack_47,cStack_48))));
  }
  local_58 = 0x1e;
  local_40 = &local_58;
  cStack_48 = 0;
  local_57 = (undefined4)s_removeListeners_0010a070._0_7_;
  uStack_53 = SUB72(s_removeListeners_0010a070._0_7_,4);
  cStack_51 = SUB71(s_removeListeners_0010a070._0_7_,6);
  cStack_50 = s_removeListeners_0010a070[7];
  uStack_4f = (undefined2)s_removeListeners_0010a070._8_7_;
  cStack_4d = SUB71(s_removeListeners_0010a070._8_7_,2);
  cStack_4c = SUB71(s_removeListeners_0010a070._8_7_,3);
  cStack_4b = SUB71(s_removeListeners_0010a070._8_7_,4);
  cStack_4a = SUB71(s_removeListeners_0010a070._8_7_,5);
  cStack_49 = SUB71(s_removeListeners_0010a070._8_7_,6);
                    /* try { // try from 00113b9c to 00113bab has its CatchHandler @ 00113bf0 */
  lVar2 = FUN_001156f8(pNVar3,&local_58,&local_40);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_001144dc;
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_42,CONCAT15(uStack_43,CONCAT41(uStack_47,cStack_48))));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00113c48  FUN_00113c48 =====

void FUN_00113c48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58;
  char local_57 [8];
  undefined7 uStack_4f;
  char cStack_48;
  undefined2 uStack_47;
  undefined5 uStack_45;
  byte local_40;
  char local_3f [8];
  undefined4 local_37;
  undefined1 local_33;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x18;
  local_37 = 0x73746e61;
  local_33 = 0;
  local_58 = 0x22;
  local_3f = (char  [8])s_getConstants_00109a88._0_8_;
  uStack_4f = (undefined7)s___Ljava_util_Map__00109bcb._8_8_;
  cStack_48 = SUB81(s___Ljava_util_Map__00109bcb._8_8_,7);
  local_57 = (char  [8])s___Ljava_util_Map__00109bcb._0_8_;
  uStack_47 = 0x3b;
                    /* try { // try from 00113cb8 to 00113cd7 has its CatchHandler @ 00113d18 */
  facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,4,&local_40,&local_58,param_3,param_4,&DAT_00127100);
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_45,CONCAT21(uStack_47,cStack_48)));
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00113d58  FUN_00113d58 =====

void FUN_00113d58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40;
  char local_3f [8];
  undefined4 local_37;
  undefined1 local_33;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x18;
  local_37 = 0x65646f4d;
  local_58[0] = 8;
  local_33 = 0;
  local_3f = (char  [8])s_setInputMode_001093f1._0_8_;
  local_58[1] = 0x28;
  local_58[2] = 0x44;
  local_58[3] = 0x29;
  local_58[4] = 0x56;
  local_58[5] = 0;
                    /* try { // try from 00113dc0 to 00113ddf has its CatchHandler @ 00113e20 */
  facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,local_58,param_3,param_4,&DAT_00127108);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00113e60  FUN_00113e60 =====

void FUN_00113e60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40;
  char local_3f [6];
  char acStack_39 [2];
  char acStack_37 [6];
  undefined1 local_31;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x1c;
  local_3f = (char  [6])s_setDefaultMode_00109faa._0_6_;
  local_58[0] = 6;
  acStack_39 = (char  [2])s_setDefaultMode_00109faa._6_2_;
  acStack_37 = (char  [6])s_setDefaultMode_00109faa._8_6_;
  local_31 = 0;
  local_58[1] = 0x28;
  local_58[2] = 0x29;
  local_58[3] = 0x56;
  local_58[4] = 0;
                    /* try { // try from 00113ec0 to 00113edf has its CatchHandler @ 00113f20 */
  facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,local_58,param_3,param_4,&DAT_00127110);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00113f60  FUN_00113f60 =====

void FUN_00113f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40[0] = 0xe;
  local_40[8] = 0;
  local_40[1] = 0x70;
  local_40[2] = 0x72;
  local_40[3] = 0x65;
  local_40[4] = 0x6c;
  local_40[5] = 0x6f;
  local_40[6] = 0x61;
  local_40[7] = 100;
  local_58[0] = 6;
  local_58[1] = 0x28;
  local_58[2] = 0x29;
  local_58[3] = 0x56;
  local_58[4] = 0;
                    /* try { // try from 00113fc0 to 00113fdf has its CatchHandler @ 00114020 */
  facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,local_40,local_58,param_3,param_4,&DAT_00127118);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00114060  FUN_00114060 =====

void FUN_00114060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40[0] = 0xe;
  local_40[8] = 0;
  local_40[1] = 100;
  local_40[2] = 0x69;
  local_40[3] = 0x73;
  local_40[4] = 0x6d;
  local_40[5] = 0x69;
  local_40[6] = 0x73;
  local_40[7] = 0x73;
  local_58[0] = 10;
  local_58[1] = 0x28;
  local_58[2] = 0x5a;
  local_58[3] = 0x5a;
  local_58[4] = 0x29;
  local_58[5] = 0x56;
  local_58[6] = 0;
                    /* try { // try from 001140c8 to 001140e7 has its CatchHandler @ 00114128 */
  facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,local_40,local_58,param_3,param_4,&DAT_00127120);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00114168  FUN_00114168 =====

void FUN_00114168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58;
  char local_57 [8];
  char acStack_4f [5];
  undefined2 uStack_4a;
  char cStack_48;
  char acStack_47 [5];
  undefined1 uStack_42;
  undefined1 uStack_41;
  byte local_40;
  char local_3f [8];
  undefined2 local_37;
  undefined1 local_35;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_37 = 0x6f54;
  local_40 = 0x14;
  local_58 = 0x2a;
  local_35 = 0;
  local_3f = (char  [8])s_setFocusTo_00109de5._0_8_;
  acStack_4f = (char  [5])s__Ljava_lang_String__V_00109e9d._8_5_;
  local_57 = (char  [8])s__Ljava_lang_String__V_00109e9d._0_8_;
  uStack_4a = (undefined2)s__Ljava_lang_String__V_00109e9d._13_3_;
  cStack_48 = SUB31(s__Ljava_lang_String__V_00109e9d._13_3_,2);
  acStack_47 = (char  [5])s__Ljava_lang_String__V_00109e9d._16_5_;
  uStack_42 = 0;
                    /* try { // try from 001141d8 to 001141f7 has its CatchHandler @ 00114238 */
  facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,&local_58,param_3,param_4,&DAT_00127128);
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_41,CONCAT16(uStack_42,CONCAT51(acStack_47,cStack_48))));
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00114278  FUN_00114278 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00114278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [8];
  undefined7 uStack_57;
  char cStack_50;
  undefined4 uStack_4f;
  undefined1 uStack_4b;
  undefined2 uStack_4a;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x28;
  uStack_4b = 0;
  uStack_4f = 0x776f646e;
  uStack_57 = (undefined7)s_viewPositionInWindow_00109f2c._8_8_;
  cStack_50 = SUB81(s_viewPositionInWindow_00109f2c._8_8_,7);
  local_5f = (char  [8])s_viewPositionInWindow_00109f2c._0_8_;
                    /* try { // try from 001142d8 to 001142df has its CatchHandler @ 00114398 */
  local_70 = (char *)operator_new(0x30);
  uVar5 = s__DLcom_facebook_react_bridge_Pro_0010986d._16_8_;
  uVar4 = s__DLcom_facebook_react_bridge_Pro_0010986d._0_8_;
  uVar2 = CONCAT17(s__DLcom_facebook_react_bridge_Pro_0010986d[0x1f],
                   s__DLcom_facebook_react_bridge_Pro_0010986d._24_7_);
  uVar3 = CONCAT71(s__DLcom_facebook_react_bridge_Pro_0010986d._32_7_,
                   s__DLcom_facebook_react_bridge_Pro_0010986d[0x1f]);
  uStack_78 = _UNK_0010a4c8;
  local_80 = _DAT_0010a4c0;
  *(undefined8 *)(local_70 + 8) = s__DLcom_facebook_react_bridge_Pro_0010986d._8_8_;
  *(undefined8 *)local_70 = uVar4;
  *(undefined8 *)(local_70 + 0x18) = uVar2;
  *(undefined8 *)(local_70 + 0x10) = uVar5;
  *(undefined8 *)(local_70 + 0x1f) = uVar3;
  local_70[0x27] = '\0';
                    /* try { // try from 0011430c to 00114337 has its CatchHandler @ 00114380 */
  facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,&local_60,&local_80,param_4,param_5,&DAT_00127130);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_4a,CONCAT15(uStack_4b,CONCAT41(uStack_4f,cStack_50))));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001143c8  FUN_001143c8 =====

void FUN_001143c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58;
  char local_57 [8];
  char acStack_4f [5];
  undefined2 uStack_4a;
  char cStack_48;
  char acStack_47 [5];
  undefined1 uStack_42;
  undefined1 uStack_41;
  byte local_40;
  undefined7 local_3f;
  char cStack_38;
  undefined3 uStack_37;
  undefined1 local_34;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x16;
  local_58 = 0x2a;
  local_34 = 0;
  local_3f = (undefined7)s_addListener_00109d78._0_8_;
  _cStack_38 = CONCAT31(0x72656e,SUB81(s_addListener_00109d78._0_8_,7));
  acStack_4f = (char  [5])s__Ljava_lang_String__V_00109e9d._8_5_;
  local_57 = (char  [8])s__Ljava_lang_String__V_00109e9d._0_8_;
  uStack_4a = (undefined2)s__Ljava_lang_String__V_00109e9d._13_3_;
  cStack_48 = SUB31(s__Ljava_lang_String__V_00109e9d._13_3_,2);
  acStack_47 = (char  [5])s__Ljava_lang_String__V_00109e9d._16_5_;
  uStack_42 = 0;
                    /* try { // try from 0011443c to 0011445b has its CatchHandler @ 0011449c */
  facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,&local_58,param_3,param_4,&DAT_00127138);
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_41,CONCAT16(uStack_42,CONCAT51(acStack_47,cStack_48))));
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001144dc  FUN_001144dc =====

void FUN_001144dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40;
  char local_3f [7];
  char cStack_38;
  char acStack_37 [7];
  undefined1 local_30;
  undefined7 uStack_2f;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x1e;
  local_3f = (char  [7])s_removeListeners_0010a070._0_7_;
  local_58[0] = 8;
  cStack_38 = s_removeListeners_0010a070[7];
  acStack_37 = (char  [7])s_removeListeners_0010a070._8_7_;
  local_30 = 0;
  local_58[1] = 0x28;
  local_58[2] = 0x44;
  local_58[3] = 0x29;
  local_58[4] = 0x56;
  local_58[5] = 0;
                    /* try { // try from 00114540 to 0011455f has its CatchHandler @ 001145a0 */
  facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,local_58,param_3,param_4,&DAT_00127140);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_2f,local_30));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001145e0  facebook::react::NativeStatusBarManagerCompatSpecJSI::NativeStatusBarManagerCompatSpecJSI =====

/* facebook::react::NativeStatusBarManagerCompatSpecJSI::NativeStatusBarManagerCompatSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeStatusBarManagerCompatSpecJSI::NativeStatusBarManagerCompatSpecJSI
          (NativeStatusBarManagerCompatSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  long lVar2;
  NativeStatusBarManagerCompatSpecJSI *pNVar3;
  byte local_58;
  undefined6 local_57;
  undefined2 uStack_51;
  char local_4f;
  char cStack_4e;
  undefined4 uStack_4d;
  undefined1 local_49;
  void *local_48;
  byte *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  pNVar3 = this + 0x30;
  *(undefined ***)this = &PTR__JavaTurboModule_00121090;
  local_58 = 0x12;
  local_57 = (undefined6)s_setHidden_00109a95._0_8_;
  uStack_51 = SUB82(s_setHidden_00109a95._0_8_,6);
  local_4f = 0x6e;
  cStack_4e = 0;
  local_40 = &local_58;
                    /* try { // try from 00114640 to 0011464f has its CatchHandler @ 001147ac */
  lVar2 = FUN_001156f8(pNVar3,&local_58,&local_40);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_001147e4;
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  local_4f = 0;
  local_58 = 0x10;
  local_40 = &local_58;
  local_57 = 0x6c6f43746573;
  uStack_51 = 0x726f;
                    /* try { // try from 00114698 to 001146a7 has its CatchHandler @ 001147a8 */
  lVar2 = FUN_001156f8(pNVar3,&local_58,&local_40);
  *(undefined8 *)(lVar2 + 0x28) = 2;
  *(code **)(lVar2 + 0x30) = FUN_001148e4;
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  local_58 = 0x1c;
  local_40 = &local_58;
  local_49 = 0;
  local_57._0_1_ = s_setTranslucent_00109690[0];
  local_57._1_1_ = s_setTranslucent_00109690[1];
  local_57._2_1_ = s_setTranslucent_00109690[2];
  local_57._3_1_ = s_setTranslucent_00109690[3];
  local_57._4_1_ = s_setTranslucent_00109690[4];
  local_57._5_1_ = s_setTranslucent_00109690[5];
  uStack_51._0_1_ = s_setTranslucent_00109690[6];
  uStack_51._1_1_ = s_setTranslucent_00109690[7];
  local_4f = (char)s_setTranslucent_00109690._8_6_;
  cStack_4e = SUB61(s_setTranslucent_00109690._8_6_,1);
  uStack_4d = SUB64(s_setTranslucent_00109690._8_6_,2);
                    /* try { // try from 001146f4 to 00114703 has its CatchHandler @ 001147a4 */
  lVar2 = FUN_001156f8(pNVar3,&local_58,&local_40);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_001149e8;
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  local_4f = 0;
  local_58 = 0x10;
  local_40 = &local_58;
  local_57 = 0x797453746573;
  uStack_51 = 0x656c;
                    /* try { // try from 0011474c to 0011475b has its CatchHandler @ 001147a0 */
  lVar2 = FUN_001156f8(pNVar3,&local_58,&local_40);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_00114aec;
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001147e4  FUN_001147e4 =====

void FUN_001147e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40;
  char local_3f [8];
  undefined2 local_37;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x12;
  local_58[5] = 0;
  local_3f = (char  [8])s_setHidden_00109a95._0_8_;
  local_37 = 0x6e;
  local_58[0] = 8;
  local_58[1] = 0x28;
  local_58[2] = 0x5a;
  local_58[3] = 0x29;
  local_58[4] = 0x56;
                    /* try { // try from 00114844 to 00114863 has its CatchHandler @ 001148a4 */
  facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,local_58,param_3,param_4,&DAT_00127148);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001148e4  FUN_001148e4 =====

void FUN_001148e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40[0] = 0x10;
  local_40[9] = 0;
  local_40[1] = 0x73;
  local_40[2] = 0x65;
  local_40[3] = 0x74;
  local_40[4] = 0x43;
  local_40[5] = 0x6f;
  local_40[6] = 0x6c;
  local_40[7] = 0x6f;
  local_40[8] = 0x72;
  local_58[0] = 10;
  local_58[1] = 0x28;
  local_58[2] = 0x44;
  local_58[3] = 0x5a;
  local_58[4] = 0x29;
  local_58[5] = 0x56;
  local_58[6] = 0;
                    /* try { // try from 00114948 to 00114967 has its CatchHandler @ 001149a8 */
  facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,local_40,local_58,param_3,param_4,&DAT_00127150);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001149e8  FUN_001149e8 =====

void FUN_001149e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40;
  char local_3f [6];
  char acStack_39 [2];
  char acStack_37 [6];
  undefined1 local_31;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x1c;
  local_3f = (char  [6])s_setTranslucent_00109690._0_6_;
  local_58[0] = 8;
  acStack_39 = (char  [2])s_setTranslucent_00109690._6_2_;
  acStack_37 = (char  [6])s_setTranslucent_00109690._8_6_;
  local_31 = 0;
  local_58[1] = 0x28;
  local_58[2] = 0x5a;
  local_58[3] = 0x29;
  local_58[4] = 0x56;
  local_58[5] = 0;
                    /* try { // try from 00114a4c to 00114a6b has its CatchHandler @ 00114aac */
  facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,local_58,param_3,param_4,&DAT_00127158);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00114aec  FUN_00114aec =====

void FUN_00114aec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58;
  char local_57 [8];
  char acStack_4f [5];
  undefined2 uStack_4a;
  char cStack_48;
  char acStack_47 [5];
  undefined1 uStack_42;
  undefined1 uStack_41;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40[0] = 0x10;
  local_40[9] = 0;
  uStack_42 = 0;
  local_40[1] = 0x73;
  local_40[2] = 0x65;
  local_40[3] = 0x74;
  local_40[4] = 0x53;
  local_40[5] = 0x74;
  local_40[6] = 0x79;
  local_40[7] = 0x6c;
  local_40[8] = 0x65;
  local_58 = 0x2a;
  acStack_4f = (char  [5])s__Ljava_lang_String__V_00109e9d._8_5_;
  local_57 = (char  [8])s__Ljava_lang_String__V_00109e9d._0_8_;
  uStack_4a = (undefined2)s__Ljava_lang_String__V_00109e9d._13_3_;
  cStack_48 = SUB31(s__Ljava_lang_String__V_00109e9d._13_3_,2);
  acStack_47 = (char  [5])s__Ljava_lang_String__V_00109e9d._16_5_;
                    /* try { // try from 00114b58 to 00114b77 has its CatchHandler @ 00114bb8 */
  facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,local_40,&local_58,param_3,param_4,&DAT_00127160);
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_41,CONCAT16(uStack_42,CONCAT51(acStack_47,cStack_48))));
  }
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00114bf8  facebook::react::RNKC_ModuleProvider =====

/* facebook::react::RNKC_ModuleProvider(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   facebook::react::JavaTurboModule::InitParams const&) */

void __thiscall
facebook::react::RNKC_ModuleProvider(react *this,basic_string *param_1,InitParams *param_2)

{
  ulong uVar1;
  react rVar2;
  undefined8 *puVar3;
  undefined8 *in_x8;
  react *prVar4;
  NativeKeyboardControllerSpecJSI *this_00;
  
  rVar2 = *this;
  uVar1 = (ulong)((byte)rVar2 >> 1);
  if (((byte)rVar2 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  if (uVar1 == 0x16) {
    prVar4 = *(react **)(this + 0x10);
    if (((byte)rVar2 & 1) == 0) {
      prVar4 = this + 1;
    }
    if ((*(long *)prVar4 == 0x6142737574617453 && *(long *)(prVar4 + 8) == 0x726567616e614d72) &&
        *(long *)(prVar4 + 0xe) == 0x7461706d6f437265) {
      puVar3 = (undefined8 *)operator_new(0xb8);
      this_00 = (NativeKeyboardControllerSpecJSI *)(puVar3 + 3);
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = &PTR_FUN_00121150;
                    /* try { // try from 00114d30 to 00114d3b has its CatchHandler @ 00114d50 */
      NativeStatusBarManagerCompatSpecJSI::NativeStatusBarManagerCompatSpecJSI
                ((NativeStatusBarManagerCompatSpecJSI *)this_00,(InitParams *)param_1);
LAB_00114d3c:
      *in_x8 = this_00;
      in_x8[1] = puVar3;
      return;
    }
  }
  else if (uVar1 == 0x12) {
    prVar4 = *(react **)(this + 0x10);
    if (((byte)rVar2 & 1) == 0) {
      prVar4 = this + 1;
    }
    if ((*(long *)prVar4 == 0x6472616f6279654b && *(long *)(prVar4 + 8) == 0x6c6c6f72746e6f43) &&
        *(short *)(prVar4 + 0x10) == 0x7265) {
      puVar3 = (undefined8 *)operator_new(0xb8);
      this_00 = (NativeKeyboardControllerSpecJSI *)(puVar3 + 3);
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = &PTR_FUN_00121100;
                    /* try { // try from 00114c9c to 00114ca7 has its CatchHandler @ 00114d54 */
      NativeKeyboardControllerSpecJSI::NativeKeyboardControllerSpecJSI
                (this_00,(InitParams *)param_1);
      goto LAB_00114d3c;
    }
  }
  *in_x8 = 0;
  in_x8[1] = 0;
  return;
}


// ===== 00114d70  FUN_00114d70 =====

void FUN_00114d70(JavaTurboModule *param_1)

{
  facebook::react::JavaTurboModule::~JavaTurboModule(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00114d94  FUN_00114d94 =====

void FUN_00114d94(Value *param_1,long *param_2,IRuntime *param_3,undefined8 param_4)

{
  long lVar1;
  IRuntime aIStack_70 [16];
  undefined8 *local_60;
  Value aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_2 + 0x28))();
  if ((param_2[0x10] != 0) && (*(int *)param_1 != 0)) {
                    /* try { // try from 00114dec to 00114df7 has its CatchHandler @ 00114ebc */
    (**(code **)(*(long *)param_3 + 0x228))(aIStack_70,param_3);
                    /* try { // try from 00114df8 to 00114e07 has its CatchHandler @ 00114eac */
    facebook::jsi::Value::asObject(aIStack_70);
                    /* try { // try from 00114e08 to 00114e17 has its CatchHandler @ 00114e90 */
    facebook::jsi::Value::Value(aVStack_58,param_3,param_1);
                    /* try { // try from 00114e20 to 00114e33 has its CatchHandler @ 00114e80 */
    (**(code **)(*(long *)param_3 + 0x1b0))(param_3,&local_60,param_4,aVStack_58);
    facebook::jsi::Value::~Value(aVStack_58);
    if (local_60 != (undefined8 *)0x0) {
      (**(code **)*local_60)();
    }
    facebook::jsi::Value::~Value((Value *)aIStack_70);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00114ee4  FUN_00114ee4 =====

void FUN_00114ee4(ulong *param_1,long param_2,long *param_3)

{
  void *pvVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar12 = *(ulong *)(param_2 + 0x48);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (uVar12 != 0) {
    if (uVar12 >> 0x3d != 0) {
LAB_00115194:
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 001151a8 to 001151ab has its CatchHandler @ 001151ac */
        uVar5 = FUN_00116190();
                    /* catch() { ... } // from try @ 00114f3c with catch @ 001151ac
                       catch() { ... } // from try @ 001151a8 with catch @ 001151ac */
                    /* catch() { ... } // from try @ 00114f98 with catch @ 001151d0 */
        FUN_00116118(param_1);
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_0010f1e0(uVar5);
        }
      }
      goto LAB_001151f8;
    }
                    /* try { // try from 00114f3c to 00114f3f has its CatchHandler @ 001151ac */
    pvVar4 = operator_new(uVar12 << 3);
    *param_1 = (ulong)pvVar4;
    param_1[1] = (ulong)pvVar4;
    param_1[2] = (ulong)((long)pvVar4 + uVar12 * 8);
  }
  for (plVar13 = *(long **)(param_2 + 0x40); plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
    uVar12 = (ulong)(*(byte *)(plVar13 + 2) >> 1);
    lVar14 = (long)plVar13 + 0x11;
    if ((*(byte *)(plVar13 + 2) & 1) != 0) {
      uVar12 = plVar13[3];
      lVar14 = plVar13[4];
    }
                    /* try { // try from 00114f98 to 00114fa3 has its CatchHandler @ 001151d0 */
    (**(code **)(*param_3 + 0xa0))(&local_70,param_3,lVar14,uVar12);
    plVar11 = (long *)param_1[1];
    if (plVar11 < (long *)param_1[2]) {
      *plVar11 = (long)local_70;
      param_1[1] = (ulong)(plVar11 + 1);
    }
    else {
      plVar16 = (long *)*param_1;
      lVar14 = (long)plVar11 - (long)plVar16 >> 3;
      uVar12 = lVar14 + 1;
      if (uVar12 >> 0x3d != 0) {
        if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_001151f8;
                    /* try { // try from 00115178 to 00115193 has its CatchHandler @ 001151b4 */
        FUN_00116190();
LAB_0011517c:
        if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_001151f8;
        FUN_00113370();
        goto LAB_00115194;
      }
      uVar6 = (long)param_1[2] - (long)plVar16;
      uVar8 = (long)uVar6 >> 2;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar6) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        if (uVar8 >> 0x3d != 0) goto LAB_0011517c;
                    /* try { // try from 00114ff4 to 00114ff7 has its CatchHandler @ 001151b0 */
        pvVar4 = operator_new(uVar8 << 3);
      }
      puVar3 = local_70;
      plVar9 = (long *)((long)pvVar4 + lVar14 * 8);
      pvVar1 = (void *)((long)pvVar4 + uVar8 * 8);
      local_70 = (undefined8 *)0x0;
      plVar15 = plVar9 + 1;
      *plVar9 = (long)puVar3;
      if ((long)plVar11 - (long)plVar16 == 0) {
        *param_1 = (ulong)plVar9;
        param_1[1] = (ulong)plVar15;
        param_1[2] = (ulong)pvVar1;
      }
      else {
        uVar12 = ((long)plVar11 - (long)plVar16) - 8;
        plVar7 = plVar9;
        if ((uVar12 < 0x78) ||
           ((uVar8 = (long)plVar11 + (-8 - (long)plVar16) & 0xfffffffffffffff8,
            (long *)((long)pvVar4 + (((long)plVar11 - (long)plVar16) - uVar8) + -8) < plVar11 &&
            ((long *)((long)plVar11 + (-8 - uVar8)) < plVar9)))) {
LAB_001150b4:
          do {
            plVar11 = plVar11 + -1;
            plVar7 = plVar7 + -1;
            *plVar7 = *plVar11;
            *plVar11 = 0;
          } while (plVar11 != plVar16);
        }
        else {
          plVar10 = plVar11 + -2;
          uVar12 = (uVar12 >> 3) + 1;
          uVar6 = uVar12 & 0x3ffffffffffffffc;
          plVar11 = plVar11 + -uVar6;
          plVar7 = plVar9 + -uVar6;
          plVar9 = plVar9 + -2;
          uVar8 = uVar6;
          do {
            lVar19 = plVar10[-1];
            lVar18 = plVar10[-2];
            lVar17 = plVar10[1];
            lVar14 = *plVar10;
            uVar8 = uVar8 - 4;
            plVar10[1] = 0;
            *plVar10 = 0;
            plVar10[-1] = 0;
            plVar10[-2] = 0;
            plVar10 = plVar10 + -4;
            plVar9[-1] = lVar19;
            plVar9[-2] = lVar18;
            plVar9[1] = lVar17;
            *plVar9 = lVar14;
            plVar9 = plVar9 + -4;
          } while (uVar8 != 0);
          if (uVar12 != uVar6) goto LAB_001150b4;
        }
        plVar11 = (long *)*param_1;
        plVar16 = (long *)param_1[1];
        *param_1 = (ulong)plVar7;
        param_1[1] = (ulong)plVar15;
        param_1[2] = (ulong)pvVar1;
        while (plVar16 != plVar11) {
          plVar16 = plVar16 + -1;
          if ((undefined8 *)*plVar16 != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)*plVar16)();
          }
        }
      }
      if (plVar11 != (long *)0x0) {
        operator_delete(plVar11);
      }
      param_1[1] = (ulong)plVar15;
      if (local_70 != (undefined8 *)0x0) {
        (**(code **)*local_70)();
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_001151f8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001151fc  FUN_001151fc =====

void FUN_001151fc(undefined4 *param_1,long param_2,long *param_3,undefined8 param_4)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  char *__s2;
  int iVar6;
  ulong uVar7;
  undefined ***pppuVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined2 uVar17;
  undefined8 uVar18;
  undefined8 local_f0;
  byte local_e8 [8];
  size_t local_e0;
  char *local_d8;
  undefined **local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  undefined ***local_b0;
  undefined **local_a0;
  long local_98;
  long lStack_90;
  long local_88;
  undefined ***local_80;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  (**(code **)(*param_3 + 0xc0))(local_e8,param_3,param_4);
  sVar1 = (ulong)(local_e8[0] >> 1);
  __s2 = (char *)((ulong)local_e8 | 1);
  if ((local_e8[0] & 1) != 0) {
    sVar1 = local_e0;
    __s2 = local_d8;
  }
  uVar7 = FUN_00115c34(__s2,sVar1);
  uVar16 = *(ulong *)(param_2 + 0x38);
  if (uVar16 != 0) {
    uVar18 = NEON_cnt(uVar16,1);
    uVar17 = NEON_uaddlv(uVar18,1);
    uVar14 = CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar17) & 0xffffffff;
    if (uVar14 < 2) {
      uVar15 = uVar16 - 1 & uVar7;
    }
    else {
      uVar15 = uVar7;
      if (uVar16 <= uVar7) {
        uVar15 = 0;
        if (uVar16 != 0) {
          uVar15 = uVar7 / uVar16;
        }
        uVar15 = uVar7 - uVar15 * uVar16;
      }
    }
    plVar9 = *(long **)(*(long *)(param_2 + 0x30) + uVar15 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar7) {
          bVar3 = *(byte *)(plVar9 + 2);
          uVar10 = (ulong)(bVar3 >> 1);
          sVar2 = uVar10;
          if ((bVar3 & 1) != 0) {
            sVar2 = plVar9[3];
          }
          if (sVar2 == sVar1) {
            if ((bVar3 & 1) == 0) {
              if (bVar3 < 2) {
LAB_001153c0:
                lStack_b8 = plVar9[6];
                local_c0 = plVar9[5];
                local_b0 = &local_d0;
                local_d0 = &PTR_FUN_001211a0;
                local_a0 = &PTR_FUN_001211a0;
                    /* try { // try from 00115400 to 00115413 has its CatchHandler @ 00115630 */
                lStack_c8 = param_2;
                local_98 = param_2;
                lStack_90 = local_c0;
                local_88 = lStack_b8;
                local_80 = &local_a0;
                (**(code **)(*param_3 + 0x278))(&local_f0,param_3,param_4,(int)plVar9[5],&local_a0);
                if (local_80 == &local_a0) {
                  lVar11 = 4;
                  pppuVar8 = &local_a0;
LAB_001155d0:
                  (*(code *)(*pppuVar8)[lVar11])();
                }
                else if (local_80 != (undefined ***)0x0) {
                  lVar11 = 5;
                  pppuVar8 = local_80;
                  goto LAB_001155d0;
                }
                uVar18 = local_f0;
                local_f0 = 0;
                *param_1 = 7;
                *(undefined8 *)(param_1 + 2) = uVar18;
                if (local_b0 == &local_d0) {
                  lVar11 = 4;
                  pppuVar8 = &local_d0;
                }
                else {
                  if (local_b0 == (undefined ***)0x0) goto LAB_00115588;
                  lVar11 = 5;
                  pppuVar8 = local_b0;
                }
                (*(code *)(*pppuVar8)[lVar11])();
                goto LAB_00115588;
              }
              pcVar12 = (char *)((long)plVar9 + 0x11);
              pcVar13 = __s2;
              while (*pcVar12 == *pcVar13) {
                uVar10 = uVar10 - 1;
                pcVar12 = pcVar12 + 1;
                pcVar13 = pcVar13 + 1;
                if (uVar10 == 0) goto LAB_001153c0;
              }
            }
            else {
              iVar6 = memcmp((void *)plVar9[4],__s2,plVar9[3]);
              if (iVar6 == 0) goto LAB_001153c0;
            }
          }
        }
        else {
          if (uVar14 < 2) {
            uVar10 = uVar10 & uVar16 - 1;
          }
          else if (uVar16 <= uVar10) {
            uVar4 = 0;
            if (uVar16 != 0) {
              uVar4 = uVar10 / uVar16;
            }
            uVar10 = uVar10 - uVar4 * uVar16;
          }
          if (uVar10 != uVar15) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  uVar7 = FUN_00115c34(__s2,sVar1);
  uVar16 = *(ulong *)(param_2 + 0x60);
  if (uVar16 != 0) {
    uVar18 = NEON_cnt(uVar16,1);
    uVar17 = NEON_uaddlv(uVar18,1);
    uVar14 = CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar17) & 0xffffffff;
    if (uVar14 < 2) {
      uVar15 = uVar16 - 1 & uVar7;
    }
    else {
      uVar15 = uVar7;
      if (uVar16 <= uVar7) {
        uVar15 = 0;
        if (uVar16 != 0) {
          uVar15 = uVar7 / uVar16;
        }
        uVar15 = uVar7 - uVar15 * uVar16;
      }
    }
    plVar9 = *(long **)(*(long *)(param_2 + 0x58) + uVar15 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar7) {
          bVar3 = *(byte *)(plVar9 + 2);
          uVar10 = (ulong)(bVar3 >> 1);
          sVar2 = uVar10;
          if ((bVar3 & 1) != 0) {
            sVar2 = plVar9[3];
          }
          if (sVar2 == sVar1) {
            if ((bVar3 & 1) == 0) {
              if (bVar3 < 2) {
LAB_00115548:
                    /* try { // try from 00115554 to 00115563 has its CatchHandler @ 00115628 */
                (**(code **)(*(long *)plVar9[5] + 0x10))
                          (&local_a0,(long *)plVar9[5],param_3,param_2 + 0x20);
                *param_1 = 7;
                *(undefined ***)(param_1 + 2) = local_a0;
                goto LAB_00115588;
              }
              pcVar12 = (char *)((long)plVar9 + 0x11);
              pcVar13 = __s2;
              while (*pcVar12 == *pcVar13) {
                uVar10 = uVar10 - 1;
                pcVar12 = pcVar12 + 1;
                pcVar13 = pcVar13 + 1;
                if (uVar10 == 0) goto LAB_00115548;
              }
            }
            else {
              iVar6 = memcmp((void *)plVar9[4],__s2,plVar9[3]);
              if (iVar6 == 0) goto LAB_00115548;
            }
          }
        }
        else {
          if (uVar14 < 2) {
            uVar10 = uVar10 & uVar16 - 1;
          }
          else if (uVar16 <= uVar10) {
            uVar4 = 0;
            if (uVar16 != 0) {
              uVar4 = uVar10 / uVar16;
            }
            uVar10 = uVar10 - uVar4 * uVar16;
          }
          if (uVar10 != uVar15) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  *param_1 = 0;
LAB_00115588:
  if ((local_e8[0] & 1) != 0) {
    operator_delete(local_d8);
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001156c4  FUN_001156c4 =====

void FUN_001156c4(JavaTurboModule *param_1)

{
  facebook::react::JavaTurboModule::~JavaTurboModule(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001156e8  FUN_001156e8 =====

void FUN_001156e8(void)

{
  __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 001156f8  FUN_001156f8 =====

long * FUN_001156f8(long *param_1,byte *param_2,undefined8 *param_3)

{
  long *plVar1;
  size_t sVar2;
  size_t sVar3;
  byte *__s2;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  void *pvVar9;
  void *pvVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  ulong uVar21;
  ulong unaff_x27;
  undefined2 uVar22;
  undefined8 uVar23;
  float fVar24;
  long *local_80;
  long *plStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  sVar3 = *(size_t *)(param_2 + 8);
  __s2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    __s2 = param_2 + 1;
    sVar3 = (ulong)(*param_2 >> 1);
  }
  uVar8 = FUN_00115c34(__s2,sVar3);
  uVar21 = param_1[1];
  if (uVar21 != 0) {
    uVar23 = NEON_cnt(uVar21,1);
    uVar22 = NEON_uaddlv(uVar23,1);
    uVar17 = CONCAT62((int6)((ulong)uVar23 >> 0x10),uVar22) & 0xffffffff;
    if (uVar17 < 2) {
      unaff_x27 = uVar21 - 1 & uVar8;
    }
    else {
      unaff_x27 = uVar8;
      if (uVar21 <= uVar8) {
        uVar12 = 0;
        if (uVar21 != 0) {
          uVar12 = uVar8 / uVar21;
        }
        unaff_x27 = uVar8 - uVar12 * uVar21;
      }
    }
    puVar11 = *(undefined8 **)(*param_1 + unaff_x27 * 8);
    if ((puVar11 != (undefined8 *)0x0) && (plVar20 = (long *)*puVar11, plVar20 != (long *)0x0)) {
      do {
        uVar12 = plVar20[1];
        if (uVar12 == uVar8) {
          bVar4 = *(byte *)(plVar20 + 2);
          sVar2 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            sVar2 = plVar20[3];
          }
          if (sVar2 == sVar3) {
            if ((bVar4 & 1) == 0) {
              if (bVar4 < 2) goto LAB_00115b38;
              uVar12 = 0;
              while (*(byte *)((long)plVar20 + uVar12 + 0x11) == __s2[uVar12]) {
                uVar12 = uVar12 + 1;
                if (bVar4 >> 1 == uVar12) goto LAB_00115b38;
              }
            }
            else {
              iVar7 = memcmp((void *)plVar20[4],__s2,plVar20[3]);
              if (iVar7 == 0) goto LAB_00115b38;
            }
          }
        }
        else {
          if (uVar17 < 2) {
            uVar12 = uVar12 & uVar21 - 1;
          }
          else if (uVar21 <= uVar12) {
            uVar15 = 0;
            if (uVar21 != 0) {
              uVar15 = uVar12 / uVar21;
            }
            uVar12 = uVar12 - uVar15 * uVar21;
          }
          if (uVar12 != unaff_x27) break;
        }
        plVar20 = (long *)*plVar20;
      } while (plVar20 != (long *)0x0);
    }
  }
  plVar1 = param_1 + 2;
  plVar20 = (long *)operator_new(0x38);
  plVar13 = (long *)*param_3;
  *plVar20 = 0;
  plVar20[1] = uVar8;
  lVar16 = plVar13[1];
  lVar14 = *plVar13;
  plVar20[4] = plVar13[2];
  plVar20[3] = lVar16;
  plVar20[2] = lVar14;
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = 0;
  lVar14 = param_1[3];
  fVar24 = *(float *)(param_1 + 4);
  plVar20[5] = 0;
  plVar20[6] = 0;
  local_70 = 1;
  local_80 = plVar20;
  plStack_78 = plVar1;
  if ((uVar21 == 0) || (fVar24 * (float)uVar21 < (float)(lVar14 + 1))) {
    if (uVar21 < 3) {
      uVar17 = 1;
    }
    else {
      uVar17 = (ulong)((uVar21 & uVar21 - 1) != 0);
    }
    uVar17 = uVar17 | uVar21 << 1;
    uVar21 = (ulong)((float)(lVar14 + 1) / fVar24);
    if (uVar17 <= uVar21) {
      uVar17 = uVar21;
    }
    if (uVar17 - 1 == 0) {
      uVar17 = 2;
    }
    else if ((uVar17 & uVar17 - 1) != 0) {
                    /* try { // try from 00115910 to 00115bbb has its CatchHandler @ 00115bbc */
      uVar17 = std::__ndk1::__next_prime(uVar17);
    }
    uVar21 = param_1[1];
    if (uVar21 < uVar17) {
LAB_00115928:
      if (uVar17 >> 0x3d != 0) {
        if (*(long *)(lVar6 + 0x28) == local_68) {
          uVar23 = FUN_00113370();
                    /* catch() { ... } // from try @ 00115910 with catch @ 00115bbc */
          FUN_00115be4(&local_80);
          if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_0010f1e0(uVar23);
          }
        }
        goto LAB_00115be0;
      }
      pvVar9 = operator_new(uVar17 << 3);
      pvVar10 = (void *)*param_1;
      *param_1 = (long)pvVar9;
      if (pvVar10 != (void *)0x0) {
        operator_delete(pvVar10);
      }
      uVar21 = 0;
      param_1[1] = uVar17;
      do {
        *(undefined8 *)(*param_1 + uVar21 * 8) = 0;
        uVar21 = uVar21 + 1;
      } while (uVar17 != uVar21);
      plVar13 = (long *)*plVar1;
      uVar21 = uVar17;
      if (plVar13 != (long *)0x0) {
        uVar12 = plVar13[1];
        uVar23 = NEON_cnt(uVar17,1);
        uVar22 = NEON_uaddlv(uVar23,1);
        uVar15 = CONCAT62((int6)((ulong)uVar23 >> 0x10),uVar22) & 0xffffffff;
        if (uVar15 < 2) {
          uVar12 = uVar12 & uVar17 - 1;
        }
        else if (uVar17 <= uVar12) {
          uVar19 = 0;
          if (uVar17 != 0) {
            uVar19 = uVar12 / uVar17;
          }
          uVar12 = uVar12 - uVar19 * uVar17;
        }
        *(long **)(*param_1 + uVar12 * 8) = plVar1;
        plVar18 = (long *)*plVar13;
        if (plVar18 != (long *)0x0) {
          do {
            uVar19 = plVar18[1];
            if (uVar15 < 2) {
              uVar19 = uVar19 & uVar17 - 1;
            }
            else if (uVar17 <= uVar19) {
              uVar5 = 0;
              if (uVar17 != 0) {
                uVar5 = uVar19 / uVar17;
              }
              uVar19 = uVar19 - uVar5 * uVar17;
            }
            if (uVar19 != uVar12) {
              if (*(long *)(*param_1 + uVar19 * 8) == 0) {
                *(long **)(*param_1 + uVar19 * 8) = plVar13;
                uVar12 = uVar19;
              }
              else {
                *plVar13 = *plVar18;
                *plVar18 = **(long **)(*param_1 + uVar19 * 8);
                **(undefined8 **)(*param_1 + uVar19 * 8) = plVar18;
                plVar18 = plVar13;
              }
            }
            plVar13 = plVar18;
            plVar18 = (long *)*plVar13;
          } while (plVar18 != (long *)0x0);
        }
      }
    }
    else if (uVar17 < uVar21) {
      uVar12 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar21 < 3) {
LAB_00115b6c:
        uVar12 = std::__ndk1::__next_prime(uVar12);
      }
      else {
        uVar23 = NEON_cnt(uVar21,1);
        uVar22 = NEON_uaddlv(uVar23,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar23 >> 0x10),uVar22)) goto LAB_00115b6c;
        if (1 < uVar12) {
          uVar12 = 1L << (-LZCOUNT(uVar12 - 1) & 0x3fU);
        }
      }
      if (uVar17 <= uVar12) {
        uVar17 = uVar12;
      }
      if (uVar17 < uVar21) {
        if (uVar17 != 0) goto LAB_00115928;
        pvVar9 = (void *)*param_1;
        *param_1 = 0;
        if (pvVar9 != (void *)0x0) {
          operator_delete(pvVar9);
        }
        param_1[1] = 0;
        uVar21 = 0;
      }
      else {
        uVar21 = param_1[1];
      }
    }
    if ((uVar21 & uVar21 - 1) == 0) {
      unaff_x27 = uVar21 - 1 & uVar8;
    }
    else {
      unaff_x27 = uVar8;
      if (uVar21 <= uVar8) {
        uVar17 = 0;
        if (uVar21 != 0) {
          uVar17 = uVar8 / uVar21;
        }
        unaff_x27 = uVar8 - uVar17 * uVar21;
      }
    }
  }
  lVar14 = *param_1;
  plVar13 = *(long **)(lVar14 + unaff_x27 * 8);
  if (plVar13 == (long *)0x0) {
    lVar16 = *plVar1;
    *plVar1 = (long)plVar20;
    *plVar20 = lVar16;
    *(long **)(lVar14 + unaff_x27 * 8) = plVar1;
    if (*plVar20 != 0) {
      uVar8 = *(ulong *)(*plVar20 + 8);
      if ((uVar21 & uVar21 - 1) == 0) {
        uVar8 = uVar8 & uVar21 - 1;
      }
      else if (uVar21 <= uVar8) {
        uVar17 = 0;
        if (uVar21 != 0) {
          uVar17 = uVar8 / uVar21;
        }
        uVar8 = uVar8 - uVar17 * uVar21;
      }
      plVar13 = (long *)(*param_1 + uVar8 * 8);
      goto LAB_00115b28;
    }
  }
  else {
    *plVar20 = *plVar13;
LAB_00115b28:
    *plVar13 = (long)plVar20;
  }
  param_1[3] = param_1[3] + 1;
LAB_00115b38:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return plVar20;
  }
LAB_00115be0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00115be4  FUN_00115be4 =====

void FUN_00115be4(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    if ((*(char *)(param_1 + 2) != '\0') && ((*(byte *)((long)pvVar1 + 0x10) & 1) != 0)) {
      operator_delete(*(void **)((long)pvVar1 + 0x20));
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00115c34  FUN_00115c34 =====

ulong FUN_00115c34(ulong *param_1,ulong param_2)

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
  
  if (param_2 < 0x21) {
    if (param_2 < 0x11) {
      if (8 < param_2) {
        uVar12 = *(ulong *)((long)param_1 + (param_2 - 8));
        uVar13 = uVar12 + param_2;
        uVar13 = uVar13 >> (param_2 & 0x3f) | uVar13 << 0x40 - (param_2 & 0x3f);
        uVar14 = (uVar13 ^ *param_1) * -0x622015f714c7d297;
        uVar13 = (uVar13 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
        return (uVar13 ^ uVar13 >> 0x2f) * -0x622015f714c7d297 ^ uVar12;
      }
      if (param_2 < 4) {
        if (param_2 != 0) {
          uVar13 = (param_2 | (ulong)*(byte *)((long)param_1 + (param_2 - 1)) << 2) *
                   -0x36b62838af619aa9 ^
                   (ulong)CONCAT11(*(undefined1 *)((long)param_1 + (param_2 >> 1)),(char)*param_1) *
                   -0x651e95c4d06fbfb1;
          return (uVar13 ^ uVar13 >> 0x2f) * -0x651e95c4d06fbfb1;
        }
        return 0x9ae16a3b2f90404f;
      }
      uVar12 = (ulong)*(uint *)((long)param_1 + (param_2 - 4));
      uVar13 = ((uint)((int)*param_1 << 3) + param_2 ^ uVar12) * -0x622015f714c7d297;
      uVar13 = uVar12 ^ uVar13 >> 0x2f ^ uVar13;
    }
    else {
      lVar19 = *(long *)((long)param_1 + (param_2 - 8));
      uVar13 = lVar19 * -0x651e95c4d06fbfb1;
      uVar14 = *param_1 * -0x4b6d499041670d8d - param_1[1];
      uVar12 = param_1[1] ^ 0xc949d7c7509e6557;
      uVar12 = *param_1 * -0x4b6d499041670d8d + param_2 + (uVar12 >> 0x14 | uVar12 << 0x2c) +
               lVar19 * 0x651e95c4d06fbfb1;
      uVar13 = ((uVar13 >> 0x1e | uVar13 << 0x22) + (uVar14 >> 0x2b | uVar14 * 0x200000) +
                *(long *)((long)param_1 + (param_2 - 0x10)) * -0x3c5a37a36834ced9 ^ uVar12) *
               -0x622015f714c7d297;
      uVar13 = uVar12 ^ uVar13 >> 0x2f ^ uVar13;
    }
    lVar15 = -0x622015f714c7d297;
    uVar13 = uVar13 * -0x622015f714c7d297;
  }
  else {
    if (0x40 < param_2) {
      lVar4 = *(long *)((long)param_1 + (param_2 - 0x38));
      lVar16 = *(long *)((long)param_1 + (param_2 - 0x30));
      uVar14 = *(ulong *)((long)param_1 + (param_2 - 0x18));
      lVar11 = *(long *)((long)param_1 + (param_2 - 0x28));
      lVar15 = *(long *)((long)param_1 + (param_2 - 0x10));
      lVar9 = *(long *)((long)param_1 + (param_2 - 8));
      uVar13 = (uVar14 ^ lVar16 + param_2) * -0x622015f714c7d297;
      lVar19 = *(long *)((long)param_1 + (param_2 - 0x40)) + param_2;
      puVar10 = param_1 + 4;
      uVar13 = (uVar14 ^ uVar13 >> 0x2f ^ uVar13) * -0x622015f714c7d297;
      uVar21 = (uVar13 ^ uVar13 >> 0x2f) * -0x622015f714c7d297;
      uVar13 = lVar4 + lVar15;
      uVar12 = lVar16 + lVar4 + lVar19;
      lVar4 = uVar13 + *(long *)((long)param_1 + (param_2 - 0x20)) + -0x4b6d499041670d8d;
      lVar16 = *param_1 + lVar11 * -0x4b6d499041670d8d;
      uVar14 = uVar14 + lVar15 + lVar4;
      uVar18 = uVar12 + lVar11;
      uVar3 = lVar4 + lVar11 + lVar9;
      uVar20 = lVar19 + lVar11 + uVar21;
      uVar12 = (uVar12 >> 0x2c | uVar12 * 0x100000) + lVar19 + (uVar20 >> 0x15 | uVar20 << 0x2b);
      uVar20 = uVar14 + lVar9;
      uVar14 = (uVar14 >> 0x2c | uVar14 * 0x100000) + lVar4 + (uVar3 >> 0x15 | uVar3 << 0x2b);
      lVar19 = -(param_2 - 1 & 0xffffffffffffffc0);
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
    lVar4 = *(long *)((long)param_1 + (param_2 - 0x10));
    uVar17 = *param_1 + (lVar4 + param_2) * -0x3c5a37a36834ced9;
    uVar21 = param_1[3];
    lVar19 = *(long *)((long)param_1 + (param_2 - 8)) + uVar21;
    uVar13 = *(long *)((long)param_1 + (param_2 - 0x20)) + param_1[2];
    uVar12 = uVar17 + param_1[1];
    uVar14 = uVar12 + param_1[2];
    uVar18 = *(long *)((long)param_1 + (param_2 - 0x18)) + uVar13;
    uVar3 = uVar18 + lVar4;
    uVar20 = lVar19 + uVar13;
    lVar4 = (uVar12 >> 7 | uVar12 << 0x39) + (uVar17 >> 0x25 | uVar17 * 0x8000000) +
            (uVar17 + uVar21 >> 0x34 | (uVar17 + uVar21) * 0x1000) +
            (uVar14 >> 0x1f | uVar14 << 0x21);
    lVar15 = -0x651e95c4d06fbfb1;
    uVar13 = (uVar3 + lVar19 + lVar4) * -0x3c5a37a36834ced9 +
             (uVar14 + uVar21 + (uVar13 >> 0x25 | uVar13 * 0x8000000) +
                       (uVar18 >> 7 | uVar18 << 0x39) + (uVar20 >> 0x34 | uVar20 * 0x1000) +
                       (uVar3 >> 0x1f | uVar3 << 0x21)) * -0x651e95c4d06fbfb1;
    uVar13 = lVar4 + (uVar13 ^ uVar13 >> 0x2f) * -0x3c5a37a36834ced9;
  }
  return (uVar13 ^ uVar13 >> 0x2f) * lVar15;
}


// ===== 00116078  FUN_00116078 =====

void FUN_00116078(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00121100;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00116088  FUN_00116088 =====

void FUN_00116088(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00121100;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001160b8  FUN_001160b8 =====

void FUN_001160b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001160c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 001160c4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00122660)();
  return;
}


// ===== 001160c8  FUN_001160c8 =====

void FUN_001160c8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00121150;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 001160d8  FUN_001160d8 =====

void FUN_001160d8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00121150;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00116108  FUN_00116108 =====

void FUN_00116108(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00116110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00116114  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00122660)();
  return;
}


// ===== 00116118  FUN_00116118 =====

void FUN_00116118(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_1;
  if (plVar2 == (long *)0x0) {
    return;
  }
  plVar3 = (long *)param_1[1];
  plVar1 = plVar2;
  if (plVar3 != plVar2) {
    do {
      plVar3 = plVar3 + -1;
      if ((undefined8 *)*plVar3 != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)*plVar3)();
      }
    } while (plVar3 != plVar2);
    plVar1 = (long *)*param_1;
  }
  param_1[1] = plVar2;
  operator_delete(plVar1);
  return;
}


// ===== 00116190  FUN_00116190 =====

void FUN_00116190(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001132f0("vector");
}


// ===== 001161a4  FUN_001161a4 =====

void FUN_001161a4(void)

{
  return;
}


// ===== 001161a8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00122660)();
  return;
}


// ===== 001161ac  FUN_001161ac =====

void FUN_001161ac(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_001211a0;
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  puVar1[3] = uVar2;
  return;
}


// ===== 001161ec  FUN_001161ec =====

void FUN_001161ec(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_001211a0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}


// ===== 0011620c  FUN_0011620c =====

void FUN_0011620c(void)

{
  return;
}


// ===== 00116210  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00122660)();
  return;
}


// ===== 00116214  FUN_00116214 =====

void FUN_00116214(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0011622c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x18))(param_2,*(undefined8 *)(param_1 + 8),*param_4,*param_5);
  return;
}


// ===== 00116230  FUN_00116230 =====

long FUN_00116230(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_001224f0) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0011624c  FUN_0011624c =====

undefined * FUN_0011624c(void)

{
  return PTR_typeinfo_001224f8;
}


// ===== 00116258  facebook::react::RNKC_registerComponentDescriptorsFromCodegen =====

/* facebook::react::RNKC_registerComponentDescriptorsFromCodegen(std::__ndk1::shared_ptr<facebook::react::ComponentDescriptorProviderRegistry
   const>) */

void facebook::react::RNKC_registerComponentDescriptorsFromCodegen(void)

{
  return;
}


// ===== 0011625c  facebook::react::KeyboardControllerViewEventEmitter::onKeyboardMoveStart =====

/* facebook::react::KeyboardControllerViewEventEmitter::onKeyboardMoveStart(facebook::react::KeyboardControllerViewEventEmitter::OnKeyboardMoveStart)
   const */

void __thiscall
facebook::react::KeyboardControllerViewEventEmitter::onKeyboardMoveStart
          (KeyboardControllerViewEventEmitter *this,undefined8 *param_2)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined7 uStack_6f;
  char cStack_68;
  undefined2 uStack_67;
  undefined5 uStack_65;
  undefined **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x22;
  uStack_67 = 0x74;
  uStack_6f = (undefined7)s_keyboardMoveStart_00109a1a._8_8_;
  cStack_68 = SUB81(s_keyboardMoveStart_00109a1a._8_8_,7);
  local_77 = (char  [8])s_keyboardMoveStart_00109a1a._0_8_;
  uStack_50 = param_2[1];
  local_58 = *param_2;
  local_60 = &PTR_FUN_00121230;
  local_48 = param_2[2];
                    /* try { // try from 001162b8 to 001162c7 has its CatchHandler @ 00116324 */
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(this,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_001162f4;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_001162f4:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_65,CONCAT21(uStack_67,cStack_68)));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00116384  facebook::react::KeyboardControllerViewEventEmitter::onKeyboardMove =====

/* facebook::react::KeyboardControllerViewEventEmitter::onKeyboardMove(facebook::react::KeyboardControllerViewEventEmitter::OnKeyboardMove)
   const */

void __thiscall
facebook::react::KeyboardControllerViewEventEmitter::onKeyboardMove
          (KeyboardControllerViewEventEmitter *this,undefined8 *param_2)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined4 local_6f;
  undefined1 local_6b;
  void *local_68;
  undefined **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x18;
  uStack_50 = param_2[1];
  local_58 = *param_2;
  local_6f = 0x65766f4d;
  local_77 = (char  [8])s_keyboardMove_0010971e._0_8_;
  local_48 = param_2[2];
  local_6b = 0;
  local_60 = &PTR_FUN_001212c0;
                    /* try { // try from 001163e8 to 001163f7 has its CatchHandler @ 00116454 */
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(this,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00116424;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00116424:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001164b4  facebook::react::KeyboardControllerViewEventEmitter::onKeyboardMoveEnd =====

/* facebook::react::KeyboardControllerViewEventEmitter::onKeyboardMoveEnd(facebook::react::KeyboardControllerViewEventEmitter::OnKeyboardMoveEnd)
   const */

void __thiscall
facebook::react::KeyboardControllerViewEventEmitter::onKeyboardMoveEnd
          (KeyboardControllerViewEventEmitter *this,undefined8 *param_2)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [7];
  char cStack_70;
  char acStack_6f [7];
  undefined1 local_68;
  undefined7 uStack_67;
  undefined **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_50 = param_2[1];
  local_58 = *param_2;
  local_78 = 0x1e;
  local_77 = (char  [7])s_keyboardMoveEnd_00109b94._0_7_;
  cStack_70 = s_keyboardMoveEnd_00109b94[7];
  acStack_6f = (char  [7])s_keyboardMoveEnd_00109b94._8_7_;
  local_48 = param_2[2];
  local_68 = 0;
  local_60 = &PTR_FUN_00121340;
                    /* try { // try from 00116514 to 00116523 has its CatchHandler @ 00116580 */
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(this,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00116550;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00116550:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_67,local_68));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001165e0  facebook::react::KeyboardControllerViewEventEmitter::onKeyboardMoveInteractive =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::KeyboardControllerViewEventEmitter::onKeyboardMoveInteractive(facebook::react::KeyboardControllerViewEventEmitter::OnKeyboardMoveInteractive)
   const */

void __thiscall
facebook::react::KeyboardControllerViewEventEmitter::onKeyboardMoveInteractive
          (KeyboardControllerViewEventEmitter *this,undefined8 *param_2)

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
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80 = (char *)operator_new(0x20);
  uVar4 = s_keyboardMoveInteractive_001097f3._0_8_;
  uVar2 = CONCAT17(s_keyboardMoveInteractive_001097f3[0xf],s_keyboardMoveInteractive_001097f3._8_7_)
  ;
  uVar3 = CONCAT71(s_keyboardMoveInteractive_001097f3._16_7_,s_keyboardMoveInteractive_001097f3[0xf]
                  );
  local_80[0x17] = '\0';
  *(undefined8 *)(local_80 + 8) = uVar2;
  *(undefined8 *)local_80 = uVar4;
  uStack_88 = _UNK_0010a4e8;
  local_90 = _DAT_0010a4e0;
  *(undefined8 *)(local_80 + 0xf) = uVar3;
  local_58 = param_2[2];
  uStack_60 = param_2[1];
  local_68 = *param_2;
  local_70 = &PTR_FUN_001213c0;
                    /* try { // try from 0011665c to 0011666f has its CatchHandler @ 001166d0 */
  local_50 = &local_70;
  facebook::react::EventEmitter::dispatchEvent(this,&local_90,&local_70,2);
  if (local_50 == &local_70) {
    lVar6 = 4;
    pppuVar5 = &local_70;
  }
  else {
    if (local_50 == (undefined ***)0x0) goto LAB_0011669c;
    lVar6 = 5;
    pppuVar5 = local_50;
  }
  (*(code *)(*pppuVar5)[lVar6])();
LAB_0011669c:
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00116730  facebook::react::KeyboardControllerViewEventEmitter::onFocusedInputLayoutChanged =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::KeyboardControllerViewEventEmitter::onFocusedInputLayoutChanged(facebook::react::KeyboardControllerViewEventEmitter::OnFocusedInputLayoutChanged)
   const */

void __thiscall
facebook::react::KeyboardControllerViewEventEmitter::onFocusedInputLayoutChanged
          (KeyboardControllerViewEventEmitter *this,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong local_90;
  undefined8 uStack_88;
  char *local_80;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80 = (char *)operator_new(0x20);
  uStack_88 = _UNK_0010a4d8;
  local_90 = _DAT_0010a4d0;
  uVar4 = s_focusedInputLayoutChanged_00109df0._17_8_;
  uVar3 = s_focusedInputLayoutChanged_00109df0._0_8_;
  uVar2 = CONCAT17(s_focusedInputLayoutChanged_00109df0[0x10],
                   s_focusedInputLayoutChanged_00109df0._9_7_);
  *(ulong *)(local_80 + 8) =
       CONCAT71(s_focusedInputLayoutChanged_00109df0._9_7_,s_focusedInputLayoutChanged_00109df0[8]);
  *(undefined8 *)local_80 = uVar3;
  *(undefined8 *)(local_80 + 0x11) = uVar4;
  *(undefined8 *)(local_80 + 9) = uVar2;
  local_80[0x19] = '\0';
                    /* try { // try from 0011678c to 00116793 has its CatchHandler @ 00116870 */
  local_50 = (long *)operator_new(0x40);
  lVar12 = param_2[5];
  lVar11 = param_2[4];
  lVar8 = param_2[1];
  lVar7 = *param_2;
  lVar10 = param_2[3];
  lVar9 = param_2[2];
  *local_50 = (long)&PTR_FUN_00121440;
  lVar6 = param_2[6];
  local_50[6] = lVar12;
  local_50[5] = lVar11;
  local_50[2] = lVar8;
  local_50[1] = lVar7;
  local_50[4] = lVar10;
  local_50[3] = lVar9;
  local_50[7] = lVar6;
                    /* try { // try from 001167c0 to 001167d7 has its CatchHandler @ 00116838 */
  facebook::react::EventEmitter::dispatchEvent(this,&local_90,local_70,2);
  if (local_50 == local_70) {
    lVar6 = 4;
    plVar5 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00116804;
    lVar6 = 5;
    plVar5 = local_50;
  }
  (**(code **)(*plVar5 + lVar6 * 8))();
LAB_00116804:
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001168a0  facebook::react::KeyboardControllerViewEventEmitter::onFocusedInputTextChanged =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::KeyboardControllerViewEventEmitter::onFocusedInputTextChanged(facebook::react::KeyboardControllerViewEventEmitter::OnFocusedInputTextChanged)
   const */

void __thiscall
facebook::react::KeyboardControllerViewEventEmitter::onFocusedInputTextChanged
          (KeyboardControllerViewEventEmitter *this,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong local_b0;
  undefined8 uStack_a8;
  char *local_a0;
  undefined7 local_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_a0 = (char *)operator_new(0x20);
  uVar1 = s_focusedInputTextChanged_00109565._0_8_;
  uVar5 = CONCAT71(s_focusedInputTextChanged_00109565._16_7_,s_focusedInputTextChanged_00109565[0xf]
                  );
  uVar2 = *(undefined1 *)param_2;
  *(ulong *)(local_a0 + 8) =
       CONCAT17(s_focusedInputTextChanged_00109565[0xf],s_focusedInputTextChanged_00109565._8_7_);
  *(undefined8 *)local_a0 = uVar1;
  uStack_a8 = _UNK_0010a4e8;
  local_b0 = _DAT_0010a4e0;
  uVar1 = param_2[1];
  lVar6 = param_2[2];
  *(undefined8 *)(local_a0 + 0xf) = uVar5;
  uVar5 = *(undefined8 *)((long)param_2 + 1);
  local_a0[0x17] = '\0';
  local_90 = (undefined7)uVar5;
  uStack_89 = (undefined1)uVar1;
  uStack_88 = (undefined7)((ulong)uVar1 >> 8);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 0011691c to 00116923 has its CatchHandler @ 001169fc */
  local_60 = (long *)operator_new(0x20);
  *local_60 = (long)&PTR_FUN_001214c0;
  *(undefined1 *)(local_60 + 1) = uVar2;
  *(ulong *)((long)local_60 + 9) = CONCAT17(uStack_89,local_90);
  local_60[2] = CONCAT71(uStack_88,uStack_89);
  local_60[3] = lVar6;
                    /* try { // try from 00116948 to 0011695f has its CatchHandler @ 001169c4 */
  facebook::react::EventEmitter::dispatchEvent(this,&local_b0,local_80,2);
  if (local_60 == local_80) {
    lVar6 = 4;
    plVar4 = local_80;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_0011698c;
    lVar6 = 5;
    plVar4 = local_60;
  }
  (**(code **)(*plVar4 + lVar6 * 8))();
LAB_0011698c:
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00116a38  facebook::react::KeyboardControllerViewEventEmitter::onFocusedInputSelectionChanged =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::KeyboardControllerViewEventEmitter::onFocusedInputSelectionChanged(facebook::react::KeyboardControllerViewEventEmitter::OnFocusedInputSelectionChanged)
   const */

void __thiscall
facebook::react::KeyboardControllerViewEventEmitter::onFocusedInputSelectionChanged
          (KeyboardControllerViewEventEmitter *this,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong local_90;
  undefined8 uStack_88;
  char *local_80;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80 = (char *)operator_new(0x20);
  uStack_88 = _UNK_0010a4f8;
  local_90 = _DAT_0010a4f0;
  uVar4 = s_focusedInputSelectionChanged_0010938d._20_8_;
  uVar3 = s_focusedInputSelectionChanged_0010938d._0_8_;
  uVar2 = CONCAT44(s_focusedInputSelectionChanged_0010938d._16_4_,
                   s_focusedInputSelectionChanged_0010938d._12_4_);
  *(ulong *)(local_80 + 8) =
       CONCAT44(s_focusedInputSelectionChanged_0010938d._12_4_,
                s_focusedInputSelectionChanged_0010938d._8_4_);
  *(undefined8 *)local_80 = uVar3;
  *(undefined8 *)(local_80 + 0x14) = uVar4;
  *(undefined8 *)(local_80 + 0xc) = uVar2;
  local_80[0x1c] = '\0';
                    /* try { // try from 00116a94 to 00116a9b has its CatchHandler @ 00116b78 */
  local_50 = (long *)operator_new(0x40);
  lVar12 = param_2[5];
  lVar11 = param_2[4];
  lVar8 = param_2[1];
  lVar7 = *param_2;
  lVar10 = param_2[3];
  lVar9 = param_2[2];
  *local_50 = (long)&PTR_FUN_00121540;
  lVar6 = param_2[6];
  local_50[6] = lVar12;
  local_50[5] = lVar11;
  local_50[2] = lVar8;
  local_50[1] = lVar7;
  local_50[4] = lVar10;
  local_50[3] = lVar9;
  local_50[7] = lVar6;
                    /* try { // try from 00116ac8 to 00116adf has its CatchHandler @ 00116b40 */
  facebook::react::EventEmitter::dispatchEvent(this,&local_90,local_70,2);
  if (local_50 == local_70) {
    lVar6 = 4;
    plVar5 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00116b0c;
    lVar6 = 5;
    plVar5 = local_50;
  }
  (**(code **)(*plVar5 + lVar6 * 8))();
LAB_00116b0c:
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00116ba8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00122660)();
  return;
}


// ===== 00116bac  FUN_00116bac =====

void FUN_00116bac(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_00121230;
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  puVar1[3] = uVar2;
  return;
}


// ===== 00116bec  FUN_00116bec =====

void FUN_00116bec(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00121230;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}


// ===== 00116c0c  FUN_00116c0c =====

void FUN_00116c0c(void)

{
  return;
}


// ===== 00116c10  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00122660)();
  return;
}


// ===== 00116c14  FUN_00116c14 =====

void FUN_00116c14(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 00116c54 to 00116cb3 has its CatchHandler @ 00116ce8 */
  FUN_00116d48(&local_40,param_3,"height",param_2 + 8);
  FUN_00116d48(&local_40,param_3,"progress",param_2 + 0x10);
  FUN_00116e4c(&local_40,param_3,"duration",param_2 + 0x18);
  FUN_00116e4c(&local_40,param_3,"target",param_2 + 0x1c);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00116d20  FUN_00116d20 =====

long FUN_00116d20(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react34KeyboardControllerViewEventEmitter19onKeyboardMoveStartENS1_19OnKeyboardMoveStartEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00116d3c  FUN_00116d3c =====

pointer_____offset_0x10___ * FUN_00116d3c(void)

{
  return &PTR_vtable_001212a0;
}


// ===== 00116d48  FUN_00116d48 =====

void FUN_00116d48(undefined8 param_1,long *param_2,char *param_3,undefined8 *param_4)

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
  local_50 = *param_4;
  local_58[0] = 3;
                    /* try { // try from 00116db8 to 00116dcb has its CatchHandler @ 00116e10 */
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


// ===== 00116e4c  FUN_00116e4c =====

void FUN_00116e4c(undefined8 param_1,long *param_2,char *param_3,int *param_4)

{
  long lVar1;
  size_t sVar2;
  undefined8 *local_60;
  undefined4 local_58 [2];
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  sVar2 = strlen(param_3);
  (**(code **)(*param_2 + 0x108))(&local_60,param_2,param_3,sVar2);
  local_58[0] = 3;
  local_50 = (double)*param_4;
                    /* try { // try from 00116ec0 to 00116ed3 has its CatchHandler @ 00116f18 */
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


// ===== 00116f54  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00122660)();
  return;
}


// ===== 00116f58  FUN_00116f58 =====

void FUN_00116f58(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_001212c0;
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  puVar1[3] = uVar2;
  return;
}


// ===== 00116f98  FUN_00116f98 =====

void FUN_00116f98(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_001212c0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}


// ===== 00116fb8  FUN_00116fb8 =====

void FUN_00116fb8(void)

{
  return;
}


// ===== 00116fbc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00122660)();
  return;
}


// ===== 00116fc0  FUN_00116fc0 =====

void FUN_00116fc0(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 00117000 to 0011705f has its CatchHandler @ 00117094 */
  FUN_00116d48(&local_40,param_3,"height",param_2 + 8);
  FUN_00116d48(&local_40,param_3,"progress",param_2 + 0x10);
  FUN_00116e4c(&local_40,param_3,"duration",param_2 + 0x18);
  FUN_00116e4c(&local_40,param_3,"target",param_2 + 0x1c);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001170cc  FUN_001170cc =====

long FUN_001170cc(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react34KeyboardControllerViewEventEmitter14onKeyboardMoveENS1_14OnKeyboardMoveEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 001170e8  FUN_001170e8 =====

pointer_____offset_0x10___ * FUN_001170e8(void)

{
  return &PTR_vtable_00121320;
}


// ===== 001170f4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00122660)();
  return;
}


// ===== 001170f8  FUN_001170f8 =====

void FUN_001170f8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_00121340;
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  puVar1[3] = uVar2;
  return;
}


// ===== 00117138  FUN_00117138 =====

void FUN_00117138(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00121340;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}


// ===== 00117158  FUN_00117158 =====

void FUN_00117158(void)

{
  return;
}


// ===== 0011715c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00122660)();
  return;
}


// ===== 00117160  FUN_00117160 =====

void FUN_00117160(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 001171a0 to 001171ff has its CatchHandler @ 00117234 */
  FUN_00116d48(&local_40,param_3,"height",param_2 + 8);
  FUN_00116d48(&local_40,param_3,"progress",param_2 + 0x10);
  FUN_00116e4c(&local_40,param_3,"duration",param_2 + 0x18);
  FUN_00116e4c(&local_40,param_3,"target",param_2 + 0x1c);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011726c  FUN_0011726c =====

long FUN_0011726c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react34KeyboardControllerViewEventEmitter17onKeyboardMoveEndENS1_17OnKeyboardMoveEndEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00117288  FUN_00117288 =====

pointer_____offset_0x10___ * FUN_00117288(void)

{
  return &PTR_vtable_001213a0;
}


// ===== 00117294  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00122660)();
  return;
}


// ===== 00117298  FUN_00117298 =====

void FUN_00117298(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_001213c0;
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  puVar1[3] = uVar2;
  return;
}


// ===== 001172d8  FUN_001172d8 =====

void FUN_001172d8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_001213c0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}


// ===== 001172f8  FUN_001172f8 =====

void FUN_001172f8(void)

{
  return;
}


// ===== 001172fc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00122660)();
  return;
}


// ===== 00117300  FUN_00117300 =====

void FUN_00117300(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 00117340 to 0011739f has its CatchHandler @ 001173d4 */
  FUN_00116d48(&local_40,param_3,"height",param_2 + 8);
  FUN_00116d48(&local_40,param_3,"progress",param_2 + 0x10);
  FUN_00116e4c(&local_40,param_3,"duration",param_2 + 0x18);
  FUN_00116e4c(&local_40,param_3,"target",param_2 + 0x1c);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011740c  FUN_0011740c =====

long FUN_0011740c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react34KeyboardControllerViewEventEmitter25onKeyboardMoveInteractiveENS1_25OnKeyboardMoveInteractiveEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00117428  FUN_00117428 =====

pointer_____offset_0x10___ * FUN_00117428(void)

{
  return &PTR_vtable_00121420;
}


// ===== 00117434  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00122660)();
  return;
}


// ===== 00117438  FUN_00117438 =====

void FUN_00117438(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_00121440;
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  puVar1[4] = uVar6;
  puVar1[3] = uVar5;
  puVar1[6] = uVar8;
  puVar1[5] = uVar7;
  puVar1[7] = uVar2;
  return;
}


// ===== 00117488  FUN_00117488 =====

void FUN_00117488(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_2 = &PTR_FUN_00121440;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  param_2[7] = *(undefined8 *)(param_1 + 0x38);
  param_2[6] = uVar2;
  param_2[5] = uVar1;
  param_2[4] = uVar6;
  param_2[3] = uVar5;
  param_2[2] = uVar4;
  param_2[1] = uVar3;
  return;
}


// ===== 001174b8  FUN_001174b8 =====

void FUN_001174b8(void)

{
  return;
}


// ===== 001174bc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00122660)();
  return;
}


// ===== 001174c0  FUN_001174c0 =====

void FUN_001174c0(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_50,param_3);
                    /* try { // try from 00117500 to 0011752f has its CatchHandler @ 00117644 */
  FUN_00116e4c(&local_50,param_3,"target",param_2 + 8);
  FUN_00116e4c(&local_50,param_3,"parentScrollViewTarget",param_2 + 0xc);
                    /* try { // try from 00117538 to 00117543 has its CatchHandler @ 0011763c */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 0011754c to 001175f3 has its CatchHandler @ 0011764c */
  FUN_00116d48(&local_48,param_3,&DAT_001099b0,param_2 + 0x10);
  FUN_00116d48(&local_48,param_3,&DAT_00109eb3,param_2 + 0x18);
  FUN_00116d48(&local_48,param_3,"width",param_2 + 0x20);
  FUN_00116d48(&local_48,param_3,"height",param_2 + 0x28);
  FUN_00116d48(&local_48,param_3,"absoluteX",param_2 + 0x30);
  FUN_00116d48(&local_48,param_3,"absoluteY",param_2 + 0x38);
  FUN_001176c0(&local_50,param_3,"layout",&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_50;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00117698  FUN_00117698 =====

long FUN_00117698(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react34KeyboardControllerViewEventEmitter27onFocusedInputLayoutChangedENS1_27OnFocusedInputLayoutChangedEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 001176b4  FUN_001176b4 =====

pointer_____offset_0x10___ * FUN_001176b4(void)

{
  return &PTR_vtable_001214a0;
}


// ===== 001176c0  FUN_001176c0 =====

void FUN_001176c0(undefined8 param_1,long *param_2,char *param_3,undefined8 *param_4)

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
                    /* try { // try from 0011772c to 00117733 has its CatchHandler @ 001177a8 */
  local_50 = (**(code **)(*param_2 + 0x88))(param_2,*param_4);
                    /* try { // try from 00117740 to 00117753 has its CatchHandler @ 00117798 */
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


// ===== 001177e4  FUN_001177e4 =====

void FUN_001177e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_001214c0;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 00117804  FUN_00117804 =====

void FUN_00117804(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_001214c0;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00117844  FUN_00117844 =====

undefined8 * FUN_00117844(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_001214c0;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 00117890 to 00117893 has its CatchHandler @ 001178a4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 001178b8  FUN_001178b8 =====

void FUN_001178b8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_001214c0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
    return;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  __init_copy_ctor_external
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  return;
}


// ===== 001178f4  FUN_001178f4 =====

void FUN_001178f4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 00117908  FUN_00117908 =====

void FUN_00117908(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 0011793c  FUN_0011793c =====

void FUN_0011793c(undefined4 *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 local_48 [2];
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_58,param_3);
                    /* try { // try from 00117984 to 0011799b has its CatchHandler @ 00117a70 */
  (**(code **)(*param_3 + 0x108))(&local_50,param_3,&DAT_00109895,4);
  uVar1 = (ulong)(*(byte *)(param_2 + 8) >> 1);
  lVar3 = param_2 + 9;
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 0x10);
    lVar3 = *(long *)(param_2 + 0x18);
  }
                    /* try { // try from 001179c4 to 001179cf has its CatchHandler @ 00117a54 */
  (**(code **)(*param_3 + 0x110))(auStack_40,param_3,lVar3,uVar1);
  local_48[0] = 6;
                    /* try { // try from 001179e0 to 001179f3 has its CatchHandler @ 00117a44 */
  (**(code **)(*param_3 + 0x1b8))(param_3,&local_58,&local_50,local_48);
  facebook::jsi::Value::~Value((Value *)local_48);
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)();
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_58;
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00117aa4  FUN_00117aa4 =====

long FUN_00117aa4(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react34KeyboardControllerViewEventEmitter25onFocusedInputTextChangedENS1_25OnFocusedInputTextChangedEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00117ac0  FUN_00117ac0 =====

pointer_____offset_0x10___ * FUN_00117ac0(void)

{
  return &PTR_vtable_00121520;
}


// ===== 00117acc  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init_copy_ctor_external =====

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
      FUN_001132dc(this);
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


// ===== 00117b3c  FUN_00117b3c =====

void FUN_00117b3c(void)

{
  return;
}


// ===== 00117b40  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00122660)();
  return;
}


// ===== 00117b44  FUN_00117b44 =====

void FUN_00117b44(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_00121540;
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  puVar1[4] = uVar6;
  puVar1[3] = uVar5;
  puVar1[6] = uVar8;
  puVar1[5] = uVar7;
  puVar1[7] = uVar2;
  return;
}


// ===== 00117b94  FUN_00117b94 =====

void FUN_00117b94(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_2 = &PTR_FUN_00121540;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  param_2[7] = *(undefined8 *)(param_1 + 0x38);
  param_2[6] = uVar2;
  param_2[5] = uVar1;
  param_2[4] = uVar6;
  param_2[3] = uVar5;
  param_2[2] = uVar4;
  param_2[1] = uVar3;
  return;
}


// ===== 00117bc4  FUN_00117bc4 =====

void FUN_00117bc4(void)

{
  return;
}


// ===== 00117bc8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00122660)();
  return;
}


// ===== 00117bcc  FUN_00117bcc =====

void FUN_00117bcc(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_58,param_3);
                    /* try { // try from 00117c0c to 00117c23 has its CatchHandler @ 00117ddc */
  FUN_00116e4c(&local_58,param_3,"target",param_2 + 8);
                    /* try { // try from 00117c2c to 00117c37 has its CatchHandler @ 00117dd8 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 00117c48 to 00117c53 has its CatchHandler @ 00117dc8 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_50 = local_40;
                    /* try { // try from 00117c5c to 00117cbb has its CatchHandler @ 00117df0 */
  FUN_00116d48(&local_50,param_3,&DAT_001099b0,param_2 + 0x10);
  FUN_00116d48(&local_50,param_3,&DAT_00109eb3,param_2 + 0x18);
  FUN_00116e4c(&local_50,param_3,"position",param_2 + 0x20);
  FUN_001176c0(&local_48,param_3,"start",&local_50);
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)();
  }
                    /* try { // try from 00117cd8 to 00117ce3 has its CatchHandler @ 00117dc4 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_50 = local_40;
                    /* try { // try from 00117cec to 00117d4b has its CatchHandler @ 00117dec */
  FUN_00116d48(&local_50,param_3,&DAT_001099b0,param_2 + 0x28);
  FUN_00116d48(&local_50,param_3,&DAT_00109eb3,param_2 + 0x30);
  FUN_00116e4c(&local_50,param_3,"position",param_2 + 0x38);
  FUN_001176c0(&local_48,param_3,&DAT_00109eb5,&local_50);
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)();
  }
                    /* try { // try from 00117d60 to 00117d77 has its CatchHandler @ 00117dc0 */
  FUN_001176c0(&local_58,param_3,"selection",&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_58;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00117e64  FUN_00117e64 =====

long FUN_00117e64(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react34KeyboardControllerViewEventEmitter30onFocusedInputSelectionChangedENS1_30OnFocusedInputSelectionChangedEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00117e80  FUN_00117e80 =====

pointer_____offset_0x10___ * FUN_00117e80(void)

{
  return &PTR_vtable_001215a0;
}


// ===== 00117e8c  facebook::react::ClippingScrollViewDecoratorViewProps::ClippingScrollViewDecoratorViewProps =====

/* facebook::react::ClippingScrollViewDecoratorViewProps::ClippingScrollViewDecoratorViewProps(facebook::react::PropsParserContext
   const&, facebook::react::ClippingScrollViewDecoratorViewProps const&, facebook::react::RawProps
   const&) */

void __thiscall
facebook::react::ClippingScrollViewDecoratorViewProps::ClippingScrollViewDecoratorViewProps
          (ClippingScrollViewDecoratorViewProps *this,PropsParserContext *param_1,
          ClippingScrollViewDecoratorViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  ulong *puVar3;
  function *in_x4;
  long lVar4;
  undefined8 uVar5;
  ulong local_80 [4];
  long *local_60;
  long local_48;
  
  puVar3 = local_80;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = (long *)0x0;
                    /* try { // try from 00117ec4 to 00117ed3 has its CatchHandler @ 00117fb0 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if ((ulong *)local_60 == local_80) {
    lVar4 = 4;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00117f00;
    lVar4 = 5;
    puVar3 = (ulong *)local_60;
  }
  (**(code **)(*puVar3 + lVar4 * 8))();
LAB_00117f00:
  local_80[0] = 0;
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 00117f0c to 00117f23 has its CatchHandler @ 00117f9c */
  uVar5 = FUN_00118000();
  *(undefined8 *)(this + 0x6e0) = uVar5;
  local_80[0] = 0;
                    /* try { // try from 00117f2c to 00117f43 has its CatchHandler @ 00117f98 */
  uVar5 = FUN_00118000();
  *(undefined8 *)(this + 0x6e8) = uVar5;
  local_80[0] = local_80[0] & 0xffffffffffffff00;
                    /* try { // try from 00117f4c to 00117f63 has its CatchHandler @ 00117f94 */
  bVar2 = FUN_001181ac();
  this[0x6f0] = (ClippingScrollViewDecoratorViewProps)(bVar2 & 1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00118000  FUN_00118000 =====

void FUN_00118000(char *param_1,char *param_2,undefined8 *param_3,undefined8 *param_4)

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
    uVar3 = FUN_0011b83c();
    if ((uVar3 & 1) == 0) {
      uVar5 = *param_4;
    }
    else {
                    /* try { // try from 00118078 to 0011807f has its CatchHandler @ 0011808c */
      uVar5 = FUN_0011b8c8(lVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 001181ac  FUN_001181ac =====

void FUN_001181ac(char *param_1,char *param_2,char *param_3,char *param_4)

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
    uVar3 = FUN_0011b83c();
    if ((uVar3 & 1) == 0) {
      local_50[0] = *param_4;
    }
    else {
                    /* try { // try from 00118224 to 0011822f has its CatchHandler @ 00118240 */
      FUN_0011c6b0(lVar2,local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_50[0] != '\0');
}


// ===== 0011835c  FUN_0011835c =====

void FUN_0011835c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_0011b098(param_1,param_2 + 1);
  return;
}


// ===== 0011846c  facebook::react::ClippingScrollViewDecoratorViewProps::ClippingScrollViewDecoratorViewProps =====

/* facebook::react::ClippingScrollViewDecoratorViewProps::ClippingScrollViewDecoratorViewProps(facebook::react::PropsParserContext
   const&, facebook::react::ClippingScrollViewDecoratorViewProps const&, facebook::react::RawProps
   const&) */

void __thiscall
facebook::react::ClippingScrollViewDecoratorViewProps::ClippingScrollViewDecoratorViewProps
          (ClippingScrollViewDecoratorViewProps *this,PropsParserContext *param_1,
          ClippingScrollViewDecoratorViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  ulong *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong local_80 [4];
  long *local_60;
  long local_48;
  
  puVar3 = local_80;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = (long *)0x0;
                    /* try { // try from 001184a4 to 001184c3 has its CatchHandler @ 001185a8 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_00122508 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if ((ulong *)local_60 == local_80) {
    lVar4 = 4;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_001184f0;
    lVar4 = 5;
    puVar3 = (ulong *)local_60;
  }
  (**(code **)(*puVar3 + lVar4 * 8))();
LAB_001184f0:
  local_80[0] = 0;
  *(undefined **)this = PTR_vtable_00122500 + 0x20;
                    /* try { // try from 00118504 to 0011851b has its CatchHandler @ 00118594 */
  uVar5 = FUN_00118000(param_3,"contentInsetBottom",param_2 + 0x6e0,local_80);
  *(undefined8 *)(this + 0x6e0) = uVar5;
  local_80[0] = 0;
                    /* try { // try from 00118524 to 0011853b has its CatchHandler @ 00118590 */
  uVar5 = FUN_00118000(param_3,"contentInsetTop",param_2 + 0x6e8,local_80);
  *(undefined8 *)(this + 0x6e8) = uVar5;
  local_80[0] = local_80[0] & 0xffffffffffffff00;
                    /* try { // try from 00118544 to 0011855b has its CatchHandler @ 0011858c */
  bVar2 = FUN_001181ac(param_3,"applyWorkaroundForContentInsetHitTestBug",param_2 + 0x6f0,local_80);
  this[0x6f0] = (ClippingScrollViewDecoratorViewProps)(bVar2 & 1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001185f8  facebook::react::ClippingScrollViewDecoratorViewProps::getDiffPropsImplementationTarget =====

/* facebook::react::ClippingScrollViewDecoratorViewProps::getDiffPropsImplementationTarget() const
    */

char * facebook::react::ClippingScrollViewDecoratorViewProps::getDiffPropsImplementationTarget(void)

{
  return "ClippingScrollViewDecoratorView";
}


// ===== 00118604  facebook::react::ClippingScrollViewDecoratorViewProps::getDiffProps =====

/* facebook::react::ClippingScrollViewDecoratorViewProps::getDiffProps(facebook::react::Props
   const*) const */

void facebook::react::ClippingScrollViewDecoratorViewProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  Props PVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  Props *in_x1;
  undefined4 *in_x8;
  long lVar6;
  double dVar7;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  if (((DAT_00127860 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_00127860), iVar4 != 0)) {
    memset(&DAT_00127168,0,0x6f8);
    FUN_0011884c();
    __cxa_atexit(FUN_001188e0,&DAT_00127168,&PTR_LOOP_00120f70);
    __cxa_guard_release(&DAT_00127860);
  }
  pPVar1 = (Props *)&DAT_00127168;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    *in_x8 = 5;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
    folly::dynamic::destroy();
  }
  else {
    facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    dVar7 = *(double *)(param_1 + 0x6e0);
    if ((dVar7 != *(double *)(pPVar1 + 0x6e0)) &&
       ((!NAN(dVar7) || (!NAN(*(double *)(pPVar1 + 0x6e0)))))) {
      piVar5 = (int *)folly::dynamic::operator[]();
      if (*piVar5 != 3) {
        folly::dynamic::destroy();
        *piVar5 = 3;
      }
      *(double *)(piVar5 + 2) = dVar7;
    }
    dVar7 = *(double *)(param_1 + 0x6e8);
    if ((dVar7 != *(double *)(pPVar1 + 0x6e8)) &&
       ((!NAN(dVar7) || (!NAN(*(double *)(pPVar1 + 0x6e8)))))) {
      piVar5 = (int *)folly::dynamic::operator[]();
      if (*piVar5 != 3) {
        folly::dynamic::destroy();
        *piVar5 = 3;
      }
      *(double *)(piVar5 + 2) = dVar7;
    }
    PVar2 = param_1[0x6f0];
    if (PVar2 != pPVar1[0x6f0]) {
      piVar5 = (int *)folly::dynamic::operator[]();
      if (*piVar5 != 2) {
        folly::dynamic::destroy();
        *piVar5 = 2;
      }
      *(Props *)(piVar5 + 2) = PVar2;
    }
  }
  if (*(long *)(lVar3 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0011884c  FUN_0011884c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011884c(void)

{
  FUN_0011b488(&DAT_00127168,PTR_PTR_00122508 + 0x10);
  DAT_00127744 = 0;
  DAT_00127748 = 0;
  DAT_001277a8 = 0;
  DAT_001277b0 = 0;
  DAT_00127810 = 0;
  DAT_00127820 = 0;
  DAT_00127824 = 0;
  DAT_00127828 = 0;
  DAT_0012782c = 0;
  DAT_00127830 = 0;
  DAT_00127834 = 0;
  DAT_00127838 = 0;
  DAT_0012783c = 0;
  DAT_00127840 = 0;
  DAT_00127844 = 0;
  DAT_00127818 = 0;
  DAT_0012781c = 0;
  uRam0000000000127850 = 0;
  _DAT_00127848 = 0;
  DAT_00127168 = PTR_vtable_00122500 + 0x20;
  DAT_00127858 = 0;
  return;
}


// ===== 001188e0  FUN_001188e0 =====

void FUN_001188e0(undefined8 param_1)

{
  FUN_0011835c(param_1,PTR_PTR_00122508 + 8);
  return;
}


// ===== 001188f0  facebook::react::KeyboardBackgroundViewProps::KeyboardBackgroundViewProps =====

/* facebook::react::KeyboardBackgroundViewProps::KeyboardBackgroundViewProps(facebook::react::PropsParserContext
   const&, facebook::react::KeyboardBackgroundViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::KeyboardBackgroundViewProps::KeyboardBackgroundViewProps
          (KeyboardBackgroundViewProps *this,PropsParserContext *param_1,
          KeyboardBackgroundViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  long *plVar2;
  function *in_x4;
  long lVar3;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar2 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (long *)0x0;
                    /* try { // try from 0011891c to 0011892b has its CatchHandler @ 00118984 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if (local_50 == local_70) {
    lVar3 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00118958;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_00118958:
  *(undefined8 *)this = *(undefined8 *)param_1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001189d4  facebook::react::KeyboardBackgroundViewProps::KeyboardBackgroundViewProps =====

/* facebook::react::KeyboardBackgroundViewProps::KeyboardBackgroundViewProps(facebook::react::PropsParserContext
   const&, facebook::react::KeyboardBackgroundViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::KeyboardBackgroundViewProps::KeyboardBackgroundViewProps
          (KeyboardBackgroundViewProps *this,PropsParserContext *param_1,
          KeyboardBackgroundViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar2 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (long *)0x0;
                    /* try { // try from 00118a08 to 00118a1f has its CatchHandler @ 00118a80 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_00122518 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if (local_50 == local_70) {
    lVar3 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00118a4c;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_00118a4c:
  *(undefined **)this = PTR_vtable_00122510 + 0x20;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00118ad0  facebook::react::KeyboardBackgroundViewProps::getDiffPropsImplementationTarget =====

/* facebook::react::KeyboardBackgroundViewProps::getDiffPropsImplementationTarget() const */

char * facebook::react::KeyboardBackgroundViewProps::getDiffPropsImplementationTarget(void)

{
  return "KeyboardBackgroundView";
}


// ===== 00118adc  facebook::react::KeyboardBackgroundViewProps::getDiffProps =====

/* facebook::react::KeyboardBackgroundViewProps::getDiffProps(facebook::react::Props const*) const
    */

void facebook::react::KeyboardBackgroundViewProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  long lVar2;
  int iVar3;
  Props *in_x1;
  undefined4 *in_x8;
  long lVar4;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  if ((DAT_00127f48 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_00127f48);
    if (iVar3 != 0) {
      memset(&DAT_00127868,0,0x6e0);
      FUN_00118c0c();
      __cxa_atexit(FUN_00118c94,&DAT_00127868,&PTR_LOOP_00120f70);
      __cxa_guard_release(&DAT_00127f48);
    }
  }
  pPVar1 = (Props *)&DAT_00127868;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    *in_x8 = 5;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
    folly::dynamic::destroy();
    if (*(long *)(lVar2 + 0x28) == lVar4) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == lVar4) {
    facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00118c0c  FUN_00118c0c =====

void FUN_00118c0c(void)

{
  FUN_0011b488(&DAT_00127868,PTR_PTR_00122518 + 0x10);
  DAT_00127e44 = 0;
  DAT_00127e48 = 0;
  DAT_00127ea8 = 0;
  DAT_00127eb0 = 0;
  DAT_00127f10 = 0;
  DAT_00127f20 = 0;
  DAT_00127f24 = 0;
  DAT_00127f28 = 0;
  DAT_00127f2c = 0;
  DAT_00127f30 = 0;
  DAT_00127f34 = 0;
  DAT_00127f38 = 0;
  DAT_00127f3c = 0;
  DAT_00127f40 = 0;
  DAT_00127f44 = 0;
  DAT_00127f18 = 0;
  DAT_00127f1c = 0;
  DAT_00127868 = PTR_vtable_00122510 + 0x20;
  return;
}


// ===== 00118c94  FUN_00118c94 =====

void FUN_00118c94(undefined8 param_1)

{
  FUN_0011835c(param_1,PTR_PTR_00122518 + 8);
  return;
}


// ===== 00118ca4  facebook::react::KeyboardControllerViewProps::KeyboardControllerViewProps =====

/* facebook::react::KeyboardControllerViewProps::KeyboardControllerViewProps(facebook::react::PropsParserContext
   const&, facebook::react::KeyboardControllerViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::KeyboardControllerViewProps::KeyboardControllerViewProps
          (KeyboardControllerViewProps *this,PropsParserContext *param_1,
          KeyboardControllerViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  function *in_x4;
  long lVar4;
  undefined1 local_80 [32];
  long *local_60;
  long local_48;
  
  plVar3 = (long *)local_80;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = (long *)0x0;
                    /* try { // try from 00118cdc to 00118ceb has its CatchHandler @ 00118e10 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if (local_60 == (long *)local_80) {
    lVar4 = 4;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00118d18;
    lVar4 = 5;
    plVar3 = local_60;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_00118d18:
  local_80[0] = 0;
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 00118d24 to 00118d3b has its CatchHandler @ 00118de4 */
  bVar2 = FUN_001181ac();
  local_80[0] = 0;
  this[0x6e0] = (KeyboardControllerViewProps)(bVar2 & 1);
                    /* try { // try from 00118d48 to 00118d5f has its CatchHandler @ 00118de0 */
  bVar2 = FUN_001181ac();
  local_80[0] = 0;
  this[0x6e1] = (KeyboardControllerViewProps)(bVar2 & 1);
                    /* try { // try from 00118d6c to 00118d83 has its CatchHandler @ 00118ddc */
  bVar2 = FUN_001181ac();
  local_80[0] = 0;
  this[0x6e2] = (KeyboardControllerViewProps)(bVar2 & 1);
                    /* try { // try from 00118d90 to 00118da7 has its CatchHandler @ 00118dd8 */
  bVar2 = FUN_001181ac();
  this[0x6e3] = (KeyboardControllerViewProps)(bVar2 & 1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00118e48  facebook::react::KeyboardControllerViewProps::KeyboardControllerViewProps =====

/* facebook::react::KeyboardControllerViewProps::KeyboardControllerViewProps(facebook::react::PropsParserContext
   const&, facebook::react::KeyboardControllerViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::KeyboardControllerViewProps::KeyboardControllerViewProps
          (KeyboardControllerViewProps *this,PropsParserContext *param_1,
          KeyboardControllerViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  undefined1 local_80 [32];
  long *local_60;
  long local_48;
  
  plVar3 = (long *)local_80;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = (long *)0x0;
                    /* try { // try from 00118e80 to 00118e9f has its CatchHandler @ 00118fcc */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_00122528 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if (local_60 == (long *)local_80) {
    lVar4 = 4;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00118ecc;
    lVar4 = 5;
    plVar3 = local_60;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_00118ecc:
  local_80[0] = 0;
  *(undefined **)this = PTR_vtable_00122520 + 0x20;
                    /* try { // try from 00118ee0 to 00118ef7 has its CatchHandler @ 00118fa0 */
  bVar2 = FUN_001181ac(param_3,"enabled",param_2 + 0x6e0,local_80);
  local_80[0] = 0;
  this[0x6e0] = (KeyboardControllerViewProps)(bVar2 & 1);
                    /* try { // try from 00118f04 to 00118f1b has its CatchHandler @ 00118f9c */
  bVar2 = FUN_001181ac(param_3,"statusBarTranslucent",param_2 + 0x6e1,local_80);
  local_80[0] = 0;
  this[0x6e1] = (KeyboardControllerViewProps)(bVar2 & 1);
                    /* try { // try from 00118f28 to 00118f3f has its CatchHandler @ 00118f98 */
  bVar2 = FUN_001181ac(param_3,"navigationBarTranslucent",param_2 + 0x6e2,local_80);
  local_80[0] = 0;
  this[0x6e2] = (KeyboardControllerViewProps)(bVar2 & 1);
                    /* try { // try from 00118f4c to 00118f63 has its CatchHandler @ 00118f94 */
  bVar2 = FUN_001181ac(param_3,"preserveEdgeToEdge",param_2 + 0x6e3,local_80);
  this[0x6e3] = (KeyboardControllerViewProps)(bVar2 & 1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00119004  facebook::react::KeyboardControllerViewProps::getDiffPropsImplementationTarget =====

/* facebook::react::KeyboardControllerViewProps::getDiffPropsImplementationTarget() const */

char * facebook::react::KeyboardControllerViewProps::getDiffPropsImplementationTarget(void)

{
  return "KeyboardControllerView";
}


// ===== 00119010  facebook::react::KeyboardControllerViewProps::getDiffProps =====

/* facebook::react::KeyboardControllerViewProps::getDiffProps(facebook::react::Props const*) const
    */

void facebook::react::KeyboardControllerViewProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  Props PVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  Props *in_x1;
  undefined4 *in_x8;
  long lVar6;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  if (((DAT_00128638 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_00128638), iVar4 != 0)) {
    memset(&DAT_00127f50,0,0x6e8);
    FUN_00119278();
    __cxa_atexit(FUN_00119304,&DAT_00127f50,&PTR_LOOP_00120f70);
    __cxa_guard_release(&DAT_00128638);
  }
  pPVar1 = (Props *)&DAT_00127f50;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    *in_x8 = 5;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
    folly::dynamic::destroy();
  }
  else {
    facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    PVar2 = param_1[0x6e0];
    if (PVar2 != pPVar1[0x6e0]) {
                    /* try { // try from 00119080 to 0011916b has its CatchHandler @ 00119250 */
      piVar5 = (int *)folly::dynamic::operator[]();
      if (*piVar5 != 2) {
        folly::dynamic::destroy();
        *piVar5 = 2;
      }
      *(Props *)(piVar5 + 2) = PVar2;
    }
    PVar2 = param_1[0x6e1];
    if (PVar2 != pPVar1[0x6e1]) {
      piVar5 = (int *)folly::dynamic::operator[]();
      if (*piVar5 != 2) {
        folly::dynamic::destroy();
        *piVar5 = 2;
      }
      *(Props *)(piVar5 + 2) = PVar2;
    }
    PVar2 = param_1[0x6e2];
    if (PVar2 != pPVar1[0x6e2]) {
      piVar5 = (int *)folly::dynamic::operator[]();
      if (*piVar5 != 2) {
        folly::dynamic::destroy();
        *piVar5 = 2;
      }
      *(Props *)(piVar5 + 2) = PVar2;
    }
    PVar2 = param_1[0x6e3];
    if (PVar2 != pPVar1[0x6e3]) {
      piVar5 = (int *)folly::dynamic::operator[]();
      if (*piVar5 != 2) {
        folly::dynamic::destroy();
        *piVar5 = 2;
      }
      *(Props *)(piVar5 + 2) = PVar2;
    }
  }
  if (*(long *)(lVar3 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00119278  FUN_00119278 =====

void FUN_00119278(void)

{
  FUN_0011b488(&DAT_00127f50,PTR_PTR_00122528 + 0x10);
  DAT_0012852c = 0;
  DAT_00128530 = 0;
  DAT_00128590 = 0;
  DAT_00128598 = 0;
  DAT_001285f8 = 0;
  DAT_00128608 = 0;
  DAT_0012860c = 0;
  DAT_00128610 = 0;
  DAT_00128614 = 0;
  DAT_00128618 = 0;
  DAT_0012861c = 0;
  DAT_00128620 = 0;
  DAT_00128624 = 0;
  DAT_00128628 = 0;
  DAT_0012862c = 0;
  DAT_00128600 = 0;
  DAT_00128604 = 0;
  DAT_00128630 = 0;
  DAT_00127f50 = PTR_vtable_00122520 + 0x20;
  return;
}


// ===== 00119304  FUN_00119304 =====

void FUN_00119304(undefined8 param_1)

{
  FUN_0011835c(param_1,PTR_PTR_00122528 + 8);
  return;
}


// ===== 00119314  facebook::react::KeyboardExtenderProps::KeyboardExtenderProps =====

/* facebook::react::KeyboardExtenderProps::KeyboardExtenderProps(facebook::react::PropsParserContext
   const&, facebook::react::KeyboardExtenderProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::KeyboardExtenderProps::KeyboardExtenderProps
          (KeyboardExtenderProps *this,PropsParserContext *param_1,KeyboardExtenderProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  function *in_x4;
  long lVar4;
  undefined1 local_80 [32];
  long *local_60;
  long local_48;
  
  plVar3 = (long *)local_80;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = (long *)0x0;
                    /* try { // try from 0011934c to 0011935b has its CatchHandler @ 001193f0 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if (local_60 == (long *)local_80) {
    lVar4 = 4;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00119388;
    lVar4 = 5;
    plVar3 = local_60;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_00119388:
  local_80[0] = 0;
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 00119394 to 001193ab has its CatchHandler @ 001193dc */
  bVar2 = FUN_001181ac();
  this[0x6e0] = (KeyboardExtenderProps)(bVar2 & 1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00119440  facebook::react::KeyboardExtenderProps::KeyboardExtenderProps =====

/* facebook::react::KeyboardExtenderProps::KeyboardExtenderProps(facebook::react::PropsParserContext
   const&, facebook::react::KeyboardExtenderProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::KeyboardExtenderProps::KeyboardExtenderProps
          (KeyboardExtenderProps *this,PropsParserContext *param_1,KeyboardExtenderProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  undefined1 local_80 [32];
  long *local_60;
  long local_48;
  
  plVar3 = (long *)local_80;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = (long *)0x0;
                    /* try { // try from 00119478 to 00119497 has its CatchHandler @ 00119534 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_00122538 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if (local_60 == (long *)local_80) {
    lVar4 = 4;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_001194c4;
    lVar4 = 5;
    plVar3 = local_60;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_001194c4:
  local_80[0] = 0;
  *(undefined **)this = PTR_vtable_00122530 + 0x20;
                    /* try { // try from 001194d8 to 001194ef has its CatchHandler @ 00119520 */
  bVar2 = FUN_001181ac(param_3,"enabled",param_2 + 0x6e0,local_80);
  this[0x6e0] = (KeyboardExtenderProps)(bVar2 & 1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00119584  facebook::react::KeyboardExtenderProps::getDiffPropsImplementationTarget =====

/* facebook::react::KeyboardExtenderProps::getDiffPropsImplementationTarget() const */

char * facebook::react::KeyboardExtenderProps::getDiffPropsImplementationTarget(void)

{
  return "KeyboardExtender";
}


// ===== 00119590  facebook::react::KeyboardExtenderProps::getDiffProps =====

/* facebook::react::KeyboardExtenderProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::KeyboardExtenderProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  Props PVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  Props *in_x1;
  undefined4 *in_x8;
  long lVar6;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  if (((DAT_00128d28 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_00128d28), iVar4 != 0)) {
    memset(&DAT_00128640,0,0x6e8);
    FUN_00119730();
    __cxa_atexit(FUN_001197bc,&DAT_00128640,&PTR_LOOP_00120f70);
    __cxa_guard_release(&DAT_00128d28);
  }
  pPVar1 = (Props *)&DAT_00128640;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    *in_x8 = 5;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
    folly::dynamic::destroy();
  }
  else {
    facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    PVar2 = param_1[0x6e0];
    if (PVar2 != pPVar1[0x6e0]) {
                    /* try { // try from 001195fc to 0011960f has its CatchHandler @ 00119708 */
      piVar5 = (int *)folly::dynamic::operator[]();
      if (*piVar5 != 2) {
        folly::dynamic::destroy();
        *piVar5 = 2;
      }
      *(Props *)(piVar5 + 2) = PVar2;
    }
  }
  if (*(long *)(lVar3 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00119730  FUN_00119730 =====

void FUN_00119730(void)

{
  FUN_0011b488(&DAT_00128640,PTR_PTR_00122538 + 0x10);
  DAT_00128c1c = 0;
  DAT_00128c20 = 0;
  DAT_00128c80 = 0;
  DAT_00128c88 = 0;
  DAT_00128ce8 = 0;
  DAT_00128cf8 = 0;
  DAT_00128cfc = 0;
  DAT_00128d00 = 0;
  DAT_00128d04 = 0;
  DAT_00128d08 = 0;
  DAT_00128d0c = 0;
  DAT_00128d10 = 0;
  DAT_00128d14 = 0;
  DAT_00128d18 = 0;
  DAT_00128d1c = 0;
  DAT_00128cf0 = 0;
  DAT_00128cf4 = 0;
  DAT_00128d20 = 0;
  DAT_00128640 = PTR_vtable_00122530 + 0x20;
  return;
}


// ===== 001197bc  FUN_001197bc =====

void FUN_001197bc(undefined8 param_1)

{
  FUN_0011835c(param_1,PTR_PTR_00122538 + 8);
  return;
}


// ===== 001197cc  facebook::react::KeyboardGestureAreaProps::KeyboardGestureAreaProps =====

/* facebook::react::KeyboardGestureAreaProps::KeyboardGestureAreaProps(facebook::react::PropsParserContext
   const&, facebook::react::KeyboardGestureAreaProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::KeyboardGestureAreaProps::KeyboardGestureAreaProps
          (KeyboardGestureAreaProps *this,PropsParserContext *param_1,
          KeyboardGestureAreaProps *param_2,RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  long *plVar4;
  function *in_x4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_60;
  long local_48;
  
  plVar4 = &local_80;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = (long *)0x0;
                    /* try { // try from 00119804 to 00119813 has its CatchHandler @ 00119948 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if (local_60 == &local_80) {
    lVar5 = 4;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00119840;
    lVar5 = 5;
    plVar4 = local_60;
  }
  (**(code **)(*plVar4 + lVar5 * 8))();
LAB_00119840:
  local_80 = (ulong)local_80._4_4_ << 0x20;
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 0011984c to 0011985b has its CatchHandler @ 0011991c */
  uVar3 = FUN_00119980();
  *(undefined4 *)(this + 0x6e0) = uVar3;
  local_80 = local_80 & 0xffffffffffffff00;
                    /* try { // try from 00119864 to 0011987b has its CatchHandler @ 00119918 */
  bVar2 = FUN_001181ac();
  local_80 = local_80 & 0xffffffffffffff00;
  this[0x6e4] = (KeyboardGestureAreaProps)(bVar2 & 1);
                    /* try { // try from 00119888 to 0011989f has its CatchHandler @ 00119914 */
  bVar2 = FUN_001181ac();
  local_80 = 0;
  this[0x6e5] = (KeyboardGestureAreaProps)(bVar2 & 1);
                    /* try { // try from 001198ac to 001198c3 has its CatchHandler @ 00119910 */
  uVar6 = FUN_00118000();
  *(undefined8 *)(this + 0x6e8) = uVar6;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
                    /* try { // try from 001198d0 to 001198e3 has its CatchHandler @ 0011990c */
  FUN_00119b34(this + 0x6f0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00119980  FUN_00119980 =====

void FUN_00119980(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 local_50 [6];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_1,"interpolator",(char *)0x0);
  if (lVar2 == 0) {
    local_50[0] = *param_2;
  }
  else {
    uVar3 = FUN_0011b83c();
    if ((uVar3 & 1) == 0) {
      local_50[0] = *param_3;
    }
    else {
                    /* try { // try from 001199f8 to 00119a03 has its CatchHandler @ 00119a14 */
      FUN_0011c71c(lVar2,local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_50[0]);
}


// ===== 00119b34  FUN_00119b34 =====

void FUN_00119b34(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,char *param_2,byte *param_3,byte *param_4)

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
  lVar2 = facebook::react::RawProps::at(param_2,"textInputNativeID",(char *)0x0);
  if (lVar2 == 0) {
    if ((*param_3 & 1) == 0) {
      if (*(long *)(lVar1 + 0x28) == lVar5) {
        uVar8 = *(undefined8 *)(param_3 + 8);
        uVar7 = *(undefined8 *)param_3;
        uVar6 = *(undefined8 *)(param_3 + 0x10);
LAB_00119ba0:
        *(undefined8 *)(param_1 + 8) = uVar8;
        *(undefined8 *)param_1 = uVar7;
        *(undefined8 *)(param_1 + 0x10) = uVar6;
        return;
      }
      goto LAB_00119da4;
    }
    uVar3 = *(ulong *)(param_3 + 8);
    pcVar4 = *(char **)(param_3 + 0x10);
  }
  else {
    uVar3 = FUN_0011b83c();
    if ((uVar3 & 1) != 0) {
      *(undefined8 *)param_1 = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
                    /* try { // try from 00119c04 to 00119c0f has its CatchHandler @ 00119c50 */
      FUN_0011c9c0(lVar2,param_1);
      if (*(long *)(lVar1 + 0x28) == lVar5) {
        return;
      }
      goto LAB_00119da4;
    }
    if ((*param_4 & 1) == 0) {
      if (*(long *)(lVar1 + 0x28) == lVar5) {
        uVar8 = *(undefined8 *)(param_4 + 8);
        uVar7 = *(undefined8 *)param_4;
        uVar6 = *(undefined8 *)(param_4 + 0x10);
        goto LAB_00119ba0;
      }
      goto LAB_00119da4;
    }
    uVar3 = *(ulong *)(param_4 + 8);
    pcVar4 = *(char **)(param_4 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1,pcVar4,uVar3);
    return;
  }
LAB_00119da4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00119dac  facebook::react::KeyboardGestureAreaProps::KeyboardGestureAreaProps =====

/* facebook::react::KeyboardGestureAreaProps::KeyboardGestureAreaProps(facebook::react::PropsParserContext
   const&, facebook::react::KeyboardGestureAreaProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::KeyboardGestureAreaProps::KeyboardGestureAreaProps
          (KeyboardGestureAreaProps *this,PropsParserContext *param_1,
          KeyboardGestureAreaProps *param_2,RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_60;
  long local_48;
  
  plVar4 = &local_80;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = (long *)0x0;
                    /* try { // try from 00119de4 to 00119e03 has its CatchHandler @ 00119f40 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_00122548 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if (local_60 == &local_80) {
    lVar5 = 4;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00119e30;
    lVar5 = 5;
    plVar4 = local_60;
  }
  (**(code **)(*plVar4 + lVar5 * 8))();
LAB_00119e30:
  local_80 = (ulong)local_80._4_4_ << 0x20;
  *(undefined **)this = PTR_vtable_00122540 + 0x20;
                    /* try { // try from 00119e44 to 00119e53 has its CatchHandler @ 00119f14 */
  uVar3 = FUN_00119980(param_3,param_2 + 0x6e0,&local_80);
  *(undefined4 *)(this + 0x6e0) = uVar3;
  local_80 = local_80 & 0xffffffffffffff00;
                    /* try { // try from 00119e5c to 00119e73 has its CatchHandler @ 00119f10 */
  bVar2 = FUN_001181ac(param_3,"showOnSwipeUp",param_2 + 0x6e4,&local_80);
  local_80 = local_80 & 0xffffffffffffff00;
  this[0x6e4] = (KeyboardGestureAreaProps)(bVar2 & 1);
                    /* try { // try from 00119e80 to 00119e97 has its CatchHandler @ 00119f0c */
  bVar2 = FUN_001181ac(param_3,"enableSwipeToDismiss",param_2 + 0x6e5,&local_80);
  local_80 = 0;
  this[0x6e5] = (KeyboardGestureAreaProps)(bVar2 & 1);
                    /* try { // try from 00119ea4 to 00119ebb has its CatchHandler @ 00119f08 */
  uVar6 = FUN_00118000(param_3,"offset",param_2 + 0x6e8,&local_80);
  *(undefined8 *)(this + 0x6e8) = uVar6;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
                    /* try { // try from 00119ec8 to 00119edb has its CatchHandler @ 00119f04 */
  FUN_00119b34(this + 0x6f0,param_3,param_2 + 0x6f0,&local_80);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00119f78  facebook::react::KeyboardGestureAreaProps::getDiffPropsImplementationTarget =====

/* facebook::react::KeyboardGestureAreaProps::getDiffPropsImplementationTarget() const */

char * facebook::react::KeyboardGestureAreaProps::getDiffPropsImplementationTarget(void)

{
  return "KeyboardGestureArea";
}


// ===== 00119f84  facebook::react::KeyboardGestureAreaProps::getDiffProps =====

/* facebook::react::KeyboardGestureAreaProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::KeyboardGestureAreaProps::getDiffProps(Props *param_1)

{
  ulong uVar1;
  ulong uVar2;
  Props PVar3;
  Props PVar4;
  long lVar5;
  int iVar6;
  dynamic *pdVar7;
  int *piVar8;
  Props *in_x1;
  Props *__s2;
  undefined1 uVar9;
  undefined4 *in_x8;
  undefined1 *puVar10;
  ulong uVar11;
  Props *pPVar12;
  char *__s1;
  size_t __n;
  double dVar13;
  undefined1 local_b8 [4];
  undefined1 local_b4 [4];
  ulong local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  undefined2 local_8c;
  undefined1 local_8a;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  void *local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if (((DAT_00129438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_00129438), iVar6 != 0)) {
    memset(&DAT_00128d30,0,0x708);
    FUN_0011a3d0();
    __cxa_atexit(FUN_0011a46c,&DAT_00128d30,&PTR_LOOP_00120f70);
    __cxa_guard_release(&DAT_00129438);
  }
  pPVar12 = (Props *)&DAT_00128d30;
  if (in_x1 != (Props *)0x0) {
    pPVar12 = in_x1;
  }
  if (pPVar12 == param_1) {
    local_68 = 0;
    local_88[0] = 5;
    uStack_78 = 0;
    local_70 = (void *)0x0;
    local_60 = 0x3f800000;
    *in_x8 = 5;
    local_80 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
    folly::dynamic::destroy();
  }
  else {
    facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    iVar6 = *(int *)(param_1 + 0x6e0);
    if (iVar6 != *(int *)(pPVar12 + 0x6e0)) {
      if (iVar6 == 1) {
        local_8a = 0x73;
        uVar9 = 6;
        local_8c = 0x6f69;
        puVar10 = local_b4;
      }
      else {
        if (iVar6 != 0) {
          if (*(long *)(lVar5 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0011a36c to 0011a36f has its CatchHandler @ 0011a370 */
            abort();
          }
          goto LAB_0011a3cc;
        }
        local_8a = 0x6e;
        uVar9 = 0xc;
        local_8c = 0x696c;
        puVar10 = local_b8;
        local_b4[0] = 0x65;
      }
      *puVar10 = 0;
      local_88[0] = 6;
      local_80 = CONCAT17(local_b8[0],
                          CONCAT25(0x7261,CONCAT14(local_b4[0],
                                                   CONCAT13(local_8a,CONCAT21(local_8c,uVar9)))));
      uStack_78 = 0;
      local_70 = (void *)0x0;
                    /* try { // try from 0011a0b4 to 0011a0c7 has its CatchHandler @ 0011a378 */
      pdVar7 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar7,(dynamic *)local_88);
      folly::dynamic::destroy();
    }
    PVar3 = param_1[0x6e4];
    if (PVar3 != pPVar12[0x6e4]) {
                    /* try { // try from 0011a0e8 to 0011a19b has its CatchHandler @ 0011a3a8 */
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 2) {
        folly::dynamic::destroy();
        *piVar8 = 2;
      }
      *(Props *)(piVar8 + 2) = PVar3;
    }
    PVar3 = param_1[0x6e5];
    if (PVar3 != pPVar12[0x6e5]) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 2) {
        folly::dynamic::destroy();
        *piVar8 = 2;
      }
      *(Props *)(piVar8 + 2) = PVar3;
    }
    dVar13 = *(double *)(param_1 + 0x6e8);
    if ((dVar13 != *(double *)(pPVar12 + 0x6e8)) &&
       ((!NAN(dVar13) || (!NAN(*(double *)(pPVar12 + 0x6e8)))))) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 3) {
        folly::dynamic::destroy();
        *piVar8 = 3;
      }
      *(double *)(piVar8 + 2) = dVar13;
    }
    PVar3 = param_1[0x6f0];
    PVar4 = pPVar12[0x6f0];
    __n = *(size_t *)(param_1 + 0x6f8);
    uVar11 = (ulong)((byte)PVar3 >> 1);
    uVar1 = uVar11;
    if (((byte)PVar3 & 1) != 0) {
      uVar1 = __n;
    }
    uVar2 = (ulong)((byte)PVar4 >> 1);
    if (((byte)PVar4 & 1) != 0) {
      uVar2 = *(ulong *)(pPVar12 + 0x6f8);
    }
    if (uVar1 == uVar2) {
      __s2 = pPVar12 + 0x6f1;
      if (((byte)PVar4 & 1) != 0) {
        __s2 = *(Props **)(pPVar12 + 0x700);
      }
      if (((byte)PVar3 & 1) == 0) {
        if (1 < (byte)PVar3) {
          pPVar12 = param_1 + 0x6f1;
          do {
            if (*pPVar12 != *__s2) goto LAB_0011a234;
            uVar11 = uVar11 - 1;
            pPVar12 = pPVar12 + 1;
            __s2 = __s2 + 1;
          } while (uVar11 != 0);
        }
      }
      else {
        __s1 = *(char **)(param_1 + 0x700);
        iVar6 = memcmp(__s1,__s2,__n);
        if (iVar6 != 0) goto LAB_0011a26c;
      }
    }
    else {
LAB_0011a234:
      if (((byte)PVar3 & 1) == 0) {
        uStack_a8 = *(undefined8 *)(param_1 + 0x6f8);
        local_b0 = *(ulong *)(param_1 + 0x6f0);
        local_a0 = *(void **)(param_1 + 0x700);
      }
      else {
        __s1 = *(char **)(param_1 + 0x700);
LAB_0011a26c:
                    /* try { // try from 0011a26c to 0011a27b has its CatchHandler @ 0011a374 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_b0,__s1,__n);
      }
      local_88[0] = 6;
      uStack_78 = uStack_a8;
      local_80 = local_b0;
      local_70 = local_a0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = (void *)0x0;
                    /* try { // try from 0011a29c to 0011a2af has its CatchHandler @ 0011a388 */
      pdVar7 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar7,(dynamic *)local_88);
      folly::dynamic::destroy();
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
LAB_0011a3cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011a3d0  FUN_0011a3d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011a3d0(void)

{
  FUN_0011b488(&DAT_00128d30,PTR_PTR_00122548 + 0x10);
  DAT_0012930c = 0;
  DAT_00129310 = 0;
  DAT_00129370 = 0;
  DAT_00129378 = 0;
  DAT_001293d8 = 0;
  DAT_001293e8 = 0;
  DAT_001293ec = 0;
  DAT_001293f0 = 0;
  DAT_001293f4 = 0;
  DAT_001293f8 = 0;
  DAT_001293fc = 0;
  DAT_00129400 = 0;
  DAT_00129404 = 0;
  DAT_00129408 = 0;
  DAT_0012940c = 0;
  DAT_001293e0 = 0;
  DAT_001293e4 = 0;
  DAT_00129410 = 0;
  DAT_00128d30 = PTR_vtable_00122540 + 0x20;
  DAT_00129414 = 0;
  uRam0000000000129420 = 0;
  _DAT_00129418 = 0;
  uRam0000000000129430 = 0;
  _DAT_00129428 = 0;
  return;
}


// ===== 0011a46c  FUN_0011a46c =====

void FUN_0011a46c(long param_1)

{
  if ((*(byte *)(param_1 + 0x6f0) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x700));
  }
  FUN_0011835c(param_1,PTR_PTR_00122548 + 8);
  return;
}


// ===== 0011a4ac  facebook::react::KeyboardToolbarGroupViewProps::KeyboardToolbarGroupViewProps =====

/* facebook::react::KeyboardToolbarGroupViewProps::KeyboardToolbarGroupViewProps(facebook::react::PropsParserContext
   const&, facebook::react::KeyboardToolbarGroupViewProps const&, facebook::react::RawProps const&)
    */

void __thiscall
facebook::react::KeyboardToolbarGroupViewProps::KeyboardToolbarGroupViewProps
          (KeyboardToolbarGroupViewProps *this,PropsParserContext *param_1,
          KeyboardToolbarGroupViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  long *plVar2;
  function *in_x4;
  long lVar3;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar2 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (long *)0x0;
                    /* try { // try from 0011a4d8 to 0011a4e7 has its CatchHandler @ 0011a540 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if (local_50 == local_70) {
    lVar3 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0011a514;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_0011a514:
  *(undefined8 *)this = *(undefined8 *)param_1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011a590  facebook::react::KeyboardToolbarGroupViewProps::KeyboardToolbarGroupViewProps =====

/* facebook::react::KeyboardToolbarGroupViewProps::KeyboardToolbarGroupViewProps(facebook::react::PropsParserContext
   const&, facebook::react::KeyboardToolbarGroupViewProps const&, facebook::react::RawProps const&)
    */

void __thiscall
facebook::react::KeyboardToolbarGroupViewProps::KeyboardToolbarGroupViewProps
          (KeyboardToolbarGroupViewProps *this,PropsParserContext *param_1,
          KeyboardToolbarGroupViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar2 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (long *)0x0;
                    /* try { // try from 0011a5c4 to 0011a5db has its CatchHandler @ 0011a63c */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_00122558 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if (local_50 == local_70) {
    lVar3 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0011a608;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_0011a608:
  *(undefined **)this = PTR_vtable_00122550 + 0x20;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011a68c  facebook::react::KeyboardToolbarGroupViewProps::getDiffPropsImplementationTarget =====

/* facebook::react::KeyboardToolbarGroupViewProps::getDiffPropsImplementationTarget() const */

char * facebook::react::KeyboardToolbarGroupViewProps::getDiffPropsImplementationTarget(void)

{
  return "KeyboardToolbarGroupView";
}


// ===== 0011a698  facebook::react::KeyboardToolbarGroupViewProps::getDiffProps =====

/* facebook::react::KeyboardToolbarGroupViewProps::getDiffProps(facebook::react::Props const*) const
    */

void facebook::react::KeyboardToolbarGroupViewProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  long lVar2;
  int iVar3;
  Props *in_x1;
  undefined4 *in_x8;
  long lVar4;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  if ((DAT_00129b20 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_00129b20);
    if (iVar3 != 0) {
      memset(&DAT_00129440,0,0x6e0);
      FUN_0011a7c8();
      __cxa_atexit(FUN_0011a850,&DAT_00129440,&PTR_LOOP_00120f70);
      __cxa_guard_release(&DAT_00129b20);
    }
  }
  pPVar1 = (Props *)&DAT_00129440;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    *in_x8 = 5;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
    folly::dynamic::destroy();
    if (*(long *)(lVar2 + 0x28) == lVar4) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == lVar4) {
    facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011a7c8  FUN_0011a7c8 =====

void FUN_0011a7c8(void)

{
  FUN_0011b488(&DAT_00129440,PTR_PTR_00122558 + 0x10);
  DAT_00129a1c = 0;
  DAT_00129a20 = 0;
  DAT_00129a80 = 0;
  DAT_00129a88 = 0;
  DAT_00129ae8 = 0;
  DAT_00129af8 = 0;
  DAT_00129afc = 0;
  DAT_00129b00 = 0;
  DAT_00129b04 = 0;
  DAT_00129b08 = 0;
  DAT_00129b0c = 0;
  DAT_00129b10 = 0;
  DAT_00129b14 = 0;
  DAT_00129b18 = 0;
  DAT_00129b1c = 0;
  DAT_00129af0 = 0;
  DAT_00129af4 = 0;
  DAT_00129440 = PTR_vtable_00122550 + 0x20;
  return;
}


// ===== 0011a850  FUN_0011a850 =====

void FUN_0011a850(undefined8 param_1)

{
  FUN_0011835c(param_1,PTR_PTR_00122558 + 8);
  return;
}


// ===== 0011a860  facebook::react::OverKeyboardViewProps::OverKeyboardViewProps =====

/* facebook::react::OverKeyboardViewProps::OverKeyboardViewProps(facebook::react::PropsParserContext
   const&, facebook::react::OverKeyboardViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::OverKeyboardViewProps::OverKeyboardViewProps
          (OverKeyboardViewProps *this,PropsParserContext *param_1,OverKeyboardViewProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  function *in_x4;
  long lVar4;
  undefined1 local_80 [32];
  long *local_60;
  long local_48;
  
  plVar3 = (long *)local_80;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = (long *)0x0;
                    /* try { // try from 0011a898 to 0011a8a7 has its CatchHandler @ 0011a93c */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if (local_60 == (long *)local_80) {
    lVar4 = 4;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_0011a8d4;
    lVar4 = 5;
    plVar3 = local_60;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_0011a8d4:
  local_80[0] = 0;
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 0011a8e0 to 0011a8f7 has its CatchHandler @ 0011a928 */
  bVar2 = FUN_001181ac();
  this[0x6e0] = (OverKeyboardViewProps)(bVar2 & 1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011a98c  facebook::react::OverKeyboardViewProps::OverKeyboardViewProps =====

/* facebook::react::OverKeyboardViewProps::OverKeyboardViewProps(facebook::react::PropsParserContext
   const&, facebook::react::OverKeyboardViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::OverKeyboardViewProps::OverKeyboardViewProps
          (OverKeyboardViewProps *this,PropsParserContext *param_1,OverKeyboardViewProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  undefined1 local_80 [32];
  long *local_60;
  long local_48;
  
  plVar3 = (long *)local_80;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = (long *)0x0;
                    /* try { // try from 0011a9c4 to 0011a9e3 has its CatchHandler @ 0011aa80 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_00122568 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if (local_60 == (long *)local_80) {
    lVar4 = 4;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_0011aa10;
    lVar4 = 5;
    plVar3 = local_60;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_0011aa10:
  local_80[0] = 0;
  *(undefined **)this = PTR_vtable_00122560 + 0x20;
                    /* try { // try from 0011aa24 to 0011aa3b has its CatchHandler @ 0011aa6c */
  bVar2 = FUN_001181ac(param_3,"visible",param_2 + 0x6e0,local_80);
  this[0x6e0] = (OverKeyboardViewProps)(bVar2 & 1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011aad0  facebook::react::OverKeyboardViewProps::getDiffPropsImplementationTarget =====

/* facebook::react::OverKeyboardViewProps::getDiffPropsImplementationTarget() const */

char * facebook::react::OverKeyboardViewProps::getDiffPropsImplementationTarget(void)

{
  return "OverKeyboardView";
}


// ===== 0011aadc  facebook::react::OverKeyboardViewProps::getDiffProps =====

/* facebook::react::OverKeyboardViewProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::OverKeyboardViewProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  Props PVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  Props *in_x1;
  undefined4 *in_x8;
  long lVar6;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  if (((DAT_0012a210 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0012a210), iVar4 != 0)) {
    memset(&DAT_00129b28,0,0x6e8);
    FUN_0011ac7c();
    __cxa_atexit(FUN_0011ad08,&DAT_00129b28,&PTR_LOOP_00120f70);
    __cxa_guard_release(&DAT_0012a210);
  }
  pPVar1 = (Props *)&DAT_00129b28;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    *in_x8 = 5;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
    folly::dynamic::destroy();
  }
  else {
    facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    PVar2 = param_1[0x6e0];
    if (PVar2 != pPVar1[0x6e0]) {
                    /* try { // try from 0011ab48 to 0011ab5b has its CatchHandler @ 0011ac54 */
      piVar5 = (int *)folly::dynamic::operator[]();
      if (*piVar5 != 2) {
        folly::dynamic::destroy();
        *piVar5 = 2;
      }
      *(Props *)(piVar5 + 2) = PVar2;
    }
  }
  if (*(long *)(lVar3 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011ac7c  FUN_0011ac7c =====

void FUN_0011ac7c(void)

{
  FUN_0011b488(&DAT_00129b28,PTR_PTR_00122568 + 0x10);
  DAT_0012a104 = 0;
  DAT_0012a108 = 0;
  DAT_0012a168 = 0;
  DAT_0012a170 = 0;
  DAT_0012a1d0 = 0;
  DAT_0012a1e0 = 0;
  DAT_0012a1e4 = 0;
  DAT_0012a1e8 = 0;
  DAT_0012a1ec = 0;
  DAT_0012a1f0 = 0;
  DAT_0012a1f4 = 0;
  DAT_0012a1f8 = 0;
  DAT_0012a1fc = 0;
  DAT_0012a200 = 0;
  DAT_0012a204 = 0;
  DAT_0012a1d8 = 0;
  DAT_0012a1dc = 0;
  DAT_0012a208 = 0;
  DAT_00129b28 = PTR_vtable_00122560 + 0x20;
  return;
}


// ===== 0011ad08  FUN_0011ad08 =====

void FUN_0011ad08(undefined8 param_1)

{
  FUN_0011835c(param_1,PTR_PTR_00122568 + 8);
  return;
}


// ===== 0011ad18  FUN_0011ad18 =====

void FUN_0011ad18(undefined8 param_1)

{
  FUN_0011835c(param_1,PTR_VTT_001225a0);
  return;
}


// ===== 0011ad24  FUN_0011ad24 =====

void FUN_0011ad24(void *param_1)

{
  FUN_0011835c(param_1,PTR_VTT_001225a0);
  operator_delete(param_1);
  return;
}


// ===== 0011ad50  FUN_0011ad50 =====

void FUN_0011ad50(undefined8 param_1)

{
  FUN_0011b098(param_1,&PTR_PTR_FUN_001220e0);
  return;
}


// ===== 0011ad5c  FUN_0011ad5c =====

void FUN_0011ad5c(void *param_1)

{
  FUN_0011b098(param_1,&PTR_PTR_FUN_001220e0);
  operator_delete(param_1);
  return;
}


// ===== 0011ad88  FUN_0011ad88 =====

void FUN_0011ad88(undefined4 *param_1)

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


// ===== 0011adfc  FUN_0011adfc =====

void FUN_0011adfc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00122198;
  FUN_0011b3f4(param_1 + 10);
  *param_1 = &PTR_FUN_001221d8;
  folly::dynamic::destroy();
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 0011ae54  FUN_0011ae54 =====

void FUN_0011ae54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00122198;
  FUN_0011b3f4(param_1 + 10);
  *param_1 = &PTR_FUN_001221d8;
  folly::dynamic::destroy();
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0011aea8  FUN_0011aea8 =====

void FUN_0011aea8(long *param_1)

{
  *param_1 = (long)(PTR_vtable_001225a8 + 0x20);
  folly::dynamic::destroy();
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 0011aef0  FUN_0011aef0 =====

void FUN_0011aef0(long *param_1)

{
  *param_1 = (long)(PTR_vtable_001225a8 + 0x20);
  folly::dynamic::destroy();
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0011af34  FUN_0011af34 =====

void FUN_0011af34(void *param_1)

{
  FUN_0011835c(param_1,PTR_PTR_00122508 + 8);
  operator_delete(param_1);
  return;
}


// ===== 0011af64  FUN_0011af64 =====

void FUN_0011af64(void *param_1)

{
  FUN_0011835c(param_1,PTR_PTR_00122518 + 8);
  operator_delete(param_1);
  return;
}


// ===== 0011af94  FUN_0011af94 =====

void FUN_0011af94(void *param_1)

{
  FUN_0011835c(param_1,PTR_PTR_00122528 + 8);
  operator_delete(param_1);
  return;
}


// ===== 0011afc4  FUN_0011afc4 =====

void FUN_0011afc4(void *param_1)

{
  FUN_0011835c(param_1,PTR_PTR_00122538 + 8);
  operator_delete(param_1);
  return;
}


// ===== 0011aff4  FUN_0011aff4 =====

void FUN_0011aff4(void *param_1)

{
  if ((*(byte *)((long)param_1 + 0x6f0) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x700));
  }
  FUN_0011835c(param_1,PTR_PTR_00122548 + 8);
  operator_delete(param_1);
  return;
}


// ===== 0011b038  FUN_0011b038 =====

void FUN_0011b038(void *param_1)

{
  FUN_0011835c(param_1,PTR_PTR_00122558 + 8);
  operator_delete(param_1);
  return;
}


// ===== 0011b068  FUN_0011b068 =====

void FUN_0011b068(void *param_1)

{
  FUN_0011835c(param_1,PTR_PTR_00122568 + 8);
  operator_delete(param_1);
  return;
}


// ===== 0011b098  FUN_0011b098 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0011b098(undefined8 *param_1,undefined8 *param_2)

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
                    /* try { // try from 0011b160 to 0011b167 has its CatchHandler @ 0011b3c8 */
          (*(code *)(&PTR_FUN_00122090)[*(uint *)((long)pvVar8 + -8)])
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
  FUN_0011b3f4(param_1 + 10);
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


// ===== 0011b3cc  FUN_0011b3cc =====

void FUN_0011b3cc(undefined8 param_1,long param_2)

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


// ===== 0011b3e0  FUN_0011b3e0 =====

void FUN_0011b3e0(undefined8 param_1,long param_2)

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


// ===== 0011b3f4  FUN_0011b3f4 =====

void FUN_0011b3f4(long param_1)

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


// ===== 0011b488  FUN_0011b488 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011b488(undefined8 *param_1,undefined8 *param_2)

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
  uVar6 = DAT_0010b070;
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
  uVar2 = _UNK_0010a4b8;
  uVar6 = _DAT_0010a4b0;
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
  uVar4 = _UNK_0010b264;
  uVar3 = _DAT_0010b25c;
  uVar2 = _UNK_0010b254;
  uVar6 = _DAT_0010b24c;
  *(undefined1 *)((long)param_1 + 0x34c) = 0;
  *param_1 = uVar7;
  *(undefined8 *)((long)param_1 + 0x344) = 0x3f800000;
  param_1[0xb2] = uVar4;
  param_1[0xb1] = uVar3;
  param_1[0xb0] = uVar2;
  param_1[0xaf] = uVar6;
  uVar4 = _UNK_0010b244;
  uVar3 = _DAT_0010b23c;
  uVar2 = _UNK_0010b234;
  uVar6 = _DAT_0010b22c;
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


// ===== 0011b83c  FUN_0011b83c =====

bool FUN_0011b83c(int *param_1)

{
  if (param_1[0xc] == 1) {
    return 1 < (uint)param_1[2];
  }
  if (param_1[0xc] == 0) {
    return *param_1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0011b894();
}


// ===== 0011b878  FUN_0011b878 =====

void FUN_0011b878(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  
  uVar1 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar1 = (ulong)(*param_2 >> 1);
  }
  FUN_0011c400(param_1,pbVar2,uVar1);
  return;
}


// ===== 0011b894  FUN_0011b894 =====

void FUN_0011b894(void)

{
  long *plVar1;
  
  plVar1 = (long *)__cxa_allocate_exception(8);
  *plVar1 = (long)(PTR_vtable_001225b8 + 0x10);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar1,PTR_typeinfo_001225b0,PTR__exception_00122598);
}


// ===== 0011b8c8  FUN_0011b8c8 =====

void FUN_0011b8c8(double param_1,int *param_2)

{
  byte *****pppppbVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  double dVar5;
  double extraout_x8;
  byte *****unaff_x20;
  byte ****unaff_x21;
  double dVar6;
  double extraout_d0;
  double extraout_d0_00;
  undefined1 auVar7 [16];
  byte ****local_78;
  byte ****local_70;
  byte ****ppppbStack_68;
  byte ****local_60;
  byte ****ppppbStack_58;
  byte ****local_50;
  byte ****ppppbStack_48;
  undefined1 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_2[0xc] == 1) {
    if (*(long *)(lVar3 + 0x28) == local_38) {
      facebook::jsi::Value::asNumber();
      return;
    }
    goto LAB_0011bb94;
  }
  if (param_2[0xc] == 0) {
    iVar2 = *param_2;
    if (iVar2 < 4) {
      if (iVar2 == 2) {
        dVar6 = (double)NEON_ucvtf((ulong)*(byte *)(param_2 + 2));
      }
      else {
        if (iVar2 != 3) goto LAB_0011bb54;
        dVar6 = *(double *)(param_2 + 2);
      }
LAB_0011bac8:
      param_1 = dVar6;
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return;
      }
      goto LAB_0011bb94;
    }
    if (iVar2 == 6) {
      uVar4 = (ulong)(*(byte *)(param_2 + 2) >> 1);
      local_70 = (byte ****)((long)param_2 + 9);
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        uVar4 = *(ulong *)(param_2 + 4);
        local_70 = (byte ****)*(byte ******)(param_2 + 6);
      }
      ppppbStack_68 = (byte ****)((long)local_70 + uVar4);
      local_60 = local_70;
      ppppbStack_58 = ppppbStack_68;
      auVar7 = folly::detail::str_to_floating<double>((Range *)&local_60);
      dVar6 = auVar7._8_8_;
      uVar4 = auVar7._0_8_;
      param_1 = extraout_d0;
      if ((uVar4 & 0xff) == 1) {
        local_40 = 1;
        local_50 = local_60;
        ppppbStack_48 = ppppbStack_58;
        for (pppppbVar1 = (byte *****)local_60; (byte *****)ppppbStack_58 != pppppbVar1;
            pppppbVar1 = (byte *****)((long)pppppbVar1 + 1)) {
          if ((*(byte *)pppppbVar1 != 0x20) && (4 < *(byte *)pppppbVar1 - 9)) {
            local_78 = (byte ****)&local_50;
            if (*(long *)(lVar3 + 0x28) != local_38) goto LAB_0011bb94;
            dVar6 = (double)FUN_0011c350(&local_78);
            dVar5 = extraout_x8;
            goto LAB_0011ba7c;
          }
        }
        goto LAB_0011bac8;
      }
    }
    else {
      if (iVar2 != 4) {
LAB_0011bb54:
        if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00113130("int/double/bool/string");
        }
        goto LAB_0011bb94;
      }
      unaff_x20 = (byte *****)(param_2 + 2);
      unaff_x21 = *unaff_x20;
      dVar5 = 9.223372036854776e+18;
      dVar6 = (double)(long)unaff_x21;
      if (9.223372036854776e+18 <= dVar6) {
LAB_0011ba7c:
        if ((dVar6 <= dVar5) &&
           (dVar5 = nextafter(dVar5,0.0),
           (long)(dVar6 - dVar5) <= (long)((long)dVar5 ^ 0x7fffffffffffffffU))) goto LAB_0011babc;
      }
      else if ((-9.223372036854776e+18 < dVar6) ||
              ((-9.223372036854776e+18 <= dVar6 &&
               (dVar5 = nextafter(-9.223372036854776e+18,0.0),
               -0x8000000000000000 - (long)dVar5 <= (long)(dVar6 - dVar5))))) {
LAB_0011babc:
        if (unaff_x21 == (byte ****)(long)dVar6) goto LAB_0011bac8;
      }
      local_60 = (byte ****)unaff_x20;
      param_1 = (double)FUN_0011bc98(&local_50,&local_60);
      if (*(long *)(lVar3 + 0x28) != local_38) goto LAB_0011bb94;
                    /* try { // try from 0011bb10 to 0011bb1b has its CatchHandler @ 0011bb70 */
      uVar4 = FUN_0011bc5c(&local_50);
      param_1 = extraout_d0_00;
    }
    local_60 = (byte ****)&local_70;
    if (*(long *)(lVar3 + 0x28) != local_38) goto LAB_0011bb94;
    param_1 = (double)FUN_0011c20c(&local_60,uVar4 >> 8);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_0011b894();
  }
LAB_0011bb94:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0011bb98  FUN_0011bb98 =====

void FUN_0011bb98(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = &PTR__exception_00122220;
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0011bbd0 to 0011bbd3 has its CatchHandler @ 0011bbd4 */
    uVar2 = FUN_0011bbfc();
                    /* catch() { ... } // from try @ 0011bbd0 with catch @ 0011bbd4 */
    std::exception::~exception((exception *)&local_30);
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_0010f1e0(uVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011bbfc  FUN_0011bbfc =====

void FUN_0011bbfc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar1 = &PTR__exception_00122220;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,PTR_typeinfo_00122570,PTR__exception_00122598);
}


// ===== 0011bc2c  FUN_0011bc2c =====

void FUN_0011bc2c(exception *param_1)

{
  std::exception::~exception(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0011bc50  FUN_0011bc50 =====

char * FUN_0011bc50(void)

{
  return "bad expected access";
}


// ===== 0011bc5c  FUN_0011bc5c =====

void FUN_0011bc5c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x18);
  FUN_0011c1b0(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_typeinfo_00122578,PTR__range_error_00122590);
}


// ===== 0011bc98  FUN_0011bc98 =====

void FUN_0011bc98(undefined8 param_1,undefined8 *param_2)

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
                    /* try { // try from 0011bcc8 to 0011bfb7 has its CatchHandler @ 0011c180 */
  __strlen_chk(PTR_zarray_00122580,7);
  puVar3 = PTR_data_001225c0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  reserve((ulong)&local_68);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_68,0x109968);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_68,(ulong)PTR_zarray_00122580);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_68,0x109c8a);
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
LAB_0011c164:
    if (uVar6 < *(ulong *)puVar3) {
      uVar9 = uVar9 + 1;
    }
    uVar5 = uVar6;
    uVar7 = uVar9;
    if (uVar9 < 3) goto LAB_0011bf94;
  }
  else {
    if (uVar6 < *(ulong *)(puVar3 + 8)) {
      uVar9 = 1;
      goto LAB_0011c164;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x10)) {
      uVar9 = 2;
      goto LAB_0011c164;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x18)) {
      uVar9 = 3;
      goto LAB_0011c164;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x20)) {
      uVar9 = 4;
      goto LAB_0011c164;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x28)) {
      uVar9 = 5;
      goto LAB_0011c164;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x30)) {
      uVar9 = 6;
      goto LAB_0011c164;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x38)) {
      uVar9 = 7;
      goto LAB_0011c164;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x40)) {
      uVar9 = 8;
      goto LAB_0011c164;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x48)) {
      uVar9 = 9;
      goto LAB_0011c164;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x50)) {
      uVar9 = 10;
      goto LAB_0011c164;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x58)) {
      uVar9 = 0xb;
      goto LAB_0011c164;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x60)) {
      uVar9 = 0xc;
      goto LAB_0011c164;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x68)) {
      uVar9 = 0xd;
      goto LAB_0011c164;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x70)) {
      uVar9 = 0xe;
      goto LAB_0011c164;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x78)) {
      uVar9 = 0xf;
      goto LAB_0011c164;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x80)) {
      uVar9 = 0x10;
      goto LAB_0011c164;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x88)) {
      uVar9 = 0x11;
      goto LAB_0011c164;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x90)) {
      uVar9 = 0x12;
      goto LAB_0011c164;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x98)) {
      uVar9 = 0x13;
      goto LAB_0011c164;
    }
    uVar5 = uVar6;
    uVar7 = 0x14;
  }
  do {
    uVar9 = uVar7 - 2;
    uVar6 = uVar5 / 100;
    *(undefined2 *)((long)&uStack_4e + uVar7) =
         *(undefined2 *)(PTR_data_001225c8 + (uVar5 % 100) * 2);
    uVar5 = uVar6;
    uVar7 = uVar9;
  } while (2 < uVar9);
LAB_0011bf94:
  uVar4 = *(undefined2 *)(PTR_data_001225c8 + uVar6 * 2);
  if (uVar9 != 2) {
    local_4c[0] = CONCAT11(local_4c[0]._1_1_,
                           (char)((ushort)*(undefined2 *)(PTR_data_001225c8 + uVar6 * 2) >> 8));
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
                    /* try { // try from 0011bfd4 to 0011bfe3 has its CatchHandler @ 0011c17c */
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


// ===== 0011c1b0  FUN_0011c1b0 =====

void FUN_0011c1b0(runtime_error *param_1,runtime_error *param_2)

{
  runtime_error rVar1;
  
  std::runtime_error::runtime_error(param_1,param_2);
  rVar1 = param_2[0x10];
  *(undefined ***)param_1 = &PTR__range_error_00122278;
  param_1[0x10] = rVar1;
  return;
}


// ===== 0011c1e8  FUN_0011c1e8 =====

void FUN_0011c1e8(range_error *param_1)

{
  std::range_error::~range_error(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0011c20c  FUN_0011c20c =====

void FUN_0011c20c(undefined8 *param_1,undefined4 param_2)

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
                    /* try { // try from 0011c250 to 0011c257 has its CatchHandler @ 0011c258 */
    uVar2 = FUN_0011bc5c(arStack_40);
                    /* catch() { ... } // from try @ 0011c250 with catch @ 0011c258 */
    std::range_error::~range_error(arStack_40);
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_0010f1e0(uVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011c280  FUN_0011c280 =====

void FUN_0011c280(undefined1 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_38;
  undefined1 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = &PTR__exception_001222b8;
  local_30 = param_1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0011c2bc to 0011c2c3 has its CatchHandler @ 0011c2c4 */
    uVar2 = FUN_0011c2ec(&local_38);
                    /* catch() { ... } // from try @ 0011c2bc with catch @ 0011c2c4 */
    std::exception::~exception((exception *)&local_38);
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_0010f1e0(uVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011c2ec  FUN_0011c2ec =====

void FUN_0011c2ec(long param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)__cxa_allocate_exception(0x10);
  uVar1 = *(undefined1 *)(param_1 + 8);
  *puVar2 = &PTR__exception_001222b8;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar2,PTR_typeinfo_00122588,PTR__exception_00122598);
}


// ===== 0011c32c  FUN_0011c32c =====

void FUN_0011c32c(exception *param_1)

{
  std::exception::~exception(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0011c350  FUN_0011c350 =====

void FUN_0011c350(undefined8 *param_1)

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
    if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_0011c3fc;
                    /* try { // try from 0011c39c to 0011c3a3 has its CatchHandler @ 0011c3d8 */
    FUN_0011bc5c(arStack_40);
    param_1 = extraout_x8;
    uVar3 = extraout_w9;
  }
  if (uVar3 == 2) {
    if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_0011c3fc;
    FUN_0011c280(*(undefined1 *)param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    uVar2 = FUN_0011bb98();
                    /* catch() { ... } // from try @ 0011c39c with catch @ 0011c3d8 */
    std::range_error::~range_error(arStack_40);
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_0010f1e0(uVar2);
    }
  }
LAB_0011c3fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011c400  FUN_0011c400 =====

basic_ostream * FUN_0011c400(basic_ostream *param_1,long param_2,long param_3)

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
                    /* try { // try from 0011c438 to 0011c443 has its CatchHandler @ 0011c664 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry(local_90,param_1);
  if (local_90[0] == (sentry)0x0) goto LAB_0011c5ec;
  lVar8 = *(long *)(*(long *)param_1 + -0x18);
  uVar3 = *(uint *)(param_1 + lVar8 + 0x90);
  plVar9 = *(long **)(param_1 + lVar8 + 0x28);
  uVar1 = *(uint *)(param_1 + lVar8 + 8);
  if (uVar3 == 0xffffffff) {
                    /* try { // try from 0011c46c to 0011c477 has its CatchHandler @ 0011c654 */
    std::__ndk1::ios_base::getloc();
                    /* try { // try from 0011c478 to 0011c497 has its CatchHandler @ 0011c640 */
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
                    /* try { // try from 0011c4e4 to 0011c52f has its CatchHandler @ 0011c654 */
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
                    /* try { // try from 0011c574 to 0011c57f has its CatchHandler @ 0011c628 */
        uVar6 = (**(code **)(*plVar9 + 0x60))(plVar9,pvVar10,__n);
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
        if (uVar6 != __n) goto LAB_0011c5d0;
      }
      lVar11 = (param_2 + param_3) - lVar7;
                    /* try { // try from 0011c5b0 to 0011c5bf has its CatchHandler @ 0011c654 */
      if ((lVar11 < 1) ||
         (lVar7 = (**(code **)(*plVar9 + 0x60))(plVar9,lVar7,lVar11), lVar7 == lVar11)) {
        *(undefined8 *)(param_1 + lVar8 + 0x18) = 0;
        goto LAB_0011c5ec;
      }
    }
  }
LAB_0011c5d0:
                    /* try { // try from 0011c5e4 to 0011c5eb has its CatchHandler @ 0011c650 */
  std::__ndk1::ios_base::clear((int)param_1 + (int)*(undefined8 *)(*(long *)param_1 + -0x18));
LAB_0011c5ec:
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(local_90);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011c6b0  FUN_0011c6b0 =====

void FUN_0011c6b0(int *param_1,byte *param_2)

{
  byte bVar1;
  
  if (param_1[0xc] == 1) {
    bVar1 = facebook::jsi::Value::asBool();
  }
  else {
    if (param_1[0xc] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0011b894();
    }
    if (*param_1 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00113130(*(undefined8 *)PTR_name_001225d8);
    }
    bVar1 = (char)param_1[2] != '\0';
  }
  *param_2 = bVar1 & 1;
  return;
}


// ===== 0011c71c  FUN_0011c71c =====

void FUN_0011c71c(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  byte local_50 [8];
  ulong local_48;
  int *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_0011c858(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 3) {
    piVar2 = (int *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      piVar2 = local_40;
    }
    if ((short)*piVar2 == 0x6f69 && *(char *)((long)piVar2 + 2) == 's') {
      *param_2 = 1;
joined_r0x0011c7e8:
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return;
      }
      goto LAB_0011c854;
    }
  }
  else if (uVar1 == 6) {
    piVar2 = (int *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      piVar2 = local_40;
    }
    if (*piVar2 == 0x656e696c && (short)piVar2[1] == 0x7261) {
      *param_2 = 0;
      goto joined_r0x0011c7e8;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0011c824 to 0011c827 has its CatchHandler @ 0011c828 */
    abort();
  }
LAB_0011c854:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011c858  FUN_0011c858 =====

void FUN_0011c858(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
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
                    /* try { // try from 0011c8e0 to 0011c8ef has its CatchHandler @ 0011c988 */
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
      FUN_00113130(*(undefined8 *)PTR_name_001225e0);
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_0011b894();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011c9c0  FUN_0011c9c0 =====

void FUN_0011c9c0(undefined8 param_1,byte *param_2)

{
  long lVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0011c858(&local_40);
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


// ===== 0011ca30  FUN_0011ca30 =====

void FUN_0011ca30(void)

{
  (*(code *)PTR_00122600)();
  return;
}


// ===== 0011ca50  <EXTERNAL>::__cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00122608)();
  return;
}


// ===== 0011ca60  <EXTERNAL>::__cxa_atexit =====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00122610)();
  return;
}


// ===== 0011ca70  <EXTERNAL>::__register_atfork =====

void __register_atfork(void)

{
  (*(code *)PTR___register_atfork_00122618)();
  return;
}


// ===== 0011ca80  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc =====

void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc(void)

{
  (*(code *)
    PTR__ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc_00122620
  )();
  return;
}


// ===== 0011ca90  <EXTERNAL>::folly::dynamic::dynamic =====

void __thiscall folly::dynamic::dynamic(dynamic *this,dynamic *param_1)

{
  (*(code *)PTR_dynamic_00122628)();
  return;
}


// ===== 0011caa0  <EXTERNAL>::folly::dynamic::operator= =====

void __thiscall folly::dynamic::operator=(dynamic *this,dynamic *param_1)

{
  (*(code *)PTR_operator__00122630)();
  return;
}


// ===== 0011cab0  <EXTERNAL>::folly::TypeError::TypeError =====

void __thiscall folly::TypeError::TypeError(void)

{
  (*(code *)PTR_TypeError_00122638)();
  return;
}


// ===== 0011cac0  <EXTERNAL>::std::runtime_error::~runtime_error =====

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
  (*(code *)PTR__runtime_error_00122640)();
  return;
}


// ===== 0011cad0  <EXTERNAL>::__cxa_allocate_exception =====

void __cxa_allocate_exception(void)

{
  (*(code *)PTR___cxa_allocate_exception_00122648)();
  return;
}


// ===== 0011cae0  <EXTERNAL>::__cxa_throw =====

void __cxa_throw(void)

{
  (*(code *)PTR___cxa_throw_00122650)();
  return;
}


// ===== 0011caf0  <EXTERNAL>::std::runtime_error::runtime_error =====

void __thiscall std::runtime_error::runtime_error(runtime_error *this,runtime_error *param_1)

{
  (*(code *)PTR_runtime_error_00122658)();
  return;
}


// ===== 0011cb00  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00122660)();
  return;
}


// ===== 0011cb10  <EXTERNAL>::__cxa_free_exception =====

void __cxa_free_exception(void)

{
  (*(code *)PTR___cxa_free_exception_00122668)();
  return;
}


// ===== 0011cb20  <EXTERNAL>::std::logic_error::logic_error =====

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
  (*(code *)PTR_logic_error_00122670)();
  return;
}


// ===== 0011cb30  <EXTERNAL>::std::bad_array_new_length::bad_array_new_length =====

void __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
  (*(code *)PTR_bad_array_new_length_00122678)();
  return;
}


// ===== 0011cb40  <EXTERNAL>::operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00122680)();
  return pvVar1;
}


// ===== 0011cb50  <EXTERNAL>::strlen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00122688)();
  return sVar1;
}


// ===== 0011cb60  <EXTERNAL>::folly::dynamic::hash =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::dynamic::hash(void)

{
  (*(code *)PTR_hash_00122690)();
  return;
}


// ===== 0011cb70  <EXTERNAL>::folly::operator== =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::operator==(dynamic *param_1,dynamic *param_2)

{
  (*(code *)PTR_operator___00122698)();
  return;
}


// ===== 0011cb80  <EXTERNAL>::std::__ndk1::__next_prime =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__next_prime(ulong param_1)

{
  (*(code *)PTR___next_prime_001226a0)();
  return;
}


// ===== 0011cb90  <EXTERNAL>::folly::dynamic::destroy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::dynamic::destroy(void)

{
  (*(code *)PTR_destroy_001226a8)();
  return;
}


// ===== 0011cba0  facebook::react::NativeKeyboardControllerSpecJSI::NativeKeyboardControllerSpecJSI =====

void __thiscall
facebook::react::NativeKeyboardControllerSpecJSI::NativeKeyboardControllerSpecJSI
          (NativeKeyboardControllerSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeKeyboardControllerSpecJSI_001226b0)();
  return;
}


// ===== 0011cbb0  facebook::react::NativeStatusBarManagerCompatSpecJSI::NativeStatusBarManagerCompatSpecJSI =====

void __thiscall
facebook::react::NativeStatusBarManagerCompatSpecJSI::NativeStatusBarManagerCompatSpecJSI
          (NativeStatusBarManagerCompatSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeStatusBarManagerCompatSpecJSI_001226b8)();
  return;
}


// ===== 0011cbc0  <EXTERNAL>::facebook::react::JavaTurboModule::JavaTurboModule =====

void __thiscall
facebook::react::JavaTurboModule::JavaTurboModule(JavaTurboModule *this,InitParams *param_1)

{
  (*(code *)PTR_JavaTurboModule_001226c0)();
  return;
}


// ===== 0011cbd0  <EXTERNAL>::facebook::react::JavaTurboModule::~JavaTurboModule =====

void __thiscall facebook::react::JavaTurboModule::~JavaTurboModule(JavaTurboModule *this)

{
  (*(code *)PTR__JavaTurboModule_001226c8)();
  return;
}


// ===== 0011cbe0  <EXTERNAL>::facebook::react::JavaTurboModule::invokeJavaMethod =====

void facebook::react::JavaTurboModule::invokeJavaMethod(void)

{
  (*(code *)PTR_invokeJavaMethod_001226d0)();
  return;
}


// ===== 0011cbf0  <EXTERNAL>::__cxa_begin_catch =====

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_001226d8)();
  return;
}


// ===== 0011cc00  <EXTERNAL>::std::terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
  (*(code *)PTR_terminate_001226e0)();
  return;
}


// ===== 0011cc10  <EXTERNAL>::memcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_001226e8)((int)__s1);
  return iVar1;
}


// ===== 0011cc20  <EXTERNAL>::std::__ndk1::__shared_weak_count::~__shared_weak_count =====

void __thiscall std::__ndk1::__shared_weak_count::~__shared_weak_count(__shared_weak_count *this)

{
  (*(code *)PTR____shared_weak_count_001226f0)();
  return;
}


// ===== 0011cc30  <EXTERNAL>::facebook::jsi::Value::asObject =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asObject(IRuntime *param_1)

{
  (*(code *)PTR_asObject_001226f8)();
  return;
}


// ===== 0011cc40  <EXTERNAL>::facebook::jsi::Value::~Value =====

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
  (*(code *)PTR__Value_00122700)();
  return;
}


// ===== 0011cc50  <EXTERNAL>::facebook::jsi::Value::Value =====

void __thiscall facebook::jsi::Value::Value(Value *this,IRuntime *param_1,Value *param_2)

{
  (*(code *)PTR_Value_00122708)();
  return;
}


// ===== 0011cc60  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init_copy_ctor_external =====

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
__init_copy_ctor_external
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  (*(code *)PTR___init_copy_ctor_external_00122710)();
  return;
}


// ===== 0011cc70  <EXTERNAL>::facebook::react::EventEmitter::dispatchEvent =====

void facebook::react::EventEmitter::dispatchEvent(void)

{
  (*(code *)PTR_dispatchEvent_00122718)();
  return;
}


// ===== 0011cc80  <EXTERNAL>::__strlen_chk =====

void __strlen_chk(void)

{
  (*(code *)PTR___strlen_chk_00122720)();
  return;
}


// ===== 0011cc90  <EXTERNAL>::facebook::jsi::Value::~Value =====

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
  (*(code *)PTR__Value_00122728)();
  return;
}


// ===== 0011cca0  <EXTERNAL>::facebook::react::HostPlatformViewProps::HostPlatformViewProps =====

void __thiscall
facebook::react::HostPlatformViewProps::HostPlatformViewProps
          (HostPlatformViewProps *this,PropsParserContext *param_1,HostPlatformViewProps *param_2,
          RawProps *param_3,function *param_4)

{
  (*(code *)PTR_HostPlatformViewProps_00122730)();
  return;
}


// ===== 0011ccb0  <EXTERNAL>::__cxa_guard_acquire =====

void __cxa_guard_acquire(void)

{
  (*(code *)PTR___cxa_guard_acquire_00122738)();
  return;
}


// ===== 0011ccc0  <EXTERNAL>::__cxa_guard_release =====

void __cxa_guard_release(void)

{
  (*(code *)PTR___cxa_guard_release_00122740)();
  return;
}


// ===== 0011ccd0  <EXTERNAL>::facebook::react::HostPlatformViewProps::getDiffProps =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::HostPlatformViewProps::getDiffProps(Props *param_1)

{
  (*(code *)PTR_getDiffProps_00122748)();
  return;
}


// ===== 0011cce0  <EXTERNAL>::folly::dynamic::operator[] =====

void folly::dynamic::operator[](void)

{
  (*(code *)PTR_operator___00122750)();
  return;
}


// ===== 0011ccf0  <EXTERNAL>::abort =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00122758)();
  return;
}


// ===== 0011cd00  <EXTERNAL>::facebook::react::RawProps::at =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::at(char *param_1,char *param_2,char *param_3)

{
  (*(code *)PTR_at_00122760)();
  return;
}


// ===== 0011cd10  <EXTERNAL>::google::LogMessage::LogMessage =====

void __thiscall
google::LogMessage::LogMessage(LogMessage *this,char *param_1,int param_2,int param_3)

{
  (*(code *)PTR_LogMessage_00122768)(this,param_1,param_2,param_3);
  return;
}


// ===== 0011cd20  <EXTERNAL>::google::LogMessage::stream =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void google::LogMessage::stream(void)

{
  (*(code *)PTR_stream_00122770)();
  return;
}


// ===== 0011cd30  <EXTERNAL>::facebook::react::RawPropsKey::operator.cast.to.basic_string =====

void __thiscall facebook::react::RawPropsKey::operator_cast_to_basic_string(RawPropsKey *this)

{
  (*(code *)PTR_operator_cast_to_basic_string_00122778)();
  return;
}


// ===== 0011cd40  <EXTERNAL>::google::LogMessage::~LogMessage =====

void __thiscall google::LogMessage::~LogMessage(LogMessage *this)

{
  (*(code *)PTR__LogMessage_00122780)();
  return;
}


// ===== 0011cd50  <EXTERNAL>::__cxa_end_catch =====

void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_00122788)();
  return;
}


// ===== 0011cd60  <EXTERNAL>::nextafter =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double nextafter(double __x,double __y)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_nextafter_00122790)();
  return dVar1;
}


// ===== 0011cd70  <EXTERNAL>::std::range_error::~range_error =====

void __thiscall std::range_error::~range_error(range_error *this)

{
  (*(code *)PTR__range_error_00122798)();
  return;
}


// ===== 0011cd80  <EXTERNAL>::folly::makeConversionError =====

void folly::makeConversionError(void)

{
  (*(code *)PTR_makeConversionError_001227a0)();
  return;
}


// ===== 0011cd90  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::reserve =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     reserve(ulong param_1)

{
  (*(code *)PTR_reserve_001227a8)();
  return;
}


// ===== 0011cda0  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     append(char *param_1,ulong param_2)

{
  (*(code *)PTR_append_001227b0)();
  return;
}


// ===== 0011cdb0  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     push_back(char param_1)

{
  (*(code *)PTR_push_back_001227b8)(param_1);
  return;
}


// ===== 0011cdc0  <EXTERNAL>::folly::detail::str_to_floating<double> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::detail::str_to_floating<double>(Range *param_1)

{
  (*(code *)PTR_str_to_floating<double>_001227c0)();
  return;
}


// ===== 0011cdd0  <EXTERNAL>::std::exception::~exception =====

void __thiscall std::exception::~exception(exception *this)

{
  (*(code *)PTR__exception_001227c8)();
  return;
}


// ===== 0011cde0  <EXTERNAL>::facebook::jsi::Value::asNumber =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asNumber(void)

{
  (*(code *)PTR_asNumber_001227d0)();
  return;
}


// ===== 0011cdf0  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry =====

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry
          (sentry *this,basic_ostream *param_1)

{
  (*(code *)PTR_sentry_001227d8)();
  return;
}


// ===== 0011ce00  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry =====

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(sentry *this)

{
  (*(code *)PTR__sentry_001227e0)();
  return;
}


// ===== 0011ce10  <EXTERNAL>::std::__ndk1::ios_base::__set_badbit_and_consider_rethrow =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::__set_badbit_and_consider_rethrow(void)

{
  (*(code *)PTR___set_badbit_and_consider_rethrow_001227e8)();
  return;
}


// ===== 0011ce20  <EXTERNAL>::std::__ndk1::ios_base::getloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::getloc(void)

{
  (*(code *)PTR_getloc_001227f0)();
  return;
}


// ===== 0011ce30  <EXTERNAL>::std::__ndk1::locale::~locale =====

void __thiscall std::__ndk1::locale::~locale(locale *this)

{
  (*(code *)PTR__locale_001227f8)();
  return;
}


// ===== 0011ce40  <EXTERNAL>::std::__ndk1::locale::use_facet =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::locale::use_facet(id *param_1)

{
  (*(code *)PTR_use_facet_00122800)();
  return;
}


// ===== 0011ce50  <EXTERNAL>::std::__ndk1::ios_base::clear =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::clear(uint param_1)

{
  (*(code *)PTR_clear_00122808)(param_1);
  return;
}


// ===== 0011ce60  <EXTERNAL>::facebook::jsi::Value::asBool =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asBool(void)

{
  (*(code *)PTR_asBool_00122810)();
  return;
}


// ===== 0011ce70  <EXTERNAL>::facebook::jsi::Value::asString =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asString(IRuntime *param_1)

{
  (*(code *)PTR_asString_00122818)();
  return;
}


// ===== 0011ce80  <EXTERNAL>::dl_iterate_phdr =====

void dl_iterate_phdr(void)

{
  (*(code *)PTR_dl_iterate_phdr_00122820)();
  return;
}


// ===== 0011ce90  <EXTERNAL>::fwrite =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00122828)();
  return sVar1;
}


// ===== 0011cea0  <EXTERNAL>::memmove =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00122830)();
  return pvVar1;
}


// ===== 0011ceb0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00122838)();
  return;
}


// ===== 0011cec0  <EXTERNAL>::malloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00122840)();
  return pvVar1;
}


// ===== 0011ced0  <EXTERNAL>::fprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00122848)((int)__stream);
  return iVar1;
}


// ===== 0011cee0  <EXTERNAL>::__stack_chk_fail =====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00122850)();
  return;
}


// ===== 0011cef0  <EXTERNAL>::pthread_rwlock_wrlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_wrlock_00122858)((int)__rwlock);
  return iVar1;
}


// ===== 0011cf00  <EXTERNAL>::syscall =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_syscall_00122860)();
  return lVar1;
}


// ===== 0011cf10  <EXTERNAL>::pthread_rwlock_unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_unlock_00122868)((int)__rwlock);
  return iVar1;
}


// ===== 0011cf20  <EXTERNAL>::memcpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00122870)();
  return pvVar1;
}


// ===== 0011cf30  <EXTERNAL>::getpid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_00122878)();
  return _Var1;
}


// ===== 0011cf40  <EXTERNAL>::pthread_rwlock_rdlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_rdlock_00122880)((int)__rwlock);
  return iVar1;
}


// ===== 0011cf50  <EXTERNAL>::memset =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00122888)(__s,__c);
  return pvVar1;
}


// ===== 0011cf60  <EXTERNAL>::fflush =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00122890)((int)__stream);
  return iVar1;
}


// ===== 0012b000  <EXTERNAL>::__cxa_finalize =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b008  <EXTERNAL>::__cxa_atexit =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b010  <EXTERNAL>::__register_atfork =====

/* WARNING: Control flow encountered bad instruction data */

void __register_atfork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b018  <EXTERNAL>::__gxx_personality_v0 =====

/* WARNING: Control flow encountered bad instruction data */

void __gxx_personality_v0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b020  <EXTERNAL>::folly::dynamic::dynamic =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall folly::dynamic::dynamic(dynamic *this,dynamic *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b028  <EXTERNAL>::folly::dynamic::operator= =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall folly::dynamic::operator=(dynamic *this,dynamic *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b030  <EXTERNAL>::folly::TypeError::TypeError =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall folly::TypeError::TypeError(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b038  <EXTERNAL>::std::runtime_error::~runtime_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b040  <EXTERNAL>::__cxa_allocate_exception =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_allocate_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b048  <EXTERNAL>::__cxa_throw =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_throw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b050  <EXTERNAL>::std::runtime_error::runtime_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::runtime_error::runtime_error(runtime_error *this,runtime_error *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b058  <EXTERNAL>::std::runtime_error::what =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::runtime_error::what(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b060  <EXTERNAL>::operator.delete =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b068  <EXTERNAL>::__cxa_free_exception =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_free_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b070  <EXTERNAL>::std::length_error::~length_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::length_error::~length_error(length_error *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b078  <EXTERNAL>::std::logic_error::logic_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b080  <EXTERNAL>::std::bad_array_new_length::bad_array_new_length =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b088  <EXTERNAL>::std::bad_array_new_length::~bad_array_new_length =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_array_new_length::~bad_array_new_length(bad_array_new_length *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b090  <EXTERNAL>::operator.new =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b098  <EXTERNAL>::strlen =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b0a0  <EXTERNAL>::folly::dynamic::hash =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::dynamic::hash(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b0a8  <EXTERNAL>::folly::operator== =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::operator==(dynamic *param_1,dynamic *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b0b0  <EXTERNAL>::std::__ndk1::__next_prime =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__next_prime(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b0b8  <EXTERNAL>::folly::dynamic::destroy =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::dynamic::destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b0f0  <EXTERNAL>::facebook::react::JavaTurboModule::JavaTurboModule =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
facebook::react::JavaTurboModule::JavaTurboModule(JavaTurboModule *this,InitParams *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b0f8  <EXTERNAL>::facebook::jsi::HostObject::set =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::HostObject::set(Runtime *param_1,PropNameID *param_2,Value *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b100  <EXTERNAL>::facebook::react::JavaTurboModule::~JavaTurboModule =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::JavaTurboModule::~JavaTurboModule(JavaTurboModule *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b108  <EXTERNAL>::facebook::react::JavaTurboModule::invokeJavaMethod =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::JavaTurboModule::invokeJavaMethod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b110  <EXTERNAL>::__cxa_begin_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_begin_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b118  <EXTERNAL>::std::terminate =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b120  <EXTERNAL>::memcmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b128  <EXTERNAL>::std::__ndk1::__shared_weak_count::~__shared_weak_count =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::__shared_weak_count::~__shared_weak_count(__shared_weak_count *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b130  <EXTERNAL>::std::__ndk1::__shared_weak_count::__get_deleter =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__get_deleter(type_info *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b138  <EXTERNAL>::facebook::jsi::Value::asObject =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asObject(IRuntime *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b140  <EXTERNAL>::facebook::jsi::Value::~Value =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b148  <EXTERNAL>::facebook::jsi::Value::Value =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::Value::Value(Value *this,IRuntime *param_1,Value *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b168  <EXTERNAL>::facebook::react::EventEmitter::dispatchEvent =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::EventEmitter::dispatchEvent(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b170  <EXTERNAL>::__strlen_chk =====

/* WARNING: Control flow encountered bad instruction data */

void __strlen_chk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b178  <EXTERNAL>::facebook::jsi::Value::~Value =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b180  <EXTERNAL>::facebook::react::HostPlatformViewProps::HostPlatformViewProps =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
facebook::react::HostPlatformViewProps::HostPlatformViewProps
          (HostPlatformViewProps *this,PropsParserContext *param_1,HostPlatformViewProps *param_2,
          RawProps *param_3,function *param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b188  <EXTERNAL>::__cxa_guard_acquire =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_acquire(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b190  <EXTERNAL>::__cxa_guard_release =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b198  <EXTERNAL>::facebook::react::HostPlatformViewProps::getDiffProps =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::HostPlatformViewProps::getDiffProps(Props *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b1a0  <EXTERNAL>::folly::dynamic::operator[] =====

/* WARNING: Control flow encountered bad instruction data */

void folly::dynamic::operator[](void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b1a8  <EXTERNAL>::facebook::react::HostPlatformViewProps::getDiffPropsImplementationTarget =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::HostPlatformViewProps::getDiffPropsImplementationTarget(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b1b0  <EXTERNAL>::facebook::react::Props::getDiffPropsImplementationTarget =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::Props::getDiffPropsImplementationTarget(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b1b8  <EXTERNAL>::abort =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b1c0  <EXTERNAL>::facebook::react::RawProps::at =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::at(char *param_1,char *param_2,char *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b1c8  <EXTERNAL>::google::LogMessage::LogMessage =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
google::LogMessage::LogMessage(LogMessage *this,char *param_1,int param_2,int param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b1d0  <EXTERNAL>::google::LogMessage::stream =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void google::LogMessage::stream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b1d8  <EXTERNAL>::facebook::react::RawPropsKey::operator.cast.to.basic_string =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::RawPropsKey::operator_cast_to_basic_string(RawPropsKey *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b1e0  <EXTERNAL>::google::LogMessage::~LogMessage =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall google::LogMessage::~LogMessage(LogMessage *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0012b1e8  <EXTERNAL>::__cxa_end_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_end_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


