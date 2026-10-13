// ===== 0010ba20  _FINI_1 =====

void _FINI_1(void)

{
  __cxa_finalize(&PTR_LOOP_00119760);
  return;
}


// ===== 0010ba30  FUN_0010ba30 =====

void FUN_0010ba30(void)

{
  return;
}


// ===== 0010ba38  _FINI_0 =====

void _FINI_0(void)

{
  FUN_0010ba30();
  return;
}


// ===== 0010ba40  FUN_0010ba40 =====

void FUN_0010ba40(code *UNRECOVERED_JUMPTABLE)

{
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010ba4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


// ===== 0010ba54  FUN_0010ba54 =====

void FUN_0010ba54(undefined8 param_1)

{
  __cxa_atexit(FUN_0010ba40,param_1,&PTR_LOOP_00119760);
  return;
}


// ===== 0010ba70  FUN_0010ba70 =====

void FUN_0010ba70(void)

{
  __register_atfork();
  return;
}


// ===== 0010ba80  FUN_0010ba80 =====

undefined8 FUN_0010ba80(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_80 [24];
  code *local_68;
  long local_38;
  
  FUN_0010bdc8(param_2,param_1);
  iVar2 = FUN_0010beec(param_2);
  while( true ) {
    if (iVar2 == 0) {
      return 5;
    }
    if (iVar2 < 0) break;
    FUN_0010be70(param_2,0xfffffffe,&local_38);
    iVar2 = FUN_0010bf00(param_2,auStack_80);
    if (iVar2 != 0) {
      return 2;
    }
    if (local_68 != (code *)0x0) {
      uVar3 = 6;
      if (local_38 != param_3[3]) {
        uVar3 = 2;
      }
      iVar2 = (*local_68)(1,uVar3,*param_3,param_3,param_2);
      puVar1 = PTR___sF_0011a248;
      if (iVar2 != 8) {
        if (iVar2 != 7) {
          return 2;
        }
        FUN_0010bf40(param_2);
        return 2;
      }
      if (local_38 == param_3[3]) {
        fprintf((FILE *)(PTR___sF_0011a248 + 0x130),"libunwind: %s - %s\n","unwind_phase2",
                "during phase1 personality function said it would stop here, but now in phase2 it did not stop here"
               );
        fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    iVar2 = FUN_0010beec(param_2);
  }
  return 2;
}


// ===== 0010bbb4  FUN_0010bbb4 =====

void FUN_0010bbb4(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_4a0 [624];
  undefined1 auStack_230 [528];
  
  FUN_0010bd2c(auStack_230);
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_0010ba80(auStack_230,auStack_4a0,param_1);
  }
  else {
    FUN_0010bc38(auStack_230,auStack_4a0,param_1,*(long *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = PTR___sF_0011a248;
  fprintf((FILE *)(PTR___sF_0011a248 + 0x130),"libunwind: %s - %s\n","_Unwind_Resume",
          "_Unwind_Resume() can\'t return");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0010bc38  FUN_0010bc38 =====

void FUN_0010bc38(undefined8 param_1,undefined8 param_2,undefined8 *param_3,code *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_78 [24];
  code *local_60;
  
  FUN_0010bdc8(param_2,param_1);
  iVar1 = FUN_0010beec(param_2);
  while( true ) {
    if (iVar1 < 1) {
      (*param_4)(1,0x1a,*param_3,param_3,param_2,param_5);
      return;
    }
    iVar1 = FUN_0010bf00(param_2,auStack_78);
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
      FUN_0010bf40(param_2);
    }
    iVar1 = FUN_0010beec(param_2);
  }
  return;
}


// ===== 0010bd2c  FUN_0010bd2c =====

undefined8
FUN_0010bd2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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


// ===== 0010bdc8  FUN_0010bdc8 =====

undefined8 FUN_0010bdc8(undefined8 *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = &PTR_FUN_00119778;
  param_1[1] = &DAT_0011e590;
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
  FUN_0010c790(param_1,0);
  return 0;
}


// ===== 0010be70  FUN_0010be70 =====

undefined8 FUN_0010be70(long *param_1,undefined4 param_2,undefined8 *param_3)

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


// ===== 0010beec  FUN_0010beec =====

void FUN_0010beec(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010befc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,1);
  return;
}


// ===== 0010bf00  FUN_0010bf00 =====

undefined4 FUN_0010bf00(long *param_1,long param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x48))();
  uVar1 = 0xffffe66b;
  if (*(long *)(param_2 + 8) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 0010bf40  FUN_0010bf40 =====

undefined8 FUN_0010bf40(long *param_1)

{
  (**(code **)(*param_1 + 0x50))();
  return 0xffffe674;
}


// ===== 0010bf68  FUN_0010bf68 =====

char * FUN_0010bf68(undefined8 param_1,uint *param_2,undefined8 *param_3,long *param_4,ulong param_5
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
      pcVar7 = (char *)FUN_0010c0f8(param_1,lVar8,param_4);
      if (pcVar7 != (char *)0x0) {
        return pcVar7;
      }
    }
    else if (*param_4 != lVar8) {
      return "CIE start does not match";
    }
    lVar8 = (long)puVar10 + uVar9;
    local_48 = puVar10 + 1;
    lVar3 = FUN_0010df50(param_1,&local_48,lVar8,(char)param_4[3],0);
    lVar4 = FUN_0010df50(param_1,&local_48,lVar8,*(byte *)(param_4 + 3) & 0xf,0);
    cVar1 = *(char *)((long)param_4 + 0x31);
    param_3[5] = 0;
    puVar10 = local_48;
    if (cVar1 != '\0') {
      lVar5 = FUN_0010e2dc(&local_48,lVar8);
      puVar2 = local_48;
      puVar10 = (uint *)((long)local_48 + lVar5);
      if ((*(byte *)((long)param_4 + 0x19) != 0xff) &&
         (lVar5 = FUN_0010df50(param_1,&local_48,lVar8,*(byte *)((long)param_4 + 0x19) & 0xf,0),
         lVar5 != 0)) {
        local_48 = puVar2;
        uVar6 = FUN_0010df50(param_1,&local_48,lVar8,*(undefined1 *)((long)param_4 + 0x19),0);
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


// ===== 0010c0f8  FUN_0010c0f8 =====

char * FUN_0010c0f8(undefined8 param_1,uint *param_2,long *param_3)

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
      uVar7 = FUN_0010e2dc(&local_48,pbVar1);
      uVar13 = 0;
      uVar14 = 0;
      *(undefined4 *)(param_3 + 5) = uVar7;
      puVar5 = PTR___sF_0011a248;
      pbVar11 = local_48;
      pbVar15 = local_48;
      do {
        pbVar12 = pbVar11;
        if (pbVar15 == pbVar1) {
          fprintf((FILE *)(PTR___sF_0011a248 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
        uVar6 = FUN_0010e2dc(&local_48,pbVar1);
        *(undefined1 *)((long)param_3 + 0x32) = uVar6;
        bVar2 = *pbVar18;
      }
      if (bVar2 == 0x7a) {
        FUN_0010e2dc(&local_48,pbVar1);
LAB_0010c278:
        bVar2 = *pbVar18;
        if (bVar2 < 0x50) {
          if (bVar2 < 0x47) {
            if (bVar2 != 0x42) {
              if (bVar2 != 0) goto LAB_0010c318;
              goto LAB_0010c35c;
            }
            *(undefined1 *)((long)param_3 + 0x33) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_0010c278;
          }
          if (bVar2 == 0x47) {
            *(undefined1 *)((long)param_3 + 0x34) = 1;
            goto LAB_0010c318;
          }
          if (bVar2 == 0x4c) {
            pbVar18 = pbVar18 + 1;
            *(byte *)((long)param_3 + 0x19) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_0010c278;
          }
        }
        else if (bVar2 < 0x53) {
          if (bVar2 == 0x50) {
            bVar2 = *local_48;
            *(byte *)((long)param_3 + 0x1a) = bVar2;
            *(char *)((long)param_3 + 0x1b) = (char)(local_48 + 1) - (char)param_2;
            local_48 = local_48 + 1;
            lVar8 = FUN_0010df50(param_1,&local_48,pbVar1,bVar2,0);
            param_3[4] = lVar8;
            pbVar18 = pbVar18 + 1;
            goto LAB_0010c278;
          }
          if (bVar2 == 0x52) {
            pbVar18 = pbVar18 + 1;
            *(byte *)(param_3 + 3) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_0010c278;
          }
        }
        else {
          if (bVar2 == 0x53) {
            *(undefined1 *)(param_3 + 6) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_0010c278;
          }
          if (bVar2 == 0x7a) {
            *(undefined1 *)((long)param_3 + 0x31) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_0010c278;
          }
        }
LAB_0010c318:
        pbVar18 = pbVar18 + 1;
        goto LAB_0010c278;
      }
LAB_0010c35c:
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


// ===== 0010c3c0  FUN_0010c3c0 =====

void FUN_0010c3c0(void)

{
  return;
}


// ===== 0010c3c8  FUN_0010c3c8 =====

void FUN_0010c3c8(void)

{
  return;
}


// ===== 0010c3d0  FUN_0010c3d0 =====

bool FUN_0010c3d0(undefined8 param_1,uint param_2)

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


// ===== 0010c414  FUN_0010c414 =====

undefined8 FUN_0010c414(long param_1,uint param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_0011a248;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_0010c47c:
      return *(undefined8 *)(param_1 + 0x108);
    }
    if (param_2 == 0xffffffff) goto LAB_0010c470;
    if (param_2 == 0x1d) {
      return *(undefined8 *)(param_1 + 0xf8);
    }
  }
  else if ((int)param_2 < 0x20) {
    if (param_2 == 0x1e) {
      return *(undefined8 *)(param_1 + 0x100);
    }
    if (param_2 == 0x1f) goto LAB_0010c47c;
  }
  else {
    if (param_2 == 0x22) {
      return *(undefined8 *)(param_1 + 0x118);
    }
    if (param_2 == 0x20) {
LAB_0010c470:
      return *(undefined8 *)(param_1 + 0x110);
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_0011a248 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8);
}


// ===== 0010c4fc  FUN_0010c4fc =====

void FUN_0010c4fc(long param_1,uint param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_0011a248;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_0010c564:
      *(undefined8 *)(param_1 + 0x108) = param_3;
      return;
    }
    if (param_2 == 0xffffffff) goto LAB_0010c558;
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
    if (param_2 == 0x1f) goto LAB_0010c564;
  }
  else {
    if (param_2 == 0x22) {
      *(undefined8 *)(param_1 + 0x118) = param_3;
      return;
    }
    if (param_2 == 0x20) {
LAB_0010c558:
      *(undefined8 *)(param_1 + 0x110) = param_3;
      return;
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_0011a248 + 0x130),"libunwind: %s - %s\n","setRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8) = param_3;
  return;
}


// ===== 0010c5e4  FUN_0010c5e4 =====

bool FUN_0010c5e4(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffffffe0) == 0x40;
}


// ===== 0010c5f8  FUN_0010c5f8 =====

undefined1  [16] FUN_0010c5f8(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + (long)param_2 * 8 + -0xe0);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 0010c608  FUN_0010c608 =====

void FUN_0010c608(undefined8 param_1,long param_2,int param_3)

{
  *(undefined8 *)(param_2 + (long)param_3 * 8 + -0xe0) = param_1;
  return;
}


// ===== 0010c618  FUN_0010c618 =====

ulong FUN_0010c618(long *param_1,uint param_2)

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
    uVar3 = FUN_0010cb3c(lVar1,uVar4,param_1[0x4b],param_1 + 2,(long)param_1 + 0x269,param_2 & 1);
    iVar2 = (int)uVar3;
  }
  else {
    memset(auStack_240,0,0x210);
    uVar3 = FUN_0010ca1c(param_1,auStack_240);
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


// ===== 0010c708  FUN_0010c708 =====

void FUN_0010c708(long param_1,undefined8 *param_2)

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


// ===== 0010c74c  FUN_0010c74c =====

void FUN_0010c74c(long param_1)

{
  FUN_0010f7e4(param_1 + 0x10);
  return;
}


// ===== 0010c758  FUN_0010c758 =====

undefined1 FUN_0010c758(long param_1)

{
  return *(undefined1 *)(param_1 + 0x269);
}


// ===== 0010c764  FUN_0010c764 =====

undefined8 FUN_0010c764(long *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  return 0;
}


// ===== 0010c790  FUN_0010c790 =====

void FUN_0010c790(long *param_1,ulong param_2)

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
  iVar1 = dl_iterate_phdr(FUN_0010f134,&local_648);
  if (((iVar1 == 0) || (local_668 == 0)) ||
     (uVar4 = FUN_0010ee60(param_1,uVar7,auStack_678,0), (uVar4 & 1) == 0)) {
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_0011e594);
    for (puVar6 = PTR_DAT_0011e570; puVar6 < PTR_DAT_0011e578; puVar6 = puVar6 + 0x20) {
      if ((*(ulong *)(puVar6 + 8) <= uVar7) && (uVar7 < *(ulong *)(puVar6 + 0x10))) {
        lVar3 = *(long *)(puVar6 + 0x18);
        pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0011e594);
        if ((lVar3 != 0) &&
           (lVar3 = FUN_0010bf68(param_1[1],lVar3,&local_6a8,local_6e0,0), lVar3 == 0)) {
          memset(&local_648,0,0x618);
          uVar7 = FUN_0010cfc4(param_1[1],&local_6a8,local_6e0,uVar7,4,&local_648);
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
        goto LAB_0010c918;
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0011e594);
LAB_0010c918:
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


// ===== 0010ca10  FUN_0010ca10 =====

void FUN_0010ca10(undefined8 param_1,undefined4 param_2)

{
  FUN_0010f7b4(param_2);
  return;
}


// ===== 0010ca1c  FUN_0010ca1c =====

undefined8 FUN_0010ca1c(long param_1)

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


// ===== 0010cb3c  FUN_0010cb3c =====

undefined8
FUN_0010cb3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,
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
  
  lVar7 = FUN_0010bf68(param_1,param_3,auStack_b0,auStack_e8,0);
  if (lVar7 == 0) {
    memset(auStack_700,0,0x618);
    uVar8 = FUN_0010cfc4(param_1,auStack_b0,auStack_e8,param_2,4,auStack_700);
    if ((uVar8 & 1) != 0) {
      uVar8 = FUN_0010dc0c(param_1,auStack_700,param_4);
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
        puVar3 = PTR___sF_0011a248;
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
              goto LAB_0010ce1c;
            }
            else {
              puVar13 = (undefined8 *)((long)param_4 + 0x108);
              if ((local_b6 != 0x22) &&
                 ((puVar13 = (undefined8 *)((long)param_4 + 0x100), local_b6 != 0x20 &&
                  (puVar13 = (undefined8 *)((long)param_4 + 0xf8), local_b6 != 0x1f)))) {
LAB_0010ce1c:
                if (0x1c < local_b6) {
                  fprintf((FILE *)(PTR___sF_0011a248 + 0x130),"libunwind: %s - %s\n","getRegister",
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
LAB_0010cf28:
                  fprintf((FILE *)(PTR___sF_0011a248 + 0x130),"libunwind: %s - %s\n",
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
              if (iVar2 != 6) goto LAB_0010cf28;
              puVar9 = (ulong *)FUN_0010e4a4(*(undefined8 *)(piVar15 + 2),param_1,param_4,uVar8);
              uVar18 = *puVar9;
            }
            local_a00[uVar12] = uVar18;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == local_b6) {
            uVar14 = FUN_0010dd40(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == 0x22) {
            uVar10 = FUN_0010dd40(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
          }
          else {
            if (0xffffffe0 < uVar16 - 0x40) {
              return 0xffffe672;
            }
            uVar11 = FUN_0010dd40(param_1,param_4,uVar8,piVar15);
            puVar3 = PTR___sF_0011a248;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
            if ((int)uVar16 < 0x1f) {
              uVar5 = uVar11;
              if ((uVar16 != 0x1d) && (uVar5 = local_a00[0x3b], uVar6 = uVar11, uVar16 != 0x1e))
              goto LAB_0010ce70;
            }
            else {
              uVar18 = uVar11;
              if ((uVar16 != 0x1f) &&
                 ((uVar18 = local_a00[0x3d], uVar10 = uVar11, uVar16 != 0x22 &&
                  (uVar10 = local_a00[0x3f], uVar16 != 0x20)))) {
LAB_0010ce70:
                if (0x1c < uVar12) {
                  fprintf((FILE *)(PTR___sF_0011a248 + 0x130),"libunwind: %s - %s\n","setRegister",
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
            FUN_0010dd40(param_1,auStack_b20,uVar8,&local_80);
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


// ===== 0010cfc4  FUN_0010cfc4 =====

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_0010cfc4(undefined8 param_1,long *param_2,long *param_3,long param_4,int param_5,
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
LAB_0010d048:
    lVar20 = lVar20 + 0x18;
    if (lVar20 == 0x30) {
      return 1;
    }
  }
  uVar17 = 0;
LAB_0010d078:
  puVar18 = local_6c0;
  puVar5 = PTR___sF_0011a248;
  pbVar10 = pbVar21 + 1;
  bVar3 = *pbVar21;
  apbStack_6a0[0xc0] = pbVar10;
  switch((ulong)bVar3) {
  case 0:
    goto code_r0x0010d94c;
  case 1:
    uVar17 = FUN_0010df50(local_6c8,apbStack_6a0 + 0xc0,pbVar2,(char)param_3[3],0);
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 2:
    uVar9 = (uint)pbVar21[1];
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 2;
    goto LAB_0010d500;
  case 3:
    uVar9 = (uint)*(ushort *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 3;
    goto LAB_0010d500;
  case 4:
    uVar9 = *(uint *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 5;
LAB_0010d500:
    uVar17 = uVar17 + iVar13 * uVar9;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 5:
    uVar19 = FUN_0010e2dc(apbStack_6a0 + 0xc0,pbVar2);
    lVar8 = FUN_0010e2dc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended DWARF unwind, reg too big\n";
      __size = 0x46;
      __s = (FILE *)(PTR___sF_0011a248 + 0x130);
      goto LAB_0010dafc;
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
LAB_0010d49c:
    puVar12[6] = 2;
    *(long *)(puVar12 + 8) = lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 6:
    uVar19 = FUN_0010e2dc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_restore_extended DWARF unwind, reg too big\n";
LAB_0010d9ec:
      __s = (FILE *)(PTR___sF_0011a248 + 0x130);
      __size = 0x47;
      goto LAB_0010dafc;
    }
    cVar4 = *(char *)(param_6 + uVar19 * 4 + 7);
joined_r0x0010d92c:
    if (cVar4 != '\0') {
      pbVar21 = apbStack_6a0[uVar19 * 2];
      *(byte **)(param_6 + uVar19 * 4 + 8) = apbStack_6a0[uVar19 * 2 + 1];
      *(byte **)(param_6 + uVar19 * 4 + 6) = pbVar21;
    }
    goto code_r0x0010d94c;
  case 7:
    uVar19 = FUN_0010e2dc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_undefined DWARF unwind, reg too big\n";
LAB_0010daf0:
      __s = (FILE *)(PTR___sF_0011a248 + 0x130);
      __size = 0x40;
      goto LAB_0010dafc;
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
    uVar19 = FUN_0010e2dc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_same_value DWARF unwind, reg too big\n";
LAB_0010dad4:
      __s = (FILE *)(PTR___sF_0011a248 + 0x130);
      __size = 0x41;
      goto LAB_0010dafc;
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
    uVar19 = FUN_0010e2dc(apbStack_6a0 + 0xc0,pbVar2);
    uVar14 = FUN_0010e2dc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg too big\n";
      __size = 0x3f;
      __s = (FILE *)(PTR___sF_0011a248 + 0x130);
      goto LAB_0010dafc;
    }
    if (0x5f < uVar14) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg2 too big\n";
      goto LAB_0010daf0;
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
    uVar19 = FUN_0010e2dc(apbStack_6a0 + 0xc0,pbVar2);
    uVar7 = FUN_0010e2dc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa DWARF unwind, reg too big\n";
      __size = 0x3e;
      __s = (FILE *)(PTR___sF_0011a248 + 0x130);
      goto LAB_0010dafc;
    }
    *param_6 = (int)uVar19;
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xd:
    uVar19 = FUN_0010e2dc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa_register DWARF unwind, reg too big\n";
      goto LAB_0010d9ec;
    }
    *param_6 = (int)uVar19;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xe:
    uVar7 = FUN_0010e2dc(apbStack_6a0 + 0xc0,pbVar2);
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xf:
    *param_6 = 0;
    *(byte **)(param_6 + 2) = pbVar10;
    goto LAB_0010d880;
  case 0x10:
    uVar19 = FUN_0010e2dc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_expression DWARF unwind, reg too big\n";
      goto LAB_0010dad4;
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
LAB_0010d878:
    puVar12[6] = uVar7;
    *(byte **)(puVar12 + 8) = apbStack_6a0[0xc0];
LAB_0010d880:
    lVar8 = FUN_0010e2dc(apbStack_6a0 + 0xc0,pbVar2);
    apbStack_6a0[0xc0] = apbStack_6a0[0xc0] + lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x11:
    uVar19 = FUN_0010e2dc(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_0011a248;
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended_sf DWARF unwind, reg too big\n";
      __size = 0x49;
      __s = (FILE *)(PTR___sF_0011a248 + 0x130);
      goto LAB_0010dafc;
    }
    uVar14 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_0011a248 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
LAB_0010d80c:
    puVar12[6] = uVar7;
    *(ulong *)(puVar12 + 8) = uVar11 * (long)iVar13;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x12:
    uVar14 = FUN_0010e2dc(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_0011a248;
    uVar19 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_0011a248 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      goto LAB_0010dad4;
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
        fprintf((FILE *)(PTR___sF_0011a248 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
    uVar19 = FUN_0010e2dc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      fprintf((FILE *)(PTR___sF_0011a248 + 0x130),
              "libunwind: malformed DW_CFA_val_offset DWARF unwind, reg (%lu) out of range\n\n",
              uVar19);
      goto LAB_0010db04;
    }
    lVar8 = FUN_0010e2dc(apbStack_6a0 + 0xc0,pbVar2);
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
    uVar19 = FUN_0010e2dc(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_0011a248;
    if (uVar19 < 0x60) {
      uVar14 = 0;
      uVar11 = 0;
      pbVar21 = apbStack_6a0[0xc0];
      pbVar10 = apbStack_6a0[0xc0];
      do {
        if (pbVar10 == pbVar2) {
          fprintf((FILE *)(PTR___sF_0011a248 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      goto LAB_0010d80c;
    }
    __ptr = "libunwind: malformed DW_CFA_val_offset_sf DWARF unwind, reg too big\n";
    __size = 0x44;
    __s = (FILE *)(PTR___sF_0011a248 + 0x130);
    goto LAB_0010dafc;
  case 0x16:
    uVar19 = FUN_0010e2dc(apbStack_6a0 + 0xc0,pbVar2);
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
      goto LAB_0010d878;
    }
    __ptr = "libunwind: malformed DW_CFA_val_expression DWARF unwind, reg too big\n";
    __size = 0x45;
    __s = (FILE *)(PTR___sF_0011a248 + 0x130);
    goto LAB_0010dafc;
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
        goto joined_r0x0010d92c;
      }
      if (bVar1 != 0x80) {
        return 0;
      }
      local_6dc = param_5;
      lVar8 = FUN_0010e2dc(apbStack_6a0 + 0xc0,pbVar2);
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
    if (param_5 != 4) goto code_r0x0010d94c;
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
    uVar7 = FUN_0010e2dc(apbStack_6a0 + 0xc0,pbVar2);
    param_6[4] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x2f:
    uVar19 = FUN_0010e2dc(apbStack_6a0 + 0xc0,pbVar2);
    if (uVar19 < 0x60) {
      lVar8 = FUN_0010e2dc(apbStack_6a0 + 0xc0,pbVar2);
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
      goto LAB_0010d49c;
    }
    __ptr = "libunwind: malformed DW_CFA_GNU_negative_offset_extended DWARF unwind, reg too big\n";
    __size = 0x53;
    __s = (FILE *)(PTR___sF_0011a248 + 0x130);
LAB_0010dafc:
    fwrite(__ptr,__size,1,__s);
LAB_0010db04:
    fflush((FILE *)(PTR___sF_0011a248 + 0x130));
    return 0;
  }
joined_r0x0010d434:
  if ((pbVar2 <= pbVar21) || (uVar16 <= uVar17)) goto LAB_0010d048;
  goto LAB_0010d078;
code_r0x0010d94c:
  pbVar21 = apbStack_6a0[0xc0];
  goto joined_r0x0010d434;
}


// ===== 0010dc0c  FUN_0010dc0c =====

long FUN_0010dc0c(undefined8 param_1,uint *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR___sF_0011a248;
  uVar1 = *param_2;
  if ((int)uVar1 < 0x1e) {
    if ((int)uVar1 < 0) {
      if (uVar1 == 0xfffffffe) {
LAB_0010dc4c:
        return *(long *)(param_3 + 0xf8) + (long)(int)param_2[1];
      }
      if (uVar1 == 0xffffffff) goto LAB_0010dc90;
    }
    else {
      if (uVar1 == 0) {
        lVar3 = FUN_0010e4a4(*(undefined8 *)(param_2 + 2),param_1,param_3,0);
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
    if (uVar1 == 0x1f) goto LAB_0010dc4c;
  }
  else {
    if (uVar1 == 0x22) {
      return *(long *)(param_3 + 0x108) + (long)(int)param_2[1];
    }
    if (uVar1 == 0x20) {
LAB_0010dc90:
      return *(long *)(param_3 + 0x100) + (long)(int)param_2[1];
    }
  }
  if (0x1c < uVar1) {
    fprintf((FILE *)(PTR___sF_0011a248 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(long *)(param_3 + (ulong)uVar1 * 8) + (long)(int)param_2[1];
}


// ===== 0010dd40  FUN_0010dd40 =====

undefined8 FUN_0010dd40(undefined8 param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  puVar2 = PTR___sF_0011a248;
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
LAB_0010de7c:
          return *(undefined8 *)(param_2 + 0xf8);
        }
        if (uVar5 == 0xffffffff) goto LAB_0010de64;
        if (uVar5 == 0x1d) {
          return *(undefined8 *)(param_2 + 0xe8);
        }
      }
      else if ((int)uVar5 < 0x20) {
        if (uVar5 == 0x1e) {
          return *(undefined8 *)(param_2 + 0xf0);
        }
        if (uVar5 == 0x1f) goto LAB_0010de7c;
      }
      else {
        if (uVar5 == 0x22) {
          return *(undefined8 *)(param_2 + 0x108);
        }
        if (uVar5 == 0x20) {
LAB_0010de64:
          return *(undefined8 *)(param_2 + 0x100);
        }
      }
      if (0x1c < uVar5) {
        fprintf((FILE *)(PTR___sF_0011a248 + 0x130),"libunwind: %s - %s\n","getRegister",
                "unsupported arm64 register");
        fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      return *(undefined8 *)(param_2 + (*(ulong *)(param_4 + 2) & 0xffffffff) * 8);
    }
    if (iVar1 == 6) {
      puVar4 = (undefined8 *)FUN_0010e4a4(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return *puVar4;
    }
    if (iVar1 == 7) {
      uVar3 = FUN_0010e4a4(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return uVar3;
    }
  }
  fprintf((FILE *)(PTR___sF_0011a248 + 0x130),"libunwind: %s - %s\n","getSavedRegister",
          "unsupported restore location for register");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0010df50  FUN_0010df50 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_0010df50(undefined8 param_1,long *param_2,ulong *param_3,uint param_4,long param_5)

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
  
  puVar3 = PTR___sF_0011a248;
  uVar1 = param_4 & 0xf;
  puVar10 = (ulong *)*param_2;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if ((param_4 & 0xf) == 0) goto LAB_0010e09c;
      if (uVar1 != 1) {
LAB_0010e2a8:
        fprintf((FILE *)(PTR___sF_0011a248 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "unknown pointer encoding");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar4 = (undefined8 *)FUN_0010e2dc(param_2,param_3);
      puVar3 = PTR___sF_0011a248;
    }
    else if (uVar1 == 2) {
      puVar4 = (undefined8 *)(ulong)(ushort)*puVar10;
      *param_2 = (long)puVar10 + 2;
      puVar3 = PTR___sF_0011a248;
    }
    else {
      if (uVar1 != 3) goto LAB_0010e2a8;
      puVar4 = (undefined8 *)(ulong)(uint)*puVar10;
      *param_2 = (long)((long)puVar10 + 4);
      puVar3 = PTR___sF_0011a248;
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 4) {
LAB_0010e09c:
      puVar4 = (undefined8 *)*puVar10;
      *param_2 = (long)(puVar10 + 1);
      puVar3 = PTR___sF_0011a248;
    }
    else {
      if (uVar1 != 9) goto LAB_0010e2a8;
      uVar7 = 0;
      uVar5 = 0;
      puVar6 = puVar10;
      puVar9 = puVar10;
      do {
        if (puVar9 == param_3) {
          fprintf((FILE *)(PTR___sF_0011a248 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      puVar3 = PTR___sF_0011a248;
    }
  }
  else if (uVar1 == 10) {
    puVar4 = (undefined8 *)(long)(short)*puVar10;
    *param_2 = (long)puVar10 + 2;
    puVar3 = PTR___sF_0011a248;
  }
  else {
    if (uVar1 != 0xb) {
      if (uVar1 != 0xc) goto LAB_0010e2a8;
      goto LAB_0010e09c;
    }
    puVar4 = (undefined8 *)(long)(int)(uint)*puVar10;
    *param_2 = (long)((long)puVar10 + 4);
    puVar3 = PTR___sF_0011a248;
  }
  uVar1 = (param_4 & 0xff) >> 4 & 7;
  PTR___sF_0011a248 = puVar3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      if (uVar1 != 1) goto LAB_0010e274;
      puVar4 = (undefined8 *)((long)puVar4 + (long)puVar10);
    }
LAB_0010e128:
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
      goto LAB_0010e128;
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
LAB_0010e274:
  fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP","unknown pointer encoding");
  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0010e2dc  FUN_0010e2dc =====

ulong FUN_0010e2dc(long *param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  puVar2 = PTR___sF_0011a248;
  pbVar4 = (byte *)*param_1;
  if (pbVar4 != param_2) {
    pbVar5 = pbVar4 + 1;
    uVar3 = (ulong)*pbVar4 & 0x7f;
    if (-1 < (char)*pbVar4) {
LAB_0010e30c:
      *param_1 = (long)pbVar5;
      return uVar3;
    }
    if (pbVar5 != param_2) {
      uVar3 = uVar3 | (ulong)((int)(char)pbVar4[1] & 0x7f) << 7;
      pbVar5 = pbVar4 + 2;
      if (-1 < (char)pbVar4[1]) goto LAB_0010e30c;
      if (pbVar5 != param_2) {
        uVar3 = uVar3 | (ulong)((int)(char)pbVar4[2] & 0x7f) << 0xe;
        pbVar5 = pbVar4 + 3;
        if (-1 < (char)pbVar4[2]) goto LAB_0010e30c;
        if (pbVar5 != param_2) {
          uVar3 = uVar3 | (ulong)((int)(char)pbVar4[3] & 0x7f) << 0x15;
          pbVar5 = pbVar4 + 4;
          if (-1 < (char)pbVar4[3]) goto LAB_0010e30c;
          if (pbVar5 != param_2) {
            uVar3 = uVar3 | (ulong)((int)(char)pbVar4[4] & 0x7f) << 0x1c;
            pbVar5 = pbVar4 + 5;
            if (-1 < (char)pbVar4[4]) goto LAB_0010e30c;
            if (pbVar5 != param_2) {
              uVar3 = uVar3 | (ulong)((int)(char)pbVar4[5] & 0x7f) << 0x23;
              pbVar5 = pbVar4 + 6;
              if (-1 < (char)pbVar4[5]) goto LAB_0010e30c;
              if (pbVar5 != param_2) {
                uVar3 = uVar3 | (ulong)((int)(char)pbVar4[6] & 0x7f) << 0x2a;
                pbVar5 = pbVar4 + 7;
                if (-1 < (char)pbVar4[6]) goto LAB_0010e30c;
                if (pbVar5 != param_2) {
                  uVar3 = uVar3 | (ulong)((int)(char)pbVar4[7] & 0x7f) << 0x31;
                  pbVar5 = pbVar4 + 8;
                  if (-1 < (char)pbVar4[7]) goto LAB_0010e30c;
                  if (pbVar5 != param_2) {
                    uVar3 = uVar3 | (ulong)((int)(char)pbVar4[8] & 0x7f) << 0x38;
                    pbVar5 = pbVar4 + 9;
                    if (-1 < (char)pbVar4[8]) goto LAB_0010e30c;
                    if (pbVar5 != param_2) {
                      bVar1 = *pbVar5;
                      if ((bVar1 & 0x7e) == 0) {
                        if (-1 < (char)bVar1) {
                          *param_1 = (long)(pbVar4 + 10);
                          return uVar3 | (ulong)bVar1 << 0x3f;
                        }
                        if (pbVar4 + 10 == param_2) goto LAB_0010e43c;
                      }
                      fprintf((FILE *)(PTR___sF_0011a248 + 0x130),"libunwind: %s - %s\n",
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
LAB_0010e43c:
  fprintf((FILE *)(PTR___sF_0011a248 + 0x130),"libunwind: %s - %s\n","getULEB128",
          "truncated uleb128 expression");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0010e4a4  FUN_0010e4a4 =====

ulong FUN_0010e4a4(byte *param_1,undefined8 param_2,long param_3,ulong param_4)

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
  lVar11 = FUN_0010e2dc(&local_68,param_1 + 0x14);
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
      puVar9 = PTR___sF_0011a248;
      pbVar13 = pbVar18 + 1;
      local_68 = pbVar13;
      bVar8 = *pbVar18;
      uVar10 = (uint)bVar8;
      if (0x91 < uVar10 - 3) {
code_r0x0010ed20:
        fprintf((FILE *)(PTR___sF_0011a248 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
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
        goto LAB_0010e98c;
      case 4:
      case 5:
      case 7:
        goto code_r0x0010ed20;
      case 6:
        puVar14 = (ulong *)*puVar19;
LAB_0010e91c:
        *puVar19 = *puVar14;
        goto LAB_0010e528;
      case 8:
        uVar16 = (ulong)pbVar18[1];
        goto LAB_0010e8f0;
      case 9:
        uVar16 = (ulong)(char)pbVar18[1];
LAB_0010e8f0:
        local_68 = pbVar18 + 2;
        goto LAB_0010e98c;
      case 10:
        uVar16 = (ulong)*(ushort *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_0010e98c;
      case 0xb:
        uVar16 = (ulong)*(short *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_0010e98c;
      case 0xc:
        uVar16 = (ulong)*(uint *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_0010e98c;
      case 0xd:
        uVar16 = (ulong)*(int *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_0010e98c;
      case 0x10:
        uVar16 = FUN_0010e2dc(&local_68,pbVar6);
        puVar19 = puVar19 + 1;
        *puVar19 = uVar16;
        goto LAB_0010e528;
      case 0x11:
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = pbVar13;
        do {
          if (pbVar18 == pbVar6) {
            fprintf((FILE *)(PTR___sF_0011a248 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
        goto LAB_0010e528;
      case 0x12:
        uVar16 = *puVar19;
        goto LAB_0010e524;
      case 0x13:
        puVar19 = puVar19 + -1;
        goto LAB_0010e528;
      case 0x14:
        uVar16 = puVar19[-1];
        goto LAB_0010e524;
      case 0x15:
        local_68 = pbVar18 + 2;
        uVar16 = puVar19[-(ulong)pbVar18[1]];
LAB_0010e98c:
LAB_0010e524:
        puVar19[1] = uVar16;
        puVar19 = puVar19 + 1;
        goto LAB_0010e528;
      case 0x16:
        auVar20 = NEON_ext(*(undefined1 (*) [16])(puVar19 + -1),*(undefined1 (*) [16])(puVar19 + -1)
                           ,8,1);
        *puVar19 = auVar20._8_8_;
        puVar19[-1] = auVar20._0_8_;
        goto LAB_0010e528;
      case 0x17:
        uVar16 = *puVar19;
        *puVar19 = SUB168(*(undefined1 (*) [16])(puVar19 + -2),8);
        puVar19[-1] = SUB168(*(undefined1 (*) [16])(puVar19 + -2),0);
        puVar19[-2] = uVar16;
        goto LAB_0010e528;
      case 0x18:
        puVar14 = (ulong *)*puVar19;
        puVar19 = puVar19 + -1;
        *puVar19 = *puVar14;
        goto LAB_0010e528;
      case 0x19:
        uVar16 = *puVar19;
        if ((long)uVar16 < 0) goto LAB_0010eac4;
        goto LAB_0010e528;
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
LAB_0010eac4:
        *puVar19 = -uVar16;
        goto LAB_0010e528;
      case 0x20:
        *puVar19 = ~*puVar19;
        goto LAB_0010e528;
      case 0x21:
        uVar16 = puVar19[-1] | *puVar19;
        break;
      case 0x22:
        uVar16 = puVar19[-1] + *puVar19;
        break;
      case 0x23:
        lVar11 = FUN_0010e2dc(&local_68,pbVar6);
        *puVar19 = *puVar19 + lVar11;
        goto LAB_0010e528;
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
        goto LAB_0010e528;
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
        goto LAB_0010e528;
      default:
        uVar16 = (ulong)(uVar15 - 0x30);
        goto LAB_0010e524;
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
        goto LAB_0010e520;
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
            fprintf((FILE *)(PTR___sF_0011a248 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
             (puVar14 = puVar2, bVar8 != 0x8d)) goto LAB_0010e660;
        }
        else if (bVar8 < 0x90) {
          puVar14 = puVar1;
          if ((bVar8 != 0x8e) && (puVar14 = puVar4, uVar15 != 0x8f)) {
LAB_0010e660:
            if (0x1c < uVar10 - 0x70) {
              fprintf((FILE *)(PTR___sF_0011a248 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((bVar8 != 0x90) && (puVar14 = puVar3, bVar8 != 0x92)) goto LAB_0010e660;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_0010e524;
      case 0x90:
        uVar10 = FUN_0010e2dc(&local_68,pbVar6);
        puVar9 = PTR___sF_0011a248;
        if ((int)uVar10 < 0x1e) {
          if (((uVar10 != 0xfffffffe) && (puVar14 = puVar5, uVar10 != 0xffffffff)) &&
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_0010ebc4;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_0010ebc4:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_0011a248 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_0010ebc4;
        }
LAB_0010e520:
        uVar16 = *puVar14;
        goto LAB_0010e524;
      case 0x91:
        fprintf((FILE *)(PTR___sF_0011a248 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_fbreg not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x92:
        uVar10 = FUN_0010e2dc(&local_68,pbVar6);
        puVar9 = PTR___sF_0011a248;
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = local_68;
        pbVar13 = local_68;
        do {
          if (pbVar13 == pbVar6) {
            fprintf((FILE *)(PTR___sF_0011a248 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_0010ebec;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_0010ebec:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_0011a248 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_0010ebec;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_0010e524;
      case 0x93:
        fprintf((FILE *)(PTR___sF_0011a248 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
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
LAB_0010edc4:
              fprintf((FILE *)(PTR___sF_0011a248 + 0x130),"libunwind: %s - %s\n",
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
            if (bVar8 != 8) goto LAB_0010edc4;
            goto LAB_0010e91c;
          }
          *puVar19 = (ulong)(uint)*puVar14;
        }
        goto LAB_0010e528;
      }
      puVar19[-1] = uVar16;
      puVar19 = puVar19 + -1;
LAB_0010e528:
      pbVar18 = local_68;
    } while (local_68 < pbVar6);
    param_4 = *puVar19;
  }
  return param_4;
}


// ===== 0010ee60  FUN_0010ee60 =====

undefined8 FUN_0010ee60(long param_1,ulong param_2,long *param_3,uint param_4)

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
      (uVar3 = FUN_0010f388(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],
                            param_3[2] + (ulong)param_4,&local_6b0,auStack_6e8), (uVar3 & 1) == 0))
     && ((param_3[4] == 0 ||
         (uVar3 = FUN_0010f550(*(undefined8 *)(param_1 + 8),param_2,param_3[4],(int)param_3[5],
                               &local_6b0,auStack_6e8), (uVar3 & 1) == 0)))) {
    lVar5 = *param_3;
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_0011e594);
    if (PTR_DAT_0011e570 < PTR_DAT_0011e578) {
      plVar4 = (long *)PTR_DAT_0011e570;
      if (lVar5 == -1) {
        do {
          if (((ulong)plVar4[1] <= param_2) && (param_2 < (ulong)plVar4[2])) goto LAB_0010ef68;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_0011e578);
      }
      else {
        do {
          if (((*plVar4 == lVar5) && ((ulong)plVar4[1] <= param_2)) && (param_2 < (ulong)plVar4[2]))
          goto LAB_0010ef68;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_0011e578);
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0011e594);
    goto LAB_0010efb0;
  }
LAB_0010efd0:
  bVar2 = 1;
LAB_0010efd4:
  lVar5 = *param_3;
  memset(auStack_680,0,0x618);
  uVar3 = FUN_0010cfc4(*(undefined8 *)(param_1 + 8),&local_6b0,auStack_6e8,param_2,4,auStack_680);
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
      pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_0011e594);
      __src = PTR_DAT_0011e570;
      if (PTR_DAT_0011e580 <= PTR_DAT_0011e578) {
        __n = (long)PTR_DAT_0011e580 - (long)PTR_DAT_0011e570;
        __dest = (undefined *)malloc(__n * 4);
        memcpy(__dest,__src,__n);
        if ((undefined8 *)__src != &DAT_0011e5d0) {
          free(__src);
        }
        PTR_DAT_0011e580 = __dest + ((long)__n >> 3) * 0x20;
        PTR_DAT_0011e578 = __dest + __n;
        PTR_DAT_0011e570 = __dest;
      }
      *(long *)PTR_DAT_0011e578 = lVar5;
      *(long *)((long)PTR_DAT_0011e578 + 8) = local_698;
      *(long *)((long)PTR_DAT_0011e578 + 0x18) = local_6b0;
      *(long *)((long)PTR_DAT_0011e578 + 0x10) = local_690;
      PTR_DAT_0011e578 = (undefined *)((long)PTR_DAT_0011e578 + 0x20);
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0011e594);
      return 1;
    }
    return 1;
  }
  return 1;
LAB_0010ef68:
  lVar5 = plVar4[3];
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0011e594);
  if ((lVar5 != 0) &&
     (uVar3 = FUN_0010f388(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],lVar5,
                           &local_6b0,auStack_6e8), (uVar3 & 1) != 0)) {
    bVar2 = 0;
    goto LAB_0010efd4;
  }
LAB_0010efb0:
  uVar3 = FUN_0010f388(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],0,&local_6b0,
                       auStack_6e8);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  goto LAB_0010efd0;
}


// ===== 0010f134  FUN_0010f134 =====

undefined8 FUN_0010f134(ulong *param_1,undefined8 param_2,undefined8 *param_3)

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
              uVar5 = FUN_0010f268(uVar2,lVar8,lVar9 + lVar8,local_70);
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


// ===== 0010f268  FUN_0010f268 =====

undefined8 FUN_0010f268(undefined8 param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte *local_28;
  
  puVar3 = PTR___sF_0011a248;
  if ((ulong)((long)param_3 - (long)param_2) < 4) {
    if (param_3 == param_2) {
      return 0;
    }
    fprintf((FILE *)(PTR___sF_0011a248 + 0x130),
            "libunwind: unsupported .eh_frame_hdr at %lx: need at least 4 bytes of data but only got %zd\n"
            ,param_2);
  }
  else {
    if (*param_2 == 1) {
      local_28 = param_2 + 4;
      bVar1 = param_2[2];
      bVar2 = param_2[1];
      *(byte *)(param_4 + 3) = param_2[3];
      uVar4 = FUN_0010df50(param_1,&local_28,param_3,bVar2,param_2);
      *param_4 = uVar4;
      if (bVar1 == 0xff) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_0010df50(param_1,&local_28,param_3,bVar1,param_2);
      }
      param_4[1] = uVar4;
      param_4[2] = local_28;
      return 1;
    }
    fprintf((FILE *)(PTR___sF_0011a248 + 0x130),
            "libunwind: unsupported .eh_frame_hdr version: %u at %lx\n",(ulong)(uint)*param_2,
            param_2);
  }
  fflush((FILE *)(puVar3 + 0x130));
  return 0;
}


// ===== 0010f388  FUN_0010f388 =====

undefined8
FUN_0010f388(undefined8 param_1,ulong param_2,uint *param_3,long param_4,uint *param_5,
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
        (puVar7 < puVar9)) && (lVar4 = FUN_0010c0f8(param_1,puVar7,param_7), lVar4 == 0)) {
      local_68 = local_68 + 1;
      uVar8 = FUN_0010df50(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x18),0);
      lVar4 = FUN_0010df50(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x18) & 0xf,0);
      if ((uVar8 < param_2) && (param_2 <= lVar4 + uVar8)) {
        cVar2 = *(char *)(param_7 + 0x31);
        param_6[5] = 0;
        puVar9 = local_68;
        if (cVar2 != '\0') {
          lVar5 = FUN_0010e2dc(&local_68,puVar1);
          puVar7 = local_68;
          puVar9 = (uint *)((long)local_68 + lVar5);
          if ((*(byte *)(param_7 + 0x19) != 0xff) &&
             (lVar5 = FUN_0010df50(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x19) & 0xf,0),
             lVar5 != 0)) {
            local_68 = puVar7;
            uVar6 = FUN_0010df50(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x19),0);
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


// ===== 0010f550  FUN_0010f550 =====

undefined8
FUN_0010f550(undefined8 param_1,ulong param_2,long param_3,ulong param_4,long param_5,
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
  uVar1 = FUN_0010f268(param_1,param_3,lVar4,auStack_80);
  if (((uVar1 & 1) != 0) && (local_78 != 0)) {
    lVar2 = FUN_0010f6b8(local_68);
    lVar7 = 0;
    do {
      if (local_78 < 2) {
        lVar8 = lVar7 * lVar2;
        break;
      }
      uVar6 = local_78 >> 1;
      lVar8 = (uVar6 + lVar7) * lVar2;
      local_88 = local_70 + lVar8;
      uVar1 = FUN_0010df50(param_1,&local_88,lVar4,local_68,param_3);
      uVar5 = local_78 - uVar6;
      local_78 = uVar6;
      if (uVar1 < param_2) {
        local_78 = uVar5;
        lVar7 = uVar6 + lVar7;
      }
    } while (uVar1 != param_2);
    local_88 = local_70 + lVar8;
    FUN_0010df50(param_1,&local_88,lVar4,local_68,param_3);
    uVar3 = FUN_0010df50(param_1,&local_88,lVar4,local_68,param_3);
    lVar4 = FUN_0010bf68(param_1,uVar3,param_5,param_6,0);
    if (((lVar4 == 0) && (*(ulong *)(param_5 + 0x18) <= param_2)) &&
       (param_2 < *(ulong *)(param_5 + 0x20))) {
      return 1;
    }
  }
  return 0;
}


// ===== 0010f6b8  FUN_0010f6b8 =====

undefined8 FUN_0010f6b8(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_0011a248;
  param_1 = param_1 & 0xf;
  if (param_1 < 9) {
    if (param_1 < 3) {
      if (param_1 == 2) {
        return 4;
      }
      if (param_1 == 1) {
LAB_0010f780:
        fprintf((FILE *)(PTR___sF_0011a248 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
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
    if (param_1 == 9) goto LAB_0010f780;
  }
  else {
    if (param_1 == 0xc) {
      return 0x10;
    }
    if (param_1 == 0xb) {
      return 8;
    }
  }
  fprintf((FILE *)(PTR___sF_0011a248 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
          "Unknown DWARF encoding for search table.");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0010f7b4  FUN_0010f7b4 =====

char * FUN_0010f7b4(int param_1)

{
  if (param_1 + 2U < 0x62) {
    return &DAT_00108060 + *(int *)(&DAT_00108060 + (ulong)(param_1 + 2U) * 4);
  }
  return "unknown register";
}


// ===== 0010f7e4  FUN_0010f7e4 =====

undefined1  [16] FUN_0010f7e4(undefined1 (*param_1) [16])

{
  return *param_1;
}


// ===== 0010f880  FUN_0010f880 =====

long FUN_0010f880(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_0011edd0 == '\0') {
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


// ===== 0010f8b0  _INIT_0 =====

void _INIT_0(void)

{
  uint uVar1;
  int iVar2;
  char acStack_6c [92];
  
  uVar1 = getauxval(0x10);
  if ((uVar1 >> 8 & 1) == 0) {
    DAT_0011edd0 = 0;
    return;
  }
  iVar2 = __system_property_get("ro.arch",acStack_6c);
  if (0 < iVar2) {
    iVar2 = strncmp(acStack_6c,"exynos9810",10);
    DAT_0011edd0 = iVar2 != 0;
    return;
  }
  DAT_0011edd0 = 1;
  return;
}


// ===== 0010f948  FUN_0010f948 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0010f948(ulong param_1,long param_2)

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
    DAT_0011edd8 = DAT_0011edd8 | 0x400;
  }
  uVar2 = (uint)uVar4;
  if ((uVar3 >> 4 & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x8000;
  }
  if ((uVar3 >> 0x1b & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 2;
  }
  if ((uVar2 >> 7 & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 6;
  }
  if ((~uVar3 & 0xc0000) == 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x20;
  }
  if ((uVar3 >> 0x14 & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x10;
  }
  if ((uVar3 >> 0x17 & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 8;
  }
  if ((uVar3 >> 9 & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x10100;
  }
  if ((uVar3 >> 0x18 & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x20000;
  }
  if ((uVar3 >> 0xc & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x40;
  }
  if ((uVar3 >> 0x1a & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x800000;
  }
  if ((uVar3 >> 3 & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x4000;
  }
  if ((uVar3 >> 5 & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x800;
  }
  if ((uVar3 >> 6 & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x1000;
  }
  if ((uVar3 >> 0xd & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x100000;
  }
  if ((uVar3 >> 0xe & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x200000;
  }
  if ((uVar3 >> 0x1d & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x400000000000;
  }
  if ((uVar3 >> 0x1c & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x2000000000000;
  }
  if ((uVar2 >> 0x12 & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x180000000000;
  }
  if ((uVar2 >> 0x16 & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x380000000000;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x2000000000;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x6000000000;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x8000000000;
  }
  if ((uVar2 >> 5 & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x10000000000;
  }
  if ((uVar2 >> 6 & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x20000000000;
  }
  if ((uVar4 & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x80000;
  }
  if ((uVar3 >> 8 & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x80;
  }
  if ((uVar2 >> 0x10 & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 1;
  }
  if ((uVar2 >> 0xd & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x4000000;
  }
  if ((uVar4 >> 0x20 & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x10000000;
  }
  if ((uVar4 >> 0x21 & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x100000000;
  }
  if ((uVar2 >> 0xf & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x2000000;
  }
  if ((uVar2 >> 8 & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x1000000;
  }
  if ((uVar2 >> 9 & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x200000000;
  }
  if ((uVar2 >> 10 & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x400000000;
  }
  if ((uVar2 >> 0xb & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x800000000;
  }
  if ((uVar2 >> 0x11 & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x4000000000000;
  }
  if ((uVar2 >> 0x15 & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x20000000;
  }
  if ((int)uVar2 < 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x40000000000000;
  }
  if ((uVar2 >> 0x17 & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x40000000000;
  }
  if ((uVar2 >> 0x18 & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x100000000000000;
  }
  if ((uVar2 >> 0x19 & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x80000000000000;
  }
  if ((uVar4 >> 0x2b & 1) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x800000000000000;
  }
  if ((uVar3 >> 0xb & 1) == 0) {
    if ((param_1 & 0x201) != 0) {
      DAT_0011edd8 = DAT_0011edd8 | 0x300;
    }
    if ((uVar4 & 1) != 0 || (param_1 & 0x10000) != 0) {
      DAT_0011edd8 = DAT_0011edd8 | 0x40000;
    }
    if ((param_1 & 0x4008000) != 0) {
      DAT_0011edd8 = DAT_0011edd8 | 0x400000;
    }
    if ((uVar4 & 0x100004000) != 0) {
      DAT_0011edd8 = DAT_0011edd8 | 0x8000000;
    }
    uVar5 = DAT_0011edd8 | (ulong)(uVar2 << 0x13) & 0x80000000;
    if ((uVar4 & 2) != 0 && (param_1 & 0x400000) != 0) {
      uVar5 = uVar5 | 0x1000000000;
    }
    uVar5 = uVar5 | (param_1 & 0x20000) >> 4;
    goto LAB_0010fab0;
  }
  uVar4 = id_aa64pfr1_el1;
  if ((uVar4 & 0xf00) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x80000000000;
  }
  if ((uVar4 & 0xf0) == 0x10) {
    DAT_0011edd8 = DAT_0011edd8 | 0x1000000000000;
    if ((uVar4 & 0xf000000) != 0x2000000) goto LAB_0010fda0;
LAB_0010fdf4:
    DAT_0011edd8 = DAT_0011edd8 | 0x200000000000000;
    uVar4 = id_aa64pfr0_el1;
    uVar3 = (uint)uVar4;
  }
  else {
    if ((uVar4 & 0xf000000) == 0x2000000) goto LAB_0010fdf4;
LAB_0010fda0:
    uVar4 = id_aa64pfr0_el1;
    uVar3 = (uint)uVar4;
  }
  if ((~uVar3 & 0xf0000) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x300;
  }
  if ((uVar4 & 0xf00000000) != 0) {
    uVar4 = UnkSytemRegRead(3,0,0,4,4);
    if ((uVar4 & 0xf) == 1) {
      DAT_0011edd8 = DAT_0011edd8 | 0x1000000000;
    }
    else if ((uVar4 & 0xf) == 0) {
      DAT_0011edd8 = DAT_0011edd8 | 0x40000000;
    }
    if ((uVar4 & 0xf00000) != 0) {
      DAT_0011edd8 = DAT_0011edd8 | 0x80000000;
    }
  }
  uVar4 = id_aa64isar0_el1;
  if ((uVar4 & 0xf00000000) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x2000;
  }
  uVar4 = id_aa64isar1_el1;
  uVar5 = uVar4 >> 0x14 & 0xf;
  if ((uVar4 & 0xf) != 0) {
    DAT_0011edd8 = DAT_0011edd8 | 0x40000;
  }
  if (uVar5 != 0) {
    if (uVar5 == 3) {
      DAT_0011edd8 = DAT_0011edd8 | 0x400000000400000;
    }
    else {
      DAT_0011edd8 = DAT_0011edd8 | 0x400000;
    }
  }
  uVar5 = DAT_0011edd8 | 0x800000000000;
  if ((uVar4 & 0xf0000000000) != 0x20000000000) {
    uVar5 = DAT_0011edd8;
  }
  if ((uVar4 & 0xf00000000000) != 0) {
    uVar5 = uVar5 | 0x8000000;
  }
  if (uVar4 >> 0x3c != 0) {
    if (uVar4 >> 0x3d == 0) {
      DAT_0011edd8 = uVar5 | 0x8008000000000000;
      return;
    }
    uVar1 = 0x38000000000000;
    if (uVar4 >> 0x3c < 3) {
      uVar1 = 0x18000000000000;
    }
    DAT_0011edd8 = uVar5 | uVar1 | 0x8000000000000000;
    return;
  }
LAB_0010fab0:
  DAT_0011edd8 = uVar5 | 0x8000000000000000;
  return;
}


// ===== 0010fee4  _INIT_1 =====

void _INIT_1(void)

{
  int iVar1;
  ulong uVar2;
  char local_70 [8];
  ulong uStack_68;
  undefined8 local_60;
  
  if (DAT_0011edd8 != 0) {
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
    FUN_0010f948(uVar2 | 0x4000000000000000,local_70);
  }
  return;
}


// ===== 0010ff70  FUN_0010ff70 =====

long FUN_0010ff70(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_0011edd0 == '\0') {
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


// ===== 0010ffa0  _INIT_2 =====

void _INIT_2(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_startTransition__0011a118;
  *(undefined8 *)(PTR_startTransition__0011a118 + 0x20) = 0;
  __cxa_atexit(FUN_0011002c,puVar1,&PTR_LOOP_00119760);
  puVar1 = PTR_updateTransition__0011a120;
  *(undefined8 *)(PTR_updateTransition__0011a120 + 0x20) = 0;
  __cxa_atexit(FUN_0011005c,puVar1,&PTR_LOOP_00119760);
  puVar1 = PTR_finishTransition__0011a128;
  *(undefined8 *)(PTR_finishTransition__0011a128 + 0x20) = 0;
  __cxa_atexit(FUN_0011008c,puVar1,&PTR_LOOP_00119760);
  puVar1 = PTR_disableSwipeBackForTopScreen__0011a130;
  *(undefined8 *)(PTR_disableSwipeBackForTopScreen__0011a130 + 0x20) = 0;
  __cxa_atexit(FUN_001100bc,puVar1,&PTR_LOOP_00119760);
  return;
}


// ===== 0011002c  FUN_0011002c =====

void FUN_0011002c(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[4];
  if (plVar2 == param_1) {
    lVar1 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return;
    }
    lVar1 = 5;
    param_1 = plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00110054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + lVar1 * 8))();
  return;
}


// ===== 0011005c  FUN_0011005c =====

void FUN_0011005c(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[4];
  if (plVar2 == param_1) {
    lVar1 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return;
    }
    lVar1 = 5;
    param_1 = plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00110084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + lVar1 * 8))();
  return;
}


// ===== 0011008c  FUN_0011008c =====

void FUN_0011008c(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[4];
  if (plVar2 == param_1) {
    lVar1 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return;
    }
    lVar1 = 5;
    param_1 = plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x001100b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + lVar1 * 8))();
  return;
}


// ===== 001100bc  FUN_001100bc =====

void FUN_001100bc(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[4];
  if (plVar2 == param_1) {
    lVar1 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return;
    }
    lVar1 = 5;
    param_1 = plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x001100e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + lVar1 * 8))();
  return;
}


// ===== 001100ec  RNScreens::RNScreensTurboModule::RNScreensTurboModule =====

/* RNScreens::RNScreensTurboModule::RNScreensTurboModule(std::__ndk1::function<std::__ndk1::array<int,
   2ul> (int)>, std::__ndk1::function<void (int, double)>, std::__ndk1::function<void (int, bool)>,
   std::__ndk1::function<void (int)>) */

void __thiscall
RNScreens::RNScreensTurboModule::RNScreensTurboModule
          (RNScreensTurboModule *this,long *param_2,long *param_3,long *param_4,long *param_5)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long local_b0 [4];
  long *local_90;
  long local_80 [5];
  long local_58;
  
  local_90 = local_b0;
  plVar5 = local_b0;
  plVar6 = local_b0;
  plVar7 = local_b0;
  plVar8 = local_b0;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *(undefined **)this = PTR_vtable_0011a138 + 0x10;
  plVar3 = (long *)param_2[4];
  if (plVar3 == (long *)0x0) {
    local_90 = (long *)0x0;
  }
  else if (plVar3 == param_2) {
    (**(code **)(*param_2 + 0x18))(param_2,local_b0);
  }
  else {
                    /* try { // try from 0011014c to 0011017f has its CatchHandler @ 00110800 */
    local_90 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = local_90;
  puVar2 = PTR_startTransition__0011a118;
  plVar4 = *(long **)(PTR_startTransition__0011a118 + 0x20);
  if (local_90 == local_b0) {
    if (plVar4 == (long *)PTR_startTransition__0011a118) {
                    /* try { // try from 00110230 to 0011023b has its CatchHandler @ 001107fc */
      (**(code **)(local_b0[0] + 0x18))(local_b0,local_80);
      (**(code **)(*local_90 + 0x20))();
      local_90 = (long *)0x0;
                    /* try { // try from 0011025c to 00110267 has its CatchHandler @ 001107fc */
      (**(code **)(**(long **)(puVar2 + 0x20) + 0x18))(*(long **)(puVar2 + 0x20),local_b0);
      (**(code **)(**(long **)(puVar2 + 0x20) + 0x20))();
      *(undefined8 *)(puVar2 + 0x20) = 0;
                    /* try { // try from 00110288 to 00110293 has its CatchHandler @ 001107fc */
      local_90 = local_b0;
      (**(code **)(local_80[0] + 0x18))(local_80,puVar2);
      (**(code **)(local_80[0] + 0x20))(local_80);
      *(undefined **)(puVar2 + 0x20) = puVar2;
    }
    else {
                    /* try { // try from 001101c0 to 001101cb has its CatchHandler @ 001107fc */
      (**(code **)(local_b0[0] + 0x18))(local_b0,PTR_startTransition__0011a118);
      (**(code **)(*local_90 + 0x20))();
      local_90 = *(long **)(puVar2 + 0x20);
      *(undefined **)(puVar2 + 0x20) = puVar2;
    }
LAB_001102ac:
    if (local_90 == local_b0) {
      lVar9 = 4;
      plVar5 = local_b0;
      goto LAB_001102cc;
    }
    if (local_90 != (long *)0x0) {
      lVar9 = 5;
      plVar5 = local_90;
      goto LAB_001102cc;
    }
  }
  else {
    if (plVar4 != (long *)PTR_startTransition__0011a118) {
      local_90 = plVar4;
      *(long **)(PTR_startTransition__0011a118 + 0x20) = plVar3;
      goto LAB_001102ac;
    }
                    /* try { // try from 001101f4 to 001101ff has its CatchHandler @ 001107fc */
    (**(code **)(*(long *)PTR_startTransition__0011a118 + 0x18))
              (PTR_startTransition__0011a118,local_b0);
    (**(code **)(**(long **)(puVar2 + 0x20) + 0x20))();
    plVar3 = local_90;
    local_90 = local_b0;
    *(long **)(puVar2 + 0x20) = plVar3;
    lVar9 = 4;
LAB_001102cc:
    (**(code **)(*plVar5 + lVar9 * 8))();
  }
  plVar5 = (long *)param_3[4];
  if (plVar5 == (long *)0x0) {
    local_90 = (long *)0x0;
  }
  else if (plVar5 == param_3) {
    local_90 = local_b0;
    (**(code **)(*param_3 + 0x18))(param_3,local_b0);
  }
  else {
                    /* try { // try from 001102f0 to 00110323 has its CatchHandler @ 00110800 */
    local_90 = (long *)(**(code **)(*plVar5 + 0x10))();
  }
  plVar5 = local_90;
  puVar2 = PTR_updateTransition__0011a120;
  plVar3 = *(long **)(PTR_updateTransition__0011a120 + 0x20);
  if (local_90 == local_b0) {
    if (plVar3 == (long *)PTR_updateTransition__0011a120) {
                    /* try { // try from 001103d4 to 001103df has its CatchHandler @ 001107f8 */
      (**(code **)(local_b0[0] + 0x18))(local_b0,local_80);
      (**(code **)(*local_90 + 0x20))();
      local_90 = (long *)0x0;
                    /* try { // try from 00110400 to 0011040b has its CatchHandler @ 001107f8 */
      (**(code **)(**(long **)(puVar2 + 0x20) + 0x18))(*(long **)(puVar2 + 0x20),local_b0);
      (**(code **)(**(long **)(puVar2 + 0x20) + 0x20))();
      *(undefined8 *)(puVar2 + 0x20) = 0;
                    /* try { // try from 0011042c to 00110437 has its CatchHandler @ 001107f8 */
      local_90 = local_b0;
      (**(code **)(local_80[0] + 0x18))(local_80,puVar2);
      (**(code **)(local_80[0] + 0x20))(local_80);
      *(undefined **)(puVar2 + 0x20) = puVar2;
    }
    else {
                    /* try { // try from 00110364 to 0011036f has its CatchHandler @ 001107f8 */
      (**(code **)(local_b0[0] + 0x18))(local_b0,PTR_updateTransition__0011a120);
      (**(code **)(*local_90 + 0x20))();
      local_90 = *(long **)(puVar2 + 0x20);
      *(undefined **)(puVar2 + 0x20) = puVar2;
    }
LAB_00110450:
    if (local_90 == local_b0) {
      lVar9 = 4;
      plVar6 = local_b0;
      goto LAB_00110470;
    }
    if (local_90 != (long *)0x0) {
      lVar9 = 5;
      plVar6 = local_90;
      goto LAB_00110470;
    }
  }
  else {
    if (plVar3 != (long *)PTR_updateTransition__0011a120) {
      local_90 = plVar3;
      *(long **)(PTR_updateTransition__0011a120 + 0x20) = plVar5;
      goto LAB_00110450;
    }
                    /* try { // try from 00110398 to 001103a3 has its CatchHandler @ 001107f8 */
    (**(code **)(*(long *)PTR_updateTransition__0011a120 + 0x18))
              (PTR_updateTransition__0011a120,local_b0);
    (**(code **)(**(long **)(puVar2 + 0x20) + 0x20))();
    plVar5 = local_90;
    local_90 = local_b0;
    *(long **)(puVar2 + 0x20) = plVar5;
    lVar9 = 4;
LAB_00110470:
    (**(code **)(*plVar6 + lVar9 * 8))();
  }
  plVar6 = (long *)param_4[4];
  if (plVar6 == (long *)0x0) {
    local_90 = (long *)0x0;
  }
  else if (plVar6 == param_4) {
    local_90 = local_b0;
    (**(code **)(*param_4 + 0x18))(param_4,local_b0);
  }
  else {
                    /* try { // try from 00110494 to 001104c7 has its CatchHandler @ 00110800 */
    local_90 = (long *)(**(code **)(*plVar6 + 0x10))();
  }
  plVar6 = local_90;
  puVar2 = PTR_finishTransition__0011a128;
  plVar5 = *(long **)(PTR_finishTransition__0011a128 + 0x20);
  if (local_90 == local_b0) {
    if (plVar5 == (long *)PTR_finishTransition__0011a128) {
                    /* try { // try from 00110578 to 00110583 has its CatchHandler @ 001107f4 */
      (**(code **)(local_b0[0] + 0x18))(local_b0,local_80);
      (**(code **)(*local_90 + 0x20))();
      local_90 = (long *)0x0;
                    /* try { // try from 001105a4 to 001105af has its CatchHandler @ 001107f4 */
      (**(code **)(**(long **)(puVar2 + 0x20) + 0x18))(*(long **)(puVar2 + 0x20),local_b0);
      (**(code **)(**(long **)(puVar2 + 0x20) + 0x20))();
      *(undefined8 *)(puVar2 + 0x20) = 0;
                    /* try { // try from 001105d0 to 001105db has its CatchHandler @ 001107f4 */
      local_90 = local_b0;
      (**(code **)(local_80[0] + 0x18))(local_80,puVar2);
      (**(code **)(local_80[0] + 0x20))(local_80);
      *(undefined **)(puVar2 + 0x20) = puVar2;
    }
    else {
                    /* try { // try from 00110508 to 00110513 has its CatchHandler @ 001107f4 */
      (**(code **)(local_b0[0] + 0x18))(local_b0,PTR_finishTransition__0011a128);
      (**(code **)(*local_90 + 0x20))();
      local_90 = *(long **)(puVar2 + 0x20);
      *(undefined **)(puVar2 + 0x20) = puVar2;
    }
LAB_001105f4:
    if (local_90 == local_b0) {
      lVar9 = 4;
      plVar7 = local_b0;
      goto LAB_00110614;
    }
    if (local_90 != (long *)0x0) {
      lVar9 = 5;
      plVar7 = local_90;
      goto LAB_00110614;
    }
  }
  else {
    if (plVar5 != (long *)PTR_finishTransition__0011a128) {
      local_90 = plVar5;
      *(long **)(PTR_finishTransition__0011a128 + 0x20) = plVar6;
      goto LAB_001105f4;
    }
                    /* try { // try from 0011053c to 00110547 has its CatchHandler @ 001107f4 */
    (**(code **)(*(long *)PTR_finishTransition__0011a128 + 0x18))
              (PTR_finishTransition__0011a128,local_b0);
    (**(code **)(**(long **)(puVar2 + 0x20) + 0x20))();
    plVar6 = local_90;
    local_90 = local_b0;
    *(long **)(puVar2 + 0x20) = plVar6;
    lVar9 = 4;
LAB_00110614:
    (**(code **)(*plVar7 + lVar9 * 8))();
  }
  plVar7 = (long *)param_5[4];
  if (plVar7 == (long *)0x0) {
    local_90 = (long *)0x0;
  }
  else if (plVar7 == param_5) {
    local_90 = local_b0;
    (**(code **)(*param_5 + 0x18))(param_5,local_b0);
  }
  else {
                    /* try { // try from 00110638 to 0011066b has its CatchHandler @ 00110800 */
    local_90 = (long *)(**(code **)(*plVar7 + 0x10))();
  }
  plVar7 = local_90;
  puVar2 = PTR_disableSwipeBackForTopScreen__0011a130;
  plVar6 = *(long **)(PTR_disableSwipeBackForTopScreen__0011a130 + 0x20);
  if (local_90 == local_b0) {
    if (plVar6 == (long *)PTR_disableSwipeBackForTopScreen__0011a130) {
                    /* try { // try from 0011071c to 00110727 has its CatchHandler @ 001107f0 */
      (**(code **)(local_b0[0] + 0x18))(local_b0,local_80);
      (**(code **)(*local_90 + 0x20))();
      local_90 = (long *)0x0;
                    /* try { // try from 00110748 to 00110753 has its CatchHandler @ 001107f0 */
      (**(code **)(**(long **)(puVar2 + 0x20) + 0x18))(*(long **)(puVar2 + 0x20),local_b0);
      (**(code **)(**(long **)(puVar2 + 0x20) + 0x20))();
      *(undefined8 *)(puVar2 + 0x20) = 0;
                    /* try { // try from 00110774 to 0011077f has its CatchHandler @ 001107f0 */
      local_90 = local_b0;
      (**(code **)(local_80[0] + 0x18))(local_80,puVar2);
      (**(code **)(local_80[0] + 0x20))(local_80);
      *(undefined **)(puVar2 + 0x20) = puVar2;
    }
    else {
                    /* try { // try from 001106ac to 001106b7 has its CatchHandler @ 001107f0 */
      (**(code **)(local_b0[0] + 0x18))(local_b0,PTR_disableSwipeBackForTopScreen__0011a130);
      (**(code **)(*local_90 + 0x20))();
      local_90 = *(long **)(puVar2 + 0x20);
      *(undefined **)(puVar2 + 0x20) = puVar2;
    }
LAB_00110798:
    if (local_90 == local_b0) {
      lVar9 = 4;
      plVar8 = local_b0;
    }
    else {
      if (local_90 == (long *)0x0) goto LAB_001107c4;
      lVar9 = 5;
      plVar8 = local_90;
    }
  }
  else {
    if (plVar6 != (long *)PTR_disableSwipeBackForTopScreen__0011a130) {
      local_90 = plVar6;
      *(long **)(PTR_disableSwipeBackForTopScreen__0011a130 + 0x20) = plVar7;
      goto LAB_00110798;
    }
                    /* try { // try from 001106e0 to 001106eb has its CatchHandler @ 001107f0 */
    (**(code **)(*(long *)PTR_disableSwipeBackForTopScreen__0011a130 + 0x18))
              (PTR_disableSwipeBackForTopScreen__0011a130,local_b0);
    (**(code **)(**(long **)(puVar2 + 0x20) + 0x20))();
    plVar7 = local_90;
    local_90 = local_b0;
    *(long **)(puVar2 + 0x20) = plVar7;
    lVar9 = 4;
  }
  (**(code **)(*plVar8 + lVar9 * 8))();
LAB_001107c4:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00110828  FUN_00110828 =====

void FUN_00110828(void)

{
  __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 00110838  RNScreens::RNScreensTurboModule::~RNScreensTurboModule =====

/* RNScreens::RNScreensTurboModule::~RNScreensTurboModule() */

void __thiscall RNScreens::RNScreensTurboModule::~RNScreensTurboModule(RNScreensTurboModule *this)

{
  ~RNScreensTurboModule(this);
  operator_delete(this);
  return;
}


// ===== 0011085c  RNScreens::RNScreensTurboModule::get =====

/* RNScreens::RNScreensTurboModule::get(facebook::jsi::Runtime&, facebook::jsi::PropNameID const&)
    */

void RNScreens::RNScreensTurboModule::get(Runtime *param_1,PropNameID *param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined4 *in_x8;
  long lVar6;
  undefined8 local_148;
  undefined **local_140;
  undefined *puStack_138;
  undefined ***local_120;
  undefined **local_110;
  undefined *puStack_108;
  undefined ***local_f0;
  undefined **local_e0;
  undefined *puStack_d8;
  undefined ***local_c0;
  undefined **local_b0;
  undefined *puStack_a8;
  undefined ***local_90;
  undefined **local_80;
  undefined *local_78;
  long *local_70;
  undefined ***local_60;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  (**(code **)(*(long *)param_2 + 0xc0))(&local_80,param_2);
  puVar1 = (undefined *)((ulong)local_80 >> 1 & 0x7f);
  if (((ulong)local_80 & 1) != 0) {
    puVar1 = local_78;
  }
  if (puVar1 == (undefined *)0xf) {
    plVar2 = (long *)((ulong)&local_80 | 1);
    if (((ulong)local_80 & 1) != 0) {
      plVar2 = local_70;
    }
    bVar4 = *plVar2 == 0x6172547472617473 && *(long *)((long)plVar2 + 7) == 0x6e6f697469736e61;
  }
  else {
    bVar4 = false;
  }
  if (((ulong)local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (bVar4) {
    local_90 = &local_b0;
    local_b0 = &PTR_FUN_00119850;
    puStack_a8 = PTR_startTransition_0011a0f0;
    local_80 = &PTR_FUN_00119850;
    local_78 = PTR_startTransition_0011a0f0;
                    /* try { // try from 00110954 to 0011096b has its CatchHandler @ 00110ecc */
    local_60 = &local_80;
    (**(code **)(*(long *)param_2 + 0x278))(&local_148,param_2);
    if (local_60 == &local_80) {
      lVar6 = 4;
      pppuVar5 = &local_80;
LAB_00110b00:
      (*(code *)(*pppuVar5)[lVar6])();
    }
    else if (local_60 != (undefined ***)0x0) {
      lVar6 = 5;
      pppuVar5 = local_60;
      goto LAB_00110b00;
    }
    *in_x8 = 7;
    *(undefined8 *)(in_x8 + 2) = local_148;
    pppuVar5 = local_90;
    if (local_90 == &local_b0) {
      lVar6 = 4;
      pppuVar5 = &local_b0;
    }
    else {
LAB_00110d94:
      local_148 = 0;
      if (pppuVar5 == (undefined ***)0x0) goto LAB_00110da8;
      lVar6 = 5;
    }
  }
  else {
    (**(code **)(*(long *)param_2 + 0xc0))(&local_80,param_2);
    puVar1 = (undefined *)((ulong)local_80 >> 1 & 0x7f);
    if (((ulong)local_80 & 1) != 0) {
      puVar1 = local_78;
    }
    if (puVar1 == (undefined *)0x10) {
      plVar2 = (long *)((ulong)&local_80 | 1);
      if (((ulong)local_80 & 1) != 0) {
        plVar2 = local_70;
      }
      bVar4 = *plVar2 == 0x7254657461647075 && plVar2[1] == 0x6e6f697469736e61;
    }
    else {
      bVar4 = false;
    }
    if (((ulong)local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if (bVar4) {
      local_c0 = &local_e0;
      local_e0 = &PTR_FUN_00119850;
      puStack_d8 = PTR_updateTransition_0011a0f8;
      local_80 = &PTR_FUN_00119850;
      local_78 = PTR_updateTransition_0011a0f8;
                    /* try { // try from 00110a48 to 00110a5f has its CatchHandler @ 00110e7c */
      local_60 = &local_80;
      (**(code **)(*(long *)param_2 + 0x278))(&local_148,param_2);
      if (local_60 == &local_80) {
        lVar6 = 4;
        pppuVar5 = &local_80;
LAB_00110c60:
        (*(code *)(*pppuVar5)[lVar6])();
      }
      else if (local_60 != (undefined ***)0x0) {
        lVar6 = 5;
        pppuVar5 = local_60;
        goto LAB_00110c60;
      }
      *in_x8 = 7;
      *(undefined8 *)(in_x8 + 2) = local_148;
      pppuVar5 = local_c0;
      if (local_c0 != &local_e0) goto LAB_00110d94;
      lVar6 = 4;
      pppuVar5 = &local_e0;
    }
    else {
      (**(code **)(*(long *)param_2 + 0xc0))(&local_80,param_2);
      puVar1 = (undefined *)((ulong)local_80 >> 1 & 0x7f);
      if (((ulong)local_80 & 1) != 0) {
        puVar1 = local_78;
      }
      if (puVar1 == (undefined *)0x10) {
        plVar2 = (long *)((ulong)&local_80 | 1);
        if (((ulong)local_80 & 1) != 0) {
          plVar2 = local_70;
        }
        bVar4 = *plVar2 == 0x72546873696e6966 && plVar2[1] == 0x6e6f697469736e61;
      }
      else {
        bVar4 = false;
      }
      if (((ulong)local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      if (bVar4) {
        local_f0 = &local_110;
        local_110 = &PTR_FUN_00119850;
        puStack_108 = PTR_finishTransition_0011a100;
        local_80 = &PTR_FUN_00119850;
        local_78 = PTR_finishTransition_0011a100;
                    /* try { // try from 00110b80 to 00110b97 has its CatchHandler @ 00110e2c */
        local_60 = &local_80;
        (**(code **)(*(long *)param_2 + 0x278))(&local_148,param_2);
        if (local_60 == &local_80) {
          lVar6 = 4;
          pppuVar5 = &local_80;
LAB_00110d20:
          (*(code *)(*pppuVar5)[lVar6])();
        }
        else if (local_60 != (undefined ***)0x0) {
          lVar6 = 5;
          pppuVar5 = local_60;
          goto LAB_00110d20;
        }
        *in_x8 = 7;
        *(undefined8 *)(in_x8 + 2) = local_148;
        pppuVar5 = local_f0;
        if (local_f0 != &local_110) goto LAB_00110d94;
        lVar6 = 4;
        pppuVar5 = &local_110;
      }
      else {
        (**(code **)(*(long *)param_2 + 0xc0))(&local_80,param_2);
        puVar1 = (undefined *)((ulong)local_80 >> 1 & 0x7f);
        if (((ulong)local_80 & 1) != 0) {
          puVar1 = local_78;
        }
        if (puVar1 == (undefined *)0x1c) {
          plVar2 = (long *)((ulong)&local_80 | 1);
          if (((ulong)local_80 & 1) != 0) {
            plVar2 = local_70;
          }
          bVar4 = ((*plVar2 == 0x53656c6261736964 && plVar2[1] == 0x6b63614265706977) &&
                  plVar2[2] == 0x6353706f54726f46) && (int)plVar2[3] == 0x6e656572;
        }
        else {
          bVar4 = false;
        }
        if (((ulong)local_80 & 1) != 0) {
          operator_delete(local_70);
        }
        if (!bVar4) {
          *in_x8 = 0;
          goto LAB_00110da8;
        }
        local_120 = &local_140;
        local_140 = &PTR_FUN_00119850;
        puStack_138 = PTR_disableSwipeBackForTopScreen_0011a108;
        local_80 = &PTR_FUN_00119850;
        local_78 = PTR_disableSwipeBackForTopScreen_0011a108;
                    /* try { // try from 00110ce0 to 00110cf7 has its CatchHandler @ 00110ddc */
        local_60 = &local_80;
        (**(code **)(*(long *)param_2 + 0x278))(&local_148,param_2);
        if (local_60 == &local_80) {
          lVar6 = 4;
          pppuVar5 = &local_80;
LAB_00110d64:
          (*(code *)(*pppuVar5)[lVar6])();
        }
        else if (local_60 != (undefined ***)0x0) {
          lVar6 = 5;
          pppuVar5 = local_60;
          goto LAB_00110d64;
        }
        *in_x8 = 7;
        *(undefined8 *)(in_x8 + 2) = local_148;
        pppuVar5 = local_120;
        if (local_120 != &local_140) goto LAB_00110d94;
        lVar6 = 4;
        pppuVar5 = &local_140;
      }
    }
  }
  local_148 = 0;
  (*(code *)(*pppuVar5)[lVar6])();
LAB_00110da8:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00110f4c  RNScreens::RNScreensTurboModule::set =====

/* RNScreens::RNScreensTurboModule::set(facebook::jsi::Runtime&, facebook::jsi::PropNameID const&,
   facebook::jsi::Value const&) */

void RNScreens::RNScreensTurboModule::set(Runtime *param_1,PropNameID *param_2,Value *param_3)

{
  return;
}


// ===== 00110f50  RNScreens::RNScreensTurboModule::getPropertyNames =====

/* RNScreens::RNScreensTurboModule::getPropertyNames(facebook::jsi::Runtime&) */

void RNScreens::RNScreensTurboModule::getPropertyNames(Runtime *param_1)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  void *pvVar8;
  long *plVar9;
  long *in_x1;
  ulong *in_x8;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  byte local_88;
  undefined7 uStack_87;
  char cStack_80;
  undefined7 uStack_7f;
  char cStack_78;
  undefined1 uStack_77;
  undefined6 uStack_76;
  undefined8 *local_70;
  long local_68;
  
  uStack_7f = s_startTransition_001078af._8_7_;
  cStack_80 = s_startTransition_001078af[7];
  uStack_87 = s_startTransition_001078af._0_7_;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_88 = 0x1e;
  lVar11 = *in_x1;
  *in_x8 = 0;
  in_x8[1] = 0;
  pcVar12 = *(code **)(lVar11 + 0xa0);
  in_x8[2] = 0;
  cStack_78 = 0;
                    /* try { // try from 00110fbc to 00110fcf has its CatchHandler @ 0011154c */
  (*pcVar12)(&local_70);
                    /* try { // try from 00110fd0 to 00110fd7 has its CatchHandler @ 00111548 */
  puVar6 = (undefined8 *)operator_new(8);
  puVar5 = local_70;
  local_70 = (undefined8 *)0x0;
  *puVar6 = puVar5;
  *in_x8 = (ulong)puVar6;
  in_x8[1] = (ulong)(puVar6 + 1);
  in_x8[2] = (ulong)(puVar6 + 1);
  if ((local_88 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_76,CONCAT11(uStack_77,cStack_78)));
  }
  local_88 = 0x20;
  uStack_77 = 0;
  uStack_7f = (undefined7)s_updateTransition_00107cc1._8_8_;
  cStack_78 = SUB81(s_updateTransition_00107cc1._8_8_,7);
  uStack_87 = (undefined7)s_updateTransition_00107cc1._0_8_;
  cStack_80 = SUB81(s_updateTransition_00107cc1._0_8_,7);
                    /* try { // try from 0011102c to 0011103f has its CatchHandler @ 00111540 */
  (**(code **)(*in_x1 + 0xa0))(&local_70);
                    /* try { // try from 00111040 to 00111047 has its CatchHandler @ 0011153c */
  pvVar7 = operator_new(0x10);
  puVar5 = local_70;
  lVar11 = 0;
  plVar9 = (long *)((long)pvVar7 + 0x10);
  local_70 = (undefined8 *)0x0;
  *(undefined8 **)((long)pvVar7 + 8) = puVar5;
  do {
    uVar13 = *(undefined8 *)((long)puVar6 + lVar11);
    *(undefined8 *)((long)puVar6 + lVar11) = 0;
    *(undefined8 *)((long)pvVar7 + lVar11) = uVar13;
    lVar11 = lVar11 + -8;
  } while (lVar11 != -8);
  plVar22 = (long *)*in_x8;
  plVar17 = (long *)in_x8[1];
  in_x8[2] = (ulong)plVar9;
  *in_x8 = (ulong)pvVar7;
  in_x8[1] = (ulong)plVar9;
  while (plVar17 != plVar22) {
    plVar17 = plVar17 + -1;
    if ((undefined8 *)*plVar17 != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)*plVar17)();
    }
  }
  if (plVar22 != (long *)0x0) {
    operator_delete(plVar22);
  }
  in_x8[1] = (ulong)plVar9;
  if (local_70 != (undefined8 *)0x0) {
    (**(code **)*local_70)();
  }
  if ((local_88 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_76,CONCAT11(uStack_77,cStack_78)));
  }
  local_88 = 0x20;
  uStack_77 = 0;
  uStack_7f = (undefined7)s_finishTransition_00107659._8_8_;
  cStack_78 = SUB81(s_finishTransition_00107659._8_8_,7);
  uStack_87 = (undefined7)s_finishTransition_00107659._0_8_;
  cStack_80 = SUB81(s_finishTransition_00107659._0_8_,7);
                    /* try { // try from 001110f0 to 00111103 has its CatchHandler @ 00111534 */
  (**(code **)(*in_x1 + 0xa0))(&local_70);
  puVar5 = local_70;
  if ((long *)in_x8[2] <= plVar9) {
    plVar22 = (long *)*in_x8;
    lVar11 = (long)plVar9 - (long)plVar22 >> 3;
    uVar16 = lVar11 + 1;
    if (uVar16 >> 0x3d == 0) {
      uVar10 = (long)in_x8[2] - (long)plVar22;
      uVar15 = (long)uVar10 >> 2;
      if (uVar15 <= uVar16) {
        uVar15 = uVar16;
      }
      if (0x7ffffffffffffff7 < uVar10) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 == 0) {
        pvVar8 = (void *)0x0;
LAB_0011119c:
        puVar5 = local_70;
        plVar14 = (long *)((long)pvVar8 + lVar11 * 8);
        pvVar1 = (void *)((long)pvVar8 + uVar15 * 8);
        local_70 = (undefined8 *)0x0;
        plVar17 = plVar14 + 1;
        *plVar14 = (long)puVar5;
        if ((long)plVar9 - (long)plVar22 == 0) {
          *in_x8 = (ulong)plVar14;
          in_x8[1] = (ulong)plVar17;
          in_x8[2] = (ulong)pvVar1;
LAB_00111294:
          operator_delete(plVar9);
        }
        else {
          uVar16 = ((long)plVar9 - (long)plVar22) - 8;
          if ((uVar16 < 0x78) ||
             (((long *)((long)pvVar8 +
                       (((long)plVar9 - (long)plVar22) - (uVar16 & 0xfffffffffffffff8)) + -8) <
               plVar9 && ((long *)((long)plVar9 + (-8 - (uVar16 & 0xfffffffffffffff8))) < plVar14)))
             ) {
LAB_0011123c:
            do {
              plVar9 = plVar9 + -1;
              lVar11 = *plVar9;
              *plVar9 = 0;
              plVar14 = plVar14 + -1;
              *plVar14 = lVar11;
            } while (plVar9 != plVar22);
          }
          else {
            uVar16 = (uVar16 >> 3) + 1;
            uVar10 = uVar16 & 0x3ffffffffffffffc;
            plVar9 = plVar9 + -uVar10;
            plVar18 = plVar14 + -2;
            plVar19 = (long *)((long)pvVar7 + -0x10);
            uVar15 = uVar10;
            do {
              lVar25 = plVar19[1];
              lVar24 = *plVar19;
              lVar23 = plVar19[3];
              lVar11 = plVar19[2];
              uVar15 = uVar15 - 4;
              plVar19[1] = 0;
              *plVar19 = 0;
              plVar19[3] = 0;
              plVar19[2] = 0;
              plVar18[-1] = lVar25;
              plVar18[-2] = lVar24;
              plVar18[1] = lVar23;
              *plVar18 = lVar11;
              plVar18 = plVar18 + -4;
              plVar19 = plVar19 + -4;
            } while (uVar15 != 0);
            plVar14 = plVar14 + -uVar10;
            if (uVar16 != uVar10) goto LAB_0011123c;
          }
          plVar9 = (long *)*in_x8;
          plVar22 = (long *)in_x8[1];
          *in_x8 = (ulong)plVar14;
          in_x8[1] = (ulong)plVar17;
          in_x8[2] = (ulong)pvVar1;
          while (plVar22 != plVar9) {
            plVar22 = plVar22 + -1;
            if ((undefined8 *)*plVar22 != (undefined8 *)0x0) {
              (*(code *)**(undefined8 **)*plVar22)();
            }
          }
          if (plVar9 != (long *)0x0) goto LAB_00111294;
        }
        in_x8[1] = (ulong)plVar17;
        if (local_70 != (undefined8 *)0x0) {
          (**(code **)*local_70)();
        }
        goto LAB_001112b4;
      }
      if (uVar15 >> 0x3d == 0) {
                    /* try { // try from 00111190 to 00111193 has its CatchHandler @ 00111578 */
        pvVar8 = operator_new(uVar15 << 3);
        goto LAB_0011119c;
      }
    }
    else {
      if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_001115c4;
                    /* try { // try from 001114e4 to 001114e7 has its CatchHandler @ 00111578 */
      FUN_001115c8();
LAB_001114e8:
      if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_001115c4;
                    /* try { // try from 001114f8 to 001114fb has its CatchHandler @ 00111554 */
      FUN_001115c8();
    }
    if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_001115c4;
                    /* try { // try from 0011150c to 0011150f has its CatchHandler @ 00111578 */
    FUN_001115dc();
LAB_00111510:
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00111520 to 00111523 has its CatchHandler @ 00111554 */
      uVar13 = FUN_001115dc();
                    /* catch() { ... } // from try @ 001112f4 with catch @ 00111524 */
      operator_delete(plVar9);
      FUN_00111610();
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_0010bbb4(uVar13);
      }
    }
    goto LAB_001115c4;
  }
  plVar17 = (long *)((long)pvVar7 + 0x18);
  local_70 = (undefined8 *)0x0;
  in_x8[1] = (ulong)plVar17;
  *(undefined8 **)((long)pvVar7 + 0x10) = puVar5;
LAB_001112b4:
  if ((local_88 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_76,CONCAT11(uStack_77,cStack_78)));
  }
                    /* try { // try from 001112c4 to 001112cb has its CatchHandler @ 0011152c */
  plVar9 = (long *)operator_new(0x20);
  *(char *)((long)plVar9 + 0x1c) = '\0';
  uVar4 = s_disableSwipeBackForTopScreen_00107331._20_8_;
  uVar3 = s_disableSwipeBackForTopScreen_00107331._0_8_;
  uVar13 = CONCAT44(s_disableSwipeBackForTopScreen_00107331._16_4_,
                    s_disableSwipeBackForTopScreen_00107331._12_4_);
  lVar11 = *in_x1;
  plVar9[1] = CONCAT44(s_disableSwipeBackForTopScreen_00107331._12_4_,
                       s_disableSwipeBackForTopScreen_00107331._8_4_);
  *plVar9 = uVar3;
  *(undefined8 *)((long)plVar9 + 0x14) = uVar4;
  *(undefined8 *)((long)plVar9 + 0xc) = uVar13;
                    /* try { // try from 001112f4 to 00111307 has its CatchHandler @ 00111524 */
  (**(code **)(lVar11 + 0xa0))(&local_88);
  if (plVar17 < (long *)in_x8[2]) {
    lVar11 = CONCAT71(uStack_87,local_88);
    local_88 = 0;
    uStack_87 = 0;
    *plVar17 = lVar11;
    in_x8[1] = (ulong)(plVar17 + 1);
  }
  else {
    plVar22 = (long *)*in_x8;
    lVar11 = (long)plVar17 - (long)plVar22 >> 3;
    uVar16 = lVar11 + 1;
    if (uVar16 >> 0x3d != 0) goto LAB_001114e8;
    uVar10 = (long)in_x8[2] - (long)plVar22;
    uVar15 = (long)uVar10 >> 2;
    if (uVar15 <= uVar16) {
      uVar15 = uVar16;
    }
    if (0x7ffffffffffffff7 < uVar10) {
      uVar15 = 0x1fffffffffffffff;
    }
    if (uVar15 == 0) {
      pvVar7 = (void *)0x0;
    }
    else {
      if (uVar15 >> 0x3d != 0) goto LAB_00111510;
                    /* try { // try from 00111370 to 00111373 has its CatchHandler @ 00111554 */
      pvVar7 = operator_new(uVar15 << 3);
    }
    plVar14 = (long *)((long)pvVar7 + lVar11 * 8);
    lVar11 = CONCAT71(uStack_87,local_88);
    pvVar8 = (void *)((long)pvVar7 + uVar15 * 8);
    local_88 = 0;
    uStack_87 = 0;
    plVar19 = plVar14 + 1;
    *plVar14 = lVar11;
    if ((long)plVar17 - (long)plVar22 == 0) {
      *in_x8 = (ulong)plVar14;
      in_x8[1] = (ulong)plVar19;
      in_x8[2] = (ulong)pvVar8;
LAB_0011142c:
      operator_delete(plVar17);
    }
    else {
      uVar16 = ((long)plVar17 - (long)plVar22) - 8;
      if ((uVar16 < 0x78) ||
         (((long *)((long)pvVar7 +
                   (((long)plVar17 - (long)plVar22) - (uVar16 & 0xfffffffffffffff8)) + -8) < plVar17
          && ((long *)((long)plVar17 + (-8 - (uVar16 & 0xfffffffffffffff8))) < plVar14)))) {
LAB_001113d4:
        do {
          plVar17 = plVar17 + -1;
          plVar14 = plVar14 + -1;
          *plVar14 = *plVar17;
          *plVar17 = 0;
        } while (plVar17 != plVar22);
      }
      else {
        plVar20 = plVar14 + -2;
        uVar16 = (uVar16 >> 3) + 1;
        uVar10 = uVar16 & 0x3ffffffffffffffc;
        uVar15 = uVar10;
        plVar18 = plVar17;
        do {
          plVar21 = plVar18 + -4;
          lVar24 = *plVar21;
          lVar23 = plVar18[-1];
          lVar11 = plVar18[-2];
          uVar15 = uVar15 - 4;
          plVar20[-1] = plVar18[-3];
          plVar20[-2] = lVar24;
          plVar20[1] = lVar23;
          *plVar20 = lVar11;
          plVar20 = plVar20 + -4;
          plVar18[-3] = 0;
          *plVar21 = 0;
          plVar18[-1] = 0;
          plVar18[-2] = 0;
          plVar18 = plVar21;
        } while (uVar15 != 0);
        plVar14 = plVar14 + -uVar10;
        plVar17 = plVar17 + -uVar10;
        if (uVar16 != uVar10) goto LAB_001113d4;
      }
      plVar17 = (long *)*in_x8;
      plVar22 = (long *)in_x8[1];
      *in_x8 = (ulong)plVar14;
      in_x8[1] = (ulong)plVar19;
      in_x8[2] = (ulong)pvVar8;
      while (plVar22 != plVar17) {
        plVar22 = plVar22 + -1;
        if ((undefined8 *)*plVar22 != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)*plVar22)();
        }
      }
      if (plVar17 != (long *)0x0) goto LAB_0011142c;
    }
    in_x8[1] = (ulong)plVar19;
    if ((undefined8 *)CONCAT71(uStack_87,local_88) != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)CONCAT71(uStack_87,local_88))();
    }
  }
  operator_delete(plVar9);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_001115c4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001115c8  FUN_001115c8 =====

void FUN_001115c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00111688("vector");
}


// ===== 001115dc  FUN_001115dc =====

void FUN_001115dc(void)

{
  bad_array_new_length *this;
  
  this = (bad_array_new_length *)__cxa_allocate_exception(8);
  std::bad_array_new_length::bad_array_new_length(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_typeinfo_0011a198,PTR__bad_array_new_length_0011a170);
}


// ===== 00111610  FUN_00111610 =====

void FUN_00111610(undefined8 *param_1)

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


// ===== 00111688  FUN_00111688 =====

void FUN_00111688(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 001116a4 to 001116ab has its CatchHandler @ 001116c4 */
  FUN_001116d8(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_typeinfo_0011a188,PTR__length_error_0011a168);
}


// ===== 001116d8  FUN_001116d8 =====

void FUN_001116d8(logic_error *param_1,char *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  *(undefined **)param_1 = PTR_vtable_0011a190 + 0x10;
  return;
}


// ===== 00111708  RNScreens::RNScreensTurboModule::startTransition =====

/* RNScreens::RNScreensTurboModule::startTransition(facebook::jsi::Runtime&, facebook::jsi::Value
   const&, facebook::jsi::Value const*, unsigned long) */

void __thiscall
RNScreens::RNScreensTurboModule::startTransition
          (RNScreensTurboModule *this,Runtime *param_1,Value *param_2,Value *param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 *in_x8;
  double dVar4;
  undefined4 local_90 [2];
  double local_88;
  undefined4 local_80 [4];
  undefined4 local_70 [4];
  int local_60 [4];
  undefined8 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_3 == (Value *)0x0) {
    uVar3 = __cxa_allocate_exception(0x60);
                    /* try { // try from 00111930 to 0011193f has its CatchHandler @ 0011197c */
    FUN_00111d14(uVar3,this,"[RNScreens] `startTransition` method requires 1 argument.");
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(uVar3,PTR_typeinfo_0011a180,PTR__JSError_0011a160);
    }
  }
  else {
    dVar4 = (double)facebook::jsi::Value::asNumber();
    local_60[0] = (int)dVar4;
    plVar2 = *(long **)(PTR_startTransition__0011a118 + 0x20);
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
        uVar3 = FUN_00111e3c();
                    /* catch() { ... } // from try @ 00111930 with catch @ 0011197c */
        __cxa_free_exception();
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_0010bbb4(uVar3);
        }
      }
    }
    else {
      uVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,local_60);
      (**(code **)(*(long *)this + 0x130))(&local_50,this);
      local_60[0] = 0;
      local_70[0] = 0;
      local_80[0] = 0;
      if ((int)uVar3 < 0) {
        local_90[0] = 3;
        local_88 = -1.0;
        facebook::jsi::Value::~Value((Value *)local_60);
        facebook::jsi::Value::Value((Value *)local_60,(Value *)local_90);
        facebook::jsi::Value::~Value((Value *)local_90);
        local_90[0] = 3;
        local_88 = -1.0;
        facebook::jsi::Value::~Value((Value *)local_70);
        facebook::jsi::Value::Value((Value *)local_70,(Value *)local_90);
        facebook::jsi::Value::~Value((Value *)local_90);
        local_88 = (double)((ulong)local_88 & 0xffffffffffffff00);
      }
      else {
        local_88 = (double)(int)uVar3;
        local_90[0] = 3;
        facebook::jsi::Value::~Value((Value *)local_60);
        facebook::jsi::Value::Value((Value *)local_60,(Value *)local_90);
        facebook::jsi::Value::~Value((Value *)local_90);
        local_88 = (double)(int)((ulong)uVar3 >> 0x20);
        local_90[0] = 3;
        facebook::jsi::Value::~Value((Value *)local_70);
        facebook::jsi::Value::Value((Value *)local_70,(Value *)local_90);
        facebook::jsi::Value::~Value((Value *)local_90);
        local_88 = (double)CONCAT71(local_88._1_7_,1);
      }
      local_90[0] = 2;
      facebook::jsi::Value::~Value((Value *)local_80);
      facebook::jsi::Value::Value((Value *)local_80,(Value *)local_90);
      facebook::jsi::Value::~Value((Value *)local_90);
                    /* try { // try from 00111874 to 001118bb has its CatchHandler @ 0011198c */
      FUN_00111f44(&local_50,this,"topScreenTag",local_60);
      FUN_00111f44(&local_50,this,"belowTopScreenTag",local_70);
      FUN_00111f44(&local_50,this,"canStartTransition",local_80);
      *in_x8 = 7;
      *(undefined8 **)(in_x8 + 2) = local_50;
      local_50 = (undefined8 *)0x0;
      facebook::jsi::Value::~Value((Value *)local_80);
      facebook::jsi::Value::~Value((Value *)local_70);
      facebook::jsi::Value::~Value((Value *)local_60);
      if (local_50 != (undefined8 *)0x0) {
        (**(code **)*local_50)();
      }
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001119d8  RNScreens::RNScreensTurboModule::updateTransition =====

/* RNScreens::RNScreensTurboModule::updateTransition(facebook::jsi::Runtime&, facebook::jsi::Value
   const&, facebook::jsi::Value const*, unsigned long) */

void __thiscall
RNScreens::RNScreensTurboModule::updateTransition
          (RNScreensTurboModule *this,Runtime *param_1,Value *param_2,Value *param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 *in_x8;
  int iVar4;
  double dVar5;
  undefined8 local_48;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_3 < (Value *)0x2) {
    uVar3 = __cxa_allocate_exception(0x60);
                    /* try { // try from 00111a80 to 00111a8f has its CatchHandler @ 00111acc */
    FUN_00111d14(uVar3,this,"[RNScreens] `updateTransition` requires 2 arguments.");
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(uVar3,PTR_typeinfo_0011a180,PTR__JSError_0011a160);
    }
  }
  else {
    dVar5 = (double)facebook::jsi::Value::asNumber();
    iVar4 = (int)dVar5;
    local_48 = facebook::jsi::Value::asNumber();
    plVar2 = *(long **)(PTR_updateTransition__0011a120 + 0x20);
    local_3c = iVar4;
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
        uVar3 = FUN_00111e3c();
                    /* catch() { ... } // from try @ 00111a80 with catch @ 00111acc */
        if (*(long *)(lVar1 + 0x28) == local_38) {
          __cxa_free_exception();
                    /* WARNING: Subroutine does not return */
          FUN_0010bbb4(uVar3);
        }
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_3c,&local_48);
      *in_x8 = 0;
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00111af4  RNScreens::RNScreensTurboModule::finishTransition =====

/* RNScreens::RNScreensTurboModule::finishTransition(facebook::jsi::Runtime&, facebook::jsi::Value
   const&, facebook::jsi::Value const*, unsigned long) */

void __thiscall
RNScreens::RNScreensTurboModule::finishTransition
          (RNScreensTurboModule *this,Runtime *param_1,Value *param_2,Value *param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 *in_x8;
  double dVar4;
  Value local_40 [4];
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_3 < (Value *)0x2) {
    uVar3 = __cxa_allocate_exception(0x60);
                    /* try { // try from 00111b98 to 00111ba7 has its CatchHandler @ 00111be4 */
    FUN_00111d14(uVar3,this,"[RNScreens] `finishTransition` requires 2 arguments.");
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(uVar3,PTR_typeinfo_0011a180,PTR__JSError_0011a160);
    }
  }
  else {
    dVar4 = (double)facebook::jsi::Value::asNumber();
    local_3c = (int)dVar4;
    local_40[0] = param_2[0x18];
    plVar2 = *(long **)(PTR_finishTransition__0011a128 + 0x20);
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
        uVar3 = FUN_00111e3c();
                    /* catch() { ... } // from try @ 00111b98 with catch @ 00111be4 */
        if (*(long *)(lVar1 + 0x28) == local_38) {
          __cxa_free_exception();
                    /* WARNING: Subroutine does not return */
          FUN_0010bbb4(uVar3);
        }
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_3c,local_40);
      *in_x8 = 0;
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00111c0c  RNScreens::RNScreensTurboModule::disableSwipeBackForTopScreen =====

/* RNScreens::RNScreensTurboModule::disableSwipeBackForTopScreen(facebook::jsi::Runtime&,
   facebook::jsi::Value const&, facebook::jsi::Value const*, unsigned long) */

void __thiscall
RNScreens::RNScreensTurboModule::disableSwipeBackForTopScreen
          (RNScreensTurboModule *this,Runtime *param_1,Value *param_2,Value *param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 *in_x8;
  double dVar4;
  long local_38;
  int local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_3 == (Value *)0x0) {
    uVar3 = __cxa_allocate_exception(0x60);
                    /* try { // try from 00111c98 to 00111ca7 has its CatchHandler @ 00111ce8 */
    FUN_00111d14(uVar3,this,"[RNScreens] `startTransition` method requires 1 argument.");
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(uVar3,PTR_typeinfo_0011a180,PTR__JSError_0011a160);
    }
  }
  else {
    dVar4 = (double)facebook::jsi::Value::asNumber();
    local_2c = (int)dVar4;
    plVar2 = *(long **)(PTR_disableSwipeBackForTopScreen__0011a130 + 0x20);
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == local_28) {
        uVar3 = FUN_00111e3c();
                    /* catch() { ... } // from try @ 00111c98 with catch @ 00111ce8 */
        if (*(long *)(local_38 + 0x28) == local_28) {
          __cxa_free_exception();
                    /* WARNING: Subroutine does not return */
          FUN_0010bbb4(uVar3);
        }
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_2c);
      *in_x8 = 0;
      if (*(long *)(lVar1 + 0x28) == local_28) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00111d14  FUN_00111d14 =====

void FUN_00111d14(JSError *param_1,undefined8 param_2,char *param_3)

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
  __n = strlen(param_3);
  if (0xffffffffffffffef < __n) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
      uVar2 = FUN_00111e94();
                    /* catch() { ... } // from try @ 00111dac with catch @ 00111e0c */
      if ((local_70 & 1) != 0) {
        operator_delete(local_60);
      }
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_0010bbb4(uVar2);
      }
    }
    goto LAB_00111e38;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00111d98;
  }
  else {
    __dest = operator_new((__n | 0xf) + 1);
    local_70 = (__n | 0xf) + 2;
    local_68 = __n;
    local_60 = __dest;
LAB_00111d98:
    memcpy(__dest,param_3,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 00111dac to 00111dbb has its CatchHandler @ 00111e0c */
  facebook::jsi::JSError::JSError(param_1,param_2,&local_70);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_00111e38:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00111e3c  FUN_00111e3c =====

void FUN_00111e3c(void)

{
  long *plVar1;
  
  plVar1 = (long *)__cxa_allocate_exception(8);
  *plVar1 = (long)(PTR_vtable_0011a158 + 0x10);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar1,PTR_typeinfo_0011a150,PTR__exception_0011a178);
}


// ===== 00111e70  FUN_00111e70 =====

void FUN_00111e70(exception *param_1)

{
  std::exception::~exception(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00111e94  FUN_00111e94 =====

void FUN_00111e94(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00111688("basic_string");
}


// ===== 00111ea8  FUN_00111ea8 =====

void FUN_00111ea8(void)

{
  return;
}


// ===== 00111eac  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0011a298)();
  return;
}


// ===== 00111eb0  FUN_00111eb0 =====

void FUN_00111eb0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00119850;
  puVar1[1] = uVar2;
  return;
}


// ===== 00111ee4  FUN_00111ee4 =====

void FUN_00111ee4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00119850;
  param_2[1] = uVar1;
  return;
}


// ===== 00111ef8  FUN_00111ef8 =====

void FUN_00111ef8(void)

{
  return;
}


// ===== 00111efc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0011a298)();
  return;
}


// ===== 00111f00  FUN_00111f00 =====

void FUN_00111f00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00111f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))(param_2,param_3,*param_4,*param_5);
  return;
}


// ===== 00111f1c  FUN_00111f1c =====

long FUN_00111f1c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0011a140) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00111f38  FUN_00111f38 =====

undefined * FUN_00111f38(void)

{
  return PTR_typeinfo_0011a148;
}


// ===== 00111f44  FUN_00111f44 =====

void FUN_00111f44(undefined8 param_1,IRuntime *param_2,char *param_3,Value *param_4)

{
  long lVar1;
  size_t sVar2;
  undefined8 *local_60;
  Value aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  sVar2 = strlen(param_3);
  (**(code **)(*(long *)param_2 + 0x108))(&local_60,param_2,param_3,sVar2);
                    /* try { // try from 00111f9c to 00111fab has its CatchHandler @ 0011201c */
  facebook::jsi::Value::Value(aVStack_58,param_2,param_4);
                    /* try { // try from 00111fb4 to 00111fc7 has its CatchHandler @ 0011200c */
  (**(code **)(*(long *)param_2 + 0x1b8))(param_2,param_1,&local_60,aVStack_58);
  facebook::jsi::Value::~Value(aVStack_58);
  if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00112050  RNScreens::RNScreensTurboModule::~RNScreensTurboModule =====

/* RNScreens::RNScreensTurboModule::~RNScreensTurboModule() */

void __thiscall RNScreens::RNScreensTurboModule::~RNScreensTurboModule(RNScreensTurboModule *this)

{
  (*(code *)PTR__HostObject_0011a290)();
  return;
}


// ===== 00112054  RNSScreenRemovalListener::pullTransaction =====

/* RNSScreenRemovalListener::pullTransaction(int, long, facebook::react::TransactionTelemetry
   const&, std::__ndk1::vector<facebook::react::ShadowViewMutation,
   std::__ndk1::allocator<facebook::react::ShadowViewMutation> >) const */

void RNSScreenRemovalListener::pullTransaction
               (undefined8 *param_1,long param_2,undefined4 param_3_00,undefined8 param_3,
               undefined8 *param_5,undefined8 *param_6)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long **pplVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  long local_180 [4];
  long *local_160;
  undefined4 local_150;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long local_b0 [4];
  long *local_90 [2];
  undefined4 local_80;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  pcVar2 = (char *)param_6[1];
  for (pcVar1 = (char *)*param_6; pcVar1 != pcVar2; pcVar1 = pcVar1 + 0x160) {
    if (((*pcVar1 == '\b') && (*(char **)(pcVar1 + 8) != (char *)0x0)) &&
       (iVar5 = strcmp(*(char **)(pcVar1 + 8),"RNSScreen"), iVar5 == 0)) {
      local_140 = *(undefined4 *)(pcVar1 + 0x1c);
      plVar6 = *(long **)(param_2 + 0x30);
      if (plVar6 == (long *)0x0) {
        if (*(long *)(lVar3 + 0x28) == local_70) {
          FUN_00111e3c();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00112208 with catch @ 00112448
                        */
          FUN_00110828();
        }
        goto LAB_00112498;
      }
      (**(code **)(*plVar6 + 0x30))(plVar6,&local_140);
    }
  }
  uStack_1b8 = param_5[5];
  local_1c0 = param_5[4];
  uStack_1a8 = param_5[7];
  uStack_1b0 = param_5[6];
  local_190 = param_5[10];
  uStack_198 = param_5[9];
  local_1a0 = param_5[8];
  plVar7 = (long *)param_5[0x10];
  uStack_1d8 = param_5[1];
  local_1e0 = *param_5;
  uStack_1c8 = param_5[3];
  uStack_1d0 = param_5[2];
  plVar6 = local_180;
  if (plVar7 == (long *)0x0) {
    local_160 = (long *)0x0;
  }
  else if (plVar7 == param_5 + 0xc) {
    local_160 = plVar6;
    (**(code **)(*plVar7 + 0x18))(plVar7,plVar6);
  }
  else {
    local_160 = (long *)(**(code **)(*plVar7 + 0x10))();
  }
  local_150 = *(undefined4 *)(param_5 + 0x12);
                    /* try { // try from 00112174 to 0011218f has its CatchHandler @ 0011244c */
  facebook::react::MountingTransaction::MountingTransaction
            ((MountingTransaction *)&local_140,param_3_00,param_3,param_6,&local_1e0);
  param_1[4] = local_120;
  param_1[1] = uStack_138;
  *param_1 = CONCAT44(uStack_13c,local_140);
  param_1[3] = local_128;
  param_1[2] = local_130;
  param_1[0x10] = local_c0;
  local_130 = (undefined8 *)0x0;
  local_128 = (undefined8 *)0x0;
  param_1[0xb] = uStack_e8;
  param_1[10] = local_f0;
  param_1[0xd] = uStack_d8;
  param_1[0xc] = uStack_e0;
  local_120 = 0;
  param_1[0xf] = uStack_c8;
  param_1[0xe] = local_d0;
  param_1[7] = uStack_108;
  param_1[6] = local_110;
  param_1[9] = uStack_f8;
  param_1[8] = uStack_100;
  if (local_90[0] == (long *)0x0) {
    pplVar8 = (long **)(param_1 + 0x16);
LAB_001121f0:
    *pplVar8 = (long *)0x0;
  }
  else {
    if (local_90[0] != local_b0) {
      pplVar8 = local_90;
      param_1[0x16] = local_90[0];
      goto LAB_001121f0;
    }
    param_1[0x16] = param_1 + 0x12;
                    /* try { // try from 00112208 to 0011220b has its CatchHandler @ 00112448 */
    (**(code **)(*local_90[0] + 0x18))();
  }
  plVar7 = local_b0;
  *(undefined4 *)(param_1 + 0x18) = local_80;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  if (local_90[0] == plVar7) {
    lVar9 = 4;
LAB_00112244:
    (**(code **)(*plVar7 + lVar9 * 8))();
  }
  else if (local_90[0] != (long *)0x0) {
    lVar9 = 5;
    plVar7 = local_90[0];
    goto LAB_00112244;
  }
  puVar4 = local_130;
  if (local_130 != (undefined8 *)0x0) {
    if (local_128 != local_130) {
      puVar11 = local_128 + -0x11;
      do {
        plVar7 = (long *)puVar11[0xf];
        if ((plVar7 == (long *)0x0) ||
           (lVar9 = FUN_0010f880(0xffffffffffffffff,plVar7 + 1), lVar9 != 0)) {
          plVar7 = (long *)puVar11[2];
        }
        else {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          std::__ndk1::__shared_weak_count::__release_weak();
          plVar7 = (long *)puVar11[2];
        }
        if ((plVar7 != (long *)0x0) &&
           (lVar9 = FUN_0010f880(0xffffffffffffffff,plVar7 + 1), lVar9 == 0)) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        plVar7 = (long *)*puVar11;
        if ((plVar7 == (long *)0x0) ||
           (lVar9 = FUN_0010f880(0xffffffffffffffff,plVar7 + 1), lVar9 != 0)) {
          plVar7 = (long *)puVar11[-6];
        }
        else {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          std::__ndk1::__shared_weak_count::__release_weak();
          plVar7 = (long *)puVar11[-6];
        }
        if ((plVar7 != (long *)0x0) &&
           (lVar9 = FUN_0010f880(0xffffffffffffffff,plVar7 + 1), lVar9 == 0)) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        plVar7 = (long *)puVar11[-0x13];
        if ((plVar7 == (long *)0x0) ||
           (lVar9 = FUN_0010f880(0xffffffffffffffff,plVar7 + 1), lVar9 != 0)) {
          plVar7 = (long *)puVar11[-0x15];
        }
        else {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          std::__ndk1::__shared_weak_count::__release_weak();
          plVar7 = (long *)puVar11[-0x15];
        }
        if ((plVar7 != (long *)0x0) &&
           (lVar9 = FUN_0010f880(0xffffffffffffffff,plVar7 + 1), lVar9 == 0)) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        puVar10 = puVar11 + -0x1b;
        puVar11 = puVar11 + -0x2c;
      } while (puVar10 != puVar4);
    }
    local_128 = puVar4;
    operator_delete(local_130);
  }
  if (local_160 == plVar6) {
    lVar9 = 4;
  }
  else {
    if (local_160 == (long *)0x0) goto LAB_00112404;
    lVar9 = 5;
    plVar6 = local_160;
  }
  (**(code **)(*plVar6 + lVar9 * 8))(plVar6);
LAB_00112404:
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
LAB_00112498:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011249c  RNSScreenRemovalListener::shouldOverridePullTransaction =====

/* RNSScreenRemovalListener::shouldOverridePullTransaction() const */

undefined8 RNSScreenRemovalListener::shouldOverridePullTransaction(void)

{
  return 1;
}


// ===== 001124a4  FUN_001124a4 =====

void FUN_001124a4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = (long)(PTR_vtable_0011a1a0 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x001124e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 001124ec  FUN_001124ec =====

void FUN_001124ec(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = (long)(PTR_vtable_0011a1a0 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0011253c;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_0011253c:
  operator_delete(param_1);
  return;
}


// ===== 0011254c  Java_com_swmansion_rnscreens_ScreensModule_nativeInstall =====

void Java_com_swmansion_rnscreens_ScreensModule_nativeInstall
               (long *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined ***pppuVar6;
  RNScreensTurboModule **ppRVar7;
  long lVar8;
  long *plVar9;
  undefined8 local_128;
  undefined **local_120 [4];
  undefined ***local_100;
  undefined **local_f0;
  undefined8 uStack_e8;
  undefined ***local_d0;
  undefined **local_c0;
  undefined8 uStack_b8;
  undefined ***local_a0;
  RNScreensTurboModule *local_90;
  long *local_88;
  RNScreensTurboModule **local_70;
  long local_58;
  
  puVar2 = PTR_globalThis_0011a1a8;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_3 == (long *)0x0) goto LAB_0011288c;
  if (*(long *)PTR_globalThis_0011a1a8 != 0) {
    (**(code **)(*param_1 + 0xb0))(param_1,*(long *)PTR_globalThis_0011a1a8);
  }
  uVar4 = (**(code **)(*param_1 + 0xa8))(param_1,param_2);
  *(undefined8 *)puVar2 = uVar4;
  (**(code **)(*param_1 + 0x6d8))(param_1,&local_128);
  plVar5 = (long *)operator_new(0x20);
  *plVar5 = (long)&PTR_FUN_00119968;
  local_90 = (RNScreensTurboModule *)&PTR_FUN_001199b8;
  local_88 = (long *)local_128;
  local_70 = &local_90;
  local_c0 = &PTR_FUN_00119a48;
  uStack_b8 = local_128;
  local_a0 = &local_c0;
  local_f0 = &PTR_FUN_00119ad8;
  uStack_e8 = local_128;
  local_d0 = &local_f0;
  plVar5[2] = 0;
  plVar9 = plVar5 + 1;
  *plVar9 = 0;
  local_120[0] = &PTR_FUN_00119b68;
                    /* try { // try from 00112650 to 00112667 has its CatchHandler @ 00112984 */
  local_100 = local_120;
  RNScreens::RNScreensTurboModule::RNScreensTurboModule
            ((RNScreensTurboModule *)(plVar5 + 3),&local_90,&local_c0,&local_f0,local_120);
  if (local_100 == local_120) {
    lVar8 = 4;
    pppuVar6 = local_120;
LAB_00112688:
    (*(code *)(*pppuVar6)[lVar8])();
  }
  else if (local_100 != (undefined ***)0x0) {
    lVar8 = 5;
    pppuVar6 = local_100;
    goto LAB_00112688;
  }
  if (local_d0 == &local_f0) {
    lVar8 = 4;
    pppuVar6 = &local_f0;
LAB_001126b8:
    (*(code *)(*pppuVar6)[lVar8])();
  }
  else if (local_d0 != (undefined ***)0x0) {
    lVar8 = 5;
    pppuVar6 = local_d0;
    goto LAB_001126b8;
  }
  if (local_a0 == &local_c0) {
    lVar8 = 4;
    pppuVar6 = &local_c0;
LAB_001126e8:
    (*(code *)(*pppuVar6)[lVar8])();
  }
  else if (local_a0 != (undefined ***)0x0) {
    lVar8 = 5;
    pppuVar6 = local_a0;
    goto LAB_001126e8;
  }
  if (local_70 == &local_90) {
    lVar8 = 4;
    ppRVar7 = &local_90;
LAB_00112718:
    (**(code **)(*ppRVar7 + lVar8 * 8))();
  }
  else if (local_70 != (RNScreensTurboModule **)0x0) {
    lVar8 = 5;
    ppRVar7 = local_70;
    goto LAB_00112718;
  }
  FUN_0010ff70(1,plVar5 + 1);
  local_90 = (RNScreensTurboModule *)(plVar5 + 3);
  local_88 = plVar5;
  FUN_0010ff70(1,plVar5 + 1);
                    /* try { // try from 00112748 to 00112757 has its CatchHandler @ 00112948 */
  (**(code **)(*param_3 + 0x138))(&local_f0,param_3,&local_90);
  plVar3 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar8 = FUN_0010f880(0xffffffffffffffff,local_88 + 1), lVar8 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  lVar8 = FUN_0010f880(0xffffffffffffffff,plVar9);
  if (lVar8 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 001127b8 to 001127c3 has its CatchHandler @ 0011292c */
  (**(code **)(*param_3 + 0x30))(local_120,param_3);
                    /* try { // try from 001127cc to 001127e3 has its CatchHandler @ 00112908 */
  (**(code **)(*param_3 + 0x108))(&local_c0,param_3,PTR_MODULE_NAME_0011a110,0x14);
  local_90 = (RNScreensTurboModule *)CONCAT44(local_90._4_4_,7);
                    /* try { // try from 001127f8 to 001127ff has its CatchHandler @ 001128c8 */
  local_88 = (long *)(**(code **)(*param_3 + 0x88))(param_3,local_f0);
                    /* try { // try from 0011280c to 0011281f has its CatchHandler @ 001128b8 */
  (**(code **)(*param_3 + 0x1b8))(param_3,local_120,&local_c0,&local_90);
  facebook::jsi::Value::~Value((Value *)&local_90);
  if (local_c0 != (undefined **)0x0) {
    (**(code **)*local_c0)();
  }
  if (local_120[0] != (undefined **)0x0) {
    (**(code **)*local_120[0])();
  }
  if (local_f0 != (undefined **)0x0) {
    (**(code **)*local_f0)();
  }
  lVar8 = FUN_0010f880(0xffffffffffffffff,plVar9);
  if (lVar8 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
LAB_0011288c:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00112a5c  FUN_00112a5c =====

void FUN_00112a5c(long *param_1)

{
  long lVar1;
  
  if ((param_1 != (long *)0x0) && (lVar1 = FUN_0010f880(0xffffffffffffffff,param_1 + 1), lVar1 == 0)
     ) {
    (**(code **)(*param_1 + 0x10))(param_1);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00112aac  FUN_00112aac =====

void FUN_00112aac(long *param_1)

{
  long lVar1;
  
  if ((param_1 != (long *)0x0) && (lVar1 = FUN_0010f880(0xffffffffffffffff,param_1 + 1), lVar1 == 0)
     ) {
    (**(code **)(*param_1 + 0x10))(param_1);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00112afc  FUN_00112afc =====

void FUN_00112afc(void)

{
  return;
}


// ===== 00112b00  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0011a298)();
  return;
}


// ===== 00112b04  FUN_00112b04 =====

void FUN_00112b04(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_00119b68;
  return;
}


// ===== 00112b28  FUN_00112b28 =====

void FUN_00112b28(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00119b68;
  return;
}


// ===== 00112b38  FUN_00112b38 =====

void FUN_00112b38(void)

{
  return;
}


// ===== 00112b3c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0011a298)();
  return;
}


// ===== 00112b40  FUN_00112b40 =====

void FUN_00112b40(void)

{
  return;
}


// ===== 00112b44  FUN_00112b44 =====

long FUN_00112b44(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) != "Z56Java_com_swmansion_rnscreens_ScreensModule_nativeInstallE3$_3")
  {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00112b60  FUN_00112b60 =====

pointer_____offset_0x10___ * FUN_00112b60(void)

{
  return &PTR_vtable_00119bc8;
}


// ===== 00112b6c  FUN_00112b6c =====

void FUN_00112b6c(void)

{
  return;
}


// ===== 00112b70  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0011a298)();
  return;
}


// ===== 00112b74  FUN_00112b74 =====

void FUN_00112b74(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00119ad8;
  puVar1[1] = uVar2;
  return;
}


// ===== 00112ba8  FUN_00112ba8 =====

void FUN_00112ba8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00119ad8;
  param_2[1] = uVar1;
  return;
}


// ===== 00112bbc  FUN_00112bbc =====

void FUN_00112bbc(void)

{
  return;
}


// ===== 00112bc0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0011a298)();
  return;
}


// ===== 00112bc4  FUN_00112bc4 =====

void FUN_00112bc4(long param_1,uint *param_2,byte *param_3)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  _jmethodID *p_Var7;
  undefined8 uVar8;
  _jclass *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar1 = *param_2;
  bVar2 = *param_3;
  iVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x20))(*(long **)(param_1 + 8),&local_50,0);
  puVar4 = PTR_globalThis_0011a1a8;
  if (iVar5 == 0) {
    uVar6 = (**(code **)(*(long *)local_50 + 0xf8))(local_50,*(undefined8 *)PTR_globalThis_0011a1a8)
    ;
    uVar6 = (**(code **)(*(long *)local_50 + 0x108))
                      (local_50,uVar6,"finishTransition","(Ljava/lang/Integer;Z)V");
    p_Var7 = (_jmethodID *)(**(code **)(*(long *)local_50 + 0x30))(local_50,"java/lang/Integer");
    uVar8 = (**(code **)(*(long *)local_50 + 0x108))(local_50,p_Var7,"<init>",&DAT_00107acd);
    uVar8 = _JNIEnv::NewObject(local_50,p_Var7,uVar8,(ulong)uVar1);
    _JNIEnv::CallVoidMethod((_jobject *)local_50,*(_jmethodID **)puVar4,uVar6,uVar8,(ulong)bVar2);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00112cfc  FUN_00112cfc =====

long FUN_00112cfc(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) != "Z56Java_com_swmansion_rnscreens_ScreensModule_nativeInstallE3$_2")
  {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00112d18  FUN_00112d18 =====

pointer_____offset_0x10___ * FUN_00112d18(void)

{
  return &PTR_vtable_00119b48;
}


// ===== 00112d24  _JNIEnv::NewObject =====

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


// ===== 00112dc0  _JNIEnv::CallVoidMethod =====

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


// ===== 00112e5c  FUN_00112e5c =====

void FUN_00112e5c(void)

{
  return;
}


// ===== 00112e60  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0011a298)();
  return;
}


// ===== 00112e64  FUN_00112e64 =====

void FUN_00112e64(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00119a48;
  puVar1[1] = uVar2;
  return;
}


// ===== 00112e98  FUN_00112e98 =====

void FUN_00112e98(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00119a48;
  param_2[1] = uVar1;
  return;
}


// ===== 00112eac  FUN_00112eac =====

void FUN_00112eac(void)

{
  return;
}


// ===== 00112eb0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0011a298)();
  return;
}


// ===== 00112eb4  FUN_00112eb4 =====

void FUN_00112eb4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  _jobject *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = *param_3;
  iVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x20))(*(long **)(param_1 + 8),&local_40,0);
  puVar2 = PTR_globalThis_0011a1a8;
  if (iVar3 == 0) {
    uVar4 = (**(code **)(*(long *)local_40 + 0xf8))(local_40,*(undefined8 *)PTR_globalThis_0011a1a8)
    ;
    uVar4 = (**(code **)(*(long *)local_40 + 0x108))
                      (local_40,uVar4,"updateTransition",&DAT_00107597);
    _JNIEnv::CallVoidMethod(local_40,*(_jmethodID **)puVar2,uVar5,uVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00112f78  FUN_00112f78 =====

long FUN_00112f78(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) != "Z56Java_com_swmansion_rnscreens_ScreensModule_nativeInstallE3$_1")
  {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00112f94  FUN_00112f94 =====

pointer_____offset_0x10___ * FUN_00112f94(void)

{
  return &PTR_vtable_00119ab8;
}


// ===== 00112fa0  FUN_00112fa0 =====

void FUN_00112fa0(void)

{
  return;
}


// ===== 00112fa4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0011a298)();
  return;
}


// ===== 00112fa8  FUN_00112fa8 =====

void FUN_00112fa8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_001199b8;
  puVar1[1] = uVar2;
  return;
}


// ===== 00112fdc  FUN_00112fdc =====

void FUN_00112fdc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_001199b8;
  param_2[1] = uVar1;
  return;
}


// ===== 00112ff0  FUN_00112ff0 =====

void FUN_00112ff0(void)

{
  return;
}


// ===== 00112ff4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0011a298)();
  return;
}


// ===== 00112ff8  FUN_00112ff8 =====

ulong FUN_00112ff8(long param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  _jmethodID *p_Var6;
  undefined8 uVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  _jclass *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar1 = *param_2;
  iVar4 = (**(code **)(**(long **)(param_1 + 8) + 0x20))(*(long **)(param_1 + 8),&local_50,0);
  puVar3 = PTR_globalThis_0011a1a8;
  uVar9 = 0;
  uVar10 = 0;
  if (iVar4 == 0) {
    uVar5 = (**(code **)(*(long *)local_50 + 0xf8))(local_50,*(undefined8 *)PTR_globalThis_0011a1a8)
    ;
    uVar5 = (**(code **)(*(long *)local_50 + 0x108))
                      (local_50,uVar5,"startTransition","(Ljava/lang/Integer;)[I");
    p_Var6 = (_jmethodID *)(**(code **)(*(long *)local_50 + 0x30))(local_50,"java/lang/Integer");
    uVar7 = (**(code **)(*(long *)local_50 + 0x108))(local_50,p_Var6,"<init>",&DAT_00107acd);
    uVar7 = _JNIEnv::NewObject(local_50,p_Var6,uVar7,(ulong)uVar1);
    uVar5 = _JNIEnv::CallObjectMethod((_jobject *)local_50,*(_jmethodID **)puVar3,uVar5,uVar7);
    puVar8 = (uint *)(**(code **)(*(long *)local_50 + 0x5d8))(local_50,uVar5,0);
    if (puVar8 == (uint *)0x0) {
      uVar9 = 0xffffffff00000000;
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = (ulong)*puVar8;
      uVar1 = puVar8[1];
      (**(code **)(*(long *)local_50 + 0x618))(local_50,uVar5,puVar8,2);
      uVar9 = (ulong)uVar1 << 0x20;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar10 | uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00113188  FUN_00113188 =====

long FUN_00113188(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) != "Z56Java_com_swmansion_rnscreens_ScreensModule_nativeInstallE3$_0")
  {
    param_1 = 0;
  }
  return param_1;
}


// ===== 001131a4  FUN_001131a4 =====

pointer_____offset_0x10___ * FUN_001131a4(void)

{
  return &PTR_vtable_00119a28;
}


// ===== 001131b0  _JNIEnv::CallObjectMethod =====

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


// ===== 0011324c  FUN_0011324c =====

void FUN_0011324c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00119968;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0011325c  FUN_0011325c =====

void FUN_0011325c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00119968;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0011328c  FUN_0011328c =====

void FUN_0011328c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00113294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00113298  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0011a298)();
  return;
}


// ===== 0011329c  Java_com_swmansion_rnscreens_ScreensModule_nativeUninstall =====

void Java_com_swmansion_rnscreens_ScreensModule_nativeUninstall(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_globalThis_0011a1a8;
  if (*(long *)PTR_globalThis_0011a1a8 != 0) {
    (**(code **)(*param_1 + 0xb0))();
    *(undefined8 *)puVar1 = 0;
  }
  return;
}


// ===== 001132d4  JNI_OnUnload =====

void JNI_OnUnload(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar3 = (**(code **)(*param_1 + 0x30))(param_1,&local_30,0x10006);
  puVar2 = PTR_globalThis_0011a1a8;
  if (iVar3 == 0) {
    if (*(long *)PTR_globalThis_0011a1a8 != 0) {
      (**(code **)(*local_30 + 0xb0))();
      *(undefined8 *)puVar2 = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00113354  rnscreens::NativeProxy::NativeProxy =====

/* rnscreens::NativeProxy::NativeProxy(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<rnscreens::NativeProxy,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

void __thiscall rnscreens::NativeProxy::NativeProxy(NativeProxy *this,long *param_2)

{
  long *plVar1;
  bad_alloc *this_00;
  long lVar2;
  
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR_FUN_00119be8;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  lVar2 = *param_2;
  if (lVar2 != 0) {
                    /* try { // try from 00113388 to 001133a3 has its CatchHandler @ 001133f0 */
    plVar1 = (long *)facebook::jni::Environment::current();
    lVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1,lVar2);
    facebook::jni::throwPendingJniExceptionAsCppException();
    if (lVar2 == 0) {
      this_00 = (bad_alloc *)__cxa_allocate_exception(8);
      std::bad_alloc::bad_alloc(this_00);
                    /* try { // try from 001133d8 to 001133ef has its CatchHandler @ 001133f0 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,PTR_typeinfo_0011a240,PTR__bad_alloc_0011a238);
    }
  }
  *(long *)(this + 0x30) = lVar2;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  return;
}


// ===== 0011340c  FUN_0011340c =====

void FUN_0011340c(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = (void *)*param_1;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  pvVar3 = (void *)param_1[1];
  pvVar1 = pvVar2;
  if (pvVar3 != pvVar2) {
    do {
      if (*(long *)((long)pvVar3 + -8) != 0) {
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      pvVar3 = (void *)((long)pvVar3 + -0x10);
    } while (pvVar3 != pvVar2);
    pvVar1 = (void *)*param_1;
  }
  param_1[1] = pvVar2;
  operator_delete(pvVar1);
  return;
}


// ===== 00113480  FUN_00113480 =====

void FUN_00113480(long *param_1)

{
  long lVar1;
  
  if ((param_1 != (long *)0x0) && (lVar1 = FUN_0010f880(0xffffffffffffffff,param_1 + 1), lVar1 == 0)
     ) {
    (**(code **)(*param_1 + 0x10))(param_1);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001134d0  FUN_001134d0 =====

void FUN_001134d0(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  
  *param_1 = &PTR_FUN_00119be8;
  std::__ndk1::mutex::~mutex((mutex *)(param_1 + 7));
  lVar3 = param_1[6];
  if (lVar3 != 0) {
                    /* try { // try from 001134fc to 0011350f has its CatchHandler @ 001135a4 */
    plVar1 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb0))(plVar1,lVar3);
  }
  pvVar4 = (void *)param_1[3];
  param_1[6] = 0;
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[4];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        if (*(long *)((long)pvVar5 + -8) != 0) {
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[3];
    }
    param_1[4] = pvVar4;
    operator_delete(pvVar2);
  }
  plVar1 = (long *)param_1[2];
  if ((plVar1 != (long *)0x0) && (lVar3 = FUN_0010f880(0xffffffffffffffff,plVar1 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001135a8  FUN_001135a8 =====

void FUN_001135a8(void *param_1)

{
  FUN_001134d0();
  operator_delete(param_1);
  return;
}


// ===== 001135cc  rnscreens::NativeProxy::registerNatives =====

/* rnscreens::NativeProxy::registerNatives() */

void rnscreens::NativeProxy::registerNatives(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  char *pcVar7;
  long *plVar8;
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
  puStack_78 = PTR_call_00119c20;
  local_80 = PTR_kDescriptor_00119c18;
  puStack_68 = PTR_kDescriptor_00119c30;
  puStack_70 = PTR_s_cleanupExpiredMountingCoordinato_00119c28;
  puStack_58 = PTR_s_invalidateNative_00119c40;
  local_60 = PTR_call_00119c38;
  puStack_48 = PTR_call_00119c50;
  puStack_50 = PTR_kDescriptor_00119c48;
  puStack_98 = PTR_kDescriptor_00119c00;
  local_a0 = PTR_s_initHybrid_00119bf8;
  puStack_88 = PTR_s_nativeAddMutationsListener_00119c10;
  puStack_90 = PTR_call_00119c08;
  pcVar7 = (char *)operator_new(0x30);
  uVar5 = s_Lcom_swmansion_rnscreens_NativeP_00107e1e._25_8_;
  uVar4 = s_Lcom_swmansion_rnscreens_NativeP_00107e1e._17_8_;
  uVar3 = s_Lcom_swmansion_rnscreens_NativeP_00107e1e._9_8_;
  uVar2 = s_Lcom_swmansion_rnscreens_NativeP_00107e1e._1_8_;
  pcVar7[0x23] = '\0';
  pcVar7[0x1f] = 'r';
  pcVar7[0x20] = 'o';
  pcVar7[0x21] = 'x';
  pcVar7[0x22] = 'y';
  *(undefined8 *)(pcVar7 + 8) = uVar3;
  *(undefined8 *)pcVar7 = uVar2;
  *(undefined8 *)(pcVar7 + 0x18) = uVar5;
  *(undefined8 *)(pcVar7 + 0x10) = uVar4;
                    /* try { // try from 0011363c to 00113643 has its CatchHandler @ 001136b4 */
  facebook::jni::findClassLocal(pcVar7);
  operator_delete(pcVar7);
                    /* try { // try from 0011364c to 00113673 has its CatchHandler @ 001136c8 */
  plVar8 = (long *)facebook::jni::Environment::current();
  iVar6 = (**(code **)(*plVar8 + 0x6b8))(plVar8,local_40,&local_a0,4);
  facebook::jni::throwCppExceptionIf(iVar6 != 0);
  if (local_40 != 0) {
                    /* try { // try from 0011367c to 0011368f has its CatchHandler @ 001136c4 */
    plVar8 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar8 + 0xb8))(plVar8,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001136f0  facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

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
                    /* try { // try from 00113708 to 0011371b has its CatchHandler @ 0011372c */
    plVar1 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb8))(plVar1,lVar2);
  }
  *(undefined8 *)this = 0;
  return;
}


// ===== 00113730  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<rnscreens::NativeProxy,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>),&rnscreens::NativeProxy::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<rnscreens::NativeProxy,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<rnscreens::NativeProxy,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>),
   &rnscreens::NativeProxy::initHybrid,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<rnscreens::NativeProxy,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<rnscreens::NativeProxy,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>),&rnscreens::NativeProxy::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<rnscreens::NativeProxy,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>
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
                    /* try { // try from 00113760 to 0011376b has its CatchHandler @ 0011379c */
  local_38 = param_2;
  rnscreens::NativeProxy::initHybrid((NativeProxy *)&local_30,&local_38);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001137e8  facebook::jni::detail::MethodWrapper<void(rnscreens::NativeProxy::*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::react::JFabricUIManager,facebook::jni::JObject,void>::_javaobject*>),&rnscreens::NativeProxy::nativeAddMutationsListener,rnscreens::NativeProxy,void,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::react::JFabricUIManager,facebook::jni::JObject,void>::_javaobject*>>::call =====

/* facebook::jni::detail::MethodWrapper<void
   (rnscreens::NativeProxy::*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::react::JFabricUIManager,
   facebook::jni::JObject, void>::_javaobject*>),
   &rnscreens::NativeProxy::nativeAddMutationsListener, rnscreens::NativeProxy, void,
   facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::react::JFabricUIManager,
   facebook::jni::JObject, void>::_javaobject*> >::call(_JNIEnv*, _jobject*,
   facebook::jni::detail::JTypeFor<facebook::react::JFabricUIManager, facebook::jni::JObject,
   void>::_javaobject*) */

void facebook::jni::detail::
     MethodWrapper<void(rnscreens::NativeProxy::*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::react::JFabricUIManager,facebook::jni::JObject,void>::_javaobject*>),&rnscreens::NativeProxy::nativeAddMutationsListener,rnscreens::NativeProxy,void,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::react::JFabricUIManager,facebook::jni::JObject,void>::_javaobject*>>
     ::call(_JNIEnv *param_1,_jobject *param_2,_javaobject *param_3)

{
  long lVar1;
  JniEnvCacher aJStack_60 [24];
  _javaobject *local_48;
  _jobject *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_60,param_1);
                    /* try { // try from 00113824 to 0011382f has its CatchHandler @ 0011385c */
  local_48 = param_3;
  local_40 = param_2;
  dispatch(&local_40,&local_48);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001138a4  facebook::jni::detail::MethodWrapper<void(rnscreens::NativeProxy::*)(),&rnscreens::NativeProxy::cleanupExpiredMountingCoordinators,rnscreens::NativeProxy,void>::call =====

/* facebook::jni::detail::MethodWrapper<void (rnscreens::NativeProxy::*)(),
   &rnscreens::NativeProxy::cleanupExpiredMountingCoordinators, rnscreens::NativeProxy,
   void>::call(_JNIEnv*, _jobject*) */

void facebook::jni::detail::
     MethodWrapper<void(rnscreens::NativeProxy::*)(),&rnscreens::NativeProxy::cleanupExpiredMountingCoordinators,rnscreens::NativeProxy,void>
     ::call(_JNIEnv *param_1,_jobject *param_2)

{
  FUN_00113a10(param_1,param_2,PTR_dispatch_0011a1b0);
  return;
}


// ===== 001138b0  facebook::jni::detail::MethodWrapper<void(rnscreens::NativeProxy::*)(),&rnscreens::NativeProxy::invalidateNative,rnscreens::NativeProxy,void>::call =====

/* facebook::jni::detail::MethodWrapper<void (rnscreens::NativeProxy::*)(),
   &rnscreens::NativeProxy::invalidateNative, rnscreens::NativeProxy, void>::call(_JNIEnv*,
   _jobject*) */

void facebook::jni::detail::
     MethodWrapper<void(rnscreens::NativeProxy::*)(),&rnscreens::NativeProxy::invalidateNative,rnscreens::NativeProxy,void>
     ::call(_JNIEnv *param_1,_jobject *param_2)

{
  FUN_00113a10(param_1,param_2,PTR_dispatch_0011a1b8);
  return;
}


// ===== 001138bc  facebook::jni::detail::MethodWrapper<void(rnscreens::NativeProxy::*)(),&rnscreens::NativeProxy::invalidateNative,rnscreens::NativeProxy,void>::dispatch =====

/* facebook::jni::detail::MethodWrapper<void (rnscreens::NativeProxy::*)(),
   &rnscreens::NativeProxy::invalidateNative, rnscreens::NativeProxy,
   void>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<rnscreens::NativeProxy,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

void facebook::jni::detail::
     MethodWrapper<void(rnscreens::NativeProxy::*)(),&rnscreens::NativeProxy::invalidateNative,rnscreens::NativeProxy,void>
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
  if (((*PTR_hybridDataField_0011a1c8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_hybridDataField_0011a1c8), iVar2 != 0)) {
    JObject::getClass();
                    /* try { // try from 0011396c to 0011396f has its CatchHandler @ 00113998 */
    uVar5 = FUN_00113b00(local_40);
    *(undefined8 *)PTR_hybridDataField_0011a1c0 = uVar5;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_40);
    __cxa_guard_release(PTR_hybridDataField_0011a1c8);
  }
                    /* try { // try from 001138ec to 001138f7 has its CatchHandler @ 001139b4 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_0011a1c0);
  lVar6 = *(long *)(lVar3 + 0x30);
  if (lVar6 != 0) {
                    /* try { // try from 00113904 to 00113917 has its CatchHandler @ 00113a0c */
    plVar4 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar4 + 0xb0))(plVar4,lVar6);
  }
  *(undefined8 *)(lVar3 + 0x30) = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00113a10  FUN_00113a10 =====

void FUN_00113a10(_JNIEnv *param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  JniEnvCacher aJStack_58 [24];
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_58,param_1);
                    /* try { // try from 00113a48 to 00113a4f has its CatchHandler @ 00113a7c */
  local_40 = param_2;
  (*param_3)(&local_40);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00113ac4  facebook::jni::JObject::getClass =====

/* facebook::jni::JObject::getClass() const */

void facebook::jni::JObject::getClass(void)

{
  undefined8 *in_x0;
  long *plVar1;
  undefined8 uVar2;
  undefined8 *in_x8;
  
                    /* try { // try from 00113ad8 to 00113aeb has its CatchHandler @ 00113afc */
  plVar1 = (long *)facebook::jni::Environment::current();
  uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1,*in_x0);
  *in_x8 = uVar2;
  return;
}


// ===== 00113b00  FUN_00113b00 =====

void FUN_00113b00(undefined8 param_1)

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
    if (((*PTR_cls_0011a1f0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_cls_0011a1f0), iVar2 != 0)) {
                    /* try { // try from 00113bbc to 00113bcf has its CatchHandler @ 00113bf4 */
      facebook::jni::findClassStatic(PTR_kBaseName_0011a1f8);
      __cxa_guard_release(PTR_cls_0011a1f0);
    }
    uVar6 = *(undefined8 *)PTR_cls_0011a1e8;
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar4 = (**(code **)(*plVar5 + 0x2f0))(plVar5,uVar6,"mHybridData",PTR_kDescriptor_0011a200);
    facebook::jni::throwCppExceptionIf(lVar4 == 0);
    if (lVar4 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_28) {
        uVar6 = facebook::jni::throwNPE();
                    /* catch() { ... } // from try @ 00113bbc with catch @ 00113bf4 */
        lVar4 = __cxa_guard_abort(PTR_cls_0011a1f0);
        if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
          FUN_0010bbb4(uVar6);
        }
      }
      goto LAB_00113c1c;
    }
  }
  else {
    lVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_00113c1c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


// ===== 00113c20  facebook::jni::getHybridDataFromField =====

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
                    /* try { // try from 00113cc8 to 00113ccf has its CatchHandler @ 00113d2c */
    uVar4 = facebook::jni::detail::HybridDestructor::getNativePointer();
    if (local_40 != 0) {
                    /* try { // try from 00113cdc to 00113cef has its CatchHandler @ 00113d3c */
      plVar2 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar2 + 0xb8))(plVar2,local_40);
    }
  }
  else {
    uVar4 = *(undefined8 *)param_1;
                    /* try { // try from 00113c4c to 00113c63 has its CatchHandler @ 00113d80 */
    plVar2 = (long *)facebook::jni::Environment::current();
    auVar5 = (**(code **)(*plVar2 + 0x2f8))(plVar2,uVar4,lVar3);
    local_48 = auVar5._0_8_;
    if (local_48 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00113d28 to 00113d2b has its CatchHandler @ 00113d58 */
        uVar4 = throwNPE();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00113cc8 with catch @ 00113d2c
                        */
        base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
        ::~base_owned_ref((base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
                           *)&local_40);
        if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_0010bbb4(uVar4);
        }
      }
      goto LAB_00113d7c;
    }
                    /* try { // try from 00113c6c to 00113c77 has its CatchHandler @ 00113d58 */
    detail::getHolder<facebook::jni::detail::HybridData>((detail *)&local_48,auVar5._8_8_);
                    /* try { // try from 00113c78 to 00113c7f has its CatchHandler @ 00113d40 */
    uVar4 = facebook::jni::detail::HybridDestructor::getNativePointer();
    if (local_40 != 0) {
                    /* try { // try from 00113c8c to 00113c9f has its CatchHandler @ 00113d54 */
      plVar2 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar2 + 0xb8))(plVar2,local_40);
    }
    lVar3 = local_48;
    if (local_48 != 0) {
                    /* try { // try from 00113ca8 to 00113cbb has its CatchHandler @ 00113d50 */
      plVar2 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar2 + 0xb8))(plVar2,lVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
LAB_00113d7c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00113d84  facebook::jni::detail::getHolder<facebook::jni::JObject> =====

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
  
  puVar2 = PTR_holderField_0011a208;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_holderField_0011a210 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_holderField_0011a210), iVar3 != 0)) {
    JObject::getClass();
                    /* try { // try from 00113e30 to 00113e37 has its CatchHandler @ 00113e58 */
    uVar5 = getDestructorField(abStack_40);
    *(undefined8 *)puVar2 = uVar5;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              (abStack_40);
    __cxa_guard_release(PTR_holderField_0011a210);
  }
  uVar5 = *(undefined8 *)puVar2;
  uVar6 = *(undefined8 *)this;
                    /* try { // try from 00113dc8 to 00113ddf has its CatchHandler @ 00113e8c */
  plVar4 = (long *)facebook::jni::Environment::current();
  uVar5 = (**(code **)(*plVar4 + 0x2f8))(plVar4,uVar6,uVar5);
  *in_x8 = uVar5;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00113e90  facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

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
                    /* try { // try from 00113ea8 to 00113ebb has its CatchHandler @ 00113ecc */
    plVar1 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb8))(plVar1,lVar2);
  }
  *(undefined8 *)this = 0;
  return;
}


// ===== 00113ed0  facebook::jni::throwNPE =====

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


// ===== 00113eec  facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

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
                    /* try { // try from 00113f04 to 00113f17 has its CatchHandler @ 00113f28 */
    plVar1 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb8))(plVar1,lVar2);
  }
  *(undefined8 *)this = 0;
  return;
}


// ===== 00113f2c  facebook::jni::detail::getHolder<facebook::jni::detail::HybridData> =====

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
  
  puVar2 = PTR_holderField_0011a220;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_holderField_0011a228 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_holderField_0011a228), iVar3 != 0)) {
    JObject::getClass();
                    /* try { // try from 00113fd8 to 00113fdf has its CatchHandler @ 00114000 */
    uVar5 = getDestructorField(abStack_40);
    *(undefined8 *)puVar2 = uVar5;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              (abStack_40);
    __cxa_guard_release(PTR_holderField_0011a228);
  }
  uVar5 = *(undefined8 *)puVar2;
  uVar6 = *(undefined8 *)this;
                    /* try { // try from 00113f70 to 00113f87 has its CatchHandler @ 00114034 */
  plVar4 = (long *)facebook::jni::Environment::current();
  uVar5 = (**(code **)(*plVar4 + 0x2f8))(plVar4,uVar6,uVar5);
  *in_x8 = uVar5;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00114038  facebook::jni::detail::getDestructorField =====

/* facebook::jni::detail::getDestructorField(facebook::jni::basic_strong_ref<facebook::jni::JClass,
   facebook::jni::LocalReferenceAllocator> const&) */

long facebook::jni::detail::getDestructorField(basic_strong_ref *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)facebook::jni::Environment::current();
  lVar2 = (**(code **)(*plVar1 + 0x2f0))
                    (plVar1,*(undefined8 *)param_1,"mDestructor",PTR_kDescriptor_0011a218);
  facebook::jni::throwCppExceptionIf(lVar2 == 0);
  return lVar2;
}


// ===== 0011408c  facebook::jni::detail::HybridClassBase::isHybridClassBase =====

/* facebook::jni::detail::HybridClassBase::isHybridClassBase(facebook::jni::alias_ref<_jclass*>) */

bool facebook::jni::detail::HybridClassBase::isHybridClassBase(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (((*PTR_cls_0011a1d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_0011a1d8), iVar2 != 0))
  {
                    /* try { // try from 001140f8 to 0011410b has its CatchHandler @ 0011411c */
    facebook::jni::findClassStatic(PTR_kBaseName_0011a1e0);
    __cxa_guard_release(PTR_cls_0011a1d8);
  }
  uVar4 = *param_1;
  uVar5 = *(undefined8 *)PTR_cls_0011a1d0;
                    /* try { // try from 001140bc to 001140d3 has its CatchHandler @ 00114134 */
  plVar3 = (long *)facebook::jni::Environment::current();
  cVar1 = (**(code **)(*plVar3 + 0x58))(plVar3,uVar4,uVar5);
  return cVar1 != '\0';
}


// ===== 00114138  facebook::jni::detail::MethodWrapper<void(rnscreens::NativeProxy::*)(),&rnscreens::NativeProxy::cleanupExpiredMountingCoordinators,rnscreens::NativeProxy,void>::dispatch =====

/* facebook::jni::detail::MethodWrapper<void (rnscreens::NativeProxy::*)(),
   &rnscreens::NativeProxy::cleanupExpiredMountingCoordinators, rnscreens::NativeProxy,
   void>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<rnscreens::NativeProxy,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

void facebook::jni::detail::
     MethodWrapper<void(rnscreens::NativeProxy::*)(),&rnscreens::NativeProxy::cleanupExpiredMountingCoordinators,rnscreens::NativeProxy,void>
     ::dispatch(JObject *param_1)

{
  long lVar1;
  int iVar2;
  NativeProxy *this;
  undefined8 uVar3;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((*PTR_hybridDataField_0011a1c8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_hybridDataField_0011a1c8), iVar2 != 0)) {
    JObject::getClass();
                    /* try { // try from 001141c0 to 001141c3 has its CatchHandler @ 001141ec */
    uVar3 = FUN_00113b00(local_30);
    *(undefined8 *)PTR_hybridDataField_0011a1c0 = uVar3;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_30);
    __cxa_guard_release(PTR_hybridDataField_0011a1c8);
  }
                    /* try { // try from 00114164 to 00114173 has its CatchHandler @ 00114208 */
  this = (NativeProxy *)getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_0011a1c0);
  rnscreens::NativeProxy::cleanupExpiredMountingCoordinators(this);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00114260  rnscreens::NativeProxy::cleanupExpiredMountingCoordinators =====

/* WARNING: Removing unreachable block (ram,0x00114328) */
/* WARNING: Removing unreachable block (ram,0x0011434c) */
/* WARNING: Removing unreachable block (ram,0x00114368) */
/* WARNING: Removing unreachable block (ram,0x00114338) */
/* WARNING: Removing unreachable block (ram,0x00114370) */
/* rnscreens::NativeProxy::cleanupExpiredMountingCoordinators() */

void __thiscall rnscreens::NativeProxy::cleanupExpiredMountingCoordinators(NativeProxy *this)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  std::__ndk1::mutex::lock();
  puVar5 = *(undefined8 **)(this + 0x18);
  puVar4 = *(undefined8 **)(this + 0x20);
  while( true ) {
    if (puVar5 == puVar4) goto LAB_0011439c;
    if ((puVar5[1] == 0) || (*(long *)(puVar5[1] + 8) == -1)) break;
    puVar5 = puVar5 + 2;
  }
  if ((puVar5 != puVar4) && (puVar6 = puVar5 + 2, puVar6 != puVar4)) {
    do {
      lVar2 = puVar6[1];
      if ((lVar2 != 0) && (*(long *)(lVar2 + 8) != -1)) {
        uVar3 = *puVar6;
        *puVar6 = 0;
        puVar6[1] = 0;
        lVar1 = puVar5[1];
        *puVar5 = uVar3;
        puVar5[1] = lVar2;
        if (lVar1 != 0) {
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        puVar5 = puVar5 + 2;
      }
      puVar6 = puVar6 + 2;
    } while (puVar6 != puVar4);
    puVar4 = *(undefined8 **)(this + 0x20);
  }
  if (puVar5 != puVar4) {
    for (; puVar4 != puVar5; puVar4 = puVar4 + -2) {
      if (puVar4[-1] != 0) {
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
    *(undefined8 **)(this + 0x20) = puVar5;
  }
LAB_0011439c:
  std::__ndk1::mutex::unlock();
  return;
}


// ===== 001143b4  facebook::jni::detail::MethodWrapper<void(rnscreens::NativeProxy::*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::react::JFabricUIManager,facebook::jni::JObject,void>::_javaobject*>),&rnscreens::NativeProxy::nativeAddMutationsListener,rnscreens::NativeProxy,void,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::react::JFabricUIManager,facebook::jni::JObject,void>::_javaobject*>>::dispatch =====

/* facebook::jni::detail::MethodWrapper<void
   (rnscreens::NativeProxy::*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::react::JFabricUIManager,
   facebook::jni::JObject, void>::_javaobject*>),
   &rnscreens::NativeProxy::nativeAddMutationsListener, rnscreens::NativeProxy, void,
   facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::react::JFabricUIManager,
   facebook::jni::JObject, void>::_javaobject*>
   >::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<rnscreens::NativeProxy,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::react::JFabricUIManager,
   facebook::jni::JObject, void>::_javaobject*>&&) */

void facebook::jni::detail::
     MethodWrapper<void(rnscreens::NativeProxy::*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::react::JFabricUIManager,facebook::jni::JObject,void>::_javaobject*>),&rnscreens::NativeProxy::nativeAddMutationsListener,rnscreens::NativeProxy,void,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::react::JFabricUIManager,facebook::jni::JObject,void>::_javaobject*>>
     ::dispatch(JObject *param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_0011a1c8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_0011a1c8);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 0011444c to 0011444f has its CatchHandler @ 00114478 */
      uVar3 = FUN_00113b00(local_30);
      *(undefined8 *)PTR_hybridDataField_0011a1c0 = uVar3;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_30);
      __cxa_guard_release(PTR_hybridDataField_0011a1c8);
    }
  }
                    /* try { // try from 001143e4 to 001143ff has its CatchHandler @ 00114494 */
  uVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_0011a1c0);
  local_38 = *param_2;
  rnscreens::NativeProxy::nativeAddMutationsListener(uVar3,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001144ec  rnscreens::NativeProxy::nativeAddMutationsListener =====

/* rnscreens::NativeProxy::nativeAddMutationsListener(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::react::JFabricUIManager,
   facebook::jni::JObject, void>::_javaobject*>) */

void rnscreens::NativeProxy::nativeAddMutationsListener(NativeProxy *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  function *pfVar4;
  undefined ***pppuVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *local_78;
  undefined **local_70;
  NativeProxy *local_68;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::react::JFabricUIManager::getBinding();
  facebook::react::FabricUIManagerBinding::getScheduler();
                    /* try { // try from 00114524 to 0011452b has its CatchHandler @ 001146d0 */
  facebook::react::Scheduler::getUIManager();
  if ((local_68 == (NativeProxy *)0x0) ||
     (lVar3 = FUN_0010f880(0xffffffffffffffff,(long *)((long)local_68 + 8)), lVar3 != 0)) {
    lVar3 = *(long *)(param_1 + 8);
  }
  else {
    (**(code **)(*(long *)local_68 + 0x10))(local_68);
    std::__ndk1::__shared_weak_count::__release_weak();
    lVar3 = *(long *)(param_1 + 8);
  }
  if (lVar3 == 0) {
                    /* try { // try from 00114618 to 0011461f has its CatchHandler @ 00114694 */
    puVar6 = (undefined8 *)operator_new(0x60);
    puVar6[2] = 0;
    puVar2 = PTR_vtable_0011a1a0;
    plVar7 = *(long **)(param_1 + 0x10);
    *puVar6 = &PTR_FUN_00119ca8;
    puVar6[1] = 0;
    puVar6[7] = param_1;
    puVar6[4] = puVar2 + 0x10;
    *(undefined8 **)(param_1 + 8) = puVar6 + 4;
    *(undefined8 **)(param_1 + 0x10) = puVar6;
    puVar6[6] = &PTR_FUN_00119cf8;
    puVar6[10] = puVar6 + 6;
    if ((plVar7 != (long *)0x0) && (lVar3 = FUN_0010f880(0xffffffffffffffff,plVar7 + 1), lVar3 == 0)
       ) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
                    /* try { // try from 0011454c to 0011455b has its CatchHandler @ 001146e4 */
  cleanupExpiredMountingCoordinators(param_1);
  pfVar4 = (function *)facebook::react::UIManager::getShadowTreeRegistry();
  local_70 = &PTR_FUN_00119db8;
  local_68 = param_1;
  local_50 = &local_70;
                    /* try { // try from 00114570 to 00114577 has its CatchHandler @ 00114698 */
  facebook::react::ShadowTreeRegistry::enumerate(pfVar4);
  if (local_50 == &local_70) {
    lVar3 = 4;
    pppuVar5 = &local_70;
  }
  else {
    if (local_50 == (undefined ***)0x0) goto LAB_001145a4;
    lVar3 = 5;
    pppuVar5 = local_50;
  }
  (*(code *)(*pppuVar5)[lVar3])();
LAB_001145a4:
  if ((local_78 != (long *)0x0) &&
     (lVar3 = FUN_0010f880(0xffffffffffffffff,local_78 + 1), lVar3 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0011470c  FUN_0011470c =====

void FUN_0011470c(long *param_1)

{
  long lVar1;
  
  if ((param_1 != (long *)0x0) && (lVar1 = FUN_0010f880(0xffffffffffffffff,param_1 + 1), lVar1 == 0)
     ) {
    (**(code **)(*param_1 + 0x10))(param_1);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0011475c  FUN_0011475c =====

void FUN_0011475c(long *param_1)

{
  long lVar1;
  
  if ((param_1 != (long *)0x0) && (lVar1 = FUN_0010f880(0xffffffffffffffff,param_1 + 1), lVar1 == 0)
     ) {
    (**(code **)(*param_1 + 0x10))(param_1);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001147ac  FUN_001147ac =====

void FUN_001147ac(void)

{
  return;
}


// ===== 001147b0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0011a298)();
  return;
}


// ===== 001147b4  FUN_001147b4 =====

void FUN_001147b4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00119db8;
  puVar1[1] = uVar2;
  return;
}


// ===== 001147e8  FUN_001147e8 =====

void FUN_001147e8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00119db8;
  param_2[1] = uVar1;
  return;
}


// ===== 001147fc  FUN_001147fc =====

void FUN_001147fc(void)

{
  return;
}


// ===== 00114800  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0011a298)();
  return;
}


// ===== 00114804  FUN_00114804 =====

void FUN_00114804(long param_1)

{
  long lVar1;
  long lVar2;
  NativeProxy *this;
  long local_38;
  long *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this = *(NativeProxy **)(param_1 + 8);
  facebook::react::ShadowTree::getMountingCoordinator();
  if (local_38 != 0) {
                    /* try { // try from 00114838 to 00114843 has its CatchHandler @ 00114894 */
    rnscreens::NativeProxy::addMountingCoordinatorIfNeeded(this,(shared_ptr *)&local_38);
  }
  if ((local_30 != (long *)0x0) &&
     (lVar2 = FUN_0010f880(0xffffffffffffffff,local_30 + 1), lVar2 == 0)) {
    (**(code **)(*local_30 + 0x10))(local_30);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001148c0  FUN_001148c0 =====

long FUN_001148c0(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZN9rnscreens11NativeProxy26nativeAddMutationsListenerEN8facebook3jni9alias_refIPNS2_6detail8JTypeForINS1_5react16JFabricUIManagerENS2_7JObjectEvE11_javaobjectEEEE3$_1"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 001148dc  FUN_001148dc =====

pointer_____offset_0x10___ * FUN_001148dc(void)

{
  return &PTR_vtable_00119e28;
}


// ===== 001148e8  rnscreens::NativeProxy::addMountingCoordinatorIfNeeded =====

/* rnscreens::NativeProxy::addMountingCoordinatorIfNeeded(std::__ndk1::shared_ptr<facebook::react::MountingCoordinator
   const> const&) */

void __thiscall
rnscreens::NativeProxy::addMountingCoordinatorIfNeeded(NativeProxy *this,shared_ptr *param_1)

{
  ulong uVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined8 local_78;
  long local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  std::__ndk1::mutex::lock();
  plVar3 = *(long **)(this + 0x20);
  for (plVar15 = *(long **)(this + 0x18); plVar15 != plVar3; plVar15 = plVar15 + 2) {
    if ((plVar15[1] != 0) &&
       (plVar5 = (long *)std::__ndk1::__shared_weak_count::lock(), plVar5 != (long *)0x0)) {
      lVar18 = *plVar15;
      if (lVar18 == 0) {
        lVar18 = FUN_0010f880(0xffffffffffffffff,plVar5 + 1);
        if (lVar18 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      else {
        lVar19 = *(long *)param_1;
        lVar6 = FUN_0010f880(0xffffffffffffffff,plVar5 + 1);
        if (lVar6 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        if (lVar18 == lVar19) goto LAB_00114ae0;
      }
    }
  }
  local_78 = *(undefined8 *)(this + 8);
  local_70 = *(long *)(this + 0x10);
  uVar14 = *(undefined8 *)param_1;
  if (local_70 != 0) {
    FUN_0010ff70(1,local_70 + 0x10);
  }
                    /* try { // try from 001149d4 to 001149df has its CatchHandler @ 00114b40 */
  facebook::react::MountingCoordinator::setMountingOverrideDelegate(uVar14,&local_78);
  if (local_70 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  uVar14 = *(undefined8 *)param_1;
  lVar18 = *(long *)(param_1 + 8);
  if (lVar18 != 0) {
    FUN_0010ff70(1,lVar18 + 0x10);
  }
  puVar13 = *(undefined8 **)(this + 0x20);
  if (puVar13 < *(undefined8 **)(this + 0x28)) {
    puVar16 = puVar13 + 2;
    *puVar13 = uVar14;
    puVar13[1] = lVar18;
LAB_00114adc:
    *(undefined8 **)(this + 0x20) = puVar16;
LAB_00114ae0:
    std::__ndk1::mutex::unlock();
    if (*(long *)(lVar4 + 0x28) == local_68) {
      return;
    }
  }
  else {
    puVar17 = *(undefined8 **)(this + 0x18);
    lVar6 = (long)puVar13 - (long)puVar17 >> 4;
    uVar1 = lVar6 + 1;
    if (uVar1 >> 0x3c == 0) {
      uVar8 = (long)*(undefined8 **)(this + 0x28) - (long)puVar17;
      uVar11 = (long)uVar8 >> 3;
      if (uVar11 <= uVar1) {
        uVar11 = uVar1;
      }
      if (0x7fffffffffffffef < uVar8) {
        uVar11 = 0xfffffffffffffff;
      }
      if (uVar11 >> 0x3c == 0) {
                    /* try { // try from 00114a5c to 00114b3f has its CatchHandler @ 00114b48 */
        pvVar7 = operator_new(uVar11 << 4);
        puVar9 = (undefined8 *)((long)pvVar7 + ((long)puVar13 - (long)puVar17));
        pvVar2 = (void *)((long)pvVar7 + uVar11 * 0x10);
        puVar16 = puVar9 + 2;
        *puVar9 = uVar14;
        *(long *)((long)pvVar7 + lVar6 * 0x10 + 8) = lVar18;
        if (puVar13 == puVar17) {
          *(undefined8 **)(this + 0x18) = puVar9;
          *(undefined8 **)(this + 0x20) = puVar16;
          *(void **)(this + 0x28) = pvVar2;
        }
        else {
          do {
            puVar12 = puVar13 + -2;
            uVar14 = *puVar12;
            puVar10 = puVar9 + -2;
            puVar9[-1] = puVar13[-1];
            *puVar10 = uVar14;
            *puVar12 = 0;
            puVar13[-1] = 0;
            puVar9 = puVar10;
            puVar13 = puVar12;
          } while (puVar12 != puVar17);
          puVar13 = *(undefined8 **)(this + 0x18);
          puVar17 = *(undefined8 **)(this + 0x20);
          *(undefined8 **)(this + 0x18) = puVar10;
          *(undefined8 **)(this + 0x20) = puVar16;
          *(void **)(this + 0x28) = pvVar2;
          for (; puVar17 != puVar13; puVar17 = puVar17 + -2) {
            if (puVar17[-1] != 0) {
              std::__ndk1::__shared_weak_count::__release_weak();
            }
          }
        }
        if (puVar13 != (undefined8 *)0x0) {
          operator_delete(puVar13);
        }
        goto LAB_00114adc;
      }
    }
    else {
      if (*(long *)(lVar4 + 0x28) != local_68) goto LAB_00114b78;
      FUN_00114bcc();
    }
    if (*(long *)(lVar4 + 0x28) == local_68) {
      uVar14 = FUN_001115dc();
                    /* catch() { ... } // from try @ 001149d4 with catch @ 00114b40 */
                    /* catch() { ... } // from try @ 00114a5c with catch @ 00114b48 */
      if (local_70 != 0) {
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      std::__ndk1::mutex::unlock();
      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_0010bbb4(uVar14);
      }
    }
  }
LAB_00114b78:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00114b7c  FUN_00114b7c =====

void FUN_00114b7c(long *param_1)

{
  long lVar1;
  
  if ((param_1 != (long *)0x0) && (lVar1 = FUN_0010f880(0xffffffffffffffff,param_1 + 1), lVar1 == 0)
     ) {
    (**(code **)(*param_1 + 0x10))(param_1);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00114bcc  FUN_00114bcc =====

void FUN_00114bcc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00111688("vector");
}


// ===== 00114be0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0011a298)();
  return;
}


// ===== 00114be4  FUN_00114be4 =====

void FUN_00114be4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00119cf8;
  puVar1[1] = uVar2;
  return;
}


// ===== 00114c18  FUN_00114c18 =====

void FUN_00114c18(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00119cf8;
  param_2[1] = uVar1;
  return;
}


// ===== 00114c2c  FUN_00114c2c =====

void FUN_00114c2c(void)

{
  return;
}


// ===== 00114c30  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0011a298)();
  return;
}


// ===== 00114c34  FUN_00114c34 =====

void FUN_00114c34(long param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  _jobject *p_Var4;
  long lVar5;
  _jmethodID *p_Var6;
  base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> abStack_40 [8];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *param_2;
  lVar5 = *(long *)(param_1 + 8);
  if (((DAT_0011ef00 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0011ef00), iVar3 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 00114ccc to 00114cd3 has its CatchHandler @ 00114cf0 */
    DAT_0011eef8 = FUN_00114d4c(abStack_40);
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref(abStack_40);
    __cxa_guard_release(&DAT_0011ef00);
  }
  p_Var6 = *(_jmethodID **)(lVar5 + 0x30);
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var4,p_Var6,DAT_0011eef8,(ulong)uVar1);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00114d24  FUN_00114d24 =====

long FUN_00114d24(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZN9rnscreens11NativeProxy26nativeAddMutationsListenerEN8facebook3jni9alias_refIPNS2_6detail8JTypeForINS1_5react16JFabricUIManagerENS2_7JObjectEvE11_javaobjectEEEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00114d40  FUN_00114d40 =====

pointer_____offset_0x10___ * FUN_00114d40(void)

{
  return &PTR_vtable_00119d68;
}


// ===== 00114d4c  FUN_00114d4c =====

long FUN_00114d4c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)facebook::jni::Environment::current();
  lVar2 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,*param_1,"notifyScreenRemoved",PTR_kDescriptor_0011a230);
  facebook::jni::throwCppExceptionIf(lVar2 == 0);
  return lVar2;
}


// ===== 00114da0  FUN_00114da0 =====

void FUN_00114da0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00119ca8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00114db0  FUN_00114db0 =====

void FUN_00114db0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00119ca8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00114de0  FUN_00114de0 =====

void FUN_00114de0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00114de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 8))();
  return;
}


// ===== 00114dec  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0011a298)();
  return;
}


// ===== 00114df0  rnscreens::NativeProxy::initHybrid =====

/* rnscreens::NativeProxy::initHybrid(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<rnscreens::NativeProxy,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

void __thiscall rnscreens::NativeProxy::initHybrid(undefined8 *param_1,NativeProxy *this)

{
  long lVar1;
  undefined8 uVar2;
  NativeProxy *pNVar3;
  long *plVar4;
  long lVar5;
  HybridData *extraout_x1;
  NativeProxy *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pNVar3 = (NativeProxy *)operator_new(0x60);
  local_50 = *(undefined8 *)this;
                    /* try { // try from 00114e2c to 00114e33 has its CatchHandler @ 00114f50 */
  NativeProxy(pNVar3,&local_50);
                    /* try { // try from 00114e34 to 00114e3b has its CatchHandler @ 00114f48 */
  facebook::jni::detail::HybridData::create();
  uVar2 = local_58;
                    /* try { // try from 00114e40 to 00114e5b has its CatchHandler @ 00114f68 */
  plVar4 = (long *)facebook::jni::Environment::current();
  lVar5 = (**(code **)(*plVar4 + 200))(plVar4,uVar2);
  facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 00114e60 to 00114e6b has its CatchHandler @ 00114f20 */
  local_48 = lVar5;
  facebook::jni::detail::getHolder<facebook::jni::detail::HybridData>
            ((detail *)&local_48,extraout_x1);
                    /* try { // try from 00114e70 to 00114e7b has its CatchHandler @ 00114ef8 */
  local_60 = pNVar3;
  facebook::jni::detail::HybridDestructor::setNativePointer(&local_40,&local_60);
  pNVar3 = local_60;
  local_60 = (NativeProxy *)0x0;
  if (pNVar3 != (NativeProxy *)0x0) {
    (**(code **)(*(long *)pNVar3 + 8))();
  }
  if (local_40 != 0) {
                    /* try { // try from 00114e9c to 00114eaf has its CatchHandler @ 00114f64 */
    plVar4 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar4 + 0xb8))(plVar4,local_40);
  }
  lVar5 = local_48;
  if (local_48 != 0) {
                    /* try { // try from 00114eb8 to 00114ecb has its CatchHandler @ 00114f60 */
    plVar4 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar4 + 0xb8))(plVar4,lVar5);
  }
  *param_1 = local_58;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00114fa0  FUN_00114fa0 =====

void FUN_00114fa0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
                    /* try { // try from 00114fb8 to 00114fcb has its CatchHandler @ 00114fdc */
    plVar1 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb8))(plVar1,lVar2);
  }
  *param_1 = 0;
  return;
}


// ===== 00114fe0  rnscreens::NativeProxy::invalidateNative =====

/* rnscreens::NativeProxy::invalidateNative() */

void __thiscall rnscreens::NativeProxy::invalidateNative(NativeProxy *this)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x30);
  if (lVar2 != 0) {
                    /* try { // try from 00114ff8 to 0011500b has its CatchHandler @ 0011501c */
    plVar1 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb0))(plVar1,lVar2);
  }
  *(undefined8 *)(this + 0x30) = 0;
  return;
}


// ===== 00115020  JNI_OnLoad =====

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
  local_60[0] = &PTR_FUN_00119e48;
  uVar2 = facebook::jni::initialize(param_1,(function *)local_60);
  if ((undefined ***)local_40 == local_60) {
    lVar4 = 4;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_0011508c;
    lVar4 = 5;
    pppuVar3 = (undefined ***)local_40;
  }
  (**(code **)((long)*pppuVar3 + lVar4 * 8))(pppuVar3);
LAB_0011508c:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001150b4  FUN_001150b4 =====

void FUN_001150b4(void)

{
  return;
}


// ===== 001150b8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0011a298)();
  return;
}


// ===== 001150bc  FUN_001150bc =====

void FUN_001150bc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_00119e48;
  return;
}


// ===== 001150e0  FUN_001150e0 =====

void FUN_001150e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00119e48;
  return;
}


// ===== 001150f0  FUN_001150f0 =====

void FUN_001150f0(void)

{
  return;
}


// ===== 001150f4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0011a298)();
  return;
}


// ===== 001150f8  rnscreens::NativeProxy::registerNatives =====

void rnscreens::NativeProxy::registerNatives(void)

{
  (*(code *)PTR_registerNatives_0011a358)();
  return;
}


// ===== 001150fc  FUN_001150fc =====

long FUN_001150fc(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) != "Z10JNI_OnLoadE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00115118  FUN_00115118 =====

pointer_____offset_0x10___ * FUN_00115118(void)

{
  return &PTR_vtable_00119eb8;
}


// ===== 00115130  FUN_00115130 =====

void FUN_00115130(void)

{
  (*(code *)PTR_0011a260)();
  return;
}


// ===== 00115150  <EXTERNAL>::__cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0011a268)();
  return;
}


// ===== 00115160  <EXTERNAL>::__cxa_atexit =====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_0011a270)();
  return;
}


// ===== 00115170  <EXTERNAL>::__register_atfork =====

void __register_atfork(void)

{
  (*(code *)PTR___register_atfork_0011a278)();
  return;
}


// ===== 00115180  RNScreens::RNScreensTurboModule::RNScreensTurboModule =====

void __thiscall RNScreens::RNScreensTurboModule::RNScreensTurboModule(void)

{
  (*(code *)PTR_RNScreensTurboModule_0011a280)();
  return;
}


// ===== 00115190  RNScreens::RNScreensTurboModule::~RNScreensTurboModule =====

void __thiscall RNScreens::RNScreensTurboModule::~RNScreensTurboModule(RNScreensTurboModule *this)

{
  (*(code *)PTR__RNScreensTurboModule_0011a288)();
  return;
}


// ===== 001151a0  <EXTERNAL>::facebook::jsi::HostObject::~HostObject =====

void __thiscall facebook::jsi::HostObject::~HostObject(HostObject *this)

{
  (*(code *)PTR__HostObject_0011a290)();
  return;
}


// ===== 001151b0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0011a298)();
  return;
}


// ===== 001151c0  <EXTERNAL>::__cxa_allocate_exception =====

void __cxa_allocate_exception(void)

{
  (*(code *)PTR___cxa_allocate_exception_0011a2a0)();
  return;
}


// ===== 001151d0  <EXTERNAL>::__cxa_free_exception =====

void __cxa_free_exception(void)

{
  (*(code *)PTR___cxa_free_exception_0011a2a8)();
  return;
}


// ===== 001151e0  <EXTERNAL>::__cxa_throw =====

void __cxa_throw(void)

{
  (*(code *)PTR___cxa_throw_0011a2b0)();
  return;
}


// ===== 001151f0  <EXTERNAL>::facebook::jsi::Value::asNumber =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asNumber(void)

{
  (*(code *)PTR_asNumber_0011a2b8)();
  return;
}


// ===== 00115200  <EXTERNAL>::facebook::jsi::Value::~Value =====

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
  (*(code *)PTR__Value_0011a2c0)();
  return;
}


// ===== 00115210  <EXTERNAL>::__cxa_begin_catch =====

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_0011a2c8)();
  return;
}


// ===== 00115220  <EXTERNAL>::std::terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
  (*(code *)PTR_terminate_0011a2d0)();
  return;
}


// ===== 00115230  <EXTERNAL>::strlen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0011a2d8)();
  return sVar1;
}


// ===== 00115240  <EXTERNAL>::std::logic_error::logic_error =====

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
  (*(code *)PTR_logic_error_0011a2e0)();
  return;
}


// ===== 00115250  <EXTERNAL>::std::bad_array_new_length::bad_array_new_length =====

void __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
  (*(code *)PTR_bad_array_new_length_0011a2e8)();
  return;
}


// ===== 00115260  <EXTERNAL>::operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_0011a2f0)();
  return pvVar1;
}


// ===== 00115270  <EXTERNAL>::facebook::jsi::JSError::JSError =====

void __thiscall facebook::jsi::JSError::JSError(void)

{
  (*(code *)PTR_JSError_0011a2f8)();
  return;
}


// ===== 00115280  <EXTERNAL>::facebook::jsi::Value::Value =====

void __thiscall facebook::jsi::Value::Value(Value *this,Value *param_1)

{
  (*(code *)PTR_Value_0011a300)();
  return;
}


// ===== 00115290  <EXTERNAL>::std::exception::~exception =====

void __thiscall std::exception::~exception(exception *this)

{
  (*(code *)PTR__exception_0011a308)();
  return;
}


// ===== 001152a0  <EXTERNAL>::facebook::jsi::Value::Value =====

void __thiscall facebook::jsi::Value::Value(Value *this,IRuntime *param_1,Value *param_2)

{
  (*(code *)PTR_Value_0011a310)();
  return;
}


// ===== 001152b0  <EXTERNAL>::strcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0011a318)((int)__s1);
  return iVar1;
}


// ===== 001152c0  <EXTERNAL>::facebook::react::MountingTransaction::MountingTransaction =====

void __thiscall facebook::react::MountingTransaction::MountingTransaction(void)

{
  (*(code *)PTR_MountingTransaction_0011a320)();
  return;
}


// ===== 001152d0  <EXTERNAL>::std::__ndk1::__shared_weak_count::__release_weak =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__release_weak(void)

{
  (*(code *)PTR___release_weak_0011a328)();
  return;
}


// ===== 001152e0  _JNIEnv::NewObject =====

void _JNIEnv::NewObject(_jclass *param_1,_jmethodID *param_2,...)

{
  (*(code *)PTR_NewObject_0011a330)();
  return;
}


// ===== 001152f0  _JNIEnv::CallObjectMethod =====

void _JNIEnv::CallObjectMethod(_jobject *param_1,_jmethodID *param_2,...)

{
  (*(code *)PTR_CallObjectMethod_0011a338)();
  return;
}


// ===== 00115300  _JNIEnv::CallVoidMethod =====

void _JNIEnv::CallVoidMethod(_jobject *param_1,_jmethodID *param_2,...)

{
  (*(code *)PTR_CallVoidMethod_0011a340)();
  return;
}


// ===== 00115310  <EXTERNAL>::std::__ndk1::__shared_weak_count::~__shared_weak_count =====

void __thiscall std::__ndk1::__shared_weak_count::~__shared_weak_count(__shared_weak_count *this)

{
  (*(code *)PTR____shared_weak_count_0011a348)();
  return;
}


// ===== 00115320  <EXTERNAL>::facebook::jsi::Value::~Value =====

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
  (*(code *)PTR__Value_0011a350)();
  return;
}


