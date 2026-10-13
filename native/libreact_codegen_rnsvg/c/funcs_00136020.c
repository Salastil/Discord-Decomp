// ===== 00136020  _FINI_1 =====

void _FINI_1(void)

{
  __cxa_finalize(&PTR_LOOP_0019e280);
  return;
}


// ===== 00136030  FUN_00136030 =====

void FUN_00136030(void)

{
  return;
}


// ===== 00136038  _FINI_0 =====

void _FINI_0(void)

{
  FUN_00136030();
  return;
}


// ===== 00136040  FUN_00136040 =====

void FUN_00136040(code *UNRECOVERED_JUMPTABLE)

{
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0013604c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


// ===== 00136054  FUN_00136054 =====

void FUN_00136054(undefined8 param_1)

{
  __cxa_atexit(FUN_00136040,param_1,&PTR_LOOP_0019e280);
  return;
}


// ===== 00136070  FUN_00136070 =====

void FUN_00136070(void)

{
  __register_atfork();
  return;
}


// ===== 00136080  FUN_00136080 =====

long FUN_00136080(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_001a7460 == '\0') {
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


// ===== 001360b0  _INIT_0 =====

void _INIT_0(void)

{
  uint uVar1;
  int iVar2;
  char acStack_6c [92];
  
  uVar1 = getauxval(0x10);
  if ((uVar1 >> 8 & 1) == 0) {
    DAT_001a7460 = 0;
    return;
  }
  iVar2 = __system_property_get("ro.arch",acStack_6c);
  if (0 < iVar2) {
    iVar2 = strncmp(acStack_6c,"exynos9810",10);
    DAT_001a7460 = iVar2 != 0;
    return;
  }
  DAT_001a7460 = 1;
  return;
}


// ===== 00136148  FUN_00136148 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00136148(ulong param_1,long param_2)

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
    DAT_001a7468 = DAT_001a7468 | 0x400;
  }
  uVar2 = (uint)uVar4;
  if ((uVar3 >> 4 & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x8000;
  }
  if ((uVar3 >> 0x1b & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 2;
  }
  if ((uVar2 >> 7 & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 6;
  }
  if ((~uVar3 & 0xc0000) == 0) {
    DAT_001a7468 = DAT_001a7468 | 0x20;
  }
  if ((uVar3 >> 0x14 & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x10;
  }
  if ((uVar3 >> 0x17 & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 8;
  }
  if ((uVar3 >> 9 & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x10100;
  }
  if ((uVar3 >> 0x18 & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x20000;
  }
  if ((uVar3 >> 0xc & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x40;
  }
  if ((uVar3 >> 0x1a & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x800000;
  }
  if ((uVar3 >> 3 & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x4000;
  }
  if ((uVar3 >> 5 & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x800;
  }
  if ((uVar3 >> 6 & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x1000;
  }
  if ((uVar3 >> 0xd & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x100000;
  }
  if ((uVar3 >> 0xe & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x200000;
  }
  if ((uVar3 >> 0x1d & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x400000000000;
  }
  if ((uVar3 >> 0x1c & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x2000000000000;
  }
  if ((uVar2 >> 0x12 & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x180000000000;
  }
  if ((uVar2 >> 0x16 & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x380000000000;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x2000000000;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x6000000000;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x8000000000;
  }
  if ((uVar2 >> 5 & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x10000000000;
  }
  if ((uVar2 >> 6 & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x20000000000;
  }
  if ((uVar4 & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x80000;
  }
  if ((uVar3 >> 8 & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x80;
  }
  if ((uVar2 >> 0x10 & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 1;
  }
  if ((uVar2 >> 0xd & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x4000000;
  }
  if ((uVar4 >> 0x20 & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x10000000;
  }
  if ((uVar4 >> 0x21 & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x100000000;
  }
  if ((uVar2 >> 0xf & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x2000000;
  }
  if ((uVar2 >> 8 & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x1000000;
  }
  if ((uVar2 >> 9 & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x200000000;
  }
  if ((uVar2 >> 10 & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x400000000;
  }
  if ((uVar2 >> 0xb & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x800000000;
  }
  if ((uVar2 >> 0x11 & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x4000000000000;
  }
  if ((uVar2 >> 0x15 & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x20000000;
  }
  if ((int)uVar2 < 0) {
    DAT_001a7468 = DAT_001a7468 | 0x40000000000000;
  }
  if ((uVar2 >> 0x17 & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x40000000000;
  }
  if ((uVar2 >> 0x18 & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x100000000000000;
  }
  if ((uVar2 >> 0x19 & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x80000000000000;
  }
  if ((uVar4 >> 0x2b & 1) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x800000000000000;
  }
  if ((uVar3 >> 0xb & 1) == 0) {
    if ((param_1 & 0x201) != 0) {
      DAT_001a7468 = DAT_001a7468 | 0x300;
    }
    if ((uVar4 & 1) != 0 || (param_1 & 0x10000) != 0) {
      DAT_001a7468 = DAT_001a7468 | 0x40000;
    }
    if ((param_1 & 0x4008000) != 0) {
      DAT_001a7468 = DAT_001a7468 | 0x400000;
    }
    if ((uVar4 & 0x100004000) != 0) {
      DAT_001a7468 = DAT_001a7468 | 0x8000000;
    }
    uVar5 = DAT_001a7468 | (ulong)(uVar2 << 0x13) & 0x80000000;
    if ((uVar4 & 2) != 0 && (param_1 & 0x400000) != 0) {
      uVar5 = uVar5 | 0x1000000000;
    }
    uVar5 = uVar5 | (param_1 & 0x20000) >> 4;
    goto LAB_001362b0;
  }
  uVar4 = id_aa64pfr1_el1;
  if ((uVar4 & 0xf00) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x80000000000;
  }
  if ((uVar4 & 0xf0) == 0x10) {
    DAT_001a7468 = DAT_001a7468 | 0x1000000000000;
    if ((uVar4 & 0xf000000) != 0x2000000) goto LAB_001365a0;
LAB_001365f4:
    DAT_001a7468 = DAT_001a7468 | 0x200000000000000;
    uVar4 = id_aa64pfr0_el1;
    uVar3 = (uint)uVar4;
  }
  else {
    if ((uVar4 & 0xf000000) == 0x2000000) goto LAB_001365f4;
LAB_001365a0:
    uVar4 = id_aa64pfr0_el1;
    uVar3 = (uint)uVar4;
  }
  if ((~uVar3 & 0xf0000) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x300;
  }
  if ((uVar4 & 0xf00000000) != 0) {
    uVar4 = UnkSytemRegRead(3,0,0,4,4);
    if ((uVar4 & 0xf) == 1) {
      DAT_001a7468 = DAT_001a7468 | 0x1000000000;
    }
    else if ((uVar4 & 0xf) == 0) {
      DAT_001a7468 = DAT_001a7468 | 0x40000000;
    }
    if ((uVar4 & 0xf00000) != 0) {
      DAT_001a7468 = DAT_001a7468 | 0x80000000;
    }
  }
  uVar4 = id_aa64isar0_el1;
  if ((uVar4 & 0xf00000000) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x2000;
  }
  uVar4 = id_aa64isar1_el1;
  uVar5 = uVar4 >> 0x14 & 0xf;
  if ((uVar4 & 0xf) != 0) {
    DAT_001a7468 = DAT_001a7468 | 0x40000;
  }
  if (uVar5 != 0) {
    if (uVar5 == 3) {
      DAT_001a7468 = DAT_001a7468 | 0x400000000400000;
    }
    else {
      DAT_001a7468 = DAT_001a7468 | 0x400000;
    }
  }
  uVar5 = DAT_001a7468 | 0x800000000000;
  if ((uVar4 & 0xf0000000000) != 0x20000000000) {
    uVar5 = DAT_001a7468;
  }
  if ((uVar4 & 0xf00000000000) != 0) {
    uVar5 = uVar5 | 0x8000000;
  }
  if (uVar4 >> 0x3c != 0) {
    if (uVar4 >> 0x3d == 0) {
      DAT_001a7468 = uVar5 | 0x8008000000000000;
      return;
    }
    uVar1 = 0x38000000000000;
    if (uVar4 >> 0x3c < 3) {
      uVar1 = 0x18000000000000;
    }
    DAT_001a7468 = uVar5 | uVar1 | 0x8000000000000000;
    return;
  }
LAB_001362b0:
  DAT_001a7468 = uVar5 | 0x8000000000000000;
  return;
}


// ===== 001366e4  _INIT_1 =====

void _INIT_1(void)

{
  int iVar1;
  ulong uVar2;
  char local_70 [8];
  ulong uStack_68;
  undefined8 local_60;
  
  if (DAT_001a7468 != 0) {
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
    FUN_00136148(uVar2 | 0x4000000000000000,local_70);
  }
  return;
}


// ===== 00136770  FUN_00136770 =====

long FUN_00136770(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_001a7460 == '\0') {
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


// ===== 001367a0  FUN_001367a0 =====

undefined8 FUN_001367a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_80 [24];
  code *local_68;
  long local_38;
  
  FUN_00136ae8(param_2,param_1);
  iVar2 = FUN_00136c0c(param_2);
  while( true ) {
    if (iVar2 == 0) {
      return 5;
    }
    if (iVar2 < 0) break;
    FUN_00136b90(param_2,0xfffffffe,&local_38);
    iVar2 = FUN_00136c20(param_2,auStack_80);
    if (iVar2 != 0) {
      return 2;
    }
    if (local_68 != (code *)0x0) {
      uVar3 = 6;
      if (local_38 != param_3[3]) {
        uVar3 = 2;
      }
      iVar2 = (*local_68)(1,uVar3,*param_3,param_3,param_2);
      puVar1 = PTR___sF_001a2f50;
      if (iVar2 != 8) {
        if (iVar2 != 7) {
          return 2;
        }
        FUN_00136c60(param_2);
        return 2;
      }
      if (local_38 == param_3[3]) {
        fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),"libunwind: %s - %s\n","unwind_phase2",
                "during phase1 personality function said it would stop here, but now in phase2 it did not stop here"
               );
        fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    iVar2 = FUN_00136c0c(param_2);
  }
  return 2;
}


// ===== 001368d4  FUN_001368d4 =====

void FUN_001368d4(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_4a0 [624];
  undefined1 auStack_230 [528];
  
  FUN_00136a4c(auStack_230);
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_001367a0(auStack_230,auStack_4a0,param_1);
  }
  else {
    FUN_00136958(auStack_230,auStack_4a0,param_1,*(long *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = PTR___sF_001a2f50;
  fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),"libunwind: %s - %s\n","_Unwind_Resume",
          "_Unwind_Resume() can\'t return");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00136958  FUN_00136958 =====

void FUN_00136958(undefined8 param_1,undefined8 param_2,undefined8 *param_3,code *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_78 [24];
  code *local_60;
  
  FUN_00136ae8(param_2,param_1);
  iVar1 = FUN_00136c0c(param_2);
  while( true ) {
    if (iVar1 < 1) {
      (*param_4)(1,0x1a,*param_3,param_3,param_2,param_5);
      return;
    }
    iVar1 = FUN_00136c20(param_2,auStack_78);
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
      FUN_00136c60(param_2);
    }
    iVar1 = FUN_00136c0c(param_2);
  }
  return;
}


// ===== 00136a4c  FUN_00136a4c =====

undefined8
FUN_00136a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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


// ===== 00136ae8  FUN_00136ae8 =====

undefined8 FUN_00136ae8(undefined8 *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = &PTR_FUN_0019e298;
  param_1[1] = &DAT_001a7470;
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
  FUN_001374b0(param_1,0);
  return 0;
}


// ===== 00136b90  FUN_00136b90 =====

undefined8 FUN_00136b90(long *param_1,undefined4 param_2,undefined8 *param_3)

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


// ===== 00136c0c  FUN_00136c0c =====

void FUN_00136c0c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00136c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,1);
  return;
}


// ===== 00136c20  FUN_00136c20 =====

undefined4 FUN_00136c20(long *param_1,long param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x48))();
  uVar1 = 0xffffe66b;
  if (*(long *)(param_2 + 8) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 00136c60  FUN_00136c60 =====

undefined8 FUN_00136c60(long *param_1)

{
  (**(code **)(*param_1 + 0x50))();
  return 0xffffe674;
}


// ===== 00136c88  FUN_00136c88 =====

char * FUN_00136c88(undefined8 param_1,uint *param_2,undefined8 *param_3,long *param_4,ulong param_5
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
      pcVar7 = (char *)FUN_00136e18(param_1,lVar8,param_4);
      if (pcVar7 != (char *)0x0) {
        return pcVar7;
      }
    }
    else if (*param_4 != lVar8) {
      return "CIE start does not match";
    }
    lVar8 = (long)puVar10 + uVar9;
    local_48 = puVar10 + 1;
    lVar3 = FUN_00138c70(param_1,&local_48,lVar8,(char)param_4[3],0);
    lVar4 = FUN_00138c70(param_1,&local_48,lVar8,*(byte *)(param_4 + 3) & 0xf,0);
    cVar1 = *(char *)((long)param_4 + 0x31);
    param_3[5] = 0;
    puVar10 = local_48;
    if (cVar1 != '\0') {
      lVar5 = FUN_00138ffc(&local_48,lVar8);
      puVar2 = local_48;
      puVar10 = (uint *)((long)local_48 + lVar5);
      if ((*(byte *)((long)param_4 + 0x19) != 0xff) &&
         (lVar5 = FUN_00138c70(param_1,&local_48,lVar8,*(byte *)((long)param_4 + 0x19) & 0xf,0),
         lVar5 != 0)) {
        local_48 = puVar2;
        uVar6 = FUN_00138c70(param_1,&local_48,lVar8,*(undefined1 *)((long)param_4 + 0x19),0);
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


// ===== 00136e18  FUN_00136e18 =====

char * FUN_00136e18(undefined8 param_1,uint *param_2,long *param_3)

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
      uVar7 = FUN_00138ffc(&local_48,pbVar1);
      uVar13 = 0;
      uVar14 = 0;
      *(undefined4 *)(param_3 + 5) = uVar7;
      puVar5 = PTR___sF_001a2f50;
      pbVar11 = local_48;
      pbVar15 = local_48;
      do {
        pbVar12 = pbVar11;
        if (pbVar15 == pbVar1) {
          fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
        uVar6 = FUN_00138ffc(&local_48,pbVar1);
        *(undefined1 *)((long)param_3 + 0x32) = uVar6;
        bVar2 = *pbVar18;
      }
      if (bVar2 == 0x7a) {
        FUN_00138ffc(&local_48,pbVar1);
LAB_00136f98:
        bVar2 = *pbVar18;
        if (bVar2 < 0x50) {
          if (bVar2 < 0x47) {
            if (bVar2 != 0x42) {
              if (bVar2 != 0) goto LAB_00137038;
              goto LAB_0013707c;
            }
            *(undefined1 *)((long)param_3 + 0x33) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_00136f98;
          }
          if (bVar2 == 0x47) {
            *(undefined1 *)((long)param_3 + 0x34) = 1;
            goto LAB_00137038;
          }
          if (bVar2 == 0x4c) {
            pbVar18 = pbVar18 + 1;
            *(byte *)((long)param_3 + 0x19) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_00136f98;
          }
        }
        else if (bVar2 < 0x53) {
          if (bVar2 == 0x50) {
            bVar2 = *local_48;
            *(byte *)((long)param_3 + 0x1a) = bVar2;
            *(char *)((long)param_3 + 0x1b) = (char)(local_48 + 1) - (char)param_2;
            local_48 = local_48 + 1;
            lVar8 = FUN_00138c70(param_1,&local_48,pbVar1,bVar2,0);
            param_3[4] = lVar8;
            pbVar18 = pbVar18 + 1;
            goto LAB_00136f98;
          }
          if (bVar2 == 0x52) {
            pbVar18 = pbVar18 + 1;
            *(byte *)(param_3 + 3) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_00136f98;
          }
        }
        else {
          if (bVar2 == 0x53) {
            *(undefined1 *)(param_3 + 6) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_00136f98;
          }
          if (bVar2 == 0x7a) {
            *(undefined1 *)((long)param_3 + 0x31) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_00136f98;
          }
        }
LAB_00137038:
        pbVar18 = pbVar18 + 1;
        goto LAB_00136f98;
      }
LAB_0013707c:
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


// ===== 001370e0  FUN_001370e0 =====

void FUN_001370e0(void)

{
  return;
}


// ===== 001370e8  FUN_001370e8 =====

void FUN_001370e8(void)

{
  return;
}


// ===== 001370f0  FUN_001370f0 =====

bool FUN_001370f0(undefined8 param_1,uint param_2)

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


// ===== 00137134  FUN_00137134 =====

undefined8 FUN_00137134(long param_1,uint param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_001a2f50;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_0013719c:
      return *(undefined8 *)(param_1 + 0x108);
    }
    if (param_2 == 0xffffffff) goto LAB_00137190;
    if (param_2 == 0x1d) {
      return *(undefined8 *)(param_1 + 0xf8);
    }
  }
  else if ((int)param_2 < 0x20) {
    if (param_2 == 0x1e) {
      return *(undefined8 *)(param_1 + 0x100);
    }
    if (param_2 == 0x1f) goto LAB_0013719c;
  }
  else {
    if (param_2 == 0x22) {
      return *(undefined8 *)(param_1 + 0x118);
    }
    if (param_2 == 0x20) {
LAB_00137190:
      return *(undefined8 *)(param_1 + 0x110);
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8);
}


// ===== 0013721c  FUN_0013721c =====

void FUN_0013721c(long param_1,uint param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_001a2f50;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_00137284:
      *(undefined8 *)(param_1 + 0x108) = param_3;
      return;
    }
    if (param_2 == 0xffffffff) goto LAB_00137278;
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
    if (param_2 == 0x1f) goto LAB_00137284;
  }
  else {
    if (param_2 == 0x22) {
      *(undefined8 *)(param_1 + 0x118) = param_3;
      return;
    }
    if (param_2 == 0x20) {
LAB_00137278:
      *(undefined8 *)(param_1 + 0x110) = param_3;
      return;
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),"libunwind: %s - %s\n","setRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8) = param_3;
  return;
}


// ===== 00137304  FUN_00137304 =====

bool FUN_00137304(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffffffe0) == 0x40;
}


// ===== 00137318  FUN_00137318 =====

undefined1  [16] FUN_00137318(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + (long)param_2 * 8 + -0xe0);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 00137328  FUN_00137328 =====

void FUN_00137328(undefined8 param_1,long param_2,int param_3)

{
  *(undefined8 *)(param_2 + (long)param_3 * 8 + -0xe0) = param_1;
  return;
}


// ===== 00137338  FUN_00137338 =====

ulong FUN_00137338(long *param_1,uint param_2)

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
    uVar3 = FUN_0013785c(lVar1,uVar4,param_1[0x4b],param_1 + 2,(long)param_1 + 0x269,param_2 & 1);
    iVar2 = (int)uVar3;
  }
  else {
    memset(auStack_240,0,0x210);
    uVar3 = FUN_0013773c(param_1,auStack_240);
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


// ===== 00137428  FUN_00137428 =====

void FUN_00137428(long param_1,undefined8 *param_2)

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


// ===== 0013746c  FUN_0013746c =====

void FUN_0013746c(long param_1)

{
  FUN_0013a504(param_1 + 0x10);
  return;
}


// ===== 00137478  FUN_00137478 =====

undefined1 FUN_00137478(long param_1)

{
  return *(undefined1 *)(param_1 + 0x269);
}


// ===== 00137484  FUN_00137484 =====

undefined8 FUN_00137484(long *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  return 0;
}


// ===== 001374b0  FUN_001374b0 =====

void FUN_001374b0(long *param_1,ulong param_2)

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
  iVar1 = dl_iterate_phdr(FUN_00139e54,&local_648);
  if (((iVar1 == 0) || (local_668 == 0)) ||
     (uVar4 = FUN_00139b80(param_1,uVar7,auStack_678,0), (uVar4 & 1) == 0)) {
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_001a7474);
    for (puVar6 = PTR_DAT_001a7428; puVar6 < PTR_DAT_001a7430; puVar6 = puVar6 + 0x20) {
      if ((*(ulong *)(puVar6 + 8) <= uVar7) && (uVar7 < *(ulong *)(puVar6 + 0x10))) {
        lVar3 = *(long *)(puVar6 + 0x18);
        pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001a7474);
        if ((lVar3 != 0) &&
           (lVar3 = FUN_00136c88(param_1[1],lVar3,&local_6a8,local_6e0,0), lVar3 == 0)) {
          memset(&local_648,0,0x618);
          uVar7 = FUN_00137ce4(param_1[1],&local_6a8,local_6e0,uVar7,4,&local_648);
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
        goto LAB_00137638;
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001a7474);
LAB_00137638:
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


// ===== 00137730  FUN_00137730 =====

void FUN_00137730(undefined8 param_1,undefined4 param_2)

{
  FUN_0013a4d4(param_2);
  return;
}


// ===== 0013773c  FUN_0013773c =====

undefined8 FUN_0013773c(long param_1)

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


// ===== 0013785c  FUN_0013785c =====

undefined8
FUN_0013785c(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,
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
  
  lVar7 = FUN_00136c88(param_1,param_3,auStack_b0,auStack_e8,0);
  if (lVar7 == 0) {
    memset(auStack_700,0,0x618);
    uVar8 = FUN_00137ce4(param_1,auStack_b0,auStack_e8,param_2,4,auStack_700);
    if ((uVar8 & 1) != 0) {
      uVar8 = FUN_0013892c(param_1,auStack_700,param_4);
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
        puVar3 = PTR___sF_001a2f50;
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
              goto LAB_00137b3c;
            }
            else {
              puVar13 = (undefined8 *)((long)param_4 + 0x108);
              if ((local_b6 != 0x22) &&
                 ((puVar13 = (undefined8 *)((long)param_4 + 0x100), local_b6 != 0x20 &&
                  (puVar13 = (undefined8 *)((long)param_4 + 0xf8), local_b6 != 0x1f)))) {
LAB_00137b3c:
                if (0x1c < local_b6) {
                  fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),"libunwind: %s - %s\n","getRegister",
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
LAB_00137c48:
                  fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),"libunwind: %s - %s\n",
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
              if (iVar2 != 6) goto LAB_00137c48;
              puVar9 = (ulong *)FUN_001391c4(*(undefined8 *)(piVar15 + 2),param_1,param_4,uVar8);
              uVar18 = *puVar9;
            }
            local_a00[uVar12] = uVar18;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == local_b6) {
            uVar14 = FUN_00138a60(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == 0x22) {
            uVar10 = FUN_00138a60(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
          }
          else {
            if (0xffffffe0 < uVar16 - 0x40) {
              return 0xffffe672;
            }
            uVar11 = FUN_00138a60(param_1,param_4,uVar8,piVar15);
            puVar3 = PTR___sF_001a2f50;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
            if ((int)uVar16 < 0x1f) {
              uVar5 = uVar11;
              if ((uVar16 != 0x1d) && (uVar5 = local_a00[0x3b], uVar6 = uVar11, uVar16 != 0x1e))
              goto LAB_00137b90;
            }
            else {
              uVar18 = uVar11;
              if ((uVar16 != 0x1f) &&
                 ((uVar18 = local_a00[0x3d], uVar10 = uVar11, uVar16 != 0x22 &&
                  (uVar10 = local_a00[0x3f], uVar16 != 0x20)))) {
LAB_00137b90:
                if (0x1c < uVar12) {
                  fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),"libunwind: %s - %s\n","setRegister",
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
            FUN_00138a60(param_1,auStack_b20,uVar8,&local_80);
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


// ===== 00137ce4  FUN_00137ce4 =====

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_00137ce4(undefined8 param_1,long *param_2,long *param_3,long param_4,int param_5,
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
LAB_00137d68:
    lVar20 = lVar20 + 0x18;
    if (lVar20 == 0x30) {
      return 1;
    }
  }
  uVar17 = 0;
LAB_00137d98:
  puVar18 = local_6c0;
  puVar5 = PTR___sF_001a2f50;
  pbVar10 = pbVar21 + 1;
  bVar3 = *pbVar21;
  apbStack_6a0[0xc0] = pbVar10;
  switch((ulong)bVar3) {
  case 0:
    goto code_r0x0013866c;
  case 1:
    uVar17 = FUN_00138c70(local_6c8,apbStack_6a0 + 0xc0,pbVar2,(char)param_3[3],0);
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 2:
    uVar9 = (uint)pbVar21[1];
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 2;
    goto LAB_00138220;
  case 3:
    uVar9 = (uint)*(ushort *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 3;
    goto LAB_00138220;
  case 4:
    uVar9 = *(uint *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 5;
LAB_00138220:
    uVar17 = uVar17 + iVar13 * uVar9;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 5:
    uVar19 = FUN_00138ffc(apbStack_6a0 + 0xc0,pbVar2);
    lVar8 = FUN_00138ffc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended DWARF unwind, reg too big\n";
      __size = 0x46;
      __s = (FILE *)(PTR___sF_001a2f50 + 0x130);
      goto LAB_0013881c;
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
LAB_001381bc:
    puVar12[6] = 2;
    *(long *)(puVar12 + 8) = lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 6:
    uVar19 = FUN_00138ffc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_restore_extended DWARF unwind, reg too big\n";
LAB_0013870c:
      __s = (FILE *)(PTR___sF_001a2f50 + 0x130);
      __size = 0x47;
      goto LAB_0013881c;
    }
    cVar4 = *(char *)(param_6 + uVar19 * 4 + 7);
joined_r0x0013864c:
    if (cVar4 != '\0') {
      pbVar21 = apbStack_6a0[uVar19 * 2];
      *(byte **)(param_6 + uVar19 * 4 + 8) = apbStack_6a0[uVar19 * 2 + 1];
      *(byte **)(param_6 + uVar19 * 4 + 6) = pbVar21;
    }
    goto code_r0x0013866c;
  case 7:
    uVar19 = FUN_00138ffc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_undefined DWARF unwind, reg too big\n";
LAB_00138810:
      __s = (FILE *)(PTR___sF_001a2f50 + 0x130);
      __size = 0x40;
      goto LAB_0013881c;
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
    uVar19 = FUN_00138ffc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_same_value DWARF unwind, reg too big\n";
LAB_001387f4:
      __s = (FILE *)(PTR___sF_001a2f50 + 0x130);
      __size = 0x41;
      goto LAB_0013881c;
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
    uVar19 = FUN_00138ffc(apbStack_6a0 + 0xc0,pbVar2);
    uVar14 = FUN_00138ffc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg too big\n";
      __size = 0x3f;
      __s = (FILE *)(PTR___sF_001a2f50 + 0x130);
      goto LAB_0013881c;
    }
    if (0x5f < uVar14) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg2 too big\n";
      goto LAB_00138810;
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
    uVar19 = FUN_00138ffc(apbStack_6a0 + 0xc0,pbVar2);
    uVar7 = FUN_00138ffc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa DWARF unwind, reg too big\n";
      __size = 0x3e;
      __s = (FILE *)(PTR___sF_001a2f50 + 0x130);
      goto LAB_0013881c;
    }
    *param_6 = (int)uVar19;
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xd:
    uVar19 = FUN_00138ffc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa_register DWARF unwind, reg too big\n";
      goto LAB_0013870c;
    }
    *param_6 = (int)uVar19;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xe:
    uVar7 = FUN_00138ffc(apbStack_6a0 + 0xc0,pbVar2);
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xf:
    *param_6 = 0;
    *(byte **)(param_6 + 2) = pbVar10;
    goto LAB_001385a0;
  case 0x10:
    uVar19 = FUN_00138ffc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_expression DWARF unwind, reg too big\n";
      goto LAB_001387f4;
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
LAB_00138598:
    puVar12[6] = uVar7;
    *(byte **)(puVar12 + 8) = apbStack_6a0[0xc0];
LAB_001385a0:
    lVar8 = FUN_00138ffc(apbStack_6a0 + 0xc0,pbVar2);
    apbStack_6a0[0xc0] = apbStack_6a0[0xc0] + lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x11:
    uVar19 = FUN_00138ffc(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_001a2f50;
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended_sf DWARF unwind, reg too big\n";
      __size = 0x49;
      __s = (FILE *)(PTR___sF_001a2f50 + 0x130);
      goto LAB_0013881c;
    }
    uVar14 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
LAB_0013852c:
    puVar12[6] = uVar7;
    *(ulong *)(puVar12 + 8) = uVar11 * (long)iVar13;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x12:
    uVar14 = FUN_00138ffc(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_001a2f50;
    uVar19 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      goto LAB_001387f4;
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
        fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
    uVar19 = FUN_00138ffc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),
              "libunwind: malformed DW_CFA_val_offset DWARF unwind, reg (%lu) out of range\n\n",
              uVar19);
      goto LAB_00138824;
    }
    lVar8 = FUN_00138ffc(apbStack_6a0 + 0xc0,pbVar2);
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
    uVar19 = FUN_00138ffc(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_001a2f50;
    if (uVar19 < 0x60) {
      uVar14 = 0;
      uVar11 = 0;
      pbVar21 = apbStack_6a0[0xc0];
      pbVar10 = apbStack_6a0[0xc0];
      do {
        if (pbVar10 == pbVar2) {
          fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      goto LAB_0013852c;
    }
    __ptr = "libunwind: malformed DW_CFA_val_offset_sf DWARF unwind, reg too big\n";
    __size = 0x44;
    __s = (FILE *)(PTR___sF_001a2f50 + 0x130);
    goto LAB_0013881c;
  case 0x16:
    uVar19 = FUN_00138ffc(apbStack_6a0 + 0xc0,pbVar2);
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
      goto LAB_00138598;
    }
    __ptr = "libunwind: malformed DW_CFA_val_expression DWARF unwind, reg too big\n";
    __size = 0x45;
    __s = (FILE *)(PTR___sF_001a2f50 + 0x130);
    goto LAB_0013881c;
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
        goto joined_r0x0013864c;
      }
      if (bVar1 != 0x80) {
        return 0;
      }
      local_6dc = param_5;
      lVar8 = FUN_00138ffc(apbStack_6a0 + 0xc0,pbVar2);
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
    if (param_5 != 4) goto code_r0x0013866c;
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
    uVar7 = FUN_00138ffc(apbStack_6a0 + 0xc0,pbVar2);
    param_6[4] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x2f:
    uVar19 = FUN_00138ffc(apbStack_6a0 + 0xc0,pbVar2);
    if (uVar19 < 0x60) {
      lVar8 = FUN_00138ffc(apbStack_6a0 + 0xc0,pbVar2);
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
      goto LAB_001381bc;
    }
    __ptr = "libunwind: malformed DW_CFA_GNU_negative_offset_extended DWARF unwind, reg too big\n";
    __size = 0x53;
    __s = (FILE *)(PTR___sF_001a2f50 + 0x130);
LAB_0013881c:
    fwrite(__ptr,__size,1,__s);
LAB_00138824:
    fflush((FILE *)(PTR___sF_001a2f50 + 0x130));
    return 0;
  }
joined_r0x00138154:
  if ((pbVar2 <= pbVar21) || (uVar16 <= uVar17)) goto LAB_00137d68;
  goto LAB_00137d98;
code_r0x0013866c:
  pbVar21 = apbStack_6a0[0xc0];
  goto joined_r0x00138154;
}


// ===== 0013892c  FUN_0013892c =====

long FUN_0013892c(undefined8 param_1,uint *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR___sF_001a2f50;
  uVar1 = *param_2;
  if ((int)uVar1 < 0x1e) {
    if ((int)uVar1 < 0) {
      if (uVar1 == 0xfffffffe) {
LAB_0013896c:
        return *(long *)(param_3 + 0xf8) + (long)(int)param_2[1];
      }
      if (uVar1 == 0xffffffff) goto LAB_001389b0;
    }
    else {
      if (uVar1 == 0) {
        lVar3 = FUN_001391c4(*(undefined8 *)(param_2 + 2),param_1,param_3,0);
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
    if (uVar1 == 0x1f) goto LAB_0013896c;
  }
  else {
    if (uVar1 == 0x22) {
      return *(long *)(param_3 + 0x108) + (long)(int)param_2[1];
    }
    if (uVar1 == 0x20) {
LAB_001389b0:
      return *(long *)(param_3 + 0x100) + (long)(int)param_2[1];
    }
  }
  if (0x1c < uVar1) {
    fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(long *)(param_3 + (ulong)uVar1 * 8) + (long)(int)param_2[1];
}


// ===== 00138a60  FUN_00138a60 =====

undefined8 FUN_00138a60(undefined8 param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  puVar2 = PTR___sF_001a2f50;
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
LAB_00138b9c:
          return *(undefined8 *)(param_2 + 0xf8);
        }
        if (uVar5 == 0xffffffff) goto LAB_00138b84;
        if (uVar5 == 0x1d) {
          return *(undefined8 *)(param_2 + 0xe8);
        }
      }
      else if ((int)uVar5 < 0x20) {
        if (uVar5 == 0x1e) {
          return *(undefined8 *)(param_2 + 0xf0);
        }
        if (uVar5 == 0x1f) goto LAB_00138b9c;
      }
      else {
        if (uVar5 == 0x22) {
          return *(undefined8 *)(param_2 + 0x108);
        }
        if (uVar5 == 0x20) {
LAB_00138b84:
          return *(undefined8 *)(param_2 + 0x100);
        }
      }
      if (0x1c < uVar5) {
        fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),"libunwind: %s - %s\n","getRegister",
                "unsupported arm64 register");
        fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      return *(undefined8 *)(param_2 + (*(ulong *)(param_4 + 2) & 0xffffffff) * 8);
    }
    if (iVar1 == 6) {
      puVar4 = (undefined8 *)FUN_001391c4(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return *puVar4;
    }
    if (iVar1 == 7) {
      uVar3 = FUN_001391c4(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return uVar3;
    }
  }
  fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),"libunwind: %s - %s\n","getSavedRegister",
          "unsupported restore location for register");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00138c70  FUN_00138c70 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00138c70(undefined8 param_1,long *param_2,ulong *param_3,uint param_4,long param_5)

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
  
  puVar3 = PTR___sF_001a2f50;
  uVar1 = param_4 & 0xf;
  puVar10 = (ulong *)*param_2;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if ((param_4 & 0xf) == 0) goto LAB_00138dbc;
      if (uVar1 != 1) {
LAB_00138fc8:
        fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "unknown pointer encoding");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar4 = (undefined8 *)FUN_00138ffc(param_2,param_3);
      puVar3 = PTR___sF_001a2f50;
    }
    else if (uVar1 == 2) {
      puVar4 = (undefined8 *)(ulong)(ushort)*puVar10;
      *param_2 = (long)puVar10 + 2;
      puVar3 = PTR___sF_001a2f50;
    }
    else {
      if (uVar1 != 3) goto LAB_00138fc8;
      puVar4 = (undefined8 *)(ulong)(uint)*puVar10;
      *param_2 = (long)((long)puVar10 + 4);
      puVar3 = PTR___sF_001a2f50;
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 4) {
LAB_00138dbc:
      puVar4 = (undefined8 *)*puVar10;
      *param_2 = (long)(puVar10 + 1);
      puVar3 = PTR___sF_001a2f50;
    }
    else {
      if (uVar1 != 9) goto LAB_00138fc8;
      uVar7 = 0;
      uVar5 = 0;
      puVar6 = puVar10;
      puVar9 = puVar10;
      do {
        if (puVar9 == param_3) {
          fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      puVar3 = PTR___sF_001a2f50;
    }
  }
  else if (uVar1 == 10) {
    puVar4 = (undefined8 *)(long)(short)*puVar10;
    *param_2 = (long)puVar10 + 2;
    puVar3 = PTR___sF_001a2f50;
  }
  else {
    if (uVar1 != 0xb) {
      if (uVar1 != 0xc) goto LAB_00138fc8;
      goto LAB_00138dbc;
    }
    puVar4 = (undefined8 *)(long)(int)(uint)*puVar10;
    *param_2 = (long)((long)puVar10 + 4);
    puVar3 = PTR___sF_001a2f50;
  }
  uVar1 = (param_4 & 0xff) >> 4 & 7;
  PTR___sF_001a2f50 = puVar3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      if (uVar1 != 1) goto LAB_00138f94;
      puVar4 = (undefined8 *)((long)puVar4 + (long)puVar10);
    }
LAB_00138e48:
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
      goto LAB_00138e48;
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
LAB_00138f94:
  fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP","unknown pointer encoding");
  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00138ffc  FUN_00138ffc =====

ulong FUN_00138ffc(long *param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  puVar2 = PTR___sF_001a2f50;
  pbVar4 = (byte *)*param_1;
  if (pbVar4 != param_2) {
    pbVar5 = pbVar4 + 1;
    uVar3 = (ulong)*pbVar4 & 0x7f;
    if (-1 < (char)*pbVar4) {
LAB_0013902c:
      *param_1 = (long)pbVar5;
      return uVar3;
    }
    if (pbVar5 != param_2) {
      uVar3 = uVar3 | (ulong)((int)(char)pbVar4[1] & 0x7f) << 7;
      pbVar5 = pbVar4 + 2;
      if (-1 < (char)pbVar4[1]) goto LAB_0013902c;
      if (pbVar5 != param_2) {
        uVar3 = uVar3 | (ulong)((int)(char)pbVar4[2] & 0x7f) << 0xe;
        pbVar5 = pbVar4 + 3;
        if (-1 < (char)pbVar4[2]) goto LAB_0013902c;
        if (pbVar5 != param_2) {
          uVar3 = uVar3 | (ulong)((int)(char)pbVar4[3] & 0x7f) << 0x15;
          pbVar5 = pbVar4 + 4;
          if (-1 < (char)pbVar4[3]) goto LAB_0013902c;
          if (pbVar5 != param_2) {
            uVar3 = uVar3 | (ulong)((int)(char)pbVar4[4] & 0x7f) << 0x1c;
            pbVar5 = pbVar4 + 5;
            if (-1 < (char)pbVar4[4]) goto LAB_0013902c;
            if (pbVar5 != param_2) {
              uVar3 = uVar3 | (ulong)((int)(char)pbVar4[5] & 0x7f) << 0x23;
              pbVar5 = pbVar4 + 6;
              if (-1 < (char)pbVar4[5]) goto LAB_0013902c;
              if (pbVar5 != param_2) {
                uVar3 = uVar3 | (ulong)((int)(char)pbVar4[6] & 0x7f) << 0x2a;
                pbVar5 = pbVar4 + 7;
                if (-1 < (char)pbVar4[6]) goto LAB_0013902c;
                if (pbVar5 != param_2) {
                  uVar3 = uVar3 | (ulong)((int)(char)pbVar4[7] & 0x7f) << 0x31;
                  pbVar5 = pbVar4 + 8;
                  if (-1 < (char)pbVar4[7]) goto LAB_0013902c;
                  if (pbVar5 != param_2) {
                    uVar3 = uVar3 | (ulong)((int)(char)pbVar4[8] & 0x7f) << 0x38;
                    pbVar5 = pbVar4 + 9;
                    if (-1 < (char)pbVar4[8]) goto LAB_0013902c;
                    if (pbVar5 != param_2) {
                      bVar1 = *pbVar5;
                      if ((bVar1 & 0x7e) == 0) {
                        if (-1 < (char)bVar1) {
                          *param_1 = (long)(pbVar4 + 10);
                          return uVar3 | (ulong)bVar1 << 0x3f;
                        }
                        if (pbVar4 + 10 == param_2) goto LAB_0013915c;
                      }
                      fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),"libunwind: %s - %s\n",
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
LAB_0013915c:
  fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),"libunwind: %s - %s\n","getULEB128",
          "truncated uleb128 expression");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 001391c4  FUN_001391c4 =====

ulong FUN_001391c4(byte *param_1,undefined8 param_2,long param_3,ulong param_4)

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
  lVar11 = FUN_00138ffc(&local_68,param_1 + 0x14);
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
      puVar9 = PTR___sF_001a2f50;
      pbVar13 = pbVar18 + 1;
      local_68 = pbVar13;
      bVar8 = *pbVar18;
      uVar10 = (uint)bVar8;
      if (0x91 < uVar10 - 3) {
code_r0x00139a40:
        fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
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
        goto LAB_001396ac;
      case 4:
      case 5:
      case 7:
        goto code_r0x00139a40;
      case 6:
        puVar14 = (ulong *)*puVar19;
LAB_0013963c:
        *puVar19 = *puVar14;
        goto LAB_00139248;
      case 8:
        uVar16 = (ulong)pbVar18[1];
        goto LAB_00139610;
      case 9:
        uVar16 = (ulong)(char)pbVar18[1];
LAB_00139610:
        local_68 = pbVar18 + 2;
        goto LAB_001396ac;
      case 10:
        uVar16 = (ulong)*(ushort *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_001396ac;
      case 0xb:
        uVar16 = (ulong)*(short *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_001396ac;
      case 0xc:
        uVar16 = (ulong)*(uint *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_001396ac;
      case 0xd:
        uVar16 = (ulong)*(int *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_001396ac;
      case 0x10:
        uVar16 = FUN_00138ffc(&local_68,pbVar6);
        puVar19 = puVar19 + 1;
        *puVar19 = uVar16;
        goto LAB_00139248;
      case 0x11:
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = pbVar13;
        do {
          if (pbVar18 == pbVar6) {
            fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
        goto LAB_00139248;
      case 0x12:
        uVar16 = *puVar19;
        goto LAB_00139244;
      case 0x13:
        puVar19 = puVar19 + -1;
        goto LAB_00139248;
      case 0x14:
        uVar16 = puVar19[-1];
        goto LAB_00139244;
      case 0x15:
        local_68 = pbVar18 + 2;
        uVar16 = puVar19[-(ulong)pbVar18[1]];
LAB_001396ac:
LAB_00139244:
        puVar19[1] = uVar16;
        puVar19 = puVar19 + 1;
        goto LAB_00139248;
      case 0x16:
        auVar20 = NEON_ext(*(undefined1 (*) [16])(puVar19 + -1),*(undefined1 (*) [16])(puVar19 + -1)
                           ,8,1);
        *puVar19 = auVar20._8_8_;
        puVar19[-1] = auVar20._0_8_;
        goto LAB_00139248;
      case 0x17:
        uVar16 = *puVar19;
        *puVar19 = SUB168(*(undefined1 (*) [16])(puVar19 + -2),8);
        puVar19[-1] = SUB168(*(undefined1 (*) [16])(puVar19 + -2),0);
        puVar19[-2] = uVar16;
        goto LAB_00139248;
      case 0x18:
        puVar14 = (ulong *)*puVar19;
        puVar19 = puVar19 + -1;
        *puVar19 = *puVar14;
        goto LAB_00139248;
      case 0x19:
        uVar16 = *puVar19;
        if ((long)uVar16 < 0) goto LAB_001397e4;
        goto LAB_00139248;
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
LAB_001397e4:
        *puVar19 = -uVar16;
        goto LAB_00139248;
      case 0x20:
        *puVar19 = ~*puVar19;
        goto LAB_00139248;
      case 0x21:
        uVar16 = puVar19[-1] | *puVar19;
        break;
      case 0x22:
        uVar16 = puVar19[-1] + *puVar19;
        break;
      case 0x23:
        lVar11 = FUN_00138ffc(&local_68,pbVar6);
        *puVar19 = *puVar19 + lVar11;
        goto LAB_00139248;
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
        goto LAB_00139248;
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
        goto LAB_00139248;
      default:
        uVar16 = (ulong)(uVar15 - 0x30);
        goto LAB_00139244;
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
        goto LAB_00139240;
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
            fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
             (puVar14 = puVar2, bVar8 != 0x8d)) goto LAB_00139380;
        }
        else if (bVar8 < 0x90) {
          puVar14 = puVar1;
          if ((bVar8 != 0x8e) && (puVar14 = puVar4, uVar15 != 0x8f)) {
LAB_00139380:
            if (0x1c < uVar10 - 0x70) {
              fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((bVar8 != 0x90) && (puVar14 = puVar3, bVar8 != 0x92)) goto LAB_00139380;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_00139244;
      case 0x90:
        uVar10 = FUN_00138ffc(&local_68,pbVar6);
        puVar9 = PTR___sF_001a2f50;
        if ((int)uVar10 < 0x1e) {
          if (((uVar10 != 0xfffffffe) && (puVar14 = puVar5, uVar10 != 0xffffffff)) &&
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_001398e4;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_001398e4:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_001398e4;
        }
LAB_00139240:
        uVar16 = *puVar14;
        goto LAB_00139244;
      case 0x91:
        fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_fbreg not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x92:
        uVar10 = FUN_00138ffc(&local_68,pbVar6);
        puVar9 = PTR___sF_001a2f50;
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = local_68;
        pbVar13 = local_68;
        do {
          if (pbVar13 == pbVar6) {
            fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_0013990c;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_0013990c:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_0013990c;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_00139244;
      case 0x93:
        fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
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
LAB_00139ae4:
              fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),"libunwind: %s - %s\n",
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
            if (bVar8 != 8) goto LAB_00139ae4;
            goto LAB_0013963c;
          }
          *puVar19 = (ulong)(uint)*puVar14;
        }
        goto LAB_00139248;
      }
      puVar19[-1] = uVar16;
      puVar19 = puVar19 + -1;
LAB_00139248:
      pbVar18 = local_68;
    } while (local_68 < pbVar6);
    param_4 = *puVar19;
  }
  return param_4;
}


// ===== 00139b80  FUN_00139b80 =====

undefined8 FUN_00139b80(long param_1,ulong param_2,long *param_3,uint param_4)

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
      (uVar3 = FUN_0013a0a8(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],
                            param_3[2] + (ulong)param_4,&local_6b0,auStack_6e8), (uVar3 & 1) == 0))
     && ((param_3[4] == 0 ||
         (uVar3 = FUN_0013a270(*(undefined8 *)(param_1 + 8),param_2,param_3[4],(int)param_3[5],
                               &local_6b0,auStack_6e8), (uVar3 & 1) == 0)))) {
    lVar5 = *param_3;
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_001a7474);
    if (PTR_DAT_001a7428 < PTR_DAT_001a7430) {
      plVar4 = (long *)PTR_DAT_001a7428;
      if (lVar5 == -1) {
        do {
          if (((ulong)plVar4[1] <= param_2) && (param_2 < (ulong)plVar4[2])) goto LAB_00139c88;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_001a7430);
      }
      else {
        do {
          if (((*plVar4 == lVar5) && ((ulong)plVar4[1] <= param_2)) && (param_2 < (ulong)plVar4[2]))
          goto LAB_00139c88;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_001a7430);
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001a7474);
    goto LAB_00139cd0;
  }
LAB_00139cf0:
  bVar2 = 1;
LAB_00139cf4:
  lVar5 = *param_3;
  memset(auStack_680,0,0x618);
  uVar3 = FUN_00137ce4(*(undefined8 *)(param_1 + 8),&local_6b0,auStack_6e8,param_2,4,auStack_680);
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
      pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_001a7474);
      __src = PTR_DAT_001a7428;
      if (PTR_DAT_001a7438 <= PTR_DAT_001a7430) {
        __n = (long)PTR_DAT_001a7438 - (long)PTR_DAT_001a7428;
        __dest = (undefined *)malloc(__n * 4);
        memcpy(__dest,__src,__n);
        if ((undefined8 *)__src != &DAT_001a74b0) {
          free(__src);
        }
        PTR_DAT_001a7438 = __dest + ((long)__n >> 3) * 0x20;
        PTR_DAT_001a7430 = __dest + __n;
        PTR_DAT_001a7428 = __dest;
      }
      *(long *)PTR_DAT_001a7430 = lVar5;
      *(long *)((long)PTR_DAT_001a7430 + 8) = local_698;
      *(long *)((long)PTR_DAT_001a7430 + 0x18) = local_6b0;
      *(long *)((long)PTR_DAT_001a7430 + 0x10) = local_690;
      PTR_DAT_001a7430 = (undefined *)((long)PTR_DAT_001a7430 + 0x20);
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001a7474);
      return 1;
    }
    return 1;
  }
  return 1;
LAB_00139c88:
  lVar5 = plVar4[3];
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001a7474);
  if ((lVar5 != 0) &&
     (uVar3 = FUN_0013a0a8(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],lVar5,
                           &local_6b0,auStack_6e8), (uVar3 & 1) != 0)) {
    bVar2 = 0;
    goto LAB_00139cf4;
  }
LAB_00139cd0:
  uVar3 = FUN_0013a0a8(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],0,&local_6b0,
                       auStack_6e8);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  goto LAB_00139cf0;
}


// ===== 00139e54  FUN_00139e54 =====

undefined8 FUN_00139e54(ulong *param_1,undefined8 param_2,undefined8 *param_3)

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
              uVar5 = FUN_00139f88(uVar2,lVar8,lVar9 + lVar8,local_70);
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


// ===== 00139f88  FUN_00139f88 =====

undefined8 FUN_00139f88(undefined8 param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte *local_28;
  
  puVar3 = PTR___sF_001a2f50;
  if ((ulong)((long)param_3 - (long)param_2) < 4) {
    if (param_3 == param_2) {
      return 0;
    }
    fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),
            "libunwind: unsupported .eh_frame_hdr at %lx: need at least 4 bytes of data but only got %zd\n"
            ,param_2);
  }
  else {
    if (*param_2 == 1) {
      local_28 = param_2 + 4;
      bVar1 = param_2[2];
      bVar2 = param_2[1];
      *(byte *)(param_4 + 3) = param_2[3];
      uVar4 = FUN_00138c70(param_1,&local_28,param_3,bVar2,param_2);
      *param_4 = uVar4;
      if (bVar1 == 0xff) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00138c70(param_1,&local_28,param_3,bVar1,param_2);
      }
      param_4[1] = uVar4;
      param_4[2] = local_28;
      return 1;
    }
    fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),
            "libunwind: unsupported .eh_frame_hdr version: %u at %lx\n",(ulong)(uint)*param_2,
            param_2);
  }
  fflush((FILE *)(puVar3 + 0x130));
  return 0;
}


// ===== 0013a0a8  FUN_0013a0a8 =====

undefined8
FUN_0013a0a8(undefined8 param_1,ulong param_2,uint *param_3,long param_4,uint *param_5,
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
        (puVar7 < puVar9)) && (lVar4 = FUN_00136e18(param_1,puVar7,param_7), lVar4 == 0)) {
      local_68 = local_68 + 1;
      uVar8 = FUN_00138c70(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x18),0);
      lVar4 = FUN_00138c70(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x18) & 0xf,0);
      if ((uVar8 < param_2) && (param_2 <= lVar4 + uVar8)) {
        cVar2 = *(char *)(param_7 + 0x31);
        param_6[5] = 0;
        puVar9 = local_68;
        if (cVar2 != '\0') {
          lVar5 = FUN_00138ffc(&local_68,puVar1);
          puVar7 = local_68;
          puVar9 = (uint *)((long)local_68 + lVar5);
          if ((*(byte *)(param_7 + 0x19) != 0xff) &&
             (lVar5 = FUN_00138c70(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x19) & 0xf,0),
             lVar5 != 0)) {
            local_68 = puVar7;
            uVar6 = FUN_00138c70(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x19),0);
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


// ===== 0013a270  FUN_0013a270 =====

undefined8
FUN_0013a270(undefined8 param_1,ulong param_2,long param_3,ulong param_4,long param_5,
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
  uVar1 = FUN_00139f88(param_1,param_3,lVar4,auStack_80);
  if (((uVar1 & 1) != 0) && (local_78 != 0)) {
    lVar2 = FUN_0013a3d8(local_68);
    lVar7 = 0;
    do {
      if (local_78 < 2) {
        lVar8 = lVar7 * lVar2;
        break;
      }
      uVar6 = local_78 >> 1;
      lVar8 = (uVar6 + lVar7) * lVar2;
      local_88 = local_70 + lVar8;
      uVar1 = FUN_00138c70(param_1,&local_88,lVar4,local_68,param_3);
      uVar5 = local_78 - uVar6;
      local_78 = uVar6;
      if (uVar1 < param_2) {
        local_78 = uVar5;
        lVar7 = uVar6 + lVar7;
      }
    } while (uVar1 != param_2);
    local_88 = local_70 + lVar8;
    FUN_00138c70(param_1,&local_88,lVar4,local_68,param_3);
    uVar3 = FUN_00138c70(param_1,&local_88,lVar4,local_68,param_3);
    lVar4 = FUN_00136c88(param_1,uVar3,param_5,param_6,0);
    if (((lVar4 == 0) && (*(ulong *)(param_5 + 0x18) <= param_2)) &&
       (param_2 < *(ulong *)(param_5 + 0x20))) {
      return 1;
    }
  }
  return 0;
}


// ===== 0013a3d8  FUN_0013a3d8 =====

undefined8 FUN_0013a3d8(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_001a2f50;
  param_1 = param_1 & 0xf;
  if (param_1 < 9) {
    if (param_1 < 3) {
      if (param_1 == 2) {
        return 4;
      }
      if (param_1 == 1) {
LAB_0013a4a0:
        fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
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
    if (param_1 == 9) goto LAB_0013a4a0;
  }
  else {
    if (param_1 == 0xc) {
      return 0x10;
    }
    if (param_1 == 0xb) {
      return 8;
    }
  }
  fprintf((FILE *)(PTR___sF_001a2f50 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
          "Unknown DWARF encoding for search table.");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0013a4d4  FUN_0013a4d4 =====

char * FUN_0013a4d4(int param_1)

{
  if (param_1 + 2U < 0x62) {
    return &DAT_001204e8 + *(int *)(&DAT_001204e8 + (ulong)(param_1 + 2U) * 4);
  }
  return "unknown register";
}


// ===== 0013a504  FUN_0013a504 =====

undefined1  [16] FUN_0013a504(undefined1 (*param_1) [16])

{
  return *param_1;
}


// ===== 0013a594  facebook::react::RNSVGImageShadowNode::setImageManager =====

/* facebook::react::RNSVGImageShadowNode::setImageManager(std::__ndk1::shared_ptr<facebook::react::ImageManager>
   const&) */

void __thiscall
facebook::react::RNSVGImageShadowNode::setImageManager
          (RNSVGImageShadowNode *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = *(undefined8 *)param_1;
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    FUN_00136080(1,lVar2 + 8);
  }
  plVar3 = *(long **)(this + 0x3f0);
  *(undefined8 *)(this + 1000) = uVar1;
  *(long *)(this + 0x3f0) = lVar2;
  if ((plVar3 != (long *)0x0) && (lVar2 = FUN_00136770(0xffffffffffffffff,plVar3 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0013a610  facebook::react::RNSVGImageShadowNode::getImageSource =====

/* facebook::react::RNSVGImageShadowNode::getImageSource() const */

void facebook::react::RNSVGImageShadowNode::getImageSource(void)

{
  long lVar1;
  long in_x8;
  long lVar2;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 local_4c;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0013a6c0();
                    /* try { // try from 0013a648 to 0013a653 has its CatchHandler @ 0013a698 */
  facebook::react::LayoutableShadowNode::getLayoutMetrics();
  *(undefined4 *)(in_x8 + 0x40) = local_4c;
  *(ulong *)(in_x8 + 0x44) =
       CONCAT44(((float)((ulong)local_84 >> 0x20) - (float)((ulong)local_7c >> 0x20)) -
                (float)((ulong)local_74 >> 0x20),
                ((float)local_84 - (float)local_7c) - (float)local_74);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013a6c0  FUN_0013a6c0 =====

void FUN_0013a6c0(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  undefined8 uVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  undefined8 uVar10;
  
  lVar6 = tpidr_el0;
  lVar8 = *(long *)(lVar6 + 0x28);
  this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (param_1 + 2);
  *param_1 = *param_2;
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    uVar10 = *(undefined8 *)(param_2 + 4);
    uVar9 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar10;
    *(undefined8 *)this = uVar9;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(this,*(char **)(param_2 + 6),*(ulong *)(param_2 + 4));
  }
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  if ((*(byte *)(param_2 + 10) & 1) == 0) {
    uVar10 = *(undefined8 *)(param_2 + 0xc);
    uVar9 = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0xc) = uVar10;
    *(undefined8 *)(param_1 + 10) = uVar9;
  }
  else {
                    /* try { // try from 0013a754 to 0013a75b has its CatchHandler @ 0013a8a8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 10),*(char **)(param_2 + 0xe),*(ulong *)(param_2 + 0xc));
  }
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  param_1[0x12] = param_2[0x12];
  *(undefined8 *)(param_1 + 0x10) = uVar9;
  if ((*(byte *)(param_2 + 0x14) & 1) == 0) {
    uVar10 = *(undefined8 *)(param_2 + 0x16);
    uVar9 = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x16) = uVar10;
    *(undefined8 *)(param_1 + 0x14) = uVar9;
  }
  else {
                    /* try { // try from 0013a790 to 0013a797 has its CatchHandler @ 0013a898 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x14),*(char **)(param_2 + 0x18),*(ulong *)(param_2 + 0x16));
  }
  if ((*(byte *)(param_2 + 0x1a) & 1) == 0) {
    uVar10 = *(undefined8 *)(param_2 + 0x1c);
    uVar9 = *(undefined8 *)(param_2 + 0x1a);
    *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
    *(undefined8 *)(param_1 + 0x1c) = uVar10;
    *(undefined8 *)(param_1 + 0x1a) = uVar9;
  }
  else {
                    /* try { // try from 0013a7bc to 0013a7c3 has its CatchHandler @ 0013a888 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x1a),*(char **)(param_2 + 0x1e),*(ulong *)(param_2 + 0x1c));
  }
  uVar3 = param_2[0x20];
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  lVar1 = *(long *)(param_2 + 0x22);
  lVar2 = *(long *)(param_2 + 0x24);
  param_1[0x20] = uVar3;
  uVar5 = lVar2 - lVar1;
  if (uVar5 != 0) {
    if (0x555555555555555 < (ulong)(((long)uVar5 >> 4) * -0x5555555555555555)) {
      if (*(long *)(lVar6 + 0x28) != lVar8) goto LAB_0013a910;
                    /* try { // try from 0013a884 to 0013a887 has its CatchHandler @ 0013a8c4 */
      uVar9 = FUN_0013b3e0();
                    /* catch() { ... } // from try @ 0013a7bc with catch @ 0013a888 */
      if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
        if ((*(byte *)(param_1 + 10) & 1) == 0) goto LAB_0013a8e8;
LAB_0013a934:
        operator_delete(*(void **)(param_1 + 0xe));
        bVar4 = *this;
      }
      else {
        operator_delete(*(void **)(param_1 + 0x18));
        if ((*(byte *)(param_1 + 10) & 1) != 0) goto LAB_0013a934;
LAB_0013a8e8:
        bVar4 = *this;
      }
      if (((byte)bVar4 & 1) != 0) {
        operator_delete(*(void **)(param_1 + 6));
      }
      if (*(long *)(lVar6 + 0x28) == lVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_001368d4(uVar9);
      }
      goto LAB_0013a910;
    }
                    /* try { // try from 0013a818 to 0013a81f has its CatchHandler @ 0013a8c4 */
    pvVar7 = operator_new(uVar5);
    *(void **)(param_1 + 0x22) = pvVar7;
    *(void **)(param_1 + 0x24) = pvVar7;
    *(ulong *)(param_1 + 0x26) = (long)pvVar7 + uVar5;
                    /* try { // try from 0013a830 to 0013a843 has its CatchHandler @ 0013a8b8 */
    uVar9 = FUN_0013b3f4(param_1 + 0x26,lVar1,lVar2,pvVar7);
    *(undefined8 *)(param_1 + 0x24) = uVar9;
  }
  if (*(long *)(lVar6 + 0x28) == lVar8) {
    return;
  }
LAB_0013a910:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013a948  FUN_0013a948 =====

void FUN_0013a948(long param_1)

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


// ===== 0013aa28  facebook::react::RNSVGImageShadowNode::updateStateIfNeeded =====

/* facebook::react::RNSVGImageShadowNode::updateStateIfNeeded() */

void __thiscall
facebook::react::RNSVGImageShadowNode::updateStateIfNeeded(RNSVGImageShadowNode *this)

{
  State *pSVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  char *__s2;
  ulong uVar9;
  char *pcVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined4 local_298 [2];
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined1 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  int local_1d8 [2];
  undefined8 local_1d0;
  size_t sStack_1c8;
  void *local_1c0;
  undefined1 local_1b8;
  long local_1b0;
  long lStack_1a8;
  long local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 local_190;
  long local_188;
  long lStack_180;
  long local_178;
  long local_170;
  long lStack_168;
  long local_160;
  undefined4 local_158;
  long local_150;
  long lStack_148;
  long local_140;
  undefined8 *local_138;
  long *plStack_130;
  int local_128 [2];
  byte local_120;
  char acStack_11f [7];
  ulong local_118;
  char *local_110;
  undefined4 local_e8;
  undefined8 local_e4;
  long *local_88;
  long *local_80;
  undefined8 local_78;
  long *local_70;
  undefined8 local_68;
  long *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_0013a6c0(local_128,*(long *)(this + 8) + 0x9a8);
                    /* try { // try from 0013aa64 to 0013aa6f has its CatchHandler @ 0013af28 */
  facebook::react::LayoutableShadowNode::getLayoutMetrics();
  local_e4 = CONCAT44(((float)(local_1d0 >> 0x20) - (float)(sStack_1c8 >> 0x20)) -
                      (float)((ulong)local_1c0 >> 0x20),
                      ((float)local_1d0 - (float)sStack_1c8) - SUB84(local_1c0,0));
  local_e8 = local_198;
                    /* try { // try from 0013aa98 to 0013aa9f has its CatchHandler @ 0013af24 */
  FUN_0013a6c0(local_1d8,*(undefined8 *)(*(long *)(this + 0x28) + 0x18));
  if (local_1d8[0] == local_128[0]) {
    uVar9 = (ulong)((byte)local_1d0 >> 1);
    uVar2 = uVar9;
    if ((local_1d0 & 1) != 0) {
      uVar2 = sStack_1c8;
    }
    uVar3 = (ulong)(local_120 >> 1);
    if ((local_120 & 1) != 0) {
      uVar3 = local_118;
    }
    if (uVar2 != uVar3) goto LAB_0013ab2c;
    __s2 = acStack_11f;
    if ((local_120 & 1) != 0) {
      __s2 = local_110;
    }
    if ((local_1d0 & 1) != 0) {
      iVar6 = memcmp(local_1c0,__s2,sStack_1c8);
      FUN_0013a948(local_1d8);
      if (iVar6 == 0) goto LAB_0013ae64;
      goto LAB_0013ab34;
    }
    if (1 < (byte)local_1d0) {
      pcVar10 = (char *)((long)&local_1d0 + 1);
      do {
        if (*pcVar10 != *__s2) goto LAB_0013ab2c;
        uVar9 = uVar9 - 1;
        pcVar10 = pcVar10 + 1;
        __s2 = __s2 + 1;
      } while (uVar9 != 0);
    }
  }
  else {
LAB_0013ab2c:
    FUN_0013a948(local_1d8);
LAB_0013ab34:
    plVar11 = *(long **)(this + 1000);
                    /* try { // try from 0013ab38 to 0013ab3f has its CatchHandler @ 0013af20 */
    uVar5 = facebook::react::ShadowNode::getSurfaceId();
    local_68 = (long *)((ulong)local_68._4_4_ << 0x20);
                    /* try { // try from 0013ab50 to 0013ab67 has its CatchHandler @ 0013af1c */
    (**(code **)(*plVar11 + 0x10))(local_298,plVar11,local_128,uVar5,&local_68,0);
                    /* try { // try from 0013ab68 to 0013ab73 has its CatchHandler @ 0013af0c */
    FUN_0013a6c0(local_1d8,local_128);
                    /* try { // try from 0013ab74 to 0013ab7b has its CatchHandler @ 0013aefc */
    plStack_130 = (long *)operator_new(0xd8);
    *plStack_130 = (long)&PTR_FUN_0019e400;
    local_138 = plStack_130 + 3;
    *(undefined4 *)local_138 = local_298[0];
    plStack_130[6] = local_280;
    *(undefined1 *)(plStack_130 + 7) = local_278;
    plStack_130[5] = uStack_288;
    plStack_130[4] = local_290;
    plStack_130[9] = uStack_268;
    plStack_130[8] = local_270;
    plStack_130[10] = local_260;
    plStack_130[0xb] = uStack_258;
    plStack_130[0xe] = uStack_240;
    plStack_130[0xd] = local_248;
    *(undefined4 *)(plStack_130 + 0xc) = local_250;
    plStack_130[0x11] = uStack_228;
    plStack_130[0x10] = local_230;
    plStack_130[0xf] = local_238;
    plStack_130[0x15] = uStack_208;
    plStack_130[0x14] = local_210;
    plStack_130[0x12] = local_220;
    plStack_130[0x18] = uStack_1f0;
    plStack_130[0x17] = local_1f8;
    *(undefined4 *)(plStack_130 + 0x13) = local_218;
    plStack_130[1] = 0;
    plStack_130[2] = 0;
    plStack_130[0x16] = local_200;
    plStack_130[0x1a] = uStack_1e0;
    plStack_130[0x19] = local_1e8;
    local_290 = 0;
    uStack_288 = 0;
    local_280 = 0;
    local_270 = 0;
    uStack_268 = 0;
    local_260 = 0;
    local_248 = 0;
    uStack_240 = 0;
    local_238 = 0;
    local_230 = 0;
    uStack_228 = 0;
    local_220 = 0;
    local_210 = 0;
    uStack_208 = 0;
    local_200 = 0;
    local_1f8 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1f0 = 0;
    FUN_0013a948(local_298);
                    /* try { // try from 0013ac4c to 0013ac53 has its CatchHandler @ 0013aeec */
    plVar11 = (long *)operator_new(200);
    *plVar11 = (long)&PTR_FUN_0019e698;
    plVar13 = plVar11 + 3;
    *(int *)plVar13 = local_1d8[0];
    plVar11[6] = (long)local_1c0;
    plVar11[5] = sStack_1c8;
    plVar11[4] = local_1d0;
    *(undefined1 *)(plVar11 + 7) = local_1b8;
    plVar11[9] = lStack_1a8;
    plVar11[8] = local_1b0;
    uVar12 = *(undefined8 *)(this + 0x28);
    plVar11[1] = 0;
    plVar11[2] = 0;
    plVar11[10] = local_1a0;
    plVar11[0xb] = CONCAT44(uStack_194,local_198);
    local_1d0 = 0;
    sStack_1c8 = 0;
    local_1c0 = (void *)0x0;
    plVar11[0xf] = local_178;
    plVar11[0xe] = lStack_180;
    plVar11[0xd] = local_188;
    *(undefined4 *)(plVar11 + 0x13) = local_158;
    plVar11[0x11] = lStack_168;
    plVar11[0x10] = local_170;
    plVar11[0x16] = local_140;
    plVar11[0x15] = lStack_148;
    plVar11[0x14] = local_150;
    local_1b0 = 0;
    lStack_1a8 = 0;
    local_1a0 = 0;
    *(undefined4 *)(plVar11 + 0xc) = local_190;
    local_188 = 0;
    lStack_180 = 0;
    plVar11[0x12] = local_160;
    local_178 = 0;
    local_170 = 0;
    lStack_168 = 0;
    local_160 = 0;
    local_150 = 0;
    lStack_148 = 0;
    local_140 = 0;
    plVar11[0x18] = (long)plStack_130;
    plVar11[0x17] = (long)local_138;
    local_138 = (undefined8 *)0x0;
    plStack_130 = (long *)0x0;
    local_88 = plVar13;
    local_80 = plVar11;
                    /* try { // try from 0013ad20 to 0013ad27 has its CatchHandler @ 0013aedc */
    puVar7 = (undefined8 *)operator_new(0x50);
    pSVar1 = (State *)(puVar7 + 3);
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_FUN_0019e450;
    local_88 = (long *)0x0;
    local_80 = (long *)0x0;
    local_78 = 0;
    local_70 = (long *)0x0;
                    /* try { // try from 0013ad4c to 0013ad5b has its CatchHandler @ 0013aeb4 */
    local_68 = plVar13;
    local_60 = plVar11;
    facebook::react::State::State(pSVar1,&local_68,uVar12);
    plVar11 = local_60;
    if ((local_60 != (long *)0x0) &&
       (lVar8 = FUN_00136770(0xffffffffffffffff,local_60 + 1), lVar8 == 0)) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar11 = local_70;
    *(undefined ***)pSVar1 = &PTR_FUN_0019e4a0;
    if ((local_70 != (long *)0x0) &&
       (lVar8 = FUN_00136770(0xffffffffffffffff,local_70 + 1), lVar8 == 0)) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar11 = *(long **)(this + 0x30);
    *(State **)(this + 0x28) = pSVar1;
    *(undefined8 **)(this + 0x30) = puVar7;
    if ((plVar11 != (long *)0x0) &&
       (lVar8 = FUN_00136770(0xffffffffffffffff,plVar11 + 1), lVar8 == 0)) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar11 = local_80;
    if ((local_80 != (long *)0x0) &&
       (lVar8 = FUN_00136770(0xffffffffffffffff,local_80 + 1), lVar8 == 0)) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar11 = plStack_130;
    if ((plStack_130 != (long *)0x0) &&
       (lVar8 = FUN_00136770(0xffffffffffffffff,plStack_130 + 1), lVar8 == 0)) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  FUN_0013a948(local_1d8);
LAB_0013ae64:
  FUN_0013a948(local_128);
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0013af50  FUN_0013af50 =====

void FUN_0013af50(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xb8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = *(long **)(param_1 + 0xa8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0013a948(param_1);
  return;
}


// ===== 0013afd0  FUN_0013afd0 =====

void FUN_0013afd0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xa8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0013a948(param_1);
  return;
}


// ===== 0013b020  facebook::react::RNSVGImageShadowNode::layout =====

/* facebook::react::RNSVGImageShadowNode::layout(facebook::react::LayoutContext) */

void __thiscall
facebook::react::RNSVGImageShadowNode::layout(RNSVGImageShadowNode *this,undefined8 *param_2)

{
  long lVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  updateStateIfNeeded(this);
  uStack_58 = param_2[1];
  local_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  local_40 = param_2[4];
  facebook::react::YogaLayoutableShadowNode::layout(this,&local_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013b090  FUN_0013b090 =====

void FUN_0013b090(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  plVar3 = (long *)param_1[0x7e];
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_001a2bb0 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00136770(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
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
  FUN_0013b73c(param_1 + 0x23);
  FUN_0013b640(param_1);
  return;
}


// ===== 0013b178  FUN_0013b178 =====

void FUN_0013b178(void *param_1)

{
  FUN_0013b090();
  operator_delete(param_1);
  return;
}


// ===== 0013b19c  FUN_0013b19c =====

void FUN_0013b19c(long param_1)

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


// ===== 0013b204  FUN_0013b204 =====

bool FUN_0013b204(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 0013b21c  FUN_0013b21c =====

bool FUN_0013b21c(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 0013b234  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init_copy_ctor_external =====

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
      FUN_0013b2a4(this);
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


// ===== 0013b2a4  FUN_0013b2a4 =====

void FUN_0013b2a4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0013b2b8("basic_string");
}


// ===== 0013b2b8  FUN_0013b2b8 =====

void FUN_0013b2b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 0013b2d4 to 0013b2db has its CatchHandler @ 0013b2f4 */
  FUN_0013b308(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_typeinfo_001a2ba0,PTR__length_error_001a2b90);
}


// ===== 0013b308  FUN_0013b308 =====

void FUN_0013b308(logic_error *param_1,char *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  *(undefined **)param_1 = PTR_vtable_001a2ba8 + 0x10;
  return;
}


// ===== 0013b338  FUN_0013b338 =====

void FUN_0013b338(void)

{
  __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 0013b348  FUN_0013b348 =====

void FUN_0013b348(undefined8 *param_1)

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


// ===== 0013b3e0  FUN_0013b3e0 =====

void FUN_0013b3e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0013b2b8("vector");
}


// ===== 0013b3f4  FUN_0013b3f4 =====

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
FUN_0013b3f4(undefined8 param_1,byte *param_2,byte *param_3,
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_4)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_60;
  undefined8 local_58;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **ppbStack_50;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **local_48;
  undefined1 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ppbStack_50 = &local_68;
  local_48 = &local_60;
  local_40 = 0;
  local_68 = param_4;
  local_60 = param_4;
  local_58 = param_1;
  if (param_2 != param_3) {
    do {
      pbVar2 = local_60;
      if ((*param_2 & 1) == 0) {
        uVar4 = *(undefined8 *)(param_2 + 8);
        uVar3 = *(undefined8 *)param_2;
        *(undefined8 *)(local_60 + 0x10) = *(undefined8 *)(param_2 + 0x10);
        *(undefined8 *)(local_60 + 8) = uVar4;
        *(undefined8 *)local_60 = uVar3;
      }
      else {
                    /* try { // try from 0013b48c to 0013b493 has its CatchHandler @ 0013b4d8 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external(local_60,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
      }
      if ((param_2[0x18] & 1) == 0) {
        uVar4 = *(undefined8 *)(param_2 + 0x20);
        uVar3 = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(pbVar2 + 0x28) = *(undefined8 *)(param_2 + 0x28);
        *(undefined8 *)(pbVar2 + 0x20) = uVar4;
        *(undefined8 *)(pbVar2 + 0x18) = uVar3;
      }
      else {
                    /* try { // try from 0013b4a4 to 0013b4ab has its CatchHandler @ 0013b4e0 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  (pbVar2 + 0x18,*(char **)(param_2 + 0x28),*(ulong *)(param_2 + 0x20));
      }
      param_2 = param_2 + 0x30;
      local_60 = local_60 + 0x30;
    } while (param_2 != param_3);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_60;
}


// ===== 0013b518  FUN_0013b518 =====

void FUN_0013b518(long param_1)

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


// ===== 0013b57c  FUN_0013b57c =====

void FUN_0013b57c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0019e400;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0013b58c  FUN_0013b58c =====

void FUN_0013b58c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0019e400;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0013b5bc  FUN_0013b5bc =====

void FUN_0013b5bc(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xd0);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = *(long **)(param_1 + 0xc0);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0013a948(param_1 + 0x18);
  return;
}


// ===== 0013b63c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 0013b640  FUN_0013b640 =====

void FUN_0013b640(NativeState *param_1)

{
  long lVar1;
  long *plVar2;
  
  *(undefined **)param_1 = PTR_vtable_001a2bb8 + 0x10;
  if (*(long *)(param_1 + 0x60) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = *(long **)(param_1 + 0x48);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = *(long **)(param_1 + 0x30);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = *(long **)(param_1 + 0x20);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = *(long **)(param_1 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  facebook::jsi::NativeState::~NativeState(param_1);
  return;
}


// ===== 0013b73c  FUN_0013b73c =====

void FUN_0013b73c(long param_1)

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


// ===== 0013b7d0  FUN_0013b7d0 =====

void FUN_0013b7d0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0013b820  FUN_0013b820 =====

void FUN_0013b820(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0013b870  FUN_0013b870 =====

void FUN_0013b870(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0019e450;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0013b880  FUN_0013b880 =====

void FUN_0013b880(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0019e450;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0013b8b0  FUN_0013b8b0 =====

void FUN_0013b8b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0013b8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0013b8bc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 0013b8c0  FUN_0013b8c0 =====

void FUN_0013b8c0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0013b910  FUN_0013b910 =====

void FUN_0013b910(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[4];
  *param_1 = &PTR_FUN_0019e508;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[2] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 0013b978  FUN_0013b978 =====

void FUN_0013b978(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}


// ===== 0013b984  <EXTERNAL>::facebook::react::MapBufferBuilder::EMPTY =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::MapBufferBuilder::EMPTY(void)

{
  (*(code *)PTR_EMPTY_001a3020)();
  return;
}


// ===== 0013b988  FUN_0013b988 =====

void FUN_0013b988(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 0013b990  FUN_0013b990 =====

void FUN_0013b990(long param_1,dynamic *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long **pplVar5;
  long lVar6;
  undefined4 local_290 [2];
  undefined8 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined1 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  long local_250;
  undefined4 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  long *local_1e8;
  undefined4 local_1e0 [2];
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined1 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  long lStack_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  long local_178;
  long lStack_170;
  long local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  long *local_138;
  long local_130;
  long *local_128;
  dynamic adStack_120 [48];
  long local_f0 [4];
  long *local_d0;
  long local_c0 [4];
  long *local_a0 [2];
  long local_90;
  long *local_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  folly::dynamic::dynamic(adStack_120,param_2);
  local_230 = 0;
  local_290[0] = 0;
  local_250 = DAT_001206a8;
  local_270 = 0;
  local_248 = 0;
  local_1a8 = 0;
  lStack_1a0 = DAT_001206a8;
  local_198 = 0;
  local_210 = 0;
  local_168 = 0;
  local_1e0[0] = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1d8 = 0;
  local_280 = 0;
  uStack_278 = 0;
  local_288 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 0;
  local_240 = 0;
  uStack_238 = 0;
  lStack_170 = 0;
  local_178 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  local_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_140 = 0;
  local_138 = (long *)0x0;
  local_148 = 0;
  local_1f0 = 0;
  local_1e8 = (long *)0x0;
  local_1f8 = 0;
  local_d0 = (long *)0x0;
                    /* try { // try from 0013ba60 to 0013ba67 has its CatchHandler @ 0013bdf0 */
  local_d0 = (long *)operator_new(0xb8);
  *local_d0 = (long)&PTR_FUN_0019e618;
  *(undefined4 *)(local_d0 + 1) = 0;
  local_d0[3] = 0;
  local_d0[4] = 0;
  local_d0[8] = 0;
  local_d0[9] = local_250;
  local_d0[2] = 0;
  local_d0[0x10] = local_168;
  lVar4 = *(long *)(param_1 + 0x10);
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1d8 = 0;
  *(undefined1 *)(local_d0 + 5) = 0;
  local_d0[6] = 0;
  local_d0[7] = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1b8 = 0;
  *(undefined4 *)(local_d0 + 10) = local_248;
  local_d0[0xb] = 0;
  local_d0[0xc] = 0;
  local_d0[0xd] = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_d0[0xf] = lStack_170;
  local_d0[0xe] = local_178;
  local_180 = 0;
  local_178 = 0;
  lStack_170 = 0;
  local_168 = 0;
  *(undefined4 *)(local_d0 + 0x11) = 0;
  local_d0[0x12] = 0;
  local_d0[0x13] = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_d0[0x15] = 0;
  local_d0[0x16] = 0;
  local_d0[0x14] = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = (long *)0x0;
  if (lVar4 != 0) {
    local_128 = (long *)std::__ndk1::__shared_weak_count::lock();
    if (local_128 != (long *)0x0) {
      lVar4 = *(long *)(param_1 + 8);
      local_130 = lVar4;
      if (lVar4 != 0) {
        local_90 = lVar4;
        local_88 = local_128;
        FUN_00136080(1,local_128 + 1);
        if (local_d0 == (long *)0x0) {
          plVar2 = (long *)0x0;
        }
        else {
                    /* try { // try from 0013bb3c to 0013bb3f has its CatchHandler @ 0013bd64 */
          plVar2 = (long *)(**(code **)(*local_d0 + 0x10))();
        }
        local_60 = (long *)0x0;
        local_a0[0] = plVar2;
                    /* try { // try from 0013bb58 to 0013bb5f has its CatchHandler @ 0013bd7c */
        plVar3 = (long *)operator_new(0x40);
        *plVar3 = (long)&PTR_FUN_0019e548;
        if (plVar2 == (long *)0x0) {
          pplVar5 = (long **)(plVar3 + 6);
LAB_0013bb90:
          *pplVar5 = (long *)0x0;
        }
        else {
          if (plVar2 != local_c0) {
            pplVar5 = local_a0;
            plVar3[6] = (long)plVar2;
            goto LAB_0013bb90;
          }
          plVar3[6] = (long)(plVar3 + 2);
                    /* try { // try from 0013bba4 to 0013bbb3 has its CatchHandler @ 0013bd60 */
          (**(code **)(local_c0[0] + 0x18))(local_c0);
        }
        local_60 = plVar3;
        if (local_a0[0] == local_c0) {
          lVar6 = 4;
          plVar2 = local_c0;
LAB_0013bbdc:
          (**(code **)(*plVar2 + lVar6 * 8))(plVar2);
        }
        else if (local_a0[0] != (long *)0x0) {
          lVar6 = 5;
          plVar2 = local_a0[0];
          goto LAB_0013bbdc;
        }
                    /* try { // try from 0013bbec to 0013bbfb has its CatchHandler @ 0013bd6c */
        facebook::react::ShadowNodeFamily::dispatchRawState(lVar4,&local_90,0);
        plVar2 = local_80;
        if (local_60 == plVar2) {
          lVar4 = 4;
LAB_0013bc24:
          (**(code **)(*plVar2 + lVar4 * 8))();
        }
        else if (local_60 != (long *)0x0) {
          lVar4 = 5;
          plVar2 = local_60;
          goto LAB_0013bc24;
        }
        plVar2 = local_88;
        if ((local_88 != (long *)0x0) &&
           (lVar4 = FUN_00136770(0xffffffffffffffff,local_88 + 1), lVar4 == 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        if (local_128 == (long *)0x0) goto LAB_0013bc90;
      }
      plVar2 = local_128;
      lVar4 = FUN_00136770(0xffffffffffffffff,local_128 + 1);
      if (lVar4 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
  }
LAB_0013bc90:
  if (local_d0 == local_f0) {
    lVar4 = 4;
    plVar2 = local_f0;
  }
  else {
    if (local_d0 == (long *)0x0) goto LAB_0013bcc0;
    lVar4 = 5;
    plVar2 = local_d0;
  }
  (**(code **)(*plVar2 + lVar4 * 8))();
LAB_0013bcc0:
  plVar2 = local_138;
  if ((local_138 != (long *)0x0) &&
     (lVar4 = FUN_00136770(0xffffffffffffffff,local_138 + 1), lVar4 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0013a948(local_1e0);
  plVar2 = local_1e8;
  if ((local_1e8 != (long *)0x0) &&
     (lVar4 = FUN_00136770(0xffffffffffffffff,local_1e8 + 1), lVar4 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0013a948(local_290);
  folly::dynamic::destroy();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013be28  FUN_0013be28 =====

void FUN_0013be28(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[4];
  *param_1 = &PTR_FUN_0019e508;
  if ((plVar2 == (long *)0x0) || (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 != 0))
  {
    lVar1 = param_1[2];
  }
  else {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    lVar1 = param_1[2];
  }
  if (lVar1 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0013be9c  FUN_0013be9c =====

void FUN_0013be9c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x13bea0);
  (*pcVar1)();
}


// ===== 0013bea0  FUN_0013bea0 =====

void FUN_0013bea0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xa8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0013a948(param_1);
  return;
}


// ===== 0013bef0  FUN_0013bef0 =====

void FUN_0013bef0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0013bf40  FUN_0013bf40 =====

void FUN_0013bf40(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)(param_1 + 0x30);
  plVar3 = (long *)(param_1 + 0x10);
  if (plVar1 == plVar3) {
    lVar2 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0013bf80;
    lVar2 = 5;
    plVar3 = plVar1;
  }
  (**(code **)(*plVar3 + lVar2 * 8))();
LAB_0013bf80:
  plVar3 = *(long **)(param_1 + 8);
  if ((plVar3 != (long *)0x0) && (lVar2 = FUN_00136770(0xffffffffffffffff,plVar3 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0013bfc4  FUN_0013bfc4 =====

void FUN_0013bfc4(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_0019e548;
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
                    /* WARNING: Could not recover jumptable at 0x0013c000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 0013c008  FUN_0013c008 =====

void FUN_0013c008(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_0019e548;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0013c054;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_0013c054:
  operator_delete(param_1);
  return;
}


// ===== 0013c064  FUN_0013c064 =====

undefined8 * FUN_0013c064(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  plVar2 = *(long **)(param_1 + 0x30);
  *puVar1 = &PTR_FUN_0019e548;
  if (plVar2 != (long *)0x0) {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      lVar3 = *plVar2;
      puVar1[6] = puVar1 + 2;
      (**(code **)(lVar3 + 0x18))();
      return puVar1;
    }
                    /* try { // try from 0013c0ac to 0013c0c7 has its CatchHandler @ 0013c0d8 */
    plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  puVar1[6] = plVar2;
  return puVar1;
}


// ===== 0013c0ec  FUN_0013c0ec =====

void FUN_0013c0ec(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_0019e548;
  if (plVar2 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
                    /* WARNING: Could not recover jumptable at 0x0013c15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
      return;
    }
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    param_2[6] = uVar1;
  }
  return;
}


// ===== 0013c160  FUN_0013c160 =====

void FUN_0013c160(long param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0013c190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 0013c198  FUN_0013c198 =====

void FUN_0013c198(void *param_1)

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
    if (plVar1 == (long *)0x0) goto LAB_0013c1d8;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_0013c1d8:
  operator_delete(param_1);
  return;
}


// ===== 0013c1e8  FUN_0013c1e8 =====

void FUN_0013c1e8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0013c1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,*param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0013c234();
}


// ===== 0013c20c  FUN_0013c20c =====

long FUN_0013c20c(long param_1,long param_2)

{
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_001a2b70) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0013c228  FUN_0013c228 =====

undefined * FUN_0013c228(void)

{
  return PTR_typeinfo_001a2b78;
}


// ===== 0013c234  FUN_0013c234 =====

void FUN_0013c234(void)

{
  long *plVar1;
  
  plVar1 = (long *)__cxa_allocate_exception(8);
  *plVar1 = (long)(PTR_vtable_001a2b68 + 0x10);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar1,PTR_typeinfo_001a2b60,PTR__exception_001a2b98);
}


// ===== 0013c268  FUN_0013c268 =====

void FUN_0013c268(exception *param_1)

{
  std::exception::~exception(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0013c28c  FUN_0013c28c =====

void FUN_0013c28c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[0x16];
  *param_1 = &PTR_FUN_0019e618;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0013a948(param_1 + 1);
  return;
}


// ===== 0013c2e8  FUN_0013c2e8 =====

void FUN_0013c2e8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[0x16];
  *param_1 = &PTR_FUN_0019e618;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0013a948(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 0013c34c  FUN_0013c34c =====

undefined8 * FUN_0013c34c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xb8);
  *puVar2 = &PTR_FUN_0019e618;
                    /* try { // try from 0013c374 to 0013c37b has its CatchHandler @ 0013c3a4 */
  FUN_0013a6c0(puVar2 + 1,param_1 + 8);
  lVar1 = *(long *)(param_1 + 0xb0);
  puVar2[0x15] = *(undefined8 *)(param_1 + 0xa8);
  puVar2[0x16] = lVar1;
  if (lVar1 != 0) {
    FUN_00136080(1,lVar1 + 8);
  }
  return puVar2;
}


// ===== 0013c3b8  FUN_0013c3b8 =====

void FUN_0013c3b8(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_2 = &PTR_FUN_0019e618;
  FUN_0013a6c0(param_2 + 1,param_1 + 8);
  lVar1 = *(long *)(param_1 + 0xb0);
  param_2[0x15] = *(undefined8 *)(param_1 + 0xa8);
  param_2[0x16] = lVar1;
  if (lVar1 != 0) {
    FUN_00136080(1,lVar1 + 8);
  }
  return;
}


// ===== 0013c408  FUN_0013c408 =====

void FUN_0013c408(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xb0);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0013a948(param_1 + 8);
  return;
}


// ===== 0013c458  FUN_0013c458 =====

void FUN_0013c458(void *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)((long)param_1 + 0xb0);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0013a948((long)param_1 + 8);
  operator_delete(param_1);
  return;
}


// ===== 0013c4b0  FUN_0013c4b0 =====

void FUN_0013c4b0(long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(200);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_0019e698;
                    /* try { // try from 0013c4e8 to 0013c4f3 has its CatchHandler @ 0013c520 */
  FUN_0013a6c0(puVar2 + 3,param_2 + 8);
  lVar1 = *(long *)(param_2 + 0xb0);
  puVar2[0x17] = *(undefined8 *)(param_2 + 0xa8);
  puVar2[0x18] = lVar1;
  if (lVar1 != 0) {
    FUN_00136080(1,lVar1 + 8);
  }
  *param_1 = (long)(puVar2 + 3);
  param_1[1] = (long)puVar2;
  return;
}


// ===== 0013c53c  FUN_0013c53c =====

long FUN_0013c53c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_001a2b80) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0013c558  FUN_0013c558 =====

undefined * FUN_0013c558(void)

{
  return PTR_typeinfo_001a2b88;
}


// ===== 0013c564  FUN_0013c564 =====

void FUN_0013c564(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0019e698;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0013c574  FUN_0013c574 =====

void FUN_0013c574(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0019e698;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0013c5a4  FUN_0013c5a4 =====

void FUN_0013c5a4(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xc0);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0013a948(param_1 + 0x18);
  return;
}


// ===== 0013c5f4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 0013c5f8  facebook::react::RNSVGImageState::getImageSource =====

/* facebook::react::RNSVGImageState::getImageSource() const */

void facebook::react::RNSVGImageState::getImageSource(void)

{
  FUN_0013a6c0();
  return;
}


// ===== 0013c604  facebook::react::RNSVGImageState::getImageRequest =====

/* facebook::react::RNSVGImageState::getImageRequest() const */

undefined8 __thiscall facebook::react::RNSVGImageState::getImageRequest(RNSVGImageState *this)

{
  return *(undefined8 *)(this + 0xa0);
}


// ===== 0013c60c  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode =====

/* facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode(facebook::react::ShadowNodeFragment
   const&, std::__ndk1::shared_ptr<facebook::react::ShadowNodeFamily> const&,
   facebook::react::ShadowNodeTraits) */

void __thiscall
facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode
          (RNSVGLayoutableShadowNode *this)

{
  int iVar1;
  char *__s1;
  
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode();
  *(undefined **)this = PTR_vtable_001a2bc0 + 0x10;
                    /* try { // try from 0013c634 to 0013c653 has its CatchHandler @ 0013c660 */
  __s1 = (char *)facebook::react::ShadowNode::getComponentName();
  iVar1 = strcmp(__s1,"RNSVGGroup");
  if (iVar1 != 0) {
    setZeroDimensions(this);
  }
  return;
}


// ===== 0013c674  facebook::react::RNSVGLayoutableShadowNode::setZeroDimensions =====

/* WARNING: Type propagation algorithm not settling */
/* facebook::react::RNSVGLayoutableShadowNode::setZeroDimensions() */

void __thiscall
facebook::react::RNSVGLayoutableShadowNode::setZeroDimensions(RNSVGLayoutableShadowNode *this)

{
  void *pvVar1;
  undefined1 *puVar2;
  ushort uVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined2 local_127;
  ushort uStack_125;
  ushort uStack_123;
  undefined1 uStack_121;
  undefined1 uStack_120;
  undefined8 uStack_11f;
  void *local_110;
  void *local_108;
  void *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined2 local_90 [2];
  undefined8 local_8c [2];
  undefined8 local_78;
  long *local_70;
  long local_68;
  
  puVar12 = &local_180;
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uStack_138 = *(undefined8 *)(this + 0x160);
  local_140 = *(undefined8 *)(this + 0x158);
  uStack_130 = *(undefined8 *)(this + 0x168);
  uStack_11f = *(undefined8 *)(this + 0x179);
  uVar7 = *(undefined8 *)(this + 0x171);
  pvVar6 = *(void **)(this + 0x188);
  uStack_128 = (undefined1)*(undefined8 *)(this + 0x170);
  uStack_178 = *(undefined8 *)(this + 0x120);
  local_180 = *(undefined8 *)(this + 0x118);
  uStack_168 = *(undefined8 *)(this + 0x130);
  uStack_170 = *(undefined8 *)(this + 0x128);
  local_127 = (undefined2)uVar7;
  uStack_125 = (ushort)((ulong)uVar7 >> 0x10);
  uStack_123 = (ushort)((ulong)uVar7 >> 0x20);
  uStack_121 = (undefined1)((ulong)uVar7 >> 0x30);
  uStack_120 = (undefined1)((ulong)uVar7 >> 0x38);
  uStack_148 = *(undefined8 *)(this + 0x150);
  uStack_150 = *(undefined8 *)(this + 0x148);
  uStack_158 = *(undefined8 *)(this + 0x140);
  local_160 = *(undefined8 *)(this + 0x138);
  puVar11 = (undefined1 *)(*(long *)(this + 400) - (long)pvVar6);
  local_108 = (void *)0x0;
  local_100 = (void *)0x0;
  local_110 = (void *)0x0;
  if (puVar11 == (undefined1 *)0x0) {
LAB_0013c73c:
    pvVar6 = *(void **)(this + 0x1a0);
    local_f8 = (undefined1 *)0x0;
    local_f0 = (undefined1 *)0x0;
    local_e8 = (undefined1 *)0x0;
    puVar11 = (undefined1 *)(*(long *)(this + 0x1a8) - (long)pvVar6);
    if (puVar11 != (undefined1 *)0x0) {
      if (0x924924924924924 < (ulong)(((long)puVar11 >> 2) * 0x6db6db6db6db6db7)) goto LAB_0013ca48;
                    /* try { // try from 0013c760 to 0013c767 has its CatchHandler @ 0013cb0c */
      local_f8 = (undefined1 *)operator_new((ulong)puVar11);
      puVar2 = local_f8 + (long)puVar11;
      local_e8 = puVar2;
      memcpy(local_f8,pvVar6,(size_t)(puVar11 + -3));
      local_f0 = puVar2;
    }
    pvVar6 = *(void **)(this + 0x1b8);
    local_e0 = (undefined1 *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    puVar11 = (undefined1 *)(*(long *)(this + 0x1c0) - (long)pvVar6);
    if (puVar11 != (undefined1 *)0x0) {
      if (0x924924924924924 < (ulong)(((long)puVar11 >> 2) * 0x6db6db6db6db6db7)) goto LAB_0013ca5c;
                    /* try { // try from 0013c7a8 to 0013c7af has its CatchHandler @ 0013cafc */
      local_e0 = (undefined1 *)operator_new((ulong)puVar11);
      puVar2 = local_e0 + (long)puVar11;
      local_d0 = puVar2;
      memcpy(local_e0,pvVar6,(size_t)(puVar11 + -3));
      local_d8 = puVar2;
    }
    pvVar6 = *(void **)(this + 0x1d0);
    local_c8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    puVar11 = (undefined1 *)(*(long *)(this + 0x1d8) - (long)pvVar6);
    if (puVar11 != (undefined1 *)0x0) {
      if (0x924924924924924 < (ulong)(((long)puVar11 >> 2) * 0x6db6db6db6db6db7)) goto LAB_0013ca70;
                    /* try { // try from 0013c7f0 to 0013c7f7 has its CatchHandler @ 0013cab0 */
      local_c8 = (undefined1 *)operator_new((ulong)puVar11);
      puVar2 = local_c8 + (long)puVar11;
      local_b8 = puVar2;
      memcpy(local_c8,pvVar6,(size_t)(puVar11 + -3));
      local_c0 = puVar2;
    }
    uStack_a8 = *(undefined8 *)(this + 0x1f0);
    local_b0 = *(undefined8 *)(this + 0x1e8);
    uStack_98 = *(undefined8 *)(this + 0x200);
    uStack_a0 = *(undefined8 *)(this + 0x1f8);
    local_90[0] = 0;
    local_8c[1] = 0;
    local_8c[0] = 0;
    local_78 = 0;
    local_70 = (long *)0x0;
                    /* try { // try from 0013c840 to 0013c84b has its CatchHandler @ 0013ca98 */
    FUN_0013cdc0(local_90,this + 0x208);
    uVar3 = uStack_125 & 0xfff8 | 1;
    puVar8 = local_8c;
    if ((uStack_125 >> 3 & 1) == 0) {
      uStack_125 = 1;
    }
    else {
      if (uVar3 < 0x40) {
        puVar9 = (undefined4 *)((long)puVar8 + (ulong)(uStack_125 >> 4) * 4);
      }
      else {
        uVar10 = (ulong)(uStack_125 >> 4) - 4;
        uStack_125 = uVar3;
        if ((ulong)(local_70[1] - *local_70 >> 2) <= uVar10) goto LAB_0013ca84;
        puVar9 = (undefined4 *)(*local_70 + uVar10 * 4);
      }
      *puVar9 = 0;
      uStack_125 = uVar3;
    }
    uVar3 = uStack_123 & 0xfff8 | 1;
    if ((uStack_123 >> 3 & 1) == 0) {
      uStack_123 = 1;
    }
    else {
      uVar10 = (ulong)(uStack_123 >> 4);
      uStack_123 = uVar3;
      if (0x3f < uVar3) {
        uVar10 = uVar10 - 4;
        puVar8 = (undefined8 *)*local_70;
        puVar12 = &local_180;
        if ((ulong)(local_70[1] - (long)puVar8 >> 2) <= uVar10) goto LAB_0013ca84;
      }
      *(undefined4 *)((long)puVar8 + uVar10 * 4) = 0;
    }
    *(undefined8 *)(this + 0x120) = uStack_178;
    *(undefined8 *)(this + 0x118) = local_180;
    *(undefined8 *)(this + 0x130) = uStack_168;
    *(undefined8 *)(this + 0x128) = uStack_170;
    *(undefined8 *)(this + 0x140) = uStack_158;
    *(undefined8 *)(this + 0x138) = local_160;
    *(undefined8 *)(this + 0x150) = uStack_148;
    *(undefined8 *)(this + 0x148) = uStack_150;
    *(undefined8 *)(this + 0x160) = uStack_138;
    *(undefined8 *)(this + 0x158) = local_140;
    *(ulong *)(this + 0x170) =
         CONCAT17(uStack_121,
                  CONCAT25(uStack_123,CONCAT23(uStack_125,CONCAT21(local_127,uStack_128))));
    *(undefined8 *)(this + 0x168) = uStack_130;
    *(undefined8 *)(this + 0x179) = uStack_11f;
    *(ulong *)(this + 0x171) =
         CONCAT17(uStack_120,
                  CONCAT16(uStack_121,CONCAT24(uStack_123,CONCAT22(uStack_125,local_127))));
    if (this + 0x118 != (RNSVGLayoutableShadowNode *)&local_180) {
                    /* try { // try from 0013c930 to 0013c993 has its CatchHandler @ 0013cb38 */
      FUN_0013d09c(this + 0x188,local_110,local_108,
                   ((long)local_108 - (long)local_110 >> 2) * 0x6db6db6db6db6db7);
      FUN_0013d09c(this + 0x1a0,local_f8,local_f0,
                   ((long)local_f0 - (long)local_f8 >> 2) * 0x6db6db6db6db6db7);
      FUN_0013d09c(this + 0x1b8,local_e0,local_d8,
                   ((long)local_d8 - (long)local_e0 >> 2) * 0x6db6db6db6db6db7);
      FUN_0013d09c(this + 0x1d0,local_c8,local_c0,
                   ((long)local_c0 - (long)local_c8 >> 2) * 0x6db6db6db6db6db7);
    }
    *(undefined8 *)(this + 0x1f0) = uStack_a8;
    *(undefined8 *)(this + 0x1e8) = local_b0;
    *(undefined8 *)(this + 0x200) = uStack_98;
    *(undefined8 *)(this + 0x1f8) = uStack_a0;
    FUN_0013cdc0(this + 0x208,local_90);
    plVar5 = local_70;
    local_70 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      if ((void *)plVar5[3] != (void *)0x0) {
        operator_delete((void *)plVar5[3]);
      }
      pvVar6 = (void *)*plVar5;
      if (pvVar6 != (void *)0x0) {
        plVar5[1] = (long)pvVar6;
        operator_delete(pvVar6);
      }
      operator_delete(plVar5);
    }
    if (local_c8 != (undefined1 *)0x0) {
      local_c0 = local_c8;
      operator_delete(local_c8);
    }
    if (local_e0 != (undefined1 *)0x0) {
      local_d8 = local_e0;
      operator_delete(local_e0);
    }
    if (local_f8 != (undefined1 *)0x0) {
      local_f0 = local_f8;
      operator_delete(local_f8);
    }
    if (local_110 != (void *)0x0) {
      local_108 = local_110;
      operator_delete(local_110);
    }
    if (*(long *)(lVar4 + 0x28) == local_68) {
      return;
    }
  }
  else {
    if ((ulong)(((long)puVar11 >> 2) * 0x6db6db6db6db6db7) < 0x924924924924925) {
                    /* try { // try from 0013c718 to 0013c71f has its CatchHandler @ 0013cb1c */
      local_110 = operator_new((ulong)puVar11);
      pvVar1 = (void *)((long)local_110 + (long)puVar11);
      local_100 = pvVar1;
      memcpy(local_110,pvVar6,(long)puVar11 - 3);
      local_108 = pvVar1;
      goto LAB_0013c73c;
    }
    if (*(long *)(lVar4 + 0x28) != local_68) goto LAB_0013cb5c;
                    /* try { // try from 0013ca44 to 0013ca47 has its CatchHandler @ 0013cb1c */
    FUN_0013cdac();
LAB_0013ca48:
    if (*(long *)(lVar4 + 0x28) != local_68) goto LAB_0013cb5c;
                    /* try { // try from 0013ca58 to 0013ca5b has its CatchHandler @ 0013cb0c */
    FUN_0013cdac();
LAB_0013ca5c:
    if (*(long *)(lVar4 + 0x28) != local_68) goto LAB_0013cb5c;
                    /* try { // try from 0013ca6c to 0013ca6f has its CatchHandler @ 0013cafc */
    FUN_0013cdac();
LAB_0013ca70:
    puVar12 = (undefined8 *)puVar11;
    if (*(long *)(lVar4 + 0x28) != local_68) goto LAB_0013cb5c;
                    /* try { // try from 0013ca80 to 0013ca83 has its CatchHandler @ 0013cab0 */
    FUN_0013cdac();
LAB_0013ca84:
    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 0013ca94 to 0013ca97 has its CatchHandler @ 0013cb38 */
      uVar7 = FUN_0013d008();
                    /* catch() { ... } // from try @ 0013c840 with catch @ 0013ca98 */
      FUN_0013cf90((undefined1 *)((long)puVar12 + 0x110));
      if (local_c8 != (undefined1 *)0x0) {
        local_c0 = local_c8;
        operator_delete(local_c8);
      }
      if (local_e0 != (undefined1 *)0x0) {
        local_d8 = local_e0;
        operator_delete(local_e0);
      }
      if (local_f8 != (undefined1 *)0x0) {
        local_f0 = local_f8;
        operator_delete(local_f8);
      }
      if (local_110 != (void *)0x0) {
        local_108 = local_110;
        operator_delete(local_110);
      }
      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_001368d4(uVar7);
      }
    }
  }
LAB_0013cb5c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013cb60  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode =====

/* facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode(facebook::react::ShadowNode
   const&, facebook::react::ShadowNodeFragment const&) */

void __thiscall
facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode
          (RNSVGLayoutableShadowNode *this,ShadowNode *param_1,ShadowNodeFragment *param_2)

{
  int iVar1;
  char *__s1;
  
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)this,param_1,param_2);
  *(undefined **)this = PTR_vtable_001a2bc0 + 0x10;
                    /* try { // try from 0013cb84 to 0013cba3 has its CatchHandler @ 0013cbb0 */
  __s1 = (char *)facebook::react::ShadowNode::getComponentName();
  iVar1 = strcmp(__s1,"RNSVGGroup");
  if (iVar1 != 0) {
    setZeroDimensions(this);
  }
  return;
}


// ===== 0013cbc4  facebook::react::RNSVGLayoutableShadowNode::layout =====

/* facebook::react::RNSVGLayoutableShadowNode::layout(facebook::react::LayoutContext) */

void __thiscall
facebook::react::RNSVGLayoutableShadowNode::layout
          (RNSVGLayoutableShadowNode *this,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = param_2[1];
  param_2[1] = 0;
  local_40 = param_2[4];
  uStack_58 = param_2[1];
  local_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  facebook::react::YogaLayoutableShadowNode::layout(this,&local_60);
  param_2[1] = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013cc34  FUN_0013cc34 =====

void FUN_0013cc34(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_001a2bb0 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00136770(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
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
  FUN_0013b73c(param_1 + 0x23);
  FUN_0013b640(param_1);
  return;
}


// ===== 0013ccec  FUN_0013ccec =====

void FUN_0013ccec(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_001a2bb0 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00136770(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
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
  FUN_0013b73c(param_1 + 0x23);
  FUN_0013b640(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0013cdac  FUN_0013cdac =====

void FUN_0013cdac(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0013b2b8("vector");
}


// ===== 0013cdc0  FUN_0013cdc0 =====

undefined2 * FUN_0013cdc0(undefined2 *param_1,undefined2 *param_2)

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
                    /* try { // try from 0013cf5c to 0013cf5f has its CatchHandler @ 0013cf68 */
        FUN_0013cfe0();
        goto LAB_0013cf60;
      }
                    /* try { // try from 0013ce1c to 0013ce23 has its CatchHandler @ 0013cf68 */
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
LAB_0013cf60:
                    /* try { // try from 0013cf60 to 0013cf63 has its CatchHandler @ 0013cf64 */
        uVar6 = FUN_0013cff4();
                    /* catch() { ... } // from try @ 0013ce64 with catch @ 0013cf64
                       catch() { ... } // from try @ 0013cf60 with catch @ 0013cf64 */
                    /* catch() { ... } // from try @ 0013ce1c with catch @ 0013cf68
                       catch() { ... } // from try @ 0013cf5c with catch @ 0013cf68 */
        pvVar5 = (void *)*puVar3;
        if (pvVar5 != (void *)0x0) {
          puVar3[1] = pvVar5;
          operator_delete(pvVar5);
        }
        operator_delete(puVar3);
                    /* WARNING: Subroutine does not return */
        FUN_001368d4(uVar6);
      }
      uVar13 = uVar12 - 1 >> 6;
      lVar1 = uVar13 + 1;
                    /* try { // try from 0013ce64 to 0013ce67 has its CatchHandler @ 0013cf64 */
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


// ===== 0013cf90  FUN_0013cf90 =====

void FUN_0013cf90(undefined8 *param_1)

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


// ===== 0013cfe0  FUN_0013cfe0 =====

void FUN_0013cfe0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0013b2b8("vector");
}


// ===== 0013cff4  FUN_0013cff4 =====

void FUN_0013cff4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0013b2b8("vector");
}


// ===== 0013d008  FUN_0013d008 =====

void FUN_0013d008(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0013d01c("vector");
}


// ===== 0013d01c  FUN_0013d01c =====

void FUN_0013d01c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 0013d038 to 0013d03f has its CatchHandler @ 0013d058 */
  FUN_0013d06c(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_typeinfo_001a2bd0,PTR__out_of_range_001a2bc8);
}


// ===== 0013d06c  FUN_0013d06c =====

void FUN_0013d06c(logic_error *param_1,char *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  *(undefined **)param_1 = PTR_vtable_001a2bd8 + 0x10;
  return;
}


// ===== 0013d09c  FUN_0013d09c =====

void FUN_0013d09c(undefined8 *param_1,void *param_2,long param_3,void *param_4)

{
  JavaTurboModule *this;
  long lVar1;
  long lVar2;
  void *pvVar3;
  JavaTurboModule *pJVar4;
  void *__dest;
  undefined1 auVar5 [16];
  byte bStack_98;
  undefined4 uStack_97;
  char cStack_93;
  char cStack_92;
  char cStack_91;
  char cStack_90;
  undefined4 uStack_8f;
  char cStack_8b;
  char cStack_8a;
  char cStack_89;
  char cStack_88;
  undefined1 uStack_87;
  undefined6 uStack_86;
  byte *pbStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  void *pvStack_60;
  long lStack_50;
  undefined8 *puStack_48;
  
  lVar2 = param_1[2];
  __dest = (void *)*param_1;
  if (param_4 <= (void *)((lVar2 - (long)__dest >> 2) * 0x6db6db6db6db6db7)) {
    lVar2 = (long)param_1[1] - (long)__dest;
    if ((void *)((lVar2 >> 2) * 0x6db6db6db6db6db7) < param_4) {
      pvVar3 = (void *)((long)param_2 + lVar2);
      if ((void *)param_1[1] != __dest) {
        memmove(__dest,param_2,lVar2 - 3);
        __dest = (void *)param_1[1];
      }
      lVar2 = -(long)pvVar3;
    }
    else {
      lVar2 = -(long)param_2;
      pvVar3 = param_2;
    }
    param_3 = param_3 + lVar2;
    if (param_3 != 0) {
      memmove(__dest,pvVar3,param_3 - 3);
    }
LAB_0013d1f4:
    param_1[1] = (long)__dest + param_3;
    return;
  }
  if (__dest != (void *)0x0) {
    param_1[1] = __dest;
    operator_delete(__dest);
    lVar2 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    __dest = param_4;
  }
  if (param_4 < (void *)0x924924924924925) {
    pvVar3 = (void *)((lVar2 >> 2) * -0x2492492492492492);
    if (pvVar3 < param_4 || (long)pvVar3 - (long)param_4 == 0) {
      pvVar3 = param_4;
    }
    if (0x492492492492491 < (ulong)((lVar2 >> 2) * 0x6db6db6db6db6db7)) {
      pvVar3 = (void *)0x924924924924924;
    }
    if (pvVar3 < (void *)0x924924924924925) {
      __dest = operator_new((long)pvVar3 * 0x1c);
      param_3 = param_3 - (long)param_2;
      *param_1 = __dest;
      param_1[1] = __dest;
      param_1[2] = (void *)((long)__dest + (long)pvVar3 * 0x1c);
      if (param_3 != 0) {
        memcpy(__dest,param_2,param_3 - 3);
      }
      goto LAB_0013d1f4;
    }
  }
  auVar5 = FUN_0013cdac();
  this = auVar5._0_8_;
  pcStack_68 = facebook::react::NativeSvgRenderableModuleSpecJSI::NativeSvgRenderableModuleSpecJSI;
  lVar2 = tpidr_el0;
  lStack_78 = *(long *)(lVar2 + 0x28);
  puStack_70 = &stack0xffffffffffffffc0;
  pvStack_60 = __dest;
  lStack_50 = param_3;
  puStack_48 = param_1;
  facebook::react::JavaTurboModule::JavaTurboModule(this,auVar5._8_8_);
  pJVar4 = this + 0x30;
  *(undefined ***)this = &PTR__JavaTurboModule_0019e7a8;
  cStack_8a = 0;
  bStack_98 = 0x1a;
  uStack_97 = (undefined4)s_isPointInFill_0011faf9._0_5_;
  cStack_93 = SUB51(s_isPointInFill_0011faf9._0_5_,4);
  cStack_92 = (char)s_isPointInFill_0011faf9._5_3_;
  cStack_91 = SUB31(s_isPointInFill_0011faf9._5_3_,1);
  cStack_90 = SUB31(s_isPointInFill_0011faf9._5_3_,2);
  uStack_8f = (undefined4)s_isPointInFill_0011faf9._8_5_;
  cStack_8b = SUB51(s_isPointInFill_0011faf9._8_5_,4);
  pbStack_80 = &bStack_98;
  lVar1 = FUN_0013ed94(pJVar4,&bStack_98,&pbStack_80);
  *(undefined8 *)(lVar1 + 0x28) = 2;
  *(code **)(lVar1 + 0x30) = FUN_0013d59c;
  if ((bStack_98 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_86,CONCAT11(uStack_87,cStack_88)));
  }
  bStack_98 = 0x1e;
  pbStack_80 = &bStack_98;
  cStack_88 = 0;
  uStack_97 = (undefined4)s_isPointInStroke_0011f8ac._0_7_;
  cStack_93 = SUB71(s_isPointInStroke_0011f8ac._0_7_,4);
  cStack_92 = SUB71(s_isPointInStroke_0011f8ac._0_7_,5);
  cStack_91 = SUB71(s_isPointInStroke_0011f8ac._0_7_,6);
  cStack_90 = s_isPointInStroke_0011f8ac[7];
  uStack_8f = (undefined4)s_isPointInStroke_0011f8ac._8_7_;
  cStack_8b = SUB71(s_isPointInStroke_0011f8ac._8_7_,4);
  cStack_8a = SUB71(s_isPointInStroke_0011f8ac._8_7_,5);
  cStack_89 = SUB71(s_isPointInStroke_0011f8ac._8_7_,6);
  lVar1 = FUN_0013ed94(pJVar4,&bStack_98,&pbStack_80);
  *(undefined8 *)(lVar1 + 0x28) = 2;
  *(code **)(lVar1 + 0x30) = FUN_0013d6f0;
  if ((bStack_98 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_86,CONCAT11(uStack_87,cStack_88)));
  }
  bStack_98 = 0x1c;
  pbStack_80 = &bStack_98;
  cStack_89 = 0;
  uStack_97 = (undefined4)s_getTotalLength_0011f2a9._0_6_;
  cStack_93 = SUB61(s_getTotalLength_0011f2a9._0_6_,4);
  cStack_92 = SUB61(s_getTotalLength_0011f2a9._0_6_,5);
  cStack_91 = (char)s_getTotalLength_0011f2a9._6_2_;
  cStack_90 = SUB21(s_getTotalLength_0011f2a9._6_2_,1);
  uStack_8f = (undefined4)s_getTotalLength_0011f2a9._8_6_;
  cStack_8b = SUB61(s_getTotalLength_0011f2a9._8_6_,4);
  cStack_8a = SUB61(s_getTotalLength_0011f2a9._8_6_,5);
  lVar1 = FUN_0013ed94(pJVar4,&bStack_98,&pbStack_80);
  *(undefined8 *)(lVar1 + 0x28) = 1;
  *(code **)(lVar1 + 0x30) = FUN_0013d844;
  if ((bStack_98 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_86,CONCAT11(uStack_87,cStack_88)));
  }
  pbStack_80 = &bStack_98;
  uStack_87 = 0;
  bStack_98 = 0x20;
  uStack_8f = (undefined4)s_getPointAtLength_0011ffce._8_8_;
  cStack_8b = SUB81(s_getPointAtLength_0011ffce._8_8_,4);
  cStack_8a = SUB81(s_getPointAtLength_0011ffce._8_8_,5);
  cStack_89 = SUB81(s_getPointAtLength_0011ffce._8_8_,6);
  cStack_88 = SUB81(s_getPointAtLength_0011ffce._8_8_,7);
  uStack_97 = (undefined4)s_getPointAtLength_0011ffce._0_8_;
  cStack_93 = SUB81(s_getPointAtLength_0011ffce._0_8_,4);
  cStack_92 = SUB81(s_getPointAtLength_0011ffce._0_8_,5);
  cStack_91 = SUB81(s_getPointAtLength_0011ffce._0_8_,6);
  cStack_90 = SUB81(s_getPointAtLength_0011ffce._0_8_,7);
  lVar1 = FUN_0013ed94(pJVar4,&bStack_98,&pbStack_80);
  *(undefined8 *)(lVar1 + 0x28) = 2;
  *(code **)(lVar1 + 0x30) = FUN_0013d954;
  if ((bStack_98 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_86,CONCAT11(uStack_87,cStack_88)));
  }
  cStack_90 = 0;
  bStack_98 = 0xe;
  uStack_97 = 0x42746567;
  cStack_93 = 0x42;
  cStack_92 = 0x6f;
  cStack_91 = 0x78;
  pbStack_80 = &bStack_98;
  lVar1 = FUN_0013ed94(pJVar4,&bStack_98,&pbStack_80);
  *(undefined8 *)(lVar1 + 0x28) = 2;
  *(code **)(lVar1 + 0x30) = FUN_0013daa8;
  if ((bStack_98 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_86,CONCAT11(uStack_87,cStack_88)));
  }
  cStack_91 = 0;
  bStack_98 = 0xc;
  cStack_93 = 0x54;
  cStack_92 = 0x4d;
  pbStack_80 = &bStack_98;
  uStack_97 = 0x43746567;
  lVar1 = FUN_0013ed94(pJVar4,&bStack_98,&pbStack_80);
  *(undefined8 *)(lVar1 + 0x28) = 1;
  *(code **)(lVar1 + 0x30) = FUN_0013dc04;
  if ((bStack_98 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_86,CONCAT11(uStack_87,cStack_88)));
  }
  bStack_98 = 0x18;
  pbStack_80 = &bStack_98;
  cStack_8b = 0;
  uStack_8f = 0x4d54436e;
  uStack_97 = (undefined4)s_getScreenCTM_0011fd14._0_8_;
  cStack_93 = SUB81(s_getScreenCTM_0011fd14._0_8_,4);
  cStack_92 = SUB81(s_getScreenCTM_0011fd14._0_8_,5);
  cStack_91 = SUB81(s_getScreenCTM_0011fd14._0_8_,6);
  cStack_90 = SUB81(s_getScreenCTM_0011fd14._0_8_,7);
  lVar1 = FUN_0013ed94(pJVar4,&bStack_98,&pbStack_80);
  *(undefined8 *)(lVar1 + 0x28) = 1;
  *(code **)(lVar1 + 0x30) = FUN_0013dd54;
  if ((bStack_98 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_86,CONCAT11(uStack_87,cStack_88)));
  }
  bStack_98 = 0x1c;
  pbStack_80 = &bStack_98;
  cStack_89 = 0;
  uStack_97 = (undefined4)s_getRawResource_0011fb07._0_6_;
  cStack_93 = SUB61(s_getRawResource_0011fb07._0_6_,4);
  cStack_92 = SUB61(s_getRawResource_0011fb07._0_6_,5);
  cStack_91 = (char)s_getRawResource_0011fb07._6_2_;
  cStack_90 = SUB21(s_getRawResource_0011fb07._6_2_,1);
  uStack_8f = (undefined4)s_getRawResource_0011fb07._8_6_;
  cStack_8b = SUB61(s_getRawResource_0011fb07._8_6_,4);
  cStack_8a = SUB61(s_getRawResource_0011fb07._8_6_,5);
  lVar1 = FUN_0013ed94(pJVar4,&bStack_98,&pbStack_80);
  *(undefined8 *)(lVar1 + 0x28) = 1;
  *(code **)(lVar1 + 0x30) = FUN_0013deac;
  if ((bStack_98 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_86,CONCAT11(uStack_87,cStack_88)));
  }
  if (*(long *)(lVar2 + 0x28) == lStack_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013d214  facebook::react::NativeSvgRenderableModuleSpecJSI::NativeSvgRenderableModuleSpecJSI =====

/* facebook::react::NativeSvgRenderableModuleSpecJSI::NativeSvgRenderableModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeSvgRenderableModuleSpecJSI::NativeSvgRenderableModuleSpecJSI
          (NativeSvgRenderableModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  long lVar2;
  NativeSvgRenderableModuleSpecJSI *pNVar3;
  byte local_58;
  undefined4 local_57;
  char cStack_53;
  char cStack_52;
  char cStack_51;
  char cStack_50;
  undefined4 uStack_4f;
  char cStack_4b;
  char cStack_4a;
  char cStack_49;
  char cStack_48;
  undefined1 uStack_47;
  undefined6 uStack_46;
  byte *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  pNVar3 = this + 0x30;
  *(undefined ***)this = &PTR__JavaTurboModule_0019e7a8;
  cStack_4a = 0;
  local_58 = 0x1a;
  local_57 = (undefined4)s_isPointInFill_0011faf9._0_5_;
  cStack_53 = SUB51(s_isPointInFill_0011faf9._0_5_,4);
  cStack_52 = (char)s_isPointInFill_0011faf9._5_3_;
  cStack_51 = SUB31(s_isPointInFill_0011faf9._5_3_,1);
  cStack_50 = SUB31(s_isPointInFill_0011faf9._5_3_,2);
  uStack_4f = (undefined4)s_isPointInFill_0011faf9._8_5_;
  cStack_4b = SUB51(s_isPointInFill_0011faf9._8_5_,4);
  local_40 = &local_58;
                    /* try { // try from 0013d278 to 0013d287 has its CatchHandler @ 0013d564 */
  lVar2 = FUN_0013ed94(pNVar3,&local_58,&local_40);
  *(undefined8 *)(lVar2 + 0x28) = 2;
  *(code **)(lVar2 + 0x30) = FUN_0013d59c;
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_46,CONCAT11(uStack_47,cStack_48)));
  }
  local_58 = 0x1e;
  local_40 = &local_58;
  cStack_48 = 0;
  local_57 = (undefined4)s_isPointInStroke_0011f8ac._0_7_;
  cStack_53 = SUB71(s_isPointInStroke_0011f8ac._0_7_,4);
  cStack_52 = SUB71(s_isPointInStroke_0011f8ac._0_7_,5);
  cStack_51 = SUB71(s_isPointInStroke_0011f8ac._0_7_,6);
  cStack_50 = s_isPointInStroke_0011f8ac[7];
  uStack_4f = (undefined4)s_isPointInStroke_0011f8ac._8_7_;
  cStack_4b = SUB71(s_isPointInStroke_0011f8ac._8_7_,4);
  cStack_4a = SUB71(s_isPointInStroke_0011f8ac._8_7_,5);
  cStack_49 = SUB71(s_isPointInStroke_0011f8ac._8_7_,6);
                    /* try { // try from 0013d2d4 to 0013d2e3 has its CatchHandler @ 0013d560 */
  lVar2 = FUN_0013ed94(pNVar3,&local_58,&local_40);
  *(undefined8 *)(lVar2 + 0x28) = 2;
  *(code **)(lVar2 + 0x30) = FUN_0013d6f0;
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_46,CONCAT11(uStack_47,cStack_48)));
  }
  local_58 = 0x1c;
  local_40 = &local_58;
  cStack_49 = 0;
  local_57 = (undefined4)s_getTotalLength_0011f2a9._0_6_;
  cStack_53 = SUB61(s_getTotalLength_0011f2a9._0_6_,4);
  cStack_52 = SUB61(s_getTotalLength_0011f2a9._0_6_,5);
  cStack_51 = (char)s_getTotalLength_0011f2a9._6_2_;
  cStack_50 = SUB21(s_getTotalLength_0011f2a9._6_2_,1);
  uStack_4f = (undefined4)s_getTotalLength_0011f2a9._8_6_;
  cStack_4b = SUB61(s_getTotalLength_0011f2a9._8_6_,4);
  cStack_4a = SUB61(s_getTotalLength_0011f2a9._8_6_,5);
                    /* try { // try from 0013d330 to 0013d33f has its CatchHandler @ 0013d55c */
  lVar2 = FUN_0013ed94(pNVar3,&local_58,&local_40);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_0013d844;
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_46,CONCAT11(uStack_47,cStack_48)));
  }
  local_40 = &local_58;
  uStack_47 = 0;
  local_58 = 0x20;
  uStack_4f = (undefined4)s_getPointAtLength_0011ffce._8_8_;
  cStack_4b = SUB81(s_getPointAtLength_0011ffce._8_8_,4);
  cStack_4a = SUB81(s_getPointAtLength_0011ffce._8_8_,5);
  cStack_49 = SUB81(s_getPointAtLength_0011ffce._8_8_,6);
  cStack_48 = SUB81(s_getPointAtLength_0011ffce._8_8_,7);
  local_57 = (undefined4)s_getPointAtLength_0011ffce._0_8_;
  cStack_53 = SUB81(s_getPointAtLength_0011ffce._0_8_,4);
  cStack_52 = SUB81(s_getPointAtLength_0011ffce._0_8_,5);
  cStack_51 = SUB81(s_getPointAtLength_0011ffce._0_8_,6);
  cStack_50 = SUB81(s_getPointAtLength_0011ffce._0_8_,7);
                    /* try { // try from 0013d384 to 0013d393 has its CatchHandler @ 0013d558 */
  lVar2 = FUN_0013ed94(pNVar3,&local_58,&local_40);
  *(undefined8 *)(lVar2 + 0x28) = 2;
  *(code **)(lVar2 + 0x30) = FUN_0013d954;
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_46,CONCAT11(uStack_47,cStack_48)));
  }
  cStack_50 = 0;
  local_58 = 0xe;
  local_57 = 0x42746567;
  cStack_53 = 0x42;
  cStack_52 = 0x6f;
  cStack_51 = 0x78;
  local_40 = &local_58;
                    /* try { // try from 0013d3e0 to 0013d3ef has its CatchHandler @ 0013d554 */
  lVar2 = FUN_0013ed94(pNVar3,&local_58,&local_40);
  *(undefined8 *)(lVar2 + 0x28) = 2;
  *(code **)(lVar2 + 0x30) = FUN_0013daa8;
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_46,CONCAT11(uStack_47,cStack_48)));
  }
  cStack_51 = 0;
  local_58 = 0xc;
  cStack_53 = 0x54;
  cStack_52 = 0x4d;
  local_40 = &local_58;
  local_57 = 0x43746567;
                    /* try { // try from 0013d438 to 0013d447 has its CatchHandler @ 0013d550 */
  lVar2 = FUN_0013ed94(pNVar3,&local_58,&local_40);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_0013dc04;
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_46,CONCAT11(uStack_47,cStack_48)));
  }
  local_58 = 0x18;
  local_40 = &local_58;
  cStack_4b = 0;
  uStack_4f = 0x4d54436e;
  local_57 = (undefined4)s_getScreenCTM_0011fd14._0_8_;
  cStack_53 = SUB81(s_getScreenCTM_0011fd14._0_8_,4);
  cStack_52 = SUB81(s_getScreenCTM_0011fd14._0_8_,5);
  cStack_51 = SUB81(s_getScreenCTM_0011fd14._0_8_,6);
  cStack_50 = SUB81(s_getScreenCTM_0011fd14._0_8_,7);
                    /* try { // try from 0013d498 to 0013d4a7 has its CatchHandler @ 0013d54c */
  lVar2 = FUN_0013ed94(pNVar3,&local_58,&local_40);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_0013dd54;
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_46,CONCAT11(uStack_47,cStack_48)));
  }
  local_58 = 0x1c;
  local_40 = &local_58;
  cStack_49 = 0;
  local_57 = (undefined4)s_getRawResource_0011fb07._0_6_;
  cStack_53 = SUB61(s_getRawResource_0011fb07._0_6_,4);
  cStack_52 = SUB61(s_getRawResource_0011fb07._0_6_,5);
  cStack_51 = (char)s_getRawResource_0011fb07._6_2_;
  cStack_50 = SUB21(s_getRawResource_0011fb07._6_2_,1);
  uStack_4f = (undefined4)s_getRawResource_0011fb07._8_6_;
  cStack_4b = SUB61(s_getRawResource_0011fb07._8_6_,4);
  cStack_4a = SUB61(s_getRawResource_0011fb07._8_6_,5);
                    /* try { // try from 0013d4f4 to 0013d503 has its CatchHandler @ 0013d548 */
  lVar2 = FUN_0013ed94(pNVar3,&local_58,&local_40);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_0013deac;
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_46,CONCAT11(uStack_47,cStack_48)));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013d59c  FUN_0013d59c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013d59c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  char local_5f [5];
  char acStack_5a [3];
  char acStack_57 [5];
  undefined1 local_52;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_52 = 0;
  local_60 = 0x1a;
  local_5f = (char  [5])s_isPointInFill_0011faf9._0_5_;
  acStack_5a = (char  [3])s_isPointInFill_0011faf9._5_3_;
  acStack_57 = (char  [5])s_isPointInFill_0011faf9._8_5_;
                    /* try { // try from 0013d5f8 to 0013d5ff has its CatchHandler @ 0013d6c0 */
  local_70 = (char *)operator_new(0x40);
  uVar4 = s__Ljava_lang_Double_Lcom_facebook_0011f6b3._24_8_;
  uVar3 = s__Ljava_lang_Double_Lcom_facebook_0011f6b3._16_8_;
  uVar2 = s__Ljava_lang_Double_Lcom_facebook_0011f6b3._0_8_;
  uStack_78 = _UNK_00120f28;
  local_80 = _DAT_00120f20;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Double_Lcom_facebook_0011f6b3._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
  uVar5 = s__Ljava_lang_Double_Lcom_facebook_0011f6b3._52_8_;
  uVar4 = s__Ljava_lang_Double_Lcom_facebook_0011f6b3._32_8_;
  uVar2 = CONCAT44(s__Ljava_lang_Double_Lcom_facebook_0011f6b3._44_4_,
                   s__Ljava_lang_Double_Lcom_facebook_0011f6b3._40_4_);
  uVar3 = CONCAT44(s__Ljava_lang_Double_Lcom_facebook_0011f6b3._48_4_,
                   s__Ljava_lang_Double_Lcom_facebook_0011f6b3._44_4_);
  local_70[0x3c] = '\0';
  *(undefined8 *)(local_70 + 0x28) = uVar2;
  *(undefined8 *)(local_70 + 0x20) = uVar4;
  *(undefined8 *)(local_70 + 0x34) = uVar5;
  *(undefined8 *)(local_70 + 0x2c) = uVar3;
                    /* try { // try from 0013d634 to 0013d65f has its CatchHandler @ 0013d6a8 */
  facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,1,&local_60,&local_80,param_4,param_5,&DAT_001a7cb0);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013d6f0  FUN_0013d6f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013d6f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  char local_5f [7];
  char cStack_58;
  char acStack_57 [7];
  undefined1 local_50;
  undefined7 uStack_4f;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = 0;
  local_60 = 0x1e;
  local_5f = (char  [7])s_isPointInStroke_0011f8ac._0_7_;
  cStack_58 = s_isPointInStroke_0011f8ac[7];
  acStack_57 = (char  [7])s_isPointInStroke_0011f8ac._8_7_;
                    /* try { // try from 0013d74c to 0013d753 has its CatchHandler @ 0013d814 */
  local_70 = (char *)operator_new(0x40);
  uVar4 = s__Ljava_lang_Double_Lcom_facebook_0011f6b3._24_8_;
  uVar3 = s__Ljava_lang_Double_Lcom_facebook_0011f6b3._16_8_;
  uVar2 = s__Ljava_lang_Double_Lcom_facebook_0011f6b3._0_8_;
  uStack_78 = _UNK_00120f28;
  local_80 = _DAT_00120f20;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Double_Lcom_facebook_0011f6b3._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
  uVar5 = s__Ljava_lang_Double_Lcom_facebook_0011f6b3._52_8_;
  uVar4 = s__Ljava_lang_Double_Lcom_facebook_0011f6b3._32_8_;
  uVar2 = CONCAT44(s__Ljava_lang_Double_Lcom_facebook_0011f6b3._44_4_,
                   s__Ljava_lang_Double_Lcom_facebook_0011f6b3._40_4_);
  uVar3 = CONCAT44(s__Ljava_lang_Double_Lcom_facebook_0011f6b3._48_4_,
                   s__Ljava_lang_Double_Lcom_facebook_0011f6b3._44_4_);
  local_70[0x3c] = '\0';
  *(undefined8 *)(local_70 + 0x28) = uVar2;
  *(undefined8 *)(local_70 + 0x20) = uVar4;
  *(undefined8 *)(local_70 + 0x34) = uVar5;
  *(undefined8 *)(local_70 + 0x2c) = uVar3;
                    /* try { // try from 0013d788 to 0013d7b3 has its CatchHandler @ 0013d7fc */
  facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,1,&local_60,&local_80,param_4,param_5,&DAT_001a7cb8);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_4f,local_50));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013d844  FUN_0013d844 =====

void FUN_0013d844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  char local_3f [6];
  char acStack_39 [2];
  char acStack_37 [6];
  undefined1 local_31;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x1c;
  local_3f = (char  [6])s_getTotalLength_0011f2a9._0_6_;
  acStack_39 = (char  [2])s_getTotalLength_0011f2a9._6_2_;
  acStack_37 = (char  [6])s_getTotalLength_0011f2a9._8_6_;
  local_58 = 0x2a;
  local_31 = 0;
  acStack_4f = (char  [5])s__Ljava_lang_Double__D_0011f1d1._8_5_;
  local_57 = (char  [8])s__Ljava_lang_Double__D_0011f1d1._0_8_;
  uStack_4a = (undefined2)s__Ljava_lang_Double__D_0011f1d1._13_3_;
  cStack_48 = SUB31(s__Ljava_lang_Double__D_0011f1d1._13_3_,2);
  acStack_47 = (char  [5])s__Ljava_lang_Double__D_0011f1d1._16_5_;
  uStack_42 = 0;
                    /* try { // try from 0013d8b4 to 0013d8d3 has its CatchHandler @ 0013d914 */
  facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,2,&local_40,&local_58,param_3,param_4,&DAT_001a7cc0);
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


// ===== 0013d954  FUN_0013d954 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013d954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  undefined1 uStack_4f;
  undefined6 uStack_4e;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x20;
  uStack_57 = (undefined7)s_getPointAtLength_0011ffce._8_8_;
  cStack_50 = SUB81(s_getPointAtLength_0011ffce._8_8_,7);
  local_5f = (char  [8])s_getPointAtLength_0011ffce._0_8_;
  uStack_4f = 0;
                    /* try { // try from 0013d9a8 to 0013d9af has its CatchHandler @ 0013da78 */
  local_70 = (char *)operator_new(0x70);
  uStack_78 = _UNK_00120f08;
  local_80 = _DAT_00120f00;
  uVar5 = s__Ljava_lang_Double_Lcom_facebook_0011f331._56_8_;
  uVar4 = s__Ljava_lang_Double_Lcom_facebook_0011f331._48_8_;
  uVar3 = s__Ljava_lang_Double_Lcom_facebook_0011f331._40_8_;
  uVar2 = s__Ljava_lang_Double_Lcom_facebook_0011f331._32_8_;
  local_70[0x60] = 'p';
  local_70[0x61] = ';';
  local_70[0x62] = '\0';
  *(undefined8 *)(local_70 + 0x28) = uVar3;
  *(undefined8 *)(local_70 + 0x20) = uVar2;
  *(undefined8 *)(local_70 + 0x38) = uVar5;
  *(undefined8 *)(local_70 + 0x30) = uVar4;
  uVar4 = s__Ljava_lang_Double_Lcom_facebook_0011f331._88_8_;
  uVar3 = s__Ljava_lang_Double_Lcom_facebook_0011f331._80_8_;
  uVar2 = s__Ljava_lang_Double_Lcom_facebook_0011f331._64_8_;
  *(undefined8 *)(local_70 + 0x48) = s__Ljava_lang_Double_Lcom_facebook_0011f331._72_8_;
  *(undefined8 *)(local_70 + 0x40) = uVar2;
  *(undefined8 *)(local_70 + 0x58) = uVar4;
  *(undefined8 *)(local_70 + 0x50) = uVar3;
  uVar4 = s__Ljava_lang_Double_Lcom_facebook_0011f331._24_8_;
  uVar3 = s__Ljava_lang_Double_Lcom_facebook_0011f331._16_8_;
  uVar2 = s__Ljava_lang_Double_Lcom_facebook_0011f331._0_8_;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Double_Lcom_facebook_0011f331._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
                    /* try { // try from 0013d9ec to 0013da17 has its CatchHandler @ 0013da60 */
  facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,4,&local_60,&local_80,param_4,param_5,&DAT_001a7cc8);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_4e,CONCAT11(uStack_4f,cStack_50)));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013daa8  FUN_0013daa8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013daa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60[0] = 0xe;
  local_60[8] = 0;
  local_60[1] = 0x67;
  local_60[2] = 0x65;
  local_60[3] = 0x74;
  local_60[4] = 0x42;
  local_60[5] = 0x42;
  local_60[6] = 0x6f;
  local_60[7] = 0x78;
                    /* try { // try from 0013db04 to 0013db0b has its CatchHandler @ 0013dbd4 */
  local_70 = (char *)operator_new(0x70);
  uStack_78 = _UNK_00120f08;
  local_80 = _DAT_00120f00;
  uVar5 = s__Ljava_lang_Double_Lcom_facebook_0011f331._56_8_;
  uVar4 = s__Ljava_lang_Double_Lcom_facebook_0011f331._48_8_;
  uVar3 = s__Ljava_lang_Double_Lcom_facebook_0011f331._40_8_;
  uVar2 = s__Ljava_lang_Double_Lcom_facebook_0011f331._32_8_;
  local_70[0x60] = 'p';
  local_70[0x61] = ';';
  local_70[0x62] = '\0';
  *(undefined8 *)(local_70 + 0x28) = uVar3;
  *(undefined8 *)(local_70 + 0x20) = uVar2;
  *(undefined8 *)(local_70 + 0x38) = uVar5;
  *(undefined8 *)(local_70 + 0x30) = uVar4;
  uVar4 = s__Ljava_lang_Double_Lcom_facebook_0011f331._88_8_;
  uVar3 = s__Ljava_lang_Double_Lcom_facebook_0011f331._80_8_;
  uVar2 = s__Ljava_lang_Double_Lcom_facebook_0011f331._64_8_;
  *(undefined8 *)(local_70 + 0x48) = s__Ljava_lang_Double_Lcom_facebook_0011f331._72_8_;
  *(undefined8 *)(local_70 + 0x40) = uVar2;
  *(undefined8 *)(local_70 + 0x58) = uVar4;
  *(undefined8 *)(local_70 + 0x50) = uVar3;
  uVar4 = s__Ljava_lang_Double_Lcom_facebook_0011f331._24_8_;
  uVar3 = s__Ljava_lang_Double_Lcom_facebook_0011f331._16_8_;
  uVar2 = s__Ljava_lang_Double_Lcom_facebook_0011f331._0_8_;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Double_Lcom_facebook_0011f331._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
                    /* try { // try from 0013db48 to 0013db73 has its CatchHandler @ 0013dbbc */
  facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,4,local_60,&local_80,param_4,param_5,&DAT_001a7cd0);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013dc04  FUN_0013dc04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013dc04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60[0] = 0xc;
  local_60[7] = 0;
  local_60[1] = 0x67;
  local_60[2] = 0x65;
  local_60[3] = 0x74;
  local_60[4] = 0x43;
  local_60[5] = 0x54;
  local_60[6] = 0x4d;
                    /* try { // try from 0013dc5c to 0013dc63 has its CatchHandler @ 0013dd24 */
  local_70 = (char *)operator_new(0x40);
  uVar4 = s__Ljava_lang_Double__Lcom_faceboo_0011f8bc._24_8_;
  uVar3 = s__Ljava_lang_Double__Lcom_faceboo_0011f8bc._16_8_;
  uVar2 = s__Ljava_lang_Double__Lcom_faceboo_0011f8bc._0_8_;
  uStack_78 = _UNK_00120f48;
  local_80 = _DAT_00120f40;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Double__Lcom_faceboo_0011f8bc._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
  uVar5 = s__Ljava_lang_Double__Lcom_faceboo_0011f8bc._51_8_;
  uVar4 = s__Ljava_lang_Double__Lcom_faceboo_0011f8bc._32_8_;
  uVar2 = CONCAT53(s__Ljava_lang_Double__Lcom_faceboo_0011f8bc._43_5_,
                   s__Ljava_lang_Double__Lcom_faceboo_0011f8bc._40_3_);
  uVar3 = CONCAT35(s__Ljava_lang_Double__Lcom_faceboo_0011f8bc._48_3_,
                   s__Ljava_lang_Double__Lcom_faceboo_0011f8bc._43_5_);
  local_70[0x3b] = '\0';
  *(undefined8 *)(local_70 + 0x28) = uVar2;
  *(undefined8 *)(local_70 + 0x20) = uVar4;
  *(undefined8 *)(local_70 + 0x33) = uVar5;
  *(undefined8 *)(local_70 + 0x2b) = uVar3;
                    /* try { // try from 0013dc98 to 0013dcc3 has its CatchHandler @ 0013dd0c */
  facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,4,local_60,&local_80,param_4,param_5,&DAT_001a7cd8);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013dd54  FUN_0013dd54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013dd54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  undefined4 local_57;
  undefined1 local_53;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x18;
  local_53 = 0;
  local_57 = 0x4d54436e;
  local_5f = (char  [8])s_getScreenCTM_0011fd14._0_8_;
                    /* try { // try from 0013ddb4 to 0013ddbb has its CatchHandler @ 0013de7c */
  local_70 = (char *)operator_new(0x40);
  uVar4 = s__Ljava_lang_Double__Lcom_faceboo_0011f8bc._24_8_;
  uVar3 = s__Ljava_lang_Double__Lcom_faceboo_0011f8bc._16_8_;
  uVar2 = s__Ljava_lang_Double__Lcom_faceboo_0011f8bc._0_8_;
  uStack_78 = _UNK_00120f48;
  local_80 = _DAT_00120f40;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Double__Lcom_faceboo_0011f8bc._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
  uVar5 = s__Ljava_lang_Double__Lcom_faceboo_0011f8bc._51_8_;
  uVar4 = s__Ljava_lang_Double__Lcom_faceboo_0011f8bc._32_8_;
  uVar2 = CONCAT53(s__Ljava_lang_Double__Lcom_faceboo_0011f8bc._43_5_,
                   s__Ljava_lang_Double__Lcom_faceboo_0011f8bc._40_3_);
  uVar3 = CONCAT35(s__Ljava_lang_Double__Lcom_faceboo_0011f8bc._48_3_,
                   s__Ljava_lang_Double__Lcom_faceboo_0011f8bc._43_5_);
  local_70[0x3b] = '\0';
  *(undefined8 *)(local_70 + 0x28) = uVar2;
  *(undefined8 *)(local_70 + 0x20) = uVar4;
  *(undefined8 *)(local_70 + 0x33) = uVar5;
  *(undefined8 *)(local_70 + 0x2b) = uVar3;
                    /* try { // try from 0013ddf0 to 0013de1b has its CatchHandler @ 0013de64 */
  facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,4,&local_60,&local_80,param_4,param_5,&DAT_001a7ce0);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013deac  FUN_0013deac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013deac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [6];
  char acStack_59 [2];
  char acStack_57 [6];
  undefined1 local_51;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_51 = 0;
  local_60 = 0x1c;
  local_5f = (char  [6])s_getRawResource_0011fb07._0_6_;
  acStack_59 = (char  [2])s_getRawResource_0011fb07._6_2_;
  acStack_57 = (char  [6])s_getRawResource_0011fb07._8_6_;
                    /* try { // try from 0013df08 to 0013df0f has its CatchHandler @ 0013dfd0 */
  local_70 = (char *)operator_new(0x40);
  uVar4 = s__Ljava_lang_String_Lcom_facebook_0011ffdf._24_8_;
  uVar3 = s__Ljava_lang_String_Lcom_facebook_0011ffdf._16_8_;
  uVar2 = s__Ljava_lang_String_Lcom_facebook_0011ffdf._0_8_;
  uStack_78 = _UNK_00120f18;
  local_80 = _DAT_00120f10;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_String_Lcom_facebook_0011ffdf._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
  uVar4 = s__Ljava_lang_String_Lcom_facebook_0011ffdf._48_8_;
  uVar3 = s__Ljava_lang_String_Lcom_facebook_0011ffdf._40_8_;
  uVar2 = s__Ljava_lang_String_Lcom_facebook_0011ffdf._32_8_;
  local_70[0x38] = '\0';
  *(undefined8 *)(local_70 + 0x28) = uVar3;
  *(undefined8 *)(local_70 + 0x20) = uVar2;
  *(undefined8 *)(local_70 + 0x30) = uVar4;
                    /* try { // try from 0013df44 to 0013df6f has its CatchHandler @ 0013dfb8 */
  facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,&local_60,&local_80,param_4,param_5,&DAT_001a7ce8);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013e000  facebook::react::NativeSvgViewModuleSpecJSI::NativeSvgViewModuleSpecJSI =====

/* facebook::react::NativeSvgViewModuleSpecJSI::NativeSvgViewModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeSvgViewModuleSpecJSI::NativeSvgViewModuleSpecJSI
          (NativeSvgViewModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  long lVar2;
  byte local_58;
  char local_57 [8];
  undefined2 local_4f;
  void *local_48;
  byte *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  *(undefined ***)this = &PTR__JavaTurboModule_0019e7e8;
  local_58 = 0x12;
  local_57[0] = s_toDataURL_0011ef11[0];
  local_57[1] = s_toDataURL_0011ef11[1];
  local_57[2] = s_toDataURL_0011ef11[2];
  local_57[3] = s_toDataURL_0011ef11[3];
  local_57[4] = s_toDataURL_0011ef11[4];
  local_57[5] = s_toDataURL_0011ef11[5];
  local_57[6] = s_toDataURL_0011ef11[6];
  local_57[7] = s_toDataURL_0011ef11[7];
  local_4f = 0x4c;
  local_40 = &local_58;
                    /* try { // try from 0013e060 to 0013e06b has its CatchHandler @ 0013e0b0 */
  lVar2 = FUN_0013ed94(this + 0x30,&local_58,&local_40);
  *(undefined8 *)(lVar2 + 0x28) = 3;
  *(code **)(lVar2 + 0x30) = FUN_0013e0e8;
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013e0e8  FUN_0013e0e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013e0e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  undefined2 local_57;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x12;
  local_5f = (char  [8])s_toDataURL_0011ef11._0_8_;
  local_57 = 0x4c;
                    /* try { // try from 0013e140 to 0013e147 has its CatchHandler @ 0013e208 */
  local_70 = (char *)operator_new(0x70);
  uVar4 = s__Ljava_lang_Double_Lcom_facebook_0011f8f8._56_8_;
  uVar3 = s__Ljava_lang_Double_Lcom_facebook_0011f8f8._48_8_;
  uVar2 = s__Ljava_lang_Double_Lcom_facebook_0011f8f8._32_8_;
  uStack_78 = _UNK_00120ec8;
  local_80 = _DAT_00120ec0;
  *(undefined8 *)(local_70 + 0x28) = s__Ljava_lang_Double_Lcom_facebook_0011f8f8._40_8_;
  *(undefined8 *)(local_70 + 0x20) = uVar2;
  *(undefined8 *)(local_70 + 0x38) = uVar4;
  *(undefined8 *)(local_70 + 0x30) = uVar3;
  uVar5 = s__Ljava_lang_Double_Lcom_facebook_0011f8f8._88_8_;
  uVar4 = s__Ljava_lang_Double_Lcom_facebook_0011f8f8._80_8_;
  uVar3 = s__Ljava_lang_Double_Lcom_facebook_0011f8f8._72_8_;
  uVar2 = s__Ljava_lang_Double_Lcom_facebook_0011f8f8._64_8_;
  local_70[0x60] = '\0';
  *(undefined8 *)(local_70 + 0x48) = uVar3;
  *(undefined8 *)(local_70 + 0x40) = uVar2;
  *(undefined8 *)(local_70 + 0x58) = uVar5;
  *(undefined8 *)(local_70 + 0x50) = uVar4;
  uVar4 = s__Ljava_lang_Double_Lcom_facebook_0011f8f8._24_8_;
  uVar3 = s__Ljava_lang_Double_Lcom_facebook_0011f8f8._16_8_;
  uVar2 = s__Ljava_lang_Double_Lcom_facebook_0011f8f8._0_8_;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Double_Lcom_facebook_0011f8f8._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
                    /* try { // try from 0013e17c to 0013e1a7 has its CatchHandler @ 0013e1f0 */
  facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,0,&local_60,&local_80,param_4,param_5,&DAT_001a7cf0);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013e238  facebook::react::rnsvg_ModuleProvider =====

/* facebook::react::rnsvg_ModuleProvider(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   facebook::react::JavaTurboModule::InitParams const&) */

void __thiscall
facebook::react::rnsvg_ModuleProvider(react *this,basic_string *param_1,InitParams *param_2)

{
  ulong uVar1;
  react rVar2;
  undefined8 *puVar3;
  undefined8 *in_x8;
  react *prVar4;
  NativeSvgRenderableModuleSpecJSI *this_00;
  
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
    if ((*(long *)prVar4 == 0x6776534756534e52 && *(long *)(prVar4 + 8) == 0x75646f4d77656956) &&
        *(short *)(prVar4 + 0x10) == 0x656c) {
      puVar3 = (undefined8 *)operator_new(0xb8);
      this_00 = (NativeSvgRenderableModuleSpecJSI *)(puVar3 + 3);
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = &PTR_FUN_0019e8a8;
                    /* try { // try from 0013e370 to 0013e37b has its CatchHandler @ 0013e390 */
      NativeSvgViewModuleSpecJSI::NativeSvgViewModuleSpecJSI
                ((NativeSvgViewModuleSpecJSI *)this_00,(InitParams *)param_1);
LAB_0013e37c:
      *in_x8 = this_00;
      in_x8[1] = puVar3;
      return;
    }
  }
  else if (uVar1 == 0x15) {
    prVar4 = *(react **)(this + 0x10);
    if (((byte)rVar2 & 1) == 0) {
      prVar4 = this + 1;
    }
    if ((*(long *)prVar4 == 0x6e65524756534e52 && *(long *)(prVar4 + 8) == 0x4d656c6261726564) &&
        *(long *)(prVar4 + 0xd) == 0x656c75646f4d656c) {
      puVar3 = (undefined8 *)operator_new(0xb8);
      this_00 = (NativeSvgRenderableModuleSpecJSI *)(puVar3 + 3);
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = &PTR_FUN_0019e858;
                    /* try { // try from 0013e2e8 to 0013e2f3 has its CatchHandler @ 0013e394 */
      NativeSvgRenderableModuleSpecJSI::NativeSvgRenderableModuleSpecJSI
                (this_00,(InitParams *)param_1);
      goto LAB_0013e37c;
    }
  }
  *in_x8 = 0;
  in_x8[1] = 0;
  return;
}


// ===== 0013e3b0  FUN_0013e3b0 =====

void FUN_0013e3b0(JavaTurboModule *param_1)

{
  facebook::react::JavaTurboModule::~JavaTurboModule(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0013e3d4  FUN_0013e3d4 =====

void FUN_0013e3d4(Value *param_1,long *param_2,IRuntime *param_3,undefined8 param_4)

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
                    /* try { // try from 0013e42c to 0013e437 has its CatchHandler @ 0013e4fc */
    (**(code **)(*(long *)param_3 + 0x228))(aIStack_70,param_3);
                    /* try { // try from 0013e438 to 0013e447 has its CatchHandler @ 0013e4ec */
    facebook::jsi::Value::asObject(aIStack_70);
                    /* try { // try from 0013e448 to 0013e457 has its CatchHandler @ 0013e4d0 */
    facebook::jsi::Value::Value(aVStack_58,param_3,param_1);
                    /* try { // try from 0013e460 to 0013e473 has its CatchHandler @ 0013e4c0 */
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


// ===== 0013e524  FUN_0013e524 =====

void FUN_0013e524(ulong *param_1,long param_2,long *param_3)

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
                    /* try { // try from 0013e7e8 to 0013e7eb has its CatchHandler @ 0013e7ec */
        uVar5 = FUN_0013f840();
                    /* catch() { ... } // from try @ 0013e57c with catch @ 0013e7ec
                       catch() { ... } // from try @ 0013e7e8 with catch @ 0013e7ec */
                    /* catch() { ... } // from try @ 0013e5d8 with catch @ 0013e810 */
        FUN_0013f7c8(param_1);
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_001368d4(uVar5);
        }
      }
      goto LAB_0013e838;
    }
                    /* try { // try from 0013e57c to 0013e57f has its CatchHandler @ 0013e7ec */
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
                    /* try { // try from 0013e5d8 to 0013e5e3 has its CatchHandler @ 0013e810 */
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
                    /* try { // try from 0013e7b8 to 0013e7d3 has its CatchHandler @ 0013e7f4 */
          FUN_0013f840();
LAB_0013e7bc:
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_0013ed60();
          }
        }
        goto LAB_0013e838;
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
        if (uVar8 >> 0x3d != 0) goto LAB_0013e7bc;
                    /* try { // try from 0013e634 to 0013e637 has its CatchHandler @ 0013e7f0 */
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
LAB_0013e6f4:
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
          if (uVar12 != uVar6) goto LAB_0013e6f4;
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
LAB_0013e838:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013e83c  FUN_0013e83c =====

void FUN_0013e83c(undefined4 *param_1,long param_2,long *param_3,undefined8 param_4)

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
                    /* try { // try from 0013e8b4 to 0013e8bb has its CatchHandler @ 0013ed38 */
  uVar7 = FUN_0013f2f0(&local_a0,pcVar13,sVar1);
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
LAB_0013ea04:
                lStack_b8 = plVar9[6];
                local_c0 = plVar9[5];
                local_b0 = &local_d0;
                local_d0 = &PTR_FUN_0019e8f8;
                local_a0 = &PTR_FUN_0019e8f8;
                    /* try { // try from 0013ea44 to 0013ea57 has its CatchHandler @ 0013eca0 */
                lStack_c8 = param_2;
                local_98 = param_2;
                lStack_90 = local_c0;
                local_88 = lStack_b8;
                local_80 = &local_a0;
                (**(code **)(*param_3 + 0x278))(&local_f0,param_3,param_4,(int)plVar9[5],&local_a0);
                if (local_80 == &local_a0) {
                  lVar11 = 4;
                  pppuVar8 = &local_a0;
LAB_0013ec40:
                  (*(code *)(*pppuVar8)[lVar11])();
                }
                else if (local_80 != (undefined ***)0x0) {
                  lVar11 = 5;
                  pppuVar8 = local_80;
                  goto LAB_0013ec40;
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
                  if (local_b0 == (undefined ***)0x0) goto LAB_0013ebf8;
                  lVar11 = 5;
                  pppuVar8 = local_b0;
                }
                (*(code *)(*pppuVar8)[lVar11])();
                goto LAB_0013ebf8;
              }
              pcVar12 = (char *)((long)plVar9 + 0x11);
              pcVar14 = pcVar13;
              while (*pcVar12 == *pcVar14) {
                uVar10 = uVar10 - 1;
                pcVar12 = pcVar12 + 1;
                pcVar14 = pcVar14 + 1;
                if (uVar10 == 0) goto LAB_0013ea04;
              }
            }
            else {
              iVar6 = memcmp((void *)plVar9[4],pcVar13,plVar9[3]);
              if (iVar6 == 0) goto LAB_0013ea04;
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
                    /* try { // try from 0013ea8c to 0013ea93 has its CatchHandler @ 0013ed34 */
  uVar7 = FUN_0013f2f0(&local_a0,pcVar13,sVar1);
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
LAB_0013ebb8:
                    /* try { // try from 0013ebc4 to 0013ebd3 has its CatchHandler @ 0013ec98 */
                (**(code **)(*(long *)plVar9[5] + 0x10))
                          (&local_a0,(long *)plVar9[5],param_3,param_2 + 0x20);
                *param_1 = 7;
                *(undefined ***)(param_1 + 2) = local_a0;
                goto LAB_0013ebf8;
              }
              pcVar13 = (char *)((long)plVar9 + 0x11);
              pcVar12 = __s2;
              while (*pcVar13 == *pcVar12) {
                uVar10 = uVar10 - 1;
                pcVar13 = pcVar13 + 1;
                pcVar12 = pcVar12 + 1;
                if (uVar10 == 0) goto LAB_0013ebb8;
              }
            }
            else {
              iVar6 = memcmp((void *)plVar9[4],__s2,plVar9[3]);
              if (iVar6 == 0) goto LAB_0013ebb8;
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
LAB_0013ebf8:
  if ((local_e8[0] & 1) != 0) {
    operator_delete(local_d8);
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013ed3c  FUN_0013ed3c =====

void FUN_0013ed3c(JavaTurboModule *param_1)

{
  facebook::react::JavaTurboModule::~JavaTurboModule(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0013ed60  FUN_0013ed60 =====

void FUN_0013ed60(void)

{
  bad_array_new_length *this;
  
  this = (bad_array_new_length *)__cxa_allocate_exception(8);
  std::bad_array_new_length::bad_array_new_length(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_typeinfo_001a2bf8,PTR__bad_array_new_length_001a2bf0);
}


// ===== 0013ed94  FUN_0013ed94 =====

long * FUN_0013ed94(long *param_1,byte *param_2,undefined8 *param_3)

{
  long *plVar1;
  size_t sVar2;
  size_t sVar3;
  byte *pbVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  void *pvVar10;
  void *pvVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  ulong unaff_x26;
  undefined2 uVar23;
  undefined8 uVar24;
  float fVar25;
  long *local_80;
  long *plStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  uVar22 = *(ulong *)(param_2 + 8);
  pbVar4 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar4 = param_2 + 1;
    uVar22 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 0013ede4 to 0013edeb has its CatchHandler @ 0013f29c */
  uVar9 = FUN_0013f2f0(&local_80,pbVar4,uVar22);
  uVar22 = param_1[1];
  if (uVar22 != 0) {
    uVar24 = NEON_cnt(uVar22,1);
    uVar23 = NEON_uaddlv(uVar24,1);
    uVar18 = CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar23) & 0xffffffff;
    if (uVar18 < 2) {
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
    puVar12 = *(undefined8 **)(*param_1 + unaff_x26 * 8);
    if ((puVar12 != (undefined8 *)0x0) && (plVar21 = (long *)*puVar12, plVar21 != (long *)0x0)) {
      pbVar4 = param_2 + 1;
      sVar2 = (ulong)(*param_2 >> 1);
      if ((*param_2 & 1) != 0) {
        pbVar4 = *(byte **)(param_2 + 0x10);
        sVar2 = *(size_t *)(param_2 + 8);
      }
      do {
        uVar13 = plVar21[1];
        if (uVar13 == uVar9) {
          bVar5 = *(byte *)(plVar21 + 2);
          sVar3 = (ulong)(bVar5 >> 1);
          if ((bVar5 & 1) != 0) {
            sVar3 = plVar21[3];
          }
          if (sVar3 == sVar2) {
            if ((bVar5 & 1) == 0) {
              if (bVar5 < 2) goto LAB_0013f1f0;
              uVar13 = 0;
              while (*(byte *)((long)plVar21 + uVar13 + 0x11) == pbVar4[uVar13]) {
                uVar13 = uVar13 + 1;
                if (bVar5 >> 1 == uVar13) goto LAB_0013f1f0;
              }
            }
            else {
              iVar8 = memcmp((void *)plVar21[4],pbVar4,plVar21[3]);
              if (iVar8 == 0) goto LAB_0013f1f0;
            }
          }
        }
        else {
          if (uVar18 < 2) {
            uVar13 = uVar13 & uVar22 - 1;
          }
          else if (uVar22 <= uVar13) {
            uVar16 = 0;
            if (uVar22 != 0) {
              uVar16 = uVar13 / uVar22;
            }
            uVar13 = uVar13 - uVar16 * uVar22;
          }
          if (uVar13 != unaff_x26) break;
        }
        plVar21 = (long *)*plVar21;
      } while (plVar21 != (long *)0x0);
    }
  }
  plVar1 = param_1 + 2;
  plVar21 = (long *)operator_new(0x38);
  plVar14 = (long *)*param_3;
  *plVar21 = 0;
  plVar21[1] = uVar9;
  lVar17 = plVar14[1];
  lVar15 = *plVar14;
  plVar21[4] = plVar14[2];
  plVar21[3] = lVar17;
  plVar21[2] = lVar15;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = 0;
  lVar15 = param_1[3];
  fVar25 = *(float *)(param_1 + 4);
  plVar21[5] = 0;
  plVar21[6] = 0;
  local_70 = 1;
  local_80 = plVar21;
  plStack_78 = plVar1;
  if ((uVar22 == 0) || (fVar25 * (float)uVar22 < (float)(lVar15 + 1))) {
    if (uVar22 < 3) {
      uVar18 = 1;
    }
    else {
      uVar18 = (ulong)((uVar22 & uVar22 - 1) != 0);
    }
    uVar18 = uVar18 | uVar22 << 1;
    uVar22 = (ulong)((float)(lVar15 + 1) / fVar25);
    if (uVar18 <= uVar22) {
      uVar18 = uVar22;
    }
    if (uVar18 - 1 == 0) {
      uVar18 = 2;
    }
    else if ((uVar18 & uVar18 - 1) != 0) {
                    /* try { // try from 0013efc8 to 0013f273 has its CatchHandler @ 0013f274 */
      uVar18 = std::__ndk1::__next_prime(uVar18);
    }
    uVar22 = param_1[1];
    if (uVar22 < uVar18) {
LAB_0013efe0:
      if (uVar18 >> 0x3d != 0) {
        if (*(long *)(lVar7 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_0013ed60();
        }
        goto LAB_0013f298;
      }
      pvVar10 = operator_new(uVar18 << 3);
      pvVar11 = (void *)*param_1;
      *param_1 = (long)pvVar10;
      if (pvVar11 != (void *)0x0) {
        operator_delete(pvVar11);
      }
      uVar22 = 0;
      param_1[1] = uVar18;
      do {
        *(undefined8 *)(*param_1 + uVar22 * 8) = 0;
        uVar22 = uVar22 + 1;
      } while (uVar18 != uVar22);
      plVar14 = (long *)*plVar1;
      uVar22 = uVar18;
      if (plVar14 != (long *)0x0) {
        uVar13 = plVar14[1];
        uVar24 = NEON_cnt(uVar18,1);
        uVar23 = NEON_uaddlv(uVar24,1);
        uVar16 = CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar23) & 0xffffffff;
        if (uVar16 < 2) {
          uVar13 = uVar13 & uVar18 - 1;
        }
        else if (uVar18 <= uVar13) {
          uVar20 = 0;
          if (uVar18 != 0) {
            uVar20 = uVar13 / uVar18;
          }
          uVar13 = uVar13 - uVar20 * uVar18;
        }
        *(long **)(*param_1 + uVar13 * 8) = plVar1;
        plVar19 = (long *)*plVar14;
        if (plVar19 != (long *)0x0) {
          do {
            uVar20 = plVar19[1];
            if (uVar16 < 2) {
              uVar20 = uVar20 & uVar18 - 1;
            }
            else if (uVar18 <= uVar20) {
              uVar6 = 0;
              if (uVar18 != 0) {
                uVar6 = uVar20 / uVar18;
              }
              uVar20 = uVar20 - uVar6 * uVar18;
            }
            if (uVar20 != uVar13) {
              if (*(long *)(*param_1 + uVar20 * 8) == 0) {
                *(long **)(*param_1 + uVar20 * 8) = plVar14;
                uVar13 = uVar20;
              }
              else {
                *plVar14 = *plVar19;
                *plVar19 = **(long **)(*param_1 + uVar20 * 8);
                **(undefined8 **)(*param_1 + uVar20 * 8) = plVar19;
                plVar19 = plVar14;
              }
            }
            plVar14 = plVar19;
            plVar19 = (long *)*plVar14;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    else if (uVar18 < uVar22) {
      uVar13 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar22 < 3) {
LAB_0013f224:
        uVar13 = std::__ndk1::__next_prime(uVar13);
      }
      else {
        uVar24 = NEON_cnt(uVar22,1);
        uVar23 = NEON_uaddlv(uVar24,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar23)) goto LAB_0013f224;
        if (1 < uVar13) {
          uVar13 = 1L << (-LZCOUNT(uVar13 - 1) & 0x3fU);
        }
      }
      if (uVar18 <= uVar13) {
        uVar18 = uVar13;
      }
      if (uVar18 < uVar22) {
        if (uVar18 != 0) goto LAB_0013efe0;
        pvVar10 = (void *)*param_1;
        *param_1 = 0;
        if (pvVar10 != (void *)0x0) {
          operator_delete(pvVar10);
        }
        param_1[1] = 0;
        uVar22 = 0;
      }
      else {
        uVar22 = param_1[1];
      }
    }
    if ((uVar22 & uVar22 - 1) == 0) {
      unaff_x26 = uVar22 - 1 & uVar9;
    }
    else {
      unaff_x26 = uVar9;
      if (uVar22 <= uVar9) {
        uVar18 = 0;
        if (uVar22 != 0) {
          uVar18 = uVar9 / uVar22;
        }
        unaff_x26 = uVar9 - uVar18 * uVar22;
      }
    }
  }
  lVar15 = *param_1;
  plVar14 = *(long **)(lVar15 + unaff_x26 * 8);
  if (plVar14 == (long *)0x0) {
    lVar17 = *plVar1;
    *plVar1 = (long)plVar21;
    *plVar21 = lVar17;
    *(long **)(lVar15 + unaff_x26 * 8) = plVar1;
    if (*plVar21 != 0) {
      uVar9 = *(ulong *)(*plVar21 + 8);
      if ((uVar22 & uVar22 - 1) == 0) {
        uVar9 = uVar9 & uVar22 - 1;
      }
      else if (uVar22 <= uVar9) {
        uVar18 = 0;
        if (uVar22 != 0) {
          uVar18 = uVar9 / uVar22;
        }
        uVar9 = uVar9 - uVar18 * uVar22;
      }
      plVar14 = (long *)(*param_1 + uVar9 * 8);
      goto LAB_0013f1e0;
    }
  }
  else {
    *plVar21 = *plVar14;
LAB_0013f1e0:
    *plVar14 = (long)plVar21;
  }
  param_1[3] = param_1[3] + 1;
LAB_0013f1f0:
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return plVar21;
  }
LAB_0013f298:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013f2a0  FUN_0013f2a0 =====

void FUN_0013f2a0(undefined8 *param_1)

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


// ===== 0013f2f0  FUN_0013f2f0 =====

ulong FUN_0013f2f0(undefined8 param_1,ulong *param_2,ulong param_3)

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


// ===== 0013f728  FUN_0013f728 =====

void FUN_0013f728(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0019e858;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0013f738  FUN_0013f738 =====

void FUN_0013f738(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0019e858;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0013f768  FUN_0013f768 =====

void FUN_0013f768(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0013f770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0013f774  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 0013f778  FUN_0013f778 =====

void FUN_0013f778(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0019e8a8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0013f788  FUN_0013f788 =====

void FUN_0013f788(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0019e8a8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0013f7b8  FUN_0013f7b8 =====

void FUN_0013f7b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0013f7c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0013f7c4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 0013f7c8  FUN_0013f7c8 =====

void FUN_0013f7c8(undefined8 *param_1)

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


// ===== 0013f840  FUN_0013f840 =====

void FUN_0013f840(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0013b2b8("vector");
}


// ===== 0013f854  FUN_0013f854 =====

void FUN_0013f854(void)

{
  return;
}


// ===== 0013f858  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 0013f85c  FUN_0013f85c =====

void FUN_0013f85c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_0019e8f8;
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  puVar1[3] = uVar2;
  return;
}


// ===== 0013f89c  FUN_0013f89c =====

void FUN_0013f89c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_0019e8f8;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}


// ===== 0013f8bc  FUN_0013f8bc =====

void FUN_0013f8bc(void)

{
  return;
}


// ===== 0013f8c0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 0013f8c4  FUN_0013f8c4 =====

void FUN_0013f8c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0013f8dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x18))(param_2,*(undefined8 *)(param_1 + 8),*param_4,*param_5);
  return;
}


// ===== 0013f8e0  FUN_0013f8e0 =====

long FUN_0013f8e0(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_001a2be0) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0013f8fc  FUN_0013f8fc =====

undefined * FUN_0013f8fc(void)

{
  return PTR_typeinfo_001a2be8;
}


// ===== 0013f908  facebook::react::rnsvg_registerComponentDescriptorsFromCodegen =====

/* WARNING: Removing unreachable block (ram,0x0013f95c) */
/* WARNING: Removing unreachable block (ram,0x0013f96c) */
/* WARNING: Removing unreachable block (ram,0x0013f9b4) */
/* WARNING: Removing unreachable block (ram,0x0013f9c4) */
/* facebook::react::rnsvg_registerComponentDescriptorsFromCodegen(std::__ndk1::shared_ptr<facebook::react::ComponentDescriptorProviderRegistry
   const>) */

void facebook::react::rnsvg_registerComponentDescriptorsFromCodegen(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0013f94c to 0013f953 has its CatchHandler @ 0013fa04 */
  facebook::react::ComponentDescriptorProviderRegistry::add((ComponentDescriptorProvider *)*param_1)
  ;
                    /* try { // try from 0013f9a4 to 0013f9ab has its CatchHandler @ 0013fa00 */
  facebook::react::ComponentDescriptorProviderRegistry::add((ComponentDescriptorProvider *)*param_1)
  ;
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0013fa2c  FUN_0013fa2c =====

void FUN_0013fa2c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x18);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0013fa7c  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
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
  undefined4 local_1810 [2];
  undefined8 *local_1808;
  void *local_1800;
  void *pvStack_17f8;
  undefined8 local_17f0;
  void *pvStack_17e8;
  void *local_17e0;
  undefined8 uStack_17d8;
  void *local_17d0;
  void *pvStack_17c8;
  undefined8 uStack_17c0;
  undefined8 uStack_17b8;
  undefined *local_17b0;
  undefined8 uStack_17a8;
  undefined8 local_17a0;
  undefined8 uStack_1798;
  undefined4 local_1790 [2];
  undefined8 local_1788;
  undefined8 uStack_1780;
  undefined8 local_1778;
  undefined8 uStack_1770;
  undefined4 local_1768;
  undefined4 local_1760;
  undefined1 local_175c;
  undefined8 local_175b;
  undefined8 local_1753;
  undefined8 uStack_174b;
  undefined8 local_1743;
  undefined8 uStack_173b;
  undefined8 local_1733;
  undefined8 uStack_172b;
  undefined8 local_1723;
  undefined6 uStack_171b;
  undefined2 uStack_1715;
  undefined6 uStack_1713;
  undefined8 uStack_170d;
  undefined4 local_1705;
  undefined8 local_1701;
  undefined1 local_16f9;
  undefined1 uStack_16f8;
  undefined7 uStack_16f7;
  undefined8 uStack_16f0;
  undefined8 uStack_16e8;
  undefined8 uStack_16e0;
  undefined8 local_16d8;
  undefined8 uStack_16d0;
  undefined8 local_16c8;
  undefined8 uStack_16c0;
  undefined8 local_16b8;
  undefined8 uStack_16b0;
  undefined8 local_16a8;
  undefined8 uStack_16a0;
  undefined8 uStack_1698;
  undefined8 local_1690;
  undefined8 local_1688;
  undefined8 uStack_1680;
  undefined8 local_1678;
  undefined4 uStack_1670;
  undefined4 uStack_166c;
  undefined4 uStack_1668;
  undefined4 uStack_1664;
  undefined4 uStack_1660;
  undefined4 uStack_165c;
  undefined8 local_1658;
  undefined8 uStack_1650;
  undefined4 local_1648;
  undefined1 local_1644;
  undefined4 local_1640;
  undefined1 local_163c;
  undefined4 local_1638;
  undefined1 local_1634;
  undefined4 local_1630;
  undefined1 local_162c;
  undefined4 local_1628;
  undefined1 local_1624;
  undefined4 local_1620;
  undefined1 local_161c;
  undefined4 local_1618;
  undefined1 local_1614;
  undefined4 local_1610;
  undefined1 local_160c;
  undefined4 local_1608;
  undefined1 local_1604;
  undefined4 local_1600;
  undefined1 local_15fc;
  undefined4 local_15f8;
  undefined1 local_15f4;
  undefined4 local_15f0;
  undefined1 local_15ec;
  undefined4 local_15e8;
  undefined1 local_15e4;
  undefined4 local_15e0;
  undefined1 local_15dc;
  undefined4 local_15d8;
  undefined1 local_15d4;
  undefined4 local_15d0;
  undefined1 local_15cc;
  undefined1 local_15c8;
  undefined1 local_15c4;
  undefined1 local_15b8;
  undefined8 local_15b0;
  undefined8 uStack_15a8;
  undefined8 uStack_15a0;
  undefined8 uStack_1598;
  undefined8 local_1590;
  undefined8 uStack_1588;
  undefined8 uStack_1580;
  undefined1 uStack_1578;
  undefined7 local_1577;
  undefined1 uStack_1570;
  undefined8 uStack_156f;
  undefined8 local_1564;
  undefined8 uStack_155c;
  undefined8 uStack_1554;
  undefined8 uStack_154c;
  undefined8 local_1544;
  undefined8 uStack_153c;
  undefined8 uStack_1534;
  undefined8 uStack_152c;
  undefined8 local_1524;
  undefined8 uStack_151c;
  undefined8 uStack_1514;
  undefined5 uStack_150c;
  undefined3 local_1507;
  undefined5 uStack_1504;
  undefined1 local_14fc;
  undefined1 local_14f8;
  undefined1 local_14f4;
  undefined1 local_14f0;
  undefined1 local_14ec;
  undefined1 local_14e8;
  undefined1 local_14d0;
  undefined8 local_14c8;
  undefined8 uStack_14c0;
  undefined8 local_14b8;
  undefined4 local_14b0;
  undefined1 local_14ac;
  undefined4 local_14ab;
  undefined1 local_14a7;
  undefined1 local_14a6;
  undefined8 local_14a0;
  undefined8 uStack_1498;
  undefined8 uStack_1490;
  undefined8 uStack_1488;
  undefined8 local_1480;
  undefined7 uStack_1478;
  undefined4 uStack_1471;
  undefined8 local_146c;
  undefined1 local_1464;
  undefined1 local_145c;
  undefined1 local_1458;
  undefined1 local_1450;
  undefined1 local_144c;
  undefined1 local_1444;
  undefined1 local_1440;
  undefined1 local_1438;
  undefined1 local_1434;
  undefined1 local_142c;
  undefined1 local_1428;
  undefined1 local_1420;
  undefined1 local_141c;
  undefined1 local_1414;
  undefined1 local_1410;
  undefined1 local_1408;
  undefined1 local_1404;
  undefined1 local_13fc;
  undefined1 local_13f8;
  undefined1 local_13f0;
  undefined1 local_13ec;
  undefined1 local_13e4;
  undefined1 local_13e0;
  undefined1 local_13d8;
  undefined1 local_13d4;
  undefined1 local_13cc;
  undefined1 local_13c8;
  undefined1 local_13c4;
  undefined1 local_13c0;
  undefined1 local_13bc;
  undefined1 local_13b8;
  undefined1 local_13b4;
  undefined1 local_13b0;
  undefined1 local_13ac;
  undefined1 local_13a8;
  undefined1 local_13a4;
  undefined1 local_13a0;
  undefined1 local_139c;
  undefined1 local_1398;
  undefined1 local_1394;
  undefined1 local_1390;
  undefined1 local_138c;
  undefined1 local_1388;
  undefined1 local_1384;
  undefined1 local_1380;
  undefined1 local_137c;
  undefined1 local_1378;
  undefined1 local_1374;
  undefined1 local_1370;
  undefined1 local_136c;
  undefined8 local_1368;
  undefined8 uStack_1360;
  undefined8 local_1358;
  undefined8 uStack_1350;
  undefined8 uStack_1348;
  undefined8 uStack_1340;
  undefined2 local_1338;
  undefined8 local_1334;
  undefined1 local_132c;
  undefined8 local_1328;
  undefined8 local_1320;
  undefined8 uStack_1318;
  undefined1 local_1310;
  undefined8 local_1308;
  undefined8 uStack_1300;
  undefined8 uStack_12f8;
  undefined8 uStack_12f0;
  undefined8 local_12e8;
  undefined8 uStack_12e0;
  undefined8 uStack_12d8;
  undefined8 uStack_12d0;
  undefined8 local_12c8;
  undefined8 uStack_12c0;
  undefined8 uStack_12b8;
  undefined8 uStack_12b0;
  undefined8 local_12a8;
  undefined8 uStack_12a0;
  undefined8 uStack_1298;
  undefined8 uStack_1290;
  undefined8 local_1288;
  undefined8 uStack_1280;
  undefined8 uStack_1278;
  undefined8 uStack_1270;
  undefined8 local_1268;
  undefined8 uStack_1260;
  undefined8 local_1258;
  undefined8 uStack_1250;
  undefined8 local_1248;
  undefined8 uStack_1240;
  undefined8 local_1238;
  undefined8 uStack_1230;
  undefined8 local_1228;
  undefined8 uStack_1220;
  undefined8 local_1218;
  undefined6 uStack_1210;
  undefined2 uStack_120a;
  undefined6 uStack_1208;
  undefined1 local_1200;
  undefined1 local_11fc;
  undefined1 local_11f8;
  undefined8 local_11f4;
  undefined8 uStack_11ec;
  undefined1 local_11e4;
  undefined8 local_11e0;
  undefined2 local_11d8;
  undefined1 local_11d6;
  undefined4 local_11d4;
  undefined1 local_11d0;
  undefined1 local_1170;
  undefined1 local_1168;
  undefined1 local_1108;
  undefined4 local_1100;
  undefined2 local_10fc;
  undefined1 local_10f8;
  undefined1 local_10f4;
  undefined1 local_10f0;
  undefined1 local_10ec;
  undefined1 local_10e8;
  undefined1 local_10e4;
  undefined1 local_10e0;
  undefined1 local_10dc;
  undefined1 local_10d8;
  undefined1 local_10d4;
  undefined4 local_10d0;
  undefined8 local_10c8;
  undefined4 local_10a0;
  undefined8 local_1098;
  undefined8 local_1070;
  undefined8 uStack_1068;
  undefined8 local_1060;
  undefined8 uStack_1058;
  undefined8 local_1050;
  undefined8 uStack_1048;
  undefined8 uStack_1040;
  undefined1 uStack_1038;
  undefined7 local_1037;
  undefined1 uStack_1030;
  undefined8 uStack_102f;
  undefined8 local_1024;
  undefined8 uStack_101c;
  undefined8 local_1014;
  undefined1 local_100c;
  undefined8 local_1008;
  undefined1 local_1000;
  undefined8 local_ffc;
  undefined1 local_ff4;
  undefined8 local_ff0;
  undefined8 uStack_fe8;
  undefined5 uStack_fe0;
  undefined3 local_fdb;
  undefined5 uStack_fd8;
  undefined4 local_fd0;
  undefined8 local_fc8;
  undefined8 uStack_fc0;
  undefined5 uStack_fb8;
  undefined3 local_fb3;
  undefined5 uStack_fb0;
  undefined4 local_fa8;
  undefined8 local_fa0;
  undefined8 uStack_f98;
  undefined8 local_f90;
  undefined8 uStack_f88;
  undefined8 local_f80;
  undefined8 uStack_f78;
  undefined1 local_f70;
  undefined4 local_f68;
  undefined8 local_f60;
  undefined8 local_f38;
  undefined8 uStack_f30;
  undefined4 local_f28;
  undefined4 local_f20;
  undefined8 local_f18;
  undefined4 local_ef0;
  undefined8 local_ee8;
  undefined4 local_ec0;
  undefined8 local_eb8;
  undefined4 local_e90;
  undefined8 local_e88;
  undefined4 local_e60;
  undefined8 local_e58;
  undefined4 local_e30;
  undefined8 local_e28;
  undefined4 local_e00;
  undefined8 local_df8;
  undefined4 local_dd0;
  undefined8 local_dc8;
  undefined4 local_da0;
  undefined8 local_d98;
  undefined4 local_d70;
  undefined8 local_d68;
  undefined4 local_d40;
  undefined8 local_d38;
  undefined4 local_d10;
  undefined8 local_d08;
  undefined4 local_ce0;
  undefined8 local_cd8;
  undefined4 local_cb0 [2];
  undefined8 local_ca8;
  undefined8 uStack_ca0;
  undefined8 local_c98;
  undefined8 local_c90;
  undefined8 uStack_c88;
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
  undefined8 uStack_88;
  void *local_80;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_17e8 = (void *)0x0;
  local_17f0 = 0;
  uStack_17d8 = 0;
  local_17e0 = (void *)0x0;
  pvStack_17c8 = (void *)0x0;
  local_17d0 = (void *)0x0;
  uStack_17b8 = 0;
  uStack_17c0 = 0;
  pvStack_17f8 = (void *)0x0;
  local_1800 = (void *)0x0;
                    /* try { // try from 0013fad0 to 0013fadb has its CatchHandler @ 00140214 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_1800);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_0019e988;
  local_f0 = 0;
  local_e8 = 0;
  local_e0[0] = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_a0 = 0;
  pvStack_90 = (void *)0x0;
  local_98 = (void *)0x0;
  local_80 = (void *)0x0;
  uStack_88 = 0;
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
                    /* try { // try from 0013fb48 to 0013fb5b has its CatchHandler @ 00140244 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_1810[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_1808 = &local_1b0;
  facebook::react::RawProps::parse((RawPropsParser *)&local_f8);
  memset(local_1790,0,0xae0);
  local_cb0[0] = 5;
  local_c98 = 0;
  local_17b0 = PTR_construction_vtable_001a2e48 + 0x20;
  local_1790[0] = 5;
  uStack_17a8 = 0;
  uStack_1798 = 0;
  local_17a0 = 0;
  local_c90 = 0;
  uStack_c88 = 0x3f800000;
  uStack_ca0 = 0;
  local_ca8 = 0;
  uStack_1780 = 0;
  local_1788 = 0;
  uStack_1770 = 0;
  local_1778 = 0;
  local_1768 = 0x3f800000;
  folly::dynamic::destroy();
  local_175c = 0;
  local_1701 = 0;
  uStack_1220 = _UNK_00121318;
  local_1228 = _DAT_00121310;
  local_175b = DAT_001206b8;
  uStack_1318 = _UNK_00120ed8;
  local_1320 = _DAT_00120ed0;
  uStack_1230 = _UNK_00121308;
  local_1238 = _DAT_00121300;
  local_1644 = 0;
  uStack_1240 = _UNK_001212f8;
  local_1248 = _DAT_001212f0;
  uStack_1250 = _UNK_001212e8;
  local_1258 = _DAT_001212e0;
  uStack_1208 = 0;
  local_163c = 0;
  uStack_1670 = 0;
  local_1678 = 0;
  uStack_165c = 0;
  uStack_1680 = 0;
  local_1688 = 0;
  uStack_1210 = 0;
  uStack_120a = 0;
  local_1218 = 0;
  local_1760 = 0x10410710;
  local_1705 = 0x40004;
  uStack_1664 = 0;
  uStack_1660 = 0;
  uStack_166c = 0;
  uStack_1668 = 0;
  uStack_1650 = 0;
  local_1658 = 0;
  local_1648 = 0x7fc00000;
  local_1640 = 0x7fc00000;
  local_1638 = 0x7fc00000;
  local_1630 = 0x7fc00000;
  local_1628 = 0x7fc00000;
  local_1620 = 0x7fc00000;
  local_1618 = 0x7fc00000;
  local_1610 = 0x7fc00000;
  local_1608 = 0x7fc00000;
  local_1600 = 0x7fc00000;
  local_15f8 = 0x7fc00000;
  local_15f0 = 0x7fc00000;
  local_15e8 = 0x7fc00000;
  local_15e0 = 0x7fc00000;
  local_15d8 = 0x7fc00000;
  local_15d0 = 0x7fc00000;
  uStack_156f = 0;
  uStack_1570 = 0;
  uStack_155c = 0;
  local_1564 = 0;
  uStack_154c = 0;
  uStack_1554 = 0;
  uStack_153c = 0;
  local_1544 = 0;
  uStack_152c = 0;
  uStack_1534 = 0;
  uStack_151c = 0;
  local_1524 = 0;
  uStack_150c = 0;
  uStack_1514 = 0;
  local_1507 = 0;
  uStack_1504 = 0;
  local_14ac = 1;
  local_14ab = 0;
  local_14a6 = 0x23;
  local_146c = 0x3f800000;
  uStack_1350 = 0;
  local_1358 = 0;
  uStack_1340 = 0;
  uStack_1348 = 0;
  uStack_1360 = 0;
  local_1368 = 0;
  local_1334 = 0;
  uStack_1300 = 0;
  local_1308 = 0;
  uStack_12f0 = 0;
  uStack_12f8 = 0;
  uStack_12e0 = 0;
  local_12e8 = 0;
  uStack_12d0 = 0;
  uStack_12d8 = 0;
  uStack_12c0 = 0;
  local_12c8 = 0;
  uStack_12b0 = 0;
  uStack_12b8 = 0;
  uStack_12a0 = 0;
  local_12a8 = 0;
  uStack_1290 = 0;
  uStack_1298 = 0;
  uStack_1280 = 0;
  local_1288 = 0;
  uStack_1270 = 0;
  uStack_1278 = 0;
  uStack_1260 = 0;
  local_1268 = 0;
  uStack_16f7 = 0;
  uStack_174b = 0;
  local_1753 = 0;
  uStack_173b = 0;
  local_1743 = 0;
  uStack_172b = 0;
  local_1733 = 0;
  uStack_171b = 0;
  local_1723 = 0;
  uStack_170d = 0;
  uStack_1715 = 0;
  uStack_1713 = 0;
  local_16f9 = 0;
  uStack_16f8 = 0;
  uStack_16e8 = 0;
  uStack_16f0 = 0;
  local_16d8 = 0;
  uStack_16e0 = 0;
  local_16c8 = 0;
  uStack_16d0 = 0;
  local_16b8 = 0;
  uStack_16c0 = 0;
  local_16a8 = 0;
  uStack_16b0 = 0;
  uStack_1698 = 0;
  uStack_16a0 = 0;
  local_1690 = 0;
  local_1634 = 0;
  local_162c = 0;
  local_1624 = 0;
  local_161c = 0;
  local_1614 = 0;
  local_160c = 0;
  local_1604 = 0;
  local_15fc = 0;
  local_15f4 = 0;
  local_15ec = 0;
  local_15e4 = 0;
  local_15dc = 0;
  local_15d4 = 0;
  local_15cc = 0;
  local_15c8 = 0;
  local_15c4 = 0;
  local_15b8 = 0;
  local_14fc = 0;
  local_14f8 = 0;
  local_14f4 = 0;
  local_14f0 = 0;
  local_14ec = 0;
  local_14e8 = 0;
  local_14d0 = 0;
  uStack_15a8 = 0;
  local_15b0 = 0;
  uStack_1598 = 0;
  uStack_15a0 = 0;
  uStack_1588 = 0;
  local_1590 = 0;
  uStack_1578 = 0;
  local_1577 = 0;
  uStack_1580 = 0;
  uStack_14c0 = 0;
  local_14c8 = 0;
  local_14b8 = 0;
  local_14b0 = 0;
  local_14a7 = 0;
  uStack_1498 = 0;
  local_14a0 = 0;
  uStack_1488 = 0;
  uStack_1490 = 0;
  uStack_1478 = 0;
  uStack_1471 = 0;
  local_1480 = 0;
  local_1464 = 0;
  local_145c = 0;
  local_1458 = 0;
  local_1450 = 0;
  local_144c = 0;
  local_1444 = 0;
  local_1440 = 0;
  local_1438 = 0;
  local_1434 = 0;
  local_142c = 0;
  local_1428 = 0;
  local_1420 = 0;
  local_141c = 0;
  local_1414 = 0;
  local_1410 = 0;
  local_1408 = 0;
  local_1404 = 0;
  local_13fc = 0;
  local_13f8 = 0;
  local_13f0 = 0;
  local_13ec = 0;
  local_13e4 = 0;
  local_13e0 = 0;
  local_13d8 = 0;
  local_13d4 = 0;
  local_13cc = 0;
  local_13c8 = 0;
  local_13c4 = 0;
  local_13c0 = 0;
  local_13bc = 0;
  local_13b8 = 0;
  local_13b4 = 0;
  local_13b0 = 0;
  local_13ac = 0;
  local_13a8 = 0;
  local_13a4 = 0;
  local_13a0 = 0;
  local_139c = 0;
  local_1398 = 0;
  local_1394 = 0;
  local_1390 = 0;
  local_138c = 0;
  local_1388 = 0;
  local_1384 = 0;
  local_1380 = 0;
  local_137c = 0;
  local_1378 = 0;
  local_1374 = 0;
  local_1370 = 0;
  local_136c = 0;
  local_1328 = 0;
  local_1338 = 0;
  local_132c = 0;
  local_1310 = 0;
  local_1200 = 0;
  local_11fc = 0;
  local_11f8 = 0;
  local_11e0 = 0;
  uStack_11ec = 0;
  local_11f4 = 0;
  local_11e4 = 0;
  local_11d8 = 0x101;
  local_11d6 = 0;
  local_11d4 = 0;
  local_11d0 = 0;
  local_1170 = 0;
  local_1168 = 0;
  local_1108 = 0;
  local_10f8 = 0;
  local_10f4 = 0;
  local_10f0 = 0;
  local_10ec = 0;
  local_10e8 = 0;
  local_10e4 = 0;
  local_10e0 = 0;
  local_10dc = 0;
  local_10d8 = 0;
  local_10d4 = 0;
  local_10fc = 0;
  local_1100 = 0;
  local_17b0 = PTR_vtable_001a2c50 + 0x20;
  local_10d0 = 0;
  uStack_102f = 0;
  uStack_1030 = 0;
  local_1014 = 0;
  uStack_101c = 0;
  local_1024 = 0;
  local_ffc = 0;
  uStack_fd8 = 0;
  uStack_fb0 = 0;
  uStack_fc0 = 0;
  local_fc8 = 0;
  local_10c8 = 0;
  local_10a0 = 0;
  local_1098 = 0;
  local_fd0 = 0;
  local_fa8 = 0;
  local_f68 = 0;
  local_f60 = 0;
  local_f20 = 0;
  local_f18 = 0;
  local_ef0 = 0;
  local_ee8 = 0;
  local_ec0 = 0;
  local_eb8 = 0;
  local_e90 = 0;
  local_e88 = 0;
  local_e60 = 0;
  local_e58 = 0;
  local_e30 = 0;
  local_e28 = 0;
  local_e00 = 0;
  local_df8 = 0;
  local_dd0 = 0;
  local_dc8 = 0;
  local_da0 = 0;
  local_d98 = 0;
  local_d70 = 0;
  local_d68 = 0;
  local_d40 = 0;
  local_d38 = 0;
  local_d10 = 0;
  local_d08 = 0;
  local_ce0 = 0;
  local_cd8 = 0;
  uStack_1038 = 0;
  local_1037 = 0;
  uStack_1040 = 0;
  uStack_1048 = 0;
  local_1050 = 0;
  uStack_1058 = 0;
  local_1060 = 0;
  uStack_1068 = 0;
  local_1070 = 0;
  local_100c = 0;
  local_1008 = 0;
  local_1000 = 0;
  local_ff4 = 0;
  uStack_fe0 = 0;
  local_fdb = 0;
  uStack_fe8 = 0;
  local_ff0 = 0;
  uStack_fb8 = 0;
  local_fb3 = 0;
  local_f70 = 0;
  uStack_f78 = 0;
  local_f80 = 0;
  uStack_f88 = 0;
  local_f90 = 0;
  uStack_f98 = 0;
  local_fa0 = 0;
  uStack_f30 = 0;
  local_f38 = 0;
  local_f28 = 0;
                    /* try { // try from 00140048 to 0014005b has its CatchHandler @ 00140244 */
  facebook::react::RNSVGSvgViewAndroidProps::RNSVGSvgViewAndroidProps
            ((RNSVGSvgViewAndroidProps *)local_cb0,(PropsParserContext *)local_1810,
             (RNSVGSvgViewAndroidProps *)&local_17b0,(RawProps *)&local_f8);
  puVar5 = PTR_PTR_001a2c58;
  FUN_00141770(local_cb0,PTR_PTR_001a2c58);
  FUN_00141770(&local_17b0,puVar5);
  facebook::react::RawPropsParser::postPrepare();
  pvVar3 = local_120;
  puVar4 = (undefined8 *)local_110;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_120 = pvVar3;
    if ((plVar7 == (long *)0x0) || (lVar6 = FUN_00136770(0xffffffffffffffff,plVar7 + 1), lVar6 != 0)
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
  pvVar8 = local_80;
  pvVar3 = local_78;
  if (local_80 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 00140170 to 0014017b has its CatchHandler @ 00140248 */
        (*(code *)(&PTR_FUN_0019ea28)[*(uint *)((long)pvVar3 + -8)])
                  (&local_17b0,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_78 = pvVar8;
    operator_delete(local_80);
  }
  if (local_98 != (void *)0x0) {
    pvStack_90 = local_98;
    operator_delete(local_98);
  }
  folly::dynamic::destroy();
  facebook::jsi::Value::~Value((Value *)local_e0);
  if (local_17d0 != (void *)0x0) {
    pvStack_17c8 = local_17d0;
    operator_delete(local_17d0);
  }
  if (pvStack_17e8 != (void *)0x0) {
    local_17e0 = pvStack_17e8;
    operator_delete(pvStack_17e8);
  }
  if (local_1800 != (void *)0x0) {
    pvStack_17f8 = local_1800;
    operator_delete(local_1800);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0014024c  FUN_0014024c =====

void FUN_0014024c(undefined8 *param_1)

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


// ===== 001402a0  FUN_001402a0 =====

void FUN_001402a0(void *param_1)

{
  FUN_00142dd0();
  operator_delete(param_1);
  return;
}


// ===== 001402c4  FUN_001402c4 =====

undefined * FUN_001402c4(void)

{
  return PTR_RNSVGSvgViewAndroidComponentName_001a2c48;
}


// ===== 001402d0  FUN_001402d0 =====

undefined * FUN_001402d0(void)

{
  return PTR_RNSVGSvgViewAndroidComponentName_001a2c48;
}


// ===== 001402dc  FUN_001402dc =====

undefined8 FUN_001402dc(void)

{
  return 0x61;
}


// ===== 001402e4  FUN_001402e4 =====

void FUN_001402e4(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar6 = &PTR_FUN_0019eac0;
                    /* try { // try from 00140350 to 0014035f has its CatchHandler @ 00140438 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_0019eb10;
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
             *(char *)(lVar7 + 0x7b0) != '\0') << 0xb;
                    /* try { // try from 001403ec to 001403f7 has its CatchHandler @ 00140428 */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00140468  FUN_00140468 =====

void FUN_00140468(undefined8 *param_1,long *param_2,shared_ptr *param_3,ShadowNodeFragment *param_4)

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
  *plVar5 = (long)&PTR_FUN_0019eac0;
                    /* try { // try from 001404c0 to 001404cf has its CatchHandler @ 00140610 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            (pYVar1,(ShadowNode *)param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_0019eb10;
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
             *(char *)(lVar6 + 0x7b0) != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar5;
                    /* try { // try from 00140554 to 00140563 has its CatchHandler @ 00140628 */
  facebook::react::YogaLayoutableShadowNode::completeClone
            ((ShadowNode *)pYVar1,(ShadowNodeFragment *)param_3);
  local_78 = pYVar1;
  local_70 = plVar5;
  FUN_00136080(1,plVar5 + 1);
                    /* try { // try from 00140574 to 00140583 has its CatchHandler @ 00140600 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar6 = FUN_00136770(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 001405c0 to 001405cb has its CatchHandler @ 00140628 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00140650  FUN_00140650 =====

void FUN_00140650(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00140660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 00140664  FUN_00140664 =====

void FUN_00140664(undefined8 *param_1,ulong param_2,PropsParserContext *param_3,long *param_4,
                 RawPropsParser *param_5)

{
  RNSVGSvgViewAndroidProps *this;
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
  RNSVGSvgViewAndroidProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c18
         & 1) == 0) &&
       (param_2 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c18
                                     ), (int)param_2 != 0)) {
                    /* try { // try from 00140a98 to 00140a9b has its CatchHandler @ 00140ac8 */
      FUN_00141bc4();
      __cxa_atexit(FUN_00141da0,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c10
                   ,&PTR_LOOP_0019e280);
      param_2 = __cxa_guard_release(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c18
                                   );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c10
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c10
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      param_2 = FUN_00136080(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::parse(param_5);
    pRVar12 = (RNSVGSvgViewAndroidProps *)*param_4;
    if (pRVar12 == (RNSVGSvgViewAndroidProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c18
           & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c18
                                     ), iVar7 != 0)) {
                    /* try { // try from 00140a18 to 00140a1b has its CatchHandler @ 00140ae0 */
        FUN_00141bc4();
        __cxa_atexit(FUN_00141da0,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c10
                     ,&PTR_LOOP_0019e280);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c18
                           );
      }
      pRVar12 = *(RNSVGSvgViewAndroidProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c10
      ;
    }
    plVar9 = (long *)operator_new(0xb18);
    this = (RNSVGSvgViewAndroidProps *)(plVar9 + 3);
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_0019ec28;
                    /* try { // try from 00140744 to 00140757 has its CatchHandler @ 00140b54 */
    facebook::react::RNSVGSvgViewAndroidProps::RNSVGSvgViewAndroidProps
              (this,param_3,pRVar12,(RawProps *)param_5);
                    /* try { // try from 0014075c to 0014076f has its CatchHandler @ 00140b6c */
    uVar8 = facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid();
    if ((((uVar8 & 1) == 0) ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid
                           (), (uVar8 & 1) == 0)) ||
       (uVar8 = facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(),
       (uVar8 & 1) == 0)) {
LAB_00140798:
      FUN_00136080(1,plVar9 + 1);
      if ((RawProps *)*param_4 == (RawProps *)0x0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c18
             & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c18
                                       ), iVar7 != 0)) {
                    /* try { // try from 00140a58 to 00140a5b has its CatchHandler @ 00140acc */
          FUN_00141bc4();
          __cxa_atexit(FUN_00141da0,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c10
                       ,&PTR_LOOP_0019e280);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c18
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00140800 to 00140813 has its CatchHandler @ 00140af8 */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,
                   *(RawProps **)
                    PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c10
                   ,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_0014084c:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_0014084c;
        }
        if (plVar9 != (long *)0x0) goto LAB_00140860;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 001407b4 to 001407c7 has its CatchHandler @ 00140b20 */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,(RawProps *)*param_4,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_00140860;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_00140860:
        lVar11 = FUN_00136770(0xffffffffffffffff,plVar9 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 0014077c to 00140787 has its CatchHandler @ 00140af4 */
      __s2 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar7 = strcmp(PTR_RNSVGSvgViewAndroidComponentName_001a2c48,__s2);
      if (iVar7 != 0) goto LAB_00140798;
      bVar3 = false;
    }
                    /* try { // try from 0014088c to 0014088f has its CatchHandler @ 00140b6c */
    param_2 = facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter();
    if ((param_2 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 0014089c to 001408b7 has its CatchHandler @ 00140b1c */
        param_2 = folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar9 + 7));
      }
      else {
        param_2 = facebook::react::RawProps::operator_cast_to_dynamic((RawProps *)param_5);
      }
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 001409f8 to 00140a07 has its CatchHandler @ 00140b14 */
                    /* WARNING: Subroutine does not return */
          FUN_00141e98(*(undefined8 *)PTR_name_001a2c60);
        }
        goto LAB_00140bb8;
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 001409d8 to 001409e7 has its CatchHandler @ 00140b78 */
                    /* WARNING: Subroutine does not return */
            FUN_00141e98(*(undefined8 *)PTR_name_001a2c68);
          }
          goto LAB_00140bb8;
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
                    /* try { // try from 00140938 to 00140943 has its CatchHandler @ 00140b80 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 00140948 to 0014095f has its CatchHandler @ 00140b84 */
        param_2 = facebook::react::HostPlatformViewProps::setProp
                            ((PropsParserContext *)this,(uint)param_3,(char *)(ulong)uVar1,pRVar4);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 00140970 to 0014097b has its CatchHandler @ 00140b74 */
          param_2 = (*(code *)(&PTR_FUN_0019ea28)[local_a0])(&uStack_d1,local_d0);
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
LAB_00140bb8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


// ===== 00140bbc  FUN_00140bbc =====

void FUN_00140bbc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00140bc4  FUN_00140bc4 =====

void FUN_00140bc4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00140bcc  FUN_00140bcc =====

void FUN_00140bcc(undefined8 *param_1,long param_2,long param_3)

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
  FUN_001423cc(&local_a0,param_3 + 8,param_3 + 4);
                    /* try { // try from 00140c10 to 00140c17 has its CatchHandler @ 00140ef0 */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_0019ec78;
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
    FUN_00136080(1,local_78 + 0x10);
  }
                    /* try { // try from 00140c54 to 00140c63 has its CatchHandler @ 00140ec4 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_0019ed40;
                    /* try { // try from 00140c70 to 00140c77 has its CatchHandler @ 00140eb4 */
  puVar6 = (undefined8 *)operator_new(0x58);
  *puVar6 = &PTR_FUN_0019ed60;
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
  plVar5[3] = (long)&PTR_FUN_0019ecc8;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_00136770(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_00136770(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00140d24 to 00140d2b has its CatchHandler @ 00140ea4 */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  *puVar6 = &PTR_FUN_0019ee20;
  pSVar2 = (ShadowNodeFamily *)(puVar6 + 4);
  puVar6[1] = 0;
  puVar6[2] = 0;
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00136080(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00136080(1,local_78 + 0x10);
  }
                    /* try { // try from 00140d74 to 00140d8b has its CatchHandler @ 00140e74 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_00136770(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = puVar6;
  local_b0 = pSVar2;
  local_a8 = puVar6;
  FUN_00136080(1,puVar6 + 2);
                    /* try { // try from 00140de0 to 00140deb has its CatchHandler @ 00140e54 */
  facebook::react::EventEmitter::setShadowNodeFamily(pEVar1,&local_b0);
  if (local_a8 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_00136770(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00140f18  FUN_00140f18 =====

void FUN_00140f18(void)

{
  return;
}


// ===== 00140f1c  FUN_00140f1c =====

void FUN_00140f1c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_00141604(param_1,param_2 + 1);
  return;
}


// ===== 0014102c  FUN_0014102c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014102c(undefined8 *param_1,undefined8 *param_2)

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
  uVar6 = DAT_001206b8;
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
  uVar2 = _UNK_00120ed8;
  uVar6 = _DAT_00120ed0;
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
  uVar4 = _UNK_00121318;
  uVar3 = _DAT_00121310;
  uVar2 = _UNK_00121308;
  uVar6 = _DAT_00121300;
  *(undefined1 *)((long)param_1 + 0x34c) = 0;
  *param_1 = uVar7;
  *(undefined8 *)((long)param_1 + 0x344) = 0x3f800000;
  param_1[0xb2] = uVar4;
  param_1[0xb1] = uVar3;
  param_1[0xb0] = uVar2;
  param_1[0xaf] = uVar6;
  uVar4 = _UNK_001212f8;
  uVar3 = _DAT_001212f0;
  uVar2 = _UNK_001212e8;
  uVar6 = _DAT_001212e0;
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


// ===== 001413e0  FUN_001413e0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_001413e0(long param_1)

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


// ===== 001415dc  FUN_001415dc =====

void FUN_001415dc(undefined8 param_1,long param_2)

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


// ===== 001415f0  FUN_001415f0 =====

void FUN_001415f0(undefined8 param_1,long param_2)

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


// ===== 00141604  FUN_00141604 =====

void FUN_00141604(undefined8 *param_1,undefined8 *param_2)

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
                    /* try { // try from 001416cc to 001416d3 has its CatchHandler @ 0014176c */
          (*(code *)(&PTR_FUN_0019ea18)[*(uint *)((long)pvVar4 + -8)])
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
  FUN_001413e0(param_1 + 0x3d);
  *param_1 = param_2[1];
  FUN_0013b73c(param_1 + 10);
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


// ===== 00141770  FUN_00141770 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00141770(long param_1,long param_2)

{
  byte bVar1;
  
  folly::dynamic::destroy();
  folly::dynamic::destroy();
  folly::dynamic::destroy();
  folly::dynamic::destroy();
  folly::dynamic::destroy();
  folly::dynamic::destroy();
  folly::dynamic::destroy();
  folly::dynamic::destroy();
  folly::dynamic::destroy();
  folly::dynamic::destroy();
  folly::dynamic::destroy();
  folly::dynamic::destroy();
  folly::dynamic::destroy();
  folly::dynamic::destroy();
  if ((*(byte *)(param_1 + 0x828) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x810);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x838));
    bVar1 = *(byte *)(param_1 + 0x810);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x7e8);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x820));
    bVar1 = *(byte *)(param_1 + 0x7e8);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x7c0);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x7f8));
    bVar1 = *(byte *)(param_1 + 0x7c0);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x770);
  }
  else {
    operator_delete(*(void **)(param_1 + 2000));
    bVar1 = *(byte *)(param_1 + 0x770);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x750);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x780));
    bVar1 = *(byte *)(param_1 + 0x750);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x760));
  }
  folly::dynamic::destroy();
  folly::dynamic::destroy();
  FUN_00140f1c(param_1,param_2 + 8);
  return;
}


