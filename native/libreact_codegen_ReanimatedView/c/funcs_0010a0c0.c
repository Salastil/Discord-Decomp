// ===== 0010a0c0  _FINI_1 =====

void _FINI_1(void)

{
  __cxa_finalize(&PTR_LOOP_00116750);
  return;
}


// ===== 0010a0d0  FUN_0010a0d0 =====

void FUN_0010a0d0(void)

{
  return;
}


// ===== 0010a0d8  _FINI_0 =====

void _FINI_0(void)

{
  FUN_0010a0d0();
  return;
}


// ===== 0010a0e0  FUN_0010a0e0 =====

void FUN_0010a0e0(code *UNRECOVERED_JUMPTABLE)

{
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010a0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


// ===== 0010a0f4  FUN_0010a0f4 =====

void FUN_0010a0f4(undefined8 param_1)

{
  __cxa_atexit(FUN_0010a0e0,param_1,&PTR_LOOP_00116750);
  return;
}


// ===== 0010a110  FUN_0010a110 =====

void FUN_0010a110(void)

{
  __register_atfork();
  return;
}


// ===== 0010a120  facebook::react::ReanimatedView_ModuleProvider =====

/* facebook::react::ReanimatedView_ModuleProvider(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   facebook::react::JavaTurboModule::InitParams const&) */

void facebook::react::ReanimatedView_ModuleProvider(basic_string *param_1,InitParams *param_2)

{
  undefined8 *in_x8;
  
  *in_x8 = 0;
  in_x8[1] = 0;
  return;
}


// ===== 0010a130  FUN_0010a130 =====

long FUN_0010a130(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_0011b640 == '\0') {
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


// ===== 0010a160  _INIT_0 =====

void _INIT_0(void)

{
  uint uVar1;
  int iVar2;
  char acStack_6c [92];
  
  uVar1 = getauxval(0x10);
  if ((uVar1 >> 8 & 1) == 0) {
    DAT_0011b640 = 0;
    return;
  }
  iVar2 = __system_property_get("ro.arch",acStack_6c);
  if (0 < iVar2) {
    iVar2 = strncmp(acStack_6c,"exynos9810",10);
    DAT_0011b640 = iVar2 != 0;
    return;
  }
  DAT_0011b640 = 1;
  return;
}


// ===== 0010a1f8  FUN_0010a1f8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0010a1f8(ulong param_1,long param_2)

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
    DAT_0011b648 = DAT_0011b648 | 0x400;
  }
  uVar2 = (uint)uVar4;
  if ((uVar3 >> 4 & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x8000;
  }
  if ((uVar3 >> 0x1b & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 2;
  }
  if ((uVar2 >> 7 & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 6;
  }
  if ((~uVar3 & 0xc0000) == 0) {
    DAT_0011b648 = DAT_0011b648 | 0x20;
  }
  if ((uVar3 >> 0x14 & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x10;
  }
  if ((uVar3 >> 0x17 & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 8;
  }
  if ((uVar3 >> 9 & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x10100;
  }
  if ((uVar3 >> 0x18 & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x20000;
  }
  if ((uVar3 >> 0xc & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x40;
  }
  if ((uVar3 >> 0x1a & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x800000;
  }
  if ((uVar3 >> 3 & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x4000;
  }
  if ((uVar3 >> 5 & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x800;
  }
  if ((uVar3 >> 6 & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x1000;
  }
  if ((uVar3 >> 0xd & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x100000;
  }
  if ((uVar3 >> 0xe & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x200000;
  }
  if ((uVar3 >> 0x1d & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x400000000000;
  }
  if ((uVar3 >> 0x1c & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x2000000000000;
  }
  if ((uVar2 >> 0x12 & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x180000000000;
  }
  if ((uVar2 >> 0x16 & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x380000000000;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x2000000000;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x6000000000;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x8000000000;
  }
  if ((uVar2 >> 5 & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x10000000000;
  }
  if ((uVar2 >> 6 & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x20000000000;
  }
  if ((uVar4 & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x80000;
  }
  if ((uVar3 >> 8 & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x80;
  }
  if ((uVar2 >> 0x10 & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 1;
  }
  if ((uVar2 >> 0xd & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x4000000;
  }
  if ((uVar4 >> 0x20 & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x10000000;
  }
  if ((uVar4 >> 0x21 & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x100000000;
  }
  if ((uVar2 >> 0xf & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x2000000;
  }
  if ((uVar2 >> 8 & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x1000000;
  }
  if ((uVar2 >> 9 & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x200000000;
  }
  if ((uVar2 >> 10 & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x400000000;
  }
  if ((uVar2 >> 0xb & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x800000000;
  }
  if ((uVar2 >> 0x11 & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x4000000000000;
  }
  if ((uVar2 >> 0x15 & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x20000000;
  }
  if ((int)uVar2 < 0) {
    DAT_0011b648 = DAT_0011b648 | 0x40000000000000;
  }
  if ((uVar2 >> 0x17 & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x40000000000;
  }
  if ((uVar2 >> 0x18 & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x100000000000000;
  }
  if ((uVar2 >> 0x19 & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x80000000000000;
  }
  if ((uVar4 >> 0x2b & 1) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x800000000000000;
  }
  if ((uVar3 >> 0xb & 1) == 0) {
    if ((param_1 & 0x201) != 0) {
      DAT_0011b648 = DAT_0011b648 | 0x300;
    }
    if ((uVar4 & 1) != 0 || (param_1 & 0x10000) != 0) {
      DAT_0011b648 = DAT_0011b648 | 0x40000;
    }
    if ((param_1 & 0x4008000) != 0) {
      DAT_0011b648 = DAT_0011b648 | 0x400000;
    }
    if ((uVar4 & 0x100004000) != 0) {
      DAT_0011b648 = DAT_0011b648 | 0x8000000;
    }
    uVar5 = DAT_0011b648 | (ulong)(uVar2 << 0x13) & 0x80000000;
    if ((uVar4 & 2) != 0 && (param_1 & 0x400000) != 0) {
      uVar5 = uVar5 | 0x1000000000;
    }
    uVar5 = uVar5 | (param_1 & 0x20000) >> 4;
    goto LAB_0010a360;
  }
  uVar4 = id_aa64pfr1_el1;
  if ((uVar4 & 0xf00) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x80000000000;
  }
  if ((uVar4 & 0xf0) == 0x10) {
    DAT_0011b648 = DAT_0011b648 | 0x1000000000000;
    if ((uVar4 & 0xf000000) != 0x2000000) goto LAB_0010a650;
LAB_0010a6a4:
    DAT_0011b648 = DAT_0011b648 | 0x200000000000000;
    uVar4 = id_aa64pfr0_el1;
    uVar3 = (uint)uVar4;
  }
  else {
    if ((uVar4 & 0xf000000) == 0x2000000) goto LAB_0010a6a4;
LAB_0010a650:
    uVar4 = id_aa64pfr0_el1;
    uVar3 = (uint)uVar4;
  }
  if ((~uVar3 & 0xf0000) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x300;
  }
  if ((uVar4 & 0xf00000000) != 0) {
    uVar4 = UnkSytemRegRead(3,0,0,4,4);
    if ((uVar4 & 0xf) == 1) {
      DAT_0011b648 = DAT_0011b648 | 0x1000000000;
    }
    else if ((uVar4 & 0xf) == 0) {
      DAT_0011b648 = DAT_0011b648 | 0x40000000;
    }
    if ((uVar4 & 0xf00000) != 0) {
      DAT_0011b648 = DAT_0011b648 | 0x80000000;
    }
  }
  uVar4 = id_aa64isar0_el1;
  if ((uVar4 & 0xf00000000) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x2000;
  }
  uVar4 = id_aa64isar1_el1;
  uVar5 = uVar4 >> 0x14 & 0xf;
  if ((uVar4 & 0xf) != 0) {
    DAT_0011b648 = DAT_0011b648 | 0x40000;
  }
  if (uVar5 != 0) {
    if (uVar5 == 3) {
      DAT_0011b648 = DAT_0011b648 | 0x400000000400000;
    }
    else {
      DAT_0011b648 = DAT_0011b648 | 0x400000;
    }
  }
  uVar5 = DAT_0011b648 | 0x800000000000;
  if ((uVar4 & 0xf0000000000) != 0x20000000000) {
    uVar5 = DAT_0011b648;
  }
  if ((uVar4 & 0xf00000000000) != 0) {
    uVar5 = uVar5 | 0x8000000;
  }
  if (uVar4 >> 0x3c != 0) {
    if (uVar4 >> 0x3d == 0) {
      DAT_0011b648 = uVar5 | 0x8008000000000000;
      return;
    }
    uVar1 = 0x38000000000000;
    if (uVar4 >> 0x3c < 3) {
      uVar1 = 0x18000000000000;
    }
    DAT_0011b648 = uVar5 | uVar1 | 0x8000000000000000;
    return;
  }
LAB_0010a360:
  DAT_0011b648 = uVar5 | 0x8000000000000000;
  return;
}


// ===== 0010a794  _INIT_1 =====

void _INIT_1(void)

{
  int iVar1;
  ulong uVar2;
  char local_70 [8];
  ulong uStack_68;
  undefined8 local_60;
  
  if (DAT_0011b648 != 0) {
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
    FUN_0010a1f8(uVar2 | 0x4000000000000000,local_70);
  }
  return;
}


// ===== 0010a820  FUN_0010a820 =====

undefined8 FUN_0010a820(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_80 [24];
  code *local_68;
  long local_38;
  
  FUN_0010ab68(param_2,param_1);
  iVar2 = FUN_0010ac8c(param_2);
  while( true ) {
    if (iVar2 == 0) {
      return 5;
    }
    if (iVar2 < 0) break;
    FUN_0010ac10(param_2,0xfffffffe,&local_38);
    iVar2 = FUN_0010aca0(param_2,auStack_80);
    if (iVar2 != 0) {
      return 2;
    }
    if (local_68 != (code *)0x0) {
      uVar3 = 6;
      if (local_38 != param_3[3]) {
        uVar3 = 2;
      }
      iVar2 = (*local_68)(1,uVar3,*param_3,param_3,param_2);
      puVar1 = PTR___sF_00117328;
      if (iVar2 != 8) {
        if (iVar2 != 7) {
          return 2;
        }
        FUN_0010ace0(param_2);
        return 2;
      }
      if (local_38 == param_3[3]) {
        fprintf((FILE *)(PTR___sF_00117328 + 0x130),"libunwind: %s - %s\n","unwind_phase2",
                "during phase1 personality function said it would stop here, but now in phase2 it did not stop here"
               );
        fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    iVar2 = FUN_0010ac8c(param_2);
  }
  return 2;
}


// ===== 0010a954  FUN_0010a954 =====

void FUN_0010a954(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_4a0 [624];
  undefined1 auStack_230 [528];
  
  FUN_0010aacc(auStack_230);
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_0010a820(auStack_230,auStack_4a0,param_1);
  }
  else {
    FUN_0010a9d8(auStack_230,auStack_4a0,param_1,*(long *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = PTR___sF_00117328;
  fprintf((FILE *)(PTR___sF_00117328 + 0x130),"libunwind: %s - %s\n","_Unwind_Resume",
          "_Unwind_Resume() can\'t return");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0010a9d8  FUN_0010a9d8 =====

void FUN_0010a9d8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,code *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_78 [24];
  code *local_60;
  
  FUN_0010ab68(param_2,param_1);
  iVar1 = FUN_0010ac8c(param_2);
  while( true ) {
    if (iVar1 < 1) {
      (*param_4)(1,0x1a,*param_3,param_3,param_2,param_5);
      return;
    }
    iVar1 = FUN_0010aca0(param_2,auStack_78);
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
      FUN_0010ace0(param_2);
    }
    iVar1 = FUN_0010ac8c(param_2);
  }
  return;
}


// ===== 0010aacc  FUN_0010aacc =====

undefined8
FUN_0010aacc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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


// ===== 0010ab68  FUN_0010ab68 =====

undefined8 FUN_0010ab68(undefined8 *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = &PTR_FUN_00116768;
  param_1[1] = &DAT_0011b650;
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
  FUN_0010b530(param_1,0);
  return 0;
}


// ===== 0010ac10  FUN_0010ac10 =====

undefined8 FUN_0010ac10(long *param_1,undefined4 param_2,undefined8 *param_3)

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


// ===== 0010ac8c  FUN_0010ac8c =====

void FUN_0010ac8c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010ac9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,1);
  return;
}


// ===== 0010aca0  FUN_0010aca0 =====

undefined4 FUN_0010aca0(long *param_1,long param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x48))();
  uVar1 = 0xffffe66b;
  if (*(long *)(param_2 + 8) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 0010ace0  FUN_0010ace0 =====

undefined8 FUN_0010ace0(long *param_1)

{
  (**(code **)(*param_1 + 0x50))();
  return 0xffffe674;
}


// ===== 0010ad08  FUN_0010ad08 =====

char * FUN_0010ad08(undefined8 param_1,uint *param_2,undefined8 *param_3,long *param_4,ulong param_5
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
      pcVar7 = (char *)FUN_0010ae98(param_1,lVar8,param_4);
      if (pcVar7 != (char *)0x0) {
        return pcVar7;
      }
    }
    else if (*param_4 != lVar8) {
      return "CIE start does not match";
    }
    lVar8 = (long)puVar10 + uVar9;
    local_48 = puVar10 + 1;
    lVar3 = FUN_0010ccf0(param_1,&local_48,lVar8,(char)param_4[3],0);
    lVar4 = FUN_0010ccf0(param_1,&local_48,lVar8,*(byte *)(param_4 + 3) & 0xf,0);
    cVar1 = *(char *)((long)param_4 + 0x31);
    param_3[5] = 0;
    puVar10 = local_48;
    if (cVar1 != '\0') {
      lVar5 = FUN_0010d07c(&local_48,lVar8);
      puVar2 = local_48;
      puVar10 = (uint *)((long)local_48 + lVar5);
      if ((*(byte *)((long)param_4 + 0x19) != 0xff) &&
         (lVar5 = FUN_0010ccf0(param_1,&local_48,lVar8,*(byte *)((long)param_4 + 0x19) & 0xf,0),
         lVar5 != 0)) {
        local_48 = puVar2;
        uVar6 = FUN_0010ccf0(param_1,&local_48,lVar8,*(undefined1 *)((long)param_4 + 0x19),0);
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


// ===== 0010ae98  FUN_0010ae98 =====

char * FUN_0010ae98(undefined8 param_1,uint *param_2,long *param_3)

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
      uVar7 = FUN_0010d07c(&local_48,pbVar1);
      uVar13 = 0;
      uVar14 = 0;
      *(undefined4 *)(param_3 + 5) = uVar7;
      puVar5 = PTR___sF_00117328;
      pbVar11 = local_48;
      pbVar15 = local_48;
      do {
        pbVar12 = pbVar11;
        if (pbVar15 == pbVar1) {
          fprintf((FILE *)(PTR___sF_00117328 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
        uVar6 = FUN_0010d07c(&local_48,pbVar1);
        *(undefined1 *)((long)param_3 + 0x32) = uVar6;
        bVar2 = *pbVar18;
      }
      if (bVar2 == 0x7a) {
        FUN_0010d07c(&local_48,pbVar1);
LAB_0010b018:
        bVar2 = *pbVar18;
        if (bVar2 < 0x50) {
          if (bVar2 < 0x47) {
            if (bVar2 != 0x42) {
              if (bVar2 != 0) goto LAB_0010b0b8;
              goto LAB_0010b0fc;
            }
            *(undefined1 *)((long)param_3 + 0x33) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_0010b018;
          }
          if (bVar2 == 0x47) {
            *(undefined1 *)((long)param_3 + 0x34) = 1;
            goto LAB_0010b0b8;
          }
          if (bVar2 == 0x4c) {
            pbVar18 = pbVar18 + 1;
            *(byte *)((long)param_3 + 0x19) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_0010b018;
          }
        }
        else if (bVar2 < 0x53) {
          if (bVar2 == 0x50) {
            bVar2 = *local_48;
            *(byte *)((long)param_3 + 0x1a) = bVar2;
            *(char *)((long)param_3 + 0x1b) = (char)(local_48 + 1) - (char)param_2;
            local_48 = local_48 + 1;
            lVar8 = FUN_0010ccf0(param_1,&local_48,pbVar1,bVar2,0);
            param_3[4] = lVar8;
            pbVar18 = pbVar18 + 1;
            goto LAB_0010b018;
          }
          if (bVar2 == 0x52) {
            pbVar18 = pbVar18 + 1;
            *(byte *)(param_3 + 3) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_0010b018;
          }
        }
        else {
          if (bVar2 == 0x53) {
            *(undefined1 *)(param_3 + 6) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_0010b018;
          }
          if (bVar2 == 0x7a) {
            *(undefined1 *)((long)param_3 + 0x31) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_0010b018;
          }
        }
LAB_0010b0b8:
        pbVar18 = pbVar18 + 1;
        goto LAB_0010b018;
      }
LAB_0010b0fc:
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


// ===== 0010b160  FUN_0010b160 =====

void FUN_0010b160(void)

{
  return;
}


// ===== 0010b168  FUN_0010b168 =====

void FUN_0010b168(void)

{
  return;
}


// ===== 0010b170  FUN_0010b170 =====

bool FUN_0010b170(undefined8 param_1,uint param_2)

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


// ===== 0010b1b4  FUN_0010b1b4 =====

undefined8 FUN_0010b1b4(long param_1,uint param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_00117328;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_0010b21c:
      return *(undefined8 *)(param_1 + 0x108);
    }
    if (param_2 == 0xffffffff) goto LAB_0010b210;
    if (param_2 == 0x1d) {
      return *(undefined8 *)(param_1 + 0xf8);
    }
  }
  else if ((int)param_2 < 0x20) {
    if (param_2 == 0x1e) {
      return *(undefined8 *)(param_1 + 0x100);
    }
    if (param_2 == 0x1f) goto LAB_0010b21c;
  }
  else {
    if (param_2 == 0x22) {
      return *(undefined8 *)(param_1 + 0x118);
    }
    if (param_2 == 0x20) {
LAB_0010b210:
      return *(undefined8 *)(param_1 + 0x110);
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_00117328 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8);
}


// ===== 0010b29c  FUN_0010b29c =====

void FUN_0010b29c(long param_1,uint param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_00117328;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_0010b304:
      *(undefined8 *)(param_1 + 0x108) = param_3;
      return;
    }
    if (param_2 == 0xffffffff) goto LAB_0010b2f8;
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
    if (param_2 == 0x1f) goto LAB_0010b304;
  }
  else {
    if (param_2 == 0x22) {
      *(undefined8 *)(param_1 + 0x118) = param_3;
      return;
    }
    if (param_2 == 0x20) {
LAB_0010b2f8:
      *(undefined8 *)(param_1 + 0x110) = param_3;
      return;
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_00117328 + 0x130),"libunwind: %s - %s\n","setRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8) = param_3;
  return;
}


// ===== 0010b384  FUN_0010b384 =====

bool FUN_0010b384(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffffffe0) == 0x40;
}


// ===== 0010b398  FUN_0010b398 =====

undefined1  [16] FUN_0010b398(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + (long)param_2 * 8 + -0xe0);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 0010b3a8  FUN_0010b3a8 =====

void FUN_0010b3a8(undefined8 param_1,long param_2,int param_3)

{
  *(undefined8 *)(param_2 + (long)param_3 * 8 + -0xe0) = param_1;
  return;
}


// ===== 0010b3b8  FUN_0010b3b8 =====

ulong FUN_0010b3b8(long *param_1,uint param_2)

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
    uVar3 = FUN_0010b8dc(lVar1,uVar4,param_1[0x4b],param_1 + 2,(long)param_1 + 0x269,param_2 & 1);
    iVar2 = (int)uVar3;
  }
  else {
    memset(auStack_240,0,0x210);
    uVar3 = FUN_0010b7bc(param_1,auStack_240);
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


// ===== 0010b4a8  FUN_0010b4a8 =====

void FUN_0010b4a8(long param_1,undefined8 *param_2)

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


// ===== 0010b4ec  FUN_0010b4ec =====

void FUN_0010b4ec(long param_1)

{
  FUN_0010e584(param_1 + 0x10);
  return;
}


// ===== 0010b4f8  FUN_0010b4f8 =====

undefined1 FUN_0010b4f8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x269);
}


// ===== 0010b504  FUN_0010b504 =====

undefined8 FUN_0010b504(long *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  return 0;
}


// ===== 0010b530  FUN_0010b530 =====

void FUN_0010b530(long *param_1,ulong param_2)

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
  iVar1 = dl_iterate_phdr(FUN_0010ded4,&local_648);
  if (((iVar1 == 0) || (local_668 == 0)) ||
     (uVar4 = FUN_0010dc00(param_1,uVar7,auStack_678,0), (uVar4 & 1) == 0)) {
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_0011b654);
    for (puVar6 = PTR_DAT_0011b618; puVar6 < PTR_DAT_0011b620; puVar6 = puVar6 + 0x20) {
      if ((*(ulong *)(puVar6 + 8) <= uVar7) && (uVar7 < *(ulong *)(puVar6 + 0x10))) {
        lVar3 = *(long *)(puVar6 + 0x18);
        pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0011b654);
        if ((lVar3 != 0) &&
           (lVar3 = FUN_0010ad08(param_1[1],lVar3,&local_6a8,local_6e0,0), lVar3 == 0)) {
          memset(&local_648,0,0x618);
          uVar7 = FUN_0010bd64(param_1[1],&local_6a8,local_6e0,uVar7,4,&local_648);
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
        goto LAB_0010b6b8;
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0011b654);
LAB_0010b6b8:
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


// ===== 0010b7b0  FUN_0010b7b0 =====

void FUN_0010b7b0(undefined8 param_1,undefined4 param_2)

{
  FUN_0010e554(param_2);
  return;
}


// ===== 0010b7bc  FUN_0010b7bc =====

undefined8 FUN_0010b7bc(long param_1)

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


// ===== 0010b8dc  FUN_0010b8dc =====

undefined8
FUN_0010b8dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,
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
  
  lVar7 = FUN_0010ad08(param_1,param_3,auStack_b0,auStack_e8,0);
  if (lVar7 == 0) {
    memset(auStack_700,0,0x618);
    uVar8 = FUN_0010bd64(param_1,auStack_b0,auStack_e8,param_2,4,auStack_700);
    if ((uVar8 & 1) != 0) {
      uVar8 = FUN_0010c9ac(param_1,auStack_700,param_4);
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
        puVar3 = PTR___sF_00117328;
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
              goto LAB_0010bbbc;
            }
            else {
              puVar13 = (undefined8 *)((long)param_4 + 0x108);
              if ((local_b6 != 0x22) &&
                 ((puVar13 = (undefined8 *)((long)param_4 + 0x100), local_b6 != 0x20 &&
                  (puVar13 = (undefined8 *)((long)param_4 + 0xf8), local_b6 != 0x1f)))) {
LAB_0010bbbc:
                if (0x1c < local_b6) {
                  fprintf((FILE *)(PTR___sF_00117328 + 0x130),"libunwind: %s - %s\n","getRegister",
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
LAB_0010bcc8:
                  fprintf((FILE *)(PTR___sF_00117328 + 0x130),"libunwind: %s - %s\n",
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
              if (iVar2 != 6) goto LAB_0010bcc8;
              puVar9 = (ulong *)FUN_0010d244(*(undefined8 *)(piVar15 + 2),param_1,param_4,uVar8);
              uVar18 = *puVar9;
            }
            local_a00[uVar12] = uVar18;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == local_b6) {
            uVar14 = FUN_0010cae0(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == 0x22) {
            uVar10 = FUN_0010cae0(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
          }
          else {
            if (0xffffffe0 < uVar16 - 0x40) {
              return 0xffffe672;
            }
            uVar11 = FUN_0010cae0(param_1,param_4,uVar8,piVar15);
            puVar3 = PTR___sF_00117328;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
            if ((int)uVar16 < 0x1f) {
              uVar5 = uVar11;
              if ((uVar16 != 0x1d) && (uVar5 = local_a00[0x3b], uVar6 = uVar11, uVar16 != 0x1e))
              goto LAB_0010bc10;
            }
            else {
              uVar18 = uVar11;
              if ((uVar16 != 0x1f) &&
                 ((uVar18 = local_a00[0x3d], uVar10 = uVar11, uVar16 != 0x22 &&
                  (uVar10 = local_a00[0x3f], uVar16 != 0x20)))) {
LAB_0010bc10:
                if (0x1c < uVar12) {
                  fprintf((FILE *)(PTR___sF_00117328 + 0x130),"libunwind: %s - %s\n","setRegister",
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
            FUN_0010cae0(param_1,auStack_b20,uVar8,&local_80);
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


// ===== 0010bd64  FUN_0010bd64 =====

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_0010bd64(undefined8 param_1,long *param_2,long *param_3,long param_4,int param_5,
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
LAB_0010bde8:
    lVar20 = lVar20 + 0x18;
    if (lVar20 == 0x30) {
      return 1;
    }
  }
  uVar17 = 0;
LAB_0010be18:
  puVar18 = local_6c0;
  puVar5 = PTR___sF_00117328;
  pbVar10 = pbVar21 + 1;
  bVar3 = *pbVar21;
  apbStack_6a0[0xc0] = pbVar10;
  switch((ulong)bVar3) {
  case 0:
    goto code_r0x0010c6ec;
  case 1:
    uVar17 = FUN_0010ccf0(local_6c8,apbStack_6a0 + 0xc0,pbVar2,(char)param_3[3],0);
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 2:
    uVar9 = (uint)pbVar21[1];
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 2;
    goto LAB_0010c2a0;
  case 3:
    uVar9 = (uint)*(ushort *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 3;
    goto LAB_0010c2a0;
  case 4:
    uVar9 = *(uint *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 5;
LAB_0010c2a0:
    uVar17 = uVar17 + iVar13 * uVar9;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 5:
    uVar19 = FUN_0010d07c(apbStack_6a0 + 0xc0,pbVar2);
    lVar8 = FUN_0010d07c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended DWARF unwind, reg too big\n";
      __size = 0x46;
      __s = (FILE *)(PTR___sF_00117328 + 0x130);
      goto LAB_0010c89c;
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
LAB_0010c23c:
    puVar12[6] = 2;
    *(long *)(puVar12 + 8) = lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 6:
    uVar19 = FUN_0010d07c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_restore_extended DWARF unwind, reg too big\n";
LAB_0010c78c:
      __s = (FILE *)(PTR___sF_00117328 + 0x130);
      __size = 0x47;
      goto LAB_0010c89c;
    }
    cVar4 = *(char *)(param_6 + uVar19 * 4 + 7);
joined_r0x0010c6cc:
    if (cVar4 != '\0') {
      pbVar21 = apbStack_6a0[uVar19 * 2];
      *(byte **)(param_6 + uVar19 * 4 + 8) = apbStack_6a0[uVar19 * 2 + 1];
      *(byte **)(param_6 + uVar19 * 4 + 6) = pbVar21;
    }
    goto code_r0x0010c6ec;
  case 7:
    uVar19 = FUN_0010d07c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_undefined DWARF unwind, reg too big\n";
LAB_0010c890:
      __s = (FILE *)(PTR___sF_00117328 + 0x130);
      __size = 0x40;
      goto LAB_0010c89c;
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
    uVar19 = FUN_0010d07c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_same_value DWARF unwind, reg too big\n";
LAB_0010c874:
      __s = (FILE *)(PTR___sF_00117328 + 0x130);
      __size = 0x41;
      goto LAB_0010c89c;
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
    uVar19 = FUN_0010d07c(apbStack_6a0 + 0xc0,pbVar2);
    uVar14 = FUN_0010d07c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg too big\n";
      __size = 0x3f;
      __s = (FILE *)(PTR___sF_00117328 + 0x130);
      goto LAB_0010c89c;
    }
    if (0x5f < uVar14) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg2 too big\n";
      goto LAB_0010c890;
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
    uVar19 = FUN_0010d07c(apbStack_6a0 + 0xc0,pbVar2);
    uVar7 = FUN_0010d07c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa DWARF unwind, reg too big\n";
      __size = 0x3e;
      __s = (FILE *)(PTR___sF_00117328 + 0x130);
      goto LAB_0010c89c;
    }
    *param_6 = (int)uVar19;
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xd:
    uVar19 = FUN_0010d07c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa_register DWARF unwind, reg too big\n";
      goto LAB_0010c78c;
    }
    *param_6 = (int)uVar19;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xe:
    uVar7 = FUN_0010d07c(apbStack_6a0 + 0xc0,pbVar2);
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xf:
    *param_6 = 0;
    *(byte **)(param_6 + 2) = pbVar10;
    goto LAB_0010c620;
  case 0x10:
    uVar19 = FUN_0010d07c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_expression DWARF unwind, reg too big\n";
      goto LAB_0010c874;
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
LAB_0010c618:
    puVar12[6] = uVar7;
    *(byte **)(puVar12 + 8) = apbStack_6a0[0xc0];
LAB_0010c620:
    lVar8 = FUN_0010d07c(apbStack_6a0 + 0xc0,pbVar2);
    apbStack_6a0[0xc0] = apbStack_6a0[0xc0] + lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x11:
    uVar19 = FUN_0010d07c(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_00117328;
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended_sf DWARF unwind, reg too big\n";
      __size = 0x49;
      __s = (FILE *)(PTR___sF_00117328 + 0x130);
      goto LAB_0010c89c;
    }
    uVar14 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_00117328 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
LAB_0010c5ac:
    puVar12[6] = uVar7;
    *(ulong *)(puVar12 + 8) = uVar11 * (long)iVar13;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x12:
    uVar14 = FUN_0010d07c(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_00117328;
    uVar19 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_00117328 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      goto LAB_0010c874;
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
        fprintf((FILE *)(PTR___sF_00117328 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
    uVar19 = FUN_0010d07c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      fprintf((FILE *)(PTR___sF_00117328 + 0x130),
              "libunwind: malformed DW_CFA_val_offset DWARF unwind, reg (%lu) out of range\n\n",
              uVar19);
      goto LAB_0010c8a4;
    }
    lVar8 = FUN_0010d07c(apbStack_6a0 + 0xc0,pbVar2);
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
    uVar19 = FUN_0010d07c(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_00117328;
    if (uVar19 < 0x60) {
      uVar14 = 0;
      uVar11 = 0;
      pbVar21 = apbStack_6a0[0xc0];
      pbVar10 = apbStack_6a0[0xc0];
      do {
        if (pbVar10 == pbVar2) {
          fprintf((FILE *)(PTR___sF_00117328 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      goto LAB_0010c5ac;
    }
    __ptr = "libunwind: malformed DW_CFA_val_offset_sf DWARF unwind, reg too big\n";
    __size = 0x44;
    __s = (FILE *)(PTR___sF_00117328 + 0x130);
    goto LAB_0010c89c;
  case 0x16:
    uVar19 = FUN_0010d07c(apbStack_6a0 + 0xc0,pbVar2);
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
      goto LAB_0010c618;
    }
    __ptr = "libunwind: malformed DW_CFA_val_expression DWARF unwind, reg too big\n";
    __size = 0x45;
    __s = (FILE *)(PTR___sF_00117328 + 0x130);
    goto LAB_0010c89c;
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
        goto joined_r0x0010c6cc;
      }
      if (bVar1 != 0x80) {
        return 0;
      }
      local_6dc = param_5;
      lVar8 = FUN_0010d07c(apbStack_6a0 + 0xc0,pbVar2);
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
    if (param_5 != 4) goto code_r0x0010c6ec;
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
    uVar7 = FUN_0010d07c(apbStack_6a0 + 0xc0,pbVar2);
    param_6[4] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x2f:
    uVar19 = FUN_0010d07c(apbStack_6a0 + 0xc0,pbVar2);
    if (uVar19 < 0x60) {
      lVar8 = FUN_0010d07c(apbStack_6a0 + 0xc0,pbVar2);
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
      goto LAB_0010c23c;
    }
    __ptr = "libunwind: malformed DW_CFA_GNU_negative_offset_extended DWARF unwind, reg too big\n";
    __size = 0x53;
    __s = (FILE *)(PTR___sF_00117328 + 0x130);
LAB_0010c89c:
    fwrite(__ptr,__size,1,__s);
LAB_0010c8a4:
    fflush((FILE *)(PTR___sF_00117328 + 0x130));
    return 0;
  }
joined_r0x0010c1d4:
  if ((pbVar2 <= pbVar21) || (uVar16 <= uVar17)) goto LAB_0010bde8;
  goto LAB_0010be18;
code_r0x0010c6ec:
  pbVar21 = apbStack_6a0[0xc0];
  goto joined_r0x0010c1d4;
}


// ===== 0010c9ac  FUN_0010c9ac =====

long FUN_0010c9ac(undefined8 param_1,uint *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR___sF_00117328;
  uVar1 = *param_2;
  if ((int)uVar1 < 0x1e) {
    if ((int)uVar1 < 0) {
      if (uVar1 == 0xfffffffe) {
LAB_0010c9ec:
        return *(long *)(param_3 + 0xf8) + (long)(int)param_2[1];
      }
      if (uVar1 == 0xffffffff) goto LAB_0010ca30;
    }
    else {
      if (uVar1 == 0) {
        lVar3 = FUN_0010d244(*(undefined8 *)(param_2 + 2),param_1,param_3,0);
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
    if (uVar1 == 0x1f) goto LAB_0010c9ec;
  }
  else {
    if (uVar1 == 0x22) {
      return *(long *)(param_3 + 0x108) + (long)(int)param_2[1];
    }
    if (uVar1 == 0x20) {
LAB_0010ca30:
      return *(long *)(param_3 + 0x100) + (long)(int)param_2[1];
    }
  }
  if (0x1c < uVar1) {
    fprintf((FILE *)(PTR___sF_00117328 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(long *)(param_3 + (ulong)uVar1 * 8) + (long)(int)param_2[1];
}


// ===== 0010cae0  FUN_0010cae0 =====

undefined8 FUN_0010cae0(undefined8 param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  puVar2 = PTR___sF_00117328;
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
LAB_0010cc1c:
          return *(undefined8 *)(param_2 + 0xf8);
        }
        if (uVar5 == 0xffffffff) goto LAB_0010cc04;
        if (uVar5 == 0x1d) {
          return *(undefined8 *)(param_2 + 0xe8);
        }
      }
      else if ((int)uVar5 < 0x20) {
        if (uVar5 == 0x1e) {
          return *(undefined8 *)(param_2 + 0xf0);
        }
        if (uVar5 == 0x1f) goto LAB_0010cc1c;
      }
      else {
        if (uVar5 == 0x22) {
          return *(undefined8 *)(param_2 + 0x108);
        }
        if (uVar5 == 0x20) {
LAB_0010cc04:
          return *(undefined8 *)(param_2 + 0x100);
        }
      }
      if (0x1c < uVar5) {
        fprintf((FILE *)(PTR___sF_00117328 + 0x130),"libunwind: %s - %s\n","getRegister",
                "unsupported arm64 register");
        fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      return *(undefined8 *)(param_2 + (*(ulong *)(param_4 + 2) & 0xffffffff) * 8);
    }
    if (iVar1 == 6) {
      puVar4 = (undefined8 *)FUN_0010d244(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return *puVar4;
    }
    if (iVar1 == 7) {
      uVar3 = FUN_0010d244(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return uVar3;
    }
  }
  fprintf((FILE *)(PTR___sF_00117328 + 0x130),"libunwind: %s - %s\n","getSavedRegister",
          "unsupported restore location for register");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0010ccf0  FUN_0010ccf0 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_0010ccf0(undefined8 param_1,long *param_2,ulong *param_3,uint param_4,long param_5)

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
  
  puVar3 = PTR___sF_00117328;
  uVar1 = param_4 & 0xf;
  puVar10 = (ulong *)*param_2;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if ((param_4 & 0xf) == 0) goto LAB_0010ce3c;
      if (uVar1 != 1) {
LAB_0010d048:
        fprintf((FILE *)(PTR___sF_00117328 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "unknown pointer encoding");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar4 = (undefined8 *)FUN_0010d07c(param_2,param_3);
      puVar3 = PTR___sF_00117328;
    }
    else if (uVar1 == 2) {
      puVar4 = (undefined8 *)(ulong)(ushort)*puVar10;
      *param_2 = (long)puVar10 + 2;
      puVar3 = PTR___sF_00117328;
    }
    else {
      if (uVar1 != 3) goto LAB_0010d048;
      puVar4 = (undefined8 *)(ulong)(uint)*puVar10;
      *param_2 = (long)((long)puVar10 + 4);
      puVar3 = PTR___sF_00117328;
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 4) {
LAB_0010ce3c:
      puVar4 = (undefined8 *)*puVar10;
      *param_2 = (long)(puVar10 + 1);
      puVar3 = PTR___sF_00117328;
    }
    else {
      if (uVar1 != 9) goto LAB_0010d048;
      uVar7 = 0;
      uVar5 = 0;
      puVar6 = puVar10;
      puVar9 = puVar10;
      do {
        if (puVar9 == param_3) {
          fprintf((FILE *)(PTR___sF_00117328 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      puVar3 = PTR___sF_00117328;
    }
  }
  else if (uVar1 == 10) {
    puVar4 = (undefined8 *)(long)(short)*puVar10;
    *param_2 = (long)puVar10 + 2;
    puVar3 = PTR___sF_00117328;
  }
  else {
    if (uVar1 != 0xb) {
      if (uVar1 != 0xc) goto LAB_0010d048;
      goto LAB_0010ce3c;
    }
    puVar4 = (undefined8 *)(long)(int)(uint)*puVar10;
    *param_2 = (long)((long)puVar10 + 4);
    puVar3 = PTR___sF_00117328;
  }
  uVar1 = (param_4 & 0xff) >> 4 & 7;
  PTR___sF_00117328 = puVar3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      if (uVar1 != 1) goto LAB_0010d014;
      puVar4 = (undefined8 *)((long)puVar4 + (long)puVar10);
    }
LAB_0010cec8:
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
      goto LAB_0010cec8;
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
LAB_0010d014:
  fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP","unknown pointer encoding");
  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0010d07c  FUN_0010d07c =====

ulong FUN_0010d07c(long *param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  puVar2 = PTR___sF_00117328;
  pbVar4 = (byte *)*param_1;
  if (pbVar4 != param_2) {
    pbVar5 = pbVar4 + 1;
    uVar3 = (ulong)*pbVar4 & 0x7f;
    if (-1 < (char)*pbVar4) {
LAB_0010d0ac:
      *param_1 = (long)pbVar5;
      return uVar3;
    }
    if (pbVar5 != param_2) {
      uVar3 = uVar3 | (ulong)((int)(char)pbVar4[1] & 0x7f) << 7;
      pbVar5 = pbVar4 + 2;
      if (-1 < (char)pbVar4[1]) goto LAB_0010d0ac;
      if (pbVar5 != param_2) {
        uVar3 = uVar3 | (ulong)((int)(char)pbVar4[2] & 0x7f) << 0xe;
        pbVar5 = pbVar4 + 3;
        if (-1 < (char)pbVar4[2]) goto LAB_0010d0ac;
        if (pbVar5 != param_2) {
          uVar3 = uVar3 | (ulong)((int)(char)pbVar4[3] & 0x7f) << 0x15;
          pbVar5 = pbVar4 + 4;
          if (-1 < (char)pbVar4[3]) goto LAB_0010d0ac;
          if (pbVar5 != param_2) {
            uVar3 = uVar3 | (ulong)((int)(char)pbVar4[4] & 0x7f) << 0x1c;
            pbVar5 = pbVar4 + 5;
            if (-1 < (char)pbVar4[4]) goto LAB_0010d0ac;
            if (pbVar5 != param_2) {
              uVar3 = uVar3 | (ulong)((int)(char)pbVar4[5] & 0x7f) << 0x23;
              pbVar5 = pbVar4 + 6;
              if (-1 < (char)pbVar4[5]) goto LAB_0010d0ac;
              if (pbVar5 != param_2) {
                uVar3 = uVar3 | (ulong)((int)(char)pbVar4[6] & 0x7f) << 0x2a;
                pbVar5 = pbVar4 + 7;
                if (-1 < (char)pbVar4[6]) goto LAB_0010d0ac;
                if (pbVar5 != param_2) {
                  uVar3 = uVar3 | (ulong)((int)(char)pbVar4[7] & 0x7f) << 0x31;
                  pbVar5 = pbVar4 + 8;
                  if (-1 < (char)pbVar4[7]) goto LAB_0010d0ac;
                  if (pbVar5 != param_2) {
                    uVar3 = uVar3 | (ulong)((int)(char)pbVar4[8] & 0x7f) << 0x38;
                    pbVar5 = pbVar4 + 9;
                    if (-1 < (char)pbVar4[8]) goto LAB_0010d0ac;
                    if (pbVar5 != param_2) {
                      bVar1 = *pbVar5;
                      if ((bVar1 & 0x7e) == 0) {
                        if (-1 < (char)bVar1) {
                          *param_1 = (long)(pbVar4 + 10);
                          return uVar3 | (ulong)bVar1 << 0x3f;
                        }
                        if (pbVar4 + 10 == param_2) goto LAB_0010d1dc;
                      }
                      fprintf((FILE *)(PTR___sF_00117328 + 0x130),"libunwind: %s - %s\n",
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
LAB_0010d1dc:
  fprintf((FILE *)(PTR___sF_00117328 + 0x130),"libunwind: %s - %s\n","getULEB128",
          "truncated uleb128 expression");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0010d244  FUN_0010d244 =====

ulong FUN_0010d244(byte *param_1,undefined8 param_2,long param_3,ulong param_4)

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
  lVar11 = FUN_0010d07c(&local_68,param_1 + 0x14);
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
      puVar9 = PTR___sF_00117328;
      pbVar13 = pbVar18 + 1;
      local_68 = pbVar13;
      bVar8 = *pbVar18;
      uVar10 = (uint)bVar8;
      if (0x91 < uVar10 - 3) {
code_r0x0010dac0:
        fprintf((FILE *)(PTR___sF_00117328 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
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
        goto LAB_0010d72c;
      case 4:
      case 5:
      case 7:
        goto code_r0x0010dac0;
      case 6:
        puVar14 = (ulong *)*puVar19;
LAB_0010d6bc:
        *puVar19 = *puVar14;
        goto LAB_0010d2c8;
      case 8:
        uVar16 = (ulong)pbVar18[1];
        goto LAB_0010d690;
      case 9:
        uVar16 = (ulong)(char)pbVar18[1];
LAB_0010d690:
        local_68 = pbVar18 + 2;
        goto LAB_0010d72c;
      case 10:
        uVar16 = (ulong)*(ushort *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_0010d72c;
      case 0xb:
        uVar16 = (ulong)*(short *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_0010d72c;
      case 0xc:
        uVar16 = (ulong)*(uint *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_0010d72c;
      case 0xd:
        uVar16 = (ulong)*(int *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_0010d72c;
      case 0x10:
        uVar16 = FUN_0010d07c(&local_68,pbVar6);
        puVar19 = puVar19 + 1;
        *puVar19 = uVar16;
        goto LAB_0010d2c8;
      case 0x11:
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = pbVar13;
        do {
          if (pbVar18 == pbVar6) {
            fprintf((FILE *)(PTR___sF_00117328 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
        goto LAB_0010d2c8;
      case 0x12:
        uVar16 = *puVar19;
        goto LAB_0010d2c4;
      case 0x13:
        puVar19 = puVar19 + -1;
        goto LAB_0010d2c8;
      case 0x14:
        uVar16 = puVar19[-1];
        goto LAB_0010d2c4;
      case 0x15:
        local_68 = pbVar18 + 2;
        uVar16 = puVar19[-(ulong)pbVar18[1]];
LAB_0010d72c:
LAB_0010d2c4:
        puVar19[1] = uVar16;
        puVar19 = puVar19 + 1;
        goto LAB_0010d2c8;
      case 0x16:
        auVar20 = NEON_ext(*(undefined1 (*) [16])(puVar19 + -1),*(undefined1 (*) [16])(puVar19 + -1)
                           ,8,1);
        *puVar19 = auVar20._8_8_;
        puVar19[-1] = auVar20._0_8_;
        goto LAB_0010d2c8;
      case 0x17:
        uVar16 = *puVar19;
        *puVar19 = SUB168(*(undefined1 (*) [16])(puVar19 + -2),8);
        puVar19[-1] = SUB168(*(undefined1 (*) [16])(puVar19 + -2),0);
        puVar19[-2] = uVar16;
        goto LAB_0010d2c8;
      case 0x18:
        puVar14 = (ulong *)*puVar19;
        puVar19 = puVar19 + -1;
        *puVar19 = *puVar14;
        goto LAB_0010d2c8;
      case 0x19:
        uVar16 = *puVar19;
        if ((long)uVar16 < 0) goto LAB_0010d864;
        goto LAB_0010d2c8;
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
LAB_0010d864:
        *puVar19 = -uVar16;
        goto LAB_0010d2c8;
      case 0x20:
        *puVar19 = ~*puVar19;
        goto LAB_0010d2c8;
      case 0x21:
        uVar16 = puVar19[-1] | *puVar19;
        break;
      case 0x22:
        uVar16 = puVar19[-1] + *puVar19;
        break;
      case 0x23:
        lVar11 = FUN_0010d07c(&local_68,pbVar6);
        *puVar19 = *puVar19 + lVar11;
        goto LAB_0010d2c8;
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
        goto LAB_0010d2c8;
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
        goto LAB_0010d2c8;
      default:
        uVar16 = (ulong)(uVar15 - 0x30);
        goto LAB_0010d2c4;
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
        goto LAB_0010d2c0;
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
            fprintf((FILE *)(PTR___sF_00117328 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
             (puVar14 = puVar2, bVar8 != 0x8d)) goto LAB_0010d400;
        }
        else if (bVar8 < 0x90) {
          puVar14 = puVar1;
          if ((bVar8 != 0x8e) && (puVar14 = puVar4, uVar15 != 0x8f)) {
LAB_0010d400:
            if (0x1c < uVar10 - 0x70) {
              fprintf((FILE *)(PTR___sF_00117328 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((bVar8 != 0x90) && (puVar14 = puVar3, bVar8 != 0x92)) goto LAB_0010d400;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_0010d2c4;
      case 0x90:
        uVar10 = FUN_0010d07c(&local_68,pbVar6);
        puVar9 = PTR___sF_00117328;
        if ((int)uVar10 < 0x1e) {
          if (((uVar10 != 0xfffffffe) && (puVar14 = puVar5, uVar10 != 0xffffffff)) &&
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_0010d964;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_0010d964:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_00117328 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_0010d964;
        }
LAB_0010d2c0:
        uVar16 = *puVar14;
        goto LAB_0010d2c4;
      case 0x91:
        fprintf((FILE *)(PTR___sF_00117328 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_fbreg not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x92:
        uVar10 = FUN_0010d07c(&local_68,pbVar6);
        puVar9 = PTR___sF_00117328;
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = local_68;
        pbVar13 = local_68;
        do {
          if (pbVar13 == pbVar6) {
            fprintf((FILE *)(PTR___sF_00117328 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_0010d98c;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_0010d98c:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_00117328 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_0010d98c;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_0010d2c4;
      case 0x93:
        fprintf((FILE *)(PTR___sF_00117328 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
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
LAB_0010db64:
              fprintf((FILE *)(PTR___sF_00117328 + 0x130),"libunwind: %s - %s\n",
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
            if (bVar8 != 8) goto LAB_0010db64;
            goto LAB_0010d6bc;
          }
          *puVar19 = (ulong)(uint)*puVar14;
        }
        goto LAB_0010d2c8;
      }
      puVar19[-1] = uVar16;
      puVar19 = puVar19 + -1;
LAB_0010d2c8:
      pbVar18 = local_68;
    } while (local_68 < pbVar6);
    param_4 = *puVar19;
  }
  return param_4;
}


// ===== 0010dc00  FUN_0010dc00 =====

undefined8 FUN_0010dc00(long param_1,ulong param_2,long *param_3,uint param_4)

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
      (uVar3 = FUN_0010e128(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],
                            param_3[2] + (ulong)param_4,&local_6b0,auStack_6e8), (uVar3 & 1) == 0))
     && ((param_3[4] == 0 ||
         (uVar3 = FUN_0010e2f0(*(undefined8 *)(param_1 + 8),param_2,param_3[4],(int)param_3[5],
                               &local_6b0,auStack_6e8), (uVar3 & 1) == 0)))) {
    lVar5 = *param_3;
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_0011b654);
    if (PTR_DAT_0011b618 < PTR_DAT_0011b620) {
      plVar4 = (long *)PTR_DAT_0011b618;
      if (lVar5 == -1) {
        do {
          if (((ulong)plVar4[1] <= param_2) && (param_2 < (ulong)plVar4[2])) goto LAB_0010dd08;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_0011b620);
      }
      else {
        do {
          if (((*plVar4 == lVar5) && ((ulong)plVar4[1] <= param_2)) && (param_2 < (ulong)plVar4[2]))
          goto LAB_0010dd08;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_0011b620);
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0011b654);
    goto LAB_0010dd50;
  }
LAB_0010dd70:
  bVar2 = 1;
LAB_0010dd74:
  lVar5 = *param_3;
  memset(auStack_680,0,0x618);
  uVar3 = FUN_0010bd64(*(undefined8 *)(param_1 + 8),&local_6b0,auStack_6e8,param_2,4,auStack_680);
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
      pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_0011b654);
      __src = PTR_DAT_0011b618;
      if (PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0011b628
          <= PTR_DAT_0011b620) {
        __n = (long)
              PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0011b628
              - (long)PTR_DAT_0011b618;
        __dest = (undefined *)malloc(__n * 4);
        memcpy(__dest,__src,__n);
        if ((undefined8 *)__src != &DAT_0011b690) {
          free(__src);
        }
        PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0011b628
             = __dest + ((long)__n >> 3) * 0x20;
        PTR_DAT_0011b620 = __dest + __n;
        PTR_DAT_0011b618 = __dest;
      }
      *(long *)PTR_DAT_0011b620 = lVar5;
      *(long *)((long)PTR_DAT_0011b620 + 8) = local_698;
      *(long *)((long)PTR_DAT_0011b620 + 0x18) = local_6b0;
      *(long *)((long)PTR_DAT_0011b620 + 0x10) = local_690;
      PTR_DAT_0011b620 = (undefined *)((long)PTR_DAT_0011b620 + 0x20);
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0011b654);
      return 1;
    }
    return 1;
  }
  return 1;
LAB_0010dd08:
  lVar5 = plVar4[3];
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0011b654);
  if ((lVar5 != 0) &&
     (uVar3 = FUN_0010e128(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],lVar5,
                           &local_6b0,auStack_6e8), (uVar3 & 1) != 0)) {
    bVar2 = 0;
    goto LAB_0010dd74;
  }
LAB_0010dd50:
  uVar3 = FUN_0010e128(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],0,&local_6b0,
                       auStack_6e8);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  goto LAB_0010dd70;
}


// ===== 0010ded4  FUN_0010ded4 =====

undefined8 FUN_0010ded4(ulong *param_1,undefined8 param_2,undefined8 *param_3)

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
              uVar5 = FUN_0010e008(uVar2,lVar8,lVar9 + lVar8,local_70);
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


// ===== 0010e008  FUN_0010e008 =====

undefined8 FUN_0010e008(undefined8 param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte *local_28;
  
  puVar3 = PTR___sF_00117328;
  if ((ulong)((long)param_3 - (long)param_2) < 4) {
    if (param_3 == param_2) {
      return 0;
    }
    fprintf((FILE *)(PTR___sF_00117328 + 0x130),
            "libunwind: unsupported .eh_frame_hdr at %lx: need at least 4 bytes of data but only got %zd\n"
            ,param_2);
  }
  else {
    if (*param_2 == 1) {
      local_28 = param_2 + 4;
      bVar1 = param_2[2];
      bVar2 = param_2[1];
      *(byte *)(param_4 + 3) = param_2[3];
      uVar4 = FUN_0010ccf0(param_1,&local_28,param_3,bVar2,param_2);
      *param_4 = uVar4;
      if (bVar1 == 0xff) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_0010ccf0(param_1,&local_28,param_3,bVar1,param_2);
      }
      param_4[1] = uVar4;
      param_4[2] = local_28;
      return 1;
    }
    fprintf((FILE *)(PTR___sF_00117328 + 0x130),
            "libunwind: unsupported .eh_frame_hdr version: %u at %lx\n",(ulong)(uint)*param_2,
            param_2);
  }
  fflush((FILE *)(puVar3 + 0x130));
  return 0;
}


// ===== 0010e128  FUN_0010e128 =====

undefined8
FUN_0010e128(undefined8 param_1,ulong param_2,uint *param_3,long param_4,uint *param_5,
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
        (puVar7 < puVar9)) && (lVar4 = FUN_0010ae98(param_1,puVar7,param_7), lVar4 == 0)) {
      local_68 = local_68 + 1;
      uVar8 = FUN_0010ccf0(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x18),0);
      lVar4 = FUN_0010ccf0(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x18) & 0xf,0);
      if ((uVar8 < param_2) && (param_2 <= lVar4 + uVar8)) {
        cVar2 = *(char *)(param_7 + 0x31);
        param_6[5] = 0;
        puVar9 = local_68;
        if (cVar2 != '\0') {
          lVar5 = FUN_0010d07c(&local_68,puVar1);
          puVar7 = local_68;
          puVar9 = (uint *)((long)local_68 + lVar5);
          if ((*(byte *)(param_7 + 0x19) != 0xff) &&
             (lVar5 = FUN_0010ccf0(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x19) & 0xf,0),
             lVar5 != 0)) {
            local_68 = puVar7;
            uVar6 = FUN_0010ccf0(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x19),0);
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


// ===== 0010e2f0  FUN_0010e2f0 =====

undefined8
FUN_0010e2f0(undefined8 param_1,ulong param_2,long param_3,ulong param_4,long param_5,
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
  uVar1 = FUN_0010e008(param_1,param_3,lVar4,auStack_80);
  if (((uVar1 & 1) != 0) && (local_78 != 0)) {
    lVar2 = FUN_0010e458(local_68);
    lVar7 = 0;
    do {
      if (local_78 < 2) {
        lVar8 = lVar7 * lVar2;
        break;
      }
      uVar6 = local_78 >> 1;
      lVar8 = (uVar6 + lVar7) * lVar2;
      local_88 = local_70 + lVar8;
      uVar1 = FUN_0010ccf0(param_1,&local_88,lVar4,local_68,param_3);
      uVar5 = local_78 - uVar6;
      local_78 = uVar6;
      if (uVar1 < param_2) {
        local_78 = uVar5;
        lVar7 = uVar6 + lVar7;
      }
    } while (uVar1 != param_2);
    local_88 = local_70 + lVar8;
    FUN_0010ccf0(param_1,&local_88,lVar4,local_68,param_3);
    uVar3 = FUN_0010ccf0(param_1,&local_88,lVar4,local_68,param_3);
    lVar4 = FUN_0010ad08(param_1,uVar3,param_5,param_6,0);
    if (((lVar4 == 0) && (*(ulong *)(param_5 + 0x18) <= param_2)) &&
       (param_2 < *(ulong *)(param_5 + 0x20))) {
      return 1;
    }
  }
  return 0;
}


// ===== 0010e458  FUN_0010e458 =====

undefined8 FUN_0010e458(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_00117328;
  param_1 = param_1 & 0xf;
  if (param_1 < 9) {
    if (param_1 < 3) {
      if (param_1 == 2) {
        return 4;
      }
      if (param_1 == 1) {
LAB_0010e520:
        fprintf((FILE *)(PTR___sF_00117328 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
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
    if (param_1 == 9) goto LAB_0010e520;
  }
  else {
    if (param_1 == 0xc) {
      return 0x10;
    }
    if (param_1 == 0xb) {
      return 8;
    }
  }
  fprintf((FILE *)(PTR___sF_00117328 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
          "Unknown DWARF encoding for search table.");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0010e554  FUN_0010e554 =====

char * FUN_0010e554(int param_1)

{
  if (param_1 + 2U < 0x62) {
    return &DAT_00107550 + *(int *)(&DAT_00107550 + (ulong)(param_1 + 2U) * 4);
  }
  return "unknown register";
}


// ===== 0010e584  FUN_0010e584 =====

undefined1  [16] FUN_0010e584(undefined1 (*param_1) [16])

{
  return *param_1;
}


// ===== 0010e620  FUN_0010e620 =====

long FUN_0010e620(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_0011b640 == '\0') {
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


// ===== 0010e650  facebook::react::ReanimatedView_registerComponentDescriptorsFromCodegen =====

/* WARNING: Removing unreachable block (ram,0x0010e69c) */
/* WARNING: Removing unreachable block (ram,0x0010e6ac) */
/* facebook::react::ReanimatedView_registerComponentDescriptorsFromCodegen(std::__ndk1::shared_ptr<facebook::react::ComponentDescriptorProviderRegistry
   const>) */

void facebook::react::ReanimatedView_registerComponentDescriptorsFromCodegen(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0010e68c to 0010e693 has its CatchHandler @ 0010e6e4 */
  facebook::react::ComponentDescriptorProviderRegistry::add((ComponentDescriptorProvider *)*param_1)
  ;
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0010e70c  FUN_0010e70c =====

void FUN_0010e70c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x18);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010a130(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0010e75c  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
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
  undefined1 local_8a0;
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
                    /* try { // try from 0010e7ac to 0010e7b7 has its CatchHandler @ 0010ede4 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_fd0);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_001167f0;
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
                    /* try { // try from 0010e828 to 0010e833 has its CatchHandler @ 0010ee14 */
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
  local_f80 = PTR_construction_vtable_001172e8 + 0x20;
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
  uStack_9f0 = _UNK_00107824;
  local_9f8 = _DAT_0010781c;
  local_f2b = DAT_001076d8;
  uStack_ae8 = _UNK_001076e8;
  local_af0 = _DAT_001076e0;
  uStack_a00 = _UNK_00107814;
  local_a08 = _DAT_0010780c;
  local_e14 = 0;
  uStack_a10 = _UNK_00107804;
  local_a18 = _DAT_001077fc;
  uStack_a20 = _UNK_001077f4;
  local_a28 = _DAT_001077ec;
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
  local_f80 = PTR_vtable_001172a8 + 0x20;
  local_8a0 = 0;
                    /* try { // try from 0010ec20 to 0010ec33 has its CatchHandler @ 0010ee14 */
  facebook::react::ReanimatedViewCustomProps::ReanimatedViewCustomProps
            ((ReanimatedViewCustomProps *)local_898,(PropsParserContext *)local_fe0,
             (ReanimatedViewCustomProps *)&local_f80,(RawProps *)&local_f8);
  puVar5 = PTR_PTR_001172b0;
  FUN_001101f0(local_898,PTR_PTR_001172b0 + 8);
  FUN_001101f0(&local_f80,puVar5 + 8);
  facebook::react::RawPropsParser::postPrepare();
  pvVar3 = local_120;
  puVar4 = (undefined8 *)local_110;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_120 = pvVar3;
    if ((plVar7 == (long *)0x0) || (lVar6 = FUN_0010a130(0xffffffffffffffff,plVar7 + 1), lVar6 != 0)
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
                    /* try { // try from 0010ed40 to 0010ed4b has its CatchHandler @ 0010ee18 */
        (*(code *)(&PTR_FUN_00116890)[*(uint *)((long)pvVar3 + -8)])
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


// ===== 0010ee1c  FUN_0010ee1c =====

void FUN_0010ee1c(undefined8 *param_1)

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


// ===== 0010ee70  FUN_0010ee70 =====

void FUN_0010ee70(void)

{
  __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 0010ee80  FUN_0010ee80 =====

void FUN_0010ee80(void *param_1)

{
  FUN_001104f0();
  operator_delete(param_1);
  return;
}


// ===== 0010eea4  FUN_0010eea4 =====

undefined * FUN_0010eea4(void)

{
  return PTR_ReanimatedViewComponentName_001172a0;
}


// ===== 0010eeb0  FUN_0010eeb0 =====

undefined * FUN_0010eeb0(void)

{
  return PTR_ReanimatedViewComponentName_001172a0;
}


// ===== 0010eebc  FUN_0010eebc =====

undefined8 FUN_0010eebc(void)

{
  return 0x61;
}


// ===== 0010eec4  FUN_0010eec4 =====

void FUN_0010eec4(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar6 = &PTR_FUN_00116928;
                    /* try { // try from 0010ef30 to 0010ef3f has its CatchHandler @ 0010f018 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00116978;
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
                    /* try { // try from 0010efcc to 0010efd7 has its CatchHandler @ 0010f008 */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0010f048  FUN_0010f048 =====

void FUN_0010f048(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

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
  *plVar5 = (long)&PTR_FUN_00116928;
                    /* try { // try from 0010f0a0 to 0010f0af has its CatchHandler @ 0010f1f0 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_00116978;
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
                    /* try { // try from 0010f134 to 0010f143 has its CatchHandler @ 0010f208 */
  facebook::react::YogaLayoutableShadowNode::completeClone
            ((ShadowNode *)pYVar1,(ShadowNodeFragment *)param_3);
  local_78 = pYVar1;
  local_70 = plVar5;
  FUN_0010e620(1,plVar5 + 1);
                    /* try { // try from 0010f154 to 0010f163 has its CatchHandler @ 0010f1e0 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar6 = FUN_0010a130(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 0010f1a0 to 0010f1ab has its CatchHandler @ 0010f208 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0010f230  FUN_0010f230 =====

void FUN_0010f230(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0010f240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 0010f244  FUN_0010f244 =====

void FUN_0010f244(undefined8 *param_1,ulong param_2,PropsParserContext *param_3,long *param_4,
                 RawPropsParser *param_5)

{
  ReanimatedViewCustomProps *this;
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
  ReanimatedViewCustomProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00117280
         & 1) == 0) &&
       (param_2 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00117280
                                     ), (int)param_2 != 0)) {
                    /* try { // try from 0010f678 to 0010f67b has its CatchHandler @ 0010f6a8 */
      FUN_00110ab4();
      __cxa_atexit(FUN_00110a64,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00117278
                   ,&PTR_LOOP_00116750);
      param_2 = __cxa_guard_release(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00117280
                                   );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00117278
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00117278
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      param_2 = FUN_0010e620(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::parse(param_5);
    pRVar12 = (ReanimatedViewCustomProps *)*param_4;
    if (pRVar12 == (ReanimatedViewCustomProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00117280
           & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00117280
                                     ), iVar7 != 0)) {
                    /* try { // try from 0010f5f8 to 0010f5fb has its CatchHandler @ 0010f6c0 */
        FUN_00110ab4();
        __cxa_atexit(FUN_00110a64,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00117278
                     ,&PTR_LOOP_00116750);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00117280
                           );
      }
      pRVar12 = *(ReanimatedViewCustomProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00117278
      ;
    }
    plVar9 = (long *)operator_new(0x700);
    this = (ReanimatedViewCustomProps *)(plVar9 + 3);
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_00116a90;
                    /* try { // try from 0010f324 to 0010f337 has its CatchHandler @ 0010f734 */
    facebook::react::ReanimatedViewCustomProps::ReanimatedViewCustomProps
              (this,param_3,pRVar12,(RawProps *)param_5);
                    /* try { // try from 0010f33c to 0010f34f has its CatchHandler @ 0010f74c */
    uVar8 = facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid();
    if ((((uVar8 & 1) == 0) ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid
                           (), (uVar8 & 1) == 0)) ||
       (uVar8 = facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(),
       (uVar8 & 1) == 0)) {
LAB_0010f378:
      FUN_0010e620(1,plVar9 + 1);
      if ((RawProps *)*param_4 == (RawProps *)0x0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00117280
             & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00117280
                                       ), iVar7 != 0)) {
                    /* try { // try from 0010f638 to 0010f63b has its CatchHandler @ 0010f6ac */
          FUN_00110ab4();
          __cxa_atexit(FUN_00110a64,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00117278
                       ,&PTR_LOOP_00116750);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00117280
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0010f3e0 to 0010f3f3 has its CatchHandler @ 0010f6d8 */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,
                   *(RawProps **)
                    PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00117278
                   ,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_0010f42c:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_0010f42c;
        }
        if (plVar9 != (long *)0x0) goto LAB_0010f440;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0010f394 to 0010f3a7 has its CatchHandler @ 0010f700 */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,(RawProps *)*param_4,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_0010f440;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_0010f440:
        lVar11 = FUN_0010a130(0xffffffffffffffff,plVar9 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 0010f35c to 0010f367 has its CatchHandler @ 0010f6d4 */
      __s2 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar7 = strcmp(PTR_ReanimatedViewComponentName_001172a0,__s2);
      if (iVar7 != 0) goto LAB_0010f378;
      bVar3 = false;
    }
                    /* try { // try from 0010f46c to 0010f46f has its CatchHandler @ 0010f74c */
    param_2 = facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter();
    if ((param_2 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 0010f47c to 0010f497 has its CatchHandler @ 0010f6fc */
        param_2 = folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar9 + 7));
      }
      else {
        param_2 = facebook::react::RawProps::operator_cast_to_dynamic((RawProps *)param_5);
      }
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0010f5d8 to 0010f5e7 has its CatchHandler @ 0010f6f4 */
                    /* WARNING: Subroutine does not return */
          FUN_00110c40(*(undefined8 *)PTR_name_001172c8);
        }
        goto LAB_0010f798;
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0010f5b8 to 0010f5c7 has its CatchHandler @ 0010f758 */
                    /* WARNING: Subroutine does not return */
            FUN_00110c40(*(undefined8 *)PTR_name_001172e0);
          }
          goto LAB_0010f798;
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
                    /* try { // try from 0010f518 to 0010f523 has its CatchHandler @ 0010f760 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 0010f528 to 0010f53f has its CatchHandler @ 0010f764 */
        param_2 = facebook::react::HostPlatformViewProps::setProp
                            ((PropsParserContext *)this,(uint)param_3,(char *)(ulong)uVar1,pRVar4);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 0010f550 to 0010f55b has its CatchHandler @ 0010f754 */
          param_2 = (*(code *)(&PTR_FUN_00116890)[local_a0])(&uStack_d1,local_d0);
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
LAB_0010f798:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


// ===== 0010f79c  FUN_0010f79c =====

void FUN_0010f79c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0010f7a4  FUN_0010f7a4 =====

void FUN_0010f7a4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0010f7ac  FUN_0010f7ac =====

void FUN_0010f7ac(undefined8 *param_1,long param_2,long param_3)

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
  *plVar5 = (long)&PTR_FUN_00116c38;
  local_68 = *(EventTarget **)(param_3 + 8);
  local_60 = *(long **)(param_3 + 0x10);
  pEVar1 = (EventTarget *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  if (local_60 != (long *)0x0) {
    FUN_0010e620(1,local_60 + 1);
  }
                    /* try { // try from 0010f81c to 0010f827 has its CatchHandler @ 0010fb48 */
  facebook::react::EventTarget::EventTarget(pEVar1,&local_68,*(undefined4 *)(param_3 + 4));
  plVar7 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar6 = FUN_0010a130(0xffffffffffffffff,local_60 + 1), lVar6 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  local_98 = pEVar1;
  local_90 = plVar5;
                    /* try { // try from 0010f85c to 0010f863 has its CatchHandler @ 0010fb38 */
  plVar7 = (long *)operator_new(0x68);
  *plVar7 = (long)&PTR_FUN_00116ae0;
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
    FUN_0010e620(1,local_70 + 0x10);
  }
                    /* try { // try from 0010f89c to 0010f8ab has its CatchHandler @ 0010fb0c */
  facebook::react::EventEmitter::EventEmitter(pEVar2,&local_68,&local_78);
  *(undefined ***)pEVar2 = &PTR_FUN_00116ba8;
                    /* try { // try from 0010f8b8 to 0010f8bf has its CatchHandler @ 0010fafc */
  puVar8 = (undefined8 *)operator_new(0x58);
  *puVar8 = &PTR_FUN_00116bc8;
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
  plVar7[3] = (long)&PTR_FUN_00116b30;
  if (local_70 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar6 = FUN_0010a130(0xffffffffffffffff,local_60 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_90;
  local_88 = pEVar2;
  local_80 = plVar7;
  if ((local_90 != (long *)0x0) &&
     (lVar6 = FUN_0010a130(0xffffffffffffffff,local_90 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0010f96c to 0010f973 has its CatchHandler @ 0010faec */
  puVar8 = (undefined8 *)operator_new(0x1a0);
  *puVar8 = &PTR_FUN_00116c88;
  pSVar3 = (ShadowNodeFamily *)(puVar8 + 4);
  puVar8[1] = 0;
  puVar8[2] = 0;
  local_68 = (EventTarget *)local_88;
  local_60 = local_80;
  if (local_80 != (long *)0x0) {
    FUN_0010e620(1,local_80 + 1);
  }
  local_78 = *(undefined8 *)(param_2 + 8);
  local_70 = *(long *)(param_2 + 0x10);
  if (local_70 != 0) {
    FUN_0010e620(1,local_70 + 0x10);
  }
                    /* try { // try from 0010f9bc to 0010f9d3 has its CatchHandler @ 0010fabc */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar3,param_3,&local_68,&local_78,param_2);
  if (local_70 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar6 = FUN_0010a130(0xffffffffffffffff,local_60 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar2 = local_88;
  *param_1 = pSVar3;
  param_1[1] = puVar8;
  local_a8 = pSVar3;
  local_a0 = puVar8;
  FUN_0010e620(1,puVar8 + 2);
                    /* try { // try from 0010fa28 to 0010fa33 has its CatchHandler @ 0010fa9c */
  facebook::react::EventEmitter::setShadowNodeFamily(pEVar2,&local_a8);
  if (local_a0 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_80;
  if ((local_80 != (long *)0x0) &&
     (lVar6 = FUN_0010a130(0xffffffffffffffff,local_80 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0010fb80  FUN_0010fb80 =====

void FUN_0010fb80(void)

{
  return;
}


// ===== 0010fb84  FUN_0010fb84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010fb84(undefined8 *param_1,undefined8 *param_2)

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
  uVar6 = DAT_001076d8;
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
  uVar2 = _UNK_001076e8;
  uVar6 = _DAT_001076e0;
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
  uVar4 = _UNK_00107824;
  uVar3 = _DAT_0010781c;
  uVar2 = _UNK_00107814;
  uVar6 = _DAT_0010780c;
  *(undefined1 *)((long)param_1 + 0x34c) = 0;
  *param_1 = uVar7;
  *(undefined8 *)((long)param_1 + 0x344) = 0x3f800000;
  param_1[0xb2] = uVar4;
  param_1[0xb1] = uVar3;
  param_1[0xb0] = uVar2;
  param_1[0xaf] = uVar6;
  uVar4 = _UNK_00107804;
  uVar3 = _DAT_001077fc;
  uVar2 = _UNK_001077f4;
  uVar6 = _DAT_001077ec;
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


// ===== 0010ff38  FUN_0010ff38 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0010ff38(long param_1)

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


// ===== 00110134  FUN_00110134 =====

void FUN_00110134(undefined8 param_1,long param_2)

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


// ===== 00110148  FUN_00110148 =====

void FUN_00110148(undefined8 param_1,long param_2)

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


// ===== 0011015c  FUN_0011015c =====

void FUN_0011015c(long param_1)

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


// ===== 001101f0  FUN_001101f0 =====

void FUN_001101f0(undefined8 *param_1,undefined8 *param_2)

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
  FUN_00110300(param_1,param_2 + 1);
  return;
}


// ===== 00110300  FUN_00110300 =====

void FUN_00110300(undefined8 *param_1,undefined8 *param_2)

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
                    /* try { // try from 001103c8 to 001103cf has its CatchHandler @ 00110468 */
          (*(code *)(&PTR_FUN_00116880)[*(uint *)((long)pvVar4 + -8)])
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
  FUN_0010ff38(param_1 + 0x3d);
  *param_1 = param_2[1];
  FUN_0011015c(param_1 + 10);
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


// ===== 0011046c  FUN_0011046c =====

void FUN_0011046c(long param_1)

{
  long lVar1;
  undefined1 uStack_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
                    /* try { // try from 001104a4 to 001104af has its CatchHandler @ 001104dc */
    (*(code *)(&PTR_FUN_00116890)[*(uint *)(param_1 + 0x30)])(&uStack_29,param_1);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001104e0  FUN_001104e0 =====

void FUN_001104e0(void)

{
  folly::dynamic::destroy();
  return;
}


// ===== 001104e8  FUN_001104e8 =====

void FUN_001104e8(undefined8 param_1,long param_2)

{
  facebook::jsi::Value::~Value((Value *)(param_2 + 8));
  return;
}


// ===== 001104f0  FUN_001104f0 =====

void FUN_001104f0(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  
  pvVar1 = (void *)param_1[0xd];
  *param_1 = &PTR_FUN_001168b0;
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
  if ((plVar3 != (long *)0x0) && (lVar2 = FUN_0010a130(0xffffffffffffffff,plVar3 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = (long *)param_1[4];
  if ((plVar3 == (long *)0x0) || (lVar2 = FUN_0010a130(0xffffffffffffffff,plVar3 + 1), lVar2 != 0))
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


// ===== 001105c4  FUN_001105c4 =====

void FUN_001105c4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1105c8);
  (*pcVar1)();
}


// ===== 001105c8  FUN_001105c8 =====

void FUN_001105c8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010a130(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00110618  FUN_00110618 =====

void FUN_00110618(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00116928;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00110628  FUN_00110628 =====

void FUN_00110628(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00116928;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00110658  FUN_00110658 =====

void FUN_00110658(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00110660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00110664  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00117380)();
  return;
}


// ===== 00110668  FUN_00110668 =====

void FUN_00110668(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_001172b8 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_0010a130(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
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
  FUN_0011015c(param_1 + 0x23);
  FUN_00110878(param_1);
  return;
}


// ===== 00110720  FUN_00110720 =====

void FUN_00110720(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_001172b8 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_0010a130(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
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
  FUN_0011015c(param_1 + 0x23);
  FUN_00110878(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001107e0  FUN_001107e0 =====

void FUN_001107e0(long param_1)

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


// ===== 00110848  FUN_00110848 =====

bool FUN_00110848(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 00110860  FUN_00110860 =====

bool FUN_00110860(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 00110878  FUN_00110878 =====

void FUN_00110878(NativeState *param_1)

{
  long lVar1;
  long *plVar2;
  
  *(undefined **)param_1 = PTR_vtable_001172c0 + 0x10;
  if (*(long *)(param_1 + 0x60) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = *(long **)(param_1 + 0x48);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010a130(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = *(long **)(param_1 + 0x30);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010a130(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = *(long **)(param_1 + 0x20);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010a130(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = *(long **)(param_1 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010a130(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  facebook::jsi::NativeState::~NativeState(param_1);
  return;
}


// ===== 00110974  FUN_00110974 =====

void FUN_00110974(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010a130(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001109c4  FUN_001109c4 =====

void FUN_001109c4(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010a130(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00110a14  FUN_00110a14 =====

void FUN_00110a14(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010a130(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00110a64  FUN_00110a64 =====

void FUN_00110a64(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010a130(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00110ab4  FUN_00110ab4 =====

void FUN_00110ab4(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x700);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00116a40;
  memset(__s,0,0x6e8);
                    /* try { // try from 00110af0 to 00110b03 has its CatchHandler @ 00110b74 */
  FUN_0010fb84(__s,PTR_PTR_001172b0 + 0x10);
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
  *(undefined1 *)((long)puVar2 + 0x6f4) = 0;
  puVar1 = PTR_vtable_001172a8;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00117278
  ;
  *(undefined1 *)(puVar2 + 0xdf) = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 00110b90  FUN_00110b90 =====

void FUN_00110b90(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00116a40;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00110ba0  FUN_00110ba0 =====

void FUN_00110ba0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00116a40;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00110bd0  FUN_00110bd0 =====

void FUN_00110bd0(long param_1)

{
  FUN_001101f0(param_1 + 0x18,PTR_PTR_001172b0 + 8);
  return;
}


// ===== 00110be4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00117380)();
  return;
}


// ===== 00110be8  FUN_00110be8 =====

void FUN_00110be8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00116a90;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00110bf8  FUN_00110bf8 =====

void FUN_00110bf8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00116a90;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00110c28  FUN_00110c28 =====

void FUN_00110c28(long param_1)

{
  FUN_001101f0(param_1 + 0x18,PTR_PTR_001172b0 + 8);
  return;
}


// ===== 00110c3c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00117380)();
  return;
}


// ===== 00110c40  FUN_00110c40 =====

void FUN_00110c40(undefined8 param_1,undefined4 param_2)

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
                    /* try { // try from 00110c6c to 00110c7b has its CatchHandler @ 00110ca4 */
  folly::TypeError::TypeError(aTStack_38,local_50,param_2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00110c8c to 00110c93 has its CatchHandler @ 00110c94 */
    uVar2 = FUN_00110cd4(aTStack_38);
                    /* catch() { ... } // from try @ 00110c8c with catch @ 00110c94 */
    std::runtime_error::~runtime_error((runtime_error *)aTStack_38);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_0010a954(uVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00110cd4  FUN_00110cd4 =====

void FUN_00110cd4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
  FUN_00110d9c(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_typeinfo_00117288,PTR__runtime_error_00117290);
}


// ===== 00110d10  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc =====

void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc
               (long *param_1,char *param_2)

{
  size_t __n;
  void *__dest;
  
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_00110dec(param_1);
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00110d80;
  }
  else {
    __dest = operator_new((__n | 0xf) + 1);
    param_1[1] = __n;
    param_1[2] = (long)__dest;
    *param_1 = (__n | 0xf) + 2;
  }
  memmove(__dest,param_2,__n);
LAB_00110d80:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


// ===== 00110d9c  FUN_00110d9c =====

void FUN_00110d9c(runtime_error *param_1,runtime_error *param_2)

{
  std::runtime_error::runtime_error(param_1,param_2);
  *(undefined ***)param_1 = &PTR__runtime_error_00116cf0;
  return;
}


// ===== 00110dc8  FUN_00110dc8 =====

void FUN_00110dc8(runtime_error *param_1)

{
  std::runtime_error::~runtime_error(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00110dec  FUN_00110dec =====

void FUN_00110dec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00110e00("basic_string");
}


// ===== 00110e00  FUN_00110e00 =====

void FUN_00110e00(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 00110e1c to 00110e23 has its CatchHandler @ 00110e3c */
  FUN_00110e50(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_typeinfo_001172d0,PTR__length_error_00117298);
}


// ===== 00110e50  FUN_00110e50 =====

void FUN_00110e50(logic_error *param_1,char *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  *(undefined **)param_1 = PTR_vtable_001172d8 + 0x10;
  return;
}


// ===== 00110e80  FUN_00110e80 =====

void FUN_00110e80(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010a130(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00110ed0  FUN_00110ed0 =====

void FUN_00110ed0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010a130(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00110f20  FUN_00110f20 =====

void FUN_00110f20(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00116ae0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00110f30  FUN_00110f30 =====

void FUN_00110f30(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00116ae0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00110f60  FUN_00110f60 =====

void FUN_00110f60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00110f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00110f6c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00117380)();
  return;
}


// ===== 00110f70  FUN_00110f70 =====

void FUN_00110f70(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_00116ba8;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010a130(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_00116c18;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010a130(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00111024  FUN_00111024 =====

void FUN_00111024(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_00116ba8;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010a130(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_00116c18;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010a130(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 001110d4  FUN_001110d4 =====

void FUN_001110d4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_00116ba8;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010a130(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_00116c18;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010a130(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 00111184  FUN_00111184 =====

void FUN_00111184(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00116bc8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00111194  FUN_00111194 =====

void FUN_00111194(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00116bc8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001111c4  FUN_001111c4 =====

void FUN_001111c4(long param_1)

{
  std::__ndk1::mutex::~mutex((mutex *)(param_1 + 0x18));
  return;
}


// ===== 001111cc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00117380)();
  return;
}


// ===== 001111d0  FUN_001111d0 =====

void FUN_001111d0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_00116c18;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010a130(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00111248  FUN_00111248 =====

void FUN_00111248(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_00116c18;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010a130(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 001112bc  FUN_001112bc =====

void FUN_001112bc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00116c38;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 001112cc  FUN_001112cc =====

void FUN_001112cc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00116c38;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001112fc  FUN_001112fc =====

void FUN_001112fc(long param_1)

{
  long lVar1;
  long *plVar2;
  
  facebook::jsi::Value::~Value((Value *)(param_1 + 0x30));
  plVar2 = *(long **)(param_1 + 0x20);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010a130(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00111358  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00117380)();
  return;
}


// ===== 0011135c  FUN_0011135c =====

void FUN_0011135c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010a130(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001113ac  FUN_001113ac =====

void FUN_001113ac(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00116c88;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 001113bc  FUN_001113bc =====

void FUN_001113bc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00116c88;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001113ec  FUN_001113ec =====

void FUN_001113ec(long param_1)

{
  facebook::react::ShadowNodeFamily::~ShadowNodeFamily((ShadowNodeFamily *)(param_1 + 0x20));
  return;
}


// ===== 001113f4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00117380)();
  return;
}


// ===== 001113f8  FUN_001113f8 =====

void FUN_001113f8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0010a130(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00111448  facebook::react::ReanimatedViewCustomProps::ReanimatedViewCustomProps =====

/* facebook::react::ReanimatedViewCustomProps::ReanimatedViewCustomProps(facebook::react::PropsParserContext
   const&, facebook::react::ReanimatedViewCustomProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::ReanimatedViewCustomProps::ReanimatedViewCustomProps
          (ReanimatedViewCustomProps *this,PropsParserContext *param_1,
          ReanimatedViewCustomProps *param_2,RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  function *in_x4;
  long lVar4;
  undefined1 local_90 [32];
  long *local_70;
  long local_58;
  
  plVar3 = (long *)local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 00111488 to 00111497 has its CatchHandler @ 0011153c */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if (local_70 == (long *)local_90) {
    lVar4 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_001114c4;
    lVar4 = 5;
    plVar3 = local_70;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_001114c4:
  local_90[0] = 0;
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 001114d0 to 001114f3 has its CatchHandler @ 00111528 */
  bVar2 = FUN_0011158c(param_2);
  this[0x6e0] = (ReanimatedViewCustomProps)(bVar2 & 1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0011158c  FUN_0011158c =====

void FUN_0011158c(undefined8 param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                 char *param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  char local_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_2,param_3,param_6);
  if (lVar2 == 0) {
    local_60[0] = *param_4;
  }
  else {
    uVar3 = FUN_00111de4();
    if ((uVar3 & 1) == 0) {
      local_60[0] = *param_5;
    }
    else {
                    /* try { // try from 0011161c to 00111627 has its CatchHandler @ 00111638 */
      FUN_00111e20(lVar2,local_60);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_60[0] != '\0');
}


// ===== 00111758  facebook::react::ReanimatedViewCustomProps::ReanimatedViewCustomProps =====

/* facebook::react::ReanimatedViewCustomProps::ReanimatedViewCustomProps(facebook::react::PropsParserContext
   const&, facebook::react::ReanimatedViewCustomProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::ReanimatedViewCustomProps::ReanimatedViewCustomProps
          (ReanimatedViewCustomProps *this,PropsParserContext *param_1,
          ReanimatedViewCustomProps *param_2,RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  undefined1 local_90 [32];
  long *local_70;
  long local_58;
  
  plVar3 = (long *)local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 00111794 to 001117b7 has its CatchHandler @ 00111864 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_001172b0 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if (local_70 == (long *)local_90) {
    lVar4 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_001117e4;
    lVar4 = 5;
    plVar3 = local_70;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_001117e4:
  local_90[0] = 0;
  *(undefined **)this = PTR_vtable_001172a8 + 0x20;
                    /* try { // try from 001117f8 to 0011181b has its CatchHandler @ 00111850 */
  bVar2 = FUN_0011158c(param_1,param_3,"hasEnteringAnimation",param_2 + 0x6e0,local_90,0,0);
  this[0x6e0] = (ReanimatedViewCustomProps)(bVar2 & 1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001118b4  facebook::react::ReanimatedViewCustomProps::getDiffPropsImplementationTarget =====

/* facebook::react::ReanimatedViewCustomProps::getDiffPropsImplementationTarget() const */

char * facebook::react::ReanimatedViewCustomProps::getDiffPropsImplementationTarget(void)

{
  return "ReanimatedView";
}


// ===== 001118c0  facebook::react::ReanimatedViewCustomProps::getDiffProps =====

/* facebook::react::ReanimatedViewCustomProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::ReanimatedViewCustomProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  Props PVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  ulong uVar6;
  Props *in_x1;
  undefined4 *in_x8;
  long lVar7;
  float fVar8;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  if (((DAT_0011c590 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0011c590), iVar4 != 0)) {
    memset(&DAT_0011bea8,0,0x6e8);
                    /* try { // try from 00111a90 to 00111a93 has its CatchHandler @ 00111ac0 */
    FUN_00111afc();
    __cxa_atexit(FUN_00111b88,&DAT_0011bea8,&PTR_LOOP_00116750);
    __cxa_guard_release(&DAT_0011c590);
  }
  pPVar1 = (Props *)&DAT_0011bea8;
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
      piVar5 = (int *)folly::dynamic::operator[]();
      if (*piVar5 != 2) {
        folly::dynamic::destroy();
        *piVar5 = 2;
      }
      *(Props *)(piVar5 + 2) = PVar2;
    }
    uVar6 = facebook::react::ReactNativeFeatureFlags::usePullModelOnAndroid();
    if ((uVar6 & 1) != 0) {
      if ((in_x1 == (Props *)0x0) && (param_1[0x6e0] != (Props)0x0)) {
        piVar5 = (int *)folly::dynamic::operator[]();
        if (*piVar5 != 3) {
          folly::dynamic::destroy();
          *piVar5 = 3;
        }
        piVar5[2] = 0;
        piVar5[3] = 0;
      }
      else if (param_1[0x6e0] != (Props)0x0) {
        fVar8 = *(float *)(param_1 + 0x344);
        piVar5 = (int *)folly::dynamic::operator[]();
        if (*piVar5 != 3) {
          folly::dynamic::destroy();
          *piVar5 = 3;
        }
        *(double *)(piVar5 + 2) = (double)fVar8;
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00111afc  FUN_00111afc =====

void FUN_00111afc(void)

{
  FUN_0010fb84(&DAT_0011bea8,PTR_PTR_001172b0 + 0x10);
  DAT_0011c484 = 0;
  DAT_0011c488 = 0;
  DAT_0011c4e8 = 0;
  DAT_0011c4f0 = 0;
  DAT_0011c550 = 0;
  DAT_0011c560 = 0;
  DAT_0011c564 = 0;
  DAT_0011c568 = 0;
  DAT_0011c56c = 0;
  DAT_0011c570 = 0;
  DAT_0011c574 = 0;
  DAT_0011c578 = 0;
  DAT_0011c57c = 0;
  DAT_0011c580 = 0;
  DAT_0011c584 = 0;
  DAT_0011c558 = 0;
  DAT_0011c55c = 0;
  DAT_0011c588 = 0;
  DAT_0011bea8 = PTR_vtable_001172a8 + 0x20;
  return;
}


// ===== 00111b88  FUN_00111b88 =====

void FUN_00111b88(undefined8 param_1)

{
  FUN_001101f0(param_1,PTR_PTR_001172b0 + 8);
  return;
}


// ===== 00111b98  FUN_00111b98 =====

void FUN_00111b98(undefined8 param_1)

{
  FUN_001101f0(param_1,PTR_VTT_001172f8);
  return;
}


// ===== 00111ba4  FUN_00111ba4 =====

void FUN_00111ba4(void *param_1)

{
  FUN_001101f0(param_1,PTR_VTT_001172f8);
  operator_delete(param_1);
  return;
}


// ===== 00111bd0  FUN_00111bd0 =====

void FUN_00111bd0(undefined8 param_1)

{
  FUN_00110300(param_1,&PTR_PTR_FUN_00116f28);
  return;
}


// ===== 00111bdc  FUN_00111bdc =====

void FUN_00111bdc(void *param_1)

{
  FUN_00110300(param_1,&PTR_PTR_FUN_00116f28);
  operator_delete(param_1);
  return;
}


// ===== 00111c08  FUN_00111c08 =====

void FUN_00111c08(undefined4 *param_1)

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


// ===== 00111c7c  FUN_00111c7c =====

void FUN_00111c7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00116fe0;
  FUN_0011015c(param_1 + 10);
  *param_1 = &PTR_FUN_00117020;
  folly::dynamic::destroy();
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 00111cd4  FUN_00111cd4 =====

void FUN_00111cd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00116fe0;
  FUN_0011015c(param_1 + 10);
  *param_1 = &PTR_FUN_00117020;
  folly::dynamic::destroy();
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00111d28  FUN_00111d28 =====

void FUN_00111d28(long *param_1)

{
  *param_1 = (long)(PTR_vtable_00117300 + 0x20);
  folly::dynamic::destroy();
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 00111d70  FUN_00111d70 =====

void FUN_00111d70(long *param_1)

{
  *param_1 = (long)(PTR_vtable_00117300 + 0x20);
  folly::dynamic::destroy();
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00111db4  FUN_00111db4 =====

void FUN_00111db4(void *param_1)

{
  FUN_001101f0(param_1,PTR_PTR_001172b0 + 8);
  operator_delete(param_1);
  return;
}


// ===== 00111de4  FUN_00111de4 =====

bool FUN_00111de4(int *param_1)

{
  if (param_1[0xc] == 1) {
    return 1 < (uint)param_1[2];
  }
  if (param_1[0xc] == 0) {
    return *param_1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00111ea8();
}


// ===== 00111e20  FUN_00111e20 =====

void FUN_00111e20(int *param_1,byte *param_2)

{
  byte bVar1;
  
  if (param_1[0xc] == 1) {
    bVar1 = facebook::jsi::Value::asBool();
  }
  else {
    if (param_1[0xc] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00111ea8();
    }
    if (*param_1 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00110c40(*(undefined8 *)PTR_name_00117318);
    }
    bVar1 = (char)param_1[2] != '\0';
  }
  *param_2 = bVar1 & 1;
  return;
}


// ===== 00111e8c  FUN_00111e8c =====

void FUN_00111e8c(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  
  uVar1 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar1 = (ulong)(*param_2 >> 1);
  }
  FUN_00111edc(param_1,pbVar2,uVar1);
  return;
}


// ===== 00111ea8  FUN_00111ea8 =====

void FUN_00111ea8(void)

{
  long *plVar1;
  
  plVar1 = (long *)__cxa_allocate_exception(8);
  *plVar1 = (long)(PTR_vtable_00117310 + 0x10);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar1,PTR_typeinfo_00117308,PTR__exception_001172f0);
}


// ===== 00111edc  FUN_00111edc =====

basic_ostream * FUN_00111edc(basic_ostream *param_1,long param_2,long param_3)

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
                    /* try { // try from 00111f14 to 00111f1f has its CatchHandler @ 00112140 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry(local_90,param_1);
  if (local_90[0] == (sentry)0x0) goto LAB_001120c8;
  lVar8 = *(long *)(*(long *)param_1 + -0x18);
  uVar3 = *(uint *)(param_1 + lVar8 + 0x90);
  plVar9 = *(long **)(param_1 + lVar8 + 0x28);
  uVar1 = *(uint *)(param_1 + lVar8 + 8);
  if (uVar3 == 0xffffffff) {
                    /* try { // try from 00111f48 to 00111f53 has its CatchHandler @ 00112130 */
    std::__ndk1::ios_base::getloc();
                    /* try { // try from 00111f54 to 00111f73 has its CatchHandler @ 0011211c */
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
                    /* try { // try from 00111fc0 to 0011200b has its CatchHandler @ 00112130 */
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
                    /* try { // try from 00112050 to 0011205b has its CatchHandler @ 00112104 */
        uVar6 = (**(code **)(*plVar9 + 0x60))(plVar9,pvVar10,__n);
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
        if (uVar6 != __n) goto LAB_001120ac;
      }
      lVar11 = (param_2 + param_3) - lVar7;
                    /* try { // try from 0011208c to 0011209b has its CatchHandler @ 00112130 */
      if ((lVar11 < 1) ||
         (lVar7 = (**(code **)(*plVar9 + 0x60))(plVar9,lVar7,lVar11), lVar7 == lVar11)) {
        *(undefined8 *)(param_1 + lVar8 + 0x18) = 0;
        goto LAB_001120c8;
      }
    }
  }
LAB_001120ac:
                    /* try { // try from 001120c0 to 001120c7 has its CatchHandler @ 0011212c */
  std::__ndk1::ios_base::clear((int)param_1 + (int)*(undefined8 *)(*(long *)param_1 + -0x18));
LAB_001120c8:
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(local_90);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00112190  FUN_00112190 =====

void FUN_00112190(void)

{
  (*(code *)PTR_00117340)();
  return;
}


// ===== 001121b0  <EXTERNAL>::__cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00117348)();
  return;
}


// ===== 001121c0  <EXTERNAL>::__cxa_atexit =====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00117350)();
  return;
}


// ===== 001121d0  <EXTERNAL>::__register_atfork =====

void __register_atfork(void)

{
  (*(code *)PTR___register_atfork_00117358)();
  return;
}


// ===== 001121e0  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc =====

void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc(void)

{
  (*(code *)
    PTR__ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc_00117360
  )();
  return;
}


// ===== 001121f0  <EXTERNAL>::facebook::react::ComponentDescriptorProviderRegistry::add =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ComponentDescriptorProviderRegistry::add(ComponentDescriptorProvider *param_1)

{
  (*(code *)PTR_add_00117368)();
  return;
}


// ===== 00112200  <EXTERNAL>::std::__ndk1::__shared_weak_count::__release_weak =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__release_weak(void)

{
  (*(code *)PTR___release_weak_00117370)();
  return;
}


// ===== 00112210  <EXTERNAL>::operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00117378)();
  return pvVar1;
}


// ===== 00112220  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00117380)();
  return;
}


// ===== 00112230  <EXTERNAL>::__cxa_begin_catch =====

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_00117388)();
  return;
}


// ===== 00112240  <EXTERNAL>::std::terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
  (*(code *)PTR_terminate_00117390)();
  return;
}


// ===== 00112250  <EXTERNAL>::facebook::react::ComponentDescriptor::ComponentDescriptor =====

void __thiscall
facebook::react::ComponentDescriptor::ComponentDescriptor
          (ComponentDescriptor *this,ComponentDescriptorParameters *param_1,RawPropsParser *param_2)

{
  (*(code *)PTR_ComponentDescriptor_00117398)();
  return;
}


// ===== 00112260  <EXTERNAL>::facebook::react::RawProps::parse =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::parse(RawPropsParser *param_1)

{
  (*(code *)PTR_parse_001173a0)();
  return;
}


// ===== 00112270  facebook::react::ReanimatedViewCustomProps::ReanimatedViewCustomProps =====

void __thiscall
facebook::react::ReanimatedViewCustomProps::ReanimatedViewCustomProps
          (ReanimatedViewCustomProps *this,PropsParserContext *param_1,
          ReanimatedViewCustomProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_ReanimatedViewCustomProps_001173a8)();
  return;
}


// ===== 00112280  <EXTERNAL>::facebook::react::RawPropsParser::postPrepare =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawPropsParser::postPrepare(void)

{
  (*(code *)PTR_postPrepare_001173b0)();
  return;
}


// ===== 00112290  <EXTERNAL>::facebook::jsi::Value::~Value =====

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
  (*(code *)PTR__Value_001173b8)();
  return;
}


// ===== 001122a0  <EXTERNAL>::std::__ndk1::__shared_mutex_base::__shared_mutex_base =====

void __thiscall std::__ndk1::__shared_mutex_base::__shared_mutex_base(__shared_mutex_base *this)

{
  (*(code *)PTR___shared_mutex_base_001173c0)();
  return;
}


// ===== 001122b0  <EXTERNAL>::folly::dynamic::destroy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::dynamic::destroy(void)

{
  (*(code *)PTR_destroy_001173c8)();
  return;
}


// ===== 001122c0  <EXTERNAL>::std::__ndk1::condition_variable::~condition_variable =====

void __thiscall std::__ndk1::condition_variable::~condition_variable(condition_variable *this)

{
  (*(code *)PTR__condition_variable_001173d0)();
  return;
}


// ===== 001122d0  <EXTERNAL>::std::__ndk1::mutex::~mutex =====

void __thiscall std::__ndk1::mutex::~mutex(mutex *this)

{
  (*(code *)PTR__mutex_001173d8)();
  return;
}


// ===== 001122e0  <EXTERNAL>::__cxa_allocate_exception =====

void __cxa_allocate_exception(void)

{
  (*(code *)PTR___cxa_allocate_exception_001173e0)();
  return;
}


// ===== 001122f0  <EXTERNAL>::__cxa_throw =====

void __cxa_throw(void)

{
  (*(code *)PTR___cxa_throw_001173e8)();
  return;
}


// ===== 00112300  <EXTERNAL>::std::__ndk1::__shared_weak_count::~__shared_weak_count =====

void __thiscall std::__ndk1::__shared_weak_count::~__shared_weak_count(__shared_weak_count *this)

{
  (*(code *)PTR____shared_weak_count_001173f0)();
  return;
}


// ===== 00112310  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::completeClone =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::completeClone
               (ShadowNode *param_1,ShadowNodeFragment *param_2)

{
  (*(code *)PTR_completeClone_001173f8)();
  return;
}


// ===== 00112320  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode =====

void __thiscall facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(void)

{
  (*(code *)PTR_YogaLayoutableShadowNode_00117400)();
  return;
}


// ===== 00112330  <EXTERNAL>::facebook::jsi::NativeState::~NativeState =====

void __thiscall facebook::jsi::NativeState::~NativeState(NativeState *this)

{
  (*(code *)PTR__NativeState_00117408)();
  return;
}


// ===== 00112340  <EXTERNAL>::facebook::react::LayoutableShadowNode::getLayoutMetrics =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::getLayoutMetrics(void)

{
  (*(code *)PTR_getLayoutMetrics_00117410)();
  return;
}


// ===== 00112350  <EXTERNAL>::facebook::react::BaseViewProps::resolveTransform =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::BaseViewProps::resolveTransform(LayoutMetrics *param_1)

{
  (*(code *)PTR_resolveTransform_00117418)();
  return;
}


// ===== 00112360  <EXTERNAL>::facebook::react::ShadowNode::transferRuntimeShadowNodeReference =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::transferRuntimeShadowNodeReference
               (shared_ptr *param_1,ShadowNodeFragment *param_2)

{
  (*(code *)PTR_transferRuntimeShadowNodeReference_00117420)();
  return;
}


// ===== 00112370  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode =====

void __thiscall
facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
          (YogaLayoutableShadowNode *this,ShadowNode *param_1,ShadowNodeFragment *param_2)

{
  (*(code *)PTR_YogaLayoutableShadowNode_00117428)();
  return;
}


// ===== 00112380  <EXTERNAL>::facebook::react::RawProps::isEmpty =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::isEmpty(void)

{
  (*(code *)PTR_isEmpty_00117430)();
  return;
}


// ===== 00112390  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid(void)

{
  (*(code *)PTR_enableExclusivePropsUpdateAndroid_00117438)();
  return;
}


// ===== 001123a0  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid(void)

{
  (*(code *)PTR_enableAccumulatedUpdatesInRawPropsAndroid_00117440)();
  return;
}


// ===== 001123b0  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(void)

{
  (*(code *)PTR_enablePropsUpdateReconciliationAndroid_00117448)();
  return;
}


// ===== 001123c0  <EXTERNAL>::strcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00117450)((int)__s1);
  return iVar1;
}


// ===== 001123d0  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter(void)

{
  (*(code *)PTR_enableCppPropsIteratorSetter_00117458)();
  return;
}


// ===== 001123e0  <EXTERNAL>::folly::dynamic::dynamic =====

void __thiscall folly::dynamic::dynamic(dynamic *this,dynamic *param_1)

{
  (*(code *)PTR_dynamic_00117460)();
  return;
}


// ===== 001123f0  <EXTERNAL>::facebook::react::RawProps::operator.cast.to.dynamic =====

void __thiscall facebook::react::RawProps::operator_cast_to_dynamic(RawProps *this)

{
  (*(code *)PTR_operator_cast_to_dynamic_00117468)();
  return;
}


// ===== 00112400  <EXTERNAL>::facebook::react::HostPlatformViewProps::setProp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::HostPlatformViewProps::setProp
               (PropsParserContext *param_1,uint param_2,char *param_3,RawValue *param_4)

{
  (*(code *)PTR_setProp_00117470)(param_1,param_2);
  return;
}


// ===== 00112410  <EXTERNAL>::__cxa_guard_acquire =====

void __cxa_guard_acquire(void)

{
  (*(code *)PTR___cxa_guard_acquire_00117478)();
  return;
}


// ===== 00112420  <EXTERNAL>::__cxa_guard_abort =====

void __cxa_guard_abort(void)

{
  (*(code *)PTR___cxa_guard_abort_00117480)();
  return;
}


// ===== 00112430  <EXTERNAL>::__cxa_guard_release =====

void __cxa_guard_release(void)

{
  (*(code *)PTR___cxa_guard_release_00117488)();
  return;
}


// ===== 00112440  <EXTERNAL>::facebook::react::Props::initializeDynamicProps =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::Props::initializeDynamicProps
               (Props *param_1,RawProps *param_2,function *param_3)

{
  (*(code *)PTR_initializeDynamicProps_00117490)();
  return;
}


// ===== 00112450  <EXTERNAL>::folly::TypeError::TypeError =====

void __thiscall folly::TypeError::TypeError(void)

{
  (*(code *)PTR_TypeError_00117498)();
  return;
}


// ===== 00112460  <EXTERNAL>::std::runtime_error::~runtime_error =====

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
  (*(code *)PTR__runtime_error_001174a0)();
  return;
}


// ===== 00112470  <EXTERNAL>::std::runtime_error::runtime_error =====

void __thiscall std::runtime_error::runtime_error(runtime_error *this,runtime_error *param_1)

{
  (*(code *)PTR_runtime_error_001174a8)();
  return;
}


// ===== 00112480  <EXTERNAL>::__cxa_free_exception =====

void __cxa_free_exception(void)

{
  (*(code *)PTR___cxa_free_exception_001174b0)();
  return;
}


// ===== 00112490  <EXTERNAL>::std::logic_error::logic_error =====

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
  (*(code *)PTR_logic_error_001174b8)();
  return;
}


// ===== 001124a0  <EXTERNAL>::strlen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_001174c0)();
  return sVar1;
}


// ===== 001124b0  <EXTERNAL>::facebook::react::EventEmitter::setShadowNodeFamily =====

void facebook::react::EventEmitter::setShadowNodeFamily(void)

{
  (*(code *)PTR_setShadowNodeFamily_001174c8)();
  return;
}


// ===== 001124c0  <EXTERNAL>::facebook::react::EventEmitter::EventEmitter =====

void __thiscall facebook::react::EventEmitter::EventEmitter(void)

{
  (*(code *)PTR_EventEmitter_001174d0)();
  return;
}


// ===== 001124d0  <EXTERNAL>::facebook::react::EventTarget::EventTarget =====

void __thiscall facebook::react::EventTarget::EventTarget(void)

{
  (*(code *)PTR_EventTarget_001174d8)();
  return;
}


// ===== 001124e0  <EXTERNAL>::facebook::react::ShadowNodeFamily::ShadowNodeFamily =====

void __thiscall facebook::react::ShadowNodeFamily::ShadowNodeFamily(void)

{
  (*(code *)PTR_ShadowNodeFamily_001174e0)();
  return;
}


// ===== 001124f0  <EXTERNAL>::facebook::react::ShadowNodeFamily::~ShadowNodeFamily =====

void __thiscall facebook::react::ShadowNodeFamily::~ShadowNodeFamily(ShadowNodeFamily *this)

{
  (*(code *)PTR__ShadowNodeFamily_001174e8)();
  return;
}


// ===== 00112500  <EXTERNAL>::facebook::react::HostPlatformViewProps::HostPlatformViewProps =====

void __thiscall
facebook::react::HostPlatformViewProps::HostPlatformViewProps
          (HostPlatformViewProps *this,PropsParserContext *param_1,HostPlatformViewProps *param_2,
          RawProps *param_3,function *param_4)

{
  (*(code *)PTR_HostPlatformViewProps_001174f0)();
  return;
}


// ===== 00112510  <EXTERNAL>::facebook::react::HostPlatformViewProps::getDiffProps =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::HostPlatformViewProps::getDiffProps(Props *param_1)

{
  (*(code *)PTR_getDiffProps_001174f8)();
  return;
}


// ===== 00112520  <EXTERNAL>::folly::dynamic::operator[] =====

void folly::dynamic::operator[](void)

{
  (*(code *)PTR_operator___00117500)();
  return;
}


// ===== 00112530  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::usePullModelOnAndroid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::usePullModelOnAndroid(void)

{
  (*(code *)PTR_usePullModelOnAndroid_00117508)();
  return;
}


// ===== 00112540  <EXTERNAL>::facebook::react::RawProps::at =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::at(char *param_1,char *param_2,char *param_3)

{
  (*(code *)PTR_at_00117510)();
  return;
}


// ===== 00112550  <EXTERNAL>::google::LogMessage::LogMessage =====

void __thiscall
google::LogMessage::LogMessage(LogMessage *this,char *param_1,int param_2,int param_3)

{
  (*(code *)PTR_LogMessage_00117518)(this,param_1,param_2,param_3);
  return;
}


// ===== 00112560  <EXTERNAL>::google::LogMessage::stream =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void google::LogMessage::stream(void)

{
  (*(code *)PTR_stream_00117520)();
  return;
}


// ===== 00112570  <EXTERNAL>::facebook::react::RawPropsKey::operator.cast.to.basic_string =====

void __thiscall facebook::react::RawPropsKey::operator_cast_to_basic_string(RawPropsKey *this)

{
  (*(code *)PTR_operator_cast_to_basic_string_00117528)();
  return;
}


// ===== 00112580  <EXTERNAL>::google::LogMessage::~LogMessage =====

void __thiscall google::LogMessage::~LogMessage(LogMessage *this)

{
  (*(code *)PTR__LogMessage_00117530)();
  return;
}


// ===== 00112590  <EXTERNAL>::__cxa_end_catch =====

void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_00117538)();
  return;
}


// ===== 001125a0  <EXTERNAL>::facebook::jsi::Value::asBool =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asBool(void)

{
  (*(code *)PTR_asBool_00117540)();
  return;
}


// ===== 001125b0  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry =====

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry
          (sentry *this,basic_ostream *param_1)

{
  (*(code *)PTR_sentry_00117548)();
  return;
}


// ===== 001125c0  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry =====

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(sentry *this)

{
  (*(code *)PTR__sentry_00117550)();
  return;
}


// ===== 001125d0  <EXTERNAL>::std::__ndk1::ios_base::__set_badbit_and_consider_rethrow =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::__set_badbit_and_consider_rethrow(void)

{
  (*(code *)PTR___set_badbit_and_consider_rethrow_00117558)();
  return;
}


// ===== 001125e0  <EXTERNAL>::std::__ndk1::ios_base::getloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::getloc(void)

{
  (*(code *)PTR_getloc_00117560)();
  return;
}


// ===== 001125f0  <EXTERNAL>::std::__ndk1::locale::~locale =====

void __thiscall std::__ndk1::locale::~locale(locale *this)

{
  (*(code *)PTR__locale_00117568)();
  return;
}


// ===== 00112600  <EXTERNAL>::std::__ndk1::locale::use_facet =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::locale::use_facet(id *param_1)

{
  (*(code *)PTR_use_facet_00117570)();
  return;
}


// ===== 00112610  <EXTERNAL>::std::__ndk1::ios_base::clear =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::clear(uint param_1)

{
  (*(code *)PTR_clear_00117578)(param_1);
  return;
}


// ===== 00112620  <EXTERNAL>::dl_iterate_phdr =====

void dl_iterate_phdr(void)

{
  (*(code *)PTR_dl_iterate_phdr_00117580)();
  return;
}


// ===== 00112630  <EXTERNAL>::fwrite =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00117588)();
  return sVar1;
}


// ===== 00112640  <EXTERNAL>::memmove =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00117590)();
  return pvVar1;
}


// ===== 00112650  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00117598)();
  return;
}


// ===== 00112660  <EXTERNAL>::malloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_001175a0)();
  return pvVar1;
}


// ===== 00112670  <EXTERNAL>::strncmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_001175a8)((int)__s1);
  return iVar1;
}


// ===== 00112680  <EXTERNAL>::fprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_001175b0)((int)__stream);
  return iVar1;
}


// ===== 00112690  <EXTERNAL>::__stack_chk_fail =====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_001175b8)();
  return;
}


// ===== 001126a0  <EXTERNAL>::pthread_rwlock_wrlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_wrlock_001175c0)((int)__rwlock);
  return iVar1;
}


// ===== 001126b0  <EXTERNAL>::syscall =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_syscall_001175c8)();
  return lVar1;
}


// ===== 001126c0  <EXTERNAL>::pthread_rwlock_unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_unlock_001175d0)((int)__rwlock);
  return iVar1;
}


// ===== 001126d0  <EXTERNAL>::memcpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_001175d8)();
  return pvVar1;
}


// ===== 001126e0  <EXTERNAL>::getauxval =====

void getauxval(void)

{
  (*(code *)PTR_getauxval_001175e0)();
  return;
}


// ===== 001126f0  <EXTERNAL>::abort =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_001175e8)();
  return;
}


// ===== 00112700  <EXTERNAL>::__system_property_get =====

void __system_property_get(void)

{
  (*(code *)PTR___system_property_get_001175f0)();
  return;
}


// ===== 00112710  <EXTERNAL>::getpid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_001175f8)();
  return _Var1;
}


// ===== 00112720  <EXTERNAL>::pthread_rwlock_rdlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_rdlock_00117600)((int)__rwlock);
  return iVar1;
}


// ===== 00112730  <EXTERNAL>::memset =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00117608)(__s,__c);
  return pvVar1;
}


// ===== 00112740  <EXTERNAL>::fflush =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00117610)((int)__stream);
  return iVar1;
}


// ===== 0011d000  <EXTERNAL>::__cxa_finalize =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d008  <EXTERNAL>::__cxa_atexit =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d010  <EXTERNAL>::__register_atfork =====

/* WARNING: Control flow encountered bad instruction data */

void __register_atfork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d018  <EXTERNAL>::facebook::react::ComponentDescriptorProviderRegistry::add =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ComponentDescriptorProviderRegistry::add(ComponentDescriptorProvider *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d020  <EXTERNAL>::__gxx_personality_v0 =====

/* WARNING: Control flow encountered bad instruction data */

void __gxx_personality_v0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d028  <EXTERNAL>::std::__ndk1::__shared_weak_count::__release_weak =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__release_weak(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d030  <EXTERNAL>::operator.new =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d038  <EXTERNAL>::operator.delete =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d040  <EXTERNAL>::__cxa_begin_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_begin_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d048  <EXTERNAL>::std::terminate =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d050  <EXTERNAL>::facebook::react::ComponentDescriptor::ComponentDescriptor =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
facebook::react::ComponentDescriptor::ComponentDescriptor
          (ComponentDescriptor *this,ComponentDescriptorParameters *param_1,RawPropsParser *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d058  <EXTERNAL>::facebook::react::RawProps::parse =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::parse(RawPropsParser *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d060  <EXTERNAL>::facebook::react::RawPropsParser::postPrepare =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawPropsParser::postPrepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d068  <EXTERNAL>::facebook::jsi::Value::~Value =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d070  <EXTERNAL>::std::__ndk1::__shared_mutex_base::__shared_mutex_base =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::__shared_mutex_base::__shared_mutex_base(__shared_mutex_base *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d078  <EXTERNAL>::folly::dynamic::destroy =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::dynamic::destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d080  <EXTERNAL>::std::__ndk1::condition_variable::~condition_variable =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::condition_variable::~condition_variable(condition_variable *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d088  <EXTERNAL>::std::__ndk1::mutex::~mutex =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::mutex::~mutex(mutex *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d090  <EXTERNAL>::__cxa_pure_virtual =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_pure_virtual(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d098  <EXTERNAL>::__cxa_allocate_exception =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_allocate_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d0a0  <EXTERNAL>::__cxa_throw =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_throw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d0a8  <EXTERNAL>::std::__ndk1::__shared_weak_count::~__shared_weak_count =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::__shared_weak_count::~__shared_weak_count(__shared_weak_count *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d0b0  <EXTERNAL>::std::__ndk1::__shared_weak_count::__get_deleter =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__get_deleter(type_info *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d0b8  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::completeClone =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::completeClone
               (ShadowNode *param_1,ShadowNodeFragment *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d0c0  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::appendChild =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::appendChild(shared_ptr *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d0c8  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::replaceChild =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::replaceChild
               (ShadowNode *param_1,shared_ptr *param_2,ulong param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d0d0  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::layoutTree =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::YogaLayoutableShadowNode::layoutTree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d0d8  <EXTERNAL>::facebook::react::LayoutableShadowNode::measureContent =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::measureContent
               (LayoutContext *param_1,LayoutConstraints *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d0e0  <EXTERNAL>::facebook::react::LayoutableShadowNode::measure =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::measure
               (LayoutContext *param_1,LayoutConstraints *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d0e8  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::layout =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::YogaLayoutableShadowNode::layout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d0f0  <EXTERNAL>::facebook::react::LayoutableShadowNode::getContentOriginOffset =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::getContentOriginOffset(bool param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d0f8  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::dirtyLayout =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::dirtyLayout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d100  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::getIsLayoutClean =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::getIsLayoutClean(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d108  <EXTERNAL>::facebook::react::LayoutableShadowNode::baseline =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::LayoutableShadowNode::baseline(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d110  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::shouldNewRevisionDirtyMeasurement =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::shouldNewRevisionDirtyMeasurement
               (ShadowNode *param_1,ShadowNodeFragment *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d118  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d120  <EXTERNAL>::facebook::jsi::NativeState::~NativeState =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::NativeState::~NativeState(NativeState *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d128  <EXTERNAL>::facebook::react::LayoutableShadowNode::getLayoutMetrics =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::getLayoutMetrics(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d130  <EXTERNAL>::facebook::react::BaseViewProps::resolveTransform =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::BaseViewProps::resolveTransform(LayoutMetrics *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d138  <EXTERNAL>::facebook::react::ShadowNode::transferRuntimeShadowNodeReference =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::transferRuntimeShadowNodeReference
               (shared_ptr *param_1,ShadowNodeFragment *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d140  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
          (YogaLayoutableShadowNode *this,ShadowNode *param_1,ShadowNodeFragment *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d148  <EXTERNAL>::facebook::react::RawProps::isEmpty =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::isEmpty(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d150  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d158  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d160  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d168  <EXTERNAL>::strcmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d170  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d178  <EXTERNAL>::folly::dynamic::dynamic =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall folly::dynamic::dynamic(dynamic *this,dynamic *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d180  <EXTERNAL>::facebook::react::RawProps::operator.cast.to.dynamic =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::RawProps::operator_cast_to_dynamic(RawProps *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d188  <EXTERNAL>::facebook::react::HostPlatformViewProps::setProp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::HostPlatformViewProps::setProp
               (PropsParserContext *param_1,uint param_2,char *param_3,RawValue *param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d190  <EXTERNAL>::__cxa_guard_acquire =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_acquire(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d198  <EXTERNAL>::__cxa_guard_abort =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d1a0  <EXTERNAL>::__cxa_guard_release =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d1a8  <EXTERNAL>::facebook::react::Props::initializeDynamicProps =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::Props::initializeDynamicProps
               (Props *param_1,RawProps *param_2,function *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d1b0  <EXTERNAL>::folly::TypeError::TypeError =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall folly::TypeError::TypeError(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d1b8  <EXTERNAL>::std::runtime_error::~runtime_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d1c0  <EXTERNAL>::std::runtime_error::runtime_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::runtime_error::runtime_error(runtime_error *this,runtime_error *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d1c8  <EXTERNAL>::std::runtime_error::what =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::runtime_error::what(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d1d0  <EXTERNAL>::__cxa_free_exception =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_free_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d1d8  <EXTERNAL>::std::length_error::~length_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::length_error::~length_error(length_error *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d1e0  <EXTERNAL>::std::logic_error::logic_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d1e8  <EXTERNAL>::strlen =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d1f0  <EXTERNAL>::facebook::react::EventEmitter::setShadowNodeFamily =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::EventEmitter::setShadowNodeFamily(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d1f8  <EXTERNAL>::facebook::react::EventEmitter::EventEmitter =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::EventEmitter::EventEmitter(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d200  <EXTERNAL>::facebook::react::EventTarget::EventTarget =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::EventTarget::EventTarget(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d208  <EXTERNAL>::facebook::react::ShadowNodeFamily::ShadowNodeFamily =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::ShadowNodeFamily::ShadowNodeFamily(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d210  <EXTERNAL>::facebook::react::ShadowNodeFamily::~ShadowNodeFamily =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::ShadowNodeFamily::~ShadowNodeFamily(ShadowNodeFamily *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d270  <EXTERNAL>::facebook::react::HostPlatformViewProps::HostPlatformViewProps =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
facebook::react::HostPlatformViewProps::HostPlatformViewProps
          (HostPlatformViewProps *this,PropsParserContext *param_1,HostPlatformViewProps *param_2,
          RawProps *param_3,function *param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d278  <EXTERNAL>::facebook::react::HostPlatformViewProps::getDiffProps =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::HostPlatformViewProps::getDiffProps(Props *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d280  <EXTERNAL>::folly::dynamic::operator[] =====

/* WARNING: Control flow encountered bad instruction data */

void folly::dynamic::operator[](void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d288  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::usePullModelOnAndroid =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::usePullModelOnAndroid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d290  <EXTERNAL>::facebook::react::HostPlatformViewProps::getDiffPropsImplementationTarget =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::HostPlatformViewProps::getDiffPropsImplementationTarget(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d298  <EXTERNAL>::facebook::react::Props::getDiffPropsImplementationTarget =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::Props::getDiffPropsImplementationTarget(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d2a0  <EXTERNAL>::facebook::react::RawProps::at =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::at(char *param_1,char *param_2,char *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d2a8  <EXTERNAL>::google::LogMessage::LogMessage =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
google::LogMessage::LogMessage(LogMessage *this,char *param_1,int param_2,int param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d2b0  <EXTERNAL>::google::LogMessage::stream =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void google::LogMessage::stream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d2b8  <EXTERNAL>::facebook::react::RawPropsKey::operator.cast.to.basic_string =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::RawPropsKey::operator_cast_to_basic_string(RawPropsKey *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d2c0  <EXTERNAL>::google::LogMessage::~LogMessage =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall google::LogMessage::~LogMessage(LogMessage *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d2c8  <EXTERNAL>::__cxa_end_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_end_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d2d0  <EXTERNAL>::std::exception::~exception =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::exception::~exception(exception *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d2d8  <EXTERNAL>::facebook::jsi::Value::asBool =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asBool(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d2e0  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry
          (sentry *this,basic_ostream *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d2e8  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(sentry *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d2f0  <EXTERNAL>::std::__ndk1::ios_base::__set_badbit_and_consider_rethrow =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::__set_badbit_and_consider_rethrow(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d2f8  <EXTERNAL>::std::__ndk1::ios_base::getloc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::getloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d300  <EXTERNAL>::std::__ndk1::locale::~locale =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::locale::~locale(locale *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d308  <EXTERNAL>::std::__ndk1::locale::use_facet =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::locale::use_facet(id *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d310  <EXTERNAL>::std::__ndk1::ios_base::clear =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::clear(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d368  <EXTERNAL>::dl_iterate_phdr =====

/* WARNING: Control flow encountered bad instruction data */

void dl_iterate_phdr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d370  <EXTERNAL>::fwrite =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d378  <EXTERNAL>::memmove =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d380  <EXTERNAL>::free =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d388  <EXTERNAL>::malloc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d390  <EXTERNAL>::strncmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d398  <EXTERNAL>::fprintf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d3a0  <EXTERNAL>::__stack_chk_fail =====

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d3a8  <EXTERNAL>::pthread_rwlock_wrlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d3b8  <EXTERNAL>::syscall =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d3c0  <EXTERNAL>::pthread_rwlock_unlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d3c8  <EXTERNAL>::memcpy =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d3d0  <EXTERNAL>::getauxval =====

/* WARNING: Control flow encountered bad instruction data */

void getauxval(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d3d8  <EXTERNAL>::abort =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d3e0  <EXTERNAL>::__system_property_get =====

/* WARNING: Control flow encountered bad instruction data */

void __system_property_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d3e8  <EXTERNAL>::getpid =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d3f0  <EXTERNAL>::pthread_rwlock_rdlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d3f8  <EXTERNAL>::memset =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0011d400  <EXTERNAL>::fflush =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