// ===== 00115330  rnscreens::NativeProxy::registerNatives =====

void rnscreens::NativeProxy::registerNatives(void)

{
  (*(code *)PTR_registerNatives_0011a358)();
  return;
}


// ===== 00115340  rnscreens::NativeProxy::nativeAddMutationsListener =====

void rnscreens::NativeProxy::nativeAddMutationsListener(void)

{
  (*(code *)PTR_nativeAddMutationsListener_0011a360)();
  return;
}


// ===== 00115350  rnscreens::NativeProxy::cleanupExpiredMountingCoordinators =====

void __thiscall rnscreens::NativeProxy::cleanupExpiredMountingCoordinators(NativeProxy *this)

{
  (*(code *)PTR_cleanupExpiredMountingCoordinators_0011a368)();
  return;
}


// ===== 00115360  rnscreens::NativeProxy::addMountingCoordinatorIfNeeded =====

void __thiscall
rnscreens::NativeProxy::addMountingCoordinatorIfNeeded(NativeProxy *this,shared_ptr *param_1)

{
  (*(code *)PTR_addMountingCoordinatorIfNeeded_0011a370)();
  return;
}


// ===== 00115370  rnscreens::NativeProxy::initHybrid =====

void __thiscall rnscreens::NativeProxy::initHybrid(void)

