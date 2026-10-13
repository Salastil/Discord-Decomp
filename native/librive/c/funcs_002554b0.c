// ===== 002554b0  _FINI_1 =====

void _FINI_1(void)

{
  __cxa_finalize(&PTR_LOOP_0037bc90);
  return;
}


// ===== 002554c0  FUN_002554c0 =====

void FUN_002554c0(void)

{
  return;
}


// ===== 002554c8  _FINI_0 =====

void _FINI_0(void)

{
  FUN_002554c0();
  return;
}


// ===== 002554d0  FUN_002554d0 =====

void FUN_002554d0(code *UNRECOVERED_JUMPTABLE)

{
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x002554dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


// ===== 002554e4  FUN_002554e4 =====

void FUN_002554e4(undefined8 param_1)

{
  __cxa_atexit(FUN_002554d0,param_1,&PTR_LOOP_0037bc90);
  return;
}


// ===== 00255500  FUN_00255500 =====

void FUN_00255500(void)

{
  __register_atfork();
  return;
}


// ===== 00255510  FUN_00255510 =====

long FUN_00255510(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_0039bee8 == '\0') {
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


// ===== 00255540  _INIT_0 =====

void _INIT_0(void)

{
  uint uVar1;
  int iVar2;
  char acStack_6c [92];
  
  uVar1 = getauxval(0x10);
  if ((uVar1 >> 8 & 1) == 0) {
    DAT_0039bee8 = 0;
    return;
  }
  iVar2 = __system_property_get("ro.arch",acStack_6c);
  if (0 < iVar2) {
    iVar2 = strncmp(acStack_6c,"exynos9810",10);
    DAT_0039bee8 = iVar2 != 0;
    return;
  }
  DAT_0039bee8 = 1;
  return;
}


// ===== 002555d8  FUN_002555d8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_002555d8(ulong param_1,long param_2)

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
    DAT_0039bef0 = DAT_0039bef0 | 0x400;
  }
  uVar2 = (uint)uVar4;
  if ((uVar3 >> 4 & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x8000;
  }
  if ((uVar3 >> 0x1b & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 2;
  }
  if ((uVar2 >> 7 & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 6;
  }
  if ((~uVar3 & 0xc0000) == 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x20;
  }
  if ((uVar3 >> 0x14 & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x10;
  }
  if ((uVar3 >> 0x17 & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 8;
  }
  if ((uVar3 >> 9 & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x10100;
  }
  if ((uVar3 >> 0x18 & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x20000;
  }
  if ((uVar3 >> 0xc & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x40;
  }
  if ((uVar3 >> 0x1a & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x800000;
  }
  if ((uVar3 >> 3 & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x4000;
  }
  if ((uVar3 >> 5 & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x800;
  }
  if ((uVar3 >> 6 & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x1000;
  }
  if ((uVar3 >> 0xd & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x100000;
  }
  if ((uVar3 >> 0xe & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x200000;
  }
  if ((uVar3 >> 0x1d & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x400000000000;
  }
  if ((uVar3 >> 0x1c & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x2000000000000;
  }
  if ((uVar2 >> 0x12 & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x180000000000;
  }
  if ((uVar2 >> 0x16 & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x380000000000;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x2000000000;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x6000000000;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x8000000000;
  }
  if ((uVar2 >> 5 & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x10000000000;
  }
  if ((uVar2 >> 6 & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x20000000000;
  }
  if ((uVar4 & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x80000;
  }
  if ((uVar3 >> 8 & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x80;
  }
  if ((uVar2 >> 0x10 & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 1;
  }
  if ((uVar2 >> 0xd & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x4000000;
  }
  if ((uVar4 >> 0x20 & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x10000000;
  }
  if ((uVar4 >> 0x21 & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x100000000;
  }
  if ((uVar2 >> 0xf & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x2000000;
  }
  if ((uVar2 >> 8 & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x1000000;
  }
  if ((uVar2 >> 9 & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x200000000;
  }
  if ((uVar2 >> 10 & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x400000000;
  }
  if ((uVar2 >> 0xb & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x800000000;
  }
  if ((uVar2 >> 0x11 & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x4000000000000;
  }
  if ((uVar2 >> 0x15 & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x20000000;
  }
  if ((int)uVar2 < 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x40000000000000;
  }
  if ((uVar2 >> 0x17 & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x40000000000;
  }
  if ((uVar2 >> 0x18 & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x100000000000000;
  }
  if ((uVar2 >> 0x19 & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x80000000000000;
  }
  if ((uVar4 >> 0x2b & 1) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x800000000000000;
  }
  if ((uVar3 >> 0xb & 1) == 0) {
    if ((param_1 & 0x201) != 0) {
      DAT_0039bef0 = DAT_0039bef0 | 0x300;
    }
    if ((uVar4 & 1) != 0 || (param_1 & 0x10000) != 0) {
      DAT_0039bef0 = DAT_0039bef0 | 0x40000;
    }
    if ((param_1 & 0x4008000) != 0) {
      DAT_0039bef0 = DAT_0039bef0 | 0x400000;
    }
    if ((uVar4 & 0x100004000) != 0) {
      DAT_0039bef0 = DAT_0039bef0 | 0x8000000;
    }
    uVar5 = DAT_0039bef0 | (ulong)(uVar2 << 0x13) & 0x80000000;
    if ((uVar4 & 2) != 0 && (param_1 & 0x400000) != 0) {
      uVar5 = uVar5 | 0x1000000000;
    }
    uVar5 = uVar5 | (param_1 & 0x20000) >> 4;
    goto LAB_00255740;
  }
  uVar4 = id_aa64pfr1_el1;
  if ((uVar4 & 0xf00) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x80000000000;
  }
  if ((uVar4 & 0xf0) == 0x10) {
    DAT_0039bef0 = DAT_0039bef0 | 0x1000000000000;
    if ((uVar4 & 0xf000000) != 0x2000000) goto LAB_00255a30;
LAB_00255a84:
    DAT_0039bef0 = DAT_0039bef0 | 0x200000000000000;
    uVar4 = id_aa64pfr0_el1;
    uVar3 = (uint)uVar4;
  }
  else {
    if ((uVar4 & 0xf000000) == 0x2000000) goto LAB_00255a84;
LAB_00255a30:
    uVar4 = id_aa64pfr0_el1;
    uVar3 = (uint)uVar4;
  }
  if ((~uVar3 & 0xf0000) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x300;
  }
  if ((uVar4 & 0xf00000000) != 0) {
    uVar4 = UnkSytemRegRead(3,0,0,4,4);
    if ((uVar4 & 0xf) == 1) {
      DAT_0039bef0 = DAT_0039bef0 | 0x1000000000;
    }
    else if ((uVar4 & 0xf) == 0) {
      DAT_0039bef0 = DAT_0039bef0 | 0x40000000;
    }
    if ((uVar4 & 0xf00000) != 0) {
      DAT_0039bef0 = DAT_0039bef0 | 0x80000000;
    }
  }
  uVar4 = id_aa64isar0_el1;
  if ((uVar4 & 0xf00000000) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x2000;
  }
  uVar4 = id_aa64isar1_el1;
  uVar5 = uVar4 >> 0x14 & 0xf;
  if ((uVar4 & 0xf) != 0) {
    DAT_0039bef0 = DAT_0039bef0 | 0x40000;
  }
  if (uVar5 != 0) {
    if (uVar5 == 3) {
      DAT_0039bef0 = DAT_0039bef0 | 0x400000000400000;
    }
    else {
      DAT_0039bef0 = DAT_0039bef0 | 0x400000;
    }
  }
  uVar5 = DAT_0039bef0 | 0x800000000000;
  if ((uVar4 & 0xf0000000000) != 0x20000000000) {
    uVar5 = DAT_0039bef0;
  }
  if ((uVar4 & 0xf00000000000) != 0) {
    uVar5 = uVar5 | 0x8000000;
  }
  if (uVar4 >> 0x3c != 0) {
    if (uVar4 >> 0x3d == 0) {
      DAT_0039bef0 = uVar5 | 0x8008000000000000;
      return;
    }
    uVar1 = 0x38000000000000;
    if (uVar4 >> 0x3c < 3) {
      uVar1 = 0x18000000000000;
    }
    DAT_0039bef0 = uVar5 | uVar1 | 0x8000000000000000;
    return;
  }
LAB_00255740:
  DAT_0039bef0 = uVar5 | 0x8000000000000000;
  return;
}


// ===== 00255b74  _INIT_1 =====

void _INIT_1(void)

{
  int iVar1;
  ulong uVar2;
  char local_70 [8];
  ulong uStack_68;
  undefined8 local_60;
  
  if (DAT_0039bef0 != 0) {
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
    FUN_002555d8(uVar2 | 0x4000000000000000,local_70);
  }
  return;
}


// ===== 00255c00  FUN_00255c00 =====

undefined8 FUN_00255c00(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_80 [24];
  code *local_68;
  long local_38;
  
  FUN_00255f48(param_2,param_1);
  iVar2 = FUN_0025606c(param_2);
  while( true ) {
    if (iVar2 == 0) {
      return 5;
    }
    if (iVar2 < 0) break;
    FUN_00255ff0(param_2,0xfffffffe,&local_38);
    iVar2 = FUN_00256080(param_2,auStack_80);
    if (iVar2 != 0) {
      return 2;
    }
    if (local_68 != (code *)0x0) {
      uVar3 = 6;
      if (local_38 != param_3[3]) {
        uVar3 = 2;
      }
      iVar2 = (*local_68)(1,uVar3,*param_3,param_3,param_2);
      puVar1 = PTR___sF_00397178;
      if (iVar2 != 8) {
        if (iVar2 != 7) {
          return 2;
        }
        FUN_002560c0(param_2);
        return 2;
      }
      if (local_38 == param_3[3]) {
        fprintf((FILE *)(PTR___sF_00397178 + 0x130),"libunwind: %s - %s\n","unwind_phase2",
                "during phase1 personality function said it would stop here, but now in phase2 it did not stop here"
               );
        fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    iVar2 = FUN_0025606c(param_2);
  }
  return 2;
}


// ===== 00255d34  FUN_00255d34 =====

void FUN_00255d34(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_4a0 [624];
  undefined1 auStack_230 [528];
  
  FUN_00255eac(auStack_230);
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_00255c00(auStack_230,auStack_4a0,param_1);
  }
  else {
    FUN_00255db8(auStack_230,auStack_4a0,param_1,*(long *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = PTR___sF_00397178;
  fprintf((FILE *)(PTR___sF_00397178 + 0x130),"libunwind: %s - %s\n","_Unwind_Resume",
          "_Unwind_Resume() can\'t return");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00255db8  FUN_00255db8 =====

void FUN_00255db8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,code *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_78 [24];
  code *local_60;
  
  FUN_00255f48(param_2,param_1);
  iVar1 = FUN_0025606c(param_2);
  while( true ) {
    if (iVar1 < 1) {
      (*param_4)(1,0x1a,*param_3,param_3,param_2,param_5);
      return;
    }
    iVar1 = FUN_00256080(param_2,auStack_78);
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
      FUN_002560c0(param_2);
    }
    iVar1 = FUN_0025606c(param_2);
  }
  return;
}


// ===== 00255eac  FUN_00255eac =====

undefined8
FUN_00255eac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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


// ===== 00255f48  FUN_00255f48 =====

undefined8 FUN_00255f48(undefined8 *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = &PTR_FUN_0037bca8;
  param_1[1] = &DAT_0039bef8;
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
  FUN_00256910(param_1,0);
  return 0;
}


// ===== 00255ff0  FUN_00255ff0 =====

undefined8 FUN_00255ff0(long *param_1,undefined4 param_2,undefined8 *param_3)

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


// ===== 0025606c  FUN_0025606c =====

void FUN_0025606c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0025607c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,1);
  return;
}


// ===== 00256080  FUN_00256080 =====

undefined4 FUN_00256080(long *param_1,long param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x48))();
  uVar1 = 0xffffe66b;
  if (*(long *)(param_2 + 8) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 002560c0  FUN_002560c0 =====

undefined8 FUN_002560c0(long *param_1)

{
  (**(code **)(*param_1 + 0x50))();
  return 0xffffe674;
}


// ===== 002560e8  FUN_002560e8 =====

char * FUN_002560e8(undefined8 param_1,uint *param_2,undefined8 *param_3,long *param_4,ulong param_5
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
      pcVar7 = (char *)FUN_00256278(param_1,lVar8,param_4);
      if (pcVar7 != (char *)0x0) {
        return pcVar7;
      }
    }
    else if (*param_4 != lVar8) {
      return "CIE start does not match";
    }
    lVar8 = (long)puVar10 + uVar9;
    local_48 = puVar10 + 1;
    lVar3 = FUN_002580d0(param_1,&local_48,lVar8,(char)param_4[3],0);
    lVar4 = FUN_002580d0(param_1,&local_48,lVar8,*(byte *)(param_4 + 3) & 0xf,0);
    cVar1 = *(char *)((long)param_4 + 0x31);
    param_3[5] = 0;
    puVar10 = local_48;
    if (cVar1 != '\0') {
      lVar5 = FUN_0025845c(&local_48,lVar8);
      puVar2 = local_48;
      puVar10 = (uint *)((long)local_48 + lVar5);
      if ((*(byte *)((long)param_4 + 0x19) != 0xff) &&
         (lVar5 = FUN_002580d0(param_1,&local_48,lVar8,*(byte *)((long)param_4 + 0x19) & 0xf,0),
         lVar5 != 0)) {
        local_48 = puVar2;
        uVar6 = FUN_002580d0(param_1,&local_48,lVar8,*(undefined1 *)((long)param_4 + 0x19),0);
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


// ===== 00256278  FUN_00256278 =====

char * FUN_00256278(undefined8 param_1,uint *param_2,long *param_3)

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
      uVar7 = FUN_0025845c(&local_48,pbVar1);
      uVar13 = 0;
      uVar14 = 0;
      *(undefined4 *)(param_3 + 5) = uVar7;
      puVar5 = PTR___sF_00397178;
      pbVar11 = local_48;
      pbVar15 = local_48;
      do {
        pbVar12 = pbVar11;
        if (pbVar15 == pbVar1) {
          fprintf((FILE *)(PTR___sF_00397178 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
        uVar6 = FUN_0025845c(&local_48,pbVar1);
        *(undefined1 *)((long)param_3 + 0x32) = uVar6;
        bVar2 = *pbVar18;
      }
      if (bVar2 == 0x7a) {
        FUN_0025845c(&local_48,pbVar1);
LAB_002563f8:
        bVar2 = *pbVar18;
        if (bVar2 < 0x50) {
          if (bVar2 < 0x47) {
            if (bVar2 != 0x42) {
              if (bVar2 != 0) goto LAB_00256498;
              goto LAB_002564dc;
            }
            *(undefined1 *)((long)param_3 + 0x33) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_002563f8;
          }
          if (bVar2 == 0x47) {
            *(undefined1 *)((long)param_3 + 0x34) = 1;
            goto LAB_00256498;
          }
          if (bVar2 == 0x4c) {
            pbVar18 = pbVar18 + 1;
            *(byte *)((long)param_3 + 0x19) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_002563f8;
          }
        }
        else if (bVar2 < 0x53) {
          if (bVar2 == 0x50) {
            bVar2 = *local_48;
            *(byte *)((long)param_3 + 0x1a) = bVar2;
            *(char *)((long)param_3 + 0x1b) = (char)(local_48 + 1) - (char)param_2;
            local_48 = local_48 + 1;
            lVar8 = FUN_002580d0(param_1,&local_48,pbVar1,bVar2,0);
            param_3[4] = lVar8;
            pbVar18 = pbVar18 + 1;
            goto LAB_002563f8;
          }
          if (bVar2 == 0x52) {
            pbVar18 = pbVar18 + 1;
            *(byte *)(param_3 + 3) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_002563f8;
          }
        }
        else {
          if (bVar2 == 0x53) {
            *(undefined1 *)(param_3 + 6) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_002563f8;
          }
          if (bVar2 == 0x7a) {
            *(undefined1 *)((long)param_3 + 0x31) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_002563f8;
          }
        }
LAB_00256498:
        pbVar18 = pbVar18 + 1;
        goto LAB_002563f8;
      }
LAB_002564dc:
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


// ===== 00256540  FUN_00256540 =====

void FUN_00256540(void)

{
  return;
}


// ===== 00256548  FUN_00256548 =====

void FUN_00256548(void)

{
  return;
}


// ===== 00256550  FUN_00256550 =====

bool FUN_00256550(undefined8 param_1,uint param_2)

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


// ===== 00256594  FUN_00256594 =====

undefined8 FUN_00256594(long param_1,uint param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_00397178;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_002565fc:
      return *(undefined8 *)(param_1 + 0x108);
    }
    if (param_2 == 0xffffffff) goto LAB_002565f0;
    if (param_2 == 0x1d) {
      return *(undefined8 *)(param_1 + 0xf8);
    }
  }
  else if ((int)param_2 < 0x20) {
    if (param_2 == 0x1e) {
      return *(undefined8 *)(param_1 + 0x100);
    }
    if (param_2 == 0x1f) goto LAB_002565fc;
  }
  else {
    if (param_2 == 0x22) {
      return *(undefined8 *)(param_1 + 0x118);
    }
    if (param_2 == 0x20) {
LAB_002565f0:
      return *(undefined8 *)(param_1 + 0x110);
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_00397178 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8);
}


// ===== 0025667c  FUN_0025667c =====

void FUN_0025667c(long param_1,uint param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_00397178;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_002566e4:
      *(undefined8 *)(param_1 + 0x108) = param_3;
      return;
    }
    if (param_2 == 0xffffffff) goto LAB_002566d8;
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
    if (param_2 == 0x1f) goto LAB_002566e4;
  }
  else {
    if (param_2 == 0x22) {
      *(undefined8 *)(param_1 + 0x118) = param_3;
      return;
    }
    if (param_2 == 0x20) {
LAB_002566d8:
      *(undefined8 *)(param_1 + 0x110) = param_3;
      return;
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_00397178 + 0x130),"libunwind: %s - %s\n","setRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8) = param_3;
  return;
}


// ===== 00256764  FUN_00256764 =====

bool FUN_00256764(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffffffe0) == 0x40;
}


// ===== 00256778  FUN_00256778 =====

undefined1  [16] FUN_00256778(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + (long)param_2 * 8 + -0xe0);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 00256788  FUN_00256788 =====

void FUN_00256788(undefined8 param_1,long param_2,int param_3)

{
  *(undefined8 *)(param_2 + (long)param_3 * 8 + -0xe0) = param_1;
  return;
}


// ===== 00256798  FUN_00256798 =====

ulong FUN_00256798(long *param_1,uint param_2)

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
    uVar3 = FUN_00256cbc(lVar1,uVar4,param_1[0x4b],param_1 + 2,(long)param_1 + 0x269,param_2 & 1);
    iVar2 = (int)uVar3;
  }
  else {
    memset(auStack_240,0,0x210);
    uVar3 = FUN_00256b9c(param_1,auStack_240);
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


// ===== 00256888  FUN_00256888 =====

void FUN_00256888(long param_1,undefined8 *param_2)

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


// ===== 002568cc  FUN_002568cc =====

void FUN_002568cc(long param_1)

{
  FUN_00259964(param_1 + 0x10);
  return;
}


// ===== 002568d8  FUN_002568d8 =====

undefined1 FUN_002568d8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x269);
}


// ===== 002568e4  FUN_002568e4 =====

undefined8 FUN_002568e4(long *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  return 0;
}


// ===== 00256910  FUN_00256910 =====

void FUN_00256910(long *param_1,ulong param_2)

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
  iVar1 = dl_iterate_phdr(FUN_002592b4,&local_648);
  if (((iVar1 == 0) || (local_668 == 0)) ||
     (uVar4 = FUN_00258fe0(param_1,uVar7,auStack_678,0), (uVar4 & 1) == 0)) {
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_0039befc);
    for (puVar6 = PTR_DAT_0039bec0; puVar6 < PTR_DAT_0039bec8; puVar6 = puVar6 + 0x20) {
      if ((*(ulong *)(puVar6 + 8) <= uVar7) && (uVar7 < *(ulong *)(puVar6 + 0x10))) {
        lVar3 = *(long *)(puVar6 + 0x18);
        pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0039befc);
        if ((lVar3 != 0) &&
           (lVar3 = FUN_002560e8(param_1[1],lVar3,&local_6a8,local_6e0,0), lVar3 == 0)) {
          memset(&local_648,0,0x618);
          uVar7 = FUN_00257144(param_1[1],&local_6a8,local_6e0,uVar7,4,&local_648);
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
        goto LAB_00256a98;
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0039befc);
LAB_00256a98:
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


// ===== 00256b90  FUN_00256b90 =====

void FUN_00256b90(undefined8 param_1,undefined4 param_2)

{
  FUN_00259934(param_2);
  return;
}


// ===== 00256b9c  FUN_00256b9c =====

undefined8 FUN_00256b9c(long param_1)

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


// ===== 00256cbc  FUN_00256cbc =====

undefined8
FUN_00256cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,
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
  
  lVar7 = FUN_002560e8(param_1,param_3,auStack_b0,auStack_e8,0);
  if (lVar7 == 0) {
    memset(auStack_700,0,0x618);
    uVar8 = FUN_00257144(param_1,auStack_b0,auStack_e8,param_2,4,auStack_700);
    if ((uVar8 & 1) != 0) {
      uVar8 = FUN_00257d8c(param_1,auStack_700,param_4);
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
        puVar3 = PTR___sF_00397178;
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
              goto LAB_00256f9c;
            }
            else {
              puVar13 = (undefined8 *)((long)param_4 + 0x108);
              if ((local_b6 != 0x22) &&
                 ((puVar13 = (undefined8 *)((long)param_4 + 0x100), local_b6 != 0x20 &&
                  (puVar13 = (undefined8 *)((long)param_4 + 0xf8), local_b6 != 0x1f)))) {
LAB_00256f9c:
                if (0x1c < local_b6) {
                  fprintf((FILE *)(PTR___sF_00397178 + 0x130),"libunwind: %s - %s\n","getRegister",
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
LAB_002570a8:
                  fprintf((FILE *)(PTR___sF_00397178 + 0x130),"libunwind: %s - %s\n",
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
              if (iVar2 != 6) goto LAB_002570a8;
              puVar9 = (ulong *)FUN_00258624(*(undefined8 *)(piVar15 + 2),param_1,param_4,uVar8);
              uVar18 = *puVar9;
            }
            local_a00[uVar12] = uVar18;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == local_b6) {
            uVar14 = FUN_00257ec0(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == 0x22) {
            uVar10 = FUN_00257ec0(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
          }
          else {
            if (0xffffffe0 < uVar16 - 0x40) {
              return 0xffffe672;
            }
            uVar11 = FUN_00257ec0(param_1,param_4,uVar8,piVar15);
            puVar3 = PTR___sF_00397178;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
            if ((int)uVar16 < 0x1f) {
              uVar5 = uVar11;
              if ((uVar16 != 0x1d) && (uVar5 = local_a00[0x3b], uVar6 = uVar11, uVar16 != 0x1e))
              goto LAB_00256ff0;
            }
            else {
              uVar18 = uVar11;
              if ((uVar16 != 0x1f) &&
                 ((uVar18 = local_a00[0x3d], uVar10 = uVar11, uVar16 != 0x22 &&
                  (uVar10 = local_a00[0x3f], uVar16 != 0x20)))) {
LAB_00256ff0:
                if (0x1c < uVar12) {
                  fprintf((FILE *)(PTR___sF_00397178 + 0x130),"libunwind: %s - %s\n","setRegister",
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
            FUN_00257ec0(param_1,auStack_b20,uVar8,&local_80);
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


// ===== 00257144  FUN_00257144 =====

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_00257144(undefined8 param_1,long *param_2,long *param_3,long param_4,int param_5,
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
LAB_002571c8:
    lVar20 = lVar20 + 0x18;
    if (lVar20 == 0x30) {
      return 1;
    }
  }
  uVar17 = 0;
LAB_002571f8:
  puVar18 = local_6c0;
  puVar5 = PTR___sF_00397178;
  pbVar10 = pbVar21 + 1;
  bVar3 = *pbVar21;
  apbStack_6a0[0xc0] = pbVar10;
  switch((ulong)bVar3) {
  case 0:
    goto code_r0x00257acc;
  case 1:
    uVar17 = FUN_002580d0(local_6c8,apbStack_6a0 + 0xc0,pbVar2,(char)param_3[3],0);
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 2:
    uVar9 = (uint)pbVar21[1];
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 2;
    goto LAB_00257680;
  case 3:
    uVar9 = (uint)*(ushort *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 3;
    goto LAB_00257680;
  case 4:
    uVar9 = *(uint *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 5;
LAB_00257680:
    uVar17 = uVar17 + iVar13 * uVar9;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 5:
    uVar19 = FUN_0025845c(apbStack_6a0 + 0xc0,pbVar2);
    lVar8 = FUN_0025845c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended DWARF unwind, reg too big\n";
      __size = 0x46;
      __s = (FILE *)(PTR___sF_00397178 + 0x130);
      goto LAB_00257c7c;
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
LAB_0025761c:
    puVar12[6] = 2;
    *(long *)(puVar12 + 8) = lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 6:
    uVar19 = FUN_0025845c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_restore_extended DWARF unwind, reg too big\n";
LAB_00257b6c:
      __s = (FILE *)(PTR___sF_00397178 + 0x130);
      __size = 0x47;
      goto LAB_00257c7c;
    }
    cVar4 = *(char *)(param_6 + uVar19 * 4 + 7);
joined_r0x00257aac:
    if (cVar4 != '\0') {
      pbVar21 = apbStack_6a0[uVar19 * 2];
      *(byte **)(param_6 + uVar19 * 4 + 8) = apbStack_6a0[uVar19 * 2 + 1];
      *(byte **)(param_6 + uVar19 * 4 + 6) = pbVar21;
    }
    goto code_r0x00257acc;
  case 7:
    uVar19 = FUN_0025845c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_undefined DWARF unwind, reg too big\n";
LAB_00257c70:
      __s = (FILE *)(PTR___sF_00397178 + 0x130);
      __size = 0x40;
      goto LAB_00257c7c;
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
    uVar19 = FUN_0025845c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_same_value DWARF unwind, reg too big\n";
LAB_00257c54:
      __s = (FILE *)(PTR___sF_00397178 + 0x130);
      __size = 0x41;
      goto LAB_00257c7c;
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
    uVar19 = FUN_0025845c(apbStack_6a0 + 0xc0,pbVar2);
    uVar14 = FUN_0025845c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg too big\n";
      __size = 0x3f;
      __s = (FILE *)(PTR___sF_00397178 + 0x130);
      goto LAB_00257c7c;
    }
    if (0x5f < uVar14) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg2 too big\n";
      goto LAB_00257c70;
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
    uVar19 = FUN_0025845c(apbStack_6a0 + 0xc0,pbVar2);
    uVar7 = FUN_0025845c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa DWARF unwind, reg too big\n";
      __size = 0x3e;
      __s = (FILE *)(PTR___sF_00397178 + 0x130);
      goto LAB_00257c7c;
    }
    *param_6 = (int)uVar19;
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xd:
    uVar19 = FUN_0025845c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa_register DWARF unwind, reg too big\n";
      goto LAB_00257b6c;
    }
    *param_6 = (int)uVar19;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xe:
    uVar7 = FUN_0025845c(apbStack_6a0 + 0xc0,pbVar2);
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xf:
    *param_6 = 0;
    *(byte **)(param_6 + 2) = pbVar10;
    goto LAB_00257a00;
  case 0x10:
    uVar19 = FUN_0025845c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_expression DWARF unwind, reg too big\n";
      goto LAB_00257c54;
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
LAB_002579f8:
    puVar12[6] = uVar7;
    *(byte **)(puVar12 + 8) = apbStack_6a0[0xc0];
LAB_00257a00:
    lVar8 = FUN_0025845c(apbStack_6a0 + 0xc0,pbVar2);
    apbStack_6a0[0xc0] = apbStack_6a0[0xc0] + lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x11:
    uVar19 = FUN_0025845c(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_00397178;
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended_sf DWARF unwind, reg too big\n";
      __size = 0x49;
      __s = (FILE *)(PTR___sF_00397178 + 0x130);
      goto LAB_00257c7c;
    }
    uVar14 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_00397178 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
LAB_0025798c:
    puVar12[6] = uVar7;
    *(ulong *)(puVar12 + 8) = uVar11 * (long)iVar13;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x12:
    uVar14 = FUN_0025845c(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_00397178;
    uVar19 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_00397178 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      goto LAB_00257c54;
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
        fprintf((FILE *)(PTR___sF_00397178 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
    uVar19 = FUN_0025845c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      fprintf((FILE *)(PTR___sF_00397178 + 0x130),
              "libunwind: malformed DW_CFA_val_offset DWARF unwind, reg (%lu) out of range\n\n",
              uVar19);
      goto LAB_00257c84;
    }
    lVar8 = FUN_0025845c(apbStack_6a0 + 0xc0,pbVar2);
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
    uVar19 = FUN_0025845c(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_00397178;
    if (uVar19 < 0x60) {
      uVar14 = 0;
      uVar11 = 0;
      pbVar21 = apbStack_6a0[0xc0];
      pbVar10 = apbStack_6a0[0xc0];
      do {
        if (pbVar10 == pbVar2) {
          fprintf((FILE *)(PTR___sF_00397178 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      goto LAB_0025798c;
    }
    __ptr = "libunwind: malformed DW_CFA_val_offset_sf DWARF unwind, reg too big\n";
    __size = 0x44;
    __s = (FILE *)(PTR___sF_00397178 + 0x130);
    goto LAB_00257c7c;
  case 0x16:
    uVar19 = FUN_0025845c(apbStack_6a0 + 0xc0,pbVar2);
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
      goto LAB_002579f8;
    }
    __ptr = "libunwind: malformed DW_CFA_val_expression DWARF unwind, reg too big\n";
    __size = 0x45;
    __s = (FILE *)(PTR___sF_00397178 + 0x130);
    goto LAB_00257c7c;
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
        goto joined_r0x00257aac;
      }
      if (bVar1 != 0x80) {
        return 0;
      }
      local_6dc = param_5;
      lVar8 = FUN_0025845c(apbStack_6a0 + 0xc0,pbVar2);
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
    if (param_5 != 4) goto code_r0x00257acc;
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
    uVar7 = FUN_0025845c(apbStack_6a0 + 0xc0,pbVar2);
    param_6[4] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x2f:
    uVar19 = FUN_0025845c(apbStack_6a0 + 0xc0,pbVar2);
    if (uVar19 < 0x60) {
      lVar8 = FUN_0025845c(apbStack_6a0 + 0xc0,pbVar2);
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
      goto LAB_0025761c;
    }
    __ptr = "libunwind: malformed DW_CFA_GNU_negative_offset_extended DWARF unwind, reg too big\n";
    __size = 0x53;
    __s = (FILE *)(PTR___sF_00397178 + 0x130);
LAB_00257c7c:
    fwrite(__ptr,__size,1,__s);
LAB_00257c84:
    fflush((FILE *)(PTR___sF_00397178 + 0x130));
    return 0;
  }
joined_r0x002575b4:
  if ((pbVar2 <= pbVar21) || (uVar16 <= uVar17)) goto LAB_002571c8;
  goto LAB_002571f8;
code_r0x00257acc:
  pbVar21 = apbStack_6a0[0xc0];
  goto joined_r0x002575b4;
}


// ===== 00257d8c  FUN_00257d8c =====

long FUN_00257d8c(undefined8 param_1,uint *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR___sF_00397178;
  uVar1 = *param_2;
  if ((int)uVar1 < 0x1e) {
    if ((int)uVar1 < 0) {
      if (uVar1 == 0xfffffffe) {
LAB_00257dcc:
        return *(long *)(param_3 + 0xf8) + (long)(int)param_2[1];
      }
      if (uVar1 == 0xffffffff) goto LAB_00257e10;
    }
    else {
      if (uVar1 == 0) {
        lVar3 = FUN_00258624(*(undefined8 *)(param_2 + 2),param_1,param_3,0);
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
    if (uVar1 == 0x1f) goto LAB_00257dcc;
  }
  else {
    if (uVar1 == 0x22) {
      return *(long *)(param_3 + 0x108) + (long)(int)param_2[1];
    }
    if (uVar1 == 0x20) {
LAB_00257e10:
      return *(long *)(param_3 + 0x100) + (long)(int)param_2[1];
    }
  }
  if (0x1c < uVar1) {
    fprintf((FILE *)(PTR___sF_00397178 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(long *)(param_3 + (ulong)uVar1 * 8) + (long)(int)param_2[1];
}


// ===== 00257ec0  FUN_00257ec0 =====

undefined8 FUN_00257ec0(undefined8 param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  puVar2 = PTR___sF_00397178;
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
LAB_00257ffc:
          return *(undefined8 *)(param_2 + 0xf8);
        }
        if (uVar5 == 0xffffffff) goto LAB_00257fe4;
        if (uVar5 == 0x1d) {
          return *(undefined8 *)(param_2 + 0xe8);
        }
      }
      else if ((int)uVar5 < 0x20) {
        if (uVar5 == 0x1e) {
          return *(undefined8 *)(param_2 + 0xf0);
        }
        if (uVar5 == 0x1f) goto LAB_00257ffc;
      }
      else {
        if (uVar5 == 0x22) {
          return *(undefined8 *)(param_2 + 0x108);
        }
        if (uVar5 == 0x20) {
LAB_00257fe4:
          return *(undefined8 *)(param_2 + 0x100);
        }
      }
      if (0x1c < uVar5) {
        fprintf((FILE *)(PTR___sF_00397178 + 0x130),"libunwind: %s - %s\n","getRegister",
                "unsupported arm64 register");
        fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      return *(undefined8 *)(param_2 + (*(ulong *)(param_4 + 2) & 0xffffffff) * 8);
    }
    if (iVar1 == 6) {
      puVar4 = (undefined8 *)FUN_00258624(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return *puVar4;
    }
    if (iVar1 == 7) {
      uVar3 = FUN_00258624(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return uVar3;
    }
  }
  fprintf((FILE *)(PTR___sF_00397178 + 0x130),"libunwind: %s - %s\n","getSavedRegister",
          "unsupported restore location for register");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 002580d0  FUN_002580d0 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_002580d0(undefined8 param_1,long *param_2,ulong *param_3,uint param_4,long param_5)

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
  
  puVar3 = PTR___sF_00397178;
  uVar1 = param_4 & 0xf;
  puVar10 = (ulong *)*param_2;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if ((param_4 & 0xf) == 0) goto LAB_0025821c;
      if (uVar1 != 1) {
LAB_00258428:
        fprintf((FILE *)(PTR___sF_00397178 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "unknown pointer encoding");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar4 = (undefined8 *)FUN_0025845c(param_2,param_3);
      puVar3 = PTR___sF_00397178;
    }
    else if (uVar1 == 2) {
      puVar4 = (undefined8 *)(ulong)(ushort)*puVar10;
      *param_2 = (long)puVar10 + 2;
      puVar3 = PTR___sF_00397178;
    }
    else {
      if (uVar1 != 3) goto LAB_00258428;
      puVar4 = (undefined8 *)(ulong)(uint)*puVar10;
      *param_2 = (long)((long)puVar10 + 4);
      puVar3 = PTR___sF_00397178;
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 4) {
LAB_0025821c:
      puVar4 = (undefined8 *)*puVar10;
      *param_2 = (long)(puVar10 + 1);
      puVar3 = PTR___sF_00397178;
    }
    else {
      if (uVar1 != 9) goto LAB_00258428;
      uVar7 = 0;
      uVar5 = 0;
      puVar6 = puVar10;
      puVar9 = puVar10;
      do {
        if (puVar9 == param_3) {
          fprintf((FILE *)(PTR___sF_00397178 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      puVar3 = PTR___sF_00397178;
    }
  }
  else if (uVar1 == 10) {
    puVar4 = (undefined8 *)(long)(short)*puVar10;
    *param_2 = (long)puVar10 + 2;
    puVar3 = PTR___sF_00397178;
  }
  else {
    if (uVar1 != 0xb) {
      if (uVar1 != 0xc) goto LAB_00258428;
      goto LAB_0025821c;
    }
    puVar4 = (undefined8 *)(long)(int)(uint)*puVar10;
    *param_2 = (long)((long)puVar10 + 4);
    puVar3 = PTR___sF_00397178;
  }
  uVar1 = (param_4 & 0xff) >> 4 & 7;
  PTR___sF_00397178 = puVar3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      if (uVar1 != 1) goto LAB_002583f4;
      puVar4 = (undefined8 *)((long)puVar4 + (long)puVar10);
    }
LAB_002582a8:
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
      goto LAB_002582a8;
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
LAB_002583f4:
  fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP","unknown pointer encoding");
  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0025845c  FUN_0025845c =====

ulong FUN_0025845c(long *param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  puVar2 = PTR___sF_00397178;
  pbVar4 = (byte *)*param_1;
  if (pbVar4 != param_2) {
    pbVar5 = pbVar4 + 1;
    uVar3 = (ulong)*pbVar4 & 0x7f;
    if (-1 < (char)*pbVar4) {
LAB_0025848c:
      *param_1 = (long)pbVar5;
      return uVar3;
    }
    if (pbVar5 != param_2) {
      uVar3 = uVar3 | (ulong)((int)(char)pbVar4[1] & 0x7f) << 7;
      pbVar5 = pbVar4 + 2;
      if (-1 < (char)pbVar4[1]) goto LAB_0025848c;
      if (pbVar5 != param_2) {
        uVar3 = uVar3 | (ulong)((int)(char)pbVar4[2] & 0x7f) << 0xe;
        pbVar5 = pbVar4 + 3;
        if (-1 < (char)pbVar4[2]) goto LAB_0025848c;
        if (pbVar5 != param_2) {
          uVar3 = uVar3 | (ulong)((int)(char)pbVar4[3] & 0x7f) << 0x15;
          pbVar5 = pbVar4 + 4;
          if (-1 < (char)pbVar4[3]) goto LAB_0025848c;
          if (pbVar5 != param_2) {
            uVar3 = uVar3 | (ulong)((int)(char)pbVar4[4] & 0x7f) << 0x1c;
            pbVar5 = pbVar4 + 5;
            if (-1 < (char)pbVar4[4]) goto LAB_0025848c;
            if (pbVar5 != param_2) {
              uVar3 = uVar3 | (ulong)((int)(char)pbVar4[5] & 0x7f) << 0x23;
              pbVar5 = pbVar4 + 6;
              if (-1 < (char)pbVar4[5]) goto LAB_0025848c;
              if (pbVar5 != param_2) {
                uVar3 = uVar3 | (ulong)((int)(char)pbVar4[6] & 0x7f) << 0x2a;
                pbVar5 = pbVar4 + 7;
                if (-1 < (char)pbVar4[6]) goto LAB_0025848c;
                if (pbVar5 != param_2) {
                  uVar3 = uVar3 | (ulong)((int)(char)pbVar4[7] & 0x7f) << 0x31;
                  pbVar5 = pbVar4 + 8;
                  if (-1 < (char)pbVar4[7]) goto LAB_0025848c;
                  if (pbVar5 != param_2) {
                    uVar3 = uVar3 | (ulong)((int)(char)pbVar4[8] & 0x7f) << 0x38;
                    pbVar5 = pbVar4 + 9;
                    if (-1 < (char)pbVar4[8]) goto LAB_0025848c;
                    if (pbVar5 != param_2) {
                      bVar1 = *pbVar5;
                      if ((bVar1 & 0x7e) == 0) {
                        if (-1 < (char)bVar1) {
                          *param_1 = (long)(pbVar4 + 10);
                          return uVar3 | (ulong)bVar1 << 0x3f;
                        }
                        if (pbVar4 + 10 == param_2) goto LAB_002585bc;
                      }
                      fprintf((FILE *)(PTR___sF_00397178 + 0x130),"libunwind: %s - %s\n",
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
LAB_002585bc:
  fprintf((FILE *)(PTR___sF_00397178 + 0x130),"libunwind: %s - %s\n","getULEB128",
          "truncated uleb128 expression");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00258624  FUN_00258624 =====

ulong FUN_00258624(byte *param_1,undefined8 param_2,long param_3,ulong param_4)

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
  lVar11 = FUN_0025845c(&local_68,param_1 + 0x14);
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
      puVar9 = PTR___sF_00397178;
      pbVar13 = pbVar18 + 1;
      local_68 = pbVar13;
      bVar8 = *pbVar18;
      uVar10 = (uint)bVar8;
      if (0x91 < uVar10 - 3) {
code_r0x00258ea0:
        fprintf((FILE *)(PTR___sF_00397178 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
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
        goto LAB_00258b0c;
      case 4:
      case 5:
      case 7:
        goto code_r0x00258ea0;
      case 6:
        puVar14 = (ulong *)*puVar19;
LAB_00258a9c:
        *puVar19 = *puVar14;
        goto LAB_002586a8;
      case 8:
        uVar16 = (ulong)pbVar18[1];
        goto LAB_00258a70;
      case 9:
        uVar16 = (ulong)(char)pbVar18[1];
LAB_00258a70:
        local_68 = pbVar18 + 2;
        goto LAB_00258b0c;
      case 10:
        uVar16 = (ulong)*(ushort *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_00258b0c;
      case 0xb:
        uVar16 = (ulong)*(short *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_00258b0c;
      case 0xc:
        uVar16 = (ulong)*(uint *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_00258b0c;
      case 0xd:
        uVar16 = (ulong)*(int *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_00258b0c;
      case 0x10:
        uVar16 = FUN_0025845c(&local_68,pbVar6);
        puVar19 = puVar19 + 1;
        *puVar19 = uVar16;
        goto LAB_002586a8;
      case 0x11:
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = pbVar13;
        do {
          if (pbVar18 == pbVar6) {
            fprintf((FILE *)(PTR___sF_00397178 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
        goto LAB_002586a8;
      case 0x12:
        uVar16 = *puVar19;
        goto LAB_002586a4;
      case 0x13:
        puVar19 = puVar19 + -1;
        goto LAB_002586a8;
      case 0x14:
        uVar16 = puVar19[-1];
        goto LAB_002586a4;
      case 0x15:
        local_68 = pbVar18 + 2;
        uVar16 = puVar19[-(ulong)pbVar18[1]];
LAB_00258b0c:
LAB_002586a4:
        puVar19[1] = uVar16;
        puVar19 = puVar19 + 1;
        goto LAB_002586a8;
      case 0x16:
        auVar20 = NEON_ext(*(undefined1 (*) [16])(puVar19 + -1),*(undefined1 (*) [16])(puVar19 + -1)
                           ,8,1);
        *puVar19 = auVar20._8_8_;
        puVar19[-1] = auVar20._0_8_;
        goto LAB_002586a8;
      case 0x17:
        uVar16 = *puVar19;
        *puVar19 = SUB168(*(undefined1 (*) [16])(puVar19 + -2),8);
        puVar19[-1] = SUB168(*(undefined1 (*) [16])(puVar19 + -2),0);
        puVar19[-2] = uVar16;
        goto LAB_002586a8;
      case 0x18:
        puVar14 = (ulong *)*puVar19;
        puVar19 = puVar19 + -1;
        *puVar19 = *puVar14;
        goto LAB_002586a8;
      case 0x19:
        uVar16 = *puVar19;
        if ((long)uVar16 < 0) goto LAB_00258c44;
        goto LAB_002586a8;
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
LAB_00258c44:
        *puVar19 = -uVar16;
        goto LAB_002586a8;
      case 0x20:
        *puVar19 = ~*puVar19;
        goto LAB_002586a8;
      case 0x21:
        uVar16 = puVar19[-1] | *puVar19;
        break;
      case 0x22:
        uVar16 = puVar19[-1] + *puVar19;
        break;
      case 0x23:
        lVar11 = FUN_0025845c(&local_68,pbVar6);
        *puVar19 = *puVar19 + lVar11;
        goto LAB_002586a8;
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
        goto LAB_002586a8;
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
        goto LAB_002586a8;
      default:
        uVar16 = (ulong)(uVar15 - 0x30);
        goto LAB_002586a4;
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
        goto LAB_002586a0;
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
            fprintf((FILE *)(PTR___sF_00397178 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
             (puVar14 = puVar2, bVar8 != 0x8d)) goto LAB_002587e0;
        }
        else if (bVar8 < 0x90) {
          puVar14 = puVar1;
          if ((bVar8 != 0x8e) && (puVar14 = puVar4, uVar15 != 0x8f)) {
LAB_002587e0:
            if (0x1c < uVar10 - 0x70) {
              fprintf((FILE *)(PTR___sF_00397178 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((bVar8 != 0x90) && (puVar14 = puVar3, bVar8 != 0x92)) goto LAB_002587e0;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_002586a4;
      case 0x90:
        uVar10 = FUN_0025845c(&local_68,pbVar6);
        puVar9 = PTR___sF_00397178;
        if ((int)uVar10 < 0x1e) {
          if (((uVar10 != 0xfffffffe) && (puVar14 = puVar5, uVar10 != 0xffffffff)) &&
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_00258d44;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_00258d44:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_00397178 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_00258d44;
        }
LAB_002586a0:
        uVar16 = *puVar14;
        goto LAB_002586a4;
      case 0x91:
        fprintf((FILE *)(PTR___sF_00397178 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_fbreg not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x92:
        uVar10 = FUN_0025845c(&local_68,pbVar6);
        puVar9 = PTR___sF_00397178;
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = local_68;
        pbVar13 = local_68;
        do {
          if (pbVar13 == pbVar6) {
            fprintf((FILE *)(PTR___sF_00397178 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_00258d6c;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_00258d6c:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_00397178 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_00258d6c;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_002586a4;
      case 0x93:
        fprintf((FILE *)(PTR___sF_00397178 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
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
LAB_00258f44:
              fprintf((FILE *)(PTR___sF_00397178 + 0x130),"libunwind: %s - %s\n",
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
            if (bVar8 != 8) goto LAB_00258f44;
            goto LAB_00258a9c;
          }
          *puVar19 = (ulong)(uint)*puVar14;
        }
        goto LAB_002586a8;
      }
      puVar19[-1] = uVar16;
      puVar19 = puVar19 + -1;
LAB_002586a8:
      pbVar18 = local_68;
    } while (local_68 < pbVar6);
    param_4 = *puVar19;
  }
  return param_4;
}


// ===== 00258fe0  FUN_00258fe0 =====

undefined8 FUN_00258fe0(long param_1,ulong param_2,long *param_3,uint param_4)

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
      (uVar3 = FUN_00259508(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],
                            param_3[2] + (ulong)param_4,&local_6b0,auStack_6e8), (uVar3 & 1) == 0))
     && ((param_3[4] == 0 ||
         (uVar3 = FUN_002596d0(*(undefined8 *)(param_1 + 8),param_2,param_3[4],(int)param_3[5],
                               &local_6b0,auStack_6e8), (uVar3 & 1) == 0)))) {
    lVar5 = *param_3;
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_0039befc);
    if (PTR_DAT_0039bec0 < PTR_DAT_0039bec8) {
      plVar4 = (long *)PTR_DAT_0039bec0;
      if (lVar5 == -1) {
        do {
          if (((ulong)plVar4[1] <= param_2) && (param_2 < (ulong)plVar4[2])) goto LAB_002590e8;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_0039bec8);
      }
      else {
        do {
          if (((*plVar4 == lVar5) && ((ulong)plVar4[1] <= param_2)) && (param_2 < (ulong)plVar4[2]))
          goto LAB_002590e8;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_0039bec8);
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0039befc);
    goto LAB_00259130;
  }
LAB_00259150:
  bVar2 = 1;
LAB_00259154:
  lVar5 = *param_3;
  memset(auStack_680,0,0x618);
  uVar3 = FUN_00257144(*(undefined8 *)(param_1 + 8),&local_6b0,auStack_6e8,param_2,4,auStack_680);
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
      pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_0039befc);
      __src = PTR_DAT_0039bec0;
      if (PTR_clazz_0039bed0 <= PTR_DAT_0039bec8) {
        __n = (long)PTR_clazz_0039bed0 - (long)PTR_DAT_0039bec0;
        __dest = (undefined *)malloc(__n * 4);
        memcpy(__dest,__src,__n);
        if ((undefined8 *)__src != &DAT_0039bf38) {
          free(__src);
        }
        PTR_clazz_0039bed0 = __dest + ((long)__n >> 3) * 0x20;
        PTR_DAT_0039bec8 = __dest + __n;
        PTR_DAT_0039bec0 = __dest;
      }
      *(long *)PTR_DAT_0039bec8 = lVar5;
      *(long *)((long)PTR_DAT_0039bec8 + 8) = local_698;
      *(long *)((long)PTR_DAT_0039bec8 + 0x18) = local_6b0;
      *(long *)((long)PTR_DAT_0039bec8 + 0x10) = local_690;
      PTR_DAT_0039bec8 = (undefined *)((long)PTR_DAT_0039bec8 + 0x20);
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0039befc);
      return 1;
    }
    return 1;
  }
  return 1;
LAB_002590e8:
  lVar5 = plVar4[3];
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0039befc);
  if ((lVar5 != 0) &&
     (uVar3 = FUN_00259508(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],lVar5,
                           &local_6b0,auStack_6e8), (uVar3 & 1) != 0)) {
    bVar2 = 0;
    goto LAB_00259154;
  }
LAB_00259130:
  uVar3 = FUN_00259508(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],0,&local_6b0,
                       auStack_6e8);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  goto LAB_00259150;
}


// ===== 002592b4  FUN_002592b4 =====

undefined8 FUN_002592b4(ulong *param_1,undefined8 param_2,undefined8 *param_3)

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
              uVar5 = FUN_002593e8(uVar2,lVar8,lVar9 + lVar8,local_70);
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


// ===== 002593e8  FUN_002593e8 =====

undefined8 FUN_002593e8(undefined8 param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte *local_28;
  
  puVar3 = PTR___sF_00397178;
  if ((ulong)((long)param_3 - (long)param_2) < 4) {
    if (param_3 == param_2) {
      return 0;
    }
    fprintf((FILE *)(PTR___sF_00397178 + 0x130),
            "libunwind: unsupported .eh_frame_hdr at %lx: need at least 4 bytes of data but only got %zd\n"
            ,param_2);
  }
  else {
    if (*param_2 == 1) {
      local_28 = param_2 + 4;
      bVar1 = param_2[2];
      bVar2 = param_2[1];
      *(byte *)(param_4 + 3) = param_2[3];
      uVar4 = FUN_002580d0(param_1,&local_28,param_3,bVar2,param_2);
      *param_4 = uVar4;
      if (bVar1 == 0xff) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_002580d0(param_1,&local_28,param_3,bVar1,param_2);
      }
      param_4[1] = uVar4;
      param_4[2] = local_28;
      return 1;
    }
    fprintf((FILE *)(PTR___sF_00397178 + 0x130),
            "libunwind: unsupported .eh_frame_hdr version: %u at %lx\n",(ulong)(uint)*param_2,
            param_2);
  }
  fflush((FILE *)(puVar3 + 0x130));
  return 0;
}


// ===== 00259508  FUN_00259508 =====

undefined8
FUN_00259508(undefined8 param_1,ulong param_2,uint *param_3,long param_4,uint *param_5,
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
        (puVar7 < puVar9)) && (lVar4 = FUN_00256278(param_1,puVar7,param_7), lVar4 == 0)) {
      local_68 = local_68 + 1;
      uVar8 = FUN_002580d0(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x18),0);
      lVar4 = FUN_002580d0(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x18) & 0xf,0);
      if ((uVar8 < param_2) && (param_2 <= lVar4 + uVar8)) {
        cVar2 = *(char *)(param_7 + 0x31);
        param_6[5] = 0;
        puVar9 = local_68;
        if (cVar2 != '\0') {
          lVar5 = FUN_0025845c(&local_68,puVar1);
          puVar7 = local_68;
          puVar9 = (uint *)((long)local_68 + lVar5);
          if ((*(byte *)(param_7 + 0x19) != 0xff) &&
             (lVar5 = FUN_002580d0(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x19) & 0xf,0),
             lVar5 != 0)) {
            local_68 = puVar7;
            uVar6 = FUN_002580d0(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x19),0);
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


// ===== 002596d0  FUN_002596d0 =====

undefined8
FUN_002596d0(undefined8 param_1,ulong param_2,long param_3,ulong param_4,long param_5,
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
  uVar1 = FUN_002593e8(param_1,param_3,lVar4,auStack_80);
  if (((uVar1 & 1) != 0) && (local_78 != 0)) {
    lVar2 = FUN_00259838(local_68);
    lVar7 = 0;
    do {
      if (local_78 < 2) {
        lVar8 = lVar7 * lVar2;
        break;
      }
      uVar6 = local_78 >> 1;
      lVar8 = (uVar6 + lVar7) * lVar2;
      local_88 = local_70 + lVar8;
      uVar1 = FUN_002580d0(param_1,&local_88,lVar4,local_68,param_3);
      uVar5 = local_78 - uVar6;
      local_78 = uVar6;
      if (uVar1 < param_2) {
        local_78 = uVar5;
        lVar7 = uVar6 + lVar7;
      }
    } while (uVar1 != param_2);
    local_88 = local_70 + lVar8;
    FUN_002580d0(param_1,&local_88,lVar4,local_68,param_3);
    uVar3 = FUN_002580d0(param_1,&local_88,lVar4,local_68,param_3);
    lVar4 = FUN_002560e8(param_1,uVar3,param_5,param_6,0);
    if (((lVar4 == 0) && (*(ulong *)(param_5 + 0x18) <= param_2)) &&
       (param_2 < *(ulong *)(param_5 + 0x20))) {
      return 1;
    }
  }
  return 0;
}


// ===== 00259838  FUN_00259838 =====

undefined8 FUN_00259838(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_00397178;
  param_1 = param_1 & 0xf;
  if (param_1 < 9) {
    if (param_1 < 3) {
      if (param_1 == 2) {
        return 4;
      }
      if (param_1 == 1) {
LAB_00259900:
        fprintf((FILE *)(PTR___sF_00397178 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
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
    if (param_1 == 9) goto LAB_00259900;
  }
  else {
    if (param_1 == 0xc) {
      return 0x10;
    }
    if (param_1 == 0xb) {
      return 8;
    }
  }
  fprintf((FILE *)(PTR___sF_00397178 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
          "Unknown DWARF encoding for search table.");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00259934  FUN_00259934 =====

char * FUN_00259934(int param_1)

{
  if (param_1 + 2U < 0x62) {
    return &DAT_001d7cc8 + *(int *)(&DAT_001d7cc8 + (ulong)(param_1 + 2U) * 4);
  }
  return "unknown register";
}


// ===== 00259964  FUN_00259964 =====

undefined1  [16] FUN_00259964(undefined1 (*param_1) [16])

{
  return *param_1;
}


// ===== 00259a00  FUN_00259a00 =====

long FUN_00259a00(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_0039bee8 == '\0') {
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


// ===== 00259a30  JNI_OnLoad =====

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
  local_60[0] = &PTR_FUN_0037be08;
  uVar2 = facebook::jni::initialize(param_1,(function *)local_60);
  if ((undefined ***)local_40 == local_60) {
    lVar4 = 4;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_00259a9c;
    lVar4 = 5;
    pppuVar3 = (undefined ***)local_40;
  }
  (**(code **)((long)*pppuVar3 + lVar4 * 8))(pppuVar3);
LAB_00259a9c:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00259ac4  _INIT_2 =====

void _INIT_2(void)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  if (((*PTR__globalCache_00394270 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR__globalCache_00394270), puVar2 = PTR__globalCache_00394268,
     iVar3 != 0)) {
    *(undefined4 *)(PTR__globalCache_00394268 + 0x20) = 0x3f800000;
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined8 *)puVar2 = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    __cxa_atexit(FUN_00259b78,puVar2,&PTR_LOOP_0037bc90);
    if (*(long *)(lVar1 + 0x28) == lVar4) {
      __cxa_guard_release(PTR__globalCache_00394270);
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00259b78  FUN_00259b78 =====

void FUN_00259b78(undefined8 *param_1)

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


// ===== 00259c20  margelo::nitro::rive::initialize =====

/* margelo::nitro::rive::initialize(_JavaVM*) */

undefined4 margelo::nitro::rive::initialize(_JavaVM *param_1)

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
  local_60[0] = &PTR_FUN_0037be08;
  uVar2 = facebook::jni::initialize(param_1,(function *)local_60);
  if ((undefined ***)local_40 == local_60) {
    lVar4 = 4;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_00259c8c;
    lVar4 = 5;
    pppuVar3 = (undefined ***)local_40;
  }
  (**(code **)((long)*pppuVar3 + lVar4 * 8))(pppuVar3);
LAB_00259c8c:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00259cb4  FUN_00259cb4 =====

void FUN_00259cb4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00259cec  FUN_00259cec =====

void FUN_00259cec(void *param_1)

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


// ===== 00259d24  FUN_00259d24 =====

void FUN_00259d24(void)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    puVar2 = (undefined8 *)operator_new(0x10);
    *puVar2 = &PTR_FUN_0037be08;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00259d70  FUN_00259d70 =====

void FUN_00259d70(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037be08;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00259db4  FUN_00259db4 =====

void FUN_00259db4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00259dec  FUN_00259dec =====

void FUN_00259dec(void *param_1)

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


// ===== 00259e24  FUN_00259e24 =====

void FUN_00259e24(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    margelo::nitro::rive::registerAllNatives();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00259e5c  FUN_00259e5c =====

void FUN_00259e5c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) != "ZN7margelo5nitro4rive10initializeEP7_JavaVME3$_0") {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00259eac  FUN_00259eac =====

pointer_____offset_0x10___ * FUN_00259eac(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0037be68;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00259eec  margelo::nitro::rive::registerAllNatives =====

/* margelo::nitro::rive::registerAllNatives() */

void margelo::nitro::rive::registerAllNatives(void)

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
  long lVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  undefined ***pppuVar16;
  undefined ***pppuVar17;
  undefined8 uVar18;
  undefined **local_70;
  undefined *puStack_68;
  undefined *local_60;
  long *local_58;
  long *local_50;
  basic_string local_40;
  undefined6 uStack_3f;
  char cStack_39;
  char cStack_38;
  char cStack_37;
  undefined2 uStack_36;
  char cStack_34;
  undefined2 uStack_33;
  char cStack_31;
  char cStack_30;
  undefined1 uStack_2f;
  undefined6 uStack_2e;
  long local_28;
  
  pppuVar12 = &local_70;
  pppuVar13 = &local_70;
  pppuVar14 = &local_70;
  pppuVar15 = &local_70;
  pppuVar16 = &local_70;
  pppuVar17 = &local_70;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  JHybridBindableArtboardSpec::CxxPart::registerNatives();
  JHybridRiveFileSpec::CxxPart::registerNatives();
  JHybridRiveFileFactorySpec::CxxPart::registerNatives();
  JHybridFallbackFontSpec::CxxPart::registerNatives();
  JHybridRiveFontConfigSpec::CxxPart::registerNatives();
  JHybridRiveImageSpec::CxxPart::registerNatives();
  JHybridRiveImageFactorySpec::CxxPart::registerNatives();
  JHybridRiveRuntimeSpec::CxxPart::registerNatives();
  JHybridRiveViewSpec::CxxPart::registerNatives();
  puStack_68 = PTR_kDescriptor_0037bd28;
  local_70 = (undefined **)PTR_s_invoke_cxx_0037bd20;
  local_60 = PTR_call_0037bd30;
  pcVar9 = (char *)operator_new(0x30);
  uVar6 = s_Lcom_margelo_nitro_rive_Func_voi_001d77c3._39_8_;
  uVar5 = s_Lcom_margelo_nitro_rive_Func_voi_001d77c3._17_8_;
  uVar4 = s_Lcom_margelo_nitro_rive_Func_voi_001d77c3._9_8_;
  uVar3 = s_Lcom_margelo_nitro_rive_Func_voi_001d77c3._1_8_;
  uVar18 = CONCAT26(s_Lcom_margelo_nitro_rive_Func_voi_001d77c3._31_2_,
                    s_Lcom_margelo_nitro_rive_Func_voi_001d77c3._25_6_);
  uVar2 = CONCAT62(s_Lcom_margelo_nitro_rive_Func_voi_001d77c3._33_6_,
                   s_Lcom_margelo_nitro_rive_Func_voi_001d77c3._31_2_);
  pcVar9[0x2e] = '\0';
  *(undefined8 *)(pcVar9 + 8) = uVar4;
  *(undefined8 *)pcVar9 = uVar3;
  *(undefined8 *)(pcVar9 + 0x18) = uVar18;
  *(undefined8 *)(pcVar9 + 0x10) = uVar5;
  *(undefined8 *)(pcVar9 + 0x26) = uVar6;
  *(undefined8 *)(pcVar9 + 0x1e) = uVar2;
                    /* try { // try from 00259f6c to 00259f73 has its CatchHandler @ 0025a7bc */
  facebook::jni::findClassLocal(pcVar9);
  operator_delete(pcVar9);
                    /* try { // try from 00259f7c to 00259fa3 has its CatchHandler @ 0025a7fc */
  plVar10 = (long *)facebook::jni::Environment::current();
  iVar8 = (**(code **)(*plVar10 + 0x6b8))
                    (plVar10,CONCAT17(cStack_39,CONCAT61(uStack_3f,local_40)),&local_70,1);
  facebook::jni::throwCppExceptionIf(iVar8 != 0);
  lVar11 = CONCAT17(cStack_39,CONCAT61(uStack_3f,local_40));
  if (lVar11 != 0) {
                    /* try { // try from 00259fac to 00259fbf has its CatchHandler @ 0025a7e4 */
    plVar10 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,lVar11);
  }
  puStack_68 = PTR_kDescriptor_0037bd40;
  local_70 = (undefined **)PTR_s_invoke_cxx_0037bd38;
  local_60 = PTR_call_0037bd48;
  pcVar9 = (char *)operator_new(0x40);
  uVar7 = s_Lcom_margelo_nitro_rive_Func_voi_001d5aea._33_8_;
  uVar6 = s_Lcom_margelo_nitro_rive_Func_voi_001d5aea._25_8_;
  uVar5 = s_Lcom_margelo_nitro_rive_Func_voi_001d5aea._17_8_;
  uVar4 = s_Lcom_margelo_nitro_rive_Func_voi_001d5aea._9_8_;
  uVar3 = s_Lcom_margelo_nitro_rive_Func_voi_001d5aea._1_8_;
  uVar18 = CONCAT35(s_Lcom_margelo_nitro_rive_Func_voi_001d5aea._46_3_,
                    s_Lcom_margelo_nitro_rive_Func_voi_001d5aea._41_5_);
  uVar2 = CONCAT53(s_Lcom_margelo_nitro_rive_Func_voi_001d5aea._49_5_,
                   s_Lcom_margelo_nitro_rive_Func_voi_001d5aea._46_3_);
  pcVar9[0x35] = '\0';
  *(undefined8 *)(pcVar9 + 0x28) = uVar18;
  *(undefined8 *)(pcVar9 + 0x20) = uVar7;
  *(undefined8 *)(pcVar9 + 8) = uVar4;
  *(undefined8 *)pcVar9 = uVar3;
  *(undefined8 *)(pcVar9 + 0x18) = uVar6;
  *(undefined8 *)(pcVar9 + 0x10) = uVar5;
  *(undefined8 *)(pcVar9 + 0x2d) = uVar2;
                    /* try { // try from 0025a008 to 0025a00f has its CatchHandler @ 0025a7b8 */
  facebook::jni::findClassLocal(pcVar9);
  operator_delete(pcVar9);
                    /* try { // try from 0025a018 to 0025a03f has its CatchHandler @ 0025a7f8 */
  plVar10 = (long *)facebook::jni::Environment::current();
  iVar8 = (**(code **)(*plVar10 + 0x6b8))
                    (plVar10,CONCAT17(cStack_39,CONCAT61(uStack_3f,local_40)),&local_70,1);
  facebook::jni::throwCppExceptionIf(iVar8 != 0);
  lVar11 = CONCAT17(cStack_39,CONCAT61(uStack_3f,local_40));
  if (lVar11 != 0) {
                    /* try { // try from 0025a048 to 0025a05b has its CatchHandler @ 0025a7e0 */
    plVar10 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,lVar11);
  }
  if (((*PTR_cls_003945b8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_cls_003945b8), iVar8 != 0))
  {
                    /* try { // try from 0025a6f0 to 0025a703 has its CatchHandler @ 0025a714 */
    facebook::jni::findClassStatic(PTR_kBaseName_003945c0);
    __cxa_guard_release(PTR_cls_003945b8);
  }
  uVar18 = *(undefined8 *)PTR_cls_003945b0;
  puStack_68 = PTR_kDescriptor_0037bd88;
  local_70 = (undefined **)PTR_s_updateViewProps_0037bd80;
  local_60 = PTR_call_0037bd90;
  plVar10 = (long *)facebook::jni::Environment::current();
  iVar8 = (**(code **)(*plVar10 + 0x6b8))(plVar10,uVar18,&local_70,1);
  facebook::jni::throwCppExceptionIf(iVar8 != 0);
  local_70 = (undefined **)PTR_HybridRiveViewComponentName_003947e8;
  puStack_68 = PTR_HybridRiveViewComponentName_003947e8;
  local_60 = (undefined *)0x0;
  local_58 = (long *)0x0;
  local_50 = (long *)
             PTR_concreteComponentDescriptorConstructor<margelo_nitro_rive_views_HybridRiveViewComponentDescriptor>_00394260
  ;
                    /* try { // try from 0025a0d4 to 0025a0db has its CatchHandler @ 0025a7a8 */
  facebook::react::CoreComponentsRegistry::sharedProviderRegistry();
                    /* try { // try from 0025a0e0 to 0025a0e7 has its CatchHandler @ 0025a794 */
  facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)CONCAT17(cStack_39,CONCAT61(uStack_3f,local_40)));
  plVar10 = (long *)CONCAT17(cStack_31,
                             CONCAT25(uStack_33,
                                      CONCAT14(cStack_34,
                                               CONCAT22(uStack_36,CONCAT11(cStack_37,cStack_38)))));
  if ((plVar10 != (long *)0x0) &&
     (lVar11 = FUN_00255510(0xffffffffffffffff,plVar10 + 1), lVar11 == 0)) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar10 = local_58;
  if ((local_58 != (long *)0x0) &&
     (lVar11 = FUN_00255510(0xffffffffffffffff,local_58 + 1), lVar11 == 0)) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  JHybridViewModelSpec::CxxPart::registerNatives();
  JHybridViewModelInstanceSpec::CxxPart::registerNatives();
  JHybridViewModelPropertySpec::CxxPart::registerNatives();
  JHybridViewModelNumberPropertySpec::CxxPart::registerNatives();
  puStack_68 = PTR_kDescriptor_0037bda0;
  local_70 = (undefined **)PTR_s_invoke_cxx_0037bd98;
  local_60 = PTR_call_0037bda8;
  pcVar9 = (char *)operator_new(0x30);
  uVar4 = s_Lcom_margelo_nitro_rive_Func_voi_001d6721._25_8_;
  uVar3 = s_Lcom_margelo_nitro_rive_Func_voi_001d6721._17_8_;
  uVar2 = s_Lcom_margelo_nitro_rive_Func_voi_001d6721._9_8_;
  uVar18 = s_Lcom_margelo_nitro_rive_Func_voi_001d6721._1_8_;
  pcVar9[0x24] = '\0';
  pcVar9[0x20] = '_';
  pcVar9[0x21] = 'c';
  pcVar9[0x22] = 'x';
  pcVar9[0x23] = 'x';
  *(undefined8 *)(pcVar9 + 8) = uVar2;
  *(undefined8 *)pcVar9 = uVar18;
  *(undefined8 *)(pcVar9 + 0x18) = uVar4;
  *(undefined8 *)(pcVar9 + 0x10) = uVar3;
                    /* try { // try from 0025a19c to 0025a1a3 has its CatchHandler @ 0025a790 */
  facebook::jni::findClassLocal(pcVar9);
  operator_delete(pcVar9);
                    /* try { // try from 0025a1ac to 0025a1d3 has its CatchHandler @ 0025a7f4 */
  plVar10 = (long *)facebook::jni::Environment::current();
  iVar8 = (**(code **)(*plVar10 + 0x6b8))
                    (plVar10,CONCAT17(cStack_39,CONCAT61(uStack_3f,local_40)),&local_70,1);
  facebook::jni::throwCppExceptionIf(iVar8 != 0);
  lVar11 = CONCAT17(cStack_39,CONCAT61(uStack_3f,local_40));
  if (lVar11 != 0) {
                    /* try { // try from 0025a1dc to 0025a1ef has its CatchHandler @ 0025a7dc */
    plVar10 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,lVar11);
  }
  puStack_68 = PTR_kDescriptor_0037bdb8;
  local_70 = (undefined **)PTR_s_invoke_cxx_0037bdb0;
  local_60 = PTR_call_0037bdc0;
  pcVar9 = (char *)operator_new(0x30);
  uVar6 = s_Lcom_margelo_nitro_rive_Func_voi_001d7625._36_8_;
  uVar5 = s_Lcom_margelo_nitro_rive_Func_voi_001d7625._17_8_;
  uVar4 = s_Lcom_margelo_nitro_rive_Func_voi_001d7625._9_8_;
  uVar3 = s_Lcom_margelo_nitro_rive_Func_voi_001d7625._1_8_;
  uVar18 = CONCAT53(s_Lcom_margelo_nitro_rive_Func_voi_001d7625._28_5_,
                    s_Lcom_margelo_nitro_rive_Func_voi_001d7625._25_3_);
  uVar2 = CONCAT35(s_Lcom_margelo_nitro_rive_Func_voi_001d7625._33_3_,
                   s_Lcom_margelo_nitro_rive_Func_voi_001d7625._28_5_);
  pcVar9[0x2b] = '\0';
  *(undefined8 *)(pcVar9 + 8) = uVar4;
  *(undefined8 *)pcVar9 = uVar3;
  *(undefined8 *)(pcVar9 + 0x18) = uVar18;
  *(undefined8 *)(pcVar9 + 0x10) = uVar5;
  *(undefined8 *)(pcVar9 + 0x23) = uVar6;
  *(undefined8 *)(pcVar9 + 0x1b) = uVar2;
                    /* try { // try from 0025a230 to 0025a237 has its CatchHandler @ 0025a78c */
  facebook::jni::findClassLocal(pcVar9);
  operator_delete(pcVar9);
                    /* try { // try from 0025a240 to 0025a267 has its CatchHandler @ 0025a7f0 */
  plVar10 = (long *)facebook::jni::Environment::current();
  iVar8 = (**(code **)(*plVar10 + 0x6b8))
                    (plVar10,CONCAT17(cStack_39,CONCAT61(uStack_3f,local_40)),&local_70,1);
  facebook::jni::throwCppExceptionIf(iVar8 != 0);
  lVar11 = CONCAT17(cStack_39,CONCAT61(uStack_3f,local_40));
  if (lVar11 != 0) {
                    /* try { // try from 0025a270 to 0025a283 has its CatchHandler @ 0025a7d8 */
    plVar10 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,lVar11);
  }
  JHybridViewModelStringPropertySpec::CxxPart::registerNatives();
  puStack_68 = PTR_kDescriptor_0037bdd0;
  local_70 = (undefined **)PTR_s_invoke_cxx_0037bdc8;
  local_60 = PTR_call_0037bdd8;
  pcVar9 = (char *)operator_new(0x40);
  uVar6 = s_Lcom_margelo_nitro_rive_Func_voi_001d6f59._41_8_;
  uVar5 = s_Lcom_margelo_nitro_rive_Func_voi_001d6f59._33_8_;
  uVar4 = s_Lcom_margelo_nitro_rive_Func_voi_001d6f59._25_8_;
  uVar3 = s_Lcom_margelo_nitro_rive_Func_voi_001d6f59._17_8_;
  uVar2 = s_Lcom_margelo_nitro_rive_Func_voi_001d6f59._9_8_;
  uVar18 = s_Lcom_margelo_nitro_rive_Func_voi_001d6f59._1_8_;
  pcVar9[0x30] = '\0';
  *(undefined8 *)(pcVar9 + 0x28) = uVar6;
  *(undefined8 *)(pcVar9 + 0x20) = uVar5;
  *(undefined8 *)(pcVar9 + 8) = uVar2;
  *(undefined8 *)pcVar9 = uVar18;
  *(undefined8 *)(pcVar9 + 0x18) = uVar4;
  *(undefined8 *)(pcVar9 + 0x10) = uVar3;
                    /* try { // try from 0025a2c8 to 0025a2cf has its CatchHandler @ 0025a788 */
  facebook::jni::findClassLocal(pcVar9);
  operator_delete(pcVar9);
                    /* try { // try from 0025a2d8 to 0025a2ff has its CatchHandler @ 0025a7ec */
  plVar10 = (long *)facebook::jni::Environment::current();
  iVar8 = (**(code **)(*plVar10 + 0x6b8))
                    (plVar10,CONCAT17(cStack_39,CONCAT61(uStack_3f,local_40)),&local_70,1);
  facebook::jni::throwCppExceptionIf(iVar8 != 0);
  lVar11 = CONCAT17(cStack_39,CONCAT61(uStack_3f,local_40));
  if (lVar11 != 0) {
                    /* try { // try from 0025a308 to 0025a31b has its CatchHandler @ 0025a7d4 */
    plVar10 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,lVar11);
  }
  JHybridViewModelBooleanPropertySpec::CxxPart::registerNatives();
  puStack_68 = PTR_kDescriptor_0037bde8;
  local_70 = (undefined **)PTR_s_invoke_cxx_0037bde0;
  local_60 = PTR_call_0037bdf0;
  pcVar9 = (char *)operator_new(0x30);
  uVar6 = s_Lcom_margelo_nitro_rive_Func_voi_001d4e44._34_8_;
  uVar5 = s_Lcom_margelo_nitro_rive_Func_voi_001d4e44._17_8_;
  uVar4 = s_Lcom_margelo_nitro_rive_Func_voi_001d4e44._9_8_;
  uVar3 = s_Lcom_margelo_nitro_rive_Func_voi_001d4e44._1_8_;
  uVar18 = CONCAT71(s_Lcom_margelo_nitro_rive_Func_voi_001d4e44._26_7_,
                    s_Lcom_margelo_nitro_rive_Func_voi_001d4e44[0x19]);
  uVar2 = CONCAT17(s_Lcom_margelo_nitro_rive_Func_voi_001d4e44[0x21],
                   s_Lcom_margelo_nitro_rive_Func_voi_001d4e44._26_7_);
  pcVar9[0x29] = '\0';
  *(undefined8 *)(pcVar9 + 8) = uVar4;
  *(undefined8 *)pcVar9 = uVar3;
  *(undefined8 *)(pcVar9 + 0x18) = uVar18;
  *(undefined8 *)(pcVar9 + 0x10) = uVar5;
  *(undefined8 *)(pcVar9 + 0x21) = uVar6;
  *(undefined8 *)(pcVar9 + 0x19) = uVar2;
                    /* try { // try from 0025a360 to 0025a367 has its CatchHandler @ 0025a784 */
  facebook::jni::findClassLocal(pcVar9);
  operator_delete(pcVar9);
                    /* try { // try from 0025a370 to 0025a397 has its CatchHandler @ 0025a7e8 */
  plVar10 = (long *)facebook::jni::Environment::current();
  iVar8 = (**(code **)(*plVar10 + 0x6b8))
                    (plVar10,CONCAT17(cStack_39,CONCAT61(uStack_3f,local_40)),&local_70,1);
  facebook::jni::throwCppExceptionIf(iVar8 != 0);
  lVar11 = CONCAT17(cStack_39,CONCAT61(uStack_3f,local_40));
  if (lVar11 != 0) {
                    /* try { // try from 0025a3a0 to 0025a3b3 has its CatchHandler @ 0025a7d0 */
    plVar10 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,lVar11);
  }
  JHybridViewModelColorPropertySpec::CxxPart::registerNatives();
  JHybridViewModelEnumPropertySpec::CxxPart::registerNatives();
  JHybridViewModelTriggerPropertySpec::CxxPart::registerNatives();
  JHybridViewModelImagePropertySpec::CxxPart::registerNatives();
  JHybridViewModelListPropertySpec::CxxPart::registerNatives();
  JHybridViewModelArtboardPropertySpec::CxxPart::registerNatives();
  local_40 = (basic_string)0x1c;
  uStack_3f._0_1_ = s_RiveFontConfig_001d6255[0];
  uStack_3f._1_1_ = s_RiveFontConfig_001d6255[1];
  uStack_3f._2_1_ = s_RiveFontConfig_001d6255[2];
  uStack_3f._3_1_ = s_RiveFontConfig_001d6255[3];
  uStack_3f._4_1_ = s_RiveFontConfig_001d6255[4];
  uStack_3f._5_1_ = s_RiveFontConfig_001d6255[5];
  cStack_39 = (char)s_RiveFontConfig_001d6255._6_2_;
  cStack_38 = SUB21(s_RiveFontConfig_001d6255._6_2_,1);
  cStack_37 = (char)s_RiveFontConfig_001d6255._8_6_;
  uStack_36 = SUB62(s_RiveFontConfig_001d6255._8_6_,1);
  cStack_34 = SUB61(s_RiveFontConfig_001d6255._8_6_,3);
  uStack_33 = SUB62(s_RiveFontConfig_001d6255._8_6_,4);
  cStack_31 = 0;
  local_70 = &PTR_FUN_0037be88;
                    /* try { // try from 0025a404 to 0025a40f has its CatchHandler @ 0025a73c */
  local_50 = (long *)&local_70;
  margelo::nitro::HybridObjectRegistry::registerHybridObjectConstructor
            (&local_40,(function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar11 = 4;
LAB_0025a430:
    (**(code **)((long)*pppuVar12 + lVar11 * 8))();
  }
  else if (local_50 != (long *)0x0) {
    lVar11 = 5;
    pppuVar12 = (undefined ***)local_50;
    goto LAB_0025a430;
  }
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_2e,CONCAT11(uStack_2f,cStack_30)));
  }
  local_40 = (basic_string)0x1e;
  uStack_3f = (undefined6)s_RiveFileFactory_001d57d6._0_7_;
  cStack_39 = SUB71(s_RiveFileFactory_001d57d6._0_7_,6);
  cStack_38 = s_RiveFileFactory_001d57d6[7];
  cStack_37 = (char)s_RiveFileFactory_001d57d6._8_7_;
  uStack_36 = SUB72(s_RiveFileFactory_001d57d6._8_7_,1);
  cStack_34 = SUB71(s_RiveFileFactory_001d57d6._8_7_,3);
  uStack_33 = SUB72(s_RiveFileFactory_001d57d6._8_7_,4);
  cStack_31 = SUB71(s_RiveFileFactory_001d57d6._8_7_,6);
  cStack_30 = 0;
  local_70 = &PTR_FUN_0037bf18;
                    /* try { // try from 0025a484 to 0025a48f has its CatchHandler @ 0025a738 */
  local_50 = (long *)&local_70;
  margelo::nitro::HybridObjectRegistry::registerHybridObjectConstructor
            (&local_40,(function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar11 = 4;
LAB_0025a4b0:
    (**(code **)((long)*pppuVar13 + lVar11 * 8))();
  }
  else if (local_50 != (long *)0x0) {
    lVar11 = 5;
    pppuVar13 = (undefined ***)local_50;
    goto LAB_0025a4b0;
  }
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_2e,CONCAT11(uStack_2f,cStack_30)));
  }
  local_40 = (basic_string)0x10;
  cStack_37 = 0;
  local_70 = &PTR_FUN_0037bf98;
  uStack_3f = 0x694665766952;
  cStack_39 = 0x6c;
  cStack_38 = 0x65;
                    /* try { // try from 0025a500 to 0025a50b has its CatchHandler @ 0025a734 */
  local_50 = (long *)&local_70;
  margelo::nitro::HybridObjectRegistry::registerHybridObjectConstructor
            (&local_40,(function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar11 = 4;
LAB_0025a52c:
    (**(code **)((long)*pppuVar14 + lVar11 * 8))();
  }
  else if (local_50 != (long *)0x0) {
    lVar11 = 5;
    pppuVar14 = (undefined ***)local_50;
    goto LAB_0025a52c;
  }
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_2e,CONCAT11(uStack_2f,cStack_30)));
  }
  local_40 = (basic_string)0x10;
  cStack_37 = 0;
  local_70 = &PTR_FUN_0037c018;
  uStack_3f = 0x695665766952;
  cStack_39 = 0x65;
  cStack_38 = 0x77;
                    /* try { // try from 0025a57c to 0025a587 has its CatchHandler @ 0025a730 */
  local_50 = (long *)&local_70;
  margelo::nitro::HybridObjectRegistry::registerHybridObjectConstructor
            (&local_40,(function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar11 = 4;
LAB_0025a5a8:
    (**(code **)((long)*pppuVar15 + lVar11 * 8))();
  }
  else if (local_50 != (long *)0x0) {
    lVar11 = 5;
    pppuVar15 = (undefined ***)local_50;
    goto LAB_0025a5a8;
  }
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_2e,CONCAT11(uStack_2f,cStack_30)));
  }
  uStack_2f = 0;
  local_40 = (basic_string)0x20;
  cStack_37 = (char)s_RiveImageFactory_001d5651._8_8_;
  uStack_36 = SUB82(s_RiveImageFactory_001d5651._8_8_,1);
  cStack_34 = SUB81(s_RiveImageFactory_001d5651._8_8_,3);
  uStack_33 = SUB82(s_RiveImageFactory_001d5651._8_8_,4);
  cStack_31 = SUB81(s_RiveImageFactory_001d5651._8_8_,6);
  cStack_30 = SUB81(s_RiveImageFactory_001d5651._8_8_,7);
  uStack_3f = (undefined6)s_RiveImageFactory_001d5651._0_8_;
  cStack_39 = SUB81(s_RiveImageFactory_001d5651._0_8_,6);
  cStack_38 = SUB81(s_RiveImageFactory_001d5651._0_8_,7);
  local_70 = &PTR_FUN_0037c098;
                    /* try { // try from 0025a5f4 to 0025a5ff has its CatchHandler @ 0025a72c */
  local_50 = (long *)&local_70;
  margelo::nitro::HybridObjectRegistry::registerHybridObjectConstructor
            (&local_40,(function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar11 = 4;
LAB_0025a620:
    (**(code **)((long)*pppuVar16 + lVar11 * 8))();
  }
  else if (local_50 != (long *)0x0) {
    lVar11 = 5;
    pppuVar16 = (undefined ***)local_50;
    goto LAB_0025a620;
  }
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_2e,CONCAT11(uStack_2f,cStack_30)));
  }
  local_40 = (basic_string)0x16;
  cStack_37 = 0x69;
  uStack_36 = 0x656d;
  uStack_3f = (undefined6)s_RiveRuntime_001d4d68._0_8_;
  cStack_39 = SUB81(s_RiveRuntime_001d4d68._0_8_,6);
  cStack_38 = SUB81(s_RiveRuntime_001d4d68._0_8_,7);
  cStack_34 = 0;
  local_70 = &PTR_FUN_0037c118;
                    /* try { // try from 0025a678 to 0025a683 has its CatchHandler @ 0025a728 */
  local_50 = (long *)&local_70;
  margelo::nitro::HybridObjectRegistry::registerHybridObjectConstructor
            (&local_40,(function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar11 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0025a6b0;
    lVar11 = 5;
    pppuVar17 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar17 + lVar11 * 8))();
LAB_0025a6b0:
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_2e,CONCAT11(uStack_2f,cStack_30)));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025a824  FUN_0025a824 =====

void FUN_0025a824(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025a85c  FUN_0025a85c =====

void FUN_0025a85c(void *param_1)

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


// ===== 0025a894  FUN_0025a894 =====

void FUN_0025a894(void)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    puVar2 = (undefined8 *)operator_new(0x10);
    *puVar2 = &PTR_FUN_0037c118;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025a8e0  FUN_0025a8e0 =====

void FUN_0025a8e0(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037c118;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025a924  FUN_0025a924 =====

void FUN_0025a924(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025a95c  FUN_0025a95c =====

void FUN_0025a95c(void *param_1)

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


// ===== 0025a994  FUN_0025a994 =====

void FUN_0025a994(long *param_1)

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
  
  puVar2 = PTR_constructorFn_00394778;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_constructorFn_00394780 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_constructorFn_00394780), iVar3 != 0)) {
                    /* try { // try from 0025aa8c to 0025aa9b has its CatchHandler @ 0025aaf4 */
    FUN_0025abc4(&local_50);
    uVar8 = FUN_0025ac84(&local_50);
    *(undefined8 *)puVar2 = uVar8;
    __cxa_guard_release(PTR_constructorFn_00394780);
  }
  if (((*PTR_cls_00394790 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_cls_00394790), iVar3 != 0))
  {
                    /* try { // try from 0025aac0 to 0025aad3 has its CatchHandler @ 0025aae4 */
    facebook::jni::findClassStatic(PTR_kBaseName_00394798);
    __cxa_guard_release(PTR_cls_00394790);
  }
  uVar8 = *(undefined8 *)puVar2;
  p_Var7 = *(_jmethodID **)PTR_cls_00394788;
  p_Var4 = (_jclass *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::NewObject(p_Var4,p_Var7,uVar8);
  facebook::jni::throwCppExceptionIf(lVar5 == 0);
                    /* try { // try from 0025aa14 to 0025aa1f has its CatchHandler @ 0025ab08 */
  local_40 = lVar5;
  margelo::nitro::rive::JHybridRiveRuntimeSpec::JavaPart::getJHybridRiveRuntimeSpec
            ((JavaPart *)&local_40);
  lVar5 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 0025aa28 to 0025aa3b has its CatchHandler @ 0025ab30 */
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


// ===== 0025ab34  FUN_0025ab34 =====

void FUN_0025ab34(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) != "ZN7margelo5nitro4rive18registerAllNativesEvE3$_5") {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0025ab84  FUN_0025ab84 =====

pointer_____offset_0x10___ * FUN_0025ab84(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0037c178;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025abc4  FUN_0025abc4 =====

void FUN_0025abc4(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00394790 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00394790), iVar2 != 0))
  {
                    /* try { // try from 0025ac34 to 0025ac47 has its CatchHandler @ 0025ac58 */
    facebook::jni::findClassStatic(PTR_kBaseName_00394798);
    __cxa_guard_release(PTR_cls_00394790);
  }
  *param_1 = *(undefined8 *)PTR_cls_00394788;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025ac84  FUN_0025ac84 =====

long FUN_0025ac84(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"<init>",PTR_kConstructorDescriptor_003947a0);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025ad00  _JNIEnv::NewObject =====

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


// ===== 0025ad9c  FUN_0025ad9c =====

void FUN_0025ad9c(void)

{
  __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 0025adac  FUN_0025adac =====

void FUN_0025adac(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0025add8 to 0025adeb has its CatchHandler @ 0025ae18 */
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


// ===== 0025ae1c  FUN_0025ae1c =====

void FUN_0025ae1c(void *param_1)

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


// ===== 0025ae54  FUN_0025ae54 =====

void FUN_0025ae54(void)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    puVar2 = (undefined8 *)operator_new(0x10);
    *puVar2 = &PTR_FUN_0037c098;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025aea0  FUN_0025aea0 =====

void FUN_0025aea0(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037c098;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025aee4  FUN_0025aee4 =====

void FUN_0025aee4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025af1c  FUN_0025af1c =====

void FUN_0025af1c(void *param_1)

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


// ===== 0025af54  FUN_0025af54 =====

void FUN_0025af54(long *param_1)

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
  
  puVar2 = PTR_constructorFn_00394748;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_constructorFn_00394750 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_constructorFn_00394750), iVar3 != 0)) {
                    /* try { // try from 0025b04c to 0025b05b has its CatchHandler @ 0025b0b4 */
    FUN_0025b184(&local_50);
    uVar8 = FUN_0025b244(&local_50);
    *(undefined8 *)puVar2 = uVar8;
    __cxa_guard_release(PTR_constructorFn_00394750);
  }
  if (((*PTR_cls_00394760 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_cls_00394760), iVar3 != 0))
  {
                    /* try { // try from 0025b080 to 0025b093 has its CatchHandler @ 0025b0a4 */
    facebook::jni::findClassStatic(PTR_kBaseName_00394768);
    __cxa_guard_release(PTR_cls_00394760);
  }
  uVar8 = *(undefined8 *)puVar2;
  p_Var7 = *(_jmethodID **)PTR_cls_00394758;
  p_Var4 = (_jclass *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::NewObject(p_Var4,p_Var7,uVar8);
  facebook::jni::throwCppExceptionIf(lVar5 == 0);
                    /* try { // try from 0025afd4 to 0025afdf has its CatchHandler @ 0025b0c8 */
  local_40 = lVar5;
  margelo::nitro::rive::JHybridRiveImageFactorySpec::JavaPart::getJHybridRiveImageFactorySpec
            ((JavaPart *)&local_40);
  lVar5 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 0025afe8 to 0025affb has its CatchHandler @ 0025b0f0 */
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


// ===== 0025b0f4  FUN_0025b0f4 =====

void FUN_0025b0f4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) != "ZN7margelo5nitro4rive18registerAllNativesEvE3$_4") {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0025b144  FUN_0025b144 =====

pointer_____offset_0x10___ * FUN_0025b144(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0037c0f8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025b184  FUN_0025b184 =====

void FUN_0025b184(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00394760 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00394760), iVar2 != 0))
  {
                    /* try { // try from 0025b1f4 to 0025b207 has its CatchHandler @ 0025b218 */
    facebook::jni::findClassStatic(PTR_kBaseName_00394768);
    __cxa_guard_release(PTR_cls_00394760);
  }
  *param_1 = *(undefined8 *)PTR_cls_00394758;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025b244  FUN_0025b244 =====

long FUN_0025b244(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"<init>",PTR_kConstructorDescriptor_00394770);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025b2c0  FUN_0025b2c0 =====

void FUN_0025b2c0(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0025b2ec to 0025b2ff has its CatchHandler @ 0025b32c */
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


// ===== 0025b330  FUN_0025b330 =====

void FUN_0025b330(void *param_1)

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


// ===== 0025b368  FUN_0025b368 =====

void FUN_0025b368(void)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    puVar2 = (undefined8 *)operator_new(0x10);
    *puVar2 = &PTR_FUN_0037c018;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025b3b4  FUN_0025b3b4 =====

void FUN_0025b3b4(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037c018;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025b3f8  FUN_0025b3f8 =====

void FUN_0025b3f8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025b430  FUN_0025b430 =====

void FUN_0025b430(void *param_1)

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


// ===== 0025b468  FUN_0025b468 =====

void FUN_0025b468(long *param_1)

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
  
  puVar2 = PTR_constructorFn_00394718;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_constructorFn_00394720 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_constructorFn_00394720), iVar3 != 0)) {
                    /* try { // try from 0025b560 to 0025b56f has its CatchHandler @ 0025b5c8 */
    FUN_0025b698(&local_50);
    uVar8 = FUN_0025b758(&local_50);
    *(undefined8 *)puVar2 = uVar8;
    __cxa_guard_release(PTR_constructorFn_00394720);
  }
  if (((*PTR_cls_00394730 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_cls_00394730), iVar3 != 0))
  {
                    /* try { // try from 0025b594 to 0025b5a7 has its CatchHandler @ 0025b5b8 */
    facebook::jni::findClassStatic(PTR_kBaseName_00394738);
    __cxa_guard_release(PTR_cls_00394730);
  }
  uVar8 = *(undefined8 *)puVar2;
  p_Var7 = *(_jmethodID **)PTR_cls_00394728;
  p_Var4 = (_jclass *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::NewObject(p_Var4,p_Var7,uVar8);
  facebook::jni::throwCppExceptionIf(lVar5 == 0);
                    /* try { // try from 0025b4e8 to 0025b4f3 has its CatchHandler @ 0025b5dc */
  local_40 = lVar5;
  margelo::nitro::rive::JHybridRiveViewSpec::JavaPart::getJHybridRiveViewSpec((JavaPart *)&local_40)
  ;
  lVar5 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 0025b4fc to 0025b50f has its CatchHandler @ 0025b604 */
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


// ===== 0025b608  FUN_0025b608 =====

void FUN_0025b608(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) != "ZN7margelo5nitro4rive18registerAllNativesEvE3$_3") {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0025b658  FUN_0025b658 =====

pointer_____offset_0x10___ * FUN_0025b658(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0037c078;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025b698  FUN_0025b698 =====

void FUN_0025b698(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00394730 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00394730), iVar2 != 0))
  {
                    /* try { // try from 0025b708 to 0025b71b has its CatchHandler @ 0025b72c */
    facebook::jni::findClassStatic(PTR_kBaseName_00394738);
    __cxa_guard_release(PTR_cls_00394730);
  }
  *param_1 = *(undefined8 *)PTR_cls_00394728;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025b758  FUN_0025b758 =====

long FUN_0025b758(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"<init>",PTR_kConstructorDescriptor_00394740);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025b7d4  FUN_0025b7d4 =====

void FUN_0025b7d4(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0025b800 to 0025b813 has its CatchHandler @ 0025b840 */
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


// ===== 0025b844  FUN_0025b844 =====

void FUN_0025b844(void *param_1)

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


// ===== 0025b87c  FUN_0025b87c =====

void FUN_0025b87c(void)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    puVar2 = (undefined8 *)operator_new(0x10);
    *puVar2 = &PTR_FUN_0037bf98;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025b8c8  FUN_0025b8c8 =====

void FUN_0025b8c8(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037bf98;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025b90c  FUN_0025b90c =====

void FUN_0025b90c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025b944  FUN_0025b944 =====

void FUN_0025b944(void *param_1)

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


// ===== 0025b97c  FUN_0025b97c =====

void FUN_0025b97c(long *param_1)

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
  
  puVar2 = PTR_constructorFn_003946e8;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_constructorFn_003946f0 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_constructorFn_003946f0), iVar3 != 0)) {
                    /* try { // try from 0025ba74 to 0025ba83 has its CatchHandler @ 0025badc */
    FUN_0025bbac(&local_50);
    uVar8 = FUN_0025bc6c(&local_50);
    *(undefined8 *)puVar2 = uVar8;
    __cxa_guard_release(PTR_constructorFn_003946f0);
  }
  if (((*PTR_cls_00394700 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_cls_00394700), iVar3 != 0))
  {
                    /* try { // try from 0025baa8 to 0025babb has its CatchHandler @ 0025bacc */
    facebook::jni::findClassStatic(PTR_kBaseName_00394708);
    __cxa_guard_release(PTR_cls_00394700);
  }
  uVar8 = *(undefined8 *)puVar2;
  p_Var7 = *(_jmethodID **)PTR_cls_003946f8;
  p_Var4 = (_jclass *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::NewObject(p_Var4,p_Var7,uVar8);
  facebook::jni::throwCppExceptionIf(lVar5 == 0);
                    /* try { // try from 0025b9fc to 0025ba07 has its CatchHandler @ 0025baf0 */
  local_40 = lVar5;
  margelo::nitro::rive::JHybridRiveFileSpec::JavaPart::getJHybridRiveFileSpec((JavaPart *)&local_40)
  ;
  lVar5 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 0025ba10 to 0025ba23 has its CatchHandler @ 0025bb18 */
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


// ===== 0025bb1c  FUN_0025bb1c =====

void FUN_0025bb1c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) != "ZN7margelo5nitro4rive18registerAllNativesEvE3$_2") {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0025bb6c  FUN_0025bb6c =====

pointer_____offset_0x10___ * FUN_0025bb6c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0037bff8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025bbac  FUN_0025bbac =====

void FUN_0025bbac(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00394700 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00394700), iVar2 != 0))
  {
                    /* try { // try from 0025bc1c to 0025bc2f has its CatchHandler @ 0025bc40 */
    facebook::jni::findClassStatic(PTR_kBaseName_00394708);
    __cxa_guard_release(PTR_cls_00394700);
  }
  *param_1 = *(undefined8 *)PTR_cls_003946f8;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025bc6c  FUN_0025bc6c =====

long FUN_0025bc6c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"<init>",PTR_kConstructorDescriptor_00394710);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025bce8  FUN_0025bce8 =====

void FUN_0025bce8(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0025bd14 to 0025bd27 has its CatchHandler @ 0025bd54 */
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


// ===== 0025bd58  FUN_0025bd58 =====

void FUN_0025bd58(void *param_1)

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


// ===== 0025bd90  FUN_0025bd90 =====

void FUN_0025bd90(void)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    puVar2 = (undefined8 *)operator_new(0x10);
    *puVar2 = &PTR_FUN_0037bf18;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025bddc  FUN_0025bddc =====

void FUN_0025bddc(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037bf18;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025be20  FUN_0025be20 =====

void FUN_0025be20(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025be58  FUN_0025be58 =====

void FUN_0025be58(void *param_1)

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


// ===== 0025be90  FUN_0025be90 =====

void FUN_0025be90(long *param_1)

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
  
  puVar2 = PTR_constructorFn_003946b8;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_constructorFn_003946c0 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_constructorFn_003946c0), iVar3 != 0)) {
                    /* try { // try from 0025bf88 to 0025bf97 has its CatchHandler @ 0025bff0 */
    FUN_0025c0c0(&local_50);
    uVar8 = FUN_0025c180(&local_50);
    *(undefined8 *)puVar2 = uVar8;
    __cxa_guard_release(PTR_constructorFn_003946c0);
  }
  if (((*PTR_cls_003946d0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_cls_003946d0), iVar3 != 0))
  {
                    /* try { // try from 0025bfbc to 0025bfcf has its CatchHandler @ 0025bfe0 */
    facebook::jni::findClassStatic(PTR_kBaseName_003946d8);
    __cxa_guard_release(PTR_cls_003946d0);
  }
  uVar8 = *(undefined8 *)puVar2;
  p_Var7 = *(_jmethodID **)PTR_cls_003946c8;
  p_Var4 = (_jclass *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::NewObject(p_Var4,p_Var7,uVar8);
  facebook::jni::throwCppExceptionIf(lVar5 == 0);
                    /* try { // try from 0025bf10 to 0025bf1b has its CatchHandler @ 0025c004 */
  local_40 = lVar5;
  margelo::nitro::rive::JHybridRiveFileFactorySpec::JavaPart::getJHybridRiveFileFactorySpec
            ((JavaPart *)&local_40);
  lVar5 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 0025bf24 to 0025bf37 has its CatchHandler @ 0025c02c */
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


// ===== 0025c030  FUN_0025c030 =====

void FUN_0025c030(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) != "ZN7margelo5nitro4rive18registerAllNativesEvE3$_1") {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0025c080  FUN_0025c080 =====

pointer_____offset_0x10___ * FUN_0025c080(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0037bf78;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025c0c0  FUN_0025c0c0 =====

void FUN_0025c0c0(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_003946d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_003946d0), iVar2 != 0))
  {
                    /* try { // try from 0025c130 to 0025c143 has its CatchHandler @ 0025c154 */
    facebook::jni::findClassStatic(PTR_kBaseName_003946d8);
    __cxa_guard_release(PTR_cls_003946d0);
  }
  *param_1 = *(undefined8 *)PTR_cls_003946c8;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025c180  FUN_0025c180 =====

long FUN_0025c180(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"<init>",PTR_kConstructorDescriptor_003946e0);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025c1fc  FUN_0025c1fc =====

void FUN_0025c1fc(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0025c228 to 0025c23b has its CatchHandler @ 0025c268 */
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


// ===== 0025c26c  FUN_0025c26c =====

void FUN_0025c26c(void *param_1)

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


// ===== 0025c2a4  FUN_0025c2a4 =====

void FUN_0025c2a4(void)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    puVar2 = (undefined8 *)operator_new(0x10);
    *puVar2 = &PTR_FUN_0037be88;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025c2f0  FUN_0025c2f0 =====

void FUN_0025c2f0(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037be88;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025c334  FUN_0025c334 =====

void FUN_0025c334(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025c36c  FUN_0025c36c =====

void FUN_0025c36c(void *param_1)

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


// ===== 0025c3a4  FUN_0025c3a4 =====

void FUN_0025c3a4(long *param_1)

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
  
  puVar2 = PTR_constructorFn_00394688;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_constructorFn_00394690 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_constructorFn_00394690), iVar3 != 0)) {
                    /* try { // try from 0025c49c to 0025c4ab has its CatchHandler @ 0025c504 */
    FUN_0025c5d4(&local_50);
    uVar8 = FUN_0025c694(&local_50);
    *(undefined8 *)puVar2 = uVar8;
    __cxa_guard_release(PTR_constructorFn_00394690);
  }
  if (((*PTR_cls_003946a0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_cls_003946a0), iVar3 != 0))
  {
                    /* try { // try from 0025c4d0 to 0025c4e3 has its CatchHandler @ 0025c4f4 */
    facebook::jni::findClassStatic(PTR_kBaseName_003946a8);
    __cxa_guard_release(PTR_cls_003946a0);
  }
  uVar8 = *(undefined8 *)puVar2;
  p_Var7 = *(_jmethodID **)PTR_cls_00394698;
  p_Var4 = (_jclass *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::NewObject(p_Var4,p_Var7,uVar8);
  facebook::jni::throwCppExceptionIf(lVar5 == 0);
                    /* try { // try from 0025c424 to 0025c42f has its CatchHandler @ 0025c518 */
  local_40 = lVar5;
  margelo::nitro::rive::JHybridRiveFontConfigSpec::JavaPart::getJHybridRiveFontConfigSpec
            ((JavaPart *)&local_40);
  lVar5 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 0025c438 to 0025c44b has its CatchHandler @ 0025c540 */
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


// ===== 0025c544  FUN_0025c544 =====

void FUN_0025c544(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) != "ZN7margelo5nitro4rive18registerAllNativesEvE3$_0") {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0025c594  FUN_0025c594 =====

pointer_____offset_0x10___ * FUN_0025c594(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0037bef8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025c5d4  FUN_0025c5d4 =====

void FUN_0025c5d4(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_003946a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_003946a0), iVar2 != 0))
  {
                    /* try { // try from 0025c644 to 0025c657 has its CatchHandler @ 0025c668 */
    facebook::jni::findClassStatic(PTR_kBaseName_003946a8);
    __cxa_guard_release(PTR_cls_003946a0);
  }
  *param_1 = *(undefined8 *)PTR_cls_00394698;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025c694  FUN_0025c694 =====

long FUN_0025c694(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"<init>",PTR_kConstructorDescriptor_003946b0);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025c710  FUN_0025c710 =====

void FUN_0025c710(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0025c73c to 0025c74f has its CatchHandler @ 0025c77c */
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


// ===== 0025c780  facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

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
                    /* try { // try from 0025c7ac to 0025c7bf has its CatchHandler @ 0025c7ec */
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


// ===== 0025c7f0  facebook::jni::detail::MethodWrapper<void(margelo::nitro::rive::JFunc_void_bool_cxx::*)(unsigned_char),&margelo::nitro::rive::JFunc_void_bool_cxx::invoke_cxx,margelo::nitro::rive::JFunc_void_bool_cxx,void,unsigned_char>::call =====

/* facebook::jni::detail::MethodWrapper<void (margelo::nitro::rive::JFunc_void_bool_cxx::*)(unsigned
   char), &margelo::nitro::rive::JFunc_void_bool_cxx::invoke_cxx,
   margelo::nitro::rive::JFunc_void_bool_cxx, void, unsigned char>::call(_JNIEnv*, _jobject*,
   unsigned char) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::rive::JFunc_void_bool_cxx::*)(unsigned_char),&margelo::nitro::rive::JFunc_void_bool_cxx::invoke_cxx,margelo::nitro::rive::JFunc_void_bool_cxx,void,unsigned_char>
     ::call(_JNIEnv *param_1,_jobject *param_2,uchar param_3)

{
  long lVar1;
  JniEnvCacher aJStack_60 [28];
  uchar local_44 [4];
  _jobject *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_60,param_1);
                    /* try { // try from 0025c82c to 0025c837 has its CatchHandler @ 0025c864 */
  local_44[0] = param_3;
  local_40 = param_2;
  dispatch(&local_40,local_44);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025c8ac  facebook::jni::detail::MethodWrapper<void(margelo::nitro::rive::JFunc_void_bool_cxx::*)(unsigned_char),&margelo::nitro::rive::JFunc_void_bool_cxx::invoke_cxx,margelo::nitro::rive::JFunc_void_bool_cxx,void,unsigned_char>::dispatch =====

/* facebook::jni::detail::MethodWrapper<void (margelo::nitro::rive::JFunc_void_bool_cxx::*)(unsigned
   char), &margelo::nitro::rive::JFunc_void_bool_cxx::invoke_cxx,
   margelo::nitro::rive::JFunc_void_bool_cxx, void, unsigned
   char>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JFunc_void_bool_cxx,
   margelo::nitro::rive::JFunc_void_bool>::JavaPart, margelo::nitro::rive::JFunc_void_bool,
   void>::_javaobject*>, unsigned char&&) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::rive::JFunc_void_bool_cxx::*)(unsigned_char),&margelo::nitro::rive::JFunc_void_bool_cxx::invoke_cxx,margelo::nitro::rive::JFunc_void_bool_cxx,void,unsigned_char>
     ::dispatch(JObject *param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  exception_ptr aeStack_38 [8];
  base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> local_30;
  undefined7 uStack_2f;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_00394668 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_00394668);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 0025c95c to 0025c95f has its CatchHandler @ 0025c99c */
      uVar5 = FUN_0025ca7c(CONCAT71(uStack_2f,local_30));
      *(undefined8 *)PTR_hybridDataField_00394660 = uVar5;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                (&local_30);
      __cxa_guard_release(PTR_hybridDataField_00394668);
    }
  }
                    /* try { // try from 0025c8dc to 0025c90f has its CatchHandler @ 0025c9b8 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_00394660);
  plVar4 = *(long **)(lVar3 + 0x30);
  local_30 = (base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>)
             (*param_2 != '\0');
  if (plVar4 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0025c998 to 0025c99b has its CatchHandler @ 0025c9b8 */
      uVar5 = FUN_0025cd00();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0025c95c with catch @ 0025c99c
                        */
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                (&local_30);
      __cxa_guard_abort(PTR_hybridDataField_00394668);
      __cxa_begin_catch(uVar5);
      std::current_exception();
      std::exception_ptr::~exception_ptr(aeStack_38);
      if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0025c9e4 to 0025c9e7 has its CatchHandler @ 0025c9e8 */
        uVar5 = __cxa_rethrow();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0025c9e4 with catch @ 0025c9e8
                        */
                    /* try { // try from 0025c9ec to 0025c9ef has its CatchHandler @ 0025ca0c */
        __cxa_end_catch();
        if (*(long *)(lVar1 + 0x28) == local_28) {
          FUN_00255d34(uVar5);
        }
      }
    }
  }
  else {
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_30);
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025ca10  facebook::jni::JObject::getClass =====

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
                    /* try { // try from 0025ca38 to 0025ca4b has its CatchHandler @ 0025ca78 */
  plVar2 = (long *)facebook::jni::Environment::current();
  uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2,*in_x0);
  *in_x8 = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025ca7c  FUN_0025ca7c =====

void FUN_0025ca7c(undefined8 param_1)

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
    if (((*PTR_cls_00394678 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_cls_00394678), iVar2 != 0)) {
                    /* try { // try from 0025cb38 to 0025cb4b has its CatchHandler @ 0025cb70 */
      facebook::jni::findClassStatic(PTR_kBaseName_00394680);
      __cxa_guard_release(PTR_cls_00394678);
    }
    uVar6 = *(undefined8 *)PTR_cls_00394670;
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar4 = (**(code **)(*plVar5 + 0x2f0))(plVar5,uVar6,"mHybridData",PTR_kDescriptor_00394368);
    facebook::jni::throwCppExceptionIf(lVar4 == 0);
    if (lVar4 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_28) {
        uVar6 = facebook::jni::throwNPE();
                    /* catch() { ... } // from try @ 0025cb38 with catch @ 0025cb70 */
        lVar4 = __cxa_guard_abort(PTR_cls_00394678);
        if (*(long *)(lVar1 + 0x28) == local_28) {
          lVar4 = FUN_00255d34(uVar6);
        }
      }
      goto LAB_0025cb98;
    }
  }
  else {
    lVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_0025cb98:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


// ===== 0025cb9c  facebook::jni::getHybridDataFromField =====

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
                    /* try { // try from 0025cc44 to 0025cc4b has its CatchHandler @ 0025cca8 */
    uVar4 = facebook::jni::detail::HybridDestructor::getNativePointer();
    if (local_40 != 0) {
                    /* try { // try from 0025cc58 to 0025cc6b has its CatchHandler @ 0025ccb8 */
      plVar2 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar2 + 0xb8))(plVar2,local_40);
    }
  }
  else {
    uVar4 = *(undefined8 *)param_1;
                    /* try { // try from 0025cbc8 to 0025cbdf has its CatchHandler @ 0025ccfc */
    plVar2 = (long *)facebook::jni::Environment::current();
    auVar5 = (**(code **)(*plVar2 + 0x2f8))(plVar2,uVar4,lVar3);
    local_48 = auVar5._0_8_;
    if (local_48 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0025cca4 to 0025cca7 has its CatchHandler @ 0025ccd4 */
        uVar4 = throwNPE();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0025cc44 with catch @ 0025cca8
                        */
        base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
        ::~base_owned_ref((base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
                           *)&local_40);
        if (*(long *)(lVar1 + 0x28) == local_38) {
          FUN_00255d34(uVar4);
        }
      }
      goto LAB_0025ccf8;
    }
                    /* try { // try from 0025cbe8 to 0025cbf3 has its CatchHandler @ 0025ccd4 */
    detail::getHolder<facebook::jni::detail::HybridData>((detail *)&local_48,auVar5._8_8_);
                    /* try { // try from 0025cbf4 to 0025cbfb has its CatchHandler @ 0025ccbc */
    uVar4 = facebook::jni::detail::HybridDestructor::getNativePointer();
    if (local_40 != 0) {
                    /* try { // try from 0025cc08 to 0025cc1b has its CatchHandler @ 0025ccd0 */
      plVar2 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar2 + 0xb8))(plVar2,local_40);
    }
    lVar3 = local_48;
    if (local_48 != 0) {
                    /* try { // try from 0025cc24 to 0025cc37 has its CatchHandler @ 0025cccc */
      plVar2 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar2 + 0xb8))(plVar2,lVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
LAB_0025ccf8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025cd00  FUN_0025cd00 =====

void FUN_0025cd00(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    plVar2 = (long *)__cxa_allocate_exception(8);
    *plVar2 = (long)(PTR_vtable_00394288 + 0x10);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar2,PTR_typeinfo_00394280,PTR__exception_003947b8);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025cd58  FUN_0025cd58 =====

void FUN_0025cd58(exception *param_1)

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


// ===== 0025cda4  facebook::jni::detail::getHolder<facebook::jni::JObject> =====

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
  
  puVar2 = PTR_holderField_00394370;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_holderField_00394378 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_holderField_00394378), iVar3 != 0)) {
    JObject::getClass();
                    /* try { // try from 0025ce50 to 0025ce57 has its CatchHandler @ 0025ce78 */
    uVar5 = getDestructorField(abStack_40);
    *(undefined8 *)puVar2 = uVar5;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              (abStack_40);
    __cxa_guard_release(PTR_holderField_00394378);
  }
  uVar5 = *(undefined8 *)puVar2;
  uVar6 = *(undefined8 *)this;
                    /* try { // try from 0025cde8 to 0025cdff has its CatchHandler @ 0025ceac */
  plVar4 = (long *)facebook::jni::Environment::current();
  uVar5 = (**(code **)(*plVar4 + 0x2f8))(plVar4,uVar6,uVar5);
  *in_x8 = uVar5;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025ceb0  facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

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
                    /* try { // try from 0025cedc to 0025ceef has its CatchHandler @ 0025cf1c */
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


// ===== 0025cf20  facebook::jni::throwNPE =====

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


// ===== 0025cf60  facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

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
                    /* try { // try from 0025cf8c to 0025cf9f has its CatchHandler @ 0025cfcc */
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


// ===== 0025cfd0  facebook::jni::detail::getHolder<facebook::jni::detail::HybridData> =====

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
  
  puVar2 = PTR_holderField_00394388;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_holderField_00394390 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_holderField_00394390), iVar3 != 0)) {
    JObject::getClass();
                    /* try { // try from 0025d07c to 0025d083 has its CatchHandler @ 0025d0a4 */
    uVar5 = getDestructorField(abStack_40);
    *(undefined8 *)puVar2 = uVar5;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              (abStack_40);
    __cxa_guard_release(PTR_holderField_00394390);
  }
  uVar5 = *(undefined8 *)puVar2;
  uVar6 = *(undefined8 *)this;
                    /* try { // try from 0025d014 to 0025d02b has its CatchHandler @ 0025d0d8 */
  plVar4 = (long *)facebook::jni::Environment::current();
  uVar5 = (**(code **)(*plVar4 + 0x2f8))(plVar4,uVar6,uVar5);
  *in_x8 = uVar5;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025d0dc  facebook::jni::detail::getDestructorField =====

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
                    (plVar2,*(undefined8 *)param_1,"mDestructor",PTR_kDescriptor_00394380);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025d158  facebook::jni::detail::HybridClassBase::isHybridClassBase =====

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
  if (((*PTR_cls_00394340 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_cls_00394340), iVar3 != 0))
  {
                    /* try { // try from 0025d1f0 to 0025d203 has its CatchHandler @ 0025d214 */
    facebook::jni::findClassStatic(PTR_kBaseName_00394348);
    __cxa_guard_release(PTR_cls_00394340);
  }
  uVar6 = *param_1;
  uVar7 = *(undefined8 *)PTR_cls_00394338;
                    /* try { // try from 0025d19c to 0025d1b3 has its CatchHandler @ 0025d240 */
  plVar4 = (long *)facebook::jni::Environment::current();
  cVar2 = (**(code **)(*plVar4 + 0x58))(plVar4,uVar6,uVar7);
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2 != '\0');
}


// ===== 0025d244  facebook::jni::detail::MethodWrapper<void(margelo::nitro::rive::JFunc_void_std__string_cxx::*)(facebook::jni::alias_ref<facebook::jni::JString>),&margelo::nitro::rive::JFunc_void_std__string_cxx::invoke_cxx,margelo::nitro::rive::JFunc_void_std__string_cxx,void,facebook::jni::alias_ref<facebook::jni::JString>>::call =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::rive::JFunc_void_std__string_cxx::*)(facebook::jni::alias_ref<facebook::jni::JString>),
   &margelo::nitro::rive::JFunc_void_std__string_cxx::invoke_cxx,
   margelo::nitro::rive::JFunc_void_std__string_cxx, void,
   facebook::jni::alias_ref<facebook::jni::JString> >::call(_JNIEnv*, _jobject*, _jstring*) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::rive::JFunc_void_std__string_cxx::*)(facebook::jni::alias_ref<facebook::jni::JString>),&margelo::nitro::rive::JFunc_void_std__string_cxx::invoke_cxx,margelo::nitro::rive::JFunc_void_std__string_cxx,void,facebook::jni::alias_ref<facebook::jni::JString>>
     ::call(_JNIEnv *param_1,_jobject *param_2,_jstring *param_3)

{
  long lVar1;
  JniEnvCacher aJStack_60 [24];
  _jstring *local_48;
  _jobject *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_60,param_1);
                    /* try { // try from 0025d280 to 0025d28b has its CatchHandler @ 0025d2b8 */
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


// ===== 0025d300  facebook::jni::detail::MethodWrapper<void(margelo::nitro::rive::JFunc_void_std__string_cxx::*)(facebook::jni::alias_ref<facebook::jni::JString>),&margelo::nitro::rive::JFunc_void_std__string_cxx::invoke_cxx,margelo::nitro::rive::JFunc_void_std__string_cxx,void,facebook::jni::alias_ref<facebook::jni::JString>>::dispatch =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::rive::JFunc_void_std__string_cxx::*)(facebook::jni::alias_ref<facebook::jni::JString>),
   &margelo::nitro::rive::JFunc_void_std__string_cxx::invoke_cxx,
   margelo::nitro::rive::JFunc_void_std__string_cxx, void,
   facebook::jni::alias_ref<facebook::jni::JString>
   >::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JFunc_void_std__string_cxx,
   margelo::nitro::rive::JFunc_void_std__string>::JavaPart,
   margelo::nitro::rive::JFunc_void_std__string, void>::_javaobject*>,
   facebook::jni::alias_ref<facebook::jni::JString>&&) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::rive::JFunc_void_std__string_cxx::*)(facebook::jni::alias_ref<facebook::jni::JString>),&margelo::nitro::rive::JFunc_void_std__string_cxx::invoke_cxx,margelo::nitro::rive::JFunc_void_std__string_cxx,void,facebook::jni::alias_ref<facebook::jni::JString>>
     ::dispatch(JObject *param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  exception_ptr aeStack_60 [8];
  undefined8 local_58;
  base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> local_50;
  undefined7 uStack_4f;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_hybridDataField_00394638 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_hybridDataField_00394638), iVar2 != 0)) {
    JObject::getClass();
                    /* try { // try from 0025d3d0 to 0025d3d3 has its CatchHandler @ 0025d410 */
    uVar5 = FUN_0025d49c(CONCAT71(uStack_4f,local_50));
    *(undefined8 *)PTR_hybridDataField_00394630 = uVar5;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              (&local_50);
    __cxa_guard_release(PTR_hybridDataField_00394638);
  }
                    /* try { // try from 0025d334 to 0025d357 has its CatchHandler @ 0025d444 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_00394630);
  local_58 = *param_2;
  facebook::jni::JString::toStdString();
  plVar4 = *(long **)(lVar3 + 0x30);
  if (plVar4 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0025d40c to 0025d40f has its CatchHandler @ 0025d42c */
      uVar5 = FUN_0025cd00();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0025d3d0 with catch @ 0025d410
                        */
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                (&local_50);
      __cxa_guard_abort(PTR_hybridDataField_00394638);
      __cxa_begin_catch(uVar5);
      std::current_exception();
      std::exception_ptr::~exception_ptr(aeStack_60);
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0025d470 to 0025d473 has its CatchHandler @ 0025d474 */
        uVar5 = __cxa_rethrow();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0025d470 with catch @ 0025d474
                        */
                    /* try { // try from 0025d478 to 0025d47b has its CatchHandler @ 0025d498 */
        __cxa_end_catch();
        if (*(long *)(lVar1 + 0x28) == local_38) {
          FUN_00255d34(uVar5);
        }
      }
    }
  }
  else {
                    /* try { // try from 0025d368 to 0025d36f has its CatchHandler @ 0025d42c */
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_50);
    if (((byte)local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025d49c  FUN_0025d49c =====

void FUN_0025d49c(undefined8 param_1)

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
    if (((*PTR_cls_00394648 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_cls_00394648), iVar2 != 0)) {
                    /* try { // try from 0025d558 to 0025d56b has its CatchHandler @ 0025d590 */
      facebook::jni::findClassStatic(PTR_kBaseName_00394650);
      __cxa_guard_release(PTR_cls_00394648);
    }
    uVar6 = *(undefined8 *)PTR_cls_00394640;
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar4 = (**(code **)(*plVar5 + 0x2f0))(plVar5,uVar6,"mHybridData",PTR_kDescriptor_00394368);
    facebook::jni::throwCppExceptionIf(lVar4 == 0);
    if (lVar4 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_28) {
        uVar6 = facebook::jni::throwNPE();
                    /* catch() { ... } // from try @ 0025d558 with catch @ 0025d590 */
        lVar4 = __cxa_guard_abort(PTR_cls_00394648);
        if (*(long *)(lVar1 + 0x28) == local_28) {
          lVar4 = FUN_00255d34(uVar6);
        }
      }
      goto LAB_0025d5b8;
    }
  }
  else {
    lVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_0025d5b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


// ===== 0025d5bc  facebook::jni::detail::MethodWrapper<void(margelo::nitro::rive::JFunc_void_double_cxx::*)(double),&margelo::nitro::rive::JFunc_void_double_cxx::invoke_cxx,margelo::nitro::rive::JFunc_void_double_cxx,void,double>::call =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::rive::JFunc_void_double_cxx::*)(double),
   &margelo::nitro::rive::JFunc_void_double_cxx::invoke_cxx,
   margelo::nitro::rive::JFunc_void_double_cxx, void, double>::call(_JNIEnv*, _jobject*, double) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::rive::JFunc_void_double_cxx::*)(double),&margelo::nitro::rive::JFunc_void_double_cxx::invoke_cxx,margelo::nitro::rive::JFunc_void_double_cxx,void,double>
     ::call(_JNIEnv *param_1,_jobject *param_2,double param_3)

{
  long lVar1;
  JniEnvCacher aJStack_60 [24];
  double local_48;
  _jobject *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_60,param_1);
                    /* try { // try from 0025d5f8 to 0025d603 has its CatchHandler @ 0025d630 */
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


// ===== 0025d678  facebook::jni::detail::MethodWrapper<void(margelo::nitro::rive::JFunc_void_double_cxx::*)(double),&margelo::nitro::rive::JFunc_void_double_cxx::invoke_cxx,margelo::nitro::rive::JFunc_void_double_cxx,void,double>::dispatch =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::rive::JFunc_void_double_cxx::*)(double),
   &margelo::nitro::rive::JFunc_void_double_cxx::invoke_cxx,
   margelo::nitro::rive::JFunc_void_double_cxx, void,
   double>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JFunc_void_double_cxx,
   margelo::nitro::rive::JFunc_void_double>::JavaPart, margelo::nitro::rive::JFunc_void_double,
   void>::_javaobject*>, double&&) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::rive::JFunc_void_double_cxx::*)(double),&margelo::nitro::rive::JFunc_void_double_cxx::invoke_cxx,margelo::nitro::rive::JFunc_void_double_cxx,void,double>
     ::dispatch(JObject *param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  exception_ptr aeStack_38 [8];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_00394608 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_00394608);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 0025d720 to 0025d723 has its CatchHandler @ 0025d760 */
      uVar5 = FUN_0025d7d4(local_30);
      *(undefined8 *)PTR_hybridDataField_00394600 = uVar5;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_30);
      __cxa_guard_release(PTR_hybridDataField_00394608);
    }
  }
                    /* try { // try from 0025d6a8 to 0025d6d3 has its CatchHandler @ 0025d77c */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_00394600);
  local_30 = *param_2;
  plVar4 = *(long **)(lVar3 + 0x30);
  if (plVar4 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0025d75c to 0025d75f has its CatchHandler @ 0025d77c */
      uVar5 = FUN_0025cd00();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0025d720 with catch @ 0025d760
                        */
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_30);
      __cxa_guard_abort(PTR_hybridDataField_00394608);
      __cxa_begin_catch(uVar5);
      std::current_exception();
      std::exception_ptr::~exception_ptr(aeStack_38);
      if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0025d7a8 to 0025d7ab has its CatchHandler @ 0025d7ac */
        uVar5 = __cxa_rethrow();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0025d7a8 with catch @ 0025d7ac
                        */
                    /* try { // try from 0025d7b0 to 0025d7b3 has its CatchHandler @ 0025d7d0 */
        __cxa_end_catch();
        if (*(long *)(lVar1 + 0x28) == local_28) {
          FUN_00255d34(uVar5);
        }
      }
    }
  }
  else {
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_30);
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025d7d4  FUN_0025d7d4 =====

void FUN_0025d7d4(undefined8 param_1)

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
    if (((*PTR_cls_00394618 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_cls_00394618), iVar2 != 0)) {
                    /* try { // try from 0025d890 to 0025d8a3 has its CatchHandler @ 0025d8c8 */
      facebook::jni::findClassStatic(PTR_kBaseName_00394620);
      __cxa_guard_release(PTR_cls_00394618);
    }
    uVar6 = *(undefined8 *)PTR_cls_00394610;
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar4 = (**(code **)(*plVar5 + 0x2f0))(plVar5,uVar6,"mHybridData",PTR_kDescriptor_00394368);
    facebook::jni::throwCppExceptionIf(lVar4 == 0);
    if (lVar4 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_28) {
        uVar6 = facebook::jni::throwNPE();
                    /* catch() { ... } // from try @ 0025d890 with catch @ 0025d8c8 */
        lVar4 = __cxa_guard_abort(PTR_cls_00394618);
        if (*(long *)(lVar1 + 0x28) == local_28) {
          lVar4 = FUN_00255d34(uVar6);
        }
      }
      goto LAB_0025d8f0;
    }
  }
  else {
    lVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_0025d8f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


// ===== 0025d8f4  facebook::jni::detail::MethodWrapper<void(margelo::nitro::rive::JFunc_void_cxx::*)(),&margelo::nitro::rive::JFunc_void_cxx::invoke_cxx,margelo::nitro::rive::JFunc_void_cxx,void>::call =====

/* facebook::jni::detail::MethodWrapper<void (margelo::nitro::rive::JFunc_void_cxx::*)(),
   &margelo::nitro::rive::JFunc_void_cxx::invoke_cxx, margelo::nitro::rive::JFunc_void_cxx,
   void>::call(_JNIEnv*, _jobject*) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::rive::JFunc_void_cxx::*)(),&margelo::nitro::rive::JFunc_void_cxx::invoke_cxx,margelo::nitro::rive::JFunc_void_cxx,void>
     ::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  JniEnvCacher aJStack_48 [24];
  _jobject *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_48,param_1);
                    /* try { // try from 0025d924 to 0025d92b has its CatchHandler @ 0025d954 */
  local_30 = param_2;
  dispatch(&local_30);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025d99c  facebook::jni::detail::MethodWrapper<void(margelo::nitro::rive::JFunc_void_cxx::*)(),&margelo::nitro::rive::JFunc_void_cxx::invoke_cxx,margelo::nitro::rive::JFunc_void_cxx,void>::dispatch =====

/* facebook::jni::detail::MethodWrapper<void (margelo::nitro::rive::JFunc_void_cxx::*)(),
   &margelo::nitro::rive::JFunc_void_cxx::invoke_cxx, margelo::nitro::rive::JFunc_void_cxx,
   void>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JFunc_void_cxx,
   margelo::nitro::rive::JFunc_void>::JavaPart, margelo::nitro::rive::JFunc_void,
   void>::_javaobject*>) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::rive::JFunc_void_cxx::*)(),&margelo::nitro::rive::JFunc_void_cxx::invoke_cxx,margelo::nitro::rive::JFunc_void_cxx,void>
     ::dispatch(JObject *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  exception_ptr aeStack_38 [8];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((*PTR_hybridDataField_003945d8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_hybridDataField_003945d8), iVar2 != 0)) {
    JObject::getClass();
                    /* try { // try from 0025da34 to 0025da37 has its CatchHandler @ 0025da74 */
    uVar4 = FUN_0025dae8(local_30);
    *(undefined8 *)PTR_hybridDataField_003945d0 = uVar4;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_30);
    __cxa_guard_release(PTR_hybridDataField_003945d8);
  }
                    /* try { // try from 0025d9c8 to 0025d9e7 has its CatchHandler @ 0025da90 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_003945d0);
  if (*(long **)(lVar3 + 0x30) == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0025da70 to 0025da73 has its CatchHandler @ 0025da90 */
      uVar4 = FUN_0025cd00();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0025da34 with catch @ 0025da74
                        */
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_30);
      __cxa_guard_abort(PTR_hybridDataField_003945d8);
      __cxa_begin_catch(uVar4);
      std::current_exception();
      std::exception_ptr::~exception_ptr(aeStack_38);
      if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0025dabc to 0025dabf has its CatchHandler @ 0025dac0 */
        uVar4 = __cxa_rethrow();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0025dabc with catch @ 0025dac0
                        */
                    /* try { // try from 0025dac4 to 0025dac7 has its CatchHandler @ 0025dae4 */
        __cxa_end_catch();
        if (*(long *)(lVar1 + 0x28) == local_28) {
          FUN_00255d34(uVar4);
        }
      }
    }
  }
  else {
    (**(code **)(**(long **)(lVar3 + 0x30) + 0x30))();
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025dae8  FUN_0025dae8 =====

void FUN_0025dae8(undefined8 param_1)

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
    if (((*PTR_cls_003945e8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_cls_003945e8), iVar2 != 0)) {
                    /* try { // try from 0025dba4 to 0025dbb7 has its CatchHandler @ 0025dbdc */
      facebook::jni::findClassStatic(PTR_kBaseName_003945f0);
      __cxa_guard_release(PTR_cls_003945e8);
    }
    uVar6 = *(undefined8 *)PTR_cls_003945e0;
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar4 = (**(code **)(*plVar5 + 0x2f0))(plVar5,uVar6,"mHybridData",PTR_kDescriptor_00394368);
    facebook::jni::throwCppExceptionIf(lVar4 == 0);
    if (lVar4 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_28) {
        uVar6 = facebook::jni::throwNPE();
                    /* catch() { ... } // from try @ 0025dba4 with catch @ 0025dbdc */
        lVar4 = __cxa_guard_abort(PTR_cls_003945e8);
        if (*(long *)(lVar1 + 0x28) == local_28) {
          lVar4 = FUN_00255d34(uVar6);
        }
      }
      goto LAB_0025dc04;
    }
  }
  else {
    lVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_0025dc04:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


// ===== 0025dc08  facebook::react::concreteComponentDescriptorConstructor<margelo::nitro::rive::views::HybridRiveViewComponentDescriptor> =====

/* std::__ndk1::unique_ptr<facebook::react::ComponentDescriptor const,
   std::__ndk1::default_delete<facebook::react::ComponentDescriptor const> >
   facebook::react::concreteComponentDescriptorConstructor<margelo::nitro::rive::views::HybridRiveViewComponentDescriptor>(facebook::react::ComponentDescriptorParameters
   const&) */

void __thiscall
facebook::react::
concreteComponentDescriptorConstructor<margelo::nitro::rive::views::HybridRiveViewComponentDescriptor>
          (react *this,ComponentDescriptorParameters *param_1)

{
  long lVar1;
  HybridRiveViewComponentDescriptor *this_00;
  undefined8 *in_x8;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this_00 = (HybridRiveViewComponentDescriptor *)operator_new(0x88);
                    /* try { // try from 0025dc3c to 0025dc43 has its CatchHandler @ 0025dc6c */
  margelo::nitro::rive::views::HybridRiveViewComponentDescriptor::HybridRiveViewComponentDescriptor
            (this_00,(ComponentDescriptorParameters *)this);
  *in_x8 = this_00;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025dc94  FUN_0025dc94 =====

void FUN_0025dc94(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 0025dd20  FUN_0025dd20 =====

void FUN_0025dd20(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 0025ddac  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<void(*)(facebook::jni::alias_ref<facebook::jni::JClass>,facebook::jni::alias_ref<margelo::nitro::rive::JHybridRiveViewSpec::JavaPart>,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<margelo::nitro::JStateWrapper,facebook::jni::JObject,void>::_javaobject*>),&margelo::nitro::rive::views::JHybridRiveViewStateUpdater::updateViewProps,facebook::jni::JClass,void,facebook::jni::alias_ref<margelo::nitro::rive::JHybridRiveViewSpec::JavaPart>,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<margelo::nitro::JStateWrapper,facebook::jni::JObject,void>::_javaobject*>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<void
   (*)(facebook::jni::alias_ref<facebook::jni::JClass>,
   facebook::jni::alias_ref<margelo::nitro::rive::JHybridRiveViewSpec::JavaPart>,
   facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<margelo::nitro::JStateWrapper,
   facebook::jni::JObject, void>::_javaobject*>),
   &margelo::nitro::rive::views::JHybridRiveViewStateUpdater::updateViewProps,
   facebook::jni::JClass, void,
   facebook::jni::alias_ref<margelo::nitro::rive::JHybridRiveViewSpec::JavaPart>,
   facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<margelo::nitro::JStateWrapper,
   facebook::jni::JObject, void>::_javaobject*> >::call(_JNIEnv*, _jobject*,
   facebook::jni::detail::JTypeFor<margelo::nitro::rive::JHybridRiveViewSpec::JavaPart,
   margelo::nitro::JHybridObject::JavaPart, void>::_javaobject*,
   facebook::jni::detail::JTypeFor<margelo::nitro::JStateWrapper, facebook::jni::JObject,
   void>::_javaobject*) */

void facebook::jni::detail::
     FunctionWrapperWithJniEntryPoint<void(*)(facebook::jni::alias_ref<facebook::jni::JClass>,facebook::jni::alias_ref<margelo::nitro::rive::JHybridRiveViewSpec::JavaPart>,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<margelo::nitro::JStateWrapper,facebook::jni::JObject,void>::_javaobject*>),&margelo::nitro::rive::views::JHybridRiveViewStateUpdater::updateViewProps,facebook::jni::JClass,void,facebook::jni::alias_ref<margelo::nitro::rive::JHybridRiveViewSpec::JavaPart>,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<margelo::nitro::JStateWrapper,facebook::jni::JObject,void>::_javaobject*>>
     ::call(_JNIEnv *param_1,_jobject *param_2,_javaobject *param_3,_javaobject *param_4)

{
  long lVar1;
  undefined8 uVar2;
  JniEnvCacher aJStack_60 [24];
  _javaobject *local_48;
  _javaobject *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_60,param_1);
                    /* try { // try from 0025dde8 to 0025ddf3 has its CatchHandler @ 0025de20 */
  local_48 = param_4;
  local_40 = param_3;
  margelo::nitro::rive::views::JHybridRiveViewStateUpdater::updateViewProps
            (uVar2,&local_40,&local_48);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025de68  facebook::jni::detail::MethodWrapper<void(margelo::nitro::rive::JFunc_void_UnifiedRiveEvent_cxx::*)(facebook::jni::alias_ref<margelo::nitro::rive::JUnifiedRiveEvent>),&margelo::nitro::rive::JFunc_void_UnifiedRiveEvent_cxx::invoke_cxx,margelo::nitro::rive::JFunc_void_UnifiedRiveEvent_cxx,void,facebook::jni::alias_ref<margelo::nitro::rive::JUnifiedRiveEvent>>::call =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::rive::JFunc_void_UnifiedRiveEvent_cxx::*)(facebook::jni::alias_ref<margelo::nitro::rive::JUnifiedRiveEvent>),
   &margelo::nitro::rive::JFunc_void_UnifiedRiveEvent_cxx::invoke_cxx,
   margelo::nitro::rive::JFunc_void_UnifiedRiveEvent_cxx, void,
   facebook::jni::alias_ref<margelo::nitro::rive::JUnifiedRiveEvent> >::call(_JNIEnv*, _jobject*,
   facebook::jni::detail::JTypeFor<margelo::nitro::rive::JUnifiedRiveEvent, facebook::jni::JObject,
   void>::_javaobject*) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::rive::JFunc_void_UnifiedRiveEvent_cxx::*)(facebook::jni::alias_ref<margelo::nitro::rive::JUnifiedRiveEvent>),&margelo::nitro::rive::JFunc_void_UnifiedRiveEvent_cxx::invoke_cxx,margelo::nitro::rive::JFunc_void_UnifiedRiveEvent_cxx,void,facebook::jni::alias_ref<margelo::nitro::rive::JUnifiedRiveEvent>>
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
                    /* try { // try from 0025dea4 to 0025deaf has its CatchHandler @ 0025dedc */
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


// ===== 0025df24  facebook::jni::detail::MethodWrapper<void(margelo::nitro::rive::JFunc_void_UnifiedRiveEvent_cxx::*)(facebook::jni::alias_ref<margelo::nitro::rive::JUnifiedRiveEvent>),&margelo::nitro::rive::JFunc_void_UnifiedRiveEvent_cxx::invoke_cxx,margelo::nitro::rive::JFunc_void_UnifiedRiveEvent_cxx,void,facebook::jni::alias_ref<margelo::nitro::rive::JUnifiedRiveEvent>>::dispatch =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::rive::JFunc_void_UnifiedRiveEvent_cxx::*)(facebook::jni::alias_ref<margelo::nitro::rive::JUnifiedRiveEvent>),
   &margelo::nitro::rive::JFunc_void_UnifiedRiveEvent_cxx::invoke_cxx,
   margelo::nitro::rive::JFunc_void_UnifiedRiveEvent_cxx, void,
   facebook::jni::alias_ref<margelo::nitro::rive::JUnifiedRiveEvent>
   >::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JFunc_void_UnifiedRiveEvent_cxx,
   margelo::nitro::rive::JFunc_void_UnifiedRiveEvent>::JavaPart,
   margelo::nitro::rive::JFunc_void_UnifiedRiveEvent, void>::_javaobject*>,
   facebook::jni::alias_ref<margelo::nitro::rive::JUnifiedRiveEvent>&&) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::rive::JFunc_void_UnifiedRiveEvent_cxx::*)(facebook::jni::alias_ref<margelo::nitro::rive::JUnifiedRiveEvent>),&margelo::nitro::rive::JFunc_void_UnifiedRiveEvent_cxx::invoke_cxx,margelo::nitro::rive::JFunc_void_UnifiedRiveEvent_cxx,void,facebook::jni::alias_ref<margelo::nitro::rive::JUnifiedRiveEvent>>
     ::dispatch(JObject *param_1,undefined8 *param_2)

{
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  _jmethodID *p_Var10;
  undefined4 uVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  _jobject *p_Var16;
  _jclass *p_Var17;
  bad_alloc *this;
  _jmethodID *p_Var18;
  _jmethodID *p_Var19;
  _jmethodID *p_Var20;
  _jmethodID *p_Var21;
  ulong uVar22;
  char *pcVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  _jmethodID *p_Var26;
  long *plVar27;
  void *pvVar28;
  long *unaff_x22;
  _jmethodID *unaff_x23;
  long **unaff_x24;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar29;
  long lVar30;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar31;
  _jmethodID *p_Var32;
  undefined2 uVar33;
  ulong local_278;
  ulong local_270;
  ulong uStack_268;
  byte local_240;
  ulong uStack_238;
  char *local_230;
  undefined1 uStack_221;
  long *local_220;
  _jmethodID *p_Stack_218;
  long *local_210;
  ulong uStack_208;
  float local_200;
  ulong local_1f0;
  _jmethodID *p_Stack_1e8;
  long *local_1e0;
  long *local_1d8;
  long **pplStack_1d0;
  undefined1 local_1c8;
  ulong local_1c0 [2];
  char *local_1b0;
  undefined4 local_1a8;
  ulong local_1a0;
  ulong uStack_198;
  void *local_190 [2];
  undefined8 *local_180;
  char local_168;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_160;
  undefined4 local_15f;
  undefined3 uStack_15b;
  _jmethodID *local_158;
  long *local_150;
  char local_148;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_140;
  undefined4 local_13f;
  undefined3 uStack_13b;
  long **local_138;
  long *local_130;
  char local_128;
  long *local_120;
  _jmethodID *local_118;
  long *local_110;
  ulong local_108;
  float local_100;
  char local_f8;
  long local_f0;
  long local_e8;
  _jmethodID *local_e0;
  long local_d8;
  long *local_d0;
  long local_c8;
  _jmethodID *local_c0;
  long **local_b8;
  long *local_b0;
  uint local_a8;
  ulong local_a0;
  _jmethodID *p_Stack_98;
  long *local_90;
  undefined8 uStack_88;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  if (((*PTR_hybridDataField_00394590 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_hybridDataField_00394590), iVar12 != 0)) {
    JObject::getClass();
                    /* try { // try from 0025ed0c to 0025ed0f has its CatchHandler @ 0025f060 */
    uVar24 = FUN_0025f358(local_1c0[0]);
    *(undefined8 *)PTR_hybridDataField_00394588 = uVar24;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               local_1c0);
    __cxa_guard_release(PTR_hybridDataField_00394590);
  }
                    /* try { // try from 0025df68 to 0025df77 has its CatchHandler @ 0025f1dc */
  lVar13 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_00394588);
  uVar24 = *param_2;
  if (((*PTR_clazz_003943a0 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_clazz_003943a0), iVar12 != 0)) {
                    /* try { // try from 0025ed48 to 0025ed4b has its CatchHandler @ 0025f04c */
    FUN_0025f6c0();
    __cxa_guard_release(PTR_clazz_003943a0);
  }
  puVar8 = PTR_fieldName_003943a8;
  if (((*PTR_fieldName_003943b0 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_fieldName_003943b0), iVar12 != 0)) {
                    /* try { // try from 0025ed6c to 0025ed7f has its CatchHandler @ 0025f038 */
    uVar25 = FUN_0025f784(PTR_clazz_00394398,&DAT_001d6f54);
    *(undefined8 *)puVar8 = uVar25;
    __cxa_guard_release(PTR_fieldName_003943b0);
  }
  uVar25 = *(undefined8 *)puVar8;
                    /* try { // try from 0025dfa8 to 0025dfbf has its CatchHandler @ 0025f23c */
  plVar14 = (long *)facebook::jni::Environment::current();
  local_c8 = (**(code **)(*plVar14 + 0x2f8))(plVar14,uVar24,uVar25);
  puVar8 = PTR_fieldType_003943b8;
  if (((*PTR_fieldType_003943c0 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_fieldType_003943c0), iVar12 != 0)) {
                    /* try { // try from 0025eda4 to 0025eda7 has its CatchHandler @ 0025f024 */
    uVar25 = FUN_0025f808();
    *(undefined8 *)puVar8 = uVar25;
    __cxa_guard_release(PTR_fieldType_003943c0);
  }
  uVar25 = *(undefined8 *)puVar8;
                    /* try { // try from 0025dfe0 to 0025dff7 has its CatchHandler @ 0025f238 */
  plVar14 = (long *)facebook::jni::Environment::current();
  local_d0 = (long *)(**(code **)(*plVar14 + 0x2f8))(plVar14,uVar24,uVar25);
  puVar8 = PTR_fieldDelay_003943c8;
  if (((*PTR_fieldDelay_003943d0 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_fieldDelay_003943d0), iVar12 != 0)) {
                    /* try { // try from 0025edcc to 0025edcf has its CatchHandler @ 0025f010 */
    uVar25 = FUN_0025f888();
    *(undefined8 *)puVar8 = uVar25;
    __cxa_guard_release(PTR_fieldDelay_003943d0);
  }
  uVar25 = *(undefined8 *)puVar8;
                    /* try { // try from 0025e018 to 0025e02f has its CatchHandler @ 0025f234 */
  plVar14 = (long *)facebook::jni::Environment::current();
  local_d8 = (**(code **)(*plVar14 + 0x2f8))(plVar14,uVar24,uVar25);
  puVar8 = PTR_fieldProperties_003943d8;
  if (((*PTR_fieldProperties_003943e0 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_fieldProperties_003943e0), iVar12 != 0)) {
                    /* try { // try from 0025edf4 to 0025edf7 has its CatchHandler @ 0025effc */
    uVar25 = FUN_0025f908();
    *(undefined8 *)puVar8 = uVar25;
    __cxa_guard_release(PTR_fieldProperties_003943e0);
  }
  uVar25 = *(undefined8 *)puVar8;
                    /* try { // try from 0025e050 to 0025e067 has its CatchHandler @ 0025f230 */
  plVar14 = (long *)facebook::jni::Environment::current();
  local_e0 = (_jmethodID *)(**(code **)(*plVar14 + 0x2f8))(plVar14,uVar24,uVar25);
  puVar8 = PTR_fieldUrl_003943e8;
  if (((*PTR_fieldUrl_003943f0 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_fieldUrl_003943f0), iVar12 != 0)) {
                    /* try { // try from 0025ee1c to 0025ee2f has its CatchHandler @ 0025efe8 */
    uVar25 = FUN_0025f784(PTR_clazz_00394398,&DAT_001d4bc2);
    *(undefined8 *)puVar8 = uVar25;
    __cxa_guard_release(PTR_fieldUrl_003943f0);
  }
  uVar25 = *(undefined8 *)puVar8;
                    /* try { // try from 0025e088 to 0025e09f has its CatchHandler @ 0025f22c */
  plVar14 = (long *)facebook::jni::Environment::current();
  local_e8 = (**(code **)(*plVar14 + 0x2f8))(plVar14,uVar24,uVar25);
  puVar8 = PTR_fieldTarget_003943f8;
  if (((*PTR_fieldTarget_00394400 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_fieldTarget_00394400), iVar12 != 0)) {
                    /* try { // try from 0025ee54 to 0025ee67 has its CatchHandler @ 0025efd4 */
    uVar25 = FUN_0025f784(PTR_clazz_00394398,"target");
    *(undefined8 *)puVar8 = uVar25;
    __cxa_guard_release(PTR_fieldTarget_00394400);
  }
  uVar25 = *(undefined8 *)puVar8;
                    /* try { // try from 0025e0c0 to 0025e0d7 has its CatchHandler @ 0025f228 */
  plVar14 = (long *)facebook::jni::Environment::current();
  local_f0 = (**(code **)(*plVar14 + 0x2f8))(plVar14,uVar24,uVar25);
                    /* try { // try from 0025e0dc to 0025e0e7 has its CatchHandler @ 0025f1d4 */
  facebook::jni::JString::toStdString();
  if (((*PTR_clazz_00394440 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_clazz_00394440), iVar12 != 0)) {
                    /* try { // try from 0025ee8c to 0025ee8f has its CatchHandler @ 0025efbc */
    FUN_0026221c();
    __cxa_guard_release(PTR_clazz_00394440);
  }
  puVar8 = PTR_fieldOrdinal_00394448;
  if (((*PTR_fieldOrdinal_00394450 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_fieldOrdinal_00394450), iVar12 != 0)) {
                    /* try { // try from 0025eeb0 to 0025eec3 has its CatchHandler @ 0025efb0 */
    uVar24 = FUN_002622e0(PTR_clazz_00394438,"value");
    *(undefined8 *)puVar8 = uVar24;
    __cxa_guard_release(PTR_fieldOrdinal_00394450);
  }
  plVar14 = local_d0;
  uVar24 = *(undefined8 *)puVar8;
                    /* try { // try from 0025e118 to 0025e133 has its CatchHandler @ 0025f224 */
  plVar15 = (long *)facebook::jni::Environment::current();
  uVar11 = (**(code **)(*plVar15 + 800))(plVar15,plVar14,uVar24);
  bVar1 = local_d8 == 0;
  if (bVar1) {
    local_270 = 0;
    local_278 = 0;
  }
  else {
                    /* try { // try from 0025e13c to 0025e143 has its CatchHandler @ 0025f1bc */
    local_278 = FUN_0025f988(&local_d8);
    local_270 = local_278 & 0xffffffffffffff00;
  }
  p_Var10 = local_e0;
  uStack_268 = (ulong)!bVar1;
  if (local_e0 == (_jmethodID *)0x0) {
    local_120 = (long *)((ulong)local_120 & 0xffffffffffffff00);
    local_f8 = '\0';
    goto LAB_0025e81c;
  }
  uStack_208 = 0;
  local_210 = (long *)0x0;
  p_Stack_218 = (_jmethodID *)0x0;
  local_220 = (long *)0x0;
  local_200 = 1.0;
  if ((*PTR_sizeMethod_003944a8 & 1) == 0) goto LAB_0025eef0;
LAB_0025e198:
  p_Var26 = local_e0;
                    /* try { // try from 0025e19c to 0025e273 has its CatchHandler @ 0025f240 */
  p_Var16 = (_jobject *)facebook::jni::Environment::current();
  iVar12 = _JNIEnv::CallIntMethod(p_Var16,p_Var26,*(undefined8 *)PTR_sizeMethod_003944a0);
  facebook::jni::throwPendingJniExceptionAsCppException();
  p_Var26 = (_jmethodID *)(long)((float)(ulong)(long)iVar12 / local_200);
  if (p_Var26 + -1 == (_jmethodID *)0x0) {
    p_Var26 = (_jmethodID *)0x2;
  }
  else if (((ulong)p_Var26 & (ulong)(p_Var26 + -1)) != 0) {
    p_Var26 = (_jmethodID *)std::__ndk1::__next_prime((ulong)p_Var26);
  }
  p_Var19 = p_Stack_218;
  if (p_Stack_218 < p_Var26) {
LAB_0025e208:
    FUN_00260210(&local_220,p_Var26);
  }
  else if (p_Var26 < p_Stack_218) {
    p_Var18 = (_jmethodID *)(long)((float)uStack_208 / local_200);
    if (p_Stack_218 < (_jmethodID *)0x3) {
LAB_0025e270:
      p_Var18 = (_jmethodID *)std::__ndk1::__next_prime((ulong)p_Var18);
    }
    else {
      uVar24 = NEON_cnt(p_Stack_218,1);
      uVar33 = NEON_uaddlv(uVar24,1);
      if (1 < (uint)CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar33)) goto LAB_0025e270;
      if ((_jmethodID *)0x1 < p_Var18) {
        p_Var18 = (_jmethodID *)(1L << (-LZCOUNT(p_Var18 + -1) & 0x3fU));
      }
    }
    if (p_Var26 <= p_Var18) {
      p_Var26 = p_Var18;
    }
    if (p_Var26 < p_Var19) goto LAB_0025e208;
  }
  puVar8 = PTR_ctor_003944d0;
  if (((*PTR_ctor_003944d8 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_ctor_003944d8), iVar12 != 0)) {
                    /* try { // try from 0025ef44 to 0025ef53 has its CatchHandler @ 0025f07c */
    FUN_002613cc(&local_a0);
    uVar24 = FUN_00261bfc(&local_a0);
    *(undefined8 *)puVar8 = uVar24;
    __cxa_guard_release(PTR_ctor_003944d8);
  }
  if (((*PTR_cls_003944e8 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_cls_003944e8), iVar12 != 0)) {
                    /* try { // try from 0025ef78 to 0025ef8b has its CatchHandler @ 0025ef9c */
    facebook::jni::findClassStatic(PTR_kBaseName_003944f0);
    __cxa_guard_release(PTR_cls_003944e8);
  }
  unaff_x23 = local_e0;
  uVar24 = *(undefined8 *)puVar8;
  p_Var26 = *(_jmethodID **)PTR_cls_003944e0;
                    /* try { // try from 0025e2c0 to 0025e2e3 has its CatchHandler @ 0025f20c */
  p_Var17 = (_jclass *)facebook::jni::Environment::current();
  p_Var26 = (_jmethodID *)_JNIEnv::NewObject(p_Var17,p_Var26,uVar24,unaff_x23);
  facebook::jni::throwCppExceptionIf(p_Var26 == (_jmethodID *)0x0);
  local_c0 = p_Var26;
  if (p_Var26 == (_jmethodID *)0x0) {
    unaff_x22 = (long *)0x0;
  }
  else {
                    /* try { // try from 0025e2ec to 0025e307 has its CatchHandler @ 0025f1fc */
    plVar14 = (long *)facebook::jni::Environment::current();
    unaff_x22 = (long *)(**(code **)(*plVar14 + 0xa8))(plVar14,p_Var26);
    facebook::jni::throwPendingJniExceptionAsCppException();
    if (unaff_x22 == (long *)0x0) {
      this = (bad_alloc *)__cxa_allocate_exception(8);
      std::bad_alloc::bad_alloc(this);
      if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* try { // try from 0025e330 to 0025e347 has its CatchHandler @ 0025f1fc */
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
      }
      goto LAB_0025f350;
    }
  }
  local_a0 = 0;
  local_118 = (_jmethodID *)0xffffffffffffffff;
  local_110 = (long *)0x0;
  local_108 = 0;
                    /* try { // try from 0025e35c to 0025e363 has its CatchHandler @ 0025f198 */
  local_120 = unaff_x22;
  FUN_00260b9c(&local_120);
  local_a0 = 0;
  if (p_Var26 != (_jmethodID *)0x0) {
                    /* try { // try from 0025e370 to 0025e383 has its CatchHandler @ 0025f1d0 */
    plVar14 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar14 + 0xb8))(plVar14,p_Var26);
  }
  local_90 = (long *)0x0;
  uStack_88 = 0;
  unaff_x24 = &local_210;
  p_Stack_98 = _UNK_001d7e88;
  local_a0 = _DAT_001d7e80;
  while (uVar22 = local_108, local_118 != (_jmethodID *)0xffffffffffffffff) {
                    /* try { // try from 0025e3bc to 0025e3cb has its CatchHandler @ 0025f288 */
    facebook::jni::JString::toStdString();
                    /* try { // try from 0025e3cc to 0025e3db has its CatchHandler @ 0025f290 */
    margelo::nitro::rive::JEventPropertiesOutput::toCpp();
    unaff_x23 = (_jmethodID *)(local_1f0 >> 1 & 0x7f);
    unaff_x22 = (long *)((ulong)&local_1f0 | 1);
    if ((local_1f0 & 1) != 0) {
      unaff_x23 = p_Stack_1e8;
      unaff_x22 = local_1e0;
    }
    p_Var18 = (_jmethodID *)FUN_002603ac(unaff_x22,unaff_x23);
    p_Var19 = p_Stack_218;
    if (p_Stack_218 != (_jmethodID *)0x0) {
      uVar24 = NEON_cnt(p_Stack_218,1);
      uVar33 = NEON_uaddlv(uVar24,1);
      uVar22 = CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar33) & 0xffffffff;
      if (uVar22 < 2) {
        p_Var26 = (_jmethodID *)((ulong)(p_Stack_218 + -1) & (ulong)p_Var18);
      }
      else {
        p_Var26 = p_Var18;
        if (p_Stack_218 <= p_Var18) {
          uVar3 = 0;
          if (p_Stack_218 != (_jmethodID *)0x0) {
            uVar3 = (ulong)p_Var18 / (ulong)p_Stack_218;
          }
          p_Var26 = p_Var18 + -(uVar3 * (long)p_Stack_218);
        }
      }
      if (((long *)local_220[(long)p_Var26] != (long *)0x0) &&
         (plVar14 = *(long **)local_220[(long)p_Var26], plVar14 != (long *)0x0)) {
        p_Var32 = p_Stack_218 + -1;
        do {
          p_Var20 = (_jmethodID *)plVar14[1];
          if (p_Var20 == p_Var18) {
            bVar2 = *(byte *)(plVar14 + 2);
            p_Var21 = (_jmethodID *)(ulong)(bVar2 >> 1);
            p_Var20 = p_Var21;
            if ((bVar2 & 1) != 0) {
              p_Var20 = (_jmethodID *)plVar14[3];
            }
            if (p_Var20 == unaff_x23) {
              if ((bVar2 & 1) == 0) {
                if (bVar2 < 2) goto LAB_0025e71c;
                pcVar23 = (char *)((long)plVar14 + 0x11);
                plVar15 = unaff_x22;
                while (*pcVar23 == (char)*plVar15) {
                  p_Var21 = p_Var21 + -1;
                  pcVar23 = pcVar23 + 1;
                  plVar15 = (long *)((long)plVar15 + 1);
                  if (p_Var21 == (_jmethodID *)0x0) goto LAB_0025e71c;
                }
              }
              else {
                iVar12 = memcmp((void *)plVar14[4],unaff_x22,(size_t)plVar14[3]);
                if (iVar12 == 0) goto LAB_0025e71c;
              }
            }
          }
          else {
            if (uVar22 < 2) {
              p_Var20 = (_jmethodID *)((ulong)p_Var20 & (ulong)p_Var32);
            }
            else if (p_Var19 <= p_Var20) {
              uVar3 = 0;
              if (p_Var19 != (_jmethodID *)0x0) {
                uVar3 = (ulong)p_Var20 / (ulong)p_Var19;
              }
              p_Var20 = p_Var20 + -(uVar3 * (long)p_Var19);
            }
            if (p_Var20 != p_Var26) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
                    /* try { // try from 0025e504 to 0025e50b has its CatchHandler @ 0025f270 */
    unaff_x22 = (long *)operator_new(0x48);
    unaff_x22[4] = (long)local_1e0;
    local_1c8 = 0;
    *unaff_x22 = 0;
    unaff_x22[1] = (long)p_Var18;
    unaff_x22[3] = (long)p_Stack_1e8;
    unaff_x22[2] = local_1f0;
    local_1f0 = 0;
    p_Stack_1e8 = (_jmethodID *)0x0;
    local_1e0 = (long *)0x0;
    *(char *)(unaff_x22 + 5) = '\0';
    *(undefined4 *)(unaff_x22 + 8) = 0xffffffff;
    local_1d8 = unaff_x22;
    pplStack_1d0 = unaff_x24;
    if (local_a8 != 0xffffffff) {
                    /* try { // try from 0025e55c to 0025e567 has its CatchHandler @ 0025f268 */
      (*(code *)(&
                PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<bool,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,double>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<bool,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,double>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<bool,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,double>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<bool,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,double>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,bool,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,double>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,bool,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,double>&&>_0037bd50
                )[local_a8])(&uStack_221,unaff_x22 + 5,&local_c0);
      *(uint *)(unaff_x22 + 8) = local_a8;
    }
    local_1c8 = 1;
    if ((p_Var19 == (_jmethodID *)0x0) || (local_200 * (float)p_Var19 < (float)(uStack_208 + 1))) {
      if (p_Var19 < (_jmethodID *)0x3) {
        uVar22 = 1;
      }
      else {
        uVar22 = (ulong)(((ulong)p_Var19 & (ulong)(p_Var19 + -1)) != 0);
      }
      unaff_x23 = (_jmethodID *)(uVar22 | (long)p_Var19 << 1);
      p_Var26 = (_jmethodID *)(long)((float)(uStack_208 + 1) / local_200);
      if (unaff_x23 <= p_Var26) {
        unaff_x23 = p_Var26;
      }
      if (unaff_x23 + -1 == (_jmethodID *)0x0) {
        unaff_x23 = (_jmethodID *)0x2;
      }
      else if (((ulong)unaff_x23 & (ulong)(unaff_x23 + -1)) != 0) {
                    /* try { // try from 0025e5e8 to 0025e66b has its CatchHandler @ 0025f258 */
        unaff_x23 = (_jmethodID *)std::__ndk1::__next_prime((ulong)unaff_x23);
      }
      p_Var26 = p_Stack_218;
      if (p_Stack_218 < unaff_x23) {
LAB_0025e600:
        FUN_00260210(&local_220,unaff_x23);
      }
      else if (unaff_x23 < p_Stack_218) {
        p_Var19 = (_jmethodID *)(long)((float)uStack_208 / local_200);
        if (p_Stack_218 < (_jmethodID *)0x3) {
LAB_0025e668:
          p_Var19 = (_jmethodID *)std::__ndk1::__next_prime((ulong)p_Var19);
        }
        else {
          uVar24 = NEON_cnt(p_Stack_218,1);
          uVar33 = NEON_uaddlv(uVar24,1);
          if (1 < (uint)CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar33)) goto LAB_0025e668;
          if ((_jmethodID *)0x1 < p_Var19) {
            p_Var19 = (_jmethodID *)(1L << (-LZCOUNT(p_Var19 + -1) & 0x3fU));
          }
        }
        if (unaff_x23 <= p_Var19) {
          unaff_x23 = p_Var19;
        }
        if (unaff_x23 < p_Var26) goto LAB_0025e600;
      }
      p_Var19 = p_Stack_218;
      if (((ulong)p_Stack_218 & (ulong)(p_Stack_218 + -1)) == 0) {
        p_Var26 = (_jmethodID *)((ulong)(p_Stack_218 + -1) & (ulong)p_Var18);
      }
      else {
        p_Var26 = p_Var18;
        if (p_Stack_218 <= p_Var18) {
          uVar22 = 0;
          if (p_Stack_218 != (_jmethodID *)0x0) {
            uVar22 = (ulong)p_Var18 / (ulong)p_Stack_218;
          }
          p_Var26 = p_Var18 + -(uVar22 * (long)p_Stack_218);
        }
      }
    }
    plVar14 = (long *)local_220[(long)p_Var26];
    if (plVar14 == (long *)0x0) {
      *unaff_x22 = (long)local_210;
      local_220[(long)p_Var26] = (long)unaff_x24;
      local_210 = unaff_x22;
      if (*unaff_x22 != 0) {
        p_Var18 = *(_jmethodID **)(*unaff_x22 + 8);
        if (((ulong)p_Var19 & (ulong)(p_Var19 + -1)) == 0) {
          p_Var18 = (_jmethodID *)((ulong)p_Var18 & (ulong)(p_Var19 + -1));
        }
        else if (p_Var19 <= p_Var18) {
          uVar22 = 0;
          if (p_Var19 != (_jmethodID *)0x0) {
            uVar22 = (ulong)p_Var18 / (ulong)p_Var19;
          }
          p_Var18 = p_Var18 + -(uVar22 * (long)p_Var19);
        }
        plVar14 = local_220 + (long)p_Var18;
        goto LAB_0025e70c;
      }
    }
    else {
      *unaff_x22 = *plVar14;
LAB_0025e70c:
      *plVar14 = (long)unaff_x22;
    }
    uStack_208 = uStack_208 + 1;
LAB_0025e71c:
    if (local_a8 != 0xffffffff) {
                    /* try { // try from 0025e734 to 0025e73f has its CatchHandler @ 0025f26c */
      (*(code *)(&PTR_FUN_0037f8f8)[local_a8])(&local_1d8,&local_c0);
    }
    if ((local_1f0 & 1) != 0) {
      operator_delete(local_1e0);
    }
                    /* try { // try from 0025e3a8 to 0025e3af has its CatchHandler @ 0025f280 */
    FUN_00260b9c(&local_120);
  }
  if (local_108 != 0) {
                    /* try { // try from 0025e75c to 0025e76f has its CatchHandler @ 0025f1cc */
    plVar14 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar14 + 0xb8))(plVar14,uVar22);
  }
  plVar14 = local_110;
  local_108 = 0;
  if (local_110 != (long *)0x0) {
                    /* try { // try from 0025e77c to 0025e78f has its CatchHandler @ 0025f1c8 */
    plVar15 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar15 + 0xb8))(plVar15,plVar14);
  }
  plVar14 = local_120;
  local_110 = (long *)0x0;
  if (local_120 != (long *)0x0) {
                    /* try { // try from 0025e79c to 0025e7af has its CatchHandler @ 0025f1c4 */
    plVar15 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar15 + 0xb0))(plVar15,plVar14);
  }
  local_118 = p_Stack_218;
  local_120 = local_220;
  local_220 = (long *)0x0;
  p_Stack_218 = (_jmethodID *)0x0;
  local_100 = local_200;
  local_110 = local_210;
  local_108 = uStack_208;
  if (uStack_208 == 0) {
    local_f8 = '\x01';
  }
  else {
    p_Var26 = (_jmethodID *)local_210[1];
    if (((ulong)local_118 & (ulong)(local_118 + -1)) == 0) {
      p_Var26 = (_jmethodID *)((ulong)p_Var26 & (ulong)(local_118 + -1));
    }
    else if (local_118 <= p_Var26) {
      uVar22 = 0;
      if (local_118 != (_jmethodID *)0x0) {
        uVar22 = (ulong)p_Var26 / (ulong)local_118;
      }
      p_Var26 = p_Var26 + -(uVar22 * (long)local_118);
    }
    local_120[(long)p_Var26] = (long)&local_110;
    local_f8 = '\x01';
    local_210 = (long *)0x0;
    uStack_208 = 0;
  }
LAB_0025e81c:
  lVar9 = local_e8;
  if (local_e8 == 0) {
    bVar29 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    if (local_f0 == 0) goto LAB_0025e898;
LAB_0025e85c:
                    /* try { // try from 0025e85c to 0025e867 has its CatchHandler @ 0025f144 */
    lVar30 = local_f0;
    facebook::jni::JString::toStdString();
    unaff_x22 = local_b0;
    unaff_x24 = local_b8;
    bVar31 = local_c0._0_1_;
    local_b8 = (long **)0x0;
    local_b0 = (long *)0x0;
    local_1f0._0_7_ = (undefined7)((ulong)local_c0 >> 8);
    local_c0 = (_jmethodID *)0x0;
  }
  else {
                    /* try { // try from 0025e828 to 0025e833 has its CatchHandler @ 0025f16c */
    facebook::jni::JString::toStdString();
    plVar14 = local_90;
    unaff_x23 = p_Stack_98;
    bVar29 = local_a0._0_1_;
    p_Stack_98 = (_jmethodID *)0x0;
    local_90 = (long *)0x0;
    local_1d8._0_7_ = (undefined7)(local_a0 >> 8);
    local_a0 = 0;
    if (local_f0 != 0) goto LAB_0025e85c;
LAB_0025e898:
    bVar31 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    lVar30 = local_f0;
  }
  if ((local_240 & 1) == 0) {
    local_1c0[0] = (ulong)local_240;
    local_1b0 = local_230;
  }
  else {
                    /* try { // try from 0025e8c0 to 0025e8c7 has its CatchHandler @ 0025f0f4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               local_1c0,local_230,uStack_238);
  }
  local_190[0] = (void *)((ulong)local_190[0] & 0xffffffffffffff00);
  local_168 = 0;
  local_1a0 = local_278 & 0xff | local_270;
  uStack_198 = uStack_268;
  bVar1 = local_f8 != '\0';
  local_1a8 = uVar11;
  if (bVar1) {
                    /* try { // try from 0025e8f8 to 0025e903 has its CatchHandler @ 0025f0fc */
    FUN_0025fce4(local_190,&local_120);
  }
  local_160 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  local_148 = '\0';
  local_168 = bVar1;
  if (lVar9 != 0) {
    if (((byte)bVar29 & 1) == 0) {
      uStack_15b = (undefined3)((ulong)local_1d8 >> 0x20);
      local_160 = bVar29;
      local_15f = local_1d8._0_4_;
      local_158 = unaff_x23;
      local_150 = plVar14;
    }
    else {
                    /* try { // try from 0025e938 to 0025e947 has its CatchHandler @ 0025f0cc */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external(&local_160,(char *)plVar14,(ulong)unaff_x23);
    }
    local_148 = '\x01';
  }
  local_140 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  local_128 = '\0';
  if (lVar30 != 0) {
    if (((byte)bVar31 & 1) == 0) {
      uStack_13b = (undefined3)(local_1f0 >> 0x20);
      local_140 = bVar31;
      local_13f = (undefined4)local_1f0;
      local_138 = unaff_x24;
      local_130 = unaff_x22;
    }
    else {
                    /* try { // try from 0025e980 to 0025e98f has its CatchHandler @ 0025f0a4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external(&local_140,(char *)unaff_x22,(ulong)unaff_x24);
    }
    local_128 = '\x01';
    if (((byte)bVar31 & 1) != 0) {
      operator_delete(unaff_x22);
    }
    if (((ulong)local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
  }
  if (lVar9 != 0) {
    if (((byte)bVar29 & 1) != 0) {
      operator_delete(plVar14);
    }
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
  }
  if (p_Var10 == (_jmethodID *)0x0) {
    plVar14 = local_120;
    plVar15 = local_110;
    if (local_f8 != '\0') {
      while (plVar15 != (long *)0x0) {
        plVar27 = (long *)*plVar15;
        local_120 = plVar14;
        if (*(uint *)(plVar15 + 8) != 0xffffffff) {
                    /* try { // try from 0025eaf4 to 0025eaff has its CatchHandler @ 0025f248 */
          (*(code *)(&PTR_FUN_0037f8f8)[*(uint *)(plVar15 + 8)])(&uStack_221,plVar15 + 5);
        }
        *(undefined4 *)(plVar15 + 8) = 0xffffffff;
        if ((*(byte *)(plVar15 + 2) & 1) != 0) {
          operator_delete((void *)plVar15[4]);
        }
        operator_delete(plVar15);
        plVar14 = local_120;
        plVar15 = plVar27;
      }
      local_120 = (long *)0x0;
      goto joined_r0x0025eb20;
    }
  }
  else {
    plVar15 = local_120;
    plVar27 = local_110;
    plVar14 = local_220;
    plVar5 = local_210;
    if (local_f8 != '\0') {
      while (plVar27 != (long *)0x0) {
        plVar14 = (long *)*plVar27;
        local_120 = plVar15;
        if (*(uint *)(plVar27 + 8) != 0xffffffff) {
                    /* try { // try from 0025ea20 to 0025ea2b has its CatchHandler @ 0025f24c */
          (*(code *)(&PTR_FUN_0037f8f8)[*(uint *)(plVar27 + 8)])(&uStack_221,plVar27 + 5);
        }
        *(undefined4 *)(plVar27 + 8) = 0xffffffff;
        if ((*(byte *)(plVar27 + 2) & 1) != 0) {
          operator_delete((void *)plVar27[4]);
        }
        operator_delete(plVar27);
        plVar15 = local_120;
        plVar27 = plVar14;
      }
      local_120 = (long *)0x0;
      plVar14 = local_220;
      plVar5 = local_210;
      if (plVar15 != (long *)0x0) {
        operator_delete(plVar15);
        plVar14 = local_220;
        plVar5 = local_210;
      }
    }
    while (plVar5 != (long *)0x0) {
      plVar15 = (long *)*plVar5;
      local_220 = plVar14;
      if (*(uint *)(plVar5 + 8) != 0xffffffff) {
                    /* try { // try from 0025ea88 to 0025ea93 has its CatchHandler @ 0025f254 */
        (*(code *)(&PTR_FUN_0037f8f8)[*(uint *)(plVar5 + 8)])(&uStack_221,plVar5 + 5);
      }
      *(undefined4 *)(plVar5 + 8) = 0xffffffff;
      if ((*(byte *)(plVar5 + 2) & 1) != 0) {
        operator_delete((void *)plVar5[4]);
      }
      operator_delete(plVar5);
      plVar14 = local_220;
      plVar5 = plVar15;
    }
    local_220 = (long *)0x0;
joined_r0x0025eb20:
    if (plVar14 != (long *)0x0) {
      operator_delete(plVar14);
    }
  }
  if ((local_240 & 1) != 0) {
    operator_delete(local_230);
  }
  lVar9 = local_f0;
  if (local_f0 != 0) {
                    /* try { // try from 0025eb40 to 0025eb53 has its CatchHandler @ 0025f1f8 */
    plVar14 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar14 + 0xb8))(plVar14,lVar9);
  }
  lVar9 = local_e8;
  if (local_e8 != 0) {
                    /* try { // try from 0025eb5c to 0025eb6f has its CatchHandler @ 0025f1f4 */
    plVar14 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar14 + 0xb8))(plVar14,lVar9);
  }
  p_Var26 = local_e0;
  if (local_e0 != (_jmethodID *)0x0) {
                    /* try { // try from 0025eb78 to 0025eb8b has its CatchHandler @ 0025f1f0 */
    plVar14 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar14 + 0xb8))(plVar14,p_Var26);
  }
  lVar9 = local_d8;
  if (local_d8 != 0) {
                    /* try { // try from 0025eb94 to 0025eba7 has its CatchHandler @ 0025f1ec */
    plVar14 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar14 + 0xb8))(plVar14,lVar9);
  }
  plVar14 = local_d0;
  if (local_d0 != (long *)0x0) {
                    /* try { // try from 0025ebb0 to 0025ebc3 has its CatchHandler @ 0025f1e8 */
    plVar15 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar15 + 0xb8))(plVar15,plVar14);
  }
  lVar9 = local_c8;
  if (local_c8 != 0) {
                    /* try { // try from 0025ebcc to 0025ebdf has its CatchHandler @ 0025f1e4 */
    plVar14 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar14 + 0xb8))(plVar14,lVar9);
  }
  plVar14 = *(long **)(lVar13 + 0x30);
  if (plVar14 == (long *)0x0) {
    if (*(long *)(lVar4 + 0x28) != local_78) goto LAB_0025f350;
                    /* try { // try from 0025eeec to 0025eeef has its CatchHandler @ 0025f214 */
    FUN_0025cd00();
LAB_0025eef0:
    iVar12 = __cxa_guard_acquire(PTR_sizeMethod_003944a8);
    if (iVar12 != 0) {
                    /* try { // try from 0025ef00 to 0025ef17 has its CatchHandler @ 0025f090 */
      FUN_00261e5c(&local_120);
      uVar24 = JClass::getMethod<int()>((JClass *)&local_120,"size");
      *(undefined8 *)PTR_sizeMethod_003944a0 = uVar24;
      __cxa_guard_release(PTR_sizeMethod_003944a8);
    }
    goto LAB_0025e198;
  }
                    /* try { // try from 0025ebf4 to 0025ebfb has its CatchHandler @ 0025f214 */
  (**(code **)(*plVar14 + 0x30))(plVar14,local_1c0);
  if ((local_128 != '\0') && (((byte)local_140 & 1) != 0)) {
    operator_delete(local_130);
  }
  if ((local_148 != '\0') && (((byte)local_160 & 1) != 0)) {
    operator_delete(local_150);
  }
  pvVar6 = local_190[0];
  puVar7 = local_180;
  if (local_168 != '\0') {
    while (puVar7 != (undefined8 *)0x0) {
      pvVar28 = (void *)*puVar7;
      local_190[0] = pvVar6;
      if (*(uint *)(puVar7 + 8) != 0xffffffff) {
                    /* try { // try from 0025ec68 to 0025ec73 has its CatchHandler @ 0025f250 */
        (*(code *)(&PTR_FUN_0037f8f8)[*(uint *)(puVar7 + 8)])(&local_120,puVar7 + 5);
      }
      *(undefined4 *)(puVar7 + 8) = 0xffffffff;
      if ((*(byte *)(puVar7 + 2) & 1) != 0) {
        operator_delete((void *)puVar7[4]);
      }
      operator_delete(puVar7);
      pvVar6 = local_190[0];
      puVar7 = (undefined8 *)pvVar28;
    }
    local_190[0] = (void *)0x0;
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
    }
  }
  if (((byte)local_1c0[0]._0_1_ & 1) != 0) {
    operator_delete(local_1b0);
  }
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
LAB_0025f350:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025f358  FUN_0025f358 =====

void FUN_0025f358(undefined8 param_1)

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
    if (((*PTR_cls_003945a0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_cls_003945a0), iVar2 != 0)) {
                    /* try { // try from 0025f414 to 0025f427 has its CatchHandler @ 0025f44c */
      facebook::jni::findClassStatic(PTR_kBaseName_003945a8);
      __cxa_guard_release(PTR_cls_003945a0);
    }
    uVar6 = *(undefined8 *)PTR_cls_00394598;
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar4 = (**(code **)(*plVar5 + 0x2f0))(plVar5,uVar6,"mHybridData",PTR_kDescriptor_00394368);
    facebook::jni::throwCppExceptionIf(lVar4 == 0);
    if (lVar4 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_28) {
        uVar6 = facebook::jni::throwNPE();
                    /* catch() { ... } // from try @ 0025f414 with catch @ 0025f44c */
        lVar4 = __cxa_guard_abort(PTR_cls_003945a0);
        if (*(long *)(lVar1 + 0x28) == local_28) {
          lVar4 = FUN_00255d34(uVar6);
        }
      }
      goto LAB_0025f474;
    }
  }
  else {
    lVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_0025f474:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


// ===== 0025f478  FUN_0025f478 =====

void FUN_0025f478(byte *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((param_1[0x98] != 0) && ((param_1[0x80] & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x90));
  }
  if ((param_1[0x78] != 0) && ((param_1[0x60] & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x70));
  }
  if (param_1[0x58] != 0) {
    FUN_0025f528(param_1 + 0x30);
  }
  if ((*param_1 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(*(void **)(param_1 + 0x10));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025f528  FUN_0025f528 =====

void FUN_0025f528(undefined8 *param_1)

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
    if (*(uint *)(puVar2 + 8) != 0xffffffff) {
                    /* try { // try from 0025f58c to 0025f597 has its CatchHandler @ 0025f5ec */
      (*(code *)(&PTR_FUN_0037f8f8)[*(uint *)(puVar2 + 8)])(&uStack_49,puVar2 + 5);
    }
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
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


// ===== 0025f5f0  FUN_0025f5f0 =====

void FUN_0025f5f0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025f628  FUN_0025f628 =====

void FUN_0025f628(undefined8 param_1,byte *param_2)

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


// ===== 0025f688  FUN_0025f688 =====

void FUN_0025f688(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025f6c0  FUN_0025f6c0 =====

void FUN_0025f6c0(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00394410 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00394410), iVar2 != 0))
  {
                    /* try { // try from 0025f734 to 0025f747 has its CatchHandler @ 0025f758 */
    facebook::jni::findClassStatic(PTR_kBaseName_00394418);
    __cxa_guard_release(PTR_cls_00394410);
  }
  *(undefined8 *)PTR_clazz_00394398 = *(undefined8 *)PTR_cls_00394408;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025f784  FUN_0025f784 =====

long FUN_0025f784(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x2f0))(plVar2,*param_1,param_2,PTR_kDescriptor_003942d8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025f808  FUN_0025f808 =====

long FUN_0025f808(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x2f0))
                    (plVar2,*(undefined8 *)PTR_clazz_00394398,&DAT_001d704a,PTR_kDescriptor_00394420
                    );
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025f888  FUN_0025f888 =====

long FUN_0025f888(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x2f0))
                    (plVar2,*(undefined8 *)PTR_clazz_00394398,"delay",PTR_kDescriptor_00394428);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025f908  FUN_0025f908 =====

long FUN_0025f908(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x2f0))
                    (plVar2,*(undefined8 *)PTR_clazz_00394398,"properties",PTR_kDescriptor_00394430)
  ;
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025f988  FUN_0025f988 =====

undefined1  [16] FUN_0025f988(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_40 [8];
  long local_38;
  
  puVar2 = PTR_method_00394470;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_method_00394478 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_method_00394478), iVar3 != 0)) {
                    /* try { // try from 0025fa20 to 0025fa37 has its CatchHandler @ 0025fa4c */
    FUN_0026203c(auStack_40);
    uVar4 = FUN_002620fc(auStack_40,"doubleValue");
    *(undefined8 *)puVar2 = uVar4;
    __cxa_guard_release(PTR_method_00394478);
  }
  uVar5 = *param_1;
  uVar4 = facebook::jni::Environment::current();
  auVar6._0_8_ = FUN_00262180(uVar4,uVar5,*(undefined8 *)puVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    auVar6._8_8_ = 0;
    return auVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025fa78  facebook::jni::base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

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
                    /* try { // try from 0025faa4 to 0025fab7 has its CatchHandler @ 0025fae4 */
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


// ===== 0025fae8  FUN_0025fae8 =====

void FUN_0025fae8(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0025fb14 to 0025fb27 has its CatchHandler @ 0025fb54 */
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


// ===== 0025fb58  FUN_0025fb58 =====

void FUN_0025fb58(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0025fb84 to 0025fb97 has its CatchHandler @ 0025fbc4 */
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


// ===== 0025fbc8  FUN_0025fbc8 =====

void FUN_0025fbc8(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0025fbf4 to 0025fc07 has its CatchHandler @ 0025fc34 */
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


// ===== 0025fc38  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init_copy_ctor_external =====

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
        FUN_00260a84();
      }
      goto LAB_0025fce0;
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
LAB_0025fce0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0025fce4  FUN_0025fce4 =====

void FUN_0025fce4(long *param_1,ulong param_2)

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
LAB_0025fd70:
      if (bVar7) goto LAB_0025fde8;
      uVar11 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar15 < 3) {
LAB_0025fdc8:
        uVar11 = std::__ndk1::__next_prime(uVar11);
      }
      else {
        uVar19 = NEON_cnt(uVar15,1);
        uVar18 = NEON_uaddlv(uVar19,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18)) goto LAB_0025fdc8;
        if (1 < uVar11) {
          uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
        }
      }
      if (uVar14 <= uVar11) {
        uVar14 = uVar11;
      }
      if (uVar15 <= uVar14) goto LAB_0025fde8;
    }
  }
  else {
                    /* try { // try from 0025fd58 to 0025fde7 has its CatchHandler @ 002601ac */
    uVar14 = std::__ndk1::__next_prime(uVar14);
    uVar15 = param_1[1];
    bVar7 = uVar15 <= uVar14;
    if (uVar14 <= uVar15) goto LAB_0025fd70;
  }
  FUN_00260210(param_1,uVar14);
LAB_0025fde8:
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
      uVar14 = FUN_002603ac(__s2,sVar3);
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
                  if (bVar4 < 2) goto LAB_0025fe14;
                  pcVar12 = (char *)((long)plVar9 + 0x11);
                  pcVar13 = __s2;
                  while (*pcVar12 == *pcVar13) {
                    uVar10 = uVar10 - 1;
                    pcVar12 = pcVar12 + 1;
                    pcVar13 = pcVar13 + 1;
                    if (uVar10 == 0) goto LAB_0025fe14;
                  }
                }
                else {
                  iVar8 = memcmp((void *)plVar9[4],__s2,plVar9[3]);
                  if (iVar8 == 0) goto LAB_0025fe14;
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
                    /* try { // try from 0025ff54 to 0025ff5b has its CatchHandler @ 002601e4 */
      plVar9 = (long *)operator_new(0x48);
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
                    /* try { // try from 0025ff90 to 0025ff97 has its CatchHandler @ 002601b0 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(plVar9 + 2),(char *)plVar17[4],plVar17[3]);
      }
      *(undefined1 *)(plVar9 + 5) = 0;
      *(undefined4 *)(plVar9 + 8) = 0xffffffff;
      if (*(uint *)(plVar17 + 8) != 0xffffffff) {
                    /* try { // try from 0025ffc0 to 0025ffcf has its CatchHandler @ 002601bc */
        (*(code *)(&
                  PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<bool,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,double>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___copy_constructor<std___ndk1___variant_detail___traits<bool,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,double>,(std___ndk1___variant_detail__Trait)1>const&>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<bool,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,double>>&,std___ndk1___variant_detail___copy_constructor<std___ndk1___variant_detail___traits<bool,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,double>,(std___ndk1___variant_detail__Trait)1>const&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,bool,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,double>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,bool,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,double>const&>_0037bd68
                  )[*(uint *)(plVar17 + 8)])(&uStack_81,plVar9 + 5,plVar17 + 5);
        *(int *)(plVar9 + 8) = (int)plVar17[8];
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
                    /* try { // try from 00260050 to 002600d3 has its CatchHandler @ 002601b4 */
          uVar11 = std::__ndk1::__next_prime(uVar11);
        }
        uVar15 = param_1[1];
        if (uVar15 < uVar11) {
LAB_00260068:
          FUN_00260210(param_1,uVar11);
        }
        else if (uVar11 < uVar15) {
          uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
          if (uVar15 < 3) {
LAB_002600d0:
            uVar10 = std::__ndk1::__next_prime(uVar10);
          }
          else {
            uVar19 = NEON_cnt(uVar15,1);
            uVar18 = NEON_uaddlv(uVar19,1);
            if (1 < (uint)CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18)) goto LAB_002600d0;
            if (1 < uVar10) {
              uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
            }
          }
          if (uVar11 <= uVar10) {
            uVar11 = uVar10;
          }
          if (uVar11 < uVar15) goto LAB_00260068;
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
          goto LAB_0025fe04;
        }
      }
      else {
        *local_80 = *plVar9;
LAB_0025fe04:
        *plVar9 = (long)local_80;
      }
      param_1[3] = param_1[3] + 1;
LAB_0025fe14:
      plVar17 = (long *)*plVar17;
    } while (plVar17 != (long *)0x0);
  }
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00260210  FUN_00260210 =====

void FUN_00260210(long *param_1,ulong param_2)

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
        FUN_00260a2c();
      }
      goto LAB_002603a8;
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
LAB_002603a8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002603ac  FUN_002603ac =====

void FUN_002603ac(ulong *param_1,ulong param_2)

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
        goto LAB_00260760;
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
        goto LAB_00260760;
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
      goto LAB_00260760;
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
LAB_00260760:
  if (*(long *)(lVar10 + 0x28) != *(long *)(lVar10 + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar13);
  }
  return;
}


// ===== 00260824  FUN_00260824 =====

void FUN_00260824(undefined8 *param_1)

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
      if (*(uint *)((long)pvVar2 + 0x40) != 0xffffffff) {
                    /* try { // try from 0026086c to 00260877 has its CatchHandler @ 002608bc */
        (*(code *)(&PTR_FUN_0037f8f8)[*(uint *)((long)pvVar2 + 0x40)])
                  (&uStack_29,(long)pvVar2 + 0x28);
      }
      *(undefined4 *)((long)pvVar2 + 0x40) = 0xffffffff;
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


// ===== 002608c0  FUN_002608c0 =====

void FUN_002608c0(long param_1)

{
  long lVar1;
  undefined1 uStack_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
                    /* try { // try from 002608f8 to 00260903 has its CatchHandler @ 00260930 */
    (*(code *)(&PTR_FUN_0037f8f8)[*(uint *)(param_1 + 0x18)])(&uStack_29,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00260934  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,(std::__ndk1::__variant_detail::_Trait)1>const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>>&,std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,(std::__ndk1::__variant_detail::_Trait)1>const&)::{lambda(auto:1&,auto:2&&)#1}&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>const&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,
   0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double> >&,
   std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double> >&,
   std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double> const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,0ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,(std::__ndk1::__variant_detail::_Trait)1>const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>>&,std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,(std::__ndk1::__variant_detail::_Trait)1>const&)::_lambda(auto:1&,auto:2&&)_1_&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>const&>
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


// ===== 00260974  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,(std::__ndk1::__variant_detail::_Trait)1>const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>>&,std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,(std::__ndk1::__variant_detail::_Trait)1>const&)::{lambda(auto:1&,auto:2&&)#1}&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>const&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,
   1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double> >&,
   std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double> >&,
   std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double> const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,1ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,(std::__ndk1::__variant_detail::_Trait)1>const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>>&,std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,(std::__ndk1::__variant_detail::_Trait)1>const&)::_lambda(auto:1&,auto:2&&)_1_&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>const&>
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


// ===== 002609ec  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul,2ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,(std::__ndk1::__variant_detail::_Trait)1>const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>>&,std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,(std::__ndk1::__variant_detail::_Trait)1>const&)::{lambda(auto:1&,auto:2&&)#1}&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>const&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul,
   2ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double> >&,
   std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>, (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double> >&,
   std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>, (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double> const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul,2ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,(std::__ndk1::__variant_detail::_Trait)1>const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>>&,std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,(std::__ndk1::__variant_detail::_Trait)1>const&)::_lambda(auto:1&,auto:2&&)_1_&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>const&>
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


// ===== 00260a2c  FUN_00260a2c =====

void FUN_00260a2c(void)

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
    __cxa_throw(this,PTR_typeinfo_003947d8,PTR__bad_array_new_length_003947b0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00260a84  FUN_00260a84 =====

void FUN_00260a84(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_00260abc("basic_string");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00260abc  FUN_00260abc =====

void FUN_00260abc(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar2 = __cxa_allocate_exception(0x10);
                    /* try { // try from 00260aec to 00260af3 has its CatchHandler @ 00260b1c */
  FUN_00260b44(uVar2,param_1);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Subroutine does not return */
    __cxa_throw(uVar2,PTR_typeinfo_003947c8,PTR__length_error_003947a8);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00260b44  FUN_00260b44 =====

void FUN_00260b44(logic_error *param_1,char *param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    std::logic_error::logic_error(param_1,param_2);
    *(undefined **)param_1 = PTR_vtable_003947d0 + 0x10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00260b9c  FUN_00260b9c =====

JClass * FUN_00260b9c(JClass *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  _jobject *p_Var7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  bad_alloc *pbVar12;
  _jmethodID *p_Var13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 uVar16;
  long local_88;
  long local_78;
  JClass local_70 [16];
  ulong local_60;
  long *local_58;
  long local_50;
  long local_48;
  
  puVar3 = PTR_hasNextMethod_00394500;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (((*PTR_hasNextMethod_00394508 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_hasNextMethod_00394508), iVar6 != 0)) {
                    /* try { // try from 00260ef0 to 00260f07 has its CatchHandler @ 002611bc */
    FUN_002613cc(local_70);
    uVar14 = facebook::jni::JClass::getMethod<unsigned_char()>(local_70,"hasNext");
    *(undefined8 *)puVar3 = uVar14;
    __cxa_guard_release(PTR_hasNextMethod_00394508);
  }
  p_Var13 = *(_jmethodID **)param_1;
  p_Var7 = (_jobject *)facebook::jni::Environment::current();
  cVar5 = _JNIEnv::CallBooleanMethod(p_Var7,p_Var13,*(undefined8 *)puVar3);
  facebook::jni::throwPendingJniExceptionAsCppException();
  puVar3 = PTR_keyField_00394520;
  if (cVar5 == '\0') {
    lVar9 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
    if (lVar9 != 0) {
                    /* try { // try from 00260d0c to 00260d1f has its CatchHandler @ 00261264 */
      plVar15 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar15 + 0xb8))(plVar15,lVar9);
    }
    lVar9 = *(long *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (lVar9 != 0) {
                    /* try { // try from 00260d2c to 00260d3f has its CatchHandler @ 00261260 */
      plVar15 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar15 + 0xb8))(plVar15,lVar9);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
LAB_00260eb4:
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return param_1;
    }
  }
  else {
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    puVar4 = PTR_keyField_00394518;
    if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_keyField_00394520), iVar6 != 0)) {
                    /* try { // try from 00260f2c to 00260f43 has its CatchHandler @ 002611ac */
      FUN_002613cc(local_70);
      uVar14 = FUN_0026148c(local_70,&DAT_001d6b59);
      *(undefined8 *)puVar4 = uVar14;
      __cxa_guard_release(PTR_keyField_00394520);
    }
    if (((*PTR_valueField_00394530 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_valueField_00394530), iVar6 != 0)) {
                    /* try { // try from 00260f68 to 00260f7f has its CatchHandler @ 0026119c */
      FUN_002613cc(local_70);
      uVar14 = FUN_0026148c(local_70,"mValue");
      *(undefined8 *)PTR_valueField_00394528 = uVar14;
      __cxa_guard_release(PTR_valueField_00394530);
    }
    uVar14 = *(undefined8 *)puVar4;
    plVar15 = *(long **)param_1;
                    /* try { // try from 00260c38 to 00260c4f has its CatchHandler @ 0026129c */
    plVar8 = (long *)facebook::jni::Environment::current();
    lVar9 = (**(code **)(*plVar8 + 0x2f8))(plVar8,plVar15,uVar14);
    puVar3 = PTR_target_class_00394540;
    if (lVar9 == 0) {
      local_78 = 0;
LAB_00260d50:
      uVar16 = *(undefined8 *)param_1;
      uVar14 = *(undefined8 *)PTR_valueField_00394528;
                    /* try { // try from 00260d60 to 00260d77 has its CatchHandler @ 00261298 */
      plVar15 = (long *)facebook::jni::Environment::current();
      local_88 = (**(code **)(*plVar15 + 0x2f8))(plVar15,uVar16,uVar14);
      if (local_88 == 0) {
        lVar11 = 0;
LAB_00260e54:
        if (lVar9 != 0) {
                    /* try { // try from 00260e60 to 00260e73 has its CatchHandler @ 0026127c */
          plVar15 = (long *)facebook::jni::Environment::current();
          (**(code **)(*plVar15 + 0xb8))(plVar15,lVar9);
        }
        lVar9 = *(long *)(param_1 + 0x10);
        if (lVar9 != 0) {
                    /* try { // try from 00260e7c to 00260e8f has its CatchHandler @ 00261278 */
          plVar15 = (long *)facebook::jni::Environment::current();
          (**(code **)(*plVar15 + 0xb8))(plVar15,lVar9);
        }
        lVar9 = *(long *)(param_1 + 0x18);
        *(long *)(param_1 + 0x10) = local_78;
        if (lVar9 != 0) {
                    /* try { // try from 00260e9c to 00260eaf has its CatchHandler @ 00261274 */
          plVar15 = (long *)facebook::jni::Environment::current();
          (**(code **)(*plVar15 + 0xb8))(plVar15,lVar9);
        }
        *(long *)(param_1 + 0x18) = lVar11;
        goto LAB_00260eb4;
      }
      plVar15 = (long *)PTR_target_class_00394570;
      if ((*PTR_target_class_00394578 & 1) == 0) goto LAB_00261050;
LAB_00260d98:
      if (*plVar15 == 0) {
        if (*(long *)(lVar2 + 0x28) != local_48) goto LAB_0026125c;
                    /* try { // try from 00261098 to 002610b3 has its CatchHandler @ 00261220 */
        FUN_00261580("java/lang/ClassCastException","Could not find class %s.",
                     PTR_kBaseName_00394580);
      }
      else {
                    /* try { // try from 00260da0 to 00260db7 has its CatchHandler @ 00261284 */
        plVar8 = (long *)facebook::jni::Environment::current();
        plVar8 = (long *)(**(code **)(*plVar8 + 0xf8))(plVar8,local_88);
        local_58 = plVar8;
                    /* try { // try from 00260dc0 to 00260dd7 has its CatchHandler @ 00261280 */
        plVar10 = (long *)facebook::jni::Environment::current();
        cVar5 = (**(code **)(*plVar10 + 0x58))(plVar10,plVar8,*plVar15);
        if (cVar5 != '\0') {
          if (local_88 == 0) {
            lVar11 = 0;
          }
          else {
                    /* try { // try from 00260de4 to 00260dff has its CatchHandler @ 00261290 */
            plVar15 = (long *)facebook::jni::Environment::current();
            lVar11 = (**(code **)(*plVar15 + 200))(plVar15,local_88);
            facebook::jni::throwPendingJniExceptionAsCppException();
            if (lVar11 == 0) {
              pbVar12 = (bad_alloc *)__cxa_allocate_exception(8);
              std::bad_alloc::bad_alloc(pbVar12);
              if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 0026115c to 00261173 has its CatchHandler @ 00261290 */
                    /* WARNING: Subroutine does not return */
                __cxa_throw(pbVar12,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
              }
              goto LAB_0026125c;
            }
          }
          if (plVar8 != (long *)0x0) {
                    /* try { // try from 00260e20 to 00260e33 has its CatchHandler @ 0026126c */
            plVar15 = (long *)facebook::jni::Environment::current();
            (**(code **)(*plVar15 + 0xb8))(plVar15,plVar8);
          }
          if (local_88 != 0) {
                    /* try { // try from 00260e40 to 00260e53 has its CatchHandler @ 00261268 */
            plVar15 = (long *)facebook::jni::Environment::current();
            (**(code **)(*plVar15 + 0xb8))(plVar15,local_88);
          }
          goto LAB_00260e54;
        }
      }
                    /* try { // try from 002610b4 to 002610c3 has its CatchHandler @ 002611e8 */
      FUN_002615d4(local_70,&local_58);
      uVar1 = (ulong)local_70 | 1;
      if (((byte)local_70[0] & 1) != 0) {
        uVar1 = local_60;
      }
      if (*(long *)(lVar2 + 0x28) != local_48) goto LAB_0026125c;
                    /* try { // try from 002610e8 to 00261103 has its CatchHandler @ 002611d0 */
      FUN_0026171c("java/lang/ClassCastException","Tried to cast from %s to %s.",uVar1,
                   PTR_kBaseName_00394580);
    }
    else {
      if (((*PTR_target_class_00394548 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_target_class_00394548), iVar6 != 0)) {
                    /* try { // try from 00260fac to 00260fbb has its CatchHandler @ 00261188 */
        facebook::jni::findClassStatic(PTR_kBaseName_00394550);
        *(long *)puVar3 = local_50;
        __cxa_guard_release(PTR_target_class_00394548);
      }
      if (*(long *)puVar3 == 0) {
        if (*(long *)(lVar2 + 0x28) != local_48) goto LAB_0026125c;
                    /* try { // try from 00260fe4 to 00260fff has its CatchHandler @ 00261238 */
        FUN_00261580("java/lang/ClassCastException","Could not find class %s.",
                     PTR_kBaseName_00394550);
LAB_00261000:
                    /* try { // try from 00261000 to 0026100f has its CatchHandler @ 00261210 */
        param_1 = local_70;
        FUN_002615d4(local_70,&local_58);
        uVar1 = (ulong)param_1 | 1;
        if (((byte)local_70[0] & 1) != 0) {
          uVar1 = local_60;
        }
        if (*(long *)(lVar2 + 0x28) != local_48) goto LAB_0026125c;
                    /* try { // try from 00261034 to 0026104f has its CatchHandler @ 002611f8 */
        FUN_0026171c("java/lang/ClassCastException","Tried to cast from %s to %s.",uVar1,
                     PTR_kBaseName_00394550);
LAB_00261050:
        iVar6 = __cxa_guard_acquire(PTR_target_class_00394578);
        if (iVar6 != 0) {
                    /* try { // try from 00261060 to 0026106f has its CatchHandler @ 00261174 */
          facebook::jni::findClassStatic(PTR_kBaseName_00394580);
          *plVar15 = local_50;
          __cxa_guard_release(PTR_target_class_00394578);
        }
        goto LAB_00260d98;
      }
                    /* try { // try from 00260c78 to 00260c8f has its CatchHandler @ 0026128c */
      plVar15 = (long *)facebook::jni::Environment::current();
      plVar15 = (long *)(**(code **)(*plVar15 + 0xf8))(plVar15,lVar9);
      local_58 = plVar15;
                    /* try { // try from 00260c98 to 00260caf has its CatchHandler @ 00261288 */
      plVar8 = (long *)facebook::jni::Environment::current();
      cVar5 = (**(code **)(*plVar8 + 0x58))(plVar8,plVar15,*(undefined8 *)puVar3);
      if (cVar5 == '\0') goto LAB_00261000;
      local_78 = lVar9;
      if (lVar9 == 0) {
LAB_00260cdc:
        if (plVar15 != (long *)0x0) {
                    /* try { // try from 00260ce4 to 00260cf7 has its CatchHandler @ 00261270 */
          plVar8 = (long *)facebook::jni::Environment::current();
          (**(code **)(*plVar8 + 0xb8))(plVar8,plVar15);
        }
        goto LAB_00260d50;
      }
                    /* try { // try from 00260cbc to 00260cd7 has its CatchHandler @ 00261294 */
      plVar8 = (long *)facebook::jni::Environment::current();
      local_78 = (**(code **)(*plVar8 + 200))(plVar8,lVar9);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (local_78 != 0) goto LAB_00260cdc;
    }
    pbVar12 = (bad_alloc *)__cxa_allocate_exception(8);
    std::bad_alloc::bad_alloc(pbVar12);
    if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 00261124 to 0026113b has its CatchHandler @ 00261294 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pbVar12,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
    }
  }
LAB_0026125c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002612a0  FUN_002612a0 =====

void FUN_002612a0(long param_1)

{
  long lVar1;
  undefined1 uStack_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
                    /* try { // try from 002612d8 to 002612e3 has its CatchHandler @ 00261310 */
    (*(code *)(&PTR_FUN_0037f8f8)[*(uint *)(param_1 + 0x18)])(&uStack_29,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00261314  FUN_00261314 =====

void FUN_00261314(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = param_1[3];
  if (lVar4 != 0) {
                    /* try { // try from 00261340 to 00261353 has its CatchHandler @ 002613c8 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  lVar4 = param_1[2];
  param_1[3] = 0;
  if (lVar4 != 0) {
                    /* try { // try from 00261360 to 00261373 has its CatchHandler @ 002613c4 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  lVar4 = *param_1;
  param_1[2] = 0;
  if (lVar4 != 0) {
                    /* try { // try from 00261380 to 00261393 has its CatchHandler @ 002613c0 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002613cc  FUN_002613cc =====

void FUN_002613cc(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_003944e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_003944e8), iVar2 != 0))
  {
                    /* try { // try from 0026143c to 0026144f has its CatchHandler @ 00261460 */
    facebook::jni::findClassStatic(PTR_kBaseName_003944f0);
    __cxa_guard_release(PTR_cls_003944e8);
  }
  *param_1 = *(undefined8 *)PTR_cls_003944e0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026148c  FUN_0026148c =====

long FUN_0026148c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x2f0))(plVar2,*param_1,param_2,PTR_kDescriptor_00394538);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00261510  FUN_00261510 =====

void FUN_00261510(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0026153c to 0026154f has its CatchHandler @ 0026157c */
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


// ===== 00261580  FUN_00261580 =====

void FUN_00261580(char *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  char acStack_238 [512];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_002617e4(acStack_238,param_2,param_3,param_2,param_3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwNewJavaException(param_1,acStack_238);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002615d4  FUN_002615d4 =====

void FUN_002615d4(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  _jobject *p_Var4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  _jmethodID *p_Var8;
  long local_40;
  long local_38;
  
  puVar2 = PTR_method_00394558;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_method_00394560 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_method_00394560), iVar3 != 0)) {
                    /* try { // try from 00261690 to 0026169f has its CatchHandler @ 002616dc */
    facebook::jni::findClassLocal("java/lang/Object");
                    /* try { // try from 002616a0 to 002616af has its CatchHandler @ 002616cc */
    uVar7 = facebook::jni::JClass::getMethod<_jstring*()>((JClass *)&local_40,"toString");
    *(undefined8 *)puVar2 = uVar7;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_40);
    __cxa_guard_release(PTR_method_00394560);
  }
  p_Var8 = (_jmethodID *)*param_2;
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var8,*(undefined8 *)puVar2);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_40 = lVar5;
                    /* try { // try from 00261634 to 0026163f has its CatchHandler @ 002616f0 */
  facebook::jni::JString::toStdString();
  lVar5 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 00261648 to 0026165b has its CatchHandler @ 00261718 */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,lVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026171c  FUN_0026171c =====

void FUN_0026171c(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char acStack_238 [512];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_002617e4(acStack_238,param_2,param_3,param_2,param_3,param_4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwNewJavaException(param_1,acStack_238);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00261774  facebook::jni::base_owned_ref<_jclass*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

/* facebook::jni::base_owned_ref<_jclass*,
   facebook::jni::LocalReferenceAllocator>::~base_owned_ref() */

void __thiscall
facebook::jni::base_owned_ref<_jclass*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
          (base_owned_ref<_jclass*,facebook::jni::LocalReferenceAllocator> *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)this;
  if (lVar4 != 0) {
                    /* try { // try from 002617a0 to 002617b3 has its CatchHandler @ 002617e0 */
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


// ===== 002617e4  FUN_002617e4 =====

void FUN_002617e4(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  ppuStack_68 = &local_70;
  puStack_60 = &local_90;
  uStack_58 = 0xffffff80ffffffe0;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  iVar2 = vsnprintf(param_1,0x200,param_4,&local_70);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


// ===== 0026187c  facebook::jni::JClass::getMethod<_jstring*()> =====

/* facebook::jni::JMethod<_jstring* ()> facebook::jni::JClass::getMethod<_jstring* ()>(char const*)
   const */

long __thiscall facebook::jni::JClass::getMethod<_jstring*()>(JClass *this,char *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*(undefined8 *)this,param_1,PTR_kDescriptor_00394568);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00261900  _JNIEnv::CallObjectMethod =====

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


// ===== 0026199c  facebook::jni::base_owned_ref<_jstring*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

/* facebook::jni::base_owned_ref<_jstring*,
   facebook::jni::LocalReferenceAllocator>::~base_owned_ref() */

void __thiscall
facebook::jni::base_owned_ref<_jstring*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
          (base_owned_ref<_jstring*,facebook::jni::LocalReferenceAllocator> *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)this;
  if (lVar4 != 0) {
                    /* try { // try from 002619c8 to 002619db has its CatchHandler @ 00261a08 */
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


// ===== 00261a0c  facebook::jni::JClass::getMethod<unsigned_char()> =====

/* facebook::jni::JMethod<unsigned char ()> facebook::jni::JClass::getMethod<unsigned char ()>(char
   const*) const */

long __thiscall facebook::jni::JClass::getMethod<unsigned_char()>(JClass *this,char *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*(undefined8 *)this,param_1,PTR_kDescriptor_00394510);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00261a90  _JNIEnv::CallBooleanMethod =====

/* _JNIEnv::CallBooleanMethod(_jobject*, _jmethodID*, ...) */

void _JNIEnv::CallBooleanMethod(_jobject *param_1,_jmethodID *param_2,...)

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
  (**(code **)(*(long *)param_1 + 0x130))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00261b2c  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,(std::__ndk1::__variant_detail::_Trait)1>>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>>&,std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,(std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&,auto:2&&)#1}&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>&&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,
   0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>, (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>&&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>, (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>&&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,0ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,(std::__ndk1::__variant_detail::_Trait)1>>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>>&,std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,(std::__ndk1::__variant_detail::_Trait)1>&&)::_lambda(auto:1&,auto:2&&)_1_&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>&&>
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


// ===== 00261b6c  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,(std::__ndk1::__variant_detail::_Trait)1>>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>>&,std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,(std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&,auto:2&&)#1}&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>&&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,
   1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>, (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>&&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>, (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>&&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,1ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,(std::__ndk1::__variant_detail::_Trait)1>>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>>&,std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,(std::__ndk1::__variant_detail::_Trait)1>&&)::_lambda(auto:1&,auto:2&&)_1_&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>&&>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 8);
  uVar3 = *(undefined8 *)param_3;
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_2 + 8) = uVar4;
  *(undefined8 *)param_2 = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)(param_3 + 8) = 0;
    *(undefined8 *)(param_3 + 0x10) = 0;
    return (_func_decltype_auto *)param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00261bbc  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul,2ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,(std::__ndk1::__variant_detail::_Trait)1>>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>>&,std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,(std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&,auto:2&&)#1}&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>&&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul,
   2ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>, (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>&&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double> >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>, (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   double>&&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul,2ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,(std::__ndk1::__variant_detail::_Trait)1>>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>>&,std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,(std::__ndk1::__variant_detail::_Trait)1>&&)::_lambda(auto:1&,auto:2&&)_1_&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>&&>
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


// ===== 00261bfc  FUN_00261bfc =====

long FUN_00261bfc(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"<init>",PTR_kConstructorDescriptor_003944f8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00261c78  FUN_00261c78 =====

void FUN_00261c78(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = param_1[1];
  if (lVar4 != 0) {
                    /* try { // try from 00261ca4 to 00261cb7 has its CatchHandler @ 00261d08 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  lVar4 = *param_1;
  param_1[1] = 0;
  if (lVar4 != 0) {
                    /* try { // try from 00261cc4 to 00261cd7 has its CatchHandler @ 00261d04 */
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


// ===== 00261d0c  FUN_00261d0c =====

void FUN_00261d0c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00261d38 to 00261d4b has its CatchHandler @ 00261d78 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00261d7c  FUN_00261d7c =====

void FUN_00261d7c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00261da8 to 00261dbb has its CatchHandler @ 00261de8 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00261dec  FUN_00261dec =====

void FUN_00261dec(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00261e18 to 00261e2b has its CatchHandler @ 00261e58 */
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


// ===== 00261e5c  FUN_00261e5c =====

void FUN_00261e5c(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_003944b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_003944b8), iVar2 != 0))
  {
                    /* try { // try from 00261ecc to 00261edf has its CatchHandler @ 00261ef0 */
    facebook::jni::findClassStatic(PTR_kBaseName_003944c0);
    __cxa_guard_release(PTR_cls_003944b8);
  }
  *param_1 = *(undefined8 *)PTR_cls_003944b0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00261f1c  facebook::jni::JClass::getMethod<int()> =====

/* facebook::jni::JMethod<int ()> facebook::jni::JClass::getMethod<int ()>(char const*) const */

long __thiscall facebook::jni::JClass::getMethod<int()>(JClass *this,char *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*(undefined8 *)this,param_1,PTR_kDescriptor_003944c8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00261fa0  _JNIEnv::CallIntMethod =====

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


// ===== 0026203c  FUN_0026203c =====

void FUN_0026203c(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00394488 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00394488), iVar2 != 0))
  {
                    /* try { // try from 002620ac to 002620bf has its CatchHandler @ 002620d0 */
    facebook::jni::findClassStatic(PTR_kBaseName_00394490);
    __cxa_guard_release(PTR_cls_00394488);
  }
  *param_1 = *(undefined8 *)PTR_cls_00394480;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002620fc  FUN_002620fc =====

long FUN_002620fc(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,param_2,PTR_kDescriptor_00394498);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00262180  FUN_00262180 =====

void FUN_00262180(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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


// ===== 0026221c  FUN_0026221c =====

void FUN_0026221c(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00394460 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00394460), iVar2 != 0))
  {
                    /* try { // try from 00262290 to 002622a3 has its CatchHandler @ 002622b4 */
    facebook::jni::findClassStatic(PTR_kBaseName_00394468);
    __cxa_guard_release(PTR_cls_00394460);
  }
  *(undefined8 *)PTR_clazz_00394438 = *(undefined8 *)PTR_cls_00394458;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002622e0  FUN_002622e0 =====

long FUN_002622e0(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x2f0))(plVar2,*param_1,param_2,PTR_kDescriptor_00394320);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00262364  facebook::jni::detail::MethodWrapper<void(margelo::nitro::rive::JFunc_void_RiveError_cxx::*)(facebook::jni::alias_ref<margelo::nitro::rive::JRiveError>),&margelo::nitro::rive::JFunc_void_RiveError_cxx::invoke_cxx,margelo::nitro::rive::JFunc_void_RiveError_cxx,void,facebook::jni::alias_ref<margelo::nitro::rive::JRiveError>>::call =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::rive::JFunc_void_RiveError_cxx::*)(facebook::jni::alias_ref<margelo::nitro::rive::JRiveError>),
   &margelo::nitro::rive::JFunc_void_RiveError_cxx::invoke_cxx,
   margelo::nitro::rive::JFunc_void_RiveError_cxx, void,
   facebook::jni::alias_ref<margelo::nitro::rive::JRiveError> >::call(_JNIEnv*, _jobject*,
   facebook::jni::detail::JTypeFor<margelo::nitro::rive::JRiveError, facebook::jni::JObject,
   void>::_javaobject*) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::rive::JFunc_void_RiveError_cxx::*)(facebook::jni::alias_ref<margelo::nitro::rive::JRiveError>),&margelo::nitro::rive::JFunc_void_RiveError_cxx::invoke_cxx,margelo::nitro::rive::JFunc_void_RiveError_cxx,void,facebook::jni::alias_ref<margelo::nitro::rive::JRiveError>>
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
                    /* try { // try from 002623a0 to 002623ab has its CatchHandler @ 002623d8 */
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


// ===== 00262420  facebook::jni::detail::MethodWrapper<void(margelo::nitro::rive::JFunc_void_RiveError_cxx::*)(facebook::jni::alias_ref<margelo::nitro::rive::JRiveError>),&margelo::nitro::rive::JFunc_void_RiveError_cxx::invoke_cxx,margelo::nitro::rive::JFunc_void_RiveError_cxx,void,facebook::jni::alias_ref<margelo::nitro::rive::JRiveError>>::dispatch =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::rive::JFunc_void_RiveError_cxx::*)(facebook::jni::alias_ref<margelo::nitro::rive::JRiveError>),
   &margelo::nitro::rive::JFunc_void_RiveError_cxx::invoke_cxx,
   margelo::nitro::rive::JFunc_void_RiveError_cxx, void,
   facebook::jni::alias_ref<margelo::nitro::rive::JRiveError>
   >::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JFunc_void_RiveError_cxx,
   margelo::nitro::rive::JFunc_void_RiveError>::JavaPart,
   margelo::nitro::rive::JFunc_void_RiveError, void>::_javaobject*>,
   facebook::jni::alias_ref<margelo::nitro::rive::JRiveError>&&) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::rive::JFunc_void_RiveError_cxx::*)(facebook::jni::alias_ref<margelo::nitro::rive::JRiveError>),&margelo::nitro::rive::JFunc_void_RiveError_cxx::invoke_cxx,margelo::nitro::rive::JFunc_void_RiveError_cxx,void,facebook::jni::alias_ref<margelo::nitro::rive::JRiveError>>
     ::dispatch(JObject *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  exception_ptr aeStack_90 [8];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88;
  ulong uStack_80;
  char *local_78;
  undefined8 local_70;
  ulong uStack_68;
  char *local_60;
  undefined4 local_58;
  long local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_hybridDataField_00394330 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00394330), iVar4 != 0)) {
    JObject::getClass();
                    /* try { // try from 0026262c to 0026262f has its CatchHandler @ 002627bc */
    uVar7 = FUN_0026288c(local_70);
    *(undefined8 *)PTR_hybridDataField_00394328 = uVar7;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_70);
    __cxa_guard_release(PTR_hybridDataField_00394330);
  }
                    /* try { // try from 00262454 to 0026245f has its CatchHandler @ 00262808 */
  lVar5 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_00394328);
  uVar7 = *param_2;
  if (((*PTR_clazz_00394298 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_clazz_00394298), iVar4 != 0)) {
                    /* try { // try from 00262668 to 00262673 has its CatchHandler @ 002627a8 */
    FUN_002629ac(PTR_clazz_00394290);
    __cxa_guard_release(PTR_clazz_00394298);
  }
  puVar2 = PTR_fieldMessage_003942a0;
  if (((*PTR_fieldMessage_003942a8 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_fieldMessage_003942a8), iVar4 != 0)) {
                    /* try { // try from 00262694 to 002626a7 has its CatchHandler @ 00262794 */
    uVar8 = FUN_0025f784(PTR_clazz_00394290,"message");
    *(undefined8 *)puVar2 = uVar8;
    __cxa_guard_release(PTR_fieldMessage_003942a8);
  }
  uVar8 = *(undefined8 *)puVar2;
                    /* try { // try from 00262494 to 002624ab has its CatchHandler @ 00262860 */
  plVar6 = (long *)facebook::jni::Environment::current();
  local_40 = (**(code **)(*plVar6 + 0x2f8))(plVar6,uVar7,uVar8);
  puVar2 = PTR_fieldType_003942b0;
  if (((*PTR_fieldType_003942b8 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_fieldType_003942b8), iVar4 != 0)) {
                    /* try { // try from 002626cc to 002626cf has its CatchHandler @ 00262780 */
    uVar8 = FUN_00262a6c();
    *(undefined8 *)puVar2 = uVar8;
    __cxa_guard_release(PTR_fieldType_003942b8);
  }
  uVar8 = *(undefined8 *)puVar2;
                    /* try { // try from 002624cc to 002624e3 has its CatchHandler @ 0026285c */
  plVar6 = (long *)facebook::jni::Environment::current();
  local_48 = (**(code **)(*plVar6 + 0x2f8))(plVar6,uVar7,uVar8);
                    /* try { // try from 002624e8 to 002624f3 has its CatchHandler @ 002627f0 */
  facebook::jni::JString::toStdString();
  if (((*PTR_clazz_003942f0 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_clazz_003942f0), iVar4 != 0)) {
                    /* try { // try from 002626f4 to 002626ff has its CatchHandler @ 00262768 */
    FUN_00262b5c(PTR_clazz_003942e8);
    __cxa_guard_release(PTR_clazz_003942f0);
  }
  puVar2 = PTR_fieldOrdinal_003942f8;
  if (((*PTR_fieldOrdinal_00394300 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_fieldOrdinal_00394300), iVar4 != 0)) {
                    /* try { // try from 00262720 to 00262733 has its CatchHandler @ 0026275c */
    uVar7 = FUN_002622e0(PTR_clazz_003942e8,"value");
    *(undefined8 *)puVar2 = uVar7;
    __cxa_guard_release(PTR_fieldOrdinal_00394300);
  }
  lVar3 = local_48;
  uVar7 = *(undefined8 *)puVar2;
                    /* try { // try from 00262524 to 0026253b has its CatchHandler @ 00262858 */
  plVar6 = (long *)facebook::jni::Environment::current();
  local_58 = (**(code **)(*plVar6 + 800))(plVar6,lVar3,uVar7);
  if (((byte)local_88 & 1) == 0) {
    local_70._0_1_ = local_88;
    uStack_68 = uStack_80;
    local_60 = local_78;
  }
  else {
                    /* try { // try from 00262564 to 0026256b has its CatchHandler @ 002627d8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_70,local_78,uStack_80);
    if (((byte)local_88 & 1) != 0) {
      operator_delete(local_78);
    }
  }
  if (lVar3 != 0) {
                    /* try { // try from 00262584 to 00262597 has its CatchHandler @ 00262814 */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,lVar3);
  }
  lVar3 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 002625a0 to 002625b3 has its CatchHandler @ 00262810 */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,lVar3);
  }
  plVar6 = *(long **)(lVar5 + 0x30);
  if (plVar6 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00262758 to 0026275b has its CatchHandler @ 00262818 */
      uVar7 = FUN_0025cd00();
                    /* catch() { ... } // from try @ 00262720 with catch @ 0026275c */
      __cxa_guard_abort(PTR_fieldOrdinal_00394300);
      if (((byte)local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      FUN_00262aec(&local_48);
      base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator> *)
                 &local_40);
      __cxa_begin_catch(uVar7);
      std::current_exception();
      std::exception_ptr::~exception_ptr(aeStack_90);
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00262854 to 00262857 has its CatchHandler @ 00262864 */
        __cxa_rethrow();
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00262524 with catch @ 00262858 */
        FUN_0025ad9c();
      }
    }
  }
  else {
                    /* try { // try from 002625c4 to 002625cb has its CatchHandler @ 00262818 */
    (**(code **)(*plVar6 + 0x30))(plVar6,&local_70);
    if (((byte)local_70._0_1_ & 1) != 0) {
      operator_delete(local_60);
    }
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026288c  FUN_0026288c =====

void FUN_0026288c(undefined8 param_1)

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
    if (((*PTR_cls_00394358 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_cls_00394358), iVar2 != 0)) {
                    /* try { // try from 00262948 to 0026295b has its CatchHandler @ 00262980 */
      facebook::jni::findClassStatic(PTR_kBaseName_00394360);
      __cxa_guard_release(PTR_cls_00394358);
    }
    uVar6 = *(undefined8 *)PTR_cls_00394350;
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar4 = (**(code **)(*plVar5 + 0x2f0))(plVar5,uVar6,"mHybridData",PTR_kDescriptor_00394368);
    facebook::jni::throwCppExceptionIf(lVar4 == 0);
    if (lVar4 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_28) {
        uVar6 = facebook::jni::throwNPE();
                    /* catch() { ... } // from try @ 00262948 with catch @ 00262980 */
        lVar4 = __cxa_guard_abort(PTR_cls_00394358);
        if (*(long *)(lVar1 + 0x28) == local_28) {
          lVar4 = FUN_00255d34(uVar6);
        }
      }
      goto LAB_002629a8;
    }
  }
  else {
    lVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_002629a8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


// ===== 002629ac  FUN_002629ac =====

void FUN_002629ac(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_003942c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_003942c8), iVar2 != 0))
  {
                    /* try { // try from 00262a1c to 00262a2f has its CatchHandler @ 00262a40 */
    facebook::jni::findClassStatic(PTR_kBaseName_003942d0);
    __cxa_guard_release(PTR_cls_003942c8);
  }
  *param_1 = *(undefined8 *)PTR_cls_003942c0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00262a6c  FUN_00262a6c =====

long FUN_00262a6c(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x2f0))
                    (plVar2,*(undefined8 *)PTR_clazz_00394290,&DAT_001d704a,PTR_kDescriptor_003942e0
                    );
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00262aec  FUN_00262aec =====

void FUN_00262aec(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00262b18 to 00262b2b has its CatchHandler @ 00262b58 */
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


// ===== 00262b5c  FUN_00262b5c =====

void FUN_00262b5c(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00394310 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00394310), iVar2 != 0))
  {
                    /* try { // try from 00262bcc to 00262bdf has its CatchHandler @ 00262bf0 */
    facebook::jni::findClassStatic(PTR_kBaseName_00394318);
    __cxa_guard_release(PTR_cls_00394310);
  }
  *param_1 = *(undefined8 *)PTR_cls_00394308;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00262c1c  margelo::nitro::rive::HybridBindableArtboardSpec::loadHybridMethods =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::rive::HybridBindableArtboardSpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridBindableArtboardSpec::loadHybridMethods
          (HybridBindableArtboardSpec *this)

{
  long lVar1;
  long lVar2;
  long **pplVar3;
  runtime_error *prVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  basic_string local_118;
  undefined7 uStack_117;
  char cStack_110;
  undefined4 uStack_10f;
  undefined1 uStack_10b;
  undefined2 uStack_10a;
  long *local_108;
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
  undefined8 uStack_90;
  long *local_88;
  long *local_80;
  long *plStack_78;
  long **local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  margelo::nitro::HybridObject::loadHybridMethods();
  lVar5 = *(long *)(*(long *)this + -0x20);
  plVar6 = *(long **)(this + lVar5 + 8);
  if (plVar6 == (long *)0x0) {
    local_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    local_100 = PTR_typeinfo_003947f8;
                    /* try { // try from 00262c78 to 00262c87 has its CatchHandler @ 002631d8 */
    FUN_00264f84(&local_d0,&local_100,&local_80);
    plVar9 = plStack_c8;
    plVar6 = local_d0;
    plVar8 = *(long **)(this + lVar5 + 0x10);
    local_d0 = (long *)0x0;
    plStack_c8 = (long *)0x0;
    *(long **)(this + lVar5 + 0x10) = plVar9;
    *(long **)(this + lVar5 + 8) = plVar6;
    if ((plVar8 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = plStack_c8;
    if ((plStack_c8 != (long *)0x0) &&
       (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_c8 + 1), lVar2 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = plStack_78;
    if ((plStack_78 != (long *)0x0) &&
       (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1), lVar2 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = *(long **)(this + lVar5 + 8);
  }
  puVar7 = *(undefined **)(*plVar6 + 8);
  plVar9 = plVar6;
  while (puVar7 != PTR_typeinfo_name_003947f0) {
    plVar9 = (long *)plVar9[1];
    if (plVar9 == (long *)0x0) {
      plStack_c8 = *(long **)(this + lVar5 + 0x10);
      local_d0 = plVar6;
      if (plStack_c8 != (long *)0x0) {
        FUN_00259a00(1,plStack_c8 + 1);
      }
      local_100 = PTR_typeinfo_003947f8;
                    /* try { // try from 00262d94 to 00262da3 has its CatchHandler @ 002631cc */
      FUN_00264f84(&local_80,&local_100,&local_d0);
      plVar9 = plStack_78;
      plVar6 = local_80;
      plVar8 = *(long **)(this + lVar5 + 0x10);
      local_80 = (long *)0x0;
      plStack_78 = (long *)0x0;
      *(long **)(this + lVar5 + 0x10) = plVar9;
      *(long **)(this + lVar5 + 8) = plVar6;
      if ((plVar8 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar2 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar6 = plStack_78;
      if ((plStack_78 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1), lVar2 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar6 = plStack_c8;
      if ((plStack_c8 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_c8 + 1), lVar2 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar9 = *(long **)(this + lVar5 + 8);
      lVar5 = plVar9[6];
      goto joined_r0x00262e48;
    }
    puVar7 = *(undefined **)(*plVar9 + 8);
  }
  lVar5 = plVar9[6];
joined_r0x00262e48:
  if (((lVar5 == 0) && (plVar9[0xb] == 0)) && (plVar9[0x10] == 0)) {
    local_118 = (basic_string)0x18;
    uStack_10f = 0x656d614e;
    uStack_117 = (undefined7)s_artboardName_001d6750._0_8_;
    cStack_110 = SUB81(s_artboardName_001d6750._0_8_,7);
    uStack_10b = 0;
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_118);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00263074 to 00263087 has its CatchHandler @ 00263280 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_118);
                    /* try { // try from 00263088 to 0026309b has its CatchHandler @ 00263264 */
      FUN_00263450(&local_d0,&local_80,"\" - a getter with that name already exists!");
                    /* try { // try from 002630a0 to 002630d7 has its CatchHandler @ 00263240 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002632b4;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_118);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002630e8 to 002630fb has its CatchHandler @ 0026327c */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_118);
                    /* try { // try from 002630fc to 0026310f has its CatchHandler @ 0026323c */
      FUN_00263450(&local_d0,&local_80,"\" - a method with that name already exists!");
                    /* try { // try from 00263114 to 0026314b has its CatchHandler @ 00263210 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002632b4;
    }
    plStack_f8 = (long *)CONCAT26(uStack_10a,CONCAT15(uStack_10b,CONCAT41(uStack_10f,cStack_110)));
    local_100 = (undefined *)CONCAT71(uStack_117,local_118);
    local_f0 = local_108;
    plStack_e0 = _UNK_001d81a8;
    local_e8 = _DAT_001d81a0;
    local_d8 = 1;
                    /* try { // try from 00262ecc to 00262ed3 has its CatchHandler @ 002631f8 */
    local_60 = (long **)operator_new(0x38);
    *local_60 = (long *)&PTR_FUN_0037c350;
    if (((ulong)local_100 & 1) == 0) {
      local_60[2] = plStack_f8;
      *(undefined **)(local_60 + 1) = local_100;
      local_60[3] = local_f0;
    }
    else {
                    /* try { // try from 00262f04 to 00262f07 has its CatchHandler @ 002631bc */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (local_60 + 1),(char *)local_f0,(ulong)plStack_f8);
    }
    local_60[5] = plStack_e0;
    local_60[4] = local_e8;
    *(undefined4 *)(local_60 + 6) = local_d8;
    if (((byte)local_100 & 1) == 0) {
LAB_00262f44:
      pplVar3 = &local_80;
      local_b0 = local_60;
LAB_00262f54:
      pplVar3[4] = (long *)0x0;
    }
    else {
      operator_delete(local_f0);
      if (local_60 == (long **)0x0) {
        pplVar3 = &local_d0;
        goto LAB_00262f54;
      }
      if (local_60 != &local_80) goto LAB_00262f44;
      local_b0 = &local_d0;
                    /* try { // try from 00263058 to 00263063 has its CatchHandler @ 0026314c */
      (*(code *)local_80[3])(&local_80,&local_d0);
    }
    local_a0 = 0;
    if (((byte)local_118 & 1) == 0) {
      uStack_90 = CONCAT26(uStack_10a,CONCAT15(uStack_10b,CONCAT41(uStack_10f,cStack_110)));
      local_98 = CONCAT71(uStack_117,local_118);
      local_88 = local_108;
    }
    else {
                    /* try { // try from 00262f84 to 00262f8b has its CatchHandler @ 00263150 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_98,(char *)local_108,
                 CONCAT26(uStack_10a,CONCAT15(uStack_10b,CONCAT41(uStack_10f,cStack_110))));
    }
    if (local_60 == &local_80) {
      lVar5 = 4;
      pplVar3 = &local_80;
LAB_00262fb0:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_60 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_60;
      goto LAB_00262fb0;
    }
                    /* try { // try from 00262fbc to 00262fcf has its CatchHandler @ 002631e8 */
    FUN_002634d4(plVar9 + 8,&local_118,&local_118,&local_d0);
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_b0 == &local_d0) {
      lVar5 = 4;
      pplVar3 = &local_d0;
LAB_00263004:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_b0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_b0;
      goto LAB_00263004;
    }
    if (((byte)local_118 & 1) != 0) {
      operator_delete(local_108);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_002632b4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002632b8  FUN_002632b8 =====

long * FUN_002632b8(long param_1,ulong param_2,byte *param_3)

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
  uVar7 = FUN_002603ac(__s2,sVar2);
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
                  if (bVar3 >> 1 == uVar10) goto LAB_00263418;
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
            if (uVar10 != uVar12) goto LAB_00263414;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      goto LAB_00263418;
    }
  }
LAB_00263414:
  plVar9 = (long *)0x0;
LAB_00263418:
  if (*(long *)(lVar5 + 0x28) == lVar8) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00263450  FUN_00263450 =====

void FUN_00263450(undefined8 *param_1,char *param_2,char *param_3)

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


// ===== 002634d4  FUN_002634d4 =====

void FUN_002634d4(long *param_1,byte *param_2,byte *param_3,long *param_4)

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
  uVar7 = FUN_002603ac(__s2,sVar2);
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
              if (bVar3 < 2) goto LAB_002639bc;
              pbVar16 = (byte *)((long)plVar12 + 0x11);
              pbVar20 = __s2;
              while (*pbVar16 == *pbVar20) {
                uVar13 = uVar13 - 1;
                pbVar16 = pbVar16 + 1;
                pbVar20 = pbVar20 + 1;
                if (uVar13 == 0) goto LAB_002639bc;
              }
            }
            else {
              iVar6 = memcmp((void *)plVar12[4],__s2,plVar12[3]);
              if (iVar6 == 0) goto LAB_002639bc;
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
                    /* try { // try from 002636a8 to 002636af has its CatchHandler @ 00263a48 */
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
                    /* try { // try from 002636ec to 002636f3 has its CatchHandler @ 00263a44 */
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
                    /* try { // try from 0026378c to 00263a43 has its CatchHandler @ 00263a4c */
      uVar19 = std::__ndk1::__next_prime(uVar19);
    }
    uVar24 = param_1[1];
    if (uVar24 < uVar19) {
LAB_002637a4:
      if (uVar19 >> 0x3d != 0) {
        if (*(long *)(lVar5 + 0x28) == lVar11) {
          FUN_00260a2c();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 002636ec with catch @ 00263a44
                        */
          FUN_0025ad9c();
        }
        goto LAB_00263a74;
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
LAB_002639f0:
        uVar13 = std::__ndk1::__next_prime(uVar13);
      }
      else {
        uVar26 = NEON_cnt(uVar24,1);
        uVar25 = NEON_uaddlv(uVar26,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar26 >> 0x10),uVar25)) goto LAB_002639f0;
        if (1 < uVar13) {
          uVar13 = 1L << (-LZCOUNT(uVar13 - 1) & 0x3fU);
        }
      }
      if (uVar19 <= uVar13) {
        uVar19 = uVar13;
      }
      if (uVar19 < uVar24) {
        if (uVar19 != 0) goto LAB_002637a4;
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
      goto LAB_002639ac;
    }
  }
  else {
    *plVar8 = *plVar17;
LAB_002639ac:
    *plVar17 = (long)plVar8;
  }
  param_1[3] = param_1[3] + 1;
LAB_002639bc:
  if (*(long *)(lVar5 + 0x28) == lVar11) {
    return;
  }
LAB_00263a74:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00263a78  FUN_00263a78 =====

void FUN_00263a78(long *param_1)

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
      goto LAB_00263b18;
    }
    lVar3 = 5;
    param_1 = plVar4;
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00263af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + lVar3 * 8))();
    return;
  }
LAB_00263b18:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00263b1c  FUN_00263b1c =====

void FUN_00263b1c(undefined8 *param_1)

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
    goto LAB_00263bec;
  }
  if (*(char *)(param_1 + 2) != '\0') {
    plVar3 = (long *)((long)pvVar6 + 0x30);
    if ((*(byte *)((long)pvVar6 + 0x68) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar6 + 0x78));
    }
    plVar2 = *(long **)((long)pvVar6 + 0x50);
    if (plVar2 == plVar3) {
      lVar5 = 4;
LAB_00263ba8:
      (**(code **)(*plVar3 + lVar5 * 8))();
    }
    else if (plVar2 != (long *)0x0) {
      lVar5 = 5;
      plVar3 = plVar2;
      goto LAB_00263ba8;
    }
    if ((*(byte *)((long)pvVar6 + 0x10) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar6 + 0x20));
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(pvVar6);
    return;
  }
LAB_00263bec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00263bf0  FUN_00263bf0 =====

void FUN_00263bf0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037c350;
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


// ===== 00263c5c  FUN_00263c5c =====

void FUN_00263c5c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037c350;
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


// ===== 00263cc4  FUN_00263cc4 =====

undefined8 * FUN_00263cc4(long param_1)

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
  *puVar4 = &PTR_FUN_0037c350;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00263d24 to 00263d27 has its CatchHandler @ 00263d60 */
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


// ===== 00263d88  FUN_00263d88 =====

void FUN_00263d88(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037c350;
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


// ===== 00263e20  FUN_00263e20 =====

void FUN_00263e20(long param_1)

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


// ===== 00263e80  FUN_00263e80 =====

void FUN_00263e80(void *param_1)

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


// ===== 00263edc  FUN_00263edc =====

void FUN_00263edc(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
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
                    /* try { // try from 00263f38 to 00263f47 has its CatchHandler @ 00264500 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  plVar1 = local_78;
  if ((CONCAT71(uStack_7f,local_80) == 0) ||
     (lVar6 = __dynamic_cast(CONCAT71(uStack_7f,local_80),PTR_typeinfo_00394860,
                             PTR_typeinfo_003947f8,0xffffffffffffffff), lVar6 == 0)) {
    lVar6 = 0;
    plVar9 = (long *)0x0;
    if (plVar1 == (long *)0x0) goto joined_r0x00263fc0;
  }
  else {
    if (plVar1 == (long *)0x0) {
      plVar9 = (long *)0x0;
      goto joined_r0x00263fc0;
    }
    FUN_00259a00(1,plVar1 + 1);
    plVar9 = plVar1;
  }
  lVar7 = FUN_00255510(0xffffffffffffffff,plVar1 + 1);
  if (lVar7 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x00263fc0:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar10 == 0) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar10 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive26HybridBindableArtboardSpecENSt6__ndk112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSF_FT0_DpT1_ERNSD_7RuntimeEPKSE_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394808
         & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive26HybridBindableArtboardSpecENSt6__ndk112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSF_FT0_DpT1_ERNSD_7RuntimeEPKSE_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394808
                                   ),
       puVar4 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive26HybridBindableArtboardSpecENSt6__ndk112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSF_FT0_DpT1_ERNSD_7RuntimeEPKSE_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394800
       , iVar5 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive26HybridBindableArtboardSpecENSt6__ndk112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSF_FT0_DpT1_ERNSD_7RuntimeEPKSE_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394800
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar4,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive26HybridBindableArtboardSpecENSt6__ndk112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSF_FT0_DpT1_ERNSD_7RuntimeEPKSE_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394808
                         );
    }
    if ((uVar10 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *(long *)(lVar6 + ((long)uVar10 >> 1)));
    }
                    /* try { // try from 00263ff8 to 00264003 has its CatchHandler @ 00264208 */
    (*pcVar11)(&local_80);
    plVar1 = (long *)(ulong)((byte)local_80 >> 1);
    pvVar3 = (void *)((ulong)&local_80 | 1);
    if (((byte)local_80 & 1) != 0) {
      plVar1 = local_78;
      pvVar3 = local_70;
    }
                    /* try { // try from 00264028 to 00264033 has its CatchHandler @ 002641ec */
    (**(code **)(*param_3 + 0x110))(local_128,param_3,pvVar3,plVar1);
    *param_1 = 6;
    *(undefined8 *)(param_1 + 2) = local_128[0];
    if (((byte)local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if ((plVar9 != (long *)0x0) && (lVar6 = FUN_00255510(0xffffffffffffffff,plVar9 + 1), lVar6 == 0)
       ) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 002640c4 to 002640d3 has its CatchHandler @ 0026469c */
    FUN_00264754(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar6);
    pJVar8 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002640e0 to 002640f3 has its CatchHandler @ 0026467c */
    std::__ndk1::operator+("`",&local_80);
                    /* try { // try from 002640f4 to 00264107 has its CatchHandler @ 00264664 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 00264108 to 00264113 has its CatchHandler @ 00264634 */
    std::__ndk1::to_string(0);
                    /* try { // try from 00264114 to 00264123 has its CatchHandler @ 00264610 */
    FUN_00264adc(auStack_e0,auStack_f8,local_128);
                    /* try { // try from 00264124 to 00264137 has its CatchHandler @ 002645ec */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 00264138 to 00264143 has its CatchHandler @ 002645c8 */
    std::__ndk1::to_string(uVar10);
                    /* try { // try from 00264144 to 00264153 has its CatchHandler @ 002645a4 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 00264154 to 00264167 has its CatchHandler @ 00264580 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 0026416c to 002641a7 has its CatchHandler @ 00264520 */
    facebook::jsi::JSError::JSError(pJVar8,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar8,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002646c4  FUN_002646c4 =====

void FUN_002646c4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394810) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00264714  FUN_00264714 =====

undefined * FUN_00264714(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394818;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00264754  FUN_00264754 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00264754(undefined8 *param_1,int param_2,byte *param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  void *pvVar4;
  byte *pbVar5;
  long lVar6;
  byte bVar7;
  ulong *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong local_a0;
  ulong local_98;
  undefined8 *local_90;
  byte local_88 [8];
  size_t local_80;
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  undefined8 *local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  if (param_4 == 0) {
    local_60 = (undefined8 *)operator_new(0x40);
    uVar13 = *(undefined8 *)(PTR_typeinfo_name_003947f0 + 8);
    uVar12 = *(undefined8 *)PTR_typeinfo_name_003947f0;
    uVar15 = *(undefined8 *)(PTR_typeinfo_name_003947f0 + 0x18);
    uVar14 = *(undefined8 *)(PTR_typeinfo_name_003947f0 + 0x10);
    uStack_68 = _UNK_001d7e98;
    local_70 = _DAT_001d7e90;
    uVar11 = *(undefined8 *)(PTR_typeinfo_name_003947f0 + 0x28);
    uVar9 = *(undefined8 *)(PTR_typeinfo_name_003947f0 + 0x20);
    *(undefined2 *)(local_60 + 6) = 0x45;
    local_60[1] = uVar13;
    *local_60 = uVar12;
    local_60[3] = uVar15;
    local_60[2] = uVar14;
    local_60[5] = uVar11;
    local_60[4] = uVar9;
                    /* try { // try from 002647dc to 002647eb has its CatchHandler @ 00264a7c */
    margelo::nitro::TypeInfo::demangleName((basic_string *)&local_70,true);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
  else {
    margelo::nitro::HybridObject::getName();
  }
  bVar7 = local_88[0];
  if (param_2 == 0) {
    sVar3 = (ulong)(local_88[0] >> 1);
    if ((local_88[0] & 1) != 0) {
      sVar3 = local_80;
    }
    uVar1 = sVar3 + 1;
    if (0xffffffffffffffef < uVar1) goto LAB_00264a3c;
    if (uVar1 < 0x17) {
      local_98 = 0;
      puVar10 = (undefined8 *)((ulong)&local_a0 | 1);
      local_90 = (undefined8 *)0x0;
      local_a0 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_00264940;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 00264928 to 0026492f has its CatchHandler @ 00264a90 */
      puVar10 = (undefined8 *)operator_new(uVar2);
      local_a0 = uVar2 | 1;
      local_98 = uVar1;
      local_90 = puVar10;
LAB_00264940:
      pvVar4 = (void *)((ulong)local_88 | 1);
      if ((bVar7 & 1) != 0) {
        pvVar4 = local_78;
      }
      memmove(puVar10,pvVar4,sVar3);
    }
    *(undefined2 *)((long)puVar10 + sVar3) = 0x2e;
    pbVar5 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar5 = param_3 + 1;
    }
                    /* try { // try from 00264980 to 00264987 has its CatchHandler @ 00264a68 */
    puVar8 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_a0,(ulong)pbVar5);
    local_60 = (undefined8 *)puVar8[2];
    uStack_68 = puVar8[1];
    local_70 = *puVar8;
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
                    /* try { // try from 002649a0 to 002649b3 has its CatchHandler @ 00264a50 */
    puVar10 = (undefined8 *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_70,0x1d6185);
    uVar9 = puVar10[2];
    uVar12 = puVar10[1];
    uVar11 = *puVar10;
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    param_1[1] = uVar12;
    *param_1 = uVar11;
    param_1[2] = uVar9;
    puVar10 = local_90;
    uVar1 = local_a0;
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
      puVar10 = local_90;
      uVar1 = local_a0;
    }
  }
  else {
    sVar3 = (ulong)(local_88[0] >> 1);
    if ((local_88[0] & 1) != 0) {
      sVar3 = local_80;
    }
    uVar1 = sVar3 + 1;
    if (0xffffffffffffffef < uVar1) {
      if (*(long *)(lVar6 + 0x28) != local_58) goto LAB_00264ad8;
                    /* try { // try from 00264a38 to 00264a3b has its CatchHandler @ 00264aac */
      FUN_00260a84();
LAB_00264a3c:
      if (*(long *)(lVar6 + 0x28) == local_58) {
                    /* try { // try from 00264a4c to 00264a4f has its CatchHandler @ 00264a90 */
        uVar9 = FUN_00260a84();
                    /* catch() { ... } // from try @ 002649a0 with catch @ 00264a50 */
        if ((local_70 & 1) != 0) {
          operator_delete(local_60);
        }
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
        if ((local_88[0] & 1) != 0) {
          operator_delete(local_78);
        }
        if (*(long *)(lVar6 + 0x28) == local_58) {
          FUN_00255d34(uVar9);
        }
      }
      goto LAB_00264ad8;
    }
    if (uVar1 < 0x17) {
      uStack_68 = 0;
      puVar10 = (undefined8 *)((ulong)&local_70 | 1);
      local_60 = (undefined8 *)0x0;
      local_70 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_002648b0;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 00264898 to 0026489f has its CatchHandler @ 00264aac */
      puVar10 = (undefined8 *)operator_new(uVar2);
      local_70 = uVar2 | 1;
      uStack_68 = uVar1;
      local_60 = puVar10;
LAB_002648b0:
      pvVar4 = (void *)((ulong)local_88 | 1);
      if ((bVar7 & 1) != 0) {
        pvVar4 = local_78;
      }
      memmove(puVar10,pvVar4,sVar3);
    }
    *(undefined2 *)((long)puVar10 + sVar3) = 0x2e;
    pbVar5 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar5 = param_3 + 1;
    }
                    /* try { // try from 002648f0 to 002648f7 has its CatchHandler @ 00264a94 */
    puVar10 = (undefined8 *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_70,(ulong)pbVar5);
    uVar9 = puVar10[2];
    uVar12 = puVar10[1];
    uVar11 = *puVar10;
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    param_1[1] = uVar12;
    *param_1 = uVar11;
    param_1[2] = uVar9;
    puVar10 = local_60;
    uVar1 = local_70;
  }
  if ((uVar1 & 1) != 0) {
    operator_delete(puVar10);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
LAB_00264ad8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00264adc  FUN_00264adc =====

void FUN_00264adc(undefined8 *param_1,char *param_2,byte *param_3)

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


// ===== 00264b5c  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc =====

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
      FUN_00260a84();
    }
    goto LAB_00264c20;
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n != 0) goto LAB_00264bd0;
  }
  else {
    __dest = operator_new((__n | 0xf) + 1);
    param_1[1] = __n;
    param_1[2] = (long)__dest;
    *param_1 = (__n | 0xf) + 2;
LAB_00264bd0:
    memmove(__dest,param_2,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
LAB_00264c20:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00264c24  FUN_00264c24 =====

void FUN_00264c24(long *param_1,byte *param_2,char *param_3)

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
    FUN_00260a84();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00264d50  FUN_00264d50 =====

void FUN_00264d50(undefined8 *param_1,char *param_2,byte *param_3)

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


// ===== 00264dd0  FUN_00264dd0 =====

void FUN_00264dd0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 00264e5c  FUN_00264e5c =====

void FUN_00264e5c(undefined8 param_1,char *param_2,byte param_3)

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
      uVar2 = FUN_00260a84();
                    /* catch() { ... } // from try @ 00264ef4 with catch @ 00264f54 */
      if ((local_70 & 1) != 0) {
        operator_delete(local_60);
      }
      if (*(long *)(lVar1 + 0x28) == local_58) {
        FUN_00255d34(uVar2);
      }
    }
    goto LAB_00264f80;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00264ee0;
  }
  else {
    __dest = operator_new((__n | 0xf) + 1);
    local_70 = (__n | 0xf) + 2;
    local_68 = __n;
    local_60 = __dest;
LAB_00264ee0:
    memcpy(__dest,param_2,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 00264ef4 to 00264f03 has its CatchHandler @ 00264f54 */
  margelo::nitro::TypeInfo::demangleName((basic_string *)&local_70,(bool)(param_3 & 1));
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_00264f80:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00264f84  FUN_00264f84 =====

void FUN_00264f84(long *param_1,long *param_2,long *param_3)

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
  
  puVar3 = PTR__prototypesCache_00394820;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (((*PTR__prototypesCache_00394828 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR__prototypesCache_00394828), iVar4 != 0)) {
    *(undefined4 *)(puVar3 + 0x20) = 0x3f800000;
    *(undefined8 *)(puVar3 + 8) = 0;
    *(undefined8 *)puVar3 = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    __cxa_atexit(FUN_002655a0,puVar3,&PTR_LOOP_0037bc90);
    __cxa_guard_release(PTR__prototypesCache_00394828);
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
          if (*(ulong *)(plVar15[2] + 8) == uVar16) goto LAB_002653f4;
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
                    /* try { // try from 00265120 to 00265147 has its CatchHandler @ 002654dc */
      uVar10 = std::__ndk1::__next_prime(uVar10);
      uVar17 = *(ulong *)(puVar3 + 8);
    }
    if (uVar17 < uVar10) {
LAB_00265138:
      if (uVar10 >> 0x3d != 0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
          uVar20 = FUN_00260a2c();
                    /* catch() { ... } // from try @ 00265120 with catch @ 002654dc
                       catch() { ... } // from try @ 00265444 with catch @ 002654dc */
          FUN_002659bc(&local_80);
          if (*(long *)(lVar2 + 0x28) == local_68) {
            FUN_00255d34(uVar20);
          }
        }
        goto LAB_00265510;
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
LAB_00265444:
                    /* try { // try from 00265444 to 002654db has its CatchHandler @ 002654dc */
        uVar12 = std::__ndk1::__next_prime(uVar12);
      }
      else {
        uVar20 = NEON_cnt(uVar17,1);
        uVar19 = NEON_uaddlv(uVar20,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar20 >> 0x10),uVar19)) goto LAB_00265444;
        if (1 < uVar12) {
          uVar12 = 1L << (-LZCOUNT(uVar12 - 1) & 0x3fU);
        }
      }
      if (uVar10 <= uVar12) {
        uVar10 = uVar12;
      }
      if (uVar10 < uVar17) {
        if (uVar10 != 0) goto LAB_00265138;
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
      goto LAB_00265340;
    }
  }
  else {
    *plVar15 = *plVar11;
LAB_00265340:
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
    FUN_00259a00(1,lVar7 + 8);
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
                    /* try { // try from 002653a8 to 002653af has its CatchHandler @ 002654ec */
  puVar9 = (undefined8 *)operator_new(0x20);
  plVar13 = (long *)plVar15[4];
  *puVar9 = &PTR____shared_weak_count_00385bc0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  puVar9[3] = plVar11;
  plVar15[3] = (long)plVar11;
  plVar15[4] = (long)puVar9;
  if ((plVar13 != (long *)0x0) &&
     (lVar18 = FUN_00255510(0xffffffffffffffff,plVar13 + 1), lVar18 == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
LAB_002653f4:
  *param_1 = plVar15[3];
  lVar18 = plVar15[4];
  param_1[1] = lVar18;
  if (lVar18 != 0) {
    FUN_00259a00(1,lVar18 + 8);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_00265510:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00265514  FUN_00265514 =====

void FUN_00265514(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 002655a0  FUN_002655a0 =====

void FUN_002655a0(undefined8 *param_1)

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
    if ((plVar6 != (long *)0x0) && (lVar4 = FUN_00255510(0xffffffffffffffff,plVar6 + 1), lVar4 == 0)
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


// ===== 00265678  FUN_00265678 =====

void FUN_00265678(undefined8 *param_1)

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
    FUN_002658d0((long)pvVar4 + 0x68);
    FUN_002658d0((long)pvVar4 + 0x40);
    FUN_002658d0((long)pvVar4 + 0x18);
    plVar5 = *(long **)((long)pvVar4 + 0x10);
    if ((plVar5 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar5 + 1), lVar2 == 0)
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


// ===== 0026573c  FUN_0026573c =====

void FUN_0026573c(__shared_weak_count *param_1)

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


// ===== 00265788  FUN_00265788 =====

void FUN_00265788(long param_1)

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
    FUN_002658d0((long)pvVar4 + 0x68);
    FUN_002658d0((long)pvVar4 + 0x40);
    FUN_002658d0((long)pvVar4 + 0x18);
    plVar5 = *(long **)((long)pvVar4 + 0x10);
    if ((plVar5 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar5 + 1), lVar2 == 0)
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


// ===== 00265848  FUN_00265848 =====

void FUN_00265848(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394830) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00265898  FUN_00265898 =====

void FUN_00265898(void *param_1)

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


// ===== 002658d0  FUN_002658d0 =====

void FUN_002658d0(undefined8 *param_1)

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
LAB_00265974:
      (**(code **)(*plVar5 + lVar7 * 8))();
    }
    else if (plVar4 != (long *)0x0) {
      lVar7 = 5;
      plVar5 = plVar4;
      goto LAB_00265974;
    }
    if ((*(byte *)(puVar2 + 2) & 1) != 0) {
      operator_delete((void *)puVar2[4]);
    }
    operator_delete(puVar2);
    puVar2 = (undefined8 *)pvVar3;
  } while( true );
}


// ===== 002659bc  FUN_002659bc =====

void FUN_002659bc(undefined8 *param_1)

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
       (lVar2 = FUN_00255510(0xffffffffffffffff,plVar5 + 1), lVar2 == 0)) {
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


// ===== 00265a70  margelo::nitro::rive::HybridBindableArtboardSpec::loadHybridMethods =====

/* virtual thunk to margelo::nitro::rive::HybridBindableArtboardSpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridBindableArtboardSpec::loadHybridMethods
          (HybridBindableArtboardSpec *this)

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


// ===== 00265ab4  FUN_00265ab4 =====

void FUN_00265ab4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00265aec  FUN_00265aec =====

undefined8 FUN_00265aec(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00265b28  FUN_00265b28 =====

void FUN_00265b28(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x265b2c);
  (*pcVar1)();
}


// ===== 00265b2c  FUN_00265b2c =====

void FUN_00265b2c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x265b30);
  (*pcVar1)();
}


// ===== 00265b30  FUN_00265b30 =====

void FUN_00265b30(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x265b34);
  (*pcVar1)();
}


// ===== 00265b34  FUN_00265b34 =====

void FUN_00265b34(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x265b38);
  (*pcVar1)();
}


// ===== 00265b38  margelo::nitro::rive::HybridRiveFileSpec::loadHybridMethods =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::rive::HybridRiveFileSpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridRiveFileSpec::loadHybridMethods(HybridRiveFileSpec *this)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long **pplVar6;
  runtime_error *prVar7;
  long lVar8;
  long *plVar9;
  undefined *puVar10;
  long *plVar11;
  long *plVar12;
  basic_string local_248;
  undefined7 uStack_247;
  char cStack_240;
  undefined7 uStack_23f;
  undefined4 uStack_238;
  uint uStack_234;
  byte local_230;
  char local_22f [8];
  char acStack_227 [5];
  undefined2 uStack_222;
  char cStack_220;
  char acStack_21f [5];
  undefined1 uStack_21a;
  undefined1 uStack_219;
  basic_string local_218;
  undefined7 uStack_217;
  char cStack_210;
  char acStack_20f [5];
  undefined2 uStack_20a;
  char cStack_208;
  char acStack_207 [5];
  undefined1 uStack_202;
  undefined1 uStack_201;
  ulong local_200;
  ulong uStack_1f8;
  long *local_1f0;
  basic_string local_1e8;
  undefined7 uStack_1e7;
  char cStack_1e0;
  undefined7 uStack_1df;
  char cStack_1d8;
  undefined4 uStack_1d7;
  undefined1 uStack_1d3;
  undefined2 uStack_1d2;
  byte local_1d0;
  char local_1cf [8];
  char acStack_1c7 [6];
  char cStack_1c1;
  char cStack_1c0;
  char acStack_1bf [6];
  undefined1 uStack_1b9;
  basic_string local_1b8;
  undefined7 uStack_1b7;
  char cStack_1b0;
  char acStack_1af [6];
  char cStack_1a9;
  char cStack_1a8;
  char acStack_1a7 [6];
  undefined1 uStack_1a1;
  ulong local_1a0;
  ulong uStack_198;
  long *local_190;
  basic_string local_188;
  char acStack_187 [7];
  char cStack_180;
  char acStack_17f [7];
  undefined1 local_178;
  undefined7 uStack_177;
  basic_string local_170;
  undefined7 uStack_16f;
  char cStack_168;
  undefined7 uStack_167;
  char cStack_160;
  undefined1 uStack_15f;
  undefined6 uStack_15e;
  basic_string local_158;
  char acStack_157 [5];
  undefined2 uStack_152;
  char cStack_150;
  char acStack_14f [5];
  undefined1 uStack_14a;
  undefined1 uStack_149;
  long *local_148;
  basic_string local_140;
  char acStack_13f [5];
  undefined2 uStack_13a;
  char cStack_138;
  char acStack_137 [5];
  undefined1 uStack_132;
  undefined1 uStack_131;
  long *local_130;
  basic_string local_128;
  char acStack_127 [6];
  char cStack_121;
  char cStack_120;
  char acStack_11f [6];
  undefined1 uStack_119;
  long *local_118;
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
  long *local_98;
  long *local_90;
  long *plStack_88;
  long **local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  margelo::nitro::HybridObject::loadHybridMethods();
  lVar8 = *(long *)(*(long *)this + -0x20);
  plVar9 = *(long **)(this + lVar8 + 8);
  if (plVar9 == (long *)0x0) {
    local_90 = (long *)0x0;
    plStack_88 = (long *)0x0;
    local_110 = PTR_typeinfo_00394870;
                    /* try { // try from 00265b9c to 00265bab has its CatchHandler @ 002682bc */
    FUN_00264f84(&local_e0,&local_110,&local_90);
    plVar12 = plStack_d8;
    plVar9 = local_e0;
    plVar11 = *(long **)(this + lVar8 + 0x10);
    local_e0 = (long *)0x0;
    plStack_d8 = (long *)0x0;
    *(long **)(this + lVar8 + 0x10) = plVar12;
    *(long **)(this + lVar8 + 8) = plVar9;
    if ((plVar11 != (long *)0x0) &&
       (lVar5 = FUN_00255510(0xffffffffffffffff,plVar11 + 1), lVar5 == 0)) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar9 = plStack_d8;
    if ((plStack_d8 != (long *)0x0) &&
       (lVar5 = FUN_00255510(0xffffffffffffffff,plStack_d8 + 1), lVar5 == 0)) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar9 = plStack_88;
    if ((plStack_88 != (long *)0x0) &&
       (lVar5 = FUN_00255510(0xffffffffffffffff,plStack_88 + 1), lVar5 == 0)) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar9 = *(long **)(this + lVar8 + 8);
  }
  puVar10 = *(undefined **)(*plVar9 + 8);
  plVar12 = plVar9;
  while (puVar10 != PTR_typeinfo_name_00394868) {
    plVar12 = (long *)plVar12[1];
    if (plVar12 == (long *)0x0) {
      plStack_d8 = *(long **)(this + lVar8 + 0x10);
      local_e0 = plVar9;
      if (plStack_d8 != (long *)0x0) {
        FUN_00259a00(1,plStack_d8 + 1);
      }
      local_110 = PTR_typeinfo_00394870;
                    /* try { // try from 00265cb8 to 00265cc7 has its CatchHandler @ 002682b0 */
      FUN_00264f84(&local_90,&local_110,&local_e0);
      plVar12 = plStack_88;
      plVar9 = local_90;
      plVar11 = *(long **)(this + lVar8 + 0x10);
      local_90 = (long *)0x0;
      plStack_88 = (long *)0x0;
      *(long **)(this + lVar8 + 0x10) = plVar12;
      *(long **)(this + lVar8 + 8) = plVar9;
      if ((plVar11 != (long *)0x0) &&
         (lVar5 = FUN_00255510(0xffffffffffffffff,plVar11 + 1), lVar5 == 0)) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar9 = plStack_88;
      if ((plStack_88 != (long *)0x0) &&
         (lVar5 = FUN_00255510(0xffffffffffffffff,plStack_88 + 1), lVar5 == 0)) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar9 = plStack_d8;
      if ((plStack_d8 != (long *)0x0) &&
         (lVar5 = FUN_00255510(0xffffffffffffffff,plStack_d8 + 1), lVar5 == 0)) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar12 = *(long **)(this + lVar8 + 8);
      lVar8 = plVar12[6];
      goto joined_r0x00265d6c;
    }
    puVar10 = *(undefined **)(*plVar12 + 8);
  }
  lVar8 = plVar12[6];
joined_r0x00265d6c:
  if (((lVar8 == 0) && (plVar12[0xb] == 0)) && (plVar12[0x10] == 0)) {
    local_128 = (basic_string)0x1c;
    uStack_119 = 0;
    cStack_121 = (char)s_viewModelCount_001d729d._6_2_;
    cStack_120 = SUB21(s_viewModelCount_001d729d._6_2_,1);
    plVar9 = plVar12 + 8;
    acStack_127 = (char  [6])s_viewModelCount_001d729d._0_6_;
    acStack_11f = (char  [6])s_viewModelCount_001d729d._8_6_;
    lVar8 = FUN_002632b8(*plVar9,plVar12[9],&local_128);
    if (lVar8 != 0) {
      prVar7 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00267710 to 00267723 has its CatchHandler @ 002689c4 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_128);
                    /* try { // try from 00267724 to 00267737 has its CatchHandler @ 00268768 */
      FUN_00263450(&local_e0,&local_90,"\" - a getter with that name already exists!");
                    /* try { // try from 0026773c to 00267773 has its CatchHandler @ 00268744 */
      std::runtime_error::runtime_error(prVar7,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar7,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00268ad8;
    }
    plVar11 = plVar12 + 3;
    lVar8 = FUN_002632b8(*plVar11,plVar12[4],&local_128);
    if (lVar8 != 0) {
      prVar7 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00267784 to 00267797 has its CatchHandler @ 002689c0 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_128);
                    /* try { // try from 00267798 to 002677ab has its CatchHandler @ 00268740 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002677b0 to 002677e7 has its CatchHandler @ 00268714 */
      std::runtime_error::runtime_error(prVar7,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar7,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00268ad8;
    }
    plStack_108 = (long *)CONCAT17(uStack_119,CONCAT61(acStack_11f,cStack_120));
    local_110 = (undefined *)CONCAT17(cStack_121,CONCAT61(acStack_127,local_128));
    local_100 = local_118;
    plStack_f0 = _UNK_001d81a8;
    local_f8 = _DAT_001d81a0;
    local_e8 = 1;
                    /* try { // try from 00265df0 to 00265df7 has its CatchHandler @ 002684a4 */
    local_70 = (long **)operator_new(0x38);
    *local_70 = (long *)&PTR_FUN_0037c5e8;
    if (((ulong)local_110 & 1) == 0) {
      local_70[2] = plStack_108;
      *(undefined **)(local_70 + 1) = local_110;
      local_70[3] = local_100;
    }
    else {
                    /* try { // try from 00265e28 to 00265e2b has its CatchHandler @ 002682a0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (local_70 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70[5] = plStack_f0;
    local_70[4] = local_f8;
    *(undefined4 *)(local_70 + 6) = local_e8;
    if (((byte)local_110._0_1_ & 1) == 0) {
LAB_00265e68:
      lVar8 = -0x40;
      local_c0 = local_70;
LAB_00265e78:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar8) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar8 = -0x90;
        goto LAB_00265e78;
      }
      if (local_70 != &local_90) goto LAB_00265e68;
      local_c0 = &local_e0;
                    /* try { // try from 00267214 to 0026721f has its CatchHandler @ 00267d58 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 0;
    if (((byte)local_128 & 1) == 0) {
      uStack_a0 = CONCAT17(uStack_119,CONCAT61(acStack_11f,cStack_120));
      local_a8 = CONCAT17(cStack_121,CONCAT61(acStack_127,local_128));
      local_98 = local_118;
    }
    else {
                    /* try { // try from 00265ea8 to 00265eaf has its CatchHandler @ 00268234 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_118,CONCAT17(uStack_119,CONCAT61(acStack_11f,cStack_120)));
    }
    if (local_70 == &local_90) {
      lVar8 = 4;
      pplVar6 = &local_90;
LAB_00265ed4:
      (*(code *)(*pplVar6)[lVar8])();
    }
    else if (local_70 != (long **)0x0) {
      lVar8 = 5;
      pplVar6 = local_70;
      goto LAB_00265ed4;
    }
                    /* try { // try from 00265ee0 to 00265ef3 has its CatchHandler @ 00268494 */
    FUN_002634d4(plVar9,&local_128,&local_128,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar8 = 4;
      pplVar6 = &local_e0;
LAB_00265f28:
      (*(code *)(*pplVar6)[lVar8])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar8 = 5;
      pplVar6 = local_c0;
      goto LAB_00265f28;
    }
    if (((byte)local_128 & 1) != 0) {
      operator_delete(local_118);
    }
    local_140 = (basic_string)0x1a;
    uStack_132 = 0;
    acStack_13f[0] = s_artboardCount_001d5e87[0];
    acStack_13f[1] = s_artboardCount_001d5e87[1];
    acStack_13f[2] = s_artboardCount_001d5e87[2];
    acStack_13f[3] = s_artboardCount_001d5e87[3];
    acStack_13f[4] = s_artboardCount_001d5e87[4];
    uStack_13a = (undefined2)s_artboardCount_001d5e87._5_3_;
    cStack_138 = SUB31(s_artboardCount_001d5e87._5_3_,2);
    acStack_137[0] = s_artboardCount_001d5e87[8];
    acStack_137[1] = s_artboardCount_001d5e87[9];
    acStack_137[2] = s_artboardCount_001d5e87[10];
    acStack_137[3] = s_artboardCount_001d5e87[0xb];
    acStack_137[4] = s_artboardCount_001d5e87[0xc];
    lVar8 = FUN_002632b8(plVar12[8],plVar12[9],&local_140);
    if (lVar8 != 0) {
      prVar7 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002677f4 to 00267807 has its CatchHandler @ 002689a4 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_140);
                    /* try { // try from 00267808 to 0026781b has its CatchHandler @ 002686fc */
      FUN_00263450(&local_e0,&local_90,"\" - a getter with that name already exists!");
                    /* try { // try from 00267820 to 00267857 has its CatchHandler @ 002686d8 */
      std::runtime_error::runtime_error(prVar7,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar7,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00268ad8;
    }
    lVar8 = FUN_002632b8(plVar12[3],plVar12[4],&local_140);
    if (lVar8 != 0) {
      prVar7 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00267868 to 0026787b has its CatchHandler @ 002689a0 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_140);
                    /* try { // try from 0026787c to 0026788f has its CatchHandler @ 002686d4 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 00267894 to 002678cb has its CatchHandler @ 002686a8 */
      std::runtime_error::runtime_error(prVar7,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar7,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00268ad8;
    }
    plStack_108 = (long *)CONCAT17(uStack_131,CONCAT16(uStack_132,CONCAT51(acStack_137,cStack_138)))
    ;
    local_110 = (undefined *)CONCAT26(uStack_13a,CONCAT51(acStack_13f,local_140));
    local_100 = local_130;
    plStack_f0 = _UNK_001d8138;
    local_f8 = _DAT_001d8130;
    local_e8 = 1;
                    /* try { // try from 00265fac to 00265fb3 has its CatchHandler @ 0026847c */
    pplVar6 = (long **)operator_new(0x38);
    *pplVar6 = (long *)&PTR_FUN_0037c668;
    if (((ulong)local_110 & 1) == 0) {
      pplVar6[2] = plStack_108;
      *(undefined **)(pplVar6 + 1) = local_110;
      pplVar6[3] = local_100;
    }
    else {
                    /* try { // try from 00265fe4 to 00265fe7 has its CatchHandler @ 00268224 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar6 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar6;
    pplVar6[5] = plStack_f0;
    pplVar6[4] = local_f8;
    *(undefined4 *)(pplVar6 + 6) = local_e8;
    if (((byte)local_110._0_1_ & 1) == 0) {
LAB_00266024:
      lVar8 = -0x40;
      local_c0 = local_70;
LAB_00266034:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar8) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar8 = -0x90;
        goto LAB_00266034;
      }
      if (local_70 != &local_90) goto LAB_00266024;
      local_c0 = &local_e0;
                    /* try { // try from 00267234 to 0026723f has its CatchHandler @ 00267d54 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 0;
    if (((byte)local_140 & 1) == 0) {
      uStack_a0 = CONCAT17(uStack_131,CONCAT16(uStack_132,CONCAT51(acStack_137,cStack_138)));
      local_a8 = CONCAT26(uStack_13a,CONCAT51(acStack_13f,local_140));
      local_98 = local_130;
    }
    else {
                    /* try { // try from 00266064 to 0026606b has its CatchHandler @ 002681b8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_130,
                 CONCAT17(uStack_131,CONCAT16(uStack_132,CONCAT51(acStack_137,cStack_138))));
    }
    if (local_70 == &local_90) {
      lVar8 = 4;
      pplVar6 = &local_90;
LAB_00266090:
      (*(code *)(*pplVar6)[lVar8])();
    }
    else if (local_70 != (long **)0x0) {
      lVar8 = 5;
      pplVar6 = local_70;
      goto LAB_00266090;
    }
                    /* try { // try from 0026609c to 002660af has its CatchHandler @ 0026846c */
    FUN_002634d4(plVar9,&local_140,&local_140,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar8 = 4;
      pplVar6 = &local_e0;
LAB_002660e4:
      (*(code *)(*pplVar6)[lVar8])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar8 = 5;
      pplVar6 = local_c0;
      goto LAB_002660e4;
    }
    if (((byte)local_140 & 1) != 0) {
      operator_delete(local_130);
    }
    local_158 = (basic_string)0x1a;
    uStack_14a = 0;
    acStack_157[0] = s_artboardNames_001d645b[0];
    acStack_157[1] = s_artboardNames_001d645b[1];
    acStack_157[2] = s_artboardNames_001d645b[2];
    acStack_157[3] = s_artboardNames_001d645b[3];
    acStack_157[4] = s_artboardNames_001d645b[4];
    uStack_152 = (undefined2)s_artboardNames_001d645b._5_3_;
    cStack_150 = SUB31(s_artboardNames_001d645b._5_3_,2);
    acStack_14f[0] = s_artboardNames_001d645b[8];
    acStack_14f[1] = s_artboardNames_001d645b[9];
    acStack_14f[2] = s_artboardNames_001d645b[10];
    acStack_14f[3] = s_artboardNames_001d645b[0xb];
    acStack_14f[4] = s_artboardNames_001d645b[0xc];
    lVar8 = FUN_002632b8(plVar12[8],plVar12[9],&local_158);
    if (lVar8 != 0) {
      prVar7 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002678d8 to 002678eb has its CatchHandler @ 00268984 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_158);
                    /* try { // try from 002678ec to 002678ff has its CatchHandler @ 00268690 */
      FUN_00263450(&local_e0,&local_90,"\" - a getter with that name already exists!");
                    /* try { // try from 00267904 to 0026793b has its CatchHandler @ 0026866c */
      std::runtime_error::runtime_error(prVar7,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar7,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00268ad8;
    }
    lVar8 = FUN_002632b8(plVar12[3],plVar12[4],&local_158);
    if (lVar8 != 0) {
      prVar7 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0026794c to 0026795f has its CatchHandler @ 00268980 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_158);
                    /* try { // try from 00267960 to 00267973 has its CatchHandler @ 00268668 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 00267978 to 002679af has its CatchHandler @ 0026863c */
      std::runtime_error::runtime_error(prVar7,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar7,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00268ad8;
    }
    plStack_108 = (long *)CONCAT17(uStack_149,CONCAT16(uStack_14a,CONCAT51(acStack_14f,cStack_150)))
    ;
    local_110 = (undefined *)CONCAT26(uStack_152,CONCAT51(acStack_157,local_158));
    local_100 = local_148;
    plStack_f0 = _UNK_001d7f68;
    local_f8 = _DAT_001d7f60;
    local_e8 = 1;
                    /* try { // try from 00266168 to 0026616f has its CatchHandler @ 00268454 */
    pplVar6 = (long **)operator_new(0x38);
    *pplVar6 = (long *)&PTR_FUN_0037c6e8;
    if (((ulong)local_110 & 1) == 0) {
      pplVar6[2] = plStack_108;
      *(undefined **)(pplVar6 + 1) = local_110;
      pplVar6[3] = local_100;
    }
    else {
                    /* try { // try from 002661a0 to 002661a3 has its CatchHandler @ 002681a8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar6 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar6;
    pplVar6[5] = plStack_f0;
    pplVar6[4] = local_f8;
    *(undefined4 *)(pplVar6 + 6) = local_e8;
    if (((byte)local_110._0_1_ & 1) == 0) {
LAB_002661e0:
      lVar8 = -0x40;
      local_c0 = local_70;
LAB_002661f0:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar8) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar8 = -0x90;
        goto LAB_002661f0;
      }
      if (local_70 != &local_90) goto LAB_002661e0;
      local_c0 = &local_e0;
                    /* try { // try from 00267254 to 0026725f has its CatchHandler @ 00267d50 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 0;
    if (((byte)local_158 & 1) == 0) {
      uStack_a0 = CONCAT17(uStack_149,CONCAT16(uStack_14a,CONCAT51(acStack_14f,cStack_150)));
      local_a8 = CONCAT26(uStack_152,CONCAT51(acStack_157,local_158));
      local_98 = local_148;
    }
    else {
                    /* try { // try from 00266220 to 00266227 has its CatchHandler @ 0026813c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_148,
                 CONCAT17(uStack_149,CONCAT16(uStack_14a,CONCAT51(acStack_14f,cStack_150))));
    }
    if (local_70 == &local_90) {
      lVar8 = 4;
      pplVar6 = &local_90;
LAB_0026624c:
      (*(code *)(*pplVar6)[lVar8])();
    }
    else if (local_70 != (long **)0x0) {
      lVar8 = 5;
      pplVar6 = local_70;
      goto LAB_0026624c;
    }
                    /* try { // try from 00266258 to 0026626b has its CatchHandler @ 00268444 */
    FUN_002634d4(plVar9,&local_158,&local_158,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar8 = 4;
      pplVar6 = &local_e0;
LAB_002662a0:
      (*(code *)(*pplVar6)[lVar8])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar8 = 5;
      pplVar6 = local_c0;
      goto LAB_002662a0;
    }
    if (((byte)local_158 & 1) != 0) {
      operator_delete(local_148);
    }
    local_170 = (basic_string)0x20;
    uStack_15f = 0;
    uStack_167 = (undefined7)s_viewModelByIndex_001d7435._8_8_;
    cStack_160 = SUB81(s_viewModelByIndex_001d7435._8_8_,7);
    uStack_16f = (undefined7)s_viewModelByIndex_001d7435._0_8_;
    cStack_168 = SUB81(s_viewModelByIndex_001d7435._0_8_,7);
    lVar8 = FUN_002632b8(plVar12[8],plVar12[9],&local_170);
    if ((lVar8 != 0) || (lVar8 = FUN_002632b8(plVar12[0xd],plVar12[0xe],&local_170), lVar8 != 0)) {
      prVar7 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00267370 to 00267383 has its CatchHandler @ 00268a9c */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_170);
                    /* try { // try from 00267384 to 00267397 has its CatchHandler @ 00268968 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 0026739c to 002673d3 has its CatchHandler @ 00268944 */
      std::runtime_error::runtime_error(prVar7,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar7,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00268ad8;
    }
    lVar8 = FUN_002632b8(plVar12[3],plVar12[4],&local_170);
    if (lVar8 != 0) {
      prVar7 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002679bc to 002679cf has its CatchHandler @ 00268940 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_170);
                    /* try { // try from 002679d0 to 002679e3 has its CatchHandler @ 00268638 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002679e8 to 00267a1f has its CatchHandler @ 0026860c */
      std::runtime_error::runtime_error(prVar7,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar7,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00268ad8;
    }
    plStack_108 = (long *)CONCAT71(uStack_167,cStack_168);
    local_110 = (undefined *)CONCAT71(uStack_16f,local_170);
    local_100 = (long *)CONCAT62(uStack_15e,CONCAT11(uStack_15f,cStack_160));
    local_e8 = 0;
    plStack_f0 = _UNK_001d81b8;
    local_f8 = _DAT_001d81b0;
                    /* try { // try from 00266328 to 0026632f has its CatchHandler @ 0026842c */
    pplVar6 = (long **)operator_new(0x38);
    *pplVar6 = (long *)&PTR_FUN_0037c768;
    if (((ulong)local_110 & 1) == 0) {
      pplVar6[2] = plStack_108;
      *(undefined **)(pplVar6 + 1) = local_110;
      pplVar6[3] = local_100;
    }
    else {
                    /* try { // try from 00266360 to 00266363 has its CatchHandler @ 0026812c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar6 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar6;
    pplVar6[5] = plStack_f0;
    pplVar6[4] = local_f8;
    *(undefined4 *)(pplVar6 + 6) = local_e8;
    if (((byte)local_110._0_1_ & 1) == 0) {
LAB_002663a0:
      lVar8 = -0x40;
      local_c0 = local_70;
LAB_002663b0:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar8) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar8 = -0x90;
        goto LAB_002663b0;
      }
      if (local_70 != &local_90) goto LAB_002663a0;
      local_c0 = &local_e0;
                    /* try { // try from 00267274 to 0026727f has its CatchHandler @ 00267d4c */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_170 & 1) == 0) {
      uStack_a0 = CONCAT71(uStack_167,cStack_168);
      local_a8 = CONCAT71(uStack_16f,local_170);
      local_98 = (long *)CONCAT62(uStack_15e,CONCAT11(uStack_15f,cStack_160));
    }
    else {
                    /* try { // try from 002663e4 to 002663eb has its CatchHandler @ 002680c0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)CONCAT62(uStack_15e,CONCAT11(uStack_15f,cStack_160)),
                 CONCAT71(uStack_167,cStack_168));
    }
    if (local_70 == &local_90) {
      lVar8 = 4;
      pplVar6 = &local_90;
LAB_00266410:
      (*(code *)(*pplVar6)[lVar8])();
    }
    else if (local_70 != (long **)0x0) {
      lVar8 = 5;
      pplVar6 = local_70;
      goto LAB_00266410;
    }
                    /* try { // try from 0026641c to 0026642f has its CatchHandler @ 0026841c */
    FUN_002634d4(plVar11,&local_170,&local_170,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar8 = 4;
      pplVar6 = &local_e0;
LAB_00266464:
      (*(code *)(*pplVar6)[lVar8])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar8 = 5;
      pplVar6 = local_c0;
      goto LAB_00266464;
    }
    if (((byte)local_170 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_15e,CONCAT11(uStack_15f,cStack_160)));
    }
    local_188 = (basic_string)0x1e;
    local_178 = 0;
    acStack_187[0] = s_viewModelByName_001d658d[0];
    acStack_187[1] = s_viewModelByName_001d658d[1];
    acStack_187[2] = s_viewModelByName_001d658d[2];
    acStack_187[3] = s_viewModelByName_001d658d[3];
    acStack_187[4] = s_viewModelByName_001d658d[4];
    acStack_187[5] = s_viewModelByName_001d658d[5];
    acStack_187[6] = s_viewModelByName_001d658d[6];
    cStack_180 = s_viewModelByName_001d658d[7];
    acStack_17f[0] = s_viewModelByName_001d658d[8];
    acStack_17f[1] = s_viewModelByName_001d658d[9];
    acStack_17f[2] = s_viewModelByName_001d658d[10];
    acStack_17f[3] = s_viewModelByName_001d658d[0xb];
    acStack_17f[4] = s_viewModelByName_001d658d[0xc];
    acStack_17f[5] = s_viewModelByName_001d658d[0xd];
    acStack_17f[6] = s_viewModelByName_001d658d[0xe];
    lVar8 = FUN_002632b8(plVar12[8],plVar12[9],&local_188);
    if ((lVar8 != 0) || (lVar8 = FUN_002632b8(plVar12[0xd],plVar12[0xe],&local_188), lVar8 != 0)) {
      prVar7 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002673e4 to 002673f7 has its CatchHandler @ 00268a80 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_188);
                    /* try { // try from 002673f8 to 0026740b has its CatchHandler @ 00268928 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 00267410 to 00267447 has its CatchHandler @ 00268904 */
      std::runtime_error::runtime_error(prVar7,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar7,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00268ad8;
    }
    lVar8 = FUN_002632b8(plVar12[3],plVar12[4],&local_188);
    if (lVar8 != 0) {
      prVar7 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00267a2c to 00267a3f has its CatchHandler @ 00268900 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_188);
                    /* try { // try from 00267a40 to 00267a53 has its CatchHandler @ 00268608 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 00267a58 to 00267a8f has its CatchHandler @ 002685dc */
      std::runtime_error::runtime_error(prVar7,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar7,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00268ad8;
    }
    plStack_108 = (long *)CONCAT71(acStack_17f,cStack_180);
    local_110 = (undefined *)CONCAT71(acStack_187,local_188);
    local_100 = (long *)CONCAT71(uStack_177,local_178);
    local_e8 = 0;
    plStack_f0 = _UNK_001d8188;
    local_f8 = _DAT_001d8180;
                    /* try { // try from 002664f8 to 002664ff has its CatchHandler @ 00268404 */
    pplVar6 = (long **)operator_new(0x38);
    *pplVar6 = (long *)&PTR_FUN_0037c7e8;
    if (((ulong)local_110 & 1) == 0) {
      pplVar6[2] = plStack_108;
      *(undefined **)(pplVar6 + 1) = local_110;
      pplVar6[3] = local_100;
    }
    else {
                    /* try { // try from 00266530 to 00266533 has its CatchHandler @ 002680b0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar6 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar6;
    pplVar6[5] = plStack_f0;
    pplVar6[4] = local_f8;
    *(undefined4 *)(pplVar6 + 6) = local_e8;
    if (((byte)local_110._0_1_ & 1) == 0) {
LAB_00266570:
      lVar8 = -0x40;
      local_c0 = local_70;
LAB_00266580:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar8) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar8 = -0x90;
        goto LAB_00266580;
      }
      if (local_70 != &local_90) goto LAB_00266570;
      local_c0 = &local_e0;
                    /* try { // try from 00267294 to 0026729f has its CatchHandler @ 00267d48 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_188 & 1) == 0) {
      uStack_a0 = CONCAT71(acStack_17f,cStack_180);
      local_a8 = CONCAT71(acStack_187,local_188);
      local_98 = (long *)CONCAT71(uStack_177,local_178);
    }
    else {
                    /* try { // try from 002665b4 to 002665bb has its CatchHandler @ 00268044 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)CONCAT71(uStack_177,local_178),CONCAT71(acStack_17f,cStack_180));
    }
    if (local_70 == &local_90) {
      lVar8 = 4;
      pplVar6 = &local_90;
LAB_002665e0:
      (*(code *)(*pplVar6)[lVar8])();
    }
    else if (local_70 != (long **)0x0) {
      lVar8 = 5;
      pplVar6 = local_70;
      goto LAB_002665e0;
    }
                    /* try { // try from 002665ec to 002665ff has its CatchHandler @ 002683f4 */
    FUN_002634d4(plVar11,&local_188,&local_188,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar8 = 4;
      pplVar6 = &local_e0;
LAB_00266634:
      (*(code *)(*pplVar6)[lVar8])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar8 = 5;
      pplVar6 = local_c0;
      goto LAB_00266634;
    }
    if (((byte)local_188 & 1) != 0) {
      operator_delete((void *)CONCAT71(uStack_177,local_178));
    }
    plVar9 = (long *)operator_new(0x20);
    uStack_198 = _UNK_001d7ef8;
    local_1a0 = _DAT_001d7ef0;
    uVar3 = s_defaultArtboardViewModel_001d7a51._16_8_;
    uVar2 = s_defaultArtboardViewModel_001d7a51._0_8_;
    plVar9[1] = s_defaultArtboardViewModel_001d7a51._8_8_;
    *plVar9 = uVar2;
    plVar9[2] = uVar3;
    *(undefined1 *)(plVar9 + 3) = 0;
    local_190 = plVar9;
    lVar8 = FUN_002632b8(plVar12[8],plVar12[9],&local_1a0);
    if ((lVar8 != 0) || (lVar8 = FUN_002632b8(plVar12[0xd],plVar12[0xe],&local_1a0), lVar8 != 0)) {
      prVar7 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00267458 to 0026746b has its CatchHandler @ 00268a68 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",(basic_string *)&local_1a0);
                    /* try { // try from 0026746c to 0026747f has its CatchHandler @ 002688e8 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 00267484 to 002674bb has its CatchHandler @ 002688c4 */
      std::runtime_error::runtime_error(prVar7,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar7,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00268ad8;
    }
    lVar8 = FUN_002632b8(plVar12[3],plVar12[4],&local_1a0);
    if (lVar8 != 0) {
      prVar7 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00267a9c to 00267aaf has its CatchHandler @ 002688c0 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",(basic_string *)&local_1a0);
                    /* try { // try from 00267ab0 to 00267ac3 has its CatchHandler @ 002685d8 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 00267ac8 to 00267aff has its CatchHandler @ 002685ac */
      std::runtime_error::runtime_error(prVar7,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar7,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00268ad8;
    }
                    /* try { // try from 002666bc to 002666cf has its CatchHandler @ 002683ec */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_110,(char *)plVar9,0x18);
    local_e8 = 0;
    plStack_f0 = _UNK_001d7f48;
    local_f8 = _DAT_001d7f40;
                    /* try { // try from 002666e0 to 002666e7 has its CatchHandler @ 002683d4 */
    pplVar6 = (long **)operator_new(0x38);
    *pplVar6 = (long *)&PTR_FUN_0037c868;
    if (((ulong)local_110 & 1) == 0) {
      pplVar6[2] = plStack_108;
      *(undefined **)(pplVar6 + 1) = local_110;
      pplVar6[3] = local_100;
    }
    else {
                    /* try { // try from 00266718 to 0026671b has its CatchHandler @ 00268034 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar6 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar6;
    pplVar6[5] = plStack_f0;
    pplVar6[4] = local_f8;
    *(undefined4 *)(pplVar6 + 6) = local_e8;
    if (((byte)local_110._0_1_ & 1) == 0) {
LAB_00266754:
      lVar8 = -0x40;
      local_c0 = local_70;
LAB_00266764:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar8) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar8 = -0x90;
        goto LAB_00266764;
      }
      if (local_70 != &local_90) goto LAB_00266754;
      local_c0 = &local_e0;
                    /* try { // try from 002672b4 to 002672bf has its CatchHandler @ 00267d44 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if ((local_1a0 & 1) == 0) {
      uStack_a0 = uStack_198;
      local_a8 = local_1a0;
      local_98 = local_190;
    }
    else {
                    /* try { // try from 00266798 to 0026679f has its CatchHandler @ 00267fc8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_190,uStack_198);
    }
    if (local_70 == &local_90) {
      lVar8 = 4;
      pplVar6 = &local_90;
LAB_002667c4:
      (*(code *)(*pplVar6)[lVar8])();
    }
    else if (local_70 != (long **)0x0) {
      lVar8 = 5;
      pplVar6 = local_70;
      goto LAB_002667c4;
    }
                    /* try { // try from 002667d0 to 002667e3 has its CatchHandler @ 002683c4 */
    FUN_002634d4(plVar11,&local_1a0,&local_1a0,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar8 = 4;
      pplVar6 = &local_e0;
LAB_00266818:
      (*(code *)(*pplVar6)[lVar8])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar8 = 5;
      pplVar6 = local_c0;
      goto LAB_00266818;
    }
    if ((local_1a0 & 1) != 0) {
      operator_delete(local_190);
    }
    local_1b8 = (basic_string)0x2c;
    uStack_1a1 = 0;
    acStack_1af[0] = s_updateReferencedAssets_001d5900[8];
    acStack_1af[1] = s_updateReferencedAssets_001d5900[9];
    acStack_1af[2] = s_updateReferencedAssets_001d5900[10];
    acStack_1af[3] = s_updateReferencedAssets_001d5900[0xb];
    acStack_1af[4] = s_updateReferencedAssets_001d5900[0xc];
    acStack_1af[5] = s_updateReferencedAssets_001d5900[0xd];
    uStack_1b7 = (undefined7)s_updateReferencedAssets_001d5900._0_8_;
    cStack_1b0 = SUB81(s_updateReferencedAssets_001d5900._0_8_,7);
    cStack_1a9 = (char)s_updateReferencedAssets_001d5900._14_2_;
    cStack_1a8 = SUB21(s_updateReferencedAssets_001d5900._14_2_,1);
    acStack_1a7[0] = s_updateReferencedAssets_001d5900[0x10];
    acStack_1a7[1] = s_updateReferencedAssets_001d5900[0x11];
    acStack_1a7[2] = s_updateReferencedAssets_001d5900[0x12];
    acStack_1a7[3] = s_updateReferencedAssets_001d5900[0x13];
    acStack_1a7[4] = s_updateReferencedAssets_001d5900[0x14];
    acStack_1a7[5] = s_updateReferencedAssets_001d5900[0x15];
    lVar8 = FUN_002632b8(plVar12[8],plVar12[9],&local_1b8);
    if ((lVar8 != 0) || (lVar8 = FUN_002632b8(plVar12[0xd],plVar12[0xe],&local_1b8), lVar8 != 0)) {
      prVar7 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002674cc to 002674df has its CatchHandler @ 00268a4c */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1b8);
                    /* try { // try from 002674e0 to 002674f3 has its CatchHandler @ 002688a8 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002674f8 to 0026752f has its CatchHandler @ 00268884 */
      std::runtime_error::runtime_error(prVar7,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar7,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00268ad8;
    }
    lVar8 = FUN_002632b8(plVar12[3],plVar12[4],&local_1b8);
    if (lVar8 != 0) {
      prVar7 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00267b0c to 00267b1f has its CatchHandler @ 00268880 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1b8);
                    /* try { // try from 00267b20 to 00267b33 has its CatchHandler @ 002685a8 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 00267b38 to 00267b6f has its CatchHandler @ 0026857c */
      std::runtime_error::runtime_error(prVar7,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar7,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00268ad8;
    }
    plStack_108 = (long *)CONCAT17(cStack_1a9,CONCAT61(acStack_1af,cStack_1b0));
    local_110 = (undefined *)CONCAT71(uStack_1b7,local_1b8);
    local_100 = (long *)CONCAT17(uStack_1a1,CONCAT61(acStack_1a7,cStack_1a8));
    local_e8 = 0;
    plStack_f0 = _UNK_001d7f78;
    local_f8 = _DAT_001d7f70;
                    /* try { // try from 002668a8 to 002668af has its CatchHandler @ 002683ac */
    pplVar6 = (long **)operator_new(0x38);
    *pplVar6 = (long *)&PTR_FUN_0037c8e8;
    if (((ulong)local_110 & 1) == 0) {
      pplVar6[2] = plStack_108;
      *(undefined **)(pplVar6 + 1) = local_110;
      pplVar6[3] = local_100;
    }
    else {
                    /* try { // try from 002668e0 to 002668e3 has its CatchHandler @ 00267fb8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar6 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar6;
    pplVar6[5] = plStack_f0;
    pplVar6[4] = local_f8;
    *(undefined4 *)(pplVar6 + 6) = local_e8;
    if (((byte)local_110._0_1_ & 1) == 0) {
LAB_00266920:
      lVar8 = -0x40;
      local_c0 = local_70;
LAB_00266930:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar8) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar8 = -0x90;
        goto LAB_00266930;
      }
      if (local_70 != &local_90) goto LAB_00266920;
      local_c0 = &local_e0;
                    /* try { // try from 002672d4 to 002672df has its CatchHandler @ 00267d40 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_1b8 & 1) == 0) {
      uStack_a0 = CONCAT17(cStack_1a9,CONCAT61(acStack_1af,cStack_1b0));
      local_a8 = CONCAT71(uStack_1b7,local_1b8);
      local_98 = (long *)CONCAT17(uStack_1a1,CONCAT61(acStack_1a7,cStack_1a8));
    }
    else {
                    /* try { // try from 00266964 to 0026696b has its CatchHandler @ 00267f4c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)CONCAT17(uStack_1a1,CONCAT61(acStack_1a7,cStack_1a8)),
                 CONCAT17(cStack_1a9,CONCAT61(acStack_1af,cStack_1b0)));
    }
    if (local_70 == &local_90) {
      lVar8 = 4;
      pplVar6 = &local_90;
LAB_00266990:
      (*(code *)(*pplVar6)[lVar8])();
    }
    else if (local_70 != (long **)0x0) {
      lVar8 = 5;
      pplVar6 = local_70;
      goto LAB_00266990;
    }
                    /* try { // try from 0026699c to 002669af has its CatchHandler @ 0026839c */
    FUN_002634d4(plVar11,&local_1b8,&local_1b8,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar8 = 4;
      pplVar6 = &local_e0;
LAB_002669e4:
      (*(code *)(*pplVar6)[lVar8])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar8 = 5;
      pplVar6 = local_c0;
      goto LAB_002669e4;
    }
    if (((byte)local_1b8 & 1) != 0) {
      operator_delete((void *)CONCAT17(uStack_1a1,CONCAT61(acStack_1a7,cStack_1a8)));
    }
    local_1d0 = 0x2c;
    uStack_1b9 = 0;
    acStack_1c7[0] = s_getViewModelNamesAsync_001d57bf[8];
    acStack_1c7[1] = s_getViewModelNamesAsync_001d57bf[9];
    acStack_1c7[2] = s_getViewModelNamesAsync_001d57bf[10];
    acStack_1c7[3] = s_getViewModelNamesAsync_001d57bf[0xb];
    acStack_1c7[4] = s_getViewModelNamesAsync_001d57bf[0xc];
    acStack_1c7[5] = s_getViewModelNamesAsync_001d57bf[0xd];
    local_1cf[0] = s_getViewModelNamesAsync_001d57bf[0];
    local_1cf[1] = s_getViewModelNamesAsync_001d57bf[1];
    local_1cf[2] = s_getViewModelNamesAsync_001d57bf[2];
    local_1cf[3] = s_getViewModelNamesAsync_001d57bf[3];
    local_1cf[4] = s_getViewModelNamesAsync_001d57bf[4];
    local_1cf[5] = s_getViewModelNamesAsync_001d57bf[5];
    local_1cf[6] = s_getViewModelNamesAsync_001d57bf[6];
    local_1cf[7] = s_getViewModelNamesAsync_001d57bf[7];
    cStack_1c1 = (char)s_getViewModelNamesAsync_001d57bf._14_2_;
    cStack_1c0 = SUB21(s_getViewModelNamesAsync_001d57bf._14_2_,1);
    acStack_1bf[0] = s_getViewModelNamesAsync_001d57bf[0x10];
    acStack_1bf[1] = s_getViewModelNamesAsync_001d57bf[0x11];
    acStack_1bf[2] = s_getViewModelNamesAsync_001d57bf[0x12];
    acStack_1bf[3] = s_getViewModelNamesAsync_001d57bf[0x13];
    acStack_1bf[4] = s_getViewModelNamesAsync_001d57bf[0x14];
    acStack_1bf[5] = s_getViewModelNamesAsync_001d57bf[0x15];
                    /* try { // try from 00266a24 to 00266a37 has its CatchHandler @ 00268388 */
    FUN_00268adc(plVar12,&local_1d0,0x48,1);
    if ((local_1d0 & 1) != 0) {
      operator_delete((void *)CONCAT17(uStack_1b9,CONCAT61(acStack_1bf,cStack_1c0)));
    }
    local_1e8 = (basic_string)0x28;
    uStack_1d7 = 0x636e7973;
    uStack_1df = (undefined7)s_viewModelByNameAsync_001d4d16._8_8_;
    cStack_1d8 = SUB81(s_viewModelByNameAsync_001d4d16._8_8_,7);
    uStack_1e7 = (undefined7)s_viewModelByNameAsync_001d4d16._0_8_;
    cStack_1e0 = SUB81(s_viewModelByNameAsync_001d4d16._0_8_,7);
    uStack_1d3 = 0;
    lVar8 = FUN_002632b8(plVar12[8],plVar12[9],&local_1e8);
    if ((lVar8 != 0) || (lVar8 = FUN_002632b8(plVar12[0xd],plVar12[0xe],&local_1e8), lVar8 != 0)) {
      prVar7 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00267540 to 00267553 has its CatchHandler @ 00268a30 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1e8);
                    /* try { // try from 00267554 to 00267567 has its CatchHandler @ 00268868 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 0026756c to 002675a3 has its CatchHandler @ 00268844 */
      std::runtime_error::runtime_error(prVar7,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar7,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00268ad8;
    }
    lVar8 = FUN_002632b8(plVar12[3],plVar12[4],&local_1e8);
    if (lVar8 != 0) {
      prVar7 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00267b7c to 00267b8f has its CatchHandler @ 00268840 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1e8);
                    /* try { // try from 00267b90 to 00267ba3 has its CatchHandler @ 00268578 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 00267ba8 to 00267bdf has its CatchHandler @ 0026854c */
      std::runtime_error::runtime_error(prVar7,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar7,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00268ad8;
    }
    plStack_108 = (long *)CONCAT71(uStack_1df,cStack_1e0);
    local_110 = (undefined *)CONCAT71(uStack_1e7,local_1e8);
    local_100 = (long *)CONCAT26(uStack_1d2,CONCAT15(uStack_1d3,CONCAT41(uStack_1d7,cStack_1d8)));
    local_e8 = 0;
    plStack_f0 = _UNK_001d80c8;
    local_f8 = _DAT_001d80c0;
                    /* try { // try from 00266ac0 to 00266ac7 has its CatchHandler @ 00268370 */
    pplVar6 = (long **)operator_new(0x38);
    *pplVar6 = (long *)&PTR_FUN_0037cc78;
    if (((ulong)local_110 & 1) == 0) {
      pplVar6[2] = plStack_108;
      *(undefined **)(pplVar6 + 1) = local_110;
      pplVar6[3] = local_100;
    }
    else {
                    /* try { // try from 00266af8 to 00266afb has its CatchHandler @ 00267f3c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar6 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar6;
    pplVar6[5] = plStack_f0;
    pplVar6[4] = local_f8;
    *(undefined4 *)(pplVar6 + 6) = local_e8;
    if (((byte)local_110._0_1_ & 1) == 0) {
LAB_00266b38:
      lVar8 = -0x40;
      local_c0 = local_70;
LAB_00266b48:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar8) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar8 = -0x90;
        goto LAB_00266b48;
      }
      if (local_70 != &local_90) goto LAB_00266b38;
      local_c0 = &local_e0;
                    /* try { // try from 002672f4 to 002672ff has its CatchHandler @ 00267d3c */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 2;
    if (((byte)local_1e8 & 1) == 0) {
      uStack_a0 = CONCAT71(uStack_1df,cStack_1e0);
      local_a8 = CONCAT71(uStack_1e7,local_1e8);
      local_98 = (long *)CONCAT26(uStack_1d2,CONCAT15(uStack_1d3,CONCAT41(uStack_1d7,cStack_1d8)));
    }
    else {
                    /* try { // try from 00266b7c to 00266b83 has its CatchHandler @ 00267ed0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,
                 (char *)CONCAT26(uStack_1d2,CONCAT15(uStack_1d3,CONCAT41(uStack_1d7,cStack_1d8))),
                 CONCAT71(uStack_1df,cStack_1e0));
    }
    if (local_70 == &local_90) {
      lVar8 = 4;
      pplVar6 = &local_90;
LAB_00266ba8:
      (*(code *)(*pplVar6)[lVar8])();
    }
    else if (local_70 != (long **)0x0) {
      lVar8 = 5;
      pplVar6 = local_70;
      goto LAB_00266ba8;
    }
                    /* try { // try from 00266bb4 to 00266bc7 has its CatchHandler @ 00268360 */
    FUN_002634d4(plVar11,&local_1e8,&local_1e8,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar8 = 4;
      pplVar6 = &local_e0;
LAB_00266bfc:
      (*(code *)(*pplVar6)[lVar8])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar8 = 5;
      pplVar6 = local_c0;
      goto LAB_00266bfc;
    }
    if (((byte)local_1e8 & 1) != 0) {
      operator_delete((void *)CONCAT26(uStack_1d2,
                                       CONCAT15(uStack_1d3,CONCAT41(uStack_1d7,cStack_1d8))));
    }
    plVar9 = (long *)operator_new(0x20);
    uStack_1f8 = _UNK_001d80d8;
    local_200 = _DAT_001d80d0;
    uVar4 = s_defaultArtboardViewModelAsync_001d5561._21_8_;
    uVar3 = s_defaultArtboardViewModelAsync_001d5561._0_8_;
    uVar2 = CONCAT53(s_defaultArtboardViewModelAsync_001d5561._16_5_,
                     s_defaultArtboardViewModelAsync_001d5561._13_3_);
    plVar9[1] = CONCAT35(s_defaultArtboardViewModelAsync_001d5561._13_3_,
                         s_defaultArtboardViewModelAsync_001d5561._8_5_);
    *plVar9 = uVar3;
    *(undefined8 *)((long)plVar9 + 0x15) = uVar4;
    *(undefined8 *)((long)plVar9 + 0xd) = uVar2;
    *(undefined1 *)((long)plVar9 + 0x1d) = 0;
    local_1f0 = plVar9;
    lVar8 = FUN_002632b8(plVar12[8],plVar12[9],&local_200);
    if ((lVar8 != 0) || (lVar8 = FUN_002632b8(plVar12[0xd],plVar12[0xe],&local_200), lVar8 != 0)) {
      prVar7 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002675b4 to 002675c7 has its CatchHandler @ 00268a18 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",(basic_string *)&local_200);
                    /* try { // try from 002675c8 to 002675db has its CatchHandler @ 00268828 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002675e0 to 00267617 has its CatchHandler @ 00268804 */
      std::runtime_error::runtime_error(prVar7,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar7,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00268ad8;
    }
    lVar8 = FUN_002632b8(plVar12[3],plVar12[4],&local_200);
    if (lVar8 != 0) {
      prVar7 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00267bec to 00267bff has its CatchHandler @ 00268800 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",(basic_string *)&local_200);
                    /* try { // try from 00267c00 to 00267c13 has its CatchHandler @ 00268548 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 00267c18 to 00267c4f has its CatchHandler @ 0026851c */
      std::runtime_error::runtime_error(prVar7,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar7,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00268ad8;
    }
                    /* try { // try from 00266c84 to 00266c93 has its CatchHandler @ 00268358 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_110,(char *)plVar9,0x1d);
    local_e8 = 0;
    plStack_f0 = _UNK_001d80e8;
    local_f8 = _DAT_001d80e0;
                    /* try { // try from 00266ca4 to 00266cab has its CatchHandler @ 00268340 */
    pplVar6 = (long **)operator_new(0x38);
    *pplVar6 = (long *)&PTR_FUN_0037cf88;
    if (((ulong)local_110 & 1) == 0) {
      pplVar6[2] = plStack_108;
      *(undefined **)(pplVar6 + 1) = local_110;
      pplVar6[3] = local_100;
    }
    else {
                    /* try { // try from 00266cdc to 00266cdf has its CatchHandler @ 00267ec0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar6 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar6;
    pplVar6[5] = plStack_f0;
    pplVar6[4] = local_f8;
    *(undefined4 *)(pplVar6 + 6) = local_e8;
    if (((byte)local_110._0_1_ & 1) == 0) {
LAB_00266d18:
      lVar8 = -0x40;
      local_c0 = local_70;
LAB_00266d28:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar8) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar8 = -0x90;
        goto LAB_00266d28;
      }
      if (local_70 != &local_90) goto LAB_00266d18;
      local_c0 = &local_e0;
                    /* try { // try from 00267314 to 0026731f has its CatchHandler @ 00267d38 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if ((local_200 & 1) == 0) {
      uStack_a0 = uStack_1f8;
      local_a8 = local_200;
      local_98 = local_1f0;
    }
    else {
                    /* try { // try from 00266d5c to 00266d63 has its CatchHandler @ 00267e54 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_1f0,uStack_1f8);
    }
    if (local_70 == &local_90) {
      lVar8 = 4;
      pplVar6 = &local_90;
LAB_00266d88:
      (*(code *)(*pplVar6)[lVar8])();
    }
    else if (local_70 != (long **)0x0) {
      lVar8 = 5;
      pplVar6 = local_70;
      goto LAB_00266d88;
    }
                    /* try { // try from 00266d94 to 00266da7 has its CatchHandler @ 00268330 */
    FUN_002634d4(plVar11,&local_200,&local_200,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar8 = 4;
      pplVar6 = &local_e0;
LAB_00266ddc:
      (*(code *)(*pplVar6)[lVar8])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar8 = 5;
      pplVar6 = local_c0;
      goto LAB_00266ddc;
    }
    if ((local_200 & 1) != 0) {
      operator_delete(local_1f0);
    }
    local_218 = (basic_string)0x2a;
    uStack_202 = 0;
    acStack_20f[0] = s_getArtboardCountAsync_001d7446[8];
    acStack_20f[1] = s_getArtboardCountAsync_001d7446[9];
    acStack_20f[2] = s_getArtboardCountAsync_001d7446[10];
    acStack_20f[3] = s_getArtboardCountAsync_001d7446[0xb];
    acStack_20f[4] = s_getArtboardCountAsync_001d7446[0xc];
    uStack_217 = (undefined7)s_getArtboardCountAsync_001d7446._0_8_;
    cStack_210 = SUB81(s_getArtboardCountAsync_001d7446._0_8_,7);
    uStack_20a = (undefined2)s_getArtboardCountAsync_001d7446._13_3_;
    cStack_208 = SUB31(s_getArtboardCountAsync_001d7446._13_3_,2);
    acStack_207[0] = s_getArtboardCountAsync_001d7446[0x10];
    acStack_207[1] = s_getArtboardCountAsync_001d7446[0x11];
    acStack_207[2] = s_getArtboardCountAsync_001d7446[0x12];
    acStack_207[3] = s_getArtboardCountAsync_001d7446[0x13];
    acStack_207[4] = s_getArtboardCountAsync_001d7446[0x14];
    lVar8 = FUN_002632b8(plVar12[8],plVar12[9],&local_218);
    if ((lVar8 != 0) || (lVar8 = FUN_002632b8(plVar12[0xd],plVar12[0xe],&local_218), lVar8 != 0)) {
      prVar7 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00267628 to 0026763b has its CatchHandler @ 002689fc */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_218);
                    /* try { // try from 0026763c to 0026764f has its CatchHandler @ 002687e8 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 00267654 to 0026768b has its CatchHandler @ 002687c4 */
      std::runtime_error::runtime_error(prVar7,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar7,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00268ad8;
    }
    lVar8 = FUN_002632b8(plVar12[3],plVar12[4],&local_218);
    if (lVar8 != 0) {
      prVar7 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00267c5c to 00267c6f has its CatchHandler @ 002687c0 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_218);
                    /* try { // try from 00267c70 to 00267c83 has its CatchHandler @ 00268518 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 00267c88 to 00267cbf has its CatchHandler @ 002684ec */
      std::runtime_error::runtime_error(prVar7,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar7,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00268ad8;
    }
    plStack_108 = (long *)CONCAT26(uStack_20a,CONCAT51(acStack_20f,cStack_210));
    local_110 = (undefined *)CONCAT71(uStack_217,local_218);
    local_100 = (long *)CONCAT17(uStack_201,CONCAT16(uStack_202,CONCAT51(acStack_207,cStack_208)));
    local_e8 = 0;
    plStack_f0 = _UNK_001d7f88;
    local_f8 = _DAT_001d7f80;
                    /* try { // try from 00266e6c to 00266e73 has its CatchHandler @ 00268318 */
    pplVar6 = (long **)operator_new(0x38);
    *pplVar6 = (long *)&PTR_FUN_0037d008;
    if (((ulong)local_110 & 1) == 0) {
      pplVar6[2] = plStack_108;
      *(undefined **)(pplVar6 + 1) = local_110;
      pplVar6[3] = local_100;
    }
    else {
                    /* try { // try from 00266ea4 to 00266ea7 has its CatchHandler @ 00267e44 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar6 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar6;
    pplVar6[5] = plStack_f0;
    pplVar6[4] = local_f8;
    *(undefined4 *)(pplVar6 + 6) = local_e8;
    if (((byte)local_110._0_1_ & 1) == 0) {
LAB_00266ee4:
      lVar8 = -0x40;
      local_c0 = local_70;
LAB_00266ef4:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar8) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar8 = -0x90;
        goto LAB_00266ef4;
      }
      if (local_70 != &local_90) goto LAB_00266ee4;
      local_c0 = &local_e0;
                    /* try { // try from 00267334 to 0026733f has its CatchHandler @ 00267d34 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 0;
    if (((byte)local_218 & 1) == 0) {
      uStack_a0 = CONCAT26(uStack_20a,CONCAT51(acStack_20f,cStack_210));
      local_a8 = CONCAT71(uStack_217,local_218);
      local_98 = (long *)CONCAT17(uStack_201,CONCAT16(uStack_202,CONCAT51(acStack_207,cStack_208)));
    }
    else {
                    /* try { // try from 00266f24 to 00266f2b has its CatchHandler @ 00267dd8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,
                 (char *)CONCAT17(uStack_201,CONCAT16(uStack_202,CONCAT51(acStack_207,cStack_208))),
                 CONCAT26(uStack_20a,CONCAT51(acStack_20f,cStack_210)));
    }
    if (local_70 == &local_90) {
      lVar8 = 4;
      pplVar6 = &local_90;
LAB_00266f50:
      (*(code *)(*pplVar6)[lVar8])();
    }
    else if (local_70 != (long **)0x0) {
      lVar8 = 5;
      pplVar6 = local_70;
      goto LAB_00266f50;
    }
                    /* try { // try from 00266f5c to 00266f6f has its CatchHandler @ 00268308 */
    FUN_002634d4(plVar11,&local_218,&local_218,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar8 = 4;
      pplVar6 = &local_e0;
LAB_00266fa4:
      (*(code *)(*pplVar6)[lVar8])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar8 = 5;
      pplVar6 = local_c0;
      goto LAB_00266fa4;
    }
    if (((byte)local_218 & 1) != 0) {
      operator_delete((void *)CONCAT17(uStack_201,
                                       CONCAT16(uStack_202,CONCAT51(acStack_207,cStack_208))));
    }
    local_230 = 0x2a;
    uStack_21a = 0;
    acStack_227[0] = s_getArtboardNamesAsync_001d6dbd[8];
    acStack_227[1] = s_getArtboardNamesAsync_001d6dbd[9];
    acStack_227[2] = s_getArtboardNamesAsync_001d6dbd[10];
    acStack_227[3] = s_getArtboardNamesAsync_001d6dbd[0xb];
    acStack_227[4] = s_getArtboardNamesAsync_001d6dbd[0xc];
    local_22f[0] = s_getArtboardNamesAsync_001d6dbd[0];
    local_22f[1] = s_getArtboardNamesAsync_001d6dbd[1];
    local_22f[2] = s_getArtboardNamesAsync_001d6dbd[2];
    local_22f[3] = s_getArtboardNamesAsync_001d6dbd[3];
    local_22f[4] = s_getArtboardNamesAsync_001d6dbd[4];
    local_22f[5] = s_getArtboardNamesAsync_001d6dbd[5];
    local_22f[6] = s_getArtboardNamesAsync_001d6dbd[6];
    local_22f[7] = s_getArtboardNamesAsync_001d6dbd[7];
    uStack_222 = (undefined2)s_getArtboardNamesAsync_001d6dbd._13_3_;
    cStack_220 = SUB31(s_getArtboardNamesAsync_001d6dbd._13_3_,2);
    acStack_21f[0] = s_getArtboardNamesAsync_001d6dbd[0x10];
    acStack_21f[1] = s_getArtboardNamesAsync_001d6dbd[0x11];
    acStack_21f[2] = s_getArtboardNamesAsync_001d6dbd[0x12];
    acStack_21f[3] = s_getArtboardNamesAsync_001d6dbd[0x13];
    acStack_21f[4] = s_getArtboardNamesAsync_001d6dbd[0x14];
                    /* try { // try from 00266fe4 to 00266ff7 has its CatchHandler @ 002682f4 */
    FUN_00268adc(plVar12,&local_230,0x68,1);
    if ((local_230 & 1) != 0) {
      operator_delete((void *)CONCAT17(uStack_219,
                                       CONCAT16(uStack_21a,CONCAT51(acStack_21f,cStack_220))));
    }
    local_248 = (basic_string)0x26;
    uStack_23f = (undefined7)s_getBindableArtboard_001d4c43._8_8_;
    uStack_238 = CONCAT31(0x647261,SUB81(s_getBindableArtboard_001d4c43._8_8_,7));
    uStack_247 = (undefined7)s_getBindableArtboard_001d4c43._0_8_;
    cStack_240 = SUB81(s_getBindableArtboard_001d4c43._0_8_,7);
    uStack_234 = uStack_234 & 0xffffff00;
    lVar8 = FUN_002632b8(plVar12[8],plVar12[9],&local_248);
    if ((lVar8 != 0) || (lVar8 = FUN_002632b8(plVar12[0xd],plVar12[0xe],&local_248), lVar8 != 0)) {
      prVar7 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0026769c to 002676af has its CatchHandler @ 002689e0 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_248);
                    /* try { // try from 002676b0 to 002676c3 has its CatchHandler @ 002687a8 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002676c8 to 002676ff has its CatchHandler @ 00268784 */
      std::runtime_error::runtime_error(prVar7,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar7,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00268ad8;
    }
    lVar8 = FUN_002632b8(plVar12[3],plVar12[4],&local_248);
    if (lVar8 != 0) {
      prVar7 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00267ccc to 00267cdf has its CatchHandler @ 00268780 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_248);
                    /* try { // try from 00267ce0 to 00267cf3 has its CatchHandler @ 002684e8 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 00267cf8 to 00267d2f has its CatchHandler @ 002684bc */
      std::runtime_error::runtime_error(prVar7,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar7,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00268ad8;
    }
    plStack_108 = (long *)CONCAT71(uStack_23f,cStack_240);
    local_110 = (undefined *)CONCAT71(uStack_247,local_248);
    local_100 = (long *)CONCAT44(uStack_234,uStack_238);
    local_e8 = 0;
    plStack_f0 = _UNK_001d7fe8;
    local_f8 = _DAT_001d7fe0;
                    /* try { // try from 00267080 to 00267087 has its CatchHandler @ 002682dc */
    pplVar6 = (long **)operator_new(0x38);
    *pplVar6 = (long *)&PTR_FUN_0037d088;
    if (((ulong)local_110 & 1) == 0) {
      pplVar6[2] = plStack_108;
      *(undefined **)(pplVar6 + 1) = local_110;
      pplVar6[3] = local_100;
    }
    else {
                    /* try { // try from 002670b8 to 002670bb has its CatchHandler @ 00267dc8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar6 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar6;
    pplVar6[5] = plStack_f0;
    pplVar6[4] = local_f8;
    *(undefined4 *)(pplVar6 + 6) = local_e8;
    if (((byte)local_110._0_1_ & 1) == 0) {
LAB_002670f8:
      lVar8 = -0x40;
      local_c0 = local_70;
LAB_00267108:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar8) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar8 = -0x90;
        goto LAB_00267108;
      }
      if (local_70 != &local_90) goto LAB_002670f8;
      local_c0 = &local_e0;
                    /* try { // try from 00267354 to 0026735f has its CatchHandler @ 00267d30 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_248 & 1) == 0) {
      uStack_a0 = CONCAT71(uStack_23f,cStack_240);
      local_a8 = CONCAT71(uStack_247,local_248);
      local_98 = (long *)CONCAT44(uStack_234,uStack_238);
    }
    else {
                    /* try { // try from 0026713c to 00267143 has its CatchHandler @ 00267d5c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)CONCAT44(uStack_234,uStack_238),CONCAT71(uStack_23f,cStack_240));
    }
    if (local_70 == &local_90) {
      lVar8 = 4;
      pplVar6 = &local_90;
LAB_00267168:
      (*(code *)(*pplVar6)[lVar8])();
    }
    else if (local_70 != (long **)0x0) {
      lVar8 = 5;
      pplVar6 = local_70;
      goto LAB_00267168;
    }
                    /* try { // try from 00267174 to 00267187 has its CatchHandler @ 002682cc */
    FUN_002634d4(plVar11,&local_248,&local_248,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar8 = 4;
      pplVar6 = &local_e0;
LAB_002671bc:
      (*(code *)(*pplVar6)[lVar8])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar8 = 5;
      pplVar6 = local_c0;
      goto LAB_002671bc;
    }
    if (((byte)local_248 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_234,uStack_238));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_00268ad8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00268adc  FUN_00268adc =====

void FUN_00268adc(long param_1,basic_string *param_2,long param_3,long param_4)

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
  lVar2 = FUN_002632b8(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),param_2);
  if ((lVar2 != 0) ||
     (lVar2 = FUN_002632b8(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),param_2),
     lVar2 != 0)) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00268d10 to 00268d23 has its CatchHandler @ 00268f00 */
    std::__ndk1::operator+("Cannot add Hybrid Method \"",param_2);
                    /* try { // try from 00268d24 to 00268d37 has its CatchHandler @ 00268ee8 */
    FUN_00263450(local_d0,local_80,"\" - a property with that name already exists!");
                    /* try { // try from 00268d3c to 00268d73 has its CatchHandler @ 00268ec4 */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_00268f24;
  }
  lVar2 = FUN_002632b8(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),param_2);
  if (lVar2 != 0) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00268d84 to 00268d97 has its CatchHandler @ 00268ec0 */
    std::__ndk1::operator+("Cannot add Hybrid Method \"",param_2);
                    /* try { // try from 00268d98 to 00268dab has its CatchHandler @ 00268ebc */
    FUN_00263450(local_d0,local_80,"\" - a method with that name already exists!");
                    /* try { // try from 00268db0 to 00268de7 has its CatchHandler @ 00268e90 */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_00268f24;
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
  local_d8 = 0;
  local_e8 = param_3;
  lStack_e0 = param_4;
                    /* try { // try from 00268b78 to 00268b7f has its CatchHandler @ 00268e78 */
  local_60 = (basic_string *)operator_new(0x38);
  *(undefined ***)local_60 = &PTR_FUN_0037c968;
  if ((local_100 & 1) == 0) {
    *(ulong *)(local_60 + 0x10) = uStack_f8;
    *(ulong *)(local_60 + 8) = local_100;
    *(char **)(local_60 + 0x18) = local_f0;
  }
  else {
                    /* try { // try from 00268bb0 to 00268bb3 has its CatchHandler @ 00268e58 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (local_60 + 8),local_f0,uStack_f8);
  }
  *(long *)(local_60 + 0x28) = lStack_e0;
  *(long *)(local_60 + 0x20) = local_e8;
  *(undefined4 *)(local_60 + 0x30) = local_d8;
  if (((byte)local_100._0_1_ & 1) == 0) {
LAB_00268bf0:
    pbVar3 = (basic_string *)local_80;
    local_b0 = local_60;
LAB_00268c00:
    *(long *)(pbVar3 + 0x20) = 0;
  }
  else {
    operator_delete(local_f0);
    if (local_60 == (basic_string *)0x0) {
      pbVar3 = local_d0;
      goto LAB_00268c00;
    }
    if (local_60 != (basic_string *)local_80) goto LAB_00268bf0;
    local_b0 = local_d0;
                    /* try { // try from 00268cf4 to 00268cff has its CatchHandler @ 00268de8 */
    (**(code **)(local_80[0] + 0x18))(local_80,local_d0);
  }
  local_a0 = 0;
  if (((byte)*param_2 & 1) == 0) {
    uStack_90 = *(undefined8 *)(param_2 + 8);
    local_98 = *(ulong *)param_2;
    local_88 = *(void **)(param_2 + 0x10);
  }
  else {
                    /* try { // try from 00268c30 to 00268c37 has its CatchHandler @ 00268dec */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_98,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  if (local_60 == (basic_string *)local_80) {
    lVar2 = 4;
    pbVar3 = (basic_string *)local_80;
LAB_00268c5c:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_60 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_60;
    goto LAB_00268c5c;
  }
                    /* try { // try from 00268c68 to 00268c7b has its CatchHandler @ 00268e68 */
  FUN_002634d4((undefined8 *)(param_1 + 0x18),param_2,param_2,local_d0);
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (local_b0 == local_d0) {
    lVar2 = 4;
    pbVar3 = local_d0;
LAB_00268cb0:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_b0 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_b0;
    goto LAB_00268cb0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00268f24:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00268f28  FUN_00268f28 =====

void FUN_00268f28(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037d088;
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


// ===== 00268f94  FUN_00268f94 =====

void FUN_00268f94(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037d088;
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


// ===== 00268ffc  FUN_00268ffc =====

undefined8 * FUN_00268ffc(long param_1)

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
  *puVar4 = &PTR_FUN_0037d088;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 0026905c to 0026905f has its CatchHandler @ 00269098 */
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


// ===== 002690c0  FUN_002690c0 =====

void FUN_002690c0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037d088;
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


// ===== 00269158  FUN_00269158 =====

void FUN_00269158(long param_1)

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


// ===== 002691b8  FUN_002691b8 =====

void FUN_002691b8(void *param_1)

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


// ===== 00269214  FUN_00269214 =====

void FUN_00269214(long param_1,long *param_2,long param_3,undefined8 *param_4,ulong *param_5)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  JSError *pJVar7;
  long *plVar8;
  ulong uVar9;
  IRuntime *pIVar10;
  code *pcVar11;
  long *local_140;
  long *local_138;
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  basic_string local_80;
  undefined7 uStack_7f;
  long *plStack_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pIVar10 = (IRuntime *)*param_4;
  uVar9 = *param_5;
  local_98[0] = (undefined8 *)(**(code **)(*param_2 + 0x88))(param_2,*(undefined8 *)(param_3 + 8));
                    /* try { // try from 00269274 to 00269283 has its CatchHandler @ 0026965c */
  (**(code **)(*param_2 + 0x160))(&local_80,param_2,local_98);
  if ((CONCAT71(uStack_7f,local_80) == 0) ||
     (lVar5 = __dynamic_cast(CONCAT71(uStack_7f,local_80),PTR_typeinfo_00394860,
                             PTR_typeinfo_00394870,0xffffffffffffffff), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002692fc;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x002692fc;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar8 = plStack_78;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002692fc:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 == 1) {
    pcVar11 = *(code **)(param_1 + 0x20);
    uVar9 = *(ulong *)(param_1 + 0x28);
    if (((*PTR_defaultValue_00394b08 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_00394b08), puVar3 = PTR_defaultValue_00394b00,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_00394b00 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00394b08);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
                    /* try { // try from 00269338 to 00269347 has its CatchHandler @ 00269650 */
    facebook::jsi::Value::asString(pIVar10);
                    /* try { // try from 00269350 to 0026935f has its CatchHandler @ 0026962c */
    (**(code **)(*param_2 + 0x120))(&local_80,param_2,local_98);
    if (local_98[0] != (undefined8 *)0x0) {
      (**(code **)*local_98[0])();
    }
                    /* try { // try from 00269374 to 00269383 has its CatchHandler @ 00269610 */
    (*pcVar11)(&local_140,plVar1,&local_80);
    if (((byte)local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if (local_140 == (long *)0x0) {
                    /* try { // try from 0026953c to 0026954f has its CatchHandler @ 00269878 */
      FUN_00264e5c(&local_80,PTR_typeinfo_name_003947f0,0);
      pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0026955c to 0026956f has its CatchHandler @ 0026982c */
      std::__ndk1::operator+("Cannot convert `nullptr` to NativeState<",&local_80);
                    /* try { // try from 00269570 to 00269583 has its CatchHandler @ 002697f8 */
      FUN_00263450(local_98,auStack_b0,&DAT_001d795b);
                    /* try { // try from 00269588 to 002695c3 has its CatchHandler @ 002697c0 */
      facebook::jsi::JSError::JSError(pJVar7,param_2,local_98);
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
      }
    }
    else {
                    /* try { // try from 002693a4 to 002693b3 has its CatchHandler @ 00269878 */
      margelo::nitro::HybridObject::toObject
                ((Runtime *)((long)local_140 + *(long *)(*local_140 + -0x20)));
      if ((local_138 != (long *)0x0) &&
         (lVar5 = FUN_00255510(0xffffffffffffffff,local_138 + 1), lVar5 == 0)) {
        (**(code **)(*local_138 + 0x10))(local_138);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      if ((plVar8 != (long *)0x0) &&
         (lVar5 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar5 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return;
      }
    }
  }
  else {
                    /* try { // try from 00269454 to 00269463 has its CatchHandler @ 00269870 */
    FUN_00269c28(&local_80,*(undefined4 *)(param_1 + 0x30),param_1 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00269470 to 00269483 has its CatchHandler @ 00269850 */
    std::__ndk1::operator+("`",&local_80);
                    /* try { // try from 00269484 to 00269497 has its CatchHandler @ 00269814 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 00269498 to 002694a3 has its CatchHandler @ 00269790 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002694a4 to 002694b3 has its CatchHandler @ 0026976c */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002694b4 to 002694c7 has its CatchHandler @ 00269748 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002694c8 to 002694d3 has its CatchHandler @ 00269724 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002694d4 to 002694e3 has its CatchHandler @ 00269700 */
    FUN_00264adc(auStack_b0,auStack_c8,&local_140);
                    /* try { // try from 002694e4 to 002694f7 has its CatchHandler @ 002696dc */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002694fc to 00269537 has its CatchHandler @ 0026967c */
    facebook::jsi::JSError::JSError(pJVar7,param_2,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00269b98  FUN_00269b98 =====

void FUN_00269b98(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394b10) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00269be8  FUN_00269be8 =====

undefined * FUN_00269be8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394b18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00269c28  FUN_00269c28 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00269c28(undefined8 *param_1,int param_2,byte *param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  void *pvVar4;
  byte *pbVar5;
  long lVar6;
  undefined *puVar7;
  byte bVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong local_a0;
  ulong local_98;
  undefined8 *local_90;
  byte local_88 [8];
  size_t local_80;
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  undefined8 *local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  if (param_4 == 0) {
    local_60 = (undefined8 *)operator_new(0x30);
    puVar7 = PTR_typeinfo_name_00394868;
    uStack_68 = _UNK_001d7f98;
    local_70 = _DAT_001d7f90;
    *(undefined1 *)((long)local_60 + 0x29) = 0;
    uVar13 = *(undefined8 *)puVar7;
    uVar15 = *(undefined8 *)(puVar7 + 0x18);
    uVar14 = *(undefined8 *)(puVar7 + 0x10);
    uVar12 = *(undefined8 *)(puVar7 + 0x21);
    uVar10 = *(undefined8 *)(puVar7 + 0x19);
    local_60[1] = *(undefined8 *)(puVar7 + 8);
    *local_60 = uVar13;
    local_60[3] = uVar15;
    local_60[2] = uVar14;
    *(undefined8 *)((long)local_60 + 0x21) = uVar12;
    *(undefined8 *)((long)local_60 + 0x19) = uVar10;
                    /* try { // try from 00269cac to 00269cbb has its CatchHandler @ 00269f4c */
    margelo::nitro::TypeInfo::demangleName((basic_string *)&local_70,true);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
  else {
    margelo::nitro::HybridObject::getName();
  }
  bVar8 = local_88[0];
  if (param_2 == 0) {
    sVar3 = (ulong)(local_88[0] >> 1);
    if ((local_88[0] & 1) != 0) {
      sVar3 = local_80;
    }
    uVar1 = sVar3 + 1;
    if (0xffffffffffffffef < uVar1) goto LAB_00269f0c;
    if (uVar1 < 0x17) {
      local_98 = 0;
      puVar11 = (undefined8 *)((ulong)&local_a0 | 1);
      local_90 = (undefined8 *)0x0;
      local_a0 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_00269e10;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 00269df8 to 00269dff has its CatchHandler @ 00269f60 */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_a0 = uVar2 | 1;
      local_98 = uVar1;
      local_90 = puVar11;
LAB_00269e10:
      pvVar4 = (void *)((ulong)local_88 | 1);
      if ((bVar8 & 1) != 0) {
        pvVar4 = local_78;
      }
      memmove(puVar11,pvVar4,sVar3);
    }
    *(undefined2 *)((long)puVar11 + sVar3) = 0x2e;
    pbVar5 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar5 = param_3 + 1;
    }
                    /* try { // try from 00269e50 to 00269e57 has its CatchHandler @ 00269f38 */
    puVar9 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_a0,(ulong)pbVar5);
    local_60 = (undefined8 *)puVar9[2];
    uStack_68 = puVar9[1];
    local_70 = *puVar9;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
                    /* try { // try from 00269e70 to 00269e83 has its CatchHandler @ 00269f20 */
    puVar11 = (undefined8 *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_70,0x1d6185);
    uVar10 = puVar11[2];
    uVar13 = puVar11[1];
    uVar12 = *puVar11;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    param_1[1] = uVar13;
    *param_1 = uVar12;
    param_1[2] = uVar10;
    puVar11 = local_90;
    uVar1 = local_a0;
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
      puVar11 = local_90;
      uVar1 = local_a0;
    }
  }
  else {
    sVar3 = (ulong)(local_88[0] >> 1);
    if ((local_88[0] & 1) != 0) {
      sVar3 = local_80;
    }
    uVar1 = sVar3 + 1;
    if (0xffffffffffffffef < uVar1) {
      if (*(long *)(lVar6 + 0x28) != local_58) goto LAB_00269fa8;
                    /* try { // try from 00269f08 to 00269f0b has its CatchHandler @ 00269f7c */
      FUN_00260a84();
LAB_00269f0c:
      if (*(long *)(lVar6 + 0x28) == local_58) {
                    /* try { // try from 00269f1c to 00269f1f has its CatchHandler @ 00269f60 */
        uVar10 = FUN_00260a84();
                    /* catch() { ... } // from try @ 00269e70 with catch @ 00269f20 */
        if ((local_70 & 1) != 0) {
          operator_delete(local_60);
        }
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
        if ((local_88[0] & 1) != 0) {
          operator_delete(local_78);
        }
        if (*(long *)(lVar6 + 0x28) == local_58) {
          FUN_00255d34(uVar10);
        }
      }
      goto LAB_00269fa8;
    }
    if (uVar1 < 0x17) {
      uStack_68 = 0;
      puVar11 = (undefined8 *)((ulong)&local_70 | 1);
      local_60 = (undefined8 *)0x0;
      local_70 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_00269d80;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 00269d68 to 00269d6f has its CatchHandler @ 00269f7c */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_70 = uVar2 | 1;
      uStack_68 = uVar1;
      local_60 = puVar11;
LAB_00269d80:
      pvVar4 = (void *)((ulong)local_88 | 1);
      if ((bVar8 & 1) != 0) {
        pvVar4 = local_78;
      }
      memmove(puVar11,pvVar4,sVar3);
    }
    *(undefined2 *)((long)puVar11 + sVar3) = 0x2e;
    pbVar5 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar5 = param_3 + 1;
    }
                    /* try { // try from 00269dc0 to 00269dc7 has its CatchHandler @ 00269f64 */
    puVar11 = (undefined8 *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_70,(ulong)pbVar5);
    uVar10 = puVar11[2];
    uVar13 = puVar11[1];
    uVar12 = *puVar11;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    param_1[1] = uVar13;
    *param_1 = uVar12;
    param_1[2] = uVar10;
    puVar11 = local_60;
    uVar1 = local_70;
  }
  if ((uVar1 & 1) != 0) {
    operator_delete(puVar11);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
LAB_00269fa8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00269fac  FUN_00269fac =====

void FUN_00269fac(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 0026a038  FUN_0026a038 =====

void FUN_0026a038(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037d008;
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


// ===== 0026a0a4  FUN_0026a0a4 =====

void FUN_0026a0a4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037d008;
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


// ===== 0026a10c  FUN_0026a10c =====

undefined8 * FUN_0026a10c(long param_1)

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
  *puVar4 = &PTR_FUN_0037d008;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 0026a16c to 0026a16f has its CatchHandler @ 0026a1a8 */
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


// ===== 0026a1d0  FUN_0026a1d0 =====

void FUN_0026a1d0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037d008;
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


// ===== 0026a268  FUN_0026a268 =====

void FUN_0026a268(long param_1)

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


// ===== 0026a2c8  FUN_0026a2c8 =====

void FUN_0026a2c8(void *param_1)

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


// ===== 0026a324  FUN_0026a324 =====

void FUN_0026a324(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  JSError *pJVar6;
  long *plVar7;
  ulong uVar8;
  code *pcVar9;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 local_110;
  long *local_108;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  long local_80;
  long *plStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar8 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 0026a380 to 0026a38f has its CatchHandler @ 0026a930 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00394870,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x0026a408;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x0026a408;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x0026a408:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveFileSpecENSt6__ndk110shared_ptrINS0_7PromiseIdEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394aa0
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveFileSpecENSt6__ndk110shared_ptrINS0_7PromiseIdEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394aa0
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveFileSpecENSt6__ndk110shared_ptrINS0_7PromiseIdEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394a98
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveFileSpecENSt6__ndk110shared_ptrINS0_7PromiseIdEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394a98
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveFileSpecENSt6__ndk110shared_ptrINS0_7PromiseIdEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394aa0
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 0026a440 to 0026a447 has its CatchHandler @ 0026a638 */
    (*pcVar9)(&local_110);
                    /* try { // try from 0026a44c to 0026a457 has its CatchHandler @ 0026a620 */
    FUN_0026ab84(param_1,param_3,local_110,local_108);
    if ((local_108 != (long *)0x0) &&
       (lVar4 = FUN_00255510(0xffffffffffffffff,local_108 + 1), lVar4 == 0)) {
      (**(code **)(*local_108 + 0x10))(local_108);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if ((plVar7 != (long *)0x0) && (lVar4 = FUN_00255510(0xffffffffffffffff,plVar7 + 1), lVar4 == 0)
       ) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 0026a4f8 to 0026a507 has its CatchHandler @ 0026aacc */
    FUN_00269c28(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0026a514 to 0026a527 has its CatchHandler @ 0026aaac */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 0026a528 to 0026a53b has its CatchHandler @ 0026aa94 */
    FUN_00263450(auStack_f8,&local_110,"` expected ");
                    /* try { // try from 0026a53c to 0026a547 has its CatchHandler @ 0026aa64 */
    std::__ndk1::to_string(0);
                    /* try { // try from 0026a548 to 0026a557 has its CatchHandler @ 0026aa40 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 0026a558 to 0026a56b has its CatchHandler @ 0026aa1c */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 0026a56c to 0026a577 has its CatchHandler @ 0026a9f8 */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 0026a578 to 0026a587 has its CatchHandler @ 0026a9d4 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 0026a588 to 0026a59b has its CatchHandler @ 0026a9b0 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 0026a5a0 to 0026a5db has its CatchHandler @ 0026a950 */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026aaf4  FUN_0026aaf4 =====

void FUN_0026aaf4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394af0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0026ab44  FUN_0026ab44 =====

undefined * FUN_0026ab44(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394af8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026ab84  FUN_0026ab84 =====

void FUN_0026ab84(undefined8 param_1,Runtime *param_2,long *param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined ***pppuVar4;
  runtime_error *this;
  undefined1 auStack_b0 [24];
  basic_string abStack_98 [24];
  undefined **local_80;
  long *local_78;
  long *local_70;
  undefined ***local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar1 = (int)param_3[1];
  if (iVar1 == 2) {
    FUN_0026aee4(&local_80,param_2);
                    /* try { // try from 0026ac64 to 0026ac73 has its CatchHandler @ 0026ae2c */
    margelo::nitro::CommonGlobals::Promise::rejected(param_2,(Value *)&local_80);
LAB_0026ac74:
    facebook::jsi::Value::~Value((Value *)&local_80);
  }
  else {
    if (iVar1 == 1) {
      local_78 = (long *)*param_3;
      local_80 = (undefined **)CONCAT44(local_80._4_4_,3);
                    /* try { // try from 0026ac44 to 0026ac53 has its CatchHandler @ 0026ae30 */
      margelo::nitro::CommonGlobals::Promise::resolved(param_2,(Value *)&local_80);
      goto LAB_0026ac74;
    }
    if (iVar1 != 0) {
      FUN_00264e5c(&local_80,*(undefined8 *)(PTR_typeinfo_00394b48 + 8),1);
      this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0026ad24 to 0026ad37 has its CatchHandler @ 0026add4 */
      std::__ndk1::operator+("Promise<",(basic_string *)&local_80);
                    /* try { // try from 0026ad38 to 0026ad4b has its CatchHandler @ 0026adbc */
      FUN_00263450(abStack_98,auStack_b0,"> has invalid state!");
                    /* try { // try from 0026ad50 to 0026ad87 has its CatchHandler @ 0026ad88 */
      std::runtime_error::runtime_error(this,abStack_98);
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0026ae54;
    }
    local_78 = param_3;
    if (param_4 == (long *)0x0) {
      local_70 = (long *)0x0;
      local_80 = &PTR_FUN_00384960;
      local_60 = &local_80;
    }
    else {
      FUN_00259a00(1,param_4 + 1);
      local_80 = &PTR_FUN_00384960;
      local_70 = param_4;
      FUN_00259a00(1,param_4 + 1);
      local_60 = &local_80;
      lVar3 = FUN_00255510(0xffffffffffffffff,param_4 + 1);
      if (lVar3 == 0) {
        (**(code **)(*param_4 + 0x10))(param_4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
                    /* try { // try from 0026ac98 to 0026acab has its CatchHandler @ 0026adf4 */
    margelo::nitro::CommonGlobals::Promise::callConstructor(param_2,(function *)&local_80);
    if (local_60 == &local_80) {
      lVar3 = 4;
      pppuVar4 = &local_80;
LAB_0026accc:
      (*(code *)(*pppuVar4)[lVar3])();
    }
    else if (local_60 != (undefined ***)0x0) {
      lVar3 = 5;
      pppuVar4 = local_60;
      goto LAB_0026accc;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_0026ae54:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026ae58  FUN_0026ae58 =====

void FUN_0026ae58(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 0026aee4  FUN_0026aee4 =====

void FUN_0026aee4(undefined8 param_1,undefined8 param_2,exception_ptr *param_3)

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
    if (*(long *)(lVar1 + 0x28) != local_68) goto LAB_0026b220;
                    /* try { // try from 0026af4c to 0026af53 has its CatchHandler @ 0026afb8 */
    std::rethrow_exception(aeStack_88);
  }
  this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0026af60 to 0026af6b has its CatchHandler @ 0026af94 */
  std::runtime_error::runtime_error(this,"Cannot convert a nullptr exception_ptr to a JS Error!");
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
  }
LAB_0026b220:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026b2ec  FUN_0026b2ec =====

void FUN_0026b2ec(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00384960;
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
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


// ===== 0026b384  FUN_0026b384 =====

void FUN_0026b384(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00384960;
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
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


// ===== 0026b410  FUN_0026b410 =====

void FUN_0026b410(long param_1)

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
  *puVar4 = &PTR_FUN_00384960;
  puVar4[1] = uVar1;
  puVar4[2] = lVar2;
  if (lVar2 != 0) {
    FUN_00259a00(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


// ===== 0026b488  FUN_0026b488 =====

void FUN_0026b488(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00384960;
  param_2[1] = uVar1;
  param_2[2] = lVar2;
  if (lVar2 != 0) {
    FUN_00259a00(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026b4ec  FUN_0026b4ec =====

void FUN_0026b4ec(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x10);
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
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


// ===== 0026b578  FUN_0026b578 =====

void FUN_0026b578(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)((long)param_1 + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
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


// ===== 0026b5f8  FUN_0026b5f8 =====

void FUN_0026b5f8(undefined4 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long **pplVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  void *pvVar15;
  long local_130 [4];
  long *local_110 [2];
  long local_100 [4];
  long *local_e0 [2];
  long local_d0 [4];
  long *local_b0 [2];
  long local_a0 [4];
  long *local_80 [2];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  lVar12 = *param_5;
  FUN_0026be64(local_a0,param_3,lVar12);
  lVar13 = *(long *)(param_2 + 8);
  if (local_80[0] == (long *)0x0) {
    pplVar10 = local_e0;
LAB_0026b66c:
    *pplVar10 = (long *)0x0;
  }
  else {
    if (local_80[0] != local_a0) {
      pplVar10 = local_80;
      local_e0[0] = local_80[0];
      goto LAB_0026b66c;
    }
    local_e0[0] = local_100;
                    /* try { // try from 0026b684 to 0026b68f has its CatchHandler @ 0026bc84 */
    (**(code **)(local_a0[0] + 0x18))(local_a0,local_100);
  }
  plVar7 = local_e0[0];
  local_b0[0] = (long *)0x0;
  if (local_e0[0] != (long *)0x0) {
                    /* try { // try from 0026b69c to 0026b6a3 has its CatchHandler @ 0026bc90 */
    plVar4 = (long *)operator_new(0x40);
    *plVar4 = (long)&PTR_FUN_00384b30;
    if (plVar7 == local_100) {
      plVar4[6] = (long)(plVar4 + 2);
                    /* try { // try from 0026b6d8 to 0026b6e7 has its CatchHandler @ 0026bc80 */
      (**(code **)(local_100[0] + 0x18))(local_100);
      local_b0[0] = plVar4;
    }
    else {
      plVar4[6] = (long)plVar7;
      local_e0[0] = (long *)0x0;
      local_b0[0] = plVar4;
    }
  }
                    /* try { // try from 0026b6ec to 0026b6f3 has its CatchHandler @ 0026bca0 */
  std::__ndk1::mutex::lock();
  if (*(int *)(lVar13 + 8) == 1) {
    if (local_b0[0] != (long *)0x0) {
                    /* try { // try from 0026b718 to 0026b7c7 has its CatchHandler @ 0026bd18 */
      (**(code **)(*local_b0[0] + 0x30))(local_b0[0],lVar13);
LAB_0026b958:
      std::__ndk1::mutex::unlock();
      if (local_b0[0] == local_d0) {
        lVar13 = 4;
        plVar7 = local_d0;
LAB_0026b984:
        (**(code **)(*plVar7 + lVar13 * 8))();
      }
      else if (local_b0[0] != (long *)0x0) {
        lVar13 = 5;
        plVar7 = local_b0[0];
        goto LAB_0026b984;
      }
      if (local_e0[0] == local_100) {
        lVar13 = 4;
        plVar7 = local_100;
LAB_0026b9b4:
        (**(code **)(*plVar7 + lVar13 * 8))();
      }
      else if (local_e0[0] != (long *)0x0) {
        lVar13 = 5;
        plVar7 = local_e0[0];
        goto LAB_0026b9b4;
      }
      if (local_80[0] == local_a0) {
        lVar13 = 4;
        plVar7 = local_a0;
LAB_0026b9e4:
        (**(code **)(*plVar7 + lVar13 * 8))();
      }
      else if (local_80[0] != (long *)0x0) {
        lVar13 = 5;
        plVar7 = local_80[0];
        goto LAB_0026b9e4;
      }
      FUN_0026c2bc(local_a0,param_3,lVar12 + 0x10);
      lVar12 = *(long *)(param_2 + 8);
      if (local_80[0] == (long *)0x0) {
        pplVar10 = local_110;
LAB_0026ba2c:
        *pplVar10 = (long *)0x0;
      }
      else {
        if (local_80[0] != local_a0) {
          pplVar10 = local_80;
          local_110[0] = local_80[0];
          goto LAB_0026ba2c;
        }
        local_110[0] = local_130;
                    /* try { // try from 0026ba44 to 0026ba4f has its CatchHandler @ 0026bc7c */
        (**(code **)(local_a0[0] + 0x18))(local_a0,local_130);
      }
      plVar7 = local_110[0];
      local_b0[0] = (long *)0x0;
      if (local_110[0] != (long *)0x0) {
                    /* try { // try from 0026ba5c to 0026ba63 has its CatchHandler @ 0026bc88 */
        plVar4 = (long *)operator_new(0x40);
        *plVar4 = (long)&PTR_FUN_00384d40;
        if (plVar7 == local_130) {
          plVar4[6] = (long)(plVar4 + 2);
                    /* try { // try from 0026ba98 to 0026baa7 has its CatchHandler @ 0026bc78 */
          (**(code **)(local_130[0] + 0x18))(local_130);
          local_b0[0] = plVar4;
        }
        else {
          plVar4[6] = (long)plVar7;
          local_110[0] = (long *)0x0;
          local_b0[0] = plVar4;
        }
      }
                    /* try { // try from 0026baac to 0026bab3 has its CatchHandler @ 0026bc98 */
      std::__ndk1::mutex::lock();
      if (*(int *)(lVar12 + 8) == 2) {
        if (local_b0[0] == (long *)0x0) goto LAB_0026bc30;
                    /* try { // try from 0026bad0 to 0026bb13 has its CatchHandler @ 0026bcac */
        (**(code **)(*local_b0[0] + 0x30))(local_b0[0],lVar12);
      }
      else {
        uVar2 = *(ulong *)(lVar12 + 0x30);
        if (uVar2 < *(ulong *)(lVar12 + 0x38)) {
          if (local_b0[0] == (long *)0x0) {
            pplVar10 = (long **)(uVar2 + 0x20);
LAB_0026bb1c:
            *pplVar10 = (long *)0x0;
          }
          else {
            if (local_b0[0] != local_d0) {
              pplVar10 = local_b0;
              *(long **)(uVar2 + 0x20) = local_b0[0];
              goto LAB_0026bb1c;
            }
            *(ulong *)(uVar2 + 0x20) = uVar2;
                    /* try { // try from 0026bb34 to 0026bb3b has its CatchHandler @ 0026bc6c */
            (**(code **)(*local_b0[0] + 0x18))(local_b0[0],uVar2);
          }
          lVar13 = uVar2 + 0x30;
        }
        else {
          lVar13 = FUN_0026c714(lVar12 + 0x28,local_d0);
        }
        *(long *)(lVar12 + 0x30) = lVar13;
      }
      std::__ndk1::mutex::unlock();
      if (local_b0[0] == local_d0) {
        lVar12 = 4;
        plVar7 = local_d0;
LAB_0026bb70:
        (**(code **)(*plVar7 + lVar12 * 8))();
      }
      else if (local_b0[0] != (long *)0x0) {
        lVar12 = 5;
        plVar7 = local_b0[0];
        goto LAB_0026bb70;
      }
      if (local_110[0] == local_130) {
        lVar12 = 4;
        plVar7 = local_130;
LAB_0026bba0:
        (**(code **)(*plVar7 + lVar12 * 8))();
      }
      else if (local_110[0] != (long *)0x0) {
        lVar12 = 5;
        plVar7 = local_110[0];
        goto LAB_0026bba0;
      }
      *param_1 = 0;
      if (local_80[0] == local_a0) {
        lVar12 = 4;
        local_80[0] = local_a0;
LAB_0026bbd4:
        (**(code **)(*local_80[0] + lVar12 * 8))();
      }
      else if (local_80[0] != (long *)0x0) {
        lVar12 = 5;
        goto LAB_0026bbd4;
      }
      if (*(long *)(lVar3 + 0x28) == local_70) {
        return;
      }
      goto LAB_0026bdd0;
    }
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_0026bdd0;
                    /* try { // try from 0026bc2c to 0026bc2f has its CatchHandler @ 0026bd18 */
    FUN_0025cd00();
LAB_0026bc30:
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_0026bdd0;
                    /* try { // try from 0026bc40 to 0026bc43 has its CatchHandler @ 0026bcac */
    FUN_0025cd00();
LAB_0026bc44:
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_0026bdd0;
                    /* try { // try from 0026bc54 to 0026bc6b has its CatchHandler @ 0026bd18 */
    FUN_0026e244();
  }
  else {
    plVar7 = *(long **)(lVar13 + 0x18);
    pplVar10 = local_b0;
    if (plVar7 < *(long **)(lVar13 + 0x20)) {
      if (local_b0[0] == (long *)0x0) {
        pplVar10 = (long **)(plVar7 + 4);
LAB_0026b7d4:
        *pplVar10 = (long *)0x0;
      }
      else {
        if (local_b0[0] != local_d0) {
          plVar7[4] = (long)local_b0[0];
          goto LAB_0026b7d4;
        }
        plVar7[4] = (long)plVar7;
                    /* try { // try from 0026b824 to 0026b82b has its CatchHandler @ 0026bc74 */
        (**(code **)(*local_b0[0] + 0x18))(local_b0[0],plVar7);
      }
      plVar4 = plVar7 + 6;
LAB_0026b954:
      *(long **)(lVar13 + 0x18) = plVar4;
      goto LAB_0026b958;
    }
    plVar14 = *(long **)(lVar13 + 0x10);
    lVar9 = (long)plVar7 - (long)plVar14 >> 4;
    uVar2 = lVar9 * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar2) goto LAB_0026bc44;
    lVar8 = (long)*(long **)(lVar13 + 0x20) - (long)plVar14 >> 4;
    uVar11 = lVar8 * 0x5555555555555556;
    if (uVar11 < uVar2 || uVar11 - uVar2 == 0) {
      uVar11 = uVar2;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar11 = 0x555555555555555;
    }
    if (uVar11 == 0) {
      pvVar5 = (void *)0x0;
LAB_0026b7e0:
      pvVar15 = (void *)((long)pvVar5 + lVar9 * 0x10);
      if (local_b0[0] == (long *)0x0) {
        pplVar10 = (long **)((long)pvVar15 + 0x20);
LAB_0026b80c:
        *pplVar10 = (long *)0x0;
      }
      else {
        if (local_b0[0] != local_d0) {
          *(long **)((long)pvVar15 + 0x20) = local_b0[0];
          goto LAB_0026b80c;
        }
        *(void **)((long)pvVar15 + 0x20) = pvVar15;
                    /* try { // try from 0026b848 to 0026b853 has its CatchHandler @ 0026bc70 */
        (**(code **)(local_d0[0] + 0x18))(local_d0,pvVar15);
        plVar14 = *(long **)(lVar13 + 0x10);
        plVar7 = *(long **)(lVar13 + 0x18);
      }
      pvVar5 = (void *)((long)pvVar5 + uVar11 * 0x30);
      plVar4 = (long *)((long)pvVar15 + 0x30);
      if (plVar7 == plVar14) {
        *(void **)(lVar13 + 0x10) = pvVar15;
        *(long **)(lVar13 + 0x18) = plVar4;
        *(void **)(lVar13 + 0x20) = pvVar5;
      }
      else {
        lVar9 = 0;
        plVar6 = plVar7;
        do {
          plVar1 = (long *)((long)pvVar15 + lVar9);
          lVar8 = *(long *)((long)plVar7 + lVar9 + -0x10);
          if (lVar8 == 0) {
LAB_0026b884:
            plVar1[-2] = 0;
          }
          else {
            if ((long)plVar7 + lVar9 + -0x30 != lVar8) {
              plVar1[-2] = lVar8;
              plVar1 = plVar6;
              goto LAB_0026b884;
            }
            plVar1[-2] = (long)(plVar1 + -6);
                    /* try { // try from 0026b8d8 to 0026b8db has its CatchHandler @ 0026bca8 */
            (**(code **)(**(long **)((long)plVar7 + lVar9 + -0x10) + 0x18))();
          }
          lVar9 = lVar9 + -0x30;
          plVar6 = plVar6 + -6;
        } while ((long *)((long)plVar7 + lVar9) != plVar14);
        plVar14 = *(long **)(lVar13 + 0x10);
        plVar7 = *(long **)(lVar13 + 0x18);
        *(long *)(lVar13 + 0x10) = (long)pvVar15 + lVar9;
        *(long **)(lVar13 + 0x18) = plVar4;
        *(void **)(lVar13 + 0x20) = pvVar5;
joined_r0x0026b8f4:
        if (plVar7 != plVar14) {
          plVar6 = (long *)plVar7[-2];
          plVar7 = plVar7 + -6;
          if (plVar7 != plVar6) goto code_r0x0026b930;
          lVar9 = 4;
          plVar6 = plVar7;
          goto LAB_0026b908;
        }
      }
      if (plVar14 != (long *)0x0) {
        operator_delete(plVar14);
      }
      goto LAB_0026b954;
    }
    if (uVar11 < 0x555555555555556) {
      pvVar5 = operator_new(uVar11 * 0x30);
      goto LAB_0026b7e0;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    FUN_00260a2c();
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0026bb34 with catch @ 0026bc6c */
    FUN_0025ad9c();
  }
LAB_0026bdd0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0026b930:
  if (plVar6 != (long *)0x0) {
    lVar9 = 5;
LAB_0026b908:
    (**(code **)(*plVar6 + lVar9 * 8))();
  }
  goto joined_r0x0026b8f4;
}


// ===== 0026bdd4  FUN_0026bdd4 =====

void FUN_0026bdd4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394ae0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0026be24  FUN_0026be24 =====

undefined * FUN_0026be24(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394ae8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026be64  FUN_0026be64 =====

void FUN_0026be64(long param_1,Runtime *param_2,IRuntime *param_3)

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
                    /* try { // try from 0026bea0 to 0026beaf has its CatchHandler @ 0026c29c */
  facebook::jsi::Object::asFunction((IRuntime *)&local_98);
  if (local_98 != (Runtime *)0x0) {
    (*(code *)**(undefined8 **)local_98)();
  }
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
                    /* try { // try from 0026bec8 to 0026bed3 has its CatchHandler @ 0026c260 */
  margelo::nitro::JSICache::getOrCreateCache(param_2);
                    /* try { // try from 0026bed8 to 0026bee3 has its CatchHandler @ 0026c250 */
  FUN_0026ce4c(&local_80,local_98,&local_60);
                    /* try { // try from 0026bee4 to 0026beef has its CatchHandler @ 0026c240 */
  FUN_0026d090(&local_70,&local_80);
  if (local_78 != (long *)0x0) {
    uVar6 = FUN_00255510(0xffffffffffffffff);
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
        goto LAB_0026bf50;
      }
      lVar8 = *local_78;
      plVar2 = local_78;
    }
    else {
LAB_0026bf50:
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
     (lVar8 = FUN_00255510(0xffffffffffffffff,local_90 + 1), lVar8 == 0)) {
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
                    /* try { // try from 0026bfd0 to 0026bfdb has its CatchHandler @ 0026c230 */
  margelo::nitro::Dispatcher::getRuntimeGlobalDispatcher(param_2);
  plVar3 = local_78;
  plVar2 = local_80;
  if (local_78 != (long *)0x0) {
    FUN_00259a00(1,local_78 + 2);
  }
  local_90 = (long *)0x0;
  local_88 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    FUN_00259a00(1,plVar3 + 2);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* try { // try from 0026c014 to 0026c01b has its CatchHandler @ 0026c20c */
  puVar7 = (undefined8 *)operator_new(0x30);
  puVar7[2] = plVar4;
  puVar7[3] = plVar5;
  *puVar7 = &PTR_FUN_00384a10;
  puVar7[1] = param_2;
  puVar7[4] = plVar2;
  puVar7[5] = plVar3;
  *(undefined8 **)(param_1 + 0x20) = puVar7;
  if (((plVar3 != (long *)0x0) &&
      (std::__ndk1::__shared_weak_count::__release_weak(), local_78 != (long *)0x0)) &&
     (lVar8 = FUN_00255510(0xffffffffffffffff,local_78 + 1), lVar8 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (local_88 != (long *)0x0) {
    uVar6 = FUN_00255510(0xffffffffffffffff);
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
        goto LAB_0026c0dc;
      }
      lVar8 = *local_88;
      plVar2 = local_88;
    }
    else {
LAB_0026c0dc:
      lVar8 = *local_88;
      plVar2 = local_88;
    }
    local_88 = plVar2;
    if (((lVar8 == 0) && (plVar2[1] == 0)) && (plVar2 != (long *)0x0)) {
      std::__ndk1::mutex::~mutex((mutex *)((long)plVar2 + 0x14));
      operator_delete(plVar2);
    }
  }
  if (local_68 == (long *)0x0) goto LAB_0026c19c;
  uVar6 = FUN_00255510(0xffffffffffffffff);
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
      goto LAB_0026c16c;
    }
    lVar8 = *local_68;
    plVar2 = local_68;
  }
  else {
LAB_0026c16c:
    lVar8 = *local_68;
    plVar2 = local_68;
  }
  local_68 = plVar2;
  if (((lVar8 == 0) && (plVar2[1] == 0)) && (plVar2 != (long *)0x0)) {
    std::__ndk1::mutex::~mutex((mutex *)((long)plVar2 + 0x14));
    operator_delete(plVar2);
  }
LAB_0026c19c:
  if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)();
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026c2bc  FUN_0026c2bc =====

void FUN_0026c2bc(long param_1,Runtime *param_2,IRuntime *param_3)

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
                    /* try { // try from 0026c2f8 to 0026c307 has its CatchHandler @ 0026c6f4 */
  facebook::jsi::Object::asFunction((IRuntime *)&local_98);
  if (local_98 != (Runtime *)0x0) {
    (*(code *)**(undefined8 **)local_98)();
  }
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
                    /* try { // try from 0026c320 to 0026c32b has its CatchHandler @ 0026c6b8 */
  margelo::nitro::JSICache::getOrCreateCache(param_2);
                    /* try { // try from 0026c330 to 0026c33b has its CatchHandler @ 0026c6a8 */
  FUN_0026ce4c(&local_80,local_98,&local_60);
                    /* try { // try from 0026c33c to 0026c347 has its CatchHandler @ 0026c698 */
  FUN_0026d090(&local_70,&local_80);
  if (local_78 != (long *)0x0) {
    uVar6 = FUN_00255510(0xffffffffffffffff);
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
        goto LAB_0026c3a8;
      }
      lVar8 = *local_78;
      plVar2 = local_78;
    }
    else {
LAB_0026c3a8:
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
     (lVar8 = FUN_00255510(0xffffffffffffffff,local_90 + 1), lVar8 == 0)) {
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
                    /* try { // try from 0026c428 to 0026c433 has its CatchHandler @ 0026c688 */
  margelo::nitro::Dispatcher::getRuntimeGlobalDispatcher(param_2);
  plVar3 = local_78;
  plVar2 = local_80;
  if (local_78 != (long *)0x0) {
    FUN_00259a00(1,local_78 + 2);
  }
  local_90 = (long *)0x0;
  local_88 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    FUN_00259a00(1,plVar3 + 2);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* try { // try from 0026c46c to 0026c473 has its CatchHandler @ 0026c664 */
  puVar7 = (undefined8 *)operator_new(0x30);
  puVar7[2] = plVar4;
  puVar7[3] = plVar5;
  *puVar7 = &PTR_FUN_00384c20;
  puVar7[1] = param_2;
  puVar7[4] = plVar2;
  puVar7[5] = plVar3;
  *(undefined8 **)(param_1 + 0x20) = puVar7;
  if (((plVar3 != (long *)0x0) &&
      (std::__ndk1::__shared_weak_count::__release_weak(), local_78 != (long *)0x0)) &&
     (lVar8 = FUN_00255510(0xffffffffffffffff,local_78 + 1), lVar8 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (local_88 != (long *)0x0) {
    uVar6 = FUN_00255510(0xffffffffffffffff);
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
        goto LAB_0026c534;
      }
      lVar8 = *local_88;
      plVar2 = local_88;
    }
    else {
LAB_0026c534:
      lVar8 = *local_88;
      plVar2 = local_88;
    }
    local_88 = plVar2;
    if (((lVar8 == 0) && (plVar2[1] == 0)) && (plVar2 != (long *)0x0)) {
      std::__ndk1::mutex::~mutex((mutex *)((long)plVar2 + 0x14));
      operator_delete(plVar2);
    }
  }
  if (local_68 == (long *)0x0) goto LAB_0026c5f4;
  uVar6 = FUN_00255510(0xffffffffffffffff);
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
      goto LAB_0026c5c4;
    }
    lVar8 = *local_68;
    plVar2 = local_68;
  }
  else {
LAB_0026c5c4:
    lVar8 = *local_68;
    plVar2 = local_68;
  }
  local_68 = plVar2;
  if (((lVar8 == 0) && (plVar2[1] == 0)) && (plVar2 != (long *)0x0)) {
    std::__ndk1::mutex::~mutex((mutex *)((long)plVar2 + 0x14));
    operator_delete(plVar2);
  }
LAB_0026c5f4:
  if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)();
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026c714  FUN_0026c714 =====

long FUN_0026c714(long *param_1,long *param_2)

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
    if (*(long *)(lVar4 + 0x28) != lVar7) goto LAB_0026c94c;
    FUN_0026c958();
LAB_0026c938:
    if (*(long *)(lVar4 + 0x28) == lVar7) {
      FUN_00260a2c();
    }
    goto LAB_0026c94c;
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
    if (0x555555555555555 < uVar15) goto LAB_0026c938;
    pvVar5 = operator_new(uVar15 * 0x30);
  }
  pvVar16 = (void *)((long)pvVar5 + lVar8 * 0x10);
  plVar9 = param_2 + 4;
  plVar11 = (long *)*plVar9;
  if (plVar11 == (long *)0x0) {
    plVar9 = (long *)((long)pvVar16 + 0x20);
LAB_0026c7ec:
    *plVar9 = 0;
  }
  else {
    if (plVar11 != param_2) {
      *(long **)((long)pvVar16 + 0x20) = plVar11;
      goto LAB_0026c7ec;
    }
    lVar10 = *param_2;
    *(void **)((long)pvVar16 + 0x20) = pvVar16;
                    /* try { // try from 0026c800 to 0026c80b has its CatchHandler @ 0026c950 */
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
LAB_0026c82c:
        *(undefined8 *)(lVar3 + -0x10) = 0;
      }
      else {
        if (lVar2 + -0x30 != lVar13) {
          *(long *)(lVar3 + -0x10) = lVar13;
          lVar3 = lVar8;
          goto LAB_0026c82c;
        }
        *(long *)(lVar3 + -0x10) = lVar3 + -0x30;
                    /* try { // try from 0026c880 to 0026c883 has its CatchHandler @ 0026c954 */
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
joined_r0x0026c8a4:
  if (plVar11 != plVar9) {
    plVar6 = (long *)plVar11[-2];
    plVar11 = plVar11 + -6;
    if (plVar11 != plVar6) goto code_r0x0026c918;
    lVar10 = 4;
    plVar6 = plVar11;
    goto LAB_0026c8f0;
  }
  if (plVar9 != (long *)0x0) {
    operator_delete(plVar9);
  }
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return (long)pvVar16 + 0x30;
  }
LAB_0026c94c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0026c918:
  if (plVar6 != (long *)0x0) {
    lVar10 = 5;
LAB_0026c8f0:
    (**(code **)(*plVar6 + lVar10 * 8))();
  }
  goto joined_r0x0026c8a4;
}


// ===== 0026c958  FUN_0026c958 =====

void FUN_0026c958(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_00260abc("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026c990  FUN_0026c990 =====

void FUN_0026c990(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_00384d40;
  if (plVar2 == plVar3) {
    lVar4 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == lVar5) {
        return;
      }
      goto LAB_0026ca1c;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x0026c9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_0026ca1c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026ca20  FUN_0026ca20 =====

void FUN_0026ca20(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_00384d40;
  if (plVar2 == plVar3) {
    lVar5 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_0026ca7c;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_0026ca7c:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026caa4  FUN_0026caa4 =====

undefined8 * FUN_0026caa4(long param_1)

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
  *puVar2 = &PTR_FUN_00384d40;
  if (plVar3 != (long *)0x0) {
    if (plVar3 == (long *)(param_1 + 0x10)) {
      lVar5 = *plVar3;
      puVar2[6] = puVar2 + 2;
      (**(code **)(lVar5 + 0x18))();
      goto LAB_0026cb1c;
    }
                    /* try { // try from 0026cb00 to 0026cb1b has its CatchHandler @ 0026cb44 */
    plVar3 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  puVar2[6] = plVar3;
LAB_0026cb1c:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026cb6c  FUN_0026cb6c =====

void FUN_0026cb6c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_00384d40;
  if (plVar4 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar4 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
      if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x0026cc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
        return;
      }
      goto LAB_0026cc18;
    }
    uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
    param_2[6] = uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
LAB_0026cc18:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026cc1c  FUN_0026cc1c =====

void FUN_0026cc1c(long param_1)

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
      goto LAB_0026cc9c;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0026cc7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_0026cc9c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026cca0  FUN_0026cca0 =====

void FUN_0026cca0(void *param_1)

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
    if (plVar2 == (long *)0x0) goto LAB_0026ccf0;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_0026ccf0:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026cd18  FUN_0026cd18 =====

void FUN_0026cd18(long param_1,exception_ptr *param_2)

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
      uVar3 = FUN_0025cd00();
                    /* catch() { ... } // from try @ 0026cd50 with catch @ 0026cd94 */
      std::exception_ptr::~exception_ptr(aeStack_30);
      if (*(long *)(lVar1 + 0x28) == local_28) {
        FUN_00255d34(uVar3);
      }
    }
  }
  else {
                    /* try { // try from 0026cd50 to 0026cd93 has its CatchHandler @ 0026cd94 */
    (**(code **)(*plVar2 + 0x30))(plVar2,aeStack_30);
    std::exception_ptr::~exception_ptr(aeStack_30);
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026cdbc  FUN_0026cdbc =====

void FUN_0026cdbc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003949d0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0026ce0c  FUN_0026ce0c =====

undefined * FUN_0026ce0c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003949d8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026ce4c  FUN_0026ce4c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0026ce4c(undefined8 *param_1,long param_2,undefined8 *param_3)

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
  uVar5 = _UNK_001d8078;
  uVar8 = _DAT_001d8070;
  *(undefined8 *)((long)puStack_68 + 0x34) = 0;
  param_1[1] = puStack_68;
  puStack_68[1] = uVar5;
  *puStack_68 = uVar8;
  *(undefined8 *)((long)puStack_68 + 0x1c) = 0;
  *(undefined8 *)((long)puStack_68 + 0x14) = 0;
  *(undefined8 *)((long)puStack_68 + 0x2c) = 0;
  *(undefined8 *)((long)puStack_68 + 0x24) = 0;
  local_70 = puVar6;
  FUN_00255510(1,puStack_68 + 1);
  puVar6 = *(undefined8 **)(param_2 + 0x68);
  if (puVar6 < *(undefined8 **)(param_2 + 0x70)) {
    puVar6[1] = puStack_68;
    *puVar6 = local_70;
    *(undefined8 **)(param_2 + 0x68) = puVar6 + 2;
LAB_0026cfd4:
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
                    /* try { // try from 0026cf38 to 0026cf3b has its CatchHandler @ 0026d05c */
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
              FUN_00255510(1,lVar14 + 8);
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
              FUN_00255510(0xffffffffffffffff,*plVar1 + 8);
                    /* try { // try from 0026d024 to 0026d02b has its CatchHandler @ 0026d08c */
              FUN_0026df7c(puVar16);
            }
          }
        }
        if (puVar6 != (undefined8 *)0x0) {
          operator_delete(puVar6);
        }
        *(undefined8 **)(param_2 + 0x68) = puVar15;
        if (puStack_68 != (undefined8 *)0x0) {
          FUN_00255510(0xffffffffffffffff,puStack_68 + 1);
                    /* try { // try from 0026cfcc to 0026cfd3 has its CatchHandler @ 0026d058 */
          FUN_0026df7c(&local_70);
        }
        goto LAB_0026cfd4;
      }
    }
    else {
      if (*(long *)(lVar4 + 0x28) != local_58) goto LAB_0026d088;
                    /* try { // try from 0026d040 to 0026d057 has its CatchHandler @ 0026d05c */
      FUN_0026e20c();
    }
    if (*(long *)(lVar4 + 0x28) == local_58) {
      FUN_00260a2c();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0026cfcc with catch @ 0026d058
                        */
      FUN_0025ad9c();
    }
  }
LAB_0026d088:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026d090  FUN_0026d090 =====

undefined8 * FUN_0026d090(undefined8 *param_1,undefined8 *param_2)

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
      uVar3 = FUN_00255510(0xffffffffffffffff);
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
      FUN_00255510(1);
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026d198  FUN_0026d198 =====

void FUN_0026d198(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (param_1[1] != 0) {
    uVar2 = FUN_00255510(0xffffffffffffffff);
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


// ===== 0026d27c  FUN_0026d27c =====

void FUN_0026d27c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  std::__ndk1::mutex::unlock();
  plVar4 = *(long **)(param_1 + 8);
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
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


// ===== 0026d318  FUN_0026d318 =====

void FUN_0026d318(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026d36c  FUN_0026d36c =====

void FUN_0026d36c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 0026d3f8  FUN_0026d3f8 =====

void FUN_0026d3f8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00384c20;
  if (param_1[5] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026d458  FUN_0026d458 =====

void FUN_0026d458(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00384c20;
  if (param_1[5] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0026d198(param_1 + 2);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026d4c0  FUN_0026d4c0 =====

undefined8 * FUN_0026d4c0(long param_1)

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
  *puVar2 = &PTR_FUN_00384c20;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = lVar3;
  if (lVar3 != 0) {
    FUN_00255510(1);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = lVar3;
  if (lVar3 != 0) {
    FUN_00259a00(1,lVar3 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026d55c  FUN_0026d55c =====

void FUN_0026d55c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00384c20;
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[2] = uVar4;
  param_2[3] = lVar2;
  if (lVar2 != 0) {
    FUN_00255510(1);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = lVar2;
  if (lVar2 != 0) {
    FUN_00259a00(1,lVar2 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026d5f0  FUN_0026d5f0 =====

void FUN_0026d5f0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x28) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026d644  FUN_0026d644 =====

void FUN_0026d644(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)((long)param_1 + 0x28) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0026d198((long)param_1 + 0x10);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026d6a0  FUN_0026d6a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0026d6a0(long param_1,exception_ptr *param_2)

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
LAB_0026d79c:
                    /* try { // try from 0026d79c to 0026d7a3 has its CatchHandler @ 0026d99c */
    local_70 = (undefined8 *)operator_new(0x40);
    puVar2 = PTR_typeinfo_name_003949a8;
    uStack_78 = _UNK_001d7fa8;
    local_80 = _DAT_001d7fa0;
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
                    /* try { // try from 0026d7d8 to 0026d7e7 has its CatchHandler @ 0026d984 */
    margelo::nitro::TypeInfo::demangleName((basic_string *)&local_80,true);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    if (plVar3 == (long *)0x0) goto LAB_0026d8fc;
  }
  else {
    plVar3 = (long *)std::__ndk1::__shared_weak_count::lock();
    if ((plVar3 == (long *)0x0) || (plVar8 = *(long **)(param_1 + 0x20), plVar8 == (long *)0x0))
    goto LAB_0026d79c;
    plStack_98 = *(long **)(param_1 + 0x10);
    local_a0 = *(ulong *)(param_1 + 8);
    local_90 = *(long **)(param_1 + 0x18);
    if (local_90 != (long *)0x0) {
      FUN_00255510(1);
    }
    std::exception_ptr::exception_ptr(aeStack_88,aeStack_a8);
    local_60 = (ulong *)0x0;
                    /* try { // try from 0026d72c to 0026d733 has its CatchHandler @ 0026d96c */
    puVar4 = (ulong *)operator_new(0x28);
    *puVar4 = (ulong)&PTR_FUN_00384cb0;
    puVar4[2] = (ulong)plStack_98;
    puVar4[1] = local_a0;
    puVar4[3] = (ulong)local_90;
    *(undefined8 *)((ulong)&local_a0 | 8) = 0;
    ((undefined8 *)((ulong)&local_a0 | 8))[1] = 0;
    std::exception_ptr::exception_ptr((exception_ptr *)(puVar4 + 4),aeStack_88);
                    /* try { // try from 0026d770 to 0026d77f has its CatchHandler @ 0026d934 */
    local_60 = puVar4;
    (**(code **)(*plVar8 + 0x18))(plVar8,&local_80);
    if (local_60 == &local_80) {
      lVar6 = 4;
      puVar4 = &local_80;
LAB_0026d828:
      (**(code **)(*puVar4 + lVar6 * 8))();
    }
    else if (local_60 != (ulong *)0x0) {
      lVar6 = 5;
      puVar4 = local_60;
      goto LAB_0026d828;
    }
    std::exception_ptr::~exception_ptr(aeStack_88);
    if (local_90 != (long *)0x0) {
      uVar5 = FUN_00255510(0xffffffffffffffff);
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
  lVar6 = FUN_00255510(0xffffffffffffffff,plVar3 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
LAB_0026d8fc:
  std::exception_ptr::~exception_ptr(aeStack_a8);
  std::exception_ptr::~exception_ptr(aeStack_b0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026d9d4  FUN_0026d9d4 =====

void FUN_0026d9d4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003949a8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0026da24  FUN_0026da24 =====

undefined * FUN_0026da24(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003949b0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026da64  FUN_0026da64 =====

void FUN_0026da64(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00384cb0;
  std::exception_ptr::~exception_ptr((exception_ptr *)(param_1 + 4));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026dabc  FUN_0026dabc =====

void FUN_0026dabc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00384cb0;
  std::exception_ptr::~exception_ptr((exception_ptr *)(param_1 + 4));
  FUN_0026d198(param_1 + 2);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026db1c  FUN_0026db1c =====

undefined8 * FUN_0026db1c(long param_1)

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
  *puVar2 = &PTR_FUN_00384cb0;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = lVar3;
  if (lVar3 != 0) {
    FUN_00255510(1);
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    std::exception_ptr::exception_ptr
              ((exception_ptr *)(puVar2 + 4),(exception_ptr *)(param_1 + 0x20));
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026dbac  FUN_0026dbac =====

void FUN_0026dbac(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00384cb0;
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[2] = uVar4;
  param_2[3] = lVar2;
  if (lVar2 != 0) {
    FUN_00255510(1);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    std::exception_ptr::exception_ptr
              ((exception_ptr *)(param_2 + 4),(exception_ptr *)(param_1 + 0x20));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026dc30  FUN_0026dc30 =====

void FUN_0026dc30(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  std::exception_ptr::~exception_ptr((exception_ptr *)(param_1 + 0x20));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026dc80  FUN_0026dc80 =====

void FUN_0026dc80(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  std::exception_ptr::~exception_ptr((exception_ptr *)((long)param_1 + 0x20));
  FUN_0026d198((long)param_1 + 0x10);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026dcd8  FUN_0026dcd8 =====

void FUN_0026dcd8(long param_1)

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
                    /* try { // try from 0026ddb4 to 0026ddc7 has its CatchHandler @ 0026dec4 */
    FUN_00264e5c(local_68,PTR_typeinfo_name_003949b8,1);
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0026ddd4 to 0026dde7 has its CatchHandler @ 0026dea4 */
    std::__ndk1::operator+("Cannot call ",(basic_string *)local_68);
                    /* try { // try from 0026dde8 to 0026ddfb has its CatchHandler @ 0026de8c */
    FUN_00263450(aVStack_50,aVStack_80," - the underlying `jsi::Function` has already been deleted!"
                );
                    /* try { // try from 0026de00 to 0026de37 has its CatchHandler @ 0026de58 */
    std::runtime_error::runtime_error(this,(basic_string *)aVStack_50);
    if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
  }
  else {
    plVar1 = *(long **)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 0026dd24 to 0026dd33 has its CatchHandler @ 0026dec4 */
    FUN_0026aee4(aVStack_90,plVar1,aeStack_98);
    facebook::jsi::Value::Value(aVStack_50,aVStack_90);
    local_68[0] = 0;
                    /* try { // try from 0026dd4c to 0026dd67 has its CatchHandler @ 0026de38 */
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


// ===== 0026deec  FUN_0026deec =====

void FUN_0026deec(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003949c0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0026df3c  FUN_0026df3c =====

undefined * FUN_0026df3c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003949c8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026df7c  FUN_0026df7c =====

void FUN_0026df7c(long param_1)

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
      FUN_00264e5c(abStack_50,PTR_typeinfo_name_00394968,1);
      this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0026e034 to 0026e047 has its CatchHandler @ 0026e16c */
      std::__ndk1::operator+("WeakReference<",abStack_50);
                    /* try { // try from 0026e048 to 0026e05b has its CatchHandler @ 0026e154 */
      FUN_00263450(auStack_98,auStack_b0,"> encountered a stale `_value` - BorrowingReference<");
                    /* try { // try from 0026e05c to 0026e06b has its CatchHandler @ 0026e124 */
      FUN_00264d50(auStack_80,auStack_98,abStack_50);
                    /* try { // try from 0026e06c to 0026e07f has its CatchHandler @ 0026e100 */
      FUN_00263450(abStack_68,auStack_80,"> should\'ve already deleted this!");
                    /* try { // try from 0026e084 to 0026e0bf has its CatchHandler @ 0026e0c0 */
      std::runtime_error::runtime_error(this,abStack_68);
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0026e1a4;
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
LAB_0026e1a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026e1a8  FUN_0026e1a8 =====

void FUN_0026e1a8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_00255510(0xffffffffffffffff,*(long *)(param_1 + 8) + 8);
                    /* try { // try from 0026e1dc to 0026e1e3 has its CatchHandler @ 0026e208 */
    FUN_0026df7c(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026e20c  FUN_0026e20c =====

void FUN_0026e20c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_00260abc("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026e244  FUN_0026e244 =====

void FUN_0026e244(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_00260abc("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026e27c  FUN_0026e27c =====

void FUN_0026e27c(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_00384b30;
  if (plVar2 == plVar3) {
    lVar4 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == lVar5) {
        return;
      }
      goto LAB_0026e308;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x0026e2e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_0026e308:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026e30c  FUN_0026e30c =====

void FUN_0026e30c(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_00384b30;
  if (plVar2 == plVar3) {
    lVar5 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_0026e368;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_0026e368:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026e390  FUN_0026e390 =====

undefined8 * FUN_0026e390(long param_1)

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
  *puVar2 = &PTR_FUN_00384b30;
  if (plVar3 != (long *)0x0) {
    if (plVar3 == (long *)(param_1 + 0x10)) {
      lVar5 = *plVar3;
      puVar2[6] = puVar2 + 2;
      (**(code **)(lVar5 + 0x18))();
      goto LAB_0026e408;
    }
                    /* try { // try from 0026e3ec to 0026e407 has its CatchHandler @ 0026e430 */
    plVar3 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  puVar2[6] = plVar3;
LAB_0026e408:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026e458  FUN_0026e458 =====

void FUN_0026e458(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_00384b30;
  if (plVar4 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar4 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
      if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x0026e500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
        return;
      }
      goto LAB_0026e504;
    }
    uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
    param_2[6] = uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
LAB_0026e504:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026e508  FUN_0026e508 =====

void FUN_0026e508(long param_1)

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
      goto LAB_0026e588;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0026e568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_0026e588:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026e58c  FUN_0026e58c =====

void FUN_0026e58c(void *param_1)

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
    if (plVar2 == (long *)0x0) goto LAB_0026e5dc;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_0026e5dc:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026e604  FUN_0026e604 =====

void FUN_0026e604(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = *param_2;
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      FUN_0025cd00();
    }
  }
  else {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026e678  FUN_0026e678 =====

void FUN_0026e678(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394ad0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0026e6c8  FUN_0026e6c8 =====

undefined * FUN_0026e6c8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394ad8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026e708  FUN_0026e708 =====

void FUN_0026e708(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026e75c  FUN_0026e75c =====

void FUN_0026e75c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00384a10;
  if (param_1[5] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026e7bc  FUN_0026e7bc =====

void FUN_0026e7bc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00384a10;
  if (param_1[5] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0026d198(param_1 + 2);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026e824  FUN_0026e824 =====

undefined8 * FUN_0026e824(long param_1)

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
  *puVar2 = &PTR_FUN_00384a10;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = lVar3;
  if (lVar3 != 0) {
    FUN_00255510(1);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = lVar3;
  if (lVar3 != 0) {
    FUN_00259a00(1,lVar3 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026e8c0  FUN_0026e8c0 =====

void FUN_0026e8c0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00384a10;
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[2] = uVar4;
  param_2[3] = lVar2;
  if (lVar2 != 0) {
    FUN_00255510(1);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = lVar2;
  if (lVar2 != 0) {
    FUN_00259a00(1,lVar2 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026e954  FUN_0026e954 =====

void FUN_0026e954(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x28) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026e9a8  FUN_0026e9a8 =====

void FUN_0026e9a8(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)((long)param_1 + 0x28) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0026d198((long)param_1 + 0x10);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026ea04  FUN_0026ea04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0026ea04(long param_1,ulong *param_2)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  ulong local_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  ulong *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x28) == 0) {
    plVar3 = (long *)0x0;
LAB_0026eadc:
                    /* try { // try from 0026eadc to 0026eae3 has its CatchHandler @ 0026ec1c */
    local_70 = (undefined8 *)operator_new(0x30);
    puVar2 = PTR_typeinfo_name_00394aa8;
    uStack_78 = _UNK_001d7ff8;
    local_80 = _DAT_001d7ff0;
    *(undefined1 *)((long)local_70 + 0x27) = 0;
    uVar8 = *(undefined8 *)puVar2;
    uVar10 = *(undefined8 *)(puVar2 + 0x18);
    uVar9 = *(undefined8 *)(puVar2 + 0x10);
    uVar6 = *(undefined8 *)(puVar2 + 0x1f);
    local_70[1] = *(undefined8 *)(puVar2 + 8);
    *local_70 = uVar8;
    local_70[3] = uVar10;
    local_70[2] = uVar9;
    *(undefined8 *)((long)local_70 + 0x1f) = uVar6;
                    /* try { // try from 0026eb10 to 0026eb1f has its CatchHandler @ 0026ec04 */
    margelo::nitro::TypeInfo::demangleName((basic_string *)&local_80,true);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    if (plVar3 == (long *)0x0) goto LAB_0026eb94;
  }
  else {
    uVar11 = *param_2;
    plVar3 = (long *)std::__ndk1::__shared_weak_count::lock();
    if ((plVar3 == (long *)0x0) || (plVar7 = *(long **)(param_1 + 0x20), plVar7 == (long *)0x0))
    goto LAB_0026eadc;
    uStack_98 = *(ulong *)(param_1 + 0x10);
    local_a0 = *(ulong *)(param_1 + 8);
    local_90 = *(void **)(param_1 + 0x18);
    if (local_90 != (void *)0x0) {
      FUN_00255510(1);
    }
    local_60 = (ulong *)0x0;
    local_88 = uVar11;
                    /* try { // try from 0026ea78 to 0026ea7f has its CatchHandler @ 0026ebf4 */
    local_60 = (ulong *)operator_new(0x28);
    *local_60 = (ulong)&PTR_FUN_00384aa0;
    local_60[2] = uStack_98;
    local_60[1] = local_a0;
    local_60[3] = (ulong)local_90;
    *(undefined8 *)((ulong)&local_a0 | 8) = 0;
    ((undefined8 *)((ulong)&local_a0 | 8))[1] = 0;
    local_60[4] = uVar11;
                    /* try { // try from 0026eab0 to 0026eabf has its CatchHandler @ 0026ebbc */
    (**(code **)(*plVar7 + 0x18))(plVar7,&local_80);
    if (local_60 == &local_80) {
      lVar5 = 4;
      puVar4 = &local_80;
LAB_0026eb60:
      (**(code **)(*puVar4 + lVar5 * 8))();
    }
    else if (local_60 != (ulong *)0x0) {
      lVar5 = 5;
      puVar4 = local_60;
      goto LAB_0026eb60;
    }
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plVar3 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
LAB_0026eb94:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026ec44  FUN_0026ec44 =====

void FUN_0026ec44(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394aa8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0026ec94  FUN_0026ec94 =====

undefined * FUN_0026ec94(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394ab0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026ecd4  FUN_0026ecd4 =====

void FUN_0026ecd4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00384aa0;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1 + 2);
}


// ===== 0026ed18  FUN_0026ed18 =====

void FUN_0026ed18(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00384aa0;
  FUN_0026d198(param_1 + 2);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026ed70  FUN_0026ed70 =====

void FUN_0026ed70(long param_1)

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
  *puVar2 = &PTR_FUN_00384aa0;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = lVar3;
  if (lVar3 != 0) {
    FUN_00255510(1);
  }
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026edfc  FUN_0026edfc =====

void FUN_0026edfc(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00384aa0;
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[2] = uVar4;
  param_2[3] = lVar2;
  if (lVar2 != 0) {
    FUN_00255510(1);
  }
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026ee80  FUN_0026ee80 =====

void FUN_0026ee80(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_0026d198(param_1 + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026eebc  FUN_0026eebc =====

void FUN_0026eebc(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0026d198((long)param_1 + 0x10);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026ef0c  FUN_0026ef0c =====

void FUN_0026ef0c(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  runtime_error *this;
  undefined4 local_90 [2];
  undefined8 local_88;
  Value aVStack_80 [24];
  undefined4 local_68 [6];
  Value aVStack_50 [24];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (*(long *)(param_1 + 0x10) != 0) {
    if ((*(byte *)(*(long *)(param_1 + 0x18) + 0x10) & 1) == 0) {
      plVar1 = *(long **)(param_1 + 8);
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      local_90[0] = 3;
      local_88 = *(undefined8 *)(param_1 + 0x20);
      facebook::jsi::Value::Value(aVStack_50,(Value *)local_90);
      local_68[0] = 0;
                    /* try { // try from 0026ef70 to 0026ef8b has its CatchHandler @ 0026f054 */
      (**(code **)(*plVar1 + 0x280))(aVStack_80,plVar1,uVar2,local_68,aVStack_50,1);
      facebook::jsi::Value::~Value((Value *)local_68);
      facebook::jsi::Value::~Value(aVStack_50);
      facebook::jsi::Value::~Value((Value *)local_90);
      facebook::jsi::Value::~Value(aVStack_80);
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return;
      }
      goto LAB_0026f0f4;
    }
  }
  FUN_00264e5c(local_68,PTR_typeinfo_name_00394ab8,1);
  this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0026eff0 to 0026f003 has its CatchHandler @ 0026f0c0 */
  std::__ndk1::operator+("Cannot call ",(basic_string *)local_68);
                    /* try { // try from 0026f004 to 0026f017 has its CatchHandler @ 0026f0a8 */
  FUN_00263450(aVStack_50,aVStack_80," - the underlying `jsi::Function` has already been deleted!");
                    /* try { // try from 0026f01c to 0026f053 has its CatchHandler @ 0026f074 */
  std::runtime_error::runtime_error(this,(basic_string *)aVStack_50);
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
  }
LAB_0026f0f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026f0f8  FUN_0026f0f8 =====

void FUN_0026f0f8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394ac0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0026f148  FUN_0026f148 =====

undefined * FUN_0026f148(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394ac8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026f188  FUN_0026f188 =====

void FUN_0026f188(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037cf88;
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


// ===== 0026f1f4  FUN_0026f1f4 =====

void FUN_0026f1f4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037cf88;
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


// ===== 0026f25c  FUN_0026f25c =====

undefined8 * FUN_0026f25c(long param_1)

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
  *puVar4 = &PTR_FUN_0037cf88;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 0026f2bc to 0026f2bf has its CatchHandler @ 0026f2f8 */
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


// ===== 0026f320  FUN_0026f320 =====

void FUN_0026f320(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037cf88;
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


// ===== 0026f3b8  FUN_0026f3b8 =====

void FUN_0026f3b8(long param_1)

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


// ===== 0026f418  FUN_0026f418 =====

void FUN_0026f418(void *param_1)

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


// ===== 0026f474  FUN_0026f474 =====

void FUN_0026f474(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  JSError *pJVar8;
  ulong uVar9;
  long *plVar10;
  int *piVar11;
  code *pcVar12;
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined8 local_198;
  long *local_190;
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined8 *local_f0;
  long *plStack_e8;
  undefined1 local_e0;
  ulong local_d8;
  undefined8 uStack_d0;
  void *local_c8;
  char local_c0;
  char local_b8;
  undefined8 *local_a8;
  long *plStack_a0;
  undefined1 local_98;
  ulong local_90;
  undefined8 uStack_88;
  void *local_80;
  char local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  piVar11 = (int *)*param_5;
  uVar9 = *param_6;
  local_a8 = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 0026f4d4 to 0026f4e3 has its CatchHandler @ 0026fc7c */
  (**(code **)(*param_3 + 0x160))(&local_f0,param_3,&local_a8);
  plVar1 = plStack_e8;
  if ((local_f0 == (undefined8 *)0x0) ||
     (lVar6 = __dynamic_cast(local_f0,PTR_typeinfo_00394860,PTR_typeinfo_00394870,0xffffffffffffffff
                            ), lVar6 == 0)) {
    lVar6 = 0;
    plVar10 = (long *)0x0;
    if (plVar1 == (long *)0x0) goto joined_r0x0026f55c;
  }
  else {
    if (plVar1 == (long *)0x0) {
      plVar10 = (long *)0x0;
      goto joined_r0x0026f55c;
    }
    FUN_00259a00(1,plVar1 + 1);
    plVar10 = plVar1;
  }
  lVar7 = FUN_00255510(0xffffffffffffffff,plVar1 + 1);
  if (lVar7 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x0026f55c:
  if (local_a8 != (undefined8 *)0x0) {
    (**(code **)*local_a8)();
  }
  piVar2 = (int *)PTR_defaultValue_00394a78;
  if (uVar9 < 2) {
    pcVar12 = *(code **)(param_2 + 0x20);
    uVar3 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00394a80 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_defaultValue_00394a80), iVar5 != 0)) {
      *piVar2 = 0;
      __cxa_atexit(PTR__Value_00394848,piVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00394a80);
    }
    plVar1 = (long *)(lVar6 + ((long)uVar3 >> 1));
    if ((uVar3 & 1) != 0) {
      pcVar12 = *(code **)(pcVar12 + *plVar1);
    }
    if (uVar9 != 0) {
      piVar2 = piVar11;
    }
    if (*piVar2 == 0) {
      local_f0 = (undefined8 *)((ulong)local_f0 & 0xffffffffffffff00);
      local_b8 = '\0';
    }
    else {
                    /* try { // try from 0026f5bc to 0026f5c7 has its CatchHandler @ 0026f93c */
      FUN_0026fe74(&local_a8,param_3);
      local_d8 = local_d8 & 0xffffffffffffff00;
      plStack_e8 = plStack_a0;
      local_f0 = local_a8;
      local_e0 = local_98;
      local_c0 = local_78 != '\0';
      if ((bool)local_c0) {
        uStack_d0 = uStack_88;
        local_d8 = local_90;
        local_c8 = local_80;
      }
      local_b8 = '\x01';
    }
                    /* try { // try from 0026f618 to 0026f627 has its CatchHandler @ 0026f960 */
    (*pcVar12)(&local_198,plVar1,&local_f0);
    if (((local_b8 != '\0') && (local_c0 != '\0')) && ((local_d8 & 1) != 0)) {
      operator_delete(local_c8);
    }
                    /* try { // try from 0026f64c to 0026f657 has its CatchHandler @ 0026f948 */
    FUN_002703c4(param_1,param_3,local_198,local_190);
    if ((local_190 != (long *)0x0) &&
       (lVar6 = FUN_00255510(0xffffffffffffffff,local_190 + 1), lVar6 == 0)) {
      (**(code **)(*local_190 + 0x10))(local_190);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if ((plVar10 != (long *)0x0) &&
       (lVar6 = FUN_00255510(0xffffffffffffffff,plVar10 + 1), lVar6 == 0)) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar4 + 0x28) == local_70) {
      return;
    }
  }
  else {
                    /* try { // try from 0026f6f8 to 0026f707 has its CatchHandler @ 0026fdbc */
    FUN_00269c28(&local_f0,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar6);
    pJVar8 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0026f714 to 0026f727 has its CatchHandler @ 0026fd9c */
    std::__ndk1::operator+("`",(basic_string *)&local_f0);
                    /* try { // try from 0026f728 to 0026f73b has its CatchHandler @ 0026fd84 */
    FUN_00263450(auStack_180,&local_198,"` expected between ");
                    /* try { // try from 0026f73c to 0026f747 has its CatchHandler @ 0026fd54 */
    std::__ndk1::to_string(0);
                    /* try { // try from 0026f748 to 0026f757 has its CatchHandler @ 0026fd30 */
    FUN_00264adc(auStack_168,auStack_180,auStack_1b0);
                    /* try { // try from 0026f758 to 0026f76b has its CatchHandler @ 0026fd0c */
    FUN_00263450(auStack_150,auStack_168," and ");
                    /* try { // try from 0026f76c to 0026f777 has its CatchHandler @ 0026fce8 */
    std::__ndk1::to_string(1);
                    /* try { // try from 0026f778 to 0026f787 has its CatchHandler @ 0026fcc4 */
    FUN_00264adc(auStack_138,auStack_150,auStack_1c8);
                    /* try { // try from 0026f788 to 0026f79b has its CatchHandler @ 0026fc9c */
    FUN_00263450(auStack_120,auStack_138," arguments, but received ");
                    /* try { // try from 0026f79c to 0026f7a7 has its CatchHandler @ 0026f918 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 0026f7a8 to 0026f7b7 has its CatchHandler @ 0026f8f4 */
    FUN_00264adc(auStack_108,auStack_120,auStack_1e0);
                    /* try { // try from 0026f7b8 to 0026f7cb has its CatchHandler @ 0026f8d0 */
    FUN_00263450(&local_a8,auStack_108,&DAT_001d5be0);
                    /* try { // try from 0026f7d0 to 0026f80b has its CatchHandler @ 0026f858 */
    facebook::jsi::JSError::JSError(pJVar8,param_3,&local_a8);
    if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar8,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026fde4  FUN_0026fde4 =====

void FUN_0026fde4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394a88) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0026fe34  FUN_0026fe34 =====

undefined * FUN_0026fe34(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394a90;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0026fe74  FUN_0026fe74 =====

void FUN_0026fe74(undefined4 *param_1,Runtime *param_2,IRuntime *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  logic_error *this;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined4 uVar8;
  int local_100 [4];
  int local_f0 [4];
  basic_string local_e0;
  undefined4 local_df;
  undefined1 local_db;
  void *local_d0;
  IRuntime aIStack_c8 [16];
  undefined8 *local_b8;
  undefined8 *local_b0;
  basic_string local_a8;
  undefined4 local_a7;
  undefined1 local_a3;
  void *local_98;
  basic_string local_90;
  undefined4 uStack_8f;
  undefined2 uStack_8b;
  undefined1 uStack_89;
  void *local_80;
  basic_string local_78;
  undefined4 local_77;
  undefined3 uStack_73;
  ulong local_70;
  byte *pbStack_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  facebook::jsi::Value::asObject(param_3);
  local_db = 0;
  local_e0 = (basic_string)0x8;
  local_df = 0x65707974;
                    /* try { // try from 0026fec8 to 0026feef has its CatchHandler @ 002703b4 */
  uVar3 = margelo::nitro::PropNameIDCache::get(param_2,&local_e0);
  (**(code **)(*(long *)param_2 + 0x180))(aIStack_c8,param_2,&local_b8,uVar3);
                    /* try { // try from 0026fef0 to 0026feff has its CatchHandler @ 00270330 */
  facebook::jsi::Value::asString(aIStack_c8);
                    /* try { // try from 0026ff08 to 0026ff17 has its CatchHandler @ 00270310 */
  (**(code **)(*(long *)param_2 + 0x120))(&local_78,param_2,&local_90);
  puVar2 = (undefined8 *)CONCAT17(uStack_89,CONCAT25(uStack_8b,CONCAT41(uStack_8f,local_90)));
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)();
  }
  pbVar6 = (byte *)((ulong)&local_78 | 1);
  uVar5 = (ulong)((byte)local_78 >> 1);
  if (((byte)local_78 & 1) != 0) {
    pbVar6 = pbStack_68;
    uVar5 = local_70;
  }
  if (uVar5 == 0) {
LAB_002701c8:
    this = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002701d4 to 002701e7 has its CatchHandler @ 002702f4 */
    std::__ndk1::operator+("Cannot convert \"",&local_78);
                    /* try { // try from 002701e8 to 002701fb has its CatchHandler @ 002702a4 */
    FUN_00263450(&local_90,&local_a8,"\" to enum ArtboardByTypes - invalid value!");
                    /* try { // try from 00270200 to 00270247 has its CatchHandler @ 00270270 */
    std::logic_error::logic_error(this,&local_90);
    *(undefined **)this = PTR_vtable_00394b38 + 0x10;
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394b30,PTR__invalid_argument_00394b20);
    }
  }
  else {
    uVar7 = 0xcbf29ce484222325;
    do {
      uVar5 = uVar5 - 1;
      uVar7 = (uVar7 ^ *pbVar6) * 0x100000001b3;
      pbVar6 = pbVar6 + 1;
    } while (uVar5 != 0);
    if (uVar7 == 0x83cf8e8f9081468b) {
      uVar8 = 0;
    }
    else {
      if (uVar7 != 0xc4bcadba8e631b86) goto LAB_002701c8;
      uVar8 = 1;
    }
    if (((byte)local_78 & 1) != 0) {
      operator_delete(pbStack_68);
    }
    local_90 = (basic_string)0xa;
    uStack_8f = 0x65646e69;
    uStack_8b = 0x78;
                    /* try { // try from 0026ffe4 to 0027000b has its CatchHandler @ 00270358 */
    uVar3 = margelo::nitro::PropNameIDCache::get(param_2,&local_90);
    (**(code **)(*(long *)param_2 + 0x180))(local_f0,param_2,&local_b8,uVar3);
    if (local_f0[0] == 0) {
      uVar3 = 0;
    }
    else {
                    /* try { // try from 00270014 to 0027001b has its CatchHandler @ 002702ec */
      uVar3 = facebook::jsi::Value::asNumber();
    }
    uVar5 = (ulong)(local_f0[0] != 0);
    local_a3 = 0;
    local_a8 = (basic_string)0x8;
    local_a7 = 0x656d616e;
                    /* try { // try from 00270048 to 0027006f has its CatchHandler @ 00270338 */
    uVar4 = margelo::nitro::PropNameIDCache::get(param_2,&local_a8);
    (**(code **)(*(long *)param_2 + 0x180))(local_100,param_2,&local_b8,uVar4);
    if (local_100[0] == 0) {
      *param_1 = uVar8;
      *(undefined8 *)(param_1 + 2) = uVar3;
      *(ulong *)(param_1 + 4) = uVar5;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
    else {
                    /* try { // try from 00270078 to 00270087 has its CatchHandler @ 002702dc */
      facebook::jsi::Value::asString((IRuntime *)local_100);
                    /* try { // try from 00270090 to 0027009f has its CatchHandler @ 002702bc */
      (**(code **)(*(long *)param_2 + 0x120))(&local_78,param_2,&local_b0);
      if (local_b0 != (undefined8 *)0x0) {
        (**(code **)*local_b0)();
      }
      *param_1 = uVar8;
      *(ulong *)(param_1 + 4) = uVar5;
      *(undefined8 *)(param_1 + 2) = uVar3;
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
       (param_1 + 6) =
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
      *(undefined1 *)(param_1 + 0xc) = 0;
      if (((byte)local_78 & 1) == 0) {
        *(basic_string *)(param_1 + 6) = local_78;
        *(ulong *)(param_1 + 8) = local_70;
        *(byte **)(param_1 + 10) = pbStack_68;
        *(undefined4 *)((long)param_1 + 0x19) = local_77;
        param_1[7] = CONCAT31(uStack_73,local_77._3_1_);
        *(undefined1 *)(param_1 + 0xc) = 1;
      }
      else {
                    /* try { // try from 00270124 to 0027012f has its CatchHandler @ 00270248 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(param_1 + 6),(char *)pbStack_68,local_70);
        *(undefined1 *)(param_1 + 0xc) = 1;
        operator_delete(pbStack_68);
      }
    }
    facebook::jsi::Value::~Value((Value *)local_100);
    if (((byte)local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    facebook::jsi::Value::~Value((Value *)local_f0);
    if (((byte)local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    facebook::jsi::Value::~Value((Value *)aIStack_c8);
    if (((byte)local_e0 & 1) != 0) {
      operator_delete(local_d0);
    }
    if (local_b8 != (undefined8 *)0x0) {
      (**(code **)*local_b8)();
    }
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002703c4  FUN_002703c4 =====

void FUN_002703c4(undefined8 param_1,Runtime *param_2,long param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined ***pppuVar4;
  runtime_error *this;
  undefined1 auStack_b0 [24];
  basic_string abStack_98 [24];
  undefined **local_80;
  long lStack_78;
  long *local_70;
  undefined ***local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(param_3 + 0x20);
  if (iVar1 == 2) {
    FUN_0026aee4(&local_80,param_2,param_3 + 8);
                    /* try { // try from 002704a0 to 002704af has its CatchHandler @ 0027067c */
    margelo::nitro::CommonGlobals::Promise::rejected(param_2,(Value *)&local_80);
LAB_002704c8:
    facebook::jsi::Value::~Value((Value *)&local_80);
  }
  else {
    if (iVar1 == 1) {
      if (*(char *)(param_3 + 0x18) == '\0') {
        local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      }
      else {
        FUN_00270734(&local_80,param_2,*(undefined8 *)(param_3 + 8));
      }
                    /* try { // try from 002704b8 to 002704c7 has its CatchHandler @ 00270680 */
      margelo::nitro::CommonGlobals::Promise::resolved(param_2,(Value *)&local_80);
      goto LAB_002704c8;
    }
    if (iVar1 != 0) {
      FUN_00264e5c(&local_80,PTR_typeinfo_name_00394a60,1);
      this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00270574 to 00270587 has its CatchHandler @ 00270624 */
      std::__ndk1::operator+("Promise<",(basic_string *)&local_80);
                    /* try { // try from 00270588 to 0027059b has its CatchHandler @ 0027060c */
      FUN_00263450(abStack_98,auStack_b0,"> has invalid state!");
                    /* try { // try from 002705a0 to 002705d7 has its CatchHandler @ 002705d8 */
      std::runtime_error::runtime_error(this,abStack_98);
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002706a4;
    }
    lStack_78 = param_3;
    if (param_4 == (long *)0x0) {
      local_70 = (long *)0x0;
      local_80 = &PTR_FUN_0037cce8;
      local_60 = &local_80;
    }
    else {
      FUN_00259a00(1,param_4 + 1);
      local_80 = &PTR_FUN_0037cce8;
      local_70 = param_4;
      FUN_00259a00(1,param_4 + 1);
      local_60 = &local_80;
      lVar3 = FUN_00255510(0xffffffffffffffff,param_4 + 1);
      if (lVar3 == 0) {
        (**(code **)(*param_4 + 0x10))(param_4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
                    /* try { // try from 002704ec to 002704ff has its CatchHandler @ 00270644 */
    margelo::nitro::CommonGlobals::Promise::callConstructor(param_2,(function *)&local_80);
    if (local_60 == &local_80) {
      lVar3 = 4;
      pppuVar4 = &local_80;
LAB_00270520:
      (*(code *)(*pppuVar4)[lVar3])();
    }
    else if (local_60 != (undefined ***)0x0) {
      lVar3 = 5;
      pppuVar4 = local_60;
      goto LAB_00270520;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_002706a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002706a8  FUN_002706a8 =====

void FUN_002706a8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 00270734  FUN_00270734 =====

void FUN_00270734(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  JSError *pJVar2;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  basic_string abStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_3 == (long *)0x0) {
    FUN_00264e5c(abStack_50,PTR_typeinfo_name_00395428);
    pJVar2 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002707b0 to 002707c3 has its CatchHandler @ 00270864 */
    std::__ndk1::operator+("Cannot convert `nullptr` to NativeState<",abStack_50);
                    /* try { // try from 002707c4 to 002707d7 has its CatchHandler @ 0027084c */
    FUN_00263450(auStack_68,auStack_80,&DAT_001d795b);
                    /* try { // try from 002707dc to 00270817 has its CatchHandler @ 00270818 */
    facebook::jsi::JSError::JSError(pJVar2,param_2,auStack_68);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar2,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_38) {
    margelo::nitro::HybridObject::toObject((Runtime *)((long)param_3 + *(long *)(*param_3 + -0x20)))
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027089c  FUN_0027089c =====

void FUN_0027089c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0037cce8;
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
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


// ===== 00270934  FUN_00270934 =====

void FUN_00270934(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0037cce8;
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
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


// ===== 002709c0  FUN_002709c0 =====

void FUN_002709c0(long param_1)

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
  *puVar4 = &PTR_FUN_0037cce8;
  puVar4[1] = uVar1;
  puVar4[2] = lVar2;
  if (lVar2 != 0) {
    FUN_00259a00(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


// ===== 00270a38  FUN_00270a38 =====

void FUN_00270a38(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0037cce8;
  param_2[1] = uVar1;
  param_2[2] = lVar2;
  if (lVar2 != 0) {
    FUN_00259a00(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00270a9c  FUN_00270a9c =====

void FUN_00270a9c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x10);
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
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


// ===== 00270b28  FUN_00270b28 =====

void FUN_00270b28(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)((long)param_1 + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
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


// ===== 00270ba8  FUN_00270ba8 =====

void FUN_00270ba8(undefined4 *param_1,long param_2,Runtime *param_3,undefined8 param_4,
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
                    /* try { // try from 00270bf4 to 00270c03 has its CatchHandler @ 002715f4 */
  facebook::jsi::Object::asFunction((IRuntime *)&local_d0);
  if (local_d0 != (Runtime *)0x0) {
    (*(code *)**(undefined8 **)local_d0)();
  }
  local_130 = (Runtime *)0x0;
  local_128 = (Runtime *)0x0;
                    /* try { // try from 00270c1c to 00270c27 has its CatchHandler @ 002715d4 */
  margelo::nitro::JSICache::getOrCreateCache(param_3);
                    /* try { // try from 00270c2c to 00270c37 has its CatchHandler @ 002715c4 */
  FUN_0026ce4c(&local_100,local_d0,&local_138);
                    /* try { // try from 00270c38 to 00270c43 has its CatchHandler @ 002715b4 */
  FUN_0026d090(&local_130,&local_100);
  if (local_f8 != (Runtime *)0x0) {
    uVar5 = FUN_00255510(0xffffffffffffffff);
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
        goto LAB_00270ca4;
      }
      lVar11 = *(long *)local_f8;
      pRVar10 = local_f8;
    }
    else {
LAB_00270ca4:
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
     (lVar11 = FUN_00255510(0xffffffffffffffff,(long *)((long)local_c8 + 8)), lVar11 == 0)) {
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
                    /* try { // try from 00270d24 to 00270d2f has its CatchHandler @ 002715a4 */
  margelo::nitro::Dispatcher::getRuntimeGlobalDispatcher(param_3);
  if (local_140 != (Runtime *)0x0) {
    FUN_00259a00(1,local_140 + 0x10);
  }
  local_c8 = pRVar10;
  local_f8 = (Runtime *)0x0;
  local_f0 = (Runtime *)0x0;
  local_c0 = pRVar4;
  local_d0 = param_3;
  if (local_140 != (Runtime *)0x0) {
    FUN_00259a00(1,local_140 + 0x10);
  }
  local_80[0] = (Runtime *)0x0;
                    /* try { // try from 00270d68 to 00270d6f has its CatchHandler @ 00271580 */
  local_80[0] = (Runtime *)operator_new(0x30);
  *(Runtime **)(local_80[0] + 0x10) = pRVar10;
  *(Runtime **)(local_80[0] + 0x18) = pRVar4;
  *(undefined ***)local_80[0] = &PTR_FUN_0037cd58;
  *(Runtime **)(local_80[0] + 8) = param_3;
  local_c8 = (Runtime *)0x0;
  local_c0 = (Runtime *)0x0;
  *(Runtime **)(local_80[0] + 0x20) = local_148;
  *(Runtime **)(local_80[0] + 0x28) = local_140;
  local_b8 = 0;
  local_b0[0] = (Runtime **)0x0;
  if (((local_140 != (Runtime *)0x0) &&
      (std::__ndk1::__shared_weak_count::__release_weak(), local_140 != (Runtime *)0x0)) &&
     (lVar11 = FUN_00255510(0xffffffffffffffff,local_140 + 8), lVar11 == 0)) {
    (**(code **)(*(long *)local_140 + 0x10))(local_140);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (local_f0 != (Runtime *)0x0) {
    uVar5 = FUN_00255510(0xffffffffffffffff);
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
        goto LAB_00270e30;
      }
      lVar11 = *(long *)local_f0;
      pRVar10 = local_f0;
    }
    else {
LAB_00270e30:
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
    uVar5 = FUN_00255510(0xffffffffffffffff);
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
        goto LAB_00270ec0;
      }
      lVar11 = *(long *)local_128;
      pRVar10 = local_128;
    }
    else {
LAB_00270ec0:
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
LAB_00270f30:
    *ppRVar6 = (Runtime *)0x0;
  }
  else {
    if (local_80[0] != (Runtime *)local_a0) {
      ppRVar6 = local_80;
      local_e0[0] = local_80[0];
      goto LAB_00270f30;
    }
    local_e0[0] = (Runtime *)&local_100;
                    /* try { // try from 00270f48 to 00270f53 has its CatchHandler @ 0027155c */
    (**(code **)(local_a0[0] + 0x18))(local_a0,&local_100);
  }
  pRVar10 = local_e0[0];
  local_b0[0] = (Runtime **)0x0;
  if (local_e0[0] != (Runtime *)0x0) {
                    /* try { // try from 00270f60 to 00270f67 has its CatchHandler @ 00271568 */
    ppRVar6 = (Runtime **)operator_new(0x40);
    *ppRVar6 = (Runtime *)&PTR_FUN_0037ce78;
    if (pRVar10 == (Runtime *)&local_100) {
      ppRVar6[6] = (Runtime *)(ppRVar6 + 2);
                    /* try { // try from 00270f9c to 00270fab has its CatchHandler @ 00271558 */
      (**(code **)(local_100 + 0x18))(&local_100);
      local_b0[0] = ppRVar6;
    }
    else {
      ppRVar6[6] = pRVar10;
      local_e0[0] = (Runtime *)0x0;
      local_b0[0] = ppRVar6;
    }
  }
                    /* try { // try from 00270fb0 to 00270fb7 has its CatchHandler @ 00271578 */
  std::__ndk1::mutex::lock();
  if (*(int *)(lVar11 + 0x20) == 1) {
    if (local_b0[0] != (Runtime **)0x0) {
                    /* try { // try from 00270fd8 to 0027107b has its CatchHandler @ 00271684 */
      (**(code **)(*local_b0[0] + 0x30))(local_b0[0],lVar11 + 8);
LAB_002711b4:
      std::__ndk1::mutex::unlock();
      if (local_b0[0] == &local_d0) {
        lVar11 = 4;
        ppRVar6 = &local_d0;
LAB_00271218:
        (**(code **)(*ppRVar6 + lVar11 * 8))();
      }
      else if (local_b0[0] != (Runtime **)0x0) {
        lVar11 = 5;
        ppRVar6 = local_b0[0];
        goto LAB_00271218;
      }
      if (local_e0[0] == (Runtime *)&local_100) {
        lVar11 = 4;
        pRVar10 = (Runtime *)&local_100;
LAB_00271248:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_e0[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_e0[0];
        goto LAB_00271248;
      }
      if (local_80[0] == (Runtime *)local_a0) {
        lVar11 = 4;
        pRVar10 = (Runtime *)local_a0;
LAB_00271278:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_80[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_80[0];
        goto LAB_00271278;
      }
      FUN_0026c2bc(local_a0,param_3,pIVar19 + 0x10);
      lVar11 = *(long *)(param_2 + 8);
      if (local_80[0] == (Runtime *)0x0) {
        ppRVar6 = local_110;
LAB_002712c0:
        *ppRVar6 = (Runtime *)0x0;
      }
      else {
        if (local_80[0] != (Runtime *)local_a0) {
          ppRVar6 = local_80;
          local_110[0] = local_80[0];
          goto LAB_002712c0;
        }
        local_110[0] = (Runtime *)&local_130;
                    /* try { // try from 002712d8 to 002712e3 has its CatchHandler @ 00271554 */
        (**(code **)(local_a0[0] + 0x18))(local_a0,&local_130);
      }
      pRVar10 = local_110[0];
      local_b0[0] = (Runtime **)0x0;
      if (local_110[0] != (Runtime *)0x0) {
                    /* try { // try from 002712f0 to 002712f7 has its CatchHandler @ 00271560 */
        ppRVar6 = (Runtime **)operator_new(0x40);
        *ppRVar6 = (Runtime *)&PTR_FUN_00384d40;
        if (pRVar10 == (Runtime *)&local_130) {
          ppRVar6[6] = (Runtime *)(ppRVar6 + 2);
                    /* try { // try from 0027132c to 0027133b has its CatchHandler @ 00271550 */
          (**(code **)(local_130 + 0x18))(&local_130);
          local_b0[0] = ppRVar6;
        }
        else {
          ppRVar6[6] = pRVar10;
          local_110[0] = (Runtime *)0x0;
          local_b0[0] = ppRVar6;
        }
      }
                    /* try { // try from 00271340 to 00271347 has its CatchHandler @ 00271570 */
      std::__ndk1::mutex::lock();
      if (*(int *)(lVar11 + 0x20) == 2) {
        if (local_b0[0] == (Runtime **)0x0) goto LAB_002714fc;
                    /* try { // try from 00271368 to 002713ab has its CatchHandler @ 00271618 */
        (**(code **)(*local_b0[0] + 0x30))(local_b0[0],lVar11 + 8);
      }
      else {
        uVar5 = *(ulong *)(lVar11 + 0x48);
        if (uVar5 < *(ulong *)(lVar11 + 0x50)) {
          if (local_b0[0] == (Runtime **)0x0) {
            pppRVar14 = (Runtime ***)(uVar5 + 0x20);
LAB_002713b8:
            *pppRVar14 = (Runtime **)0x0;
          }
          else {
            if (local_b0[0] != &local_d0) {
              pppRVar14 = local_b0;
              *(Runtime ***)(uVar5 + 0x20) = local_b0[0];
              goto LAB_002713b8;
            }
            *(ulong *)(uVar5 + 0x20) = uVar5;
                    /* try { // try from 002713d0 to 002713d7 has its CatchHandler @ 00271544 */
            (**(code **)(*local_b0[0] + 0x18))(local_b0[0],uVar5);
          }
          lVar9 = uVar5 + 0x30;
        }
        else {
          lVar9 = FUN_0026c714(lVar11 + 0x40,&local_d0);
        }
        *(long *)(lVar11 + 0x48) = lVar9;
      }
      std::__ndk1::mutex::unlock();
      if (local_b0[0] == &local_d0) {
        lVar11 = 4;
        ppRVar6 = &local_d0;
LAB_00271410:
        (**(code **)(*ppRVar6 + lVar11 * 8))();
      }
      else if (local_b0[0] != (Runtime **)0x0) {
        lVar11 = 5;
        ppRVar6 = local_b0[0];
        goto LAB_00271410;
      }
      if (local_110[0] == (Runtime *)&local_130) {
        lVar11 = 4;
        pRVar10 = (Runtime *)&local_130;
LAB_00271440:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_110[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_110[0];
        goto LAB_00271440;
      }
      *param_1 = 0;
      if (local_80[0] == (Runtime *)local_a0) {
        lVar11 = 4;
        pRVar10 = (Runtime *)local_a0;
LAB_00271474:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_80[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_80[0];
        goto LAB_00271474;
      }
      if (*(long *)(lVar3 + 0x28) == local_70) {
        return;
      }
      goto LAB_00271740;
    }
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_00271740;
                    /* try { // try from 002714f8 to 002714fb has its CatchHandler @ 00271684 */
    FUN_0025cd00();
LAB_002714fc:
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_00271740;
                    /* try { // try from 00271510 to 00271513 has its CatchHandler @ 00271618 */
    FUN_0025cd00();
LAB_00271514:
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_00271740;
                    /* try { // try from 00271528 to 00271543 has its CatchHandler @ 00271684 */
    FUN_002717d4();
  }
  else {
    uVar5 = *(ulong *)(lVar11 + 0x30);
    pppRVar14 = local_b0;
    if (uVar5 < *(ulong *)(lVar11 + 0x38)) {
      if (local_b0[0] == (Runtime **)0x0) {
        pppRVar14 = (Runtime ***)(uVar5 + 0x20);
LAB_00271084:
        *pppRVar14 = (Runtime **)0x0;
      }
      else {
        if (local_b0[0] != &local_d0) {
          *(Runtime ***)(uVar5 + 0x20) = local_b0[0];
          goto LAB_00271084;
        }
        *(ulong *)(uVar5 + 0x20) = uVar5;
                    /* try { // try from 002710d8 to 002710df has its CatchHandler @ 0027154c */
        (**(code **)(*local_b0[0] + 0x18))(local_b0[0],uVar5);
      }
      lVar9 = uVar5 + 0x30;
LAB_002711b0:
      *(long *)(lVar11 + 0x30) = lVar9;
      goto LAB_002711b4;
    }
    uVar17 = *(ulong *)(lVar11 + 0x28);
    lVar9 = (long)(uVar5 - uVar17) >> 4;
    uVar20 = lVar9 * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar20) goto LAB_00271514;
    lVar12 = (long)(*(ulong *)(lVar11 + 0x38) - uVar17) >> 4;
    uVar16 = lVar12 * 0x5555555555555556;
    if (uVar16 < uVar20 || uVar16 - uVar20 == 0) {
      uVar16 = uVar20;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar12 * -0x5555555555555555)) {
      uVar16 = 0x555555555555555;
    }
    if (uVar16 == 0) {
      pvVar7 = (void *)0x0;
LAB_00271090:
      pvVar21 = (void *)((long)pvVar7 + lVar9 * 0x10);
      if (local_b0[0] == (Runtime **)0x0) {
        pppRVar14 = (Runtime ***)((long)pvVar21 + 0x20);
LAB_002710c0:
        *pppRVar14 = (Runtime **)0x0;
      }
      else {
        if (local_b0[0] != &local_d0) {
          *(Runtime ***)((long)pvVar21 + 0x20) = local_b0[0];
          goto LAB_002710c0;
        }
        *(void **)((long)pvVar21 + 0x20) = pvVar21;
                    /* try { // try from 002710f4 to 002710ff has its CatchHandler @ 00271548 */
        (**(code **)(local_d0 + 0x18))(&local_d0,pvVar21);
        uVar17 = *(ulong *)(lVar11 + 0x28);
        uVar5 = *(ulong *)(lVar11 + 0x30);
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
LAB_00271120:
            *(undefined8 *)(uVar1 - 0x10) = 0;
          }
          else {
            if (lVar12 + -0x30 != lVar15) {
              *(long *)(uVar1 - 0x10) = lVar15;
              uVar1 = uVar20;
              goto LAB_00271120;
            }
            *(ulong *)(uVar1 - 0x10) = uVar1 - 0x30;
                    /* try { // try from 00271174 to 00271177 has its CatchHandler @ 00271614 */
            (**(code **)(**(long **)(lVar12 + -0x10) + 0x18))();
          }
          lVar9 = lVar9 + -0x30;
          uVar20 = uVar20 - 0x30;
        } while (uVar5 + lVar9 != uVar17);
        pvVar13 = (void *)((long)pvVar21 + lVar9);
      }
      lVar9 = (long)pvVar21 + 0x30;
      plVar2 = *(long **)(lVar11 + 0x28);
      plVar18 = *(long **)(lVar11 + 0x30);
      *(void **)(lVar11 + 0x28) = pvVar13;
      *(long *)(lVar11 + 0x30) = lVar9;
      *(void **)(lVar11 + 0x38) = (void *)((long)pvVar7 + uVar16 * 0x30);
joined_r0x002711a0:
      if (plVar18 != plVar2) {
        plVar8 = (long *)plVar18[-2];
        plVar18 = plVar18 + -6;
        if (plVar18 != plVar8) goto code_r0x00271204;
        lVar12 = 4;
        plVar8 = plVar18;
        goto LAB_002711e0;
      }
      if (plVar2 != (long *)0x0) {
        operator_delete(plVar2);
      }
      goto LAB_002711b0;
    }
    if (uVar16 < 0x555555555555556) {
      pvVar7 = operator_new(uVar16 * 0x30);
      goto LAB_00271090;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    FUN_00260a2c();
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 002713d0 with catch @ 00271544 */
    FUN_0025ad9c();
  }
LAB_00271740:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00271204:
  if (plVar8 != (long *)0x0) {
    lVar12 = 5;
LAB_002711e0:
    (**(code **)(*plVar8 + lVar12 * 8))();
  }
  goto joined_r0x002711a0;
}


// ===== 00271744  FUN_00271744 =====

void FUN_00271744(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394a50) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00271794  FUN_00271794 =====

undefined * FUN_00271794(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394a58;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002717d4  FUN_002717d4 =====

void FUN_002717d4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_00260abc("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027180c  FUN_0027180c =====

void FUN_0027180c(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_0037ce78;
  if (plVar2 == plVar3) {
    lVar4 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == lVar5) {
        return;
      }
      goto LAB_00271898;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00271878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_00271898:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


