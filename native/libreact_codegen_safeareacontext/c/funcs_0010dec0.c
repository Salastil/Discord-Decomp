// ===== 0010dec0  _FINI_1 =====

void _FINI_1(void)

{
  __cxa_finalize(&PTR_LOOP_001220e0);
  return;
}


// ===== 0010ded0  FUN_0010ded0 =====

void FUN_0010ded0(void)

{
  return;
}


// ===== 0010ded8  _FINI_0 =====

void _FINI_0(void)

{
  FUN_0010ded0();
  return;
}


// ===== 0010dee0  FUN_0010dee0 =====

void FUN_0010dee0(code *UNRECOVERED_JUMPTABLE)

{
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010deec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


// ===== 0010def4  FUN_0010def4 =====

void FUN_0010def4(undefined8 param_1)

{
  __cxa_atexit(FUN_0010dee0,param_1,&PTR_LOOP_001220e0);
  return;
}


// ===== 0010df10  FUN_0010df10 =====

void FUN_0010df10(void)

{
  __register_atfork();
  return;
}


// ===== 0010df20  FUN_0010df20 =====

long FUN_0010df20(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_001273e8 == '\0') {
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


// ===== 0010df50  _INIT_0 =====

void _INIT_0(void)

{
  uint uVar1;
  int iVar2;
  char acStack_6c [92];
  
  uVar1 = getauxval(0x10);
  if ((uVar1 >> 8 & 1) == 0) {
    DAT_001273e8 = 0;
    return;
  }
  iVar2 = __system_property_get("ro.arch",acStack_6c);
  if (0 < iVar2) {
    iVar2 = strncmp(acStack_6c,"exynos9810",10);
    DAT_001273e8 = iVar2 != 0;
    return;
  }
  DAT_001273e8 = 1;
  return;
}


// ===== 0010dfe8  FUN_0010dfe8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0010dfe8(ulong param_1,long param_2)

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
    DAT_001273f0 = DAT_001273f0 | 0x400;
  }
  uVar2 = (uint)uVar4;
  if ((uVar3 >> 4 & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x8000;
  }
  if ((uVar3 >> 0x1b & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 2;
  }
  if ((uVar2 >> 7 & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 6;
  }
  if ((~uVar3 & 0xc0000) == 0) {
    DAT_001273f0 = DAT_001273f0 | 0x20;
  }
  if ((uVar3 >> 0x14 & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x10;
  }
  if ((uVar3 >> 0x17 & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 8;
  }
  if ((uVar3 >> 9 & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x10100;
  }
  if ((uVar3 >> 0x18 & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x20000;
  }
  if ((uVar3 >> 0xc & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x40;
  }
  if ((uVar3 >> 0x1a & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x800000;
  }
  if ((uVar3 >> 3 & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x4000;
  }
  if ((uVar3 >> 5 & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x800;
  }
  if ((uVar3 >> 6 & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x1000;
  }
  if ((uVar3 >> 0xd & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x100000;
  }
  if ((uVar3 >> 0xe & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x200000;
  }
  if ((uVar3 >> 0x1d & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x400000000000;
  }
  if ((uVar3 >> 0x1c & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x2000000000000;
  }
  if ((uVar2 >> 0x12 & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x180000000000;
  }
  if ((uVar2 >> 0x16 & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x380000000000;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x2000000000;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x6000000000;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x8000000000;
  }
  if ((uVar2 >> 5 & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x10000000000;
  }
  if ((uVar2 >> 6 & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x20000000000;
  }
  if ((uVar4 & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x80000;
  }
  if ((uVar3 >> 8 & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x80;
  }
  if ((uVar2 >> 0x10 & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 1;
  }
  if ((uVar2 >> 0xd & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x4000000;
  }
  if ((uVar4 >> 0x20 & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x10000000;
  }
  if ((uVar4 >> 0x21 & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x100000000;
  }
  if ((uVar2 >> 0xf & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x2000000;
  }
  if ((uVar2 >> 8 & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x1000000;
  }
  if ((uVar2 >> 9 & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x200000000;
  }
  if ((uVar2 >> 10 & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x400000000;
  }
  if ((uVar2 >> 0xb & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x800000000;
  }
  if ((uVar2 >> 0x11 & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x4000000000000;
  }
  if ((uVar2 >> 0x15 & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x20000000;
  }
  if ((int)uVar2 < 0) {
    DAT_001273f0 = DAT_001273f0 | 0x40000000000000;
  }
  if ((uVar2 >> 0x17 & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x40000000000;
  }
  if ((uVar2 >> 0x18 & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x100000000000000;
  }
  if ((uVar2 >> 0x19 & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x80000000000000;
  }
  if ((uVar4 >> 0x2b & 1) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x800000000000000;
  }
  if ((uVar3 >> 0xb & 1) == 0) {
    if ((param_1 & 0x201) != 0) {
      DAT_001273f0 = DAT_001273f0 | 0x300;
    }
    if ((uVar4 & 1) != 0 || (param_1 & 0x10000) != 0) {
      DAT_001273f0 = DAT_001273f0 | 0x40000;
    }
    if ((param_1 & 0x4008000) != 0) {
      DAT_001273f0 = DAT_001273f0 | 0x400000;
    }
    if ((uVar4 & 0x100004000) != 0) {
      DAT_001273f0 = DAT_001273f0 | 0x8000000;
    }
    uVar5 = DAT_001273f0 | (ulong)(uVar2 << 0x13) & 0x80000000;
    if ((uVar4 & 2) != 0 && (param_1 & 0x400000) != 0) {
      uVar5 = uVar5 | 0x1000000000;
    }
    uVar5 = uVar5 | (param_1 & 0x20000) >> 4;
    goto LAB_0010e150;
  }
  uVar4 = id_aa64pfr1_el1;
  if ((uVar4 & 0xf00) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x80000000000;
  }
  if ((uVar4 & 0xf0) == 0x10) {
    DAT_001273f0 = DAT_001273f0 | 0x1000000000000;
    if ((uVar4 & 0xf000000) != 0x2000000) goto LAB_0010e440;
LAB_0010e494:
    DAT_001273f0 = DAT_001273f0 | 0x200000000000000;
    uVar4 = id_aa64pfr0_el1;
    uVar3 = (uint)uVar4;
  }
  else {
    if ((uVar4 & 0xf000000) == 0x2000000) goto LAB_0010e494;
LAB_0010e440:
    uVar4 = id_aa64pfr0_el1;
    uVar3 = (uint)uVar4;
  }
  if ((~uVar3 & 0xf0000) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x300;
  }
  if ((uVar4 & 0xf00000000) != 0) {
    uVar4 = UnkSytemRegRead(3,0,0,4,4);
    if ((uVar4 & 0xf) == 1) {
      DAT_001273f0 = DAT_001273f0 | 0x1000000000;
    }
    else if ((uVar4 & 0xf) == 0) {
      DAT_001273f0 = DAT_001273f0 | 0x40000000;
    }
    if ((uVar4 & 0xf00000) != 0) {
      DAT_001273f0 = DAT_001273f0 | 0x80000000;
    }
  }
  uVar4 = id_aa64isar0_el1;
  if ((uVar4 & 0xf00000000) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x2000;
  }
  uVar4 = id_aa64isar1_el1;
  uVar5 = uVar4 >> 0x14 & 0xf;
  if ((uVar4 & 0xf) != 0) {
    DAT_001273f0 = DAT_001273f0 | 0x40000;
  }
  if (uVar5 != 0) {
    if (uVar5 == 3) {
      DAT_001273f0 = DAT_001273f0 | 0x400000000400000;
    }
    else {
      DAT_001273f0 = DAT_001273f0 | 0x400000;
    }
  }
  uVar5 = DAT_001273f0 | 0x800000000000;
  if ((uVar4 & 0xf0000000000) != 0x20000000000) {
    uVar5 = DAT_001273f0;
  }
  if ((uVar4 & 0xf00000000000) != 0) {
    uVar5 = uVar5 | 0x8000000;
  }
  if (uVar4 >> 0x3c != 0) {
    if (uVar4 >> 0x3d == 0) {
      DAT_001273f0 = uVar5 | 0x8008000000000000;
      return;
    }
    uVar1 = 0x38000000000000;
    if (uVar4 >> 0x3c < 3) {
      uVar1 = 0x18000000000000;
    }
    DAT_001273f0 = uVar5 | uVar1 | 0x8000000000000000;
    return;
  }
LAB_0010e150:
  DAT_001273f0 = uVar5 | 0x8000000000000000;
  return;
}


// ===== 0010e584  _INIT_1 =====

void _INIT_1(void)

{
  int iVar1;
  ulong uVar2;
  char local_70 [8];
  ulong uStack_68;
  undefined8 local_60;
  
  if (DAT_001273f0 != 0) {
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
    FUN_0010dfe8(uVar2 | 0x4000000000000000,local_70);
  }
  return;
}


// ===== 0010e610  FUN_0010e610 =====

long FUN_0010e610(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_001273e8 == '\0') {
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


// ===== 0010e640  FUN_0010e640 =====

undefined8 FUN_0010e640(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_80 [24];
  code *local_68;
  long local_38;
  
  FUN_0010e988(param_2,param_1);
  iVar2 = FUN_0010eaac(param_2);
  while( true ) {
    if (iVar2 == 0) {
      return 5;
    }
    if (iVar2 < 0) break;
    FUN_0010ea30(param_2,0xfffffffe,&local_38);
    iVar2 = FUN_0010eac0(param_2,auStack_80);
    if (iVar2 != 0) {
      return 2;
    }
    if (local_68 != (code *)0x0) {
      uVar3 = 6;
      if (local_38 != param_3[3]) {
        uVar3 = 2;
      }
      iVar2 = (*local_68)(1,uVar3,*param_3,param_3,param_2);
      puVar1 = PTR___sF_00123050;
      if (iVar2 != 8) {
        if (iVar2 != 7) {
          return 2;
        }
        FUN_0010eb00(param_2);
        return 2;
      }
      if (local_38 == param_3[3]) {
        fprintf((FILE *)(PTR___sF_00123050 + 0x130),"libunwind: %s - %s\n","unwind_phase2",
                "during phase1 personality function said it would stop here, but now in phase2 it did not stop here"
               );
        fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    iVar2 = FUN_0010eaac(param_2);
  }
  return 2;
}


// ===== 0010e774  FUN_0010e774 =====

void FUN_0010e774(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_4a0 [624];
  undefined1 auStack_230 [528];
  
  FUN_0010e8ec(auStack_230);
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_0010e640(auStack_230,auStack_4a0,param_1);
  }
  else {
    FUN_0010e7f8(auStack_230,auStack_4a0,param_1,*(long *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = PTR___sF_00123050;
  fprintf((FILE *)(PTR___sF_00123050 + 0x130),"libunwind: %s - %s\n","_Unwind_Resume",
          "_Unwind_Resume() can\'t return");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0010e7f8  FUN_0010e7f8 =====

void FUN_0010e7f8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,code *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_78 [24];
  code *local_60;
  
  FUN_0010e988(param_2,param_1);
  iVar1 = FUN_0010eaac(param_2);
  while( true ) {
    if (iVar1 < 1) {
      (*param_4)(1,0x1a,*param_3,param_3,param_2,param_5);
      return;
    }
    iVar1 = FUN_0010eac0(param_2,auStack_78);
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
      FUN_0010eb00(param_2);
    }
    iVar1 = FUN_0010eaac(param_2);
  }
  return;
}


// ===== 0010e8ec  FUN_0010e8ec =====

undefined8
FUN_0010e8ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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


// ===== 0010e988  FUN_0010e988 =====

undefined8 FUN_0010e988(undefined8 *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = &PTR_FUN_001220f8;
  param_1[1] = &DAT_001273f8;
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
  FUN_0010f350(param_1,0);
  return 0;
}


// ===== 0010ea30  FUN_0010ea30 =====

undefined8 FUN_0010ea30(long *param_1,undefined4 param_2,undefined8 *param_3)

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


// ===== 0010eaac  FUN_0010eaac =====

void FUN_0010eaac(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010eabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,1);
  return;
}


// ===== 0010eac0  FUN_0010eac0 =====

undefined4 FUN_0010eac0(long *param_1,long param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x48))();
  uVar1 = 0xffffe66b;
  if (*(long *)(param_2 + 8) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 0010eb00  FUN_0010eb00 =====

undefined8 FUN_0010eb00(long *param_1)

{
  (**(code **)(*param_1 + 0x50))();
  return 0xffffe674;
}


// ===== 0010eb28  FUN_0010eb28 =====

char * FUN_0010eb28(undefined8 param_1,uint *param_2,undefined8 *param_3,long *param_4,ulong param_5
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
      pcVar7 = (char *)FUN_0010ecb8(param_1,lVar8,param_4);
      if (pcVar7 != (char *)0x0) {
        return pcVar7;
      }
    }
    else if (*param_4 != lVar8) {
      return "CIE start does not match";
    }
    lVar8 = (long)puVar10 + uVar9;
    local_48 = puVar10 + 1;
    lVar3 = FUN_00110b10(param_1,&local_48,lVar8,(char)param_4[3],0);
    lVar4 = FUN_00110b10(param_1,&local_48,lVar8,*(byte *)(param_4 + 3) & 0xf,0);
    cVar1 = *(char *)((long)param_4 + 0x31);
    param_3[5] = 0;
    puVar10 = local_48;
    if (cVar1 != '\0') {
      lVar5 = FUN_00110e9c(&local_48,lVar8);
      puVar2 = local_48;
      puVar10 = (uint *)((long)local_48 + lVar5);
      if ((*(byte *)((long)param_4 + 0x19) != 0xff) &&
         (lVar5 = FUN_00110b10(param_1,&local_48,lVar8,*(byte *)((long)param_4 + 0x19) & 0xf,0),
         lVar5 != 0)) {
        local_48 = puVar2;
        uVar6 = FUN_00110b10(param_1,&local_48,lVar8,*(undefined1 *)((long)param_4 + 0x19),0);
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


// ===== 0010ecb8  FUN_0010ecb8 =====

char * FUN_0010ecb8(undefined8 param_1,uint *param_2,long *param_3)

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
      uVar7 = FUN_00110e9c(&local_48,pbVar1);
      uVar13 = 0;
      uVar14 = 0;
      *(undefined4 *)(param_3 + 5) = uVar7;
      puVar5 = PTR___sF_00123050;
      pbVar11 = local_48;
      pbVar15 = local_48;
      do {
        pbVar12 = pbVar11;
        if (pbVar15 == pbVar1) {
          fprintf((FILE *)(PTR___sF_00123050 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
        uVar6 = FUN_00110e9c(&local_48,pbVar1);
        *(undefined1 *)((long)param_3 + 0x32) = uVar6;
        bVar2 = *pbVar18;
      }
      if (bVar2 == 0x7a) {
        FUN_00110e9c(&local_48,pbVar1);
LAB_0010ee38:
        bVar2 = *pbVar18;
        if (bVar2 < 0x50) {
          if (bVar2 < 0x47) {
            if (bVar2 != 0x42) {
              if (bVar2 != 0) goto LAB_0010eed8;
              goto LAB_0010ef1c;
            }
            *(undefined1 *)((long)param_3 + 0x33) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_0010ee38;
          }
          if (bVar2 == 0x47) {
            *(undefined1 *)((long)param_3 + 0x34) = 1;
            goto LAB_0010eed8;
          }
          if (bVar2 == 0x4c) {
            pbVar18 = pbVar18 + 1;
            *(byte *)((long)param_3 + 0x19) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_0010ee38;
          }
        }
        else if (bVar2 < 0x53) {
          if (bVar2 == 0x50) {
            bVar2 = *local_48;
            *(byte *)((long)param_3 + 0x1a) = bVar2;
            *(char *)((long)param_3 + 0x1b) = (char)(local_48 + 1) - (char)param_2;
            local_48 = local_48 + 1;
            lVar8 = FUN_00110b10(param_1,&local_48,pbVar1,bVar2,0);
            param_3[4] = lVar8;
            pbVar18 = pbVar18 + 1;
            goto LAB_0010ee38;
          }
          if (bVar2 == 0x52) {
            pbVar18 = pbVar18 + 1;
            *(byte *)(param_3 + 3) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_0010ee38;
          }
        }
        else {
          if (bVar2 == 0x53) {
            *(undefined1 *)(param_3 + 6) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_0010ee38;
          }
          if (bVar2 == 0x7a) {
            *(undefined1 *)((long)param_3 + 0x31) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_0010ee38;
          }
        }
LAB_0010eed8:
        pbVar18 = pbVar18 + 1;
        goto LAB_0010ee38;
      }
LAB_0010ef1c:
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


// ===== 0010ef80  FUN_0010ef80 =====

void FUN_0010ef80(void)

{
  return;
}


// ===== 0010ef88  FUN_0010ef88 =====

void FUN_0010ef88(void)

{
  return;
}


// ===== 0010ef90  FUN_0010ef90 =====

bool FUN_0010ef90(undefined8 param_1,uint param_2)

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


// ===== 0010efd4  FUN_0010efd4 =====

undefined8 FUN_0010efd4(long param_1,uint param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_00123050;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_0010f03c:
      return *(undefined8 *)(param_1 + 0x108);
    }
    if (param_2 == 0xffffffff) goto LAB_0010f030;
    if (param_2 == 0x1d) {
      return *(undefined8 *)(param_1 + 0xf8);
    }
  }
  else if ((int)param_2 < 0x20) {
    if (param_2 == 0x1e) {
      return *(undefined8 *)(param_1 + 0x100);
    }
    if (param_2 == 0x1f) goto LAB_0010f03c;
  }
  else {
    if (param_2 == 0x22) {
      return *(undefined8 *)(param_1 + 0x118);
    }
    if (param_2 == 0x20) {
LAB_0010f030:
      return *(undefined8 *)(param_1 + 0x110);
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_00123050 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8);
}


// ===== 0010f0bc  FUN_0010f0bc =====

void FUN_0010f0bc(long param_1,uint param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_00123050;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_0010f124:
      *(undefined8 *)(param_1 + 0x108) = param_3;
      return;
    }
    if (param_2 == 0xffffffff) goto LAB_0010f118;
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
    if (param_2 == 0x1f) goto LAB_0010f124;
  }
  else {
    if (param_2 == 0x22) {
      *(undefined8 *)(param_1 + 0x118) = param_3;
      return;
    }
    if (param_2 == 0x20) {
LAB_0010f118:
      *(undefined8 *)(param_1 + 0x110) = param_3;
      return;
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_00123050 + 0x130),"libunwind: %s - %s\n","setRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8) = param_3;
  return;
}


// ===== 0010f1a4  FUN_0010f1a4 =====

bool FUN_0010f1a4(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffffffe0) == 0x40;
}


// ===== 0010f1b8  FUN_0010f1b8 =====

undefined1  [16] FUN_0010f1b8(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + (long)param_2 * 8 + -0xe0);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 0010f1c8  FUN_0010f1c8 =====

void FUN_0010f1c8(undefined8 param_1,long param_2,int param_3)

{
  *(undefined8 *)(param_2 + (long)param_3 * 8 + -0xe0) = param_1;
  return;
}


// ===== 0010f1d8  FUN_0010f1d8 =====

ulong FUN_0010f1d8(long *param_1,uint param_2)

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
    uVar3 = FUN_0010f6fc(lVar1,uVar4,param_1[0x4b],param_1 + 2,(long)param_1 + 0x269,param_2 & 1);
    iVar2 = (int)uVar3;
  }
  else {
    memset(auStack_240,0,0x210);
    uVar3 = FUN_0010f5dc(param_1,auStack_240);
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


// ===== 0010f2c8  FUN_0010f2c8 =====

void FUN_0010f2c8(long param_1,undefined8 *param_2)

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


// ===== 0010f30c  FUN_0010f30c =====

void FUN_0010f30c(long param_1)

{
  FUN_001123a4(param_1 + 0x10);
  return;
}


// ===== 0010f318  FUN_0010f318 =====

undefined1 FUN_0010f318(long param_1)

{
  return *(undefined1 *)(param_1 + 0x269);
}


// ===== 0010f324  FUN_0010f324 =====

undefined8 FUN_0010f324(long *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  return 0;
}


// ===== 0010f350  FUN_0010f350 =====

void FUN_0010f350(long *param_1,ulong param_2)

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
  iVar1 = dl_iterate_phdr(FUN_00111cf4,&local_648);
  if (((iVar1 == 0) || (local_668 == 0)) ||
     (uVar4 = FUN_00111a20(param_1,uVar7,auStack_678,0), (uVar4 & 1) == 0)) {
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_001273fc);
    for (puVar6 = PTR_DAT_001273c0; puVar6 < PTR_DAT_001273c8; puVar6 = puVar6 + 0x20) {
      if ((*(ulong *)(puVar6 + 8) <= uVar7) && (uVar7 < *(ulong *)(puVar6 + 0x10))) {
        lVar3 = *(long *)(puVar6 + 0x18);
        pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001273fc);
        if ((lVar3 != 0) &&
           (lVar3 = FUN_0010eb28(param_1[1],lVar3,&local_6a8,local_6e0,0), lVar3 == 0)) {
          memset(&local_648,0,0x618);
          uVar7 = FUN_0010fb84(param_1[1],&local_6a8,local_6e0,uVar7,4,&local_648);
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
        goto LAB_0010f4d8;
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001273fc);
LAB_0010f4d8:
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


// ===== 0010f5d0  FUN_0010f5d0 =====

void FUN_0010f5d0(undefined8 param_1,undefined4 param_2)

{
  FUN_00112374(param_2);
  return;
}


// ===== 0010f5dc  FUN_0010f5dc =====

undefined8 FUN_0010f5dc(long param_1)

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


// ===== 0010f6fc  FUN_0010f6fc =====

undefined8
FUN_0010f6fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,
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
  
  lVar7 = FUN_0010eb28(param_1,param_3,auStack_b0,auStack_e8,0);
  if (lVar7 == 0) {
    memset(auStack_700,0,0x618);
    uVar8 = FUN_0010fb84(param_1,auStack_b0,auStack_e8,param_2,4,auStack_700);
    if ((uVar8 & 1) != 0) {
      uVar8 = FUN_001107cc(param_1,auStack_700,param_4);
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
        puVar3 = PTR___sF_00123050;
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
              goto LAB_0010f9dc;
            }
            else {
              puVar13 = (undefined8 *)((long)param_4 + 0x108);
              if ((local_b6 != 0x22) &&
                 ((puVar13 = (undefined8 *)((long)param_4 + 0x100), local_b6 != 0x20 &&
                  (puVar13 = (undefined8 *)((long)param_4 + 0xf8), local_b6 != 0x1f)))) {
LAB_0010f9dc:
                if (0x1c < local_b6) {
                  fprintf((FILE *)(PTR___sF_00123050 + 0x130),"libunwind: %s - %s\n","getRegister",
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
LAB_0010fae8:
                  fprintf((FILE *)(PTR___sF_00123050 + 0x130),"libunwind: %s - %s\n",
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
              if (iVar2 != 6) goto LAB_0010fae8;
              puVar9 = (ulong *)FUN_00111064(*(undefined8 *)(piVar15 + 2),param_1,param_4,uVar8);
              uVar18 = *puVar9;
            }
            local_a00[uVar12] = uVar18;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == local_b6) {
            uVar14 = FUN_00110900(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == 0x22) {
            uVar10 = FUN_00110900(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
          }
          else {
            if (0xffffffe0 < uVar16 - 0x40) {
              return 0xffffe672;
            }
            uVar11 = FUN_00110900(param_1,param_4,uVar8,piVar15);
            puVar3 = PTR___sF_00123050;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
            if ((int)uVar16 < 0x1f) {
              uVar5 = uVar11;
              if ((uVar16 != 0x1d) && (uVar5 = local_a00[0x3b], uVar6 = uVar11, uVar16 != 0x1e))
              goto LAB_0010fa30;
            }
            else {
              uVar18 = uVar11;
              if ((uVar16 != 0x1f) &&
                 ((uVar18 = local_a00[0x3d], uVar10 = uVar11, uVar16 != 0x22 &&
                  (uVar10 = local_a00[0x3f], uVar16 != 0x20)))) {
LAB_0010fa30:
                if (0x1c < uVar12) {
                  fprintf((FILE *)(PTR___sF_00123050 + 0x130),"libunwind: %s - %s\n","setRegister",
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
            FUN_00110900(param_1,auStack_b20,uVar8,&local_80);
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


// ===== 0010fb84  FUN_0010fb84 =====

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_0010fb84(undefined8 param_1,long *param_2,long *param_3,long param_4,int param_5,
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
LAB_0010fc08:
    lVar20 = lVar20 + 0x18;
    if (lVar20 == 0x30) {
      return 1;
    }
  }
  uVar17 = 0;
LAB_0010fc38:
  puVar18 = local_6c0;
  puVar5 = PTR___sF_00123050;
  pbVar10 = pbVar21 + 1;
  bVar3 = *pbVar21;
  apbStack_6a0[0xc0] = pbVar10;
  switch((ulong)bVar3) {
  case 0:
    goto code_r0x0011050c;
  case 1:
    uVar17 = FUN_00110b10(local_6c8,apbStack_6a0 + 0xc0,pbVar2,(char)param_3[3],0);
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 2:
    uVar9 = (uint)pbVar21[1];
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 2;
    goto LAB_001100c0;
  case 3:
    uVar9 = (uint)*(ushort *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 3;
    goto LAB_001100c0;
  case 4:
    uVar9 = *(uint *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 5;
LAB_001100c0:
    uVar17 = uVar17 + iVar13 * uVar9;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 5:
    uVar19 = FUN_00110e9c(apbStack_6a0 + 0xc0,pbVar2);
    lVar8 = FUN_00110e9c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended DWARF unwind, reg too big\n";
      __size = 0x46;
      __s = (FILE *)(PTR___sF_00123050 + 0x130);
      goto LAB_001106bc;
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
LAB_0011005c:
    puVar12[6] = 2;
    *(long *)(puVar12 + 8) = lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 6:
    uVar19 = FUN_00110e9c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_restore_extended DWARF unwind, reg too big\n";
LAB_001105ac:
      __s = (FILE *)(PTR___sF_00123050 + 0x130);
      __size = 0x47;
      goto LAB_001106bc;
    }
    cVar4 = *(char *)(param_6 + uVar19 * 4 + 7);
joined_r0x001104ec:
    if (cVar4 != '\0') {
      pbVar21 = apbStack_6a0[uVar19 * 2];
      *(byte **)(param_6 + uVar19 * 4 + 8) = apbStack_6a0[uVar19 * 2 + 1];
      *(byte **)(param_6 + uVar19 * 4 + 6) = pbVar21;
    }
    goto code_r0x0011050c;
  case 7:
    uVar19 = FUN_00110e9c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_undefined DWARF unwind, reg too big\n";
LAB_001106b0:
      __s = (FILE *)(PTR___sF_00123050 + 0x130);
      __size = 0x40;
      goto LAB_001106bc;
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
    uVar19 = FUN_00110e9c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_same_value DWARF unwind, reg too big\n";
LAB_00110694:
      __s = (FILE *)(PTR___sF_00123050 + 0x130);
      __size = 0x41;
      goto LAB_001106bc;
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
    uVar19 = FUN_00110e9c(apbStack_6a0 + 0xc0,pbVar2);
    uVar14 = FUN_00110e9c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg too big\n";
      __size = 0x3f;
      __s = (FILE *)(PTR___sF_00123050 + 0x130);
      goto LAB_001106bc;
    }
    if (0x5f < uVar14) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg2 too big\n";
      goto LAB_001106b0;
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
    uVar19 = FUN_00110e9c(apbStack_6a0 + 0xc0,pbVar2);
    uVar7 = FUN_00110e9c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa DWARF unwind, reg too big\n";
      __size = 0x3e;
      __s = (FILE *)(PTR___sF_00123050 + 0x130);
      goto LAB_001106bc;
    }
    *param_6 = (int)uVar19;
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xd:
    uVar19 = FUN_00110e9c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa_register DWARF unwind, reg too big\n";
      goto LAB_001105ac;
    }
    *param_6 = (int)uVar19;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xe:
    uVar7 = FUN_00110e9c(apbStack_6a0 + 0xc0,pbVar2);
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xf:
    *param_6 = 0;
    *(byte **)(param_6 + 2) = pbVar10;
    goto LAB_00110440;
  case 0x10:
    uVar19 = FUN_00110e9c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_expression DWARF unwind, reg too big\n";
      goto LAB_00110694;
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
LAB_00110438:
    puVar12[6] = uVar7;
    *(byte **)(puVar12 + 8) = apbStack_6a0[0xc0];
LAB_00110440:
    lVar8 = FUN_00110e9c(apbStack_6a0 + 0xc0,pbVar2);
    apbStack_6a0[0xc0] = apbStack_6a0[0xc0] + lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x11:
    uVar19 = FUN_00110e9c(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_00123050;
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended_sf DWARF unwind, reg too big\n";
      __size = 0x49;
      __s = (FILE *)(PTR___sF_00123050 + 0x130);
      goto LAB_001106bc;
    }
    uVar14 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_00123050 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
LAB_001103cc:
    puVar12[6] = uVar7;
    *(ulong *)(puVar12 + 8) = uVar11 * (long)iVar13;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x12:
    uVar14 = FUN_00110e9c(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_00123050;
    uVar19 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_00123050 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      goto LAB_00110694;
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
        fprintf((FILE *)(PTR___sF_00123050 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
    uVar19 = FUN_00110e9c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      fprintf((FILE *)(PTR___sF_00123050 + 0x130),
              "libunwind: malformed DW_CFA_val_offset DWARF unwind, reg (%lu) out of range\n\n",
              uVar19);
      goto LAB_001106c4;
    }
    lVar8 = FUN_00110e9c(apbStack_6a0 + 0xc0,pbVar2);
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
    uVar19 = FUN_00110e9c(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_00123050;
    if (uVar19 < 0x60) {
      uVar14 = 0;
      uVar11 = 0;
      pbVar21 = apbStack_6a0[0xc0];
      pbVar10 = apbStack_6a0[0xc0];
      do {
        if (pbVar10 == pbVar2) {
          fprintf((FILE *)(PTR___sF_00123050 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      goto LAB_001103cc;
    }
    __ptr = "libunwind: malformed DW_CFA_val_offset_sf DWARF unwind, reg too big\n";
    __size = 0x44;
    __s = (FILE *)(PTR___sF_00123050 + 0x130);
    goto LAB_001106bc;
  case 0x16:
    uVar19 = FUN_00110e9c(apbStack_6a0 + 0xc0,pbVar2);
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
      goto LAB_00110438;
    }
    __ptr = "libunwind: malformed DW_CFA_val_expression DWARF unwind, reg too big\n";
    __size = 0x45;
    __s = (FILE *)(PTR___sF_00123050 + 0x130);
    goto LAB_001106bc;
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
        goto joined_r0x001104ec;
      }
      if (bVar1 != 0x80) {
        return 0;
      }
      local_6dc = param_5;
      lVar8 = FUN_00110e9c(apbStack_6a0 + 0xc0,pbVar2);
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
    if (param_5 != 4) goto code_r0x0011050c;
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
    uVar7 = FUN_00110e9c(apbStack_6a0 + 0xc0,pbVar2);
    param_6[4] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x2f:
    uVar19 = FUN_00110e9c(apbStack_6a0 + 0xc0,pbVar2);
    if (uVar19 < 0x60) {
      lVar8 = FUN_00110e9c(apbStack_6a0 + 0xc0,pbVar2);
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
      goto LAB_0011005c;
    }
    __ptr = "libunwind: malformed DW_CFA_GNU_negative_offset_extended DWARF unwind, reg too big\n";
    __size = 0x53;
    __s = (FILE *)(PTR___sF_00123050 + 0x130);
LAB_001106bc:
    fwrite(__ptr,__size,1,__s);
LAB_001106c4:
    fflush((FILE *)(PTR___sF_00123050 + 0x130));
    return 0;
  }
joined_r0x0010fff4:
  if ((pbVar2 <= pbVar21) || (uVar16 <= uVar17)) goto LAB_0010fc08;
  goto LAB_0010fc38;
code_r0x0011050c:
  pbVar21 = apbStack_6a0[0xc0];
  goto joined_r0x0010fff4;
}


// ===== 001107cc  FUN_001107cc =====

long FUN_001107cc(undefined8 param_1,uint *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR___sF_00123050;
  uVar1 = *param_2;
  if ((int)uVar1 < 0x1e) {
    if ((int)uVar1 < 0) {
      if (uVar1 == 0xfffffffe) {
LAB_0011080c:
        return *(long *)(param_3 + 0xf8) + (long)(int)param_2[1];
      }
      if (uVar1 == 0xffffffff) goto LAB_00110850;
    }
    else {
      if (uVar1 == 0) {
        lVar3 = FUN_00111064(*(undefined8 *)(param_2 + 2),param_1,param_3,0);
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
    if (uVar1 == 0x1f) goto LAB_0011080c;
  }
  else {
    if (uVar1 == 0x22) {
      return *(long *)(param_3 + 0x108) + (long)(int)param_2[1];
    }
    if (uVar1 == 0x20) {
LAB_00110850:
      return *(long *)(param_3 + 0x100) + (long)(int)param_2[1];
    }
  }
  if (0x1c < uVar1) {
    fprintf((FILE *)(PTR___sF_00123050 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(long *)(param_3 + (ulong)uVar1 * 8) + (long)(int)param_2[1];
}


// ===== 00110900  FUN_00110900 =====

undefined8 FUN_00110900(undefined8 param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  puVar2 = PTR___sF_00123050;
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
LAB_00110a3c:
          return *(undefined8 *)(param_2 + 0xf8);
        }
        if (uVar5 == 0xffffffff) goto LAB_00110a24;
        if (uVar5 == 0x1d) {
          return *(undefined8 *)(param_2 + 0xe8);
        }
      }
      else if ((int)uVar5 < 0x20) {
        if (uVar5 == 0x1e) {
          return *(undefined8 *)(param_2 + 0xf0);
        }
        if (uVar5 == 0x1f) goto LAB_00110a3c;
      }
      else {
        if (uVar5 == 0x22) {
          return *(undefined8 *)(param_2 + 0x108);
        }
        if (uVar5 == 0x20) {
LAB_00110a24:
          return *(undefined8 *)(param_2 + 0x100);
        }
      }
      if (0x1c < uVar5) {
        fprintf((FILE *)(PTR___sF_00123050 + 0x130),"libunwind: %s - %s\n","getRegister",
                "unsupported arm64 register");
        fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      return *(undefined8 *)(param_2 + (*(ulong *)(param_4 + 2) & 0xffffffff) * 8);
    }
    if (iVar1 == 6) {
      puVar4 = (undefined8 *)FUN_00111064(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return *puVar4;
    }
    if (iVar1 == 7) {
      uVar3 = FUN_00111064(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return uVar3;
    }
  }
  fprintf((FILE *)(PTR___sF_00123050 + 0x130),"libunwind: %s - %s\n","getSavedRegister",
          "unsupported restore location for register");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00110b10  FUN_00110b10 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00110b10(undefined8 param_1,long *param_2,ulong *param_3,uint param_4,long param_5)

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
  
  puVar3 = PTR___sF_00123050;
  uVar1 = param_4 & 0xf;
  puVar10 = (ulong *)*param_2;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if ((param_4 & 0xf) == 0) goto LAB_00110c5c;
      if (uVar1 != 1) {
LAB_00110e68:
        fprintf((FILE *)(PTR___sF_00123050 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "unknown pointer encoding");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar4 = (undefined8 *)FUN_00110e9c(param_2,param_3);
      puVar3 = PTR___sF_00123050;
    }
    else if (uVar1 == 2) {
      puVar4 = (undefined8 *)(ulong)(ushort)*puVar10;
      *param_2 = (long)puVar10 + 2;
      puVar3 = PTR___sF_00123050;
    }
    else {
      if (uVar1 != 3) goto LAB_00110e68;
      puVar4 = (undefined8 *)(ulong)(uint)*puVar10;
      *param_2 = (long)((long)puVar10 + 4);
      puVar3 = PTR___sF_00123050;
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 4) {
LAB_00110c5c:
      puVar4 = (undefined8 *)*puVar10;
      *param_2 = (long)(puVar10 + 1);
      puVar3 = PTR___sF_00123050;
    }
    else {
      if (uVar1 != 9) goto LAB_00110e68;
      uVar7 = 0;
      uVar5 = 0;
      puVar6 = puVar10;
      puVar9 = puVar10;
      do {
        if (puVar9 == param_3) {
          fprintf((FILE *)(PTR___sF_00123050 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      puVar3 = PTR___sF_00123050;
    }
  }
  else if (uVar1 == 10) {
    puVar4 = (undefined8 *)(long)(short)*puVar10;
    *param_2 = (long)puVar10 + 2;
    puVar3 = PTR___sF_00123050;
  }
  else {
    if (uVar1 != 0xb) {
      if (uVar1 != 0xc) goto LAB_00110e68;
      goto LAB_00110c5c;
    }
    puVar4 = (undefined8 *)(long)(int)(uint)*puVar10;
    *param_2 = (long)((long)puVar10 + 4);
    puVar3 = PTR___sF_00123050;
  }
  uVar1 = (param_4 & 0xff) >> 4 & 7;
  PTR___sF_00123050 = puVar3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      if (uVar1 != 1) goto LAB_00110e34;
      puVar4 = (undefined8 *)((long)puVar4 + (long)puVar10);
    }
LAB_00110ce8:
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
      goto LAB_00110ce8;
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
LAB_00110e34:
  fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP","unknown pointer encoding");
  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00110e9c  FUN_00110e9c =====

ulong FUN_00110e9c(long *param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  puVar2 = PTR___sF_00123050;
  pbVar4 = (byte *)*param_1;
  if (pbVar4 != param_2) {
    pbVar5 = pbVar4 + 1;
    uVar3 = (ulong)*pbVar4 & 0x7f;
    if (-1 < (char)*pbVar4) {
LAB_00110ecc:
      *param_1 = (long)pbVar5;
      return uVar3;
    }
    if (pbVar5 != param_2) {
      uVar3 = uVar3 | (ulong)((int)(char)pbVar4[1] & 0x7f) << 7;
      pbVar5 = pbVar4 + 2;
      if (-1 < (char)pbVar4[1]) goto LAB_00110ecc;
      if (pbVar5 != param_2) {
        uVar3 = uVar3 | (ulong)((int)(char)pbVar4[2] & 0x7f) << 0xe;
        pbVar5 = pbVar4 + 3;
        if (-1 < (char)pbVar4[2]) goto LAB_00110ecc;
        if (pbVar5 != param_2) {
          uVar3 = uVar3 | (ulong)((int)(char)pbVar4[3] & 0x7f) << 0x15;
          pbVar5 = pbVar4 + 4;
          if (-1 < (char)pbVar4[3]) goto LAB_00110ecc;
          if (pbVar5 != param_2) {
            uVar3 = uVar3 | (ulong)((int)(char)pbVar4[4] & 0x7f) << 0x1c;
            pbVar5 = pbVar4 + 5;
            if (-1 < (char)pbVar4[4]) goto LAB_00110ecc;
            if (pbVar5 != param_2) {
              uVar3 = uVar3 | (ulong)((int)(char)pbVar4[5] & 0x7f) << 0x23;
              pbVar5 = pbVar4 + 6;
              if (-1 < (char)pbVar4[5]) goto LAB_00110ecc;
              if (pbVar5 != param_2) {
                uVar3 = uVar3 | (ulong)((int)(char)pbVar4[6] & 0x7f) << 0x2a;
                pbVar5 = pbVar4 + 7;
                if (-1 < (char)pbVar4[6]) goto LAB_00110ecc;
                if (pbVar5 != param_2) {
                  uVar3 = uVar3 | (ulong)((int)(char)pbVar4[7] & 0x7f) << 0x31;
                  pbVar5 = pbVar4 + 8;
                  if (-1 < (char)pbVar4[7]) goto LAB_00110ecc;
                  if (pbVar5 != param_2) {
                    uVar3 = uVar3 | (ulong)((int)(char)pbVar4[8] & 0x7f) << 0x38;
                    pbVar5 = pbVar4 + 9;
                    if (-1 < (char)pbVar4[8]) goto LAB_00110ecc;
                    if (pbVar5 != param_2) {
                      bVar1 = *pbVar5;
                      if ((bVar1 & 0x7e) == 0) {
                        if (-1 < (char)bVar1) {
                          *param_1 = (long)(pbVar4 + 10);
                          return uVar3 | (ulong)bVar1 << 0x3f;
                        }
                        if (pbVar4 + 10 == param_2) goto LAB_00110ffc;
                      }
                      fprintf((FILE *)(PTR___sF_00123050 + 0x130),"libunwind: %s - %s\n",
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
LAB_00110ffc:
  fprintf((FILE *)(PTR___sF_00123050 + 0x130),"libunwind: %s - %s\n","getULEB128",
          "truncated uleb128 expression");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00111064  FUN_00111064 =====

ulong FUN_00111064(byte *param_1,undefined8 param_2,long param_3,ulong param_4)

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
  lVar11 = FUN_00110e9c(&local_68,param_1 + 0x14);
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
      puVar9 = PTR___sF_00123050;
      pbVar13 = pbVar18 + 1;
      local_68 = pbVar13;
      bVar8 = *pbVar18;
      uVar10 = (uint)bVar8;
      if (0x91 < uVar10 - 3) {
code_r0x001118e0:
        fprintf((FILE *)(PTR___sF_00123050 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
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
        goto LAB_0011154c;
      case 4:
      case 5:
      case 7:
        goto code_r0x001118e0;
      case 6:
        puVar14 = (ulong *)*puVar19;
LAB_001114dc:
        *puVar19 = *puVar14;
        goto LAB_001110e8;
      case 8:
        uVar16 = (ulong)pbVar18[1];
        goto LAB_001114b0;
      case 9:
        uVar16 = (ulong)(char)pbVar18[1];
LAB_001114b0:
        local_68 = pbVar18 + 2;
        goto LAB_0011154c;
      case 10:
        uVar16 = (ulong)*(ushort *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_0011154c;
      case 0xb:
        uVar16 = (ulong)*(short *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_0011154c;
      case 0xc:
        uVar16 = (ulong)*(uint *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_0011154c;
      case 0xd:
        uVar16 = (ulong)*(int *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_0011154c;
      case 0x10:
        uVar16 = FUN_00110e9c(&local_68,pbVar6);
        puVar19 = puVar19 + 1;
        *puVar19 = uVar16;
        goto LAB_001110e8;
      case 0x11:
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = pbVar13;
        do {
          if (pbVar18 == pbVar6) {
            fprintf((FILE *)(PTR___sF_00123050 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
        goto LAB_001110e8;
      case 0x12:
        uVar16 = *puVar19;
        goto LAB_001110e4;
      case 0x13:
        puVar19 = puVar19 + -1;
        goto LAB_001110e8;
      case 0x14:
        uVar16 = puVar19[-1];
        goto LAB_001110e4;
      case 0x15:
        local_68 = pbVar18 + 2;
        uVar16 = puVar19[-(ulong)pbVar18[1]];
LAB_0011154c:
LAB_001110e4:
        puVar19[1] = uVar16;
        puVar19 = puVar19 + 1;
        goto LAB_001110e8;
      case 0x16:
        auVar20 = NEON_ext(*(undefined1 (*) [16])(puVar19 + -1),*(undefined1 (*) [16])(puVar19 + -1)
                           ,8,1);
        *puVar19 = auVar20._8_8_;
        puVar19[-1] = auVar20._0_8_;
        goto LAB_001110e8;
      case 0x17:
        uVar16 = *puVar19;
        *puVar19 = SUB168(*(undefined1 (*) [16])(puVar19 + -2),8);
        puVar19[-1] = SUB168(*(undefined1 (*) [16])(puVar19 + -2),0);
        puVar19[-2] = uVar16;
        goto LAB_001110e8;
      case 0x18:
        puVar14 = (ulong *)*puVar19;
        puVar19 = puVar19 + -1;
        *puVar19 = *puVar14;
        goto LAB_001110e8;
      case 0x19:
        uVar16 = *puVar19;
        if ((long)uVar16 < 0) goto LAB_00111684;
        goto LAB_001110e8;
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
LAB_00111684:
        *puVar19 = -uVar16;
        goto LAB_001110e8;
      case 0x20:
        *puVar19 = ~*puVar19;
        goto LAB_001110e8;
      case 0x21:
        uVar16 = puVar19[-1] | *puVar19;
        break;
      case 0x22:
        uVar16 = puVar19[-1] + *puVar19;
        break;
      case 0x23:
        lVar11 = FUN_00110e9c(&local_68,pbVar6);
        *puVar19 = *puVar19 + lVar11;
        goto LAB_001110e8;
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
        goto LAB_001110e8;
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
        goto LAB_001110e8;
      default:
        uVar16 = (ulong)(uVar15 - 0x30);
        goto LAB_001110e4;
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
        goto LAB_001110e0;
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
            fprintf((FILE *)(PTR___sF_00123050 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
             (puVar14 = puVar2, bVar8 != 0x8d)) goto LAB_00111220;
        }
        else if (bVar8 < 0x90) {
          puVar14 = puVar1;
          if ((bVar8 != 0x8e) && (puVar14 = puVar4, uVar15 != 0x8f)) {
LAB_00111220:
            if (0x1c < uVar10 - 0x70) {
              fprintf((FILE *)(PTR___sF_00123050 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((bVar8 != 0x90) && (puVar14 = puVar3, bVar8 != 0x92)) goto LAB_00111220;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_001110e4;
      case 0x90:
        uVar10 = FUN_00110e9c(&local_68,pbVar6);
        puVar9 = PTR___sF_00123050;
        if ((int)uVar10 < 0x1e) {
          if (((uVar10 != 0xfffffffe) && (puVar14 = puVar5, uVar10 != 0xffffffff)) &&
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_00111784;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_00111784:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_00123050 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_00111784;
        }
LAB_001110e0:
        uVar16 = *puVar14;
        goto LAB_001110e4;
      case 0x91:
        fprintf((FILE *)(PTR___sF_00123050 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_fbreg not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x92:
        uVar10 = FUN_00110e9c(&local_68,pbVar6);
        puVar9 = PTR___sF_00123050;
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = local_68;
        pbVar13 = local_68;
        do {
          if (pbVar13 == pbVar6) {
            fprintf((FILE *)(PTR___sF_00123050 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_001117ac;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_001117ac:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_00123050 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_001117ac;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_001110e4;
      case 0x93:
        fprintf((FILE *)(PTR___sF_00123050 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
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
LAB_00111984:
              fprintf((FILE *)(PTR___sF_00123050 + 0x130),"libunwind: %s - %s\n",
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
            if (bVar8 != 8) goto LAB_00111984;
            goto LAB_001114dc;
          }
          *puVar19 = (ulong)(uint)*puVar14;
        }
        goto LAB_001110e8;
      }
      puVar19[-1] = uVar16;
      puVar19 = puVar19 + -1;
LAB_001110e8:
      pbVar18 = local_68;
    } while (local_68 < pbVar6);
    param_4 = *puVar19;
  }
  return param_4;
}


// ===== 00111a20  FUN_00111a20 =====

undefined8 FUN_00111a20(long param_1,ulong param_2,long *param_3,uint param_4)

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
      (uVar3 = FUN_00111f48(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],
                            param_3[2] + (ulong)param_4,&local_6b0,auStack_6e8), (uVar3 & 1) == 0))
     && ((param_3[4] == 0 ||
         (uVar3 = FUN_00112110(*(undefined8 *)(param_1 + 8),param_2,param_3[4],(int)param_3[5],
                               &local_6b0,auStack_6e8), (uVar3 & 1) == 0)))) {
    lVar5 = *param_3;
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_001273fc);
    if (PTR_DAT_001273c0 < PTR_DAT_001273c8) {
      plVar4 = (long *)PTR_DAT_001273c0;
      if (lVar5 == -1) {
        do {
          if (((ulong)plVar4[1] <= param_2) && (param_2 < (ulong)plVar4[2])) goto LAB_00111b28;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_001273c8);
      }
      else {
        do {
          if (((*plVar4 == lVar5) && ((ulong)plVar4[1] <= param_2)) && (param_2 < (ulong)plVar4[2]))
          goto LAB_00111b28;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_001273c8);
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001273fc);
    goto LAB_00111b70;
  }
LAB_00111b90:
  bVar2 = 1;
LAB_00111b94:
  lVar5 = *param_3;
  memset(auStack_680,0,0x618);
  uVar3 = FUN_0010fb84(*(undefined8 *)(param_1 + 8),&local_6b0,auStack_6e8,param_2,4,auStack_680);
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
      pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_001273fc);
      __src = PTR_DAT_001273c0;
      if (PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001273d0
          <= PTR_DAT_001273c8) {
        __n = (long)
              PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001273d0
              - (long)PTR_DAT_001273c0;
        __dest = (undefined *)malloc(__n * 4);
        memcpy(__dest,__src,__n);
        if ((undefined8 *)__src != &DAT_00127438) {
          free(__src);
        }
        PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001273d0
             = __dest + ((long)__n >> 3) * 0x20;
        PTR_DAT_001273c8 = __dest + __n;
        PTR_DAT_001273c0 = __dest;
      }
      *(long *)PTR_DAT_001273c8 = lVar5;
      *(long *)((long)PTR_DAT_001273c8 + 8) = local_698;
      *(long *)((long)PTR_DAT_001273c8 + 0x18) = local_6b0;
      *(long *)((long)PTR_DAT_001273c8 + 0x10) = local_690;
      PTR_DAT_001273c8 = (undefined *)((long)PTR_DAT_001273c8 + 0x20);
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001273fc);
      return 1;
    }
    return 1;
  }
  return 1;
LAB_00111b28:
  lVar5 = plVar4[3];
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001273fc);
  if ((lVar5 != 0) &&
     (uVar3 = FUN_00111f48(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],lVar5,
                           &local_6b0,auStack_6e8), (uVar3 & 1) != 0)) {
    bVar2 = 0;
    goto LAB_00111b94;
  }
LAB_00111b70:
  uVar3 = FUN_00111f48(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],0,&local_6b0,
                       auStack_6e8);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  goto LAB_00111b90;
}


// ===== 00111cf4  FUN_00111cf4 =====

undefined8 FUN_00111cf4(ulong *param_1,undefined8 param_2,undefined8 *param_3)

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
              uVar5 = FUN_00111e28(uVar2,lVar8,lVar9 + lVar8,local_70);
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


// ===== 00111e28  FUN_00111e28 =====

undefined8 FUN_00111e28(undefined8 param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte *local_28;
  
  puVar3 = PTR___sF_00123050;
  if ((ulong)((long)param_3 - (long)param_2) < 4) {
    if (param_3 == param_2) {
      return 0;
    }
    fprintf((FILE *)(PTR___sF_00123050 + 0x130),
            "libunwind: unsupported .eh_frame_hdr at %lx: need at least 4 bytes of data but only got %zd\n"
            ,param_2);
  }
  else {
    if (*param_2 == 1) {
      local_28 = param_2 + 4;
      bVar1 = param_2[2];
      bVar2 = param_2[1];
      *(byte *)(param_4 + 3) = param_2[3];
      uVar4 = FUN_00110b10(param_1,&local_28,param_3,bVar2,param_2);
      *param_4 = uVar4;
      if (bVar1 == 0xff) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00110b10(param_1,&local_28,param_3,bVar1,param_2);
      }
      param_4[1] = uVar4;
      param_4[2] = local_28;
      return 1;
    }
    fprintf((FILE *)(PTR___sF_00123050 + 0x130),
            "libunwind: unsupported .eh_frame_hdr version: %u at %lx\n",(ulong)(uint)*param_2,
            param_2);
  }
  fflush((FILE *)(puVar3 + 0x130));
  return 0;
}


// ===== 00111f48  FUN_00111f48 =====

undefined8
FUN_00111f48(undefined8 param_1,ulong param_2,uint *param_3,long param_4,uint *param_5,
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
        (puVar7 < puVar9)) && (lVar4 = FUN_0010ecb8(param_1,puVar7,param_7), lVar4 == 0)) {
      local_68 = local_68 + 1;
      uVar8 = FUN_00110b10(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x18),0);
      lVar4 = FUN_00110b10(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x18) & 0xf,0);
      if ((uVar8 < param_2) && (param_2 <= lVar4 + uVar8)) {
        cVar2 = *(char *)(param_7 + 0x31);
        param_6[5] = 0;
        puVar9 = local_68;
        if (cVar2 != '\0') {
          lVar5 = FUN_00110e9c(&local_68,puVar1);
          puVar7 = local_68;
          puVar9 = (uint *)((long)local_68 + lVar5);
          if ((*(byte *)(param_7 + 0x19) != 0xff) &&
             (lVar5 = FUN_00110b10(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x19) & 0xf,0),
             lVar5 != 0)) {
            local_68 = puVar7;
            uVar6 = FUN_00110b10(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x19),0);
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


// ===== 00112110  FUN_00112110 =====

undefined8
FUN_00112110(undefined8 param_1,ulong param_2,long param_3,ulong param_4,long param_5,
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
  uVar1 = FUN_00111e28(param_1,param_3,lVar4,auStack_80);
  if (((uVar1 & 1) != 0) && (local_78 != 0)) {
    lVar2 = FUN_00112278(local_68);
    lVar7 = 0;
    do {
      if (local_78 < 2) {
        lVar8 = lVar7 * lVar2;
        break;
      }
      uVar6 = local_78 >> 1;
      lVar8 = (uVar6 + lVar7) * lVar2;
      local_88 = local_70 + lVar8;
      uVar1 = FUN_00110b10(param_1,&local_88,lVar4,local_68,param_3);
      uVar5 = local_78 - uVar6;
      local_78 = uVar6;
      if (uVar1 < param_2) {
        local_78 = uVar5;
        lVar7 = uVar6 + lVar7;
      }
    } while (uVar1 != param_2);
    local_88 = local_70 + lVar8;
    FUN_00110b10(param_1,&local_88,lVar4,local_68,param_3);
    uVar3 = FUN_00110b10(param_1,&local_88,lVar4,local_68,param_3);
    lVar4 = FUN_0010eb28(param_1,uVar3,param_5,param_6,0);
    if (((lVar4 == 0) && (*(ulong *)(param_5 + 0x18) <= param_2)) &&
       (param_2 < *(ulong *)(param_5 + 0x20))) {
      return 1;
    }
  }
  return 0;
}


// ===== 00112278  FUN_00112278 =====

undefined8 FUN_00112278(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_00123050;
  param_1 = param_1 & 0xf;
  if (param_1 < 9) {
    if (param_1 < 3) {
      if (param_1 == 2) {
        return 4;
      }
      if (param_1 == 1) {
LAB_00112340:
        fprintf((FILE *)(PTR___sF_00123050 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
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
    if (param_1 == 9) goto LAB_00112340;
  }
  else {
    if (param_1 == 0xc) {
      return 0x10;
    }
    if (param_1 == 0xb) {
      return 8;
    }
  }
  fprintf((FILE *)(PTR___sF_00123050 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
          "Unknown DWARF encoding for search table.");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00112374  FUN_00112374 =====

char * FUN_00112374(int param_1)

{
  if (param_1 + 2U < 0x62) {
    return &DAT_00109acc + *(int *)(&DAT_00109acc + (ulong)(param_1 + 2U) * 4);
  }
  return "unknown register";
}


// ===== 001123a4  FUN_001123a4 =====

undefined1  [16] FUN_001123a4(undefined1 (*param_1) [16])

{
  return *param_1;
}


// ===== 00112434  facebook::react::RNCSafeAreaViewShadowNode::adjustLayoutWithState =====

/* WARNING: Type propagation algorithm not settling */
/* facebook::react::RNCSafeAreaViewShadowNode::adjustLayoutWithState() */

void __thiscall
facebook::react::RNCSafeAreaViewShadowNode::adjustLayoutWithState(RNCSafeAreaViewShadowNode *this)

{
  RNCSafeAreaViewShadowNode *pRVar1;
  ulong uVar2;
  int *piVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  bool bVar10;
  long *plVar11;
  void *pvVar12;
  long lVar13;
  ushort *puVar14;
  float *pfVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_3d0 [8];
  ulong uStack_3c8;
  int *local_3c0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_3b0 [8];
  ulong uStack_3a8;
  int *local_3a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_390 [8];
  ulong uStack_388;
  int *local_380;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_370 [8];
  ulong uStack_368;
  int *local_360;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_358 [8];
  ulong uStack_350;
  int *local_348;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_340;
  ulong uStack_338;
  int *local_330;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_328;
  ulong uStack_320;
  int *local_318;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_310;
  ulong uStack_308;
  int *local_300;
  long local_2f8;
  long *plStack_2f0;
  undefined1 auStack_2e8 [13];
  ushort local_2db;
  ushort local_2d9;
  ushort local_2b7;
  ushort local_2b5;
  ushort local_2b3;
  ushort local_2b1;
  void *local_278;
  void *local_270;
  void *local_260;
  void *local_258;
  void *local_248;
  void *local_240;
  void *local_230;
  void *local_228;
  float afStack_1f4 [7];
  long *local_1d8;
  undefined8 local_1d0;
  undefined5 uStack_1c8;
  ushort uStack_1c3;
  byte bStack_1c1;
  char cStack_1c0;
  ushort local_1bf;
  undefined5 local_1bd;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined1 uStack_1a0;
  ushort local_19f;
  ushort local_19d;
  ushort local_19b;
  byte local_199;
  char cStack_198;
  undefined7 uStack_197;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined7 local_177;
  undefined1 uStack_170;
  undefined8 uStack_16f;
  void *local_160;
  void *local_158;
  void *local_148;
  void *local_140;
  void *local_130;
  void *local_128;
  void *local_118;
  void *local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [4];
  float afStack_dc [7];
  long *local_c0;
  long local_b8;
  
  lVar8 = tpidr_el0;
  local_b8 = *(long *)(lVar8 + 0x28);
  lVar21 = *(long *)(this + 8);
  plVar11 = (long *)facebook::react::ShadowNode::getState();
  lVar13 = *plVar11;
  plVar11 = (long *)plVar11[1];
  local_2f8 = lVar13;
  plStack_2f0 = plVar11;
  if (plVar11 != (long *)0x0) {
    FUN_0010df20(1,plVar11 + 1);
  }
  pfVar15 = *(float **)(lVar13 + 0x18);
  fVar28 = *pfVar15;
  fVar27 = pfVar15[1];
  fVar29 = pfVar15[2];
  fVar30 = pfVar15[3];
                    /* try { // try from 001124a0 to 001124ab has its CatchHandler @ 00114c60 */
  FUN_00114cb0(local_358,lVar21 + 0x6e8);
  uVar22 = 0x37fc00000;
  if (*(int *)(lVar21 + 0x6e0) != 0) {
    uVar4 = *(ushort *)(lVar21 + 0x6d);
    if ((uVar4 & 7) == 0) {
      uVar16 = 0x7fc00000;
    }
    else if ((uVar4 & 7) == 4) {
      uVar16 = 0x7fc00000;
    }
    else {
      if ((uVar4 >> 3 & 1) == 0) {
        uVar19 = uVar4 >> 4 & 0x7ff;
        uVar17 = -uVar19;
        if (-1 < (short)uVar4) {
          uVar17 = uVar19;
        }
        fVar23 = (float)(int)uVar17;
      }
      else {
        if (uVar4 < 0x40) {
          pfVar15 = (float *)(lVar21 + (ulong)(uVar4 >> 4) * 4 + 0x144);
        }
        else {
          uVar16 = (ulong)(uVar4 >> 4) - 4;
          lVar13 = **(long **)(lVar21 + 0x160);
          if ((ulong)((*(long **)(lVar21 + 0x160))[1] - lVar13 >> 2) <= uVar16) {
            if (*(long *)(lVar8 + 0x28) == local_b8) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00114ab0 to 00114ab3 has its CatchHandler @ 00114be0 */
              FUN_001152dc();
            }
            goto LAB_00114cac;
          }
          pfVar15 = (float *)(lVar13 + uVar16 * 4);
        }
        fVar23 = *pfVar15;
      }
      fVar31 = ABS(fVar23);
      if ((uVar4 & 7) == 1) {
        fVar32 = fVar23;
        if (fVar31 >= INFINITY) {
          fVar32 = NAN;
        }
        if (fVar31 == INFINITY || fVar31 < INFINITY != NAN(fVar31)) {
          fVar23 = fVar32;
        }
        uVar16 = (ulong)(uint)fVar23;
      }
      else {
        fVar32 = NAN;
        if (fVar31 != INFINITY) {
          fVar32 = fVar23;
        }
        fVar23 = NAN;
        if (!NAN(fVar31)) {
          fVar23 = fVar32;
        }
        uVar16 = (ulong)(uint)fVar23;
      }
    }
    uVar4 = *(ushort *)(lVar21 + 0x5f);
    if ((uVar4 & 7) != 0) {
      if ((uVar4 & 7) == 4) {
        uVar18 = 0x37fc00000;
        goto LAB_001126e8;
      }
      if ((uVar4 >> 3 & 1) == 0) {
        uVar19 = uVar4 >> 4 & 0x7ff;
        uVar17 = -uVar19;
        if (-1 < (short)uVar4) {
          uVar17 = uVar19;
        }
        fVar23 = (float)(int)uVar17;
LAB_0011267c:
        fVar31 = ABS(fVar23);
        if ((uVar4 & 7) == 1) {
          bVar10 = fVar31 < INFINITY;
          fVar32 = fVar23;
          if (!bVar10) {
            fVar32 = NAN;
          }
          uVar17 = (uint)bVar10;
          if (fVar31 != INFINITY && bVar10 == NAN(fVar31)) {
            uVar17 = 1;
            fVar32 = fVar23;
          }
          uVar18 = CONCAT44(uVar17,fVar32);
        }
        else {
          fVar32 = NAN;
          if (fVar31 != INFINITY) {
            fVar32 = fVar23;
          }
          uVar17 = (uint)(fVar31 < INFINITY);
          if (fVar31 != INFINITY && fVar31 < INFINITY == NAN(fVar31)) {
            uVar17 = 1;
          }
          fVar23 = NAN;
          if (!NAN(fVar31)) {
            fVar23 = fVar32;
          }
          uVar18 = (ulong)(uint)fVar23 | (ulong)uVar17 << 0x21;
        }
        goto LAB_001126e8;
      }
      if (uVar4 < 0x40) {
        pfVar15 = (float *)(lVar21 + (ulong)(uVar4 >> 4) * 4 + 0x144);
LAB_00112678:
        fVar23 = *pfVar15;
        goto LAB_0011267c;
      }
      uVar18 = (ulong)(uVar4 >> 4) - 4;
      lVar13 = **(long **)(lVar21 + 0x160);
      if (uVar18 < (ulong)((*(long **)(lVar21 + 0x160))[1] - lVar13 >> 2)) {
        pfVar15 = (float *)(lVar13 + uVar18 * 4);
        goto LAB_00112678;
      }
LAB_001149ec:
      if (*(long *)(lVar8 + 0x28) == local_b8) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001149fc to 001149ff has its CatchHandler @ 00114c28 */
        FUN_001152dc();
      }
      goto LAB_00114cac;
    }
    uVar18 = 0x7fc00000;
LAB_001126e8:
    uVar4 = *(ushort *)(lVar21 + 0x6b);
    if ((uVar4 & 7) == 0) {
      uVar20 = 0x7fc00000;
    }
    else if ((uVar4 & 7) == 4) {
      uVar20 = 0x37fc00000;
    }
    else {
      if ((uVar4 >> 3 & 1) == 0) {
        uVar19 = uVar4 >> 4 & 0x7ff;
        uVar17 = -uVar19;
        if (-1 < (short)uVar4) {
          uVar17 = uVar19;
        }
        fVar23 = (float)(int)uVar17;
      }
      else {
        if (uVar4 < 0x40) {
          pfVar15 = (float *)(lVar21 + (ulong)(uVar4 >> 4) * 4 + 0x144);
        }
        else {
          uVar20 = (ulong)(uVar4 >> 4) - 4;
          lVar13 = **(long **)(lVar21 + 0x160);
          if ((ulong)((*(long **)(lVar21 + 0x160))[1] - lVar13 >> 2) <= uVar20) goto LAB_001149ec;
          pfVar15 = (float *)(lVar13 + uVar20 * 4);
        }
        fVar23 = *pfVar15;
      }
      fVar31 = ABS(fVar23);
      if ((uVar4 & 7) == 1) {
        bVar10 = fVar31 < INFINITY;
        fVar32 = fVar23;
        if (!bVar10) {
          fVar32 = NAN;
        }
        uVar17 = (uint)bVar10;
        if (fVar31 != INFINITY && bVar10 == NAN(fVar31)) {
          uVar17 = 1;
          fVar32 = fVar23;
        }
        uVar20 = CONCAT44(uVar17,fVar32);
      }
      else {
        fVar32 = NAN;
        if (fVar31 != INFINITY) {
          fVar32 = fVar23;
        }
        uVar17 = (uint)(fVar31 < INFINITY);
        if (fVar31 != INFINITY && fVar31 < INFINITY == NAN(fVar31)) {
          uVar17 = 1;
        }
        fVar23 = NAN;
        if (!NAN(fVar31)) {
          fVar23 = fVar32;
        }
        uVar20 = (ulong)(uint)fVar23 | (ulong)uVar17 << 0x21;
      }
    }
    uVar5 = *(ushort *)(lVar21 + 0x5d);
    uVar2 = uVar16;
    if ((uVar20 & 0x300000000) != 0) {
      uVar2 = uVar20;
    }
    if ((uVar18 & 0x300000000) != 0) {
      uVar2 = uVar18;
    }
    fVar23 = (float)uVar2;
    if ((uVar5 & 7) != 0) {
      if ((uVar5 & 7) == 4) {
        uVar18 = 0x37fc00000;
        goto LAB_001128c8;
      }
      if ((uVar5 >> 3 & 1) == 0) {
        uVar19 = uVar5 >> 4 & 0x7ff;
        uVar17 = -uVar19;
        if (-1 < (short)uVar5) {
          uVar17 = uVar19;
        }
        fVar31 = (float)(int)uVar17;
LAB_0011285c:
        fVar32 = ABS(fVar31);
        if ((uVar5 & 7) == 1) {
          bVar10 = fVar32 < INFINITY;
          fVar25 = fVar31;
          if (!bVar10) {
            fVar25 = NAN;
          }
          uVar17 = (uint)bVar10;
          if (fVar32 != INFINITY && bVar10 == NAN(fVar32)) {
            uVar17 = 1;
            fVar25 = fVar31;
          }
          uVar18 = CONCAT44(uVar17,fVar25);
        }
        else {
          fVar25 = NAN;
          if (fVar32 != INFINITY) {
            fVar25 = fVar31;
          }
          uVar17 = (uint)(fVar32 < INFINITY);
          if (fVar32 != INFINITY && fVar32 < INFINITY == NAN(fVar32)) {
            uVar17 = 1;
          }
          fVar31 = NAN;
          if (!NAN(fVar32)) {
            fVar31 = fVar25;
          }
          uVar18 = (ulong)(uint)fVar31 | (ulong)uVar17 << 0x21;
        }
        goto LAB_001128c8;
      }
      if (uVar5 < 0x40) {
        pfVar15 = (float *)(lVar21 + (ulong)(uVar5 >> 4) * 4 + 0x144);
LAB_00112858:
        fVar31 = *pfVar15;
        goto LAB_0011285c;
      }
      uVar18 = (ulong)(uVar5 >> 4) - 4;
      lVar13 = **(long **)(lVar21 + 0x160);
      if (uVar18 < (ulong)((*(long **)(lVar21 + 0x160))[1] - lVar13 >> 2)) {
        pfVar15 = (float *)(lVar13 + uVar18 * 4);
        goto LAB_00112858;
      }
LAB_00114a00:
      if (*(long *)(lVar8 + 0x28) == local_b8) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00114a10 to 00114a13 has its CatchHandler @ 00114c20 */
        FUN_001152dc();
      }
      goto LAB_00114cac;
    }
    uVar18 = 0x7fc00000;
LAB_001128c8:
    uVar5 = *(ushort *)(lVar21 + 0x69);
    uVar17 = (uint)uVar5;
    if ((uVar5 & 7) == 0) {
      uVar20 = 0x7fc00000;
    }
    else if ((uVar5 & 7) == 4) {
      uVar20 = 0x37fc00000;
    }
    else {
      if ((uVar5 >> 3 & 1) == 0) {
        uVar7 = uVar5 >> 4 & 0x7ff;
        uVar19 = -uVar7;
        if (-1 < (short)uVar5) {
          uVar19 = uVar7;
        }
        fVar31 = (float)(int)uVar19;
      }
      else {
        if (uVar5 < 0x40) {
          pfVar15 = (float *)(lVar21 + (ulong)(uVar5 >> 4) * 4 + 0x144);
        }
        else {
          uVar20 = (ulong)(uVar5 >> 4) - 4;
          lVar13 = **(long **)(lVar21 + 0x160);
          if ((ulong)((*(long **)(lVar21 + 0x160))[1] - lVar13 >> 2) <= uVar20) goto LAB_00114a00;
          pfVar15 = (float *)(lVar13 + uVar20 * 4);
        }
        fVar31 = *pfVar15;
      }
      fVar32 = ABS(fVar31);
      if ((uVar17 & 7) == 1) {
        bVar10 = fVar32 < INFINITY;
        fVar25 = fVar31;
        if (!bVar10) {
          fVar25 = NAN;
        }
        uVar19 = (uint)bVar10;
        if (fVar32 != INFINITY && bVar10 == NAN(fVar32)) {
          uVar19 = 1;
          fVar25 = fVar31;
        }
        uVar20 = CONCAT44(uVar19,fVar25);
      }
      else {
        fVar25 = NAN;
        if (fVar32 != INFINITY) {
          fVar25 = fVar31;
        }
        uVar19 = (uint)(fVar32 < INFINITY);
        if (fVar32 != INFINITY && fVar32 < INFINITY == NAN(fVar32)) {
          uVar19 = 1;
        }
        fVar31 = NAN;
        if (!NAN(fVar32)) {
          fVar31 = fVar25;
        }
        uVar20 = (ulong)(uint)fVar31 | (ulong)uVar19 << 0x21;
      }
    }
    uVar6 = *(ushort *)(lVar21 + 99);
    uVar2 = uVar16;
    if ((uVar20 & 0x300000000) != 0) {
      uVar2 = uVar20;
    }
    if ((uVar18 & 0x300000000) != 0) {
      uVar2 = uVar18;
    }
    fVar31 = (float)uVar2;
    if ((uVar6 & 7) != 0) {
      if ((uVar6 & 7) == 4) {
        uVar18 = 0x37fc00000;
        goto joined_r0x001129f8;
      }
      if ((uVar6 >> 3 & 1) == 0) {
        uVar7 = uVar6 >> 4 & 0x7ff;
        uVar19 = -uVar7;
        if (-1 < (short)uVar6) {
          uVar19 = uVar7;
        }
        fVar32 = (float)(int)uVar19;
LAB_00112a8c:
        fVar25 = ABS(fVar32);
        if ((uVar6 & 7) == 1) {
          bVar10 = fVar25 < INFINITY;
          fVar26 = fVar32;
          if (!bVar10) {
            fVar26 = NAN;
          }
          uVar19 = (uint)bVar10;
          if (fVar25 != INFINITY && bVar10 == NAN(fVar25)) {
            uVar19 = 1;
            fVar26 = fVar32;
          }
          uVar18 = CONCAT44(uVar19,fVar26);
        }
        else {
          fVar26 = NAN;
          if (fVar25 != INFINITY) {
            fVar26 = fVar32;
          }
          uVar19 = (uint)(fVar25 < INFINITY);
          if (fVar25 != INFINITY && fVar25 < INFINITY == NAN(fVar25)) {
            uVar19 = 1;
          }
          fVar32 = NAN;
          if (!NAN(fVar25)) {
            fVar32 = fVar26;
          }
          uVar18 = (ulong)(uint)fVar32 | (ulong)uVar19 << 0x21;
        }
        goto joined_r0x001129f8;
      }
      if (uVar6 < 0x40) {
        pfVar15 = (float *)(lVar21 + (ulong)(uVar6 >> 4) * 4 + 0x144);
LAB_00112a88:
        fVar32 = *pfVar15;
        goto LAB_00112a8c;
      }
      uVar18 = (ulong)(uVar6 >> 4) - 4;
      lVar13 = **(long **)(lVar21 + 0x160);
      if (uVar18 < (ulong)((*(long **)(lVar21 + 0x160))[1] - lVar13 >> 2)) {
        pfVar15 = (float *)(lVar13 + uVar18 * 4);
        goto LAB_00112a88;
      }
LAB_00114a14:
      if (*(long *)(lVar8 + 0x28) == local_b8) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00114a24 to 00114a27 has its CatchHandler @ 00114c18 */
        FUN_001152dc();
      }
      goto LAB_00114cac;
    }
    uVar18 = 0x7fc00000;
joined_r0x001129f8:
    if ((uVar4 & 7) == 0) {
      uVar20 = 0x7fc00000;
    }
    else if ((uVar4 & 7) == 4) {
      uVar20 = 0x37fc00000;
    }
    else {
      if ((uVar4 >> 3 & 1) == 0) {
        uVar7 = uVar4 >> 4 & 0x7ff;
        uVar19 = -uVar7;
        if (-1 < (short)uVar4) {
          uVar19 = uVar7;
        }
        fVar32 = (float)(int)uVar19;
      }
      else {
        if (uVar4 < 0x40) {
          pfVar15 = (float *)(lVar21 + (ulong)(uVar4 >> 4) * 4 + 0x144);
        }
        else {
          uVar20 = (ulong)(uVar4 >> 4) - 4;
          lVar13 = **(long **)(lVar21 + 0x160);
          if ((ulong)((*(long **)(lVar21 + 0x160))[1] - lVar13 >> 2) <= uVar20) goto LAB_00114a14;
          pfVar15 = (float *)(lVar13 + uVar20 * 4);
        }
        fVar32 = *pfVar15;
      }
      fVar25 = ABS(fVar32);
      if ((uVar4 & 7) == 1) {
        bVar10 = fVar25 < INFINITY;
        fVar26 = fVar32;
        if (!bVar10) {
          fVar26 = NAN;
        }
        uVar19 = (uint)bVar10;
        if (fVar25 != INFINITY && bVar10 == NAN(fVar25)) {
          uVar19 = 1;
          fVar26 = fVar32;
        }
        uVar20 = CONCAT44(uVar19,fVar26);
      }
      else {
        fVar26 = NAN;
        if (fVar25 != INFINITY) {
          fVar26 = fVar32;
        }
        uVar19 = (uint)(fVar25 < INFINITY);
        if (fVar25 != INFINITY && fVar25 < INFINITY == NAN(fVar25)) {
          uVar19 = 1;
        }
        fVar32 = NAN;
        if (!NAN(fVar25)) {
          fVar32 = fVar26;
        }
        uVar20 = (ulong)(uint)fVar32 | (ulong)uVar19 << 0x21;
      }
    }
    uVar4 = *(ushort *)(lVar21 + 0x61);
    uVar2 = uVar16;
    if ((uVar20 & 0x300000000) != 0) {
      uVar2 = uVar20;
    }
    if ((uVar18 & 0x300000000) != 0) {
      uVar2 = uVar18;
    }
    fVar32 = (float)uVar2;
    if ((uVar4 & 7) == 0) {
      uVar18 = 0x7fc00000;
joined_r0x00112c94:
      if ((uVar5 & 7) == 0) {
LAB_00113344:
        uVar20 = 0x7fc00000;
        goto LAB_001134d8;
      }
      if ((uVar5 & 7) == 4) {
LAB_00113330:
        uVar20 = 0x37fc00000;
        goto LAB_001134d8;
      }
      if ((uVar5 >> 3 & 1) == 0) {
LAB_0011336c:
        uVar7 = uVar17 >> 4 & 0x7ff;
        uVar19 = -uVar7;
        if (-1 < (short)uVar17) {
          uVar19 = uVar7;
        }
        fVar25 = (float)(int)uVar19;
        goto LAB_0011346c;
      }
      uVar20 = (ulong)(uVar5 >> 4);
      if (uVar5 < 0x40) {
LAB_001133a8:
        pfVar15 = (float *)(lVar21 + uVar20 * 4 + 0x144);
        goto LAB_00113468;
      }
      uVar20 = uVar20 - 4;
      lVar13 = **(long **)(lVar21 + 0x160);
      if (uVar20 < (ulong)((*(long **)(lVar21 + 0x160))[1] - lVar13 >> 2)) goto LAB_00113464;
    }
    else {
      if ((uVar4 & 7) == 4) {
        uVar18 = 0x37fc00000;
        goto joined_r0x00112c94;
      }
      if ((uVar4 >> 3 & 1) == 0) {
        uVar7 = uVar4 >> 4 & 0x7ff;
        uVar19 = -uVar7;
        if (-1 < (short)uVar4) {
          uVar19 = uVar7;
        }
        fVar25 = (float)(int)uVar19;
LAB_00112c24:
        fVar26 = ABS(fVar25);
        if ((uVar4 & 7) == 1) {
          bVar10 = fVar26 < INFINITY;
          fVar24 = fVar25;
          if (!bVar10) {
            fVar24 = NAN;
          }
          uVar19 = (uint)bVar10;
          if (fVar26 != INFINITY && bVar10 == NAN(fVar26)) {
            uVar19 = 1;
            fVar24 = fVar25;
          }
          uVar18 = CONCAT44(uVar19,fVar24);
        }
        else {
          fVar24 = NAN;
          if (fVar26 != INFINITY) {
            fVar24 = fVar25;
          }
          uVar19 = (uint)(fVar26 < INFINITY);
          if (fVar26 != INFINITY && fVar26 < INFINITY == NAN(fVar26)) {
            uVar19 = 1;
          }
          fVar25 = NAN;
          if (!NAN(fVar26)) {
            fVar25 = fVar24;
          }
          uVar18 = (ulong)(uint)fVar25 | (ulong)uVar19 << 0x21;
        }
        goto joined_r0x00112c94;
      }
      if (uVar4 < 0x40) {
        pfVar15 = (float *)(lVar21 + (ulong)(uVar4 >> 4) * 4 + 0x144);
LAB_00112c20:
        fVar25 = *pfVar15;
        goto LAB_00112c24;
      }
      uVar18 = (ulong)(uVar4 >> 4) - 4;
      lVar13 = **(long **)(lVar21 + 0x160);
      if (uVar18 < (ulong)((*(long **)(lVar21 + 0x160))[1] - lVar13 >> 2)) {
        pfVar15 = (float *)(lVar13 + uVar18 * 4);
        goto LAB_00112c20;
      }
    }
    if (*(long *)(lVar8 + 0x28) == local_b8) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00112cd8 to 00112cdb has its CatchHandler @ 00114c10 */
      FUN_001152dc();
    }
    goto LAB_00114cac;
  }
  uVar4 = *(ushort *)(lVar21 + 0x91);
  if ((uVar4 & 7) == 0) {
    uVar16 = 0x7fc00000;
  }
  else if ((uVar4 & 7) == 4) {
    uVar16 = 0x7fc00000;
  }
  else {
    if ((uVar4 >> 3 & 1) == 0) {
      uVar19 = uVar4 >> 4 & 0x7ff;
      uVar17 = -uVar19;
      if (-1 < (short)uVar4) {
        uVar17 = uVar19;
      }
      fVar23 = (float)(int)uVar17;
    }
    else {
      if (uVar4 < 0x40) {
        pfVar15 = (float *)(lVar21 + (ulong)(uVar4 >> 4) * 4 + 0x144);
      }
      else {
        uVar16 = (ulong)(uVar4 >> 4) - 4;
        lVar13 = **(long **)(lVar21 + 0x160);
        if ((ulong)((*(long **)(lVar21 + 0x160))[1] - lVar13 >> 2) <= uVar16) {
          if (*(long *)(lVar8 + 0x28) == local_b8) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00114ac4 to 00114ac7 has its CatchHandler @ 00114bd8 */
            FUN_001152dc();
          }
          goto LAB_00114cac;
        }
        pfVar15 = (float *)(lVar13 + uVar16 * 4);
      }
      fVar23 = *pfVar15;
    }
    fVar31 = ABS(fVar23);
    if ((uVar4 & 7) == 1) {
      fVar32 = fVar23;
      if (fVar31 >= INFINITY) {
        fVar32 = NAN;
      }
      if (fVar31 == INFINITY || fVar31 < INFINITY != NAN(fVar31)) {
        fVar23 = fVar32;
      }
      uVar16 = (ulong)(uint)fVar23;
    }
    else {
      fVar32 = NAN;
      if (fVar31 != INFINITY) {
        fVar32 = fVar23;
      }
      fVar23 = NAN;
      if (!NAN(fVar31)) {
        fVar23 = fVar32;
      }
      uVar16 = (ulong)(uint)fVar23;
    }
  }
  uVar4 = *(ushort *)(lVar21 + 0x83);
  if ((uVar4 & 7) != 0) {
    if ((uVar4 & 7) == 4) {
      uVar18 = 0x37fc00000;
      goto LAB_00112e50;
    }
    if ((uVar4 >> 3 & 1) == 0) {
      uVar19 = uVar4 >> 4 & 0x7ff;
      uVar17 = -uVar19;
      if (-1 < (short)uVar4) {
        uVar17 = uVar19;
      }
      fVar23 = (float)(int)uVar17;
LAB_00112de4:
      fVar31 = ABS(fVar23);
      if ((uVar4 & 7) == 1) {
        bVar10 = fVar31 < INFINITY;
        fVar32 = fVar23;
        if (!bVar10) {
          fVar32 = NAN;
        }
        uVar17 = (uint)bVar10;
        if (fVar31 != INFINITY && bVar10 == NAN(fVar31)) {
          uVar17 = 1;
          fVar32 = fVar23;
        }
        uVar18 = CONCAT44(uVar17,fVar32);
      }
      else {
        fVar32 = NAN;
        if (fVar31 != INFINITY) {
          fVar32 = fVar23;
        }
        uVar17 = (uint)(fVar31 < INFINITY);
        if (fVar31 != INFINITY && fVar31 < INFINITY == NAN(fVar31)) {
          uVar17 = 1;
        }
        fVar23 = NAN;
        if (!NAN(fVar31)) {
          fVar23 = fVar32;
        }
        uVar18 = (ulong)(uint)fVar23 | (ulong)uVar17 << 0x21;
      }
      goto LAB_00112e50;
    }
    if (uVar4 < 0x40) {
      pfVar15 = (float *)(lVar21 + (ulong)(uVar4 >> 4) * 4 + 0x144);
LAB_00112de0:
      fVar23 = *pfVar15;
      goto LAB_00112de4;
    }
    uVar18 = (ulong)(uVar4 >> 4) - 4;
    lVar13 = **(long **)(lVar21 + 0x160);
    if (uVar18 < (ulong)((*(long **)(lVar21 + 0x160))[1] - lVar13 >> 2)) {
      pfVar15 = (float *)(lVar13 + uVar18 * 4);
      goto LAB_00112de0;
    }
LAB_00114a50:
    if (*(long *)(lVar8 + 0x28) == local_b8) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00114a60 to 00114a63 has its CatchHandler @ 00114c00 */
      FUN_001152dc();
    }
    goto LAB_00114cac;
  }
  uVar18 = 0x7fc00000;
LAB_00112e50:
  uVar4 = *(ushort *)(lVar21 + 0x8f);
  if ((uVar4 & 7) == 0) {
    uVar20 = 0x7fc00000;
  }
  else if ((uVar4 & 7) == 4) {
    uVar20 = 0x37fc00000;
  }
  else {
    if ((uVar4 >> 3 & 1) == 0) {
      uVar19 = uVar4 >> 4 & 0x7ff;
      uVar17 = -uVar19;
      if (-1 < (short)uVar4) {
        uVar17 = uVar19;
      }
      fVar23 = (float)(int)uVar17;
    }
    else {
      if (uVar4 < 0x40) {
        pfVar15 = (float *)(lVar21 + (ulong)(uVar4 >> 4) * 4 + 0x144);
      }
      else {
        uVar20 = (ulong)(uVar4 >> 4) - 4;
        lVar13 = **(long **)(lVar21 + 0x160);
        if ((ulong)((*(long **)(lVar21 + 0x160))[1] - lVar13 >> 2) <= uVar20) goto LAB_00114a50;
        pfVar15 = (float *)(lVar13 + uVar20 * 4);
      }
      fVar23 = *pfVar15;
    }
    fVar31 = ABS(fVar23);
    if ((uVar4 & 7) == 1) {
      bVar10 = fVar31 < INFINITY;
      fVar32 = fVar23;
      if (!bVar10) {
        fVar32 = NAN;
      }
      uVar17 = (uint)bVar10;
      if (fVar31 != INFINITY && bVar10 == NAN(fVar31)) {
        uVar17 = 1;
        fVar32 = fVar23;
      }
      uVar20 = CONCAT44(uVar17,fVar32);
    }
    else {
      fVar32 = NAN;
      if (fVar31 != INFINITY) {
        fVar32 = fVar23;
      }
      uVar17 = (uint)(fVar31 < INFINITY);
      if (fVar31 != INFINITY && fVar31 < INFINITY == NAN(fVar31)) {
        uVar17 = 1;
      }
      fVar23 = NAN;
      if (!NAN(fVar31)) {
        fVar23 = fVar32;
      }
      uVar20 = (ulong)(uint)fVar23 | (ulong)uVar17 << 0x21;
    }
  }
  uVar5 = *(ushort *)(lVar21 + 0x81);
  uVar2 = uVar16;
  if ((uVar20 & 0x300000000) != 0) {
    uVar2 = uVar20;
  }
  if ((uVar18 & 0x300000000) != 0) {
    uVar2 = uVar18;
  }
  fVar23 = (float)uVar2;
  if ((uVar5 & 7) != 0) {
    if ((uVar5 & 7) == 4) {
      uVar18 = 0x37fc00000;
      goto LAB_00113030;
    }
    if ((uVar5 >> 3 & 1) == 0) {
      uVar19 = uVar5 >> 4 & 0x7ff;
      uVar17 = -uVar19;
      if (-1 < (short)uVar5) {
        uVar17 = uVar19;
      }
      fVar31 = (float)(int)uVar17;
LAB_00112fc4:
      fVar32 = ABS(fVar31);
      if ((uVar5 & 7) == 1) {
        bVar10 = fVar32 < INFINITY;
        fVar25 = fVar31;
        if (!bVar10) {
          fVar25 = NAN;
        }
        uVar17 = (uint)bVar10;
        if (fVar32 != INFINITY && bVar10 == NAN(fVar32)) {
          uVar17 = 1;
          fVar25 = fVar31;
        }
        uVar18 = CONCAT44(uVar17,fVar25);
      }
      else {
        fVar25 = NAN;
        if (fVar32 != INFINITY) {
          fVar25 = fVar31;
        }
        uVar17 = (uint)(fVar32 < INFINITY);
        if (fVar32 != INFINITY && fVar32 < INFINITY == NAN(fVar32)) {
          uVar17 = 1;
        }
        fVar31 = NAN;
        if (!NAN(fVar32)) {
          fVar31 = fVar25;
        }
        uVar18 = (ulong)(uint)fVar31 | (ulong)uVar17 << 0x21;
      }
      goto LAB_00113030;
    }
    if (uVar5 < 0x40) {
      pfVar15 = (float *)(lVar21 + (ulong)(uVar5 >> 4) * 4 + 0x144);
LAB_00112fc0:
      fVar31 = *pfVar15;
      goto LAB_00112fc4;
    }
    uVar18 = (ulong)(uVar5 >> 4) - 4;
    lVar13 = **(long **)(lVar21 + 0x160);
    if (uVar18 < (ulong)((*(long **)(lVar21 + 0x160))[1] - lVar13 >> 2)) {
      pfVar15 = (float *)(lVar13 + uVar18 * 4);
      goto LAB_00112fc0;
    }
LAB_00114a64:
    if (*(long *)(lVar8 + 0x28) == local_b8) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00114a74 to 00114a77 has its CatchHandler @ 00114bf8 */
      FUN_001152dc();
    }
    goto LAB_00114cac;
  }
  uVar18 = 0x7fc00000;
LAB_00113030:
  uVar5 = *(ushort *)(lVar21 + 0x8d);
  uVar17 = (uint)uVar5;
  if ((uVar5 & 7) == 0) {
    uVar20 = 0x7fc00000;
  }
  else if ((uVar5 & 7) == 4) {
    uVar20 = 0x37fc00000;
  }
  else {
    if ((uVar5 >> 3 & 1) == 0) {
      uVar7 = uVar5 >> 4 & 0x7ff;
      uVar19 = -uVar7;
      if (-1 < (short)uVar5) {
        uVar19 = uVar7;
      }
      fVar31 = (float)(int)uVar19;
    }
    else {
      if (uVar5 < 0x40) {
        pfVar15 = (float *)(lVar21 + (ulong)(uVar5 >> 4) * 4 + 0x144);
      }
      else {
        uVar20 = (ulong)(uVar5 >> 4) - 4;
        lVar13 = **(long **)(lVar21 + 0x160);
        if ((ulong)((*(long **)(lVar21 + 0x160))[1] - lVar13 >> 2) <= uVar20) goto LAB_00114a64;
        pfVar15 = (float *)(lVar13 + uVar20 * 4);
      }
      fVar31 = *pfVar15;
    }
    fVar32 = ABS(fVar31);
    if ((uVar17 & 7) == 1) {
      bVar10 = fVar32 < INFINITY;
      fVar25 = fVar31;
      if (!bVar10) {
        fVar25 = NAN;
      }
      uVar19 = (uint)bVar10;
      if (fVar32 != INFINITY && bVar10 == NAN(fVar32)) {
        uVar19 = 1;
        fVar25 = fVar31;
      }
      uVar20 = CONCAT44(uVar19,fVar25);
    }
    else {
      fVar25 = NAN;
      if (fVar32 != INFINITY) {
        fVar25 = fVar31;
      }
      uVar19 = (uint)(fVar32 < INFINITY);
      if (fVar32 != INFINITY && fVar32 < INFINITY == NAN(fVar32)) {
        uVar19 = 1;
      }
      fVar31 = NAN;
      if (!NAN(fVar32)) {
        fVar31 = fVar25;
      }
      uVar20 = (ulong)(uint)fVar31 | (ulong)uVar19 << 0x21;
    }
  }
  uVar6 = *(ushort *)(lVar21 + 0x87);
  uVar2 = uVar16;
  if ((uVar20 & 0x300000000) != 0) {
    uVar2 = uVar20;
  }
  if ((uVar18 & 0x300000000) != 0) {
    uVar2 = uVar18;
  }
  fVar31 = (float)uVar2;
  if ((uVar6 & 7) != 0) {
    if ((uVar6 & 7) == 4) {
      uVar18 = 0x37fc00000;
      goto joined_r0x00113144;
    }
    if ((uVar6 >> 3 & 1) == 0) {
      uVar7 = uVar6 >> 4 & 0x7ff;
      uVar19 = -uVar7;
      if (-1 < (short)uVar6) {
        uVar19 = uVar7;
      }
      fVar32 = (float)(int)uVar19;
LAB_001131f4:
      fVar25 = ABS(fVar32);
      if ((uVar6 & 7) == 1) {
        bVar10 = fVar25 < INFINITY;
        fVar26 = fVar32;
        if (!bVar10) {
          fVar26 = NAN;
        }
        uVar19 = (uint)bVar10;
        if (fVar25 != INFINITY && bVar10 == NAN(fVar25)) {
          uVar19 = 1;
          fVar26 = fVar32;
        }
        uVar18 = CONCAT44(uVar19,fVar26);
      }
      else {
        fVar26 = NAN;
        if (fVar25 != INFINITY) {
          fVar26 = fVar32;
        }
        uVar19 = (uint)(fVar25 < INFINITY);
        if (fVar25 != INFINITY && fVar25 < INFINITY == NAN(fVar25)) {
          uVar19 = 1;
        }
        fVar32 = NAN;
        if (!NAN(fVar25)) {
          fVar32 = fVar26;
        }
        uVar18 = (ulong)(uint)fVar32 | (ulong)uVar19 << 0x21;
      }
      goto joined_r0x00113144;
    }
    if (uVar6 < 0x40) {
      pfVar15 = (float *)(lVar21 + (ulong)(uVar6 >> 4) * 4 + 0x144);
LAB_001131f0:
      fVar32 = *pfVar15;
      goto LAB_001131f4;
    }
    uVar18 = (ulong)(uVar6 >> 4) - 4;
    lVar13 = **(long **)(lVar21 + 0x160);
    if (uVar18 < (ulong)((*(long **)(lVar21 + 0x160))[1] - lVar13 >> 2)) {
      pfVar15 = (float *)(lVar13 + uVar18 * 4);
      goto LAB_001131f0;
    }
LAB_00114a78:
    if (*(long *)(lVar8 + 0x28) == local_b8) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00114a88 to 00114a8b has its CatchHandler @ 00114bf0 */
      FUN_001152dc();
    }
    goto LAB_00114cac;
  }
  uVar18 = 0x7fc00000;
joined_r0x00113144:
  if ((uVar4 & 7) == 0) {
    uVar20 = 0x7fc00000;
  }
  else if ((uVar4 & 7) == 4) {
    uVar20 = 0x37fc00000;
  }
  else {
    if ((uVar4 >> 3 & 1) == 0) {
      uVar7 = uVar4 >> 4 & 0x7ff;
      uVar19 = -uVar7;
      if (-1 < (short)uVar4) {
        uVar19 = uVar7;
      }
      fVar32 = (float)(int)uVar19;
    }
    else {
      if (uVar4 < 0x40) {
        pfVar15 = (float *)(lVar21 + (ulong)(uVar4 >> 4) * 4 + 0x144);
      }
      else {
        uVar20 = (ulong)(uVar4 >> 4) - 4;
        lVar13 = **(long **)(lVar21 + 0x160);
        if ((ulong)((*(long **)(lVar21 + 0x160))[1] - lVar13 >> 2) <= uVar20) goto LAB_00114a78;
        pfVar15 = (float *)(lVar13 + uVar20 * 4);
      }
      fVar32 = *pfVar15;
    }
    fVar25 = ABS(fVar32);
    if ((uVar4 & 7) == 1) {
      bVar10 = fVar25 < INFINITY;
      fVar26 = fVar32;
      if (!bVar10) {
        fVar26 = NAN;
      }
      uVar19 = (uint)bVar10;
      if (fVar25 != INFINITY && bVar10 == NAN(fVar25)) {
        uVar19 = 1;
        fVar26 = fVar32;
      }
      uVar20 = CONCAT44(uVar19,fVar26);
    }
    else {
      fVar26 = NAN;
      if (fVar25 != INFINITY) {
        fVar26 = fVar32;
      }
      uVar19 = (uint)(fVar25 < INFINITY);
      if (fVar25 != INFINITY && fVar25 < INFINITY == NAN(fVar25)) {
        uVar19 = 1;
      }
      fVar32 = NAN;
      if (!NAN(fVar25)) {
        fVar32 = fVar26;
      }
      uVar20 = (ulong)(uint)fVar32 | (ulong)uVar19 << 0x21;
    }
  }
  uVar4 = *(ushort *)(lVar21 + 0x85);
  uVar2 = uVar16;
  if ((uVar20 & 0x300000000) != 0) {
    uVar2 = uVar20;
  }
  if ((uVar18 & 0x300000000) != 0) {
    uVar2 = uVar18;
  }
  fVar32 = (float)uVar2;
  if ((uVar4 & 7) != 0) {
    if ((uVar4 & 7) == 4) {
      uVar18 = 0x37fc00000;
      goto joined_r0x00113340;
    }
    if ((uVar4 >> 3 & 1) == 0) {
      uVar7 = uVar4 >> 4 & 0x7ff;
      uVar19 = -uVar7;
      if (-1 < (short)uVar4) {
        uVar19 = uVar7;
      }
      fVar25 = (float)(int)uVar19;
LAB_001133d4:
      fVar26 = ABS(fVar25);
      if ((uVar4 & 7) == 1) {
        bVar10 = fVar26 < INFINITY;
        fVar24 = fVar25;
        if (!bVar10) {
          fVar24 = NAN;
        }
        uVar19 = (uint)bVar10;
        if (fVar26 != INFINITY && bVar10 == NAN(fVar26)) {
          uVar19 = 1;
          fVar24 = fVar25;
        }
        uVar18 = CONCAT44(uVar19,fVar24);
      }
      else {
        fVar24 = NAN;
        if (fVar26 != INFINITY) {
          fVar24 = fVar25;
        }
        uVar19 = (uint)(fVar26 < INFINITY);
        if (fVar26 != INFINITY && fVar26 < INFINITY == NAN(fVar26)) {
          uVar19 = 1;
        }
        fVar25 = NAN;
        if (!NAN(fVar26)) {
          fVar25 = fVar24;
        }
        uVar18 = (ulong)(uint)fVar25 | (ulong)uVar19 << 0x21;
      }
      goto joined_r0x00113340;
    }
    if (uVar4 < 0x40) {
      pfVar15 = (float *)(lVar21 + (ulong)(uVar4 >> 4) * 4 + 0x144);
LAB_001133d0:
      fVar25 = *pfVar15;
      goto LAB_001133d4;
    }
    uVar18 = (ulong)(uVar4 >> 4) - 4;
    lVar13 = **(long **)(lVar21 + 0x160);
    if (uVar18 < (ulong)((*(long **)(lVar21 + 0x160))[1] - lVar13 >> 2)) {
      pfVar15 = (float *)(lVar13 + uVar18 * 4);
      goto LAB_001133d0;
    }
LAB_00114a8c:
    if (*(long *)(lVar8 + 0x28) == local_b8) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00114a9c to 00114a9f has its CatchHandler @ 00114be8 */
      FUN_001152dc();
    }
    goto LAB_00114cac;
  }
  uVar18 = 0x7fc00000;
joined_r0x00113340:
  if ((uVar5 & 7) == 0) goto LAB_00113344;
  if ((uVar5 & 7) == 4) goto LAB_00113330;
  if ((uVar5 >> 3 & 1) == 0) goto LAB_0011336c;
  uVar20 = (ulong)(uVar5 >> 4);
  if (uVar5 < 0x40) goto LAB_001133a8;
  uVar20 = uVar20 - 4;
  lVar13 = **(long **)(lVar21 + 0x160);
  if ((ulong)((*(long **)(lVar21 + 0x160))[1] - lVar13 >> 2) <= uVar20) goto LAB_00114a8c;
LAB_00113464:
  pfVar15 = (float *)(lVar13 + uVar20 * 4);
LAB_00113468:
  fVar25 = *pfVar15;
LAB_0011346c:
  fVar26 = ABS(fVar25);
  if ((uVar17 & 7) == 1) {
    bVar10 = fVar26 < INFINITY;
    fVar24 = fVar25;
    if (!bVar10) {
      fVar24 = NAN;
    }
    uVar17 = (uint)bVar10;
    if (fVar26 != INFINITY && bVar10 == NAN(fVar26)) {
      uVar17 = 1;
      fVar24 = fVar25;
    }
    uVar20 = CONCAT44(uVar17,fVar24);
  }
  else {
    fVar24 = NAN;
    if (fVar26 != INFINITY) {
      fVar24 = fVar25;
    }
    uVar17 = (uint)(fVar26 < INFINITY);
    if (fVar26 != INFINITY && fVar26 < INFINITY == NAN(fVar26)) {
      uVar17 = 1;
    }
    fVar25 = NAN;
    if (!NAN(fVar26)) {
      fVar25 = fVar24;
    }
    uVar20 = (ulong)(uint)fVar25 | (ulong)uVar17 << 0x21;
  }
LAB_001134d8:
  if ((uVar20 & 0x300000000) != 0) {
    uVar16 = uVar20;
  }
  if ((uVar18 & 0x300000000) != 0) {
    uVar16 = uVar18;
  }
  if (((byte)local_358[0] & 1) == 0) {
    local_370[0] = local_358[0];
    uStack_368 = uStack_350;
    local_360 = local_348;
  }
  else {
                    /* try { // try from 00113508 to 0011350f has its CatchHandler @ 00114c48 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_370,(char *)local_348,uStack_350);
  }
  if (NAN(fVar23)) {
    fVar23 = 0.0;
  }
  uVar18 = (ulong)((byte)local_370[0] >> 1);
  if (((byte)local_370[0] & 1) != 0) {
    uVar18 = uStack_368;
  }
  if (uVar18 == 7) {
    piVar3 = (int *)((ulong)local_370 | 1);
    if (((byte)local_370[0] & 1) != 0) {
      piVar3 = local_360;
    }
    fVar25 = fVar27;
    if (*piVar3 != 0x6978616d || *(int *)((long)piVar3 + 3) != 0x6d756d69) goto LAB_001135b0;
  }
  else {
    if (uVar18 == 3) {
      piVar3 = (int *)((ulong)local_370 | 1);
      if (((byte)local_370[0] & 1) != 0) {
        piVar3 = local_360;
      }
      fVar25 = fVar23;
      if ((short)*piVar3 == 0x666f && *(char *)((long)piVar3 + 2) == 'f') goto joined_r0x00113a70;
    }
LAB_001135b0:
    fVar25 = fVar27 + fVar23;
  }
joined_r0x00113a70:
  if (((byte)local_370[0] & 1) != 0) {
    operator_delete(local_360);
  }
  if (((byte)local_310 & 1) == 0) {
    local_390[0] = local_310;
    uStack_388 = uStack_308;
    local_380 = local_300;
  }
  else {
                    /* try { // try from 001135e4 to 001135eb has its CatchHandler @ 00114c40 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_390,(char *)local_300,uStack_308);
  }
  if (NAN(fVar31)) {
    fVar31 = 0.0;
  }
  uVar18 = (ulong)((byte)local_390[0] >> 1);
  if (((byte)local_390[0] & 1) != 0) {
    uVar18 = uStack_388;
  }
  if (uVar18 == 7) {
    piVar3 = (int *)((ulong)local_390 | 1);
    if (((byte)local_390[0] & 1) != 0) {
      piVar3 = local_380;
    }
    fVar27 = fVar28;
    if (*piVar3 != 0x6978616d || *(int *)((long)piVar3 + 3) != 0x6d756d69) goto LAB_0011367c;
  }
  else {
    if (uVar18 == 3) {
      piVar3 = (int *)((ulong)local_390 | 1);
      if (((byte)local_390[0] & 1) != 0) {
        piVar3 = local_380;
      }
      fVar27 = fVar31;
      if ((short)*piVar3 == 0x666f && *(char *)((long)piVar3 + 2) == 'f') goto joined_r0x00113a7c;
    }
LAB_0011367c:
    fVar27 = fVar28 + fVar31;
  }
joined_r0x00113a7c:
  if (((byte)local_390[0] & 1) != 0) {
    operator_delete(local_380);
  }
  if (((byte)local_340 & 1) == 0) {
    local_3b0[0] = local_340;
    uStack_3a8 = uStack_338;
    local_3a0 = local_330;
  }
  else {
                    /* try { // try from 001136b0 to 001136b7 has its CatchHandler @ 00114c38 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_3b0,(char *)local_330,uStack_338);
  }
  fVar28 = (float)uVar16;
  if (NAN((float)uVar16)) {
    fVar28 = 0.0;
  }
  uVar16 = (ulong)((byte)local_3b0[0] >> 1);
  if (((byte)local_3b0[0] & 1) != 0) {
    uVar16 = uStack_3a8;
  }
  if (uVar16 == 7) {
    piVar3 = (int *)((ulong)local_3b0 | 1);
    if (((byte)local_3b0[0] & 1) != 0) {
      piVar3 = local_3a0;
    }
    fVar23 = fVar29;
    if (*piVar3 != 0x6978616d || *(int *)((long)piVar3 + 3) != 0x6d756d69) goto LAB_00113748;
  }
  else {
    if (uVar16 == 3) {
      piVar3 = (int *)((ulong)local_3b0 | 1);
      if (((byte)local_3b0[0] & 1) != 0) {
        piVar3 = local_3a0;
      }
      fVar23 = fVar28;
      if ((short)*piVar3 == 0x666f && *(char *)((long)piVar3 + 2) == 'f') goto joined_r0x00113a88;
    }
LAB_00113748:
    fVar23 = fVar29 + fVar28;
  }
joined_r0x00113a88:
  if (((byte)local_3b0[0] & 1) != 0) {
    operator_delete(local_3a0);
  }
  if (((byte)local_328 & 1) == 0) {
    local_3d0[0] = local_328;
    uStack_3c8 = uStack_320;
    local_3c0 = local_318;
  }
  else {
                    /* try { // try from 0011377c to 00113783 has its CatchHandler @ 00114c30 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_3d0,(char *)local_318,uStack_320);
  }
  if (NAN(fVar32)) {
    fVar32 = 0.0;
  }
  uVar16 = (ulong)((byte)local_3d0[0] >> 1);
  if (((byte)local_3d0[0] & 1) != 0) {
    uVar16 = uStack_3c8;
  }
  if (uVar16 == 7) {
    piVar3 = (int *)((ulong)local_3d0 | 1);
    if (((byte)local_3d0[0] & 1) != 0) {
      piVar3 = local_3c0;
    }
    fVar28 = fVar30;
    if (*piVar3 != 0x6978616d || *(int *)((long)piVar3 + 3) != 0x6d756d69) goto LAB_00113814;
  }
  else {
    if (uVar16 == 3) {
      piVar3 = (int *)((ulong)local_3d0 | 1);
      if (((byte)local_3d0[0] & 1) != 0) {
        piVar3 = local_3c0;
      }
      fVar28 = fVar32;
      if ((short)*piVar3 == 0x666f && *(char *)((long)piVar3 + 2) == 'f') goto joined_r0x00113a94;
    }
LAB_00113814:
    fVar28 = fVar30 + fVar32;
  }
joined_r0x00113a94:
  if (((byte)local_3d0[0] & 1) != 0) {
    operator_delete(local_3c0);
  }
                    /* try { // try from 00113828 to 00113833 has its CatchHandler @ 00114c58 */
  FUN_00114eec(&local_1d0,*(long *)(this + 8) + 0x50);
  fVar29 = ABS(fVar25);
  fVar32 = ABS(fVar27);
  fVar31 = ABS(fVar23);
  fVar30 = ABS(fVar28);
  if (*(int *)(lVar21 + 0x6e0) == 0) {
    if ((fVar29 < INFINITY) || (fVar29 != INFINITY && fVar29 < INFINITY == NAN(fVar29))) {
      FUN_001156fc(fVar25,auStack_e0,&local_19d);
    }
    else {
      local_19d = local_19d & 0xfff8;
    }
    if ((fVar32 < INFINITY) || (fVar32 != INFINITY && fVar32 < INFINITY == NAN(fVar32))) {
      FUN_001156fc(fVar27,auStack_e0,&local_19f);
    }
    else {
      local_19f = local_19f & 0xfff8;
    }
    if ((fVar31 < INFINITY) || (fVar31 != INFINITY && fVar31 < INFINITY == NAN(fVar31))) {
      FUN_001156fc(fVar23,auStack_e0,&local_19b);
    }
    else {
      local_19b = local_19b & 0xfff8;
    }
    puVar14 = (ushort *)&local_199;
    if ((fVar30 != INFINITY) && (!NAN(fVar30))) goto LAB_00113914;
LAB_001139f0:
    *puVar14 = *puVar14 & 0xfff8;
  }
  else {
    if ((fVar29 < INFINITY) || (fVar29 != INFINITY && fVar29 < INFINITY == NAN(fVar29))) {
                    /* try { // try from 00113878 to 001139cf has its CatchHandler @ 00114c68 */
      FUN_001156fc(fVar25,auStack_e0,&bStack_1c1);
    }
    else {
      uVar4 = CONCAT11(cStack_1c0,bStack_1c1) & 0xfff8;
      bStack_1c1 = (byte)uVar4;
      cStack_1c0 = (char)(uVar4 >> 8);
    }
    if ((fVar32 < INFINITY) || (fVar32 != INFINITY && fVar32 < INFINITY == NAN(fVar32))) {
      FUN_001156fc(fVar27,auStack_e0,&uStack_1c3);
    }
    else {
      uStack_1c3 = uStack_1c3 & 0xfff8;
    }
    if ((fVar31 < INFINITY) || (fVar31 != INFINITY && fVar31 < INFINITY == NAN(fVar31))) {
      FUN_001156fc(fVar23,auStack_e0,&local_1bf);
    }
    else {
      local_1bf = local_1bf & 0xfff8;
    }
    puVar14 = (ushort *)&local_1bd;
    if ((fVar30 == INFINITY) || (NAN(fVar30))) goto LAB_001139f0;
LAB_00113914:
    FUN_001156fc(fVar28,auStack_e0);
  }
  pRVar1 = this + 0x118;
                    /* try { // try from 00113a00 to 00113a0b has its CatchHandler @ 00114c50 */
  FUN_00114eec(auStack_2e8,pRVar1);
  if ((local_19d & 7) == 0) {
    uVar16 = 0x7fc00000;
  }
  else if ((local_19d & 7) == 4) {
    uVar16 = 0x37fc00000;
  }
  else {
    if ((local_19d >> 3 & 1) == 0) {
      uVar19 = local_19d >> 4 & 0x7ff;
      uVar17 = -uVar19;
      if (-1 < (short)local_19d) {
        uVar17 = uVar19;
      }
      fVar27 = (float)(int)uVar17;
    }
    else if (local_19d < 0x40) {
      fVar27 = afStack_dc[local_19d >> 4];
    }
    else {
      uVar16 = (ulong)(local_19d >> 4) - 4;
      if ((ulong)(local_c0[1] - *local_c0 >> 2) <= uVar16) {
        if (*(long *)(lVar8 + 0x28) == local_b8) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00114a38 to 00114a3b has its CatchHandler @ 00114c0c */
          FUN_001152dc();
        }
        goto LAB_00114cac;
      }
      fVar27 = *(float *)(*local_c0 + uVar16 * 4);
    }
    fVar28 = ABS(fVar27);
    if ((local_19d & 7) == 1) {
      bVar10 = fVar28 < INFINITY;
      fVar29 = fVar27;
      if (!bVar10) {
        fVar29 = NAN;
      }
      uVar17 = (uint)bVar10;
      if (fVar28 != INFINITY && bVar10 == NAN(fVar28)) {
        uVar17 = 1;
        fVar29 = fVar27;
      }
      uVar16 = CONCAT44(uVar17,fVar29);
    }
    else {
      fVar29 = NAN;
      if (fVar28 != INFINITY) {
        fVar29 = fVar27;
      }
      uVar17 = (uint)(fVar28 < INFINITY);
      if (fVar28 != INFINITY && fVar28 < INFINITY == NAN(fVar28)) {
        uVar17 = 1;
      }
      fVar27 = NAN;
      if (!NAN(fVar28)) {
        fVar27 = fVar29;
      }
      uVar16 = (ulong)(uint)fVar27 | (ulong)uVar17 << 0x21;
    }
  }
  if ((local_2b5 & 7) == 0) {
    uVar18 = 0x7fc00000;
  }
  else if ((local_2b5 & 7) == 4) {
    uVar18 = 0x37fc00000;
  }
  else {
    if ((local_2b5 >> 3 & 1) == 0) {
      uVar19 = local_2b5 >> 4 & 0x7ff;
      uVar17 = -uVar19;
      if (-1 < (short)local_2b5) {
        uVar17 = uVar19;
      }
      fVar27 = (float)(int)uVar17;
    }
    else if (local_2b5 < 0x40) {
      fVar27 = afStack_1f4[local_2b5 >> 4];
    }
    else {
      uVar18 = (ulong)(local_2b5 >> 4) - 4;
      if ((ulong)(local_1d8[1] - *local_1d8 >> 2) <= uVar18) {
        if (*(long *)(lVar8 + 0x28) == local_b8) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00114a4c to 00114a4f has its CatchHandler @ 00114c08 */
          FUN_001152dc();
        }
        goto LAB_00114cac;
      }
      fVar27 = *(float *)(*local_1d8 + uVar18 * 4);
    }
    fVar28 = ABS(fVar27);
    if ((local_2b5 & 7) == 1) {
      bVar10 = fVar28 < INFINITY;
      fVar29 = fVar27;
      if (!bVar10) {
        fVar29 = NAN;
      }
      uVar17 = (uint)bVar10;
      if (fVar28 != INFINITY && bVar10 == NAN(fVar28)) {
        uVar17 = 1;
        fVar29 = fVar27;
      }
      uVar18 = CONCAT44(uVar17,fVar29);
    }
    else {
      fVar29 = NAN;
      if (fVar28 != INFINITY) {
        fVar29 = fVar27;
      }
      uVar17 = (uint)(fVar28 < INFINITY);
      if (fVar28 != INFINITY && fVar28 < INFINITY == NAN(fVar28)) {
        uVar17 = 1;
      }
      fVar27 = NAN;
      if (!NAN(fVar28)) {
        fVar27 = fVar29;
      }
      uVar18 = (ulong)(uint)fVar27 | (ulong)uVar17 << 0x21;
    }
  }
  if ((((float)uVar16 == (float)uVar18) || ((NAN((float)uVar16) && (NAN((float)uVar18))))) &&
     ((int)(uVar16 >> 0x20) == (int)(uVar18 >> 0x20))) {
    if ((local_19f & 7) == 0) {
      uVar16 = 0x7fc00000;
    }
    else if ((local_19f & 7) == 4) {
      uVar16 = 0x37fc00000;
    }
    else {
      if ((local_19f >> 3 & 1) == 0) {
        uVar19 = local_19f >> 4 & 0x7ff;
        uVar17 = -uVar19;
        if (-1 < (short)local_19f) {
          uVar17 = uVar19;
        }
        fVar27 = (float)(int)uVar17;
      }
      else if (local_19f < 0x40) {
        fVar27 = afStack_dc[local_19f >> 4];
      }
      else {
        uVar16 = (ulong)(local_19f >> 4) - 4;
        if ((ulong)(local_c0[1] - *local_c0 >> 2) <= uVar16) {
          if (*(long *)(lVar8 + 0x28) == local_b8) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00114ad8 to 00114adb has its CatchHandler @ 00114bd4 */
            FUN_001152dc();
          }
          goto LAB_00114cac;
        }
        fVar27 = *(float *)(*local_c0 + uVar16 * 4);
      }
      fVar28 = ABS(fVar27);
      if ((local_19f & 7) == 1) {
        bVar10 = fVar28 < INFINITY;
        fVar29 = fVar27;
        if (!bVar10) {
          fVar29 = NAN;
        }
        uVar17 = (uint)bVar10;
        if (fVar28 != INFINITY && bVar10 == NAN(fVar28)) {
          uVar17 = 1;
          fVar29 = fVar27;
        }
        uVar16 = CONCAT44(uVar17,fVar29);
      }
      else {
        fVar29 = NAN;
        if (fVar28 != INFINITY) {
          fVar29 = fVar27;
        }
        uVar17 = (uint)(fVar28 < INFINITY);
        if (fVar28 != INFINITY && fVar28 < INFINITY == NAN(fVar28)) {
          uVar17 = 1;
        }
        fVar27 = NAN;
        if (!NAN(fVar28)) {
          fVar27 = fVar29;
        }
        uVar16 = (ulong)(uint)fVar27 | (ulong)uVar17 << 0x21;
      }
    }
    if ((local_2b7 & 7) == 0) {
      uVar18 = 0x7fc00000;
    }
    else if ((local_2b7 & 7) == 4) {
      uVar18 = 0x37fc00000;
    }
    else {
      if ((local_2b7 >> 3 & 1) == 0) {
        uVar19 = local_2b7 >> 4 & 0x7ff;
        uVar17 = -uVar19;
        if (-1 < (short)local_2b7) {
          uVar17 = uVar19;
        }
        fVar27 = (float)(int)uVar17;
      }
      else if (local_2b7 < 0x40) {
        fVar27 = afStack_1f4[local_2b7 >> 4];
      }
      else {
        uVar18 = (ulong)(local_2b7 >> 4) - 4;
        if ((ulong)(local_1d8[1] - *local_1d8 >> 2) <= uVar18) {
          if (*(long *)(lVar8 + 0x28) == local_b8) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00114aec to 00114aef has its CatchHandler @ 00114bd0 */
            FUN_001152dc();
          }
          goto LAB_00114cac;
        }
        fVar27 = *(float *)(*local_1d8 + uVar18 * 4);
      }
      fVar28 = ABS(fVar27);
      if ((local_2b7 & 7) == 1) {
        bVar10 = fVar28 < INFINITY;
        fVar29 = fVar27;
        if (!bVar10) {
          fVar29 = NAN;
        }
        uVar17 = (uint)bVar10;
        if (fVar28 != INFINITY && bVar10 == NAN(fVar28)) {
          uVar17 = 1;
          fVar29 = fVar27;
        }
        uVar18 = CONCAT44(uVar17,fVar29);
      }
      else {
        fVar29 = NAN;
        if (fVar28 != INFINITY) {
          fVar29 = fVar27;
        }
        uVar17 = (uint)(fVar28 < INFINITY);
        if (fVar28 != INFINITY && fVar28 < INFINITY == NAN(fVar28)) {
          uVar17 = 1;
        }
        fVar27 = NAN;
        if (!NAN(fVar28)) {
          fVar27 = fVar29;
        }
        uVar18 = (ulong)(uint)fVar27 | (ulong)uVar17 << 0x21;
      }
    }
    if ((((float)uVar16 != (float)uVar18) && ((!NAN((float)uVar16) || (!NAN((float)uVar18))))) ||
       ((int)(uVar16 >> 0x20) != (int)(uVar18 >> 0x20))) goto LAB_00114768;
    if ((local_19b & 7) == 0) {
      uVar16 = 0x7fc00000;
    }
    else if ((local_19b & 7) == 4) {
      uVar16 = 0x37fc00000;
    }
    else {
      if ((local_19b >> 3 & 1) == 0) {
        uVar19 = local_19b >> 4 & 0x7ff;
        uVar17 = -uVar19;
        if (-1 < (short)local_19b) {
          uVar17 = uVar19;
        }
        fVar27 = (float)(int)uVar17;
      }
      else if (local_19b < 0x40) {
        fVar27 = afStack_dc[local_19b >> 4];
      }
      else {
        uVar16 = (ulong)(local_19b >> 4) - 4;
        if ((ulong)(local_c0[1] - *local_c0 >> 2) <= uVar16) {
          if (*(long *)(lVar8 + 0x28) == local_b8) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00114b00 to 00114b03 has its CatchHandler @ 00114bcc */
            FUN_001152dc();
          }
          goto LAB_00114cac;
        }
        fVar27 = *(float *)(*local_c0 + uVar16 * 4);
      }
      fVar28 = ABS(fVar27);
      if ((local_19b & 7) == 1) {
        bVar10 = fVar28 < INFINITY;
        fVar29 = fVar27;
        if (!bVar10) {
          fVar29 = NAN;
        }
        uVar17 = (uint)bVar10;
        if (fVar28 != INFINITY && bVar10 == NAN(fVar28)) {
          uVar17 = 1;
          fVar29 = fVar27;
        }
        uVar16 = CONCAT44(uVar17,fVar29);
      }
      else {
        fVar29 = NAN;
        if (fVar28 != INFINITY) {
          fVar29 = fVar27;
        }
        uVar17 = (uint)(fVar28 < INFINITY);
        if (fVar28 != INFINITY && fVar28 < INFINITY == NAN(fVar28)) {
          uVar17 = 1;
        }
        fVar27 = NAN;
        if (!NAN(fVar28)) {
          fVar27 = fVar29;
        }
        uVar16 = (ulong)(uint)fVar27 | (ulong)uVar17 << 0x21;
      }
    }
    if ((local_2b3 & 7) == 0) {
      uVar18 = 0x7fc00000;
    }
    else if ((local_2b3 & 7) == 4) {
      uVar18 = 0x37fc00000;
    }
    else {
      if ((local_2b3 >> 3 & 1) == 0) {
        uVar19 = local_2b3 >> 4 & 0x7ff;
        uVar17 = -uVar19;
        if (-1 < (short)local_2b3) {
          uVar17 = uVar19;
        }
        fVar27 = (float)(int)uVar17;
      }
      else if (local_2b3 < 0x40) {
        fVar27 = afStack_1f4[local_2b3 >> 4];
      }
      else {
        uVar18 = (ulong)(local_2b3 >> 4) - 4;
        if ((ulong)(local_1d8[1] - *local_1d8 >> 2) <= uVar18) {
          if (*(long *)(lVar8 + 0x28) == local_b8) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00114b14 to 00114b17 has its CatchHandler @ 00114bc8 */
            FUN_001152dc();
          }
          goto LAB_00114cac;
        }
        fVar27 = *(float *)(*local_1d8 + uVar18 * 4);
      }
      fVar28 = ABS(fVar27);
      if ((local_2b3 & 7) == 1) {
        bVar10 = fVar28 < INFINITY;
        fVar29 = fVar27;
        if (!bVar10) {
          fVar29 = NAN;
        }
        uVar17 = (uint)bVar10;
        if (fVar28 != INFINITY && bVar10 == NAN(fVar28)) {
          uVar17 = 1;
          fVar29 = fVar27;
        }
        uVar18 = CONCAT44(uVar17,fVar29);
      }
      else {
        fVar29 = NAN;
        if (fVar28 != INFINITY) {
          fVar29 = fVar27;
        }
        uVar17 = (uint)(fVar28 < INFINITY);
        if (fVar28 != INFINITY && fVar28 < INFINITY == NAN(fVar28)) {
          uVar17 = 1;
        }
        fVar27 = NAN;
        if (!NAN(fVar28)) {
          fVar27 = fVar29;
        }
        uVar18 = (ulong)(uint)fVar27 | (ulong)uVar17 << 0x21;
      }
    }
    if ((((float)uVar16 != (float)uVar18) && ((!NAN((float)uVar16) || (!NAN((float)uVar18))))) ||
       ((int)(uVar16 >> 0x20) != (int)(uVar18 >> 0x20))) goto LAB_00114768;
    uVar4 = CONCAT11(cStack_198,local_199);
    if ((local_199 & 7) == 0) {
      uVar16 = 0x7fc00000;
    }
    else if ((local_199 & 7) == 4) {
      uVar16 = 0x37fc00000;
    }
    else {
      if ((local_199 & 8) == 0) {
        uVar19 = uVar4 >> 4 & 0x7ff;
        uVar17 = -uVar19;
        if (-1 < cStack_198) {
          uVar17 = uVar19;
        }
        fVar27 = (float)(int)uVar17;
      }
      else if (uVar4 < 0x40) {
        fVar27 = afStack_dc[uVar4 >> 4];
      }
      else {
        uVar16 = (ulong)(uVar4 >> 4) - 4;
        if ((ulong)(local_c0[1] - *local_c0 >> 2) <= uVar16) {
          if (*(long *)(lVar8 + 0x28) == local_b8) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00114b28 to 00114b2b has its CatchHandler @ 00114bc4 */
            FUN_001152dc();
          }
          goto LAB_00114cac;
        }
        fVar27 = *(float *)(*local_c0 + uVar16 * 4);
      }
      fVar28 = ABS(fVar27);
      if ((local_199 & 7) == 1) {
        bVar10 = fVar28 < INFINITY;
        fVar29 = fVar27;
        if (!bVar10) {
          fVar29 = NAN;
        }
        uVar17 = (uint)bVar10;
        if (fVar28 != INFINITY && bVar10 == NAN(fVar28)) {
          uVar17 = 1;
          fVar29 = fVar27;
        }
        uVar16 = CONCAT44(uVar17,fVar29);
      }
      else {
        fVar29 = NAN;
        if (fVar28 != INFINITY) {
          fVar29 = fVar27;
        }
        uVar17 = (uint)(fVar28 < INFINITY);
        if (fVar28 != INFINITY && fVar28 < INFINITY == NAN(fVar28)) {
          uVar17 = 1;
        }
        fVar27 = NAN;
        if (!NAN(fVar28)) {
          fVar27 = fVar29;
        }
        uVar16 = (ulong)(uint)fVar27 | (ulong)uVar17 << 0x21;
      }
    }
    if ((local_2b1 & 7) == 0) {
      uVar18 = 0x7fc00000;
    }
    else if ((local_2b1 & 7) == 4) {
      uVar18 = 0x37fc00000;
    }
    else {
      if ((local_2b1 >> 3 & 1) == 0) {
        uVar19 = local_2b1 >> 4 & 0x7ff;
        uVar17 = -uVar19;
        if (-1 < (short)local_2b1) {
          uVar17 = uVar19;
        }
        fVar27 = (float)(int)uVar17;
      }
      else if (local_2b1 < 0x40) {
        fVar27 = afStack_1f4[local_2b1 >> 4];
      }
      else {
        uVar18 = (ulong)(local_2b1 >> 4) - 4;
        if ((ulong)(local_1d8[1] - *local_1d8 >> 2) <= uVar18) {
          if (*(long *)(lVar8 + 0x28) == local_b8) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00114b3c to 00114b3f has its CatchHandler @ 00114bc0 */
            FUN_001152dc();
          }
          goto LAB_00114cac;
        }
        fVar27 = *(float *)(*local_1d8 + uVar18 * 4);
      }
      fVar28 = ABS(fVar27);
      if ((local_2b1 & 7) == 1) {
        bVar10 = fVar28 < INFINITY;
        fVar29 = fVar27;
        if (!bVar10) {
          fVar29 = NAN;
        }
        uVar17 = (uint)bVar10;
        if (fVar28 != INFINITY && bVar10 == NAN(fVar28)) {
          uVar17 = 1;
          fVar29 = fVar27;
        }
        uVar18 = CONCAT44(uVar17,fVar29);
      }
      else {
        fVar29 = NAN;
        if (fVar28 != INFINITY) {
          fVar29 = fVar27;
        }
        uVar17 = (uint)(fVar28 < INFINITY);
        if (fVar28 != INFINITY && fVar28 < INFINITY == NAN(fVar28)) {
          uVar17 = 1;
        }
        fVar27 = NAN;
        if (!NAN(fVar28)) {
          fVar27 = fVar29;
        }
        uVar18 = (ulong)(uint)fVar27 | (ulong)uVar17 << 0x21;
      }
    }
    if ((((float)uVar16 != (float)uVar18) && ((!NAN((float)uVar16) || (!NAN((float)uVar18))))) ||
       ((int)(uVar16 >> 0x20) != (int)(uVar18 >> 0x20))) goto LAB_00114768;
    uVar4 = CONCAT11(cStack_1c0,bStack_1c1);
    if ((bStack_1c1 & 7) == 0) {
      uVar16 = 0x7fc00000;
    }
    else if ((bStack_1c1 & 7) == 4) {
      uVar16 = 0x37fc00000;
    }
    else {
      if ((bStack_1c1 & 8) == 0) {
        uVar19 = uVar4 >> 4 & 0x7ff;
        uVar17 = -uVar19;
        if (-1 < cStack_1c0) {
          uVar17 = uVar19;
        }
        fVar27 = (float)(int)uVar17;
      }
      else if (uVar4 < 0x40) {
        fVar27 = afStack_dc[uVar4 >> 4];
      }
      else {
        uVar16 = (ulong)(uVar4 >> 4) - 4;
        if ((ulong)(local_c0[1] - *local_c0 >> 2) <= uVar16) {
          if (*(long *)(lVar8 + 0x28) == local_b8) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00114b50 to 00114b53 has its CatchHandler @ 00114bb4 */
            FUN_001152dc();
          }
          goto LAB_00114cac;
        }
        fVar27 = *(float *)(*local_c0 + uVar16 * 4);
      }
      fVar28 = ABS(fVar27);
      if ((bStack_1c1 & 7) == 1) {
        bVar10 = fVar28 < INFINITY;
        fVar29 = fVar27;
        if (!bVar10) {
          fVar29 = NAN;
        }
        uVar17 = (uint)bVar10;
        if (fVar28 != INFINITY && bVar10 == NAN(fVar28)) {
          uVar17 = 1;
          fVar29 = fVar27;
        }
        uVar16 = CONCAT44(uVar17,fVar29);
      }
      else {
        fVar29 = NAN;
        if (fVar28 != INFINITY) {
          fVar29 = fVar27;
        }
        uVar17 = (uint)(fVar28 < INFINITY);
        if (fVar28 != INFINITY && fVar28 < INFINITY == NAN(fVar28)) {
          uVar17 = 1;
        }
        fVar27 = NAN;
        if (!NAN(fVar28)) {
          fVar27 = fVar29;
        }
        uVar16 = (ulong)(uint)fVar27 | (ulong)uVar17 << 0x21;
      }
    }
    if ((local_2d9 & 7) == 0) {
      uVar18 = 0x7fc00000;
    }
    else if ((local_2d9 & 7) == 4) {
      uVar18 = 0x37fc00000;
    }
    else {
      if ((local_2d9 >> 3 & 1) == 0) {
        uVar19 = local_2d9 >> 4 & 0x7ff;
        uVar17 = -uVar19;
        if (-1 < (short)local_2d9) {
          uVar17 = uVar19;
        }
        fVar27 = (float)(int)uVar17;
      }
      else if (local_2d9 < 0x40) {
        fVar27 = afStack_1f4[local_2d9 >> 4];
      }
      else {
        uVar18 = (ulong)(local_2d9 >> 4) - 4;
        if ((ulong)(local_1d8[1] - *local_1d8 >> 2) <= uVar18) {
          if (*(long *)(lVar8 + 0x28) == local_b8) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00114b64 to 00114b67 has its CatchHandler @ 00114bb0 */
            FUN_001152dc();
          }
          goto LAB_00114cac;
        }
        fVar27 = *(float *)(*local_1d8 + uVar18 * 4);
      }
      fVar28 = ABS(fVar27);
      if ((local_2d9 & 7) == 1) {
        bVar10 = fVar28 < INFINITY;
        fVar29 = fVar27;
        if (!bVar10) {
          fVar29 = NAN;
        }
        uVar17 = (uint)bVar10;
        if (fVar28 != INFINITY && bVar10 == NAN(fVar28)) {
          uVar17 = 1;
          fVar29 = fVar27;
        }
        uVar18 = CONCAT44(uVar17,fVar29);
      }
      else {
        fVar29 = NAN;
        if (fVar28 != INFINITY) {
          fVar29 = fVar27;
        }
        uVar17 = (uint)(fVar28 < INFINITY);
        if (fVar28 != INFINITY && fVar28 < INFINITY == NAN(fVar28)) {
          uVar17 = 1;
        }
        fVar27 = NAN;
        if (!NAN(fVar28)) {
          fVar27 = fVar29;
        }
        uVar18 = (ulong)(uint)fVar27 | (ulong)uVar17 << 0x21;
      }
    }
    if ((((float)uVar16 != (float)uVar18) && ((!NAN((float)uVar16) || (!NAN((float)uVar18))))) ||
       ((int)(uVar16 >> 0x20) != (int)(uVar18 >> 0x20))) goto LAB_00114768;
    if ((uStack_1c3 & 7) == 0) {
      uVar16 = 0x7fc00000;
    }
    else if ((uStack_1c3 & 7) == 4) {
      uVar16 = 0x37fc00000;
    }
    else {
      if ((uStack_1c3 >> 3 & 1) == 0) {
        uVar19 = uStack_1c3 >> 4 & 0x7ff;
        uVar17 = -uVar19;
        if (-1 < (short)uStack_1c3) {
          uVar17 = uVar19;
        }
        fVar27 = (float)(int)uVar17;
      }
      else if (uStack_1c3 < 0x40) {
        fVar27 = afStack_dc[uStack_1c3 >> 4];
      }
      else {
        uVar16 = (ulong)(uStack_1c3 >> 4) - 4;
        if ((ulong)(local_c0[1] - *local_c0 >> 2) <= uVar16) {
          if (*(long *)(lVar8 + 0x28) == local_b8) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00114b78 to 00114b7b has its CatchHandler @ 00114ba4 */
            FUN_001152dc();
          }
          goto LAB_00114cac;
        }
        fVar27 = *(float *)(*local_c0 + uVar16 * 4);
      }
      fVar28 = ABS(fVar27);
      if ((uStack_1c3 & 7) == 1) {
        bVar10 = fVar28 < INFINITY;
        fVar29 = fVar27;
        if (!bVar10) {
          fVar29 = NAN;
        }
        uVar17 = (uint)bVar10;
        if (fVar28 != INFINITY && bVar10 == NAN(fVar28)) {
          uVar17 = 1;
          fVar29 = fVar27;
        }
        uVar16 = CONCAT44(uVar17,fVar29);
      }
      else {
        fVar29 = NAN;
        if (fVar28 != INFINITY) {
          fVar29 = fVar27;
        }
        uVar17 = (uint)(fVar28 < INFINITY);
        if (fVar28 != INFINITY && fVar28 < INFINITY == NAN(fVar28)) {
          uVar17 = 1;
        }
        fVar27 = NAN;
        if (!NAN(fVar28)) {
          fVar27 = fVar29;
        }
        uVar16 = (ulong)(uint)fVar27 | (ulong)uVar17 << 0x21;
      }
    }
    if ((local_2db & 7) == 0) {
      uVar22 = 0x7fc00000;
    }
    else if ((local_2db & 7) != 4) {
      if ((local_2db >> 3 & 1) == 0) {
        uVar19 = local_2db >> 4 & 0x7ff;
        uVar17 = -uVar19;
        if (-1 < (short)local_2db) {
          uVar17 = uVar19;
        }
        fVar27 = (float)(int)uVar17;
      }
      else if (local_2db < 0x40) {
        fVar27 = afStack_1f4[local_2db >> 4];
      }
      else {
        uVar22 = (ulong)(local_2db >> 4) - 4;
        if ((ulong)(local_1d8[1] - *local_1d8 >> 2) <= uVar22) {
          if (*(long *)(lVar8 + 0x28) == local_b8) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00114b8c to 00114b8f has its CatchHandler @ 00114ba0 */
            FUN_001152dc();
          }
          goto LAB_00114cac;
        }
        fVar27 = *(float *)(*local_1d8 + uVar22 * 4);
      }
      fVar28 = ABS(fVar27);
      if ((local_2db & 7) == 1) {
        bVar10 = fVar28 < INFINITY;
        fVar29 = fVar27;
        if (!bVar10) {
          fVar29 = NAN;
        }
        uVar17 = (uint)bVar10;
        if (fVar28 != INFINITY && bVar10 == NAN(fVar28)) {
          uVar17 = 1;
          fVar29 = fVar27;
        }
        uVar22 = CONCAT44(uVar17,fVar29);
      }
      else {
        fVar29 = NAN;
        if (fVar28 != INFINITY) {
          fVar29 = fVar27;
        }
        uVar17 = (uint)(fVar28 < INFINITY);
        if (fVar28 != INFINITY && fVar28 < INFINITY == NAN(fVar28)) {
          uVar17 = 1;
        }
        fVar27 = NAN;
        if (!NAN(fVar28)) {
          fVar27 = fVar29;
        }
        uVar22 = (ulong)(uint)fVar27 | (ulong)uVar17 << 0x21;
      }
    }
    if ((((float)uVar16 != (float)uVar22) && ((!NAN((float)uVar16) || (!NAN((float)uVar22))))) ||
       ((int)(uVar16 >> 0x20) != (int)(uVar22 >> 0x20))) goto LAB_00114768;
                    /* try { // try from 001146ac to 001146b7 has its CatchHandler @ 00114bbc */
    uVar22 = FUN_00114df0(&local_1d0,2);
                    /* try { // try from 001146b8 to 001146c7 has its CatchHandler @ 00114bb8 */
    uVar16 = FUN_00114df0(auStack_2e8,2);
    if ((((float)uVar22 != (float)uVar16) && ((!NAN((float)uVar22) || (!NAN((float)uVar16))))) ||
       ((uVar16 ^ uVar22) >> 0x20 != 0)) goto LAB_00114768;
                    /* try { // try from 001146ec to 001146f7 has its CatchHandler @ 00114bac */
    uVar22 = FUN_00114df0(&local_1d0,3);
                    /* try { // try from 001146f8 to 00114707 has its CatchHandler @ 00114ba8 */
    uVar16 = FUN_00114df0(auStack_2e8,3);
    if ((((float)uVar22 != (float)uVar16) && ((!NAN((float)uVar22) || (!NAN((float)uVar16))))) ||
       ((uVar16 ^ uVar22) >> 0x20 != 0)) goto LAB_00114768;
  }
  else {
LAB_00114768:
    *(undefined8 *)(this + 0x160) = uStack_188;
    *(undefined8 *)(this + 0x158) = local_190;
    *(ulong *)(this + 0x170) = CONCAT71(local_177,uStack_178);
    *(undefined8 *)(this + 0x168) = uStack_180;
    *(undefined8 *)(this + 0x179) = uStack_16f;
    *(ulong *)(this + 0x171) = CONCAT17(uStack_170,local_177);
    *(ulong *)(this + 0x120) = CONCAT17(bStack_1c1,CONCAT25(uStack_1c3,uStack_1c8));
    *(undefined8 *)pRVar1 = local_1d0;
    *(undefined8 *)(this + 0x130) = uStack_1b8;
    *(ulong *)(this + 0x128) = CONCAT53(local_1bd,CONCAT21(local_1bf,cStack_1c0));
    *(undefined8 *)(this + 0x140) = uStack_1a8;
    *(undefined8 *)(this + 0x138) = local_1b0;
    *(ulong *)(this + 0x150) = CONCAT71(uStack_197,cStack_198);
    *(ulong *)(this + 0x148) =
         CONCAT17(local_199,CONCAT25(local_19b,CONCAT23(local_19d,CONCAT21(local_19f,uStack_1a0))));
    if (pRVar1 != (RNCSafeAreaViewShadowNode *)&local_1d0) {
                    /* try { // try from 001147b8 to 0011483f has its CatchHandler @ 00114c70 */
      FUN_00115ae0(this + 0x188,local_160,local_158,
                   ((long)local_158 - (long)local_160 >> 2) * 0x6db6db6db6db6db7);
      FUN_00115ae0(this + 0x1a0,local_148,local_140,
                   ((long)local_140 - (long)local_148 >> 2) * 0x6db6db6db6db6db7);
      FUN_00115ae0(this + 0x1b8,local_130,local_128,
                   ((long)local_128 - (long)local_130 >> 2) * 0x6db6db6db6db6db7);
      FUN_00115ae0(this + 0x1d0,local_118,local_110,
                   ((long)local_110 - (long)local_118 >> 2) * 0x6db6db6db6db6db7);
    }
    *(undefined8 *)(this + 0x1f0) = uStack_f8;
    *(undefined8 *)(this + 0x1e8) = local_100;
    *(undefined8 *)(this + 0x200) = uStack_e8;
    *(undefined8 *)(this + 0x1f8) = uStack_f0;
    FUN_001154b4(this + 0x208,auStack_e0);
    facebook::yoga::Node::setDirty((bool)((char)this + -0x10));
  }
  plVar9 = local_1d8;
  local_1d8 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    if ((void *)plVar9[3] != (void *)0x0) {
      operator_delete((void *)plVar9[3]);
    }
    pvVar12 = (void *)*plVar9;
    if (pvVar12 != (void *)0x0) {
      plVar9[1] = (long)pvVar12;
      operator_delete(pvVar12);
    }
    operator_delete(plVar9);
  }
  if (local_230 != (void *)0x0) {
    local_228 = local_230;
    operator_delete(local_230);
  }
  if (local_248 != (void *)0x0) {
    local_240 = local_248;
    operator_delete(local_248);
  }
  if (local_260 != (void *)0x0) {
    local_258 = local_260;
    operator_delete(local_260);
  }
  if (local_278 != (void *)0x0) {
    local_270 = local_278;
    operator_delete(local_278);
  }
  plVar9 = local_c0;
  local_c0 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    if ((void *)plVar9[3] != (void *)0x0) {
      operator_delete((void *)plVar9[3]);
    }
    pvVar12 = (void *)*plVar9;
    if (pvVar12 != (void *)0x0) {
      plVar9[1] = (long)pvVar12;
      operator_delete(pvVar12);
    }
    operator_delete(plVar9);
  }
  if (local_118 != (void *)0x0) {
    local_110 = local_118;
    operator_delete(local_118);
  }
  if (local_130 != (void *)0x0) {
    local_128 = local_130;
    operator_delete(local_130);
  }
  if (local_148 != (void *)0x0) {
    local_140 = local_148;
    operator_delete(local_148);
  }
  if (local_160 != (void *)0x0) {
    local_158 = local_160;
    operator_delete(local_160);
  }
  if (((byte)local_310 & 1) != 0) {
    operator_delete(local_300);
  }
  if (((byte)local_328 & 1) != 0) {
    operator_delete(local_318);
  }
  if (((byte)local_340 & 1) != 0) {
    operator_delete(local_330);
  }
  if (((byte)local_358[0] & 1) != 0) {
    operator_delete(local_348);
  }
  if ((plVar11 != (long *)0x0) &&
     (lVar13 = FUN_0010e610(0xffffffffffffffff,plVar11 + 1), lVar13 == 0)) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar8 + 0x28) == local_b8) {
    return;
  }
LAB_00114cac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00114cb0  FUN_00114cb0 =====

void FUN_00114cb0(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,byte *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*param_2 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)param_1 = uVar1;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  if ((param_2[0x18] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  else {
                    /* try { // try from 00114d10 to 00114d17 has its CatchHandler @ 00114dd4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x18,*(char **)(param_2 + 0x28),*(ulong *)(param_2 + 0x20));
  }
  if ((param_2[0x30] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined8 *)(param_1 + 0x30) = uVar1;
  }
  else {
                    /* try { // try from 00114d3c to 00114d43 has its CatchHandler @ 00114db4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x30,*(char **)(param_2 + 0x40),*(ulong *)(param_2 + 0x38));
  }
  if ((param_2[0x48] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x50);
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = uVar2;
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  else {
                    /* try { // try from 00114d68 to 00114d6f has its CatchHandler @ 00114d7c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1 + 0x48,*(char **)(param_2 + 0x58),*(ulong *)(param_2 + 0x50));
  }
  return;
}


// ===== 00114df0  FUN_00114df0 =====

ulong FUN_00114df0(long param_1,byte param_2)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar2 = *(ushort *)(param_1 + (ulong)param_2 * 2 + 0xd);
  if ((uVar2 & 7) == 0) {
    return 0x7fc00000;
  }
  if ((uVar2 & 7) == 4) {
    return 0x37fc00000;
  }
  if ((uVar2 >> 3 & 1) == 0) {
    uVar3 = uVar2 >> 4 & 0x7ff;
    uVar5 = -uVar3;
    if (-1 < (short)uVar2) {
      uVar5 = uVar3;
    }
    fVar7 = (float)(int)uVar5;
  }
  else if (uVar2 < 0x40) {
    fVar7 = *(float *)(param_1 + (ulong)(uVar2 >> 4) * 4 + 0xf4);
  }
  else {
    uVar6 = (ulong)(uVar2 >> 4) - 4;
    lVar1 = **(long **)(param_1 + 0x110);
    if ((ulong)((*(long **)(param_1 + 0x110))[1] - lVar1 >> 2) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_001152dc();
    }
    fVar7 = *(float *)(lVar1 + uVar6 * 4);
  }
  fVar8 = ABS(fVar7);
  if ((uVar2 & 7) != 1) {
    fVar9 = NAN;
    if (fVar8 != INFINITY) {
      fVar9 = fVar7;
    }
    uVar5 = (uint)(fVar8 < INFINITY);
    if (fVar8 != INFINITY && fVar8 < INFINITY == NAN(fVar8)) {
      uVar5 = 1;
    }
    fVar7 = NAN;
    if (!NAN(fVar8)) {
      fVar7 = fVar9;
    }
    return (ulong)(uint)fVar7 | (ulong)uVar5 << 0x21;
  }
  bVar4 = fVar8 < INFINITY;
  fVar9 = fVar7;
  if (!bVar4) {
    fVar9 = NAN;
  }
  uVar5 = (uint)bVar4;
  if (fVar8 != INFINITY && bVar4 == NAN(fVar8)) {
    uVar5 = 1;
    fVar9 = fVar7;
  }
  return CONCAT44(uVar5,fVar9);
}


// ===== 00114eec  FUN_00114eec =====

void FUN_00114eec(undefined8 *param_1,undefined8 *param_2)

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
LAB_00114fa4:
    unaff_x24 = param_1 + 0x11;
    *unaff_x24 = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    pvVar4 = (void *)param_2[0x11];
    uVar1 = param_2[0x12] - (long)pvVar4;
    if (uVar1 != 0) {
      if (0x924924924924924 < (ulong)(((long)uVar1 >> 2) * 0x6db6db6db6db6db7)) goto LAB_001150cc;
                    /* try { // try from 00114fcc to 00114fd3 has its CatchHandler @ 0011515c */
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
      if (0x924924924924924 < (ulong)(((long)uVar1 >> 2) * 0x6db6db6db6db6db7)) goto LAB_001150d0;
                    /* try { // try from 00115018 to 0011501f has its CatchHandler @ 0011514c */
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
      if (0x924924924924924 < (ulong)(((long)uVar1 >> 2) * 0x6db6db6db6db6db7)) goto LAB_001150d4;
                    /* try { // try from 00115064 to 0011506b has its CatchHandler @ 001150f0 */
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
                    /* try { // try from 001150a4 to 001150ab has its CatchHandler @ 001150d8 */
    FUN_001154b4(param_1 + 0x1e,param_2 + 0x1e);
    return;
  }
  if ((ulong)(((long)uVar1 >> 2) * 0x6db6db6db6db6db7) < 0x924924924924925) {
                    /* try { // try from 00114f80 to 00114f87 has its CatchHandler @ 0011516c */
    pvVar2 = operator_new(uVar1);
    param_1[0xe] = pvVar2;
    param_1[0xf] = pvVar2;
    param_1[0x10] = (long)pvVar2 + uVar1;
    memcpy(pvVar2,pvVar4,uVar1 - 3);
    param_1[0xf] = (long)pvVar2 + uVar1;
    goto LAB_00114fa4;
  }
                    /* try { // try from 001150c8 to 001150cb has its CatchHandler @ 0011516c */
  FUN_001154a0();
LAB_001150cc:
                    /* try { // try from 001150cc to 001150cf has its CatchHandler @ 0011515c */
  FUN_001154a0();
LAB_001150d0:
                    /* try { // try from 001150d0 to 001150d3 has its CatchHandler @ 0011514c */
  FUN_001154a0();
LAB_001150d4:
                    /* try { // try from 001150d4 to 001150d7 has its CatchHandler @ 001150f0 */
  uVar3 = FUN_001154a0();
                    /* catch() { ... } // from try @ 001150a4 with catch @ 001150d8 */
  FUN_00115684(param_1 + 0x22);
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
  FUN_0010e774(uVar3);
}


// ===== 0011517c  FUN_0011517c =====

void FUN_0011517c(long param_1)

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


// ===== 00115210  FUN_00115210 =====

void FUN_00115210(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x48] & 1) == 0) {
    bVar1 = param_1[0x30];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x58));
    bVar1 = param_1[0x30];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x40));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 0011528c  FUN_0011528c =====

void FUN_0011528c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010e610(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001152dc  FUN_001152dc =====

void FUN_001152dc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001152e8();
}


// ===== 001152e8  FUN_001152e8 =====

void FUN_001152e8(void)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 00115300 to 00115303 has its CatchHandler @ 0011531c */
  FUN_00115330();
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_typeinfo_00122f70,PTR__out_of_range_00122f58);
}


// ===== 00115330  FUN_00115330 =====

void FUN_00115330(logic_error *param_1)

{
  std::logic_error::logic_error(param_1,"vector");
  *(undefined **)param_1 = PTR_vtable_00122f78 + 0x10;
  return;
}


// ===== 00115368  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init_copy_ctor_external =====

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
      FUN_001153d8(this);
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


// ===== 001153d8  FUN_001153d8 =====

void FUN_001153d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001153ec("basic_string");
}


// ===== 001153ec  FUN_001153ec =====

void FUN_001153ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 00115408 to 0011540f has its CatchHandler @ 00115428 */
  FUN_0011543c(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_typeinfo_00122f80,PTR__length_error_00122f60);
}


// ===== 0011543c  FUN_0011543c =====

void FUN_0011543c(logic_error *param_1,char *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  *(undefined **)param_1 = PTR_vtable_00122f88 + 0x10;
  return;
}


// ===== 0011546c  FUN_0011546c =====

void FUN_0011546c(void)

{
  bad_array_new_length *this;
  
  this = (bad_array_new_length *)__cxa_allocate_exception(8);
  std::bad_array_new_length::bad_array_new_length(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_typeinfo_00122f90,PTR__bad_array_new_length_00122f68);
}


// ===== 001154a0  FUN_001154a0 =====

void FUN_001154a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001153ec("vector");
}


// ===== 001154b4  FUN_001154b4 =====

undefined2 * FUN_001154b4(undefined2 *param_1,undefined2 *param_2)

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
                    /* try { // try from 00115650 to 00115653 has its CatchHandler @ 0011565c */
        FUN_001156d4();
        goto LAB_00115654;
      }
                    /* try { // try from 00115510 to 00115517 has its CatchHandler @ 0011565c */
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
LAB_00115654:
                    /* try { // try from 00115654 to 00115657 has its CatchHandler @ 00115658 */
        uVar6 = FUN_001156e8();
                    /* catch() { ... } // from try @ 00115558 with catch @ 00115658
                       catch() { ... } // from try @ 00115654 with catch @ 00115658 */
                    /* catch() { ... } // from try @ 00115510 with catch @ 0011565c
                       catch() { ... } // from try @ 00115650 with catch @ 0011565c */
        pvVar5 = (void *)*puVar3;
        if (pvVar5 != (void *)0x0) {
          puVar3[1] = pvVar5;
          operator_delete(pvVar5);
        }
        operator_delete(puVar3);
                    /* WARNING: Subroutine does not return */
        FUN_0010e774(uVar6);
      }
      uVar13 = uVar12 - 1 >> 6;
      lVar1 = uVar13 + 1;
                    /* try { // try from 00115558 to 0011555b has its CatchHandler @ 00115658 */
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


// ===== 00115684  FUN_00115684 =====

void FUN_00115684(undefined8 *param_1)

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


// ===== 001156d4  FUN_001156d4 =====

void FUN_001156d4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001153ec("vector");
}


// ===== 001156e8  FUN_001156e8 =====

void FUN_001156e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001153ec("vector");
}


// ===== 001156fc  FUN_001156fc =====

void FUN_001156fc(float param_1,ushort *param_2,ushort *param_3)

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
    }
    else {
      uVar24 = (ulong)(uVar3 >> 4) - 4;
      lVar22 = **(long **)(param_2 + 0x10);
      if ((ulong)((*(long **)(param_2 + 0x10))[1] - lVar22 >> 2) <= uVar24) {
                    /* WARNING: Subroutine does not return */
        FUN_001152dc();
      }
      *(float *)(lVar22 + uVar24 * 4) = param_1;
    }
    goto LAB_00115ab0;
  }
  if (((float)(int)param_1 == param_1) && (uVar9 = (uint)param_1, uVar9 + 0x7ff < 0xfff)) {
    uVar2 = -uVar9 | 0x800;
    if (0.0 <= param_1) {
      uVar2 = uVar9;
    }
    uVar8 = (ushort)(uVar2 << 4) | 1;
    goto LAB_00115ab0;
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
      if (uVar24 >> 0x3e != 0) {
        FUN_001156d4();
LAB_00115adc:
                    /* WARNING: Subroutine does not return */
        FUN_0011546c();
      }
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
        if (uVar15 >> 0x3e != 0) goto LAB_00115adc;
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
          if (uVar24 == uVar20) goto LAB_00115928;
        }
        do {
          pfVar25 = pfVar25 + -1;
          pfVar11 = pfVar10 + -1;
          *pfVar11 = *pfVar25;
          pfVar10 = pfVar11;
        } while (pfVar25 != pfVar23);
      }
LAB_00115928:
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
LAB_00115990:
        FUN_001156e8();
        puVar7 = extraout_x1;
LAB_00115994:
        uVar12 = 0x7fffffffffffffff;
        if (0x7ffffffffffffffe < uVar24) {
          uVar24 = 0xffffffffffffffff;
          goto LAB_00115a78;
        }
      }
      else {
        if (0x3ffffffffffffffe < uVar24) goto LAB_00115994;
        uVar12 = *(long *)(lVar22 + 0x28) * 0x80;
        uVar15 = (uVar24 & 0x3fffffffffffffc0) + 0x40;
        if (uVar12 < uVar15 || uVar12 - uVar15 == 0) {
          uVar12 = uVar15;
        }
        if (uVar12 <= uVar24) goto LAB_00115a78;
        if ((long)uVar12 < 0) goto LAB_00115990;
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
LAB_00115a78:
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
LAB_00115ab0:
  *param_3 = uVar8;
  return;
}


// ===== 00115ae0  FUN_00115ae0 =====

void FUN_00115ae0(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

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
LAB_00115c38:
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
      goto LAB_00115c38;
    }
  }
  pfVar1 = (float *)FUN_001154a0();
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
  piVar2 = (int *)folly::dynamic::operator[](auStack_b8,&DAT_001095b5,&DAT_001095b8);
  if (*piVar2 != 3) {
    folly::dynamic::destroy();
    *piVar2 = 3;
  }
  *(double *)(piVar2 + 2) = (double)fVar5;
  fVar5 = *pfVar1;
  piVar2 = (int *)folly::dynamic::operator[](auStack_b8,&DAT_00109374,&DAT_00109378);
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


// ===== 00115c58  facebook::react::RNCSafeAreaViewState::getDynamic =====

/* facebook::react::RNCSafeAreaViewState::getDynamic() const */

void facebook::react::RNCSafeAreaViewState::getDynamic(void)

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
                    /* try { // try from 00115cbc to 00115d8f has its CatchHandler @ 00115e48 */
  piVar2 = (int *)folly::dynamic::operator[](local_78,&DAT_001095b5,&DAT_001095b8);
  if (*piVar2 != 3) {
    folly::dynamic::destroy();
    *piVar2 = 3;
  }
  *(double *)(piVar2 + 2) = (double)fVar3;
  fVar3 = *in_x0;
  piVar2 = (int *)folly::dynamic::operator[](local_78,&DAT_00109374,&DAT_00109378);
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
                    /* try { // try from 00115dec to 00115e07 has its CatchHandler @ 00115e38 */
  this = (dynamic *)folly::dynamic::operator[]();
  folly::dynamic::operator=(this,(dynamic *)local_78);
  folly::dynamic::destroy();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00115e70  facebook::react::safeareacontext_registerComponentDescriptorsFromCodegen =====

/* WARNING: Removing unreachable block (ram,0x00115ebc) */
/* WARNING: Removing unreachable block (ram,0x00115ecc) */
/* facebook::react::safeareacontext_registerComponentDescriptorsFromCodegen(std::__ndk1::shared_ptr<facebook::react::ComponentDescriptorProviderRegistry
   const>) */

void facebook::react::safeareacontext_registerComponentDescriptorsFromCodegen(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00115eac to 00115eb3 has its CatchHandler @ 00115f04 */
  facebook::react::ComponentDescriptorProviderRegistry::add((ComponentDescriptorProvider *)*param_1)
  ;
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00115f2c  FUN_00115f2c =====

void FUN_00115f2c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x18);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010e610(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00115f7c  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
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
                    /* try { // try from 00115fcc to 00115fd7 has its CatchHandler @ 00116688 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_1000);
  local_130 = 0;
  *(undefined ***)this = &PTR_FUN_00122180;
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
                    /* try { // try from 00116040 to 0011604b has its CatchHandler @ 0011667c */
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
  local_fb0 = PTR_construction_vtable_00123008 + 0x20;
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
  puVar6 = PTR_PTR_00122fd0;
  puVar5 = PTR_vtable_00122fc8;
  local_f5c = 0;
  local_f01 = 0;
  uStack_a20 = _UNK_00109db8;
  local_a28 = _DAT_00109db0;
  local_f5b = DAT_00109c68;
  uStack_b18 = _UNK_00109c78;
  local_b20 = _DAT_00109c70;
  uStack_a30 = _UNK_00109da8;
  local_a38 = _DAT_00109da0;
  local_e44 = 0;
  uStack_a40 = _UNK_00109d98;
  local_a48 = _DAT_00109d90;
  uStack_a50 = _UNK_00109d88;
  local_a58 = _DAT_00109d80;
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
  local_fb0 = PTR_vtable_00122fc8 + 0x20;
  local_80 = (long *)0x0;
                    /* try { // try from 0011643c to 00116463 has its CatchHandler @ 00116640 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)&local_8d0,(PropsParserContext *)(PTR_PTR_00122fd0 + 8),
             (HostPlatformViewProps *)local_1010,(RawProps *)&local_fb0,(function *)&local_130);
  if (local_80 == local_a0) {
    lVar7 = 4;
    plVar8 = local_a0;
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_00116490;
    lVar7 = 5;
    plVar8 = local_80;
  }
  (**(code **)(*plVar8 + lVar7 * 8))();
LAB_00116490:
  local_8d0 = puVar5 + 0x20;
  FUN_00117a80(&local_8d0,puVar6 + 8);
  FUN_00117a80(&local_fb0,puVar6 + 8);
  facebook::react::RawPropsParser::postPrepare();
  pvVar3 = local_160;
  puVar4 = (undefined8 *)local_150;
  while (puVar4 != (undefined8 *)0x0) {
    plVar8 = (long *)puVar4[6];
    pvVar9 = (void *)*puVar4;
    local_160 = pvVar3;
    if ((plVar8 == (long *)0x0) || (lVar7 = FUN_0010e610(0xffffffffffffffff,plVar8 + 1), lVar7 != 0)
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
                    /* try { // try from 0011659c to 001165a7 has its CatchHandler @ 001166b8 */
        (*(code *)(&PTR_FUN_00122220)[*(uint *)((long)pvVar3 + -8)])
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


// ===== 001166bc  FUN_001166bc =====

void FUN_001166bc(undefined8 *param_1)

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


// ===== 00116710  FUN_00116710 =====

void FUN_00116710(void)

{
  __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 00116720  FUN_00116720 =====

void FUN_00116720(void *param_1)

{
  FUN_00117d80();
  operator_delete(param_1);
  return;
}


// ===== 00116744  FUN_00116744 =====

undefined * FUN_00116744(void)

{
  return PTR_RNCSafeAreaProviderComponentName_00122fc0;
}


// ===== 00116750  FUN_00116750 =====

undefined * FUN_00116750(void)

{
  return PTR_RNCSafeAreaProviderComponentName_00122fc0;
}


// ===== 0011675c  FUN_0011675c =====

undefined8 FUN_0011675c(void)

{
  return 0x61;
}


// ===== 00116764  FUN_00116764 =====

void FUN_00116764(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar6 = &PTR_FUN_001222b8;
                    /* try { // try from 001167d0 to 001167df has its CatchHandler @ 001168b8 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00122308;
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
                    /* try { // try from 0011686c to 00116877 has its CatchHandler @ 001168a8 */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001168e8  FUN_001168e8 =====

void FUN_001168e8(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

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
  *plVar5 = (long)&PTR_FUN_001222b8;
                    /* try { // try from 00116940 to 0011694f has its CatchHandler @ 00116a90 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_00122308;
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
                    /* try { // try from 001169d4 to 001169e3 has its CatchHandler @ 00116aa8 */
  facebook::react::YogaLayoutableShadowNode::completeClone
            ((ShadowNode *)pYVar1,(ShadowNodeFragment *)param_3);
  local_78 = pYVar1;
  local_70 = plVar5;
  FUN_0010df20(1,plVar5 + 1);
                    /* try { // try from 001169f4 to 00116a03 has its CatchHandler @ 00116a80 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar6 = FUN_0010e610(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 00116a40 to 00116a4b has its CatchHandler @ 00116aa8 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00116ad0  FUN_00116ad0 =====

void FUN_00116ad0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00116ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 00116ae4  FUN_00116ae4 =====

void FUN_00116ae4(undefined8 *param_1,ulong param_2,HostPlatformViewProps *param_3,
                 HostPlatformViewProps *param_4,RawValue *param_5)

{
  HostPlatformViewProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  RawValue *pRVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  char *__s2;
  HostPlatformViewProps *pHVar9;
  long lVar10;
  RawProps *pRVar11;
  undefined1 uStack_d1;
  HostPlatformViewProps local_d0 [32];
  HostPlatformViewProps *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*(long *)param_4 == 0) && (uVar7 = facebook::react::RawProps::isEmpty(), (uVar7 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00122fa8
         & 1) == 0) &&
       (param_2 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00122fa8
                                     ), (int)param_2 != 0)) {
                    /* try { // try from 00116f6c to 00116f6f has its CatchHandler @ 00116f9c */
      FUN_00118344();
      __cxa_atexit(FUN_001182f4,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00122fa0
                   ,&PTR_LOOP_001220e0);
      param_2 = __cxa_guard_release(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00122fa8
                                   );
    }
    lVar10 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00122fa0
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00122fa0
    ;
    param_1[1] = lVar10;
    if (lVar10 != 0) {
      param_2 = FUN_0010df20(1,lVar10 + 8);
    }
LAB_00116e64:
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
LAB_001170bc:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_2);
  }
  facebook::react::RawProps::parse((RawPropsParser *)param_5);
  pRVar11 = *(RawProps **)param_4;
  if (pRVar11 != (RawProps *)0x0) goto LAB_00116ba4;
  if ((*
       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00122fa8
      & 1) == 0) goto LAB_00116edc;
LAB_00116b98:
  pRVar11 = *(RawProps **)
             PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00122fa0
  ;
LAB_00116ba4:
  plVar8 = (long *)operator_new(0x6f8);
  this = (HostPlatformViewProps *)(plVar8 + 3);
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_00122420;
  local_b0 = (HostPlatformViewProps *)0x0;
                    /* try { // try from 00116bc8 to 00116bef has its CatchHandler @ 00117028 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            (this,(PropsParserContext *)(PTR_PTR_00122fd0 + 8),param_3,pRVar11,(function *)param_5);
  if (local_b0 == local_d0) {
    lVar10 = 4;
    pHVar9 = local_d0;
LAB_00116c10:
    (**(code **)(*(long *)pHVar9 + lVar10 * 8))();
  }
  else if (local_b0 != (HostPlatformViewProps *)0x0) {
    lVar10 = 5;
    pHVar9 = local_b0;
    goto LAB_00116c10;
  }
  plVar8[3] = (long)(PTR_vtable_00122fc8 + 0x20);
                    /* try { // try from 00116c30 to 00116c43 has its CatchHandler @ 00117070 */
  uVar7 = facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid();
  if ((((uVar7 & 1) == 0) ||
      (uVar7 = facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid()
      , (uVar7 & 1) == 0)) ||
     (uVar7 = facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(),
     (uVar7 & 1) == 0)) {
LAB_00116c6c:
    FUN_0010df20(1,plVar8 + 1);
    pRVar11 = *(RawProps **)param_4;
    if (pRVar11 == (RawProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00122fa8
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00122fa8
                                     ), iVar6 != 0)) {
                    /* try { // try from 00116f2c to 00116f2f has its CatchHandler @ 00116fa0 */
        FUN_00118344();
        __cxa_atexit(FUN_001182f4,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00122fa0
                     ,&PTR_LOOP_001220e0);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00122fa8
                           );
      }
      local_b0 = (HostPlatformViewProps *)0x0;
                    /* try { // try from 00116cd4 to 00116ce7 has its CatchHandler @ 00116fcc */
      facebook::react::Props::initializeDynamicProps
                ((Props *)this,
                 *(RawProps **)
                  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00122fa0
                 ,(function *)param_5);
      if (local_b0 == local_d0) {
        lVar10 = 4;
        pHVar9 = local_d0;
LAB_00116d20:
        (**(code **)(*(long *)pHVar9 + lVar10 * 8))();
      }
      else if (local_b0 != (HostPlatformViewProps *)0x0) {
        lVar10 = 5;
        pHVar9 = local_b0;
        goto LAB_00116d20;
      }
      if (plVar8 != (long *)0x0) goto LAB_00116d34;
    }
    else {
      local_b0 = (HostPlatformViewProps *)0x0;
                    /* try { // try from 00116c88 to 00116c9b has its CatchHandler @ 00116ff4 */
      param_4 = local_d0;
      facebook::react::Props::initializeDynamicProps((Props *)this,pRVar11,(function *)param_5);
      if (local_b0 == param_4) {
        lVar10 = 4;
        pHVar9 = local_d0;
      }
      else {
        if (local_b0 == (HostPlatformViewProps *)0x0) goto LAB_00116d34;
        lVar10 = 5;
        pHVar9 = local_b0;
      }
      (**(code **)(*(long *)pHVar9 + lVar10 * 8))();
LAB_00116d34:
      lVar10 = FUN_0010e610(0xffffffffffffffff,plVar8 + 1);
      if (lVar10 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
    bVar3 = true;
  }
  else {
                    /* try { // try from 00116c50 to 00116c5b has its CatchHandler @ 00116fc8 */
    __s2 = (char *)(**(code **)(*(long *)this + 0x10))(this);
    iVar6 = strcmp(PTR_RNCSafeAreaProviderComponentName_00122fc0,__s2);
    if (iVar6 != 0) goto LAB_00116c6c;
    bVar3 = false;
  }
                    /* try { // try from 00116d60 to 00116d63 has its CatchHandler @ 00117070 */
  param_2 = facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter();
  if ((param_2 & 1) == 0) {
LAB_00116e5c:
    param_1[1] = plVar8;
    *param_1 = this;
    goto LAB_00116e64;
  }
  if (bVar3) {
                    /* try { // try from 00116d70 to 00116d8b has its CatchHandler @ 00116ff0 */
    param_2 = folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
  }
  else {
    param_2 = facebook::react::RawProps::operator_cast_to_dynamic((RawProps *)param_5);
  }
  plVar4 = local_80;
  if (local_98[0] == 5) {
    while( true ) {
      if (plVar4 == (long *)0x0) {
        param_2 = folly::dynamic::destroy();
        goto LAB_00116e5c;
      }
      if (*(int *)(plVar4 + 2) != 6) break;
      uVar1 = 0x811c9dc5;
      uVar7 = (ulong)(*(byte *)(plVar4 + 3) >> 1);
      pRVar5 = (RawValue *)((long)plVar4 + 0x19);
      param_5 = (RawValue *)((long)plVar4 + 0x19);
      if ((*(byte *)(plVar4 + 3) & 1) != 0) {
        uVar7 = plVar4[4];
        pRVar5 = (RawValue *)plVar4[5];
        param_5 = (RawValue *)plVar4[5];
      }
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        uVar1 = (uVar1 ^ (int)(char)*pRVar5) * 0x1000193;
        pRVar5 = pRVar5 + 1;
      }
                    /* try { // try from 00116e0c to 00116e17 has its CatchHandler @ 00117084 */
      folly::dynamic::dynamic((dynamic *)local_d0,(dynamic *)(plVar4 + 8));
      local_a0 = 0;
                    /* try { // try from 00116e1c to 00116e33 has its CatchHandler @ 00117088 */
      param_2 = facebook::react::HostPlatformViewProps::setProp
                          ((PropsParserContext *)this,(uint)param_3,(char *)(ulong)uVar1,param_5);
      if (local_a0 != 0xffffffff) {
                    /* try { // try from 00116e44 to 00116e4f has its CatchHandler @ 00117078 */
        param_2 = (*(code *)(&PTR_FUN_00122220)[local_a0])(&uStack_d1,local_d0);
      }
      param_4 = this;
      plVar4 = (long *)*plVar4;
    }
    if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_001170bc;
                    /* try { // try from 00116eac to 00116ebb has its CatchHandler @ 0011707c */
    param_2 = FUN_001184cc(*(undefined8 *)PTR_name_00122ff0);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_001170bc;
                    /* try { // try from 00116ecc to 00116edb has its CatchHandler @ 00116fe8 */
  FUN_001184cc(*(undefined8 *)PTR_name_00122fe8);
LAB_00116edc:
  iVar6 = __cxa_guard_acquire(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00122fa8
                             );
  if (iVar6 != 0) {
                    /* try { // try from 00116eec to 00116eef has its CatchHandler @ 00116fb4 */
    FUN_00118344();
    __cxa_atexit(FUN_001182f4,
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00122fa0
                 ,&PTR_LOOP_001220e0);
    __cxa_guard_release(
                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00122fa8
                       );
  }
  goto LAB_00116b98;
}


// ===== 001170c0  FUN_001170c0 =====

void FUN_001170c0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 001170c8  FUN_001170c8 =====

void FUN_001170c8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 001170d0  FUN_001170d0 =====

void FUN_001170d0(undefined8 *param_1,long param_2,long param_3)

{
  EventTarget *pEVar1;
  EventEmitter *pEVar2;
  ShadowNodeFamily *pSVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  ShadowNodeFamily *local_a8;
  undefined8 *local_a0;
  EventTarget *local_98;
  long *local_90;
  EventEmitter *local_88;
  long *local_80;
  undefined8 local_78;
  long local_70;
  EventTarget *local_68;
  long *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar5 = (long *)operator_new(0x48);
  *plVar5 = (long)&PTR_FUN_001225c8;
  local_68 = *(EventTarget **)(param_3 + 8);
  local_60 = *(long **)(param_3 + 0x10);
  pEVar1 = (EventTarget *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  if (local_60 != (long *)0x0) {
    FUN_0010df20(1,local_60 + 1);
  }
                    /* try { // try from 00117140 to 0011714b has its CatchHandler @ 0011746c */
  facebook::react::EventTarget::EventTarget(pEVar1,&local_68,*(undefined4 *)(param_3 + 4));
  plVar7 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar6 = FUN_0010e610(0xffffffffffffffff,local_60 + 1), lVar6 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  local_98 = pEVar1;
  local_90 = plVar5;
                    /* try { // try from 00117180 to 00117187 has its CatchHandler @ 0011745c */
  plVar7 = (long *)operator_new(0x68);
  *plVar7 = (long)&PTR_FUN_00122470;
  local_78 = *(undefined8 *)(param_2 + 8);
  local_70 = *(long *)(param_2 + 0x10);
  pEVar2 = (EventEmitter *)(plVar7 + 3);
  plVar7[1] = 0;
  plVar7[2] = 0;
  local_98 = (EventTarget *)0x0;
  local_90 = (long *)0x0;
  local_68 = pEVar1;
  local_60 = plVar5;
  if (local_70 != 0) {
    FUN_0010df20(1,local_70 + 0x10);
  }
                    /* try { // try from 001171c0 to 001171cf has its CatchHandler @ 00117430 */
  facebook::react::EventEmitter::EventEmitter(pEVar2,&local_68,&local_78);
  *(undefined ***)pEVar2 = &PTR_FUN_00122538;
                    /* try { // try from 001171dc to 001171e3 has its CatchHandler @ 00117420 */
  puVar8 = (undefined8 *)operator_new(0x58);
  *puVar8 = &PTR_FUN_00122558;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[4] = 0;
  puVar8[3] = 0;
  plVar7[0xb] = (long)(puVar8 + 3);
  plVar7[0xc] = (long)puVar8;
  puVar8[6] = 0;
  puVar8[5] = 0;
  puVar8[8] = 0;
  puVar8[7] = 0;
  *(undefined8 *)((long)puVar8 + 0x4c) = 0;
  *(undefined8 *)((long)puVar8 + 0x44) = 0;
  plVar7[3] = (long)&PTR_FUN_001224c0;
  if (local_70 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar6 = FUN_0010e610(0xffffffffffffffff,local_60 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_90;
  local_88 = pEVar2;
  local_80 = plVar7;
  if ((local_90 != (long *)0x0) &&
     (lVar6 = FUN_0010e610(0xffffffffffffffff,local_90 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00117290 to 00117297 has its CatchHandler @ 00117410 */
  puVar8 = (undefined8 *)operator_new(0x1a0);
  *puVar8 = &PTR_FUN_00122618;
  pSVar3 = (ShadowNodeFamily *)(puVar8 + 4);
  puVar8[1] = 0;
  puVar8[2] = 0;
  local_68 = (EventTarget *)local_88;
  local_60 = local_80;
  if (local_80 != (long *)0x0) {
    FUN_0010df20(1,local_80 + 1);
  }
  local_78 = *(undefined8 *)(param_2 + 8);
  local_70 = *(long *)(param_2 + 0x10);
  if (local_70 != 0) {
    FUN_0010df20(1,local_70 + 0x10);
  }
                    /* try { // try from 001172e0 to 001172f7 has its CatchHandler @ 001173e0 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar3,param_3,&local_68,&local_78,param_2);
  if (local_70 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar6 = FUN_0010e610(0xffffffffffffffff,local_60 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar2 = local_88;
  *param_1 = pSVar3;
  param_1[1] = puVar8;
  local_a8 = pSVar3;
  local_a0 = puVar8;
  FUN_0010df20(1,puVar8 + 2);
                    /* try { // try from 0011734c to 00117357 has its CatchHandler @ 001173c0 */
  facebook::react::EventEmitter::setShadowNodeFamily(pEVar2,&local_a8);
  if (local_a0 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_80;
  if ((local_80 != (long *)0x0) &&
     (lVar6 = FUN_0010e610(0xffffffffffffffff,local_80 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001174a4  FUN_001174a4 =====

void FUN_001174a4(void)

{
  return;
}


// ===== 001174a8  FUN_001174a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001174a8(undefined8 *param_1,undefined8 *param_2)

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
  uVar6 = DAT_00109c68;
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
  uVar2 = _UNK_00109c78;
  uVar6 = _DAT_00109c70;
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
  uVar4 = _UNK_00109db8;
  uVar3 = _DAT_00109db0;
  uVar2 = _UNK_00109da8;
  uVar6 = _DAT_00109da0;
  *(undefined1 *)((long)param_1 + 0x34c) = 0;
  *param_1 = uVar7;
  *(undefined8 *)((long)param_1 + 0x344) = 0x3f800000;
  param_1[0xb2] = uVar4;
  param_1[0xb1] = uVar3;
  param_1[0xb0] = uVar2;
  param_1[0xaf] = uVar6;
  uVar4 = _UNK_00109d98;
  uVar3 = _DAT_00109d90;
  uVar2 = _UNK_00109d88;
  uVar6 = _DAT_00109d80;
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


// ===== 0011785c  FUN_0011785c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0011785c(long param_1)

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


// ===== 00117a58  FUN_00117a58 =====

void FUN_00117a58(undefined8 param_1,long param_2)

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


// ===== 00117a6c  FUN_00117a6c =====

void FUN_00117a6c(undefined8 param_1,long param_2)

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


// ===== 00117a80  FUN_00117a80 =====

void FUN_00117a80(undefined8 *param_1,undefined8 *param_2)

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
  FUN_00117b90(param_1,param_2 + 1);
  return;
}


// ===== 00117b90  FUN_00117b90 =====

void FUN_00117b90(undefined8 *param_1,undefined8 *param_2)

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
                    /* try { // try from 00117c58 to 00117c5f has its CatchHandler @ 00117cf8 */
          (*(code *)(&PTR_FUN_00122210)[*(uint *)((long)pvVar4 + -8)])
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
  FUN_0011785c(param_1 + 0x3d);
  *param_1 = param_2[1];
  FUN_0011517c(param_1 + 10);
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


// ===== 00117cfc  FUN_00117cfc =====

void FUN_00117cfc(long param_1)

{
  long lVar1;
  undefined1 uStack_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
                    /* try { // try from 00117d34 to 00117d3f has its CatchHandler @ 00117d6c */
    (*(code *)(&PTR_FUN_00122220)[*(uint *)(param_1 + 0x30)])(&uStack_29,param_1);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00117d70  FUN_00117d70 =====

void FUN_00117d70(void)

{
  folly::dynamic::destroy();
  return;
}


// ===== 00117d78  FUN_00117d78 =====

void FUN_00117d78(undefined8 param_1,long param_2)

{
  facebook::jsi::Value::~Value((Value *)(param_2 + 8));
  return;
}


// ===== 00117d80  FUN_00117d80 =====

void FUN_00117d80(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  
  pvVar1 = (void *)param_1[0xd];
  *param_1 = &PTR_FUN_00122240;
  if (pvVar1 != (void *)0x0) {
    param_1[0xe] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[10];
  if (pvVar1 != (void *)0x0) {
    param_1[0xb] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[7];
  if (pvVar1 != (void *)0x0) {
    param_1[8] = pvVar1;
    operator_delete(pvVar1);
  }
  plVar3 = (long *)param_1[6];
  if ((plVar3 != (long *)0x0) && (lVar2 = FUN_0010e610(0xffffffffffffffff,plVar3 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = (long *)param_1[4];
  if ((plVar3 == (long *)0x0) || (lVar2 = FUN_0010e610(0xffffffffffffffff,plVar3 + 1), lVar2 != 0))
  {
    lVar2 = param_1[2];
  }
  else {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
    lVar2 = param_1[2];
  }
  if (lVar2 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00117e54  FUN_00117e54 =====

void FUN_00117e54(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x117e58);
  (*pcVar1)();
}


// ===== 00117e58  FUN_00117e58 =====

void FUN_00117e58(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010e610(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00117ea8  FUN_00117ea8 =====

void FUN_00117ea8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001222b8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00117eb8  FUN_00117eb8 =====

void FUN_00117eb8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001222b8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00117ee8  FUN_00117ee8 =====

void FUN_00117ee8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00117ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00117ef4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001230d8)();
  return;
}


// ===== 00117ef8  FUN_00117ef8 =====

void FUN_00117ef8(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_00122fd8 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_0010e610(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
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
  FUN_0011517c(param_1 + 0x23);
  FUN_00118108(param_1);
  return;
}


// ===== 00117fb0  FUN_00117fb0 =====

void FUN_00117fb0(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_00122fd8 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_0010e610(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
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
  FUN_0011517c(param_1 + 0x23);
  FUN_00118108(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00118070  FUN_00118070 =====

void FUN_00118070(long param_1)

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


// ===== 001180d8  FUN_001180d8 =====

bool FUN_001180d8(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 001180f0  FUN_001180f0 =====

bool FUN_001180f0(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 00118108  FUN_00118108 =====

void FUN_00118108(NativeState *param_1)

{
  long lVar1;
  long *plVar2;
  
  *(undefined **)param_1 = PTR_vtable_00122fe0 + 0x10;
  if (*(long *)(param_1 + 0x60) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = *(long **)(param_1 + 0x48);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010e610(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = *(long **)(param_1 + 0x30);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010e610(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = *(long **)(param_1 + 0x20);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010e610(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = *(long **)(param_1 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010e610(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  facebook::jsi::NativeState::~NativeState(param_1);
  return;
}


// ===== 00118204  FUN_00118204 =====

void FUN_00118204(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010e610(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00118254  FUN_00118254 =====

void FUN_00118254(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010e610(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001182a4  FUN_001182a4 =====

void FUN_001182a4(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010e610(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001182f4  FUN_001182f4 =====

void FUN_001182f4(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010e610(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00118344  FUN_00118344 =====

void FUN_00118344(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x6f8);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_001223d0;
  memset(__s,0,0x6e0);
                    /* try { // try from 00118380 to 00118393 has its CatchHandler @ 00118400 */
  FUN_001174a8(__s,PTR_PTR_00122fd0 + 0x10);
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
  puVar1 = PTR_vtable_00122fc8;
  *(undefined1 *)((long)puVar2 + 0x6f4) = 0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00122fa0
  ;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 0011841c  FUN_0011841c =====

void FUN_0011841c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001223d0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0011842c  FUN_0011842c =====

void FUN_0011842c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001223d0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0011845c  FUN_0011845c =====

void FUN_0011845c(long param_1)

{
  FUN_00117a80(param_1 + 0x18,PTR_PTR_00122fd0 + 8);
  return;
}


// ===== 00118470  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001230d8)();
  return;
}


// ===== 00118474  FUN_00118474 =====

void FUN_00118474(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00122420;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00118484  FUN_00118484 =====

void FUN_00118484(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00122420;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001184b4  FUN_001184b4 =====

void FUN_001184b4(long param_1)

{
  FUN_00117a80(param_1 + 0x18,PTR_PTR_00122fd0 + 8);
  return;
}


// ===== 001184c8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001230d8)();
  return;
}


// ===== 001184cc  FUN_001184cc =====

void FUN_001184cc(undefined8 param_1,undefined4 param_2)

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
                    /* try { // try from 001184f8 to 00118507 has its CatchHandler @ 00118530 */
  folly::TypeError::TypeError(aTStack_38,local_50,param_2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00118518 to 0011851f has its CatchHandler @ 00118520 */
    uVar2 = FUN_00118560(aTStack_38);
                    /* catch() { ... } // from try @ 00118518 with catch @ 00118520 */
    std::runtime_error::~runtime_error((runtime_error *)aTStack_38);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_0010e774(uVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00118560  FUN_00118560 =====

void FUN_00118560(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
  FUN_00118628(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_typeinfo_00122fb0,PTR__runtime_error_00122fb8);
}


// ===== 0011859c  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc =====

void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc
               (long *param_1,char *param_2)

{
  size_t __n;
  void *__dest;
  
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_001153d8(param_1);
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_0011860c;
  }
  else {
    __dest = operator_new((__n | 0xf) + 1);
    param_1[1] = __n;
    param_1[2] = (long)__dest;
    *param_1 = (__n | 0xf) + 2;
  }
  memmove(__dest,param_2,__n);
LAB_0011860c:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


// ===== 00118628  FUN_00118628 =====

void FUN_00118628(runtime_error *param_1,runtime_error *param_2)

{
  std::runtime_error::runtime_error(param_1,param_2);
  *(undefined ***)param_1 = &PTR__runtime_error_00122680;
  return;
}


// ===== 00118654  FUN_00118654 =====

void FUN_00118654(runtime_error *param_1)

{
  std::runtime_error::~runtime_error(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00118678  FUN_00118678 =====

void FUN_00118678(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010e610(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001186c8  FUN_001186c8 =====

void FUN_001186c8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010e610(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00118718  FUN_00118718 =====

void FUN_00118718(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00122470;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00118728  FUN_00118728 =====

void FUN_00118728(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00122470;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00118758  FUN_00118758 =====

void FUN_00118758(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00118760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00118764  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001230d8)();
  return;
}


// ===== 00118768  FUN_00118768 =====

void FUN_00118768(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_00122538;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010e610(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_001225a8;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010e610(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0011881c  FUN_0011881c =====

void FUN_0011881c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_00122538;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010e610(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_001225a8;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010e610(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 001188cc  FUN_001188cc =====

void FUN_001188cc(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_00122538;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010e610(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_001225a8;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010e610(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 0011897c  FUN_0011897c =====

void FUN_0011897c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00122558;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0011898c  FUN_0011898c =====

void FUN_0011898c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00122558;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001189bc  FUN_001189bc =====

void FUN_001189bc(long param_1)

{
  std::__ndk1::mutex::~mutex((mutex *)(param_1 + 0x18));
  return;
}


// ===== 001189c4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001230d8)();
  return;
}


// ===== 001189c8  FUN_001189c8 =====

void FUN_001189c8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_001225a8;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010e610(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00118a40  FUN_00118a40 =====

void FUN_00118a40(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_001225a8;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010e610(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 00118ab4  FUN_00118ab4 =====

void FUN_00118ab4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001225c8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00118ac4  FUN_00118ac4 =====

void FUN_00118ac4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001225c8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00118af4  FUN_00118af4 =====

void FUN_00118af4(long param_1)

{
  long lVar1;
  long *plVar2;
  
  facebook::jsi::Value::~Value((Value *)(param_1 + 0x30));
  plVar2 = *(long **)(param_1 + 0x20);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010e610(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00118b50  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001230d8)();
  return;
}


// ===== 00118b54  FUN_00118b54 =====

void FUN_00118b54(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010e610(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00118ba4  FUN_00118ba4 =====

void FUN_00118ba4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00122618;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00118bb4  FUN_00118bb4 =====

void FUN_00118bb4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00122618;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00118be4  FUN_00118be4 =====

void FUN_00118be4(long param_1)

{
  facebook::react::ShadowNodeFamily::~ShadowNodeFamily((ShadowNodeFamily *)(param_1 + 0x20));
  return;
}


// ===== 00118bec  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001230d8)();
  return;
}


// ===== 00118bf0  FUN_00118bf0 =====

void FUN_00118bf0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010e610(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00118c40  facebook::react::RNCSafeAreaProviderEventEmitter::onInsetsChange =====

/* facebook::react::RNCSafeAreaProviderEventEmitter::onInsetsChange(facebook::react::RNCSafeAreaProviderEventEmitter::OnInsetsChange)
   const */

void __thiscall
facebook::react::RNCSafeAreaProviderEventEmitter::onInsetsChange
          (RNCSafeAreaProviderEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  byte local_88;
  char local_87 [8];
  undefined4 local_7f;
  undefined1 local_7b;
  void *local_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_88 = 0x18;
  local_7f = 0x65676e61;
  local_87 = (char  [8])s_insetsChange_00109458._0_8_;
  local_7b = 0;
                    /* try { // try from 00118c90 to 00118c97 has its CatchHandler @ 00118d70 */
  local_50 = (long *)operator_new(0x48);
  lVar4 = param_2[1];
  lVar3 = *param_2;
  lVar6 = param_2[3];
  lVar5 = param_2[2];
  *local_50 = (long)&PTR_FUN_001226a8;
  local_50[2] = lVar4;
  local_50[1] = lVar3;
  local_50[4] = lVar6;
  local_50[3] = lVar5;
  lVar3 = param_2[4];
  lVar5 = param_2[7];
  lVar4 = param_2[6];
  local_50[6] = param_2[5];
  local_50[5] = lVar3;
  local_50[8] = lVar5;
  local_50[7] = lVar4;
                    /* try { // try from 00118cc0 to 00118cd7 has its CatchHandler @ 00118d38 */
  facebook::react::EventEmitter::dispatchEvent(this,&local_88,local_70,2);
  if (local_50 == local_70) {
    lVar3 = 4;
    plVar2 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00118d04;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_00118d04:
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00118da0  FUN_00118da0 =====

void FUN_00118da0(void)

{
  return;
}


// ===== 00118da4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001230d8)();
  return;
}


// ===== 00118da8  FUN_00118da8 =====

void FUN_00118da8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)operator_new(0x48);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *puVar1 = &PTR_FUN_001226a8;
  puVar1[4] = uVar5;
  puVar1[3] = uVar4;
  puVar1[6] = uVar7;
  puVar1[5] = uVar6;
  puVar1[8] = uVar3;
  puVar1[7] = uVar2;
  return;
}


// ===== 00118df8  FUN_00118df8 =====

void FUN_00118df8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_2 = &PTR_FUN_001226a8;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  param_2[8] = *(undefined8 *)(param_1 + 0x40);
  param_2[7] = uVar1;
  param_2[6] = uVar3;
  param_2[5] = uVar2;
  param_2[4] = uVar7;
  param_2[3] = uVar6;
  param_2[2] = uVar5;
  param_2[1] = uVar4;
  return;
}


// ===== 00118e28  FUN_00118e28 =====

void FUN_00118e28(void)

{
  return;
}


// ===== 00118e2c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001230d8)();
  return;
}


// ===== 00118e30  FUN_00118e30 =====

void FUN_00118e30(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_50,param_3);
                    /* try { // try from 00118e78 to 00118e83 has its CatchHandler @ 00118ffc */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 00118e8c to 00118f03 has its CatchHandler @ 00119008 */
  FUN_0011907c(&local_48,param_3,&DAT_001095b5,param_2 + 8);
  FUN_0011907c(&local_48,param_3,"right",param_2 + 0x10);
  FUN_0011907c(&local_48,param_3,"bottom",param_2 + 0x18);
  FUN_0011907c(&local_48,param_3,&DAT_00109374,param_2 + 0x20);
  FUN_00119180(&local_50,param_3,"insets",&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
                    /* try { // try from 00118f20 to 00118f2b has its CatchHandler @ 00118ff4 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 00118f34 to 00118fab has its CatchHandler @ 00119004 */
  FUN_0011907c(&local_48,param_3,&DAT_001092d7,param_2 + 0x28);
  FUN_0011907c(&local_48,param_3,&DAT_00109727,param_2 + 0x30);
  FUN_0011907c(&local_48,param_3,"width",param_2 + 0x38);
  FUN_0011907c(&local_48,param_3,"height",param_2 + 0x40);
  FUN_00119180(&local_50,param_3,"frame",&local_48);
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


// ===== 00119054  FUN_00119054 =====

long FUN_00119054(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react31RNCSafeAreaProviderEventEmitter14onInsetsChangeENS1_14OnInsetsChangeEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00119070  FUN_00119070 =====

pointer_____offset_0x10___ * FUN_00119070(void)

{
  return &PTR_vtable_00122718;
}


// ===== 0011907c  FUN_0011907c =====

void FUN_0011907c(undefined8 param_1,long *param_2,char *param_3,undefined8 *param_4)

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
                    /* try { // try from 001190ec to 001190ff has its CatchHandler @ 00119144 */
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


// ===== 00119180  FUN_00119180 =====

void FUN_00119180(undefined8 param_1,long *param_2,char *param_3,undefined8 *param_4)

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
                    /* try { // try from 001191ec to 001191f3 has its CatchHandler @ 00119268 */
  local_50 = (**(code **)(*param_2 + 0x88))(param_2,*param_4);
                    /* try { // try from 00119200 to 00119213 has its CatchHandler @ 00119258 */
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


// ===== 001192a4  facebook::react::RNCSafeAreaProviderProps::RNCSafeAreaProviderProps =====

/* facebook::react::RNCSafeAreaProviderProps::RNCSafeAreaProviderProps(facebook::react::PropsParserContext
   const&, facebook::react::RNCSafeAreaProviderProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::RNCSafeAreaProviderProps::RNCSafeAreaProviderProps
          (RNCSafeAreaProviderProps *this,PropsParserContext *param_1,
          RNCSafeAreaProviderProps *param_2,RawProps *param_3)

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
                    /* try { // try from 001192d0 to 001192df has its CatchHandler @ 00119338 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if (local_50 == local_70) {
    lVar3 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0011930c;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_0011930c:
  *(undefined8 *)this = *(undefined8 *)param_1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00119388  facebook::react::RNCSafeAreaProviderProps::RNCSafeAreaProviderProps =====

/* facebook::react::RNCSafeAreaProviderProps::RNCSafeAreaProviderProps(facebook::react::PropsParserContext
   const&, facebook::react::RNCSafeAreaProviderProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::RNCSafeAreaProviderProps::RNCSafeAreaProviderProps
          (RNCSafeAreaProviderProps *this,PropsParserContext *param_1,
          RNCSafeAreaProviderProps *param_2,RawProps *param_3)

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
                    /* try { // try from 001193bc to 001193d3 has its CatchHandler @ 00119434 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_00122fd0 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if (local_50 == local_70) {
    lVar3 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00119400;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_00119400:
  *(undefined **)this = PTR_vtable_00122fc8 + 0x20;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00119484  facebook::react::RNCSafeAreaProviderProps::getDiffPropsImplementationTarget =====

/* facebook::react::RNCSafeAreaProviderProps::getDiffPropsImplementationTarget() const */

char * facebook::react::RNCSafeAreaProviderProps::getDiffPropsImplementationTarget(void)

{
  return "RNCSafeAreaProvider";
}


// ===== 00119490  facebook::react::RNCSafeAreaProviderProps::getDiffProps =====

/* facebook::react::RNCSafeAreaProviderProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::RNCSafeAreaProviderProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  long lVar2;
  int iVar3;
  Props *in_x1;
  undefined4 *in_x8;
  long lVar4;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  if ((DAT_00128330 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_00128330);
    if (iVar3 != 0) {
      memset(&DAT_00127c50,0,0x6e0);
                    /* try { // try from 00119584 to 00119587 has its CatchHandler @ 001195bc */
      FUN_001195e8();
      __cxa_atexit(FUN_00119670,&DAT_00127c50,&PTR_LOOP_001220e0);
      __cxa_guard_release(&DAT_00128330);
    }
  }
  pPVar1 = (Props *)&DAT_00127c50;
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


// ===== 001195e8  FUN_001195e8 =====

void FUN_001195e8(void)

{
  FUN_001174a8(&DAT_00127c50,PTR_PTR_00122fd0 + 0x10);
  DAT_0012822c = 0;
  DAT_00128230 = 0;
  DAT_00128290 = 0;
  DAT_00128298 = 0;
  DAT_001282f8 = 0;
  DAT_00128308 = 0;
  DAT_0012830c = 0;
  DAT_00128310 = 0;
  DAT_00128314 = 0;
  DAT_00128318 = 0;
  DAT_0012831c = 0;
  DAT_00128320 = 0;
  DAT_00128324 = 0;
  DAT_00128328 = 0;
  DAT_0012832c = 0;
  DAT_00128300 = 0;
  DAT_00128304 = 0;
  DAT_00127c50 = PTR_vtable_00122fc8 + 0x20;
  return;
}


// ===== 00119670  FUN_00119670 =====

void FUN_00119670(undefined8 param_1)

{
  FUN_00117a80(param_1,PTR_PTR_00122fd0 + 8);
  return;
}


// ===== 00119680  facebook::react::RNCSafeAreaViewProps::RNCSafeAreaViewProps =====

/* WARNING: Type propagation algorithm not settling */
/* facebook::react::RNCSafeAreaViewProps::RNCSafeAreaViewProps(facebook::react::PropsParserContext
   const&, facebook::react::RNCSafeAreaViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::RNCSafeAreaViewProps::RNCSafeAreaViewProps
          (RNCSafeAreaViewProps *this,PropsParserContext *param_1,RNCSafeAreaViewProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  function *in_x4;
  long lVar4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  ulong local_98;
  long *local_90;
  void *pvStack_88;
  ulong local_80;
  undefined8 uStack_78;
  void *local_70;
  ulong uStack_68;
  undefined8 uStack_60;
  void *local_58;
  long local_48;
  
  plVar3 = &local_b0;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_90 = (long *)0x0;
                    /* try { // try from 001196b8 to 001196c7 has its CatchHandler @ 001197e0 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if (local_90 == &local_b0) {
    lVar4 = 4;
  }
  else {
    if (local_90 == (long *)0x0) goto LAB_001196f4;
    lVar4 = 5;
    plVar3 = local_90;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_001196f4:
  local_b0 = (ulong)local_b0._4_4_ << 0x20;
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 00119700 to 0011970f has its CatchHandler @ 001197cc */
  uVar2 = FUN_00119830();
  *(undefined4 *)(this + 0x6e0) = uVar2;
  uStack_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = (void *)0x0;
  pvStack_88 = (void *)0x0;
  local_90 = (long *)0x0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = (void *)0x0;
  local_58 = (void *)0x0;
  uStack_60 = 0;
                    /* try { // try from 00119724 to 00119737 has its CatchHandler @ 001197bc */
  FUN_001199e4(this + 0x6e8);
  if ((uStack_68 & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_98 & 1) != 0) {
    operator_delete(pvStack_88);
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00119830  FUN_00119830 =====

void FUN_00119830(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 local_50 [6];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_1,"mode",(char *)0x0);
  if (lVar2 == 0) {
    local_50[0] = *param_2;
  }
  else {
    uVar3 = FUN_0011a914();
    if ((uVar3 & 1) == 0) {
      local_50[0] = *param_3;
    }
    else {
                    /* try { // try from 001198a8 to 001198b3 has its CatchHandler @ 001198c4 */
      FUN_0011a950(lVar2,local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_50[0]);
}


// ===== 001199e4  FUN_001199e4 =====

void FUN_001199e4(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = tpidr_el0;
  lVar3 = *(long *)(lVar4 + 0x28);
  lVar1 = facebook::react::RawProps::at(param_2,"edges",(char *)0x0);
  if (lVar1 == 0) {
    lVar4 = *(long *)(lVar4 + 0x28);
  }
  else {
    uVar2 = FUN_0011a914();
    if ((uVar2 & 1) != 0) {
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[7] = 0;
      param_1[6] = 0;
      param_1[9] = 0;
      param_1[8] = 0;
      param_1[0xb] = 0;
      param_1[10] = 0;
                    /* try { // try from 00119a7c to 00119a87 has its CatchHandler @ 00119acc */
      FUN_0011aefc(lVar1,param_1);
      if (*(long *)(lVar4 + 0x28) == lVar3) {
        return;
      }
      goto LAB_00119bf8;
    }
    lVar4 = *(long *)(lVar4 + 0x28);
    param_3 = param_4;
  }
  if (lVar4 == lVar3) {
    FUN_00114cb0(param_1,param_3);
    return;
  }
LAB_00119bf8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00119c00  facebook::react::RNCSafeAreaViewProps::RNCSafeAreaViewProps =====

/* WARNING: Type propagation algorithm not settling */
/* facebook::react::RNCSafeAreaViewProps::RNCSafeAreaViewProps(facebook::react::PropsParserContext
   const&, facebook::react::RNCSafeAreaViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::RNCSafeAreaViewProps::RNCSafeAreaViewProps
          (RNCSafeAreaViewProps *this,PropsParserContext *param_1,RNCSafeAreaViewProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  ulong local_98;
  long *local_90;
  void *pvStack_88;
  ulong local_80;
  undefined8 uStack_78;
  void *local_70;
  ulong uStack_68;
  undefined8 uStack_60;
  void *local_58;
  long local_48;
  
  plVar3 = &local_b0;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_90 = (long *)0x0;
                    /* try { // try from 00119c38 to 00119c57 has its CatchHandler @ 00119d78 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_00123000 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if (local_90 == &local_b0) {
    lVar4 = 4;
  }
  else {
    if (local_90 == (long *)0x0) goto LAB_00119c84;
    lVar4 = 5;
    plVar3 = local_90;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_00119c84:
  local_b0 = (ulong)local_b0._4_4_ << 0x20;
  *(undefined **)this = PTR_vtable_00122ff8 + 0x20;
                    /* try { // try from 00119c98 to 00119ca7 has its CatchHandler @ 00119d64 */
  uVar2 = FUN_00119830(param_3,param_2 + 0x6e0,&local_b0);
  *(undefined4 *)(this + 0x6e0) = uVar2;
  uStack_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = (void *)0x0;
  pvStack_88 = (void *)0x0;
  local_90 = (long *)0x0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = (void *)0x0;
  local_58 = (void *)0x0;
  uStack_60 = 0;
                    /* try { // try from 00119cbc to 00119ccf has its CatchHandler @ 00119d54 */
  FUN_001199e4(this + 0x6e8,param_3,param_2 + 0x6e8,&local_b0);
  if ((uStack_68 & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_98 & 1) != 0) {
    operator_delete(pvStack_88);
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00119dc8  facebook::react::RNCSafeAreaViewProps::getDiffPropsImplementationTarget =====

/* facebook::react::RNCSafeAreaViewProps::getDiffPropsImplementationTarget() const */

char * facebook::react::RNCSafeAreaViewProps::getDiffPropsImplementationTarget(void)

{
  return "RNCSafeAreaView";
}


// ===== 00119dd4  facebook::react::RNCSafeAreaViewProps::getDiffProps =====

/* facebook::react::RNCSafeAreaViewProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::RNCSafeAreaViewProps::getDiffProps(Props *param_1)

{
  size_t sVar1;
  size_t sVar2;
  Props PVar3;
  Props PVar4;
  long lVar5;
  undefined4 uVar6;
  int iVar7;
  dynamic *pdVar8;
  Props *in_x1;
  Props *pPVar9;
  undefined1 uVar10;
  undefined4 *in_x8;
  ulong uVar11;
  ulong *puVar12;
  Props *pPVar13;
  Props *pPVar14;
  ulong local_120;
  undefined8 uStack_118;
  void *local_110;
  ulong local_100;
  undefined8 uStack_f8;
  void *local_f0;
  ulong local_e0;
  undefined8 uStack_d8;
  void *local_d0;
  ulong local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  void *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if (((DAT_00128a80 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_00128a80), iVar7 != 0)) {
    memset(&DAT_00128338,0,0x748);
                    /* try { // try from 0011a3e0 to 0011a3e3 has its CatchHandler @ 0011a428 */
    FUN_0011a510();
    __cxa_atexit(FUN_0011a5b0,&DAT_00128338,&PTR_LOOP_001220e0);
    __cxa_guard_release(&DAT_00128a80);
  }
  pPVar14 = (Props *)&DAT_00128338;
  if (in_x1 != (Props *)0x0) {
    pPVar14 = in_x1;
  }
  if (pPVar14 == param_1) {
    local_58 = 0;
    local_78[0] = 5;
    uStack_68 = 0;
    local_60 = (void *)0x0;
    local_50 = 0x3f800000;
    *in_x8 = 5;
    local_70 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
LAB_0011a388:
    folly::dynamic::destroy();
  }
  else {
    facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    iVar7 = *(int *)(param_1 + 0x6e0);
    if (iVar7 != *(int *)(pPVar14 + 0x6e0)) {
      if (iVar7 == 1) {
        uVar10 = 0xc;
        local_a8 = 0x6772616d;
        puVar12 = &local_c0;
      }
      else {
        if (iVar7 != 0) {
          if (*(long *)(lVar5 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0011a424 to 0011a427 has its CatchHandler @ 0011a43c */
            abort();
          }
          goto LAB_0011a48c;
        }
        uVar10 = 0xe;
        local_a8 = 0x64646170;
        puVar12 = &local_e0;
        local_c0 = CONCAT71(local_c0._1_7_,0x67);
      }
      uVar6 = local_a8;
      local_a4 = 0x6e69;
      *(undefined1 *)puVar12 = 0;
      local_78[0] = 6;
      local_70._0_5_ = CONCAT41(uVar6,uVar10);
      local_70 = CONCAT17(local_c0._0_1_,CONCAT25(0x6e69,(undefined5)local_70));
      uStack_68 = CONCAT71(uStack_68._1_7_,local_e0._0_1_);
      local_60 = (void *)0x0;
                    /* try { // try from 00119f00 to 00119f13 has its CatchHandler @ 0011a454 */
      pdVar8 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar8,(dynamic *)local_78);
      folly::dynamic::destroy();
    }
    PVar3 = param_1[0x6e8];
    PVar4 = pPVar14[0x6e8];
    uVar11 = (ulong)((byte)PVar3 >> 1);
    sVar1 = uVar11;
    if (((byte)PVar3 & 1) != 0) {
      sVar1 = *(size_t *)(param_1 + 0x6f0);
    }
    sVar2 = (ulong)((byte)PVar4 >> 1);
    if (((byte)PVar4 & 1) != 0) {
      sVar2 = *(size_t *)(pPVar14 + 0x6f0);
    }
    if (sVar1 != sVar2) {
LAB_0011a124:
      local_58 = 0;
      local_78[0] = 5;
      uStack_68 = 0;
      local_60 = (void *)0x0;
      local_50 = 0x3f800000;
      local_a8 = 5;
      local_70 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0x3f800000;
      folly::dynamic::destroy();
      if (((byte)param_1[0x6e8] & 1) == 0) {
        uStack_b8 = *(undefined8 *)(param_1 + 0x6f0);
        local_c0 = *(ulong *)(param_1 + 0x6e8);
        local_b0 = *(void **)(param_1 + 0x6f8);
      }
      else {
                    /* try { // try from 0011a180 to 0011a187 has its CatchHandler @ 0011a450 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_c0,*(char **)(param_1 + 0x6f8),*(ulong *)(param_1 + 0x6f0));
      }
      local_78[0] = 6;
      uStack_68 = uStack_b8;
      local_70 = local_c0;
      local_60 = local_b0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = (void *)0x0;
                    /* try { // try from 0011a1a8 to 0011a1bb has its CatchHandler @ 0011a4f0 */
      pdVar8 = (dynamic *)folly::dynamic::operator[](&local_a8,&DAT_001095b5,&DAT_001095b8);
      folly::dynamic::operator=(pdVar8,(dynamic *)local_78);
      folly::dynamic::destroy();
      if ((local_c0 & 1) != 0) {
        operator_delete(local_b0);
      }
      if (((byte)param_1[0x700] & 1) == 0) {
        uStack_d8 = *(undefined8 *)(param_1 + 0x708);
        local_e0 = *(ulong *)(param_1 + 0x700);
        local_d0 = *(void **)(param_1 + 0x710);
      }
      else {
                    /* try { // try from 0011a204 to 0011a20b has its CatchHandler @ 0011a44c */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_e0,*(char **)(param_1 + 0x710),*(ulong *)(param_1 + 0x708));
      }
      local_78[0] = 6;
      uStack_68 = uStack_d8;
      local_70 = local_e0;
      local_60 = local_d0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = (void *)0x0;
                    /* try { // try from 0011a22c to 0011a23f has its CatchHandler @ 0011a4d0 */
      pdVar8 = (dynamic *)folly::dynamic::operator[](&local_a8,"right","");
      folly::dynamic::operator=(pdVar8,(dynamic *)local_78);
      folly::dynamic::destroy();
      if ((local_e0 & 1) != 0) {
        operator_delete(local_d0);
      }
      if (((byte)param_1[0x718] & 1) == 0) {
        uStack_f8 = *(undefined8 *)(param_1 + 0x720);
        local_100 = *(ulong *)(param_1 + 0x718);
        local_f0 = *(void **)(param_1 + 0x728);
      }
      else {
                    /* try { // try from 0011a288 to 0011a28f has its CatchHandler @ 0011a448 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_100,*(char **)(param_1 + 0x728),*(ulong *)(param_1 + 0x720));
      }
      local_78[0] = 6;
      uStack_68 = uStack_f8;
      local_70 = local_100;
      local_60 = local_f0;
      local_100 = 0;
      uStack_f8 = 0;
      local_f0 = (void *)0x0;
                    /* try { // try from 0011a2b0 to 0011a2c3 has its CatchHandler @ 0011a4b0 */
      pdVar8 = (dynamic *)folly::dynamic::operator[](&local_a8,"bottom","");
      folly::dynamic::operator=(pdVar8,(dynamic *)local_78);
      folly::dynamic::destroy();
      if ((local_100 & 1) != 0) {
        operator_delete(local_f0);
      }
      if (((byte)param_1[0x730] & 1) == 0) {
        uStack_118 = *(undefined8 *)(param_1 + 0x738);
        local_120 = *(ulong *)(param_1 + 0x730);
        local_110 = *(void **)(param_1 + 0x740);
      }
      else {
                    /* try { // try from 0011a30c to 0011a313 has its CatchHandler @ 0011a444 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_120,*(char **)(param_1 + 0x740),*(ulong *)(param_1 + 0x738));
      }
      local_78[0] = 6;
      uStack_68 = uStack_118;
      local_70 = local_120;
      local_60 = local_110;
      local_120 = 0;
      uStack_118 = 0;
      local_110 = (void *)0x0;
                    /* try { // try from 0011a334 to 0011a347 has its CatchHandler @ 0011a490 */
      pdVar8 = (dynamic *)folly::dynamic::operator[](&local_a8,&DAT_00109374,&DAT_00109378);
      folly::dynamic::operator=(pdVar8,(dynamic *)local_78);
      folly::dynamic::destroy();
      if ((local_120 & 1) != 0) {
        operator_delete(local_110);
      }
                    /* try { // try from 0011a368 to 0011a37b has its CatchHandler @ 0011a460 */
      pdVar8 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar8,(dynamic *)&local_a8);
      goto LAB_0011a388;
    }
    pPVar9 = pPVar14 + 0x6e9;
    if (((byte)PVar4 & 1) != 0) {
      pPVar9 = *(Props **)(pPVar14 + 0x6f8);
    }
    if (((byte)PVar3 & 1) == 0) {
      if (1 < (byte)PVar3) {
        pPVar13 = param_1 + 0x6e9;
        do {
          if (*pPVar13 != *pPVar9) goto LAB_0011a124;
          uVar11 = uVar11 - 1;
          pPVar13 = pPVar13 + 1;
          pPVar9 = pPVar9 + 1;
        } while (uVar11 != 0);
      }
    }
    else {
      iVar7 = memcmp(*(void **)(param_1 + 0x6f8),pPVar9,*(size_t *)(param_1 + 0x6f0));
      if (iVar7 != 0) goto LAB_0011a124;
    }
    PVar3 = param_1[0x700];
    PVar4 = pPVar14[0x700];
    uVar11 = (ulong)((byte)PVar3 >> 1);
    sVar1 = uVar11;
    if (((byte)PVar3 & 1) != 0) {
      sVar1 = *(size_t *)(param_1 + 0x708);
    }
    sVar2 = (ulong)((byte)PVar4 >> 1);
    if (((byte)PVar4 & 1) != 0) {
      sVar2 = *(size_t *)(pPVar14 + 0x708);
    }
    if (sVar1 != sVar2) goto LAB_0011a124;
    pPVar9 = pPVar14 + 0x701;
    if (((byte)PVar4 & 1) != 0) {
      pPVar9 = *(Props **)(pPVar14 + 0x710);
    }
    if (((byte)PVar3 & 1) == 0) {
      if (1 < (byte)PVar3) {
        pPVar13 = param_1 + 0x701;
        do {
          if (*pPVar13 != *pPVar9) goto LAB_0011a124;
          uVar11 = uVar11 - 1;
          pPVar13 = pPVar13 + 1;
          pPVar9 = pPVar9 + 1;
        } while (uVar11 != 0);
      }
    }
    else {
      iVar7 = memcmp(*(void **)(param_1 + 0x710),pPVar9,*(size_t *)(param_1 + 0x708));
      if (iVar7 != 0) goto LAB_0011a124;
    }
    PVar3 = param_1[0x718];
    PVar4 = pPVar14[0x718];
    uVar11 = (ulong)((byte)PVar3 >> 1);
    sVar1 = uVar11;
    if (((byte)PVar3 & 1) != 0) {
      sVar1 = *(size_t *)(param_1 + 0x720);
    }
    sVar2 = (ulong)((byte)PVar4 >> 1);
    if (((byte)PVar4 & 1) != 0) {
      sVar2 = *(size_t *)(pPVar14 + 0x720);
    }
    if (sVar1 != sVar2) goto LAB_0011a124;
    pPVar9 = pPVar14 + 0x719;
    if (((byte)PVar4 & 1) != 0) {
      pPVar9 = *(Props **)(pPVar14 + 0x728);
    }
    if (((byte)PVar3 & 1) == 0) {
      if (1 < (byte)PVar3) {
        pPVar13 = param_1 + 0x719;
        do {
          if (*pPVar13 != *pPVar9) goto LAB_0011a124;
          uVar11 = uVar11 - 1;
          pPVar13 = pPVar13 + 1;
          pPVar9 = pPVar9 + 1;
        } while (uVar11 != 0);
      }
    }
    else {
      iVar7 = memcmp(*(void **)(param_1 + 0x728),pPVar9,*(size_t *)(param_1 + 0x720));
      if (iVar7 != 0) goto LAB_0011a124;
    }
    PVar3 = param_1[0x730];
    PVar4 = pPVar14[0x730];
    uVar11 = (ulong)((byte)PVar3 >> 1);
    sVar1 = uVar11;
    if (((byte)PVar3 & 1) != 0) {
      sVar1 = *(size_t *)(param_1 + 0x738);
    }
    sVar2 = (ulong)((byte)PVar4 >> 1);
    if (((byte)PVar4 & 1) != 0) {
      sVar2 = *(size_t *)(pPVar14 + 0x738);
    }
    if (sVar1 != sVar2) goto LAB_0011a124;
    pPVar9 = pPVar14 + 0x731;
    if (((byte)PVar4 & 1) != 0) {
      pPVar9 = *(Props **)(pPVar14 + 0x740);
    }
    if (((byte)PVar3 & 1) == 0) {
      if (1 < (byte)PVar3) {
        pPVar14 = param_1 + 0x731;
        do {
          if (*pPVar14 != *pPVar9) goto LAB_0011a124;
          uVar11 = uVar11 - 1;
          pPVar14 = pPVar14 + 1;
          pPVar9 = pPVar9 + 1;
        } while (uVar11 != 0);
      }
    }
    else {
      iVar7 = memcmp(*(void **)(param_1 + 0x740),pPVar9,*(size_t *)(param_1 + 0x738));
      if (iVar7 != 0) goto LAB_0011a124;
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
LAB_0011a48c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011a510  FUN_0011a510 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011a510(void)

{
  FUN_001174a8(&DAT_00128338,PTR_PTR_00123000 + 0x10);
  DAT_00128914 = 0;
  DAT_00128918 = 0;
  DAT_00128978 = 0;
  DAT_00128980 = 0;
  DAT_001289e0 = 0;
  DAT_001289f0 = 0;
  DAT_001289f4 = 0;
  DAT_001289f8 = 0;
  DAT_001289fc = 0;
  DAT_00128a00 = 0;
  DAT_00128a04 = 0;
  DAT_00128a08 = 0;
  DAT_00128a0c = 0;
  DAT_00128a10 = 0;
  DAT_00128a14 = 0;
  DAT_001289e8 = 0;
  DAT_001289ec = 0;
  DAT_00128a18 = 0;
  DAT_00128338 = PTR_vtable_00122ff8 + 0x20;
  uRam0000000000128a28 = 0;
  _DAT_00128a20 = 0;
  uRam0000000000128a38 = 0;
  _DAT_00128a30 = 0;
  uRam0000000000128a48 = 0;
  _DAT_00128a40 = 0;
  uRam0000000000128a58 = 0;
  _DAT_00128a50 = 0;
  uRam0000000000128a68 = 0;
  _DAT_00128a60 = 0;
  uRam0000000000128a78 = 0;
  _DAT_00128a70 = 0;
  return;
}


// ===== 0011a5b0  FUN_0011a5b0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0011a5b0(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x730) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x718);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x740));
    bVar1 = *(byte *)(param_1 + 0x718);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x700);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x728));
    bVar1 = *(byte *)(param_1 + 0x700);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x6e8);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x710));
    bVar1 = *(byte *)(param_1 + 0x6e8);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x6f8));
  }
  FUN_00117a80(param_1,PTR_PTR_00123000 + 8);
  return;
}


// ===== 0011a638  FUN_0011a638 =====

void FUN_0011a638(undefined8 param_1)

{
  FUN_00117a80(param_1,PTR_VTT_00123018);
  return;
}


// ===== 0011a644  FUN_0011a644 =====

void FUN_0011a644(void *param_1)

{
  FUN_00117a80(param_1,PTR_VTT_00123018);
  operator_delete(param_1);
  return;
}


// ===== 0011a670  FUN_0011a670 =====

void FUN_0011a670(undefined8 param_1)

{
  FUN_00117b90(param_1,&PTR_PTR_FUN_00122ac8);
  return;
}


// ===== 0011a67c  FUN_0011a67c =====

void FUN_0011a67c(void *param_1)

{
  FUN_00117b90(param_1,&PTR_PTR_FUN_00122ac8);
  operator_delete(param_1);
  return;
}


// ===== 0011a6a8  FUN_0011a6a8 =====

void FUN_0011a6a8(undefined4 *param_1)

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


// ===== 0011a71c  FUN_0011a71c =====

void FUN_0011a71c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00122b80;
  FUN_0011517c(param_1 + 10);
  *param_1 = &PTR_FUN_00122bc0;
  folly::dynamic::destroy();
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 0011a774  FUN_0011a774 =====

void FUN_0011a774(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00122b80;
  FUN_0011517c(param_1 + 10);
  *param_1 = &PTR_FUN_00122bc0;
  folly::dynamic::destroy();
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0011a7c8  FUN_0011a7c8 =====

void FUN_0011a7c8(long *param_1)

{
  *param_1 = (long)(PTR_vtable_00123020 + 0x20);
  folly::dynamic::destroy();
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 0011a810  FUN_0011a810 =====

void FUN_0011a810(long *param_1)

{
  *param_1 = (long)(PTR_vtable_00123020 + 0x20);
  folly::dynamic::destroy();
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0011a854  FUN_0011a854 =====

void FUN_0011a854(void *param_1)

{
  FUN_00117a80(param_1,PTR_PTR_00122fd0 + 8);
  operator_delete(param_1);
  return;
}


// ===== 0011a884  FUN_0011a884 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0011a884(void *param_1)

{
  byte bVar1;
  
  if ((*(byte *)((long)param_1 + 0x730) & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 0x718);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x740));
    bVar1 = *(byte *)((long)param_1 + 0x718);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 0x700);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x728));
    bVar1 = *(byte *)((long)param_1 + 0x700);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 0x6e8);
  }
  else {
    operator_delete(*(void **)((long)param_1 + 0x710));
    bVar1 = *(byte *)((long)param_1 + 0x6e8);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x6f8));
  }
  FUN_00117a80(param_1,PTR_PTR_00123000 + 8);
  operator_delete(param_1);
  return;
}


// ===== 0011a914  FUN_0011a914 =====

bool FUN_0011a914(int *param_1)

{
  if (param_1[0xc] == 1) {
    return 1 < (uint)param_1[2];
  }
  if (param_1[0xc] == 0) {
    return *param_1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0011aab0();
}


// ===== 0011a950  FUN_0011a950 =====

void FUN_0011a950(undefined8 param_1,undefined4 *param_2)

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
  FUN_0011aae4(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 6) {
    piVar2 = (int *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      piVar2 = local_40;
    }
    if (*piVar2 == 0x6772616d && (short)piVar2[1] == 0x6e69) {
      *param_2 = 1;
joined_r0x0011aa24:
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return;
      }
      goto LAB_0011aa90;
    }
  }
  else if (uVar1 == 7) {
    piVar2 = (int *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      piVar2 = local_40;
    }
    if (*piVar2 == 0x64646170 && *(int *)((long)piVar2 + 3) == 0x676e6964) {
      *param_2 = 0;
      goto joined_r0x0011aa24;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0011aa60 to 0011aa63 has its CatchHandler @ 0011aa64 */
    abort();
  }
LAB_0011aa90:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011aa94  FUN_0011aa94 =====

void FUN_0011aa94(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  
  uVar1 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar1 = (ulong)(*param_2 >> 1);
  }
  FUN_0011ac4c(param_1,pbVar2,uVar1);
  return;
}


// ===== 0011aab0  FUN_0011aab0 =====

void FUN_0011aab0(void)

{
  long *plVar1;
  
  plVar1 = (long *)__cxa_allocate_exception(8);
  *plVar1 = (long)(PTR_vtable_00123030 + 0x10);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar1,PTR_typeinfo_00123028,PTR__exception_00123010);
}


// ===== 0011aae4  FUN_0011aae4 =====

void FUN_0011aae4(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
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
                    /* try { // try from 0011ab6c to 0011ab7b has its CatchHandler @ 0011ac14 */
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
      uVar2 = FUN_001184cc(*(undefined8 *)PTR_name_00122ff0);
                    /* catch() { ... } // from try @ 0011ab6c with catch @ 0011ac14 */
      if (local_40 != (undefined8 *)0x0) {
        (**(code **)*local_40)(local_40);
      }
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_0010e774(uVar2);
      }
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_0011aab0();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011ac4c  FUN_0011ac4c =====

basic_ostream * FUN_0011ac4c(basic_ostream *param_1,long param_2,long param_3)

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
                    /* try { // try from 0011ac84 to 0011ac8f has its CatchHandler @ 0011aeb0 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry(local_90,param_1);
  if (local_90[0] == (sentry)0x0) goto LAB_0011ae38;
  lVar8 = *(long *)(*(long *)param_1 + -0x18);
  uVar3 = *(uint *)(param_1 + lVar8 + 0x90);
  plVar9 = *(long **)(param_1 + lVar8 + 0x28);
  uVar1 = *(uint *)(param_1 + lVar8 + 8);
  if (uVar3 == 0xffffffff) {
                    /* try { // try from 0011acb8 to 0011acc3 has its CatchHandler @ 0011aea0 */
    std::__ndk1::ios_base::getloc();
                    /* try { // try from 0011acc4 to 0011ace3 has its CatchHandler @ 0011ae8c */
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
                    /* try { // try from 0011ad30 to 0011ad7b has its CatchHandler @ 0011aea0 */
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
                    /* try { // try from 0011adc0 to 0011adcb has its CatchHandler @ 0011ae74 */
        uVar6 = (**(code **)(*plVar9 + 0x60))(plVar9,pvVar10,__n);
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
        if (uVar6 != __n) goto LAB_0011ae1c;
      }
      lVar11 = (param_2 + param_3) - lVar7;
                    /* try { // try from 0011adfc to 0011ae0b has its CatchHandler @ 0011aea0 */
      if ((lVar11 < 1) ||
         (lVar7 = (**(code **)(*plVar9 + 0x60))(plVar9,lVar7,lVar11), lVar7 == lVar11)) {
        *(undefined8 *)(param_1 + lVar8 + 0x18) = 0;
        goto LAB_0011ae38;
      }
    }
  }
LAB_0011ae1c:
                    /* try { // try from 0011ae30 to 0011ae37 has its CatchHandler @ 0011ae9c */
  std::__ndk1::ios_base::clear((int)param_1 + (int)*(undefined8 *)(*(long *)param_1 + -0x18));
LAB_0011ae38:
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(local_90);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011aefc  FUN_0011aefc =====

void FUN_0011aefc(int *param_1,ulong *param_2)

{
  size_t sVar1;
  size_t sVar2;
  IRuntime IVar3;
  byte bVar4;
  long lVar5;
  char *pcVar6;
  void *pvVar7;
  int iVar8;
  IRuntime **ppIVar9;
  IRuntime **ppIVar10;
  long lVar11;
  undefined8 *puVar12;
  IRuntime **ppIVar13;
  ulong uVar14;
  IRuntime **ppIVar15;
  IRuntime **ppIVar16;
  IRuntime **ppIVar17;
  ulong uVar18;
  char *pcVar19;
  char *pcVar20;
  byte *pbVar21;
  IRuntime *pIVar22;
  long lVar23;
  IRuntime *pIVar24;
  ulong uVar25;
  long *plVar26;
  IRuntime **unaff_x27;
  undefined2 uVar27;
  undefined8 uVar28;
  int local_168 [4];
  undefined8 *local_158;
  Value aVStack_150 [8];
  undefined8 local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  Value aVStack_130 [16];
  void *local_120;
  IRuntime **ppIStack_118;
  IRuntime *local_110;
  ulong local_108;
  float local_100;
  IRuntime *local_f8;
  IRuntime **ppIStack_f0;
  undefined1 local_e8;
  undefined7 uStack_e7;
  IRuntime *local_e0;
  IRuntime **local_d8;
  undefined1 local_d0;
  IRuntime *local_b0;
  ulong uStack_a8;
  void *local_a0;
  uint local_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  if (param_1[0xc] == 1) {
    pIVar22 = *(IRuntime **)param_1;
    local_138 = (undefined8 *)
                (**(code **)(*(long *)pIVar22 + 0x88))(pIVar22,*(undefined8 *)(param_1 + 4));
                    /* try { // try from 0011b3b4 to 0011b3c3 has its CatchHandler @ 0011bb9c */
    (**(code **)(*(long *)pIVar22 + 0x218))(&local_140,pIVar22,&local_138);
                    /* try { // try from 0011b3cc to 0011b3d7 has its CatchHandler @ 0011bb94 */
    lVar11 = (**(code **)(*(long *)pIVar22 + 0x240))(pIVar22,&local_140);
    local_100 = 1.0;
    ppIStack_118 = (IRuntime **)0x0;
    local_120 = (void *)0x0;
    local_108 = 0;
    local_110 = (IRuntime *)0x0;
    if (lVar11 != 0) {
      lVar23 = 0;
      do {
                    /* try { // try from 0011b42c to 0011b43f has its CatchHandler @ 0011bc30 */
        (**(code **)(*(long *)pIVar22 + 0x260))(aVStack_150,pIVar22,&local_140,lVar23);
                    /* try { // try from 0011b44c to 0011b453 has its CatchHandler @ 0011bc38 */
        local_158 = (undefined8 *)(**(code **)(*(long *)pIVar22 + 0x80))(pIVar22,local_148);
                    /* try { // try from 0011b460 to 0011b473 has its CatchHandler @ 0011bc40 */
        (**(code **)(*(long *)pIVar22 + 0x188))(local_168,pIVar22,&local_138,&local_158);
        if (local_168[0] != 0) {
                    /* try { // try from 0011b484 to 0011b493 has its CatchHandler @ 0011bc1c */
          (**(code **)(*(long *)pIVar22 + 0x120))(&local_f8,pIVar22,&local_158);
                    /* try { // try from 0011b494 to 0011b4a3 has its CatchHandler @ 0011bc14 */
          facebook::jsi::Value::Value(aVStack_130,pIVar22,(Value *)local_168);
          ppIVar9 = &local_e0;
          local_e0 = pIVar22;
          facebook::jsi::Value::Value((Value *)&local_d8,aVStack_130);
          local_b0 = local_e0;
          facebook::jsi::Value::Value((Value *)&uStack_a8,(Value *)&local_d8);
          local_80 = 1;
          facebook::jsi::Value::~Value((Value *)&local_d8);
          facebook::jsi::Value::~Value(aVStack_130);
          ppIVar15 = (IRuntime **)((ulong)local_f8 >> 1 & 0x7f);
          pcVar6 = (char *)((ulong)&local_f8 | 1);
          if (((ulong)local_f8 & 1) != 0) {
            ppIVar15 = ppIStack_f0;
            pcVar6 = (char *)CONCAT71(uStack_e7,local_e8);
          }
                    /* try { // try from 0011b504 to 0011b50b has its CatchHandler @ 0011bc18 */
          ppIVar13 = (IRuntime **)FUN_0011bd70(&local_e0,pcVar6,ppIVar15);
          ppIVar15 = ppIStack_118;
          if (ppIStack_118 != (IRuntime **)0x0) {
            uVar28 = NEON_cnt(ppIStack_118,1);
            uVar27 = NEON_uaddlv(uVar28,1);
            uVar14 = CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar27) & 0xffffffff;
            if (uVar14 < 2) {
              ppIVar9 = (IRuntime **)((long)ppIStack_118 - 1U & (ulong)ppIVar13);
            }
            else {
              ppIVar9 = ppIVar13;
              if (ppIStack_118 <= ppIVar13) {
                uVar25 = 0;
                if (ppIStack_118 != (IRuntime **)0x0) {
                  uVar25 = (ulong)ppIVar13 / (ulong)ppIStack_118;
                }
                ppIVar9 = (IRuntime **)((long)ppIVar13 - uVar25 * (long)ppIStack_118);
              }
            }
            plVar26 = *(long **)((long)local_120 + (long)ppIVar9 * 8);
            if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
              uVar25 = (long)ppIStack_118 - 1;
              ppIVar10 = (IRuntime **)((ulong)local_f8 >> 1 & 0x7f);
              pcVar6 = (char *)((ulong)&local_f8 | 1);
              if (((ulong)local_f8 & 1) != 0) {
                ppIVar10 = ppIStack_f0;
                pcVar6 = (char *)CONCAT71(uStack_e7,local_e8);
              }
              do {
                ppIVar16 = (IRuntime **)plVar26[1];
                if (ppIVar16 == ppIVar13) {
                  bVar4 = *(byte *)(plVar26 + 2);
                  ppIVar17 = (IRuntime **)(ulong)(bVar4 >> 1);
                  ppIVar16 = ppIVar17;
                  if ((bVar4 & 1) != 0) {
                    ppIVar16 = (IRuntime **)plVar26[3];
                  }
                  if (ppIVar16 == ppIVar10) {
                    if ((bVar4 & 1) == 0) {
                      if (bVar4 < 2) goto LAB_0011b85c;
                      pcVar19 = (char *)((long)plVar26 + 0x11);
                      pcVar20 = pcVar6;
                      while (*pcVar19 == *pcVar20) {
                        ppIVar17 = (IRuntime **)((long)ppIVar17 + -1);
                        pcVar19 = pcVar19 + 1;
                        pcVar20 = pcVar20 + 1;
                        if (ppIVar17 == (IRuntime **)0x0) goto LAB_0011b85c;
                      }
                    }
                    else {
                      iVar8 = memcmp((void *)plVar26[4],pcVar6,(size_t)plVar26[3]);
                      if (iVar8 == 0) goto LAB_0011b85c;
                    }
                  }
                }
                else {
                  if (uVar14 < 2) {
                    ppIVar16 = (IRuntime **)((ulong)ppIVar16 & uVar25);
                  }
                  else if (ppIVar15 <= ppIVar16) {
                    uVar18 = 0;
                    if (ppIVar15 != (IRuntime **)0x0) {
                      uVar18 = (ulong)ppIVar16 / (ulong)ppIVar15;
                    }
                    ppIVar16 = (IRuntime **)((long)ppIVar16 - uVar18 * (long)ppIVar15);
                  }
                  if (ppIVar16 != ppIVar9) break;
                }
                plVar26 = (long *)*plVar26;
              } while (plVar26 != (long *)0x0);
            }
          }
                    /* try { // try from 0011b62c to 0011b633 has its CatchHandler @ 0011bbf0 */
          pIVar24 = (IRuntime *)operator_new(0x60);
          local_d0 = 0;
          *(IRuntime **)pIVar24 = (IRuntime *)0x0;
          *(IRuntime ***)(pIVar24 + 8) = ppIVar13;
          local_e0 = pIVar24;
          local_d8 = &local_110;
          if (((ulong)local_f8 & 1) == 0) {
            *(IRuntime ***)(pIVar24 + 0x18) = ppIStack_f0;
            *(IRuntime **)(pIVar24 + 0x10) = local_f8;
            *(ulong *)(pIVar24 + 0x20) = CONCAT71(uStack_e7,local_e8);
          }
          else {
                    /* try { // try from 0011b668 to 0011b66f has its CatchHandler @ 0011bbbc */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            __init_copy_ctor_external
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)(pIVar24 + 0x10),(char *)CONCAT71(uStack_e7,local_e8),(ulong)ppIStack_f0);
          }
          pIVar24[0x28] = (IRuntime)0x0;
          *(undefined4 *)(pIVar24 + 0x58) = 0xffffffff;
          if (local_80 != 0xffffffff) {
                    /* try { // try from 0011b698 to 0011b6a3 has its CatchHandler @ 0011bbd0 */
            (*(code *)(&
                      PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>&&>_00122c00
                      )[local_80])(aVStack_130,pIVar24 + 0x28,&local_b0);
            *(uint *)(pIVar24 + 0x58) = local_80;
          }
          local_d0 = 1;
          if ((ppIVar15 == (IRuntime **)0x0) ||
             (local_100 * (float)ppIVar15 < (float)(local_108 + 1))) {
            if (ppIVar15 < (IRuntime **)0x3) {
              uVar14 = 1;
            }
            else {
              uVar14 = (ulong)(((ulong)ppIVar15 & (long)ppIVar15 - 1U) != 0);
            }
            ppIVar15 = (IRuntime **)(uVar14 | (long)ppIVar15 << 1);
            ppIVar9 = (IRuntime **)(long)((float)(local_108 + 1) / local_100);
            if (ppIVar15 <= ppIVar9) {
              ppIVar15 = ppIVar9;
            }
            if ((long)ppIVar15 - 1U == 0) {
              ppIVar15 = (IRuntime **)0x2;
            }
            else if (((ulong)ppIVar15 & (long)ppIVar15 - 1U) != 0) {
                    /* try { // try from 0011b724 to 0011b7a7 has its CatchHandler @ 0011bbc0 */
              ppIVar15 = (IRuntime **)std::__ndk1::__next_prime((ulong)ppIVar15);
            }
            ppIVar9 = ppIStack_118;
            if (ppIStack_118 < ppIVar15) {
LAB_0011b73c:
              FUN_0011c1a8(&local_120,ppIVar15);
            }
            else if (ppIVar15 < ppIStack_118) {
              ppIVar10 = (IRuntime **)(long)((float)local_108 / local_100);
              if (ppIStack_118 < (IRuntime **)0x3) {
LAB_0011b7a4:
                ppIVar10 = (IRuntime **)std::__ndk1::__next_prime((ulong)ppIVar10);
              }
              else {
                uVar28 = NEON_cnt(ppIStack_118,1);
                uVar27 = NEON_uaddlv(uVar28,1);
                if (1 < (uint)CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar27)) goto LAB_0011b7a4;
                if ((IRuntime **)0x1 < ppIVar10) {
                  ppIVar10 = (IRuntime **)(1L << (-LZCOUNT((long)ppIVar10 + -1) & 0x3fU));
                }
              }
              if (ppIVar15 <= ppIVar10) {
                ppIVar15 = ppIVar10;
              }
              if (ppIVar15 < ppIVar9) goto LAB_0011b73c;
            }
            ppIVar15 = ppIStack_118;
            if (((ulong)ppIStack_118 & (long)ppIStack_118 - 1U) == 0) {
              ppIVar9 = (IRuntime **)((long)ppIStack_118 - 1U & (ulong)ppIVar13);
            }
            else {
              ppIVar9 = ppIVar13;
              if (ppIStack_118 <= ppIVar13) {
                uVar14 = 0;
                if (ppIStack_118 != (IRuntime **)0x0) {
                  uVar14 = (ulong)ppIVar13 / (ulong)ppIStack_118;
                }
                ppIVar9 = (IRuntime **)((long)ppIVar13 - uVar14 * (long)ppIStack_118);
              }
            }
          }
          puVar12 = *(undefined8 **)((long)local_120 + (long)ppIVar9 * 8);
          if (puVar12 == (undefined8 *)0x0) {
            *(IRuntime **)pIVar24 = local_110;
            *(IRuntime ***)((long)local_120 + (long)ppIVar9 * 8) = &local_110;
            local_110 = pIVar24;
            if (*(long *)pIVar24 != 0) {
              ppIVar9 = *(IRuntime ***)(*(long *)pIVar24 + 8);
              if (((ulong)ppIVar15 & (long)ppIVar15 - 1U) == 0) {
                ppIVar9 = (IRuntime **)((ulong)ppIVar9 & (long)ppIVar15 - 1U);
              }
              else if (ppIVar15 <= ppIVar9) {
                uVar14 = 0;
                if (ppIVar15 != (IRuntime **)0x0) {
                  uVar14 = (ulong)ppIVar9 / (ulong)ppIVar15;
                }
                ppIVar9 = (IRuntime **)((long)ppIVar9 - uVar14 * (long)ppIVar15);
              }
              puVar12 = (undefined8 *)((long)local_120 + (long)ppIVar9 * 8);
              goto LAB_0011b84c;
            }
          }
          else {
            *(IRuntime **)pIVar24 = (IRuntime *)*puVar12;
LAB_0011b84c:
            *puVar12 = pIVar24;
          }
          local_108 = local_108 + 1;
LAB_0011b85c:
          if (local_80 != 0xffffffff) {
                    /* try { // try from 0011b87c to 0011b887 has its CatchHandler @ 0011bbd4 */
            (*(code *)(&PTR_FUN_00122be0)[local_80])(&local_e0,&local_b0);
          }
          if (((ulong)local_f8 & 1) != 0) {
            operator_delete((void *)CONCAT71(uStack_e7,local_e8));
          }
        }
        facebook::jsi::Value::~Value((Value *)local_168);
        if (local_158 != (undefined8 *)0x0) {
          (**(code **)*local_158)();
        }
        facebook::jsi::Value::~Value(aVStack_150);
        lVar23 = lVar23 + 1;
      } while (lVar23 != lVar11);
    }
    if (local_140 != (undefined8 *)0x0) {
      (**(code **)*local_140)();
    }
    if (local_138 != (undefined8 *)0x0) {
      (**(code **)*local_138)();
    }
  }
  else {
    if (param_1[0xc] != 0) {
LAB_0011bb54:
      if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_0011aab0();
      }
      goto LAB_0011bcc4;
    }
    local_100 = 1.0;
    ppIStack_118 = (IRuntime **)0x0;
    local_120 = (void *)0x0;
    local_108 = 0;
    local_110 = (IRuntime *)0x0;
    if (*param_1 != 5) {
      if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* try { // try from 0011bb80 to 0011bb8f has its CatchHandler @ 0011bb90 */
        uVar28 = FUN_001184cc(*(undefined8 *)PTR_name_00122fe8);
                    /* catch() { ... } // from try @ 0011bb80 with catch @ 0011bb90 */
                    /* catch() { ... } // from try @ 0011b91c with catch @ 0011bbb0 */
        FUN_0011c688(&local_120);
        if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
          FUN_0010e774(uVar28);
        }
      }
      goto LAB_0011bcc4;
    }
    plVar26 = *(long **)(param_1 + 6);
    if (plVar26 != (long *)0x0) {
      do {
                    /* try { // try from 0011af84 to 0011af8f has its CatchHandler @ 0011bcc8 */
        folly::dynamic::dynamic((dynamic *)&local_b0,(dynamic *)(plVar26 + 8));
        local_80 = 0;
        if ((int)plVar26[2] != 6) {
          if (*(long *)(lVar5 + 0x28) != local_78) goto LAB_0011bcc4;
                    /* try { // try from 0011bb44 to 0011bb53 has its CatchHandler @ 0011bc94 */
          FUN_001184cc(*(undefined8 *)PTR_name_00122ff0);
          goto LAB_0011bb54;
        }
        pbVar21 = (byte *)(plVar26 + 3);
        uVar14 = plVar26[4];
        lVar11 = plVar26[5];
        if ((*pbVar21 & 1) == 0) {
          lVar11 = (long)plVar26 + 0x19;
          uVar14 = (ulong)(*pbVar21 >> 1);
        }
                    /* try { // try from 0011afbc to 0011afc3 has its CatchHandler @ 0011bccc */
        ppIVar9 = (IRuntime **)FUN_0011bd70(&local_e0,lVar11,uVar14);
        ppIVar15 = ppIStack_118;
        if (ppIStack_118 != (IRuntime **)0x0) {
          uVar28 = NEON_cnt(ppIStack_118,1);
          uVar27 = NEON_uaddlv(uVar28,1);
          uVar14 = CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar27) & 0xffffffff;
          if (uVar14 < 2) {
            unaff_x27 = (IRuntime **)((long)ppIStack_118 - 1U & (ulong)ppIVar9);
          }
          else {
            unaff_x27 = ppIVar9;
            if (ppIStack_118 <= ppIVar9) {
              uVar25 = 0;
              if (ppIStack_118 != (IRuntime **)0x0) {
                uVar25 = (ulong)ppIVar9 / (ulong)ppIStack_118;
              }
              unaff_x27 = (IRuntime **)((long)ppIVar9 - uVar25 * (long)ppIStack_118);
            }
          }
          puVar12 = *(undefined8 **)((long)local_120 + (long)unaff_x27 * 8);
          if ((puVar12 != (undefined8 *)0x0) &&
             (pIVar22 = (IRuntime *)*puVar12, pIVar22 != (IRuntime *)0x0)) {
            uVar25 = (long)ppIStack_118 - 1;
            pvVar7 = (void *)((long)plVar26 + 0x19);
            sVar1 = (ulong)(*(byte *)(plVar26 + 3) >> 1);
            if ((*(byte *)(plVar26 + 3) & 1) != 0) {
              pvVar7 = (void *)plVar26[5];
              sVar1 = plVar26[4];
            }
            do {
              ppIVar13 = *(IRuntime ***)(pIVar22 + 8);
              if (ppIVar13 == ppIVar9) {
                IVar3 = pIVar22[0x10];
                sVar2 = (ulong)((byte)IVar3 >> 1);
                if (((byte)IVar3 & 1) != 0) {
                  sVar2 = *(size_t *)(pIVar22 + 0x18);
                }
                if (sVar2 == sVar1) {
                  if (((byte)IVar3 & 1) == 0) {
                    if ((byte)IVar3 < 2) goto LAB_0011b2fc;
                    uVar18 = 0;
                    while (pIVar22[uVar18 + 0x11] == *(IRuntime *)((long)pvVar7 + uVar18)) {
                      uVar18 = uVar18 + 1;
                      if ((byte)IVar3 >> 1 == uVar18) goto LAB_0011b2fc;
                    }
                  }
                  else {
                    iVar8 = memcmp(*(void **)(pIVar22 + 0x20),pvVar7,*(size_t *)(pIVar22 + 0x18));
                    if (iVar8 == 0) goto LAB_0011b2fc;
                  }
                }
              }
              else {
                if (uVar14 < 2) {
                  ppIVar13 = (IRuntime **)((ulong)ppIVar13 & uVar25);
                }
                else if (ppIVar15 <= ppIVar13) {
                  uVar18 = 0;
                  if (ppIVar15 != (IRuntime **)0x0) {
                    uVar18 = (ulong)ppIVar13 / (ulong)ppIVar15;
                  }
                  ppIVar13 = (IRuntime **)((long)ppIVar13 - uVar18 * (long)ppIVar15);
                }
                if (ppIVar13 != unaff_x27) break;
              }
              pIVar22 = *(IRuntime **)pIVar22;
            } while (pIVar22 != (IRuntime *)0x0);
          }
        }
                    /* try { // try from 0011b0f0 to 0011b0f7 has its CatchHandler @ 0011bc2c */
        pIVar22 = (IRuntime *)operator_new(0x60);
        *(undefined8 *)pIVar22 = 0;
        *(IRuntime ***)(pIVar22 + 8) = ppIVar9;
        local_e8 = 0;
        local_f8 = pIVar22;
        ppIStack_f0 = &local_110;
        if ((*pbVar21 & 1) == 0) {
          lVar11 = plVar26[4];
          uVar28 = *(undefined8 *)pbVar21;
          *(long *)(pIVar22 + 0x20) = plVar26[5];
          *(long *)(pIVar22 + 0x18) = lVar11;
          *(undefined8 *)(pIVar22 + 0x10) = uVar28;
        }
        else {
                    /* try { // try from 0011b12c to 0011b133 has its CatchHandler @ 0011bbdc */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(pIVar22 + 0x10),(char *)plVar26[5],plVar26[4]);
        }
        local_e0 = (IRuntime *)((ulong)local_e0 & 0xffffffff00000000);
        local_d8 = (IRuntime **)0x0;
        folly::dynamic::dynamic((dynamic *)(pIVar22 + 0x28),(dynamic *)&local_e0);
        *(undefined4 *)(pIVar22 + 0x58) = 0;
        folly::dynamic::destroy();
        local_e8 = 1;
        if ((ppIVar15 == (IRuntime **)0x0) || (local_100 * (float)ppIVar15 < (float)(local_108 + 1))
           ) {
          if (ppIVar15 < (IRuntime **)0x3) {
            uVar14 = 1;
          }
          else {
            uVar14 = (ulong)(((ulong)ppIVar15 & (long)ppIVar15 - 1U) != 0);
          }
          ppIVar15 = (IRuntime **)(uVar14 | (long)ppIVar15 << 1);
          ppIVar13 = (IRuntime **)(long)((float)(local_108 + 1) / local_100);
          if (ppIVar15 <= ppIVar13) {
            ppIVar15 = ppIVar13;
          }
          if ((long)ppIVar15 - 1U == 0) {
            ppIVar15 = (IRuntime **)0x2;
          }
          else if (((ulong)ppIVar15 & (long)ppIVar15 - 1U) != 0) {
                    /* try { // try from 0011b1c8 to 0011b247 has its CatchHandler @ 0011bbe0 */
            ppIVar15 = (IRuntime **)std::__ndk1::__next_prime((ulong)ppIVar15);
          }
          ppIVar13 = ppIStack_118;
          if (ppIStack_118 < ppIVar15) {
LAB_0011b1e0:
            FUN_0011c1a8(&local_120,ppIVar15);
          }
          else if (ppIVar15 < ppIStack_118) {
            ppIVar10 = (IRuntime **)(long)((float)local_108 / local_100);
            if (ppIStack_118 < (IRuntime **)0x3) {
LAB_0011b244:
              ppIVar10 = (IRuntime **)std::__ndk1::__next_prime((ulong)ppIVar10);
            }
            else {
              uVar28 = NEON_cnt(ppIStack_118,1);
              uVar27 = NEON_uaddlv(uVar28,1);
              if (1 < (uint)CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar27)) goto LAB_0011b244;
              if ((IRuntime **)0x1 < ppIVar10) {
                ppIVar10 = (IRuntime **)(1L << (-LZCOUNT((long)ppIVar10 + -1) & 0x3fU));
              }
            }
            if (ppIVar15 <= ppIVar10) {
              ppIVar15 = ppIVar10;
            }
            if (ppIVar15 < ppIVar13) goto LAB_0011b1e0;
          }
          ppIVar15 = ppIStack_118;
          if (((ulong)ppIStack_118 & (long)ppIStack_118 - 1U) == 0) {
            unaff_x27 = (IRuntime **)((long)ppIStack_118 - 1U & (ulong)ppIVar9);
          }
          else {
            unaff_x27 = ppIVar9;
            if (ppIStack_118 <= ppIVar9) {
              uVar14 = 0;
              if (ppIStack_118 != (IRuntime **)0x0) {
                uVar14 = (ulong)ppIVar9 / (ulong)ppIStack_118;
              }
              unaff_x27 = (IRuntime **)((long)ppIVar9 - uVar14 * (long)ppIStack_118);
            }
          }
        }
        puVar12 = *(undefined8 **)((long)local_120 + (long)unaff_x27 * 8);
        if (puVar12 == (undefined8 *)0x0) {
          *(IRuntime **)pIVar22 = local_110;
          *(IRuntime ***)((long)local_120 + (long)unaff_x27 * 8) = &local_110;
          local_110 = pIVar22;
          if (*(long *)pIVar22 != 0) {
            ppIVar9 = *(IRuntime ***)(*(long *)pIVar22 + 8);
            if (((ulong)ppIVar15 & (long)ppIVar15 - 1U) == 0) {
              ppIVar9 = (IRuntime **)((ulong)ppIVar9 & (long)ppIVar15 - 1U);
            }
            else if (ppIVar15 <= ppIVar9) {
              uVar14 = 0;
              if (ppIVar15 != (IRuntime **)0x0) {
                uVar14 = (ulong)ppIVar9 / (ulong)ppIVar15;
              }
              ppIVar9 = (IRuntime **)((long)ppIVar9 - uVar14 * (long)ppIVar15);
            }
            puVar12 = (undefined8 *)((long)local_120 + (long)ppIVar9 * 8);
            goto LAB_0011b2ec;
          }
        }
        else {
          *(undefined8 *)pIVar22 = *puVar12;
LAB_0011b2ec:
          *puVar12 = pIVar22;
        }
        local_108 = local_108 + 1;
LAB_0011b2fc:
        pIVar24 = pIVar22 + 0x28;
        if (pIVar24 == (IRuntime *)&local_b0) {
LAB_0011b368:
          if (local_80 != 0xffffffff) {
                    /* try { // try from 0011b380 to 0011b38b has its CatchHandler @ 0011bc10 */
            (*(code *)(&PTR_FUN_00122be0)[local_80])(&local_e0,&local_b0);
          }
        }
        else {
          if (*(uint *)(pIVar22 + 0x58) != 0xffffffff) {
            if (local_80 != 0xffffffff) goto code_r0x0011b350;
                    /* try { // try from 0011b330 to 0011b337 has its CatchHandler @ 0011bbb8 */
            (*(code *)(&PTR_FUN_00122be0)[*(uint *)(pIVar22 + 0x58)])(&local_e0);
            *(undefined4 *)(pIVar22 + 0x58) = 0xffffffff;
            goto LAB_0011b368;
          }
          if (local_80 != 0xffffffff) {
code_r0x0011b350:
                    /* try { // try from 0011b35c to 0011b367 has its CatchHandler @ 0011bbd8 */
            local_e0 = pIVar24;
            (*(code *)(&
                      PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___assignment<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>>___generic_assign[abi:ne180000]<std___ndk1___variant_detail___move_assignment<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___move_assignment<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>&&>_00122bf0
                      )[local_80])(&local_e0,pIVar24,&local_b0);
            goto LAB_0011b368;
          }
        }
        plVar26 = (long *)*plVar26;
      } while (plVar26 != (long *)0x0);
    }
  }
  local_b0 = (IRuntime *)CONCAT35(local_b0._5_3_,0x706f7406);
  lVar11 = FUN_0011c4cc(&local_120,&local_b0);
  if (((ulong)local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (lVar11 != 0) {
                    /* try { // try from 0011b91c to 0011b927 has its CatchHandler @ 0011bbb0 */
    FUN_0011aae4(&local_b0,lVar11 + 0x28);
    if ((*param_2 & 1) != 0) {
      operator_delete((void *)param_2[2]);
    }
    param_2[1] = uStack_a8;
    *param_2 = (ulong)local_b0;
    param_2[2] = (ulong)local_a0;
  }
  local_b0 = (IRuntime *)CONCAT17(local_b0._7_1_,0x74686769720a);
  lVar11 = FUN_0011c4cc(&local_120,&local_b0);
  if (((ulong)local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (lVar11 != 0) {
                    /* try { // try from 0011b988 to 0011b993 has its CatchHandler @ 0011bbac */
    FUN_0011aae4(&local_b0,lVar11 + 0x28);
    if ((param_2[3] & 1) != 0) {
      operator_delete((void *)param_2[5]);
    }
    param_2[4] = uStack_a8;
    param_2[3] = (ulong)local_b0;
    param_2[5] = (ulong)local_a0;
  }
  local_b0 = (IRuntime *)0x6d6f74746f620c;
  lVar11 = FUN_0011c4cc(&local_120,&local_b0);
  if (((ulong)local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (lVar11 != 0) {
                    /* try { // try from 0011b9f8 to 0011ba03 has its CatchHandler @ 0011bba8 */
    FUN_0011aae4(&local_b0,lVar11 + 0x28);
    if ((param_2[6] & 1) != 0) {
      operator_delete((void *)param_2[8]);
    }
    param_2[7] = uStack_a8;
    param_2[6] = (ulong)local_b0;
    param_2[8] = (ulong)local_a0;
  }
  local_b0 = (IRuntime *)CONCAT26(local_b0._6_2_,0x7466656c08);
  lVar11 = FUN_0011c4cc(&local_120,&local_b0);
  if (((ulong)local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  pvVar7 = local_120;
  pIVar22 = local_110;
  if (lVar11 != 0) {
                    /* try { // try from 0011ba60 to 0011ba6b has its CatchHandler @ 0011bba4 */
    FUN_0011aae4(&local_b0,lVar11 + 0x28);
    if ((param_2[9] & 1) != 0) {
      operator_delete((void *)param_2[0xb]);
    }
    param_2[10] = uStack_a8;
    param_2[9] = (ulong)local_b0;
    param_2[0xb] = (ulong)local_a0;
    pvVar7 = local_120;
    pIVar22 = local_110;
  }
  while (pIVar22 != (IRuntime *)0x0) {
    pIVar24 = *(IRuntime **)pIVar22;
    local_120 = pvVar7;
    if (*(uint *)(pIVar22 + 0x58) != 0xffffffff) {
                    /* try { // try from 0011bac8 to 0011bad3 has its CatchHandler @ 0011bcd0 */
      (*(code *)(&PTR_FUN_00122be0)[*(uint *)(pIVar22 + 0x58)])(&local_b0,pIVar22 + 0x28);
    }
    *(undefined4 *)(pIVar22 + 0x58) = 0xffffffff;
    if (((byte)pIVar22[0x10] & 1) != 0) {
      operator_delete(*(void **)(pIVar22 + 0x20));
    }
    operator_delete(pIVar22);
    pvVar7 = local_120;
    pIVar22 = pIVar24;
  }
  local_120 = (void *)0x0;
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
LAB_0011bcc4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011bcd4  FUN_0011bcd4 =====

void FUN_0011bcd4(undefined8 *param_1)

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
                    /* try { // try from 0011bd1c to 0011bd27 has its CatchHandler @ 0011bd6c */
        (*(code *)(&PTR_FUN_00122be0)[*(uint *)((long)pvVar2 + 0x58)])
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


// ===== 0011bd70  FUN_0011bd70 =====

ulong FUN_0011bd70(undefined8 param_1,ulong *param_2,ulong param_3)

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


// ===== 0011c1a8  FUN_0011c1a8 =====

void FUN_0011c1a8(long *param_1,ulong param_2)

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
      FUN_0011546c();
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


// ===== 0011c304  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>>::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__move_assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>,(std::__ndk1::__variant_detail::_Trait)1>>(std::__ndk1::__variant_detail::__move_assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>,(std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&,auto:2&&)#1}&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>&&> =====

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
      goto LAB_0011c3c0;
    }
                    /* try { // try from 0011c374 to 0011c37f has its CatchHandler @ 0011c3c4 */
    (*(code *)(&PTR_FUN_00122be0)[uVar1])(&uStack_39,this);
  }
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  p_Var3 = (_func_decltype_auto *)folly::dynamic::dynamic(this,(dynamic *)param_3);
  *(undefined4 *)(this + 0x30) = 0;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return p_Var3;
  }
LAB_0011c3c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011c3c8  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>>::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__move_assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>,(std::__ndk1::__variant_detail::_Trait)1>>(std::__ndk1::__variant_detail::__move_assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>,(std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&,auto:2&&)#1}&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>&&> =====

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
      goto LAB_0011c4a4;
    }
                    /* try { // try from 0011c450 to 0011c45b has its CatchHandler @ 0011c4a8 */
    (*(code *)(&PTR_FUN_00122be0)[uVar1])(&uStack_39,puVar5);
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
LAB_0011c4a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011c4ac  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>,(std::__ndk1::__variant_detail::_Trait)1>>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>>&,std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>,(std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&,auto:2&&)#1}&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>&&> =====

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


// ===== 0011c4b8  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>,(std::__ndk1::__variant_detail::_Trait)1>>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>>&,std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>,(std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&,auto:2&&)#1}&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>&&> =====

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


// ===== 0011c4cc  FUN_0011c4cc =====

long * FUN_0011c4cc(long *param_1,byte *param_2)

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
                    /* try { // try from 0011c518 to 0011c51f has its CatchHandler @ 0011c684 */
  uVar8 = FUN_0011bd70(&uStack_69,pbVar3,uVar8);
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
                  if (bVar4 >> 1 == uVar10) goto LAB_0011c64c;
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
            if (uVar10 != uVar13) goto LAB_0011c648;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      goto LAB_0011c64c;
    }
  }
LAB_0011c648:
  plVar9 = (long *)0x0;
LAB_0011c64c:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011c688  FUN_0011c688 =====

void FUN_0011c688(undefined8 *param_1)

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
                    /* try { // try from 0011c6ec to 0011c6f7 has its CatchHandler @ 0011c74c */
      (*(code *)(&PTR_FUN_00122be0)[*(uint *)(puVar2 + 0xb)])(&uStack_49,puVar2 + 5);
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


// ===== 0011c750  facebook::react::NativeSafeAreaContextSpecJSI::NativeSafeAreaContextSpecJSI =====

/* facebook::react::NativeSafeAreaContextSpecJSI::NativeSafeAreaContextSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeSafeAreaContextSpecJSI::NativeSafeAreaContextSpecJSI
          (NativeSafeAreaContextSpecJSI *this,InitParams *param_1)

{
  NativeSafeAreaContextSpecJSI *pNVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  void *pvVar10;
  void *pvVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  ulong unaff_x26;
  undefined2 uVar23;
  undefined8 uVar24;
  float fVar25;
  byte local_98;
  undefined7 uStack_97;
  char cStack_90;
  undefined4 uStack_8f;
  undefined1 uStack_8b;
  undefined2 uStack_8a;
  void *local_88;
  long *local_80;
  NativeSafeAreaContextSpecJSI *pNStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  *(undefined ***)this = &PTR__JavaTurboModule_00122c20;
  local_98 = 0x18;
  uStack_8f = 0x73746e61;
  uStack_8b = 0;
  uStack_97 = (undefined7)s_getConstants_00109380._0_8_;
  cStack_90 = SUB81(s_getConstants_00109380._0_8_,7);
                    /* try { // try from 0011c7c0 to 0011c7cf has its CatchHandler @ 0011ccb4 */
  uVar9 = FUN_0011bd70(&local_80,(void *)((ulong)&local_98 | 1),0xc);
  bVar5 = local_98;
  uVar22 = *(ulong *)(this + 0x38);
  if (uVar22 != 0) {
    uVar24 = NEON_cnt(uVar22,1);
    uVar23 = NEON_uaddlv(uVar24,1);
    uVar17 = CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar23) & 0xffffffff;
    if (uVar17 < 2) {
      unaff_x26 = uVar22 - 1 & uVar9;
    }
    else {
      unaff_x26 = uVar9;
      if (uVar22 <= uVar9) {
        uVar13 = 0;
        if (uVar22 != 0) {
          uVar13 = uVar9 / uVar22;
        }
        unaff_x26 = uVar9 - uVar13 * uVar22;
      }
    }
    puVar12 = *(undefined8 **)(*(long *)(this + 0x30) + unaff_x26 * 8);
    if ((puVar12 != (undefined8 *)0x0) && (plVar21 = (long *)*puVar12, plVar21 != (long *)0x0)) {
      pvVar10 = (void *)((ulong)&local_98 | 1);
      sVar2 = (ulong)(local_98 >> 1);
      if ((local_98 & 1) != 0) {
        pvVar10 = local_88;
        sVar2 = CONCAT26(uStack_8a,CONCAT15(uStack_8b,CONCAT41(uStack_8f,cStack_90)));
      }
      do {
        uVar13 = plVar21[1];
        if (uVar13 == uVar9) {
          bVar4 = *(byte *)(plVar21 + 2);
          sVar3 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            sVar3 = plVar21[3];
          }
          if (sVar3 == sVar2) {
            if ((bVar4 & 1) == 0) {
              if (bVar4 < 2) goto code_r0x0011cbd8;
              uVar13 = 0;
              while (*(char *)((long)plVar21 + uVar13 + 0x11) == *(char *)((long)pvVar10 + uVar13))
              {
                uVar13 = uVar13 + 1;
                if (bVar4 >> 1 == uVar13) goto code_r0x0011cbd8;
              }
            }
            else {
              iVar8 = memcmp((void *)plVar21[4],pvVar10,plVar21[3]);
              if (iVar8 == 0) goto code_r0x0011cbd8;
            }
          }
        }
        else {
          if (uVar17 < 2) {
            uVar13 = uVar13 & uVar22 - 1;
          }
          else if (uVar22 <= uVar13) {
            uVar15 = 0;
            if (uVar22 != 0) {
              uVar15 = uVar13 / uVar22;
            }
            uVar13 = uVar13 - uVar15 * uVar22;
          }
          if (uVar13 != unaff_x26) break;
        }
        plVar21 = (long *)*plVar21;
      } while (plVar21 != (long *)0x0);
    }
  }
                    /* try { // try from 0011c8f8 to 0011c8ff has its CatchHandler @ 0011cc7c */
  plVar21 = (long *)operator_new(0x38);
  pvVar10 = local_88;
  lVar14 = *(long *)(this + 0x48);
  fVar25 = *(float *)(this + 0x50);
  pNVar1 = this + 0x40;
  plVar21[3] = CONCAT26(uStack_8a,CONCAT15(uStack_8b,CONCAT41(uStack_8f,cStack_90)));
  plVar21[2] = CONCAT71(uStack_97,local_98);
  *plVar21 = 0;
  plVar21[1] = uVar9;
  local_98 = 0;
  uStack_97 = 0;
  cStack_90 = '\0';
  uStack_8f = 0;
  uStack_8b = 0;
  uStack_8a = 0;
  local_88 = (void *)0x0;
  plVar21[5] = 0;
  plVar21[6] = 0;
  plVar21[4] = (long)pvVar10;
  local_70 = 1;
  local_80 = plVar21;
  pNStack_78 = pNVar1;
  if ((uVar22 == 0) || (fVar25 * (float)uVar22 < (float)(lVar14 + 1))) {
    if (uVar22 < 3) {
      uVar17 = 1;
    }
    else {
      uVar17 = (ulong)((uVar22 & uVar22 - 1) != 0);
    }
    uVar17 = uVar17 | uVar22 << 1;
    uVar13 = (ulong)((float)(lVar14 + 1) / fVar25);
    if (uVar17 <= uVar13) {
      uVar17 = uVar13;
    }
    if (uVar17 - 1 == 0) {
      uVar17 = 2;
    }
    else if ((uVar17 & uVar17 - 1) != 0) {
                    /* try { // try from 0011c9a4 to 0011cc6b has its CatchHandler @ 0011cc6c */
      uVar17 = std::__ndk1::__next_prime(uVar17);
      uVar22 = *(ulong *)(this + 0x38);
    }
    if (uVar22 < uVar17) {
LAB_0011c9bc:
      if (uVar17 >> 0x3d != 0) {
        if (*(long *)(lVar7 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_0011546c();
        }
        goto LAB_0011ccb0;
      }
      pvVar10 = operator_new(uVar17 << 3);
      pvVar11 = *(void **)(this + 0x30);
      *(void **)(this + 0x30) = pvVar10;
      if (pvVar11 != (void *)0x0) {
        operator_delete(pvVar11);
      }
      uVar22 = 0;
      *(ulong *)(this + 0x38) = uVar17;
      do {
        *(undefined8 *)(*(long *)(this + 0x30) + uVar22 * 8) = 0;
        uVar22 = uVar22 + 1;
      } while (uVar17 != uVar22);
      plVar18 = *(long **)pNVar1;
      uVar22 = uVar17;
      if (plVar18 != (long *)0x0) {
        uVar13 = plVar18[1];
        uVar24 = NEON_cnt(uVar17,1);
        uVar23 = NEON_uaddlv(uVar24,1);
        uVar15 = CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar23) & 0xffffffff;
        if (uVar15 < 2) {
          uVar13 = uVar13 & uVar17 - 1;
        }
        else if (uVar17 <= uVar13) {
          uVar20 = 0;
          if (uVar17 != 0) {
            uVar20 = uVar13 / uVar17;
          }
          uVar13 = uVar13 - uVar20 * uVar17;
        }
        *(NativeSafeAreaContextSpecJSI **)(*(long *)(this + 0x30) + uVar13 * 8) = pNVar1;
        plVar19 = (long *)*plVar18;
        if (plVar19 != (long *)0x0) {
          do {
            uVar20 = plVar19[1];
            if (uVar15 < 2) {
              uVar20 = uVar20 & uVar17 - 1;
            }
            else if (uVar17 <= uVar20) {
              uVar6 = 0;
              if (uVar17 != 0) {
                uVar6 = uVar20 / uVar17;
              }
              uVar20 = uVar20 - uVar6 * uVar17;
            }
            if (uVar20 != uVar13) {
              if (*(long *)(*(long *)(this + 0x30) + uVar20 * 8) == 0) {
                *(long **)(*(long *)(this + 0x30) + uVar20 * 8) = plVar18;
                uVar13 = uVar20;
              }
              else {
                *plVar18 = *plVar19;
                *plVar19 = **(long **)(*(long *)(this + 0x30) + uVar20 * 8);
                **(undefined8 **)(*(long *)(this + 0x30) + uVar20 * 8) = plVar19;
                plVar19 = plVar18;
              }
            }
            plVar18 = plVar19;
            plVar19 = (long *)*plVar18;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    else if (uVar17 < uVar22) {
      uVar13 = (ulong)((float)*(ulong *)(this + 0x48) / *(float *)(this + 0x50));
      if (uVar22 < 3) {
LAB_0011cc1c:
        uVar13 = std::__ndk1::__next_prime(uVar13);
      }
      else {
        uVar24 = NEON_cnt(uVar22,1);
        uVar23 = NEON_uaddlv(uVar24,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar23)) goto LAB_0011cc1c;
        if (1 < uVar13) {
          uVar13 = 1L << (-LZCOUNT(uVar13 - 1) & 0x3fU);
        }
      }
      if (uVar17 <= uVar13) {
        uVar17 = uVar13;
      }
      if (uVar17 < uVar22) {
        if (uVar17 != 0) goto LAB_0011c9bc;
        pvVar10 = *(void **)(this + 0x30);
        *(undefined8 *)(this + 0x30) = 0;
        if (pvVar10 != (void *)0x0) {
          operator_delete(pvVar10);
        }
        *(undefined8 *)(this + 0x38) = 0;
        uVar22 = 0;
      }
      else {
        uVar22 = *(ulong *)(this + 0x38);
      }
    }
    if ((uVar22 & uVar22 - 1) == 0) {
      unaff_x26 = uVar22 - 1 & uVar9;
    }
    else {
      unaff_x26 = uVar9;
      if (uVar22 <= uVar9) {
        uVar17 = 0;
        if (uVar22 != 0) {
          uVar17 = uVar9 / uVar22;
        }
        unaff_x26 = uVar9 - uVar17 * uVar22;
      }
    }
  }
  lVar14 = *(long *)(this + 0x30);
  plVar18 = *(long **)(lVar14 + unaff_x26 * 8);
  if (plVar18 == (long *)0x0) {
    lVar16 = *(long *)pNVar1;
    *(long **)pNVar1 = plVar21;
    *plVar21 = lVar16;
    *(NativeSafeAreaContextSpecJSI **)(lVar14 + unaff_x26 * 8) = pNVar1;
    if (*plVar21 != 0) {
      uVar9 = *(ulong *)(*plVar21 + 8);
      if ((uVar22 & uVar22 - 1) == 0) {
        uVar9 = uVar9 & uVar22 - 1;
      }
      else if (uVar22 <= uVar9) {
        uVar17 = 0;
        if (uVar22 != 0) {
          uVar17 = uVar9 / uVar22;
        }
        uVar9 = uVar9 - uVar17 * uVar22;
      }
      plVar18 = (long *)(*(long *)(this + 0x30) + uVar9 * 8);
      goto LAB_0011cbbc;
    }
  }
  else {
    *plVar21 = *plVar18;
LAB_0011cbbc:
    *plVar18 = (long)plVar21;
  }
  *(long *)(this + 0x48) = *(long *)(this + 0x48) + 1;
  bVar5 = local_98;
code_r0x0011cbd8:
  plVar21[5] = 0;
  plVar21[6] = (long)FUN_0011ccb8;
  if ((bVar5 & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
LAB_0011ccb0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011ccb8  FUN_0011ccb8 =====

void FUN_0011ccb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_3f = (char  [8])s_getConstants_00109380._0_8_;
  uStack_4f = (undefined7)s___Ljava_util_Map__00109475._8_8_;
  cStack_48 = SUB81(s___Ljava_util_Map__00109475._8_8_,7);
  local_57 = (char  [8])s___Ljava_util_Map__00109475._0_8_;
  uStack_47 = 0x3b;
                    /* try { // try from 0011cd28 to 0011cd47 has its CatchHandler @ 0011cd88 */
  facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,4,&local_40,&local_58,param_3,param_4,&DAT_00128a88);
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


// ===== 0011cdc8  facebook::react::safeareacontext_ModuleProvider =====

/* facebook::react::safeareacontext_ModuleProvider(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   facebook::react::JavaTurboModule::InitParams const&) */

void __thiscall
facebook::react::safeareacontext_ModuleProvider
          (react *this,basic_string *param_1,InitParams *param_2)

{
  ulong uVar1;
  react rVar2;
  undefined8 *puVar3;
  undefined8 *in_x8;
  react *prVar4;
  
  rVar2 = *this;
  uVar1 = (ulong)((byte)rVar2 >> 1);
  if (((byte)rVar2 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  if (uVar1 == 0x12) {
    prVar4 = *(react **)(this + 0x10);
    if (((byte)rVar2 & 1) == 0) {
      prVar4 = this + 1;
    }
    if ((*(long *)prVar4 == 0x4165666153434e52 && *(long *)(prVar4 + 8) == 0x65746e6f43616572) &&
        *(short *)(prVar4 + 0x10) == 0x7478) {
      puVar3 = (undefined8 *)operator_new(0xb8);
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = &PTR_FUN_00122c78;
                    /* try { // try from 0011ce78 to 0011ce83 has its CatchHandler @ 0011ce8c */
      NativeSafeAreaContextSpecJSI::NativeSafeAreaContextSpecJSI
                ((NativeSafeAreaContextSpecJSI *)(puVar3 + 3),(InitParams *)param_1);
      *in_x8 = (NativeSafeAreaContextSpecJSI *)(puVar3 + 3);
      in_x8[1] = puVar3;
      return;
    }
  }
  *in_x8 = 0;
  in_x8[1] = 0;
  return;
}


// ===== 0011cea8  FUN_0011cea8 =====

void FUN_0011cea8(JavaTurboModule *param_1)

{
  facebook::react::JavaTurboModule::~JavaTurboModule(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0011cecc  FUN_0011cecc =====

void FUN_0011cecc(Value *param_1,long *param_2,IRuntime *param_3,undefined8 param_4)

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
                    /* try { // try from 0011cf24 to 0011cf2f has its CatchHandler @ 0011cff4 */
    (**(code **)(*(long *)param_3 + 0x228))(aIStack_70,param_3);
                    /* try { // try from 0011cf30 to 0011cf3f has its CatchHandler @ 0011cfe4 */
    facebook::jsi::Value::asObject(aIStack_70);
                    /* try { // try from 0011cf40 to 0011cf4f has its CatchHandler @ 0011cfc8 */
    facebook::jsi::Value::Value(aVStack_58,param_3,param_1);
                    /* try { // try from 0011cf58 to 0011cf6b has its CatchHandler @ 0011cfb8 */
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


// ===== 0011d01c  FUN_0011d01c =====

void FUN_0011d01c(ulong *param_1,long param_2,long *param_3)

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
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0011d2e0 to 0011d2e3 has its CatchHandler @ 0011d2e4 */
        uVar5 = FUN_0011d94c();
                    /* catch() { ... } // from try @ 0011d074 with catch @ 0011d2e4
                       catch() { ... } // from try @ 0011d2e0 with catch @ 0011d2e4 */
                    /* catch() { ... } // from try @ 0011d0d0 with catch @ 0011d308 */
        FUN_0011d8d4(param_1);
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_0010e774(uVar5);
        }
      }
      goto LAB_0011d330;
    }
                    /* try { // try from 0011d074 to 0011d077 has its CatchHandler @ 0011d2e4 */
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
                    /* try { // try from 0011d0d0 to 0011d0db has its CatchHandler @ 0011d308 */
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
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0011d2b0 to 0011d2cb has its CatchHandler @ 0011d2ec */
          FUN_0011d94c();
LAB_0011d2b4:
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_0011546c();
          }
        }
        goto LAB_0011d330;
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
        if (uVar8 >> 0x3d != 0) goto LAB_0011d2b4;
                    /* try { // try from 0011d12c to 0011d12f has its CatchHandler @ 0011d2e8 */
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
LAB_0011d1ec:
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
          if (uVar12 != uVar6) goto LAB_0011d1ec;
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
LAB_0011d330:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011d334  FUN_0011d334 =====

void FUN_0011d334(undefined4 *param_1,long param_2,long *param_3,undefined8 param_4)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  undefined ***pppuVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  ulong uVar15;
  ulong uVar16;
  char *__s2;
  ulong uVar17;
  undefined2 uVar18;
  undefined8 uVar19;
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
  __s2 = (char *)((ulong)local_e8 | 1);
  sVar1 = (ulong)(local_e8[0] >> 1);
  pcVar13 = __s2;
  if ((local_e8[0] & 1) != 0) {
    sVar1 = local_e0;
    pcVar13 = local_d8;
  }
                    /* try { // try from 0011d3ac to 0011d3b3 has its CatchHandler @ 0011d830 */
  uVar7 = FUN_0011bd70(&local_a0,pcVar13,sVar1);
  uVar17 = *(ulong *)(param_2 + 0x38);
  if (uVar17 != 0) {
    uVar19 = NEON_cnt(uVar17,1);
    uVar18 = NEON_uaddlv(uVar19,1);
    uVar15 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
    if (uVar15 < 2) {
      uVar16 = uVar17 - 1 & uVar7;
    }
    else {
      uVar16 = uVar7;
      if (uVar17 <= uVar7) {
        uVar16 = 0;
        if (uVar17 != 0) {
          uVar16 = uVar7 / uVar17;
        }
        uVar16 = uVar7 - uVar16 * uVar17;
      }
    }
    plVar9 = *(long **)(*(long *)(param_2 + 0x30) + uVar16 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      pcVar13 = __s2;
      sVar1 = (ulong)(local_e8[0] >> 1);
      if ((local_e8[0] & 1) != 0) {
        pcVar13 = local_d8;
        sVar1 = local_e0;
      }
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
LAB_0011d4fc:
                lStack_b8 = plVar9[6];
                local_c0 = plVar9[5];
                local_b0 = &local_d0;
                local_d0 = &PTR_FUN_00122cc8;
                local_a0 = &PTR_FUN_00122cc8;
                    /* try { // try from 0011d53c to 0011d54f has its CatchHandler @ 0011d798 */
                lStack_c8 = param_2;
                local_98 = param_2;
                lStack_90 = local_c0;
                local_88 = lStack_b8;
                local_80 = &local_a0;
                (**(code **)(*param_3 + 0x278))(&local_f0,param_3,param_4,(int)plVar9[5],&local_a0);
                if (local_80 == &local_a0) {
                  lVar11 = 4;
                  pppuVar8 = &local_a0;
LAB_0011d738:
                  (*(code *)(*pppuVar8)[lVar11])();
                }
                else if (local_80 != (undefined ***)0x0) {
                  lVar11 = 5;
                  pppuVar8 = local_80;
                  goto LAB_0011d738;
                }
                uVar19 = local_f0;
                local_f0 = 0;
                *param_1 = 7;
                *(undefined8 *)(param_1 + 2) = uVar19;
                if (local_b0 == &local_d0) {
                  lVar11 = 4;
                  pppuVar8 = &local_d0;
                }
                else {
                  if (local_b0 == (undefined ***)0x0) goto LAB_0011d6f0;
                  lVar11 = 5;
                  pppuVar8 = local_b0;
                }
                (*(code *)(*pppuVar8)[lVar11])();
                goto LAB_0011d6f0;
              }
              pcVar12 = (char *)((long)plVar9 + 0x11);
              pcVar14 = pcVar13;
              while (*pcVar12 == *pcVar14) {
                uVar10 = uVar10 - 1;
                pcVar12 = pcVar12 + 1;
                pcVar14 = pcVar14 + 1;
                if (uVar10 == 0) goto LAB_0011d4fc;
              }
            }
            else {
              iVar6 = memcmp((void *)plVar9[4],pcVar13,plVar9[3]);
              if (iVar6 == 0) goto LAB_0011d4fc;
            }
          }
        }
        else {
          if (uVar15 < 2) {
            uVar10 = uVar10 & uVar17 - 1;
          }
          else if (uVar17 <= uVar10) {
            uVar4 = 0;
            if (uVar17 != 0) {
              uVar4 = uVar10 / uVar17;
            }
            uVar10 = uVar10 - uVar4 * uVar17;
          }
          if (uVar10 != uVar16) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  sVar1 = (ulong)(local_e8[0] >> 1);
  pcVar13 = __s2;
  if ((local_e8[0] & 1) != 0) {
    sVar1 = local_e0;
    pcVar13 = local_d8;
  }
                    /* try { // try from 0011d584 to 0011d58b has its CatchHandler @ 0011d82c */
  uVar7 = FUN_0011bd70(&local_a0,pcVar13,sVar1);
  uVar17 = *(ulong *)(param_2 + 0x60);
  if (uVar17 != 0) {
    uVar19 = NEON_cnt(uVar17,1);
    uVar18 = NEON_uaddlv(uVar19,1);
    uVar15 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
    if (uVar15 < 2) {
      uVar16 = uVar17 - 1 & uVar7;
    }
    else {
      uVar16 = uVar7;
      if (uVar17 <= uVar7) {
        uVar16 = 0;
        if (uVar17 != 0) {
          uVar16 = uVar7 / uVar17;
        }
        uVar16 = uVar7 - uVar16 * uVar17;
      }
    }
    plVar9 = *(long **)(*(long *)(param_2 + 0x58) + uVar16 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      sVar1 = (ulong)(local_e8[0] >> 1);
      if ((local_e8[0] & 1) != 0) {
        __s2 = local_d8;
        sVar1 = local_e0;
      }
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
LAB_0011d6b0:
                    /* try { // try from 0011d6bc to 0011d6cb has its CatchHandler @ 0011d790 */
                (**(code **)(*(long *)plVar9[5] + 0x10))
                          (&local_a0,(long *)plVar9[5],param_3,param_2 + 0x20);
                *param_1 = 7;
                *(undefined ***)(param_1 + 2) = local_a0;
                goto LAB_0011d6f0;
              }
              pcVar13 = (char *)((long)plVar9 + 0x11);
              pcVar12 = __s2;
              while (*pcVar13 == *pcVar12) {
                uVar10 = uVar10 - 1;
                pcVar13 = pcVar13 + 1;
                pcVar12 = pcVar12 + 1;
                if (uVar10 == 0) goto LAB_0011d6b0;
              }
            }
            else {
              iVar6 = memcmp((void *)plVar9[4],__s2,plVar9[3]);
              if (iVar6 == 0) goto LAB_0011d6b0;
            }
          }
        }
        else {
          if (uVar15 < 2) {
            uVar10 = uVar10 & uVar17 - 1;
          }
          else if (uVar17 <= uVar10) {
            uVar4 = 0;
            if (uVar17 != 0) {
              uVar4 = uVar10 / uVar17;
            }
            uVar10 = uVar10 - uVar4 * uVar17;
          }
          if (uVar10 != uVar16) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  *param_1 = 0;
LAB_0011d6f0:
  if ((local_e8[0] & 1) != 0) {
    operator_delete(local_d8);
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011d834  FUN_0011d834 =====

void FUN_0011d834(undefined8 *param_1)

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


// ===== 0011d884  FUN_0011d884 =====

void FUN_0011d884(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00122c78;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0011d894  FUN_0011d894 =====

void FUN_0011d894(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00122c78;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0011d8c4  FUN_0011d8c4 =====

void FUN_0011d8c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0011d8cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0011d8d0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001230d8)();
  return;
}


// ===== 0011d8d4  FUN_0011d8d4 =====

void FUN_0011d8d4(undefined8 *param_1)

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


// ===== 0011d94c  FUN_0011d94c =====

void FUN_0011d94c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001153ec("vector");
}


// ===== 0011d960  FUN_0011d960 =====

void FUN_0011d960(void)

{
  return;
}


// ===== 0011d964  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001230d8)();
  return;
}


// ===== 0011d968  FUN_0011d968 =====

void FUN_0011d968(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_00122cc8;
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  puVar1[3] = uVar2;
  return;
}


// ===== 0011d9a8  FUN_0011d9a8 =====

void FUN_0011d9a8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00122cc8;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}


// ===== 0011d9c8  FUN_0011d9c8 =====

void FUN_0011d9c8(void)

{
  return;
}


// ===== 0011d9cc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001230d8)();
  return;
}


// ===== 0011d9d0  FUN_0011d9d0 =====

void FUN_0011d9d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0011d9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x18))(param_2,*(undefined8 *)(param_1 + 8),*param_4,*param_5);
  return;
}


// ===== 0011d9ec  FUN_0011d9ec =====

long FUN_0011d9ec(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00123040) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0011da08  FUN_0011da08 =====

undefined * FUN_0011da08(void)

{
  return PTR_typeinfo_00123048;
}


// ===== 0011da20  FUN_0011da20 =====

void FUN_0011da20(void)

{
  (*(code *)PTR_00123068)();
  return;
}


// ===== 0011da40  <EXTERNAL>::__cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00123070)();
  return;
}


// ===== 0011da50  <EXTERNAL>::__cxa_atexit =====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00123078)();
  return;
}


// ===== 0011da60  <EXTERNAL>::__register_atfork =====

void __register_atfork(void)

{
  (*(code *)PTR___register_atfork_00123080)();
  return;
}


// ===== 0011da70  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init_copy_ctor_external =====

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
__init_copy_ctor_external
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  (*(code *)PTR___init_copy_ctor_external_00123088)();
  return;
}


// ===== 0011da80  <EXTERNAL>::facebook::react::ShadowNode::getState =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::getState(void)

{
  (*(code *)PTR_getState_00123090)();
  return;
}


// ===== 0011da90  <EXTERNAL>::facebook::yoga::Node::setDirty =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::yoga::Node::setDirty(bool param_1)

{
  (*(code *)PTR_setDirty_00123098)(param_1);
  return;
}


// ===== 0011daa0  <EXTERNAL>::__cxa_allocate_exception =====

void __cxa_allocate_exception(void)

{
  (*(code *)PTR___cxa_allocate_exception_001230a0)();
  return;
}


// ===== 0011dab0  <EXTERNAL>::__cxa_free_exception =====

void __cxa_free_exception(void)

{
  (*(code *)PTR___cxa_free_exception_001230a8)();
  return;
}


// ===== 0011dac0  <EXTERNAL>::__cxa_throw =====

void __cxa_throw(void)

{
  (*(code *)PTR___cxa_throw_001230b0)();
  return;
}


// ===== 0011dad0  <EXTERNAL>::std::logic_error::logic_error =====

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
  (*(code *)PTR_logic_error_001230b8)();
  return;
}


// ===== 0011dae0  <EXTERNAL>::memcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_001230c0)((int)__s1);
  return iVar1;
}


// ===== 0011daf0  <EXTERNAL>::std::bad_array_new_length::bad_array_new_length =====

void __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
  (*(code *)PTR_bad_array_new_length_001230c8)();
  return;
}


// ===== 0011db00  <EXTERNAL>::operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_001230d0)();
  return pvVar1;
}


// ===== 0011db10  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001230d8)();
  return;
}


// ===== 0011db20  <EXTERNAL>::std::__ndk1::__shared_weak_count::__release_weak =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__release_weak(void)

{
  (*(code *)PTR___release_weak_001230e0)();
  return;
}


// ===== 0011db30  <EXTERNAL>::folly::dynamic::operator[] =====

void folly::dynamic::operator[](void)

{
  (*(code *)PTR_operator___001230e8)();
  return;
}


// ===== 0011db40  <EXTERNAL>::folly::dynamic::operator= =====

void __thiscall folly::dynamic::operator=(dynamic *this,dynamic *param_1)

{
  (*(code *)PTR_operator__001230f0)();
  return;
}


// ===== 0011db50  <EXTERNAL>::folly::dynamic::destroy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::dynamic::destroy(void)

{
  (*(code *)PTR_destroy_001230f8)();
  return;
}


// ===== 0011db60  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc =====

void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc(void)

{
  (*(code *)
    PTR__ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc_00123100
  )();
  return;
}


// ===== 0011db70  <EXTERNAL>::facebook::react::ComponentDescriptorProviderRegistry::add =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ComponentDescriptorProviderRegistry::add(ComponentDescriptorProvider *param_1)

{
  (*(code *)PTR_add_00123108)();
  return;
}


// ===== 0011db80  <EXTERNAL>::__cxa_begin_catch =====

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_00123110)();
  return;
}


// ===== 0011db90  <EXTERNAL>::std::terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
  (*(code *)PTR_terminate_00123118)();
  return;
}


// ===== 0011dba0  <EXTERNAL>::facebook::react::ComponentDescriptor::ComponentDescriptor =====

void __thiscall
facebook::react::ComponentDescriptor::ComponentDescriptor
          (ComponentDescriptor *this,ComponentDescriptorParameters *param_1,RawPropsParser *param_2)

{
  (*(code *)PTR_ComponentDescriptor_00123120)();
  return;
}


// ===== 0011dbb0  <EXTERNAL>::facebook::react::RawProps::parse =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::parse(RawPropsParser *param_1)

{
  (*(code *)PTR_parse_00123128)();
  return;
}


// ===== 0011dbc0  <EXTERNAL>::facebook::react::RawPropsParser::postPrepare =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawPropsParser::postPrepare(void)

{
  (*(code *)PTR_postPrepare_00123130)();
  return;
}


// ===== 0011dbd0  <EXTERNAL>::facebook::jsi::Value::~Value =====

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
  (*(code *)PTR__Value_00123138)();
  return;
}


// ===== 0011dbe0  <EXTERNAL>::std::__ndk1::__shared_mutex_base::__shared_mutex_base =====

void __thiscall std::__ndk1::__shared_mutex_base::__shared_mutex_base(__shared_mutex_base *this)

{
  (*(code *)PTR___shared_mutex_base_00123140)();
  return;
}


// ===== 0011dbf0  <EXTERNAL>::std::__ndk1::condition_variable::~condition_variable =====

void __thiscall std::__ndk1::condition_variable::~condition_variable(condition_variable *this)

{
  (*(code *)PTR__condition_variable_00123148)();
  return;
}


// ===== 0011dc00  <EXTERNAL>::std::__ndk1::mutex::~mutex =====

void __thiscall std::__ndk1::mutex::~mutex(mutex *this)

{
  (*(code *)PTR__mutex_00123150)();
  return;
}


// ===== 0011dc10  <EXTERNAL>::std::__ndk1::__shared_weak_count::~__shared_weak_count =====

void __thiscall std::__ndk1::__shared_weak_count::~__shared_weak_count(__shared_weak_count *this)

{
  (*(code *)PTR____shared_weak_count_00123158)();
  return;
}


// ===== 0011dc20  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::completeClone =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::completeClone
               (ShadowNode *param_1,ShadowNodeFragment *param_2)

{
  (*(code *)PTR_completeClone_00123160)();
  return;
}


// ===== 0011dc30  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode =====

void __thiscall facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(void)

{
  (*(code *)PTR_YogaLayoutableShadowNode_00123168)();
  return;
}


// ===== 0011dc40  <EXTERNAL>::facebook::jsi::NativeState::~NativeState =====

void __thiscall facebook::jsi::NativeState::~NativeState(NativeState *this)

{
  (*(code *)PTR__NativeState_00123170)();
  return;
}


// ===== 0011dc50  <EXTERNAL>::facebook::react::LayoutableShadowNode::getLayoutMetrics =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::getLayoutMetrics(void)

{
  (*(code *)PTR_getLayoutMetrics_00123178)();
  return;
}


// ===== 0011dc60  <EXTERNAL>::facebook::react::BaseViewProps::resolveTransform =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::BaseViewProps::resolveTransform(LayoutMetrics *param_1)

{
  (*(code *)PTR_resolveTransform_00123180)();
  return;
}


// ===== 0011dc70  <EXTERNAL>::facebook::react::ShadowNode::transferRuntimeShadowNodeReference =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::transferRuntimeShadowNodeReference
               (shared_ptr *param_1,ShadowNodeFragment *param_2)

{
  (*(code *)PTR_transferRuntimeShadowNodeReference_00123188)();
  return;
}


// ===== 0011dc80  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode =====

void __thiscall
facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
          (YogaLayoutableShadowNode *this,ShadowNode *param_1,ShadowNodeFragment *param_2)

{
  (*(code *)PTR_YogaLayoutableShadowNode_00123190)();
  return;
}


// ===== 0011dc90  <EXTERNAL>::facebook::react::RawProps::isEmpty =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::isEmpty(void)

{
  (*(code *)PTR_isEmpty_00123198)();
  return;
}


// ===== 0011dca0  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid(void)

{
  (*(code *)PTR_enableExclusivePropsUpdateAndroid_001231a0)();
  return;
}


// ===== 0011dcb0  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid(void)

{
  (*(code *)PTR_enableAccumulatedUpdatesInRawPropsAndroid_001231a8)();
  return;
}


// ===== 0011dcc0  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(void)

{
  (*(code *)PTR_enablePropsUpdateReconciliationAndroid_001231b0)();
  return;
}


// ===== 0011dcd0  <EXTERNAL>::strcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_001231b8)((int)__s1);
  return iVar1;
}


// ===== 0011dce0  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter(void)

{
  (*(code *)PTR_enableCppPropsIteratorSetter_001231c0)();
  return;
}


// ===== 0011dcf0  <EXTERNAL>::folly::dynamic::dynamic =====

void __thiscall folly::dynamic::dynamic(dynamic *this,dynamic *param_1)

{
  (*(code *)PTR_dynamic_001231c8)();
  return;
}


// ===== 0011dd00  <EXTERNAL>::facebook::react::RawProps::operator.cast.to.dynamic =====

void __thiscall facebook::react::RawProps::operator_cast_to_dynamic(RawProps *this)

{
  (*(code *)PTR_operator_cast_to_dynamic_001231d0)();
  return;
}


// ===== 0011dd10  <EXTERNAL>::facebook::react::HostPlatformViewProps::setProp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::HostPlatformViewProps::setProp
               (PropsParserContext *param_1,uint param_2,char *param_3,RawValue *param_4)

{
  (*(code *)PTR_setProp_001231d8)(param_1,param_2);
  return;
}


// ===== 0011dd20  <EXTERNAL>::__cxa_guard_acquire =====

void __cxa_guard_acquire(void)

{
  (*(code *)PTR___cxa_guard_acquire_001231e0)();
  return;
}


// ===== 0011dd30  <EXTERNAL>::__cxa_guard_abort =====

void __cxa_guard_abort(void)

{
  (*(code *)PTR___cxa_guard_abort_001231e8)();
  return;
}


// ===== 0011dd40  <EXTERNAL>::__cxa_guard_release =====

void __cxa_guard_release(void)

{
  (*(code *)PTR___cxa_guard_release_001231f0)();
  return;
}


// ===== 0011dd50  <EXTERNAL>::facebook::react::Props::initializeDynamicProps =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::Props::initializeDynamicProps
               (Props *param_1,RawProps *param_2,function *param_3)

{
  (*(code *)PTR_initializeDynamicProps_001231f8)();
  return;
}


// ===== 0011dd60  <EXTERNAL>::folly::TypeError::TypeError =====

void __thiscall folly::TypeError::TypeError(void)

{
  (*(code *)PTR_TypeError_00123200)();
  return;
}


// ===== 0011dd70  <EXTERNAL>::std::runtime_error::~runtime_error =====

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
  (*(code *)PTR__runtime_error_00123208)();
  return;
}


// ===== 0011dd80  <EXTERNAL>::std::runtime_error::runtime_error =====

void __thiscall std::runtime_error::runtime_error(runtime_error *this,runtime_error *param_1)

{
  (*(code *)PTR_runtime_error_00123210)();
  return;
}


// ===== 0011dd90  <EXTERNAL>::strlen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00123218)();
  return sVar1;
}


// ===== 0011dda0  <EXTERNAL>::facebook::react::EventEmitter::setShadowNodeFamily =====

void facebook::react::EventEmitter::setShadowNodeFamily(void)

{
  (*(code *)PTR_setShadowNodeFamily_00123220)();
  return;
}


// ===== 0011ddb0  <EXTERNAL>::facebook::react::EventEmitter::EventEmitter =====

void __thiscall facebook::react::EventEmitter::EventEmitter(void)

{
  (*(code *)PTR_EventEmitter_00123228)();
  return;
}


// ===== 0011ddc0  <EXTERNAL>::facebook::react::EventTarget::EventTarget =====

void __thiscall facebook::react::EventTarget::EventTarget(void)

{
  (*(code *)PTR_EventTarget_00123230)();
  return;
}


// ===== 0011ddd0  <EXTERNAL>::facebook::react::ShadowNodeFamily::ShadowNodeFamily =====

void __thiscall facebook::react::ShadowNodeFamily::ShadowNodeFamily(void)

{
  (*(code *)PTR_ShadowNodeFamily_00123238)();
  return;
}


// ===== 0011dde0  <EXTERNAL>::facebook::react::ShadowNodeFamily::~ShadowNodeFamily =====

void __thiscall facebook::react::ShadowNodeFamily::~ShadowNodeFamily(ShadowNodeFamily *this)

{
  (*(code *)PTR__ShadowNodeFamily_00123240)();
  return;
}


// ===== 0011ddf0  <EXTERNAL>::facebook::react::EventEmitter::dispatchEvent =====

void facebook::react::EventEmitter::dispatchEvent(void)

{
  (*(code *)PTR_dispatchEvent_00123248)();
  return;
}


// ===== 0011de00  <EXTERNAL>::facebook::jsi::Value::~Value =====

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
  (*(code *)PTR__Value_00123250)();
  return;
}


// ===== 0011de10  <EXTERNAL>::facebook::react::HostPlatformViewProps::HostPlatformViewProps =====

void __thiscall
facebook::react::HostPlatformViewProps::HostPlatformViewProps
          (HostPlatformViewProps *this,PropsParserContext *param_1,HostPlatformViewProps *param_2,
          RawProps *param_3,function *param_4)

{
  (*(code *)PTR_HostPlatformViewProps_00123258)();
  return;
}


// ===== 0011de20  <EXTERNAL>::facebook::react::HostPlatformViewProps::getDiffProps =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::HostPlatformViewProps::getDiffProps(Props *param_1)

{
  (*(code *)PTR_getDiffProps_00123260)();
  return;
}


// ===== 0011de30  <EXTERNAL>::folly::dynamic::operator= =====

void __thiscall folly::dynamic::operator=(dynamic *this,dynamic *param_1)

{
  (*(code *)PTR_operator__00123268)();
  return;
}


// ===== 0011de40  <EXTERNAL>::abort =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00123270)();
  return;
}


// ===== 0011de50  <EXTERNAL>::facebook::react::RawProps::at =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::at(char *param_1,char *param_2,char *param_3)

{
  (*(code *)PTR_at_00123278)();
  return;
}


// ===== 0011de60  <EXTERNAL>::google::LogMessage::LogMessage =====

void __thiscall
google::LogMessage::LogMessage(LogMessage *this,char *param_1,int param_2,int param_3)

{
  (*(code *)PTR_LogMessage_00123280)(this,param_1,param_2,param_3);
  return;
}


// ===== 0011de70  <EXTERNAL>::google::LogMessage::stream =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void google::LogMessage::stream(void)

{
  (*(code *)PTR_stream_00123288)();
  return;
}


// ===== 0011de80  <EXTERNAL>::facebook::react::RawPropsKey::operator.cast.to.basic_string =====

void __thiscall facebook::react::RawPropsKey::operator_cast_to_basic_string(RawPropsKey *this)

{
  (*(code *)PTR_operator_cast_to_basic_string_00123290)();
  return;
}


// ===== 0011de90  <EXTERNAL>::google::LogMessage::~LogMessage =====

void __thiscall google::LogMessage::~LogMessage(LogMessage *this)

{
  (*(code *)PTR__LogMessage_00123298)();
  return;
}


// ===== 0011dea0  <EXTERNAL>::__cxa_end_catch =====

void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_001232a0)();
  return;
}


// ===== 0011deb0  <EXTERNAL>::facebook::jsi::Value::asString =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asString(IRuntime *param_1)

{
  (*(code *)PTR_asString_001232a8)();
  return;
}


// ===== 0011dec0  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry =====

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry
          (sentry *this,basic_ostream *param_1)

{
  (*(code *)PTR_sentry_001232b0)();
  return;
}


// ===== 0011ded0  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry =====

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(sentry *this)

{
  (*(code *)PTR__sentry_001232b8)();
  return;
}


// ===== 0011dee0  <EXTERNAL>::std::__ndk1::ios_base::__set_badbit_and_consider_rethrow =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::__set_badbit_and_consider_rethrow(void)

{
  (*(code *)PTR___set_badbit_and_consider_rethrow_001232c0)();
  return;
}


// ===== 0011def0  <EXTERNAL>::std::__ndk1::ios_base::getloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::getloc(void)

{
  (*(code *)PTR_getloc_001232c8)();
  return;
}


// ===== 0011df00  <EXTERNAL>::std::__ndk1::locale::~locale =====

void __thiscall std::__ndk1::locale::~locale(locale *this)

{
  (*(code *)PTR__locale_001232d0)();
  return;
}


// ===== 0011df10  <EXTERNAL>::std::__ndk1::locale::use_facet =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::locale::use_facet(id *param_1)

{
  (*(code *)PTR_use_facet_001232d8)();
  return;
}


// ===== 0011df20  <EXTERNAL>::std::__ndk1::ios_base::clear =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::clear(uint param_1)

{
  (*(code *)PTR_clear_001232e0)(param_1);
  return;
}


// ===== 0011df30  <EXTERNAL>::folly::dynamic::dynamic =====

void __thiscall folly::dynamic::dynamic(dynamic *this,dynamic *param_1)

{
  (*(code *)PTR_dynamic_001232e8)();
  return;
}


// ===== 0011df40  <EXTERNAL>::std::__ndk1::__next_prime =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__next_prime(ulong param_1)

{
  (*(code *)PTR___next_prime_001232f0)();
  return;
}


// ===== 0011df50  <EXTERNAL>::facebook::jsi::Value::Value =====

void __thiscall facebook::jsi::Value::Value(Value *this,Value *param_1)

{
  (*(code *)PTR_Value_001232f8)();
  return;
}


// ===== 0011df60  <EXTERNAL>::facebook::jsi::Value::Value =====

void __thiscall facebook::jsi::Value::Value(Value *this,IRuntime *param_1,Value *param_2)

{
  (*(code *)PTR_Value_00123300)();
  return;
}


// ===== 0011df70  facebook::react::NativeSafeAreaContextSpecJSI::NativeSafeAreaContextSpecJSI =====

void __thiscall
facebook::react::NativeSafeAreaContextSpecJSI::NativeSafeAreaContextSpecJSI
          (NativeSafeAreaContextSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeSafeAreaContextSpecJSI_00123308)();
  return;
}


// ===== 0011df80  <EXTERNAL>::facebook::react::JavaTurboModule::JavaTurboModule =====

void __thiscall
facebook::react::JavaTurboModule::JavaTurboModule(JavaTurboModule *this,InitParams *param_1)

{
  (*(code *)PTR_JavaTurboModule_00123310)();
  return;
}


// ===== 0011df90  <EXTERNAL>::facebook::react::JavaTurboModule::~JavaTurboModule =====

void __thiscall facebook::react::JavaTurboModule::~JavaTurboModule(JavaTurboModule *this)

{
  (*(code *)PTR__JavaTurboModule_00123318)();
  return;
}


// ===== 0011dfa0  <EXTERNAL>::facebook::react::JavaTurboModule::invokeJavaMethod =====

void facebook::react::JavaTurboModule::invokeJavaMethod(void)

{
  (*(code *)PTR_invokeJavaMethod_00123320)();
  return;
}


// ===== 0011dfb0  <EXTERNAL>::facebook::jsi::Value::asObject =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asObject(IRuntime *param_1)

{
  (*(code *)PTR_asObject_00123328)();
  return;
}


// ===== 0011dfc0  <EXTERNAL>::dl_iterate_phdr =====

void dl_iterate_phdr(void)

{
  (*(code *)PTR_dl_iterate_phdr_00123330)();
  return;
}


// ===== 0011dfd0  <EXTERNAL>::fwrite =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00123338)();
  return sVar1;
}


// ===== 0011dfe0  <EXTERNAL>::memmove =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00123340)();
  return pvVar1;
}


// ===== 0011dff0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00123348)();
  return;
}


// ===== 0011e000  <EXTERNAL>::malloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00123350)();
  return pvVar1;
}


// ===== 0011e010  <EXTERNAL>::strncmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00123358)((int)__s1);
  return iVar1;
}


// ===== 0011e020  <EXTERNAL>::fprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00123360)((int)__stream);
  return iVar1;
}


// ===== 0011e030  <EXTERNAL>::__stack_chk_fail =====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00123368)();
  return;
}


// ===== 0011e040  <EXTERNAL>::pthread_rwlock_wrlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_wrlock_00123370)((int)__rwlock);
  return iVar1;
}


// ===== 0011e050  <EXTERNAL>::syscall =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_syscall_00123378)();
  return lVar1;
}


// ===== 0011e060  <EXTERNAL>::pthread_rwlock_unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_unlock_00123380)((int)__rwlock);
  return iVar1;
}


// ===== 0011e070  <EXTERNAL>::memcpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00123388)();
  return pvVar1;
}


// ===== 0011e080  <EXTERNAL>::getauxval =====

void getauxval(void)

{
  (*(code *)PTR_getauxval_00123390)();
  return;
}


// ===== 0011e090  <EXTERNAL>::__system_property_get =====

void __system_property_get(void)

{
  (*(code *)PTR___system_property_get_00123398)();
  return;
}


// ===== 0011e0a0  <EXTERNAL>::getpid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_001233a0)();
  return _Var1;
}


// ===== 0011e0b0  <EXTERNAL>::pthread_rwlock_rdlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_rdlock_001233a8)((int)__rwlock);
  return iVar1;
}


// ===== 0011e0c0  <EXTERNAL>::memset =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_001233b0)(__s,__c);
  return pvVar1;
}


// ===== 0011e0d0  <EXTERNAL>::fflush =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_001233b8)((int)__stream);
  return iVar1;
}


// ===== 00129000  <EXTERNAL>::__cxa_finalize =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129008  <EXTERNAL>::__cxa_atexit =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129010  <EXTERNAL>::__register_atfork =====

/* WARNING: Control flow encountered bad instruction data */

void __register_atfork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129018  <EXTERNAL>::facebook::react::ShadowNode::getState =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::getState(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129020  <EXTERNAL>::__gxx_personality_v0 =====

/* WARNING: Control flow encountered bad instruction data */

void __gxx_personality_v0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129028  <EXTERNAL>::facebook::yoga::Node::setDirty =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::yoga::Node::setDirty(bool param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129030  <EXTERNAL>::__cxa_allocate_exception =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_allocate_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129038  <EXTERNAL>::__cxa_free_exception =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_free_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129040  <EXTERNAL>::std::out_of_range::~out_of_range =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::out_of_range::~out_of_range(out_of_range *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129048  <EXTERNAL>::__cxa_throw =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_throw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129050  <EXTERNAL>::std::logic_error::logic_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129058  <EXTERNAL>::memcmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129060  <EXTERNAL>::std::length_error::~length_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::length_error::~length_error(length_error *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129068  <EXTERNAL>::std::bad_array_new_length::bad_array_new_length =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129070  <EXTERNAL>::std::bad_array_new_length::~bad_array_new_length =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_array_new_length::~bad_array_new_length(bad_array_new_length *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129078  <EXTERNAL>::operator.new =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129080  <EXTERNAL>::operator.delete =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129088  <EXTERNAL>::std::__ndk1::__shared_weak_count::__release_weak =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__release_weak(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001290b8  <EXTERNAL>::folly::dynamic::operator[] =====

/* WARNING: Control flow encountered bad instruction data */

void folly::dynamic::operator[](void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001290c0  <EXTERNAL>::folly::dynamic::operator= =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall folly::dynamic::operator=(dynamic *this,dynamic *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001290c8  <EXTERNAL>::folly::dynamic::destroy =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::dynamic::destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001290d0  <EXTERNAL>::facebook::react::ComponentDescriptorProviderRegistry::add =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ComponentDescriptorProviderRegistry::add(ComponentDescriptorProvider *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001290d8  <EXTERNAL>::__cxa_begin_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_begin_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001290e0  <EXTERNAL>::std::terminate =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001290e8  <EXTERNAL>::facebook::react::ComponentDescriptor::ComponentDescriptor =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
facebook::react::ComponentDescriptor::ComponentDescriptor
          (ComponentDescriptor *this,ComponentDescriptorParameters *param_1,RawPropsParser *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001290f0  <EXTERNAL>::facebook::react::RawProps::parse =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::parse(RawPropsParser *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001290f8  <EXTERNAL>::facebook::react::RawPropsParser::postPrepare =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawPropsParser::postPrepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129100  <EXTERNAL>::facebook::jsi::Value::~Value =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129108  <EXTERNAL>::std::__ndk1::__shared_mutex_base::__shared_mutex_base =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::__shared_mutex_base::__shared_mutex_base(__shared_mutex_base *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129110  <EXTERNAL>::std::__ndk1::condition_variable::~condition_variable =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::condition_variable::~condition_variable(condition_variable *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129118  <EXTERNAL>::std::__ndk1::mutex::~mutex =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::mutex::~mutex(mutex *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129120  <EXTERNAL>::__cxa_pure_virtual =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_pure_virtual(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129128  <EXTERNAL>::std::__ndk1::__shared_weak_count::~__shared_weak_count =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::__shared_weak_count::~__shared_weak_count(__shared_weak_count *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129130  <EXTERNAL>::std::__ndk1::__shared_weak_count::__get_deleter =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__get_deleter(type_info *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129138  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::completeClone =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::completeClone
               (ShadowNode *param_1,ShadowNodeFragment *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129140  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::appendChild =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::appendChild(shared_ptr *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129148  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::replaceChild =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::replaceChild
               (ShadowNode *param_1,shared_ptr *param_2,ulong param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129150  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::layoutTree =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::YogaLayoutableShadowNode::layoutTree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129158  <EXTERNAL>::facebook::react::LayoutableShadowNode::measureContent =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::measureContent
               (LayoutContext *param_1,LayoutConstraints *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129160  <EXTERNAL>::facebook::react::LayoutableShadowNode::measure =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::measure
               (LayoutContext *param_1,LayoutConstraints *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129168  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::layout =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::YogaLayoutableShadowNode::layout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129170  <EXTERNAL>::facebook::react::LayoutableShadowNode::getContentOriginOffset =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::getContentOriginOffset(bool param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129178  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::dirtyLayout =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::dirtyLayout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129180  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::getIsLayoutClean =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::getIsLayoutClean(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129188  <EXTERNAL>::facebook::react::LayoutableShadowNode::baseline =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::LayoutableShadowNode::baseline(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129190  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::shouldNewRevisionDirtyMeasurement =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::shouldNewRevisionDirtyMeasurement
               (ShadowNode *param_1,ShadowNodeFragment *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00129198  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001291a0  <EXTERNAL>::facebook::jsi::NativeState::~NativeState =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::NativeState::~NativeState(NativeState *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001291a8  <EXTERNAL>::facebook::react::LayoutableShadowNode::getLayoutMetrics =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::getLayoutMetrics(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001291b0  <EXTERNAL>::facebook::react::BaseViewProps::resolveTransform =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::BaseViewProps::resolveTransform(LayoutMetrics *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001291b8  <EXTERNAL>::facebook::react::ShadowNode::transferRuntimeShadowNodeReference =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::transferRuntimeShadowNodeReference
               (shared_ptr *param_1,ShadowNodeFragment *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001291c0  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
          (YogaLayoutableShadowNode *this,ShadowNode *param_1,ShadowNodeFragment *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001291c8  <EXTERNAL>::facebook::react::RawProps::isEmpty =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::isEmpty(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001291d0  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001291d8  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001291e0  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001291e8  <EXTERNAL>::strcmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001291f0  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001291f8  <EXTERNAL>::folly::dynamic::dynamic =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall folly::dynamic::dynamic(dynamic *this,dynamic *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