{
  (*(code *)PTR_initHybrid_0011a378)();
  return;
}


// ===== 00115380  facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *this)

{
  (*(code *)PTR__base_owned_ref_0011a380)();
  return;
}


// ===== 00115390  facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::
base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
::~base_owned_ref(base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
                  *this)

{
  (*(code *)PTR__base_owned_ref_0011a388)();
  return;
}


// ===== 001153a0  facebook::jni::detail::MethodWrapper<void(rnscreens::NativeProxy::*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::react::JFabricUIManager,facebook::jni::JObject,void>::_javaobject*>),&rnscreens::NativeProxy::nativeAddMutationsListener,rnscreens::NativeProxy,void,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::react::JFabricUIManager,facebook::jni::JObject,void>::_javaobject*>>::dispatch =====

void facebook::jni::detail::
     MethodWrapper<void(rnscreens::NativeProxy::*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::react::JFabricUIManager,facebook::jni::JObject,void>::_javaobject*>),&rnscreens::NativeProxy::nativeAddMutationsListener,rnscreens::NativeProxy,void,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::react::JFabricUIManager,facebook::jni::JObject,void>::_javaobject*>>
     ::dispatch(void)

{
  (*(code *)PTR_dispatch_0011a390)();
  return;
}


// ===== 001153b0  facebook::jni::JObject::getClass =====