// ===== 001418a4  FUN_001418a4 =====

void FUN_001418a4(long param_1)

{
  long lVar1;
  undefined1 uStack_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
                    /* try { // try from 001418dc to 001418e7 has its CatchHandler @ 00141914 */
    (*(code *)(&PTR_FUN_0019ea28)[*(uint *)(param_1 + 0x30)])(&uStack_29,param_1);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00141918  FUN_00141918 =====

void FUN_00141918(void)

{
  folly::dynamic::destroy();
  return;
}


// ===== 00141920  FUN_00141920 =====

void FUN_00141920(undefined8 param_1,long param_2)

{
  facebook::jsi::Value::~Value((Value *)(param_2 + 8));
  return;
}


// ===== 00141928  FUN_00141928 =====

void FUN_00141928(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14192c);
  (*pcVar1)();
}


// ===== 0014192c  FUN_0014192c =====

void FUN_0014192c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0014197c  FUN_0014197c =====

void FUN_0014197c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0019eac0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0014198c  FUN_0014198c =====

void FUN_0014198c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0019eac0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001419bc  FUN_001419bc =====

void FUN_001419bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001419c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 001419c8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 001419cc  FUN_001419cc =====

void FUN_001419cc(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_001a2bb0 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00136770(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
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
  FUN_0013b73c(param_1 + 0x23);
  FUN_0013b640(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00141a8c  FUN_00141a8c =====

void FUN_00141a8c(long param_1)

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


// ===== 00141af4  FUN_00141af4 =====

bool FUN_00141af4(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 00141b0c  FUN_00141b0c =====

bool FUN_00141b0c(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 00141b24  FUN_00141b24 =====

void FUN_00141b24(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00141b74  FUN_00141b74 =====

void FUN_00141b74(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00141bc4  FUN_00141bc4 =====

void FUN_00141bc4(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xb18);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_0019ebd8;
  memset(__s,0,0xb00);
                    /* try { // try from 00141c00 to 00141c13 has its CatchHandler @ 00141d84 */
  FUN_0014102c(__s,PTR_PTR_001a2c58 + 0x10);
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
  puVar1 = PTR_vtable_001a2c50;
  puVar2[0xfd] = 0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar2[0xf2] = 0;
  puVar2[0xf1] = 0;
  *(undefined8 *)((long)puVar2 + 0x799) = 0;
  *(undefined8 *)((long)puVar2 + 0x791) = 0;
  *(undefined8 *)((long)puVar2 + 0x7b4) = 0;
  *(undefined8 *)((long)puVar2 + 0x7ac) = 0;
  *(undefined8 *)((long)puVar2 + 0x7a4) = 0;
  *(undefined8 *)((long)puVar2 + 0x7cc) = 0;
  *(undefined8 *)((long)puVar2 + 0x7ed) = 0;
  *(undefined4 *)(puVar2 + 0xdf) = 0;
  puVar2[0xe0] = 0;
  *(undefined4 *)(puVar2 + 0xe5) = 0;
  puVar2[0xe6] = 0;
  *(undefined4 *)(puVar2 + 0xff) = 0;
  *(undefined4 *)(puVar2 + 0x104) = 0;
  *(undefined4 *)(puVar2 + 0x10c) = 0;
  puVar2[0x10d] = 0;
  *(undefined4 *)(puVar2 + 0x115) = 0;
  puVar2[0x116] = 0;
  *(undefined4 *)(puVar2 + 0x11b) = 0;
  puVar2[0x11c] = 0;
  *(undefined4 *)(puVar2 + 0x121) = 0;
  puVar2[0x122] = 0;
  *(undefined4 *)(puVar2 + 0x127) = 0;
  puVar2[0x128] = 0;
  *(undefined4 *)(puVar2 + 0x12d) = 0;
  puVar2[0x12e] = 0;
  *(undefined4 *)(puVar2 + 0x133) = 0;
  puVar2[0x134] = 0;
  *(undefined4 *)(puVar2 + 0x139) = 0;
  puVar2[0x13a] = 0;
  *(undefined4 *)(puVar2 + 0x13f) = 0;
  puVar2[0x140] = 0;
  *(undefined4 *)(puVar2 + 0x145) = 0;
  puVar2[0x146] = 0;
  *(undefined4 *)(puVar2 + 0x14b) = 0;
  puVar2[0x14c] = 0;
  *(undefined4 *)(puVar2 + 0x151) = 0;
  puVar2[0x152] = 0;
  *(undefined4 *)(puVar2 + 0x157) = 0;
  puVar2[0x158] = 0;
  *(undefined4 *)(puVar2 + 0x15d) = 0;
  puVar2[0x15e] = 0;
  puVar2[0xf0] = 0;
  puVar2[0xef] = 0;
  puVar2[0xee] = 0;
  puVar2[0xed] = 0;
  puVar2[0xec] = 0;
  puVar2[0xeb] = 0;
  *(undefined1 *)((long)puVar2 + 0x7bc) = 0;
  *(undefined1 *)(puVar2 + 0xf9) = 0;
  puVar2[0xf8] = 0;
  *(undefined1 *)((long)puVar2 + 0x7d4) = 0;
  puVar2[0xfc] = 0;
  puVar2[0xfb] = 0;
  puVar2[0x101] = 0;
  puVar2[0x100] = 0;
  *(undefined8 *)((long)puVar2 + 0x815) = 0;
  puVar2[0x102] = 0;
  *(undefined1 *)(puVar2 + 0x10b) = 0;
  puVar2[0x10a] = 0;
  puVar2[0x109] = 0;
  puVar2[0x108] = 0;
  puVar2[0x107] = 0;
  puVar2[0x106] = 0;
  puVar2[0x105] = 0;
  *(undefined4 *)(puVar2 + 0x114) = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c10
  ;
  puVar2[0x113] = 0;
  puVar2[0x112] = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 00141da0  FUN_00141da0 =====

void FUN_00141da0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00141df0  FUN_00141df0 =====

void FUN_00141df0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0019ebd8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00141e00  FUN_00141e00 =====

void FUN_00141e00(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0019ebd8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00141e30  FUN_00141e30 =====

void FUN_00141e30(long param_1)

{
  FUN_00141770(param_1 + 0x18,PTR_PTR_001a2c58);
  return;
}


// ===== 00141e40  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 00141e44  FUN_00141e44 =====

void FUN_00141e44(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0019ec28;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00141e54  FUN_00141e54 =====

void FUN_00141e54(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0019ec28;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00141e84  FUN_00141e84 =====

void FUN_00141e84(long param_1)

{
  FUN_00141770(param_1 + 0x18,PTR_PTR_001a2c58);
  return;
}


// ===== 00141e94  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 00141e98  FUN_00141e98 =====

void FUN_00141e98(undefined8 param_1,undefined4 param_2)

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
                    /* try { // try from 00141ec4 to 00141ed3 has its CatchHandler @ 00141efc */
  folly::TypeError::TypeError(aTStack_38,local_50,param_2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00141ee4 to 00141eeb has its CatchHandler @ 00141eec */
    uVar2 = FUN_00141f2c(aTStack_38);
                    /* catch() { ... } // from try @ 00141ee4 with catch @ 00141eec */
    std::runtime_error::~runtime_error((runtime_error *)aTStack_38);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_001368d4(uVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00141f2c  FUN_00141f2c =====

void FUN_00141f2c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
  FUN_00141ff4(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_typeinfo_001a2c20,PTR__runtime_error_001a2c40);
}


// ===== 00141f68  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc =====

void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc
               (long *param_1,char *param_2)

{
  size_t __n;
  void *__dest;
  
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_0013b2a4(param_1);
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00141fd8;
  }
  else {
    __dest = operator_new((__n | 0xf) + 1);
    param_1[1] = __n;
    param_1[2] = (long)__dest;
    *param_1 = (__n | 0xf) + 2;
  }
  memmove(__dest,param_2,__n);
LAB_00141fd8:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


// ===== 00141ff4  FUN_00141ff4 =====

void FUN_00141ff4(runtime_error *param_1,runtime_error *param_2)

{
  std::runtime_error::runtime_error(param_1,param_2);
  *(undefined ***)param_1 = &PTR__runtime_error_0019f158;
  return;
}


// ===== 00142020  FUN_00142020 =====

void FUN_00142020(runtime_error *param_1)

{
  std::runtime_error::~runtime_error(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00142044  FUN_00142044 =====

void FUN_00142044(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00142094  FUN_00142094 =====

void FUN_00142094(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001420e4  FUN_001420e4 =====

void FUN_001420e4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0019ec78;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 001420f4  FUN_001420f4 =====

void FUN_001420f4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0019ec78;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00142124  FUN_00142124 =====

void FUN_00142124(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0014212c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00142130  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 00142134  FUN_00142134 =====

void FUN_00142134(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_0019ed40;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_0019edb0;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 001421e4  FUN_001421e4 =====

void FUN_001421e4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_0019ed40;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_0019edb0;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 00142294  FUN_00142294 =====

void FUN_00142294(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0019ed60;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 001422a4  FUN_001422a4 =====

void FUN_001422a4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0019ed60;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001422d4  FUN_001422d4 =====

void FUN_001422d4(long param_1)

{
  std::__ndk1::mutex::~mutex((mutex *)(param_1 + 0x18));
  return;
}


// ===== 001422dc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 001422e0  FUN_001422e0 =====

void FUN_001422e0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_0019edb0;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00142358  FUN_00142358 =====

void FUN_00142358(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_0019edb0;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 001423cc  FUN_001423cc =====

void FUN_001423cc(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

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
  *puVar3 = &PTR_FUN_0019edd0;
  local_58 = *param_2;
  local_50 = (long *)param_2[1];
  puVar3[1] = 0;
  puVar3[2] = 0;
  if (local_50 != (long *)0x0) {
    FUN_00136080(1,local_50 + 1);
  }
                    /* try { // try from 00142438 to 00142443 has its CatchHandler @ 001424a0 */
  facebook::react::EventTarget::EventTarget((EventTarget *)(puVar3 + 3),&local_58,*param_3);
  plVar2 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar4 = FUN_00136770(0xffffffffffffffff,local_50 + 1), lVar4 == 0)) {
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


// ===== 001424d8  FUN_001424d8 =====

void FUN_001424d8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0019edd0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 001424e8  FUN_001424e8 =====

void FUN_001424e8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0019edd0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00142518  FUN_00142518 =====

void FUN_00142518(long param_1)

{
  long lVar1;
  long *plVar2;
  
  facebook::jsi::Value::~Value((Value *)(param_1 + 0x30));
  plVar2 = *(long **)(param_1 + 0x20);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00142574  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 00142578  FUN_00142578 =====

void FUN_00142578(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001425c8  FUN_001425c8 =====

void FUN_001425c8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0019ee20;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 001425d8  FUN_001425d8 =====

void FUN_001425d8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0019ee20;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00142608  FUN_00142608 =====

void FUN_00142608(long param_1)

{
  facebook::react::ShadowNodeFamily::~ShadowNodeFamily((ShadowNodeFamily *)(param_1 + 0x20));
  return;
}


// ===== 00142610  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 00142614  FUN_00142614 =====

void FUN_00142614(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00142664  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_25RNSVGSvgViewComponentNameEEEENS0_17RNSVGSvgViewPropsENS0_24RNSVGSvgViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_25RNSVGSvgViewComponentNameEEEENS0_17RNSVGSvgViewPropsENS0_24RNSVGSvgViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
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
  undefined4 local_1180 [2];
  undefined8 *local_1178;
  void *local_1170;
  void *pvStack_1168;
  undefined8 local_1160;
  void *pvStack_1158;
  void *local_1150;
  undefined8 uStack_1148;
  void *local_1140;
  void *pvStack_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  undefined *local_1120;
  undefined8 uStack_1118;
  undefined8 local_1110;
  undefined8 uStack_1108;
  undefined4 local_1100 [2];
  undefined8 local_10f8;
  undefined8 uStack_10f0;
  undefined8 local_10e8;
  undefined8 uStack_10e0;
  undefined4 local_10d8;
  undefined4 local_10d0;
  undefined1 local_10cc;
  undefined8 local_10cb;
  undefined8 local_10c3;
  undefined8 uStack_10bb;
  undefined8 local_10b3;
  undefined8 uStack_10ab;
  undefined8 local_10a3;
  undefined8 uStack_109b;
  undefined8 local_1093;
  undefined6 uStack_108b;
  undefined2 uStack_1085;
  undefined6 uStack_1083;
  undefined8 uStack_107d;
  undefined4 local_1075;
  undefined8 local_1071;
  undefined1 local_1069;
  undefined1 uStack_1068;
  undefined7 uStack_1067;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined8 uStack_1050;
  undefined8 local_1048;
  undefined8 uStack_1040;
  undefined8 local_1038;
  undefined8 uStack_1030;
  undefined8 local_1028;
  undefined8 uStack_1020;
  undefined8 local_1018;
  undefined8 uStack_1010;
  undefined8 uStack_1008;
  undefined8 local_1000;
  undefined8 local_ff8;
  undefined8 uStack_ff0;
  undefined8 local_fe8;
  undefined4 uStack_fe0;
  undefined4 uStack_fdc;
  undefined4 uStack_fd8;
  undefined4 uStack_fd4;
  undefined4 uStack_fd0;
  undefined4 uStack_fcc;
  undefined8 local_fc8;
  undefined8 uStack_fc0;
  undefined4 local_fb8;
  undefined1 local_fb4;
  undefined4 local_fb0;
  undefined1 local_fac;
  undefined4 local_fa8;
  undefined1 local_fa4;
  undefined4 local_fa0;
  undefined1 local_f9c;
  undefined4 local_f98;
  undefined1 local_f94;
  undefined4 local_f90;
  undefined1 local_f8c;
  undefined4 local_f88;
  undefined1 local_f84;
  undefined4 local_f80;
  undefined1 local_f7c;
  undefined4 local_f78;
  undefined1 local_f74;
  undefined4 local_f70;
  undefined1 local_f6c;
  undefined4 local_f68;
  undefined1 local_f64;
  undefined4 local_f60;
  undefined1 local_f5c;
  undefined4 local_f58;
  undefined1 local_f54;
  undefined4 local_f50;
  undefined1 local_f4c;
  undefined4 local_f48;
  undefined1 local_f44;
  undefined4 local_f40;
  undefined1 local_f3c;
  undefined1 local_f38;
  undefined1 local_f34;
  undefined1 local_f28;
  undefined8 local_f20;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  undefined8 uStack_f08;
  undefined8 local_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined1 uStack_ee8;
  undefined7 local_ee7;
  undefined1 uStack_ee0;
  undefined8 uStack_edf;
  undefined8 local_ed4;
  undefined8 uStack_ecc;
  undefined8 uStack_ec4;
  undefined8 uStack_ebc;
  undefined8 local_eb4;
  undefined8 uStack_eac;
  undefined8 uStack_ea4;
  undefined8 uStack_e9c;
  undefined8 local_e94;
  undefined8 uStack_e8c;
  undefined8 uStack_e84;
  undefined5 uStack_e7c;
  undefined3 local_e77;
  undefined5 uStack_e74;
  undefined1 local_e6c;
  undefined1 local_e68;
  undefined1 local_e64;
  undefined1 local_e60;
  undefined1 local_e5c;
  undefined1 local_e58;
  undefined1 local_e40;
  undefined8 local_e38;
  undefined8 uStack_e30;
  undefined8 local_e28;
  undefined4 local_e20;
  undefined1 local_e1c;
  undefined4 local_e1b;
  undefined1 local_e17;
  undefined1 local_e16;
  undefined8 local_e10;
  undefined8 uStack_e08;
  undefined8 uStack_e00;
  undefined8 uStack_df8;
  undefined8 local_df0;
  undefined7 uStack_de8;
  undefined4 uStack_de1;
  undefined8 local_ddc;
  undefined1 local_dd4;
  undefined1 local_dcc;
  undefined1 local_dc8;
  undefined1 local_dc0;
  undefined1 local_dbc;
  undefined1 local_db4;
  undefined1 local_db0;
  undefined1 local_da8;
  undefined1 local_da4;
  undefined1 local_d9c;
  undefined1 local_d98;
  undefined1 local_d90;
  undefined1 local_d8c;
  undefined1 local_d84;
  undefined1 local_d80;
  undefined1 local_d78;
  undefined1 local_d74;
  undefined1 local_d6c;
  undefined1 local_d68;
  undefined1 local_d60;
  undefined1 local_d5c;
  undefined1 local_d54;
  undefined1 local_d50;
  undefined1 local_d48;
  undefined1 local_d44;
  undefined1 local_d3c;
  undefined1 local_d38;
  undefined1 local_d34;
  undefined1 local_d30;
  undefined1 local_d2c;
  undefined1 local_d28;
  undefined1 local_d24;
  undefined1 local_d20;
  undefined1 local_d1c;
  undefined1 local_d18;
  undefined1 local_d14;
  undefined1 local_d10;
  undefined1 local_d0c;
  undefined1 local_d08;
  undefined1 local_d04;
  undefined1 local_d00;
  undefined1 local_cfc;
  undefined1 local_cf8;
  undefined1 local_cf4;
  undefined1 local_cf0;
  undefined1 local_cec;
  undefined1 local_ce8;
  undefined1 local_ce4;
  undefined1 local_ce0;
  undefined1 local_cdc;
  undefined8 local_cd8;
  undefined8 uStack_cd0;
  undefined8 local_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined2 local_ca8;
  undefined8 local_ca4;
  undefined1 local_c9c;
  undefined8 local_c98;
  undefined8 local_c90;
  undefined8 uStack_c88;
  undefined1 local_c80;
  undefined8 local_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 local_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined8 local_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 local_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 local_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 local_bd8;
  undefined8 uStack_bd0;
  undefined8 local_bc8;
  undefined8 uStack_bc0;
  undefined8 local_bb8;
  undefined8 uStack_bb0;
  undefined8 local_ba8;
  undefined8 uStack_ba0;
  undefined8 local_b98;
  undefined8 uStack_b90;
  undefined8 local_b88;
  undefined6 uStack_b80;
  undefined2 uStack_b7a;
  undefined6 uStack_b78;
  undefined1 local_b70;
  undefined1 local_b6c;
  undefined1 local_b68;
  undefined8 local_b64;
  undefined8 uStack_b5c;
  undefined1 local_b54;
  undefined8 local_b50;
  undefined2 local_b48;
  undefined1 local_b46;
  undefined4 local_b44;
  undefined1 local_b40;
  undefined1 local_ae0;
  undefined1 local_ad8;
  undefined1 local_a78;
  undefined4 local_a70;
  undefined2 local_a6c;
  undefined1 local_a68;
  undefined1 local_a64;
  undefined1 local_a60;
  undefined1 local_a5c;
  undefined1 local_a58;
  undefined1 local_a54;
  undefined1 local_a50;
  undefined1 local_a4c;
  undefined1 local_a48;
  undefined1 local_a44;
  undefined4 local_a40;
  undefined8 local_a38;
  undefined4 local_a10;
  undefined8 local_a08;
  undefined8 local_9e0;
  undefined8 uStack_9d8;
  ulong local_9d0;
  undefined8 uStack_9c8;
  void *local_9c0;
  undefined8 uStack_9b8;
  ulong local_9b0;
  undefined4 uStack_9a8;
  undefined4 local_9a4;
  undefined4 uStack_9a0;
  undefined4 uStack_99c;
  undefined4 uStack_998;
  undefined8 local_990;
  undefined4 local_968 [2];
  undefined8 local_960;
  undefined8 uStack_958;
  undefined8 local_950;
  undefined8 local_948;
  undefined8 uStack_940;
  byte local_218;
  void *local_208;
  byte local_1f8;
  void *local_1e8;
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
  pvStack_1158 = (void *)0x0;
  local_1160 = 0;
  uStack_1148 = 0;
  local_1150 = (void *)0x0;
  pvStack_1138 = (void *)0x0;
  local_1140 = (void *)0x0;
  uStack_1128 = 0;
  uStack_1130 = 0;
  pvStack_1168 = (void *)0x0;
  local_1170 = (void *)0x0;
                    /* try { // try from 001426b8 to 001426c3 has its CatchHandler @ 00142d98 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_1170);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_0019ee70;
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
                    /* try { // try from 00142734 to 0014273f has its CatchHandler @ 00142dc8 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_1180[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_1178 = &local_1b0;
  facebook::react::RawProps::parse((RawPropsParser *)&local_f8);
  memset(local_1100,0,0x798);
  local_968[0] = 5;
  local_950 = 0;
  local_1120 = PTR_construction_vtable_001a2e50 + 0x20;
  local_1100[0] = 5;
  uStack_1108 = 0;
  local_1110 = 0;
  uStack_1118 = 0;
  local_948 = 0;
  uStack_940 = 0x3f800000;
  uStack_958 = 0;
  local_960 = 0;
  uStack_10f0 = 0;
  local_10f8 = 0;
  uStack_10e0 = 0;
  local_10e8 = 0;
  local_10d8 = 0x3f800000;
  folly::dynamic::destroy();
  local_10cc = 0;
  local_1071 = 0;
  uStack_b90 = _UNK_00121318;
  local_b98 = _DAT_00121310;
  local_10cb = DAT_001206b8;
  uStack_c88 = _UNK_00120ed8;
  local_c90 = _DAT_00120ed0;
  uStack_ba0 = _UNK_00121308;
  local_ba8 = _DAT_00121300;
  local_fb4 = 0;
  uStack_bb0 = _UNK_001212f8;
  local_bb8 = _DAT_001212f0;
  uStack_bc0 = _UNK_001212e8;
  local_bc8 = _DAT_001212e0;
  uStack_b78 = 0;
  local_fac = 0;
  uStack_fe0 = 0;
  local_fe8 = 0;
  uStack_fcc = 0;
  uStack_ff0 = 0;
  local_ff8 = 0;
  uStack_b80 = 0;
  uStack_b7a = 0;
  local_b88 = 0;
  local_10d0 = 0x10410710;
  local_1075 = 0x40004;
  uStack_fd4 = 0;
  uStack_fd0 = 0;
  uStack_fdc = 0;
  uStack_fd8 = 0;
  uStack_fc0 = 0;
  local_fc8 = 0;
  local_fb8 = 0x7fc00000;
  local_fb0 = 0x7fc00000;
  local_fa8 = 0x7fc00000;
  local_fa0 = 0x7fc00000;
  local_f98 = 0x7fc00000;
  local_f90 = 0x7fc00000;
  local_f88 = 0x7fc00000;
  local_f80 = 0x7fc00000;
  local_f78 = 0x7fc00000;
  local_f70 = 0x7fc00000;
  local_f68 = 0x7fc00000;
  local_f60 = 0x7fc00000;
  local_f58 = 0x7fc00000;
  local_f50 = 0x7fc00000;
  local_f48 = 0x7fc00000;
  local_f40 = 0x7fc00000;
  uStack_edf = 0;
  uStack_ee0 = 0;
  uStack_ecc = 0;
  local_ed4 = 0;
  uStack_ebc = 0;
  uStack_ec4 = 0;
  uStack_eac = 0;
  local_eb4 = 0;
  uStack_e9c = 0;
  uStack_ea4 = 0;
  uStack_e8c = 0;
  local_e94 = 0;
  uStack_e7c = 0;
  uStack_e84 = 0;
  local_e77 = 0;
  uStack_e74 = 0;
  local_e1c = 1;
  local_e1b = 0;
  local_e16 = 0x23;
  local_ddc = 0x3f800000;
  uStack_cc0 = 0;
  local_cc8 = 0;
  uStack_cb0 = 0;
  uStack_cb8 = 0;
  uStack_cd0 = 0;
  local_cd8 = 0;
  local_ca4 = 0;
  uStack_c70 = 0;
  local_c78 = 0;
  uStack_c60 = 0;
  uStack_c68 = 0;
  uStack_c50 = 0;
  local_c58 = 0;
  uStack_c40 = 0;
  uStack_c48 = 0;
  uStack_c30 = 0;
  local_c38 = 0;
  uStack_c20 = 0;
  uStack_c28 = 0;
  uStack_c10 = 0;
  local_c18 = 0;
  uStack_c00 = 0;
  uStack_c08 = 0;
  uStack_bf0 = 0;
  local_bf8 = 0;
  uStack_be0 = 0;
  uStack_be8 = 0;
  uStack_bd0 = 0;
  local_bd8 = 0;
  uStack_1067 = 0;
  uStack_10bb = 0;
  local_10c3 = 0;
  uStack_10ab = 0;
  local_10b3 = 0;
  uStack_109b = 0;
  local_10a3 = 0;
  uStack_108b = 0;
  local_1093 = 0;
  uStack_107d = 0;
  uStack_1085 = 0;
  uStack_1083 = 0;
  local_1069 = 0;
  uStack_1068 = 0;
  uStack_1058 = 0;
  uStack_1060 = 0;
  local_1048 = 0;
  uStack_1050 = 0;
  local_1038 = 0;
  uStack_1040 = 0;
  local_1028 = 0;
  uStack_1030 = 0;
  local_1018 = 0;
  uStack_1020 = 0;
  uStack_1008 = 0;
  uStack_1010 = 0;
  local_1000 = 0;
  local_fa4 = 0;
  local_f9c = 0;
  local_f94 = 0;
  local_f8c = 0;
  local_f84 = 0;
  local_f7c = 0;
  local_f74 = 0;
  local_f6c = 0;
  local_f64 = 0;
  local_f5c = 0;
  local_f54 = 0;
  local_f4c = 0;
  local_f44 = 0;
  local_f3c = 0;
  local_f38 = 0;
  local_f34 = 0;
  local_f28 = 0;
  local_e6c = 0;
  local_e68 = 0;
  local_e64 = 0;
  local_e60 = 0;
  local_e5c = 0;
  local_e58 = 0;
  local_e40 = 0;
  uStack_f18 = 0;
  local_f20 = 0;
  uStack_f08 = 0;
  uStack_f10 = 0;
  uStack_ef8 = 0;
  local_f00 = 0;
  uStack_ee8 = 0;
  local_ee7 = 0;
  uStack_ef0 = 0;
  uStack_e30 = 0;
  local_e38 = 0;
  local_e28 = 0;
  local_e20 = 0;
  local_e17 = 0;
  uStack_e08 = 0;
  local_e10 = 0;
  uStack_df8 = 0;
  uStack_e00 = 0;
  uStack_de8 = 0;
  uStack_de1 = 0;
  local_df0 = 0;
  local_dd4 = 0;
  local_dcc = 0;
  local_dc8 = 0;
  local_dc0 = 0;
  local_dbc = 0;
  local_db4 = 0;
  local_db0 = 0;
  local_da8 = 0;
  local_da4 = 0;
  local_d9c = 0;
  local_d98 = 0;
  local_d90 = 0;
  local_d8c = 0;
  local_d84 = 0;
  local_d80 = 0;
  local_d78 = 0;
  local_d74 = 0;
  local_d6c = 0;
  local_d68 = 0;
  local_d60 = 0;
  local_d5c = 0;
  local_d54 = 0;
  local_d50 = 0;
  local_d48 = 0;
  local_d44 = 0;
  local_d3c = 0;
  local_d38 = 0;
  local_d34 = 0;
  local_d30 = 0;
  local_d2c = 0;
  local_d28 = 0;
  local_d24 = 0;
  local_d20 = 0;
  local_d1c = 0;
  local_d18 = 0;
  local_d14 = 0;
  local_d10 = 0;
  local_d0c = 0;
  local_d08 = 0;
  local_d04 = 0;
  local_d00 = 0;
  local_cfc = 0;
  local_cf8 = 0;
  local_cf4 = 0;
  local_cf0 = 0;
  local_cec = 0;
  local_ce8 = 0;
  local_ce4 = 0;
  local_ce0 = 0;
  local_cdc = 0;
  local_c98 = 0;
  local_ca8 = 0;
  local_c9c = 0;
  local_c80 = 0;
  local_b70 = 0;
  local_b6c = 0;
  local_b68 = 0;
  local_b50 = 0;
  uStack_b5c = 0;
  local_b64 = 0;
  local_b54 = 0;
  local_b48 = 0x101;
  local_b46 = 0;
  local_b44 = 0;
  local_b40 = 0;
  local_ae0 = 0;
  local_ad8 = 0;
  local_a78 = 0;
  local_a68 = 0;
  local_a64 = 0;
  local_a60 = 0;
  local_a5c = 0;
  local_a58 = 0;
  local_a54 = 0;
  local_a50 = 0;
  local_a4c = 0;
  local_a48 = 0;
  local_a44 = 0;
  local_a6c = 0;
  local_a70 = 0;
  local_1120 = PTR_vtable_001a2c78 + 0x20;
  local_a40 = 0;
  local_a38 = 0;
  local_a10 = 0;
  local_a08 = 0;
  local_990 = 0;
  uStack_99c = 0;
  uStack_998 = 0;
  uStack_9a0 = 0;
  uStack_9d8 = 0;
  local_9e0 = 0;
  uStack_9c8 = 0;
  local_9d0 = 0;
  uStack_9b8 = 0;
  local_9c0 = (void *)0x0;
  uStack_9a8 = 0;
  local_9a4 = 0;
  local_9b0 = 0;
                    /* try { // try from 00142b54 to 00142b6b has its CatchHandler @ 00142dc8 */
  facebook::react::RNSVGSvgViewProps::RNSVGSvgViewProps
            ((RNSVGSvgViewProps *)local_968,(PropsParserContext *)local_1180,
             (RNSVGSvgViewProps *)&local_1120,(RawProps *)&local_f8);
  folly::dynamic::destroy();
  if ((local_1f8 & 1) != 0) {
    operator_delete(local_1e8);
  }
  if ((local_218 & 1) != 0) {
    operator_delete(local_208);
  }
  folly::dynamic::destroy();
  folly::dynamic::destroy();
  puVar5 = PTR_PTR_001a2c80;
  FUN_00140f1c(local_968,PTR_PTR_001a2c80 + 8);
  folly::dynamic::destroy();
  if ((local_9b0 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_99c,uStack_9a0));
  }
  if ((local_9d0 & 1) != 0) {
    operator_delete(local_9c0);
  }
  folly::dynamic::destroy();
  folly::dynamic::destroy();
  FUN_00140f1c(&local_1120,puVar5 + 8);
  facebook::react::RawPropsParser::postPrepare();
  pvVar3 = local_120;
  puVar4 = (undefined8 *)local_110;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_120 = pvVar3;
    if ((plVar7 == (long *)0x0) || (lVar6 = FUN_00136770(0xffffffffffffffff,plVar7 + 1), lVar6 != 0)
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
                    /* try { // try from 00142cf0 to 00142cfb has its CatchHandler @ 00142dcc */
        (*(code *)(&PTR_FUN_0019ea28)[*(uint *)((long)pvVar3 + -8)])
                  (&local_1120,(void *)((long)pvVar3 + -0x38));
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
  if (local_1140 != (void *)0x0) {
    pvStack_1138 = local_1140;
    operator_delete(local_1140);
  }
  if (pvStack_1158 != (void *)0x0) {
    local_1150 = pvStack_1158;
    operator_delete(pvStack_1158);
  }
  if (local_1170 != (void *)0x0) {
    pvStack_1168 = local_1170;
    operator_delete(local_1170);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00142dd0  FUN_00142dd0 =====

void FUN_00142dd0(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  
  pvVar1 = (void *)param_1[0xd];
  *param_1 = &PTR_FUN_0019ea48;
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
  if ((plVar3 != (long *)0x0) && (lVar2 = FUN_00136770(0xffffffffffffffff,plVar3 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = (long *)param_1[4];
  if ((plVar3 == (long *)0x0) || (lVar2 = FUN_00136770(0xffffffffffffffff,plVar3 + 1), lVar2 != 0))
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


// ===== 00142ea4  FUN_00142ea4 =====

void FUN_00142ea4(void *param_1)

{
  FUN_00142dd0();
  operator_delete(param_1);
  return;
}


// ===== 00142ec8  FUN_00142ec8 =====

undefined * FUN_00142ec8(void)

{
  return PTR_RNSVGSvgViewComponentName_001a2c70;
}


// ===== 00142ed4  FUN_00142ed4 =====

undefined * FUN_00142ed4(void)

{
  return PTR_RNSVGSvgViewComponentName_001a2c70;
}


// ===== 00142ee0  FUN_00142ee0 =====

undefined8 FUN_00142ee0(void)

{
  return 0x61;
}


// ===== 00142ee8  FUN_00142ee8 =====

void FUN_00142ee8(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar6 = &PTR_FUN_0019ef00;
                    /* try { // try from 00142f54 to 00142f63 has its CatchHandler @ 0014303c */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_0019ef50;
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
                    /* try { // try from 00142ff0 to 00142ffb has its CatchHandler @ 0014302c */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0014306c  FUN_0014306c =====

void FUN_0014306c(undefined8 *param_1,long *param_2,shared_ptr *param_3,ShadowNodeFragment *param_4)

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
  *plVar5 = (long)&PTR_FUN_0019ef00;
                    /* try { // try from 001430c4 to 001430d3 has its CatchHandler @ 00143214 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            (pYVar1,(ShadowNode *)param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_0019ef50;
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
                    /* try { // try from 00143158 to 00143167 has its CatchHandler @ 0014322c */
  facebook::react::YogaLayoutableShadowNode::completeClone
            ((ShadowNode *)pYVar1,(ShadowNodeFragment *)param_3);
  local_78 = pYVar1;
  local_70 = plVar5;
  FUN_00136080(1,plVar5 + 1);
                    /* try { // try from 00143178 to 00143187 has its CatchHandler @ 00143204 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar6 = FUN_00136770(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 001431c4 to 001431cf has its CatchHandler @ 0014322c */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00143254  FUN_00143254 =====

void FUN_00143254(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00143264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 00143268  FUN_00143268 =====

void FUN_00143268(undefined8 *param_1,ulong param_2,PropsParserContext *param_3,long *param_4,
                 RawPropsParser *param_5)

{
  RNSVGSvgViewProps *this;
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
  RNSVGSvgViewProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGSvgViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSVGSvgViewPropsENS0_24RNSVGSvgViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c30
         & 1) == 0) &&
       (param_2 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGSvgViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSVGSvgViewPropsENS0_24RNSVGSvgViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c30
                                     ), (int)param_2 != 0)) {
                    /* try { // try from 0014369c to 0014369f has its CatchHandler @ 001436cc */
      FUN_00143db8();
      __cxa_atexit(FUN_00143d68,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGSvgViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSVGSvgViewPropsENS0_24RNSVGSvgViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c28
                   ,&PTR_LOOP_0019e280);
      param_2 = __cxa_guard_release(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGSvgViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSVGSvgViewPropsENS0_24RNSVGSvgViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c30
                                   );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGSvgViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSVGSvgViewPropsENS0_24RNSVGSvgViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c28
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGSvgViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSVGSvgViewPropsENS0_24RNSVGSvgViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c28
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      param_2 = FUN_00136080(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::parse(param_5);
    pRVar12 = (RNSVGSvgViewProps *)*param_4;
    if (pRVar12 == (RNSVGSvgViewProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGSvgViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSVGSvgViewPropsENS0_24RNSVGSvgViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c30
           & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGSvgViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSVGSvgViewPropsENS0_24RNSVGSvgViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c30
                                     ), iVar7 != 0)) {
                    /* try { // try from 0014361c to 0014361f has its CatchHandler @ 001436e4 */
        FUN_00143db8();
        __cxa_atexit(FUN_00143d68,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGSvgViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSVGSvgViewPropsENS0_24RNSVGSvgViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c28
                     ,&PTR_LOOP_0019e280);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGSvgViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSVGSvgViewPropsENS0_24RNSVGSvgViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c30
                           );
      }
      pRVar12 = *(RNSVGSvgViewProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGSvgViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSVGSvgViewPropsENS0_24RNSVGSvgViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c28
      ;
    }
    plVar9 = (long *)operator_new(2000);
    this = (RNSVGSvgViewProps *)(plVar9 + 3);
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_0019f068;
                    /* try { // try from 00143348 to 0014335b has its CatchHandler @ 00143758 */
    facebook::react::RNSVGSvgViewProps::RNSVGSvgViewProps(this,param_3,pRVar12,(RawProps *)param_5);
                    /* try { // try from 00143360 to 00143373 has its CatchHandler @ 00143770 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid();
    if ((((uVar8 & 1) == 0) ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid
                           (), (uVar8 & 1) == 0)) ||
       (uVar8 = facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(),
       (uVar8 & 1) == 0)) {
LAB_0014339c:
      FUN_00136080(1,plVar9 + 1);
      if ((RawProps *)*param_4 == (RawProps *)0x0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGSvgViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSVGSvgViewPropsENS0_24RNSVGSvgViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c30
             & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGSvgViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSVGSvgViewPropsENS0_24RNSVGSvgViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c30
                                       ), iVar7 != 0)) {
                    /* try { // try from 0014365c to 0014365f has its CatchHandler @ 001436d0 */
          FUN_00143db8();
          __cxa_atexit(FUN_00143d68,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGSvgViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSVGSvgViewPropsENS0_24RNSVGSvgViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c28
                       ,&PTR_LOOP_0019e280);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGSvgViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSVGSvgViewPropsENS0_24RNSVGSvgViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c30
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00143404 to 00143417 has its CatchHandler @ 001436fc */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,
                   *(RawProps **)
                    PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGSvgViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSVGSvgViewPropsENS0_24RNSVGSvgViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c28
                   ,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_00143450:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_00143450;
        }
        if (plVar9 != (long *)0x0) goto LAB_00143464;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 001433b8 to 001433cb has its CatchHandler @ 00143724 */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,(RawProps *)*param_4,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_00143464;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_00143464:
        lVar11 = FUN_00136770(0xffffffffffffffff,plVar9 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 00143380 to 0014338b has its CatchHandler @ 001436f8 */
      __s2 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar7 = strcmp(PTR_RNSVGSvgViewComponentName_001a2c70,__s2);
      if (iVar7 != 0) goto LAB_0014339c;
      bVar3 = false;
    }
                    /* try { // try from 00143490 to 00143493 has its CatchHandler @ 00143770 */
    param_2 = facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter();
    if ((param_2 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 001434a0 to 001434bb has its CatchHandler @ 00143720 */
        param_2 = folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar9 + 7));
      }
      else {
        param_2 = facebook::react::RawProps::operator_cast_to_dynamic((RawProps *)param_5);
      }
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 001435fc to 0014360b has its CatchHandler @ 00143718 */
                    /* WARNING: Subroutine does not return */
          FUN_00141e98(*(undefined8 *)PTR_name_001a2c60);
        }
        goto LAB_001437bc;
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 001435dc to 001435eb has its CatchHandler @ 0014377c */
                    /* WARNING: Subroutine does not return */
            FUN_00141e98(*(undefined8 *)PTR_name_001a2c68);
          }
          goto LAB_001437bc;
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
                    /* try { // try from 0014353c to 00143547 has its CatchHandler @ 00143784 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 0014354c to 00143563 has its CatchHandler @ 00143788 */
        param_2 = facebook::react::HostPlatformViewProps::setProp
                            ((PropsParserContext *)this,(uint)param_3,(char *)(ulong)uVar1,pRVar4);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 00143574 to 0014357f has its CatchHandler @ 00143778 */
          param_2 = (*(code *)(&PTR_FUN_0019ea28)[local_a0])(&uStack_d1,local_d0);
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
LAB_001437bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


// ===== 001437c0  FUN_001437c0 =====

void FUN_001437c0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 001437c8  FUN_001437c8 =====

void FUN_001437c8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 001437d0  FUN_001437d0 =====

void FUN_001437d0(undefined8 *param_1,long param_2,long param_3)

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
  FUN_001423cc(&local_a0,param_3 + 8,param_3 + 4);
                    /* try { // try from 00143814 to 0014381b has its CatchHandler @ 00143af4 */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_0019f0b8;
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
    FUN_00136080(1,local_78 + 0x10);
  }
                    /* try { // try from 00143858 to 00143867 has its CatchHandler @ 00143ac8 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_0019ed40;
                    /* try { // try from 00143874 to 0014387b has its CatchHandler @ 00143ab8 */
  puVar6 = (undefined8 *)operator_new(0x58);
  *puVar6 = &PTR_FUN_0019ed60;
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
  plVar5[3] = (long)&PTR_FUN_0019f108;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_00136770(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_00136770(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00143928 to 0014392f has its CatchHandler @ 00143aa8 */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  *puVar6 = &PTR_FUN_0019ee20;
  pSVar2 = (ShadowNodeFamily *)(puVar6 + 4);
  puVar6[1] = 0;
  puVar6[2] = 0;
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00136080(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00136080(1,local_78 + 0x10);
  }
                    /* try { // try from 00143978 to 0014398f has its CatchHandler @ 00143a78 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_00136770(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = puVar6;
  local_b0 = pSVar2;
  local_a8 = puVar6;
  FUN_00136080(1,puVar6 + 2);
                    /* try { // try from 001439e4 to 001439ef has its CatchHandler @ 00143a58 */
  facebook::react::EventEmitter::setShadowNodeFamily(pEVar1,&local_b0);
  if (local_a8 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_00136770(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00143b1c  FUN_00143b1c =====

void FUN_00143b1c(void)

{
  return;
}


// ===== 00143b20  FUN_00143b20 =====

void FUN_00143b20(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00143b70  FUN_00143b70 =====

void FUN_00143b70(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0019ef00;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00143b80  FUN_00143b80 =====

void FUN_00143b80(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0019ef00;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00143bb0  FUN_00143bb0 =====

void FUN_00143bb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00143bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00143bbc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 00143bc0  FUN_00143bc0 =====

void FUN_00143bc0(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_001a2bb0 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00136770(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
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
  FUN_0013b73c(param_1 + 0x23);
  FUN_0013b640(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00143c80  FUN_00143c80 =====

void FUN_00143c80(long param_1)

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


// ===== 00143ce8  FUN_00143ce8 =====

bool FUN_00143ce8(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 00143d00  FUN_00143d00 =====

bool FUN_00143d00(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 00143d18  FUN_00143d18 =====

void FUN_00143d18(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00143d68  FUN_00143d68 =====

void FUN_00143d68(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00143db8  FUN_00143db8 =====

void FUN_00143db8(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(2000);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_0019f018;
  memset(__s,0,0x7b8);
                    /* try { // try from 00143df4 to 00143e07 has its CatchHandler @ 00143ea8 */
  FUN_0014102c(__s,PTR_PTR_001a2c80 + 0x10);
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
  puVar1 = PTR_vtable_001a2c78;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined4 *)(puVar2 + 0xdf) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar2[0xe0] = 0;
  *(undefined4 *)(puVar2 + 0xe5) = 0;
  puVar2[0xe6] = 0;
  puVar2[0xf5] = 0;
  puVar2[0xf2] = 0;
  puVar2[0xf1] = 0;
  puVar2[0xf0] = 0;
  puVar2[0xef] = 0;
  puVar2[0xee] = 0;
  puVar2[0xed] = 0;
  puVar2[0xec] = 0;
  puVar2[0xeb] = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGSvgViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSVGSvgViewPropsENS0_24RNSVGSvgViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001a2c28
  ;
  *(undefined8 *)((long)puVar2 + 0x79c) = 0;
  *(undefined8 *)((long)puVar2 + 0x794) = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 00143ec4  FUN_00143ec4 =====

void FUN_00143ec4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0019f018;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00143ed4  FUN_00143ed4 =====

void FUN_00143ed4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0019f018;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00143f04  FUN_00143f04 =====

void FUN_00143f04(long param_1)

{
  folly::dynamic::destroy();
  if ((*(byte *)(param_1 + 0x788) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x798));
  }
  if ((*(byte *)(param_1 + 0x768) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x778));
  }
  folly::dynamic::destroy();
  folly::dynamic::destroy();
  FUN_00140f1c(param_1 + 0x18,PTR_PTR_001a2c80 + 8);
  return;
}


// ===== 00143f68  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 00143f6c  FUN_00143f6c =====

void FUN_00143f6c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0019f068;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00143f7c  FUN_00143f7c =====

void FUN_00143f7c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0019f068;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00143fac  FUN_00143fac =====

void FUN_00143fac(long param_1)

{
  folly::dynamic::destroy();
  if ((*(byte *)(param_1 + 0x788) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x798));
  }
  if ((*(byte *)(param_1 + 0x768) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x778));
  }
  folly::dynamic::destroy();
  folly::dynamic::destroy();
  FUN_00140f1c(param_1 + 0x18,PTR_PTR_001a2c80 + 8);
  return;
}


// ===== 00144010  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 00144014  FUN_00144014 =====

void FUN_00144014(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00144064  FUN_00144064 =====

void FUN_00144064(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0019f0b8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00144074  FUN_00144074 =====

void FUN_00144074(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0019f0b8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001440a4  FUN_001440a4 =====

void FUN_001440a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001440ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 001440b0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 001440b4  FUN_001440b4 =====

void FUN_001440b4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_0019ed40;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_0019edb0;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00144168  FUN_00144168 =====

void FUN_00144168(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_0019ed40;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_0019edb0;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00136770(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 00144218  facebook::react::RNSVGCircleEventEmitter::onSvgLayout =====

/* facebook::react::RNSVGCircleEventEmitter::onSvgLayout(facebook::react::RNSVGCircleEventEmitter::OnSvgLayout)
   const */

void facebook::react::RNSVGCircleEventEmitter::onSvgLayout
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  void *local_68;
  undefined **local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x12;
  local_6f = 0x74;
  local_77 = (char  [8])s_svgLayout_0011ee19._0_8_;
  local_60 = &PTR_FUN_0019f180;
                    /* try { // try from 0014426c to 0014427b has its CatchHandler @ 001442d8 */
  uStack_58 = param_2;
  local_50 = param_3;
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_001442a8;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_001442a8:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00144338  facebook::react::RNSVGClipPathEventEmitter::onSvgLayout =====

/* facebook::react::RNSVGClipPathEventEmitter::onSvgLayout(facebook::react::RNSVGClipPathEventEmitter::OnSvgLayout)
   const */

void facebook::react::RNSVGClipPathEventEmitter::onSvgLayout
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  void *local_68;
  undefined **local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x12;
  local_6f = 0x74;
  local_77 = (char  [8])s_svgLayout_0011ee19._0_8_;
  local_60 = &PTR_FUN_0019f210;
                    /* try { // try from 0014438c to 0014439b has its CatchHandler @ 001443f8 */
  uStack_58 = param_2;
  local_50 = param_3;
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_001443c8;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_001443c8:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00144458  facebook::react::RNSVGEllipseEventEmitter::onSvgLayout =====

/* facebook::react::RNSVGEllipseEventEmitter::onSvgLayout(facebook::react::RNSVGEllipseEventEmitter::OnSvgLayout)
   const */

void facebook::react::RNSVGEllipseEventEmitter::onSvgLayout
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  void *local_68;
  undefined **local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x12;
  local_6f = 0x74;
  local_77 = (char  [8])s_svgLayout_0011ee19._0_8_;
  local_60 = &PTR_FUN_0019f290;
                    /* try { // try from 001444ac to 001444bb has its CatchHandler @ 00144518 */
  uStack_58 = param_2;
  local_50 = param_3;
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_001444e8;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_001444e8:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00144578  facebook::react::RNSVGForeignObjectEventEmitter::onSvgLayout =====

/* facebook::react::RNSVGForeignObjectEventEmitter::onSvgLayout(facebook::react::RNSVGForeignObjectEventEmitter::OnSvgLayout)
   const */

void facebook::react::RNSVGForeignObjectEventEmitter::onSvgLayout
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  void *local_68;
  undefined **local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x12;
  local_6f = 0x74;
  local_77 = (char  [8])s_svgLayout_0011ee19._0_8_;
  local_60 = &PTR_FUN_0019f310;
                    /* try { // try from 001445cc to 001445db has its CatchHandler @ 00144638 */
  uStack_58 = param_2;
  local_50 = param_3;
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00144608;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00144608:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00144698  facebook::react::RNSVGGroupEventEmitter::onSvgLayout =====

/* facebook::react::RNSVGGroupEventEmitter::onSvgLayout(facebook::react::RNSVGGroupEventEmitter::OnSvgLayout)
   const */

void facebook::react::RNSVGGroupEventEmitter::onSvgLayout
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  void *local_68;
  undefined **local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x12;
  local_6f = 0x74;
  local_77 = (char  [8])s_svgLayout_0011ee19._0_8_;
  local_60 = &PTR_FUN_0019f390;
                    /* try { // try from 001446ec to 001446fb has its CatchHandler @ 00144758 */
  uStack_58 = param_2;
  local_50 = param_3;
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00144728;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00144728:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001447b8  facebook::react::RNSVGImageEventEmitter::onLoad =====

/* facebook::react::RNSVGImageEventEmitter::onLoad(facebook::react::RNSVGImageEventEmitter::OnLoad)
   const */

void __thiscall
facebook::react::RNSVGImageEventEmitter::onLoad(RNSVGImageEventEmitter *this,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  byte local_a8 [16];
  void *local_98;
  undefined7 local_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_a8[0] = 8;
  lVar3 = param_2[1];
  lVar5 = param_2[2];
  lVar1 = param_2[3];
  local_a8[1] = 0x6c;
  local_a8[2] = 0x6f;
  local_a8[3] = 0x61;
  local_a8[4] = 100;
  lVar6 = *param_2;
  local_a8[5] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_90 = (undefined7)*(undefined8 *)((long)param_2 + 9);
  uStack_89 = (undefined1)lVar5;
  uStack_88 = (undefined7)((ulong)lVar5 >> 8);
  param_2[3] = 0;
                    /* try { // try from 00144818 to 0014481f has its CatchHandler @ 001448f8 */
  local_60 = (long *)operator_new(0x28);
  *local_60 = (long)&PTR_FUN_0019f410;
  local_60[1] = lVar6;
  *(char *)(local_60 + 2) = (char)lVar3;
  *(ulong *)((long)local_60 + 0x11) = CONCAT17(uStack_89,local_90);
  local_60[3] = CONCAT71(uStack_88,uStack_89);
  local_60[4] = lVar1;
                    /* try { // try from 00144844 to 0014485b has its CatchHandler @ 001448c0 */
  facebook::react::EventEmitter::dispatchEvent(this,local_a8,local_80,2);
  if (local_60 == local_80) {
    lVar5 = 4;
    plVar4 = local_80;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00144888;
    lVar5 = 5;
    plVar4 = local_60;
  }
  (**(code **)(*plVar4 + lVar5 * 8))();
LAB_00144888:
  if ((local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00144934  facebook::react::RNSVGImageEventEmitter::onSvgLayout =====

/* facebook::react::RNSVGImageEventEmitter::onSvgLayout(facebook::react::RNSVGImageEventEmitter::OnSvgLayout)
   const */

void facebook::react::RNSVGImageEventEmitter::onSvgLayout
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  void *local_68;
  undefined **local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x12;
  local_6f = 0x74;
  local_77 = (char  [8])s_svgLayout_0011ee19._0_8_;
  local_60 = &PTR_FUN_0019f490;
                    /* try { // try from 00144988 to 00144997 has its CatchHandler @ 001449f4 */
  uStack_58 = param_2;
  local_50 = param_3;
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_001449c4;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_001449c4:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00144a54  facebook::react::RNSVGLineEventEmitter::onSvgLayout =====

/* facebook::react::RNSVGLineEventEmitter::onSvgLayout(facebook::react::RNSVGLineEventEmitter::OnSvgLayout)
   const */

void facebook::react::RNSVGLineEventEmitter::onSvgLayout
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  void *local_68;
  undefined **local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x12;
  local_6f = 0x74;
  local_77 = (char  [8])s_svgLayout_0011ee19._0_8_;
  local_60 = &PTR_FUN_0019f510;
                    /* try { // try from 00144aa8 to 00144ab7 has its CatchHandler @ 00144b14 */
  uStack_58 = param_2;
  local_50 = param_3;
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00144ae4;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00144ae4:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00144b74  facebook::react::RNSVGMaskEventEmitter::onSvgLayout =====

/* facebook::react::RNSVGMaskEventEmitter::onSvgLayout(facebook::react::RNSVGMaskEventEmitter::OnSvgLayout)
   const */

void facebook::react::RNSVGMaskEventEmitter::onSvgLayout
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  void *local_68;
  undefined **local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x12;
  local_6f = 0x74;
  local_77 = (char  [8])s_svgLayout_0011ee19._0_8_;
  local_60 = &PTR_FUN_0019f590;
                    /* try { // try from 00144bc8 to 00144bd7 has its CatchHandler @ 00144c34 */
  uStack_58 = param_2;
  local_50 = param_3;
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00144c04;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00144c04:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00144c94  facebook::react::RNSVGPathEventEmitter::onSvgLayout =====

/* facebook::react::RNSVGPathEventEmitter::onSvgLayout(facebook::react::RNSVGPathEventEmitter::OnSvgLayout)
   const */

void facebook::react::RNSVGPathEventEmitter::onSvgLayout
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  void *local_68;
  undefined **local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x12;
  local_6f = 0x74;
  local_77 = (char  [8])s_svgLayout_0011ee19._0_8_;
  local_60 = &PTR_FUN_0019f610;
                    /* try { // try from 00144ce8 to 00144cf7 has its CatchHandler @ 00144d54 */
  uStack_58 = param_2;
  local_50 = param_3;
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00144d24;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00144d24:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00144db4  facebook::react::RNSVGRectEventEmitter::onSvgLayout =====

/* facebook::react::RNSVGRectEventEmitter::onSvgLayout(facebook::react::RNSVGRectEventEmitter::OnSvgLayout)
   const */

void facebook::react::RNSVGRectEventEmitter::onSvgLayout
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  void *local_68;
  undefined **local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x12;
  local_6f = 0x74;
  local_77 = (char  [8])s_svgLayout_0011ee19._0_8_;
  local_60 = &PTR_FUN_0019f690;
                    /* try { // try from 00144e08 to 00144e17 has its CatchHandler @ 00144e74 */
  uStack_58 = param_2;
  local_50 = param_3;
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00144e44;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00144e44:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00144ed4  facebook::react::RNSVGTSpanEventEmitter::onSvgLayout =====

/* facebook::react::RNSVGTSpanEventEmitter::onSvgLayout(facebook::react::RNSVGTSpanEventEmitter::OnSvgLayout)
   const */

void facebook::react::RNSVGTSpanEventEmitter::onSvgLayout
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  void *local_68;
  undefined **local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x12;
  local_6f = 0x74;
  local_77 = (char  [8])s_svgLayout_0011ee19._0_8_;
  local_60 = &PTR_FUN_0019f710;
                    /* try { // try from 00144f28 to 00144f37 has its CatchHandler @ 00144f94 */
  uStack_58 = param_2;
  local_50 = param_3;
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00144f64;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00144f64:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00144ff4  facebook::react::RNSVGTextEventEmitter::onSvgLayout =====

/* facebook::react::RNSVGTextEventEmitter::onSvgLayout(facebook::react::RNSVGTextEventEmitter::OnSvgLayout)
   const */

void facebook::react::RNSVGTextEventEmitter::onSvgLayout
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  void *local_68;
  undefined **local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x12;
  local_6f = 0x74;
  local_77 = (char  [8])s_svgLayout_0011ee19._0_8_;
  local_60 = &PTR_FUN_0019f790;
                    /* try { // try from 00145048 to 00145057 has its CatchHandler @ 001450b4 */
  uStack_58 = param_2;
  local_50 = param_3;
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00145084;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00145084:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00145114  facebook::react::RNSVGTextPathEventEmitter::onSvgLayout =====

/* facebook::react::RNSVGTextPathEventEmitter::onSvgLayout(facebook::react::RNSVGTextPathEventEmitter::OnSvgLayout)
   const */

void facebook::react::RNSVGTextPathEventEmitter::onSvgLayout
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  void *local_68;
  undefined **local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x12;
  local_6f = 0x74;
  local_77 = (char  [8])s_svgLayout_0011ee19._0_8_;
  local_60 = &PTR_FUN_0019f810;
                    /* try { // try from 00145168 to 00145177 has its CatchHandler @ 001451d4 */
  uStack_58 = param_2;
  local_50 = param_3;
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_001451a4;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_001451a4:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00145234  facebook::react::RNSVGUseEventEmitter::onSvgLayout =====

/* facebook::react::RNSVGUseEventEmitter::onSvgLayout(facebook::react::RNSVGUseEventEmitter::OnSvgLayout)
   const */

void facebook::react::RNSVGUseEventEmitter::onSvgLayout
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  void *local_68;
  undefined **local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x12;
  local_6f = 0x74;
  local_77 = (char  [8])s_svgLayout_0011ee19._0_8_;
  local_60 = &PTR_FUN_0019f890;
                    /* try { // try from 00145288 to 00145297 has its CatchHandler @ 001452f4 */
  uStack_58 = param_2;
  local_50 = param_3;
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_001452c4;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_001452c4:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00145354  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 00145358  FUN_00145358 =====

void FUN_00145358(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_0019f180;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  return;
}


// ===== 00145390  FUN_00145390 =====

void FUN_00145390(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_0019f180;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}


// ===== 001453a8  FUN_001453a8 =====

void FUN_001453a8(void)

{
  return;
}


// ===== 001453ac  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 001453b0  FUN_001453b0 =====

void FUN_001453b0(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_50,param_3);
                    /* try { // try from 001453f8 to 00145403 has its CatchHandler @ 001454cc */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 0014540c to 00145483 has its CatchHandler @ 001454d4 */
  FUN_00145548(&local_48,param_3,&DAT_0011f760,param_2 + 8);
  FUN_00145548(&local_48,param_3,&DAT_0011ff3e,param_2 + 0xc);
  FUN_00145548(&local_48,param_3,"width",param_2 + 0x10);
  FUN_00145548(&local_48,param_3,"height",param_2 + 0x14);
  FUN_00145650(&local_50,param_3,"layout",&local_48);
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


// ===== 00145520  FUN_00145520 =====

long FUN_00145520(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react23RNSVGCircleEventEmitter11onSvgLayoutENS1_11OnSvgLayoutEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0014553c  FUN_0014553c =====

pointer_____offset_0x10___ * FUN_0014553c(void)

{
  return &PTR_vtable_0019f1f0;
}


// ===== 00145548  FUN_00145548 =====

void FUN_00145548(undefined8 param_1,long *param_2,char *param_3,int *param_4)

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
                    /* try { // try from 001455bc to 001455cf has its CatchHandler @ 00145614 */
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


// ===== 00145650  FUN_00145650 =====

void FUN_00145650(undefined8 param_1,long *param_2,char *param_3,undefined8 *param_4)

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
                    /* try { // try from 001456bc to 001456c3 has its CatchHandler @ 00145738 */
  local_50 = (**(code **)(*param_2 + 0x88))(param_2,*param_4);
                    /* try { // try from 001456d0 to 001456e3 has its CatchHandler @ 00145728 */
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


// ===== 00145774  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 00145778  FUN_00145778 =====

void FUN_00145778(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_0019f210;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  return;
}


// ===== 001457b0  FUN_001457b0 =====

void FUN_001457b0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_0019f210;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}


// ===== 001457c8  FUN_001457c8 =====

void FUN_001457c8(void)

{
  return;
}


// ===== 001457cc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 001457d0  FUN_001457d0 =====

void FUN_001457d0(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_50,param_3);
                    /* try { // try from 00145818 to 00145823 has its CatchHandler @ 001458ec */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 0014582c to 001458a3 has its CatchHandler @ 001458f4 */
  FUN_00145548(&local_48,param_3,&DAT_0011f760,param_2 + 8);
  FUN_00145548(&local_48,param_3,&DAT_0011ff3e,param_2 + 0xc);
  FUN_00145548(&local_48,param_3,"width",param_2 + 0x10);
  FUN_00145548(&local_48,param_3,"height",param_2 + 0x14);
  FUN_00145650(&local_50,param_3,"layout",&local_48);
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


// ===== 00145940  FUN_00145940 =====

long FUN_00145940(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react25RNSVGClipPathEventEmitter11onSvgLayoutENS1_11OnSvgLayoutEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0014595c  FUN_0014595c =====

pointer_____offset_0x10___ * FUN_0014595c(void)

{
  return &PTR_vtable_0019f270;
}


// ===== 00145968  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 0014596c  FUN_0014596c =====

void FUN_0014596c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_0019f290;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  return;
}


// ===== 001459a4  FUN_001459a4 =====

void FUN_001459a4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_0019f290;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}


// ===== 001459bc  FUN_001459bc =====

void FUN_001459bc(void)

{
  return;
}


// ===== 001459c0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 001459c4  FUN_001459c4 =====

void FUN_001459c4(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_50,param_3);
                    /* try { // try from 00145a0c to 00145a17 has its CatchHandler @ 00145ae0 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 00145a20 to 00145a97 has its CatchHandler @ 00145ae8 */
  FUN_00145548(&local_48,param_3,&DAT_0011f760,param_2 + 8);
  FUN_00145548(&local_48,param_3,&DAT_0011ff3e,param_2 + 0xc);
  FUN_00145548(&local_48,param_3,"width",param_2 + 0x10);
  FUN_00145548(&local_48,param_3,"height",param_2 + 0x14);
  FUN_00145650(&local_50,param_3,"layout",&local_48);
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


// ===== 00145b34  FUN_00145b34 =====

long FUN_00145b34(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react24RNSVGEllipseEventEmitter11onSvgLayoutENS1_11OnSvgLayoutEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00145b50  FUN_00145b50 =====

pointer_____offset_0x10___ * FUN_00145b50(void)

{
  return &PTR_vtable_0019f2f0;
}


// ===== 00145b5c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 00145b60  FUN_00145b60 =====

void FUN_00145b60(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_0019f310;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  return;
}


// ===== 00145b98  FUN_00145b98 =====

void FUN_00145b98(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_0019f310;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}


// ===== 00145bb0  FUN_00145bb0 =====

void FUN_00145bb0(void)

{
  return;
}


// ===== 00145bb4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 00145bb8  FUN_00145bb8 =====

void FUN_00145bb8(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_50,param_3);
                    /* try { // try from 00145c00 to 00145c0b has its CatchHandler @ 00145cd4 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 00145c14 to 00145c8b has its CatchHandler @ 00145cdc */
  FUN_00145548(&local_48,param_3,&DAT_0011f760,param_2 + 8);
  FUN_00145548(&local_48,param_3,&DAT_0011ff3e,param_2 + 0xc);
  FUN_00145548(&local_48,param_3,"width",param_2 + 0x10);
  FUN_00145548(&local_48,param_3,"height",param_2 + 0x14);
  FUN_00145650(&local_50,param_3,"layout",&local_48);
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


// ===== 00145d28  FUN_00145d28 =====

long FUN_00145d28(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react30RNSVGForeignObjectEventEmitter11onSvgLayoutENS1_11OnSvgLayoutEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00145d44  FUN_00145d44 =====

pointer_____offset_0x10___ * FUN_00145d44(void)

{
  return &PTR_vtable_0019f370;
}


// ===== 00145d50  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 00145d54  FUN_00145d54 =====

void FUN_00145d54(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_0019f390;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  return;
}


// ===== 00145d8c  FUN_00145d8c =====

void FUN_00145d8c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_0019f390;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}


// ===== 00145da4  FUN_00145da4 =====

void FUN_00145da4(void)

{
  return;
}


// ===== 00145da8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 00145dac  FUN_00145dac =====

void FUN_00145dac(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_50,param_3);
                    /* try { // try from 00145df4 to 00145dff has its CatchHandler @ 00145ec8 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 00145e08 to 00145e7f has its CatchHandler @ 00145ed0 */
  FUN_00145548(&local_48,param_3,&DAT_0011f760,param_2 + 8);
  FUN_00145548(&local_48,param_3,&DAT_0011ff3e,param_2 + 0xc);
  FUN_00145548(&local_48,param_3,"width",param_2 + 0x10);
  FUN_00145548(&local_48,param_3,"height",param_2 + 0x14);
  FUN_00145650(&local_50,param_3,"layout",&local_48);
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


// ===== 00145f1c  FUN_00145f1c =====

long FUN_00145f1c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react22RNSVGGroupEventEmitter11onSvgLayoutENS1_11OnSvgLayoutEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00145f38  FUN_00145f38 =====

pointer_____offset_0x10___ * FUN_00145f38(void)

{
  return &PTR_vtable_0019f3f0;
}


// ===== 00145f44  FUN_00145f44 =====

void FUN_00145f44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0019f410;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}


// ===== 00145f64  FUN_00145f64 =====

void FUN_00145f64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0019f410;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00145fa4  FUN_00145fa4 =====

undefined8 * FUN_00145fa4(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x28);
  bVar1 = *(byte *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_0019f410;
  puVar2[1] = uVar3;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = uVar4;
    puVar2[4] = uVar3;
  }
  else {
                    /* try { // try from 00145ff4 to 00145ffb has its CatchHandler @ 0014600c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 2),*(char **)(param_1 + 0x20),*(ulong *)(param_1 + 0x18));
  }
  return puVar2;
}


// ===== 00146020  FUN_00146020 =====

void FUN_00146020(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_0019f410;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    param_2[4] = *(undefined8 *)(param_1 + 0x20);
    param_2[3] = uVar2;
    param_2[2] = uVar1;
    return;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  __init_copy_ctor_external
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_2 + 2),*(char **)(param_1 + 0x20),*(ulong *)(param_1 + 0x18));
  return;
}


// ===== 00146064  FUN_00146064 =====

void FUN_00146064(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x20));
  return;
}


// ===== 00146078  FUN_00146078 =====

void FUN_00146078(void *param_1)

{
  if ((*(byte *)((long)param_1 + 0x10) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x20));
  }
  operator_delete(param_1);
  return;
}


// ===== 001460ac  FUN_001460ac =====

void FUN_001460ac(undefined4 *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_60,param_3);
                    /* try { // try from 001460f4 to 001460ff has its CatchHandler @ 00146298 */
  (**(code **)(*param_3 + 0x130))(&local_48,param_3);
  local_58 = (undefined8 *)CONCAT44(uStack_44,local_48);
                    /* try { // try from 00146108 to 00146157 has its CatchHandler @ 001462a8 */
  FUN_001462f4(&local_58,param_3,"width",param_2 + 8);
  FUN_001462f4(&local_58,param_3,"height",param_2 + 0xc);
  (**(code **)(*param_3 + 0x108))(&local_50,param_3,&DAT_0011fb16,3);
  uVar1 = (ulong)(*(byte *)(param_2 + 0x10) >> 1);
  lVar3 = param_2 + 0x11;
  if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 0x18);
    lVar3 = *(long *)(param_2 + 0x20);
  }
                    /* try { // try from 00146180 to 0014618b has its CatchHandler @ 0014623c */
  (**(code **)(*param_3 + 0x110))(auStack_40,param_3,lVar3,uVar1);
  local_48 = 6;
                    /* try { // try from 0014619c to 001461af has its CatchHandler @ 0014622c */
  (**(code **)(*param_3 + 0x1b8))(param_3,&local_58,&local_50,&local_48);
  facebook::jsi::Value::~Value((Value *)&local_48);
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)();
  }
                    /* try { // try from 001461cc to 001461e3 has its CatchHandler @ 001462a8 */
  FUN_00145650(&local_60,param_3,"source",&local_58);
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)();
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_60;
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001462cc  FUN_001462cc =====

long FUN_001462cc(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react22RNSVGImageEventEmitter6onLoadENS1_6OnLoadEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 001462e8  FUN_001462e8 =====

pointer_____offset_0x10___ * FUN_001462e8(void)

{
  return &PTR_vtable_0019f470;
}


// ===== 001462f4  FUN_001462f4 =====

void FUN_001462f4(undefined8 param_1,long *param_2,char *param_3,float *param_4)

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
                    /* try { // try from 00146368 to 0014637b has its CatchHandler @ 001463c0 */
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


// ===== 001463fc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 00146400  FUN_00146400 =====

void FUN_00146400(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_0019f490;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  return;
}


// ===== 00146438  FUN_00146438 =====

void FUN_00146438(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_0019f490;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}


// ===== 00146450  FUN_00146450 =====

void FUN_00146450(void)

{
  return;
}


// ===== 00146454  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 00146458  FUN_00146458 =====

void FUN_00146458(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_50,param_3);
                    /* try { // try from 001464a0 to 001464ab has its CatchHandler @ 00146574 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 001464b4 to 0014652b has its CatchHandler @ 0014657c */
  FUN_00145548(&local_48,param_3,&DAT_0011f760,param_2 + 8);
  FUN_00145548(&local_48,param_3,&DAT_0011ff3e,param_2 + 0xc);
  FUN_00145548(&local_48,param_3,"width",param_2 + 0x10);
  FUN_00145548(&local_48,param_3,"height",param_2 + 0x14);
  FUN_00145650(&local_50,param_3,"layout",&local_48);
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


// ===== 001465c8  FUN_001465c8 =====

long FUN_001465c8(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react22RNSVGImageEventEmitter11onSvgLayoutENS1_11OnSvgLayoutEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 001465e4  FUN_001465e4 =====

pointer_____offset_0x10___ * FUN_001465e4(void)

{
  return &PTR_vtable_0019f4f0;
}


// ===== 001465f0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 001465f4  FUN_001465f4 =====

void FUN_001465f4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_0019f510;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  return;
}


// ===== 0014662c  FUN_0014662c =====

void FUN_0014662c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_0019f510;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}


// ===== 00146644  FUN_00146644 =====

void FUN_00146644(void)

{
  return;
}


// ===== 00146648  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 0014664c  FUN_0014664c =====

void FUN_0014664c(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_50,param_3);
                    /* try { // try from 00146694 to 0014669f has its CatchHandler @ 00146768 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 001466a8 to 0014671f has its CatchHandler @ 00146770 */
  FUN_00145548(&local_48,param_3,&DAT_0011f760,param_2 + 8);
  FUN_00145548(&local_48,param_3,&DAT_0011ff3e,param_2 + 0xc);
  FUN_00145548(&local_48,param_3,"width",param_2 + 0x10);
  FUN_00145548(&local_48,param_3,"height",param_2 + 0x14);
  FUN_00145650(&local_50,param_3,"layout",&local_48);
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


// ===== 001467bc  FUN_001467bc =====

long FUN_001467bc(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react21RNSVGLineEventEmitter11onSvgLayoutENS1_11OnSvgLayoutEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 001467d8  FUN_001467d8 =====

pointer_____offset_0x10___ * FUN_001467d8(void)

{
  return &PTR_vtable_0019f570;
}


// ===== 001467e4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 001467e8  FUN_001467e8 =====

void FUN_001467e8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_0019f590;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  return;
}


// ===== 00146820  FUN_00146820 =====

void FUN_00146820(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_0019f590;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}


// ===== 00146838  FUN_00146838 =====

void FUN_00146838(void)

{
  return;
}


// ===== 0014683c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 00146840  FUN_00146840 =====

void FUN_00146840(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_50,param_3);
                    /* try { // try from 00146888 to 00146893 has its CatchHandler @ 0014695c */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 0014689c to 00146913 has its CatchHandler @ 00146964 */
  FUN_00145548(&local_48,param_3,&DAT_0011f760,param_2 + 8);
  FUN_00145548(&local_48,param_3,&DAT_0011ff3e,param_2 + 0xc);
  FUN_00145548(&local_48,param_3,"width",param_2 + 0x10);
  FUN_00145548(&local_48,param_3,"height",param_2 + 0x14);
  FUN_00145650(&local_50,param_3,"layout",&local_48);
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


// ===== 001469b0  FUN_001469b0 =====

long FUN_001469b0(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react21RNSVGMaskEventEmitter11onSvgLayoutENS1_11OnSvgLayoutEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 001469cc  FUN_001469cc =====

pointer_____offset_0x10___ * FUN_001469cc(void)

{
  return &PTR_vtable_0019f5f0;
}


// ===== 001469d8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 001469dc  FUN_001469dc =====

void FUN_001469dc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_0019f610;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  return;
}


// ===== 00146a14  FUN_00146a14 =====

void FUN_00146a14(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_0019f610;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}


// ===== 00146a2c  FUN_00146a2c =====

void FUN_00146a2c(void)

{
  return;
}


// ===== 00146a30  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 00146a34  FUN_00146a34 =====

void FUN_00146a34(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_50,param_3);
                    /* try { // try from 00146a7c to 00146a87 has its CatchHandler @ 00146b50 */
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
  local_48 = local_40;
                    /* try { // try from 00146a90 to 00146b07 has its CatchHandler @ 00146b58 */
  FUN_00145548(&local_48,param_3,&DAT_0011f760,param_2 + 8);
  FUN_00145548(&local_48,param_3,&DAT_0011ff3e,param_2 + 0xc);
  FUN_00145548(&local_48,param_3,"width",param_2 + 0x10);
  FUN_00145548(&local_48,param_3,"height",param_2 + 0x14);
  FUN_00145650(&local_50,param_3,"layout",&local_48);
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


// ===== 00146ba4  FUN_00146ba4 =====

long FUN_00146ba4(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react21RNSVGPathEventEmitter11onSvgLayoutENS1_11OnSvgLayoutEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00146bc0  FUN_00146bc0 =====

pointer_____offset_0x10___ * FUN_00146bc0(void)

{
  return &PTR_vtable_0019f670;
}


// ===== 00146bcc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a2ff0)();
  return;
}


// ===== 00146bd0  FUN_00146bd0 =====

void FUN_00146bd0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_0019f690;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  return;
}


// ===== 00146c08  FUN_00146c08 =====

void FUN_00146c08(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_0019f690;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}