void facebook::jni::JObject::getClass(void)

{
  (*(code *)PTR_getClass_0011a398)();
  return;
}


// ===== 001153c0  facebook::jni::getHybridDataFromField =====

void facebook::jni::getHybridDataFromField(JObject *param_1,JField *param_2)

{
  (*(code *)PTR_getHybridDataFromField_0011a3a0)();
  return;
}


// ===== 001153d0  facebook::jni::detail::HybridClassBase::isHybridClassBase =====

void facebook::jni::detail::HybridClassBase::isHybridClassBase(void)

{
  (*(code *)PTR_isHybridClassBase_0011a3a8)();
  return;
}


// ===== 001153e0  facebook::jni::throwNPE =====

void facebook::jni::throwNPE(void)

{
  (*(code *)PTR_throwNPE_0011a3b0)();
  return;
}


// ===== 001153f0  facebook::jni::detail::getHolder<facebook::jni::JObject> =====

void __thiscall
facebook::jni::detail::getHolder<facebook::jni::JObject>(detail *this,JObject *param_1)

{
  (*(code *)PTR_getHolder<facebook_jni_JObject>_0011a3b8)();
  return;
}


// ===== 00115400  facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::
base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
::~base_owned_ref(base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
                  *this)

{
  (*(code *)PTR__base_owned_ref_0011a3c0)();
  return;
}


// ===== 00115410  facebook::jni::detail::getDestructorField =====

void facebook::jni::detail::getDestructorField(basic_strong_ref *param_1)

{
  (*(code *)PTR_getDestructorField_0011a3c8)();
  return;
}


// ===== 00115420  facebook::jni::detail::getHolder<facebook::jni::detail::HybridData> =====

void __thiscall
facebook::jni::detail::getHolder<facebook::jni::detail::HybridData>
          (detail *this,HybridData *param_1)

{
  (*(code *)PTR_getHolder<facebook_jni_detail_HybridData>_0011a3d0)();
  return;
}


// ===== 00115430  rnscreens::NativeProxy::NativeProxy =====

void __thiscall rnscreens::NativeProxy::NativeProxy(void)

{
  (*(code *)PTR_NativeProxy_0011a3d8)();
  return;
}


// ===== 00115440  <EXTERNAL>::facebook::react::JFabricUIManager::getBinding =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::JFabricUIManager::getBinding(void)

{
  (*(code *)PTR_getBinding_0011a3e0)();
  return;
}


// ===== 00115450  <EXTERNAL>::facebook::react::FabricUIManagerBinding::getScheduler =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::FabricUIManagerBinding::getScheduler(void)

{
  (*(code *)PTR_getScheduler_0011a3e8)();
  return;
}


// ===== 00115460  <EXTERNAL>::facebook::react::Scheduler::getUIManager =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::Scheduler::getUIManager(void)

{
  (*(code *)PTR_getUIManager_0011a3f0)();
  return;
}


// ===== 00115470  <EXTERNAL>::facebook::react::UIManager::getShadowTreeRegistry =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::UIManager::getShadowTreeRegistry(void)

{
  (*(code *)PTR_getShadowTreeRegistry_0011a3f8)();
  return;
}


// ===== 00115480  <EXTERNAL>::facebook::react::ShadowTreeRegistry::enumerate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowTreeRegistry::enumerate(function *param_1)

{
  (*(code *)PTR_enumerate_0011a400)();
  return;
}


// ===== 00115490  <EXTERNAL>::facebook::react::MountingCoordinator::setMountingOverrideDelegate =====

void facebook::react::MountingCoordinator::setMountingOverrideDelegate(void)

{
  (*(code *)PTR_setMountingOverrideDelegate_0011a408)();
  return;
}


// ===== 001154a0  <EXTERNAL>::std::__ndk1::__shared_weak_count::lock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::lock(void)

{
  (*(code *)PTR_lock_0011a410)();
  return;
}


// ===== 001154b0  <EXTERNAL>::facebook::jni::Environment::current =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::Environment::current(void)

{
  (*(code *)PTR_current_0011a418)();
  return;
}


// ===== 001154c0  <EXTERNAL>::std::__ndk1::mutex::lock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::lock(void)

{
  (*(code *)PTR_lock_0011a420)();
  return;
}


// ===== 001154d0  <EXTERNAL>::std::__ndk1::mutex::unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::unlock(void)

{
  (*(code *)PTR_unlock_0011a428)();
  return;
}


// ===== 001154e0  <EXTERNAL>::std::bad_alloc::bad_alloc =====

void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  (*(code *)PTR_bad_alloc_0011a430)();
  return;
}


// ===== 001154f0  <EXTERNAL>::facebook::jni::throwPendingJniExceptionAsCppException =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwPendingJniExceptionAsCppException(void)

{
  (*(code *)PTR_throwPendingJniExceptionAsCppException_0011a438)();
  return;
}


// ===== 00115500  <EXTERNAL>::facebook::jni::findClassLocal =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::findClassLocal(char *param_1)

{
  (*(code *)PTR_findClassLocal_0011a440)();
  return;
}


// ===== 00115510  <EXTERNAL>::facebook::jni::throwCppExceptionIf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwCppExceptionIf(bool param_1)

{
  (*(code *)PTR_throwCppExceptionIf_0011a448)(param_1);
  return;
}


// ===== 00115520  <EXTERNAL>::facebook::jni::detail::JniEnvCacher::JniEnvCacher =====

void __thiscall
facebook::jni::detail::JniEnvCacher::JniEnvCacher(JniEnvCacher *this,_JNIEnv *param_1)

{
  (*(code *)PTR_JniEnvCacher_0011a450)();
  return;
}


// ===== 00115530  <EXTERNAL>::facebook::jni::translatePendingCppExceptionToJavaException =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::translatePendingCppExceptionToJavaException(void)

{
  (*(code *)PTR_translatePendingCppExceptionToJavaException_0011a458)();
  return;
}


// ===== 00115540  <EXTERNAL>::__cxa_end_catch =====

void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_0011a460)();
  return;
}


// ===== 00115550  <EXTERNAL>::facebook::jni::detail::JniEnvCacher::~JniEnvCacher =====

void __thiscall facebook::jni::detail::JniEnvCacher::~JniEnvCacher(JniEnvCacher *this)

{
  (*(code *)PTR__JniEnvCacher_0011a468)();
  return;
}


// ===== 00115560  <EXTERNAL>::std::current_exception =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::current_exception(void)

{
  (*(code *)PTR_current_exception_0011a470)();
  return;
}


// ===== 00115570  <EXTERNAL>::std::exception_ptr::~exception_ptr =====

void __thiscall std::exception_ptr::~exception_ptr(exception_ptr *this)

{
  (*(code *)PTR__exception_ptr_0011a478)();
  return;
}


// ===== 00115580  <EXTERNAL>::__cxa_rethrow =====

void __cxa_rethrow(void)

{
  (*(code *)PTR___cxa_rethrow_0011a480)();
  return;
}


// ===== 00115590  <EXTERNAL>::__cxa_guard_acquire =====

void __cxa_guard_acquire(void)

{
  (*(code *)PTR___cxa_guard_acquire_0011a488)();
  return;
}


// ===== 001155a0  <EXTERNAL>::__cxa_guard_abort =====

void __cxa_guard_abort(void)

{
  (*(code *)PTR___cxa_guard_abort_0011a490)();
  return;
}


// ===== 001155b0  <EXTERNAL>::__cxa_guard_release =====

void __cxa_guard_release(void)

{
  (*(code *)PTR___cxa_guard_release_0011a498)();
  return;
}


// ===== 001155c0  <EXTERNAL>::facebook::jni::findClassStatic =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::findClassStatic(char *param_1)

{
  (*(code *)PTR_findClassStatic_0011a4a0)();
  return;
}


// ===== 001155d0  <EXTERNAL>::facebook::jni::throwNewJavaException =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwNewJavaException(char *param_1,char *param_2)

{
  (*(code *)PTR_throwNewJavaException_0011a4a8)();
  return;
}


// ===== 001155e0  <EXTERNAL>::facebook::jni::detail::HybridDestructor::getNativePointer =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::detail::HybridDestructor::getNativePointer(void)

{
  (*(code *)PTR_getNativePointer_0011a4b0)();
  return;
}


// ===== 001155f0  <EXTERNAL>::facebook::react::ShadowTree::getMountingCoordinator =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowTree::getMountingCoordinator(void)

{
  (*(code *)PTR_getMountingCoordinator_0011a4b8)();
  return;
}


// ===== 00115600  <EXTERNAL>::facebook::jni::detail::HybridData::create =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::detail::HybridData::create(void)

{
  (*(code *)PTR_create_0011a4c0)();
  return;
}


// ===== 00115610  <EXTERNAL>::facebook::jni::detail::HybridDestructor::setNativePointer =====

void facebook::jni::detail::HybridDestructor::setNativePointer(void)

{
  (*(code *)PTR_setNativePointer_0011a4c8)();
  return;
}


// ===== 00115620  <EXTERNAL>::std::__ndk1::mutex::~mutex =====

void __thiscall std::__ndk1::mutex::~mutex(mutex *this)

{
  (*(code *)PTR__mutex_0011a4d0)();
  return;
}


// ===== 00115630  <EXTERNAL>::facebook::jni::initialize =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::initialize(_JavaVM *param_1,function *param_2)

{
  (*(code *)PTR_initialize_0011a4d8)();
  return;
}


// ===== 00115640  <EXTERNAL>::dl_iterate_phdr =====

void dl_iterate_phdr(void)

{
  (*(code *)PTR_dl_iterate_phdr_0011a4e0)();
  return;
}


// ===== 00115650  <EXTERNAL>::fwrite =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0011a4e8)();
  return sVar1;
}


// ===== 00115660  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0011a4f0)();
  return;
}


// ===== 00115670  <EXTERNAL>::malloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0011a4f8)();
  return pvVar1;
}


// ===== 00115680  <EXTERNAL>::strncmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0011a500)((int)__s1);
  return iVar1;
}


// ===== 00115690  <EXTERNAL>::fprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0011a508)((int)__stream);
  return iVar1;
}


// ===== 001156a0  <EXTERNAL>::__stack_chk_fail =====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_0011a510)();
  return;
}


// ===== 001156b0  <EXTERNAL>::pthread_rwlock_wrlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_wrlock_0011a518)((int)__rwlock);
  return iVar1;
}


// ===== 001156c0  <EXTERNAL>::syscall =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_syscall_0011a520)();
  return lVar1;
}


// ===== 001156d0  <EXTERNAL>::pthread_rwlock_unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_unlock_0011a528)((int)__rwlock);
  return iVar1;
}


// ===== 001156e0  <EXTERNAL>::memcpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0011a530)();
  return pvVar1;
}


// ===== 001156f0  <EXTERNAL>::getauxval =====

void getauxval(void)

{
  (*(code *)PTR_getauxval_0011a538)();
  return;
}


// ===== 00115700  <EXTERNAL>::abort =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0011a540)();
  return;
}


// ===== 00115710  <EXTERNAL>::__system_property_get =====

void __system_property_get(void)

{
  (*(code *)PTR___system_property_get_0011a548)();
  return;
}


// ===== 00115720  <EXTERNAL>::getpid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_0011a550)();
  return _Var1;
}


// ===== 00115730  <EXTERNAL>::pthread_rwlock_rdlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_rdlock_0011a558)((int)__rwlock);
  return iVar1;
}


// ===== 00115740  <EXTERNAL>::memset =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0011a560)(__s,__c);
  return pvVar1;
}


// ===== 00115750  <EXTERNAL>::fflush =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_0011a568)((int)__stream);
  return iVar1;
}


// ===== 0011f000  <EXTERNAL>::__cxa_finalize =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f008  <EXTERNAL>::__cxa_atexit =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f010  <EXTERNAL>::__register_atfork =====

/* WARNING: Control flow encountered bad instruction data */

void __register_atfork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f018  <EXTERNAL>::__gxx_personality_v0 =====

/* WARNING: Control flow encountered bad instruction data */

void __gxx_personality_v0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f020  <EXTERNAL>::facebook::jsi::HostObject::~HostObject =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::HostObject::~HostObject(HostObject *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f028  <EXTERNAL>::operator.delete =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f030  <EXTERNAL>::__cxa_allocate_exception =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_allocate_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f038  <EXTERNAL>::__cxa_free_exception =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_free_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f040  <EXTERNAL>::facebook::jsi::JSError::~JSError =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::JSError::~JSError(JSError *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f048  <EXTERNAL>::__cxa_throw =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_throw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f050  <EXTERNAL>::facebook::jsi::Value::asNumber =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asNumber(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f058  <EXTERNAL>::facebook::jsi::Value::~Value =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f060  <EXTERNAL>::__cxa_begin_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_begin_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f068  <EXTERNAL>::std::terminate =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f070  <EXTERNAL>::strlen =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f078  <EXTERNAL>::std::length_error::~length_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::length_error::~length_error(length_error *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f080  <EXTERNAL>::std::logic_error::logic_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f088  <EXTERNAL>::std::bad_array_new_length::bad_array_new_length =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f090  <EXTERNAL>::std::bad_array_new_length::~bad_array_new_length =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_array_new_length::~bad_array_new_length(bad_array_new_length *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f098  <EXTERNAL>::operator.new =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f0a0  <EXTERNAL>::facebook::jsi::JSError::JSError =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::JSError::JSError(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f0a8  <EXTERNAL>::facebook::jsi::Value::Value =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::Value::Value(Value *this,Value *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f0b0  <EXTERNAL>::std::exception::~exception =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::exception::~exception(exception *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f0b8  <EXTERNAL>::std::exception::what =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::exception::what(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f0c0  <EXTERNAL>::facebook::jsi::Value::Value =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::Value::Value(Value *this,IRuntime *param_1,Value *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f118  <EXTERNAL>::strcmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f120  <EXTERNAL>::facebook::react::MountingTransaction::MountingTransaction =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::MountingTransaction::MountingTransaction(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f128  <EXTERNAL>::std::__ndk1::__shared_weak_count::__release_weak =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__release_weak(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f130  <EXTERNAL>::std::__ndk1::__shared_weak_count::~__shared_weak_count =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::__shared_weak_count::~__shared_weak_count(__shared_weak_count *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f138  <EXTERNAL>::std::__ndk1::__shared_weak_count::__get_deleter =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__get_deleter(type_info *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f140  <EXTERNAL>::facebook::jsi::Value::~Value =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f150  <EXTERNAL>::facebook::react::JFabricUIManager::getBinding =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::JFabricUIManager::getBinding(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f158  <EXTERNAL>::facebook::react::FabricUIManagerBinding::getScheduler =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::FabricUIManagerBinding::getScheduler(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f160  <EXTERNAL>::facebook::react::Scheduler::getUIManager =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::Scheduler::getUIManager(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f168  <EXTERNAL>::facebook::react::UIManager::getShadowTreeRegistry =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::UIManager::getShadowTreeRegistry(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f170  <EXTERNAL>::facebook::react::ShadowTreeRegistry::enumerate =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowTreeRegistry::enumerate(function *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f178  <EXTERNAL>::facebook::react::MountingCoordinator::setMountingOverrideDelegate =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::MountingCoordinator::setMountingOverrideDelegate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f180  <EXTERNAL>::std::__ndk1::__shared_weak_count::lock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f188  <EXTERNAL>::facebook::jni::Environment::current =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::Environment::current(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f190  <EXTERNAL>::std::__ndk1::mutex::lock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f198  <EXTERNAL>::std::__ndk1::mutex::unlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::unlock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f1a0  <EXTERNAL>::std::bad_alloc::bad_alloc =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f1a8  <EXTERNAL>::std::bad_alloc::~bad_alloc =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f1b0  <EXTERNAL>::facebook::jni::throwPendingJniExceptionAsCppException =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwPendingJniExceptionAsCppException(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f1b8  <EXTERNAL>::facebook::jni::findClassLocal =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::findClassLocal(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f1c0  <EXTERNAL>::facebook::jni::throwCppExceptionIf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwCppExceptionIf(bool param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f1c8  <EXTERNAL>::facebook::jni::detail::JniEnvCacher::JniEnvCacher =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
facebook::jni::detail::JniEnvCacher::JniEnvCacher(JniEnvCacher *this,_JNIEnv *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f1d0  <EXTERNAL>::facebook::jni::translatePendingCppExceptionToJavaException =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::translatePendingCppExceptionToJavaException(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f1d8  <EXTERNAL>::__cxa_end_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_end_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f1e0  <EXTERNAL>::facebook::jni::detail::JniEnvCacher::~JniEnvCacher =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jni::detail::JniEnvCacher::~JniEnvCacher(JniEnvCacher *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f1e8  <EXTERNAL>::std::current_exception =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::current_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f1f0  <EXTERNAL>::std::exception_ptr::~exception_ptr =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::exception_ptr::~exception_ptr(exception_ptr *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f1f8  <EXTERNAL>::__cxa_rethrow =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_rethrow(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f200  <EXTERNAL>::__cxa_guard_acquire =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_acquire(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f208  <EXTERNAL>::__cxa_guard_abort =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f210  <EXTERNAL>::__cxa_guard_release =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f218  <EXTERNAL>::facebook::jni::findClassStatic =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::findClassStatic(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f220  <EXTERNAL>::facebook::jni::throwNewJavaException =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwNewJavaException(char *param_1,char *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f228  <EXTERNAL>::facebook::jni::detail::HybridDestructor::getNativePointer =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::detail::HybridDestructor::getNativePointer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f230  <EXTERNAL>::facebook::react::ShadowTree::getMountingCoordinator =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowTree::getMountingCoordinator(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f238  <EXTERNAL>::facebook::jni::detail::HybridData::create =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::detail::HybridData::create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f240  <EXTERNAL>::facebook::jni::detail::HybridDestructor::setNativePointer =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::jni::detail::HybridDestructor::setNativePointer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f248  <EXTERNAL>::std::__ndk1::mutex::~mutex =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::mutex::~mutex(mutex *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f258  <EXTERNAL>::facebook::jni::initialize =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::initialize(_JavaVM *param_1,function *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f260  <EXTERNAL>::dl_iterate_phdr =====

/* WARNING: Control flow encountered bad instruction data */

void dl_iterate_phdr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f268  <EXTERNAL>::fwrite =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f270  <EXTERNAL>::free =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f278  <EXTERNAL>::malloc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f280  <EXTERNAL>::strncmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f288  <EXTERNAL>::fprintf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f290  <EXTERNAL>::__stack_chk_fail =====

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f298  <EXTERNAL>::pthread_rwlock_wrlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f2a8  <EXTERNAL>::syscall =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f2b0  <EXTERNAL>::pthread_rwlock_unlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f2b8  <EXTERNAL>::memcpy =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f2c0  <EXTERNAL>::getauxval =====

/* WARNING: Control flow encountered bad instruction data */

void getauxval(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f2c8  <EXTERNAL>::abort =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f2d0  <EXTERNAL>::__system_property_get =====

/* WARNING: Control flow encountered bad instruction data */

void __system_property_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f2d8  <EXTERNAL>::getpid =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f2e0  <EXTERNAL>::pthread_rwlock_rdlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f2e8  <EXTERNAL>::memset =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011f2f0  <EXTERNAL>::fflush =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


